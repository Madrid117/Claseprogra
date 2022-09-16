#include <iostream>


using std:: cout;
using std:: cin;
using std:: endl;

int main ()
{

    int numerito, *numerin ; 
    numerito = 17; 
    numerin = &numerito;

    cout<<"el numerito pirujo es : \n"<<*numerin<<endl; 
    cout<<"la pinche direccion de memoria:"<<numerin<<endl;
    return 0;

}