#include <iostream>

using namespace std;



int main() {
	// TIPO
	// TIPO NOME = VALOR;
	
	int vidas = 0;
	char letra = 'B'; //caracteres/letra/ 'B'
	double decimal = 5.2; //2.5
	float decimal2; // tem precisão maior de pontuação que o double 
	bool vivo = true; // true(1) ou falso(0)
	string nome = "Bruno"; //"Nicoals"
	 
	 cout << vidas << "\n";
	 cout << letra << "\n";
	 cout << decimal << "\n";
	 cout << vivo << "\n";
	 cout << nome << "\n";
	 
	 cout << "Digite o número de vidas:";
	 cin >> vidas;
	 cout << "Digite uma letra";
	 cin >> letra;
	 cout << "Dinheiro:";
	 cin >> decimal;
	 cout << "Digite seu nome:";
	 cin >> nome;
	 
	 
	 cout << "\n" << vidas << "\n" << letra << "\n" << vivo << "\n" << nome << "\n";
	 
	 
	 
	 
	return 0;
}


