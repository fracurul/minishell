#include "minishell.h"

int main()
{
	char *input;
	int i;

	while(1)
	{
		// guardar lectura del usuario en una var.
		input = readline("Minishell$ ");
		//si no hay contenido nos salimos (ctrl + D)
		if(!input)
		{
			printf("Exit \n");
			break;
		}
		//prueba.
		printf("Entrada: %s\n", input);
		//si tenemos entrada, la añadimos al historial.
		if(input)
			add_history(input);
		if(!check_line(input))
		{
			printf("syntax error\n");
			continue;
		}
		//liberar lo que hemos leido, para realizar una nueva lectura.
		free(input);
	}
}