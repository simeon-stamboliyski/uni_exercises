
#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

int main() {
    // ЗАДАЧА 1: Числа в интервал
    {
        cout << "\n========== ЗАДАЧА 1 ==========\n";
        long long a, b, sum = 0;
        cout << "Въведете A и B (A <= B): ";
        if (!(cin >> a >> b) || a > b) return 1;

        for (long long i = a; ; ++i) {
            cout << i << ' ';
            sum += i;
            if (i == b) break;
        }

        cout << '\n' << sum << '\n';
    }

    // ЗАДАЧА 2: Числа с определен остатък
    {
        cout << "\n========== ЗАДАЧА 2 ==========\n";
        long long n, k, r, count = 0;
        cout << "Въведете N, K и R: ";

        if (!(cin >> n >> k >> r) ||
            n <= 0 || k <= 0 || r < 0 || r >= k)
            return 1;

        for (long long i = 1; i <= n; ++i) {
            if (i % k == r) {
                cout << i << ' ';
                ++count;
            }
        }

        cout << '\n' << count << '\n';
    }

    // ЗАДАЧА 3: Суми на квадрати и кубове
    {
        cout << "\n========== ЗАДАЧА 3 ==========\n";
        int n;
        long double squares = 0, cubes = 0;

        cout << "Въведете положително N: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (int i = 1; i <= n; ++i) {
            squares += (long double)i * i;
            cubes += (long double)i * i * i;
        }

        cout << fixed << setprecision(0);
        cout << squares << '\n' << cubes << '\n';
        cout << defaultfloat << setprecision(6);
    }

    // ЗАДАЧА 4: Факториел
    {
        cout << "\n========== ЗАДАЧА 4 ==========\n";
        int n;
        unsigned long long fact = 1;

        cout << "Въведете N (0-20): ";
        if (!(cin >> n) || n < 0 || n > 20)
            return 1;

        for (int i = 2; i <= n; ++i)
            fact *= i;

        cout << fact << '\n';
    }

    // ЗАДАЧА 5: Редица с редуващи се знаци
    {
        cout << "\n========== ЗАДАЧА 5 ==========\n";
        int n;
        long long sum = 0;

        cout << "Въведете положително N: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (long long i = 1; i <= n; ++i) {
            if (i % 2 != 0)
                sum += i;
            else
                sum -= i;
        }

        cout << sum << '\n';
    }

    // ЗАДАЧА 6: Средно аритметично
    {
        cout << "\n========== ЗАДАЧА 6 ==========\n";
        int n, positives = 0, negatives = 0;
        long double sum = 0;

        cout << "Въведете N, след това N цели числа: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (int i = 0; i < n; ++i) {
            long long v;
            if (!(cin >> v)) return 1;

            if (v > 0) {
                sum += v;
                ++positives;
            }

            if (v < 0)
                ++negatives;
        }

        if (positives == 0)
            cout << "No positive numbers\n";
        else
            cout << "Average: " << sum / positives << '\n';

        cout << "Negative: " << negatives << '\n';
    }

    // ЗАДАЧА 7: Степенуване без pow()
    {
        cout << "\n========== ЗАДАЧА 7 ==========\n";
        long double a, result = 1;
        int n;

        cout << "Въведете A и N (N >= 0): ";
        if (!(cin >> a >> n) || n < 0) return 1;

        for (int i = 0; i < n; ++i)
            result *= a;

        cout << result << '\n';
    }

    // ЗАДАЧА 8: Сума на дробна редица
    {
        cout << "\n========== ЗАДАЧА 8 ==========\n";
        int n;
        long double sum = 0;

        cout << "Въведете положително N: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (int i = 1; i <= n; ++i)
            sum += 1.0L / i;

        cout << fixed << setprecision(4)
             << sum << '\n';
        cout << defaultfloat << setprecision(6);
    }

    // ЗАДАЧА 9: Числа с точно три делителя
    {
        cout << "\n========== ЗАДАЧА 9 ==========\n";
        int n;

        cout << "Въведете положително N: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (long long i = 1; i <= n; ++i) {
            int divisors = 0;

            for (long long d = 1; d <= i; ++d) {
                if (i % d == 0)
                    ++divisors;
            }

            if (divisors == 3)
                cout << i << ' ';
        }

        cout << '\n';
    }

    // ЗАДАЧА 10: Прости числа в интервал
    {
        cout << "\n========== ЗАДАЧА 10 ==========\n";
        int a, b;

        cout << "Въведете A и B (2 <= A <= B): ";
        if (!(cin >> a >> b) || a < 2 || a > b)
            return 1;

        for (long long i = a; i <= b; ++i) {
            bool prime = true;

            for (long long d = 2; d <= i / d; ++d) {
                if (i % d == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime)
                cout << i << ' ';
        }

        cout << '\n';
    }

    // ЗАДАЧА 11: Съвършени числа
    {
        cout << "\n========== ЗАДАЧА 11 ==========\n";
        int n;

        cout << "Въведете положително N: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (long long i = 2; i <= n; ++i) {
            long long sum = 1;

            for (long long d = 2; d <= i / 2; ++d) {
                if (i % d == 0)
                    sum += d;
            }

            if (sum == i)
                cout << i << ' ';
        }

        cout << '\n';
    }

    // ЗАДАЧА 12: Делимост на сбора от цифрите
    {
        cout << "\n========== ЗАДАЧА 12 ==========\n";
        int n;

        cout << "Въведете положително N: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (long long i = 1; i <= n; ++i) {
            long long v = i;
            int sum = 0;

            while (v > 0) {
                sum += v % 10;
                v /= 10;
            }

            if (i % sum == 0)
                cout << i << ' ';
        }

        cout << '\n';
    }

    // ЗАДАЧА 13: НОД на N числа
    {
        cout << "\n========== ЗАДАЧА 13 ==========\n";
        int n;
        long long gcd = 0;

        cout << "Въведете N и N положителни числа: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (int i = 0; i < n; ++i) {
            long long v;
            if (!(cin >> v) || v <= 0) return 1;

            long long a = gcd;
            long long b = v;

            while (b != 0) {
                long long r = a % b;
                a = b;
                b = r;
            }

            gcd = a;
        }

        cout << gcd << '\n';
    }

    // ЗАДАЧА 14: Сума от факториели
    {
        cout << "\n========== ЗАДАЧА 14 ==========\n";
        int n;
        unsigned long long fact = 1, sum = 0;

        cout << "Въведете N (1-20): ";
        if (!(cin >> n) || n < 1 || n > 20)
            return 1;

        for (int i = 1; i <= n; ++i) {
            fact *= i;
            sum += fact;
        }

        cout << sum << '\n';
    }

    // ЗАДАЧА 15: Приближение на числото пи
    {
        cout << "\n========== ЗАДАЧА 15 ==========\n";
        int n;
        long double sum = 0;

        cout << "Въведете положително N: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (long long i = 0; i < n; ++i) {
            if (i % 2 == 0)
                sum += 1.0L / (2 * i + 1);
            else
                sum -= 1.0L / (2 * i + 1);
        }

        cout << fixed << setprecision(6);
        cout << 4 * sum << '\n';
        cout << defaultfloat << setprecision(6);
    }

    // ЗАДАЧА 16: Числа на Армстронг
    {
        cout << "\n========== ЗАДАЧА 16 ==========\n";
        int n;

        cout << "Въведете положително N: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (long long number = 1; number <= n; ++number) {
            int count = 0;
            long long v = number;

            while (v > 0) {
                ++count;
                v /= 10;
            }

            v = number;
            long long sum = 0;

            while (v > 0) {
                int digit = v % 10;
                long long p = 1;

                for (int j = 0; j < count; ++j)
                    p *= digit;

                sum += p;
                v /= 10;
            }

            if (sum == number)
                cout << number << ' ';
        }

        cout << '\n';
    }

    // ЗАДАЧА 17: Сума през определена стъпка
    {
        cout << "\n========== ЗАДАЧА 17 ==========\n";
        long long a, b, k, sum = 0;

        cout << "Въведете A, B и K: ";
        if (!(cin >> a >> b >> k) || a > b || k <= 0)
            return 1;

        for (long long i = a; i <= b; i += k) {
            cout << i << ' ';
            sum += i;
            if (k > b - i) break;
        }

        cout << "\nSum: " << sum << '\n';
    }

    // ЗАДАЧА 18: Сума на редуващи се дроби
    {
        cout << "\n========== ЗАДАЧА 18 ==========\n";
        int n;
        long double sum = 0;

        cout << "Въведете положително N: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (long long i = 1; i <= n; ++i) {
            long double term = (long double)i / (i + 1);

            if (i % 2 == 1)
                sum += term;
            else
                sum -= term;
        }

        cout << fixed << setprecision(4)
             << sum << '\n';
        cout << defaultfloat << setprecision(6);
    }

    // ЗАДАЧА 19: Фибоначи без масив
    {
        cout << "\n========== ЗАДАЧА 19 ==========\n";
        int n;

        cout << "Въведете N (1-93): ";
        if (!(cin >> n) || n < 1 || n > 93)
            return 1;

        unsigned long long a = 0, b = 1, next = 0;

        for (int i = 0; i < n; ++i) {
            cout << a << (i + 1 == n ? '\n' : ' ');

            if (i + 1 < n) {
                next = a + b;
                a = b;
                b = next;
            }
        }
    }

    // ЗАДАЧА 20: Геометрична прогресия
    {
        cout << "\n========== ЗАДАЧА 20 ==========\n";
        long double a, q, term, sum = 0;
        int n;

        cout << "Въведете A, Q и положително N: ";
        if (!(cin >> a >> q >> n) || n <= 0)
            return 1;

        term = a;

        for (int i = 0; i < n; ++i) {
            cout << term << ' ';
            sum += term;
            term *= q;
        }

        cout << "\nSum: " << sum << '\n';
    }

    // ЗАДАЧА 21: Сума на реципрочни квадрати
    {
        cout << "\n========== ЗАДАЧА 21 ==========\n";
        int n;
        long double sum = 0;

        cout << "Въведете положително N: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (long long i = 1; i <= n; ++i)
            sum += 1.0L / (i * i);

        cout << fixed << setprecision(5)
             << sum << '\n';
        cout << defaultfloat << setprecision(6);
    }

    // ЗАДАЧА 22: Температурен мониторинг
    {
        cout << "\n========== ЗАДАЧА 22 ==========\n";
        int n, below = 0, above = 0;
        long long previous = 0, maxIncrease = 0;

        cout << "Въведете брой дни и температурите: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (int i = 1; i <= n; ++i) {
            long long t;
            if (!(cin >> t)) return 1;

            if (t < 0) ++below;
            if (t > 25) ++above;

            if (i > 1 && t - previous > maxIncrease)
                maxIncrease = t - previous;

            previous = t;
        }

        cout << "Below zero: " << below << '\n';
        cout << "Above 25: " << above << '\n';
        cout << "Max increase: " << maxIncrease << '\n';
    }

    // ЗАДАЧА 23: Анализ на продажби
    {
        cout << "\n========== ЗАДАЧА 23 ==========\n";
        int n, above = 0, currentStreak = 0, longest = 0;
        long long total = 0;

        cout << "Въведете брой дни и дневните приходи: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (int i = 0; i < n; ++i) {
            long long revenue;
            if (!(cin >> revenue) || revenue < 0)
                return 1;

            total += revenue;

            if (revenue > 500)
                ++above;

            if (revenue >= 300)
                ++currentStreak;
            else
                currentStreak = 0;

            if (currentStreak > longest)
                longest = currentStreak;
        }

        cout << "Total: " << total << '\n';
        cout << "Above 500: " << above << '\n';
        cout << "Longest streak: " << longest << '\n';
    }

    // ЗАДАЧА 24: Спортен тракер
    {
        cout << "\n========== ЗАДАЧА 24 ==========\n";
        int n, reached = 0, bestDay = 0;
        long long total = 0, maxSteps = -1;

        cout << "Въведете брой дни и крачките за всеки ден: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (int i = 1; i <= n; ++i) {
            long long steps;
            if (!(cin >> steps) || steps < 0)
                return 1;

            total += steps;

            if (steps >= 10000)
                ++reached;

            if (steps > maxSteps) {
                maxSteps = steps;
                bestDay = i;
            }
        }

        cout << "Total: " << total << '\n';
        cout << "Goal reached: " << reached << '\n';
        cout << "Best day: " << bestDay << '\n';
    }

    // ЗАДАЧА 25: Най-голямо намаление на цена
    {
        cout << "\n========== ЗАДАЧА 25 ==========\n";
        int n, bestDay = 0;
        long long previous = 0, maxDrop = 0;

        cout << "Въведете брой дни и цените: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (int i = 1; i <= n; ++i) {
            long long price;
            if (!(cin >> price) || price < 0)
                return 1;

            if (i > 1 && previous - price > maxDrop) {
                maxDrop = previous - price;
                bestDay = i;
            }

            previous = price;
        }

        if (bestDay == 0) {
            cout << "No decrease\n";
        }
        else {
            cout << "Max decrease: " << maxDrop << '\n';
            cout << "Day: " << bestDay << '\n';
        }
    }

    // ЗАДАЧА 26: Еднаква и различна четност
    {
        cout << "\n========== ЗАДАЧА 26 ==========\n";
        int n, same = 0, different = 0;
        long long prev = 0;

        cout << "Въведете N и N цели числа: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (int i = 0; i < n; ++i) {
            long long v;
            if (!(cin >> v)) return 1;

            if (i > 0) {
                if ((prev % 2 == 0) == (v % 2 == 0))
                    ++same;
                else
                    ++different;
            }

            prev = v;
        }

        cout << "Same parity: " << same << '\n';
        cout << "Different parity: " << different << '\n';
    }

    // ЗАДАЧА 27: Десетично към двоично
    {
        cout << "\n========== ЗАДАЧА 27 ==========\n";
        long long n;
        unsigned long long binary = 0, position = 1;

        cout << "Въведете N (0-1000000): ";
        if (!(cin >> n) || n < 0 || n > 1000000)
            return 1;

        while (n > 0) {
            binary += (n % 2) * position;
            n /= 2;

            if (n > 0)
                position *= 10;
        }

        cout << binary << '\n';
    }

    // ЗАДАЧА 28: Периодичен робот
    {
        cout << "\n========== ЗАДАЧА 28 ==========\n";
        long long n, position = 0;

        cout << "Въведете положителен брой стъпки N: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (long long i = 1; i <= n; ++i) {
            switch (i % 3) {
                case 1:
                    position += 3;
                    break;
                case 2:
                    position -= 1;
                    break;
                case 0:
                    position += 2;
                    break;
            }
        }

        cout << "Position: " << position << '\n';
    }

    // ЗАДАЧА 29: Достигане на целева сума
    {
        cout << "\n========== ЗАДАЧА 29 ==========\n";
        long long target, saved = 0;
        long long deposit = 10, weeks = 0;

        cout << "Въведете желаната сума S: ";
        if (!(cin >> target) || target <= 0) return 1;

        while (saved < target) {
            saved += deposit;
            deposit += 5;
            ++weeks;
        }

        cout << "Weeks: " << weeks << '\n';
        cout << "Saved: " << saved << '\n';
    }

    // ЗАДАЧА 30: Последователност на Колац
    {
        cout << "\n========== ЗАДАЧА 30 ==========\n";
        long long n, steps = 0, maxValue;

        cout << "Въведете положително N: ";
        if (!(cin >> n) || n <= 0) return 1;

        maxValue = n;
        cout << n;

        bool overflow = false;

        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            }
            else {
                if (n > (LLONG_MAX - 1) / 3) {
                    overflow = true;
                    break;
                }

                n = 3 * n + 1;
            }

            ++steps;

            if (n > maxValue)
                maxValue = n;

            cout << ' ' << n;
        }

        cout << '\n';

        if (overflow) {
            cout << "Стойността надвишава диапазона на long long.\n";
        }
        else {
            cout << "Steps: " << steps << '\n';
            cout << "Max: " << maxValue << '\n';
        }
    }

    // ЗАДАЧА 31: Проверка на числова последователност
    {
        cout << "\n========== ЗАДАЧА 31 ==========\n";
        int n;
        long long prev = 0;

        bool increasing = true;
        bool decreasing = true;
        bool equal = true;

        cout << "Въведете N и N цели числа: ";
        if (!(cin >> n) || n <= 0) return 1;

        for (int i = 0; i < n; ++i) {
            long long v;
            if (!(cin >> v)) return 1;

            if (i > 0) {
                if (v <= prev)
                    increasing = false;

                if (v >= prev)
                    decreasing = false;

                if (v != prev)
                    equal = false;
            }

            prev = v;
        }

        if (equal)
            cout << "Equal\n";
        else if (increasing)
            cout << "Increasing\n";
        else if (decreasing)
            cout << "Decreasing\n";
        else
            cout << "Neither\n";
    }

    return 0;
}
