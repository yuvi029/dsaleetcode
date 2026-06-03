# Write your MySQL query statement below
select product_name, year, price from Sales s LEFT JOIN Product p ON p.product_id = s.product_id