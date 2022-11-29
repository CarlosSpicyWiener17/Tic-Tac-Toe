#include "tictactoe_functions.hpp"
#include <iostream>



int main() {
    srand(time(NULL));
    std::string p1 = "";
    std::string p2 = "";
    std::string answer = "";
    std::vector<char> board(9,'_');
    int num_turns=0;
    bool who_plays = rand()%2; //0 is player 1, 1 is player 2
    bool end_turn;
    char end_game;
    bool game_on = true;
    int win1 = 0;
    int win2 = 0;
    int win3 = 0;
    int win4 = 0;
    int win5 = 0;
    int win6 = 0;
    int win7 = 0;
    int win8 = 0;

    greet();
    std::cout << "Please enter name of Player 1: ";
    getline(std::cin, p1);
    std::cout << "\nWelcome " << p1 << "!\n\n"
              << "Please enter name of Player 2: ";
    getline(std::cin, p2);
    std::cout << "\nWelcome " << p2 << "!\n\n";
    //game loop
    while(game_on) {
        end_turn = true;

        while(end_turn){
            vis_game_board(board);
            vis_who_plays(who_plays,p1,p2);
            std::cin >> answer;
            place_mark(board,who_plays,answer,end_turn);
            if(end_turn) {
                std::cout << "\n\n" << "INVALID ANSWER, TRY AGAIN\n";
            }
        }

        //check if anyone won X = p1, O = p2
        
            win1=0;
            win2=0;
            win3=0;
            win4=0;
            win5=0;
            win6=0;
            win7=0;
            win8=0;
            std::string tempScore = "";
            if(!who_plays) {
                for(int i = 0; i < 9; i++) {
                    std::string tempi = std::to_string(i);
                    if(board[i] == 'X') {
                        tempScore += tempi;
                    }
                }
            } else {
                for(int i = 0; i < 9; i++) {
                    std::string tempi = std::to_string(i);
                    if(board[i] == 'O') {
                        tempScore += tempi;
                    }
                }
            }
            std::cout << "tempScore: " << tempScore << "\n"; 
            for(int i = 0; i < tempScore.length(); i++) {
                switch(tempScore[i]) {
                    case '0':
                        win1+=1;
                        win4+=1;
                        win7+=1;
                        break;
                    case '1':
                        win1+=1;
                        win5+=1;
                        break;
                    case '2':
                        win1+=1;
                        win6+=1;
                        win8+=1;
                        break;
                    case '3':
                        win2+=1;
                        win4+=1;
                        break;
                    case '4':
                        win2+=1;
                        win5+=1;
                        win7+=1;
                        win8+=1;
                        break;
                    case '5':
                        win2+=1;
                        win6+=1;
                        break;
                    case '6':
                        win3+=1;
                        win4+=1;
                        win8+=1;
                        break;
                    case '7':
                        win3+=1;
                        win5+=1;
                        break;
                    case '8':
                        win3+=1;
                        win6+=1;
                        win7+=1;
                        break;
                }
            }
            if(!who_plays){
                if(win1==3) {
                    std::cout << p1 << " is the winner!";
                    game_on = 0;
                } else if(win2==3) {
                    std::cout << p1 << " is the winner!";
                    game_on = 0;
                } else if(win3==3) {
                    std::cout << p1 << " is the winner!";
                    game_on = 0;
                } else if(win4==3) {
                    std::cout << p1 << " is the winner!";
                    game_on = 0;
                } else if(win5==3) {
                    std::cout << p1 << " is the winner!";
                    game_on = 0;
                } else if(win6==3) {
                    std::cout << p1 << " is the winner!";
                    game_on = 0;
                } else if(win7==3) {
                    std::cout << p1 << " is the winner!";
                    game_on = 0;
                } else if(win8==3) {
                    std::cout << p1 << " is the winner!";
                    game_on = 0;
                }
            } else {
                if(win1==3) {
                    std::cout << p2 << " is the winner!";
                    game_on = 0;
                } else if(win2==3) {
                    std::cout << p2 << " is the winner!";
                    game_on = 0;
                } else if(win3==3) {
                    std::cout << p2 << " is the winner!";
                    game_on = 0;
                } else if(win4==3) {
                    std::cout << p2 << " is the winner!";
                    game_on = 0;
                } else if(win5==3) {
                    std::cout << p2 << " is the winner!";
                    game_on = 0;
                } else if(win6==3) {
                    std::cout << p2 << " is the winner!";
                    game_on = 0;
                } else if(win7==3) {
                    std::cout << p2 << " is the winner!";
                    game_on = 0;
                } else if(win8==3) {
                    std::cout << p2 << " is the winner!";
                    game_on = 0;
                }

            }
        //next players turn
        who_plays = !who_plays;
        num_turns += 1;




        if(num_turns == 9) {
            game_on = 0;
        }
    }
    std::cin >> end_game;
}