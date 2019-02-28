#include<iostream>
int main(){
char salir;
int n;
int dias;
std::cout<<"Introduce un número del 1 al 7: ";
std::cin>>n;
if (n==1){
		std::cout<<"Lunes";
	}
if (n==2){
		std::cout<<"Martes";
	}
if (n==3){
		std::cout<<"Miercoles";
	}
if (n==4){
		std::cout<<"Jueves";
	}
if (n==5){
		std::cout<<"Viernes";
	}
if (n==6){
		std::cout<<"Sabado";
	}
if (n==7){
		std::cout<<"Domingo";	
	}
	return 0;			
	std::cout<<"Toca cualquier tecla para salir";
	std::cin>>salir;
}
