#include "Point.h"
#include <iostream>

using namespace std;

// Constructeurs
Point::Point() : x(0.), y(0.)
{
    cout << "Je suis le constructeur de la classe Point ! " << this << endl; 
}

Point::Point(double x, double y) : x(x), y(y)
{
    // ou :
    /*
    this->x = x;
    this->y = y;
    */
    cout << "Je suis le constructeur de la classe Point ! " << this << endl; 
}

// Destructeur  
Point::~Point()
{
    cout << "Je suis le destructeur de la classe Point ! " << this << endl; 
}

// Accesseurs et mutateurs
double Point::getX() const
{
   return x;
}

void Point::setX(double x) 
{
   this->x = x;
}

double Point::getY() const
{
   return y;
}

void Point::setY(double y) 
{
   this->y = y;
}

// Services
void Point::affiche() const
{
   cout << "<" << x << "," << y << ">" << endl;
}
