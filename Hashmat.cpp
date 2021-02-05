#include<iostream>
#include<cmath>
using namespace std;

#define limit 1000000  //(0 ≤ n ≤ 10^6)

double arr[limit];

int main(){

    long long digit;
    int T,i = 1;
    long long n,base;
    cin>>T;
    for(long long i = 1; i<=limit; i++){
        arr[i] = arr[i-1] + log(i); //log(n!) = log(n) + log(n-1) + .......+log(1)
    }
    while(T--){

    cin>>n>>base;

    digit = arr[n]/log(base) + 1;
    cout<<"Case "<<i<<": ";
    printf("%lld\n",digit);
    i++;
    }
    return 0;


    }
