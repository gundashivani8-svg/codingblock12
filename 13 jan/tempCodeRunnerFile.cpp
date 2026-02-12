#include <iostream>
#include<vector>
using namespace std;
  int main() {
       

    // initialization 
    vector<int>a; 

    //updation 
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.pop_back();    // to remove 
    //print 
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";

    }
    cout<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;


    
    return 0;
}
