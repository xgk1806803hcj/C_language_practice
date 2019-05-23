#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    char words[30][30];
    while( gets(str)!=NULL )
    {
       //输入结束
       if(str[0]=='#')
           break;

       //遍历str字符串的每一个字符
       int start=1;//新单词开始标记
       int k=-1; //提取出的单词序号
       int n=0; //当前所提取单词的字母序号
       int i=0,j=0;
       while( str[i]!='\0' )
       {
           if(str[i]==' '){
              start=1;//单词结束
           }else{

               //一个新单词的开始
               if(start==1){
                   //对上一个单词封口
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

       //为最后一个单词封口
       words[k][n]='\0';


      //测试:输出words[]  flag[i]=1
      /*
       for(i=0;i<k+1;i++){
          printf("%s\n",words[i]);
       }
       */

       //去除相同的单词----统计不同的单词的个数(去重统计) -----标记数组
       //思路: 定义一个标记数组对应每个单词，0为不重复，1为重复
       int flag[30];
       memset(flag,0,sizeof(flag));//该方式一般只能赋0或-1
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