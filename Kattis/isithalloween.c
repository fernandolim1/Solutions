#include <stdio.h>
#include <string.h>

int main(){
    char date[50];
    scanf("%[^\n]", date);
    if(strcmp(date, "OCT 31")==0 || strcmp(date, "DEC 25")==0){
        printf("yup\n");
    }
    else printf("nope\n");
    return 0;
}
