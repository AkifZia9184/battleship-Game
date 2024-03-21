# include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
string arr[15][15];
string player[15][15];
string key;
int toss, g;
int mainmenu();
int playGameEasy();
int playGameMedium();
int playGameHard();
void Rules();
void highScores();
void Credits();
void Exit();
int shipArrangement();
int PvsP();
void easyMode();
void mediumMode();
void hardMode();
int main()
{
	mainmenu();
}
int mainmenu()
{
	int choice;
	cout << " welcome to BattleShip Game " << endl;
	cout << " 1: Play Game " << endl;
	cout << " 2: Rules " << endl;
	cout << " 3: High Scores " << endl;
	cout << " 4: Credits " << endl;
	cout << " 5: Exit " << endl;
	cin >> choice;
	switch (choice)
	{
		case 1:
		{
			shipArrangement();
			break;
		}
		case 2:
		{
			Rules();
			break;
		}
		case 3:
		{
			highScores();
			break;
		}
		case 4:
		{
			Credits();
			break;
		}
		case 5:
		{
			Exit();
			break;
		}
	}
	return 0;
}
void Rules()
{
	system("cls");
	cout << "GAME OBJECTIVE " << endl<<endl ;
	cout<<"  The object of Battleship is to try and sink all of the other player's before they sink all of your ships. All of the other player's ships are somewhere on his / her board.You try and hit them by calling out the coordinates of one of the squares on the board.The other player also tries to hit your ships by calling out coordinates.Neither you nor the other player can see the other's board so you must try to guess where they are.  Each board in the physical game has two grids:  the lower (horizontal) section for the player's ships and the upper part(vertical during play) for recording the player's guesses." << endl;
	cout << endl << endl;
	cout << "STARTING A NEW GAME " << endl << endl;
	cout<<" Each player places the 5 ships somewhere on their board.The ships can only be placed vertically or horizontally.Diagonal placement is not allowed.No part of a ship may hang off the edge of the board.Ships may not overlap each other.No ships may be placed on another ship.Once the guessing begins, the players may not move the ships."<<endl;
	cout << " The 5 ships are : Carrier(occupies 5 spaces), Battleship(4), Cruiser(3), Submarine(3), and Destroyer(2)." << endl;
	cout << endl<<endl;
	cout << "PLAYING THE GAME " << endl << endl;
	cout << " Player's take turns guessing by calling out the coordinates. The opponent responds with hit or miss as appropriate.  Both players should mark their board with pegs:  red for hit, white for miss." << endl;
	cout << " When all of the squares that one your ships occupies have been hit, the ship will be sunk.You should announce hit and sunk.In the physical game, a red peg is placed on the top edge of the vertical board to indicate a sunk ship." << endl;
	cout << " As soon as all of one player's ships have been sunk, the game ends." << endl;
	cout << " press any key to retrn to MainMenu "; cin >> key; cout << endl;
	system("cls");
	mainmenu();
}
void highScores()
{
	system("cls");
	cout << " i will do it later " << endl;
	cout << " press any key to retrn to MainMenu "; cin >> key; cout << endl;
	system("cls");
	mainmenu();
}
void Credits()
{
	system("cls");
	cout << " This Game Battle Ship is programmed by Akif Ziauddin " << endl;
	cout << " press any key to retrn to MainMenu "; cin >> key; cout << endl;
	system("cls");
	mainmenu();
}
void Exit()
{
	system("cls");
	cout << " Thanks for playing " << endl;
	exit(0);
}
int shipArrangement()
{
	system("cls");
	int choice;
	cout << " 1: player vs player " << endl;
	cout << " 2: player vs machine " << endl;
	cin >> choice;
	switch (choice)
	{
		case 1:
		{
			PvsP();
			break;
		}
		case 2:
		{
			return 0;
			break;
		}
	}
	return 0;
}
int PvsP()
{
	system("cls");
	int level;
	cout << " 1: Easy " << endl;
	cout << " 2: Medium " << endl;
	cout << " 3: Hard " << endl;
	cin >> level;
	switch (level)
	{
		case 1:
		{
			system("cls");
			cout << " press any key for toss " << endl;
			cin >> key;
			srand(time(0));
			toss = (rand() % 2) + 1;
			if (toss == 1)
			{
				g = 2;
			}
			else
			{
				g = 1;
			}
			system("cls");
			easyMode();
			break;
		}
		case 2:
		{
			system("cls");
			cout << " press any key for toss " << endl;
			cin >> key;
			srand(time(0));
			toss = (rand() % 2) + 1;
			if (toss == 1)
			{
				g = 2;
			}
			else
			{
				g = 1;
			}
			system("cls");
			mediumMode();
			break;
		}
		case 3:
		{
			system("cls");
			cout << " press any key for toss " << endl;
			cin >> key;
			srand(time(0));
			toss = (rand() % 2) + 1;
			if (toss == 1)
			{
				g = 2;
			}
			else
			{
				g = 1;
			}
			system("cls");
			hardMode();
			break;
		}
	}
	return 0;
}
void easyMode()
{
	int choice, row = 0, column = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
	int orient, s = 0;
	int arr1[8];
	for (int i = 1; i <= 1; i++)
	{
		cout << " player " << toss << " turn" << endl;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				arr[i][j] = "*";
			}
		}
		cout << "  0 1 2 3 4 5 6 7" << endl;
		for (int i = 0, n = 0; i < 8; i++, n++)
		{
			cout << n << " ";
			for (int j = 0; j < 8; j++)
			{
				cout << arr[i][j] << ' ';
			}
			cout << endl;
		}
		cout << " enter  ships you want to place " << endl;
		for (int i = 1; i <= 10; i++)
		{
			cout << " 1: carriers" << endl;
			cout << " 2: Battleships" << endl;
			cout << " 3: Cruisers" << endl;
			cout << " 4: Submarines" << endl;
			cout << " 5: Destroyers" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1:
			{
				count1++;
				if (count1 > 2)
				{
					cout << " you can only place 2 carriers try another ship " << endl;
					i--;
					break;
				}
				cout << " enter the row where you want to place "; cin >> row; cout << endl;
				cout << " enter the column where you want to place "; cin >> column; cout << endl;
				cout << " you want to place the ship  " << endl;
				cout << "  1: vertical " << endl;
				cout << "  2: horizontal " << endl;
				cin >> orient;
				switch (orient)
				{
				case 1:
				{
					for (int x = 0; x < 8; x++)
					{
						s = 0;
						if (arr[row + x][column] == "*")
						{
							arr[row + x][column] = "C";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								arr[row + i][column] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count1--;
						i--;
						break;
					}
					else
					{
						system("cls");
						cout << " 0 1 2 3 4 5 6 7" << endl;
						for (int i = 0, n = 0; i < 8; i++, n++)
						{
							cout << n << " ";
							for (int j = 0; j < 8; j++)
							{
								cout << arr[i][j] << ' ';
							}
							cout << endl;
						}
					}
					break;
				}
				case 2:
				{
					for (int x = 0; x < 8; x++)
					{
						s = 0;
						if (arr[row][column + x] == "*")
						{
							arr[row][column + x] = "C";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								arr[row][column + i] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count1--;
						i--;
						break;
					}
					else
					{
						system("cls");
						cout << " 0 1 2 3 4 5 6 7" << endl;
						for (int i = 0, n = 0; i < 8; i++, n++)
						{
							cout << n << " ";
							for (int j = 0; j < 8; j++)
							{
								cout << arr[i][j] << ' ';
							}
							cout << endl;
						}
					}
					break;
				}
				}
				break;
			}
			case 2:
			{
				count2++;
				if (count2 > 2)
				{
					cout << " you can only place 2 battleships try another ship " << endl;
					i--;
					break;
				}
				cout << " enter the row where you want to place "; cin >> row; cout << endl;
				cout << " enter the column where you want to place "; cin >> column; cout << endl;
				cout << " you want to place the ship  " << endl;
				cout << "  1: vertical " << endl;
				cout << "  2: horizontal " << endl;
				cin >> orient;
				switch (orient)
				{
				case 1:
				{
					for (int x = 0; x < 5; x++)
					{
						s = 0;
						if (arr[row + x][column] == "*")
						{
							arr[row + x][column] = "B";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								arr[row + i][column] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count2--;
						i--;
						break;
					}
					else
					{
						system("cls");
						cout << "  0 1 2 3 4 5 6 7" << endl;
						for (int i = 0, n = 0; i < 8; i++, n++)
						{
							cout << n << " ";
							for (int j = 0; j < 8; j++)
							{
								cout << arr[i][j] << ' ';
							}
							cout << endl;
						}
					}
					break;
				}
				case 2:
				{
					for (int x = 0; x < 5; x++)
					{
						s = 0;
						if (arr[row][column + x] == "*")
						{
							arr[row][column + x] = "B";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								arr[row][column + i] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count2--;
						i--;
						break;
					}
					else
					{
						system("cls");
						cout << "  0 1 2 3 4 5 6 7" << endl;
						for (int i = 0, n = 0; i < 8; i++, n++)
						{
							cout << n << " ";
							for (int j = 0; j < 8; j++)
							{
								cout << arr[i][j] << ' ';
							}
							cout << endl;
						}
					}
					break;
				}
				}
				break;
			}
			case 3:
			{
				count3++;
				if (count3 > 2)
				{
					cout << " you can only place 2 cruisers try another ship " << endl;
					i--;
					break;
				}
				cout << " enter the row where you want to place "; cin >> row; cout << endl;
				cout << " enter the column where you want to place "; cin >> column; cout << endl;
				cout << " you want to place the ship  " << endl;
				cout << "  1: vertical " << endl;
				cout << "  2: horizontal " << endl;
				cin >> orient;
				switch (orient)
				{
				case 1:
				{
					for (int x = 0; x < 4; x++)
					{
						s = 0;
						if (arr[row + x][column] == "*")
						{
							arr[row + x][column] = "c";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								arr[row + i][column] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count3--;
						i--;
						break;
					}
					else
					{
						system("cls");
						cout << " 0 1 2 3 4 5 6 7" << endl;
						for (int i = 0, n = 0; i < 8; i++, n++)
						{
							cout << n << " ";
							for (int j = 0; j < 8; j++)
							{
								cout << arr[i][j] << ' ';
							}
							cout << endl;
						}
					}
					break;
				}
				case 2:
				{
					for (int x = 0; x < 4; x++)
					{
						s = 0;
						if (arr[row][column + x] == "*")
						{
							arr[row][column + x] = "c";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								arr[row][column + i] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count3--;
						i--;
						break;
					}
					else
					{
						system("cls");
						cout << " 0 1 2 3 4 5 6 7" << endl;
						for (int i = 0, n = 0; i < 8; i++, n++)
						{
							cout << n << " ";
							for (int j = 0; j < 8; j++)
							{
								cout << arr[i][j] << ' ';
							}
							cout << endl;
						}
					}
					break;
				}
				}
				break;
			}
			case 4:
			{
				count4++;
				if (count4 > 2)
				{
					cout << " you can only place 2 submarines try another ship " << endl;
					i--;
					break;
				}
				cout << " enter the row where you want to place "; cin >> row; cout << endl;
				cout << " enter the column where you want to place "; cin >> column; cout << endl;
				cout << " you want to place the ship  " << endl;
				cout << "  1: vertical " << endl;
				cout << "  2: horizontal " << endl;
				cin >> orient;
				switch (orient)
				{
				case 1:
				{
					for (int x = 0; x < 3; x++)
					{
						s = 0;
						if (arr[row + x][column] == "*")
						{
							arr[row + x][column] = "S";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								arr[row + i][column] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count4--;
						i--;
						break;
					}
					else
					{
						system("cls");
						cout << "  0 1 2 3 4 5 6 7" << endl;
						for (int i = 0, n = 0; i < 8; i++, n++)
						{
							cout << n << " ";
							for (int j = 0; j < 8; j++)
							{
								cout << arr[i][j] << ' ';
							}
							cout << endl;
						}
					}
					break;
				}
				case 2:
				{
					for (int x = 0; x < 3; x++)
					{
						s = 0;
						if (arr[row][column + x] == "*")
						{
							arr[row][column + x] = "S";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								arr[row][column + i] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count4--;
						i--;
						break;
					}
					else
					{
						system("cls");
						cout << "  0 1 2 3 4 5 6 7" << endl;
						for (int i = 0, n = 0; i < 8; i++, n++)
						{
							cout << n << " ";
							for (int j = 0; j < 8; j++)
							{
								cout << arr[i][j] << ' ';
							}
							cout << endl;
						}
					}

					break;
				}
				}
				break;
			}
			case 5:
			{
				count5++;
				if (count5 > 2)
				{
					cout << " you can only place 2 destroyers try another ship " << endl;
					i--;
					break;
				}
				cout << " enter the row where you want to place "; cin >> row; cout << endl;
				cout << " enter the column where you want to place "; cin >> column; cout << endl;
				cout << " you want to place the ship  " << endl;
				cout << "  1: vertical " << endl;
				cout << "  2: horizontal " << endl;
				cin >> orient;
				switch (orient)
				{
				case 1:
				{
					for (int x = 0; x < 2; x++)
					{
						s = 0;
						if (arr[row + x][column] == "*")
						{
							arr[row + x][column] = "D";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								arr[row + i][column] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count5--;
						i--;
						break;
					}
					else
					{
						system("cls");
						cout << " 0 1 2 3 4 5 6 7" << endl;
						for (int i = 0, n = 0; i < 8; i++, n++)
						{
							cout << n << " ";
							for (int j = 0; j < 8; j++)
							{
								cout << arr[i][j] << ' ';
							}
							cout << endl;
						}
					}
					break;
				}
				case 2:
				{
					for (int x = 0; x < 2; x++)
					{
						s = 0;
						if (arr[row][column + x] == "*")
						{
							arr[row][column + x] = "D";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row][column + i] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count5--;
						i--;
						break;
					}
					else
					{
						system("cls");
						cout << " 0 1 2 3 4 5 6 7" << endl;
						for (int i = 0, n = 0; i < 8; i++, n++)
						{
							cout << n << " ";
							for (int j = 0; j < 8; j++)
							{
								cout << arr[i][j] << ' ';
							}
							cout << endl;
						}
					}
					break;
				}
				}
				break;
			}
			}
		}
		system("cls");
		for (int j = 1; j <= 1; j++)
		{
			cout << " player " << g << " turn " << endl;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					player[i][j] = "*";
				}
			}
			cout << "  0 1 2 3 4 5 6 7" << endl;
			for (int i = 0, n = 0; i < 8; i++, n++)
			{
				cout << n << " ";
				for (int j = 0; j < 8; j++)
				{
					cout << player[i][j] << ' ';
				}
				cout << endl;
			}
			cout << " enter  ships you want to place " << endl;
			for (int i = 1; i <= 10; i++)
			{
				int counts1 = 0, counts2 = 0, counts3 = 0, counts4 = 0, counts5 = 0;
				cout << " 1: carriers" << endl;
				cout << " 2: Battleships" << endl;
				cout << " 3: Cruisers" << endl;
				cout << " 4: Submarines" << endl;
				cout << " 5: Destroyers" << endl;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					counts1++;
					if (counts1 > 2)
					{
						cout << " you can only place 2 carriers try another ship " << endl;
						i--;
						break;
					}
					cout << " enter the row where you want to place "; cin >> row; cout << endl;
					cout << " enter the column where you want to place "; cin >> column; cout << endl;
					cout << " you want to place the ship  " << endl;
					cout << "  1: vertical " << endl;
					cout << "  2: horizontal " << endl;
					cin >> orient;
					switch (orient)
					{
					case 1:
					{
						for (int x = 0; x < 8; x++)
						{
							s = 0;
							if (player[row + x][column] == "*")
							{
								player[row + x][column] = "C";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									player[row + i][column] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts1--;
							i--;
							break;
						}
						else
						{
							system("cls");
							cout << " 0 1 2 3 4 5 6 7" << endl;
							for (int i = 0, n = 0; i < 8; i++, n++)
							{
								cout << n << " ";
								for (int j = 0; j < 8; j++)
								{
									cout << player[i][j] << ' ';
								}
								cout << endl;
							}
						}
						break;
					}
					case 2:
					{
						for (int x = 0; x < 8; x++)
						{
							s = 0;
							if (player[row][column + x] == "*")
							{
								player[row][column + x] = "C";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									player[row][column + i] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts1--;
							i--;
							break;
						}
						else
						{
							system("cls");
							cout << " 0 1 2 3 4 5 6 7" << endl;
							for (int i = 0, n = 0; i < 8; i++, n++)
							{
								cout << n << " ";
								for (int j = 0; j < 8; j++)
								{
									cout << player[i][j] << ' ';
								}
								cout << endl;
							}
						}
						break;
					}
					}
					break;
				}
				case 2:
				{
					counts2++;
					if (counts2 > 2)
					{
						cout << " you can only place 2 battleships try another ship " << endl;
						i--;
						break;
					}
					cout << " enter the row where you want to place "; cin >> row; cout << endl;
					cout << " enter the column where you want to place "; cin >> column; cout << endl;
					cout << " you want to place the ship  " << endl;
					cout << "  1: vertical " << endl;
					cout << "  2: horizontal " << endl;
					cin >> orient;
					switch (orient)
					{
					case 1:
					{
						for (int x = 0; x < 5; x++)
						{
							s = 0;
							if (player[row + x][column] == "*")
							{
								player[row + x][column] = "B";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									player[row + i][column] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts2--;
							i--;
							break;
						}
						else
						{
							system("cls");
							cout << "  0 1 2 3 4 5 6 7" << endl;
							for (int i = 0, n = 0; i < 8; i++, n++)
							{
								cout << n << " ";
								for (int j = 0; j < 8; j++)
								{
									cout << player[i][j] << ' ';
								}
								cout << endl;
							}
						}
						break;
					}
					case 2:
					{
						for (int x = 0; x < 5; x++)
						{
							s = 0;
							if (player[row][column + x] == "*")
							{
								player[row][column + x] = "B";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									player[row][column + i] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts2--;
							i--;
							break;
						}
						else
						{
							system("cls");
							cout << "  0 1 2 3 4 5 6 7" << endl;
							for (int i = 0, n = 0; i < 8; i++, n++)
							{
								cout << n << " ";
								for (int j = 0; j < 8; j++)
								{
									cout << player[i][j] << ' ';
								}
								cout << endl;
							}
						}
						break;
					}
					}
					break;
				}
				case 3:
				{
					counts3++;
					if (counts3 > 2)
					{
						cout << " you can only place 2 cruisers try another ship " << endl;
						i--;
						break;
					}
					cout << " enter the row where you want to place "; cin >> row; cout << endl;
					cout << " enter the column where you want to place "; cin >> column; cout << endl;
					cout << " you want to place the ship  " << endl;
					cout << "  1: vertical " << endl;
					cout << "  2: horizontal " << endl;
					cin >> orient;
					switch (orient)
					{
					case 1:
					{
						for (int x = 0; x < 4; x++)
						{
							s = 0;
							if (player[row + x][column] == "*")
							{
								player[row + x][column] = "c";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									player[row + i][column] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts3--;
							i--;
							break;
						}
						else
						{
							system("cls");
							cout << " 0 1 2 3 4 5 6 7" << endl;
							for (int i = 0, n = 0; i < 8; i++, n++)
							{
								cout << n << " ";
								for (int j = 0; j < 8; j++)
								{
									cout << player[i][j] << ' ';
								}
								cout << endl;
							}
						}
						break;
					}
					case 2:
					{
						for (int x = 0; x < 4; x++)
						{
							s = 0;
							if (player[row][column + x] == "*")
							{
								player[row][column + x] = "c";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									player[row][column + i] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts3--;
							i--;
							break;
						}
						else
						{
							system("cls");
							cout << " 0 1 2 3 4 5 6 7" << endl;
							for (int i = 0, n = 0; i < 8; i++, n++)
							{
								cout << n << " ";
								for (int j = 0; j < 8; j++)
								{
									cout << player[i][j] << ' ';
								}
								cout << endl;
							}
						}
						break;
					}
					}
					break;
				}
				case 4:
				{
					counts4++;
					if (counts4 > 2)
					{
						cout << " you can only place 2 submarines try another ship " << endl;
						i--;
						break;
					}
					cout << " enter the row where you want to place "; cin >> row; cout << endl;
					cout << " enter the column where you want to place "; cin >> column; cout << endl;
					cout << " you want to place the ship  " << endl;
					cout << "  1: vertical " << endl;
					cout << "  2: horizontal " << endl;
					cin >> orient;
					switch (orient)
					{
					case 1:
					{
						for (int x = 0; x < 3; x++)
						{
							s = 0;
							if (player[row + x][column] == "*")
							{
								player[row + x][column] = "S";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									player[row + i][column] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts4--;
							i--;
							break;
						}
						else
						{
							system("cls");
							cout << "  0 1 2 3 4 5 6 7" << endl;
							for (int i = 0, n = 0; i < 8; i++, n++)
							{
								cout << n << " ";
								for (int j = 0; j < 8; j++)
								{
									cout << player[i][j] << ' ';
								}
								cout << endl;
							}
						}
						break;
					}
					case 2:
					{
						for (int x = 0; x < 3; x++)
						{
							s = 0;
							if (player[row][column + x] == "*")
							{
								player[row][column + x] = "S";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									player[row][column + i] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts4--;
							i--;
							break;
						}
						else
						{
							system("cls");
							cout << "  0 1 2 3 4 5 6 7" << endl;
							for (int i = 0, n = 0; i < 8; i++, n++)
							{
								cout << n << " ";
								for (int j = 0; j < 8; j++)
								{
									cout << player[i][j] << ' ';
								}
								cout << endl;
							}
						}

						break;
					}
					}
					break;
				}
				case 5:
				{
					counts5++;
					if (counts5 > 2)
					{
						cout << " you can only place 2 destroyers try another ship " << endl;
						i--;
						break;
					}
					cout << " enter the row where you want to place "; cin >> row; cout << endl;
					cout << " enter the column where you want to place "; cin >> column; cout << endl;
					cout << " you want to place the ship  " << endl;
					cout << "  1: vertical " << endl;
					cout << "  2: horizontal " << endl;
					cin >> orient;
					switch (orient)
					{
					case 1:
					{
						for (int x = 0; x < 2; x++)
						{
							s = 0;
							if (player[row + x][column] == "*")
							{
								player[row + x][column] = "D";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									player[row + i][column] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts5--;
							i--;
							break;
						}
						else
						{
							system("cls");
							cout << " 0 1 2 3 4 5 6 7" << endl;
							for (int i = 0, n = 0; i < 8; i++, n++)
							{
								cout << n << " ";
								for (int j = 0; j < 8; j++)
								{
									cout << player[i][j] << ' ';
								}
								cout << endl;
							}
						}
						break;
					}
					case 2:
					{
						for (int x = 0; x < 2; x++)
						{
							s = 0;
							if (player[row][column + x] == "*")
							{
								player[row][column + x] = "D";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									player[row][column + i] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts5--;
							i--;
							break;
						}
						else
						{
							system("cls");
							cout << " 0 1 2 3 4 5 6 7" << endl;
							for (int i = 0, n = 0; i < 8; i++, n++)
							{
								cout << n << " ";
								for (int j = 0; j < 8; j++)
								{
									cout << player[i][j] << ' ';
								}
								cout << endl;
							}
						}
						break;
					}
					}
					break;
				}
				}
			}
		}
	}
	playGameEasy();
}
int playGameEasy()
{
	int row, column, win = 0, cruiser = 0, carriers = 0, battle = 0, submarine = 0, destroyer = 0, ship = 0;
	int cruisers = 0, carrier = 0, battles = 0, submarines = 0, destroyers = 0, ships = 0;
	string copy[15][15];
	cout << " lets start the game " << endl;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			copy[i][j] = "*";
		}
	}
	cout << " 0 1 2 3 4 5 6 7" << endl;
	for (int i = 0, n = 0; i < 8; i++, n++)
	{
		cout << n << " ";
		for (int j = 0; j < 8; j++)
		{
			cout << copy[i][j] << ' ';
		}
		cout << endl;
	}
	while (win == 0)
	{
		for (int i = 1; i <= 1; i++)
		{
			cout << " player " << toss << " turn " << endl << endl;
			cout << " play your move " << endl;
			cout << " enter the row you want to tic "; cin >> row; cout << endl;
			cout << " enter the column you want to tic "; cin >> column; cout << endl;
			if (player[row][column] == "C")
			{
				cout << " you hit the ship " << endl;
				carriers++;
				if (carriers == 8)
				{
					cout << " you sank the opponent carrier ship " << endl;
					ship++;
				}
			}
			else if (player[row][column] == "B")
			{
				cout << " you hit the ship " << endl;
				battle++;
				if (battle == 5)
				{
					cout << " you hit opponent battlship " << endl;
					ship++;
				}
			}
			else if (player[row][column] == "c")
			{
				cout << " you hit the ship " << endl;
				cruiser++;
				if (cruiser == 4)
				{
					cout << " you sank the opponent cruiser ship " << endl;
					ship++;
				}
			}
			else if (player[row][column] == "S")
			{
				cout << " you hit the ship " << endl;
				submarine++;
				if (submarine == 3)
				{
					cout << " you sank the opponent submarine ship " << endl;
					ship++;
				}
			}
			else if (player[row][column] == "D")
			{
				cout << " you hit the ship " << endl;
				destroyer++;
				if (destroyer == 2)
				{
					cout << " you sank the opponent destroyer  ship " << endl;
					ship++;
				}
			}
			else
			{
				cout << " you miss " << endl;
			}
			if (ship == 10)
			{
				cout << " you win " << endl;
				win++;
				break;
			}
			for (int j = 1; j <= 1; j++)
			{
				cout << " player " << g << " turn " << endl << endl;
				cout << " play your move " << endl;
				cout << " enter the row you want to tic "; cin >> row; cout << endl;
				cout << " enter the column you want to tic "; cin >> column; cout << endl;
				if (player[row][column] == "C")
				{
					cout << " you hit the ship " << endl;
					carrier++;
					if (carriers == 8)
					{
						cout << " oyu sank the opponent carrier ship " << endl;
						ships++;
					}
				}
				else if (player[row][column] == "B")
				{
					cout << " you hit the ship " << endl;
					battles++;
					if (battle == 5)
					{
						cout << " you hit opponent battlship " << endl;
						ships++;
					}
				}
				else if (player[row][column] == "c")
				{
					cout << " you hit the ship " << endl;
					cruisers++;
					if (cruiser == 4)
					{
						cout << " you sank the opponent cruiser ship " << endl;
						ships++;
					}
				}
				else if (player[row][column] == "S")
				{
					cout << " you hit the ship " << endl;
					submarines++;
					if (submarine == 3)
					{
						cout << " you sank the opponent submarine ship " << endl;
						ships++;
					}
				}
				else if (player[row][column] == "D")
				{
					cout << " you hit the ship " << endl;
					destroyers++;
					if (destroyer == 2)
					{
						cout << " you sank the opponent destroyer  ship " << endl;
						ships++;
					}
				}
				else
				{
					cout << " you miss " << endl;
				}
				if (ships == 10)
				{
					cout << " you win " << endl;
					win++;
					break;
				}
			}
			}
		
	}
	
	return 0;
}
void mediumMode()
{
	int choice, row = 0, column = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
	int orient,s=0;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			arr[i][j] = "*";
		}
	}
	cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
	for (int i = 0, n = 0; i < 12; i++, n++)
	{
		if (i < 10)
		{
			cout << n << "  ";
		}
		else
		{
			cout << n << " ";
		}
		for (int j = 0; j < 12; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
	for (int i = 1; i <= 1; i++)
	{
		cout << " player " << toss << " turns" << endl;
		cout << " enter ships you want to place " << endl;
		for (int i = 1; i <= 15; i++)
		{
			cout << " 1: carriers" << endl;
			cout << " 2: Battleships" << endl;
			cout << " 3: Cruisers" << endl;
			cout << " 4: Submarines" << endl;
			cout << " 5: Destroyers" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1:
			{
				count1++;
				if (count1 > 3)
				{
					cout << " you can only place 3 carriers try another ship " << endl;
					i--;
					break;
				}
				cout << " enter the row where you want to place "; cin >> row; cout << endl;
				cout << " enter the column where you want to place "; cin >> column; cout << endl;
				cout << " you want to place the ship  " << endl;
				cout << "  1: vertical " << endl;
				cout << "  2: horizontal " << endl;
				cin >> orient;
				switch (orient)
				{
				case 1:
				{
					for (int x = 0; x < 8; x++)
					{
						s = 0;
						if (arr[row + x][column] == "*")
						{
							arr[row + x][column] = "C";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row + i][column] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count1--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
					for (int i = 0, n = 0; i < 12; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 12; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				case 2:
				{
					for (int x = 0; x < 8; x++)
					{
						s = 0;
						if (arr[row][column + x] == "*")
						{
							arr[row][column + x] = "C";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row][column + i] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count1--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
					for (int i = 0, n = 0; i < 12; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 12; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				}
				break;
			}
			case 2:
			{
				count2++;
				if (count2 > 3)
				{
					cout << " you can only place 3 battleships try another ship " << endl;
					i--;
					break;
				}
				cout << " enter the row where you want to place "; cin >> row; cout << endl;
				cout << " enter the column where you want to place "; cin >> column; cout << endl;
				cout << " you want to place the ship  " << endl;
				cout << "  1: vertical " << endl;
				cout << "  2: horizontal " << endl;
				cin >> orient;
				switch (orient)
				{
				case 1:
				{
					for (int x = 0; x < 5; x++)
					{
						s = 0;
						if (arr[row + x][column] == "*")
						{
							arr[row + x][column] = "B";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row + i][column] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count2--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
					for (int i = 0, n = 0; i < 12; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 12; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				case 2:
				{
					for (int x = 0; x < 5; x++)
					{
						s = 0;
						if (arr[row][column + x] == "*")
						{
							arr[row][column + x] = "B";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row][column + i] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count2--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
					for (int i = 0, n = 0; i < 12; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 12; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				}
				break;
			}
			case 3:
			{
				count3++;
				if (count3 > 3)
				{
					cout << " you can only place 3 cruisers try another ship " << endl;
					i--;
					break;
				}
				cout << " enter the row where you want to place "; cin >> row; cout << endl;
				cout << " enter the column where you want to place "; cin >> column; cout << endl;
				cout << " you want to place the ship  " << endl;
				cout << "  1: vertical " << endl;
				cout << "  2: horizontal " << endl;
				cin >> orient;
				switch (orient)
				{
				case 1:
				{
					for (int x = 0; x < 4; x++)
					{
						s = 0;
						if (arr[row + x][column] == "*")
						{
							arr[row + x][column] = "c";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row + i][column] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count3--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
					for (int i = 0, n = 0; i < 12; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 12; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				case 2:
				{
					for (int x = 0; x < 4; x++)
					{
						s = 0;
						if (arr[row][column + x] == "*")
						{
							arr[row][column + x] = "c";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row][column + i] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count3--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
					for (int i = 0, n = 0; i < 12; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 12; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				}
				break;
			}
			case 4:
			{
				count4++;
				if (count4 > 3)
				{
					cout << " you can only place 3 submarines try another ship " << endl;
					i--;
					break;
				}
				cout << " enter the row where you want to place "; cin >> row; cout << endl;
				cout << " enter the column where you want to place "; cin >> column; cout << endl;
				cout << " you want to place the ship  " << endl;
				cout << "  1: vertical " << endl;
				cout << "  2: horizontal " << endl;
				cin >> orient;
				switch (orient)
				{
				case 1:
				{
					for (int x = 0; x < 3; x++)
					{
						s = 0;
						if (arr[row + x][column] == "*")
						{
							arr[row + x][column] = "S";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row + i][column] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count4--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
					for (int i = 0, n = 0; i < 12; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 12; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				case 2:
				{
					for (int x = 0; x < 3; x++)
					{
						s = 0;
						if (arr[row][column + x] == "*")
						{
							arr[row][column + x] = "S";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row][column + i] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count4--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
					for (int i = 0, n = 0; i < 12; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 12; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				}
				break;
			}
			case 5:
			{
				count5++;
				if (count5 > 3)
				{
					cout << " you can only place 3 destroyers try another ship " << endl;
					i--;
					break;
				}
				cout << " enter the row where you want to place "; cin >> row; cout << endl;
				cout << " enter the column where you want to place "; cin >> column; cout << endl;
				cout << " you want to place the ship  " << endl;
				cout << "  1: vertical " << endl;
				cout << "  2: horizontal " << endl;
				cin >> orient;
				switch (orient)
				{
				case 1:
				{
					for (int x = 0; x < 2; x++)
					{
						s = 0;
						if (arr[row + x][column] == "*")
						{
							arr[row + x][column] = "D";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row + i][column] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count5--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
					for (int i = 0, n = 0; i < 12; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 12; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				case 2:
				{for (int x = 0; x < 2; x++)
				{
					s = 0;
					if (arr[row][column + x] == "*")
					{
						arr[row][column + x] = "D";
					}
					else
					{
						for (int i = 0; i < x; i++)
						{
							cout << row;
							arr[row][column + i] = "*";
						}
						cout << " ship over lapping or out of playing board try another location " << endl;
						s++;
						break;
					}
				}
				if (s > 0)
				{
					count5--;
					i--;
					break;
				}
				system("cls");
				cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
				for (int i = 0, n = 0; i < 12; i++, n++)
				{
					if (i < 10)
					{
						cout << n << "  ";
					}
					else
					{
						cout << n << " ";
					}
					for (int j = 0; j < 12; j++)
					{
						cout << arr[i][j] << "  ";
					}
					cout << endl;
				}
				break;
				}
				}
				break;
			}
			}
		}
		for (int i = 1; i <= 1; i++)
		{
			cout << " player " << g << " turns" << endl;
			cout << " enter ships you want to place " << endl;
			for (int i = 1; i <= 15; i++)
			{
				int counts1 = 0, counts2 = 0, counts3 = 0, counts4 = 0, counts5 = 0;
				cout << " 1: carriers" << endl;
				cout << " 2: Battleships" << endl;
				cout << " 3: Cruisers" << endl;
				cout << " 4: Submarines" << endl;
				cout << " 5: Destroyers" << endl;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					counts1++;
					if (counts1 > 3)
					{
						cout << " you can only place 3 carriers try another ship " << endl;
						i--;
						break;
					}
					cout << " enter the row where you want to place "; cin >> row; cout << endl;
					cout << " enter the column where you want to place "; cin >> column; cout << endl;
					cout << " you want to place the ship  " << endl;
					cout << "  1: vertical " << endl;
					cout << "  2: horizontal " << endl;
					cin >> orient;
					switch (orient)
					{
					case 1:
					{
						for (int x = 0; x < 8; x++)
						{
							s = 0;
							if (arr[row + x][column] == "*")
							{
								arr[row + x][column] = "C";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row + i][column] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts1--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
						for (int i = 0, n = 0; i < 12; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 12; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					case 2:
					{
						for (int x = 0; x < 8; x++)
						{
							s = 0;
							if (arr[row][column + x] == "*")
							{
								arr[row][column + x] = "C";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row][column + i] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts1--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
						for (int i = 0, n = 0; i < 12; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 12; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					}
					break;
				}
				case 2:
				{
					counts2++;
					if (counts2 > 3)
					{
						cout << " you can only place 3 battleships try another ship " << endl;
						i--;
						break;
					}
					cout << " enter the row where you want to place "; cin >> row; cout << endl;
					cout << " enter the column where you want to place "; cin >> column; cout << endl;
					cout << " you want to place the ship  " << endl;
					cout << "  1: vertical " << endl;
					cout << "  2: horizontal " << endl;
					cin >> orient;
					switch (orient)
					{
					case 1:
					{
						for (int x = 0; x < 5; x++)
						{
							s = 0;
							if (arr[row + x][column] == "*")
							{
								arr[row + x][column] = "B";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row + i][column] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts2--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
						for (int i = 0, n = 0; i < 12; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 12; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					case 2:
					{
						for (int x = 0; x < 5; x++)
						{
							s = 0;
							if (arr[row][column + x] == "*")
							{
								arr[row][column + x] = "B";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row][column + i] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts2--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
						for (int i = 0, n = 0; i < 12; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 12; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					}
					break;
				}
				case 3:
				{
					counts3++;
					if (counts3 > 3)
					{
						cout << " you can only place 3 cruisers try another ship " << endl;
						i--;
						break;
					}
					cout << " enter the row where you want to place "; cin >> row; cout << endl;
					cout << " enter the column where you want to place "; cin >> column; cout << endl;
					cout << " you want to place the ship  " << endl;
					cout << "  1: vertical " << endl;
					cout << "  2: horizontal " << endl;
					cin >> orient;
					switch (orient)
					{
					case 1:
					{
						for (int x = 0; x < 4; x++)
						{
							s = 0;
							if (arr[row + x][column] == "*")
							{
								arr[row + x][column] = "c";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row + i][column] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts3--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
						for (int i = 0, n = 0; i < 12; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 12; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					case 2:
					{
						for (int x = 0; x < 4; x++)
						{
							s = 0;
							if (arr[row][column + x] == "*")
							{
								arr[row][column + x] = "c";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row][column + i] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts3--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
						for (int i = 0, n = 0; i < 12; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 12; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					}
					break;
				}
				case 4:
				{
					counts4++;
					if (counts4 > 3)
					{
						cout << " you can only place 3 submarines try another ship " << endl;
						i--;
						break;
					}
					cout << " enter the row where you want to place "; cin >> row; cout << endl;
					cout << " enter the column where you want to place "; cin >> column; cout << endl;
					cout << " you want to place the ship  " << endl;
					cout << "  1: vertical " << endl;
					cout << "  2: horizontal " << endl;
					cin >> orient;
					switch (orient)
					{
					case 1:
					{
						for (int x = 0; x < 3; x++)
						{
							s = 0;
							if (arr[row + x][column] == "*")
							{
								arr[row + x][column] = "S";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row + i][column] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts4--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
						for (int i = 0, n = 0; i < 12; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 12; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					case 2:
					{
						for (int x = 0; x < 3; x++)
						{
							s = 0;
							if (arr[row][column + x] == "*")
							{
								arr[row][column + x] = "S";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row][column + i] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts4--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
						for (int i = 0, n = 0; i < 12; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 12; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					}
					break;
				}
				case 5:
				{
					counts5++;
					if (counts5 > 3)
					{
						cout << " you can only place 3 destroyers try another ship " << endl;
						i--;
						break;
					}
					cout << " enter the row where you want to place "; cin >> row; cout << endl;
					cout << " enter the column where you want to place "; cin >> column; cout << endl;
					cout << " you want to place the ship  " << endl;
					cout << "  1: vertical " << endl;
					cout << "  2: horizontal " << endl;
					cin >> orient;
					switch (orient)
					{
					case 1:
					{
						for (int x = 0; x < 2; x++)
						{
							s = 0;
							if (arr[row + x][column] == "*")
							{
								arr[row + x][column] = "D";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row + i][column] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts5--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
						for (int i = 0, n = 0; i < 12; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 12; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					case 2:
					{for (int x = 0; x < 2; x++)
					{
						s = 0;
						if (arr[row][column + x] == "*")
						{
							arr[row][column + x] = "D";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row][column + i] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						counts5--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
					for (int i = 0, n = 0; i < 12; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 12; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
					}
					}
					break;
				}
				}
			}
		}
	}
	playGameMedium();
}
int playGameMedium()
{
	int row, column, win = 0, cruiser = 0, carriers = 0, battle = 0, submarine = 0, destroyer = 0, ship = 0;
	int cruisers = 0, carrier = 0, battles = 0, submarines = 0, destroyers = 0, ships = 0;
	string copy[15][15];
	cout << " lets start the game " << endl;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			copy[i][j] = "*";
		}
	}
	cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
	for (int i = 0, n = 0; i < 12; i++, n++)
	{
		cout << n << " ";
		for (int j = 0; j < 12; j++)
		{
			cout << copy[i][j] << ' ';
		}
		cout << endl;
	}
	while (win == 0)
	{
		for (int i = 1; i <= 1; i++)
		{
			cout << " player " << toss << " turn " << endl << endl;
			cout << " play your move " << endl;
			cout << " enter the row you want to tic "; cin >> row; cout << endl;
			cout << " enter the column you want to tic "; cin >> column; cout << endl;
			if (player[row][column] == "C")
			{
				cout << " you hit the ship " << endl;
				carriers++;
				if (carriers == 8)
				{
					cout << " you sank the opponent carrier ship " << endl;
					ship++;
				}
			}
			else if (player[row][column] == "B")
			{
				cout << " you hit the ship " << endl;
				battle++;
				if (battle == 5)
				{
					cout << " you hit opponent battlship " << endl;
					ship++;
				}
			}
			else if (player[row][column] == "c")
			{
				cout << " you hit the ship " << endl;
				cruiser++;
				if (cruiser == 4)
				{
					cout << " you sank the opponent cruiser ship " << endl;
					ship++;
				}
			}
			else if (player[row][column] == "S")
			{
				cout << " you hit the ship " << endl;
				submarine++;
				if (submarine == 3)
				{
					cout << " you sank the opponent submarine ship " << endl;
					ship++;
				}
			}
			else if (player[row][column] == "D")
			{
				cout << " you hit the ship " << endl;
				destroyer++;
				if (destroyer == 2)
				{
					cout << " you sank the opponent destroyer  ship " << endl;
					ship++;
				}
			}
			else
			{
				cout << " you miss " << endl;
			}
			if (ship == 15)
			{
				cout << " you win " << endl;
				win++;
				break;
			}
			for (int j = 1; j <= 1; j++)
			{
				cout << " player " << g << " turn " << endl << endl;
				cout << " play your move " << endl;
				cout << " enter the row you want to tic "; cin >> row; cout << endl;
				cout << " enter the column you want to tic "; cin >> column; cout << endl;
				if (player[row][column] == "C")
				{
					cout << " you hit the ship " << endl;
					carrier++;
					if (carriers == 8)
					{
						cout << " oyu sank the opponent carrier ship " << endl;
						ships++;
					}
				}
				else if (player[row][column] == "B")
				{
					cout << " you hit the ship " << endl;
					battles++;
					if (battle == 5)
					{
						cout << " you hit opponent battlship " << endl;
						ships++;
					}
				}
				else if (player[row][column] == "c")
				{
					cout << " you hit the ship " << endl;
					cruisers++;
					if (cruiser == 4)
					{
						cout << " you sank the opponent cruiser ship " << endl;
						ships++;
					}
				}
				else if (player[row][column] == "S")
				{
					cout << " you hit the ship " << endl;
					submarines++;
					if (submarine == 3)
					{
						cout << " you sank the opponent submarine ship " << endl;
						ships++;
					}
				}
				else if (player[row][column] == "D")
				{
					cout << " you hit the ship " << endl;
					destroyers++;
					if (destroyer == 2)
					{
						cout << " you sank the opponent destroyer  ship " << endl;
						ships++;
					}
				}
				else
				{
					cout << " you miss " << endl;
				}
				if (ships == 15)
				{
					cout << " you win " << endl;
					win++;
					break;
				}
			}
		}

	}

	return 0;
}
void hardMode()
{
	int choice, row = 0, column = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
	int orient,s=0;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			arr[i][j] = "*";
		}
	}
	cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
	for (int i = 0, n = 0; i < 15; i++, n++)
	{
		if (i < 10)
		{
			cout << n << "  ";
		}
		else
		{
			cout << n << " ";
		}
		for (int j = 0; j < 15; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
	for (int i = 1; i <= 1; i++)
	{
		cout << " palyer " << toss << " turns " << endl;
		cout << " enter ships you want to place " << endl;
		for (int i = 1; i <= 20; i++)
		{
			cout << " 1: carriers" << endl;
			cout << " 2: Battleships" << endl;
			cout << " 3: Cruisers" << endl;
			cout << " 4: Submarines" << endl;
			cout << " 5: Destroyers" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1:
			{
				count1++;
				if (count1 > 4)
				{
					cout << " you can only place 4 carriers try another ship " << endl;
					i--;
					break;
				}
				cout << " enter the row where you want to place "; cin >> row; cout << endl;
				cout << " enter the column where you want to place "; cin >> column; cout << endl;
				cout << " you want to place the ship  " << endl;
				cout << "  1: vertical " << endl;
				cout << "  2: horizontal " << endl;
				cin >> orient;
				switch (orient)
				{
				case 1:
				{
					for (int x = 0; x < 8; x++)
					{
						s = 0;
						if (arr[row + x][column] == "*")
						{
							arr[row + x][column] = "C";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row + i][column] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count1--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
					for (int i = 0, n = 0; i < 15; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 15; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				case 2:
				{
					for (int x = 0; x < 8; x++)
					{
						s = 0;
						if (arr[row][column + x] == "*")
						{
							arr[row][column + x] = "C";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row][column + i] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count1--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
					for (int i = 0, n = 0; i < 15; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 15; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				}
				break;
			}
			case 2:
			{
				count2++;
				if (count2 > 4)
				{
					cout << " you can only place 4 battleships try another ship " << endl;
					i--;
					break;
				}
				cout << " enter the row where you want to place "; cin >> row; cout << endl;
				cout << " enter the column where you want to place "; cin >> column; cout << endl;
				cout << " you want to place the ship  " << endl;
				cout << "  1: vertical " << endl;
				cout << "  2: horizontal " << endl;
				cin >> orient;
				switch (orient)
				{
				case 1:
				{
					for (int x = 0; x < 5; x++)
					{
						s = 0;
						if (arr[row + x][column] == "*")
						{
							arr[row + x][column] = "B";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row + i][column] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count5--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
					for (int i = 0, n = 0; i < 15; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 15; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				case 2:
				{
					for (int x = 0; x < 5; x++)
					{
						s = 0;
						if (arr[row][column + x] == "*")
						{
							arr[row][column + x] = "B";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row][column + i] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count2--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
					for (int i = 0, n = 0; i < 15; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 15; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				}
				break;
			}
			case 3:
			{
				count3++;
				if (count3 > 4)
				{
					cout << " you can only place 4 cruisers try another ship " << endl;
					i--;
					break;
				}
				cout << " enter the row where you want to place "; cin >> row; cout << endl;
				cout << " enter the column where you want to place "; cin >> column; cout << endl;
				cout << " you want to place the ship  " << endl;
				cout << "  1: vertical " << endl;
				cout << "  2: horizontal " << endl;
				cin >> orient;
				switch (orient)
				{
				case 1:
				{
					for (int x = 0; x < 4; x++)
					{
						s = 0;
						if (arr[row + x][column] == "*")
						{
							arr[row + x][column] = "c";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row + i][column] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count3--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
					for (int i = 0, n = 0; i < 15; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 15; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				case 2:
				{
					for (int x = 0; x < 4; x++)
					{
						s = 0;
						if (arr[row][column + x] == "*")
						{
							arr[row][column + x] = "c";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row][column + i] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count3--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
					for (int i = 0, n = 0; i < 15; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 15; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				}
				break;
			}
			case 4:
			{
				count4++;
				if (count4 > 4)
				{
					cout << " you can only place 4 submarines try another ship " << endl;
					i--;
					break;
				}
				cout << " enter the row where you want to place "; cin >> row; cout << endl;
				cout << " enter the column where you want to place "; cin >> column; cout << endl;
				cout << " you want to place the ship  " << endl;
				cout << "  1: vertical " << endl;
				cout << "  2: horizontal " << endl;
				cin >> orient;
				switch (orient)
				{
				case 1:
				{
					for (int x = 0; x < 3; x++)
					{
						s = 0;
						if (arr[row + x][column] == "*")
						{
							arr[row + x][column] = "S";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row + i][column] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count4--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
					for (int i = 0, n = 0; i < 15; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 15; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				case 2:
				{
					for (int x = 0; x < 3; x++)
					{
						s = 0;
						if (arr[row][column + x] == "*")
						{
							arr[row][column + x] = "S";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row][column + i] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count4--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
					for (int i = 0, n = 0; i < 15; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 15; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				}
				break;
			}
			case 5:
			{
				count5++;
				if (count5 > 4)
				{
					cout << " you can only place 4 destroyers try another ship " << endl;
					i--;
					break;
				}
				cout << " enter the row where you want to place "; cin >> row; cout << endl;
				cout << " enter the column where you want to place "; cin >> column; cout << endl;
				cout << " you want to place the ship  " << endl;
				cout << "  1: vertical " << endl;
				cout << "  2: horizontal " << endl;
				cin >> orient;
				switch (orient)
				{
				case 1:
				{
					for (int x = 0; x < 2; x++)
					{
						s = 0;
						if (arr[row + x][column] == "*")
						{
							arr[row + x][column] = "D";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row + i][column] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count5--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
					for (int i = 0, n = 0; i < 15; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 15; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				case 2:
				{
					for (int x = 0; x < 2; x++)
					{
						s = 0;
						if (arr[row][column + x] == "*")
						{
							arr[row][column + x] = "D";
						}
						else
						{
							for (int i = 0; i < x; i++)
							{
								cout << row;
								arr[row][column + i] = "*";
							}
							cout << " ship over lapping or out of playing board try another location " << endl;
							s++;
							break;
						}
					}
					if (s > 0)
					{
						count5--;
						i--;
						break;
					}
					system("cls");
					cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
					for (int i = 0, n = 0; i < 15; i++, n++)
					{
						if (i < 10)
						{
							cout << n << "  ";
						}
						else
						{
							cout << n << " ";
						}
						for (int j = 0; j < 15; j++)
						{
							cout << arr[i][j] << "  ";
						}
						cout << endl;
					}
					break;
				}
				}
				break;
			}
			}
		}
		for (int i = 1; i <= 1; i++)
		{
			int counts1 = 0, counts2 = 0, counts3 = 0, counts4 = 0, counts5 = 0;
			cout << " palyer " << toss << " g " << endl;
			cout << " enter ships you want to place " << endl;
			for (int i = 1; i <= 20; i++)
			{
				cout << " 1: carriers" << endl;
				cout << " 2: Battleships" << endl;
				cout << " 3: Cruisers" << endl;
				cout << " 4: Submarines" << endl;
				cout << " 5: Destroyers" << endl;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					counts1++;
					if (counts1 > 4)
					{
						cout << " you can only place 4 carriers try another ship " << endl;
						i--;
						break;
					}
					cout << " enter the row where you want to place "; cin >> row; cout << endl;
					cout << " enter the column where you want to place "; cin >> column; cout << endl;
					cout << " you want to place the ship  " << endl;
					cout << "  1: vertical " << endl;
					cout << "  2: horizontal " << endl;
					cin >> orient;
					switch (orient)
					{
					case 1:
					{
						for (int x = 0; x < 8; x++)
						{
							s = 0;
							if (arr[row + x][column] == "*")
							{
								arr[row + x][column] = "C";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row + i][column] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts1--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
						for (int i = 0, n = 0; i < 15; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 15; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					case 2:
					{
						for (int x = 0; x < 8; x++)
						{
							s = 0;
							if (arr[row][column + x] == "*")
							{
								arr[row][column + x] = "C";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row][column + i] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts1--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
						for (int i = 0, n = 0; i < 15; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 15; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					}
					break;
				}
				case 2:
				{
					counts2++;
					if (counts2 > 4)
					{
						cout << " you can only place 4 battleships try another ship " << endl;
						i--;
						break;
					}
					cout << " enter the row where you want to place "; cin >> row; cout << endl;
					cout << " enter the column where you want to place "; cin >> column; cout << endl;
					cout << " you want to place the ship  " << endl;
					cout << "  1: vertical " << endl;
					cout << "  2: horizontal " << endl;
					cin >> orient;
					switch (orient)
					{
					case 1:
					{
						for (int x = 0; x < 5; x++)
						{
							s = 0;
							if (arr[row + x][column] == "*")
							{
								arr[row + x][column] = "B";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row + i][column] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts2--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
						for (int i = 0, n = 0; i < 15; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 15; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					case 2:
					{
						for (int x = 0; x < 5; x++)
						{
							s = 0;
							if (arr[row][column + x] == "*")
							{
								arr[row][column + x] = "B";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row][column + i] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts2--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
						for (int i = 0, n = 0; i < 15; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 15; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					}
					break;
				}
				case 3:
				{
					count3++;
					if (counts3 > 4)
					{
						cout << " you can only place 4 cruisers try another ship " << endl;
						i--;
						break;
					}
					cout << " enter the row where you want to place "; cin >> row; cout << endl;
					cout << " enter the column where you want to place "; cin >> column; cout << endl;
					cout << " you want to place the ship  " << endl;
					cout << "  1: vertical " << endl;
					cout << "  2: horizontal " << endl;
					cin >> orient;
					switch (orient)
					{
					case 1:
					{
						for (int x = 0; x < 4; x++)
						{
							s = 0;
							if (arr[row + x][column] == "*")
							{
								arr[row + x][column] = "c";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row + i][column] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts3--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
						for (int i = 0, n = 0; i < 15; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 15; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					case 2:
					{
						for (int x = 0; x < 4; x++)
						{
							s = 0;
							if (arr[row][column + x] == "*")
							{
								arr[row][column + x] = "c";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row][column + i] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts3--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
						for (int i = 0, n = 0; i < 15; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 15; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					}
					break;
				}
				case 4:
				{
					counts4++;
					if (counts4 > 4)
					{
						cout << " you can only place 4 submarines try another ship " << endl;
						i--;
						break;
					}
					cout << " enter the row where you want to place "; cin >> row; cout << endl;
					cout << " enter the column where you want to place "; cin >> column; cout << endl;
					cout << " you want to place the ship  " << endl;
					cout << "  1: vertical " << endl;
					cout << "  2: horizontal " << endl;
					cin >> orient;
					switch (orient)
					{
					case 1:
					{
						for (int x = 0; x < 3; x++)
						{
							s = 0;
							if (arr[row + x][column] == "*")
							{
								arr[row + x][column] = "S";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row + i][column] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts4--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
						for (int i = 0, n = 0; i < 15; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 15; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					case 2:
					{
						for (int x = 0; x < 3; x++)
						{
							s = 0;
							if (arr[row][column + x] == "*")
							{
								arr[row][column + x] = "S";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row][column + i] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts4--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
						for (int i = 0, n = 0; i < 15; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 15; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					}
					break;
				}
				case 5:
				{
					counts5++;
					if (counts5 > 4)
					{
						cout << " you can only place 4 destroyers try another ship " << endl;
						i--;
						break;
					}
					cout << " enter the row where you want to place "; cin >> row; cout << endl;
					cout << " enter the column where you want to place "; cin >> column; cout << endl;
					cout << " you want to place the ship  " << endl;
					cout << "  1: vertical " << endl;
					cout << "  2: horizontal " << endl;
					cin >> orient;
					switch (orient)
					{
					case 1:
					{
						for (int x = 0; x < 2; x++)
						{
							s = 0;
							if (arr[row + x][column] == "*")
							{
								arr[row + x][column] = "D";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row + i][column] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts5--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
						for (int i = 0, n = 0; i < 15; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 15; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					case 2:
					{
						for (int x = 0; x < 2; x++)
						{
							s = 0;
							if (arr[row][column + x] == "*")
							{
								arr[row][column + x] = "D";
							}
							else
							{
								for (int i = 0; i < x; i++)
								{
									cout << row;
									arr[row][column + i] = "*";
								}
								cout << " ship over lapping or out of playing board try another location " << endl;
								s++;
								break;
							}
						}
						if (s > 0)
						{
							counts5--;
							i--;
							break;
						}
						system("cls");
						cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14" << endl;
						for (int i = 0, n = 0; i < 15; i++, n++)
						{
							if (i < 10)
							{
								cout << n << "  ";
							}
							else
							{
								cout << n << " ";
							}
							for (int j = 0; j < 15; j++)
							{
								cout << arr[i][j] << "  ";
							}
							cout << endl;
						}
						break;
					}
					}
					break;
				}
				}
			}
		}
	}
	playGameHard();
}
int playGameHard()
{
	int row, column, win = 0, cruiser = 0, carriers = 0, battle = 0, submarine = 0, destroyer = 0, ship = 0;
	int cruisers = 0, carrier = 0, battles = 0, submarines = 0, destroyers = 0, ships = 0;
	string copy[15][15];
	cout << " lets start the game " << endl;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			copy[i][j] = "*";
		}
	}
	cout << "   0  1  2  3  4  5  6  7  8  9  10 11" << endl;
	for (int i = 0, n = 0; i < 12; i++, n++)
	{
		cout << n << " ";
		for (int j = 0; j < 12; j++)
		{
			cout << copy[i][j] << ' ';
		}
		cout << endl;
	}
	while (win == 0)
	{
		for (int i = 1; i <= 1; i++)
		{
			cout << " player " << toss << " turn " << endl << endl;
			cout << " play your move " << endl;
			cout << " enter the row you want to tic "; cin >> row; cout << endl;
			cout << " enter the column you want to tic "; cin >> column; cout << endl;
			if (player[row][column] == "C")
			{
				cout << " you hit the ship " << endl;
				carriers++;
				if (carriers == 8)
				{
					cout << " you sank the opponent carrier ship " << endl;
					ship++;
				}
			}
			else if (player[row][column] == "B")
			{
				cout << " you hit the ship " << endl;
				battle++;
				if (battle == 5)
				{
					cout << " you hit opponent battlship " << endl;
					ship++;
				}
			}
			else if (player[row][column] == "c")
			{
				cout << " you hit the ship " << endl;
				cruiser++;
				if (cruiser == 4)
				{
					cout << " you sank the opponent cruiser ship " << endl;
					ship++;
				}
			}
			else if (player[row][column] == "S")
			{
				cout << " you hit the ship " << endl;
				submarine++;
				if (submarine == 3)
				{
					cout << " you sank the opponent submarine ship " << endl;
					ship++;
				}
			}
			else if (player[row][column] == "D")
			{
				cout << " you hit the ship " << endl;
				destroyer++;
				if (destroyer == 2)
				{
					cout << " you sank the opponent destroyer  ship " << endl;
					ship++;
				}
			}
			else
			{
				cout << " you miss " << endl;
			}
			if (ship == 20)
			{
				cout << " you win " << endl;
				win++;
				break;
			}
			for (int j = 1; j <= 1; j++)
			{
				cout << " player " << g << " turn " << endl << endl;
				cout << " play your move " << endl;
				cout << " enter the row you want to tic "; cin >> row; cout << endl;
				cout << " enter the column you want to tic "; cin >> column; cout << endl;
				if (player[row][column] == "C")
				{
					cout << " you hit the ship " << endl;
					carrier++;
					if (carriers == 8)
					{
						cout << " oyu sank the opponent carrier ship " << endl;
						ships++;
					}
				}
				else if (player[row][column] == "B")
				{
					cout << " you hit the ship " << endl;
					battles++;
					if (battle == 5)
					{
						cout << " you hit opponent battlship " << endl;
						ships++;
					}
				}
				else if (player[row][column] == "c")
				{
					cout << " you hit the ship " << endl;
					cruisers++;
					if (cruiser == 4)
					{
						cout << " you sank the opponent cruiser ship " << endl;
						ships++;
					}
				}
				else if (player[row][column] == "S")
				{
					cout << " you hit the ship " << endl;
					submarines++;
					if (submarine == 3)
					{
						cout << " you sank the opponent submarine ship " << endl;
						ships++;
					}
				}
				else if (player[row][column] == "D")
				{
					cout << " you hit the ship " << endl;
					destroyers++;
					if (destroyer == 2)
					{
						cout << " you sank the opponent destroyer  ship " << endl;
						ships++;
					}
				}
				else
				{
					cout << " you miss " << endl;
				}
				if (ships == 20)
				{
					cout << " you win " << endl;
					win++;
					break;
				}
			}
		}

	}

	return 0;
}

	
