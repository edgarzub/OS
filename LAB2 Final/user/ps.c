#include "kernel/param.h"
#include "kernel/types.h"
#include "kernel/pstat.h"
#include "user/user.h"

int
main(int argc, char **argv)
{
  struct pstat uproc[NPROC];
  int nprocs;
  //int i;
  //char *state;
  /*static char *states[] = {
    [SLEEPING]  "sleeping",
    [RUNNABLE]  "runnable",
    [RUNNING]   "running ",
    [ZOMBIE]    "zombie  "
  };
  */

  nprocs = getprocs(uproc); //print the number of process from kernel

  struct pstat *p;

  
  printf("\n");
  printf("pid\tname\tcputime\tsize\n");
  
  for (p = uproc; p < &uproc[nprocs]; p++){
  	//printf("%d\t%s\t%s\t%d\t%d", p->pid, p->state, p->name, p->cputime, p->size);
  	printf("%d\t%s\t%d\t%d \n", p->pid, p->name, p->cputime, p->size);

  }
  
  exit (0);
}

