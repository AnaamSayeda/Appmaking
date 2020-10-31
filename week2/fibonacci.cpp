#include <iostream>
#include <cassert>

int fibonacci_fast(int n) {

     int a[n],i;
     a[0]=0;
     a[1]=1;
     for(i=2;i<=n;i++)
     {
         a[i]=a[i-1]+a[i-2];

     }
     return a[n];


    return 0;
}


    int n = 0;
    std::cin >> n;

    
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
