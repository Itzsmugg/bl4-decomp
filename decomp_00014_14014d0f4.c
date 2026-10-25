// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14014d0f4 FUN_14014d0f4 body=625 status=ok
// SIG undefined FUN_14014d0f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14014d0f4(longlong *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  longlong *plVar7;
  int *piVar8;
  byte bVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_98 [32];
  undefined4 local_78 [4];
  ulonglong local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  uint local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined1 local_38;
  undefined2 local_37;
  byte local_35;
  undefined2 local_34;
  ulonglong local_30;
  int iVar10;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[0x29] == 0) {
    uVar13 = 0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb0b570) {
      FUN_144b3d300(&DAT_14cb0b570);
      if (DAT_14cb0b570 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar7 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.VirtualTextureReducedMemory",1);
        if (plVar7 == (longlong *)0x0) {
          _DAT_14cb0b568 = 0;
        }
        else {
          _DAT_14cb0b568 = (**(code **)(*plVar7 + 0x68))(plVar7);
        }
        _Init_thread_footer(&DAT_14cb0b570);
      }
    }
    bVar1 = *(byte *)((longlong)param_1 + 0x104);
    bVar2 = *(byte *)((longlong)param_1 + 0xfe);
    puVar5 = (uint *)param_1[0x29];
    if (puVar5 == (uint *)0x0) {
      uVar12 = 0;
      uVar11 = (ulonglong)(uint)-param_2;
      if (-param_2 < 1) {
        uVar11 = uVar12;
      }
      bVar9 = (byte)uVar11;
      uVar15 = 0;
      uVar16 = 0;
      local_35 = 0;
    }
    else {
      uVar15 = *puVar5;
      uVar16 = puVar5[1];
      cVar6 = (**(code **)(*param_1 + 0x330))(param_1);
      uVar12 = param_1[0x29];
      if (cVar6 == '\0') {
        piVar8 = (int *)(uVar12 + 0x20);
      }
      else {
        piVar8 = (int *)(*(longlong *)(uVar12 + 0x28) + 4);
      }
      local_35 = 0;
      iVar10 = *piVar8 - param_2;
      if (*piVar8 - param_2 < 1) {
        iVar10 = 0;
      }
      bVar9 = (byte)iVar10;
      if (uVar12 == 0) {
        uVar12 = 0;
      }
      else {
        pbVar14 = (byte *)(*(longlong *)(uVar12 + 0x28) + 0x20);
        if (*(longlong *)(uVar12 + 0x28) == 0) {
          pbVar14 = (byte *)(uVar12 + 0xc);
        }
        local_35 = *pbVar14;
      }
    }
    uVar3 = *(uint *)((longlong)&DAT_14c87341c + (ulonglong)((uint)local_35 * 0x30));
    uVar4 = *(uint *)((longlong)&DAT_14c873420 + (ulonglong)((uint)local_35 * 0x30));
    uVar16 = uVar16 >> (bVar9 & 0x1f);
    if (uVar16 < uVar4) {
      uVar16 = uVar4;
    }
    uVar15 = uVar15 >> (bVar9 & 0x1f);
    if (uVar15 < uVar3) {
      uVar15 = uVar3;
    }
    local_44 = CONCAT44(uVar16,uVar15);
    local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    iVar10 = 1;
    if (1 < param_2) {
      iVar10 = param_2;
    }
    local_48 = *(undefined4 *)(uVar12 + 0x10);
    local_34 = 0xff00;
    local_3c = 0x10001;
    local_38 = (undefined1)iVar10;
    local_37 = 1;
    local_60 = 1;
    local_5c = 0;
    uStack_54 = 0;
    local_68 = (ulonglong)((bVar2 & 1) << 4 | (bVar2 & 2) << 5 | (bVar1 & 2) << 0x13) ^ 0x10100000;
    cVar6 = FUN_14490ad04(&local_68,&DAT_149dfb77a,0);
    uVar13 = 0;
    if (cVar6 != '\0') {
      (**(code **)(*DAT_14ca83900 + 0x180))(DAT_14ca83900,local_78,&local_68,0);
      uVar13 = local_78[0];
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14014d38a FUN_14014d38a body=459 status=ok
// SIG undefined FUN_14014d38a(void)

longlong FUN_14014d38a(longlong param_1,longlong param_2,double param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 in_EAX;
  int iVar10;
  uint uVar11;
  uint uVar12;
  double *in_R8;
  char cVar13;
  longlong lVar14;
  
  if (*(char *)(param_1 + 0x7d4) < '\0') {
    cVar13 = '\0';
  }
  else {
    auVar6._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(in_R8[5] - DAT_14c8464a8));
    auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(in_R8[4] - DAT_14c8464a0));
    iVar10 = movmskpd(in_EAX,auVar6);
    param_3 = (double)-(ulonglong)(9.999999747378752e-05 < ABS(in_R8[6] - DAT_14c8464b0));
    auVar4._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(in_R8[7] - DAT_14c8464b8));
    auVar4._0_8_ = param_3;
    uVar11 = movmskpd((int)param_1,auVar4);
    cVar13 = '\x04';
    if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
      lVar14 = -(ulonglong)(9.999999747378752e-05 < ABS(in_R8[1] - DAT_14c846488));
      auVar9._8_4_ = (int)lVar14;
      auVar9._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*in_R8 - DAT_14c846480));
      auVar9._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      uVar11 = movmskpd(iVar10,auVar9);
      lVar14 = -(ulonglong)(9.999999747378752e-05 < ABS(in_R8[3] - DAT_14c846498));
      auVar8._8_4_ = (int)lVar14;
      auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(in_R8[2] - DAT_14c846490));
      auVar8._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      iVar10 = movmskpd(0,auVar8);
      uVar12 = iVar10 << 2 | uVar11;
      if (uVar12 != 0) {
        param_3 = ABS(in_R8[2] + DAT_14c846490);
        auVar7._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(in_R8[1] + DAT_14c846488));
        auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*in_R8 + DAT_14c846480));
        uVar11 = movmskpd(uVar11,auVar7);
        auVar5._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(in_R8[3] + DAT_14c846498));
        auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < param_3);
        uVar12 = movmskpd(uVar12,auVar5);
        if ((uVar12 & 0x3fffffff) != 0 || uVar11 != 0) goto LAB_14014d3b5;
      }
      param_3 = ABS(in_R8[8] - DAT_14c8464c0);
      auVar3._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(in_R8[9] - DAT_14c8464c8));
      auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < param_3);
      iVar10 = movmskpd(uVar11,auVar3);
      lVar14 = -(ulonglong)(9.999999747378752e-05 < ABS(in_R8[0xb] - dRam000000014c8464d8));
      auVar1._8_4_ = (int)lVar14;
      auVar1._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(in_R8[10] - DAT_14c8464d0));
      auVar1._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      uVar11 = movmskpd(0,auVar1);
      cVar13 = ((uVar11 & 0x3fffffff) != 0 || iVar10 != 0) * '\x02' + '\x02';
    }
  }
LAB_14014d3b5:
  FUN_14014d556(param_1,param_2,param_3,cVar13);
  dVar2 = (double)*(float *)(param_1 + 0x3ac);
  *(double *)(param_2 + 0x18) = *(double *)(param_2 + 0x18) * dVar2;
  *(double *)(param_2 + 0x20) = *(double *)(param_2 + 0x20) * dVar2;
  *(double *)(param_2 + 0x28) = *(double *)(param_2 + 0x28) * dVar2;
  *(double *)(param_2 + 0x30) = dVar2 * *(double *)(param_2 + 0x30);
  return param_2;
}



// FUNCTION 14014d556 FUN_14014d556 body=1134 status=ok
// SIG undefined FUN_14014d556(void)

undefined8 * FUN_14014d556(longlong param_1,undefined8 *param_2,undefined8 *param_3,byte param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  longlong lVar12;
  undefined8 uVar13;
  char *pcVar14;
  ulonglong uVar15;
  uint uVar16;
  char *pcVar17;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  char local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_1 + 0x660) != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
LAB_14014d5c5:
    if (*(int *)(param_1 + 0x728) < 1) goto LAB_14014d6c2;
    if (param_4 == 1) {
      FUN_14014d9c6(param_1,&local_e0);
      if (local_b0 == '\0') goto LAB_14014d6c2;
    }
    else {
      lVar12 = *(longlong *)(param_1 + 0x660);
      if ((lVar12 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar12);
      }
      local_b8 = *(double *)(lVar12 + 0x210) + *(double *)(lVar12 + 0x228);
      local_c0 = *(double *)(lVar12 + 0x208) + *(double *)(lVar12 + 0x220);
      local_c8 = *(double *)(lVar12 + 0x200) + *(double *)(lVar12 + 0x218);
      local_d0 = *(double *)(lVar12 + 0x210) - *(double *)(lVar12 + 0x228);
      local_d8 = *(double *)(lVar12 + 0x208) - *(double *)(lVar12 + 0x220);
      local_e0 = *(double *)(lVar12 + 0x200) - *(double *)(lVar12 + 0x218);
      local_b0 = '\x01';
    }
    lVar12 = *(longlong *)(param_1 + 0xb0);
    if (((lVar12 == 0) && (lVar12 = FUN_1448abda6(param_1), lVar12 == 0)) ||
       (6 < *(byte *)(lVar12 + 0x152))) {
      bVar11 = 0;
    }
    else {
      bVar11 = 0x6a >> (*(byte *)(lVar12 + 0x152) & 0x1f);
    }
    if (param_4 == 4) {
      FUN_14014db32(param_1,param_2,param_3,&local_e0);
      goto LAB_14014d864;
    }
    if (((bVar11 | *(byte *)(param_1 + 0x9c)) & 1) != 0) {
      local_88 = param_3[4];
      uStack_80 = param_3[5];
      local_78 = param_3[6];
      local_118 = *param_3;
      uStack_110 = param_3[1];
      local_108 = param_3[2];
      uStack_100 = param_3[3];
      local_a8 = param_3[8];
      uStack_a0 = param_3[9];
      local_98 = param_3[10];
      uVar13 = FUN_144859ac6(&local_88,0x18,0);
      uVar13 = FUN_144859ac6(&local_118,0x20,uVar13);
      uVar13 = FUN_144859ac6(&local_a8,0x18,uVar13);
      uVar13 = FUN_144859ac6(&local_e0,0x18,uVar13);
      uVar13 = FUN_144859ac6(&local_c8,0x18,uVar13);
      uVar16 = (uint)((ulonglong)uVar13 >> 0x20) ^ (uint)uVar13;
      lVar12 = param_1 + (ulonglong)param_4 * 0x40;
      pcVar17 = (char *)(lVar12 + 0xa50);
      if ((*pcVar17 != '\x01') || (*(uint *)(lVar12 + 0xa54) != uVar16)) {
        pcVar14 = (char *)(param_1 + 0xa50);
        uVar15 = 0;
        do {
          if (((param_4 != uVar15) && (*pcVar14 == '\x01')) && (*(uint *)(pcVar14 + 4) == uVar16)) {
            uVar13 = *(undefined8 *)pcVar14;
            uVar1 = *(undefined8 *)(pcVar14 + 8);
            uVar6 = *(undefined8 *)(pcVar14 + 0x10);
            uVar7 = *(undefined8 *)(pcVar14 + 0x18);
            uVar8 = *(undefined8 *)(pcVar14 + 0x20);
            uVar9 = *(undefined8 *)(pcVar14 + 0x28);
            uVar10 = *(undefined8 *)(pcVar14 + 0x38);
            *(undefined8 *)(lVar12 + 0xa80) = *(undefined8 *)(pcVar14 + 0x30);
            *(undefined8 *)(lVar12 + 0xa88) = uVar10;
            *(undefined8 *)(lVar12 + 0xa70) = uVar8;
            *(undefined8 *)(lVar12 + 0xa78) = uVar9;
            *(undefined8 *)(lVar12 + 0xa60) = uVar6;
            *(undefined8 *)(lVar12 + 0xa68) = uVar7;
            *(undefined8 *)pcVar17 = uVar13;
            *(undefined8 *)(lVar12 + 0xa58) = uVar1;
            pcVar17 = pcVar14;
            goto LAB_14014d83f;
          }
          uVar15 = uVar15 + 1;
          pcVar14 = pcVar14 + 0x40;
        } while (uVar15 != 3);
        FUN_14014db32(param_1,&local_118,param_3,&local_e0);
        *pcVar17 = '\x01';
        *(undefined8 *)(lVar12 + 0xa58) = local_118;
        *(undefined8 *)(lVar12 + 0xa60) = uStack_110;
        *(undefined8 *)(lVar12 + 0xa68) = local_108;
        *(undefined8 *)(lVar12 + 0xa70) = uStack_100;
        *(undefined8 *)(lVar12 + 0xa78) = local_f8;
        *(undefined8 *)(lVar12 + 0xa80) = uStack_f0;
        *(undefined8 *)(lVar12 + 0xa88) = local_e8;
        *(uint *)(lVar12 + 0xa54) = uVar16;
      }
LAB_14014d83f:
      param_2[6] = *(undefined8 *)(pcVar17 + 0x38);
      uVar2 = *(undefined4 *)(pcVar17 + 8);
      uVar3 = *(undefined4 *)(pcVar17 + 0xc);
      uVar4 = *(undefined4 *)(pcVar17 + 0x10);
      uVar5 = *(undefined4 *)(pcVar17 + 0x14);
      uVar13 = *(undefined8 *)(pcVar17 + 0x18);
      uVar1 = *(undefined8 *)(pcVar17 + 0x20);
      uVar6 = *(undefined8 *)(pcVar17 + 0x30);
      param_2[4] = *(undefined8 *)(pcVar17 + 0x28);
      param_2[5] = uVar6;
      param_2[2] = uVar13;
      param_2[3] = uVar1;
      *(undefined4 *)param_2 = uVar2;
      *(undefined4 *)((longlong)param_2 + 4) = uVar3;
      *(undefined4 *)(param_2 + 1) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
      goto LAB_14014d864;
    }
    FUN_14014db32(param_1,param_2,param_3,&local_e0);
    if (param_4 != 1) goto LAB_14014d864;
    *(undefined1 *)(param_1 + 0xa90) = 1;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar13 = param_2[2];
    uVar1 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    *(undefined4 *)(param_1 + 0xa98) = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 0xa9c) = uVar2;
    *(undefined4 *)(param_1 + 0xaa0) = uVar3;
    *(undefined4 *)(param_1 + 0xaa4) = uVar4;
    *(undefined8 *)(param_1 + 0xaa8) = uVar13;
    *(undefined8 *)(param_1 + 0xab0) = uVar1;
    *(undefined8 *)(param_1 + 0xab8) = uVar6;
    *(undefined8 *)(param_1 + 0xac0) = uVar7;
  }
  else {
    if (*(longlong *)(param_1 + 0x660) != 0) goto LAB_14014d5c5;
LAB_14014d6c2:
    uVar1 = param_3[5];
    uVar13 = param_3[6];
    *param_2 = param_3[4];
    param_2[1] = uVar1;
    param_2[2] = uVar13;
    uVar4 = DAT_14c8464e8._4_4_;
    uVar3 = (undefined4)DAT_14c8464e8;
    uVar2 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_2 + 3) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar2;
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar4;
    param_2[5] = DAT_14c8464f0;
    param_2[6] = 0;
    if (param_4 != 1) goto LAB_14014d864;
    *(undefined1 *)(param_1 + 0xa90) = 1;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    uVar13 = param_2[4];
    uVar1 = param_2[5];
    *(undefined4 *)(param_1 + 0xa98) = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 0xa9c) = uVar2;
    *(undefined4 *)(param_1 + 0xaa0) = uVar3;
    *(undefined4 *)(param_1 + 0xaa4) = uVar4;
    *(undefined8 *)(param_1 + 0xaa8) = uVar6;
    *(undefined8 *)(param_1 + 0xab0) = uVar7;
    *(undefined8 *)(param_1 + 0xab8) = uVar13;
    *(undefined8 *)(param_1 + 0xac0) = uVar1;
  }
  *(undefined8 *)(param_1 + 0xac8) = param_2[6];
  *(undefined4 *)(param_1 + 0xa94) = 0;
LAB_14014d864:
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14014d9c6 FUN_14014d9c6 body=362 status=ok
// SIG undefined FUN_14014d9c6(void)

double * FUN_14014d9c6(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  char local_58;
  undefined7 uStack_57;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = *(longlong *)(param_1 + 0x660);
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar7);
  }
  else if (lVar7 == 0) {
    *(undefined1 *)(param_2 + 6) = 0;
    goto LAB_14014dabb;
  }
  plVar8 = *(longlong **)(lVar7 + 0x248);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x2a8))(plVar8,&local_88);
    if (local_58 != '\0') {
      param_2[6] = (double)CONCAT71(uStack_57,local_58);
      param_2[4] = local_68;
      param_2[5] = dStack_60;
      param_2[2] = local_78;
      param_2[3] = dStack_70;
      *param_2 = local_88;
      param_2[1] = dStack_80;
      goto LAB_14014dabb;
    }
  }
  dVar1 = *(double *)(lVar7 + 0x200);
  dVar2 = *(double *)(lVar7 + 0x208);
  dVar3 = *(double *)(lVar7 + 0x210);
  dVar4 = *(double *)(lVar7 + 0x218);
  dVar5 = *(double *)(lVar7 + 0x220);
  dVar6 = *(double *)(lVar7 + 0x228);
  *param_2 = dVar1 - dVar4;
  param_2[1] = dVar2 - dVar5;
  param_2[2] = dVar3 - dVar6;
  param_2[3] = dVar1 + dVar4;
  param_2[4] = dVar2 + dVar5;
  param_2[5] = dVar3 + dVar6;
  *(undefined1 *)(param_2 + 6) = 1;
LAB_14014dabb:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14014db32 FUN_14014db32 body=1882 status=ok
// SIG undefined FUN_14014db32(void)

double * FUN_14014db32(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  double *pdVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined1 auStack_298 [32];
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238 [8];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  undefined1 local_178 [16];
  double local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  dVar20 = (double)CONCAT44(unaff_XMM15_Db,unaff_XMM15_Da);
  dVar21 = (double)CONCAT44(unaff_XMM13_Db,unaff_XMM13_Da);
  dVar15 = (double)CONCAT44(unaff_XMM12_Db,unaff_XMM12_Da);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  dVar24 = *param_3;
  dVar14 = param_3[1];
  dVar2 = param_3[2];
  dVar3 = param_3[8];
  dVar4 = param_3[9];
  dStack_130 = param_3[10];
  dVar19 = dVar14 + dVar14;
  dVar1 = dVar2 + dVar2;
  dVar16 = dVar24 * (dVar24 + dVar24);
  dVar25 = 1.0;
  dVar17 = (1.0 - (dVar2 * dVar1 + dVar16)) * dVar4;
  dVar22 = (1.0 - (dVar16 + dVar14 * dVar19)) * dStack_130;
  dVar16 = param_3[3];
  dVar18 = dVar1 * dVar16;
  dVar23 = (dVar24 + dVar24) * param_3[3];
  dVar16 = dVar19 * dVar16;
  dVar12 = (dVar19 * dVar24 + dVar18) * dVar3;
  local_148 = (dVar1 * dVar14 + dVar23) * dVar4;
  dVar13 = (dVar16 + *param_3 * dVar1) * dStack_130;
  dVar16 = (*param_3 * dVar1 - dVar16) * dVar3;
  dStack_130 = (dVar1 * dVar14 - dVar23) * dStack_130;
  local_178._8_4_ = SUB84(dVar12,0);
  local_178._0_8_ = (1.0 - (dVar2 * dVar1 + dVar14 * dVar19)) * dVar3;
  local_178._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  uStack_160 = 0;
  local_158._8_4_ = SUB84(dVar17,0);
  local_158._0_8_ = (dVar19 * dVar24 - dVar18) * dVar4;
  local_158._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  uStack_140 = 0;
  uStack_120 = 0;
  local_118 = param_3[4];
  dStack_110 = param_3[5];
  local_108 = param_3[6];
  uStack_100 = 0x3ff0000000000000;
  local_168 = dVar16;
  local_138 = dVar13;
  local_128 = dVar22;
  if (*(int *)(param_1 + 0x728) < 1) {
    pdVar9 = local_238;
  }
  else {
    lVar10 = 0;
    lVar11 = 0;
    bVar8 = false;
    do {
      local_270 = dVar25;
      local_268 = dVar20;
      local_260 = dVar22;
      local_258 = dVar21;
      local_250 = dVar15;
      local_248 = dVar16;
      local_240 = dVar13;
      FUN_1447fea8d(&local_1f8,*(longlong *)(param_1 + 0x720) + lVar10,local_178);
      if (*(char *)(param_4 + 6) == '\0') {
        dVar17 = 0.0;
        dVar20 = 0.0;
        dVar16 = 0.0;
        dVar1 = 0.0;
        dVar18 = 0.0;
        dVar23 = 0.0;
      }
      else {
        dVar16 = (*param_4 + param_4[3]) * 0.5;
        dVar22 = (param_4[1] + param_4[4]) * 0.5;
        dVar12 = (param_4[2] + param_4[5]) * 0.5;
        dVar21 = (param_4[3] - *param_4) * 0.5;
        dVar24 = (param_4[4] - param_4[1]) * 0.5;
        dVar1 = (param_4[5] - param_4[2]) * 0.5;
        dVar13 = dVar12 * local_1b8 + dVar22 * local_1d8 + dVar16 * local_1f8 + local_198;
        dVar15 = dVar12 * dStack_1b0 + dVar22 * dStack_1d0 + dVar16 * dStack_1f0 + dStack_190;
        dVar17 = ABS(dVar1 * local_1b8) + ABS(local_1d8 * dVar24) + ABS(dVar21 * local_1f8);
        dVar20 = ABS(dVar1 * dStack_1b0) + ABS(dStack_1d0 * dVar24) + ABS(dVar21 * dStack_1f0);
        dVar18 = dVar13 - dVar17;
        dVar23 = dVar15 - dVar20;
        dVar17 = dVar17 + dVar13;
        dVar20 = dVar20 + dVar15;
        dVar16 = dVar12 * local_1a8 + dVar22 * local_1c8 + dVar16 * local_1e8 + local_188;
        dVar22 = ABS(dVar24 * local_1c8) + ABS(dVar21 * local_1e8) + ABS(dVar1 * local_1a8);
        dVar1 = dVar16 - dVar22;
        dVar16 = dVar16 + dVar22;
      }
      dVar22 = (dVar16 - dVar1) * 0.5;
      dVar20 = (dVar20 - dVar23) * 0.5;
      dVar25 = (dVar17 - dVar18) * 0.5;
      dVar1 = dVar1 + dVar22;
      dVar23 = dVar23 + dVar20;
      dVar18 = dVar18 + dVar25;
      dVar17 = SQRT(dVar22 * dVar22 + dVar25 * dVar25 + dVar20 * dVar20);
      if (bVar8) {
        dVar12 = local_248 - local_270;
        dVar13 = local_270 + local_248;
        dVar16 = dVar12;
        if (dVar13 <= dVar12) {
          dVar16 = dVar13;
        }
        if (dVar12 <= dVar13) {
          dVar12 = dVar13;
        }
        dVar13 = local_258 - local_268;
        dVar15 = local_268 + local_258;
        dVar21 = dVar13;
        if (dVar15 <= dVar13) {
          dVar21 = dVar15;
        }
        if (dVar13 <= dVar15) {
          dVar13 = dVar15;
        }
        dVar24 = local_250 - local_260;
        dVar14 = local_260 + local_250;
        dVar15 = dVar24;
        if (dVar14 <= dVar24) {
          dVar15 = dVar14;
        }
        if (dVar24 <= dVar14) {
          dVar24 = dVar14;
        }
        dVar14 = dVar18 - dVar25;
        if (dVar14 <= dVar16) {
          dVar16 = dVar14;
        }
        if (dVar12 <= dVar14) {
          dVar12 = dVar14;
        }
        dVar14 = dVar23 - dVar20;
        if (dVar14 <= dVar21) {
          dVar21 = dVar14;
        }
        if (dVar13 <= dVar14) {
          dVar13 = dVar14;
        }
        dVar14 = dVar1 - dVar22;
        if (dVar14 <= dVar15) {
          dVar15 = dVar14;
        }
        if (dVar24 <= dVar14) {
          dVar24 = dVar14;
        }
        dVar25 = dVar25 + dVar18;
        if (dVar25 <= dVar16) {
          dVar16 = dVar25;
        }
        if (dVar12 <= dVar25) {
          dVar12 = dVar25;
        }
        dVar22 = dVar22 + dVar1;
        dVar20 = dVar20 + dVar23;
        if (dVar20 <= dVar21) {
          dVar21 = dVar20;
        }
        if (dVar22 <= dVar15) {
          dVar15 = dVar22;
        }
        if (dVar13 <= dVar20) {
          dVar13 = dVar20;
        }
        if (dVar24 <= dVar22) {
          dVar24 = dVar22;
        }
        dVar22 = (dVar24 - dVar15) * 0.5;
        dVar20 = (dVar13 - dVar21) * 0.5;
        dVar25 = (dVar12 - dVar16) * 0.5;
        dVar21 = dVar21 + dVar20;
        dVar16 = dVar16 + dVar25;
        dVar15 = dVar15 + dVar22;
        dVar18 = dVar17 + SQRT((dVar1 - dVar15) * (dVar1 - dVar15) +
                               (dVar18 - dVar16) * (dVar18 - dVar16) +
                               (dVar23 - dVar21) * (dVar23 - dVar21));
        dVar1 = local_240 +
                SQRT((local_250 - dVar15) * (local_250 - dVar15) +
                     (local_248 - dVar16) * (local_248 - dVar16) +
                     (local_258 - dVar21) * (local_258 - dVar21));
        if (dVar1 <= dVar18) {
          dVar1 = dVar18;
        }
        dVar13 = SQRT(dVar22 * dVar22 + dVar25 * dVar25 + dVar20 * dVar20);
        local_278 = dVar17;
        if (dVar1 <= dVar13) {
          dVar13 = dVar1;
        }
      }
      else {
        bVar8 = true;
        dVar16 = dVar18;
        dVar13 = dVar17;
        dVar21 = dVar23;
        dVar15 = dVar1;
      }
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x80;
    } while (lVar11 < *(int *)(param_1 + 0x728));
    dStack_1f0 = dVar21;
    local_1e8 = dVar15;
    dStack_1e0 = dVar25;
    local_1d8 = dVar20;
    dStack_1d0 = dVar22;
    local_1c8 = dVar13;
    pdVar9 = local_238;
    if (bVar8) {
      pdVar9 = &local_1f8;
    }
  }
  local_1f8 = dVar16;
  local_238[4] = 0.0;
  local_238[5] = 0.0;
  local_238[2] = 0.0;
  local_238[3] = 0.0;
  local_238[0] = 0.0;
  local_238[1] = 0.0;
  local_238[6] = 0.0;
  param_2[6] = pdVar9[6];
  dVar16 = *pdVar9;
  dVar1 = pdVar9[1];
  dVar18 = pdVar9[2];
  dVar23 = pdVar9[3];
  uVar5 = *(undefined4 *)((longlong)pdVar9 + 0x24);
  uVar6 = *(undefined4 *)(pdVar9 + 5);
  uVar7 = *(undefined4 *)((longlong)pdVar9 + 0x2c);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(pdVar9 + 4);
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar5;
  *(undefined4 *)(param_2 + 5) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar7;
  param_2[2] = dVar18;
  param_2[3] = dVar23;
  *param_2 = dVar16;
  param_2[1] = dVar1;
  if ((local_f0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14014e28e FUN_14014e28e body=20 status=ok
// SIG undefined FUN_14014e28e(void)

void FUN_14014e28e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_14014e2a2(param_1,*(undefined4 *)(param_1 + 8),param_2);
    return;
  }
  return;
}



// FUNCTION 14014e2a2 FUN_14014e2a2 body=228 status=ok
// SIG undefined FUN_14014e2a2(void)

void FUN_14014e2a2(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,0x10);
    }
    _Src = (void *)*param_1;
    iVar4 = param_3 * 0x10;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar3 = (ulonglong)((uint)(0xf < iVar4) * 8);
    lVar1 = uVar3 + 7;
    uVar3 = uVar3 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar3);
    uVar5 = (longlong)_Dst + (longlong)iVar4;
    if (puVar2[1] < uVar5) {
      FUN_140023dd8(puVar2,iVar4 + (uint)(0xf < iVar4) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar3);
      uVar5 = (longlong)iVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar5;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 << 4);
      return;
    }
  }
  return;
}



// FUNCTION 14014e388 FUN_14014e388 body=1329 status=ok
// SIG undefined FUN_14014e388(void)

void FUN_14014e388(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  code *pcVar1;
  char *_Str;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 uVar7;
  size_t sVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  char *pcVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_558 [40];
  uint local_530;
  undefined8 uStack_52c;
  undefined4 uStack_524;
  undefined1 local_520;
  undefined1 uStack_51f;
  undefined2 uStack_51e;
  undefined4 uStack_51c;
  int local_518;
  undefined1 local_514;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined4 local_500;
  longlong local_4f8;
  undefined8 uStack_4f0;
  uint local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined1 local_4d8;
  undefined1 uStack_4d7;
  undefined2 uStack_4d6;
  undefined4 uStack_4d4;
  undefined8 uStack_4d0;
  undefined1 *local_4c8;
  ulonglong uStack_4c0;
  undefined8 local_4b8;
  longlong lStack_4b0;
  undefined8 uStack_4a8;
  uint local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined1 local_b8 [40];
  undefined2 local_90 [2];
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_558;
  if (*(int *)(param_2 + 0x1c) < 1) {
    cVar6 = *(char *)(param_2 + 0x40);
    if (cVar6 != '\x03') {
      uStack_4d0 = (undefined8 *)CONCAT44(uStack_4d0._4_4_,(undefined4)uStack_4d0);
      if ((cVar6 == '\0') ||
         (uStack_4d0 = (undefined8 *)CONCAT44(uStack_4d0._4_4_,(undefined4)uStack_4d0),
         0xfd < (byte)(cVar6 - 3U))) goto LAB_14014e70b;
LAB_14014e3d8:
      if (*(char *)(param_2 + 0x40) == '\x03') {
        uVar7 = *(undefined8 *)(param_2 + 0x44);
        local_4d8 = (undefined1)uVar7;
        uStack_4d7 = (undefined1)((ulonglong)uVar7 >> 8);
        uStack_4d6 = (undefined2)((ulonglong)uVar7 >> 0x10);
        uStack_4d4 = (undefined4)((ulonglong)uVar7 >> 0x20);
      }
      else {
        FUN_14883d81c((uint *)(param_2 + 0x40),&local_4d8);
      }
      FUN_1446dcdd4(local_58,&local_4d8);
      goto LAB_14014e403;
    }
    if (*(longlong *)(param_2 + 0x44) != 0) goto LAB_14014e3d8;
    uStack_4a8 = 0;
    local_4a0 = 0;
    uStack_49c = 0;
    local_4b8 = 0;
    lStack_4b0 = 0;
    local_4c8 = (undefined1 *)0x0;
    uStack_4c0 = 0;
    local_4d8 = 0;
    uStack_4d7 = 0;
    uStack_4d6 = 0;
    uStack_4d0._4_4_ = 0;
    uStack_498 = 0;
    uStack_494 = 0;
    *(undefined1 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    uStack_4d4 = 0;
    uStack_4d0._0_4_ = 0;
    FUN_1404e49fa(param_2 + 0x18,&local_4c8);
    *(undefined1 *)(param_2 + 9) = uStack_4d7;
    uStack_4d7 = 0;
    *(uint *)(param_2 + 0x40) = local_4a0;
    *(undefined4 *)(param_2 + 0x44) = uStack_49c;
    *(undefined4 *)(param_2 + 0x48) = uStack_498;
    *(undefined4 *)(param_2 + 0x4c) = uStack_494;
    local_40 = lStack_4b0;
  }
  else {
    FUN_14014e996(param_2 + 8,local_58,1,0);
LAB_14014e403:
    local_90[0] = 0;
    local_8c = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_1447a97f4(local_b8,local_58);
    FUN_14071d490(local_b8,local_90);
    if ((char)local_90[0] == '\v') {
      if (((((int)local_80 == 0) || (local_80._4_4_ == 0)) || ((int)local_80 == DAT_14c948000)) ||
         (local_80._4_4_ < 1)) {
        uStack_4d0._0_4_ = DAT_14c948620;
        local_4d8 = (undefined1)DAT_14c948618;
        uStack_4d7 = (undefined1)((ulonglong)DAT_14c948618 >> 8);
        uStack_4d6 = (undefined2)((ulonglong)DAT_14c948618 >> 0x10);
        uStack_4d4 = (undefined4)((ulonglong)DAT_14c948618 >> 0x20);
      }
      else {
        puVar11 = &uStack_78;
        if (0 < uStack_60._4_4_) {
          puVar11 = local_68;
        }
        if (local_80._4_4_ != 1) {
          puVar11 = local_68;
        }
        uVar7 = *puVar11;
        local_4d8 = (undefined1)uVar7;
        uStack_4d7 = (undefined1)((ulonglong)uVar7 >> 8);
        uStack_4d6 = (undefined2)((ulonglong)uVar7 >> 0x10);
        uStack_4d4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_4d0._0_4_ = *(undefined4 *)(puVar11 + 1);
      }
      local_520 = 0;
      uStack_51f = 0;
      uStack_51e = 0;
      uStack_51c = 0;
      pcVar1 = (code *)*param_3;
      plVar13 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar13 = (longlong *)param_3[2];
      }
      uVar7 = (**(code **)(*plVar13 + 8))(plVar13);
      cVar6 = (*pcVar1)(uVar7,&local_4d8,&local_520);
      if (cVar6 != '\0') {
        FUN_14014e938(&local_4d8,local_90);
        local_4a0 = local_4a0 & 0xffffff00;
        uStack_49c = 0;
        uStack_498 = 0;
        uStack_494 = 0;
        FUN_1411b8130(param_2 + 8,&local_4d8);
        *(uint *)(param_2 + 0x40) = local_4a0;
        *(undefined4 *)(param_2 + 0x44) = uStack_49c;
        *(undefined4 *)(param_2 + 0x48) = uStack_498;
        *(undefined4 *)(param_2 + 0x4c) = uStack_494;
        goto LAB_14014e4bf;
      }
      uStack_4d0 = &local_4b8;
      uStack_4c0 = uStack_4c0 & 0xffffffffffffff00;
      local_4d8 = SUB81(uStack_4d0,0);
      uStack_4d7 = (undefined1)((ulonglong)uStack_4d0 >> 8);
      uStack_4d6 = (undefined2)((ulonglong)uStack_4d0 >> 0x10);
      uStack_4d4 = (undefined4)((ulonglong)uStack_4d0 >> 0x20);
      local_4c8 = local_b8;
      FUN_14014e8d0(local_90,&local_4d8);
      uVar5 = uStack_4d4;
      uVar4 = uStack_4d6;
      uVar3 = uStack_4d7;
      uVar2 = local_4d8;
      *(undefined1 *)uStack_4d0 = 0;
      _Str = (char *)CONCAT44(uStack_4d4,CONCAT22(uStack_4d6,CONCAT11(uStack_4d7,local_4d8)));
      local_530 = local_530 & 0xffffff00;
      uStack_52c = 0;
      uStack_524 = 0;
      if (_Str == (char *)0x0) {
LAB_14014e7a6:
        uVar14 = 0;
        uVar17 = 0;
      }
      else {
        sVar8 = strlen(_Str);
        iVar10 = (int)sVar8;
        if (iVar10 == 0) goto LAB_14014e7a6;
        lVar12 = (longlong)iVar10;
        pcVar15 = _Str + lVar12 + -1;
        uVar9 = 0;
        if (pcVar15 < _Str) {
          lVar19 = 0;
        }
        else {
          do {
            if (9 < (byte)(*pcVar15 - 0x30U)) break;
            uVar9 = uVar9 + 1;
            pcVar15 = pcVar15 + -1;
          } while (_Str <= pcVar15);
          if (uVar9 == 0 || iVar10 <= (int)uVar9) {
LAB_14014e63f:
            lVar19 = 0;
          }
          else {
            lVar19 = 0;
            if ((uVar9 < 0xb) && (lVar16 = -(ulonglong)uVar9, _Str[lVar16 + lVar12 + -1] == '_')) {
              if ((uVar9 == 1) || (_Str[lVar16 + lVar12] != '0')) {
                lVar18 = 0;
                do {
                  lVar19 = (longlong)_Str[lVar16 + lVar12] + lVar18 * 10;
                  lVar18 = lVar19 + -0x30;
                  lVar16 = lVar16 + 1;
                } while (lVar16 != 0);
                if (lVar18 < 0x7fffffff) {
                  iVar10 = ~uVar9 + iVar10;
                  lVar19 = lVar19 + -0x2f;
                  goto LAB_14014e642;
                }
              }
              goto LAB_14014e63f;
            }
          }
LAB_14014e642:
          if (iVar10 == 0) goto LAB_14014e7a6;
        }
        local_520 = uVar2;
        uStack_51f = uVar3;
        uStack_51e = uVar4;
        uStack_51c = uVar5;
        local_514 = 0;
        local_518 = iVar10;
        uVar9 = FUN_14001a6c0(&local_520,1);
        uVar17 = lVar19 << 0x20;
        uVar14 = (ulonglong)uVar9;
      }
      FUN_144976b9c(&local_530,uVar14 | uVar17);
      uStack_51f = 0;
      local_510 = 0;
      uStack_508 = 0;
      local_500 = 0;
      local_4f8 = 0;
      uStack_4f0 = 0;
      local_4e8 = local_530;
      uStack_4e4 = (undefined4)uStack_52c;
      uStack_4e0 = uStack_52c._4_4_;
      uStack_4dc = uStack_524;
      *(undefined1 *)(param_2 + 8) = 0;
      local_520 = 0;
      *(undefined8 *)(param_2 + 0xc) = 0;
      uStack_51c = 0;
      local_518 = 0;
      FUN_1404e49fa(param_2 + 0x18,&local_510);
      *(undefined1 *)(param_2 + 9) = uStack_51f;
      uStack_51f = 0;
      *(uint *)(param_2 + 0x40) = local_4e8;
      *(undefined4 *)(param_2 + 0x44) = uStack_4e4;
      *(undefined4 *)(param_2 + 0x48) = uStack_4e0;
      *(undefined4 *)(param_2 + 0x4c) = uStack_4dc;
      if (local_4f8 != 0) {
        FUN_1400020a8();
      }
      if ((char)uStack_4c0 == '\x01') {
        lVar12 = CONCAT44(uStack_4d4,CONCAT22(uStack_4d6,CONCAT11(uStack_4d7,local_4d8)));
        goto LAB_14014e4c8;
      }
    }
    else {
      FUN_14014e938(&local_4d8,local_90);
      local_4a0 = local_4a0 & 0xffffff00;
      uStack_49c = 0;
      uStack_498 = 0;
      uStack_494 = 0;
      *(undefined1 *)(param_2 + 8) = local_4d8;
      local_4d8 = 0;
      *(ulonglong *)(param_2 + 0xc) = CONCAT44((undefined4)uStack_4d0,uStack_4d4);
      uStack_4d4 = 0;
      uStack_4d0._0_4_ = 0;
      FUN_1404e49fa(param_2 + 0x18,&local_4c8);
      *(undefined1 *)(param_2 + 9) = uStack_4d7;
      uStack_4d7 = 0;
      *(uint *)(param_2 + 0x40) = local_4a0;
      *(undefined4 *)(param_2 + 0x44) = uStack_49c;
      *(undefined4 *)(param_2 + 0x48) = uStack_498;
      *(undefined4 *)(param_2 + 0x4c) = uStack_494;
LAB_14014e4bf:
      lVar12 = lStack_4b0;
      if (lStack_4b0 != 0) {
LAB_14014e4c8:
        FUN_1400020a8(lVar12);
      }
    }
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
LAB_14014e70b:
  if ((local_30 ^ (ulonglong)auStack_558) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14014e8d0 FUN_14014e8d0 body=102 status=ok
// SIG undefined FUN_14014e8d0(void)

void FUN_14014e8d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14014e996(param_1,local_40,1,0);
  FUN_144859fb0(local_40,param_2,1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14014e938 FUN_14014e938 body=93 status=ok
// SIG undefined FUN_14014e938(void)

undefined2 * FUN_14014e938(undefined2 *param_1,undefined1 *param_2)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)param_1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  FUN_1404e49fa(param_1 + 8,param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 1) = param_2[1];
  param_2[1] = 0;
  return param_1;
}



// FUNCTION 14014e996 FUN_14014e996 body=978 status=ok
// SIG undefined FUN_14014e996(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_14014e996(char *param_1,int *param_2,char param_3,char param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  if (param_3 == '\0') {
    FUN_1447715ec(param_2,param_1 + 0x10);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x14);
    if (iVar5 < 2 && *(int *)(param_1 + 0x34) < 1) {
      piVar6 = (int *)(param_1 + 0x18);
    }
    else {
      piVar6 = *(int **)(param_1 + 0x28);
    }
    if (iVar5 == 0) {
      FUN_1447a993c(param_2,0);
    }
    else {
      lVar8 = (longlong)iVar5 * 0xc;
      lVar3 = 0;
      iVar5 = 0;
      do {
        iVar5 = (iVar5 + 1) - (uint)(*(int *)((longlong)piVar6 + lVar3) == 0);
        lVar3 = lVar3 + 0xc;
      } while (lVar8 != lVar3);
      FUN_1447a993c(param_2,iVar5);
      iVar5 = 0;
      do {
        if (*piVar6 != 0) {
          FUN_144928d62(param_2,iVar5,piVar6);
          iVar5 = iVar5 + 1;
        }
        piVar6 = piVar6 + 3;
        lVar8 = lVar8 + -0xc;
      } while (lVar8 != 0);
    }
  }
  cVar2 = *param_1;
  if (param_4 == '\0') {
    if (cVar2 != '\n') goto LAB_14014ea5c;
    if (((*(int *)(param_1 + 0x10) == 0) || (iVar5 = *(int *)(param_1 + 0x14), iVar5 == 0)) ||
       (*(int *)(param_1 + 0x10) == DAT_14c948000)) {
LAB_14014ecff:
      local_80 = DAT_14c948620;
      local_88 = DAT_14c948618;
    }
    else {
      if ((iVar5 < 2) && (*(int *)(param_1 + 0x34) < 1)) {
        pcVar4 = param_1 + 0x18;
      }
      else {
        pcVar4 = *(char **)(param_1 + 0x28);
      }
      if ((iVar5 == 1) || (iVar5 < 2)) goto LAB_14014ecff;
      local_80 = *(int *)(pcVar4 + 0x14);
      local_88 = *(undefined8 *)(pcVar4 + 0xc);
    }
    cVar2 = FUN_14014ed69(&local_88);
    if (cVar2 != '\0') {
      lVar8 = (longlong)param_2[1];
      piVar6 = param_2 + 2;
      if (1 < lVar8) {
        piVar6 = *(int **)(param_2 + 6);
      }
      if (0 < param_2[9]) {
        piVar6 = *(int **)(param_2 + 6);
      }
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      FUN_1447a993c(&local_78,param_2[1] + -1);
      if (1 < lVar8) {
        uVar7 = 0;
        do {
          piVar6 = piVar6 + 3;
          FUN_144928d62(&local_78,uVar7 & 0xffffffff,piVar6);
          uVar7 = uVar7 + 1;
        } while (lVar8 - 1U != uVar7);
      }
      param_2[8] = 0;
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      if (param_2[9] != 0) {
        FUN_1446dda88(param_2 + 6,0);
      }
      FUN_1404e49fa(param_2,&local_78);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      cVar2 = *param_1;
      goto LAB_14014eb91;
    }
  }
  else {
LAB_14014eb91:
    if (cVar2 != '\n') goto LAB_14014ea5c;
  }
  cVar2 = param_1[1];
  if (cVar2 != '\0') {
    local_78 = DAT_14c948618;
    iVar5 = DAT_14c948620;
    if (((*(int *)(param_1 + 0x10) != 0) && (iVar1 = *(int *)(param_1 + 0x14), iVar1 != 0)) &&
       (*(int *)(param_1 + 0x10) != DAT_14c948000)) {
      if ((iVar1 < 2) && (*(int *)(param_1 + 0x34) < 1)) {
        param_1 = param_1 + 0x18;
      }
      else {
        param_1 = *(char **)(param_1 + 0x28);
      }
      if ((iVar1 != 1) && (4 < iVar1)) {
        local_78 = *(undefined8 *)(param_1 + 0x30);
        iVar5 = *(int *)(param_1 + 0x38);
      }
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar5);
    if ((int)local_78 != 0) {
      iVar1 = param_2[1];
      piVar6 = (int *)&DAT_14c948618;
      if (((*param_2 != 0) && (iVar1 != 0)) && (*param_2 != DAT_14c948000)) {
        piVar6 = param_2 + 2;
        if (0 < param_2[9]) {
          piVar6 = *(int **)(param_2 + 6);
        }
        if (1 < iVar1) {
          piVar6 = *(int **)(param_2 + 6);
        }
        piVar6 = piVar6 + ((longlong)iVar1 + -1) * 3;
      }
      if (((int)local_78 == *piVar6) && (iVar5 == piVar6[2])) {
        local_98 = 0;
        local_90 = 0;
        if (cVar2 == '\x02') {
          local_90 = DAT_14cb7bdb8;
          local_98 = _DAT_14cb7bdb0;
        }
        else if (cVar2 == '\x03') {
          local_90 = DAT_14cb7bc18;
          local_98 = _DAT_14cb7bc10;
        }
        else if (cVar2 == '\x01') {
          local_90 = DAT_14cb7bc00;
          local_98 = _DAT_14cb7bbf8;
        }
        FUN_144928d62(param_2,(longlong)iVar1 + -1,&local_98);
        FUN_144928d62(param_2,iVar1,&local_78);
      }
    }
  }
LAB_14014ea5c:
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14014ed69 FUN_14014ed69 body=101 status=ok
// SIG undefined FUN_14014ed69(void)

bool FUN_14014ed69(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *param_1;
  if ((((iVar1 != DAT_14cb7bbb0) || (bVar2 = true, param_1[2] != DAT_14cb7bbb4._4_4_)) &&
      ((iVar1 != DAT_14cb7bd98 || (bVar2 = true, param_1[2] != DAT_14cb7bd9c._4_4_)))) &&
     ((iVar1 != DAT_14cb7bbe0 || (bVar2 = true, param_1[2] != DAT_14cb7bbe4._4_4_)))) {
    if (iVar1 == DAT_14cb7bbc8) {
      return param_1[2] == DAT_14cb7bbcc._4_4_;
    }
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 14014edce FUN_14014edce body=257 status=ok
// SIG undefined FUN_14014edce(void)

bool FUN_14014edce(uint *param_1,longlong *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  
  uVar3 = *param_1;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar6 = (ulonglong)(uVar3 & 0xffff);
  uVar2 = *(ushort *)((&DAT_14c87eb10)[uVar3 >> 0x10] + uVar6 * 2);
  if ((uVar2 & 1) == 0) {
    puVar1 = (ushort *)((&DAT_14c87eb10)[uVar3 >> 0x10] + uVar6 * 2);
    uVar6 = (ulonglong)(uVar2 >> 6);
    lVar4 = param_2[1];
    if ((ulonglong)param_2[2] <= lVar4 + uVar6) {
      FUN_145753a78(param_2,uVar6);
      lVar4 = param_2[1];
    }
    param_2[1] = uVar6 + lVar4;
    memcpy((void *)((longlong)((int)lVar4 - (int)*param_2) + *param_2),puVar1 + 1,
           (ulonglong)(*puVar1 >> 6));
    uVar3 = param_1[1];
    if (uVar3 != 0) {
      puVar5 = (undefined1 *)param_2[1];
      if ((undefined1 *)param_2[2] <= puVar5 + 1) {
        FUN_145753a78(param_2,1);
        puVar5 = (undefined1 *)param_2[1];
      }
      param_2[1] = (longlong)(puVar5 + 1);
      *puVar5 = 0x5f;
      FUN_14089c9ba(param_2,&DAT_149dfc0ac,uVar3 - 1);
    }
  }
  return (uVar2 & 1) == 0;
}



// FUNCTION 14014eed0 FUN_14014eed0 body=1347 status=ok
// SIG undefined FUN_14014eed0(void)

undefined8 * FUN_14014eed0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  void *_Src;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  byte bVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  
  FUN_14014f414();
  *param_1 = &PTR_FUN_149f55fb0;
  param_1[0xe] = 0;
  iVar7 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 0xf) = iVar7;
  if ((longlong)iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
    uVar12 = 0;
  }
  else {
    FUN_140509e62(param_1 + 0xe,iVar7,0);
    memcpy((void *)param_1[0xe],_Src,(longlong)iVar7 << 3);
    uVar12 = *(uint *)(param_1 + 0xf);
  }
  plVar1 = param_1 + 0x10;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0xf;
  uVar15 = *(uint *)(param_1 + 5);
  if ((int)uVar12 < (int)*(uint *)(param_1 + 5)) {
    uVar15 = uVar12;
  }
  uVar13 = (ulonglong)uVar15;
  if (uVar15 != 0) {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar15);
    }
    FUN_144727cd0(plVar1);
    iVar7 = *(int *)(param_1 + 0x11);
    *(uint *)(param_1 + 0x11) = iVar7 + uVar15;
    if ((uint)(*(int *)((longlong)param_1 + 0x8c) - iVar7) < uVar15) {
      FUN_14482b872(plVar1);
    }
    if (iVar7 < (int)uVar15) {
      lVar19 = *plVar1;
      iVar18 = *(int *)((longlong)param_1 + 0xb4);
      puVar16 = (undefined4 *)(lVar19 + uVar13 * 0x18 + -0x14);
      uVar12 = uVar15;
      do {
        uVar12 = uVar12 - 1;
        if (iVar18 != 0) {
          *(uint *)(lVar19 + (longlong)*(int *)(param_1 + 0x16) * 0x18) = uVar12;
        }
        puVar16[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0xb4) < 1) {
          uVar17 = 0xffffffff;
        }
        else {
          uVar17 = *(undefined4 *)(param_1 + 0x16);
        }
        uVar13 = uVar13 - 1;
        *puVar16 = uVar17;
        *(uint *)(param_1 + 0x16) = uVar12;
        iVar18 = *(int *)((longlong)param_1 + 0xb4) + 1;
        *(int *)((longlong)param_1 + 0xb4) = iVar18;
        puVar16 = puVar16 + -6;
      } while ((longlong)iVar7 < (longlong)uVar13);
    }
    puVar20 = param_1 + 0x12;
    *(uint *)(param_1 + 0x15) = uVar15;
    uVar12 = uVar15 + 0x1f >> 5;
    if (*(int *)((longlong)param_1 + 0xac) + 0x1fU >> 5 < uVar12) {
      FUN_14499171c(puVar20,0,uVar12,4);
      *(uint *)((longlong)param_1 + 0xac) = uVar15 + 0x1f & 0xffffffe0;
    }
    puVar11 = (undefined8 *)param_1[0x14];
    if ((undefined8 *)param_1[0x14] == (undefined8 *)0x0) {
      puVar11 = puVar20;
    }
    if (uVar15 < 0x101) {
      uVar12 = uVar12 + (uVar12 == 0);
    }
    memset(puVar11,0,(ulonglong)(uVar12 << 2));
    iVar7 = *(int *)(param_1 + 0x15);
    iVar18 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar18 = iVar7;
    }
    if (iVar7 % 0x20 != 0) {
      if ((undefined8 *)param_1[0x14] != (undefined8 *)0x0) {
        puVar20 = (undefined8 *)param_1[0x14];
      }
      bVar10 = -(char)(iVar7 % 0x20);
      *(uint *)((longlong)puVar20 + (longlong)(iVar18 >> 5) * 4) =
           (uint)(*(int *)((longlong)puVar20 + (longlong)(iVar18 >> 5) * 4) << (bVar10 & 0x1f)) >>
           (bVar10 & 0x1f);
    }
    if (uVar15 < 4) {
      iVar7 = 1;
    }
    else {
      uVar12 = (uVar15 | 1) + 0xe;
      iVar7 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      iVar7 = 1 << ((byte)iVar7 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x19) == 0) || (*(int *)(param_1 + 0x19) < iVar7)) {
      *(int *)(param_1 + 0x19) = iVar7;
      FUN_14014f608(plVar1);
    }
  }
  iVar7 = *(int *)(param_1 + 0xf);
  if (0 < iVar7) {
    puVar20 = param_1 + 0x12;
    puVar11 = param_1 + 0x17;
    lVar19 = 0;
    do {
      if (*(int *)(param_1 + 5) <= lVar19) {
        return param_1;
      }
      lVar14 = *(longlong *)(param_1[4] + lVar19 * 8);
      if ((lVar14 != 0) && (*(char *)(lVar14 + 0x1c) == '\x04')) {
        lVar5 = param_1[0xe];
        uVar13 = *(ulonglong *)(lVar14 + 0x20);
        if (*(int *)((longlong)param_1 + 0xb4) == 0) {
          iVar7 = *(int *)(param_1 + 0x11);
          *(int *)(param_1 + 0x11) = iVar7 + 1;
          if (*(int *)((longlong)param_1 + 0x8c) == iVar7) {
            FUN_14482b872(plVar1,iVar7);
          }
          lVar14 = (longlong)iVar7;
          iVar18 = FUN_144a54ea4(puVar20,1);
          puVar9 = (undefined8 *)param_1[0x14];
          if ((undefined8 *)param_1[0x14] == (undefined8 *)0x0) {
            puVar9 = puVar20;
          }
          iVar8 = iVar18 + 0x1f;
          if (-1 < iVar18) {
            iVar8 = iVar18;
          }
          bVar10 = (byte)iVar18 & 0x1f;
          puVar2 = (uint *)((longlong)puVar9 + (longlong)(iVar8 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
        }
        else {
          iVar7 = *(int *)(param_1 + 0x16);
          lVar14 = (longlong)iVar7;
          iVar18 = *(int *)(param_1[0x10] + 4 + lVar14 * 0x18);
          *(int *)(param_1 + 0x16) = iVar18;
          iVar8 = *(int *)((longlong)param_1 + 0xb4) + -1;
          *(int *)((longlong)param_1 + 0xb4) = iVar8;
          if (iVar8 != 0) {
            *(undefined4 *)(param_1[0x10] + (longlong)iVar18 * 0x18) = 0xffffffff;
          }
        }
        puVar9 = (undefined8 *)param_1[0x14];
        if ((undefined8 *)param_1[0x14] == (undefined8 *)0x0) {
          puVar9 = puVar20;
        }
        iVar18 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar18 = iVar7;
        }
        puVar2 = (uint *)((longlong)puVar9 + (longlong)(iVar18 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)iVar7 & 0x1f);
        puVar3 = (ulonglong *)(param_1[0x10] + lVar14 * 0x18);
        *puVar3 = uVar13;
        puVar3[1] = *(ulonglong *)(lVar5 + lVar19 * 8);
        *(undefined4 *)(puVar3 + 2) = 0xffffffff;
        uVar12 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        uVar12 = uVar12 >> 0x10 ^ uVar12;
        uVar15 = *(int *)(param_1 + 0x11) - *(int *)((longlong)param_1 + 0xb4);
        if ((uVar15 != 0) && (uVar15 != 1)) {
          puVar9 = (undefined8 *)param_1[0x18];
          if ((undefined8 *)param_1[0x18] == (undefined8 *)0x0) {
            puVar9 = puVar11;
          }
          iVar18 = *(int *)((longlong)puVar9 +
                           (ulonglong)(*(int *)(param_1 + 0x19) - 1U & uVar12) * 4);
          if (iVar18 != -1) {
            do {
              puVar4 = (ulonglong *)(*plVar1 + (longlong)iVar18 * 0x18);
              if (*puVar4 == uVar13) {
                uVar17 = *(undefined4 *)((longlong)puVar3 + 4);
                uVar13 = puVar3[1];
                uVar6 = *(undefined4 *)((longlong)puVar3 + 0xc);
                *(int *)puVar4 = (int)*puVar3;
                *(undefined4 *)((longlong)puVar4 + 4) = uVar17;
                *(int *)(puVar4 + 1) = (int)uVar13;
                *(undefined4 *)((longlong)puVar4 + 0xc) = uVar6;
                FUN_146db6706(plVar1,iVar7);
                goto LAB_14014f2f6;
              }
              iVar18 = (int)puVar4[2];
            } while (iVar18 != -1);
          }
        }
        if (uVar15 < 4) {
          iVar18 = 1;
        }
        else {
          uVar13 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
          lVar14 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar18 = 1 << ((byte)lVar14 & 0x1f);
        }
        if (((int)uVar15 < 1) || (iVar18 <= *(int *)(param_1 + 0x19))) {
          uVar12 = *(int *)(param_1 + 0x19) - 1U & uVar12;
          *(uint *)((longlong)puVar3 + 0x14) = uVar12;
          puVar9 = (undefined8 *)param_1[0x18];
          if ((undefined8 *)param_1[0x18] == (undefined8 *)0x0) {
            puVar9 = puVar11;
          }
          *(undefined4 *)(puVar3 + 2) =
               *(undefined4 *)
                ((longlong)puVar9 +
                ((longlong)*(int *)(param_1 + 0x19) - 1U & (longlong)(int)uVar12) * 4);
          puVar9 = (undefined8 *)param_1[0x18];
          if ((undefined8 *)param_1[0x18] == (undefined8 *)0x0) {
            puVar9 = puVar11;
          }
          *(int *)((longlong)puVar9 +
                  ((longlong)*(int *)(param_1 + 0x19) - 1U & (longlong)(int)uVar12) * 4) = iVar7;
        }
        else {
          *(int *)(param_1 + 0x19) = iVar18;
          FUN_14014f608(plVar1);
        }
LAB_14014f2f6:
        iVar7 = *(int *)(param_1 + 0xf);
      }
      lVar19 = lVar19 + 1;
    } while (0 < iVar7);
  }
  return param_1;
}



// FUNCTION 14014f414 FUN_14014f414 body=499 status=ok
// SIG undefined FUN_14014f414(void)

undefined8 * FUN_14014f414(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double local_80;
  double local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x505;
  *param_1 = &PTR_FUN_149f54080;
  param_1[4] = 0;
  param_1[4] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[6] = 0x7fefffffffffffff;
  param_1[7] = 0x7fefffffffffffff;
  param_1[8] = 0x7fefffffffffffff;
  param_1[9] = 0xffefffffffffffff;
  param_1[10] = 0xffefffffffffffff;
  param_1[0xb] = 0xffefffffffffffff;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  uVar1 = *(uint *)(param_1 + 5);
  if ((ulonglong)uVar1 == 0) {
    uStack_88 = 0.0;
    local_80 = 0.0;
    local_98 = 0.0;
    uStack_90 = 0.0;
    local_a8 = 0.0;
    dStack_a0 = 0.0;
  }
  else {
    puVar2 = (undefined8 *)param_1[4];
    plVar3 = (longlong *)*puVar2;
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_a8);
    if (1 < (int)uVar1) {
      uVar5 = 1;
      do {
        plVar3 = (longlong *)puVar2[uVar5];
        (**(code **)(*plVar3 + 0x80))(plVar3,&local_70);
        uVar4 = SUB84(local_98,0);
        uVar6 = (undefined4)((ulonglong)local_98 >> 0x20);
        if (local_60 <= local_98) {
          uVar4 = SUB84(local_60,0);
          uVar6 = (undefined4)((ulonglong)local_60 >> 0x20);
        }
        if ((double)CONCAT44(uStack_64,local_68) <= dStack_a0) {
          dStack_a0 = (double)CONCAT44(uStack_64,local_68);
        }
        if (local_70 <= local_a8) {
          local_a8 = local_70;
        }
        local_98 = (double)CONCAT44(uVar6,uVar4);
        uVar4 = SUB84(local_80,0);
        uVar6 = (undefined4)((ulonglong)local_80 >> 0x20);
        if (local_80 <= local_48) {
          uVar4 = SUB84(local_48,0);
          uVar6 = (undefined4)((ulonglong)local_48 >> 0x20);
        }
        if (uStack_88 <= local_50) {
          uStack_88 = local_50;
        }
        if (uStack_90 <= local_58) {
          uStack_90 = local_58;
        }
        local_80 = (double)CONCAT44(uVar6,uVar4);
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
  }
  param_1[8] = local_98;
  param_1[6] = local_a8;
  param_1[7] = dStack_a0;
  param_1[0xb] = local_80;
  *(undefined4 *)(param_1 + 9) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_90._4_4_;
  *(undefined4 *)(param_1 + 10) = (undefined4)uStack_88;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_88._4_4_;
  local_70 = (double)param_1[4];
  local_68 = *(undefined4 *)(param_1 + 5);
  uVar4 = FUN_14485a28c();
  *(undefined4 *)(param_1 + 0xd) = uVar4;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14014f608 FUN_14014f608 body=652 status=ok
// SIG undefined FUN_14014f608(void)

void FUN_14014f608(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0);
    }
LAB_14014f64d:
    uVar3 = 0;
    do {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
  }
  else {
    if (uVar7 == 0) goto LAB_14014f73f;
    FUN_1446efa72(plVar5,0);
    if (0 < (int)uVar7) goto LAB_14014f64d;
  }
  local_48 = (uint *)(param_1 + 2);
  iVar8 = (int)param_1[5];
  local_4c = 1;
  if (iVar8 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = local_48;
    }
    uVar7 = *puVar9;
    if (uVar7 == 0) {
      iVar11 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar11 = iVar8 + -1;
      }
      uVar6 = 0;
      uVar10 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar10 = uVar6;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar11 = 0;
      do {
        local_3c = iVar8;
        if (uVar10 == uVar6) goto LAB_14014f711;
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar9[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar7 == 0);
      local_50 = (int)uVar6;
      local_38 = iVar11;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar7 & uVar7;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar8 <= local_3c) {
      local_3c = iVar8;
    }
  }
LAB_14014f711:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar8) {
    do {
      lVar2 = *local_58;
      lVar4 = (longlong)local_3c;
      uVar10 = *(ulonglong *)(lVar2 + lVar4 * 0x18);
      uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)param_1[9] - 1U;
      iVar8 = (int)uVar10;
      *(int *)(lVar2 + 0x14 + lVar4 * 0x18) = iVar8;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_14014f73f:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14014f896 FUN_14014f896 body=71 status=ok
// SIG undefined FUN_14014f896(void)

int FUN_14014f896(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar5 = 0;
    iVar4 = 0;
    do {
      iVar3 = (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x120))();
      iVar4 = iVar4 + iVar3;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return iVar4;
}



// FUNCTION 14014f8ec FUN_14014f8ec body=1050 status=ok
// SIG undefined FUN_14014f8ec(void)

void FUN_14014f8ec(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)local_78;
  FUN_14485a44c(*(undefined8 *)(param_1 + 8),param_2,0);
  uVar4 = FUN_14479fe53(*(undefined2 *)
                         (&DAT_14ca85070 +
                         (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8) * 2),
                        1,1);
  FUN_14014fd08(*(undefined8 *)(param_1 + 8),uVar4);
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) == 0) goto LAB_14014f9aa;
  local_58 = param_1;
  if (*(char *)(param_1 + 0x40) == '\0') {
    uStack_50 = *param_3;
    uStack_4c = param_3[1];
    uStack_48 = param_3[2];
    uStack_44 = param_3[3];
LAB_14014f97e:
    FUN_14015031a(&local_58);
LAB_14014f988:
    puVar10 = (undefined8 *)0x0;
  }
  else {
    bVar2 = *(byte *)(param_2 + 0x520);
    uStack_50 = *param_3;
    uStack_4c = param_3[1];
    uStack_48 = param_3[2];
    uStack_44 = param_3[3];
    if ((bVar2 & 1) == 0) goto LAB_14014f97e;
    puVar7 = TlsGetValue(DAT_14c896140);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined4 *)(puVar7 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar7);
    }
    puVar10 = (undefined8 *)puVar7[1];
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)*puVar7;
      if (puVar10 == (undefined8 *)0x0) {
        uVar6 = FUN_14470efbc(&DAT_14c896180);
        if (uVar6 == 0) {
          puVar7[1] = 0;
LAB_14014fcda:
          puVar10 = (undefined8 *)FUN_14001cc68(0x10000,0);
          puVar7[1] = puVar10;
          iVar5 = 0xff;
          puVar11 = puVar10;
          do {
            puVar9 = puVar11 + 0x20;
            *puVar11 = puVar9;
            iVar5 = iVar5 + -1;
            puVar11 = puVar9;
          } while (iVar5 != 0);
          goto LAB_14014fc44;
        }
        puVar10 = *(undefined8 **)
                   (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar6 >> 0xe) * 8) + 8 +
                   (ulonglong)(uVar6 & 0x3fff) * 0x18);
        FUN_1447d080c(uVar6);
        puVar7[1] = puVar10;
        if (puVar10 == (undefined8 *)0x0) goto LAB_14014fcda;
      }
      else {
        puVar7[1] = puVar10;
        puVar9 = puVar7;
LAB_14014fc44:
        *puVar9 = 0;
      }
      *(undefined4 *)(puVar7 + 2) = 0x100;
      iVar5 = 0xff;
    }
    else {
      iVar5 = *(int *)(puVar7 + 2) + -1;
    }
    puVar7[1] = *puVar10;
    *(int *)(puVar7 + 2) = iVar5;
    *puVar10 = UE::Tasks::Private::FTaskBase::vftable;
    puVar10[1] = &DAT_100000002;
    puVar10[2] = 0;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined4 *)(puVar10 + 4) = 0xffffffff;
    puVar10[6] = 0;
    puVar10[7] = 0x100000000;
    *(undefined1 *)(puVar10 + 8) = 1;
    puVar10[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0xe800000000000020;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0x100000000;
    *(undefined2 *)(puVar10 + 0x14) = 0;
    LOCK();
    bVar12 = *(char *)(puVar10 + 8) == '\x01';
    if (bVar12) {
      *(char *)(puVar10 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar12) {
      FUN_14008cdb0(puVar10 + 8);
    }
    *puVar10 = &PTR_FUN_14a2a0488;
    if (*(code **)(puVar10[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar10[0xe] + 0x18))(puVar10 + 0xe,puVar10 + 9);
    }
    puVar10[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar10[9] = puVar10;
    puVar10[10] = puVar10;
    lVar3 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar3 + 0x30);
    }
    puVar10[0xf] = uVar8;
    puVar10[0x10] = 0xc8000052888b0000;
    *(uint *)((longlong)puVar10 + 0x1c) = (byte)~bVar2 & 1;
    *(undefined4 *)(puVar10 + 0x15) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar10 + 0xac) = local_58._4_4_;
    *(undefined4 *)(puVar10 + 0x16) = uStack_50;
    *(undefined4 *)((longlong)puVar10 + 0xb4) = uStack_4c;
    puVar10[0x17] = CONCAT44(uStack_44,uStack_48);
    *puVar10 = &PTR_FUN_14a2a0478;
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    local_39 = 1;
    FUN_1447439e4(puVar10);
    if (puVar10 == (undefined8 *)0x0) goto LAB_14014f988;
    iVar5 = *(int *)(param_2 + 0x508);
    *(uint *)(param_2 + 0x508) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x50c) < iVar5 + 1U) {
      FUN_1401d03aa((longlong *)(param_2 + 0x500),iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x500) + (longlong)iVar5 * 8) = puVar10;
    LOCK();
    *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
    UNLOCK();
  }
  FUN_14473400f(0,0);
  puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x130);
  *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x130) = puVar10;
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar7 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
LAB_14014f9aa:
  if ((local_38 ^ (ulonglong)local_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14014fd08 FUN_14014fd08 body=222 status=ok
// SIG undefined FUN_14014fd08(void)

void FUN_14014fd08(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if ((lVar1 != 0) != (bool)param_2) {
    if (param_2 == '\0') {
      *(undefined8 *)(param_1 + 0x120) = 0;
      if (lVar1 != 0) {
        FUN_145852956(lVar1);
        FUN_1400020a8(lVar1);
      }
      FUN_14112dd96(param_1 + 0x10);
      if (*(int *)(param_1 + 0xf4) < 0) {
        *(undefined4 *)(param_1 + 0xf0) = 0;
        FUN_144727cd0(param_1 + 0xe8,0);
      }
      else {
        *(undefined4 *)(param_1 + 0xf0) = 0;
      }
      *(undefined8 *)(param_1 + 0x118) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    else {
      uVar2 = FUN_14001cc68(0x40,0x10);
      FUN_1456d1760(uVar2);
      lVar1 = *(longlong *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x120) = uVar2;
      if (lVar1 != 0) {
        FUN_145852956(lVar1);
        FUN_1400020a8(lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14014fde6 FUN_14014fde6 body=141 status=ok
// SIG undefined FUN_14014fde6(void)

void FUN_14014fde6(int *param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((char)param_1[4] == '\x01') {
    uVar1 = (ulonglong)(param_3 + -1 + (uint)(param_3 == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_3 = 1 << ((byte)lVar2 & 0x1f);
  }
  iVar3 = *param_1;
  if (*param_1 < param_3) {
    iVar3 = param_3;
  }
  local_10 = 0;
  local_18 = 0x10119;
  local_20 = 4;
  local_1c = iVar3 * 2 & 0x3ffffffe;
  FUN_14485ad16(param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14014fe74 FUN_14014fe74 body=1189 status=ok
// SIG undefined FUN_14014fe74(void)

ulonglong FUN_14014fe74(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  LARGE_INTEGER LVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  LARGE_INTEGER LVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_c8 [40];
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  longlong *local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  QueryPerformanceCounter(&local_98);
  plVar15 = (longlong *)0xffffffffffffffff;
  if (param_2 != 0x7fffffffffffffff) {
    if ((double)param_2 / 10000000.0 <= 0.0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      dVar17 = ((double)param_2 / 10000000.0) / DAT_14c83f418;
      uVar6 = (ulonglong)dVar17;
      plVar15 = (longlong *)
                ((longlong)(dVar17 - 9.223372036854776e+18) & (longlong)uVar6 >> 0x3f | uVar6);
    }
  }
  local_a0.s = local_98.s;
  if ((longlong)(int)param_1[1] != 0) {
    plVar12 = (longlong *)*param_1;
    plVar2 = plVar12 + (int)param_1[1];
    uVar6 = (longlong)plVar15 + local_98.QuadPart;
    LVar11 = local_98;
    do {
      if (*plVar12 != 0) {
        local_98 = LVar11;
        local_90 = plVar15;
        FUN_14002f804(*plVar12,&local_98,0);
        LVar11 = local_a0;
      }
    } while (((plVar15 == (longlong *)0xffffffffffffffff) ||
             ((plVar15 != (longlong *)0x0 &&
              (QueryPerformanceCounter(&local_88), LVar11 = local_a0,
              CONCAT71(local_88.QuadPart._1_7_,local_88.s.LowPart._0_1_) <= uVar6)))) &&
            (plVar12 = plVar12 + 1, plVar12 != plVar2));
  }
  FUN_14470f0c8(&local_98,0);
  plVar2 = local_90;
  LVar11 = local_98;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)FUN_144ab170e();
  *puVar7 = UE::Tasks::Private::FTaskBase::vftable;
  puVar7[1] = &DAT_100000002;
  puVar7[2] = 0;
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  puVar7[6] = 0;
  puVar7[7] = 0x100000000;
  *(undefined1 *)(puVar7 + 8) = 1;
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0xe800000000000020;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0x100000000;
  *(undefined2 *)(puVar7 + 0x14) = 0;
  LOCK();
  bVar16 = *(char *)(puVar7 + 8) == '\x01';
  if (bVar16) {
    *(char *)(puVar7 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar16) {
    FUN_14008cdb0(puVar7 + 8);
  }
  *puVar7 = &PTR_FUN_14a279250;
  if (*(code **)(puVar7[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar7[0xe] + 0x18))(puVar7 + 0xe,puVar7 + 9);
  }
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar7[9] = puVar7;
  puVar7[10] = puVar7;
  lVar9 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  iVar13 = 0;
  if (lVar9 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar9 + 0x30);
  }
  puVar7[0xf] = uVar8;
  puVar7[0x10] = 0xc80000527a251600;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = 1;
  ((LARGE_INTEGER *)(puVar7 + 0x15))->QuadPart = (LONGLONG)LVar11;
  puVar7[0x16] = plVar2;
  *puVar7 = &PTR_FUN_14a279240;
  LOCK();
  *(int *)((longlong)puVar7 + 0xc) = *(int *)((longlong)puVar7 + 0xc) + (int)param_1[1];
  UNLOCK();
  lVar9 = param_1[1];
  if ((longlong)(int)lVar9 != 0) {
    lVar10 = *param_1;
    lVar14 = 0;
    iVar13 = 0;
    do {
      LVar11 = (LARGE_INTEGER)((LARGE_INTEGER *)(lVar10 + lVar14))->QuadPart;
      if (((longlong *)LVar11.QuadPart == (longlong *)0x0) ||
         (cVar4 = FUN_1456bb142((longlong *)(LVar11.QuadPart + 0x88),puVar7), cVar4 == '\0')) {
        iVar13 = iVar13 + 1;
      }
      else {
        LOCK();
        *(int *)(LVar11.QuadPart + 8) = *(int *)(LVar11.QuadPart + 8) + 1;
        UNLOCK();
        FUN_1456bb1d4(puVar7 + 5,LVar11.QuadPart);
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)(int)lVar9 * 8 != lVar14);
  }
  LOCK();
  *(int *)((longlong)puVar7 + 0xc) = *(int *)((longlong)puVar7 + 0xc) - iVar13;
  UNLOCK();
  local_88.s.LowPart._0_1_ = 1;
  cVar4 = FUN_1447439e4(puVar7);
  LVar3 = local_98;
  uVar6 = CONCAT71((int7)((ulonglong)LVar11 >> 8),1);
  if (cVar4 == '\0') {
    lVar9 = 0xffffffff;
    if (plVar15 != (longlong *)0xffffffffffffffff) {
      auVar20._8_4_ = (int)((ulonglong)plVar15 >> 0x20);
      auVar20._0_8_ = plVar15;
      auVar20._12_4_ = 0x45300000;
      dVar17 = (((double)CONCAT44(0x43300000,(int)plVar15) - 4503599627370496.0) +
               (auVar20._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
      QueryPerformanceCounter(&local_88);
      lVar9 = CONCAT71(local_88.QuadPart._1_7_,local_88.s.LowPart._0_1_) - (longlong)local_a0;
      auVar19._8_4_ = (int)((ulonglong)lVar9 >> 0x20);
      auVar19._0_8_ = lVar9;
      auVar19._12_4_ = 0x45300000;
      auVar18._8_8_ = 0;
      auVar18._0_8_ =
           (dVar17 - (((double)CONCAT44(0x43300000,(int)lVar9) - 4503599627370496.0) +
                     (auVar19._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418) * 10000000.0 + 0.5;
      auVar19 = roundpd(auVar18,auVar18,1);
      lVar10 = ((longlong)auVar19._0_8_ + 9999) / 10000;
      if (0xfffffffe < lVar10) {
        lVar10 = 0xffffffff;
      }
      lVar9 = 0;
      if (0 < lVar10) {
        lVar9 = lVar10;
      }
    }
    uVar5 = (**(code **)(*(longlong *)LVar3 + 0x20))(LVar3.QuadPart,lVar9,0);
    uVar6 = (ulonglong)uVar5;
  }
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar7 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  plVar15 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_90 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14015031a FUN_14015031a body=1264 status=ok
// SIG undefined FUN_14015031a(void)

void FUN_14015031a(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  byte bVar19;
  uint *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar6 = *piVar1;
  if (iVar6 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar6 = *piVar1;
  }
  if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
    *piVar1 = 0x40000010;
  }
  lVar4 = *param_1;
  lVar5 = param_1[2];
  if ((longlong)(int)lVar5 != 0) {
    lVar23 = param_1[1];
    lVar22 = 0;
    do {
      uVar10 = *(uint *)(lVar23 + lVar22);
      if ((-1 < (int)uVar10) &&
         (lVar15 = *(longlong *)(lVar4 + 8), (int)uVar10 < *(int *)(lVar15 + 0x110))) {
        lVar8 = lVar15 + 0xf8;
        if (*(longlong *)(lVar15 + 0x108) != 0) {
          lVar8 = *(longlong *)(lVar15 + 0x108);
        }
        if ((*(uint *)(lVar8 + (ulonglong)(uVar10 >> 5) * 4) >> (uVar10 & 0x1f) & 1) != 0) {
          lVar8 = *(longlong *)(lVar15 + 0xe8);
          iVar7 = *(int *)(lVar8 + 8 + (ulonglong)uVar10 * 0x18);
          if (iVar7 != -1) {
            iVar11 = *(int *)(lVar8 + (ulonglong)uVar10 * 0x18 + 0xc);
            iVar9 = *(int *)(lVar15 + 0xd8);
            *(uint *)(lVar15 + 0xd8) = iVar9 + 1U;
            if (*(uint *)(lVar15 + 0xdc) < iVar9 + 1U) {
              FUN_14017bd48(lVar15 + 0x80,iVar9);
            }
            lVar8 = lVar15 + 0x80;
            if (*(longlong *)(lVar15 + 0xd0) != 0) {
              lVar8 = *(longlong *)(lVar15 + 0xd0);
            }
            *(ulonglong *)(lVar8 + (longlong)iVar9 * 8) = CONCAT44(iVar11,iVar7);
            *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) - iVar11;
            lVar15 = *(longlong *)(lVar4 + 8);
            uVar10 = *(uint *)(lVar23 + lVar22);
            lVar8 = *(longlong *)(lVar15 + 0xe8);
          }
          if (*(int *)(lVar15 + 0x11c) != 0) {
            *(uint *)(lVar8 + (longlong)*(int *)(lVar15 + 0x118) * 0x18) = uVar10;
          }
          *(undefined4 *)(lVar8 + (longlong)(int)uVar10 * 0x18) = 0xffffffff;
          if (*(int *)(lVar15 + 0x11c) < 1) {
            uVar17 = 0xffffffff;
          }
          else {
            uVar17 = *(undefined4 *)(lVar15 + 0x118);
          }
          *(undefined4 *)(lVar8 + (longlong)(int)uVar10 * 0x18 + 4) = uVar17;
          *(uint *)(lVar15 + 0x118) = uVar10;
          *(int *)(lVar15 + 0x11c) = *(int *)(lVar15 + 0x11c) + 1;
          lVar8 = lVar15 + 0xf8;
          if (*(longlong *)(lVar15 + 0x108) != 0) {
            lVar8 = *(longlong *)(lVar15 + 0x108);
          }
          uVar12 = uVar10 + 0x1f;
          if (-1 < (int)uVar10) {
            uVar12 = uVar10;
          }
          bVar19 = (byte)uVar10 & 0x1f;
          puVar20 = (uint *)(lVar8 + (longlong)((int)uVar12 >> 5) * 4);
          *puVar20 = *puVar20 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
        }
      }
      lVar22 = lVar22 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar22);
  }
  iVar7 = DAT_14ca19a80;
  *(bool *)(lVar4 + 0x41) = DAT_14ca19a80 != 0;
  if (iVar7 == 1) {
    DAT_14ca19a80 = 0;
  }
  lVar5 = *(longlong *)(lVar4 + 8);
  FUN_144883418(lVar5 + 0x10);
  cVar3 = *(char *)(DAT_14ca19a98 + 1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca19ad4) && (FUN_144b3d300(&DAT_14ca19ad4), DAT_14ca19ad4 == -1)) {
    iVar7 = *(int *)(DAT_14ca19a38 + 4);
    iVar11 = iVar7 + 3;
    if (-1 < iVar7) {
      iVar11 = iVar7;
    }
    DAT_14ca19ad0 = iVar11 >> 2;
    _Init_thread_footer(&DAT_14ca19ad4);
  }
  iVar7 = *(int *)(lVar5 + 0x14 + (ulonglong)*(byte *)(lVar5 + 0xe0) * 4);
  uVar18 = (ulonglong)(iVar7 + -1 + (uint)(iVar7 == 0)) * 2 + 1;
  lVar23 = 0x3f;
  if (uVar18 != 0) {
    for (; uVar18 >> lVar23 == 0; lVar23 = lVar23 + -1) {
    }
  }
  iVar7 = 1 << ((byte)lVar23 & 0x1f);
  if (cVar3 == '\0') {
    bVar19 = 0;
  }
  else {
    if (DAT_14ca19ab0 == 0) {
      bVar19 = 0;
      if ((iVar7 <= DAT_14ca19ad0) ||
         (bVar19 = 0,
         (int)(longlong)((float)iVar7 * *(float *)(DAT_14ca19ac8 + 4)) < *(int *)(lVar5 + 0x10)))
      goto LAB_140150754;
    }
    else if (DAT_14ca19ab0 == 1) {
      DAT_14ca19ab0 = 0;
    }
    FUN_14112dd96(lVar5 + 0x10);
    iVar7 = *(int *)(lVar5 + 0x110);
    if (iVar7 == 0) {
      uVar18 = 0;
      uVar21 = 1;
      iVar11 = 0;
      iVar9 = 0;
    }
    else {
      puVar20 = *(uint **)(lVar5 + 0x108);
      if (*(uint **)(lVar5 + 0x108) == (uint *)0x0) {
        puVar20 = (uint *)(lVar5 + 0xf8);
      }
      uVar10 = *puVar20;
      if (uVar10 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        uVar18 = 0;
        uVar21 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar21 = uVar18;
        }
        iVar9 = 0;
        do {
          if (uVar21 == uVar18) {
            bVar19 = 1;
            goto LAB_140150754;
          }
          iVar9 = iVar9 + 0x20;
          uVar10 = puVar20[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar18 = 0;
        iVar9 = 0;
      }
      uVar21 = (ulonglong)(-uVar10 & uVar10);
      uVar2 = uVar21 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar11 = (iVar9 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      if (iVar7 <= iVar11) {
        iVar11 = iVar7;
      }
    }
    bVar19 = 1;
    if (iVar11 != iVar7) {
      uVar10 = 0xffffffff;
      iVar16 = iVar7;
      do {
        if (*(int *)(*(longlong *)(lVar5 + 0xe8) + 8 + (longlong)iVar11 * 0x18) != -1) {
          *(undefined8 *)(*(longlong *)(lVar5 + 0xe8) + (longlong)iVar11 * 0x18 + 8) = 0xffffffff;
          iVar16 = *(int *)(lVar5 + 0x110);
        }
        uVar10 = uVar10 & ~(uint)uVar21;
        puVar20 = *(uint **)(lVar5 + 0x108);
        if (*(uint **)(lVar5 + 0x108) == (uint *)0x0) {
          puVar20 = (uint *)(lVar5 + 0xf8);
        }
        iVar11 = (int)uVar18;
        lVar23 = (longlong)iVar11;
        uVar12 = puVar20[lVar23] & uVar10;
        if (uVar12 == 0) {
          iVar13 = iVar16 + 0x1e;
          if (-1 < iVar16 + -1) {
            iVar13 = iVar16 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar14 = iVar13;
          if (iVar13 < iVar11) {
            iVar14 = iVar11;
          }
          if (iVar11 < iVar13) {
            lVar22 = 0;
            do {
              uVar12 = puVar20[lVar23 + lVar22 + 1];
              if (uVar12 != 0) {
                uVar18 = (ulonglong)(iVar11 + (int)lVar22 + 1);
                uVar10 = 0xffffffff;
                goto LAB_1401506f4;
              }
              iVar9 = iVar9 + 0x20;
              lVar22 = lVar22 + 1;
            } while (iVar14 - lVar23 != lVar22);
            uVar10 = 0xffffffff;
            lVar23 = (longlong)iVar14;
          }
          uVar18 = lVar23 + 1U & 0xffffffff;
          iVar11 = iVar16;
        }
        else {
LAB_1401506f4:
          uVar21 = (ulonglong)(-uVar12 & uVar12);
          uVar2 = uVar21 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          iVar11 = (iVar9 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
          if (iVar16 <= iVar11) {
            iVar11 = iVar16;
          }
        }
      } while (iVar11 != iVar7);
    }
  }
LAB_140150754:
  *(byte *)(lVar4 + 0x42) = bVar19;
  *(byte *)(lVar4 + 0x41) = *(byte *)(lVar4 + 0x41) | bVar19;
  if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
    *piVar1 = iVar6;
  }
  return;
}



// FUNCTION 14015080a FUN_14015080a body=465 status=ok
// SIG undefined FUN_14015080a(void)

ulonglong FUN_14015080a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar5 = DAT_14ca84e48;
  }
  local_50 = uVar5 + (uVar5 == 0);
  local_48 = 0x10110;
  uVar5 = *(uint *)(param_3 + 1) & 0x3fffffff;
  if (DAT_14ca84e48 <= (*(uint *)(param_3 + 1) & 0x3fffffff)) {
    uVar5 = DAT_14ca84e48;
  }
  local_40 = 0;
  local_4c = uVar5 + (uVar5 == 0);
  uVar8 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar6 = uVar8 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar6) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x160);
    uVar8 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar6 = uVar8 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar6;
  FUN_1456bd266(uVar8,param_2,&local_50,0);
  iVar1 = *(int *)(param_1 + 400);
  uVar5 = iVar1 + 1;
  *(uint *)(param_1 + 400) = uVar5;
  if (*(uint *)(param_1 + 0x194) < uVar5) {
    FUN_144737178(param_1 + 0x188);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar1 * 8) = uVar8;
  *(int *)(uVar8 + 0x7c) = *(int *)(param_1 + 400) + -1;
  uVar3 = *param_3;
  iVar1 = *(int *)(param_3 + 1);
  iVar2 = *(int *)(param_1 + 0x590);
  uVar5 = iVar2 + 1;
  *(uint *)(param_1 + 0x590) = uVar5;
  if (*(uint *)(param_1 + 0x594) < uVar5) {
    FUN_144775ac8((longlong *)(param_1 + 0x588));
  }
  lVar4 = *(longlong *)(param_1 + 0x588);
  lVar7 = (longlong)iVar2 * 0x120;
  *(undefined2 *)(lVar4 + lVar7) = 0;
  *(ulonglong *)(lVar4 + 8 + lVar7) = uVar8;
  *(undefined8 *)(lVar4 + 0x10 + lVar7) = uVar3;
  *(longlong *)(lVar4 + 0x18 + lVar7) = (longlong)iVar1 << 2;
  *(undefined8 *)(lVar4 + 0x20 + lVar7) = 0;
  *(undefined8 *)(lVar4 + 0x30 + lVar7) = 0;
  *(undefined8 *)(lVar4 + 0x60 + lVar7) = 0;
  *(undefined8 *)(lVar4 + 0x70 + lVar7) = 0;
  *(undefined8 *)(lVar4 + 0xa0 + lVar7) = 0;
  *(undefined8 *)(lVar4 + 0xb0 + lVar7) = 0;
  *(undefined8 *)(lVar4 + 0xe0 + lVar7) = 0;
  *(undefined8 *)(lVar4 + 0xf0 + lVar7) = 0;
  *(byte *)(uVar8 + 0x24) = *(byte *)(uVar8 + 0x24) | 0x80;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401509dc FUN_1401509dc body=3989 status=ok
// SIG undefined FUN_1401509dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401509dc(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_1a8 [32];
  wchar_t *local_188;
  wchar_t *local_180;
  undefined8 uStack_178;
  char *local_170;
  code *local_168;
  code *local_160;
  undefined4 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  int local_c4;
  undefined8 local_c0;
  int local_b4;
  uint local_b0;
  uint local_ac;
  longlong local_a8;
  undefined8 *local_a0;
  ulonglong local_98;
  uint local_8c;
  undefined1 *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  uVar2 = DAT_14ca84e30;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_ac = param_5[2];
  local_c4 = *param_5;
  uVar3 = param_5[1];
  uVar4 = uVar3;
  if (local_ac == 0xffffffff) {
    bVar11 = (uVar3 & 0xf) == 0;
    uVar4 = 4;
    if (bVar11) {
      uVar4 = 0x10;
    }
    local_ac = uVar3 >> bVar11 * '\x02' + 2;
  }
  uVar3 = local_ac * local_c4 + 0x3f >> 6;
  local_98 = (ulonglong)uVar3;
  uVar3 = (uVar3 + DAT_14ca84e30) - 1;
  local_b0 = uVar3 / DAT_14ca84e30;
  local_128 = param_4;
  local_c0 = param_3;
  if (*(char *)(param_2 + 0x18) == '\0') {
    uVar8 = *(undefined1 *)(param_2 + 0x94);
    local_d0 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar7 = local_d0 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x50);
      local_d0 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar7 = local_d0 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    local_d0[1] = *(undefined8 *)(param_2 + 8);
    local_d0[2] = 0;
    *(undefined1 *)(local_d0 + 3) = 0;
    *(undefined8 *)((longlong)local_d0 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(local_d0 + 5) = 1;
    *local_d0 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(local_d0 + 6) = uVar8;
    *(undefined1 *)(local_d0 + 7) = 0;
    *(undefined4 *)((longlong)local_d0 + 0x31) = 0;
    *(undefined2 *)((longlong)local_d0 + 0x35) = 0;
    local_d0[8] = param_2;
    iVar10 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar10 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar10 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar10);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar10 * 8) = local_d0;
    *(int *)((longlong)local_d0 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    uVar4 = DAT_14ca84e40;
    if (0xfffe < (int)DAT_14ca84e40) {
      uVar4 = 0xffff;
    }
    local_b4 = (uVar4 & 0xfffe) - ((uVar4 & 0xfffe) + ((uVar4 & 0xffff) / 0x2e) * -0x2e & 0xffff);
    uVar4 = 4;
    iVar10 = 2;
    local_110 = local_128;
LAB_140150d7e:
    local_d8 = (undefined8 *)0x0;
    local_e0 = 0;
    local_e8 = (undefined8 *)0x0;
    local_f0 = (undefined8 *)0x0;
    local_f8 = (undefined8 *)0x0;
    local_100 = (undefined8 *)0x0;
    local_108 = 0;
    local_a0 = (undefined8 *)0x0;
    local_118 = 0;
    local_128 = 0;
    local_120 = 0;
    iVar6 = iVar10;
    goto LAB_1401511be;
  }
  if (*(char *)(param_2 + 0x18) != '\x01') {
    uVar5 = *(uint *)(param_2 + 0x68);
LAB_140150dab:
    uVar8 = 0x1c;
    if (-1 < (char)uVar5) {
      uVar8 = 0;
    }
    local_e8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar7 = local_e8 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x48);
      local_e8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar7 = local_e8 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    local_e8[1] = *(undefined8 *)(param_2 + 8);
    local_e8[2] = 0;
    *(undefined1 *)(local_e8 + 3) = 2;
    *(undefined8 *)((longlong)local_e8 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(local_e8 + 5) = 1;
    *local_e8 = &PTR_FUN_14a1fb3e8;
    *(undefined1 *)(local_e8 + 6) = uVar8;
    *(undefined2 *)((longlong)local_e8 + 0x31) = 0;
    local_e8[7] = param_2;
    iVar10 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar10 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar10 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar10);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar10 * 8) = local_e8;
    *(int *)((longlong)local_e8 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    local_e0 = 0;
    iVar6 = 2;
    local_d0 = (undefined8 *)0x0;
    local_a0 = (undefined8 *)0x0;
    local_f0 = (undefined8 *)0x0;
    local_f8 = (undefined8 *)0x0;
    local_100 = (undefined8 *)0x0;
    local_d8 = (undefined8 *)0x0;
    local_108 = 0;
    local_110 = local_128;
    local_118 = 0;
    local_128 = 0;
    local_120 = 0;
    uVar4 = 0;
    goto LAB_1401511be;
  }
  uVar5 = *(uint *)(param_2 + 0x68);
  if ((uVar5 & 0x10) != 0) {
    uVar8 = 0x1c;
    if (-1 < (char)uVar5) {
      uVar8 = 0;
    }
    local_a0 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar7 = local_a0 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x48);
      local_a0 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar7 = local_a0 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    local_a0[1] = *(undefined8 *)(param_2 + 8);
    local_a0[2] = 0;
    *(undefined1 *)(local_a0 + 3) = 2;
    *(undefined8 *)((longlong)local_a0 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(local_a0 + 5) = 1;
    *local_a0 = &PTR_FUN_14a1fb3e8;
    *(undefined1 *)(local_a0 + 6) = uVar8;
    *(undefined2 *)((longlong)local_a0 + 0x31) = 0;
    local_a0[7] = param_2;
    iVar10 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar10 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar10 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar10);
    }
    uVar4 = uVar4 == 0x10 | 2;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar10 * 8) = local_a0;
    *(int *)((longlong)local_a0 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    iVar6 = 2;
    local_d0 = (undefined8 *)0x0;
    local_e0 = local_128;
    local_f0 = (undefined8 *)0x0;
    local_f8 = (undefined8 *)0x0;
    local_100 = (undefined8 *)0x0;
    local_d8 = (undefined8 *)0x0;
    local_e8 = (undefined8 *)0x0;
    local_108 = 0;
    local_110 = 0;
    local_118 = 0;
    local_128 = 0;
    local_120 = local_c0;
    local_c0 = 0;
    goto LAB_1401511be;
  }
  if ((uVar5 >> 0x10 & 1) == 0) goto LAB_140150dab;
  uVar8 = 0x1c;
  if (-1 < (char)uVar5) {
    uVar8 = 0;
  }
  local_f0 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = local_f0 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8((longlong *)(param_1 + 0x70));
    local_f0 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar7 = local_f0 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  local_f0[1] = *(undefined8 *)(param_2 + 8);
  local_f0[2] = 0;
  *(undefined1 *)(local_f0 + 3) = 2;
  *(undefined8 *)((longlong)local_f0 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(local_f0 + 5) = 1;
  *local_f0 = &PTR_FUN_14a1fb3e8;
  *(undefined1 *)(local_f0 + 6) = uVar8;
  *(undefined2 *)((longlong)local_f0 + 0x31) = 0;
  local_f0[7] = param_2;
  iVar10 = *(int *)(param_1 + 0x1a0);
  uVar4 = iVar10 + 1;
  *(uint *)(param_1 + 0x1a0) = uVar4;
  if (*(uint *)(param_1 + 0x1a4) < uVar4) {
    FUN_1447568fc(param_1 + 0x198);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar10 * 8) = local_f0;
  *(int *)((longlong)local_f0 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  uVar4 = *(uint *)(local_f0[7] + 0x60);
  uVar5 = uVar4;
  if ((int)uVar4 < 0) {
    uVar5 = uVar4 + 3;
  }
  iVar10 = 0x1f;
  if ((int)uVar5 >> 2 != 0) {
    for (; (uint)((int)uVar5 >> 2) >> iVar10 == 0; iVar10 = iVar10 + -1) {
    }
  }
  iVar6 = iVar10;
  if (uVar4 + 3 < 7) {
    iVar6 = 0;
  }
  uVar4 = 1;
  switch(iVar6) {
  case 0:
    local_f8 = (undefined8 *)0x0;
    local_100 = (undefined8 *)0x0;
    local_d8 = (undefined8 *)0x0;
    local_108 = 0;
    local_110 = 0;
    local_118 = 0;
    goto LAB_1401511b0;
  case 1:
    local_100 = (undefined8 *)0x0;
    local_d8 = (undefined8 *)0x0;
    local_108 = 0;
    local_110 = 0;
    local_118 = local_128;
    local_f8 = local_f0;
    goto LAB_1401511a4;
  case 2:
    local_d8 = (undefined8 *)0x0;
    local_108 = 0;
    local_110 = local_128;
    local_100 = local_f0;
    break;
  case 3:
    local_100 = (undefined8 *)0x0;
    local_108 = local_128;
    local_110 = 0;
    local_d8 = local_f0;
    break;
  default:
    local_d0 = (undefined8 *)0x0;
    local_110 = 0;
    goto LAB_140150d7e;
  }
  local_f8 = (undefined8 *)0x0;
  local_118 = 0;
LAB_1401511a4:
  local_f0 = (undefined8 *)0x0;
  local_128 = 0;
LAB_1401511b0:
  local_d0 = (undefined8 *)0x0;
  local_e0 = 0;
  local_e8 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  local_120 = 0;
LAB_1401511be:
  uVar1 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa07b8) && (FUN_144b3d300(&DAT_14caa07b8), DAT_14caa07b8 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caa0e90) && (FUN_144b3d300(&DAT_14caa0e90), DAT_14caa0e90 == -1)) {
      FUN_146163b06(&local_70);
      local_140 = (undefined1 *)((ulonglong)local_140 & 0xffffffffffffff00);
      local_150 = (undefined1 *)((ulonglong)local_150 & 0xffffffffffffff00);
      local_170 = "Unknown";
      local_180 = (wchar_t *)0x0;
      uStack_178 = 0;
      local_188 = L"FParameters";
      local_148 = (undefined1 *)0x0;
      local_160 = (code *)CONCAT44(local_160._4_4_,0x90);
      local_168 = (code *)CONCAT44(local_168._4_4_,0x115);
      local_158 = &local_70;
      FUN_140b49562(&DAT_14caa0e10,0,1);
      if (CONCAT44(uStack_6c,local_70) != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14323df23);
      _Init_thread_footer(&DAT_14caa0e90);
    }
    FUN_14607043a();
    local_130 = &DAT_14caa0e10;
    local_140 = &LAB_14712ac08;
    local_148 = &LAB_14712ac0c;
    local_150 = &LAB_14323c1e8;
    local_158 = (undefined4 *)&LAB_14323c1ec;
    local_160 = FUN_14744280a;
    local_168 = FUN_14744286a;
    local_180 = L"ScatterCopyCS";
    local_188 = L"/Engine/Private/ByteBuffer.usf";
    local_138 = 0xe0;
    local_170 = (char *)CONCAT44(local_170._4_4_,0x14);
    uStack_178 = CONCAT44(uStack_178._4_4_,5);
    FUN_140db5666(&DAT_14caa0710,0,&DAT_14caa06a8,L"FRDGScatterCopyCS");
    _DAT_14caa0710 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_14323c243);
    _Init_thread_footer(&DAT_14caa07b8);
  }
  FUN_1448e935e(uVar1,&local_80,&DAT_14caa0710,iVar6 * 5 + uVar4);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa07b8) && (FUN_144b3d300(&DAT_14caa07b8), DAT_14caa07b8 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caa0e90) && (FUN_144b3d300(&DAT_14caa0e90), DAT_14caa0e90 == -1)) {
      FUN_146163b06(&local_70);
      local_140 = (undefined1 *)((ulonglong)local_140 & 0xffffffffffffff00);
      local_150 = (undefined1 *)((ulonglong)local_150 & 0xffffffffffffff00);
      local_170 = "Unknown";
      local_180 = (wchar_t *)0x0;
      uStack_178 = 0;
      local_188 = L"FParameters";
      local_148 = (undefined1 *)0x0;
      local_160 = (code *)CONCAT44(local_160._4_4_,0x90);
      local_168 = (code *)CONCAT44(local_168._4_4_,0x115);
      local_158 = &local_70;
      FUN_140b49562(&DAT_14caa0e10,0,1);
      if (CONCAT44(uStack_6c,local_70) != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14323df23);
      _Init_thread_footer(&DAT_14caa0e90);
    }
    FUN_14607043a();
    local_130 = &DAT_14caa0e10;
    local_140 = &LAB_14712ac08;
    local_148 = &LAB_14712ac0c;
    local_150 = &LAB_14323c1e8;
    local_158 = (undefined4 *)&LAB_14323c1ec;
    local_160 = FUN_14744280a;
    local_168 = FUN_14744286a;
    local_180 = L"ScatterCopyCS";
    local_188 = L"/Engine/Private/ByteBuffer.usf";
    local_138 = 0xe0;
    local_170 = (char *)CONCAT44(local_170._4_4_,0x14);
    uStack_178 = CONCAT44(uStack_178._4_4_,5);
    FUN_140db5666(&DAT_14caa0710,0,&DAT_14caa06a8,L"FRDGScatterCopyCS");
    _DAT_14caa0710 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_14323c243);
    _Init_thread_footer(&DAT_14caa07b8);
  }
  local_70 = local_80;
  uStack_6c = uStack_7c;
  uStack_68 = uStack_78;
  uStack_64 = uStack_74;
  if (uVar2 <= uVar3) {
    local_a8 = param_1 + 0x98;
    uVar3 = 0;
    do {
      iVar10 = DAT_14ca84e30 * uVar3;
      local_8c = (int)local_98 - iVar10;
      if (DAT_14ca84e30 <= local_8c) {
        local_8c = DAT_14ca84e30;
      }
      local_88 = &DAT_100000001;
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar7 = puVar9 + 0x14;
      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
        FUN_140023dd8((longlong *)(param_1 + 0x70),0xb0);
        puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar7 = puVar9 + 0x14;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar7;
      *puVar9 = &PTR_FUN_14a399db8;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9[0xd] = 0;
      puVar9[0xe] = 0;
      puVar9[0xf] = 0;
      puVar9[0x10] = 0;
      puVar9[0x11] = 0;
      puVar9[0x12] = 0;
      puVar9[0x13] = 0;
      iVar6 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar6 + 1U) {
        FUN_1448cfae8(local_a8,iVar6);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar6 * 8) = puVar9;
      *(uint *)((longlong)puVar9 + 0x14) = local_ac;
      *(int *)(puVar9 + 3) = iVar10 * 0x40;
      *(int *)(puVar9 + 4) = local_b4;
      puVar9[5] = local_e8;
      puVar9[6] = local_d8;
      puVar9[7] = local_100;
      puVar9[8] = local_f8;
      puVar9[9] = local_f0;
      puVar9[10] = local_a0;
      puVar9[0xb] = local_d0;
      *(int *)(puVar9 + 0xc) = local_c4;
      puVar9[0xd] = local_e0;
      puVar9[0xe] = local_108;
      puVar9[0xf] = local_110;
      puVar9[0x10] = local_118;
      puVar9[0x11] = local_128;
      puVar9[0x12] = local_120;
      puVar9[0x13] = local_c0;
      local_188 = (wchar_t *)&local_8c;
      FUN_144a95ddb(param_1,&local_80,&local_70,puVar9 + 2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_b0);
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140151972 FUN_140151972 body=69 status=ok
// SIG undefined FUN_140151972(void)

bool FUN_140151972(ulonglong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1401519b7();
  if ((cVar1 != '\0') &&
     (cVar1 = thunk_FUN_14005b4aa(param_1 & 0xffffffff,(&DAT_14ca814b8)[(param_1 & 0xffff) * 0xf]),
     cVar1 != '\0')) {
    return 0 < *(int *)(DAT_14ca5bf30 + 4);
  }
  return false;
}



// FUNCTION 1401519b7 FUN_1401519b7 body=290 status=ok
// SIG undefined FUN_1401519b7(void)

byte FUN_1401519b7(uint param_1)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined4 *puVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca96fc0) {
    FUN_144b3d300(&DAT_14ca96fc0);
    if (DAT_14ca96fc0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca96fb8 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.Water.SingleLayer.ShadersSupportVSMFiltering",1);
      _Init_thread_footer(&DAT_14ca96fc0);
    }
  }
  if (DAT_14ca96fb8 == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = (**(code **)(*DAT_14ca96fb8 + 0xb0))();
    bVar2 = 0 < iVar1;
  }
  uVar3 = (ulonglong)(ushort)param_1;
  puVar5 = &DAT_14ca96aa8;
  if (DAT_14ca96af8 != (undefined4 *)0x0) {
    puVar5 = DAT_14ca96af8;
  }
  bVar4 = true;
  if (((uint)puVar5[(ushort)((ushort)param_1 >> 5)] >> (param_1 & 0x1f) & 1) != 0) {
    bVar4 = (int)(&DAT_14ca814b8)[uVar3 * 0xf] < 3;
  }
  return (byte)((uint)(&DAT_14ca814d8)[uVar3 * 0xf] >> 0x1c) & bVar2 & bVar4 &
         (byte)((uint)(&DAT_14ca814c8)[uVar3 * 0xf] >> 0x1d) &
         (byte)((*(uint *)(&DAT_14ca814cc + uVar3 * 0x3c) & 8) >> 3);
}



// FUNCTION 140151ada FUN_140151ada body=3682 status=ok
// SIG undefined FUN_140151ada(void)

void FUN_140151ada(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  char cVar17;
  byte bVar18;
  int iVar19;
  uint uVar20;
  undefined8 uVar21;
  longlong *plVar22;
  byte bVar23;
  ushort *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  int iVar32;
  bool bVar33;
  float fVar34;
  undefined1 auStack_318 [32];
  ushort *local_2f8;
  byte local_2f0;
  undefined1 local_2e8;
  ushort *local_2e0;
  byte local_2d1;
  uint local_2d0;
  byte local_2c9;
  longlong local_2c8;
  ulonglong local_2c0;
  undefined4 *local_2b8;
  undefined8 *local_2b0;
  longlong *local_2a8;
  int local_29c;
  int local_298;
  undefined4 local_294;
  ulonglong local_290;
  undefined4 local_284;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  undefined4 *local_268;
  undefined1 local_260 [168];
  undefined1 *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  ushort local_170 [84];
  ushort *local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint uStack_90;
  uint uStack_8c;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_2a8 = param_2;
  if (((*(byte *)((longlong)param_1 + 0x6c) & 0x20) == 0) &&
     ((*(byte *)((longlong)param_1 + 0x77) & 0x40) == 0)) {
    local_294 = (**(code **)(*param_1 + 0x168))(param_1);
    iVar32 = (int)((longlong *)param_1[0x53])[1];
    uVar20 = *(uint *)(param_1 + 0x1c);
    local_290 = (ulonglong)uVar20;
    iVar19 = (int)param_1[0x10f];
    iVar3 = *(int *)((longlong)param_1 + 0x87c);
    uVar31 = (ulonglong)iVar3;
    if (iVar19 < 1) {
      if (iVar3 < iVar32) {
        local_284 = *(undefined4 *)(param_1[0x42] + 8);
        local_298 = uVar20 + 1;
        local_2b0 = &local_b8;
        local_268 = &local_1a8;
        local_29c = iVar32;
        do {
          lVar28 = *(longlong *)(*(longlong *)param_1[0x53] + uVar31 * 8);
          if (*(char *)(lVar28 + 0x290) == '\0') {
            fVar2 = *(float *)(param_1[0x53] + uVar31 * 4 + 0x20);
            fVar34 = (float)(**(code **)(*param_1 + 0x208))();
            fVar34 = fVar34 * fVar2;
            local_2c8 = lVar28;
            if (DAT_14c761ba6 == '\x01') {
              local_2d0 = 0;
              bVar18 = 0;
              if ((*(byte *)(lVar28 + 0x5c) & 1) != 0) {
                local_2c9 = (char)param_1[0xd] - 1;
                local_2d1 = *(byte *)(param_1 + 0x110) & 1;
                local_270 = lVar28 + 0x10;
                local_278 = param_1[0x54] + uVar31 * 0x80 + 0x30;
                bVar23 = 1;
                local_280 = 0x15;
                lVar28 = -1;
                lVar29 = 0;
                local_2b8 = (undefined4 *)0x0;
                local_2c0 = uVar31;
                do {
                  local_2d0 = 0;
                  lVar28 = lVar28 + 1;
                  if (*(int *)(local_2c8 + 0x38) <= lVar28) {
                    if (((*(byte *)(param_1 + 0xf) & 1) == 0) ||
                       (uVar21 = FUN_144b26f4c(*(undefined4 *)(param_1[0x42] + 8)), (int)uVar21 != 1
                       )) {
                      local_2d0 = 0;
                    }
                    else {
                      local_2d0 = (uint)CONCAT71((int7)((ulonglong)uVar21 >> 8),
                                                 (byte)((char)param_1[0xd] - 3U) < 0xfe);
                    }
                    if (((char)local_2d0 == '\0') && ((local_2d1 & 1) == 0)) {
                      local_2d0 = 0;
                      uVar31 = local_2c0;
                      bVar18 = local_2d1;
                    }
                    else {
                      iVar32 = (**(code **)(*param_1 + 0x240))(param_1);
                      (**(code **)(*local_2a8 + 0x10))(local_2a8,iVar32);
                      uVar31 = local_2c0;
                      bVar18 = local_2d1;
                      if (0 < iVar32) {
                        uVar20 = (uint)local_2d1;
                        uVar30 = local_2d0 & 0xff;
                        uVar4 = local_2d0 & 0xff;
                        iVar19 = 0;
                        do {
                          local_c8 = (ushort *)0x0;
                          local_c0 = (undefined1 *)0x100000000;
                          local_a8 = 0;
                          local_b8 = 0;
                          uStack_b0 = 0;
                          uStack_a0 = 0xffffffff;
                          local_98 = 0xff0000ffffffff;
                          uStack_90 = uStack_90 & 0xffffff00;
                          uStack_8c = 0x40c00f07;
                          local_88 = local_88 & 0xfc;
                          FUN_141793e06(local_170);
                          local_2f0 = bVar23 & 1;
                          local_2f8 = local_170;
                          cVar17 = (**(code **)(*param_1 + 0x248))
                                             (param_1,local_2c0,iVar19,local_294);
                          if (cVar17 != '\0') {
                            uStack_8c = (uStack_8c & 0xfffff0ff) + uVar30 * 0x400 + uVar20 * 0x100 |
                                        uVar4 << 0xb;
                            (**(code **)(*local_2a8 + 0x18))(local_2a8,local_170,fVar34);
                          }
                          FUN_1446fc232(local_170);
                          iVar19 = iVar19 + 1;
                          uVar31 = local_2c0;
                          bVar18 = local_2d1;
                        } while (iVar32 != iVar19);
                      }
                    }
                    break;
                  }
                  bVar33 = 1 < local_2c9;
                  lVar27 = *(longlong *)(local_278 + 0x10);
                  if (*(longlong *)(local_278 + 0x10) == 0) {
                    lVar27 = local_278;
                  }
                  uVar21 = (**(code **)(**(longlong **)(lVar27 + lVar29) + 0x2f0))();
                  plVar22 = (longlong *)FUN_14485b2b4(uVar21,local_284);
                  if (bVar33 && ((ulonglong)local_2b8 & 1) == 0) {
                    local_2b8 = (undefined4 *)(**(code **)(*plVar22 + 0x48))();
                  }
                  bVar18 = 0;
                  if ((1 < local_2c9) && (((bVar23 ^ 1) & 1) == 0)) {
                    bVar18 = (**(code **)(*plVar22 + 0x48))();
                  }
                  bVar23 = bVar18;
                  lVar27 = *(longlong *)(local_2c8 + 0x30);
                  if (*(longlong *)(local_2c8 + 0x30) == 0) {
                    lVar27 = local_270;
                  }
                  if ((((((bVar23 == 0) && ((((byte)local_2b8 ^ 1) & 1) == 0)) ||
                        (cVar17 = FUN_1417e148e(plVar22,0), cVar17 == '\0')) ||
                       ((cVar17 = (**(code **)(*plVar22 + 0x38))(), cVar17 != '\0' ||
                        (cVar17 = (**(code **)(*plVar22 + 0x40))(), cVar17 != '\0')))) ||
                      (((cVar17 = FUN_144b25ad0(), cVar17 != '\0' ||
                        ((plVar22[3] != 0 &&
                         ((*(byte *)(*(longlong *)(plVar22[3] + 0x28) + 0x246) & 8) != 0)))) ||
                       (iVar32 = (**(code **)(*plVar22 + 0x30))(), iVar32 != 0)))) ||
                     ((((cVar17 = (**(code **)(*plVar22 + 0x368))(), cVar17 != '\0' ||
                        ((**(code **)(*plVar22 + 0x288))(plVar22,local_170),
                        (local_170[0] >> 10 & 1) != 0)) ||
                       (cVar17 = (**(code **)(*plVar22 + 0xa8))(), cVar17 == '\0')) ||
                      (((*(char *)((longlong)param_1 + 0x77) < '\0' ||
                        (cVar17 = (**(code **)(*plVar22 + 0xb0))(), cVar17 != '\0')) ||
                       ((cVar17 = (**(code **)(*plVar22 + 0xb8))(), cVar17 != '\0' ||
                        (cVar17 = (**(code **)(*plVar22 + 0xc0))(), lVar13 = local_280,
                        cVar17 != '\0')))))))) {
                    local_2d0 = 0;
                    uVar31 = local_2c0;
                    bVar18 = 0;
                    break;
                  }
                  lVar29 = lVar29 + 0x10;
                  lVar1 = local_280 + 0x1c;
                  cVar17 = (**(code **)(*plVar22 + 200))(plVar22);
                  local_2d1 = local_2d1 & *(byte *)(lVar27 + lVar13);
                  local_2d0 = 0;
                  bVar18 = 0;
                  uVar31 = local_2c0;
                  local_280 = lVar1;
                } while (cVar17 == '\0');
              }
            }
            else {
              local_2d0 = 0;
              bVar18 = 0;
            }
            if (0 < *(int *)(local_2c8 + 0x38)) {
              bVar23 = (byte)local_2d0;
              iVar32 = 0;
              do {
                iVar19 = (**(code **)(*param_1 + 0x240))(param_1);
                (**(code **)(*local_2a8 + 0x10))(local_2a8,iVar19 * local_298);
                local_2b8 = (undefined4 *)CONCAT44(local_2b8._4_4_,iVar19);
                if (0 < iVar19) {
                  iVar19 = 0;
                  do {
                    local_c8 = (ushort *)0x0;
                    local_2b0[2] = 0;
                    *local_2b0 = 0;
                    local_2b0[1] = 0;
                    uStack_a0 = 0xffffffff;
                    local_98 = 0xff0000ffffffff;
                    uStack_90 = uStack_90 & 0xffffff00;
                    uStack_8c = 0x40c00f07;
                    local_88 = local_88 & 0xfc;
                    local_c0 = &DAT_100000001;
                    FUN_14470b9e0(local_170,1);
                    local_2f0 = 0;
                    local_2f8 = (ushort *)CONCAT71(local_2f8._1_7_,(char)local_294);
                    local_2e8 = 1;
                    local_2e0 = local_170;
                    cVar17 = (**(code **)(*param_1 + 0x250))
                                       (param_1,uVar31 & 0xffffffff,iVar19,iVar32);
                    puVar26 = local_c0;
                    plVar22 = local_2a8;
                    if (cVar17 != '\0') {
                      if (0 < (int)local_290) {
                        local_1b8 = (undefined1 *)0x0;
                        local_1b0 = (int)local_c0;
                        local_2c0 = uVar31;
                        if ((int)local_c0 == 0) {
                          local_1ac = 1;
                        }
                        else {
                          puVar24 = local_c8;
                          if (local_c8 == (ushort *)0x0) {
                            puVar24 = local_170;
                          }
                          FUN_14473945a(local_260,(ulonglong)local_c0 & 0xffffffff,0);
                          puVar25 = local_1b8;
                          if (local_1b8 == (undefined1 *)0x0) {
                            puVar25 = local_260;
                          }
                          FUN_1447393f1(puVar25,puVar24,(ulonglong)puVar26 & 0xffffffff);
                        }
                        local_1a8 = *(undefined4 *)local_2b0;
                        uStack_1a4 = *(undefined4 *)((longlong)local_2b0 + 4);
                        uStack_1a0 = local_2b0[1];
                        local_198 = local_2b0[2];
                        uStack_190 = local_2b0[3];
                        local_188 = local_2b0[4];
                        local_178 = *(undefined1 *)(local_2b0 + 6);
                        uStack_180 = local_2b0[5] & 0xfcfff0ffffffffff | 0x200000000000000;
                        lVar28 = param_1[0x1c];
                        if ((longlong)(int)lVar28 != 0) {
                          lVar29 = param_1[0x1b];
                          lVar27 = 0;
                          do {
                            uStack_180 = CONCAT44(uStack_180._4_4_ & 0xe3ffffff |
                                                  (*(byte *)(lVar29 + lVar27) & 7) << 0x1a,
                                                  (undefined4)uStack_180);
                            (**(code **)(*plVar22 + 0x18))(plVar22,local_260,fVar34);
                            lVar27 = lVar27 + 1;
                          } while ((int)lVar28 != lVar27);
                        }
                        puVar26 = local_1b8;
                        if (local_1b8 == (undefined1 *)0x0) {
                          puVar26 = local_260;
                        }
                        FUN_1446fc26f(puVar26,local_1b0);
                        uVar31 = local_2c0;
                        if (local_1b8 != (undefined1 *)0x0) {
                          FUN_1400020a8();
                          uVar31 = local_2c0;
                        }
                      }
                      puVar26 = local_c0;
                      local_1b8 = (undefined1 *)0x0;
                      local_1b0 = (int)local_c0;
                      if ((int)local_c0 == 0) {
                        local_1ac = 1;
                      }
                      else {
                        puVar24 = local_c8;
                        if (local_c8 == (ushort *)0x0) {
                          puVar24 = local_170;
                        }
                        FUN_14473945a(local_260,(ulonglong)local_c0 & 0xffffffff,0);
                        puVar25 = local_1b8;
                        if (local_1b8 == (undefined1 *)0x0) {
                          puVar25 = local_260;
                        }
                        FUN_1447393f1(puVar25,puVar24,(ulonglong)puVar26 & 0xffffffff);
                      }
                      *(undefined1 *)(local_268 + 0xc) = *(undefined1 *)(local_2b0 + 6);
                      uVar5 = *(undefined4 *)local_2b0;
                      uVar6 = *(undefined4 *)((longlong)local_2b0 + 4);
                      uVar7 = *(undefined4 *)(local_2b0 + 1);
                      uVar8 = *(undefined4 *)((longlong)local_2b0 + 0xc);
                      uVar9 = *(undefined4 *)(local_2b0 + 2);
                      uVar10 = *(undefined4 *)((longlong)local_2b0 + 0x14);
                      uVar11 = *(undefined4 *)(local_2b0 + 3);
                      uVar12 = *(undefined4 *)((longlong)local_2b0 + 0x1c);
                      uVar21 = local_2b0[5];
                      *(undefined8 *)(local_268 + 8) = local_2b0[4];
                      *(undefined8 *)(local_268 + 10) = uVar21;
                      local_268[4] = uVar9;
                      local_268[5] = uVar10;
                      local_268[6] = uVar11;
                      local_268[7] = uVar12;
                      *local_268 = uVar5;
                      local_268[1] = uVar6;
                      local_268[2] = uVar7;
                      local_268[3] = uVar8;
                      uVar20 = uStack_180._4_4_ & 0x400;
                      if ((char)local_2d0 != '\0') {
                        uVar20 = 0;
                      }
                      uStack_180 = CONCAT44(uVar20 | uStack_180._4_4_ &
                                                     ((uint)(byte)~bVar23 << 0xb |
                                                      ((byte)~bVar18 & 1) << 8 | 0xfffff2ff),
                                            (undefined4)uStack_180);
                      (**(code **)(*local_2a8 + 0x18))(local_2a8,local_260,fVar34);
                      puVar26 = local_1b8;
                      if (local_1b8 == (undefined1 *)0x0) {
                        puVar26 = local_260;
                      }
                      FUN_1446fc26f(puVar26,local_1b0);
                      if (local_1b8 != (undefined1 *)0x0) {
                        FUN_1400020a8();
                      }
                      puVar26 = local_c0;
                      plVar22 = (longlong *)param_1[0x58];
                      if ((plVar22 != (longlong *)0x0) && (0.0 <= *(float *)(param_1 + 0x59))) {
                        local_1b8 = (undefined1 *)0x0;
                        local_1b0 = (int)local_c0;
                        if ((int)local_c0 == 0) {
                          local_1ac = 1;
                        }
                        else {
                          puVar24 = local_c8;
                          if (local_c8 == (ushort *)0x0) {
                            puVar24 = local_170;
                          }
                          FUN_14473945a(local_260,(ulonglong)local_c0 & 0xffffffff,0);
                          puVar25 = local_1b8;
                          if (local_1b8 == (undefined1 *)0x0) {
                            puVar25 = local_260;
                          }
                          FUN_1447393f1(puVar25,puVar24,(ulonglong)puVar26 & 0xffffffff);
                          plVar22 = (longlong *)param_1[0x58];
                        }
                        local_1a8 = *(undefined4 *)local_2b0;
                        uStack_1a4 = *(undefined4 *)((longlong)local_2b0 + 4);
                        uStack_1a0 = local_2b0[1];
                        local_198 = local_2b0[2];
                        uStack_190 = local_2b0[3];
                        local_188 = local_2b0[4];
                        local_178 = *(undefined1 *)(local_2b0 + 6);
                        uStack_180 = local_2b0[5] & 0xdf7ffeffffffffff | 0x2000000000000000;
                        uStack_1a0 = (**(code **)(*plVar22 + 0x2f0))();
                        local_188._0_6_ =
                             CONCAT24(local_188._4_2_ + *(short *)(local_2c8 + 0x38),
                                      (undefined4)local_188);
                        (**(code **)(*local_2a8 + 0x18))(local_2a8,local_260,(int)param_1[0x59]);
                        puVar26 = local_1b8;
                        if (local_1b8 == (undefined1 *)0x0) {
                          puVar26 = local_260;
                        }
                        FUN_1446fc26f(puVar26,local_1b0);
                        if (local_1b8 != (undefined1 *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                    }
                    puVar24 = local_c8;
                    if (local_c8 == (ushort *)0x0) {
                      puVar24 = local_170;
                    }
                    FUN_1446fc26f(puVar24,(ulonglong)local_c0 & 0xffffffff);
                    if (local_c8 != (ushort *)0x0) {
                      FUN_1400020a8();
                    }
                    iVar19 = iVar19 + 1;
                  } while (iVar19 != (int)local_2b8);
                }
                iVar32 = iVar32 + 1;
              } while (iVar32 < *(int *)(local_2c8 + 0x38));
            }
          }
          uVar31 = uVar31 + 1;
        } while (local_29c != (int)uVar31);
      }
    }
    else {
      if (iVar19 < iVar32) {
        iVar32 = iVar19;
      }
      if (iVar32 < iVar3 + 1) {
        iVar32 = iVar3 + 1;
      }
      local_2c8 = *(longlong *)(*(longlong *)param_1[0x53] + -8 + (longlong)iVar32 * 8);
      if (0 < *(int *)(local_2c8 + 0x38)) {
        local_29c = iVar32 + -1;
        local_298 = uVar20 + 1;
        local_2b8 = &local_1a8;
        local_2b0 = (undefined8 *)((ulonglong)local_2b0 & 0xffffffff00000000);
        do {
          uVar20 = (**(code **)(*param_1 + 0x240))(param_1);
          plVar22 = local_2a8;
          (**(code **)(*local_2a8 + 0x10))(local_2a8,uVar20 * local_298);
          local_2d0 = uVar20;
          if (0 < (int)uVar20) {
            uVar20 = 0;
            do {
              local_c8 = (ushort *)0x0;
              local_c0 = (undefined1 *)0x100000000;
              local_a8 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              uStack_a0 = 0xffffffff;
              local_98 = 0xff0000ffffffff;
              uStack_90 = uStack_90 & 0xffffff00;
              uStack_8c = 0x40c00f07;
              local_88 = local_88 & 0xfc;
              FUN_141793e06(local_170);
              local_2f0 = 0;
              local_2f8 = (ushort *)CONCAT71(local_2f8._1_7_,(char)local_294);
              local_2e8 = 1;
              local_2e0 = local_170;
              cVar17 = (**(code **)(*param_1 + 0x250))
                                 (param_1,local_29c,uVar20,(ulonglong)local_2b0 & 0xffffffff);
              if (cVar17 != '\0') {
                if (0 < (int)local_290) {
                  local_1b8 = (undefined1 *)0x0;
                  puVar24 = local_c8;
                  if (local_c8 == (ushort *)0x0) {
                    puVar24 = local_170;
                  }
                  FUN_144739392(local_260,puVar24,(ulonglong)local_c0 & 0xffffffff,0);
                  *(byte *)(local_2b8 + 0xc) = local_88;
                  uVar15 = uStack_a0;
                  uVar14 = local_a8;
                  uVar5 = (undefined4)local_b8;
                  uVar6 = local_b8._4_4_;
                  uVar7 = (undefined4)uStack_b0;
                  uVar8 = uStack_b0._4_4_;
                  uVar21 = CONCAT44(uStack_8c,uStack_90);
                  *(undefined8 *)(local_2b8 + 8) = local_98;
                  *(undefined8 *)(local_2b8 + 10) = uVar21;
                  *(undefined8 *)(local_2b8 + 4) = uVar14;
                  *(undefined8 *)(local_2b8 + 6) = uVar15;
                  *local_2b8 = uVar5;
                  local_2b8[1] = uVar6;
                  local_2b8[2] = uVar7;
                  local_2b8[3] = uVar8;
                  uStack_180 = uStack_180 & 0xfcfff0ffffffffff | 0x200000000000000;
                  lVar28 = param_1[0x1c];
                  if ((longlong)(int)lVar28 != 0) {
                    lVar29 = param_1[0x1b];
                    lVar27 = 0;
                    do {
                      uStack_180 = CONCAT44(uStack_180._4_4_ & 0xe3ffffff |
                                            (*(byte *)(lVar29 + lVar27) & 7) << 0x1a,
                                            (undefined4)uStack_180);
                      (**(code **)(*plVar22 + 0x18))(plVar22,local_260,0x7f7fffff);
                      lVar27 = lVar27 + 1;
                    } while ((int)lVar28 != lVar27);
                  }
                  FUN_1446fc232(local_260);
                }
                (**(code **)(*plVar22 + 0x18))(plVar22,local_170,0x7f7fffff);
                if (param_1[0x58] != 0) {
                  local_1b8 = (undefined1 *)0x0;
                  puVar24 = local_c8;
                  if (local_c8 == (ushort *)0x0) {
                    puVar24 = local_170;
                  }
                  FUN_144739392(local_260,puVar24,(ulonglong)local_c0 & 0xffffffff,0);
                  *(byte *)(local_2b8 + 0xc) = local_88;
                  uVar30 = uStack_8c;
                  uVar4 = uStack_90;
                  uVar5 = (undefined4)local_b8;
                  uVar6 = local_b8._4_4_;
                  uVar7 = (undefined4)uStack_b0;
                  uVar8 = uStack_b0._4_4_;
                  uVar9 = (undefined4)local_a8;
                  uVar10 = local_a8._4_4_;
                  uVar11 = (undefined4)uStack_a0;
                  uVar12 = uStack_a0._4_4_;
                  uVar16 = local_98._4_4_;
                  local_2b8[8] = (undefined4)local_98;
                  local_2b8[9] = uVar16;
                  local_2b8[10] = uVar4;
                  local_2b8[0xb] = uVar30;
                  local_2b8[4] = uVar9;
                  local_2b8[5] = uVar10;
                  local_2b8[6] = uVar11;
                  local_2b8[7] = uVar12;
                  *local_2b8 = uVar5;
                  local_2b8[1] = uVar6;
                  local_2b8[2] = uVar7;
                  local_2b8[3] = uVar8;
                  uStack_180 = uStack_180 & 0xdf7ffeffffffffff | 0x2000000000000000;
                  uStack_1a0 = (**(code **)(*(longlong *)param_1[0x58] + 0x2f0))();
                  local_188._0_6_ =
                       CONCAT24(local_188._4_2_ + *(short *)(local_2c8 + 0x38),(undefined4)local_188
                               );
                  (**(code **)(*plVar22 + 0x18))(plVar22,local_260,0x7f7fffff);
                  FUN_1446fc232(local_260);
                }
              }
              FUN_1446fc232(local_170);
              uVar20 = uVar20 + 1;
            } while (uVar20 != local_2d0);
          }
          iVar32 = (int)local_2b0 + 1;
          local_2b0 = (undefined8 *)CONCAT44(local_2b0._4_4_,iVar32);
        } while (iVar32 < *(int *)(local_2c8 + 0x38));
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14015294c FUN_14015294c body=728 status=ok
// SIG undefined FUN_14015294c(void)

ulonglong FUN_14015294c(longlong param_1,int param_2,undefined8 param_3,int param_4,byte param_5,
                       undefined8 param_6,undefined1 param_7,longlong param_8)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined4 local_68;
  
  lVar11 = (longlong)param_2;
  lVar4 = *(longlong *)(**(longlong **)(param_1 + 0x298) + lVar11 * 8);
  lVar17 = lVar4 + 0x10;
  if (*(longlong *)(lVar4 + 0x30) != 0) {
    lVar17 = *(longlong *)(lVar4 + 0x30);
  }
  lVar5 = (longlong)param_4 * 0x1c;
  if (*(int *)(lVar17 + 8 + lVar5) == 0) {
    uVar16 = 0;
  }
  else {
    lVar15 = lVar11 * 0x450 + (*(longlong **)(param_1 + 0x298))[2];
    lVar1 = *(longlong *)(param_1 + 0x2a0) + lVar11 * 0x80;
    lVar11 = *(longlong *)(param_1 + 0x2a0) + lVar11 * 0x80;
    lVar12 = *(longlong *)(lVar11 + 0x40);
    if (*(longlong *)(lVar11 + 0x40) == 0) {
      lVar12 = lVar11 + 0x30;
    }
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x210) + 8);
    uVar8 = (**(code **)(**(longlong **)(lVar12 + (longlong)param_4 * 0x10) + 0x2f0))();
    plVar9 = (longlong *)FUN_14485b2b4(uVar8,uVar2);
    lVar12 = *(longlong *)(param_8 + 0xa8);
    if (*(longlong *)(param_8 + 0xa8) == 0) {
      lVar12 = param_8;
    }
    if (*(longlong *)(lVar11 + 0x50) == 0) {
      *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(lVar15 + 0x208);
    }
    else {
      lVar15 = lVar15 + 0x220;
      *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(lVar1 + 0x58);
      *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(lVar1 + 0x50);
      *(byte *)(lVar12 + 0x7d) = *(byte *)(lVar12 + 0x7d) | 1;
    }
    if (((DAT_14c761ba5 == '\x01') &&
        ((*(byte *)(param_1 + 0x880) & 2) >> 1 != (*(byte *)(param_1 + 0x6b) & 1))) &&
       ((*(byte *)(lVar4 + 0x5c) & 2) != 0)) {
      bVar6 = (**(code **)(*plVar9 + 0x38))(plVar9);
      bVar6 = bVar6 ^ 1;
    }
    else {
      bVar6 = 0;
    }
    if ((byte)(*(char *)(param_1 + 0x68) - 1U) < 2) {
      local_68 = 0;
    }
    else {
      local_68 = (**(code **)(*plVar9 + 0x48))(plVar9);
    }
    uVar16 = 0;
    iVar7 = FUN_140152ce8(param_1,param_2,param_4,0,bVar6,param_7,lVar15,param_8);
    if (iVar7 != 0) {
      lVar17 = lVar17 + lVar5;
      uVar3 = *(uint *)(param_8 + 0xe4);
      uVar10 = (*(byte *)(param_1 + 0x77) & 0x40) << 7;
      *(uint *)(param_8 + 0xe4) = uVar3 & 0xffffdfff | uVar10;
      *(int *)(param_8 + 0xd8) = param_4;
      *(short *)(param_8 + 0xdc) = (short)param_4;
      *(char *)(param_8 + 0xde) = (char)param_2;
      uVar13 = ((byte)~((*(byte *)(param_1 + 0x880) & 2) == 0 ^ *(byte *)(param_1 + 0x6b)) & 1) << 6
      ;
      if (bVar6 != 0) {
        uVar13 = 0;
      }
      *(uint *)(param_8 + 0xe4) = uVar3 & 0xffffdfbf | uVar10 | uVar13;
      uVar14 = (uint)*(byte *)(lVar17 + 0x15) << 8 & -(*(uint *)(param_1 + 0x880) & 1);
      *(uint *)(param_8 + 0xe4) = uVar3 & 0xffffdebf | uVar10 | uVar13 | uVar14;
      if (uVar14 != 0) {
        uVar16 = (ulonglong)((*(byte *)(param_1 + 0x70) & 1) << 0x1e);
      }
      *(uint *)(param_8 + 0xe4) =
           (uint)(param_5 & 7) << 0x11 | (uint)uVar16 |
           uVar3 & 0xbff1debf | uVar10 | uVar13 | uVar14;
      *(longlong *)(param_8 + 200) = lVar1;
      *(undefined8 *)(param_8 + 0xc0) = uVar8;
      *(undefined4 *)(lVar12 + 0x68) = *(undefined4 *)(lVar17 + 0xc);
      *(undefined4 *)(lVar12 + 0x6c) = *(undefined4 *)(lVar17 + 0x10);
      FUN_140152c24(param_1,param_2,local_68,param_8);
      uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
    }
  }
  return uVar16;
}



// FUNCTION 140152c24 FUN_140152c24 body=185 status=ok
// SIG undefined FUN_140152c24(void)

void FUN_140152c24(longlong *param_1,int param_2,byte param_3,longlong param_4)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = *(longlong *)(param_4 + 0xa8);
  if (*(longlong *)(param_4 + 0xa8) == 0) {
    lVar2 = param_4;
  }
  if ((int)param_1[0x10f] < 1) {
    *(uint *)(param_4 + 0xe4) = *(uint *)(param_4 + 0xe4) & 0xfeffffff | (uint)param_3 << 0x18;
    fVar1 = *(float *)(param_1[0x53] + 0x20 + (longlong)param_2 * 4);
    fVar3 = (float)(**(code **)(*param_1 + 0x208))(param_1);
    *(float *)(lVar2 + 0x78) = fVar3 * fVar1;
    *(undefined4 *)(lVar2 + 0x74) = 0;
    if (param_2 < 7) {
      fVar1 = *(float *)(param_1[0x53] + 0x24 + (longlong)param_2 * 4);
      fVar3 = (float)(**(code **)(*param_1 + 0x208))(param_1);
      *(float *)(lVar2 + 0x74) = fVar3 * fVar1;
    }
  }
  else {
    *(uint *)(param_4 + 0xe4) = *(uint *)(param_4 + 0xe4) & 0xfeffffff;
    *(undefined8 *)(lVar2 + 0x74) = 0xbf800000;
  }
  return;
}



// FUNCTION 140152ce8 FUN_140152ce8 body=628 status=ok
// SIG undefined FUN_140152ce8(void)

int FUN_140152ce8(longlong param_1,int param_2,int param_3,char param_4,char param_5,char param_6,
                 undefined8 param_7,longlong param_8)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  lVar4 = *(longlong *)(**(longlong **)(param_1 + 0x298) + (longlong)param_2 * 8);
  lVar9 = lVar4 + 0x10;
  if (*(longlong *)(lVar4 + 0x30) != 0) {
    lVar9 = *(longlong *)(lVar4 + 0x30);
  }
  lVar2 = (longlong)param_3 * 0x1c;
  if (*(int *)(lVar9 + 8 + lVar2) == 0) {
    return 0;
  }
  lVar6 = (longlong)param_2 * 0x80;
  lVar1 = *(longlong *)(param_1 + 0x2a0) + lVar6;
  lVar6 = *(longlong *)(param_1 + 0x2a0) + lVar6;
  lVar7 = *(longlong *)(lVar6 + 0x40);
  if (lVar7 == 0) {
    lVar7 = lVar6 + 0x30;
  }
  lVar6 = *(longlong *)(param_8 + 0xa8);
  if (*(longlong *)(param_8 + 0xa8) == 0) {
    lVar6 = param_8;
  }
  if (param_6 == '\0') {
    if (param_4 != '\0') {
      bVar5 = 0;
      goto LAB_140152dec;
    }
    *(uint *)(param_8 + 0xe4) = *(uint *)(param_8 + 0xe4) & 0xfffe3fff;
  }
  else {
    lVar7 = lVar7 + (longlong)param_3 * 0x10;
    bVar5 = -1 < *(int *)(lVar7 + 0xc) & DAT_14c761ba4;
    if (param_4 != '\0') {
LAB_140152dec:
      if ((*(longlong *)(lVar4 + 0x218) != 0) &&
         (*(int *)(*(longlong *)(lVar4 + 0x218) + 0x88) != -1)) {
        *(uint *)(param_8 + 0xe4) = *(uint *)(param_8 + 0xe4) & 0xfffe3fff | 0x8000;
        *(undefined4 *)(lVar6 + 0x58) = 0;
        *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar4 + 0x218) + 0x80;
        lVar4 = *(longlong *)(lVar4 + 0x218);
        iVar3 = *(int *)(lVar4 + 0xb8);
        if (iVar3 < 0) {
          iVar8 = *(int *)(lVar4 + 0xa8);
          if (*(char *)(lVar4 + 0xbc) == '\x01') {
            iVar3 = iVar8 + 3;
            if (-1 < iVar8) {
              iVar3 = iVar8;
            }
            iVar3 = iVar3 >> 2;
          }
          else {
            iVar3 = iVar8 / 2;
          }
        }
        iVar3 = iVar3 / 2;
        goto LAB_140152db4;
      }
      *(uint *)(param_8 + 0xe4) = *(uint *)(param_8 + 0xe4) & 0xfffe3fff;
      if (bVar5 == 0) {
        *(undefined4 *)(lVar6 + 0x58) = 0;
        *(longlong *)(lVar6 + 0x18) = lVar4 + 0x198;
        iVar3 = *(int *)(lVar4 + 0x1d0);
        if (iVar3 < 0) {
          iVar8 = *(int *)(lVar4 + 0x1c0);
          if (*(char *)(lVar4 + 0x1d4) != '\x01') {
            iVar8 = iVar8 - (iVar8 >> 0x1f);
            goto LAB_140152f54;
          }
          iVar3 = iVar8 + 3;
          if (-1 < iVar8) {
            iVar3 = iVar8;
          }
LAB_140152f26:
          iVar3 = iVar3 >> 2;
        }
      }
      else {
        *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(lVar1 + 0x60);
        *(undefined4 *)(lVar6 + 0x58) = 0;
        lVar4 = *(longlong *)(lVar1 + 0x60);
        iVar3 = *(int *)(lVar4 + 0x38);
        if (iVar3 < 0) {
          iVar8 = *(int *)(lVar4 + 0x28);
          if (*(char *)(lVar4 + 0x3c) == '\x01') {
            iVar3 = iVar8 + 3;
            if (-1 < iVar8) {
              iVar3 = iVar8;
            }
            goto LAB_140152f26;
          }
          iVar8 = iVar8 - (iVar8 >> 0x1f);
LAB_140152f54:
          iVar3 = iVar8 >> 1;
        }
      }
      iVar3 = iVar3 / 3;
      *(uint *)(param_8 + 0xe4) = *(uint *)(param_8 + 0xe4) | 0x1080;
      goto LAB_140152db4;
    }
    *(uint *)(param_8 + 0xe4) = *(uint *)(param_8 + 0xe4) & 0xfffe3fff;
    if (bVar5 != 0) {
      *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(lVar1 + 0x60);
      *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(lVar7 + 8);
      iVar3 = *(int *)(lVar7 + 0xc);
      goto LAB_140152db4;
    }
  }
  lVar9 = lVar9 + lVar2;
  if (param_5 == '\0') {
    lVar4 = lVar4 + 0x198;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x218);
  }
  *(longlong *)(lVar6 + 0x18) = lVar4;
  *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(lVar9 + 4);
  iVar3 = *(int *)(lVar9 + 8);
LAB_140152db4:
  *(int *)(lVar6 + 0x5c) = iVar3;
  *(undefined8 *)(param_8 + 0xb8) = param_7;
  return iVar3;
}



// FUNCTION 140152f5c FUN_140152f5c body=112 status=ok
// SIG undefined FUN_140152f5c(void)

void FUN_140152f5c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar1);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 140152fdc FUN_140152fdc body=113 status=ok
// SIG undefined FUN_140152fdc(void)

void FUN_140152fdc(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)param_2 * 0x10 + lVar1);
  FUN_14015304d(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 14015304d FUN_14015304d body=45 status=ok
// SIG undefined FUN_14015304d(void)

void FUN_14015304d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14015307a FUN_14015307a body=63 status=ok
// SIG undefined FUN_14015307a(void)

void FUN_14015307a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1401530ba();
  }
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001401530af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1401530ba FUN_1401530ba body=119 status=ok
// SIG undefined FUN_1401530ba(void)

void FUN_1401530ba(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  LOCK();
  piVar1 = (int *)(param_1 + 0x6cd0);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((*piVar1 == 0) && ((*(byte *)(param_1 + 0x6cd4) & 1) != 0)) {
    LOCK();
    bVar2 = *(byte *)(param_1 + 0x6cd6);
    *(byte *)(param_1 + 0x6cd6) = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
    }
  }
  else {
    local_11 = 0;
    FUN_14485b546(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140153144 FUN_140153144 body=219 status=ok
// SIG undefined FUN_140153144(void)

undefined8 * FUN_140153144(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = &PTR_FUN_14ab46068;
  (**(code **)(param_1[7] + 0x18))(param_1 + 7,param_1 + 2);
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1437e54fa);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14015322d FUN_14015322d body=71 status=ok
// SIG undefined FUN_14015322d(void)

undefined8 FUN_14015322d(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x40))(param_2);
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_140153274(param_1,uVar2);
  }
  return 1;
}



// FUNCTION 140153274 FUN_140153274 body=325 status=ok
// SIG undefined FUN_140153274(void)

undefined8 FUN_140153274(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char *_Str;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  char *local_30;
  int local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pbVar1 = (byte *)*param_2;
  if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) &&
     (_Str = *(char **)(pbVar1 + 8), _Str != (char *)0x0)) {
    sVar2 = strlen(_Str);
    iVar4 = (int)sVar2;
    if (iVar4 != 0) {
      lVar5 = (longlong)iVar4;
      pcVar9 = _Str + lVar5 + -1;
      uVar3 = 0;
      if (pcVar9 < _Str) {
        lVar8 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar9 - 0x30U)) break;
          uVar3 = uVar3 + 1;
          pcVar9 = pcVar9 + -1;
        } while (_Str <= pcVar9);
        lVar8 = 0;
        if (((uVar3 != 0) && ((int)uVar3 < iVar4)) &&
           ((lVar8 = 0, uVar3 < 0xb &&
            (lVar10 = -(ulonglong)uVar3, _Str[lVar10 + lVar5 + -1] == '_')))) {
          if ((uVar3 == 1) || (_Str[lVar10 + lVar5] != '0')) {
            lVar7 = 0;
            do {
              lVar8 = (longlong)_Str[lVar10 + lVar5] + lVar7 * 10;
              lVar7 = lVar8 + -0x30;
              lVar10 = lVar10 + 1;
            } while (lVar10 != 0);
            if (lVar7 < 0x7fffffff) {
              iVar4 = ~uVar3 + iVar4;
              lVar8 = lVar8 + -0x2f;
              goto LAB_140153339;
            }
          }
          lVar8 = 0;
        }
LAB_140153339:
        if (iVar4 == 0) goto LAB_140153295;
      }
      local_24 = 0;
      local_30 = _Str;
      local_28 = iVar4;
      uVar3 = FUN_14001a6c0(&local_30,1);
      uVar6 = lVar8 << 0x20;
      local_38 = (ulonglong)uVar3;
      goto LAB_140153299;
    }
  }
LAB_140153295:
  local_38 = 0;
  uVar6 = 0;
LAB_140153299:
  local_38 = local_38 | uVar6;
  FUN_1401533ba(&local_30,&local_38,1);
  *(int *)(param_1 + 1) = local_28;
  *param_1 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1401533ba FUN_1401533ba body=172 status=ok
// SIG undefined FUN_1401533ba(void)

longlong FUN_1401533ba(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  longlong local_40;
  code *local_38;
  undefined4 **local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar1 = *param_2;
  local_48 = &local_24;
  local_24 = 0;
  local_30 = &local_48;
  local_38 = FUN_1400018c6;
  local_40 = param_1;
  if (DAT_14c947fe0 == 0) {
    lVar2 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar2);
    DAT_14c947fe0 = lVar2;
  }
  FUN_14493bb52(DAT_14c947fe0,uVar1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140153468 FUN_140153468 body=121 status=ok
// SIG undefined FUN_140153468(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140153468(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 8) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    if (*(char *)(param_1 + 0x20) == '\x01') {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return _DAT_00000378;
      }
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
    uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x378);
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
  return uVar6;
}



// FUNCTION 1401534e2 FUN_1401534e2 body=514 status=ok
// SIG undefined FUN_1401534e2(void)

undefined8 FUN_1401534e2(longlong *param_1)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined7 uVar7;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar8;
  
  if (param_1[0x2a3] != 0) {
    return 0;
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 != 1) {
      return 0;
    }
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    if (DVar3 != DVar4) {
      return 0;
    }
  }
  lVar5 = param_1[0x15];
  uVar7 = (undefined7)((ulonglong)lVar5 >> 8);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x178) == '\x01')) {
    return CONCAT71(uVar7,1);
  }
  if ((char)param_1[0x387] != '\0') {
    return 0;
  }
  if ((char)param_1[0x382] != '\0') {
    return CONCAT71(uVar7,1);
  }
  if (((char)param_1[0x220] == '\n') && (param_1[0x22] != 0)) {
    return 0;
  }
  if (((char)param_1[0x39b] == '\0') &&
     (cVar2 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f), cVar2 != '\0')) {
    return 0;
  }
  if (param_1[0x62e] == 0) {
    if ((char)param_1[0x696] == '\x01') {
      plVar8 = param_1 + 0x642;
      goto LAB_1401535ad;
    }
  }
  else {
    plVar8 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_1401535ad:
    lVar5 = FUN_140153468(plVar8);
    if (((lVar5 != 0) && ((*(byte *)(plVar8 + 0x53) & 2) == 0)) && (param_1[0x22] != 0)) {
      if (param_1[0x62e] == 0) {
        if ((char)param_1[0x696] == '\x01') {
          plVar8 = param_1 + 0x642;
          goto LAB_1401535e4;
        }
        lVar5 = 0;
      }
      else {
        plVar8 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_1401535e4:
        lVar5 = FUN_140153468(plVar8);
      }
      if ((*(byte *)(lVar5 + 0x100) & 0x80) != 0) {
        return 0;
      }
    }
  }
  cVar2 = (**(code **)(*param_1 + 0xeb8))(param_1);
  if ((cVar2 == '\0') || (cVar2 = FUN_1401787de(param_1), cVar2 == '\0')) {
    if ((param_1[0x39d] == 0) || (*(byte *)(param_1[0x39d] + 0x178) < 2)) {
      cVar2 = (char)param_1[0x3dc];
    }
    else {
      plVar8 = (longlong *)param_1[0x3d7];
      if (plVar8 == (longlong *)0x0) goto LAB_140153663;
      if (*(code **)(*plVar8 + 0x40) == (code *)&LAB_1449cc0ea) {
        if (*(char *)((longlong)plVar8 + 0xb2) != '\0') goto LAB_140153663;
        if (*(char *)((longlong)plVar8 + 0x79) != '\0') {
          return 0;
        }
        if ((int)plVar8[4] < 1) goto LAB_140153663;
        cVar2 = (char)plVar8[0xf];
      }
      else {
        cVar2 = (**(code **)(*plVar8 + 0x40))();
      }
    }
    if (cVar2 == '\0') {
LAB_140153663:
      uVar6 = FUN_140153c34(param_1);
      return uVar6;
    }
  }
  return 0;
}



// FUNCTION 1401536e4 FUN_1401536e4 body=1180 status=ok
// SIG undefined FUN_1401536e4(void)

ulonglong FUN_1401536e4(longlong *param_1,char param_2,undefined1 *param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((((longlong *)param_1[0x841] == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*(longlong *)param_1[0x841] + 0x700))(), cVar1 == '\0')) ||
      (param_1[0x841] == 0)) || (lVar3 = *(longlong *)(param_1[0x841] + 0x3c0), lVar3 == 0)) {
LAB_140153780:
    if ((char)param_1[0x8cd] == '\x01') {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 2;
      }
    }
    else if (((param_1[0x886] != 0) && (lVar3 = param_1[0x841], lVar3 != 0)) &&
            ((*(char *)(lVar3 + 0x5d30) == '\0' &&
             (((param_1[0x8b1] == 0 || (*(char *)(param_1[0x8b1] + 0x1d) != '\x01')) ||
              (cVar1 = (**(code **)(*(longlong *)(lVar3 + 0x3b48) + 0x60))(lVar3 + 0x3b48),
              cVar1 == '\0')))))) {
      if ((param_1[0x39d] == 0) || (*(byte *)(param_1[0x39d] + 0x178) < 2)) {
        cVar1 = (char)param_1[0x3dc];
joined_r0x000140153b01:
        if (cVar1 != '\0') goto LAB_140153966;
      }
      else {
        plVar6 = (longlong *)param_1[0x3d7];
        if (plVar6 != (longlong *)0x0) {
          if (*(code **)(*plVar6 + 0x40) != (code *)&LAB_1449cc0ea) {
            cVar1 = (**(code **)(*plVar6 + 0x40))();
            goto joined_r0x000140153b01;
          }
          if (*(char *)((longlong)plVar6 + 0xb2) == '\0') {
            if (*(char *)((longlong)plVar6 + 0x79) != '\0') goto LAB_140153966;
            if (0 < (int)plVar6[4]) {
              cVar1 = (char)plVar6[0xf];
              goto joined_r0x000140153b01;
            }
          }
        }
      }
      if (param_2 != '\0') {
        FUN_14075fe08(param_1,0x80000);
        cVar1 = FUN_14075fa88(param_1 + 0x857);
        if (cVar1 == '\0') {
          if (param_3 != (undefined1 *)0x0) {
            *param_3 = 3;
          }
          goto LAB_140153966;
        }
      }
      cVar1 = (**(code **)(*(longlong *)(param_1[0x841] + 0x3b60) + 0x50))(param_1[0x841] + 0x3b60);
      if ((cVar1 == '\0') &&
         ((((lVar3 = (**(code **)(*(longlong *)(param_1[0x841] + 0x3c20) + 0x18))
                               (param_1[0x841] + 0x3c20), lVar3 == 0 ||
            (lVar4 = FUN_14058c572(lVar3), lVar4 == 0)) ||
           ((*(float *)(lVar3 + 0x50) <= 0.0 || (*(char *)(lVar4 + 0x732) == '\0')))) &&
          (((char)param_1[0x220] != '\n' || (param_1[0x22] == 0)))))) {
        cVar1 = FUN_1404f2c5c(param_1);
        cVar2 = (**(code **)(*param_1 + 0xe88))(param_1);
        if (cVar1 == '\0') goto LAB_1401538f3;
        if (cVar2 == '\x01') {
          plVar6 = param_1 + 0x2f;
          cVar1 = (**(code **)(param_1[0x2f] + 0xd0))(plVar6);
          if (cVar1 == '\0') {
            cVar1 = (**(code **)(*plVar6 + 0xd8))(plVar6);
            if (cVar1 != '\0') goto LAB_1401538f3;
            plVar6 = (longlong *)param_1[0x841];
            if (plVar6 == (longlong *)0x0) {
LAB_140153b1d:
              param_1 = *(longlong **)(param_1[0x841] + 0x1b0);
              if (param_1 != (longlong *)0x0) {
                uVar5 = FUN_141262f1a();
                plVar6 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar5);
                if (plVar6 != (longlong *)0x0) {
                  uVar5 = FUN_141262f1a();
                  plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
                  param_1 = plVar6;
                  if (plVar7 != (longlong *)0x0 && plVar6 != plVar7) goto LAB_1401539e5;
                }
              }
            }
            else {
              uVar5 = FUN_141262f1a();
              plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
              if (plVar6 == (longlong *)0x0) goto LAB_140153b1d;
              uVar5 = FUN_141262f1a();
              plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
              if ((plVar6 == plVar7) || (plVar7 == (longlong *)0x0)) goto LAB_140153b1d;
LAB_1401539e5:
              uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7);
              param_1 = (longlong *)0x0;
              cVar1 = FUN_140338496(uVar5,0);
              if (cVar1 != '\0') goto LAB_1401538f6;
              lVar3 = (**(code **)(*plVar7 + 0x18))(plVar7);
              if ((0 < *(int *)(lVar3 + 0xa8)) &&
                 ((*(byte *)(*(longlong *)(lVar3 + 0xa0) + 0x68) & 2) != 0)) goto LAB_140153966;
            }
LAB_1401538f3:
            param_1 = (longlong *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
            goto LAB_1401538f6;
          }
        }
        else if (cVar2 != '\0') goto LAB_1401538f3;
      }
    }
  }
  else {
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
    if (((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
       ((lVar3 = FUN_14030d330(lVar3), lVar3 == 0 || (*(char *)(lVar3 + 0x364) != '\0'))))
    goto LAB_140153780;
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 4;
    }
  }
LAB_140153966:
  param_1 = (longlong *)0x0;
LAB_1401538f6:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return (ulonglong)param_1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140153b82 FUN_140153b82 body=178 status=ok
// SIG undefined FUN_140153b82(void)

undefined8 FUN_140153b82(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  
  if ((char)param_1[0x8d2] == '\0') {
    cVar1 = (**(code **)(param_1[0x2f] + 0xd8))();
    if (cVar1 == '\0') {
      bVar2 = (char)param_1[0x220] != '\r';
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      return 0;
    }
    if (param_1[0x87b] == 0) {
      return 0;
    }
    if ((((param_1[0x841] != 0) && (*(char *)(param_1[0x841] + 0x5d30) == '\0')) &&
        (cVar1 = (**(code **)(*param_1 + 0xe78))(param_1,0x200000), cVar1 != '\0')) &&
       (((param_1[0x8b1] == 0 || (*(char *)(param_1[0x8b1] + 0x1e) != '\x01')) ||
        (cVar1 = (**(code **)(*(longlong *)(param_1[0x841] + 0x3b48) + 0x60))
                           (param_1[0x841] + 0x3b48), cVar1 == '\0')))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140153c34 FUN_140153c34 body=104 status=ok
// SIG undefined FUN_140153c34(void)

ulonglong FUN_140153c34(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(param_1 + 0x178);
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0x110))(plVar1);
  if ((cVar2 != '\0') &&
     (((cVar2 = (**(code **)(*plVar1 + 0xd8))(plVar1), cVar2 != '\0' ||
       (cVar2 = (**(code **)(*plVar1 + 0xe0))(plVar1), cVar2 != '\0')) &&
      (plVar1 = *(longlong **)(param_1 + 0x110), plVar1 != (longlong *)0x0)))) {
    uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,0);
    return uVar3 ^ 1;
  }
  return 0;
}



// FUNCTION 140153c9c FUN_140153c9c body=19 status=ok
// SIG undefined FUN_140153c9c(void)

ulonglong FUN_140153c9c(longlong *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(**(code **)(*param_1 + 0x30))();
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1) & 0xffffffffffffff01;
}



// FUNCTION 140153cb0 FUN_140153cb0 body=89 status=ok
// SIG undefined FUN_140153cb0(void)

void FUN_140153cb0(longlong *param_1,uint param_2)

{
  char cVar1;
  
  if (param_1[0x886] != 0) {
    cVar1 = (**(code **)(*param_1 + 0xf38))();
    if (cVar1 != '\0') {
      FUN_1410fee4e(param_1,(param_2 & 0xff) << 2);
      if ((longlong *)param_1[0x841] != (longlong *)0x0) {
        cVar1 = (**(code **)(*(longlong *)param_1[0x841] + 0x700))();
        if (cVar1 != '\0') {
          *(byte *)(param_1 + 0x88b) = *(byte *)(param_1 + 0x88b) & 0xfe;
        }
      }
    }
  }
  return;
}



// FUNCTION 140153d0a FUN_140153d0a body=805 status=ok
// SIG undefined FUN_140153d0a(void)

ulonglong FUN_140153d0a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  undefined8 unaff_RBX;
  PSRWLOCK SRWLock;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar6 = 1;
  if (*(char *)(param_1 + 0xd0) != '\x01') goto LAB_140153f3d;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
LAB_140154007:
    lVar5 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_70 = &local_50;
      local_50 = FUN_140754f84;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_147da9a76;
      local_80 = FUN_1409f3105;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000000;
      local_a0 = 8;
      local_a8 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_140154007;
  }
  if (*(int *)(lVar5 + 0x15c) != 0) goto LAB_140153f3d;
  lVar4 = (**(code **)(*param_2 + 0x2c8))(param_2);
  SRWLock = (PSRWLOCK)(lVar5 + 0xe0);
  AcquireSRWLockShared(SRWLock);
  if (lVar4 == 0) {
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockShared(SRWLock);
    ReleaseSRWLockShared(SRWLock);
  }
  else {
    bVar3 = *(byte *)(lVar4 + 0x243);
    ReleaseSRWLockShared(SRWLock);
    if ((bVar3 & 0xc) == 4) goto LAB_140153f3d;
    AcquireSRWLockShared(SRWLock);
    bVar3 = *(byte *)(lVar4 + 0x243);
    ReleaseSRWLockShared(SRWLock);
    if ((bVar3 & 0xc) == 8) goto LAB_140153f3d;
  }
  if ((*(char *)((longlong)param_2 + 0x59) == '\x01') &&
     (lVar5 = (**(code **)(*param_2 + 0x2c8))(param_2), lVar5 != 0)) {
    lVar5 = (**(code **)(*param_2 + 0x2c8))(param_2);
    iVar1 = *(int *)(lVar5 + 0xa8);
    if ((longlong)iVar1 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0xa0);
      bVar6 = 1;
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(lVar5 + lVar4);
        if (lVar2 != 0) {
          if (DAT_14cb112e8 == 0) {
            local_50 = FUN_141030f22;
            local_60 = FUN_14081d0ea;
            local_68 = FUN_142b4754c;
            local_70 = &local_50;
            local_78 = &LAB_147db7f1b;
            local_80 = FUN_1405e4763;
            local_88 = L"Engine";
            local_90 = 0;
            local_98 = 0x10000004;
            local_a0 = 8;
            local_a8 = 0x3a8;
            FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionHLOD",&DAT_14cb112e8,&DAT_147db7f1a);
          }
          if ((*(int *)(DAT_14cb112e8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb112e8 + 0x38) * 8) == DAT_14cb112e8 + 0x30)) {
            bVar3 = FUN_1437a468c(param_1,param_2,lVar2);
            bVar6 = bVar6 & (bVar3 ^ 1);
          }
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
  }
LAB_140153f3d:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar6) & 0xffffffff;
}



// FUNCTION 140154030 FUN_140154030 body=532 status=ok
// SIG undefined FUN_140154030(void)

ulonglong FUN_140154030(longlong param_1,longlong *param_2)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  PSRWLOCK SRWLock;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  undefined7 uVar6;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (*(char *)(param_1 + 0xd0) != '\x01') goto LAB_14015415a;
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) {
LAB_14015421c:
    lVar4 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_60 = &local_48;
      local_48 = FUN_140754f84;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_147da9a76;
      local_70 = FUN_1409f3105;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_14015421c;
  }
  if (*(int *)(lVar4 + 0x15c) != 0) goto LAB_14015415a;
  lVar3 = (**(code **)(*param_2 + 0x2c8))(param_2);
  SRWLock = (PSRWLOCK)(lVar4 + 0xe0);
  AcquireSRWLockShared(SRWLock);
  if (lVar3 == 0) {
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockShared(SRWLock);
    ReleaseSRWLockShared(SRWLock);
  }
  else {
    bVar2 = *(byte *)(lVar3 + 0x243);
    ReleaseSRWLockShared(SRWLock);
    if ((bVar2 & 0xc) == 4) goto LAB_14015415a;
    AcquireSRWLockShared(SRWLock);
    bVar2 = *(byte *)(lVar3 + 0x243);
    ReleaseSRWLockShared(SRWLock);
    if ((bVar2 & 0xc) == 8) goto LAB_14015415a;
  }
  lVar4 = FUN_14017c366(param_1,param_2);
  if ((lVar4 != 0) && (iVar1 = *(int *)(lVar4 + 0x10), (longlong)iVar1 != 0)) {
    lVar4 = *(longlong *)(lVar4 + 8);
    uVar5 = CONCAT71(uVar6,1);
    lVar3 = 0;
    do {
      bVar2 = FUN_1437a468c(param_1,param_2,*(undefined8 *)(lVar4 + lVar3));
      uVar5 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 & (bVar2 ^ 1));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
LAB_14015415a:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140154246 FUN_140154246 body=315 status=ok
// SIG undefined FUN_140154246(void)

undefined4 *
FUN_140154246(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140154444(param_1,local_50);
  puVar1 = (undefined1 *)param_3[1];
  FUN_1447a97f4(local_48,*param_3);
  *(undefined1 *)(local_48 + 10) = *puVar1;
  local_48[0xc] = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = *local_48;
  local_68 = param_4;
  cVar2 = FUN_140154382(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[0xd] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[0xc] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_141189784(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140154382 FUN_140154382 body=193 status=ok
// SIG undefined FUN_140154382(void)

void FUN_140154382(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  longlong *plVar14;
  int iVar15;
  
  uVar13 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar13 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar15 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar15 * 0x38) == *param_3) {
          if (*(longlong *)(piVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[9];
          iVar11 = param_3[10];
          iVar12 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar10;
          piVar1[10] = iVar11;
          piVar1[0xb] = iVar12;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1456d1974(param_1,*param_4,1);
          *param_4 = iVar15;
          uVar13 = 1;
          goto LAB_1401543ed;
        }
        iVar15 = piVar1[0xc];
      } while (iVar15 != -1);
    }
    uVar13 = 0;
  }
LAB_1401543ed:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar13;
  }
  return;
}



// FUNCTION 140154444 FUN_140154444 body=700 status=ok
// SIG undefined FUN_140154444(void)

int * FUN_140154444(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1447030e2(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar7 = iVar8 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar7 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_140154619;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar10 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar7 = (int)param_1[5];
            }
          }
LAB_140154619:
          iVar3 = (int)(uVar5 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar9 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar7);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar7 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar7 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar4 * 0x38);
    *(int *)(param_1 + 6) = iVar8;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x38) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 140154700 FUN_140154700 body=21 status=ok
// SIG undefined FUN_140154700(void)

undefined8 FUN_140154700(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140154716 FUN_140154716 body=451 status=ok
// SIG undefined FUN_140154716(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140154716(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  
  iVar4 = (int)param_1[1];
  lVar8 = (longlong)iVar4;
  if (lVar8 != 0) {
    plVar2 = (longlong *)*param_1;
    bVar16 = true;
    if ((*plVar2 != 0) && (plVar2[1] != 0)) {
      bVar16 = *(int *)(plVar2[1] + 8) < 1;
    }
    iVar10 = 0;
    iVar5 = 0;
LAB_140154782:
    do {
      if (iVar5 + 1 < iVar4) {
        lVar6 = (longlong)iVar5;
        lVar14 = lVar6 + 2;
        plVar7 = plVar2 + lVar6 * 2 + 3;
        bVar3 = true;
        lVar12 = -1;
        do {
          iVar11 = (int)lVar12;
          if ((plVar7[-1] == 0) || (*plVar7 == 0)) {
            if (!bVar16) {
              iVar15 = iVar5 - iVar11;
              iVar11 = -iVar11;
              goto LAB_140154829;
            }
          }
          else if ((bool)(*(int *)(*plVar7 + 8) < 1 ^ bVar16)) {
            iVar15 = iVar5 - iVar11;
            break;
          }
          bVar3 = lVar14 < lVar8;
          lVar12 = lVar12 + -1;
          lVar14 = lVar14 + 1;
          plVar7 = plVar7 + 2;
          iVar15 = iVar4;
        } while (lVar6 - lVar8 != lVar12);
      }
      else {
        bVar3 = false;
        iVar15 = iVar5 + 1;
      }
      iVar11 = iVar15 - iVar5;
      if (bVar16) {
        FUN_1469b21b1(plVar2 + (longlong)iVar5 * 2,iVar11);
        bVar16 = false;
        iVar5 = iVar15;
        if (!bVar3) break;
        goto LAB_140154782;
      }
LAB_140154829:
      if (iVar10 != iVar5) {
        memmove(plVar2 + (longlong)iVar10 * 2,plVar2 + (longlong)iVar5 * 2,(longlong)iVar11 << 4);
      }
      iVar10 = iVar10 + iVar11;
      bVar16 = true;
      iVar5 = iVar15;
    } while (bVar3);
    *(int *)(param_1 + 1) = iVar10;
    if (iVar10 != 0) {
      puVar13 = (undefined8 *)*param_1;
      puVar9 = puVar13 + (longlong)iVar10 * 2;
      do {
        plVar2 = (longlong *)puVar13[1];
        if (plVar2 == (longlong *)0x0) {
LAB_1401548a1:
          (**(code **)(_DAT_00000000 + 8))(0,param_2);
        }
        else {
          iVar4 = (int)plVar2[1];
          do {
            if (iVar4 == 0) goto LAB_1401548a1;
            LOCK();
            iVar5 = (int)plVar2[1];
            bVar16 = iVar4 == iVar5;
            if (bVar16) {
              *(int *)(plVar2 + 1) = iVar4 + 1;
              iVar5 = iVar4;
            }
            iVar4 = iVar5;
            UNLOCK();
          } while (!bVar16);
          (**(code **)(*(longlong *)*puVar13 + 8))((longlong *)*puVar13,param_2);
          LOCK();
          plVar7 = plVar2 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar2)();
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))();
            }
          }
        }
        puVar13 = puVar13 + 2;
      } while (puVar13 != puVar9);
    }
  }
  return;
}



// FUNCTION 1401548e0 FUN_1401548e0 body=57 status=ok
// SIG undefined FUN_1401548e0(void)

void FUN_1401548e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8650 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8650 = FUN_140002ddd(FUN_1465d064c,uVar1,L"OakCharacterDef");
  }
  return;
}



// FUNCTION 14015491a FUN_14015491a body=891 status=ok
// SIG undefined FUN_14015491a(void)

undefined8 FUN_14015491a(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    plVar8 = *(longlong **)(param_1 + 0x80);
    if (plVar8 != (longlong *)0x0) {
      iVar5 = (int)plVar8[1];
      do {
        if (iVar5 == 0) goto LAB_140154993;
        LOCK();
        iVar4 = (int)plVar8[1];
        bVar9 = iVar5 == iVar4;
        if (bVar9) {
          *(int *)(plVar8 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar9);
      plVar3 = *(longlong **)(param_1 + 0x78);
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar8)();
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      if (plVar3 == (longlong *)0x0) goto LAB_140154993;
      uVar6 = (**(code **)(*plVar3 + 0x10))(plVar3);
      iVar5 = FUN_14486116a(uVar6,param_2);
      if (iVar5 != 0) goto LAB_140154993;
LAB_140154b2c:
      uVar6 = 1;
      goto LAB_140154a84;
    }
LAB_140154993:
    if (((*(longlong *)(param_1 + 0xa8) == 0) ||
        (plVar8 = *(longlong **)(param_1 + 0xb0), plVar8 == (longlong *)0x0)) ||
       ((int)plVar8[1] < 1)) {
      if (((((*(int *)(param_1 + 0x9c) != 0) && (uVar2 = *(uint *)(param_1 + 0x98), -1 < (int)uVar2)
            ) && (((int)uVar2 < DAT_14c9647dc &&
                  ((plVar8 = (longlong *)
                             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                   plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x9c))))))) &&
          ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) &&
         (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)) {
        if (DAT_14cb223d8 == 0) {
          local_50 = &local_30;
          local_30 = FUN_1449e2820;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_1427b09ee;
          local_58 = &LAB_147f29feb;
          local_60 = FUN_1464384fe;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10004001;
          local_80 = 8;
          local_88 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,DAT_14cb223d8);
        if (plVar8 != (longlong *)0x0) {
          if (DAT_14cb223d8 == 0) {
            local_50 = &local_30;
            local_30 = FUN_1449e2820;
            local_40 = FUN_14081d0ea;
            local_48 = FUN_1427b09ee;
            local_58 = &LAB_147f29feb;
            local_60 = FUN_1464384fe;
            local_68 = L"Engine";
            local_70 = 0;
            local_78 = 0x10004001;
            local_80 = 8;
            local_88 = 0x28;
            FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
          }
          plVar7 = (longlong *)FUN_144718840(plVar8,DAT_14cb223d8);
          if ((plVar8 != plVar7) && (plVar7 != (longlong *)0x0)) {
            if (*(code **)(*plVar7 + 0x10) == (code *)&LAB_14486280e) {
              plVar7 = plVar7 + 5;
            }
            else {
              plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7);
            }
            goto LAB_140154a6a;
          }
        }
      }
    }
    else {
      iVar5 = (int)plVar8[1];
      plVar7 = (longlong *)0x0;
      do {
        if (iVar5 == 0) {
          plVar8 = (longlong *)0x0;
          goto LAB_140154ae3;
        }
        LOCK();
        iVar4 = (int)plVar8[1];
        bVar9 = iVar5 == iVar4;
        if (bVar9) {
          *(int *)(plVar8 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar9);
      plVar7 = *(longlong **)(param_1 + 0xa8);
LAB_140154ae3:
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))();
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
LAB_140154a6a:
      if ((plVar7 != (longlong *)0x0) && (iVar5 = FUN_14486116a(plVar7,param_2), iVar5 == 0))
      goto LAB_140154b2c;
    }
  }
  uVar6 = 0;
LAB_140154a84:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140154c96 FUN_140154c96 body=525 status=ok
// SIG undefined FUN_140154c96(void)

undefined8 * FUN_140154c96(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != (longlong *)0x0) {
    if (DAT_14cb223d8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_147f29feb;
      local_50 = FUN_1464384fe;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb223d8);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb223d8 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_147f29feb;
        local_50 = FUN_1464384fe;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb223d8);
      if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) {
        lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (lVar3 != 0) {
          *param_1 = *(undefined8 *)(lVar3 + 0x20);
          *(undefined2 *)(param_1 + 1) = *(undefined2 *)(lVar3 + 0x28);
          param_1[2] = *(undefined8 *)(lVar3 + 0x30);
          goto LAB_140154d2b;
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  param_1[2] = 0;
LAB_140154d2b:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140154eac FUN_140154eac body=1461 status=ok
// SIG undefined FUN_140154eac(void)

void FUN_140154eac(longlong param_1,undefined4 param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  code *local_98;
  code *local_90;
  longlong local_80;
  uint local_78;
  uint uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar6 = *(longlong **)(param_1 + 0x80);
  if (plVar6 != (longlong *)0x0) {
    iVar5 = (int)plVar6[1];
    do {
      if (iVar5 == 0) goto LAB_140154f3c;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar14 = iVar5 == iVar8;
      if (bVar14) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar8 = iVar5;
      }
      iVar5 = iVar8;
      UNLOCK();
    } while (!bVar14);
    lVar12 = *(longlong *)(param_1 + 0x78);
    if (lVar12 != 0) {
      FUN_143896fa6(lVar12,param_2,param_3,param_4);
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
    if (lVar12 != 0) goto LAB_140155179;
  }
LAB_140154f3c:
  local_80 = param_4;
  if (param_3 == (longlong *)0x0 || (byte)param_2 == 0) {
LAB_140154f50:
    if (param_3 != (longlong *)0x0) goto LAB_140154ff4;
    local_78 = 0;
    uVar4 = 0;
  }
  else {
    if (DAT_14cb20e58 == 0) {
      local_a0 = &local_68;
      local_68 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_1427b09ee;
      local_a8 = &LAB_147f14d13;
      local_b0 = FUN_1464313b0;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10004001;
      local_d0 = 8;
      local_d8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
    }
    plVar6 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,DAT_14cb20e58);
    if (plVar6 != (longlong *)0x0) {
      if (DAT_14cb20e58 == 0) {
        local_a0 = &local_68;
        local_68 = FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_1427b09ee;
        local_a8 = &LAB_147f14d13;
        local_b0 = FUN_1464313b0;
        local_b8 = L"Engine";
        local_c0 = 0;
        local_c8 = 0x10004001;
        local_d0 = 8;
        local_d8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
      }
      plVar7 = (longlong *)FUN_144718840(plVar6,DAT_14cb20e58);
      if ((((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) &&
          (lVar12 = (**(code **)(*plVar7 + 0x10))(plVar7), param_1 != 0)) &&
         ((lVar12 != 0 && (*(char *)(lVar12 + 0x105) == '\0')))) {
        plVar6 = *(longlong **)(lVar12 + 0x80);
        if (plVar6 == (longlong *)0x0) {
LAB_14015522b:
          local_58 = 0;
          uVar15 = 0xffffffff;
          uVar16 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
        }
        else {
          iVar5 = (int)plVar6[1];
          do {
            if (iVar5 == 0) goto LAB_14015522b;
            LOCK();
            iVar8 = (int)plVar6[1];
            bVar14 = iVar5 == iVar8;
            if (bVar14) {
              *(int *)(plVar6 + 1) = iVar5 + 1;
              iVar8 = iVar5;
            }
            iVar5 = iVar8;
            UNLOCK();
          } while (!bVar14);
          lVar12 = *(longlong *)(lVar12 + 0x78);
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
          if (lVar12 == 0) goto LAB_14015522b;
          local_58 = *(undefined4 *)(lVar12 + 0x90);
          uVar15 = *(undefined4 *)(lVar12 + 0x80);
          uVar16 = *(undefined4 *)(lVar12 + 0x84);
          uStack_60 = *(undefined4 *)(lVar12 + 0x88);
          uStack_5c = *(undefined4 *)(lVar12 + 0x8c);
        }
        local_68 = (code *)CONCAT44(uVar16,uVar15);
        lVar12 = FUN_1437eb89a(&local_68);
        if ((lVar12 != 0) && (cVar3 = FUN_14068bcb2(param_1,lVar12,3), cVar3 == '\0'))
        goto LAB_140155179;
        goto LAB_140154f50;
      }
    }
LAB_140154ff4:
    uStack_74 = 0;
    local_78 = *(uint *)((longlong)param_3 + 0xc);
    if ((int)local_78 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((local_78 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_78 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    uVar4 = *(uint *)(lVar12 + 0x10);
    if (*(uint *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar11 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar11);
      }
      LOCK();
      uVar4 = *(uint *)(lVar12 + 0x10);
      bVar14 = uVar4 == 0;
      if (bVar14) {
        *(uint *)(lVar12 + 0x10) = uVar11;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar4 = uVar11;
      }
    }
  }
  plVar6 = (longlong *)(param_1 + 0x18);
  uVar2 = CONCAT44(uVar4,local_78);
  uVar11 = uVar4 ^ local_78;
  uStack_74 = uVar4;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar12 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar11) * 4);
    if (iVar5 != -1) {
      lVar12 = *plVar6;
      do {
        lVar9 = (longlong)iVar5 * 0x34;
        local_68 = *(code **)(lVar12 + lVar9);
        local_70 = uVar2;
        cVar3 = FUN_14486088a(&local_68,&local_70);
        lVar12 = *plVar6;
        if (cVar3 != '\0') {
          if (lVar12 + lVar9 != 0) {
            lVar12 = lVar12 + lVar9;
            goto LAB_1401550db;
          }
          break;
        }
        iVar5 = *(int *)(lVar12 + 0x2c + lVar9);
      } while (iVar5 != -1);
    }
  }
  local_68 = (code *)&local_78;
  FUN_1401559c6(plVar6,&local_70,uVar11);
  lVar12 = *plVar6 + (longlong)(int)local_70 * 0x34;
LAB_1401550db:
  lVar9 = local_80;
  uVar13 = (ulonglong)(byte)param_2;
  *(undefined4 *)(lVar12 + 8 + uVar13 * 4) = 0;
  if ((local_80 == 0) || (cVar3 = FUN_1410f9880(local_80,1), cVar3 == '\0')) {
    *(undefined4 *)(lVar12 + 0x14 + uVar13 * 8) = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = *(uint *)(lVar9 + 0xc);
    *(uint *)(lVar12 + 0x14 + uVar13 * 8) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar5 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar5 = *(int *)(lVar10 + 0x10);
      bVar14 = iVar5 == 0;
      if (bVar14) {
        *(int *)(lVar10 + 0x10) = iVar8;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar5 = iVar8;
      }
    }
  }
  *(int *)(lVar12 + 0x18 + uVar13 * 8) = iVar5;
  FUN_1401555c4(param_1,lVar9);
LAB_140155179:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140155462 FUN_140155462 body=353 status=ok
// SIG undefined FUN_140155462(void)

void FUN_140155462(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401554e7;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1401554e7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1401555c4 FUN_1401555c4 body=226 status=ok
// SIG undefined FUN_1401555c4(void)

void FUN_1401555c4(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((*(char *)(param_1 + 0x104) == '\0') && (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x20)))
  {
    *(undefined1 *)(param_1 + 0x104) = 1;
    *(undefined4 *)(param_1 + 0x100) = 0;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      iVar2 = 0;
    }
    else {
      uVar1 = *(uint *)(param_2 + 0xc);
      *(uint *)(param_1 + 0xa0) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      iVar2 = *(int *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar3 = DAT_14c964868 + 1;
        bVar5 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar5) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar3);
        }
        LOCK();
        iVar2 = *(int *)(lVar4 + 0x10);
        bVar5 = iVar2 == 0;
        if (bVar5) {
          *(int *)(lVar4 + 0x10) = iVar3;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar5) {
          iVar2 = iVar3;
        }
      }
    }
    *(int *)(param_1 + 0xa4) = iVar2;
    FUN_140155fa6(param_1,1,param_2);
    return;
  }
  return;
}



// FUNCTION 1401556a6 FUN_1401556a6 body=799 status=ok
// SIG undefined FUN_1401556a6(void)

void FUN_1401556a6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  undefined2 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar8 = *(longlong **)(param_1 + 0x80);
  if (plVar8 != (longlong *)0x0) {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) goto LAB_1401556da;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    lVar3 = *(longlong *)(param_1 + 0x78);
    if (lVar3 != 0) {
      uVar7 = (**(code **)(*(longlong *)(lVar3 + 8) + 0x10))(lVar3 + 8);
      FUN_1401556a6(uVar7,param_2);
    }
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if (lVar3 != 0) goto LAB_140155839;
  }
LAB_1401556da:
  if (((((*(int *)(param_1 + 0x9c) != 0) && (uVar2 = *(uint *)(param_1 + 0x98), -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) &&
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x9c))))) &&
     (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
      (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)))) {
    if (DAT_14cb223d8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_147f29feb;
      local_70 = FUN_1464384fe;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,DAT_14cb223d8);
    if (plVar8 != (longlong *)0x0) {
      if (DAT_14cb223d8 == 0) {
        local_60 = &local_40;
        local_40 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_1427b09ee;
        local_68 = &LAB_147f29feb;
        local_70 = FUN_1464384fe;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar6 = (longlong *)FUN_144718840(plVar8,DAT_14cb223d8);
      if ((plVar8 != plVar6) && (plVar6 != (longlong *)0x0)) {
        if (*(code **)(*plVar6 + 0x10) == (code *)&LAB_14486280e) {
          plVar6 = plVar6 + 5;
        }
        else {
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6);
        }
        if (plVar6 != (longlong *)0x0) {
          local_40 = (code *)*param_2;
          local_38 = *(undefined2 *)(param_2 + 1);
          local_30 = param_2[2];
          iVar5 = FUN_147f4940e(plVar6);
          if (iVar5 == 1) {
            FUN_147f498e6(param_1 + 0x68,param_2);
          }
        }
      }
    }
  }
LAB_140155839:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401559c6 FUN_1401559c6 body=1502 status=ok
// SIG undefined FUN_1401559c6(void)

int * FUN_1401559c6(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  longlong *plVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar25 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar25 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar25) {
      FUN_1401562b6(param_1,iVar25);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar16 = iVar12 + -1;
      }
      iVar16 = iVar16 >> 5;
    }
    plVar22 = param_1 + 2;
    iVar17 = iVar12 + 1;
    iVar20 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar20 = iVar12;
    }
    if (iVar20 >> 5 == iVar16) {
      *(int *)(param_1 + 5) = iVar17;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar17 = 0x80;
          iVar16 = iVar12;
        }
        else {
          uVar27 = iVar12 + 0x20U >> 5;
          local_78 = (ulonglong)uVar27;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar13 = 4;
            if (4 < uVar27) {
              uVar13 = uVar27;
            }
          }
          else {
            uVar13 = (uVar27 * 3 >> 3) + uVar27 + 0x10;
          }
          uVar19 = FUN_144a3809e(uVar13 << 2,0);
          iVar16 = (int)(uVar19 >> 2);
          iVar17 = -0x20;
          if ((int)local_78 <= iVar16) {
            iVar17 = iVar16 << 5;
          }
          iVar16 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar17;
        FUN_1446efbd8(plVar22,iVar16);
        iVar17 = (int)param_1[5] + 1;
      }
      iVar16 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar16 = iVar17;
      }
      *(int *)(param_1 + 5) = iVar17;
      if (iVar17 % 0x20 != 0) {
        plVar23 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar23 = plVar22;
        }
        bVar15 = -(char)(iVar17 % 0x20);
        *(uint *)((longlong)plVar23 + (longlong)(iVar16 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar23 + (longlong)(iVar16 >> 5) * 4) << (bVar15 & 0x1f)) >>
             (bVar15 & 0x1f);
      }
    }
    lVar14 = (longlong)iVar25;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar22 = (longlong *)param_1[4];
    }
    bVar15 = (byte)iVar12 & 0x1f;
    puVar1 = (uint *)((longlong)plVar22 + (longlong)(iVar20 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
  }
  else {
    iVar25 = (int)param_1[6];
    lVar14 = (longlong)iVar25;
    iVar12 = *(int *)(*param_1 + 4 + lVar14 * 0x34);
    *(int *)(param_1 + 6) = iVar12;
    iVar16 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar16;
    if (iVar16 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x34) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar18 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar18 = puVar1;
  }
  iVar12 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar12 = iVar25;
  }
  puVar18[iVar12 >> 5] = puVar18[iVar12 >> 5] | 1 << ((byte)iVar25 & 0x1f);
  puVar28 = (undefined8 *)(lVar14 * 0x34 + *param_1);
  uStack_64 = 0;
  uStack_5c = 0;
  uStack_54 = 0;
  lVar14 = 0;
  do {
    *(undefined4 *)((longlong)&local_70 + lVar14 * 4) = 0x7f7fffff;
    (&uStack_64)[lVar14] = 0;
    lVar14 = lVar14 + 1;
  } while (lVar14 != 3);
  uVar3 = *(undefined8 *)*param_4;
  *puVar28 = uVar3;
  *(undefined4 *)(puVar28 + 1) = (undefined4)local_70;
  *(undefined4 *)((longlong)puVar28 + 0xc) = local_70._4_4_;
  *(undefined4 *)(puVar28 + 2) = uStack_68;
  *(undefined4 *)((longlong)puVar28 + 0x14) = (undefined4)uStack_64;
  *(undefined4 *)(puVar28 + 3) = uStack_64._4_4_;
  *(undefined4 *)((longlong)puVar28 + 0x1c) = (undefined4)uStack_5c;
  *(undefined4 *)(puVar28 + 4) = uStack_5c._4_4_;
  *(undefined4 *)((longlong)puVar28 + 0x24) = (undefined4)uStack_54;
  *(undefined4 *)(puVar28 + 5) = uStack_54._4_4_;
  *(undefined4 *)((longlong)puVar28 + 0x2c) = 0xffffffff;
  uVar27 = 1;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) {
    uVar13 = 1;
  }
  else {
    local_70 = uVar3;
    iVar12 = FUN_145733920(param_1,param_3);
    if (iVar12 != -1) {
      lVar14 = *param_1;
      lVar26 = (longlong)iVar12 * 0x34;
      uVar4 = *(undefined4 *)puVar28;
      uVar5 = *(undefined4 *)((longlong)puVar28 + 4);
      uVar6 = *(undefined4 *)(puVar28 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar28 + 0xc);
      uVar8 = *(undefined4 *)(puVar28 + 2);
      uVar9 = *(undefined4 *)((longlong)puVar28 + 0x14);
      uVar10 = *(undefined4 *)(puVar28 + 3);
      uVar11 = *(undefined4 *)((longlong)puVar28 + 0x1c);
      uVar3 = puVar28[4];
      *(undefined4 *)(lVar14 + 0x28 + lVar26) = *(undefined4 *)(puVar28 + 5);
      *(undefined8 *)(lVar14 + 0x20 + lVar26) = uVar3;
      puVar2 = (undefined4 *)(lVar14 + 0x10 + lVar26);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      puVar2 = (undefined4 *)(lVar14 + lVar26);
      *puVar2 = uVar4;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      FUN_1403670a2(param_1,iVar25,1);
      goto LAB_140155b50;
    }
    uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (3 < uVar13) {
      uVar19 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar27 = 1 << ((byte)lVar14 & 0x1f);
    }
  }
  if (((int)uVar13 < 1) || ((int)uVar27 <= (int)param_1[9])) {
    param_3 = (int)param_1[9] - 1U & param_3;
    *(uint *)(puVar28 + 6) = param_3;
    plVar22 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar22 = param_1 + 7;
    }
    *(undefined4 *)((longlong)puVar28 + 0x2c) =
         *(undefined4 *)
          ((longlong)plVar22 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
    plVar22 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar22 = param_1 + 7;
    }
    *(int *)((longlong)plVar22 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
         iVar25;
    goto LAB_140155b50;
  }
  *(uint *)(param_1 + 9) = uVar27;
  plVar22 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar22,0,0,4);
    uVar27 = *(uint *)(param_1 + 9);
  }
  plVar23 = param_1 + 7;
  if (uVar27 == 1) {
    if (*plVar22 != 0) {
      FUN_1446efa72(plVar22,0,0,4);
    }
LAB_140155c3a:
    uVar13 = 0;
    do {
      plVar22 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar22 = plVar23;
      }
      *(undefined4 *)((longlong)plVar22 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar13) * 4) =
           0xffffffff;
      uVar13 = uVar13 + 1;
    } while (uVar27 != uVar13);
  }
  else {
    if (uVar27 == 0) goto LAB_140155b50;
    FUN_1446efa72(plVar22,0,uVar27,4);
    if (0 < (int)uVar27) goto LAB_140155c3a;
  }
  iVar12 = (int)param_1[5];
  if (iVar12 == 0) {
    uVar19 = 0;
    uVar24 = 1;
    iVar16 = 0;
    iVar17 = 0;
  }
  else {
    puVar18 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar18 = puVar1;
    }
    uVar27 = *puVar18;
    if (uVar27 == 0) {
      iVar16 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar16 = iVar12 + -1;
      }
      uVar19 = 0;
      uVar24 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar24 = uVar19;
      }
      iVar17 = 0;
      do {
        if (uVar24 == uVar19) goto LAB_140155b50;
        iVar17 = iVar17 + 0x20;
        uVar27 = puVar18[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar27 == 0);
    }
    else {
      uVar19 = 0;
      iVar17 = 0;
    }
    uVar24 = (ulonglong)(-uVar27 & uVar27);
    uVar29 = uVar24 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar16 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar16) {
      iVar16 = iVar12;
    }
  }
  if (iVar16 < iVar12) {
    uVar27 = 0xffffffff;
    do {
      lVar14 = *param_1;
      lVar26 = (longlong)iVar16 * 0x34;
      uVar29 = (longlong)
               (int)((uint)((ulonglong)*(undefined8 *)(lVar14 + lVar26) >> 0x20) ^
                    (uint)*(undefined8 *)(lVar14 + lVar26)) & (longlong)(int)param_1[9] - 1U;
      iVar12 = (int)uVar29;
      *(int *)(lVar14 + 0x30 + lVar26) = iVar12;
      plVar22 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar22 = plVar23;
      }
      *(undefined4 *)(lVar14 + 0x2c + lVar26) =
           *(undefined4 *)((longlong)plVar22 + ((longlong)(int)param_1[9] - 1U & uVar29) * 4);
      plVar22 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar22 = plVar23;
      }
      *(int *)((longlong)plVar22 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16
      ;
      uVar27 = ~(uint)uVar24 & uVar27;
      puVar18 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar18 = puVar1;
      }
      iVar12 = (int)param_1[5];
      iVar16 = (int)uVar19;
      lVar14 = (longlong)iVar16;
      uVar13 = puVar18[lVar14] & uVar27;
      if (uVar13 == 0) {
        iVar20 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar20 = iVar12 + -1;
        }
        iVar20 = iVar20 >> 5;
        iVar21 = iVar20;
        if (iVar20 < iVar16) {
          iVar21 = iVar16;
        }
        if (iVar20 <= iVar16) break;
        lVar26 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar13 = puVar18[lVar14 + lVar26 + 1];
          if (uVar13 != 0) break;
          lVar26 = lVar26 + 1;
          if (iVar21 - lVar14 == lVar26) goto LAB_140155b50;
        }
        uVar19 = (ulonglong)(iVar16 + (int)lVar26 + 1);
        uVar27 = 0xffffffff;
      }
      uVar24 = (ulonglong)(-uVar13 & uVar13);
      uVar29 = uVar24 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar16 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar12);
  }
LAB_140155b50:
  *param_2 = iVar25;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140155fa6 FUN_140155fa6 body=783 status=ok
// SIG undefined FUN_140155fa6(void)

void FUN_140155fa6(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar10 = (longlong *)param_1[0x12];
  if ((((plVar10 != (longlong *)0x0) && (*(int *)((longlong)param_1 + 0x8c) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0x11), -1 < (int)uVar2)) &&
     ((((int)uVar2 < DAT_14c9647dc &&
       (lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar11 != 0)) &&
      ((*(int *)(lVar11 + 0x10) == *(int *)((longlong)param_1 + 0x8c) &&
       ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))))) {
    (**(code **)(*plVar10 + 0x18))(plVar10,param_2,param_3);
  }
  iVar7 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar7 + 1;
  uVar8 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar8 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar7;
  }
  else {
    bVar13 = false;
    do {
      lVar11 = uVar8 * 0x10 + -8;
      uVar12 = uVar8;
      while (((*(int *)(*param_1 + lVar11) != 0 &&
              (plVar10 = *(longlong **)(*param_1 + -8 + lVar11), plVar10 != (longlong *)0x0)) &&
             (cVar6 = (**(code **)(*plVar10 + 0x60))(plVar10,param_2,param_3), cVar6 != '\0'))) {
        lVar11 = lVar11 + -0x10;
        bVar4 = uVar12 < 2;
        uVar12 = uVar12 - 1;
        if (bVar4) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar13) goto LAB_140156266;
          goto LAB_14015604f;
        }
      }
      uVar8 = uVar12 - 1;
      bVar13 = true;
    } while (1 < uVar12);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140156266:
    FUN_14474d06a(param_1,0);
  }
LAB_14015604f:
  if (*(int *)((longlong)param_1 + 0x9c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x13);
    uVar9 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1401560a4;
    plVar10 = (longlong *)
              ((ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar10 != (longlong *)0x0) &&
       ((((int)plVar10[2] == *(int *)((longlong)param_1 + 0x9c) &&
         ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) && (*plVar10 != 0)))) {
      uVar9 = FUN_1447210f0();
      goto LAB_1401560a4;
    }
  }
  uVar9 = 0;
LAB_1401560a4:
  FUN_1402b6034(&local_58,uVar9);
  if (local_50 != (longlong *)0x0) {
    iVar7 = (int)local_50[1];
    do {
      if (iVar7 == 0) {
        plVar10 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_50[1];
      bVar13 = iVar7 == iVar5;
      if (bVar13) {
        *(int *)(local_50 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
      plVar10 = local_50;
    } while (!bVar13);
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    if (plVar10 != (longlong *)0x0) {
      if (local_58 != 0) {
        iVar7 = *(int *)(local_58 + 0x44);
        *(int *)(local_58 + 0x44) = iVar7 + 1;
        uVar8 = (ulonglong)*(int *)(local_58 + 0x38);
        if ((longlong)uVar8 < 1) {
          *(int *)(local_58 + 0x44) = iVar7;
        }
        else {
          local_60 = (longlong *)(local_58 + 0x30);
          bVar13 = false;
          do {
            lVar11 = uVar8 * 0x10 + -8;
            uVar12 = uVar8;
            while (((*(int *)(*local_60 + lVar11) != 0 &&
                    (plVar3 = *(longlong **)(*local_60 + -8 + lVar11), plVar3 != (longlong *)0x0))
                   && (cVar6 = (**(code **)(*plVar3 + 0x60))(plVar3,param_1,param_2,param_3),
                      cVar6 != '\0'))) {
              lVar11 = lVar11 + -0x10;
              bVar4 = uVar12 < 2;
              uVar12 = uVar12 - 1;
              if (bVar4) {
                *(int *)(local_58 + 0x44) = *(int *)(local_58 + 0x44) + -1;
                if (bVar13) goto LAB_140156292;
                goto LAB_140156219;
              }
            }
            uVar8 = uVar12 - 1;
            bVar13 = true;
          } while (1 < uVar12);
          *(int *)(local_58 + 0x44) = *(int *)(local_58 + 0x44) + -1;
LAB_140156292:
          FUN_14474d06a(local_60,0);
        }
      }
LAB_140156219:
      LOCK();
      plVar3 = plVar10 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401562b6 FUN_1401562b6 body=369 status=ok
// SIG undefined FUN_1401562b6(void)

void FUN_1401562b6(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x34;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14015633b;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14015633b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x34)) {
    uVar7 = uVar5 / 0x34 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x34,4);
  return;
}



// FUNCTION 140156428 FUN_140156428 body=31 status=ok
// SIG undefined FUN_140156428(void)

undefined8 FUN_140156428(longlong param_1,ushort param_2)

{
  if ((-1 < (short)param_2) && ((int)(uint)param_2 < *(int *)(param_1 + 0xd0))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 200) + (ulonglong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 140156448 FUN_140156448 body=83 status=ok
// SIG undefined FUN_140156448(void)

void FUN_140156448(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_14015649c();
  cVar1 = (**(code **)(*param_1 + 0x460))(param_1);
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xbf | cVar1 << 6;
  plVar2 = DAT_14caca218;
  if (DAT_14caca220 == 0) {
    plVar2 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140156498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  return;
}



// FUNCTION 14015649c FUN_14015649c body=234 status=ok
// SIG undefined FUN_14015649c(void)

void FUN_14015649c(longlong param_1)

{
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined1 local_40 [24];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140156a6a();
  FUN_140156924(param_1);
  (**(code **)(*(longlong *)(param_1 + 0x2b8) + 0x20))(param_1 + 0x2b8,&local_50);
  local_60 = local_50;
  local_58 = local_48;
  FUN_14015671e(local_40);
  local_70 = local_50;
  local_68 = local_48;
  FUN_140156810(local_28,&local_70,0);
  FUN_1448635f4(local_40);
  if (*(longlong *)(param_1 + 0x548) != 0) {
    FUN_140156df6(param_1 + 0x410,0,0);
  }
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xf7;
  FUN_140156588(param_1 + 0x59e,param_1,1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140156588 FUN_140156588 body=138 status=ok
// SIG undefined FUN_140156588(void)

void FUN_140156588(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140156614(param_1,&local_40);
  if (local_40 != 0) {
    local_30 = param_2;
    local_28 = param_3;
    FUN_1447cd2ec();
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140156614 FUN_140156614 body=264 status=ok
// SIG undefined FUN_140156614(void)

undefined8 * FUN_140156614(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_140156638;
  FUN_14015716c(0,&local_38);
  FUN_14018932e(&local_30,param_1 + -0x59e,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_140156638;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001401566fa:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001401566fa;
      }
    }
  }
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
LAB_140156638:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14015671e FUN_14015671e body=241 status=ok
// SIG undefined FUN_14015671e(void)

undefined1 * FUN_14015671e(undefined1 *param_1,longlong *param_2)

{
  PSRWLOCK SRWLock;
  int iVar1;
  LPVOID pvVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  if ((longlong)(int)param_2[1] == 0) {
LAB_1401567fb:
    *param_1 = 0;
  }
  else {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar6 = lVar5;
      if ((*(longlong **)(*param_2 + lVar4) != (longlong *)0x0) &&
         (((lVar6 = **(longlong **)(*param_2 + lVar4), lVar6 == 0 ||
           (lVar6 = *(longlong *)(lVar6 + 8), lVar6 == 0)) ||
          ((lVar5 != 0 && (bVar7 = lVar6 != lVar5, lVar6 = lVar5, bVar7)))))) goto LAB_1401567fb;
      lVar4 = lVar4 + 8;
      lVar5 = lVar6;
    } while ((longlong)(int)param_2[1] * 8 != lVar4);
    if (lVar6 == 0) goto LAB_1401567fb;
    lVar5 = *(longlong *)(lVar6 + 0x260);
    *param_1 = 0;
    if (lVar5 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x38);
      *(longlong *)(param_1 + 8) = lVar5;
      param_1[0x10] = 1;
      if (lVar5 == 0) {
        return param_1;
      }
      SRWLock = *(PSRWLOCK *)(lVar5 + 0x218);
      pvVar2 = TlsGetValue(*(DWORD *)&SRWLock[1].Ptr);
      iVar1 = (int)((ulonglong)pvVar2 >> 0x20);
      TlsSetValue(*(DWORD *)&SRWLock[1].Ptr,
                  (LPVOID)((ulonglong)(iVar1 + 1) << 0x20 | (ulonglong)pvVar2 & 0xffffffff));
      puVar3 = param_1;
      if (iVar1 + (int)pvVar2 == 0) {
        AcquireSRWLockExclusive(SRWLock);
      }
      goto LAB_1401567eb;
    }
  }
  *(undefined8 *)(param_1 + 8) = 0;
  puVar3 = param_1 + 0x10;
LAB_1401567eb:
  *puVar3 = 1;
  return param_1;
}



// FUNCTION 140156810 FUN_140156810 body=276 status=ok
// SIG undefined FUN_140156810(void)

void FUN_140156810(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar2 = *param_2;
    lVar9 = 0;
    do {
      plVar6 = *(longlong **)(lVar2 + lVar9);
      if ((plVar6 != (longlong *)0x0) && (lVar3 = *plVar6, lVar3 != 0)) {
        iVar1 = *(int *)(lVar3 + 0x1c);
        if (iVar1 == 0xb) {
          plVar6 = (longlong *)(lVar3 + 0x40);
LAB_14015684e:
          lVar3 = *plVar6;
          if (lVar3 != 0) {
            piVar4 = *(int **)(lVar3 + 0x70);
            if (((piVar4 == (int *)0x0) || (*piVar4 != 8)) ||
               (lVar8 = *(longlong *)(piVar4 + 2), lVar8 == 0)) {
              if (param_3 != 0) {
                puVar7 = (undefined4 *)FUN_14001cc68(0x20,0x10);
                *(undefined8 *)(puVar7 + 4) = 0;
                *(undefined8 *)(puVar7 + 6) = 0;
                *puVar7 = 8;
                *(undefined4 **)(puVar7 + 2) = puVar7;
                *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(lVar3 + 0x70);
                *(longlong *)(puVar7 + 6) = param_3;
                *(undefined4 **)(lVar3 + 0x70) = puVar7;
              }
            }
            else if (param_3 == 0) {
              *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(lVar8 + 0x10);
              FUN_1400020a8();
            }
            else {
              *(longlong *)(lVar8 + 0x18) = param_3;
            }
          }
        }
        else if (iVar1 == 2) {
          iVar1 = (int)plVar6[1];
          if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar3 + 0x418))) {
            lVar8 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x410) + (longlong)iVar1 * 4);
            if (lVar8 != -1) {
              plVar6 = (longlong *)(lVar8 * 8 + *(longlong *)(lVar3 + 0x440));
              goto LAB_14015684e;
            }
          }
        }
        else if (iVar1 == 0xc) {
          plVar6 = (longlong *)(lVar3 + 0x128);
          goto LAB_14015684e;
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar9);
  }
  return;
}



// FUNCTION 140156924 FUN_140156924 body=325 status=ok
// SIG undefined FUN_140156924(void)

void FUN_140156924(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 0x140);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x138);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        if (DAT_14cac6e60 == 0) {
          local_50 = &local_30;
          local_30 = FUN_144a7958c;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_142b47bc4;
          local_58 = &LAB_1478989f1;
          local_60 = &LAB_146391124;
          local_68 = L"Engine";
          local_70 = 0x10000000000;
          local_78 = 0x10000005;
          local_80 = 0x10;
          local_88 = 0x620;
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
        }
        if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
          FUN_140156a6a(lVar3);
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140156a6a FUN_140156a6a body=906 status=ok
// SIG undefined FUN_140156a6a(void)

void FUN_140156a6a(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_80;
  longlong local_78 [3];
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar6 = (uint *)(**(code **)(*param_1 + 0x7b8))(param_1,0,0,0xffffffff);
  lVar7 = param_1[0x16];
  if (lVar7 == 0) {
    lVar7 = FUN_1448abda6();
  }
  if ((((puVar6 != (uint *)0x0) && (lVar7 != 0)) && (*(longlong *)(puVar6 + 0x42) != 0)) &&
     ((*(longlong *)(lVar7 + 0x260) != 0 && ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)))) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    if (((*(uint *)(lVar11 + 8) >> 0x1c & 1) == 0) && (DAT_14c872a72 == '\0')) {
      local_50 = 0;
      plVar8 = (longlong *)FUN_1417e95f3(param_1,param_1[0x25],&local_50,0);
      if ((plVar8 != (longlong *)0x0) &&
         (lVar11 = (**(code **)(*plVar8 + 0x7b8))(plVar8,local_50,0,0xffffffff), lVar11 != 0)) {
        bVar13 = 1;
        if ((*(uint *)(plVar8 + 1) >> 0x1e & 1) == 0) {
          uVar1 = *(uint *)((longlong)plVar8 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          bVar13 = (byte)((uint)*(undefined4 *)(lVar12 + 8) >> 0x1c) & 1;
        }
        lVar12 = *(longlong *)(puVar6 + 0x42);
        FUN_147c47a14(lVar11,puVar6);
        LOCK();
        puVar6[0x42] = 0;
        puVar6[0x43] = 0;
        UNLOCK();
        lVar9 = (**(code **)(*param_1 + 0x7a0))(param_1);
        if (((bVar13 == 0) && (lVar9 != 0)) && (*(longlong *)(puVar6 + 0x4e) == 0)) {
          uVar1 = puVar6[2];
          *(byte *)(puVar6 + 2) = (byte)uVar1 & 0xef;
          uVar2 = *(undefined8 *)(lVar7 + 0x260);
          local_80 = param_1 + 0x48;
          uVar10 = (**(code **)(*param_1 + 0x7a0))(param_1);
          FUN_14025a69a(local_78 + 2,param_1);
          local_90 = 0;
          local_98 = local_78 + 2;
          local_a8 = 0;
          local_a0 = uVar2;
          FUN_140311a3a(puVar6,uVar10,local_80,param_1);
          *(byte *)(puVar6 + 2) = (byte)puVar6[2] & 0xef | (byte)uVar1 & 0x10;
        }
        if (lVar12 != 0) {
          local_78[2] = 0;
          uStack_60 = 0;
          local_78[0] = 0;
          local_78[1] = 0;
          (**(code **)(*param_1 + 0x7e8))(param_1,local_78 + 2,local_78,0);
          if (0 < (int)uStack_60) {
            lVar7 = 0;
            iVar5 = (int)uStack_60;
            do {
              puVar3 = *(uint **)(local_78[2] + lVar7 * 8);
              if (puVar3 != puVar6) {
                if (bVar13 == 0) {
                  FUN_147c47a14(lVar11,puVar3);
                }
                LOCK();
                puVar3[0x42] = 0;
                puVar3[0x43] = 0;
                UNLOCK();
                iVar5 = (int)uStack_60;
              }
              lVar7 = lVar7 + 1;
            } while (lVar7 < iVar5);
          }
          if (((((bVar13 == 0) && ((puVar6[2] & 1) != 0)) &&
               ((puVar6[1] != 0 &&
                ((uVar1 = *puVar6, -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))))) &&
              (plVar8 = (longlong *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
              plVar8 != (longlong *)0x0)) &&
             ((*(uint *)(plVar8 + 2) == puVar6[1] && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0))))
          {
            if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
              lVar7 = *plVar8;
            }
            else {
              lVar7 = 0;
            }
            lVar11 = DAT_14c997cc0;
            if (DAT_14c997cc0 == 0) {
              lVar12 = FUN_145a62958();
              lVar11 = *(longlong *)(lVar12 + 0x110);
              if (lVar11 == 0) {
                FUN_140aa6c08(lVar12);
                lVar11 = *(longlong *)(lVar12 + 0x110);
              }
            }
            cVar4 = *(char *)(lVar11 + 0x75);
            if (*(char *)(lVar7 + 0x31) != '\0') {
              cVar4 = *(char *)(lVar7 + 0x31);
            }
            if ((cVar4 != '\x03') && (*(longlong *)(puVar6 + 0x4e) != 0)) {
              FUN_1405a3210(puVar6);
            }
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          if (local_78[2] != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140156df6 FUN_140156df6 body=886 status=ok
// SIG undefined FUN_140156df6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140156df6(undefined8 *param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar6 = (ulonglong)DAT_14caf6fb8;
  if (0 < (longlong)uVar6) {
    bVar10 = false;
    DAT_14caf6fc4 = DAT_14caf6fc4 + 1;
    do {
      lVar12 = uVar6 * 0x10 + -8;
      uVar13 = uVar6;
      while (((*(int *)(DAT_14caf6fb0 + lVar12) != 0 &&
              (plVar8 = *(longlong **)(DAT_14caf6fb0 + -8 + lVar12), plVar8 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar8 + 0x60))(plVar8,param_1,1), cVar5 != '\0'))) {
        lVar12 = lVar12 + -0x10;
        bVar3 = uVar13 < 2;
        uVar13 = uVar13 - 1;
        if (bVar3) {
          DAT_14caf6fc4 = DAT_14caf6fc4 + -1;
          if (!bVar10) goto LAB_140156f1e;
          goto LAB_140156e93;
        }
      }
      uVar6 = uVar13 - 1;
      bVar10 = true;
    } while (1 < uVar13);
    DAT_14caf6fc4 = DAT_14caf6fc4 + -1;
LAB_140156e93:
    iVar4 = DAT_14caf6fb8;
    if (DAT_14caf6fc4 < 1) {
      if (0 < DAT_14caf6fb8) {
        iVar11 = 0;
        do {
          if (((*(int *)(DAT_14caf6fb0 + 8 + (longlong)iVar11 * 0x10) == 0) ||
              (plVar8 = *(longlong **)(DAT_14caf6fb0 + (longlong)iVar11 * 0x10),
              plVar8 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar8 + 0x28))(), cVar5 != '\0')) {
            FUN_14005b288(&DAT_14caf6fb0,iVar11);
            FUN_14005b248(&DAT_14caf6fb0);
          }
          else {
            iVar11 = iVar11 + 1;
          }
        } while (iVar11 < DAT_14caf6fb8);
      }
      _DAT_14caf6fc0 = 2;
      if (2 < DAT_14caf6fb8 * 2) {
        _DAT_14caf6fc0 = DAT_14caf6fb8 * 2;
      }
      if ((_DAT_14caf6fc0 < iVar4) && (DAT_14caf6fbc != DAT_14caf6fb8)) {
        FUN_14045812c(&DAT_14caf6fb0);
      }
    }
  }
LAB_140156f1e:
  if (((((*(int *)((longlong)param_1 + 0x144) != 0) &&
        (uVar1 = *(uint *)(param_1 + 0x28), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)((longlong)param_1 + 0x144))))) &&
     (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar12 = *plVar8, lVar12 != 0)))) {
    lVar7 = *(longlong *)(lVar12 + 0xb0);
    if (lVar7 == 0) {
      lVar7 = FUN_1448abda6(lVar12);
    }
    lVar7 = *(longlong *)(lVar7 + 0x260);
    if (lVar7 != 0) {
      if (param_1[0x27] != 0) {
        FUN_1448b7762(lVar7);
      }
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x20) != 0) {
        FUN_1406f7bf0(lVar7 + 0xc0,lVar12);
      }
    }
  }
  if (param_1[0x27] != 0) {
    lVar12 = *(longlong *)(param_1[0x27] + 8);
    if (lVar12 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar12 + 0x260);
    }
    FUN_142a2e46a(param_1 + 0x27,uVar9,param_2);
  }
  *(undefined1 *)(param_1 + 7) = 0;
  if (param_3 == '\0') {
    *param_1 = 0;
    param_1[0x28] = 0;
    param_1[0x14] = 0;
  }
  if (param_1[0x20] == 0) {
    return;
  }
  FUN_1407a4724();
  lVar12 = param_1[0x20];
  plVar8 = (longlong *)(lVar12 + 0x38);
  if (*(int *)(lVar12 + 0x40) == 0) {
LAB_140157058:
    if (*plVar8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar8;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar8,0,0,0x10);
      *(undefined4 *)(lVar12 + 0x40) = 0;
      goto LAB_140157058;
    }
  }
  plVar8 = (longlong *)(lVar12 + 0x28);
  if (*(int *)(lVar12 + 0x30) == 0) {
LAB_140157097:
    if (*plVar8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar8;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar8,0,0,0x10);
      *(undefined4 *)(lVar12 + 0x30) = 0;
      goto LAB_140157097;
    }
  }
  plVar8 = (longlong *)(lVar12 + 0x18);
  if (*(int *)(lVar12 + 0x20) != 0) {
    puVar2 = (undefined8 *)*plVar8;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1401570e2;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar8,0,0,0x10);
    *(undefined4 *)(lVar12 + 0x20) = 0;
  }
  if (*plVar8 != 0) {
    FUN_1400020a8();
  }
LAB_1401570e2:
  FUN_1400020a8(lVar12);
  param_1[0x20] = 0;
  return;
}



// FUNCTION 14015716c FUN_14015716c body=120 status=ok
// SIG undefined FUN_14015716c(void)

undefined8 * FUN_14015716c(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa9884) {
    FUN_144b3d300(&DAT_14caa9884);
    if (DAT_14caa9884 == -1) {
      FUN_1446ddc76(&DAT_14caa987c,"OnComponentPhysicsStateChanged",1);
      _Init_thread_footer(&DAT_14caa9884);
    }
  }
  *param_2 = DAT_14caa987c;
  return param_2;
}



// FUNCTION 1401571e4 FUN_1401571e4 body=5011 status=ok
// SIG undefined FUN_1401571e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401571e4(undefined8 param_1,undefined8 *param_2,longlong param_3,uint param_4)

{
  char cVar1;
  ulonglong *puVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint uVar9;
  char *pcVar10;
  uint *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  uint uVar14;
  double *pdVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  double *pdVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  undefined1 auVar25 [16];
  double dVar28;
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar40;
  double dVar41;
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  double dVar52;
  undefined1 auVar51 [16];
  undefined1 auStack_368 [32];
  double *local_348;
  double *local_340;
  undefined8 *local_338;
  undefined1 local_330;
  undefined1 local_328 [16];
  double local_318;
  double local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8 [2];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178 [4];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  auVar42 = _DAT_149934d80;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (param_3 == 0) {
    puVar19 = &DAT_14c846480;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *param_2 = *puVar19;
      puVar19 = puVar19 + 1;
      param_2 = param_2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_368);
  }
  uVar20 = (ulonglong)param_4;
  lVar7 = 0xb0;
  if (param_4 < 4) {
    lVar7 = *(longlong *)(&DAT_14bb90798 + uVar20 * 8);
  }
  pcVar10 = "";
  if (*(char **)(param_3 + lVar7) != (char *)0x0) {
    pcVar10 = *(char **)(param_3 + lVar7);
  }
  if (*pcVar10 != '\x01') goto LAB_1401580a1;
  uVar9 = 0;
  if (param_4 < 4) {
    uVar9 = (&switchD_140157364::switchdataD_14bb90818)[uVar20];
  }
  uVar14 = ((param_4 - 1 & 0xfffffffd) == 0) + 2;
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_2e8 = 0.0;
  dStack_2e0 = 1.0;
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2c8 = 0.0;
  dStack_2c0 = 0.0;
  dVar30 = (double)DAT_149934d80;
  dVar35 = DAT_149934d80._8_8_;
  local_2b8 = _DAT_149934d80;
  local_2a8 = 1.0;
  dStack_2a0 = 0.0;
  cVar1 = *(char *)(param_3 + 0x10);
  if (param_4 < 2) {
    if (cVar1 == '\x02') {
      puVar19 = *(undefined8 **)
                 (param_3 + 0x60 + (ulonglong)((param_4 - 1 & 0xfffffffd) != 0) * 0x20);
      if (((puVar19 == (undefined8 *)0x0) &&
          (puVar19 = &DAT_14cc07c00,
          *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cc07c60)) && (FUN_144b3d300(&DAT_14cc07c60), DAT_14cc07c60 == -1))
      {
        puVar19 = &DAT_14cc07c00;
        puVar16 = &DAT_14c846480;
        puVar17 = &DAT_14cc07c00;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar17 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar17 = puVar17 + 1;
        }
        _Init_thread_footer(&DAT_14cc07c60);
      }
      lVar7 = param_3 + 0x48;
      local_340 = (double *)&DAT_14c846480;
LAB_1401574ce:
      local_348 = (double *)CONCAT44(local_348._4_4_,uVar14);
      FUN_1444a2580(param_1,local_1f8,puVar19,param_3 + 0x110);
      if ((((ABS(local_1b8) <= 1e-08) || (ABS(dStack_1b0) <= 1e-08)) || (ABS(local_1a8) <= 1e-08))
         && (((FUN_14449ec9a(param_1,local_178,param_3,param_4 == 1 | 2), ABS(local_138) <= 1e-08 ||
              (ABS(dStack_130) <= 1e-08)) || (ABS(local_128) <= 1e-08)))) {
        lVar13 = param_3 + 0x68;
        if (param_4 == 1) {
          lVar13 = lVar7;
        }
        puVar19 = *(undefined8 **)(lVar13 + 8);
        if (((puVar19 == (undefined8 *)0x0) &&
            (puVar19 = &DAT_14cc07c00,
            *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cc07c60)) &&
           (FUN_144b3d300(&DAT_14cc07c60), DAT_14cc07c60 == -1)) {
          puVar19 = &DAT_14cc07c00;
          puVar16 = &DAT_14c846480;
          puVar17 = &DAT_14cc07c00;
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar17 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar17 = puVar17 + 1;
          }
          _Init_thread_footer(&DAT_14cc07c60);
        }
        local_1d8 = *(undefined1 (*) [16])(puVar19 + 4);
        local_1c8 = (double)puVar19[6];
        uStack_1c0 = 0;
        local_1b8 = (double)puVar19[8];
        dStack_1b0 = (double)puVar19[9];
        local_1a8 = (double)puVar19[10];
        uStack_1a0 = 0;
      }
      lVar13 = param_3 + 0x68;
      if (param_4 == 1) {
        lVar13 = lVar7;
      }
    }
    else {
      if (cVar1 == '\x04') {
        lVar7 = param_3 + 0x48;
        lVar13 = lVar7;
        switch(uVar20) {
        case 0:
          lVar13 = param_3 + 0x78;
          break;
        case 1:
          lVar13 = param_3 + 0x58;
          break;
        default:
          lVar13 = param_3 + 0x68;
          break;
        case 3:
          break;
        }
        puVar19 = *(undefined8 **)(lVar13 + 8);
        if (puVar19 == (undefined8 *)0x0) {
          local_328._0_8_ = lVar7;
          puVar19 = &DAT_14cc07c00;
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110) <
              DAT_14cc07c60) {
            FUN_144b3d300(&DAT_14cc07c60);
            lVar7 = local_328._0_8_;
            if (DAT_14cc07c60 == -1) {
              puVar19 = &DAT_14cc07c00;
              puVar16 = &DAT_14c846480;
              puVar17 = &DAT_14cc07c00;
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *puVar17 = *puVar16;
                puVar16 = puVar16 + 1;
                puVar17 = puVar17 + 1;
              }
              _Init_thread_footer(&DAT_14cc07c60);
            }
          }
        }
        FUN_1401261c4(param_1,local_178,param_3,uVar14 & 1);
        local_340 = local_178;
        goto LAB_1401574ce;
      }
      FUN_14449ec9a(param_1,&local_2f8,param_3,uVar14);
      lVar7 = param_3 + 0x48;
      lVar13 = lVar7;
      switch(uVar20) {
      case 0:
        lVar13 = param_3 + 0x78;
        break;
      case 1:
        lVar13 = param_3 + 0x58;
        break;
      default:
        lVar13 = param_3 + 0x68;
        break;
      case 3:
        break;
      }
      puVar19 = *(undefined8 **)(lVar13 + 8);
      if (((puVar19 == (undefined8 *)0x0) &&
          (puVar19 = &DAT_14cc07c00,
          *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cc07c60)) && (FUN_144b3d300(&DAT_14cc07c60), DAT_14cc07c60 == -1))
      {
        puVar19 = &DAT_14cc07c00;
        puVar16 = &DAT_14c846480;
        puVar17 = &DAT_14cc07c00;
        for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
          *puVar17 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar17 = puVar17 + 1;
        }
        _Init_thread_footer(&DAT_14cc07c60);
      }
      FUN_1449437a2(puVar19,local_1f8,&local_2f8);
      dVar30 = (double)local_1e8._0_8_ * (double)local_1e8._0_8_ + local_1f8[0] * local_1f8[0];
      dVar35 = (double)local_1e8._8_8_ * (double)local_1e8._8_8_ + local_1f8[1] * local_1f8[1];
      auVar32._0_8_ = dVar30 + dVar35;
      auVar32._8_8_ = dVar30 + dVar35;
      auVar22._8_8_ = -(ulonglong)(1e-08 <= auVar32._8_8_);
      auVar22._0_8_ = -(ulonglong)(1e-08 <= auVar32._0_8_);
      auVar33 = sqrtpd(auVar32,auVar32);
      auVar42 = divpd(auVar42,auVar33);
      auVar43._0_8_ = auVar42._0_8_ * (double)local_1e8._0_8_;
      auVar43._8_8_ = auVar42._8_8_ * (double)local_1e8._8_8_;
      local_1e8 = blendvpd(_DAT_149935300,auVar43,auVar22);
      local_1f8[0] = (double)((ulonglong)(local_1f8[0] * auVar42._0_8_) &
                             -(ulonglong)(1e-08 <= auVar32._0_8_));
      local_1f8[1] = (double)((ulonglong)(local_1f8[1] * auVar42._8_8_) &
                             -(ulonglong)(1e-08 <= auVar32._8_8_));
      if ((((ABS(local_1b8) <= 1e-08) || (ABS(dStack_1b0) <= 1e-08)) || (ABS(local_1a8) <= 1e-08))
         && (((FUN_14449ec9a(param_1,local_178,param_3,param_4 == 1 | 2), ABS(local_138) <= 1e-08 ||
              (ABS(dStack_130) <= 1e-08)) || (ABS(local_128) <= 1e-08)))) {
        lVar13 = param_3 + 0x68;
        if (param_4 == 1) {
          lVar13 = lVar7;
        }
        puVar19 = *(undefined8 **)(lVar13 + 8);
        if (((puVar19 == (undefined8 *)0x0) &&
            (puVar19 = &DAT_14cc07c00,
            *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cc07c60)) &&
           (FUN_144b3d300(&DAT_14cc07c60), DAT_14cc07c60 == -1)) {
          puVar19 = &DAT_14cc07c00;
          puVar16 = &DAT_14c846480;
          puVar17 = &DAT_14cc07c00;
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar17 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar17 = puVar17 + 1;
          }
          _Init_thread_footer(&DAT_14cc07c60);
        }
        local_1d8 = *(undefined1 (*) [16])(puVar19 + 4);
        local_1c8 = (double)puVar19[6];
        uStack_1c0 = 0;
        local_1b8 = (double)puVar19[8];
        dStack_1b0 = (double)puVar19[9];
        local_1a8 = (double)puVar19[10];
        uStack_1a0 = 0;
      }
      lVar13 = param_3 + 0x68;
      if (param_4 == 1) {
        lVar13 = lVar7;
      }
    }
    if (*(double **)(lVar13 + 8) != (double *)0x0) {
      pdVar18 = local_1f8;
      pdVar15 = *(double **)(lVar13 + 8);
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *pdVar15 = *pdVar18;
        pdVar18 = pdVar18 + 1;
        pdVar15 = pdVar15 + 1;
      }
    }
    puVar8 = *(undefined1 **)((ulonglong)(param_4 != 1) * 0x20 + 0xa0 + param_3);
  }
  else {
    lVar7 = param_3 + 0x48;
    if (cVar1 == '\x02') {
      switch(uVar20) {
      case 0:
        lVar7 = param_3 + 0x78;
        break;
      case 1:
        lVar7 = param_3 + 0x58;
        break;
      default:
        lVar7 = param_3 + 0x68;
        break;
      case 3:
        break;
      }
      puVar19 = *(undefined8 **)(lVar7 + 8);
      if (((puVar19 == (undefined8 *)0x0) &&
          (puVar19 = &DAT_14cc07c00,
          *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cc07c60)) && (FUN_144b3d300(&DAT_14cc07c60), DAT_14cc07c60 == -1))
      {
        puVar19 = &DAT_14cc07c00;
        puVar16 = &DAT_14c846480;
        puVar17 = &DAT_14cc07c00;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar17 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar17 = puVar17 + 1;
        }
        _Init_thread_footer(&DAT_14cc07c60);
      }
      local_348 = (double *)&DAT_14c846480;
      local_340 = (double *)((ulonglong)local_340 & 0xffffffffffffff00);
      local_338 = puVar19;
LAB_140157668:
      local_330 = 1;
      FUN_1444a3b48(param_1,local_178,param_3 + 0x110,uVar20);
      pdVar18 = *(double **)(param_3 + 0x60 + (ulonglong)(param_4 != 3) * 0x20);
      if (pdVar18 != (double *)0x0) {
        pdVar15 = local_178;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pdVar18 = *pdVar15;
          pdVar15 = pdVar15 + 1;
          pdVar18 = pdVar18 + 1;
        }
      }
    }
    else {
      if (cVar1 == '\x04') {
        switch(uVar20) {
        case 0:
          lVar7 = param_3 + 0x78;
          break;
        case 1:
          lVar7 = param_3 + 0x58;
          break;
        default:
          lVar7 = param_3 + 0x68;
          break;
        case 3:
          break;
        }
        puVar19 = *(undefined8 **)(lVar7 + 8);
        if (((puVar19 == (undefined8 *)0x0) &&
            (puVar19 = &DAT_14cc07c00,
            *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cc07c60)) &&
           (FUN_144b3d300(&DAT_14cc07c60), DAT_14cc07c60 == -1)) {
          puVar19 = &DAT_14cc07c00;
          puVar16 = &DAT_14c846480;
          puVar17 = &DAT_14cc07c00;
          for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar17 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar17 = puVar17 + 1;
          }
          _Init_thread_footer(&DAT_14cc07c60);
        }
        FUN_1401261c4(param_1,local_1f8,param_3,uVar9);
        local_340 = (double *)CONCAT71(local_340._1_7_,1);
        local_348 = local_1f8;
        local_338 = puVar19;
        goto LAB_140157668;
      }
      FUN_14449ec9a(param_1,&local_2f8,param_3,uVar14);
      puVar11 = &switchD_140157471::switchdataD_14bb90924;
      switch(uVar20) {
      case 0:
        lVar7 = param_3 + 0x78;
        break;
      case 1:
        lVar7 = param_3 + 0x58;
        break;
      default:
        lVar7 = param_3 + 0x68;
        break;
      case 3:
        break;
      }
      pdVar18 = *(double **)(lVar7 + 8);
      iVar6 = (&switchD_140157471::switchdataD_14bb90924)[uVar9] + 0x4bb90924;
      if (pdVar18 == (double *)0x0) {
        puVar11 = *(uint **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        pdVar18 = (double *)&DAT_14cc07c00;
        iVar6 = DAT_14cc07c60;
        if ((int)puVar11[0x44] < DAT_14cc07c60) {
          puVar11 = (uint *)&DAT_14cc07c60;
          iVar6 = FUN_144b3d300();
          if (DAT_14cc07c60 == -1) {
            pdVar18 = (double *)&DAT_14cc07c00;
            puVar19 = &DAT_14c846480;
            puVar16 = &DAT_14cc07c00;
            for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar16 = *puVar19;
              puVar19 = puVar19 + 1;
              puVar16 = puVar16 + 1;
            }
            puVar11 = (uint *)&DAT_14cc07c60;
            iVar6 = _Init_thread_footer();
          }
        }
      }
      dVar48 = local_2b8._0_8_;
      dVar28 = local_2b8._8_8_;
      auVar38._8_8_ = dStack_2a0;
      auVar38._0_8_ = local_2a8;
      auVar33 = *(undefined1 (*) [16])(pdVar18 + 8);
      dVar21 = auVar33._0_8_;
      dVar26 = auVar33._8_8_;
      local_328 = *(undefined1 (*) [16])(pdVar18 + 10);
      dVar3 = local_328._0_8_;
      auVar33 = minpd(auVar33,local_2b8);
      auVar38 = minpd(local_328,auVar38);
      auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
      auVar34._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
      iVar6 = movmskpd(iVar6,auVar34);
      auVar33._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
      auVar33._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
      uVar9 = movmskpd((int)puVar11,auVar33);
      if ((uVar9 & 0x3fffffff) == 0 && iVar6 == 0) {
        dVar46 = *pdVar18;
        dVar45 = pdVar18[1];
        dVar40 = pdVar18[2];
        dVar5 = pdVar18[3];
        dVar31 = dVar45 * local_2e8 * -1.0 +
                 dVar40 * dStack_2f0 + dVar5 * local_2f8 * 1.0 + dVar46 * dStack_2e0;
        dVar36 = dVar46 * local_2e8 * 1.0 +
                 dVar5 * dStack_2f0 + dVar40 * local_2f8 * -1.0 + dVar45 * dStack_2e0;
        dVar44 = pdVar18[4] * dVar48;
        dVar47 = pdVar18[5] * dVar28;
        dVar49 = pdVar18[6] * local_2a8;
        dVar52 = pdVar18[7] * dStack_2a0;
        dVar37 = dVar47 * local_2f8 - dStack_2f0 * dVar44;
        dVar41 = dVar49 * dStack_2f0 - local_2e8 * dVar47;
        dVar30 = dVar44 * local_2e8 - local_2f8 * dVar49;
        dVar35 = dVar52 * dStack_2e0 - dStack_2e0 * dVar52;
        dVar41 = dVar41 + dVar41;
        dVar30 = dVar30 + dVar30;
        dVar37 = dVar37 + dVar37;
        dVar35 = dVar35 + dVar35;
        auVar50._8_8_ =
             dVar40 * local_2e8 * -1.0 +
             ((local_2f8 * dVar46 * -1.0 + dVar5 * dStack_2e0) - dVar45 * dStack_2f0);
        auVar50._0_8_ =
             dVar5 * local_2e8 * 1.0 +
             ((local_2f8 * dVar45 * 1.0 + dVar40 * dStack_2e0) - dVar46 * dStack_2f0);
        local_118 = (dVar37 * dStack_2f0 - local_2e8 * dVar30) + dStack_2e0 * dVar41 + dVar44 +
                    local_2d8;
        dStack_110 = (dVar41 * local_2e8 - dVar37 * local_2f8) + dStack_2e0 * dVar30 + dVar47 +
                     dStack_2d0;
        local_108 = (dVar30 * local_2f8 - dStack_2f0 * dVar41) + dStack_2e0 * dVar37 + dVar49 +
                    local_2c8;
        dVar35 = (dVar35 * dStack_2e0 - dVar35 * dStack_2e0) + dStack_2e0 * dVar35 + dVar52 +
                 dStack_2c0;
        dVar21 = dVar21 * dVar48;
        dVar26 = dVar26 * dVar28;
        dVar3 = dVar3 * local_2a8;
        dVar30 = local_328._8_8_ * dStack_2a0;
      }
      else {
        dVar40 = dStack_2f0 + dStack_2f0;
        dVar37 = local_2e8 + local_2e8;
        dVar45 = local_2f8 * (local_2f8 + local_2f8);
        local_1a8 = (1.0 - (dVar45 + dStack_2f0 * dVar40)) * local_2a8;
        dVar46 = (local_2f8 + local_2f8) * dStack_2e0;
        local_1b8 = (dVar40 * dStack_2e0 + local_2f8 * dVar37) * local_2a8;
        local_328._8_8_ = dStack_2a0 * local_328._8_8_;
        local_328._0_8_ = local_2a8 * dVar3;
        dStack_1b0 = (dVar37 * dStack_2f0 - dVar46) * local_2a8;
        local_1f8[0] = (dVar30 - (local_2e8 * dVar37 + dStack_2f0 * dVar40)) * dVar48;
        dVar45 = (dVar35 - (local_2e8 * dVar37 + dVar45)) * dVar28;
        local_1f8[1] = (dVar40 * local_2f8 + dVar37 * dStack_2e0) * dVar48;
        local_1c8 = (dVar37 * dStack_2f0 + dVar46) * dVar28;
        local_1e8._8_8_ = 0;
        local_1e8._0_8_ = (local_2f8 * dVar37 - dVar40 * dStack_2e0) * dVar48;
        local_1d8._8_4_ = SUB84(dVar45,0);
        local_1d8._0_8_ = (dVar40 * local_2f8 - dVar37 * dStack_2e0) * dVar28;
        local_1d8._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = local_2d8;
        dStack_190 = dStack_2d0;
        local_188 = local_2c8;
        uStack_180 = 0x3ff0000000000000;
        dVar5 = *pdVar18;
        dVar31 = pdVar18[1];
        dVar36 = pdVar18[2];
        dVar41 = dVar31 + dVar31;
        dVar46 = dVar36 + dVar36;
        dVar44 = dVar5 * (dVar5 + dVar5);
        local_228 = (1.0 - (dVar44 + dVar31 * dVar41)) * dVar3;
        dVar37 = pdVar18[3];
        dVar45 = dVar46 * dVar37;
        dVar40 = (dVar5 + dVar5) * pdVar18[3];
        dVar37 = dVar41 * dVar37;
        local_238 = (dVar37 + *pdVar18 * dVar46) * dVar3;
        dStack_230 = (dVar46 * dVar31 - dVar40) * dVar3;
        local_308 = dVar48 * dVar21;
        dStack_300 = dVar28 * dVar26;
        local_278 = (dVar30 - (dVar36 * dVar46 + dVar31 * dVar41)) * dVar21;
        dVar30 = (dVar35 - (dVar36 * dVar46 + dVar44)) * dVar26;
        dStack_270 = (dVar41 * dVar5 + dVar45) * dVar21;
        local_248 = (dVar46 * dVar31 + dVar40) * dVar26;
        local_268 = (*pdVar18 * dVar46 - dVar37) * dVar21;
        uStack_260 = 0;
        local_258._8_4_ = SUB84(dVar30,0);
        local_258._0_8_ = (dVar41 * dVar5 - dVar45) * dVar26;
        local_258._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = pdVar18[4];
        dStack_210 = pdVar18[5];
        local_208 = pdVar18[6];
        uStack_200 = 0x3ff0000000000000;
        FUN_1447fea8d(local_178);
        dVar26 = dStack_300;
        dVar21 = local_308;
        local_310 = local_178[2];
        dVar30 = local_178[2] * local_178[2] +
                 local_178[0] * local_178[0] + local_178[1] * local_178[1];
        local_318 = local_148;
        dVar48 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
        dVar35 = local_128 * local_128 + local_138 * local_138 + dStack_130 * dStack_130;
        uVar20 = -(ulonglong)(0.0 <= dVar30 + -9.99999993922529e-09);
        dVar46 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar30)) & uVar20);
        uVar20 = -(ulonglong)(0.0 <= dVar48 + -9.99999993922529e-09);
        dVar48 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar48)) & uVar20);
        uVar20 = -(ulonglong)(0.0 <= dVar35 + -9.99999993922529e-09);
        dVar3 = (double)local_328._0_8_;
        dVar30 = (double)local_328._8_8_;
        dVar28 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar35)) & uVar20);
        auVar23._8_8_ = -(ulonglong)(0.0 <= dStack_300);
        auVar23._0_8_ = -(ulonglong)(0.0 <= local_308);
        auVar33 = blendvpd(_DAT_149936790,auVar42,auVar23);
        dVar35 = (double)(~-(ulonglong)(0.0 <= (double)local_328._0_8_) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= (double)local_328._0_8_) & 0x3ff0000000000000);
        dVar37 = auVar33._0_8_;
        local_178[0] = local_178[0] * dVar46 * dVar37;
        local_178[1] = local_178[1] * dVar46 * dVar37;
        local_178[2] = dVar46 * local_178[2] * dVar37;
        dVar37 = auVar33._8_8_;
        local_148 = dVar48 * local_148 * dVar37;
        local_150 = local_150 * dVar48 * dVar37;
        local_158 = dVar37 * local_158 * dVar48;
        local_128 = dVar28 * local_128 * dVar35;
        dStack_130 = dStack_130 * dVar28 * dVar35;
        local_138 = dVar35 * local_138 * dVar28;
        FUN_14481fd10(&local_298,local_178);
        dVar35 = local_288 * local_288 + local_298 * local_298;
        dVar48 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar29._0_8_ = dVar35 + dVar48;
        auVar29._8_8_ = dVar35 + dVar48;
        auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
        auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
        auVar33 = sqrtpd(auVar29,auVar29);
        auVar33 = divpd(auVar42,auVar33);
        auVar39._0_8_ = auVar33._0_8_ * local_288;
        auVar39._8_8_ = auVar33._8_8_ * dStack_280;
        dVar31 = (double)((ulonglong)(local_298 * auVar33._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
        dVar36 = (double)((ulonglong)(dStack_290 * auVar33._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
        auVar50 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar24);
        dVar35 = 0.0;
      }
      puVar2 = *(ulonglong **)(param_3 + 0x60 + (ulonglong)(param_4 != 3) * 0x20);
      if (puVar2 != (ulonglong *)0x0) {
        dVar37 = auVar50._0_8_;
        dVar46 = auVar50._8_8_;
        dVar48 = dVar31 * dVar31 + dVar37 * dVar37;
        dVar28 = dVar36 * dVar36 + dVar46 * dVar46;
        auVar27._0_8_ = dVar48 + dVar28;
        auVar27._8_8_ = dVar48 + dVar28;
        auVar25._8_8_ = -(ulonglong)(1e-08 <= auVar27._8_8_);
        auVar25._0_8_ = -(ulonglong)(1e-08 <= auVar27._0_8_);
        auVar33 = sqrtpd(auVar27,auVar27);
        auVar33 = divpd(auVar42,auVar33);
        auVar51._0_8_ = dVar37 * auVar33._0_8_;
        auVar51._8_8_ = dVar46 * auVar33._8_8_;
        auVar42 = blendvpd(_DAT_149935300,auVar51,auVar25);
        *puVar2 = (ulonglong)(auVar33._0_8_ * dVar31) & -(ulonglong)(1e-08 <= auVar27._0_8_);
        puVar2[1] = (ulonglong)(auVar33._8_8_ * dVar36) & -(ulonglong)(1e-08 <= auVar27._8_8_);
        *(undefined1 (*) [16])(puVar2 + 2) = auVar42;
        puVar2[4] = (ulonglong)local_118;
        puVar2[5] = (ulonglong)dStack_110;
        puVar2[6] = (ulonglong)local_108;
        puVar2[7] = (ulonglong)dVar35;
        auVar4._8_4_ = SUB84(dVar26,0);
        auVar4._0_8_ = dVar21;
        auVar4._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
        *(undefined1 (*) [16])(puVar2 + 8) = auVar4;
        auVar42._8_4_ = SUB84(dVar30,0);
        auVar42._0_8_ = dVar3;
        auVar42._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        *(undefined1 (*) [16])(puVar2 + 10) = auVar42;
      }
    }
    puVar8 = *(undefined1 **)(param_3 + 0x90 + (ulonglong)(param_4 != 3) * 0x20);
  }
  puVar12 = &DAT_14cc07bfc;
  if (puVar8 != (undefined1 *)0x0) {
    puVar12 = puVar8;
  }
  *puVar12 = 0;
LAB_1401580a1:
  if (param_4 == 0) {
    param_3 = param_3 + 0x68;
  }
  else if (param_4 == 1) {
    param_3 = param_3 + 0x48;
  }
  else if (param_4 == 3) {
    param_3 = param_3 + 0x58;
  }
  else {
    param_3 = param_3 + 0x78;
  }
  puVar19 = *(undefined8 **)(param_3 + 8);
  if (((puVar19 == (undefined8 *)0x0) &&
      (puVar19 = &DAT_14cc07c00,
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc07c60)) && (FUN_144b3d300(&DAT_14cc07c60), DAT_14cc07c60 == -1)) {
    puVar19 = &DAT_14cc07c00;
    puVar16 = &DAT_14c846480;
    puVar17 = &DAT_14cc07c00;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar17 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar17 = puVar17 + 1;
    }
    _Init_thread_footer(&DAT_14cc07c60);
  }
  puVar16 = param_2;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar16 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar16 = puVar16 + 1;
  }
  if ((local_f0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14015857e FUN_14015857e body=20 status=ok
// SIG undefined FUN_14015857e(void)

void FUN_14015857e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x14) != param_2) {
    *(int *)(param_1 + 0x14) = param_2;
    FUN_140158592(param_1,*(undefined4 *)(param_1 + 0x10),param_2);
    return;
  }
  return;
}



// FUNCTION 140158592 FUN_140158592 body=125 status=ok
// SIG undefined FUN_140158592(void)

void FUN_140158592(void *param_1,int param_2,uint param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if (param_3 < 2) {
    if (_Src != (void *)0x0) {
      memmove(param_1,_Src,(longlong)param_2 << 3);
      FUN_140158610((longlong)param_1 + 8,0);
      return;
    }
  }
  else {
    FUN_140158610((longlong)param_1 + 8,param_3);
    if (_Src == (void *)0x0) {
      memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 140158610 FUN_140158610 body=450 status=ok
// SIG undefined FUN_140158610(void)

void FUN_140158610(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14015872b:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_140158768:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140158666;
LAB_14015865b:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140158666:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x000140158692;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1401586e8:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140158768;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14015872b;
code_r0x000140158692:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1401586e8;
    }
  }
  goto LAB_14015865b;
}



// FUNCTION 1401587d2 FUN_1401587d2 body=65 status=ok
// SIG undefined FUN_1401587d2(void)

int FUN_1401587d2(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140158bf0(param_1,iVar1);
  }
  FUN_140158813((longlong)iVar1 * 0x20 + *param_1,1);
  return iVar1;
}



// FUNCTION 140158813 FUN_140158813 body=19 status=ok
// SIG undefined FUN_140158813(void)

void FUN_140158813(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 5);
    return;
  }
  return;
}



// FUNCTION 140158826 FUN_140158826 body=304 status=ok
// SIG undefined FUN_140158826(void)

undefined4 *
FUN_140158826(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140158a1a(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_50[2] = 0;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140158958(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140158cf0(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140158958 FUN_140158958 body=193 status=ok
// SIG undefined FUN_140158958(void)

void FUN_140158958(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1400eb1c6(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = puVar1[6];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_1401589cb;
    }
  }
  uVar6 = 0;
LAB_1401589cb:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 140158a1a FUN_140158a1a body=470 status=ok
// SIG undefined FUN_140158a1a(void)

int * FUN_140158a1a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1447711aa(param_1,iVar11);
    }
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar5 + 1;
    iVar12 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar12 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar5) {
        if (iVar5 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar8 = iVar5;
        }
        else {
          uVar13 = iVar5 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar13) {
              uVar6 = uVar13;
            }
          }
          else {
            uVar6 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar6 << 2,0);
          iVar8 = (int)(uVar3 >> 2);
          iVar7 = -0x20;
          if ((int)uVar13 <= iVar8) {
            iVar7 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar9,iVar8);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar8 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x20);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x20) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar5 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar5 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 140158bf0 FUN_140158bf0 body=255 status=ok
// SIG undefined FUN_140158bf0(void)

void FUN_140158bf0(longlong param_1,int param_2)

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
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140158cf0 FUN_140158cf0 body=590 status=ok
// SIG undefined FUN_140158cf0(void)

void FUN_140158cf0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x20;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_140158ef9;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_140158ef9:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140158f46 FUN_140158f46 body=57 status=ok
// SIG undefined FUN_140158f46(void)

void FUN_140158f46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a6f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a6f8 = FUN_140002ddd(FUN_146526d8a,uVar1,L"IOAudioProvider");
  }
  return;
}



// FUNCTION 140158f80 FUN_140158f80 body=336 status=ok
// SIG undefined FUN_140158f80(void)

undefined8 FUN_140158f80(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong local_d0;
  longlong local_c0;
  undefined4 local_b8;
  float local_b0;
  char local_ac;
  undefined4 local_a8;
  float local_a4;
  longlong local_98;
  longlong local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x50);
  local_d0 = *(longlong *)(param_1 + 0x30) + 0xe8;
  FUN_140159496(*(undefined8 *)(param_1 + 0x28),&local_a8,*(longlong *)(param_1 + 0x18) + 8,
                *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xa0));
  local_c0 = local_98;
  if ((local_98 == 0) || (DAT_14c950c29 == '\0')) {
    local_b8 = local_a8;
    if (local_98 == 0) goto LAB_14015905e;
  }
  else {
    FUN_1456cec3c();
  }
  local_b8 = local_a8;
  local_d0 = *(longlong *)(param_1 + 0x18) + 0x18;
  local_d8 = &local_c0;
  FUN_1401590d2(*(undefined8 *)(param_1 + 0x28),&local_b0,
                *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x28),
                *(longlong *)(param_1 + 0x20) + 0x50);
  if (local_ac == '\x01') {
    local_a4 = local_b0 * local_a4;
  }
LAB_14015905e:
  FUN_1401592de(param_2,&local_a8,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x24));
  if ((local_38 == '\x01') && (local_48 != 0)) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401590d2 FUN_1401590d2 body=523 status=ok
// SIG undefined FUN_1401590d2(void)

float * FUN_1401590d2(longlong param_1,float *param_2,float param_3,float *param_4,longlong *param_5
                     ,longlong *param_6)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_108 [32];
  float local_e8;
  undefined1 local_d8 [32];
  double local_b8;
  double dStack_b0;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = *param_5;
  uVar2 = 0;
  if ((lVar1 != 0) && (lVar1 == *param_6)) {
    local_e8 = param_4[1];
    FUN_1449432a4(lVar1,local_d8,0,0x7f7fffff);
    local_b8 = (double)*param_4 * local_b8;
    dStack_b0 = (double)*param_4 * dStack_b0;
    fVar4 = (float)SQRT(local_b8 * local_b8 + dStack_b0 * dStack_b0);
    if (0.0 < fVar4) {
      param_3 = param_3 / fVar4;
      (**(code **)(*(longlong *)*param_5 + 0x2b0))();
      fVar4 = *(float *)(param_6 + 1);
      fVar5 = (float)(**(code **)(*(longlong *)*param_6 + 0x2b0))();
      fVar6 = (float)FUN_1447c7e44();
      fVar6 = fVar4 / fVar5 - fVar6;
      if (0.5 < ABS(fVar6)) {
        fVar6 = fVar6 - (float)(-(uint)(0.0 < fVar6) & 0x3f800000 |
                               ~-(uint)(0.0 < fVar6) & -(uint)(fVar6 < 0.0) & 0xbf800000);
      }
      uVar3 = -(uint)(param_3 + fVar6 < 0.0);
      param_3 = ((float)(~uVar3 & (uint)fVar6 | (uint)(fVar6 + 1.0) & uVar3) + param_3) / param_3;
      if ((*(float *)(param_1 + 0x1b4) <= param_3) && (param_3 <= *(float *)(param_1 + 0x1b0))) {
        *param_2 = param_3;
        uVar2 = 1;
        goto LAB_140159255;
      }
    }
    uVar2 = 0;
  }
LAB_140159255:
  *(undefined1 *)(param_2 + 1) = uVar2;
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401592de FUN_1401592de body=439 status=ok
// SIG undefined FUN_1401592de(void)

float * FUN_1401592de(float *param_1,undefined8 *param_2,float param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  float *_Dst;
  undefined8 *_Src;
  float fVar8;
  float fVar9;
  float fVar10;
  
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 1);
  *(undefined8 *)param_1 = *param_2;
  lVar1 = param_2[2];
  *(longlong *)(param_1 + 4) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar7 = *(byte *)(param_2 + 0xe);
  *(byte *)(param_1 + 0x1c) = bVar7;
  if (bVar7 == 1) {
    *(undefined8 *)(param_1 + 0xe) = param_2[7];
    fVar8 = *(float *)(param_2 + 3);
    fVar9 = *(float *)((longlong)param_2 + 0x1c);
    fVar10 = *(float *)(param_2 + 4);
    fVar3 = *(float *)((longlong)param_2 + 0x24);
    fVar4 = *(float *)((longlong)param_2 + 0x2c);
    fVar5 = *(float *)(param_2 + 6);
    fVar6 = *(float *)((longlong)param_2 + 0x34);
    param_1[10] = *(float *)(param_2 + 5);
    param_1[0xb] = fVar4;
    param_1[0xc] = fVar5;
    param_1[0xd] = fVar6;
    param_1[6] = fVar8;
    param_1[7] = fVar9;
    param_1[8] = fVar10;
    param_1[9] = fVar3;
    param_1[0x18] = 0.0;
    param_1[0x19] = 0.0;
    fVar8 = *(float *)(param_2 + 0xd);
    puVar2 = (undefined8 *)param_2[0xc];
    param_1[0x1a] = fVar8;
    if ((longlong)(int)fVar8 == 0) {
      param_1[0x1b] = 2.8026e-45;
    }
    else {
      _Src = param_2 + 8;
      if (puVar2 != (undefined8 *)0x0) {
        _Src = puVar2;
      }
      FUN_144891736(param_1 + 0x10,fVar8,0);
      _Dst = *(float **)(param_1 + 0x18);
      if (*(float **)(param_1 + 0x18) == (float *)0x0) {
        _Dst = param_1 + 0x10;
      }
      memcpy(_Dst,_Src,(longlong)(int)fVar8 << 4);
      bVar7 = *(byte *)(param_2 + 0xe);
    }
  }
  if ((bVar7 & 1) == 0) {
    if ((longlong *)param_2[2] == (longlong *)0x0) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = (float)(**(code **)(*(longlong *)param_2[2] + 0x2b0))();
      bVar7 = *(byte *)(param_2 + 0xe);
    }
  }
  else {
    fVar8 = *(float *)(param_2 + 3);
  }
  if ((bVar7 & 1) == 0) {
    fVar9 = *param_1;
  }
  else {
    fVar9 = *(float *)((longlong)param_2 + 0x1c) * *(float *)(param_2 + 3);
  }
  fVar9 = param_3 * param_1[1] + fVar9;
  fVar10 = fVar9;
  if ((((*(char *)(param_2 + 1) == '\x01') && (param_2[2] != 0)) && (fVar8 < fVar9)) &&
     (fVar10 = 0.0, 0.008 < fVar8)) {
    fVar10 = fVar9 - (float)(int)(fVar9 / fVar8) * fVar8;
  }
  if ((bVar7 & 1) != 0) {
    if (((*(longlong *)(param_1 + 8) != 0) && (0 < (int)param_1[0x1a])) && (0.0 < param_1[6])) {
      param_1[7] = fVar10 / param_1[6];
    }
    if ((longlong *)param_2[2] == (longlong *)0x0) {
      return param_1;
    }
    fVar8 = param_1[7];
    fVar10 = (float)(**(code **)(*(longlong *)param_2[2] + 0x2b0))();
    fVar10 = fVar10 * fVar8;
  }
  *param_1 = fVar10;
  return param_1;
}



// FUNCTION 140159496 FUN_140159496 body=1706 status=ok
// SIG undefined FUN_140159496(void)

float * FUN_140159496(longlong param_1,float *param_2,longlong *param_3,float param_4,
                     undefined8 param_5,longlong param_6)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  float *pfVar11;
  longlong lVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  float local_e8 [2];
  float local_e0 [2];
  float local_d8 [2];
  float local_d0 [2];
  float *local_c8;
  float local_c0;
  byte local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar3 = *(int *)(param_6 + 4);
  if (((longlong)iVar3 < 0) || (*(int *)(param_1 + 0x108) <= iVar3)) {
    plVar10 = (longlong *)FUN_14022af78(param_1,0);
  }
  else {
    plVar10 = (longlong *)((longlong)iVar3 * 0x28 + *(longlong *)(param_1 + 0x100));
  }
  if (plVar10 == (longlong *)0x0) goto LAB_140159971;
  iVar3 = -1;
  if ((longlong)(int)plVar10[3] != 0) {
    plVar4 = (longlong *)plVar10[2];
    plVar9 = plVar4;
    do {
      if ((longlong)(int)plVar9[1] != 0) {
        lVar12 = 0;
        do {
          if (*(longlong *)(*plVar9 + lVar12) == *param_3) {
            iVar3 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar4) >> 3) * 0x286bca1b;
            goto LAB_14015959d;
          }
          lVar12 = lVar12 + 8;
        } while ((longlong)(int)plVar9[1] * 8 != lVar12);
      }
      plVar9 = plVar9 + 0x13;
    } while (plVar9 != plVar4 + (longlong)(int)plVar10[3] * 0x13);
  }
LAB_14015959d:
  iVar3 = FUN_140159b42(plVar10,param_4,param_5,iVar3);
  puVar1 = (undefined8 *)(plVar10[2] + (longlong)iVar3 * 0x98);
  fVar16 = 1.0;
  if ((0 < *(int *)(plVar10[2] + 8 + (longlong)iVar3 * 0x98)) && (*(longlong *)*puVar1 != 0)) {
    fVar16 = (float)FUN_144867862(param_5);
  }
  fVar16 = fVar16 * *(float *)(puVar1 + 4);
  if ((longlong *)*param_3 == (longlong *)0x0) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = *(float *)(param_3 + 1);
    fVar14 = (float)(**(code **)(*(longlong *)*param_3 + 0x2b0))();
    fVar17 = fVar17 / fVar14;
  }
  if ((*plVar10 == 0) || (uVar8 = (iVar3 + (uint)(fVar16 <= param_4) * 2) - 1, (int)uVar8 < 0)) {
    plVar4 = (longlong *)*puVar1;
LAB_140159630:
    plVar4 = (longlong *)*plVar4;
    fVar16 = (float)(~-(uint)(0.0 < fVar16) & 0x3f800000 |
                    (uint)(param_4 / fVar16) & -(uint)(0.0 < fVar16));
    if (*(char *)(param_1 + 0x118) == '\x01') {
      if (*(float *)(param_1 + 0x11c) <= fVar16) {
        fVar16 = *(float *)(param_1 + 0x11c);
      }
      if (fVar16 <= *(float *)(param_1 + 0x120)) {
        fVar16 = *(float *)(param_1 + 0x120);
      }
    }
    fVar14 = (float)(**(code **)(*plVar4 + 0x2b0))(plVar4);
    lVar12 = puVar1[5];
    if (lVar12 == 0) {
      *param_2 = fVar14 * fVar17;
      param_2[1] = fVar16;
      *(undefined1 *)(param_2 + 2) = 1;
      *(longlong **)(param_2 + 4) = plVar4;
      if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(plVar4);
      }
      *(undefined1 *)(param_2 + 0x1c) = 0;
      goto LAB_1401596ab;
    }
    local_118 = DAT_14c8464f0;
    local_128 = (undefined4)DAT_14c8464e0;
    uStack_124 = DAT_14c8464e0._4_4_;
    uStack_120 = (undefined4)DAT_14c8464e8;
    uStack_11c = DAT_14c8464e8._4_4_;
    local_110 = (float)(**(code **)(*plVar4 + 0x2b0))(plVar4);
    local_100 = CONCAT44(uStack_124,local_128);
    uStack_f8 = (double)CONCAT44(uStack_11c,uStack_120);
    local_f0 = local_118;
    local_c8 = (float *)0x0;
    local_c0 = 1.4013e-45;
    fStack_10c = fVar17;
    uStack_108 = lVar12;
    FUN_144891736(local_e8,1,0);
    pfVar6 = local_c8 + 2;
    bVar13 = local_c8 == (float *)0x0;
    pfVar7 = local_c8;
    if (bVar13) {
      pfVar7 = local_e8;
    }
    *pfVar7 = 1.0;
    if (bVar13) {
      pfVar6 = local_e0;
    }
    *(longlong **)pfVar6 = plVar4;
    local_b8 = 1;
    *param_2 = fVar14 * fVar17;
    param_2[1] = fVar16;
    *(undefined1 *)(param_2 + 2) = 1;
    *(longlong **)(param_2 + 4) = plVar4;
    if ((plVar4 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
      *(undefined1 *)(param_2 + 0x1c) = 1;
LAB_140159a5d:
      *(undefined8 *)(param_2 + 0xe) = local_f0;
      param_2[10] = (float)local_100;
      param_2[0xb] = local_100._4_4_;
      param_2[0xc] = (float)uStack_f8;
      param_2[0xd] = uStack_f8._4_4_;
      param_2[6] = local_110;
      param_2[7] = fStack_10c;
      param_2[8] = (float)uStack_108;
      param_2[9] = uStack_108._4_4_;
      param_2[0x18] = 0.0;
      param_2[0x19] = 0.0;
      lVar12 = (longlong)(int)local_c0;
      param_2[0x1a] = local_c0;
      if (lVar12 != 0) {
        pfVar6 = local_e8;
        if (local_c8 != (float *)0x0) {
          pfVar6 = local_c8;
        }
        FUN_144891736(param_2 + 0x10,local_c0,0);
        pfVar7 = *(float **)(param_2 + 0x18);
        if (*(float **)(param_2 + 0x18) == (float *)0x0) {
          pfVar7 = param_2 + 0x10;
        }
        goto LAB_140159942;
      }
LAB_140159af7:
      param_2[0x1b] = 2.8026e-45;
    }
    else {
      FUN_1456cec3c(plVar4);
      *(byte *)(param_2 + 0x1c) = local_b8;
      if ((local_b8 & 1) != 0) goto LAB_140159a5d;
    }
  }
  else {
    plVar4 = (longlong *)*puVar1;
    if ((int)plVar10[3] <= (int)uVar8) goto LAB_140159630;
    lVar12 = plVar10[2];
    plVar4 = (longlong *)*plVar4;
    plVar9 = (longlong *)**(undefined8 **)(lVar12 + (ulonglong)uVar8 * 0x98);
    fVar16 = (float)(**(code **)(*plVar4 + 0x2b0))(plVar4);
    fVar14 = (float)(**(code **)(*plVar9 + 0x2b0))(plVar9);
    if ((fVar16 <= 0.0) || (fVar14 <= 0.0)) {
LAB_140159971:
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = 0.0;
      param_2[0x18] = 0.0;
      param_2[0x19] = 0.0;
      param_2[0x1a] = 0.0;
      param_2[0x1b] = 0.0;
      param_2[0x14] = 0.0;
      param_2[0x15] = 0.0;
      param_2[0x16] = 0.0;
      param_2[0x17] = 0.0;
      param_2[0x10] = 0.0;
      param_2[0x11] = 0.0;
      param_2[0x12] = 0.0;
      param_2[0x13] = 0.0;
      param_2[0xc] = 0.0;
      param_2[0xd] = 0.0;
      param_2[0xe] = 0.0;
      param_2[0xf] = 0.0;
      param_2[8] = 0.0;
      param_2[9] = 0.0;
      param_2[10] = 0.0;
      param_2[0xb] = 0.0;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      param_2[0x1c] = 0.0;
      param_2[0x1d] = 0.0;
      param_2[1] = 1.0;
      *(undefined1 *)(param_2 + 2) = 1;
      goto LAB_1401596ab;
    }
    fVar15 = (float)FUN_144867862(param_5,plVar4);
    fVar2 = *(float *)(lVar12 + (ulonglong)uVar8 * 0x98 + 0x20);
    fVar18 = (param_4 / fVar15 - fVar2) * fVar14;
    fVar15 = (param_4 / fVar15 - *(float *)(puVar1 + 4)) * fVar16;
    if (ABS(fVar15 - fVar18) <= 1e-08) goto LAB_140159971;
    fVar18 = fVar18 / (fVar18 - fVar15);
    if (1.0 <= fVar18) {
      fVar18 = 1.0;
    }
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    local_110 = (fVar16 - fVar14) * fVar18 + fVar14;
    uStack_108 = *plVar10;
    uStack_f8 = (double)((*(float *)(puVar1 + 4) - fVar2) * fVar18 + fVar2);
    local_100 = 0;
    local_f0 = 0;
    local_c8 = (float *)0x0;
    local_c0 = 2.8026e-45;
    fStack_10c = fVar17;
    FUN_144891736(local_e8,2,0);
    pfVar6 = local_c8 + 2;
    pfVar7 = local_c8 + 4;
    pfVar11 = local_c8 + 6;
    bVar13 = local_c8 != (float *)0x0;
    pfVar5 = local_c8;
    if (!bVar13) {
      pfVar5 = local_e8;
    }
    *pfVar5 = fVar18;
    pfVar5 = local_e0;
    if (bVar13) {
      pfVar5 = pfVar6;
    }
    *(longlong **)pfVar5 = plVar4;
    pfVar6 = local_d8;
    if (bVar13) {
      pfVar6 = pfVar7;
    }
    *pfVar6 = 1.0 - fVar18;
    if (!bVar13) {
      pfVar11 = local_d0;
    }
    *(longlong **)pfVar11 = plVar9;
    local_b8 = 1;
    *param_2 = fVar17 * fVar16;
    param_2[1] = 1.0;
    *(undefined1 *)(param_2 + 2) = 1;
    *(longlong **)(param_2 + 4) = plVar4;
    if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(plVar4);
      *(byte *)(param_2 + 0x1c) = local_b8;
      if ((local_b8 & 1) != 0) goto LAB_1401598d6;
      goto LAB_14015994e;
    }
    *(undefined1 *)(param_2 + 0x1c) = 1;
LAB_1401598d6:
    *(undefined8 *)(param_2 + 0xe) = local_f0;
    param_2[10] = (float)local_100;
    param_2[0xb] = local_100._4_4_;
    param_2[0xc] = (float)uStack_f8;
    param_2[0xd] = uStack_f8._4_4_;
    param_2[6] = local_110;
    param_2[7] = fStack_10c;
    param_2[8] = (float)uStack_108;
    param_2[9] = uStack_108._4_4_;
    param_2[0x18] = 0.0;
    param_2[0x19] = 0.0;
    lVar12 = (longlong)(int)local_c0;
    param_2[0x1a] = local_c0;
    if (lVar12 == 0) goto LAB_140159af7;
    pfVar6 = local_e8;
    if (local_c8 != (float *)0x0) {
      pfVar6 = local_c8;
    }
    FUN_144891736(param_2 + 0x10,local_c0,0);
    pfVar7 = *(float **)(param_2 + 0x18);
    if (*(float **)(param_2 + 0x18) == (float *)0x0) {
      pfVar7 = param_2 + 0x10;
    }
LAB_140159942:
    memcpy(pfVar7,pfVar6,lVar12 << 4);
  }
LAB_14015994e:
  if (((local_b8 & 1) != 0) && (local_c8 != (float *)0x0)) {
    FUN_1400020a8();
  }
LAB_1401596ab:
  if ((local_b0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140159b42 FUN_140159b42 body=294 status=ok
// SIG undefined FUN_140159b42(void)

ulonglong FUN_140159b42(longlong param_1,float param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    fVar6 = 1.0;
    if ((0 < *(int *)(puVar1 + 1)) && (fVar6 = 1.0, *(longlong *)*puVar1 != 0)) {
      fVar6 = (float)FUN_144867862(param_3);
    }
    lVar5 = 0xb8;
    uVar3 = 0;
    fVar6 = fVar6 * *(float *)(puVar1 + 4);
    do {
      fVar7 = fVar6;
      uVar4 = uVar3;
      uVar3 = (longlong)*(int *)(param_1 + 0x18) - 1;
      if ((longlong)uVar3 <= (longlong)uVar4) {
        return uVar3;
      }
      lVar2 = *(longlong *)(param_1 + 0x10);
      fVar6 = 1.0;
      if ((0 < *(int *)(lVar2 + -0x18 + lVar5)) &&
         (fVar6 = 1.0, **(longlong **)(lVar2 + -0x20 + lVar5) != 0)) {
        fVar6 = (float)FUN_144867862(param_3);
      }
      fVar6 = fVar6 * *(float *)(lVar2 + lVar5);
      lVar5 = lVar5 + 0x98;
      uVar3 = uVar4 + 1;
    } while (fVar6 < param_2);
    if (param_4 + 1 == (int)uVar3) {
      fVar8 = 0.6;
    }
    else {
      fVar8 = *(float *)(&DAT_14ab9fa30 + (ulonglong)(param_4 == (int)uVar3) * 4);
    }
    if ((param_2 - fVar7) / (fVar6 - fVar7) <= fVar8) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 140159c68 FUN_140159c68 body=2571 status=ok
// SIG undefined FUN_140159c68(void)

ulonglong FUN_140159c68(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                       byte param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *unaff_RBX;
  ulonglong uVar13;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  longlong *plVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  longlong *plVar24;
  longlong *plVar25;
  uint uVar26;
  longlong *plVar27;
  longlong *plVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_3b8 [48];
  longlong *local_388;
  undefined8 *local_380;
  longlong *local_378;
  int local_36c;
  longlong *local_368;
  longlong *local_360;
  longlong *local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  ulonglong local_48;
  undefined7 uVar14;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  param_3[2] = param_2[2];
  lVar17 = param_2[1];
  *param_3 = *param_2;
  param_3[1] = lVar17;
  local_358 = (longlong *)0x0;
  uStack_350 = 0;
  local_388 = param_3;
  local_378 = param_4;
  cVar6 = FUN_1446f4ce8();
  plVar24 = local_358;
  if (cVar6 != '\0') {
    iVar19 = (int)uStack_350;
    lVar17 = (longlong)(int)uStack_350;
    if (lVar17 < 2) {
      lVar17 = *local_358;
      if ((local_378 != (longlong *)0x0) &&
         (((*(int *)(lVar17 + 0x84) < *(int *)(lVar17 + 0x58) || (*(longlong *)(lVar17 + 0x34) != 0)
           ) || (*(longlong *)(lVar17 + 0x44) != 0)))) {
        if (*local_378 == 0) {
          *local_378 = lVar17;
        }
        else {
          FUN_1417161a2(*local_378 + 0x50,lVar17 + 0x50);
        }
      }
      plVar24 = local_388;
      unaff_RBX = &local_348;
      FUN_1404d4814(lVar17,unaff_RBX,local_388);
      plVar24[2] = CONCAT44(uStack_334,local_338);
      *(undefined4 *)plVar24 = (undefined4)local_348;
      *(undefined4 *)((longlong)plVar24 + 4) = local_348._4_4_;
      *(undefined4 *)(plVar24 + 1) = (undefined4)uStack_340;
      *(undefined4 *)((longlong)plVar24 + 0xc) = uStack_340._4_4_;
    }
    else {
      memset(&local_338,0,0x2f0);
      local_348 = plVar24;
      uStack_340 = plVar24 + lVar17 + -1;
      fVar30 = logf((float)iVar19);
      local_338 = (int)(longlong)(fVar30 + fVar30);
      puVar11 = &local_348;
      unaff_RBX = plVar24;
      do {
        plVar20 = (longlong *)*puVar11;
        plVar24 = (longlong *)puVar11[1];
        iVar19 = (int)((ulonglong)((longlong)plVar24 - (longlong)plVar20) >> 3);
        uVar26 = iVar19 + 1;
        plVar9 = plVar24;
        plVar18 = plVar20;
        iVar15 = *(int *)(puVar11 + 2);
        local_380 = puVar11;
        if (*(int *)(puVar11 + 2) != 0) {
LAB_140159d52:
          iVar19 = iVar15;
          plVar28 = plVar18;
          plVar8 = plVar9;
          if (8 < (int)uVar26) {
            lVar17 = plVar20[uVar26 >> 1];
            plVar20[uVar26 >> 1] = *plVar20;
            *plVar20 = lVar17;
            plVar27 = plVar24 + 1;
            plVar12 = plVar20;
            do {
              lVar17 = *param_2;
              lVar1 = param_2[1];
              lVar2 = param_2[2];
              plVar9 = plVar12 + 1;
              plVar5 = plVar12 + 1;
              do {
                plVar18 = plVar5;
                plVar12 = plVar9;
                uVar26 = 0;
                if (plVar24 < plVar12) break;
                lVar3 = *plVar20;
                if (*(longlong *)(lVar3 + 4) == 0) {
                  uVar16 = 1;
LAB_140159dc5:
                  if (*(longlong *)(lVar3 + 0xc) != 0) {
                    if (*(longlong *)(lVar3 + 0xc) != lVar1) goto LAB_140159ded;
                    uVar16 = uVar16 | 4;
                  }
                  if ((*(longlong *)(lVar3 + 0x14) != 0) &&
                     (uVar16 = uVar16 + 2, *(longlong *)(lVar3 + 0x14) != lVar2)) {
                    uVar16 = uVar26;
                  }
                }
                else {
                  uVar16 = 9;
                  if (*(longlong *)(lVar3 + 4) == lVar17) goto LAB_140159dc5;
LAB_140159ded:
                  uVar16 = 0;
                }
                lVar3 = *plVar12;
                if (*(longlong *)(lVar3 + 4) == 0) {
                  uVar10 = 1;
LAB_140159e0d:
                  if (*(longlong *)(lVar3 + 0xc) != 0) {
                    if (*(longlong *)(lVar3 + 0xc) != lVar1) goto LAB_140159e33;
                    uVar10 = uVar10 | 4;
                  }
                  if ((*(longlong *)(lVar3 + 0x14) != 0) &&
                     (uVar10 = uVar10 + 2, *(longlong *)(lVar3 + 0x14) != lVar2)) {
                    uVar10 = uVar26;
                  }
                }
                else {
                  uVar10 = 9;
                  if (*(longlong *)(lVar3 + 4) == lVar17) goto LAB_140159e0d;
LAB_140159e33:
                  uVar10 = 0;
                }
                plVar9 = plVar12 + 1;
                plVar5 = plVar18 + 1;
              } while (uVar16 <= uVar10);
              plVar5 = plVar27 + -2;
              do {
                plVar25 = plVar27;
                plVar9 = plVar5;
                plVar27 = plVar25 + -1;
                if (plVar27 <= plVar20) break;
                lVar3 = *plVar27;
                if (*(longlong *)(lVar3 + 4) == 0) {
                  uVar16 = 1;
LAB_140159e7d:
                  if (*(longlong *)(lVar3 + 0xc) != 0) {
                    if (*(longlong *)(lVar3 + 0xc) != lVar1) goto LAB_140159ea3;
                    uVar16 = uVar16 | 4;
                  }
                  if ((*(longlong *)(lVar3 + 0x14) != 0) &&
                     (uVar16 = uVar16 + 2, *(longlong *)(lVar3 + 0x14) != lVar2)) {
                    uVar16 = uVar26;
                  }
                }
                else {
                  uVar16 = 9;
                  if (*(longlong *)(lVar3 + 4) == lVar17) goto LAB_140159e7d;
LAB_140159ea3:
                  uVar16 = 0;
                }
                lVar3 = *plVar20;
                if (*(longlong *)(lVar3 + 4) == 0) {
                  uVar10 = 1;
LAB_140159ec5:
                  if (*(longlong *)(lVar3 + 0xc) != 0) {
                    if (*(longlong *)(lVar3 + 0xc) != lVar1) goto LAB_140159eef;
                    uVar10 = uVar10 | 4;
                  }
                  if ((*(longlong *)(lVar3 + 0x14) != 0) &&
                     (uVar10 = uVar10 + 2, *(longlong *)(lVar3 + 0x14) != lVar2)) {
                    uVar10 = 0;
                  }
                }
                else {
                  uVar10 = 9;
                  if (*(longlong *)(lVar3 + 4) == lVar17) goto LAB_140159ec5;
LAB_140159eef:
                  uVar10 = 0;
                }
                plVar5 = plVar9 + -1;
              } while (uVar16 <= uVar10);
              if (plVar27 < plVar12) goto LAB_140159f19;
              lVar17 = *plVar12;
              *plVar12 = *plVar27;
              *plVar27 = lVar17;
            } while( true );
          }
          if (plVar20 < plVar24) {
            do {
              plVar9 = plVar20;
              if (plVar20 + 1 <= plVar24) {
                unaff_RBX = plVar20;
                plVar18 = plVar20 + 1;
                do {
                  lVar17 = *unaff_RBX;
                  if (*(longlong *)(lVar17 + 4) == 0) {
                    uVar26 = 1;
LAB_14015a39c:
                    if (*(longlong *)(lVar17 + 0xc) != 0) {
                      if (*(longlong *)(lVar17 + 0xc) != param_2[1]) goto LAB_14015a3bb;
                      uVar26 = uVar26 | 4;
                    }
                    if (*(longlong *)(lVar17 + 0x14) != 0) {
                      if (*(longlong *)(lVar17 + 0x14) != param_2[2]) goto LAB_14015a3bb;
                      uVar26 = uVar26 + 2;
                    }
                  }
                  else {
                    uVar26 = 9;
                    if (*(longlong *)(lVar17 + 4) == *param_2) goto LAB_14015a39c;
LAB_14015a3bb:
                    uVar26 = 0;
                  }
                  lVar17 = *plVar18;
                  if (*(longlong *)(lVar17 + 4) == 0) {
                    uVar16 = 1;
LAB_14015a3da:
                    if (*(longlong *)(lVar17 + 0xc) != 0) {
                      if (*(longlong *)(lVar17 + 0xc) != param_2[1]) goto LAB_14015a3f9;
                      uVar16 = uVar16 | 4;
                    }
                    if (*(longlong *)(lVar17 + 0x14) != 0) {
                      if (*(longlong *)(lVar17 + 0x14) != param_2[2]) goto LAB_14015a3f9;
                      uVar16 = uVar16 + 2;
                    }
                  }
                  else {
                    uVar16 = 9;
                    if (*(longlong *)(lVar17 + 4) == *param_2) goto LAB_14015a3da;
LAB_14015a3f9:
                    uVar16 = 0;
                  }
                  plVar9 = plVar18;
                  if (uVar26 <= uVar16) {
                    plVar9 = unaff_RBX;
                  }
                  unaff_RBX = plVar9;
                  plVar18 = plVar18 + 1;
                  plVar9 = unaff_RBX;
                } while (plVar18 <= plVar24);
              }
              lVar17 = *plVar9;
              *plVar9 = *plVar24;
              *plVar24 = lVar17;
              plVar24 = plVar24 + -1;
            } while (plVar20 < plVar24);
          }
          goto LAB_14015a424;
        }
LAB_140159fc2:
        if (uVar26 != 0) {
          iVar19 = (iVar19 - (iVar19 + -1 >> 0x1f)) + -1 >> 1;
          iVar15 = iVar19;
joined_r0x000140159fe7:
          do {
            iVar23 = iVar19 * 2 + 1;
            if (iVar23 < (int)uVar26) {
              iVar22 = iVar19 * 2 + 2;
              if (iVar22 < (int)uVar26) {
                lVar17 = plVar20[iVar22];
                if (*(longlong *)(lVar17 + 4) == 0) {
                  uVar16 = 1;
LAB_14015a022:
                  if (*(longlong *)(lVar17 + 0xc) != 0) {
                    if (*(longlong *)(lVar17 + 0xc) != param_2[1]) goto LAB_14015a047;
                    uVar16 = uVar16 | 4;
                  }
                  if (*(longlong *)(lVar17 + 0x14) != 0) {
                    if (*(longlong *)(lVar17 + 0x14) != param_2[2]) goto LAB_14015a047;
                    uVar16 = uVar16 + 2;
                  }
                }
                else {
                  uVar16 = 9;
                  if (*(longlong *)(lVar17 + 4) == *param_2) goto LAB_14015a022;
LAB_14015a047:
                  uVar16 = 0;
                }
                lVar17 = plVar20[iVar23];
                if (*(longlong *)(lVar17 + 4) == 0) {
                  uVar10 = 1;
LAB_14015a06a:
                  if (*(longlong *)(lVar17 + 0xc) != 0) {
                    if (*(longlong *)(lVar17 + 0xc) != param_2[1]) goto LAB_14015a08f;
                    uVar10 = uVar10 | 4;
                  }
                  if (*(longlong *)(lVar17 + 0x14) != 0) {
                    if (*(longlong *)(lVar17 + 0x14) != param_2[2]) goto LAB_14015a08f;
                    uVar10 = uVar10 + 2;
                  }
                }
                else {
                  uVar10 = 9;
                  if (*(longlong *)(lVar17 + 4) == *param_2) goto LAB_14015a06a;
LAB_14015a08f:
                  uVar10 = 0;
                }
                if (uVar16 <= uVar10) {
                  iVar23 = iVar22;
                }
              }
              lVar17 = plVar20[iVar23];
              unaff_RBX = (longlong *)plVar20[iVar19];
              if (*(longlong *)((longlong)unaff_RBX + 4) == 0) {
                uVar16 = 1;
LAB_14015a0c1:
                if (*(longlong *)((longlong)unaff_RBX + 0xc) != 0) {
                  if (*(longlong *)((longlong)unaff_RBX + 0xc) != param_2[1]) goto LAB_14015a0e2;
                  uVar16 = uVar16 | 4;
                }
                if (*(longlong *)((longlong)unaff_RBX + 0x14) != 0) {
                  if (*(longlong *)((longlong)unaff_RBX + 0x14) != param_2[2]) goto LAB_14015a0e2;
                  uVar16 = uVar16 + 2;
                }
              }
              else {
                uVar16 = 9;
                if (*(longlong *)((longlong)unaff_RBX + 4) == *param_2) goto LAB_14015a0c1;
LAB_14015a0e2:
                uVar16 = 0;
              }
              if (*(longlong *)(lVar17 + 4) == 0) {
                uVar10 = 1;
LAB_14015a0fe:
                if (*(longlong *)(lVar17 + 0xc) != 0) {
                  if (*(longlong *)(lVar17 + 0xc) != param_2[1]) goto LAB_14015a11f;
                  uVar10 = uVar10 | 4;
                }
                if (*(longlong *)(lVar17 + 0x14) != 0) {
                  if (*(longlong *)(lVar17 + 0x14) != param_2[2]) goto LAB_14015a11f;
                  uVar10 = uVar10 + 2;
                }
              }
              else {
                uVar10 = 9;
                if (*(longlong *)(lVar17 + 4) == *param_2) goto LAB_14015a0fe;
LAB_14015a11f:
                uVar10 = 0;
              }
              if (uVar10 < uVar16) {
                plVar20[iVar19] = lVar17;
                plVar20[iVar23] = (longlong)unaff_RBX;
                iVar19 = iVar23;
                goto joined_r0x000140159fe7;
              }
            }
            bVar29 = iVar15 != 0;
            iVar19 = iVar15 + -1;
            iVar15 = iVar19;
          } while (bVar29);
          if (1 < (int)uVar26) {
            uVar13 = (ulonglong)uVar26;
            lVar17 = *plVar20;
            *plVar20 = plVar20[uVar13 - 1];
            plVar20[uVar13 - 1] = lVar17;
            if (uVar26 != 2) {
              do {
                uVar21 = uVar13 - 1;
                iVar19 = 0;
                iVar23 = 1;
                iVar15 = 0;
                do {
                  iVar19 = iVar19 + 2;
                  iVar22 = iVar23;
                  if ((longlong)iVar19 < (longlong)uVar21) {
                    lVar17 = plVar20[iVar19];
                    if (*(longlong *)(lVar17 + 4) == 0) {
                      uVar26 = 1;
LAB_14015a1cc:
                      if (*(longlong *)(lVar17 + 0xc) != 0) {
                        if (*(longlong *)(lVar17 + 0xc) != param_2[1]) goto LAB_14015a1f2;
                        uVar26 = uVar26 | 4;
                      }
                      if (*(longlong *)(lVar17 + 0x14) != 0) {
                        if (*(longlong *)(lVar17 + 0x14) != param_2[2]) goto LAB_14015a1f2;
                        uVar26 = uVar26 + 2;
                      }
                    }
                    else {
                      uVar26 = 9;
                      if (*(longlong *)(lVar17 + 4) == *param_2) goto LAB_14015a1cc;
LAB_14015a1f2:
                      uVar26 = 0;
                    }
                    lVar17 = plVar20[iVar23];
                    if (*(longlong *)(lVar17 + 4) == 0) {
                      uVar16 = 1;
LAB_14015a216:
                      if (*(longlong *)(lVar17 + 0xc) != 0) {
                        if (*(longlong *)(lVar17 + 0xc) != param_2[1]) goto LAB_14015a23b;
                        uVar16 = uVar16 | 4;
                      }
                      if (*(longlong *)(lVar17 + 0x14) != 0) {
                        if (*(longlong *)(lVar17 + 0x14) != param_2[2]) goto LAB_14015a23b;
                        uVar16 = uVar16 + 2;
                      }
                    }
                    else {
                      uVar16 = 9;
                      if (*(longlong *)(lVar17 + 4) == *param_2) goto LAB_14015a216;
LAB_14015a23b:
                      uVar16 = 0;
                    }
                    if (uVar26 <= uVar16) {
                      iVar22 = iVar19;
                    }
                  }
                  lVar17 = plVar20[iVar22];
                  lVar1 = plVar20[iVar15];
                  if (*(longlong *)(lVar1 + 4) == 0) {
                    unaff_RBX = (longlong *)&DAT_00000001;
LAB_14015a270:
                    if (*(longlong *)(lVar1 + 0xc) != 0) {
                      if (*(longlong *)(lVar1 + 0xc) != param_2[1]) goto LAB_14015a291;
                      unaff_RBX = (longlong *)(ulonglong)((uint)unaff_RBX | 4);
                    }
                    if (*(longlong *)(lVar1 + 0x14) != 0) {
                      if (*(longlong *)(lVar1 + 0x14) != param_2[2]) goto LAB_14015a291;
                      unaff_RBX = (longlong *)(ulonglong)((int)unaff_RBX + 2);
                    }
                  }
                  else {
                    unaff_RBX = (longlong *)&DAT_00000009;
                    if (*(longlong *)(lVar1 + 4) == *param_2) goto LAB_14015a270;
LAB_14015a291:
                    unaff_RBX = (longlong *)0x0;
                  }
                  if (*(longlong *)(lVar17 + 4) == 0) {
                    uVar26 = 1;
LAB_14015a2ad:
                    if (*(longlong *)(lVar17 + 0xc) != 0) {
                      if (*(longlong *)(lVar17 + 0xc) != param_2[1]) goto LAB_14015a2ce;
                      uVar26 = uVar26 | 4;
                    }
                    if (*(longlong *)(lVar17 + 0x14) != 0) {
                      if (*(longlong *)(lVar17 + 0x14) != param_2[2]) goto LAB_14015a2ce;
                      uVar26 = uVar26 + 2;
                    }
                  }
                  else {
                    uVar26 = 9;
                    if (*(longlong *)(lVar17 + 4) == *param_2) goto LAB_14015a2ad;
LAB_14015a2ce:
                    uVar26 = 0;
                  }
                  if ((uint)unaff_RBX <= uVar26) break;
                  plVar20[iVar15] = lVar17;
                  plVar20[iVar22] = lVar1;
                  iVar19 = iVar22 * 2;
                  iVar23 = iVar22 * 2 + 1;
                  iVar15 = iVar22;
                } while ((longlong)iVar23 < (longlong)uVar21);
                lVar17 = *plVar20;
                *plVar20 = plVar20[uVar13 - 2];
                plVar20[uVar13 - 2] = lVar17;
                uVar13 = uVar21;
              } while (2 < uVar21);
            }
          }
        }
LAB_14015a424:
        puVar11 = local_380 + -3;
      } while (&local_348 <= puVar11);
      lVar17 = *local_358;
      if ((local_378 != (longlong *)0x0) &&
         (((*(int *)(lVar17 + 0x84) < *(int *)(lVar17 + 0x58) || (*(longlong *)(lVar17 + 0x34) != 0)
           ) || (*(longlong *)(lVar17 + 0x44) != 0)))) {
        if (*local_378 == 0) {
          *local_378 = lVar17;
        }
        else {
          FUN_1417161a2(*local_378 + 0x50,lVar17 + 0x50);
        }
      }
      plVar24 = local_388;
      FUN_1404d4814(lVar17,&local_348,local_388);
      plVar24[2] = CONCAT44(uStack_334,local_338);
      *(undefined4 *)plVar24 = (undefined4)local_348;
      *(undefined4 *)((longlong)plVar24 + 4) = local_348._4_4_;
      *(undefined4 *)(plVar24 + 1) = (undefined4)uStack_340;
      *(undefined4 *)((longlong)plVar24 + 0xc) = uStack_340._4_4_;
      if (1 < (int)uStack_350) {
        bVar7 = (param_5 & 2) >> 1 | param_5 * '\x02' & 3;
        unaff_RBX = (longlong *)0x0;
        lVar17 = 1;
        do {
          puVar4 = (uint *)local_358[lVar17];
          uVar26 = *puVar4;
          uVar16 = bVar7 + 4;
          if (((~uVar26 & 0x3000000) != 0) && (uVar16 = bVar7 + 8, (uVar26 >> 0x18 & 1) == 0)) {
            uVar16 = uVar26 >> 0x15 & 0x10 | (uint)bVar7;
          }
          cVar6 = FUN_1446e8c9a(puVar4 + 1,local_388,uVar16);
          if (cVar6 != '\0') {
            if ((local_378 != (longlong *)0x0) &&
               ((((int)puVar4[0x21] < (int)puVar4[0x16] || (*(longlong *)(puVar4 + 0xd) != 0)) ||
                (*(longlong *)(puVar4 + 0x11) != 0)))) {
              if (*local_378 == 0) {
                *local_378 = (longlong)puVar4;
              }
              else {
                FUN_1417161a2(*local_378 + 0x50,puVar4 + 0x14);
              }
            }
            plVar24 = local_388;
            FUN_1404d4814(puVar4,&local_348,local_388);
            plVar24[2] = CONCAT44(uStack_334,local_338);
            *(undefined4 *)plVar24 = (undefined4)local_348;
            *(undefined4 *)((longlong)plVar24 + 4) = local_348._4_4_;
            *(undefined4 *)(plVar24 + 1) = (undefined4)uStack_340;
            *(undefined4 *)((longlong)plVar24 + 0xc) = uStack_340._4_4_;
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)uStack_350);
      }
    }
  }
  uVar14 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar13 = CONCAT71(uVar14,1);
  if ((*local_388 == *param_2) && (local_388[1] == param_2[1])) {
    uVar13 = CONCAT71(uVar14,local_388[2] != param_2[2]);
  }
  if (local_358 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
LAB_140159f19:
  lVar17 = *plVar20;
  *plVar20 = *plVar27;
  *plVar27 = lVar17;
  iVar15 = iVar19 + -1;
  plVar25 = plVar25 + -2;
  unaff_RBX = (longlong *)((longlong)plVar8 - (longlong)plVar18);
  local_36c = iVar19;
  local_368 = plVar28;
  local_360 = plVar8;
  if ((longlong)plVar9 - (longlong)plVar28 < (longlong)unaff_RBX) {
    if (plVar12 < plVar24) {
      *local_380 = plVar12;
      local_380[1] = plVar24;
      *(int *)(local_380 + 2) = iVar15;
      local_380 = local_380 + 3;
    }
    plVar18 = plVar20;
    if (plVar27 <= plVar20 + 1) goto LAB_14015a424;
  }
  else {
    if (plVar20 + 1 < plVar27) {
      *local_380 = plVar20;
      local_380[1] = plVar25;
      *(int *)(local_380 + 2) = iVar15;
      local_380 = local_380 + 3;
    }
    plVar9 = plVar24;
    plVar20 = plVar12;
    plVar25 = plVar24;
    if (plVar24 <= plVar12) goto LAB_14015a424;
  }
  iVar19 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar18) >> 3);
  uVar26 = iVar19 + 1;
  plVar24 = plVar25;
  if (iVar15 == 0) goto LAB_140159fc2;
  goto LAB_140159d52;
}



// FUNCTION 14015a674 FUN_14015a674 body=294 status=ok
// SIG undefined FUN_14015a674(void)

void FUN_14015a674(char *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_144b07d40(param_1);
  puVar11 = (undefined8 *)*param_2;
  *param_2 = 0;
  param_2[1] = 0;
  if (puVar11 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar11;
    *puVar11 = 0;
    do {
      puVar10 = puVar2;
      *(undefined4 *)(puVar11 + 0x19) = 1;
      if (*param_1 == '\x01') {
        FUN_144911efa(param_1,puVar11);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x10) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
          FUN_140259550(param_1 + 8,iVar1);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = puVar11;
        if (1 < *(int *)(param_1 + 0x10)) {
          lVar3 = *(longlong *)(param_1 + 8);
          uVar7 = (ulonglong)(*(int *)(param_1 + 0x10) - 1);
          lVar4 = *(longlong *)(lVar3 + uVar7 * 8);
          do {
            uVar8 = (int)uVar7 - 1;
            uVar9 = (ulonglong)(uVar8 >> 1);
            lVar5 = *(longlong *)(lVar3 + uVar9 * 8);
            bVar6 = *(int *)(lVar5 + 0x94) < *(int *)(lVar4 + 0x94);
            if (*(int *)(lVar4 + 0x94) == *(int *)(lVar5 + 0x94)) {
              bVar6 = *(uint *)(lVar4 + 0x90) < *(uint *)(lVar5 + 0x90);
            }
            if (!bVar6) break;
            *(longlong *)(lVar3 + uVar7 * 8) = lVar5;
            *(longlong *)(lVar3 + uVar9 * 8) = lVar4;
            uVar7 = uVar9;
          } while (1 < uVar8);
        }
      }
      if (puVar10 == (undefined8 *)0x0) break;
      puVar2 = (undefined8 *)*puVar10;
      *puVar10 = 0;
      puVar11 = puVar10;
    } while( true );
  }
                    /* WARNING: Could not recover jumptable at 0x00014015a793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 14015a79a FUN_14015a79a body=1948 status=ok
// SIG undefined FUN_14015a79a(void)

void FUN_14015a79a(char *param_1)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  void **ppvVar4;
  longlong *plVar5;
  longlong *plVar6;
  int *piVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  int *piVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  int iVar25;
  int iVar26;
  longlong *plVar27;
  longlong lVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_3a8 [32];
  char *local_388;
  LPCRITICAL_SECTION local_380;
  void *local_378;
  undefined8 uStack_370;
  void *local_368;
  undefined8 uStack_360;
  undefined4 local_358 [190];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  local_380 = (LPCRITICAL_SECTION)(param_1 + 0x18);
  EnterCriticalSection(local_380);
  FUN_144b07d40();
  if (*param_1 == '\x01') {
    local_378 = (void *)0x0;
    uStack_370 = 0;
    local_388 = param_1;
    if ((longlong)*(int *)(param_1 + 0x48) != 0) {
      piVar13 = *(int **)(param_1 + 0x40);
      piVar7 = piVar13 + (longlong)*(int *)(param_1 + 0x48) * 10;
      do {
        piVar13[1] = -1;
        local_368 = (void *)0x0;
        uStack_360 = 0;
        iVar16 = piVar13[4];
        if (0 < (longlong)iVar16) {
          iVar8 = -iVar16;
          uVar21 = (longlong)iVar16;
          do {
            uVar12 = uStack_360;
            lVar28 = *(longlong *)(piVar13 + 2);
            if (*(int *)(*(longlong *)(lVar28 + -8 + uVar21 * 8) + 0x94) != *piVar13) {
              lVar23 = (longlong)(int)(uint)uStack_360;
              uVar20 = (uint)uStack_360 + 1;
              uStack_360 = CONCAT44(uStack_360._4_4_,uVar20);
              if (uStack_360._4_4_ < uVar20) {
                FUN_140259550(&local_368,uVar12 & 0xffffffff);
              }
              *(undefined8 *)((longlong)local_368 + lVar23 * 8) =
                   *(undefined8 *)(lVar28 + -8 + uVar21 * 8);
              plVar14 = *(longlong **)(*(longlong *)(piVar13 + 2) + -8 + uVar21 * 8);
              if (*(longlong **)(piVar13 + 6) == plVar14) {
                if (*(longlong **)(piVar13 + 8) == plVar14) {
                  *(longlong *)(piVar13 + 6) = 0;
                  piVar13[8] = 0;
                  piVar13[9] = 0;
                }
                else {
                  lVar28 = *plVar14;
                  *(longlong *)(piVar13 + 6) = lVar28;
                  *(undefined8 *)(lVar28 + 8) = 0;
                  *plVar14 = 0;
                }
              }
              else {
                plVar5 = (longlong *)plVar14[1];
                if (*(longlong **)(piVar13 + 8) == plVar14) {
                  *(longlong **)(piVar13 + 8) = plVar5;
                  *plVar5 = 0;
                  plVar14[1] = 0;
                }
                else {
                  *(longlong **)(*plVar14 + 8) = plVar5;
                  *plVar5 = *plVar14;
                  *plVar14 = 0;
                  plVar14[1] = 0;
                }
              }
              uVar20 = piVar13[4];
              if (uVar21 != uVar20) {
                memmove((void *)(*(longlong *)(piVar13 + 2) + uVar21 * 8 + -8),
                        (void *)(*(longlong *)(piVar13 + 2) + uVar21 * 8),
                        (longlong)(int)(uVar20 + iVar8) << 3);
                uVar20 = piVar13[4];
              }
              piVar13[4] = uVar20 - 1;
            }
            uVar12 = uStack_370;
            param_1 = local_388;
            iVar8 = iVar8 + 1;
            bVar29 = 1 < uVar21;
            uVar21 = uVar21 - 1;
          } while (bVar29);
          lVar28 = (longlong)(int)(uint)uStack_360;
          if (lVar28 != 0) {
            iVar16 = (int)uStack_370;
            lVar23 = (longlong)(int)uStack_370;
            uStack_370 = CONCAT44(uStack_370._4_4_,(int)uStack_370 + (uint)uStack_360);
            if ((uint)(uStack_370._4_4_ - iVar16) < (uint)uStack_360) {
              FUN_140259550(&local_378,uVar12 & 0xffffffff);
            }
            memcpy((void *)(lVar23 * 8 + (longlong)local_378),local_368,lVar28 << 3);
          }
        }
        if (local_368 != (void *)0x0) {
          FUN_1400020a8();
        }
        piVar13 = piVar13 + 10;
      } while (piVar13 != piVar7);
      iVar16 = *(int *)(param_1 + 0x48);
      lVar28 = (longlong)iVar16;
      if (lVar28 != 0) {
        lVar23 = *(longlong *)(param_1 + 0x40);
        iVar17 = 0;
        bVar29 = *(int *)(lVar23 + 0x10) == 0;
        iVar8 = 0;
        do {
          lVar18 = (longlong)iVar8;
          iVar11 = iVar8 + 1;
          if (iVar8 + 1 < iVar16) {
            iVar11 = iVar16;
          }
          piVar13 = (int *)(lVar23 + 0x38 + lVar18 * 0x28);
          iVar25 = iVar8;
          lVar19 = lVar18;
          do {
            lVar19 = lVar19 + 1;
            iVar26 = iVar11;
            if (lVar28 <= lVar19) break;
            iVar1 = *piVar13;
            iVar25 = iVar25 + 1;
            piVar13 = piVar13 + 10;
            iVar26 = iVar25;
          } while (bVar29 == (iVar1 == 0));
          if (bVar29 == false) {
            if (iVar17 != iVar8) {
              memmove((void *)(lVar23 + (longlong)iVar17 * 0x28),(void *)(lVar23 + lVar18 * 0x28),
                      (longlong)(iVar26 - iVar8) * 0x28);
            }
            iVar17 = iVar17 + (iVar26 - iVar8);
          }
          else {
            FUN_1417366bc(lVar23 + lVar18 * 0x28);
          }
          bVar29 = (bool)(bVar29 ^ 1);
          iVar8 = iVar26;
        } while (lVar19 < lVar28);
        *(int *)(local_388 + 0x48) = iVar17;
        param_1 = local_388;
      }
    }
    pvVar2 = local_378;
    iVar16 = (int)uStack_370;
    lVar28 = (longlong)(int)uStack_370;
    if (1 < lVar28) {
      memset(local_358,0,0x2f0);
      local_368 = pvVar2;
      uStack_360 = (longlong)pvVar2 + lVar28 * 8 + -8;
      fVar30 = logf((float)iVar16);
      local_358[0] = (int)(longlong)(fVar30 + fVar30);
      ppvVar4 = &local_368;
      do {
        plVar5 = *ppvVar4;
        plVar6 = ppvVar4[1];
        iVar16 = *(int *)(ppvVar4 + 2);
        iVar8 = (int)((ulonglong)((longlong)plVar6 - (longlong)plVar5) >> 3);
        uVar21 = (ulonglong)(iVar8 + 1);
        plVar14 = plVar6;
        plVar27 = plVar5;
        if (iVar16 != 0) {
LAB_14015abc6:
          plVar9 = plVar5;
          if (8 < (int)(uint)uVar21) {
            uVar20 = (uint)uVar21 >> 1;
            lVar28 = plVar9[uVar20];
            plVar9[uVar20] = *plVar9;
            *plVar9 = lVar28;
            plVar22 = plVar14 + 1;
            plVar5 = plVar9;
            do {
              plVar3 = plVar5 + 1;
              plVar15 = plVar5 + 1;
              do {
                plVar5 = plVar15;
                plVar10 = plVar3;
                if (plVar14 < plVar5) break;
                plVar3 = plVar10 + 1;
                plVar15 = plVar5 + 1;
              } while (*(uint *)(*plVar5 + 0x90) <= *(uint *)(*plVar9 + 0x90));
              plVar3 = plVar22 + -2;
              do {
                plVar15 = plVar22;
                plVar24 = plVar3;
                plVar22 = plVar15 + -1;
                if (plVar22 <= plVar9) break;
                plVar3 = plVar24 + -1;
              } while (*(uint *)(*plVar9 + 0x90) <= *(uint *)(*plVar22 + 0x90));
              if (plVar22 < plVar5) goto LAB_14015ac61;
              lVar28 = *plVar5;
              *plVar5 = *plVar22;
              *plVar22 = lVar28;
            } while( true );
          }
          if (plVar9 < plVar14) {
            do {
              plVar5 = plVar9;
              if (plVar9 + 1 <= plVar14) {
                lVar28 = *plVar9;
                plVar6 = plVar9 + 1;
                do {
                  lVar23 = *plVar6;
                  plVar27 = plVar6;
                  if (*(uint *)(*plVar6 + 0x90) <= *(uint *)(lVar28 + 0x90)) {
                    lVar23 = lVar28;
                    plVar27 = plVar5;
                  }
                  plVar5 = plVar27;
                  plVar6 = plVar6 + 1;
                  lVar28 = lVar23;
                } while (plVar6 <= plVar14);
              }
              lVar28 = *plVar5;
              *plVar5 = *plVar14;
              *plVar14 = lVar28;
              plVar14 = plVar14 + -1;
            } while (plVar9 < plVar14);
          }
          goto LAB_14015aea7;
        }
LAB_14015acf4:
        iVar16 = (int)uVar21;
        if (iVar16 != 0) {
          iVar8 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
          iVar17 = iVar8;
joined_r0x00014015ad1b:
          do {
            iVar11 = iVar8 * 2 + 1;
            if (iVar11 < iVar16) {
              iVar25 = iVar8 * 2 + 2;
              if ((iVar25 < iVar16) &&
                 (*(uint *)(plVar5[iVar11] + 0x90) <= *(uint *)(plVar5[iVar25] + 0x90))) {
                iVar11 = iVar25;
              }
              lVar28 = plVar5[iVar8];
              if (*(uint *)(lVar28 + 0x90) < *(uint *)(plVar5[iVar11] + 0x90)) {
                plVar5[iVar8] = plVar5[iVar11];
                plVar5[iVar11] = lVar28;
                iVar8 = iVar11;
                goto joined_r0x00014015ad1b;
              }
            }
            bVar29 = iVar17 != 0;
            iVar8 = iVar17 + -1;
            iVar17 = iVar8;
          } while (bVar29);
          if (1 < iVar16) {
            lVar28 = *plVar5;
            *plVar5 = plVar5[uVar21 - 1];
            plVar5[uVar21 - 1] = lVar28;
            if (iVar16 != 2) {
              do {
                uVar12 = uVar21 - 1;
                iVar16 = 0;
                iVar17 = 1;
                iVar8 = 0;
                do {
                  iVar16 = iVar16 + 2;
                  iVar11 = iVar17;
                  if (((longlong)iVar16 < (longlong)uVar12) &&
                     (*(uint *)(plVar5[iVar17] + 0x90) <= *(uint *)(plVar5[iVar16] + 0x90))) {
                    iVar11 = iVar16;
                  }
                  lVar28 = plVar5[iVar8];
                  if (*(uint *)(plVar5[iVar11] + 0x90) <= *(uint *)(lVar28 + 0x90)) break;
                  plVar5[iVar8] = plVar5[iVar11];
                  plVar5[iVar11] = lVar28;
                  iVar16 = iVar11 * 2;
                  iVar17 = iVar11 * 2 + 1;
                  iVar8 = iVar11;
                } while ((longlong)iVar17 < (longlong)uVar12);
                lVar28 = *plVar5;
                *plVar5 = plVar5[uVar21 - 2];
                plVar5[uVar21 - 2] = lVar28;
                uVar21 = uVar12;
              } while (2 < uVar12);
            }
          }
        }
LAB_14015aea7:
        ppvVar4 = ppvVar4 + -3;
      } while (&local_368 <= ppvVar4);
      param_1 = local_388;
    }
    pvVar2 = local_378;
    if ((int)uStack_370 != 0) {
      lVar28 = (longlong)(int)uStack_370;
      lVar23 = 0;
      do {
        FUN_144911efa(param_1,*(undefined8 *)((longlong)pvVar2 + lVar23));
        lVar23 = lVar23 + 8;
      } while (lVar28 * 8 != lVar23);
    }
    if (local_378 != (void *)0x0) {
      FUN_1400020a8(local_378);
    }
  }
  else {
    iVar16 = *(int *)(param_1 + 0x10);
    if (iVar16 != 0) {
      lVar28 = *(longlong *)(param_1 + 8);
      iVar8 = (iVar16 - (iVar16 + -2 >> 0x1f)) + -2 >> 1;
      iVar17 = iVar8;
joined_r0x00014015a9c2:
      do {
        iVar11 = iVar8 * 2 + 1;
        if (iVar11 < iVar16) {
          iVar25 = iVar8 * 2 + 2;
          if (iVar25 < iVar16) {
            lVar23 = *(longlong *)(lVar28 + (longlong)iVar25 * 8);
            lVar18 = *(longlong *)(lVar28 + (longlong)iVar11 * 8);
            iVar1 = *(int *)(lVar18 + 0x94);
            iVar26 = *(int *)(lVar23 + 0x94);
            bVar29 = iVar26 < iVar1;
            if (iVar1 == iVar26) {
              bVar29 = *(uint *)(lVar18 + 0x90) < *(uint *)(lVar23 + 0x90);
            }
            if (!bVar29) {
              iVar11 = iVar25;
            }
          }
          lVar23 = *(longlong *)(lVar28 + (longlong)iVar8 * 8);
          lVar18 = *(longlong *)(lVar28 + (longlong)iVar11 * 8);
          bVar29 = *(int *)(lVar23 + 0x94) < *(int *)(lVar18 + 0x94);
          if (*(int *)(lVar18 + 0x94) == *(int *)(lVar23 + 0x94)) {
            bVar29 = *(uint *)(lVar18 + 0x90) < *(uint *)(lVar23 + 0x90);
          }
          if (bVar29) {
            *(longlong *)(lVar28 + (longlong)iVar8 * 8) = lVar18;
            *(longlong *)(lVar28 + (longlong)iVar11 * 8) = lVar23;
            iVar8 = iVar11;
            goto joined_r0x00014015a9c2;
          }
        }
        bVar29 = iVar17 != 0;
        iVar8 = iVar17 + -1;
        iVar17 = iVar8;
      } while (bVar29);
    }
  }
  LeaveCriticalSection(local_380);
  if ((local_60 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14015ac61:
  lVar28 = *plVar9;
  *plVar9 = *plVar22;
  *plVar22 = lVar28;
  iVar16 = iVar16 + -1;
  plVar15 = plVar15 + -2;
  if ((longlong)plVar24 - (longlong)plVar27 < (longlong)plVar6 - (longlong)plVar10) {
    if (plVar5 < plVar14) {
      *ppvVar4 = plVar5;
      ppvVar4[1] = plVar14;
      *(int *)(ppvVar4 + 2) = iVar16;
      ppvVar4 = ppvVar4 + 3;
    }
    plVar5 = plVar9;
    plVar6 = plVar24;
    if (plVar22 <= plVar9 + 1) goto LAB_14015aea7;
  }
  else {
    if (plVar9 + 1 < plVar22) {
      *ppvVar4 = plVar9;
      ppvVar4[1] = plVar15;
      *(int *)(ppvVar4 + 2) = iVar16;
      ppvVar4 = ppvVar4 + 3;
    }
    plVar9 = plVar10;
    plVar15 = plVar14;
    plVar6 = plVar14;
    if (plVar14 <= plVar5) goto LAB_14015aea7;
  }
  iVar8 = (int)((ulonglong)((longlong)plVar6 - (longlong)plVar9) >> 3);
  uVar21 = (ulonglong)(iVar8 + 1);
  plVar14 = plVar15;
  plVar27 = plVar9;
  if (iVar16 == 0) goto LAB_14015acf4;
  goto LAB_14015abc6;
}



// FUNCTION 14015af38 FUN_14015af38 body=90 status=ok
// SIG undefined FUN_14015af38(void)

int FUN_14015af38(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if (*(int *)(lVar2 + 8 + lVar4) == (int)param_3[1] &&
            *(longlong *)(lVar2 + lVar4) == *param_3) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14015af92 FUN_14015af92 body=503 status=ok
// SIG undefined FUN_14015af92(void)

void FUN_14015af92(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x48);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 9) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 8;
    _Src = *(void **)((longlong)param_1 + 0x40);
joined_r0x00014015b122:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (8 < *(uint *)((longlong)param_1 + 0x4c)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_14015b020;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_14015b020:
    uVar8 = uVar8 >> 3;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x40);
    }
    else {
      *(uint *)((longlong)param_1 + 0x4c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x40);
      if (uVar6 < 9) goto joined_r0x00014015b122;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x40,0,uVar8,8);
      memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,uVar8,8);
  return;
}



// FUNCTION 14015b18a FUN_14015b18a body=429 status=ok
// SIG undefined FUN_14015b18a(void)

void FUN_14015b18a(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x48);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar1 < 3) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 2;
    _Src = *(void **)((longlong)param_1 + 0x40);
joined_r0x00014015b2d0:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    uVar4 = 0;
  }
  else {
    if (*(uint *)((longlong)param_1 + 0x4c) < 3) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
    uVar4 = uVar4 >> 5;
    uVar2 = (uint)uVar4;
    if ((int)uVar2 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0x7fffffff;
      uVar4 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x40);
    }
    else {
      *(uint *)((longlong)param_1 + 0x4c) = uVar2;
      _Src = *(void **)((longlong)param_1 + 0x40);
      if (uVar2 < 3) goto joined_r0x00014015b2d0;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x40,0,uVar4,0x20);
      memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 5);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,uVar4,0x20);
  return;
}



// FUNCTION 14015b338 FUN_14015b338 body=649 status=ok
// SIG undefined FUN_14015b338(void)

void FUN_14015b338(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar8 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar8,4);
    if ((int)uVar8 < 1) goto LAB_14015b3ab;
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
  } while (uVar8 != uVar3);
LAB_14015b3ab:
  iVar15 = (int)param_1[5];
  if (iVar15 == 0) {
    uVar4 = 0;
    uVar12 = 1;
    iVar14 = 0;
    iVar5 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 2);
    }
    uVar8 = *puVar11;
    if (uVar8 == 0) {
      iVar14 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar14 = iVar15 + -1;
      }
      uVar4 = 0;
      uVar12 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar12 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar12 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar8 = puVar11[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar12 = (ulonglong)(-uVar8 & uVar8);
    uVar16 = uVar12 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar14 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar14) {
      iVar14 = iVar15;
    }
  }
  if (iVar14 < iVar15) {
    uVar8 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar13 = (longlong)iVar14;
      uVar2 = *(undefined8 *)(lVar7 + lVar13 * 0x18);
      uVar16 = (longlong)((int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2) &
               (longlong)(int)param_1[9] - 1U;
      iVar15 = (int)uVar16;
      *(int *)(lVar7 + 0x14 + lVar13 * 0x18) = iVar15;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar7 + 0x10 + lVar13 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar15 & (longlong)(int)param_1[9] - 1U) * 4) = iVar14;
      uVar8 = ~(uint)uVar12 & uVar8;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 2);
      }
      iVar15 = (int)param_1[5];
      iVar14 = (int)uVar4;
      lVar7 = (longlong)iVar14;
      uVar3 = puVar11[lVar7] & uVar8;
      if (uVar3 == 0) {
        iVar9 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar9 = iVar15 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar14) {
          iVar10 = iVar14;
        }
        if (iVar9 <= iVar14) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar11[lVar7 + lVar13 + 1];
          if (uVar3 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar10 - lVar7 == lVar13) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar14 + (int)lVar13 + 1);
        uVar8 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar16 = uVar12 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar14 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar15);
  }
  return;
}



// FUNCTION 14015b5c2 FUN_14015b5c2 body=402 status=ok
// SIG undefined FUN_14015b5c2(void)

undefined8 * FUN_14015b5c2(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_14015b81e();
  *param_1 = 0x14adf3f50;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_14015b754(param_1 + 0x34);
  param_1[0x34] = &PTR_FUN_14adfe8b0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  FUN_14015b754(param_1 + 0x89);
  param_1[0x89] = &PTR_FUN_14adfe8b0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  uVar3 = 0;
  param_1[0xe8] = 0;
  iVar1 = rand();
  *(int *)(param_1 + 0xe9) = iVar1;
  *(uint *)((longlong)param_1 + 0x74c) = 0;
  *(uint *)(param_1 + 0xea) = 0;
  *(uint *)((longlong)param_1 + 0x754) = 0;
  *(uint *)(param_1 + 0xeb) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x75c) = 0;
  *(uint *)((longlong)param_1 + 0x764) = *(uint *)((longlong)param_1 + 0x764) & 0xfffffff8 | 6;
  *(undefined1 *)(param_1 + 0xed) = 0;
  param_1[0xf2] = 0;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7a4) = 0;
  param_1[0xf6] = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0;
  lVar2 = FUN_14001cc68(0xb8,0x10);
  *(undefined4 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined4 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x1c) = 0;
  *(undefined8 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x5c) = 0;
  *(undefined8 *)(lVar2 + 100) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0xa4) = 0xffffffff00000002;
  *(undefined4 *)(lVar2 + 0xac) = 0xffffffff;
  *(undefined1 *)(lVar2 + 0xb0) = 0;
  *(undefined8 **)(lVar2 + 8) = &DAT_14cb3db48;
  param_1[2] = lVar2;
  if (param_1[1] != 0) {
    uVar3 = *(undefined8 *)(param_1[1] + 0x870);
  }
  param_1[0xe6] = uVar3;
  return param_1;
}



// FUNCTION 14015b754 FUN_14015b754 body=201 status=ok
// SIG undefined FUN_14015b754(void)

void FUN_14015b754(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ae15620;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 0xf;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[7] = &PTR_FUN_14ae15b00;
  param_1[0x18] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfe;
  param_1[0x42] = 0;
  param_1[0x43] = 0x200000000;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0x200000000;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(uint *)((longlong)param_1 + 0x264) = *(uint *)((longlong)param_1 + 0x264) & 0xfffffff1 | 2;
  *(undefined1 *)(param_1 + 0x4d) = 1;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  return;
}



// FUNCTION 14015b81e FUN_14015b81e body=282 status=ok
// SIG undefined FUN_14015b81e(void)

undefined8 * FUN_14015b81e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_LAB_14ae00170;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = &PTR_LAB_14ae02690;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 0xf;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xf0 | 3;
  *(undefined1 *)((longlong)param_1 + 0xd1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x2a));
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  return param_1;
}



// FUNCTION 14015b938 FUN_14015b938 body=77 status=ok
// SIG undefined FUN_14015b938(void)

void FUN_14015b938(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  uVar2 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  FUN_14015b986();
  *(uint *)(param_2 + 0x50) = DAT_14cb3adec + uVar2;
                    /* WARNING: Could not recover jumptable at 0x00014015b982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe0))
            (plVar1,(ulonglong)uVar2 + *(longlong *)(param_2 + 0x38),
             *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10));
  return;
}



// FUNCTION 14015b986 FUN_14015b986 body=258 status=ok
// SIG undefined FUN_14015b986(void)

void FUN_14015b986(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3ae30) {
    FUN_144b3d300(&DAT_14cb3ae30);
    if (DAT_14cb3ae30 == -1) {
      FUN_1456d1a00(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x30;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3adb0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a0d3b3);
      _Init_thread_footer(&DAT_14cb3ae30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14015bc88 FUN_14015bc88 body=124 status=ok
// SIG undefined FUN_14015bc88(void)

void FUN_14015bc88(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x2b8))();
  lVar2 = param_1[0x17];
  if (lVar2 != 0) {
    plVar4 = (longlong *)FUN_14015bd0c(param_3);
    *plVar4 = lVar2;
    iVar1 = (int)plVar4[6];
    *(uint *)(plVar4 + 6) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar4 + 0x34) < iVar1 + 1U) {
      FUN_140df0cf8(plVar4 + 1,iVar1);
    }
    plVar5 = plVar4 + 1;
    if ((longlong *)plVar4[5] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar4[5];
    }
    plVar5[(longlong)iVar1 * 2] = lVar3;
    plVar5[(longlong)iVar1 * 2 + 1] = 0;
  }
  return;
}



// FUNCTION 14015bd0c FUN_14015bd0c body=77 status=ok
// SIG undefined FUN_14015bd0c(void)

longlong FUN_14015bd0c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar1 + 1U) {
    FUN_14015bd7e(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x38 + lVar2;
  FUN_14015bd59(lVar2,1);
  return lVar2;
}



// FUNCTION 14015bd59 FUN_14015bd59 body=36 status=ok
// SIG undefined FUN_14015bd59(void)

void FUN_14015bd59(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[5] = 0;
    param_1[6] = 0x200000000;
    param_1 = param_1 + 7;
  }
  return;
}



// FUNCTION 14015bd7e FUN_14015bd7e body=373 status=ok
// SIG undefined FUN_14015bd7e(void)

void FUN_14015bd7e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 0x78);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar3 < 3) {
    iVar10 = 2;
  }
  else {
    if (*(uint *)(param_1 + 0x7c) < 3) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
      lVar6 = (longlong)(int)uVar5;
    }
    else {
      lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
    }
    uVar7 = lVar6 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar7 + 0xf;
        if (uVar7 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar9 = 0x32;
            if (0x32 < bVar2) {
              uVar9 = (ulonglong)bVar2;
            }
            uVar11 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_14015be0c;
              lVar6 = uVar9 + 1 + uVar11;
              uVar11 = uVar11 - 1;
            } while (lVar6 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
      }
    }
LAB_14015be0c:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar7 >> 3;
    iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar10 = 0x7fffffff;
    if ((int)uVar3 <= iVar8) {
      iVar10 = iVar8;
    }
  }
  *(int *)(param_1 + 0x7c) = iVar10;
  FUN_14015bef4(param_1,param_2,iVar10,0x38);
  return;
}



// FUNCTION 14015bef4 FUN_14015bef4 body=136 status=ok
// SIG undefined FUN_14015bef4(void)

void FUN_14015bef4(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x70);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x70,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x70),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x70,param_2,param_3,param_4);
  return;
}



// FUNCTION 14015bf82 FUN_14015bf82 body=57 status=ok
// SIG undefined FUN_14015bf82(void)

void FUN_14015bf82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6d990 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6d990 = FUN_140002ddd(FUN_146536cae,uVar1,L"GbxActivityAreaStampDef");
  }
  return;
}



// FUNCTION 14015bfbc FUN_14015bfbc body=544 status=ok
// SIG undefined FUN_14015bfbc(void)

void FUN_14015bfbc(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  iVar1 = *(int *)(param_1 + 0xd8);
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  local_30 = iVar1;
  if (iVar1 == 0) {
    local_2c = 0;
    uVar2 = 0;
  }
  else {
    FUN_14692a1ba(&local_38,iVar1);
    FUN_14692a212(local_38,uVar4,iVar1);
    uVar2 = *(undefined4 *)(param_1 + 0xd8);
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
  }
  FUN_14015c209(uVar4,uVar2);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_14692a260(param_1 + 0xd0);
  }
  if (0 < local_30) {
    lVar5 = 0;
    lVar3 = 0;
    do {
      FUN_14095a2c4(param_1,local_38 + lVar5);
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x40;
    } while (lVar3 < local_30);
  }
  FUN_14015c242(param_1,0xa0);
  FUN_14015c242(param_1,0xa1);
  FUN_14015c209(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  iVar1 = *(int *)(param_1 + 0xe8);
  uVar4 = *(undefined8 *)(param_1 + 0xe0);
  local_30 = iVar1;
  if (iVar1 == 0) {
    local_2c = 0;
    uVar2 = 0;
  }
  else {
    FUN_14692a290(&local_38,iVar1);
    FUN_14692a2fa(local_38,uVar4,iVar1);
    uVar2 = *(undefined4 *)(param_1 + 0xe8);
    uVar4 = *(undefined8 *)(param_1 + 0xe0);
  }
  FUN_14015c1dd(uVar4,uVar2);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) != 0) {
    FUN_14692a3ea(param_1 + 0xe0);
  }
  if (0 < local_30) {
    lVar5 = 0;
    lVar3 = 0;
    do {
      FUN_14691a008(param_1,local_38 + lVar5);
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x48;
    } while (lVar3 < local_30);
  }
  FUN_14015c1dd(local_38);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14015c1dd FUN_14015c1dd body=44 status=ok
// SIG undefined FUN_14015c1dd(void)

void FUN_14015c1dd(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_146929ef0(param_1);
      param_1 = param_1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14015c209 FUN_14015c209 body=56 status=ok
// SIG undefined FUN_14015c209(void)

void FUN_14015c209(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14015c242 FUN_14015c242 body=273 status=ok
// SIG undefined FUN_14015c242(void)

void FUN_14015c242(longlong param_1,int param_2)

{
  void *_Src;
  SHORT SVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  void **local_78;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x121 + (ulonglong)(param_2 != 0xa0)) == '\x01') {
    SVar1 = GetKeyState(param_2);
    if (-1 < SVar1) {
      *(undefined1 *)(param_1 + 0x121 + (ulonglong)(param_2 != 0xa0)) = 0;
      _Src = DAT_14c967228;
      local_68 = (void *)0x0;
      lVar3 = (longlong)DAT_14c967230;
      local_60 = DAT_14c967230;
      if (lVar3 == 0) {
        local_5c = 0;
      }
      else {
        FUN_1446dd670(&local_68,DAT_14c967230,0);
        memcpy(local_68,_Src,lVar3 * 2);
      }
      plVar2 = (longlong *)FUN_144a81a0a();
      (**(code **)(*plVar2 + 0x50))(plVar2,&local_6c);
      local_78 = &local_68;
      FUN_1415e91ea(local_58,0,DAT_14c967220,local_6c);
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                (*(longlong **)(param_1 + 0x18),param_2,0,0);
      FUN_14011623c(local_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14015c354 FUN_14015c354 body=25 status=ok
// SIG undefined FUN_14015c354(void)

bool FUN_14015c354(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x498))();
  return (byte)(cVar1 - 6U) < 3;
}



// FUNCTION 14015c376 FUN_14015c376 body=77 status=ok
// SIG undefined FUN_14015c376(void)

void FUN_14015c376(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_144757aec();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_1471797fc();
      return;
    }
  }
  return;
}



// FUNCTION 14015c3c4 FUN_14015c3c4 body=146 status=ok
// SIG undefined FUN_14015c3c4(void)

undefined8 * FUN_14015c3c4(undefined8 *param_1,longlong *param_2)

{
  FUN_144869430();
  *param_1 = &PTR_FUN_149e68390;
  param_1[0x12] = DAT_14c844ed8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1[1] + 0x10) = *(undefined8 *)*param_2;
  *(undefined8 *)param_1[1] = ((undefined8 *)param_1[1])[2];
  param_2 = (longlong *)*param_2;
  *(ulonglong *)(param_1[1] + 8) = (ulonglong)CONCAT14((char)param_2[3],(int)param_2[1]) + *param_2;
  return param_1;
}



// FUNCTION 14015c456 FUN_14015c456 body=1684 status=ok
// SIG undefined FUN_14015c456(void)

/* WARNING: Removing unreachable block (ram,0x00014015caab) */
/* WARNING: Removing unreachable block (ram,0x00014015cabe) */
/* WARNING: Removing unreachable block (ram,0x00014015cac2) */
/* WARNING: Removing unreachable block (ram,0x00014015cacd) */
/* WARNING: Removing unreachable block (ram,0x00014015cadc) */
/* WARNING: Removing unreachable block (ram,0x00014015cae0) */

void FUN_14015c456(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_1b8 [40];
  longlong *local_190;
  longlong local_188;
  longlong local_180;
  code *local_178;
  longlong local_170;
  longlong local_168;
  longlong *local_160;
  longlong local_158;
  undefined1 local_14c [4];
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  code *local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_168 = param_1 + 0x228;
  FUN_1408d9e0e(local_168,0);
  local_180 = param_1 + 0x2c8;
  FUN_140e5127a(local_180,0);
  local_188 = param_1 + 0x278;
  FUN_140e5127a(local_188,0);
  puStack_80 = uStack_c0;
  plVar11 = *(longlong **)(param_2 + 0x28);
  local_68 = (undefined4)local_a8;
  uStack_64 = local_a8._4_4_;
  uStack_60 = (undefined4)uStack_a0;
  uStack_5c = uStack_a0._4_4_;
  local_58 = (undefined4)local_98;
  uStack_54 = local_98._4_4_;
  uStack_50 = (undefined4)uStack_90;
  uStack_4c = uStack_90._4_4_;
  uStack_70 = (undefined4)uStack_b0;
  uStack_6c = uStack_b0._4_4_;
  local_78 = 0;
  uStack_74 = 0;
  uStack_13c = uStack_c0._4_4_;
  local_88 = 0;
  local_b8 = (longlong *)0x0;
  uStack_b0 = uStack_f0;
  local_c8 = FUN_143d891ac;
  uStack_c0 = (undefined8 *)uStack_100;
  local_a8 = &PTR_LAB_14b40e6c0;
  uStack_a0 = param_1;
  local_98 = &local_c8;
  uStack_90 = uStack_d0;
  local_108 = (code *)0x0;
  uStack_140 = SUB84(puStack_80,0);
  uStack_100._0_4_ = uStack_140;
  uStack_100._4_4_ = uStack_13c;
  local_d8._0_4_ = local_58;
  local_d8._4_4_ = uStack_54;
  uStack_d0._0_4_ = uStack_50;
  uStack_d0._4_4_ = uStack_4c;
  local_e8._0_4_ = local_68;
  local_e8._4_4_ = uStack_64;
  uStack_e0._0_4_ = uStack_60;
  uStack_e0._4_4_ = uStack_5c;
  local_f8 = (longlong *)0x0;
  uStack_f0._0_4_ = uStack_70;
  uStack_f0._4_4_ = uStack_6c;
  local_d8 = &local_108;
  local_78 = 0;
  uStack_74 = 0;
  local_88 = 0;
  local_f8 = (longlong *)0x0;
  local_108 = FUN_143d892b8;
  local_e8 = &PTR_LAB_14b40e6e0;
  uStack_e0 = param_1;
  uStack_110 = uStack_50;
  uStack_10c = uStack_4c;
  uStack_74 = 0;
  local_78 = 0;
  local_88 = 0;
  local_a8 = &PTR_LAB_14b40e6c0;
  local_b8 = (longlong *)0x0;
  local_c8 = FUN_143d891ac;
  local_e8 = &PTR_LAB_14b40e6e0;
  local_f8 = (longlong *)0x0;
  local_108 = FUN_143d892b8;
  uStack_12c = uStack_6c;
  uStack_130 = uStack_70;
  local_138 = 0;
  local_148 = 0;
  if (*(int *)(param_2 + 0x30) != 0) {
    plVar10 = plVar11 + *(int *)(param_2 + 0x30);
    local_190 = plVar10;
    local_158 = param_1;
    do {
      lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x220) + 0x98);
      if (lVar7 != 0) {
        plVar3 = (longlong *)*plVar11;
        plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 0x90);
        lVar7 = lVar7 * 0x18;
        do {
          lVar9 = *plVar13;
          if (lVar9 != 0) {
            plVar4 = (longlong *)plVar13[1];
            if (plVar4 == (longlong *)0x0) {
              if (*(longlong *)(lVar9 + 8) == plVar3[2]) goto LAB_14015c6ef;
            }
            else {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
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
                plVar10 = local_190;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                  plVar10 = local_190;
                }
              }
              lVar12 = plVar3[2];
              lVar9 = *(longlong *)(lVar9 + 8);
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
                plVar10 = local_190;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                  plVar10 = local_190;
                }
              }
              if (lVar9 == lVar12) {
LAB_14015c6ef:
                if (plVar13 != (longlong *)0x0) {
                  lVar7 = *plVar13;
                  plVar4 = (longlong *)plVar13[1];
                  if (plVar4 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                    UNLOCK();
                    LOCK();
                    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                    UNLOCK();
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
                      plVar10 = local_190;
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar4 + 0x10))(plVar4);
                        plVar10 = local_190;
                      }
                    }
                  }
                  local_160 = plVar4;
                  if (lVar7 != 0) {
                    local_88 = plVar3[2];
                    FUN_144869592(local_168,&local_148,&local_88,0);
                    if ((*(char *)(lVar7 + 0x10) == '\x01') &&
                       (lVar9 = plVar3[6], (longlong)(int)lVar9 != 0)) {
                      lVar12 = plVar3[5];
                      lVar14 = 0;
                      do {
                        if ((*(char *)(lVar12 + 8 + lVar14) == '\x02') &&
                           (local_170 = *(longlong *)(lVar12 + lVar14), local_170 != 0)) {
                          local_178 = local_c8;
                          plVar10 = local_b8;
                          if (local_b8 == (longlong *)0x0) {
                            plVar10 = &local_a8;
                          }
                          uVar8 = (**(code **)(*plVar10 + 8))();
                          (*local_178)(uVar8,local_170);
                        }
                        lVar14 = lVar14 + 0x20;
                      } while ((longlong)(int)lVar9 * 0x20 != lVar14);
                    }
                    plVar10 = local_190;
                    if ((*(char *)(lVar7 + 0x11) == '\x01') &&
                       (lVar7 = plVar3[6], (longlong)(int)lVar7 != 0)) {
                      lVar9 = plVar3[5];
                      lVar12 = 0;
                      do {
                        pcVar5 = local_108;
                        if ((*(char *)(lVar9 + 8 + lVar12) == '\x03') &&
                           (lVar14 = *(longlong *)(lVar9 + lVar12), lVar14 != 0)) {
                          plVar10 = local_f8;
                          if (local_f8 == (longlong *)0x0) {
                            plVar10 = &local_e8;
                          }
                          uVar8 = (**(code **)(*plVar10 + 8))();
                          (*pcVar5)(uVar8,lVar14);
                          plVar10 = local_190;
                          param_1 = local_158;
                        }
                        lVar12 = lVar12 + 0x20;
                      } while ((longlong)(int)lVar7 * 0x20 != lVar12);
                    }
                  }
                  plVar4 = local_160;
                  if (local_160 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_160 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*local_160)(local_160);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar4 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      plVar10 = local_190;
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar4 + 0x10))(plVar4);
                        plVar10 = local_190;
                      }
                    }
                  }
                  lVar7 = *plVar13;
                  if (lVar7 != 0) {
                    uVar8 = FUN_14015caec();
                    cVar6 = FUN_1448093f4(lVar7,uVar8);
                    plVar10 = local_190;
                    if (cVar6 != '\0') {
                      lVar7 = *plVar13;
                      plVar13 = (longlong *)plVar13[1];
                      if (plVar13 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                        UNLOCK();
                      }
                      if ((lVar7 != 0) && (plVar3 != (longlong *)0x0)) {
                        lVar9 = (**(code **)(*plVar3 + 8))(plVar3);
                        lVar12 = FUN_1400b4ed2();
                        if ((lVar12 != 0) &&
                           ((*(int *)(lVar12 + 0x38) <= *(int *)(lVar9 + 0x38) &&
                            (*(longlong *)
                              (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8)
                             == lVar12 + 0x30)))) {
                          if (*(longlong *)(lVar7 + 0x18) == 0) {
                            FUN_1456d1d26(plVar3,&local_148);
                            local_88 = (longlong)plVar3 + 0x44;
                            puStack_80 = &local_148;
                            FUN_140db3efa(local_188,local_14c,&local_88);
                          }
                          else {
                            puStack_80 = (undefined8 *)(lVar7 + 0x18);
                            local_88 = (longlong)plVar3 + 0x44;
                            FUN_140906722(local_180,&local_148,&local_88);
                          }
                        }
                      }
                      plVar10 = local_190;
                      if (plVar13 != (longlong *)0x0) {
                        LOCK();
                        plVar3 = plVar13 + 1;
                        *(int *)plVar3 = (int)*plVar3 + -1;
                        UNLOCK();
                        if ((int)*plVar3 == 0) {
                          (**(code **)*plVar13)(plVar13);
                          LOCK();
                          piVar2 = (int *)((longlong)plVar13 + 0xc);
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          plVar10 = local_190;
                          if (*piVar2 == 0) {
                            (**(code **)(*plVar13 + 0x10))(plVar13);
                            plVar10 = local_190;
                          }
                        }
                      }
                    }
                  }
                }
                break;
              }
            }
          }
          plVar13 = plVar13 + 3;
          lVar7 = lVar7 + -0x18;
        } while (lVar7 != 0);
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar10);
  }
  if (local_108 != (code *)0x0) {
    plVar11 = &local_e8;
    if (local_f8 != (longlong *)0x0) {
      plVar11 = local_f8;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_c8 != (code *)0x0) {
    plVar11 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar11 = &local_a8;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14015caec FUN_14015caec body=57 status=ok
// SIG undefined FUN_14015caec(void)

void FUN_14015caec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66438 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66438 = FUN_140002ddd(FUN_14650ecdc,uVar1,L"GbxStandInBodyNode_Switch");
  }
  return;
}



// FUNCTION 14015cb2a FUN_14015cb2a body=15 status=ok
// SIG undefined FUN_14015cb2a(void)

void FUN_14015cb2a(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}



// FUNCTION 14015cb39 FUN_14015cb39 body=114 status=ok
// SIG undefined FUN_14015cb39(void)

longlong * FUN_14015cb39(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_1 + 0x160))();
  if ((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0) {
    puVar2 = (undefined4 *)(param_2 + 8);
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
      }
      else {
        thunk_FUN_14572512c(param_1,puVar2);
      }
    }
    else {
      *puVar2 = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  return param_1;
}



// FUNCTION 14015cbac FUN_14015cbac body=71 status=ok
// SIG undefined FUN_14015cbac(void)

void FUN_14015cbac(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14015d11a();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_1478faf44();
      return;
    }
  }
  return;
}



// FUNCTION 14015cbf8 FUN_14015cbf8 body=282 status=ok
// SIG undefined FUN_14015cbf8(void)

void FUN_14015cbf8(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = param_2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = (longlong)(int)param_2 + 0xf;
        if (param_2 < 0x7ff1) {
          uVar3 = (uint)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar2) {
              uVar6 = (ulonglong)bVar2;
            }
            uVar7 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (uint)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14015cc5c;
              lVar1 = uVar6 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar1 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = DAT_14c841df8;
          }
          uVar3 = -uVar5 & ((int)(uVar4 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(longlong)(int)param_2,0);
      }
    }
LAB_14015cc5c:
    uVar5 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar3) {
      uVar5 = uVar3;
    }
  }
  if (uVar5 == *(uint *)(param_1 + 0x1c)) {
    return;
  }
  *(uint *)(param_1 + 0x1c) = uVar5;
  FUN_14015cd12(param_1);
  return;
}



// FUNCTION 14015cd12 FUN_14015cd12 body=117 status=ok
// SIG undefined FUN_14015cd12(void)

void FUN_14015cd12(longlong *param_1,int param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[2];
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[1];
    if (puVar3 == (undefined8 *)0x0) {
      if (param_2 == 0 && *param_1 == 0) {
        return;
      }
      if (param_2 < 0) {
        FUN_1478e0269(param_2);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar2 = FUN_14001fdce(*param_1,param_2,0);
      goto LAB_14015cd4e;
    }
LAB_14015cd6a:
    (**(code **)*puVar3)(puVar3,1);
  }
  else {
    (**(code **)*puVar3)(puVar3,1);
    puVar3 = (undefined8 *)param_1[1];
    if (puVar3 != (undefined8 *)0x0) goto LAB_14015cd6a;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = 0;
LAB_14015cd4e:
  *param_1 = lVar2;
  return;
}



// FUNCTION 14015cd88 FUN_14015cd88 body=306 status=ok
// SIG undefined FUN_14015cd88(void)

void FUN_14015cd88(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14015cdf1;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_14015cdf1:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,4,4);
  }
  return;
}



// FUNCTION 14015ceba FUN_14015ceba body=221 status=ok
// SIG undefined FUN_14015ceba(void)

longlong * FUN_14015ceba(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_30);
  if (local_28 == (int)param_2[1]) {
    if (local_28 < 2) {
      bVar8 = true;
    }
    else {
      lVar6 = 0;
      while( true ) {
        uVar1 = *(ushort *)(local_30 + lVar6);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)(*param_2 + lVar6);
        uVar7 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14015cf24;
          }
          iVar4 = uVar3 - uVar7;
          goto LAB_14015cf4f;
        }
        if (uVar1 == 0) break;
LAB_14015cf24:
        lVar6 = lVar6 + 2;
      }
      iVar4 = 0;
LAB_14015cf4f:
      bVar8 = iVar4 == 0;
    }
  }
  else {
    bVar8 = (int)param_2[1] + local_28 == 1;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)0x0;
  if (bVar8) {
    plVar5 = param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14015cf98 FUN_14015cf98 body=162 status=ok
// SIG undefined FUN_14015cf98(void)

undefined8 * FUN_14015cf98(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446f8c06(param_2,0x81);
  while( true ) {
    local_20 = *(undefined8 *)(param_1 + 0x18);
    FUN_140180cec(&local_20,param_2);
    param_1 = *(longlong *)(param_1 + 0x20);
    if (param_1 == 0) break;
    lVar1 = FUN_14015d03c();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) break;
    FUN_1400020e8(param_2,&DAT_149e0635c,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14015d03c FUN_14015d03c body=221 status=ok
// SIG undefined FUN_14015d03c(void)

longlong FUN_14015d03c(void)

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
  if (DAT_14cacb170 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478defa7;
    local_40 = FUN_1463a1846;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"AnimBoneCompressionSettings",&DAT_14cacb170,&DAT_1478defa6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacb170;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14015d11a FUN_14015d11a body=93 status=ok
// SIG undefined FUN_14015d11a(void)

void FUN_14015d11a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_14015d2bc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14015d178 FUN_14015d178 body=323 status=ok
// SIG undefined FUN_14015d178(void)

void FUN_14015d178(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14015d1e5;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_14015d1e5:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0xc)) {
      uVar5 = uVar3 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0xc,4);
  }
  return;
}



// FUNCTION 14015d2bc FUN_14015d2bc body=404 status=ok
// SIG undefined FUN_14015d2bc(void)

void FUN_14015d2bc(undefined8 *param_1,int param_2,int param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  DWORD DVar3;
  uint uVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_88 [44];
  int local_5c;
  void *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0) {
    if ((param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,param_4);
    }
    local_58 = (void *)*param_1;
    dwTlsIndex = DAT_14c7585d0;
    local_5c = param_2;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar5 = 0xffffffff;
      LOCK();
      bVar10 = DAT_14c7585d0 != 0xffffffff;
      DVar3 = dwTlsIndex;
      if (bVar10) {
        DVar5 = DAT_14c7585d0;
        DVar3 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar3;
      UNLOCK();
      if (bVar10) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar5;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    puVar1 = (ulonglong *)((longlong)lpTlsValue + 0x10);
    uVar4 = (int)param_4 * param_3;
    uVar7 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar6 = (uint)(uVar4 >= 0x10) * 8;
    lVar2 = (ulonglong)uVar6 + 7;
    _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar2 & uVar7);
    uVar8 = (longlong)_Dst + (longlong)(int)uVar4;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar8) {
      FUN_140023dd8(puVar1,uVar6 + 8 + uVar4);
      _Dst = (void *)(lVar2 + *puVar1 & uVar7);
      uVar8 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar1 = uVar8;
    *param_1 = _Dst;
    if (local_5c != 0 && local_58 != (void *)0x0) {
      iVar9 = local_5c;
      if (param_3 < local_5c) {
        iVar9 = param_3;
      }
      memcpy(_Dst,local_58,iVar9 * param_4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14015d452 FUN_14015d452 body=389 status=ok
// SIG undefined FUN_14015d452(void)

void FUN_14015d452(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_1[0x27] != 0) && (lVar1 = (**(code **)(*param_1 + 0x200))(param_1), lVar1 != 0)) {
    FUN_14486b2ec(param_1[0x27] + 0x8e8,param_1 + 0x25,lVar1);
  }
  lVar1 = (**(code **)(*param_1 + 0x198))(param_1);
  if (((lVar1 == 0) || (param_1[0x27] == 0)) || (*(char *)((longlong)param_1 + 0x14c) == '\0')) {
    FUN_14015dac8(param_1,param_2);
    *(undefined4 *)(param_1 + 0x23) = 0;
  }
  else {
    (**(code **)(*param_1 + 0x1a0))(param_1,&local_30);
    if ((char)param_1[0x26] == '\x01') {
      local_30 = (double)*(float *)(param_1 + 0x28);
      uStack_28 = local_30;
    }
    else if ((char)param_1[0x26] == '\x02') {
      uStack_28 = (double)*(float *)(param_1 + 0x28);
    }
    if (*(char *)((longlong)param_1 + 0x131) == '\x02') {
      uStack_28 = (double)*(float *)((longlong)param_1 + 0x144);
    }
    else if (*(char *)((longlong)param_1 + 0x131) == '\x01') {
      local_30 = (double)*(float *)((longlong)param_1 + 0x144);
      uStack_28 = local_30;
    }
    local_38 = local_20;
    local_48 = (undefined4)local_30;
    uStack_44 = local_30._4_4_;
    uStack_40 = (undefined4)uStack_28;
    uStack_3c = uStack_28._4_4_;
    (**(code **)(*param_1 + 0x1e8))(param_1);
    FUN_14015dac8(param_1,param_2);
    *(float *)(param_1 + 0x23) = *(float *)(param_1 + 0x29) * *(float *)(param_1 + 0x23);
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14015d5de FUN_14015d5de body=1257 status=ok
// SIG undefined FUN_14015d5de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14015d5de(longlong param_1,double *param_2)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  float *pfVar7;
  longlong *plVar8;
  ulonglong uVar9;
  float *pfVar10;
  undefined1 auStack_68 [36];
  undefined8 local_44;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa79c) {
    FUN_144b3d300(&DAT_14caaa79c);
    if (DAT_14caaa79c == -1) {
      _DAT_14caaa790 = 0;
      DAT_14caaa798 = -1;
      _Init_thread_footer(&DAT_14caaa79c);
    }
  }
  if (DAT_14caaa798 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa7a8) {
      FUN_144b3d300(&DAT_14caaa7a8);
      if (DAT_14caaa7a8 == -1) {
        FUN_1446ddc76(&DAT_14caaa7a0,&DAT_149e4b0b8,1);
        _Init_thread_footer(&DAT_14caaa7a8);
      }
    }
    if (DAT_14caaa198 == 0) {
      uVar6 = FUN_140c6b56d();
      DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar6,L"AnimNode_BlendSpacePlayer");
    }
    FUN_14094e66e(&local_44,DAT_14caaa7a0,param_1,DAT_14caaa198);
    DAT_14caaa798 = local_3c;
    _DAT_14caaa790 = local_44;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  uVar1 = *(uint *)(plVar8[2] + (longlong)DAT_14caaa798 * 4);
  if ((int)uVar1 < 0) {
    lVar4 = *plVar8;
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)plVar8[1];
    }
    lVar3 = plVar8[4];
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar5 = plVar5 + 0x12;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      lVar4 = *plVar8;
    }
    uVar9 = (ulonglong)(uVar1 & 0x7fffffff);
    if (lVar4 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    lVar4 = param_1 - *(int *)(*(longlong *)(*plVar5 + (longlong)(int)lVar3 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar8 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar3 = *(longlong *)(plVar8[0x42] + uVar9 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar8[0x4a] == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = lVar4 + *(int *)(plVar8[0x4a] + 0x44);
        }
      }
      else {
        lVar4 = (*pcVar2)(plVar8,lVar4);
      }
      pfVar10 = (float *)(*(int *)(lVar3 + 0x44) + lVar4);
    }
    else {
      pfVar10 = (float *)(*pcVar2)(plVar8,uVar9,lVar4);
    }
  }
  else {
    pfVar10 = (float *)0x0;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa7bc) {
    FUN_144b3d300(&DAT_14caaa7bc);
    if (DAT_14caaa7bc == -1) {
      _DAT_14caaa7b0 = 0;
      DAT_14caaa7b8 = -1;
      _Init_thread_footer(&DAT_14caaa7bc);
    }
  }
  if (DAT_14caaa7b8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa7c8) {
      FUN_144b3d300(&DAT_14caaa7c8);
      if (DAT_14caaa7c8 == -1) {
        FUN_1446ddc76(&DAT_14caaa7c0,&DAT_149e4b0f8,1);
        _Init_thread_footer(&DAT_14caaa7c8);
      }
    }
    if (DAT_14caaa198 == 0) {
      uVar6 = FUN_140c6b56d();
      DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar6,L"AnimNode_BlendSpacePlayer");
    }
    FUN_14094e66e(&local_44,DAT_14caaa7c0,param_1,DAT_14caaa198);
    DAT_14caaa7b8 = local_3c;
    _DAT_14caaa7b0 = local_44;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  uVar1 = *(uint *)(plVar8[2] + (longlong)DAT_14caaa7b8 * 4);
  if ((int)uVar1 < 0) {
    lVar4 = *plVar8;
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)plVar8[1];
    }
    lVar3 = plVar8[4];
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar5 = plVar5 + 0x12;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      lVar4 = *plVar8;
    }
    uVar9 = (ulonglong)(uVar1 & 0x7fffffff);
    if (lVar4 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    param_1 = param_1 - *(int *)(*(longlong *)(*plVar5 + (longlong)(int)lVar3 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar8 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar4 = *(longlong *)(plVar8[0x42] + uVar9 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar8[0x4a] == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + *(int *)(plVar8[0x4a] + 0x44);
        }
      }
      else {
        param_1 = (*pcVar2)(plVar8,param_1);
      }
      pfVar7 = (float *)(*(int *)(lVar4 + 0x44) + param_1);
    }
    else {
      pfVar7 = (float *)(*pcVar2)(plVar8,uVar9,param_1);
    }
    uVar6 = 0;
    if ((pfVar10 != (float *)0x0) && (pfVar7 != (float *)0x0)) {
      *pfVar10 = (float)*param_2;
      *pfVar7 = (float)param_2[1];
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14015dac8 FUN_14015dac8 body=1419 status=ok
// SIG undefined FUN_14015dac8(void)

void FUN_14015dac8(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 0x23) = 0;
  plVar7 = (longlong *)*param_2;
  pcVar1 = *(code **)(*param_1 + 0x98);
  if (pcVar1 == (code *)&LAB_1400e9baa) {
    iVar5 = *(int *)((longlong)param_1 + 0xe4);
  }
  else if (pcVar1 == (code *)&LAB_1400e9bb2) {
    iVar5 = (int)param_1[5];
  }
  else if (pcVar1 == (code *)&LAB_1400e9bb6) {
    iVar5 = *(int *)((longlong)param_1 + 0x44);
  }
  else {
    iVar5 = (*pcVar1)(param_1);
  }
  if ((iVar5 != -1) && (iVar5 < (int)plVar7[0xd6])) {
    *(undefined1 *)((longlong)param_1 + 0x11e) = 0;
    goto LAB_14015dc1b;
  }
  bVar4 = *(byte *)(param_1 + 2);
  if ((bVar4 & 1) == 0) {
    uVar6 = (**(code **)(*param_1 + 8))(param_1);
    cVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7,uVar6,(longlong)param_1 + 0x11);
    bVar4 = (cVar3 * '\x02' | *(byte *)(param_1 + 2) & 0xfc) + 1;
    *(byte *)(param_1 + 2) = bVar4;
  }
  if ((bVar4 & 2) == 0) {
    *(undefined1 *)((longlong)param_1 + 0x11e) = 1;
  }
  else {
    cVar3 = (**(code **)(*plVar7 + 0xb8))(plVar7,*(undefined1 *)((longlong)param_1 + 0x11));
    *(char *)((longlong)param_1 + 0x11e) = cVar3;
    if (cVar3 == '\0') goto LAB_14015dc1b;
  }
  uVar6 = FUN_14477dc2a(param_1);
  FUN_14477dadc(uVar6,param_2);
  cVar3 = *(char *)((longlong)param_1 + 0x11c);
  if (cVar3 == '\0') {
    fVar9 = *(float *)((longlong)param_1 + 0x8c);
    if ((char)param_1[0x1d] == '\x01') {
      fVar13 = *(float *)(param_1 + 0x1e) - *(float *)((longlong)param_1 + 0xec);
      if (ABS(fVar13) <= 1e-08) {
        fVar13 = (float)(-(uint)(*(float *)(param_1 + 0x1e) <= fVar9) & 0x3f800000);
      }
      else {
        fVar13 = (fVar9 - *(float *)((longlong)param_1 + 0xec)) / fVar13;
      }
      fVar9 = (*(float *)(param_1 + 0x1f) - *(float *)((longlong)param_1 + 0xf4)) * fVar13 +
              *(float *)((longlong)param_1 + 0xf4);
    }
    fVar9 = fVar9 * *(float *)((longlong)param_1 + 0xfc) + *(float *)(param_1 + 0x20);
    if (*(char *)((longlong)param_1 + 0xe9) == '\x01') {
      if (*(float *)(param_1 + 0x21) <= fVar9) {
        fVar9 = *(float *)(param_1 + 0x21);
      }
      if (fVar9 <= *(float *)((longlong)param_1 + 0x104)) {
        fVar9 = *(float *)((longlong)param_1 + 0x104);
      }
    }
    if (*(char *)((longlong)param_1 + 0xea) == '\x01') {
      if (*(char *)((longlong)param_1 + 0xeb) == '\x01') {
        fVar13 = *(float *)((longlong)param_1 + 0x114);
        fVar10 = *(float *)((longlong)param_1 + (ulonglong)(fVar9 < fVar13) * 4 + 0x10c);
        if ((0.0 < fVar10) && (fVar12 = fVar9 - fVar13, 1e-08 <= fVar12 * fVar12)) {
          fVar10 = fVar10 * *(float *)(param_2 + 5);
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          fVar9 = fVar13 + fVar12 * fVar10;
        }
      }
      *(float *)((longlong)param_1 + 0x114) = fVar9;
    }
    *(undefined1 *)((longlong)param_1 + 0xeb) = 1;
    fVar9 = fVar9 * *(float *)(param_1 + 0x12) + *(float *)((longlong)param_1 + 0x94);
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
LAB_14015dbd3:
    *(float *)(param_1 + 0x23) = fVar9;
  }
  else if (cVar3 == '\x02') {
    lVar2 = *(longlong *)(*param_2 + 0x130);
    if (lVar2 != 0) {
      lVar8 = FUN_1402e44f4();
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) == lVar8 + 0x30)) {
        fVar13 = *(float *)(param_2 + 5);
        fVar9 = (float)FUN_144945460(lVar2,param_1[0x1c]);
        if ((char)param_1[0x1d] == '\x01') {
          fVar10 = *(float *)(param_1 + 0x1e) - *(float *)((longlong)param_1 + 0xec);
          if (ABS(fVar10) <= 1e-08) {
            fVar10 = (float)(-(uint)(*(float *)(param_1 + 0x1e) <= fVar9) & 0x3f800000);
          }
          else {
            fVar10 = (fVar9 - *(float *)((longlong)param_1 + 0xec)) / fVar10;
          }
          fVar9 = (*(float *)(param_1 + 0x1f) - *(float *)((longlong)param_1 + 0xf4)) * fVar10 +
                  *(float *)((longlong)param_1 + 0xf4);
        }
        fVar9 = fVar9 * *(float *)((longlong)param_1 + 0xfc) + *(float *)(param_1 + 0x20);
        if (*(char *)((longlong)param_1 + 0xe9) == '\x01') {
          if (*(float *)(param_1 + 0x21) <= fVar9) {
            fVar9 = *(float *)(param_1 + 0x21);
          }
          if (fVar9 <= *(float *)((longlong)param_1 + 0x104)) {
            fVar9 = *(float *)((longlong)param_1 + 0x104);
          }
        }
        if (*(char *)((longlong)param_1 + 0xea) == '\x01') {
          if (*(char *)((longlong)param_1 + 0xeb) == '\x01') {
            fVar10 = *(float *)((longlong)param_1 + 0x114);
            fVar12 = *(float *)((longlong)param_1 + (ulonglong)(fVar9 < fVar10) * 4 + 0x10c);
            if ((0.0 < fVar12) && (fVar11 = fVar9 - fVar10, 1e-08 <= fVar11 * fVar11)) {
              fVar13 = fVar13 * fVar12;
              if (1.0 <= fVar13) {
                fVar13 = 1.0;
              }
              if (fVar13 <= 0.0) {
                fVar13 = 0.0;
              }
              fVar9 = fVar10 + fVar11 * fVar13;
            }
          }
          *(float *)((longlong)param_1 + 0x114) = fVar9;
        }
        *(undefined1 *)((longlong)param_1 + 0xeb) = 1;
        goto LAB_14015dbd3;
      }
    }
  }
  else if (cVar3 == '\x01') {
    fVar9 = (float)FUN_1447f0fd6(param_1 + 0x13,*(undefined1 *)((longlong)param_1 + 0x11d),
                                 (int)param_2[5]);
    goto LAB_14015dbd3;
  }
  fVar9 = *(float *)(param_1 + 0x23);
  if (1.0 <= fVar9) {
    fVar9 = 1.0;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  *(float *)(param_1 + 0x23) = fVar9;
  if (*(char *)((longlong)param_1 + 0x11f) == '\x01') {
    fVar9 = 1.0 - fVar9;
    *(float *)(param_1 + 0x23) = fVar9;
  }
  if (1e-05 < fVar9) {
    FUN_14015e054(param_1,param_2);
  }
LAB_14015dc1b:
  plVar7 = (longlong *)param_1[0xf];
  if (plVar7 != (longlong *)0x0) {
    uStack_84 = (undefined4)param_1[0x10];
    local_98 = (undefined4)*param_2;
    uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_90 = (undefined4)param_2[1];
    uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_88 = (undefined4)param_2[2];
    uStack_80 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_78 = (undefined4)param_2[4];
    uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_70 = (undefined4)param_2[5];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
    if ((plVar7[1] != 0) && ((*(byte *)(plVar7[1] + 0x24) & 7) != 0)) {
      FUN_144b1fcbe(&local_98,plVar7);
      FUN_144b1fd46(&local_98,param_1[0xf]);
      FUN_144b1fe18(&local_98,param_1[0xf]);
      plVar7 = (longlong *)param_1[0xf];
    }
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_98);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14015e054 FUN_14015e054 body=1254 status=ok
// SIG undefined FUN_14015e054(void)

void FUN_14015e054(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  int *piVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***pppuVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  longlong lVar15;
  char cVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined8 ***local_160;
  longlong local_158;
  longlong *local_150;
  undefined1 *local_148;
  undefined8 ***local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined2 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  longlong *local_110;
  longlong *local_108;
  byte *local_100;
  float local_f4;
  float local_f0;
  undefined1 local_ec;
  longlong *local_e8;
  longlong *local_e0;
  undefined1 local_d8;
  undefined6 local_d4;
  undefined2 uStack_ce;
  undefined6 uStack_cc;
  double local_c0;
  double local_b8;
  undefined8 ***local_a8;
  undefined8 ***local_a0;
  undefined8 local_98;
  undefined8 ***local_90;
  undefined8 *local_88;
  undefined8 ***local_80;
  undefined8 ***local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  puVar14 = (undefined1 *)(**(code **)(*param_1 + 0x198))();
  if ((puVar14 != (undefined1 *)0x0) && (*(longlong *)(puVar14 + 0x40) != 0)) {
    local_168 = puVar14;
    if ((undefined1 *)param_1[0xd] != puVar14) {
      uVar13 = (**(code **)(*param_1 + 0x1c0))(param_1);
      FUN_14091a31e(param_1,uVar13);
    }
    (**(code **)(*param_1 + 0x1a0))(param_1,&local_c0);
    local_90 = &local_78;
    local_78 = (undefined8 ****)0x0;
    local_80 = &local_90;
    local_a0 = (undefined8 ***)&local_88;
    local_88 = (undefined8 *)&LAB_1474d978e;
    local_140 = &local_a0;
    local_148 = &LAB_144b1e5de;
    FUN_14015e554(param_2[1] + 0x148,DAT_14caccb08,&local_148);
    local_160 = local_78;
    local_150 = param_1 + 3;
    local_158 = (longlong)param_1 + 0x2c;
    uVar13 = *(undefined4 *)(param_2 + 4);
    uVar8 = (**(code **)(*param_1 + 0x1d8))(param_1);
    uVar9 = (**(code **)(*param_1 + 0x1d0))(param_1);
    uVar18 = (**(code **)(*param_1 + 0x1b0))(param_1);
    uVar10 = (**(code **)(*param_1 + 0x120))(param_1);
    local_108 = param_1 + 8;
    pbVar1 = (byte *)(param_1 + 10);
    local_12c = 0;
    local_128 = 0x100;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = (longlong *)0x0;
    local_d8 = 0;
    local_d4 = 0;
    uStack_ce = 0;
    uStack_cc = 0;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(local_168);
    }
    local_148 = local_168;
    local_f4 = (float)local_c0;
    local_f0 = (float)local_b8;
    local_140 = (undefined8 ***)local_158;
    local_e0 = local_150;
    local_12c._0_2_ = CONCAT11(uVar8,uVar10);
    local_130 = *(undefined4 *)((longlong)param_2 + 0x24);
    local_e8 = param_1 + 6;
    local_138 = uVar18;
    local_134 = uVar13;
    local_100 = pbVar1;
    local_ec = uVar9;
    if (param_2[1] == 0) {
      bVar17 = false;
    }
    else {
      local_90 = (undefined8 ****)0x0;
      local_98 = &local_a8;
      local_a8 = &local_90;
      local_a0 = (undefined8 ***)&LAB_140331108;
      local_78 = &local_a0;
      local_80 = &local_78;
      local_88 = (undefined8 *)&LAB_1403310fa;
      FUN_14015e554(param_2[1] + 0x148,DAT_14cacb914);
      bVar17 = (undefined8 ****)local_90 != (undefined8 ****)0x0;
    }
    local_12c._0_3_ = CONCAT12(bVar17,(undefined2)local_12c);
    FUN_1447aa98e(&local_148,param_2);
    local_88 = (undefined8 *)*param_2;
    local_80 = (undefined8 ***)CONCAT44(local_80._4_4_,*(undefined4 *)((longlong)param_2 + 0x14));
    cVar16 = local_12c._2_1_;
    lVar15 = *param_1;
    if (*(code **)(lVar15 + 0x160) == (code *)&LAB_144b1e5bc) {
      uVar12 = (uint)*pbVar1;
    }
    else {
      uVar12 = (**(code **)(lVar15 + 0x160))(param_1);
      lVar15 = *param_1;
    }
    if (*(code **)(lVar15 + 0x158) == (code *)&LAB_144b1e5b0) {
      local_78 = (undefined8 ***)param_1[9];
    }
    else {
      (**(code **)(lVar15 + 0x158))(param_1,&local_78);
      lVar15 = *param_1;
    }
    pppuVar7 = local_78;
    if (*(code **)(lVar15 + 0x168) == (code *)&LAB_144b1e5c2) {
      cVar11 = *(char *)((longlong)param_1 + 0x52);
    }
    else {
      cVar11 = (**(code **)(lVar15 + 0x168))(param_1);
      lVar15 = *param_1;
    }
    pcVar4 = *(code **)(lVar15 + 0x170);
    if (pcVar4 == (code *)&LAB_144b1e5c6) {
      uVar8 = *(undefined1 *)((longlong)param_1 + 0x51);
    }
    else if (pcVar4 == (code *)&LAB_143287b46) {
      uVar8 = 0;
    }
    else {
      uVar8 = (*pcVar4)(param_1);
    }
    ppppuVar6 = local_98;
    puVar14 = local_168;
    local_a0 = pppuVar7;
    if (cVar16 == '\0') {
      if ((uVar12 - 3 < 2) && (*(char *)((longlong)param_1 + 0x3c) == '\0')) {
        local_a0 = (undefined8 ****)0x0;
      }
    }
    else if (uVar12 - 3 < 2) {
      local_a0 = (undefined8 ****)0x0;
    }
    cVar16 = '\0';
    if ((undefined8 ****)local_a0 != (undefined8 ****)0x0) {
      cVar16 = cVar11;
    }
    if (cVar11 != '\x01') {
      cVar16 = cVar11;
    }
    local_98._6_2_ = SUB82(ppppuVar6,6);
    local_98._0_6_ = CONCAT15(uVar8,CONCAT14(cVar16,uVar12));
    FUN_14486b6e0(local_160,&local_148,&local_a0,&local_88);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(puVar14);
    }
    plVar5 = local_110;
    param_1[0xd] = (longlong)puVar14;
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_110 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14015e554 FUN_14015e554 body=406 status=ok
// SIG undefined FUN_14015e554(void)

void FUN_14015e554(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x908) != *(int *)(param_1 + 0x92c)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0x930;
    if (*(longlong *)(param_1 + 0x940) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x940);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x948) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x900);
      if (*(longlong *)(param_1 + 0x900) == 0) {
        lVar3 = param_1;
      }
      do {
        lVar8 = lVar3 + (longlong)iVar6 * 0x120;
        if (*(longlong *)(lVar3 + (longlong)iVar6 * 0x120) == param_2) {
          if (((lVar8 == 0) || (lVar8 + 8 == 0)) || (*(int *)(lVar8 + 0x110) == 0)) break;
          lVar3 = lVar8 + 8;
          if (*(longlong *)(lVar8 + 0x108) != 0) {
            lVar3 = *(longlong *)(lVar8 + 0x108);
          }
          lVar8 = (longlong)(*(int *)(lVar8 + 0x110) + -1) * 0x20;
          plVar1 = *(longlong **)(lVar3 + lVar8);
          pcVar4 = *(code **)(*plVar1 + 8);
          if (pcVar4 == (code *)&LAB_1447aa980) {
            plVar7 = &DAT_14caccb08;
          }
          else if (pcVar4 == (code *)&LAB_1400954be) {
            plVar7 = &DAT_14cacb0b8;
          }
          else {
            plVar7 = &local_38;
            (*pcVar4)(plVar1,plVar7);
          }
          if (*plVar7 != param_2) break;
          pcVar4 = (code *)*param_3;
          if (pcVar4 == (code *)&LAB_144b1e5de) {
            pcVar4 = (code *)**(undefined8 **)param_3[1];
            if (pcVar4 == (code *)&LAB_1474d978e) {
              **(undefined8 **)(*(undefined8 **)param_3[1])[1] = *(undefined8 *)(lVar3 + lVar8);
              break;
            }
          }
          (*pcVar4)();
          break;
        }
        iVar6 = *(int *)(lVar8 + 0x118);
      } while (iVar6 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14015e712 FUN_14015e712 body=208 status=ok
// SIG undefined FUN_14015e712(void)

longlong FUN_14015e712(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x88;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x88) == *param_3) {
          if (lVar3 != 0) goto LAB_14015e787;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x80);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_14015fa52(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x88 + *param_1;
LAB_14015e787:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14015e7e4 FUN_14015e7e4 body=735 status=ok
// SIG undefined FUN_14015e7e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015e7e4(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa7dc) {
    FUN_144b3d300(&DAT_14caaa7dc);
    if (DAT_14caaa7dc == -1) {
      _DAT_14caaa7d0 = 0;
      DAT_14caaa7d8 = -1;
      _Init_thread_footer(&DAT_14caaa7dc);
    }
  }
  if (DAT_14caaa7d8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa7e8) {
      FUN_144b3d300(&DAT_14caaa7e8);
      if (DAT_14caaa7e8 == -1) {
        FUN_1446ddc76(&DAT_14caaa7e0,"PlayRate",1);
        _Init_thread_footer(&DAT_14caaa7e8);
      }
    }
    if (DAT_14caaa198 == 0) {
      uVar6 = FUN_140c6b56d();
      DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar6,L"AnimNode_BlendSpacePlayer");
    }
    FUN_14094e66e(&local_34,DAT_14caaa7e0,param_1,DAT_14caaa198);
    DAT_14caaa7d8 = local_2c;
    _DAT_14caaa7d0 = local_34;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar7 = *plVar8;
  uVar1 = *(uint *)(plVar8[2] + (longlong)DAT_14caaa7d8 * 4);
  uVar9 = uVar1 & 0x7fffffff;
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar1 < 0) {
    if (lVar7 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)plVar8[1];
    }
    lVar4 = plVar8[4];
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar5 = plVar5 + 0x12;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      lVar7 = *plVar8;
    }
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    param_1 = param_1 - *(int *)(*(longlong *)(*plVar5 + (longlong)(int)lVar4 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar8 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar7 = *(longlong *)(plVar8[0x42] + uVar10 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar8[0x4a] == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + *(int *)(plVar8[0x4a] + 0x44);
        }
      }
      else {
        param_1 = (*pcVar2)(plVar8,param_1);
      }
      puVar3 = (undefined4 *)(*(int *)(lVar7 + 0x44) + param_1);
    }
    else {
      puVar3 = (undefined4 *)(*pcVar2)(plVar8,uVar10,param_1);
    }
  }
  else {
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    pcVar2 = *(code **)(*plVar8 + 0x100);
    if (pcVar2 == FUN_144a45148) {
      lVar7 = *(longlong *)(plVar8[0x44] + (ulonglong)uVar9 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == (code *)&LAB_1478d5456) {
        lVar4 = plVar8[-0x53];
      }
      else {
        lVar4 = (*pcVar2)();
      }
      puVar3 = (undefined4 *)(*(int *)(lVar7 + 0x44) + lVar4);
    }
    else {
      puVar3 = (undefined4 *)(*pcVar2)(plVar8,uVar10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(*puVar3);
}



// FUNCTION 14015eac4 FUN_14015eac4 body=608 status=ok
// SIG undefined FUN_14015eac4(void)

void FUN_14015eac4(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = (int)param_1[1];
  lVar3 = (longlong)iVar2;
  uVar7 = lVar3 - 1;
  lVar6 = *param_1;
  lVar5 = uVar7 * 0x80 + lVar3 * 8 + -8;
  lVar1 = *(longlong *)(lVar6 + lVar5);
  if (DAT_14cacbb10 == 0) {
    local_70 = &local_50;
    local_50 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_1463a1b5a;
    local_78 = &LAB_147903fa7;
    local_80 = &LAB_1459b1fdd;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10000000;
    local_a0 = 8;
    local_a8 = 0x1e8;
    FUN_14081cfa3(L"/Script/Engine",L"AnimMontage",&DAT_14cacbb10,FUN_1463a4b6e);
  }
  lVar6 = lVar6 + lVar5;
  lVar1 = *(longlong *)(lVar1 + 0x10);
  if ((*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cacbb10 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cacbb10 + 0x38) * 8) !=
      DAT_14cacbb10 + 0x30)) {
    if ((param_2 == 0) || (param_2 == 3)) {
      *(undefined4 *)(lVar6 + 0x74) = *(undefined4 *)(lVar6 + 0x14);
    }
    else if ((param_2 == 2) || (param_2 == 5)) {
      *(undefined4 *)(lVar6 + 0x74) = 0x40000000;
    }
  }
  else {
    fVar8 = *(float *)(lVar6 + 0x14);
    if (fVar8 < *(float *)((longlong)param_1 + 0x2c) ||
        fVar8 == *(float *)((longlong)param_1 + 0x2c)) {
      if ((int)uVar7 != 0) {
        pvVar4 = (void *)(uVar7 * 0x88 + *param_1);
        FUN_144803279(pvVar4,1);
        if ((int)param_1[1] != iVar2) {
          memmove(pvVar4,(void *)((longlong)pvVar4 + 0x88),
                  (longlong)((int)param_1[1] - iVar2) * 0x88);
          uVar7 = (ulonglong)((int)param_1[1] - 1);
        }
        *(int *)(param_1 + 1) = (int)uVar7;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
      }
    }
    else {
      if (1 < iVar2) {
        lVar1 = *param_1;
        pvVar4 = (void *)(lVar1 + lVar3 * 0x88 + -0x110);
        FUN_144803279(pvVar4,1);
        iVar2 = (int)param_1[1] - (int)uVar7;
        if (iVar2 != 0) {
          memmove(pvVar4,(void *)(lVar1 + lVar3 * 0x88 + -0x88),(longlong)iVar2 * 0x88);
          uVar7 = (ulonglong)*(uint *)(param_1 + 1);
        }
        *(int *)(param_1 + 1) = (int)uVar7 + -1;
        FUN_1478dd94e(param_1);
        fVar8 = *(float *)(lVar6 + 0x14);
      }
      *(float *)((longlong)param_1 + 0x2c) = fVar8;
      *(undefined4 *)(lVar6 + 0x74) = 0x40400000;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14015ed40 FUN_14015ed40 body=734 status=ok
// SIG undefined FUN_14015ed40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_14015ed40(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa65c) {
    FUN_144b3d300(&DAT_14caaa65c);
    if (DAT_14caaa65c == -1) {
      _DAT_14caaa650 = 0;
      DAT_14caaa658 = -1;
      _Init_thread_footer(&DAT_14caaa65c);
    }
  }
  if (DAT_14caaa658 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa668) {
      FUN_144b3d300(&DAT_14caaa668);
      if (DAT_14caaa668 == -1) {
        FUN_1446ddc76(&DAT_14caaa660,"GroupRole",1);
        _Init_thread_footer(&DAT_14caaa668);
      }
    }
    if (DAT_14caaa198 == 0) {
      uVar6 = FUN_140c6b56d();
      DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar6,L"AnimNode_BlendSpacePlayer");
    }
    FUN_14094e66e(&local_34,DAT_14caaa660,param_1,DAT_14caaa198);
    DAT_14caaa658 = local_2c;
    _DAT_14caaa650 = local_34;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar7 = *plVar8;
  uVar1 = *(uint *)(plVar8[2] + (longlong)DAT_14caaa658 * 4);
  uVar9 = uVar1 & 0x7fffffff;
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar1 < 0) {
    if (lVar7 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)plVar8[1];
    }
    lVar4 = plVar8[4];
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar5 = plVar5 + 0x12;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      lVar7 = *plVar8;
    }
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    param_1 = param_1 - *(int *)(*(longlong *)(*plVar5 + (longlong)(int)lVar4 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar8 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar7 = *(longlong *)(plVar8[0x42] + uVar10 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar8[0x4a] == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + *(int *)(plVar8[0x4a] + 0x44);
        }
      }
      else {
        param_1 = (*pcVar2)(plVar8,param_1);
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + param_1);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10,param_1);
    }
  }
  else {
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    pcVar2 = *(code **)(*plVar8 + 0x100);
    if (pcVar2 == FUN_144a45148) {
      lVar7 = *(longlong *)(plVar8[0x44] + (ulonglong)uVar9 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == (code *)&LAB_1478d5456) {
        lVar4 = plVar8[-0x53];
      }
      else {
        lVar4 = (*pcVar2)();
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + lVar4);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return *puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14015f020 FUN_14015f020 body=733 status=ok
// SIG undefined FUN_14015f020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_14015f020(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa67c) {
    FUN_144b3d300(&DAT_14caaa67c);
    if (DAT_14caaa67c == -1) {
      _DAT_14caaa670 = 0;
      DAT_14caaa678 = -1;
      _Init_thread_footer(&DAT_14caaa67c);
    }
  }
  if (DAT_14caaa678 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa688) {
      FUN_144b3d300(&DAT_14caaa688);
      if (DAT_14caaa688 == -1) {
        FUN_1446ddc76(&DAT_14caaa680,"Method",1);
        _Init_thread_footer(&DAT_14caaa688);
      }
    }
    if (DAT_14caaa198 == 0) {
      uVar6 = FUN_140c6b56d();
      DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar6,L"AnimNode_BlendSpacePlayer");
    }
    FUN_14094e66e(&local_34,DAT_14caaa680,param_1,DAT_14caaa198);
    DAT_14caaa678 = local_2c;
    _DAT_14caaa670 = local_34;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar7 = *plVar8;
  uVar1 = *(uint *)(plVar8[2] + (longlong)DAT_14caaa678 * 4);
  uVar9 = uVar1 & 0x7fffffff;
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar1 < 0) {
    if (lVar7 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)plVar8[1];
    }
    lVar4 = plVar8[4];
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar5 = plVar5 + 0x12;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      lVar7 = *plVar8;
    }
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    param_1 = param_1 - *(int *)(*(longlong *)(*plVar5 + (longlong)(int)lVar4 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar8 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar7 = *(longlong *)(plVar8[0x42] + uVar10 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar8[0x4a] == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + *(int *)(plVar8[0x4a] + 0x44);
        }
      }
      else {
        param_1 = (*pcVar2)(plVar8,param_1);
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + param_1);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10,param_1);
    }
  }
  else {
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    pcVar2 = *(code **)(*plVar8 + 0x100);
    if (pcVar2 == FUN_144a45148) {
      lVar7 = *(longlong *)(plVar8[0x44] + (ulonglong)uVar9 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == (code *)&LAB_1478d5456) {
        lVar4 = plVar8[-0x53];
      }
      else {
        lVar4 = (*pcVar2)();
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + lVar4);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return *puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14015f2fe FUN_14015f2fe body=751 status=ok
// SIG undefined FUN_14015f2fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14015f2fe(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_68 [44];
  undefined8 local_3c;
  int local_34;
  ulonglong local_30;
  ulonglong uVar10;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa63c) {
    FUN_144b3d300(&DAT_14caaa63c);
    if (DAT_14caaa63c == -1) {
      _DAT_14caaa630 = 0;
      DAT_14caaa638 = -1;
      _Init_thread_footer(&DAT_14caaa63c);
    }
  }
  if (DAT_14caaa638 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa648) {
      FUN_144b3d300(&DAT_14caaa648);
      if (DAT_14caaa648 == -1) {
        FUN_1446ddc76(&DAT_14caaa640,"GroupName",1);
        _Init_thread_footer(&DAT_14caaa648);
      }
    }
    if (DAT_14caaa198 == 0) {
      uVar6 = FUN_140c6b56d();
      DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar6,L"AnimNode_BlendSpacePlayer");
    }
    FUN_14094e66e(&local_3c,DAT_14caaa640,param_1,DAT_14caaa198);
    DAT_14caaa638 = local_34;
    _DAT_14caaa630 = local_3c;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar7 = *plVar8;
  uVar1 = *(uint *)(plVar8[2] + (longlong)DAT_14caaa638 * 4);
  uVar9 = uVar1 & 0x7fffffff;
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar1 < 0) {
    if (lVar7 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)plVar8[1];
    }
    lVar4 = plVar8[4];
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar5 = plVar5 + 0x12;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      lVar7 = *plVar8;
    }
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    param_1 = param_1 - *(int *)(*(longlong *)(*plVar5 + (longlong)(int)lVar4 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar8 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar7 = *(longlong *)(plVar8[0x42] + uVar10 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar8[0x4a] == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + *(int *)(plVar8[0x4a] + 0x44);
        }
      }
      else {
        param_1 = (*pcVar2)(plVar8,param_1);
      }
      puVar3 = (undefined8 *)(*(int *)(lVar7 + 0x44) + param_1);
    }
    else {
      puVar3 = (undefined8 *)(*pcVar2)(plVar8,uVar10,param_1);
    }
  }
  else {
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    pcVar2 = *(code **)(*plVar8 + 0x100);
    if (pcVar2 == FUN_144a45148) {
      lVar7 = *(longlong *)(plVar8[0x44] + (ulonglong)uVar9 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == (code *)&LAB_1478d5456) {
        lVar4 = plVar8[-0x53];
      }
      else {
        lVar4 = (*pcVar2)();
      }
      puVar3 = (undefined8 *)(*(int *)(lVar7 + 0x44) + lVar4);
    }
    else {
      puVar3 = (undefined8 *)(*pcVar2)(plVar8,uVar10);
    }
  }
  *param_2 = *puVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14015f5ee FUN_14015f5ee body=376 status=ok
// SIG undefined FUN_14015f5ee(void)

void FUN_14015f5ee(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x88;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14015f67a;
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
LAB_14015f67a:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x88)) {
    uVar7 = uVar5 / 0x88 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x88,8);
  return;
}



// FUNCTION 14015f768 FUN_14015f768 body=744 status=ok
// SIG undefined FUN_14015f768(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_14015f768(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa85c) {
    FUN_144b3d300(&DAT_14caaa85c);
    if (DAT_14caaa85c == -1) {
      _DAT_14caaa850 = 0;
      DAT_14caaa858 = -1;
      _Init_thread_footer(&DAT_14caaa85c);
    }
  }
  if (DAT_14caaa858 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa868) {
      FUN_144b3d300(&DAT_14caaa868);
      if (DAT_14caaa868 == -1) {
        FUN_1446ddc76(&DAT_14caaa860,"bResetPlayTimeWhenBlendSpaceChanges",1);
        _Init_thread_footer(&DAT_14caaa868);
      }
    }
    if (DAT_14caaa198 == 0) {
      uVar6 = FUN_140c6b56d();
      DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar6,L"AnimNode_BlendSpacePlayer");
    }
    FUN_14094e66e(&local_34,DAT_14caaa860,param_1,DAT_14caaa198);
    DAT_14caaa858 = local_2c;
    _DAT_14caaa850 = local_34;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar7 = *plVar8;
  uVar1 = *(uint *)(plVar8[2] + (longlong)DAT_14caaa858 * 4);
  uVar9 = uVar1 & 0x7fffffff;
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar1 < 0) {
    if (lVar7 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)plVar8[1];
    }
    lVar4 = plVar8[4];
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar5 = plVar5 + 0x12;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      lVar7 = *plVar8;
    }
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    param_1 = param_1 - *(int *)(*(longlong *)(*plVar5 + (longlong)(int)lVar4 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar8 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar7 = *(longlong *)(plVar8[0x42] + uVar10 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar8[0x4a] == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + *(int *)(plVar8[0x4a] + 0x44);
        }
      }
      else {
        param_1 = (*pcVar2)(plVar8,param_1);
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + param_1);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10,param_1);
    }
  }
  else {
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    pcVar2 = *(code **)(*plVar8 + 0x100);
    if (pcVar2 == FUN_144a45148) {
      lVar7 = *(longlong *)(plVar8[0x44] + (ulonglong)uVar9 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == (code *)&LAB_1478d5456) {
        lVar4 = plVar8[-0x53];
      }
      else {
        lVar4 = (*pcVar2)();
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + lVar4);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return *puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14015fa52 FUN_14015fa52 body=1624 status=ok
// SIG undefined FUN_14015fa52(void)

void FUN_14015fa52(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  uint *puVar1;
  void *_Dst;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  char cVar21;
  uint uVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_1401600aa(param_1,iVar17);
    }
    iVar18 = (int)param_1[5];
    if (iVar18 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar4 = iVar18 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar15 = param_1 + 2;
    iVar10 = iVar18 + 1;
    iVar13 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar13 = iVar18;
    }
    if (iVar13 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar18) {
        if (iVar18 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar4 = iVar18;
        }
        else {
          uVar12 = iVar18 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar5 = 4;
            if (4 < uVar12) {
              uVar5 = uVar12;
            }
          }
          else {
            uVar5 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar8 = FUN_144a3809e(uVar5 << 2,0);
          iVar4 = (int)(uVar8 >> 2);
          iVar10 = -0x20;
          if ((int)uVar12 <= iVar4) {
            iVar10 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar15,iVar4);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar4 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar4 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = plVar15;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar4 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar18 & 0x1f;
    puVar1 = (uint *)((longlong)plVar15 + (longlong)(iVar13 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar6 = (longlong)iVar17;
    iVar18 = *(int *)(*param_1 + 4 + lVar6 * 0x88);
    *(int *)(param_1 + 6) = iVar18;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar18 * 0x88) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar11 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar11 = puVar1;
  }
  iVar18 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar18 = iVar17;
  }
  puVar11[iVar18 >> 5] = puVar11[iVar18 >> 5] | 1 << ((byte)iVar17 & 0x1f);
  lVar20 = *param_1;
  lVar6 = lVar6 * 0x88;
  plVar15 = (longlong *)(lVar20 + lVar6);
  *(undefined8 *)(lVar20 + lVar6) = *(undefined8 *)*param_4;
  puVar2 = (undefined8 *)(lVar20 + 8 + lVar6);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(lVar20 + 0x18 + lVar6) = 0xffffffff;
  puVar2 = (undefined8 *)(lVar20 + 0x20 + lVar6);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar20 + 0x30 + lVar6);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar20 + 0x40 + lVar6);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar20 + 0x50 + lVar6);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar20 + 0x60 + lVar6);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 **)(lVar20 + 0x70 + lVar6) = &DAT_14cacb0c0;
  *(undefined8 *)(lVar20 + 0x78 + lVar6) = 0;
  cVar21 = '\0';
  FUN_144803279(0,0);
  *(undefined4 *)(lVar20 + 0x80 + lVar6) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar7 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[8];
      }
      iVar18 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
      if (iVar18 != -1) {
        do {
          _Dst = (void *)(*param_1 + (longlong)iVar18 * 0x88);
          if (*(longlong *)(*param_1 + (longlong)iVar18 * 0x88) == *plVar15) {
            FUN_1417b3d74((longlong)_Dst + 8);
            memmove(_Dst,plVar15,0x80);
            FUN_147937a7a(param_1,iVar17);
            cVar21 = '\x01';
            break;
          }
          iVar18 = *(int *)((longlong)_Dst + 0x80);
          cVar21 = '\0';
        } while (iVar18 != -1);
        goto LAB_14015fc12;
      }
    }
    cVar21 = '\0';
  }
LAB_14015fc12:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar21;
  }
  if (cVar21 != '\0') goto LAB_14015feb2;
  uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar12 = 1;
  if (3 < uVar5) {
    uVar8 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar6 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((int)uVar5 < 1) || ((int)uVar12 <= (int)param_1[9])) {
    param_3 = (int)param_1[9] - 1U & param_3;
    *(uint *)((longlong)plVar15 + 0x84) = param_3;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar15 + 0x10) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
         iVar17;
    goto LAB_14015feb2;
  }
  *(uint *)(param_1 + 9) = uVar12;
  plVar15 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar15,0,0,4);
    uVar12 = *(uint *)(param_1 + 9);
  }
  plVar7 = param_1 + 7;
  if (uVar12 == 1) {
    if (*plVar15 != 0) {
      FUN_1446efa72(plVar15,0,0,4);
    }
LAB_14015fc78:
    uVar5 = 0;
    do {
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = plVar7;
      }
      *(undefined4 *)((longlong)plVar15 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
           0xffffffff;
      uVar5 = uVar5 + 1;
    } while (uVar12 != uVar5);
  }
  else {
    if (uVar12 == 0) goto LAB_14015feb2;
    FUN_1446efa72(plVar15,0,uVar12,4);
    if (0 < (int)uVar12) goto LAB_14015fc78;
  }
  iVar18 = (int)param_1[5];
  if (iVar18 == 0) {
    uVar8 = 0;
    uVar16 = 1;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar12 = *puVar11;
    if (uVar12 == 0) {
      iVar4 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar4 = iVar18 + -1;
      }
      uVar8 = 0;
      uVar16 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar16 = uVar8;
      }
      iVar10 = 0;
      do {
        if (uVar16 == uVar8) goto LAB_14015feb2;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar11[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar8 = 0;
      iVar10 = 0;
    }
    uVar16 = (ulonglong)(-uVar12 & uVar12);
    uVar19 = uVar16 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar18 <= iVar4) {
      iVar4 = iVar18;
    }
  }
  if (iVar4 < iVar18) {
    uVar12 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar20 = (longlong)iVar4 * 0x88;
      uVar3 = *(undefined8 *)(lVar6 + lVar20);
      uVar5 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar22 = (uint)uVar3 & 0xffff;
      uVar19 = (longlong)
               (int)(((uint)uVar3 << 0x10 | uVar22) + (int)((ulonglong)uVar3 >> 0x20) +
                     (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar22 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar18 = (int)uVar19;
      *(int *)(lVar6 + 0x84 + lVar20) = iVar18;
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = plVar7;
      }
      *(undefined4 *)(lVar6 + 0x80 + lVar20) =
           *(undefined4 *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & uVar19) * 4);
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = plVar7;
      }
      *(int *)((longlong)plVar15 + ((longlong)iVar18 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
      uVar12 = ~(uint)uVar16 & uVar12;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar18 = (int)param_1[5];
      iVar4 = (int)uVar8;
      lVar6 = (longlong)iVar4;
      uVar5 = puVar11[lVar6] & uVar12;
      if (uVar5 == 0) {
        iVar13 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar13 = iVar18 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar4) {
          iVar14 = iVar4;
        }
        if (iVar13 <= iVar4) break;
        lVar20 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar11[lVar6 + lVar20 + 1];
          if (uVar5 != 0) break;
          lVar20 = lVar20 + 1;
          if (iVar14 - lVar6 == lVar20) goto LAB_14015feb2;
        }
        uVar8 = (ulonglong)(iVar4 + (int)lVar20 + 1);
        uVar12 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar5 & uVar5);
      uVar19 = uVar16 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar18);
  }
LAB_14015feb2:
  *param_2 = iVar17;
  return;
}



// FUNCTION 1401600aa FUN_1401600aa body=376 status=ok
// SIG undefined FUN_1401600aa(void)

void FUN_1401600aa(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x88;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140160136;
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
LAB_140160136:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x88)) {
    uVar7 = uVar5 / 0x88 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x88,8);
  return;
}



// FUNCTION 14016022c FUN_14016022c body=97 status=ok
// SIG undefined FUN_14016022c(void)

void FUN_14016022c(longlong param_1)

{
  ulonglong uVar1;
  
  FUN_1429b2e9e();
  if (0 < (longlong)*(int *)(param_1 + 0xb8)) {
    uVar1 = (longlong)*(int *)(param_1 + 0xb8) + 1;
    do {
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + -0x10 + uVar1 * 8) + 0x90) & 2)
          != 0) {
        FUN_140479546(param_1);
      }
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  FUN_1429b3474(param_1);
  FUN_1429b350c(param_1);
  FUN_1429b357e(param_1);
  return;
}



// FUNCTION 14016028e FUN_14016028e body=12 status=ok
// SIG undefined FUN_14016028e(void)

void FUN_14016028e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140160297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14016029a FUN_14016029a body=31 status=ok
// SIG undefined FUN_14016029a(void)

undefined8 FUN_14016029a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401602ba FUN_1401602ba body=109 status=ok
// SIG undefined FUN_1401602ba(void)

void FUN_1401602ba(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_2[2];
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_20 = *(undefined4 *)(param_2 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_18 = *(undefined4 *)(param_2 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x24);
  local_10 = param_2[5];
  local_40 = param_3;
  FUN_14486c00c(param_1 + 0x118,&local_38,&local_40);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140160328 FUN_140160328 body=237 status=ok
// SIG undefined FUN_140160328(void)

ulonglong FUN_140160328(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if ((lVar3 != 0) && (cVar4 = FUN_146cae022(lVar3,param_2,param_3), cVar4 == '\0'))
      goto LAB_14016040f;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  local_58 = param_2[2];
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_40 = param_2[5];
  local_50 = *(undefined4 *)(param_2 + 3);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_48 = *(undefined4 *)(param_2 + 4);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x24);
  iVar1 = *(int *)(param_1 + 0x48);
  uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if ((lVar3 != 0) && (cVar4 = FUN_146e0365c(lVar3,&local_68,param_3), cVar4 == '\0'))
      goto LAB_14016040f;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
LAB_140160385:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
LAB_14016040f:
  uVar5 = 0;
  goto LAB_140160385;
}



// FUNCTION 140160416 FUN_140160416 body=185 status=ok
// SIG undefined FUN_140160416(void)

undefined4 FUN_140160416(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14016059e(param_1,(int)param_1[2] + 1);
  lVar4 = param_1[2];
  uVar6 = (ulonglong)((int)param_1[3] - 1U & param_2[3]);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  uVar2 = *(undefined4 *)(param_1[4] + uVar6 * 4);
  iVar5 = FUN_1401604d0(param_1,1);
  lVar3 = *(longlong *)(*param_1 + (longlong)(iVar5 / 0x555) * 8);
  puVar1 = (undefined4 *)(lVar3 + (ulonglong)(uint)(iVar5 % 0x555) * 0x18);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  *(undefined4 *)(lVar3 + 0x10 + (ulonglong)(uint)(iVar5 % 0x555) * 0x18) = uVar2;
  *(int *)(param_1[4] + uVar6 * 4) = (int)lVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (int)lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401604d0 FUN_1401604d0 body=206 status=ok
// SIG undefined FUN_1401604d0(void)

int FUN_1401604d0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)param_1[1];
  iVar1 = (int)param_1[2];
  iVar6 = (int)((ulonglong)((longlong)(iVar1 + param_2 + 0x554) * -0x3ff3ff3f) >> 0x20) +
          iVar1 + param_2 + 0x554;
  iVar6 = (iVar6 >> 10) - (iVar6 >> 0x1f);
  *(int *)(param_1 + 2) = iVar1 + param_2;
  if (iVar5 < iVar6) {
    do {
      lVar3 = FUN_14001cc68(0x7ff8,0x10);
      lVar4 = 0x10;
      do {
        *(undefined1 **)(lVar3 + -0x10 + lVar4) = &DAT_149e02088;
        *(undefined8 *)(lVar3 + -8 + lVar4) = 0;
        *(undefined4 *)(lVar3 + lVar4) = 0xffffffff;
        lVar4 = lVar4 + 0x18;
      } while (lVar4 != 0x8008);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1456bd870(param_1,iVar2);
      }
      *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar3;
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar6);
  }
  return iVar1;
}



// FUNCTION 14016059e FUN_14016059e body=233 status=ok
// SIG undefined FUN_14016059e(void)

void FUN_14016059e(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = (int)(((uint)(param_2 >> 0x1f) & 1) + (int)param_2) >> 1;
  uVar5 = (ulonglong)(iVar2 + -1 + (uint)(iVar2 == 0)) * 2 + 1;
  lVar1 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar3 = 1 << ((byte)lVar1 & 0x1f);
  uVar8 = 0x8000;
  if (0x8000 < uVar3) {
    uVar8 = uVar3;
  }
  if (*(uint *)(param_1 + 3) < uVar8) {
    FUN_1400020a8(param_1[4]);
    param_1[4] = 0;
    *(uint *)(param_1 + 3) = uVar8;
    uVar4 = FUN_14001cc68((ulonglong)uVar8 << 2);
    param_1[4] = uVar4;
    if (*(int *)(param_1 + 3) != 0) {
      uVar5 = 0;
      do {
        *(undefined4 *)(param_1[4] + uVar5 * 4) = 0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 3));
    }
    iVar2 = *(int *)(param_1 + 2);
    if (iVar2 != 0) {
      plVar6 = (longlong *)*param_1;
      iVar7 = 0;
      uVar8 = 0;
      do {
        uVar5 = (ulonglong)
                (*(int *)(param_1 + 3) - 1U & *(uint *)(*plVar6 + 0xc + (ulonglong)uVar8 * 0x18));
        *(undefined4 *)(*plVar6 + 0x10 + (ulonglong)uVar8 * 0x18) =
             *(undefined4 *)(param_1[4] + uVar5 * 4);
        *(int *)(param_1[4] + uVar5 * 4) = iVar7;
        iVar7 = iVar7 + 1;
        uVar8 = uVar8 + 1;
        plVar6 = plVar6 + (0x554 < uVar8);
        if (0x554 < uVar8) {
          uVar8 = 0;
        }
      } while (iVar2 != iVar7);
    }
  }
  return;
}



// FUNCTION 140160698 FUN_140160698 body=101 status=ok
// SIG undefined FUN_140160698(void)

void FUN_140160698(longlong *param_1,int param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)param_2 * 8);
  FUN_1401606fd(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 8),(longlong)iVar3 << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 1401606fd FUN_1401606fd body=66 status=ok
// SIG undefined FUN_1401606fd(void)

void FUN_1401606fd(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 140160740 FUN_140160740 body=131 status=ok
// SIG undefined FUN_140160740(void)

longlong FUN_140160740(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    FUN_1401609a2(param_1,param_2);
    lVar1 = param_2 + 0x90;
    if (*(longlong *)(param_2 + 0xb0) != 0) {
      lVar1 = *(longlong *)(param_2 + 0xb0);
    }
    FUN_1401607c4(param_1 + 0x90,lVar1,*(undefined4 *)(param_2 + 0xb8),
                  *(undefined4 *)(param_1 + 0xbc));
  }
  FUN_14016081a(param_1 + 0xc0,param_2 + 0xc0);
  FUN_1400e9192(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  return param_1;
}



// FUNCTION 1401607c4 FUN_1401607c4 body=86 status=ok
// SIG undefined FUN_1401607c4(void)

void FUN_1401607c4(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x28) = param_3;
  if (param_4 != 0 || param_3 != 0) {
    FUN_14016093c(param_1,param_3,param_4);
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar1 = param_1;
    }
    FUN_140160884(lVar1,param_2,param_3);
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 4;
  return;
}



// FUNCTION 14016081a FUN_14016081a body=106 status=ok
// SIG undefined FUN_14016081a(void)

void * FUN_14016081a(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x20);
    if (*(void **)((longlong)param_2 + 0x20) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x28);
    *(int *)((longlong)param_1 + 0x28) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
    }
    else {
      FUN_1401608d6(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x20);
        if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140160884 FUN_140160884 body=82 status=ok
// SIG undefined FUN_140160884(void)

void FUN_140160884(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1401608d6 FUN_1401608d6 body=101 status=ok
// SIG undefined FUN_1401608d6(void)

void FUN_1401608d6(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (iVar3 = 4, 4 < param_2)) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1456af3ba(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 14016093c FUN_14016093c body=101 status=ok
// SIG undefined FUN_14016093c(void)

void FUN_14016093c(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (iVar3 = 4, 4 < param_2)) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_146f639b0(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 1401609a2 FUN_1401609a2 body=160 status=ok
// SIG undefined FUN_1401609a2(void)

void FUN_1401609a2(void *param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *_Dst;
  void *_Src;
  
  uVar2 = *(int *)((longlong)param_2 + 0x88) + 0x1fU & 0xffffffe0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  if ((*(int *)((longlong)param_1 + 0x8c) < (int)uVar2) ||
     (0x400 < *(int *)((longlong)param_1 + 0x8c))) {
    uVar3 = 0x400;
    if (0x400 < (int)uVar2) {
      uVar3 = uVar2;
    }
    *(uint *)((longlong)param_1 + 0x8c) = uVar3;
    FUN_1456d1d46(param_1,0);
  }
  iVar1 = *(int *)((longlong)param_2 + 0x88);
  *(int *)((longlong)param_1 + 0x88) = iVar1;
  if (iVar1 != 0) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    _Dst = *(void **)((longlong)param_1 + 0x80);
    if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
    return;
  }
  return;
}



// FUNCTION 140160a42 FUN_140160a42 body=187 status=ok
// SIG undefined FUN_140160a42(void)

undefined8 FUN_140160a42(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14c8733f4);
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  if (uVar1 < 0xc) {
    lVar2 = FUN_1404d8156(*(undefined8 *)(param_1 + 0x78));
    uVar3 = 0x40;
    uVar4 = (lVar2 + (ulonglong)(lVar2 == 0)) - 1;
    if (uVar4 != 0) {
      uVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> uVar3 == 0; uVar3 = uVar3 - 1) {
        }
      }
      uVar3 = uVar3 ^ 0x3f;
    }
    uVar3 = 0x40 - uVar3;
  }
  else {
    uVar5 = (longlong)*(int *)(param_1 + 0x34) << 3;
    lVar2 = FUN_1404d8156(*(undefined8 *)(param_1 + 0x78));
    uVar3 = lVar2 + (ulonglong)(lVar2 == -1);
    uVar4 = 0x40;
    if (uVar3 != 0) {
      uVar4 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> uVar4 == 0; uVar4 = uVar4 - 1) {
        }
      }
      uVar4 = uVar4 ^ 0x3f;
    }
    uVar3 = 0x40 - uVar4;
    if (uVar5 <= 0x40 - uVar4) {
      uVar3 = uVar5;
    }
  }
  (**(code **)(*param_2 + 0x178))(param_2,param_4,uVar3);
  return 1;
}



// FUNCTION 140160afe FUN_140160afe body=142 status=ok
// SIG undefined FUN_140160afe(void)

int FUN_140160afe(longlong param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xc08) != *(int *)(param_1 + 0xc2c)) {
    lVar2 = param_1 + 0xc30;
    if (*(longlong *)(param_1 + 0xcb0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xcb0);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xcb8) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0xc00);
      if (*(longlong *)(param_1 + 0xc00) == 0) {
        lVar2 = param_1;
      }
      do {
        lVar3 = (longlong)iVar1 * 0x30;
        if ((((*(int *)(lVar2 + lVar3) == *param_3) && (*(int *)(lVar2 + 4 + lVar3) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar3) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar3) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + lVar2 + 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140160b8c FUN_140160b8c body=38 status=ok
// SIG undefined FUN_140160b8c(void)

undefined8 FUN_140160b8c(undefined8 param_1,int param_2)

{
  FUN_140160bb2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140160bb2 FUN_140160bb2 body=142 status=ok
// SIG undefined FUN_140160bb2(void)

void FUN_140160bb2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a37f8a8;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 140160c40 FUN_140160c40 body=14 status=ok
// SIG undefined FUN_140160c40(void)

void FUN_140160c40(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_140160c4e();
    return;
  }
  return;
}



// FUNCTION 140160c4e FUN_140160c4e body=450 status=ok
// SIG undefined FUN_140160c4e(void)

void FUN_140160c4e(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x10);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140160d69:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_140160da6:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x10;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140160ca4;
LAB_140160c99:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140160ca4:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xffb) goto code_r0x000140160cd0;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 4 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140160d26:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140160da6;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140160d69;
code_r0x000140160cd0:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140160d26;
    }
  }
  goto LAB_140160c99;
}



// FUNCTION 140160e10 FUN_140160e10 body=40 status=ok
// SIG undefined FUN_140160e10(void)

undefined8 FUN_140160e10(undefined8 param_1,int param_2)

{
  FUN_140160e38();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140160e38 FUN_140160e38 body=334 status=ok
// SIG undefined FUN_140160e38(void)

void FUN_140160e38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0bc2c0;
  FUN_14016105e(param_1[0x35],*(undefined4 *)(param_1 + 0x36));
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_140160ff5(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_1401610c7(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_140160fbe(param_1 + 0x27);
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b0be080;
  FUN_140160f86(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140160f86 FUN_140160f86 body=56 status=ok
// SIG undefined FUN_140160f86(void)

void FUN_140160f86(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140160fbe FUN_140160fbe body=55 status=ok
// SIG undefined FUN_140160fbe(void)

void FUN_140160fbe(longlong *param_1)

{
  FUN_140161138(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140160ff5 FUN_140160ff5 body=105 status=ok
// SIG undefined FUN_140160ff5(void)

void FUN_140160ff5(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 8);
    do {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14016105e FUN_14016105e body=105 status=ok
// SIG undefined FUN_14016105e(void)

void FUN_14016105e(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 8);
    do {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401610c7 FUN_1401610c7 body=113 status=ok
// SIG undefined FUN_1401610c7(void)

void FUN_1401610c7(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 8);
    do {
      if (puVar3[8] != 0) {
        FUN_1400020a8();
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140161138 FUN_140161138 body=529 status=ok
// SIG undefined FUN_140161138(void)

void FUN_140161138(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_14016116b;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar6 * 0x38) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_14016116b;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14016116b:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14016134a FUN_14016134a body=40 status=ok
// SIG undefined FUN_14016134a(void)

undefined8 * FUN_14016134a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_14486d71a(param_3);
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 140161372 FUN_140161372 body=540 status=ok
// SIG undefined FUN_140161372(void)

void FUN_140161372(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10 * 0x18);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x14 + lVar10 * 0x18) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_140161545;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_140161545:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140161590 FUN_140161590 body=105 status=ok
// SIG undefined FUN_140161590(void)

void FUN_140161590(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  *(undefined1 *)(param_2 + 0x78) = 0;
  *(undefined2 *)(param_2 + 0x7a) = 0;
  if (*(longlong *)(param_1 + 0x180) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x180) + 0x54);
  }
  *(undefined1 *)(param_2 + 0x79) = uVar1;
  uVar2 = (**(code **)(*(longlong *)(param_1 + -0x990) + 0xed8))(param_1 + -0x990);
  *(undefined4 *)(param_2 + 0x120) = uVar2;
  uVar3 = FUN_140161e9a(param_1 + 0x3298);
  *(bool *)(param_2 + 0x78) = 1 < uVar3;
  *(undefined1 *)(param_2 + 0x7a) = *(undefined1 *)(param_1 + 0x4f8);
  return;
}



// FUNCTION 1401615fa FUN_1401615fa body=60 status=ok
// SIG undefined FUN_1401615fa(void)

uint FUN_1401615fa(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_140161a2c();
  if ((longlong *)param_1[0x4a0] != (longlong *)0x0) {
    uVar2 = (**(code **)(*(longlong *)param_1[0x4a0] + 0x898))();
    uVar1 = uVar1 | uVar2;
  }
  uVar2 = (**(code **)(*param_1 + 0x1068))(param_1);
  return uVar2 | uVar1;
}



// FUNCTION 140161636 FUN_140161636 body=100 status=ok
// SIG undefined FUN_140161636(void)

uint FUN_140161636(longlong param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)(param_1 + 0x24c4);
  local_1c = 0;
  cVar2 = FUN_14016169c(param_1,&local_1c);
  uVar3 = 0xc00;
  if (local_1c != 1) {
    uVar3 = 0x1200;
  }
  if (cVar2 == '\0') {
    uVar3 = 0x1200;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 | uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14016169c FUN_14016169c body=757 status=ok
// SIG undefined FUN_14016169c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14016169c(longlong param_1,uint *param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != (uint *)0x0) {
    *param_2 = (uint)*(byte *)(param_1 + 0x5a4);
  }
  lVar9 = *(longlong *)(param_1 + 0x430);
  if (lVar9 == 0) goto LAB_1401617f8;
  if (DAT_14cae9568 == 0) {
    local_60 = &local_48;
    local_48 = FUN_1417de738;
    local_50 = &LAB_145893408;
    local_58 = &LAB_1458cbbd2;
    local_68 = &LAB_147ba21f1;
    local_70 = &LAB_1463e9233;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x1000000c;
    local_90 = 8;
    local_98 = 0x2b8;
    FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    lVar9 = *(longlong *)(param_1 + 0x430);
    if (lVar9 != 0) goto LAB_1401616f1;
    if (_DAT_00000050 < 1) goto LAB_1401617f8;
LAB_14016197e:
    uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (param_2 == (uint *)0x0) goto LAB_14016175b;
LAB_14016198a:
    uVar10 = 0;
  }
  else {
LAB_1401616f1:
    if ((((DAT_14cae9568 == 0) || (lVar5 = *(longlong *)(lVar9 + 0x10), lVar5 == 0)) ||
        (*(int *)(lVar5 + 0x38) < *(int *)(DAT_14cae9568 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) !=
        DAT_14cae9568 + 0x30)) {
      lVar5 = FUN_140496b24();
      lVar9 = *(longlong *)(param_1 + 0x430);
      if ((lVar9 == 0) ||
         (((param_1 = 0, lVar5 != 0 && (lVar8 = *(longlong *)(lVar9 + 0x10), lVar8 != 0)) &&
          ((*(int *)(lVar8 + 0x38) < *(int *)(lVar5 + 0x38) ||
           (param_1 = lVar9,
           *(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
           lVar5 + 0x30)))))) {
        param_1 = 0;
      }
      if (0 < *(int *)(param_1 + 0x50)) goto LAB_14016197e;
      if (param_1 != 0) {
        lVar5 = FUN_14486dd68();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),lVar9 != 0);
          if ((lVar9 == 0 || param_2 == (uint *)0x0) ||
             (lVar5 = *(longlong *)(lVar9 + 0x1de8), lVar5 == 0)) goto LAB_14016175b;
          if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar9);
          }
          iVar1 = *(int *)(lVar5 + 0x50);
          if ((longlong)iVar1 != 0) {
            lVar5 = *(longlong *)(lVar5 + 0x48);
            uVar10 = 1;
            lVar8 = 0;
            bVar2 = DAT_14c950c29;
            do {
              if ((lVar9 != 0) && ((bVar2 & 1) != 0)) {
                FUN_1456cec3c(lVar9);
                bVar2 = DAT_14c950c29;
              }
              if (*(longlong *)(lVar5 + lVar8) == lVar9) goto LAB_1401618d3;
              uVar10 = (ulonglong)((int)uVar10 + 1);
              lVar8 = lVar8 + 8;
            } while ((longlong)iVar1 * 8 != lVar8);
          }
          goto LAB_14016198a;
        }
      }
LAB_1401617f8:
      uVar7 = 0;
      goto LAB_14016175b;
    }
    if ((*(uint *)(lVar9 + 8) & 0x10) == 0) {
      uVar6 = *(undefined8 *)(lVar9 + 0x20);
    }
    else {
      uVar6 = 0;
    }
    uVar3 = FUN_1447210f0(param_1);
    plVar4 = (longlong *)FUN_140161992(uVar6,uVar3);
    iVar1 = (int)plVar4[1];
    uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1 < (longlong)iVar1);
    if ((param_2 == (uint *)0x0) || (iVar1 < 2)) goto LAB_14016175b;
    lVar5 = (longlong)iVar1 << 3;
    uVar10 = 0;
    do {
      if (*(longlong *)(*plVar4 + uVar10 * 8) == lVar9) goto LAB_1401618d3;
      uVar10 = uVar10 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    uVar10 = 0xffffffff;
  }
LAB_1401618d3:
  *param_2 = (uint)uVar10;
LAB_14016175b:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 140161992 FUN_140161992 body=154 status=ok
// SIG undefined FUN_140161992(void)

undefined8 * FUN_140161992(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x1148);
    lVar5 = (longlong)*(int *)(param_1 + 0x1150) * 8;
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar1 + lVar6);
      if (*(longlong *)(lVar4 + 0x360) == param_2) {
        if (lVar4 != 0) goto LAB_1401619cb;
        break;
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 != lVar6);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar1 + lVar6);
      cVar2 = FUN_147dab532(lVar4 + 8,param_2);
      if (cVar2 != '\0') goto LAB_1401619cb;
      lVar6 = lVar6 + 8;
    } while (lVar5 != lVar6);
  }
  lVar4 = FUN_14572ad1a(DAT_14cb0d2b0,0);
LAB_1401619cb:
  puVar3 = &DAT_14cb0d060;
  if (*(longlong *)(lVar4 + 0x2a8) != 0) {
    puVar3 = (undefined8 *)(*(longlong *)(lVar4 + 0x2a8) + 0x38);
  }
  return puVar3;
}



// FUNCTION 140161a2c FUN_140161a2c body=298 status=ok
// SIG undefined FUN_140161a2c(void)

int FUN_140161a2c(longlong param_1)

{
  longlong lVar1;
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
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  if (lVar1 != 0) {
    if (DAT_14cb5b388 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_146431698;
      local_38 = &LAB_1486775cb;
      local_40 = &LAB_1464cee35;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000005;
      local_60 = 0x10;
      local_68 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) ==
        DAT_14cb5b388 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
    }
  }
  lVar1 = FUN_140161d51();
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1 << (*(byte *)(lVar1 + 0x28) & 0x1f);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140161c6e FUN_140161c6e body=227 status=ok
// SIG undefined FUN_140161c6e(void)

longlong * FUN_140161c6e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))();
  lVar4 = *plVar6;
  lVar7 = FUN_140161d51();
  uVar8 = (ulonglong)*(int *)(lVar7 + 0x48);
  if ((longlong)uVar8 < 1) {
    plVar6 = (longlong *)(lVar7 + 0x20);
  }
  else {
    plVar6 = *(longlong **)(lVar7 + 0x40);
    if (*plVar6 != lVar4) {
      uVar5 = 1;
      plVar11 = plVar6;
      do {
        uVar10 = uVar5;
        plVar9 = plVar6 + uVar8 * 4 + -4;
        if (uVar8 == uVar10) break;
        plVar9 = plVar11 + 4;
        plVar1 = plVar11 + 4;
        uVar5 = uVar10 + 1;
        plVar11 = plVar9;
      } while (*plVar1 != lVar4);
      plVar6 = (longlong *)(lVar7 + 0x20);
      if (uVar10 < uVar8) {
        plVar6 = plVar9;
      }
    }
  }
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1446f84a2(param_2,0);
  *(longlong *)*param_2 = lVar4;
  uVar2 = *(uint *)(plVar6 + 3);
  if ((longlong)(int)uVar2 != 0) {
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + uVar2;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar3) < uVar2) {
      FUN_1446f84a2(param_2,iVar3);
    }
    memcpy((void *)((longlong)iVar3 * 8 + *param_2),(void *)plVar6[2],(longlong)(int)uVar2 << 3);
  }
  return param_2;
}



// FUNCTION 140161d51 FUN_140161d51 body=328 status=ok
// SIG undefined FUN_140161d51(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140161d51(void)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb8de70 == (longlong *)0x0) {
    _DAT_14cb8de88 = 0;
    DAT_14cb8de80 = 0;
    plVar2 = &DAT_14cb8de80;
    _DAT_14cb8de90 = 0xffffffff;
    _DAT_14cb8de78 = &PTR_FUN_14b182370;
    _DAT_14cb8de98 = 0;
    _DAT_14cb8dea0 = 0x17;
    _DAT_14cb8dea8 = 0;
    uRam000000014cb8deb0 = 0;
    _DAT_14cb8deb8 = 0;
    uRam000000014cb8dec0 = 0;
    DAT_14cb8de70 = (longlong *)&DAT_14cb8de78;
LAB_140161d82:
    plVar4 = DAT_14cb8de70;
    if (*plVar2 == 0) goto LAB_140161e3b;
    cVar1 = FUN_1449e3c20(DAT_14cb8de70);
    if (cVar1 == '\0') goto LAB_140161d9c;
  }
  else {
    plVar2 = DAT_14cb8de70 + 1;
    if ((char)DAT_14cb8de70[2] == '\0') goto LAB_140161d82;
    if ((char)DAT_14cb8de70[2] == '\x02') {
      plVar2 = (longlong *)(*plVar2 + 0x30);
      goto LAB_140161d82;
    }
LAB_140161e3b:
    plVar4 = DAT_14cb8de70;
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_140161d9c;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_visibility_phase",0);
    FUN_140024ada(&local_48,plVar4);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar4 + 0x20))(plVar4);
LAB_140161d9c:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140161e9a FUN_140161e9a body=236 status=ok
// SIG undefined FUN_140161e9a(void)

int FUN_140161e9a(longlong param_1)

{
  PSRWLOCK pRVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  int iVar6;
  
  plVar5 = (longlong *)FUN_140161f86();
  lVar2 = *plVar5;
  pRVar1 = (PSRWLOCK)(lVar2 + 0xa0);
  AcquireSRWLockShared(pRVar1);
  cVar3 = *(char *)(lVar2 + 0x18);
  ReleaseSRWLockShared(pRVar1);
  iVar6 = 1;
  if (cVar3 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) != 0) &&
       (cVar3 = FUN_14030d2b6(*(longlong *)(param_1 + 0x28) + 0xd98,&DAT_14cbd96c0), cVar3 != '\0'))
    {
      return 1;
    }
    plVar5 = (longlong *)FUN_140161f86(param_1);
    lVar2 = *plVar5;
    pRVar1 = (PSRWLOCK)(lVar2 + 0xa0);
    AcquireSRWLockShared(pRVar1);
    cVar3 = *(char *)(lVar2 + 0x28);
    ReleaseSRWLockShared(pRVar1);
    iVar6 = 2;
    if (cVar3 == '\0') {
      plVar5 = (longlong *)FUN_140161f86(param_1);
      lVar2 = *plVar5;
      pRVar1 = (PSRWLOCK)(lVar2 + 0xa0);
      AcquireSRWLockShared(pRVar1);
      lVar2 = *(longlong *)(lVar2 + 0x3c);
      ReleaseSRWLockShared(pRVar1);
      if (lVar2 == 0) {
        if (*(longlong *)(param_1 + 0x28) == 0) {
          iVar6 = 0;
        }
        else {
          bVar4 = FUN_14030d2b6(*(longlong *)(param_1 + 0x28) + 0xd98,&DAT_14cbd96b8);
          iVar6 = (uint)bVar4 + (uint)bVar4 * 2;
        }
      }
    }
  }
  return iVar6;
}



// FUNCTION 140161f86 FUN_140161f86 body=447 status=ok
// SIG undefined FUN_140161f86(void)

code * FUN_140161f86(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  uint local_2c;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  ulonglong uVar8;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_1 + 0x28);
  uVar8 = 0;
  uVar7 = 0;
  uVar9 = uVar8;
  if ((lVar3 != 0) && (uVar6 = *(ulonglong *)(lVar3 + 0x430), uVar6 != 0)) {
    if (DAT_14cae9568 == 0) {
      local_50 = &local_28;
      local_28 = FUN_1417de738;
      local_40 = &LAB_145893408;
      local_48 = &LAB_1458cbbd2;
      local_58 = &LAB_147ba21f1;
      local_60 = &LAB_1463e9233;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x1000000c;
      local_80 = 8;
      local_88 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568);
      uVar6 = *(ulonglong *)(lVar3 + 0x430);
      uVar9 = uVar7;
      if (uVar6 == 0) goto LAB_140161ff9;
    }
    uVar9 = uVar8;
    if (((DAT_14cae9568 != 0) && (lVar3 = *(longlong *)(uVar6 + 0x10), uVar9 = uVar7, lVar3 != 0))
       && (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      uVar5 = (uint)(uVar6 >> 4);
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          != DAT_14cae9568 + 0x30) {
        uVar5 = 0;
      }
      uVar9 = (ulonglong)uVar5;
    }
  }
LAB_140161ff9:
  uVar5 = ((uint)(uVar9 >> 0x10) ^ (uint)uVar9) * -0x7a143595;
  local_2c = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  local_2c = local_2c >> 0x10 ^ local_2c;
  FUN_1448d5e3c(&local_28);
  pcVar4 = local_28;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar4 + 0x600;
}



// FUNCTION 140162146 FUN_140162146 body=8 status=ok
// SIG undefined FUN_140162146(void)

undefined8 FUN_140162146(void)

{
  return DAT_14c9a17d8;
}



// FUNCTION 14016215a FUN_14016215a body=116 status=ok
// SIG undefined FUN_14016215a(void)

void FUN_14016215a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140cd36ae(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146d9a3a0(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1401621ce FUN_1401621ce body=2652 status=ok
// SIG undefined FUN_1401621ce(void)

void FUN_1401621ce(longlong *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  int local_f4;
  longlong local_f0;
  uint local_e4;
  longlong *local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  longlong local_c8;
  uint *local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f0 = param_1[4];
  local_88 = 0;
  uStack_80 = 0;
  iVar16 = (int)param_1[0x3b];
  if (iVar16 < 0) {
LAB_140162c23:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar16);
  }
  if (iVar16 != 0) {
    FUN_1417b4232(&local_88);
    iVar16 = (int)param_1[0x3b];
    local_98 = 0;
    uStack_90 = 0;
    if (iVar16 < 0) goto LAB_140162c23;
    if (iVar16 != 0) {
      FUN_14052b4a8(&local_98);
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      if (0 < (int)param_1[0x3b]) {
        lVar13 = 0;
        do {
          lVar21 = lVar13 * 0x30;
          if ((*(longlong *)(param_1[0x3a] + 0x20 + lVar21) != 0) &&
             (lVar17 = *(longlong *)(param_1[0x3a] + lVar21 + 0x10), lVar17 != 0)) {
            if (*(longlong *)(lVar17 + 0x50) == 0) {
              FUN_14063ce9e(param_1);
            }
            else {
              lVar19 = param_1[0x51];
              if ((longlong)(int)lVar19 != 0) {
                lVar20 = param_1[0x50];
                lVar18 = 0;
                do {
                  cVar5 = FUN_1402105be(lVar20 + lVar18,lVar17);
                  if (cVar5 != '\0') {
                    uVar12 = (lVar18 >> 3) * -0x2c8590b21642c859;
                    uVar6 = (uint)uVar12;
                    if (uVar6 != 0xffffffff) {
                      iVar16 = (int)param_1[0x51];
                      iVar9 = ~uVar6 + iVar16;
                      if (iVar9 != 0) {
                        if (0 < iVar9) {
                          iVar9 = 1;
                        }
                        memmove((void *)((longlong)(int)uVar6 * 0xb8 + param_1[0x50]),
                                (void *)((longlong)(iVar16 - iVar9) * 0xb8 + param_1[0x50]),
                                (longlong)iVar9 * 0xb8);
                        iVar16 = (int)param_1[0x51];
                      }
                      *(int *)(param_1 + 0x51) = iVar16 + -1;
                      FUN_1433d7122(param_1 + 0x52,uVar12 & 0xffffffff);
                      goto LAB_140162404;
                    }
                    break;
                  }
                  lVar18 = lVar18 + 0xb8;
                } while ((longlong)(int)lVar19 * 0xb8 - lVar18 != 0);
              }
              uVar12 = uStack_a0;
              lVar19 = (longlong)(int)uStack_a0;
              uVar6 = (int)uStack_a0 + 1;
              uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar6);
              if (uStack_a0._4_4_ < uVar6) {
                FUN_1417b4af8(&local_a8,uVar12 & 0xffffffff);
              }
              uVar12 = uStack_b0;
              *(longlong *)(local_a8 + lVar19 * 8) = lVar17;
              lVar19 = param_1[0x3a];
              lVar20 = (longlong)(int)uStack_b0;
              uVar6 = (int)uStack_b0 + 1;
              uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar6);
              if (uStack_b0._4_4_ < uVar6) {
                FUN_1417b4cfa(&local_b8,uVar12 & 0xffffffff);
              }
              *(longlong *)(local_b8 + lVar20 * 8) = lVar19 + lVar21;
LAB_140162404:
              uVar12 = uStack_80;
              lVar19 = (longlong)(int)uStack_80;
              uVar6 = (int)uStack_80 + 1;
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
              if (uStack_80._4_4_ < uVar6) {
                FUN_140ed4548(&local_88,uVar12 & 0xffffffff);
              }
              FUN_140ed40b0(lVar19 * 0xb8 + local_88,lVar17);
              uVar12 = uStack_90;
              puVar22 = (undefined8 *)(lVar21 + param_1[0x3a]);
              lVar21 = (longlong)(int)uStack_90;
              uVar6 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar6);
              if (uStack_90._4_4_ < uVar6) {
                FUN_140166dde(&local_98,uVar12 & 0xffffffff);
              }
              lVar21 = lVar21 * 0x30;
              *(undefined8 *)(local_98 + lVar21) = *puVar22;
              lVar17 = puVar22[1];
              *(longlong *)(local_98 + 8 + lVar21) = lVar17;
              if (lVar17 != 0) {
                LOCK();
                *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
                UNLOCK();
              }
              lVar21 = local_98 + lVar21;
              *(undefined8 *)(lVar21 + 0x10) = puVar22[2];
              lVar17 = puVar22[3];
              *(longlong *)(lVar21 + 0x18) = lVar17;
              if ((DAT_14c950c29 == 1) && (lVar17 != 0)) {
                FUN_1456cec3c();
              }
              bVar4 = DAT_14c950c29;
              lVar17 = puVar22[4];
              *(longlong *)(lVar21 + 0x20) = lVar17;
              if (((bVar4 & 1) != 0) && (lVar17 != 0)) {
                FUN_1456cec3c();
                lVar17 = *(longlong *)(lVar21 + 0x20);
              }
              *(undefined1 *)(lVar21 + 0x2c) = *(undefined1 *)((longlong)puVar22 + 0x2c);
              *(undefined4 *)(lVar21 + 0x28) = *(undefined4 *)(puVar22 + 5);
              if (lVar17 != 0) {
                *(longlong *)(lVar21 + 0x10) = (longlong)((int)uStack_80 + -1) * 0xb8 + local_88;
              }
            }
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)param_1[0x3b]);
      }
      goto LAB_14016254a;
    }
  }
  uStack_90 = 0;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
LAB_14016254a:
  local_c0 = (uint *)(param_1 + 0x48);
  uVar6 = *(uint *)(param_1 + 0x4b);
  if (uVar6 == 0) {
    uVar14 = 1;
    uVar12 = 0;
    iVar16 = 0;
    uVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[0x4a];
    if ((uint *)param_1[0x4a] == (uint *)0x0) {
      puVar8 = local_c0;
    }
    uVar7 = *puVar8;
    if (uVar7 == 0) {
      iVar16 = uVar6 + 0x1e;
      if (-1 < (int)(uVar6 - 1)) {
        iVar16 = uVar6 - 1;
      }
      uVar12 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar12;
      }
      iVar16 = 0;
      do {
        if (uVar14 == uVar12) goto LAB_1401625e3;
        iVar16 = iVar16 + 0x20;
        uVar7 = puVar8[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar12 = 0;
      iVar16 = 0;
    }
    uVar14 = (ulonglong)(-uVar7 & uVar7);
    uVar23 = uVar14 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar7 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if ((int)uVar6 <= (int)uVar7) {
      uVar7 = uVar6;
    }
  }
  if (uVar7 != uVar6) {
    local_d8 = param_1 + 0x50;
    local_e0 = param_1 + 0x52;
    uVar15 = 0xffffffff;
    local_d0 = (ulonglong)uVar6;
    do {
      lVar13 = param_1[0x51];
      local_f4 = iVar16;
      local_e4 = uVar15;
      if ((longlong)(int)lVar13 != 0) {
        lVar21 = param_1[0x50];
        puVar22 = (undefined8 *)(param_1[0x46] + (longlong)(int)uVar7 * 0x18);
        uVar3 = *puVar22;
        lVar17 = 0;
        do {
          cVar5 = FUN_1402105be(lVar17 + lVar21,uVar3);
          if (cVar5 != '\0') {
            uVar23 = (lVar17 >> 3) * -0x2c8590b21642c859;
            uVar6 = (uint)uVar23;
            if (uVar6 != 0xffffffff) {
              lVar13 = *local_d8;
              lVar21 = (longlong)(int)uVar6 * 0xb8;
              if (*(longlong *)(lVar13 + 0x50 + lVar21) != 0) {
                lVar17 = *local_e0;
                cVar5 = (**(code **)(*param_1 + 0x360))(param_1);
                if (cVar5 != '\0') {
                  plVar2 = *(longlong **)(lVar13 + lVar21 + 0x50);
                  uVar1 = *(undefined1 *)(puVar22 + 1);
                  if (plVar2[4] == 0) {
LAB_140162a92:
                    lVar19 = 0;
                  }
                  else {
                    local_c8 = plVar2[4];
                    lVar13 = FUN_14063d1f6();
                    if ((*(int *)(*(longlong *)(local_c8 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38))
                       || (lVar19 = local_c8,
                          *(longlong *)
                           (*(longlong *)(*(longlong *)(local_c8 + 0x10) + 0x30) +
                           (longlong)*(int *)(lVar13 + 0x38) * 8) != lVar13 + 0x30))
                    goto LAB_140162a92;
                  }
                  local_108 = CONCAT71(local_108._1_7_,uVar1);
                  (**(code **)(*plVar2 + 0x2d0))
                            (plVar2,local_f0,lVar19,(longlong)(int)uVar6 * 0x30 + lVar17);
                }
              }
              if (((int)uVar6 < 0) || (iVar16 = (int)param_1[0x51], iVar16 <= (int)uVar6))
              goto LAB_1401628ca;
              iVar9 = ~uVar6 + iVar16;
              if (iVar9 != 0) {
                if (0 < iVar9) {
                  iVar9 = 1;
                }
                memmove((void *)(lVar21 + param_1[0x50]),
                        (void *)((ulonglong)(uint)(iVar16 - iVar9) * 0xb8 + param_1[0x50]),
                        (longlong)iVar9 * 0xb8);
                iVar16 = (int)param_1[0x51];
              }
              *(int *)(param_1 + 0x51) = iVar16 + -1;
              FUN_1478fc208(local_d8);
              plVar2 = local_e0;
              FUN_1433d7122(local_e0,uVar23 & 0xffffffff);
              FUN_1478fc2be(plVar2);
            }
            break;
          }
          lVar17 = lVar17 + 0xb8;
        } while ((longlong)(int)lVar13 * 0xb8 - lVar17 != 0);
      }
      uVar15 = local_e4 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[0x4a];
      if ((uint *)param_1[0x4a] == (uint *)0x0) {
        puVar8 = local_c0;
      }
      uVar6 = *(uint *)(param_1 + 0x4b);
      iVar9 = (int)uVar12;
      lVar13 = (longlong)iVar9;
      uVar7 = puVar8[lVar13] & uVar15;
      iVar16 = local_f4;
      if (uVar7 == 0) {
        iVar10 = uVar6 + 0x1e;
        if (-1 < (int)(uVar6 - 1)) {
          iVar10 = uVar6 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar16 = local_f4 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar9) {
          iVar11 = iVar9;
        }
        if (iVar9 < iVar10) {
          lVar21 = 0;
          do {
            uVar7 = puVar8[lVar13 + lVar21 + 1];
            if (uVar7 != 0) {
              uVar12 = (ulonglong)(iVar9 + (int)lVar21 + 1);
              uVar15 = 0xffffffff;
              goto LAB_140162bbd;
            }
            iVar16 = iVar16 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar11 - lVar13 != lVar21);
          uVar15 = 0xffffffff;
          iVar9 = iVar11;
        }
        uVar12 = (ulonglong)(iVar9 + 1);
        uVar7 = uVar6;
      }
      else {
LAB_140162bbd:
        uVar14 = (ulonglong)(-uVar7 & uVar7);
        uVar23 = uVar14 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar7 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if ((int)uVar6 <= (int)uVar7) {
          uVar7 = uVar6;
        }
      }
    } while (uVar7 != (uint)local_d0);
  }
LAB_1401625e3:
  if (0 < (int)param_1[0x51]) {
    lVar13 = 0x50;
    lVar21 = 0;
    lVar17 = 0;
    do {
      lVar19 = param_1[0x50];
      if (*(longlong *)(lVar19 + lVar13) != 0) {
        lVar20 = param_1[0x52];
        cVar5 = (**(code **)(*param_1 + 0x360))(param_1);
        if (cVar5 != '\0') {
          plVar2 = *(longlong **)(lVar19 + lVar13);
          lVar19 = plVar2[4];
          if (lVar19 == 0) {
LAB_140162652:
            lVar19 = 0;
          }
          else {
            lVar18 = FUN_14063d1f6();
            if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < *(int *)(lVar18 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar18 + 0x38) * 8) != lVar18 + 0x30)) goto LAB_140162652;
          }
          local_108 = local_108 & 0xffffffffffffff00;
          (**(code **)(*plVar2 + 0x2d0))(plVar2,local_f0,lVar19,lVar20 + lVar21);
        }
      }
      if ((int)param_1[0x51] <= lVar17) goto LAB_1401628ca;
      lVar17 = lVar17 + 1;
      lVar13 = lVar13 + 0xb8;
      lVar21 = lVar21 + 0x30;
    } while (lVar17 < (int)param_1[0x51]);
  }
  if (0 < (int)uStack_a0) {
    lVar13 = 0;
    do {
      lVar21 = *(longlong *)(local_a8 + lVar13 * 8);
      uVar12 = *(ulonglong *)(local_b8 + lVar13 * 8);
      cVar5 = (**(code **)(*param_1 + 0x360))(param_1,*(undefined8 *)(lVar21 + 0x50));
      if (cVar5 != '\0') {
        plVar2 = *(longlong **)(lVar21 + 0x50);
        uVar24 = FUN_140c1df26(lVar21);
        lVar21 = *(longlong *)(*(longlong *)(lVar21 + 0x50) + 0x20);
        if (lVar21 == 0) {
LAB_140162715:
          lVar21 = 0;
        }
        else {
          lVar17 = FUN_14063d1f6();
          if ((*(int *)(*(longlong *)(lVar21 + 0x10) + 0x38) < *(int *)(lVar17 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar17 + 0x38) * 8) != lVar17 + 0x30)) goto LAB_140162715;
        }
        local_108 = uVar12;
        (**(code **)(*plVar2 + 0x2b0))(plVar2,local_f0,lVar21,uVar24);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)uStack_a0);
  }
  if (param_1 + 0x50 != &local_88) {
    FUN_14499183d(param_1[0x50],(int)param_1[0x51]);
    if (param_1[0x50] != 0) {
      FUN_1400020a8();
    }
    param_1[0x50] = local_88;
    local_88 = 0;
    *(int *)(param_1 + 0x51) = (int)uStack_80;
    *(uint *)((longlong)param_1 + 0x28c) = uStack_80._4_4_;
    uStack_80 = 0;
  }
  if (param_1 + 0x52 != &local_98) {
    FUN_1448262fc(param_1[0x52],(int)param_1[0x53]);
    if (param_1[0x52] != 0) {
      FUN_1400020a8();
    }
    param_1[0x52] = local_98;
    local_98 = 0;
    *(int *)(param_1 + 0x53) = (int)uStack_90;
    *(uint *)((longlong)param_1 + 0x29c) = uStack_90._4_4_;
    uStack_90 = 0;
  }
  if (0 < (int)param_1[0x51]) {
    lVar13 = 0x50;
    lVar17 = 0;
    lVar21 = 0;
    do {
      lVar19 = param_1[0x50];
      lVar20 = param_1[0x52];
      cVar5 = (**(code **)(*param_1 + 0x360))(param_1,*(undefined8 *)(lVar19 + lVar13));
      if (cVar5 != '\0') {
        plVar2 = *(longlong **)(lVar19 + lVar13);
        lVar19 = plVar2[4];
        if (lVar19 == 0) {
LAB_14016288d:
          lVar19 = 0;
        }
        else {
          lVar18 = FUN_14063d1f6();
          if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < *(int *)(lVar18 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar18 + 0x38) * 8) != lVar18 + 0x30)) goto LAB_14016288d;
        }
        local_108 = lVar20 + lVar17;
        (**(code **)(*plVar2 + 0x2c0))(plVar2,local_f0,lVar19,param_2);
      }
      lVar21 = lVar21 + 1;
      lVar13 = lVar13 + 0xb8;
      lVar17 = lVar17 + 0x30;
    } while (lVar21 < (int)param_1[0x51]);
  }
LAB_1401628ca:
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1448262fc(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_14499183d(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140162c2c FUN_140162c2c body=61 status=ok
// SIG undefined FUN_140162c2c(void)

void FUN_140162c2c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x280);
  if (*(longlong *)(param_1 + 0x280) == 0) {
    lVar1 = param_1;
  }
  FUN_140162c69(lVar1,*(undefined4 *)(param_1 + 0x290));
  if (*(longlong *)(param_1 + 0x280) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140162c69 FUN_140162c69 body=91 status=ok
// SIG undefined FUN_140162c69(void)

void FUN_140162c69(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x70);
    do {
      FUN_144760e21(plVar1[3],(int)plVar1[4]);
      if (plVar1[3] != 0) {
        FUN_1400020a8();
      }
      FUN_144760e21(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140162cc4 FUN_140162cc4 body=269 status=ok
// SIG undefined FUN_140162cc4(void)

undefined8
FUN_140162cc4(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong param_6)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_3 + 0x18) != 0) {
    param_2 = FUN_140162dd2(param_3,param_2);
    if ((longlong)*(int *)(param_3 + 0x18) == 0) {
LAB_140162d86:
      param_1 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_3 + 0x10) + (longlong)*(int *)(param_3 + 0x18) * 0x18;
      iVar2 = *(int *)(lVar4 + -0x18);
      if (iVar2 == 0) {
        puVar3 = (undefined8 *)(lVar4 + -8);
      }
      else {
        if ((iVar2 != 2) && (iVar2 != 1)) goto LAB_140162d86;
        puVar3 = (undefined8 *)(*(longlong *)(lVar4 + -8) + 0x78);
      }
      param_1 = *puVar3;
    }
  }
  lVar4 = param_5;
  if (*(int *)(param_6 + 0x18) == 0) goto LAB_140162d8d;
  lVar4 = FUN_140162dd2(param_6,param_5);
  if ((longlong)*(int *)(param_6 + 0x18) == 0) {
LAB_140162d8b:
    param_4 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_6 + 0x10) + (longlong)*(int *)(param_6 + 0x18) * 0x18;
    iVar2 = *(int *)(lVar1 + -0x18);
    if (iVar2 == 0) {
      puVar3 = (undefined8 *)(lVar1 + -8);
    }
    else {
      if ((iVar2 != 2) && (iVar2 != 1)) goto LAB_140162d8b;
      puVar3 = (undefined8 *)(*(longlong *)(lVar1 + -8) + 0x78);
    }
    param_4 = *puVar3;
  }
LAB_140162d8d:
  if ((param_5 != 0) && (param_2 != 0)) {
    uVar5 = FUN_140877fda(param_1,param_2,param_4,lVar4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 140162dd2 FUN_140162dd2 body=337 status=ok
// SIG undefined FUN_140162dd2(void)

undefined8 * FUN_140162dd2(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 *local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar2 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar7 = 0;
    do {
      iVar3 = *(int *)(lVar4 + lVar7);
      if (iVar3 == 0) {
        lVar5 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x10 + lVar7) + 0x44);
        puVar6 = param_2;
LAB_140162e22:
        param_2 = (undefined8 *)((longlong)puVar6 + lVar5);
      }
      else {
        if (iVar3 == 1) {
          lVar5 = *(longlong *)(lVar4 + 0x10 + lVar7);
          bVar1 = *(byte *)(lVar5 + 0x70);
          (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x178))();
          iVar3 = *(int *)(lVar4 + 0xc + lVar7);
          if ((-1 < (longlong)iVar3) && (iVar3 < *(int *)(param_2 + 1))) {
            if ((bVar1 & 1) == 0) {
              puVar6 = (undefined8 *)*param_2;
            }
            else {
              puVar6 = (undefined8 *)*param_2;
              if (((ulonglong)puVar6 & 1) != 0) {
                puVar6 = (undefined8 *)((longlong)param_2 + ((longlong)puVar6 >> 0x18));
              }
            }
            lVar5 = (longlong)iVar3 * (longlong)*(int *)(*(longlong *)(lVar5 + 0x78) + 0x34);
            goto LAB_140162e22;
          }
          param_2 = (undefined8 *)0x0;
          break;
        }
        if (iVar3 == 2) {
          lVar5 = *(longlong *)(lVar4 + 0x10 + lVar7);
          local_60 = *(undefined1 *)(lVar5 + 0x98);
          local_90 = *(undefined8 *)(lVar5 + 0x70);
          local_88 = *(undefined8 *)(lVar5 + 0x78);
          local_58 = &local_90;
          local_78 = *(undefined4 *)(lVar5 + 0x80);
          uStack_74 = *(undefined4 *)(lVar5 + 0x84);
          uStack_70 = *(undefined4 *)(lVar5 + 0x88);
          uStack_6c = *(undefined4 *)(lVar5 + 0x8c);
          local_68 = *(undefined8 *)(lVar5 + 0x90);
          local_50 = lVar4 + 4 + lVar7;
          local_80 = param_2;
          local_48 = local_90;
          param_2 = (undefined8 *)FUN_145c51146();
        }
      }
      lVar7 = lVar7 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140162f24 FUN_140162f24 body=88 status=ok
// SIG undefined FUN_140162f24(void)

void FUN_140162f24(longlong param_1,longlong param_2)

{
  int iVar1;
  
  FUN_140162f7c(param_1 + 0x10);
  FUN_140162f7c(param_1 + 0x2b0,param_2 + 0x20);
  iVar1 = *(int *)(param_2 + 0x40);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 <= *(int *)(param_1 + 0x564)) {
    return;
  }
  FUN_147d0aef6(param_1 + 0x558);
  return;
}



// FUNCTION 140162f7c FUN_140162f7c body=225 status=ok
// SIG undefined FUN_140162f7c(void)

void FUN_140162f7c(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (-1 < iVar1) {
    if (*(int *)(param_1 + 0xc) < iVar1) {
      FUN_14798a816(param_1);
    }
    iVar1 = param_2[1];
    if (-1 < iVar1) {
      if (*(int *)(param_1 + 0x1c) < iVar1) {
        FUN_14798b2b8(param_1 + 0x10);
      }
      iVar1 = param_2[2];
      if (-1 < iVar1) {
        if (*(int *)(param_1 + 0x2c) < iVar1) {
          FUN_14798a876(param_1 + 0x20);
        }
        iVar1 = param_2[3];
        if (-1 < iVar1) {
          if (*(int *)(param_1 + 0x44) < iVar1) {
            FUN_14798a8d6(param_1 + 0x38);
          }
          iVar1 = param_2[4];
          if (-1 < iVar1) {
            if (*(int *)(param_1 + 0x5c) < iVar1) {
              FUN_14798a936(param_1 + 0x50);
            }
            iVar1 = param_2[5];
            if (-1 < iVar1) {
              if (*(int *)(param_1 + 0x6c) < iVar1) {
                FUN_14798b328(param_1 + 0x60);
              }
              iVar1 = param_2[6];
              if (-1 < iVar1) {
                if (*(int *)(param_1 + 0x174) < iVar1) {
                  FUN_1447e61a6(param_1 + 0x78);
                }
                iVar1 = param_2[7];
                if (-1 < iVar1) {
                  if (iVar1 <= *(int *)(param_1 + 0x294)) {
                    return;
                  }
                  FUN_1447e6282(param_1 + 0x180);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 14016305e FUN_14016305e body=65 status=ok
// SIG undefined FUN_14016305e(void)

void FUN_14016305e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x31) & 1) != 0) {
    lVar1 = **(longlong **)(param_1 + 0x1b0);
    if (lVar1 != 0) {
      if ((int)(uint)*(byte *)(lVar1 + 0x99) < *(int *)(lVar1 + 0x90)) {
        FUN_1401630a0(lVar1,param_1,param_2,*(byte *)(lVar1 + 0x99),*(int *)(lVar1 + 0x90));
      }
    }
  }
  return;
}



// FUNCTION 1401630a0 FUN_1401630a0 body=419 status=ok
// SIG undefined FUN_1401630a0(void)

void FUN_1401630a0(longlong param_1,longlong param_2,char param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_88 [47];
  char local_59;
  longlong local_58;
  byte local_4a;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == '\0') {
    bVar8 = (*(byte *)(param_2 + 0x31) & 4) >> 2;
  }
  else {
    bVar8 = 1;
    if (param_3 != '\x01') {
      bVar8 = 0;
    }
  }
  iVar10 = param_5 - param_4;
  local_59 = param_3;
  if (iVar10 == 0 || param_5 < param_4) {
    bVar7 = 0;
  }
  else {
    local_58 = param_1 + 8;
    uVar9 = (longlong)param_4 << 5 | 0x10;
    bVar7 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar6 = local_58;
      }
      puVar1 = *(undefined8 **)(lVar6 + -8 + uVar9);
      (**(code **)*puVar1)(puVar1,&local_4a,param_2);
      if (local_49 == '\x01') {
        lVar2 = *(longlong *)(lVar6 + uVar9);
        if (lVar2 == 0) {
          if (param_3 == '\x02' || bVar8 != 0) {
            bVar7 = bVar7 | local_4a;
          }
        }
        else {
          if ((*(int *)(lVar2 + 0x48) != 0) &&
             (plVar5 = *(longlong **)(lVar2 + 0x40), plVar5 != (longlong *)0x0)) {
            (**(code **)(*plVar5 + 0x60))(plVar5,param_2);
          }
          if (param_3 == '\x02' || bVar8 != 0) {
            lVar6 = *(longlong *)(lVar6 + uVar9);
            if (((*(int *)(lVar6 + 0x38) == 0) || (*(longlong **)(lVar6 + 0x30) == (longlong *)0x0))
               || (cVar3 = (**(code **)(**(longlong **)(lVar6 + 0x30) + 0x30))(), cVar3 == '\0')) {
              bVar4 = *(byte *)(lVar6 + 0x28);
            }
            else {
              if (*(int *)(lVar6 + 0x38) == 0) {
                plVar5 = (longlong *)0x0;
              }
              else {
                plVar5 = *(longlong **)(lVar6 + 0x30);
              }
              bVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,param_2);
            }
            bVar7 = bVar7 | bVar4;
          }
        }
      }
      uVar9 = uVar9 + 0x20;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (bVar8 == 0) {
    if (local_59 == '\x02') {
      *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) | bVar7;
      goto LAB_140163164;
    }
    if (local_59 != '\x04') goto LAB_140163164;
  }
  else {
    FUN_140163244(param_2,bVar7 | *(byte *)(param_1 + 0x98));
  }
  *(undefined1 *)(param_1 + 0x98) = 0;
LAB_140163164:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140163244 FUN_140163244 body=335 status=ok
// SIG undefined FUN_140163244(void)

void FUN_140163244(longlong *param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  
  if ((param_2 != 0) && ((*(byte *)((longlong)param_1 + 0x31) & 4) != 0)) {
    bVar10 = param_2 | 6;
    if ((param_2 & 4) == 0) {
      bVar10 = param_2;
    }
    if ((char)bVar10 < '\0') {
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 0x80;
      bVar10 = bVar10 | 1;
    }
    if (((*(byte *)((longlong)param_1 + 0x31) & 0x40) == 0) || ((bVar10 & 8) != 0)) {
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 0x80;
      bVar10 = bVar10 | 0x81;
    }
    if ((bVar10 & 4) == 0) {
      cVar6 = FUN_1400d1184(param_1 + 3,param_1);
      if (cVar6 != '\0') {
LAB_140163323:
        FUN_14693554a(param_1 + 3,bVar10);
        return;
      }
    }
    else {
      bVar3 = *(byte *)(param_1 + 6);
      bVar9 = 0x20;
      bVar7 = bVar3;
      if ((bVar3 & 0x10) == 0) {
        cVar6 = (**(code **)(*param_1 + 0x220))(param_1);
        bVar9 = cVar6 << 5;
        bVar7 = *(byte *)(param_1 + 6);
      }
      *(byte *)(param_1 + 6) = bVar7 & 0xdf | bVar9;
      cVar6 = FUN_1400d1184(param_1 + 3,param_1);
      if (cVar6 != '\0') {
        if ((bool)((bVar3 & 0x20) >> 5) != (bVar9 != 0)) {
          plVar4 = (longlong *)param_1[0x39];
          if (plVar4 == (longlong *)0x0) {
LAB_140163319:
            FUN_14287b63c(param_1,0);
          }
          else {
            iVar8 = (int)plVar4[1];
            do {
              if (iVar8 == 0) goto LAB_140163319;
              LOCK();
              iVar5 = (int)plVar4[1];
              bVar11 = iVar8 == iVar5;
              if (bVar11) {
                *(int *)(plVar4 + 1) = iVar8 + 1;
                iVar5 = iVar8;
              }
              iVar8 = iVar5;
              UNLOCK();
            } while (!bVar11);
            if (param_1[0x38] == 0) {
              bVar7 = 0;
            }
            else {
              bVar3 = *(byte *)(param_1[0x38] + 0x30);
              bVar7 = 1;
              if ((bVar3 & 0x20) == 0) {
                bVar7 = (bVar3 & 0x40) >> 6;
              }
            }
            FUN_14287b63c(param_1,bVar7);
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
        goto LAB_140163323;
      }
    }
  }
  return;
}



// FUNCTION 140163394 FUN_140163394 body=289 status=ok
// SIG undefined FUN_140163394(void)

void FUN_140163394(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar5 = (ulonglong)(uVar2 * 2);
  if (uVar5 <= param_3) {
    uVar5 = param_3;
  }
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar5 * 4,&local_50);
  FUN_144b3d470(uVar3,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar5 * 4 + 4;
  uVar4 = uVar5;
  if (uVar1 <= local_50) {
    uVar4 = uVar5 + 1;
    local_50 = local_50 - 4;
    if (uVar1 <= local_50) {
      uVar4 = uVar4 + (local_50 + uVar5 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,((ulonglong)uVar2 & 0x7fffffff) << 2);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401634b6 FUN_1401634b6 body=200 status=ok
// SIG undefined FUN_1401634b6(void)

void FUN_1401634b6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x18;
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0xaf8 + uVar3 * 4) == 2) {
      iVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x28))(lVar1,uVar3 & 0xffffffff);
      *(int *)(param_1 + 0xaf8 + uVar3 * 4) = iVar2;
      if (iVar2 != 2) goto LAB_14016352f;
    }
    else {
LAB_14016352f:
      FUN_14980aa14(lVar1,local_68,uVar3 & 0xffffffff);
      local_78 = local_68;
      FUN_1415e91ea(local_58,param_1,DAT_14cc284f8,uVar3 & 0xffffffff);
      FUN_14980abb4(lVar1,uVar3 & 0xffffffff,param_1 + 8);
      FUN_14011623c(local_58);
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == 4) {
      FUN_1401635f2(param_1);
      if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 140163580 FUN_140163580 body=112 status=ok
// SIG undefined FUN_140163580(void)

char FUN_140163580(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0;
  iVar2 = FUN_144b3dc50(*(undefined4 *)(param_1 + 0x318 + (longlong)param_2 * 0x278));
  if (iVar2 == 0) {
    cVar1 = '\0';
    if (local_c != 1) {
      cVar1 = (local_c != 2) + '\x01';
    }
  }
  else {
    cVar1 = '\x02';
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401635f2 FUN_1401635f2 body=483 status=ok
// SIG undefined FUN_1401635f2(void)

void FUN_1401635f2(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0xdb8);
  local_78 = 0;
  uStack_70 = 0;
  lVar6 = param_1 + 0xdc8;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar7 = 0;
  local_58 = lVar6;
  if (*(int *)(param_1 + 0xde0) != 0) {
    FUN_1449c0562(&local_60);
    iVar7 = *(int *)(param_1 + 0xde0);
  }
  local_88 = local_50;
  iStack_84 = iStack_4c;
  local_80 = local_48;
  local_7c = local_44;
  local_98 = local_60;
  local_90 = local_58;
  local_a0 = plVar1;
  if ((iStack_4c != iVar7) || (local_58 != lVar6)) {
    do {
      uVar4 = uStack_70;
      puVar2 = (undefined8 *)(*local_a0 + (longlong)iStack_84 * 0x20);
      lVar8 = *(longlong *)(*local_a0 + 8 + (longlong)iStack_84 * 0x20);
      if (*(int *)(lVar8 + 0x10) + *(int *)(lVar8 + 0x14) == 0) {
        lVar8 = (longlong)(int)uStack_70;
        uVar5 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
        if (uStack_70._4_4_ < uVar5) {
          FUN_14980acbe(&local_78,uVar4 & 0xffffffff);
        }
        *(undefined8 *)(local_78 + lVar8 * 8) = *puVar2;
      }
      else {
        plVar3 = (longlong *)puVar2[1];
        if (*(char *)(param_1 + 0xb28 + (longlong)*(int *)((longlong)puVar2 + 4)) == '\x01') {
          (**(code **)*plVar3)
                    (plVar3,*(undefined4 *)
                             (param_1 + 0xaf8 + (longlong)*(int *)((longlong)puVar2 + 4) * 4));
        }
        else {
          (**(code **)(*plVar3 + 8))();
        }
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
      lVar8 = local_78;
    } while (((iStack_84 != iVar7) || (local_90 != lVar6)) || (local_a0 != plVar1));
    lVar6 = (longlong)(int)uStack_70;
    if (lVar6 != 0) {
      lVar9 = 0;
      do {
        FUN_14980ad44(plVar1,*(undefined8 *)(lVar8 + lVar9));
        lVar9 = lVar9 + 8;
      } while (lVar6 * 8 != lVar9);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401637d6 FUN_1401637d6 body=42 status=ok
// SIG undefined FUN_1401637d6(void)

void FUN_1401637d6(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_140163800();
    return;
  }
  return;
}



// FUNCTION 140163800 FUN_140163800 body=332 status=ok
// SIG undefined FUN_140163800(void)

void FUN_140163800(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14016386e;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_14016386e:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0xc)) {
      uVar5 = uVar3 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0xc,4);
  }
  return;
}



// FUNCTION 14016394c FUN_14016394c body=64 status=ok
// SIG undefined FUN_14016394c(void)

undefined8 FUN_14016394c(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14016398c();
  if (cVar1 != '\0') {
    if ((*(byte *)(param_1 + 0x104) & 4) == 0) {
      FUN_1402bffc2(param_1);
    }
    uVar2 = FUN_1447fa3ae(param_1 + 0x130);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14016398c FUN_14016398c body=130 status=ok
// SIG undefined FUN_14016398c(void)

bool FUN_14016398c(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  byte bVar4;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))();
    bVar4 = 4;
    if (iVar3 != 2) {
      bVar4 = DAT_14ca9a438 ^ 1;
    }
    FUN_1449b3b46(*(undefined8 *)(param_1 + 0x38),bVar4);
    if ((*(int *)(*(longlong *)(param_1 + 0x38) + 0x60) == 0) &&
       (puVar2 = *(undefined8 **)(param_1 + 0x38), puVar2 != (undefined8 *)0x0)) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 100);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && ((*(int *)(puVar2 + 0xc) == 0 && (*(int *)(puVar2 + 0xb) == 0)))) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  return *(longlong *)(param_1 + 0x38) == 0;
}



// FUNCTION 140163a0e FUN_140163a0e body=2001 status=ok
// SIG undefined FUN_140163a0e(void)

_RTL_CRITICAL_SECTION *
FUN_140163a0e(LPCRITICAL_SECTION param_1,HANDLE param_2,ulonglong param_3,HANDLE param_4,
             char param_5,char param_6,uint param_7,uint param_8)

{
  WORD *pWVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  _RTL_CRITICAL_SECTION *p_Var3;
  _LIST_ENTRY *p_Var4;
  int iVar5;
  uint uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  _LIST_ENTRY *p_Var10;
  HANDLE pvVar11;
  undefined7 uVar12;
  HANDLE *ppvVar13;
  LPCRITICAL_SECTION p_Var14;
  uint *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  _RTL_CRITICAL_SECTION *p_Var22;
  longlong *plVar23;
  _LIST_ENTRY *p_Var24;
  longlong lVar25;
  undefined1 auStack_118 [39];
  bool local_f1;
  ulonglong local_f0;
  HANDLE local_e8;
  _LIST_ENTRY *local_e0;
  uint local_d4;
  longlong local_d0;
  _LIST_ENTRY *local_c8;
  LPCRITICAL_SECTION local_c0;
  ulonglong local_b8;
  _RTL_CRITICAL_SECTION **local_b0;
  _LIST_ENTRY *local_a8;
  HANDLE local_a0 [9];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_3 != 0) {
    if ((DAT_14c949800 & 1) == 0) {
LAB_140163a97:
      EnterCriticalSection(param_1);
      p_Var14 = param_1;
    }
    else {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar7 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60), iVar7 != 2)) {
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_1401641bc;
        }
        goto LAB_140163a97;
      }
LAB_1401641bc:
      p_Var14 = (LPCRITICAL_SECTION)0x0;
    }
    iVar7 = (int)param_1[4].SpinCount;
    if (iVar7 != 0) {
      uVar6 = (uint)((ulonglong)param_4 >> 0x10);
      uVar19 = (uint)param_4 & 0xffff;
      uVar6 = (uVar19 >> 4) +
              (uVar6 << 0x13 | uVar6 & 0xffff) +
              (uint)param_4 * 0x10000 + uVar19 +
              (int)(param_3 >> 6) + (int)((ulonglong)param_4 >> 0x20);
      p_Var2 = param_1[3].DebugInfo;
      ppvVar13 = &param_1[4].OwningThread;
      if (param_1[4].LockSemaphore != (HANDLE *)0x0) {
        ppvVar13 = param_1[4].LockSemaphore;
      }
      p_Var22 = (_RTL_CRITICAL_SECTION *)0x0;
      iVar7 = *(int *)((longlong)ppvVar13 + (longlong)(int)(iVar7 - 1U & uVar6) * 4);
      do {
        iVar20 = iVar7;
        if (iVar20 == -1) goto LAB_140163c0b;
        iVar7 = *(int *)(&p_Var2->CriticalSection + (longlong)iVar20 * 2);
      } while (*(uint *)(&p_Var2->Type + (longlong)iVar20 * 8) != uVar6);
      do {
        uVar19 = *(uint *)(&p_Var2->field_0x4 + (longlong)iVar20 * 0x10);
        if ((int)uVar19 < DAT_14c9647dc) {
          plVar23 = (longlong *)
                    ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
        }
        else {
          plVar23 = (longlong *)0x0;
        }
        p_Var22 = (_RTL_CRITICAL_SECTION *)*plVar23;
        if (((p_Var22->LockSemaphore != param_4) || ((param_7 & p_Var22->LockCount) != 0)) ||
           (p_Var22->SpinCount != param_3)) goto LAB_140163be5;
        if (param_2 == (HANDLE)0x0) {
LAB_140163bbb:
          uVar19 = p_Var22->RecursionCount;
          if ((int)uVar19 < DAT_14c9647dc) {
            lVar25 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
          }
          else {
            lVar25 = 0;
          }
          if ((*(uint *)(lVar25 + 8) & (param_8 | 0x10000000)) == 0) goto LAB_140163c0b;
        }
        else {
          pvVar11 = p_Var22->OwningThread;
          if (param_5 == '\0') {
            if ((*(int *)((longlong)param_2 + 0x38) <= *(int *)((longlong)pvVar11 + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)((longlong)pvVar11 + 0x30) +
                 (longlong)*(int *)((longlong)param_2 + 0x38) * 8) == (longlong)param_2 + 0x30U))
            goto LAB_140163bbb;
          }
          else if (pvVar11 == param_2) goto LAB_140163bbb;
        }
LAB_140163be5:
        do {
          iVar20 = iVar7;
          if (iVar20 == -1) goto LAB_140163c08;
          iVar7 = *(int *)(&p_Var2->CriticalSection + (longlong)iVar20 * 2);
        } while (*(uint *)(&p_Var2->Type + (longlong)iVar20 * 8) != uVar6);
      } while( true );
    }
LAB_140163c08:
    p_Var22 = (_RTL_CRITICAL_SECTION *)0x0;
LAB_140163c0b:
    if (p_Var14 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(p_Var14);
    }
    goto LAB_140163d39;
  }
  FUN_1449232c8(local_a0,param_4);
  pvVar11 = local_a0[0];
  if ((DAT_14c949800 & 1) == 0) {
LAB_140163c73:
    EnterCriticalSection(param_1);
    p_Var14 = param_1;
  }
  else {
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar7 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar7 != 2)) {
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_1401641d8;
      }
      goto LAB_140163c73;
    }
LAB_1401641d8:
    p_Var14 = (LPCRITICAL_SECTION)0x0;
  }
  if (param_1[1].LockCount == param_1[2].RecursionCount) {
LAB_140163d16:
    p_Var22 = (_RTL_CRITICAL_SECTION *)0x0;
  }
  else {
    uVar6 = (uint)((ulonglong)pvVar11 >> 0x10);
    uVar19 = (uint)pvVar11 & 0xffff;
    uVar6 = (uVar19 >> 4) +
            ((uint)pvVar11 << 0x10 | uVar19) + (int)((ulonglong)pvVar11 >> 0x20) +
            (uVar6 << 0x13 | uVar6 & 0xffff);
    ppvVar13 = &param_1[2].OwningThread;
    if (param_1[2].LockSemaphore != (HANDLE *)0x0) {
      ppvVar13 = param_1[2].LockSemaphore;
    }
    iVar7 = *(int *)((longlong)ppvVar13 + (ulonglong)((int)param_1[2].SpinCount - 1U & uVar6) * 4);
    if (iVar7 == -1) goto LAB_140163d16;
    p_Var22 = (_RTL_CRITICAL_SECTION *)0x0;
    do {
      pWVar1 = &(param_1[1].DebugInfo)->Type + (longlong)iVar7 * 0x10;
      if (*(uint *)(&(param_1[1].DebugInfo)->Type + (longlong)iVar7 * 0x10) == uVar6) {
        local_b0 = (_RTL_CRITICAL_SECTION **)(pWVar1 + 4);
        if (local_b0 == (_RTL_CRITICAL_SECTION **)0x0 || pWVar1 == (WORD *)0x0) goto LAB_140163d16;
        p_Var3 = *(_RTL_CRITICAL_SECTION **)(pWVar1 + 4);
        p_Var4 = ((LIST_ENTRY *)(pWVar1 + 8))->Flink;
        local_f0 = 0;
        if (p_Var3 == (_RTL_CRITICAL_SECTION *)0x0 && p_Var4 != (_LIST_ENTRY *)0x0) {
          p_Var24 = p_Var4 + 1;
          iVar7 = *(int *)&p_Var4[2].Blink;
          uVar17 = 1;
          local_e0 = p_Var4;
          if (iVar7 == 0) {
            iVar20 = 0;
            iVar18 = 0;
            goto LAB_140163f37;
          }
          p_Var10 = p_Var4[2].Flink;
          if (p_Var4[2].Flink == (_LIST_ENTRY *)0x0) {
            p_Var10 = p_Var24;
          }
          uVar6 = *(uint *)&p_Var10->Flink;
          if (uVar6 == 0) {
            iVar20 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar20 = iVar7 + -1;
            }
            uVar21 = 0;
            uVar17 = (ulonglong)(uint)(iVar20 >> 5);
            if (iVar20 >> 5 < 1) {
              uVar17 = uVar21;
            }
            iVar18 = (int)uVar17;
            uVar19 = 0;
            goto LAB_140163ebf;
          }
        }
        else {
          local_e0 = (_LIST_ENTRY *)&DAT_14c964320;
          uVar17 = 1;
          if (DAT_14c964348 == 0) {
            p_Var24 = (_LIST_ENTRY *)&DAT_14c964330;
            iVar20 = 0;
            iVar18 = 0;
            goto LAB_140163f37;
          }
          p_Var24 = (_LIST_ENTRY *)&DAT_14c964330;
          puVar15 = DAT_14c964340;
          if (DAT_14c964340 == (uint *)0x0) {
            puVar15 = &DAT_14c964330;
          }
          uVar6 = *puVar15;
          iVar7 = DAT_14c964348;
          if (uVar6 == 0) {
            iVar20 = DAT_14c964348 + 0x1e;
            if (-1 < DAT_14c964348 + -1) {
              iVar20 = DAT_14c964348 + -1;
            }
            uVar21 = 0;
            uVar17 = (ulonglong)(uint)(iVar20 >> 5);
            if (iVar20 >> 5 < 1) {
              uVar17 = uVar21;
            }
            iVar18 = (int)uVar17;
            uVar19 = 0;
            goto LAB_140163e38;
          }
        }
        iVar18 = 0;
        uVar19 = 0;
        goto LAB_140163edf;
      }
      iVar7 = *(int *)(pWVar1 + 0xc);
    } while (iVar7 != -1);
  }
LAB_140163d19:
  if (p_Var14 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var14);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_140163d39:
  if ((p_Var22 != (_RTL_CRITICAL_SECTION *)0x0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(p_Var22);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return p_Var22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    uVar19 = uVar19 + 0x20;
    uVar6 = *(uint *)((longlong)&p_Var10->Flink + uVar21 * 4 + 4);
    uVar21 = uVar21 + 1;
    if (uVar6 != 0) break;
LAB_140163ebf:
    if (uVar17 == uVar21) goto LAB_14016419f;
  }
  goto LAB_140163ed9;
  while( true ) {
    uVar19 = uVar19 + 0x20;
    uVar6 = puVar15[uVar21 + 1];
    uVar21 = uVar21 + 1;
    if (uVar6 != 0) break;
LAB_140163e38:
    if (uVar17 == uVar21) goto LAB_14016419f;
  }
LAB_140163ed9:
  iVar18 = (int)uVar21;
LAB_140163edf:
  uVar17 = (ulonglong)(-uVar6 & uVar6);
  uVar21 = uVar17 * 2 + 1;
  lVar25 = 0x3f;
  if (uVar21 != 0) {
    for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
    }
  }
  iVar20 = (uVar19 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
  if (iVar7 <= iVar20) {
    iVar20 = iVar7;
  }
LAB_140163f12:
  local_f0 = (ulonglong)uVar19;
LAB_140163f37:
  local_f1 = p_Var4 == (_LIST_ENTRY *)0x0 && p_Var3 == (_RTL_CRITICAL_SECTION *)0x0;
  local_d0 = (longlong)param_2 + 0x30;
  uVar6 = 0xffffffff;
  local_b8 = 0;
  local_e8 = param_2;
  local_d4 = param_8 | 0x10000000;
LAB_140163f65:
  local_a8 = (_LIST_ENTRY *)(local_b0 + (local_b8 & 0xff));
  iVar7 = iVar20;
LAB_140163f7b:
  iVar20 = iVar7;
  do {
    if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0 || p_Var4 == (_LIST_ENTRY *)0x0) {
      p_Var10 = local_a8;
      if ((local_f1 & 1U) != 0) goto LAB_140163d16;
    }
    else {
      if (*(int *)&p_Var24[1].Blink <= iVar20) goto LAB_140163d16;
      p_Var10 = local_e0->Flink + iVar20;
    }
    p_Var22 = (_RTL_CRITICAL_SECTION *)p_Var10->Flink;
    pvVar11 = p_Var22->LockSemaphore;
    if (((pvVar11 != local_a0[0]) ||
        (pvVar11 = (HANDLE)(ulonglong)(uint)p_Var22->LockCount, (param_7 & p_Var22->LockCount) != 0)
        ) || ((param_6 == '\0' && (p_Var22->SpinCount != 0)))) goto LAB_140163fd0;
    if (local_e8 == (HANDLE)0x0) {
LAB_1401640bc:
      uVar19 = p_Var22->RecursionCount;
      if ((int)uVar19 < DAT_14c9647dc) {
        lVar25 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
      }
      else {
        lVar25 = 0;
      }
      pvVar11 = (HANDLE)(ulonglong)*(uint *)(lVar25 + 8);
      if (((local_d4 & *(uint *)(lVar25 + 8)) == 0) &&
         (local_c8 = p_Var24, local_c0 = p_Var14,
         pvVar11 = (HANDLE)FUN_140278fd0(local_a0,p_Var22->SpinCount), p_Var24 = local_c8,
         p_Var14 = local_c0, (char)pvVar11 != '\0')) goto LAB_140163d19;
    }
    else {
      pvVar11 = p_Var22->OwningThread;
      if (param_5 == '\0') {
        if ((*(int *)((longlong)local_e8 + 0x38) <= *(int *)((longlong)pvVar11 + 0x38)) &&
           (pvVar11 = *(HANDLE *)((longlong)pvVar11 + 0x30),
           *(longlong *)((longlong)pvVar11 + (longlong)*(int *)((longlong)local_e8 + 0x38) * 8) ==
           local_d0)) goto LAB_1401640bc;
      }
      else if (pvVar11 == local_e8) goto LAB_1401640bc;
    }
LAB_140163fd0:
    if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0 || p_Var4 == (_LIST_ENTRY *)0x0) {
      local_f1 = true;
      uVar21 = local_b8 & 1;
      uVar12 = (undefined7)((ulonglong)pvVar11 >> 8);
      local_b8 = CONCAT71(uVar12,1);
      if (uVar21 == 0) {
        local_f1 = ((LIST_ENTRY *)(pWVar1 + 8))->Flink == (_LIST_ENTRY *)0x0;
        local_b8 = CONCAT71(uVar12,1);
      }
      goto LAB_140163f65;
    }
    uVar6 = uVar6 & ~(uint)uVar17;
    p_Var10 = p_Var24[1].Flink;
    if (p_Var24[1].Flink == (_LIST_ENTRY *)0x0) {
      p_Var10 = p_Var24;
    }
    iVar20 = *(int *)&p_Var24[1].Blink;
    lVar25 = (longlong)iVar18;
    uVar19 = *(uint *)((longlong)&p_Var10->Flink + lVar25 * 4) & uVar6;
    if (uVar19 != 0) goto LAB_140164144;
    iVar7 = iVar20 + 0x1e;
    if (-1 < iVar20 + -1) {
      iVar7 = iVar20 + -1;
    }
    iVar7 = iVar7 >> 5;
    local_f0 = (ulonglong)((int)local_f0 + 0x20);
    iVar5 = iVar7;
    if (iVar7 < iVar18) {
      iVar5 = iVar18;
    }
    if (iVar18 < iVar7) {
      lVar16 = 0;
      do {
        uVar19 = *(uint *)((longlong)&p_Var10->Flink + lVar25 * 4 + lVar16 * 4 + 4);
        if (uVar19 != 0) {
          iVar18 = iVar18 + (int)lVar16 + 1;
          uVar6 = 0xffffffff;
          goto LAB_140164144;
        }
        local_f0 = (ulonglong)((int)local_f0 + 0x20);
        lVar16 = lVar16 + 1;
      } while (iVar5 - lVar25 != lVar16);
      uVar6 = 0xffffffff;
      iVar18 = iVar5;
    }
    iVar18 = iVar18 + 1;
  } while( true );
LAB_14016419f:
  uVar19 = iVar18 * 0x20 + 0x20;
  iVar18 = iVar18 + 1;
  uVar17 = 1;
  iVar20 = iVar7;
  goto LAB_140163f12;
LAB_140164144:
  uVar17 = (ulonglong)(-uVar19 & uVar19);
  uVar21 = uVar17 * 2 + 1;
  lVar25 = 0x3f;
  if (uVar21 != 0) {
    for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
    }
  }
  iVar7 = ((int)local_f0 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
  if (iVar20 <= iVar7) {
    iVar7 = iVar20;
  }
  goto LAB_140163f7b;
}



// FUNCTION 1401641e0 FUN_1401641e0 body=93 status=ok
// SIG undefined FUN_1401641e0(void)

void FUN_1401641e0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_14016423e();
  return;
}



// FUNCTION 14016423e FUN_14016423e body=265 status=ok
// SIG undefined FUN_14016423e(void)

void FUN_14016423e(undefined8 *param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if ((param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,param_4);
    }
    _Src = (void *)*param_1;
    iVar3 = (int)param_4 * param_3;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar5 = (ulonglong)((uint)(0xf < iVar3) * 8);
    lVar1 = uVar5 + 7;
    uVar5 = uVar5 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar5);
    uVar4 = (longlong)_Dst + (longlong)iVar3;
    if (puVar2[1] < uVar4) {
      FUN_140023dd8(puVar2,(uint)(0xf < iVar3) * 8 + 8 + iVar3);
      _Dst = (void *)(lVar1 + *puVar2 & uVar5);
      uVar4 = (longlong)iVar3 + (longlong)_Dst;
    }
    *puVar2 = uVar4;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,param_2 * param_4);
      return;
    }
  }
  return;
}



// FUNCTION 140164348 FUN_140164348 body=251 status=ok
// SIG undefined FUN_140164348(void)

undefined8 * FUN_140164348(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_50;
  char local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 8) = 0xff;
  *param_1 = *param_2;
  if (*(byte *)(param_2 + 4) < 5) {
    switch(*(byte *)(param_2 + 4)) {
    case 0:
      local_68 = 0;
      local_38 = '\0';
      break;
    case 1:
      local_68 = *(undefined8 *)((longlong)param_2 + 0x24);
      uStack_60 = *(undefined4 *)((longlong)param_2 + 0x2c);
      uStack_5c = *(undefined4 *)(param_2 + 6);
      local_38 = '\x01';
      break;
    case 2:
      local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)((longlong)param_2 + 0x34));
      local_38 = '\x02';
      break;
    case 3:
      local_68 = param_2[8];
      uStack_60 = *(undefined4 *)(param_2 + 9);
      uStack_5c = *(undefined4 *)((longlong)param_2 + 0x4c);
      local_38 = '\x03';
      break;
    case 4:
      local_38 = -1;
      FUN_140164542(&local_68,param_2 + 10);
      FUN_140164444(param_1 + 2,&local_68);
      if (local_38 == '\x04') {
        local_38 = -1;
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_1401643a8;
    }
    FUN_140164444(param_1 + 2);
  }
LAB_1401643a8:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140164444 FUN_140164444 body=201 status=ok
// SIG undefined FUN_140164444(void)

undefined8 * FUN_140164444(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  switch(*(char *)(param_2 + 6)) {
  case '\0':
    uVar2 = *param_2;
    FUN_14016450e(param_1);
    *param_1 = uVar2;
    *(undefined1 *)(param_1 + 6) = 0;
    break;
  case '\x01':
    FUN_14016450e(param_1);
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    *(undefined1 *)(param_1 + 6) = 1;
    break;
  case '\x02':
    uVar1 = *(undefined4 *)param_2;
    FUN_14016450e(param_1);
    *(undefined4 *)param_1 = uVar1;
    *(undefined1 *)(param_1 + 6) = 2;
    break;
  case '\x03':
    FUN_14016450e(param_1);
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    *(undefined1 *)(param_1 + 6) = 3;
    break;
  case '\x04':
    FUN_140164542(param_1,param_2);
    break;
  case '\x05':
    FUN_14016450e(param_1);
    *(undefined1 *)(param_1 + 6) = 5;
    break;
  default:
    if (*(char *)(param_2 + 6) != -1) {
      FUN_140033559("Runtime\\Core\\Public\\Containers/Union.h",0x18e,L"Unrecognized TUnion subtype"
                   );
    }
  }
  return param_1;
}



// FUNCTION 14016450e FUN_14016450e body=51 status=ok
// SIG undefined FUN_14016450e(void)

void FUN_14016450e(longlong param_1)

{
  switch(*(undefined1 *)(param_1 + 0x30)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    *(undefined1 *)(param_1 + 0x30) = 0xff;
    break;
  case 4:
    *(undefined1 *)(param_1 + 0x30) = 0xff;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
      return;
    }
  }
  return;
}



// FUNCTION 140164542 FUN_140164542 body=118 status=ok
// SIG undefined FUN_140164542(void)

undefined8 * FUN_140164542(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_14016450e();
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 6) = 4;
  return param_1;
}



// FUNCTION 1401645b8 FUN_1401645b8 body=104 status=ok
// SIG undefined FUN_1401645b8(void)

void FUN_1401645b8(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  (**(code **)(*param_1 + 0x2c0))(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140164622 FUN_140164622 body=196 status=ok
// SIG undefined FUN_140164622(void)

void FUN_140164622(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(*param_2 + 8);
  if ((*(byte *)(lVar4 + 0x2b) & 2) == 0) {
    if ((*(byte *)(lVar4 + 0x2c) & 1) == 0) {
      for (lVar4 = *(longlong *)(param_1 + 0x70); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x48)) {
        FUN_1401646e6(lVar4,param_2,param_3,0xffffffff);
      }
    }
    else {
      plVar1 = *(longlong **)(lVar4 + 0x60);
      for (plVar3 = plVar1; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[3]) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          *(longlong *)(lVar4 + 0x60) = plVar3[2];
          FUN_1401646e6(lVar2,param_2,param_3,(int)plVar3[1]);
          *(longlong **)(lVar4 + 0x60) = plVar1;
        }
      }
    }
  }
  else {
    for (lVar4 = *(longlong *)(param_1 + 0x78); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x50)) {
      FUN_1401646e6(lVar4,param_2,param_3,0xffffffff);
    }
  }
  return;
}



// FUNCTION 1401646e6 FUN_1401646e6 body=771 status=ok
// SIG undefined FUN_1401646e6(void)

void FUN_1401646e6(longlong *param_1,longlong *param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  if ((*(code **)(*plVar1 + 0x80) == FUN_1449734ec) ||
     (cVar2 = (**(code **)(*plVar1 + 0x80))(plVar1,param_1), cVar2 == '\0')) {
    uVar8 = param_1[7];
    uVar3 = (uint)uVar8;
    if ((((uVar3 >> 0x18 & 1) != 0) || ((*(byte *)((longlong)plVar1 + 0x2b) & 0x40) == 0)) &&
       (((uVar8 & 0x80800c20202000) == 0 ||
        (((((((uVar3 >> 0xd & 1) == 0 || ((*(byte *)((longlong)plVar1 + 0x29) & 1) == 0)) ||
            (0 < (int)plVar1[6])) &&
           (((uVar3 >> 0x15 & 1) == 0 || ((*(byte *)((longlong)plVar1 + 0x35) & 0x10) == 0)))) &&
          (((((uVar8 >> 0x2f & 1) == 0 ||
             ((*(uint *)((longlong)plVar1 + 0x34) & 0x401000) != 0x1000)) &&
            ((((uVar3 >> 0x1d & 1) == 0 || ((*(byte *)((longlong)plVar1 + 0x37) & 8) != 0)) ||
             ((*(byte *)(plVar1 + 5) & 0x24) == 0)))) &&
           (((uVar8 >> 0x37 & 1) == 0 ||
            (((*(byte *)(plVar1 + 5) & 0x20) == 0 &&
             ((*(byte *)((longlong)plVar1 + 0x37) & 0x20) != 0)))))))) &&
         (((uVar8 >> 0x23 & 1) == 0 || ((*(byte *)((longlong)plVar1 + 0x2b) & 0x20) == 0)))))))) {
      uVar3 = 0;
      if (0 < (int)param_4) {
        uVar3 = param_4;
      }
      if ((int)param_4 < 0) {
        param_4 = *(uint *)(param_1 + 6);
      }
      else {
        param_4 = param_4 + 1;
      }
      if ((int)uVar3 < (int)param_4) {
        uVar8 = (ulonglong)uVar3;
        do {
          plVar1 = *(longlong **)(*param_2 + 8);
          if (param_1 != (longlong *)0x0) {
            if (*(code **)(*plVar1 + 0x228) == FUN_144a610a4) {
              lVar6 = plVar1[0xf];
              if (lVar6 == 0) {
                lVar6 = FUN_14001cc68(0x58,0x10);
                *(undefined8 *)(lVar6 + 0x40) = 0;
                *(undefined8 *)(lVar6 + 0x48) = 0x800000000;
                *(undefined4 *)(lVar6 + 0x50) = 0;
                plVar1[0xf] = lVar6;
                iVar7 = 0;
                uVar3 = 8;
              }
              else {
                iVar7 = *(int *)(lVar6 + 0x48);
                uVar3 = *(uint *)(lVar6 + 0x4c);
              }
              *(uint *)(lVar6 + 0x48) = iVar7 + 1U;
              if (uVar3 < iVar7 + 1U) {
                FUN_140b4c3de(lVar6,iVar7);
              }
              lVar5 = *(longlong *)(lVar6 + 0x40);
              if (*(longlong *)(lVar6 + 0x40) == 0) {
                lVar5 = lVar6;
              }
              *(longlong **)(lVar5 + (longlong)iVar7 * 8) = param_1;
              iVar7 = *(int *)(lVar6 + 0x50) + 1;
              do {
                iVar4 = iVar7;
                iVar7 = 1;
              } while (iVar4 == 0);
              *(int *)(lVar6 + 0x50) = iVar4;
              plVar1[0xe] = (longlong)param_1;
            }
            else {
              (**(code **)(*plVar1 + 0x228))
                        (plVar1,param_1,(uint)((ulonglong)param_1[7] >> 0x23) & 1);
            }
          }
          (**(code **)(*param_1 + 0xd0))
                    (param_1,param_2,
                     (longlong)*(int *)((longlong)param_1 + 0x34) * uVar8 +
                     *(int *)((longlong)param_1 + 0x44) + param_3,0);
          if (param_1 != (longlong *)0x0) {
            if (*(code **)(*plVar1 + 0x230) == (code *)&LAB_1449b19a2) {
              lVar6 = plVar1[0xf];
              *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + -1;
              iVar7 = *(int *)(lVar6 + 0x50) + 1;
              do {
                iVar4 = iVar7;
                iVar7 = 1;
              } while (iVar4 == 0);
              *(int *)(lVar6 + 0x50) = iVar4;
              lVar6 = plVar1[0xf];
              if ((longlong)*(int *)(lVar6 + 0x48) < 1) {
                lVar6 = 0;
              }
              else {
                lVar5 = *(longlong *)(lVar6 + 0x40);
                if (*(longlong *)(lVar6 + 0x40) == 0) {
                  lVar5 = lVar6;
                }
                lVar6 = *(longlong *)(lVar5 + -8 + (longlong)*(int *)(lVar6 + 0x48) * 8);
              }
              plVar1[0xe] = lVar6;
            }
            else {
              (**(code **)(*plVar1 + 0x230))
                        (plVar1,param_1,(uint)((ulonglong)param_1[7] >> 0x23) & 1);
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != param_4);
      }
    }
  }
  return;
}



// FUNCTION 1401649ea FUN_1401649ea body=389 status=ok
// SIG undefined FUN_1401649ea(void)

void FUN_1401649ea(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar2 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar2 = *(uint *)(lVar6 + 0x10);
      bVar8 = uVar2 == 0;
      if (bVar8) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar2 = uVar5;
      }
    }
  }
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    lVar6 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xe0);
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & (uVar2 ^ uVar4)) * 4);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)(param_1 + 0xa0);
      do {
        lVar7 = (longlong)iVar3 * 0x230;
        local_38 = *(undefined8 *)(lVar6 + lVar7);
        local_40 = CONCAT44(uVar2,uVar4);
        cVar1 = FUN_144717174(&local_38,&local_40);
        lVar6 = *(longlong *)(param_1 + 0xa0);
        if (cVar1 != '\0') {
          if ((lVar6 + lVar7 != 0) && (lVar6 + lVar7 != -8)) {
            FUN_140164b70();
          }
          break;
        }
        iVar3 = *(int *)(lVar6 + 0x228 + lVar7);
      } while (iVar3 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140164b70 FUN_140164b70 body=154 status=ok
// SIG undefined FUN_140164b70(void)

void FUN_140164b70(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  if ((*(PSRWLOCK *)(param_1 + 0x28) != (PSRWLOCK)0x0) && (*(int *)(param_1 + 0x24) == 0)) {
    AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x28));
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  if (((((*(int *)(param_1 + 0x3c) != 0) && (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)(param_1 + 0x3c))))) &&
     (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
    *(undefined1 *)(*plVar2 + 0x117a) = 0;
  }
  if ((*(PSRWLOCK *)(param_1 + 0x28) != (PSRWLOCK)0x0) && (0 < *(int *)(param_1 + 0x24))) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
                    /* WARNING: Could not recover jumptable at 0x000140164bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x28));
    return;
  }
  return;
}



// FUNCTION 140164c0a FUN_140164c0a body=14 status=ok
// SIG undefined FUN_140164c0a(void)

void FUN_140164c0a(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_140164c18();
    return;
  }
  return;
}



// FUNCTION 140164c18 FUN_140164c18 body=453 status=ok
// SIG undefined FUN_140164c18(void)

void FUN_140164c18(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0xc0);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140164d36:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_140164d73:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0xc0;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140164c71;
LAB_140164c66:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140164c71:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x155) goto code_r0x000140164c9d;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x30 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140164cf3:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140164d73;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140164d36;
code_r0x000140164c9d:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140164cf3;
    }
  }
  goto LAB_140164c66;
}



// FUNCTION 140164dde FUN_140164dde body=1142 status=ok
// SIG undefined FUN_140164dde(void)

undefined4 FUN_140164dde(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar8 = *(undefined4 *)(param_1 + 0x54);
  fVar9 = *(float *)(param_1 + 0x60);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x1b0);
  if (plVar2 != (longlong *)0x0) {
    if (DAT_14cb6fd70 == 0) {
      local_90 = &local_78;
      local_78 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_1427b09ee;
      local_98 = &LAB_1487a9cc9;
      local_a0 = FUN_1465433f8;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10004001;
      local_c0 = 8;
      local_c8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,DAT_14cb6fd70);
    if (plVar2 != (longlong *)0x0) {
      if (DAT_14cb6fd70 == 0) {
        local_90 = &local_78;
        local_78 = FUN_1449e2820;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_1427b09ee;
        local_98 = &LAB_1487a9cc9;
        local_a0 = FUN_1465433f8;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10004001;
        local_c0 = 8;
        local_c8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
      }
      plVar3 = (longlong *)FUN_144718840(plVar2,DAT_14cb6fd70);
      if (((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) &&
         ((pcVar4 = (char *)(**(code **)(*plVar3 + 0x20))(plVar3), *pcVar4 == '\x02' ||
          (pcVar4[1] != '\0')))) {
        uVar8 = *(undefined4 *)(param_1 + 0x6c);
        fVar9 = *(float *)(param_1 + 0x78);
      }
    }
  }
  if (fVar9 <= 0.0) {
LAB_140164ec5:
    if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar8;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x60) == '\x01') {
    cVar1 = FUN_1402273fc(lVar5);
    if (cVar1 == '\0') goto LAB_140164ec5;
    lVar5 = *(longlong *)(param_1 + 0x30);
  }
  lVar7 = *(longlong *)(lVar5 + 0xb18);
  if ((DAT_14c950c29 == 1) && (lVar7 != 0)) {
    FUN_1456cec3c(lVar7);
  }
  if ((lVar7 == 0) || (*(longlong *)(lVar5 + 0xb20) == 0)) goto LAB_140164ec5;
  lVar5 = *(longlong *)(param_1 + 0x30);
  lVar7 = *(longlong *)(lVar5 + 0xb18);
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar7);
  }
  plVar2 = (longlong *)0x0;
  if (lVar7 != 0) {
    plVar2 = *(longlong **)(lVar5 + 0xb20);
  }
  lVar5 = (**(code **)(*plVar2 + 0x18))(plVar2);
  plVar2 = *(longlong **)(lVar5 + 0x150);
  if (plVar2 != (longlong *)0x0) {
    uVar6 = FUN_14058c734();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar6);
    if (plVar2 != (longlong *)0x0) {
      uVar6 = FUN_14058c734();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar6);
      if ((((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) &&
          (lVar7 = (**(code **)(*plVar3 + 0x10))(plVar3), lVar7 != 0)) &&
         (*(longlong *)(lVar7 + 0x40) != 0)) {
        FUN_148a1824c(lVar7);
        FUN_148a18380(lVar7);
        FUN_140acce36(lVar7,0);
        goto LAB_14016505a;
      }
    }
  }
  lVar7 = FUN_14016530a(lVar5,0);
  if (lVar7 != 0) {
    FUN_140280ec4(lVar7);
    FUN_140280ec4(lVar7);
    FUN_140280ec4(lVar7);
  }
  if (0 < *(int *)(lVar5 + 0xa8)) {
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xa0) + 0x20);
    if ((DAT_14c950c29 == 1) && (lVar5 != 0)) {
      FUN_1456cec3c(lVar5);
    }
    else if (lVar5 == 0) goto LAB_14016505a;
    FUN_140165266(lVar5);
  }
LAB_14016505a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_e8);
}



// FUNCTION 140165266 FUN_140165266 body=103 status=ok
// SIG undefined FUN_140165266(void)

undefined8 FUN_140165266(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  
  lVar1 = FUN_1401654a2();
  if (lVar1 != 0) {
    fVar2 = (float)FUN_14023bf44(lVar1);
    if (0.0 < fVar2) {
      uVar3 = (**(code **)(*(longlong *)(param_1 + 0x8e0) + 0x48))(param_1 + 0x8e0);
      uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
      fVar2 = ((float)uVar3 + -1.0) * fVar2 + 1.0;
      goto LAB_140165298;
    }
  }
  fVar2 = 1.0;
  uVar4 = 0;
LAB_140165298:
  return CONCAT44(uVar4,fVar2);
}



// FUNCTION 14016530a FUN_14016530a body=406 status=ok
// SIG undefined FUN_14016530a(void)

uint * FUN_14016530a(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xa8))) {
    lVar3 = *(longlong *)(param_1 + 0xa0);
    lVar10 = (ulonglong)param_2 * 0x170;
    if ((*(longlong *)(lVar3 + 8 + lVar10) != 0) &&
       (lVar1 = lVar3 + lVar10, *(int *)(lVar1 + 0x10) - 1U < 0xfffffffe)) {
      puVar8 = (uint *)(lVar1 + 0x38);
      plVar6 = *(longlong **)(lVar1 + 0x40);
      if ((((((plVar6 != (longlong *)0x0) && (*(int *)(lVar1 + 0x3c) != 0)) &&
            (uVar2 = *puVar8, -1 < (int)uVar2)) &&
           (((int)uVar2 < DAT_14c9647dc &&
            (lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar9 != 0))))
          && (*(int *)(lVar9 + 0x10) == *(int *)(lVar1 + 0x3c))) &&
         ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
        if (*(code **)(*plVar6 + 0x10) == (code *)&LAB_1447a1f2e) {
          plVar6 = plVar6 + 0xd9;
        }
        else {
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))();
        }
        cVar4 = FUN_14486eb0e(plVar6,puVar8);
        if (cVar4 != '\0') goto LAB_1401653ec;
      }
      lVar9 = *(longlong *)(param_1 + 0x150);
      if ((lVar9 != 0) && (*(char *)(lVar9 + 0x178) != '\x03')) {
        uVar5 = FUN_1403c7982();
        plVar6 = (longlong *)FUN_144718840(lVar9,uVar5);
        if (plVar6 != (longlong *)0x0) {
          uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
          uVar7 = FUN_14011c2be(lVar3 + lVar10 + 8);
          FUN_1403c7952(uVar5,&local_48,uVar7,0);
          *(undefined4 *)(lVar1 + 0x48) = local_38;
          *(undefined4 *)(lVar1 + 0x4c) = uStack_34;
          *(undefined4 *)(lVar1 + 0x50) = uStack_30;
          *(undefined4 *)(lVar1 + 0x54) = uStack_2c;
          *puVar8 = local_48;
          *(undefined4 *)(lVar1 + 0x3c) = uStack_44;
          *(undefined4 *)(lVar1 + 0x40) = uStack_40;
          *(undefined4 *)(lVar1 + 0x44) = uStack_3c;
          cVar4 = FUN_14486ea84(puVar8);
          if (cVar4 == '\0') {
            puVar8 = (uint *)0x0;
          }
          goto LAB_1401653ec;
        }
      }
    }
  }
  puVar8 = (uint *)0x0;
LAB_1401653ec:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar8;
}



// FUNCTION 1401654a2 FUN_1401654a2 body=467 status=ok
// SIG undefined FUN_1401654a2(void)

longlong FUN_1401654a2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x7e0))();
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cb6fd70 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_1427b09ee;
      local_38 = &LAB_1487a9cc9;
      local_40 = FUN_1465433f8;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10004001;
      local_60 = 8;
      local_68 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
    }
    lVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb6fd70);
    if (lVar2 != 0) {
      if (DAT_14cb6fd70 == 0) {
        local_30 = &local_18;
        local_18 = FUN_1449e2820;
        local_20 = FUN_14081d0ea;
        local_28 = FUN_1427b09ee;
        local_38 = &LAB_1487a9cc9;
        local_40 = FUN_1465433f8;
        local_48 = L"Engine";
        local_50 = 0;
        local_58 = 0x10004001;
        local_60 = 8;
        local_68 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
      }
      lVar3 = FUN_144718840(lVar2,DAT_14cb6fd70);
      if (lVar2 != lVar3) goto LAB_140165513;
    }
  }
  lVar3 = 0;
LAB_140165513:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140165676 FUN_140165676 body=284 status=ok
// SIG undefined FUN_140165676(void)

longlong FUN_140165676(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  longlong *plVar6;
  ushort *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar8 = *(uint *)(*param_1 + 0x48);
  if ((uVar8 >> (DAT_14cab36b8 & 0x1f) & 1) != 0) {
    uVar8 = (1 << ((byte)DAT_14cab36b8 & 0x1f)) - 1U & uVar8;
    uVar9 = (ulonglong)uVar8 - (ulonglong)(uVar8 >> 1 & 0x55555555);
    uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
    uVar11 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    lVar5 = *(longlong *)(*param_1 + 0x38);
    uVar9 = (ulonglong)*(ushort *)(lVar5 + uVar11 * 6);
    lVar10 = 0;
    lVar12 = lVar5 + uVar9;
    if (uVar9 == 0xffff) {
      lVar12 = lVar10;
    }
    puVar7 = (ushort *)((ulonglong)*(byte *)(lVar5 + 4 + uVar11 * 6) + lVar12);
    if (puVar7 == (ushort *)0x0) goto LAB_14016574c;
    bVar3 = *(byte *)(lVar5 + uVar11 * 6 + 5);
    if ((bVar3 == 0) || ((bVar3 - 1 < 2 && (puVar7 = *(ushort **)puVar7, puVar7 != (ushort *)0x0))))
    {
      uVar4 = *puVar7;
      AcquireSRWLockShared((PSRWLOCK)&DAT_14cab3658);
      lVar10 = *(longlong *)(DAT_14cab3660 + (ulonglong)uVar4 * 8);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14cab3658);
      goto LAB_14016574c;
    }
  }
  lVar10 = 0;
LAB_14016574c:
  plVar6 = (longlong *)param_1[1];
  if (plVar6 != (longlong *)0x0) {
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
  return lVar10;
}



// FUNCTION 140165792 FUN_140165792 body=441 status=ok
// SIG undefined FUN_140165792(void)

void FUN_140165792(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14ca96da8 != '\0') {
    *(undefined4 *)(param_1 + 0x8fc) = *(undefined4 *)(*(longlong *)(param_1 + 0x310) + 0x88);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97070) {
    FUN_144b3d300(&DAT_14ca97070);
    if (DAT_14ca97070 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar4 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar4 + 0x68))(plVar4);
      }
      _Init_thread_footer(&DAT_14ca97070);
    }
  }
  lVar1 = DAT_14ca97068;
  bVar6 = true;
  cVar2 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
      cVar2 = '\x02';
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
      cVar2 = DAT_14ca96da8;
    }
    bVar6 = *(int *)(lVar1 + uVar5 * 4) != 0;
  }
  if (((bVar6) && (cVar2 != '\0')) && ((*(byte *)(param_1 + 0x8fa) & 2) != 0)) {
    FUN_147ccafec(param_1,param_2);
  }
  FUN_14016594c(&local_28,*(undefined8 *)(param_1 + 0x338),*(uint *)(param_1 + 0x328) >> 1 & 3);
  *(undefined8 *)(param_1 + 0x340) = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14016594c FUN_14016594c body=231 status=ok
// SIG undefined FUN_14016594c(void)

uint * FUN_14016594c(uint *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  
  param_1[0] = 0;
  lVar9 = DAT_14cb0f758;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar8 = 0;
    }
    else {
      bVar7 = FUN_144a61b4f();
      uVar8 = (ulonglong)(bVar7 ^ 1);
    }
    if (*(char *)(lVar9 + uVar8) == '\x01') {
      lVar9 = (**(code **)(*param_2 + 0x98))(param_2);
      if (lVar9 != 0) {
        lVar9 = FUN_14377fc9e(lVar9);
        if (lVar9 != 0) {
          iVar1 = *(int *)(lVar9 + 0x58);
          iVar2 = *(int *)(lVar9 + 0x50);
          uVar3 = *(uint *)(lVar9 + 0x10);
          iVar4 = *(int *)(lVar9 + 0x54);
          iVar6 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          uVar10 = iVar6 << 0x18;
          iVar6 = *(int *)(lVar9 + 0x74);
          if (uVar3 == 0) {
            uVar10 = 0;
          }
          iVar5 = *(int *)(lVar9 + 0x5c);
          *param_1 = *(int *)(lVar9 + 0x70) << 0x1c |
                     *(int *)(lVar9 + 0x80) << 0xc | *(uint *)(lVar9 + 0x7c) | uVar10;
          param_1[1] = param_3 << 0x1e | iVar1 * iVar2 | iVar4 * iVar5 * 0x1000 | iVar6 << 0x18;
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 140165a34 FUN_140165a34 body=182 status=ok
// SIG undefined FUN_140165a34(void)

void FUN_140165a34(longlong param_1,longlong *param_2)

{
  undefined1 auStack_88 [32];
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong *local_40 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_48 = &PTR_LAB_14a1decd0;
  local_68 = FUN_140165afc;
  local_40[0] = param_2;
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(PSRWLOCK *)(param_1 + 0x40) != (PSRWLOCK)0x0)) {
    AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x40));
    FUN_140165afc(local_40,*(undefined8 *)(param_1 + 0x38));
    ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x40));
  }
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140165afc FUN_140165afc body=140 status=ok
// SIG undefined FUN_140165afc(void)

void FUN_140165afc(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = 0;
  do {
    lVar1 = *(longlong *)(param_2 + lVar6 * 8);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)*param_1;
      local_3c = (undefined4)lVar6;
      pcVar3 = (code *)*puVar2;
      plVar5 = puVar2 + 4;
      if ((longlong *)puVar2[2] != (longlong *)0x0) {
        plVar5 = (longlong *)puVar2[2];
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar3)(uVar4,lVar1,&local_3c);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 6);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140165b8a FUN_140165b8a body=802 status=ok
// SIG undefined FUN_140165b8a(void)

longlong * FUN_140165b8a(longlong param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  ulonglong local_80;
  longlong *local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ulonglong uStack_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pcVar1 = (char *)(param_1 + 0x10);
  LOCK();
  bVar13 = *(char *)(param_1 + 0x10) == '\0';
  if (bVar13) {
    *(char *)(param_1 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar13) {
    FUN_1447d2058(pcVar1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  local_70 = pcVar1;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar5 = FUN_14001cc68(0x308,0x10);
    FUN_14009016e(uVar5,~(-1 << ((byte)DAT_14c760da4 & 0x1f)));
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    FUN_14002049c(uVar5,1);
  }
  iVar10 = param_4 * 4;
  puVar6 = (undefined8 *)param_3[2];
  iVar4 = (**(code **)(*DAT_14ca83900 + 0x188))();
  if ((puVar6 == (undefined8 *)0x0) ||
     (uVar11 = -iVar4 & (*(int *)(puVar6 + 5) + iVar4) - 1U, *(uint *)(puVar6 + 3) < iVar10 + uVar11
     )) {
    iVar3 = (int)param_3[1];
    lVar9 = (longlong)iVar3;
    local_78 = param_2;
    if (0 < lVar9) {
      lVar12 = 0;
      do {
        puVar6 = *(undefined8 **)(*param_3 + lVar12 * 8);
        if ((uint)((*(int *)(puVar6 + 5) + iVar4 + -1 & -iVar4) + iVar10) <= *(uint *)(puVar6 + 3))
        {
          if (puVar6 != (undefined8 *)0x0) goto LAB_140165d7a;
          break;
        }
        lVar12 = lVar12 + 1;
      } while (lVar9 != lVar12);
    }
    uVar11 = (param_4 + DAT_14c760dc0) - 1;
    uVar11 = uVar11 - uVar11 % DAT_14c760dc0;
    if (uVar11 < DAT_14c760dbc) {
      uVar11 = DAT_14c760dbc;
    }
    local_80 = (ulonglong)param_4;
    puVar6 = (undefined8 *)FUN_14001cc68(0x40);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *puVar6 = &PTR_FUN_14a3875e0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(uint *)(param_3 + 1) = iVar3 + 1U;
    puVar8 = puVar6 + 1;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
      local_88 = puVar6 + 1;
      FUN_1456bd870(param_3,iVar3);
      puVar8 = local_88;
    }
    *(undefined8 **)(*param_3 + lVar9 * 8) = puVar6;
    local_a8 = (undefined4 *)CONCAT44(local_a8._4_4_,uVar11);
    local_90 = 0;
    local_98 = 2;
    local_a0 = 0xd;
    FUN_140661c88(puVar8,*(undefined8 *)(param_1 + 0x18),
                  L"FGlobalDynamicReadBuffer_AllocateInternal",4);
    param_4 = (uint)local_80;
LAB_140165d7a:
    if (puVar6[4] == 0) {
      FUN_140171566(puVar6,*(undefined8 *)(param_1 + 0x18));
    }
    param_3[2] = (longlong)puVar6;
    uVar11 = -iVar4 & iVar4 + -1 + *(int *)(puVar6 + 5);
    param_2 = local_78;
  }
  *(uint *)(puVar6 + 5) = uVar11;
  *param_2 = (longlong)(int)uVar11 + puVar6[4];
  param_2[1] = (longlong)puVar6;
  local_58 = puVar6[1];
  local_68._0_2_ = 0;
  if ((*(byte *)(local_58 + 0x28) & 0x10) == 0) {
    local_68._0_2_ = 0xd00;
    uVar7 = 1;
  }
  else {
    uVar7 = 4;
  }
  local_a8 = &local_68;
  local_68 = (uint)CONCAT12(uVar7,(undefined2)local_68);
  _local_68 = CONCAT44(*(undefined4 *)(puVar6 + 5),local_68);
  uStack_60 = (ulonglong)param_4;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_50,*(undefined8 *)(param_1 + 0x18));
  iVar4 = *(int *)(puVar6 + 7);
  uVar11 = iVar4 + 1;
  *(uint *)(puVar6 + 7) = uVar11;
  if (*(uint *)((longlong)puVar6 + 0x3c) < uVar11) {
    FUN_14178e592(puVar6 + 6);
  }
  *(undefined8 *)(puVar6[6] + (longlong)iVar4 * 8) = local_50;
  param_2[2] = *(longlong *)(puVar6[6] + (longlong)(*(int *)(puVar6 + 7) + -1) * 8);
  *(int *)(puVar6 + 5) = *(int *)(puVar6 + 5) + iVar10;
  LOCK();
  cVar2 = *local_70;
  if (cVar2 == '\x01') {
    *local_70 = '\0';
  }
  UNLOCK();
  if (cVar2 != '\x01') {
    FUN_14008cdb0();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140165eae FUN_140165eae body=802 status=ok
// SIG undefined FUN_140165eae(void)

longlong * FUN_140165eae(longlong param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  ulonglong local_80;
  longlong *local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ulonglong uStack_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pcVar1 = (char *)(param_1 + 0x10);
  LOCK();
  bVar13 = *(char *)(param_1 + 0x10) == '\0';
  if (bVar13) {
    *(char *)(param_1 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar13) {
    FUN_1447d2058(pcVar1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  local_70 = pcVar1;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar5 = FUN_14001cc68(0x308,0x10);
    FUN_14009016e(uVar5,~(-1 << ((byte)DAT_14c760da4 & 0x1f)));
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    FUN_14002049c(uVar5,1);
  }
  iVar10 = param_4 * 4;
  puVar6 = (undefined8 *)param_3[2];
  iVar4 = (**(code **)(*DAT_14ca83900 + 0x188))();
  if ((puVar6 == (undefined8 *)0x0) ||
     (uVar11 = -iVar4 & (*(int *)(puVar6 + 5) + iVar4) - 1U, *(uint *)(puVar6 + 3) < iVar10 + uVar11
     )) {
    iVar3 = (int)param_3[1];
    lVar9 = (longlong)iVar3;
    local_78 = param_2;
    if (0 < lVar9) {
      lVar12 = 0;
      do {
        puVar6 = *(undefined8 **)(*param_3 + lVar12 * 8);
        if ((uint)((*(int *)(puVar6 + 5) + iVar4 + -1 & -iVar4) + iVar10) <= *(uint *)(puVar6 + 3))
        {
          if (puVar6 != (undefined8 *)0x0) goto LAB_14016609e;
          break;
        }
        lVar12 = lVar12 + 1;
      } while (lVar9 != lVar12);
    }
    uVar11 = (param_4 + DAT_14c760dc0) - 1;
    uVar11 = uVar11 - uVar11 % DAT_14c760dc0;
    if (uVar11 < DAT_14c760dbc) {
      uVar11 = DAT_14c760dbc;
    }
    local_80 = (ulonglong)param_4;
    puVar6 = (undefined8 *)FUN_14001cc68(0x40);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *puVar6 = &PTR_FUN_14a3875e0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(uint *)(param_3 + 1) = iVar3 + 1U;
    puVar8 = puVar6 + 1;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
      local_88 = puVar6 + 1;
      FUN_1456bd870(param_3,iVar3);
      puVar8 = local_88;
    }
    *(undefined8 **)(*param_3 + lVar9 * 8) = puVar6;
    local_a8 = (undefined4 *)CONCAT44(local_a8._4_4_,uVar11);
    local_90 = 0;
    local_98 = 2;
    local_a0 = 0x1d;
    FUN_140661c88(puVar8,*(undefined8 *)(param_1 + 0x18),
                  L"FGlobalDynamicReadBuffer_AllocateInternal",4);
    param_4 = (uint)local_80;
LAB_14016609e:
    if (puVar6[4] == 0) {
      FUN_140171566(puVar6,*(undefined8 *)(param_1 + 0x18));
    }
    param_3[2] = (longlong)puVar6;
    uVar11 = -iVar4 & iVar4 + -1 + *(int *)(puVar6 + 5);
    param_2 = local_78;
  }
  *(uint *)(puVar6 + 5) = uVar11;
  *param_2 = (longlong)(int)uVar11 + puVar6[4];
  param_2[1] = (longlong)puVar6;
  local_58 = puVar6[1];
  local_68._0_2_ = 0;
  if ((*(byte *)(local_58 + 0x28) & 0x10) == 0) {
    local_68._0_2_ = 0x1d00;
    uVar7 = 1;
  }
  else {
    uVar7 = 4;
  }
  local_a8 = &local_68;
  local_68 = (uint)CONCAT12(uVar7,(undefined2)local_68);
  _local_68 = CONCAT44(*(undefined4 *)(puVar6 + 5),local_68);
  uStack_60 = (ulonglong)param_4;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_50,*(undefined8 *)(param_1 + 0x18));
  iVar4 = *(int *)(puVar6 + 7);
  uVar11 = iVar4 + 1;
  *(uint *)(puVar6 + 7) = uVar11;
  if (*(uint *)((longlong)puVar6 + 0x3c) < uVar11) {
    FUN_14178e592(puVar6 + 6);
  }
  *(undefined8 *)(puVar6[6] + (longlong)iVar4 * 8) = local_50;
  param_2[2] = *(longlong *)(puVar6[6] + (longlong)(*(int *)(puVar6 + 7) + -1) * 8);
  *(int *)(puVar6 + 5) = *(int *)(puVar6 + 5) + iVar10;
  LOCK();
  cVar2 = *local_70;
  if (cVar2 == '\x01') {
    *local_70 = '\0';
  }
  UNLOCK();
  if (cVar2 != '\x01') {
    FUN_14008cdb0();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1401661d2 FUN_1401661d2 body=240 status=ok
// SIG undefined FUN_1401661d2(void)

void FUN_1401661d2(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else if (param_2 < 9) {
    iVar4 = 8;
  }
  else {
    uVar2 = (longlong)(int)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)(int)param_2 & 0xfffffffffffffff]
                          ];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = iVar4;
    FUN_1401662c2(param_1,*(undefined4 *)(param_1 + 0x88));
    return;
  }
  return;
}



// FUNCTION 1401662c2 FUN_1401662c2 body=141 status=ok
// SIG undefined FUN_1401662c2(void)

void FUN_1401662c2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x10);
  return;
}



// FUNCTION 14016634f FUN_14016634f body=853 status=ok
// SIG undefined FUN_14016634f(void)

undefined8 FUN_14016634f(undefined4 param_1,double *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_b8 [44];
  uint local_8c;
  double local_88;
  ulonglong local_80;
  ulonglong local_78 [12];
  
  local_78[3] = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar7 = _finite(*param_2);
  if (iVar7 != 0) {
    iVar7 = _finite(param_2[1]);
    if (iVar7 != 0) {
      iVar7 = _finite(param_2[2]);
      if (iVar7 != 0) {
        dVar4 = (double)(int)(short)param_1;
        dVar1 = *param_2;
        dVar2 = param_2[1];
        dVar3 = param_2[2];
        dVar5 = ABS(dVar4 * dVar3);
        dVar14 = ABS(dVar2 * dVar4);
        dVar13 = ABS(dVar1 * dVar4);
        if (dVar13 <= dVar14) {
          dVar13 = dVar14;
        }
        if (dVar13 <= dVar5) {
          dVar13 = dVar5;
        }
        if (4.611686018427388e+18 <= dVar13) {
          local_78[0] = CONCAT44(local_78[0]._4_4_,0x40);
          (**(code **)(*param_3 + 0x180))(param_3,local_78,0x80);
          lVar8 = *param_3;
          uVar10 = 0xc0;
        }
        else {
          dVar5 = ABS(dVar1);
          if (ABS(dVar2) <= ABS(dVar1)) {
            dVar5 = ABS(dVar2);
          }
          if (ABS(dVar3) <= dVar5) {
            dVar5 = ABS(dVar3);
          }
          dVar13 = dVar2 * dVar4;
          dVar14 = dVar1 * dVar4;
          dVar4 = dVar4 * dVar3;
          if (4503599627370496.0 <= dVar5) {
            dVar13 = dVar2;
            dVar14 = dVar1;
            dVar4 = dVar3;
          }
          local_80 = (ulonglong)
                     ((double)(-(ulonglong)(0.0 < dVar13) & 0x3ff0000000000000 |
                              (ulonglong)
                              (~(uint)(-(ulonglong)(0.0 < dVar13) >> 0x20) &
                              (uint)(-(ulonglong)(dVar13 < 0.0) >> 0x20) & 0xbff00000) << 0x20) *
                      0.5 + dVar13);
          local_78[0] = (ulonglong)
                        ((double)(-(ulonglong)(0.0 < dVar14) & 0x3ff0000000000000 |
                                 (ulonglong)
                                 (~(uint)(-(ulonglong)(0.0 < dVar14) >> 0x20) &
                                 (uint)(-(ulonglong)(dVar14 < 0.0) >> 0x20) & 0xbff00000) << 0x20) *
                         0.5 + dVar14);
          local_88 = (double)(longlong)
                             ((double)(-(ulonglong)(0.0 < dVar4) & 0x3ff0000000000000 |
                                      ~-(ulonglong)(0.0 < dVar4) &
                                      -(ulonglong)(dVar4 < 0.0) & 0xbff0000000000000) * 0.5 + dVar4)
          ;
          uVar11 = (longlong)local_88 >> 0x3f ^ (ulonglong)local_88;
          uVar10 = 0x40;
          uVar12 = 0x40;
          if (uVar11 != 0) {
            lVar8 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            uVar12 = (uint)lVar8 ^ 0x3f;
          }
          uVar11 = (longlong)local_80 >> 0x3f ^ local_80;
          if (uVar11 != 0) {
            lVar8 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            uVar10 = (uint)lVar8 ^ 0x3f;
          }
          uVar6 = 0x41 - uVar10;
          if (0x41 - uVar10 < 0x41 - uVar12) {
            uVar6 = 0x41 - uVar12;
          }
          uVar11 = (longlong)local_78[0] >> 0x3f ^ local_78[0];
          if (uVar11 == 0) {
            uVar12 = 0x40;
          }
          else {
            lVar8 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            uVar12 = (uint)lVar8 ^ 0x3f;
          }
          uVar10 = 0x41 - uVar12;
          if (0x41 - uVar12 < uVar6) {
            uVar10 = uVar6;
          }
          local_8c = (uint)(dVar5 < 4503599627370496.0) << 6 | uVar10;
          (**(code **)(*param_3 + 0x180))(param_3,&local_8c,0x80);
          (**(code **)(*param_3 + 0x178))(param_3,local_78,uVar10);
          (**(code **)(*param_3 + 0x178))(param_3,&local_80,uVar10);
          lVar8 = *param_3;
          param_2 = &local_88;
        }
        (**(code **)(lVar8 + 0x178))(param_3,param_2,uVar10);
        uVar9 = 1;
        goto LAB_140166609;
      }
    }
  }
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  FUN_14016634f(param_1,local_78,param_3);
  uVar9 = 0;
LAB_140166609:
  if ((local_78[3] ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401666ae FUN_1401666ae body=153 status=ok
// SIG undefined FUN_1401666ae(void)

void FUN_1401666ae(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < DAT_14caa27e0) {
    lVar4 = 0x100;
    lVar3 = 0;
    do {
      lVar2 = DAT_14caa27d8;
      lVar1 = DAT_14caa27d8 + lVar4;
      FUN_14745c7b6(DAT_14caa27d8 + lVar4 + -0xf0,0);
      FUN_14745c808(lVar2 + lVar4 + -0x30);
      FUN_14745cac2(lVar1);
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x150;
    } while (lVar3 < DAT_14caa27e0);
  }
  DAT_14caa2800 = 0;
  if (DAT_14caa2804 < 0) {
    FUN_14745cc4a(&DAT_14caa27e8,0);
    return;
  }
  return;
}



// FUNCTION 140166747 FUN_140166747 body=41 status=ok
// SIG undefined FUN_140166747(void)

void FUN_140166747(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x2f0);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      if (pcVar1[-0x48] == '\x01') {
        pcVar1[-0x48] = '\0';
      }
      pcVar1 = pcVar1 + 0x4d0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140166770 FUN_140166770 body=232 status=ok
// SIG undefined FUN_140166770(void)

void FUN_140166770(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x4d0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    iVar2 = (int)(uVar1 / 0x4d0);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar4 = iVar2;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x4d0,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140166858 FUN_140166858 body=352 status=ok
// SIG undefined FUN_140166858(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140166858(longlong param_1,undefined8 param_2,uint param_3,undefined1 param_4,int *param_5,
                  undefined4 *param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_2098 [40];
  uint local_2070;
  undefined1 local_206c;
  undefined4 local_2068;
  undefined4 uStack_2064;
  undefined4 uStack_2060;
  undefined4 uStack_205c;
  longlong local_1058;
  undefined8 local_1050;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2098;
  local_38 = *param_5 + 1;
  *param_5 = local_38;
  local_2068 = *param_6;
  uStack_2064 = param_6[1];
  uStack_2060 = param_6[2];
  uStack_205c = param_6[3];
  local_1058 = 0;
  local_1050 = 0x20000000000;
  local_48 = 0;
  local_40 = 0x20000000000;
  local_34 = 0;
  uVar2 = (ulonglong)param_3;
  if (*(int *)(param_1 + 0x28 + uVar2) != local_38) {
    *(int *)(param_1 + 0x28 + uVar2) = local_38;
    *(undefined4 *)(param_1 + 0x2c + uVar2) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x30 + uVar2) = 0;
  }
  local_2070 = param_3;
  local_206c = param_4;
  FUN_144871bb4(param_1,param_2,&local_2070);
  lVar1 = *(longlong *)(param_1 + 8 + uVar2);
  if (lVar1 != 0) {
    do {
      if (*(int *)(lVar1 + 0x28 + uVar2) == *param_5) {
        if (*(int *)(lVar1 + 0x2c + uVar2) < 0) goto LAB_14016698a;
      }
      else {
        *(int *)(lVar1 + 0x28 + uVar2) = *param_5;
        *(undefined4 *)(lVar1 + 0x2c + uVar2) = 0xffffffff;
        *(undefined1 *)(lVar1 + 0x30 + uVar2) = 0;
LAB_14016698a:
        FUN_144871bb4(lVar1,param_2,&local_2070);
        lVar1 = *(longlong *)(param_1 + 8 + uVar2);
      }
    } while (lVar1 != 0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_1058 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_2098) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401669ba FUN_1401669ba body=161 status=ok
// SIG undefined FUN_1401669ba(void)

void FUN_1401669ba(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x1008);
  uVar1 = *(uint *)(param_1 + 0x100c);
  if ((ulonglong)uVar4 < 0x201) {
    uVar4 = 0x200;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if (((longlong)iVar3 & 0x1ffffffffffff800U) == 0) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 << 3,0);
      uVar4 = (uint)(uVar2 >> 3);
      uVar1 = *(uint *)(param_1 + 0x100c);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x100c) = uVar4;
  FUN_146887dfe(param_1,*(undefined4 *)(param_1 + 0x1008));
  return;
}



// FUNCTION 140166a5c FUN_140166a5c body=89 status=ok
// SIG undefined FUN_140166a5c(void)

void FUN_140166a5c(int param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar4 = (longlong)param_1;
  puVar1 = (undefined8 *)(param_3 + lVar4);
  lVar2 = *(longlong *)(param_3 + 0x18 + lVar4);
  if (lVar2 == 0) {
    lVar6 = puVar1[4];
    *(longlong *)(param_2 + 8 + lVar4) = lVar6;
  }
  else {
    lVar6 = puVar1[4];
    *(longlong *)(lVar2 + 0x20 + lVar4) = lVar6;
  }
  puVar5 = (undefined8 *)(param_3 + lVar4 + 0x18);
  if (lVar6 == 0) {
    *(undefined8 *)(param_2 + 0x10 + lVar4) = *puVar5;
  }
  else {
    *(undefined8 *)(lVar6 + 0x18 + lVar4) = *puVar5;
  }
  *puVar5 = 0;
  *(undefined8 *)(param_3 + lVar4 + 0x20) = 0;
  uVar3 = *puVar1;
  *puVar1 = 0;
  FUN_140166ab6(uVar3);
  return;
}



// FUNCTION 140166ab6 FUN_140166ab6 body=89 status=ok
// SIG undefined FUN_140166ab6(void)

void FUN_140166ab6(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  LOCK();
  piVar2 = (int *)(param_1 + 0x2d8);
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (*piVar2 != 0) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x298);
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,8);
  *puVar5 = 0;
  puVar5[1] = param_1;
  LOCK();
  puVar1 = (undefined8 *)(lVar4 + 0x58);
  puVar3 = (undefined8 *)*puVar1;
  *puVar1 = puVar5;
  UNLOCK();
  *puVar3 = puVar5;
  FUN_1400ee9e6(lVar4 + 0x478);
  return;
}



// FUNCTION 140166b1e FUN_140166b1e body=40 status=ok
// SIG undefined FUN_140166b1e(void)

undefined8 FUN_140166b1e(undefined8 param_1,int param_2)

{
  FUN_140166b46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140166b46 FUN_140166b46 body=195 status=ok
// SIG undefined FUN_140166b46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140166b46(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b056c10;
  plVar3 = (longlong *)param_1[6];
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
  FUN_140166c09(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar4 = (undefined8 *)param_1[1], puVar4 != (undefined8 *)0x0)) {
    if (puVar4[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar4 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x000140166bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140166c09 FUN_140166c09 body=38 status=ok
// SIG undefined FUN_140166c09(void)

void FUN_140166c09(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14008f4f0(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 140166c3e FUN_140166c3e body=194 status=ok
// SIG undefined FUN_140166c3e(void)

float FUN_140166c3e(longlong param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  cVar1 = *(char *)(param_1 + 0x19);
  if (cVar1 == '\0') {
LAB_140166c4a:
    fVar2 = *(float *)(param_1 + 0x24);
  }
  else if (cVar1 == '\x02') {
    fVar2 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x1c);
  }
  else {
    if (cVar1 != '\x01') goto LAB_140166c4a;
    fVar2 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x24);
  }
  fVar2 = fVar2 + *(float *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return fVar2;
  }
  if (*(char *)(param_1 + 0x79) == '\x02') {
    fVar3 = *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x7c);
  }
  else if (*(char *)(param_1 + 0x79) == '\x01') {
    fVar3 = *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x84);
  }
  else {
    fVar3 = *(float *)(param_1 + 0x84);
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      fVar4 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x1c);
      goto LAB_140166c78;
    }
    if (cVar1 == '\x01') {
      fVar4 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x24);
      goto LAB_140166c78;
    }
  }
  fVar4 = *(float *)(param_1 + 0x24);
LAB_140166c78:
  return fVar2 + (fVar3 - fVar4) + *(float *)(param_1 + 0x34);
}



// FUNCTION 140166d00 FUN_140166d00 body=107 status=ok
// SIG undefined FUN_140166d00(void)

undefined8 * FUN_140166d00(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = param_4;
  if (param_4 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_4);
  }
  bVar1 = DAT_14c950c29;
  param_1[4] = param_3;
  if ((param_3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  return param_1;
}



// FUNCTION 140166d6c FUN_140166d6c body=114 status=ok
// SIG undefined FUN_140166d6c(void)

void FUN_140166d6c(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar4 = *(longlong *)(param_2 + 0x38);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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
  if (*(undefined4 **)(param_2 + 8) == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = **(undefined4 **)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 5) = uVar6;
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x21);
  return;
}



// FUNCTION 140166dde FUN_140166dde body=275 status=ok
// SIG undefined FUN_140166dde(void)

void FUN_140166dde(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}


