# La fourmi de Langton - étape 5, effacer ou colorier

## Les explications

Un des grands bons en avant historique de l'informatique a été accompli lorsque nous avons pu ajouter un peu d'intelligence aux calculatrices.

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

**Autrement dit 

dans notre programme  colorié la case centrale (en 4e ligne, 4e colonne) et nous allons à présent effacer cette case (juste après l'avoir coloriée).**

<br />

## Alerte au piège !

**Un piège ? Où ça ? Non, non, pas de piège en vue !**

<br />

## Le programme C (à vous les commandes !)

**! N'hésitez pas à revenir en arrière et copier-coller ci-dessous votre programme précédent avant de le modifier.**

@[fourmi1]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "fourmi1"})

Si tout est bon, on constate que :

1) La case se colorie en rouge lorsque le curseur arrive dessus ;
2) La case se colorie en bleu lorsque nous colorions la case (avec `colorize()`);
3) La case se colorie à nouveau en rouge car le curseur ne bouge pas (il se déplace... à la même place !) ;
4) La case devient à nouveau blanche (non coloriée) lorsque nous effaçons la case (avec `erase()`).

C'est exactement ce qu'il nous faut car on voit ainsi en rouge les déplacements du curseur. Il nous suffit alors de dire que le curseur (en rouge), c'est la fourmi !

Nous allons maintenant commencer une grande étape : faire prendre des décisions à notre fourmi !

!!!!!!!! MEMO : étapes suivantes : 5) colorier OU effacer (alternatives) / 6) en boucle / 7) avec les mouvements ! / 8) plus grand plus loin / 9) fini la symétrie / 10) l'autoroute !
