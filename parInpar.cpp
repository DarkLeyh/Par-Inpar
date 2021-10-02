#include<iostream>
using namespace std;
int main(){
	int numero;
	
	cout<<"digite un numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"el numero es 0";
	}
	else if(numero%2==0){
		cout<<"El numero es par";
	}
	else{
		cout<<"El numero es inpar";
	}
  
	return 0;
}
