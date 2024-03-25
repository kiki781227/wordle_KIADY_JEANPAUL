#include <stdlib.h>
#include <stdio.h>
#include <ctype.h> 


void Tab_mots(char Mots[][6]) {
    FILE* Fichier = fopen("../ressources/bdd_wordle.txt", "r");
    
    int iMot = -1;
    for (char Car = 'A'; Car <= 'Z'; Car++) {
		
		if ( Car == 'X' ) continue;
		
		while ( (fgetc(Fichier) != Car) || (fgetc(Fichier) != 13) );
		
		for (int i = 0; i < 7; i++) fgetc(Fichier);
		
		do {
			iMot += 1;
			fgets(Mots[iMot], 6, Fichier);
			fgetc(Fichier);
		} while ( isalpha(Mots[iMot][0]) );
		
		iMot -= 1;
	}
	
	fclose(Fichier);

}


int main()
{
	char Mots[2309][6];
    Tab_mots(Mots);
    
    for (int i = 0; i < 2309; i++)
		printf("%s\n", Mots[i]);
}
