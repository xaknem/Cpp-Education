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
    cout << endl << "The population of the US is " << percent << "% of the worlds population.";
    return 0;
}

