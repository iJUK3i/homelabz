/* ************************************************************************** */
/*                                                                            */
/*                                            __    __   ______   _______     */
/*   main.c                                  /  |  /  | /      \ /       \    */
/*                                           $$ |  $$ |/$$$$$$  |$$$$$$$  |   */
/*   juk3 <admin@rejects.com>                $$ |__$$ |$$____$$ |$$ |__$$ |   */
/*                                           $$    $$ | /    $$/ $$    $$<    */
/*   Created: 2016/12/14 02:44:37            $$$$$$$$ |/$$$$$$/  $$$$$$$  |   */
/*   Updated: 2016/12/14 06:20:33                  $$ |$$ |_____ $$ |  $$ |   */
/*   Update by: juk3                               $$ |$$       |$$ |  $$ |   */
/*                                                 $$/ $$$$$$$$/ $$/   $$/    */
/*                                                                            */
/* ************************************************************************** */

#include "juk3.h"

void	print_matrix(int board[8][8])
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			ft_putchar(board[i][j]);
			ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}


int is_marked(int board[8][8], int i)
{
	int j;

	j = 0;
	while (j < 8)
	{
		if (board[i][j] == 'Q')
		{
			break;
		}
		else
		{
			j++;
		}
	}
	ft_putnbr(j);
	ft_putstr(" this is debug \n");
	return (j);
}


int check(int board[8][8], int row, int col)
{
	int be_row;
	int be_col;
	int return_value;

	return_value = 0;
	be_row = 0;
	while (be_row < 8)
	{
		be_col = is_marked(board, be_row);
		if (col != be_col && abs(row - be_row) != abs(col - be_col))
			return_value = 1;
		else
			be_row++;
	}
	return (return_value);
}

void nqueen(int board[8][8], int i)
{
	int j;


	print_matrix(board);

	if (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (check(board, i, j))
			{
				board[i][j] = 'Q';
				nqueen(board, i + 1);
				board[i][j] = '.';
			}
			j++;
		}
	}
	else
	{
		ft_putstr(" print board \n");
		print_matrix(board);
	}
}

int		main()
{

	int board[8][8];
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			board[i][j] = '.';
			j++;
		}
		i++;
	}

	nqueen(board, 0);
	return(0);
}
