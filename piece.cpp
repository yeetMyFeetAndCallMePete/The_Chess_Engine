#include <iostream>

using namespace std;

class Piece {
    public:

        Piece() {
            std::cout << "Piece created" << std::endl;
        }

        ~Piece() {
            std::cout << "Piece destroyed" << std::endl;
        }

    private:
        char piece;
};