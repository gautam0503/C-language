/*computing is an operation that involves processing of data by making use of computer.
Control unit is known as the brain of the computer.
the registers which are stored severs as the hign speed storage devices.
CPU interact with each other through a internal bus.
High speed on chip memory is called as cache memmory.
meomory =>primary
                 ->RAM(permits any operation on the data stored) 
                 -> ROM(does not permit operations,houses BOOT STRAP LOADER (loads the memory resident portion into the RAM and Power on slf test is Conducted))
        =>secondary
                      ->also known as Auxiliary memory (large and can store as long as we want,slower (hard disk ,flash drives))
Sotware(these are the ones that clossely interact with system hardware,Soul of the computer)
       ->System Software
               >OS (responsibile for maintaining resources of the computer and acts as the interface btw user and bare hardware)
               >translator (translates program written in 1 lang to another )
               >compilers(hLL to machine language)
       ->Application Software */                

#include<stdio.h>
int mul(int a,int b);
int main(){
        int a,b,c;
        a=5;
        b=10;
        c=mul(a,b);
        printf("Multiplication of %d and %d is %d",a,b,c);
}
int mul(int x,int y){
        int z=x*y;
        return(z);
}

