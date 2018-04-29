#include <stdio.h>
#include <stdbool.h>

bool isFizz(int num) {
  return num % fizzNum == 0;
}

int main() {
  int fizzNum = 3, buzzNum = 5;
  
  bool isBuzz(int num) {
    return num % buzzNum == 0;
  }

  bool notFizzOrBuzz(int num) {
    return !(isFizz(num) || isBuzz(num));
  }
  
  void printFizzBuzz(int num) {
    printf("%i%s%s%s\n",
        num,
        " ",
        isFizz(num) ? "Fizz" : "",
        isBuzz(num) ? "Buzz" : ""
    );
  }

  for(int i = 1; i <= 100; i++) {
    printFizzBuzz(i);
  }
}

