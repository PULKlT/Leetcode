# Write your MySQL query statement below
# select player_id, min(event_date) as first_login 
# from activity
# group by player_id
# ;
SELECT DISTINCT player_id, MIN(event_date) over (PARTITION BY player_id) first_login
FROM Activity