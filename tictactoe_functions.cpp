#include <iostream>
#include <vector>

void greet() {
    std::cout << " _______  _         _______             _______\n"
              << "|__   __|(_)       |__   __|           |__   __|\n"
              << "   | |    _   ___     | |  __ _   ___     | |  ___    ___\n"
              << "   | |   | | / __|    | | / _` | / __|    | | / _ \\  / _ \\\n"
              << "   | |   | || (__     | || (_| || (__     | || (_) ||  __/\n"
              << "   |_|   |_| \\___|    |_| \\__,_| \\___|    |_| \\___/  \\___|\n\n";
}

void place_mark(std::vector<char> &board,bool who,std::string answer, bool &end) {
    int spot = 0;
    for(int i = 0; i < 2; i++) {
        switch(answer[i]) {
            case 'A':
            case 'a':
                break;
            case 'B':
            case 'b':
                spot += 3;
                break;
            case 'C':
            case 'c':
                spot += 6;
                break;
            case '1':
                break;
            case '2':
                spot += 1;
                break;
            case '3':
                spot += 2;
                break;
            default:
                spot += 9;  
        }
    }
    if(board[spot] == '_'){
        if(spot >= 0 && spot <9) {
            end = false;
            std::cout << "End: " << end << "\n";
            if(!who) {
                board[spot] = 'X';
            } else {
                board[spot] = 'O';
            }
        }
    }
}

void vis_who_plays(bool who, std::string p1, std::string p2) {
    if(!who){
            std::cout << "It's " << p1 << "'s turn.\n"
                      << "Where do you want to put your mark?\n";
        } else {
            std::cout << "It's " << p2 << "'s turn.\n"
                      << "Where do you want to put your mark?\n";;
        }
}

void vis_game_board(std::vector<char> board)  {

    std::cout << "   1   2   3\n"
              << " +---+---+---+\n"
              << "A| " << board[0] << " | " << board[1] << " | " << board[2] << " |\n"
              << " +---+---+---+\n"
              << "B| " << board[3] << " | " << board[4] << " | " << board[5] << " |\n"
              <<" +---+---+---+\n"
              << "C| " << board[6] << " | " << board[7] << " | " << board[8] << " |\n"
              << " +---+---+---+\n";
}



