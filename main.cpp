#include <iostream>
#include <cmath>
using namespace std;

int main(){

  cout << "Convert miles per hour to km per hour :" << endl;
  cout << "---------------------------------------------------" << endl;

  float kmPerH;
  float milePerH;

  cout << "Introduce miles: ";
  cin >> milePerH;

  kmPerH = milePerH * 1.609344;

  cout << milePerH << " mile/h sunt " << kmPerH << " km/h " << endl;

  return 0;
}
// cout << kmPerH << " km/h sunt " << milePerH << " mile/h " << endl;