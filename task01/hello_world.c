/*
 * hello_world.c
 */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Eduardo B. Saporski");
MODULE_DESCRIPTION("[Task 01] Eudyptula Challenge");
MODULE_VERSION("0.1");

static int __init hello_world_init(void) {
    printk(KERN_INFO "Hello, world!\n");
    return 0;
}

static void __exit hello_world_exit(void) {
    printk(KERN_INFO "Goodbye, world!\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);

