#include <iostream>

using namespace std;

void ordenamiento(int *lista, int longitud)
{
	int *ptr = lista;
	int *ptr2 = lista;
	
	for(int k = 0; k< longitud-1; k++)
	{
   		for (int m = k; m < longitud; m++)
   		{
   			if (*ptr2 < *ptr)
	   		{	   				   			
	   			*ptr2 = *ptr2 + *ptr;
	   			*ptr = *ptr2 - *ptr;
	   			*ptr2 = *ptr2 - *ptr;
	   		}
	   		
	   		ptr2++;	      	
		}
		ptr2 -= longitud-1-k;
		ptr++;
    }
}


int main()
{
	
	int lista[10] = {6,2,9,5,8,3,1,0,7,4};
	
	ordenamiento(lista, 10);
	
	int *temp = lista;
	
	//Para verificar que han sido ordenados
	for (int k = 0; k < 10; k++)
	{
		cout<< *temp<<" ";
		temp++;
	}	
	
	return 0;
}
