#include <iostream>
using namespace std;
main(){
cout<<"Enter Initial Velocity (m/s): ";
float vi;
cin>> vi;

cout<<"Enter Acceleration (m/s^2): ";
float a;
cin>> a;

cout<<"Enter Time(s): ";
float t ;
cin>> t;

float vf;
vf = vi +a*t;

cout<<"Final velocity(m/s): " << vf;


}