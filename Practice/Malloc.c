//
// Created by Sumit Suman on 28-01-2021.
//

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i,N;
    float *height;
    float sum=0,avg;
    printf("Input no. of students\n");
    scanf("%d", &N);

    height = (float *)
            malloc(N * sizeof(float));

    printf("Input heights for %d students \n",N);
    for (i=0; i<N; i++)
        scanf ("%f", &height[i]);

    for(i=0;i<N;i++)
        sum += height[i];
    avg = sum / (float) N;

    printf("Average height = %f \n",avg);

    free (height);



    return 0;
}
