#include <stdio.h>

int main() {
char space = ' ';
char hold = 0 ;
char input[100] ;
int long_arr = 0 ;
int same = 0 ;

printf("Input : \n") ; 
gets( input ) ; 


for ( int i = 0 ; i < input[ i ] ; i++ ){
	if ( input[ i ] != space ){
		long_arr++ ; 
	}

}

for (int i = 0 ; i < long_arr - 1 ; i++) {
	for( int j = i + 1 ; j < long_arr ; j++ ){
		if ( input[ i ] > input [ j ] ){
			hold = input[ j ] ;
			input[ j ] = input[ i ] ;
			input[ i ] = hold ;
		}

	}

}

for ( int i = 0 ; i <= long_arr ; i ++ ) {
	while ( i < long_arr - 1 && input[i] == input[i+1]) {
		same++ ;
		i++ ; 
	}
	if ( input[i] == space ) {
		printf( "Space -> %d\n" , same ) ;
	}
	else {
		printf( "%c -> %d\n" , input[i] , same ) ;
	}
	same = 1 ;
}

return 0 ;
}