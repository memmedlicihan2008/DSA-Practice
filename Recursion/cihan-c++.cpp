//Problem:Print numbers for 1 to n using recurion only
//Approach:Call recursion first,then print the number 
//Time Complexity:O(n)
//Space Complexity:O(n)
#include <iostream> 
using namespace std;
void print1toN(int n){
    if (n==0){
        return;
    }
    print1toN(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin >> n;
    print1toN(n);
    return 0;
}