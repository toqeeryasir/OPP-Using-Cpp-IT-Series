#include"iostream"
#include"string"
using namespace std;
class Bank_Account{
	private:
		string depositor_name, accout_type;
		int account_number, account_balance;
	public:
		Bank_Account(){
			cout<<"Input name: \n";
			cin>>depositor_name;
			cout<<"Input account_type: \n";
			cin>>accout_type;
			account_balance = 5000;
		}
		void deposit(int deposit){		
			account_balance+=deposit;
		}
		void withdraw(int withdraw_amount){
			if(account_balance > withdraw_amount)
				{
					cout<<"Balance after withdraw: "<<(account_balance -= withdraw_amount)<<endl;
				}
			else
				cout<<"You can't withdraw_amount";
		} 
		int operator+(Bank_Account account_1){
			return (account_balance = account_1.account_balance + account_balance);
		}
};
int main()
{
	int deposit, withdraw;
	Bank_Account person_1;
	cout<<"Input ammount to deposit: \n";
	cin>>deposit;
	person_1.deposit(deposit);
	cout<<"Input ammount to withdraw: \n";
	cin>>withdraw;
	person_1.withdraw(withdraw);
	cout<<"Input details for second account to merge with first account:\n";
	Bank_Account person_2;
	cout<<"Account balance after merging both accounts: \n";
	cout<<"Account_balance: "<<(person_2 + person_1)<<endl;
	return 0;
}
