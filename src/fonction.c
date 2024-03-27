#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h> 
#include <string.h>
#include "../include/wordle.h"
#define NBMOTS 2309
#define Len_Mot 6

void Tab_mots(char Mots[][Len_Mot]) {
    FILE* Fichier = fopen("../ressources/bdd_wordle.txt", "r");
    
    int iMot = -1;
    for (char Car = 'A'; Car <= 'Z'; Car++) { // 'Car' prend en valeur 'A', puis 'B', puis 'C', ect jusqu'à 'Z'
		
		if ( Car == 'X' ) continue; // Il n'y a pas de mot en X donc on passe
		
		while ( (fgetc(Fichier) != Car) || (fgetc(Fichier) != 13) ); // On vérifie si le caractère qu'on lit est la lettre majuscule correspondante et si le caractère suivant est un retour à la ligne
		
		for (int i = 0; i < 7; i++) fgetc(Fichier); // On passe les 7 caractères qui sont après la lettre Majuscule
		
		do {
			iMot += 1;
			fgets(Mots[iMot], Len_Mot, Fichier); // On lie un mot de Len_Mot caractères (les 5 lettres et le '\0')
			fgetc(Fichier); // On passe l'espace qui suit
		} while ( isalpha(Mots[iMot][0]) ); // On vérifie si le premier caractère lu est une lettre, si non on sait qu'il ne s'agit pas d'un mot, on j'arrete donc là
		
		iMot -= 1; // On revient à l'indice précédent car la dernière chaine de caractère lu n'est pas un mot;
	}
	
	fclose(Fichier);

}

int RandInt() {
	srand(time(NULL));
	int r = rand() % ( NBMOTS + 1);

	return r;
}

int ifInData(char mot[], char Tab[][Len_Mot]) {
	
	for (int i = 0; i < NBMOTS; i++) {
		if ( strcmp(mot, Tab[i]) == 0 )
			return 1;
	}
	
	return 0;
}

int Find_Letter (char Mot[], char lettre) {
	
	if(strchr(Mot, lettre) != NULL)
		return 1;
		
	return 0;
}
