#include"iostream"
using namespace std;
class Test{
	private:
		int num;
		char ch;
	public:
		Test()
		{
			num = 0;
			ch = 'X';
		}
		Test(int n, char c)
		{
			num = n;
			ch = c;
		}
		void show();
};
void Test::show()
{
	cout<<"Num: "<<num<<"\n";
	cout<<"Char: "<<ch<<"\n";
}
int main()
{
	Test obj;
	obj.show();
	Test obj_2(44, 'E');
	obj_2.show();
	return 0;
}
