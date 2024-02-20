void typesOfLoops()//LOOPS//
{
    printf("1.FOR LOOP\n");
    printf("2.WHILE LOOP\n");
    printf("3.DO WHILE LOOP \n");
    printf("**************\n");
}
void forLoopDefination()
{
    printf("for loop is a repeating control structure .you write a loop that to execute specific number of times is called for loop\n");
    printf("****************\n");
}
void workingOfForLoop()
{
    printf("for loop is used to obtain the result only when the number of iteration is known that time we can use the for loop and in this loop initialization in for loop is done only one when the program starts\n");
}
void exampleProgramForForLoop()
{
    int i;
    printf("print number from 1 to 10\n");
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
    }
}
void whileLoopDefination()
{
    printf("the repeatedly execute the target statement long as condition is true\n");
    printf("********************\n");

}
//while (testExpression){
  // the body of the loop}

//
void workingOfWhileLoop()
{
    printf("while loop is used to satisfies the condition when the number of iterations is unknown and in this loop ,initialization is done every time the loop is iterated\n ");
    printf("********************\n");
}
void exampleProgramForWhileLoop()
{
    int num=200;
    printf("print numbers from 200 to 400\n");
    while(num<=400)
    {
        printf("%d\n",num);
        num++;
    }
    printf("*******************\n");
}
void doWhileLoopDefination()
{
    printf("The C do while statement creates a structured loop that executes as long as a specified condition is true at the end of each pass through the loop.\n");
    printf("***********************\n");
}
void floydsTriangle() /*Floyd's triangle 1
                                        2 3
                                        4 5 6
                                        7 8 9 1*/
{
   int i,j,r,k=1;
   printf("Enter the range: ");
   scanf("%d",&r);
   printf("FLOYD'S TRIANGLE\n\n");
   for(i=1;i<=r;i++)
    {
       for(j=1;j<=i;j++,k++)
       {
        printf(" %d",k);
       }
       printf("\n");
   }
}
void rombusPattern()
{
    /* Rhombus Pattern

   1 1
  2   2
 3     3
4       4
 3     3
  2   2
   1 1

*/
  int num,i,c,s,n;
  printf("Enter maximum number : ");
  scanf("%d", &num);
  for(i=1; i<=num; i++)
  {
    for(s=num-i; s>=1; s--)
       printf(" ");
    printf("%d", i);
    for(s=i*2; s>1; s--)
       printf(" ");
    printf("%d", i);
    printf("\n");
  }
  for(i=1,n=num-1; i<num; i++,n--)
  {
    for(s=i; s>=1; s--)
       printf(" ");
    printf("%d",n);
    for(s=n*2; s>1; s--)
       printf(" ");
    printf("%d", n);
    printf("\n");
    }
}
void printbelowPattern()
{
/* Print Pattern

A
1 2
B C D
3 4 5 6
E F G H I

*/
	int i,n,j,k=1;
	char ch='A';
	printf("\n\nEnter How Many Rows Own::>\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((i%2)==0)
		{
		 	for(j=1;j<=i;j++)
			{
				printf("%d",k);
				k++;
			}
		}
		else
		{
			for(j=1;j<=i;j++)
			{
				printf("%c",ch);
				ch++;
			}
		}
		printf("\n");
	}

}
void usingLoopprintstars()
{
    /*--

 **********
 ***  ***  ***
 **    **    **
 *      *      *

 *      *      *
 **    **    **
 ***  ***  ***
 **********

--*/

     int i, j, k;
     for(i=1;i<=5;i++)
     {
         for(j=1;j<=6-i;j++)
         {
             printf("*");
         }
         for(k=1;k<i;k++)
         {
             printf("  ");
         }
         for(j=1;j<=6-i;j++)
         {
             printf("*");
         }
         printf("\n");
     }
     for(i=2;i<=5;i++)
     {
         for(j=1;j<=i;j++)
         {
             printf("*");
         }
         for(k=1;k<=5-i;k++)
         {
             printf("  ");
         }
         for(j=1;j<=i;j++)
         {
             printf("*");
         }
         printf("\n");
     }

}
void findLcmAndHcfUsingLoop()
{
	int a, b, g, hcf, i, lcm;


	printf( " Enter Two Numbers : " );
	scanf( "%d %d", &a, &b );

	if(a > b)
		g = a;
	else
		g = b;

	for(i=g ; i<=(a*b) ; i++)
	{
		if((i%a == 0) && (i%b == 0))
		{
			lcm = i;
			break;
		}
	}

	printf( "\n The LCM of given Numbers is = %d", lcm );
	hcf = (a * b) / lcm;
	printf( "\n The HCF of given Numbers is = %d", hcf );

}

