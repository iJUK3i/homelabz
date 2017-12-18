/* ************************************************************************** */
/*                                                                            */
/*                                            __    __   ______   _______     */
/*   main.c                                  /  |  /  | /      \ /       \    */
/*                                           $$ |  $$ |/$$$$$$  |$$$$$$$  |   */
/*   juk3 <admin@rejects.com>                $$ |__$$ |$$____$$ |$$ |__$$ |   */
/*                                           $$    $$ | /    $$/ $$    $$<    */
/*   Created: 2016/12/12 05:55:02            $$$$$$$$ |/$$$$$$/  $$$$$$$  |   */
/*   Updated: 2016/12/12 06:23:08                  $$ |$$ |_____ $$ |  $$ |   */
/*   Update by: juk3                               $$ |$$       |$$ |  $$ |   */
/*                                                 $$/ $$$$$$$$/ $$/   $$/    */
/*                                                                            */
/* ************************************************************************** */


#include "juk3.h"

void	help_me(char chess_board[8][8])
{
	int i;
	int j;

	ft_putstr(" in help_me ft_ \n");
	i = 0;
	while (chess_board[i])
	{
		j = 0;
		while (chess_board[i][j])
		{
			ft_putchar(chess_board[i][j]);
			ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

void	empty_board(void)
{
	char chess_board[8][8];
	int i;
	int j;

	i = 0;
	while (chess_board[i])
	{
		ft_putstr("_ 1st _");
		j = 0;
		while (chess_board[i][j])
		{
			ft_putstr("   ,2nd, ");
			ft_putnbr(j);
			chess_board[i][j] = 'o';
			j++;
		}
		i++;
	}
	help_me(chess_board);
}


int		main()
{
	int x;


	x = 0;
	empty_board();
	ft_putnbr(x);
	ft_putchar('\n');
	return (0);
}
