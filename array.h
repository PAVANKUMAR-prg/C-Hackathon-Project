void arrayDemo()
{

    int a[10] = {1,2,3,4,5};;
    printf("First element:%d\n",a[0]);
    printf("Last element:%d\n",a[4]);
    printf("Sum of first and last element:%d\n",a[0] + a[4]);
}
void sizeOfArray()
{
    int a[10];
    char name[10];
    float fArray[10];
    printf("Size of array a is %d bytes\n",sizeof(a));
    printf("Size of array name is %d bytes\n",sizeof(name));
    printf("Size of array fArray is %d bytes\n",sizeof(fArray));
}
void arrayPointer()
{
    printf("array it's self is a pointer\n");
    int a[10];
    a[0] = 1;
    a[1] = 2;
    printf("%d\n",a[0]);
    printf("%u\n",&a[0]);
    printf("%d\n",a);
    printf("%d\n",*a);
    printf("%d\n",*(a+1));
}
void charArray()
{
    char c[5];
    c[0] = 'A';
    c[1] = 'b';
    c[2] = 'c';
    c[3] = 'm';
    c[4] = '\0';
    printf("%s\n",c);
}
void numbers1To10()
{
    printf("print numbers from 1 to 10\n");
    int i,a[10];
    for(i=0;i<10;i++)
    {
        a[i]=i+1;
        printf("%d\n",a[i]);

    }

}
void addressOfArrayVariables()
{
    printf("print address of array variable\n");
   int i,a[10];
    for(i=0;i<10;i++)
    {
        a[i]=i+1;
        printf("%d-%d\n",&a[i],a[i]);

    }
}

void sumofarray()
{
    printf("Sum of array\n");
    int i,a[10],sumofarray=0;
    for(i=0;i<10;i++)
    {
        a[i]=i+1;
    }
    for(i=0;i<10;i++)
    {
        sumofarray=sumofarray+a[i];
    }
    printf("%d\n",sumofarray);

}
void findLargestOfArrayElement()
{
    int a[10],limit,largest,i;
    printf("Enter the no array elements you want:");
    scanf("%d",&limit);
    printf("Enter %d elements\n",limit);

    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    largest = a[0];
    for(i=1;i<limit;i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }
    }
    printf("Largest of array is %d\n",largest);
}
void findSmallestOfArrayElement()
{
    int a[10],limit,smallest,i;
    printf("Enter the no array elements you want:");
    scanf("%d",&limit);
    printf("Enter %d elements\n",limit);

    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest = a[0];
    for(i=1;i<limit;i++)
    {
        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    printf("Smallest of array is %d\n",smallest);
}

void findaverageOfArrayElement()
{
  int marks[10],i,n,sum=0,average;
  printf("Enter the number:\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("Enter number %d:",i+1);
      scanf("%d",&marks[i]);
      sum+=marks[i];
  }
  average=sum/n;
  printf("Average=%d\n",average);
}
void covertNumberDecimalToOctal()
{
    long decimalnum, remainder, quotient;
    int octalNumber[100], i = 1, j;

    printf("Enter the decimal number: ");
    scanf("%ld", &decimalnum);
    quotient = decimalnum;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    printf("Equivalent octal value of decimal no %d:\n ", decimalnum);
    for (j = i - 1; j > 0; j--)
        printf("%d", octalNumber[j]);
}


void FindEvenAndOddOfTheArrayElements()
 {
    int arr1[10], arr2[10], arr3[10];
    int i,j=0,k=0,n;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);

    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&arr1[i]);
    }

    for(i=0;i<n;i++)
    {
	if (arr1[i]%2 == 0)
	{
	   arr2[j] = arr1[i];
	   j++;
	}
	else
	{
	   arr3[k] = arr1[i];
	   k++;
	}
    }

    printf("\nThe Even elements are : \n");
    for(i=0;i<j;i++)
    {
	printf("%d ",arr2[i]);
    }

    printf("\nThe Odd elements are :\n");
    for(i=0;i<k;i++)
    {
	printf("%d ", arr3[i]);
    }
    printf("\n\n");
 }
