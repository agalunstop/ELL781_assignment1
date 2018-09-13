#include "graph.h"

struct graph MAKENULL(struct graph G)
{
	int i,j;
	int m = 0;
	
	//loop to write team names to an array
	for (i=1;i<=G.n;i++)
	{
		for (j=1;j<=G.n;j++)
		{
			if(i!=j)
			{
				G.matches[m]= 10*i + j;
				m++;
			}
		}
	}

	//loop to populate adjacency matrix
	int matrix[m][m];		//2D matrix to store edges, dimension is no_of_teams*no_of_teams
	for (i=0;i<m;i++)
	{
		for (j=0;j<m;j++)
		{
			if()
			G.matrix[i][j] = 1;
			G.matrix[i][j] = 0;
}
