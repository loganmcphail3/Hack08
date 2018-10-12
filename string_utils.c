#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "string_utils.h"



void replaceChar(char *s, char oldChar, char newChar) {
  int length = strlen(s);
   for(int i = 0; i<length; i++) {
     if (s[i] == oldChar) {
       s[i] = newChar;
     }
   }
}

char * replaceCharCopy(const char *s, char oldChar, char newChar) {
  int length = strlen(s);
  char *copy = (char * ) malloc(sizeof(char) * length);
  for(int i = 0; i<length; i++) {
    if(s[i] == oldChar) {
      copy[i] = newChar;
    } else {
      copy[i] = s[i];
    }
  }
  return copy;
}

void removeChar(char *s, char c) {
  int length = strlen(s) + 1;
  int i;
  int j = length-1;
  int holder;
  if (s[i] == c) {
    for (i = 0; i<length / 2; i++) {
    holder = s[i];
    s[i] = s[j];
    s[j] = holder;
    j--;
  }
}

//  int i;
//  double holder = s[i];
//  for (i = 0; i<length; i++) {
//    if (s[i] == c) {
//      s[i] = s[length];
//      for (int j = length; j<length; j--) {
//        s[i] = s[j-1];
//      }
//    }
//  }
}

char * removeCharCopy(const char *s, char c) {
  int length = strlen(s);
  char *copy = (char *) malloc(sizeof(char) * length + 1);
  for (int i = 0; i<length; i++) {
    copy[i] = s[i];
  }
  for (int j = 0; j<length; j++) {
    if (copy[j] = c) {
      for (int k = 0; k<length; k++) {
        copy[k] = copy[k - 1];
      }
      length--;
    }
  }
  return copy;
}

char **lengthSplit(const char *s, int n) {
  double length = strlen(s);
  int numOfStrings = ceil(length / n);
  char ** copy = (char **) malloc(sizeof(char*) * numOfStrings);
  for(int i = 0; i<n; i++) {
    copy[i] = (char *) malloc(sizeof(char) * (n + 1));
  }
  int counter = 0;
  for (int j = 0; j<numOfStrings; j++) {
    for (int k = j; k<n + j; k++) {
      copy[j][k] = s[counter];
      counter++;
      if (k == n) {
        copy[j][k] = '\0';
      }
    }
  }
  return copy;
}
