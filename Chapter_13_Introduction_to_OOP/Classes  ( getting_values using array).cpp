#include"iostream"
using namespace std;
class Array{
	private:
		int array[5];
	public:
		void fill();
		void display();
		void max();
		void min();
};
void Array::fill()
{
	for(int i = 0; i<5; i++)
	{
		cout<<"Inpur values: ";
		cin>>array[i];
	}
}

void Array::display()
{
	for(int i = 0; i<5; i++)
	{
		cout<<"Inpur values: "<<array[i]<<"\n";
	}
}

void Array::max()
{
	int max = array[0];
	for(int i = 1; i<4; i++)
	{
		if(array[i] > max)
			max = array[i];
	}
	cout<<"Max no. is: "<<max<<"\n";
}

void Array::min()
{
	int min = array[0];
	for(int i = 1; i<4; i++)
	{
		if(array[i] < min)
			min = array[i];
	}
	cout<<"Min no. is: "<<min;
}
int main()
{
	Array obj;
	obj.fill();
	obj.display();
	obj.max();
	obj.min();
	return 0;
}
