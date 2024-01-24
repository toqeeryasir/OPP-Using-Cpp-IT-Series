#include"iostream"
#include"cmath"
using namespace std;
int distance(int x1,int x2,int y1,int y2);
int main()
{
	int x1,x2,y1,y2;
	cout<<"Input value of x1: ";
	cin>>x1;
	cout<<"Input value of x2: ";
	cin>>x2;
	cout<<"Input value of y1: ";
	cin>>y1;
	cout<<"Input value of y2: ";
	cin>>y2;
	int dist=distance(x1,x2,y1,y2);
	cout<<"Distance between points is: "<<dist;
	return 0;
}

int distance(int x1,int x2,int y1,int y2)
{
	int dist;
	dist=sqrt((pow((x2-x1) , 2) + pow((y2-y1) , 2)));
	return dist;
}
