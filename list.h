struct list			//array based list
{
	char elements[100];
	int last;
}


void MAKENULL(struct list L);
void PUSH(char x, struct list L);
char POP(struct list L);
char TOP(struct list L);
bool EMPTY(struct list L);
int SIZE(struct list L);
char RETRIEVE(int p, struct list L);
