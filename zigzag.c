#include<stdio.h>

int main(void)
{
    int row, col, count;
    //get the space for zigzag array
    int a[8][8]={0};
    // initialize row , column, and count zero
    row=col=count=0;
    // intialize the first element at (0,0) zero and start counting
    a[row][col]=count++;

    while(row<8 && col<8){
        if(row==0) // moves one column to right
            a[row][++col]=count++;

        while(col> 0)//moves down and left
            a[++row][--col]=count++;
        
        if(col==0)// moves one row down
            a[++row][col]=count++;

        while(row > 0)// moves up and right
            a[--row][++col]=count++;

    }
    for(row=0; row<8; row++)// print the results
        for(col=0; col<8; col++)
            printf("%d", a[row][col]);




}