#include <linux/init.h>
#include <linux/module.h>
#include <linux/i2c.h>

/* Add your code here */
module_init(test_init);
module_exit(test_exit);

static int __init test_init(void)
{

	printk("Hello Master.. Linux version");
	return 0;
}

static void __exit test_exit(void)
{
	printk("bye bye \n");
}

MODULE_LICENSE("GPL");

