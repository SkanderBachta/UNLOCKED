#include <SDL/SDL.h>
#include <stdio.h>
#include<SDL/SDL.h>
//#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include <string.h>
#include<SDL/SDL_image.h>

void intialiser_personnnage(perso tab_perso[],int nbperso)
{
 

	tab_perso[nb].img[0]=IMG_Load("");
	tab_perso[nb].img[1]=IMG_Load("");
	tab_perso[nb].img[2]=IMG_Load("");
	tab_perso[nb].pos.x=;
	tab_perso[nb].pos.y=;	
	nb++;

}

void afficherperso(SDL_Surface* screen,perso tab_perso[],int nb,int imgperso)
{

	SDL_BlitSurface(tab_preso[nb].img[imgperso],NULL,screen,&tab_perso[nb].pos);
}



void animationperso(SDL_Surface* screen,perso tab_perso[],int nb,int imgperso)
{
      int tmp=imgperso;
	if (tmp==0)
		imgperso=1;
	 if (tmp==1)
		imgperso=2;
	if (tmp==2)
		imgperso=0;
tab_perso[nb].pos.x+=10;
afficherperso(screen,tab_perso,nb,imgperso);
	

}
