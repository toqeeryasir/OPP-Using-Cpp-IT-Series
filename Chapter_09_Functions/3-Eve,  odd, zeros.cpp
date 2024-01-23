#include"iostream"
using namespace std;
int type(int num);
int main()
{
	int e;
	cout<<"Input number: ";
	cin>>e;
	type(e);
	return 0;
}

int type(int num)
{
	int dig,zero=0,eve=0,odd=0;
	while(num>0)
	{
		dig=num%10;
		num=num/10;
		if(dig==0)
			zero++;
		else if (dig%2==0)
			eve++;
		else
			odd++;
	}
	cout<<"Number of even digits: "<<eve<<"\nNumber of odd digits: "<<odd<<"\nNumber of zeros: "<<zero;
	return 0;
}
