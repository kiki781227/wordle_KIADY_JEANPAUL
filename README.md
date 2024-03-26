# Projet Wordle de Kiady RABENARIVO et JeanPaul SALLAH


# Installation

ouvrir un terminal puis lancer les commandes suivantes :

```sh
git clone https://github.com/kiki781227/wordle_KIADY_JEANPAUL.git
```
```sh
cd wordle_KIADY_JEANPAUL
```


# Compilation

En etant a la racine du projet git dans un terminal :

```sh
gcc -o bin/wordle src/wordle.c
```


# Execution 

En etant a la racine du projet git dans un terminal :
```sh
cd bin
```
```sh
./wordle
```


# Explication du projet

Le projet a pour but de créer un jeu Wordle.
Le joueur doit deviner un mot de 5 lettres, il a 6 essais pour cela.
Pour chaque essai on lui indique les lettres qui sont bien placées et les lettres présentes mais mal placées.
Un mot qui n'est pas dans la base de données n'est pas considéré comme un essai.

Notre Projet est séparer en 4 dossiers : bin, include, ressources et src.
Le dossier bin contient les exécutables, le dossier include les headers, le dossier ressources les différents documents utilisés et le dossier src les fichiers sources.

Dans le dossier src, on a donc deux fichier : fonction.c qui contient toute les fonctions qu'on utilise et wordle.c qui contient le main.


### Explication des fonctions

La première fonction est la fonction **Tab_mots()** :

Elle prends en paramètre un tableau 2d mais ne renvoie rien. Elle modifie le tableau passé en paramètre pour lui insérer tout les mots indiqués dans le document bdd_wordle qui se trouve dans le dossier ressources.
Pour cela, elle lit les caractères un à un jusqu'à ce qu'elle trouve une lettre majuscule accompagné d'un retour à la ligne. L'association de la lettre majuscule et du retour à la ligne indique que les prochains caractères sont des mots à traiter. La fonction met donc ces mots dans le tableau 2d passé en paramètre.

La deuxième fonction est la fonction **RandInt()** :

Elle ne prends aucun paramètre, mais renvoie un entier aléatoirement.
Pour cela, on utilise les fonction **rand()** et **srand()**.

La troisième et dernière fonction est la fonction **ifInData()** :

Elle rend en paramètre un tableau de char (une chaîne de caractère) et un tableau 2d de char.
Elle parcours chaque chaîne de caractère du tableau 2d et vérifie si la chaîne de caractère y est présentes.
Elle renvoie 0 si la chaîne de caractère n'y est pas présentes et l'indice de la chaîne de caractère dans le tableau 2d si elle y est.

### Explication du main
