#include <iostream>
using std:: cout; 
using std:: cin;
using std:: endl;
using std:: string;
#include <string>

class Usuario{
	public: 
	
	Usuario(string el_nombre, string la_nacionalidad, string el_correo, string la_contrasenia, int la_edad)
	{
		
		while (la_contrasenia.length() <8){
			cout<<"La clave carece de los caracteres necesarios, favor ingrese una cantidad mayor que 8"<<endl;
			cin>>la_contrasenia;
		while(la_edad < 18 )
		{
			cout<<"no se puede crear el usuario,favor ingrese una edad valida"<<endl;
			cin>>la_edad; 
		}
	}
	
		nombre=el_nombre;
			nacionalidad=la_nacionalidad; 
			correo=el_correo; 
			contrasenia=la_contrasenia; 
			edad=la_edad;
	
	
		
		
		    
}
	string get_nombre(){
		return nombre;
	}
	
	
	
	void set_nombre(string nuevo_nombre){
		nombre=nuevo_nombre;
	}
	
	
		string get_nacionalidad(){
		return nacionalidad; 
	}
	
	void set_nacionalidad(string nueva_nacionalidad){
		nacionalidad = nueva_nacionalidad;
	}
	
	string get_contrasenia(){
		return contrasenia; 
	}
	
	void set_contrasenia(string nueva_contrasenia){
		contrasenia=nueva_contrasenia; 		
	}
	
	string get_correo(){
		return correo; 
	}
	void set_correo(string nuevo_correo){
		correo = nuevo_correo; 
	}
	
   int get_edad(){
		return edad; 
	}
	
	
	
	
	
	
	void set_edad(int nueva_edad){
		edad=nueva_edad; 
	}
	
	
	private: 
	
	string nombre,nacionalidad,correo, contrasenia; 
	int edad; 
	
	
};
int main(){
	
	Usuario user1("Adalid","hodurenio","Alber@gmail.com","0501266698",78);
	                                                      
	
	user1.set_nombre("mateo");
	cout<<"\nEl nombre del usuario es:\n"<<user1.get_nombre()<<endl; 
                          
	user1.set_nacionalidad("Aleman");   	
	cout<<"\nLa nacionalidad del usuario es:\n"<<user1.get_nacionalidad()<<endl;
	cout<<"\nEl correo del usuario es:\n"<<user1.get_correo()<<endl;
	cout<<"\nLa clave del usuario es:\n"<<user1.get_contrasenia()<<endl;
	cout<<"\nLa edad del usuario es:\n"<<user1.get_edad()<<" anios de edad"<<endl;

	
	
	
	return 0; 
	
}