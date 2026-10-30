#include <iostream>
using namespace std;
//type convert basic to class type
class Time{
    int hours, minutes, seconds;
public:
    Time(int sec) {
        hours = sec / 3600;
        minutes = (sec % 3600) / 60;
        seconds = sec % 60;
    }
    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    int totalSeconds;
    cout << "Enter time in seconds: ";
    cin >> totalSeconds;

    Time t = totalSeconds; // Implicit conversion from int to Time
    t.display();

    return 0;
}