use std::os::raw::c_char;

#[no_mangle]
pub extern "C" fn set_and_get(in_str: *const c_char, in_num: u16) -> *const c_char {
    println!(
        "This is from C \"{:?}\". this one too: {:?}",
        in_str, in_num
    );
    b"Hi from Rust!".as_ptr().cast()
}
