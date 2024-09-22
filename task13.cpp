#include <iostream>
using namespace std;
main(){
cout<<"Enter the five integers without spacing: ";
int number;
cin>> number;

int sum;
sum = number%10 + (number/10)%10 + (number/100)%10 + (number/1000)%10 + (number/10000)%10;

cout<<"The sum is: "<<sum;

}