#include"iostream"
using namespace std;
int tax(long salary);
int main()
{
	long sal;
	cout<<"Input salary in exact thousands: ";
	cin>>sal;
	cout<<"Amout of tax to be paid: "<<tax(sal);
	return 0;
}

int tax(long salary)
{
	int tx;
	if(salary==1000)
		tx=0;
	else if(salary==2000)
		tx=1000*(5.0/100);
	else if(salary==3000)
		tx=(1000*(5.0/100)) + (1000*(4.0/100));
	else
		tx=(1000*(5.0/100)) + (1000*(4.0/100))+((salary-3000)*(3.0/100)) ;
	return tx;
}
