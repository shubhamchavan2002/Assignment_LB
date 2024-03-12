import java.util.*;

class Question4 {
    public static boolean ChkBit(int iNo, int iPos1, int iPos2) {
        int iMask1 = 0x00000001;
        int iMask2 = 0x00000001;
        iMask1 = iMask1 << (iPos1 - 1);
        iMask2 = iMask2 << (iPos2 - 1);

        int iResult1 = 0;
        int iResult2 = 0;

        iResult1 = iNo & iMask1;
        iResult2 = iNo & iMask2;

        if ((iResult1 == iMask1) && (iResult2 == iMask2)) {
            return true;
        } else {
            return false;
        }

    }

    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iPos1 = 0, iPos2 = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter the position 1 : ");
        iPos1 = sobj.nextInt();
        System.out.println("Enter the position 2 : ");
        iPos2 = sobj.nextInt();

        bRet = ChkBit(iNo, iPos1, iPos2);

        if (bRet == true) {
            System.out.println(iPos1 + " " + iPos2 + " bit is ON");
        } else {
            System.out.println(iPos1 + " " + iPos2 + " bit is OFF");
        }
    }
}
