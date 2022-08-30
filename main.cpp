#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

int main() {
cout << endl;
double p;
float r;
int n;
int a;
int t;
  
float a11;
float a15;
float a110;
float a120;

float a51;
float a55;
float a510;
float a520;

float a71;
float a75;
float a710;
float a720;

float a101;
float a105;
float a1010;
float a1020; 

int interest;

interest = 0;
  
cout << "What is the Principal Amount? $" ;
cin >> p;
cout << endl;

cout << "What is the number of times the interest is compounded per year: " ;
cin >> n;
cout << endl;

a = p * pow((1 + (r/n)), (n * t));
interest = a - p;

// 1%
a11 = p * pow((1 + (.01/n)), (n * 1));
a15 = p * pow((1 + (.01/n)), (n * 5));
a110 = p * pow((1 + (.01/n)), (n * 10));
a120 = p * pow((1 + (.01/n)), (n * 20));

// 5%
a51 = p * pow((1 + (.05/n)), (n * 1));
a55 = p * pow((1 + (.05/n)), (n * 5));
a510 = p * pow((1 + (.05/n)), (n * 10));
a520 = p * pow((1 + (.05/n)), (n * 20));

// 7%
a71 = p * pow((1 + (.07/n)), (n * 1));
a75 = p * pow((1 + (.07/n)), (n * 5));
a710 = p * pow((1 + (.07/n)), (n * 10));
a720 = p * pow((1 + (.07/n)), (n * 20));

// 10%
a101 = p * pow((1 + (.10/n)), (n * 1));
a105 = p * pow((1 + (.10/n)), (n * 5));
a1010 = p * pow((1 + (.10/n)), (n * 10));
a1020 = p * pow((1 + (.10/n)), (n * 20));

 cout << "            1             5              10               20" << endl;
  cout << endl;
 
  cout << "1%   " << setw(10) << a11 << "      " << setw(10) << a15 << "      "<< setw(10) << a110 << setw(10) << "      " << a120 << endl;
  cout << endl;
 
  cout <<  "5%   " << setw(10) << a51 << "      " << setw(10) << a55 << "      "<< setw(10) << a510 << setw(10) << "      " << a520 << endl;
  cout << endl;
 
  cout << "7%   " << setw(10) << a71 << "      " << setw(10) << a75 << "      "<< setw(10) << a710 << setw(10) << "      " << a720 << endl;
  cout << endl;

  cout << "10%  " << setw(10) << a101 << "      " << setw(10) << a105 << "      "<< setw(10) << a1010 << setw(10) << "      " << a1020 << endl;
  cout << endl;
  
  
return 0;
}