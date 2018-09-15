#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"
#include "graph.h"
#include "greedy.h"

void main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	printf("Number of teams = %d\n",n);
	struct graph G;
	struct graph *ptr_g = &G;
	struct list new_clr;
	struct list *ptr_new_clr = &new_clr;

	MAKENULL_G(n,ptr_g);
	MAKENULL_L(ptr_new_clr);

	printf("matches: ");
	for (int i=0; i<n*(n-1); i++)
	{
		printf("%d, ",G.matches[i]);
	}
	printf("\n");

	for (int i=0; i<n*(n-1); i++)
		printf("%d ",i);
	printf("\n");
	for (int i=0; i<n*(n-1);i++)
	{
		for (int j=0; j<n*(n-1);j++)
		{
			printf("%d ", G.matrix[i][j]);
		}
		printf("\n");
	}
		
	printf("\n");

	greedy(ptr_g, ptr_new_clr);
	for(int i=0;i<END(ptr_new_clr);i++)
	{
		printf("%d, ",ptr_new_clr->elements[i]);
	}	

}
