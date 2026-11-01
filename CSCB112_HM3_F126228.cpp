#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>

using namespace std;

#define MIN -5.0
#define MAX 10.0

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    {
        cout << "\n========== ЗАДАЧА 1 ==========\n";

        int n;
        cout << "Въведете число от 1 до 3999: ";
        if (!(cin >> n) || n < 1 || n > 3999) {
            cout << "Невалидно число!\n";
            return 1;
        }

        if (n >= 1000) cout << "M";
        if (n >= 2000) cout << "M";
        if (n >= 3000) cout << "M";

        switch ((n / 100) % 10) {
            case 1: cout << "C"; break;
            case 2: cout << "CC"; break;
            case 3: cout << "CCC"; break;
            case 4: cout << "CD"; break;
            case 5: cout << "D"; break;
            case 6: cout << "DC"; break;
            case 7: cout << "DCC"; break;
            case 8: cout << "DCCC"; break;
            case 9: cout << "CM"; break;
        }

        switch ((n / 10) % 10) {
            case 1: cout << "X"; break;
            case 2: cout << "XX"; break;
            case 3: cout << "XXX"; break;
            case 4: cout << "XL"; break;
            case 5: cout << "L"; break;
            case 6: cout << "LX"; break;
            case 7: cout << "LXX"; break;
            case 8: cout << "LXXX"; break;
            case 9: cout << "XC"; break;
        }

        switch (n % 10) {
            case 1: cout << "I"; break;
            case 2: cout << "II"; break;
            case 3: cout << "III"; break;
            case 4: cout << "IV"; break;
            case 5: cout << "V"; break;
            case 6: cout << "VI"; break;
            case 7: cout << "VII"; break;
            case 8: cout << "VIII"; break;
            case 9: cout << "IX"; break;
        }

        cout << '\n';
    }

    {
        cout << "\n========== ЗАДАЧА 2 ==========\n";
        cout << "Въведете римско число: ";

        cin >> ws;
        int n = 0;

        if (cin.peek() == 'M') {
            cin.get();
            n += 1000;
        }
        if (cin.peek() == 'M') {
            cin.get();
            n += 1000;
        }
        if (cin.peek() == 'M') {
            cin.get();
            n += 1000;
        }

        if (cin.peek() == 'C') {
            cin.get();

            if (cin.peek() == 'M') {
                cin.get();
                n += 900;
            }
            else if (cin.peek() == 'D') {
                cin.get();
                n += 400;
            }
            else {
                n += 100;
                if (cin.peek() == 'C') {
                    cin.get();
                    n += 100;
                }
                if (cin.peek() == 'C') {
                    cin.get();
                    n += 100;
                }
            }
        }
        else if (cin.peek() == 'D') {
            cin.get();
            n += 500;

            if (cin.peek() == 'C') {
                cin.get();
                n += 100;
            }
            if (cin.peek() == 'C') {
                cin.get();
                n += 100;
            }
            if (cin.peek() == 'C') {
                cin.get();
                n += 100;
            }
        }

        if (cin.peek() == 'X') {
            cin.get();

            if (cin.peek() == 'C') {
                cin.get();
                n += 90;
            }
            else if (cin.peek() == 'L') {
                cin.get();
                n += 40;
            }
            else {
                n += 10;
                if (cin.peek() == 'X') {
                    cin.get();
                    n += 10;
                }
                if (cin.peek() == 'X') {
                    cin.get();
                    n += 10;
                }
            }
        }
        else if (cin.peek() == 'L') {
            cin.get();
            n += 50;

            if (cin.peek() == 'X') {
                cin.get();
                n += 10;
            }
            if (cin.peek() == 'X') {
                cin.get();
                n += 10;
            }
            if (cin.peek() == 'X') {
                cin.get();
                n += 10;
            }
        }

        if (cin.peek() == 'I') {
            cin.get();

            if (cin.peek() == 'X') {
                cin.get();
                n += 9;
            }
            else if (cin.peek() == 'V') {
                cin.get();
                n += 4;
            }
            else {
                n += 1;
                if (cin.peek() == 'I') {
                    cin.get();
                    n += 1;
                }
                if (cin.peek() == 'I') {
                    cin.get();
                    n += 1;
                }
            }
        }
        else if (cin.peek() == 'V') {
            cin.get();
            n += 5;

            if (cin.peek() == 'I') {
                cin.get();
                n += 1;
            }
            if (cin.peek() == 'I') {
                cin.get();
                n += 1;
            }
            if (cin.peek() == 'I') {
                cin.get();
                n += 1;
            }
        }

        if (n == 0 ||
            (cin.peek() != '\n' && cin.peek() != EOF)) {
            cout << "Невалидно римско число!\n";
            return 1;
        }

        cout << "Десетично число: " << n << '\n';
    }

    {
        cout << "\n========== ЗАДАЧА 3 ==========\n";

        double x;
        cout << "Въведете реално число: ";

        if (!(cin >> x)) {
            cout << "Невалиден вход!\n";
            return 1;
        }

        if (x >= MIN && x <= MAX) {
            cout << "Числото принадлежи на интервала ["
                 << MIN << ", " << MAX << "].\n";
        }
        else {
            cout << "Числото не принадлежи на интервала.\n";
        }
    }

    {
        cout << "\n========== ЗАДАЧА 4 ==========\n";

        long long n;
        cout << "Въведете цяло число: ";

        if (!(cin >> n)) {
            cout << "Невалиден вход!\n";
            return 1;
        }

        unsigned long long v = n < 0
            ? 0ULL - static_cast<unsigned long long>(n)
            : static_cast<unsigned long long>(n);

        bool started = false;

        if (v >= 1000000000000000000ULL) {
            cout << v / 1000000000000000000ULL << '\n';
            v %= 1000000000000000000ULL;
            started = true;
        }
        if (started || v >= 100000000000000000ULL) {
            cout << v / 100000000000000000ULL << '\n';
            v %= 100000000000000000ULL;
            started = true;
        }
        if (started || v >= 10000000000000000ULL) {
            cout << v / 10000000000000000ULL << '\n';
            v %= 10000000000000000ULL;
            started = true;
        }
        if (started || v >= 1000000000000000ULL) {
            cout << v / 1000000000000000ULL << '\n';
            v %= 1000000000000000ULL;
            started = true;
        }
        if (started || v >= 100000000000000ULL) {
            cout << v / 100000000000000ULL << '\n';
            v %= 100000000000000ULL;
            started = true;
        }
        if (started || v >= 10000000000000ULL) {
            cout << v / 10000000000000ULL << '\n';
            v %= 10000000000000ULL;
            started = true;
        }
        if (started || v >= 1000000000000ULL) {
            cout << v / 1000000000000ULL << '\n';
            v %= 1000000000000ULL;
            started = true;
        }
        if (started || v >= 100000000000ULL) {
            cout << v / 100000000000ULL << '\n';
            v %= 100000000000ULL;
            started = true;
        }
        if (started || v >= 10000000000ULL) {
            cout << v / 10000000000ULL << '\n';
            v %= 10000000000ULL;
            started = true;
        }
        if (started || v >= 1000000000ULL) {
            cout << v / 1000000000ULL << '\n';
            v %= 1000000000ULL;
            started = true;
        }
        if (started || v >= 100000000ULL) {
            cout << v / 100000000ULL << '\n';
            v %= 100000000ULL;
            started = true;
        }
        if (started || v >= 10000000ULL) {
            cout << v / 10000000ULL << '\n';
            v %= 10000000ULL;
            started = true;
        }
        if (started || v >= 1000000ULL) {
            cout << v / 1000000ULL << '\n';
            v %= 1000000ULL;
            started = true;
        }
        if (started || v >= 100000ULL) {
            cout << v / 100000ULL << '\n';
            v %= 100000ULL;
            started = true;
        }
        if (started || v >= 10000ULL) {
            cout << v / 10000ULL << '\n';
            v %= 10000ULL;
            started = true;
        }
        if (started || v >= 1000ULL) {
            cout << v / 1000ULL << '\n';
            v %= 1000ULL;
            started = true;
        }
        if (started || v >= 100ULL) {
            cout << v / 100ULL << '\n';
            v %= 100ULL;
            started = true;
        }
        if (started || v >= 10ULL) {
            cout << v / 10ULL << '\n';
            v %= 10ULL;
        }

        cout << v << '\n';
    }

    {
        cout << "\n========== ЗАДАЧА 5 ==========\n";

        int minValue, maxValue;

        cout << "Въведете долна и горна граница: ";

        if (!(cin >> minValue >> maxValue) ||
            minValue > maxValue) {
            cout << "Невалиден интервал!\n";
            return 1;
        }

        unsigned long long count =
            static_cast<unsigned long long>(
                static_cast<long long>(maxValue) -
                minValue + 1LL
            );

        unsigned long long base =
            static_cast<unsigned long long>(RAND_MAX) + 1ULL;

        unsigned long long sample =
            static_cast<unsigned long long>(rand()) * base +
            rand();

        if (count > base * base) {
            sample = sample * base + rand();
        }

        int number = static_cast<int>(
            static_cast<long long>(minValue) +
            static_cast<long long>(sample % count)
        );

        cout << "Случайно число: " << number << '\n';

        if (number >= -999 && number <= 999) {
            long long digits =
                number < 0 ? -static_cast<long long>(number)
                           : static_cast<long long>(number);

            if (digits >= 100) {
                cout << digits / 100 << '\n';
            }
            if (digits >= 10) {
                cout << digits / 10 % 10 << '\n';
            }
            cout << digits % 10 << '\n';
        }
    }

    {
        cout << "\n========== ЗАДАЧА 6 ==========\n";

        double a, b;

        cout << "Въведете границите a и b: ";

        if (!(cin >> a >> b) || a > b) {
            cout << "Невалиден интервал!\n";
            return 1;
        }

        double randomNumber =
            a + (b - a) *
            (static_cast<double>(rand()) / RAND_MAX);

        cout << "Случайно реално число: "
             << randomNumber << '\n';
    }

    {
        cout << "\n========== ЗАДАЧА 7 ==========\n";

        double a1, b1, c1;
        double a2, b2, c2;

        cout << "Въведете a1 b1 c1: ";
        if (!(cin >> a1 >> b1 >> c1)) return 1;

        cout << "Въведете a2 b2 c2: ";
        if (!(cin >> a2 >> b2 >> c2)) return 1;

        double D = a1 * b2 - a2 * b1;

        if (D != 0) {
            double x = (c1 * b2 - c2 * b1) / D;
            double y = (a1 * c2 - a2 * c1) / D;

            cout << "Единствено решение:\n";
            cout << "x = " << x << '\n';
            cout << "y = " << y << '\n';
        }
        else if (
            (a1 == 0 && b1 == 0 && c1 != 0) ||
            (a2 == 0 && b2 == 0 && c2 != 0) ||
            (a1 * c2 - a2 * c1 != 0) ||
            (b1 * c2 - b2 * c1 != 0)
        ) {
            cout << "Системата няма решение.\n";
        }
        else {
            cout << "Системата има безброй много решения.\n";
        }
    }

    {
        cout << "\n========== ЗАДАЧА 8 ==========\n";

        double a1, b1, c1, d1;
        double a2, b2, c2, d2;
        double a3, b3, c3, d3;

        cout << "Въведете a1 b1 c1 d1: ";
        if (!(cin >> a1 >> b1 >> c1 >> d1)) return 1;

        cout << "Въведете a2 b2 c2 d2: ";
        if (!(cin >> a2 >> b2 >> c2 >> d2)) return 1;

        cout << "Въведете a3 b3 c3 d3: ";
        if (!(cin >> a3 >> b3 >> c3 >> d3)) return 1;

        double D =
            a1 * (b2*c3 - b3*c2)
            - b1 * (a2*c3 - a3*c2)
            + c1 * (a2*b3 - a3*b2);

        if (D == 0) {
            cout << "Системата няма единствено решение.\n";
        }
        else {
            double Dx =
                d1 * (b2*c3 - b3*c2)
                - b1 * (d2*c3 - d3*c2)
                + c1 * (d2*b3 - d3*b2);

            double Dy =
                a1 * (d2*c3 - d3*c2)
                - d1 * (a2*c3 - a3*c2)
                + c1 * (a2*d3 - a3*d2);

            double Dz =
                a1 * (b2*d3 - b3*d2)
                - b1 * (a2*d3 - a3*d2)
                + d1 * (a2*b3 - a3*b2);

            cout << "Единствено решение:\n";
            cout << "x = " << Dx / D << '\n';
            cout << "y = " << Dy / D << '\n';
            cout << "z = " << Dz / D << '\n';
        }
    }

    {
        cout << "\n========== ЗАДАЧА 9 ==========\n";

        double A, B;
        int N;

        cout << "1 - Събиране\n";
        cout << "2 - Изваждане\n";
        cout << "3 - Умножение\n";
        cout << "4 - Деление\n";

        cout << "Въведете A, B и N: ";

        if (!(cin >> A >> B >> N)) {
            cout << "Невалидни входни данни!\n";
            return 1;
        }

        if (N < 1 || N > 4) {
            cout << "N трябва да е от 1 до 4.\n";
            return 1;
        }

        if (B == 0) {
            cout << "B трябва да е различно от 0.\n";
            return 1;
        }

        switch (N) {
            case 1:
                cout << "Сбор: " << A + B << '\n';
                break;
            case 2:
                cout << "Разлика: " << A - B << '\n';
                break;
            case 3:
                cout << "Произведение: " << A * B << '\n';
                break;
            case 4:
                cout << "Частно: " << A / B << '\n';
                break;
        }
    }

    {
        cout << "\n========== ЗАДАЧА 10 ==========\n";

        int x;
        cout << "Въведете брой задачи (10-40): ";

        if (!(cin >> x) || x < 10 || x > 40) {
            cout << "Невалиден брой!\n";
            return 1;
        }

        if (x >= 10 && x <= 19) {
            switch (x) {
                case 10: cout << "Десет"; break;
                case 11: cout << "Единадесет"; break;
                case 12: cout << "Дванадесет"; break;
                case 13: cout << "Тринадесет"; break;
                case 14: cout << "Четиринадесет"; break;
                case 15: cout << "Петнадесет"; break;
                case 16: cout << "Шестнадесет"; break;
                case 17: cout << "Седемнадесет"; break;
                case 18: cout << "Осемнадесет"; break;
                case 19: cout << "Деветнадесет"; break;
            }
        }
        else {
            switch (x / 10) {
                case 2:
                    cout << "Двадесет";
                    break;
                case 3:
                    cout << "Тридесет";
                    break;
                case 4:
                    cout << "Четиридесет";
                    break;
            }

            if (x % 10 != 0) {
                cout << " и ";

                switch (x % 10) {
                    case 1: cout << "една"; break;
                    case 2: cout << "две"; break;
                    case 3: cout << "три"; break;
                    case 4: cout << "четири"; break;
                    case 5: cout << "пет"; break;
                    case 6: cout << "шест"; break;
                    case 7: cout << "седем"; break;
                    case 8: cout << "осем"; break;
                    case 9: cout << "девет"; break;
                }
            }
        }

        if (x % 10 == 1 && x != 11) {
            cout << " образователна задача\n";
        }
        else {
            cout << " образователни задачи\n";
        }
    }

    return 0;
}
