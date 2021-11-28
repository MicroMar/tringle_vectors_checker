//includes
#include <stdio.h>
#include <cs50.h>
//function declaration
int tri_chek(int a,int b,int c);
//main function
int main(void)
{
    int v1 = get_int("Please enter a magnitude of the third Vector: \n");
    int v2 = get_int("Please enter a magnitude of the third Vector: \n");
    int v3 = get_int("Please enter a magnitude of the third Vector: \n");
    tri_chek(v1,v2,v3);

}
//function defintion
int tri_chek(int a,int b,int c)
{
    if (a + b == c)
    printf("Your unerstanding the law of vectors very well\n");
    else
    printf("To obtain →R which is the resultant of the sum of vectors\n →A and →B with the same order of magnitude and direction as shown in the figure, we use the following rule:\n →R =→A + →B\n");
    return 0;
}
