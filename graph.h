struct graph
{
	char vertex;
	struct graph* next;
}

struct graph* MAKENULL(struct graph* G);
void INSERT(char x, struct graph* G);
struct graph* NEXT(struct graph* G);
char RETRIEVE(struct graph* G);
void DELETE(struct graph* G);
bool EMPTY(struct graph* G);
