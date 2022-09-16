#include <iostream>
#include <cstdlib>

using std::cout; 
using std::cin; 
using std::endl; 

class Rectangulo 
{
 private:
 float largo,ancho; 

public: 
void perimetro ();
void area();
Rectangulo(float, float);


}; 
Rectangulo::Rectangulo(float llargo,float lancho)
{
    largo=llargo;
    ancho= lancho; 
}

void Rectangulo:: perimetro()
{
   float perimetro2; 
   perimetro2 = 2*(largo+ancho);

   cout<<"el perimetro es:"<<perimetro2<<endl; 
}

void Rectangulo::area ()
{
    float area2; 
    area2 = largo*ancho ; 

     cout<<"el area es:"<<area2<<endl; 
};

int main ()
{
    Rectangulo r1(11,7);

    r1.perimetro ();
    r1.area();
    
    return 0;
}