// kalkulator_V2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
// Switch case

#include <iostream>
using namespace std;

int x, y;
char wybor;

int main()
{
    setlocale(LC_ALL, "");//polskie znaki w konsoli
    cout << "Witaj w kalkultaorze, wybierz operację; " << endl << endl;
    cout << "MENU KALKULATORA" << endl;
    cout << "----------------" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnożenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Powrót do Menu" << endl;

    wybor = getchar();
        system("cls");
        switch (wybor)
        {
        case '1':
            cout << "Dodawanie" << endl << endl;
            cout << "Podaj 1 liczbę: ";
            cin >> x;
            cout << "Podaj 2 liczbę: ";
            cin >> y;
            cout << "Suma = " << x + y << endl;
            break;
        case '2':
            cout << "Odejmownie" << endl << endl;
            cout << "Podaj 1 liczbę: ";
            cin >> x;
            cout << "Podaj 2 liczbę: ";
            cin >> y;
            cout << "Różnica = " << x - y << endl;
            break;
        case '3':
            cout << "Mnożenie" << endl << endl;
            cout << "Podaj 1 liczbę: ";
            cin >> x;
            cout << "Podaj 2 liczbę: ";
            cin >> y;
            cout << "Iloczyn = " << x * y << endl;
            break;
        case '4':
            cout << "Dzielenie" << endl << endl;
            cout << "Podaj 1 liczbę: ";
            cin >> x;
            cout << "Podaj 2 liczbę: ";
            cin >> y;
            if (y == 0)
                cout << "Niedziel przez zero!" << endl;
            else
                cout << "Iloraz = " << x / y << endl;
            break;
        case '5':
            exit(0);
        }
    system("Pause");
    return 0;
}
