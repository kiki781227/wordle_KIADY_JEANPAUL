#include "fonction.c"


int main() {
	int Choix = 1,  cmpt_vert, compteur;
	char tab[NBMOTS][Len_Mot], tab1[Len_Mot], guess[Len_Mot];
	
	Tab_mots(tab);
	
	while (Choix != 0) {
		
		strcpy( tab1, tab[RandInt()] );
		
		compteur = 0;
		cmpt_vert = 0;
	
		printf("Essayer de trouver le mot mystère.\n");
		
		while(compteur < 6) {
				
			if (cmpt_vert== 5)
				break;
				
			else cmpt_vert=0;
				
			printf("Veuillez entrer un mot de 5 lettres : ");
			scanf("%s" , guess );
			for (int i  = 0; i < 5; i++) guess[i] = tolower(guess[i]);	
				
			if ( ifInData( guess, tab) ) {
				
				printf("\n");
				for(int j=0; j< 5; j++) {
					
					if( tab1[j] == guess[j]) {
						printf(VERT"%c"FIN, toupper(guess[j]) );
						cmpt_vert++;	
					}
					
					else if(Find_Letter(tab1, guess[j]))
						printf(ROUGE CLIGNE"%c"FIN, toupper(guess[j]) );
						
					else printf(GRIS CLIGNE"%c"FIN, toupper(guess[j]));	
				}
				
				compteur++;
				printf("\n");
				if (cmpt_vert != 5) printf("Il vous reste %i essai(s).\n", 6 - compteur);
				printf("\n");	
			}
			
			else printf("Le mot que vous avez inséré n'est pas dans la base de donnée.\n\n");
		}
		
		
		if (cmpt_vert==5) {
			printf("Bravo, vous avez trouver le mot %s !\n\n", tab1);
		}
		
		else printf("Vous n'avez pas trouver le mot. Le mot etait %s.\n\n", tab1);
	
		printf("Que voulez vous faire maintenant ?\nEntrez 1 pour commencer une nouvelle partie et 0 pour arrêtez de jouer : ");
		scanf("%i" , &Choix );
		printf("\n");
	}
	
	return 0;			
}

