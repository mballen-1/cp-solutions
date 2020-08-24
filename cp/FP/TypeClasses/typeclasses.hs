data TisAnInteger =
    TisAn Integer
    
instance Eq TisAnInteger where
    -- (==) (TisAnInteger a b) (TisAnInteger c 
    --     a == c && b == 
    -- TisAnInteger' == TisAnInteger' = True
  (==) (TisAn m) (TisAn n) = m == n

data TwoIntegers =
    Two Integer Integer

instance Eq TwoIntegers where
    (==) (Two a b) (Two c d) = a == c && b == d

data StringOrInt =
    TisAnInt Int | TisAString String

instance Eq StringOrInt where
    (==) (TisAnInt a) (TisAnInt b) = a == b
    (==) (TisAString c) (TisAString d) = c == d
    (==) _ _ = False 

data Pair a =
    Pair a a

instance Eq a => Eq (Pair a) where
    (==) (Pair a b) (Pair c d) = a == c && b == d

data Tuple a b = 
    Tuple a b

instance (Eq a , Eq b) => Eq (Tuple a b) where
    (==) (Tuple a b)( Tuple c d) = a == c && b == d
