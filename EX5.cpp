#include <iostream>
using namespace std;
// Création de la classe Animal
class Animal{
    // Les attributs
    protected:
    string nom;
    int age;
    // La méthode set_value
    public:
    void set_value(string nom, int age){
        this->nom = nom;
        this->age = age;
    }
};
// Création du sous-classe Zebra
class Zebra: public Animal{
    private:
    string lieu;
    public:
    void set_value(string nom, int age, string lieu){
        this->lieu = lieu;
        this->nom = nom;
        this->age = age;

    }
    // La méthode print()
    void print(){
        cout<<nom<<" "<<age<<" d'origine "<<lieu<<endl;
    }
};
// Création du sous-classe Dolphin
class Dolphin: public Animal{
    private:
    string lieu;
    public:
    void set_value(string nom, int age, string lieu){
        this->lieu = lieu;
        this->nom = nom;
        this->age = age;

    }
    // La méthode print()
    void print(){
        cout<<nom<<" "<<age<<" d'origine "<<lieu<<endl;
    }
};

int main(){
    // Création des instances zebra et dolphin
    Zebra zebra;
    Dolphin dolphin;
    dolphin.set_value("dolphin", 7, "Australia");
    dolphin.print();
    zebra.set_value("zebra", 12, "Africa");
    zebra.print();
    return 0;
}