#include <iostream>
using namespace std;
main(){
cout<<"enter imposter count: ";
float i ;
cin>> i;

cout<<"Enter player count: ";
float p;
cin>> p;

float a;
a= 100*(i/p);

cout<<"Chance of being imposter: "<< a <<"%";


}