#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"The prime factors of "<<n<<" are: ";
    for(int i=2; i<=n; i++){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
        }
        if (n<=1){
    cout<<" enter a number greater than 2"<<endl;
        }
    return 0;
}