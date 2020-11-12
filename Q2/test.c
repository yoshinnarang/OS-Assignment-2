 Name: Yoshin Narang
   Roll_Number: 2019221
      
      
#define SYS_shtaskinfo 440


int main(void)
{
  // if (argc <= 1) {
  //   printf("Must provide a string to give to system call.\n");
  //   return -1;
  // }
  // char *arg = argv[1];
  // printf("Making system call with \"%s\".\n", arg);
  // int res = syscall(440);
  int res = syscall(SYS_shtaskinfo(fileno,549));
  printf("%d\n",res);
  
      
