//print fibonacci series

#include <iostream>

using namespace std;
int fib(int n)
{
    if( n == 0||n == 1)
    {
        return n;
    }
    else {
        return (fib(n-1) + fib(n-2));
    }
}
int main()
{
    int terms, i = 0;
    cout<<"Enter the number of terms: " <<endl;
    cin >> terms;
    cout << "Fibonacci Series :" << endl;
    while(i < terms)
    {
        cout << " " << fib(i);
        i++;
    }
    return 0;
}
