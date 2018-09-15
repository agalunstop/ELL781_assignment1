#include "graph.h"
#include "list.h"


void greedy(struct graph *G, struct list *prsntclr)		//g is graph, presentclr is array 
													//of coloured
													//nodes of a particular colour
{
	bool found;			// to track edge between prsntclr nodes and vertex
	int v,n;			// vertex in graph, node in prsntclr
	MAKENULL_L(prsntclr);	
	
	int p_v = FIRST_UNCOLORED(G);		//position of first uncolored vertex
	int p_n;							// position of prsntclr node in graph
	v = RETRIEVE_VERTEX(p_v,G);			// give vertex at position p
	while (v != 0)		// loop on all uncolored vertex of graph 
	{
		found = false;
		for (int i=0; i<SIZE(prsntclr);i++)
		{
			n = RETRIEVE(i,prsntclr);
			p_n = LOCATE(n,G);		// index of n in G.matches
			if(RETRIEVE_EDGE(p_v,p_n,G))		// edge found = true
				found = true;
		}
		if (found == false)			// edge not found b/w v,n
		{
			INSERT(v,END(prsntclr),prsntclr);	// add v to prsntclr
			MARK_COLORED(p_v,G);			// mark v colored in G
		}
	p_v = NEXT_UNCOLORED(p_v,G);		// position of next uncolored vertex
	v = RETRIEVE_VERTEX(p_v,G);			// give vertex at position p
	}
}
			
	
	

		

