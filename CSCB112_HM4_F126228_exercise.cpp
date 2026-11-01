
#include <iostream>
#include <climits>
#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif

    cout << "30 ЗАДАЧИ С WHILE И DO-WHILE\n";

    // ЗАДАЧА 1: Числата, кратни на 3
    {
        cout << "\n========== ЗАДАЧА 1 ==========\n";
        int n;
        cout << "Въведете положително число N: ";
        if (!(cin >> n) || n <= 0) return 1;

        long long i = 1;
        int count = 0;

        while (i <= n) {
            if (i % 3 == 0) {
                cout << i << ' ';
                ++count;
            }
            ++i;
        }

        cout << '\n' << count << '\n';
    }

    // ЗАДАЧА 2: Сума на четните числа
    {
        cout << "\n========== ЗАДАЧА 2 ==========\n";
        int n;
        cout << "Въведете положително число N: ";
        if (!(cin >> n) || n <= 0) return 1;

        long long sum = 0;
        long long i = 1;

        while (i <= n) {
            if (i % 2 == 0)
                sum += i;
            ++i;
        }

        cout << sum << '\n';
    }

    // ЗАДАЧА 3: Брой цифри
    {
        cout << "\n========== ЗАДАЧА 3 ==========\n";
        long long n;
        cout << "Въведете неотрицателно число N: ";
        if (!(cin >> n) || n < 0) return 1;

        int count = 0;

        do {
            ++count;
            n /= 10;
        } while (n != 0);

        cout << count << '\n';
    }

    // ЗАДАЧА 4: Сума на цифрите
    {
        cout << "\n========== ЗАДАЧА 4 ==========\n";
        long long n;
        cout << "Въведете положително число N: ";
        if (!(cin >> n) || n <= 0) return 1;

        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        cout << sum << '\n';
    }

    // ЗАДАЧА 5: Четни и нечетни цифри
    {
        cout << "\n========== ЗАДАЧА 5 ==========\n";
        long long n;
        cout << "Въведете неотрицателно число N: ";
        if (!(cin >> n) || n < 0) return 1;

        int even = 0, odd = 0;

        do {
            int digit = n % 10;

            if (digit % 2 == 0)
                ++even;
            else
                ++odd;

            n /= 10;
        } while (n > 0);

        cout << "Even: " << even << '\n';
        cout << "Odd: " << odd << '\n';
    }

    // ЗАДАЧА 6: Произведение на ненулевите цифри
    {
        cout << "\n========== ЗАДАЧА 6 ==========\n";
        long long n;
        cout << "Въведете положително число N: ";
        if (!(cin >> n) || n <= 0) return 1;

        unsigned long long product = 1;

        while (n > 0) {
            int digit = n % 10;

            if (digit != 0)
                product *= digit;

            n /= 10;
        }

        cout << product << '\n';
    }

    // ЗАДАЧА 7: Обърнато число
    {
        cout << "\n========== ЗАДАЧА 7 ==========\n";
        long long n;
        cout << "Въведете положително число N: ";
        if (!(cin >> n) || n <= 0) return 1;

        bool started = false;

        while (n > 0) {
            int digit = n % 10;

            if (digit != 0 || started) {
                cout << digit;
                started = true;
            }

            n /= 10;
        }

        cout << '\n';
    }

    // ЗАДАЧА 8: Най-голяма и най-малка цифра
    {
        cout << "\n========== ЗАДАЧА 8 ==========\n";
        long long n;
        cout << "Въведете неотрицателно число N: ";
        if (!(cin >> n) || n < 0) return 1;

        int largest = 0, smallest = 9;

        do {
            int digit = n % 10;

            if (digit > largest)
                largest = digit;

            if (digit < smallest)
                smallest = digit;

            n /= 10;
        } while (n > 0);

        cout << "Max: " << largest << '\n';
        cout << "Min: " << smallest << '\n';
    }

    // ЗАДАЧА 9: Брой срещания на цифра
    {
        cout << "\n========== ЗАДАЧА 9 ==========\n";
        long long n;
        int k;

        cout << "Въведете N и цифра K (0-9): ";
        if (!(cin >> n >> k) ||
            n < 0 || k < 0 || k > 9)
            return 1;

        int count = 0;

        do {
            if (n % 10 == k)
                ++count;
            n /= 10;
        } while (n > 0);

        cout << count << '\n';
    }

    // ЗАДАЧА 10: Делители на число
    {
        cout << "\n========== ЗАДАЧА 10 ==========\n";
        int n;
        cout << "Въведете положително число N: ";
        if (!(cin >> n) || n <= 0) return 1;

        long long d = 1;
        int count = 0;

        while (d <= n) {
            if (n % d == 0) {
                cout << d << ' ';
                ++count;
            }
            ++d;
        }

        cout << '\n' << count << '\n';
    }

    // ЗАДАЧА 11: Въвеждане до нула
    {
        cout << "\n========== ЗАДАЧА 11 ==========\n";
        cout << "Въвеждайте цели числа; 0 означава край: ";

        long long value, sum = 0;

        do {
            if (!(cin >> value)) return 1;

            if (value % 5 == 0)
                sum += value;

        } while (value != 0);

        cout << sum << '\n';
    }

    // ЗАДАЧА 12: Проверка на PIN код
    {
        cout << "\n========== ЗАДАЧА 12 ==========\n";

        int pin, attempts = 0;
        bool granted = false;

        do {
            cout << "Въведете PIN: ";
            if (!(cin >> pin)) return 1;

            ++attempts;

            if (pin == 2468)
                granted = true;

        } while (!granted && attempts < 3);

        if (granted)
            cout << "Access granted\n";
        else
            cout << "Card blocked\n";
    }

    // ЗАДАЧА 13: Меню на калкулатор
    {
        cout << "\n========== ЗАДАЧА 13 ==========\n";

        int operation;

        do {
            cout << "1 - Събиране\n";
            cout << "2 - Изваждане\n";
            cout << "3 - Умножение\n";
            cout << "4 - Целочислено деление\n";
            cout << "5 - Остатък при деление\n";
            cout << "0 - Край\n";
            cout << "Изберете операция: ";

            if (!(cin >> operation)) return 1;

            if (operation >= 1 && operation <= 5) {
                long long a, b;

                cout << "Въведете две цели числа: ";
                if (!(cin >> a >> b)) return 1;

                if ((operation == 4 || operation == 5) && b == 0) {
                    cout << "Грешка: деление на нула!\n";
                }
                else if (operation == 1) {
                    cout << a + b << '\n';
                }
                else if (operation == 2) {
                    cout << a - b << '\n';
                }
                else if (operation == 3) {
                    cout << a * b << '\n';
                }
                else if (operation == 4) {
                    if (a == LLONG_MIN && b == -1)
                        cout << "Резултатът е извън диапазона.\n";
                    else
                        cout << a / b << '\n';
                }
                else {
                    if (a == LLONG_MIN && b == -1)
                        cout << "Резултатът е извън диапазона.\n";
                    else
                        cout << a % b << '\n';
                }
            }
            else if (operation != 0) {
                cout << "Невалидна команда.\n";
            }

        } while (operation != 0);
    }

    // ЗАДАЧА 14: Валидиране на оценка
    {
        cout << "\n========== ЗАДАЧА 14 ==========\n";

        int grade, invalid = 0;

        do {
            cout << "Въведете оценка от 2 до 6: ";
            if (!(cin >> grade)) return 1;

            if (grade < 2 || grade > 6)
                ++invalid;

        } while (grade < 2 || grade > 6);

        cout << "Invalid attempts: " << invalid << '\n';
        cout << "Grade: " << grade << '\n';
    }

    // ЗАДАЧА 15: Банкова сметка
    {
        cout << "\n========== ЗАДАЧА 15 ==========\n";

        long long balance = 1000;
        int operation;

        do {
            cout << "1 - Внасяне\n";
            cout << "2 - Теглене\n";
            cout << "3 - Баланс\n";
            cout << "0 - Край\n";
            cout << "Изберете операция: ";

            if (!(cin >> operation)) return 1;

            if (operation == 1 || operation == 2) {
                long long amount;

                cout << "Въведете положителна сума: ";
                if (!(cin >> amount)) return 1;

                if (amount <= 0) {
                    cout << "Invalid operation\n";
                }
                else if (operation == 1) {
                    if (balance > LLONG_MAX - amount)
                        cout << "Сумата е прекалено голяма.\n";
                    else
                        balance += amount;
                }
                else if (amount > balance) {
                    cout << "Недостатъчен баланс.\n";
                }
                else {
                    balance -= amount;
                }
            }
            else if (operation == 3) {
                cout << balance << '\n';
            }
            else if (operation != 0) {
                cout << "Invalid operation\n";
            }

        } while (operation != 0);
    }

    // ЗАДАЧА 16: Числа до първото отрицателно
    {
        cout << "\n========== ЗАДАЧА 16 ==========\n";
        cout << "Въвеждайте числа до първото отрицателно: ";

        long long value, evenSum = 0;
        int divisible = 0;

        do {
            if (!(cin >> value)) return 1;

            if (value > 0) {
                if (value % 3 == 0)
                    ++divisible;

                if (value % 2 == 0)
                    evenSum += value;
            }

        } while (value >= 0);

        cout << "Divisible by 3: " << divisible << '\n';
        cout << "Even sum: " << evenSum << '\n';
    }

    // ЗАДАЧА 17: Познай числото
    {
        cout << "\n========== ЗАДАЧА 17 ==========\n";

        int guess, attempts = 0;

        do {
            cout << "Познайте числото: ";
            if (!(cin >> guess)) return 1;

            ++attempts;

            if (guess < 73)
                cout << "Higher\n";
            else if (guess > 73)
                cout << "Lower\n";

        } while (guess != 73);

        cout << "Attempts: " << attempts << '\n';
    }

    // ЗАДАЧА 18: Автомат за напитки
    {
        cout << "\n========== ЗАДАЧА 18 ==========\n";

        int total = 0, count = 0;

        cout << "Пускайте монети (5, 10, 20, 50, 100, 200):\n";

        while (total < 135) {
            int coin;

            if (!(cin >> coin)) return 1;

            if (coin == 5 || coin == 10 || coin == 20 ||
                coin == 50 || coin == 100 || coin == 200) {
                total += coin;
                ++count;
            }
            else {
                cout << "Невалидна монета.\n";
            }
        }

        cout << "Coins: " << count << '\n';
        cout << "Change: " << total - 135 << '\n';
    }

    // ЗАДАЧА 19: Парола с числови условия
    {
        cout << "\n========== ЗАДАЧА 19 ==========\n";

        int code, attempts = 0;
        bool valid;

        do {
            cout << "Въведете четирицифрен код: ";
            if (!(cin >> code)) return 1;

            ++attempts;
            valid = false;

            if (code >= 1000 && code <= 9999) {
                int first = code / 1000;
                int last = code % 10;
                int temp = code, sum = 0;

                while (temp > 0) {
                    sum += temp % 10;
                    temp /= 10;
                }

                valid = (sum % 3 == 0 &&
                         last % 2 == 0 &&
                         first != last);
            }

        } while (!valid);

        cout << "Attempts: " << attempts << '\n';
    }

    // ЗАДАЧА 20: Дигитален брояч
    {
        cout << "\n========== ЗАДАЧА 20 ==========\n";
        cout << "Въвеждайте положителни числа; 0 означава край: ";

        long long value;
        int display = 0;

        do {
            if (!(cin >> value)) return 1;

            if (value > 0)
                display = (display + value % 1000) % 1000;
            else if (value < 0)
                cout << "Въведете неотрицателно число.\n";

        } while (value != 0);

        cout << display << '\n';
    }

    // ЗАДАЧА 21: Просто число
    {
        cout << "\n========== ЗАДАЧА 21 ==========\n";

        long long n;
        cout << "Въведете N > 1: ";
        if (!(cin >> n) || n <= 1) return 1;

        long long divisor = 2;
        bool prime = true;

        while (divisor <= n / divisor) {
            if (n % divisor == 0) {
                prime = false;
                break;
            }
            ++divisor;
        }

        cout << (prime ? "PRIME" : "NOT PRIME") << '\n';
    }

    // ЗАДАЧА 22: Най-голям общ делител
    {
        cout << "\n========== ЗАДАЧА 22 ==========\n";

        long long a, b;
        cout << "Въведете две положителни числа A и B: ";

        if (!(cin >> a >> b) || a <= 0 || b <= 0)
            return 1;

        while (b != 0) {
            long long remainder = a % b;
            a = b;
            b = remainder;
        }

        cout << a << '\n';
    }

    // ЗАДАЧА 23: Палиндромно число
    {
        cout << "\n========== ЗАДАЧА 23 ==========\n";

        long long n;
        cout << "Въведете положително число N: ";
        if (!(cin >> n) || n <= 0) return 1;

        long long divisor = 1;

        while (divisor <= n / 10)
            divisor *= 10;

        bool palindrome = true;

        while (n > 0 && divisor > 0) {
            if (n / divisor != n % 10) {
                palindrome = false;
                break;
            }

            n = (n % divisor) / 10;
            divisor /= 100;
        }

        cout << (palindrome ? "YES" : "NO") << '\n';
    }

    // ЗАДАЧА 24: Най-голяма степен на 2
    {
        cout << "\n========== ЗАДАЧА 24 ==========\n";

        long long n;
        cout << "Въведете положително число N: ";
        if (!(cin >> n) || n <= 0) return 1;

        long long power = 1;

        while (power <= n / 2)
            power *= 2;

        cout << power << '\n';

        long long v = n;

        while (v > 1 && v % 2 == 0)
            v /= 2;

        cout << "N е степен на 2: "
             << (v == 1 ? "ДА" : "НЕ") << '\n';
    }

    // ЗАДАЧА 25: Разлагане на прости множители
    {
        cout << "\n========== ЗАДАЧА 25 ==========\n";

        long long n;
        cout << "Въведете N > 1: ";
        if (!(cin >> n) || n <= 1) return 1;

        long long divisor = 2;
        bool first = true;

        while (divisor <= n / divisor) {
            while (n % divisor == 0) {
                if (!first)
                    cout << ' ';

                cout << divisor;
                first = false;
                n /= divisor;
            }

            ++divisor;
        }

        if (n > 1) {
            if (!first)
                cout << ' ';

            cout << n;
        }

        cout << '\n';
    }

    // ЗАДАЧА 26: Число на Армстронг
    {
        cout << "\n========== ЗАДАЧА 26 ==========\n";

        long long n;
        cout << "Въведете положително число N: ";
        if (!(cin >> n) || n <= 0) return 1;

        int digits = 0;
        long long v = n;

        while (v > 0) {
            ++digits;
            v /= 10;
        }

        unsigned long long sum = 0;
        unsigned long long limit =
            static_cast<unsigned long long>(n);

        v = n;

        while (v > 0 && sum <= limit) {
            unsigned long long digit = v % 10;
            unsigned long long result = 1;
            int exp = digits;

            while (exp > 0) {
                if (digit != 0 && result > limit / digit) {
                    result = limit + 1;
                    break;
                }

                result *= digit;
                --exp;
            }

            if (result > limit - sum)
                sum = limit + 1;
            else
                sum += result;

            v /= 10;
        }

        cout << (sum == limit ? "YES" : "NO") << '\n';
    }

    // ЗАДАЧА 27: Умен светофар
    {
        cout << "\n========== ЗАДАЧА 27 ==========\n";
        cout << "Въвеждайте секунди T >= 0; -1 означава край:\n";

        long long t;

        do {
            if (!(cin >> t)) return 1;

            if (t >= 0) {
                int second = t % 90;

                if (second < 40)
                    cout << "RED " << 40 - second << '\n';
                else if (second < 45)
                    cout << "YELLOW " << 45 - second << '\n';
                else
                    cout << "GREEN " << 90 - second << '\n';
            }
            else if (t != -1) {
                cout << "Невалидно време.\n";
            }

        } while (t != -1);
    }

    // ЗАДАЧА 28: Разпределяне на поръчки
    {
        cout << "\n========== ЗАДАЧА 28 ==========\n";

        long long machines;
        cout << "Въведете броя машини K > 0: ";
        if (!(cin >> machines) || machines <= 0) return 1;

        long long order;
        int firstMachine = 0;

        cout << "Въвеждайте номера на поръчки; 0 означава край:\n";

        do {
            if (!(cin >> order)) return 1;

            if (order > 0) {
                long long machine =
                    (order - 1) % machines + 1;

                cout << machine << '\n';

                if (machine == 1)
                    ++firstMachine;
            }
            else if (order < 0) {
                cout << "Невалиден номер на поръчка.\n";
            }

        } while (order != 0);

        cout << "Поръчки към машина 1: "
             << firstMachine << '\n';
    }

    // ЗАДАЧА 29: Банкомат с минимален брой банкноти
    {
        cout << "\n========== ЗАДАЧА 29 ==========\n";

        long long amount;

        do {
            cout << "Въведете положителна сума, кратна на 10: ";
            if (!(cin >> amount)) return 1;

        } while (amount <= 0 || amount % 10 != 0);

        long long hundreds = amount / 100;
        amount %= 100;

        long long fifties = amount / 50;
        amount %= 50;

        long long twenties = amount / 20;
        amount %= 20;

        long long tens = amount / 10;

        cout << "100: " << hundreds << '\n';
        cout << "50: " << fifties << '\n';
        cout << "20: " << twenties << '\n';
        cout << "10: " << tens << '\n';
        cout << "Total: "
             << hundreds + fifties + twenties + tens << '\n';
    }

    // ЗАДАЧА 30: Цифров сейф
    {
        cout << "\n========== ЗАДАЧА 30 ==========\n";

        int code, attempts = 0;
        bool granted = false;

        do {
            cout << "Въведете шестцифрен код: ";
            if (!(cin >> code)) return 1;

            ++attempts;

            if (code >= 100000 && code <= 999999) {
                int first = code / 100000;
                int last = code % 10;
                int sum = 0, even = 0;
                int previous = -1;
                int v = code;

                bool adjacentDifferent = true;

                while (v > 0) {
                    int digit = v % 10;

                    sum += digit;

                    if (digit % 2 == 0)
                        ++even;

                    if (digit == previous)
                        adjacentDifferent = false;

                    previous = digit;
                    v /= 10;
                }

                granted = (sum % 9 == 0 &&
                           even >= 2 &&
                           first != last &&
                           adjacentDifferent);
            }

        } while (!granted && attempts < 5);

        if (granted) {
            cout << "ACCESS GRANTED\n";
            cout << "Attempts: " << attempts << '\n';
        }
        else {
            cout << "ACCESS DENIED\n";
        }
    }

    return 0;
}