void maxElementsInArrayElements()
{
    int num[10],i,max=0,n;
    printf("how many elements \n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    printf("maximum=%d",max);

}
void reverseOrderOfArrayElements()
{
    int a[10],limit,i,noOfZeros = 0;
    printf("Enter the limit of array:\n");
    scanf("%d",&limit);
    printf("Enter %d elements\n",limit);
    for(i=0;i<limit;i=i+1)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements in reverse order\n");
    for(i=limit-1;i>=0;i=i-1)
    {
       printf("%d\n",a[i]);
    }
}
void noOfZeroesInArrayElements()
{
    int a[10],limit,i,numOfZeros=0;
    printf("Enter the limit of array\n");
    scanf("%d",&limit);
    printf("Enter %d elements\n",limit);
    for(i=0;i<limit;i=i+1)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i=i+1)

    {
          if(a[i]==0)
      {
         numOfZeros++;
      }
    }
    printf("num of zeros %d",numOfZeros);
}
void sumAndSubOfMatrixOfArrayElements()
{
  int first[2][2],second[2][2],result[2][2],rowLimit,colLimit,row,col,sub[2][2];
  printf("Enter,row,col of first matrix\n");
  scanf("%d%d",&rowLimit,&colLimit);
  printf("Enter %d elements\n",rowLimit*colLimit);
  for(row=0;row<rowLimit;row++)
    // first matrix
  {
     for(col=0;col<colLimit;col++)
     {
        scanf("%d",&first[row][col]);
     }

  }
    //readig second matrix
  printf("Enter,row,col of second matrix\n");
  scanf("%d%d",&rowLimit,&colLimit);
  printf("Enter %d elements\n",rowLimit*colLimit);
  for(row=0;row<rowLimit;row++)

  {
     for(col=0;col<colLimit;col++)
     {
        scanf("%d",&second[row][col]);
     }

  }
   //making sum
  for(row=0;row<rowLimit;row++)

  {
     for(col=0;col<colLimit;col++)
     {
        result[row][col]=first[row][col]+second[row][col];
     }

  }
   //printing the result
   printf("sum of matrix\n");
  for(row=0;row<rowLimit;row++)

  {
     for(col=0;col<colLimit;col++)
     {
        printf("%d\t",result[row][col]);
     }
     printf("\n");
  }
  //making sub
  for(row=0;row<rowLimit;row++)

  {
     for(col=0;col<colLimit;col++)
     {
        result[row][col]=first[row][col]-second[row][col];
     }

  }
  //printing the result
   printf("sub of matrix\n");
  for(row=0;row<rowLimit;row++)

  {
     for(col=0;col<colLimit;col++)
     {
        printf("%d\t",result[row][col]);
     }
     printf("\n");
  }

}
void printingArrayElements()
{
  int _2d[3][3],rowLimit,colLimit,row,col;
  printf("Enter the num of rows and cols you want \n");
  scanf("%d%d",&rowLimit,&colLimit);
  printf("Enter %d elements\n",rowLimit*colLimit);
  for(row=0;row<rowLimit;row++)
  {
     for(col=0;col<colLimit;col++)
     {
        scanf("%d",&_2d[row][col]);
     }

  }
  printf("Entered array elements\n");
  for(row=0;row<rowLimit;row++)
  {
     for(col=0;col<colLimit;col++)
     {
        printf("%d\t",_2d[row][col]);
     }
     printf("\n");
  }
}
void deletingElementInArray()
{
	int m[10],del,i,j,n;

	printf("How many elements ?");
	scanf("%d",&n);
	printf("\nEnter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	printf("\nEnter number for delete:");
	scanf("%d",&del);
	for(i=0;i<n;i++)
	{
		if(m[i]==del)break;
	}
	for(j=i;j<n;j++)
	{
		m[j]=m[j+1];
	}
	n--;
	printf("\nAfter deletion\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",m[i]);
	}
	return 0;
}
void sortElementUsing3RowsAnd3col()
{
	int a[3][3],i,j,k,temp;

	printf("Enter 3*3 matrix A \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3-1;j++)
		{
			for(k=j+1;k<3;k++)
			{
				if(a[i][j]>a[i][k])
				{
					temp=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=temp;
				}
			}
		}
	}
	printf("\nRow by row sorted\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

}
void tranposeOfMatrixUsingArray()
{
    int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }
// computing the transpose
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
}

