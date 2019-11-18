#include "Smoke.hh"

int main(int argv, char *argc[]){


    Card c1("Encenseur", "Fumagiste", 2);
    Card c2("Couvreur vertueux", "Desenfumeur", 8);

    cout << "On a : " << c1.toString() << "\net : " << c2.toString() << endl;


    return 0;
}