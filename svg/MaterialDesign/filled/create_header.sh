#!/bin/sh


# Add parameter corresponding to the current file 
add_file()
{
     if [[ $1 =~ ^[[:digit:]] ]]
     then 	     
     echo "const char *_$1 =" >> $2
     else
     echo "const char *$1 =" >> $2
     fi
     echo "#include \"$1.svg\"" >> $2
     echo "; " >> $2
}

search_dir=.
for entry in "$search_dir"/*.svg
do
   
   # Remove garbage
   entry=${entry#*/}
   y=${entry%.svg}

   add_file $y "test_file.cpp"
done
