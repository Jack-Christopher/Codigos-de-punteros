#include <iostream>

using namespace std;

int obtener_longitud(char *cadena)
{
	int longitud = 0;
	
	while(*cadena)
	{
		longitud++;
		cadena++;
	}
	
	return longitud;
}



int main()
{
	
	char cadena1[] = "Hola �C�mo est�s?"; 
	
	cout<< "Longitud:  "<<obtener_longitud(cadena1);
	
	return 0;
}
