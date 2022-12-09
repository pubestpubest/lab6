#include<iostream>
using namespace std;

int main(){
    int even=0,odd=0,num;
    do{
        cout << "Enter an integer: ";
        cin>>num;
        if(num%2==0)
            even++;
        else
            odd++;
    }while(num!=0);
    even--;
    cout << "#Even numbers = "<<even;
    cout << "\n#Odd numbers = "<<odd;
    return 0;
}
