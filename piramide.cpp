#include<iostream>
using namespace std;
int main(){
	char salir;
	int k;
	int p;
	int valor;
	
	cout<<"Introduce un numero: ";
	cin>>valor;
 
for(k=1;k<=valor;k++){
for(p=1;k>=p;p++);
cout<<"*";
cout<<"\n";
}

cout<<"\nToca cualquier tecla para salir";
    cin>>salir;
    return 0;
}
