largest := numbers[0];
secondLargest := null
for i=1 to numbers.length-1 do
    number := numbers[i];
    if number > largest then
        secondLargest := largest;
        largest := number;
    else
        if number > secondLargest then
            secondLargest := number;
        end;
    end;
end;