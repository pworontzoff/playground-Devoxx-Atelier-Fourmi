# La fourmi de Langton - étape 6, en boucle avec repeat(n) loop

## Les explications

Un des acquis de l'informatique dont on ne saurait plus se passer consiste à décrire en quelques lignes à un appareil électronique (pc, console, tablette, smartphone, ...) d'exécuter certaines instructions plusieurs fois.

Peut-être 10 fois, peut-être 10 milliards de fois (et ça ne prend pas même un centième de seconde à une console de jeu de répéter une opération 10 milliards de fois).

Si on devait faire ces caluls à la main...

Et tout ça tient en partie dans le concept incontournable des boucles.

Les syntaxes des différentes boucles du langage C sont un peu trop complexes pour cet atelier, mais le langage permet des mécanismes de simplifications (appelés "macros") que nous exploiterons afin de simplifier l'écriture des boucles.

Nous pourrons donc programmer une boucle de plusieurs étapes pour notre fourmi grâce à la macro `repeat(n) loop` :

```C
repeat (n) {
   instructions_exécutées_n_fois
} loop;
```

Cette écriture permet de faire répéter plusieurs fois l'exécution d'un certain nombre d'instructions.

- `n` est le nombre de répétitions (le nombre d'étapes)
- `instructions_exécutées_n_fois` est une série d'instructions qui seront répétées exactement n fois.

Par exemple, le code :

```C
repeat (6) {
   colorize();
   erase();
} loop;
```

va provoquer 6 fois l'exécution d'un coloriage puis d'un effacement.

<br />

## Les consignes de notre mission

**Nous avions un programme qui nous permettait de colorier la case centrale selon que la case sous le curseur est coloriée ou non (grâce à une *alternative*).**

**Nous devons maintenant répéter cette alternative 8 fois !**

**Autrement dit :**

**REPETER 8 FOIS :<br />
&nbsp;&nbsp;&nbsp;SI la case est coloriée, on l'efface<br />
&nbsp;&nbsp;&nbsp;SINON, on la colorie**

<br />

## Alerte au piège !

**Bien respecter l'ordre des opérations :**<br />
**1) Créer le Paper animé ;**<br />
**2) Se déplacer sur la case du milieu ;**<br />
**3) REPETER 8 FOIS : SI la case est coloriée, on l'efface SINON, on la colorie ;**<br />
**4) Afficher le Paper animé.**

<br />

## Le programme C (à vous les commandes !)

@[fourmi6]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "fourmi6"})

Si tout est bon, on constate que le point centrale clignote :

1) Première répétition :
    - La case du milieu se colorie en rouge puisque la fourmi a été posée sur cette case, qui n'est pas coloriée ;
    - Puis la case se colorie en bleu puisque la case sous la fourmi n'est pas coloriée.
2) Deuxième répétition :
    - La case du milieu se colorie en rouge puisque la fourmi n'a pas changé de case ; et elle est maintenant sur une case coloriée ;
    - Puis la couleur de la case s'efface puisque la case sous la fourmi est coloriée.
3) Troisième répétition :
    - La case du milieu se colorie en rouge puisque la fourmi n'a pas changé de case ; et elle est maintenant sur une case non coloriée ;
    - Puis la case se colorie en bleu puisque la case sous la fourmi n'est pas coloriée.
4) Quatrième répétition :
    - La case du milieu se colorie en rouge puisque la fourmi n'a pas changé de case ; et elle est maintenant sur une case coloriée ;
    - Puis la couleur de la case s'efface puisque la case sous la fourmi est coloriée.
etc.


La fourmi suis donc bien la règle et peut vivre et appliquer cette règle pendant plusieurs étapes. Il ne nous manque plus qu'à lui permettre de se déplacer en passant d'une case à l'autre !
