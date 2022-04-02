#include <iostream>

using namespace std;

int godzina, minuty;

void function(int, int);

int main()
{
    cout << "Podaj godzine: ";
    cin >> godzina;

    cout << "Podaj minuty: ";
    cin >> minuty;

    function(godzina, minuty);
}

void function(int godzina, int minuty)
{
    cout << "Czas: " << godzina << ":" << minuty;
}