#include"iostream"
#include"string"
using namespace std;
class Result{
	private:
		int roll;
		int tot=0;
		int marks[3];
		string name;
	public:
		void input()
		{
			cout<<"Input roll: ";
			cin>>roll;
			cout<<"Input name: ";
			cin>>name;
			for(int i= 0; i<3; i++)
			{
				cout<<"Input marks: ";
				cin>>marks[i];
			}		
		}
		void show()
		{
			cout<<"roll no.: "<<roll<<"\n";
			cout<<"Input name: "<<name<<"\n";
			for(int i= 0; i<3; i++)
			{
				cout<<"marks: "<<marks[i]<<"\n";
			}		
		}
		int total()
		{
		
			for(int i= 0; i<3; i++)
			{
				tot+= marks[i];
			}	
			return tot;
		} 
		float avg()
		{
//			int tot=0;
//			for(int i= 0; i<3; i++)
//			{
//				tot+= marks[i];
//			}	
			return (tot/3);
		} 
};
int main()
{
	Result obj;
	obj.input();
	obj.show();
	cout<<"Total: "<<obj.total()<<"\n";
	cout<<"Avg: "<<obj.avg();
	return 0;
}
