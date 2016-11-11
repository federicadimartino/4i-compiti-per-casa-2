#include<iostream>
using namespace std;

int main()
{

     int a, b, c;
     cout << "Inserisci i valori a, b, c: " << endl;
     cin >> a>> b>> c;
     if(a>b)
     {
       if(b>c)
       {

           cout << a<< ' ' << b << ' ' << c;
       }
       else{

           cout << a<< ' ' << c << ' ' << b;
           }


}
      else{
       if(b<c)
       {

           cout <<b << ' ' <<c  << ' ' <<a ;
       }
       else{

           cout <<b<< ' ' <<a << ' ' <<c ;
           }

      }
}






