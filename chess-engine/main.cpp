#include <iostream>
#include <vector>




class CMove {
    

    std::vector<CMove> getLegalMoves(){
        return std::vector<CMove>();
    }
};


int main() {
    fenParser("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1");
    
    return 0;
}