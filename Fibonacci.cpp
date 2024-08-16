#include<iostream>
using namespace std;

/*
Serie de Fibonacci
El usuario dir� un n�mero, y el programa imprimir� la serie de fibonacci hasta ese n�mero
*/
int fibonacci(int amount){
	int initialA = 0;
	int initialB = 1;
	int next;
	cout<<initialA<<endl;
	cout<<initialB<<endl;
	for(int i = 3; i<=amount; i++){
		next = initialA + initialB;
		cout<<next<<endl;
		initialA = initialB;
		initialB = next;
	} 
}

int main(){
	cout<<"�Cuantos numeros de la serie quieres ver?"<<endl;
	int amount;
	cin>>amount;
	cout<<endl;
	
	if(amount<=0)
	{
		cout<<"El numero no es valido"<<endl;
	}
	else if(amount == 1)
	{
		cout<<"0"<<endl;
	}	
	else if(amount == 2)
	{
		cout<<"0"<<endl<<"1";
	}
	else 
	{
		fibonacci(amount);
	}
}


