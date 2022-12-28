#include <iostream>
#include <fstream>
using namespace std;


int main(){
ofstream MyFile("currencyFlipper.txt");

float bgn ;
float bp = ( 1 / 0.45 ) ;
float euro = ( 1 / 0.51 ) ;
float dollar = ( 1 / 0.53 ) ;
float yen = ( 1 * 73.57 ) ;
cout << " enter the levas for Conversion " << endl ;
cin >> bgn ;


MyFile << " British Pounds : " << bp * bgn << endl ;
MyFile << " Euro : " << euro * bgn << endl ;
MyFile << " American dollar : " << dollar * bgn << endl ;
MyFile << " Japanese Yen : " << yen * bgn << endl ;


MyFile.close();
return 0;
}
