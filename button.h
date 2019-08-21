#include <iostream>
#include "types.h"

/* 
 * File:   button.h
 * Author: nd
 *
 * Created on November 16, 2015, 11:56 AM
 */
#include "container.h"
#ifndef BUTTON_H
#define	BUTTON_H

class button:public container{           
public:
    bool initialized;
    enum BUTTON_STATE{ BUTTON_UP,BUTTON_DOWN,BUTTON_PRESSED };
    int state;
    string text;
    button(){
        this->name="BUTTON_UNINIT";
        initialized=false;
        text="";
    }
    button(int left,int top,int right,int bottom,string text):container(left,top,right,bottom),text(text){
        this->name="BUTTON";
        this->type=BUTTON;
        this->borderType=BORDER_3D_RAISED;
        this->state=BUTTON_UP;
        padding=rect(1,1,1,1);
        updateCoordinates();
        initialized=true;
        text="";
    }
    void updateMouse();
    void draw();

};

#endif	/* BUTTON_H */

