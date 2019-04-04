#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <header.h>




void animation(SDL_Surface *ecran,SDL_Surface *map,ennemi e,int minx,int miny)
{
	
	SDL_Rect pos1,pos2,mpos;

  
	int j=0,tempsActuel=0,tempsPrecedent=0;

	pos1.x = e.xpos_ennemi;
	pos1.y = e.ypos_ennemi;

	pos2.x = minx;
	pos2.y = miny;
	
	mpos.x = 0;
	mpos.y = 0;






     	SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,0,0,0));
	SDL_BlitSurface(map,NULL,ecran,&mpos);
	SDL_Flip(ecran);

        tempsActuel = SDL_GetTicks();

        if (tempsActuel - tempsPrecedent > 20) 

        {
            pos1.x--;
	    pos2.x++;
	    j++;
	    if(j==4)
		j=0;
            tempsPrecedent = tempsActuel;
        }
	
        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 0, 0));
	SDL_BlitSurface(map,NULL,ecran,&mpos);
	
	if(pos1.x > min)
        SDL_BlitSurface(e.m_ennemi[j], NULL, ecran, &pos1);

	else
	SDL_BlitSurface(e.m_ennemi2[j], NULL, ecran, &pos2);
        
	SDL_Flip(ecran);
	
	if(pos1.x == minx)	
	pos1.x = e.xpos_ennemi;


    }

}
