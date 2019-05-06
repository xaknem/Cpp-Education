// выводит сообщение на экран
#include <iostream>
#include <cmath>

using namespace std;

const int dinf = 12;

int main() {
    int height;
    cout << "Vvedite rost v duimax: ";
    cin >> height;
    cout << "\nIdet raschet...\n";
    int foots = height / dinf;
    int dumes = height % foots;
    cout << "Rost " << foots << " footov, and " << dumes << " duimov";
    return 0;
}

void lolProverka() {

}