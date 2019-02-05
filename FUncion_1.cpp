 #include<iostream>
 int mayor(int num1, int num2, int num3){
     int respuesta;
     if(num1>num2 && num1>num3){
                  respuesta=num1;
                  }
     if(num2>num3 && num2>num3){
                  respuesta=num2;
                  }
     if(num3>num1 && num3>num2){
                  respuesta=num3;
                  }
 
 
}
 int main(){
     char salir;
    int num1,num2,num3;
    std::cout<<"Introduce un numero: ";
    std::cin>>num1;
    std::cout<<"Introduce un numero: ";
    std::cin>>num2;
    std::cout<<"Introduce un numero: ";
    std::cin>>num3;
    std::cout<<" El mayor es: "<<mayor(num1,num2,num3);
    
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
