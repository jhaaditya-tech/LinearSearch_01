//
//  main.cpp
//  LinearSearch
//
//  Created by Aditya Jha on 12/16/22.
//
//  Linear Search

/*
 #include <iostream>
 using namespace std;
 int main(){
     int A[10]={6,11,25,8,15,7,12,20,9,14},n;
     cout<<"Enter the Key :";
     cin>>n;
     for (int i=0; i<10;i++){
         if (n==A[i]){
             cout<<i<<endl;
         }
     }
     return 0;
 }
 */
#include <iostream>
using namespace std;
int main(){
    int n,i=0,A[i],k;
    cout<<"How many elements do you want to enter in array: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter the "<<n<<" elements in Array below"<<endl;
    for (int i=0;i<n;i++){
        cin>>A[i];
        cout<<endl;
    }
    cout<<"Enter the Key :";
    cin>>k;
    for (int j=0;j<n;j++){
        if (k==A[j]){
            cout<<j<<endl;
        }
        else{
            cout<<"The item doesn't exist"<<endl;
        }
    }
    return 0;
}
