#include <iostream>
using namespace std;
main(){
cout<<"Enter the size of fertilizer bag in pounds: ";
int size;
cin>> size;

cout<<"Enter the cost of the bag: $";
int cost;
cin>> cost;

cout<<"Enter the area in square feet that can be covered by the bag: ";
int area;
cin>> area;

int cost1;
cost1 = cost/size;

int cost2;
cost2 = cost/area;
cout<<"Cost of fertilizer per pound: $"<< cost1 <<endl;
cout<<"Cost of fertilizing per square foot: $"<< cost2;

}