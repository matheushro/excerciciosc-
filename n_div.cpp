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
	if(n%n2==0){
		cout<<"Numero: "<<n<<" divisivel por "<<n2<<"\n";	
	}else{
		cout<<"Numero: "<<n<<" nao e divisivel por "<<n2<<"\n";
	}
	system("pause");
	return 0;
	
}
