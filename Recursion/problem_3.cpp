// Nth Fibonacci number.

#include <iostream>
using namespace std;

int fibo(int n){
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 1;
    }
    else{
    int partialAns1= fibo(n-1);
    int partialAns2= fibo(n-2);
    return partialAns1+partialAns2;
    }
}

int main (){
    int n;
    cout<<"Enter a valid value: "; 
    cin>>n;
    cout<<"Ans is: ";
    cout<<fibo(n);

    return 0;
}