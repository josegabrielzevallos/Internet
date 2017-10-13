#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int mod ( int a, int n)
{
	int q,r;
	q=a/n;
	r=a-(q*n);
	if (r<0)
		return n+r;
	return r;
}

string alfabeto="ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
string alfabeto2="EAOSRNIDLCTUMPBGYVQHFZÑXKW";
string incriptar(string texto,int k)
{
	int p,c;
	string resultado;
	for(int i=0;i<texto.size();i++)
	{
		p=alfabeto.find(texto[i]);
		c=mod((p+k),alfabeto.size());
		resultado = alfabeto[c];
		cout<< resultado;
		
	}
	return resultado;	
}
//void hakear(incriptar(string texto,int k),alfabeto2;)
//{

//}
int main() {
	//string frase;
	//ofstream texto;
	//texto.open("texto.txt");
	//getline(texto, frase);
	//texto.close();
	//string texto;
	string  texto ="ENUNRECONDITOBOSQUECIENTOSDEPAJARITOSDIFERENTESENTONABANCADADIASUSMASLINDASMELODIASLOSHABIADETODACLASEYCONDICIONALGUNOSPOREJEMPLOTENIANELTRINOGRAVEYELEGANTEMIENTRASQUEOTROSCA";
	incriptar(texto,3);
	
	return 0;
}

