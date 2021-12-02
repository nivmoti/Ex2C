#include<stdio.h>
#include "my_mat.h"
#define N 10


int main(){
   int  graph[N][N];
    char single;
    int number;
    scanf("%c",&single);
    while (single!='D')
    {
        if(single=='A'){
           A(graph);
        }else{ if (single=='B')
        {
             scanf("%d",&number);
            int i=number;
             scanf("%d",&number);
            int j=number;
            B(i,j,graph);
        }
           else{ if (single=='C')
           {
                scanf("%d",&number);
                int i=number;
                 scanf("%d",&number);
                int j=number;
                int temp=C(i,j,graph);
                printf("%d\n",temp);
           }
           

           }
        }
     scanf("%c",&single);
    }
    
    //  while((single!='D'){
    //      if(single==' '){
    //          scanf("%c",single);
    //      }
    //    if(single=='A'){
    //        A(fb,graph);
    //     }else{ if(single=='B'){
    //          scanf("%c",single);
    //           if(single==' '){
    //              scanf("%c",single);
    //           }
    //          int i=single-48;
    //          single=fgetc(fb);
    //           if(single==' '){
    //              single=scanf(%c,);
    //           }
    //          int j=single-48;
    //          B(i,j,graph);
    //          printf("\n");
    //     }else{if(single=='C'){

    //       single=fgetc(fb);
    //           if(single==' '){
    //              single=fgetc(fb);
    //           }
    //          int i=single-48;
    //          single=fgetc(fb);
    //           if(single==' '){
    //              single=fgetc(fb);
    //           }
    //          int j=single-48;
    //          int temp=C(i,j,graph);
    //         printf("%d",temp);
    //         printf("\n");
    //         }else{
    //             if (single=='D')
    //             {
    //                 break;
    //             }                
    //          }
    //        }
    //     }
    //  }
    // fclose(fb);
    return 0;
}
