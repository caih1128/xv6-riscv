#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h" 
int main(int argc, char *argv[]) //argc为指令数，*argv[]存//放了具体每个指令
{
  if (argc < 2) //没给出要休眠多少tick
  {
    fprintf(2, "Usage: sleep time is ？\n");
    exit(1);
  }
  int time = atoi(argv[1]); //将用户给出代表tick数的字符串//转换为int
  sleep(time); //调用sleep
  exit(0);
}
