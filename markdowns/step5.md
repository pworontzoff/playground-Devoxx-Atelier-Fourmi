# La fourmi de Langton - étape 5, effacer ou bien colorier

## Les explications

Un des grands bonds en avant historiques de l'informatique a été accompli lorsque nous avons pu ajouter un peu d'intelligence aux calculatrices.

Après avoir réussi à faire calculer des machines à notre place, nous pouvions désormais leur faire suivre des décisions.

Il ne s'agit pas d'intelligence, car la machine ne prend aucune décision par elle-même. Elle ne fait que suivre des décisions programmées à l'avance.

Et ce que nous allons faire maintenant, c'est d'utiliser ce mécanisme de programmation de prise de décision afin de faire *comme si* notre fourmi était intelligente et qu'on lui avait appris une règle à suivre.

En programmation, ce mécanisme pour préprogrammer une prise de décision s'appelle une alternative.

En langage C, une alternative s'écrira comme ceci :

```C
if (condition) {
   instructions_si_condition_vraie
} else {
   instructions_si_condition_fausse
}
```

- Dans `condition`, nous pourrons utiliser des instructions spécifiques qui sont parfois vraies, parfois fausses ;

- Dans le cas où la condition est vraie, seules les instructions (que nous avons dénommées ici plus haut `instructions_si_condition_vraie`) qui sont placées entre la première paire d'accolades ({...}) seront exécutées ;

- Mais dans le cas contraire (si la condition est fausse), seules les instructions (que nous avons dénommées ici plus haut `instructions_si_condition_fausse`) qui sont placées entre la seconde paire d'accolades ({...}) seront exécutées !

La condition que nous allons pouvoir utiliser sera une nouvelle instruction particulière :

```C
is_colored()
```

qui indique si oui (vrai) ou non (faux) la case sous le curseur est coloriée.

Cela veut donc dire que deux cas de figures peuvent se produire :<br />
&nbsp;&nbsp;&nbsp;a) soit la case sous le curseur est coloriée et dans ce cas l'instruction `is_colored()` sera considérée comme vraie ;<br />
&nbsp;&nbsp;&nbsp;b) soit la case sous le curseur n'est pas coloriée et dans ce cas l'instruction `is_colored()` sera considérée comme fausse.

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

@[fourmi5]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "fourmi5"})

Si tout est bon, on constate que :

1) La case se colorie en rouge lorsque le curseur arrive dessus ;
2) La case se colorie en bleu puisque la case sous le curseur n'est pas coloriée.

La fourmi suis donc bien la règle ! Mais elle ne fait qu'une étape. Nous allons maintenant faire vivre plus d'étapes à notre fourmi !
