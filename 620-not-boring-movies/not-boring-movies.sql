# Write your MySQL query statement below
SELECT id,movie, description, rating FROM CINEMA WHERE description NOT LIKE 'boring' AND id%2 !=0 order by rating  desc;