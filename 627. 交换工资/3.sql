# Write your MySQL query statement below
update salary
set sex = char (ascii('m') + ascii('f') - ascii(sex));