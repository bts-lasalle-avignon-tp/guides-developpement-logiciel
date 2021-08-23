#include <iostream> /* pour cin et cout */

#define DEBUG // <1>

int main()
{
    int annee = 0;

    std::cout << "Entrez une année : ";
    std::cin >> annee;
    #ifdef DEBUG
    std::cout << "[" << __FILE__ << ":" << __FUNCTION__ << "():" << __LINE__ 	<< "] " << "annee" << " = " << annee << std::endl;
    #endif
    
    // ...
    
    return 0;
}
