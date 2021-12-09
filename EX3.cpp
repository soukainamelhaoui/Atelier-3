#include <iostream>
#include <math.h>
using namespace std;
 // Creation du class Complex
class Complex{
    // Les attributs
    private:
    float real;
    float imag;
    //Le constructeur
    public:
    Complex(float real, float imag){
        this -> real = real;
        this -> imag = imag;

    }
    // Méthode d'affichage
    void display(){
        cout<<"le nombre est: "<<real<<" + "<<imag<<"i"<<endl;
    }
    // Méthode d'addition
    void add(Complex nbr){
        float a = this->real + nbr.real;
        float b = this->imag + nbr.imag;
        cout<<"le résultat d'addition des deux nombre est: "<<a<<" + "<<b<<"i"<<endl;
    }
    // Méthode de soustraction
    void substrat(Complex nbr){
        float a = this->real - nbr.real;
        float b = this->imag - nbr.imag;
        cout<<"le résultat de soustraction des deux nombre est: "<<a<<" + "<<b<<"i"<<endl;
    }
    // Méthode de multiplication
    void mult(Complex nbr){
        float a = (nbr.real * this->real) - (nbr.imag * this->imag);
        float b = (nbr.real * this->imag) + (nbr.imag * this->real);
        cout<<"le résultat de multiplication des deux nombre est: "<<a<<" + "<<b<<"i"<<endl;
    }
    // Méthode de division
    void divide(Complex nbr){
        float a = ((nbr.real * this->real) - (nbr.imag * this->imag))/(pow(nbr.real, 2)+pow(nbr.imag, 2));
        float b = ((nbr.real * this->imag) + (nbr.imag * this->real))/(pow(nbr.real, 2)+pow(nbr.imag, 2));
        cout<<"le résultat de division des deux nombre est: "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    // Création des instances nbr1 et nbr2
    Complex nbr1(9, 7);
    Complex nbr2(5, 12);
    // Affichage des méthodes
    nbr1.display();
    nbr1.add(nbr2);
    nbr1.substrat(nbr2);
    nbr1.substrat(nbr2);
    nbr1.mult(nbr2);
    nbr1.divide(nbr2);
    return 0;
}