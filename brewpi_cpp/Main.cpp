
// setup and loop are in brewpi_config so they can be reused across projects
extern void setup(void);
extern void loop (void);


int main(void)
{
	setup();
	
	for (;;) {
		loop();
	}
        return 0;
}

