# Write your MySQL query statement below
SELECT Department.name AS Department , Employee.name AS Employee , Employee.salary AS Salary
FROM Employee INNER JOIN Department
on Employee.departmentId=Department.id
WHERE Salary=(
    SELECT max(Employee2.salary)
    FROM Employee AS Employee2
    WHERE Employee2.departmentId = Employee.departmentId
)