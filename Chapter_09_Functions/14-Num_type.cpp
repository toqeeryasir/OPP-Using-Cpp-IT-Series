#include"iostream"
using namespace std;
int num_type(int num);
int main()
{
	int e;
	for(int i=1;i<=5;i++)
	{
		cout<<"Input number: ";
		cin>>e;
		num_type(e);
	}
	return 0;
}

int num_type(int num)
{
	if(num%2==0)
		cout<<"true\n";
	else
		cout<<"fals\n";
	return 0;
}
