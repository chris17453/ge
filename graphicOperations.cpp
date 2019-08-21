#include <SDL2/SDL.h>
#include <stdio.h>                  //BUFSIZ
#include "types.h"
#include "palette.h"

extern int TILE_WIDTH;
extern int TILE_HEIGHT;
extern int TILE_BYTES;

extern unsigned char *graphicsLibrary;


extern SDL_Renderer *renderer;
extern unsigned char *master;
extern palette pal;

SDL_Texture* libtoTexture(int tileIndex){
    //tileIndex=0;
    SDL_Texture *texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, TILE_WIDTH,TILE_HEIGHT);
    SDL_SetRenderTarget(renderer, texture);
    int startIndex=tileIndex*TILE_BYTES*2;
    
    for(int y=0;y<TILE_HEIGHT;y++) {
    for(int x=0;x<TILE_WIDTH;x++) {
        color c;
        c.a=0xFF;
        unsigned char colorBarIndex=graphicsLibrary[startIndex+x+y*TILE_WIDTH];
        unsigned char colorBar     =graphicsLibrary[startIndex+x+y*TILE_WIDTH+TILE_BYTES];
        
      /*  SDL_SetRenderDrawColor(renderer,
                pal.colorBars[colorBar].colors[colorBarIndex].r,
                pal.colorBars[colorBar].colors[colorBarIndex].g,
                pal.colorBars[colorBar].colors[colorBarIndex].b,
                pal.colorBars[colorBar].colors[colorBarIndex].a
                );
       * */
        SDL_RenderDrawPoint(renderer,x,y);    
    }
    }

    SDL_SetRenderTarget(renderer, NULL);
    return texture;
}

void lib2Temp(int tileIndex){
    for(int a=0;a<TILE_BYTES*2;a++) {
        master[a]=graphicsLibrary[tileIndex*TILE_BYTES+a];
    }
}

void temp2Lib(int tileIndex){
    for(int a=0;a<TILE_BYTES*2;a++) {
        master[a]=graphicsLibrary[tileIndex*TILE_BYTES+a];
    }
}

