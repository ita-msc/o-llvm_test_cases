#include <stdio.h>

int main() {
  const char hello_in_hex[] = {
    0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x20, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x20, 0x68, 0x65, 0x78, 0x00
  };
  const char hello_in_ascii[] = {
    'h', 'e',  'l','l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'a', 's', 'c', 'i', 'i', '\0'
  };
  const unsigned int hello_in_int[] = {
    0x34333231, 0x38373635, 0x00000000
  };
  const unsigned int hello_in_int_unterminated[] = {
    0x34333231, 0x38373635, 0x31323334
  };
  printf("Hex : %s\n", hello_in_hex);
  printf("ASCII : %s\n", hello_in_ascii);
  printf("int : %s\n", (char*)hello_in_int);
  return 0;
}
