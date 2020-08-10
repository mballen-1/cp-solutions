-- sayHello :: String -> IO ()
-- sayHello x = putStrLn("Hello, " ++ x ++ "!")

-- sayBye :: String -> IO()
-- sayBye x = putStrLn("Bye" ++ x ++ "!")


data Mood = Blah | Woot deriving Show
changeMood :: Mood -> Mood
changeMood Blah = Woot
changeMood _ = Blah  


data MyNum = Int | RareNum deriving Show
getComplement :: MyNum -> MyNum
getComplement Int = 20
getComplement _ = 30
