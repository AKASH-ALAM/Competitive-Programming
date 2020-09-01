
sort(arr, arr+n, greater<int>());
sort(s2.begin(), s2.end(), greater<char>());
//sort by descending order

cout << fixed << setprecision(6) << endl;
<!-- With <iomanip>, you can use std::fixed and std::setprecision
Printing the correct number of decimal points with cout -->

    char c, s[100], line[1000];
    scanf("%c", &c);
    scanf("%s", s);
<!-- You can take a string as input in C using scanf(“%s”, s). But, it accepts string only until it finds the first space. -->
    
    scanf("\n");
    scanf("%[^\n]%*c", line);
   <!--  in order to take a line as input, you can use scanf("%[^\n]%*c", s); where  is defined as char s[MAX_LEN] where  is the maximum size of . Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered. Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded. -->

    printf("%c\n%s\n%s\n", c, s, line);
    
    <!-- Note: After inputting the character and the string, inputting the sentence by the above mentioned statement won't work. This is because, at the end of each line, a new line character (\n) is present. So, the statement: scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character from the previous line. This can be handled in a variety of ways and one of them being: scanf("\n"); before the last statement. -->
