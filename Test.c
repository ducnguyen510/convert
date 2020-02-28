//#include <stdio.h>
//FILE *fp;
//char buff[255];	
//int main()
//{
//	
//fp = fopen("C:/Users/ducnv/Desktop/test-suite/fptest-0.2.3.0/fptest-0.2.3.0/test_suite/Add-Cancellation.fptest", "r");
//
//while(feof(fp))
//	{
//		printf("while(1)");
//	fgets(buff, 255, (FILE*)fp);
//	//printf("%s",buff);
//	printf("%d",feof(fp));	
//	
//	}		
//	printf("T");
//	fclose(fp);
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int day, year;
   char weekday[20], month[20], dtm[100];

   strcpy( dtm, "Tuesday July_12 2016" );
   sscanf( dtm, "%s %s_%d  %d", weekday, month, &day, &year );

   printf("%s %d, %d = %s\n", month, day, year, weekday );
    
   return(0);
}
