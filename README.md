# Test results

## Git-sdk-64

```
$ ./test-speed.sh && ./test.sh && ./test-bash.sh
CPU time: 0.159s
Countrate: 629MHz

real    0m0.736s
user    0m0.015s
sys     0m0.060s

real    0m1.777s
user    0m0.499s
sys     0m1.264s
```

## Docker for Windows buildpack-deps:14.04

```
root@8f6c184dd6d2:/src# ./test-speed.sh && ./test.sh && ./test-bash.sh
CPU time: 0.163s
Countrate: 614MHz

real    0m0.148s
user    0m0.020s
sys     0m0.120s

real    0m0.162s
user    0m0.040s
sys     0m0.110s
```
