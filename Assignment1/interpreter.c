#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	static const char fileread[] = "./assign1_32.s";
	static const char filewrite[] = "./assign1_64.s";
	FILE *fr = fopen(fileread, "r");
	FILE *fw = fopen(filewrite, "w");
	int count = 0;
	int lineNumber = 12;
	if ( fr != NULL )
	{
	   	char line[1024]; 
	    	while (fgets(line, sizeof line, fr) != NULL)
	    	{
			if (count < lineNumber || count >39)
	       		 {
		   		fprintf(fw,"%s",line);
		   	
	      		 }
			else if(count == 12)
			{
		   		 strcpy(line,"	pushq	%rbp\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 13)
			{
		   		 strcpy(line,"	.cfi_def_cfa_offset 16\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 14)
			{
		   		 strcpy(line,"	.cfi_offset 6, -16\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 15)
			{
		   		 strcpy(line,"	movq	%rsp, %rbp\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 16)
			{
		   		 strcpy(line,"	.cfi_def_cfa_register 6\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 17)
			{
		   		 strcpy(line,"	subq	$16, %rsp\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 18)
			{
		   		 strcpy(line,"	leaq	-8(%rbp), %rdx\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 19)
			{
		   		 strcpy(line,"	leaq	-12(%rbp), %rax\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 20)
			{
		   		 strcpy(line,"	movq	%rax, %rsi\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 21)
			{
		   		 strcpy(line,"	movl	$.LC0, %edi\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 22)
			{
		   		 strcpy(line,"	movl	$0, %eax\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 23)
			{
		   		 strcpy(line,"	call	__isoc99_scanf\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 24)
			{
		   		 strcpy(line,"	movl	$0, -4(%rbp)\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 25)
			{
		   		 strcpy(line,"	movl	-12(%rbp), %edx\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 26)
			{
		   		 strcpy(line,"	movl	-8(%rbp), %eax\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 27)
			{
		   		 strcpy(line,"	addl	%edx, %eax\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 28)
			{
		   		 strcpy(line,"	movl	%eax, -4(%rbp)\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 29)
			{
		   		 strcpy(line,"	movl	-4(%rbp), %eax\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 30)
			{
		   		 strcpy(line,"	movl	%eax, %esi\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 31)
			{
		   		 strcpy(line,"	movl	$.LC1, %edi\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 32)
			{
		   		 strcpy(line,"	movl	$0, %eax\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 33)
			{
		   		 strcpy(line,"	call	printf\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 34)
			{
		   		 strcpy(line,"	movl	$0, %eax\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 35)
			{
		   		 strcpy(line,"	leave\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 36)
			{
		   		 strcpy(line,"	.cfi_def_cfa 7, 8\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 37)
			{
		   		 strcpy(line,"	ret\n");
				 fprintf(fw,"%s",line);
			}
			else if(count == 38)
			{
		   		 strcpy(line,"	.cfi_endproc\n");
				 fprintf(fw,"%s",line);
			}
			count++;
	    	}
	   	fclose(fr);
		fclose(fw);
	}
	else
	{
	    printf("File does not exist");
	}
}
