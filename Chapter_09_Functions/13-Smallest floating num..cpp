#include"iostream"
using namespace std;
float smallest(float n1, float n2);
int main()
{
	float a,e;
	cout<<"Input 1st floating number: ";
	cin>>a;
	cout<<"Input 2nd floating number: ";
	cin>>e;
	cout<<"The Smallest floating number is: "<<smallest(a,e);
	return 0;
}

float smallest(float n1, float n2)
{
	float small;
	if(n1>n2)
		small=n2;
	else
		small=n1;
	return small;
}
