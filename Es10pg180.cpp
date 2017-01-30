#include <iostream>
using namespace std;

class Utente {
private:
    char nome[20];
    char password[20];
public:
    void stampanome();
    void modificanome();
    void stampapassword();
    void modificapassword();
};

int main() {
    Utente utente1;
    utente1.modificanome();
    utente1.modificapassword();
    utente1.stampanome();
    utente1.stampapassword();
    return 0;
}

void Utente::stampanome(){
    cout << nome << endl;
}

void Utente::modificanome(){
    cout << "Inserisci nome utente" << endl;
    cin >> nome;
}

void Utente::stampapassword(){
    cout << password << endl;
}

void Utente::modificapassword(){
    cout << "Inserisci password utente" << endl;
    cin >> password;
}
