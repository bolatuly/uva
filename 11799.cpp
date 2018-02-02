#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int c = 0;

    while (n!=0){

        c++;

        int a;
        cin >> a;

        int p[a];
        for (int k=0; k<a; k++)
        {
            cin >> p[k];
        }

        int temp = 0;
        for (int k=0; k<a; k++){
            if(p[k]>temp){
                temp = p[k];
            }
        }

        cout << "Case "<< c <<": " <<temp << endl;
        n--;
    }
    return 0;
}