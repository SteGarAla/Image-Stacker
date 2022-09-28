/**
 * @file stacker.h
 * @author Steven Garcia-Alamilla
 * @date 2022-09-28
 * @brief stacker.h
 * 
 * Where we will delcare all the methods and attributes for the stacker class
 */

#ifndef STACKER_H
#define STACKER_H

#include <iostream>
#include <vector>


/**
 * stacker class will be used in order to find the average value of an image
 *
 * @class stacker{ stacker.h "Image-Stacker/stacker.h"
 * @brief Will process the image using members and return a hopefully nice image
 *
 */
class stacker{
  
 private:
  std::string magic_number;
    int width, height;
    int max_color;

    //the struct "pixel" which will hold the rgb value of the pixels
    struct pixel{
      int red;
      int green;
      int blue;
    };

    //Vector that will hold the structs
    std::vector<pixel>pixels;
    
    //Additional private attributes                                                                                                                                              
    std::string fName;
    int imgQty;
    
    //Additional private methods                                                                                                                                                                  

/**
 * Will do all the processing hence the name process
 *
 * @param std::string& currIMG The current image that is going to be processed
 * @pre valid file name so that the if statements work as needed
 * @return void doesnt return anything
 * @post vector will have the information added
 * 
 */
    void process(std::string& currIMG);
    

/**
 * Will divide the vectors elements by 10, could of just added this to process method but wanted to show where the division would occur.
 *
 * @param  
 * @pre pixels vector needs to have elements inside so that something actually gets returned to the output file
 * @return void 
 * @post everything in the pixels vector (rbg))will be divided by 10
 * 
 */
    void divide();

    

/**
 * will print the info in the vector to an output file
 *
 * @param  
 * @pre vector must divided so that its the average value and looks nice
 * @return Void 
 * @post there will be an output file named "imageYouChose".ppm ex:orion.ppm
 * 
 */
    void print();
    
 public:
    //Additional method                                                                                                                                                                                 

/**
 * main public method, every other method is placed to be called inside here
 *
 * @param std::string fName,int imgQty then name of the file and the amount of images they want processed
 * @return void 
 * 
 */
    void imageChoice(std::string fName,int imgQty);
};
#endif //STACKER_H  
