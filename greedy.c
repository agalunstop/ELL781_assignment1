#include "graph.h"
#include "list.h"

greedy(struct graph* g, struct list prsntclr)		//g is pointer to graph node, presentclr is array 
													//of coloured
													//nodes of a particular colour
{
	bool found;			// to track edge between prsntclr nodes and vertex
	char v,n;			// vertex in graph, node in prsntclr
	MAKENULL(prsntclr);	// initialization to NULL character
	
	v = FIRST(g);		//first uncolored vertex is first vertex
	while (v != NULL)		// only header present i.e. all nodes colored
	{
		found = false;
		for (int i=0; i<SIZE(prsntclr);i++)
		{
			n = RETREIVE(i,prsntclr);
			
