#include<iostream>
using namespace std;
// Création de la classe Myclass
class MyClass{
    // Le constructeur
    public:
    MyClass(){
        cout<<"Je suis le Constructeur"<<endl;
    }
    // Le deconstructeur
    ~MyClass(){
        cout<<"Je suis le Déstructeur"<<endl;
    }

};

int main(){
    // Création de l'instance class1
    MyClass class1;
    return 0;
}