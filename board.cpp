#include <iostream>

using namespace std;

class Board {
    public:

        Board() {
            cout << "Board created" << endl;
        }

        ~Board() {
            cout << "Board destroyed" << endl;
        }

    private:
        char board[8][8];
};
