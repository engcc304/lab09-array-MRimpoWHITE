/*
    จงเขียนโปรแกรมรับค่าจากผู้ใช้เข้าไปใส่ในอาเรย์และแสดงผลลัพธ์ออกมาทั้งหมดที่เป็นจำนวนเฉพาะเท่านั้น (ค่าที่ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน)

    Test case:
        Enter N :
            6
        Enter value[0] :
            19
        Enter value[1] :
            18
        Enter value[2] :
            27
        Enter value[3] :
            15
        Enter value[4] :
            4
        Enter value[5] :
            2
    Output:
        Index:  0  1  2  3  4  5
        Array:  # 19  #  #  #  2
*/

#include <stdio.h>
#include <string.h>

int main() {

    char ip[99] ;
    int HMchar = 0 ;
    int sameC = 1 ;
    int sspace = 0 ;

    printf( "Input : ")  ;
    gets ( ip ) ;

    for (int i = 0; ip[i] != '\0' ; i++) {
        if ( ip[ i ] != ' ' ) {
            HMchar++ ;
        }
    }

    printf( "\ncharacter = %d\n" , HMchar ) ;

    for ( int i = 0 ; ip[i] != '\0' ; i++ ) {
            for ( int x = i + 1 ; x < HMchar ; x++ ) { 
                if ( ip[ i ] > ip[ x ] ){
                    char temp = ip[ i ] ;
                    ip[ i ] = ip[ x ] ;
                    ip[ x ] = temp ;
                } // end if
            } // end for
        } // end for 

    for ( int i = 0 ; ip[i] != '\0' ; i ++ ) {

	    while ( ip[i] != '\0' && ip[ i ] == ip[ i + 1 ] ) {
		    sameC++ ; 
		    i++ ; 
            if ( ip[i] == ' ' )
            {
                sspace++ ;
            }
	    }
		    printf( "%c -> %d\n" , ip[ i ] , sameC ) ; 
	    
	    sameC = 1 ; 
    }

    return 0 ;
}//end main function



// if ( sspace > 0)
        // {
        //     printf( "\nSpace -> s%d\n" , sspace ) ;
        // }
        
	    // if ( ip[ i ] == ' ' ) {
		//     sspace++ ; 
	    // }
        // if ( ip[ i ] == ' ' ) {
		//     printf( "Space -> %d\n" , sspace ) ;
	    // }
	    // else {
            // }