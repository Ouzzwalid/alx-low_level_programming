#include <stdio.h>

int main() {

  int i;
  long long t1, t2,nextTerm ;

  t1 = 0;
  t2 = 1;
  nextTerm = t1 + t2;


  printf("%lli, %lli, ", t1, t2);

  for (i = 3; i <= 50; ++i) {
    printf("%lli, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  printf("\n");
  return 0;
}
