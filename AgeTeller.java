import java.util.Scanner;

public class NoOfDayInmonthOfYear {
    static int days;
    int month;
    int year;

    public NoOfDayInmonthOfYear(int year, int month) {
        this.month = month;
        this.year = year;
    }

    boolean checkleapyear(int year) {
        if (year % 400 == 0)
            return true;

        if (year % 100 == 0)
            return false;

        if (year % 4 == 0)
            return true;

        return false;

    }

    public int month(int month) {

        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            return days = 31;

        // if (month ==4||month==6||month==9||month==11)
        return days = 30;

    }

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        System.out.println("enter the year");
        int year = scan.nextInt();
        System.out.println("enter the month between 1 to 12 :");
        int month = scan.nextInt();
        NoOfDayInmonthOfYear n1 = new NoOfDayInmonthOfYear(year, month);
        boolean x;
        x = n1.checkleapyear(year);
        if (x == true && month == 2) {
            days = 29;
            System.out.println("Days : " + days);
        } else if (x == false && month == 2) {
            days = 28;
            System.out.println("days :" + days);
        } else {
            days = n1.month(month);
            System.out.println("Days :" + days);

        }
    }

}
