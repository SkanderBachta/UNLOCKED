#include <stdlib.h>
#include <time.h> 
#include <stdio.h>
#include <string.h>
#include <SDL/SDL_image.h>
#include "SDL/SDL.h"
#include "enigme.h"




int enigmessfichier()
{	

	int nbenigme=; // Il Faut saisir le nombre d'enigmes.

typedef struct // Le Fichier doit contenir les CHEMINS DES IMAGES DE CHAQUE ENIGME 
{
	char question[100];
	char prop1[100];
	char prop2[100];
	char prop3[100];
}enigme


char fname[25];



	SDL_Surface *fenetre=NULL,*question=NULL,*prop1=NULL,*prop2=NULL,*prop3=NULL;
	SDL_Rect posfenetre,posquestion,posprop1,posprop2,posprop3;
	

	fenetre=IMG_Load();
	question=IMG_Load();
	prop1=IMG_Load();
	prop2=IMG_Load();
	prop3=IMG_Load();


	posfenetre.x=;
	posfenetre.y=;
	question.x=;
	question.y=;
	prop1.x=;
	prop1.y=;
	prop2.x=;
	prop2.y=;
	prop3.x=;
	prop3.y=;

	SDL_BlitSurface(fenetre,NULL,screen,&posfenetre);
	SDL_BlitSurface(question,NULL,screen,&posquestion);
	SDL_BlitSurface(prop1,NULL,screen,&posprop1);
	SDL_BlitSurface(prop2,NULL,screen,&posprop2);
	SDL_BlitSurface(prop3,NULL,screen,&posprop3);


	 while(SDL_PollEvent(&event))
                {	
                        switch(event.type)
                        {
				case SDL_MOUSEBUTTONDOWN:
        			if ((event.button.button == SDL_BUTTON_LEFT)&&(x>="///////" && x<="exitpos.x+exitpos.w" && y>="exitpos.y" && y<="exitpos.y+exitpos.h"))
					return(0);
				if ((event.button.button == SDL_BUTTON_LEFT)&&(x>="///////" && x<="exitpos.x+exitpos.w" && y>="exitpos.y" && y<="exitpos.y+exitpos.h"))
					return(1) // La Reponse est juste"
				if ((event.button.button == SDL_BUTTON_LEFT)&&(x>="///////" && x<="exitpos.x+exitpos.w" && y>="exitpos.y" && y<="exitpos.y+exitpos.h")||(event.button.button == SDL_BUTTON_LEFT)&&(x>="///////" && x<="exitpos.x+exitpos.w" && y>="exitpos.y" && y<="exitpos.y+exitpos.h")) //On a 2 position des deux fausses propositions
					return(2) // La Reponse est Fausse"
			}
		}

}



int enigmeavecfichier(int nbenigme,char fname[])
{



	int nbenigme=; // Il Faut saisir le nombre d'enigmes.

typedef struct // Le Fichier doit contenir les CHEMINS DES IMAGES DE CHAQUE ENIGME 
{
	char question[100];
	char prop1[100];
	char prop2[100];
	char prop3[100];
}enigme


char fname[25];
	strcat(fname,"");//Ecrire le nom du fichier d'enigmes
	FILE* f=NULL;
	enigme e;
	int t;
	int nbquestion,i;
	SDL_Surface *fenetre=NULL,*question=NULL,*prop1=NULL,*prop2=NULL,*prop3=NULL;
	SDL_Rect posfenetre,posquestion,posprop1,posprop2,posprop3;
	
	
	srand(time(NULL));
	nbquestion=rand()%nbenigme;

	f=fopen(fname,"r");
	if (f!=NULL)
		{
		for (i=0;i<nbquestion;i++)
			{
				t=fscanf(f,"%s %s %s %s \n",e.question,e.prop1,e.prop2,e.prop3);
			}
		
		}


	fenetre=IMG_Load();
	question=IMG_Load(e.question);
	prop1=IMG_Load(e.prop1);
	prop2=IMG_Load(e.prop2);
	prop3=IMG_Load(e.prop3);


	posfenetre.x=;
	posfenetre.y=;
	question.x=;
	question.y=;
	prop1.x=;
	prop1.y=;
	prop2.x=;
	prop2.y=;
	prop3.x=;
	prop3.y=;

	SDL_BlitSurface(fenetre,NULL,screen,&posfenetre);
	SDL_BlitSurface(question,NULL,screen,&posquestion);
	SDL_BlitSurface(prop1,NULL,screen,&posprop1);
	SDL_BlitSurface(prop2,NULL,screen,&posprop2);
	SDL_BlitSurface(prop3,NULL,screen,&posprop3);


	 while(SDL_PollEvent(&event))
                {	
                        switch(event.type)
                        {
				case SDL_MOUSEBUTTONDOWN:
        			if ((event.button.button == SDL_BUTTON_LEFT)&&(x>="///////" && x<="exitpos.x+exitpos.w" && y>="exitpos.y" && y<="exitpos.y+exitpos.h"))
					return(0);
				if ((event.button.button == SDL_BUTTON_LEFT)&&(x>="///////" && x<="exitpos.x+exitpos.w" && y>="exitpos.y" && y<="exitpos.y+exitpos.h"))
					return(1) // La Reponse est juste"
				if ((event.button.button == SDL_BUTTON_LEFT)&&(x>="///////" && x<="exitpos.x+exitpos.w" && y>="exitpos.y" && y<="exitpos.y+exitpos.h")||(event.button.button == SDL_BUTTON_LEFT)&&(x>="///////" && x<="exitpos.x+exitpos.w" && y>="exitpos.y" && y<="exitpos.y+exitpos.h")) //On a 2 position des deux fausses propositions
					return(2) // La Reponse est Fausse"
			}
		}

}




}

















