---
POO
<tvaira@free.fr>
18/06/2015
---

# Initiation à la programmation orientée objet

Lire [POO](https://fr.wikipedia.org/wiki/Programmation_orient%C3%A9e_objet) et [tvaira.free.fr][tvaira]

## Notion d'objets

La programmation orientée objet consiste à __définir des objets logiciels et à les faire interagir entre eux__.

Concrètement, un __objet__ est une _structure de données_ (_ses attributs_ c.-à-d. des _variables_) qui définit son _état_ et une _interface_ (_ses méthodes_ c.-à-d. des _fonctions_) qui définit son _comportement_.

Un objet est créé à partir d'un _modèle_ appelé __classe__. Chaque objet créé à partir de cette classe est une __instance__ de la classe en question.

## Notion de classe

Une classe __déclare des propriétés communes__ à un ensemble d'objets. 

Une classe représentera donc une _catégorie d'objets_. 

Elle apparaît comme un __type__ ou un _moule_ à partir duquel il sera possible de _créer des objets_.

## Notion de visibilité

Le C++ permet de préciser le __type d'accès des membres__ (_attributs_ et _méthodes_) d'un objet :

* `public` : les membres publics peuvent être utilisés dans et par n'importe quelle partie du programme.
* privé (`private`) : les membres privés d'une classe ne sont accessibles que par les objets de cette classe et non par ceux d'une autre classe.

Cette opération s'effectue __au sein des classes__^[il existe aussi une visibilité dite protégée (`protected`)].

## Notion d'encapsulation

L'encapsulation est l'idée de __protéger les variables contenues dans un objet et de ne proposer que des méthodes pour les manipuler__.

En respectant ce principe, toutes les variables (_attributs_) d'une classe seront donc __privées__ (`private`). 

L'objet est ainsi vu de l'extérieur comme une ``boîte noire`` possédant certaines propriétés et ayant un comportement spécifié.

# Exemple détaillé : une classe `Point`

Nous allons successivement découvrir les notions suivantes :

1. la modélisation et la déclaration d'une classe
2. la construction d'objets d'une classe et ~~la définition de ses fonctions membres~~
3. ~~les services rendus par une classe~~
4. ~~l'accès contrôlé aux membres d'une classe~~

Voir <http://tvaira.free.fr>

## Modélisation d'une classe

On veut manipuler des __points__. Un _point_ est défini par __son__ abscisse (`x`) et __son__ ordonnée (`y`). L'abscisse et l'ordonnée d'un point sont des __réels__ (`double`).

On en sait suffisamment pour modéliser une __classe `Point`__ :

![Modélisation d'une __classe `Point`__](images/classe-point-uml-c++.png)

Le code C++ ci-dessus correspond à la __déclaration de la classe `Point`__. Elle se placera donc dans un fichier en-tête (_header_) `Point.h`. 

Construction d'objets
---------------------

Pour __créer des objets__, il faudra ... __un constructeur__ : 

* Un constructeur est chargé d'__initialiser un objet de la classe__. 
* Il est appelé __automatiquement au moment de la création__ de l'objet.
* Un constructeur est une méthode qui porte toujours le même nom que la classe.

> Il existe quelques contraintes :
>
> * Il peut avoir des paramètres, et des valeurs par défaut.
> * Il peut y avoir plusieurs constructeurs pour une même classe.
> * Il n'a jamais de type de retour.

On le __déclare__ de la manière suivante :

~~~ {.cpp}
class Point 
{
   private:
      double x, y; // nous sommes des attributs de la classe Point
      
   public:
      Point(double x, double y); // je suis le constructeur de la classe Point
};
~~~

---------------------------------------

Il faut maintenant __définir__ ce constructeur afin qu'il _initialise tous les attributs de l'objet au moment de sa création_ :

~~~ {.cpp}
// Je suis le constructeur de la classe Point
Point::Point(double x, double y) 
{
   // je dois initialiser TOUS les attributs de la classe 
   this->x = x; // on affecte l'argument x à l'attribut x
   this->y = y; // on affecte l'argument y à l'attribut y
}
~~~

On pourra alors __créer nos propres _objets_ points__ :

![Les objets `p1` et `p2` sont des _instances_ de la classe `Point`](images/objets-point-uml-c++.png)

Un objet possède sa __propre existence__ et un _état_ qui lui est spécifique (c.-à-d. les valeurs de ses attributs) :


   Point     x       y
--------     ------- ----------
      p1     1        2
      p2     4        0


# Définitions

POO
 :  Programmation Orienté Objet

[Retour au sommaire](#)

[tvaira]: http://tvaira.free.fr "Site personnel de Thierry Vaira"
