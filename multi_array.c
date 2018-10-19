#include <stdio.h>

int main(){
    int grades[1][5];
    int i;
    int j;
    float average;

    //declare variabel multi array
    grades[0][0]=90;
    grades[0][1]=85;
    grades[0][2]=80;
    grades[0][3]=75;
    grades[0][4]=65;

    //loop multi array grade
    for(i=0;i<1;i++){
        average=0;
        for(j=0;j<5;j++){
            average+=grades[i][j];
        }
    }
    //cetak average
    average /= 5.0;
    // average = average/5.0;
    printf("The average marks obtained in subject %d is: %.2f\n", i, average);
    return 0;
}