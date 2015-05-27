/* Implement parseInt */

import java.util.*;
import java.lang.*;

public class ParseInt {
    public Integer parseInt(String numberString) {
        if (numberString.length() <= 0) {
            return null;
        }

        Integer number = 0;
        boolean negative = numberString.charAt(0) == '-';
        String trimedNumber = negative ? numberString.substring(1) : numberString;

        if (trimedNumber.length() <= 0) {
            return null;
        }

        for (int i = 0; i < trimedNumber.length(); ++i) {
            char character = trimedNumber.charAt(i);

            if (isNum(character)) {
                number = 10 * number + (character - '0');
            } else {
                return null;
            }
        }

        return negative ? -number : number;
    }

    public boolean isNum(char character) {
        return '0' <= character && character <= '9';
    }

    public static void printTest(ParseInt parser, String numberString) {
        Integer solution = parser.parseInt(numberString);

        System.out.println(numberString + " " + (solution == null ? "Nan" : Integer.toString(solution)));
    }

    public static void main(String[] args) {
        ParseInt testParse = new ParseInt();

        printTest(testParse, "123");
        printTest(testParse, "-123");
        printTest(testParse, "--1213");
        printTest(testParse, "abc");
        printTest(testParse, "0");
        printTest(testParse, "-1");
        printTest(testParse, "-");
    }
}
