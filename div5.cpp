#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n;
	cout << "Digite o numero\n";
	cin >> n;
	if(n%5==0){
		cout<<"Numero: "<<n<<" divisivel por 5\n";	
	}else{
		cout<<"Numero: "<<n<<" nao e divisivel por 5\n";
	}
	system("pause");
	return 0;
	
}
