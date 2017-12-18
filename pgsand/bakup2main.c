/* ************************************************************************** */
/*                                                                            */
/*                                            __    __   ______   _______     */
/*   bakup2main.c                            /  |  /  | /      \ /       \    */
/*                                           $$ |  $$ |/$$$$$$  |$$$$$$$  |   */
/*   juk3 <admin@rejects.com>                $$ |__$$ |$$____$$ |$$ |__$$ |   */
/*                                           $$    $$ | /    $$/ $$    $$<    */
/*   Created: 2016/12/12 05:55:02            $$$$$$$$ |/$$$$$$/  $$$$$$$  |   */
/*   Updated: 2016/12/14 10:20:49                  $$ |$$ |_____ $$ |  $$ |   */
/*   Update by: juk3                               $$ |$$       |$$ |  $$ |   */
/*                                                 $$/ $$$$$$$$/ $$/   $$/    */
/*                                                                            */
/* ************************************************************************** */


#include "juk3.h"
void help_me(char chess_board[8][8]);
void empty_board(int bak, int r, int c);
int	row_check(char chess_board[8][8], int i);
int col_check(char chess_board[8][8], int j);
int place_queen(char chess_board[8][8], int i, int j, int flag);
int alt_place_queen(char chess_board[8][8], int i, int j, int flag);
void help_place(int i, int j);
int	put_queen(char chess_board[8][8], int i, int j, int flag);
void valid_board(char chess_board[8][8], int i, int j, int flag);

/*
struct		prev_board
{
	char chess_board[8][8];
	int i;
	int j;
	int flag;
};

struct previous_board failed[] =
{


*/



void	help_place(int i, int j)
{
	ft_putstr("placed a queen at: ");
	ft_putnbr(i);
	ft_putstr(", ");
	ft_putnbr(j);
	ft_putchar('\n');
}

void	help_me(char chess_board[8][8])
{
	int i;
	int j;

	i = 0;
	while (i <= 7)
	{
		j = 0;
		while (j <= 7)
		{
			ft_putchar(chess_board[i][j]);
			ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}


void	empty_board()
{
	char chess_board[8][8];
	int i;
	int j;
	int flag;

	flag = 0;
	i = 0;
	while (i <= 7)
	{
		j = 0;
		while (j <= 7)
		{
			chess_board[i][j] = 'n';
			j++;
		}
		i++;
	}

	ft_putstr(" you have empty board! \n");
	valid_board(chess_board, 0, 0, flag);
}

void	valid_board(char chess_board[8][8], int i, int j, int flag)
{
	while (flag != 8)
	{
		while (chess_board[i][j])
		{
			place_queen(chess_board, i, j, flag);
			j++;
		}
		i++;
	}
	if (flag == 8)
	{
		is_valid(chess_board);
	}
}

void	is_valid(char chess_board[8][8])
{
	char *prev_board[8][8];
	int x;

	x = 0;
	prev_board[x][8][8] = chess_board;




int		row_check(char chess_board[8][8], int i)
{
	int j;
	int queen;

	queen = 0;
	j = 0;
	while (j <= 7)
	{
		if (chess_board[i][j] == 'Q')
			queen++;
		j++;
	}
	return (queen);
}

int		col_check(char chess_board[8][8], int j)
{
	int i;
	int queen;

	queen = 0;
	i = 0;
	while (i <= 7)
	{
		if (chess_board[i][j] == 'Q')
			queen++;
		i++;
	}
	return (queen);
}

int		is_queen(char chess_board[8][8], int i, int j)
{
	if (chess_board[i][j] == 'Q')
		return 1;
	else
		return 0;
}


// diag check should check 4 directions
// to left_abv: -1, -1
// to right_abv: -1, +1
// to left_bel: +1, -1
// to right_bel: +1, +1
// send the current position here and then do diag checks

int		l_abv(char chess_board[8][8], int i, int j)
{
	int queen;

	queen = 0;
	while (i <= 7 && i >= 1 && j != 0)
	{
		i--;
		j--;
		if (is_queen(chess_board, i, j) == 1)
		{
			queen++;
			break;
		}
	}
	return (queen);
}

int		r_abv(char chess_board[8][8], int i, int j)
{
	int queen;

	queen = 0;
	while (i <= 7 && i >= 1 && j != 7)
	{
		i--;
		j++;
		if (is_queen(chess_board, i, j) == 1)
		{
			queen++;
			break;
		}
	}
	return (queen);
}

int		l_bel(char chess_board[8][8], int i, int j)
{
	int queen;

	queen = 0;
	while (i <= 6 && i >= 0 && j != 0)
	{
		i++;
		j--;
		if (is_queen(chess_board, i, j) == 1)
		{
			queen++;
			break;
		}
	}
	return (queen);
}

int		r_bel(char chess_board[8][8], int i, int j)
{
	int queen;

	queen = 0;
	while (i <= 6 && i >= 0 && j != 7)
	{
		i++;
		j++;
		if (is_queen(chess_board, i, j) == 1)
		{
			queen++;
			break;
		}
	}
	return (queen);
}

int		diag_check(char chess_board[8][8], int i, int j)
{
	if (l_abv(chess_board, i, j) != 0)
		return 1;
	if (r_abv(chess_board, i, j) != 0)
		return 1;
	if (l_bel(chess_board, i, j) != 0)
		return 1;
	if (r_bel(chess_board, i, j) != 0)
		return 1;
	else
		return 0;
}

//           ^^^^^^ DIAGNAL CHECKS ABOVE ^^^^^^
//       Place queen function starts here
//       this calls to the check system and 
//       then places a queen if all the checks come back 0
//       0 meaning that it didn't find a 'Q'ueen on any part
//       of the board it checked


int		put_queen(char chess_board[8][8], int i, int j, int flag)
{
	chess_board[i][j] = 'Q';
	flag++;
	return (flag);
}

int		place_queen(char chess_board[8][8], int i, int j, int flag)
{

//	ft_putnbr(j);
//	ft_putchar('\n');
//	i = 0;
//	while (i <= 7)
//	{
//		j = 0;
//		while (j <= 7)
//		{
//		for placing queen after starting postion should be (n-1). s(8) = 2 (8 - 2) + s(7) 
			if (row_check(chess_board, i) == 0)
			{
				if (col_check(chess_board, j) == 0)
				{
					if (diag_check(chess_board, i, j) == 0)
					{
						put_queen(chess_board, i, j, flag);
						help_place(i, j);
					}
				}
			}
//			j++;
//			help_me(chess_board);
//			ft_putchar('\n');
//			ft_putnbr(j);
//			ft_putchar('\n');
//		}
//		i++;
//	}
//	if (flag != 8)
//		empty_board(++bak, i, ++j);
	return (flag);
}


//int		alt_place_queen(char chess_board[8][8], int i, int j, int flag)
//{



// end of queen placement

int		main()
{
	int x;


	x = 0;
	empty_board();
	ft_putnbr(x);
	ft_putchar('\n');
	return (0);
}
