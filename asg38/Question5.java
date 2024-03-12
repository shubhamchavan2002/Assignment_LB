import java.util.*;

class Question5 {
    public static int OnBit(int iNo) {
        int iMask = 0x0000000f; // 1st four bit is on
        int iResult = 0;
        iResult = iNo | iMask;

        return iResult;

    }

    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iRet = OnBit(iNo);

        System.out.println("Updated number is : " + iRet);
    }
}
