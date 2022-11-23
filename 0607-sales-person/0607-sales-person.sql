# Write your MySQL query statement below
select distinct(s.name)
from salesperson s
left join orders o on s.sales_id=o.sales_id
where o.com_id is null
or o.sales_id not in 
(select sales_id from orders where com_id = (select com_id from company where name = 'RED'))
;