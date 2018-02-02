#include <iostream>
using namespace std;

int main() {


    int n_participants, budget, n_hotels, n_weeks;

    while(cin >> n_participants >> budget >> n_hotels >> n_weeks){

        int res = 500001;


        while (n_hotels != 0) {

            int price;
            int beds[n_weeks];

            cin >> price;

            for (int i = 0; i < n_weeks; i++) {
                cin >> beds[i];
            }


            if (n_participants * price <= budget) {
                for (int j = 0; j < n_weeks; j++) {
                    if (n_participants <= beds[j]) {
                        if (n_participants * price > budget) {
                            continue;
                        } else {
                            if (n_participants * price < res) {
                                res = n_participants * price;
                            }
                        }
                    } else {
                        continue;
                    }
                }

            }
            n_hotels--;
        }

        if (res != 500001)
            cout << res << endl;
        else
            cout << "stay home" << endl;
    }
}