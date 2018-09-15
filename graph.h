#include <stdbool.h>

#define MAXSIZE 100
struct graph		//adjacency matrix
{
	int matches[MAXSIZE];			// array to store names of matches
	bool colored[MAXSIZE];			// save color status of nodes
	bool matrix[MAXSIZE][MAXSIZE];		// 2D array to store adjacency matrix
	int num_of_matches;			// number of matches
};

void MAKENULL_G(int n, struct graph *G);		
void POPULATE(int n, struct graph *g);		
int FIRST_UNCOLORED(struct graph *g);	// position of first uncolored vertex
int RETRIEVE_VERTEX(int p, struct graph *g); // vertex at position p
bool RETRIEVE_EDGE(int i, int j, struct graph *g);	// return graph.matrix[i][j]

int NEXT_UNCOLORED(int p, struct graph *g);	// position of next uncolored vertex after p
void MARK_COLORED(int p, struct graph *g); // mark vertex at position p colored
int LOCATE(int x, struct graph *g); // return position of x in graph.matches
bool ALL_COLORED(struct graph *g);	// true if all vertex colored in G

