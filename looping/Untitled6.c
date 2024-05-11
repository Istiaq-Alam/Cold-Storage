int main()
{
    int i,sum=0;
    float avg;
    printf("avarage of the values 1-10 using for loop:\n");

    for(i=1;i<11;i++)
    {
        if(i<11)
        {
          sum=sum+i;
        }

        avg=sum/10.0;
    }
    printf("the sum from 1-10 is %d\nthe avg is %f\n",sum,avg);
}
