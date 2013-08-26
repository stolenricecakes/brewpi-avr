
// setup and loop are in brewpi_config so they can be reused across projects
extern void setup(void);
extern void loop (void);


void main() __attribute__ ((noreturn)); // tell the compiler main doesn't return.

void main(void)
{
//	init();

	setup();
	
	for (;;) {
		loop();
//		if (serialEventRun) serialEventRun();
	}
}

