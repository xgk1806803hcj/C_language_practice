#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    char words[30][30];
    while( gets(str)!=NULL )
    {
       //�������
       if(str[0]=='#')
           break;

       //����str�ַ�����ÿһ���ַ�
       int start=1;//�µ��ʿ�ʼ���
       int k=-1; //��ȡ���ĵ������
       int n=0; //��ǰ����ȡ���ʵ���ĸ���
       int i=0,j=0;
       while( str[i]!='\0' )
       {
           if(str[i]==' '){
              start=1;//���ʽ���
           }else{

               //һ���µ��ʵĿ�ʼ
               if(start==1){
                   //����һ�����ʷ��
                    if(k>=0)
                        words[k][n]='\0';

                   k++;
                   start=0;
                   n=0;
               }
               words[k][n++]=str[i];
           }
           i++;
       }

       //Ϊ���һ�����ʷ��
       words[k][n]='\0';


      //����:���words[]  flag[i]=1
      /*
       for(i=0;i<k+1;i++){
          printf("%s\n",words[i]);
       }
       */

       //ȥ����ͬ�ĵ���----ͳ�Ʋ�ͬ�ĵ��ʵĸ���(ȥ��ͳ��) -----�������
       //˼·: ����һ����������Ӧÿ�����ʣ�0Ϊ���ظ���1Ϊ�ظ�
       int flag[30];
       memset(flag,0,sizeof(flag));//�÷�ʽһ��ֻ�ܸ�0��-1
       for(i=0;i<k;i++)
         for(j=i+1; j<k+1; j++)
         {
            if(strcmp(words[i],words[j])==0){
               flag[i]=1;
            }
         }
       int num=0;
       for(i=0;i<k+1;i++){
           if(flag[i]==0)
             num++;
       }
       printf("%d\n",num);
    }

  return 0;
}