
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <climits>

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    cout << fixed << setprecision(6);
    cout << "ДОМАШНА РАБОТА - ЗАДАЧИ 1-13 И 7*\n";

    {
        cout << "\n========== ЗАДАЧА 1 ==========\n";
        long long number;
        cout << "Въведете цяло число: ";
        if (!(cin >> number)) return 1;

        unsigned long long v = number < 0
            ? 0ULL - static_cast<unsigned long long>(number)
            : static_cast<unsigned long long>(number);

        int count = 0;
        do {
            ++count;
            v /= 10;
        } while (v != 0);

        cout << "Брой цифри: " << count << '\n';
    }

    {
        cout << "\n========== ЗАДАЧА 2 ==========\n";
        long long number;
        cout << "Въведете цяло число: ";
        if (!(cin >> number)) return 1;

        unsigned long long v = number < 0
            ? 0ULL - static_cast<unsigned long long>(number)
            : static_cast<unsigned long long>(number);

        int sum = 0;
        do {
            sum += static_cast<int>(v % 10);
            v /= 10;
        } while (v != 0);

        cout << "Сбор на цифрите: " << sum << '\n';
    }

    {
        cout << "\n========== ЗАДАЧА 3 ==========\n";
        long long number;
        cout << "Въведете цяло число: ";
        if (!(cin >> number)) return 1;

        unsigned long long v = number < 0
            ? 0ULL - static_cast<unsigned long long>(number)
            : static_cast<unsigned long long>(number);

        string reversed;
        do {
            reversed += char('0' + v % 10);
            v /= 10;
        } while (v != 0);

        size_t first = reversed.find_first_not_of('0');

        if (first == string::npos)
            reversed = "0";
        else
            reversed.erase(0, first);

        cout << "Обърнато число: ";
        if (number < 0) cout << '-';
        cout << reversed << '\n';
    }

    {
        cout << "\n========== ЗАДАЧА 4 ==========\n";
        long long number;
        cout << "Въведете цяло число: ";
        if (!(cin >> number)) return 1;

        unsigned long long v = number < 0
            ? 0ULL - static_cast<unsigned long long>(number)
            : static_cast<unsigned long long>(number);

        int frequency[10] = {};

        do {
            ++frequency[v % 10];
            v /= 10;
        } while (v != 0);

        cout << "Цифра/брой срещания: ";

        for (int digit = 0; digit <= 9; ++digit) {
            if (digit != 0) cout << ", ";
            cout << digit << '/' << frequency[digit];
        }
        cout << '\n';
    }

    {
        cout << "\n========== ЗАДАЧА 5 ==========\n";
        char symbol;
        int rows;

        cout << "Въведете символ и брой редове (например * 4): ";
        if (!(cin >> symbol >> rows) || rows < 1) {
            cout << "Невалиден брой редове!\n";
            return 1;
        }

        for (int i = 1; i <= rows; ++i) {
            for (int s = 0; s < rows - i; ++s)
                cout << ' ';

            for (int s = 0; s < 2 * i - 1; ++s)
                cout << symbol;

            cout << '\n';
        }
    }

    {
        cout << "\n========== ЗАДАЧА 6 ==========\n";
        char input;

        cout << "Въведете цифра от 0 до 9: ";

        if (!(cin >> input) || input < '0' || input > '9') {
            cout << "Невалидна цифра!\n";
            return 1;
        }

        int digit = input - '0';

        if (digit == 0) {
            cout << "0\n";
        }
        else {
            for (int row = 0; row <= digit; ++row) {
                for (int j = 1; j <= digit; ++j)
                    cout << (j <= row ? char('0' + j) : '0');

                for (int j = digit; j >= 1; --j)
                    cout << (j <= row ? char('0' + j) : '0');

                cout << '\n';
            }
        }
    }

    {
        cout << "\n========== ЗАДАЧА 7* ==========\n";
        char input;

        cout << "Въведете цифра от 0 до 9: ";

        if (!(cin >> input) || input < '0' || input > '9') {
            cout << "Невалидна цифра!\n";
            return 1;
        }

        int digit = input - '0';

        if (digit == 0) {
            cout << "0\n";
        }
        else {
            for (int row = 0; row <= digit; ++row) {
                for (int j = 1; j < digit; ++j)
                    cout << (j <= row ? char('0' + j) : '0');

                cout << (row == digit ? char('0' + digit) : '0');

                for (int j = digit - 1; j >= 1; --j)
                    cout << (j <= row ? char('0' + j) : '0');

                cout << '\n';
            }
        }
    }

    {
        cout << "\n========== ЗАДАЧА 7 ==========\n";
        int a, m, n;

        cout << "Въведете положителни цели числа a, m и n: ";

        if (!(cin >> a >> m >> n) ||
            a <= 0 || m <= 0 || n <= 0) {
            cout << "Невалидни числа!\n";
            return 1;
        }

        long double y = 0;

        for (int i = 1; i <= n; ++i) {
            long double product = 1;

            for (int j = 1; j <= m; ++j) {
                product *=
                    static_cast<long double>(a + j) / (i + j);
            }

            y += product;
        }

        cout << "Стойност на y: " << y << '\n';
    }

    {
        cout << "\n========== ЗАДАЧА 8 ==========\n";
        int n;

        cout << "Колко положителни цели числа ще въведете? ";

        if (!(cin >> n) || n <= 0) {
            cout << "Невалиден брой!\n";
            return 1;
        }

        long long gcd = 0;

        for (int i = 1; i <= n; ++i) {
            long long value;

            cout << "Число " << i << ": ";

            if (!(cin >> value) || value <= 0) {
                cout << "Числото трябва да е положително!\n";
                return 1;
            }

            long long a = gcd;
            long long b = value;

            while (b != 0) {
                long long remainder = a % b;
                a = b;
                b = remainder;
            }

            gcd = a;
        }

        cout << "Най-голям общ делител: " << gcd << '\n';
    }

    {
        cout << "\n========== ЗАДАЧА 9 ==========\n";
        long long m, n;

        cout << "Въведете m и n (0 < m < n): ";

        if (!(cin >> m >> n) || m <= 0 || m >= n) {
            cout << "Невалиден интервал!\n";
            return 1;
        }

        cout << "Числа с различни цифри: ";
        bool found = false;

        for (long long number = m; ; ++number) {
            bool seen[10] = {};
            bool unique = true;
            long long v = number;

            while (v > 0) {
                int digit = static_cast<int>(v % 10);

                if (seen[digit]) {
                    unique = false;
                    break;
                }

                seen[digit] = true;
                v /= 10;
            }

            if (unique) {
                cout << number << ' ';
                found = true;
            }

            if (number == n) break;
        }

        if (!found) cout << "няма";
        cout << '\n';
    }

    {
        cout << "\n========== ЗАДАЧА 10 ==========\n";
        int n;

        cout << "Въведете n (n > 1): ";

        if (!(cin >> n) || n <= 1) {
            cout << "n трябва да е по-голямо от 1!\n";
            return 1;
        }

        int count = 0;

        cout << "Прости числа, започващи с 3: ";

        for (int number = 3; count < n; ++number) {
            int firstDigit = number;

            while (firstDigit >= 10)
                firstDigit /= 10;

            if (firstDigit != 3) {
                if (number == INT_MAX) break;
                continue;
            }

            bool prime = true;

            for (int d = 2; d <= number / d; ++d) {
                if (number % d == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime) {
                cout << number << ' ';
                ++count;
            }

            if (number == INT_MAX) break;
        }

        cout << '\n';

        if (count < n)
            cout << "Достигната е границата на тип int.\n";
    }

    {
        cout << "\n========== ЗАДАЧА 11 ==========\n";
        long long k;
        int n;

        cout << "Въведете цели числа k и n (n >= 0): ";

        if (!(cin >> k >> n) || n < 0) {
            cout << "Невалидни входни данни!\n";
            return 1;
        }

        long double S = 0;

        for (int i = 1; i <= n; ++i) {
            long double t = i - 2.0L;
            S += t * t + static_cast<long double>(k) * i;
        }

        cout << "S = " << S << '\n';
    }

    {
        cout << "\n========== ЗАДАЧА 12 ==========\n";
        double a, enteredN;

        cout << "Въведете a и n (n - положително цяло число): ";

        if (!(cin >> a >> enteredN) ||
            !isfinite(a) || !isfinite(enteredN) ||
            enteredN < 1 || floor(enteredN) != enteredN ||
            enteredN > INT_MAX) {
            cout << "Невалидни входни данни!\n";
            return 1;
        }

        int n = static_cast<int>(enteredN);

        if (a == 0 && n > 1) {
            cout << "При a = 0 изразът има деление на нула.\n";
            return 1;
        }

        long double x =
            -96.0L + 209.0L * rand() / RAND_MAX;

        long double S = 0;

        for (int i = 1; i <= n; ++i) {
            S += powl(x, i) *
                 (i + x / powl(static_cast<long double>(a),
                                n - i));
        }

        cout << "Генерирано x = " << x << '\n';
        cout << "S = " << S << '\n';
    }

    {
        cout << "\n========== ЗАДАЧА 13 ==========\n";
        int x, y, z, n;

        cout << "Въведете положителни цели числа x, y, z, n: ";

        if (!(cin >> x >> y >> z >> n) ||
            x <= 0 || y <= 0 || z <= 0 || n <= 0) {
            cout << "Невалидни входни данни!\n";
            return 1;
        }

        long double P =
            static_cast<long double>(y) * n * powl(z, n);

        long double powerX = 1;
        long double powerTwo = 1;

        for (int i = 1; i <= n; ++i) {
            powerX *= x;
            powerTwo *= 2;

            P += powerX * y * (n - powerTwo) *
                 powl(z, n - i);
        }

        cout << "P = " << P << '\n';
    }

    return 0;
}
