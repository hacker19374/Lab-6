#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void) {
    int total = 0;
    double sum = 0;
    double sumS = 0;
    double data;
    double average;
    double dev;

    cout << "Enter numbers - Q to quit: ";

    while (cin >> data) {
        total++;
        sum = sum + data;
        sumS = sumS + data * data;
    }

    average = sum / total;

    dev = (sumS - (sum * sum / total)) / (total - 1);
    dev = sqrt(dev);

    cout << "n = " << total
        << ", average = " << average
        << ", standard deviation = " << dev;

    return 0;
}
