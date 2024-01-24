#include"iostream"
using namespace std;
int prime(int num);
int main()
{
	int e;
	cout<<"Input number: ";
	cin>>e;
	prime(e);
	return 0;
}

int prime(int num)
{
	int i;
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
			break;
	}
	if(i==num)
		cout<<"Input number is a prime number";
	else
		cout<<"Input number is not a prime number";
	return 0;
}
