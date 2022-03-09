# La fourmi de Langton - étape 5, effacer avec erase()

## Les explications

Pour effacer une case précédemment coloriée, nous pourrons utiliser l'instruction

```C
erase();
```

<br />

## Les consignes de notre mission

**Nous avons donc colorié la case centrale (en 4e ligne, 4e colonne) et nous allons à présent effacer cette case (juste après l'avoir coloriée).**

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
