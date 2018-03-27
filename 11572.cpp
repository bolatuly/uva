#include <iostream>
#include <map>
#include <algorithm>
using namespace std;


int t, n, snowflake, answer, counter, last_index;
map<int, int> snowflakes;
int main() {
    cin >> t;
    while(t) {
        cin >> n;
        snowflakes.clear();
        answer = 0, counter = 0, last_index = 0;
        for(int i=1; i<=n; i++) {
            cin >> snowflake;
            int lx = snowflakes[snowflake];
            if(lx != 0) {
                last_index = max(last_index, lx);
                counter = i-last_index-1;
            }
            counter++;
            snowflakes[snowflake] = i;
            answer = max(answer, counter);
        }
        printf("%d\n", answer) ;
        t--;
    }
}