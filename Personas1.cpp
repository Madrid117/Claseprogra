#include "Personas1.hpp"
#include <iostream>
using std:: cout;
using std:: cin;
using std:: endl;
Persona::Persona(string minombre,string miId, string miEC, int miedad)
{
    id=miId;
    nombre=minombre;
    EC=miEC;
    edad=miedad;

}

void Persona::infobasica()
{
    cout<<"mi nombre es:"<< nombre <<endl;
    cout<<"mi id es"<<id<<endl; 
    cout<<"tengo anios"<<edad<<endl; 
    cout<<"y estoy"<<EC<<endl;
}
void Persona::setEdad(int oEdad)
{
edad=oEdad;
}

int Persona::getEdad()
{
    return edad;
}

string Persona::Getnombre(){
    return nombre;
}