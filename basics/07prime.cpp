#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int num,temp=0;
    cout << "enter the num\n";
    cin >> num;
    for (int i = 2; i < num;i++){
        if(num%i==0){
            temp++;
        }
    }
    if(temp==0){
        cout << num << "num is prime";
    }
    else
    {  cout << num << "num is  non prime";
  
    }
    return 0;
}