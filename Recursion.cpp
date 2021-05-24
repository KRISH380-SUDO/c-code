#include <iostream>
using namespace std;


int Power(int n ,int p){
    if (p == 0)
    {
        return 1;
    }
    int PrePower = Power(n,p-1);
    return (n * PrePower);
}

int factorial(int n){
    if ( n == 0)
    {
        return 1;
    }

    int Prefactorial = factorial(n-1);
    return (n * Prefactorial);
}


int Fibonacci(int n){

    if ( n == 1)
    {
        return 1;
    }
    else if ( n == 0)
    {
        return 0;
    }

    return (Fibonacci(n-1) + Fibonacci(n-2));

}

bool Sorted(int arr[],int n){
    if( n == 1)
    {
        return true;
    }

    bool Restarr = Sorted( arr + 1, n - 1);
    return (arr[0] < arr[1] &&  Restarr);
}

void Dec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    Dec(n - 1);
}
void inc(int n)
{
    if (n == 1)
    {
        cout << "1"
             << " ";
        return;
    }
    inc(n - 1);
    cout << n << " ";
}

int Sum(int n){
    if (n == 0)
    {
        return 0;
    }

    int PreSum = Sum(n-1);   
    return (n + PreSum);
}

int main()
{
    int n;
    cin >> n;

    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    cout << Sum(n) <<endl;
    // cout << Power(n,p) <<endl;
    // cout << Fibonacci(n) <<endl;
    // cout << Sorted(arr,n) << endl;
    // Dec(n);
    // cout << endl;
    // inc(n);

    return 0;
}