#include"iostream"
using namespace std;
class Test{
	
	private:
		int marks;
		char grade;
	public:
		Test(int m, char g)
		{
			marks = m;
			grade = g;
		}
		void show()
		{
			cout<<"Marks: "<<marks<<"\n"<<"Grade: "<<grade;
		}
};
int main()
{
	Test obj(25, 'A');
	obj.show();
	return 0;
}
