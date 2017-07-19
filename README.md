
```
$ vagrant up
$ vagrant ssh

# in guest (Centos7)
$ cd /vagrant
$ gcc -fstack-protector src/stack_smash.c
$ ./a.out
$ gcc -fstack-protector-all src/stack_smash.c
$ ./a.out
```

if you modified some code on host, you need to sync it in guest file system by below command.

$ vagrant rsync
