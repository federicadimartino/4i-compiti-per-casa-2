#include <iostream>
#define N_SCUOLE 5
#define N_STUDENTI 10

using namespace std;
//ESERCIZIO 11 PAGINA 180

class Studente{
    private:
        unsigned int id_scuola;
    public:
       string nome;
       string cognome;
    public:
        Studente(string nome, string cognome);
        Studente(string nome, string cognome, unsigned int id_scuola);
};

class Scuola{
   private:
       unsigned int id;
       Studente studenti[N_STUDENTI];
   public:
       string denominazione;
       unsigned int num_studenti;
   public:
       Scuola(string denominazione);
       Scuola(string denominazione, unsigned int id);
       void stampa_studenti();
};



int main () {
    Scuola scuole[N_SCUOLE];

    for (int i = 0; i < N_SCUOLE; i++){
        string nome_scuola;
        cout << "Inserisci il nome della scuola: " << endl;
        cin >> nome_scuola;
        Scuola s(nome_scuola, i);
        scuole[i] = s;
        char scelta = 's';
        int j = 0;
        while (scelta == 's'){
            string nome_studente;
            cout << "Inserisci nome studente: " << endl;
            cin >> nome_studente;
            string cognome_studente;
            cout << "Inserisci cognome studente: " << endl;
            cin >> cognome_studente;
            Studente studente(nome_studente, cognome_studente,i);
            s.studenti[j] = studente;
            j++;
            cout << "Vuoi continuare? (s/n): " << endl;
            cin >> scelta;
        }
    }
    string nome_scuola;
    cout << "Di quale scuola vuoi l'elenco studenti?" << endl;
    cin >> nome_scuola;

  return 0;
}


Scuola::Scuola(string nome_scuola){
    denominazione = nome_scuola;
}

Scuola::Scuola(string nome_scuola, unsigned int id_scuola){
    denominazione = nome_scuola;
    id = id_scuola;
}
