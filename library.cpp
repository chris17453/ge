#include <SDL2/SDL.h>
#include "library.h"
#include "scrollbar.h"
#include "drawing.h"
#include "palette.h"
#include "button.h"

//extern void draw3DBox(int,int,int,int,color);
extern void renderTexture(SDL_Texture *,SDL_Renderer *,int,int);

extern SDL_Texture   *graphicsTextures[];
extern SDL_Renderer  *renderer;
extern int SCREEN_WIDTH;
extern int SCREEN_HEIGHT;
extern int TILE_WIDTH;
extern int TILE_HEIGHT;

extern int GRAPHICS_LIB_SIZE;

int         LIBRARY_TILE_PADDING            =2;
extern int PALETTE_VIEW_WIDTH;

extern palette_control paletteCTRL;

library_control::library_control(int left,int right,int top,int bottom):control(left,top,right,bottom,NULL){
    name="LIBRARY";
    this->borderType=BORDER_3D_DEPRESSED;
    rect pos=rect(left,right,top,bottom);
    this->anchor.left=RIGHT;
    this->anchor.right=RIGHT;
    this->anchor.top=BOTTOM;
    this->anchor.bottom=BOTTOM;
    this->internalHeight=TILE_HEIGHT;
    this->setPosition(pos);
    
    this->setScrollH((TILE_WIDTH+LIBRARY_TILE_PADDING)*GRAPHICS_LIB_SIZE);
    updateCoordinates();
    this->createCanvas();
}

void library_control::draw(){
    control::draw();
      
    
    int x=0;
    for(int a=0;a<GRAPHICS_LIB_SIZE;a++) {
        x=(TILE_WIDTH+LIBRARY_TILE_PADDING)*a;
        if(NULL!=graphicsTextures[a]) {
//            this->renderTexture(graphicsTextures[a],x,0);
        }
       
    }
}

void library_control::updateMouse(){
    control::updateMouse();
}

