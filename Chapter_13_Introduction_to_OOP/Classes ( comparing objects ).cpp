#include"iostream"
using namespace std;
class Test{
	private:
		int Book_ID, Pages, Price;
	public:
		void get()
		{
			cout<<"Enter ID\n";
			cin>>Book_ID;
			cout<<"Enter Pages\n";
			cin>>Pages;
			cout<<"Enter Price\n";
			cin>>Price;
		}
		void show()
		{
			cout<<"ID: "<<Book_ID<<"\n";
			cout<<"Pages "<<Pages<<"\n";
			cout<<"Price "<<Price<<"\n";
		}
		void set(int a, int b, int c)
		{
			Book_ID = a;
			Pages = b;
			Price = c;
		}
		int return_price()
		{	
			return Price;
		}
		
};
int main()
{	
	Test obj_1,obj_2;
	obj_1.get();
	obj_2.set(22, 888, 566);
	if (obj_1.return_price() > obj_2.return_price())
		obj_1.show();
	else
		obj_2.show();
	
	return 0;
}
