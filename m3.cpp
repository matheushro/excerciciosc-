#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n;

	cout << "Digite o numero\n";
	cin >> n;
	if(n%3==0){
		cout<<"Numero: "<<n<<" multipo de 3\n";	
	}else{
		cout<<"Numero: "<<n<<" nao e multiplo de 3\n";
	}
	system("pause");
	return 0;
	
}
