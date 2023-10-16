/*Code a function name char* join(char** strings, char glue) which combines
 an array of string into a single string gluing each string with the “glue” char*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

char* join (char** strings, int array_size, char glue){
    int len = 0;
    char *glued = (char *)calloc(sizeof(char), 1);
    glued[0] = glue;
    for (int i = 0; i < array_size; i++){
        len += strlen(strings[i]);
    }
    char *join = (char *)calloc(sizeof(char), (len+array_size));

    for (int i = 0; i < array_size-1; i++){
        strcat(join,strings[i]);
        strcat(join, glued);
    }
    strcat(join,strings[array_size-1]);

    return join;
 }

 int main(){

     char *strings[] = {"firs one", "second one", "third one"};
     int size = sizeof(strings) / sizeof(strings[0]);

     char glue = '+';
     char *glued = join(strings, size, glue);

     printf("%s", glued);
 }



 //Soluzione Laurent:
 /*char* join(char** strings, int array_size, char glue){

    int size = 0;

    for (int i = 0; i < array_size; i++){

        size += strlen(strings[0]) + 1; //+1 for glue
    }

    char* result = (char*) calloc(sizeof(char), size+1);

    char* glue_str = (char*) calloc(sizeof(char), 1);
    glue_str[0] = glue;

    for (int i = 0; i < array_size -1; i++){

        strcat(result, strings[i]);
        strcat(result, glue_str);
    }

    strcat(result, strings[array_size-1]);

    return result;
}

 

void test_main(){
    //it is like a main for testing !

    char **strings = (char**) calloc(sizeof(char*), 3);

    char* str1 = "hello";
    char* str2= "john";
    char* str3 = "john";

    strings[0] = str1;
    strings[1] = str2;
    strings[2] = str2;

    char* result = join(strings, 3, ' ');

    printf("concat: '%s' \n", result);



}*/