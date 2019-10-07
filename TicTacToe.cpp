#include <iostream>
#include <cstdlib>

using namespace std;

//Ryan Thammakhoune. TicTacToe. Classic TicTacToe game that also counts wins.

char board[6]; //Initialize variables
char game[3][3];
void Reset();
void PrintBoard();
bool CheckXWin(char[3][3]);
bool CheckOWin(char[3][3]);
bool start = false;
int player = 0;
char input[4];
int col;
int row;
int Xwins = 0;
int Owins = 0;
int TieCount = 0;
char playAgain;
bool restart = true;

int main() {
  board[1] = 'A'; //Sets up board
  board[2] = 'B';
  board[3] = 'C';
  board[4] = '1';
  board[5] = '2';
  board[6] = '3';
  cout << "\n Welcome to TicTacToe. \n" << endl;
  while(restart == true) {
    cout<< "X has " << Xwins << " wins\n" << "O has " << Owins << " wins \n" << endl;
    Reset(); //Reset board
    PrintBoard(); //Print the board
    restart = false;
    bool start = true; //While the game is still going
    while (start) {
      player++; //Switch to next player
      if (player%2 == 1) { //If player 1 turn
	cout << "Player 1's turn" << endl;
	bool allow = false;
	while (allow == false) {
	  cin.get(input, 3); //Get input
	  cin.clear();
	  cin.ignore(999, '\n');
	  if (input[0] == 'A') { //Checks if input is valid
	    col = 0;
	    allow = true;
	  }
	  if (input[0] == 'B') {
	  col = 1;
	  allow = true;
	  }
	  if (input[0] == 'C') {
	    col = 2;
	    allow = true;
	  }
	  row = (int) input[1] - 49;
	  if (row != 0 && row != 1 && row != 2){
	    allow = false;
	  }
	  if (game[row][col] != ' ') {
	    allow = false;
	  }
	  if (allow == true) { //If input is valid, put it on the board
	    game[row][col] = 'X';
	    PrintBoard();
	    TieCount++;
	  }
	  if (allow == false) {
 
	  }
	  if (CheckXWin(game) == true) { //Check for win
	    cout << "Player 1 wins" << endl;
	    start = false;
	    Xwins++;	    
	  }
	  if (CheckXWin(game) == false) {//Check for tie
	    if (TieCount == 9) {
	      cout << "Tie" << endl;
	      start = false;
	    }
	  }
	}
      }
      if (player%2 == 0) { //If player 2 turn
	cout << "Player 2's turn" << endl;
	bool allow = false;
	while (allow == false) { 
	  cin.get(input, 3);
	  cin.clear();
	  cin.ignore(999, '\n');
	  if (input[0] == 'A') { //If input is valid
	    col = 0;
	    allow = true;
	  }
	  if (input[0] == 'B') {
	    col = 1;
	    allow = true;
	  }
	  if (input[0] == 'C') {
	    col = 2;
	    allow = true;
	  }
	  row = (int) input[1] - 49;
	  if (row != 0 && row != 1 && row != 2){
	    allow = false;
	  }
	  if (game[row][col] != ' ') {
	    allow = false;
	  }
	  if (allow == true) {
	    TieCount++;
	    game[row][col] = 'O';
	    PrintBoard();
	  }
	  if (allow == false) {

	  }
	  if (CheckOWin(game) == true) { //Check win
	    cout << "Player 2 wins" << endl;
	    Owins++;
	    start = false;
	  }
	  if (CheckOWin(game) == false) { // Check tie
	    if (TieCount == 9) {
	      cout << "Tie";
	      start = false;
	    }
	  }
	}
      }
    }
    player = 0; //Reset variables
    TieCount = 0;
    cout << "Play Again? Y/N" << endl; //Play again?
    cin >> playAgain;
    if (playAgain == 'Y') {
      restart = true;
    }
    if (playAgain == 'N') {
      restart = false;
    }
  }
}

bool CheckXWin(char game[3][3]) { //Checks each possiblity for win
  if (game[0][0] == 'X' && game[0][1] == 'X' && game[0][2] == 'X') {
    
  }
  else if (game[1][0] == 'X' && game[1][1] == 'X' && game[1][2] == 'X') {
    
  }
  else if (game[2][0] =='X' && game[2][1] == 'X' && game[2][2] == 'X') {
    
  }
  else if (game[0][0] == 'X' && game[1][0] == 'X' && game[2][0] == 'X') {
    
  }
  else if (game[0][1] =='X' && game[1][1] == 'X' && game[2][1] == 'X') {
    
  }
  else if (game[0][2] == 'X' && game[1][2] == 'X' && game[2][2] == 'X') {
    
  }
  else if (game[0][0] == 'X' && game[1][1] == 'X' && game[2][2] == 'X') {
    
  }
  else if (game[0][2] == 'X' && game[1][1] == 'X' && game[2][0] == 'X') {
    
  }
  else{
    return false;
  }
  return true;
}

bool CheckOWin(char game[3][3]) { //Check each possiblilty for win
  if (game[0][0] == 'O' && game[0][1] == 'O' && game[0][2] == 'O') {
    
  }
  else if (game[1][0] == 'O' && game[1][1] == 'O' && game[1][2] == 'O') {
    
  }
  else if (game[2][0] =='O' && game[2][1] == 'O' && game[2][2] == 'O') {
    
  }
  else if (game[0][0] == 'O' && game[1][0] == 'O' && game[2][0] == 'O') {
    
  }
  else if (game[0][1] == 'O' && game[1][1] == 'O' && game[2][1] == 'O') {
    
  }
  else if (game[0][2] == 'O' && game[1][2] == 'O' && game[2][2] == 'O') {
    
  }
  else if (game[0][0] == 'O' && game[1][1] == 'O' && game[2][2] == 'O') {
    
  }
  else if (game[0][2] == 'O' && game[1][1] == 'O' && game[2][0] == 'O') {
    
  }
  else{
    return false;
  }
  return true;
}

void Reset() { //Reset board
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

void PrintBoard(){ //Prints board
  cout << "   "<< board[1] << "   " << board[2] << "   " << board[3] << "\n\n" << board[4] << "  " << game[0][0] << "   " << game[0][1] << "   " << game[0][2] << "\n\n" << board[5] << "  " << game[1][0] << "   " << game[1][1] << "   " << game[1][2] << "\n\n" << board[6] << "  " << game[2][0] << "   " << game[2][1] << "   " << game[2][2] << endl;
}
