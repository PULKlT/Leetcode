# Write your MySQL query statement below
select event_day as day, emp_id, sum(out_time - in_time) 
 # from employees b where b.emp_id=a.emp_id and b.event_day=a.event_day) 
as total_time
from Employees
where event_day = event_day and emp_id = emp_id
group by 1,2
order by day
;