void structureDemoUsingDifferentDatatypesOfArray()
{
    struct Student
    {
        char name[10];
        char usn[10];
        char degree[5];
        int sem;
        float avg;
    };
    struct Student s1,s2;
    printf("Size of s1:%d\n",sizeof(s1));
    printf("Size of s2:%d\n",sizeof(s2));

}
void traceOfMatrixUsingTwoDimensionalArray()
{
    int matrix[10][10],row,col,rowLimit,colLimit,trace,norm,sum = 0,squareOfInputElement,sumofsquare = 0;
    printf("Enter the no of rows and cols you want.?\n");
    scanf("%d%d",&rowLimit,&colLimit);
    printf("Enter the %d elements\n",rowLimit*colLimit);
    for(row = 0;row<rowLimit;row++)
    {
        for(col = 0;col<colLimit;col++)
        {
            scanf("%d",&matrix[row][col]);
            squareOfInputElement = matrix[row][col] * matrix[row][col];

        }
    }
    for(row = 0; row < rowLimit; row++)
    {
        sum = sum + matrix[row][row];
        printf("Trace of matrix:%d\n",sum);
    }
}
void normOfMatrixUsingTwoDimensionalArray()
{
    int matrix[10][10],row,col,rowLimit,colLimit,trace,norm,sum = 0,squareOfInputElement,sumofsquare = 0;
    printf("Enter the no of rows and cols you want.?\n");
    scanf("%d%d",&rowLimit,&colLimit);
    printf("Enter the %d elements\n",rowLimit*colLimit);
    for(row = 0;row<rowLimit;row++)
    {
        for(col = 0;col<colLimit;col++)
        {
            scanf("%d",&matrix[row][col]);
            sumofsquare = sumofsquare + squareOfInputElement;
        }
    }
    norm = sqrt((double)sumofsquare);
    printf("Norm of matrix:%d\n",norm);

}
void addressOfMatrixElements()
{
    int a[3][3],row,col,i=1;
    printf("Size of a:%d\n",sizeof(a));
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            a[row][col] = i;
            i++;
        }
    }
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            printf("%d\t",a[row][col]);
        }
        printf("\n");
    }

    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            printf("%u\t",&a[row][col]);
        }
        printf("\n");
    }
    return 0;

}
void stringLength()
{
    char a[10];
    int i=0,strLength=0;
    printf("Enter the string:\n");
    getchar();
    gets(a);
    while(a[i]!='\0')
    {
        i=i+1;
        strLength++;
    }
    printf("%d",strLength);
}

void swappingOfTwoArrayElements()
{
  int a[5],b[5],c[5],i;
  printf("Enter First array->\n");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
  printf("Enter Second array->\n");
  for(i=0;i<5;i++)
{
            scanf("%d",&b[i]);
}
  printf("\nArrays before swapping");
  printf("\nFirst array->");
  for(i=0;i<5;i++)
{
            printf("%d",a[i]);
  }
  printf("\nSecond array->");
  for(i=0;i<5;i++){
            printf("%d",b[i]);
  }
  for(i=0;i<5;i++)
{
            //write any swapping technique
            c[i]=a[i];
            a[i]=b[i];
            b[i]=c[i];
  }
  printf("Arrays after swapping\n");
  printf("First array->\n");
  for(i=0;i<5;i++){
            printf("%d\n",a[i]);
  }
  printf("Second array->\n");
  for(i=0;i<5;i++){
            printf("%d\n",b[i]);
  }
}


void noOfZerozPositiveAndNegative()
{
	int m[10],i,pos=0,neg=0,zero=0,n;
	printf("How many numbers ?");
	scanf("%d",&n);
	printf("\nEnter %d integer elements \n",n);
	for(i=0;i<n;i++)
	{
		printf("\n");
		scanf("%d",&m[i]);
		if(m[i]>0)
		{
			pos++;
		}
		else if(m[i]<0)
		{
			neg++;
		}
		else
		{
			zero++;
		}
	}
	printf("\npositive elements=%d\n",pos);
	printf("\nnegative elements=%d\n",neg);
	printf("\nzero elements=%d\n",zero);

}

void diagonalElementsSum()
{
  int a[10][10],i,j,sum=0,m,n;
  printf("\nEnter the row and column of matrix: ");
  scanf("%d%d",&m,&n);
  printf("\nEnter the elements of matrix: ");
  for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      {
           scanf("%d",&a[i][j]);
      }
  }
  printf("\nThe matrix is\n");
  for(i=0;i<m;i++)
  {
      printf("\n");
      for(j=0;j<m;j++)
      {
        printf("%d\t",a[i][j]);
      }
  }

  for(i=0;i<m;i++)
  {
     for(j=0;j<n;j++)
     {
          if(i==j)
              sum=sum+a[i][j];
     }
  }

   printf("\nSum of the diagonal elements of a matrix is: %d",sum);
}


void acendingAndDescendingOrderInArray()

