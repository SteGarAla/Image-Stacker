/**
 * @file main.cpp
 * @author Steven Garcia-Alamilla
 * @date 2022-09-22
 * @brief driver file for image stacker project
 *
 * Testing methods to see if they worked
 */


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "stacker.h"

using namespace std;

int main() {
    string imageName;
    int imageAmount;

    cout << "Please enter the image you wish to stack: " << endl;
    cin >> imageName;

    cout << "Please enter the number of images: " << endl;
    cin >> imageAmount;

    //call a method with imageName & imageAmount parameters

    stacker obj;

    obj.imageChoice(imageName,imageAmount);



    return 0;
}

