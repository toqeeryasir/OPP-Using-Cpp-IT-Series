#include<iostream>
#include<string>
using namespace std;
class Car{
	private:
		int car_position = 0;
		string car_name, car_direction;
	public:
		Car(){ 
			cout<<"Input car_name: \n";
			cin>>car_name;
			cout<<"Input car_direction (east, west north or south): \n";
			cin>>car_direction;
			cout<<"Input car_position (Meters): \n"; 
			cin>>car_position;	
		}
		void Turn(){
			string new_direction;
			cout<<"Input direction to turn (left or right): \n";
			cin>>new_direction;
			if(new_direction == "left" && car_direction == "east")
				cout<<"Turned direction is: 'South'\n";
			else if(new_direction == "left" && car_direction == "west")
				cout<<"Turned direction is: 'East'\n";
			else if(new_direction == "left" && car_direction == "north")
				cout<<"Turned direction is: 'West'\n";
			else if(new_direction == "left" && car_direction == "south")
				cout<<"Turned direction is: 'North'\n";
			else if(new_direction == "right" && car_direction == "east")
				cout<<"Turned direction is: 'West'\n";
			else if(new_direction == "right" && car_direction == "west")
				cout<<"Turned direction is: 'North'\n";
			else if(new_direction == "right" && car_direction == "north")
				cout<<"Turned direction is: 'South'\n";
			else 
				cout<<"Turned direction is: 'East'\n";
			}
		void Turn(string any_side){
			string side = any_side;
			cout<<"Turned direction is: "<<side;			
		}
		void Move(int move_position){
			
			cout<<"\nNew_position: "<<(car_position + move_position)<<endl;
		}
};
using namespace std;
int main()
{
	int dis;
	string direction;
	Car G_wagon;
	G_wagon.Turn();
	cout<<"\nInput distance to move the car (In Meters): \n";
	cin>>dis;
	cin.ignore();
	cout<<"\nInput Direction to move (east, west, north or south): \n";
	getline(cin, direction);
	cin.ignore();
	G_wagon.Turn(direction);
	G_wagon.Move(dis);
	return 0;
}