{
	int arr[10],tmp[10],i,j,temp;
	for(i=0;i<10;i++)
	{
		printf("\nEnter value of %d Elements:",i+1);
		scanf("%d",&arr[i]);
		tmp[i]=arr[i];
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n-------------------------------------------");
	printf("\n Original\tAccending\tDescending");
	printf("\n-------------------------------------------");
	for(i=0,j=9;i<10;i++,j--)
	{
		printf("\n%d\t\t%d\t\t%d",tmp[i],arr[i],arr[j]);
	}
	printf("\n-------------------------------------------");
	printf("\n\n\n press any key-----");
}


void deleteAnElementFromArray()
{
	int m[10],del,i,j,n;
	printf("How many elements ?");
	scanf("%d",&n);
	printf("\nEnter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	printf("\nEnter number for delete:");
	scanf("%d",&del);
	for(i=0;i<n;i++)
	{
		if(m[i]==del)break;
	}
	for(j=i;j<n;j++)
	{
		m[j]=m[j+1];
	}
	n--;
	printf("\nAfter deletion\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",m[i]);
	}
}
void copyArrayElementsToAnotherArray()
{

    int arr1[30], arr2[30], i, num;
    printf("\nEnter no of elements:");
    scanf("%d", &num);
    //Accepting values into Array
    printf("\nEnter the values:");
    for (i = 0; i < num; i++)
    {
       scanf("%d", &arr1[i]);
    }
    for (i = 0; i < num; i++)
    {
    arr2[i] = arr1[i];
    }
    //Printing of all elements of array
    printf("The copied array is:");
    for (i = 0; i < num; i++)
    printf("\n arr2[%d] = %d", i, arr2[i]);
}
void secondLargestInAnArray()
{
    int arr[100],i,n,sec_largest;
    printf("Enter the size of the array?");
    scanf("%d",&n);
    printf("Enter the elements of the array?");
    for(i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sec_largest = arr[1];
    for(i=0;i<n;i++)
    {
        if (arr[i]>sec_largest)
        {
            sec_largest=arr[i];
        }
    }
    printf(" second largest = %d\n",sec_largest);
}
void multiplicationOfArray()
{
    int first[5][5],second[5][5],result[5][5],row1,col1,row2,col2,rowCounter,colCounter,k;
    printf("Enter the first matrix row and column limit\n");
    scanf("%d%d",&row1,&col1);
    printf("Enter first matrix %d elements\n",row1*col1);
    for(rowCounter=0;rowCounter<row1;rowCounter++)
    {
        for(colCounter = 0;colCounter<col1;colCounter++)
        {
            scanf("%d",&first[rowCounter][colCounter]);
        }
    }

    printf("Enter the second matrix row and column limit\n");
    scanf("%d%d",&row2,&col2);
    printf("Enter second matrix %d elements\n",row2*col2);
    for(rowCounter=0;rowCounter<row2;rowCounter++)
    {
        for(colCounter = 0;colCounter<col2;colCounter++)
        {
            scanf("%d",&second[rowCounter][colCounter]);
        }
    }
    printf(" First matrix:\n");
    for(rowCounter=0;rowCounter<row1;rowCounter++)
    {
        for(colCounter = 0;colCounter<col1;colCounter++)
        {
            printf("%d\t",first[rowCounter][colCounter]);
        }
        printf("\n");
    }
     printf("Second matrix:\n");
    for(rowCounter=0;rowCounter<row2;rowCounter++)
    {
        for(colCounter = 0;colCounter<col2;colCounter++)
        {
            printf("%d\t",second[rowCounter][colCounter]);
        }
        printf("\n");
    }

    if(row1 == col2)
    {
   		for (rowCounter = 0; rowCounter < row1; rowCounter++)
   		{
    			for (colCounter = 0; colCounter < col2; colCounter++)
    			{
         				result[rowCounter][colCounter] = 0;
      			}
   		}


        for (rowCounter = 0; rowCounter < row1; rowCounter++)
        {
      		for (colCounter = 0; colCounter < col2; colCounter++)
      		{
                for ( k = 0; k < col1; k++)
                {
            			result[rowCounter][colCounter] += first[rowCounter][k] * second[k][colCounter];
                }

            }
        }

    }
    else
    {
        printf("Rows of first matrix is not equal to columns of second matrix,enter correct order of matrix\n");
    }


    printf("Resultant matrix\n");
    for(rowCounter=0;rowCounter<row1;rowCounter++)
    {
        for(colCounter = 0;colCounter<col2;colCounter++)
        {
            printf("%d\t",result[rowCounter][colCounter]);
        }
        printf("\n");
    }

    return 0;
}

