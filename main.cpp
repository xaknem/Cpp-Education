// выводит сообщение на экран
#include <iostream>
#include <cmath>
#include <array>
#include <vector>

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
    double latitude = latitudeInDegrees + (latitudeInMinutes / angularMinutesInDegree) +
                      latitudeInSeconds / (angularMinutesInDegree * angularSecondsInAngularMinute);
    cout << " == " << latitude << " degrees;";
    return 0;
}

const int secsInDays = 86400;
const int secsInHour = 3600;
const int secsInMins = 60;

int secondsToRealTime() {
    int seconds;
    cout << "Enter the number of seconds : ";
    cin >> seconds;
    int days;
    int hours;
    int minutes;
    int variable;
    days = seconds / secsInDays;
    hours = seconds % secsInDays / secsInHour;
    minutes = seconds % secsInDays % secsInHour / secsInMins;
    seconds = seconds % secsInDays % secsInHour % secsInMins;
    cout << endl << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, "
         << seconds << " seconds.";
    return 0;
}

int populationCalc() {
    long long worldsPopulation;
    long long countryPopulation;
    cout << "Enter the worlds population: ";
    cin >> worldsPopulation;
    cout << "\nEnter the population of the US: ";
    cin >> countryPopulation;
    double percent = double(countryPopulation) / worldsPopulation * 100.0;
    cout << "The population of the US is " << percent << "% of the worlds population.";
    return 0;
}

int fuelConsumptionCalculatorUS() {
    int miles;
    double gallons;
    cout << "Enter the road length in miles: ";
    cin >> miles;
    cout << "Enter the amount fuel spent in gallons: ";
    cin >> gallons;
    int consumption = gallons / miles * 100;
    cout << "The fuel consumption for 100 miles is " << consumption << " gallons.";
    return 0;
}

int europeanConsimptionToUs() {
    int kilometers;
    double liters;
    cout << "Enter the road length in kilometers: ";
    cin >> kilometers;
    cout << "Enter the amount fuel spent in liters: ";
    cin >> liters;
    double miles = kilometers / 100.0 * 62.14;
    double gallons = liters * 3.875;
    double consumption = miles / gallons;
    cout << "The fuel consumption is 1 gallon for" << consumption << " miles.";
    return 0;
}

int test() {
    using namespace std;
    double *p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << endl;
    cout << p3 + 1;

    short kek[20];
    short (*pas)[20] = &kek;
    kek + 1;
    kek - 1;
}

int fourth1and2() {
    char actor[30];
    short betsie[100];
    float chuck[13];
    long double dipsea[64];

    array<char, 30> actor2;
    array<short, 100> betsie2;
    array<float, 13> chuck2;
    array<long double, 64> dipsea2;
    return 0;
}

void fourth3() {
    int mass[5] = {1, 3, 5, 7, 9};
}

void fourth4() {
    int mass[5] = {1, 3, 5, 7, 9};
    int even = mass[0] + mass[4];
    cout << even;
}

void fourth5() {
    float ideas[2] = {1, 2};
    cout << ideas[1];
}

void fourth6and7() {
    char some[] = "cheeseburger";
    string newstring = "Waldorf Salad";
}

struct fish {
    string kindof;
    int ounce;
    float length;
};

enum Responce2 {
    No, Yes, Maybe
};

void fourth9() {
    fish largest = {
            "crucian",
            10,
            11.2
    };

}

void fourth11() {
    double ted = 2.4;

    double *pt = &ted;

    cout << *pt;
}

void fourth12() {
    float treacle[10];
    float *pt = treacle;
    cout << "first element " << pt[0] << endl;
    cout << "last element " << pt[9];
    //or as the same
    cout << *pt << " " << *(pt + 9) << endl;
}

void fourth13() {
    int size;
    cout << "Insert size ";
    cin >> size;
    int *first = new int[size];
    vector<int> second(size);
}

void fourth15() {
    ;
    fish *pws = new fish;
    cout << "Insert fish type";
    cin >> pws -> kindof;
    //or
    cout << (*pws).kindof;
    //or
    cout << pws -> kindof;
}

const int ggg{10};
const int yyy = 10;
void fourth17() {
    int const sis = 10;
    std::vector<string> first(ggg);
    std::array<string, ggg> second;
}

