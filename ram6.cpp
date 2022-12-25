#include <iostream>
using namespace std;
main(){
float matricobtain;
float interobtain;
float ecatobtain;
float matrictotal;
float intertotal;
float ecattotal;
float matricper;
float interper;
float ecatper;
matrictotal = 1100.0;
intertotal = 550.0;
ecattotal = 400.0;
cout << "Enter matric marks:";
cin >> matricobtain;
cout << "Enter inter marks:";
cin >> interobtain;
cout << "Enter ecat marks:";
cin >> ecatobtain;
matricper = (matricobtain/matrictotal)*100;
interper = (interobtain/intertotal)*100;
ecatper = (ecatobtain/ecattotal)*100;
cout << "Matric percentage is:" << matricper;
cout << "Inter percentage is:" << interper;
cout << "Ecat percentage is:" << ecatper;
float matricweightage;
float interweightage;
float ecatweightage;
matricweightage = matricper*(10.0/100.0);
interweightage = interper*(40.0/100.0);
ecatweightage = ecatper*(50.0/100.0);
cout << "matric weightage is:" << matricweightage;
cout << "inter weightage is:" << interweightage;
cout << "ecat weightage is:" << ecatweightage;
float aggregate;
aggregate = matricweightage+interweightage+ecatweightage;
cout << "My aggregate is:" << aggregate;
}

