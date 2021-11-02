#include "testy/customer.h"
#include "testy/widget.h"
#include <stdio.h>

int main() {
  if (widget_ok(1, 1)) {
    return customer_check(5);
  }
  
  printf("Hello world");

  return 0;
}