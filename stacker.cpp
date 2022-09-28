/**
 * @file stacker.cpp
 * @author Steven Garcia-Alamilla
 * @date 2022-09-28
 * @brief stacker.cpp is 
 * 
 * Implementation file for the stacker class
 */

#include "stacker.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;


void stacker::imageChoice(string fName,int imgQty){

    this->fName = fName;
    this->imgQty = imgQty;

    if(fName != "orion" && fName != "cone_nebula" && fName != "n44f" && fName != "wfc3_uvis" && imgQty >= 1 && imgQty <= 10){
        cout << "Try entering valid fileName and valid amount of images" << endl;
        return;
    }
    else{
        cout << "Stacking images: " << endl;

        string currIMG;        for(int i = 0; i < imgQty; i++){
            currIMG = fName + "/" + fName + "_00" + to_string(i + 1) +  ".ppm";
            if(i == 9){
                currIMG = fName + "/" + fName + "_0" + to_string(i + 1) +  ".ppm";
            }
            process(currIMG);
        }

        cout << endl;
        cout << "Stacking succeeded." << endl;
        divide();
        print();
    }
}


void stacker::process(std::string& currIMG){


    ifstream file;
    int r,g,b;
    file.open(currIMG);

    file >> magic_number;

    file>> width;

    file >> height;

    file >> max_color;

    pixels.reserve(width * height);
    int i = 0;
    file >> r;
    while(file){
        pixels[i].red += r;

        file >> g;
        pixels[i].green += g;

        file >> b;
        pixels[i].blue += b;

        file >> r;
        i++;
    }
    cout << "    " << currIMG << endl;
    file.close();
}

void stacker::divide(){
    for(int i = 0; i < width * height; i++){
        pixels[i].red /= imgQty;
        pixels[i].green /= imgQty;
        pixels[i].blue /= imgQty;
    }

}
void stacker::print(){
    string oFile = fName + ".ppm";

    cout << "output written to: " << oFile << endl;
    ofstream file;
    file.open(oFile);

    file << magic_number << endl;
    file << width << " " << height << endl;
    file << max_color << endl;


    for(int i = 0; i < width * height; i++){
        file <<  setw(4) << left << pixels[i].red << setw(4) << pixels[i].green << setw(4) << pixels[i].blue << endl;
    }
}

