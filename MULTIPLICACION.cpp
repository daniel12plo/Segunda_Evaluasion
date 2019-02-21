#include<iostream>
using namespace std;
float multiplicacion(float num1, float num2, float num3, float num4){
      float respuesta;
      respuesta=(num1*num2*num3*num4);
      return (respuesta);
}
 int main(){
     char salir;
     float num1,num2,num3,num4;
     cout<<"Introduce numero 1: ";
    do{
    cin>>num1;
    if(num1==0){
    cout<<"\nERROR Introduce otro numero: ";
}
}while(num1==0);

    cout<<"Introduce numero 2: ";
    do{
    cin>>num2;
    if(num2==0){
    cout<<"\nERROR Introduce otro numero: ";
}
}while(num2==0);
    cout<<"Introduce numero 3: ";
    do{
    cin>>num3;
    if(num3==0){
    cout<<"\nERROR Introduce otro numero: ";
}
}while(num3==0);
    cout<<"Introduce numero 4: ";
    do{
    cin>>num4;
    if(num4==0){
    cout<<"\nERROR Introduce otro numero: ";
}
}while(num4==0);
   cout<<"El producto es: "<<multiplicacion(num1,num2,num3,num4);

cout<<"\nToca cualquier tecla para salir";
    cin>>salir;
    return 0;
}
