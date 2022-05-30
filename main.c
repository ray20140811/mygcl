#define IN_MAIN

#include "h/include.h" //TODO: remove h/
#define MAXPATHLEN 1024

//#include "h/page.h" //TODO: remove h/
#include "h/att.h" //TOOD: remove this line because I don't know where is the definition of MAXPAGE

char lisp_implementation_version[] = "April 1994";

char system_directory[MAXPATHLEN];

int page_multiple=1;

char stdin_buf[BUFSIZ];
char stdout_buf[BUFSIZ];

void initlisp();

void main(argc, argv, envp)
int argc;
char **argv, **envp;
{
  printf("GCL (GNU Common Lisp)  %s  %d pages\n",
         lisp_implementation_version,
         MAXPAGE);
  fflush(stdout);
	initlisp();
}

void initlisp()
{
  int j;

  //init_alloc();
  

}
