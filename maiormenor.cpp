#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n1;
	int n2;
	int n3;
	int n4;
	cout << "Digite o numero\n";
	cin >> n1;
	cout << "Digite o segundo numero\n";
	cin >> n2;
	cout << "Digite o terceiro numero\n";
	cin >> n3;
	cout << "Digite o quarto numero\n";
	cin >> n4;
	if(n1>n2&&n1>n3&&n1>n4){
		cout<<"Numero maior: "<<n1<<"\n";	
	}else if(n2>n1&&n2>n3&&n2>n4){
		cout<<"Numero maior: "<<n2<<"\n";	
	}else if(n3>n2&&n3>n1&&n3>n4){
		cout<<"Numero maior: "<<n3<<"\n";	
	}else if(n4>n2&&n4>n3&&n4>n1){
		cout<<"Numero maior: "<<n4<<"\n";	
	}
	if(n1<n2&&n1<n3&&n1<n4){
		cout<<"Numero menor: "<<n1<<"\n";	
	}else if(n2<n1&&n2<n3&&n2<n4){
		cout<<"Numero menor: "<<n2<<"\n";	
	}else if(n3<n2&&n3<n1&&n3<n4){
		cout<<"Numero menor: "<<n3<<"\n";	
	}else if(n4<n2&&n4<n3&&n4<n1){
		cout<<"Numero menor: "<<n4<<"\n";	
	}
	system("pause");
	return 0;
	
}
