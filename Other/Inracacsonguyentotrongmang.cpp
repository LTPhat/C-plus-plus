#include<iostream>
using namespace std;
#include<math.h>
    int n;
    int i;
    cin >> n;
    for (int i = 0; i <= n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if (Prime(a[i]) == true){
            cout << a[i] << " ";
        }
    }

using namespace std;
bool Prime(int n){
    if (n < 2){
        return false;
    }
    int dem = 0;
    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            dem = dem +1;
        }
    }
    if (dem == 1){
        return true;
    }
    return false;
}
int main(){
    int a[100];
    return 0;
}
