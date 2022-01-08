#include "libft.h"
#include <stdio.h>

#define CASE(s) \
    printf("\n%s:", s)
#define OK() \
    printf("o")
#define KO() \
    printf("x")

void assert_bool(bool expected, bool actual) {
    if (actual == expected) OK();
    else KO();
}

int main() {
    printf("------start------");
    CASE("ft_isnumber");
    assert_bool(true, ft_isnumber("12"));
    assert_bool(true, ft_isnumber("-12"));
    assert_bool(true, ft_isnumber("+12"));
    assert_bool(true, ft_isnumber("0"));
    assert_bool(true, ft_isnumber("+0"));
    assert_bool(true, ft_isnumber("-0"));
    assert_bool(true, ft_isnumber("012"));
    assert_bool(true, ft_isnumber("0012"));
    assert_bool(true, ft_isnumber("-0012"));
    assert_bool(true, ft_isnumber("+0012"));
    assert_bool(false, ft_isnumber("--122"));
    assert_bool(false, ft_isnumber("++122"));
    assert_bool(false, ft_isnumber("-"));
    assert_bool(false, ft_isnumber("+"));
    printf("\n-------end-------\n");
}
