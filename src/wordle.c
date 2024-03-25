#include "fonction.c"

int main() {
	char Mots[NBMOTS][6];
    Tab_mots(Mots);
    
    for (int i = 0; i < NBMOTS; i++)
		printf("%s\n", Mots[i]); // On lit chaque mot de 'Mots'
}
