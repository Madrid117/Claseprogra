#include <iostream>

using std::cout;
using std::endl;
using std::cin;


class Circulo 
{
	public: 
	Circulo (float mi_radio,float el_diametro)
	{
		radio = mi_radio; 
		diametro= el_diametro; 
		
	}
	
	
	
	float getArea_circulo(){
		return 3.1416*radio*radio;
		
	}
	
	float getPerimetro_circulo (){
		return 2*(3.1416)*radio;
	}
	
	private:
	float radio, diametro; 
};

class Rectangulo 
{
	
  public: 
  Rectangulo (float lal,float anch)
	{
		largo = lal; 
		ancho= anch; 
	}
  float getArea1_rectangulo(){
		return largo*ancho;
		
	}
	
	float getPem_rectangulo (){
		return 2*(largo+ancho);
	}
  private: 
  
  float largo, ancho;
  
  	
};


int main()
{
	Circulo circ(4.2,8.4);
	Rectangulo rectang(6.3,9.222);
	
	cout<<"\nel area del circulo es\n\n:"<<circ.getArea_circulo()<<endl; 
	cout<<"\nel perimetro del circulo es\n\n:"<<circ.getPerimetro_circulo()<<endl; 
	
	cout<<"\nel area del rectangulo es\n\n:"<<rectang.getArea1_rectangulo()<<endl; 
	cout<<"\nel perimetro del rectagulo es\n\n:"<<rectang.getPem_rectangulo()<<endl; 
	
	
	if (rectang.getArea1_rectangulo() > circ.getArea_circulo()){
			cout<<"\nel rectangulo tiene un area mayor que el circulo \n\n:"<<endl; 
	}
	else 
	cout<<"\nel area del circulo es mayor que el rectangulo \n\n:"<<endl;
	return 0;
}