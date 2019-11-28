#include<iostream>

#include<string>

using namespace std;



class invoice{

	private:

		string item_no,item_des;

		int item_quan,price_per_item,total_amount;

		double vat,discount_rate;

	

	public:

	invoice(string a,string b,int c,int d){

		item_no=a;

		item_des=b;

		item_quan=c;

		price_per_item=d;

		vat=0.20;

		discount_rate=0;

		cout<<"Item  number \t"<<"Description \t"<<"Quantity \t"<<"Price per item \t"<<endl;

	}

	get_item_no(){

		cout<<item_no<<"\t\t";

	}

	get_item_des(){

		cout<<item_des<<"\t";

	}

	get_item_quantity(){

		cout<<item_quan<<"\t\t";

	}

	get_price_per_item(){

		cout<<price_per_item<<"\t \n\n";

	}

	getInvoiceAmount(){

		total_amount=(item_quan*price_per_item)+(vat*(item_quan*price_per_item))+discount_rate;

		cout<<"Total amount is "<<total_amount;

	}



};
