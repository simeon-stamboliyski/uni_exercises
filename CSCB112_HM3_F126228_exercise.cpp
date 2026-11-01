#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "\n========== ЗАДАЧА 1: МИНИ КАЛКУЛАТОР ==========\n";
    double a, b;
    char operation;

    cout << "Въведи първо число: ";
    if (!(cin >> a)) return 1;
    cout << "Въведи второ число: ";
    if (!(cin >> b)) return 1;
    cout << "Въведи операция (+ - * /): ";
    if (!(cin >> operation)) return 1;

    switch (operation) {
        case '+':
            cout << "Резултат: " << a + b << '\n';
            break;
        case '-':
            cout << "Резултат: " << a - b << '\n';
            break;
        case '*':
            cout << "Резултат: " << a * b << '\n';
            break;
        case '/':
            if (b != 0)
                cout << "Резултат: " << a / b << '\n';
            else
                cout << "Грешка: деление на нула!\n";
            break;
        default:
            cout << "Невалидна операция!\n";
    }

    cout << "\n========== ЗАДАЧА 2: ВИСОКОСНА ГОДИНА ==========\n";
    int year;
    cout << "Въведи година: ";
    if (!(cin >> year)) return 1;

    if (year <= 0)
        cout << "Въведи положителна година!\n";
    else if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        cout << "Годината е високосна.\n";
    else
        cout << "Годината не е високосна.\n";

    cout << "\n========== ЗАДАЧА 3: ОЦЕНКА ==========\n";
    int points;
    cout << "Въведи точки (0-100): ";
    if (!(cin >> points)) return 1;

    if (points < 0 || points > 100)
        cout << "Невалиден брой точки!\n";
    else if (points <= 49)
        cout << "Оценка: Слаб (2)\n";
    else if (points <= 64)
        cout << "Оценка: Среден (3)\n";
    else if (points <= 79)
        cout << "Оценка: Добър (4)\n";
    else if (points <= 89)
        cout << "Оценка: Много добър (5)\n";
    else
        cout << "Оценка: Отличен (6)\n";

    cout << "\n========== ЗАДАЧА 4: ДЕН ОТ СЕДМИЦАТА ==========\n";
    int day;
    cout << "Въведи число (1-7): ";
    if (!(cin >> day)) return 1;

    switch (day) {
        case 1: cout << "Денят е: Понеделник\n"; break;
        case 2: cout << "Денят е: Вторник\n"; break;
        case 3: cout << "Денят е: Сряда\n"; break;
        case 4: cout << "Денят е: Четвъртък\n"; break;
        case 5: cout << "Денят е: Петък\n"; break;
        case 6: cout << "Денят е: Събота\n"; break;
        case 7: cout << "Денят е: Неделя\n"; break;
        default: cout << "Невалиден ден!\n";
    }

    cout << "\n========== ЗАДАЧА 5: ТЕМПЕРАТУРЕН СЪВЕТНИК ==========\n";
    double temperature;
    cout << "Въведи температура: ";
    if (!(cin >> temperature)) return 1;

    if (temperature < 0)
        cout << "Много студено - облечи яке!\n";
    else if (temperature <= 10)
        cout << "Хладно е - сложи пуловер.\n";
    else if (temperature <= 20)
        cout << "Приятно време.\n";
    else if (temperature <= 30)
        cout << "Топло - идеално за разходка.\n";
    else
        cout << "Много горещо - стой на сянка!\n";

    cout << "\n========== ЗАДАЧА 6: МЕНЮ В КАФЕНЕ ==========\n";
    cout << "1 - Кафе\n";
    cout << "2 - Чай\n";
    cout << "3 - Горещ шоколад\n";
    cout << "4 - Вода\n";

    int drink;
    cout << "Избери напитка: ";
    if (!(cin >> drink)) return 1;

    switch (drink) {
        case 1: cout << "Избра: Кафе. Добър избор!\n"; break;
        case 2: cout << "Избра: Чай. Добър избор!\n"; break;
        case 3: cout << "Избра: Горещ шоколад. Добър избор!\n"; break;
        case 4: cout << "Избра: Вода. Добър избор!\n"; break;
        default: cout << "Невалиден избор!\n";
    }

    cout << "\n========== ЗАДАЧА 7: FIZZBUZZ ==========\n";
    int number;
    cout << "Въведи цяло число: ";
    if (!(cin >> number)) return 1;

    if (number % 3 == 0 && number % 5 == 0)
        cout << "FizzBuzz\n";
    else if (number % 3 == 0)
        cout << "Fizz\n";
    else if (number % 5 == 0)
        cout << "Buzz\n";
    else
        cout << number << '\n';

    cout << "\n========== ЗАДАЧА 8: СВЕТОФАР ==========\n";
    string color;
    cout << "Въведи цвят (red, yellow, green): ";
    if (!(cin >> color)) return 1;

    if (color == "red")
        cout << "Изчакай!\n";
    else if (color == "yellow")
        cout << "Внимание! Изчакай.\n";
    else if (color == "green")
        cout << "Можеш да преминеш, но се огледай!\n";
    else
        cout << "Невалиден цвят!\n";

    cout << "\nКрай на всички 8 задачи.\n";
    return 0;
}
