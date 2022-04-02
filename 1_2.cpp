#include <iostream>

using namespace std;
int mile, metry;

int main() {
    cout << "Podaj odleglosc w milach morskich: ";
    cin >> mile;
    metry = mile * 1852;
    cout << "Podana odleglosc w metrach to: " << metry;

}