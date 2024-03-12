import java.util.Scanner;

class Question1 {
    public static int CountOne(int iNo) {
        int iCount = 0;
        int i = 0;
        int iMask = 0x00000001;

        for (i = 1; i <= 32; i++) {
            if ((iNo & iMask) == iMask) {
                iCount++;
            }
            iMask = iMask << 1;
        }
        return iCount;
    }

    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iRet = CountOne(iNo);

        System.out.println("Count of 1 is : " + iRet);

    }
}
