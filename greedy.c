#include "graph.h"
#include "list.h"

greedy(struct graph G, struct list prsntclr)		//g is graph, presentclr is array 
													//of coloured
													//nodes of a particular colour
{
	bool found;			// to track edge between prsntclr nodes and vertex
	int v,n;			// vertex in graph, node in prsntclr
	MAKENULL(prsntclr);	
	
	int p_v = FIRST_UNCOLORED(G);		//position of first uncolored vertex
	v = RETRIEVE_VERTEX(p_v,G);			// give vertex at position p
	while (v != NULL)		// loop on all uncolored vertex of graph 
	{
		found = false;
		for (int i=0; i<SIZE(prsntclr);i++)
		{
			n = RETREIVE(i,prsntclr);
			if(IS_EDGE(p_v,n))		// edge found = true
				found = true;
		}
		if (found == false)			// edge not found b/w v,n
		{
			INSERT(v,END(prsntclr),prsntclr);	// add v to prsntclr
			MARK_COLORED(p_v,G);			// mark v colored in G
		}
	p_v = NEXT_UNCOLORED(p_v,G);		// position of next uncolored vertex
	v = RETRIEVE_VERTEX(p_v);			// give vertex at position p
	}
}
			
bool IS_EDGE(int p_v,int n)
{
	int p_n = LOCATE(n,G);				// return index of n in graph
	return RETRIEVE_EDGE(p_v,p_n);		
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
int RETRIEVE_VERTEX(int p_v,struct graph G)
{
	p_v = FIRST_UNCOLORED(G);          		//gets the postion from first_uncolored
	int vertex = G.matches[p_v];			//gives vertex at position p
	return vertex;
}


void MARK_COLORED(int p_v, struct graph G){
{
	p_v=FIRST_UNCOLORED(G);
	for(int p_v=0;p_v<G.colored;p_v++) 			//loop over color status of nodes
	{
		color[p_v] = true;                        //mark the vertex as colored
	}
}




int NEXT_UNCOLORED(int p, struct graph G)
{
	

		

