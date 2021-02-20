#include <iostream>
#include "cpp1.hpp"

using namespace std;



Singelton *Singelton::singelton = 0;

Singelton *Singelton::getInstance()
{
    if(singelton == 0)
        singelton = new Singelton();

    return singelton;
}

Singelton::Singelton() {}

int main(void){

    Singelton *s1 = Singelton::getInstance();
    Singelton *s2 = Singelton::getInstance();

    s1->a = 5;

    std::cout << s1 << " " << s1->a << std::endl;
    std::cout << s2 << " " << s2->a << std::endl;



    return 0;
}