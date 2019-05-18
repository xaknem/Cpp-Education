// выводит сообщение на экран
#include <iostream>
#include <cmath>

using namespace std;

const int inchesInFoot = 12;
const double metersInInches = 0.0254;
const double poundsInKg = 2.2;

// Calculates inches from foot
int inchesToFoot() {
    int height;
    cout << "Vvedite rost v duimax: ";
    cin >> height;
    cout << "\nIdet raschet...\n";
    int foots = height / inchesInFoot;
    int dumes = height % foots;
    cout << "Rost " << foots << " footov, and " << dumes << " duimov";
    return 0;
}

// Calculate BMI index using constants
int bmiIndex() {
    double heightInFoots;
    int heightInInches;
    int weightInPounds;
    cout << "Put your height in foots : \n";
    cin >> heightInFoots;
    cout << "And inches : \n";
    cin >> heightInInches;
    cout << "Put your weight on foonts: \n";
    cin >> weightInPounds;
    cout << "RUN" << endl;
    int height = (heightInFoots * inchesInFoot + heightInInches) * metersInInches;
    double weight = weightInPounds / poundsInKg;
    double bmi = weight / (height * height);
    cout << "BMI is : " << bmi << " ." << endl;
    return 0;
}

// Geograpgic coordinates
const double angularMinutesInDegree = 60;
const double angularSecondsInAngularMinute = 60;
int latitude() {
    double latitudeInDegrees;
    double latitudeInMinutes;
    double latitudeInSeconds;

    cout << "Put latitude in degrees, then in minutes, then in seconds: ";
    cin >> latitudeInDegrees;
    cin >> latitudeInMinutes;
    cin >> latitudeInSeconds;
    double latitude = latitudeInDegrees + (latitudeInMinutes / angularMinutesInDegree) + latitudeInSeconds / (angularMinutesInDegree * angularSecondsInAngularMinute);
    cout << " == " << latitude << " degrees;";
    return 0;
}

const int secsInDays = 86400;
const int secsInHour = 3600;
const int secsInMins = 60;
int secondsToRealTime() {
    int seconds;
    cout << "Enter the number of seconds : " ;
    cin >> seconds;
    int days;
    int hours;
    int minutes;
    int variable;
    days = seconds / secsInDays;
    hours = seconds % secsInDays / secsInHour;
    minutes = seconds % secsInDays % secsInHour / secsInMins;
    seconds = seconds % secsInDays % secsInHour % secsInMins;
    cout << endl << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds.";
    return 0;
}

int populationCalc() {
    long long worldsPopulation;
    long long countryPopulation;
    cout << "Enter the worlds population: ";
    cin >> worldsPopulation;
    cout << "\nEnter the population of the US: ";
    cin  >> countryPopulation;
    double percent = double(countryPopulation) / worldsPopulation * 100.0;
    cout << "The population of the US is " << percent << "% of the worlds population.";
    return 0;
}

int fuelConsumptionCalculatorUS() {
    int  miles;
    double gallons;
    cout << "Enter the road length in miles: ";
    cin >> miles;
    cout << "Enter the amount fuel spent in gallons: ";
    cin  >> gallons;
    int consumption = gallons / miles  * 100;
    cout << "The fuel consumption for 100 miles is " << consumption << " gallons.";
    return 0;
}

int europeanConsimptionToUs() {
    int  kilometers;
    double liters;
    cout << "Enter the road length in kilometers: ";
    cin >> kilometers;
    cout << "Enter the amount fuel spent in liters: ";
    cin  >> liters;
    double miles = kilometers / 100.0 * 62.14;
    double gallons = liters * 3.875;
    double consumption = miles / gallons;
    cout << "The fuel consumption is 1 gallon for" << consumption << " miles.";
    return 0;
}

int main() {
    using namespace std;
    double* p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << endl;
    cout << p3 + 1;

    short kek [20];
    short (*pas) [20] = &kek;
}