#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    switch(month) {
        case 1: return 31;
        case 2: return isLeapYear(year) ? 29 : 28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
        default: return 0;
    }
}

// Zeller's Congruence
int dayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year -= 1;
    }
    int K = year % 100;
    int J = year / 100;
    int h = (day + (13 * (month + 1)) / 5 + K + K/4 + J/4 + 5*J) % 7;
    return (h + 6) % 7; // Convert to 0=Sun
}

void printHolidays(int month) {
    printf("\nHolidays:\n");

    switch(month) {

        case 1:
            printf("  1  - New Year\n");
            printf("  4  - World Braille Day\n");
            printf(" 12 - National Youth Day\n");
            printf(" 12 - Divyanshu's Birthday\n");
            printf(" 14 - Makar Sankranti (Approx)\n");
            printf(" 15 - Pongal (Approx)\n");
            printf(" 16 - Guru Gobind Singh Jayanti (Approx)\n");
            printf(" 23 - Netaji Subhas Chandra Bose Jayanti\n");
            printf(" 26 - Republic Day\n");
            printf(" 30 - Martyrs' Day\n");
            break;

        case 2:
            printf("  1  - Indian Coast Guard Day\n");
            printf("  4  - World Cancer Day\n");
            printf("  7  - Rose Day\n");
            printf("  8  - Propose Day\n");
            printf("  9  - Chocolate Day\n");
            printf(" 10 - Teddy Day\n");
            printf(" 11 - Promise Day\n");
            printf(" 12 - Hug Day\n");
            printf(" 13 - Kiss Day\n");
            printf(" 14 - Valentine's Day\n");
            printf(" 19 - Shivaji Maharaj Jayanti\n");
            printf(" 20 - World Day of Social Justice\n");
            printf(" 27 - World NGO Day\n");
            printf(" 28 - National Science Day\n");
            break;

        case 3:
            printf("  1  - Zero Discrimination Day\n");
            printf("  3  - World Wildlife Day\n");
            printf("  4  - National Safety Day\n");
            printf("  8  - Women's Day\n");
            printf(" 10 - Maha Shivaratri (Approx)\n");
            printf(" 15 - Consumer Rights Day\n");
            printf(" 20 - Happiness Day\n");
            printf(" 21 - Holi (Approx)\n");
            printf(" 22 - World Water Day\n");
            printf(" 23 - Shaheed Diwas\n");
            printf(" 27 - World Theatre Day\n");
            printf(" 31 - Easter (Approx)\n");
            break;

        case 4:
            printf("  1  - April Fool's Day\n");
            printf("  2  - Autism Awareness Day\n");
            printf("  7  - World Health Day\n");
            printf(" 10 - Eid al-Fitr (Approx)\n");
            printf(" 13 - Jallianwala Bagh Remembrance\n");
            printf(" 14 - Ambedkar Jayanti\n");
            printf(" 15 - Vishu / Baisakhi (Approx)\n");
            printf(" 17 - Ram Navami (Approx)\n");
            printf(" 18 - World Heritage Day\n");
            printf(" 22 - Earth Day\n");
            printf(" 23 - World Book Day\n");
            printf(" 29 - Dance Day\n");
            break;

        case 5:
            printf("  1  - Labour Day\n");
            printf("  3  - Press Freedom Day\n");
            printf("  8  - World Red Cross Day\n");
            printf(" 12 - Nurses Day\n");
            printf(" 15 - Families Day\n");
            printf(" 17 - Telecom Day\n");
            printf(" 21 - Anti-Terrorism Day\n");
            printf(" 22 - Biodiversity Day\n");
            printf(" 24 - Buddha Purnima (Approx)\n");
            printf(" 31 - No Tobacco Day\n");
            break;

        case 6:
            printf("  1  - Parents Day\n");
            printf("  5  - Environment Day\n");
            printf("  8  - Oceans Day\n");
            printf(" 12 - Child Labour Day\n");
            printf(" 14 - Blood Donor Day\n");
            printf(" 18 - Father's Day (Approx)\n");
            printf(" 19 - Reading Day\n");
            printf(" 20 - Refugee Day\n");
            printf(" 21 - Yoga Day\n");
            printf(" 23 - Olympic Day\n");
            printf(" 29 - Statistics Day\n");
            break;

        case 7:
            printf("  1  - Doctor's Day\n");
            printf("  4  - USA Independence Day\n");
            printf("  7  - Chocolate Day\n");
            printf(" 11 - Population Day\n");
            printf(" 17 - Justice Day\n");
            printf(" 20 - Muharram (Approx)\n");
            printf(" 22 - Pi Approximation Day\n");
            printf(" 26 - Kargil Vijay Diwas\n");
            printf(" 28 - Nature Conservation Day\n");
            printf(" 29 - Tiger Day\n");
            break;

        case 8:
            printf("  6  - Hiroshima Day\n");
            printf("  7  - Handloom Day\n");
            printf("  9  - Quit India Movement Day\n");
            printf(" 11 - Raksha Bandhan (Approx)\n");
            printf(" 12 - Youth Day\n");
            printf(" 15 - Independence Day\n");
            printf(" 19 - Photography Day\n");
            printf(" 19 - Janmashtami (Approx)\n");
            printf(" 23 - Slave Trade Remembrance\n");
            printf(" 29 - Sports Day\n");
            printf(" 30 - Small Industry Day\n");
            break;

        case 9:
            printf("  5  - Teacher's Day\n");
            printf("  7  - Janmashtami (Approx)\n");
            printf("  8  - Literacy Day\n");
            printf(" 14 - Hindi Diwas\n");
            printf(" 15 - Engineer's Day\n");
            printf(" 16 - Ozone Day\n");
            printf(" 21 - Peace Day\n");
            printf(" 22 - World Rose Day\n");
            printf(" 23 - Autumn Equinox (Approx)\n");
            printf(" 27 - Tourism Day\n");
            printf(" 29 - World Heart Day\n");
            break;

        case 10:
            printf("  1  - Older Persons Day\n");
            printf("  2  - Gandhi Jayanti\n");
            printf("  4  - Animal Day\n");
            printf("  8  - Air Force Day\n");
            printf(" 12 - Dussehra (Approx)\n");
            printf(" 13 - Calamity Control Day\n");
            printf(" 16 - Food Day\n");
            printf(" 17 - Poverty Eradication Day\n");
            printf(" 24 - United Nations Day\n");
            printf(" 31 - Patel Jayanti\n");
            printf(" 31 - Halloween\n");
            break;

        case 11:
            printf("  1  - Diwali (Approx)\n");
            printf("  2  - Govardhan Puja (Approx)\n");
            printf("  3  - Bhai Dooj (Approx)\n");
            printf("  6  - Chhath Puja Begins (Approx)\n");
            printf("  9  - Chhath Puja Ends (Approx)\n");
            printf(" 12 - Guru Nanak Jayanti\n");
            printf(" 14 - Children's Day\n");
            printf(" 19 - National Integration Day\n");
            printf(" 26 - Constitution Day\n");
            break;

        case 12:
            printf("  1  - AIDS Day\n");
            printf("  3  - Disability Day\n");
            printf("  4  - Navy Day\n");
            printf("  7  - Armed Forces Flag Day\n");
            printf(" 10 - Human Rights Day\n");
            printf(" 22 - Mathematics Day\n");
            printf(" 24 - Consumer Rights Day\n");
            printf(" 25 - Christmas\n");
            printf(" 31 - New Year's Eve\n");
            break;
    }
}

void printCalendar(int month, int year) {
    const char *months[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int days = getDaysInMonth(month, year);
    int startDay = dayOfWeek(1, month, year);

    printf("\n  %s %d\n", months[month], year);
    printf("Su Mo Tu We Th Fr Sa\n");

    for (int i = 0; i < startDay; i++)
        printf("   ");

    for (int d = 1; d <= days; d++) {
        printf("%2d ", d);
        if ((d + startDay) % 7 == 0)
            printf("\n");
    }

    printf("\n");
    printHolidays(month);
}

int main() {
    int month, year;

    printf("Enter month and year (e.g., 11 2025): ");
    scanf("%d %d", &month, &year);

    printCalendar(month, year);

    return 0;
} 