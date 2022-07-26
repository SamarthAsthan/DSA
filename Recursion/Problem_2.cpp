// program to find sum of n natural numbers.

#include <iostream>
using namespace std;

int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        int partialAns= sum(n-1);
        return n + partialAns;
    }
}

int main(){
    int n;
    cout<<"Enter valid value for n- ";
    cin>>n;
    cout<<"Sum is- ";
    cout<<sum(n);
    }