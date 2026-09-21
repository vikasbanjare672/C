#include <stdio.h>
#include <string.h>

void intro_vid(char name[], int age){
    if(age < 0){
        printf("YOU SHOULDn't BE DOING THIS U SUPPOSED TO BE UNBORN!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    }
    else if(age >= 18 && age <= 80){
        printf("Your Name is %s ,", name);
        printf("and your age is %d...hmmmm.....\n", age);
        
        if(age >= 40 && age <= 80){
            printf("DANM Your OLD.....so MOVE YOUR BITCH ASS UP more :)\n");
        }
        else{
            printf("You are adult so STFU AND START TO LIVE MORE\n");
        }    
    }
    else {
        printf("DIE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    }
}

void input_data(char name[] ,size_t name_size, int *age){

    printf("Enter your name : ");

    fgets(name , name_size , stdin); // to get input including whitespaces

    name[strlen(name) - 1] = '\0';  // for end line 
    

    printf("Enter your age :");
    scanf("%d", age);
}

int main(){
    char name[50];
    int age;

    input_data(name , sizeof(name) , &age);
    intro_vid( name , age );

    input_data(name , sizeof(name) , &age);
    intro_vid( name , age );

    return 0;
}