# La fourmi de Langton - étape 3, se déplacer avec move_to()

## Les explications

Nous allons à présent déplacer le cursuer dans notre Paper.

Pour ce faire, nous pourrons utiliser l'instruction `move_to();` :

```C
move_to(ligne, colonne); 
```
est une instruction qui permet de déplacer le curseur dans le Paper.

- `ligne` est un premier paramètre, c'est un nombre entier qui donne le numéro de la ligne du Paper à atteindre
- `colonne` est un deuxième paramètre (nombre entier) qui donne le numéro de la colonne à atteindre. 

<br />

## Les consignes de notre mission

**Juste avant de colorier, nous devons déplacer notre curseur en quatrième ligne, quatrième colonne (grâce à l'instruction** `move_to();` **) afin de positionner la fourmi au bon endroit : en plein milieu de la grille !**

<br />

## Alerte au piège !

**! En programmation, on a pour habitude de commencer les numérotations à zéro. La première ligne porte donc le numéro 0 et la première colonne porte le numéro 0.**

**De sorte que, par exemple, `move_to(0,2)` déplacerait le curseur à la première ligne, troisième colonne !**

<br />

## Le programme C (à vous les commandes !)

@[fourmi1]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "fourmi3"})