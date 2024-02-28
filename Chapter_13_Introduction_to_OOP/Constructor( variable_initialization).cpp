#include"iostream"
using namespace std;
class Test{
	private:
		int a,b;
	public:
		Test()
		{
			a = 100;
			b = 100;
		}
		void avg()
		{
			cout<<"Average: "<<(a+b)/2;
		}
};
int main()
{
	Test obj;
	obj.avg();
	return 0;
}
