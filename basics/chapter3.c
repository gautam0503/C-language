#include<stdio.h>
//typedef type identfier
int main(){
typedef int units;
typedef float marks; //can be used to define as datatype
units mod1,mod2;//int mod
marks name1[50],name2[20];//float name

//Enum is used to declare variables that can have values present only inside variables
//enum returns only integer values
enum weekday{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
enum weekday weekstart,weekend;
weekstart=sunday;
weekend=friday;
printf("%d\n",weekstart);
//to print output wee need to map as it assings integer values to all inside braces
char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
printf("%s\n", days[weekstart]);
printf("%s", days[weekend]);

                          //1.auto (default local variable)

// Stored in memory automatically (inside function)

#include <stdio.h>

int main() {
    auto int x = 10;   // same as int x = 10;
    printf("%d", x);
    return 0;
}

// Scope: inside function
 //Lifetime: until function ends

                                     // 2. register

// Suggests storing variable in CPU register (faster)

#include <stdio.h>

int main() {
    register int i;

    for(i = 0; i < 3; i++) {
        printf("%d ", i);
    }
    return 0;
}

// Faster access
// Cannot use &i (no address)
                                        //3. static
//Value is retained between function calls

#include <stdio.h>

void count() {
    static int x = 0;
    x++;
    printf("%d\n", x);
}

int main() {
    count();
    count();
    count();
    return 0;
}


// Value persists
 //Not reset each call

                                     //4. extern
//used to access variable from another file (global)

#include <stdio.h>

int x = 10;   // global variable

int main() {
    extern int x;
    printf("%d", x);
    return 0;
}



/*Simple memory trick

auto	     normal local
register	 faster variable
static	     remembers value
extern	    global/shared*/}
