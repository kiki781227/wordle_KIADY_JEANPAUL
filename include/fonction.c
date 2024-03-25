#include <stdlib.h>
#include <stdio.h>


void Tab_mots(char Add[]) {
    char Mots[1000*1000][5];
    FILE* Fichier = fopen(Add, "r");
    
    char mot = 0;
    while ( mot != 'A' )
		mot = fgetc(Fichier);
    
	for (int i = 0; i < 10; i++) {
		mot = fgetc(Fichier);
		printf("%c" , mot);
    }

}


int main()
{
    Tab_mots("~/Documents/wordle_KIADY_JEANPAUL/ressources/bdd_wordle.txt");
}
    
