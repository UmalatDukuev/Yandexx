#include <iostream>

int main()
{
    int k1 = 0, k2 = 0, p1 = 0, p2 = 0, n1 = 0, n2 = 0, m = 0, N = 0, a = 0;
    std::cin >> k1 >> m >> k2 >> p2 >> n2;
    N = m * (p2 - 1) + n2;

    if (k2 % N == 0) // кол-во квартир на этаже
        a = k2 / N;
    else
        a = (k2 / N) + 1;

    if (k1 % (m * a) == 0) // номер искомого подъезда 
        p1 = (k1 / (m * a));
    else
        p1 = (k1 / (m * a)) + 1;

    int b = k1 % (a * m);
    if (b % a == 0) // номер искомого этажа
        n1 = b / a;
    else
        n1 = (b / a) + 1;

    std::cout << p1 << " " << n1 << std::endl;
    return 0;
}

