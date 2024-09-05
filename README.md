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



## Planteamiento:

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

	5.Implementar ejecución de comandos:
		*Fork: Crear proceso hijo.
		*Execve: Ejecutar el comando en el proceso.
		*Waitpid: Esperar a que los procesos hijos terminen.

	6.Redirecciones(<, >>, >) y pipes(|):
		*Redirecciones: Redirigir la entrada o salida usando dup2() y ejecutar comando.
		*Pipes: Conecta dos procesos.

	7.Señales:
		*Manejar las señales del sistema para evitar que se cierre de forma inesperada o que los comandos se vean interrumpidos. Usar signal(), sigaction(), sigint.

	8.Manejo de errores:
		*Comprobar el resultado de las llamadas al sistema y comandos. Si fork() o execve() fallan, manejar el error adecuadamente.