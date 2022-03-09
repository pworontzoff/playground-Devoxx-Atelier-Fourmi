# La fourmi de Langton - étape 6, en boucle !

## Les explications

Un des acquis de l'informatique dont on ne saurait plus se passer consiste à décrire en quelques lignes à un appareil électronique (pc, console, tablette, smartphone, ...) d'exécuter certaines instructions plusieurs fois.

Peut-être 10 fois, peut-être 10 milliards de fois (et ça ne prend pas même un centième de seconde à une console de jeu).

Si on devait faire ces caluls à la main...

Et tout ça tient dans le concept incontournable des boucles.

Les syntaxes des différentes boucles du langage C sont un peu trop complexes pour cet atelier, mais le langage permet des mécanismes de simplifications (appelés "macrso") que nous exploiterons afin de simplifier l'écriture des boucles.

Nous pourrons donc programmer une boucle de plusieurs étapes pour notre fourmis grâce à la macro `repeat(n) loop` :

```C
repeat (n) {
   instructions_exécutées_n_fois
} loop;
```

Dans `condition`, nous pourrons utiliser des instructions spécifiques qui sont parfois vraies, parfois fausses.

Dans le cas où la condition est vraie, seules les instructions (que nous avons dénommées ici plus haut `instructions_si_condition_vraie`) qui sont placées entre la première paire d'accolades ({...}) seront exécutées, mais dans le cas contraire (si la condition est fausse), seules les instructions (que nous avons dénommées ici plus haut `instructions_si_condition_fausse`) qui sont placées entre la seconde paire d'accolades ({...}) seront exécutées !

La condition que nous allons pouvoir utiliser sera une nouvelle instruction particulière :

```C
is_colored()
```

qui indique si oui (vrai) ou non (faux) la case sous le curseur est coloriée.

Cela veut donc dire que deux cas de figures peuvent se produire :
a) soit la case sous le curseur est coloriée et dans ce cas l'instruction `is_colored()` sera considérée comme vraie ;
b) soit la case sous le curseur n'est pas coloriée et dans ce cas l'instruction `is_colored()` sera considérée comme fausse.

<br />

## Les consignes de notre mission

**Nous avions un programme qui nous permettait de colorier la case centrale *puis* de l'effacer. Nous allons maintenant devoir ajouter une alternative pour que notre programme efface *ou bien* colorie la case centrale selon que la case sous le curseur est coloriée ou non.**

**Autrement dit :**

**SI la case est coloriée, on l'efface
SINON, on la colorie**

<br />

## Alerte au piège !

**Bien respecter l'ordre des opérations :**<br />
**1) Créer le Paper animé ;**<br />
**2) Se déplacer sur la case du milieu ;**<br />
**3) SI la case est coloriée, on l'efface SINON, on la colorie ;**<br />
**4) Afficher le Paper animé.**

<br />

## Le programme C (à vous les commandes !)

**! N'hésitez pas à revenir en arrière et copier-coller ci-dessous votre programme précédent avant de le modifier.**

@[fourmi1]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "fourmi1"})

Si tout est bon, on constate que :

1) La case se colorie en rouge lorsque le curseur arrive dessus ;
2) La case se colorie en bleu puisque la case sous le curseur n'est pas coloriée.

La fourmi suis donc bien la règle ! Mais elle ne fait qu'une étape. Nous allons maintenant faire vivre plus d'étapes à notre fourmi !
