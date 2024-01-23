#include"iostream"
#include"cmath"
using namespace std;
int decimal(int k , int arr[])
{
	int j=0;
	int i=k-1;
	int num=0;
	while(i>=0)
	{
		num+=arr[i] * pow(2 ,j);
		j++;
		i--;
		
	}
	cout<<"Decimal no is: "<<num;
	return 0;
}
int main()
{
	int e=0,i=1;
	int arr[99];
	cout<<"Input buinary and enter -1 at the end: ";
	while(true)
	{
		cout<<"Input digit no. "<<i<<": ";
		cin>>arr[e];
		if(arr[e]==-1)
		{
			break;
		}
		e++;
		i++;
	}
	decimal(e ,arr);
	return 0;
}


