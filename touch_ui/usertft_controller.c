
void usertft_init_ili(void)

{
  uint uVar1;
  uint controllerCode;
  
  usertft_init();
  gpio_set_pin(PTR_GPIOG_08018ce0,p2);
  probably_wait(100);
  gpio_reset_pin(PTR_GPIOG_08018ce0,p2);
  probably_wait(4000);
  gpio_set_pin(PTR_GPIOG_08018ce0,p2);
  probably_wait(12000);
  sleep(0x32);
  usertft_send(0);
  usertft_send2(1);
  sleep(0x32);
  usertft_send(0);
  maybe_SysTick_Config(5);
  usertft_read2();
                    /* Read ID4 
                        */
  usertft_send(0xd3);
  usertft_read2();
  usertft_read2();
  uVar1 = usertft_read2();
  controllerCode = usertft_read2();
  controllerCode = (uVar1 & 0xff) << 8 | controllerCode;
  if (controllerCode != 0x9488) {
    usertft_send(0xb0);
    usertft_send2(0);
    usertft_send(0xbf);
    usertft_read2();
    usertft_read2();
    usertft_read2();
    uVar1 = usertft_read2();
    controllerCode = usertft_read2();
    controllerCode = (uVar1 & 0xff) << 8 | controllerCode;
  }
  if (controllerCode == 0x1581) {
    usertft_send(0xff);
    usertft_send(0xff);
    sleep(5);
    usertft_send(0xff);
    usertft_send(0xff);
    usertft_send(0xff);
    usertft_send(0xff);
    sleep(10);
    usertft_send(0x11);
    sleep(0x96);
    usertft_send(0xb0);
    usertft_send2(0);
    usertft_send(0xb3);
    usertft_send2(2);
    usertft_send2(0);
    usertft_send2(0);
    usertft_send2(0);
    usertft_send(0xb4);
    usertft_send2(0);
    usertft_send(0xc0);
    usertft_send2(3);
    usertft_send2(0x3b);
    usertft_send2(0);
    usertft_send2(0);
    usertft_send2(0);
    usertft_send2(1);
    usertft_send2(0);
    usertft_send2(0x22);
    usertft_send(0xc1);
    usertft_send2(8);
    usertft_send2(0x1d);
    usertft_send2(8);
    usertft_send2(8);
    usertft_send(0xc4);
    usertft_send2(0x11);
    usertft_send2(5);
    usertft_send2(0x23);
    usertft_send2(3);
    usertft_send(200);
    usertft_send2(1);
    usertft_send2(7);
    usertft_send2(0xd);
    usertft_send2(0x79);
    usertft_send2(8);
    usertft_send2(0xc);
    usertft_send2(0xc);
    usertft_send2(1);
    usertft_send2(0);
    usertft_send2(0x32);
    usertft_send2(1);
    usertft_send2(0xc);
    usertft_send2(0xc);
    usertft_send2(0x78);
    usertft_send2(9);
    usertft_send2(0xd);
    usertft_send2(7);
    usertft_send2(1);
    usertft_send2(0x32);
    usertft_send2(0);
    usertft_send(0xd0);
    usertft_send2(7);
    usertft_send2(4);
    usertft_send2(0x1d);
    usertft_send2(2);
    usertft_send(0xd1);
    usertft_send2(3);
    usertft_send2(0x3a);
    usertft_send2(0x11);
    usertft_send(0xd2);
    usertft_send2(3);
    usertft_send2(4);
    usertft_send2(4);
    usertft_send(0x36);
    usertft_send2(0xa0);
    usertft_send(0x3a);
    usertft_send2(0x55);
    usertft_send(0x35);
    usertft_send2(0);
    usertft_send(0x44);
    usertft_send2(0);
    usertft_send2(1);
    usertft_send(0x29);
    sleep(0x1e);
    usertft_send(0x2a);
    usertft_send2(0);
    usertft_send2(0);
    usertft_send2(1);
    usertft_send2(0x3f);
    usertft_send(0x2b);
    usertft_send2(0);
    usertft_send2(0);
    usertft_send2(1);
    usertft_send2(0xdf);
    usertft_send(0x2c);
    sleep(10);
  }
  else if (controllerCode == 0x9488) {
    usertft_send(0xe0);
    usertft_send2(0);
    usertft_send2(0x13);
    usertft_send2(0x18);
    usertft_send2(4);
    usertft_send2(0xf);
    usertft_send2(6);
    usertft_send2(0x3a);
    usertft_send2(0x56);
    usertft_send2(0x4d);
    usertft_send2(3);
    usertft_send2(10);
    usertft_send2(6);
    usertft_send2(0x30);
    usertft_send2(0x3e);
    usertft_send2(0xf);
    usertft_send(0xe1);
    usertft_send2(0);
    usertft_send2(0x13);
    usertft_send2(0x18);
    usertft_send2(1);
    usertft_send2(0x11);
    usertft_send2(6);
    usertft_send2(0x38);
    usertft_send2(0x34);
    usertft_send2(0x4d);
    usertft_send2(6);
    usertft_send2(0xd);
    usertft_send2(0xb);
    usertft_send2(0x31);
    usertft_send2(0x37);
    usertft_send2(0xf);
    usertft_send(0xc0);
    usertft_send2(0x18);
    usertft_send2(0x17);
    usertft_send(0xc1);
    usertft_send2(0x41);
    usertft_send(0xc5);
    usertft_send2(0);
    usertft_send2(0x40);
    usertft_send2(0);
    usertft_send2(0x40);
    usertft_send(0x36);
    usertft_send2(0xaa);
    usertft_send(0x3a);
    usertft_send2(0x55);
    usertft_send(0xb0);
    usertft_send2(0);
    usertft_send(0xb1);
    usertft_send2(0xa0);
    usertft_send(0xb4);
    usertft_send2(1);
    usertft_send(0xb6);
    usertft_send2(2);
    usertft_send2(0x22);
    usertft_send(0xe9);
    usertft_send2(0);
    usertft_send(0xf7);
    usertft_send2(0xa9);
    usertft_send2(0x51);
    usertft_send2(0x2c);
    usertft_send2(0x82);
    usertft_send(0x20);
    usertft_send(0x11);
    sleep(0x78);
    usertft_send(0x29);
    usertft_send(0x2c);
  }
  else {
    usertft_send(0xff);
    usertft_send(0xff);
    sleep(5);
    usertft_send(0xff);
    usertft_send(0xff);
    usertft_send(0xff);
    usertft_send(0xff);
    sleep(10);
    usertft_send(0x11);
    sleep(0x96);
    usertft_send(0xb0);
    usertft_send2(0);
    usertft_send(0xb3);
    usertft_send2(2);
    usertft_send2(0);
    usertft_send2(0);
    usertft_send2(0);
    usertft_send(0xb4);
    usertft_send2(0);
    usertft_send(0xc0);
    usertft_send2(3);
    usertft_send2(0x3b);
    usertft_send2(0);
    usertft_send2(0);
    usertft_send2(0);
    usertft_send2(1);
    usertft_send2(0);
    usertft_send2(0x22);
    usertft_send(0xc1);
    usertft_send2(8);
    usertft_send2(0x1d);
    usertft_send2(8);
    usertft_send2(8);
    usertft_send(0xc4);
    usertft_send2(0x11);
    usertft_send2(5);
    usertft_send2(0x23);
    usertft_send2(3);
    usertft_send(200);
    usertft_send2(1);
    usertft_send2(7);
    usertft_send2(0xd);
    usertft_send2(0x79);
    usertft_send2(8);
    usertft_send2(0xc);
    usertft_send2(0xc);
    usertft_send2(1);
    usertft_send2(0);
    usertft_send2(0x32);
    usertft_send2(1);
    usertft_send2(0xc);
    usertft_send2(0xc);
    usertft_send2(0x78);
    usertft_send2(9);
    usertft_send2(0xd);
    usertft_send2(7);
    usertft_send2(1);
    usertft_send2(0x32);
    usertft_send2(0);
    usertft_send(0xd0);
    usertft_send2(7);
    usertft_send2(4);
    usertft_send2(0x1d);
    usertft_send2(2);
    usertft_send(0xd1);
    usertft_send2(3);
    usertft_send2(0x3a);
    usertft_send2(0x11);
    usertft_send(0xd2);
    usertft_send2(3);
    usertft_send2(4);
    usertft_send2(4);
    usertft_send(0x36);
    usertft_send2(0xa0);
    usertft_send(0x3a);
    usertft_send2(0x55);
    usertft_send(0x35);
    usertft_send2(0);
    usertft_send(0x44);
    usertft_send2(0);
    usertft_send2(1);
    usertft_send(0x29);
    sleep(0x1e);
    usertft_send(0x2a);
    usertft_send2(0);
    usertft_send2(0);
    usertft_send2(1);
    usertft_send2(0x3f);
    usertft_send(0x2b);
    usertft_send2(0);
    usertft_send2(0);
    usertft_send2(1);
    usertft_send2(0xdf);
    usertft_send(0x2c);
    sleep(10);
  }
  probably_wait(0x4b0);
  usertft_maybe_fill(0x1292);
  gpio_set_pin(PTR_GPIOG_080196e0,p8);
  usertft_send_screen_from_spi2(0x960000);
  return;
}

