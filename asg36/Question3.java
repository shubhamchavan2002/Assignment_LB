import java.util.*;

class StringDemo {
    public String str1 = null;
    public String str2 = null;
    public int iValue = 0;

    public StringDemo(String str1, String str2, int iValue) {
        this.str1 = str1;
        this.str2 = str2;
        this.iValue = iValue;
    }

    public boolean StrNCmpX() {
        String sResult = null;

        if (iValue >= str2.length()) {
            System.out.println(str1.concat(str2));
            return true;
        } else if (str1.substring(0, iValue).equals(str2.substring(0, iValue))) {
            return true;
        } else {
            return false;
        }
    }
}

class Question3 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        String str1 = null;
        String str2 = null;
        String sRet = null;
        boolean bRet = false;
        int iNo = 0;

        System.out.println("Enter the first String : ");
        str1 = sobj.nextLine();

        System.out.println("Enter the Second String : ");
        str2 = sobj.nextLine();

        System.out.println("Value for n : ");
        iNo = sobj.nextInt();

        StringDemo SDobj = new StringDemo(str1, str2, iNo);

        bRet = SDobj.StrNCmpX();
        if (bRet == true) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }

    }
}