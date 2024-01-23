#include"iostream"
using namespace std;
int fibonacci(int n1, int n2);
int main()
{
	int s,e;
	cout<<"Input starting number: ";
	cin>>s;
	cout<<"Input ending number: ";
	cin>>e;
	fibonacci(s,e);
	return 0;
}

int fibonacci(int n1 , int n2)
{
	cout<<"Fibonacci series: "<<n1<<", ";
	int pre=n1+1;
	cout<<pre<<", ";
	int next=0;
	for(int i=n1;next<n2;i++)
	{
		next=pre+n1;
		cout<<next<<", ";
		n1=pre;
		pre=next;
		
	}
	return 0;
}
