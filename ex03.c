#include <stdio.h>
void main(){
	
	//이스케이프 문자
	/*
	
	\' : 작은 따옴표
	\" : 큰 따옴표
	\? : 물음표 (*)
	\\ : 역슬래시
	\a : 경고음 출력 (*)  
	\n : 줄바꿈
	\t : 수평 탭
	\v : 수직 탭 (*)
	\b : 백스페이스
	\r : 캐리지 리턴 (현재 줄의 첫 번째 칸으로 감)
	\f : 폼 피드 (화면 스크롤) 
	
	*/
	/*
	
	서식 지정자 
	%c : 문자
	%s : 문자 배열
	%x : 16진수 
	%d, %i : 부호 있는 10진수 정수
	%u : 부호 없는 10진수 정수  
	%o : 8진수
	%f, %lf : 실수
	%e, %E, %g, %G : 지수	ex) 10의 6승 -> e+06
	%% : 백분율 기호 (퍼센트의 의미) 
	 
	*/
	
	 
	int kor, eng, mat, tot;
	float avg = 0.0f;
	printf("국어 점수: ");
	scanf("%d", &kor);			//scanf: 10진수 형태로 데이터를 넣을 것
	printf("영어 점수: ");
	scanf("%d", &eng);
	printf("수학 점수: ");
	scanf("%d", &mat);
	tot = kor + eng + mat;
	avg = tot / 3.0f;
	
	printf("번호\t국어\t영어\t수학\t총점\n");
	printf("01\t%d\t%d\t%d\t%d\t%.3f\n", kor, eng,mat, tot, avg);
}
