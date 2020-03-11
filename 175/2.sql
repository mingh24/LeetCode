# Write your MySQL query statement below
select
  P.FirstName,
  P.LastName,
  A.City,
  A.State
from Person as P
left join (
    select
      distinct PersonId,
      City,
      State
    from Address
  ) as A on P.PersonId = A.PersonId;