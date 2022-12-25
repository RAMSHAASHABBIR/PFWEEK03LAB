#include <iostream>
using namespace std;
main(){
string moviename;
float adultticketprice;
float childticketprice;
float adultticketsold;
float childticketsold;
float totalsold;
float perdonated;
cout << "Enter movie name:";
cin >> moviename;
cout << "Enter adult ticket price:";
cin >> adultticketprice;
cout << "Enter child ticket price:";
cin >> childticketprice;
cout << "Enter adult ticket sold:";
cin >> adultticketsold;
cout << "Enter child ticket sold:";
cin >> childticketsold;
totalsold = (adultticketprice*adultticketsold)+(childticketprice*childticketsold);
cout << "total amount collected:" << totalsold;
perdonated = (50.0/100.0)*totalsold;
cout << "total amount donated:" << perdonated;
}
