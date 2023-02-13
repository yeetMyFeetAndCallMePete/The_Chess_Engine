#include <iostream>
#include "piece.cpp"
#include "board.cpp"

using namespace std;

bool testClasses();

int main(int argc, char *argv[]) {

    if (testClasses()) {
        cout <<  "------------------------" << endl;
        cout << endl << "everything seems in order" << endl;
    }
    
    cout << "Finally a worthy opponent!" << endl;
    return 0;
}

bool testClasses() {
    // Testing the creation of a new board object
    // b is a pointer to a board in memory
    Board *b = new Board();

    // Testing to destruction of board object
    b->~Board();

    // Testing the creation of a new piece object
    // p is a pointer to a board in memory
    Piece *p = new Piece();

    // Testing the destruction of a piece object in memory
    p->~Piece();

    return true;
}