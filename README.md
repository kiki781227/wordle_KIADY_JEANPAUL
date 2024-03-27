# Projet Wordle de Kiady RABENARIVO et JeanPaul SALLAH


# Installation

Ouvrir un terminal puis lancer les commandes suivantes :

```sh
git clone https://github.com/kiki781227/wordle_KIADY_JEANPAUL.git
```
```sh
cd wordle_KIADY_JEANPAUL
```



# Compilation

En étant a la racine du projet git dans un terminal :

```sh
gcc -o bin/wordle src/wordle.c
```


# Execution 

En étant a la racine du projet git dans un terminal :
```sh
cd bin
```
```sh
./wordle
```

# Utilisation

Après avoir lancé le programme, il vous suffit juste d'entrer un mot pour jouer.
Pour chaque lettre du mot inséré, le programme affichera en vert les lettres bien placées et fera clignoter les lettres qui ne sont pas validées, elles seront en rouge si elles sont présentes dans le mot mais mal placées et en gris si elles ne sont pas dans le mot.


# Explication du projet

Le projet a pour but de créer un jeu Wordle.
Le joueur doit deviner un mot de 5 lettres, il a 6 essais pour cela.
Pour chaque essai, on lui indique les lettres qui sont bien placées et les lettres présentes mais mal placées.
Un mot qui n'est pas dans la base de données n'est pas considéré comme un essai.

Notre Projet est séparé en 4 dossiers : bin, include, ressources et src.
Le dossier bin contient les exécutables, le dossier include les headers, le dossier ressources les différents documents utilisés et le dossier src les fichiers source.

Dans le dossier src, on a donc deux fichier : fonction.c qui contient toute les fonctions qu'on utilise et wordle.c qui contient le main.


### Explication des fonctions

La première fonction est la fonction **Tab_mots()** :

Elle prend en paramètre un tableau 2d, mais ne renvoie rien. Elle modifie le tableau passé en paramètre pour lui insérer tous les mots indiqués dans le document bdd_wordle qui se trouve dans le dossier ressources.
Pour cela, elle lit les caractères un à un jusqu'à ce qu'elle trouve une lettre majuscule accompagnée d'un retour à la ligne. L'association de la lettre majuscule et du retour à la ligne indique que les prochains caractères sont des mots à traiter. La fonction met donc ces mots dans le tableau 2d passé en paramètre.

La deuxième fonction est la fonction **RandInt()** :

Elle ne prend aucun paramètre, mais renvoie un entier aléatoirement.
Pour cela, on utilise les fonction **rand()** et **srand()**.

La troisième fonction est la fonction **ifInData()** :

Elle rend en paramètre un tableau de char (une chaîne de caractère) et un tableau 2d de char.
Elle parcourt chaque chaîne de caractère du tableau 2d et vérifie si la chaîne de caractère y est présentes.
Elle renvoie 0 si la chaîne de caractère n'y est pas présent et l'indice de la chaîne de caractère dans le tableau 2d si elle y est.

Et la dernière est **Find_Letter()** :

Elle rend en paramètre un tableau de char (une chaîne de caractère) et un char.
Et elle vérifie si le caractère mis en paramètre est présent dans la chaîne de caractère.
Elle renvoie 0 si le caractère n'y est pas présent et 1 si le caractère est présent dans la chaîne de caractère.


### Explication du main


La fonction **main()** utilise toutes les fonctions évoquées précédemment.
Elle utilise donc d'abord **Tab_mots()** pour créer un tableau avec tous les mots de la base de données, puis elle utilise **RandInt** pour choisir un mot aléatoirement dans ce tableau.
Puis, elle demande au joueur d'entrer un mot de 5 lettres, elle vérifie si le mot est présent dans la base de données avec la fonction **ifInData()**, s'il n'y est pas le joueur doit entrer un autre mot.
Mais, s'il y est, la fonction parcours chaque lettre du mot entré par le joueur et les compare avec celle du mot choisit aléatoirement, et affiche en vert les lettres bien placées, en rouge les lettres mal placées mais présentes dans le mot et en gris les lettres qui ne sont pas présentes dans le jeu.
Et enfin, si la partie est terminée, la fonction demande au joueur s'il veut rejouer.
