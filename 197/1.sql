# Write your MySQL query statement below
select
  w2.Id
from Weather w1,
  Weather w2
where
  to_days(w2.RecordDate) - to_days(w1.RecordDate) = 1
  and w2.Temperature > w1.Temperature;