#include <stdio.h>

main() {
   FILE *fp;

   fp = fopen("C:/Users/ducnv/Desktop/test-suite/fptest-0.2.3.0/fptest-0.2.3.0\test_suite/Add_Cancellation.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);

}
