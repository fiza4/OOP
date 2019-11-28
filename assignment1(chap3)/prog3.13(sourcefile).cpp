#include<iostream>

#include<string>

using namespace std;



class List{

	private:

		unsigned int acc_no;

		string f_n,s_n;

		double balance;

	public:

		List(unsigned int a, string b, string c,double e){

			acc_no=a;

			f_n=b;

			s_n=c;

			balance=e;

		}

		new_member(){

			cout<<"Account Number: "<<acc_no;
            cout<<"\nFirst Name "<<f_n;
            cout<<"\nSecond name "<<s_n;
            cout<<"\nBalance "<<balance;
		}

};
