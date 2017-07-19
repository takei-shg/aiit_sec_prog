#include <stdio.h>
#include <string.h>

int foobar( void ) {
  char buff[1];
  memset( buff, 0, 32 ); // メモリ破壊をしている箇所
  printf("memset(),end\n");
  return 0;
}

int main( int argc, char **argv ) {
  foobar();
  return 0;
}
