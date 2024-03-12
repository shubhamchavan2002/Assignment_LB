import java.util.*;

class StringDemo {
    public String str = null;

    public StringDemo(String str) {
        this.str = str;
    }

    public boolean StrPallindrome() {
        String lowerCaseStr = str.toLowerCase();
        int length = lowerCaseStr.length();

        for (int i = 0; i < length / 2; i++) {
            if (lowerCaseStr.charAt(i) != lowerCaseStr.charAt(length - i - 1)) {
                return false;
            }
        }
        return true;
    }
}

class Question5 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        String str = null;
        boolean bRet = false;

        System.out.println("Enter the first String : ");
        str = sobj.nextLine();

        StringDemo SDobj = new StringDemo(str);

        bRet = SDobj.StrPallindrome();
        if (bRet == true) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }

    }
}