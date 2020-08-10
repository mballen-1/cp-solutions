data TisAnInteger =
    TisAn Integer
    
instance Eq TisAnInteger where
    (==) (TisAnInteger a b) (TisAnInteger c d) = 
        a == c && b == d