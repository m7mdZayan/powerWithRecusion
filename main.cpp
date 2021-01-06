#include <iostream>

using namespace std;

int power(int x,int pow){
    if ( x == 0 ) return 0;
    if (x == 1 ) return 1;
    while ( pow > 1 ){
        pow--;
        return x * power(x,pow);
    }
}

int main()
{
    int num,pow,res;
    cout << "please enter a number" << endl;
    cin>>num;
    cout << "enter its power" << endl;
    cin>>pow;
    res = power(num,pow);
    cout << num << " power " << pow <<" = " << res  << endl;
    return 0;
}
