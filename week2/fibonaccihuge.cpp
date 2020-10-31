#include <iostream>

long long pisanoperiod(long long m){
    int a=0,b=1,c=a+b,i;
    for(i=0;i<m*m;i++)
    {
        c=(a+b)%m;
        a=b;
        b=c;
        if(a==0&&b==1)
            return(i+1);
    }

}
long long get_fibonacci_huge_naive(long long n, long long m) {
    int remainder,answer,i;
    remainder=n%pisanoperiod(m);
    int a[remainder];
    a[0]=0;
    a[1]=1;
    for(i=2;i<=remainder;i++)
        a[i]=(a[i-1]+a[i-2])%m;




    return a[remainder]%m;

}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_naive(n, m) << '\n';
}
