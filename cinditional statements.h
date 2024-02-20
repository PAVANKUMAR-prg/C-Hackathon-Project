void ifStatementDefination()//CONDITIONAL STATEMENT//
{
    printf("an if statement consists of a boolean expression followed by one or more statements\n");
}
void ifStatementExampleProgram()
{
    int i;
    printf("Enter the number:\n");
    scanf("%d",&i);
    if(i%2==0)
    {
        printf("given number is even\n");
    }
}
void ifElseStatementDefination()
{
    printf("an if else can be can be followed by else statement\n");
}
void ifElseStatementExampleProgram()
{
    int i;
    printf("Enter the number\n");
    scanf("%d",&i);
    if(i>0)
    {
        printf("given number is positive\n");
    }
    else
    {
        printf("given number is negative\n");
    }
}
void  ifElseIfLadderDefination()
{
    printf("when we have multiple options available or we need to take multiple decisions based on available condition,we can use another form of if statement called else if ladder\n");
}
void ifElseIfLaddeexampleProgram()
{
    int num1,num2,num3;
    printf("Enter the values for num1,num2,num3\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 & num1>num3)
    {
        printf("%d is greater\n",num1);
    }
    else if(num2>num3)
    {
        printf("%d is greater\n",num2);
    }
    else
    {
        printf("%d is greater\n",num3);
    }
}
void LinearSearch()
{
    int array[50],search,c,n;
    printf("enter the element\n");
    scanf("%d",&n);
    printf("enter %d elements:\n");
    for(c=0;c<n;c++)
    {
        scanf("%d",&array[c]);
    }
    printf("Enter the number to search\n:");
    scanf("%d",&search);
    for(c=0;c<n;c++)
    {
        if(array[c]==search)
        {
            printf("%d is present at location %d\n",search,c+1);break;
        }
        if(c==n)
        {
            printf("%d is not present in array\n",search);
        }
    }
}
void findDayUsingSwitchCase()
{

	int day;
	printf("Enter day number:>>\n");
	scanf("%d",&day);
	switch(day)
	{

		case 1:
		{
			printf("Monday");
			break;
		}
	  	case 2:
		{
			printf("Tuesday");
			break;
		}
		case 3:
		{
			printf("Wednesday");
			break;
		}
	 	case 4:
		{
			printf("Thursday");
			break;
		}
		case 5:
		{
			printf("Friday");
			break;
		}
	  	case 6:
		{
		 	printf("Saturday");
			break;
		}
	 	case 7:
		{
			printf("Sunday");
		 	break;
		}
		default:
		{
			printf("Invalid day number");
		}
	}
	printf("\nHave a nice day");
}
void operatornsInSwitchCase()// Operator as case in switch case
{
	char op;
	float num1,num2,res;
	printf("Enter first number:>>\n");
	scanf("%f",&num1);
	printf("Enter second number:>>\n");
	scanf("%f",&num2);
	printf("Operation(+,-,*,/):>>\n");
	fflush(stdin);
	scanf("%c",&op);
	switch(op)
	{
		case '+':
		{
			res=num1+num2;
			break;
		}
		case '-':
		{
			res=num1-num2;
			break;
		}
		case '*':
		{
			res=num1*num2;
			break;

		}
		case '/':
		{
			res=num1/num2;
			break;
		}
		default:
		{
			printf("Invalid choice...");
		}
	}
	printf("Result::%f",res);

}
void nestedSwitchCase()
{
    int choice,ch1,ch2;
	printf("\n1.Pen \n2.Fruits");
	printf("\nEnter value of choice:>>");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			printf("\n1.Micro \n2.Renold \n3.Cello:");
			printf("\nEnter the value of Ch1:>>\n");
			scanf("%d",&ch1);
			switch(ch1)
			{
				case 1:
				{
					printf("\nMicro");
					break;
				}
				case 2:
				{
					printf("\nRenold");
					break;
				}
				case 3:
				{
					printf("\nCello");
					break;
				}
				default:
				{
					printf("Invalid case");
				}
			}
			break;
		}
		case 2:
		{
			printf("\n1.Mango \n2.Orange \n3.Pineple");
			printf("Enter the value of Ch2:>>\n");
			scanf("%d",&ch2);
			switch(ch2)
			{
				case 1:
				{
					printf("\nMango");
					break;
				}
				case 2:
				{
					printf("\nOrange");
					break;
				}
				case 3:
				{
					printf("\nPineple");
					break;
				}
				default:
				{
					printf("Invalid case");
				}
			}
			break;
		}
		default:
		{
			printf("Invalid Choice");
		}
	}

}
void checkingVowelOrNotUsingSwitchCase()
{

	char ch;
     printf(" Enter any Character : " );
	scanf( "%c", &ch );

	switch( ch )
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':printf( "\n %c is Vowel.", ch );break;
		default :
			printf( "\n %c is not a Vowel.", ch );
			break;
	}

}
void maximumNumberBetweenTwoNum()
{
    int a,b,max;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    if(a > b)
         max = a;
    else
         max = b;
    printf("Max is %d",max);
    return 0;
}
void perfectSquareRoot()
{
	int n,a;
	printf("Enter the value of N:\n");
	scanf("%d",&n);
	a=sqrt(n);
	if(n-(a*a)==0)
		printf("\n\n\nIt is perfect squre");
	else
		printf("\n\n\nIt is not perfect squre");
}
void findLeapYear()
{
  int year;

  printf("Enter a year : \n");
  scanf("%d", &year);

  if ( year%400 == 0)
  {
     printf("%d is a leap year.\n", year);
  }
  else if ( year%100 == 0)
  {
     printf("%d is not a leap year.\n", year);
  }
  else if ( year%4 == 0 )
  {
     printf("%d is a leap year.\n", year);
  }
  else
  {
     printf("%d is not a leap year.\n", year);
  }
}
void kmConvertToMetreCentiMeter()
{
  float km;
  int v;
  float ans;

  printf("Enter distance in K.M. : ");
  scanf("%f",&km);
  printf("1 for meter 2 for centimeter 3 for mm : ");
  fflush(stdin);
  scanf("%d",&v);

  if(v==1)
  {
    ans=km*1000;
  }

  if(v==2)
  {
    ans=km*100000;
  }

  if(v==3)
  {
    ans=km*1000000;
  }

 printf("Answer : %.2f",ans);
}




















