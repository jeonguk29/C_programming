#include <stdio.h>
#include <string.h>
 
#include <stdio.h>
int main (void)
{
    char input[11] ="I LOVE YOU";// �̶�� ���ڿ��� ������ְ�  
	char result[5] ="LOVE";
	strcpy(result,input);// �̷��� ���ָ� ����Ʈ��� ���ڿ��� ��ǲ ���ڿ��� ī���Ҽ� ����  
	printf("���ڿ� ���� : %s\n",result); 
  //strcpy ���������� �����͸� �ٷ�� �Լ��ε� 
  // ���İ��� result �� ���ڿ� �ּҸ� intput �ּҷ� �Ȱ��� �ٲ��� 
  // char *strcpy        
  
  /*   strcpy(*input,*result) 
	   *result = *input;  
	   
  */                                       
	return 0;
}
