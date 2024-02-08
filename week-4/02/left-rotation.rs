fn rotate_left(d: i32, arr: Vec<i32>) -> Vec<i32> {
    let n = arr.len();
    let mod_value = d % n as i32;
    let mut ans = Vec::with_capacity(n);
    
    for i in 0..n {
        let c = arr[(mod_value as usize + i) % n];
        ans.push(c);
    }
    
    ans
}
