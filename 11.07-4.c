#include <stdio.h>
typedef struct{
	int StuId;
	int Score;
}student;
void getInfo(student* ptr,int n){
	for(int i=0;i<n;i++){
		scanf("%d %d",student.StuId,student.Score);
	}
}

void scoreSort(student* ptr,int n){
	int temp;
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(student[j].Score > student[j+1].Score){
				temp = student[j+1].Score;
				student[j+1].Score = student[j].Score;
				student[j].Score = temp;
			}
		}
	}
}

void outputAsc(student* ptr,int n) {
	int i;
	for(i=0;i<n;i++){
		printf("%d %d",student[i].stuId,student[i].Score);
	}
}

void outputDesc(student* ptr,int n) {
	int i;
	for(i=0;i<n;i++){
		printf("%d %d",student[n-i-1].stuId,student[n-i-1].Score);
	}
}
