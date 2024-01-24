#include"iostream"
using namespace std;
float Multiplication(float n1,int n2);
int main()
{
	float a;
	int e;
	cout<<"Input floating point number: ";
	cin>>a;
	cout<<"Input integer number: ";
	cin>>e;
	float result=Multiplication(a,e);
	cout<<"Result: "<<result;
	return 0;
}

float Multiplication(float n1,int n2)
{
	float multi=n1*n2;
	return multi;
}
