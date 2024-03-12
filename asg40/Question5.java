import java.util.Scanner;

class Question5 {
    public static int ToggleRange(int iNo, int iStart, int iEnd) {
        int iResult = iNo;

        for (int i = iStart; i <= iEnd; i++) {
            int iMask = 0x00000001 << (i - 1);
            iResult = iResult ^ iMask;
        }

        return iResult;
    }

    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;
        int iStart = 0;
        int iEnd = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();
        System.out.println("Enter Starting position : ");
        iStart = sobj.nextInt();
        System.out.println("Enter Ending position : ");
        iEnd = sobj.nextInt();

        iRet = ToggleRange(iNo, iStart, iEnd);

        System.out.println("Updated number is : " + iRet);
    }
}
