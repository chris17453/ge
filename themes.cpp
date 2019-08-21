/* 
 * File:   themes.cpp
 * Author: nd
 *
 * Created on December 12, 2015, 9:59 AM
 */
#include "themes.h"
     

void gui_theme::setTheme(const char *name
                    ,unsigned long activeCaption        ,unsigned long activeCaptionBorder  ,unsigned long activeCaptionText  ,unsigned long control        
                    ,unsigned long controlDkShadow      ,unsigned long controlHighlight     ,unsigned long controlLtHighlight ,unsigned long controlShadow
                    ,unsigned long controlText          ,unsigned long desktop              ,unsigned long inactiveCaption    ,unsigned long inactiveCaptionBorder
                    ,unsigned long inactiveCaptionText  ,unsigned long info                 ,unsigned long infoText           ,unsigned long menu                 
                    ,unsigned long menuText             ,unsigned long scrollbar            ,unsigned long text               ,unsigned long textHighlight        
                    ,unsigned long textHighlightText    ,unsigned long textInactiveText     ,unsigned long textText           ,unsigned long window               
                    ,unsigned long windowBorder         ,unsigned long windowText){
        this->activeCaption           =color(activeCaption);
        this->activeCaptionBorder     =color(activeCaptionBorder);
        this->activeCaptionText       =color(activeCaptionText);
        this->control                 =color(control);
        this->controlDkShadow         =color(controlDkShadow);
        this->controlHighlight        =color(controlHighlight);
        this->controlLtHighlight      =color(controlLtHighlight);
        this->controlShadow           =color(controlShadow);
        this->controlText             =color(controlText);
        this->controlText             =color(controlText);
        this->desktop                 =color(desktop);
        this->inactiveCaption         =color(inactiveCaption);
        this->inactiveCaptionBorder   =color(inactiveCaptionBorder);
        this->inactiveCaptionText     =color(inactiveCaptionText);
        this->info                    =color(info);
        this->infoText                =color(infoText);
        this->menu                    =color(menu);
        this->menuText                =color(menuText);
        this->scrollbar               =color(scrollbar);
        this->text                    =color(text);
        this->textHighlight           =color(textHighlight);
        this->textHighlightText       =color(textHighlightText);
        this->textInactiveText        =color(textInactiveText);
        this->textText                =color(textText);
        this->window                  =color(window);
        this->windowBorder            =color(windowBorder);
        this->windowText              =color(windowText);
}

