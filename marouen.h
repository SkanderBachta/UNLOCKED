typedef struct
{
	SDL_Surface* img[2];
	SDL_Rect pos;
}perso;


perso tab_perso[100];
int nbperso=0;






void intialiser_personnnage(perso tab_perso[]);
void afficherperso(SDL_Surface* screen,perso tab_perso[],int nb,int imgperso);
void animationperso(SDL_Surface* screen,perso tab_perso[],int nb,int imgperso);
