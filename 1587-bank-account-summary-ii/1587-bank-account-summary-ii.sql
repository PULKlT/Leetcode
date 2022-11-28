# Write your MySQL query statement below
select u.name, sum(t.amount) as balance
from Users u, Transactions t
where u.account = t.account
group by name
having balance >10000
;