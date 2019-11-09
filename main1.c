#include <stdio.h>
#include <stdlib.h>



int main()
{
    int numbers[11] = {10,20,30,40,50,60,70,80,90,100};
    int index=0;
    while (index < 10)
    {
      //break if value > 65
      if (numbers[index] < 65) {
        index++;
        continue;
      }
      else {
        break;
      }
    }

    printf("65 is to be inserted at index %d\r\n",index);

    //copy original array
    int copy[11];
    memcpy(copy, numbers, sizeof(copy));

    //insert 65
    numbers[index] = 65;

    //copy rest
    while (index <= 11) {
      numbers[index+1] = copy[index++];
    }

    for (index=0;index<11;index++) {
        printf("[%d] ",numbers[index]);
    }
	gets();
    return 0;
}

