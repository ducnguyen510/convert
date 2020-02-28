#include <stdio.h>

// function to convert Hexadecimal to Binary Number 
void HexToBin(char* hexdec) 
{ 
  
    long int i = 0; 
  
    while (hexdec[i]) { 
  
        switch (hexdec[i]) { 
        case '0': 
            printf("0000"); 
            break; 
        case '1': 
            printf("0001"); 
            break; 
        case '2': 
            printf("0010"); 
            break; 
        case '3': 
            printf("0011"); 
            break; 
        case '4': 
            printf("0100"); 
            break; 
        case '5': 
            printf("0101"); 
            break; 
        case '6': 
            printf("0110"); 
            break; 
        case '7': 
            printf("0111"); 
            break; 
        case '8': 
            printf("1000"); 
            break; 
        case '9': 
            printf("1001"); 
            break; 
        case 'A': 
            printf("1010"); 
            break; 
        case 'B':  
            printf("1011"); 
            break; 
        case 'C': 
            printf("1100"); 
            break; 
        case 'D': 
            printf("1101"); 
            break; 
        case 'E': 
            printf("1110"); 
            break; 
        case 'F': 
            printf("1111"); 
            break; 
        default: 
            printf("\n %c", 
                   hexdec[i]); 
        } 
        i++; 
    } 
}  
main(){
	FILE *fp;
	FILE *fp1;
	char buff[255];
	int i;
	fp = fopen("C:/Users/ducnv/Desktop/test-suite/fptest-0.2.3.0/fptest-0.2.3.0/test_suite/Add-Cancellation.fptest", "r");
	   fgets(buff, 255, (FILE*)fp);
       printf("%s", buff );
       	   fgets(buff, 255, (FILE*)fp);
       printf("%s", buff );
       	   fgets(buff, 255, (FILE*)fp);
       printf("%s", buff );
       	   fgets(buff, 255, (FILE*)fp);
       printf("%s", buff );
   // while (!feof(fp))
//   {
    //bat dau 1 dong
    fgets(buff, 11, (FILE*)fp);
       printf("%s\n", buff );       
    //read value matissa of A   
    fgets(buff, 10, (FILE*)fp);
       printf("%s\n", buff );
       
	
	    
    //write value mantissa of A to test.txt
   fp1 = fopen("C:/Users/ducnv/Desktop/FileIO/test.txt", "w+");
   fprintf(fp1, buff);
   //read file
   fgets(buff,2,(FILE*)fp);
       printf("%s\n",buff);
   fgets(buff,3,(FILE*)fp);
       printf("%s\n",buff);      
    //write value exponent of  A to test.txt
	   fprintf(fp1,buff);  
	   
   //read value mantissa of B
    fgets(buff,1,(FILE*)fp);
       printf("%s\n",buff);
    fgets(buff,11,(FILE*)fp);
       printf("%s\n",buff);
  //write value matnissa of B to test.txt
        fprintf(fp1,buff);     
  //read value exponent of B
    fgets(buff,2,(FILE*)fp);
       printf("%s\n",buff);
    fgets(buff,3,(FILE*)fp);
       printf("%s\n",buff);   
  //write value exponent of B to test.txt
       fprintf(fp1,buff);
   //read value mantissa of C
    fgets(buff,4,(FILE*)fp);
       printf("%s\n",buff);
    fgets(buff,11,(FILE*)fp);
       printf("%s\n",buff);
  //write value matnissa of C to test.txt
       fprintf(fp1,buff);
  //read value exponent of C
    fgets(buff,2,(FILE*)fp);
       printf("%s\n",buff);
    fgets(buff,5,(FILE*)fp);
       printf("%s\n",buff);
  //write value exponent of C to test.txt
	   fprintf(fp1,buff);
  //xuong dong
    fgets(buff, 255, (FILE*)fp);
       printf("%s", buff );	 
 //}
   fclose(fp1);
   fclose(fp);

}
