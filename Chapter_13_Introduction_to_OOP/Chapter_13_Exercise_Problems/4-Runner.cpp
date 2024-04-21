#include<iostream>
#include<string>
using namespace std;
class Runner{
	private:
		static string Longest_Runner_Name;
		static int Longest_distance_covered;
		string name;
		int distance;
	public:
		void get(){
			cout<<"Input name: ";
			getline(cin, name);
			cout<<"Input distance covered: ";
			cin>>distance;
			cin.ignore();
		}
		static void longest(Runner E, Runner T){
			if(E.distance > T.distance)
			{
				Longest_distance_covered = E.distance;
				Longest_Runner_Name = E.name;
			}
			else
			{
				Longest_distance_covered = T.distance;
				Longest_Runner_Name = T.name;
			}
		}
		static void show(){
			
				cout<<"Name: "<<Longest_Runner_Name<<endl;
				cout<<"Distance: "<<Longest_distance_covered<<endl;
		}
};

string Runner::Longest_Runner_Name = "";
int Runner::Longest_distance_covered = 0;

int main()
{
	Runner p1,p2;
	p1.get();
	p2.get();
	Runner::longest(p1, p2);
	Runner::show();
	return 0;
}