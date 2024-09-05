# minishell


## Configurar la rama en la que vas a trabajar.
1. La rama por defecto es Main, para cambiar de rama usa el comando

##
	git checkout <nombre_rama>
##

2. Para comprobar la rama en la que estas:

##
	git checkout
##



##planteamiento:

	1.Entender funcionamiento de un shell basico:
		*Leer entrada de usuario.
		*Parsear la entrada.
		*Ejecutar los comandos con las opciones y args dados.

	2.Estructurar el proyecto en módulos:
		*Lectura de entrada.
		*Parseo y tokenización.
		*Ejecutar comandos.
		*Señales.

	3.Comandos internos/ Built-in:
		*cd: Cambiar de dir.
		*pwd: Mostrar el dir actual.
		*echo: Imprimir texto.
		*env: Mostrar las variables de entorno.
		*export/unset: Modificar variables de entorno.
		*exit: Salir de la shell.

	4.Parsing:
		*Espacios.
		*Redirecciones.
		*Pipes.
		*Comillas.
