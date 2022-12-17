// license:BSD-3-Clause
// copyright-holders:Gaston90 (2016-2022)
#include "../mame/drivers/raiden2.cpp"

/********************
  Hack And Homebrow
***********************/

ROM_START( zeroteamhc01 ) //zeroteamab
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD32_BYTE("seibu__1.u024_hc01.5k", 0x000000, 0x40000, CRC(854149c1) SHA1(ce12d5369df244f2c8c9b2560ddc82cb51dcfe03) )
	ROM_LOAD32_BYTE("seibu__3.u023_hc01.6k", 0x000002, 0x40000, CRC(0a8f8d95) SHA1(b9261f453824ec7f2af926e045a620a8db2d5643) )
	ROM_LOAD32_BYTE("seibu__2.u025_hc01.6l", 0x000001, 0x40000, CRC(d29c2966) SHA1(4758cdac0b630f4e53a708fae1ac850433b6cfad) )
	ROM_LOAD32_BYTE("seibu__4.u026_hc01.5l", 0x000003, 0x40000, CRC(eb3c3985) SHA1(faf98732ad5762818f964ce1a3c62bba5beb462b) )

	ROM_REGION( 0x40000, "user2", 0 )
	ROM_LOAD( "copx-d2.u0313.6n",   0x00000, 0x40000, CRC(a6732ff9) SHA1(c4856ec77869d9098da24b1bb3d7d58bb74b4cda) )

	ROM_REGION( 0x20000, "audiocpu", ROMREGION_ERASEFF )
	ROM_LOAD( "seibu__5.u1110.5b",  0x000000, 0x08000, CRC(7ec1fbc3) SHA1(48299d6530f641b18764cc49e283c347d0918a47) )
	ROM_CONTINUE(0x10000,0x8000)
	ROM_COPY( "audiocpu", 0x000000, 0x018000, 0x08000 )

	ROM_REGION( 0x020000, "gfx1", 0 )
	ROM_LOAD16_BYTE( "seibu__7.u072.5s",    0x000000,   0x010000,   CRC(9f6aa0f0) SHA1(1caad7092c07723d12a07aa363ae2aa69cb6be0d) )
	ROM_LOAD16_BYTE( "seibu__8.u077.5r",    0x000001,   0x010000,   CRC(68f7dddc) SHA1(6938fa974c6ef028751982fdabd6a3820b0d30a8) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "musha_back-1.u075.4s",   0x000000, 0x100000, CRC(8b7f9219) SHA1(3412b6f8a4fe245e521ddcf185a53f2f4520eb57) )
	ROM_LOAD( "musha_back-2.u0714.2s",   0x100000, 0x080000, CRC(ce61c952) SHA1(52a843c8ba428b121fab933dd3b313b2894d80ac) )

	ROM_REGION32_LE( 0x800000, "gfx3", ROMREGION_ERASEFF )
	ROM_LOAD32_WORD( "musha_obj-1.u0811.6f",  0x000000, 0x200000, CRC(45be8029) SHA1(adc164f9dede9a86b96a4d709e9cba7d2ad0e564) )
	ROM_LOAD32_WORD( "musha_obj-2.u082.5f",  0x000002, 0x200000, CRC(cb61c19d) SHA1(151a2ce9c32f3321a974819e9b165dddc31c8153) )

	ROM_REGION( 0x100000, "oki", 0 )
	ROM_LOAD( "seibu__6.u105.4a", 0x00000, 0x40000,  CRC(48be32b1) SHA1(969d2191a3c46871ee8bf93088b3cecce3eccf0c) )

	ROM_REGION( 0x10000, "pals", 0 )
	ROM_LOAD( "v3c001.pal.u0310.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c002.tibpal16l8-25.u0322.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c003.ami18cv8p-15.u0619.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c004x.ami18cv8pc-25.u0310.jed", 0x0000, 0x288, NO_DUMP)
ROM_END

