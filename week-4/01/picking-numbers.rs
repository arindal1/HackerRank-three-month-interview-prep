fn picking_numbers(mut a: Vec<i32>) -> i32 {
    a.sort();

    let mut result = 0;
    let mut count = 1;
    let mut subarray_first_element = a[0];

    for i in 1..a.len() {
        if subarray_first_element == a[i] || subarray_first_element + 1 == a[i] {
            count += 1;
        } else {
            result = result.max(count);
            count = 1;
            subarray_first_element = a[i];
        }
    }

    result = result.max(count);
    result
}

