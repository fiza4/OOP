#include<iostream>

#include"prog3.10(sourcefile).cpp"

#include<string>

using namespace std;



int main(){

	invoice obj("1","5 Books    ",150,750);
    obj.get_item_no();
	obj.get_item_des();
    obj.get_item_quantity();
    obj.get_price_per_item();
    obj.getInvoiceAmount();

}
