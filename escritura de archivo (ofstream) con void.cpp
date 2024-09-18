#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void escribir(string ruta, string informacion){
	
	ofstream archivo(ruta);
	
	if (archivo.is_open()){
		archivo<<informacion;
		
		archivo.close();
		cout<<"archivo creado y datos escritos exitosamente."<<endl;
		
		
	}else{
		cerr<<"Error al tratar de abrir el archivo "<<endl;
	}
	
	
	
}

int main(){

	escribir("C:/Users/PROGRAMACION/Desktop/progra.txt", "hola, que tal! \nEstamos aprendiendo programacion");
	return 0;
	
}
