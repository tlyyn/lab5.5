#include <iostream>
#include <cmath>         
using namespace std;

void Vsum(int a, int b, int c, int m, int n, int counter, int V1, int V2)
{
    int V;
    if (counter == 1.) {
        V1 = rand();
        V2 = rand();
    }
    counter++;
    V = (a * V1 + b * V2 + c) % m;
    cout << V << " ";
    if (counter <= n) {
        Vsum(a, b, c, m, n, counter, V2, V);
    }


}
double f(int n, int level, int& depth)
{
    if (level > depth) {
        depth = level;
        cout << " level = " << level << endl;

        if (n == 1)
            return 1;
        else if (n % 2 == 0)
            return 2 * f(n / 2, level + 1, depth) - 1;
        else if (n % 2 == 1)
            return 2 * f(n / 2, level + 1, depth) + 1;
    }
}

int main()
{
    int a, b, c, m, n;
    cout << "a ="; cin >> a;
    cout << "b ="; cin >> b;
    cout << "c ="; cin >> c;
    cout << "m ="; cin >> m;
    cout << "n ="; cin >> n;
    Vsum(a, b, c, m, n, 1., 0., 0.);


    return 0;
}
