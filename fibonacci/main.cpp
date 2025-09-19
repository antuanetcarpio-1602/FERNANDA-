#include <iostream>

using namespace std;

long long factorial (long n) {
if (n==1)
    return 1;
else
    return n*factorial (n-1);
}

long long fibonacci (long n) {
if (n==1 || n==0)
    return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);

long contardigitos (long n) {
if (n==1 || n==0)
    return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);

int main()
{
    cout << factorial(5) << endl;
    cout << fibonacci(6) << endl;
    cout <<

    return 0;
}
