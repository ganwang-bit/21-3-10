//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//char *arr="0123456789JQK";
//int main()
//{
//    char arra[101],arrb[101],arrtmp[101];
//    int i,j,a,b,count=1;
//    scanf("%s%s",arra,arrb);
//    for(i=0;i<100;i++)
//        arrtmp[i]='0';
//    if(strlen(arra)>strlen(arrb))
//    {
//        strcat(arrtmp+strlen(arra)-strlen(arrb),arrb);
//        strcpy(arrb,arrtmp);
//    }
//    for(i=strlen(arra)-1,j=strlen(arrb)-1;i>=0;i--,j--,count++)
//    {
//        a=arra[i]-'0';
//        b=arrb[j]-'0';
//        if(count%2==0)
//        {
//            arrb[j]=(b-a+10)%10+'0';
//        }
//        else
//        {
//            arrb[j]=arr[(a+b)%13];
//        }
//    }
//    printf("%s",arrb);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//char *arr="0123456789JQK";
//int main()
//{
//    char arra[101],arrb[101],arrtmp[205];
//    int i,j,a,b,count=1;
//    scanf("%s%s",arra,arrb);
//    for(i=0;i<100;i++)
//        arrtmp[i]='0';
//    if(strlen(arra)>strlen(arrb))
//    {
//        strcpy(arrtmp+strlen(arra)-strlen(arrb),arrb);
//        strcpy(arrb,arrtmp);
//    }
//    for(i=strlen(arra)-1,j=strlen(arrb)-1;i>=0;i--,j--,count++)
//    {
//        a=arra[i]-'0';
//        b=arrb[j]-'0';
//        if(count%2==0)
//        {
//            arrb[j]=(b-a+10)%10+'0';
//        }
//        else
//        {
//            arrb[j]=arr[(a+b)%13];
//        }
//    }
//    printf("%s",arrb);
//    return 0;
//}
//#include  <stdio.h>
//#define	PI 3.1415926
//int main()
//{
//	float r,h,c,s,v;
//	scanf("%f %f",&r,&h);
//		  c =4*PI*r;
//		  s =2*PI*r*r+2*PI*r*h;
//		  v =PI*r*r*h;
//
//	printf("%.2f\n%.2f\n%.2f\n",c,s,v);
//	return 0;
//}
