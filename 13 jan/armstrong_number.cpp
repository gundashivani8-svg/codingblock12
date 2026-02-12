#include<iostream>
#include<cmath> 
using namespace std;

int main() {
    int n;
    cin>>n;
    int og=n;
    int temp=n;
    int sum=0;
    //digit sum
    int l=0;
    while(temp!=0) {
        temp=temp/10;
        l++;
    }
    //power nikalna and add karna
    while(n!=0) {
        int k=n%10;
        sum=sum+pow(k,1);
        n=n/10;
    }
    //compare karna 
    if(og==sum) {
        cout<<"armstrong"<<endl;
    }
    else{
        cout<<"not armstrong"<<endl;
    }
    return 0;
}

