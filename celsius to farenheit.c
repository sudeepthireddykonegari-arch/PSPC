 #include (stdio.h)
int main (){
    float celsius = 0.0f;
    float farenheit =0.0f;
    printf("enter farenheit value: \n");
    scanf("%f" , &farenheit);
    celsius=(farenheit-32)*5.0/9.0;
    printf("the temperuture value in celsius:%f",celsius);
    return 0;
}