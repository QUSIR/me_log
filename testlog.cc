#include <string>  
#include <syslog.h>  
#include <iostream>  
using namespace std;  
   
int main(int argc, char** argv)  
{  
	  int i;  
      for(i=1;i<=100;i++)
	  {  
		 syslog(LOG_LOCAL1 | LOG_INFO, "Message lianghuanhan:%d", i);  
	   }  
	   cout<<i-1;  
	  return 0;  
}
