#include <iostream>

using namespace std;

int invertir(int *lista, int longitud)
{
    if ( longitud == 1) return 0;
    
    int temp = 0;
    
    temp = *lista;
    int *temp2  = lista + 1;
    for(int m = 0; m < longitud -1; m++)
    {
    	*(lista)  = *temp2;
    	lista++;
    	temp2++;
	}
	
	
	*lista = temp;
	lista -= longitud - 1;
	
	return invertir(lista, --longitud);
}

int main()
{
	int lista1[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
	invertir(lista1, 13);
	
	//Para verificar si ha invertido la lista
	int *ptr = lista1;
	for (int k = 0; k < 13; k++)
	{
		cout<< *ptr++ << " ";
	}

	return 0;
}






