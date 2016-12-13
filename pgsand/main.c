/* ************************************************************************** */
/*                                                                            */
/*                                            __    __   ______   _______     */
/*   main.c                                  /  |  /  | /      \ /       \    */
/*                                           $$ |  $$ |/$$$$$$  |$$$$$$$  |   */
/*   juk3 <admin@rejects.com>                $$ |__$$ |$$____$$ |$$ |__$$ |   */
/*                                           $$    $$ | /    $$/ $$    $$<    */
/*   Created: 2016/12/12 05:55:02            $$$$$$$$ |/$$$$$$/  $$$$$$$  |   */
/*   Updated: 2016/12/13 09:12:40                  $$ |$$ |_____ $$ |  $$ |   */
/*   Update by: juk3                               $$ |$$       |$$ |  $$ |   */
/*                                                 $$/ $$$$$$$$/ $$/   $$/    */
/*                                                                            */
/* ************************************************************************** */


#include "juk3.h"
void help_me(bool chess_board[8][8]);
void empty_board(int bak, int r, int c);
int	row_check(bool chess_board[8][8], int i);
int col_check(bool chess_board[8][8], int j);
int place_queen(bool chess_board[8][8], int i, int j, int q);
int alt_place_queen(bool chess_board[8][8], int i, int j, int q);
void help_place(int i, int j);
int	put_queen(bool chess_board[8][8], int i, int j, int q);
void valid_board(bool chess_board[8][8], int i, int j, int q);

/*
struct		prev_board
{
	bool chess_board[8][8];
	int i;
	int j;
	int q;
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

void	help_me(bool chess_board[8][8])
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
	bool chess_board[8][8];
//	int i;
//	int j;
//	int q;

	chess_board[8][8] = {{FALSE}};

	q = 0;
/*	i = 0;
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
*/
	ft_putstr(" you have empty board! \n");
	valid_board(chess_board, q);
}

void	valid_board(bool chess_board[8][8], q)
{
	while (q != 8)
	{
		while (i <= 7)
		{
			while (j <= 7)
			{
				place_queen(chess_board, i, j, q);
				j++;
			if 
		}
		i++;
	}
	if (q == 8)
	{
		is_valid(chess_board);
	}
}




int		row_check(bool chess_board[8][8], int i)
{
	int j;
	int queen;

	queen = 0;
	j = 0;
	while (j <= 7)
	{
		if (chess_board[i][j] == TRUE)
			queen++;
		j++;
	}
	return (queen);
}

int		col_check(bool chess_board[8][8], int j)
{
	int i;
	int queen;

	queen = 0;
	i = 0;
	while (i <= 7)
	{
		if (chess_board[i][j] == TRUE)
			queen++;
		i++;
	}
	return (queen);
}

int		is_queen(bool chess_board[8][8], int i, int j)
{
	if (chess_board[i][j] == TRUE)
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

int		l_abv(bool chess_board[8][8], int i, int j)
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

int		r_abv(bool chess_board[8][8], int i, int j)
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

int		l_bel(bool chess_board[8][8], int i, int j)
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

int		r_bel(bool chess_board[8][8], int i, int j)
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

int		diag_check(bool chess_board[8][8], int i, int j)
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
//       0 meaning that it didn't find a TRUEueen on any part
//       of the board it checked


int		put_queen(bool chess_board[8][8], int i, int j, int q)
{
	chess_board[i][j] = TRUE;
	q++;
	return (q);
}

int		place_queen(bool chess_board[8][8], int i, int j, int q)
{

//	ft_putnbr(j);
//	ft_putchar('\n');
//	i = 0;
//	while (i <= 7)
//	{
//		j = 0;
//		while (j <= 7)
//		{
			if (row_check(chess_board, i) == FALSE)
			{
				if (col_check(chess_board, j) == FALSE)
				{
					if (diag_check(chess_board, i, j) == FALSE)
					{
						put_queen(chess_board, i, j, q);
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

//	}
//	if (q != 8)
//		empty_board(++bak, i, ++j);
	return (q);
}


//int		alt_place_queen(bool chess_board[8][8], int i, int j, int q)
//{



// end of queen placement

int		main()
{
	int x;


	x = 0;
	empty_board(0, 0, 0);
	ft_putnbr(x);
	ft_putchar('\n');
	return (0);
}
