#include <iostream>

using namespace std;

void copiar(char *a, char *b)
{	
	while(*a)
	{
		*b = *a;
		b++;
		a++;
	}
}

int main()
{
	
	char a[11] = "Hola Mundo";
	char b[11];
	
	copiar(a, b);
	
	
	//Para verificar que ha sido copiado

	cout<< b;

	
	
	return 0;
}
