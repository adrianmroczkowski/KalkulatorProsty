#include <iostream>
#include <cmath>

using namespace std;

float x, y;
int wybor;

int main()
{
    // Wprowadzenie liczb przez u¿ytkownika
    cout << "Wprowadz pierwsza liczbe: ";
    cin >> x;
    cout << "Wprowadz druga liczbe: ";
    cin >> y;
    cout << endl;

    // Menu g³ówne
    cout << "-------- MENU GLOWNE --------" << endl;
    cout << "-----------------------------" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;

    cout << endl;
    cout << "Wybierz: ";
    cin >> wybor;
    cout << endl;

    // matematyka
    switch (wybor)
    {
    case 1:
        cout << "Suma = " << x + y << endl;
        break;
    case 2:
        cout << "Roznica = " << x - y << endl;
        break;
    case 3:
        cout << "Iloczyn = " << x * y << endl;
        break;
    case 4:
        if (y == 0)
        {
            cout << "Nie dzielimy przez zero!";
            cout << endl;
        }
        else
        {
            cout << "Iloraz = " << x / y << endl;
        }

        break;

    default:
        cout << "Nie ma takiego wyboru" << endl;

        return 0;
    }
}
