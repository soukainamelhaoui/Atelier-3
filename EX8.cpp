#include <iostream>
using namespace std;
// Création de la classe Media
class Media{
    // Les attributs
    protected:
    string titre;
    // Fonctions membres virtuelles
    public:
    virtual void set(string titre){
        this->titre = titre;
    }
    virtual void imprimer() = 0;

};
// Sous-classe Media Livre
class Livre: public Media{
    // Les attributs
    private:
    string auteur;
    string date;
    // Les méthodes
    public:
    void set(string titre, string auteur, string date){
        this->titre = titre;
        this->auteur = auteur;
        this->date = date;
    }
    void imprimer(){
        cout<<"Ce livre est imprimé"<<endl;
    }
    
};
// Sous-classe Media Audio
class Audio: public Media{
    // Méthode virtuelle
    public:
    virtual void set(string titre){
        this->titre = titre;
    }
    // Les méthodes
    void imprimer(){
        cout<<"Ce média est non imprimé"<<endl;
    }
    virtual void playing(){
        cout<<"audio "<<titre<<" is playing"<<endl;
    }
    
};
// Sous-classe Audio CD
class CD: public Audio{
    public:
    void playing(){
        cout<<"CD is playing"<<endl;
    }

};
// Sous-classe Audio Cassette
class Cassette: public Audio{
    public:
    void playing(){
        cout<<"Cassette is playing"<<endl;
    }

};
// Sous-classe Audio Disque
class Disque: public Audio{
    public:
    void playing(){
        cout<<"Disque is playing"<<endl;
    }

};
// Sous-classe Media Presse
class Presse: public Media{
    // Les attributs
    protected:
    string date;
    // Méthodes virtuelles
    public:
    virtual void set(string titre, string date){
        this->titre = titre;
        this->date = date;
    }
    virtual void afficher() = 0;
    // Méthode imprimer()
    void imprimer(){
        cout<<"ce type de media est imprimé"<<endl;
    }
};
// Sous-classe Magazine
class Magazine: public Presse{
    public:
    void set(string titre, string date){
        this->titre = titre;
        this->date = date;
    }
    void afficher(){
        cout<<"La magazine "<<titre<<" a été publié le "<<date<<endl;
    }
};
// Sous-classe Journal
class Journal: public Presse{
    public:
    void set(string titre, string date){
        this->titre = titre;
        this->date = date;
    }
    void afficher(){
        cout<<"Le journal "<<titre<<" a été publié le "<<date<<endl;
    }
};
// Sous-classe Revue
class Revue: public Presse{
    public:
    void set(string titre, string date){
        this->titre = titre;
        this->date = date;
    }
    void afficher(){
        cout<<"La revue "<<titre<<" a été publié le "<<date<<endl;
    }
};

int main(){
    // Création des instances
    Media *media;
    Livre livre;
    media = &livre;
    livre.set("Livre 1", "Paolo", "12/07/2015");
    media->imprimer();
    Audio *audio;
    Disque disque;
    audio = &disque;
    audio->playing();
    audio->imprimer();
    Presse *presse;
    Journal journal;
    presse = &journal;
    presse->imprimer();
    presse->set("Le matin", "26 Octobre");
    presse->afficher();

    return 0;
}