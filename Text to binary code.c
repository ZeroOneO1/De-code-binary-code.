#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) 
{
  char binary[1000];  // Declare a character array to store the input binary string
  int i, j, k, len, decimal;
  char text[100];  // Declare a character array to store the output text

  printf("Enter a binary string: ");
  scanf("%s", binary);  // Read the input binary string from the user

  len = strlen(binary);  // Calculate the length of the binary string
  k = 0;  // Initialize a counter to keep track of the current position in the output text array
  for (i = 0; i < len; i += 8) // Loop through the binary string 8 bits at a time
  {  
    decimal = 0;  // Initialize a variable to store the decimal equivalent of the 8-bit binary string
    for (j = 0; j < 8; j++) // Loop through the 8 bits
	{ 
      decimal += (binary[i + j] - '0') * pow(2, 7 - j);  // Convert the 8-bit binary string to its decimal equivalent
    }
    text[k++] = (char)decimal;  // Store the character corresponding to the decimal value in the output text array
  }
  text[k] = '\0';  // Add a null character to the end of the output text array
  printf("Text equivalent: %s\n", text);  // Print the output text
  return 0;
}

