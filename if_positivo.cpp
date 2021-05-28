#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n;

	cout << "Digite o numero\n";
	cin >> n;
	if(n>0){
		cout<<"Numero: "<<n<<" positivo\n";	
	}else if(n==0){
		cout<<"Numero: "<<n<<" nulo\n";
	}else{
		cout<<"Numero: "<<n<<" negativo\n";
	}
	system("pause");
	return 0;
	
}
