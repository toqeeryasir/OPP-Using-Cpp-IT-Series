#include"iostream"
#include"string"
using namespace std;
class A{
	private:
		int num1;
	public:
		A(){
			num1 = 10;
		}
	friend class C;
};

class B{
	private:
		int num3;
		int num4;
	public:
		B(){
			num3 = 30;
			num4 = 40;
		}
	friend class C;
};

class C{
	public:
		void show(A obj_a, B obj_b){
			cout<<obj_a.num1+obj_a.num2<<endl;
			cout<<obj_b.num3+obj_b.num4<<endl;
		}
};

int main()
{
	A obj1;
	B obj2;
	C obj3;
	obj3.show(obj1, obj2);	
	return 0;
}
