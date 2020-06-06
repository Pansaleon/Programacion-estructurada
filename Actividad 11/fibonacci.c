//Ricardo de Jesus Saldaña Medina 1742168
/*ask the student information {studentid, fistname, firstlastname,
secondlastname (optional), birthdate, school, grade, career,
gender} to the user and store it in arrays. finally print the
records*/
//3.11 Functions
//3.11.1 Define fibonacci function using recursion, reformat 2d Arrays exercise usinf functions.




#include<stdio.h>
 
int Fibonacci(int);
 
int main()
{
   int n, i = 0, c;
 
   scanf("%d",&n);
 
   printf("Fibonacci series\n");
 
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));
      i++; 
   }
 
   return 0;
}
 
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
