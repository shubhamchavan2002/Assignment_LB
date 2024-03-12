import java.util.Scanner;

class Question3 {
    public static boolean CheckBit(int iNo) {
        int iResult = 0;
        int iMask = 0x00000900;

        iResult = iNo & iMask;

        if (iResult == iMask) {
            return true;
        } else {
            return false;
        }

    }

    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        bRet = CheckBit(iNo);

        if (bRet == true) {
            System.out.println("9th & 12th  bit is ON");
        } else {
            System.out.println("9th & 12th bit is OFF");
        }
    }
}
