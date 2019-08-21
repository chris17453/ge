#include "button.h"

void button::updateMouse() {
    container::updateMouse();
    if(mouse.inWindow && mouse.LEFT && mouse.clickInWindow) {
        this->state=BUTTON_DOWN;
        this->borderType=BORDER_3D_DEPRESSED;
    } else {
        this->state=BUTTON_UP;
        this->borderType=BORDER_3D_RAISED;
    }
}


void button::draw(){
    if(state==BUTTON_UP     ) borderType=BORDER_SINGLE_RAISED;
    if(state==BUTTON_PRESSED) borderType=BORDER_SINGLE_DEPRESSED;
    
    container::draw();
    ;
    //rect r=getTextRect(text);
    int x=0;//(getWidth()-r.width)/2;
    int y=0;//(getHeight()-r.height)/2;
    if(state==BUTTON_DOWN)    { x++; y++; }
    if(state==BUTTON_PRESSED) { x++; y++; }
    drawText(x,y,(char *)text.c_str(),theme.controlText);
}
