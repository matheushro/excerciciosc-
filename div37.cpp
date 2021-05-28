#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n;
	cout << "Digite o numero\n";
	cin >> n;
	if((n%3==0) && (n%7==0)){
		cout<<"Numero: "<<n<<" divisivel por 3 e por 7\n";	
	}else{
		cout<<"Numero: "<<n<<" nao e divisivel por 3 ou 7\n";
	}
	system("pause");
	return 0;
	
}
