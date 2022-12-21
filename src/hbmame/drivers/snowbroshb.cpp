// license:BSD-3-Clause
// copyright-holders:Gaston90 (2016-2022)
#include "../mame/drivers/snowbros.cpp"
#include "../mame/video/kan_pand.cpp"

/********************
  Hack And Homebrow
***********************/

ROM_START( snowbroshc01 ) //snowbrosc
	ROM_REGION( 0x40000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "sn6_hc01.bin",  0x00000, 0x20000, CRC(effe7b36) SHA1(07d34f0e76dc2dfa879c517374e61ee77dab6208) )
	ROM_LOAD16_BYTE( "sn5_hc01.bin",  0x00001, 0x20000, CRC(cdd895de) SHA1(7cd64bca3e5e5d9d8fc05b5a846276f0a343fd9c) )

	ROM_REGION( 0x10000, "soundcpu", 0 )
	ROM_LOAD( "sbros-4.29",   0x0000, 0x8000, CRC(e6eab4e4) SHA1(d08187d03b21192e188784cb840a37a7bdb5ad32) )

	ROM_REGION( 0x80000, "gfx1", 0 )
	ROM_LOAD( "sbros-1.41",   0x00000, 0x80000, CRC(16f06b3a) SHA1(c64d3b2d32f0f0fcf1d8c5f02f8589d59ddfd428) )
ROM_END

ROM_START( snowbroshc02 )
	ROM_REGION( 0x40000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "sn6_hc02.bin",  0x00000, 0x20000, CRC(f756cd9d) SHA1(99a43d9233501c1c28cf74829138527bf990a3d7) )
	ROM_LOAD16_BYTE( "sn5_hc02.bin",  0x00001, 0x20000, CRC(cdaa04ed) SHA1(d2bde893aa82b84783712c3156aa7f23322f76bf) )

	ROM_REGION( 0x10000, "soundcpu", 0 ) 
	ROM_LOAD( "sbros-4.29",   0x0000, 0x8000, CRC(e6eab4e4) SHA1(d08187d03b21192e188784cb840a37a7bdb5ad32) )

	ROM_REGION( 0x80000, "gfx1", 0 )
	ROM_LOAD( "sbros-1.41",   0x00000, 0x80000, CRC(16f06b3a) SHA1(c64d3b2d32f0f0fcf1d8c5f02f8589d59ddfd428) )
ROM_END

ROM_START( snowbroshc03 ) //snowbrosa
	ROM_REGION( 0x40000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "sn6_hc03.bin",  0x00000, 0x20000, CRC(090800df) SHA1(02cdb6a07a9043ef26f4abb6769928be8324db85) )
	ROM_LOAD16_BYTE( "sn5_hc03.bin",  0x00001, 0x20000, CRC(b7ebd161) SHA1(66cb4baf3eb341dddb9381b6b4e1873f5678a916) )

	ROM_REGION( 0x10000, "soundcpu", 0 ) 
	ROM_LOAD( "sbros-4.29",   0x0000, 0x8000, CRC(e6eab4e4) SHA1(d08187d03b21192e188784cb840a37a7bdb5ad32) )

	ROM_REGION( 0x80000, "gfx1", 0 )
	ROM_LOAD( "sbros-1.41",   0x00000, 0x80000, CRC(16f06b3a) SHA1(c64d3b2d32f0f0fcf1d8c5f02f8589d59ddfd428) )
ROM_END

ROM_START( snowbroshc04 ) //snowbrosb
	ROM_REGION( 0x40000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "sn6_hc04.bin",  0x00000, 0x20000, CRC(9a0f2016) SHA1(6486e197a3d3e260a736f56cec3fe02be9747353) )
	ROM_LOAD16_BYTE( "sn5_hc04.bin",  0x00001, 0x20000, CRC(0f83e900) SHA1(bc39f53a95240ef04c4c45ac7cafc8e04f5d8912) )

	ROM_REGION( 0x10000, "soundcpu", 0 ) 
	ROM_LOAD( "sbros-4.29",   0x0000, 0x8000, CRC(e6eab4e4) SHA1(d08187d03b21192e188784cb840a37a7bdb5ad32) )

	ROM_REGION( 0x80000, "gfx1", 0 )
	ROM_LOAD( "sbros-1.41",   0x00000, 0x80000, CRC(16f06b3a) SHA1(c64d3b2d32f0f0fcf1d8c5f02f8589d59ddfd428) )
ROM_END

ROM_START( snowbroshc05 ) //snowbrosj
	ROM_REGION( 0x40000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "sn6_hc05.bin",  0x00000, 0x20000, CRC(3181b9ad) SHA1(abe5637d9acfc05326570154a7d668f6d4afed60) )
	ROM_LOAD16_BYTE( "sn5_hc05.bin",  0x00001, 0x20000, CRC(a20f8514) SHA1(aea98f6e3614c9984298f5b1cead49fb0b81f9b6) )

	ROM_REGION( 0x10000, "soundcpu", 0 ) 
	ROM_LOAD( "sbros-4.29",   0x0000, 0x8000, CRC(e6eab4e4) SHA1(d08187d03b21192e188784cb840a37a7bdb5ad32) )

	ROM_REGION( 0x80000, "gfx1", 0 )
	ROM_LOAD( "sbros-1.41",   0x00000, 0x80000, CRC(16f06b3a) SHA1(c64d3b2d32f0f0fcf1d8c5f02f8589d59ddfd428) )
ROM_END

/*    YEAR  NAME            PARENT     MACHINE       INPUT                       INIT    MONITOR   COMPANY       FULLNAME FLAGS */
// Hack/Homebrow
GAME( 2018, snowbroshc01,   snowbros,  snowbros,    snowbros, snowbros_state, empty_init, ROT0,    "hack",       "Snow Bros (Cure Version 2.6 2018-02-10)", MACHINE_SUPPORTS_SAVE )
GAME( 2018, snowbroshc02,   snowbros,  snowbros,    snowbros, snowbros_state, empty_init, ROT0,    "hack",       "Snow Bros (Cure Version 2.6A 2018-05-01)", MACHINE_SUPPORTS_SAVE )
GAME( 2018, snowbroshc03,   snowbros,  snowbros,    snowbros, snowbros_state, empty_init, ROT0,    "hack",       "Snow Bros (Cure Version 2.6B 2018-08-15)", MACHINE_SUPPORTS_SAVE )
GAME( 2018, snowbroshc04,   snowbros,  snowbros,    snowbros, snowbros_state, empty_init, ROT0,    "hack",       "Snow Bros (Cure Version 2.6C 2018-09-25)", MACHINE_SUPPORTS_SAVE )
GAME( 2017, snowbroshc05,   snowbros,  snowbros,    snowbros, snowbros_state, empty_init, ROT0,    "hack",       "Snow Bros (Cure Version 2.5 2017-07-03)", MACHINE_SUPPORTS_SAVE )
