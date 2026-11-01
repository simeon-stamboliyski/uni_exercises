
#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main() {
    // ЗАДАЧА 1: Тарифа за електроенергия
    {
        cout << "\n========== ЗАДАЧА 1: ЕЛЕКТРОЕНЕРГИЯ ==========\n";
        double kwh, price;
        cout << "Въведете консумираните kWh: ";
        if (!(cin >> kwh) || kwh < 0) return 1;

        if (kwh <= 100)
            price = kwh * 0.20;
        else if (kwh <= 200)
            price = 100 * 0.20 + (kwh - 100) * 0.25;
        else
            price = 100 * 0.20 + 100 * 0.25 + (kwh - 200) * 0.30;

        cout << fixed << setprecision(2) << price << '\n';
        cout << defaultfloat << setprecision(6);
    }

    // ЗАДАЧА 2: Валидност и вид на триъгълник
    {
        cout << "\n========== ЗАДАЧА 2: ТРИЪГЪЛНИК ==========\n";
        double a, b, c;
        cout << "Въведете три страни: ";
        if (!(cin >> a >> b >> c)) return 1;

        if (a <= 0 || b <= 0 || c <= 0 ||
            a + b <= c || a + c <= b || b + c <= a)
            cout << "INVALID\n";
        else if (a == b && b == c)
            cout << "EQUILATERAL\n";
        else if (a == b || a == c || b == c)
            cout << "ISOSCELES\n";
        else
            cout << "SCALENE\n";
    }

    // ЗАДАЧА 3: Високосна година
    {
        cout << "\n========== ЗАДАЧА 3: ВИСОКОСНА ГОДИНА ==========\n";
        int y;
        cout << "Въведете година (1-9999): ";
        if (!(cin >> y)) return 1;

        if (y < 1 || y > 9999)
            cout << "INVALID\n";
        else if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            cout << "LEAP\n";
        else
            cout << "COMMON\n";
    }

    // ЗАДАЧА 4: Такса за доставка
    {
        cout << "\n========== ЗАДАЧА 4: ДОСТАВКА ==========\n";
        double p, d, fee;
        cout << "Въведете цена на поръчката и разстояние: ";
        if (!(cin >> p >> d) || p < 0 || d < 0) return 1;

        if (p >= 100) fee = 0;
        else if (d <= 5) fee = 4;
        else if (d <= 20) fee = 7;
        else fee = 12;

        cout << fixed << setprecision(2) << p + fee << '\n';
        cout << defaultfloat << setprecision(6);
    }

    // ЗАДАЧА 5: Подреждане на три числа
    {
        cout << "\n========== ЗАДАЧА 5: ПОДРЕЖДАНЕ ==========\n";
        long long a, b, c, t;
        cout << "Въведете три цели числа: ";
        if (!(cin >> a >> b >> c)) return 1;

        if (a > b) { t = a; a = b; b = t; }
        if (a > c) { t = a; a = c; c = t; }
        if (b > c) { t = b; b = c; c = t; }

        cout << a << ' ' << b << ' ' << c << '\n';
    }

    // ЗАДАЧА 6: Точка в координатната равнина
    {
        cout << "\n========== ЗАДАЧА 6: КООРДИНАТИ ==========\n";
        double x, y;
        cout << "Въведете координати x и y: ";
        if (!(cin >> x >> y)) return 1;

        if (x == 0 && y == 0) cout << "ORIGIN\n";
        else if (y == 0) cout << "X_AXIS\n";
        else if (x == 0) cout << "Y_AXIS\n";
        else if (x > 0 && y > 0) cout << "1\n";
        else if (x < 0 && y > 0) cout << "2\n";
        else if (x < 0 && y < 0) cout << "3\n";
        else cout << "4\n";
    }

    // ЗАДАЧА 7: Календарен сезон
    {
        cout << "\n========== ЗАДАЧА 7: СЕЗОН ==========\n";
        int m;
        cout << "Въведете номер на месец (1-12): ";
        if (!(cin >> m)) return 1;

        switch (m) {
            case 12: case 1: case 2:
                cout << "WINTER\n"; break;
            case 3: case 4: case 5:
                cout << "SPRING\n"; break;
            case 6: case 7: case 8:
                cout << "SUMMER\n"; break;
            case 9: case 10: case 11:
                cout << "AUTUMN\n"; break;
            default:
                cout << "INVALID\n";
        }
    }

    // ЗАДАЧА 8: Числов калкулатор
    {
        cout << "\n========== ЗАДАЧА 8: КАЛКУЛАТОР ==========\n";
        long long a, b;
        int op;
        cout << "Въведете a, b и код на операция (1-5): ";
        if (!(cin >> a >> b >> op)) return 1;

        switch (op) {
            case 1:
                cout << a + b << '\n';
                break;
            case 2:
                cout << a - b << '\n';
                break;
            case 3:
                cout << a * b << '\n';
                break;
            case 4:
                if (b == 0)
                    cout << "Деление на нула!\n";
                else if (a == LLONG_MIN && b == -1)
                    cout << "Препълване!\n";
                else
                    cout << a / b << '\n';
                break;
            case 5:
                if (b == 0)
                    cout << "Деление на нула!\n";
                else if (a == LLONG_MIN && b == -1)
                    cout << "Препълване!\n";
                else
                    cout << a % b << '\n';
                break;
            default:
                cout << "INVALID\n";
        }
    }

    // ЗАДАЧА 9: Цена на билет
    {
        cout << "\n========== ЗАДАЧА 9: БИЛЕТИ ==========\n";
        int code, n, unitPrice = 0;
        cout << "Въведете код (1-3) и брой билети: ";
        if (!(cin >> code >> n)) return 1;

        switch (code) {
            case 1: unitPrice = 12; break;
            case 2: unitPrice = 8; break;
            case 3: unitPrice = 25; break;
            default: break;
        }

        if (n <= 0 || unitPrice == 0)
            cout << "INVALID\n";
        else
            cout << 1LL * unitPrice * n << '\n';
    }

    // ЗАДАЧА 10: Брой дни в месец
    {
        cout << "\n========== ЗАДАЧА 10: ДНИ В МЕСЕЦ ==========\n";
        int m, y, days = 0;
        cout << "Въведете месец и година: ";
        if (!(cin >> m >> y)) return 1;

        if (y < 1 || y > 9999) {
            cout << "INVALID\n";
        } else {
            switch (m) {
                case 1: case 3: case 5: case 7:
                case 8: case 10: case 12:
                    days = 31;
                    break;
                case 4: case 6: case 9: case 11:
                    days = 30;
                    break;
                case 2:
                    days = (y % 400 == 0 ||
                            (y % 4 == 0 && y % 100 != 0)) ? 29 : 28;
                    break;
                default:
                    break;
            }

            if (days == 0)
                cout << "INVALID\n";
            else
                cout << days << '\n';
        }
    }

    // ЗАДАЧА 11: Преобразуване на мерни единици
    {
        cout << "\n========== ЗАДАЧА 11: МЕРНИ ЕДИНИЦИ ==========\n";
        int code;
        double x, result = 0;
        cout << "Въведете код (1-4) и стойност: ";
        if (!(cin >> code >> x)) return 1;

        switch (code) {
            case 1: result = x * 1000; break;
            case 2: result = x * 1000; break;
            case 3: result = x * 3600; break;
            case 4: result = x * 9.0 / 5.0 + 32; break;
            default: break;
        }

        if (code < 1 || code > 4) {
            cout << "INVALID\n";
        } else {
            cout << fixed << setprecision(2) << result << '\n';
            cout << defaultfloat << setprecision(6);
        }
    }

    // ЗАДАЧА 12: Меню за банкови операции
    {
        cout << "\n========== ЗАДАЧА 12: БАНКА ==========\n";
        double balance, amount;
        int code;
        cout << "Въведете начален баланс и код (1-3): ";
        if (!(cin >> balance >> code)) return 1;

        if (balance < 0) {
            cout << "INVALID\n";
        } else {
            switch (code) {
                case 1:
                    cout << "Въведете сума за внасяне: ";
                    if (!(cin >> amount)) return 1;

                    if (amount < 0)
                        cout << "INVALID\n";
                    else
                        cout << balance + amount << '\n';
                    break;
                case 2:
                    cout << "Въведете сума за теглене: ";
                    if (!(cin >> amount)) return 1;

                    if (amount < 0 || amount > balance)
                        cout << "INVALID\n";
                    else
                        cout << balance - amount << '\n';
                    break;
                case 3:
                    cout << balance << '\n';
                    break;
                default:
                    cout << "INVALID\n";
            }
        }
    }

    // ЗАДАЧА 13: Сума на кратните на k
    {
        cout << "\n========== ЗАДАЧА 13: КРАТНИ НА K ==========\n";
        int n, k, count = 0;
        long long sum = 0;

        cout << "Въведете N (1-100000) и k > 0: ";
        if (!(cin >> n >> k) ||
            n < 1 || n > 100000 || k <= 0)
            return 1;

        for (int i = 1; i <= n; ++i) {
            if (i % k == 0) {
                sum += i;
                ++count;
            }
        }

        cout << sum << ' ' << count << '\n';
    }

    // ЗАДАЧА 14: Сума на цифрите и брой четни цифри
    {
        cout << "\n========== ЗАДАЧА 14: ЦИФРИ ==========\n";
        long long n;
        cout << "Въведете неотрицателно цяло число: ";
        if (!(cin >> n) || n < 0) return 1;

        int sum = 0, even = (n == 0 ? 1 : 0);

        while (n > 0) {
            int digit = n % 10;
            sum += digit;

            if (digit % 2 == 0)
                ++even;

            n /= 10;
        }

        cout << sum << ' ' << even << '\n';
    }

    // ЗАДАЧА 15: Въвеждане до нула
    {
        cout << "\n========== ЗАДАЧА 15: ЧИСЛА ДО НУЛА ==========\n";
        cout << "Въвеждайте цели числа, завършете с 0: ";

        long long x, negativeSum = 0;
        int positiveCount = 0;

        do {
            if (!(cin >> x)) return 1;

            if (x > 0)
                ++positiveCount;
            else if (x < 0)
                negativeSum += x;

        } while (x != 0);

        cout << positiveCount << ' ' << negativeSum << '\n';
    }

    // ЗАДАЧА 16: НОД чрез Евклид
    {
        cout << "\n========== ЗАДАЧА 16: НОД ==========\n";
        long long a, b;
        cout << "Въведете две положителни числа: ";
        if (!(cin >> a >> b) || a <= 0 || b <= 0)
            return 1;

        while (b != 0) {
            long long remainder = a % b;
            a = b;
            b = remainder;
        }

        cout << a << '\n';
    }

    // ЗАДАЧА 17: Първо достигане на цел
    {
        cout << "\n========== ЗАДАЧА 17: СПЕСТЯВАНЕ ==========\n";
        long long target, saved = 0, deposit = 10, weeks = 0;
        cout << "Въведете целевата сума: ";
        if (!(cin >> target) || target <= 0) return 1;

        while (saved < target) {
            saved += deposit;
            deposit += 5;
            ++weeks;
        }

        cout << weeks << ' ' << saved << '\n';
    }

    // ЗАДАЧА 18: Фибоначи без масиви
    {
        cout << "\n========== ЗАДАЧА 18: ФИБОНАЧИ ==========\n";
        int n;
        cout << "Въведете N (1-90): ";
        if (!(cin >> n) || n < 1 || n > 90)
            return 1;

        unsigned long long a = 0, b = 1;

        for (int i = 0; i < n; ++i) {
            if (i != 0)
                cout << ' ';

            cout << a;

            unsigned long long next = a + b;
            a = b;
            b = next;
        }

        cout << '\n';
    }

    // ЗАДАЧА 19: Таблица за умножение
    {
        cout << "\n========== ЗАДАЧА 19: ТАБЛИЦА ==========\n";
        int n;
        cout << "Въведете N (1-12): ";
        if (!(cin >> n) || n < 1 || n > 12)
            return 1;

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (j > 1)
                    cout << ' ';

                cout << i * j;
            }

            cout << '\n';
        }
    }

    // ЗАДАЧА 20: Числов триъгълник
    {
        cout << "\n========== ЗАДАЧА 20: ЧИСЛОВ ТРИЪГЪЛНИК ==========\n";
        int n;
        cout << "Въведете N (1-15): ";
        if (!(cin >> n) || n < 1 || n > 15)
            return 1;

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                if (j > 1)
                    cout << ' ';

                cout << j;
            }

            cout << '\n';
        }
    }

    // ЗАДАЧА 21: Прости числа в интервал
    {
        cout << "\n========== ЗАДАЧА 21: ПРОСТИ ЧИСЛА ==========\n";
        int a, b;
        cout << "Въведете A, B (2 <= A <= B <= 10000): ";

        if (!(cin >> a >> b) ||
            a < 2 || a > b || b > 10000)
            return 1;

        bool first = true;

        for (int number = a; number <= b; ++number) {
            bool prime = true;

            for (int d = 2; d <= number / d; ++d) {
                if (number % d == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime) {
                if (!first)
                    cout << ' ';

                cout << number;
                first = false;
            }
        }

        cout << '\n';
    }

    // ЗАДАЧА 22: Двойки с дадена сума
    {
        cout << "\n========== ЗАДАЧА 22: ДВОЙКИ ==========\n";
        int n, s;
        cout << "Въведете N (1-100) и S: ";
        if (!(cin >> n >> s) || n < 1 || n > 100)
            return 1;

        for (int a = 1; a <= n; ++a) {
            for (int b = a + 1; b <= n; ++b) {
                if (a + b == s)
                    cout << a << ' ' << b << '\n';
            }
        }
    }

    // ЗАДАЧА 23: Числова шахматна дъска
    {
        cout << "\n========== ЗАДАЧА 23: ШАХМАТНА ДЪСКА ==========\n";
        int n;
        cout << "Въведете N (1-20): ";
        if (!(cin >> n) || n < 1 || n > 20)
            return 1;

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (j > 1)
                    cout << ' ';

                cout << (i + j) % 2;
            }

            cout << '\n';
        }
    }

    // ЗАДАЧА 24: Питагорови тройки
    {
        cout << "\n========== ЗАДАЧА 24: ПИТАГОРОВИ ТРОЙКИ ==========\n";
        int n;
        cout << "Въведете N (5-100): ";
        if (!(cin >> n) || n < 5 || n > 100)
            return 1;

        for (int a = 1; a <= n; ++a) {
            for (int b = a + 1; b <= n; ++b) {
                for (int c = b + 1; c <= n; ++c) {
                    if (a * a + b * b == c * c)
                        cout << a << ' ' << b << ' ' << c << '\n';
                }
            }
        }
    }

    // ЗАДАЧА 25: Сума на квадратите
    {
        cout << "\n========== ЗАДАЧА 25: СУМА НА КВАДРАТИ ==========\n";
        int n;
        cout << "Въведете N (1-1000): ";
        if (!(cin >> n) || n < 1 || n > 1000)
            return 1;

        long long sum = 0;

        for (long long k = 1; k <= n; ++k)
            sum += k * k;

        cout << sum << '\n';
    }

    // ЗАДАЧА 26: Редуващи се знаци
    {
        cout << "\n========== ЗАДАЧА 26: РЕДУВАЩИ СЕ ЗНАЦИ ==========\n";
        int n;
        cout << "Въведете N (1-100000): ";
        if (!(cin >> n) || n < 1 || n > 100000)
            return 1;

        long long sum = 0;

        for (long long k = 1; k <= n; ++k) {
            if (k % 2 == 1)
                sum += k;
            else
                sum -= k;
        }

        cout << sum << '\n';
    }

    // ЗАДАЧА 27: Хармонична сума
    {
        cout << "\n========== ЗАДАЧА 27: ХАРМОНИЧНА СУМА ==========\n";
        int n;
        cout << "Въведете N (1-100000): ";
        if (!(cin >> n) || n < 1 || n > 100000)
            return 1;

        double sum = 0;

        for (int k = 1; k <= n; ++k)
            sum += 1.0 / k;

        cout << fixed << setprecision(6) << sum << '\n';
        cout << defaultfloat << setprecision(6);
    }

    // ЗАДАЧА 28: Дробен ред: сума на k / (k + 1)
    {
        cout << "\n========== ЗАДАЧА 28: ДРОБЕН РЕД ==========\n";
        int n;
        cout << "Въведете N (1-100000): ";
        if (!(cin >> n) || n < 1 || n > 100000)
            return 1;

        double sum = 0;

        for (int k = 1; k <= n; ++k)
            sum += static_cast<double>(k) / (k + 1);

        cout << fixed << setprecision(6) << sum << '\n';
        cout << defaultfloat << setprecision(6);
    }

    // ЗАДАЧА 29: Двойна сума: сума на (i + j)
    {
        cout << "\n========== ЗАДАЧА 29: ДВОЙНА СУМА ==========\n";
        int n;
        cout << "Въведете N (1-100): ";
        if (!(cin >> n) || n < 1 || n > 100)
            return 1;

        long long sum = 0;

        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                sum += i + j;

        cout << sum << '\n';
    }

    // ЗАДАЧА 30: Триъгълна двойна сума: сума на i*j
    {
        cout << "\n========== ЗАДАЧА 30: ТРИЪГЪЛНА СУМА ==========\n";
        int n;
        cout << "Въведете N (1-100): ";
        if (!(cin >> n) || n < 1 || n > 100)
            return 1;

        long long sum = 0;

        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= i; ++j)
                sum += i * j;

        cout << sum << '\n';
    }
    
    return 0;
}
