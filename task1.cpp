#include <iostream>
using namespace std;
main(){
cout<<"enter the number of sides of polygon:";
int n ;
cin>> n;

int sum;
sum = (n-2)*180;

cout<<"The sum of internal angles of a "<< n << "-sided polygon is: "<< sum <<" degrees";

}