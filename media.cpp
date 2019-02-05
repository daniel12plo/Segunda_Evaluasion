#include<iostream>
 float media(float num1, float num2, float num3, float num4){
     float respuesta;
     respuesta=(num1+num2+num3+num4)/4
     return respuesta;
}
 int main(){
     char salir;
    int num1,num2,num3,num4;
    std::cout<<"Introduce numero 1: ";
    std::cin>>num1;
    std::cout<<"Introduce numero 2: ";
    std::cin>>num2;
    std::cout<<"Introduce numero 3: ";
    std::cin>>num3;
    std::cout<<"Introduce numero 4: ";
    std::cin>>num4;
    std::cout<<" El mayor es: "<<mayor(num1,num2,num3,num4);
    
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
