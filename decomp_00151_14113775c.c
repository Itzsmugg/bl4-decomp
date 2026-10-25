// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14113775c FUN_14113775c body=17537 status=ok
// SIG undefined FUN_14113775c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14113775c(longlong *param_1,double *param_2,char param_3,double param_4,
                       undefined1 param_5)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined4 extraout_EAX;
  undefined4 uVar8;
  ulonglong uVar9;
  code **ppcVar10;
  code **ppcVar11;
  undefined8 uVar12;
  undefined ***pppuVar13;
  undefined *puVar14;
  double *pdVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  code **ppcVar23;
  int *piVar24;
  uint uVar25;
  undefined *puVar26;
  longlong *plVar27;
  byte bVar28;
  int iVar29;
  uint *puVar30;
  longlong lVar31;
  undefined1 uVar32;
  longlong lVar33;
  byte *pbVar34;
  bool bVar35;
  ulonglong uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar64;
  double dVar65;
  double dVar67;
  undefined1 auVar66 [16];
  double dVar68;
  double dVar69;
  double dVar78;
  double dVar79;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  double dVar80;
  double dVar84;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  double dVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  double dVar89;
  code *pcVar90;
  undefined1 auVar91 [16];
  double dVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  double dVar95;
  double dVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  double dVar99;
  double dVar100;
  undefined1 auStack_4f8 [32];
  undefined8 local_4d8;
  uint local_4d0;
  undefined4 local_4c8;
  undefined8 local_4c0;
  wchar_t *local_4b8;
  code *local_4b0;
  undefined1 *local_4a8;
  code **local_4a0;
  code *local_498;
  code *local_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  code *local_448;
  double dStack_440;
  code *local_438;
  double dStack_430;
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined ***local_408;
  double dStack_400;
  code *local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  byte local_3d1;
  code *local_3d0;
  code *local_3c8;
  double dStack_3c0;
  undefined ***local_3b8;
  code *local_3a8;
  double dStack_3a0;
  double local_398;
  undefined8 uStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  undefined8 uStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  undefined8 uStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  undefined8 uStack_330;
  code **local_2e8;
  undefined8 local_2e0;
  code *local_2d8;
  double dStack_2d0;
  undefined ***local_2c8;
  double dStack_2c0;
  undefined **local_2b8;
  longlong *local_2b0;
  byte *local_2a8;
  code *local_298;
  double dStack_290;
  undefined ***local_288;
  undefined8 uStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  code **local_1d8;
  undefined8 local_1d0;
  code *local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_188;
  double local_180;
  double local_178;
  double local_168;
  double dStack_160;
  undefined ***local_158;
  code **local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  bVar28 = *(byte *)((longlong)param_1 + 100);
  uVar36 = CONCAT71((int7)(local_f0 >> 8),bVar28);
  if ((bVar28 & 1) != 0) goto LAB_14113ab72;
  *(byte *)((longlong)param_1 + 100) = bVar28 | 1;
  lVar33 = param_1[0x39];
  pdVar15 = (double *)(lVar33 + 0x240);
  if (lVar33 == 0) {
    pdVar15 = param_2;
  }
  ppcVar23 = &local_438;
  for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
    *ppcVar23 = (code *)*pdVar15;
    pdVar15 = pdVar15 + 1;
    ppcVar23 = ppcVar23 + 1;
  }
  if ((lVar33 == 0) || ((*(byte *)(param_1 + 0x69) & 1) == 0)) {
LAB_14113820a:
    if (lVar33 != 0 && param_3 == '\0') {
      if (param_1 == (longlong *)0x0) {
        uVar19 = 0;
        uVar16 = 0;
      }
      else {
        uVar19 = *(uint *)((longlong)param_1 + 0xc);
        if ((int)uVar19 < DAT_14c9647dc) {
          lVar33 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
        }
        else {
          lVar33 = 0;
        }
        uVar16 = *(uint *)(lVar33 + 0x10);
        if (*(uint *)(lVar33 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          uVar25 = DAT_14c964868 + 1;
          bVar35 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar35) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar25);
          }
          LOCK();
          uVar16 = *(uint *)(lVar33 + 0x10);
          bVar35 = uVar16 == 0;
          if (bVar35) {
            *(uint *)(lVar33 + 0x10) = uVar25;
            uVar16 = 0;
          }
          UNLOCK();
          if (bVar35) {
            uVar16 = uVar25;
          }
        }
      }
      local_1c8 = (code *)CONCAT44(uVar16,uVar19);
      uVar25 = (uint)&local_1c8;
      iVar7 = FUN_1417b366c(uVar16 ^ uVar19);
      uVar16 = 0;
      lVar33 = 0;
      if (iVar7 != -1) {
        lVar33 = (longlong)iVar7 * 0x80 + DAT_14cac9610;
      }
      if (lVar33 != 0) {
        if (param_1 != (longlong *)0x0) {
          uVar16 = *(uint *)((longlong)param_1 + 0xc);
          if ((int)uVar16 < DAT_14c9647dc) {
            uVar25 = uVar16 >> 0x10;
            lVar22 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)uVar25 * 8);
          }
          else {
            lVar22 = 0;
          }
          if (*(int *)(lVar22 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar18 = DAT_14c964868 + 1;
            bVar35 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar35) {
              uVar25 = 0x23d;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar18);
            }
            LOCK();
            if (*(int *)(lVar22 + 0x10) == 0) {
              *(int *)(lVar22 + 0x10) = iVar18;
            }
            UNLOCK();
          }
        }
        uVar8 = FUN_140b12950();
        uVar36 = DAT_149931180;
        uVar9 = DAT_149931180._8_8_;
        auVar70._8_8_ =
             -(ulonglong)
              (9.999999747378752e-05 <
              (double)((ulonglong)(*(double *)(lVar33 + 0x38) - param_2[5]) & uVar9));
        auVar70._0_8_ =
             -(ulonglong)
              (9.999999747378752e-05 <
              (double)((ulonglong)(*(double *)(lVar33 + 0x30) - param_2[4]) & uVar36));
        uVar19 = movmskpd(uVar8,auVar70);
        auVar61._8_8_ =
             -(ulonglong)
              (9.999999747378752e-05 <
              (double)((ulonglong)(*(double *)(lVar33 + 0x48) - param_2[7]) & uVar9));
        auVar61._0_8_ =
             -(ulonglong)
              (9.999999747378752e-05 <
              (double)((ulonglong)(*(double *)(lVar33 + 0x40) - param_2[6]) & uVar36));
        iVar7 = movmskpd(uVar16,auVar61);
        uVar16 = iVar7 << 2 | uVar19;
        if (uVar16 == 0) {
          auVar93._8_8_ =
               -(ulonglong)
                (9.999999747378752e-05 <
                (double)((ulonglong)(*(double *)(lVar33 + 0x18) - param_2[1]) & uVar9));
          auVar93._0_8_ =
               -(ulonglong)
                (9.999999747378752e-05 <
                (double)((ulonglong)(*(double *)(lVar33 + 0x10) - *param_2) & uVar36));
          uVar19 = movmskpd(uVar19,auVar93);
          auVar88._8_8_ =
               -(ulonglong)
                (9.999999747378752e-05 <
                (double)((ulonglong)(*(double *)(lVar33 + 0x28) - param_2[3]) & uVar9));
          auVar88._0_8_ =
               -(ulonglong)
                (9.999999747378752e-05 <
                (double)((ulonglong)(*(double *)(lVar33 + 0x20) - param_2[2]) & uVar36));
          iVar7 = movmskpd(0,auVar88);
          uVar16 = iVar7 << 2 | uVar19;
          if (uVar16 != 0) {
            auVar73._8_8_ =
                 -(ulonglong)
                  (9.999999747378752e-05 <
                  (double)((ulonglong)(*(double *)(lVar33 + 0x18) + param_2[1]) & uVar9));
            auVar73._0_8_ =
                 -(ulonglong)
                  (9.999999747378752e-05 <
                  (double)((ulonglong)(*(double *)(lVar33 + 0x10) + *param_2) & uVar36));
            uVar19 = movmskpd(uVar19,auVar73);
            auVar66._8_8_ =
                 -(ulonglong)
                  (9.999999747378752e-05 <
                  (double)((ulonglong)(*(double *)(lVar33 + 0x28) + param_2[3]) & uVar9));
            auVar66._0_8_ =
                 -(ulonglong)
                  (9.999999747378752e-05 <
                  (double)((ulonglong)(*(double *)(lVar33 + 0x20) + param_2[2]) & uVar36));
            iVar7 = movmskpd(uVar16,auVar66);
            uVar16 = iVar7 << 2 | uVar19;
            if (uVar16 != 0) goto LAB_14113834e;
          }
          auVar74._8_8_ =
               -(ulonglong)
                (9.999999747378752e-05 <
                (double)((ulonglong)(*(double *)(lVar33 + 0x58) - param_2[9]) & uVar9));
          auVar74._0_8_ =
               -(ulonglong)
                (9.999999747378752e-05 <
                (double)((ulonglong)(*(double *)(lVar33 + 0x50) - param_2[8]) & uVar36));
          uVar16 = movmskpd(uVar19,auVar74);
          auVar58._8_8_ =
               -(ulonglong)
                (9.999999747378752e-05 <
                (double)((ulonglong)(*(double *)(lVar33 + 0x68) - param_2[0xb]) & uVar9));
          auVar58._0_8_ =
               -(ulonglong)
                (9.999999747378752e-05 <
                (double)((ulonglong)(*(double *)(lVar33 + 0x60) - param_2[10]) & uVar36));
          iVar7 = movmskpd(0,auVar58);
          uVar16 = iVar7 << 2 | uVar16;
          if (uVar16 == 0) goto LAB_1411394f0;
        }
LAB_14113834e:
        lVar22 = param_1[0x39];
        auVar86 = *(undefined1 (*) [16])(lVar33 + 0x50);
        auVar49 = *(undefined1 (*) [16])(lVar33 + 0x60);
        dVar69 = (double)(auVar86._0_8_ & uVar36);
        dVar79 = (double)(auVar86._8_8_ & uVar9);
        auVar71._8_8_ = -(ulonglong)(9.99999993922529e-09 < dVar79);
        auVar71._0_8_ = -(ulonglong)(9.99999993922529e-09 < dVar69);
        uVar16 = movmskpd(uVar16,auVar71);
        auVar72._8_8_ = -(ulonglong)(9.99999993922529e-09 < (double)(auVar49._8_8_ & uVar9));
        auVar72._0_8_ = -(ulonglong)(9.99999993922529e-09 < (double)(auVar49._0_8_ & uVar36));
        iVar7 = movmskpd(uVar25,auVar72);
        uVar19 = iVar7 << 2 | uVar16;
        auVar87 = _DAT_14c8464d0;
        auVar91 = _DAT_14c8464c0;
        dVar85 = DAT_14c846490;
        dVar37 = DAT_14c846498;
        dVar38 = DAT_14c846480;
        dVar39 = DAT_14c846488;
        dVar68 = DAT_14c8464a0;
        dVar78 = DAT_14c8464a8;
        dVar80 = DAT_14c8464b0;
        dVar84 = DAT_14c8464b8;
        if (uVar19 != 0) {
          auVar53 = divpd(_DAT_149934d80,auVar86);
          auVar86 = divpd(ZEXT816(0x3ff0000000000000),auVar49);
          auVar91._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < dVar69) & auVar53._0_8_);
          auVar91._8_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < dVar79) & auVar53._8_8_);
          dVar80 = (double)(-(ulonglong)(9.99999993922529e-09 < (double)(auVar49._0_8_ & uVar36)) &
                           auVar86._0_8_);
          auVar87._8_8_ = 0;
          auVar87._0_8_ = dVar80;
          dVar38 = -*(double *)(lVar33 + 0x10);
          dVar39 = -*(double *)(lVar33 + 0x18);
          dVar85 = *(double *)(lVar33 + 0x20) * -1.0;
          dVar37 = *(double *)(lVar33 + 0x28) * 1.0;
          dVar68 = *(double *)(lVar33 + 0x30) * auVar91._0_8_;
          dVar78 = *(double *)(lVar33 + 0x38) * auVar91._8_8_;
          dVar80 = *(double *)(lVar33 + 0x40) * dVar80;
          dVar84 = dVar78 * dVar38 - dVar68 * dVar39;
          dVar69 = dVar80 * dVar39 - dVar78 * dVar85;
          dVar79 = dVar68 * dVar85 - dVar38 * dVar80;
          dVar69 = dVar69 + dVar69;
          dVar79 = dVar79 + dVar79;
          dVar84 = dVar84 + dVar84;
          dVar68 = 0.0 - ((dVar84 * dVar39 - dVar79 * dVar85) + dVar37 * dVar69 + dVar68);
          dVar78 = 0.0 - (dVar84 * *(double *)(lVar33 + 0x10) + dVar85 * dVar69 +
                         dVar37 * dVar79 + dVar78);
          dVar80 = 0.0 - (dVar37 * dVar84 + dVar80 + (dVar79 * dVar38 - dVar69 * dVar39));
          dVar84 = 0.0;
        }
        auVar86 = *(undefined1 (*) [16])(lVar22 + 0x280);
        dVar69 = auVar86._0_8_;
        dVar79 = auVar86._8_8_;
        local_458 = *(undefined1 (*) [16])(lVar22 + 0x290);
        auVar86 = minpd(auVar86,auVar91);
        auVar49 = minpd(local_458,auVar87);
        auVar41._8_8_ = -(ulonglong)(auVar86._8_8_ < 0.0);
        auVar41._0_8_ = -(ulonglong)(auVar86._0_8_ < 0.0);
        iVar7 = movmskpd(uVar16,auVar41);
        auVar50._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
        auVar50._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
        uVar16 = movmskpd(uVar19,auVar50);
        dVar48 = auVar91._0_8_;
        dVar57 = auVar91._8_8_;
        local_488 = auVar87._0_8_;
        dStack_480 = auVar87._8_8_;
        if ((uVar16 & 0x3fffffff) == 0 && iVar7 == 0) {
          dVar92 = *(double *)(lVar22 + 0x240);
          dVar63 = *(double *)(lVar22 + 0x248);
          dVar64 = *(double *)(lVar22 + 0x250);
          dVar65 = *(double *)(lVar22 + 600);
          dVar67 = dVar63 * dVar85 * -1.0 +
                   dVar64 * dVar39 + dVar38 * dVar65 * 1.0 + dVar37 * dVar92;
          dVar89 = dVar92 * dVar85 * 1.0 +
                   dVar65 * dVar39 + dVar38 * dVar64 * -1.0 + dVar37 * dVar63;
          auVar94._0_8_ =
               dVar65 * dVar85 * 1.0 + ((dVar38 * dVar63 * 1.0 + dVar37 * dVar64) - dVar39 * dVar92)
          ;
          auVar94._8_8_ =
               dVar64 * dVar85 * -1.0 +
               ((dVar38 * dVar92 * -1.0 + dVar37 * dVar65) - dVar39 * dVar63);
          dVar96 = *(double *)(lVar22 + 0x260) * dVar48;
          dVar99 = *(double *)(lVar22 + 0x268) * dVar57;
          dVar100 = *(double *)(lVar22 + 0x270) * local_488;
          dVar95 = *(double *)(lVar22 + 0x278) * dStack_480;
          dVar92 = dVar99 * dVar38 - dVar39 * dVar96;
          dVar64 = dVar100 * dVar39 - dVar85 * dVar99;
          dVar65 = dVar96 * dVar85 - dVar38 * dVar100;
          dVar63 = dVar95 * dVar37 - dVar37 * dVar95;
          dVar64 = dVar64 + dVar64;
          dVar65 = dVar65 + dVar65;
          dVar92 = dVar92 + dVar92;
          dVar63 = dVar63 + dVar63;
          local_478 = dVar68 + (dVar92 * dVar39 - dVar85 * dVar65) + dVar37 * dVar64 + dVar96;
          dStack_470 = dVar78 + (dVar64 * dVar85 - dVar92 * dVar38) + dVar37 * dVar65 + dVar99;
          local_468._8_8_ = dVar84 + (dVar63 * dVar37 - dVar63 * dVar37) + dVar37 * dVar63 + dVar95;
          local_468._0_8_ = dVar80 + (dVar65 * dVar38 - dVar39 * dVar64) + dVar37 * dVar92 + dVar100
          ;
          dVar69 = dVar69 * dVar48;
          dVar79 = dVar79 * dVar57;
          local_488 = (double)local_458._0_8_ * local_488;
          dStack_480 = (double)local_458._8_8_ * dStack_480;
        }
        else {
          dVar63 = dVar39 + dVar39;
          dVar92 = dVar85 + dVar85;
          dVar84 = dVar38 * (dVar38 + dVar38);
          local_298 = (code *)((1.0 - (dVar85 * dVar92 + dVar39 * dVar63)) * dVar48);
          dStack_270 = (1.0 - (dVar85 * dVar92 + dVar84)) * dVar57;
          dVar85 = (dVar38 + dVar38) * dVar37;
          local_278 = (dVar63 * dVar38 - dVar92 * dVar37) * dVar57;
          dStack_250 = (dVar92 * dVar39 - dVar85) * local_488;
          local_258 = (dVar38 * dVar92 + dVar63 * dVar37) * local_488;
          local_248 = (1.0 - (dVar84 + dVar39 * dVar63)) * local_488;
          local_488 = local_488 * (double)local_458._0_8_;
          dStack_480 = dStack_480 * (double)local_458._8_8_;
          dStack_290 = (dVar63 * dVar38 + dVar92 * dVar37) * dVar48;
          local_268 = (dVar92 * dVar39 + dVar85) * dVar57;
          local_288 = (undefined ***)((dVar38 * dVar92 - dVar63 * dVar37) * dVar48);
          uStack_280 = 0;
          uStack_260 = 0;
          uStack_240 = 0;
          uStack_220 = 0x3ff0000000000000;
          dVar37 = *(double *)(lVar22 + 0x240);
          dVar38 = *(double *)(lVar22 + 0x248);
          dVar39 = *(double *)(lVar22 + 0x250);
          dVar84 = dVar38 + dVar38;
          dVar92 = dVar39 + dVar39;
          dVar65 = dVar37 * (dVar37 + dVar37);
          local_358 = (1.0 - (dVar65 + dVar38 * dVar84)) * (double)local_458._0_8_;
          dVar67 = *(double *)(lVar22 + 0x240) * dVar92;
          dVar85 = *(double *)(lVar22 + 600);
          dVar63 = dVar92 * dVar85;
          dVar64 = (dVar37 + dVar37) * *(double *)(lVar22 + 600);
          dVar85 = dVar84 * dVar85;
          local_368 = (dVar85 + dVar67) * (double)local_458._0_8_;
          local_388 = (dVar84 * dVar37 - dVar63) * dVar79;
          dStack_360 = (dVar92 * dVar38 - dVar64) * (double)local_458._0_8_;
          local_458._8_8_ = dVar57 * dVar79;
          local_458._0_8_ = dVar48 * dVar69;
          local_3a8 = (code *)((1.0 - (dVar39 * dVar92 + dVar38 * dVar84)) * dVar69);
          dStack_380 = (1.0 - (dVar39 * dVar92 + dVar65)) * dVar79;
          dStack_3a0 = (dVar84 * dVar37 + dVar63) * dVar69;
          local_378 = (dVar92 * dVar38 + dVar64) * dVar79;
          local_398 = (dVar67 - dVar85) * dVar69;
          uStack_390 = 0;
          uStack_370 = 0;
          uStack_350 = 0;
          local_348 = *(double *)(lVar22 + 0x260);
          dStack_340 = *(double *)(lVar22 + 0x268);
          local_338 = *(double *)(lVar22 + 0x270);
          uStack_330 = 0x3ff0000000000000;
          local_238 = dVar68;
          dStack_230 = dVar78;
          local_228 = dVar80;
          FUN_1447fea8d(&local_1c8);
          auVar86 = _DAT_149934d80;
          local_478 = local_1b8;
          dVar85 = local_1b8 * local_1b8 +
                   (double)local_1c8 * (double)local_1c8 + dStack_1c0 * dStack_1c0;
          dVar37 = local_198 * local_198 + local_1a8 * local_1a8 + local_1a0 * local_1a0;
          dVar38 = local_178 * local_178 + local_188 * local_188 + local_180 * local_180;
          uVar36 = -(ulonglong)(0.0 <= dVar85 + -9.99999993922529e-09);
          dVar85 = (double)(~uVar36 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar85)) & uVar36)
          ;
          uVar36 = -(ulonglong)(0.0 <= dVar37 + -9.99999993922529e-09);
          dVar37 = (double)(~uVar36 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar37)) & uVar36)
          ;
          uVar36 = -(ulonglong)(0.0 <= dVar38 + -9.99999993922529e-09);
          dVar38 = (double)(~uVar36 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar38)) & uVar36)
          ;
          dVar69 = (double)local_458._0_8_;
          dVar79 = (double)local_458._8_8_;
          auVar42._8_8_ = -(ulonglong)(0.0 <= (double)local_458._8_8_);
          auVar42._0_8_ = -(ulonglong)(0.0 <= (double)local_458._0_8_);
          auVar49 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar42);
          dVar39 = (double)(~-(ulonglong)(0.0 <= local_488) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= local_488) & 0x3ff0000000000000);
          dVar68 = auVar49._0_8_;
          local_1c8 = (code *)((double)local_1c8 * dVar85 * dVar68);
          dStack_1c0 = dStack_1c0 * dVar85 * dVar68;
          local_1b8 = dVar85 * local_1b8 * dVar68;
          dVar85 = auVar49._8_8_;
          local_198 = dVar37 * local_198 * dVar85;
          local_1a0 = local_1a0 * dVar37 * dVar85;
          local_1a8 = dVar85 * local_1a8 * dVar37;
          local_178 = dVar38 * local_178 * dVar39;
          local_180 = local_180 * dVar38 * dVar39;
          local_188 = dVar39 * local_188 * dVar38;
          ppcVar23 = &local_2d8;
          lVar22 = FUN_14481fd10(ppcVar23,&local_1c8);
          iVar7 = (int)ppcVar23;
          dVar85 = (double)local_2c8 * (double)local_2c8 + (double)local_2d8 * (double)local_2d8;
          dVar37 = dStack_2c0 * dStack_2c0 + dStack_2d0 * dStack_2d0;
          auVar59._0_8_ = dVar85 + dVar37;
          auVar59._8_8_ = dVar85 + dVar37;
          auVar43._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar59._8_8_);
          auVar43._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar59._0_8_);
          auVar49 = sqrtpd(auVar59,auVar59);
          auVar86 = divpd(auVar86,auVar49);
          auVar62._0_8_ = auVar86._0_8_ * (double)local_2c8;
          auVar62._8_8_ = auVar86._8_8_ * dStack_2c0;
          dVar67 = (double)((ulonglong)((double)local_2d8 * auVar86._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar59._0_8_));
          dVar89 = (double)((ulonglong)(dStack_2d0 * auVar86._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar59._8_8_));
          auVar94 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar62,auVar43);
          local_478 = local_168;
          dStack_470 = dStack_160;
          local_468._8_8_ = 0;
          local_468._0_8_ = local_158;
        }
        auVar86 = *(undefined1 (*) [16])(param_2 + 8);
        dVar85 = auVar86._0_8_;
        dVar38 = auVar86._8_8_;
        auVar49 = *(undefined1 (*) [16])(param_2 + 10);
        dVar37 = auVar49._0_8_;
        dVar39 = auVar49._8_8_;
        auVar44._8_8_ = dVar79;
        auVar44._0_8_ = dVar69;
        auVar86 = minpd(auVar44,auVar86);
        auVar2._8_8_ = dStack_480;
        auVar2._0_8_ = local_488;
        auVar49 = minpd(auVar2,auVar49);
        auVar45._8_8_ = -(ulonglong)(auVar86._8_8_ < 0.0);
        auVar45._0_8_ = -(ulonglong)(auVar86._0_8_ < 0.0);
        iVar18 = movmskpd((int)lVar22,auVar45);
        auVar51._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
        auVar51._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
        uVar16 = movmskpd(iVar7,auVar51);
        dVar78 = auVar94._8_8_;
        dVar68 = auVar94._0_8_;
        if ((uVar16 & 0x3fffffff) == 0 && iVar18 == 0) {
          dVar64 = *param_2;
          dVar65 = param_2[1];
          dVar84 = param_2[3];
          dVar80 = param_2[3];
          dVar57 = param_2[1];
          dVar48 = param_2[1];
          dVar100 = param_2[2];
          dVar95 = param_2[3];
          dVar92 = param_2[2];
          dVar63 = param_2[2];
          local_438 = (code *)(dVar89 * dVar92 * -1.0 +
                              dVar68 * dVar57 + dVar78 * *param_2 * 1.0 + dVar67 * dVar84);
          dStack_430 = dVar67 * dVar63 * 1.0 +
                       dVar78 * dVar48 + dVar68 * *param_2 * -1.0 + dVar89 * dVar80;
          local_428._0_8_ =
               dVar78 * dVar92 * 1.0 +
               ((*param_2 * dVar89 * 1.0 + dVar68 * dVar84) - dVar67 * dVar57);
          local_428._8_8_ =
               dVar68 * dVar63 * -1.0 +
               ((*param_2 * dVar67 * -1.0 + dVar78 * dVar80) - dVar89 * dVar48);
          dVar92 = local_478 * dVar85;
          dVar63 = dStack_470 * dVar38;
          dVar67 = (double)local_468._0_8_ * dVar37;
          dVar89 = (double)local_468._8_8_ * dVar39;
          dVar68 = dVar63 * dVar64 - dVar92 * dVar65;
          dVar57 = dVar67 * dVar65 - dVar63 * dVar100;
          dVar48 = dVar92 * dVar100 - dVar67 * dVar64;
          dVar78 = dVar89 * dVar95 - dVar89 * dVar95;
          dVar57 = dVar57 + dVar57;
          dVar48 = dVar48 + dVar48;
          dVar68 = dVar68 + dVar68;
          dVar78 = dVar78 + dVar78;
          local_3f8 = (code *)(dVar69 * dVar85);
          dStack_3f0 = dVar79 * dVar38;
          local_3e8 = local_488 * dVar37;
          dStack_3e0 = dStack_480 * dVar39;
          local_418._0_8_ =
               (dVar68 * dVar65 - dVar100 * dVar48) + dVar84 * dVar57 + dVar92 + param_2[4];
          local_418._8_8_ =
               (dVar57 * dVar100 - dVar68 * dVar64) + dVar80 * dVar48 + dVar63 + param_2[5];
          local_408 = (undefined ***)
                      ((dVar48 * dVar64 - dVar65 * dVar57) + dVar84 * dVar68 + dVar67 + param_2[6]);
          dStack_400 = (dVar78 * dVar95 - dVar78 * dVar95) + dVar80 * dVar78 + dVar89 + param_2[7];
        }
        else {
          dVar84 = *param_2;
          dVar48 = param_2[1];
          dVar57 = param_2[2];
          dVar63 = dVar48 + dVar48;
          dVar64 = dVar57 + dVar57;
          dVar92 = dVar84 * (dVar84 + dVar84);
          dVar80 = param_2[3];
          dVar65 = dVar64 * dVar80;
          dVar100 = (dVar84 + dVar84) * param_2[3];
          dVar80 = dVar63 * dVar80;
          local_458._8_8_ = dStack_480 * dVar39;
          local_458._0_8_ = local_488 * dVar37;
          local_248 = (1.0 - (dVar92 + dVar48 * dVar63)) * dVar37;
          local_258 = (dVar80 + *param_2 * dVar64) * dVar37;
          local_278 = (dVar63 * dVar84 - dVar65) * dVar38;
          dStack_250 = (dVar64 * dVar48 - dVar100) * dVar37;
          local_448 = (code *)(dVar69 * dVar85);
          dStack_440 = dVar79 * dVar38;
          local_298 = (code *)((1.0 - (dVar57 * dVar64 + dVar48 * dVar63)) * dVar85);
          dStack_270 = (1.0 - (dVar57 * dVar64 + dVar92)) * dVar38;
          dStack_290 = (dVar63 * dVar84 + dVar65) * dVar85;
          local_268 = (dVar64 * dVar48 + dVar100) * dVar38;
          local_288 = (undefined ***)((*param_2 * dVar64 - dVar80) * dVar85);
          uStack_280 = 0;
          uStack_260 = 0;
          uStack_240 = 0;
          local_238 = param_2[4];
          dStack_230 = param_2[5];
          local_228 = param_2[6];
          uStack_220 = 0x3ff0000000000000;
          dVar37 = dVar89 + dVar89;
          dVar38 = dVar68 + dVar68;
          dVar85 = dVar67 * (dVar67 + dVar67);
          local_358 = (1.0 - (dVar85 + dVar89 * dVar37)) * local_488;
          dVar39 = (dVar67 + dVar67) * dVar78;
          local_368 = (dVar67 * dVar38 + dVar37 * dVar78) * local_488;
          local_388 = (dVar37 * dVar67 - dVar38 * dVar78) * dVar79;
          dStack_360 = (dVar38 * dVar89 - dVar39) * local_488;
          local_3a8 = (code *)((1.0 - (dVar68 * dVar38 + dVar89 * dVar37)) * dVar69);
          dStack_380 = (1.0 - (dVar68 * dVar38 + dVar85)) * dVar79;
          dStack_3a0 = (dVar37 * dVar67 + dVar38 * dVar78) * dVar69;
          local_378 = (dVar38 * dVar89 + dVar39) * dVar79;
          local_398 = (dVar67 * dVar38 - dVar37 * dVar78) * dVar69;
          uStack_390 = 0;
          uStack_370 = 0;
          uStack_350 = 0;
          local_348 = local_478;
          dStack_340 = dStack_470;
          local_338 = (double)local_468._0_8_;
          uStack_330 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_1c8);
          dVar68 = dStack_440;
          pcVar90 = local_448;
          auVar86 = _DAT_149934d80;
          local_478 = local_1b8;
          dVar85 = local_1b8 * local_1b8 +
                   (double)local_1c8 * (double)local_1c8 + dStack_1c0 * dStack_1c0;
          dVar37 = local_198 * local_198 + local_1a8 * local_1a8 + local_1a0 * local_1a0;
          dVar38 = local_178 * local_178 + local_188 * local_188 + local_180 * local_180;
          local_488 = 0.0;
          dStack_480 = 0.0;
          uVar36 = -(ulonglong)(0.0 <= dVar85 + -9.99999993922529e-09);
          dVar85 = (double)(~uVar36 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar85)) & uVar36)
          ;
          uVar36 = -(ulonglong)(0.0 <= dVar37 + -9.99999993922529e-09);
          dVar37 = (double)(~uVar36 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar37)) & uVar36)
          ;
          uVar36 = -(ulonglong)(0.0 <= dVar38 + -9.99999993922529e-09);
          uVar12 = local_458._0_8_;
          uVar5 = local_458._8_8_;
          dVar38 = (double)(~uVar36 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar38)) & uVar36)
          ;
          auVar46._8_8_ = -(ulonglong)(0.0 <= dStack_440);
          auVar46._0_8_ = -(ulonglong)(0.0 <= (double)local_448);
          auVar49 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar46);
          dVar39 = (double)(~-(ulonglong)(0.0 <= (double)local_458._0_8_) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= (double)local_458._0_8_) & 0x3ff0000000000000);
          dVar78 = auVar49._0_8_;
          local_1c8 = (code *)((double)local_1c8 * dVar85 * dVar78);
          dStack_1c0 = dStack_1c0 * dVar85 * dVar78;
          local_1b8 = dVar85 * local_1b8 * dVar78;
          dVar85 = auVar49._8_8_;
          local_198 = dVar37 * local_198 * dVar85;
          local_1a0 = local_1a0 * dVar37 * dVar85;
          local_1a8 = dVar85 * local_1a8 * dVar37;
          local_178 = dVar38 * local_178 * dVar39;
          local_180 = local_180 * dVar38 * dVar39;
          local_188 = dVar39 * local_188 * dVar38;
          FUN_14481fd10(&local_2d8,&local_1c8);
          auVar52._0_8_ = (double)local_2d8 * (double)local_2d8;
          auVar52._8_8_ = dStack_2d0 * dStack_2d0;
          dVar85 = (double)local_2c8 * (double)local_2c8 + auVar52._0_8_;
          dVar37 = dStack_2c0 * dStack_2c0 + auVar52._8_8_;
          auVar55._0_8_ = dVar85 + dVar37;
          auVar55._8_8_ = dVar85 + dVar37;
          auVar47._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar55._8_8_);
          auVar47._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar55._0_8_);
          auVar49 = sqrtpd(auVar52,auVar55);
          auVar86 = divpd(auVar86,auVar49);
          auVar56._8_8_ = auVar86._8_8_ * dStack_2c0;
          auVar56._0_8_ = auVar86._0_8_ * (double)local_2c8;
          local_438 = (code *)((ulonglong)((double)local_2d8 * auVar86._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar55._0_8_));
          dStack_430 = (double)((ulonglong)(dStack_2d0 * auVar86._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar55._8_8_));
          dStack_480 = 1.0;
          auVar3._8_8_ = 0x3ff0000000000000;
          auVar3._0_8_ = local_488;
          local_428 = blendvpd(auVar3,auVar56,auVar47);
          local_418._8_8_ = dStack_160;
          local_418._0_8_ = local_168;
          dStack_400 = 0.0;
          local_408 = local_158;
          local_3f8 = pcVar90;
          dStack_3f0 = dVar68;
          local_3e8 = (double)uVar12;
          dStack_3e0 = (double)uVar5;
        }
      }
LAB_1411394f0:
      if (DAT_14cac9638 == 0) {
        uVar9 = 1;
        uVar36 = 0;
        iVar18 = 0;
        iVar7 = 0;
      }
      else {
        puVar30 = &DAT_14cac9620;
        if (DAT_14cac9630 != (uint *)0x0) {
          puVar30 = DAT_14cac9630;
        }
        uVar16 = *puVar30;
        if (uVar16 == 0) {
          iVar7 = DAT_14cac9638 + 0x1e;
          if (-1 < DAT_14cac9638 + -1) {
            iVar7 = DAT_14cac9638 + -1;
          }
          uVar36 = 0;
          uVar9 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar9 = uVar36;
          }
          iVar18 = 0;
          do {
            if (uVar9 == uVar36) goto LAB_14113969b;
            iVar18 = iVar18 + 0x20;
            uVar16 = puVar30[uVar36 + 1];
            uVar36 = uVar36 + 1;
          } while (uVar16 == 0);
        }
        else {
          uVar36 = 0;
          iVar18 = 0;
        }
        uVar9 = (ulonglong)(-uVar16 & uVar16);
        uVar1 = uVar9 * 2 + 1;
        lVar33 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar33 == 0; lVar33 = lVar33 + -1) {
          }
        }
        iVar7 = (iVar18 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
        if (DAT_14cac9638 <= iVar7) {
          iVar7 = DAT_14cac9638;
        }
      }
      if (iVar7 < DAT_14cac9638) {
        uVar16 = 0xffffffff;
        lVar33 = DAT_14cac9610;
        iVar29 = DAT_14cac9638;
        do {
          iVar17 = *(int *)(lVar33 + 4 + (longlong)iVar7 * 0x80);
          if (((((iVar17 == 0) ||
                (uVar19 = *(uint *)((longlong)iVar7 * 0x80 + lVar33), (int)uVar19 < 0)) ||
               (DAT_14c9647dc <= (int)uVar19)) ||
              ((lVar22 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8), lVar22 == 0
               || (*(int *)(lVar22 + 0x10) != iVar17)))) ||
             ((*(uint *)(lVar22 + 8) & 0x10200000) != 0)) {
            FUN_140b12a56();
            lVar33 = DAT_14cac9610;
            iVar29 = DAT_14cac9638;
          }
          uVar16 = uVar16 & ~(uint)uVar9;
          puVar30 = DAT_14cac9630;
          if (DAT_14cac9630 == (uint *)0x0) {
            puVar30 = &DAT_14cac9620;
          }
          iVar7 = (int)uVar36;
          lVar22 = (longlong)iVar7;
          uVar19 = puVar30[lVar22] & uVar16;
          if (uVar19 == 0) {
            iVar17 = iVar29 + 0x1e;
            if (-1 < iVar29 + -1) {
              iVar17 = iVar29 + -1;
            }
            iVar17 = iVar17 >> 5;
            iVar20 = iVar17;
            if (iVar17 < iVar7) {
              iVar20 = iVar7;
            }
            if (iVar17 <= iVar7) break;
            lVar31 = 0;
            while( true ) {
              iVar18 = iVar18 + 0x20;
              uVar19 = puVar30[lVar22 + lVar31 + 1];
              if (uVar19 != 0) break;
              lVar31 = lVar31 + 1;
              if (iVar20 - lVar22 == lVar31) goto LAB_14113969b;
            }
            uVar36 = (ulonglong)(iVar7 + (int)lVar31 + 1);
            uVar16 = 0xffffffff;
          }
          uVar9 = (ulonglong)(-uVar19 & uVar19);
          uVar1 = uVar9 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar7 = (iVar18 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        } while (iVar7 < iVar29);
      }
    }
  }
  else {
    if (param_1 == (longlong *)0x0) {
      uVar36 = 0;
      uVar16 = 0;
    }
    else {
      uVar16 = *(uint *)((longlong)param_1 + 0xc);
      uVar36 = (ulonglong)uVar16;
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar33 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar33 = 0;
      }
      uVar16 = *(uint *)(lVar33 + 0x10);
      if (*(uint *)(lVar33 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        uVar19 = DAT_14c964868 + 1;
        bVar35 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar35) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar19);
        }
        LOCK();
        uVar16 = *(uint *)(lVar33 + 0x10);
        bVar35 = uVar16 == 0;
        if (bVar35) {
          *(uint *)(lVar33 + 0x10) = uVar19;
          uVar16 = 0;
        }
        UNLOCK();
        if (bVar35) {
          uVar16 = uVar19;
        }
      }
    }
    local_1c8 = (code *)(uVar36 | (ulonglong)uVar16 << 0x20);
    iVar7 = FUN_1417b366c(uVar16 ^ (uint)uVar36);
    lVar22 = (longlong)iVar7 * 0x80 + DAT_14cac9610;
    lVar33 = 0;
    if (iVar7 != -1) {
      lVar33 = lVar22;
    }
    pdVar15 = (double *)(lVar33 + 0x10);
    if (lVar33 == 0) {
      pdVar15 = (double *)0x0;
    }
    lVar33 = param_1[0x39];
    auVar86 = *(undefined1 (*) [16])(lVar33 + 0x1b0);
    auVar49 = divpd(auVar86,_DAT_1499387d0);
    auVar53._8_8_ = 0;
    auVar53._0_8_ = *(double *)(lVar33 + 0x1c0);
    auVar53 = divpd(auVar53,_DAT_1499387d0);
    auVar49 = roundpd(auVar49,auVar49,3);
    auVar53 = roundpd(auVar53,auVar53,3);
    dVar68 = (auVar86._0_8_ - auVar49._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar78 = (auVar86._8_8_ - auVar49._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar80 = (*(double *)(lVar33 + 0x1c0) - auVar53._0_8_ * (double)DAT_1499387d0) *
             0.008726646259971648;
    dVar84 = (0.0 - auVar53._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    local_478 = *(double *)(lVar33 + 0x198);
    dStack_470 = *(double *)(lVar33 + 0x1a0);
    local_488 = *(double *)(lVar33 + 0x1a8);
    dStack_480 = 0.0;
    auVar86 = *(undefined1 (*) [16])(lVar33 + 0x1c8);
    dVar85 = *(double *)(lVar33 + 0x1d8);
    dVar37 = sin(dVar68);
    uVar8 = (undefined4)lVar22;
    dVar38 = sin(dVar78);
    dVar39 = sin(dVar80);
    sin(dVar84);
    dVar68 = cos(dVar68);
    dVar78 = cos(dVar78);
    dVar80 = cos(dVar80);
    cos(dVar84);
    dVar69 = -(dVar78 * dVar37 * dVar39) + dVar38 * dVar68 * dVar80;
    dVar79 = dVar38 * dVar37 * dVar39 + dVar78 * dVar68 * dVar80;
    dVar84 = dVar37 * dVar38 * dVar80 - dVar68 * dVar78 * dVar39;
    dVar37 = -(dVar37 * dVar78 * dVar80) - dVar68 * dVar38 * dVar39;
    if (pdVar15 == (double *)0x0) {
      pdVar15 = param_2;
    }
    auVar49 = *(undefined1 (*) [16])(pdVar15 + 8);
    dVar38 = auVar49._0_8_;
    dVar68 = auVar49._8_8_;
    auVar53 = *(undefined1 (*) [16])(pdVar15 + 10);
    dVar39 = auVar53._0_8_;
    dVar78 = auVar53._8_8_;
    auVar97 = minpd(auVar86,auVar49);
    auVar49._8_8_ = 0;
    auVar49._0_8_ = dVar85;
    auVar49 = minpd(auVar49,auVar53);
    auVar98._8_8_ = -(ulonglong)(auVar97._8_8_ < 0.0);
    auVar98._0_8_ = -(ulonglong)(auVar97._0_8_ < 0.0);
    iVar7 = movmskpd(extraout_EAX,auVar98);
    auVar97._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
    auVar97._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
    uVar16 = movmskpd(uVar8,auVar97);
    local_468._0_8_ = auVar86._0_8_;
    local_468._8_8_ = auVar86._8_8_;
    local_468 = auVar86;
    if ((uVar16 & 0x3fffffff) == 0 && iVar7 == 0) {
      dVar65 = *pdVar15;
      dVar67 = pdVar15[1];
      dVar80 = pdVar15[3];
      dVar48 = pdVar15[3];
      dVar57 = pdVar15[1];
      dVar92 = pdVar15[1];
      dVar89 = pdVar15[2];
      dVar100 = pdVar15[3];
      dVar63 = pdVar15[2];
      dVar64 = pdVar15[2];
      local_438 = (code *)(dVar37 * dVar63 * -1.0 +
                          dVar69 * dVar57 + dVar79 * *pdVar15 * 1.0 + dVar84 * dVar80);
      dStack_430 = dVar84 * dVar64 * 1.0 +
                   dVar79 * dVar92 + dVar69 * *pdVar15 * -1.0 + dVar37 * dVar48;
      local_428._0_8_ =
           dVar79 * dVar63 * 1.0 + ((*pdVar15 * dVar37 * 1.0 + dVar69 * dVar80) - dVar84 * dVar57);
      local_428._8_8_ =
           dVar69 * dVar64 * -1.0 + ((*pdVar15 * dVar84 * -1.0 + dVar79 * dVar48) - dVar37 * dVar92)
      ;
      dVar63 = local_478 * dVar38;
      dVar64 = dStack_470 * dVar68;
      dVar57 = local_488 * dVar39;
      dVar92 = dStack_480 * dVar78;
      dVar37 = dVar64 * dVar65 - dVar63 * dVar67;
      dVar84 = dVar57 * dVar67 - dVar64 * dVar89;
      dVar69 = dVar63 * dVar89 - dVar57 * dVar65;
      dVar79 = dVar92 * dVar100 - dVar92 * dVar100;
      dVar84 = dVar84 + dVar84;
      dVar69 = dVar69 + dVar69;
      dVar37 = dVar37 + dVar37;
      dVar79 = dVar79 + dVar79;
      pcVar90 = (code *)((double)local_468._0_8_ * dVar38);
      dVar68 = (double)local_468._8_8_ * dVar68;
      dVar85 = dVar85 * dVar39;
      dVar78 = dVar78 * 0.0;
      local_418._0_8_ = (dVar37 * dVar67 - dVar89 * dVar69) + dVar80 * dVar84 + dVar63 + pdVar15[4];
      local_418._8_8_ = (dVar84 * dVar89 - dVar37 * dVar65) + dVar48 * dVar69 + dVar64 + pdVar15[5];
      local_408 = (undefined ***)
                  ((dVar69 * dVar65 - dVar67 * dVar84) + dVar80 * dVar37 + dVar57 + pdVar15[6]);
      dStack_400 = (dVar79 * dVar100 - dVar79 * dVar100) + dVar48 * dVar79 + dVar92 + pdVar15[7];
    }
    else {
      dVar48 = *pdVar15;
      dVar57 = pdVar15[1];
      dVar92 = pdVar15[2];
      dVar63 = dVar57 + dVar57;
      dVar64 = dVar92 + dVar92;
      dVar89 = dVar48 * (dVar48 + dVar48);
      dVar80 = pdVar15[3];
      dVar65 = dVar64 * dVar80;
      dVar67 = (dVar48 + dVar48) * pdVar15[3];
      dVar80 = dVar63 * dVar80;
      local_458._8_8_ = dVar78 * 0.0;
      local_458._0_8_ = dVar85 * dVar39;
      local_248 = (1.0 - (dVar89 + dVar57 * dVar63)) * dVar39;
      local_258 = (dVar80 + *pdVar15 * dVar64) * dVar39;
      local_278 = (dVar63 * dVar48 - dVar65) * dVar68;
      dStack_250 = (dVar64 * dVar57 - dVar67) * dVar39;
      local_448 = (code *)((double)local_468._0_8_ * dVar38);
      dStack_440 = (double)local_468._8_8_ * dVar68;
      local_298 = (code *)((1.0 - (dVar92 * dVar64 + dVar57 * dVar63)) * dVar38);
      dStack_270 = (1.0 - (dVar92 * dVar64 + dVar89)) * dVar68;
      dStack_290 = (dVar63 * dVar48 + dVar65) * dVar38;
      local_268 = (dVar64 * dVar57 + dVar67) * dVar68;
      local_288 = (undefined ***)((*pdVar15 * dVar64 - dVar80) * dVar38);
      uStack_280 = 0;
      uStack_260 = 0;
      uStack_240 = 0;
      local_238 = pdVar15[4];
      dStack_230 = pdVar15[5];
      local_228 = pdVar15[6];
      uStack_220 = 0x3ff0000000000000;
      dVar38 = dVar37 + dVar37;
      dVar68 = dVar69 + dVar69;
      dVar39 = dVar84 * (dVar84 + dVar84);
      local_358 = (1.0 - (dVar39 + dVar37 * dVar38)) * dVar85;
      dVar78 = (dVar84 + dVar84) * dVar79;
      local_368 = (dVar38 * dVar79 + dVar84 * dVar68) * dVar85;
      local_388 = (dVar38 * dVar84 - dVar68 * dVar79) * (double)local_468._8_8_;
      dStack_360 = (dVar68 * dVar37 - dVar78) * dVar85;
      local_3a8 = (code *)((1.0 - (dVar69 * dVar68 + dVar37 * dVar38)) * (double)local_468._0_8_);
      dStack_380 = (1.0 - (dVar69 * dVar68 + dVar39)) * (double)local_468._8_8_;
      dStack_3a0 = (dVar38 * dVar84 + dVar68 * dVar79) * (double)local_468._0_8_;
      local_378 = (dVar68 * dVar37 + dVar78) * (double)local_468._8_8_;
      local_398 = (dVar84 * dVar68 - dVar38 * dVar79) * (double)local_468._0_8_;
      uStack_390 = 0;
      uStack_370 = 0;
      uStack_350 = 0;
      local_348 = local_478;
      dStack_340 = dStack_470;
      local_338 = local_488;
      uStack_330 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_1c8);
      dVar68 = dStack_440;
      pcVar90 = local_448;
      local_488 = local_1b8;
      dVar37 = local_1b8 * local_1b8 +
               (double)local_1c8 * (double)local_1c8 + dStack_1c0 * dStack_1c0;
      dVar38 = local_198 * local_198 + local_1a8 * local_1a8 + local_1a0 * local_1a0;
      dVar85 = local_178 * local_178 + local_188 * local_188 + local_180 * local_180;
      uVar36 = -(ulonglong)(0.0 <= dVar37 + -9.99999993922529e-09);
      dVar37 = (double)(~uVar36 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar37)) & uVar36);
      uVar36 = -(ulonglong)(0.0 <= dVar38 + -9.99999993922529e-09);
      dVar38 = (double)(~uVar36 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar38)) & uVar36);
      uVar36 = -(ulonglong)(0.0 <= dVar85 + -9.99999993922529e-09);
      dVar39 = (double)(~uVar36 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar85)) & uVar36);
      dVar85 = (double)local_458._0_8_;
      dVar78 = (double)local_458._8_8_;
      auVar86._8_8_ = -(ulonglong)(0.0 <= dStack_440);
      auVar86._0_8_ = -(ulonglong)(0.0 <= (double)local_448);
      auVar86 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar86);
      dVar80 = (double)(~-(ulonglong)(0.0 <= (double)local_458._0_8_) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= (double)local_458._0_8_) & 0x3ff0000000000000);
      dVar84 = auVar86._0_8_;
      local_1c8 = (code *)((double)local_1c8 * dVar37 * dVar84);
      dStack_1c0 = dStack_1c0 * dVar37 * dVar84;
      local_1b8 = dVar37 * local_1b8 * dVar84;
      dVar37 = auVar86._8_8_;
      local_198 = dVar38 * local_198 * dVar37;
      local_1a0 = local_1a0 * dVar38 * dVar37;
      local_1a8 = dVar37 * local_1a8 * dVar38;
      local_178 = dVar39 * local_178 * dVar80;
      local_180 = local_180 * dVar39 * dVar80;
      local_188 = dVar80 * local_188 * dVar39;
      FUN_14481fd10(&local_2d8,&local_1c8);
      dVar37 = (double)local_2c8 * (double)local_2c8 + (double)local_2d8 * (double)local_2d8;
      dVar38 = dStack_2c0 * dStack_2c0 + dStack_2d0 * dStack_2d0;
      auVar54._0_8_ = dVar37 + dVar38;
      auVar54._8_8_ = dVar37 + dVar38;
      auVar40._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_);
      auVar40._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_);
      auVar86 = sqrtpd(auVar54,auVar54);
      auVar86 = divpd(_DAT_149934d80,auVar86);
      auVar60._0_8_ = auVar86._0_8_ * (double)local_2c8;
      auVar60._8_8_ = auVar86._8_8_ * dStack_2c0;
      local_438 = (code *)((ulonglong)((double)local_2d8 * auVar86._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_));
      dStack_430 = (double)((ulonglong)(dStack_2d0 * auVar86._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_));
      local_428 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar60,auVar40);
      dStack_400 = 0.0;
      local_418._0_8_ = local_168;
      local_418._8_8_ = dStack_160;
      local_408 = local_158;
    }
    local_4d8 = CONCAT71(local_4d8._1_7_,1);
    uVar36 = 0;
    local_3f8 = pcVar90;
    dStack_3f0 = dVar68;
    local_3e8 = dVar85;
    dStack_3e0 = dVar78;
    FUN_140613f88(param_1[0x39],&local_438,0,0);
    if (param_3 == '\0') {
      lVar33 = param_1[0x39];
      goto LAB_14113820a;
    }
    uVar9 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar16 = *(uint *)((longlong)param_1 + 0xc);
      uVar36 = (ulonglong)uVar16;
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar33 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar33 = 0;
      }
      uVar9 = (ulonglong)*(uint *)(lVar33 + 0x10);
      if (*(uint *)(lVar33 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        uVar16 = DAT_14c964868 + 1;
        bVar35 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar35) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar16);
        }
        LOCK();
        uVar19 = *(uint *)(lVar33 + 0x10);
        bVar35 = uVar19 == 0;
        if (bVar35) {
          *(uint *)(lVar33 + 0x10) = uVar16;
          uVar19 = 0;
        }
        UNLOCK();
        if (bVar35) {
          uVar19 = uVar16;
        }
        uVar9 = (ulonglong)uVar19;
      }
    }
    FUN_140b12950(uVar36 | uVar9 << 0x20);
  }
LAB_14113969b:
  uVar32 = DAT_14c872b88;
  DAT_14c872b88 = 1;
  lVar33 = param_1[0x39];
  if (lVar33 == 0) {
    *(byte *)((longlong)param_1 + 0x65) = *(byte *)((longlong)param_1 + 0x65) | 0x20;
  }
  else {
    if ((*(uint *)(lVar33 + 8) >> 0x1e & 1) != 0) {
      param_1[0x39] = 0;
      FUN_14092e5c6(lVar33 + 0x1fe,lVar33,0);
      lVar33 = param_1[0x39];
    }
    *(byte *)((longlong)param_1 + 0x65) = *(byte *)((longlong)param_1 + 0x65) | 0x20;
    if (lVar33 != 0 && param_3 == '\0') {
      local_4d8 = CONCAT71(local_4d8._1_7_,1);
      FUN_140613f88(lVar33,&local_438,0,0);
    }
  }
  pbVar34 = (byte *)((longlong)param_1 + 0x65);
  local_3c8 = (code *)0x0;
  dStack_3c0 = 0.0;
  cVar6 = FUN_14043aa1e(param_1[2],&local_3c8);
  if (dStack_3c0._0_4_ < 1) {
    FUN_1417b2960(param_1);
    FUN_140a68de8(param_1[2],param_1);
  }
  else if (cVar6 == '\0') {
    if (param_1[0x39] == 0) {
      plVar27 = (longlong *)FUN_1478c1bd4(param_1);
      FUN_144757f48(plVar27,8);
      *(undefined1 *)((longlong)plVar27 + 0xb9) = 1;
      local_1c8 = local_438;
      dStack_1c0 = dStack_430;
      local_1b8 = (double)local_428._0_8_;
      dStack_1b0 = (double)local_428._8_8_;
      local_298 = (code *)local_418._0_8_;
      dStack_290 = (double)local_418._8_8_;
      local_288 = local_408;
      local_4d0 = local_4d0 & 0xffffff00;
      local_4d8 = 0;
      FUN_144927ad4(plVar27,&local_298,&local_1c8,0);
      local_1c8 = local_3f8;
      dStack_1c0 = dStack_3f0;
      local_1b8 = local_3e8;
      if (*(code **)(*plVar27 + 0x478) == FUN_14028a216) {
        FUN_14028a216(plVar27);
      }
      else {
        (**(code **)(*plVar27 + 0x478))(plVar27,&local_1c8);
      }
      FUN_14092e51e(param_1,plVar27);
      FUN_1478c1c84(param_1,plVar27);
    }
    if ((*(byte *)((longlong)param_1 + 100) & 0x10) == 0) goto LAB_14113a3b8;
    if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar33 = param_1[4], lVar33 != 0)) &&
       (-1 < (short)*(undefined4 *)(lVar33 + 8))) {
      uVar16 = *(uint *)(lVar33 + 0xc);
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar33 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar33 = 0;
      }
      if ((*(uint *)(lVar33 + 8) >> 0x1c & 1) != 0) goto LAB_14113b220;
      if (DAT_14cae8b20 == 0) {
        local_4a0 = &local_1c8;
        local_1c8 = (code *)&LAB_14355090c;
        local_490 = FUN_14081d0ea;
        local_498 = FUN_14081d0ea;
        local_4a8 = &LAB_147b8e16d;
        local_4b0 = (code *)&LAB_140810a38;
        local_4b8 = L"Engine";
        local_4c0 = 0x800000000;
        local_4c8 = 0x10000000;
        local_4d0 = 8;
        local_4d8 = CONCAT44(local_4d8._4_4_,0x3f0);
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar33 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_4a0 = &local_1c8;
        local_1c8 = FUN_1449e2820;
        local_490 = FUN_14081d0ea;
        local_498 = FUN_14081d0ea;
        local_4a8 = &LAB_1468c5283;
        local_4b0 = FUN_142809da0;
        local_4b8 = L"Engine";
        local_4c0 = 0x400000000;
        local_4c8 = 0x10000000;
        local_4d0 = 8;
        local_4d8 = CONCAT44(local_4d8._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar22 = param_1[4];
      if (lVar22 == 0) goto LAB_14113b220;
      iVar7 = *(int *)(lVar33 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < iVar7) ||
           (lVar31 = lVar22,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar7 * 8)
           != lVar33 + 0x30)) {
          lVar31 = 0;
        }
      } while ((lVar31 == 0) && (lVar22 = *(longlong *)(lVar22 + 0x20), lVar22 != 0));
      if (lVar31 == 0) goto LAB_14113b220;
      lVar33 = *(longlong *)(lVar31 + 0xc0);
    }
    else {
LAB_14113b220:
      lVar33 = 0;
    }
    if ((*(byte *)(lVar33 + 0x153) & 0x40) != 0) {
      (**(code **)(*param_1 + 0x4b0))(param_1);
      FUN_14132cf46(param_1,0,0);
    }
  }
  else {
    local_468._0_8_ = pbVar34;
    local_478 = (double)CONCAT71(local_478._1_7_,uVar32);
    local_108 = (code **)0x0;
    local_100 = 0x1800000000;
    local_488 = param_4;
    FUN_1448c0c58(param_1,&local_1c8,0);
    local_1d8 = (code **)0x0;
    local_1d0 = 0x1800000000;
    ppcVar23 = local_108;
    if (local_108 == (code **)0x0) {
      ppcVar23 = &local_1c8;
    }
    lVar33 = (longlong)(int)local_100;
    if (lVar33 != 0) {
      lVar22 = 0;
      do {
        pcVar90 = *(code **)((longlong)ppcVar23 + lVar22);
        if (pcVar90 != (code *)0x0) {
          if (DAT_14cac7648 == 0) {
            local_3a8 = FUN_144a7958c;
            local_490 = FUN_14081d0ea;
            local_498 = FUN_143242436;
            local_4a8 = &LAB_14789ef1f;
            local_4b0 = (code *)&LAB_1417b008f;
            local_4b8 = L"Engine";
            local_4c0 = 0x8000000000;
            local_4c8 = 0x10000004;
            local_4d0 = 0x10;
            local_4d8 = CONCAT44(local_4d8._4_4_,0x2b0);
            local_4a0 = &local_3a8;
            FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
          }
          if (((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(pcVar90 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(pcVar90 + 0x10) + 0x30) +
                (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) &&
             (pcVar90[0xb9] == (code)0x0)) {
            lVar31 = *(longlong *)(pcVar90 + 0x20);
            if (DAT_14cac9ca8 == 0) {
              local_3a8 = FUN_141030f22;
              local_490 = FUN_14081d0ea;
              local_498 = FUN_14081d0ea;
              local_4a8 = &LAB_1478c0a72;
              local_4b0 = (code *)&LAB_1417b2375;
              local_4b8 = L"Engine";
              local_4c0 = 0x1000000000;
              local_4c8 = 0x10000004;
              local_4d0 = 8;
              local_4d8 = CONCAT44(local_4d8._4_4_,0x390);
              local_4a0 = &local_3a8;
              FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
            }
            if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar31 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar31 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
              if ((param_1[0x39] == 0) && (*(longlong *)(pcVar90 + 0x120) == 0)) {
                FUN_14092e51e(param_1,pcVar90);
                if (param_1[0x39] != 0 && param_3 == '\0') {
                  local_4d8 = CONCAT71(local_4d8._1_7_,1);
                  FUN_140613f88(param_1[0x39],&local_438,0,0);
                }
              }
              uVar36 = local_1d0;
              lVar31 = (longlong)(int)local_1d0;
              uVar16 = (int)local_1d0 + 1;
              local_1d0 = CONCAT44(local_1d0._4_4_,uVar16);
              if (local_1d0._4_4_ < uVar16) {
                FUN_14024d3e4(&local_298,uVar36 & 0xffffffff);
              }
              ppcVar10 = local_1d8;
              if (local_1d8 == (code **)0x0) {
                ppcVar10 = &local_298;
              }
              ppcVar10[lVar31] = pcVar90;
            }
          }
        }
        lVar22 = lVar22 + 8;
      } while (lVar33 * 8 != lVar22);
    }
    if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar33 = param_1[4], lVar33 != 0)) &&
       (-1 < (short)*(undefined4 *)(lVar33 + 8))) {
      uVar16 = *(uint *)(lVar33 + 0xc);
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar33 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar33 = 0;
      }
      if ((*(uint *)(lVar33 + 8) >> 0x1c & 1) != 0) goto LAB_14113b20b;
      if (DAT_14cae8b20 == 0) {
        local_4a0 = &local_3a8;
        local_3a8 = (code *)&LAB_14355090c;
        local_490 = FUN_14081d0ea;
        local_498 = FUN_14081d0ea;
        local_4a8 = &LAB_147b8e16d;
        local_4b0 = (code *)&LAB_140810a38;
        local_4b8 = L"Engine";
        local_4c0 = 0x800000000;
        local_4c8 = 0x10000000;
        local_4d0 = 8;
        local_4d8 = CONCAT44(local_4d8._4_4_,0x3f0);
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar33 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_4a0 = &local_3a8;
        local_3a8 = FUN_1449e2820;
        local_490 = FUN_14081d0ea;
        local_498 = FUN_14081d0ea;
        local_4a8 = &LAB_1468c5283;
        local_4b0 = FUN_142809da0;
        local_4b8 = L"Engine";
        local_4c0 = 0x400000000;
        local_4c8 = 0x10000000;
        local_4d0 = 8;
        local_4d8 = CONCAT44(local_4d8._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar22 = param_1[4];
      if (lVar22 == 0) goto LAB_14113b20b;
      iVar7 = *(int *)(lVar33 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < iVar7) ||
           (lVar31 = lVar22,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar7 * 8)
           != lVar33 + 0x30)) {
          lVar31 = 0;
        }
      } while ((lVar31 == 0) && (lVar22 = *(longlong *)(lVar22 + 0x20), lVar22 != 0));
      if (lVar31 == 0) goto LAB_14113b20b;
      lVar33 = *(longlong *)(lVar31 + 0xc0);
    }
    else {
LAB_14113b20b:
      lVar33 = 0;
    }
    local_3d1 = *(byte *)(lVar33 + 0x154) >> 1 & 1;
    if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar33 = param_1[4], lVar33 != 0)) &&
       (-1 < (short)*(undefined4 *)(lVar33 + 8))) {
      uVar16 = *(uint *)(lVar33 + 0xc);
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar33 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar33 = 0;
      }
      if ((*(uint *)(lVar33 + 8) >> 0x1c & 1) != 0) goto LAB_14113b212;
      if (DAT_14cae8b20 == 0) {
        local_4a0 = &local_3a8;
        local_3a8 = (code *)&LAB_14355090c;
        local_490 = FUN_14081d0ea;
        local_498 = FUN_14081d0ea;
        local_4a8 = &LAB_147b8e16d;
        local_4b0 = (code *)&LAB_140810a38;
        local_4b8 = L"Engine";
        local_4c0 = 0x800000000;
        local_4c8 = 0x10000000;
        local_4d0 = 8;
        local_4d8 = CONCAT44(local_4d8._4_4_,0x3f0);
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar33 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_4a0 = &local_3a8;
        local_3a8 = FUN_1449e2820;
        local_490 = FUN_14081d0ea;
        local_498 = FUN_14081d0ea;
        local_4a8 = &LAB_1468c5283;
        local_4b0 = FUN_142809da0;
        local_4b8 = L"Engine";
        local_4c0 = 0x400000000;
        local_4c8 = 0x10000000;
        local_4d0 = 8;
        local_4d8 = CONCAT44(local_4d8._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar22 = param_1[4];
      if (lVar22 == 0) goto LAB_14113b212;
      iVar7 = *(int *)(lVar33 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < iVar7) ||
           (lVar31 = lVar22,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar7 * 8)
           != lVar33 + 0x30)) {
          lVar31 = 0;
        }
      } while ((lVar31 == 0) && (lVar22 = *(longlong *)(lVar22 + 0x20), lVar22 != 0));
      if (lVar31 == 0) goto LAB_14113b212;
      lVar33 = *(longlong *)(lVar31 + 0xc0);
    }
    else {
LAB_14113b212:
      lVar33 = 0;
    }
    *(byte *)(lVar33 + 0x154) = *(byte *)(lVar33 + 0x154) | 2;
    local_2d8 = FUN_1433c1a42;
    local_2c8 = (undefined ***)0x0;
    local_2b8 = &PTR_LAB_14a78dbd0;
    local_2a8 = &local_3d1;
    local_2b0 = param_1;
    if (0 < (longlong)dStack_3c0._0_4_) {
      uVar36 = (longlong)dStack_3c0._0_4_ + 1;
      do {
        lVar33 = *(longlong *)(local_3c8 + uVar36 * 8 + -0x10);
        lVar22 = *(longlong *)(lVar33 + 0x2b8);
        if (lVar22 != 0) {
          local_4c8 = CONCAT31(local_4c8._1_3_,param_5);
          local_4d0 = CONCAT31(local_4d0._1_3_,param_3);
          local_4d8 = 0;
          FUN_141364e50(lVar22,param_1,&local_298,&local_438);
        }
        FUN_1417b9596(lVar33,param_1);
        uVar36 = uVar36 - 1;
      } while (1 < uVar36);
    }
    if ((*(byte *)((longlong)param_1 + 100) & 0x10) != 0) {
      if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar33 = param_1[4], lVar33 != 0)) &&
         (-1 < (short)*(undefined4 *)(lVar33 + 8))) {
        uVar16 = *(uint *)(lVar33 + 0xc);
        if ((int)uVar16 < DAT_14c9647dc) {
          lVar33 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
        }
        else {
          lVar33 = 0;
        }
        if ((*(uint *)(lVar33 + 8) >> 0x1c & 1) != 0) goto LAB_14113b227;
        if (DAT_14cae8b20 == 0) {
          local_4a0 = &local_3a8;
          local_3a8 = (code *)&LAB_14355090c;
          local_490 = FUN_14081d0ea;
          local_498 = FUN_14081d0ea;
          local_4a8 = &LAB_147b8e16d;
          local_4b0 = (code *)&LAB_140810a38;
          local_4b8 = L"Engine";
          local_4c0 = 0x800000000;
          local_4c8 = 0x10000000;
          local_4d0 = 8;
          local_4d8 = CONCAT44(local_4d8._4_4_,0x3f0);
          FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
        }
        lVar33 = DAT_14cae8b20;
        if (DAT_14c951858 == 0) {
          local_4a0 = &local_3a8;
          local_3a8 = FUN_1449e2820;
          local_490 = FUN_14081d0ea;
          local_498 = FUN_14081d0ea;
          local_4a8 = &LAB_1468c5283;
          local_4b0 = FUN_142809da0;
          local_4b8 = L"Engine";
          local_4c0 = 0x400000000;
          local_4c8 = 0x10000000;
          local_4d0 = 8;
          local_4d8 = CONCAT44(local_4d8._4_4_,0x50);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar22 = param_1[4];
        if (lVar22 == 0) goto LAB_14113b227;
        iVar7 = *(int *)(lVar33 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < iVar7) ||
             (lVar31 = lVar22,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar7 * 8)
             != lVar33 + 0x30)) {
            lVar31 = 0;
          }
        } while ((lVar31 == 0) && (lVar22 = *(longlong *)(lVar22 + 0x20), lVar22 != 0));
        if (lVar31 == 0) goto LAB_14113b227;
        lVar33 = *(longlong *)(lVar31 + 0xc0);
      }
      else {
LAB_14113b227:
        lVar33 = 0;
      }
      if ((*(byte *)(lVar33 + 0x153) & 0x40) != 0) {
        (**(code **)(*param_1 + 0x4b0))(param_1);
        FUN_14132cf46(param_1,0,0);
      }
    }
    local_2e8 = (code **)0x0;
    local_2e0 = 0x1800000000;
    FUN_1448c0c58(param_1,&local_3a8,0);
    ppcVar23 = local_2e8;
    if (local_2e8 == (code **)0x0) {
      ppcVar23 = &local_3a8;
    }
    if ((longlong)(int)local_2e0 != 0) {
      ppcVar10 = ppcVar23 + (int)local_2e0;
      do {
        pcVar90 = *ppcVar23;
        if (((((byte)pcVar90[0x9c] & 1) == 0) && (((byte)pcVar90[0x9d] & 0x20) != 0)) &&
           ((*(uint *)(pcVar90 + 8) >> 0x1e & 1) == 0)) {
          if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar33 = param_1[4], lVar33 != 0)) &&
             (-1 < (short)*(undefined4 *)(lVar33 + 8))) {
            uVar16 = *(uint *)(lVar33 + 0xc);
            if ((int)uVar16 < DAT_14c9647dc) {
              lVar33 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
            }
            else {
              lVar33 = 0;
            }
            if ((*(uint *)(lVar33 + 8) >> 0x1c & 1) != 0) goto LAB_14113a0cc;
            if (DAT_14cae8b20 == 0) {
              local_3d0 = (code *)&LAB_14355090c;
              local_490 = FUN_14081d0ea;
              local_498 = FUN_14081d0ea;
              local_4a0 = &local_3d0;
              local_4a8 = &LAB_147b8e16d;
              local_4b0 = (code *)&LAB_140810a38;
              local_4b8 = L"Engine";
              local_4c0 = 0x800000000;
              local_4c8 = 0x10000000;
              local_4d0 = 8;
              local_4d8 = CONCAT44(local_4d8._4_4_,0x3f0);
              FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
            }
            lVar33 = DAT_14cae8b20;
            if (DAT_14c951858 == 0) {
              local_3d0 = FUN_1449e2820;
              local_490 = FUN_14081d0ea;
              local_498 = FUN_14081d0ea;
              local_4a0 = &local_3d0;
              local_4a8 = &LAB_1468c5283;
              local_4b0 = FUN_142809da0;
              local_4b8 = L"Engine";
              local_4c0 = 0x400000000;
              local_4c8 = 0x10000000;
              local_4d0 = 8;
              local_4d8 = CONCAT44(local_4d8._4_4_,0x50);
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            lVar22 = param_1[4];
            if (lVar22 == 0) goto LAB_14113a0cc;
            iVar7 = *(int *)(lVar33 + 0x38);
            do {
              if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < iVar7) ||
                 (lVar31 = lVar22,
                 *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
                 lVar33 + 0x30)) {
                lVar31 = 0;
              }
            } while ((lVar31 == 0) && (lVar22 = *(longlong *)(lVar22 + 0x20), lVar22 != 0));
            if (lVar31 == 0) goto LAB_14113a0cc;
            lVar33 = *(longlong *)(lVar31 + 0xc0);
          }
          else {
LAB_14113a0cc:
            lVar33 = 0;
          }
          if ((*(byte *)(lVar33 + 0x153) & 0x40) != 0) {
            if (pcVar90[0xb9] != (code)0x1) {
              ppcVar11 = local_108;
              if (local_108 == (code **)0x0) {
                ppcVar11 = &local_1c8;
              }
              if ((longlong)(int)local_100 != 0) {
                lVar33 = 0;
                do {
                  if (*(code **)((longlong)ppcVar11 + lVar33) == pcVar90) goto LAB_14113a0ba;
                  lVar33 = lVar33 + 8;
                } while ((longlong)(int)local_100 * 8 != lVar33);
              }
            }
            FUN_1417eda34(pcVar90);
          }
        }
LAB_14113a0ba:
        ppcVar23 = ppcVar23 + 1;
      } while (ppcVar23 != ppcVar10);
    }
    dVar85 = local_488;
    if (local_488 != 0.0) {
      FUN_1479b6970(local_488,param_1,0);
    }
    FUN_1417b2960();
    if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar33 = param_1[4], lVar33 != 0)) &&
       (-1 < (short)*(undefined4 *)(lVar33 + 8))) {
      uVar16 = *(uint *)(lVar33 + 0xc);
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar33 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar33 = 0;
      }
      if ((*(uint *)(lVar33 + 8) >> 0x1c & 1) != 0) goto LAB_14113b219;
      if (DAT_14cae8b20 == 0) {
        local_4a0 = &local_3d0;
        local_3d0 = (code *)&LAB_14355090c;
        local_490 = FUN_14081d0ea;
        local_498 = FUN_14081d0ea;
        local_4a8 = &LAB_147b8e16d;
        local_4b0 = (code *)&LAB_140810a38;
        local_4b8 = L"Engine";
        local_4c0 = 0x800000000;
        local_4c8 = 0x10000000;
        local_4d0 = 8;
        local_4d8 = CONCAT44(local_4d8._4_4_,0x3f0);
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar33 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_4a0 = &local_3d0;
        local_3d0 = FUN_1449e2820;
        local_490 = FUN_14081d0ea;
        local_498 = FUN_14081d0ea;
        local_4a8 = &LAB_1468c5283;
        local_4b0 = FUN_142809da0;
        local_4b8 = L"Engine";
        local_4c0 = 0x400000000;
        local_4c8 = 0x10000000;
        local_4d0 = 8;
        local_4d8 = CONCAT44(local_4d8._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar22 = param_1[4];
      if (lVar22 == 0) goto LAB_14113b219;
      iVar7 = *(int *)(lVar33 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < iVar7) ||
           (lVar31 = lVar22,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar7 * 8)
           != lVar33 + 0x30)) {
          lVar31 = 0;
        }
      } while ((lVar31 == 0) && (lVar22 = *(longlong *)(lVar22 + 0x20), lVar22 != 0));
      if (lVar31 == 0) goto LAB_14113b219;
      lVar33 = *(longlong *)(lVar31 + 0xc0);
    }
    else {
LAB_14113b219:
      lVar33 = 0;
    }
    bVar28 = *(byte *)(lVar33 + 0x152);
    if ((bVar28 != 1) && ((6 < bVar28 || ((0x68U >> (bVar28 & 0x1f) & 1) == 0)))) {
      iVar7 = (int)param_1[0x4d];
      dVar85 = local_488;
      if (iVar7 == 0) {
        uVar9 = 0;
        uVar36 = 1;
        iVar18 = 0;
        iVar29 = 0;
      }
      else {
        puVar30 = (uint *)param_1[0x4c];
        if ((uint *)param_1[0x4c] == (uint *)0x0) {
          puVar30 = (uint *)(param_1 + 0x4a);
        }
        uVar16 = *puVar30;
        if (uVar16 == 0) {
          iVar18 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar18 = iVar7 + -1;
          }
          uVar9 = 0;
          uVar36 = (ulonglong)(uint)(iVar18 >> 5);
          if (iVar18 >> 5 < 1) {
            uVar36 = uVar9;
          }
          iVar29 = 0;
          do {
            if (uVar36 == uVar9) goto LAB_14113a303;
            iVar29 = iVar29 + 0x20;
            uVar16 = puVar30[uVar9 + 1];
            uVar9 = uVar9 + 1;
          } while (uVar16 == 0);
        }
        else {
          uVar9 = 0;
          iVar29 = 0;
        }
        uVar36 = (ulonglong)(-uVar16 & uVar16);
        uVar1 = uVar36 * 2 + 1;
        lVar33 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar33 == 0; lVar33 = lVar33 + -1) {
          }
        }
        iVar18 = (iVar29 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar18) {
          iVar18 = iVar7;
        }
      }
      if (iVar18 != iVar7) {
        uVar16 = 0xffffffff;
        iVar17 = iVar7;
        do {
          if (*(longlong *)(param_1[0x48] + (longlong)iVar18 * 0x10) != 0) {
            FUN_14072bf6a();
            iVar17 = (int)param_1[0x4d];
          }
          uVar16 = uVar16 & ~(uint)uVar36;
          puVar30 = (uint *)param_1[0x4c];
          if ((uint *)param_1[0x4c] == (uint *)0x0) {
            puVar30 = (uint *)(param_1 + 0x4a);
          }
          iVar18 = (int)uVar9;
          lVar33 = (longlong)iVar18;
          uVar19 = puVar30[lVar33] & uVar16;
          if (uVar19 == 0) {
            iVar20 = iVar17 + 0x1e;
            if (-1 < iVar17 + -1) {
              iVar20 = iVar17 + -1;
            }
            iVar20 = iVar20 >> 5;
            iVar29 = iVar29 + 0x20;
            iVar21 = iVar20;
            if (iVar20 < iVar18) {
              iVar21 = iVar18;
            }
            if (iVar18 < iVar20) {
              lVar22 = 0;
              do {
                uVar19 = puVar30[lVar33 + lVar22 + 1];
                if (uVar19 != 0) {
                  uVar9 = (ulonglong)(iVar18 + (int)lVar22 + 1);
                  uVar16 = 0xffffffff;
                  goto LAB_14113b03f;
                }
                iVar29 = iVar29 + 0x20;
                lVar22 = lVar22 + 1;
              } while (iVar21 - lVar33 != lVar22);
              uVar16 = 0xffffffff;
              iVar18 = iVar21;
            }
            uVar9 = (ulonglong)(iVar18 + 1);
            iVar18 = iVar17;
          }
          else {
LAB_14113b03f:
            uVar36 = (ulonglong)(-uVar19 & uVar19);
            uVar1 = uVar36 * 2 + 1;
            lVar33 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar33 == 0; lVar33 = lVar33 + -1) {
              }
            }
            iVar18 = (iVar29 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
            if (iVar17 <= iVar18) {
              iVar18 = iVar17;
            }
          }
        } while (iVar18 != iVar7);
      }
    }
LAB_14113a303:
    FUN_140a68de8(param_1[2],param_1);
    if (dVar85 != 0.0) {
      FUN_1479b6970(dVar85,param_1,1);
    }
    uVar32 = local_478._0_1_;
    pbVar34 = (byte *)local_468._0_8_;
    if (local_2e8 != (code **)0x0) {
      FUN_1400020a8();
    }
    pcVar90 = local_2d8;
    pppuVar13 = local_2c8;
    if (local_2c8 == (undefined ***)0x0) {
      pppuVar13 = &local_2b8;
    }
    uVar12 = (*(code *)(*pppuVar13)[1])();
    (*pcVar90)(uVar12);
    if (local_2d8 != (code *)0x0) {
      pppuVar13 = &local_2b8;
      if (local_2c8 != (undefined ***)0x0) {
        pppuVar13 = local_2c8;
      }
      (*(code *)(*pppuVar13)[2])(pppuVar13);
    }
    if (local_1d8 != (code **)0x0) {
      FUN_1400020a8();
    }
    if (local_108 != (code **)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14113a3b8:
  if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar33 = param_1[4], lVar33 != 0)) &&
     (-1 < (short)*(undefined4 *)(lVar33 + 8))) {
    uVar16 = *(uint *)(lVar33 + 0xc);
    if ((int)uVar16 < DAT_14c9647dc) {
      lVar33 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
    }
    else {
      lVar33 = 0;
    }
    if ((*(uint *)(lVar33 + 8) >> 0x1c & 1) != 0) goto LAB_14113aeea;
    if (DAT_14cae8b20 == 0) {
      local_4a0 = &local_1c8;
      local_1c8 = (code *)&LAB_14355090c;
      local_490 = FUN_14081d0ea;
      local_498 = FUN_14081d0ea;
      local_4a8 = &LAB_147b8e16d;
      local_4b0 = (code *)&LAB_140810a38;
      local_4b8 = L"Engine";
      local_4c0 = 0x800000000;
      local_4c8 = 0x10000000;
      local_4d0 = 8;
      local_4d8 = CONCAT44(local_4d8._4_4_,0x3f0);
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar33 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_4a0 = &local_1c8;
      local_1c8 = FUN_1449e2820;
      local_490 = FUN_14081d0ea;
      local_498 = FUN_14081d0ea;
      local_4a8 = &LAB_1468c5283;
      local_4b0 = FUN_142809da0;
      local_4b8 = L"Engine";
      local_4c0 = 0x400000000;
      local_4c8 = 0x10000000;
      local_4d0 = 8;
      local_4d8 = CONCAT44(local_4d8._4_4_,0x50);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar22 = param_1[4];
    if (lVar22 == 0) goto LAB_14113aeea;
    iVar7 = *(int *)(lVar33 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < iVar7) ||
         (lVar31 = lVar22,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
         lVar33 + 0x30)) {
        lVar31 = 0;
      }
    } while ((lVar31 == 0) && (lVar22 = *(longlong *)(lVar22 + 0x20), lVar22 != 0));
    if (lVar31 == 0) goto LAB_14113aeea;
    uVar12 = *(undefined8 *)(lVar31 + 0xc0);
  }
  else {
LAB_14113aeea:
    uVar12 = 0;
  }
  FUN_1414514e6(uVar12,param_1,0);
  (**(code **)(*param_1 + 0x4f0))(param_1,&local_438);
  if (local_3c8 != (code *)0x0) {
    FUN_1400020a8();
  }
  *pbVar34 = *pbVar34 & 0xdf;
  if (DAT_14cac9ed8 != DAT_14cac9efc) {
    uVar16 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
             -0x7a143595;
    uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
    puVar14 = &DAT_14cac9f00;
    if (DAT_14cac9f08 != (undefined *)0x0) {
      puVar14 = DAT_14cac9f08;
    }
    iVar7 = *(int *)(puVar14 +
                    ((longlong)(int)(uVar16 >> 0x10 ^ uVar16) & (longlong)DAT_14cac9f10 - 1U) * 4);
    if (iVar7 != -1) {
      puVar26 = DAT_14cac9ed0;
      if (DAT_14cac9ed0 == (undefined *)0x0) {
        puVar26 = &DAT_14cac9d50;
      }
LAB_14113aa0a:
      lVar33 = (longlong)iVar7 * 0x60;
      if (*(longlong **)(puVar26 + lVar33) != param_1) goto code_r0x00014113aa1f;
      iVar18 = *(int *)(puVar14 + (longlong)*(int *)(puVar26 + lVar33 + 0x5c) * 4);
      if (iVar18 == iVar7) {
        piVar24 = (int *)(puVar14 + (longlong)*(int *)(puVar26 + lVar33 + 0x5c) * 4);
      }
      else {
        do {
          piVar24 = (int *)(puVar26 + (longlong)iVar18 * 0x60 + 0x58);
          iVar18 = *piVar24;
        } while (iVar18 != iVar7);
      }
      *piVar24 = *(int *)(puVar26 + lVar33 + 0x58);
      puVar14 = &DAT_14cac9d50;
      if (DAT_14cac9ed0 != (undefined *)0x0) {
        puVar14 = DAT_14cac9ed0;
      }
      *(undefined4 *)(puVar14 + lVar33 + 0x50) = 0;
      if (*(longlong *)(puVar14 + lVar33 + 0x48) != 0) {
        FUN_1400020a8();
      }
      FUN_140f9dba8(puVar14 + lVar33 + 8);
      FUN_1433c19a2(iVar7);
    }
  }
LAB_14113a4c0:
  bVar35 = true;
  DAT_14c872b88 = uVar32;
  if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar33 = param_1[4], lVar33 != 0)) &&
     (-1 < (short)*(undefined4 *)(lVar33 + 8))) {
    uVar16 = *(uint *)(lVar33 + 0xc);
    if ((int)uVar16 < DAT_14c9647dc) {
      lVar33 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
    }
    else {
      lVar33 = 0;
    }
    if ((*(uint *)(lVar33 + 8) >> 0x1c & 1) != 0) goto LAB_14113a5b3;
    if (DAT_14cae8b20 == 0) {
      local_4a0 = &local_1c8;
      local_1c8 = (code *)&LAB_14355090c;
      local_490 = FUN_14081d0ea;
      local_498 = FUN_14081d0ea;
      local_4a8 = &LAB_147b8e16d;
      local_4b0 = (code *)&LAB_140810a38;
      local_4b8 = L"Engine";
      local_4c0 = 0x800000000;
      local_4c8 = 0x10000000;
      local_4d0 = 8;
      local_4d8 = CONCAT44(local_4d8._4_4_,0x3f0);
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar33 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_4a0 = &local_1c8;
      local_1c8 = FUN_1449e2820;
      local_490 = FUN_14081d0ea;
      local_498 = FUN_14081d0ea;
      local_4a8 = &LAB_1468c5283;
      local_4b0 = FUN_142809da0;
      local_4b8 = L"Engine";
      local_4c0 = 0x400000000;
      local_4c8 = 0x10000000;
      local_4d0 = 8;
      local_4d8 = CONCAT44(local_4d8._4_4_,0x50);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar22 = param_1[4];
    if (lVar22 == 0) goto LAB_14113a5b3;
    iVar7 = *(int *)(lVar33 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < iVar7) ||
         (lVar31 = lVar22,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
         lVar33 + 0x30)) {
        lVar31 = 0;
      }
    } while ((lVar31 == 0) && (lVar22 = *(longlong *)(lVar22 + 0x20), lVar22 != 0));
    if ((lVar31 == 0) || (lVar33 = *(longlong *)(lVar31 + 0xc0), lVar33 == 0)) goto LAB_14113a5b3;
    if (((*(char *)(lVar33 + 0x154) < '\0') && (*(longlong *)(lVar33 + 0x30) != 0)) &&
       (*(int *)(*(longlong *)(lVar33 + 0x30) + 0xa8) != 0)) {
      (**(code **)(*param_1 + 0x478))(param_1);
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    bVar35 = false;
  }
  else {
LAB_14113a5b3:
    bVar4 = false;
    lVar33 = 0;
  }
  if (((*(byte *)((longlong)param_1 + 0x61) & 4) == 0) || ((char)param_1[0xd] != '\x03')) {
    bVar28 = 0;
  }
  else {
    bVar28 = DAT_14c872b89 ^ 1;
  }
  if (!bVar4) {
    FUN_144757f48(param_1,0x40000000);
    uVar16 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar16 < DAT_14c9647dc) {
      lVar33 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
    }
    else {
      lVar33 = 0;
    }
    do {
      uVar16 = *(uint *)(lVar33 + 8);
      if ((uVar16 >> 0x15 & 1) != 0) break;
      LOCK();
      bVar35 = uVar16 == *(uint *)(lVar33 + 8);
      if (bVar35) {
        *(uint *)(lVar33 + 8) = uVar16 | 0x200000;
      }
      UNLOCK();
    } while (!bVar35);
    FUN_14472eae2(param_1,0x40000000);
    uVar16 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar16 < DAT_14c9647dc) {
      lVar33 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
    }
    else {
      lVar33 = 0;
    }
    do {
      uVar16 = *(uint *)(lVar33 + 8);
      uVar36 = (ulonglong)uVar16;
      if ((uVar16 >> 0x15 & 1) == 0) break;
      LOCK();
      uVar19 = *(uint *)(lVar33 + 8);
      if (uVar16 == uVar19) {
        *(uint *)(lVar33 + 8) = uVar16 & 0xffdfffff;
      }
      else {
        uVar36 = (ulonglong)uVar19;
      }
      UNLOCK();
    } while (uVar16 != uVar19);
    goto LAB_14113ab72;
  }
  plVar27 = param_1;
  FUN_1433b9fd2();
  uVar8 = SUB84(plVar27,0);
  if (bVar35) goto LAB_14113a5ed;
  cVar6 = *(char *)((longlong)param_1 + 0x17a);
  if (cVar6 == '\x04') {
    lVar22 = param_1[0x39];
    if (lVar22 == 0) {
      local_288 = DAT_14c846508;
      local_298 = DAT_14c8464f8;
      dStack_290 = DAT_14c846500;
LAB_14113ac90:
      local_1b8 = DAT_14c8464f0;
      local_1c8 = DAT_14c8464e0;
      dStack_1c0 = DAT_14c8464e8;
    }
    else {
      pcVar90 = *(code **)(lVar22 + 0x240);
      dVar85 = *(double *)(lVar22 + 0x248);
      dVar37 = *(double *)(lVar22 + 0x250);
      dVar38 = *(double *)(lVar22 + 600);
      pdVar15 = *(double **)(lVar22 + 0x228);
      pppuVar13 = (undefined ***)&DAT_00000004;
      local_1c8 = pcVar90;
      dStack_1c0 = dVar85;
      local_1b8 = dVar37;
      dStack_1b0 = dVar38;
      if (pdVar15 == (double *)0x0) {
        uVar8 = 0x40;
        pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
        dVar39 = DAT_14c8463d8;
        *pdVar15 = DAT_14c8463d0;
        pdVar15[1] = dVar39;
        dVar39 = DAT_14c8463e8;
        pdVar15[2] = DAT_14c8463e0;
        pdVar15[3] = dVar39;
        dVar39 = DAT_14c846500;
        pdVar15[4] = (double)DAT_14c8464f8;
        pdVar15[5] = dVar39;
        pppuVar13 = DAT_14c846508;
        pdVar15[6] = (double)DAT_14c846508;
        *(double **)(lVar22 + 0x228) = pdVar15;
      }
      auVar77._8_8_ = -(ulonglong)(dVar85 != pdVar15[1]);
      auVar77._0_8_ = -(ulonglong)((double)pcVar90 != *pdVar15);
      auVar83._8_8_ = -(ulonglong)(dVar38 != pdVar15[3]);
      auVar83._0_8_ = -(ulonglong)(dVar37 != pdVar15[2]);
      iVar7 = movmskpd((int)pppuVar13,auVar77);
      uVar16 = movmskpd(uVar8,auVar83);
      if ((uVar16 & 0x3fffffff) != 0 || iVar7 != 0) {
        pdVar15[2] = local_1b8;
        pdVar15[3] = dStack_1b0;
        *pdVar15 = (double)local_1c8;
        pdVar15[1] = dStack_1c0;
        FUN_1448052ee(&local_1c8,&local_298);
        pdVar15[6] = (double)local_288;
        pdVar15[4] = (double)local_298;
        pdVar15[5] = dStack_290;
      }
      local_288 = (undefined ***)pdVar15[6];
      local_298 = (code *)pdVar15[4];
      dStack_290 = pdVar15[5];
      lVar22 = param_1[0x39];
      if (lVar22 == 0) goto LAB_14113ac90;
      local_1c8 = *(code **)(lVar22 + 0x260);
      dStack_1c0 = *(double *)(lVar22 + 0x268);
      local_1b8 = *(double *)(lVar22 + 0x270);
    }
    local_4d8 = 0;
    cVar6 = FUN_140c59c06(lVar33,param_1,&local_1c8,&local_298);
    if (cVar6 != '\0') {
LAB_14113acdc:
      FUN_140aeefbc(param_1,0,1);
    }
  }
  else if (cVar6 == '\x03') {
    lVar22 = param_1[0x39];
    if (lVar22 == 0) {
      local_398 = DAT_14c8464f0;
      local_3a8 = DAT_14c8464e0;
      dStack_3a0 = DAT_14c8464e8;
      local_2c8 = DAT_14c846508;
      local_2d8 = DAT_14c8464f8;
      dStack_2d0 = DAT_14c846500;
    }
    else {
      local_3a8 = *(code **)(lVar22 + 0x260);
      dStack_3a0 = *(double *)(lVar22 + 0x268);
      local_398 = *(double *)(lVar22 + 0x270);
      pcVar90 = *(code **)(lVar22 + 0x240);
      dVar85 = *(double *)(lVar22 + 0x248);
      dVar37 = *(double *)(lVar22 + 0x250);
      dVar38 = *(double *)(lVar22 + 600);
      pdVar15 = *(double **)(lVar22 + 0x228);
      pppuVar13 = (undefined ***)&DAT_00000003;
      local_1c8 = pcVar90;
      dStack_1c0 = dVar85;
      local_1b8 = dVar37;
      dStack_1b0 = dVar38;
      if (pdVar15 == (double *)0x0) {
        uVar8 = 0x40;
        pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
        dVar39 = DAT_14c8463d8;
        *pdVar15 = DAT_14c8463d0;
        pdVar15[1] = dVar39;
        dVar39 = DAT_14c8463e8;
        pdVar15[2] = DAT_14c8463e0;
        pdVar15[3] = dVar39;
        dVar39 = DAT_14c846500;
        pdVar15[4] = (double)DAT_14c8464f8;
        pdVar15[5] = dVar39;
        pppuVar13 = DAT_14c846508;
        pdVar15[6] = (double)DAT_14c846508;
        *(double **)(lVar22 + 0x228) = pdVar15;
      }
      auVar76._8_8_ = -(ulonglong)(dVar85 != pdVar15[1]);
      auVar76._0_8_ = -(ulonglong)((double)pcVar90 != *pdVar15);
      auVar82._8_8_ = -(ulonglong)(dVar38 != pdVar15[3]);
      auVar82._0_8_ = -(ulonglong)(dVar37 != pdVar15[2]);
      iVar7 = movmskpd((int)pppuVar13,auVar76);
      uVar16 = movmskpd(uVar8,auVar82);
      if ((uVar16 & 0x3fffffff) != 0 || iVar7 != 0) {
        pdVar15[2] = local_1b8;
        pdVar15[3] = dStack_1b0;
        *pdVar15 = (double)local_1c8;
        pdVar15[1] = dStack_1c0;
        FUN_1448052ee(&local_1c8,&local_298);
        pdVar15[6] = (double)local_288;
        pdVar15[4] = (double)local_298;
        pdVar15[5] = dStack_290;
      }
      local_2c8 = (undefined ***)pdVar15[6];
      local_2d8 = (code *)pdVar15[4];
      dStack_2d0 = pdVar15[5];
    }
    local_288 = local_2c8;
    local_298 = local_2d8;
    dStack_290 = dStack_2d0;
    cVar6 = FUN_140d7405c(lVar33,param_1,&local_3a8);
    if (cVar6 == '\0') goto LAB_14113acdc;
LAB_14113ad67:
    local_3b8 = local_2c8;
    local_3c8 = local_2d8;
    dStack_3c0 = dStack_2d0;
    lVar22 = param_1[0x39];
    if (lVar22 != 0) {
      local_1b8 = local_398 - *(double *)(lVar22 + 0x270);
      dStack_1c0 = dStack_3a0 - *(double *)(lVar22 + 0x268);
      local_1c8 = (code *)((double)local_3a8 - *(double *)(lVar22 + 0x260));
      local_4c8 = CONCAT31(local_4c8._1_3_,1);
      local_4d0 = 0;
      local_4d8 = 0;
      FUN_1407fd932(lVar22,&local_1c8,&local_3c8,0);
    }
  }
  else if (cVar6 == '\x02') {
    lVar22 = param_1[0x39];
    if (lVar22 == 0) {
      local_398 = DAT_14c8464f0;
      local_3a8 = DAT_14c8464e0;
      dStack_3a0 = DAT_14c8464e8;
      local_2c8 = DAT_14c846508;
      local_2d8 = DAT_14c8464f8;
      dStack_2d0 = DAT_14c846500;
    }
    else {
      local_3a8 = *(code **)(lVar22 + 0x260);
      dStack_3a0 = *(double *)(lVar22 + 0x268);
      local_398 = *(double *)(lVar22 + 0x270);
      pcVar90 = *(code **)(lVar22 + 0x240);
      dVar85 = *(double *)(lVar22 + 0x248);
      dVar37 = *(double *)(lVar22 + 0x250);
      dVar38 = *(double *)(lVar22 + 600);
      pdVar15 = *(double **)(lVar22 + 0x228);
      pppuVar13 = (undefined ***)0x2;
      local_1c8 = pcVar90;
      dStack_1c0 = dVar85;
      local_1b8 = dVar37;
      dStack_1b0 = dVar38;
      if (pdVar15 == (double *)0x0) {
        uVar8 = 0x40;
        pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
        dVar39 = DAT_14c8463d8;
        *pdVar15 = DAT_14c8463d0;
        pdVar15[1] = dVar39;
        dVar39 = DAT_14c8463e8;
        pdVar15[2] = DAT_14c8463e0;
        pdVar15[3] = dVar39;
        dVar39 = DAT_14c846500;
        pdVar15[4] = (double)DAT_14c8464f8;
        pdVar15[5] = dVar39;
        pppuVar13 = DAT_14c846508;
        pdVar15[6] = (double)DAT_14c846508;
        *(double **)(lVar22 + 0x228) = pdVar15;
      }
      auVar75._8_8_ = -(ulonglong)(dVar85 != pdVar15[1]);
      auVar75._0_8_ = -(ulonglong)((double)pcVar90 != *pdVar15);
      auVar81._8_8_ = -(ulonglong)(dVar38 != pdVar15[3]);
      auVar81._0_8_ = -(ulonglong)(dVar37 != pdVar15[2]);
      iVar7 = movmskpd((int)pppuVar13,auVar75);
      uVar16 = movmskpd(uVar8,auVar81);
      if ((uVar16 & 0x3fffffff) != 0 || iVar7 != 0) {
        pdVar15[2] = local_1b8;
        pdVar15[3] = dStack_1b0;
        *pdVar15 = (double)local_1c8;
        pdVar15[1] = dStack_1c0;
        FUN_1448052ee(&local_1c8,&local_298);
        pdVar15[6] = (double)local_288;
        pdVar15[4] = (double)local_298;
        pdVar15[5] = dStack_290;
      }
      local_2c8 = (undefined ***)pdVar15[6];
      local_2d8 = (code *)pdVar15[4];
      dStack_2d0 = pdVar15[5];
    }
    local_288 = local_2c8;
    local_298 = local_2d8;
    dStack_290 = dStack_2d0;
    cVar6 = FUN_140d7405c(lVar33,param_1,&local_3a8);
    if (cVar6 != '\0') goto LAB_14113ad67;
  }
LAB_14113a5ed:
  uVar36 = (ulonglong)*(uint *)(param_1 + 1);
  if ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0) {
    (**(code **)(*param_1 + 0x480))(param_1);
    uVar36 = (ulonglong)*(uint *)(param_1 + 1);
    if ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0) {
      if ((*(byte *)((longlong)param_1 + 100) & 2) == 0) {
        FUN_144750a86(param_1,&local_3a8,0,0);
        pcVar90 = local_3a8;
        if (dStack_3a0._0_4_ == 0) {
          pcVar90 = (code *)&DAT_149dfb77a;
        }
        uVar36 = FUN_140033559(".\\Runtime/Engine/Private/Actor.cpp",0x102c,
                               L"%s failed to route PostInitializeComponents.  Please call Super::PostInitializeComponents() in your <className>::PostInitializeComponents() function. "
                               ,pcVar90);
        if (local_3a8 != (code *)0x0) {
          uVar36 = FUN_1400020a8();
        }
      }
      if (((bVar28 & 1) == 0) &&
         ((DAT_14cac95e8 != 0 ||
          ((((*(byte *)(lVar33 + 0x155) & 1) != 0 &&
            (uVar36 = *(ulonglong *)(lVar33 + 0x30), uVar36 != 0)) && (*(int *)(uVar36 + 0xa8) != 0)
           ))))) {
        if (((((*(int *)((longlong)param_1 + 0x1ec) != 0) &&
              (uVar16 = *(uint *)(param_1 + 0x3d), -1 < (int)uVar16)) &&
             ((int)uVar16 < DAT_14c9647dc)) &&
            ((plVar27 = (longlong *)
                        ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
             plVar27 != (longlong *)0x0 && ((int)plVar27[2] == *(int *)((longlong)param_1 + 0x1ec)))
            )) && (((*(uint *)(plVar27 + 1) & 0x10200000) == 0 &&
                   ((*plVar27 != 0 && (lVar33 = *(longlong *)(*plVar27 + 0xa8), lVar33 != 0)))))) {
          uVar16 = *(byte *)(lVar33 + 0x65) & 0x18;
          uVar36 = (ulonglong)uVar16;
          if ((uVar16 != 0x10) && (uVar16 != 8)) goto LAB_14113ab72;
        }
        uVar36 = FUN_1405f107a(param_1,0);
      }
    }
  }
LAB_14113ab72:
  if ((local_f0 ^ (ulonglong)auStack_4f8) == DAT_14c707940) {
    return uVar36;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014113aa1f:
  iVar7 = *(int *)(puVar26 + lVar33 + 0x58);
  if (iVar7 == -1) goto LAB_14113a4c0;
  goto LAB_14113aa0a;
}



// FUNCTION 14113bbde FUN_14113bbde body=975 status=ok
// SIG undefined FUN_14113bbde(void)

undefined4 FUN_14113bbde(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  uint local_bc;
  ulonglong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar5 = *(int *)((longlong)param_2 + 0xc);
  FUN_144a65a1e(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  local_c8 = param_2;
  if ((iVar5 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_145811e2e(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar9 != 0) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar9);
    }
    FUN_14113c3d0(&local_98,uVar9);
    if (uVar9 < 4) {
      iVar5 = 1;
    }
    else {
      uVar9 = (uVar9 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_14113c126();
    }
  }
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)local_c8 + 0xc) < iVar5) {
    FUN_145811e2e();
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  if ((int)param_1[5] == 0) {
    uVar11 = 1;
    uVar13 = 0xffffffff;
    local_a8._4_4_ = 0;
    local_b8._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    uVar11 = local_b8 >> 0x20;
    uVar13 = local_a8 & 0xffffffff;
  }
  plVar4 = local_b0;
  iVar5 = (int)local_b0[3];
  iVar16 = (int)local_b8;
  iVar6 = local_a8._4_4_;
  iVar15 = local_a0;
  if (local_a8._4_4_ < iVar5) {
    do {
      local_bc = (uint)uVar13;
      plVar10 = (longlong *)(*param_1 + (longlong)iVar6 * 0x30);
      if ((int)uStack_90 != local_64) {
        lVar14 = *plVar10;
        uVar9 = (uint)((ulonglong)lVar14 >> 0x10);
        uVar12 = (uint)lVar14 & 0xffff;
        puVar7 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar7 = local_60;
        }
        for (iVar2 = *(int *)(puVar7 + (ulonglong)
                                       (local_50 - 1U &
                                       (int)((ulonglong)lVar14 >> 0x20) +
                                       ((uint)lVar14 << 0x10 | uVar12) +
                                       (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar12 >> 4)) * 4);
            iVar2 != -1; iVar2 = *(int *)((longlong)iVar2 * 0x20 + local_98 + 0x18)) {
          if (*(longlong *)(local_98 + (longlong)iVar2 * 0x20) == lVar14) goto LAB_14113be4f;
        }
      }
      iVar5 = (int)local_c8[1];
      lVar14 = (longlong)iVar5;
      *(uint *)(local_c8 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)local_c8 + 0xc) < iVar5 + 1U) {
        FUN_14011bb82(local_c8,iVar5);
      }
      lVar8 = *local_c8;
      *(longlong *)(lVar8 + lVar14 * 0x18) = *plVar10;
      *(longlong *)(lVar8 + 8 + lVar14 * 0x18) = plVar10[1];
      lVar3 = plVar10[2];
      *(longlong *)(lVar8 + 0x10 + lVar14 * 0x18) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      FUN_14113bfae(&local_98,&local_b8,(longlong)iVar6 * 0x30 + *param_1,0);
      iVar5 = (int)plVar4[3];
LAB_14113be4f:
      uVar9 = local_bc & ~(uint)uVar11;
      uVar13 = (ulonglong)uVar9;
      plVar10 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar10 = plVar4;
      }
      lVar14 = (longlong)iVar16;
      uVar9 = *(uint *)((longlong)plVar10 + lVar14 * 4) & uVar9;
      if (uVar9 == 0) {
        iVar6 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar6 = iVar5 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar16) {
          iVar2 = iVar16;
        }
        if (iVar6 <= iVar16) break;
        lVar8 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar9 = *(uint *)((longlong)plVar10 + lVar8 * 4 + lVar14 * 4 + 4);
          if (uVar9 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar2 - lVar14 == lVar8) goto LAB_14113bede;
        }
        iVar16 = iVar16 + (int)lVar8 + 1;
        uVar13 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar11 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar6 = (iVar15 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar5);
  }
LAB_14113bede:
  lVar14 = local_c8[1];
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1405535a6(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (int)lVar14;
}



// FUNCTION 14113bfae FUN_14113bfae body=374 status=ok
// SIG undefined FUN_14113bfae(void)

undefined4 *
FUN_14113bfae(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14086bfec(param_1,local_48);
  uVar7 = *param_3;
  *local_40 = uVar7;
  local_40[1] = param_3[1];
  lVar5 = param_3[2];
  local_40[2] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    uVar7 = *local_40;
  }
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = (uint)((ulonglong)uVar7 >> 0x10);
  uVar3 = (uint)uVar7 & 0xffff;
  uVar6 = ((uint)uVar7 << 0x10 | uVar3) + (int)((ulonglong)uVar7 >> 0x20) +
          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar3 >> 4);
  local_58 = param_4;
  cVar1 = FUN_14086bf12(param_1,uVar6,local_40);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar3 < 4) {
      iVar4 = 1;
    }
    else {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14113c126(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113c126 FUN_14113c126 body=682 status=ok
// SIG undefined FUN_14113c126(void)

void FUN_14113c126(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_14113c19b;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_14113c19b:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar15 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x20;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x1c + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x18 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 14113c3d0 FUN_14113c3d0 body=721 status=ok
// SIG undefined FUN_14113c3d0(void)

void FUN_14113c3d0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  
  uVar14 = *(uint *)(param_1 + 1);
  uVar10 = param_2 - uVar14;
  if (uVar10 != 0 && (int)uVar14 <= (int)param_2) {
    uVar3 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    iVar12 = *(int *)((longlong)param_1 + 0xc);
    uVar8 = uVar14;
    if (iVar12 < (int)param_2) {
      FUN_1446f4a44(param_1);
      uVar8 = *(uint *)(param_1 + 1);
      iVar12 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = uVar8 + uVar10;
    if (iVar12 - uVar8 < uVar10) {
      FUN_1447711aa(param_1);
    }
    if ((int)uVar8 < (int)param_2) {
      lVar1 = *param_1;
      iVar12 = *(int *)((longlong)param_1 + 0x34);
      puVar7 = (undefined4 *)(uVar3 * 0x20 + lVar1 + -0x1c);
      do {
        iVar2 = (int)uVar3;
        if (iVar12 != 0) {
          *(int *)(lVar1 + (longlong)(int)param_1[6] * 0x20) = iVar2 + -1;
        }
        puVar7[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar11 = 0xffffffff;
        }
        else {
          uVar11 = (undefined4)param_1[6];
        }
        uVar3 = uVar3 - 1;
        *puVar7 = uVar11;
        *(int *)(param_1 + 6) = iVar2 + -1;
        iVar12 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar12;
        puVar7 = puVar7 + -8;
      } while ((longlong)(int)uVar8 < (longlong)uVar3);
    }
    if (uVar14 == 0) {
      *(uint *)(param_1 + 5) = uVar10;
      if (param_2 != 0) {
        plVar9 = param_1 + 2;
        uVar14 = uVar10 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar14) {
          FUN_14499171c(plVar9,0,uVar14,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar10 + 0x1f & 0xffffffe0;
        }
        plVar5 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar5 = plVar9;
        }
        if (uVar10 < 0x101) {
          uVar14 = uVar14 + (uVar14 == 0);
        }
        memset(plVar5,0,(ulonglong)(uVar14 << 2));
        iVar12 = (int)param_1[5];
        iVar2 = iVar12 + 0x1f;
        if (-1 < iVar12) {
          iVar2 = iVar12;
        }
        if (iVar12 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar9 = (longlong *)param_1[4];
          }
          bVar13 = -(char)(iVar12 % 0x20);
          *(uint *)((longlong)plVar9 + (longlong)(iVar2 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar9 + (longlong)(iVar2 >> 5) * 4) << (bVar13 & 0x1f)) >>
               (bVar13 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar10) {
      plVar9 = param_1 + 2;
      iVar12 = (int)param_1[5];
      if (param_2 != uVar14) {
        if (iVar12 == 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar2 = iVar12 + -1;
          }
          iVar2 = iVar2 >> 5;
        }
        iVar15 = iVar12 + uVar10;
        iVar4 = iVar12 + uVar10 + -1;
        iVar6 = iVar12 + uVar10 + 0x1e;
        if (-1 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar6 >> 5 == iVar2) {
          *(int *)(param_1 + 5) = iVar15;
        }
        else {
          if (*(int *)((longlong)param_1 + 0x2c) < iVar15) {
            if (iVar15 + 0x1fU < 0xa0) {
              iVar15 = 0x80;
              iVar2 = iVar12;
            }
            else {
              uVar14 = iVar15 + 0x1fU >> 5;
              if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
                uVar8 = 4;
                if (4 < uVar14) {
                  uVar8 = uVar14;
                }
              }
              else {
                uVar8 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
              }
              uVar3 = FUN_144a3809e(uVar8 << 2,0);
              iVar2 = (int)(uVar3 >> 2);
              iVar15 = -0x20;
              if ((int)uVar14 <= iVar2) {
                iVar15 = iVar2 << 5;
              }
              iVar2 = (int)param_1[5];
            }
            *(int *)((longlong)param_1 + 0x2c) = iVar15;
            FUN_1446efbd8(plVar9,iVar2);
            iVar15 = (int)param_1[5] + uVar10;
          }
          iVar2 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar2 = iVar15;
          }
          *(int *)(param_1 + 5) = iVar15;
          if (iVar15 % 0x20 != 0) {
            plVar5 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar5 = plVar9;
            }
            bVar13 = -(char)(iVar15 % 0x20);
            *(uint *)((longlong)plVar5 + (longlong)(iVar2 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar5 + (longlong)(iVar2 >> 5) * 4) << (bVar13 & 0x1f))
                 >> (bVar13 & 0x1f);
          }
        }
      }
      FUN_1447c6044(plVar9,iVar12,uVar10,0);
      return;
    }
  }
  return;
}



// FUNCTION 14113c6a6 FUN_14113c6a6 body=228 status=ok
// SIG undefined FUN_14113c6a6(void)

longlong FUN_14113c6a6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab2470 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147533729;
    local_40 = FUN_14633b5f4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneTrackTemplateProducer",&DAT_14cab2470,
                  &DAT_147533728);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2470;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113c790 FUN_14113c790 body=228 status=ok
// SIG undefined FUN_14113c790(void)

longlong FUN_14113c790(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1eb48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146428c48;
    local_38 = &LAB_147ea654d;
    local_40 = &LAB_14615c339;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x300;
    FUN_14081cfa3(L"/Script/AIModule",L"BehaviorTreeComponent",&DAT_14cb1eb48,FUN_146428c20);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1eb48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113c87a FUN_14113c87a body=228 status=ok
// SIG undefined FUN_14113c87a(void)

longlong FUN_14113c87a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4d658 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e62b54;
    local_38 = &LAB_14851cab9;
    local_40 = &LAB_145c8595a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"CreateMeshObjectTypeProperties",&DAT_14cb4d658,
                  FUN_146495072);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4d658;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113c964 FUN_14113c964 body=228 status=ok
// SIG undefined FUN_14113c964(void)

longlong FUN_14113c964(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb61e18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_1486dfccc;
    local_40 = &LAB_145df624e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x438;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerGroupState",&DAT_14cb61e18,FUN_1464f5bc2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb61e18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113ca4a FUN_14113ca4a body=196 status=ok
// SIG undefined FUN_14113ca4a(void)

void FUN_14113ca4a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = FUN_1400b465c();
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x40))) {
    lVar1 = **(longlong **)(lVar1 + 0x38);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) {
      return;
    }
    uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar3 = FUN_140334a94(lVar1,uVar2);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x398), lVar3 != 0)) {
      uVar2 = FUN_14001cc68(0x48,0x10);
      FUN_14113cb4a(uVar2,param_2,param_3,*(undefined4 *)(lVar3 + 0x394));
      FUN_14113cb0e(lVar1,uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14113cb0e FUN_14113cb0e body=60 status=ok
// SIG undefined FUN_14113cb0e(void)

void FUN_14113cb0e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    FUN_1400b4698();
  }
  lVar1 = FUN_1404960a8(param_1);
  if (lVar1 != 0) {
    FUN_14039144e(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 14113cb4a FUN_14113cb4a body=203 status=ok
// SIG undefined FUN_14113cb4a(void)

undefined8 *
FUN_14113cb4a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  void *pvVar2;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14b988950;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 8) = param_4;
  return param_1;
}



// FUNCTION 14113cc24 FUN_14113cc24 body=125 status=ok
// SIG undefined FUN_14113cc24(void)

undefined8 * FUN_14113cc24(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1cd0d0;
  param_1[0xe] = 0;
  param_1[0xf] = 0xffffffffffffffff;
  if ((param_1[0xd] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xd] + 0x50));
  }
  if ((param_1[6] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[6] + 0x50));
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14113cca2 FUN_14113cca2 body=295 status=ok
// SIG undefined FUN_14113cca2(void)

void FUN_14113cca2(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  ulonglong uVar8;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x2b0) = param_2;
  LOCK();
  *(undefined1 *)(param_1 + 0x2a8) = 1;
  lVar3 = DAT_14c990b58;
  UNLOCK();
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
    uVar8 = 0;
  }
  else if (iVar5 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar8 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar8 = 1;
  }
  if (*(char *)(lVar3 + uVar8) == '\x01') {
    lVar3 = *(longlong *)(param_1 + 0x1c8);
    plVar4 = *(longlong **)(param_1 + 0x1d0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      local_24 = 0;
      iVar5 = FUN_144b46310(*(undefined8 *)(param_1 + 0x278),0x200002);
      if (iVar5 == 0) {
        *(undefined4 *)(lVar3 + 0x30) = local_24;
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  FUN_14113cdca(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113cdca FUN_14113cdca body=210 status=ok
// SIG undefined FUN_14113cdca(void)

void FUN_14113cdca(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  if ((*(char *)(param_1 + 0x14b) == '\0') && (*(longlong *)(param_1 + 0x170) != 0)) {
    lVar4 = FUN_141054386();
    lVar4 = *(longlong *)(lVar4 + 0x20);
    plVar2 = *(longlong **)(param_1 + 0x170);
    plVar3 = *(longlong **)(param_1 + 0x178);
    if (plVar3 == (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2,*(undefined8 *)(lVar4 + 0x28));
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      (**(code **)(*plVar2 + 8))(plVar2,*(undefined8 *)(lVar4 + 0x28));
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x170) = 0;
    plVar2 = *(longlong **)(param_1 + 0x178);
    if (plVar2 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x178) = 0;
      LOCK();
      plVar3 = plVar2 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014113ce70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  return;
}



// FUNCTION 14113ce9c FUN_14113ce9c body=1 status=ok
// SIG undefined FUN_14113ce9c(void)

void FUN_14113ce9c(void)

{
  return;
}



// FUNCTION 14113ceb2 FUN_14113ceb2 body=134 status=ok
// SIG undefined FUN_14113ceb2(void)

void FUN_14113ceb2(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68 [2];
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_2;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xb0))();
  local_68[0] = 0;
  local_58 = (longlong *)0x0;
  (**(code **)(*plVar1 + 0x20))(plVar1,&local_70,local_68);
  if (local_68[0] != 0) {
    plVar1 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar1 = local_48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113cf3a FUN_14113cf3a body=259 status=ok
// SIG undefined FUN_14113cf3a(void)

void FUN_14113cf3a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  DWORD DVar2;
  longlong lVar3;
  DWORD DVar4;
  longlong lVar5;
  int iVar6;
  
  DVar2 = *(DWORD *)(param_1 + 0x140);
  DVar4 = GetCurrentThreadId();
  if (((DVar4 == DVar2) && (*(char *)(param_1 + 0x578) == '\x01')) &&
     (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc))) {
    lVar3 = *param_2;
    lVar5 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x108);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x110) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar3) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            lVar3 = *(longlong *)(param_1 + 0x90);
            lVar5 = (longlong)(int)plVar1[1] * 0x80;
            if (lVar3 + lVar5 != -0x10) {
              *(undefined1 *)(lVar3 + 0x70 + lVar5) = 2;
            }
          }
          break;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  FUN_14113d03e((longlong *)(param_1 + 0x90),*param_2,param_3);
  *param_2 = 0;
  FUN_141098246(param_1);
  return;
}



// FUNCTION 14113d03e FUN_14113d03e body=258 status=ok
// SIG undefined FUN_14113d03e(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014113d139 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14113d03e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_78;
  undefined8 local_68;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong lStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *param_3;
  lVar3 = param_3[2];
  param_3[2] = 0;
  local_48 = param_3[6];
  lStack_40 = param_3[7];
  uStack_50 = (undefined4)param_3[5];
  uStack_4c = *(undefined4 *)((longlong)param_3 + 0x2c);
  if (lVar2 != 0) {
    *param_3 = 0;
  }
  local_88 = param_2;
  local_78 = lVar2;
  puVar10 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar10 = 0;
  puVar10[2] = param_2;
  puVar10[4] = lVar2;
  puVar10[6] = lVar3;
  local_68 = 0;
  lVar3 = param_3[4];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar8 = param_3[5];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar9 = param_3[7];
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(puVar10 + 10) = (int)param_3[6];
  *(undefined4 *)((longlong)puVar10 + 0x54) = uVar6;
  *(int *)(puVar10 + 0xb) = (int)lVar9;
  *(undefined4 *)((longlong)puVar10 + 0x5c) = uVar7;
  *(int *)(puVar10 + 8) = (int)lVar3;
  *(undefined4 *)((longlong)puVar10 + 0x44) = uVar4;
  *(int *)(puVar10 + 9) = (int)lVar8;
  *(undefined4 *)((longlong)puVar10 + 0x4c) = uVar5;
  if (lVar2 != 0) {
    local_78 = 0;
  }
  uVar11 = 0;
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0xa0);
    *(undefined8 **)(param_1 + 0xa0) = puVar10;
    UNLOCK();
    LOCK();
    uVar11 = *puVar1;
    *puVar1 = puVar10;
    UNLOCK();
    if (local_78 != 0) {
      uVar11 = (**(code **)(local_58 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 14113d141 FUN_14113d141 body=75 status=ok
// SIG undefined FUN_14113d141(void)

void FUN_14113d141(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14113d18c FUN_14113d18c body=8 status=ok
// SIG undefined FUN_14113d18c(void)

void FUN_14113d18c(longlong param_1)

{
  *(byte *)(param_1 + 0x9f) = *(byte *)(param_1 + 0x9f) | 4;
  return;
}



// FUNCTION 14113d19a FUN_14113d19a body=221 status=ok
// SIG undefined FUN_14113d19a(void)

longlong FUN_14113d19a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb087a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147d30f4f;
    local_40 = &LAB_145cc614b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1e8;
    FUN_14081cfa3(L"/Script/Engine",L"SoundClass",&DAT_14cb087a8,&DAT_147d30f4e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb087a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113d27e FUN_14113d27e body=221 status=ok
// SIG undefined FUN_14113d27e(void)

longlong FUN_14113d27e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb08808 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147d310e5;
    local_40 = FUN_14640272e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/Engine",L"SoundConcurrency",&DAT_14cb08808,&DAT_147d310e4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb08808;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113d362 FUN_14113d362 body=221 status=ok
// SIG undefined FUN_14113d362(void)

longlong FUN_14113d362(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb08d48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147d3cb7c;
    local_40 = FUN_1464039db;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/Engine",L"SoundSubmixBase",&DAT_14cb08d48,FUN_1464039b4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb08d48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113d446 FUN_14113d446 body=221 status=ok
// SIG undefined FUN_14113d446(void)

longlong FUN_14113d446(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc1d870 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1494e6393;
    local_40 = FUN_140e64fff;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusNodePin",&DAT_14cc1d870,&DAT_1494e6392);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1d870;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113d524 FUN_14113d524 body=995 status=ok
// SIG undefined FUN_14113d524(void)

void FUN_14113d524(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar10 = param_1[8];
  iVar2 = *(int *)(lVar10 + 0x330);
  if ((longlong)iVar2 != 0) {
    lVar10 = *(longlong *)(lVar10 + 0x328);
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar10 + lVar9);
      bVar7 = *(char *)(lVar4 + 8) - 1;
      if ((bVar7 < 3) &&
         (plVar11 = (longlong *)
                    (*(longlong *)(&DAT_14b41bc80 + (ulonglong)bVar7 * 8) + (longlong)param_1),
         plVar11 != (longlong *)0x0)) {
        local_70 = param_1;
        FUN_14113da16(lVar4,&local_58,param_1);
        plVar8 = local_50;
        plVar6 = local_58;
        if (local_58 != (longlong *)0x0) {
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          iVar3 = (int)plVar11[1];
          *(uint *)(plVar11 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)plVar11 + 0xc) < iVar3 + 1U) {
            FUN_14113d908(plVar11,iVar3);
          }
          lVar4 = *plVar11;
          *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar6;
          *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar8;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            LOCK();
            plVar11 = plVar8 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
        }
        plVar11 = local_50;
        param_1 = local_70;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_50 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar9);
    lVar10 = param_1[8];
  }
  if (*(longlong *)(lVar10 + 0x338) != 0) {
    FUN_14891c21e(*(longlong *)(lVar10 + 0x338),&local_58,param_1);
    plVar11 = local_50;
    if ((longlong **)(param_1 + 0x1f) != &local_58) {
      param_1[0x1f] = (longlong)local_58;
      local_58 = (longlong *)0x0;
      plVar6 = (longlong *)param_1[0x20];
      if (local_50 != plVar6) {
        local_50 = (longlong *)0x0;
        param_1[0x20] = (longlong)plVar11;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar6 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
      }
    }
    plVar11 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    lVar10 = param_1[8];
  }
  if ((longlong)*(int *)(lVar10 + 0x360) != 0) {
    plVar11 = *(longlong **)(lVar10 + 0x358);
    lVar10 = (longlong)*(int *)(lVar10 + 0x360) << 4;
    do {
      if (*(longlong *)(*plVar11 + 8) != 0) {
        plVar8 = (longlong *)FUN_14001cc68(0x60,0x10);
        plVar8[1] = (longlong)&DAT_100000001;
        *plVar8 = (longlong)&PTR_FUN_14b41ba20;
        plVar6 = plVar8 + 2;
        FUN_14891b8d4(plVar6,param_1,plVar11);
        local_58 = plVar6;
        local_50 = plVar8;
        FUN_148919128(&local_58,plVar6);
        local_70 = local_58;
        uVar5 = *(undefined8 *)(*plVar11 + 8);
        plVar6 = *(longlong **)(*plVar11 + 0x10);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          plVar8 = plVar6 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        local_68 = uVar5;
        local_60 = plVar6;
        FUN_14891ba70(local_70,&local_68);
        plVar6 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_60 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        iVar2 = (int)param_1[0x28];
        *(uint *)(param_1 + 0x28) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x144) < iVar2 + 1U) {
          FUN_1489191cc(param_1 + 0x27,iVar2);
        }
        plVar6 = local_50;
        lVar9 = param_1[0x27];
        *(longlong **)(lVar9 + (longlong)iVar2 * 0x10) = local_58;
        *(longlong **)(lVar9 + 8 + (longlong)iVar2 * 0x10) = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_50 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
        }
      }
      plVar11 = plVar11 + 2;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
  }
  FUN_140d82b92(param_1[1],param_1);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14113d908 FUN_14113d908 body=269 status=ok
// SIG undefined FUN_14113d908(void)

void FUN_14113d908(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14113da16 FUN_14113da16 body=535 status=ok
// SIG undefined FUN_14113da16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14113da16(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_14113db46;
  }
  plVar2 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_14b41d3a0;
  plVar4 = plVar2 + 2;
  *plVar4 = 0;
  plVar2[3] = 0;
  plVar2[4] = param_3;
  plVar2[5] = 0;
  plVar2[6] = 0;
  if (plVar4 != (longlong *)0x0) {
    if (plVar2 == (longlong *)0x0) {
      _DAT_00000010 = 0x10;
      plVar5 = (longlong *)&DAT_00000018;
      plVar3 = _DAT_00000018;
      if (_DAT_00000018 != (longlong *)0x0) {
LAB_14113db74:
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
        *plVar5 = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) goto LAB_14113dab1;
      }
    }
    else {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      plVar2[2] = (longlong)plVar4;
      if ((longlong *)plVar2[3] != plVar2) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar2[3] != (longlong *)0x0) {
          plVar5 = plVar2 + 3;
          plVar3 = (longlong *)plVar2[3];
          goto LAB_14113db74;
        }
        plVar2[3] = (longlong)plVar2;
      }
LAB_14113dab1:
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  local_40 = *(undefined8 *)(param_1 + 0x10);
  plVar5 = *(longlong **)(param_1 + 0x18);
  if (plVar5 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    FUN_14113dc30(plVar4);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    local_38 = plVar5;
    FUN_14113dc30(plVar4);
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *param_2 = plVar4;
  param_2[1] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
LAB_14113db46:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14113dc30 FUN_14113dc30 body=795 status=ok
// SIG undefined FUN_14113dc30(void)

void FUN_14113dc30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_38);
  plVar5 = local_30;
  ppuVar1 = (undefined8 **)(param_1 + 3);
  if (ppuVar1 != &local_38) {
    param_1[3] = local_38;
    local_38 = (undefined8 *)0x0;
    plVar3 = (longlong *)param_1[4];
    if (local_30 != plVar3) {
      local_30 = (longlong *)0x0;
      param_1[4] = plVar5;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar3 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (*ppuVar1 == (undefined8 *)0x0) goto LAB_14113ddc8;
  FUN_14113df4c(*ppuVar1,param_1[2],param_2);
  lVar4 = param_1[3];
  local_38 = (undefined8 *)0x0;
  local_30 = (longlong *)((ulonglong)local_30 & 0xffffffff00000000);
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = (longlong *)CONCAT44(local_30._4_4_,3);
  plVar5 = (longlong *)param_1[1];
  if (plVar5 == (longlong *)0x0) {
LAB_14113de1b:
    *local_38 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_38[2] = lVar10;
    *local_38 = &PTR_FUN_14b41d330;
    local_38[3] = 0;
    local_38[4] = 0;
    local_38[5] = FUN_140e328f0;
  }
  else {
    iVar9 = (int)plVar5[1];
    do {
      if (iVar9 == 0) goto LAB_14113de1b;
      LOCK();
      iVar7 = (int)plVar5[1];
      bVar11 = iVar9 == iVar7;
      if (bVar11) {
        *(int *)(plVar5 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar6 = *param_1;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *local_38 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_38[2] = lVar10;
    *local_38 = &PTR_FUN_14b41d330;
    local_38[3] = uVar6;
    local_38[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    local_38[5] = FUN_140e328f0;
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_1448b6402(lVar4 + 0x18,local_40,&local_38);
  if ((int)local_30 == 0) {
LAB_14113ddb1:
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = (longlong *)((ulonglong)local_30 & 0xffffffff00000000);
    goto LAB_14113ddb1;
  }
  (**(code **)(**ppuVar1 + 0x10))();
LAB_14113ddc8:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14113df4c FUN_14113df4c body=137 status=ok
// SIG undefined FUN_14113df4c(void)

void FUN_14113df4c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined8 *)(param_1 + 0x58) = param_2;
  uVar2 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    plVar4 = *(longlong **)(param_1 + 0x68);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    plVar3 = *(longlong **)(param_1 + 0x68);
    if (plVar4 == plVar3) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 != 0) {
        return;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return;
      }
      goto LAB_14113dfac;
    }
    *(longlong **)(param_1 + 0x68) = plVar4;
    plVar4 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  LOCK();
  plVar3 = plVar4 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
LAB_14113dfac:
                    /* WARNING: Could not recover jumptable at 0x00014113dfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 14113dfd6 FUN_14113dfd6 body=298 status=ok
// SIG undefined FUN_14113dfd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14113dfd6(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b41d800;
  plVar1 = plVar3 + 2;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 2;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b3a4940;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  if (plVar3 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar5 = (longlong *)&DAT_00000020;
    plVar4 = _DAT_00000020;
    if (_DAT_00000020 != (longlong *)0x0) {
LAB_14113e0df:
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      *plVar5 = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) goto LAB_14113e069;
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar3;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar3[3] = (longlong)plVar1;
    if ((longlong *)plVar3[4] != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar3[4] != (longlong *)0x0) {
        plVar5 = plVar3 + 4;
        plVar4 = (longlong *)plVar3[4];
        goto LAB_14113e0df;
      }
      plVar3[4] = (longlong)plVar3;
    }
LAB_14113e069:
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return param_2;
}



// FUNCTION 14113e100 FUN_14113e100 body=914 status=ok
// SIG undefined FUN_14113e100(void)

void FUN_14113e100(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_118 [32];
  undefined8 **local_f8;
  undefined8 *local_e8;
  int local_e0;
  longlong local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [4];
  longlong local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1447f69b6(param_1 + 0x18);
  plVar9 = *(longlong **)(param_1 + 0x60);
  if (plVar9 == (longlong *)0x0) goto LAB_14113e326;
  lVar5 = (**(code **)(*plVar9 + 8))(plVar9);
  lVar6 = FUN_14113e494();
  if (((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_14113e326;
  (**(code **)(*plVar9 + 0x20))(plVar9,&local_d8,*(undefined8 *)(param_1 + 0x58));
  if (local_d0 == 0) {
    local_d0 = 0;
  }
  else {
    local_98 = (longlong *)0x0;
    local_68 = 0;
    local_58 = (longlong *)0x0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))();
    local_e8 = (undefined8 *)0x0;
    local_e0 = 0;
    FUN_1446efa72(&local_e8,0,3,0x10);
    local_e0 = 3;
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_14113e38e:
      *local_e8 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_e8[2] = lVar6;
      *local_e8 = &PTR_FUN_14b41d790;
      local_e8[3] = 0;
      local_e8[4] = 0;
      local_e8[5] = FUN_14113e51c;
    }
    else {
      iVar4 = (int)plVar9[1];
      do {
        if (iVar4 == 0) goto LAB_14113e38e;
        LOCK();
        iVar3 = (int)plVar9[1];
        bVar10 = iVar4 == iVar3;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar10);
      uVar7 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      *local_e8 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_e8[2] = lVar6;
      *local_e8 = &PTR_FUN_14b41d790;
      local_e8[3] = uVar7;
      local_e8[4] = plVar9;
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      local_e8[5] = FUN_14113e51c;
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    uVar7 = FUN_140672052(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
    uVar8 = FUN_140d84280(param_1 + 0x70);
    local_f8 = &local_e8;
    FUN_140d84456(uVar8,&local_d8,uVar7,&local_c8);
    if (local_e0 == 0) {
LAB_14113e2cb:
      if (local_e8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_e8 != (undefined8 *)0x0) {
      (**(code **)*local_e8)(local_e8,0);
      FUN_1446efa72(&local_e8,0,0,0x10);
      local_e0 = 0;
      goto LAB_14113e2cb;
    }
    if (local_68 != 0) {
      plVar9 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar9 = local_48;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  FUN_1447cd778(local_d8,local_d0);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
LAB_14113e326:
  FUN_14113e51c(param_1);
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14113e494 FUN_14113e494 body=57 status=ok
// SIG undefined FUN_14113e494(void)

void FUN_14113e494(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e058 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e058 = FUN_140002ddd(FUN_14653958d,uVar1,L"ObjectiveValueEvaluator_FactExpressionBase")
    ;
  }
  return;
}



// FUNCTION 14113e4ce FUN_14113e4ce body=78 status=ok
// SIG undefined FUN_14113e4ce(void)

undefined8 * FUN_14113e4ce(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_14055313c(param_2,iVar1,0);
    FUN_140553097(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 14113e51c FUN_14113e51c body=182 status=ok
// SIG undefined FUN_14113e51c(void)

void FUN_14113e51c(longlong param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    FUN_140a2633e(*(longlong *)(param_1 + 0x70),&local_58);
  }
  FUN_140459c40(&local_58,local_40);
  FUN_14113e5d4(param_1,local_40);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_40;
    if (0x18 < local_28) {
      pppuVar2 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113e5d4 FUN_14113e5d4 body=466 status=ok
// SIG undefined FUN_14113e5d4(void)

void FUN_14113e5d4(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  byte bVar7;
  undefined8 *puVar8;
  longlong *_Dst;
  byte bVar9;
  
  _Dst = (longlong *)(param_1 + 0x30);
  bVar9 = *(byte *)(param_1 + 0x50);
  bVar3 = *(byte *)(param_2 + 4);
  bVar7 = bVar9;
  if (bVar9 == *(byte *)(param_2 + 4)) {
    puVar8 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar8 = (undefined8 *)*param_2;
    }
    plVar6 = _Dst;
    if (0x18 < *(ushort *)(param_1 + 0x48)) {
      plVar6 = (longlong *)*_Dst;
    }
    if (*(code **)(&DAT_14c9a85e0 + (uint)bVar9 * 0x120) != (code *)0x0) {
      cVar4 = (**(code **)(&DAT_14c9a85e0 + (uint)bVar9 * 0x120))();
      if (cVar4 != '\0') {
        return;
      }
      bVar3 = *(byte *)(param_2 + 4);
      bVar7 = *(byte *)(param_1 + 0x50);
      goto LAB_14113e652;
    }
    iVar5 = memcmp(plVar6,puVar8,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar9 * 0x120)));
    if (iVar5 == 0) {
      return;
    }
  }
  else {
LAB_14113e652:
    bVar9 = bVar3;
    if (bVar7 != bVar9) {
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
      if (pcVar2 != (code *)0x0) {
        plVar6 = _Dst;
        if (0x18 < *(ushort *)(param_1 + 0x48)) {
          plVar6 = (longlong *)*_Dst;
        }
        (*pcVar2)(plVar6);
      }
      if (0x18 < *(ushort *)(param_1 + 0x48)) {
        FUN_1400020a8(*_Dst);
      }
      bVar9 = *(byte *)(param_2 + 4);
      uVar1 = *(ushort *)(param_2 + 3);
      *(ushort *)(param_1 + 0x48) = uVar1;
      puVar8 = param_2;
      if (0x18 < uVar1) {
        plVar6 = (longlong *)FUN_14001cc68(uVar1,0);
        *_Dst = (longlong)plVar6;
        puVar8 = (undefined8 *)*param_2;
        _Dst = plVar6;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar9 * 0x120));
      if (pcVar2 == (code *)0x0) {
        memcpy(_Dst,puVar8,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar9 * 0x120)));
      }
      else {
        (*pcVar2)(_Dst);
      }
      *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 4);
      goto LAB_14113e6d0;
    }
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x18 < *(ushort *)(param_1 + 0x48)) {
    _Dst = (longlong *)*_Dst;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85c0 + (ulonglong)((uint)bVar9 * 0x120));
  if (pcVar2 == (code *)0x0) {
    memcpy(_Dst,param_2,
           (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar9 * 0x120)));
  }
  else {
    (*pcVar2)(_Dst,param_2);
  }
LAB_14113e6d0:
  FUN_1447f69b6(param_1 + 0x18);
  return;
}



// FUNCTION 14113e7ae FUN_14113e7ae body=124 status=ok
// SIG undefined FUN_14113e7ae(void)

undefined8 * FUN_14113e7ae(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14ad909b0;
  param_1[4] = 0;
  uVar1 = FUN_144830b78(param_1 + 5,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 5) = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14ad8f770;
  FUN_1406ed278(param_1 + 8);
  FUN_1406ed278(param_1 + 0x2a);
  FUN_1406ed278(param_1 + 0x4c);
  FUN_1406ed278(param_1 + 0x6e);
  return param_1;
}



// FUNCTION 14113e82a FUN_14113e82a body=137 status=ok
// SIG undefined FUN_14113e82a(void)

void FUN_14113e82a(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_14113e8b4((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined1 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2) =
       *(undefined1 *)(lVar1 + (int)param_2);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar2 - iVar4) + *(longlong *)(param_1 + 8)),(longlong)iVar4);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 14113e8b4 FUN_14113e8b4 body=345 status=ok
// SIG undefined FUN_14113e8b4(void)

void FUN_14113e8b4(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = (ulonglong)(int)uVar4;
  }
  else {
    uVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14113e937;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_14113e937:
  uVar7 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar5) {
    uVar7 = uVar5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,1,1);
  return;
}



// FUNCTION 14113ea0e FUN_14113ea0e body=277 status=ok
// SIG undefined FUN_14113ea0e(void)

undefined8 FUN_14113ea0e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14113eb1d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14113eb1d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14113eb1d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14113eacb;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_14113eacb;
    }
  }
  uVar6 = 0;
LAB_14113eacb:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113eb24 FUN_14113eb24 body=33 status=ok
// SIG undefined FUN_14113eb24(void)

void FUN_14113eb24(longlong param_1)

{
  FUN_14113f138(param_1 + 0x30);
  FUN_14113eb46(param_1 + 0x30);
  return;
}



// FUNCTION 14113eb46 FUN_14113eb46 body=1400 status=ok
// SIG undefined FUN_14113eb46(void)

void FUN_14113eb46(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  undefined8 local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar8 = param_1 + -0x30;
  lVar4 = FUN_14026506e();
  if (lVar4 != 0) {
    if (DAT_14cba8288 == 0) {
      local_c0 = &local_58;
      local_58 = FUN_141864c34;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_1464cee30;
      local_c8 = &LAB_148bfac22;
      local_d0 = &LAB_140f21842;
      local_d8 = &DAT_149e063b2;
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 0x10;
      local_f8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      FUN_14113fac0(&local_60);
      local_58 = (code *)0x0;
      FUN_14485c47a(&local_58,lVar8);
      local_50 = local_60;
      FUN_14113f0c0(&local_58);
      FUN_14053c012(lVar4 + 0x71a8,&local_58);
      FUN_14113fc1e(&local_68);
      local_58 = (code *)0x0;
      FUN_14485c47a(&local_58,lVar8);
      local_50 = local_68;
      FUN_14113f0c0(&local_58);
      FUN_14053c012(lVar4 + 0x7288,&local_58);
      FUN_140fe148e(&local_70);
      local_58 = (code *)0x0;
      FUN_14485c47a(&local_58,lVar8);
      local_50 = local_70;
      FUN_14113f0c0(&local_58);
      FUN_14053c012(lVar4 + 0x7260,&local_58);
      FUN_14113fb6c(&local_78);
      local_58 = (code *)0x0;
      FUN_14485c47a(&local_58,lVar8);
      local_50 = local_78;
      FUN_14113f0c0(&local_58);
      FUN_14053c012(lVar4 + 0x72b8,&local_58);
      FUN_14113fa0e(&local_80);
      local_58 = (code *)0x0;
      FUN_14485c47a(&local_58,lVar8);
      local_50 = local_80;
      FUN_14113f0c0(&local_58);
      FUN_14053c012(lVar4 + 0x71e8,&local_58);
      FUN_14113fa0e(&local_88);
      local_58 = (code *)0x0;
      FUN_14485c47a(&local_58,lVar8);
      local_50 = local_88;
      FUN_14113f0c0(&local_58);
      FUN_14053c012(lVar4 + 0x7210,&local_58);
      FUN_14113fcd6(&local_90);
      local_58 = (code *)0x0;
      FUN_14485c47a(&local_58,lVar8);
      local_50 = local_90;
      FUN_14113f0c0(&local_58);
      FUN_14053c012(lVar4 + 0x72f0,&local_58);
      FUN_14113fd8e(&local_98);
      local_58 = (code *)0x0;
      FUN_14485c47a(&local_58,lVar8);
      local_50 = local_98;
      FUN_14113f0c0(&local_58);
      FUN_14053c012(lVar4 + 0x7300,&local_58);
      if (*(char *)(lVar4 + 0x73eb) == '\x01') {
        FUN_145acbf5a(lVar8,0,1);
      }
    }
  }
  lVar4 = FUN_140495e96(param_1);
  if ((lVar4 == 0) || (lVar4 = FUN_1403ca91c(lVar4), lVar4 == 0)) goto LAB_14113ef33;
  local_58 = (code *)0x0;
  local_50 = local_50 & 0xffffffff00000000;
  FUN_1446efa72(&local_58,0,3,0x10);
  pcVar2 = local_58;
  local_50 = CONCAT44(local_50._4_4_,3);
  *(undefined ***)local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  *(longlong *)(local_58 + 0x10) = lVar5;
  *(undefined ***)local_58 = &PTR_FUN_14b9ad530;
  *(undefined8 *)(local_58 + 0x18) = 0;
  iVar6 = 0;
  if (lVar8 != 0) {
    uVar1 = *(uint *)(param_1 + -0x24);
    *(uint *)(local_58 + 0x18) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar6 = iVar7;
      }
    }
  }
  *(int *)(pcVar2 + 0x1c) = iVar6;
  *(code **)(pcVar2 + 0x20) = FUN_14113eb24;
  *(undefined4 *)(pcVar2 + 0x28) = 0;
  FUN_1448b6402(lVar4 + 0x78,&local_a0,&local_58);
  if ((int)local_50 == 0) {
LAB_14113ef19:
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = local_50 & 0xffffffff00000000;
    goto LAB_14113ef19;
  }
  *(undefined8 *)(param_1 + 0x18) = local_a0;
LAB_14113ef33:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14113f0c0 FUN_14113f0c0 body=119 status=ok
// SIG undefined FUN_14113f0c0(void)

bool FUN_14113f0c0(uint *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) {
    uVar1 = *param_1;
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar2 != (longlong *)0x0) && (*(uint *)(plVar2 + 2) == param_1[1])) &&
        ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) && (*plVar2 != 0)) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar2 + 0x10),*(longlong *)(param_1 + 2),1);
      return lVar3 != 0;
    }
  }
  return false;
}



// FUNCTION 14113f138 FUN_14113f138 body=2260 status=ok
// SIG undefined FUN_14113f138(void)

void FUN_14113f138(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  size_t local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = param_1 + -0x30;
  lVar4 = FUN_14026506e();
  if (lVar4 == 0) goto LAB_14113f572;
  if (DAT_14cba8288 == 0) {
    local_b0 = &local_50;
    local_50 = FUN_141864c34;
    local_a0 = FUN_14081d0ea;
    local_a8 = &LAB_1464cee30;
    local_b8 = &LAB_148bfac22;
    local_c0 = &LAB_140f21842;
    local_c8 = &DAT_149e063b2;
    local_d0 = 0;
    local_d8 = 0x10000004;
    local_e0 = 0x10;
    local_e8 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_14113f572;
  plVar8 = (longlong *)(lVar4 + 0x71a8);
  FUN_14113fac0(&local_58);
  FUN_1409ca370(plVar8,lVar1,local_58);
  uVar6 = (ulonglong)*(uint *)(lVar4 + 0x71b0);
  if (0 < (int)*(uint *)(lVar4 + 0x71b0)) {
    lVar12 = 0;
    bVar9 = false;
LAB_14113f1e2:
    lVar11 = lVar12 * 0x10;
    do {
      iVar2 = (int)uVar6;
      if (*(longlong *)(*plVar8 + 8 + lVar11) != 0) {
        lVar5 = FUN_144a34e94(*plVar8 + lVar11,1);
        if (lVar5 != 0) goto code_r0x00014113f20b;
        iVar2 = *(int *)(lVar4 + 0x71b0);
      }
      iVar7 = ~(uint)lVar12 + iVar2;
      if (iVar7 != 0) {
        iVar10 = 1;
        if (iVar7 < 1) {
          iVar10 = iVar7;
        }
        memmove((void *)(*(longlong *)(lVar4 + 0x71a8) + lVar11),
                (void *)((longlong)(iVar2 - iVar10) * 0x10 + *(longlong *)(lVar4 + 0x71a8)),
                (longlong)iVar10 << 4);
        iVar2 = *(int *)(lVar4 + 0x71b0);
      }
      uVar3 = iVar2 - 1;
      uVar6 = (ulonglong)uVar3;
      *(uint *)(lVar4 + 0x71b0) = uVar3;
      bVar9 = true;
      if ((int)uVar3 <= lVar12) goto LAB_14113f64f;
    } while( true );
  }
  goto LAB_14113f225;
code_r0x00014113f20b:
  lVar12 = lVar12 + 1;
  uVar6 = (ulonglong)*(int *)(lVar4 + 0x71b0);
  if ((longlong)uVar6 <= lVar12) goto code_r0x00014113f21b;
  goto LAB_14113f1e2;
code_r0x00014113f284:
  lVar12 = lVar12 + 1;
  uVar6 = (ulonglong)*(int *)(lVar4 + 0x7290);
  if ((longlong)uVar6 <= lVar12) goto code_r0x00014113f294;
  goto LAB_14113f25b;
code_r0x00014113f294:
  if (bVar9) {
LAB_14113f6bf:
    FUN_1400bbcfc(plVar8);
  }
  goto LAB_14113f29e;
code_r0x00014113f2fd:
  lVar12 = lVar12 + 1;
  uVar6 = (ulonglong)*(int *)(lVar4 + 0x7268);
  if ((longlong)uVar6 <= lVar12) goto code_r0x00014113f30d;
  goto LAB_14113f2d4;
code_r0x00014113f30d:
  if (bVar9) {
LAB_14113f72f:
    FUN_1400bbcfc(plVar8);
  }
  goto LAB_14113f317;
code_r0x00014113f376:
  lVar12 = lVar12 + 1;
  uVar6 = (ulonglong)*(int *)(lVar4 + 0x72c0);
  if ((longlong)uVar6 <= lVar12) goto code_r0x00014113f386;
  goto LAB_14113f34d;
code_r0x00014113f386:
  if (bVar9) {
LAB_14113f79f:
    FUN_1400bbcfc(plVar8);
  }
  goto LAB_14113f390;
code_r0x00014113f3ef:
  lVar12 = lVar12 + 1;
  uVar6 = (ulonglong)*(int *)(lVar4 + 0x71f0);
  if ((longlong)uVar6 <= lVar12) goto code_r0x00014113f3ff;
  goto LAB_14113f3c6;
code_r0x00014113f3ff:
  if (bVar9) {
LAB_14113f80f:
    FUN_1400bbcfc(plVar8);
  }
  goto LAB_14113f409;
code_r0x00014113f468:
  lVar12 = lVar12 + 1;
  uVar6 = (ulonglong)*(int *)(lVar4 + 0x7218);
  if ((longlong)uVar6 <= lVar12) goto code_r0x00014113f478;
  goto LAB_14113f43f;
code_r0x00014113f478:
  if (bVar9) {
LAB_14113f87f:
    FUN_1400bbcfc(plVar8);
  }
  goto LAB_14113f482;
code_r0x00014113f4e1:
  lVar12 = lVar12 + 1;
  uVar6 = (ulonglong)*(int *)(lVar4 + 0x72f8);
  if ((longlong)uVar6 <= lVar12) goto code_r0x00014113f4f1;
  goto LAB_14113f4b8;
code_r0x00014113f4f1:
  if (bVar9) {
LAB_14113f8ef:
    FUN_1400bbcfc(plVar8);
  }
  goto LAB_14113f4fb;
code_r0x00014113f558:
  lVar12 = lVar12 + 1;
  uVar6 = (ulonglong)*(int *)(lVar4 + 0x7308);
  if ((longlong)uVar6 <= lVar12) goto code_r0x00014113f568;
  goto LAB_14113f52f;
code_r0x00014113f568:
  if (bVar9) {
LAB_14113f95f:
    FUN_1400bbcfc(plVar8);
  }
  goto LAB_14113f572;
code_r0x00014113f21b:
  if (bVar9) {
LAB_14113f64f:
    FUN_1400bbcfc(plVar8);
  }
LAB_14113f225:
  plVar8 = (longlong *)(lVar4 + 0x7288);
  FUN_14113fc1e(&local_60);
  FUN_1409ca370(plVar8,lVar1,local_60);
  uVar6 = (ulonglong)*(uint *)(lVar4 + 0x7290);
  if (0 < (int)*(uint *)(lVar4 + 0x7290)) {
    lVar12 = 0;
    bVar9 = false;
LAB_14113f25b:
    lVar11 = lVar12 * 0x10;
    do {
      iVar2 = (int)uVar6;
      if (*(longlong *)(*plVar8 + 8 + lVar11) != 0) {
        lVar5 = FUN_144a34e94(*plVar8 + lVar11,1);
        if (lVar5 != 0) goto code_r0x00014113f284;
        iVar2 = *(int *)(lVar4 + 0x7290);
      }
      iVar7 = ~(uint)lVar12 + iVar2;
      if (iVar7 != 0) {
        iVar10 = 1;
        if (iVar7 < 1) {
          iVar10 = iVar7;
        }
        memmove((void *)(*(longlong *)(lVar4 + 0x7288) + lVar11),
                (void *)((longlong)(iVar2 - iVar10) * 0x10 + *(longlong *)(lVar4 + 0x7288)),
                (longlong)iVar10 << 4);
        iVar2 = *(int *)(lVar4 + 0x7290);
      }
      uVar3 = iVar2 - 1;
      uVar6 = (ulonglong)uVar3;
      *(uint *)(lVar4 + 0x7290) = uVar3;
      bVar9 = true;
      if ((int)uVar3 <= lVar12) goto LAB_14113f6bf;
    } while( true );
  }
LAB_14113f29e:
  plVar8 = (longlong *)(lVar4 + 0x7260);
  FUN_140fe148e(&local_68);
  FUN_1409ca370(plVar8,lVar1,local_68);
  uVar6 = (ulonglong)*(uint *)(lVar4 + 0x7268);
  if (0 < (int)*(uint *)(lVar4 + 0x7268)) {
    lVar12 = 0;
    bVar9 = false;
LAB_14113f2d4:
    lVar11 = lVar12 * 0x10;
    do {
      iVar2 = (int)uVar6;
      if (*(longlong *)(*plVar8 + 8 + lVar11) != 0) {
        lVar5 = FUN_144a34e94(*plVar8 + lVar11,1);
        if (lVar5 != 0) goto code_r0x00014113f2fd;
        iVar2 = *(int *)(lVar4 + 0x7268);
      }
      iVar7 = ~(uint)lVar12 + iVar2;
      if (iVar7 != 0) {
        iVar10 = 1;
        if (iVar7 < 1) {
          iVar10 = iVar7;
        }
        memmove((void *)(*(longlong *)(lVar4 + 0x7260) + lVar11),
                (void *)((longlong)(iVar2 - iVar10) * 0x10 + *(longlong *)(lVar4 + 0x7260)),
                (longlong)iVar10 << 4);
        iVar2 = *(int *)(lVar4 + 0x7268);
      }
      uVar3 = iVar2 - 1;
      uVar6 = (ulonglong)uVar3;
      *(uint *)(lVar4 + 0x7268) = uVar3;
      bVar9 = true;
      if ((int)uVar3 <= lVar12) goto LAB_14113f72f;
    } while( true );
  }
LAB_14113f317:
  plVar8 = (longlong *)(lVar4 + 0x72b8);
  FUN_14113fb6c(&local_70);
  FUN_1409ca370(plVar8,lVar1,local_70);
  uVar6 = (ulonglong)*(uint *)(lVar4 + 0x72c0);
  if (0 < (int)*(uint *)(lVar4 + 0x72c0)) {
    lVar12 = 0;
    bVar9 = false;
LAB_14113f34d:
    lVar11 = lVar12 * 0x10;
    do {
      iVar2 = (int)uVar6;
      if (*(longlong *)(*plVar8 + 8 + lVar11) != 0) {
        lVar5 = FUN_144a34e94(*plVar8 + lVar11,1);
        if (lVar5 != 0) goto code_r0x00014113f376;
        iVar2 = *(int *)(lVar4 + 0x72c0);
      }
      iVar7 = ~(uint)lVar12 + iVar2;
      if (iVar7 != 0) {
        iVar10 = 1;
        if (iVar7 < 1) {
          iVar10 = iVar7;
        }
        memmove((void *)(*(longlong *)(lVar4 + 0x72b8) + lVar11),
                (void *)((longlong)(iVar2 - iVar10) * 0x10 + *(longlong *)(lVar4 + 0x72b8)),
                (longlong)iVar10 << 4);
        iVar2 = *(int *)(lVar4 + 0x72c0);
      }
      uVar3 = iVar2 - 1;
      uVar6 = (ulonglong)uVar3;
      *(uint *)(lVar4 + 0x72c0) = uVar3;
      bVar9 = true;
      if ((int)uVar3 <= lVar12) goto LAB_14113f79f;
    } while( true );
  }
LAB_14113f390:
  plVar8 = (longlong *)(lVar4 + 0x71e8);
  FUN_14113fa0e(&local_78);
  FUN_1409ca370(plVar8,lVar1,local_78);
  uVar6 = (ulonglong)*(uint *)(lVar4 + 0x71f0);
  if (0 < (int)*(uint *)(lVar4 + 0x71f0)) {
    lVar12 = 0;
    bVar9 = false;
LAB_14113f3c6:
    lVar11 = lVar12 * 0x10;
    do {
      iVar2 = (int)uVar6;
      if (*(longlong *)(*plVar8 + 8 + lVar11) != 0) {
        lVar5 = FUN_144a34e94(*plVar8 + lVar11,1);
        if (lVar5 != 0) goto code_r0x00014113f3ef;
        iVar2 = *(int *)(lVar4 + 0x71f0);
      }
      iVar7 = ~(uint)lVar12 + iVar2;
      if (iVar7 != 0) {
        iVar10 = 1;
        if (iVar7 < 1) {
          iVar10 = iVar7;
        }
        memmove((void *)(*(longlong *)(lVar4 + 0x71e8) + lVar11),
                (void *)((longlong)(iVar2 - iVar10) * 0x10 + *(longlong *)(lVar4 + 0x71e8)),
                (longlong)iVar10 << 4);
        iVar2 = *(int *)(lVar4 + 0x71f0);
      }
      uVar3 = iVar2 - 1;
      uVar6 = (ulonglong)uVar3;
      *(uint *)(lVar4 + 0x71f0) = uVar3;
      bVar9 = true;
      if ((int)uVar3 <= lVar12) goto LAB_14113f80f;
    } while( true );
  }
LAB_14113f409:
  plVar8 = (longlong *)(lVar4 + 0x7210);
  FUN_14113fa0e(&local_80);
  FUN_1409ca370(plVar8,lVar1,local_80);
  uVar6 = (ulonglong)*(uint *)(lVar4 + 0x7218);
  if (0 < (int)*(uint *)(lVar4 + 0x7218)) {
    lVar12 = 0;
    bVar9 = false;
LAB_14113f43f:
    lVar11 = lVar12 * 0x10;
    do {
      iVar2 = (int)uVar6;
      if (*(longlong *)(*plVar8 + 8 + lVar11) != 0) {
        lVar5 = FUN_144a34e94(*plVar8 + lVar11,1);
        if (lVar5 != 0) goto code_r0x00014113f468;
        iVar2 = *(int *)(lVar4 + 0x7218);
      }
      iVar7 = ~(uint)lVar12 + iVar2;
      if (iVar7 != 0) {
        iVar10 = 1;
        if (iVar7 < 1) {
          iVar10 = iVar7;
        }
        memmove((void *)(*(longlong *)(lVar4 + 0x7210) + lVar11),
                (void *)((longlong)(iVar2 - iVar10) * 0x10 + *(longlong *)(lVar4 + 0x7210)),
                (longlong)iVar10 << 4);
        iVar2 = *(int *)(lVar4 + 0x7218);
      }
      uVar3 = iVar2 - 1;
      uVar6 = (ulonglong)uVar3;
      *(uint *)(lVar4 + 0x7218) = uVar3;
      bVar9 = true;
      if ((int)uVar3 <= lVar12) goto LAB_14113f87f;
    } while( true );
  }
LAB_14113f482:
  plVar8 = (longlong *)(lVar4 + 0x72f0);
  FUN_14113fcd6(&local_88);
  FUN_1409ca370(plVar8,lVar1,local_88);
  uVar6 = (ulonglong)*(uint *)(lVar4 + 0x72f8);
  if (0 < (int)*(uint *)(lVar4 + 0x72f8)) {
    lVar12 = 0;
    bVar9 = false;
LAB_14113f4b8:
    lVar11 = lVar12 * 0x10;
    do {
      iVar2 = (int)uVar6;
      if (*(longlong *)(*plVar8 + 8 + lVar11) != 0) {
        lVar5 = FUN_144a34e94(*plVar8 + lVar11,1);
        if (lVar5 != 0) goto code_r0x00014113f4e1;
        iVar2 = *(int *)(lVar4 + 0x72f8);
      }
      iVar7 = ~(uint)lVar12 + iVar2;
      if (iVar7 != 0) {
        iVar10 = 1;
        if (iVar7 < 1) {
          iVar10 = iVar7;
        }
        memmove((void *)(*(longlong *)(lVar4 + 0x72f0) + lVar11),
                (void *)((longlong)(iVar2 - iVar10) * 0x10 + *(longlong *)(lVar4 + 0x72f0)),
                (longlong)iVar10 << 4);
        iVar2 = *(int *)(lVar4 + 0x72f8);
      }
      uVar3 = iVar2 - 1;
      uVar6 = (ulonglong)uVar3;
      *(uint *)(lVar4 + 0x72f8) = uVar3;
      bVar9 = true;
      if ((int)uVar3 <= lVar12) goto LAB_14113f8ef;
    } while( true );
  }
LAB_14113f4fb:
  plVar8 = (longlong *)(lVar4 + 0x7300);
  FUN_14113fd8e(&local_90);
  FUN_1409ca370(plVar8,lVar1,local_90);
  uVar6 = (ulonglong)*(uint *)(lVar4 + 0x7308);
  if (0 < (int)*(uint *)(lVar4 + 0x7308)) {
    lVar12 = 0;
    bVar9 = false;
LAB_14113f52f:
    lVar11 = lVar12 * 0x10;
    do {
      iVar2 = (int)uVar6;
      if (*(longlong *)(*plVar8 + 8 + lVar11) != 0) {
        lVar5 = FUN_144a34e94(*plVar8 + lVar11,1);
        if (lVar5 != 0) goto code_r0x00014113f558;
        iVar2 = *(int *)(lVar4 + 0x7308);
      }
      iVar7 = ~(uint)lVar12 + iVar2;
      if (iVar7 != 0) {
        iVar10 = 1;
        if (iVar7 < 1) {
          iVar10 = iVar7;
        }
        memmove((void *)(*(longlong *)(lVar4 + 0x7300) + lVar11),
                (void *)((longlong)(iVar2 - iVar10) * 0x10 + *(longlong *)(lVar4 + 0x7300)),
                (longlong)iVar10 << 4);
        iVar2 = *(int *)(lVar4 + 0x7308);
      }
      uVar3 = iVar2 - 1;
      uVar6 = (ulonglong)uVar3;
      *(uint *)(lVar4 + 0x7308) = uVar3;
      bVar9 = true;
      if ((int)uVar3 <= lVar12) goto LAB_14113f95f;
    } while( true );
  }
LAB_14113f572:
  lVar4 = FUN_140495e96(param_1);
  if (lVar4 != 0) {
    lVar4 = FUN_1403ca91c(lVar4);
    if (lVar4 != 0) {
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_14480f766(lVar4 + 0x78);
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x24) = 0;
  FUN_14113fe46(lVar1,0,1);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113fa0e FUN_14113fa0e body=176 status=ok
// SIG undefined FUN_14113fa0e(void)

undefined8 * FUN_14113fa0e(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd627c) {
    FUN_144b3d300(&DAT_14cbd627c);
    if (DAT_14cbd627c == -1) {
      builtin_wcsncpy(local_38 + 10,L"ded",4);
      builtin_wcsncpy(local_38,L"OnDownedEn",10);
      FUN_1446f470e(&DAT_14cbd6274,local_38,1);
      _Init_thread_footer(&DAT_14cbd627c);
    }
  }
  *param_1 = DAT_14cbd6274;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113fac0 FUN_14113fac0 body=171 status=ok
// SIG undefined FUN_14113fac0(void)

undefined8 * FUN_14113fac0(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd6ce8) {
    FUN_144b3d300(&DAT_14cbd6ce8);
    if (DAT_14cbd6ce8 == -1) {
      builtin_wcsncpy(local_28,L"OnDowned",9);
      FUN_1446f470e(&DAT_14cbd6ce0,local_28,1);
      _Init_thread_footer(&DAT_14cbd6ce8);
    }
  }
  *param_1 = DAT_14cbd6ce0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113fb6c FUN_14113fb6c body=176 status=ok
// SIG undefined FUN_14113fb6c(void)

undefined8 * FUN_14113fb6c(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd6d08) {
    FUN_144b3d300(&DAT_14cbd6d08);
    if (DAT_14cbd6d08 == -1) {
      builtin_wcsncpy(local_38 + 8,L"ning",5);
      builtin_wcsncpy(local_38,L"OnRespaw",8);
      FUN_1446f470e(&DAT_14cbd6d00,local_38,1);
      _Init_thread_footer(&DAT_14cbd6d08);
    }
  }
  *param_1 = DAT_14cbd6d00;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113fc1e FUN_14113fc1e body=183 status=ok
// SIG undefined FUN_14113fc1e(void)

undefined8 * FUN_14113fc1e(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd6cf8) {
    FUN_144b3d300(&DAT_14cbd6cf8);
    if (DAT_14cbd6cf8 == -1) {
      builtin_wcsncpy(local_38,L"OnReviversChanged",0x12);
      FUN_1446f470e(&DAT_14cbd6cf0,local_38,1);
      _Init_thread_footer(&DAT_14cbd6cf8);
    }
  }
  *param_1 = DAT_14cbd6cf0;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113fcd6 FUN_14113fcd6 body=183 status=ok
// SIG undefined FUN_14113fcd6(void)

undefined8 * FUN_14113fcd6(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd6d18) {
    FUN_144b3d300(&DAT_14cbd6d18);
    if (DAT_14cbd6d18 == -1) {
      builtin_wcsncpy(local_38,L"OnRevivingStarted",0x12);
      FUN_1446f470e(&DAT_14cbd6d10,local_38,1);
      _Init_thread_footer(&DAT_14cbd6d18);
    }
  }
  *param_1 = DAT_14cbd6d10;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113fd8e FUN_14113fd8e body=183 status=ok
// SIG undefined FUN_14113fd8e(void)

undefined8 * FUN_14113fd8e(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd6d28) {
    FUN_144b3d300(&DAT_14cbd6d28);
    if (DAT_14cbd6d28 == -1) {
      builtin_wcsncpy(local_38,L"OnRevivingStopped",0x12);
      FUN_1446f470e(&DAT_14cbd6d20,local_38,1);
      _Init_thread_footer(&DAT_14cbd6d28);
    }
  }
  *param_1 = DAT_14cbd6d20;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113fe46 FUN_14113fe46 body=621 status=ok
// SIG undefined FUN_14113fe46(void)

void FUN_14113fe46(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 == '\0') goto LAB_14113ff66;
  lVar5 = FUN_1400d7050(param_1 + 0x30);
  if (lVar5 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      FUN_140c125e6(lVar5 + 0xd98,&DAT_14cbd95d0);
    }
  }
  FUN_1449027d0(param_1,&local_30);
  pcVar3 = *(char **)(local_30 + 0x100);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x58));
  *(int *)(pcVar3 + 0x50) = *(int *)(pcVar3 + 0x50) + 1;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if (pcVar3[8] == '\0') {
    if (*(int *)(pcVar3 + 0xc) == 0) {
      iVar4 = 1;
      goto LAB_14113ff8d;
    }
  }
  else {
    iVar4 = *(int *)(pcVar3 + 0xc) + 1;
LAB_14113ff8d:
    pcVar3[8] = '\0';
    *(int *)(pcVar3 + 0xc) = iVar4;
  }
  if (pcVar3[0x10] == '\0') {
    if (*(int *)(pcVar3 + 0x14) == 0) {
      iVar4 = 1;
      goto LAB_14113ffa5;
    }
  }
  else {
    iVar4 = *(int *)(pcVar3 + 0x14) + 1;
LAB_14113ffa5:
    pcVar3[0x10] = '\0';
    *(int *)(pcVar3 + 0x14) = iVar4;
  }
  if (pcVar3[0x18] == '\0') {
    if (*(int *)(pcVar3 + 0x1c) == 0) {
      iVar4 = 1;
      goto LAB_14113ffcb;
    }
  }
  else {
    iVar4 = *(int *)(pcVar3 + 0x1c) + 1;
LAB_14113ffcb:
    pcVar3[0x18] = '\0';
    *(int *)(pcVar3 + 0x1c) = iVar4;
  }
  if (pcVar3[0x20] == '\0') {
    if (*(int *)(pcVar3 + 0x24) == 0) {
      iVar4 = 1;
      goto LAB_14113ffdc;
    }
  }
  else {
    iVar4 = *(int *)(pcVar3 + 0x24) + 1;
LAB_14113ffdc:
    pcVar3[0x20] = '\0';
    *(int *)(pcVar3 + 0x24) = iVar4;
  }
  if (*pcVar3 == '\0') {
    if (*(int *)(pcVar3 + 4) == 0) {
      iVar4 = 1;
      goto LAB_14113ff9b;
    }
  }
  else {
    iVar4 = *(int *)(pcVar3 + 4) + 1;
LAB_14113ff9b:
    *pcVar3 = '\0';
    *(int *)(pcVar3 + 4) = iVar4;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x58));
LAB_14113ff66:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411400b4 FUN_1411400b4 body=788 status=ok
// SIG undefined FUN_1411400b4(void)

void FUN_1411400b4(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined1 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1401c3c2c();
  lVar1 = *(longlong *)(param_1 + 0x680);
  if (lVar1 == 0) {
    if (*(longlong *)(param_1 + 0x620) == 0) goto LAB_1411402f3;
    lVar1 = FUN_1411403ca(param_1,*(longlong *)(param_1 + 0x620),0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x680) = lVar1;
  }
  if (*(char *)(param_1 + 0x67c) == '\x01') {
    if (lVar1 != 0) {
      if (*(longlong *)(param_1 + 0x658) != 0) {
        if (*(char *)(param_1 + 0x784) == '\0') {
          uVar2 = 0;
        }
        else {
          uVar2 = 0x3f800000;
        }
        FUN_14472da24(lVar1,*(longlong *)(param_1 + 0x658),uVar2);
        lVar1 = *(longlong *)(param_1 + 0x680);
        if (lVar1 == 0) goto LAB_1411402f3;
      }
      if (*(longlong *)(param_1 + 0x660) != 0) {
        if (*(char *)(param_1 + 0x785) == '\0') {
          uVar2 = 0;
        }
        else {
          uVar2 = 0x3f800000;
        }
        FUN_14472da24(lVar1,*(longlong *)(param_1 + 0x660),uVar2);
      }
    }
  }
  else if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x638) != 0) {
      if (*(char *)(param_1 + 0x77c) == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x3f800000;
      }
      local_20 = 2;
      local_1c = 0xffffffff;
      local_88 = local_80;
      local_80[0] = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = *(longlong *)(param_1 + 0x638);
      FUN_140042bb4(lVar1,&local_28,uVar2,0);
      lVar1 = *(longlong *)(param_1 + 0x680);
      if (lVar1 == 0) goto LAB_1411402f3;
    }
    if (*(longlong *)(param_1 + 0x640) != 0) {
      local_20 = 2;
      local_1c = 0xffffffff;
      local_88 = local_80;
      local_80[0] = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = *(longlong *)(param_1 + 0x640);
      FUN_140042bb4(lVar1,&local_28,(float)(int)*(char *)(param_1 + 0x77d),0);
      lVar1 = *(longlong *)(param_1 + 0x680);
      if (lVar1 == 0) goto LAB_1411402f3;
    }
    if (*(longlong *)(param_1 + 0x658) != 0) {
      if (*(char *)(param_1 + 0x784) == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x3f800000;
      }
      local_20 = 2;
      local_1c = 0xffffffff;
      local_88 = local_80;
      local_80[0] = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = *(longlong *)(param_1 + 0x658);
      FUN_140042bb4(lVar1,&local_28,uVar2,0);
      lVar1 = *(longlong *)(param_1 + 0x680);
      if (lVar1 == 0) goto LAB_1411402f3;
    }
    if (*(longlong *)(param_1 + 0x660) != 0) {
      if (*(char *)(param_1 + 0x785) == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x3f800000;
      }
      local_20 = 2;
      local_1c = 0xffffffff;
      local_88 = local_80;
      local_80[0] = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = *(longlong *)(param_1 + 0x660);
      FUN_140042bb4(lVar1,&local_28,uVar2,0);
    }
  }
LAB_1411402f3:
  FUN_141140cda(param_1,param_1 + 0x688,*(undefined8 *)(param_1 + 0x6b0));
  FUN_141140462(param_1,param_1 + 0x6f0);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_141140898(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8,param_1 + 0x718);
}



// FUNCTION 1411403ca FUN_1411403ca body=151 status=ok
// SIG undefined FUN_1411403ca(void)

undefined8 FUN_1411403ca(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    if (param_1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
      if (((param_4 & 1) == 0) && (lVar2 != 0)) {
        bVar1 = *(byte *)(lVar2 + 0x152);
        if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) {
          uVar3 = FUN_14090ceee(param_2,param_1,param_3);
          return uVar3;
        }
      }
    }
    uVar3 = FUN_14090ceee(param_2,0,param_3);
    FUN_144757f48(uVar3,0x40);
  }
  return uVar3;
}



// FUNCTION 141140462 FUN_141140462 body=1051 status=ok
// SIG undefined FUN_141140462(void)

void FUN_141140462(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 *local_90;
  undefined8 *local_80;
  int local_78;
  undefined1 local_69;
  undefined8 local_68;
  longlong *local_60;
  undefined4 *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined8 *)(param_1 + 0x6f0) = *param_2;
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar7 = *(undefined4 *)(param_2 + 2);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x6fc) = uVar6;
  *(undefined4 *)(param_1 + 0x700) = uVar7;
  *(undefined4 *)(param_1 + 0x704) = uVar8;
  puVar14 = (undefined8 *)(param_1 + 0x708);
  if (puVar14 != param_2 + 3) {
    iVar11 = *(int *)(param_2 + 4);
    pvVar3 = (void *)param_2[3];
    *(int *)(param_1 + 0x710) = iVar11;
    if (iVar11 == 0 && *(int *)(param_1 + 0x714) == 0) {
      *(undefined4 *)(param_1 + 0x714) = 0;
    }
    else {
      FUN_1446dd670(puVar14,iVar11);
      if (iVar11 != 0) {
        memcpy((void *)*puVar14,pvVar3,(longlong)iVar11 * 2);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x9f) & 0x20) == 0) goto LAB_1411404fd;
  if (*(longlong *)(param_1 + 0x750) != 0) {
    FUN_1401a5e92();
    *(undefined8 *)(param_1 + 0x750) = 0;
    plVar4 = *(longlong **)(param_1 + 0x758);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x758) = 0;
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x6f8) == 0) || (lVar9 = FUN_14090ae24(param_1 + 0x6f0), lVar9 != 0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
  }
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  lVar9 = FUN_14050fd64();
  uStack_50 = CONCAT44(uStack_50._4_4_,1);
  FUN_1406f071e(&local_58,0);
  uVar6 = *(undefined4 *)(param_1 + 0x6fc);
  uVar7 = *(undefined4 *)(param_1 + 0x700);
  uVar8 = *(undefined4 *)(param_1 + 0x704);
  *local_58 = *(undefined4 *)(param_1 + 0x6f8);
  local_58[1] = uVar6;
  local_58[2] = uVar7;
  local_58[3] = uVar8;
  *(undefined8 *)(local_58 + 4) = 0;
  iVar11 = *(int *)(param_1 + 0x710);
  pvVar3 = *(void **)(param_1 + 0x708);
  local_58[6] = iVar11;
  if ((longlong)iVar11 == 0) {
    local_58[7] = 0;
  }
  else {
    puVar14 = (undefined8 *)(local_58 + 4);
    FUN_1446dd670(puVar14,iVar11,0);
    memcpy((void *)*puVar14,pvVar3,(longlong)iVar11 * 2);
  }
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  FUN_1446efa72(&local_80,0,3,0x10);
  puVar14 = local_80;
  local_78 = 3;
  *local_80 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  local_80[2] = lVar10;
  *local_80 = &PTR_FUN_14b97ad20;
  local_80[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_80 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar11 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar11 = *(int *)(lVar13 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar13 + 0x10) = iVar12;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar12;
      }
    }
  }
  *(int *)((longlong)puVar14 + 0x1c) = iVar11;
  puVar14[4] = &LAB_14090ac88;
  *(undefined4 *)(puVar14 + 5) = 0;
  local_90 = &local_69;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  FUN_1457028c8(lVar9 + 0x1e8,&local_68,&local_58,&local_80);
  plVar4 = local_60;
  if ((undefined8 *)(param_1 + 0x750) != &local_68) {
    *(undefined8 *)(param_1 + 0x750) = local_68;
    local_68 = 0;
    plVar5 = *(longlong **)(param_1 + 0x758);
    if (local_60 != plVar5) {
      local_60 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x758) = plVar4;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
  }
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_78 == 0) {
LAB_1411407fd:
    if (local_80 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,0);
    FUN_1446efa72(&local_80,0,0,0x10);
    local_78 = 0;
    goto LAB_1411407fd;
  }
  FUN_140861e20(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
LAB_1411404fd:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141140898 FUN_141140898 body=1064 status=ok
// SIG undefined FUN_141140898(void)

void FUN_141140898(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 *local_90;
  undefined8 *local_80;
  int local_78;
  undefined1 local_69;
  undefined8 local_68;
  longlong *local_60;
  undefined4 *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined8 *)(param_1 + 0x718) = *param_2;
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar7 = *(undefined4 *)(param_2 + 2);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x720) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x724) = uVar6;
  *(undefined4 *)(param_1 + 0x728) = uVar7;
  *(undefined4 *)(param_1 + 0x72c) = uVar8;
  puVar14 = (undefined8 *)(param_1 + 0x730);
  if (puVar14 != param_2 + 3) {
    iVar11 = *(int *)(param_2 + 4);
    pvVar3 = (void *)param_2[3];
    *(int *)(param_1 + 0x738) = iVar11;
    if (iVar11 == 0 && *(int *)(param_1 + 0x73c) == 0) {
      *(undefined4 *)(param_1 + 0x73c) = 0;
    }
    else {
      FUN_1446dd670(puVar14,iVar11);
      if (iVar11 != 0) {
        memcpy((void *)*puVar14,pvVar3,(longlong)iVar11 * 2);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x9f) & 0x20) == 0) goto LAB_141140933;
  if (*(longlong *)(param_1 + 0x760) != 0) {
    FUN_1401a5e92();
    *(undefined8 *)(param_1 + 0x760) = 0;
    plVar4 = *(longlong **)(param_1 + 0x768);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x768) = 0;
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x720) == 0) || (lVar9 = FUN_14090ae24(param_1 + 0x718), lVar9 != 0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
  }
  FUN_14045627c(param_1,0,1);
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  lVar9 = FUN_14050fd64();
  uStack_50 = CONCAT44(uStack_50._4_4_,1);
  FUN_1406f071e(&local_58,0);
  uVar6 = *(undefined4 *)(param_1 + 0x724);
  uVar7 = *(undefined4 *)(param_1 + 0x728);
  uVar8 = *(undefined4 *)(param_1 + 0x72c);
  *local_58 = *(undefined4 *)(param_1 + 0x720);
  local_58[1] = uVar6;
  local_58[2] = uVar7;
  local_58[3] = uVar8;
  *(undefined8 *)(local_58 + 4) = 0;
  iVar11 = *(int *)(param_1 + 0x738);
  pvVar3 = *(void **)(param_1 + 0x730);
  local_58[6] = iVar11;
  if ((longlong)iVar11 == 0) {
    local_58[7] = 0;
  }
  else {
    puVar14 = (undefined8 *)(local_58 + 4);
    FUN_1446dd670(puVar14,iVar11,0);
    memcpy((void *)*puVar14,pvVar3,(longlong)iVar11 * 2);
  }
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  FUN_1446efa72(&local_80,0,3,0x10);
  puVar14 = local_80;
  local_78 = 3;
  *local_80 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  local_80[2] = lVar10;
  *local_80 = &PTR_FUN_14b97ad20;
  local_80[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_80 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar11 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar11 = *(int *)(lVar13 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar13 + 0x10) = iVar12;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar12;
      }
    }
  }
  *(int *)((longlong)puVar14 + 0x1c) = iVar11;
  puVar14[4] = &LAB_14090ac88;
  *(undefined4 *)(puVar14 + 5) = 0;
  local_90 = &local_69;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  FUN_1457028c8(lVar9 + 0x1e8,&local_68,&local_58,&local_80);
  plVar4 = local_60;
  if ((undefined8 *)(param_1 + 0x760) != &local_68) {
    *(undefined8 *)(param_1 + 0x760) = local_68;
    local_68 = 0;
    plVar5 = *(longlong **)(param_1 + 0x768);
    if (local_60 != plVar5) {
      local_60 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x768) = plVar4;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
  }
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_78 == 0) {
LAB_141140c40:
    if (local_80 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,0);
    FUN_1446efa72(&local_80,0,0,0x10);
    local_78 = 0;
    goto LAB_141140c40;
  }
  FUN_140861e20(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
LAB_141140933:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141140cda FUN_141140cda body=1453 status=ok
// SIG undefined FUN_141140cda(void)

void FUN_141140cda(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  ushort uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 *local_90;
  undefined8 *local_80;
  int local_78;
  undefined1 local_69;
  undefined8 local_68;
  longlong *local_60;
  undefined4 *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = (longlong *)(param_1 + 0x690);
  bVar18 = true;
  if ((param_2[1] == *(longlong *)(param_1 + 0x690)) &&
     (param_2[2] == *(longlong *)(param_1 + 0x698))) {
    iVar11 = *(int *)(param_2 + 4);
    if (iVar11 == *(int *)(param_1 + 0x6a8)) {
      if (1 < iVar11) {
        lVar8 = 0;
        while( true ) {
          uVar14 = *(ushort *)(param_2[3] + lVar8);
          uVar15 = (ulonglong)uVar14;
          uVar10 = *(ushort *)(*(longlong *)(param_1 + 0x6a0) + lVar8);
          if (uVar14 != uVar10) break;
          if (uVar14 == 0) goto LAB_141140f35;
LAB_1411411ee:
          lVar8 = lVar8 + 2;
        }
        if ((uVar10 | uVar14) < 0x80) {
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          uVar12 = (ulonglong)uVar10;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar12]) goto LAB_1411411ee;
        }
        if (uVar14 != uVar10) goto LAB_141140d22;
      }
    }
    else if (*(int *)(param_1 + 0x6a8) + iVar11 != 1) goto LAB_141140d22;
LAB_141140f35:
    bVar18 = *(longlong *)(param_1 + 0x6b0) != param_3;
  }
LAB_141140d22:
  *(undefined8 *)(param_1 + 0x688) = *param_2;
  uVar20 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar19 = *(undefined4 *)(param_2 + 2);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)plVar3 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x694) = uVar20;
  *(undefined4 *)(param_1 + 0x698) = uVar19;
  *(undefined4 *)(param_1 + 0x69c) = uVar7;
  puVar17 = (undefined8 *)(param_1 + 0x6a0);
  if (puVar17 != param_2 + 3) {
    iVar11 = *(int *)(param_2 + 4);
    pvVar5 = (void *)param_2[3];
    *(int *)(param_1 + 0x6a8) = iVar11;
    if (iVar11 == 0 && *(int *)(param_1 + 0x6ac) == 0) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
    else {
      FUN_1446dd670(puVar17,iVar11);
      if (iVar11 != 0) {
        memcpy((void *)*puVar17,pvVar5,(longlong)iVar11 * 2);
      }
    }
  }
  *(longlong *)(param_1 + 0x6b0) = param_3;
  if (bVar18) {
    if (param_3 == 0) {
      *(undefined8 *)(param_1 + 0x6b8) = 0x4090000040400000;
      uVar20 = 0x40400000;
      uVar19 = 0x40900000;
    }
    else {
      *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_3 + 0x18);
      uVar19 = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_1 + 0x6bc) = uVar19;
      uVar20 = *(undefined4 *)(param_3 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x6c0) = uVar20;
    if (*(char *)(param_1 + 0x77e) == '\0') {
      uVar19 = *(undefined4 *)(param_1 + 0x6b8 + (ulonglong)*(byte *)(param_1 + 0x785) * 8);
    }
    *(undefined4 *)(param_1 + 0x6c4) = uVar19;
    *(undefined4 *)(param_1 + 0x6c8) = uVar19;
    *(undefined4 *)(param_1 + 0x6cc) = uVar19;
    *(undefined8 *)(param_1 + 0x6d0) = 0;
    *(undefined8 *)(param_1 + 0x6d5) = 0;
    *(undefined1 *)(param_1 + 0x6dd) = 1;
    FUN_14090b096(param_1);
  }
  if ((*(byte *)(param_1 + 0x9f) & 0x20) == 0) goto LAB_141140e47;
  if (*(longlong *)(param_1 + 0x740) != 0) {
    FUN_1401a5e92();
    *(undefined8 *)(param_1 + 0x740) = 0;
    plVar6 = *(longlong **)(param_1 + 0x748);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x748) = 0;
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((*plVar3 == 0) || (lVar8 = FUN_14090ae24(param_1 + 0x688), lVar8 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
  }
  FUN_14045627c(param_1,0,1);
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  lVar8 = FUN_14050fd64();
  uStack_50 = CONCAT44(uStack_50._4_4_,1);
  FUN_1406f071e(&local_58,0);
  uVar20 = *(undefined4 *)(param_1 + 0x694);
  uVar19 = *(undefined4 *)(param_1 + 0x698);
  uVar7 = *(undefined4 *)(param_1 + 0x69c);
  *local_58 = *(undefined4 *)plVar3;
  local_58[1] = uVar20;
  local_58[2] = uVar19;
  local_58[3] = uVar7;
  *(undefined8 *)(local_58 + 4) = 0;
  iVar11 = *(int *)(param_1 + 0x6a8);
  pvVar5 = *(void **)(param_1 + 0x6a0);
  local_58[6] = iVar11;
  if ((longlong)iVar11 == 0) {
    local_58[7] = 0;
  }
  else {
    puVar17 = (undefined8 *)(local_58 + 4);
    FUN_1446dd670(puVar17,iVar11,0);
    memcpy((void *)*puVar17,pvVar5,(longlong)iVar11 * 2);
  }
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  FUN_1446efa72(&local_80,0,3,0x10);
  puVar17 = local_80;
  local_78 = 3;
  *local_80 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar16 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar16 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar16;
  local_80[2] = lVar9;
  *local_80 = &PTR_FUN_14b97ad20;
  local_80[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar4 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_80 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar11 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar11 = *(int *)(lVar16 + 0x10);
      bVar18 = iVar11 == 0;
      if (bVar18) {
        *(int *)(lVar16 + 0x10) = iVar13;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar18) {
        iVar11 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar17 + 0x1c) = iVar11;
  puVar17[4] = &LAB_14090ac88;
  *(undefined4 *)(puVar17 + 5) = 0;
  local_90 = &local_69;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  FUN_1457028c8(lVar8 + 0x1e8,&local_68,&local_58,&local_80);
  plVar3 = local_60;
  if ((undefined8 *)(param_1 + 0x740) != &local_68) {
    *(undefined8 *)(param_1 + 0x740) = local_68;
    local_68 = 0;
    plVar6 = *(longlong **)(param_1 + 0x748);
    if (local_60 != plVar6) {
      local_60 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x748) = plVar3;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
  }
  plVar3 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_60 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_78 == 0) {
LAB_14114118c:
    if (local_80 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,0);
    FUN_1446efa72(&local_80,0,0,0x10);
    local_78 = 0;
    goto LAB_14114118c;
  }
  FUN_140861e20(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
LAB_141140e47:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411412a2 thunk_FUN_1411412a8 body=5 status=ok
// SIG undefined thunk_FUN_1411412a8(void)

void thunk_FUN_1411412a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aedd410;
  param_1[5] = &PTR_LAB_14aedd790;
  param_1[0x13] = &PTR_LAB_14aedd7b0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1411412f4(param_1);
  return;
}



// FUNCTION 1411412a8 FUN_1411412a8 body=75 status=ok
// SIG undefined FUN_1411412a8(void)

void FUN_1411412a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aedd410;
  param_1[5] = &PTR_LAB_14aedd790;
  param_1[0x13] = &PTR_LAB_14aedd7b0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1411412f4(param_1);
  return;
}



// FUNCTION 1411412f4 FUN_1411412f4 body=132 status=ok
// SIG undefined FUN_1411412f4(void)

void FUN_1411412f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aed80a0;
  param_1[5] = &PTR_FUN_14aed8420;
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 141141378 FUN_141141378 body=717 status=ok
// SIG undefined FUN_141141378(void)

longlong * FUN_141141378(longlong param_1,double *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  int local_78;
  uint local_70;
  double local_68;
  double local_60;
  double local_50;
  double local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((((*(int *)(param_1 + 0x1084) != 0) && (uVar1 = *(uint *)(param_1 + 0x1080), -1 < (int)uVar1)
        ) && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x1084))))) &&
     (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
      (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
       (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)))))) {
    (**(code **)(*plVar4 + 0x520))(plVar4,&local_68,0,0);
    if ((local_68 <= *param_2) &&
       (((*param_2 <= local_50 && (local_60 <= param_2[1])) && (param_2[1] <= local_48))))
    goto LAB_141141458;
    *(undefined8 *)(param_1 + 0x1080) = 0;
  }
  FUN_141141646(&local_80,0x10,1,0);
  uVar7 = (ulonglong)local_70;
  plVar4 = (longlong *)0x0;
  if ((-1 < (int)local_70) && ((int)local_70 < local_78)) {
    do {
      lVar3 = FUN_1447210f0(*(undefined8 *)(local_80 + (uVar7 & 0xffffffff) * 8));
      lVar5 = *(longlong *)(param_1 + 0xb0);
      if (lVar5 == 0) {
        lVar5 = FUN_1448abda6(param_1);
      }
      if (lVar3 == lVar5) {
        plVar4 = *(longlong **)(local_80 + (longlong)(int)local_70 * 8);
        (**(code **)(*plVar4 + 0x520))(plVar4,&local_68,0,0);
        if (((local_68 <= *param_2) && (*param_2 <= local_50)) &&
           ((local_60 <= param_2[1] && (param_2[1] <= local_48)))) {
          lVar5 = *(longlong *)(local_80 + (longlong)(int)local_70 * 8);
          if (lVar5 == 0) {
            *(undefined4 *)(param_1 + 0x1080) = 0;
            iVar2 = 0;
          }
          else {
            uVar1 = *(uint *)(lVar5 + 0xc);
            *(uint *)(param_1 + 0x1080) = uVar1;
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            iVar2 = *(int *)(lVar5 + 0x10);
            if (*(int *)(lVar5 + 0x10) == 0) {
              LOCK();
              iVar2 = DAT_14c964868 + 1;
              UNLOCK();
              iVar6 = DAT_14c964868 + 1;
              bVar9 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar2;
              if (bVar9) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar6);
              }
              LOCK();
              iVar2 = *(int *)(lVar5 + 0x10);
              bVar9 = iVar2 == 0;
              if (bVar9) {
                *(int *)(lVar5 + 0x10) = iVar6;
                iVar2 = 0;
              }
              UNLOCK();
              if (bVar9) {
                iVar2 = iVar6;
              }
            }
          }
          *(int *)(param_1 + 0x1084) = iVar2;
          plVar4 = *(longlong **)(local_80 + (longlong)(int)local_70 * 8);
          break;
        }
      }
      uVar7 = (longlong)(int)local_70;
      do {
        uVar8 = uVar7;
        uVar7 = uVar8 + 1;
        local_70 = (uint)uVar7;
        if ((longlong)local_78 <= (longlong)uVar7) break;
      } while (*(longlong *)(local_80 + uVar7 * 8) == 0);
      plVar4 = (longlong *)0x0;
      if (((longlong)uVar8 < -1) || (plVar4 = (longlong *)0x0, local_78 <= (int)local_70)) break;
    } while( true );
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
LAB_141141458:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 141141646 FUN_141141646 body=358 status=ok
// SIG undefined FUN_141141646(void)

longlong * FUN_141141646(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  longlong **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  if (DAT_14caa6dc0 == 0) {
    local_60 = &local_40;
    local_40 = (code *)&LAB_1432469d6;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_145920864;
    local_68 = &LAB_14746b954;
    local_70 = &LAB_14632611e;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000005;
    local_90 = 8;
    local_98 = 0x8a8;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeProxy",&DAT_14caa6dc0,FUN_1463260fc);
  }
  local_38 = &local_48;
  local_40 = FUN_142840874;
  local_98 = uVar1 | param_4 | 0x90000000;
  local_48 = param_1;
  FUN_140245161(DAT_14caa6dc0,&local_40,param_3,param_2);
  lVar2 = (longlong)(int)param_1[2];
  do {
    lVar2 = lVar2 + 1;
    *(int *)(param_1 + 2) = (int)lVar2;
    if ((int)param_1[1] <= lVar2) break;
  } while (*(longlong *)(*param_1 + lVar2 * 8) == 0);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411417ae FUN_1411417ae body=138 status=ok
// SIG undefined FUN_1411417ae(void)

void FUN_1411417ae(longlong param_1,longlong param_2)

{
  *(float *)(param_1 + 0x328) = (float)*(double *)(param_2 + 0x6d0);
  if ((*(longlong *)(param_1 + 0x310) != 0) &&
     (0.0 < *(float *)(*(longlong *)(param_1 + 0x310) + 0x178))) {
    if (*(char *)(param_1 + 0x330) == '\0') {
      *(undefined1 *)(param_1 + 0x330) = 1;
      FUN_141141838(param_1);
    }
    if ((*(char *)(param_1 + 0x331) == '\0') &&
       (*(float *)(param_1 + 0x304) <= *(float *)(param_1 + 0x328) - *(float *)(param_1 + 0x32c))) {
      FUN_141141b32(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 141141838 FUN_141141838 body=761 status=ok
// SIG undefined FUN_141141838(void)

void FUN_141141838(longlong param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  
  lVar7 = *(longlong *)(param_1 + 0x310);
  if (lVar7 == 0) {
    return;
  }
  lVar10 = lVar7 + 0x4f8;
  if (*(int *)(param_1 + 0x300) == 1) {
    uVar3 = *(uint *)(lVar7 + 0x4f0);
    iVar5 = *(int *)(lVar7 + 0x880);
    if ((int)uVar3 < iVar5 && -1 < (int)uVar3) {
      lVar6 = *(longlong *)(lVar7 + 0x878);
      if (*(longlong *)(lVar7 + 0x878) == 0) {
        lVar6 = lVar10;
      }
      bVar2 = *(byte *)(lVar6 + ((ulonglong)uVar3 * 7 + 4) * 8);
      if (bVar2 != 7) {
        uVar11 = (uint)bVar2 * 0x120;
        if ((((*(code **)(&DAT_14c9a8560 + uVar11) == (code *)0x0) ||
             (cVar4 = (**(code **)(&DAT_14c9a8560 + uVar11))(CONCAT71((uint7)(uint3)(uVar3 >> 8),7))
             , cVar4 == '\0')) &&
            ((DAT_14c9a8d48 == (code *)0x0 || (cVar4 = (*DAT_14c9a8d48)(bVar2), cVar4 == '\0')))) &&
           (((((&DAT_14c9a8514)[uVar11] & 0x20) == 0 || ((DAT_14c9a8cf4 & 0x20) != 0)) ||
            ((*(code **)(&DAT_14c9a8588 + uVar11) != (code *)0x0 &&
             (cVar4 = (**(code **)(&DAT_14c9a8588 + uVar11))(7), cVar4 == '\0'))))))
        goto LAB_141141a05;
      }
      if (*(longlong *)(lVar7 + 0x878) != 0) {
        lVar10 = *(longlong *)(lVar7 + 0x878);
      }
      lVar7 = FUN_14030a32e(lVar10 + (ulonglong)uVar3 * 0x38);
      iVar5 = *(int *)(param_1 + 0x340);
      lVar10 = (longlong)iVar5;
      *(uint *)(param_1 + 0x340) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x344) < iVar5 + 1U) {
        FUN_140155462((longlong *)(param_1 + 0x338),iVar5);
      }
      lVar6 = *(longlong *)(param_1 + 0x338);
      *(undefined8 *)(lVar6 + lVar10 * 8) = 0;
      if (lVar7 == 0) {
        iVar5 = 0;
      }
      else {
        uVar3 = *(uint *)(lVar7 + 0xc);
        *(uint *)(lVar6 + lVar10 * 8) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar5 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar5 = *(int *)(lVar7 + 0x10);
          bVar12 = iVar5 == 0;
          if (bVar12) {
            *(int *)(lVar7 + 0x10) = iVar9;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar12) {
            iVar5 = iVar9;
          }
        }
      }
      *(int *)(lVar6 + 4 + lVar10 * 8) = iVar5;
      goto LAB_141141a05;
    }
  }
  else {
    iVar5 = *(int *)(lVar7 + 0x880);
  }
  if (*(longlong *)(lVar7 + 0x878) != 0) {
    lVar10 = *(longlong *)(lVar7 + 0x878);
  }
  if (iVar5 != 0) {
    lVar7 = lVar10 + (longlong)iVar5 * 0x38;
    do {
      if (((*(byte *)(lVar10 + 0x34) & 1) == 0) &&
         (cVar4 = FUN_144a7b75a(*(undefined1 *)(lVar10 + 0x20),7), cVar4 != '\0')) {
        uVar8 = FUN_14030a32e(lVar10);
        iVar5 = *(int *)(param_1 + 0x340);
        *(uint *)(param_1 + 0x340) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x344) < iVar5 + 1U) {
          FUN_140155462(param_1 + 0x338,iVar5);
        }
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x338) + (longlong)iVar5 * 8);
        *puVar1 = 0;
        FUN_14485c47a(puVar1,uVar8);
        if (*(int *)(param_1 + 0x300) <= *(int *)(param_1 + 0x340)) break;
      }
      lVar10 = lVar10 + 0x38;
    } while (lVar10 != lVar7);
  }
LAB_141141a05:
  if ((*(int *)(param_1 + 0x340) == 0) && (*(char *)(param_1 + 0x2c0) == '\x01')) {
    cVar4 = FUN_144729dda((undefined8 *)(param_1 + 0x2c4));
    if (cVar4 != '\0') {
      iVar5 = *(int *)(param_1 + 0x340);
      *(uint *)(param_1 + 0x340) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x344) < iVar5 + 1U) {
        FUN_140155462((longlong *)(param_1 + 0x338),iVar5);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x338) + (longlong)iVar5 * 8) =
           *(undefined8 *)(param_1 + 0x2c4);
    }
  }
  *(undefined4 *)(param_1 + 0x32c) = 0xff7fffff;
  return;
}



// FUNCTION 141141b32 FUN_141141b32 body=942 status=ok
// SIG undefined FUN_141141b32(void)

void FUN_141141b32(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  double _Y;
  double _Y_00;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  bool bVar12;
  double dVar13;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  longlong *local_e0;
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  ulonglong local_70;
  
  iVar7 = DAT_14c9647dc;
  lVar5 = DAT_14c9647c8;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
LAB_141141e91:
    uVar10 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 1);
    uVar10 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)((longlong)param_1 + 0xc) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_141141e91;
      uVar10 = *puVar9;
    }
  }
  uVar8 = (ulonglong)*(uint *)((longlong)param_1 + 0x324);
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x324)) {
    do {
      iVar6 = (int)uVar8;
      if ((int)param_1[0x68] <= iVar6) break;
      iVar4 = *(int *)(param_1[0x67] + 4 + uVar8 * 8);
      if ((((iVar4 != 0) && (uVar3 = *(uint *)(param_1[0x67] + uVar8 * 8), -1 < (int)uVar3)) &&
          ((int)uVar3 < iVar7)) &&
         (((puVar9 = (undefined8 *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(lVar5 + (ulonglong)(uVar3 >> 0x10) * 8)),
           puVar9 != (undefined8 *)0x0 && (*(int *)(puVar9 + 2) == iVar4)) &&
          ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
          plVar11 = (longlong *)*puVar9;
        }
        else {
          plVar11 = (longlong *)0x0;
        }
        (**(code **)(*plVar11 + 0x590))(plVar11,&local_a0,0);
        _Y = local_90 - (double)param_1[4];
        _Y_00 = (double)CONCAT44(uStack_94,uStack_98) - (double)param_1[3];
        dVar13 = (double)CONCAT44(uStack_9c,local_a0) - (double)param_1[2];
        uStack_80 = 0.0;
        if (((_Y_00 != 0.0) || (NAN(_Y_00))) || ((dVar13 != 0.0 || (NAN(dVar13))))) {
          uStack_80 = atan2(_Y_00,dVar13);
          uStack_80 = uStack_80 * 57.29577951308232;
        }
        dVar13 = SQRT(dVar13 * dVar13 + _Y_00 * _Y_00);
        local_88 = 0.0;
        if ((((_Y != 0.0) || (NAN(_Y))) || (dVar13 != 0.0)) || (NAN(dVar13))) {
          local_88 = atan2(_Y,dVar13);
          local_88 = local_88 * 57.29577951308232;
        }
        local_78 = 0.0;
        *(int *)((longlong)param_1 + 0x324) = *(int *)((longlong)param_1 + 0x324) + 1;
        fVar1 = *(float *)((longlong)param_1 + 0x30c);
        if (0.0 < fVar1) {
          FUN_144a76660(&local_88,local_d0);
          FUN_140c84580(local_b8,local_d0,fVar1 * 0.017453292);
          FUN_144a79a9c(local_b8,&local_a0);
          local_78 = local_90;
          local_88 = (double)CONCAT44(uStack_9c,local_a0);
          uStack_80 = (double)CONCAT44(uStack_94,uStack_98);
        }
        if ((char)param_1[0x61] != '\x01') goto LAB_141141d9f;
        bVar12 = true;
        goto LAB_141141c4a;
      }
      uVar8 = uVar8 + 1;
      *(int *)((longlong)param_1 + 0x324) = (int)uVar8;
    } while (-2 < iVar6);
  }
  bVar12 = false;
  plVar11 = (longlong *)0x0;
LAB_141141c4a:
  cVar2 = (char)param_1[0x58];
  if (cVar2 == '\0') {
    if (!bVar12) {
      bVar12 = true;
      goto LAB_141141deb;
    }
  }
  else {
    if (cVar2 == '\x03') {
      (**(code **)(*param_1 + 0x20))(param_1,&local_a0);
LAB_141141c85:
      local_78 = local_90;
    }
    else {
      if (cVar2 != '\x01') {
        FUN_140d0fb16(param_1 + 0x5a,&local_a0,uVar10,0);
        goto LAB_141141c85;
      }
      local_78 = (double)param_1[8];
      local_a0 = (undefined4)param_1[6];
      uStack_9c = *(undefined4 *)((longlong)param_1 + 0x34);
      uStack_98 = (undefined4)param_1[7];
      uStack_94 = *(undefined4 *)((longlong)param_1 + 0x3c);
    }
    local_88 = (double)CONCAT44(uStack_9c,local_a0);
    uStack_80 = (double)CONCAT44(uStack_94,uStack_98);
  }
LAB_141141d9f:
  local_e8 = &local_88;
  local_e0 = plVar11;
  (**(code **)(*param_1 + 0x18))(param_1,param_2,uVar10,param_1 + 2);
  iVar7 = (int)param_1[100] + 1;
  *(int *)(param_1 + 100) = iVar7;
  *(int *)((longlong)param_1 + 0x32c) = (int)param_1[0x65];
  bVar12 = iVar7 == (int)param_1[0x60];
LAB_141141deb:
  *(bool *)((longlong)param_1 + 0x331) = bVar12;
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141141ee2 FUN_141141ee2 body=292 status=ok
// SIG undefined FUN_141141ee2(void)

void FUN_141141ee2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x348);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = param_4[2];
    uVar6 = param_4[1];
    *(undefined8 *)(lVar1 + 0x20) = *param_4;
    *(undefined8 *)(lVar1 + 0x28) = uVar6;
    dVar5 = (double)FUN_144719204((int)*param_5,0);
    dVar4 = (double)FUN_144719204((int)param_5[1],0);
    dVar2 = sin(dVar5 * 0.017453292519943295);
    dVar5 = cos(dVar5 * 0.017453292519943295);
    dVar3 = sin(dVar4 * 0.017453292519943295);
    dVar4 = cos(dVar4 * 0.017453292519943295);
    lVar1 = *(longlong *)(param_1 + 0x348);
    *(double *)(lVar1 + 0x38) = dVar4 * dVar5;
    *(double *)(lVar1 + 0x40) = dVar3 * dVar5;
    *(double *)(lVar1 + 0x48) = dVar2;
    FUN_141142006(param_2,*(undefined8 *)(param_1 + 0x348));
    return;
  }
  return;
}



// FUNCTION 141142006 FUN_141142006 body=117 status=ok
// SIG undefined FUN_141142006(void)

void FUN_141142006(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if (lVar2 != 0) {
      iVar1 = FUN_14490d72a(lVar2);
      if (iVar1 != 3) {
        lVar2 = FUN_140877338(lVar2);
        if (lVar2 != 0) {
          FUN_140842d26(lVar2,local_20,param_2);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14114207c FUN_14114207c body=166 status=ok
// SIG undefined FUN_14114207c(void)

void FUN_14114207c(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  
  puVar5 = (undefined2 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 3);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_141142122((longlong *)(param_3 + 8),iVar2);
  }
  lVar1 = *(longlong *)(param_3 + 8);
  *(undefined1 *)(lVar1 + 2 + (longlong)iVar2 * 3) = *(undefined1 *)(puVar5 + 1);
  *(undefined2 *)(lVar1 + (longlong)iVar2 * 3) = *puVar5;
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove((void *)((longlong)(int)param_2 * 3 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar2 - iVar3) * 3 + *(longlong *)(param_1 + 8)),(longlong)iVar3 * 3
           );
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 141142122 FUN_141142122 body=368 status=ok
// SIG undefined FUN_141142122(void)

void FUN_141142122(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 3;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411421a9;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_1411421a9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 3)) {
    uVar7 = uVar5 / 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,3,1);
  return;
}



// FUNCTION 14114229a FUN_14114229a body=2762 status=ok
// SIG undefined FUN_14114229a(void)

undefined8 FUN_14114229a(longlong param_1,double *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  double dVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  undefined8 *puStack_380;
  double *local_378;
  undefined8 *local_370;
  undefined8 *local_368;
  int *local_360;
  double *local_358;
  undefined8 local_350;
  byte local_348;
  int local_338;
  uint local_334;
  double *local_330;
  double *local_328;
  longlong local_320;
  longlong local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  double local_2e0;
  double local_2d8 [12];
  double local_278;
  double dStack_270;
  double local_268;
  int local_254;
  double local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  double local_208 [2];
  double local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  undefined4 local_1d8;
  undefined2 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  float local_198;
  undefined4 local_188;
  uint uStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  dVar4 = *param_2;
  uVar10 = 1;
  if ((dVar4 != 0.0) && (*(int *)((longlong)dVar4 + 0x58) == *(int *)(param_2 + 2))) {
    iVar17 = *(int *)((longlong)dVar4 + 0x88);
    local_158._8_4_ = SUB84((double)*(float *)((longlong)dVar4 + 0x44),0);
    local_158._0_8_ = (double)*(float *)((longlong)dVar4 + 0x40);
    local_158._12_4_ = (int)((ulonglong)(double)*(float *)((longlong)dVar4 + 0x44) >> 0x20);
    local_148._8_4_ = SUB84((double)*(float *)((longlong)dVar4 + 0x4c),0);
    local_148._0_8_ = (double)*(float *)((longlong)dVar4 + 0x48);
    local_148._12_4_ = (int)((ulonglong)(double)*(float *)((longlong)dVar4 + 0x4c) >> 0x20);
    local_138 = *(undefined8 *)((longlong)dVar4 + 0x20);
    uStack_130 = *(undefined8 *)((longlong)dVar4 + 0x28);
    local_128 = *(undefined8 *)((longlong)dVar4 + 0x30);
    uStack_120 = 0;
    local_118 = 0x3ff0000000000000;
    uStack_110 = 0x3ff0000000000000;
    local_108 = 0x3ff0000000000000;
    uStack_100 = 0;
    plVar5 = *(longlong **)(param_1 + 0x90);
    local_338 = iVar17;
    if (plVar5 == (longlong *)0x0) {
      local_160 = *(double *)(param_1 + 0x48);
      local_170 = *(double *)(param_1 + 0x38);
      dStack_168 = *(double *)(param_1 + 0x40);
      local_188 = *(undefined4 *)(param_1 + 0x38);
      uStack_184 = *(uint *)(param_1 + 0x3c) ^ 0x80000000;
      uStack_180 = *(undefined4 *)(param_1 + 0x40);
      uStack_17c = *(uint *)(param_1 + 0x44) ^ 0x80000000;
      local_178 = -*(double *)(param_1 + 0x48);
      iVar3 = iVar17;
    }
    else {
      pdVar16 = (double *)(param_1 + 0xa0);
      pdVar15 = local_208;
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *pdVar15 = *pdVar16;
        pdVar16 = pdVar16 + 1;
        pdVar15 = pdVar15 + 1;
      }
      (**(code **)(*plVar5 + 0x80))(plVar5,local_2d8);
      FUN_1400c6592(local_2d8,&local_188,local_208);
      iVar3 = *(int *)((longlong)dVar4 + 0x88);
    }
    uVar10 = 1;
    if (0 < iVar3) {
      local_318 = (longlong)dVar4 + 0x78;
      local_320 = param_1 + 0x80;
      local_330 = (double *)(param_1 + 0xa0);
      local_328 = (double *)(param_1 + 0x58);
      lVar12 = 0;
      do {
        lVar13 = *(longlong *)((longlong)dVar4 + 0x80);
        if (*(longlong *)((longlong)dVar4 + 0x80) == 0) {
          lVar13 = local_318;
        }
        lVar6 = *(longlong *)(lVar13 + lVar12 * 8);
        uVar10 = *(undefined8 *)(lVar6 + 0x10);
        if (iVar17 < 2) {
LAB_141142703:
          cVar8 = '\x02';
          if (((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 4) == 0) ||
             (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                                (*(longlong **)(param_1 + 0x98),local_320,lVar6,dVar4),
             cVar8 != '\0')) {
            iVar3 = local_338;
            local_1f8 = (double)CONCAT44(local_1f8._4_4_,0xffffffff);
            local_1e0 = 0.0;
            local_1f0 = 0.0;
            dStack_1e8 = 0.0;
            local_1d8 = 0xffffffff;
            local_1d0 = 0;
            local_208[1] = *(double *)(lVar13 + lVar12 * 8);
            local_218 = 0;
            local_228 = 0;
            uStack_220 = 0;
            local_238 = 0;
            local_248 = 0;
            uStack_240 = 0;
            local_250 = 0.0;
            local_254 = -1;
            local_268 = DAT_14c8464f0;
            local_278 = DAT_14c8464e0;
            dStack_270 = DAT_14c8464e8;
            uVar2 = *(ushort *)(param_1 + 0x50);
            puVar1 = (undefined8 *)param_3[4];
            local_334 = (uint)uVar2;
            local_208[0] = dVar4;
            if (((double)puVar1 <= 0.0) || (*(longlong *)(param_1 + 0x90) == 0)) {
              if (((double)puVar1 == 0.0) &&
                 ((!NAN((double)puVar1) && (*(longlong *)(param_1 + 0x90) != 0)))) {
                if ((uVar2 >> 9 & 1) == 0) {
                  pdVar16 = local_330;
                  pdVar15 = local_2d8;
                  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                    *pdVar15 = *pdVar16;
                    pdVar16 = pdVar16 + 1;
                    pdVar15 = pdVar15 + 1;
                  }
                  local_388 = 0;
                  puStack_380 = (undefined8 *)0x0;
                  cVar9 = FUN_140ea601d(uVar10,local_158);
                  iVar3 = local_338;
                  goto joined_r0x000141142991;
                }
                pdVar16 = local_330;
                pdVar15 = local_2d8;
                for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                  *pdVar15 = *pdVar16;
                  pdVar16 = pdVar16 + 1;
                  pdVar15 = pdVar15 + 1;
                }
                puStack_380 = &local_310;
                local_388 = 0;
                cVar9 = FUN_140ea601d(uVar10,local_158);
                iVar17 = local_338;
                if (cVar9 == '\0') goto LAB_141142c6b;
                local_238 = local_300;
                local_248 = local_310;
                uStack_240 = uStack_308;
                local_228 = local_2f8;
                uStack_220 = uStack_2f0;
                local_218 = local_2e8;
                local_250 = -local_2e0;
                goto LAB_141142997;
              }
            }
            else {
              local_348 = (byte)(uVar2 >> 9) & 1;
              local_388 = *param_3;
              pdVar16 = local_330;
              pdVar15 = local_2d8;
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *pdVar15 = *pdVar16;
                pdVar16 = pdVar16 + 1;
                pdVar15 = pdVar15 + 1;
              }
              local_358 = &local_278;
              local_360 = &local_254;
              local_368 = &local_248;
              local_370 = &local_228;
              local_378 = &local_250;
              local_350 = 0;
              puStack_380 = puVar1;
              cVar9 = FUN_1411e80d4(uVar10,local_158);
joined_r0x000141142991:
              iVar17 = iVar3;
              if (cVar9 != '\0') {
LAB_141142997:
                lVar13 = *(longlong *)(param_1 + 0x70) + 8;
                if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x84) == '\0') {
                  lVar13 = 0;
                }
                if ((((local_254 != -1) || (9.999999747378752e-05 < ABS(local_278))) ||
                    (9.999999747378752e-05 < ABS(dStack_270))) ||
                   (9.999999747378752e-05 < ABS(local_268))) {
                  if ((lVar13 != 0) && (ABS(local_250 - (double)*(float *)(lVar13 + 0x70)) < 1e-06))
                  {
                    if (ABS(*(double *)(param_1 + 0x58)) <= 9.999999747378752e-05) {
                      dVar20 = *(double *)(param_1 + 0x68);
                      uVar18 = SUB84(dVar20,0);
                      uVar19 = (undefined4)((ulonglong)dVar20 >> 0x20);
                      if ((ABS(*(double *)(param_1 + 0x60)) <= 9.999999747378752e-05) &&
                         (ABS(dVar20) <= 9.999999747378752e-05)) goto LAB_141142ae4;
                    }
                    else {
                      uVar18 = (undefined4)*(undefined8 *)(param_1 + 0x68);
                      uVar19 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
                    }
                    pdVar16 = (double *)*param_3;
                    if ((double)CONCAT44(uVar19,uVar18) * pdVar16[2] +
                        *(double *)(param_1 + 0x58) * *pdVar16 +
                        *(double *)(param_1 + 0x60) * pdVar16[1] <=
                        pdVar16[2] * local_268 + *pdVar16 * local_278 + pdVar16[1] * dStack_270)
                    goto LAB_141142c6b;
                  }
LAB_141142ae4:
                  local_328[2] = local_268;
                  *local_328 = local_278;
                  local_328[1] = dStack_270;
                }
                local_198 = (float)local_250;
                local_1b8 = local_218;
                local_1c8 = local_228;
                uStack_1c0 = uStack_220;
                local_1a0 = local_238;
                local_1b0 = (undefined4)local_248;
                uStack_1ac = local_248._4_4_;
                uStack_1a8 = (undefined4)uStack_240;
                uStack_1a4 = uStack_240._4_4_;
                local_1d0 = 0x404;
                if (0.0 < local_250) {
                  local_1d0 = 7;
                }
                if ((local_334 & 0x200) != 0) {
                  local_1d0 = 7;
                }
                local_1f8 = (double)CONCAT44(local_1f8._4_4_,local_254);
                local_1e0 = local_328[2];
                local_1f0 = *local_328;
                dStack_1e8 = local_328[1];
                if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 8) != 0) {
                  cVar8 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                                    (*(longlong **)(param_1 + 0x98),local_320,local_208);
                }
                if (cVar8 != '\0') {
                  if (cVar8 == '\x02') {
                    pdVar16 = *(double **)(param_1 + 0x70);
LAB_141142bfa:
                    pdVar14 = local_208;
                    pdVar15 = pdVar16;
                    for (lVar13 = 0xf; pdVar15 = pdVar15 + 1, lVar13 != 0; lVar13 = lVar13 + -1) {
                      *pdVar15 = *pdVar14;
                      pdVar14 = pdVar14 + 1;
                    }
                    *(undefined1 *)((longlong)pdVar16 + 0x84) = 1;
                    uVar18 = 0;
                    uVar19 = 0;
                    if (0.0 <= local_250) {
                      uVar18 = SUB84(local_250,0);
                      uVar19 = (undefined4)((ulonglong)local_250 >> 0x20);
                    }
                    param_3[4] = CONCAT44(uVar19,uVar18);
                    if (((double)CONCAT44(uVar19,uVar18) != 0.0) ||
                       (NAN((double)CONCAT44(uVar19,uVar18)))) {
                      param_3[5] = 1.0 / (double)CONCAT44(uVar19,uVar18);
                    }
                    if ((((double)CONCAT44(uVar19,uVar18) != 0.0) ||
                        (NAN((double)CONCAT44(uVar19,uVar18)))) ||
                       (*(char *)(*(longlong *)(param_1 + 0x70) + 0x85) != '\x01'))
                    goto LAB_141142c60;
                  }
                  else {
                    pdVar16 = *(double **)(param_1 + 0x70);
                    if ((*(char *)(param_1 + 0x52) != '\0') ||
                       (*(char *)((longlong)pdVar16 + 0x85) != '\0')) goto LAB_141142bfa;
                    iVar17 = *(int *)(pdVar16 + 0x792);
                    *(uint *)(pdVar16 + 0x792) = iVar17 + 1U;
                    if (*(uint *)((longlong)pdVar16 + 0x3c94) < iVar17 + 1U) {
                      FUN_1412de590(pdVar16 + 0x11,iVar17);
                    }
                    pdVar15 = pdVar16 + 0x11;
                    if ((double *)pdVar16[0x791] != (double *)0x0) {
                      pdVar15 = (double *)pdVar16[0x791];
                    }
                    pdVar16 = local_208;
                    pdVar15 = pdVar15 + (longlong)iVar17 * 0xf;
                    for (lVar13 = 0xf; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *pdVar15 = *pdVar16;
                      pdVar16 = pdVar16 + 1;
                      pdVar15 = pdVar15 + 1;
                    }
LAB_141142c60:
                    iVar17 = local_338;
                    if (*(char *)(param_1 + 0x52) == '\0') goto LAB_141142c6b;
                  }
                  uVar10 = 0;
                  goto LAB_141142cd8;
                }
              }
            }
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x90) == 0) {
            dVar20 = *(double *)(param_1 + 0x38);
            dVar22 = *(double *)(param_1 + 0x40);
            uVar18 = (undefined4)*(undefined8 *)(param_1 + 0x48);
            uVar19 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
            dVar21 = (local_160 - local_178) * 0.5;
            dVar23 = (dStack_168 - (double)CONCAT44(uStack_17c,uStack_180)) * 0.5;
            dVar7 = (local_170 - (double)CONCAT44(uStack_184,local_188)) * 0.5;
          }
          else {
            dVar21 = (local_160 - local_178) * 0.5;
            dVar22 = (dStack_168 - (double)CONCAT44(uStack_17c,uStack_180)) * 0.5;
            dVar20 = (local_170 - (double)CONCAT44(uStack_184,local_188)) * 0.5;
            uVar18 = SUB84(dVar21,0);
            uVar19 = (undefined4)((ulonglong)dVar21 >> 0x20);
            dVar23 = dVar22;
            dVar7 = dVar20;
          }
          dVar7 = dVar7 + (double)CONCAT44(uStack_184,local_188);
          dVar23 = dVar23 + (double)CONCAT44(uStack_17c,uStack_180);
          local_208[0] = (*(double *)(lVar6 + 0x18) - dVar20) - dVar7;
          local_208[1] = (*(double *)(lVar6 + 0x20) - dVar22) - dVar23;
          local_1f8 = (*(double *)(lVar6 + 0x28) - (double)CONCAT44(uVar19,uVar18)) -
                      (dVar21 + local_178);
          local_2d8[0] = (*(double *)(lVar6 + 0x30) + dVar20) - dVar7;
          local_2d8[1] = (*(double *)(lVar6 + 0x38) + dVar22) - dVar23;
          local_2d8[2] = (*(double *)(lVar6 + 0x40) + (double)CONCAT44(uVar19,uVar18)) -
                         (dVar21 + local_178);
          uVar18 = 0;
          uVar19 = 0;
          lVar11 = 0;
          dVar20 = 1.79769313486232e+308;
          do {
            if (*(char *)((longlong)param_3 + lVar11 + 0x30) == '\x01') {
              if (0.0 < local_208[lVar11]) goto LAB_141142c6b;
              dVar22 = 0.0;
              dVar21 = 1.79769313486232e+308;
              if (local_2d8[lVar11] <= 0.0 && local_2d8[lVar11] != 0.0) goto LAB_141142c6b;
            }
            else {
              dVar22 = local_208[lVar11] * (double)param_3[lVar11 + 1];
              dVar21 = (double)param_3[lVar11 + 1] * local_2d8[lVar11];
            }
            dVar23 = dVar21;
            if (dVar22 <= dVar21) {
              dVar23 = dVar22;
            }
            if ((double)CONCAT44(uVar19,uVar18) <= dVar23) {
              uVar18 = SUB84(dVar23,0);
              uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
            }
            if (dVar22 <= dVar21) {
              dVar22 = dVar21;
            }
            if (dVar22 <= dVar20) {
              dVar20 = dVar22;
            }
            if (dVar20 <= (double)CONCAT44(uVar19,uVar18) &&
                (double)CONCAT44(uVar19,uVar18) != dVar20) goto LAB_141142c6b;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 3);
          if (((double)CONCAT44(uVar19,uVar18) < (double)param_3[4] ||
               (double)CONCAT44(uVar19,uVar18) == (double)param_3[4]) && (0.0 <= dVar20))
          goto LAB_141142703;
        }
LAB_141142c6b:
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)((longlong)dVar4 + 0x88));
      uVar10 = 1;
    }
  }
LAB_141142cd8:
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141142d66 FUN_141142d66 body=158 status=ok
// SIG undefined FUN_141142d66(void)

ulonglong FUN_141142d66(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_141142de8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_141142de8;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_20 = *(undefined4 *)(param_1 + 0x10);
      local_28 = *(undefined8 *)(param_1 + 8);
      (**(code **)(param_1 + 0x30))(lVar4);
    }
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 141142eae FUN_141142eae body=274 status=ok
// SIG undefined FUN_141142eae(void)

void FUN_141142eae(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined2 param_4,
                  byte param_5)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 **local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  local_60 = puVar2;
  if (puVar2 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(puVar2 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(puVar2,iVar1,0);
      memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_140bee9ec(puVar2 + 2,param_3);
  *(undefined2 *)(puVar2 + 4) = param_4;
  *(byte *)((longlong)puVar2 + 0x22) = *(byte *)((longlong)puVar2 + 0x22) & 0xfe | param_5;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c866f58);
  local_50 = &local_58;
  local_48 = &local_60;
  FUN_141142fc2(&DAT_14c866f80,local_3c,&local_50,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c866f58);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141142fc2 FUN_141142fc2 body=855 status=ok
// SIG undefined FUN_141142fc2(void)

int * FUN_141142fc2(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar12) {
      FUN_14482b872(param_1,iVar12);
    }
    iVar14 = (int)param_1[5];
    if (iVar14 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar4 = iVar14 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar9 = iVar14 + 1;
    iVar15 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar15 = iVar14;
    }
    if (iVar15 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar14) {
        if (iVar14 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar4 = iVar14;
        }
        else {
          uVar16 = iVar14 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar5 = 4;
            if (4 < uVar16) {
              uVar5 = uVar16;
            }
          }
          else {
            uVar5 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar5 << 2,0);
          iVar4 = (int)(uVar11 >> 2);
          iVar9 = -0x20;
          if ((int)uVar16 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar13,iVar4);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar4 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar13;
        }
        bVar8 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar12;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar14 & 0x1f;
    puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar12 = (int)param_1[6];
    lVar6 = (longlong)iVar12;
    iVar14 = *(int *)(*param_1 + 4 + lVar6 * 0x18);
    *(int *)(param_1 + 6) = iVar14;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar14 * 0x18) = 0xffffffff;
    }
  }
  plVar13 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar13 = (longlong *)param_1[4];
  }
  iVar14 = iVar12 + 0x1f;
  if (-1 < iVar12) {
    iVar14 = iVar12;
  }
  puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar14 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  plVar13 = (longlong *)(*param_1 + lVar6 * 0x18);
  plVar10 = (longlong *)param_3[1];
  lVar6 = *(longlong *)*param_3;
  *plVar13 = lVar6;
  plVar13[1] = *plVar10;
  *(undefined4 *)(plVar13 + 2) = 0xffffffff;
  uVar16 = (uint)((ulonglong)lVar6 >> 0x10);
  uVar5 = (uint)lVar6 & 0xffff;
  uVar16 = ((uint)lVar6 << 0x10 | uVar5) + (int)((ulonglong)lVar6 >> 0x20) +
           (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar5 >> 4);
  cVar7 = '\0';
  iVar14 = iVar12;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar16) * 4);
    if (iVar14 != -1) {
      do {
        plVar10 = (longlong *)(*param_1 + (longlong)iVar14 * 0x18);
        if (*plVar10 == lVar6) {
          uVar2 = *(undefined4 *)((longlong)plVar13 + 4);
          lVar6 = plVar13[1];
          uVar3 = *(undefined4 *)((longlong)plVar13 + 0xc);
          *(int *)plVar10 = (int)*plVar13;
          *(undefined4 *)((longlong)plVar10 + 4) = uVar2;
          *(int *)(plVar10 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar10 + 0xc) = uVar3;
          FUN_14680d420(param_1,iVar12);
          cVar7 = '\x01';
          goto LAB_141143135;
        }
        iVar14 = (int)plVar10[2];
      } while (iVar14 != -1);
    }
    cVar7 = '\0';
    iVar14 = iVar12;
  }
LAB_141143135:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar7;
  }
  if (cVar7 == '\0') {
    uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar5 < 4) {
      iVar12 = 1;
    }
    else {
      uVar11 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar12 <= (int)param_1[9])) {
      uVar16 = (int)param_1[9] - 1U & uVar16;
      *(uint *)((longlong)plVar13 + 0x14) = uVar16;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      *(undefined4 *)(plVar13 + 2) =
           *(undefined4 *)
            ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = param_1 + 7;
      }
      *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
           iVar14;
    }
    else {
      *(int *)(param_1 + 9) = iVar12;
      FUN_14114331a(param_1);
    }
  }
  *param_2 = iVar14;
  return param_2;
}



// FUNCTION 14114331a FUN_14114331a body=594 status=ok
// SIG undefined FUN_14114331a(void)

void FUN_14114331a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x18);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x14 + lVar13 * 0x18) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x10 + lVar13 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_141143523;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_141143523:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14114356e FUN_14114356e body=36 status=ok
// SIG undefined FUN_14114356e(void)

undefined8 FUN_14114356e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141143592 FUN_141143592 body=139 status=ok
// SIG undefined FUN_141143592(void)

void FUN_141143592(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1488c1998(param_2,0);
  }
  local_28 = FUN_14114361e();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_141143704(param_1,&local_28,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14114361e FUN_14114361e body=228 status=ok
// SIG undefined FUN_14114361e(void)

longlong FUN_14114361e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb58e08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464c483a;
    local_38 = &LAB_14865a555;
    local_40 = &LAB_140b9652b;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x3f0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxAIHeldExplosiveComponent",&DAT_14cb58e08,&DAT_14865a554);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58e08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141143704 FUN_141143704 body=1597 status=ok
// SIG undefined FUN_141143704(void)

void FUN_141143704(longlong param_1,longlong *param_2,char param_3,longlong *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  byte bVar16;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  longlong *local_80;
  longlong local_78;
  ulonglong local_70;
  uint *local_68;
  longlong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar12 = *param_2;
  if (lVar12 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_141143bae:
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
    }
LAB_141143773:
    lVar7 = *param_2;
    if (lVar12 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        if ((lVar7 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar7);
        }
        FUN_1488c1c60(param_1,param_4);
      }
      else {
        local_58 = lVar7;
        if ((lVar7 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar7);
        }
        FUN_1488c19f8(param_1,&local_58,param_4);
      }
      goto LAB_141143cc4;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_141143bae;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
        == DAT_14cad00c8 + 0x30)) {
      lVar12 = *param_2;
      goto LAB_141143773;
    }
    lVar7 = *param_2;
  }
  bVar16 = lVar7 != 0;
  if (param_3 == '\0') {
    if ((DAT_14c950c29 & bVar16) == 1) {
      FUN_1456cec3c(lVar7);
    }
    puVar13 = (uint *)(param_1 + 0x250);
    uVar2 = *(uint *)(param_1 + 0x268);
    if (uVar2 == 0) {
      uVar15 = 1;
      uVar10 = 0;
      uVar3 = 0;
      iVar8 = 0;
    }
    else {
      puVar4 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar4 = puVar13;
      }
      uVar3 = *puVar4;
      if (uVar3 == 0) {
        iVar8 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar8 = uVar2 - 1;
        }
        uVar10 = 0;
        uVar15 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar15 = uVar10;
        }
        iVar8 = 0;
        do {
          if (uVar15 == uVar10) goto LAB_141143cc4;
          iVar8 = iVar8 + 0x20;
          uVar3 = puVar4[uVar10 + 1];
          uVar10 = uVar10 + 1;
        } while (uVar3 == 0);
      }
      else {
        uVar10 = 0;
        iVar8 = 0;
      }
      uVar15 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar3 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if ((int)uVar2 <= (int)uVar3) {
        uVar3 = uVar2;
      }
    }
    if (uVar3 != uVar2) {
      uVar14 = 0xffffffff;
      local_78 = param_1;
      local_70 = (ulonglong)uVar2;
      do {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar3 * 0x10);
        if (lVar12 != 0) {
          if ((DAT_14c950c29 & bVar16) == 1) {
            local_80 = (longlong *)CONCAT71(local_80._1_7_,bVar16);
            FUN_1456cec3c(lVar7);
            param_1 = local_78;
            bVar16 = (byte)local_80;
LAB_141143874:
            if (DAT_14cad00c8 == 0) {
              local_a0 = &local_50;
              local_50 = FUN_144a7958c;
              local_90 = FUN_14081d0ea;
              local_98 = FUN_14081d0ea;
              local_a8 = &LAB_1479b7a0c;
              local_b0 = &LAB_1463b464e;
              local_b8 = L"Engine";
              local_c0 = 0;
              local_c8 = 0x10000005;
              local_d0 = 8;
              local_d8 = 0x110;
              local_80 = (longlong *)CONCAT71(local_80._1_7_,bVar16);
              FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
              param_1 = local_78;
              bVar16 = (byte)local_80;
              if (DAT_14cad00c8 == 0) goto LAB_141143a97;
            }
            if (*(int *)(lVar7 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_141143a97;
            lVar11 = 0;
            if (*(longlong *)
                 (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                DAT_14cad00c8 + 0x30) {
              lVar11 = lVar7;
            }
          }
          else {
            if (lVar7 != 0) goto LAB_141143874;
LAB_141143a97:
            lVar11 = 0;
          }
          if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
            iVar9 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar9 + 1U) {
              local_80 = param_4;
              local_68 = puVar13;
              FUN_141143d42(param_4,iVar9);
              param_1 = local_78;
              puVar13 = local_68;
              param_4 = local_80;
            }
            *(longlong *)(*param_4 + (longlong)iVar9 * 8) = lVar12;
          }
        }
        uVar14 = uVar14 & ~(uint)uVar15;
        puVar4 = *(uint **)(param_1 + 0x260);
        if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
          puVar4 = puVar13;
        }
        uVar2 = *(uint *)(param_1 + 0x268);
        iVar9 = (int)uVar10;
        lVar12 = (longlong)iVar9;
        uVar3 = puVar4[lVar12] & uVar14;
        if (uVar3 == 0) {
          iVar5 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar5 = uVar2 - 1;
          }
          iVar5 = iVar5 >> 5;
          iVar8 = iVar8 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar9) {
            iVar6 = iVar9;
          }
          if (iVar9 < iVar5) {
            lVar11 = 0;
            do {
              uVar3 = puVar4[lVar12 + lVar11 + 1];
              if (uVar3 != 0) {
                uVar10 = (ulonglong)(iVar9 + (int)lVar11 + 1);
                uVar14 = 0xffffffff;
                goto LAB_14114392d;
              }
              iVar8 = iVar8 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar6 - lVar12 != lVar11);
            uVar14 = 0xffffffff;
            iVar9 = iVar6;
          }
          uVar10 = (ulonglong)(iVar9 + 1);
          uVar3 = uVar2;
        }
        else {
LAB_14114392d:
          uVar15 = (ulonglong)(-uVar3 & uVar3);
          uVar1 = uVar15 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar3 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar3) {
            uVar3 = uVar2;
          }
        }
      } while (uVar3 != (uint)local_70);
    }
  }
  else {
    local_60 = lVar7;
    if ((bVar16 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar7);
    }
    FUN_1488c1d96(param_1,&local_60,param_4);
  }
LAB_141143cc4:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141143d42 FUN_141143d42 body=353 status=ok
// SIG undefined FUN_141143d42(void)

void FUN_141143d42(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141143dc7;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_141143dc7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141143ea4 FUN_141143ea4 body=286 status=ok
// SIG undefined FUN_141143ea4(void)

undefined8 FUN_141143ea4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141143fbc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141143fbc;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_141143fbc:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141143f69;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_141143f69;
    }
  }
  uVar6 = 0;
LAB_141143f69:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141143fc4 FUN_141143fc4 body=2303 status=ok
// SIG undefined FUN_141143fc4(void)

void FUN_141143fc4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  void *_Src;
  void *pvVar7;
  code *pcVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  ushort uVar19;
  ushort uVar20;
  ulonglong uVar21;
  PSRWLOCK SRWLock;
  bool bVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  code **local_170;
  code *local_168;
  code *local_160;
  code *local_158;
  longlong local_150;
  void *local_148;
  undefined8 uStack_140;
  void *local_138;
  ulonglong uStack_130;
  code *local_120;
  longlong *local_118;
  longlong local_110;
  int local_108;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (param_2 == (longlong *)0x0) {
    FUN_1449027d0(param_1,&local_120);
    lVar17 = *(longlong *)(local_120 + 0x50);
    SRWLock = (PSRWLOCK)(lVar17 + 0x200);
    AcquireSRWLockExclusive(SRWLock);
    *(int *)(lVar17 + 0x1f8) = *(int *)(lVar17 + 0x1f8) + 1;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_118 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_118 + 0x10))(local_118);
        }
      }
    }
    *(int *)(lVar17 + 0x1f0) = *(int *)(lVar17 + 0x1f0) + 1;
    *(undefined1 *)(lVar17 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    FUN_140d4fdc0(param_1);
LAB_141144055:
    ReleaseSRWLockExclusive(SRWLock);
  }
  else {
    if (*(code **)(*param_2 + 8) == (code *)&LAB_1449493aa) {
      param_2 = param_2 + -0xa6;
    }
    else {
      param_2 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
    }
    if (param_2 != (longlong *)0x0) {
      if (DAT_14cac9ca8 == 0) {
        local_170 = &local_120;
        local_120 = FUN_141030f22;
        local_160 = FUN_14081d0ea;
        local_168 = FUN_14081d0ea;
        local_178 = &LAB_1478c0a72;
        local_180 = &LAB_1417b2375;
        local_188 = L"Engine";
        local_190 = 0x1000000000;
        local_198 = 0x10000004;
        local_1a0 = 8;
        local_1a8 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
          DAT_14cac9ca8 + 0x30)) {
        uVar14 = *(uint *)((longlong)param_2 + 0xc);
        *(uint *)(param_1 + 0x50) = uVar14;
        if ((int)uVar14 < DAT_14c9647dc) {
          lVar17 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
        }
        else {
          lVar17 = 0;
        }
        iVar9 = *(int *)(lVar17 + 0x10);
        if (iVar9 == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          iVar18 = DAT_14c964868 + 1;
          bVar22 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar22) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar18);
          }
          LOCK();
          iVar9 = *(int *)(lVar17 + 0x10);
          bVar22 = iVar9 == 0;
          if (bVar22) {
            *(int *)(lVar17 + 0x10) = iVar18;
            iVar9 = 0;
          }
          UNLOCK();
          if (bVar22) {
            iVar9 = iVar18;
          }
          *(int *)(param_1 + 0x54) = iVar9;
          if (iVar9 == 0) goto LAB_14114405e;
        }
        else {
          *(int *)(param_1 + 0x54) = iVar9;
        }
        uVar14 = *(uint *)(param_1 + 0x50);
        if ((((((int)uVar14 < 0) || (DAT_14c9647dc <= (int)uVar14)) ||
             (plVar11 = (longlong *)
                        ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
             plVar11 == (longlong *)0x0)) ||
            (((int)plVar11[2] != iVar9 || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) ||
           (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 || (lVar17 = *plVar11, lVar17 == 0))))
        goto LAB_14114405e;
        FUN_1449027d0(param_1,&local_120);
        lVar2 = *(longlong *)(local_120 + 0x50);
        SRWLock = (PSRWLOCK)(lVar2 + 0x200);
        AcquireSRWLockExclusive(SRWLock);
        *(int *)(lVar2 + 0x1f8) = *(int *)(lVar2 + 0x1f8) + 1;
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_118 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar1 = (int *)((longlong)local_118 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_118 + 0x10))(local_118);
            }
          }
        }
        *(int *)(lVar2 + 0x1f0) = *(int *)(lVar2 + 0x1f0) + 1;
        *(undefined4 *)(lVar2 + 0x1e0) = *(undefined4 *)(param_1 + 0x84);
        plVar11 = (longlong *)(lVar2 + 0x1d0);
        *(undefined4 *)(lVar2 + 0x1d8) = 0;
        if (*(int *)(lVar2 + 0x1dc) < 0) {
          FUN_1446f8c06(plVar11,0);
        }
        if ((undefined2 *)*plVar11 != (undefined2 *)0x0) {
          *(undefined2 *)*plVar11 = 0;
        }
        local_138 = (void *)0x0;
        uStack_130 = 0;
        if (DAT_14cb6a468 == 0) {
          local_120 = FUN_140940a0a;
          local_160 = FUN_14081d0ea;
          local_168 = (code *)&LAB_146522c10;
          local_178 = &LAB_14876160d;
          local_180 = &LAB_140e30382;
          local_188 = L"Engine";
          local_190 = 0;
          local_198 = 0x10000004;
          local_1a0 = 0x10;
          local_1a8 = 0x9c0;
          local_170 = &local_120;
          FUN_14081cfa3(L"/Script/GbxGame",L"InventoryPickup",&DAT_14cb6a468,FUN_146526160);
        }
        if ((*(int *)(DAT_14cb6a468 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb6a468 + 0x38) * 8) == DAT_14cb6a468 + 0x30)) {
          FUN_1406fd608(&local_120);
          pcVar8 = local_120;
          if (local_120 == (code *)0x0) {
LAB_141144670:
            FUN_140368b56(&local_120);
            goto LAB_141144055;
          }
          if ((longlong)local_108 != 0) {
            lVar15 = 0;
            do {
              if (*(longlong *)(local_110 + lVar15) == 0) goto LAB_141144670;
              lVar15 = lVar15 + 8;
            } while ((longlong)local_108 * 8 != lVar15);
          }
          local_150 = lVar17;
          FUN_1400021e4(local_120 + 0x3c,&local_148);
          uVar16 = uStack_140;
          _Src = local_148;
          iVar9 = (int)uStack_140;
          uVar14 = (int)uStack_140 - 1;
          if ((int)uStack_140 == 0) {
            uVar14 = 0;
          }
          if (0 < (int)uVar14) {
            uVar12 = 0;
            do {
              uVar19 = *(ushort *)((longlong)local_148 + uVar12 * 2);
              *(ushort *)((longlong)local_148 + uVar12 * 2) =
                   (ushort)(uVar19 - 0x41 < 0x1a) * 0x20 + uVar19;
              uVar12 = uVar12 + 1;
            } while (uVar14 != uVar12);
          }
          if ((int)uStack_140 == DAT_14cbd6bc8) {
            if (1 < (int)uStack_140) {
              lVar17 = 0;
              while( true ) {
                uVar19 = *(ushort *)((longlong)local_148 + lVar17);
                uVar12 = (ulonglong)uVar19;
                uVar20 = *(ushort *)(DAT_14cbd6bc0 + lVar17);
                if (uVar19 != uVar20) break;
                if (uVar19 == 0) goto LAB_14114442f;
LAB_1411443ff:
                lVar17 = lVar17 + 2;
              }
              if ((uVar20 | uVar19) < 0x80) {
                uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                uVar21 = (ulonglong)uVar20;
                uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
                if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar21]) goto LAB_1411443ff;
              }
              if (uVar19 != uVar20) goto LAB_141144323;
            }
LAB_14114442f:
            puVar13 = &DAT_14c9485f0;
            if (*(undefined4 **)(pcVar8 + 8) != (undefined4 *)0x0) {
              puVar13 = *(undefined4 **)(pcVar8 + 8);
            }
            local_148 = (void *)0x0;
            uStack_140 = 0;
            FUN_1400b2348(puVar13,&local_148,1);
            local_138 = local_148;
            uStack_130 = uStack_140;
          }
          else {
            if (DAT_14cbd6bc8 + (int)uStack_140 == 1) goto LAB_14114442f;
LAB_141144323:
            lVar17 = FUN_14001d26e(pcVar8);
            if (lVar17 == 0) {
              uStack_130 = CONCAT44(uStack_130._4_4_,iVar9);
              if (iVar9 == 0) {
                uStack_130 = uVar16 & 0xffffffff;
              }
              else {
                FUN_1446dd670(&local_138,uVar16 & 0xffffffff,0);
                memcpy(local_138,_Src,(longlong)iVar9 * 2);
              }
            }
            else {
              puVar13 = &DAT_14c9485f0;
              if (*(undefined4 **)(lVar17 + 8) != (undefined4 *)0x0) {
                puVar13 = *(undefined4 **)(lVar17 + 8);
              }
              local_148 = (void *)0x0;
              uStack_140 = 0;
              FUN_1400b2348(puVar13,&local_148,1);
              uVar14 = (int)uStack_140 - 1;
              if ((int)uStack_140 == 0) {
                uVar14 = 0;
              }
              if (0 < (int)uVar14) {
                uVar16 = 0;
                do {
                  uVar19 = *(ushort *)((longlong)local_148 + uVar16 * 2);
                  *(ushort *)((longlong)local_148 + uVar16 * 2) =
                       (ushort)(uVar19 - 0x41 < 0x1a) * 0x20 + uVar19;
                  uVar16 = uVar16 + 1;
                } while (uVar14 != uVar16);
              }
              local_138 = local_148;
              uStack_130 = uStack_140;
            }
          }
          local_158 = pcVar8;
          lVar17 = FUN_14087dee0(&local_120);
          if (lVar17 != 0) {
            FUN_1400021e4(lVar17 + 0x1c,&local_148);
            pvVar7 = local_148;
            iVar9 = (int)uStack_140;
            uVar14 = (int)uStack_140 - 1;
            if ((int)uStack_140 == 0) {
              uVar14 = 0;
            }
            if (0 < (int)uVar14) {
              uVar16 = 0;
              do {
                uVar19 = *(ushort *)((longlong)local_148 + uVar16 * 2);
                *(ushort *)((longlong)local_148 + uVar16 * 2) =
                     (ushort)(uVar19 - 0x41 < 0x1a) * 0x20 + uVar19;
                uVar16 = uVar16 + 1;
              } while (uVar14 != uVar16);
            }
            uVar23 = uStack_140._4_4_;
            local_148 = (void *)0x0;
            uStack_140 = 0;
            if (*plVar11 == 0) {
              *(void **)(lVar2 + 0x1d0) = pvVar7;
              *(int *)(lVar2 + 0x1d8) = iVar9;
              *(undefined4 *)(lVar2 + 0x1dc) = uVar23;
            }
            else {
              FUN_1400020a8();
              *(void **)(lVar2 + 0x1d0) = pvVar7;
              *(int *)(lVar2 + 0x1d8) = iVar9;
              *(undefined4 *)(lVar2 + 0x1dc) = uVar23;
              if (local_148 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
            *(undefined4 *)(lVar2 + 0x1e0) = *(undefined4 *)(lVar17 + 0xd0);
          }
          *(bool *)(lVar2 + 0x1e4) = ((byte)local_158[0x46c] & 2) == 0;
          if (_Src != (void *)0x0) {
            FUN_1400020a8(_Src);
          }
          FUN_140368b56(&local_120);
          lVar17 = local_150;
        }
        lVar17 = *(longlong *)(lVar17 + 0x1c8);
        if (lVar17 == 0) {
          puVar10 = &DAT_14c8464e0;
          uVar23 = (undefined4)DAT_14c8464f0;
          uVar24 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar23 = (undefined4)*(undefined8 *)(lVar17 + 0x270);
          uVar24 = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x270) >> 0x20);
          puVar10 = (undefined8 *)(lVar17 + 0x260);
        }
        uVar3 = *(undefined4 *)((longlong)puVar10 + 4);
        uVar4 = *(undefined4 *)(puVar10 + 1);
        uVar5 = *(undefined4 *)((longlong)puVar10 + 0xc);
        *(undefined4 *)(lVar2 + 0x150) = *(undefined4 *)puVar10;
        *(undefined4 *)(lVar2 + 0x154) = uVar3;
        *(undefined4 *)(lVar2 + 0x158) = uVar4;
        *(undefined4 *)(lVar2 + 0x15c) = uVar5;
        *(ulonglong *)(lVar2 + 0x160) = CONCAT44(uVar24,uVar23);
        *(undefined1 *)(lVar2 + 0x148) = 7;
        iVar9 = (int)uStack_130 + -1;
        if ((int)uStack_130 == 0) {
          iVar9 = 0;
        }
        FUN_1402980a2(lVar2 + 0x1c0,local_138,iVar9);
        *(undefined4 *)(lVar2 + 0x1e8) = 0;
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar2 + 0x160);
        uVar6 = *(undefined8 *)(lVar2 + 0x158);
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar2 + 0x150);
        *(undefined8 *)(param_1 + 0x60) = uVar6;
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(lVar2 + 0x1e8);
        *(undefined4 *)(param_1 + 0x80) = 0;
        FUN_140d4fdc0(param_1);
        if (local_138 != (void *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_141144055;
      }
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
LAB_14114405e:
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411448c4 FUN_1411448c4 body=857 status=ok
// SIG undefined FUN_1411448c4(void)

void FUN_1411448c4(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined8 *local_58;
  int local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar10 = *(longlong *)(param_1 + 0x58);
  if (lVar10 == 0) goto LAB_141144b1b;
  uVar8 = FUN_14185dd92();
  cVar6 = FUN_1448093f4(lVar10,uVar8);
  if (cVar6 == '\0') goto LAB_141144b1b;
  lVar1 = param_1 + 0x78;
  *(undefined1 *)(param_1 + 0x78) = 0xb;
  FUN_140c25b54(lVar1);
  local_38 = *(undefined4 *)(lVar10 + 0x10);
  local_40 = *(undefined8 *)(lVar10 + 8);
  FUN_144928d62(param_1 + 0x88,0);
  uVar8 = FUN_140db9074(param_1);
  FUN_140e29818(param_1,&local_58);
  FUN_140d84843(lVar1,&local_58,&DAT_14c948618,uVar8);
  if ((*(char *)(param_1 + 0x78) == '\v') || (cVar6 = FUN_1401144ce(lVar1), cVar6 == '\0'))
  goto LAB_141144b1b;
  uVar8 = FUN_140ec3c88(param_1);
  plVar9 = (longlong *)FUN_140ec3c65(uVar8);
  if (plVar9 == (longlong *)0x0) goto LAB_141144b1b;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  local_50 = 3;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_141144b3e:
    *local_58 = &PTR_LAB_14b3fc100;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_58[2] = lVar11;
    *local_58 = &PTR_FUN_14b4193a0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = FUN_140f67f66;
  }
  else {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_141144b3e;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar12 = iVar7 == iVar5;
      if (bVar12) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar12);
    uVar8 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *local_58 = &PTR_LAB_14b3fc100;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_58[2] = lVar11;
    *local_58 = &PTR_FUN_14b4193a0;
    local_58[3] = uVar8;
    local_58[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    local_58[5] = FUN_140f67f66;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  (**(code **)(*plVar9 + 0x70))(plVar9,&local_48,lVar1,&local_58);
  *(undefined8 *)(param_1 + 0xb0) = local_48;
  if (local_50 == 0) {
LAB_141144ad0:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_141144ad0;
  }
  if ((*(longlong *)(param_1 + 0xb0) != 0) &&
     (lVar10 = (**(code **)(*plVar9 + 0x60))(plVar9,lVar1), lVar10 != 0)) {
    local_68 = *(longlong *)(lVar10 + 0x10);
    if (*(longlong *)(lVar10 + 0x10) == 0) {
      local_68 = lVar10;
    }
    local_60 = *(undefined4 *)(lVar10 + 0x18);
    FUN_140ec3f1c(param_1);
  }
LAB_141144b1b:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141144c1e FUN_141144c1e body=447 status=ok
// SIG undefined FUN_141144c1e(void)

void FUN_141144c1e(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined8 *local_58;
  int local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)(param_1 + 0x58);
  if (lVar5 == 0) goto LAB_141144c41;
  uVar3 = FUN_14652ea10();
  cVar2 = FUN_1448093f4(lVar5,uVar3);
  if (cVar2 == '\0') goto LAB_141144c41;
  lVar1 = param_1 + 0x88;
  *(undefined1 *)(param_1 + 0x88) = 0xb;
  FUN_140c25b54(lVar1);
  local_38 = *(undefined4 *)(lVar5 + 0x10);
  local_40 = *(undefined8 *)(lVar5 + 8);
  FUN_144928d62(param_1 + 0x98,0);
  uVar3 = FUN_140db9074(param_1);
  FUN_140e29818(param_1,&local_58);
  FUN_140d84843(lVar1,&local_58,&DAT_14c948618,uVar3);
  if (*(char *)(param_1 + 0x88) == '\v') goto LAB_141144c41;
  uVar3 = FUN_140ec3c88(param_1);
  plVar4 = (longlong *)FUN_140ec3c65(uVar3);
  if (plVar4 == (longlong *)0x0) goto LAB_141144c41;
  cVar2 = FUN_1401144ce(lVar1);
  if (cVar2 == '\0') goto LAB_141144c41;
  FUN_1465566ce(&local_58,param_1);
  (**(code **)(*plVar4 + 0x70))(plVar4,&local_48,lVar1,&local_58);
  *(undefined8 *)(param_1 + 0xc0) = local_48;
  if (local_50 == 0) {
LAB_141144d84:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_141144d84;
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar5 = (**(code **)(*plVar4 + 0x60))(plVar4,lVar1);
    if (lVar5 != 0) {
      local_68 = *(longlong *)(lVar5 + 0x10);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        local_68 = lVar5;
      }
      local_60 = *(undefined4 *)(lVar5 + 0x18);
      FUN_1457c1586(param_1);
    }
  }
LAB_141144c41:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141144dde FUN_141144dde body=270 status=ok
// SIG undefined FUN_141144dde(void)

undefined8 FUN_141144dde(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141144ee6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141144ee6;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_141144ee6:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141144e94;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_141144e94;
    }
  }
  uVar6 = 0;
LAB_141144e94:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141144eee FUN_141144eee body=162 status=ok
// SIG undefined FUN_141144eee(void)

void FUN_141144eee(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x140) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x138);
    lVar2 = (longlong)*(int *)(param_1 + 0x140) * 0xa8;
    do {
      uVar1 = *(uint *)(lVar3 + 0xa0);
      if ((uVar1 & 1) != 0) {
        FUN_140d10fb2(lVar3);
        uVar1 = *(uint *)(lVar3 + 0xa0);
      }
      if ((uVar1 & 2) != 0) {
        FUN_14128cd42(lVar3);
        uVar1 = *(uint *)(lVar3 + 0xa0);
      }
      if ((uVar1 & 4) != 0) {
        FUN_14128cdea(lVar3);
      }
      *(undefined4 *)(lVar3 + 0xa0) = 0;
      lVar3 = lVar3 + 0xa8;
      lVar2 = lVar2 + -0xa8;
    } while (lVar2 != 0);
  }
  FUN_1447f69b6(param_1 + 0xd8);
  FUN_1448a8284(param_1 + 0xd8);
  FUN_141144f90(param_1);
  return;
}



// FUNCTION 141144f90 FUN_141144f90 body=87 status=ok
// SIG undefined FUN_141144f90(void)

void FUN_141144f90(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x188);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  plVar2 = (longlong *)(param_1 + 0x188);
  if ((plVar1[2] != 0) && (FUN_14480f766(*plVar1 + 0x88,plVar1[2]), *plVar2 == 0)) {
    return;
  }
  *plVar2 = 0;
  FUN_1410ceff0(plVar2);
  return;
}



// FUNCTION 14114504a FUN_14114504a body=73 status=ok
// SIG undefined FUN_14114504a(void)

void FUN_14114504a(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  local_18 = &local_10;
  FUN_140f71c20(param_1,param_4,param_3,2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141145094 FUN_141145094 body=193 status=ok
// SIG undefined FUN_141145094(void)

void FUN_141145094(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [47];
  undefined1 local_89;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  undefined1 *local_58;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_141145156(param_1,1);
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar1 = (longlong)*(int *)(param_1 + 0x48) << 5;
    do {
      local_89 = 1;
      local_78 = 0;
      local_68 = &PTR_LAB_14b42c0f0;
      local_88[0] = &LAB_143e3a378;
      local_60 = param_1;
      local_58 = &local_89;
      local_50 = lVar2;
      (**(code **)(**(longlong **)(lVar2 + 8) + 8))(*(longlong **)(lVar2 + 8),local_88);
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141145156 FUN_141145156 body=137 status=ok
// SIG undefined FUN_141145156(void)

void FUN_141145156(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  if ((((lVar2 != 0) && (*(longlong **)(param_1 + 0x38) != (longlong *)0x0)) &&
      (*(int *)(param_1 + 0x34) != 0)) &&
     ((uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar4 != 0) &&
       ((*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x34) &&
        ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
      FUN_1412e1114(param_1,param_2 ^ 1,uVar3,lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1411451e0 FUN_1411451e0 body=1210 status=ok
// SIG undefined FUN_1411451e0(void)

void FUN_1411451e0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong lStack_60;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = *param_2;
  plVar9 = (longlong *)param_2[1];
  if (plVar9 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    plVar11 = *(longlong **)(param_1 + 0x40);
    if (plVar11 == (longlong *)0x0) goto LAB_14114524c;
    *(undefined8 *)(param_1 + 0x40) = 0;
LAB_14114555f:
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    if (plVar9 == (longlong *)0x0) goto LAB_14114524c;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    plVar11 = *(longlong **)(param_1 + 0x40);
    if (plVar9 == plVar11) {
      LOCK();
      plVar11 = plVar9 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x40) = plVar9;
      if (plVar11 != (longlong *)0x0) goto LAB_14114555f;
    }
  }
  LOCK();
  plVar11 = plVar9 + 1;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)*plVar11 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
LAB_14114524c:
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar9 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar4 = *param_3;
  uVar7 = FUN_140d9a636();
  lVar13 = *(longlong *)(lVar4 + 0x200);
  if (lVar13 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1403f69f4(lVar13,uVar7,0);
  }
  FUN_140ccc900(lVar4,&local_68,uVar7,param_4);
  uVar6 = FUN_14005fbd2(&local_68,1);
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar5 != (code *)0x0) {
    puVar12 = &local_68;
    if (0x18 < local_50) {
      puVar12 = local_68;
    }
    (*pcVar5)(puVar12);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68);
  }
  iVar8 = 1;
  if (1 < *(int *)(param_1 + 0x70)) {
    iVar8 = *(int *)(param_1 + 0x70);
  }
  *(int *)(param_1 + 0x70) = iVar8;
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x92);
  lVar4 = *(longlong *)(param_1 + 0x30);
  FUN_141103af8(&local_70);
  local_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  lVar13 = local_70;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    local_68 = (undefined8 *)(ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar8 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar8 = *(int *)(lVar13 + 0x10);
      bVar14 = iVar8 == 0;
      if (bVar14) {
        *(int *)(lVar13 + 0x10) = iVar10;
        iVar8 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_68;
      if (bVar14) {
        iVar8 = iVar10;
      }
    }
    local_68._0_4_ = uVar3;
    local_68 = (undefined8 *)CONCAT44(iVar8,(uint)local_68);
    lStack_60 = local_70;
    lVar13 = lStack_60;
    if (((((local_70 != 0) && (iVar8 != 0)) && (-1 < (int)(uint)local_68)) &&
        (((int)(uint)local_68 < DAT_14c9647dc &&
         (plVar9 = (longlong *)
                   ((ulonglong)(((uint)local_68 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_68 >> 0x10) * 8)),
         plVar9 != (longlong *)0x0)))) &&
       (((int)plVar9[2] == iVar8 && (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0))))
       )) {
      FUN_1400796d0(*(undefined8 *)(*plVar9 + 0x10),local_70,1);
      lVar13 = lStack_60;
    }
  }
  lStack_60 = lVar13;
  FUN_14053c012(lVar4 + 0x988,&local_68);
  lVar4 = *(longlong *)(param_1 + 0x30);
  FUN_14114569c(&local_78);
  local_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  lVar13 = local_78;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    local_68 = (undefined8 *)(ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar8 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar8 = *(int *)(lVar13 + 0x10);
      bVar14 = iVar8 == 0;
      if (bVar14) {
        *(int *)(lVar13 + 0x10) = iVar10;
        iVar8 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_68;
      if (bVar14) {
        iVar8 = iVar10;
      }
    }
    local_68._0_4_ = uVar3;
    local_68 = (undefined8 *)CONCAT44(iVar8,(uint)local_68);
    lStack_60 = local_78;
    lVar13 = lStack_60;
    if ((((local_78 != 0) && (iVar8 != 0)) && (-1 < (int)(uint)local_68)) &&
       ((((int)(uint)local_68 < DAT_14c9647dc &&
         (plVar9 = (longlong *)
                   ((ulonglong)(((uint)local_68 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_68 >> 0x10) * 8)),
         plVar9 != (longlong *)0x0)) &&
        (((int)plVar9[2] == iVar8 && (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))
         ))))) {
      FUN_1400796d0(*(undefined8 *)(*plVar9 + 0x10),local_78,1);
      lVar13 = lStack_60;
    }
  }
  lStack_60 = lVar13;
  FUN_14053c012(lVar4 + 0x998,&local_68);
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar9 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14114569c FUN_14114569c body=179 status=ok
// SIG undefined FUN_14114569c(void)

undefined8 * FUN_14114569c(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb949e4) {
    FUN_144b3d300(&DAT_14cb949e4);
    if (DAT_14cb949e4 == -1) {
      builtin_wcsncpy(local_28,L"OnDetached",0xb);
      FUN_1446f470e(&DAT_14cb949dc,local_28,1);
      _Init_thread_footer(&DAT_14cb949e4);
    }
  }
  *param_1 = DAT_14cb949dc;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141145750 FUN_141145750 body=1737 status=ok
// SIG undefined FUN_141145750(void)

void FUN_141145750(longlong *param_1,longlong param_2,uint param_3,undefined4 param_4,
                  undefined1 param_5)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  undefined8 unaff_R15;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_108 [32];
  int local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  code *local_a0;
  longlong local_90;
  uint local_84;
  ulonglong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((char)param_1[0x2f] != '\x03') ||
     ((uVar14 = (ulonglong)param_3, param_2 != 0 && (*(char *)((longlong)param_1 + 0x62f9) != '\0'))
     )) goto LAB_141145a52;
  if (param_2 != 0) {
    if (*(longlong **)(param_2 + 0x1b0) == param_1) {
      plVar11 = *(longlong **)(param_2 + 0xb18);
      if ((plVar11 != (longlong *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(plVar11);
      }
      if (plVar11 == param_1) goto LAB_14114589c;
    }
    pcVar2 = *(code **)(*param_1 + 0x5e8);
    if (pcVar2 == FUN_140972dde) {
      if (param_1[0x76] != 0) goto LAB_141145bf0;
      pcVar2 = *(code **)(*param_1 + 0x5f8);
      if (pcVar2 == FUN_144784df4) {
        if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
          if ((((*(int *)((longlong)param_1 + 0x75b4) != 0) &&
               (uVar1 = *(uint *)(param_1 + 0xeb6), -1 < (int)uVar1)) &&
              ((int)uVar1 < DAT_14c9647dc)) &&
             (((plVar11 = (longlong *)
                          ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar11 != (longlong *)0x0 &&
               ((int)plVar11[2] == *(int *)((longlong)param_1 + 0x75b4))) &&
              ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
              lVar10 = *plVar11;
            }
            else {
              lVar10 = 0;
            }
            lVar10 = lVar10 + 0x110;
            goto LAB_141145bca;
          }
        }
        else {
          lVar10 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_141145bca:
          if (lVar10 != 0) {
            lVar10 = *(longlong *)(lVar10 + 0x20);
            goto LAB_141145bd7;
          }
        }
      }
      else {
        lVar10 = (*pcVar2)(param_1);
LAB_141145bd7:
        if (lVar10 != 0) {
          lVar10 = *(longlong *)(lVar10 + 0x3b0);
          goto LAB_141145be7;
        }
      }
    }
    else {
      lVar10 = (*pcVar2)(param_1);
LAB_141145be7:
      if (lVar10 != 0) {
LAB_141145bf0:
        uVar8 = 0xffffffff;
        if (0 < (longlong)(int)param_1[0xf1e]) {
          lVar10 = 0;
          do {
            if (*(longlong *)(param_1[0xf1d] + 0x20 + lVar10) == param_2) {
              uVar8 = *(undefined4 *)(param_1[0xf1d] + 0xc + lVar10);
              break;
            }
            lVar10 = lVar10 + 0x48;
          } while ((longlong)(int)param_1[0xf1e] * 0x48 != lVar10);
        }
        *(undefined4 *)(param_2 + 0xb4c) = uVar8;
      }
    }
    FUN_140e81132(param_2,param_1);
  }
LAB_14114589c:
  local_80 = uVar14;
  if (((int)param_3 < 0) || ((int)param_1[0xc32] <= (int)param_3)) {
    bVar15 = true;
    local_90 = 0;
    bVar6 = param_2 == 0;
LAB_141145905:
    bVar5 = bVar6;
    iVar12 = (int)param_1[0xc48] + 1;
    *(int *)(param_1 + 0xc48) = iVar12;
    if (param_2 != 0) goto LAB_14114591b;
  }
  else {
    lVar10 = *(longlong *)(param_1[0xc31] + 0x20 + uVar14 * 0x170);
    if ((lVar10 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar10);
    }
    bVar15 = lVar10 == 0;
    local_90 = lVar10;
    bVar6 = lVar10 == param_2;
    if (bVar15 || lVar10 != param_2) goto LAB_141145905;
    bVar5 = true;
    bVar6 = true;
    if ((((*(longlong *)(lVar10 + 0xd60) == DAT_14cb94e38) || (*(longlong *)(lVar10 + 0xba0) != 0))
        || ((*(byte *)(lVar10 + 0x65) & 2) != 0)) ||
       ((param_2 == 0 || ((*(uint *)(lVar10 + 8) & 0x40000000) != 0)))) goto LAB_141145905;
    if (*(longlong *)(param_2 + 0xd60) != DAT_14cb95120) goto LAB_141145a52;
    iVar12 = (int)param_1[0xc48] + 1;
    *(int *)(param_1 + 0xc48) = iVar12;
    bVar15 = false;
LAB_14114591b:
    local_e8 = iVar12;
    FUN_141145e58(param_2,param_1,param_3,
                  CONCAT71((int7)((ulonglong)unaff_R15 >> 8),param_5) & 0xffffffff);
  }
  if (((!(bool)(bVar5 | bVar15)) && (*(longlong *)(local_90 + 0xd60) != DAT_14cb95120)) &&
     (((*(byte *)(local_90 + 0x65) & 2) == 0 && ((*(uint *)(local_90 + 8) >> 0x1e & 1) == 0)))) {
    FUN_145810f82(local_90,param_4);
  }
  fVar18 = 0.0;
  fVar17 = 0.0;
  uVar4 = 2;
  if (!bVar15) {
    fVar17 = (float)FUN_145810f44(local_90);
    uVar4 = param_2 == 0;
  }
  local_84 = param_3;
  if (param_2 == 0) {
LAB_141145caf:
    uVar13 = 0;
  }
  else {
    if (*(char *)(param_2 + 0xd45) == '\x02') {
      fVar18 = 0.0;
    }
    else {
      fVar18 = *(float *)(param_2 + 0xb6c);
      if ((*(longlong *)(param_2 + 0xb18) != 0) &&
         (*(longlong **)(param_2 + 0xb20) != (longlong *)0x0)) {
        fVar16 = (float)(**(code **)(**(longlong **)(param_2 + 0xb20) + 0x40))();
        fVar18 = fVar18 * fVar16;
      }
    }
    if (DAT_14cbbd498 == 0) {
      local_b0 = &local_78;
      local_78 = FUN_140940982;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_146572ba2;
      local_b8 = &LAB_148ca13ba;
      local_c0 = &LAB_140e51436;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10000004;
      local_e0 = 8;
      local_e8 = 0x1068;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cbbd498 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) != DAT_14cbbd498 + 0x30)) goto LAB_141145caf;
    uVar13 = *(undefined1 *)(param_2 + 0xe39);
  }
  cVar7 = (**(code **)(*param_1 + 0x700))(param_1);
  pcVar2 = local_78;
  if (cVar7 == '\0') {
    local_78._6_2_ = SUB82(pcVar2,6);
    local_78._0_6_ = CONCAT15(uVar13,CONCAT14(uVar4,fVar17 + fVar18));
    uVar9 = FUN_14477b072(param_1,DAT_14cba7cc0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar9,&local_78);
  }
  else {
    FUN_1411304a8(param_1 + 0xbfd,fVar17 + fVar18,uVar4,uVar13);
    if (param_1[0x78] != 0) {
      lVar10 = FUN_144a5dd5e();
      plVar11 = (longlong *)param_1[0x78];
      if ((((plVar11 != (longlong *)0x0) && (lVar10 != 0)) && (lVar3 = plVar11[2], lVar3 != 0)) &&
         ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar3 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
           lVar10 + 0x30)))) {
        (**(code **)(*plVar11 + 0x14b8))();
      }
    }
  }
  uVar1 = local_84;
  FUN_140e7e0ee(param_1 + 0xc1d,param_2,local_84,iVar12);
  if (!(bool)(bVar5 | bVar15)) {
    if (((int)uVar1 < 0) || ((int)param_1[0xc32] <= (int)uVar1)) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1[0xc31] + 0x20 + local_80 * 0x170);
      if ((lVar10 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar10);
      }
    }
    if ((((lVar10 != param_2) && (*(longlong *)(local_90 + 0xd60) != DAT_14cb95120)) &&
        ((*(byte *)(local_90 + 0x65) & 2) == 0)) && ((*(uint *)(local_90 + 8) >> 0x1e & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_108);
    }
  }
LAB_141145a52:
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141145e58 FUN_141145e58 body=310 status=ok
// SIG undefined FUN_141145e58(void)

void FUN_141145e58(longlong *param_1,longlong param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  if ((char)param_1[0x2f] == '\x03') {
    if (*(byte *)((longlong)param_1 + 0x179) < 2) {
      (**(code **)(*param_1 + 0x578))();
    }
    *(undefined4 *)(param_1 + 0x1a6) = param_5;
    *(undefined1 *)((longlong)param_1 + 0xd34) = param_3;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    param_1[0x1a7] = param_2;
    *(undefined1 *)((longlong)param_1 + 0xd35) = param_4;
    uVar1 = param_1[5];
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000141145f8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x18);
      return;
    }
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x1000000;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  return;
}



// FUNCTION 141145f8e FUN_141145f8e body=55 status=ok
// SIG undefined FUN_141145f8e(void)

void FUN_141145f8e(longlong *param_1)

{
  FUN_141145fc6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141145fc6 FUN_141145fc6 body=123 status=ok
// SIG undefined FUN_141145fc6(void)

void FUN_141145fc6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 141146042 FUN_141146042 body=213 status=ok
// SIG undefined FUN_141146042(void)

void FUN_141146042(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141146118();
  FUN_1411469f2(param_1 + 0xee0,param_2);
  if (((param_2 != 0) && ((*(byte *)(param_2 + 0x65) & 0x18) == 0x10)) &&
     (*(longlong *)(param_1 + 0xf18) != 0)) {
    lVar1 = FUN_1407ca824(param_2);
    if (lVar1 != 0) {
      local_48 = 0;
      uStack_30 = 0;
      local_28 = 0;
      uStack_20 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      uStack_40 = 0x8000000000;
      local_38 = 0xffffffff;
      FUN_14096df60(lVar1,*(undefined8 *)(param_1 + 0xf18),0,&local_68);
      uStack_20 = uStack_20 & 0xffffffff00000000;
      if (local_28 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_68);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141146118 FUN_141146118 body=548 status=ok
// SIG undefined FUN_141146118(void)

void FUN_141146118(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c88838();
  FUN_140c888e6(param_1 + 0x9a8,param_1,param_2);
  if (*(longlong *)(param_1 + 0xe60) == 0) {
    lVar4 = FUN_14071f5fc(param_1);
    if (lVar4 != 0) {
      uVar5 = (**(code **)(*(longlong *)(lVar4 + 8) + 0x10))(lVar4 + 8);
      local_40 = FUN_140f0baa4;
      local_38 = 0;
      FUN_141146692(uVar5,&local_30,param_1);
      *(undefined8 *)(param_1 + 0xe60) = local_30;
      cVar3 = FUN_14482d262(uVar5,3);
      if (cVar3 != '\0') {
        FUN_140f0baa4(param_1,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0xe58) == 0) {
    local_40 = FUN_148994234;
    local_38 = 0;
    FUN_14114633e(param_1 + 0xc58,&local_30,param_1);
  }
  lVar4 = *(longlong *)(param_1 + 0xe00);
  if (lVar4 == 0) {
    uVar5 = FUN_14043db3a();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0xe00) = lVar4;
  }
  plVar1 = (longlong *)(param_1 + 0xdf8);
  if (*(longlong *)(param_1 + 0xe08) == 0) {
    if ((*plVar1 == 0) || (lVar4 == 0)) goto LAB_14114622f;
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar4 = FUN_144aff482(uVar5,plVar1);
        *(longlong *)(param_1 + 0xe08) = lVar4;
        if (lVar4 == 0) goto LAB_14114622f;
        goto LAB_14114631a;
      }
    }
    *(undefined8 *)(param_1 + 0xe08) = 0;
  }
  else {
LAB_14114631a:
    FUN_146210b66(param_2,plVar1,0);
  }
LAB_14114622f:
  if ((*(longlong *)(param_1 + 0xd08) != 0) && (param_2 != (longlong *)0x0)) {
    uVar5 = FUN_14090a268();
    lVar4 = (**(code **)(*param_2 + 0x288))(param_2,uVar5);
    if (lVar4 != 0) {
      uVar5 = FUN_14090a268();
      lVar6 = FUN_144718840(lVar4,uVar5);
      if (lVar6 != 0 && lVar4 != lVar6) {
        uVar5 = FUN_14892a4dc(lVar6);
        FUN_14892b532(uVar5,*(undefined8 *)(param_1 + 0xd08),DAT_14caa8578);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14114633e FUN_14114633e body=772 status=ok
// SIG undefined FUN_14114633e(void)

undefined8 * FUN_14114633e(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14ac8da20;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b42e4b0;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_1411464f2;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_1411464dc;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_1411464dc:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1411464f2:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141146692 FUN_141146692 body=772 status=ok
// SIG undefined FUN_141146692(void)

undefined8 * FUN_141146692(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14b42e440;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b42e3d0;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_141146846;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_141146830;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_141146830:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141146846:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1411469f2 FUN_1411469f2 body=3265 status=ok
// SIG undefined FUN_1411469f2(void)

void FUN_1411469f2(char *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  longlong lVar11;
  code *pcVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_2 == (longlong *)0x0) || (*param_1 == '\0')) goto switchD_141146b86_default;
  uVar5 = FUN_140b040c0();
  plVar6 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar5);
  if (plVar6 == (longlong *)0x0) {
LAB_141146a67:
    lVar8 = FUN_140f7d8c2();
    if ((((*(int *)(lVar8 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30)) && (*param_1 == '\x06')) && (*(longlong *)(param_1 + 0x28) != 0)) {
      lVar9 = FUN_1459f0ed6();
      lVar8 = *(longlong *)(param_1 + 0x28);
      if (((lVar8 == 0) || (lVar9 == 0)) ||
         ((lVar11 = *(longlong *)(lVar8 + 0x10), lVar11 == 0 ||
          ((*(int *)(lVar11 + 0x38) < *(int *)(lVar9 + 0x38) ||
           (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
            lVar9 + 0x30)))))) {
        lVar8 = FUN_14061d010();
      }
      else {
        lVar8 = (**(code **)(*(longlong *)(lVar8 + 0x390) + 0x10))(lVar8 + 0x390);
      }
      if (lVar8 != 0) {
        FUN_145c96d9a(lVar8,param_2);
        local_58._0_5_ = (uint5)(uint)local_58;
        plStack_50 = (longlong *)CONCAT62(plStack_50._2_6_,1);
        FUN_145c96f3c(lVar8,param_2);
      }
    }
    goto switchD_141146b86_default;
  }
  uVar5 = FUN_140b040c0();
  plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
  if (plVar6 == plVar7 || plVar7 == (longlong *)0x0) goto LAB_141146a67;
  lVar8 = (**(code **)(*plVar7 + 0x20))(plVar7);
  if (lVar8 == 0) goto switchD_141146b86_default;
  if (DAT_14c9a4e08 == 0) {
    local_80 = &local_58;
    local_58 = FUN_1449e2820;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_1427b09ee;
    local_88 = &LAB_1470c76a3;
    local_90 = FUN_1462ab034;
    local_98 = L"Engine";
    local_a0 = 0;
    local_a8 = 0x10004001;
    local_b0 = 8;
    local_b8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
  }
  plVar6 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14c9a4e08);
  if (plVar6 == (longlong *)0x0) goto switchD_141146b86_default;
  if (DAT_14c9a4e08 == 0) {
    local_80 = &local_58;
    local_58 = FUN_1449e2820;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_1427b09ee;
    local_88 = &LAB_1470c76a3;
    local_90 = FUN_1462ab034;
    local_98 = L"Engine";
    local_a0 = 0;
    local_a8 = 0x10004001;
    local_b0 = 8;
    local_b8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
  }
  plVar7 = (longlong *)FUN_144718840(plVar6,DAT_14c9a4e08);
  if (plVar7 == (longlong *)0x0 || plVar6 == plVar7) goto switchD_141146b86_default;
  switch(*param_1) {
  case '\x01':
    if ((0 < *(int *)(lVar8 + 0x1c8)) && (**(longlong **)(lVar8 + 0x1c0) != 0))
    goto switchD_141146b86_default;
    local_58 = (code *)0x0;
    plStack_50 = (longlong *)0x0;
    FUN_140b068ec(lVar8,1,&DAT_14cb24260,&local_58);
    goto joined_r0x0001411470f5;
  case '\x02':
    if ((*(longlong *)(param_1 + 0x18) != 0) && (lVar8 = FUN_14048be0a(), lVar8 != 0)) {
      uVar5 = FUN_1447210f0(param_2);
      FUN_140937dea(&local_58,uVar5);
      if (plStack_50 != (longlong *)0x0) {
        iVar4 = (int)plStack_50[1];
        do {
          if (iVar4 == 0) {
            plVar6 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar13 = (int)plStack_50[1];
          bVar14 = iVar4 == iVar13;
          if (bVar14) {
            *(int *)(plStack_50 + 1) = iVar4 + 1;
            iVar13 = iVar4;
          }
          iVar4 = iVar13;
          UNLOCK();
          plVar6 = plStack_50;
        } while (!bVar14);
        LOCK();
        piVar1 = (int *)((longlong)plStack_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_50 + 0x10))();
        }
        if (plVar6 != (longlong *)0x0) {
          if (local_58 != (code *)0x0) {
            (**(code **)(*(longlong *)local_58 + 0x40))(local_58,param_2,lVar8,1);
          }
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
      }
    }
    goto switchD_141146b86_default;
  case '\x03':
    if (((0 < *(int *)(lVar8 + 0x1c8)) && (**(longlong **)(lVar8 + 0x1c0) != 0)) ||
       (*(longlong *)(param_1 + 8) == 0)) goto switchD_141146b86_default;
    local_58 = (code *)0x0;
    plStack_50 = (longlong *)0x0;
    FUN_140b068ec(lVar8,1,&DAT_14cb24268,&local_58);
    if ((int)plStack_50 == 0) {
LAB_141146d61:
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      plStack_50 = (longlong *)((ulonglong)plStack_50 & 0xffffffff00000000);
      goto LAB_141146d61;
    }
    uVar5 = (**(code **)(*plVar7 + 0x28))(plVar7);
    local_40 = 8;
    if (*(longlong *)(param_1 + 8) == 0) {
      local_58._0_4_ = 0;
      iVar4 = 0;
      uVar2 = (uint)local_58;
    }
    else {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 8) + 0xc);
      local_58 = (code *)(ulonglong)uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar4 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar4 = *(int *)(lVar8 + 0x10);
        bVar14 = iVar4 == 0;
        if (bVar14) {
          *(int *)(lVar8 + 0x10) = iVar13;
          iVar4 = 0;
        }
        UNLOCK();
        uVar2 = (uint)local_58;
        if (bVar14) {
          iVar4 = iVar13;
        }
      }
    }
    local_58._0_4_ = uVar2;
    local_58 = (code *)CONCAT44(iVar4,(uint)local_58);
    local_38 = 7;
    local_68 = DAT_14cb24270;
    break;
  case '\x04':
    if (((0 < *(int *)(lVar8 + 0x1c8)) && (**(longlong **)(lVar8 + 0x1c0) != 0)) ||
       (*(longlong *)(param_1 + 0x10) == 0)) goto switchD_141146b86_default;
    local_58 = (code *)0x0;
    plStack_50 = (longlong *)0x0;
    FUN_140b068ec(lVar8,1,&DAT_14cb24278,&local_58);
    if ((int)plStack_50 == 0) {
LAB_141146e6b:
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      plStack_50 = (longlong *)((ulonglong)plStack_50 & 0xffffffff00000000);
      goto LAB_141146e6b;
    }
    uVar5 = (**(code **)(*plVar7 + 0x28))(plVar7);
    local_40 = 8;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      local_58._0_4_ = 0;
      iVar4 = 0;
      uVar2 = (uint)local_58;
    }
    else {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc);
      local_58 = (code *)(ulonglong)uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar4 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar4 = *(int *)(lVar8 + 0x10);
        bVar14 = iVar4 == 0;
        if (bVar14) {
          *(int *)(lVar8 + 0x10) = iVar13;
          iVar4 = 0;
        }
        UNLOCK();
        uVar2 = (uint)local_58;
        if (bVar14) {
          iVar4 = iVar13;
        }
      }
    }
    local_58._0_4_ = uVar2;
    local_58 = (code *)CONCAT44(iVar4,(uint)local_58);
    local_38 = 7;
    local_68 = DAT_14cb24280;
    break;
  case '\x05':
    if ((((0 < *(int *)(lVar8 + 0x1c8)) && (**(longlong **)(lVar8 + 0x1c0) != 0)) ||
        (*(longlong *)(param_1 + 0x20) == 0)) ||
       (*(int *)(*(longlong *)(param_1 + 0x20) + 0x3d8) < 1)) goto switchD_141146b86_default;
    local_58 = (code *)0x0;
    plStack_50 = (longlong *)0x0;
    FUN_140b068ec(lVar8,1,&DAT_14cb24288,&local_58);
    if ((int)plStack_50 == 0) {
LAB_141146c4d:
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      plStack_50 = (longlong *)((ulonglong)plStack_50 & 0xffffffff00000000);
      goto LAB_141146c4d;
    }
    uVar5 = (**(code **)(*plVar7 + 0x28))(plVar7);
    local_40 = 8;
    if (**(longlong **)(*(longlong *)(param_1 + 0x20) + 0x3d0) == 0) {
      local_58._0_4_ = 0;
      iVar4 = 0;
      uVar2 = (uint)local_58;
    }
    else {
      uVar2 = *(uint *)(**(longlong **)(*(longlong *)(param_1 + 0x20) + 0x3d0) + 0xc);
      local_58 = (code *)(ulonglong)uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar4 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar4 = *(int *)(lVar8 + 0x10);
        bVar14 = iVar4 == 0;
        if (bVar14) {
          *(int *)(lVar8 + 0x10) = iVar13;
          iVar4 = 0;
        }
        UNLOCK();
        uVar2 = (uint)local_58;
        if (bVar14) {
          iVar4 = iVar13;
        }
      }
    }
    local_58._0_4_ = uVar2;
    local_58 = (code *)CONCAT44(iVar4,(uint)local_58);
    local_38 = 0xe;
    local_68 = DAT_14cb23ef0;
    break;
  case '\x06':
    if (((0 < *(int *)(lVar8 + 0x1c8)) && (**(longlong **)(lVar8 + 0x1c0) != 0)) ||
       (*(longlong *)(param_1 + 0x28) == 0)) goto switchD_141146b86_default;
    lVar11 = FUN_1459f0ed6();
    lVar9 = *(longlong *)(param_1 + 0x28);
    if (((lVar9 == 0) || (lVar11 == 0)) ||
       ((lVar3 = *(longlong *)(lVar9 + 0x10), lVar3 == 0 ||
        ((*(int *)(lVar3 + 0x38) < *(int *)(lVar11 + 0x38) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
          lVar11 + 0x30)))))) {
      lVar9 = FUN_14061d010();
    }
    else {
      lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x390) + 0x10))(lVar9 + 0x390);
    }
    if (lVar9 == 0) goto switchD_141146b86_default;
    local_58 = (code *)0x0;
    plStack_50 = (longlong *)0x0;
    FUN_140b068ec(lVar8,1,&DAT_14cb24290,&local_58);
    if ((int)plStack_50 == 0) {
LAB_1411472a9:
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      plStack_50 = (longlong *)((ulonglong)plStack_50 & 0xffffffff00000000);
      goto LAB_1411472a9;
    }
    uVar5 = (**(code **)(*plVar7 + 0x28))(plVar7);
    local_40 = 8;
    uVar2 = *(uint *)(lVar9 + 0xc);
    local_58 = (code *)(ulonglong)uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar4 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar4 = *(int *)(lVar8 + 0x10);
      bVar14 = iVar4 == 0;
      if (bVar14) {
        *(int *)(lVar8 + 0x10) = iVar13;
        iVar4 = 0;
      }
      UNLOCK();
      uVar2 = (uint)local_58;
      if (bVar14) {
        iVar4 = iVar13;
      }
    }
    local_58._0_4_ = uVar2;
    local_58 = (code *)CONCAT44(iVar4,(uint)local_58);
    local_38 = 0xe;
    local_68 = DAT_14cb88ca8;
    local_60 = (longlong *)CONCAT44(local_60._4_4_,0xffffffff);
    FUN_140af060e(uVar5,&local_68,&local_58);
    pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar10 != (code *)0x0) {
      pcVar12 = (code *)&local_58;
      if (0x18 < local_40) {
        pcVar12 = local_58;
      }
      goto LAB_141146f48;
    }
    goto LAB_141146f4a;
  case '\a':
    if (((0 < *(int *)(lVar8 + 0x1c8)) && (**(longlong **)(lVar8 + 0x1c0) != 0)) ||
       (lVar9 = *(longlong *)(param_1 + 0x30), lVar9 == 0)) goto switchD_141146b86_default;
    local_58 = (code *)0x0;
    plStack_50 = (longlong *)0x0;
    uVar5 = *(undefined8 *)(lVar9 + 0x30);
    plVar6 = *(longlong **)(lVar9 + 0x38);
    if (plVar6 == (longlong *)0x0) {
      local_60 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      local_60 = plVar6;
    }
    local_68 = uVar5;
    FUN_14123f11a(lVar8,1,&local_68,&local_58);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
joined_r0x0001411470f5:
    if ((int)plStack_50 != 0) {
      if (local_58 == (code *)0x0) goto switchD_141146b86_default;
      (*(code *)**(undefined8 **)local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      plStack_50 = (longlong *)((ulonglong)plStack_50 & 0xffffffff00000000);
    }
    if (local_58 == (code *)0x0) goto switchD_141146b86_default;
    goto LAB_141146f61;
  default:
    goto switchD_141146b86_default;
  }
  local_60 = (longlong *)CONCAT44(local_60._4_4_,0xffffffff);
  FUN_140af060e(uVar5,&local_68,&local_58);
  pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar10 != (code *)0x0) {
    pcVar12 = (code *)&local_58;
    if (0x18 < local_40) {
      pcVar12 = local_58;
    }
LAB_141146f48:
    (*pcVar10)(pcVar12);
  }
LAB_141146f4a:
  if (0x18 < local_40) {
LAB_141146f61:
    FUN_1400020a8(local_58);
  }
switchD_141146b86_default:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411476b4 FUN_1411476b4 body=52 status=ok
// SIG undefined FUN_1411476b4(void)

void FUN_1411476b4(longlong *param_1)

{
  FUN_1411476e8(param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001411476de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1411476e8 FUN_1411476e8 body=101 status=ok
// SIG undefined FUN_1411476e8(void)

void FUN_1411476e8(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = *param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x18));
  uVar1 = *(undefined4 *)(lVar2 + 0x60);
  *(undefined4 *)(lVar2 + 0x60) = 3;
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x288);
  if (plVar3 != (longlong *)0x0) {
    iVar4 = (**(code **)(*plVar3 + 0x20))();
    if ((iVar4 == 1) && (plVar3 = *(longlong **)(lVar2 + 0x288), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x28))();
    }
  }
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x60) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000141147746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x18));
  return;
}



// FUNCTION 14114774e FUN_14114774e body=40 status=ok
// SIG undefined FUN_14114774e(void)

undefined8 FUN_14114774e(undefined8 param_1,int param_2)

{
  FUN_141147776();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141147776 FUN_141147776 body=218 status=ok
// SIG undefined FUN_141147776(void)

void FUN_141147776(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a52e7a0;
  param_1[5] = &PTR_FUN_14a52eaa0;
  plVar3 = (longlong *)param_1[0xf3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_1[0xed] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xeb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe7] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xde];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_141147850(param_1 + 0x30);
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 141147850 FUN_141147850 body=490 status=ok
// SIG undefined FUN_141147850(void)

void FUN_141147850(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ee3570;
  param_1[0x86] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x9a];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  param_1[0x70] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x84];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  param_1[0x5a] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x6e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  param_1[0x44] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x58];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x42];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  param_1[0x18] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2c];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141147a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141147a3a FUN_141147a3a body=371 status=ok
// SIG undefined FUN_141147a3a(void)

undefined8 * FUN_141147a3a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14050d8a4(param_3);
  if (lVar2 == 0) goto LAB_141147b3e;
  lVar3 = FUN_141147bae();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) {
    lVar3 = FUN_141147c94();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      lVar3 = FUN_144a75eb4();
      if (((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) ||
         (lVar2 = *(longlong *)(lVar2 + 0x3d0), lVar2 == 0)) goto LAB_141147b3e;
      uVar4 = FUN_1401b0f18();
      plVar5 = (longlong *)FUN_144718840(lVar2,uVar4);
      if (plVar5 == (longlong *)0x0) goto LAB_141147b3e;
      lVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
      plVar5 = (longlong *)(lVar2 + 0xd8);
    }
    else {
      plVar5 = (longlong *)(lVar2 + 0x40);
    }
  }
  else {
    plVar5 = (longlong *)(lVar2 + 0x3f0);
  }
  if ((longlong *)*plVar5 != (longlong *)0x0) {
    lVar2 = (**(code **)(*(longlong *)*plVar5 + 0x128))();
    if (lVar2 != 0) {
      FUN_14050cf44(lVar2,&local_30,param_3);
      *param_2 = local_30;
      param_2[1] = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_28 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_28)(local_28);
            LOCK();
            piVar1 = (int *)((longlong)local_28 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_28 + 0x10))(local_28);
            }
          }
        }
      }
      if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  }
LAB_141147b3e:
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 141147bae FUN_141147bae body=228 status=ok
// SIG undefined FUN_141147bae(void)

longlong FUN_141147bae(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb663e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_143d83bb4;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148725ac6;
    local_40 = &LAB_1458eee41;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xbc0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStandIn",&DAT_14cb663e0,FUN_14650e8ee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb663e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141147c94 FUN_141147c94 body=221 status=ok
// SIG undefined FUN_141147c94(void)

longlong FUN_141147c94(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb66490 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148728153;
    local_40 = FUN_14650eef4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStandInLoadingContext",&DAT_14cb66490,&DAT_148728152);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb66490;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141147d72 FUN_141147d72 body=156 status=ok
// SIG undefined FUN_141147d72(void)

void FUN_141147d72(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x50);
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
        *(byte *)(lVar2 + 0x18) = *(byte *)(lVar2 + 0x18) & 0xfe;
        FUN_140834d9a(lVar2);
      }
      FUN_140ce01e8(lVar2 + 0x20,0);
      FUN_140d2f778(lVar2 + 0x20);
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
    uVar3 = *(undefined4 *)(param_1 + 0x58);
    lVar4 = *(longlong *)(param_1 + 0x50);
  }
  FUN_140d8c315(lVar4,uVar3);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_141147e0e(param_1 + 0x50);
    return;
  }
  return;
}



// FUNCTION 141147e0e FUN_141147e0e body=48 status=ok
// SIG undefined FUN_141147e0e(void)

void FUN_141147e0e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 141147e44 FUN_141147e44 body=228 status=ok
// SIG undefined FUN_141147e44(void)

longlong FUN_141147e44(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba4048 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458c8470;
    local_38 = &LAB_148bc4f77;
    local_40 = &LAB_145adc96e;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2680;
    FUN_14081cfa3(L"/Script/OakGame",L"GrappleInteractable",&DAT_14cba4048,&DAT_148bc4f76);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba4048;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141147f38 FUN_141147f38 body=147 status=ok
// SIG undefined FUN_141147f38(void)

undefined8 * FUN_141147f38(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5ecae0;
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b5dfa60;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_14075386c(param_1 + 0x81);
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141147fe4 FUN_141147fe4 body=548 status=ok
// SIG undefined FUN_141147fe4(void)

void FUN_141147fe4(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  ulonglong local_74;
  undefined4 local_6c;
  undefined1 local_68;
  longlong local_60;
  int local_58;
  ulonglong local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar1 = *(int *)(param_3 + 0x10);
  (**(code **)(*param_1 + 0x368))(param_1,&local_60);
  if ((-1 < (longlong)iVar1) && (iVar1 < local_58)) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x548) + 8);
    lVar5 = (ulonglong)*(ushort *)(param_3 + 0x30) * 0x128;
    FUN_14087ad3e(lVar2 + lVar5 + 0x90,&local_a0);
    local_c8 = &local_b8;
    local_b8 = CONCAT71(local_b8._1_7_,0xf);
    FUN_140cdcd7c(&local_a0,&local_50,*(undefined4 *)(local_60 + (longlong)iVar1 * 4),
                  lVar2 + lVar5 + 0xb0);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    if (local_48 == '\x01') {
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0xffff;
      local_74 = local_74 & 0xffffffff00000000;
      local_68 = 0;
      if (param_1 != (longlong *)0x0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_1);
      }
      if ((param_1 != (longlong *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(param_1);
      }
      local_98 = param_1 + 0x20;
      if (param_1 == (longlong *)0x0) {
        local_98 = (longlong *)0x0;
      }
      puVar3 = *(undefined4 **)(param_3 + 8);
      if (puVar3 == (undefined4 *)0x0) {
        uVar6 = 0;
        uVar7 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
      }
      else {
        uVar6 = *puVar3;
        uVar7 = puVar3[1];
        uStack_b0 = puVar3[2];
        uStack_ac = puVar3[3];
      }
      local_b8 = CONCAT44(uVar7,uVar6);
      local_90 = CONCAT44(uVar7,uVar6);
      uStack_88 = CONCAT44(uStack_ac,uStack_b0);
      local_74 = local_50;
      local_6c = 3;
      local_7c = *(undefined4 *)(lVar2 + lVar5 + 0x110);
      local_a0 = param_1;
      local_78 = iVar1;
      local_b8 = FUN_14114820a();
      if ((local_b8 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(local_b8);
      }
      uVar4 = FUN_14009ee5c(param_2,&local_b8);
      FUN_140f908d2(uVar4,*(undefined4 *)(lVar2 + lVar5 + 0x122),&local_a0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14114820a FUN_14114820a body=228 status=ok
// SIG undefined FUN_14114820a(void)

longlong FUN_14114820a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab2c48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_147547c57;
    local_40 = FUN_14179da8d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEvaluationHookSystem",&DAT_14cab2c48,
                  &DAT_147547c56);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2c48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411482ef FUN_1411482ef body=281 status=ok
// SIG undefined FUN_1411482ef(void)

int FUN_1411482ef(undefined8 param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar5 = 0;
  do {
    FUN_141148409(&local_48,iVar5);
    FUN_140056680(&local_58,param_1);
    if (local_40 == local_50) {
      if (local_40 < 2) {
        bVar8 = true;
      }
      else {
        lVar6 = 0;
        while( true ) {
          uVar1 = *(ushort *)(local_48 + lVar6);
          uVar3 = (uint)uVar1;
          uVar2 = *(ushort *)(local_58 + lVar6);
          uVar7 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1411483a2;
            }
            iVar4 = uVar3 - uVar7;
            goto LAB_1411483ca;
          }
          if (uVar1 == 0) break;
LAB_1411483a2:
          lVar6 = lVar6 + 2;
        }
        iVar4 = 0;
LAB_1411483ca:
        bVar8 = iVar4 == 0;
      }
    }
    else {
      bVar8 = local_50 + local_40 == 1;
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (bVar8) goto LAB_1411483db;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x9b);
  iVar5 = 0x9b;
LAB_1411483db:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 141148409 FUN_141148409 body=467 status=ok
// SIG undefined FUN_141148409(void)

undefined8 FUN_141148409(undefined8 param_1,uint param_2)

{
  wchar_t *pwVar1;
  uint uVar2;
  
  uVar2 = param_2 & 0xffff;
  switch(uVar2) {
  case 0xb:
    pwVar1 = L"METAL";
    break;
  case 0xc:
    pwVar1 = L"METAL_MRT";
    break;
  case 0xd:
  case 0x12:
  case 0x13:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x32:
switchD_14114842f_caseD_d:
    if (((ushort)param_2 & 0xfff0) != 0x20) {
      if ((ushort)((ushort)param_2 - 0x37) < 99) {
        uVar2 = uVar2 - 0x36;
        pwVar1 = L"SP_CUSTOM_PLATFORM_%d";
      }
      else {
        pwVar1 = L"Unknown or removed EShaderPlatform %d";
      }
      FUN_140002266(param_1,pwVar1,uVar2);
      return param_1;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca84ca8) && (FUN_144b3d300(&DAT_14ca84ca8), DAT_14ca84ca8 == -1)) {
      FUN_1458114c4(&DAT_14ca84b28);
      _Init_thread_footer(&DAT_14ca84ca8);
    }
    FUN_1400021e4((ulonglong)(param_2 & 0xf) * 0x18 + 0x14ca84b30,param_1);
    return param_1;
  case 0xe:
    pwVar1 = L"PCD3D_ES3_1";
    break;
  case 0xf:
    pwVar1 = L"OPENGL_PCES3_1";
    break;
  case 0x10:
    pwVar1 = L"METAL_SM5";
    break;
  case 0x11:
    pwVar1 = L"VULKAN_PCES3_1";
    break;
  case 0x14:
    pwVar1 = L"VULKAN_SM5";
    break;
  case 0x15:
    pwVar1 = L"VULKAN_ES3_1_ANDROID";
    break;
  case 0x16:
    pwVar1 = L"METAL_MACES3_1";
    break;
  case 0x18:
    pwVar1 = L"OPENGL_ES3_1_ANDROID";
    break;
  case 0x1b:
    pwVar1 = L"METAL_MRT_MAC";
    break;
  case 0x1e:
    pwVar1 = L"METAL_TVOS";
    break;
  case 0x1f:
    pwVar1 = L"METAL_MRT_TVOS";
    break;
  case 0x30:
    pwVar1 = L"VULKAN_SM5_ANDROID";
    break;
  case 0x31:
    pwVar1 = L"PCD3D_SM6";
    break;
  case 0x33:
    pwVar1 = L"VULKAN_SM6";
    break;
  case 0x34:
    pwVar1 = L"METAL_SM6";
    break;
  case 0x35:
    pwVar1 = L"METAL_SIM";
    break;
  case 0x36:
    pwVar1 = L"SP_CUSTOM_PLATFORM_FIRST";
    break;
  default:
    if (uVar2 == 0) {
      pwVar1 = L"PCD3D_SM5";
    }
    else {
      if (uVar2 != 0x9a) goto switchD_14114842f_caseD_d;
      pwVar1 = L"SP_CUSTOM_PLATFORM_LAST";
    }
  }
  FUN_140056680(param_1,pwVar1);
  return param_1;
}



// FUNCTION 141148634 FUN_141148634 body=70 status=ok
// SIG undefined FUN_141148634(void)

void FUN_141148634(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x100) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x808))
            (*(longlong **)(param_1 + 0x30),0xffffffff,0,0);
  FUN_14114867a(param_1,0);
  FUN_1447f69b6(param_1 + 0x70);
  return;
}



// FUNCTION 14114867a FUN_14114867a body=152 status=ok
// SIG undefined FUN_14114867a(void)

void FUN_14114867a(longlong param_1,byte param_2)

{
  byte bVar1;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x30) + 0x178) == '\x03') &&
     ((*(byte *)(param_1 + 0xd8) & 1) != param_2)) {
    *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfe | param_2;
    bVar1 = *(byte *)(param_1 + 0xd5);
    if (param_2 != 0) {
      if (bVar1 != (bVar1 | 0x80)) {
        *(byte *)(param_1 + 0xd5) = bVar1 | 0x80;
        FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),2);
      }
      FUN_141131b52(param_1);
      return;
    }
    if ((char)bVar1 < '\0') {
      *(byte *)(param_1 + 0xd5) = bVar1 & 0x7f;
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),2);
    }
    FUN_141131a0e(param_1);
    return;
  }
  return;
}



// FUNCTION 141148712 FUN_141148712 body=194 status=ok
// SIG undefined FUN_141148712(void)

void FUN_141148712(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (param_1[0x20] != 0) {
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar3;
    lVar2 = FUN_144a61814(uVar1,param_1 + 0x20);
    if (lVar2 != 0) {
      FUN_1405a424c(uVar1,param_1[0x20]);
    }
    param_1[0x20] = 0;
    (**(code **)(*(longlong *)param_1[6] + 0x808))((longlong *)param_1[6],0xffffffff,0,0);
    FUN_14114867a(param_1,0);
    FUN_1447f69b6(param_1 + 0xe);
  }
  FUN_14135822a(param_1,0);
  FUN_140898514(param_1 + 0xb,1);
  *(undefined1 *)(param_1 + 0x27) = 0;
  return;
}



// FUNCTION 1411487d4 FUN_1411487d4 body=123 status=ok
// SIG undefined FUN_1411487d4(void)

void * FUN_1411487d4(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x300);
    if (*(void **)((longlong)param_2 + 0x300) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x308);
    *(int *)((longlong)param_1 + 0x308) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x30c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x30c) = 0x20;
    }
    else {
      FUN_141148850(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x300);
        if (*(void **)((longlong)param_1 + 0x300) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 141148850 FUN_141148850 body=123 status=ok
// SIG undefined FUN_141148850(void)

void FUN_141148850(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x20;
    if (0x20 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_147e43e38(param_1,0,iVar3,0x18);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x30c) = param_3;
  return;
}



// FUNCTION 1411488cc FUN_1411488cc body=405 status=ok
// SIG undefined FUN_1411488cc(void)

void FUN_1411488cc(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a91f860;
  lVar3 = 0x68;
  do {
    if (*(longlong *)((longlong)param_1 + lVar3) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)((longlong)param_1 + lVar3) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 0x58);
  lVar3 = 0x58;
  do {
    if (*(longlong *)((longlong)param_1 + lVar3) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)((longlong)param_1 + lVar3) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 0x48);
  lVar3 = 0x48;
  do {
    if (*(longlong *)((longlong)param_1 + lVar3) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)((longlong)param_1 + lVar3) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 0x38);
  lVar3 = 0x38;
  do {
    if (*(longlong *)((longlong)param_1 + lVar3) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)((longlong)param_1 + lVar3) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 0x28);
  lVar3 = 0x28;
  do {
    if (*(longlong *)((longlong)param_1 + lVar3) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)((longlong)param_1 + lVar3) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 0x18);
  lVar3 = 0x18;
  do {
    if (*(longlong *)((longlong)param_1 + lVar3) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)((longlong)param_1 + lVar3) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 8);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 141148a62 FUN_141148a62 body=100 status=ok
// SIG undefined FUN_141148a62(void)

void FUN_141148a62(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      FUN_141148dde(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_141148ac6(param_1);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141148ac6 FUN_141148ac6 body=104 status=ok
// SIG undefined FUN_141148ac6(void)

void FUN_141148ac6(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar3 = param_1;
    }
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar3 + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 1;
    } while (iVar1 != (int)lVar4);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_141148b2e(param_1,0);
    return;
  }
  return;
}



// FUNCTION 141148b2e FUN_141148b2e body=101 status=ok
// SIG undefined FUN_141148b2e(void)

void FUN_141148b2e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (uVar2 = 4, 4 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = (int)uVar2;
  FUN_141148b94(param_1,*(undefined4 *)(param_1 + 0x28),uVar2,8);
  return;
}



// FUNCTION 141148b94 FUN_141148b94 body=132 status=ok
// SIG undefined FUN_141148b94(void)

void FUN_141148b94(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 141148c18 FUN_141148c18 body=453 status=ok
// SIG undefined FUN_141148c18(void)

undefined8 * FUN_141148c18(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a916950;
  FUN_141148dde();
  if (param_1[8] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[8] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[7] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[7] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[6] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[5] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[5] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cff0;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141148dde FUN_141148dde body=638 status=ok
// SIG undefined FUN_141148dde(void)

void FUN_141148dde(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14010eabe(param_1);
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 14114905c FUN_14114905c body=684 status=ok
// SIG undefined FUN_14114905c(void)

void FUN_14114905c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  
  lVar8 = 0;
  bVar10 = true;
  do {
    bVar9 = bVar10;
    lVar4 = *(longlong *)(param_1 + 0x30 + lVar8 * 8);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x30 + lVar8 * 8) = 0;
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x20 + lVar8 * 8);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x20 + lVar8 * 8) = 0;
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x10 + lVar8 * 8);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x10 + lVar8 * 8) = 0;
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x60 + lVar8 * 8);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x60 + lVar8 * 8) = 0;
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x50 + lVar8 * 8);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x50 + lVar8 * 8) = 0;
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x40 + lVar8 * 8);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x40 + lVar8 * 8) = 0;
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar8 = 1;
    bVar10 = false;
  } while (bVar9);
  return;
}



// FUNCTION 141149308 FUN_141149308 body=115 status=ok
// SIG undefined FUN_141149308(void)

void FUN_141149308(int *param_1)

{
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 != -1) {
    local_24 = *param_1;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca8cb68);
    FUN_14114937c(&DAT_14ca8cb90,&local_24);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca8cb68);
  }
  *param_1 = -1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14114937c FUN_14114937c body=98 status=ok
// SIG undefined FUN_14114937c(void)

undefined8 FUN_14114937c(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_2) {
          FUN_1411493de();
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1411493de FUN_1411493de body=95 status=ok
// SIG undefined FUN_1411493de(void)

void FUN_1411493de(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14114943e(param_1,param_2,1);
  return;
}



// FUNCTION 14114943e FUN_14114943e body=117 status=ok
// SIG undefined FUN_14114943e(void)

void FUN_14114943e(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 0x10);
    iVar4 = param_3;
    do {
      plVar3 = (longlong *)*plVar5;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar5 = plVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_1411494b4(param_1,param_2,param_3);
  return;
}



// FUNCTION 1411494b4 FUN_1411494b4 body=138 status=ok
// SIG undefined FUN_1411494b4(void)

void FUN_1411494b4(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14114953e FUN_14114953e body=286 status=ok
// SIG undefined FUN_14114953e(void)

undefined8 FUN_14114953e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141149656;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141149656;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_141149656:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141149603;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_141149603;
    }
  }
  uVar6 = 0;
LAB_141149603:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14114965e FUN_14114965e body=211 status=ok
// SIG undefined FUN_14114965e(void)

void FUN_14114965e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *_Dst;
  ulonglong uVar6;
  
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_1 + 0x2800);
    if (0 < (int)uVar2) {
      puVar1 = (undefined8 *)(param_1 + 0x27f8);
      _Dst = (longlong *)*puVar1;
      uVar6 = 0;
      do {
        if (*_Dst == *(longlong *)(param_2 + 8)) {
          if (uVar2 - 1 != (int)uVar6) {
            memmove(_Dst,(void *)((longlong)_Dst + 0xc),
                    (longlong)(int)((uVar2 - 1) - (int)uVar6) * 0xc);
            uVar2 = *(uint *)(param_1 + 0x2800);
          }
          *(uint *)(param_1 + 0x2800) = uVar2 - 1;
          FUN_145811e9e(puVar1);
          if (*(int *)(param_1 + 0x2800) < 1) {
            return;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        _Dst = (longlong *)((longlong)_Dst + 0xc);
      } while (uVar2 != uVar6);
      uVar3 = FUN_144a7ba4c(param_1);
      lVar4 = FUN_1404960a8(uVar3);
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        uVar3 = *(undefined8 *)*puVar1;
        *puVar5 = &PTR_FUN_14b994140;
        puVar5[1] = uVar3;
        FUN_14039144e(lVar4,puVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141149732 FUN_141149732 body=125 status=ok
// SIG undefined FUN_141149732(void)

void FUN_141149732(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    cVar2 = FUN_140ae0922();
    lVar5 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x28));
    if ((lVar5 != 0) && (*(longlong **)(lVar5 + 0x170) != (longlong *)0x0)) {
      uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x170) + 0x6b0))();
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar6 = FUN_14497e828(uVar1);
      cVar3 = FUN_14665aef8(uVar6,uVar1,uVar4);
      if (cVar2 != cVar3) {
        FUN_1463cd9b8(*(undefined8 *)(param_1 + 0x28),1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1411497b0 FUN_1411497b0 body=963 status=ok
// SIG undefined FUN_1411497b0(void)

void FUN_1411497b0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  char local_a1;
  undefined8 local_a0;
  code *local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a1 = '\0';
  lVar14 = *(longlong *)(param_1 + -0xa80);
  local_b8 = param_2;
  if (lVar14 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_d0 = &local_98;
      local_98 = FUN_141030f22;
      local_c0 = FUN_14081d0ea;
      local_c8 = &LAB_1464f5fc4;
      local_d8 = &LAB_148c3dd26;
      local_e0 = &LAB_1459673ba;
      local_e8 = L"Engine";
      local_f0 = 0;
      local_f8 = 0x10000004;
      local_100 = 0x10;
      local_108 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar14 = *(longlong *)(param_1 + -0xa80);
      if (lVar14 == 0) goto LAB_141149a48;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar15 = *(longlong *)(lVar14 + 0x10), lVar15 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar15 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
        == DAT_14cbae3d8 + 0x30)) {
      uVar16 = 0;
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_98 = (code *)0x0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_141149c26(&local_98,lVar14 + 0xc90);
      iVar4 = local_70;
      if (local_70 == 0) {
        uVar13 = 1;
        iVar5 = 0;
        iVar12 = 0;
      }
      else {
        puVar6 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar6 = local_88;
        }
        uVar17 = *puVar6;
        if (uVar17 == 0) {
          iVar5 = local_70 + 0x1e;
          if (-1 < local_70 + -1) {
            iVar5 = local_70 + -1;
          }
          uVar16 = 0;
          uVar13 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar13 = uVar16;
          }
          iVar12 = 0;
          do {
            if (uVar13 == uVar16) goto LAB_141149a1f;
            iVar12 = iVar12 + 0x20;
            uVar17 = puVar6[uVar16 + 1];
            uVar16 = uVar16 + 1;
          } while (uVar17 == 0);
        }
        else {
          uVar16 = 0;
          iVar12 = 0;
        }
        uVar13 = (ulonglong)(-uVar17 & uVar17);
        uVar2 = uVar13 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar5 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (local_70 <= iVar5) {
          iVar5 = local_70;
        }
      }
      if (iVar5 != local_70) {
        local_b0 = local_b8 + 4;
        uVar17 = 0xffffffff;
        do {
          pcVar1 = local_98 + (longlong)iVar5 * 0x18;
          local_a0 = *(undefined8 *)(pcVar1 + 8);
          pcVar3 = (code *)*local_b8;
          plVar10 = (longlong *)local_b8[2];
          if ((longlong *)local_b8[2] == (longlong *)0x0) {
            plVar10 = local_b0;
          }
          uVar7 = (**(code **)(*plVar10 + 8))();
          (*pcVar3)(uVar7,&local_a0,pcVar1,&local_a1);
          if (local_a1 != '\0') break;
          uVar17 = uVar17 & ~(uint)uVar13;
          puVar6 = local_78;
          if (local_78 == (uint *)0x0) {
            puVar6 = local_88;
          }
          iVar5 = (int)uVar16;
          lVar14 = (longlong)iVar5;
          uVar11 = puVar6[lVar14] & uVar17;
          if (uVar11 == 0) {
            iVar8 = local_70 + 0x1e;
            if (-1 < local_70 + -1) {
              iVar8 = local_70 + -1;
            }
            iVar8 = iVar8 >> 5;
            iVar12 = iVar12 + 0x20;
            iVar9 = iVar8;
            if (iVar8 < iVar5) {
              iVar9 = iVar5;
            }
            if (iVar5 < iVar8) {
              lVar15 = 0;
              do {
                uVar11 = puVar6[lVar14 + lVar15 + 1];
                if (uVar11 != 0) {
                  uVar16 = (ulonglong)(iVar5 + (int)lVar15 + 1);
                  uVar17 = 0xffffffff;
                  goto LAB_1411499f3;
                }
                iVar12 = iVar12 + 0x20;
                lVar15 = lVar15 + 1;
              } while (iVar9 - lVar14 != lVar15);
              uVar17 = 0xffffffff;
              iVar5 = iVar9;
            }
            uVar16 = (ulonglong)(iVar5 + 1);
            iVar5 = local_70;
          }
          else {
LAB_1411499f3:
            uVar13 = (ulonglong)(-uVar11 & uVar11);
            uVar2 = uVar13 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            iVar5 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            if (local_70 <= iVar5) {
              iVar5 = local_70;
            }
          }
        } while (iVar5 != iVar4);
      }
LAB_141149a1f:
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_141149b74(&local_98);
    }
  }
LAB_141149a48:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141149b74 FUN_141149b74 body=55 status=ok
// SIG undefined FUN_141149b74(void)

void FUN_141149b74(longlong *param_1)

{
  FUN_141149bac(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141149bac FUN_141149bac body=121 status=ok
// SIG undefined FUN_141149bac(void)

void FUN_141149bac(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 141149c26 FUN_141149c26 body=378 status=ok
// SIG undefined FUN_141149c26(void)

undefined8 * FUN_141149c26(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 9);
  plVar1 = param_1 + 8;
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_141149c87;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  puVar6 = param_1 + 7;
  if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*plVar1;
  }
  puVar7 = param_2 + 7;
  if ((undefined8 *)param_2[8] != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_2[8];
  }
  memcpy(puVar6,puVar7,(longlong)iVar2 << 2);
LAB_141149c87:
  *(int *)(param_1 + 9) = iVar2;
  uVar3 = *(uint *)(param_2 + 1);
  FUN_141149bac(param_1,uVar3);
  iVar2 = *(int *)(param_1 + 1);
  *(uint *)(param_1 + 1) = iVar2 + uVar3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar3) {
    FUN_14482b872(param_1);
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar5 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(param_1 + 2,0);
  }
  iVar2 = *(int *)(param_2 + 5);
  *(int *)(param_1 + 5) = iVar2;
  if (iVar2 != 0) {
    puVar6 = param_2 + 2;
    if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)param_2[4];
    }
    puVar7 = param_1 + 2;
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)param_1[4];
    }
    memcpy(puVar7,puVar6,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (uVar3 != 0) {
    memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar3 * 0x18);
  }
  return param_1;
}



// FUNCTION 141149da0 FUN_141149da0 body=129 status=ok
// SIG undefined FUN_141149da0(void)

void FUN_141149da0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = param_1 + -0x8c8;
  if (((*(char *)(param_1 + -0x750) == '\x03') ||
      (FUN_145811fb4(lVar2), *(char *)(param_1 + -0x750) == '\x03')) &&
     ((*(byte *)(param_1 + 0x399) & 1) != 0)) {
    FUN_148d57a0e(lVar2);
    *(undefined1 *)(param_1 + 0x3c0) = 0;
    uVar1 = FUN_1401b4c98(lVar2);
    puVar3 = (undefined8 *)(param_1 + 0x3a0);
    lVar2 = FUN_144a61814(uVar1,puVar3);
    if (lVar2 != 0) {
      FUN_1405a424c(uVar1,*puVar3);
    }
    *puVar3 = 0;
  }
  return;
}



// FUNCTION 141149e22 FUN_141149e22 body=195 status=ok
// SIG undefined FUN_141149e22(void)

void FUN_141149e22(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  lVar10 = FUN_1407e49f4(param_3,param_4,param_5,param_1 + 0x28,param_1 + 8);
  iVar1 = *(int *)(lVar10 + 0x28);
  iVar2 = *(int *)(lVar10 + 0x2c);
  iVar3 = *(int *)(lVar10 + 0x30);
  iVar4 = *(int *)(lVar10 + 0x34);
  iVar5 = *(int *)(param_1 + 0x18);
  iVar6 = *(int *)(param_1 + 0x1c);
  iVar7 = *(int *)(param_1 + 0x20);
  iVar8 = *(int *)(param_1 + 0x24);
  iVar9 = *(int *)(lVar10 + 0x68);
  if (0 < iVar9) {
    lVar12 = 8;
    uVar11 = 0;
    do {
      if ((iVar4 != iVar8 || (iVar3 != iVar7 || (iVar2 != iVar6 || iVar1 != iVar5))) ||
         (*(char *)(*(longlong *)(lVar10 + 0x60) + lVar12) == '\0')) {
        FUN_141149ee6(lVar10,uVar11 & 0xffffffff,param_1 + 0x18,param_1 + 0x40,1);
        iVar9 = *(int *)(lVar10 + 0x68);
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x38;
    } while ((longlong)uVar11 < (longlong)iVar9);
  }
  *(byte *)(lVar10 + 9) = *(byte *)(lVar10 + 9) | 1;
  *(undefined1 *)(lVar10 + 10) = 0;
  return;
}



// FUNCTION 141149ee6 FUN_141149ee6 body=9349 status=ok
// SIG undefined FUN_141149ee6(void)

void FUN_141149ee6(longlong param_1,uint param_2,undefined4 *param_3,undefined8 *param_4,
                  char param_5)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  code *pcVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  code **ppcVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  bool bVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  ulonglong uVar27;
  longlong *plVar28;
  longlong lVar29;
  longlong *plVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  byte bVar34;
  longlong lVar35;
  uint uVar36;
  uint *puVar37;
  bool bVar38;
  undefined1 auStack_408 [32];
  code **local_3e8;
  undefined4 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d0;
  wchar_t *local_3c8;
  code *local_3c0;
  undefined1 *local_3b8;
  code **local_3b0;
  undefined1 *local_3a8;
  code *local_3a0;
  uint *local_398;
  ulonglong local_390;
  longlong *local_388;
  uint local_37c;
  longlong local_378;
  uint local_370;
  uint local_36c;
  ulonglong local_368;
  ulonglong local_360;
  longlong *local_358;
  longlong *local_350;
  longlong *local_348;
  longlong local_340;
  longlong local_338;
  undefined8 uStack_330;
  undefined8 *local_328;
  undefined1 local_320 [64];
  undefined1 *local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0 [64];
  undefined1 *local_290;
  uint local_288;
  undefined4 uStack_284;
  code *local_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined1 local_270;
  code **local_180;
  undefined8 local_178;
  code *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  code **local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_408;
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x68) <= (int)param_2)) goto LAB_14114bac9;
  lVar25 = *(longlong *)(param_1 + 0x60);
  lVar31 = (ulonglong)param_2 * 0x38;
  iVar14 = *(int *)(lVar25 + 0x10 + lVar31);
  if ((iVar14 == 0) ||
     ((((((uVar11 = *(uint *)(lVar25 + lVar31 + 0xc), (int)uVar11 < 0 ||
          (DAT_14c9647dc <= (int)uVar11)) ||
         (plVar30 = (longlong *)
                    ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
         plVar30 == (longlong *)0x0)) ||
        (((int)plVar30[2] != iVar14 || ((*(uint *)(plVar30 + 1) & 0x10200000) != 0)))) ||
       (plVar30 = (longlong *)*plVar30, plVar30 == (longlong *)0x0)) || (plVar30[0x15] == 0))))
  goto LAB_14114bac9;
  if (*(char *)(lVar25 + 8 + lVar31) == '\x01') {
    FUN_140dda8d8(param_1);
  }
  uVar2 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)(param_1 + 0x28) = *param_3;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  uVar11 = (**(code **)(*plVar30 + 0x7b0))(plVar30);
  if (uVar11 == 0) goto LAB_14114bac9;
  uVar18 = (ulonglong)uVar11;
  uVar16 = *param_4;
  plVar21 = (longlong *)param_4[1];
  if (plVar21 == (longlong *)0x0) {
    local_350 = (longlong *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar16;
    plVar28 = *(longlong **)(param_1 + 0x40);
    if (plVar28 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
LAB_14114a03e:
      local_350 = (longlong *)(param_1 + 0x38);
      LOCK();
      plVar21 = plVar28 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar28)(plVar28);
        LOCK();
        piVar1 = (int *)((longlong)plVar28 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar14 = *piVar1;
        UNLOCK();
joined_r0x00014114a06d:
        if (iVar14 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
    local_350 = (longlong *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar16;
    plVar28 = *(longlong **)(param_1 + 0x40);
    if (plVar21 == plVar28) {
      LOCK();
      plVar28 = plVar21 + 1;
      *(int *)plVar28 = (int)*plVar28 + -1;
      UNLOCK();
      if ((int)*plVar28 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar14 = *piVar1;
        UNLOCK();
        plVar28 = plVar21;
        goto joined_r0x00014114a06d;
      }
    }
    else {
      *(longlong **)(param_1 + 0x40) = plVar21;
      if (plVar28 != (longlong *)0x0) goto LAB_14114a03e;
    }
  }
  local_328 = (undefined8 *)0x0;
  lVar25 = *(longlong *)(param_1 + 0x60);
  puVar37 = (uint *)(lVar25 + lVar31);
  puVar23 = (undefined8 *)(lVar25 + lVar31);
  plVar21 = puVar23 + 3;
  *puVar23 = 0xffffffff;
  *(undefined4 *)(puVar23 + 4) = 0;
  local_378 = param_1;
  if (*(int *)((longlong)puVar23 + 0x24) != 0) {
    FUN_14481578e(plVar21);
  }
  plVar28 = (longlong *)(lVar25 + lVar31 + 0x28);
  puVar37[0xc] = 0;
  local_340 = lVar31;
  if (puVar37[0xd] != 0) {
    FUN_14481578e(plVar28);
  }
  *(undefined1 *)((longlong)puVar37 + 9) = 0;
  lVar25 = local_378;
  local_398 = puVar37;
  local_390 = uVar18;
  local_388 = plVar30;
  local_358 = plVar21;
  local_348 = plVar28;
  if ((((param_5 != '\0') && (*(int *)(local_378 + 0x114) != 0)) &&
      ((uVar13 = *(uint *)(local_378 + 0x110), -1 < (int)uVar13 &&
       ((((int)uVar13 < DAT_14c9647dc &&
         (plVar21 = (longlong *)
                    ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
         plVar21 != (longlong *)0x0)) && ((int)plVar21[2] == *(int *)(local_378 + 0x114))))))) &&
     (((*(uint *)(plVar21 + 1) & 0x10200000) == 0 && (lVar31 = *plVar21, lVar31 != 0)))) {
    local_170 = (code *)0x0;
    uStack_168 = uStack_168 & 0xffffffff00000000;
    FUN_1446efa72(&local_170,0,3,0x10);
    pcVar8 = local_170;
    uStack_168 = CONCAT44(uStack_168._4_4_,3);
    *(undefined ***)local_170 = &PTR_LAB_14a3ea270;
    LOCK();
    UNLOCK();
    lVar20 = DAT_14c758608 + 1;
    lVar25 = DAT_14c758608 + 1;
    if (lVar20 == 0) {
      LOCK();
      UNLOCK();
      lVar20 = DAT_14c758608 + 2;
      lVar25 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar25;
    *(longlong *)(local_170 + 0x10) = lVar20;
    *(undefined ***)local_170 = &PTR_FUN_14b423df0;
    *(longlong *)(local_170 + 0x18) = 0;
    uVar11 = *(uint *)(lVar31 + 0xc);
    *(uint *)(local_170 + 0x18) = uVar11;
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar25 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar25 = 0;
    }
    iVar14 = *(int *)(lVar25 + 0x10);
    if (*(int *)(lVar25 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar38 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar38) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar14 = *(int *)(lVar25 + 0x10);
      bVar38 = iVar14 == 0;
      if (bVar38) {
        *(int *)(lVar25 + 0x10) = iVar12;
        iVar14 = 0;
      }
      UNLOCK();
      if (bVar38) {
        iVar14 = iVar12;
      }
    }
    lVar25 = local_378;
    *(int *)(pcVar8 + 0x1c) = iVar14;
    *(longlong *)(pcVar8 + 0x20) = local_378;
    if (((int)uStack_168 == 0) || (local_170 == (code *)0x0)) {
LAB_14114c148:
      lVar25 = local_378;
      puVar37 = local_398;
      if ((int)uStack_168 == 0) goto LAB_14114a3b8;
      plVar30 = local_388;
      if (local_170 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_170)(local_170,0);
        FUN_1446efa72(&local_170,0,0,0x10);
        goto LAB_14114a39d;
      }
    }
    else {
      cVar9 = (**(code **)(*(longlong *)local_170 + 0x30))();
      if (cVar9 == '\0') {
        goto LAB_14114c148;
      }
      plVar21 = plVar30 + 0x18;
      if (*(int *)((longlong)plVar30 + 0xd4) < 1) {
        iVar14 = (int)plVar30[0x19];
        iVar12 = (int)plVar30[0x1a] + -1;
        *(int *)(plVar30 + 0x1a) = iVar12;
        if (iVar12 <= iVar14) {
          iVar12 = iVar14;
          if (0 < iVar14) {
            iVar26 = 0;
            do {
              if (((*(int *)(*plVar21 + 8 + (longlong)iVar26 * 0x10) == 0) ||
                  (plVar28 = *(longlong **)(*plVar21 + (longlong)iVar26 * 0x10),
                  plVar28 == (longlong *)0x0)) ||
                 (cVar9 = (**(code **)(*plVar28 + 0x28))(), cVar9 != '\0')) {
                FUN_14005b288(plVar21,iVar26);
                FUN_14005b248(plVar21);
              }
              else {
                iVar26 = iVar26 + 1;
              }
              iVar12 = (int)plVar30[0x19];
            } while (iVar26 < iVar12);
          }
          iVar26 = 2;
          if (2 < iVar12 * 2) {
            iVar26 = iVar12 * 2;
          }
          *(int *)(plVar30 + 0x1a) = iVar26;
          if ((iVar26 < iVar14) && (*(int *)((longlong)plVar30 + 0xcc) != iVar12)) {
            FUN_14045812c(plVar21);
          }
        }
      }
      if (((int)uStack_168 != 0) && (local_170 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_170 + 0x38))(local_170,&local_280);
      }
      iVar14 = (int)plVar30[0x19];
      *(uint *)(plVar30 + 0x19) = iVar14 + 1U;
      if (*(uint *)((longlong)plVar30 + 0xcc) < iVar14 + 1U) {
        FUN_1447a71f6(plVar21,iVar14);
      }
      lVar20 = *plVar21;
      lVar35 = (longlong)iVar14 * 0x10;
      *(undefined8 *)(lVar20 + lVar35) = 0;
      *(undefined4 *)(lVar20 + 8 + lVar35) = 0;
      *(code **)(lVar20 + lVar35) = local_170;
      local_170 = (code *)0x0;
      *(int *)(lVar20 + 8 + lVar35) = (int)uStack_168;
LAB_14114a39d:
      uStack_168 = uStack_168 & 0xffffffff00000000;
LAB_14114a3b8:
      plVar30 = local_388;
      if (local_170 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    if (DAT_14cb63950 == 0) {
      local_170 = FUN_144a7958c;
      local_3a0 = FUN_14081d0ea;
      local_3a8 = &LAB_1464ec72a;
      local_3b8 = &LAB_1486f5f75;
      local_3c0 = (code *)&LAB_140945686;
      local_3c8 = L"Engine";
      local_3d0 = 0;
      local_3d8 = 0x10000004;
      local_3e0 = 0x10;
      local_3e8 = (code **)CONCAT44(local_3e8._4_4_,0x19d0);
      local_3b0 = &local_170;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    uVar11 = (uint)local_390;
    if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(plVar30[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar30[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) ==
        DAT_14cb63950 + 0x30)) {
      local_170 = (code *)0x0;
      uStack_168 = uStack_168 & 0xffffffff00000000;
      FUN_1446efa72(&local_170,0,3,0x10);
      pcVar8 = local_170;
      uStack_168 = CONCAT44(uStack_168._4_4_,3);
      *(undefined ***)local_170 = &PTR_LAB_14b4024f0;
      LOCK();
      UNLOCK();
      lVar35 = DAT_14c758608 + 1;
      lVar20 = DAT_14c758608 + 1;
      if (lVar35 == 0) {
        LOCK();
        UNLOCK();
        lVar35 = DAT_14c758608 + 2;
        lVar20 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar20;
      *(longlong *)(local_170 + 0x10) = lVar35;
      *(undefined ***)local_170 = &PTR_FUN_14b423e60;
      *(longlong *)(local_170 + 0x18) = 0;
      uVar11 = *(uint *)(lVar31 + 0xc);
      *(uint *)(local_170 + 0x18) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar31 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar31 = 0;
      }
      iVar14 = *(int *)(lVar31 + 0x10);
      if (*(int *)(lVar31 + 0x10) == 0) {
        LOCK();
        iVar14 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar38 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar14;
        if (bVar38) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar14 = *(int *)(lVar31 + 0x10);
        bVar38 = iVar14 == 0;
        if (bVar38) {
          *(int *)(lVar31 + 0x10) = iVar12;
          iVar14 = 0;
        }
        UNLOCK();
        lVar25 = local_378;
        plVar30 = local_388;
        puVar37 = local_398;
        if (bVar38) {
          iVar14 = iVar12;
        }
      }
      *(int *)(pcVar8 + 0x1c) = iVar14;
      *(longlong *)(pcVar8 + 0x20) = lVar25;
      if (((int)uStack_168 == 0) || (uVar11 = (uint)local_390, local_170 == (code *)0x0)) {
LAB_14114c1c6:
        lVar25 = local_378;
        plVar30 = local_388;
        puVar37 = local_398;
        uVar11 = (uint)local_390;
        if ((int)uStack_168 != 0) {
          if (local_170 == (code *)0x0) goto LAB_14114a618;
          (*(code *)**(undefined8 **)local_170)();
          FUN_1446efa72(&local_170,0,0,0x10);
          goto LAB_14114a5fc;
        }
      }
      else {
        cVar9 = (**(code **)(*(longlong *)local_170 + 0x30))();
        if (cVar9 == '\0') {
          goto LAB_14114c1c6;
        }
        plVar21 = plVar30 + 0x2c3;
        if (*(int *)((longlong)plVar30 + 0x162c) < 1) {
          iVar14 = (int)plVar30[0x2c4];
          iVar12 = (int)plVar30[0x2c5] + -1;
          *(int *)(plVar30 + 0x2c5) = iVar12;
          if (iVar12 <= iVar14) {
            iVar12 = iVar14;
            if (0 < iVar14) {
              iVar26 = 0;
              do {
                if (((*(int *)(*plVar21 + 8 + (longlong)iVar26 * 0x10) == 0) ||
                    (plVar28 = *(longlong **)(*plVar21 + (longlong)iVar26 * 0x10),
                    plVar28 == (longlong *)0x0)) ||
                   (cVar9 = (**(code **)(*plVar28 + 0x28))(), cVar9 != '\0')) {
                  FUN_14005b288(plVar21,iVar26);
                  FUN_14005b248(plVar21);
                }
                else {
                  iVar26 = iVar26 + 1;
                }
                iVar12 = (int)plVar30[0x2c4];
              } while (iVar26 < iVar12);
            }
            iVar26 = 2;
            if (2 < iVar12 * 2) {
              iVar26 = iVar12 * 2;
            }
            *(int *)(plVar30 + 0x2c5) = iVar26;
            if ((iVar26 < iVar14) && (*(int *)((longlong)plVar30 + 0x1624) != iVar12)) {
              FUN_14045812c();
            }
          }
        }
        if (((int)uStack_168 != 0) && (local_170 != (code *)0x0)) {
          (**(code **)(*(longlong *)local_170 + 0x38))(local_170,&local_280);
        }
        iVar14 = (int)plVar30[0x2c4];
        *(uint *)(plVar30 + 0x2c4) = iVar14 + 1U;
        if (*(uint *)((longlong)plVar30 + 0x1624) < iVar14 + 1U) {
          FUN_1447a71f6(plVar21,iVar14);
        }
        lVar31 = *plVar21;
        lVar20 = (longlong)iVar14 * 0x10;
        *(undefined8 *)(lVar31 + lVar20) = 0;
        *(undefined4 *)(lVar31 + 8 + lVar20) = 0;
        *(code **)(lVar31 + lVar20) = local_170;
        local_170 = (code *)0x0;
        *(int *)(lVar31 + 8 + lVar20) = (int)uStack_168;
LAB_14114a5fc:
        uStack_168 = uStack_168 & 0xffffffff00000000;
      }
      if (local_170 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14114a618:
  uVar13 = (**(code **)(*plVar30 + 0x7b0))(plVar30);
  if (0 < (int)uVar13) {
    uVar36 = *(uint *)(plVar30 + 0xc5);
    if ((int)uVar36 < (int)uVar13) {
      uVar36 = 0;
      do {
        uVar16 = (**(code **)(*plVar30 + 0x610))(plVar30,uVar36);
        (**(code **)(*plVar30 + 0x638))(plVar30,uVar36,uVar16);
        uVar36 = uVar36 + 1;
      } while (uVar13 != uVar36);
    }
    else if ((uVar36 % uVar13 != 0) &&
            (iVar14 = uVar36 - uVar36 % uVar13,
            FUN_140ddbde4(plVar30 + 0xc4,iVar14,CONCAT71((uint7)(uint3)((uint)iVar14 >> 8),1)),
            plVar21 = local_388, (~*(byte *)((longlong)plVar30 + 0x9c) & 3) == 0)) {
      bVar34 = *(byte *)((longlong)plVar30 + 0x9d);
      if ((bVar34 & 1) != 0) {
        uVar11 = (uint)local_390;
        lVar25 = local_378;
        plVar30 = plVar21;
        puVar37 = local_398;
        if ((local_388[0x16] != 0) || (lVar31 = FUN_1448abda6(local_388), lVar31 != 0))
        goto LAB_14114a64a;
        bVar34 = *(byte *)((longlong)plVar21 + 0x9d);
      }
      plVar30 = local_388;
      *(byte *)((longlong)local_388 + 0x9d) = bVar34 | 1;
      FUN_1401057d4(local_388);
      FUN_14010586c(&DAT_14cad0140,plVar30);
      uVar11 = (uint)local_390;
      lVar25 = local_378;
      puVar37 = local_398;
    }
  }
LAB_14114a64a:
  local_290 = (undefined1 *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = 0x800000000;
  uVar13 = (int)plVar30[0xc5] / (int)uVar11;
  local_360 = 1;
  if (1 < (int)uVar13) {
    local_360 = (ulonglong)uVar13;
  }
  uVar13 = (int)local_360 - 1;
  local_368 = (ulonglong)uVar13;
  *puVar37 = uVar13;
  puVar37[1] = uVar11;
  _local_288 = CONCAT44(8,uVar11);
  if (8 < uVar11) {
    FUN_1418a7e6e(local_2d0);
  }
  puVar17 = local_290;
  if (local_290 == (undefined1 *)0x0) {
    puVar17 = local_2d0;
  }
  memset(puVar17,0,(longlong)(int)uVar11 << 3);
  iVar14 = (int)local_2d8;
  lVar31 = (longlong)(int)local_2d8;
  local_2d8 = CONCAT44(local_2d8._4_4_,(int)local_2d8 + uVar11);
  if ((uint)(local_2d8._4_4_ - iVar14) < uVar11) {
    FUN_1418a8070(local_320);
  }
  puVar17 = local_2e0;
  if (local_2e0 == (undefined1 *)0x0) {
    puVar17 = local_320;
  }
  local_370 = 0;
  memset(puVar17 + lVar31 * 8,0,(longlong)(int)uVar11 << 3);
  lVar25 = FUN_140b247ea(lVar25 + 0x70);
  if ((lVar25 != 0) && (*(char *)(lVar25 + 0x30) != '\0')) {
    if (DAT_14cb63950 == 0) {
      local_3b0 = &local_170;
      local_170 = FUN_144a7958c;
      local_3a0 = FUN_14081d0ea;
      local_3a8 = &LAB_1464ec72a;
      local_3b8 = &LAB_1486f5f75;
      local_3c0 = (code *)&LAB_140945686;
      local_3c8 = L"Engine";
      local_3d0 = 0;
      local_3d8 = 0x10000004;
      local_3e0 = 0x10;
      local_3e8 = (code **)CONCAT44(local_3e8._4_4_,0x19d0);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if (((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(plVar30[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(plVar30[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) ==
         DAT_14cb63950 + 0x30)) && (cVar9 = (**(code **)(*plVar30 + 0xbf0))(plVar30), cVar9 != '\0')
       ) {
      local_70 = (code **)0x0;
      local_68 = 0x4000000000;
      local_180 = (code **)0x0;
      local_178 = 0x4000000000;
      lVar31 = plVar30[0x2cc];
      if ((longlong)(int)lVar31 < 1) {
        bVar38 = true;
        puVar37 = local_398;
      }
      else {
        lVar20 = 0;
        bVar38 = false;
        do {
          if (((lVar20 < (int)plVar30[0x2cc]) &&
              (plVar21 = *(longlong **)(plVar30[0x2cb] + lVar20 * 8), plVar21 != (longlong *)0x0))
             && (iVar14 = (**(code **)(*plVar21 + 0x330))(plVar21), iVar14 != 0)) {
            bVar7 = true;
            if ((longlong)(int)plVar21[0x95] != 0) {
              plVar28 = (longlong *)plVar21[0x94];
              plVar21 = plVar28 + (longlong)(int)plVar21[0x95] * 6;
              do {
                if (*(int *)(lVar25 + 0x40) != 0) {
                  lVar35 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar25 + 0x38) + lVar35) == *plVar28) {
                      bVar7 = false;
                      goto LAB_14114a8a1;
                    }
                    lVar35 = lVar35 + 8;
                  } while ((longlong)*(int *)(lVar25 + 0x40) << 3 != lVar35);
                }
                plVar28 = plVar28 + 6;
              } while (plVar28 != plVar21);
            }
LAB_14114a8a1:
            uVar11 = (uint)local_390;
            if (*(char *)(lVar25 + 0x30) == '\x01') {
              bVar19 = true;
              if (!bVar7) {
LAB_14114a8b9:
                if (local_348 != (longlong *)0x0) {
                  lVar35 = (longlong)(int)local_178;
                  uVar13 = (int)local_178 + 1;
                  local_178 = CONCAT44(local_178._4_4_,uVar13);
                  if (local_178._4_4_ < uVar13) {
                    FUN_147c81098(&local_280);
                  }
                  ppcVar15 = local_180;
                  if (local_180 == (code **)0x0) {
                    ppcVar15 = &local_280;
                  }
                  *(int *)((longlong)ppcVar15 + lVar35 * 4) = (int)lVar20;
                }
                plVar30 = local_388;
                bVar19 = bVar38;
                if ((local_358 != (longlong *)0x0) &&
                   (iVar12 = FUN_143ce70aa(local_388), plVar30 = local_388, 0 < iVar14)) {
                  if (iVar12 != -1) {
                    do {
                      lVar35 = (longlong)(int)local_68;
                      uVar11 = (int)local_68 + 1;
                      local_68 = CONCAT44(local_68._4_4_,uVar11);
                      if (local_68._4_4_ < uVar11) {
                        FUN_147c81098(&local_170);
                      }
                      ppcVar15 = local_70;
                      if (local_70 == (code **)0x0) {
                        ppcVar15 = &local_170;
                      }
                      *(int *)((longlong)ppcVar15 + lVar35 * 4) = iVar12;
                      iVar12 = iVar12 + 1;
                      iVar14 = iVar14 + -1;
                      plVar30 = local_388;
                    } while (iVar14 != 0);
                  }
                  goto LAB_14114a988;
                }
              }
            }
            else if ((*(char *)(lVar25 + 0x30) != '\x02') || (bVar19 = true, bVar7))
            goto LAB_14114a8b9;
          }
          else {
LAB_14114a988:
            uVar11 = (uint)local_390;
            bVar19 = bVar38;
          }
          plVar21 = local_358;
          puVar37 = local_398;
          lVar20 = lVar20 + 1;
          bVar38 = bVar19;
        } while (lVar20 != (int)lVar31);
        bVar38 = true;
        if (bVar19) {
          if ((local_348 != (longlong *)0x0) && (0 < (int)local_178)) {
            FUN_1418a686a(local_348,&local_280);
          }
          if (0 < (int)local_68 && plVar21 != (longlong *)0x0) {
            FUN_1418a686a(plVar21);
            uVar11 = (uint)local_390;
          }
          bVar38 = 0 < (int)local_68;
        }
      }
      if (local_180 != (code **)0x0) {
        FUN_1400020a8();
      }
      if (local_70 != (code **)0x0) {
        FUN_1400020a8();
      }
      *(byte *)((longlong)puVar37 + 9) = bVar38 ^ 1;
    }
  }
  local_368 = (ulonglong)((int)local_368 * uVar11);
  if ((int)uVar11 < 1) {
    local_36c = 0;
    local_37c = 0;
  }
  else {
    local_36c = 0;
    local_37c = 0;
    if (*(char *)((longlong)puVar37 + 9) == '\0') {
      uVar18 = local_390 & 0xffffffff;
      uVar32 = 0;
      local_37c = 0;
      local_36c = 0;
      local_370 = 0;
      do {
        lVar25 = *local_350;
        bVar34 = *(byte *)(lVar25 + 0x21);
        if ((longlong)(int)puVar37[8] < 1) {
LAB_14114ab55:
          lVar20 = *(longlong *)(lVar25 + 8);
          lVar31 = lVar25 + 0x10;
          plVar30 = (longlong *)(**(code **)(*local_388 + 0x610))();
          if (plVar30 != (longlong *)0x0) {
            cVar9 = (**(code **)(*plVar30 + 0x590))(plVar30);
            puVar37 = local_398;
            if ((cVar9 != '\0') ||
               (((*(byte *)(lVar25 + 0x21) & 2) == 0 &&
                (iVar14 = (**(code **)(*plVar30 + 0x408))(plVar30), puVar37 = local_398, iVar14 == 2
                )))) goto LAB_14114ac9b;
            lVar35 = (**(code **)(*plVar30 + 0x2b8))(plVar30);
            if ((longlong)*(int *)(lVar25 + 0x30) != 0) {
              lVar3 = *(longlong *)(lVar25 + 0x28);
              lVar22 = 0;
              do {
                lVar29 = *(longlong *)(lVar3 + lVar22);
                if ((lVar29 != 0) &&
                   (((lVar4 = *(longlong *)(lVar3 + 0x20 + lVar22), lVar4 == 0 || (lVar4 == lVar35))
                    && (uVar11 = *(uint *)(lVar3 + 0x28 + lVar22),
                       uVar11 == 0xffffffff || uVar11 == (uint)uVar32)))) {
                  bVar10 = *(byte *)(lVar3 + 8 + lVar22);
                  if ((bVar10 & 1) == 0) {
                    bVar10 = bVar10 & 2;
                    bVar34 = bVar10 >> 1;
                    if (bVar10 == 0) {
                      lVar31 = lVar3 + 0x10 + lVar22;
                    }
                  }
                  goto LAB_14114abd5;
                }
                lVar22 = lVar22 + 0x30;
              } while ((longlong)*(int *)(lVar25 + 0x30) * 0x30 != lVar22);
            }
          }
          lVar29 = lVar20;
          puVar37 = local_398;
          if (lVar20 != 0) {
LAB_14114abd5:
            puVar17 = local_290;
            if (local_290 == (undefined1 *)0x0) {
              puVar17 = local_2d0;
            }
            *(longlong *)(puVar17 + uVar32 * 8) = lVar29;
            if (((bVar34 & 1) == 0) && ((lVar31 == 0 || (*(int *)(lVar31 + 8) < 1)))) {
              local_370 = (uint)CONCAT71((int7)((ulonglong)puVar17 >> 8),1);
              puVar37 = local_398;
            }
            else {
              lVar25 = (**(code **)(*local_388 + 0x610))();
              local_370 = (uint)CONCAT71((int7)((ulonglong)lVar25 >> 8),1);
              puVar37 = local_398;
              if (lVar25 != 0) {
                if (DAT_14caec308 == 0) {
                  local_170 = FUN_1417df956;
                  local_3a0 = FUN_14081d0ea;
                  local_3a8 = &LAB_146386466;
                  local_3b0 = &local_170;
                  local_3b8 = &LAB_147bb408b;
                  local_3c0 = (code *)&LAB_1463eaa15;
                  local_3c8 = L"Engine";
                  local_3d0 = 0;
                  local_3d8 = 0x10000001;
                  local_3e0 = 8;
                  local_3e8 = (code **)CONCAT44(local_3e8._4_4_,0x2e0);
                  FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a)
                  ;
                }
                puVar37 = local_398;
                if ((*(int *)(DAT_14caec308 + 0x38) <= *(int *)(*(longlong *)(lVar25 + 0x10) + 0x38)
                    ) && (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) +
                           (longlong)*(int *)(DAT_14caec308 + 0x38) * 8) == DAT_14caec308 + 0x30)) {
                  local_37c = local_37c | 1 << ((uint)uVar32 & 0x1f);
                  if ((bVar34 & 1) == 0) {
                    puVar17 = local_2e0;
                    if (local_2e0 == (undefined1 *)0x0) {
                      puVar17 = local_320;
                    }
                    *(longlong *)(puVar17 + uVar32 * 8) = lVar31;
                  }
                  else {
                    local_36c = local_36c | 1 << ((byte)uVar32 & 0x1f);
                  }
                }
              }
            }
          }
        }
        else {
          lVar31 = 0;
          do {
            if (uVar32 == *(uint *)(*local_358 + lVar31)) goto LAB_14114ab55;
            lVar31 = lVar31 + 4;
          } while ((longlong)(int)puVar37[8] * 4 != lVar31);
        }
LAB_14114ac9b:
        uVar32 = uVar32 + 1;
      } while (uVar32 != uVar18);
    }
  }
  lVar25 = *(longlong *)(*local_350 + 0x40);
  if ((DAT_14c950c29 == 1) && (lVar25 != 0)) {
    FUN_1456cec3c(lVar25);
LAB_14114ae2b:
    lVar31 = local_378;
    plVar30 = local_388;
    uVar11 = *(uint *)(lVar25 + 0xc);
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar25 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar25 = 0;
    }
    uVar18 = (ulonglong)*(uint *)(lVar25 + 0x10);
    if (*(uint *)(lVar25 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      uVar13 = DAT_14c964868 + 1;
      bVar38 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar38) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar13);
      }
      LOCK();
      uVar36 = *(uint *)(lVar25 + 0x10);
      bVar38 = uVar36 == 0;
      if (bVar38) {
        *(uint *)(lVar25 + 0x10) = uVar13;
        uVar36 = 0;
      }
      UNLOCK();
      if (bVar38) {
        uVar36 = uVar13;
      }
      uVar18 = (ulonglong)uVar36;
    }
  }
  else {
    if (lVar25 != 0) goto LAB_14114ae2b;
    uVar11 = 0;
    uVar18 = 0;
    lVar31 = local_378;
    plVar30 = local_388;
  }
  *(ulonglong *)(lVar31 + 0xd8) = (ulonglong)uVar11 | uVar18 << 0x20;
  lVar25 = *(longlong *)(*(longlong *)(lVar31 + 0x38) + 0x38);
  if ((lVar25 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar25);
LAB_14114ae9c:
    uVar11 = *(uint *)(lVar25 + 0xc);
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar25 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar25 = 0;
    }
    uVar18 = (ulonglong)*(uint *)(lVar25 + 0x10);
    if (*(uint *)(lVar25 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      uVar13 = DAT_14c964868 + 1;
      bVar38 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar38) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar13);
      }
      LOCK();
      uVar36 = *(uint *)(lVar25 + 0x10);
      bVar38 = uVar36 == 0;
      if (bVar38) {
        *(uint *)(lVar25 + 0x10) = uVar13;
        uVar36 = 0;
      }
      UNLOCK();
      if (bVar38) {
        uVar36 = uVar13;
      }
      uVar18 = (ulonglong)uVar36;
    }
  }
  else {
    if (lVar25 != 0) goto LAB_14114ae9c;
    uVar11 = 0;
    uVar18 = 0;
  }
  *(ulonglong *)(lVar31 + 0xe8) = (ulonglong)uVar11 | uVar18 << 0x20;
  lVar25 = *(longlong *)(*(longlong *)(lVar31 + 0x38) + 0x48);
  if ((lVar25 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar25);
LAB_14114af05:
    uVar11 = *(uint *)(lVar25 + 0xc);
    uVar18 = (ulonglong)uVar11;
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar25 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar25 = 0;
    }
    uVar32 = (ulonglong)*(uint *)(lVar25 + 0x10);
    if (*(uint *)(lVar25 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      uVar11 = DAT_14c964868 + 1;
      bVar38 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar38) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar11);
      }
      LOCK();
      uVar13 = *(uint *)(lVar25 + 0x10);
      bVar38 = uVar13 == 0;
      if (bVar38) {
        *(uint *)(lVar25 + 0x10) = uVar11;
        uVar13 = 0;
      }
      UNLOCK();
      if (bVar38) {
        uVar13 = uVar11;
      }
      uVar32 = (ulonglong)uVar13;
    }
  }
  else {
    if (lVar25 != 0) goto LAB_14114af05;
    uVar18 = 0;
    uVar32 = 0;
  }
  uVar33 = local_390;
  *(ulonglong *)(lVar31 + 0xf8) = uVar18 | uVar32 << 0x20;
  lVar25 = *(longlong *)(*(longlong *)(lVar31 + 0x38) + 0x40);
  if (lVar25 == 0) {
    if (*(int *)(lVar31 + 0xe4) != 0 || *(int *)(lVar31 + 0xe0) != 0) {
      *(undefined8 *)(lVar31 + 0xe0) = 0;
    }
  }
  else {
    if (((((*(int *)(lVar31 + 0xe4) != 0) && (uVar11 = *(uint *)(lVar31 + 0xe0), -1 < (int)uVar11))
         && ((int)uVar11 < DAT_14c9647dc)) &&
        ((plVar21 = (longlong *)
                    ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
         plVar21 != (longlong *)0x0 && ((int)plVar21[2] == *(int *)(lVar31 + 0xe4))))) &&
       ((*(uint *)(plVar21 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar21 + 1) & 0x10200000) == 0) {
        lVar20 = *plVar21;
      }
      else {
        lVar20 = 0;
      }
      if (*(longlong *)(lVar20 + 0x110) == lVar25) goto LAB_14114b042;
    }
    plVar21 = (longlong *)plVar30[0x15];
    if ((longlong *)plVar30[0x15] == (longlong *)0x0) {
      plVar21 = plVar30;
    }
    lVar25 = FUN_14090ceee(lVar25,plVar21,0);
    if (lVar25 == 0) {
      *(undefined4 *)(lVar31 + 0xe0) = 0;
      iVar14 = 0;
    }
    else {
      uVar11 = *(uint *)(lVar25 + 0xc);
      *(uint *)(lVar31 + 0xe0) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar25 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar25 = 0;
      }
      iVar14 = *(int *)(lVar25 + 0x10);
      if (*(int *)(lVar25 + 0x10) == 0) {
        LOCK();
        iVar14 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar38 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar14;
        if (bVar38) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar14 = *(int *)(lVar25 + 0x10);
        bVar38 = iVar14 == 0;
        if (bVar38) {
          *(int *)(lVar25 + 0x10) = iVar12;
          iVar14 = 0;
        }
        UNLOCK();
        if (bVar38) {
          iVar14 = iVar12;
        }
      }
    }
    *(int *)(lVar31 + 0xe4) = iVar14;
  }
LAB_14114b042:
  lVar25 = *(longlong *)(*(longlong *)(lVar31 + 0x38) + 0x38);
  if (lVar25 == 0) {
    if (*(int *)(lVar31 + 0xf4) != 0 || *(int *)(lVar31 + 0xf0) != 0) {
      *(undefined8 *)(lVar31 + 0xf0) = 0;
    }
  }
  else {
    if (((*(int *)(lVar31 + 0xf4) != 0) && (uVar11 = *(uint *)(lVar31 + 0xf0), -1 < (int)uVar11)) &&
       (((int)uVar11 < DAT_14c9647dc &&
        (((plVar21 = (longlong *)
                     ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
          plVar21 != (longlong *)0x0 && ((int)plVar21[2] == *(int *)(lVar31 + 0xf4))) &&
         ((*(uint *)(plVar21 + 1) & 0x10200000) == 0)))))) {
      if ((*(uint *)(plVar21 + 1) & 0x10200000) == 0) {
        lVar20 = *plVar21;
      }
      else {
        lVar20 = 0;
      }
      if (*(longlong *)(lVar20 + 0x110) == lVar25) goto LAB_14114b136;
    }
    plVar21 = (longlong *)plVar30[0x15];
    if ((longlong *)plVar30[0x15] == (longlong *)0x0) {
      plVar21 = plVar30;
    }
    lVar25 = FUN_14090ceee(lVar25,plVar21,0);
    if (lVar25 == 0) {
      *(undefined4 *)(lVar31 + 0xf0) = 0;
      iVar14 = 0;
    }
    else {
      uVar11 = *(uint *)(lVar25 + 0xc);
      *(uint *)(lVar31 + 0xf0) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar25 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar25 = 0;
      }
      iVar14 = *(int *)(lVar25 + 0x10);
      if (*(int *)(lVar25 + 0x10) == 0) {
        LOCK();
        iVar14 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar38 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar14;
        if (bVar38) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar14 = *(int *)(lVar25 + 0x10);
        bVar38 = iVar14 == 0;
        if (bVar38) {
          *(int *)(lVar25 + 0x10) = iVar12;
          iVar14 = 0;
        }
        UNLOCK();
        if (bVar38) {
          iVar14 = iVar12;
        }
      }
    }
    *(int *)(lVar31 + 0xf4) = iVar14;
  }
LAB_14114b136:
  lVar25 = *(longlong *)(*(longlong *)(lVar31 + 0x38) + 0x48);
  if (lVar25 == 0) {
    if (*(int *)(lVar31 + 0x104) != 0 || *(int *)(lVar31 + 0x100) != 0) {
      *(undefined8 *)(lVar31 + 0x100) = 0;
    }
  }
  else {
    if (((*(int *)(lVar31 + 0x104) != 0) && (uVar11 = *(uint *)(lVar31 + 0x100), -1 < (int)uVar11))
       && ((((int)uVar11 < DAT_14c9647dc &&
            ((plVar21 = (longlong *)
                        ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
             plVar21 != (longlong *)0x0 && ((int)plVar21[2] == *(int *)(lVar31 + 0x104))))) &&
           ((*(uint *)(plVar21 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar21 + 1) & 0x10200000) == 0) {
        lVar20 = *plVar21;
      }
      else {
        lVar20 = 0;
      }
      if (*(longlong *)(lVar20 + 0x110) == lVar25) goto LAB_14114b22a;
    }
    plVar21 = (longlong *)plVar30[0x15];
    if ((longlong *)plVar30[0x15] == (longlong *)0x0) {
      plVar21 = plVar30;
    }
    lVar25 = FUN_14090ceee(lVar25,plVar21,0);
    if (lVar25 == 0) {
      *(undefined4 *)(lVar31 + 0x100) = 0;
      iVar14 = 0;
    }
    else {
      uVar11 = *(uint *)(lVar25 + 0xc);
      *(uint *)(lVar31 + 0x100) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar25 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar25 = 0;
      }
      iVar14 = *(int *)(lVar25 + 0x10);
      if (*(int *)(lVar25 + 0x10) == 0) {
        LOCK();
        iVar14 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar38 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar14;
        if (bVar38) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar14 = *(int *)(lVar25 + 0x10);
        bVar38 = iVar14 == 0;
        if (bVar38) {
          *(int *)(lVar25 + 0x10) = iVar12;
          iVar14 = 0;
        }
        UNLOCK();
        if (bVar38) {
          iVar14 = iVar12;
        }
      }
    }
    *(int *)(lVar31 + 0x104) = iVar14;
  }
LAB_14114b22a:
  if (*(char *)((longlong)puVar37 + 9) == '\0') {
    if (DAT_14cb63950 == 0) {
      local_3b0 = &local_170;
      local_170 = FUN_144a7958c;
      local_3a0 = FUN_14081d0ea;
      local_3a8 = &LAB_1464ec72a;
      local_3b8 = &LAB_1486f5f75;
      local_3c0 = (code *)&LAB_140945686;
      local_3c8 = L"Engine";
      local_3d0 = 0;
      local_3d8 = 0x10000004;
      local_3e0 = 0x10;
      local_3e8 = (code **)CONCAT44(local_3e8._4_4_,0x19d0);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if (((*(int *)(plVar30[2] + 0x38) < *(int *)(DAT_14cb63950 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(plVar30[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) !=
         DAT_14cb63950 + 0x30)) || (uVar11 = puVar37[0xc], (longlong)(int)uVar11 == 0)) {
      if ((((*(int *)(lVar31 + 0xe4) != 0) && (uVar11 = *(uint *)(lVar31 + 0xe0), -1 < (int)uVar11))
          && (((int)uVar11 < DAT_14c9647dc &&
              ((puVar23 = (undefined8 *)
                          ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
               puVar23 != (undefined8 *)0x0 && (*(int *)(puVar23 + 2) == *(int *)(lVar31 + 0xe4)))))
             )) && ((*(uint *)(puVar23 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar23 + 1) & 0x10200000) == 0) {
          uVar16 = *puVar23;
        }
        else {
          uVar16 = 0;
        }
        (**(code **)(*plVar30 + 0x660))(plVar30,uVar16);
      }
      if (((((*(int *)(lVar31 + 0xf4) != 0) && (uVar11 = *(uint *)(lVar31 + 0xf0), -1 < (int)uVar11)
            ) && ((int)uVar11 < DAT_14c9647dc)) &&
          ((puVar23 = (undefined8 *)
                      ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
           puVar23 != (undefined8 *)0x0 && (*(int *)(puVar23 + 2) == *(int *)(lVar31 + 0xf4))))) &&
         ((*(uint *)(puVar23 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar23 + 1) & 0x10200000) == 0) {
          uVar16 = *puVar23;
        }
        else {
          uVar16 = 0;
        }
        (**(code **)(*plVar30 + 0x650))(plVar30,uVar16);
      }
    }
    else {
      lVar25 = *local_348;
      lVar20 = 0;
      do {
        uVar2 = *(undefined4 *)(lVar25 + lVar20);
        if (((*(int *)(lVar31 + 0xe4) != 0) && (uVar13 = *(uint *)(lVar31 + 0xe0), -1 < (int)uVar13)
            ) && (((int)uVar13 < DAT_14c9647dc &&
                  (((puVar23 = (undefined8 *)
                               ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
                    puVar23 != (undefined8 *)0x0 &&
                    (*(int *)(puVar23 + 2) == *(int *)(lVar31 + 0xe4))) &&
                   ((*(uint *)(puVar23 + 1) & 0x10200000) == 0)))))) {
          if ((*(uint *)(puVar23 + 1) & 0x10200000) == 0) {
            uVar16 = *puVar23;
          }
          else {
            uVar16 = 0;
          }
          FUN_140ddc36e(plVar30,uVar2,uVar16);
        }
        if ((((*(int *)(lVar31 + 0xf4) != 0) &&
             (uVar13 = *(uint *)(lVar31 + 0xf0), -1 < (int)uVar13)) &&
            (((int)uVar13 < DAT_14c9647dc &&
             ((puVar23 = (undefined8 *)
                         ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
              puVar23 != (undefined8 *)0x0 && (*(int *)(puVar23 + 2) == *(int *)(lVar31 + 0xf4))))))
            ) && ((*(uint *)(puVar23 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar23 + 1) & 0x10200000) == 0) {
            uVar16 = *puVar23;
          }
          else {
            uVar16 = 0;
          }
          FUN_140ddbc00(plVar30,uVar2,uVar16);
        }
        lVar20 = lVar20 + 4;
      } while ((longlong)(int)uVar11 * 4 != lVar20);
    }
    uVar33 = local_390;
    if (((((*(int *)(lVar31 + 0x104) != 0) && (uVar11 = *(uint *)(lVar31 + 0x100), -1 < (int)uVar11)
          ) && ((int)uVar11 < DAT_14c9647dc)) &&
        ((puVar23 = (undefined8 *)
                    ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
         puVar23 != (undefined8 *)0x0 && (*(int *)(puVar23 + 2) == *(int *)(lVar31 + 0x104))))) &&
       ((*(uint *)(puVar23 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar23 + 1) & 0x10200000) == 0) {
        uVar16 = *puVar23;
      }
      else {
        uVar16 = 0;
      }
      FUN_14054853a(plVar30,uVar16);
    }
  }
  uVar11 = (uint)uVar33;
  *(undefined1 *)(*(longlong *)(lVar31 + 0x60) + 8 + local_340) = 1;
  if ((local_370 & 1) == 0) {
    puVar37[0] = 0xffffffff;
    puVar37[1] = 0;
  }
  else {
    local_338 = 0;
    uStack_330 = 0;
    iVar14 = (int)plVar30[0xc5];
    iVar12 = iVar14 + uVar11;
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar12);
    }
    if (iVar12 != 0) {
      FUN_1409d8e1c(&local_338);
      iVar14 = (int)plVar30[0xc5];
    }
    uVar13 = (int)local_360 * uVar11;
    uVar24 = (ulonglong)uVar13;
    uVar32 = uVar33;
    uVar18 = local_368;
    local_360 = uVar24;
    if ((int)uVar13 < iVar14) {
LAB_14114b4a0:
      uVar11 = (uint)uVar32;
      uVar24 = uVar18 & 0xffffffff;
      if (0 < (int)uVar11) {
        iVar14 = (int)local_368;
        uVar33 = 0;
        do {
          puVar17 = local_290;
          if (local_290 == (undefined1 *)0x0) {
            puVar17 = local_2d0;
          }
          lVar25 = *(longlong *)(puVar17 + uVar33 * 8);
          if (lVar25 != 0) {
            if ((local_37c >> ((uint)uVar33 & 0x1f) & 1) != 0) {
              if (DAT_14caec470 == 0) {
                local_170 = FUN_1417df956;
                local_3a0 = FUN_14081d0ea;
                local_3a8 = &LAB_1463eaa20;
                local_3b0 = &local_170;
                local_3b8 = &LAB_147bbd9ea;
                local_3c0 = FUN_1401cf6d7;
                local_3c8 = L"Engine";
                local_3d0 = 0;
                local_3d8 = 0x10000000;
                local_3e0 = 8;
                local_3e8 = (code **)CONCAT44(local_3e8._4_4_,0x330);
                FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,
                              FUN_1463eb22e);
              }
              if ((*(int *)(*(longlong *)(lVar25 + 0x10) + 0x38) < *(int *)(DAT_14caec470 + 0x38))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)) {
                lVar25 = FUN_14090ceee(lVar25,local_388,0);
              }
            }
            uVar27 = uStack_330;
            lVar31 = (longlong)(int)uStack_330;
            uVar11 = (int)uStack_330 + 1;
            uStack_330 = CONCAT44(uStack_330._4_4_,uVar11);
            if (uStack_330._4_4_ < uVar11) {
              FUN_1457b0878(&local_338,uVar27 & 0xffffffff);
            }
            *(uint *)(local_338 + lVar31 * 0x10) = iVar14 + (uint)uVar33;
            *(longlong *)(local_338 + 8 + lVar31 * 0x10) = lVar25;
          }
          uVar33 = uVar33 + 1;
        } while ((uVar32 & 0xffffffff) != uVar33);
        uVar11 = (uint)local_390;
        plVar30 = local_388;
      }
    }
    else if (0 < (int)uVar11) {
      uVar27 = local_368 & 0xffffffff;
      do {
        uVar16 = (**(code **)(*plVar30 + 0x610))(plVar30,uVar27);
        uVar18 = uStack_330;
        lVar25 = (longlong)(int)uStack_330;
        uVar11 = (int)uStack_330 + 1;
        uStack_330 = CONCAT44(uStack_330._4_4_,uVar11);
        if (uStack_330._4_4_ < uVar11) {
          FUN_1457b0878(&local_338,uVar18 & 0xffffffff);
        }
        *(int *)(local_338 + lVar25 * 0x10) = (int)uVar24;
        *(undefined8 *)(local_338 + 8 + lVar25 * 0x10) = uVar16;
        uVar24 = (ulonglong)((int)uVar24 + 1);
        uVar27 = (ulonglong)((int)uVar27 + 1);
        uVar11 = (int)uVar33 - 1;
        uVar33 = (ulonglong)uVar11;
        uVar32 = local_390;
        uVar18 = local_360;
      } while (uVar11 != 0);
      goto LAB_14114b4a0;
    }
    local_360 = uVar24;
    FUN_1409d8efe(plVar30,local_338,uStack_330 & 0xffffffff);
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar11);
    }
    uVar18 = uStack_330 >> 0x20;
    uStack_330 = uStack_330 & 0xffffffff00000000;
    if ((uint)uVar18 != uVar11) {
      FUN_1409d8e1c(&local_338,uVar11);
    }
    local_398 = (uint *)(ulonglong)uVar11;
    puVar37 = (uint *)0x0;
    do {
      plVar30 = local_388;
      puVar17 = local_290;
      if (local_290 == (undefined1 *)0x0) {
        puVar17 = local_2d0;
      }
      if (*(longlong *)(puVar17 + (longlong)puVar37 * 8) != 0) {
        uVar11 = (uint)puVar37;
        if ((local_37c >> (uVar11 & 0x1f) & 1) != 0) {
          lVar25 = (**(code **)(*local_388 + 0x610))(local_388,(int)local_368 + uVar11);
          if (lVar25 == 0) {
LAB_14114b745:
            lVar25 = 0;
          }
          else {
            if (DAT_14caec470 == 0) {
              local_170 = FUN_1417df956;
              local_3a0 = FUN_14081d0ea;
              local_3a8 = &LAB_1463eaa20;
              local_3b8 = &LAB_147bbd9ea;
              local_3c0 = FUN_1401cf6d7;
              local_3c8 = L"Engine";
              local_3d0 = 0;
              local_3d8 = 0x10000000;
              local_3e0 = 8;
              local_3e8 = (code **)CONCAT44(local_3e8._4_4_,0x330);
              local_3b0 = &local_170;
              FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,
                            FUN_1463eb22e);
            }
            if ((*(int *)(*(longlong *)(lVar25 + 0x10) + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30))
            goto LAB_14114b745;
          }
          plVar30 = (longlong *)(**(code **)(*plVar30 + 0x610))(plVar30,(int)local_360 + uVar11);
          if ((lVar25 != 0) && (plVar30 != (longlong *)0x0)) {
            if ((local_36c & 1 << ((byte)puVar37 & 0x1f)) == 0) {
              puVar17 = local_2e0;
              if (local_2e0 == (undefined1 *)0x0) {
                puVar17 = local_320;
              }
              plVar21 = *(longlong **)(puVar17 + (longlong)puVar37 * 8);
              if ((plVar21 != (longlong *)0x0) &&
                 (local_358 = (longlong *)(longlong)(int)plVar21[1], local_358 != (longlong *)0x0))
              {
                lVar31 = *plVar21;
                local_358 = (longlong *)((longlong)local_358 << 3);
                plVar21 = (longlong *)0x0;
                do {
                  local_170 = (code *)(*(ulonglong *)(lVar31 + (longlong)plVar21) & 0xffffffff);
                  uStack_168 = CONCAT44(0xffffffff,
                                        (int)(*(ulonglong *)(lVar31 + (longlong)plVar21) >> 0x20));
                  local_160 = CONCAT71(local_160._1_7_,2);
                  cVar9 = (**(code **)(*plVar30 + 0x3c8))(plVar30,&local_170,&local_328,0);
                  if (cVar9 == '\0') {
                    local_280 = (code *)(*(ulonglong *)(lVar31 + (longlong)plVar21) & 0xffffffff);
                    uStack_278 = (undefined4)(*(ulonglong *)(lVar31 + (longlong)plVar21) >> 0x20);
                    uStack_274 = 0xffffffff;
                    local_270 = 2;
                    uStack_150 = CONCAT71(uStack_150._1_7_,0xff);
                    local_148 = CONCAT35(local_148._5_3_,0xffffffff);
                    local_3e8 = (code **)CONCAT44(local_3e8._4_4_,3);
                    cVar9 = (**(code **)(*plVar30 + 0x3c0))(plVar30,1,&local_280);
                    if (cVar9 == '\0') {
                      local_280 = (code *)(*(ulonglong *)(lVar31 + (longlong)plVar21) & 0xffffffff);
                      uStack_278 = (undefined4)(*(ulonglong *)(lVar31 + (longlong)plVar21) >> 0x20);
                      uStack_274 = 0xffffffff;
                      local_270 = 2;
                      uStack_150 = CONCAT71(uStack_150._1_7_,0xff);
                      local_148 = CONCAT35(local_148._5_3_,0xffffffff);
                      local_3e8 = (code **)CONCAT44(local_3e8._4_4_,3);
                      cVar9 = (**(code **)(*plVar30 + 0x3c0))(plVar30,0,&local_280);
                      if (cVar9 != '\0') {
                        uVar2 = local_170._0_4_;
                        local_280 = *(code **)(lVar31 + (longlong)plVar21);
                        uStack_278 = CONCAT31(uStack_278._1_3_,2);
                        uStack_274 = 0xffffffff;
                        local_170 = (code *)((ulonglong)local_170 & 0xffffffffffffff00);
                        local_128 = 0;
                        uStack_120 = 0;
                        local_138 = 0;
                        uStack_130 = 0;
                        local_148 = 0;
                        uStack_140 = 0;
                        local_158 = 0;
                        uStack_150 = 0;
                        uStack_168 = 0;
                        local_160 = 0;
                        local_3e8 = &local_170;
                        FUN_140042bb4(lVar25,&local_280,uVar2);
                      }
                    }
                    else {
                      uStack_278 = (int)uStack_168;
                      uStack_274 = uStack_168._4_4_;
                      uStack_168 = CONCAT71(uStack_168._1_7_,2);
                      uStack_168 = CONCAT44(0xffffffff,(int)uStack_168);
                      local_280 = local_170;
                      local_170 = *(code **)(lVar31 + (longlong)plVar21);
                      FUN_14016d7a8(lVar25,&local_170,&local_280);
                    }
                  }
                  else {
                    FUN_14016d8b0(lVar25,*(undefined8 *)(lVar31 + (longlong)plVar21),local_328);
                  }
                  plVar21 = plVar21 + 1;
                } while (local_358 != plVar21);
              }
            }
            else {
              FUN_147bb6f30(lVar25,plVar30,*(undefined1 *)(*local_350 + 0x20));
            }
          }
        }
      }
      puVar37 = (uint *)((longlong)puVar37 + 1);
    } while (puVar37 != local_398);
    if (local_338 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_2e0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_290 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_14114bac9:
  if ((local_60 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14114c36c FUN_14114c36c body=54 status=ok
// SIG undefined FUN_14114c36c(void)

undefined8 * FUN_14114c36c(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a5d8d20;
  param_1[5] = &PTR_FUN_14a5d9300;
  param_1[6] = &PTR_LAB_14a5d9340;
  return param_1;
}



// FUNCTION 14114c3a8 FUN_14114c3a8 body=221 status=ok
// SIG undefined FUN_14114c3a8(void)

longlong FUN_14114c3a8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc17370 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149456f71;
    local_40 = FUN_146730c9a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/ComputeFramework",L"ComputeDataProvider",&DAT_14cc17370,&DAT_149456f70);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc17370;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14114c486 FUN_14114c486 body=71 status=ok
// SIG undefined FUN_14114c486(void)

void FUN_14114c486(longlong *param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x4dfb) = 0;
  if (param_2 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    if (cVar1 != '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014114c4c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))(param_1,param_3,1);
  return;
}



// FUNCTION 14114c4ce FUN_14114c4ce body=340 status=ok
// SIG undefined FUN_14114c4ce(void)

undefined1 FUN_14114c4ce(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong **)(param_1 + -0x39b0) != (longlong *)0x0) &&
      (cVar1 = (**(code **)(**(longlong **)(param_1 + -0x39b0) + 0x700))(), cVar1 != '\0')) &&
     (lVar3 = *(longlong *)(param_1 + -0x37a0), lVar3 != 0)) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      lVar3 = *(longlong *)(param_1 + -0x37a0);
      if (lVar3 == 0) goto LAB_14114c541;
    }
    uVar2 = 0;
    if ((DAT_14cbadd90 == 0) || (lVar3 = *(longlong *)(lVar3 + 0x10), lVar3 == 0))
    goto LAB_14114c543;
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
         == DAT_14cbadd90 + 0x30 && (lVar3 = FUN_14030d330(), lVar3 != 0)))) {
      uVar2 = *(undefined1 *)(lVar3 + 0x361);
      goto LAB_14114c543;
    }
  }
LAB_14114c541:
  uVar2 = 0;
LAB_14114c543:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14114c624 FUN_14114c624 body=557 status=ok
// SIG undefined FUN_14114c624(void)

void FUN_14114c624(longlong *param_1,char param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)param_1[-0x736];
  if (plVar3 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar3 + 0x700))(plVar3);
    if (((cVar2 != '\0') || (*(char *)((longlong)param_1 + 0x4dfa) != '\0')) ||
       (((char)param_1[-0x73d] == '\x03' && (plVar3[0x78] == 0)))) {
      if (param_3 != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x4dfa) = 0;
      }
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
      if (plVar3 != (longlong *)0x0) {
        if (((param_2 == '\0') && ((char)param_1[0x9bf] != '\0')) &&
           (((char)param_1[0x9bf] != '\x03' || (*(char *)((longlong)param_1 + 0x4df9) != '\0')))) {
          uVar6 = *(undefined4 *)((longlong)param_1 + 0x4e04);
          uVar5 = (**(code **)(*plVar3 + 0x10))(plVar3,0);
          uVar6 = FUN_14114c86e(param_1,uVar5,uVar6);
          *(undefined4 *)((longlong)param_1 + 0x4e04) = uVar6;
        }
        if ((char)param_1[0x9bf] != '\0') {
          FUN_140efe504(param_1 + -0x76c,3,0);
          lVar4 = param_1[-0x6f4];
          if (lVar4 != 0) {
            if (DAT_14cbadd90 == 0) {
              local_60 = &local_48;
              local_48 = FUN_141030f22;
              local_50 = FUN_14081d0ea;
              local_58 = &LAB_1459f2e4c;
              local_68 = &LAB_148c39de3;
              local_70 = &LAB_1457a9eb2;
              local_78 = &DAT_149e063b2;
              local_80 = 0;
              local_88 = 0x10000004;
              local_90 = 0x10;
              local_98 = 0x3de0;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
              lVar4 = param_1[-0x6f4];
              if (lVar4 == 0) goto LAB_14114c6b9;
            }
            if ((((DAT_14cbadd90 != 0) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
                (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
               ((*(longlong *)
                  (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
                 DAT_14cbadd90 + 0x30 && (*(char *)(lVar4 + 0x3260) == '\0')))) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
            }
          }
        }
      }
    }
  }
LAB_14114c6b9:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14114c86e FUN_14114c86e body=128 status=ok
// SIG undefined FUN_14114c86e(void)

uint FUN_14114c86e(longlong *param_1,float param_2,float param_3)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  fVar3 = 0.0;
  if (lVar1 != 0) {
    lVar1 = FUN_1447210f0(lVar1);
    if (lVar1 != 0) {
      fVar3 = (float)*(double *)(lVar1 + 0x6d0);
    }
  }
  uVar2 = -(uint)(fVar3 - param_3 < param_2);
  return ~uVar2 & (uint)fVar3 | (uint)((fVar3 + fVar3) - (param_3 + param_2)) & uVar2;
}



// FUNCTION 14114c8ee FUN_14114c8ee body=122 status=ok
// SIG undefined FUN_14114c8ee(void)

void FUN_14114c8ee(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if ((*(longlong *)(param_1 + 0x80) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x50));
  }
  if ((*(longlong *)(param_1 + 0x50) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x50));
    return;
  }
  return;
}



// FUNCTION 14114c968 FUN_14114c968 body=103 status=ok
// SIG undefined FUN_14114c968(void)

void FUN_14114c968(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if ((*(longlong *)(param_1 + 0xd8) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x50));
  }
  if ((*(longlong *)(param_1 + 0xa8) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x50));
    return;
  }
  return;
}



// FUNCTION 14114c9d6 FUN_14114c9d6 body=622 status=ok
// SIG undefined FUN_14114c9d6(void)

void FUN_14114c9d6(longlong param_1,double *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  puVar1 = (uint *)(param_1 + 0x30);
  uVar3 = *puVar1;
  if ((int)uVar3 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar3) {
    return;
  }
  lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  if (lVar8 == 0) {
    return;
  }
  if (*(int *)(lVar8 + 0x10) != *(int *)(param_1 + 0x34)) {
    return;
  }
  if ((*(uint *)(lVar8 + 8) & 0x10200000) != 0) {
    return;
  }
  cVar5 = FUN_14114cc44();
  dVar4 = param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1];
  iVar6 = *(int *)(param_1 + 0x34);
  if (iVar6 == 0) {
LAB_14114cc04:
    lVar8 = 0;
  }
  else {
    uVar3 = *puVar1;
    lVar8 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != iVar6 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
      goto LAB_14114cc04;
      lVar8 = *plVar7;
    }
  }
  if (dVar4 < 9.99999905104687e-09) {
    if (*(longlong *)(lVar8 + 0x11e8) != 0) {
      pbVar2 = (byte *)(*(longlong *)(lVar8 + 0x11e8) + 0x36a8);
      *pbVar2 = *pbVar2 & 0xfd;
    }
    if (cVar5 != '\0') {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x34);
  }
  else {
    if ((*(longlong *)(lVar8 + 0x430) != 0) &&
       ((*(byte *)(*(longlong *)(lVar8 + 0x430) + 0x5b5) & 0x20) != 0)) {
      plVar7 = (longlong *)FUN_14479d2ce(puVar1);
      (**(code **)(*plVar7 + 0x868))(plVar7,0);
      iVar6 = *(int *)(param_1 + 0x34);
    }
    if (cVar5 != '\0') {
      if (iVar6 == 0) {
LAB_14114cc0b:
        lVar8 = 0;
      }
      else {
        uVar3 = *puVar1;
        lVar8 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          plVar7 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((plVar7 == (longlong *)0x0) ||
             (((int)plVar7[2] != iVar6 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
          goto LAB_14114cc0b;
          lVar8 = *plVar7;
        }
      }
      if ((*(longlong *)(lVar8 + 0x11e8) != 0) &&
         ((*(byte *)(*(longlong *)(lVar8 + 0x11e8) + 0x36a8) & 1) != 0)) {
        return;
      }
    }
  }
  if (iVar6 != 0) {
    uVar3 = *puVar1;
    lVar8 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_14114cbaf;
    plVar7 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((plVar7 != (longlong *)0x0) &&
       (((int)plVar7[2] == iVar6 && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
      lVar8 = *plVar7;
      goto LAB_14114cbaf;
    }
  }
  lVar8 = 0;
LAB_14114cbaf:
  lVar8 = *(longlong *)(lVar8 + 0x11e8);
  if (lVar8 != 0) {
    *(uint *)(lVar8 + 0x36a8) =
         (uint)(9.99999905104687e-09 <= dVar4) * 3 | *(uint *)(lVar8 + 0x36a8) & 0xfffffffc;
  }
  return;
}



// FUNCTION 14114cc44 FUN_14114cc44 body=346 status=ok
// SIG undefined FUN_14114cc44(void)

ulonglong FUN_14114cc44(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  undefined7 uVar4;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (((*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0) &&
      (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x700))(), cVar1 != '\0')) &&
     (lVar2 = *(longlong *)(param_1 + 0x3c0), lVar2 != 0)) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      lVar2 = *(longlong *)(param_1 + 0x3c0);
      if (lVar2 == 0) goto LAB_14114cccb;
    }
    if (((DAT_14cbadd90 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 != 0)) &&
       ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
          == DAT_14cbadd90 + 0x30 && (lVar2 = FUN_14030d330(), lVar2 != 0)))))) {
      uVar3 = CONCAT71(uVar4,*(undefined1 *)(lVar2 + 0x363));
    }
  }
LAB_14114cccb:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14114cda0 FUN_14114cda0 body=1534 status=ok
// SIG undefined FUN_14114cda0(void)

void FUN_14114cda0(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  char local_b8 [16];
  longlong *local_a8;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *param_2;
  local_b8[0] = '\0';
  local_90[0] = 0;
  FUN_140b359ca(local_b8);
  puVar8 = &local_88;
  FUN_1448729ea(param_1 + 0x60,puVar8,local_b8);
  uVar7 = 0;
  iVar5 = FUN_14005fbd2(puVar8,0);
  uVar6 = FUN_14114d39f();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 != 0) {
    uVar7 = FUN_1403f69f4(lVar3,uVar6,param_3 != 0);
  }
  FUN_1407cace8(lVar2,uVar7,(float)iVar5,0);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_70) {
      puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
    }
    (*pcVar4)(puVar8);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(CONCAT44(uStack_84,local_88));
  }
  FUN_1448173f8(local_90);
  if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_b8[0] = '\0';
  local_90[0] = 0;
  FUN_140b359ca(local_b8,param_2);
  puVar8 = &local_e0;
  FUN_1448729ea(param_1 + 0x110,puVar8,local_b8);
  uVar10 = local_e0;
  if (local_c0 != 3) {
    puVar9 = &local_88;
    FUN_1400b56fe(puVar9,&local_e0,3);
    uVar10 = local_88;
    if (local_68 == 0) {
      uVar10 = 0x3f800000;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar9 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar9);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar6 = FUN_14114d39f();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar3,uVar6,4 - (uint)(param_3 == 0));
  }
  FUN_1407cace8(lVar2,uVar6,uVar10,0);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_c8) {
      puVar8 = (undefined4 *)CONCAT44(uStack_dc,local_e0);
    }
    (*pcVar4)(puVar8);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
  }
  FUN_1448173f8(local_90);
  if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_b8[0] = '\0';
  local_90[0] = 0;
  FUN_140b359ca(local_b8,param_2);
  puVar8 = &local_e0;
  FUN_1448729ea(param_1 + 0x160,puVar8,local_b8);
  uVar10 = local_e0;
  if (local_c0 != 3) {
    puVar9 = &local_88;
    FUN_1400b56fe(puVar9,&local_e0,3);
    uVar10 = local_88;
    if (local_68 == 0) {
      uVar10 = 0x3f800000;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar9 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar9);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar6 = FUN_14114d39f();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar3,uVar6,6 - (uint)(param_3 == 0));
  }
  FUN_1407cace8(lVar2,uVar6,uVar10,0);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_c8) {
      puVar8 = (undefined4 *)CONCAT44(uStack_dc,local_e0);
    }
    (*pcVar4)(puVar8);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
  }
  FUN_1448173f8(local_90);
  if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  if (param_3 == 0) {
    lVar2 = *param_2;
    local_b8[0] = '\0';
    local_90[0] = 0;
    FUN_140b359ca(local_b8,param_2);
    puVar8 = &local_88;
    FUN_1448729ea(param_1 + 0xb0,puVar8,local_b8);
    iVar5 = FUN_14005fbd2(puVar8,1);
    uVar6 = FUN_14114d39f();
    lVar3 = *(longlong *)(lVar2 + 0x200);
    if (lVar3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_1403f69f4(lVar3,uVar6,2);
    }
    FUN_1407cace8(lVar2,uVar6,(float)iVar5,0);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
    FUN_1448173f8(local_90);
    if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a8 + 0x10))();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14114d39f FUN_14114d39f body=57 status=ok
// SIG undefined FUN_14114d39f(void)

void FUN_14114d39f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4550 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4550 = FUN_14171c317(FUN_1465bdf2a,uVar1,L"EAtt_GrenadeBehaviorPayloadMirv");
  }
  return;
}



// FUNCTION 14114d3d8 FUN_14114d3d8 body=153 status=ok
// SIG undefined FUN_14114d3d8(void)

void FUN_14114d3d8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_14114d554();
  if (*(int *)(param_1 + 0x32c) != *(int *)(param_1 + 0x328)) {
    FUN_1470a4d4a(param_1 + 800);
  }
  FUN_140fa7d32(param_1 + 0x330,0);
  iVar3 = *(int *)(param_1 + 0x38c);
  if (iVar3 != *(int *)(param_1 + 0x388)) {
    FUN_14114d472((longlong *)(param_1 + 0x380));
    iVar3 = *(int *)(param_1 + 0x388);
  }
  if (iVar3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x380);
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4);
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0x24) != *(int *)(lVar2 + 0x20))) {
        FUN_1447ab16c(lVar2 + 0x18);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 14114d472 FUN_14114d472 body=226 status=ok
// SIG undefined FUN_14114d472(void)

void FUN_14114d472(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14114d554 FUN_14114d554 body=2832 status=ok
// SIG undefined FUN_14114d554(void)

void FUN_14114d554(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong *puVar12;
  uint *puVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  uint uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong *plVar25;
  ulonglong uVar26;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  uint *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [4];
  uint local_a0;
  int local_9c;
  undefined8 local_98 [2];
  undefined8 *local_88;
  int local_7c;
  undefined8 *local_78;
  longlong *local_70;
  undefined8 **local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar3 = (**(code **)(*param_1 + 0x308))();
  if (cVar3 != '\0') {
    local_f0 = param_1 + 0x39;
    uVar18 = (longlong)(int)param_1[0x50] - (longlong)*(int *)((longlong)param_1 + 0x2ac);
    uVar17 = (uint)uVar18;
    if ((uint)((int)param_1[0x3a] - *(int *)((longlong)param_1 + 0x1fc)) < uVar17) {
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b(uVar18);
      }
      FUN_140403bb0(local_f0,uVar18 & 0xffffffff);
      iVar4 = 1;
      if (3 < uVar17) {
        uVar17 = (uVar17 | 1) + 0xe;
        iVar4 = 0x1f;
        if (uVar17 != 0) {
          for (; uVar17 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 1 << ((byte)iVar4 & 0x1f);
      }
      if (((int)param_1[0x42] == 0) || ((int)param_1[0x42] < iVar4)) {
        *(int *)(param_1 + 0x42) = iVar4;
        FUN_140403894();
      }
    }
    uVar17 = (int)param_1[0x50] - *(int *)((longlong)param_1 + 0x2ac);
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar17);
    }
    plVar19 = param_1 + 10;
    if (*(int *)((longlong)param_1 + 0x5c) < (int)uVar17) {
      FUN_141189b3c(plVar19,uVar17);
      uVar17 = (int)param_1[0x50] - *(int *)((longlong)param_1 + 0x2ac);
    }
    plVar25 = param_1 + 0xc;
    if ((uint)((int)param_1[0xd] - *(int *)((longlong)param_1 + 0x94)) < uVar17) {
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar17);
      }
      FUN_140404b1e(plVar25,uVar17);
      iVar4 = 1;
      if (3 < uVar17) {
        uVar17 = (uVar17 | 1) + 0xe;
        iVar4 = 0x1f;
        if (uVar17 != 0) {
          for (; uVar17 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 1 << ((byte)iVar4 & 0x1f);
      }
      if (((int)param_1[0x15] == 0) || ((int)param_1[0x15] < iVar4)) {
        *(int *)(param_1 + 0x15) = iVar4;
        FUN_141189784();
      }
    }
    local_d0 = param_1 + 0x4f;
    puVar13 = (uint *)(param_1 + 0x51);
    uVar17 = *(uint *)(param_1 + 0x54);
    uVar18 = (ulonglong)uVar17;
    local_e0 = plVar19;
    local_d8 = puVar13;
    local_c0 = plVar25;
    if (uVar17 == 0) {
      uVar26 = 1;
      uVar15 = 0;
      iVar4 = 0;
      uVar8 = 0;
    }
    else {
      puVar5 = (uint *)param_1[0x53];
      if ((uint *)param_1[0x53] == (uint *)0x0) {
        puVar5 = puVar13;
      }
      uVar8 = *puVar5;
      if (uVar8 == 0) {
        iVar4 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar4 = uVar17 - 1;
        }
        uVar15 = 0;
        uVar26 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar26 = uVar15;
        }
        iVar4 = 0;
        do {
          if (uVar26 == uVar15) goto LAB_14114d739;
          iVar4 = iVar4 + 0x20;
          uVar8 = puVar5[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar15 = 0;
        iVar4 = 0;
      }
      uVar26 = (ulonglong)(-uVar8 & uVar8);
      uVar2 = uVar26 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      uVar8 = (iVar4 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      if ((int)uVar17 <= (int)uVar8) {
        uVar8 = uVar17;
      }
    }
    if (uVar8 != uVar17) {
      local_c8 = param_1 + 0x43;
      local_b8 = param_1 + 0x56;
      uVar16 = 0xffffffff;
      local_e8 = uVar18;
      do {
        if (*(longlong *)(*local_d0 + 0x10 + (longlong)(int)uVar8 * 0x20) != 0) {
          plVar19 = (longlong *)(*local_d0 + (longlong)(int)uVar8 * 0x20 + 0x10);
          FUN_1447a97f4(&local_a0);
          puVar7 = (undefined8 *)*plVar19;
          if (puVar7 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)0x0;
            puVar21 = (undefined8 *)0x0;
          }
          else {
            lVar22 = puVar7[0xc];
            puVar21 = puVar7;
            if (lVar22 != 0) {
              local_58 = (undefined8 **)0x0;
              local_50 = 0x400000001;
              local_78 = puVar7;
              do {
                uVar18 = local_50;
                lVar23 = *(longlong *)(lVar22 + 8);
                if (((lVar23 != 0) && (*(int *)(lVar23 + 0x168) <= *(int *)(lVar22 + 0x10))) &&
                   ((*(byte *)(lVar23 + 0x160) & 4) == 0)) {
                  iVar14 = (int)param_1[0x59];
                  uVar17 = *(uint *)(lVar22 + 0x18);
                  if ((longlong)iVar14 == -1) {
                    if (((uVar17 != 0) && (*(int *)(lVar22 + 0x1c) != 0)) &&
                       (puVar12 = &DAT_14c948028, uVar17 != DAT_14c948000)) goto LAB_14114dc1f;
LAB_14114dd50:
                    puVar12 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
                    uVar17 = (uint)DAT_14c948618;
                  }
                  else {
                    if (((uVar17 == 0) || (iVar11 = *(int *)(lVar22 + 0x1c), iVar11 == 0)) ||
                       (uVar17 == DAT_14c948000)) goto LAB_14114dd50;
                    puVar13 = (uint *)(lVar22 + 0x20);
                    if (0 < *(int *)(lVar22 + 0x3c)) {
                      puVar13 = *(uint **)(lVar22 + 0x30);
                    }
                    if (1 < iVar11) {
                      puVar13 = *(uint **)(lVar22 + 0x30);
                    }
                    if ((iVar14 < 1) || (iVar11 != 1)) {
                      if (iVar11 <= iVar14) goto LAB_14114dd50;
                      puVar12 = (ulonglong *)(puVar13 + (longlong)iVar14 * 3 + 1);
                      uVar17 = puVar13[(longlong)iVar14 * 3];
                    }
                    else {
                      if (*(int *)((longlong)param_1 + 0x2cc) != 1) {
                        puVar13 = (uint *)&DAT_14c948618;
                      }
                      uVar17 = *puVar13;
                      puVar12 = (ulonglong *)(puVar13 + 1);
                    }
                  }
LAB_14114dc1f:
                  uVar10 = (uint)(*puVar12 >> 0x20);
                  uVar8 = uVar17;
                  if (*puVar12 >> 0x20 != 0) {
                    uVar20 = uVar10 >> 0xd ^ uVar17 - uVar10;
                    uVar8 = uVar20 << 8 ^ (-0x61c88647 - uVar20) - uVar10;
                    uVar24 = uVar8 >> 0xd ^ (uVar10 - uVar20) - uVar8;
                    uVar20 = uVar24 >> 0xc ^ (uVar20 - uVar8) - uVar24;
                    uVar8 = uVar20 << 0x10 ^ (uVar8 - uVar24) - uVar20;
                    uVar24 = uVar8 >> 5 ^ (uVar24 - uVar20) - uVar8;
                    uVar20 = uVar24 >> 3 ^ (uVar20 - uVar8) - uVar24;
                    uVar8 = uVar20 << 10 ^ (uVar8 - uVar24) - uVar20;
                    uVar8 = uVar8 >> 0xf ^ uVar24 - (uVar20 + uVar8);
                  }
                  if ((int)param_1[0x50] != *(int *)((longlong)param_1 + 0x2ac)) {
                    plVar25 = (longlong *)param_1[0x57];
                    if ((longlong *)param_1[0x57] == (longlong *)0x0) {
                      plVar25 = local_b8;
                    }
                    iVar14 = *(int *)((longlong)plVar25 +
                                     (ulonglong)((int)param_1[0x58] - 1U & uVar8) * 4);
                    if (iVar14 != -1) {
                      lVar22 = *local_d0;
                      while ((lVar23 = (longlong)iVar14 * 0x20, *(uint *)(lVar22 + lVar23) != uVar17
                             || (lVar1 = lVar22 + lVar23, *(uint *)(lVar1 + 8) != uVar10))) {
                        iVar14 = *(int *)(lVar22 + 0x18 + lVar23);
                        if (iVar14 == -1) goto LAB_14114de38;
                      }
                      if (lVar1 != 0) {
                        puVar7 = (undefined8 *)0x0;
                        if ((longlong *)(lVar1 + 0x10) == (longlong *)0x0) break;
                        puVar7 = *(undefined8 **)(lVar1 + 0x10);
                        if (puVar7 != (undefined8 *)0x0) {
                          if (puVar7[0xc] != 0) {
                            ppuVar6 = local_58;
                            if (local_58 == (undefined8 **)0x0) {
                              ppuVar6 = &local_78;
                            }
                            lVar22 = (longlong)(int)local_50;
                            if (lVar22 != 0) {
                              lVar23 = 0;
                              do {
                                if (*(undefined8 **)((longlong)ppuVar6 + lVar23) == puVar7)
                                goto LAB_14114de38;
                                lVar23 = lVar23 + 8;
                              } while (lVar22 * 8 - lVar23 != 0);
                            }
                            uVar17 = (int)local_50 + 1;
                            local_50 = CONCAT44(local_50._4_4_,uVar17);
                            if (local_50._4_4_ < uVar17) {
                              FUN_14709f8b8(&local_78,uVar18 & 0xffffffff);
                            }
                            ppuVar6 = local_58;
                            if (local_58 == (undefined8 **)0x0) {
                              ppuVar6 = &local_78;
                            }
                            ppuVar6[lVar22] = puVar7;
                            lVar22 = puVar7[0xc];
                            goto LAB_14114dd42;
                          }
                          break;
                        }
                      }
                    }
                  }
LAB_14114de38:
                  puVar7 = (undefined8 *)0x0;
                  break;
                }
                lVar22 = *(longlong *)(lVar22 + 0x40);
LAB_14114dd42:
              } while (lVar22 != 0);
              if (local_58 != (undefined8 **)0x0) {
                FUN_1400020a8();
              }
              puVar21 = (undefined8 *)*plVar19;
            }
          }
          if (puVar7 != (undefined8 *)0x0) {
            puVar21 = puVar7;
          }
          if (puVar21[6] != 0) {
            if (((local_a0 == 0) || (local_9c == 0)) ||
               ((local_a0 == DAT_14c948000 || (local_9c < 1)))) {
              local_a8 = DAT_14c948620;
              local_b0 = CONCAT44(DAT_14c948618._4_4_,(uint)DAT_14c948618);
            }
            else {
              puVar7 = local_98;
              if (0 < local_7c) {
                puVar7 = local_88;
              }
              if (local_9c != 1) {
                puVar7 = local_88;
              }
              local_b0 = *puVar7;
              local_a8 = *(undefined4 *)(puVar7 + 1);
            }
            plVar25 = puVar21 + 6;
            local_78 = &local_b0;
            local_70 = plVar25;
            FUN_141738be4(local_f0,local_a4,&local_78,0);
            puVar7 = (undefined8 *)*plVar19;
            if (puVar21 == puVar7) {
              FUN_14485dc96(param_1,puVar21);
            }
            else {
              if (puVar7[6] == 0) goto LAB_14114da2c;
              if ((((local_a0 == 0) || (local_9c == 0)) || (local_a0 == DAT_14c948000)) ||
                 (local_9c < 1)) {
                local_a8 = DAT_14c948620;
                local_b0 = CONCAT44(DAT_14c948618._4_4_,(uint)DAT_14c948618);
              }
              else {
                puVar21 = local_98;
                if (0 < local_7c) {
                  puVar21 = local_88;
                }
                if (local_9c != 1) {
                  puVar21 = local_88;
                }
                local_b0 = *puVar21;
                local_a8 = *(undefined4 *)(puVar21 + 1);
              }
              local_70 = puVar7 + 6;
              local_78 = &local_b0;
              FUN_141738be4(local_c8,local_a4,&local_78,0);
              plVar25 = (longlong *)(*plVar19 + 0x30);
            }
            if (*plVar25 != 0) {
              FUN_1400b068a(*plVar25 + 8,&local_a0,param_1);
            }
          }
LAB_14114da2c:
          if (local_88 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          uVar17 = *(uint *)(param_1 + 0x54);
          uVar18 = local_e8;
          puVar13 = local_d8;
        }
        uVar16 = uVar16 & ~(uint)uVar26;
        puVar5 = (uint *)param_1[0x53];
        if ((uint *)param_1[0x53] == (uint *)0x0) {
          puVar5 = puVar13;
        }
        iVar14 = (int)uVar15;
        lVar22 = (longlong)iVar14;
        uVar8 = puVar5[lVar22] & uVar16;
        if (uVar8 == 0) {
          iVar11 = uVar17 + 0x1e;
          if (-1 < (int)(uVar17 - 1)) {
            iVar11 = uVar17 - 1;
          }
          iVar11 = iVar11 >> 5;
          iVar4 = iVar4 + 0x20;
          iVar9 = iVar11;
          if (iVar11 < iVar14) {
            iVar9 = iVar14;
          }
          if (iVar14 < iVar11) {
            lVar23 = 0;
            do {
              uVar8 = puVar5[lVar22 + lVar23 + 1];
              if (uVar8 != 0) {
                uVar15 = (ulonglong)(iVar14 + (int)lVar23 + 1);
                uVar16 = 0xffffffff;
                goto LAB_14114dac7;
              }
              iVar4 = iVar4 + 0x20;
              lVar23 = lVar23 + 1;
            } while (iVar9 - lVar22 != lVar23);
            uVar16 = 0xffffffff;
            lVar22 = (longlong)iVar9;
          }
          uVar15 = lVar22 + 1U & 0xffffffff;
          puVar13 = local_d8;
          uVar8 = uVar17;
        }
        else {
LAB_14114dac7:
          uVar26 = (ulonglong)(-uVar8 & uVar8);
          uVar2 = uVar26 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          uVar8 = (iVar4 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if ((int)uVar17 <= (int)uVar8) {
            uVar8 = uVar17;
          }
        }
      } while (uVar8 != (uint)uVar18);
    }
LAB_14114d739:
    FUN_140402f86(local_f0);
    FUN_140403d7c(local_e0);
    if ((int)param_1[0xb] == 1) {
      FUN_141189718(local_c0,0);
    }
    else {
      FUN_1404045f2();
    }
    LOCK();
    *(undefined1 *)((longlong)param_1 + 0x154) = 1;
    UNLOCK();
    iVar4 = (int)param_1[0x50] - *(int *)((longlong)param_1 + 0x2ac);
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    local_f0 = (longlong *)DAT_14c9a1ab0;
    local_c8 = (longlong *)CONCAT62(local_c8._2_6_,*(undefined2 *)((longlong)param_1 + 0xb6));
    local_e0 = param_1 + 0x4d;
    if (*(int *)((longlong)param_1 + 0x274) < iVar4) {
      FUN_14115b8c4();
    }
    uVar17 = *(uint *)(param_1 + 0x54);
    uVar18 = (ulonglong)uVar17;
    if (uVar17 == 0) {
      uVar15 = 1;
      uVar26 = 0;
      iVar4 = 0;
      uVar8 = 0;
    }
    else {
      puVar5 = (uint *)param_1[0x53];
      if ((uint *)param_1[0x53] == (uint *)0x0) {
        puVar5 = puVar13;
      }
      uVar8 = *puVar5;
      if (uVar8 == 0) {
        iVar4 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar4 = uVar17 - 1;
        }
        uVar26 = 0;
        uVar15 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar15 = uVar26;
        }
        iVar4 = 0;
        do {
          if (uVar15 == uVar26) goto LAB_14114de88;
          iVar4 = iVar4 + 0x20;
          uVar8 = puVar5[uVar26 + 1];
          uVar26 = uVar26 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar26 = 0;
        iVar4 = 0;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar2 = uVar15 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      uVar8 = (iVar4 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      if ((int)uVar17 <= (int)uVar8) {
        uVar8 = uVar17;
      }
    }
    if (uVar8 != uVar17) {
      uVar16 = 0xffffffff;
      local_e8 = uVar18;
      do {
        lVar22 = *local_d0;
        lVar23 = *(longlong *)(lVar22 + 0x10 + (longlong)(int)uVar8 * 0x20);
        if (lVar23 != 0) {
          lVar23 = *(longlong *)(lVar23 + 0x58);
          if ((lVar23 != 0) && (*(longlong *)(lVar23 + 8) != 0)) {
            FUN_144a548dc(local_f0,(ulonglong)local_c8 & 0xffff);
            *(undefined8 *)(lVar23 + 8) = 0;
            uVar18 = local_e8;
          }
          iVar14 = (int)param_1[0x4e];
          *(uint *)(param_1 + 0x4e) = iVar14 + 1U;
          if (*(uint *)((longlong)param_1 + 0x274) < iVar14 + 1U) {
            FUN_14709f73e(local_e0,iVar14);
            uVar18 = local_e8;
          }
          puVar7 = (undefined8 *)(lVar22 + (longlong)(int)uVar8 * 0x20 + 0x10);
          *(undefined8 *)(param_1[0x4d] + (longlong)iVar14 * 8) = *puVar7;
          *puVar7 = 0;
          uVar17 = *(uint *)(param_1 + 0x54);
          puVar13 = local_d8;
        }
        uVar16 = uVar16 & ~(uint)uVar15;
        puVar5 = (uint *)param_1[0x53];
        if ((uint *)param_1[0x53] == (uint *)0x0) {
          puVar5 = puVar13;
        }
        iVar14 = (int)uVar26;
        lVar22 = (longlong)iVar14;
        uVar8 = puVar5[lVar22] & uVar16;
        if (uVar8 == 0) {
          iVar11 = uVar17 + 0x1e;
          if (-1 < (int)(uVar17 - 1)) {
            iVar11 = uVar17 - 1;
          }
          iVar11 = iVar11 >> 5;
          iVar4 = iVar4 + 0x20;
          iVar9 = iVar11;
          if (iVar11 < iVar14) {
            iVar9 = iVar14;
          }
          if (iVar14 < iVar11) {
            lVar23 = 0;
            do {
              uVar8 = puVar5[lVar22 + lVar23 + 1];
              if (uVar8 != 0) {
                uVar26 = (ulonglong)(iVar14 + (int)lVar23 + 1);
                uVar16 = 0xffffffff;
                goto LAB_14114dfd4;
              }
              iVar4 = iVar4 + 0x20;
              lVar23 = lVar23 + 1;
            } while (iVar9 - lVar22 != lVar23);
            uVar16 = 0xffffffff;
            lVar22 = (longlong)iVar9;
          }
          uVar26 = lVar22 + 1U & 0xffffffff;
          uVar18 = local_e8;
          puVar13 = local_d8;
          uVar8 = uVar17;
        }
        else {
LAB_14114dfd4:
          uVar15 = (ulonglong)(-uVar8 & uVar8);
          uVar2 = uVar15 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          uVar8 = (iVar4 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if ((int)uVar17 <= (int)uVar8) {
            uVar8 = uVar17;
          }
        }
      } while (uVar8 != (uint)uVar18);
    }
LAB_14114de88:
    FUN_1401c3a74(local_d0,0);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14114e066 FUN_14114e066 body=1121 status=ok
// SIG undefined FUN_14114e066(void)

void FUN_14114e066(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  byte *pbVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong lStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_20);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_20);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_20);
    }
  }
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0;
  lStack_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_38);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        local_38 = *(undefined8 *)(pbVar3 + 1);
        pbVar3 = pbVar3 + 9;
        *(byte **)(param_2 + 0x20) = pbVar3;
        goto LAB_14114e1c6;
      }
      (*pcVar2)(uVar1,param_2,&local_38);
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
LAB_14114e1c6:
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_40);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_40);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_40 = *(longlong *)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_40);
    }
  }
  plVar4 = &local_40;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_48 = lStack_28;
  if ((lStack_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14114e4c8(local_20,&local_58,plVar4);
  if ((DAT_14c950c29 == 1) && (*plVar4 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14114e4c8 FUN_14114e4c8 body=502 status=ok
// SIG undefined FUN_14114e4c8(void)

void FUN_14114e4c8(longlong param_1,int *param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_3 = param_1;
  if (((param_1 != 0) && (lVar5 = FUN_1447210f0(), lVar5 != 0)) &&
     ((*(byte *)(param_1 + 0x348) & 0x10) == 0)) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar6 = &PTR_FUN_14a1c9310;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(puVar6 + 1) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar4 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar4 = *(int *)(lVar5 + 0x10);
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(lVar5 + 0x10) = iVar7;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar4 = iVar7;
      }
    }
    *(int *)((longlong)puVar6 + 0xc) = iVar4;
    iVar4 = param_2[1];
    iVar7 = param_2[2];
    iVar3 = param_2[3];
    *(int *)(puVar6 + 2) = *param_2;
    *(int *)((longlong)puVar6 + 0x14) = iVar4;
    *(int *)(puVar6 + 3) = iVar7;
    *(int *)((longlong)puVar6 + 0x1c) = iVar3;
    lVar5 = *(longlong *)(param_2 + 4);
    puVar6[4] = lVar5;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    puVar6[5] = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  local_58 = *param_2;
  iStack_54 = param_2[1];
  iStack_50 = param_2[2];
  iStack_4c = param_2[3];
  plVar2 = *(longlong **)(param_2 + 4);
  local_48 = plVar2;
  if ((plVar2 != (longlong *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(plVar2);
  }
  if ((plVar2 != (longlong *)0x0 && local_58 != -1) &&
     (lVar5 = FUN_1400796d0(plVar2[2],CONCAT44(iStack_4c,iStack_50),1), lVar5 != 0)) {
    (**(code **)(*plVar2 + 0x248))(plVar2,lVar5,&local_58);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14114e6dc FUN_14114e6dc body=305 status=ok
// SIG undefined FUN_14114e6dc(void)

void FUN_14114e6dc(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_14114e776;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_14114e74f:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_14114e74f;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_14114e776;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14114e776:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14114e80e FUN_14114e80e body=80 status=ok
// SIG undefined FUN_14114e80e(void)

void FUN_14114e80e(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar1 = 0;
    do {
      FUN_144b47250(*(undefined8 *)(*(longlong *)(param_1 + 8) + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < *(int *)(param_1 + 0x14)) {
    return;
  }
  FUN_146b1ad26(param_1 + 8);
  return;
}



// FUNCTION 14114e85e FUN_14114e85e body=40 status=ok
// SIG undefined FUN_14114e85e(void)

undefined8 FUN_14114e85e(undefined8 param_1,int param_2)

{
  FUN_14114e886();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14114e886 FUN_14114e886 body=1166 status=ok
// SIG undefined FUN_14114e886(void)

void FUN_14114e886(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_14b6ff2c0;
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x1dc) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x1dc) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x34) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x34) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x194) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x194) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x31) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x31) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x31) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x17c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x17c) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x2e) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x2e) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x2e) = 0;
  }
  FUN_144760e21(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1406399d0(param_1);
  return;
}



// FUNCTION 14114ed14 FUN_14114ed14 body=96 status=ok
// SIG undefined FUN_14114ed14(void)

ulonglong FUN_14114ed14(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14114ed57:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14114ed57;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
    }
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14114ed74 FUN_14114ed74 body=495 status=ok
// SIG undefined FUN_14114ed74(void)

void FUN_14114ed74(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  byte bVar8;
  undefined8 *puVar9;
  byte bVar10;
  
  plVar1 = param_1 + 0xe;
  bVar10 = *(byte *)(param_1 + 0x12);
  bVar4 = *(byte *)(param_2 + 4);
  bVar8 = bVar10;
  if (bVar10 == *(byte *)(param_2 + 4)) {
    puVar9 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar9 = (undefined8 *)*param_2;
    }
    plVar7 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x11)) {
      plVar7 = (longlong *)*plVar1;
    }
    if (*(code **)(&DAT_14c9a85e0 + (uint)bVar10 * 0x120) != (code *)0x0) {
      cVar5 = (**(code **)(&DAT_14c9a85e0 + (uint)bVar10 * 0x120))();
      if (cVar5 != '\0') {
        return;
      }
      bVar4 = *(byte *)(param_2 + 4);
      bVar8 = *(byte *)(param_1 + 0x12);
      goto LAB_14114edf2;
    }
    iVar6 = memcmp(plVar7,puVar9,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar10 * 0x120)))
    ;
    if (iVar6 == 0) {
      return;
    }
  }
  else {
LAB_14114edf2:
    bVar10 = bVar4;
    if (bVar8 != bVar10) {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
      if (pcVar3 != (code *)0x0) {
        plVar7 = plVar1;
        if (0x18 < *(ushort *)(param_1 + 0x11)) {
          plVar7 = (longlong *)*plVar1;
        }
        (*pcVar3)(plVar7);
      }
      if (0x18 < *(ushort *)(param_1 + 0x11)) {
        FUN_1400020a8(*plVar1);
      }
      bVar10 = *(byte *)(param_2 + 4);
      uVar2 = *(ushort *)(param_2 + 3);
      *(ushort *)(param_1 + 0x11) = uVar2;
      plVar7 = plVar1;
      puVar9 = param_2;
      if (0x18 < uVar2) {
        plVar7 = (longlong *)FUN_14001cc68(uVar2,0);
        *plVar1 = (longlong)plVar7;
        puVar9 = (undefined8 *)*param_2;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar10 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(plVar7,puVar9,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar10 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 4);
      goto LAB_14114ee88;
    }
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    param_2 = (undefined8 *)*param_2;
  }
  plVar7 = plVar1;
  if (0x18 < *(ushort *)(param_1 + 0x11)) {
    plVar7 = (longlong *)*plVar1;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + (ulonglong)((uint)bVar10 * 0x120));
  if (pcVar3 == (code *)0x0) {
    memcpy(plVar7,param_2,
           (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar10 * 0x120)));
  }
  else {
    (*pcVar3)(plVar7,param_2);
  }
LAB_14114ee88:
                    /* WARNING: Could not recover jumptable at 0x00014114eea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1,plVar1,DAT_14cb7e018);
  return;
}



// FUNCTION 14114ef64 FUN_14114ef64 body=875 status=ok
// SIG undefined FUN_14114ef64(void)

void FUN_14114ef64(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_18);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_18);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_18);
    }
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_141710108;
      local_70 = 0x1000000000000000;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_38);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  uVar3 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar3);
  local_40 = local_28;
  FUN_14114f2d0(local_18,&local_50);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14114f2d0 FUN_14114f2d0 body=173 status=ok
// SIG undefined FUN_14114f2d0(void)

void FUN_14114f2d0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar2 = (longlong *)FUN_14114f501();
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar4 = FUN_145c05732();
    lVar6 = FUN_14477b664(uVar4);
    param_2[1] = lVar6;
  }
  lVar5 = param_2[2];
  if (((lVar5 != 0) || (lVar5 = 0, lVar6 == 0)) || (*param_2 == 0)) goto LAB_14114f346;
  plVar2 = *(longlong **)(lVar6 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_14114f358:
    lVar5 = 0;
  }
  else {
    cVar1 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar1 == '\0') goto LAB_14114f358;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,param_2);
  }
  param_2[2] = lVar5;
LAB_14114f346:
  FUN_14114f37e(uVar3,lVar5);
  return;
}



// FUNCTION 14114f37e FUN_14114f37e body=387 status=ok
// SIG undefined FUN_14114f37e(void)

void FUN_14114f37e(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  ulonglong *puVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if (*(int *)(param_1 + 0x100) == *(int *)(param_1 + 300)) {
    return;
  }
  uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  lVar10 = param_1 + 0x130;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x138);
  }
  iVar9 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x140) - 1U & (uVar5 >> 0x10 ^ uVar5)) *
                            4);
  if (iVar9 == -1) {
    return;
  }
  while (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar9 * 0x28),
        *puVar1 != param_2) {
    iVar9 = (int)puVar1[4];
    if (iVar9 == -1) {
      return;
    }
  }
  if (puVar1 == (ulonglong *)0x0) {
    return;
  }
  puVar8 = puVar1 + 1;
  if (puVar8 == (ulonglong *)0x0) {
    return;
  }
  uVar6 = (ulonglong)(int)puVar1[2];
  if (uVar6 == 0) {
    return;
  }
  lVar10 = 0;
  while ((*(int *)(puVar1[1] + 8 + lVar10) == 0 || (*(longlong *)(puVar1[1] + lVar10) == 0))) {
    lVar10 = lVar10 + 0x10;
    if (uVar6 << 4 == lVar10) {
      return;
    }
  }
  iVar9 = *(int *)((longlong)puVar1 + 0x1c);
  *(int *)((longlong)puVar1 + 0x1c) = iVar9 + 1;
  if ((int)puVar1[2] < 1) {
    *(int *)((longlong)puVar1 + 0x1c) = iVar9;
    return;
  }
  bVar7 = false;
  do {
    lVar10 = uVar6 * 0x10 + -8;
    uVar11 = uVar6;
    while (((*(int *)(*puVar8 + lVar10) != 0 &&
            (plVar2 = *(longlong **)((*puVar8 - 8) + lVar10), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(), cVar4 != '\0'))) {
      lVar10 = lVar10 + -0x10;
      bVar3 = uVar11 < 2;
      uVar11 = uVar11 - 1;
      if (bVar3) {
        *(int *)((longlong)puVar1 + 0x1c) = *(int *)((longlong)puVar1 + 0x1c) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_14114f4d8;
      }
    }
    uVar6 = uVar11 - 1;
    bVar7 = true;
  } while (1 < uVar11);
  *(int *)((longlong)puVar1 + 0x1c) = *(int *)((longlong)puVar1 + 0x1c) + -1;
LAB_14114f4d8:
  FUN_14474d06a(puVar8,0);
  return;
}



// FUNCTION 14114f501 FUN_14114f501 body=441 status=ok
// SIG undefined FUN_14114f501(void)

longlong FUN_14114f501(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cb652c0 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_1427b09ee;
      local_38 = &LAB_148715fe1;
      local_40 = FUN_146508b0f;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10004001;
      local_60 = 8;
      local_68 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
    }
    lVar1 = (**(code **)(*param_1 + 0x288))(param_1,DAT_14cb652c0);
    if (lVar1 != 0) {
      if (DAT_14cb652c0 == 0) {
        local_30 = &local_18;
        local_18 = FUN_1449e2820;
        local_20 = FUN_14081d0ea;
        local_28 = FUN_1427b09ee;
        local_38 = &LAB_148715fe1;
        local_40 = FUN_146508b0f;
        local_48 = L"Engine";
        local_50 = 0;
        local_58 = 0x10004001;
        local_60 = 8;
        local_68 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
      }
      lVar2 = FUN_144718840(lVar1,DAT_14cb652c0);
      if (lVar1 != lVar2) goto LAB_14114f55f;
    }
  }
  lVar2 = 0;
LAB_14114f55f:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14114f6bc FUN_14114f6bc body=1 status=ok
// SIG undefined FUN_14114f6bc(void)

void FUN_14114f6bc(void)

{
  return;
}



// FUNCTION 14114f6be FUN_14114f6be body=99 status=ok
// SIG undefined FUN_14114f6be(void)

void FUN_14114f6be(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14a1c91e0;
  lVar1 = DAT_14c9a7d48;
  if (DAT_14c9a7d48 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14c9a7d48 + 0x250);
    EnterCriticalSection(lpCriticalSection);
    FUN_140e67d96(lVar1 + 0x278,param_1);
    LeaveCriticalSection(lpCriticalSection);
    FUN_140f91434(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 14114f721 FUN_14114f721 body=48 status=ok
// SIG undefined FUN_14114f721(void)

void FUN_14114f721(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14114f752 FUN_14114f752 body=341 status=ok
// SIG undefined FUN_14114f752(void)

undefined8 FUN_14114f752(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14114f8a8(param_2,param_3);
    lVar13 = *(longlong *)(param_3 + 0xbf8);
    if (DAT_14c950c29 == '\x01') {
      if (lVar13 == 0) {
        lVar13 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar13 = *(longlong *)(param_3 + 0xbf8);
      }
    }
    *(longlong *)(param_2 + 0xbf8) = lVar13;
    puVar14 = (undefined8 *)(param_3 + 0xc00);
    puVar15 = (undefined8 *)(param_2 + 0xc00);
    for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    FUN_14023fa1a(param_2 + 0xc60,param_3 + 0xc60);
    *(undefined1 *)(param_2 + 0xcb0) = *(undefined1 *)(param_3 + 0xcb0);
    memcpy((void *)(param_2 + 0xcc0),(void *)(param_3 + 0xcc0),0x108);
    uVar4 = *(undefined8 *)(param_3 + 0xdc8);
    lVar13 = *(longlong *)(param_3 + 0xdd0);
    if (lVar13 != 0) {
      LOCK();
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_2 + 0xdd0);
    *(undefined8 *)(param_2 + 0xdc8) = uVar4;
    *(longlong *)(param_2 + 0xdd0) = lVar13;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    uVar6 = *(undefined4 *)(param_3 + 0xde0);
    uVar7 = *(undefined4 *)(param_3 + 0xde4);
    uVar8 = *(undefined4 *)(param_3 + 0xde8);
    uVar9 = *(undefined4 *)(param_3 + 0xdec);
    puVar3 = (undefined4 *)(param_3 + 0xdf0);
    uVar10 = *(undefined4 *)(param_3 + 0xdf4);
    uVar11 = *(undefined4 *)(param_3 + 0xdf8);
    uVar12 = *(undefined4 *)(param_3 + 0xdfc);
    param_3 = param_3 + 0xe00;
    *(undefined4 *)(param_2 + 0xdf0) = *puVar3;
    *(undefined4 *)(param_2 + 0xdf4) = uVar10;
    *(undefined4 *)(param_2 + 0xdf8) = uVar11;
    *(undefined4 *)(param_2 + 0xdfc) = uVar12;
    *(undefined4 *)(param_2 + 0xde0) = uVar6;
    *(undefined4 *)(param_2 + 0xde4) = uVar7;
    *(undefined4 *)(param_2 + 0xde8) = uVar8;
    *(undefined4 *)(param_2 + 0xdec) = uVar9;
    param_2 = param_2 + 0xe00;
  }
  return 1;
}



// FUNCTION 14114f8a8 FUN_14114f8a8 body=314 status=ok
// SIG undefined FUN_14114f8a8(void)

longlong FUN_14114f8a8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  FUN_14114fb72();
  lVar5 = *(longlong *)(param_2 + 0xad0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 0xad0);
    }
  }
  *(longlong *)(param_1 + 0xad0) = lVar5;
  uVar1 = *(undefined4 *)(param_2 + 0xadc);
  uVar2 = *(undefined4 *)(param_2 + 0xae0);
  uVar3 = *(undefined4 *)(param_2 + 0xae4);
  *(undefined4 *)(param_1 + 0xad8) = *(undefined4 *)(param_2 + 0xad8);
  *(undefined4 *)(param_1 + 0xadc) = uVar1;
  *(undefined4 *)(param_1 + 0xae0) = uVar2;
  *(undefined4 *)(param_1 + 0xae4) = uVar3;
  FUN_14114f9e2(param_1 + 0xae8,param_2 + 0xae8);
  *(undefined8 *)(param_1 + 0xb40) = *(undefined8 *)(param_2 + 0xb40);
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0xbb0) == '\x01') {
      puVar6 = (undefined8 *)(param_2 + 0xb50);
      puVar7 = (undefined8 *)(param_1 + 0xb50);
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      uVar4 = 1;
    }
    else {
      if (*(char *)(param_1 + 0xbb0) != '\x01') goto LAB_14114f925;
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 0xbb0) = uVar4;
  }
LAB_14114f925:
  FUN_14112f30a(param_1 + 0xbc0,param_2 + 0xbc0);
  lVar5 = *(longlong *)(param_2 + 0xbd0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 0xbd0);
    }
  }
  *(longlong *)(param_1 + 0xbd0) = lVar5;
  *(undefined8 *)(param_1 + 0xbd8) = *(undefined8 *)(param_2 + 0xbd8);
  FUN_1400e9962(param_1 + 0xbe0,param_2 + 0xbe0);
  *(undefined1 *)(param_1 + 0xbf0) = *(undefined1 *)(param_2 + 0xbf0);
  return param_1;
}



// FUNCTION 14114f9e2 FUN_14114f9e2 body=154 status=ok
// SIG undefined FUN_14114f9e2(void)

longlong FUN_14114f9e2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_14114fa0e;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_14114fa0e:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_14114fa7c(param_1,param_2);
  return param_1;
}



// FUNCTION 14114fa7c FUN_14114fa7c body=245 status=ok
// SIG undefined FUN_14114fa7c(void)

undefined8 * FUN_14114fa7c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140998fc8(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar4 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      _Src = param_2 + 2;
      if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
        _Src = (undefined8 *)param_2[4];
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,_Src,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 14114fb72 FUN_14114fb72 body=956 status=ok
// SIG undefined FUN_14114fb72(void)

longlong FUN_14114fb72(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  byte bVar17;
  undefined1 uVar18;
  longlong lVar19;
  void *pvVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  void *_Src;
  
  FUN_1411a1ca6();
  uVar6 = *(undefined4 *)(param_2 + 0x8ac);
  uVar7 = *(undefined4 *)(param_2 + 0x8b0);
  uVar8 = *(undefined4 *)(param_2 + 0x8b4);
  *(undefined4 *)(param_1 + 0x8a8) = *(undefined4 *)(param_2 + 0x8a8);
  *(undefined4 *)(param_1 + 0x8ac) = uVar6;
  *(undefined4 *)(param_1 + 0x8b0) = uVar7;
  *(undefined4 *)(param_1 + 0x8b4) = uVar8;
  FUN_1411a1bee(param_1 + 0x8b8,param_2 + 0x8b8);
  uVar6 = *(undefined4 *)(param_2 + 0x8cc);
  uVar7 = *(undefined4 *)(param_2 + 0x8d0);
  uVar8 = *(undefined4 *)(param_2 + 0x8d4);
  uVar9 = *(undefined4 *)(param_2 + 0x8d8);
  uVar10 = *(undefined4 *)(param_2 + 0x8dc);
  uVar11 = *(undefined4 *)(param_2 + 0x8e0);
  uVar12 = *(undefined4 *)(param_2 + 0x8e4);
  *(undefined4 *)(param_1 + 0x8c8) = *(undefined4 *)(param_2 + 0x8c8);
  *(undefined4 *)(param_1 + 0x8cc) = uVar6;
  *(undefined4 *)(param_1 + 0x8d0) = uVar7;
  *(undefined4 *)(param_1 + 0x8d4) = uVar8;
  *(undefined4 *)(param_1 + 0x8d8) = uVar9;
  *(undefined4 *)(param_1 + 0x8dc) = uVar10;
  *(undefined4 *)(param_1 + 0x8e0) = uVar11;
  *(undefined4 *)(param_1 + 0x8e4) = uVar12;
  FUN_1405ea0f6(param_1 + 0x8e8,param_2 + 0x8e8);
  FUN_1411a1b96(param_1 + 0x938,param_2 + 0x938);
  *(undefined8 *)(param_1 + 0x948) = *(undefined8 *)(param_2 + 0x948);
  lVar19 = *(longlong *)(param_2 + 0x950);
  if (DAT_14c950c29 == 1) {
    if (lVar19 == 0) {
      lVar19 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar19 = *(longlong *)(param_2 + 0x950);
    }
  }
  *(longlong *)(param_1 + 0x950) = lVar19;
  FUN_1411a1c48(param_1 + 0x958,param_2 + 0x958);
  *(undefined8 *)(param_1 + 0x968) = *(undefined8 *)(param_2 + 0x968);
  LOCK();
  *(undefined4 *)(param_1 + 0x970) = *(undefined4 *)(param_2 + 0x970);
  UNLOCK();
  *(undefined8 *)(param_1 + 0x978) = *(undefined8 *)(param_2 + 0x978);
  uVar6 = *(undefined4 *)(param_2 + 0x984);
  uVar7 = *(undefined4 *)(param_2 + 0x988);
  uVar8 = *(undefined4 *)(param_2 + 0x98c);
  *(undefined4 *)(param_1 + 0x980) = *(undefined4 *)(param_2 + 0x980);
  *(undefined4 *)(param_1 + 0x984) = uVar6;
  *(undefined4 *)(param_1 + 0x988) = uVar7;
  *(undefined4 *)(param_1 + 0x98c) = uVar8;
  lVar19 = *(longlong *)(param_2 + 0x998);
  if (DAT_14c950c29 == 1) {
    if (lVar19 == 0) {
      lVar19 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar19 = *(longlong *)(param_2 + 0x998);
    }
  }
  bVar17 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x998) = lVar19;
  lVar19 = *(longlong *)(param_2 + 0x9a0);
  if ((bVar17 & 1) != 0) {
    if (lVar19 == 0) {
      lVar19 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar19 = *(longlong *)(param_2 + 0x9a0);
      bVar17 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x9a0) = lVar19;
  *(undefined8 *)(param_1 + 0x9a8) = *(undefined8 *)(param_2 + 0x9a8);
  puVar21 = (undefined8 *)(param_2 + 0x9b0);
  puVar22 = (undefined8 *)(param_1 + 0x9b0);
  for (lVar19 = 0xb; lVar19 != 0; lVar19 = lVar19 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  *(undefined1 *)(param_1 + 0xa10) = *(undefined1 *)(param_2 + 0xa10);
  *(undefined8 *)(param_1 + 0xa08) = *(undefined8 *)(param_2 + 0xa08);
  lVar19 = *(longlong *)(param_2 + 0xa18);
  if ((bVar17 & 1) != 0) {
    if (lVar19 == 0) {
      lVar19 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar19 = *(longlong *)(param_2 + 0xa18);
    }
  }
  *(longlong *)(param_1 + 0xa18) = lVar19;
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0xa78) == '\x01') {
      if ((*(char *)(param_1 + 0xa78) != '\0') && (*(longlong *)(param_1 + 0xa68) != 0)) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0xa40) = *(undefined8 *)(param_2 + 0xa40);
      uVar6 = *(undefined4 *)(param_2 + 0xa20);
      uVar7 = *(undefined4 *)(param_2 + 0xa24);
      uVar8 = *(undefined4 *)(param_2 + 0xa28);
      uVar9 = *(undefined4 *)(param_2 + 0xa2c);
      uVar10 = *(undefined4 *)(param_2 + 0xa34);
      uVar11 = *(undefined4 *)(param_2 + 0xa38);
      uVar12 = *(undefined4 *)(param_2 + 0xa3c);
      *(undefined4 *)(param_1 + 0xa30) = *(undefined4 *)(param_2 + 0xa30);
      *(undefined4 *)(param_1 + 0xa34) = uVar10;
      *(undefined4 *)(param_1 + 0xa38) = uVar11;
      *(undefined4 *)(param_1 + 0xa3c) = uVar12;
      *(undefined4 *)(param_1 + 0xa20) = uVar6;
      *(undefined4 *)(param_1 + 0xa24) = uVar7;
      *(undefined4 *)(param_1 + 0xa28) = uVar8;
      *(undefined4 *)(param_1 + 0xa2c) = uVar9;
      *(undefined8 *)(param_1 + 0xa68) = 0;
      iVar3 = *(int *)(param_2 + 0xa70);
      pvVar20 = *(void **)(param_2 + 0xa68);
      *(int *)(param_1 + 0xa70) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xa74) = 2;
      }
      else {
        _Src = (void *)(param_2 + 0xa48);
        if (pvVar20 != (void *)0x0) {
          _Src = pvVar20;
        }
        FUN_144891736((void *)(param_1 + 0xa48),iVar3,0);
        pvVar20 = *(void **)(param_1 + 0xa68);
        if (*(void **)(param_1 + 0xa68) == (void *)0x0) {
          pvVar20 = (void *)(param_1 + 0xa48);
        }
        memcpy(pvVar20,_Src,(longlong)iVar3 << 4);
      }
      uVar18 = 1;
    }
    else {
      if (*(char *)(param_1 + 0xa78) == '\0') goto LAB_14114fd00;
      if (*(longlong *)(param_1 + 0xa68) != 0) {
        FUN_1400020a8();
      }
      uVar18 = 0;
    }
    *(undefined1 *)(param_1 + 0xa78) = uVar18;
  }
LAB_14114fd00:
  uVar6 = *(undefined4 *)(param_2 + 0xa80);
  uVar7 = *(undefined4 *)(param_2 + 0xa84);
  uVar8 = *(undefined4 *)(param_2 + 0xa88);
  uVar9 = *(undefined4 *)(param_2 + 0xa8c);
  uVar10 = *(undefined4 *)(param_2 + 0xa90);
  uVar11 = *(undefined4 *)(param_2 + 0xa94);
  uVar12 = *(undefined4 *)(param_2 + 0xa98);
  uVar13 = *(undefined4 *)(param_2 + 0xa9c);
  uVar14 = *(undefined4 *)(param_2 + 0xaa4);
  uVar15 = *(undefined4 *)(param_2 + 0xaa8);
  uVar16 = *(undefined4 *)(param_2 + 0xaac);
  *(undefined4 *)(param_1 + 0xaa0) = *(undefined4 *)(param_2 + 0xaa0);
  *(undefined4 *)(param_1 + 0xaa4) = uVar14;
  *(undefined4 *)(param_1 + 0xaa8) = uVar15;
  *(undefined4 *)(param_1 + 0xaac) = uVar16;
  *(undefined4 *)(param_1 + 0xa90) = uVar10;
  *(undefined4 *)(param_1 + 0xa94) = uVar11;
  *(undefined4 *)(param_1 + 0xa98) = uVar12;
  *(undefined4 *)(param_1 + 0xa9c) = uVar13;
  *(undefined4 *)(param_1 + 0xa80) = uVar6;
  *(undefined4 *)(param_1 + 0xa84) = uVar7;
  *(undefined4 *)(param_1 + 0xa88) = uVar8;
  *(undefined4 *)(param_1 + 0xa8c) = uVar9;
  uVar4 = *(undefined8 *)(param_2 + 0xab0);
  lVar19 = *(longlong *)(param_2 + 0xab8);
  if (lVar19 != 0) {
    LOCK();
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xab8);
  *(undefined8 *)(param_1 + 0xab0) = uVar4;
  *(longlong *)(param_1 + 0xab8) = lVar19;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xac0) = *(undefined4 *)(param_2 + 0xac0);
  *(undefined8 *)(param_1 + 0xac8) = *(undefined8 *)(param_2 + 0xac8);
  return param_1;
}



// FUNCTION 14114ff2e FUN_14114ff2e body=255 status=ok
// SIG undefined FUN_14114ff2e(void)

void FUN_14114ff2e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_148f03b80(param_2);
  }
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x58);
    lVar7 = (longlong)*(int *)(param_1 + 0x60) * 0x18;
    do {
      lVar5 = plVar6[1];
      if (lVar5 == 0) {
        uVar3 = FUN_1418c557a();
        lVar5 = FUN_14477b664(uVar3);
        plVar6[1] = lVar5;
      }
      lVar4 = plVar6[2];
      if (lVar4 == 0) {
        if ((lVar5 != 0) && (*plVar6 != 0)) {
          plVar1 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            plVar6[2] = 0;
          }
          else {
            uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar4 = FUN_144aff482(uVar3,plVar6);
            plVar6[2] = lVar4;
            if (lVar4 != 0) goto LAB_14114ff7f;
          }
        }
      }
      else {
LAB_14114ff7f:
        FUN_14115002e(param_2,lVar4 + 0x18);
      }
      plVar6 = plVar6 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  FUN_14115002e(param_2,param_1 + 0x68);
  return;
}



// FUNCTION 14115002e FUN_14115002e body=92 status=ok
// SIG undefined FUN_14115002e(void)

void FUN_14115002e(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14115016a(param_1,iVar2);
    }
    FUN_14115008a((longlong)iVar2 * 0x70 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 14115008a FUN_14115008a body=224 status=ok
// SIG undefined FUN_14115008a(void)

void FUN_14115008a(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
      *(undefined4 *)(param_1 + 8 + lVar4) = *(undefined4 *)(param_2 + 8 + lVar4);
      *(undefined8 *)(param_1 + 0x10 + lVar4) = 0;
      *(undefined1 *)(param_1 + 0x18 + lVar4) = *(undefined1 *)(param_2 + 0x18 + lVar4);
      *(undefined4 *)(param_1 + 0x20 + lVar4) = *(undefined4 *)(param_2 + 0x20 + lVar4);
      puVar1 = (undefined8 *)(param_1 + 0x28 + lVar4);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(param_1 + 0x38 + lVar4) = 0;
      *(undefined8 *)(param_1 + 0x28 + lVar4) = *(undefined8 *)(param_2 + 0x28 + lVar4);
      uVar3 = FUN_14477b664(*(undefined8 *)(param_2 + 0x30 + lVar4));
      uVar3 = FUN_14477b664(uVar3);
      *(undefined8 *)(param_1 + 0x30 + lVar4) = uVar3;
      *(undefined8 *)(param_1 + 0x38 + lVar4) = *(undefined8 *)(param_2 + 0x38 + lVar4);
      puVar1 = (undefined8 *)(param_2 + 0x40 + lVar4);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x40 + lVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined8 *)(param_1 + 0x50 + lVar4) = *(undefined8 *)(param_2 + 0x50 + lVar4);
      *(undefined4 *)(param_1 + 0x58 + lVar4) = *(undefined4 *)(param_2 + 0x58 + lVar4);
      *(undefined8 *)(param_1 + 0x60 + lVar4) = 0;
      *(undefined4 *)(param_1 + 0x68 + lVar4) = *(undefined4 *)(param_2 + 0x68 + lVar4);
      lVar4 = lVar4 + 0x70;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14115016a FUN_14115016a body=271 status=ok
// SIG undefined FUN_14115016a(void)

void FUN_14115016a(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = lVar4 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14115027a FUN_14115027a body=71 status=ok
// SIG undefined FUN_14115027a(void)

undefined8 * FUN_14115027a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14afff080;
  FUN_1403d9eef(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1411502c2 FUN_1411502c2 body=105 status=ok
// SIG undefined FUN_1411502c2(void)

void FUN_1411502c2(longlong *param_1)

{
  ushort *puVar1;
  longlong lVar2;
  
  if ((*(uint *)((longlong)param_1 + 0x8c) >> 0x10 & 1) != 0) {
    *(uint *)((longlong)param_1 + 0x8c) = *(uint *)((longlong)param_1 + 0x8c) & 0xfffeffff;
    lVar2 = FUN_1407f4ede();
    if (lVar2 != 0) {
      (**(code **)(*param_1 + 0x98))(param_1,lVar2);
      lVar2 = param_1[0x51];
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x50) = 0;
        puVar1 = *(ushort **)(lVar2 + 0x80);
        if (puVar1 != (ushort *)0x0) {
          *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
        }
      }
    }
  }
  return;
}



// FUNCTION 14115032c FUN_14115032c body=73 status=ok
// SIG undefined FUN_14115032c(void)

longlong FUN_14115032c(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) &&
     (lVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x2c8))(), lVar1 != 0)) {
    return lVar1;
  }
  if (*(longlong *)(param_1 + 0x178) == 0) {
    return 0;
  }
  lVar1 = FUN_141150376(*(longlong *)(param_1 + 0x178) + 0x288);
  return lVar1;
}



// FUNCTION 141150376 FUN_141150376 body=246 status=ok
// SIG undefined FUN_141150376(void)

longlong FUN_141150376(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar3 = *plVar5, lVar3 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_141050ef2();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 14115046c FUN_14115046c body=6019 status=ok
// SIG undefined FUN_14115046c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14115046c(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int *piVar7;
  void *_Src;
  bool bVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  longlong lVar17;
  undefined2 *puVar18;
  undefined1 *puVar19;
  ulonglong *puVar20;
  uint uVar21;
  longlong *plVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint *puVar26;
  ulonglong uVar27;
  uint *puVar28;
  bool bVar29;
  longlong lVar30;
  int iVar31;
  int iVar32;
  undefined1 auStack_498 [40];
  longlong *local_470;
  longlong *local_468;
  ulonglong local_460;
  uint local_454;
  longlong local_450;
  int local_444;
  uint local_440;
  uint local_43c;
  uint local_438;
  uint local_434;
  longlong *local_430;
  undefined8 local_428;
  longlong local_420;
  longlong local_418;
  undefined8 local_410;
  longlong local_408;
  longlong local_400;
  undefined **local_3f8;
  longlong local_3f0;
  ulonglong uStack_3e8;
  void *local_3e0;
  int local_3d8;
  undefined4 local_3d4;
  undefined1 local_3d0 [40];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined2 local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined2 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 *local_308 [6];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 *local_2c8 [6];
  undefined1 local_298 [64];
  int local_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  undefined **local_248 [6];
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  undefined **local_208;
  undefined1 local_1d8 [64];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined **local_188;
  undefined1 local_158 [64];
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined **local_108;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  byte local_c8;
  undefined7 uStack_c7;
  longlong local_c0 [4];
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  uint *local_78;
  uint local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_498;
  plVar22 = param_1 + 2;
  plVar14 = (longlong *)param_1[2];
  if (*(code **)(*plVar14 + 0x50) != FUN_144828418) {
    plVar14 = (longlong *)(**(code **)(*plVar14 + 0x50))();
  }
  FUN_1447a1fc0(plVar14);
  plVar14 = (longlong *)*plVar22;
  pcVar6 = *(code **)(*plVar14 + 0x28);
  if (pcVar6 == FUN_14482841c) {
    plVar13 = plVar14 + 3;
    if (plVar14[5] != 0) {
      plVar13 = (longlong *)(plVar14[5] + 8);
    }
  }
  else if (pcVar6 == (code *)&LAB_14010c34c) {
    plVar13 = plVar14 + 2;
  }
  else {
    plVar13 = (longlong *)(*pcVar6)(plVar14);
  }
  plVar14 = (longlong *)*param_2;
  if (*(code **)(*plVar14 + 0x50) != FUN_144828418) {
    plVar14 = (longlong *)(**(code **)(*plVar14 + 0x50))();
  }
  FUN_1447a1fc0(plVar14);
  plVar14 = (longlong *)*param_2;
  pcVar6 = *(code **)(*plVar14 + 0x28);
  if (pcVar6 == FUN_14482841c) {
    plVar15 = plVar14 + 3;
    if (plVar14[5] != 0) {
      plVar15 = (longlong *)(plVar14[5] + 8);
    }
  }
  else if (pcVar6 == (code *)&LAB_14010c34c) {
    plVar15 = plVar14 + 2;
  }
  else {
    plVar15 = (longlong *)(*pcVar6)(plVar14);
  }
  iVar31 = (int)plVar13[1];
  if (iVar31 == (int)plVar15[1]) {
    if ((1 < iVar31) && (iVar31 = wcscmp((wchar_t *)*plVar13,(wchar_t *)*plVar15), iVar31 != 0))
    goto LAB_141150547;
  }
  else if ((int)plVar15[1] + iVar31 != 1) {
LAB_141150547:
    *(undefined1 *)((longlong)param_1 + 9) = 0;
    plVar14 = (longlong *)*param_2;
    plVar13 = (longlong *)param_1[2];
    if (plVar13 != plVar14) {
      *plVar22 = (longlong)plVar14;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 8))();
      }
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    *(int *)(param_1 + 3) = (int)param_2[1];
    local_468 = param_1 + 6;
    iVar31 = *(int *)((longlong)param_1 + 0x3c);
    FUN_1449079f2(param_1[6],(int)param_1[7]);
    *(undefined4 *)(param_1 + 7) = 0;
    if ((iVar31 < 0) && (*(int *)((longlong)param_1 + 0x3c) != 0)) {
      FUN_141151e80(local_468,0);
    }
    local_430 = param_1 + 0xc;
    FUN_141151e4c();
    cVar10 = FUN_140cac50e(plVar22);
    local_470 = param_1;
    if (cVar10 != '\0') {
      *(undefined1 *)((longlong)param_1 + 9) = 1;
      plVar13 = (longlong *)FUN_140e82300();
      plVar22 = (longlong *)*plVar13;
      plVar14 = (longlong *)param_1[4];
      if (plVar14 != plVar22) {
        local_470[4] = (longlong)plVar22;
        if (plVar22 != (longlong *)0x0) {
          (**(code **)(*plVar22 + 8))();
        }
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      plVar22 = local_470;
      *(int *)(local_470 + 5) = (int)plVar13[1];
      uVar24 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
      if ((char)local_470[0xb] == '\x01') {
        (*(code *)(&PTR_FUN_149e1da60)[*(byte *)(local_470 + 10)])(local_470 + 8);
        *(undefined1 *)(plVar22 + 0xb) = 0;
      }
      goto LAB_141151625;
    }
    plVar14 = (longlong *)param_1[2];
    if (*(code **)(*plVar14 + 0x50) != FUN_144828418) {
      plVar14 = (longlong *)(**(code **)(*plVar14 + 0x50))();
    }
    FUN_1447a1fc0(plVar14);
    plVar14 = (longlong *)*plVar22;
    pcVar6 = *(code **)(*plVar14 + 0x28);
    if (pcVar6 == FUN_14482841c) {
      plVar15 = plVar14 + 3;
      if (plVar14[5] != 0) {
        plVar15 = (longlong *)(plVar14[5] + 8);
      }
    }
    else if (pcVar6 == (code *)&LAB_14010c34c) {
      plVar15 = plVar14 + 2;
    }
    else {
      plVar15 = (longlong *)(*pcVar6)(plVar14);
    }
    if ((int)plVar15[1] == 0) {
      puVar18 = &DAT_149dfb77a;
    }
    else {
      puVar18 = (undefined2 *)*plVar15;
    }
    FUN_1449078e7(&local_78,puVar18,param_1 + 0x1c);
    uVar11 = local_70;
    if ((&DAT_149e19eee)[local_68] == '\x01') {
      uVar24 = (ulonglong)local_70;
      if ((int)local_70 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar24);
      }
      if (*(int *)((longlong)param_1 + 0x3c) < (int)local_70) {
        FUN_141151e80(local_468,local_70);
      }
      uVar21 = (uint)CONCAT71((int7)((ulonglong)plVar13 >> 8),2);
      if (uVar11 != 0) {
        puVar28 = local_78;
        do {
          if ((((*puVar28 == DAT_14c75d558) && (puVar28[1] == DAT_14c75d55c)) &&
              (puVar28[2] == DAT_14c75d560)) && (puVar28[3] == DAT_14c75d564)) {
            uVar21 = 0;
            bVar29 = false;
            iVar31 = 0;
            goto LAB_14115071c;
          }
          puVar28 = puVar28 + 0x18;
        } while (puVar28 != local_78 + uVar24 * 0x18);
        uVar27 = *(ulonglong *)(local_78 + 0x12);
        if (uVar11 != 1) {
          lVar17 = uVar24 - 1;
          puVar20 = (ulonglong *)(local_78 + 0x2a);
          do {
            if (uVar27 < *puVar20) {
              uVar27 = *puVar20;
            }
            puVar20 = puVar20 + 0xc;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        uVar24 = *(ulonglong *)(local_78 + 0x10);
        lVar17 = *(longlong *)(local_78 + 0x14);
        FUN_1467cf6ac(&local_318,plVar22);
        puVar12 = (undefined8 *)FUN_1447a1f4a(&local_318);
        local_3e0 = (void *)0x0;
        local_3d8 = *(int *)(puVar12 + 1);
        lVar30 = (longlong)local_3d8;
        _Src = (void *)*puVar12;
        if (lVar30 == 0) {
          local_3d4 = 0;
        }
        else {
          FUN_1446dd670(&local_3e0,local_3d8,0);
          memcpy(local_3e0,_Src,lVar30 * 2);
        }
        FUN_14118a8fb(local_3d0,&local_3e0);
        FUN_141151cf4(local_298,local_3d0,0);
        FUN_141151bf0(&local_d8,local_298);
        local_98 = uVar24;
        uStack_90 = uVar27;
        local_88 = lVar17;
        FUN_1448f2150(local_298);
        iVar31 = (int)local_470[7];
        *(uint *)(local_470 + 7) = iVar31 + 1U;
        if (*(uint *)((longlong)local_470 + 0x3c) < iVar31 + 1U) {
          FUN_140188580(local_468,iVar31);
        }
        lVar17 = *local_468;
        lVar30 = (longlong)iVar31 * 0x60;
        FUN_141151bf0(lVar17 + lVar30,&local_d8);
        puVar1 = (undefined4 *)(lVar17 + 0x40 + lVar30);
        *puVar1 = (undefined4)local_98;
        puVar1[1] = local_98._4_4_;
        puVar1[2] = (undefined4)uStack_90;
        puVar1[3] = uStack_90._4_4_;
        *(longlong *)(lVar17 + 0x50 + lVar30) = local_88;
        FUN_1448f2150(&local_d8);
        if (local_318 != (longlong *)0x0) {
          (**(code **)(*local_318 + 0x10))();
        }
        uVar21 = (uint)CONCAT71((int7)((ulonglong)&local_d8 >> 8),2);
        param_1 = local_470;
      }
      goto LAB_1411511d3;
    }
    puVar26 = (uint *)param_1[4];
    if (puVar26 != local_78) {
      local_470[4] = (longlong)local_78;
      if (local_78 != (uint *)0x0) {
        (**(code **)(*(longlong *)local_78 + 8))();
      }
      if (puVar26 != (uint *)0x0) {
        (**(code **)(*(longlong *)puVar26 + 0x10))(puVar26);
      }
    }
    goto LAB_141151b45;
  }
  uVar24 = 0;
  goto LAB_141151625;
LAB_14115071c:
  do {
    puVar28 = local_78 + (longlong)iVar31 * 0x18;
    uVar11 = local_78[(longlong)iVar31 * 0x18];
    iVar23 = (int)uVar24;
    if (((((iVar31 + 3 < iVar23) && (uVar11 == DAT_14c75d558)) &&
         ((puVar28[1] == DAT_14c75d55c &&
          ((puVar28[2] == DAT_14c75d560 && (puVar28[3] == DAT_14c75d564)))))) &&
        (puVar28 != (uint *)&DAT_ffffffffffffffe8)) &&
       ((((puVar28 != (uint *)&DAT_ffffffffffffff88 && (puVar28[0x18] == DAT_14c75d568)) &&
         (puVar28[0x19] == DAT_14c75d56c)) &&
        ((puVar28[0x1a] == DAT_14c75d570 && (puVar28[0x1b] == DAT_14c75d574)))))) {
      local_418 = *(longlong *)(puVar28 + 0x10);
      local_420 = *(longlong *)(puVar28 + 0x12);
      local_428 = *(undefined8 *)(puVar28 + 0x14);
      iVar32 = iVar31 + 2;
      local_400 = (longlong)iVar32;
      puVar26 = local_78 + local_400 * 0x18;
      local_408 = *(longlong *)(local_78 + local_400 * 0x18 + 0x10);
      local_460 = *(ulonglong *)(local_78 + local_400 * 0x18 + 0x12);
      local_410 = *(undefined8 *)(local_78 + local_400 * 0x18 + 0x14);
      local_434 = DAT_14c75d578;
      local_438 = DAT_14c75d57c;
      local_43c = DAT_14c75d580;
      local_440 = DAT_14c75d584;
      local_400 = local_400 - iVar23;
      local_444 = 1;
      local_450 = 0;
      do {
        local_454 = *puVar26;
        if (puVar26 == (uint *)&DAT_ffffffffffffffe8 ||
            (puVar26[3] != puVar28[0x1b] ||
            (puVar26[2] != puVar28[0x1a] ||
            (puVar26[1] != puVar28[0x19] || local_454 != puVar28[0x18])))) {
          if (((puVar26[3] == DAT_14c75d584 &&
               (puVar26[2] == DAT_14c75d580 &&
               (puVar26[1] == DAT_14c75d57c && local_454 == DAT_14c75d578))) &&
               puVar26 != (uint *)&DAT_ffffffffffffffe8) &&
             (local_444 = local_444 + -1, local_444 == 0)) {
            iVar31 = iVar32 - (int)local_450;
            break;
          }
        }
        else {
          local_444 = local_444 + 1;
        }
        if (local_460 < *(ulonglong *)(puVar26 + 0x12)) {
          local_460 = *(ulonglong *)(puVar26 + 0x12);
        }
        local_450 = local_450 + -1;
        puVar26 = puVar26 + 0x18;
        iVar31 = iVar23;
      } while (local_400 != local_450);
      local_118 = DAT_14c75d568;
      uStack_114 = DAT_14c75d56c;
      uStack_110 = DAT_14c75d570;
      uStack_10c = DAT_14c75d574;
      local_108 = &PTR_FUN_149e34d30;
      FUN_141151bf0(&local_d8,&local_118);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      FUN_1448f2150(&local_118);
      iVar23 = (int)local_470[7];
      *(uint *)(local_470 + 7) = iVar23 + 1U;
      if (*(uint *)((longlong)local_470 + 0x3c) < iVar23 + 1U) {
        FUN_140188580(local_468,iVar23);
      }
      lVar17 = local_470[6];
      lVar30 = (longlong)iVar23 * 0x60;
      FUN_141151bf0(lVar17 + lVar30,&local_d8);
      puVar1 = (undefined4 *)(lVar17 + 0x40 + lVar30);
      *puVar1 = (undefined4)local_98;
      puVar1[1] = local_98._4_4_;
      puVar1[2] = (undefined4)uStack_90;
      puVar1[3] = uStack_90._4_4_;
      *(longlong *)(lVar17 + 0x50 + lVar30) = local_88;
      FUN_1448f2150(&local_d8);
      lVar30 = local_418;
      lVar17 = local_420;
      FUN_14006620a(&local_318,local_418,(ulonglong)(local_420 - local_418) >> 1);
      local_360._0_4_ = SUB84(local_318,0);
      local_360._4_4_ = local_318._4_4_;
      uStack_358._0_4_ = (undefined4)uStack_310;
      uStack_358._4_4_ = uStack_310._4_4_;
      local_318 = (longlong *)0x0;
      uStack_310 = 0;
      local_350 = 0;
      uStack_348 = 0;
      FUN_14118ab0c(&local_360);
      local_340 = (undefined4)local_360;
      uStack_33c = local_360._4_4_;
      uStack_338 = (undefined4)uStack_358;
      uStack_334 = uStack_358._4_4_;
      local_360 = 0;
      uStack_358 = 0;
      local_330 = (undefined4)local_350;
      uStack_32c = local_350._4_4_;
      uStack_328 = (undefined4)uStack_348;
      uStack_324 = uStack_348._4_4_;
      local_350 = 0;
      uStack_348 = 0;
      local_320 = 1;
      FUN_141151cf4(local_158,&local_340,0);
      FUN_141151bf0(&local_d8,local_158);
      local_98 = lVar30;
      uStack_90 = lVar17;
      local_88 = local_428;
      FUN_1448f2150(local_158);
      iVar23 = (int)local_470[7];
      *(uint *)(local_470 + 7) = iVar23 + 1U;
      if (*(uint *)((longlong)local_470 + 0x3c) < iVar23 + 1U) {
        FUN_140188580(local_468,iVar23);
      }
      lVar17 = *local_468;
      lVar30 = (longlong)iVar23 * 0x60;
      FUN_141151bf0(lVar17 + lVar30,&local_d8);
      puVar1 = (undefined4 *)(lVar17 + 0x40 + lVar30);
      *puVar1 = (undefined4)local_98;
      puVar1[1] = local_98._4_4_;
      puVar1[2] = (undefined4)uStack_90;
      puVar1[3] = uStack_90._4_4_;
      *(longlong *)(lVar17 + 0x50 + lVar30) = local_88;
      FUN_1448f2150(&local_d8);
      if (local_318 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_198 = _DAT_14c75d588;
      uStack_194 = uRam000000014c75d58c;
      uStack_190 = uRam000000014c75d590;
      uStack_18c = uRam000000014c75d594;
      local_188 = &PTR_FUN_149e34d50;
      FUN_141151bf0(&local_d8,&local_198);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      FUN_1448f2150(&local_198);
      iVar23 = (int)local_470[7];
      *(uint *)(local_470 + 7) = iVar23 + 1U;
      if (*(uint *)((longlong)local_470 + 0x3c) < iVar23 + 1U) {
        FUN_140188580(local_468,iVar23);
      }
      lVar17 = local_470[6];
      lVar30 = (longlong)iVar23 * 0x60;
      FUN_141151bf0(lVar17 + lVar30,&local_d8);
      puVar1 = (undefined4 *)(lVar17 + 0x40 + lVar30);
      *puVar1 = (undefined4)local_98;
      puVar1[1] = local_98._4_4_;
      puVar1[2] = (undefined4)uStack_90;
      puVar1[3] = uStack_90._4_4_;
      *(longlong *)(lVar17 + 0x50 + lVar30) = local_88;
      FUN_1448f2150(&local_d8);
      lVar17 = local_408;
      uVar24 = local_460;
      FUN_14006620a(&local_318,local_408,local_460 - local_408 >> 1);
      local_3a8._0_4_ = SUB84(local_318,0);
      local_3a8._4_4_ = local_318._4_4_;
      uStack_3a0._0_4_ = (undefined4)uStack_310;
      uStack_3a0._4_4_ = uStack_310._4_4_;
      local_318 = (longlong *)0x0;
      uStack_310 = 0;
      local_398 = 0;
      uStack_390 = 0;
      FUN_14118ab0c(&local_3a8);
      local_388 = (undefined4)local_3a8;
      uStack_384 = local_3a8._4_4_;
      uStack_380 = (undefined4)uStack_3a0;
      uStack_37c = uStack_3a0._4_4_;
      local_3a8 = 0;
      uStack_3a0 = 0;
      local_378 = (undefined4)local_398;
      uStack_374 = local_398._4_4_;
      uStack_370 = (undefined4)uStack_390;
      uStack_36c = uStack_390._4_4_;
      local_398 = 0;
      uStack_390 = 0;
      local_368 = 1;
      FUN_141151cf4(local_1d8,&local_388,0);
      FUN_141151bf0(&local_d8,local_1d8);
      local_98 = lVar17;
      uStack_90 = uVar24;
      local_88 = local_410;
      FUN_1448f2150(local_1d8);
      iVar23 = (int)local_470[7];
      *(uint *)(local_470 + 7) = iVar23 + 1U;
      if (*(uint *)((longlong)local_470 + 0x3c) < iVar23 + 1U) {
        FUN_140188580(local_468,iVar23);
      }
      lVar17 = *local_468;
      lVar30 = (longlong)iVar23 * 0x60;
      FUN_141151bf0(lVar17 + lVar30,&local_d8);
      puVar1 = (undefined4 *)(lVar17 + 0x40 + lVar30);
      *puVar1 = (undefined4)local_98;
      puVar1[1] = local_98._4_4_;
      puVar1[2] = (undefined4)uStack_90;
      puVar1[3] = uStack_90._4_4_;
      *(longlong *)(lVar17 + 0x50 + lVar30) = local_88;
      FUN_1448f2150(&local_d8);
      if (local_318 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_218 = DAT_14c75d578;
      uStack_214 = DAT_14c75d57c;
      uStack_210 = DAT_14c75d580;
      uStack_20c = DAT_14c75d584;
      local_208 = &PTR_FUN_149e34d70;
      FUN_141151bf0(&local_d8,&local_218);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      FUN_1448f2150(&local_218);
      iVar23 = (int)local_470[7];
      *(uint *)(local_470 + 7) = iVar23 + 1U;
      if (*(uint *)((longlong)local_470 + 0x3c) < iVar23 + 1U) {
        FUN_140188580(local_468,iVar23);
      }
      lVar17 = *local_468;
      lVar30 = (longlong)iVar23 * 0x60;
      FUN_141151bf0(lVar17 + lVar30,&local_d8);
      puVar1 = (undefined4 *)(lVar17 + 0x40 + lVar30);
      *puVar1 = (undefined4)local_98;
      puVar1[1] = local_98._4_4_;
      puVar1[2] = (undefined4)uStack_90;
      puVar1[3] = uStack_90._4_4_;
      *(longlong *)(lVar17 + 0x50 + lVar30) = local_88;
      FUN_1448f2150(&local_d8);
      uVar24 = (ulonglong)local_70;
      param_1 = local_470;
    }
    else {
      if (uVar21 == 0) {
        uVar3 = puVar28[1];
        uVar4 = puVar28[2];
        uVar5 = puVar28[3];
        if (((puVar28 != (uint *)&DAT_ffffffffffffffe8 &&
              (DAT_14c75d5a4 == uVar5 &&
              (DAT_14c75d5a0 == uVar4 && (DAT_14c75d59c == uVar3 && DAT_14c75d598 == uVar11)))) ||
            ((DAT_14c75d5b4 == uVar5 &&
             (DAT_14c75d5b0 == uVar4 && (DAT_14c75d5ac == uVar3 && DAT_14c75d5a8 == uVar11))) &&
             puVar28 != (uint *)&DAT_ffffffffffffffe8)) ||
           (((DAT_14c75d5c4 == uVar5 &&
             (DAT_14c75d5c0 == uVar4 && (DAT_14c75d5bc == uVar3 && DAT_14c75d5b8 == uVar11))) &&
             puVar28 != (uint *)&DAT_ffffffffffffffe8 ||
            ((((DAT_14c75d5d4 == uVar5 &&
               (DAT_14c75d5d0 == uVar4 && (DAT_14c75d5cc == uVar3 && DAT_14c75d5c8 == uVar11))) &&
               puVar28 != (uint *)&DAT_ffffffffffffffe8 ||
              ((DAT_14c75d5e4 == uVar5 &&
               (DAT_14c75d5e0 == uVar4 && (DAT_14c75d5dc == uVar3 && DAT_14c75d5d8 == uVar11))) &&
               puVar28 != (uint *)&DAT_ffffffffffffffe8)) ||
             ((uVar5 == _DAT_14c75d5f4 &&
              (uVar4 == _DAT_14c75d5f0 && (uVar3 == _DAT_14c75d5ec && DAT_14c75d5e8 == uVar11))) &&
              puVar28 != (uint *)&DAT_ffffffffffffffe8)))))) {
          uVar21 = 1;
        }
      }
      if (bVar29) {
        uVar3 = puVar28[1];
        uVar4 = puVar28[2];
        uVar5 = puVar28[3];
        if (((uVar11 != DAT_14c75d558) || (uVar3 != DAT_14c75d55c)) ||
           ((uVar4 != DAT_14c75d560 ||
            ((uVar5 != DAT_14c75d564 || (puVar28 == (uint *)&DAT_ffffffffffffffe8)))))) {
          local_450 = CONCAT71(local_450._1_7_,puVar28 == (uint *)&DAT_ffffffffffffffe8);
          local_454 = DAT_14c75d56c ^ uVar3 | DAT_14c75d568 ^ uVar11;
          uVar2 = DAT_14c75d570 ^ uVar4 | local_454;
          local_460 = CONCAT44(local_460._4_4_,uVar2);
          if (((DAT_14c75d574 != uVar5 || uVar2 != 0) || puVar28 == (uint *)&DAT_ffffffffffffffe8)
             && ((uVar5 != _DAT_14c75d604 ||
                 (uVar4 != _DAT_14c75d600 || (uVar3 != _DAT_14c75d5fc || DAT_14c75d5f8 != uVar11)))
                 || puVar28 == (uint *)&DAT_ffffffffffffffe8)) goto LAB_141150ab5;
        }
        local_258 = _DAT_14c75d608;
        iStack_254 = iRam000000014c75d60c;
        iStack_250 = iRam000000014c75d610;
        iStack_24c = iRam000000014c75d614;
        local_248[0] = &PTR_FUN_149e34d90;
        FUN_141151bf0(&local_d8,&local_258);
        local_88 = *(longlong *)(puVar28 + 0x14);
        local_98 = *(ulonglong *)(puVar28 + 0x10);
        uStack_90 = *(ulonglong *)(puVar28 + 0x12);
        if ((((((iStack_254 != 0 || local_258 != 0) || iStack_250 != 0) || iStack_24c != 0) &&
             (pcVar6 = (code *)*local_248[0], pcVar6 != FUN_1400791ec)) && (pcVar6 != FUN_14477b052)
            ) && (pcVar6 != FUN_1400791cc)) {
          (*pcVar6)(local_248,0);
        }
        iVar23 = (int)param_1[7];
        *(uint *)(param_1 + 7) = iVar23 + 1U;
        if (*(uint *)((longlong)param_1 + 0x3c) < iVar23 + 1U) {
          FUN_140188580(local_468,iVar23);
        }
        lVar17 = *local_468;
        lVar30 = (longlong)iVar23 * 0x60;
        FUN_141151bf0(lVar17 + lVar30,&local_d8);
        *(longlong *)(lVar17 + 0x50 + lVar30) = local_88;
        puVar1 = (undefined4 *)(lVar17 + 0x40 + lVar30);
        *puVar1 = (undefined4)local_98;
        puVar1[1] = local_98._4_4_;
        puVar1[2] = (undefined4)uStack_90;
        puVar1[3] = uStack_90._4_4_;
        if (((((local_d4 != 0 || local_d8 != 0) || local_d0 != 0) || local_cc != 0) &&
            (pcVar6 = *(code **)CONCAT71(uStack_c7,local_c8), pcVar6 != FUN_1400791ec)) &&
           ((pcVar6 != FUN_14477b052 && (pcVar6 != FUN_1400791cc)))) {
          (*pcVar6)(&local_c8,0);
        }
        uVar11 = *puVar28;
      }
LAB_141150ab5:
      if (((uVar11 != DAT_14c75d558) || (puVar28[1] != DAT_14c75d55c)) ||
         ((puVar28[2] != DAT_14c75d560 ||
          ((puVar28[3] != DAT_14c75d564 || (bVar29 = true, puVar28 == (uint *)&DAT_ffffffffffffffe8)
           ))))) {
        bVar29 = puVar28 != (uint *)&DAT_ffffffffffffffe8 &&
                 (puVar28[3] == DAT_14c75d584 &&
                 ((puVar28[2] == DAT_14c75d580 && puVar28[1] == DAT_14c75d57c) &&
                 uVar11 == DAT_14c75d578));
      }
      iVar23 = (int)param_1[7];
      *(uint *)(param_1 + 7) = iVar23 + 1U;
      if (*(uint *)((longlong)param_1 + 0x3c) < iVar23 + 1U) {
        FUN_140188580(local_468,iVar23);
      }
      lVar17 = *local_468;
      lVar30 = (longlong)iVar23 * 0x60;
      FUN_141151bf0(lVar17 + lVar30,puVar28);
      uVar11 = puVar28[0x11];
      uVar3 = puVar28[0x12];
      uVar4 = puVar28[0x13];
      puVar26 = (uint *)(lVar17 + 0x40 + lVar30);
      *puVar26 = puVar28[0x10];
      puVar26[1] = uVar11;
      puVar26[2] = uVar3;
      puVar26[3] = uVar4;
      *(undefined8 *)(lVar17 + 0x50 + lVar30) = *(undefined8 *)(puVar28 + 0x14);
    }
    iVar31 = iVar31 + 1;
  } while (iVar31 < (int)uVar24);
  uVar21 = uVar21 | 2;
LAB_1411511d3:
  local_468 = (longlong *)CONCAT44(local_468._4_4_,uVar21);
  local_318 = (longlong *)0x0;
  uStack_310 = 0;
  iVar31 = (int)param_1[7];
  if (iVar31 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar31);
  }
  if (iVar31 != 0) {
    FUN_141151e80(&local_318);
    lVar17 = param_1[7];
    if ((longlong)(int)lVar17 != 0) {
      lVar30 = param_1[6];
      plVar22 = (longlong *)(lVar30 + 0x10);
      do {
        if (((*(int *)((longlong)plVar22 + -0xc) == 0 && (int)plVar22[-2] == 0) &&
            (int)plVar22[-1] == 0) && *(int *)((longlong)plVar22 + -4) == 0) {
          local_2d8 = 0;
          uStack_2d0 = 0;
        }
        else {
          (**(code **)(*plVar22 + 0x18))(plVar22,&local_2d8);
        }
        FUN_141151bf0(&local_d8,&local_2d8);
        local_88 = plVar22[8];
        local_98 = plVar22[6];
        uStack_90 = plVar22[7];
        if ((((((local_2d8._4_4_ != 0 || (int)local_2d8 != 0) || (int)uStack_2d0 != 0) ||
               uStack_2d0._4_4_ != 0) && (pcVar6 = (code *)*local_2c8[0], pcVar6 != FUN_1400791ec))
            && (pcVar6 != FUN_14477b052)) && (pcVar6 != FUN_1400791cc)) {
          (*pcVar6)(local_2c8,0);
        }
        uVar24 = uStack_310;
        lVar25 = (longlong)(int)uStack_310;
        uVar11 = (int)uStack_310 + 1;
        uStack_310 = CONCAT44(uStack_310._4_4_,uVar11);
        if (uStack_310._4_4_ < uVar11) {
          FUN_140188580(&local_318,uVar24 & 0xffffffff);
        }
        lVar9 = (longlong)local_318;
        lVar25 = lVar25 * 0x60;
        FUN_141151bf0((longlong)local_318 + lVar25,&local_d8);
        *(longlong *)(lVar9 + 0x50 + lVar25) = local_88;
        puVar1 = (undefined4 *)(lVar9 + 0x40 + lVar25);
        *puVar1 = (undefined4)local_98;
        puVar1[1] = local_98._4_4_;
        puVar1[2] = (undefined4)uStack_90;
        puVar1[3] = uStack_90._4_4_;
        if (((((local_d4 != 0 || local_d8 != 0) || local_d0 != 0) || local_cc != 0) &&
            (pcVar6 = *(code **)CONCAT71(uStack_c7,local_c8), pcVar6 != FUN_1400791ec)) &&
           ((pcVar6 != FUN_14477b052 && (pcVar6 != FUN_1400791cc)))) {
          (*pcVar6)(&local_c8,0);
        }
        plVar14 = plVar22 + 10;
        plVar22 = plVar22 + 0xc;
        param_1 = local_470;
      } while (plVar14 != (longlong *)((longlong)(int)lVar17 * 0x60 + lVar30));
    }
  }
  local_3f0 = (longlong)local_318;
  uStack_3e8 = uStack_310;
  local_318 = (longlong *)0x0;
  uStack_310 = 0;
  FUN_140f5b56a(&local_d8,&local_3f0,param_1 + 0x1f);
  plVar22 = local_468;
  puVar28 = (uint *)(param_1 + 8);
  puVar26 = (uint *)((ulonglong)local_468 & 0xffffffff);
  if (&local_d8 != puVar28) {
    if ((char)param_1[0xb] == '\x01') {
      (*(code *)(&PTR_FUN_149e1da60)[*(byte *)(param_1 + 10)])(puVar28);
    }
    *(byte *)(param_1 + 10) = local_c8;
    (*(code *)(&PTR_LAB_149e34db0)[local_c8])(puVar28);
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  (*(code *)(&PTR_FUN_149e1da60)[local_c8])();
  FUN_1449079f2(local_318,uStack_310 & 0xffffffff);
  if (local_318 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((&DAT_149e1da58)[*(byte *)(param_1 + 10)] == '\0') {
    puVar26 = (uint *)param_1[4];
    puVar28 = (uint *)param_1[8];
    if (puVar26 != puVar28) {
      local_470[4] = (longlong)puVar28;
      if (puVar28 != (uint *)0x0) {
        (**(code **)(*(longlong *)puVar28 + 8))();
      }
      if (puVar26 != (uint *)0x0) {
        (**(code **)(*(longlong *)puVar26 + 0x10))(puVar26);
      }
    }
    local_70 = *(uint *)(local_470 + 9);
LAB_141151b45:
    *(uint *)(local_470 + 5) = local_70;
  }
  else {
    *(char *)((longlong)param_1 + 9) = (char)plVar22;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
      param_1 = local_470;
    }
    plVar15 = DAT_14c844840;
    plVar14 = param_1 + 4;
    plVar13 = (longlong *)param_1[4];
    if (plVar13 != DAT_14c844840) {
      *plVar14 = (longlong)DAT_14c844840;
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 8))();
      }
      param_1 = local_470;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    *(undefined4 *)(param_1 + 5) = DAT_14c844848;
    local_3f8 = &PTR_LAB_149e346f0;
    (**(code **)(*param_1 + 0x10))(param_1,puVar28,&local_3f8,plVar14);
    if (((int)param_1[9] == 1) && (piVar7 = *(int **)puVar28, piVar7[0x16] == 0)) {
      if (((piVar7[1] == 0 && *piVar7 == 0) && piVar7[2] == 0) && piVar7[3] == 0) {
        local_318 = (longlong *)0x0;
        uStack_310 = 0;
      }
      else {
        (**(code **)(*(longlong *)(piVar7 + 4) + 0x18))(piVar7 + 4,&local_318);
      }
      FUN_141151bf0(&local_d8,&local_318);
      local_98 = local_98 & 0xffffffffffffff00;
      if ((((((local_318._4_4_ != 0 || (int)local_318 != 0) || (int)uStack_310 != 0) ||
             uStack_310._4_4_ != 0) && (pcVar6 = (code *)*local_308[0], pcVar6 != FUN_1400791ec)) &&
          (pcVar6 != FUN_14477b052)) && (pcVar6 != FUN_1400791cc)) {
        (*pcVar6)(local_308,0);
      }
      bVar29 = local_cc == DAT_14c75d564;
      bVar8 = local_d0 == DAT_14c75d560 && (local_d4 == DAT_14c75d55c && local_d8 == DAT_14c75d558);
      puVar26 = (uint *)(((ulonglong)plVar22 >> 8 & 0xffffff) << 8);
      plVar22 = (longlong *)0x0;
      if (bVar29 && bVar8) {
        plVar22 = local_c0;
      }
      if ((plVar22 != (longlong *)0x0) && (plVar22 != local_430)) {
        plVar14 = local_430;
        if ((char)param_1[0x11] == '\x01') {
          if (param_1[0xe] != 0) {
            FUN_1400020a8();
          }
          plVar14 = local_430;
          param_1 = local_470;
          if (*local_430 != 0) {
            FUN_1400020a8();
          }
        }
        FUN_141151db2(plVar14,plVar22);
        puVar16 = &DAT_00000020;
        if (bVar29 && bVar8) {
          puVar16 = local_a0;
        }
        puVar19 = &DAT_00000021;
        if (bVar29 && bVar8) {
          puVar19 = local_a0 + 1;
        }
        *(undefined1 *)(param_1 + 0x10) = *puVar16;
        *(undefined1 *)((longlong)param_1 + 0x81) = *puVar19;
        *(undefined1 *)(param_1 + 0x11) = 1;
      }
      (*(code *)(&PTR_LAB_149e1d9c0)[local_98 & 0xff])();
    }
  }
  (*(code *)(&PTR_FUN_149e19f00)[local_68])();
  uVar24 = CONCAT71((int7)((ulonglong)puVar26 >> 8),1);
LAB_141151625:
  if ((local_60 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar24 & 0xffffffff;
}



// FUNCTION 141151bf0 FUN_141151bf0 body=91 status=ok
// SIG undefined FUN_141151bf0(void)

int * FUN_141151bf0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  if (((param_2[1] != 0 || *param_2 != 0) || param_2[2] != 0) || param_2[3] != 0) {
    (**(code **)(*(longlong *)(param_2 + 4) + 8))(param_2 + 4,param_1 + 4);
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    (*(code *)**(undefined8 **)(param_2 + 4))(param_2 + 4,0);
  }
  return param_1;
}



// FUNCTION 141151c8a FUN_141151c8a body=104 status=ok
// SIG undefined FUN_141151c8a(void)

undefined8 FUN_141151c8a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141151db2(local_48,param_1 + 8);
  local_28 = *(undefined1 *)(param_1 + 0x28);
  local_27 = *(undefined1 *)(param_1 + 0x29);
  FUN_141151cf4(param_2,local_48,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141151cf4 FUN_141151cf4 body=189 status=ok
// SIG undefined FUN_141151cf4(void)

undefined4 * FUN_141151cf4(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  ulonglong local_18;
  
  uVar3 = DAT_14c75d564;
  uVar2 = DAT_14c75d560;
  uVar1 = DAT_14c75d55c;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = DAT_14c75d558;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  local_40 = *param_2;
  *param_2 = 0;
  local_38 = (undefined4)param_2[1];
  local_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  local_30 = param_2[2];
  param_2[2] = 0;
  local_28 = (undefined4)param_2[3];
  local_24 = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  local_20 = (undefined1)param_2[4];
  local_1f = *(undefined1 *)((longlong)param_2 + 0x21);
  FUN_140c7f146(param_1 + 4);
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141151db2 FUN_141151db2 body=153 status=ok
// SIG undefined FUN_141151db2(void)

undefined8 * FUN_141151db2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1409e00a6(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 141151e4c FUN_141151e4c body=51 status=ok
// SIG undefined FUN_141151e4c(void)

void FUN_141151e4c(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 141151e80 FUN_141151e80 body=231 status=ok
// SIG undefined FUN_141151e80(void)

void FUN_141151e80(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,0x10);
  }
  return;
}



// FUNCTION 141151f7c FUN_141151f7c body=186 status=ok
// SIG undefined FUN_141151f7c(void)

void FUN_141151f7c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x40;
        lVar1 = lVar2 + lVar7;
        if (*(longlong *)(lVar2 + lVar7) == param_2) {
          iVar5 = *(int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x3c) * 4);
          if (iVar5 == iVar6) {
            piVar4 = (int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x3c) * 4);
          }
          else {
            do {
              piVar4 = (int *)((longlong)iVar5 * 0x40 + lVar2 + 0x38);
              iVar5 = *piVar4;
            } while (iVar5 != iVar6);
          }
          *piVar4 = *(int *)(lVar1 + 0x38);
          FUN_14129d93e(*param_1 + lVar7 + 8);
          FUN_141152036(param_1,iVar6);
          return;
        }
        iVar6 = *(int *)(lVar1 + 0x38);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 141152036 FUN_141152036 body=116 status=ok
// SIG undefined FUN_141152036(void)

void FUN_141152036(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1411520aa FUN_1411520aa body=55 status=ok
// SIG undefined FUN_1411520aa(void)

void FUN_1411520aa(longlong *param_1)

{
  FUN_1411520e2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1411520e2 FUN_1411520e2 body=121 status=ok
// SIG undefined FUN_1411520e2(void)

void FUN_1411520e2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1447a08a2(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14115215c FUN_14115215c body=519 status=ok
// SIG undefined FUN_14115215c(void)

void FUN_14115215c(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)param_1[5] == 0) {
    uVar12 = 1;
    local_58._4_4_ = 0;
    plVar13 = local_60;
    uVar11 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    local_70 = local_60;
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
    plVar13 = local_70;
    uVar11 = (uint)local_58;
    iVar14 = (int)local_68;
  }
  plVar4 = local_60;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      FUN_140368b56((longlong)iVar6 * 0x100 + *param_1 + 0x10);
      uVar11 = ~(uint)uVar12 & uVar11;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar10 = (longlong)iVar14;
      uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4) & uVar11;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar6 <= iVar14) break;
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar10 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar10 == lVar8) goto LAB_14115227f;
        }
        iVar14 = iVar14 + (int)lVar8 + 1;
        uVar11 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14115227f:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1458130c8(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar11) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar11) {
      uVar5 = uVar11;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar13,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141152374 FUN_141152374 body=141 status=ok
// SIG undefined FUN_141152374(void)

undefined8 * FUN_141152374(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6a95f0;
  plVar3 = (longlong *)param_1[0x21e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[0x21b];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_14096c94c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141152402 FUN_141152402 body=1412 status=ok
// SIG undefined FUN_141152402(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141152402(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  size_t _Size;
  undefined8 *_Dst;
  undefined *puVar12;
  bool bVar13;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  *(undefined8 *)(param_2 + 0x30) = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                  FUN_140b31576);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,0);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,0);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      _DAT_00000000 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,0);
    }
  }
  puVar11 = &local_48;
  lVar5 = *(longlong *)(param_2 + 0x30);
  if (lVar5 == 0) {
LAB_14115291e:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    puVar12 = *(undefined **)(lVar5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                    FUN_140b31576);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar13 = puVar12 != (undefined *)0x0;
      if (puVar12 != &DAT_14c951a90 && bVar13) {
        do {
          puVar12 = *(undefined **)(puVar12 + 0x30);
          bVar13 = puVar12 != (undefined *)0x0;
          if (puVar12 == &DAT_14c951a90) break;
        } while (puVar12 != (undefined *)0x0);
      }
      if (!bVar13) goto LAB_14115291e;
    }
    else if ((*(ulonglong *)(puVar12 + 0x18) & DAT_14c951a98) == 0) goto LAB_14115291e;
    plVar6 = *(longlong **)(lVar5 + 0x78);
    _Size = (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34);
    if ((int)_Size == 0) {
      _Dst = (undefined8 *)0x0;
      puVar11 = &local_48;
    }
    else {
      lVar7 = -(_Size + 0x1e & 0xfffffffffffffff0);
      _Dst = (undefined8 *)((longlong)&local_48 + lVar7);
      puVar11 = (ulonglong *)((longlong)&local_48 + lVar7);
    }
    if ((*(byte *)((longlong)plVar6 + 0x39) & 2) == 0) {
      pcVar4 = *(code **)(*plVar6 + 0x160);
      *(undefined8 *)((longlong)puVar11 + -0x28) = 0x14115256a;
      (*pcVar4)(plVar6,_Dst);
    }
    else {
      *(undefined8 *)((longlong)puVar11 + -0x28) = 0x1411526f8;
      memset(_Dst,0,_Size);
    }
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c951a88) {
      *(undefined8 *)((longlong)puVar11 + -0x28) = 0x14115283f;
      FUN_144b3d300(&DAT_14c951a88);
      if (DAT_14c951a88 == -1) {
        *(undefined8 *)((longlong)puVar11 + -0x28) = 0x141152859;
        uVar9 = FUN_140342cba();
        *(code **)((longlong)puVar11 + -8) = FUN_1468c7f1e;
        *(undefined8 *)((longlong)puVar11 + -0x10) = uVar9;
        *(undefined8 *)((longlong)puVar11 + -0x18) = 0;
        *(undefined8 *)((longlong)puVar11 + -0x20) = 0x8001;
        *(undefined8 *)((longlong)puVar11 + -0x48) = 0x14115289c;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        *(undefined8 *)((longlong)puVar11 + -0x28) = 0x1411528ac;
        atexit(FUN_14280c819);
        *(undefined8 *)((longlong)puVar11 + -0x28) = 0x1411528b8;
        _Init_thread_footer(&DAT_14c951a88);
      }
    }
    pbVar2 = *(byte **)(param_2 + 0x20);
    if (pbVar2 == (byte *)0x0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)((longlong)puVar11 + -0x28) = 0x141152953;
      FUN_144a5ded6(param_2,_Dst);
    }
    else {
      uVar9 = *(undefined8 *)(param_2 + 0x18);
      *(byte **)(param_2 + 0x20) = pbVar2 + 1;
      pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
      if (pcVar4 == FUN_14002ddda) {
        *(undefined8 *)((longlong)puVar11 + -0x28) = 0x14115260c;
        FUN_14002ddda(uVar9,param_2,_Dst);
      }
      else if (pcVar4 == FUN_14002dfbe) {
        *(undefined8 *)((longlong)puVar11 + -0x28) = 0x1411526b2;
        FUN_14002dfbe(uVar9,param_2,_Dst);
      }
      else if (pcVar4 == (code *)&LAB_1428293cc) {
        uVar9 = *(undefined8 *)(pbVar2 + 1);
        *(byte **)(param_2 + 0x20) = pbVar2 + 9;
        *_Dst = uVar9;
      }
      else {
        *(undefined8 *)((longlong)puVar11 + -0x28) = 0x1411525fb;
        (*pcVar4)(uVar9,param_2,_Dst);
      }
    }
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if ((*(byte *)(lVar5 + 0x38) & 0x20) != 0) {
      pcVar4 = *(code **)(**(longlong **)(param_2 + 0x18) + 0x280);
      *(undefined8 *)((longlong)puVar11 + -0x28) = 0x141152969;
      uVar10 = (*pcVar4)();
      uVar1 = *(undefined2 *)(lVar5 + 0x40);
      uVar9 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)((longlong)puVar11 + -0x28) = 0x141152982;
      FUN_144a62f0c(uVar9,uVar10,uVar1);
    }
    *(undefined8 *)((longlong)puVar11 + -0x28) = 0x14115263c;
    uVar8 = FUN_14115298c(uVar3,lVar5,_Dst);
    *param_3 = uVar8;
    if ((*(byte *)((longlong)plVar6 + 0x3c) & 0x10) == 0) {
      pcVar4 = *(code **)(*plVar6 + 0x148);
      *(undefined8 *)((longlong)puVar11 + -0x28) = 0x14115265c;
      (*pcVar4)(plVar6,_Dst);
    }
  }
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar11 + -0x28) = &UNK_14115268a;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14115298c FUN_14115298c body=545 status=ok
// SIG undefined FUN_14115298c(void)

ulonglong FUN_14115298c(ulonglong *param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  void *_Dst;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  size_t _Size;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar10 = 0xffffffff;
  if (param_1 == (ulonglong *)0x0) goto LAB_141152a5b;
  bVar1 = *(byte *)(param_2 + 0x70);
  uVar6 = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
  uVar5 = DAT_14cae7098;
  iVar2 = (int)param_1[1];
  uVar10 = (ulonglong)iVar2;
  if (uVar10 == 0x7fffffff) {
    if (param_2 == 0) {
      FUN_140056680(&local_58,&DAT_149e01fe8);
    }
    else {
      FUN_1400021e4(param_2 + 0x20,&local_58);
    }
    puVar11 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar11 = local_58;
    }
    FUN_140002266(&local_48,L"Attempted add to array \'%s\' beyond the maximum supported capacity!",
                  puVar11);
    puVar11 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar11 = local_48;
    }
    FUN_1415b7ec4(puVar11,3,uVar5);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar10 = 0xffffffff;
    goto LAB_141152a5b;
  }
  plVar4 = *(longlong **)(param_2 + 0x78);
  iVar3 = *(int *)((longlong)plVar4 + 0x34);
  _Size = (size_t)iVar3;
  iVar7 = iVar2 + 1;
  *(int *)(param_1 + 1) = iVar7;
  if ((bVar1 & 1) == 0) {
    if (*(int *)((longlong)param_1 + 0xc) <= iVar2) {
      FUN_14097bbd2(param_1,iVar2,iVar3,uVar6);
      iVar7 = (int)param_1[1];
    }
    if (iVar7 != 0) {
      uVar9 = *param_1;
      goto LAB_141152a0e;
    }
LAB_141152ba7:
    _Dst = (void *)0x0;
  }
  else {
    if (*(int *)((longlong)param_1 + 0xc) <= iVar2) {
      FUN_1468c03c2(param_1,iVar2,iVar3,uVar6);
      iVar7 = (int)param_1[1];
    }
    if (iVar7 == 0) goto LAB_141152ba7;
    uVar9 = *param_1;
    if ((uVar9 & 1) != 0) {
      uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)param_1;
    }
LAB_141152a0e:
    _Dst = (void *)(uVar10 * _Size + uVar9);
  }
  if ((*(byte *)((longlong)plVar4 + 0x39) & 2) == 0) {
    (**(code **)(*plVar4 + 0x160))(plVar4);
  }
  else {
    memset(_Dst,0,_Size);
  }
  if ((int)param_1[1] == 0) {
    lVar8 = 0;
  }
  else {
    if ((bVar1 & 1) == 0) {
      uVar9 = *param_1;
    }
    else {
      uVar9 = *param_1;
      if ((uVar9 & 1) != 0) {
        uVar9 = (longlong)param_1 + ((longlong)uVar9 >> 0x18);
      }
    }
    lVar8 = uVar10 * _Size + uVar9;
  }
  (**(code **)(*plVar4 + 0x110))(plVar4,lVar8,param_3);
LAB_141152a5b:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141152bae FUN_141152bae body=47 status=ok
// SIG undefined FUN_141152bae(void)

void FUN_141152bae(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141152bde FUN_141152bde body=104 status=ok
// SIG undefined FUN_141152bde(void)

void FUN_141152bde(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char in_stack_00000040;
  
  if (((in_stack_00000040 != '\0') && (*(int *)(param_1 + 0x648) != 0)) &&
     (*(undefined4 *)(param_1 + 0x648) = 0, *(int *)(param_1 + 0x64c) < 0)) {
    FUN_145705dca(param_1 + 0x640,0);
  }
  FUN_141152c46(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 141152c46 FUN_141152c46 body=1398 status=ok
// SIG undefined FUN_141152c46(void)

void FUN_141152c46(longlong param_1,longlong *param_2,char param_3,char param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,char param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_3d8 [32];
  undefined4 local_3b8;
  undefined4 local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a0;
  undefined2 *local_398;
  undefined1 *local_390;
  undefined1 *local_388;
  code **local_380;
  undefined1 *local_378;
  code *local_370;
  longlong *local_368;
  code *local_360;
  longlong local_358;
  longlong lStack_350;
  longlong local_320;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if ((((*(longlong *)(param_1 + 0x250) == 0) || (lVar4 = FUN_1447210f0(), lVar4 == 0)) ||
      (iVar3 = FUN_14490d72a(lVar4), iVar3 == 3)) ||
     ((plVar5 = *(longlong **)(param_1 + 0x250), plVar5 == (longlong *)0x0 ||
      ((*(byte *)((longlong)plVar5 + 0x65) & 0x18) != 0x10)))) goto LAB_141152f30;
  (**(code **)(*plVar5 + 0x578))();
  if (param_2 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_1405473b6();
    if (plVar5 != (longlong *)0x0) {
      FUN_1403dfaf8(&local_358);
      FUN_14082cfa8(&local_358,*(undefined8 *)(param_1 + 0x250));
      local_320 = *(longlong *)(param_1 + 0x4a0);
      if (DAT_14c950c29 == '\x01') {
        if (local_320 == 0) {
          local_320 = 0;
        }
        else {
          FUN_1456cec3c();
          local_320 = *(longlong *)(param_1 + 0x4a0);
        }
      }
      (**(code **)(*plVar5 + 0x128))(plVar5,&local_358);
      FUN_1403dfdc4(&local_358);
      param_2 = plVar5;
      goto LAB_141152ce2;
    }
    bVar2 = false;
    bVar1 = false;
    param_2 = (longlong *)0x0;
    local_368 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)0x0;
LAB_141152ce2:
    local_368 = plVar5;
    if (param_3 == '\0') {
      bVar1 = true;
      bVar2 = false;
    }
    else {
      local_358 = 0;
      lStack_350 = 0;
      FUN_14095e510(param_2,&local_358);
      lVar8 = local_358;
      lVar7 = (longlong)(int)lStack_350;
      if (param_8 == '\0') {
        if ((int)lStack_350 != 0) {
          lVar9 = 0;
          do {
            if (*(longlong *)(lVar8 + lVar9) == 0) {
              plVar5 = (longlong *)0x0;
            }
            else {
              plVar5 = *(longlong **)(lVar8 + 8 + lVar9);
            }
            plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))();
            (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
            lVar9 = lVar9 + 0x10;
          } while (lVar7 * 0x10 != lVar9);
        }
      }
      else if ((int)lStack_350 != 0) {
        lVar9 = 0;
        do {
          if (*(longlong *)(lVar8 + lVar9) == 0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = *(longlong **)(lVar8 + 8 + lVar9);
          }
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
          lVar9 = lVar9 + 0x10;
        } while (lVar7 * 0x10 != lVar9);
      }
      if (local_358 != 0) {
        FUN_1400020a8(local_358);
      }
      bVar2 = true;
      bVar1 = true;
    }
  }
  if ((param_8 == '\0') || ((*(byte *)(param_1 + 0x470) & 4) == 0)) {
    if (bVar1) {
      lStack_350 = param_2[5];
    }
    else {
      lStack_350 = 0;
    }
    local_358 = *(longlong *)(param_1 + 0x250);
    FUN_1447cd2ec(param_5);
  }
  FUN_14095dc64(param_6,param_2);
  FUN_14095dc64(param_7,param_2);
  if (param_4 != '\0') {
    if (param_8 == '\0') {
      if (*(longlong *)(lVar4 + 0x170) != 0) {
        lVar8 = FUN_1411531be();
        plVar5 = *(longlong **)(lVar4 + 0x170);
        if ((((plVar5 != (longlong *)0x0) && (lVar8 != 0)) && (lVar7 = plVar5[2], lVar7 != 0)) &&
           ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
             lVar8 + 0x30)))) {
          lVar8 = 0x940;
          goto LAB_141152e29;
        }
      }
    }
    else if (*(longlong *)(lVar4 + 0x170) != 0) {
      lVar7 = FUN_1411531be();
      plVar5 = *(longlong **)(lVar4 + 0x170);
      if (((plVar5 != (longlong *)0x0) && (lVar7 != 0)) &&
         ((lVar9 = plVar5[2], lVar9 != 0 &&
          ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar9 + 0x38) &&
           (lVar8 = 0x938,
           *(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)))))) {
LAB_141152e29:
        (**(code **)(*plVar5 + lVar8))(plVar5,param_2);
      }
    }
  }
  if (bVar2) {
    local_358 = 0;
    lStack_350 = 0;
    FUN_14095df6a(param_2,&local_358);
    lVar8 = local_358;
    lVar7 = (longlong)(int)lStack_350;
    if (param_8 == '\0') {
      if ((int)lStack_350 != 0) {
        lVar4 = 0;
        do {
          lVar9 = *(longlong *)(lVar8 + lVar4);
          if (lVar9 != 0) {
            lVar6 = FUN_1449f3324();
            if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
              FUN_14095dc64(lVar9 + 0xd28,param_2);
            }
          }
          lVar4 = lVar4 + 8;
        } while (lVar7 * 8 != lVar4);
      }
    }
    else {
      if ((int)lStack_350 != 0) {
        lVar9 = 0;
        do {
          lVar6 = *(longlong *)(lVar8 + lVar9);
          if (lVar6 != 0) {
            if (DAT_14cb61cd0 == 0) {
              local_380 = &local_360;
              local_360 = FUN_141030f22;
              local_370 = FUN_14081d0ea;
              local_378 = &LAB_1463b31ae;
              local_388 = &LAB_1486dca4f;
              local_390 = &LAB_1464f50a6;
              local_398 = &DAT_149e063b2;
              local_3a0 = 0;
              local_3a8 = 0x10000004;
              local_3b0 = 8;
              local_3b8 = 0xd70;
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
            }
            if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
              FUN_14095dc64(lVar6 + 0xd10,param_2);
            }
          }
          lVar9 = lVar9 + 8;
        } while (lVar7 * 8 != lVar9);
      }
      if (*(longlong *)(lVar4 + 0x170) != 0) {
        lVar8 = FUN_1411531be();
        plVar5 = *(longlong **)(lVar4 + 0x170);
        if ((((plVar5 != (longlong *)0x0) && (lVar8 != 0)) && (lVar4 = plVar5[2], lVar4 != 0)) &&
           ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar4 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
             lVar8 + 0x30)))) {
          (**(code **)(*plVar5 + 0x948))(plVar5,param_2);
        }
      }
    }
    if (local_358 != 0) {
      FUN_1400020a8(local_358);
    }
  }
  if (local_368 != (longlong *)0x0) {
    FUN_14025a2c6();
  }
LAB_141152f30:
  if ((local_48 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411531be FUN_1411531be body=228 status=ok
// SIG undefined FUN_1411531be(void)

longlong FUN_1411531be(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5e5c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14592c564;
    local_38 = &LAB_1486a7c88;
    local_40 = &LAB_14578554f;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x720;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameMode",&DAT_14cb5e5c8,FUN_1464e1886);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5e5c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411532a3 FUN_1411532a3 body=783 status=ok
// SIG undefined FUN_1411532a3(void)

void FUN_1411532a3(longlong *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  code *local_78;
  longlong *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pcVar1 = (code *)*param_1;
  plVar5 = (longlong *)param_1[2];
  param_1[2] = 0;
  local_48 = (int)param_1[6];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_40 = (int)param_1[7];
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_58 = (int)param_1[4];
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_50 = (int)param_1[5];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x2c);
  if (pcVar1 != (code *)0x0) {
    *param_1 = 0;
  }
  local_78 = pcVar1;
  local_68 = plVar5;
  if (DAT_14cb97f49 == '\0') {
    if (DAT_14c872bf0 == '\x01') {
      local_80 = 0;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)&local_58;
      }
      uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
      (*pcVar1)(uVar4,&local_80);
    }
  }
  else {
    FUN_1411535b4(&DAT_14cb97f18);
    plVar2 = DAT_14cb97f38;
    if (((DAT_14cb97f30 != 0) && (-1 < (int)DAT_14cb97f2c)) && ((int)DAT_14cb97f2c < DAT_14c9647dc))
    {
      puVar6 = (undefined8 *)
               ((ulonglong)((DAT_14cb97f2c & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(DAT_14cb97f2c >> 0x10) * 8));
      if (((puVar6 != (undefined8 *)0x0) && (*(int *)(puVar6 + 2) == DAT_14cb97f30)) &&
         ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
          local_80 = *puVar6;
        }
        else {
          local_80 = 0;
        }
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)&local_58;
        }
        uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
        (*pcVar1)(uVar4,&local_80);
        FUN_14115361e(&DAT_14cb97f18);
        goto LAB_141153415;
      }
    }
    if (0 < DAT_14cb97f4c) {
      if (DAT_14cb97f4c <= (int)DAT_14cb97f40) {
        if (DAT_14cb97f51 == '\x01') {
          FUN_14581342f(DAT_14cb97f38);
          DAT_14cb97f40 = 0;
          if (DAT_14cb97f44 != 0) {
            FUN_1460019da(&DAT_14cb97f38);
          }
          DAT_14cb97f49 = '\0';
        }
        else if (DAT_14cb97f50 == '\x01') {
          FUN_14581342f(DAT_14cb97f38);
          DAT_14cb97f40 = 0;
          if (DAT_14cb97f44 != 0) {
            FUN_1460019da(&DAT_14cb97f38);
          }
        }
        else {
          if (*DAT_14cb97f38 != 0) {
            plVar5 = DAT_14cb97f38 + 4;
            if ((longlong *)DAT_14cb97f38[2] != (longlong *)0x0) {
              plVar5 = (longlong *)DAT_14cb97f38[2];
            }
            (**(code **)(*plVar5 + 0x10))();
          }
          uVar3 = 0;
          if (DAT_14cb97f40 - 1 != 0) {
            memmove(plVar2,plVar2 + 8,(longlong)(int)(DAT_14cb97f40 - 1) << 6);
            uVar3 = DAT_14cb97f40 - 1;
          }
          DAT_14cb97f40 = uVar3;
          FUN_1458134f8();
        }
      }
    }
    uVar3 = DAT_14cb97f40;
    if (DAT_14cb97f49 == '\x01') {
      lVar7 = (longlong)(int)DAT_14cb97f40;
      DAT_14cb97f40 = DAT_14cb97f40 + 1;
      if (DAT_14cb97f44 < DAT_14cb97f40) {
        FUN_14581346a(uVar3);
      }
      plVar2 = DAT_14cb97f38;
      DAT_14cb97f38[lVar7 * 8] = (longlong)pcVar1;
      plVar2[lVar7 * 8 + 2] = (longlong)local_68;
      local_68 = (longlong *)0x0;
      plVar2[lVar7 * 8 + 6] = CONCAT44(uStack_44,local_48);
      (plVar2 + lVar7 * 8 + 6)[1] = CONCAT44(uStack_3c,uStack_40);
      plVar5 = plVar2 + lVar7 * 8 + 4;
      *(undefined4 *)plVar5 = local_58;
      *(undefined4 *)((longlong)plVar5 + 4) = uStack_54;
      *(undefined4 *)(plVar5 + 1) = uStack_50;
      *(undefined4 *)((longlong)plVar5 + 0xc) = uStack_4c;
      if (plVar2[lVar7 * 8] != 0) {
        local_78 = (code *)0x0;
        goto LAB_141153432;
      }
    }
  }
LAB_141153415:
  if (local_78 != (code *)0x0) {
    plVar5 = (longlong *)&local_58;
    if (local_68 != (longlong *)0x0) {
      plVar5 = local_68;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_141153432:
  if (*param_1 != 0) {
    plVar5 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411535b4 FUN_1411535b4 body=105 status=ok
// SIG undefined FUN_1411535b4(void)

void FUN_1411535b4(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(int *)(param_1 + 0x18) != 0) && (uVar1 = *(uint *)(param_1 + 0x14), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x18))) &&
      ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
      lVar2 = *plVar3;
    }
    else {
      lVar2 = 0;
    }
    if (*(longlong *)(lVar2 + 0x2b8) == 0) {
      *(undefined8 *)(param_1 + 0x14) = 0;
      return;
    }
  }
  return;
}



// FUNCTION 14115361e FUN_14115361e body=199 status=ok
// SIG undefined FUN_14115361e(void)

int FUN_14115361e(longlong param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined1 *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  LOCK();
  bVar3 = DAT_14cb97f64 == 0;
  iVar2 = DAT_14cb97f64;
  if (bVar3) {
    DAT_14cb97f64 = 1;
    iVar2 = 0;
  }
  UNLOCK();
  if (bVar3) {
    FUN_1411535b4(param_1);
    cVar1 = FUN_140b3f358();
    if (((cVar1 != '\0') || (*(int *)(param_1 + 0x10) != 0)) || (DAT_14c872bf0 == '\x01')) {
      bifrost::telemetry::flush();
      if ((DAT_14c872bf0 != '\0') || ((cVar1 != '\0' && (1 < *(int *)(param_1 + 0x10))))) {
        local_48 = 0;
        local_38 = &PTR_LAB_149f36510;
        local_30 = &LAB_148ab67fc;
        local_58 = FUN_146bd3274;
        FUN_148ab606a(param_1);
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    iVar2 = DAT_14cb97f64;
    LOCK();
    DAT_14cb97f64 = 0;
    UNLOCK();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 1411536e6 FUN_1411536e6 body=464 status=ok
// SIG undefined FUN_1411536e6(void)

void FUN_1411536e6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_e8 [40];
  undefined **local_c0;
  undefined2 local_b8;
  uint local_b0;
  longlong local_a8;
  undefined1 local_a0;
  uint local_98;
  longlong local_90;
  undefined1 local_88;
  uint local_80;
  longlong local_78;
  undefined1 local_70;
  uint local_68;
  longlong local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((((*(int *)(param_1 + 0x68) != 0) || (*(char *)(param_1 + 0x84) != '\0')) ||
       (*(int *)(param_1 + 0x178) != 0)) ||
      ((*(char *)(param_1 + 0x194) != '\0' || (*(int *)(param_1 + 0x288) != 0)))) ||
     ((*(char *)(param_1 + 0x2a4) != '\0' ||
      ((*(int *)(param_1 + 0x398) != 0 || (*(char *)(param_1 + 0x3b4) == '\x01')))))) {
    lVar1 = FUN_14009d2a0();
    lVar2 = FUN_14038fb82();
    local_98 = 0x10000;
    local_b0 = 0x10000;
    if (*(int *)(param_1 + 0x68) == 0) {
      local_b0 = (uint)*(byte *)(param_1 + 0x84) << 0x10;
    }
    if (*(int *)(param_1 + 0x178) == 0) {
      local_98 = (uint)*(byte *)(param_1 + 0x194) << 0x10;
    }
    local_68 = 0x10000;
    local_80 = 0x10000;
    if (*(int *)(param_1 + 0x288) == 0) {
      local_80 = (uint)*(byte *)(param_1 + 0x2a4) << 0x10;
    }
    local_a8 = param_1 + 8;
    local_b8 = *(undefined2 *)(lVar2 + 0x48);
    local_b0 = local_b0 | *(ushort *)(lVar1 + 0x7e);
    local_90 = param_1 + 0x118;
    local_98 = local_98 | *(ushort *)(lVar1 + 0x80);
    local_78 = param_1 + 0x228;
    local_80 = *(ushort *)(lVar1 + 0x82) | local_80;
    local_60 = param_1 + 0x338;
    if (*(int *)(param_1 + 0x398) == 0) {
      local_68 = (uint)*(byte *)(param_1 + 0x3b4) << 0x10;
    }
    local_68 = *(ushort *)(lVar1 + 0x84) | local_68;
    local_a0 = 1;
    local_88 = 1;
    local_70 = 1;
    local_58 = 1;
    local_50 = 0;
    local_c0 = &PTR_FUN_14a4c7c80;
    local_48 = local_b8;
    FUN_1411538b8(&local_c0,param_1 + -0xf8,param_3,param_4);
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411538b8 FUN_1411538b8 body=586 status=ok
// SIG undefined FUN_1411538b8(void)

void FUN_1411538b8(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  undefined1 local_178 [152];
  undefined **local_e0;
  undefined2 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  char local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  char local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  char local_90;
  undefined4 local_88;
  undefined8 local_80;
  char local_78;
  uint local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  undefined1 local_5c;
  undefined1 local_58;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  piVar1 = *(int **)(param_3 + 8);
  if (piVar1 == (int *)0x0) {
    local_188 = 0;
    iStack_184 = 0;
    iStack_180 = 0;
    iStack_17c = 0;
  }
  else {
    local_188 = *piVar1;
    iStack_184 = piVar1[1];
    iStack_180 = piVar1[2];
    iStack_17c = piVar1[3];
  }
  lVar4 = FUN_14009d2a0();
  FUN_14038fb82();
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (lVar2 != 0) {
    lVar5 = FUN_140bc7f26();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      if (*(int *)(param_3 + 0x10) == 0) {
        FUN_145813544(param_1,local_178,*(undefined2 *)(lVar4 + 0x62),lVar2 + 0x100);
        local_198 = ((iStack_184 != 0 || local_188 != 0) || iStack_180 != 0) || iStack_17c != 0;
        FUN_145813696(local_178,&local_e0,*(undefined2 *)(lVar4 + 100));
        FUN_145813824(param_4,&local_e0);
      }
      else {
        cVar3 = FUN_145e0c77a(param_3);
        if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_1b8);
        }
      }
      goto LAB_141153a4c;
    }
  }
  local_58 = *(undefined1 *)(param_1 + 0x70);
  local_d8 = *(undefined2 *)(param_1 + 8);
  local_d0 = *(undefined4 *)(param_1 + 0x10);
  local_c0 = *(char *)(param_1 + 0x20);
  if (local_c0 == '\x01') {
    local_c8 = *(undefined8 *)(param_1 + 0x18);
  }
  local_b8 = *(undefined4 *)(param_1 + 0x28);
  local_a8 = *(char *)(param_1 + 0x38);
  if (local_a8 == '\x01') {
    local_b0 = *(undefined8 *)(param_1 + 0x30);
  }
  local_a0 = *(undefined4 *)(param_1 + 0x40);
  local_90 = *(char *)(param_1 + 0x50);
  if (local_90 == '\x01') {
    local_98 = *(undefined8 *)(param_1 + 0x48);
  }
  local_70 = (uint)CONCAT12(((iStack_184 != 0 || local_188 != 0) || iStack_180 != 0) ||
                            iStack_17c != 0,*(undefined2 *)(lVar4 + 100));
  local_88 = *(undefined4 *)(param_1 + 0x58);
  local_78 = *(char *)(param_1 + 0x68);
  if (local_78 == '\x01') {
    local_80 = *(undefined8 *)(param_1 + 0x60);
  }
  local_5c = 1;
  local_6c = local_188;
  iStack_68 = iStack_184;
  iStack_64 = iStack_180;
  iStack_60 = iStack_17c;
  local_e0 = &PTR_FUN_14a4c7d20;
  FUN_141153b1c(param_4);
LAB_141153a4c:
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141153b1c FUN_141153b1c body=268 status=ok
// SIG undefined FUN_141153b1c(void)

void FUN_141153b1c(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_141153c2a(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141153c2a FUN_141153c2a body=104 status=ok
// SIG undefined FUN_141153c2a(void)

void FUN_141153c2a(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x90,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c7d40;
  FUN_141153c92(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x88);
  *param_1 = &PTR_FUN_14a4c7d20;
  return;
}



// FUNCTION 141153c92 FUN_141153c92 body=135 status=ok
// SIG undefined FUN_141153c92(void)

void FUN_141153c92(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  cVar1 = *(char *)(param_2 + 0x24);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  cVar1 = *(char *)(param_2 + 0x30);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  cVar1 = *(char *)(param_2 + 0x3e);
  *(char *)(param_1 + 0x3e) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x3a);
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
    *(undefined8 *)(param_1 + 0x3a) = uVar2;
  }
  return;
}



// FUNCTION 141153d1e FUN_141153d1e body=228 status=ok
// SIG undefined FUN_141153d1e(void)

longlong FUN_141153d1e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb28380 == 0) {
    local_30 = &local_10;
    local_10 = FUN_146452462;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147faaf2f;
    local_40 = &LAB_145a5980c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x198;
    FUN_14081cfa3(L"/Script/StateTreeModule",L"StateTree",&DAT_14cb28380,&DAT_147faaf2e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb28380;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141153e08 FUN_141153e08 body=228 status=ok
// SIG undefined FUN_141153e08(void)

longlong FUN_141153e08(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4c970 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417963e0;
    local_38 = &LAB_1484d064c;
    local_40 = &LAB_145ef1d1b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6d0;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"LineSetComponent",&DAT_14cb4c970,FUN_146493366);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c970;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141153eee FUN_141153eee body=2010 status=ok
// SIG undefined FUN_141153eee(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_141153eee(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  uint *puVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auStack_148 [40];
  longlong *local_120;
  longlong *local_118;
  longlong local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_e0 [3];
  longlong *local_c8;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 local_6c;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar15 = *(uint *)(param_1 + 0x3b0);
  iVar6 = (int)param_2[1];
  if ((uint)(iVar6 - *(int *)((longlong)param_2 + 0x34)) < uVar15) {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar15);
    }
    if (iVar6 < (int)uVar15) {
      uVar14 = uVar15 - iVar6;
      iVar20 = *(int *)((longlong)param_2 + 0xc);
      iVar16 = iVar6;
      if (iVar20 < (int)uVar15) {
        FUN_141154a24(param_2);
        iVar16 = (int)param_2[1];
        iVar20 = *(int *)((longlong)param_2 + 0xc);
      }
      *(uint *)(param_2 + 1) = iVar16 + uVar14;
      if ((uint)(iVar20 - iVar16) < uVar14) {
        FUN_1457076b0(param_2);
      }
      if (iVar16 < (int)uVar15) {
        lVar10 = *param_2;
        iVar20 = *(int *)((longlong)param_2 + 0x34);
        puVar11 = (undefined4 *)((ulonglong)uVar15 * 0x70 + lVar10 + -0x6c);
        uVar17 = (ulonglong)uVar15;
        do {
          uVar19 = uVar17 - 1;
          if (iVar20 == 0) {
            iVar20 = (int)uVar17 + -1;
          }
          else {
            *(int *)(lVar10 + (longlong)(int)param_2[6] * 0x70) = (int)uVar17 + -1;
            iVar20 = (int)uVar19;
          }
          uVar7 = 0xffffffff;
          puVar11[-1] = 0xffffffff;
          if (0 < *(int *)((longlong)param_2 + 0x34)) {
            uVar7 = (undefined4)param_2[6];
          }
          *puVar11 = uVar7;
          *(int *)(param_2 + 6) = iVar20;
          iVar20 = *(int *)((longlong)param_2 + 0x34) + 1;
          *(int *)((longlong)param_2 + 0x34) = iVar20;
          puVar11 = puVar11 + -0x1c;
          uVar17 = uVar19;
        } while ((longlong)iVar16 < (longlong)uVar19);
      }
      if (iVar6 == 0) {
        plVar22 = param_2 + 2;
        *(uint *)(param_2 + 5) = uVar14;
        uVar21 = uVar14 + 0x1f >> 5;
        if (*(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 5 < uVar21) {
          FUN_14499171c(plVar22,0,uVar21);
          *(uint *)((longlong)param_2 + 0x2c) = uVar14 + 0x1f & 0xffffffe0;
        }
        plVar9 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar9 = plVar22;
        }
        if (uVar14 < 0x101) {
          uVar21 = uVar21 + (uVar21 == 0);
        }
        memset(plVar9,0,(ulonglong)(uVar21 << 2));
        iVar6 = (int)param_2[5];
        iVar20 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar20 = iVar6;
        }
        if (iVar6 % 0x20 != 0) {
          if ((longlong *)param_2[4] != (longlong *)0x0) {
            plVar22 = (longlong *)param_2[4];
          }
          bVar8 = -(char)(iVar6 % 0x20);
          *(uint *)((longlong)plVar22 + (longlong)(iVar20 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar22 + (longlong)(iVar20 >> 5) * 4) << (bVar8 & 0x1f))
               >> (bVar8 & 0x1f);
        }
      }
      else if (-1 < (int)uVar14) {
        uVar7 = FUN_144a54ea4(param_2 + 2,uVar14);
        FUN_1447c6044(param_2 + 2,uVar7,uVar14);
      }
    }
    iVar6 = 1;
    if (3 < uVar15) {
      uVar15 = (uVar15 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if (((int)param_2[9] == 0) || ((int)param_2[9] < iVar6)) {
      *(int *)(param_2 + 9) = iVar6;
      FUN_141154a90(param_2);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x3b0) != 0) {
    plVar22 = *(longlong **)(param_1 + 0x3a8);
    plVar9 = plVar22 + (longlong)*(int *)(param_1 + 0x3b0) * 8;
    do {
      local_e0[1] = 0;
      local_e0[2] = 0;
      local_c8 = (longlong *)0x0;
      local_c0 = plVar22[1];
      lStack_b8 = plVar22[2];
      local_b0 = plVar22[3];
      local_a8 = (undefined4)plVar22[4];
      uStack_a4 = *(undefined4 *)((longlong)plVar22 + 0x24);
      uStack_a0 = (undefined4)plVar22[5];
      uStack_9c = *(undefined4 *)((longlong)plVar22 + 0x2c);
      local_98 = (undefined4)plVar22[6];
      uStack_94 = *(undefined4 *)((longlong)plVar22 + 0x34);
      uStack_90 = (undefined4)plVar22[7];
      uStack_8c = *(undefined4 *)((longlong)plVar22 + 0x3c);
      local_e0[0] = *(longlong *)
                     (*(longlong *)(*(longlong *)*plVar22 + 200) +
                     (longlong)(int)((longlong *)*plVar22)[1] * 8);
      local_108 = local_e0;
      local_100 = local_e0 + 1;
      FUN_1411546ca(param_2,&local_88,&local_108);
      if ((local_e0[0] != 0) && (*(int *)(local_e0[0] + 0x1c) == 0xc)) {
        local_118 = *(longlong **)(**(longlong **)(local_e0[0] + 0x148) + 0x608);
        lVar24 = (longlong)(int)(*(longlong **)(local_e0[0] + 0x148))[1] * 0x50;
        lVar10 = (longlong)local_118 + lVar24;
        local_120 = (longlong *)(lVar10 + 0x10);
        local_88 = (longlong *)&DAT_100000000;
        local_78 = 0xffffffff;
        local_70 = 0;
        local_80 = local_120;
        if (*(int *)(lVar10 + 0x28) != 0) {
          FUN_1449c0562(&local_88);
        }
        local_118 = (longlong *)((longlong)local_118 + lVar24);
        local_f0 = local_78;
        local_e8 = local_70;
        local_e4 = local_6c;
        local_100 = local_88;
        local_f8 = local_80;
        uVar15 = *(uint *)(local_118 + 5);
        local_88 = (longlong *)CONCAT44(1 << ((byte)uVar15 & 0x1f),(int)uVar15 >> 5);
        local_80 = local_120;
        local_78 = CONCAT44(uVar15,-1 << ((byte)uVar15 & 0x1f));
        local_70 = uVar15 & 0xffffffe0;
        local_108 = local_118;
        if (*(uint *)(local_118 + 5) != uVar15) {
          FUN_1449c0562(&local_88);
          uVar15 = local_78._4_4_;
        }
        local_120 = local_80;
        if ((local_108 != local_118 || local_f8 != local_80) || local_f0._4_4_ != uVar15) {
          do {
            local_110 = *(longlong *)(*local_108 + (longlong)(int)local_f0._4_4_ * 0x10);
            if (*(int *)(local_110 + 0x1c) == 2) {
              local_88 = &local_110;
              local_80 = local_e0 + 1;
              FUN_1411546ca(param_2,local_64);
            }
            local_f0 = CONCAT44(local_f0._4_4_,(uint)local_f0 & ~local_100._4_4_);
            FUN_1449c0562(&local_100);
          } while (local_108 != local_118 || (local_f8 != local_120 || local_f0._4_4_ != uVar15));
        }
      }
      plVar5 = local_c8;
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar22 = plVar22 + 8;
    } while (plVar22 != plVar9);
  }
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  if (*(int *)(param_1 + 0x3b4) < 0) {
    FUN_146ef12de(param_1 + 0x3a8);
  }
  if (*(int *)(param_1 + 0x360) != *(int *)(param_1 + 0x38c)) {
    lVar10 = param_1 + 0x390;
    if (*(longlong *)(param_1 + 0x398) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x398);
    }
    iVar6 = *(int *)(param_1 + 0x3a0);
    iVar20 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar20 = iVar6;
    }
    if (*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x38c) < iVar20 >> 2) {
      iVar6 = *(int *)(param_1 + 0x380);
      if (iVar6 == 0) {
        uVar17 = 0;
        uVar19 = 1;
        iVar20 = 0;
        iVar16 = 0;
      }
      else {
        puVar18 = *(uint **)(param_1 + 0x378);
        if (*(uint **)(param_1 + 0x378) == (uint *)0x0) {
          puVar18 = (uint *)(param_1 + 0x368);
        }
        uVar15 = *puVar18;
        if (uVar15 == 0) {
          iVar20 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar20 = iVar6 + -1;
          }
          uVar17 = 0;
          uVar19 = (ulonglong)(uint)(iVar20 >> 5);
          if (iVar20 >> 5 < 1) {
            uVar19 = uVar17;
          }
          iVar16 = 0;
          do {
            if (uVar19 == uVar17) goto LAB_1411542c4;
            iVar16 = iVar16 + 0x20;
            uVar15 = puVar18[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar15 == 0);
        }
        else {
          uVar17 = 0;
          iVar16 = 0;
        }
        uVar19 = (ulonglong)(-uVar15 & uVar15);
        uVar3 = uVar19 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar20 = (iVar16 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar20) {
          iVar20 = iVar6;
        }
      }
      if (iVar20 != iVar6) {
        uVar15 = 0xffffffff;
        do {
          *(undefined4 *)
           (lVar10 + (longlong)
                     *(int *)(*(longlong *)(param_1 + 0x358) + 0x14 + (longlong)iVar20 * 0x18) * 4)
               = 0xffffffff;
          uVar15 = ~(uint)uVar19 & uVar15;
          puVar18 = *(uint **)(param_1 + 0x378);
          if (*(uint **)(param_1 + 0x378) == (uint *)0x0) {
            puVar18 = (uint *)(param_1 + 0x368);
          }
          iVar4 = *(int *)(param_1 + 0x380);
          iVar20 = (int)uVar17;
          lVar24 = (longlong)iVar20;
          uVar14 = puVar18[lVar24] & uVar15;
          if (uVar14 == 0) {
            iVar12 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar12 = iVar4 + -1;
            }
            iVar12 = iVar12 >> 5;
            iVar16 = iVar16 + 0x20;
            iVar13 = iVar12;
            if (iVar12 < iVar20) {
              iVar13 = iVar20;
            }
            if (iVar20 < iVar12) {
              lVar23 = 0;
              do {
                uVar14 = puVar18[lVar24 + lVar23 + 1];
                if (uVar14 != 0) {
                  uVar17 = (ulonglong)(iVar20 + (int)lVar23 + 1);
                  uVar15 = 0xffffffff;
                  goto LAB_14115428f;
                }
                iVar16 = iVar16 + 0x20;
                lVar23 = lVar23 + 1;
              } while (iVar13 - lVar24 != lVar23);
              uVar15 = 0xffffffff;
              iVar20 = iVar13;
            }
            uVar17 = (ulonglong)(iVar20 + 1);
            iVar20 = iVar4;
          }
          else {
LAB_14115428f:
            uVar19 = (ulonglong)(-uVar14 & uVar14);
            uVar3 = uVar19 * 2 + 1;
            lVar24 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            iVar20 = (iVar16 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
            if (iVar4 <= iVar20) {
              iVar20 = iVar4;
            }
          }
        } while (iVar20 != iVar6);
      }
    }
    else if (0 < iVar6) {
      lVar24 = 0;
      do {
        *(undefined4 *)(lVar10 + lVar24 * 4) = 0xffffffff;
        lVar24 = lVar24 + 1;
      } while (lVar24 < *(int *)(param_1 + 0x3a0));
    }
LAB_1411542c4:
    *(undefined4 *)(param_1 + 0x360) = 0;
    if (*(int *)(param_1 + 0x364) < 0) {
      FUN_144727cd0(param_1 + 0x358,0);
    }
    *(undefined8 *)(param_1 + 0x388) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x380) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411546ca FUN_1411546ca body=721 status=ok
// SIG undefined FUN_1411546ca(void)

int * FUN_1411546ca(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  ulonglong *_Src;
  void *_Dst;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar24 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar24 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar24) {
      FUN_1457076b0(param_1,iVar24);
    }
    lVar26 = (longlong)iVar24;
    iVar20 = FUN_144a54ea4(param_1 + 2,1);
    plVar21 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar21 = param_1 + 2;
    }
    iVar19 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar19 = iVar20;
    }
    bVar7 = (byte)iVar20 & 0x1f;
    puVar1 = (uint *)((longlong)plVar21 + (longlong)(iVar19 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar24 = (int)param_1[6];
    lVar26 = (longlong)iVar24;
    iVar20 = *(int *)(*param_1 + 4 + lVar26 * 0x70);
    *(int *)(param_1 + 6) = iVar20;
    iVar19 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar19;
    if (iVar19 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x70) = 0xffffffff;
    }
  }
  plVar21 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar21 = (longlong *)param_1[4];
  }
  iVar20 = iVar24 + 0x1f;
  if (-1 < iVar24) {
    iVar20 = iVar24;
  }
  puVar1 = (uint *)((longlong)plVar21 + (longlong)(iVar20 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar24 & 0x1f);
  iVar20 = 1;
  lVar4 = *param_1;
  lVar26 = lVar26 * 0x70;
  _Src = (ulonglong *)(lVar4 + lVar26);
  puVar5 = (undefined8 *)param_3[1];
  uVar22 = *(ulonglong *)*param_3;
  *(ulonglong *)(lVar4 + lVar26) = uVar22;
  *(undefined8 *)(lVar4 + 0x10 + lVar26) = *puVar5;
  *(undefined8 *)(lVar4 + 0x18 + lVar26) = puVar5[1];
  lVar6 = puVar5[2];
  *(longlong *)(lVar4 + 0x20 + lVar26) = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    uVar22 = *_Src;
  }
  _Src[0xb] = puVar5[9];
  uVar8 = *(undefined4 *)(puVar5 + 3);
  uVar9 = *(undefined4 *)((longlong)puVar5 + 0x1c);
  uVar10 = *(undefined4 *)(puVar5 + 4);
  uVar11 = *(undefined4 *)((longlong)puVar5 + 0x24);
  uVar12 = *(undefined4 *)(puVar5 + 5);
  uVar13 = *(undefined4 *)((longlong)puVar5 + 0x2c);
  uVar14 = *(undefined4 *)(puVar5 + 6);
  uVar15 = *(undefined4 *)((longlong)puVar5 + 0x34);
  uVar16 = *(undefined4 *)((longlong)puVar5 + 0x3c);
  uVar17 = *(undefined4 *)(puVar5 + 8);
  uVar18 = *(undefined4 *)((longlong)puVar5 + 0x44);
  *(undefined4 *)(_Src + 9) = *(undefined4 *)(puVar5 + 7);
  *(undefined4 *)((longlong)_Src + 0x4c) = uVar16;
  *(undefined4 *)(_Src + 10) = uVar17;
  *(undefined4 *)((longlong)_Src + 0x54) = uVar18;
  *(undefined4 *)(_Src + 7) = uVar12;
  *(undefined4 *)((longlong)_Src + 0x3c) = uVar13;
  *(undefined4 *)(_Src + 8) = uVar14;
  *(undefined4 *)((longlong)_Src + 0x44) = uVar15;
  *(undefined4 *)(_Src + 5) = uVar8;
  *(undefined4 *)((longlong)_Src + 0x2c) = uVar9;
  *(undefined4 *)(_Src + 6) = uVar10;
  *(undefined4 *)((longlong)_Src + 0x34) = uVar11;
  *(undefined4 *)(_Src + 0xc) = 0xffffffff;
  uVar23 = ((uint)(uVar22 >> 0x14) & 0xffff ^ (uint)(uVar22 >> 4)) * -0x7a143595;
  uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
  uVar23 = uVar23 >> 0x10 ^ uVar23;
  uVar25 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar25 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar21 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar21 = (longlong *)param_1[8];
      }
      iVar19 = *(int *)((longlong)plVar21 + (ulonglong)((int)param_1[9] - 1U & uVar23) * 4);
      if (iVar19 != -1) {
        do {
          _Dst = (void *)(*param_1 + (longlong)iVar19 * 0x70);
          if (*(ulonglong *)(*param_1 + (longlong)iVar19 * 0x70) == uVar22) {
            plVar21 = *(longlong **)((longlong)_Dst + 0x20);
            if (plVar21 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar21 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar3 = (int *)((longlong)plVar21 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
            }
            memmove(_Dst,_Src,0x60);
            FUN_14115499c(param_1,iVar24,1);
            iVar24 = iVar19;
            goto LAB_1411548d3;
          }
          iVar19 = *(int *)((longlong)_Dst + 0x60);
        } while (iVar19 != -1);
      }
    }
    if (3 < uVar25) {
      uVar22 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
      lVar26 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      iVar20 = 1 << ((byte)lVar26 & 0x1f);
    }
  }
  if (((int)uVar25 < 1) || (iVar20 <= (int)param_1[9])) {
    uVar23 = (int)param_1[9] - 1U & uVar23;
    *(uint *)((longlong)_Src + 100) = uVar23;
    plVar21 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar21 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xc) =
         *(undefined4 *)
          ((longlong)plVar21 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar23) * 4);
    plVar21 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar21 = param_1 + 7;
    }
    *(int *)((longlong)plVar21 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar23) * 4) =
         iVar24;
  }
  else {
    *(int *)(param_1 + 9) = iVar20;
    FUN_141154a90(param_1);
  }
LAB_1411548d3:
  *param_2 = iVar24;
  return param_2;
}



// FUNCTION 14115499c FUN_14115499c body=136 status=ok
// SIG undefined FUN_14115499c(void)

void FUN_14115499c(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x70 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0x1c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141154a24 FUN_141154a24 body=107 status=ok
// SIG undefined FUN_141154a24(void)

void FUN_141154a24(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x70,0x10);
  }
  return;
}



// FUNCTION 141154a90 FUN_141154a90 body=484 status=ok
// SIG undefined FUN_141154a90(void)

void FUN_141154a90(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x70;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 100 + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x60 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141154c75 FUN_141154c75 body=81 status=ok
// SIG undefined FUN_141154c75(void)

void FUN_141154c75(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x58);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xb] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141154cc6 FUN_141154cc6 body=302 status=ok
// SIG undefined FUN_141154cc6(void)

longlong * FUN_141154cc6(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = FUN_141154df6(param_2);
  if (lVar1 == 0) goto LAB_141154cfc;
  if (DAT_14cbc8d78 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_148d11faa(DAT_14cbc8d78,lVar1);
  }
  uVar2 = FUN_140b7bb2c();
  lVar3 = FUN_14477b664(uVar2);
  param_1[1] = lVar3;
  lVar3 = FUN_140b7bb2c();
  uVar2 = FUN_140b7bb2c();
  FUN_1402d1bfa(&local_30,uVar2,lVar1);
  if (*param_1 != local_30) {
    param_1[2] = 0;
  }
  *param_1 = local_30;
  lVar4 = FUN_140b7bb2c();
  if (lVar3 == 0) {
LAB_141154d9f:
    lVar4 = lVar3;
  }
  else if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)) goto LAB_141154d9f;
  if (param_1[1] != lVar4) {
    param_1[2] = 0;
  }
  uVar2 = FUN_14477b664(lVar4);
  lVar3 = FUN_14477b664(uVar2);
  param_1[1] = lVar3;
  if (lVar3 != 0 && local_30 != 0) {
    param_1[2] = lVar1;
  }
LAB_141154cfc:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141154df6 FUN_141154df6 body=1142 status=ok
// SIG undefined FUN_141154df6(void)

longlong FUN_141154df6(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong lStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    lVar2 = FUN_141155354();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) && (param_1[0x4bf] != 0)) && ((int)param_1[0x4c0] - 1U < 0xfffffffe)) {
      local_38 = param_1[0x4bf];
      uVar3 = FUN_14054e994();
      local_30 = FUN_14477b664(uVar3);
      lStack_28 = 0;
      if (((local_30 == 0) || (plVar4 = *(longlong **)(local_30 + 0xb8), plVar4 == (longlong *)0x0))
         || (cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar1 == '\0')) goto LAB_141154e3c;
      uVar3 = (**(code **)(*plVar4 + 0x110))(plVar4);
      lStack_28 = FUN_144aff482(uVar3,&local_38);
      if (lStack_28 == 0) goto LAB_141154e3c;
      goto joined_r0x000141154f35;
    }
LAB_141154e3c:
    uVar3 = FUN_140d4a144();
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_140d4a144();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      lVar2 = 0;
      if ((plVar4 == plVar5) || (plVar5 == (longlong *)0x0)) goto LAB_141154f9b;
      uVar3 = (**(code **)(*plVar5 + 0x20))();
      uVar6 = FUN_14115526e();
      lVar7 = FUN_140d4a0a6(uVar3,uVar6);
      if (lVar7 != 0) {
        local_38 = *(longlong *)(lVar7 + 0xb8);
        local_30 = 0;
        lStack_28 = 0;
        uVar3 = FUN_14054e994();
        local_30 = FUN_14477b664(uVar3);
        if (lStack_28 == 0) {
          if ((local_30 != 0) && (local_38 != 0)) {
            plVar4 = *(longlong **)(local_30 + 0xb8);
            if ((plVar4 == (longlong *)0x0) ||
               (cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar1 == '\0')) {
              lStack_28 = 0;
            }
            else {
              uVar3 = (**(code **)(*plVar4 + 0x110))(plVar4);
              lStack_28 = FUN_144aff482(uVar3,&local_38);
              if (lStack_28 != 0) goto joined_r0x000141154f35;
            }
          }
          lVar8 = *(longlong *)(lVar7 + 0xa8);
          if (lVar8 == 0) {
            uVar3 = FUN_140b7bb2c();
            lVar8 = FUN_14477b664(uVar3);
            *(longlong *)(lVar7 + 0xa8) = lVar8;
          }
          plVar4 = (longlong *)(lVar7 + 0xa0);
          lVar2 = *(longlong *)(lVar7 + 0xb0);
          if (lVar2 == 0) {
            lVar2 = 0;
            if ((lVar8 == 0) || (*plVar4 == 0)) goto LAB_141154f9b;
            plVar5 = *(longlong **)(lVar8 + 0xb8);
            if ((plVar5 == (longlong *)0x0) ||
               (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 == '\0')) {
              *(undefined8 *)(lVar7 + 0xb0) = 0;
            }
            else {
              uVar3 = (**(code **)(*plVar5 + 0x110))(plVar5);
              lVar2 = FUN_144aff482(uVar3,plVar4);
              *(longlong *)(lVar7 + 0xb0) = lVar2;
              if (lVar2 != 0) {
                lVar8 = *(longlong *)(lVar7 + 0xa8);
                goto LAB_141154f7b;
              }
            }
          }
          else {
LAB_141154f7b:
            if (lVar8 == 0) {
              uVar3 = FUN_140b7bb2c();
              lVar8 = FUN_14477b664(uVar3);
              *(longlong *)(lVar7 + 0xa8) = lVar8;
              lVar2 = *(longlong *)(lVar7 + 0xb0);
              if (((lVar2 == 0) && (lVar2 = 0, lVar8 != 0)) && (*plVar4 != 0)) {
                plVar5 = *(longlong **)(lVar8 + 0xb8);
                if ((plVar5 == (longlong *)0x0) ||
                   (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 == '\0')) {
                  lVar2 = 0;
                }
                else {
                  uVar3 = (**(code **)(*plVar5 + 0x110))(plVar5);
                  lVar2 = FUN_144aff482(uVar3,plVar4);
                }
                *(longlong *)(lVar7 + 0xb0) = lVar2;
              }
            }
            if ((*(longlong *)(lVar2 + 0x30) != 0) && (*(int *)(lVar2 + 0x38) - 1U < 0xfffffffe)) {
              lVar8 = *(longlong *)(lVar7 + 0xa8);
              if (lVar8 == 0) {
                uVar3 = FUN_140b7bb2c();
                lVar8 = FUN_14477b664(uVar3);
                *(longlong *)(lVar7 + 0xa8) = lVar8;
                lVar2 = *(longlong *)(lVar7 + 0xb0);
              }
              if (lVar2 == 0) {
                *(undefined8 *)(lVar7 + 0xb0) = 0;
                lVar2 = 0;
                if ((lVar8 != 0) && (*(longlong *)(lVar7 + 0xa0) != 0)) {
                  plVar5 = *(longlong **)(lVar8 + 0xb8);
                  if ((plVar5 == (longlong *)0x0) ||
                     (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 == '\0')) {
                    lVar2 = 0;
                  }
                  else {
                    uVar3 = (**(code **)(*plVar5 + 0x110))(plVar5);
                    lVar2 = FUN_144aff482(uVar3,plVar4);
                  }
                  *(longlong *)(lVar7 + 0xb0) = lVar2;
                }
              }
              lVar2 = FUN_1408d7900(lVar2 + 0x30);
              goto LAB_141154f9b;
            }
          }
        }
        else {
joined_r0x000141154f35:
          lVar2 = lStack_28;
          if (local_30 != 0) goto LAB_141154f9b;
          uVar3 = FUN_14054e994();
          local_30 = FUN_14477b664(uVar3);
          lVar2 = lStack_28;
          if (lStack_28 != 0) goto LAB_141154f9b;
          lVar2 = 0;
          if ((local_30 == 0) || (lVar2 = 0, local_38 == 0)) goto LAB_141154f9b;
          plVar4 = *(longlong **)(local_30 + 0xb8);
          if ((plVar4 != (longlong *)0x0) &&
             (cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar1 != '\0')) {
            uVar3 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar2 = FUN_144aff482(uVar3,&local_38);
            goto LAB_141154f9b;
          }
        }
      }
    }
  }
  lVar2 = 0;
LAB_141154f9b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14115526e FUN_14115526e body=228 status=ok
// SIG undefined FUN_14115526e(void)

longlong FUN_14115526e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba7990 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141843f54;
    local_38 = &LAB_148bf6f95;
    local_40 = FUN_1418c747b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x120;
    FUN_14081cfa3(L"/Script/OakGame",L"OakChallengeCollectibleScript",&DAT_14cba7990,FUN_1465cd45c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba7990;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141155354 FUN_141155354 body=228 status=ok
// SIG undefined FUN_141155354(void)

longlong FUN_141155354(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba78f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148bf6ba3;
    local_40 = &LAB_1461dbb3a;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2630;
    FUN_14081cfa3(L"/Script/OakGame",L"OakChallengeCollectible",&DAT_14cba78f0,&DAT_148bf6ba2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba78f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115543a FUN_14115543a body=426 status=ok
// SIG undefined FUN_14115543a(void)

void FUN_14115543a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1411555e6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411555e6 FUN_1411555e6 body=117 status=ok
// SIG undefined FUN_1411555e6(void)

void FUN_1411555e6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1407afa82();
  if (lVar1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x755f) = 1;
  if ((*(longlong *)(lVar1 + 0xb20) != 0) && ((*(byte *)(lVar1 + 0x3e0) & 2) != 0)) {
    if (param_2 != 0) {
      *(undefined1 *)(lVar1 + 0xb2d) = 1;
      *(longlong *)(lVar1 + 0x9b0) = param_2;
    }
    FUN_1412bbaf4(lVar1 + 0x9b0,lVar1 + 0x8c8);
    return;
  }
  return;
}



// FUNCTION 14115565c FUN_14115565c body=432 status=ok
// SIG undefined FUN_14115565c(void)

void FUN_14115565c(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (int)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa50))(param_1,local_1c != 0);
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141155828 FUN_141155828 body=221 status=ok
// SIG undefined FUN_141155828(void)

longlong FUN_141155828(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacdd08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14795cfd5;
    local_40 = FUN_1463ad0e5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"AudioBus",&DAT_14cacdd08,&DAT_14795cfd4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacdd08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141155906 FUN_141155906 body=221 status=ok
// SIG undefined FUN_141155906(void)

longlong FUN_141155906(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc1ce78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1494c8e3b;
    local_40 = FUN_14673b50a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusNodeGraph",&DAT_14cc1ce78,FUN_14673b4e8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1ce78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411559e4 FUN_1411559e4 body=80 status=ok
// SIG undefined FUN_1411559e4(void)

undefined8 * FUN_1411559e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1d79f0;
  FUN_1407e878c(param_1 + 3);
  FUN_1447cd778(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141155a34 FUN_141155a34 body=180 status=ok
// SIG undefined FUN_141155a34(void)

void FUN_141155a34(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b2ecfb0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x678bcdb;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x678bcdb;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x678bcdb;
  param_1[0xe] = 0;
  param_1[0xf] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *(byte *)((longlong)param_1 + 0x84) = *(byte *)((longlong)param_1 + 0x84) & 0xfe;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf00000d0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  return;
}



// FUNCTION 141155ae8 FUN_141155ae8 body=2213 status=ok
// SIG undefined FUN_141155ae8(void)

void FUN_141155ae8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_141155bd3;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_141155bd3:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_141155ca0;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_141155ca0:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_141155d6d;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_141155d6d:
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1405ebbb2;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_44);
            goto LAB_141155e39;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_44) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_44,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_44,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_44,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_44,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
LAB_141155e39:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14115638e(param_1,local_38);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115638e FUN_14115638e body=64 status=ok
// SIG undefined FUN_14115638e(void)

void FUN_14115638e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x718);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2);
    if (cVar2 != '\0') {
      FUN_145813cc2(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1411563ce FUN_1411563ce body=67 status=ok
// SIG undefined FUN_1411563ce(void)

void FUN_1411563ce(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141156412(param_1 + 0x4b0);
  FUN_140c89c96(param_1 + 0x510,param_2,param_3);
  FUN_140c89b70(param_1,param_2,param_3);
  return;
}



// FUNCTION 141156412 FUN_141156412 body=1333 status=ok
// SIG undefined FUN_141156412(void)

void FUN_141156412(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong **pplVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined1 auStack_1b8 [40];
  longlong local_190;
  int local_188;
  undefined4 local_184;
  longlong *local_180;
  longlong *local_178;
  undefined1 local_16c [4];
  longlong *local_168;
  longlong **local_160;
  undefined2 local_148;
  undefined1 local_140;
  char local_138;
  longlong *local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8 [12];
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (((param_3 == (longlong *)0x0) || ((char)param_3[0xc] != '\x01')) ||
     ((*(byte *)((longlong)param_3 + 0x44) & 1) == 0)) goto LAB_14115644e;
  plVar4 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b967720;
  plVar1 = plVar4 + 2;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  local_108 = plVar1;
  plStack_100 = plVar4;
  FUN_148d13e76(&local_108,plVar1);
  plVar10 = plStack_100;
  local_180 = plVar1;
  local_178 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_100 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_100)(plStack_100);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  plVar1 = local_180;
  if (local_180 != (longlong *)0x0) {
    FUN_14485c47a(local_180 + 2,param_3);
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = (longlong *)0x0;
    plStack_100 = (longlong *)0x0;
    local_c8 = 0;
    puVar6 = &DAT_14c846480;
    puVar11 = local_b8;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar11 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar11 = puVar11 + 1;
    }
    local_58 = 0;
    lVar8 = FUN_14050c909();
    plStack_100 = *(longlong **)(lVar8 + 0x4e0);
    local_f8 = *(undefined8 *)(lVar8 + 0x4e8);
    uStack_f0 = *(undefined8 *)(lVar8 + 0x4f0);
    FUN_144a787a6(&local_e8,lVar8 + 0x4f8);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_140272888();
    }
    FUN_14485c47a(&local_d8,uVar5);
    (**(code **)(*param_3 + 0x2b0))(param_3,&local_168);
    pplVar9 = &local_168;
    puVar6 = local_b8;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar6 = *pplVar9;
      pplVar9 = pplVar9 + 1;
      puVar6 = puVar6 + 1;
    }
    lVar8 = FUN_14050c909();
    local_58 = *(undefined1 *)(lVar8 + 0x548);
    lVar8 = FUN_14050c909();
    local_190 = 0;
    iVar3 = *(int *)(lVar8 + 0x510);
    uVar5 = *(undefined8 *)(lVar8 + 0x508);
    local_188 = iVar3;
    if (iVar3 == 0) {
      local_184 = 0;
    }
    else {
      FUN_148694c40(&local_190,iVar3,0);
      FUN_148694ca2(local_190,uVar5,iVar3);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbc8340) && (FUN_144b3d300(&DAT_14cbc8340), DAT_14cbc8340 == -1)) {
      FUN_1446ddc76(&DAT_14cbc8338,"Radius",1);
      _Init_thread_footer(&DAT_14cbc8340);
    }
    puVar6 = (undefined8 *)FUN_148d109de(&local_190);
    *puVar6 = DAT_14cbc8338;
    uVar13 = (**(code **)(*param_3 + 0x2c0))(param_3);
    local_168 = (longlong *)0x0;
    local_148 = 4;
    local_160 = (longlong **)CONCAT44(local_160._4_4_,uVar13);
    local_140 = 3;
    local_138 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    FUN_1403719a4(puVar6 + 1,&local_168);
    FUN_144a2da94(&local_168);
    plVar7 = (longlong *)FUN_14001cc68(400);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14b967740;
    plVar10 = plVar7 + 2;
    memset(plVar10,0,0x180);
    plVar4 = &DAT_14c846480;
    plVar12 = plVar7 + 0xe;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *plVar12 = *plVar4;
      plVar4 = plVar4 + 1;
      plVar12 = plVar12 + 1;
    }
    plVar7[0x2a] = 0;
    plVar7[0x1c] = 0;
    plVar7[0x1d] = 0;
    plVar7[0x1e] = 0;
    plVar7[0x1f] = 0;
    plVar7[0x20] = 0;
    plVar7[0x21] = 0;
    plVar7[0x22] = 0;
    plVar7[0x23] = 0;
    plVar7[0x24] = 0;
    plVar7[0x25] = 0;
    plVar7[0x26] = 0;
    plVar7[0x27] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x15c) = 0xffffffff00000080;
    plVar7[0x2e] = 0;
    plVar7[0x30] = 0;
    local_168 = plVar10;
    local_160 = (longlong **)plVar7;
    FUN_148d13fb6(&local_168,plVar10);
    if (plVar7 == (longlong *)0x0) {
      plVar1[3] = 0x10;
      plVar10 = (longlong *)plVar1[4];
      if (plVar10 != (longlong *)0x0) {
        plVar1[4] = 0;
LAB_1411568cc:
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
joined_r0x0001411568bc:
          if (iVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      local_180[3] = (longlong)plVar10;
      plVar10 = (longlong *)local_180[4];
      if (plVar7 == plVar10) {
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
          plVar10 = plVar7;
          goto joined_r0x0001411568bc;
        }
      }
      else {
        local_180[4] = (longlong)plVar7;
        if (plVar10 != (longlong *)0x0) goto LAB_1411568cc;
      }
    }
    pplVar9 = local_160;
    if (local_160 != (longlong **)0x0) {
      LOCK();
      plVar1 = (longlong *)(local_160 + 1);
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (*(code *)**local_160)(local_160);
        LOCK();
        piVar2 = (int *)((longlong)pplVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)((longlong)*pplVar9 + 0x10))(pplVar9);
        }
      }
    }
    if (local_180[3] != 0) {
      FUN_14882945a(local_180[3],&local_108,&local_190);
    }
    local_160 = &local_180;
    local_168 = param_2;
    FUN_148d14056(param_1 + 8,local_16c);
    FUN_140f68e5d(local_190,local_188);
    if (local_190 != 0) {
      FUN_1400020a8();
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  plVar1 = local_178;
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_178 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_14115644e:
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141156948 FUN_141156948 body=20 status=ok
// SIG undefined FUN_141156948(void)

void FUN_141156948(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141156959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e39474);
  return;
}



// FUNCTION 14115695c FUN_14115695c body=141 status=ok
// SIG undefined FUN_14115695c(void)

void FUN_14115695c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145814a36(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x20 + *param_1),0,(longlong)(param_2 - iVar1) << 5);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1490efd46(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1490efda6(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1411569ea FUN_1411569ea body=456 status=ok
// SIG undefined FUN_1411569ea(void)

void FUN_1411569ea(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  longlong lVar8;
  bool bVar9;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) < 0) {
    FUN_14690032e(plVar1,0);
  }
  lVar4 = FUN_145814b44(param_1);
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x50), lVar4 != 0)) {
    lVar8 = *(longlong *)(lVar4 + 8);
    lVar5 = FUN_1446ddbd2();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar8 != 0;
      if (lVar8 != lVar5 && bVar9) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar9 = lVar8 != 0;
          if (lVar8 == lVar5) break;
        } while (lVar8 != 0);
      }
      if (bVar9) goto LAB_141156a49;
    }
    else {
      uVar3 = *(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8);
      while (uVar3 != 0) {
LAB_141156a49:
        while( true ) {
          iVar2 = *(int *)(param_1 + 0x30);
          *(uint *)(param_1 + 0x30) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
            FUN_14000e500(plVar1,iVar2);
          }
          *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar4;
          lVar4 = *(longlong *)(lVar4 + 0x18);
          if (lVar4 == 0) {
            return;
          }
          puVar7 = *(undefined **)(lVar4 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            uVar6 = FUN_140342cba();
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar6,FUN_1468c7f1e);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          if (DAT_14c951a40 != 0) break;
          bVar9 = puVar7 != (undefined *)0x0;
          if (puVar7 != &DAT_14c951a38 && bVar9) {
            do {
              puVar7 = *(undefined **)(puVar7 + 0x30);
              bVar9 = puVar7 != (undefined *)0x0;
              if (puVar7 == &DAT_14c951a38) break;
            } while (puVar7 != (undefined *)0x0);
          }
          if (!bVar9) {
            return;
          }
        }
        uVar3 = *(ulonglong *)(puVar7 + 0x18) & DAT_14c951a40;
      }
    }
  }
  return;
}



// FUNCTION 141156bb2 FUN_141156bb2 body=300 status=ok
// SIG undefined FUN_141156bb2(void)

longlong FUN_141156bb2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined2 **local_40;
  undefined2 *local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c948df8 == 0) {
    local_30 = &DAT_1427db2a2;
    lVar1 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c948df8 = lVar1;
    FUN_1446f470e(local_28,L"PropertyBag",1);
    local_48 = &LAB_14688d3a5;
    local_50 = &LAB_1459028ee;
    local_60 = L"Engine";
    local_58 = 199;
    local_68 = 0;
    local_70 = 0x10000008;
    local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
    local_40 = &local_30;
    FUN_14574b4b2(lVar1);
    DAT_14c948df8 = lVar1;
    uVar2 = FUN_1446f8646();
    lVar1 = DAT_14c948df8;
    uVar3 = FUN_1446f4bba();
    local_78 = L"PropertyBag";
    FUN_14574b446(uVar3,lVar1,uVar2,L"/Script/CoreUObject");
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return DAT_14c948df8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141156ce0 FUN_141156ce0 body=1037 status=ok
// SIG undefined FUN_141156ce0(void)

undefined8 FUN_141156ce0(longlong *param_1,longlong *param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  byte bVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 auStack_98 [44];
  int local_6c;
  ulonglong local_68;
  undefined4 local_60;
  ulonglong local_58;
  undefined8 uStack_50;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_39 = '\x01';
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e6b600);
  iVar8 = FUN_1448332aa(param_2,&DAT_149e6b600);
  if (iVar8 < 1) {
    puVar5 = (ulonglong *)param_2[1];
    pcVar1 = (char *)*puVar5 + 1;
    if ((char *)puVar5[1] < pcVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_39,1);
    }
    else {
      local_39 = *(char *)*puVar5;
      *puVar5 = (ulonglong)pcVar1;
    }
  }
  lVar12 = *param_1;
  if (lVar12 == 0) {
LAB_141156d86:
    lVar12 = 0;
  }
  else {
    lVar10 = FUN_141156bb2();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8
         ) != lVar10 + 0x30)) goto LAB_141156d86;
  }
  puVar5 = (ulonglong *)param_2[1];
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    local_58 = CONCAT44(local_58._4_4_,(uint)(lVar12 != 0));
    (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
    uVar9 = (uint)local_58;
    if (1 < (uint)local_58) {
      FUN_14572541c(param_2);
      uVar9 = (uint)local_58;
    }
  }
  else {
    uVar9 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
  }
  bVar4 = *(byte *)(param_2 + 5);
  if (uVar9 == 0) {
    if ((bVar4 & 1) != 0) {
      lVar12 = param_1[1];
      if (lVar12 != 0) {
        plVar6 = (longlong *)*param_1;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x2f0))(plVar6,lVar12,1);
        }
        FUN_1400020a8(lVar12);
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    goto LAB_14115706d;
  }
  if ((bVar4 & 1) == 0) {
    if (((bVar4 & 4) == 0) && ((*(byte *)((longlong)param_2 + 0x2b) & 10) == 0)) goto LAB_14115706d;
    local_58 = 0;
    iVar8 = *(int *)(lVar12 + 200);
    uVar11 = *(undefined8 *)(lVar12 + 0xc0);
    uStack_50 = CONCAT44(uStack_50._4_4_,iVar8);
    if (iVar8 == 0) {
      uStack_50 = 0;
    }
    else {
      FUN_1462733a6(&local_58,iVar8,0);
      FUN_1427ded14(local_58,uVar11,iVar8);
    }
    FUN_140f422b0(param_2,&local_58);
    uVar11 = (**(code **)(*param_2 + 0x28))(param_2);
    local_6c = 0;
    puVar5 = (ulonglong *)param_2[1];
    piVar3 = (int *)*puVar5 + 1;
    if ((int *)puVar5[1] < piVar3) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_6c,4);
      }
      else {
        FUN_14572512c(param_2,&local_6c);
      }
    }
    else {
      local_6c = *(int *)*puVar5;
      *puVar5 = (ulonglong)piVar3;
    }
    iVar8 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_14047320e(lVar12,param_2,param_1[1],0);
    lVar10 = (**(code **)(*param_2 + 0x28))(param_2);
    (**(code **)(*param_2 + 0x1a0))(param_2,uVar11);
    local_6c = (int)lVar10 - iVar8;
    puVar5 = (ulonglong *)param_2[1];
    piVar3 = (int *)*puVar5 + 1;
    if ((int *)puVar5[1] < piVar3) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_6c,4);
      }
      else {
        FUN_14572512c(param_2,&local_6c);
      }
    }
    else {
      local_6c = *(int *)*puVar5;
      *puVar5 = (ulonglong)piVar3;
    }
    lVar12 = *param_2;
LAB_141157058:
    (**(code **)(lVar12 + 0x1a0))(param_2,lVar10);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    FUN_140f422b0(param_2,&local_58);
    uVar7 = local_58;
    lVar12 = (longlong)(int)uStack_50;
    if (lVar12 == 0) {
      local_60 = 0;
    }
    else {
      lVar10 = 0;
      do {
        if (*(longlong *)(uVar7 + lVar10) != 0) {
          (**(code **)(*param_2 + 0x198))(param_2);
        }
        lVar10 = lVar10 + 0x30;
      } while (lVar12 * 0x30 != lVar10);
      local_60 = (int)uStack_50;
    }
    local_68 = local_58;
    lVar12 = FUN_1427db2b0();
    FUN_1401fa0f0(param_1,lVar12,0);
    local_6c = 0;
    if (local_39 != '\0') {
      puVar5 = (ulonglong *)param_2[1];
      piVar3 = (int *)*puVar5 + 1;
      if ((int *)puVar5[1] < piVar3) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_6c,4);
        }
        else {
          FUN_14572512c(param_2,&local_6c);
        }
      }
      else {
        local_6c = *(int *)*puVar5;
        *puVar5 = (ulonglong)piVar3;
      }
    }
    if ((lVar12 == 0) || (param_1[1] == 0)) {
      lVar10 = (**(code **)(*param_2 + 0x28))(param_2);
      lVar10 = local_6c + lVar10;
      lVar12 = *param_2;
      goto LAB_141157058;
    }
    FUN_14047320e(lVar12,param_2,param_1[1],0);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_14115706d:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411570ee FUN_1411570ee body=1039 status=ok
// SIG undefined FUN_1411570ee(void)

void FUN_1411570ee(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  int local_60;
  undefined1 local_58 [8];
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((char)param_1[0x15] == '\0') && ((int)param_1[1] != 0)) {
    FUN_141157eea(&local_68,param_1,0);
    iVar12 = (int)param_1[1];
    if (0 < local_60) {
      lVar10 = 8;
      lVar13 = 0;
      do {
        lVar6 = local_68;
        iVar3 = FUN_1411574fe(*(undefined1 *)(local_68 + lVar10));
        iVar12 = iVar3 + iVar12;
        if (*(char *)(lVar6 + lVar10) == 'e') {
          iVar3 = FUN_141158024();
          iVar12 = iVar12 + iVar3;
        }
        lVar13 = lVar13 + 1;
        lVar10 = lVar10 + 0x10;
      } while (lVar13 < local_60);
    }
    local_78 = 0;
    uStack_70 = 0;
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar12);
    }
    if (iVar12 == 0) {
      iVar12 = 0;
      iVar3 = 0;
    }
    else {
      FUN_144893a1c(&local_78);
      iVar12 = uStack_70._4_4_;
      iVar3 = (int)uStack_70;
    }
    uVar1 = *(uint *)(param_1 + 1);
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar1 + iVar3);
    if ((uint)(iVar12 - iVar3) < uVar1) {
      FUN_1447403be(&local_78);
    }
    memset((void *)(iVar3 + local_78),0,(longlong)(int)uVar1);
    if (0 < local_60) {
      lVar10 = 0;
      local_80 = 0;
      do {
        lVar7 = lVar10 * 0x10;
        lVar13 = local_68 + lVar7;
        lVar11 = *(longlong *)(local_68 + lVar7);
        lVar6 = lVar11 + local_80;
        lVar7 = FUN_1411574fe(CONCAT71((int7)((ulonglong)lVar7 >> 8),
                                       *(undefined1 *)(local_68 + 8 + lVar7)));
        if (lVar7 != 0) {
          puVar4 = (undefined1 *)((int)lVar6 + local_78);
          if ((lVar7 - 1U & (ulonglong)puVar4) != 0) {
            lVar6 = (ulonglong)((int)local_80 + (int)lVar11 + 1) << 0x20;
            do {
              uVar2 = uStack_70;
              *puVar4 = *(undefined1 *)(lVar13 + 8);
              iVar12 = (int)uStack_70;
              lVar9 = (longlong)(int)uStack_70;
              uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + 1);
              if (uStack_70._4_4_ == iVar12) {
                FUN_1447403be(&local_78,uVar2 & 0xffffffff);
              }
              *(undefined1 *)(local_78 + lVar9) = 0;
              puVar4 = (undefined1 *)((lVar6 >> 0x20) + local_78);
              lVar6 = lVar6 + 0x100000000;
              local_80 = local_80 + 1;
            } while ((lVar7 - 1U & (ulonglong)puVar4) != 0);
            lVar6 = lVar11 + local_80;
          }
        }
        lVar7 = FUN_141158094(param_1,lVar11,0);
        if (lVar7 != 0) {
          lVar5 = lVar6 << 0x20;
          lVar8 = lVar11 << 0x20;
          lVar9 = lVar7;
          do {
            *(undefined1 *)(local_78 + (lVar5 >> 0x20)) =
                 *(undefined1 *)(*param_1 + (lVar8 >> 0x20));
            lVar5 = lVar5 + 0x100000000;
            lVar8 = lVar8 + 0x100000000;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        if (*(char *)(lVar13 + 8) == 'e') {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cc007b8) && (FUN_144b3d300(&DAT_14cc007b8), DAT_14cc007b8 == -1)) {
            DAT_14cc007b0 = FUN_141158024();
            _Init_thread_footer(&DAT_14cc007b8);
          }
          lVar13 = lVar7 + lVar6;
          if ((DAT_14cc007b0 != 0) && ((DAT_14cc007b0 - 1U & (int)lVar13 + local_78) != 0)) {
            lVar6 = (ulonglong)((int)lVar7 + (int)lVar6 + 1) << 0x20;
            do {
              uVar2 = uStack_70;
              iVar12 = (int)uStack_70;
              lVar9 = (longlong)(int)uStack_70;
              uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + 1);
              if (uStack_70._4_4_ == iVar12) {
                FUN_1447403be(&local_78,uVar2 & 0xffffffff);
              }
              *(undefined1 *)(local_78 + lVar9) = 0;
              lVar9 = lVar6 >> 0x20;
              lVar6 = lVar6 + 0x100000000;
              lVar13 = lVar13 + 1;
              local_80 = local_80 + 1;
            } while ((DAT_14cc007b0 - 1U & lVar9 + local_78) != 0);
          }
          local_58._4_2_ = 0;
          lVar6 = *param_1;
          lVar9 = lVar11 << 0x20;
          lVar5 = 0;
          do {
            local_58[lVar5] = *(undefined1 *)(lVar6 + (lVar9 >> 0x20));
            lVar5 = lVar5 + 1;
            lVar9 = lVar9 + 0x100000000;
          } while (lVar5 != 10);
          if (local_58._4_2_ != 0) {
            lVar6 = (ulonglong)((uint)(ushort)local_58._4_2_ * 2) * 3;
            lVar13 = lVar13 << 0x20;
            lVar11 = (ulonglong)(uint)((int)lVar11 + (int)lVar7) << 0x20;
            do {
              *(undefined1 *)(local_78 + (lVar13 >> 0x20)) =
                   *(undefined1 *)(*param_1 + (lVar11 >> 0x20));
              lVar13 = lVar13 + 0x100000000;
              lVar11 = lVar11 + 0x100000000;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < local_60);
    }
    local_58 = (undefined1  [8])*param_1;
    lStack_50 = param_1[1];
    *param_1 = local_78;
    param_1[1] = uStack_70;
    *(undefined1 *)(param_1 + 0x15) = 1;
    local_78 = (longlong)local_58;
    uStack_70 = lStack_50;
    if (local_58 != (undefined1  [8])0x0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411574fe FUN_1411574fe body=2539 status=ok
// SIG undefined FUN_1411574fe(void)

longlong FUN_1411574fe(char param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == 'e') {
    lVar1 = DAT_14cc006a0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc006a8) &&
       (FUN_144b3d300(&DAT_14cc006a8), lVar1 = DAT_14cc006a0, DAT_14cc006a8 == -1)) {
      if (DAT_14cc00490 == 0) {
        uVar2 = FUN_1408ed7fc();
        DAT_14cc00490 = FUN_140002ddd(FUN_146682b45,uVar2,L"RigVMExecuteOp");
      }
      DAT_14cc006a0 = (longlong)*(int *)(*(longlong *)(DAT_14cc00490 + 0xb8) + 0xc);
      _Init_thread_footer(&DAT_14cc006a8);
      lVar1 = DAT_14cc006a0;
    }
  }
  else {
    lVar1 = 0;
    switch(param_1) {
    case 'A':
    case 'B':
    case 'C':
    case 'E':
    case 'F':
    case 'S':
    case 'b':
      lVar1 = DAT_14cc006c0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc006c8) &&
         (FUN_144b3d300(&DAT_14cc006c8), lVar1 = DAT_14cc006c0, DAT_14cc006c8 == -1)) {
        if (DAT_14cc004a8 == 0) {
          uVar2 = FUN_1408ed7fc();
          DAT_14cc004a8 = FUN_140002ddd(FUN_146682bdb,uVar2,L"RigVMUnaryOp");
        }
        DAT_14cc006c0 = (longlong)*(int *)(*(longlong *)(DAT_14cc004a8 + 0xb8) + 0xc);
        _Init_thread_footer(&DAT_14cc006c8);
        lVar1 = DAT_14cc006c0;
      }
      break;
    case 'D':
      lVar1 = DAT_14cc006b0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc006b8) &&
         (FUN_144b3d300(&DAT_14cc006b8), lVar1 = DAT_14cc006b0, DAT_14cc006b8 == -1)) {
        if (DAT_14cc00550 == 0) {
          uVar2 = FUN_1408ed7fc();
          DAT_14cc00550 = FUN_140002ddd(FUN_146682f91,uVar2,L"RigVMCopyOp");
        }
        DAT_14cc006b0 = (longlong)*(int *)(*(longlong *)(DAT_14cc00550 + 0xb8) + 0xc);
        _Init_thread_footer(&DAT_14cc006b8);
        lVar1 = DAT_14cc006b0;
      }
      break;
    case 'G':
    case 'H':
      lVar1 = DAT_14cc006d0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc006d8) &&
         (FUN_144b3d300(&DAT_14cc006d8), lVar1 = DAT_14cc006d0, DAT_14cc006d8 == -1)) {
        if (DAT_14cc00568 == 0) {
          uVar2 = FUN_1408ed7fc();
          DAT_14cc00568 = FUN_140002ddd(FUN_146683027,uVar2,L"RigVMComparisonOp");
        }
        DAT_14cc006d0 = (longlong)*(int *)(*(longlong *)(DAT_14cc00568 + 0xb8) + 0xc);
        _Init_thread_footer(&DAT_14cc006d8);
        lVar1 = DAT_14cc006d0;
      }
      break;
    case 'I':
    case 'J':
    case 'K':
      lVar1 = DAT_14cc006e0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc006e8) &&
         (FUN_144b3d300(&DAT_14cc006e8), lVar1 = DAT_14cc006e0, DAT_14cc006e8 == -1)) {
        if (DAT_14cc00580 == 0) {
          uVar2 = FUN_1408ed7fc();
          DAT_14cc00580 = FUN_140002ddd(FUN_1466830bd,uVar2,L"RigVMJumpOp");
        }
        DAT_14cc006e0 = (longlong)*(int *)(*(longlong *)(DAT_14cc00580 + 0xb8) + 0xc);
        _Init_thread_footer(&DAT_14cc006e8);
        lVar1 = DAT_14cc006e0;
      }
      break;
    case 'L':
    case 'M':
    case 'N':
      lVar1 = DAT_14cc006f0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc006f8) &&
         (FUN_144b3d300(&DAT_14cc006f8), lVar1 = DAT_14cc006f0, DAT_14cc006f8 == -1)) {
        if (DAT_14cc00598 == 0) {
          uVar2 = FUN_1408ed7fc();
          DAT_14cc00598 = FUN_140002ddd(FUN_146683153,uVar2,L"RigVMJumpIfOp");
        }
        DAT_14cc006f0 = (longlong)*(int *)(*(longlong *)(DAT_14cc00598 + 0xb8) + 0xc);
        _Init_thread_footer(&DAT_14cc006f8);
        lVar1 = DAT_14cc006f0;
      }
      break;
    case 'P':
      lVar1 = DAT_14cc00700;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc00708) &&
         (FUN_144b3d300(&DAT_14cc00708), lVar1 = DAT_14cc00700, DAT_14cc00708 == -1)) {
        if (DAT_14cc00478 == 0) {
          uVar2 = FUN_1408ed7fc();
          DAT_14cc00478 = FUN_140002ddd(FUN_146682aad,uVar2,L"RigVMBaseOp");
        }
        DAT_14cc00700 = (longlong)*(int *)(*(longlong *)(DAT_14cc00478 + 0xb8) + 0xc);
        _Init_thread_footer(&DAT_14cc00708);
        lVar1 = DAT_14cc00700;
      }
      break;
    case 'Q':
    case 'T':
    case 'U':
    case 'Z':
    case '\\':
    case ']':
    case '_':
      lVar1 = DAT_14cc00710;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc00718) &&
         (FUN_144b3d300(&DAT_14cc00718), lVar1 = DAT_14cc00710, DAT_14cc00718 == -1)) {
        if (DAT_14cc004c0 == 0) {
          uVar2 = FUN_1408ed7fc();
          DAT_14cc004c0 = FUN_140002ddd(FUN_146682c73,uVar2,L"RigVMBinaryOp");
        }
        DAT_14cc00710 = (longlong)*(int *)(*(longlong *)(DAT_14cc004c0 + 0xb8) + 0xc);
        _Init_thread_footer(&DAT_14cc00718);
        lVar1 = DAT_14cc00710;
      }
      break;
    case 'R':
      lVar1 = DAT_14cc00750;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc00758) &&
         (FUN_144b3d300(&DAT_14cc00758), lVar1 = DAT_14cc00750, DAT_14cc00758 == -1)) {
        if (DAT_14cc00478 == 0) {
          uVar2 = FUN_1408ed7fc();
          DAT_14cc00478 = FUN_140002ddd(FUN_146682aad,uVar2,L"RigVMBaseOp");
        }
        DAT_14cc00750 = (longlong)*(int *)(*(longlong *)(DAT_14cc00478 + 0xb8) + 0xc);
        _Init_thread_footer(&DAT_14cc00758);
        lVar1 = DAT_14cc00750;
      }
      break;
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case '`':
    case 'a':
      lVar1 = DAT_14cc00720;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc00728) &&
         (FUN_144b3d300(&DAT_14cc00728), lVar1 = DAT_14cc00720, DAT_14cc00728 == -1)) {
        if (DAT_14cc004d8 == 0) {
          uVar2 = FUN_1408ed7fc();
          DAT_14cc004d8 = FUN_140002ddd(FUN_146682d09,uVar2,L"RigVMTernaryOp");
        }
        DAT_14cc00720 = (longlong)*(int *)(*(longlong *)(DAT_14cc004d8 + 0xb8) + 0xc);
        _Init_thread_footer(&DAT_14cc00728);
        lVar1 = DAT_14cc00720;
      }
      break;
    case '[':
      lVar1 = DAT_14cc00730;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc00738) &&
         (FUN_144b3d300(&DAT_14cc00738), lVar1 = DAT_14cc00730, DAT_14cc00738 == -1)) {
        if (DAT_14cc004f0 == 0) {
          uVar2 = FUN_1408ed7fc();
          DAT_14cc004f0 = FUN_140002ddd(FUN_146682d9f,uVar2,L"RigVMQuaternaryOp");
        }
        DAT_14cc00730 = (longlong)*(int *)(*(longlong *)(DAT_14cc004f0 + 0xb8) + 0xc);
        _Init_thread_footer(&DAT_14cc00738);
        lVar1 = DAT_14cc00730;
      }
      break;
    case '^':
      lVar1 = DAT_14cc00740;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc00748) &&
         (FUN_144b3d300(&DAT_14cc00748), lVar1 = DAT_14cc00740, DAT_14cc00748 == -1)) {
        if (DAT_14cc00520 == 0) {
          uVar2 = FUN_1408ed7fc();
          DAT_14cc00520 = FUN_140002ddd(FUN_146682ecb,uVar2,L"RigVMSenaryOp");
        }
        DAT_14cc00740 = (longlong)*(int *)(*(longlong *)(DAT_14cc00520 + 0xb8) + 0xc);
        _Init_thread_footer(&DAT_14cc00748);
        lVar1 = DAT_14cc00740;
      }
      break;
    case 'c':
      lVar1 = DAT_14cc00760;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc00768) &&
         (FUN_144b3d300(&DAT_14cc00768), lVar1 = DAT_14cc00760, DAT_14cc00768 == -1)) {
        if (DAT_14cc005c8 == 0) {
          uVar2 = FUN_1408ed7fc();
          DAT_14cc005c8 = FUN_140002ddd(FUN_14668327f,uVar2,L"RigVMInvokeEntryOp");
        }
        DAT_14cc00760 = (longlong)*(int *)(*(longlong *)(DAT_14cc005c8 + 0xb8) + 0xc);
        _Init_thread_footer(&DAT_14cc00768);
        lVar1 = DAT_14cc00760;
      }
      break;
    case 'd':
      lVar1 = DAT_14cc00770;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc00778) &&
         (FUN_144b3d300(&DAT_14cc00778), lVar1 = DAT_14cc00770, DAT_14cc00778 == -1)) {
        if (DAT_14cc005e0 == 0) {
          uVar2 = FUN_1408ed7fc();
          DAT_14cc005e0 = FUN_140002ddd(FUN_146683315,uVar2,L"RigVMJumpToBranchOp");
        }
        DAT_14cc00770 = (longlong)*(int *)(*(longlong *)(DAT_14cc005e0 + 0xb8) + 0xc);
        _Init_thread_footer(&DAT_14cc00778);
        lVar1 = DAT_14cc00770;
      }
      break;
    case 'f':
      lVar1 = DAT_14cc00780;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc00788) &&
         (FUN_144b3d300(&DAT_14cc00788), lVar1 = DAT_14cc00780, DAT_14cc00788 == -1)) {
        if (DAT_14cc005f8 == 0) {
          uVar2 = FUN_1408ed7fc();
          DAT_14cc005f8 = FUN_140002ddd(FUN_1466833ab,uVar2,L"RigVMRunInstructionsOp");
        }
        DAT_14cc00780 = (longlong)*(int *)(*(longlong *)(DAT_14cc005f8 + 0xb8) + 0xc);
        _Init_thread_footer(&DAT_14cc00788);
        lVar1 = DAT_14cc00780;
      }
      break;
    case 'g':
      lVar1 = DAT_14cc00790;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc00798) &&
         (FUN_144b3d300(&DAT_14cc00798), lVar1 = DAT_14cc00790, DAT_14cc00798 == -1)) {
        if (DAT_14cc00610 == 0) {
          uVar2 = FUN_1408ed7fc();
          DAT_14cc00610 = FUN_140002ddd(FUN_146683441,uVar2,L"RigVMSetupTraitsOp");
        }
        DAT_14cc00790 = (longlong)*(int *)(*(longlong *)(DAT_14cc00610 + 0xb8) + 0xc);
        _Init_thread_footer(&DAT_14cc00798);
        lVar1 = DAT_14cc00790;
      }
    }
  }
  return lVar1;
}



// FUNCTION 141157eea FUN_141157eea body=314 status=ok
// SIG undefined FUN_141157eea(void)

longlong * FUN_141157eea(longlong *param_1,longlong *param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong unaff_RBP;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((int)param_2[1] != 0) {
    uVar7 = 0;
    do {
      bVar1 = *(byte *)(*param_2 + (longlong)(int)uVar7);
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),bVar1);
      if (0x67 < bVar1) {
        *(undefined4 *)(param_1 + 1) = 0;
        if (-1 < *(int *)((longlong)param_1 + 0xc)) {
          return param_1;
        }
        FUN_1490f1358(param_1);
        return param_1;
      }
      if (param_3 == '\0') {
LAB_141157f7d:
        bVar5 = 0;
      }
      else {
        lVar3 = FUN_1411574fe(unaff_RBP & 0xffffffff);
        if (lVar3 != 0) {
          lVar6 = uVar7 << 0x20;
          uVar7 = uVar7 - 1;
          do {
            lVar4 = lVar6 >> 0x20;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x100000000;
          } while ((lVar3 - 1U & lVar4 + *param_2) != 0);
        }
        if ((bVar1 != 0x65) || (lVar3 = FUN_141158024(), lVar3 == 0)) goto LAB_141157f7d;
        bVar5 = 0xff;
        do {
          bVar5 = bVar5 + 1;
        } while ((lVar3 - 1U & (longlong)(int)((uint)bVar5 + (int)uVar7 + 10) + *param_2) != 0);
      }
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_14115825a(param_1,iVar2);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar2 * 0x10;
      *(ulonglong *)(lVar3 + lVar6) = uVar7;
      *(byte *)(lVar3 + 8 + lVar6) = bVar1;
      *(byte *)(lVar3 + 9 + lVar6) = bVar5;
      lVar3 = FUN_141158094(param_2,uVar7,1);
      uVar7 = uVar7 + lVar3;
    } while (uVar7 < (ulonglong)(longlong)(int)param_2[1]);
  }
  return param_1;
}



// FUNCTION 141158024 FUN_141158024 body=112 status=ok
// SIG undefined FUN_141158024(void)

ulonglong FUN_141158024(void)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc007a8) {
    FUN_144b3d300(&DAT_14cc007a8);
    if (DAT_14cc007a8 == -1) {
      lVar1 = FUN_1458158f6();
      DAT_14cc007a0 = (ulonglong)(*(int *)(*(longlong *)(lVar1 + 0xb8) + 0xc) == 0);
      _Init_thread_footer(&DAT_14cc007a8);
    }
  }
  return DAT_14cc007a0;
}



// FUNCTION 141158094 FUN_141158094 body=453 status=ok
// SIG undefined FUN_141158094(void)

longlong FUN_141158094(longlong *param_1,uint param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [38];
  undefined1 auStack_32 [4];
  ushort local_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_1;
  cVar1 = *(char *)(lVar4 + (int)param_2);
  if (cVar1 == 'e') {
switchD_141158197_caseD_0:
    if (param_3 == '\0') {
      lVar2 = 10;
    }
    else {
      local_2e = 0;
      lVar2 = (ulonglong)param_2 << 0x20;
      lVar3 = 0;
      do {
        auStack_32[lVar3] = *(undefined1 *)(lVar4 + (lVar2 >> 0x20));
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x100000000;
      } while (lVar3 != 10);
      lVar2 = 10;
      if ((char)param_1[0x15] != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cc00698) &&
           (FUN_144b3d300(&DAT_14cc00698), DAT_14cc00698 == -1)) {
          DAT_14cc00690 = FUN_141158024();
          _Init_thread_footer(&DAT_14cc00698);
        }
        if (DAT_14cc00690 != 0) {
          lVar4 = ((ulonglong)param_2 << 0x20) + 0xa00000000;
          lVar2 = 9;
          do {
            lVar3 = lVar4 >> 0x20;
            lVar2 = lVar2 + 1;
            lVar4 = lVar4 + 0x100000000;
          } while ((DAT_14cc00690 - 1U & lVar3 + *param_1) != 0);
        }
      }
      lVar2 = lVar2 + (ulonglong)local_2e * 6;
    }
  }
  else {
    lVar2 = 0x12;
    switch(cVar1) {
    case '\0':
    case '\x01':
    case '\x02':
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
    case '\b':
    case '\t':
    case '\n':
    case '\v':
    case '\f':
    case '\r':
    case '\x0e':
    case '\x0f':
    case '\x10':
    case '\x11':
    case '\x12':
    case '\x13':
    case '\x14':
    case '\x15':
    case '\x16':
    case '\x17':
    case '\x18':
    case '\x19':
    case '\x1a':
    case '\x1b':
    case '\x1c':
    case '\x1d':
    case '\x1e':
    case '\x1f':
    case ' ':
    case '!':
    case '\"':
    case '#':
    case '$':
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
    case ',':
    case '-':
    case '.':
    case '/':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case ':':
    case ';':
    case '<':
    case '=':
    case '>':
    case '?':
    case '@':
      goto switchD_141158197_caseD_0;
    case 'A':
    case 'B':
    case 'C':
    case 'E':
    case 'F':
    case 'I':
    case 'J':
    case 'K':
    case 'S':
    case 'b':
    case 'g':
      lVar2 = 8;
      break;
    case 'D':
      break;
    case 'G':
    case 'H':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case '`':
    case 'a':
      lVar2 = 0x14;
      break;
    case 'L':
    case 'M':
    case 'N':
    case 'f':
      lVar2 = 0x10;
      break;
    default:
      lVar2 = 0;
      break;
    case 'P':
    case 'R':
      lVar2 = 1;
      break;
    case 'Q':
    case 'T':
    case 'U':
    case 'Z':
    case '\\':
    case ']':
    case '_':
      lVar2 = 0xe;
      break;
    case '[':
      lVar2 = 0x1a;
      break;
    case '^':
      lVar2 = 0x26;
      break;
    case 'c':
    case 'd':
      lVar2 = 0xc;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115825a FUN_14115825a body=269 status=ok
// SIG undefined FUN_14115825a(void)

void FUN_14115825a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141158368 FUN_141158368 body=2390 status=ok
// SIG undefined FUN_141158368(void)

void FUN_141158368(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  byte *pbVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined2 *puVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  void *_Src;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined1 local_d0;
  longlong *local_c0;
  undefined1 local_b8;
  undefined1 uStack_b7;
  undefined2 uStack_b6;
  ushort uStack_b4;
  undefined2 uStack_b2;
  undefined2 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined2 uStack_8e;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined1 local_84;
  undefined4 local_82;
  undefined1 local_7e;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_76;
  int local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar13 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  if (iVar13 < 0x24) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_108);
  }
  local_6c = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144893a1c(param_1,0);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  puVar5 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar5 + 1;
  local_c0 = param_2;
  if ((int *)puVar5[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_6c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_6c);
    }
  }
  else {
    local_6c = *(int *)*puVar5;
    *puVar5 = (ulonglong)piVar1;
  }
  plVar19 = local_c0;
  if (0 < local_6c) {
    iVar13 = 0;
    do {
      local_68 = CONCAT71(local_68._1_7_,0x68);
      puVar5 = (ulonglong *)plVar19[1];
      pbVar2 = (byte *)*puVar5 + 1;
      if ((byte *)puVar5[1] < pbVar2) {
        (**(code **)(*plVar19 + 0x170))(plVar19,&local_68,1);
        bVar12 = (byte)local_68;
      }
      else {
        bVar12 = *(byte *)*puVar5;
        local_68 = CONCAT71(local_68._1_7_,bVar12);
        *puVar5 = (ulonglong)pbVar2;
      }
      if (bVar12 < 0x41) {
        local_68 = CONCAT71(local_68._1_7_,0x65);
LAB_141158440:
        local_b8 = 0x68;
        uStack_b6 = 0xffff;
        uStack_b4 = 0;
        uStack_b2 = 0xffff;
        uStack_b0 = 0;
        FUN_141158f46(&local_b8);
        uVar17 = (uint)uStack_b4;
        local_98 = 0;
        uStack_97 = 0;
        uStack_96 = 0;
        uStack_95 = 0;
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_8f = 0;
        uStack_8e = 0;
        uStack_8c = 0;
        uStack_8b = 0;
        uStack_8a = 0;
        uStack_89 = 0;
        if (uStack_b4 == 0) {
          iVar18 = 0;
          _Src = (void *)0x0;
        }
        else {
          do {
            uVar8 = (ulonglong)local_a8 >> 0x30;
            uVar7 = (ushort)local_a8;
            local_a8._0_6_ = CONCAT42(0xffffffff,uVar7 & 0xff00);
            local_a8 = CONCAT26((short)uVar8,(undefined6)local_a8);
            FUN_141158ce6(&local_a8,plVar19);
            iVar18 = CONCAT22(uStack_8e,CONCAT11(uStack_8f,uStack_90));
            uVar14 = iVar18 + 1;
            uStack_90 = (undefined1)uVar14;
            uStack_8f = (undefined1)(uVar14 >> 8);
            uStack_8e = (undefined2)(uVar14 >> 0x10);
            if (CONCAT13(uStack_89,CONCAT12(uStack_8a,CONCAT11(uStack_8b,uStack_8c))) < uVar14) {
              FUN_141158dd0(&local_98,iVar18);
            }
            lVar20 = CONCAT44(uStack_94,
                              CONCAT13(uStack_95,CONCAT12(uStack_96,CONCAT11(uStack_97,local_98))));
            *(undefined2 *)(lVar20 + 4 + (longlong)iVar18 * 6) = local_a8._4_2_;
            *(undefined4 *)(lVar20 + (longlong)iVar18 * 6) = (undefined4)local_a8;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
          _Src = (void *)CONCAT44(uStack_94,
                                  CONCAT13(uStack_95,
                                           CONCAT12(uStack_96,CONCAT11(uStack_97,local_98))));
          iVar18 = CONCAT22(uStack_8e,CONCAT11(uStack_8f,uStack_90));
        }
        uVar11 = uStack_b0;
        uVar10 = uStack_b2;
        uVar9 = uStack_b6;
        iVar4 = (int)param_1[1];
        lVar20 = (longlong)iVar4;
        *(int *)(param_1 + 1) = iVar4 + 10;
        if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar4) < 10) {
          FUN_1447403be(param_1);
        }
        lVar21 = *param_1;
        *(undefined2 *)(lVar21 + 8 + lVar20) = 0;
        *(undefined8 *)(lVar21 + lVar20) = 0;
        lVar21 = *param_1;
        *(undefined2 *)(lVar21 + lVar20) = 0x65;
        *(undefined2 *)(lVar21 + 2 + lVar20) = uVar9;
        *(short *)(lVar21 + 4 + lVar20) = (short)iVar18;
        *(undefined2 *)(lVar21 + 6 + lVar20) = uVar10;
        *(undefined2 *)(lVar21 + 8 + lVar20) = uVar11;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        uVar17 = iVar18 * 6;
        iVar4 = (int)param_1[1];
        lVar20 = (longlong)iVar4;
        *(uint *)(param_1 + 1) = uVar17 + iVar4;
        if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar4) < uVar17) {
          FUN_1447403be(param_1);
        }
        memset((void *)(*param_1 + lVar20),0,(longlong)(int)uVar17);
        lVar21 = (longlong)iVar18;
        memcpy((void *)(*param_1 + lVar20),_Src,lVar21 * 6);
        plVar19 = local_c0;
        if (0 < iVar18) {
          lVar20 = lVar20 + 1;
          do {
            *(undefined1 *)(*param_1 + lVar20) = 0;
            lVar20 = lVar20 + 6;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
        if (CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT12(uStack_96,CONCAT11(uStack_97,local_98))))
            != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (bVar12 == 0x65) goto LAB_141158440;
        switch(bVar12) {
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x45:
        case 0x46:
        case 0x53:
        case 0x62:
          local_98 = 0x68;
          uStack_96 = 0;
          uStack_94 = 0xffffffff;
          FUN_1490dc812(&local_98,plVar19);
          FUN_1490dd4da(param_1,&local_98);
          break;
        case 0x44:
          local_98 = 0x44;
          uStack_96 = 0;
          uStack_94 = 0xffffffff;
          uStack_90 = 0;
          uStack_8e = 0xffff;
          uStack_8c = 0xff;
          uStack_8b = 0xff;
          uStack_8a = 0;
          uStack_89 = 0;
          uStack_88 = 4;
          FUN_145815998(&local_98,plVar19);
          FUN_14581592e(param_1,&local_98);
          break;
        case 0x47:
        case 0x48:
          local_98 = 0x68;
          uStack_96 = 0;
          uStack_94 = 0xffffffff;
          uStack_90 = 0;
          uStack_8e = 0xffff;
          uStack_8c = 0xff;
          uStack_8b = 0xff;
          uStack_8a = 0;
          uStack_88 = 0xffff;
          uStack_86 = 0xffff;
          FUN_1490dca3a(&local_98,plVar19);
          FUN_1490dd530(param_1,&local_98);
          break;
        case 0x49:
        case 0x4a:
        case 0x4b:
          local_98 = 0x68;
          uStack_94 = 0xffffffff;
          FUN_1490dcaa6(&local_98,plVar19);
          FUN_1490dd59c(param_1,&local_98);
          break;
        case 0x4c:
        case 0x4d:
        case 0x4e:
          local_98 = 0x68;
          uStack_96 = 0;
          uStack_94 = 0xffffffff;
          uStack_90 = 0xff;
          uStack_8f = 0xff;
          uStack_8e = 0xffff;
          uStack_8c = 1;
          FUN_1490dcb44(&local_98,plVar19);
          FUN_1490dd5f4(param_1,&local_98);
          break;
        case 0x50:
          iVar18 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar18 + 1;
          if (*(int *)((longlong)param_1 + 0xc) == iVar18) {
            FUN_1447403be(param_1,iVar18);
          }
          *(undefined1 *)(*param_1 + (longlong)iVar18) = 0;
          *(undefined1 *)(*param_1 + (longlong)iVar18) = 0x50;
          *(int *)(param_1 + 2) = (int)param_1[2] + 1;
          break;
        case 0x51:
        case 0x54:
        case 0x55:
        case 0x5a:
        case 0x5c:
        case 0x5d:
        case 0x5f:
          local_98 = 0x68;
          uStack_96 = 0;
          uStack_94 = 0xffffffff;
          uStack_90 = 0;
          uStack_8e = 0xffff;
          uStack_8c = 0xff;
          uStack_8b = 0xff;
          FUN_1490dc866(&local_98,plVar19);
          FUN_1490dd65c(param_1,&local_98);
          break;
        case 0x52:
          iVar18 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar18 + 1;
          if (*(int *)((longlong)param_1 + 0xc) == iVar18) {
            FUN_1447403be(param_1,iVar18);
          }
          *(undefined1 *)(*param_1 + (longlong)iVar18) = 0;
          *(undefined1 *)(*param_1 + (longlong)iVar18) = 0x52;
          *(int *)(param_1 + 2) = (int)param_1[2] + 1;
          plVar19 = local_c0;
          break;
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x60:
        case 0x61:
          local_98 = 0x68;
          uStack_96 = 0;
          uStack_94 = 0xffffffff;
          uStack_90 = 0;
          uStack_8e = 0xffff;
          uStack_8c = 0xff;
          uStack_8b = 0xff;
          uStack_8a = 0;
          uStack_88 = 0xffff;
          uStack_86 = 0xffff;
          FUN_1490dc8c6(&local_98,plVar19);
          FUN_1490dd6c0(param_1,&local_98);
          break;
        case 0x5b:
          local_98 = 0x68;
          uStack_96 = 0;
          uStack_94 = 0xffffffff;
          uStack_90 = 0;
          uStack_8e = 0xffff;
          uStack_8c = 0xff;
          uStack_8b = 0xff;
          uStack_8a = 0;
          uStack_88 = 0xffff;
          uStack_86 = 0xffff;
          local_84 = 0;
          local_82 = 0xffffffff;
          FUN_1490dc932(&local_98,plVar19);
          FUN_1490dd72c(param_1,&local_98);
          break;
        case 0x5e:
          local_98 = 0x68;
          uStack_96 = 0;
          uStack_94 = 0xffffffff;
          uStack_90 = 0;
          uStack_8e = 0xffff;
          uStack_8c = 0xff;
          uStack_8b = 0xff;
          uStack_8a = 0;
          uStack_88 = 0xffff;
          uStack_86 = 0xffff;
          local_84 = 0;
          local_82 = 0xffffffff;
          local_7e = 0;
          local_7c = 0xffffffff;
          local_78 = 0;
          local_76 = 0xffffffff;
          FUN_1490dc9aa(&local_98,plVar19);
          FUN_1490dd79a(param_1,&local_98);
          break;
        case 99:
          local_98 = 99;
          uStack_94 = 0;
          uStack_90 = 0;
          uStack_8f = 0;
          uStack_8e = 0;
          FUN_1490dcc64(&local_98,plVar19);
          FUN_1490dd822(param_1,&local_98);
          break;
        case 100:
          local_98 = 0x68;
          uStack_96 = 0;
          uStack_94 = 0xffffffff;
          uStack_90 = 0xff;
          uStack_8f = 0xff;
          uStack_8e = 0xffff;
          FUN_1490dcd1c(&local_98,plVar19);
          FUN_1490dd888(param_1,&local_98);
          break;
        case 0x66:
          local_98 = 0x68;
          uStack_96 = 0;
          uStack_94 = 0xffffffff;
          uStack_90 = 0xff;
          uStack_8f = 0xff;
          uStack_8e = 0xffff;
          uStack_8c = 0xff;
          uStack_8b = 0xff;
          uStack_8a = 0xff;
          uStack_89 = 0xff;
          FUN_1490dcdc6(&local_98,plVar19);
          FUN_1490dd8ec(param_1,&local_98);
          break;
        case 0x67:
          local_98 = 0x68;
          uStack_96 = 0;
          uStack_94 = 0xffffffff;
          FUN_1490dc812(&local_98,plVar19);
          FUN_1490dd940(param_1,&local_98);
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < local_6c);
  }
  plVar3 = param_1 + 3;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) < 0) {
    FUN_1490f162c(plVar3);
  }
  iVar13 = FUN_1448332aa(plVar19,&DAT_149e39130);
  if (9 < iVar13) {
    if (DAT_14cc00658 == 0) {
      uVar15 = FUN_1408ed7fc();
      DAT_14cc00658 = FUN_140002ddd(FUN_1466835d5,uVar15,L"RigVMByteCodeEntry");
    }
    lVar20 = DAT_14cc00658;
    local_98 = 0;
    uStack_97 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8f = 0;
    uStack_8e = 0;
    uStack_8c = 0;
    uStack_8b = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    FUN_1405d0c38(plVar19,&local_98);
    if (0 < CONCAT22(uStack_8e,CONCAT11(uStack_8f,uStack_90))) {
      lVar22 = 8;
      lVar21 = 0;
      do {
        local_a8 = 0;
        local_a0 = 0;
        local_68 = *(undefined8 *)(lVar20 + 0x18);
        FUN_1400021e4(&local_68,&local_b8);
        lVar6 = CONCAT44(uStack_94,
                         CONCAT13(uStack_95,CONCAT12(uStack_96,CONCAT11(uStack_97,local_98))));
        puVar16 = &DAT_149dfb77a;
        if (*(int *)(lVar6 + lVar22) != 0) {
          puVar16 = *(undefined2 **)(lVar6 + -8 + lVar22);
        }
        local_d0 = 1;
        local_e0 = 0;
        local_e8 = 0;
        local_d8 = &local_b8;
        FUN_14115911a(lVar20,puVar16,&local_a8,0);
        if (CONCAT26(uStack_b2,CONCAT24(uStack_b4,CONCAT22(uStack_b6,CONCAT11(uStack_b7,local_b8))))
            != 0) {
          FUN_1400020a8();
        }
        iVar13 = (int)param_1[4];
        *(uint *)(param_1 + 4) = iVar13 + 1U;
        if (*(uint *)((longlong)param_1 + 0x24) < iVar13 + 1U) {
          FUN_145815ac0(plVar3,iVar13);
        }
        lVar6 = *plVar3;
        *(undefined4 *)(lVar6 + 8 + (longlong)iVar13 * 0xc) = local_a0;
        *(undefined8 *)(lVar6 + (longlong)iVar13 * 0xc) = local_a8;
        lVar21 = lVar21 + 1;
        lVar22 = lVar22 + 0x10;
      } while (lVar21 < CONCAT22(uStack_8e,CONCAT11(uStack_8f,uStack_90)));
    }
    FUN_1447a1747(CONCAT44(uStack_94,
                           CONCAT13(uStack_95,CONCAT12(uStack_96,CONCAT11(uStack_97,local_98)))));
    if (CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT12(uStack_96,CONCAT11(uStack_97,local_98)))) !=
        0) {
      FUN_1400020a8();
    }
  }
  iVar13 = FUN_1448332aa(plVar19,&DAT_149e3cc78);
  if (iVar13 < 0x5e) {
    if (*(int *)((longlong)param_1 + 0x34) < 0) {
      *(undefined4 *)(param_1 + 6) = 0;
      FUN_1490f13c8(param_1 + 5,0);
    }
    else {
      *(undefined4 *)(param_1 + 6) = 0;
    }
    FUN_1458b7e18(param_1 + 0xb);
    plVar19 = local_c0;
  }
  else {
    FUN_145815b54(plVar19,param_1 + 5);
    FUN_1458b7e18(param_1 + 0xb);
    local_98 = 0;
    uStack_97 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8f = 0;
    uStack_8e = 0;
    uStack_8c = 0;
    uStack_8b = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    FUN_1411591a0(param_1);
  }
  iVar13 = FUN_1448332aa(plVar19,&DAT_14bb46be0);
  if (7 < iVar13) {
    FUN_14021219d(plVar19,param_1 + 9);
    *(undefined1 *)((longlong)param_1 + 0xa9) = 1;
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141158ce6 FUN_141158ce6 body=233 status=ok
// SIG undefined FUN_141158ce6(void)

void FUN_141158ce6(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,2);
    }
    else {
      FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 2) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  puVar3 = (undefined2 *)(param_1 + 4);
  puVar2 = *(undefined2 **)param_2[1];
  if (puVar2 + 1 <= (undefined2 *)((undefined8 *)param_2[1])[1]) {
    *puVar3 = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141158dae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,puVar3,2);
    return;
  }
  FUN_1457251a8(param_2,puVar3);
  return;
}



// FUNCTION 141158dd0 FUN_141158dd0 body=372 status=ok
// SIG undefined FUN_141158dd0(void)

void FUN_141158dd0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 6;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141158e58;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
    }
  }
LAB_141158e58:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 6)) {
    uVar7 = uVar5 / 6 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,6,2);
  return;
}


