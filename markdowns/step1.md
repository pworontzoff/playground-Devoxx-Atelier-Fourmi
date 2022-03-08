# La fourmi de langton - étape 1, la grille !

## Les explications et les consignes

Nous commençons par construire la grille avec une taille de 7 x 7.

Pour ce faire, nous pourrons utiliser deux instructions qui permettent de créer et d'afficher une grille.

**1** Pour créer la grille nous pouvons utiliser l'instruction `init_paper()` :

```C
init_paper(nb_lignes, nb_colonnes, taille, delai_anim, ctrl_les_pas); 
```
est une instruction qui permet de créer et paramétrer une grille.

- `nb_lignes` est un premier *paramètre*, c'est un nombre entier qui donne le nombre de lignes de la grille
- `nb_colonnes` est un deuxième paramètre (nombre entier) qui donne le nombre de colonnes de la grille 
- `taille` donne la dimension en pixels d'une case de la grille (p. ex. 25 pour une grille dont chaque case mesure 25 pixels de côtés)
-  `delai_anim` est le temps de pause (en secondes) entre chaque coloriages ou effacements de cases. Ceci permet de contrôler la vitesse de l'animation. Ce délai peut-être un nombre décimal, par exemple 0.05 pour 5 centièmes de seconde.
-  Nous ne nous préoccuperons pas du paramètre `ctrl_les_pas`, il devra être mis à 0.

**! Nous devons écrire les bonnes valeurs de paramètres pour obtenir une grille de 7 x 7 avec des cases de 25 pixels de côtés et il faudra qu'une étape dure 0.5s.**

**! Nous devons écrire cette instruction au bon endroit dans notre programme : à la ligne 6.**

**2** Pour afficher la grille nous pouvons utiliser l'instruction

```C
display_paper()
```

qui permet d'afficher la grille !

**! L'ordre des instruction à de l'importance : afficher la grille avant de la créer ne fonctionnera pas.**


## Le programme C (à vous les commandes !)

@[fourmi1]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "fourmi1"})
