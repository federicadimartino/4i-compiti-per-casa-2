//esercitazione per la verifica
#include<iostream>
using namespace std;



int main ()
{
   int N, resto, conta=0 ;
   cout << "Inserisci un valore di N pari" << endl;
     do{
       cin >> N;
       resto= N%2;

     } while( N<2 || N>=50 || resto!=0);
    int valori[N];
    for ( int i=0; i<N; i++)
    {
        cout << "Inserisci valore [ " << i << " ]" << endl;
        cin >> valori[i];
    for (int j=0; j<i; j++)
    {
        if(valori[j]>=valori[i]){
           conta += 1;
        }

    }
     cout << "La quantità di indici e': " << conta<< endl;
     conta=0;
    }
 return 0;
}
