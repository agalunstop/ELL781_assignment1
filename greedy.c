#include "graph.h"
#include "list.h"

greedy(struct graph G, struct list prsntclr)		//g is graph, presentclr is array 
													//of coloured
													//nodes of a particular colour
{
	bool found;			// to track edge between prsntclr nodes and vertex
	int v,n;			// vertex in graph, node in prsntclr
	MAKENULL(prsntclr);	
	
	int p = FIRST_UNCOLORED(G);		//position of first uncolored vertex
	v = RETRIEVE_VERTEX(p,G);			// give vertex at position p
	while (v != NULL)		// loop on all uncolored vertex of graph 
	{
		found = false;
		for (int i=0; i<SIZE(prsntclr);i++)
		{
			n = RETREIVE(i,prsntclr);
			if(IS_EDGE(v,n))		// edge found = true
				found = true;
		}
		if (found == false)			// edge not found b/w v,n
		{
			INSERT(v,END(prsntclr),prsntclr);	// add v to prsntclr
			MARK_COLORED(p,G);			// mark v colored in G
		}
	p = NEXT_UNCOLORED(p,G);		// position of next uncolored vertex
	v = RETRIEVE_VERTEX(p);			// give vertex at position p
	}
}
			
bool IS_EDGE(v,n)
{
	int p = LOCATE(n,G);
