#include <iostream>
using namespace std;
main(){
cout<<"Enter the movies name: ";
string name;
cin>> name;

cout<<"Enter the adult ticket price: $";
float price_a;
cin>> price_a;

cout<<"Enter the child ticket price: $";
float price_c;
cin>> price_c;

cout<<"Enter the number of adult tickets sold: ";
float sold_a;
cin>> sold_a;

cout<<"Enter the number of child tickets sold: ";
float sold_c;
cin>> sold_c;

cout<<"Enter the percentage of amount to be donated at charity: ";
float charity;
cin>> charity;

float total_amount;
total_amount = price_a*sold_a + price_c*sold_c ;

float donation_amount;
donation_amount= (charity/100) *total_amount;

float balance;
balance= total_amount - donation_amount;

cout<<"Total amount generated from ticket sales: $"<<total_amount << endl;
cout<<"Donation to charity ("<<charity<<"%): "<<donation_amount <<endl;
cout<<"Remaining amount after donation: $" << balance;

}




