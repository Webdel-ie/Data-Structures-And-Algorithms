#include<bits/stdc++.h>
using namespace std;

void printName(string s, int n){
    if(n == 0){
        return;
    }
     cout << "name: "<< s << endl;
    n--;

    printName(s, n);
}
int main(){
    int n;
    string name;
    cout << "Enter a name : ";
    cin >> name;
    cout << "Enter the number of times, the name should be printed: ";
    cin >> n;
    printName(name, n);
    return 0;
}