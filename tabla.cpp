#include<iostream>
int main(){
    int numero;
    int i;
    char salir;
    std::cout<<"Que tabla desea hacer? (0-10)";
    std::cin>>numero;
    for(i=1;i<=10;i++){
    std::cout<<i;
    std::cout<<" X ";
    std::cout<<numero;
    std::cout<<" = ";
    std::cout<<i*numero;
    std::cout<<"\n";
}
std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
