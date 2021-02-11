#include<bits/stdc++.h>
int main()
{
    char a[]="Danil",b[]="Olya",c[]="Slava",d[]="Ann",e[]="Nikita";
    char name[110];
    scanf("%s",name);
    for(int i=0;i<strlen(name);i++) {
        if(name[i]=='D')
            if(name[i+1]=='a')
                if(name[i+2]=='n')
                    if(name[i+3]=='i')
                        if(name[i+4]=='l') {
                            if(i!=)
                            printf("YES\n");
                            //break;
                        }

        if(name[i]=='S')
            if(name[i+1]=='l')
                if(name[i+2]=='a')
                    if(name[i+3]=='v')
                        if(name[i+4]=='a') {
                            printf("YES\n");
                            break;
                        }
        if(name[i]=='N')
            if(name[i+1]=='i')
                if(name[i+2]=='k')
                    if(name[i+3]=='i')
                        if(name[i+4]=='t')
                            if(name[i+5]=='a') {
                            printf("YES\n");
                            break;
                        }
        if(name[i]=='A')
            if(name[i+1]=='n')
                if(name[i+2]=='n') {
                            printf("YES\n");
                            break;
                        }
        if(name[i]=='O')
            if(name[i+1]=='l')
                if(name[i+2]=='y')
                    if(name[i+3]=='a') {
                            printf("YES\n");
                            break;
                        }
    if(i==(strlen(name))-1){
        printf("NO\n");
        break;
    }
    }
    return 0;
}
