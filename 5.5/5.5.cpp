#include <iostream>
using namespace std;

int NSD(int n, int m)
{
    if (m == 0)
        return n;          
    else
        return NSD(m, n % m);  
}

int main()
{
    int n, m;
    cout << "Enter 2 numbers n Ё m: ";
    cin >> n >> m;

    cout << "мяд(" << n << ", " << m << ") = " << NSD(n, m) << endl;

    return 0;
}
