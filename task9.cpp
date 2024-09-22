#include <iostream>
using namespace std;
main(){
cout<<"Enter the four digit number: ";
int num_4;
cin>> num_4;

float dig4;
dig4 = num_4%10;

int num_3;
num_3 = num_4/10;


float dig3;
dig3 = num_3%10;

int num_2;
num_2 = num_3/10;


float dig2;
dig2 = num_2%10;

int num_1;
num_1 = num_2/10;


float dig1;
dig1 =num_1%10;

int sum;
sum = dig1 + dig2 + dig3 + dig4 ;

  

cout<<"Sum of individual digits: "<< sum ;
}