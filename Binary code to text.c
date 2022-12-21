#include <stdio.h>
#include <string.h>

int main(void) 
{
  char text[100];  // Declare a character array to store the input text
  int i, j;

  printf("Enter a text : ");
  scanf("%s", text);  // Read the input text from the user

  printf("Binary equivalent: ");
  for (i = 0; i < strlen(text); i++) {  // Loop through each character in the text
    for (j = 7; j >= 0; j--) {  // Loop through each bit in the character
      printf("%d", (text[i] >> j) & 1);  // Print the value of the j-th bit
    }
    printf(" ");  // Add a space between the binary representations of each character
  }
  printf("\n");  // Print a newline at the end

  return 0;
}

