#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int num){
    if(num<=1)return false;
    for(int i =2; i*i <=num;i++){
        if(num%i==0)return false;
    }
    return true;
}

int linearSearch(int arr[], int n, int x){
    for(int i=0;i<x;i++){
        if(i%2==1){
            if(n==arr[i]){
                return n;
            }
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;

    int ara[n];
    int arb[m];

    for(int i=0; i<n ; i++){
        cin>>ara[i];
    }
    for(int i=0; i<m ; i++){
        cin>>arb[i];
    }

    int results[n+m];
    int results_count = 0;

    for(int i=0; i<n; i++){
        if(isPrime(i)==true){
            linearSearch(arb,ara[i],m);
        }
    }
    sort(results,results+results_count);

    if(results_count==0){
        cout<<"Tidak Ada"<<endl;
    }else{

    }
    return 0;
}