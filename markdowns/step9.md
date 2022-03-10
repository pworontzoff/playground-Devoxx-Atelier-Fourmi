# La fourmi de Langton - étape 8, dézoom et comportement symétrique (472 étapes) !

## Les explications

Nous allons maintenant pouvoir observer la fourmi qui détruit son beau dessin et adopte un chemin plutôt cahotique et désordonné.

Pour cela nous allons faire exactement comme à l'étape précédente mais avec d'autres valeurs.

## Les consignes de notre mission

Nous avions une fourmi de Langton qui a effectué correctement :
- *472* étapes ;
- Dans un Paper de *15x15* ;
- Avec des cases de *20* pixels de côtés ;
- Avec un délai de pause entre chaque étape de l'animation *de 25 millièmes de seconde* ;
- Et un curseur (notre fourmi) initialement positionné en *8e ligne, 8e colonne*.

Nous devons maintenant obtenir une fourmi de Langton qui va effectuer correctement :
- ***472*** étapes ;
- Dans un Paper de ***15x15*** ;
- Avec des cases de ***20*** pixels de côtés ;
- Avec un délai de pause entre chaque étape de l'animation ***de 25 millièmes de seconde*** ;
- Et un curseur (notre fourmi) initialement positionné en ***8e ligne, 8e colonne***.
<br />

## Alerte au piège !

**Veiller à écrire correctement *25 millièmes de secondes* en un nombre (avec une virgule) de secondes.**

<br />

## Le programme C (à vous les commandes !)

**! N'hésitez pas à revenir en arrière et copier-coller ci-dessous votre programme précédent avant de le modifier.**

@[fourmi1]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "fourmi1"})

Si tout est bon, on constate que la fourmi trace son chemin en respectant le petit dessin montré dans la vidéo d'introduction :

![dessin472etapes](img/dessin472etapes.PNG)

Nous avons réussi à observer le comportement symétrique de la fourmi. Allons donc vérifier son comportement cahotique (cette "transition" que personne ne comprend vraiment !)

