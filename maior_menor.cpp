#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n;
	int n2;
	cout << "Digite o numero\n";
	cin >> n;
	cout << "Digite o segundo numero\n";
	cin >> n2;
	if(n>n2){
		cout<<"Numero maior: "<<n<<" \nNumero menor: "<<n2<<"\n";	
	}else{
		cout<<"Numero maior: "<<n2<<" \nNumero menor: "<<n<<"\n";	
	}
	system("pause");
	return 0;
	
}
