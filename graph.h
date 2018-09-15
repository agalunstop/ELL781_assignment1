#include <stdbool.h>

#define MAXSIZE 100
struct graph		//adjacency matrix
{
	int matches[MAXSIZE];			// array to store names of matches
	bool colored[MAXSIZE];			// save color status of nodes
	bool matrix[MAXSIZE][MAXSIZE];		// 2D array to store adjacency matrix
};

void MAKENULL_G(int n, struct graph *g);		
void CREATE_GRAPH(int n, struct graph G); // number of teams and struct
//void INSERT(char x, struct graph* G);
//struct graph* NEXT(struct graph* G);
int FIRST_UNCOLORED(struct graph G);	// position of first uncolored vertex
int RETRIEVE_VERTEX(int p, struct graph G); // vertex at position p
bool RETRIEVE_EDGE(int i, int j);	// return graph.matrix[i][j]

int NEXT_UNCOLORED(int p, struct graph G);	// position of next uncolored vertex after p
void MARK_COLORED(int p, struct graph G); // mark vertex at position p colored
int LOCATE(int x, struct graph G); // return position of x in graph.matches

//int RETRIEVE_MATCH(struct graph* G);
//void DELETE(struct graph* G);
//bool EMPTY(struct graph* G);
