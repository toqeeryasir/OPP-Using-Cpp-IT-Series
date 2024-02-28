#include"iostream"
#include"string"
using namespace std;
class Player{
	private:
		int average;
		string player_name, team_name;
	public:
		Player(){
			cout<<"<<Input all the values>>\n\n";
		}
		void input(){
			
			cout<<"Input player_name\n";
			cin>>player_name;
			cout<<"Input team_name\n";
			cin>>team_name;
			cout<<"Input average\n";
			cin>>average;
		}
		void change(){
			cout<<"Change player_name\n";
			cin>>player_name;
			cout<<"Change team_name\n";
			cin>>team_name;
			cout<<"Change average\n";
			cin>>average;
		}
		void display(){
			cout<<"Player_name= "<<player_name<<endl;
			cout<<"Team_name= "<<team_name<<endl;
			cout<<"Average= "<<average<<endl;
		}
};
int main()
{
	Player object_1;
	object_1.input();
	object_1.change();
	object_1.display();
	return 0;
}
