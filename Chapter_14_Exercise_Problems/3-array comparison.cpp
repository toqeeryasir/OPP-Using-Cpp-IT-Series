#include"iostream"
#include"string"
using namespace std;
class Array{
	private:
		int array[5];
	public:
		Array(){
			for (int e = 0; e<5; e++) {
            array[e] = -1;	
			}
		}
		void input(){
			for(int i = 0; i<5; i++){
				cout<<"Input value of element "<<i+1<<endl;
				cin>>array[i];
			}
		}
		void display(){
			for(int j = 0; j<5; j++){
				cout<<"Value of element "<<j+1<<": "<<array[j]<<endl;
			}
		}
		int operator==(Array Arr){
			for(int k = 0; k<5; k++){
			if(array[k] != Arr.array[k])
				return 0;
			else
				return 1;
			}
		}
};
int main()
{
	Array obj_1;
	obj_1.input();
	obj_1.display();
	Array obj_2;
	cout<<"Now Enter details for second object:\n";
	obj_2.input();
	obj_2.display();
	if((obj_1 == obj_2))
		cout<<"Objects are equal\n";
	else
		cout<<"Objects are not equal\n";
	return 0;
}