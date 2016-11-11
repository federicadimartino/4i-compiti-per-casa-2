#include<iostream>
using namespace std;


bool perpendicolari( bool p);

bool p;
float rapporto;
float m1, m2;

int main()
{
    cout << "Inserisci il valore di m1 e m2: " << endl;
    cin >> m1 >> m2;
    bool perpendicolare;
    cout << "Le rette sono perpendicolari: " << perpendicolari(perpendicolare) << endl;
    return 0;

}
bool perpendicolari( bool p)
{
    rapporto= m1*m2;
    if(rapporto==1){

       p= true;
    }
    else(p= false);
    return p;
}
