#include <iostream>

using namespace std;

int main() {

    int h, d, f;
    float u;

    while (1) {

        scanf("%d %f %d %d",&h, &u, &d, &f);

        if (h == 0) break;

        int day = 1;
        float fatigue = u * f / 100;
        float i = 0;
        bool flag = true;

        while (i < h){

            if(u > 0){
                i += u;
                u -= fatigue;
            }

            if(i > h){
                break;
            }

            i-= d;

            if(i < 0){
                flag = false;
                break;
            }

            day++;
        }

        if(flag)
            cout << "success on day " << day <<endl;
        else
            cout << "failure on day " << day <<endl;

    }
    return 0;
}