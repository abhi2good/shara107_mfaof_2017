//
//  Ball.hpp
//  TestBall
//
//  Created by Abhishek Sharma on 9/17/17.
//
//

#ifndef Ball_hpp
#define Ball_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Ball_hpp */

class Ball{
    
public:
    //attribute of the ball
    int radius;
    int posX;
    int posY;
    
    int dirX;
    int dirY;
    
    ofColor color;
    
    //functions
    Ball();
    void draw();
    void update();
    void bouncing();
    
    void setPosition(int x, int y);
    void setColor(ofColor mColor);
};
