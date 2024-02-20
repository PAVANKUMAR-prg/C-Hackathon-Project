void typesOfOperator()//OPERATOR//
{
    printf("ARTHMATIC OPERATION\n");
    printf("RELATIONAL OPERATOR\n");
    printf("LOGICAL OPERATOR\n");
    printf("BITWISE OPERATOR\n");
    printf("SIZE OF OPERATOR\n");
    printf("TERNARY OPERATOR\n");
}
void andOperator()
{
	int a;

	a = (2<1) || (4<3);
	printf ( "\n (2<1) || (4<3) = %d", a ) ;

	a = (2<1) || (4>3);
	printf ( "\n (2<1) || (4>3) = %d", a ) ;

	a = (2>1) || (4<3);
	printf ( "\n (2>1) || (4<3) = %d", a ) ;

	a = (2>1) || (4>3);
	printf ( "\n (2>1) || (4>3) = %d", a ) ;

	getch();
	return 0;
}

void notOperator()
{
	int a;

	a = !(5<1);
	printf ( "\n !(5<1) = %d", a ) ;

	a = !(5>1);
	printf ( "\n !(5>1) = %d", a ) ;

	getch();
}
void arthmaticOperator()
{
	int  a = 2, b = 3;
  	int  sum, sub, mul, rem, idiv ;
  	float  rdiv;


  	sum = a + b;
  	sub = a - b;
  	mul = a * b;
  	idiv = a / b;
	rem = a % b;
  	rdiv = (float)a / (float)b;


	printf( "\n sum = %d", sum );
	printf( "\n sub = %d", sub );
	printf( "\n mul = %d", mul );
	printf( "\n idiv = %d", idiv );
	printf( "\n rem = %d", rem );
  	printf( "\n rdiv = %f", rdiv );
}
void logicalOperator()
{
	int a;

	a = (2<1) && (4<3);
	printf ( "\n (2<1) && (4<3) = %d", a ) ;

	a = (2<1) && (4>3);
	printf ( "\n (2<1) && (4>3) = %d", a ) ;

	a = (2>1) && (4<3);
	printf ( "\n (2>1) && (4<3) = %d", a ) ;

	a = (2>1) && (4>3);
	printf ( "\n (2>1) && (4>3) = %d", a ) ;

}
void incrementAndDecrement()
{
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;

    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);
}
void relationalOperator()
{
	int n;
	printf( "\n Enter any Number : " );
	scanf( "%d", &n );

	printf( "\n (n < 10) is = %d", (n < 10) );
	printf( "\n (n > 10) is = %d", (n > 10) );
	printf( "\n (n <= 10) is = %d", (n <= 10) );
	printf( "\n (n >= 10) is = %d", (n >= 10) );
	printf( "\n (n == 10) is = %d", (n == 10) );
	printf( "\n (n != 10) is = %d", (n != 10) );

}
void assignmentOperator()
{
    int a,c;
    printf("Enter the number for a\n");
    scanf("%d",&a);

    c = a;      // c is 5
    printf("c = %d\n", c);
    c += a;     // c is 10
    printf("c = %d\n", c);
    c -= a;     // c is 5
    printf("c = %d\n", c);
    c *= a;     // c is 25
    printf("c = %d\n", c);
    c /= a;     // c is 5
    printf("c = %d\n", c);
    c %= a;     // c = 0
    printf("c = %d\n", c);

}
void sizeOfOperator()
{
    int a;
    float b;
    double c;
    char d;
    printf("Size of int=%lu bytes\n",sizeof(a));
    printf("Size of float=%lu bytes\n",sizeof(b));
    printf("Size of double=%lu bytes\n",sizeof(c));
    printf("Size of char=%lu byte\n",sizeof(d));

}
void orOperator()
{
    int a,b;
    printf("Enter the number for a and b\n");
    scanf("%d%d",&a,&b);
    printf("Output = %d", a|b);
}
void bitwiseXor()
{
    int a,b;
    printf("Enter the values for a and b\n");
    scanf("%d%d",&a,&b);
    printf("Output = %d", a^b);
}
void shiftOperator()
{
    int num, i;
    printf("Enter number for shift\n");
    for (i=0; i<=2; ++i)
    printf("Right shift by %d: %d\n", i, num>>i);
    printf("\n");
    for (i=0; i<=2; ++i)
    printf("Left shift by %d: %d\n", i, num<<i);
}
void checkNumberPrimeOrNot()
{
    printf("in this program we use operators to find given number is prime or not\n");
    int num,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
   if(count==0 && num!= 1)
        printf("%d is a prime number",num);
   else
      printf("%d is not a prime number",num);

}
/*Series and find sum of 1+3+5+...+n */
void SeriesAndFindSum()
{
  int n,i,sum=0;
  printf("Enter any no: ");
  scanf("%d",&n);
  for(i=1;i<n;i=i+2)
  {
    printf("%d+",i);
    sum=sum+i;
  }
 printf("%d",n);
 printf("\nsum=%d",sum+n);
}
void sumOfSeriesOfFraction()/*Sum of series 1+1/2+1/3+....+1/n*/
{
   int n,i,sum=0;
   printf("Enter any no: ");
   scanf("%d",&n);
   printf("1");
   for(i=2;i<=n-1;i++)
   {
     printf(" 1/%d +",i);
   }
   for(i=1;i<=n;i++)
   {
       sum=sum+i;
   }
    printf(" 1/%d",n);
    printf("\nSum=1/%d",sum+1/n);
}
void toAddNumbersUntillTheUserEntersZero()
{
    // Program to add numbers until the user enters zero
  double number, sum = 0;

  // the body of the loop is executed at least once
  do {
    printf("Enter a number: ");
    scanf("%lf", &number);
    sum += number;
  }
  while(number != 0.0);

  printf("Sum = %.2lf",sum);
}

