#include"iostream"
using namespace std;
class Test{
	private:
		int radius;
	public:
		void get_radius(int rad)
		{
			radius = rad;
		}
		int area()
		{
			return radius*radius;
		}
		float circum()
		{
			return ((2 * 3.14) * radius);
		}
};
int main()
{	int rad;
	cout<<"Enter Radius\n";
	cin>>rad;
	Test obj;
	obj.get_radius(rad);
	cout<<"Area: "<<obj.area()<<"\n";
	cout<<"Circumference: "<<obj.circum();
	return 0;
}
