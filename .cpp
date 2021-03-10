include <iostream>
using namespace std;

int main() {
    // your code goes here
    int X; 
    double Y; 
    cin>>X>>Y;
    if(X%5!=0)
    cout<<Y; 
    else
    {
        if(Y<X+0.5)
        cout<<Y; 
     else
     cout<<Y-X-0.5;
    }
    
    
    return 0;
}
