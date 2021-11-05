use std::io::{self, BufRead};

fn main ()
{
    let stdin = io::stdin();
    let mut lineJ = String::new();
    std::io::stdin().read_line(&mut lineJ).unwrap();

    let mut lineD = String::new();
    std::io::stdin().read_line(&mut lineD).unwrap();

    if lineJ.chars().count() >= lineD.chars().count()
    {
        println! ("{}", "go");
    }
    else if lineJ.chars().count() < lineD.chars().count()
    {
        println! ("{}", "no");
    }
}