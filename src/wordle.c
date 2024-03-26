#include "fonction.c"


int main() 
{
	char tab[NBMOTS][Len_Mot];
	Tab_mots(tab);
	char tab1[Len_Mot];
	strcpy( tab1, tab[RandInt()] );
	char guess[Len_Mot];
	
	int compteur= 0;
	int cmpt_vert=0;

	
	printf("%s \n", tab1);
	
	while(compteur < 6)
	{	
		if (cmpt_vert== 5)
		{
			break;
		}
		else cmpt_vert=0;
			
		printf("Entrer un mot de 5 lettres: ");
		scanf("%s" , guess );
		printf("\n");			
		
		for(int j=0; j< 5; j++)
		{
			if(tab1[j]== guess[j])
			{
				printf("La lettre %c est verte \n", guess[j] );
				cmpt_vert++;	
			}
			else if(tab1[j] != guess[j]  && Find_Letter(tab1, guess[j]))
			{
				printf("La lettre %c est orange\n", guess[j]);
			}
			else printf("La lettre %c est gris\n", guess[j]);		
		}
		printf("\n");
		compteur++;
	}
	
	
	if (cmpt_vert==5)
	{
		printf("Vous avez trouver le mot %s ! \n", tab1);
	}
	else printf("Vous n'avez pas trouver le mot. Le mot etait %s . \n", tab1);
	
	return 0;			
}

