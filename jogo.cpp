#include<iostream>
#include<stdlib.h>
using namespace std;

int main(void){
	int n = 54;
	int t = 0;
	int tentativas = 0;
	int ponto;
	int vi = 100;
	int chances = 10;
	do{
		cout << "Numero de chances restantes: "<<chances<<"!"<<endl;
		cout << "Digite um numero entre 1 e 100\n"<<endl;
		cin >> t;
		if(t==n){
			system("cls");
			tentativas++;
			cout << "Acertou!!\nUsou apenas: "<<tentativas<<" tentativas!!\n"<<endl;
			ponto = vi/tentativas;
			cout << "Sua pontuacao foi de: "<<ponto<<"!!\n"<<endl;
		}else{
			system("cls");
			cout << "Errou!\n"<<endl;
			if(t<n){
				cout << "O numero e maior que o numero digitado!\n"<<endl;
			}else{
				cout << "O numero e menor que o numero digitado!\n"<<endl;
			}
		tentativas++;
		chances--;
		}
	}while((t!=n) && (tentativas<10));
	if(tentativas>=10){
		cout << "Game Over!\n"<<endl;
	}
	system("pause");
	return 0;
	
}
