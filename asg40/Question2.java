import java.util.Scanner;

class Question2 {
    public static void CommonONBits(int iNo1, int iNo2) {
        int i = 0;
        int iMask = 0x00000001;

        for (i = 1; i <= 32; i++) {
            if ((iNo1 & iMask) == iMask && (iNo2 & iMask) == iMask) {
                System.out.print(i + " ");
            }
            iMask = iMask << 1;
        }

    }

    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0;
        int iNo2 = 0;

        System.out.println("Enter number : ");
        iNo1 = sobj.nextInt();
        System.out.println("Enter number : ");
        iNo2 = sobj.nextInt();

        CommonONBits(iNo1, iNo2);

    }
}
