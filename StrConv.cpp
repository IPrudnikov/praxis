#include <iostream>

int main ( )
{
	int i;
	char str [ ] = "Conversely line";
	int num = strlen( str );
	char Nstr [ num ];
	for( i=0; i>=num; i++ )
	{
		if(i != num)
			Nstr[ i ] = str[ num - (i+1) ];
		else
			Nstr[ i ] = '\0';
	}
	
	std::cout << Nstr << std::endl;
	return 0;
}