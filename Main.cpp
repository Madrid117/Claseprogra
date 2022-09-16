#include "Personas1.hpp"

int main()
{
Persona sujeto1("stevenson","25642145","casado",45);
sujeto1.infobasica();
if(sujeto1.getEdad()>=59){
    cout<<"esta viejito"<<endl;
}
else {
    cout<<"no esta viejito"<<endl;
}
}