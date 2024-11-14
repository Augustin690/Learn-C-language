#include <stdio.h>
#include <string.h>

void display_message(char * message)
{
  printf(message);
}
char isCharInteger(char c);
char charToInteger(char c);
char stringToInteger(char * c);
char stringLength(char * c);


int main(int argc, char *argv[]) {
  /* to be completed */
  // next line just shows how to use display_message; could be removed
  display_message("executing sum... \n");

  // first, check that the number of parameters is correct
  if(argc != 3){
    display_message("Wrong usage, 2 parameters expected: ./sum param1 param2");
    return -1;
  }

  // now, check that parameters represent integer values
  // declare, implement, and use function isCharInteger

  int i;
  for(i=1; i<argc;i++)
  {
    const char * arg = argv[i];
    int j=0;
    if(arg[j]=='-')
      j=1;
    while(arg[j]!='\0')
    {
      char c = arg[j];
      if(isCharInteger(c)==0)
      {
        display_message("Wrong usage, parameters param1 and param2 should be integers when executing ./sum param1 param2\n");
        return -2;
      }
      j++;
    }

  }



  /*char n11 = *argv[0];
  char n22 = *argv[1];*/

  char n1 = stringToInteger(argv[1]);
  char n2 = stringToInteger(argv[2]);


  printf("here is the sum %d\n", n1 + n2);

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
