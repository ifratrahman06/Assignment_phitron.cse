//Module 4
//Assignment 01
//https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-10/challenges
//*********** print it **********
// #include<stdio.h>
// int main(){
//     printf("Hello world! I am learning C progrem");
//     printf("\n");
//     printf("\n");
//     return 0;
// }
//*********** multiply **********
// #include<stdio.h>
// int main(){
//     long long int a,b;
//     scanf("%lld %lld",&a,&b);
//     printf("%lld",a*b);
//     return 0;
// }
//*********** divisible **********
// #include<stdio.h>
// int main(){
//     int N;
//     scanf("%d",&N);
//     if(N%3==0){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
// }
//*********** divisible 2 **********
// #include<stdio.h>
// int main(){
//     int N;
//     scanf("%d",&N);
//     for(int i=1;i<=N;i++){
//         if(i%3==0 && i%7==0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }
//*********** shopping **********
// #include<stdio.h>
// int main(){
//     int N;
//     scanf("%d",&N);
//     if(N>1000){
//         printf("I will buy Panjabi\n");
//         if(N-1000>=500){
//             printf("I will buy new shoes\n");
//             printf("Alisa will buy new shoes\n");
//         }
//     }
//     else{
//         printf("Bad luck\n");
//     }
//     return 0;
// }