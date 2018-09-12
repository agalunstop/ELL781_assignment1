struct list
{
	char elements[100];
	int top;
}

void MAKENULL(struct list L);
void PUSH(char x, struct list L);
char POP(struct list L);
char TOP(struct list L);
bool EMPTY(struct list L);
