#include <stdio.h>
#include "../include/Vowel.h"

int sgs_clib_count_vowels()
{
  FILE *ptr_file;
  char s[1000];
  
  ptr_file = fopen("Vowel2.txt", "r");
  if (!ptr_file)
    return 1;

  while (fgets(s, 1000, ptr_file) != NULL)
  {
    int c = 0, count = 0;

    while (s[c] != '\0')
    {
      if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] == 'o' || s[c] == 'O' || s[c] == 'u' || s[c] == 'U')
        count++;
      c++;
    }
    
    printf("Vowels in the string are :%d",count);
  }
  return 0;
  fclose(ptr_file);
  
  

}
