#include <libftmatrices.h>

void	mat4x4_set_identity(t_mat4x4 matrice)
{
	ft_putstr("coucou\n");
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (i == j)
				matrice[i][j] = 1;
			else
				matrice[i][j] = 0;
			j++;
		}
		i++;
	}
}
