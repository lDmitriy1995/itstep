#include <iostream>
#include <Windows.h>
using namespace std;

char board[9] = { };

void clearscreen()

{
	  for (int i = 0; i < 50; i++)
		cout << endl;
}

void clearboard()
{
	for (int i = 0; i < 9; i++)
	{
		board[i] = '-';
	}
}

bool has_wonQ(char player)
{
	int wins[][3] = { {0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6} };

	for (int i = 0; i < 8; i++) 
	{
		int count{ 0 };
		for (int j = 0; j < 3; j++) 
		{
			if (board[wins[i][j]] == player) count++;

	    }
		if (count == 3) 
		{
			return true;
        }
	}
	return false;
}

void print_board()
{
	cout << "Игровая доска" << endl;

	cout << "-" <<board[6]<< "-|-" <<board[7]<< "-|-" <<board[8]<< "-\n";
	cout << "-" <<board[3]<< "-|-" <<board[4]<< "-|-" <<board[5]<< "-\n";
	cout << "-" <<board[0]<< "-|-" <<board[1]<< "-|-" <<board[2]<< "-\n";
	
}


int get_move() {
	cout << "Выберите цифру" << endl;

	cout << "- 7 -|- 8 -| - 9 - " << endl;
	cout << "- 4 -|- 5 -| - 6 - " << endl;
	cout << "- 1 -|- 2 -| - 3 - " << endl;
	cout << "\n" << endl;

	print_board();

	cout << "Введите цифру" << endl;
	cout << "\n" << endl;

	int move;
	cin >> move;
	while (move > 9 || move < 1 || board[move - 1] != '-')
	{
		cout << "\n Введите правильную цифру (1-9)";
		cin >> move;
	}
	return move;

}

char play_and_get_winner()
{
	int turn = 1;
	while (!has_wonQ('X') && !has_wonQ('O')){
		clearscreen();
		int move = get_move();
		cout << " Введеная цифра  " << move << endl;
		if (turn % 2 == 1){
			board[move - 1] = 'X';
			if (has_wonQ('X')) {

				cout << "Поздравляю игрок X! Ты выйграл!"<< endl;
					return 'X';
			}
		}
		else {
			board[move - 1] = 'O';
				if (has_wonQ('O'))
				{
					cout << "Поздравляю игрок O! Ты выйграл!"<< endl;
						return 'O';
				}
		}
		turn++;
			if (turn == 10)
			{
				cout << " Ничья";
				return  'D';
			}
	}
}


	int main() {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		cout << "Добро пожаловать в игру крестики нолики";
		string reply = "y";
		int x_wins = 0, o_wins = 0, ties = 0;

		while (reply == "y") {
			clearboard();
			char winner = play_and_get_winner();
			print_board();

			switch (winner) {
			case  'X':
					x_wins++;
					break;
			case 'O':
						o_wins++;
						break;
			case 'D':
							ties++;
							break;
			}
			break;
		}
	}
