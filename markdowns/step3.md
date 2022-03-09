# La fourmi de langton - étape 3, se déplacer !

## Les explications et les consignes

Nous allons à présent déplacer le cursuer dans notre grille.

Pour ce faire, nous pourrons utiliser l'instruction `move_to` :

```C
move_to(x, y); 
```
est une instruction qui permet de déplacer le curseur dans la grille.

- `x` est un premier paramètre, c'est un nombre entier qui donne le numéro de la colonne de la grille à atteindre
- `y` est un deuxième paramètre (nombre entier) qui donne le numéro de la ligne à atteindre. 

## Alerte au piège !

**! En programmation, on a pour habitude de commencer les numérotations à zéro. La première ligne porte donc le numéro 0 et la première colonne porte le numéro 0.**

** De sorte que, par exemple, `move_to(0,2)` déplace le curseur à la première colonne, 3e ligne ! **

## Le programme C (à vous les commandes !)

**! N'hésitez pas à revenir en arrière et copier-coller ci-dessous votre programme précédent avant de le modifier.**

@[fourmi1]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "fourmi1"})

## Petit quiz

1) Avez-vous précisé à quel endroit vous vouliez colorier ?
2) Où le coloriage a-t-il été réalisé ?

Les réponses à ces deux questions vous indiquent l'endroit "par défaut" où se trouve le "curseur" (qui indique l'endroit où l'on se trouve).

Notre prochaine étape sera donc de pouvoir **déplacer ce curseur**.
