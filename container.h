/* 
 * File:   container.h
 * Author: nd
 *
 * Created on November 28, 2015, 2:19 PM
 */
//#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "themes.h"

#ifndef CONTAINER_H
#define	CONTAINER_H


using namespace std;


extern SDL_Renderer *screenRenderer;

class container:public rect{
    
public:
    SDL_Renderer *renderer;
    SDL_Texture  *canvas;

    rect                padding;                                // border thickness
    rect                offsetMin;                              // Diff from left and top
    rect                offsetMax;                              // Diff from right and bottom
    rect                face;                                   // internal drawable area
    rect                worldCoordinates;
    anchor_container    anchor;                                 
    gui_theme           theme;
    mouse_state         mouse;
    container           *parent;
    container           *children;
    container           *nextSibling;
    CONTAINER_TYPE      type;
    const char*         name;
    BORDER_TYPE         borderType;
    TTF_Font            *font;

    
    container():parent(0),children(0){
        mouse       =mouse_state();
        theme       =gui_theme();
        offsetMin   =rect();
        offsetMax   =rect();
        padding     =rect(3,3,3,3);
        face        =rect();
        anchor      =anchor_container();
        type        =BASIC;
        name        ="UNK";
        children    =NULL;
        parent      =NULL;
        nextSibling =NULL;
        canvas      =NULL;
        this->renderer=screenRenderer;
        borderType=BORDER_3D_RAISED;
        theme.loadTheme(theme.THEME_SILVER);
        this->setFont();
    }
    container(int left,int top,int right,int bottom):rect(left,top,right,bottom){
        parent      =0;
        children    =0;
        mouse       =mouse_state();
        theme       =gui_theme();
        padding     =rect(3,3,3,3);
        offsetMin   =rect();
        offsetMax   =rect();
        face        =rect();
        anchor      =anchor_container();
        type       =BASIC;
        name        ="UNK";
        children    =NULL;
        parent      =NULL;
        nextSibling =NULL;
        canvas      =NULL;
        this->renderer=screenRenderer;
        borderType=BORDER_3D_RAISED;
        this->createCanvas();
        this->updateOffset();
        this->updateFace();
        theme=gui_theme();
        theme.loadTheme(theme.THEME_SILVER);
        this->setFont();
    }
    virtual void updateMouse();
    void updatePosition();
    void updateFace();
    void setPosition(rect position);
    void updateCoordinates();
    void getWorldCooridinates();

    virtual void draw();
    virtual void present();
    virtual void resize();
    void updateOffset();
    void addChild(container *child);
    
    void focusRender();
    void createCanvas();
    void drawRect(int x1,int y1,int x2,int y2,color color);
    void renderTexture(SDL_Texture *tex, int x, int y);
    void setClip(int x1,int y1,int x2,int y2);
    void removeClip();
    void drawBorder();
    void setFont();
    void drawText(int x,int y,char *text,color c);
    rect getTextRect(char *text);


};



#endif	/* CONTAINER_H */

