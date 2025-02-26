#include <iostream>

class Time {
    private:
     int hours;
     int minutes;
     int seconds;
    public:
     Time() : hours(0), minutes(0), seconds(0) {}
     Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}
     void display() const {
	std::cout << hours << ':' << minutes << ':' << seconds << std::endl;
     } 

     void add(Time time1, Time time2) {
	seconds = time1.seconds + time2.seconds;
	if (seconds >= 60) {
	    seconds -= 60;
	    time1.minutes++;
	}
	minutes = time1.minutes + time2.minutes;
	if (minutes >= 60) {
	    minutes -= 60;
	    time1.hours++;
	}
	hours = time1.hours + time2.hours;
     }
};

int main() {
    Time time1(5,50,50), time2(5,50,50), time3;
    time3.add(time1, time2);
    time3.display();
}
