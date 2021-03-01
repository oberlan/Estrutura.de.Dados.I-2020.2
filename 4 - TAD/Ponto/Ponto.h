typedef struct ponto Ponto;

Ponto* cria(double x, double y); 

void libera(Ponto *p);

void acessa(Ponto *p, double *x, double *y);

void atribui(Ponto *p, double x, double y);

double distancia(Ponto *p1, Ponto *p2);

void imprime(Ponto *p);