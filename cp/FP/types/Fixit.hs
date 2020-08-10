module Sing where
sing = 
    if (x > y) 
    then 
        fstString x 
    else
         sndString y

fstString :: [Char] -> [Char]
fstString x = x ++ " in the rain"

sndString :: [Char] -> [Char]
sndString x = x ++ " over the rainbow"


x = "Singin"
y = "Samewhere"
