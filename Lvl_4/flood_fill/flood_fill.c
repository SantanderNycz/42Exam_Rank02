typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

void to_fill(char **tab, t_point size, t_point cur, char fill)
{
	if (cur.y < 0 || cur.x < 0 || cur.x >= size.x || cur.y >= size.y || tab[cur.y][cur.x] != to_fill)
		return ;
	
	tab[cur.y][cur.x] = 'F';

	to_fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
	to_fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
	to_fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
	to_fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	to_fill(tab, size, begin, tab[begin.y][begin.x]);
}