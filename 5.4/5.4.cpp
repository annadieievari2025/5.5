#include <iostream>
#include <cmath>
using namespace std;

//---------------------------------------------------------------
// 1) Рекурсивний спуск, параметр спадає (i зменшується)
double Product1(int i, int K, int N)
{
    if (i < K)
        return 1; // базовий випадок
    return (double(K) / i + double(i) / N) * Product1(i - 1, K, N);
}

//---------------------------------------------------------------
// 2) Рекурсивний спуск, параметр зростає (i збільшується)
double Product2(int i, int K, int N)
{
    if (i > N)
        return 1;
    return (double(K) / i + double(i) / N) * Product2(i + 1, K, N);
}

//---------------------------------------------------------------
// 3) Рекурсивний підйом, параметр спадає (спочатку виклики, потім множення)
double Product3(int i, int K, int N)
{
    if (i < K)
        return 1;
    double p = Product3(i - 1, K, N); // рекурсивний виклик
    return p * (double(K) / i + double(i) / N); // множимо при підйомі
}

//---------------------------------------------------------------
// 4) Рекурсивний підйом, параметр зростає
double Product4(int i, int K, int N)
{
    if (i > N)
        return 1;
    double p = Product4(i + 1, K, N);
    return p * (double(K) / i + double(i) / N);
}

//---------------------------------------------------------------
// 5) Ітераційний спосіб (перевірка)
double ProductIter(int K, int N)
{
    double P = 1;
    for (int i = K; i <= N; i++)
        P *= (double(K) / i + double(i) / N);
    return P;
}

//---------------------------------------------------------------
int main()
{
    int K, N;
    cout << "K = ";
    cin >> K;
    cout << "N = ";
    cin >> N;

    cout << endl;
    cout << "1) Спуск, i спадає: " << Product1(N, K, N) << endl;
    cout << "2) Спуск, i зростає: " << Product2(K, K, N) << endl;
    cout << "3) Підйом, i спадає: " << Product3(N, K, N) << endl;
    cout << "4) Підйом, i зростає: " << Product4(K, K, N) << endl;
    cout << "5) Ітераційно:       " << ProductIter(K, N) << endl;

    return 0;
}