#include <iostream>

int fibonacci_sum_naive(long long n) {

  long long a[60],i,remainder;
  a[0]=0;
  a[1]=1;
  for(i=2;i<=n;i++)
  {
  a[i]=(a[i-1]+a[i-2])%60;
  }
  return a[n];
}


int main() {
    long long n = 0;
    std::cin >> n;
     long long vertical=fibonacci_sum_naive(n%60);
     long long horizontal=fibonacci_sum_naive((n+1)%60);
     long long sum=vertical*horizontal;
     std::cout<<(sum%10);
     return 0;
}
