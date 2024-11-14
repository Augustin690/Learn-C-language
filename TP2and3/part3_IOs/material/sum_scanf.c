// This file is almost empty... We think you should be able to start from
// scratch. Of course, you can reuse code you wrote in previous labs.
#include <stdio.h>
#include <string.h>


char isCharInteger(char c);
char charToInteger(char c);
char stringToInteger(char * c);
char stringLength(char * c);

void display_message(char * message)
{
  printf("%s", message);
}

int main(int argc, char *argv[]) {
  /* To be completed */
  int i;
  int j;

  // display a message to indicate what users should write
  // use printf to do that
  printf("enter one integer");

  // wait until users have provided you information
  // use scanf to do that
  scanf("%d",&i);

  // check that information provided is an integer
  if (isCharInteger(i)==0) {
    /* code */
    display_message("Wrong usage, parameters param1 and param2 should be integers when executing ./sum param1 param2\n");
  }

  // repeat previous steps to get a second integer
  printf("enter another integer");

  scanf("%d",&j);

  if (isCharInteger(j)==0) {
    /* code */
    display_message("Wrong usage, parameters param1 and param2 should be integers when executing ./sum param1 param2\n");
  }
  // compute the sum of integer values and display it


  printf("here is the sum %d\n", i + j);



  return 0;
}

char isCharInteger(char c)
{
  switch(c){
  case '0':
    return 1;
  case '1':
    return 1;
  case '2':
    return 1;
  case '3':
    return 1;
  case '4':
    return 1;
  case '5':
    return 1;
  case '6':
    return 1;
  case '7':
    return 1;
  case '8':
    return 1;
  case '9':
    return 1;
  default:
    return 0;
  }
}

char charToInteger(char c)
{
  /* to be completed */
  switch(c){
  case '0':
    return 0;
  case '1':
    return 1;
  case '2':
    return 2;
  case '3':
    return 3;
  case '4':
    return 4;
  case '5':
    return 5;
  case '6':
    return 6;
  case '7':
    return 7;
  case '8':
    return 8;
  case '9':
    return 9;
  default:
    return 0;
  }
}

char stringToInteger(char * c)
{
  char sign = 1;
  char result=0;
  char i;

  if(c[0]=='-')
  {
    sign = -1;
  }

  char length = stringLength(c);

  for(i=length-1; i>=0; i--)
  {
    if(isCharInteger(c[i]))
    {
      char current_integer = charToInteger(c[i]);
      char factor = 1;
      int j;
      for(j=0;j<length-i-1;j++)
      {
        factor = factor*10;
      }
      current_integer = current_integer * factor;
      result = result+current_integer;
    }
  }

  return sign*result;
}
char stringLength(char * c)
{
  char j=0;
  while(c[j]!='\0')
  {
    j++;
  }
  return j;
}
