#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

void main(){
	int a[20];
	int i,j,k=0,min,num=0;
	clrscr();

	srand(time(0));

	for(i=0;i<10;i++){
		a[i]=rand();
	}

	for(i=0;i<10;i++){
		num = a[i];
		for(j=i;a[j]<a[j-1];j--){
			for(k=0;k<10;k++){
				if (a[k]==num){
					cout<<" *"<<a[k]<<"* ";
				} else if(a[k]!=num) {
					cout<<a[k]<<" ";
				}
			}
			k=0;
			cout<<endl;
			delay(500);
			clrscr();

			min=a[j-1];
			a[j-1]=a[j];
			a[j]=min;

		}
	}

	for(i=0;i<10;i++){
		cout<<a[i]<<" ";
	}

	getch();
}
