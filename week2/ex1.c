#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
  int a = INT_MAX;
	float b = FLT_MAX;
	double c = DBL_MAX;
	printf("%ld, %ld, %ld\n", sizeof(a), sizeof(b), sizeof(c));
  printf("%d\n",a );
  printf("%lf\n", b);
  printf("%lf\n", c);
  return 0;
}
