#include <iostream>

using namespace std;

void swap(int *lista, int aux)
{
	int temp = 0;
	int *ptr = lista;
	temp= *lista;
	ptr += aux;
	*lista = *ptr;
	*ptr = temp;
}


void invertir(int *lista, int longitud)
{
	int temp = 0;
	int aux = longitud-1;
	
	for (int k =0;  k < longitud/2; k++)
	{
		swap(lista, aux);
		
		aux -= 2;
		
		lista++;
	}
	
}


int main()
{
	int lista1[10] = {1,2,3,4,5,6,7,8,9,10};
	invertir(lista1, 10);
	
	
	//Para verificar si ha invertido la lista
	int *aux = lista1;
	for(int k = 0; k < 10; k++)
	{
		cout<< *aux++ <<" ";
	}
	return 0;
}
