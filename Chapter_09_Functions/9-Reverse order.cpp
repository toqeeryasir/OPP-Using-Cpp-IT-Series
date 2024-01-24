#include"iostream"
#include"string"
using namespace std;
int Reverse(int num , int rev[]);
int main()
{
	int e,rev[999];
	cout<<"Inpun number: ";
	cin>>e;
	int j=Reverse(e,rev);
	cout<<"Number in reverse: ";
	for(int k=0;k<j;k++)
	{
		cout<<rev[k];
	}
	return 0;
}

int Reverse(int num,int rev[])
{
	int i=0;
	while(num!=0)
	{
	  	rev[i]=num%10;
		num=num/10;
		i++;
	}
	return i;
}
