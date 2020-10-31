#include <iostream>

int fibonacci_sum_naive(long long n) {

  int a[60],i,remainder;
  a[0]=0;
  a[1]=1;
  for(i=2;i<60;i++)
  {
  a[i]=(a[i-1]+a[i-2])%10;
  }
  int sum=60;
  for(i=1;i<=n%60;i++)
  {
      sum=sum+a[i];
  }
  return sum%10;

}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_naive(n);
}
