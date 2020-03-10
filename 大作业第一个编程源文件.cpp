#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>

int main(){
	char buf[2048];
	FILE*fp;
	int len;
	for(int i=1;i<=124;i++){
		char file[124];
		sprintf(file,"C:\\Users\\Íô²©Ðù\\Desktop\\×Ö·û»­\\%d.JPG",i);
		fp=fopen(file,"r");
		while(fgets(buf,2048,fp)!=NULL){
			len=strlen(buf);
			buf[len-1]='\0';
			printf("%s\n",buf);
		}
		if(i!=124){
			system("cls");
		}
	}
	return 0;
}
