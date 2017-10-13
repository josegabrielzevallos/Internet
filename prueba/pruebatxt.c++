#include <iostream>
#include <fstream>
using namespace std;

int main () {
	
	
	ofstream ficheroSalida;
	ficheroSalida.open ("ficheroTexto.txt");
	ficheroSalida << "Texto para el fichero";
	ficheroSalida.close();
	
	
	return 0;
}
