/**
 * @file        estMajeur.cpp
 *
 * @brief       Ce programme assure la saisie de l'age d'une personne et affiche si celle-ci est majeure
 * @author      Thierry vaira <tvaira@free.fr>
 * @version     0.1
 * @date        2020
 * @attention   Aucune vérification de saisie n'est effectuée
 *
 * @return      int 0 si succes
 *
 */

#include <iostream> /* pour cin et cout */
#include <cstdlib> /* pour EXIT_SUCCESS */

#define AGE_MAJORITE_FRANCE   18

int main()
{
    unsigned int age = 0;

    std::cout << "Entrez un age : ";
    std::cin >> age;

    bool estMajeur = (age >= AGE_MAJORITE_FRANCE);

    if(estMajeur)
    {
        std::cout << "Vous êtes majeur." << std::endl;
    }
    else
    {
    }        

    return EXIT_SUCCESS;
}
