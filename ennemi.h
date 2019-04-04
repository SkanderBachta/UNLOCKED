









	typedef struct
	{

	     	int xpos_ennemi;

		int ypos_ennemi;

		int vie_ennemi;

		char chemin[50];

	     	SDL_Surface *im_ennemi;

		SDL_Surface *m_ennemi[4];
		
		SDL_Surface *m_ennemi2[4];
		

	}ennemi;
		

void animation(SDL_Surface *ecran,SDL_Surface *map,ennemi e,int minx,int miny)
ennemi intia_ennemi(int posx,int posy,int vie);
void affiche_ennemi(SDL_Surface *ecran,ennemi e,int j,SDL_Rect pos_ennemi);

	
		
