#include <iostream>
#include <iomanip>
#include "Point.h"

using namespace std;

int main() 
{   
   cout << "Constructeur par défaut" << endl;   
   // tag::snippet-constructeur-default[] 
   Point p0;
   // end::snippet-constructeur-default[]

   cout << "Constructeur d'initialisation" << endl;   
   // tag::snippet-constructeur-initialisation[] 
   Point p1(1., 2.);
   Point p2(4., 0.); 
   // end::snippet-constructeur-initialisation[] 

   cout << "Accesseurs et mutateurs" << endl;   
   cout.precision(2);

   // tag::snippet-accesseurs[]  
   cout << " L'abscisse de p0 est " << p0.getX() << endl;   
   cout << " L'abscisse de p1 est " << p1.getX() << endl;
   cout << " L'abscisse de p1 est " << p2.getX() << endl;
   cout << endl; 
   
   cout << " L'ordonnée de p0 est " << p0.getY() << endl;   
   cout << " L'ordonnée de p1 est " << p1.getY() << endl;
   cout << " L'ordonnée de p1 est " << p2.getY() << endl;
   cout << endl; 

   p0.setX(5.5);
   cout << " L'abscisse de p0 est maintenant " << p0.getX() << endl;   
   p0.setY(6.5);
   cout << " L'ordonnée de p0 est maintenant " << p0.getY() << endl;   
   cout << endl; 
   // end::snippet-accesseurs[]  

   cout << "Tableau d'objets" << endl;   
   // tag::snippet-tableau-objets[]  
   Point tableauDe10Points[10]; // typiquement : les cases d’un tableau de Point
   
   cout << "Un tableau de 10 Point : " << endl;
   for(int i = 0; i < 10; i++)
   {
      cout << " P" << i << " = <" << tableauDe10Points[i].getX() << "," << tableauDe10Points[i].getY() << ">\n";
   }   
   cout << endl; 
   // end::snippet-tableau-objets[]  

   cout << "Rendre des services" << endl;   
   // tag::snippet-services[]  
   cout << "p0 = ";
   p0.affiche();
   cout << "p1 = ";
   p1.affiche();
   cout << "p2 = ";
   p2.affiche();
   cout << endl;
   // tag::snippet-services[]  

   cout << "Allocation dynamique" << endl;   
   // tag::snippet-allocation-dynamique[]  
   Point *p3; // je suis pointeur non initialisé sur un objet de type Point
   p3 = new Point(2. , 2.); // j'alloue dynamiquement un objet de type Point
   //Point *p3 = new Point(2. , 2.); // cette écriture est conseillée
   
   // Comme p3 est une adresse, je dois utiliser l'opérateur -> pour accéder aux membres de cet objet
   cout << " L'abscisse de p3 est " << p3->getX() << endl;   
   p3->setY(0); // je modifie la valeur de l'attribut y de p3
   (*p3).setY(1); // cette écriture est possible : je pointe l'objet puis j'appelle sa méthode
   cout << " L'ordonnée de p3 est " << p3->getY() << endl;
   cout << " L'adresse de p3 est " << p3 << endl;
   delete p3; // ne pas oublier de libérer la mémoire allouée pour cet objet
   p3 = nullptr;
   cout << endl;  
   // end::snippet-allocation-dynamique[]  

   return 0;
}
