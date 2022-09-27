# Group Assignment - Image Stacker

## DESIGN DECISIONS:


## HOW TO RUN THE PROGRAM:
Enter file name (make sure it is lowercase! and valid filename)
Enter amount Of images you want stacked

Let the code do the rest of the work!

## CHALLENGES I RAN INTO:
Accidentally creating a similar file and then deleting wrong file, make sure to push code to github often so that you can atleast recover some of the code

I tried using pixels.emplace_back() in order to update size and capcaity

I was going to work around this by making an if statement that checked if this was the fist time looping through file,'
if yes, then it would do pixels.emplace_back() so that sixe() and capacaity would work

if not, then i would just add the in variables to the exisiting vector with +=


## THINGS I COULD HAVE DONE DIFFERENTLY:
Do code documentaion asap, dont wait last minute to do it

When opening the file and using emplace_back() instead of file >> r *add into pixel[i].red* etc.
do:
file >> r;
file >> g;
file >> b;
pixels.emplace_back(r,g,b);


(This would only work if its the first time passing into vector so you would need another if statement to check if this is first time)
That way when using for loop in print() , i could use pixels.size() instead of (width * height)



