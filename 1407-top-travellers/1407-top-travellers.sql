# Write your MySQL query statement below
select name,ifnull(sum(distance),0) as travelled_distance
from users left join rides
on users.id = rides.user_id
group by users.id
order by 2 desc,1 asc
;