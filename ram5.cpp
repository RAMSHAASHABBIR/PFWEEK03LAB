#include <iostream>
using namespace std;
main(){
float charge;
int time;
float total;
cout << "Enter charge:";
cin >> charge;
cout << "Enter time:";
cin >> time;
total = charge/time;
cout << "Current is:" << total;
}