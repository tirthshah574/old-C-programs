#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char a[20]="jab we met",b[20],c,x[20]="Bollywood",y[20];
	int count=0,d=0,i;
	clrscr();
	for(i=0;i<20;i++){
		b[i]='\0';
		y[i]='\0';
	}
	for(i=0;i<strlen(a);i++){
		b[i]=' ';
		y[i]='-';
	}
	while(count<9){
		cout<<x<<endl<<b<<endl<<y;
		c=getch();
		clrscr();
		for(int i=0;i<strlen(a);i++){
			if(a[i]==c){
				b[i]=c;
				d++;
			}
		}
		if(d==0){
			x[count]='X';
			count++;
		}
		if(strcmp(a,b)==0){
			cout<<b<<endl;
			cout<<"String Matched";
			getch();
			break;
		}
		d=0;
	}
	if(count==9){
		cout<<"You can't guess the word";
	}
}
