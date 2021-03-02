#include <stdio.h>

main() {
   FILE *fp;

   fp = fopen("/xyz.txt", "w+");
   fprintf(fp, " XYZPQRvi \n");
   fputs("bring a coffee...\n", fp);
   fclose(fp);
}