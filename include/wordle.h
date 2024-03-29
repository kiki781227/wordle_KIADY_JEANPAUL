#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h> 
#include <string.h>
#define VERT "\x1b[32m"
#define ROUGE "\x1b[31m"
#define GRIS "\x1b[2m"
#define CLIGNE "\x1b[5m"
#define FIN "\x1b[0m"
#define NBMOTS 2309
#define Len_Mot 6


void Tab_mots(char Mots[][6]);

int RandInt();

int ifInData(char mot[], char Tab[][6]);

int Find_Letter (char Mot[], char lettre);
