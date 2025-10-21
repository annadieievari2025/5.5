#include <iostream>
#include <cmath>
using namespace std;

//---------------------------------------------------------------
// 1) ����������� �����, �������� ����� (i ����������)
double Product1(int i, int K, int N)
{
    if (i < K)
        return 1; // ������� �������
    return (double(K) / i + double(i) / N) * Product1(i - 1, K, N);
}

//---------------------------------------------------------------
// 2) ����������� �����, �������� ������ (i ����������)
double Product2(int i, int K, int N)
{
    if (i > N)
        return 1;
    return (double(K) / i + double(i) / N) * Product2(i + 1, K, N);
}

//---------------------------------------------------------------
// 3) ����������� �����, �������� ����� (�������� �������, ���� ��������)
double Product3(int i, int K, int N)
{
    if (i < K)
        return 1;
    double p = Product3(i - 1, K, N); // ����������� ������
    return p * (double(K) / i + double(i) / N); // ������� ��� �����
}

//---------------------------------------------------------------
// 4) ����������� �����, �������� ������
double Product4(int i, int K, int N)
{
    if (i > N)
        return 1;
    double p = Product4(i + 1, K, N);
    return p * (double(K) / i + double(i) / N);
}

//---------------------------------------------------------------
// 5) ����������� ����� (��������)
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
    cout << "1) �����, i �����: " << Product1(N, K, N) << endl;
    cout << "2) �����, i ������: " << Product2(K, K, N) << endl;
    cout << "3) ϳ����, i �����: " << Product3(N, K, N) << endl;
    cout << "4) ϳ����, i ������: " << Product4(K, K, N) << endl;
    cout << "5) ����������:       " << ProductIter(K, N) << endl;

    return 0;
}