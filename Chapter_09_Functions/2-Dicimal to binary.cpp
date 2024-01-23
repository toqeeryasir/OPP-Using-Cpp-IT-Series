#include"iostream"
using namespace std;
int convert(int num);
int main()
{
	int e;
	cout<<"Input number: ";
	cin>>e;
	convert(e);
	return 0;
}


int convert(int num)
{
	int i=0;
	int arr[99];
	while(num>0)
	{
		arr[i]=num%2;
		num=num/2;
		i++;
	}
	
	cout<<"Binary of the given number is: ";
	while(i>=0)
	{
		cout<<arr[i]<<" ";
		i--;
	}
	return 0;
}
