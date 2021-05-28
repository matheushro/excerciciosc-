#include<iostream>
#include<stdlib.h>
#include <math.h>
using namespace std;

int main(){
	int n;
	int raiz;
	int quadrado;
	cout << "Digite o primeiro numero\n";
	cin >> n;
	if(n>=0){
		raiz=sqrt(n);
		cout<<"Raiz: "<<raiz<<"\n";	
	}else{
		quadrado=n*n;
		cout<<"Numero: "<<quadrado<<"\n";
	}
	system("pause");
	return 0;
	
}
