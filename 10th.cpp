#include <iostream>

using namespace std;


const int SECONDS_PER_MINUTE = 60;        // 每分钟60秒
const int MINUTES_PER_HOUR = 60;          // 每小时60分钟
const int HOURS_PER_DAY = 24;             // 每天24小时
const int SECONDS_PER_HOUR = SECONDS_PER_MINUTE * MINUTES_PER_HOUR; 
const int SECONDS_PER_DAY = HOURS_PER_DAY * SECONDS_PER_HOUR;        

class TimeConverter {
private:
    long long totalSeconds;  
    long long days, hours, minutes, seconds;  

public:
   
    TimeConverter(long long seconds) : totalSeconds(seconds) {}

    void convert() {
        days = totalSeconds / SECONDS_PER_DAY;
        long long remainingSeconds = totalSeconds % SECONDS_PER_DAY;

        hours = remainingSeconds / SECONDS_PER_HOUR;
        remainingSeconds = remainingSeconds % SECONDS_PER_HOUR;

        minutes = remainingSeconds / SECONDS_PER_MINUTE;
        seconds = remainingSeconds % SECONDS_PER_MINUTE;
    }
    void display() const {
        cout << totalSeconds << " seconds = " << days << " days, "
            << hours << " hours, " << minutes << " minutes, "
            << seconds << " seconds" << endl;
    }
};

int main() {
    long long secondsInput;
    cout << "Enter the number of seconds: ";
    cin >> secondsInput;
    TimeConverter timeConverter(secondsInput);

    timeConverter.convert();
    timeConverter.display();

    return 0;
}
