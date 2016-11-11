//esercizio p 127 n 33
#include<iostream>
using namespace std;

int main()
{
    cout << "Data la parabola y=ax*x + b*x +c :" << endl;
    int a, b, c;
    float Vertice_x, Vertice_y, Fuoco_x, Fuoco_y;
    cout << "Inserisci il valore di a: " << endl;
    cin >> a;
    cout << "Inserisci il valore di b: " << endl;
    cin >> b;
    cout << "Inserisci il valore di c: " << endl;
    cin >> c;
    if(a>0){
      Vertice_x= -b/(2*a);
      Vertice_y= -(b*b-4*a*c)/4*a;
      cout << "Le coordinate del vertice sono rispettivamente: " << Vertice_x << " e " <<endl;
      cout << Vertice_y << endl;
      Fuoco_x= -b/(2*a);
      Fuoco_y= 1-(b*b-4*a*c)/4*a;
      cout << " Le coordinate del fuoco sono rispettivamente: " << Fuoco_x << " e " <<endl;
      cout << Fuoco_y;
     }
    else{
      Vertice_x= -(b*b-4*a*c)/4*a;
      Vertice_y=  -b/(2*a);
      cout << "Le coordinate del vertice sono rispettivamente: " << Vertice_x << " e " <<endl;
      cout << Vertice_y << endl;
      Fuoco_y= -b/(2*a);
      Fuoco_x= 1-(b*b-4*a*c)/4*a;
      cout << " Le coordinate del fuoco sono rispettivamente: " << Fuoco_x << " e " <<endl;
      cout << Fuoco_y;


 }
  return 0;

}


