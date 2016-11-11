#include<iostream>
using namespace std;

const int ANNO= 2016;

int eta(int annoNascita)
{

    return ANNO-annoNascita;
}



int main()
{
   int nascita;
   cin >> nascita;
   cout << "La persona ha anni "  << eta(nascita) << endl;
   return 0;
}



