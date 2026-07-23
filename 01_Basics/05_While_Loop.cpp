#include<bits/stdc++.h>
using namespace std;

int main(){
    int d;
    int count=0;
    int num=0;
    long long total=0;
    cout << "Enter first number: ";
    cin >> d;

    if(d==0){
        num=10;
    }
    else{
        num=d;
    }
    while(count<50){
        total=total+num;
        count++;
        num=num+10;
    }
    
    cout<<"Sum:"<<total;
    return total;
}
