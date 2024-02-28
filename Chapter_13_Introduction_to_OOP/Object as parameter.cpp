#include"iostream"
using namespace std;
class Travel{
	private:
		int km, hou;
	public:
		Travel(){
			km = 0;
			hou = 0;
		}
		void get(){
			cout<<"input values: ";
			cin>>km>>hou;
		}
		void show(){
			cout<<"Killlo_meter: "<<km<<"\n"<<"Hours: "<<hou<<"\n";
		}
		Travel add(Travel obj){
			Travel obj_2;
			obj_2.km = obj.km + km;
			obj_2.hou = obj.hou + hou;
			return obj_2;
		}
};
int main()
{
	Travel obj_1, obj_2, obj_return;
	obj_1.get();
	obj_1.show();
	obj_2.get();
	obj_2.show();
	obj_return = obj_1.add(obj_2);
	obj_return.show();
	
	return 0;
}
