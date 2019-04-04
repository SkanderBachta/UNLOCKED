#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <header.h>




ennemi intia_ennemi(int posx,int posy,int vie)
{

	enemmi e;
	int t;
	FILE* f=NULL;
	

	e.xpos_ennemi = posx;
	e.ypos_ennemi = posy;
	e.vie_ennemi = vie;

	f=fopen("test.txt","r");
	if (f!=NULL)
	{
		t=fscanf(f,"%s\n",e.chemin);
		
		while (t>0)
		{
		e.m_ennemi[n] = IMG_Load(o.chemin);
		n++;
		t=fscanf(f,"%s\n",e.chemin);
		}
	}
	
	return e;
} 


 


	

	 
