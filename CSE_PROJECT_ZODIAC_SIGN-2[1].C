 #include<stdio.h>
 int main()
 {
 int date,month,a=0;
 start:
 printf( "\n\n\t Welcome to the Program of knowing your Zodiac Sign and birthstone.");
 printf("       ============================================================================");
 printf("\n\n\tEnter Your  Month No.:");
 scanf("%d",&month);
 printf("\n\n\t Enter Your Birth Date: ");
 scanf("%d",&date);
 
 if (month == 3 && date >= 21 || month == 4 && date <= 20)
 {
   printf("\n\n\t Your Zodiac Sign is ARIES");
   printf("\n\n\t Your birthstone is DIAMOND");
 }
 else if (month == 4 && date >= 21 || month == 5 && date <= 21)
 {
 printf("\n\n\t Your Zodiac sign is TAURUS");
 printf("\n\n\t Your birthstone is EMERALD");
 }
 else if (month == 5 && date >= 22 || month == 6 && date <= 22)
 {
 printf("\n\n\t Your Zodiac sign is GEMINI");
 printf("\n\n\t Your birthstone is PEARL.");
 }
 else if (month == 6 && date >= 23 || month == 7 && date <= 23)
 {
 printf("\n\n\t Your Zodiac is CANCER");
 printf("\n\n\t Your birthstone is RUBY");
 }
 else if (month == 7 && date >= 24 || month == 8 && date <= 23)
 {
 printf("\n\n\t Your Zodiac sign is LEO");
 printf("\n\n\t Your birthstone is PERIDOT");
 }
 else if (month == 8 && date >= 24 || month == 9 && date <= 23)
 {
 printf("\n\n\t Your Zodiac sign is VIRGO");
 printf("\n\n\t Your birthstone is SAPPHIRE");
 }
 else if (month == 9 && date >= 24 || month == 10 && date <= 23)
 {
 printf("\n\n\t Your Zodiac sign is LIBRA");
 printf("\n\n\t Your birthstone is OPAL");
 }
 else if (month == 10 && date >= 24 || month == 11 && date <= 23)
{
 printf("\n\n\t Your Zodiac sign is SCORPIO");
 printf("\n\n\t Your birthstone is TOPAZ.");
  }
 else if (month == 11 && date >= 24 || month == 12 && date <= 21)
 {
 printf("\n\n\t Your Zodiac sign is SAGITTARIUS");
 printf("\n\n\t Your birthstone is TURQUOISE");
 }
 else if (month == 12 && date >= 22 || month == 1 && date <= 20)
 {
 printf("\n\n\t Your Zodiac sign is CAPRICON");
 printf("\n\n\t Your birthstone is GARNET");
 }
 else if (month == 1 && date >= 21 || month == 2 && date <= 19)
 {
 printf("\n\n\t Your Zodiac sign is AQUARIUS");
 printf("\n\n\t Your birthstone is AMETHYST ");
 }
 else if (month == 2 && date >= 20 || month == 3 && date <= 20)
 {
 printf("\n\n\t Your Zodiac sign is PISCES");
 printf("\n\n\t Your birthstone is AQUAMARINE");
 }
 else {
 printf("\n\t\t Incorrect Input!! Try Again!");
 goto start;
 }
  printf("\n\n\n   \t\t\t*****************THANK YOU*********************\t\t\t  ");
 printf("\n\n \t\t To Try Again Press 1, or Press 2 to Quit");
 scanf("%d",&a);
 if (a==1)
 goto start;
 if (a==2)
 {
 printf("\n");
 }
 }
