#include"iostream"
using namespace std;
int LCM(int n1,int n2);
int main()
{
	int a,e;
	cout<<"Input 1st number: "<<endl;
	cin>>a;
	cout<<"Input 2nd number: "<<endl;
	cin>>e;
	cout<<"LCM of the input numbers is: "<<LCM(a,e);
	return 0;
}

int LCM(int n1,int n2)
{
	int s1=1;
	while(n1!=1 || n2!=1)
	{
		for(int i=2;i<=99;i++)
		{
			if(n1%i==0 && n2%i==0)
			{
				s1*=i;
				n1=n1/i;
				n2=n2/i;
			}
			else if(n1%i==0)
			{
				s1*=i;
				n1=n1/i;
			}
			else if(n2%i==0)
			{
				s1*=i;
				n2=n2/i;
			}
		
		
		}
	}

	return s1;
}
