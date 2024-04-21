#include"iostream"
#include"string"
using namespace std;
class DB;
class DM{
	private:
		int meters, cmeters;
	public:
		void get(){
			cout<<"Input meters: ";
			cin>>meters;
			cout<<"Input cmeters: ";
			cin>>cmeters;
		}
		friend void add(DM,DB);
};
class DB{
	private:
		int foots, inches;
	public:
		void get(){
			cout<<"Input foots: ";
			cin>>foots;
			cout<<"Input inches: ";
			cin>>inches;
		}
		friend void add(DM,DB);
};
void add(DM objDM, DB objDB){
		int total;
		total = (objDM.meters * 100) + (objDM.cmeters) + (objDB.foots * 30.48) + (objDB.inches * 2.54);
		cout<<"Total Centemeters: "<<total;
}
int main()
{
	DM obj1;
	DB obj2;
	obj1.get();
	obj2.get();
	add(obj1, obj2);
	return 0;
}