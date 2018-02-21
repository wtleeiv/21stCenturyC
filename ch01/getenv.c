/*
  set env vars immediately before calling prog,
  use getenv,
  -> command line args for free :)
*/

#include <stdio.h> // printf
#include <stdlib.h> // getenv, atoi

#define REPS "reps"
#define MSG "msg"

#define DEF_REPS 10
#define DEF_MSG "hello"

int main() {
  char *repstext = getenv(REPS);
  int reps = repstext ? atoi(repstext) : DEF_REPS;

  char *msg = getenv(MSG);
  if (!msg) {
    msg = DEF_MSG;
  }

  for (int i = 0; i < reps; ++i) {
    printf("%s\n", msg);
  }
}
