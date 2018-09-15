#include <stdio.h>
#include "graph.h"

void write_team_names(int n, struct graph *g);
void populate_adj_matrix(int n, struct graph *g);

void MAKENULL_G(int n, struct graph *G)
{
	write_team_names(n, G);		// write team names to G.matches and G.colored = false
	populate_adj_matrix(n*(n-1), G);		// populate adjacency matrix based on 
	G->num_of_matches = (n*(n-1))-1;		// number of matches
}


void write_team_names(int n, struct graph *G)
{
	int m = 0;

	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if(i!=j)
			{
//				printf("%d, %d\n",i,j);		// debug
				G->matches[m]= 10*i + j;		// first team at tens place, 2nd team at ones place
				G->colored[m]=false;			// initialize uncolored
//				printf("%d\n",G->matches[m]);		//debug
				m++;
			}
		}
	}
}

void populate_adj_matrix(int n,struct graph *G)
{
	int i_first;		//first team in column index matches
	int i_second;		//second team in column index matches
	int j_first;		//first team in row index matches
	int j_second;		//second team in row index matches

	for (int i=0;i<n;i++)		// column index
	{
		for (int j=0;j<n;j++)		// row index
		{
			i_first = G->matches[i]/10;		// tens place
			i_second = G->matches[i] % 10;	// ones place
			j_first = G->matches[j]/10;		// tens place
			j_second = G->matches[j] % 10;	// ones place

			if((i_first == j_first) && (i_second == j_second))
				G->matrix[i][j] = 0;			// invalid condition/self loop
			else
				if((i_first == j_first)||(i_first == j_second)||
					(i_second == j_first)||(i_second == j_second))
					G->matrix[i][j] = 1;			// edge because of team clash
				else
					G->matrix[i][j] = 0;			// no edge
		}
	}
}

int FIRST_UNCOLORED(struct graph *G)
{
	for(int i=0;i<=G->num_of_matches;i++)		// check all vertices whether colored or not
	{
		if(!G->colored[i])
			return i;					//returns postion of first uncolored vertex
	}
}

int RETRIEVE_VERTEX(int p,struct graph *G)
{
	return G->matches[p];			//gives vertex at position p
}

void MARK_COLORED(int p, struct graph *G)
{
	G->colored[p]=true;
}

int NEXT_UNCOLORED(int p, struct graph *G)
{
	for(int i=p;i<=G->num_of_matches;i++)
	{
		if(!G->colored[i])
			return i;
	}
}
	
bool RETRIEVE_EDGE(int i, int j, struct graph *G)
{
	return G->matrix[i][j];
}
	
int LOCATE(int x, struct graph *G)
{
	for(int i=0;i<=G->num_of_matches;i++)
	{
		if(x==G->matches[i])
			return i;
	}
}


