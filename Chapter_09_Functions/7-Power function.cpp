#include"iostream"
#include"cmath"
using namespace std;
int result(int n1, int n2);
int main()
{
	int a,e;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>e;
	result(a,e);
	return 0;
}

inline int result(int n1, int n2)
{
	int ans=pow(n1 , n2);
	cout<<"Answer: "<<ans;
	return 0;
}
