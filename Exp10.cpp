#include <bits/stdc++.h>
using namespace std;

char ip[20],stk[20],ts[20];
int i=0,j=0,len,np,ck;


struct grammer{
    char p[10];
    char prod[10];
}g[10];




void check(){
    string temp = stk;
    for (int m = 0;m<np;m++){
        ck = temp.find(g[m].prod);
        if (ck>=0){
            printf("\tReduced by %s -> %s",g[m].p,g[m].prod);

            stk[ck] = g[m].p[0];
            stk[ck+1] = '\0';
            i = i-(strlen(g[m].prod)-1);
            printf("\n$%s\t%s",stk,ip);
            break;
        }
    }
}


int main(){
    cout<<"Enter the number of Productions: "<<endl;
    cin>>np;

    cout<<"Enter the Productions: "<<endl;
    for (int i=0;i<np;i++){
        cin>>ts;
        strncpy(g[i].p,ts,1);
        strcpy(g[i].prod,&ts[3]);
    }
    cout<<"Enter input string: "<<endl;
    cin>>ip;

    len  = strlen(ip);
    printf("\n$\t%s",ip);

    for (int j=0;j<len;j++){
        printf("\tShifted");
        stk[i] = ip[j];
        stk[i+1] = '\0';
        ip[j] = ' ';

        printf("\n$%s\t%s",stk,ip);

        check();
    }
    if (strcmp(stk,"E") == 0 && stk[1] == '\0')
        printf("Accepted\n");
    else
        printf("Rejected\n");
    

}