int* gradingStudents(int grades_count, int* grades, int* result_count) {
    
   static int my_grades[10];
    for(int i = 0;  i< grades_count ; i++)
    {
        if (grades[i] < 38)
            my_grades[i] = grades[i];
        else if ((grades[i] % 5)==0)
            my_grades[i] = grades[i];
        else {
            int num = grades[i];
            int num2 = grades[i];
            while ((num % 5) !=0)
            {
                num = num +1;
            }
            if ((num-num2) < 3)
                my_grades[i] = num;
            else
                my_grades[i] = num2;
        }
    }
    *result_count = grades_count;
    return my_grades;
}
