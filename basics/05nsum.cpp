#include <iostream>
using namespace std;
int main(){
    int num,sum=0,i=1;
    cout << "enter the num\n";
    cin >> num;
    // for (i = 1; i <= num;i++){
    //     sum = sum + i;
    // }
    // cout << "sum="<< sum;
    while(i<=num){
        sum += i;
        i++;
    }
    cout << "sum is:" << sum;
    return 0;
}