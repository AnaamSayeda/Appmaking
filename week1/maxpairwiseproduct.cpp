#include<bits/stdc++.h>
using namespace std;


long long maxproduct(const vector<long long>&numbers)
{
    long long max1=-1,i,j,result=0;
    int n=numbers.size();
    for(i=0;i<n;i++)
    if(max1==-1||numbers[i]>numbers[max1])
    max1=i;
    int max2=-1;
    for(j=0;j<n;j++)
    if((j!=max1) && ((max2==-1)||(numbers[j]>numbers[max2])))
    max2=j;
    result=numbers[max1]*numbers[max2];

    return result;

}




int main()
{
    long long n,i,result=0;
    cin>>n;
    vector<long long>numbers(n);
    for(i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
     result=maxproduct(numbers);
    cout<<result;


    return 0;
}

