

int check_line(char *line)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	len = ft_strlen(line);

	while(line && line != '\\' && line != ';' && line[0] != '|' && line[len - 1] != '|')
	{
		if(line == '\'')
			i++;
		if(line == '"')
			j++;
	}
	if(i % 2 == 0 && j % 2 == 0)
		return(1);
	return(0);
}