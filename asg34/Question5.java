import java.util.*;

class Digit {
    public int iNo = 0;

    public Digit(int iNo) {
        this.iNo = iNo;
    }

    public int Display() {
        int iDigit = 0;
        int iEvenSum = 0;
        int iOddSum = 0;
        if (iNo < 0) { // updator
            iNo = -iNo;
        }
        while (iNo != 0) {
            iDigit = iNo % 10;
            if (iDigit % 2 == 0) {
                iEvenSum = iEvenSum + iDigit;
            } else {
                iOddSum = iOddSum + iDigit;
            }
            iNo = iNo / 10;
        }
        return iEvenSum - iOddSum;
    }
}

class Question5 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Digit ADobj = new Digit(iValue);
        iRet = ADobj.Display();
        System.out.println("Difference  : " + iRet);

        sobj.close();

    }
}
