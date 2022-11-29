#include <iostream>
#include <vector>


void greet();

void vis_game_board(std::vector<char> board);
void vis_who_plays(bool who, std::string p1, std::string p2);
void place_mark(std::vector<char> &board, bool who, std::string answer, bool &end);