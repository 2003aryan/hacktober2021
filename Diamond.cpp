#include <iostream>
using namespace std;

int main()
{
    int space, rows;
    for(int i = 1, k = 0; i <= 5; ++i, k = 0){
        for(space = 1; space <= 5-i; ++space){
            cout <<"  ";
        }

        while(k != 2*i-1){
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    for(int i = (5-1); i >= 1; --i){
        for(int space = 0; space < 5-i; ++space)
            cout << "  ";

        for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";

        for(int j = 0; j < i-1; ++j)
            cout << "* ";

        cout << endl;
    }
    return 0;
}
