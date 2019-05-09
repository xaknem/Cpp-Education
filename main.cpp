// выводит сообщение на экран
#include <iostream>
#include <cmath>

using namespace std;

const int inchesInFoot = 12;
const double metersInInches = 0.0254;
const double poundsInKg = 2.2;


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

int main() {

    return 0;
}