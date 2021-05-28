#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n;
	int n2;
	int n3 = 20;
	int n4;
	int soma;
	cout << "Digite o primeiro numero\n";
	cin >> n;
	cout << "Digite o segundo numero\n";
	cin >> n2;
	soma = n+n2;
	if(soma>n3){
		n4 = soma+8;
		cout<<"Numero: "<<n4<<"\n";	
	}else{
		n4 = soma-5;
		cout<<"Numero: "<<n4<<"\n";
	}
	system("pause");
	return 0;
	
}
