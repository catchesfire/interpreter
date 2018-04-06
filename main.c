#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int splitInputParameter(char *str, char *arr[10]){
    int beginIndex = 0;
    int endIndex;
    int maxWords = 10;
    int wordCnt = 0;

    while(1){
        while(isspace(str[beginIndex])){
            ++beginIndex;
        }
        if(str[beginIndex] == '\0')
            break;
        endIndex = beginIndex;
        while (str[endIndex] && !isspace(str[endIndex])){
            ++endIndex;
        }
        int len = endIndex - beginIndex;
        char *tmp = calloc(len + 1, sizeof(char));
        memcpy(tmp, &str[beginIndex], len);
        arr[wordCnt++] = tmp;
        beginIndex = endIndex;
        if (wordCnt == maxWords)
            break;
    }
    return wordCnt;
}

   void clearInputParameters(char* arr[10], int n){
        for(int i = 0; i < n; ++i){
        free(arr[i]);
        }
    }

int main(int argc, char *argv[]){
    /*
    char *arr[10];
    int n = split(output, arr);
    uzycie np FILE -> arr[0]
    clearParameters(arr, n);

    */
    char* holder;
    const int outsize = 1000;
    char output[outsize];
    int keksimus = 1;
    while(keksimus){//war. tymczasowy
        scanf(output);
        if(holder != ""){
            FILE* wi = popen("ls", "r");//tryb read, czytamy fscanf
        while(fgets(output, outsize, wi))
            fprintf(stdout, "%s", output);
        pclose(wi);
        keksimus = 0;//war. tymczasowy
        printf(output);
        }
    }
    return 0;
}