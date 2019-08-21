/* 
 * File:   scrollbar.h
 * Author: nd
 *
 * Created on November 10, 2015, 9:03 PM
 */

#include "button.h"
//#include "container.h"
#ifndef SCROLLBAR_H
#define	SCROLLBAR_H

class scrollBar:public container{           //Scrollbar will be the opposite of the smallest difference in width or height;
public:
    float  position;
    float  visibleRange;
    int    startIndex;
    int    endIndex;
    float  percentage;
    bool   dragging;
    float  dragStartPosition;
    bool   mouseDownFinish;
    rect   tab;
    button *minButton;
    button *addButton;

    scrollBar(int left,int top,int right,int bottom):container(left,top,right,bottom){
        position=0;
        visibleRange=2;
        startIndex=0;
        endIndex=0;
        percentage=0;
        dragging=false;
        dragStartPosition=0;
        mouseDownFinish=true;
        type=SCROLLBAR;   
        padding=rect(1,1,1,1);
        this->borderType=BORDER_SCROLLBAR;

        updateCoordinates();
        int w=face.bottom-face.top;
        button *min=new button(face.left,face.top,face.left+w,face.bottom,"<");
        button *add=new button(face.right-w,face.top,face.right,face.bottom,">");
        min->name="minButton";
        add->name="addButton";
        add->borderType=BORDER_SINGLE_RAISED;
        min->borderType=BORDER_SINGLE_RAISED;
        addButton=add;
        minButton=min;
        this->addChild(add);
        this->addChild(min);
        
    }
    void updateMouse();
    void updateScrollRect();
    void draw();
    void present();

};

/*
class scrollbar_node{
public:
    scrollBar *node;
    scrollbar_node *next;
    scrollbar_node(scrollBar *newScrollbar,scrollbar_node* newNode) { 
        node=newScrollbar;
        next=newNode;
    }
    scrollbar_node() { 
        node=NULL;
        next=NULL;
    }
};  

class scrollbars{
    color SCROLLBAR_COLOR;
    color SCROLLBAR_TAB_COLOR;
    scrollbar_node *first;
    
    void handleScrollBar(scrollBar *,mouse_state mouse);
    void drawScrollBar(scrollBar);

public:
    scrollbars();
    void add(scrollBar *);
    void handle(mouse_state mouse);
    void createScrollRect(scrollBar *);
    void draw();

};

*/
#endif	/* SCROLLBAR_H */