bool gui_theme::loadTheme(int theme){
    switch(theme) {
        case THEME_BLUE           : setTheme("BLUE"             ,0X0054E3,0XD4D0C8,0XFFFFFF,0XECE9D8,0X716F64,0XF1EFE2,0XFFFFFF,0XACA899,0X000000,0X004E98,0X7A96DF,0XD4D0C8,0XD8E4F8,0XFFFFE1,0X000000,0XFFFFFF,0X000000,0XD4D0C8,0XFFFFFF,0X316AC5,0XFFFFFF,0XACA899,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_OLIVE_GREEN    : setTheme("OLIVE GREEN"      ,0X8BA169,0XD4D0C8,0XFFFFFF,0XECE9D8,0X716F64,0XF1EFE2,0XFFFFFF,0XACA899,0X000000,0X9DACBD,0XD4D6BA,0XD4D0C8,0XFFFFFF,0XFFFFE1,0X000000,0XFFFFFF,0X000000,0XD4D0C8,0XFFFFFF,0X93A070,0XFFFFFF,0XACA899,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_SILVER         : setTheme("SILVER"           ,0XC0C0C0,0XD4D0C8,0X0E1010,0XE0DFE3,0X716F64,0XF1EFE2,0XFFFFFF,0X9D9DA1,0X000000,0X585768,0XFFFFFF,0XD4D0C8,0XA2A1A1,0XFFFFE1,0X000000,0XFFFFFF,0X000000,0XD4D0C8,0XFFFFFF,0XB2B4BF,0X000000,0XACA899,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_CLASSIC_1      : setTheme("CLASSIC 1"        ,0X000080,0XC0C0C0,0XFFFFFF,0XC0C0C0,0X000000,0XC0C0C0,0XFFFFFF,0X808080,0X000000,0X3A6EA5,0X808080,0XC0C0C0,0XC0C0C0,0XFFFFE1,0X000000,0XC0C0C0,0X000000,0XC0C0C0,0XFFFFFF,0X000080,0XFFFFFF,0X808080,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_CLASSIC_2      : setTheme("CLASSIC 2"        ,0X0A246A,0XD4D0C8,0XFFFFFF,0XD4D0C8,0X404040,0XD4D0C8,0XFFFFFF,0X808080,0X000000,0X3A6EA5,0X808080,0XD4D0C8,0XD4D0C8,0XFFFFE1,0X000000,0XD4D0C8,0X000000,0XD4D0C8,0XFFFFFF,0X0A246A,0XFFFFFF,0X808080,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_BRICK          : setTheme("BRICK"            ,0X800000,0XC2BFA5,0XE1E0D2,0XC2BFA5,0X000000,0XC2BFA5,0XE1E0D2,0X8D8961,0X000000,0X420000,0X8D8961,0XC2BFA5,0XE1E0D2,0XE1E0D2,0X800000,0XC2BFA5,0X000000,0XE1E0D2,0XFFFFFF,0X8D8961,0XFFFFFF,0X8D8961,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_DESERT         : setTheme("DESERT"           ,0X008080,0XD5CCBB,0XFFFFFF,0XD5CCBB,0X000000,0XD5CCBB,0XEAE6DD,0XA28D68,0X000000,0XA28D68,0XA28D68,0XD5CCBB,0XFFFFFF,0XFFFFFF,0X000000,0XD5CCBB,0X000000,0XEAE6DD,0XFFFFFF,0X008080,0XFFFFFF,0XA28D68,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_EGGPLANT       : setTheme("EGGPLANT"         ,0X588078,0X90B0A8,0XFFFFFF,0X90B0A8,0X000000,0X90B0A8,0XC8D8D8,0X588078,0X000000,0X400040,0X90B0A8,0X90B0A8,0X588078,0XFFFFFF,0X800080,0X90B0A8,0X000000,0X90B0A8,0XFFFFFF,0X588078,0XFFFFFF,0X588078,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_LILAC          : setTheme("LILAC"            ,0X5A4EB1,0XAEA8D9,0XFFFFFF,0XAEA8D9,0X000000,0XAEA8D9,0XD8D5EC,0X5A4EB1,0X000000,0X000000,0X808080,0XAEA8D9,0XFFFFFF,0XFFFFFF,0X000000,0XAEA8D9,0X000000,0XAEA8D9,0XFFFFFF,0X5A4EB1,0XFFFFFF,0X5A4EB1,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_MAPLE          : setTheme("MAPLE"            ,0X800000,0XE6D8AE,0XFFFFFF,0XE6D8AE,0X000000,0XE6D8AE,0XF2ECD7,0XC6A646,0X000000,0X000000,0XC6A646,0XE6D8AE,0XF2ECD7,0XFFFFFF,0X000000,0XE6D8AE,0X000000,0XF2ECD7,0XFFFFFF,0XC6A646,0X000000,0XC6A646,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_MARE           : setTheme("MARE"             ,0X000080,0X88C0B8,0XFFFFFF,0X88C0B8,0X000000,0X88C0B8,0XC8E0D8,0X489088,0X000000,0X2C4E47,0X489088,0X88C0B8,0XC0C0C0,0XC8E0D8,0X000000,0X88C0B8,0X000000,0XC8E0D8,0XC8E0D8,0X000080,0XFFFFFF,0X489088,0X000000,0XC8E0D8,0X000000,0X000000); break;
        case THEME_PLUM           : setTheme("PLUM"             ,0X484060,0XA89890,0XFFFFFF,0XA89890,0X000000,0XA89890,0XD8D0C8,0X786058,0X000000,0X402840,0X786058,0XA89890,0XA89890,0XD5CCC8,0X300058,0XA89890,0X000000,0XD8D0C8,0XD8D0C8,0X008080,0XD8D0C8,0X786058,0X000000,0XD8D0C8,0X000000,0X000000); break;
        case THEME_PUMPKIN        : setTheme("PUMPKIN"          ,0XD7A52F,0XECD59D,0XFFFFFF,0XECD59D,0X000000,0XECD59D,0XF5EACF,0XD7A52F,0X000000,0X420042,0XA0A0A4,0XECD59D,0XF5EACF,0XFFFFFF,0X800080,0XECD59D,0X000000,0XF5EACF,0XFFFFFF,0X800080,0XFFFFFF,0XD7A52F,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_RAINY_DAY      : setTheme("RAINY DAY"        ,0X4F657D,0X8399B1,0XFFFFFF,0X8399B1,0X000000,0X8399B1,0XC1CCD9,0X4F657D,0X000000,0X000000,0X808080,0X8399B1,0XC1CCD9,0XFFFFFF,0X000000,0X8399B1,0X000000,0XC1CCD9,0XFFFFFF,0X4F657D,0XFFFFFF,0X4F657D,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_RED_WHITE_BLUE : setTheme("RED, WHITE & BLUE",0X800000,0XC0C0C0,0XFFFFFF,0XC0C0C0,0X000000,0XC0C0C0,0XFFFFFF,0X808080,0X000000,0X000042,0X808080,0XC0C0C0,0XC0C0C0,0XFFFFFF,0X000080,0XC0C0C0,0X000000,0XC0C0C0,0XFFFFFF,0X800000,0XFFFFFF,0X808080,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_ROSE           : setTheme("ROSE"             ,0X9F6070,0XCFAFB7,0XFFFFFF,0XCFAFB7,0X000000,0XCFAFB7,0XE7D8DC,0X9F6070,0X000000,0X808080,0XA0A0A4,0XCFAFB7,0X7D7D7D,0XFFFFFF,0X000000,0XCFAFB7,0X000000,0XCFAFB7,0XFFFFFF,0X9F6070,0XFFFFFF,0X9F6070,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_SLATE          : setTheme("SLATE"            ,0X558097,0X9DB9C8,0XFFFFFF,0X9DB9C8,0X000000,0X9DB9C8,0XCEDCE3,0X558097,0X000000,0X414141,0X808080,0X9DB9C8,0XC0C0C0,0XFFFFFF,0X000000,0X9DB9C8,0X000000,0XCEDCE3,0XFFFFFF,0X558097,0XFFFFFF,0X558097,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_SPRUCE         : setTheme("SPRUCE"           ,0X599764,0XA2C8A9,0XFFFFFF,0XA2C8A9,0X000000,0XA2C8A9,0XD0E3D3,0X599764,0X000000,0X213F21,0X808080,0XA2C8A9,0XD0E3D3,0XFFFFFF,0X000000,0XA2C8A9,0X000000,0XD0E3D3,0XFFFFFF,0X599764,0XFFFFFF,0X599764,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_STORM          : setTheme("STORM"            ,0X800080,0XC0C0C0,0XFFFFFF,0XC0C0C0,0X000000,0XC0C0C0,0XFFFFFF,0X808080,0X000000,0X000000,0X808080,0XC0C0C0,0XC0C0C0,0XFFFFFF,0X800080,0XC0C0C0,0X000000,0XC0C0C0,0XFFFFFF,0X800080,0XFFFFFF,0X808080,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_TEAL           : setTheme("TEAL"             ,0X008080,0XC0C0C0,0XFFFFFF,0XC0C0C0,0X000000,0XC0C0C0,0XFFFFFF,0X808080,0X000000,0X004040,0X808080,0XC0C0C0,0XFFFBF0,0XFFFFFF,0X000000,0XC0C0C0,0X000000,0XC0C0C0,0XFFFFFF,0X008080,0XFFFFFF,0X808080,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_WHEAT          : setTheme("WHEAT"            ,0X808000,0XDEDEA0,0XFFFFFF,0XDEDEA0,0X000000,0XDEDEA0,0XEEEED0,0XBCBC41,0X000000,0X00401D,0XBCBC41,0XDEDEA0,0XFFFFFF,0XFFFFFF,0X000000,0XDEDEA0,0X000000,0XEEEED0,0XFFFFFF,0X808000,0XFFFFFF,0XBCBC41,0X000000,0XFFFFFF,0X000000,0X000000); break;
        case THEME_HIGH_CONTRAST_1: setTheme("HIGH CONTRAST 1"  ,0X0000FF,0X0000FF,0XFFFFFF,0X000000,0XFFFFFF,0XFFFFFF,0XC0C0C0,0X808080,0XFFFFFF,0X000000,0X00FFFF,0X00FFFF,0X000000,0X000000,0XFFFF00,0X000000,0XFFFFFF,0X000000,0X000000,0X008000,0XFFFFFF,0X00FF00,0XFFFF00,0X000000,0XFFFFFF,0XFFFF00); break;
        case THEME_HIGH_CONTRAST_2: setTheme("HIGH CONTRAST 2"  ,0X00FFFF,0X00FFFF,0X000000,0X000000,0XFFFFFF,0XFFFFFF,0XC0C0C0,0X808080,0X00FF00,0X000000,0X0000FF,0X0000FF,0XFFFFFF,0XFFFF00,0X000000,0X000000,0X00FF00,0X000000,0X000000,0X0000FF,0XFFFFFF,0X00FF00,0X00FF00,0X000000,0XFFFFFF,0X00FF00); break;
        case THEME_HIGH_CONTRAST_3: setTheme("HIGH CONTRAST 3"  ,0X800080,0XFFFF00,0XFFFFFF,0X000000,0XFFFFFF,0XFFFFFF,0XC0C0C0,0X808080,0XFFFFFF,0X000000,0X008000,0X008000,0XFFFFFF,0X000000,0XFFFFFF,0X000000,0XFFFFFF,0X000000,0X000000,0X800080,0XFFFFFF,0X00FF00,0XFFFFFF,0X000000,0XFFFFFF,0XFFFFFF); break;
        case THEME_HIGH_CONTRAST_4: setTheme("HIGH CONTRAST 4"  ,0X000000,0X808080,0XFFFFFF,0XFFFFFF,0X000000,0XC0C0C0,0XC0C0C0,0X808080,0X000000,0XFFFFFF,0XFFFFFF,0XC0C0C0,0X000000,0XFFFFFF,0X000000,0XFFFFFF,0X000000,0XFFFFFF,0XFFFFFF,0X000000,0XFFFFFF,0X00FF00,0X000000,0XFFFFFF,0X000000,0X000000); break;
        default :return false;
    }
    return true;
}

