#include"iostream"
#include"string"
using namespace std;
class Bank_account{
	private:
		string depositor_name, accout_type;
		int account_number, account_balance, remaining_balance;
	public:
		Bank_account(){
			cout<<"Input name: \n";
			cin>>depositor_name;
			cout<<"Input account_type: \n";
			cin>>accout_type;
			account_balance = 500;
		}
		void deposit(int deposit){		
			account_balance+=deposit;
		}
		void withdraw(int withdraw_amount){
			if(account_balance > withdraw_amount)
				{
					int withdraw;
					remaining_balance = account_balance - withdraw_amount;
				}
			else
				cout<<"You can't withdraw_amount";
		} 
		
		void display(){
			
		cout<<"remaining_balance after withdraw: "<<remaining_balance<<"\n";
		
	}
};
int main()
{
	int deposit, withdraw;
	Bank_account person;
	cout<<"Input ammount to deposit: \n";
	cin>>deposit;
	person.deposit(deposit);
	cout<<"Input ammount to withdraw: \n";
	cin>>withdraw;
	person.withdraw(withdraw);
	person.display();
	return 0;
}
