//
// Created by Sumit Suman on 11-02-2021.
//

/* Count chars, spaces, tabs and newlines in a file */
# include "stdio.h"
int main( )
{
    FILE *fp ;
    char ch ;
    int nol = 0, not = 0, nob = 0, noc = 0 ;


    fp = fopen ( "C:\\Users\\user\\Desktop\\a.txt", "r" ) ;
    while ( 1 )
    {
        ch = fgetc ( fp ) ;
        if ( ch == EOF )
            break ;
        noc++ ;
        if ( ch == ' ' )
            nob++ ;
        if ( ch == '\n' )
            nol++ ;
        if ( ch == '\t' )
            not++ ;
    }
    fclose ( fp ) ;
    printf ( "\nNumber of characters = %d", noc ) ;
    printf ( "\nNumber of blanks = %d", nob ) ;
    printf ( "\nNumber of tabs = %d", not ) ;
    printf ( "\nNumber of lines = %d", nol ) ;
    return 0;
}