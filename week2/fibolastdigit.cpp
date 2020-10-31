#include <iostream>

long long get_fibonacci_last_digit_naive(int n) {
    long long a[n],i;
    a[0]=0;
    a[1]=1;
    for(i=2;i<=n;i++)
    {
        a[i]=(a[i-1]+a[i-2])%10;


    }
    return a[n];




}

int main() {
    int n;
    std::cin >> n;
    long long c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }
