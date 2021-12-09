#include <iostream>
#include <math.h>
using namespace std;
// Création de la classe Vecteur
class Vecteur{
    // Les attributs
    private:
    float x, y, z;
    // Le constructeur
    public:
    Vecteur(){
        this -> x = 0;
        this -> y = 0;
        this -> z = 0;
    }
    Vecteur(float x, float y , float z){
        this -> x = x;
        this -> y = y;
        this -> z = z;
    }
    // Méthode qui affiche le vecteur
    void affichage(){
        cout<<"Le vecteur est: ("<<x<<", "<<y<<", "<<z<<")"<<endl;
    }
    // Méthode qui additione deux vecteurs
    void add(Vecteur v1){
        float a = this -> x + v1.x;
        float b = this -> y + v1.y;
        float c = this -> z + v1.z;

        cout<<"La somme des vecteurs: ("<<a<<", "<<b<<", "<<c<<")"<<endl;

    }
    // Méthode qui multiplie deux vecteurs
    void mult(Vecteur v1){
        float a = this -> x * v1.x;
        float b = this -> y * v1.y;
        float c = this -> z * v1.z;

        cout<<"Le produit des vecteurs: "<<a+b+c<<endl;

    }
    // Méthode qui compare deux vecteurs
    bool compare(Vecteur v1){
    return (this->x == v1.x && this->y == v1.y && this->z == v1.z);
    }
    // Méthode qui calcul la norme d'un vecteur
    float norm(){
        return sqrt(pow(this->x, 2)+pow(this->y, 2)+pow(this->z, 2));
    }
    // Méthode qui compare les normes des deux vecteurs
    void normax(Vecteur v1){
        if(this->norm() > v1.norm()){
            cout<<"("<<v1.x<<", "<<v1.y<<", "<<v1.z<<")"<<endl;
        }else{
            cout<<"("<<this->x<<", "<<this->y<<", "<<this->z<<")"<<endl;
        }
    }
    // Méthode avec pointeur
    void normax(Vecteur* v1){
        if(this->norm() > v1->norm()){
            cout<<"("<<v1->x<<", "<<v1->y<<", "<<v1->z<<")"<<endl;
        }else{
            cout<<"("<<this->x<<", "<<this->y<<", "<<this->z<<")"<<endl;
        }
    }
};


int main(){
    // Création des instances v et w
    Vecteur v;
    Vecteur w;
    Vecteur v1 =Vecteur(5, 7, 3);
    Vecteur v2 =Vecteur(10, -1, 3);
    v.affichage();
    v.add(w);
    v.mult(w);
    //Comparation
    if(v.compare(w)){
        cout<<"Les vecteurs sont égaux."<<endl;
    }else{
        cout<<"Les vecteurs ne sont pas égaux."<<endl;
    }
    cout<<"la norme du vecteur est: "<<v.norm()<<endl;
    cout<<"le vecteur avec la plus grande norme est: ";
    v.normax(w);
    cout<<"le vecteur avec la plus grande norme est: ";
    v1.normax(&v2);

    return 0;
}