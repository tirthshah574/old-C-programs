#include<iostream.h>
#include<conio.h>

main(){
	int a[7]={5,4,7,2,7,1,9},b,c,i,j,k;
	clrscr();
	for(i=0;i<7;i++){
		for(j=i;j<7;j++){
			if(a[i]>a[j]){
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
	}
	for(i=0;i<7;i++){
		cout<<a[i]<<" ";
	}
	getch();
}