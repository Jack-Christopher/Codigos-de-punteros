#include <iostream>

using namespace std;

void concatenar(char *a, char *b)
{
	int longitud = 0;
	while(*b) 
	{
		longitud++;
		b++;
	}
		
	for (int k = 0; k <longitud; k++)
	{
		*b = *a;
		a++;
		b++;
	}
}


int main()
{
	
	char a[] = "Hola Mundo";
	char b[] = "El mensaje es: ";
	
	concatenar(a,b);
	
	
	//Para verificar el mensaje esté concatenado
	cout<< b;
	
	
	
	return 0;
}
