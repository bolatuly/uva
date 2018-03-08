#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<stack<char>> c_vector;
stack<char> c_stack;


bool addContainer(char *container) {

    for (int i = 0; i < c_vector.size(); i++) {
        if (*container <= c_vector[i].top()) {
            c_vector[i].push(*container);
            return false;
        }
    }

    c_vector.push_back(c_stack);
    c_vector[c_vector.size() - 1].push(*container);
    return true;

}


int main() {

    string input;
    int n = 0;


    while (getline(cin, input)) {

        if (input == "end") break;
        n++;

        c_vector.clear();
        int containers = 0;
        for (int i = 0; i < input.length(); i++) {
            if (addContainer(&input[i])) containers++;
        }

        printf("Case %d: %d\n", n, containers);

    }

    return 0;
}
