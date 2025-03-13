//greeting for a day
#include<stdio.h>
int main(){
    int weekday;
    printf("Enter week day number(mon-sun)(1-7): \n");
    scanf("%d",&weekday);
    switch(weekday)
    {
        case 1:
            printf("Hello, Monday! Let's start the week strong and make it a good one!"
                    "Good morning! A fresh week awaits — let's tackle it with energy and optimism!");
            break;
        case 2:
            printf("Happy Tuesday! Keep the momentum going and let's make today count!"
                    "Good morning! Another day to work towards your goals — let's do this!");
            break;
        case 3:
            printf("Happy Wednesday! We're halfway through the week — keep pushing forward!"
            "Good morning! It's the perfect time to reflect and refocus. Let's make today awesome!");
            break;
        case 4:
                printf("Hello, Thursday! The weekend is near, but let's finish strong!"
                        "Good morning! Let’s turn this Thursday into a day of progress and positivity!");
            break;
        case 5:
            printf("Happy Friday! The weekend is almost here — let’s finish the week strong!"
                    "Good morning! It’s Friday — the perfect day to celebrate your wins and wrap up the week!");
            break;
        case 6:
            printf("Good morning, Saturday! Time to relax, recharge, and enjoy the day!"
"Happy Saturday! Take time to do what makes you happy and enjoy the weekend!");
            break;
        case 7:
            printf("Good morning, Sunday! A new week begins tomorrow — let's enjoy today!"
"Happy Sunday! A day to relax, reflect, and get ready for the week ahead!");
            break;
        default:
                printf("Enter valid weekday");
    }
    return 0;
}