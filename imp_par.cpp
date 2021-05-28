#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n;

	cout << "Digite o numero\n";
	cin >> n;
	if(n%2==0){
		cout<<"Numero: "<<n<<" par\n";	
	}else{
		cout<<"Numero: "<<n<<" impar\n";
	}
	system("pause");
	return 0;
	
}
