#include<iostream>
using namespace std;

int main(){
    int num,have_odd=0,have_even=0;
    cout << "Enter an integer: ";
    cin>>num;
    while (num!=0)
    {
        if(num%2==1)
        {
            have_odd++;

        }
       else 
        {
            have_even++;

        }
        cout << "Enter an integer: ";
        cin>>num;
    }
    
    cout << "#Even numbers = "<<have_even<<endl;
    cout << "#Odd numbers = "<<have_odd<<endl;
    return 0;
}
