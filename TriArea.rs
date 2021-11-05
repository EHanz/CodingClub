use std::io::{self, BufRead};

fn main ()
{
    let stdin = io::stdin();
    let mut base = 0.0;
    let mut height = 0.0;

    for line in stdin.lock().lines().map(|l| l.unwrap()) 
    {
        let nums: Vec<f64> = line.split_whitespace()
            .map(|num| num.parse().unwrap())
            .collect();
        base = nums[0];
        height = nums[1];
        break;
    }

    let area = 0.5 * (base * height);

    println! ("{}", area);
}