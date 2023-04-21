#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const int cseconds_in_day = 86400;
const int cseconds_in_hour = 3600;
const int cseconds_in_minute = 60;
const int cseconds = 1;

class Time {
private:
    int hour = 0;
    int minute = 0;
    int second = 0;
    int totalSeconds = 0;

public:
    Time() {
        
    }

    Time(int h, int m, int s) : hour(h), minute(m), second(s), totalSeconds((h * 60 + m) * 60 + s) {}

    int getHour() const { return hour; }
    int getMinute() const { return minute; }
    int getSecond() const { return second; }

    static Time readFromConsole() {
        int hour, minute, second;
        cin >> hour >> minute >> second;
        return Time(hour, minute, second);        
    }

    Time operator-(const Time& n)  {
        int resultSeconds = totalSeconds - n.totalSeconds;
        
        if(resultSeconds < 0)
        {
            resultSeconds =+ totalSeconds + (cseconds_in_day - n.totalSeconds);
        }

        int hours = (resultSeconds % cseconds_in_day) / cseconds_in_hour;
        int minutes = ((resultSeconds % cseconds_in_day) % cseconds_in_hour) / cseconds_in_minute;
        int seconds = (((resultSeconds % cseconds_in_day) % cseconds_in_hour) % cseconds_in_minute) / cseconds;

        return Time(hours, minutes, seconds);
    }

    bool operator>(const Time& n) const {
        return totalSeconds > n.totalSeconds;
    }

    bool operator<(const Time& n) const {
        return totalSeconds < n.totalSeconds;
    }

    bool operator!=(const Time& n) const {
        return totalSeconds != n.totalSeconds;
    }

    int getTotalSeconds() const {
        return totalSeconds;
    }
    
};

ostream& operator<<(ostream& stream, const Time& t)
{
    stream << setfill('0') << setw(2) << t.getHour() << ":" << setw(2) << t.getMinute() << ":" << setw(2) << t.getSecond();
    return stream;
};


int main() {
    int n;
    
    cin >> n;
    vector<Time> vec;
    Time min_dif(INT_MAX, INT_MAX, INT_MAX);
    

    for(auto i = 0; i <n; i++)
    {
        Time temp = Time::readFromConsole();
        vec.push_back(temp);
    }
    
    for (int i = 0; i < vec.size() - 1; i++) {

        for (int i2 = i + 1; i2 < vec.size(); i2++) {
            Time time = vec[i2] - vec[i];
            
            if (time < min_dif && time.getTotalSeconds() >= 0) {
                min_dif = time;
            }
        }
    }
    
    cout << min_dif;

    return 0;
}
