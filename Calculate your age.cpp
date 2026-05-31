#include <iostream>
#include <ctime>
using namespace std;

struct Age
{
	int years;
	int months;
	int days;
	int hours;
	int minutes;
	int seconds;
};

Age calculateAge(int birthYear, int birthMonth, int birthDay)
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int currentYear = 1900 + ltm->tm_year;
	int currentMonth = 1 + ltm->tm_mon;
	int currentDay = ltm->tm_mday;
	int currentHour = ltm->tm_hour;
	int currentMin = ltm->tm_min;
	int currentSec = ltm->tm_sec;

	int years = currentYear - birthYear;
	int months = currentMonth - birthMonth;
	int days = currentDay - birthDay;
	int hours = currentHour;
	int minutes = currentMin;
	int seconds = currentSec;

	if (days < 0)
	{
		months--;
		days += 30; // assuming 30 days per month for simplicity
	}

	if (months < 0)
	{
		years--;
		months += 12;
	}

	return {years, months, days, hours, minutes, seconds};
}

int main()
{
	int birthYear, birthMonth, birthDay;
	cout << "Enter your birth year: ";
	cin >> birthYear;
	cout << "Enter your birth month: ";
	cin >> birthMonth;
	cout << "Enter your birth day: ";
	cin >> birthDay;

	Age age = calculateAge(birthYear, birthMonth, birthDay);

	cout << "Your age is " << age.years << " years, "
			 << age.months << " months, "
			 << age.days << " days, "
			 << age.hours << " hours, "
			 << age.minutes << " minutes, and "
			 << age.seconds << " seconds." << endl;

	return 0;
}