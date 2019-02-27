#include<iostream>
using namespace std;
float multiplicacion(float dolares){
      float respuesta;
      respuesta=(dolares*0.88);
      return (respuesta);
  }
  int main(){
  	char salir;
  	float dolares;
  	cout<<"Introduce una cantidad de dolares: ";
  	cin>>dolares;
  	cout<<"El valor en euros es: "<<multiplicacion(dolares);


  cout<<"\nToca cualquier tecla para salir";
    cin>>salir;
    return 0;
  }
