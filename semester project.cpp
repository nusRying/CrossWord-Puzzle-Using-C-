#include<iostream> 
#include<stdlib.h> 
#include<ctime> 
#include<windows.h> 
using namespace std;
int main()
{
	string name;
	cout << "Enter Name: ";
	cin >> name;
	cout << endl;
	int score = 0;
	char input;
	do
	{

		system("cls");
		cout <<
			"************************************CROSSWORDPUZZLE * ************************************" << 
			endl;
		{
			srand(time(NULL));
			string s[10] = { "register" , "copy"
		   ,"safeguard","coding","workshop","house","horse","beauty","chair","exams" }; 
			char puzzle[9][9];
			for (int i = 0; i < 10; i++)
			{
			for (int j = 0; j < 10; j++)
			{
			do
			puzzle[i][j] = rand();
			while (!(puzzle[i][j] >= 97 &&
		   puzzle[i][j] <= 122));
			}
			}
			int p = rand() % 10;
			int r;
			int c;
			if (s[p].length() % 2 != 0)
			{
			r = rand() % 10;
			c = rand() % 1;
			int x;
			for (x = 0, c; s[p][x] != '\0'; x++, c++)
			{
			puzzle[r][c] = s[p][c];
			}
			}
			else
			{
			r = rand() % 2;
			c = rand() % 10;
			int x;
			for (x = 0, r; s[p][x] != '\0'; x++, r++)
			puzzle[r][c] = s[p][r];
			}
			cout << endl;
			for (int i = 0; i < 10; i++)
			{
			for (int j = 0; j < 10; j++)
			cout << puzzle[i][j] << " ";
			cout << endl;
			}
			string answer;
			cout << "\nEnter word that is of length " <<
		   s[p].length() << endl;
			cin >> answer;
			if (answer == s[p])
			{
			score = score + 1;
			cout << "you won!!!" << endl;
			}
			else
			{
			cout << "You lost!!!" << endl;

			}
			}
			cout << "Play again? (y/n)";
			cin >> input;
		} while (input != 'n');
		cout << "****************************" << "GAME OVER"<<" * ***************************"<<endl; 
			cout << name << endl << "Your score is: " << score;
		cout << endl << endl << endl;
		return 0;
	}