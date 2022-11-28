# Write your MySQL query statement below
select a.event_day as day, a.emp_id, 
(select sum(b.out_time - b.in_time) from employees b where b.emp_id=a.emp_id and b.event_day=a.event_day) as total_time
from Employees a, Employees b
# where a.event_day = b.event_day
group by 1,2
order by day
;