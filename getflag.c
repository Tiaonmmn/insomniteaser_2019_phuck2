#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main(){
	int fd,n;
	char buf[1000];
	char *path="/flag";
	fd=open(path,O_RDONLY);
	n=read(fd,buf,1000);
	printf("%s",buf);
	return 0;
}
