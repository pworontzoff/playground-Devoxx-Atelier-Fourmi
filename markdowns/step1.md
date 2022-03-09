# La fourmi de langton - étape 1, afficher le Paper avec init_paper() et display_paper()

## Les explications

Nous commençons par construire le Paper avec une taille de 7 x 7.

Pour ce faire, nous pourrons utiliser **deux instructions** qui permettent de créer et d'afficher un Paper :

<br />

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**1**&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Pour créer le Paper nous pouvons utiliser l'instruction `init_paper()` :

```C
init_paper(nb_lignes, nb_colonnes, taille, delai_anim, ctrl_les_pas); 
```
est une instruction qui permet de créer et paramétrer un Paper.

- `nb_lignes` est un premier *paramètre*, c'est un nombre entier qui donne le nombre de lignes de le Paper
- `nb_colonnes` est un deuxième paramètre (nombre entier) qui donne le nombre de colonnes de la Peper
- `taille` donne la dimension en pixels d'une case du Paper (p. ex. 25 pour un Paper dont chaque case mesure 25 pixels de côtés)
-  `delai_anim` est le temps de pause (en secondes) entre chaque coloriages ou effacements de cases. Ceci permet de contrôler la vitesse de l'animation. Ce délai peut-être un nombre décimal, par exemple 0.05 pour 5 centièmes de seconde.
-  Nous ne nous préoccuperons pas du paramètre `ctrl_les_pas`, il devra être mis à 0.

<br />

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**2**&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Pour afficher le Paper nous pouvons utiliser l'instruction 

```C
display_paper();
```

qui permet d'afficher le Paper (s'il a été créé).

<br />

## Les consignes de notre mission

**A) Nous devons écrire l'instruction `init_paper();` (pour créer le Paper) au bon endroit dans notre programme (à la ligne 4) en donnant les bonnes valeurs de paramètres pour obtenir une grille de 7 x 7 avec des cases de 25 pixels de côtés et il faudra qu'une étape dure 0.5s.**

**B) Nous devons ensuite écrire l'instruction `display_paper();` pour afficher le Paper.**

**! L'ordre des instruction a de l'importance : afficher la grille avant de la créer ne fonctionnera pas.**


## Le programme C (à vous les commandes !)

@[fourmi1]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "fourmi1"})
