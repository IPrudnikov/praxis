#include <iostream>

char convstr( char str[ ], int i, int num );

int main ( )
{
	char str [ ] = "Conversely line";
	const int num = strlen( str );
	char Nstr[ num+1 ];
	for(int i = 0; i < num; i++ )
	{
		Nstr[ i ] = convstr( str, i, num );
	}
	
	Nstr[ num+1 ] = '\0';
	
	std::cout << Nstr << std::endl;
	return 0;
}

char convstr( char str[ ], int i, int num )
{
	return str [ num - (i+1) ];
}