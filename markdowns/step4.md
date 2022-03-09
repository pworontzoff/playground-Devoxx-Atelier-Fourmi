# La fourmi de langton - étape 4, effacer avec erase()

## Les explications

Nous avons donc colorié la case centrale (en 4e ligne, 4e colonne) et nous allons à présent effacer cette case (juste après l'avoir coloriée).

Pour effacer une case précédemment coloriée, nous pouvons utiliser l'instruction `move_to();` :

```C
move_to(ligne, colonne); 
```
est une instruction qui permet de déplacer le curseur dans le Paper.

- `ligne` est un premier paramètre, c'est un nombre entier qui donne le numéro de la ligne du Paper à atteindre
- `colonne` est un deuxième paramètre (nombre entier) qui donne le numéro de la colonne à atteindre. 

<br />

## Les consignes de notre mission

**Juste avant de colorier, nous devons déplacer notre curseur en quatrième ligne, quatrième colonne (grâce à l'instruction** `move_to();` **) afin de positionner la fourmi au bon endroit !**

<br />

## Alerte au piège !

**! En programmation, on a pour habitude de commencer les numérotations à zéro. La première ligne porte donc le numéro 0 et la première colonne porte le numéro 0.**

** De sorte que, par exemple, `move_to(0,2)` déplace le curseur à la première ligne, troisième colonne ! **

<br />

## Le programme C (à vous les commandes !)

**! N'hésitez pas à revenir en arrière et copier-coller ci-dessous votre programme précédent avant de le modifier.**

@[fourmi1]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "fourmi1"})

!!!!!!!! MEMO : étapes suivantes : 4) effacer (colorier puis effacer) / 5) colorier OU effacer (alternatives) / 6) en boucle / 7) avec les mouvements ! / 8) plus grand plus loin / 9) fini la symétrie / 10) l'autoroute !
