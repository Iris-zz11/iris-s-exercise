#include <stdio.h>
struct Student {
    	long no;
    	int tryNo;
    	int setNo;
};

int main() {
    	int N, M;
    	scanf("%d", &N);
    	struct Student student[N];	
    	for (int i = 0; i < N; i++) {
		scanf("%ld %d %d", &student[i].no, &student[i].tryNo, &student[i].setNo);
    	}
    	scanf("%d", &M);
    	for (int j = 0; j < M; j++) {
		int check ;
		scanf("%d", &check);
		for (int i = 0; i < N; i++) {
	    		if (student[i].tryNo == check) {
				printf("%ld %d\n", student[i].no, 
						student[i].setNo);
				break;
	    		}
		}
    	}
    return 0;
}
