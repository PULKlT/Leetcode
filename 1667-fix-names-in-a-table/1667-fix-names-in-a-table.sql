# Write your MySQL query statement below

# select user_id, concat(upper(substring(name,1,1)),lower(substring(name,2))) as name
SELECT user_id, concat(upper(LEFT(name, 1)), lower(RIGHT(name, length(name)-1))) as name
from users
order by user_id;