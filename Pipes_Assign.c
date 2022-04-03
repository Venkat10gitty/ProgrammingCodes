#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
 int pfds[2];
 int n,f=1,i,n1;
 pipe(pfds);
 if(!fork())
 {
  printf("Child: Writing to the PIpe \n");
  printf("Child: Enter the NUmber:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
   f=f*i;
  write(pfds[1],(char *)&f,sizeof(f));
  close(pfds[1]);
  printf("Child: Exiting\n");
 }
 else
 {
  wait(0);
  printf("Parent: reaading from pipe\n");
  read(pfds[0],&n1,sizeof(int));
  printf("Parent : Read %d\n",n1);
  sleep(1);
  close(pfds[0]);
 }
 return 0;
}