#include <iostream>
#include <string> 

using namespace std;


int main() {

  string month, day, year;
  int firsthour, firstmin, sechour, secmin;


  while (cin >> month && cin >> day && cin >> year){

    int THPD = 0;
    int TMPD = 0;

    cin >> firsthour;
    cin.ignore();
    cin >> firstmin;

    cin >> sechour;
    cin.ignore();
    cin >> secmin;

    THPD = sechour - firsthour; 
    TMPD = secmin - firstmin;

    cout << month << " " << day << " " << year << " ";

    if(TMPD < 0){
      TMPD += 60;
      THPD --;
    }

    cout << THPD << " hours " << TMPD << " Minutes " << endl;
  }

  
}