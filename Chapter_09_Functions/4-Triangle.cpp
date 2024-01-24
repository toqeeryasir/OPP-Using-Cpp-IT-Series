#include"iostream"
using namespace std;
int triangle();
int main()
{
	triangle();
	return 0;
}

int triangle()
{
		cout<<"      *"<<endl;
	for(int i=5;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
		
		cout<<"* ";
		
		for(int k=5;k>i;k--)
		{
			cout<<"  ";
		}
		
		cout<<"*"<<endl;
		
	}
	cout<<"*  *  *  *  *";

	return 0;
}
