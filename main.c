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
	if(n<2 || n>9)																			//Boundary cases for the program where it will not work.
	{
		printf("ERROR: Number of teams can be 2 to 9 only\n\n");
		exit(1);
	}
	struct graph G;					//Declaring Graph structure				
	struct graph *ptr_g = &G;                       //Initializing pointer variable to graph
	struct list new_clr;				//Declaring List structure
	struct list *ptr_new_clr = &new_clr;		//Initaializing pointer variable to list

	MAKENULL_G(n,ptr_g);				//Creating an empty graph
	POPULATE(n,ptr_g);				//populating Graph with team names

	printf("matches: ");
	for (int i=0; i<n*(n-1); i++)
	{
		printf("%d, ",G.matches[i]);		//Printing all combination of matches between two teams.
	}
	printf("\n\n");

	for (int i=0; i<n*(n-1); i++)
	//printf("%d ",i);
	//printf("\n");
	for (int i=0; i<n*(n-1);i++)
	{
		for (int j=0; j<n*(n-1);j++)
		{
	//		printf("%d ", G.matrix[i][j]);	//DEBUG:printing the adjajcency matrix 
		}
	//	printf("\n");
	}
		
	//printf("\n");


	int no_of_days = 0;
	while(!ALL_COLORED(ptr_g))
	{
		MAKENULL_L(ptr_new_clr);		//setting the new_clr list empty
		greedy(ptr_g, ptr_new_clr);		//calling greedy recursively untill the whole graph is colored 
		for(int i=0;i<END(ptr_new_clr);i++)
		{
			printf("(%d); ",ptr_new_clr->elements[i]);
		}	
		no_of_days+=2;
		printf("\n\n");
	}
	printf("number of minimum days = %d\n\n",no_of_days-1);

}
