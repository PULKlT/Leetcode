# Write your MySQL query statement below
select distinct(s.name)
from salesperson s 
# left join orders o on s.sales_id=o.sales_id
where 
# o.com_id is null
# or o.sales_id not in 
s.sales_id not in 
(select sales_id from orders where com_id = (select com_id from company where name = 'RED'))
;


# select salesperson.name
# from orders o join company c on (o.com_id = c.com_id and c.name = 'RED')
# right join salesperson on salesperson.sales_id = o.sales_id
# where o.sales_id is null;
# 
# Interesting solution...to explain for others...
# The first inner join creates a view for just 'RED' orders
# The right join ensures all salespersons are included (even those who do not have RED orders)
# The WHERE IS NULL gives salespersons who did not have any RED orders due to the right join