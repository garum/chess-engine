#include <iostream>

#include "board.hpp"

Cboard Cboard::fenParser(std::string fen){
    int row = 0;
    int line =0;
    for(int i = 0; i < fen.size(); i ++){
        
        switch (fen[i])
        {
            case '/':
                row++;
                line = 0;
                break;

            case ' ':
                break;

            default:
                break;
        }
        if(fen[i] == '/'){
            row++;
            line = 0;
            continue;
        }


        if(fen[i] == ' ')
            break;

        std::cout << line << " " << row << " " << fen[i] <<"\n";
        line++;
    }

    return Cboard();
};