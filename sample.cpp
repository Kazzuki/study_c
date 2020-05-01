#include <stdio.h>
#include <iostream>

int main (){
  printf("printfによる出力\n");
  std::cout << "coutによる出力\n";

  const char *str1 = "hello";
  const char *str2 = "testに願えりゃええ";
  int number = 10;

  printf("%s %s %d\n", str1, str2, number);
  std::cout << str1 << str2 << number << "\n";

  std::cout << "ABC \n";
  std::cout << "ABC \n" << std::flush;
  std::cout << "ABC \n" << std::endl;
}