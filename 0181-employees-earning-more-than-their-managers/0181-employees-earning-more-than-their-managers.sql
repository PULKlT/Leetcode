# Write your MySQL query statement below
select e1.name as Employee from Employee e1, Employee e2
where e1.managerId = e2.Id and e1.salary > e2.salary;