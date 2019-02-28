#include<iostream>
using namespace std;
int main(){
	int n;
	char salir;
	cout<<"Introduce un numero entre el 1 y el 12: ";
	cin>>n;
	
	if(n==1){
		cout<<"Enero";
}
	if(n==2){
		cout<<"Febrero";
}
	if(n==3){
		cout<<"Marzo";
}
	if(n==4){
		cout<<"Abril";
}
	if(n==5){
		cout<<"Mayo";
}
	if(n==6){
		cout<<"Junio";
}
	if(n==7){
		cout<<"Julio";
}
	if(n==8){
		cout<<"Agosto";
}
	if(n==9){
		cout<<"Septiembre";
}
	if(n==10){
		cout<<"Octubre";
}
	if(n==11){
		cout<<"Noviembre";
}
	if(n==12){
		cout<<"Diciembre";
}
	if(n>12){
		cout<<"INTRODUCE UN NUMERO ENTRE 1 Y 12: ";
	}
	cout<<"Toca cualquier tecla para salir: ";
	cin>>salir;
	return 0;
}
