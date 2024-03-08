#include"iostream"
#include"string"
using namespace std;
class B;
class A{
	private:
		int num1;
	public:
		A(){
			num1 = 10;
		}
	friend void show(A, B);
};

class B{
	private:
		int num2;
	public:
		B(){
			num2 = 30;
		}
	friend void show(A, B);
};

void show(A obj_a, B obj_b){
	int sum = obj_a.num1 + obj_b.num2;
	cout<<"Value of num1 = "<<obj_a.num1<<endl;
	cout<<"Value of num2 = "<<obj_b.num2<<endl;
	cout<<"Sum of num1 && num2 = "<<sum<<endl;
}

int main()
{
	A obj1;
	B obj2;
	show(obj1, obj2);	
	return 0;
}
