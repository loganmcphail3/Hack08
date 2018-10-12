#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "string_utils.h"

int main(int argc, char **argv) {

char s[] = "food";
  replaceChar(s,'d','z');
  printf("I expected fooz, I got %s\n", s);
char s1[] = "peach";
  replaceChar(s1,'e','a');
  printf("I expected paach, I got %s\n", s1);
char s2[] = "frosh";
  replaceChar(s2,'f','t');
  printf("I expected trosh, I got %s\n", s2);


char ss[] = "lasagna";
  char *result = replaceCharCopy(ss,'s','g');
  printf("I expected lagagna I got %s\n", result);
char ss1[] = "sigep";
  result = replaceCharCopy(ss1,'s','t');
  printf("I expected tigep I got %s\n", result);
char ss2[] = "theta";
result = replaceCharCopy(ss2,'h','l');
printf("I expected tleta I got %s\n", result);

char sss[] = "lasagna";
  removeChar(sss,'s');
  printf("I expected laagna I got %s\n", sss);
char sss1[] = "sigep";
  removeChar(sss1,'s');
  printf("I expected igep I got %s\n", sss1);
char sss2[] = "theta";
  removeChar(sss2,'h');
  printf("I expected teta I got %s\n", sss2);

  char ssss[] = "chemisty";
    char *result1 = removeCharCopy(ssss,'s');
    printf("I expected chemity I got %s\n", result1);
  char ssss1[] = "cookie";
    result1 = removeCharCopy(ssss1,'o');
    printf("I expected ckie I got %s\n", result1);
  char ssss2[] = "bottle";
    result1 = removeCharCopy(ssss2,'o');
    printf("I expected bttle I got %s\n", result1);



}
