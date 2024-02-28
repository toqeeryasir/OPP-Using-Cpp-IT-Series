#include"iostream"
using namespace std;
class marks{
	private:
		int a,b,c;
	public:
		void in()
		{
			cout<<"Enter numbers\n";
			cin>>a>>b>>c;
		}
		int sum()
		{
			return a+b+c;
		}
		float avg()
		{
			return (a+b+c)/3;
		}
};
int main()
{
	marks obj;
	obj.in();
	cout<<"Sum: "<<obj.sum()<<"\n";
	cout<<"Average: "<<obj.avg();
	return 0;
}
