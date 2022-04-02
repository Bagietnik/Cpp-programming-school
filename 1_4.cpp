#include <iostream>

using namespace std;

double wiek_lata;

double counter(double);

int main() 
{
    cout << "Podaj swoj wiek: ";
    cin >> wiek_lata;
    cout << "Twoj wiek w miesiacach to: " << counter(wiek_lata);
}

double counter(double lata)
{
    return lata * 12;
}