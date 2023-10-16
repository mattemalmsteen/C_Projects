#include <stdio.h>
#include <string.h>

void trimString(char str[]);

int main (){
    char s[] = "   Hello, World!  ";

    trimString(s);
}


void trimString (char str[]){
    int len = strlen(str);  //check diemnsion of str
    char trim [len+1];      //create another string with the same dimension of str
    char space = ' ';       
    int letterCount = 0;    //initialize a counter for the letter inside the input str
    
    for (int i= 0; i < len; i++){
        if (str[i] == space && (str [i-1] == space || str[i+1] == space)){  //check if i is in a removable space
            trim[i] = '0';                                                  // if yes, replace it with a 0
        }else{
            trim[i] = str[i];                                               //if not, copy the current char from str
            letterCount++;                                                  // and increment the letter counter
        }
    }
    char outString[letterCount + 1];            // create the final output string
    int j = 0;                                  // counter to use to popolate new string
    for (int i = 0; i < len; i++){      
        if (trim[i] != '0'){                    
            outString[j] = trim [i];
            j++;
        }
    }
    outString [letterCount] = '\0';         //adding NUL at the end of the string
    printf ("%s", outString);
    printf("\n%i", strlen(outString));
}
