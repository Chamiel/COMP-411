
/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */

#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */

main()
{
  char Strings[NUM][LEN];

  printf("Please enter %d strings, one per line:\n", NUM);

  /* Write a for loop here to read NUM strings.

     Use fgets(), with LEN as an argument to ensure that an input line that is too
     long does not exceed the bounds imposed by the string's length.  Note that the
     newline and NULL characters will be included in LEN.
  */
  int i;
  for(i=0;i<NUM;i++) {
    fgets(Strings[i],LEN,stdin);
  }
  puts("\nHere are the strings in the order you entered:");

  /* Write a for loop here to print all the strings. */
  int j;
  for(i=0;i<NUM;i++) {
    printf("%s", Strings[i]);
  }
  /* Bubble sort */
  /* Write code here to bubble sort the strings in ascending alphabetical order

     Your code must meet the following requirements:
        (i) The comparison of two strings must be done by checking them one
            character at a time, without using any C string library functions.
            That is, write your own while/for loop to do this.
       (ii) The swap of two strings must be done by copying them 
            (using a temp variable of your choice) one character at a time,
            without using any C string library functions.
            That is, write your own while/for loop to do this.
      (iii) You are allowed to use strlen() to calculate string lengths.
  */

  for(i = 0;i < NUM; i++) {
    for(j = 0; j< NUM-i-1; j++) {
      if (strcmp(Strings[j],Strings[j+1]) > 0) {
        char string[LEN];
        strcpy(string, Strings[j+1]);
        strcpy(Strings[j+1], Strings[j]);
        strcpy(Strings[j], string);
      }
    }
  }
  
  /* Output sorted list */
  
  puts("\nIn alphabetical order, the strings are:");     
  /* Write a for loop here to print all the strings. Feel free to use puts/printf
     etc. for printing each string.
  */
  for(i=0;i<NUM;i++) {
    printf("%s", Strings[i]);
  }
  return 0;
}
