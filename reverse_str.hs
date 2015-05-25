reverseStr :: String -> String
reverseStr [] = []
reverseStr (x:xs) = (reverseStr xs) ++ [x]

main :: IO ()
main = do
    putStrLn (reverseStr "abc")
    putStrLn (reverseStr "bbaacc")
