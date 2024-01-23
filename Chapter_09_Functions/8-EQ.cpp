#include"iostream"
using namespace std;
int EQ(int a, int b, int c, int d);
int main()
{
	int n1,n2,n3,n4;
	cout<<"Input number 1: ";
	cin>>n1;
	cout<<"Input number 2: ";
	cin>>n2;
	cout<<"Input number 3: ";
	cin>>n3;
	cout<<"Input number 4: ";
	cin>>n4;
	cout<<"Return value: "<<EQ(n1,n2,n3,n4);
	return 0;
}


int EQ(int a, int b, int c, int d)
{
	a=a*a*a;
	b=b*b*b;
	c=c*c*c;
	d=d*d*d;
	if(a+b+c==d)	
		return 0;
	else
		return -1;
}
