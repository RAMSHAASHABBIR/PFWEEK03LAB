#include <iostream>
using namespace std;
main(){
int mb;
int kb;
int bytes;
int input;
int total;
mb = 1024;
kb = 1024;
bytes = 8;
cout << "Enter MB:";
cin >> input;
total = input*1024*1024*8;
cout << "In bits:" << total;
}