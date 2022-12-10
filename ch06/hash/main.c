#include <stdio.h>
#include "nlist.h"

struct nlist* lookup(char* s);
struct nlist* install(char* name, char* defn);

int main() {
  install("IN", "1");
  if (lookup("IN") != NULL) {
    printf("name: %s\n", lookup("IN")->name);
    printf("defn: %s\n", lookup("IN")->defn);
  }
  if (lookup("OUT") != NULL) {
    printf("name: %s\n", lookup("OUT")->name);
    printf("defn: %s\n", lookup("OUT")->defn);
  }
  return 0;
}
