#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int num, i;
    bool temp = true;
    cout << "enter the num\n";
    cin >> num;
    for (i = 2; i < sqrt(num);i++){
if(num%i==0){
    temp = false;
    break;
}
else{
    temp = true;
}
    }
    if(temp==false){
        cout << "non prime";
    }
    else{
        cout << "prime";
    }

        return 0;
}