struct graph		//adjacency matrix
{
	int n;				// number of teams
	int m = n*(n-1);	// number of matches
	int matches[m];			// array to store name of matches
	bool colored[m];		// save color status of nodes
	int matrix[m][m];		// 2D array to store adjacency matrix
}

struct graph MAKENULL(n,struct graph G);		// number of team and struct
void INSERT(char x, struct graph* G);
struct graph* NEXT(struct graph* G);
char RETRIEVE(struct graph* G);
void DELETE(struct graph* G);
bool EMPTY(struct graph* G);
