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
const int angularMinutesInDegree = 60;
const int angularSecondsInAngularMinute = 60;
int main() {
    int latitudeInDegrees;
    int latitudeInMinutes;
    int latitudeInSeconds;

    cout << "Put latitude in degrees, then in minutes, then in seconds: ";
    cin >> latitudeInDegrees;
    cin >> latitudeInMinutes;
    cin >> latitudeInSeconds;


    return 0;
}