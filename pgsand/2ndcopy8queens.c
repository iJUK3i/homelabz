/* ************************************************************************** */
/*                                                                            */
/*                                            __    __   ______   _______     */
/*   main.c                                  /  |  /  | /      \ /       \    */
/*                                           $$ |  $$ |/$$$$$$  |$$$$$$$  |   */
/*   juk3 <admin@rejects.com>                $$ |__$$ |$$____$$ |$$ |__$$ |   */
/*                                           $$    $$ | /    $$/ $$    $$<    */
/*   Created: 2016/12/14 02:44:37            $$$$$$$$ |/$$$$$$/  $$$$$$$  |   */
/*   Updated: 2016/12/14 07:31:26                  $$ |$$ |_____ $$ |  $$ |   */
/*   Update by: juk3                               $$ |$$       |$$ |  $$ |   */
/*                                                 $$/ $$$$$$$$/ $$/   $$/    */
/*                                                                            */
/* ************************************************************************** */

#include "juk3.h"
int x = 0;

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
			return (j);
		}
		j++;
	}
	return (-1);
}


int check(int board[8][8], int row, int col)
{
	int be_row;
	int be_col;

	be_row = 0;
	while (be_row < 8)
	{
		be_col = is_marked(board, be_row);
		if (be_col == -1)
			return 1;
		if (col == be_col || abs(row - be_row) == abs(col - be_col))
			return (0);
		be_row++;
	}
	return 1;
}


void nqueen(int board[8][8], int i)
{
	int j;


	if (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (check(board, i, j) != 0)
			{
				board[i][j] = 'Q';
				ft_putstr(" jpq \n");
				nqueen(board, i + 1);
				ft_putstr("recursive call\n");
				board[i][j] = '.';
				ft_putstr(" pd,  ");
			}
			j++;
		}
	}
	else
	{
		x++;
		ft_putstr(" valid solution: ");
		ft_putnbr(x);
		ft_putstr("\n");
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
