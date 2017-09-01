#include <iostream>
using namespace std;
#include <iostream>
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


int euclides (int a, int b)
{
	
	int r=mod(a,b);
	while (r!=0)
	{
		a=b;
		b=r;
		r=mod(a,b);
	}
	return b;
}


int euclidesextendido(int a, int b,int c)
{
	int x,y,z;
	int u, u1 = 0, u2 =1, v, v1 = 1, v2 = 0, q, r;
	int d=euclides(a,b);
	//cout<<d;
	if (c%d==0)
	{
		
		while(b > 0)
		{ 
			q = a / b;
			r = a%b;
			u = u2 - (u1 * q);
			v = v2 - (v1 * q);
			a = b;
			b = r;
			u2 = u1;
			u1 = u;
			v2 = v1;
			v1 = v;
			//cout<<"q= "<<q<<endl;
			//cout<<"r= "<<r<<endl;
			//cout<<"u= "<<u<<endl;
			//cout<<"v= "<<v<<endl;
			
		}
		z=c/d;
		x=z*v2;
		y=z*u2;
		cout<<d<<"="<<a<<"-"<<r;
		//cout<<u2<<endl;
		//cout<<v2<<endl;
		//cout<<z<<endl;
		//cout<<"x="<<x<<endl;
		//cout<<"y="<<y<<endl;
		//return u2, v2;}
		//return x,y;
	}
	else
	{
		cout<<"no tiene solucion";
		}
		
		
		
}

/*int diofanticas(){
	int d, b, c;
	c=14;
	d=euclides(34,26);
	cout<<euclidesextendido(34,26);
	
}*/

int main() {
euclidesextendido(525,100,50);
	return 0;
}

