#include<stdio.h>//MAIN//
#include<math.h>
#include"loop.h"
#include"operator.h"
#include"cinditional statements.h"
#include"array.h"
int main()
{
    int choice;
    firstTopics:
    while(1)
    {
       printf("1.LOOP\n");
       printf("2.CONDITIONAL STATEMENTS\n");
       printf("3.OPERATOR\n");
       printf("4.ARRAY\n");
       printf("5.EXIT\n");
       printf("6.go to first topic\n");
       printf("Enter the choice between 1 to 4\n");
       scanf("%d",&choice);
       switch(choice)
       {
           case 1:while(1)
                {
                  printf("1.types of loop\n");
                  printf("2.for loop defination\n");
                  printf("3.working of for loop\n");
                  printf("4.example program for  for loop\n");
                  printf("5.while loop defination\n");
                  printf("6.working of while loop\n");
                  printf("7.example program for while loop\n");
                  printf("8.do while loop explaination\n");
                  printf("9.floyds triangle using loop\n");
                  printf("10.print rhombus pattern using loop\n");
                  printf("11.print A to I and 1 to 6 like right angled triangle\n");
                  printf("12.print stars using loop\n");
                  printf("13.find lcm and hcf using loop\n");
                  printf("14.go to first topic\n");
                  printf("Enter choice between 1 to 13\n ");
                  scanf("%d",&choice);
                  switch(choice)
                  {
                      case 1:typesOfLoops();break;
                      case 2:forLoopDefination();break;
                      case 3:workingOfForLoop();break;
                      case 4:exampleProgramForForLoop();break;
                      case 5:whileLoopDefination();break;
                      case 6:workingOfWhileLoop();break;
                      case 7:exampleProgramForWhileLoop();break;
                      case 8:doWhileLoopDefination();break;
                      case 9:floydsTriangle();break;
                      case 10:rombusPattern();break;
                      case 11:printbelowPattern();break;
                      case 12:usingLoopprintstars();break;
                      case 13:findLcmAndHcfUsingLoop();break;
                      case 14:goto firstTopics;break;
                      case 15:printf("invalid choice\n");

                  }
                }
            case 2:while(1)
            {
                printf("1.if statement defination\n");
                  printf("2.if statement example program\n");
                  printf("3.if else statement defination\n");
                  printf("4.if else statement example program\n");
                  printf("5.if else if ladder defination\n");
                  printf("6.if else if ladder example program\n");
                  printf("7.linear search\n");
                  printf("8.find day using switch\n");
                  printf("9.operators in switch case\n");
                  printf("10.nested switch case\n");
                  printf("11.checking vowel or not using switch case\n");
                  printf("12.maximum number between two\n");
                  printf("13.perfect root of the given number\n");
                  printf("14.find leap year\n");
                  printf("15.km convert into centi meter or meter\n");
                  printf("16.goto firstTopic");
                  printf("enter the choice between 1 to 15\n");
                  scanf("%d",&choice);
                  switch(choice)
                  {
                      case 1:ifStatementDefination();break;
                      case 2:ifStatementExampleProgram();break;
                      case 3:ifElseStatementDefination();break;
                      case 4:ifElseStatementExampleProgram();break;
                      case 5:ifElseIfLadderDefination();break;
                      case 6: ifElseIfLaddeexampleProgram();break;
                      case 7:LinearSearch();break;
                      case 8:findDayUsingSwitchCase();break;
                      case 9:operatornsInSwitchCase();break;
                      case 10:nestedSwitchCase();break;
                      case 11:checkingVowelOrNotUsingSwitchCase();break;
                      case 12:maximumNumberBetweenTwoNum();break;
                      case 13:perfectSquareRoot();break;
                      case 14:findLeapYear();break;
                      case 15:kmConvertToMetreCentiMeter();break;
                      case 16:goto firstTopics ;break;
                      default:printf("invalid choice\n");
                  }
            }
            case 3:while(1)
                {
                   printf("1.types of operator\n");
                   printf("2.and operator\n");
                   printf("3.not operator\n");
                   printf("4.arithmatic operator\n");
                   printf("5.logical operator\n");
                   printf("6.increment and decrement\n");
                   printf("7.relational operator\n");
                   printf("8.assignment operator\n");
                   printf("9.size of operator\n");
                   printf("10.or operator\n");
                   printf("11.bitwise xor\n");
                   printf("12.shift operator\n");
                   printf("13.check number is prime or not\n");
                   printf("14.number of series and find some\n");
                   printf("15.to add numbers unstill user enter zero\n");
                   printf("16.go to first topics");
                   printf("enter the choice between 1 to 15\n ");
                   scanf("%d",&choice);
                   switch(choice)
                   {
                        case 1:typesOfOperator();break;
                        case 2:andOperator();break;
                        case 3:notOperator();break;
                        case 4:arthmaticOperator();break;
                        case 5:logicalOperator();break;
                        case 6:incrementAndDecrement();break;
                        case 7:relationalOperator();break;
                        case 8:assignmentOperator();break;
                        case 9:sizeOfOperator();break;
                        case 10:orOperator();break;
                        case 11:bitwiseXor();break;
                        case 12:shiftOperator();break;
                        case 13:checkNumberPrimeOrNot();break;
                        case 14:SeriesAndFindSum();break;
                        case 15:toAddNumbersUntillTheUserEntersZero();break;
                        case 16:goto firstTopics;break;
                        default:printf("invalid choice\n");

                   }
                }
            case 4:while(1)
                  {
                   printf("1.array demo\n");
                   printf("2.size of array\n");
                   printf("3.array pointer\n");
                   printf("4.character array\n");
                   printf("5.numbers printf from 1 to 10\n");
                   printf("6.address of array variable\n");
                   printf("7.sum of array\n");
                   printf("8.find largest in an array\n");
                   printf("9.find samllest in an array\n");
                   printf("10.find average in an array\n");
                   printf("11.convert decimal number to octal number\n");
                   printf("12.find even and odd of array element\n");
                   printf("13.maximum elements in array\n");
                   printf("14.reverse order\n");
                   printf("15.no of zeroes\n");
                   printf("16.sum And Sub Of Matrix Of Array Elements\n");
                   printf("17.printing Array Elements\n");
                   printf("18.deletingElementInArray\n");
                   printf("19.sort elements\n");
                   printf("20.transpose of matrix\n");
                   printf("21.structure demo\n");
                   printf("22.trace of matrix\n");
                   printf("23.norm of matrix\n");
                   printf("24.address of matrix elements\n");
                   printf("25.string length\n");
                   printf("26.swapping of two array elements\n");
                   printf("27.no of zeroes positive and negative elements\n");
                   printf("28.diogonal elements sum\n");
                   printf("29.ascending and descending order\n");
                   printf("30.delete an element from an array\n");
                   printf("31.copy element in array to another array\n");
                   printf("32.second largest element in an array\n");
                   printf("33.multiplication array\n");
                   printf("34.go to first topic");
                   printf("Enter the choice between 1 to 34\n");
                   scanf("%d",&choice);
                   switch(choice)
                   {
                       case 1:arrayDemo();break;
                       case 2:sizeOfArray();break;
                       case 3:arrayPointer();break;
                       case 4:charArray();break;
                       case 5:numbers1To10();break;
                       case 6:addressOfArrayVariables();break;
                       case 7:sumofarray();break;
                       case 8:findLargestOfArrayElement();break;
                       case 9:findSmallestOfArrayElement();break;
                       case 10:findaverageOfArrayElement();break;
                       case 11:covertNumberDecimalToOctal();break;
                       case 12:FindEvenAndOddOfTheArrayElements();break;
                       case 13:maxElementsInArrayElements();break;
                       case 14:reverseOrderOfArrayElements();break;
                       case 15:noOfZeroesInArrayElements();break;
                       case 16:sumAndSubOfMatrixOfArrayElements();break;
                       case 17:printingArrayElements();break;
                       case 18:deletingElementInArray();break;
                       case 19:sortElementUsing3RowsAnd3col();break;
                       case 20:tranposeOfMatrixUsingArray();break;
                       case 21:structureDemoUsingDifferentDatatypesOfArray();break;
                       case 22:traceOfMatrixUsingTwoDimensionalArray();break;
                       case 23:normOfMatrixUsingTwoDimensionalArray();break;
                       case 24:addressOfMatrixElements();break;
                       case 25:stringLength();break;
                       case 26:swappingOfTwoArrayElements;break;
                       case 27:noOfZerozPositiveAndNegative();break;
                       case 28:diagonalElementsSum();break;
                       case 29:acendingAndDescendingOrderInArray();break;
                       case 30:deleteAnElementFromArray();break;
                       case 31:copyArrayElementsToAnotherArray();break;
                       case 32:secondLargestInAnArray();break;
                       case 33:multiplicationOfArray();break;
                       case 34:goto firstTopics;break;
                       default:printf("invalid choice\n");
                   }
                  };break;
               case 5:exit(0);break;

       }
    }
}
