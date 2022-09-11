#include <iostream>
using :: std:: cout;
using :: std:: endl;
using :: std:: cin;

int main() 
{
float notas[5];
float promedio; 
float suma=0.0; 

for (int i=0 ;i<=4 ; i++)
{
cout<<"ingrese la nota deseada"<<i+1<<endl; 
cin>> notas[i];
}

for (int j=0 ; j<=4; j++)
{
    suma+=notas[j];
}
promedio= suma/5; 
cout<<"el promedio final es: \n\n "<<promedio<<endl;
return 0; 

}