#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <header.h>





void affiche_ennemi(SDL_Surface *ecran,ennemi e,int j,SDL_Rect pos_ennemi)
{
	 
	SDL_BlitSurface(e.m_ennemi[j],NULL,ecran,pos_ennemi);
	SDL_Flip(ecran);
	
}
