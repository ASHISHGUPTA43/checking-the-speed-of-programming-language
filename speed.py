import time
start_time = time.time()
for i in range(1,1000000):
    pass
end_time = time.time()
elapsed_time = end_time - start_time
print(f"time taken to count from 1 to 1 billion: {elapsed_time} seconds")