// Proyecto Shadow Legendary Edition
// copyright-holders:Gaston90 (2016 - 2023)
#include "../mame/drivers/contra.cpp"

/********************
  Hack And Homebrow
***********************/

ROM_START( contrahc01 )
	ROM_REGION( 0x30000, "maincpu", ROMREGION_ERASEFF )    
	ROM_LOAD( "633n03_hc01.18a",   0x20000, 0x08000, CRC(10faba24) SHA1(8769ab8f00d8aa215b1a759c60f6a9a0bd17af57) )
	ROM_CONTINUE(             0x08000, 0x08000 )
	ROM_LOAD( "633k02_hc01.17a",   0x10000, 0x10000, CRC(10447386) SHA1(e06dbe59f77ceea6953b45de8b8bd5e813d44881) )

	ROM_REGION( 0x10000, "audiocpu", 0 )    
	ROM_LOAD( "633e01.12a",   0x08000, 0x08000, CRC(d1549255) SHA1(d700c7de36746ba247e3a5d0410b7aa036aa4073) )

	ROM_REGION( 0x80000, "gfx1", 0 )
	ROM_LOAD16_BYTE( "633e04_hc01.7d",    0x00000, 0x40000, CRC(60515b18) SHA1(242d104fffc2dab1c81bd55b676a048d76a27c9e) )
	ROM_LOAD16_BYTE( "633e05_hc01.7f",    0x00001, 0x40000, CRC(595566c5) SHA1(89b56dec9293f158ea1c06afc5492f50ac2478d3) )

	ROM_REGION( 0x80000, "gfx2", 0 )
	ROM_LOAD16_BYTE( "633e06_hc01.16d",   0x00000, 0x40000, CRC(40a66752) SHA1(b3a28c5faa49bd76dd5fefa0f070b309a131c618) )
	ROM_LOAD16_BYTE( "633e07_hc01.16f",   0x00001, 0x40000, CRC(635466bb) SHA1(229f9334f2d5fcb14cb2808c95073ed4b95926f6) )

	ROM_REGION( 0x0400, "proms", 0 )
	ROM_LOAD( "633e08.10g",   0x0000, 0x0100, CRC(9f0949fa) SHA1(7c8fefdcae4523d008a7d39062194c7a80aa3500) )    
	ROM_LOAD( "633e09.12g",   0x0100, 0x0100, CRC(14ca5e19) SHA1(eeee2f8b3d1e4acf47de1e74c4e507ff924591e7) )    
	ROM_LOAD( "633f10.18g",   0x0200, 0x0100, CRC(2b244d84) SHA1(c3bde7afb501bae58d07721c637dc06938c22150) )    
	ROM_LOAD( "633f11.20g",   0x0300, 0x0100, CRC(14ca5e19) SHA1(eeee2f8b3d1e4acf47de1e74c4e507ff924591e7) )    

	ROM_REGION( 0x0001, "pals", ROMREGION_ERASE00 )
ROM_END

/*    YEAR  NAME           PARENT     MACHINE    INPUT                       INIT    MONITOR COMPANY       FULLNAME FLAGS */
// Hack/Homebrow
GAME( 1987, contrahc01,    contra,    contra,    contra,   contra_state, empty_init,  ROT90, "hack",       "Contra (Translation Chinese)", MACHINE_SUPPORTS_SAVE )
