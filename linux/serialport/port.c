#include <stdio.h>
#include <string.h>
#include <fcntl.h> 
#include <errno.h> 
#include <termios.h> 
#include <unistd.h> 

int main() {
       	
  char data[20];
  int fd;
  fd = open("/dev/ttyUSB0", O_RDWR );
	if(fd == -1)
	{
		printf("unable to create file");
	}
	else
	{
		printf("file created successfully");
	}



  struct termios neeraj;

  tcgetattr(fd,&neeraj);

  neeraj.c_iflag &= ~(IXON | IXOFF | IXANY);
  neeraj.c_oflag &= ~OPOST;
  neeraj.c_lflag &= ~(ICANON |ECHO | ECHOE | ECHONL  | ISIG ); 
  neeraj.c_cflag &= ~(CSIZE | PARENB);
  neeraj.c_cflag &= ~CRTSCTS;
  neeraj.c_cflag |= CS8;
  neeraj.c_cflag |= (CREAD | CLOCAL);
  neeraj.c_cflag |= B9600;
  neeraj.c_iflag &= ~(IGNBRK|BRKINT|PARMRK|ISTRIP|INLCR|IGNCR|ICRNL); 
  neeraj.c_cc[VMIN] = 0;
  neeraj.c_cc[VTIME] = 0;
  neeraj.c_cflag &= ~CSTOPB;
  tcsetattr(fd,TCSANOW, &neeraj);
  
  while(1){

    printf("\n Waiting for message...\n");
    sleep(3);
    read(fd,data,sizeof(data));
    if(data > 0)
    {

            for(int i=0;i<20;i++)
	        {
                 printf("%c",data[i]);
            }
     
    }
    else
    {
      printf("Data not read");
    }

    memset(data,0,sizeof(data));
    
    sleep(1);
 
   
  }
  
  close(fd);
  return 0; 
}
