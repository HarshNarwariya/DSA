### Solution

1 -> 2 -> 3 -> 4

## Initailly
prev = None

cur = head i.e (1)

temp = cur.next (2..4)


None <- 1

prev = cur

cur = (2..4)


## Step 2

prev = 1

cur = head i.e (2)

temp = cur.next (3..4)


1 <- 2

prev = cur

cur = (3..4)


## Step 3

prev = 2

cur = head i.e (3)

temp = cur.next (4..4)


2 <- 3

prev = cur

cur = (4..4)


## Step 4

prev = 3

cur = head i.e (4)

temp = cur.next (None)


3 <- 4

prev = cur (4 i.e last node)

cur = None


since there is no cur node break the loop

and answer is in prev
