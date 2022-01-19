#include<stdio.h>
int main()
{
	int i,j,rows,num=1, space;
	printf("Enter the no of rows:");
	scanf("%d",&rows);


	/*for(i=1; i<=5; i++){
		for(j=5; j>=i; j--){
			printf("#");
		}
		printf("\n");
	}

	for(i=5; i>=1; i--){
		for(j =1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}

	for(i =1; i<=5; i++){
		for(j =1 ; j<=i ; j++){
			printf("%d",i);
		}
		printf("\n");
	}
	for(i=1; i<=6; i++){
		for(j=6; j>= i; j--){
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=1; i<=rows; i++)
	{
		for(j =1; j<=i; j++)
		{
			if((i+j)<=rows)
				printf(" ");

			else
				printf("*");

		}
		printf("\n");
	}

	for(i=1; i<=rows; i++){
		for(j=1; j<= i; j++){
			printf("%d",num);
			num++;
		}
		printf("\n");
	}

	for(i =1; i<=rows; i++){
		for(space=1 ; space<=(rows-i);space++){
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for ( i = 1; i < rows; i++)
	{
		for(space=1; space<=(rows-i); space++){
			printf(" ");
		}
		for(j=1; j<=2*i-1; j++ ){
			printf("*");
		}
		printf("\n");
	}


	for ( i = rows; i >= 1; i--)
	{
		for(space=1; space<=(rows-i); space++){
			printf(" ");
		}
		for(j=1; j<=2*i-1; j++ )
		{
			printf("*");
		}
		printf("\n");
	}


	for ( i = 1; i < rows; i++)
	{
		for(space=1; space<=(rows-i); space++){
			printf(" ");
		}
		for(j=1; j<=2*i-1; j++ ){
			printf("*");
		}
		printf("\n");
	
	
	}
	for ( i = rows-1; i >= 1; i--)
	{
		for(space=1; space<=(rows-i); space++){
			printf(" ");
		}
		for(j=1; j<=2*i-1; j++ ){
			printf("*");
		}
		printf("\n");
	}

	for(i =1; i<= rows; i++){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	for (int i = rows-1; i >=1; i--)
	{
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}

	for(i=1; i<=rows; i++){
		for(j=1; j<=i; j++){
			printf("%c",64+j);

		}
		printf("\n");
	}

	for(i=rows; i>=1; i--){
		for(j=1; j<=i; j++){
			printf("%c",64+j);

		}
		printf("\n");
	}
	for(i=rows; i>=1; i--){
		for(j=1; j<=i; j++){
			printf("%c",64+i);

		}
	}*/

	for()


	return 1;
}