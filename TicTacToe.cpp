#include <iostream>
#include <cstdlib>

using namespace std;

char board[6];
char game[3][3];
void Reset();
void PrintBoard();
bool start = false;
int player = 1;
char input[4];
int col;
int row;

int main() {
  board[1] = 'A';
  board[2] = 'B';
  board[3] = 'C';
  board[4] = '1';
  board[5] = '2';
  board[6] = '3';
  cout << "\n Welcome to TicTacToe. \n" << endl;
  Reset();
  PrintBoard();
  bool start = true;
  while (start == true) {
    if (player == 1) {
      cout << "Player 1's turn" << endl;
      cin.get(input, 3);
      cin.clear();
      cin.ignore(999, '\n');
      if (input[0] == 'A') {
	col = 0;
      }
      if (input[0] == 'B') {
        col = 1;
      }
      if (input[0] == 'C') {
        col = 2;
      }
      row = (int) input[1];
      game[col][row] = 'X';
      PrintBoard();
    }
    if (player == 2) {
      cout << "Player 2's turn" << endl;
      cin.get(input, 3);
      cin.clear();
      cin.ignore(999, '\n');
      if (input[0] == 'A') {
	col = 0;
      }
      if (input[0] == 'B') {
        col = 1;
      }
      if (input[0] == 'C') {
        col = 2;
      }
      row = (int) input[1];
      game[col][row] = 'O';
      PrintBoard();
    }
    player++;
  }
}

void Reset() {
  game[0][0] = ' ';
  game[0][1] = ' ';
  game[0][2] = ' ';
  game[1][0] = ' ';
  game[1][1] = ' ';
  game[1][2] = ' ';
  game[2][0] = ' ';
  game[2][1] = ' ';
  game[2][2] = ' ';
}

void PrintBoard(){
  cout << "   "<< board[1] << "   " << board[2] << "   " << board[3] << "\n\n" << board[4] << "  " << game[0][0] << "   " << game[0][1] << "   " << game[0][2] << "\n\n" << board[5] << "  " << game[1][0] << "   " << game[1][1] << "   " << game[1][2] << "\n\n" << board[6] << "  " << game[2][0] << "   " << game[2][1] << "   " << game[2][2] << endl;
}
