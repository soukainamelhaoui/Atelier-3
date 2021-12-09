#include <iostream>
using namespace std;
// Création de la classe Mere
class Mere{
    // Methode display()
    public:
    void display(){
        cout<<"je suis la mère"<<endl;
    }
};
// Création du sous-classe Fille
class Fille: public Mere{
    // Methode display()
    public:
    void display(){
        cout<<"Je suis la fille"<< endl;
    }
};

int main(){
    // Création de l'instance fille
    Fille fille;
    // Affichage de display()
    fille.display();
    return 0;
}