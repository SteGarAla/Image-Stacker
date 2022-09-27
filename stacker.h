#ifndef STACKER_H
#define STACKER_H

#include <iostream>
#include <vector>

class stacker{
  
 private:
  std::string magic_number;
    int width, height;
    int max_color;
    
    struct pixel{
      int red;
      int green;
      int blue;
      
      pixel(int r,int g, int b){
	red = r;
	green = g;
	blue = b;
        }
    };
    
    std::vector<pixel>pixels;
    
    //Additional private attributes                                                                                                                                                                
    std::string fName;
    int imgQty;
    
    //Additional private methods                                                                                                                                                                  
    void process(std::string& currIMG);
    void divide();
    void print();
    
 public:
    //Additional method                                                                                                                                                                                 
    void imageChoice(std::string fName,int imgQty);
};
#endif //STACKER_H  
