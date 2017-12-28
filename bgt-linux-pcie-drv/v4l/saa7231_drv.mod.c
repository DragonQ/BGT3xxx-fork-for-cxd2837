#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7231_core";

MODULE_ALIAS("pci:v00001131d00007231sv000014C7sd00003575bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007231sv000014C7sd00003576bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007231sv000014C7sd00003585bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007231sv000014C7sd00003595bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007231sv000014C7sd00003600bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007231sv000014C7sd00003620bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007231sv000014C7sd00003630bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007231sv000014C7sd00003650bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007231sv000014C7sd00003651bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007231sv000014C7sd00003636bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007231sv000014C7sd00003602bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007231sv00000000sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007231sv00000000sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007231sv00001131sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007231sv00001131sd00000001bc*sc*i*");
