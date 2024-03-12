import java.util.*;

class Question1 {
    public static boolean ChkBit(int iNo, int iPos) {
        int iMask = 0x00000001;
        iMask = iMask << (iPos - 1);

        int iResult = 0;

        iResult = iNo & iMask;

        if (iResult == iMask) {
            return true;
        } else {
            return false;
        }

    }

    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iPos = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter the position : ");
        iPos = sobj.nextInt();

        bRet = ChkBit(iNo, iPos);

        if (bRet == true) {
            System.out.println(iPos + " bit is ON");
        } else {
            System.out.println(iPos + " bit is OFF");
        }
    }
}
