
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <SDL/SDL_image.h>
#include "SDL/SDL.h"
#include "initobjet.h"




int initialiserobjet(SDL_Surface* tabobjet[],SDL_Rect tabpos[],char fname[],int nb)
{
	typedef struct 
{
			
	char name[25];
	char chemin[50];
	int posx;
	int posy;
	
}objet;


	//strcat(fname,"test.txt");//Ecrire le nom du fichier d'objets


	FILE* f=NULL;
	objet o;
	int t;
	
	

	f=fopen("test.txt","r");
	if (f!=NULL)
	{
		t=fscanf(f,"%s %s %d %d \n",o.name,o.chemin,&o.posx,&o.posy);
		
		while (t>0)
			{
				tabobjet[nb]=IMG_Load(o.chemin);
				tabpos[nb].x=o.posx;
				tabpos[nb].y=o.posy;
				nb++;
				t=fscanf(f," %s %s %d %d \n",o.name,o.chemin,&o.posx,&o.posy);
			}

	}
	
	fclose(f);
return(nb);
		
}
