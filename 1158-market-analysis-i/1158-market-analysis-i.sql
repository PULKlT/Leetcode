# Write your MySQL query statement below
# select buyer_id, join_date, 
# sum(case
#     when YEAR(order_date) = "2019" then 1
#     else 0
#     end
#     )
# as orders_in_2019
# from users, orders
# where YEAR(order_date) = "2019"
# group by buyer_id

SELECT u.user_id AS buyer_id, join_date, 
IFNULL(COUNT(order_date), 0) AS orders_in_2019 
FROM Users as u
LEFT JOIN
Orders as o
ON u.user_id = o.buyer_id
AND YEAR(order_date) = '2019'
GROUP BY u.user_id
;