ROM_START( zeroteamhc02 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD32_BYTE("b1.u024_hc02.5k", 0x000000, 0x40000, CRC(b47b73b7) SHA1(1ed53b517c7886383772f731fed95b2e8e7b523e) )
	ROM_LOAD32_BYTE("b3.u023_hc02.6k", 0x000002, 0x40000, CRC(81979a9b) SHA1(1b9e216f9f6b4e6d38ac881dfe0e7ee53c523f1b) )
	ROM_LOAD32_BYTE("b2.u025_hc02.6l", 0x000001, 0x40000, CRC(7513250c) SHA1(f7aee5c2facfc663a2864497dc213e944b9e3b7b) )
	ROM_LOAD32_BYTE("b4.u026_hc02.5l", 0x000003, 0x40000, CRC(10341ede) SHA1(b63351b606d2ed59db721b2ab1765a9504c1018b) )

	ROM_REGION( 0x40000, "user2", 0 ) 
	ROM_LOAD( "copx-d2.u0313.6n",   0x00000, 0x40000, CRC(a6732ff9) SHA1(c4856ec77869d9098da24b1bb3d7d58bb74b4cda) )

	ROM_REGION( 0x20000, "audiocpu", ROMREGION_ERASEFF )
	ROM_LOAD( "5.c.u1110.5b",  0x000000, 0x08000, CRC(efc484ca) SHA1(c34b8e3e7f4c2967bc6414348993478ed637d338) )
	ROM_CONTINUE(0x10000,0x8000)
	ROM_COPY( "audiocpu", 0x000000, 0x018000, 0x08000 )

	ROM_REGION( 0x020000, "gfx1", 0 )
	ROM_LOAD16_BYTE( "b7.u072.5s",  0x000000,   0x010000, CRC(30ec0241) SHA1(a0d0be9458bf97cb9764fb85c988bb816710475e) )
	ROM_LOAD16_BYTE( "b8.u077.5r",  0x000001,   0x010000, CRC(e18b3a75) SHA1(3d52bba8d47d0d9108ee79014fd64d6e856a3fde) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "musha_back-1.u075.4s",   0x000000, 0x100000, CRC(8b7f9219) SHA1(3412b6f8a4fe245e521ddcf185a53f2f4520eb57) )
	ROM_LOAD( "musha_back-2.u0714.2s",   0x100000, 0x080000, CRC(ce61c952) SHA1(52a843c8ba428b121fab933dd3b313b2894d80ac) )

	ROM_REGION32_LE( 0x800000, "gfx3", ROMREGION_ERASEFF ) 
	ROM_LOAD32_WORD( "musha_obj-1.u0811.6f",  0x000000, 0x200000, CRC(45be8029) SHA1(adc164f9dede9a86b96a4d709e9cba7d2ad0e564) )
	ROM_LOAD32_WORD( "musha_obj-2.u082.5f",  0x000002, 0x200000, CRC(cb61c19d) SHA1(151a2ce9c32f3321a974819e9b165dddc31c8153) )

	ROM_REGION( 0x100000, "oki", 0 )  
	ROM_LOAD( "6.c.u105.4a", 0x00000, 0x40000,  CRC(b4a6e899) SHA1(175ab656db3c3258ff10eede89890f62435d2298) )

	ROM_REGION( 0x10000, "pals", 0 )    
	ROM_LOAD( "v3c001.pal.u0310.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c002.tibpal16l8-25.u0322.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c003.ami18cv8p-15.u0619.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c004x.ami18cv8pc-25.u0310.jed", 0x0000, 0x288, NO_DUMP)
ROM_END

ROM_START( zeroteamhc03 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD32_BYTE("1_sel_hc03.bin",   0x000000, 0x40000, CRC(c2f5bba6) SHA1(a99655bef65af96c160c5e83b709597edff2a953) )
	ROM_LOAD32_BYTE("3_sel_hc03.bin",   0x000002, 0x40000, CRC(aa278057) SHA1(dfe1082c1555b196989f3cbbd2b6207947f5059a) )
	ROM_LOAD32_BYTE("seibu__2.u025.6l",   0x000001, 0x40000, CRC(54f3d359) SHA1(869744185746d55c60d2f48eabe384a8499e00fd) )
	ROM_LOAD32_BYTE("4_sel_hc03.bin",   0x000003, 0x40000, CRC(ae82d427) SHA1(1bc5f52791c1508e59d3b2aef04d239657defc20) )

	ROM_REGION( 0x40000, "user2", 0 )  
	ROM_LOAD( "copx-d2.u0313.6n",   0x00000, 0x40000, CRC(a6732ff9) SHA1(c4856ec77869d9098da24b1bb3d7d58bb74b4cda) )

	ROM_REGION( 0x20000, "audiocpu", ROMREGION_ERASEFF )
	ROM_LOAD( "seibu__5.u1110.5b",  0x000000, 0x08000, CRC(7ec1fbc3) SHA1(48299d6530f641b18764cc49e283c347d0918a47) )
	ROM_CONTINUE(0x10000,0x8000)
	ROM_COPY( "audiocpu", 0x000000, 0x018000, 0x08000 )

	ROM_REGION( 0x020000, "gfx1", 0 )
	ROM_LOAD16_BYTE( "seibu__7.u072.5s",   0x000000,   0x010000,   CRC(9f6aa0f0) SHA1(1caad7092c07723d12a07aa363ae2aa69cb6be0d) )
	ROM_LOAD16_BYTE( "seibu__8.u077.5r",   0x000001,   0x010000,   CRC(68f7dddc) SHA1(6938fa974c6ef028751982fdabd6a3820b0d30a8) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "musha_back-1.u075.4s",   0x000000, 0x100000, CRC(8b7f9219) SHA1(3412b6f8a4fe245e521ddcf185a53f2f4520eb57) )
	ROM_LOAD( "musha_back-2.u0714.2s",   0x100000, 0x080000, CRC(ce61c952) SHA1(52a843c8ba428b121fab933dd3b313b2894d80ac) )

	ROM_REGION32_LE( 0x800000, "gfx3", ROMREGION_ERASEFF ) 
	ROM_LOAD32_WORD( "musha_obj-1.u0811.6f",  0x000000, 0x200000, CRC(45be8029) SHA1(adc164f9dede9a86b96a4d709e9cba7d2ad0e564) )
	ROM_LOAD32_WORD( "musha_obj-2.u082.5f",  0x000002, 0x200000, CRC(cb61c19d) SHA1(151a2ce9c32f3321a974819e9b165dddc31c8153) )

	ROM_REGION( 0x100000, "oki", 0 ) 
	ROM_LOAD( "seibu__6.u105.4a", 0x00000, 0x40000,  CRC(48be32b1) SHA1(969d2191a3c46871ee8bf93088b3cecce3eccf0c) )

	ROM_REGION( 0x10000, "pals", 0 ) 
	ROM_LOAD( "v3c001.pal.u0310.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c002.tibpal16l8-25.u0322.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c003.ami18cv8p-15.u0619.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c004x.ami18cv8pc-25.u0310.jed", 0x0000, 0x288, NO_DUMP) 
ROM_END

ROM_START( zeroteamhc04 ) //zeroteamab
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD32_BYTE("seibu__1.u024_hc04.5k", 0x000000, 0x40000, CRC(6b3059ad) SHA1(30e789034a67d094609b6925dbc65fbf2fad5ab9) )
	ROM_LOAD32_BYTE("seibu__3.u023_hc04.6k", 0x000002, 0x40000, CRC(f99181b5) SHA1(c20f1b381bd1b9000a5ff9ead8b27434bc2c5711) )
	ROM_LOAD32_BYTE("seibu__2.u025_hc04.6l", 0x000001, 0x40000, CRC(93c5a0ea) SHA1(55ee214591d83180840273e4e2a6c966b5dd418d) )
	ROM_LOAD32_BYTE("seibu__4.u026_hc04.5l", 0x000003, 0x40000, CRC(a37bae3e) SHA1(e646be91e3031fc78f463927fc12344b116ddd4a) )

	ROM_REGION( 0x40000, "user2", 0 )
	ROM_LOAD( "copx-d2.u0313.6n",   0x00000, 0x40000, CRC(a6732ff9) SHA1(c4856ec77869d9098da24b1bb3d7d58bb74b4cda) )

	ROM_REGION( 0x20000, "audiocpu", ROMREGION_ERASEFF )
	ROM_LOAD( "seibu__5.u1110.5b",  0x000000, 0x08000, CRC(7ec1fbc3) SHA1(48299d6530f641b18764cc49e283c347d0918a47) )
	ROM_CONTINUE(0x10000,0x8000)
	ROM_COPY( "audiocpu", 0x000000, 0x018000, 0x08000 )

	ROM_REGION( 0x020000, "gfx1", 0 )
	ROM_LOAD16_BYTE( "seibu__7.u072.5s",    0x000000,   0x010000,   CRC(9f6aa0f0) SHA1(1caad7092c07723d12a07aa363ae2aa69cb6be0d) )
	ROM_LOAD16_BYTE( "seibu__8.u077.5r",    0x000001,   0x010000,   CRC(68f7dddc) SHA1(6938fa974c6ef028751982fdabd6a3820b0d30a8) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "musha_back-1.u075.4s",   0x000000, 0x100000, CRC(8b7f9219) SHA1(3412b6f8a4fe245e521ddcf185a53f2f4520eb57) )
	ROM_LOAD( "musha_back-2.u0714.2s",   0x100000, 0x080000, CRC(ce61c952) SHA1(52a843c8ba428b121fab933dd3b313b2894d80ac) )

	ROM_REGION32_LE( 0x800000, "gfx3", ROMREGION_ERASEFF )
	ROM_LOAD32_WORD( "musha_obj-1.u0811.6f",  0x000000, 0x200000, CRC(45be8029) SHA1(adc164f9dede9a86b96a4d709e9cba7d2ad0e564) )
	ROM_LOAD32_WORD( "musha_obj-2.u082.5f",  0x000002, 0x200000, CRC(cb61c19d) SHA1(151a2ce9c32f3321a974819e9b165dddc31c8153) )

	ROM_REGION( 0x100000, "oki", 0 )
	ROM_LOAD( "seibu__6.u105.4a", 0x00000, 0x40000,  CRC(48be32b1) SHA1(969d2191a3c46871ee8bf93088b3cecce3eccf0c) )

	ROM_REGION( 0x10000, "pals", 0 )
	ROM_LOAD( "v3c001.pal.u0310.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c002.tibpal16l8-25.u0322.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c003.ami18cv8p-15.u0619.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c004x.ami18cv8pc-25.u0310.jed", 0x0000, 0x288, NO_DUMP)
ROM_END

ROM_START( zeroteamhc05 ) //zeroteama
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD32_BYTE("seibu__1.u024_hc05.5k", 0x000000, 0x40000, CRC(af84c07b) SHA1(e3959b331f36db2b4643533e0695f6842dadea10) )
	ROM_LOAD32_BYTE("seibu__3.u023_hc05.6k", 0x000002, 0x40000, CRC(89642d55) SHA1(de7bb4a54df1d96c0fa3b99399b69a6bd02e18c1) )
	ROM_LOAD32_BYTE("seibu__2.u025_hc05.6l", 0x000001, 0x40000, CRC(29214880) SHA1(9f617db4df69852ae202a13cda86f21fc013a367) )
	ROM_LOAD32_BYTE("seibu__4.u026_hc05.5l", 0x000003, 0x40000, CRC(62a6acad) SHA1(bd643a256f92410d6473077d0a1cb8d0092148ae) )

	ROM_REGION( 0x40000, "user2", 0 )
	ROM_LOAD( "copx-d2.u0313.6n",   0x00000, 0x40000, CRC(a6732ff9) SHA1(c4856ec77869d9098da24b1bb3d7d58bb74b4cda) )

	ROM_REGION( 0x20000, "audiocpu", ROMREGION_ERASEFF )
	ROM_LOAD( "seibu__5.u1110.5b",  0x000000, 0x08000, CRC(7ec1fbc3) SHA1(48299d6530f641b18764cc49e283c347d0918a47) )
	ROM_CONTINUE(0x10000,0x8000)
	ROM_COPY( "audiocpu", 0x000000, 0x018000, 0x08000 )

	ROM_REGION( 0x020000, "gfx1", 0 )
	ROM_LOAD16_BYTE( "seibu__7.u072.5s",    0x000000,   0x010000,   CRC(9f6aa0f0) SHA1(1caad7092c07723d12a07aa363ae2aa69cb6be0d) )
	ROM_LOAD16_BYTE( "seibu__8.u077.5r",    0x000001,   0x010000,   CRC(68f7dddc) SHA1(6938fa974c6ef028751982fdabd6a3820b0d30a8) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "musha_back-1.u075.4s",   0x000000, 0x100000, CRC(8b7f9219) SHA1(3412b6f8a4fe245e521ddcf185a53f2f4520eb57) )
	ROM_LOAD( "musha_back-2.u0714.2s",   0x100000, 0x080000, CRC(ce61c952) SHA1(52a843c8ba428b121fab933dd3b313b2894d80ac) )

	ROM_REGION32_LE( 0x800000, "gfx3", ROMREGION_ERASEFF )
	ROM_LOAD32_WORD( "musha_obj-1.u0811.6f",  0x000000, 0x200000, CRC(45be8029) SHA1(adc164f9dede9a86b96a4d709e9cba7d2ad0e564) )
	ROM_LOAD32_WORD( "musha_obj-2.u082.5f",  0x000002, 0x200000, CRC(cb61c19d) SHA1(151a2ce9c32f3321a974819e9b165dddc31c8153) )

	ROM_REGION( 0x100000, "oki", 0 )
	ROM_LOAD( "seibu__6.u105.4a", 0x00000, 0x40000,  CRC(48be32b1) SHA1(969d2191a3c46871ee8bf93088b3cecce3eccf0c) )

	ROM_REGION( 0x10000, "pals", 0 )
	ROM_LOAD( "v3c001.pal.u0310.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c002.tibpal16l8-25.u0322.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c003.ami18cv8p-15.u0619.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c004x.ami18cv8pc-25.u0310.jed", 0x0000, 0x288, NO_DUMP)
ROM_END

ROM_START( zeroteamhc06 ) //zeroteamd
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD32_BYTE("seibu__1.u024_hc06.5k", 0x000000, 0x40000, CRC(e855b00e) SHA1(568006356a8e60d2b8357ed41497705b689dfa8b) )
	ROM_LOAD32_BYTE("seibu__3.u023_hc06.6k", 0x000002, 0x40000, CRC(5cf20dc1) SHA1(3ede16592fe6ef46be07b0aa973ceea075afeb76) )
	ROM_LOAD32_BYTE("seibu__2.u025_hc06.6l", 0x000001, 0x40000, CRC(70369ad4) SHA1(291bff1e9bb957d126dd5d8b17b0f2b06e9cfd07) )
	ROM_LOAD32_BYTE("seibu__4.u026_hc06.5l", 0x000003, 0x40000, CRC(b0d0ad9a) SHA1(8c78af8791f776976b7a45e2b6807da4a001531f) )

	ROM_REGION( 0x40000, "user2", 0 )
	ROM_LOAD( "copx-d2.u0313.6n",   0x00000, 0x40000, CRC(a6732ff9) SHA1(c4856ec77869d9098da24b1bb3d7d58bb74b4cda) )

	ROM_REGION( 0x20000, "audiocpu", ROMREGION_ERASEFF )
	ROM_LOAD( "seibu__5.u1110.5b",  0x000000, 0x08000, CRC(7ec1fbc3) SHA1(48299d6530f641b18764cc49e283c347d0918a47) )
	ROM_CONTINUE(0x10000,0x8000)
	ROM_COPY( "audiocpu", 0x000000, 0x018000, 0x08000 )

	ROM_REGION( 0x020000, "gfx1", 0 )
	ROM_LOAD16_BYTE( "seibu__7.u072.5s",    0x000000,   0x010000,   CRC(9f6aa0f0) SHA1(1caad7092c07723d12a07aa363ae2aa69cb6be0d) )
	ROM_LOAD16_BYTE( "seibu__8.u077.5r",    0x000001,   0x010000,   CRC(68f7dddc) SHA1(6938fa974c6ef028751982fdabd6a3820b0d30a8) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "musha_back-1.u075.4s",   0x000000, 0x100000, CRC(8b7f9219) SHA1(3412b6f8a4fe245e521ddcf185a53f2f4520eb57) )
	ROM_LOAD( "musha_back-2.u0714.2s",   0x100000, 0x080000, CRC(ce61c952) SHA1(52a843c8ba428b121fab933dd3b313b2894d80ac) )

	ROM_REGION32_LE( 0x800000, "gfx3", ROMREGION_ERASEFF )
	ROM_LOAD32_WORD( "musha_obj-1.u0811.6f",  0x000000, 0x200000, CRC(45be8029) SHA1(adc164f9dede9a86b96a4d709e9cba7d2ad0e564) )
	ROM_LOAD32_WORD( "musha_obj-2.u082.5f",  0x000002, 0x200000, CRC(cb61c19d) SHA1(151a2ce9c32f3321a974819e9b165dddc31c8153) )

	ROM_REGION( 0x100000, "oki", 0 )
	ROM_LOAD( "seibu__6.u105.4a", 0x00000, 0x40000,  CRC(48be32b1) SHA1(969d2191a3c46871ee8bf93088b3cecce3eccf0c) )

	ROM_REGION( 0x10000, "pals", 0 )
	ROM_LOAD( "v3c001.pal.u0310.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c002.tibpal16l8-25.u0322.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c003.ami18cv8p-15.u0619.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c004x.ami18cv8pc-25.u0310.jed", 0x0000, 0x288, NO_DUMP)
ROM_END

ROM_START( zeroteamhc07 ) //zeroteama
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD32_BYTE("seibu__1.u024_hc07.5k", 0x000000, 0x40000, CRC(0ac6ad22) SHA1(96dd8288f25d9dc835c2d83c2c98124ce0daf331) )
	ROM_LOAD32_BYTE("seibu__3.u023_hc07.6k", 0x000002, 0x40000, CRC(8912a96b) SHA1(5f2013206d569a42b2173aa6f21426de2a91a7a4) )
	ROM_LOAD32_BYTE("seibu__2.u025_hc07.6l", 0x000001, 0x40000, CRC(b142d2a9) SHA1(c9d5290707756714035192163f329f6a23c3aea0) )
	ROM_LOAD32_BYTE("seibu__4.u026_hc07.5l", 0x000003, 0x40000, CRC(07fafea5) SHA1(539808b1a360c84bcf1dd3773934d094e7339b4d) )

	ROM_REGION( 0x40000, "user2", 0 )
	ROM_LOAD( "copx-d2.u0313.6n",   0x00000, 0x40000, CRC(a6732ff9) SHA1(c4856ec77869d9098da24b1bb3d7d58bb74b4cda) )

	ROM_REGION( 0x20000, "audiocpu", ROMREGION_ERASEFF )
	ROM_LOAD( "seibu__5.u1110.5b",  0x000000, 0x08000, CRC(7ec1fbc3) SHA1(48299d6530f641b18764cc49e283c347d0918a47) )
	ROM_CONTINUE(0x10000,0x8000)
	ROM_COPY( "audiocpu", 0x000000, 0x018000, 0x08000 )

	ROM_REGION( 0x020000, "gfx1", 0 )
	ROM_LOAD16_BYTE( "seibu__7.u072.5s",    0x000000,   0x010000,   CRC(9f6aa0f0) SHA1(1caad7092c07723d12a07aa363ae2aa69cb6be0d) )
	ROM_LOAD16_BYTE( "seibu__8.u077.5r",    0x000001,   0x010000,   CRC(68f7dddc) SHA1(6938fa974c6ef028751982fdabd6a3820b0d30a8) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "musha_back-1.u075.4s",   0x000000, 0x100000, CRC(8b7f9219) SHA1(3412b6f8a4fe245e521ddcf185a53f2f4520eb57) )
	ROM_LOAD( "musha_back-2.u0714.2s",   0x100000, 0x080000, CRC(ce61c952) SHA1(52a843c8ba428b121fab933dd3b313b2894d80ac) )

	ROM_REGION32_LE( 0x800000, "gfx3", ROMREGION_ERASEFF )
	ROM_LOAD32_WORD( "musha_obj-1.u0811.6f",  0x000000, 0x200000, CRC(45be8029) SHA1(adc164f9dede9a86b96a4d709e9cba7d2ad0e564) )
	ROM_LOAD32_WORD( "musha_obj-2.u082.5f",  0x000002, 0x200000, CRC(cb61c19d) SHA1(151a2ce9c32f3321a974819e9b165dddc31c8153) )

	ROM_REGION( 0x100000, "oki", 0 )
	ROM_LOAD( "seibu__6.u105.4a", 0x00000, 0x40000,  CRC(48be32b1) SHA1(969d2191a3c46871ee8bf93088b3cecce3eccf0c) )

	ROM_REGION( 0x10000, "pals", 0 )
	ROM_LOAD( "v3c001.pal.u0310.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c002.tibpal16l8-25.u0322.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c003.ami18cv8p-15.u0619.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c004x.ami18cv8pc-25.u0310.jed", 0x0000, 0x288, NO_DUMP)
ROM_END

ROM_START( zeroteamhc08 ) //zeroteamd
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD32_BYTE("seibu__1.u024_hc08.5k", 0x000000, 0x40000, CRC(8a5148ee) SHA1(387065556be246b9d05b78f7ba28166635de1e49) )
	ROM_LOAD32_BYTE("seibu__3.u023_hc08.6k", 0x000002, 0x40000, CRC(b228a434) SHA1(b3051a916a5714778c9819d5a724c69316fb104d) )
	ROM_LOAD32_BYTE("seibu__2.u025_hc08.6l", 0x000001, 0x40000, CRC(8d53cacb) SHA1(7cdf11bd10b4b1844f24ec78232c78d394edab0e) )
	ROM_LOAD32_BYTE("seibu__4.u026_hc08.5l", 0x000003, 0x40000, CRC(84e0091f) SHA1(b31c8586f937e55ef99bb8cf20d70195e1d63c87) )

	ROM_REGION( 0x40000, "user2", 0 )
	ROM_LOAD( "copx-d2.u0313.6n",   0x00000, 0x40000, CRC(a6732ff9) SHA1(c4856ec77869d9098da24b1bb3d7d58bb74b4cda) )

	ROM_REGION( 0x20000, "audiocpu", ROMREGION_ERASEFF )
	ROM_LOAD( "seibu__5.u1110.5b",  0x000000, 0x08000, CRC(7ec1fbc3) SHA1(48299d6530f641b18764cc49e283c347d0918a47) )
	ROM_CONTINUE(0x10000,0x8000)
	ROM_COPY( "audiocpu", 0x000000, 0x018000, 0x08000 )

	ROM_REGION( 0x020000, "gfx1", 0 )
	ROM_LOAD16_BYTE( "seibu__7.u072.5s",    0x000000,   0x010000,   CRC(9f6aa0f0) SHA1(1caad7092c07723d12a07aa363ae2aa69cb6be0d) )
	ROM_LOAD16_BYTE( "seibu__8.u077.5r",    0x000001,   0x010000,   CRC(68f7dddc) SHA1(6938fa974c6ef028751982fdabd6a3820b0d30a8) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "musha_back-1.u075.4s",   0x000000, 0x100000, CRC(8b7f9219) SHA1(3412b6f8a4fe245e521ddcf185a53f2f4520eb57) )
	ROM_LOAD( "musha_back-2.u0714.2s",   0x100000, 0x080000, CRC(ce61c952) SHA1(52a843c8ba428b121fab933dd3b313b2894d80ac) )

	ROM_REGION32_LE( 0x800000, "gfx3", ROMREGION_ERASEFF )
	ROM_LOAD32_WORD( "musha_obj-1.u0811.6f",  0x000000, 0x200000, CRC(45be8029) SHA1(adc164f9dede9a86b96a4d709e9cba7d2ad0e564) )
	ROM_LOAD32_WORD( "musha_obj-2.u082.5f",  0x000002, 0x200000, CRC(cb61c19d) SHA1(151a2ce9c32f3321a974819e9b165dddc31c8153) )

	ROM_REGION( 0x100000, "oki", 0 )
	ROM_LOAD( "seibu__6.u105.4a", 0x00000, 0x40000,  CRC(48be32b1) SHA1(969d2191a3c46871ee8bf93088b3cecce3eccf0c) )

	ROM_REGION( 0x10000, "pals", 0 )
	ROM_LOAD( "v3c001.pal.u0310.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c002.tibpal16l8-25.u0322.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c003.ami18cv8p-15.u0619.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c004x.ami18cv8pc-25.u0310.jed", 0x0000, 0x288, NO_DUMP)
ROM_END

ROM_START( zeroteamhc09 ) //zeroteama
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD32_BYTE("seibu__1.u024_hc09.5k", 0x000000, 0x40000, CRC(5d107499) SHA1(1f5f3ffb4e61a221cfe1e8e05c8e1602f0d95101) )
	ROM_LOAD32_BYTE("seibu__3.u023_hc09.6k", 0x000002, 0x40000, CRC(464e6fd8) SHA1(2304d1f3a679752f5cc6232d22dd26f98bf7402f) )
	ROM_LOAD32_BYTE("seibu__2.u025_hc09.6l", 0x000001, 0x40000, CRC(4b374c80) SHA1(61c86cb57b798865d8a15d9c2939b3dd7576c0c3) )
	ROM_LOAD32_BYTE("seibu__4.u026_hc09.5l", 0x000003, 0x40000, CRC(d6b3e661) SHA1(636f01b7d5473c47367ec780ab537429d617321f) )

	ROM_REGION( 0x40000, "user2", 0 )
	ROM_LOAD( "copx-d2.u0313.6n",   0x00000, 0x40000, CRC(a6732ff9) SHA1(c4856ec77869d9098da24b1bb3d7d58bb74b4cda) )

	ROM_REGION( 0x20000, "audiocpu", ROMREGION_ERASEFF )
	ROM_LOAD( "seibu__5.u1110.5b",  0x000000, 0x08000, CRC(7ec1fbc3) SHA1(48299d6530f641b18764cc49e283c347d0918a47) )
	ROM_CONTINUE(0x10000,0x8000)
	ROM_COPY( "audiocpu", 0x000000, 0x018000, 0x08000 )

	ROM_REGION( 0x020000, "gfx1", 0 )
	ROM_LOAD16_BYTE( "seibu__7.u072.5s",    0x000000,   0x010000,   CRC(9f6aa0f0) SHA1(1caad7092c07723d12a07aa363ae2aa69cb6be0d) )
	ROM_LOAD16_BYTE( "seibu__8.u077.5r",    0x000001,   0x010000,   CRC(68f7dddc) SHA1(6938fa974c6ef028751982fdabd6a3820b0d30a8) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "musha_back-1.u075.4s",   0x000000, 0x100000, CRC(8b7f9219) SHA1(3412b6f8a4fe245e521ddcf185a53f2f4520eb57) )
	ROM_LOAD( "musha_back-2.u0714.2s",   0x100000, 0x080000, CRC(ce61c952) SHA1(52a843c8ba428b121fab933dd3b313b2894d80ac) )

	ROM_REGION32_LE( 0x800000, "gfx3", ROMREGION_ERASEFF )
	ROM_LOAD32_WORD( "musha_obj-1.u0811.6f",  0x000000, 0x200000, CRC(45be8029) SHA1(adc164f9dede9a86b96a4d709e9cba7d2ad0e564) )
	ROM_LOAD32_WORD( "musha_obj-2.u082.5f",  0x000002, 0x200000, CRC(cb61c19d) SHA1(151a2ce9c32f3321a974819e9b165dddc31c8153) )

	ROM_REGION( 0x100000, "oki", 0 )
	ROM_LOAD( "seibu__6.u105.4a", 0x00000, 0x40000,  CRC(48be32b1) SHA1(969d2191a3c46871ee8bf93088b3cecce3eccf0c) )

	ROM_REGION( 0x10000, "pals", 0 )
	ROM_LOAD( "v3c001.pal.u0310.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c002.tibpal16l8-25.u0322.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c003.ami18cv8p-15.u0619.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c004x.ami18cv8pc-25.u0310.jed", 0x0000, 0x288, NO_DUMP)
ROM_END

ROM_START( zeroteamhc10 ) //zeroteamd
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD32_BYTE("seibu__1.u024_hc10.5k", 0x000000, 0x40000, CRC(269f91f2) SHA1(bd736a81bb2f097851367d89a26db0949f4f80d0) )
	ROM_LOAD32_BYTE("seibu__3.u023_hc10.6k", 0x000002, 0x40000, CRC(c2a3b7e0) SHA1(1007c4444f7a66cd3922f2310be6347ba2f107a2) )
	ROM_LOAD32_BYTE("seibu__2.u025_hc10.6l", 0x000001, 0x40000, CRC(e7efb0ef) SHA1(add26f6ad8c616bc03fc554c1d9d6ee871a7346a) )
	ROM_LOAD32_BYTE("seibu__4.u026_hc10.5l", 0x000003, 0x40000, CRC(976671d3) SHA1(92968a14969941c5354bd84032acc7f1f293b48d) )

	ROM_REGION( 0x40000, "user2", 0 )
	ROM_LOAD( "copx-d2.u0313.6n",   0x00000, 0x40000, CRC(a6732ff9) SHA1(c4856ec77869d9098da24b1bb3d7d58bb74b4cda) )

	ROM_REGION( 0x20000, "audiocpu", ROMREGION_ERASEFF )
	ROM_LOAD( "seibu__5.u1110.5b",  0x000000, 0x08000, CRC(7ec1fbc3) SHA1(48299d6530f641b18764cc49e283c347d0918a47) )
	ROM_CONTINUE(0x10000,0x8000)
	ROM_COPY( "audiocpu", 0x000000, 0x018000, 0x08000 )

	ROM_REGION( 0x020000, "gfx1", 0 )
	ROM_LOAD16_BYTE( "seibu__7.u072.5s",    0x000000,   0x010000,   CRC(9f6aa0f0) SHA1(1caad7092c07723d12a07aa363ae2aa69cb6be0d) )
	ROM_LOAD16_BYTE( "seibu__8.u077.5r",    0x000001,   0x010000,   CRC(68f7dddc) SHA1(6938fa974c6ef028751982fdabd6a3820b0d30a8) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "musha_back-1.u075.4s",   0x000000, 0x100000, CRC(8b7f9219) SHA1(3412b6f8a4fe245e521ddcf185a53f2f4520eb57) )
	ROM_LOAD( "musha_back-2.u0714.2s",   0x100000, 0x080000, CRC(ce61c952) SHA1(52a843c8ba428b121fab933dd3b313b2894d80ac) )

	ROM_REGION32_LE( 0x800000, "gfx3", ROMREGION_ERASEFF )
	ROM_LOAD32_WORD( "musha_obj-1.u0811.6f",  0x000000, 0x200000, CRC(45be8029) SHA1(adc164f9dede9a86b96a4d709e9cba7d2ad0e564) )
	ROM_LOAD32_WORD( "musha_obj-2.u082.5f",  0x000002, 0x200000, CRC(cb61c19d) SHA1(151a2ce9c32f3321a974819e9b165dddc31c8153) )

	ROM_REGION( 0x100000, "oki", 0 )
	ROM_LOAD( "seibu__6.u105.4a", 0x00000, 0x40000,  CRC(48be32b1) SHA1(969d2191a3c46871ee8bf93088b3cecce3eccf0c) )

	ROM_REGION( 0x10000, "pals", 0 )
	ROM_LOAD( "v3c001.pal.u0310.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c002.tibpal16l8-25.u0322.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c003.ami18cv8p-15.u0619.jed", 0x0000, 0x288, NO_DUMP)
	ROM_LOAD( "v3c004x.ami18cv8pc-25.u0310.jed", 0x0000, 0x288, NO_DUMP)
ROM_END

/*    YEAR  NAME              PARENT            MACHINE             INPUT                       INIT           MONITOR COMPANY       FULLNAME FLAGS */
// Hack/Homebrow
GAME( 2022, zeroteamhc01,     zeroteam,         zeroteam,         zeroteam, raiden2_state, init_zeroteam,      ROT0,  "hack",        "Zero Team USA (Special Attack Team Question Mark Version 2022-05-11)", MACHINE_SUPPORTS_SAVE )
GAME( 1993, zeroteamhc02,     zeroteam,         zeroteam,         zeroteam, raiden2_state, init_zeroteam,      ROT0,  "hack",        "Zero Team (Special Attack)", MACHINE_SUPPORTS_SAVE )
GAME( 2018, zeroteamhc03,     zeroteam,         zeroteam,         zeroteam, raiden2_state, init_zeroteam,      ROT0,  "hack",        "Zero Team Selection (Enhanced Version 2018-02-19)", MACHINE_SUPPORTS_SAVE )
GAME( 2021, zeroteamhc04,     zeroteam,         zeroteam,         zeroteam, raiden2_state, init_zeroteam,      ROT0,  "hack",        "Zero Team USA (Question Mark Version 2021-12-08)", MACHINE_SUPPORTS_SAVE )
GAME( 2022, zeroteamhc05,     zeroteam,         zeroteam,         zeroteam, raiden2_state, init_zeroteam,      ROT0,  "hack",        "Zero Team USA (Unlimited Cannon Version 2022-02-20)", MACHINE_SUPPORTS_SAVE )
GAME( 2022, zeroteamhc06,     zeroteam,         zeroteam,         zeroteam, raiden2_state, init_zeroteam,      ROT0,  "hack",        "Zero Team USA (Youtian Version 2022-02-20)", MACHINE_SUPPORTS_SAVE )
GAME( 2022, zeroteamhc07,     zeroteam,         zeroteam,         zeroteam, raiden2_state, init_zeroteam,      ROT0,  "hack",        "Zero Team USA (Unlimited Cannon Version 2022-02-07)", MACHINE_SUPPORTS_SAVE )
GAME( 2022, zeroteamhc08,     zeroteam,         zeroteam,         zeroteam, raiden2_state, init_zeroteam,      ROT0,  "hack",        "Zero Team USA (Youtian Version 2022-02-07)", MACHINE_SUPPORTS_SAVE )
GAME( 2022, zeroteamhc09,     zeroteam,         zeroteam,         zeroteam, raiden2_state, init_zeroteam,      ROT0,  "hack",        "Zero Team USA (Unlimited Cannon Version 2021-12-17)", MACHINE_SUPPORTS_SAVE )
GAME( 2022, zeroteamhc10,     zeroteam,         zeroteam,         zeroteam, raiden2_state, init_zeroteam,      ROT0,  "hack",        "Zero Team USA (Youtian Version 2021-12-17)", MACHINE_SUPPORTS_SAVE )
