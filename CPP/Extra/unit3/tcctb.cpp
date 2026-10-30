#include <iostream>
using namespace std;
//type convert class to basic type
class Time{
    int hours, minutes, seconds;
public:
    Time(int houts, int minutes, int seconds) : hours(hours), minutes(minutes), seconds(seconds) {}
     
    operator int() {
        return hours * 3600 + minutes * 60 + seconds;
    }

};

int main() {
    int h,m,s;
    cout << "Enter hours, minutes and seconds: ";
    cin >>h>> m >> s;

    Time t(h, m, s); 
    int seconds = t; // Implicit conversion from Time to int
    cout << "Total seconds: " << seconds << endl;


    return 0;
}