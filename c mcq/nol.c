#include <stdio.h>

int main(){

    // Find No. of lines in a file
    FILE *fp;
    int c;
    int count = 0;
    fp = fopen("para.txt", "r");
    while((c = fgetc(fp)) != EOF){
        if(c == '\n'){
            count++;
        }
    }
    printf("No. of lines in the file: %d\n", count+1);
    fclose(fp);

    // Find No. of words in a file
    int word_count = 0;
    char ch;
    fp = fopen("para.txt", "r");
    while((ch = fgetc(fp)) != EOF){
        if(ch == ' ' || ch == '\n'){
            word_count++;
        }
    }

    
    return 0;
}