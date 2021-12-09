#include <iostream>
using namespace std;
// Création de la classe Test
class Test{
    // Attribut statique
    public:
    static int count;
    // Méthode call()
    void call(){
        count++;
        cout<<count<<endl;
    }
};
// Initialisation d'attribut count
int Test::count = 0;

int main(){
    // Création de l'instance test1
    Test test1;
    test1.call();
    test1.call();
    test1.call();
    return 0;
}