#include <iostream>
#include <iomanip>

using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    Time()
    {

    }



    Time(int h, int m, int s) : hour(h), minute(m), second(s) {}

    int getHour() const { return hour; }
    int getMinute() const { return minute; }
    int getSecond() const { return second; }

    void readFromConsole() 
    {
        cin >> hour >> minute >> second;
    }

    Time operator/(int divisor) const {
        int totalSeconds = hour * 3600 + minute * 60 + second;
        int resultSeconds = totalSeconds / divisor;
        int resultHours = resultSeconds / 3600;
        int resultMinutes = (resultSeconds % 3600) / 60;
        int resultSecondsRemainder = resultSeconds % 60;
        return Time(resultHours, resultMinutes, resultSecondsRemainder);
    }

    
};

ostream& operator<<(ostream& stream, const Time& t)
{
    stream << setfill('0') << setw(2) << t.getHour() << ":" << setw(2) << t.getMinute() << ":" << setw(2) << t.getSecond();
    return stream;
};

int main()
{
    int n;

    cin >> n;

    Time t;
    t.readFromConsole();

    for(auto i = 0; i < n; i++)
    {   
        
        Time rez = t / 3;

        cout << rez << endl;
        t = rez;
    }
}
