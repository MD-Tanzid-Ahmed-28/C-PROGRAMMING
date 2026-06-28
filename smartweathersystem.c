#include <stdio.h>
int main()
{
    float temperature, humidity, windspeed;
    char rain;
    printf("--------SMART WEATHER SYSTEM--------\n");
    printf("ENTER TEMPERATURE IN CELCIUS:");
    scanf("%f", &temperature);
    printf("ENTER TODAY HUMIDITY:");
    scanf("%f", &humidity);
    printf("ENTER TODAY WIND SPEED:");
    scanf("%f", &windspeed);
    printf("IS IT RAINING?(Y/N):");
    scanf(" %c", &rain);
    // Temperature
    printf("-----TODAY WEATHER REPORT-----\n");
    if (temperature >= 40)
        printf("---->Temperature:very hot day\n");
    else if (temperature >= 30)
        printf("---->Temperature: Warm day\n");
    else if (temperature >= 25)
        printf("---->Temperature: Pleasant\n");
    else if (temperature >= 20)
        printf("---->Temperature: Comfort weather\n");
    else
        printf("---->Temperature: Cold\n");
    // Humidity
    if (humidity >= 80)
        printf("---->Humidity:High\n");
    else if (humidity >= 50)
        printf("---->Humidity:Moderate\n");
    else
        printf("---->Humidity:Low\n");
    // Wind speed
    if (windspeed >= 60)
        printf("---->Wind speed : Very strong\n");
    else if (windspeed >= 40)
        printf("---->Wind speed : Strong\n");
    else if (windspeed >= 20)
        printf("---->Wind speed : Moderate\n");
    else
        printf("---->Wind speed : Low\n");
    // rain
    if (rain == 'Y')
        printf("---->Rain : Yes\n");
    else
        printf("---->Rain : no\n");
    // Recommendation
    if (temperature >= 30)
    {
        printf("For temperature---->Drink more water to avoid dehydration\n");
    }
    if (rain == 'Y')
    {
        printf("For rain---->Take umbrella with you\n");
    }
    else
    {
        printf("---->Normal sunny day (^__^)----\n");
    }
    if (humidity >= 80)
    {
        printf("For humidity---->Drink more water and take preparation because of lots of sweat\n");
    }
    if (windspeed >= 60)
    {
        printf("For wind speed---->Avoid outdoor if it possible\n");
    }

    printf("--------Complimentary--------");
    printf("----Have a good and beautiful day----\n");
    printf("----Thanks a lot for using it----\n");
    return 0;
}