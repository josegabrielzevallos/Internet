#include <iostream>
using namespace std;
int mcd(int a, int b)
{
	int r;
	while(b != 0)
	{
		r = a%b;
		a = b;
		b = r;
	}
	return a;
}
void multimod(int a,int b,int c)
{
	int q;
	q=a%c + b%c;
	q=q%c;	
	cout<<a<<"%"<<c<<"*"<<b<<"%"<<c<<"="<<q-1;
}
void invermod(int a, int c)
{
	if (mcd(a,c)!=1)
	{
		cout<<"no tiene inversa";
	}
	else
		{
	int b =0;
	int d=0;
	while(d!=1)
	{
		
		d=a*b;
		d=d%c;
		b++;
		cout<<a<<"*"<<b<<"mod"<<c<<endl;
	}
	cout<<"La inversa es ="<<b-1;
	}
}
int exponenciacion(int a, int b, int n)
{
	int r = 1;
	while(b > 0)
	{
		if( b%2 == 1)
		{
			r = r*a%n;
		}
		a = a*a%n;
		b = b / 2;
		
		cout<<a<<"^"<<
	}
	
	return r;
}
int main() {
	cout<<exponenciacion(5,117,19);
	
	return 0;
}

