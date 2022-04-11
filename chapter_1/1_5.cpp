#include <iostream>

using namespace std;

double temp_cel, temp_fahr;

double fahr_conversion(double);

int main()
{
    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> temp_cel;
    cout << "Temperatura w stopniach Celsjusza wynosi: " << fahr_conversion(temp_cel);
}

double fahr_conversion(double value)
{
    return (temp_cel * (9.0/5.0)) + 32.0;
}