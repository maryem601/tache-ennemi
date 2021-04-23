#ifndef enemy_H_INCLUDED
#define enemy_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
@file [<ennemi.h>]
@author [<maryem>]


@struct ennemi
@brief struct for ennemi  
typedef struct Ennemi
	{
        SDL_Surface *sprite; /*!< Surface.*/
        SDL_Rect pos; /*!< Rectangle*/
        int direction;
        SDL_Rect pos_sp; /*!< Rectangle*/ 

	}Ennemi;

void initEnnemi(Ennemi*e);    
void afficherEnnemi(Ennemi e, SDL_Surface * screen);
void animerEnnemi( Ennemi * e);
void deplacer( Ennemi * e);
int collision( SDL_Rect E, SDL_Rect p) ;



#endif // DS_H_INCLUDED
