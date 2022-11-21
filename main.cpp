#include <iostream>
using namespace std;
int main() {
    int n,num1=0,num2=1,nums, i=0;// nums>num2>num1
    cin>>n;

    if(n>=2) {
        cout << 0 << endl << 1 << endl;
        do {
            nums = num1 + num2;//sommo
            num1 = num2;//sposto
            num2 = nums;

            cout << nums << endl;
            i++;
        } while (i < n);
    }

    else cout<<"errore"<<endl;

    return 0;
}
