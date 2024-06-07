#include <iostream>
#include <functional>

using namespace std;

int main()
{

    float x = 3;
    float y = 3;
    float z = 31;
    float result;

    // 6. Generic Lambdas lassen sich mit Lambdas und auto in Kombination umsetzen
    // Die Parameter der Lambdas werden einfach durch auto ersetzt.

    // Zu 1.
    std::function<float (float, float)> calc;

    // Zu 2.
    auto applySum = [](const auto a, const auto b) {
        return a+b;
    };

    auto applyDiff = [](const auto a, const auto b) {
        return a-b;
    };

    // Zu 3.
    auto applyMulti = [](const auto a, const auto b) {
        return a*b;
    };

    // Zu 5.
    auto applyDivision = [](const auto a, const auto b) {
        return a/b;
    };


    int option = 0;

    // Zu 4
    cout << "Wählen Sie eine Option aus:" << endl;

    cout << "1 => Summe" << endl;
    cout << "2 => Difference" << endl;
    cout << "3 => Multiplication" << endl;
    cout << "4 => Division" << endl;
    cout << "5 => End" << endl;

    cin >> option;

    if(option == 1) calc = applySum;
    else if(option == 2) calc = applyDiff;
    else if(option == 3) calc = applyMulti;
    else if(option == 4) calc = applyDivision;
    else
    {
        cout << "Wrong option. Exiting." << endl;
        return 1;
    }

    result = calc(z,y);
    cout << result << endl;

    return 0;
}
