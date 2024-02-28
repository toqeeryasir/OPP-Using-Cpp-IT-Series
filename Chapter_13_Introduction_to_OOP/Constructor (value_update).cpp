#include"iostream"
#include"string"
using namespace std;
class TV{
	private:
		int price;
		string brand_name, model;
	public:
		TV(){
			model = "44A06";
			price = 55000;
			brand_name = "Samsung";
		}
		void display();
		void change(string m, string b, int p);
		
};

void TV::display()
{
	cout<<"Model: "<<model<<"\n";
	cout<<"Price: "<<price<<"\n";
	cout<<"Brand_name: "<<brand_name<<"\n";
}

void TV::change(string m, string b, int p)
{
	model = m;
	brand_name = b;
	price = p;
}
int main()
{
	TV obj;
	obj.display();
	obj.change("244T206", "Toshiba", 244);
	obj.display();
	
	return 0;
}
