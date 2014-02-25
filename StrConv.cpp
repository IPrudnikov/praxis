#include <iostream>

int main ( )
{
	char str [ ] = "Conversely line";
	int num = strlen( str );
	char Nstr[ num+1 ];
	for(int i = 0; i < num; i++ )
	{
		Nstr[ i ] = str [ num - (i+1) ];
		std::cout << i << " - " << str [ num - (i+1) ] << std::endl;
	}
		Nstr[ num+1 ] = '\0';
	
	std::cout << Nstr << std::endl;
	return 0;
}