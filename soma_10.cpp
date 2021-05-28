#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n;
	int n2 = 20;
	int n3 = 10;
	int soma;
	cout << "Digite o primeiro numero\n";
	cin >> n;
	cout << "Digite o segundo numero\n";
	cin >> n2;
	soma = n+n2;
	if(soma>n3){
		cout<<"Numero: "<<soma<<" maior que 10\n";	
	}else{
		cout<<"Numero: "<<soma<<" menor que 10\n";
	}
	system("pause");
	return 0;
	
}
