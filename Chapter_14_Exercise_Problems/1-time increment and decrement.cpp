#include"iostream"
#include"string"
using namespace std;
class Time{
	private:
		int hours, minutes, seconds;
	public:
		Time(){
			hours = 11;
			minutes = 43;
			seconds = 12;
		}
		void show(){
			cout<<"hh:mm:ss = "<<hours<<":"<<minutes<<":"<<seconds<<endl;
		}
		void operator++(){
			minutes++;
		}
		void operator--(){
			minutes--;
		}
		
};
int main()
{
	Time obj;
	obj.show();
	++obj;
	obj.show();
	--obj;
	obj.show();
	
	return 0;
}