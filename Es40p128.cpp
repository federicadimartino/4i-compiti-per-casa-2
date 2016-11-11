#include<iostream>
using namespace std;


bool appartenenza(bool a);

int xp, yp, m, q;
float r;
bool a;

int main()
{
    cout << "Inserisci i valori di xp, yp, m, q:" << endl;
    cin >> xp;
    cin >> yp;
    cin >> m;
    cin >> q;
    bool app;
    cout << "Il punto P appartiene alla retta: " << appartenenza(app) << endl;


}

bool appartenenza(bool a)
{
    r= m*xp+q-yp;
    if(r=0){
      a= true;
    }
    else(a= false);
    return a;

}
