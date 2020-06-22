#include<stdio.h>
#include<string.h>
#define ANDERS "Welcome Sir,"
#define BLACKCAT "System locked! Please call maintenance.\n"
int main()
{
	char*passcode= "atlas";
	char code[256];
	int count= 1;
	int attempts= 4;
	while(count++<5){
		printf("Please enter passcode\n");
	    scanf("%s", &code);
			if(strncmp(passcode, code,6)==0){
		printf("%s\n",ANDERS);
		return 0;
	  }else{
		  printf("User not recognised!\n");
	  }
	   count=count++;
	   attempts=--attempts;
  
	   printf("you have %d attempt(s) left!\n",attempts);
	}
		printf("%s", BLACKCAT);
	
	return 0;


	
}
