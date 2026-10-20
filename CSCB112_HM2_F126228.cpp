#include <iostream>
#include <cmath>
#include <algorithm>

double distToLine(double px, double py, double x1, double y1, double x2, double y2) {
    double A = y1 - y2;
    double B = x2 - x1;
    double C = x1 * y2 - x2 * y1;
    return std::abs(A * px + B * py + C) / std::sqrt(A * A + B * B);
}

int main() {

    std::cout << "========== ЗАДАЧА 1 ==========\n";
    bool z1_b;
    char z1_c;
    int z1_i;
    float z1_f;
    double z1_d;

    std::cout << "Въведете char: ";
    std::cin >> z1_c;
    std::cout << "Въведете int: ";
    std::cin >> z1_i;
    std::cout << "Въведете float: ";
    std::cin >> z1_f;
    std::cout << "Въведете double: ";
    std::cin >> z1_d;
    std::cout << "Въведете bool (0 или 1): ";
    std::cin >> z1_b;

    std::cout << "Резултати:\n";
    std::cout << "char: " << z1_c << ", int: " << z1_i << ", float: " << z1_f 
              << ", double: " << z1_d << ", bool: " << std::boolalpha << z1_b << "\n\n";


    std::cout << "========== ЗАДАЧА 2 ==========\n";
    int z2_a, z2_b;
    std::cout << "Въведете две цели числа: ";
    std::cin >> z2_a >> z2_b;

    std::cout << z2_a << " + " << z2_b << " = " << (z2_a + z2_b) << "\n";
    std::cout << z2_a << " - " << z2_b << " = " << (z2_a - z2_b) << "\n";
    std::cout << z2_a << " * " << z2_b << " = " << (z2_a * z2_b) << "\n";
    if (z2_b != 0) {
        std::cout << z2_a << " / " << z2_b << " = " << (z2_a / z2_b) << "\n";
        std::cout << z2_a << " % " << z2_b << " = " << (z2_a % z2_b) << "\n\n";
    } else {
        std::cout << "Деление на 0 не е позволено!\n\n";
    }


    std::cout << "========== ЗАДАЧА 3 ==========\n";
    int z3_a, z3_b;
    std::cout << "Въведете променлива a и стъпка b: ";
    std::cin >> z3_a >> z3_b;

    z3_a += z3_b;
    std::cout << "След a += b: " << z3_a << "\n";
    z3_a -= z3_b;
    std::cout << "След a -= b: " << z3_a << "\n";
    z3_a *= z3_b;
    std::cout << "След a *= b: " << z3_a << "\n";
    if (z3_b != 0) {
        z3_a /= z3_b;
        std::cout << "След a /= b: " << z3_a << "\n";
        z3_a %= z3_b;
        std::cout << "След a %= b: " << z3_a << "\n\n";
    }


    std::cout << "========== ЗАДАЧА 4 ==========\n";
    int z4_a, z4_b;
    std::cout << "Въведете две цели числа за размяна: ";
    std::cin >> z4_a >> z4_b;

    std::cout << "Преди размяната: a = " << z4_a << ", b = " << z4_b << "\n";
    z4_a = z4_a ^ z4_b;
    z4_b = z4_a ^ z4_b;
    z4_a = z4_a ^ z4_b;
    std::cout << "След размяната: a = " << z4_a << ", b = " << z4_b << "\n\n";


    std::cout << "========== ЗАДАЧА 5 ==========\n";
    std::cout << "Побитовите операции се използват за директна манипулация на битове в паметта,\n"
              << "битови маски (флагове), управление на хардуерни регистри и криптографски алгоритми.\n\n";


    std::cout << "========== ЗАДАЧА 6 ==========\n";
    double x1, y1, x2, y2, x3, y3;
    std::cout << "Въведете координати на връх A (x1 y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Въведете координати на връх B (x2 y2): ";
    std::cin >> x2 >> y2;
    std::cout << "Въведете координати на връх C (x3 y3): ";
    std::cin >> x3 >> y3;

    double mx = (x1 + x2 + x3) / 3.0;
    double my = (y1 + y2 + y3) / 3.0;
    std::cout << "Координати на медицентъра: M(" << mx << ", " << my << ")\n\n";


    std::cout << "========== ЗАДАЧА 7 ==========\n";
    double z7_x, z7_y;
    std::cout << "Въведете точка T (x y): ";
    std::cin >> z7_x >> z7_y;

    std::cout << "а) До страни x=0, x=1, y=0, y=1:\n";
    std::cout << "   до x=0: " << std::abs(z7_x) << ", до x=1: " << std::abs(z7_x - 1.0)
              << ", до y=0: " << std::abs(z7_y) << ", до y=1: " << std::abs(z7_y - 1.0) << "\n";

    std::cout << "б) До страни x=1, x=-1, y=1, y=-1:\n";
    std::cout << "   до x=1: " << std::abs(z7_x - 1.0) << ", до x=-1: " << std::abs(z7_x + 1.0)
              << ", до y=1: " << std::abs(z7_y - 1.0) << ", до y=-1: " << std::abs(z7_y + 1.0) << "\n\n";


    std::cout << "========== ЗАДАЧА 8 ==========\n";
    double z8_x, z8_y;
    std::cout << "Въведете точка T (x y): ";
    std::cin >> z8_x >> z8_y;

    std::cout << "а) Върхове (0,0), (1,0), (0,1):\n";
    std::cout << "   до AB: " << distToLine(z8_x, z8_y, 0, 0, 1, 0)
              << ", до BC: " << distToLine(z8_x, z8_y, 1, 0, 0, 1)
              << ", до CA: " << distToLine(z8_x, z8_y, 0, 1, 0, 0) << "\n";

    std::cout << "б) Върхове (0,0), (1,0), (1,1):\n";
    std::cout << "   до AB: " << distToLine(z8_x, z8_y, 0, 0, 1, 0)
              << ", до BC: " << distToLine(z8_x, z8_y, 1, 0, 1, 1)
              << ", до CA: " << distToLine(z8_x, z8_y, 1, 1, 0, 0) << "\n";

    std::cout << "в) Върхове (-1,0), (0,0), (1,1):\n";
    std::cout << "   до AB: " << distToLine(z8_x, z8_y, -1, 0, 0, 0)
              << ", до BC: " << distToLine(z8_x, z8_y, 0, 0, 1, 1)
              << ", до CA: " << distToLine(z8_x, z8_y, 1, 1, -1, 0) << "\n\n";


    std::cout << "========== ЗАДАЧА 9 ==========\n";
    double alphaDeg, betaDeg, gammaDeg, R;
    std::cout << "Въведете трите ъгъла (в градуси): ";
    std::cin >> alphaDeg >> betaDeg >> gammaDeg;
    std::cout << "Въведете радиуса R: ";
    std::cin >> R;

    const double PI = std::acos(-1.0);
    double aRad = alphaDeg * PI / 180.0;
    double bRad = betaDeg * PI / 180.0;
    double cRad = gammaDeg * PI / 180.0;

    double area = 2.0 * R * R * std::sin(aRad) * std::sin(bRad) * std::sin(cRad);
    std::cout << "Лицето на триъгълника е: " << area << "\n\n";


    std::cout << "========== ЗАДАЧА 10 ==========\n";
    double m1 = 600.0, p1 = 0.56;
    double m2 = 800.0, p2 = 0.35;
    double resPercent = ((m1 * p1 + m2 * p2) / (m1 + m2)) * 100.0;
    std::cout << "Концентрация на сместа: " << resPercent << "%\n\n";


    std::cout << "========== ЗАДАЧА 11 ==========\n";
    unsigned int z11_x, z11_y;
    int bit_i, bit_j;
    std::cout << "Въведете x, y, позиция i, позиция j: ";
    std::cin >> z11_x >> z11_y >> bit_i >> bit_j;

    int valX = (z11_x >> bit_i) & 1;
    int valY = (z11_y >> bit_j) & 1;
    bool areSame = (valX == valY);
    std::cout << "Еднакви ли са битовете: " << std::boolalpha << areSame << "\n\n";


    std::cout << "========== ЗАДАЧА 12 ==========\n";
    unsigned int z12_num;
    int swap_i, swap_j;
    std::cout << "Въведете беззнаково число и позиции i и j: ";
    std::cin >> z12_num >> swap_i >> swap_j;

    unsigned int b_i = (z12_num >> swap_i) & 1;
    unsigned int b_j = (z12_num >> swap_j) & 1;
    unsigned int diff = b_i ^ b_j;
    z12_num ^= ((diff << swap_i) | (diff << swap_j));
    std::cout << "Числото след размяна на битовете: " << z12_num << "\n\n";


    std::cout << "========== ЗАДАЧА 13 ==========\n";
    double z13_a, z13_b, z13_c;
    std::cout << "Въведете a, b, c: ";
    std::cin >> z13_a >> z13_b >> z13_c;

    double res13_a = std::min(z13_a + z13_b + z13_c, z13_a * z13_b * z13_c) + 1.5;
    double v1 = (z13_a * z13_a) - (z13_b * z13_b * z13_b) + z13_c;
    double v2 = z13_a - 4.5 * z13_b;
    double v3 = 1.5 * z13_a + 3.5 * z13_b - 8.0 * z13_c;
    double res13_b = std::max({v1, v2, v3}) - 7.5;

    std::cout << "Резултат а): " << res13_a << "\n";
    std::cout << "Резултат б): " << res13_b << "\n\n";


    std::cout << "========== ЗАДАЧА 14 ==========\n";
    double z14_a, z14_b;
    std::cout << "Въведете две неравни цели числа: ";
    std::cin >> z14_a >> z14_b;

    if (z14_a < z14_b) {
        z14_a *= 3.0;
        z14_b /= 5.0;
    } else {
        z14_b *= 3.0;
        z14_a /= 5.0;
    }
    std::cout << "Резултат: a = " << z14_a << ", b = " << z14_b << "\n\n";


    std::cout << "========== ЗАДАЧА 15 ==========\n";
    double z15_a, z15_b, z15_c;
    std::cout << "Въведете три числа a, b, c: ";
    std::cin >> z15_a >> z15_b >> z15_c;

    bool inOrder = (z15_a <= z15_b) && (z15_b <= z15_c);
    double notInOrder = !inOrder;

    z15_a = inOrder * std::abs(z15_a) + notInOrder * (2.0 * z15_a);
    z15_b = inOrder * std::abs(z15_b) + notInOrder * (2.0 * z15_b);
    z15_c = inOrder * std::abs(z15_c) + notInOrder * (2.0 * z15_c);

    std::cout << "Резултат: a = " << z15_a << ", b = " << z15_b << ", c = " << z15_c << "\n";

    return 0;
}