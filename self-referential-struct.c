#include <stdio.h>

typedef struct Node {
  struct Node* link;
  char* alphabet;
} Node;

int main() {
  Node l1, l2, l3, l4, l5, l6, l7, l8, l9;

  l1.link = NULL; 
  l1.alphabet = "F";

  l2.link = NULL;
  l2.alphabet = "M";

  l3.link = NULL;
  l3.alphabet = "A";

  l4.link = NULL;
  l4.alphabet = "I";

  l5.link = NULL;
  l5.alphabet = "K";

  l6.link = NULL;
  l6.alphabet = "T";

  l7.link = NULL;
  l7.alphabet = "N";

  l8.link = NULL;
  l8.alphabet = "O";
  
  l9.link = NULL;
  l9.alphabet = "R";

  // Hubungkan node sesuai dengan arah panah pada gambar dengan uruta n N-F-O-M-K-A-T-R-I
  l7.link = &l1;
  l1.link = &l8;
  l8.link = &l2;
  l2.link = &l5;
  l5.link = &l3;
  l3.link = &l6;
  l6.link = &l9;
  l9.link = &l4;
  l4.link = &l7;

  // Print kata INFORMATIKA menggunakan linked list dimana l3 menjadi starting point dari linknya
  printf("%s", l3.link->link->link->alphabet);
  printf("%s", l3.link->link->link->link->alphabet);
  printf("%s", l3.link->link->link->link->link->alphabet);
  printf("%s", l3.link->link->link->link->link->link->alphabet);
  printf("%s", l3.link->link->alphabet);
  printf("%s", l3.link->link->link->link->link->link->link->alphabet);
  printf("%s", l3.alphabet);
  printf("%s", l3.link->alphabet);
  printf("%s", l3.link->link->link->alphabet);
  printf("%s", l3.link->link->link->link->link->link->link->link->alphabet);
  printf("%s", l3.alphabet);

  return 0;
}