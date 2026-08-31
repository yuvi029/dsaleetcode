# Write your MySQL query statement below
SELECT u.unique_id , e.name from Employees E left join EmployeeUNI u on u.id=e.id ;