# La fourmi de langton - étape 2, colorier !

## Les explications

Nous allons à présent colorier dans notre grille.

Pour ce faire, nous pourrons utiliser l'instruction

```C
colorize();
```

qui permet de colorier la case sur laquelle on se trouve !

<br />

## Les consignes de notre mission

il s'agit de colorier une case grace de notre Paper grâce à l'instruction `colorize();` !

<br />

## Alerte au piège !

N'oubliez pas : L'ordre des instruction a de l'importance ! Et donc, par exemple, colorier avant de créer le Paper ou après l'avoir affiché ne fonctionnera pas !

<br />

## Le programme C (à vous les commandes !)

**! N'hésitez pas à revenir en arrière et copier-coller ci-dessous votre programme précédent avant de le modifier.**

@[fourmi1]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "fourmi1"})

<br />

## Petit quiz

1) Avez-vous précisé à quel endroit vous vouliez colorier ?
2) Où le coloriage a-t-il été réalisé ?

Les réponses à ces deux questions vous indiquent l'endroit "par défaut" où se trouve le "curseur" (qui indique l'endroit où l'on se trouve).

Notre prochaine étape sera donc de pouvoir **déplacer ce curseur**.
