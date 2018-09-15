#include <stdio.h>
#include "graph.h"
#include "list.h"


void greedy(struct graph *G, struct list *prsntclr)		//g is graph, presentclr is array 
														//of coloured
														//nodes of a particular colour
{
	bool found;											// to track edge between prsntclr nodes and vertex
	int v,n;											// vertex in graph, node in prsntclr
	
	int p_v = FIRST_UNCOLORED(G);						//position of first uncolored vertex
	int p_n;											// position of prsntclr node in graph
	v = RETRIEVE_VERTEX(p_v,G);							// give vertex at position p
	while (v != 0)										// loop on all uncolored vertex of graph 
//	for(int r=0;r<12;r++)								//for debug
	{
		found = false;
		for (int i=0; i<SIZE(prsntclr);i++)
		{
			n = RETRIEVE(i,prsntclr);
			//printf("n = %d, i = %d\n",n,i);
			p_n = LOCATE(n,G);							// index of n in G.matches
			//printf("p_n = %d\n",p_n);
			if(RETRIEVE_EDGE(p_v,p_n,G))				// edge found = true
				found = true;
		}
		//printf("found = %d\n",found);
		
		if (found == false)								// edge not found b/w v,n
		{
			//printf("v = %d\n",v);
			INSERT(v,END(prsntclr),prsntclr);			// add v to prsntclr

			MARK_COLORED(p_v,G);						// mark v colored in G
			
		}
	p_v = NEXT_UNCOLORED(p_v,G);						// position of next uncolored vertex
		//printf("p_v = %d\n",p_v);
	v = RETRIEVE_VERTEX(p_v,G);							// give vertex at position p
		//printf("v = %d\n\n\n",v);
	}
//	printf("%d\n",v);
}
			
	
	

		

