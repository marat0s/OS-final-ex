#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Marat, Dias, Alikhan");
MODULE_DESCRIPTION("Linux module.");
MODULE_VERSION("0.01");
static int hello_init(void) {
	printk(KERN_ALERT "This is showing, Hello World!.\n");
	return 0;
}
static void hello_exit(void) {
	printk(KERN_ALERT "Goodbye World!.");
}
module_init(hello_init);
module_exit(hello_exit);
