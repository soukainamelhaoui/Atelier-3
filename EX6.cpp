#include <iostream>
using namespace std;
// Création de la classe Personne
class Personne{
    // Les attributs
    protected:
    string nom;
    string prenom;
    string date;
    // Le constructeur
    public:
    Personne(string nom, string prenom, string date){
        this->nom = nom;
        this->prenom = prenom;
        this->date = date;
    }
    // La méthode afficher()
    void afficher(){
        cout<<nom<<" "<<prenom<<"née en "<<date<<endl;
    }
};
// Sous-classe de Personne
class Employee: public Personne{
    // Les attributs
    protected:
    float salaire;
    // Le constructeur
    public:
    Employee(string nom, string prenom, string date, float salaire):Personne(nom, prenom, date){
        this->salaire = salaire;
    }
    // La méthode afficher()
    void afficher(){
        cout<<nom<<" "<<prenom<<" née en "<<date<<" qui a un salaire de :"<<salaire<<"DH."<<endl;
    }
};
// Sous-classe de Employee
class Chef: public Employee{
    // Les attributs
    protected:
    string service;
    // Le constructeur
    public:
    Chef(string nom, string prenom, string date, float salaire, string service):Employee(nom, prenom, date, salaire){
        this->service = service;
    }
    // La méthode afficher()
    void afficher(){
        cout<<nom<<" "<<prenom<<" née en "<<date<<" qui a un salaire de :"<<salaire<<"DH, en service "<<service<<endl;
    }
};
// Sous-classe de Chef
class Directeur: public Chef{
    // Les méthodes
    protected:
    string societe;
    // Le constructeur
    public:
    Directeur(string nom, string prenom, string date, float salaire, string service, string societe):Chef(nom, prenom, date, salaire, service){
        this->societe = societe;
    }
    // La méthode afficher()
    void afficher(){
        cout<<nom<<" "<<prenom<<" née en "<<date<<" qui a un salaire de :"<<salaire<<"DH, en service "<<service<<" à "<<societe<<endl;
    }
};

int main(){
    // Création des instances
    Employee emp("Ahmed", "Ali", "12/07/1990", 25000);
    emp.afficher();
    Chef chef("Ahmed", "Ali", "12/07/1990", 25000, "Cooking");
    chef.afficher();
    Directeur direc("Ahmed", "Ali", "12/07/1990", 25000, "Cooking", "Pizza hat");
    direc.afficher();

    return 0;
}