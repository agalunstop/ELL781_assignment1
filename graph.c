#include "graph.h"

void MAKENULL(int n, struct graph G)
{
	int i,j;
	int m = 0;
	
	write_team_names(n, G);		// write team names to G.matches
	populate_adj_matrix(G);		// populate adjacency matrix based on 
	G.colored[] = {false};		// all uncolored initially

}

void write_team_names(struct graph G)
{
	int i,j;
	int m = 0;

	for (i=1;i<=G.n;i++)
	{
		for (j=1;j<=G.n;j++)
		{
			if(i!=j)
			{
				G.matches[m]= 10*i + j;		// first team at tens place, 2nd team at ones place
				m++;
			}
		}
	}
}

void populate_adj_matrix(struct graph G)
{
	int i_first;		//first team in column index matches
	int i_second;		//second team in column index matches
	int j_first;		//first team in row index matches
	int j_second;		//second team in row index matches

	for (i=0;i<G.m;i++)		// column index
	{
		for (j=0;j<G.m;j++)		// row index
		{
			i_first = G.matches[i]/10;		// tens place
			i_second = G.matches[i] % 10;	// ones place
			j_first = G.matches[j]/10;		// tens place
			j_second = G.matches[j] % 10;	// ones place

			if((i_first == j_first) && (i_second == j_second))
				G.matrix[i][j] = 0;			// invalid condition/self loop
			else
				if((i_first == j_first)||(i_first == j_second)||
					(i_second == j_first)||(i_second == j_second))
					G.matrix[i][j] = 1;			// edge because of team clash
				else
					G.matrix[i][j] = 0;			// no edge
}
int FIRST_UNCOLORED(struct graph G)
{
	int p;
	for(int i=0;i<G.matches;i++)
	{
		p=i;					//returns postion of first uncolored vertex
		break;
	}
	return p;

	
}
int RETRIEVE_VERTEX(int p,struct graph G)
{
	p_v = FIRST_UNCOLORED(G);          		//gets the postion from first_uncolored
	int vertex = G.matches[p_v];			//gives vertex at position p
	return vertex;
}


void MARK_COLORED(int p, struct graph G){
{
	p_v=FIRST_UNCOLORED(G);
	for(int p_v=0;p_v<G.colored;p_v++) 			//loop over color status of nodes
	{
		color[p_v] = true;                        //mark the vertex as colored
	}
}




int NEXT_UNCOLORED(int p, struct graph G)
{
	
	


