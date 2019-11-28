#include<iostream>
#include<string>
using namespace std;

class Account{
	private:
		
		string user_name,user_pass;
		int crnt_bal,wdrw_bal;
	    
	    public:
	    Account(int a){
	    	cout<<"Enter your user name ";
	    	cin>>user_name;
	    	cout<<"Enter your password ";
	    	cin>>user_pass;
	    	crnt_bal=a;
		}
		
		get_bal(){
			cout<<"Your current balance is "<<crnt_bal<<endl;
		}
		withdraw(int a){
			if(a>crnt_bal){
				cout<<"Withdraw amount is greater then current balance"
				<<" Please try again ";
			}else{
				crnt_bal=crnt_bal-a;
				cout<<"You withdraw "<<a<<" amount from your account "<<endl;
			}
		}
		curr_bal(){
			cout<<"Now your current balance is "<<crnt_bal;
		}
};
