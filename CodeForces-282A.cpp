// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin>>n;
    int i=0;
    while(n--){
        string c;
        cin>>c;
        if(c[0]=='+'){
            i=i+1;
        }
        else if(c[0]=='-'){
            i=i-1;
        }
        else if(c[2]=='+'){
            i++;
        }
        else if(c[2]=='-'){
            i--;
        }
        
    }
    cout<<i;
    return 0;
}