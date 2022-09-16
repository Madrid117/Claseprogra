#include <iostream>
#include <string>
#include "Personas1.hpp"
using std:: cout;
using std:: cin;
using std:: endl;
 using std:: string;


int main ()
{

    sujeto1.infobasica();
    sujeto2.infobasica();

    sujeto1.setEdad(54);
    cout<<"edad actualizada"<<endl;
    cout<<"\n";
    sujeto1.infobasica();
    cout<<"\n";
    sujeto2.infobasica();
   sujeto3.infobasica();
     if(sujeto1.getEdad()>=21)
    {
    cout<<sujeto1.Getnombre()<<"puede hacer tramines legales\n\n";
    }
    else 
    {
      cout<<sujeto1.Getnombre()<<"sigue siendo menor de edad \n\n";
    }
     
     if(sujeto3.getEdad()>=21)
     {
    cout<<sujeto3.Getnombre()<<"puede hacer tramines legales\n\n";
    }
    else 
    {
      cout<<sujeto3.Getnombre()<<"sigue siendo menor de edad \n\n";
    }

   



    
    return 0; 
    
}
