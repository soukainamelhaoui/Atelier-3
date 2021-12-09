#include <iostream>
using namespace std;
// Création de la classe Shape
class Shape{
    // Les attributs
    protected:
    float largeur;
    float hauteur;
    // Le constructeur
    public:
    Shape(float largeur, float hauteur){
        this -> largeur = largeur;
        this -> hauteur = hauteur;
    }
};
// Création du sous-classe Triangle
class Triangle: public Shape{
    // Le constructeur
    public:
    Triangle(float largeur, float hauteur): Shape(largeur, hauteur){};
    // Fonction qui calcul l'air
    float area(){
        return (largeur*hauteur)/2;
    }

};
// Création du sous-classe Rectangle
class Rectangle: public Shape{
    // Le constructeur
    public:
    Rectangle(float largeur, float hauteur): Shape(largeur, hauteur){};
    // Fonction qui calcul l'air
    float area(){
        return largeur*hauteur;
    }

};

int main(){
    // Création des instances
    Triangle triangle(20, 30);
    Rectangle rectangle(20, 30);
    // Affichage du résultat du calcul de l'air
    cout<<"l'aire du triangle est: "<<triangle.area()<<endl;
    cout<<"l'air du rectangle est: "<<rectangle.area()<<endl;
    return 0;
}