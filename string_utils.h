
//This function relaces a given character with a different character
void replaceChar(char *s, char oldChar, char newChar);

//This function takes a string and crates a new copy of it
//But with a certain character it replaces it with a different character
char * replaceCharCopy(const char *s, char oldChar, char newChar);

//Takes a string and removes all instances of a certain character
void removeChar(char *s, char c);

//Takes a string and creates a new copy but will all specified characters removed from it
char * removeCharCopy(const char *s, char c);

//Splits the string it up into a array of strings
char **lengthSplit(const char *s, int n);
