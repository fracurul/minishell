

int check_line(char *line)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while(input && input != '\\' && input != ';')
	{
		if(input == '\'')
			i++;
		if(input == '"')
			j++;
	}
	if(i % 2 == 0 && j % 2 == 0)
		return(1);
	return(0);
}