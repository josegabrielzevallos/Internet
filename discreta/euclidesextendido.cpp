#include <iostream>
using namespace std;
int inversa(int a, int b)
{
	int u, u1 = 0, u2 =1, v, v1 = 1, v2 = 0, q, r;
	if (b == 0)
	{
		return 1;
	}
	else
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
			cout<<"q= "<<q<<endl;
			cout<<"r= "<<r<<endl;
			cout<<"u= "<<u<<endl;
			cout<<"v= "<<v<<endl;
		}
		
		return u2,v2;
	}
}
int main() {
	inversa(141,96);
	
	return 0;
}

