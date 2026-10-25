// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143dbc8b8 FUN_143dbc8b8 body=1495 status=ok
// SIG undefined FUN_143dbc8b8(void)

void FUN_143dbc8b8(void **param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  void **ppvVar24;
  undefined4 *puVar25;
  undefined1 auStack_188 [40];
  double local_160;
  void *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined1 local_118 [40];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar20 = FUN_140b34e3c(param_1,param_3,local_118);
  if (iVar20 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_188);
  }
  if (iVar20 == 0) {
    pvVar3 = param_1[9];
    pvVar4 = param_1[7];
    dVar12 = (double)pvVar3 - (double)pvVar4;
    pvVar5 = param_1[8];
    pvVar6 = param_1[6];
    dVar10 = (double)pvVar5 - (double)pvVar6;
    iVar20 = *(int *)(param_1 + 1);
    if (99 < iVar20 &&
        (double)(*(float *)(param_1 + 0xd) * *(float *)(param_1 + 0xd)) <
        dVar10 * dVar10 + dVar12 * dVar12) {
      pvVar7 = param_1[0xb];
      pvVar8 = param_1[0xc];
      dVar11 = dVar12 * 0.5 + (double)pvVar8;
      dVar13 = (double)pvVar7 - dVar10 * 0.5;
      dVar10 = dVar10 * 0.5 + (double)pvVar7;
      puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      uVar9 = *(undefined4 *)(param_1 + 0xd);
      local_160 = (double)pvVar8 + 0.0;
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = dVar13;
      puVar21[7] = pvVar8;
      puVar21[8] = (double)pvVar7 + 0.0;
      puVar21[9] = dVar11;
      *(undefined1 *)(puVar21 + 10) = 1;
      puVar21[0xb] = ((double)pvVar7 + 0.0 + dVar13) * 0.5;
      puVar21[0xc] = (dVar11 + (double)pvVar8) * 0.5;
      *(undefined4 *)(puVar21 + 0xd) = uVar9;
      *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      param_1[2] = puVar21;
      puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = pvVar7;
      puVar21[7] = pvVar8;
      puVar21[8] = pvVar5;
      puVar21[9] = pvVar3;
      *(undefined1 *)(puVar21 + 10) = 1;
      puVar21[0xb] = ((double)pvVar5 + (double)pvVar7) * 0.5;
      puVar21[0xc] = ((double)pvVar3 + (double)pvVar8) * 0.5;
      *(undefined4 *)(puVar21 + 0xd) = uVar9;
      *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      param_1[3] = puVar21;
      puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = pvVar6;
      puVar21[7] = pvVar4;
      puVar21[8] = pvVar7;
      puVar21[9] = pvVar8;
      *(undefined1 *)(puVar21 + 10) = 1;
      puVar21[0xb] = ((double)pvVar6 + (double)pvVar7) * 0.5;
      puVar21[0xc] = ((double)pvVar4 + (double)pvVar8) * 0.5;
      *(undefined4 *)(puVar21 + 0xd) = uVar9;
      *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      param_1[4] = puVar21;
      puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      dVar12 = (double)pvVar8 - dVar12 * 0.5;
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = pvVar7;
      puVar21[7] = dVar12;
      puVar21[8] = dVar10;
      puVar21[9] = local_160;
      *(undefined1 *)(puVar21 + 10) = 1;
      puVar21[0xb] = (dVar10 + (double)pvVar7) * 0.5;
      puVar21[0xc] = (dVar12 + local_160) * 0.5;
      *(undefined4 *)(puVar21 + 0xd) = uVar9;
      *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      param_1[5] = puVar21;
      *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
      local_158 = (void *)0x0;
      uStack_150 = 0;
      if ((longlong)*(int *)(param_1 + 1) != 0) {
        puVar25 = *param_1;
        lVar22 = (longlong)*(int *)(param_1 + 1) * 0x30;
        do {
          iVar20 = FUN_140b34e3c(param_1,puVar25,&local_148);
          if (iVar20 == 1) {
            ppvVar24 = (void **)CONCAT44(uStack_144,local_148);
            iVar20 = *(int *)(ppvVar24 + 1);
            *(uint *)(ppvVar24 + 1) = iVar20 + 1U;
            if (*(uint *)((longlong)ppvVar24 + 0xc) < iVar20 + 1U) {
LAB_143dbce02:
              FUN_14189867e(ppvVar24,iVar20);
            }
          }
          else {
            iVar20 = (int)uStack_150;
            uVar1 = (int)uStack_150 + 1;
            uStack_150 = CONCAT44(uStack_150._4_4_,uVar1);
            if (uStack_150._4_4_ < uVar1) {
              ppvVar24 = &local_158;
              goto LAB_143dbce02;
            }
            ppvVar24 = &local_158;
          }
          pvVar3 = *ppvVar24;
          lVar23 = (longlong)iVar20 * 0x30;
          uVar9 = *puVar25;
          uVar14 = puVar25[1];
          uVar15 = puVar25[2];
          uVar16 = puVar25[3];
          uVar17 = *(undefined8 *)(puVar25 + 4);
          uVar18 = *(undefined8 *)(puVar25 + 6);
          uVar19 = *(undefined8 *)(puVar25 + 10);
          puVar21 = (undefined8 *)((longlong)pvVar3 + lVar23 + 0x20);
          *puVar21 = *(undefined8 *)(puVar25 + 8);
          puVar21[1] = uVar19;
          puVar21 = (undefined8 *)((longlong)pvVar3 + lVar23 + 0x10);
          *puVar21 = uVar17;
          puVar21[1] = uVar18;
          puVar2 = (undefined4 *)((longlong)pvVar3 + lVar23);
          *puVar2 = uVar9;
          puVar2[1] = uVar14;
          puVar2[2] = uVar15;
          puVar2[3] = uVar16;
          puVar25 = puVar25 + 0xc;
          lVar22 = lVar22 + -0x30;
        } while (lVar22 != 0);
      }
      pvVar3 = local_158;
      if (&local_158 != param_1) {
        iVar20 = (int)uStack_150;
        lVar22 = (longlong)(int)uStack_150;
        *(int *)(param_1 + 1) = (int)uStack_150;
        if ((int)uStack_150 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
          *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        }
        else {
          FUN_143dbcf0a(param_1,uStack_150 & 0xffffffff);
          if (iVar20 != 0) {
            memcpy(*param_1,pvVar3,lVar22 * 0x30);
          }
        }
      }
      if (local_158 != (void *)0x0) {
        FUN_1400020a8();
      }
      FUN_143dbc8b8(param_1,param_2,param_3);
    }
    else {
      local_128 = *(undefined8 *)(param_3 + 8);
      local_148 = *param_3;
      uStack_144 = param_3[1];
      uStack_140 = param_3[2];
      uStack_13c = param_3[3];
      local_138 = param_3[4];
      uStack_134 = param_3[5];
      uStack_130 = param_3[6];
      uStack_12c = param_3[7];
      uVar9 = *param_2;
      *(uint *)(param_1 + 1) = iVar20 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar20 + 1U) {
        FUN_14189867e(param_1);
      }
      pvVar3 = *param_1;
      lVar22 = (longlong)iVar20 * 0x30;
      *(undefined8 *)((longlong)pvVar3 + lVar22 + 0x20) = local_128;
      puVar21 = (undefined8 *)((longlong)pvVar3 + lVar22 + 0x10);
      *puVar21 = CONCAT44(uStack_134,local_138);
      puVar21[1] = CONCAT44(uStack_12c,uStack_130);
      puVar25 = (undefined4 *)((longlong)pvVar3 + lVar22);
      *puVar25 = local_148;
      puVar25[1] = uStack_144;
      puVar25[2] = uStack_140;
      puVar25[3] = uStack_13c;
      *(undefined4 *)((longlong)pvVar3 + lVar22 + 0x28) = uVar9;
    }
  }
  else {
    local_128 = *(undefined8 *)(param_3 + 8);
    local_148 = *param_3;
    uStack_144 = param_3[1];
    uStack_140 = param_3[2];
    uStack_13c = param_3[3];
    local_138 = param_3[4];
    uStack_134 = param_3[5];
    uStack_130 = param_3[6];
    uStack_12c = param_3[7];
    uVar9 = *param_2;
    iVar20 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar20 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar20 + 1U) {
      FUN_14189867e(param_1,iVar20);
    }
    pvVar3 = *param_1;
    lVar22 = (longlong)iVar20 * 0x30;
    *(undefined8 *)((longlong)pvVar3 + lVar22 + 0x20) = local_128;
    puVar21 = (undefined8 *)((longlong)pvVar3 + lVar22 + 0x10);
    *puVar21 = CONCAT44(uStack_134,local_138);
    puVar21[1] = CONCAT44(uStack_12c,uStack_130);
    puVar25 = (undefined4 *)((longlong)pvVar3 + lVar22);
    *puVar25 = local_148;
    puVar25[1] = uStack_144;
    puVar25[2] = uStack_140;
    puVar25[3] = uStack_13c;
    *(undefined4 *)((longlong)pvVar3 + lVar22 + 0x28) = uVar9;
  }
  if ((local_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dbcf0a FUN_143dbcf0a body=227 status=ok
// SIG undefined FUN_143dbcf0a(void)

void FUN_143dbcf0a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143dbcfee FUN_143dbcfee body=335 status=ok
// SIG undefined FUN_143dbcfee(void)

void FUN_143dbcfee(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x108);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  iVar8 = 0x20;
  if (0x20 < uVar3) {
    lVar5 = (longlong)(int)uVar3;
    if (0x20 < *(uint *)(param_1 + 0x10c)) {
      lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
    }
    uVar6 = lVar5 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_143dbd082;
              lVar5 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar5 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & ((uVar1 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_143dbd082:
    iVar4 = (int)(uVar6 >> 3);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar4) {
      iVar8 = iVar4;
    }
  }
  *(int *)(param_1 + 0x10c) = iVar8;
  FUN_143dbd13e(param_1,param_2);
  return;
}



// FUNCTION 143dbd13e FUN_143dbd13e body=141 status=ok
// SIG undefined FUN_143dbd13e(void)

void FUN_143dbd13e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 143dbd1cb FUN_143dbd1cb body=2391 status=ok
// SIG undefined FUN_143dbd1cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dbd1cb(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined **local_48;
  undefined1 *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = "AssetRegistry";
  local_60 = 0xd;
  local_5c = 0;
  uVar5 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb843f0 = (ulonglong)uVar5;
  DAT_14cb84b50 = 0;
  DAT_14cb84b58 = 0;
  atexit(FUN_143db2884);
  DAT_14cb84b60 = 0;
  DAT_14cb84b68 = 0;
  atexit(FUN_143db28df);
  DAT_14cb84b70 = 0;
  DAT_14cb84b78 = 0;
  atexit(FUN_143db293a);
  local_68 = "configs";
  local_60 = 7;
  local_5c = 0;
  uVar5 = FUN_14001a6c0(&local_68,1);
  DAT_14cb843f8 = (ulonglong)uVar5;
  local_68 = "weight";
  local_60 = 6;
  local_5c = 0;
  uVar5 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb84400 = (ulonglong)uVar5;
  local_68 = "sockets";
  local_60 = 7;
  local_5c = 0;
  uVar5 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb84408 = (ulonglong)uVar5;
  local_68 = "probability";
  local_60 = 0xb;
  local_5c = 0;
  uVar5 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb84410 = (ulonglong)uVar5;
  local_68 = "itempool";
  local_60 = 8;
  local_5c = 0;
  uVar5 = FUN_14001a6c0(&local_68,1);
  DAT_14cb84418 = (ulonglong)uVar5;
  local_68 = "item";
  local_60 = 4;
  local_5c = 0;
  uVar5 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb84420 = (ulonglong)uVar5;
  DAT_14cb84488 = (undefined8 *)0x0;
  _DAT_14cb84490 = 0;
  puVar6 = (undefined8 *)FUN_140595974(0x1000,0);
  lVar9 = 0x3f;
  puVar2 = puVar6;
  do {
    puVar8 = puVar2 + 8;
    *puVar2 = puVar8;
    lVar9 = lVar9 + -1;
    puVar2 = puVar8;
  } while (lVar9 != 0);
  *puVar8 = DAT_14cb84488;
  _DAT_14cb84490 = _DAT_14cb84490 + 0x40;
  local_58 = 0;
  local_48 = &PTR_LAB_14a1795c0;
  local_40 = &LAB_143dbc0ae;
  local_68 = &DAT_14011fc1e;
  DAT_14cb84488 = puVar6;
  FUN_1460f3444();
  atexit((_func_5014 *)&LAB_143db3736);
  DAT_14cb84580 = (undefined8 *)0x0;
  _DAT_14cb84588 = 0;
  puVar6 = (undefined8 *)FUN_140595974(0x2400,0);
  lVar9 = 0x3f;
  puVar2 = puVar6;
  do {
    puVar8 = puVar2 + 0x12;
    *puVar2 = puVar8;
    lVar9 = lVar9 + -1;
    puVar2 = puVar8;
  } while (lVar9 != 0);
  _DAT_14cb84588 = _DAT_14cb84588 + 0x40;
  *puVar8 = DAT_14cb84580;
  DAT_14cb84580 = puVar6;
  local_58 = 0;
  local_48 = &PTR_LAB_14a1795c0;
  local_40 = &LAB_143dbc0b4;
  local_68 = &DAT_14011fc1e;
  FUN_1460f3bda();
  atexit((_func_5014 *)&LAB_143db3764);
  FUN_1400b22c2(&local_68,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar4 = FUN_140b10a34(&local_68,&DAT_14cb84610);
  if (cVar4 == '\0') {
    _DAT_14cb84610 = 0;
    uRam000000014cb84618 = 0;
  }
  if (local_68 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_68 = "bone";
  local_60 = 4;
  local_5c = 0;
  FUN_14001a6c0(&local_68,1);
  _DAT_14cb84638 = &LAB_143db405f;
  _DAT_14cb84640 = 0x44318ccd;
  DAT_14cb84644 = 1;
  DAT_14cb84630 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb84630;
  atexit((_func_5014 *)&LAB_143db4064);
  local_68 = "nexus";
  local_60 = 5;
  local_5c = 0;
  uVar5 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb84650 = (ulonglong)uVar5;
  local_68 = "inv_comp";
  local_60 = 8;
  local_5c = 0;
  uVar5 = FUN_14001a6c0(&local_68,1);
  DAT_14cb84658 = (ulonglong)uVar5;
  local_68 = "class_data";
  local_60 = 10;
  local_5c = 0;
  uVar5 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb84660 = (ulonglong)uVar5;
  _DAT_14cb848b0 = &LAB_143db4cb1;
  _DAT_14cb848b8 = 0x442a0666;
  DAT_14cb848bc = 1;
  DAT_14cb848a8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb848a8;
  atexit((_func_5014 *)&LAB_143db4cb6);
  _DAT_14cb848d0 = &LAB_143db4cea;
  _DAT_14cb848d8 = 0x442a0000;
  DAT_14cb848dc = 1;
  DAT_14cb848c8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb848c8;
  atexit((_func_5014 *)&LAB_143db4cef);
  _DAT_14cb848f0 = &LAB_143db4d23;
  _DAT_14cb848f8 = 0x4429999a;
  DAT_14cb848fc = 1;
  DAT_14cb848e8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb848e8;
  atexit((_func_5014 *)&LAB_143db4d28);
  _DAT_14cb84910 = &LAB_143db4d5c;
  _DAT_14cb84918 = 0x44299333;
  DAT_14cb8491c = 1;
  DAT_14cb84908 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb84908;
  atexit((_func_5014 *)&LAB_143db4d61);
  _DAT_14cb84930 = &LAB_143db4d95;
  _DAT_14cb84938 = 0x45d61000;
  DAT_14cb8493c = 1;
  DAT_14cb84928 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb84928;
  atexit((_func_5014 *)&LAB_143db4d9a);
  _DAT_14cb84950 = &LAB_143db4dd6;
  _DAT_14cb84958 = 0x4428c000;
  DAT_14cb8495c = 1;
  DAT_14cb84948 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb84948;
  atexit((_func_5014 *)&LAB_143db4ddb);
  _DAT_14cb84970 = &LAB_143db4e0f;
  _DAT_14cb84978 = 0x44290000;
  DAT_14cb8497c = 1;
  DAT_14cb84968 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb84968;
  atexit((_func_5014 *)&LAB_143db4e14);
  _DAT_14cb84990 = &LAB_143db4e48;
  _DAT_14cb84998 = 0x442a00a4;
  DAT_14cb8499c = 1;
  DAT_14cb84988 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb84988;
  atexit((_func_5014 *)&LAB_143db4e4d);
  _DAT_14cb849b0 = &LAB_143db4e81;
  _DAT_14cb849b8 = 0x44298ccd;
  DAT_14cb849bc = 1;
  DAT_14cb849a8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb849a8;
  atexit((_func_5014 *)&LAB_143db4e86);
  _DAT_14cb849d0 = &LAB_143db4eba;
  _DAT_14cb849d8 = 0x44299333;
  DAT_14cb849dc = 1;
  DAT_14cb849c8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb849c8;
  atexit((_func_5014 *)&LAB_143db4ebf);
  _DAT_14cb849f0 = &LAB_143db4ef3;
  _DAT_14cb849f8 = 0x44298666;
  DAT_14cb849fc = 1;
  DAT_14cb849e8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb849e8;
  atexit((_func_5014 *)&LAB_143db4ef8);
  _DAT_14cb84a08 = 0x47efffffe0000000;
  _DAT_14cb84a10 = 0x47efffffe0000000;
  _DAT_14cb84a18 = 0x47efffffe0000000;
  _DAT_14cb84a20 = 0x47efffffe0000000;
  _DAT_14cb84a28 = 0x47efffffe0000000;
  _DAT_14cb84a30 = 0x47efffffe0000000;
  _DAT_14cb84a38 = 0x47efffffe0000000;
  _DAT_14cb84a40 = 0x47efffffe0000000;
  ram0x00014cb84a4c = 0;
  FUN_14052b5e0(&DAT_14cb84a48,"itempool",0);
  _DAT_14cb84a58 = "itempool";
  ram0x00014cb84a64 = 0;
  FUN_14052b5e0(&DAT_14cb84a60,&DAT_14b412d18,0);
  _DAT_14cb84a70 = &DAT_14b412d18;
  _DAT_14cb84a80 = &LAB_143db9eeb;
  _DAT_14cb84a88 = 0x461c4400;
  DAT_14cb84a8c = 1;
  DAT_14cb84a78 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb84a78;
  atexit((_func_5014 *)&LAB_143db9ef0);
  _DAT_14cb84aa8 = &LAB_143db9f2f;
  _DAT_14cb84ab0 = 0x461c4c00;
  DAT_14cb84ab4 = 1;
  DAT_14cb84aa0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb84aa0;
  atexit((_func_5014 *)&LAB_143db9f34);
  _DAT_14cb84ac8 = &LAB_143db9f68;
  _DAT_14cb84ad0 = 0x461c5000;
  DAT_14cb84ad4 = 1;
  DAT_14cb84ac0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb84ac0;
  atexit((_func_5014 *)&LAB_143db9f6d);
  _DAT_14cb84ae8 = &LAB_143db9fa1;
  _DAT_14cb84af0 = 0x461c4800;
  DAT_14cb84af4 = 1;
  DAT_14cb84ae0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb84ae0;
  atexit((_func_5014 *)&LAB_143db9fa6);
  _DAT_14cb84b04 = 0;
  FUN_14052b5e0(&DAT_14cb84b00,"PlayerAwareness",0);
  _DAT_14cb84b10 = "PlayerAwareness";
  FUN_1446f470e(&DAT_14cb84b18,L"RoadArea",1);
  FUN_1462a3428(&DAT_14cb84b20,&LAB_143db9fe5,PTR_s_RoadConnector_14c7639d0,&DAT_14b3e7b50);
  atexit((_func_5014 *)&LAB_143db9fea);
  puVar3 = PTR_s_RoadConnector_14c7639d0;
  plVar7 = (longlong *)FUN_145d889d0();
  iVar1 = (int)plVar7[1];
  *(uint *)(plVar7 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar7 + 0xc) < iVar1 + 1U) {
    FUN_140ca86cc(plVar7,iVar1);
  }
  *(undefined **)(*plVar7 + (longlong)iVar1 * 8) = puVar3;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dbdb24 FUN_143dbdb24 body=1447 status=ok
// SIG undefined FUN_143dbdb24(void)

void FUN_143dbdb24(code *param_1)

{
  code *pcVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  void *_Dst;
  undefined1 auStack_388 [32];
  undefined4 local_368;
  undefined4 local_360;
  code ***local_358;
  undefined8 local_350;
  wchar_t *local_348;
  code *local_340;
  undefined1 *local_338;
  code **local_330;
  code *local_328;
  code *local_320;
  code *local_310;
  code **local_308;
  code **local_300;
  code *local_2f8;
  int local_2ec [3];
  code *local_2e0;
  code ***local_2d8;
  code *local_2c8;
  code **local_2c0;
  longlong local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  pcVar1 = param_1 + 0x50;
  iVar7 = *(int *)(param_1 + 0x5c);
  FUN_14135d683(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((iVar7 < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    FUN_1465559b8(pcVar1,0);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  plVar9 = *(longlong **)(param_1 + 0x68);
  if (plVar9 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    LOCK();
    plVar11 = plVar9 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) goto LAB_143dbdbf7;
  if (DAT_14cb10130 == 0) {
    local_330 = &local_2c8;
    local_2c8 = FUN_140754f84;
    local_320 = FUN_14081d0ea;
    local_328 = FUN_14081d0ea;
    local_338 = &LAB_147da9a76;
    local_340 = FUN_1409f3105;
    local_348 = L"Engine";
    local_350 = 0;
    local_358 = (code ***)CONCAT44(local_358._4_4_,0x10000000);
    local_360 = 8;
    local_368 = 0x990;
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_143dbdbf7;
  FUN_141160574(local_2ec,lVar4);
  if (local_2ec[0] == 0) goto LAB_143dbdbf7;
  FUN_1459a737c(&DAT_14cb1cfb0,&local_2c8,param_1,FUN_140b33b72);
  FUN_1459a737c(&DAT_14cb1cfc8,&local_2c8,param_1,FUN_140b33f6e);
  plVar9 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b414b00;
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[8] = -0x3d70000000000000;
  plVar9[9] = -0x3d70000000000000;
  plVar9[10] = 0x4290000000000000;
  plVar9[0xb] = 0x4290000000000000;
  *(undefined1 *)(plVar9 + 0xc) = 1;
  plVar9[0xd] = 0;
  plVar9[0xe] = 0;
  *(undefined4 *)(plVar9 + 0xf) = 0x42c80000;
  *(undefined1 *)((longlong)plVar9 + 0x7c) = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  if (plVar9 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = 0x10;
    plVar11 = *(longlong **)(param_1 + 0x68);
    if (plVar11 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x68) = 0;
LAB_143dbdd4d:
      LOCK();
      plVar3 = plVar11 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      if (plVar9 != (longlong *)0x0) goto LAB_143dbdd71;
    }
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x60) = plVar9 + 2;
    plVar11 = *(longlong **)(param_1 + 0x68);
    if (plVar9 == plVar11) {
      LOCK();
      plVar11 = plVar9 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x68) = plVar9;
      if (plVar11 != (longlong *)0x0) goto LAB_143dbdd4d;
    }
LAB_143dbdd71:
    LOCK();
    plVar11 = plVar9 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  iVar7 = FUN_1461b448e(local_2ec);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (*(int *)(param_1 + 0x5c) < iVar7) {
    FUN_1465559b8(pcVar1,iVar7);
  }
  local_2c8 = FUN_143dc8172;
  local_2c0 = &local_b8;
  local_b8 = param_1;
  FUN_14655471c(local_2ec,&local_2c8);
  local_b8 = (code *)0x0;
  uStack_b0 = 0;
  local_88 = 0xc290000000000000;
  local_80 = 0xc290000000000000;
  local_78 = 0x4290000000000000;
  local_70 = 0x4290000000000000;
  local_68 = 1;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x42c80000;
  local_4c = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_c8 = 0;
  local_c0 = 0x2000000000;
  local_2d8 = &local_308;
  local_2e0 = FUN_143dc8524;
  local_308 = &local_2c8;
  local_300 = &local_b8;
  local_2f8 = param_1;
  FUN_1465547b4(local_2ec,&local_2e0);
  local_308 = (code **)FUN_143dc9262;
  local_300 = &local_2e0;
  local_2e0 = param_1;
  FUN_1465547b4(local_2ec,&local_308);
  iVar7 = *(int *)(param_1 + 0x58);
  if (0 < iVar7) {
    uVar10 = 0;
    do {
      lVar4 = *(longlong *)pcVar1;
      lVar5 = *(longlong *)(lVar4 + (longlong)(int)uVar10 * 0x10);
      if ((lVar5 == 0) || (*(int *)(lVar5 + 0xd0) == 0)) {
        _Dst = (void *)((longlong)(int)uVar10 * 0x10 + lVar4);
        plVar9 = *(longlong **)((longlong)_Dst + 8);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar9 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar9)();
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))();
            }
          }
        }
        iVar7 = *(int *)(param_1 + 0x58);
        iVar8 = ~uVar10 + iVar7;
        if (iVar8 != 0) {
          if (0 < iVar8) {
            iVar8 = 1;
          }
          memmove(_Dst,(void *)(lVar4 + (longlong)(iVar7 - iVar8) * 0x10),(longlong)iVar8 << 4);
          iVar7 = *(int *)(param_1 + 0x58);
        }
        iVar7 = iVar7 + -1;
        *(int *)(param_1 + 0x58) = iVar7;
      }
      else {
        uVar10 = uVar10 + 1;
      }
    } while ((int)uVar10 < iVar7);
  }
  local_2d8 = (code ***)&local_310;
  local_308 = (code **)0x0;
  local_300 = (code **)((ulonglong)local_300 & 0xffffffff00000000);
  local_2e0 = (code *)&LAB_143dc93b6;
  local_360 = 0;
  local_358 = &local_308;
  local_310 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",iVar7,1);
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x50);
    plVar11 = plVar9 + (longlong)*(int *)(param_1 + 0x58) * 2;
    do {
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      local_308 = (code **)*plVar9;
      local_300 = (code **)plVar9[1];
      if (local_300 != (code **)0x0) {
        LOCK();
        *(int *)((longlong)local_300 + 0xc) = *(int *)((longlong)local_300 + 0xc) + 1;
        UNLOCK();
      }
      FUN_143dc93d2(uVar6,&local_308,local_308 + 0xc);
      if (local_300 != (code **)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_300 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)((longlong)*local_300 + 0x10))();
        }
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar11);
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_140633ee4(&local_b8);
LAB_143dbdbf7:
  param_1[0x48] = (code)0x1;
  FUN_1447f69b6(param_1 + 0x30);
  if ((local_48 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dbe0cc FUN_143dbe0cc body=60 status=ok
// SIG undefined FUN_143dbe0cc(void)

undefined8 FUN_143dbe0cc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  uVar3 = FUN_140db3cd0(param_1,param_2);
  return uVar3;
}



// FUNCTION 143dbe108 FUN_143dbe108 body=154 status=ok
// SIG undefined FUN_143dbe108(void)

undefined8 * FUN_143dbe108(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  while( true ) {
    lVar3 = FUN_1418989e6(param_2);
    if (lVar3 == 0) break;
    plVar1 = *(longlong **)(lVar3 + 0x38);
    if (plVar1 == (longlong *)0x0) {
LAB_143dbe140:
      cVar2 = FUN_140db3cd0(lVar3,param_3);
      if (cVar2 != '\0') {
        *param_1 = *param_2;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
        goto LAB_143dbe17f;
      }
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
      if (cVar2 != '\0') goto LAB_143dbe140;
    }
    if ((*(longlong *)(lVar3 + 400) == 0) ||
       (param_2 = (undefined8 *)(lVar3 + 400), 0xfffffffd < *(int *)(lVar3 + 0x198) - 1U)) break;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0x6000;
LAB_143dbe17f:
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 143dbe1a2 FUN_143dbe1a2 body=64 status=ok
// SIG undefined FUN_143dbe1a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dbe1a2(void)

{
  if (DAT_14cb84c38 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb84c30 = 0;
  if (DAT_14cb84c28 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb84be8);
  return;
}



// FUNCTION 143dbe21b FUN_143dbe21b body=41 status=ok
// SIG undefined FUN_143dbe21b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dbe21b(void)

{
  _DAT_14cb84e28 = 0;
  if (DAT_14cb84e20 != 0) {
    FUN_1400020a8();
  }
  FUN_146191db8();
  return;
}



// FUNCTION 143dbe266 FUN_143dbe266 body=179 status=ok
// SIG undefined FUN_143dbe266(void)

void FUN_143dbe266(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1418989e6(param_2);
  lVar2 = FUN_1418989e6(param_3);
  local_50 = 0x6000;
  if (lVar2 == 0) {
    local_40 = 0;
    local_38 = 0x6000;
  }
  else {
    local_40 = *(undefined8 *)(lVar2 + 0x50);
    local_38 = *(undefined4 *)(lVar2 + 0x58);
  }
  local_30 = 0;
  if (lVar1 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = *(undefined8 *)(lVar1 + 0x50);
    local_50 = *(undefined4 *)(lVar1 + 0x58);
  }
  local_48 = 0;
  FUN_14583c447(param_1,&local_58,&local_40,param_4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dbe31a FUN_143dbe31a body=69 status=ok
// SIG undefined FUN_143dbe31a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dbe31a(void)

{
  _DAT_14cb84ea0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dbe35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb84ea8,1);
  return;
}



// FUNCTION 143dbe35f FUN_143dbe35f body=69 status=ok
// SIG undefined FUN_143dbe35f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dbe35f(void)

{
  _DAT_14cb84eb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dbe3a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb84eb8,1);
  return;
}



// FUNCTION 143dbe3b6 FUN_143dbe3b6 body=570 status=ok
// SIG undefined FUN_143dbe3b6(void)

void FUN_143dbe3b6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  longlong local_88;
  ulonglong uStack_80;
  longlong local_70;
  longlong local_68;
  undefined1 *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)FUN_141898a64(&DAT_14cb84ef8);
    FUN_1409382a6(plVar1);
    *(longlong **)(param_2 + 0x30) = plVar1;
    if (param_2 == 0) {
      if (plVar1 == (longlong *)0x0) goto LAB_143dbe598;
    }
    else {
      if (plVar1 == (longlong *)0x0) goto LAB_143dbe598;
      FUN_1407d81de(plVar1 + 1,param_2);
    }
  }
  else {
    *(undefined1 *)(plVar1 + 3) = 1;
    *(undefined8 *)((longlong)plVar1 + 0x24) = 0;
    plVar1[6] = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
    *(undefined4 *)(plVar1 + 10) = 0;
    if (*(int *)((longlong)plVar1 + 0x54) < 0) {
      FUN_1446f8c06(plVar1 + 9,0);
    }
    puVar4 = (undefined2 *)plVar1[9];
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = 0;
    }
    FUN_140594ada(plVar1,0);
  }
  FUN_144837e54(param_2,0);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2 + 0x48,0);
  if (DAT_14c947fe0 == 0) {
    lVar2 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar2);
    DAT_14c947fe0 = lVar2;
  }
  FUN_140045924(DAT_14c947fe0,&local_68,param_2,1);
  FUN_140902b70(plVar1,&local_70);
  if (local_70 == 0) {
    local_70 = local_68;
  }
  FUN_140a32648(param_1,local_68,local_70);
  lVar2 = FUN_140b5f8a4(plVar1);
  if (1 < *(int *)(lVar2 + 8)) {
    local_88 = 0;
    uStack_80 = 0;
    uVar3 = FUN_140b5f8a4(plVar1);
    FUN_1403de9f2(uVar3,&local_88,&DAT_149e06196,1);
    lVar2 = local_88;
    lVar7 = (longlong)(int)uStack_80;
    if (lVar7 == 0) {
      uVar5 = 0;
    }
    else {
      lVar6 = 0;
      do {
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(lVar2 + 8 + lVar6) != 0) {
          puVar4 = *(undefined2 **)(lVar2 + lVar6);
        }
        FUN_1446f470e(local_90,puVar4,1);
        local_60 = local_90;
        local_58 = &local_68;
        FUN_1457d3898(param_1 + 0x3e0,local_4c,&local_60,0);
        lVar6 = lVar6 + 0x10;
      } while (lVar7 * 0x10 != lVar6);
      uVar5 = uStack_80 & 0xffffffff;
    }
    FUN_1447a1747(local_88,uVar5);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
LAB_143dbe598:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dbe5f2 FUN_143dbe5f2 body=4929 status=ok
// SIG undefined FUN_143dbe5f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dbe5f2(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint *puVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  code *local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined1 *)(param_1 + 0x480) = 0;
  DAT_14cb84db8 = 1;
  FUN_146555b16(param_1 + 0x340);
  FUN_1488e414a(param_1 + 0x340,*(int *)(param_1 + 0x348) - *(int *)(param_1 + 0x374));
  FUN_146555b16(param_1 + 0x390);
  FUN_1488e414a(param_1 + 0x390,*(int *)(param_1 + 0x398) - *(int *)(param_1 + 0x3c4));
  FUN_146555b16(param_1 + 0x3e0);
  FUN_1488e414a(param_1 + 0x3e0,*(int *)(param_1 + 1000) - *(int *)(param_1 + 0x414));
  puVar20 = (uint *)(param_1 + 0x440);
  iVar2 = *(int *)(param_1 + 0x458);
  if (iVar2 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = -1;
    puVar5 = *(uint **)(param_1 + 0x450);
    if (*(uint **)(param_1 + 0x450) == (uint *)0x0) {
      puVar5 = puVar20;
    }
    uVar14 = (ulonglong)(iVar2 + 0x1fU >> 5);
    iVar12 = -0x3e - (iVar2 + 0x1fU & 0xffffffe0);
    uVar10 = 0xffffffff >> (-(char)iVar2 & 0x1fU);
    do {
      bVar23 = uVar14 == 0;
      uVar14 = uVar14 - 1;
      if (bVar23) goto LAB_143dbe708;
      iVar12 = iVar12 + 0x20;
      uVar17 = uVar10 & puVar5[uVar14];
      uVar10 = 0xffffffff;
    } while (uVar17 == 0);
    uVar14 = (ulonglong)uVar17 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar1 = -(((uint)lVar16 ^ 0x3f) + iVar12);
  }
LAB_143dbe708:
  iVar2 = iVar1 + 1;
  iVar12 = *(int *)(param_1 + 0x438);
  if (iVar2 < iVar12) {
    if ((0 < *(int *)(param_1 + 0x464)) &&
       (uVar14 = (ulonglong)*(uint *)(param_1 + 0x460), *(uint *)(param_1 + 0x460) != 0xffffffff)) {
      lVar16 = *(longlong *)(param_1 + 0x430);
      do {
        lVar19 = (longlong)(int)uVar14 * 0x40;
        if (iVar1 < (int)uVar14) {
          iVar12 = *(int *)(lVar16 + lVar19);
          iVar13 = *(int *)(lVar16 + 4 + lVar19);
          uVar14 = (ulonglong)iVar13;
          if (uVar14 != 0xffffffffffffffff) {
            *(int *)(lVar16 + uVar14 * 0x40) = iVar12;
          }
          if (iVar12 == -1) {
            *(int *)(param_1 + 0x460) = iVar13;
          }
          else {
            *(int *)(lVar16 + 4 + (longlong)iVar12 * 0x40) = iVar13;
          }
          *(int *)(param_1 + 0x464) = *(int *)(param_1 + 0x464) + -1;
        }
        else {
          uVar14 = (ulonglong)*(uint *)(lVar16 + 4 + lVar19);
        }
      } while ((int)uVar14 != -1);
      iVar12 = *(int *)(param_1 + 0x438);
    }
    if (iVar12 != iVar2) {
      *(int *)(param_1 + 0x438) = iVar2;
    }
    *(int *)(param_1 + 0x458) = iVar2;
    iVar1 = iVar1 + 0x20;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    iVar12 = iVar2;
    if (iVar2 % 0x20 != 0) {
      puVar5 = *(uint **)(param_1 + 0x450);
      if (*(uint **)(param_1 + 0x450) == (uint *)0x0) {
        puVar5 = puVar20;
      }
      bVar6 = -(char)(iVar2 % 0x20);
      puVar5[iVar1 >> 5] = (puVar5[iVar1 >> 5] << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
      iVar12 = *(int *)(param_1 + 0x438);
    }
  }
  if (*(int *)(param_1 + 0x43c) != iVar12) {
    FUN_140b7ce44((longlong *)(param_1 + 0x430));
    iVar12 = *(int *)(param_1 + 0x438);
  }
  uVar10 = iVar12 - *(int *)(param_1 + 0x464);
  iVar2 = 1;
  if (3 < uVar10) {
    uVar14 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
    lVar16 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar16 & 0x1f);
  }
  if ((0 < (int)uVar10 && *(int *)(param_1 + 0x478) < iVar2) || (iVar2 < *(int *)(param_1 + 0x478)))
  {
    *(int *)(param_1 + 0x478) = iVar2;
    FUN_1405959fa();
  }
  iVar2 = *(int *)(param_1 + 0x458);
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar22 = 0;
    iVar12 = 0;
    iVar1 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x450);
    if (*(uint **)(param_1 + 0x450) == (uint *)0x0) {
      puVar5 = puVar20;
    }
    uVar10 = *puVar5;
    if (uVar10 == 0) {
      iVar1 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar1 = iVar2 + -1;
      }
      uVar22 = 0;
      uVar14 = (ulonglong)(uint)(iVar1 >> 5);
      if (iVar1 >> 5 < 1) {
        uVar14 = uVar22;
      }
      iVar12 = 0;
      do {
        if (uVar14 == uVar22) goto LAB_143dbe8d9;
        iVar12 = iVar12 + 0x20;
        uVar10 = puVar5[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar22 = 0;
      iVar12 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar15 = uVar14 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar1 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
  }
  if (iVar1 != iVar2) {
    uVar10 = 0xffffffff;
    iVar13 = iVar2;
    do {
      lVar16 = *(longlong *)(param_1 + 0x430);
      lVar19 = (longlong)iVar1 * 0x40;
      if (*(int *)(lVar16 + 0x34 + lVar19) != *(int *)(lVar16 + 0x30 + lVar19)) {
        FUN_1402191ca(lVar19 + lVar16 + 0x28);
        iVar13 = *(int *)(param_1 + 0x458);
      }
      uVar10 = uVar10 & ~(uint)uVar14;
      puVar5 = *(uint **)(param_1 + 0x450);
      if (*(uint **)(param_1 + 0x450) == (uint *)0x0) {
        puVar5 = puVar20;
      }
      iVar1 = (int)uVar22;
      lVar16 = (longlong)iVar1;
      uVar17 = puVar5[lVar16] & uVar10;
      if (uVar17 == 0) {
        iVar8 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar8 = iVar13 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar7 = iVar8;
        if (iVar8 < iVar1) {
          iVar7 = iVar1;
        }
        if (iVar1 < iVar8) {
          lVar19 = 0;
          do {
            uVar17 = puVar5[lVar16 + lVar19 + 1];
            if (uVar17 != 0) {
              uVar22 = (ulonglong)(iVar1 + (int)lVar19 + 1);
              uVar10 = 0xffffffff;
              goto LAB_143dbe9d2;
            }
            iVar12 = iVar12 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar7 - lVar16 != lVar19);
          uVar10 = 0xffffffff;
          lVar16 = (longlong)iVar7;
        }
        uVar22 = lVar16 + 1U & 0xffffffff;
        iVar1 = iVar13;
      }
      else {
LAB_143dbe9d2:
        uVar14 = (ulonglong)(-uVar17 & uVar17);
        uVar15 = uVar14 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar1 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar1) {
          iVar1 = iVar13;
        }
      }
    } while (iVar1 != iVar2);
  }
LAB_143dbe8d9:
  if (*(char *)(param_1 + 0x480) == '\0') {
    *(undefined1 *)(param_1 + 0x480) = 1;
    plVar11 = (longlong *)(param_1 + 0x488);
    iVar2 = *(int *)(param_1 + 0x4d0);
    local_80 = plVar11;
    if (iVar2 < 2) {
      lVar16 = param_1 + 0x4c0;
      if (*(longlong *)(param_1 + 0x4c8) != 0) {
        lVar16 = *(longlong *)(param_1 + 0x4c8);
      }
      iVar1 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      if (*(int *)(param_1 + 0x490) - *(int *)(param_1 + 0x4bc) < iVar1 >> 2) {
        iVar2 = *(int *)(param_1 + 0x4b0);
        if (iVar2 == 0) {
          uVar22 = 1;
          iVar12 = 0;
          uVar14 = 0;
          iVar1 = 0;
        }
        else {
          puVar20 = *(uint **)(param_1 + 0x4a8);
          if (*(uint **)(param_1 + 0x4a8) == (uint *)0x0) {
            puVar20 = (uint *)(param_1 + 0x498);
          }
          uVar10 = *puVar20;
          if (uVar10 == 0) {
            iVar1 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar1 = iVar2 + -1;
            }
            uVar14 = 0;
            uVar22 = (ulonglong)(uint)(iVar1 >> 5);
            if (iVar1 >> 5 < 1) {
              uVar22 = uVar14;
            }
            iVar12 = 0;
            do {
              if (uVar22 == uVar14) goto LAB_143dbeb18;
              iVar12 = iVar12 + 0x20;
              uVar10 = puVar20[uVar14 + 1];
              uVar14 = uVar14 + 1;
            } while (uVar10 == 0);
          }
          else {
            iVar12 = 0;
            uVar14 = 0;
          }
          uVar22 = (ulonglong)(-uVar10 & uVar10);
          uVar15 = uVar22 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar1 = (iVar12 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar1) {
            iVar1 = iVar2;
          }
        }
        if (iVar1 != iVar2) {
          uVar10 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar16 + (longlong)
                       *(int *)(*(longlong *)(param_1 + 0x488) + 0x5c + (longlong)iVar1 * 0x60) * 4)
                 = 0xffffffff;
            uVar10 = ~(uint)uVar22 & uVar10;
            puVar20 = *(uint **)(param_1 + 0x4a8);
            if (*(uint **)(param_1 + 0x4a8) == (uint *)0x0) {
              puVar20 = (uint *)(param_1 + 0x498);
            }
            iVar13 = *(int *)(param_1 + 0x4b0);
            iVar1 = (int)uVar14;
            lVar19 = (longlong)iVar1;
            uVar17 = puVar20[lVar19] & uVar10;
            if (uVar17 == 0) {
              iVar8 = iVar13 + 0x1e;
              if (-1 < iVar13 + -1) {
                iVar8 = iVar13 + -1;
              }
              iVar8 = iVar8 >> 5;
              iVar12 = iVar12 + 0x20;
              iVar7 = iVar8;
              if (iVar8 < iVar1) {
                iVar7 = iVar1;
              }
              if (iVar1 < iVar8) {
                lVar3 = 0;
                do {
                  uVar17 = puVar20[lVar19 + lVar3 + 1];
                  if (uVar17 != 0) {
                    uVar14 = (ulonglong)(iVar1 + (int)lVar3 + 1);
                    uVar10 = 0xffffffff;
                    goto LAB_143dbecf0;
                  }
                  iVar12 = iVar12 + 0x20;
                  lVar3 = lVar3 + 1;
                } while (iVar7 - lVar19 != lVar3);
                uVar10 = 0xffffffff;
                lVar19 = (longlong)iVar7;
              }
              uVar14 = lVar19 + 1U & 0xffffffff;
              iVar1 = iVar13;
            }
            else {
LAB_143dbecf0:
              uVar22 = (ulonglong)(-uVar17 & uVar17);
              uVar15 = uVar22 * 2 + 1;
              lVar19 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              iVar1 = (iVar12 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
              if (iVar13 <= iVar1) {
                iVar1 = iVar13;
              }
            }
          } while (iVar1 != iVar2);
        }
      }
      else if (iVar2 == 1) {
        lVar19 = 0;
        do {
          *(undefined4 *)(lVar16 + lVar19 * 4) = 0xffffffff;
          lVar19 = lVar19 + 1;
        } while (lVar19 < *(int *)(param_1 + 0x4d0));
      }
LAB_143dbeb18:
      FUN_143c85488(plVar11,0);
    }
    else {
      FUN_143c85488(plVar11,0);
      *(undefined4 *)(param_1 + 0x4d0) = 1;
      FUN_143dc9f12(plVar11);
    }
    local_78 = (longlong *)(param_1 + 0x4d8);
    iVar2 = *(int *)(param_1 + 0x520);
    if (iVar2 < 2) {
      lVar16 = param_1 + 0x510;
      if (*(longlong *)(param_1 + 0x518) != 0) {
        lVar16 = *(longlong *)(param_1 + 0x518);
      }
      iVar1 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      if (*(int *)(param_1 + 0x4e0) - *(int *)(param_1 + 0x50c) < iVar1 >> 2) {
        iVar2 = *(int *)(param_1 + 0x500);
        if (iVar2 == 0) {
          uVar22 = 1;
          iVar12 = 0;
          uVar14 = 0;
          iVar1 = 0;
        }
        else {
          puVar20 = *(uint **)(param_1 + 0x4f8);
          if (*(uint **)(param_1 + 0x4f8) == (uint *)0x0) {
            puVar20 = (uint *)(param_1 + 0x4e8);
          }
          uVar10 = *puVar20;
          if (uVar10 == 0) {
            iVar1 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar1 = iVar2 + -1;
            }
            uVar14 = 0;
            uVar22 = (ulonglong)(uint)(iVar1 >> 5);
            if (iVar1 >> 5 < 1) {
              uVar22 = uVar14;
            }
            iVar12 = 0;
            do {
              if (uVar22 == uVar14) goto LAB_143dbed54;
              iVar12 = iVar12 + 0x20;
              uVar10 = puVar20[uVar14 + 1];
              uVar14 = uVar14 + 1;
            } while (uVar10 == 0);
          }
          else {
            iVar12 = 0;
            uVar14 = 0;
          }
          uVar22 = (ulonglong)(-uVar10 & uVar10);
          uVar15 = uVar22 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar1 = (iVar12 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar1) {
            iVar1 = iVar2;
          }
        }
        if (iVar1 != iVar2) {
          uVar10 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar16 + (longlong)
                       *(int *)(*(longlong *)(param_1 + 0x4d8) + 0x5c + (longlong)iVar1 * 0x60) * 4)
                 = 0xffffffff;
            uVar10 = ~(uint)uVar22 & uVar10;
            puVar20 = *(uint **)(param_1 + 0x4f8);
            if (*(uint **)(param_1 + 0x4f8) == (uint *)0x0) {
              puVar20 = (uint *)(param_1 + 0x4e8);
            }
            iVar13 = *(int *)(param_1 + 0x500);
            iVar1 = (int)uVar14;
            lVar19 = (longlong)iVar1;
            uVar17 = puVar20[lVar19] & uVar10;
            if (uVar17 == 0) {
              iVar8 = iVar13 + 0x1e;
              if (-1 < iVar13 + -1) {
                iVar8 = iVar13 + -1;
              }
              iVar8 = iVar8 >> 5;
              iVar12 = iVar12 + 0x20;
              iVar7 = iVar8;
              if (iVar8 < iVar1) {
                iVar7 = iVar1;
              }
              if (iVar1 < iVar8) {
                lVar3 = 0;
                do {
                  uVar17 = puVar20[lVar19 + lVar3 + 1];
                  if (uVar17 != 0) {
                    uVar14 = (ulonglong)(iVar1 + (int)lVar3 + 1);
                    uVar10 = 0xffffffff;
                    goto LAB_143dbf896;
                  }
                  iVar12 = iVar12 + 0x20;
                  lVar3 = lVar3 + 1;
                } while (iVar7 - lVar19 != lVar3);
                uVar10 = 0xffffffff;
                lVar19 = (longlong)iVar7;
              }
              uVar14 = lVar19 + 1U & 0xffffffff;
              iVar1 = iVar13;
            }
            else {
LAB_143dbf896:
              uVar22 = (ulonglong)(-uVar17 & uVar17);
              uVar15 = uVar22 * 2 + 1;
              lVar19 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              iVar1 = (iVar12 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
              if (iVar13 <= iVar1) {
                iVar1 = iVar13;
              }
            }
          } while (iVar1 != iVar2);
        }
      }
      else if (iVar2 == 1) {
        lVar19 = 0;
        do {
          *(undefined4 *)(lVar16 + lVar19 * 4) = 0xffffffff;
          lVar19 = lVar19 + 1;
        } while (lVar19 < *(int *)(param_1 + 0x520));
      }
LAB_143dbed54:
      FUN_143c851b8(local_78,0);
    }
    else {
      FUN_143c851b8(local_78,0);
      *(undefined4 *)(param_1 + 0x520) = 1;
      FUN_143dca1b2();
    }
    iVar2 = *(int *)(param_1 + 0x1e0);
    if ((longlong)iVar2 != 0) {
      lVar16 = *(longlong *)(param_1 + 0x1d8);
      lVar19 = 0;
      do {
        if (*(longlong *)(lVar16 + lVar19) == 0) {
LAB_143dbedd9:
          plVar9 = (longlong *)0x0;
        }
        else {
          lVar3 = FUN_140594892();
          plVar11 = *(longlong **)(lVar16 + lVar19);
          if ((plVar11 == (longlong *)0x0) || (lVar3 == 0)) goto LAB_143dbedd9;
          lVar21 = plVar11[2];
          plVar9 = (longlong *)0x0;
          if (lVar21 != 0) {
            if (*(int *)(lVar21 + 0x38) < *(int *)(lVar3 + 0x38)) goto LAB_143dbedd9;
            plVar9 = plVar11;
            if (*(longlong *)(*(longlong *)(lVar21 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
                != lVar3 + 0x30) {
              plVar9 = (longlong *)0x0;
            }
          }
        }
        uVar4 = (**(code **)(*plVar9 + 0x2c0))();
        local_60 = FUN_143dca452;
        local_70 = _DAT_14cb852b8;
        local_68 = DAT_14cb852c0;
        local_58 = &local_50;
        local_50 = param_1;
        FUN_140e9367e(param_1,&local_70,uVar4,&local_60);
        lVar19 = lVar19 + 8;
      } while ((longlong)iVar2 * 8 != lVar19);
    }
    plVar11 = local_80;
    puVar20 = (uint *)(param_1 + 0x498);
    iVar2 = *(int *)(param_1 + 0x4b0);
    if (iVar2 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = -1;
      puVar5 = *(uint **)(param_1 + 0x4a8);
      if (*(uint **)(param_1 + 0x4a8) == (uint *)0x0) {
        puVar5 = puVar20;
      }
      uVar14 = (ulonglong)(iVar2 + 0x1fU >> 5);
      iVar12 = -0x3e - (iVar2 + 0x1fU & 0xffffffe0);
      uVar10 = 0xffffffff >> (-(char)iVar2 & 0x1fU);
      do {
        bVar23 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar23) goto LAB_143dbeea9;
        iVar12 = iVar12 + 0x20;
        uVar17 = uVar10 & puVar5[uVar14];
        uVar10 = 0xffffffff;
      } while (uVar17 == 0);
      uVar14 = (ulonglong)uVar17 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar1 = -(((uint)lVar16 ^ 0x3f) + iVar12);
    }
LAB_143dbeea9:
    iVar2 = iVar1 + 1;
    iVar12 = *(int *)(param_1 + 0x490);
    if (iVar2 < iVar12) {
      if ((0 < *(int *)(param_1 + 0x4bc)) &&
         (uVar14 = (ulonglong)*(uint *)(param_1 + 0x4b8), *(uint *)(param_1 + 0x4b8) != 0xffffffff))
      {
        lVar16 = *(longlong *)(param_1 + 0x488);
        do {
          iVar12 = (int)uVar14;
          if (iVar1 < iVar12) {
            lVar19 = (longlong)iVar12 * 0x60;
            iVar12 = *(int *)(lVar16 + lVar19);
            iVar13 = *(int *)(lVar16 + 4 + lVar19);
            uVar14 = (ulonglong)iVar13;
            if (uVar14 != 0xffffffffffffffff) {
              *(int *)(lVar16 + uVar14 * 0x60) = iVar12;
            }
            if (iVar12 == -1) {
              *(int *)(param_1 + 0x4b8) = iVar13;
            }
            else {
              *(int *)(lVar16 + 4 + (longlong)iVar12 * 0x60) = iVar13;
            }
            *(int *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + -1;
          }
          else {
            uVar14 = (ulonglong)*(uint *)(lVar16 + 4 + (longlong)iVar12 * 0x60);
          }
        } while ((int)uVar14 != -1);
        iVar12 = *(int *)(param_1 + 0x490);
      }
      if (iVar12 != iVar2) {
        *(int *)(param_1 + 0x490) = iVar2;
      }
      *(int *)(param_1 + 0x4b0) = iVar2;
      iVar1 = iVar1 + 0x20;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar12 = iVar2;
      if (iVar2 % 0x20 != 0) {
        puVar5 = *(uint **)(param_1 + 0x4a8);
        if (*(uint **)(param_1 + 0x4a8) == (uint *)0x0) {
          puVar5 = puVar20;
        }
        bVar6 = -(char)(iVar2 % 0x20);
        puVar5[iVar1 >> 5] = (puVar5[iVar1 >> 5] << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
        iVar12 = *(int *)(param_1 + 0x490);
      }
    }
    if (*(int *)(param_1 + 0x494) != iVar12) {
      FUN_1448fc38a(local_80);
      iVar12 = *(int *)(param_1 + 0x490);
    }
    uVar10 = iVar12 - *(int *)(param_1 + 0x4bc);
    iVar2 = 1;
    if (3 < uVar10) {
      uVar14 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar16 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar2 = 1 << ((byte)lVar16 & 0x1f);
    }
    if ((0 < (int)uVar10 && *(int *)(param_1 + 0x4d0) < iVar2) ||
       (iVar2 < *(int *)(param_1 + 0x4d0))) {
      *(int *)(param_1 + 0x4d0) = iVar2;
      FUN_143dc9f12(plVar11);
    }
    iVar2 = *(int *)(param_1 + 0x4b0);
    if (iVar2 == 0) {
      uVar14 = 1;
      uVar22 = 0;
      iVar12 = 0;
      iVar1 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x4a8);
      if (*(uint **)(param_1 + 0x4a8) == (uint *)0x0) {
        puVar5 = puVar20;
      }
      uVar10 = *puVar5;
      if (uVar10 == 0) {
        iVar1 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar1 = iVar2 + -1;
        }
        uVar22 = 0;
        uVar14 = (ulonglong)(uint)(iVar1 >> 5);
        if (iVar1 >> 5 < 1) {
          uVar14 = uVar22;
        }
        iVar12 = 0;
        do {
          if (uVar14 == uVar22) goto LAB_143dbf086;
          iVar12 = iVar12 + 0x20;
          uVar10 = puVar5[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar22 = 0;
        iVar12 = 0;
      }
      uVar14 = (ulonglong)(-uVar10 & uVar10);
      uVar15 = uVar14 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar1 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar1) {
        iVar1 = iVar2;
      }
    }
    if (iVar1 != iVar2) {
      uVar10 = 0xffffffff;
      do {
        lVar16 = *local_80 + (longlong)iVar1 * 0x60;
        plVar11 = (longlong *)(lVar16 + 8);
        lVar3 = (longlong)iVar1 * 0x60 + *local_80;
        lVar19 = lVar3 + 0x18;
        iVar1 = *(int *)(lVar3 + 0x30);
        iVar13 = -1;
        if (iVar1 != 0) {
          lVar3 = *(longlong *)(lVar16 + 0x28);
          if (*(longlong *)(lVar16 + 0x28) == 0) {
            lVar3 = lVar19;
          }
          uVar15 = (ulonglong)(iVar1 + 0x1fU >> 5);
          iVar13 = -0x3e - (iVar1 + 0x1fU & 0xffffffe0);
          uVar17 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
          do {
            bVar23 = uVar15 == 0;
            uVar15 = uVar15 - 1;
            if (bVar23) {
              iVar13 = -1;
              goto LAB_143dbf36f;
            }
            iVar13 = iVar13 + 0x20;
            uVar18 = uVar17 & *(uint *)(lVar3 + uVar15 * 4);
            uVar17 = 0xffffffff;
          } while (uVar18 == 0);
          uVar15 = (ulonglong)uVar18 * 2 + 1;
          lVar3 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar13 = -(((uint)lVar3 ^ 0x3f) + iVar13);
        }
LAB_143dbf36f:
        iVar1 = iVar13 + 1;
        iVar8 = *(int *)(lVar16 + 0x10);
        if (iVar1 < iVar8) {
          if ((0 < *(int *)(lVar16 + 0x3c)) &&
             (uVar15 = (ulonglong)*(uint *)(lVar16 + 0x38), *(uint *)(lVar16 + 0x38) != 0xffffffff))
          {
            lVar3 = *plVar11;
            do {
              lVar21 = (longlong)(int)uVar15;
              if (iVar13 < (int)uVar15) {
                iVar8 = *(int *)(lVar3 + lVar21 * 0x18);
                iVar7 = *(int *)(lVar3 + 4 + lVar21 * 0x18);
                uVar15 = (ulonglong)iVar7;
                if (uVar15 != 0xffffffffffffffff) {
                  *(int *)(lVar3 + uVar15 * 0x18) = iVar8;
                }
                if (iVar8 == -1) {
                  *(int *)(lVar16 + 0x38) = iVar7;
                }
                else {
                  *(int *)(lVar3 + 4 + (longlong)iVar8 * 0x18) = iVar7;
                }
                *(int *)(lVar16 + 0x3c) = *(int *)(lVar16 + 0x3c) + -1;
              }
              else {
                uVar15 = (ulonglong)*(uint *)(lVar3 + 4 + lVar21 * 0x18);
              }
            } while ((int)uVar15 != -1);
            iVar8 = *(int *)(lVar16 + 0x10);
          }
          if (iVar8 != iVar1) {
            *(int *)(lVar16 + 0x10) = iVar1;
          }
          *(int *)(lVar16 + 0x30) = iVar1;
          iVar13 = iVar13 + 0x20;
          if (-1 < iVar1) {
            iVar13 = iVar1;
          }
          iVar8 = iVar1;
          if (iVar1 % 0x20 != 0) {
            if (*(longlong *)(lVar16 + 0x28) != 0) {
              lVar19 = *(longlong *)(lVar16 + 0x28);
            }
            bVar6 = -(char)(iVar1 % 0x20);
            *(uint *)(lVar19 + (longlong)(iVar13 >> 5) * 4) =
                 (uint)(*(int *)(lVar19 + (longlong)(iVar13 >> 5) * 4) << (bVar6 & 0x1f)) >>
                 (bVar6 & 0x1f);
            iVar8 = *(int *)(lVar16 + 0x10);
          }
        }
        if (*(int *)(lVar16 + 0x14) != iVar8) {
          FUN_144727cd0(plVar11);
          iVar8 = *(int *)(lVar16 + 0x10);
        }
        uVar17 = iVar8 - *(int *)(lVar16 + 0x3c);
        iVar1 = 1;
        if (3 < uVar17) {
          uVar15 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
          lVar19 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar1 = 1 << ((byte)lVar19 & 0x1f);
        }
        if ((0 < (int)uVar17 && *(int *)(lVar16 + 0x50) < iVar1) ||
           (iVar1 < *(int *)(lVar16 + 0x50))) {
          *(int *)(lVar16 + 0x50) = iVar1;
          FUN_143dcbaee(plVar11);
        }
        uVar10 = uVar10 & ~(uint)uVar14;
        puVar5 = *(uint **)(param_1 + 0x4a8);
        if (*(uint **)(param_1 + 0x4a8) == (uint *)0x0) {
          puVar5 = puVar20;
        }
        iVar13 = *(int *)(param_1 + 0x4b0);
        iVar1 = (int)uVar22;
        lVar16 = (longlong)iVar1;
        uVar17 = puVar5[lVar16] & uVar10;
        if (uVar17 == 0) {
          iVar8 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar8 = iVar13 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar7 = iVar8;
          if (iVar8 < iVar1) {
            iVar7 = iVar1;
          }
          if (iVar1 < iVar8) {
            lVar19 = 0;
            do {
              uVar17 = puVar5[lVar16 + lVar19 + 1];
              if (uVar17 != 0) {
                uVar22 = (ulonglong)(iVar1 + (int)lVar19 + 1);
                uVar10 = 0xffffffff;
                goto LAB_143dbf504;
              }
              iVar12 = iVar12 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar7 - lVar16 != lVar19);
            uVar10 = 0xffffffff;
            iVar1 = iVar7;
          }
          uVar22 = (ulonglong)(iVar1 + 1);
          iVar1 = iVar13;
        }
        else {
LAB_143dbf504:
          uVar14 = (ulonglong)(-uVar17 & uVar17);
          uVar15 = uVar14 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar1 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar13 <= iVar1) {
            iVar1 = iVar13;
          }
        }
      } while (iVar1 != iVar2);
    }
LAB_143dbf086:
    plVar11 = local_78;
    puVar20 = (uint *)(param_1 + 0x4e8);
    iVar2 = *(int *)(param_1 + 0x500);
    if (iVar2 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = -1;
      puVar5 = *(uint **)(param_1 + 0x4f8);
      if (*(uint **)(param_1 + 0x4f8) == (uint *)0x0) {
        puVar5 = puVar20;
      }
      uVar14 = (ulonglong)(iVar2 + 0x1fU >> 5);
      iVar12 = -0x3e - (iVar2 + 0x1fU & 0xffffffe0);
      uVar10 = 0xffffffff >> (-(char)iVar2 & 0x1fU);
      do {
        bVar23 = uVar14 == 0;
        uVar14 = uVar14 - 1;
        if (bVar23) goto LAB_143dbf108;
        iVar12 = iVar12 + 0x20;
        uVar17 = uVar10 & puVar5[uVar14];
        uVar10 = 0xffffffff;
      } while (uVar17 == 0);
      uVar14 = (ulonglong)uVar17 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar1 = -(((uint)lVar16 ^ 0x3f) + iVar12);
    }
LAB_143dbf108:
    iVar2 = iVar1 + 1;
    iVar12 = *(int *)(param_1 + 0x4e0);
    if (iVar2 < iVar12) {
      if ((0 < *(int *)(param_1 + 0x50c)) &&
         (uVar14 = (ulonglong)*(uint *)(param_1 + 0x508), *(uint *)(param_1 + 0x508) != 0xffffffff))
      {
        lVar16 = *(longlong *)(param_1 + 0x4d8);
        do {
          iVar12 = (int)uVar14;
          if (iVar1 < iVar12) {
            lVar19 = (longlong)iVar12 * 0x60;
            iVar12 = *(int *)(lVar16 + lVar19);
            iVar13 = *(int *)(lVar16 + 4 + lVar19);
            uVar14 = (ulonglong)iVar13;
            if (uVar14 != 0xffffffffffffffff) {
              *(int *)(lVar16 + uVar14 * 0x60) = iVar12;
            }
            if (iVar12 == -1) {
              *(int *)(param_1 + 0x508) = iVar13;
            }
            else {
              *(int *)(lVar16 + 4 + (longlong)iVar12 * 0x60) = iVar13;
            }
            *(int *)(param_1 + 0x50c) = *(int *)(param_1 + 0x50c) + -1;
          }
          else {
            uVar14 = (ulonglong)*(uint *)(lVar16 + 4 + (longlong)iVar12 * 0x60);
          }
        } while ((int)uVar14 != -1);
        iVar12 = *(int *)(param_1 + 0x4e0);
      }
      if (iVar12 != iVar2) {
        *(int *)(param_1 + 0x4e0) = iVar2;
      }
      *(int *)(param_1 + 0x500) = iVar2;
      iVar1 = iVar1 + 0x20;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar12 = iVar2;
      if (iVar2 % 0x20 != 0) {
        puVar5 = *(uint **)(param_1 + 0x4f8);
        if (*(uint **)(param_1 + 0x4f8) == (uint *)0x0) {
          puVar5 = puVar20;
        }
        bVar6 = -(char)(iVar2 % 0x20);
        puVar5[iVar1 >> 5] = (puVar5[iVar1 >> 5] << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
        iVar12 = *(int *)(param_1 + 0x4e0);
      }
    }
    if (*(int *)(param_1 + 0x4e4) != iVar12) {
      FUN_1448fc38a(local_78);
      iVar12 = *(int *)(param_1 + 0x4e0);
    }
    uVar10 = iVar12 - *(int *)(param_1 + 0x50c);
    iVar2 = 1;
    if (3 < uVar10) {
      uVar14 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar16 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar2 = 1 << ((byte)lVar16 & 0x1f);
    }
    if ((0 < (int)uVar10 && *(int *)(param_1 + 0x520) < iVar2) ||
       (iVar2 < *(int *)(param_1 + 0x520))) {
      *(int *)(param_1 + 0x520) = iVar2;
      FUN_143dca1b2(plVar11);
    }
    iVar2 = *(int *)(param_1 + 0x500);
    if (iVar2 == 0) {
      uVar14 = 1;
      uVar22 = 0;
      iVar12 = 0;
      iVar1 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x4f8);
      if (*(uint **)(param_1 + 0x4f8) == (uint *)0x0) {
        puVar5 = puVar20;
      }
      uVar10 = *puVar5;
      if (uVar10 == 0) {
        iVar1 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar1 = iVar2 + -1;
        }
        uVar22 = 0;
        uVar14 = (ulonglong)(uint)(iVar1 >> 5);
        if (iVar1 >> 5 < 1) {
          uVar14 = uVar22;
        }
        iVar12 = 0;
        do {
          if (uVar14 == uVar22) goto LAB_143dbf55b;
          iVar12 = iVar12 + 0x20;
          uVar10 = puVar5[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar22 = 0;
        iVar12 = 0;
      }
      uVar14 = (ulonglong)(-uVar10 & uVar10);
      uVar15 = uVar14 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar1 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar1) {
        iVar1 = iVar2;
      }
    }
    if (iVar1 != iVar2) {
      uVar10 = 0xffffffff;
      do {
        lVar16 = *local_78 + (longlong)iVar1 * 0x60;
        plVar11 = (longlong *)(lVar16 + 8);
        lVar3 = (longlong)iVar1 * 0x60 + *local_78;
        lVar19 = lVar3 + 0x18;
        iVar1 = *(int *)(lVar3 + 0x30);
        iVar13 = -1;
        if (iVar1 != 0) {
          lVar3 = *(longlong *)(lVar16 + 0x28);
          if (*(longlong *)(lVar16 + 0x28) == 0) {
            lVar3 = lVar19;
          }
          uVar15 = (ulonglong)(iVar1 + 0x1fU >> 5);
          iVar13 = -0x3e - (iVar1 + 0x1fU & 0xffffffe0);
          uVar17 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
          do {
            bVar23 = uVar15 == 0;
            uVar15 = uVar15 - 1;
            if (bVar23) {
              iVar13 = -1;
              goto LAB_143dbf61e;
            }
            iVar13 = iVar13 + 0x20;
            uVar18 = uVar17 & *(uint *)(lVar3 + uVar15 * 4);
            uVar17 = 0xffffffff;
          } while (uVar18 == 0);
          uVar15 = (ulonglong)uVar18 * 2 + 1;
          lVar3 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar13 = -(((uint)lVar3 ^ 0x3f) + iVar13);
        }
LAB_143dbf61e:
        iVar1 = iVar13 + 1;
        iVar8 = *(int *)(lVar16 + 0x10);
        if (iVar1 < iVar8) {
          if ((0 < *(int *)(lVar16 + 0x3c)) &&
             (uVar15 = (ulonglong)*(uint *)(lVar16 + 0x38), *(uint *)(lVar16 + 0x38) != 0xffffffff))
          {
            lVar3 = *plVar11;
            do {
              lVar21 = (longlong)(int)uVar15;
              if (iVar13 < (int)uVar15) {
                iVar8 = *(int *)(lVar3 + lVar21 * 0x18);
                iVar7 = *(int *)(lVar3 + 4 + lVar21 * 0x18);
                uVar15 = (ulonglong)iVar7;
                if (uVar15 != 0xffffffffffffffff) {
                  *(int *)(lVar3 + uVar15 * 0x18) = iVar8;
                }
                if (iVar8 == -1) {
                  *(int *)(lVar16 + 0x38) = iVar7;
                }
                else {
                  *(int *)(lVar3 + 4 + (longlong)iVar8 * 0x18) = iVar7;
                }
                *(int *)(lVar16 + 0x3c) = *(int *)(lVar16 + 0x3c) + -1;
              }
              else {
                uVar15 = (ulonglong)*(uint *)(lVar3 + 4 + lVar21 * 0x18);
              }
            } while ((int)uVar15 != -1);
            iVar8 = *(int *)(lVar16 + 0x10);
          }
          if (iVar8 != iVar1) {
            *(int *)(lVar16 + 0x10) = iVar1;
          }
          *(int *)(lVar16 + 0x30) = iVar1;
          iVar13 = iVar13 + 0x20;
          if (-1 < iVar1) {
            iVar13 = iVar1;
          }
          iVar8 = iVar1;
          if (iVar1 % 0x20 != 0) {
            if (*(longlong *)(lVar16 + 0x28) != 0) {
              lVar19 = *(longlong *)(lVar16 + 0x28);
            }
            bVar6 = -(char)(iVar1 % 0x20);
            *(uint *)(lVar19 + (longlong)(iVar13 >> 5) * 4) =
                 (uint)(*(int *)(lVar19 + (longlong)(iVar13 >> 5) * 4) << (bVar6 & 0x1f)) >>
                 (bVar6 & 0x1f);
            iVar8 = *(int *)(lVar16 + 0x10);
          }
        }
        if (*(int *)(lVar16 + 0x14) != iVar8) {
          FUN_144727cd0(plVar11);
          iVar8 = *(int *)(lVar16 + 0x10);
        }
        uVar17 = iVar8 - *(int *)(lVar16 + 0x3c);
        iVar1 = 1;
        if (3 < uVar17) {
          uVar15 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
          lVar19 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar1 = 1 << ((byte)lVar19 & 0x1f);
        }
        if ((0 < (int)uVar17 && *(int *)(lVar16 + 0x50) < iVar1) ||
           (iVar1 < *(int *)(lVar16 + 0x50))) {
          *(int *)(lVar16 + 0x50) = iVar1;
          FUN_143dcbd8a(plVar11);
        }
        uVar10 = uVar10 & ~(uint)uVar14;
        puVar5 = *(uint **)(param_1 + 0x4f8);
        if (*(uint **)(param_1 + 0x4f8) == (uint *)0x0) {
          puVar5 = puVar20;
        }
        iVar13 = *(int *)(param_1 + 0x500);
        iVar1 = (int)uVar22;
        lVar16 = (longlong)iVar1;
        uVar17 = puVar5[lVar16] & uVar10;
        if (uVar17 == 0) {
          iVar8 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar8 = iVar13 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar7 = iVar8;
          if (iVar8 < iVar1) {
            iVar7 = iVar1;
          }
          if (iVar1 < iVar8) {
            lVar19 = 0;
            do {
              uVar17 = puVar5[lVar16 + lVar19 + 1];
              if (uVar17 != 0) {
                uVar22 = (ulonglong)(iVar1 + (int)lVar19 + 1);
                uVar10 = 0xffffffff;
                goto LAB_143dbf7ad;
              }
              iVar12 = iVar12 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar7 - lVar16 != lVar19);
            uVar10 = 0xffffffff;
            iVar1 = iVar7;
          }
          uVar22 = (ulonglong)(iVar1 + 1);
          iVar1 = iVar13;
        }
        else {
LAB_143dbf7ad:
          uVar14 = (ulonglong)(-uVar17 & uVar17);
          uVar15 = uVar14 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar1 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar13 <= iVar1) {
            iVar1 = iVar13;
          }
        }
      } while (iVar1 != iVar2);
    }
  }
LAB_143dbf55b:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140e92d2a();
  return;
}



// FUNCTION 143dbf934 FUN_143dbf934 body=471 status=ok
// SIG undefined FUN_143dbf934(void)

int FUN_143dbf934(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  if (param_2 == 0) {
LAB_143dbf9e6:
    iVar11 = 0;
  }
  else {
    uVar3 = *param_1;
    iVar2 = *(int *)(param_2 + 0x98);
    iVar11 = 0;
    if (iVar2 == 0) {
      uVar16 = 1;
      uVar15 = 0;
      iVar12 = 0;
      iVar7 = 0;
    }
    else {
      puVar5 = *(uint **)(param_2 + 0x90);
      if (*(uint **)(param_2 + 0x90) == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 0x80);
      }
      uVar13 = *puVar5;
      if (uVar13 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        uVar15 = 0;
        uVar16 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar16 = uVar15;
        }
        iVar12 = 0;
        do {
          if (uVar16 == uVar15) goto LAB_143dbf9e6;
          iVar12 = iVar12 + 0x20;
          uVar13 = puVar5[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar15 = 0;
        iVar12 = 0;
      }
      uVar16 = (ulonglong)(-uVar13 & uVar13);
      uVar1 = uVar16 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar7 = (iVar12 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar7) {
        iVar7 = iVar2;
      }
    }
    if (iVar7 != iVar2) {
      uVar13 = 0xffffffff;
      iVar11 = 0;
      iVar4 = iVar2;
      do {
        lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x10 + (longlong)iVar7 * 0x20);
        if (lVar6 != 0) {
          lVar6 = FUN_14059517c(uVar3,lVar6,param_1[1]);
          iVar11 = (iVar11 + 1) - (uint)(lVar6 == 0);
          iVar4 = *(int *)(param_2 + 0x98);
        }
        uVar13 = uVar13 & ~(uint)uVar16;
        puVar5 = *(uint **)(param_2 + 0x90);
        if (*(uint **)(param_2 + 0x90) == (uint *)0x0) {
          puVar5 = (uint *)(param_2 + 0x80);
        }
        iVar7 = (int)uVar15;
        lVar6 = (longlong)iVar7;
        uVar8 = puVar5[lVar6] & uVar13;
        if (uVar8 == 0) {
          iVar9 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar9 = iVar4 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar7) {
            iVar10 = iVar7;
          }
          if (iVar7 < iVar9) {
            lVar14 = 0;
            do {
              uVar8 = puVar5[lVar6 + lVar14 + 1];
              if (uVar8 != 0) {
                uVar15 = (ulonglong)(iVar7 + (int)lVar14 + 1);
                uVar13 = 0xffffffff;
                goto LAB_143dbfac2;
              }
              iVar12 = iVar12 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar10 - lVar6 != lVar14);
            uVar13 = 0xffffffff;
            iVar7 = iVar10;
          }
          uVar15 = (ulonglong)(iVar7 + 1);
          iVar7 = iVar4;
        }
        else {
LAB_143dbfac2:
          uVar16 = (ulonglong)(-uVar8 & uVar8);
          uVar1 = uVar16 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar7 = (iVar12 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar7) {
            iVar7 = iVar4;
          }
        }
      } while (iVar7 != iVar2);
    }
  }
  return iVar11;
}



// FUNCTION 143dbfc61 FUN_143dbfc61 body=69 status=ok
// SIG undefined FUN_143dbfc61(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dbfc61(void)

{
  _DAT_14cb85020 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dbfca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb85028,1);
  return;
}



// FUNCTION 143dbfca6 FUN_143dbfca6 body=69 status=ok
// SIG undefined FUN_143dbfca6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dbfca6(void)

{
  _DAT_14cb85030 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dbfce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb85038,1);
  return;
}



// FUNCTION 143dbfcf8 FUN_143dbfcf8 body=81 status=ok
// SIG undefined FUN_143dbfcf8(void)

void FUN_143dbfcf8(longlong *param_1)

{
  longlong lVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  if (((longlong *)*param_1 != (longlong *)0x0) && (param_1[1] == 0)) {
    lVar1 = (**(code **)(*(longlong *)*param_1 + 0x3a8))();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    param_1[1] = lVar1;
  }
  return;
}



// FUNCTION 143dbfd4a FUN_143dbfd4a body=87 status=ok
// SIG undefined FUN_143dbfd4a(void)

void FUN_143dbfd4a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 800) = 0;
  if (((*(byte *)(param_1 + 0x2ea) & 0x20) != 0) &&
     (lVar1 = *(longlong *)(param_1 + 0x188), lVar1 != 0)) {
    uVar2 = FUN_140757e32();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
      *(undefined4 *)(param_1 + 800) = uVar4;
    }
  }
  return;
}



// FUNCTION 143dbfdc6 FUN_143dbfdc6 body=157 status=ok
// SIG undefined FUN_143dbfdc6(void)

void FUN_143dbfdc6(longlong *param_1,ushort param_2,char param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_1[0xf];
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x144) & 4) != 0)) {
    param_2 = param_2 & ~*(ushort *)(lVar1 + 0x146);
  }
  if (*(ushort *)(param_1 + 0x12d) != param_2) {
    *(ushort *)(param_1 + 0x12d) = param_2;
    if (param_3 != '\0') {
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar1 = param_1[4];
      }
      else {
        lVar1 = 0;
      }
      if (*(char *)(lVar1 + 0x178) == '\x03') {
        *(ushort *)((longlong)param_1 + 0x19e) = param_2;
        *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + 1;
        if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
          plVar2 = (longlong *)param_1[4];
        }
        else {
          plVar2 = (longlong *)0x0;
        }
        *(int *)((longlong)plVar2 + 0x3fc) = *(int *)((longlong)plVar2 + 0x3fc) + 1;
        (**(code **)(*plVar2 + 0x578))();
      }
    }
    if (param_4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143dbfe54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x410))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 143dbfe64 FUN_143dbfe64 body=2557 status=ok
// SIG undefined FUN_143dbfe64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dbfe64(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  ushort uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  ushort uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double _X;
  double _X_00;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double _X_01;
  undefined1 auStack_248 [32];
  longlong local_228;
  undefined8 local_220;
  longlong *local_218;
  longlong local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined8 local_1a4;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  longlong local_180;
  undefined8 local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined2 local_110;
  undefined8 local_10c;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (param_1[0x10] != 0) {
    lVar10 = FUN_140ccfc10();
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      local_210 = param_1[4];
    }
    else {
      local_210 = 0;
    }
    local_218 = param_1 + 0xe1;
    uVar17 = (ulonglong)(int)param_1[0xe2];
    if (0 < (longlong)uVar17) {
      iVar21 = -(int)param_1[0xe2];
      lVar22 = uVar17 * 0x18;
      do {
        lVar20 = param_1[0xe1];
        if ((*(ushort *)(param_1 + 0x12d) >> (*(uint *)(lVar20 + -0x18 + lVar22) & 0x1f) & 1) == 0)
        {
          plVar11 = *(longlong **)(lVar20 + -0x10 + lVar22);
          if (plVar11 == (longlong *)0x0) {
            uVar15 = *(uint *)(param_1 + 0xe2);
            if (uVar17 != uVar15) {
              iVar19 = iVar21 + uVar15;
              if (0 < (int)(iVar21 + uVar15)) {
                iVar19 = 1;
              }
              memmove((void *)(lVar20 + lVar22 + -0x18),
                      (void *)(lVar20 + (longlong)(int)(uVar15 - iVar19) * 0x18),
                      (longlong)iVar19 * 0x18);
              uVar15 = *(uint *)(param_1 + 0xe2);
            }
            *(uint *)(param_1 + 0xe2) = uVar15 - 1;
            FUN_1488e42e4(local_218);
          }
          else {
            (**(code **)(*plVar11 + 0x2b0))();
            plVar11 = *(longlong **)(*local_218 + -8 + lVar22);
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar11 + 0x2b0))();
            }
          }
        }
        iVar21 = iVar21 + 1;
        lVar22 = lVar22 + -0x18;
        bVar23 = 1 < uVar17;
        uVar17 = uVar17 - 1;
      } while (bVar23);
    }
    uVar9 = *(ushort *)(param_1 + 0x12d);
    uVar16 = ~*(ushort *)((longlong)param_1 + 0x96a) & uVar9;
    uVar17 = (ulonglong)uVar16;
    if (uVar16 != 0) {
      lVar10 = lVar10 + 0x848;
      uVar18 = 0;
      do {
        if ((uVar17 & 1) != 0) {
          lVar22 = FUN_1402d1dc0(lVar10);
          plVar11 = (longlong *)FUN_140b51ce6(lVar10 + 0x28);
          if (plVar11 != (longlong *)0x0) {
            dStack_170 = 0.0;
            local_168 = (double)((ulonglong)local_168 & 0xffffffff00000000);
            dStack_160 = 0.0;
            local_178 = param_1;
            lVar22 = (**(code **)(*plVar11 + 0x20))(plVar11,&local_178,0,0);
          }
          if ((lVar22 != 0) &&
             (plVar11 = (longlong *)FUN_1412f5fcc(local_210,lVar22), plVar11 != (longlong *)0x0)) {
            local_178._0_4_ = 0;
            dStack_170 = 0.0;
            if (param_1 == (longlong *)0x0) {
              iVar21 = 0;
              uVar15 = (uint)local_178;
            }
            else {
              uVar15 = *(uint *)((longlong)param_1 + 0xc);
              local_178 = (longlong *)(ulonglong)uVar15;
              if ((int)uVar15 < DAT_14c9647dc) {
                lVar20 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
              }
              else {
                lVar20 = 0;
              }
              iVar21 = *(int *)(lVar20 + 0x10);
              if (*(int *)(lVar20 + 0x10) == 0) {
                LOCK();
                iVar21 = DAT_14c964868 + 1;
                UNLOCK();
                iVar19 = DAT_14c964868 + 1;
                bVar23 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar21;
                if (bVar23) {
                  local_208 = CONCAT44(local_208._4_4_,iVar19);
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar19);
                  iVar19 = (int)local_208;
                }
                LOCK();
                iVar21 = *(int *)(lVar20 + 0x10);
                bVar23 = iVar21 == 0;
                if (bVar23) {
                  *(int *)(lVar20 + 0x10) = iVar19;
                  iVar21 = 0;
                }
                UNLOCK();
                uVar15 = (uint)local_178;
                if (bVar23) {
                  iVar21 = iVar19;
                }
              }
            }
            local_178._0_4_ = uVar15;
            local_178 = (longlong *)CONCAT44(iVar21,(uint)local_178);
            dStack_170 = DAT_14cb850a0;
            (**(code **)(*plVar11 + 0xa80))(plVar11,&local_178);
            if ((*(byte *)(param_1[0x10] + 0x2d5) & 4) != 0) {
              FUN_140c056bc(plVar11,1);
              FUN_140e996a4(plVar11,param_1[0x31]);
            }
            if ((*(byte *)(param_1 + 0x62) & 0x40) == 0) {
              (**(code **)(*plVar11 + 0xa60))(plVar11,0);
            }
            if ((param_1[0x11] != 0) &&
               (plVar11 = (longlong *)FUN_1412f5fcc(local_210,lVar22), plVar11 != (longlong *)0x0))
            {
              FUN_140c0563c(plVar11,1);
              FUN_140e996a4(plVar11,param_1[0x31]);
              if ((*(byte *)(param_1 + 0x62) & 0x40) == 0) {
                (**(code **)(*plVar11 + 0xa60))(plVar11,0);
              }
            }
            iVar21 = (int)param_1[0xe2];
            *(uint *)(param_1 + 0xe2) = iVar21 + 1U;
            if (*(uint *)((longlong)param_1 + 0x714) < iVar21 + 1U) {
              FUN_1488e43e0(local_218,iVar21);
            }
            FUN_1488e4392((longlong)iVar21 * 0x18 + *local_218,uVar18 & 0xffffffff);
          }
          lVar22 = *(longlong *)(lVar10 + 0x48);
          if (lVar22 == 0) {
            uVar12 = FUN_140067708();
            lVar22 = FUN_14477b664(uVar12);
            *(longlong *)(lVar10 + 0x48) = lVar22;
          }
          if (*(longlong *)(lVar10 + 0x50) == 0) {
            if ((lVar22 != 0) && (*(longlong *)(lVar10 + 0x40) != 0)) {
              plVar11 = *(longlong **)(lVar22 + 0xb8);
              if ((plVar11 == (longlong *)0x0) ||
                 (cVar8 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar8 == '\0')) {
                *(undefined8 *)(lVar10 + 0x50) = 0;
              }
              else {
                uVar12 = (**(code **)(*plVar11 + 0x110))(plVar11);
                lVar22 = FUN_144aff482(uVar12,(longlong *)(lVar10 + 0x40));
                *(longlong *)(lVar10 + 0x50) = lVar22;
                if (lVar22 != 0) goto LAB_143dc00ee;
              }
            }
          }
          else {
LAB_143dc00ee:
            if ((*(char *)(lVar10 + 0x58) != '\x01') ||
               ((((param_1[0x31] != 0 &&
                  (plVar11 = (longlong *)FUN_140ed3994(), plVar11 != (longlong *)0x0)) &&
                 ((*(byte *)(plVar11 + 0x84) & 2) != 0)) &&
                (cVar8 = (**(code **)(*plVar11 + 0x6c8))(plVar11), cVar8 != '\0')))) {
              uVar12 = *(undefined8 *)(lVar10 + 0x40);
              uVar13 = FUN_14477b664(*(undefined8 *)(lVar10 + 0x48));
              uVar13 = FUN_14477b664(uVar13);
              uVar3 = *(undefined8 *)(lVar10 + 0x50);
              local_1a8 = 0;
              local_1a4 = 0;
              local_190 = 0;
              uStack_188 = 0;
              local_198 = uVar12;
              uVar12 = FUN_14477b664(uVar13);
              local_190 = FUN_14477b664(uVar12);
              local_180 = 0;
              lVar22 = param_1[0x31];
              lVar20 = param_1[0x10];
              uVar4 = *(undefined4 *)(lVar20 + 0x1c8);
              uVar5 = *(undefined4 *)(lVar20 + 0x1cc);
              uVar12 = *(undefined8 *)(lVar20 + 0x1d0);
              uVar13 = *(undefined8 *)(lVar20 + 0x1d8);
              uVar6 = *(undefined4 *)(lVar20 + 0x198);
              uVar7 = *(undefined4 *)(lVar20 + 0x19c);
              uVar1 = *(undefined8 *)(lVar20 + 0x1a0);
              uVar2 = *(undefined8 *)(lVar20 + 0x1a8);
              auVar28 = *(undefined1 (*) [16])(lVar20 + 0x1b0);
              dVar25 = auVar28._0_8_;
              dVar37 = auVar28._8_8_;
              dVar24 = *(double *)(lVar20 + 0x1c0);
              puVar14 = *(undefined8 **)(lVar20 + 0x230);
              uStack_188 = uVar3;
              if (puVar14 == (undefined8 *)0x0) {
                puVar14 = (undefined8 *)FUN_14001cc68(0x40,0x10);
                uVar3 = DAT_14c8463d8;
                *puVar14 = DAT_14c8463d0;
                puVar14[1] = uVar3;
                uVar3 = DAT_14c8463e8;
                puVar14[2] = DAT_14c8463e0;
                puVar14[3] = uVar3;
                uVar3 = DAT_14c846500;
                puVar14[4] = DAT_14c8464f8;
                puVar14[5] = uVar3;
                puVar14[6] = DAT_14c846508;
                *(undefined8 **)(lVar20 + 0x230) = puVar14;
              }
              auVar32 = _DAT_1499387d0;
              if (((((double)puVar14[4] != dVar25) || (NAN((double)puVar14[4]) || NAN(dVar25))) ||
                  (((double)puVar14[5] != dVar37 ||
                   ((NAN((double)puVar14[5]) || NAN(dVar37) || ((double)puVar14[6] != dVar24))))))
                 || (NAN((double)puVar14[6]) || NAN(dVar24))) {
                auVar33._8_8_ = 0;
                auVar33._0_8_ = dVar24;
                dVar26 = (double)DAT_1499387d0;
                dVar27 = DAT_1499387d0._8_8_;
                auVar28 = divpd(auVar28,_DAT_1499387d0);
                auVar31 = divpd(auVar33,_DAT_1499387d0);
                auVar28 = roundpd(auVar28,auVar28,3);
                auVar31 = roundpd(auVar31,auVar31,3);
                auVar40._0_8_ = dVar25 - auVar28._0_8_ * dVar26;
                auVar40._8_8_ = dVar37 - auVar28._8_8_ * dVar27;
                auVar34._0_8_ = dVar24 - auVar31._0_8_ * dVar26;
                auVar34._8_8_ = 0.0 - auVar31._8_8_ * dVar27;
                auVar38._0_8_ = auVar40._0_8_ + dVar26;
                auVar38._8_8_ = auVar40._8_8_ + dVar27;
                auVar36._0_8_ = auVar34._0_8_ + dVar26;
                auVar36._8_8_ = auVar34._8_8_ + dVar27;
                auVar31._8_8_ = -(ulonglong)(0.0 <= auVar40._8_8_);
                auVar31._0_8_ = -(ulonglong)(0.0 <= auVar40._0_8_);
                auVar28 = blendvpd(auVar38,auVar40,auVar31);
                auVar39._8_8_ = -(ulonglong)(0.0 <= auVar34._8_8_);
                auVar39._0_8_ = -(ulonglong)(0.0 <= auVar34._0_8_);
                auVar31 = blendvpd(auVar36,auVar34,auVar39);
                auVar35._0_8_ = auVar28._0_8_ + -360.0;
                auVar35._8_8_ = auVar28._8_8_ + -360.0;
                auVar29._8_8_ = -(ulonglong)(180.0 < auVar28._8_8_);
                auVar29._0_8_ = -(ulonglong)(180.0 < auVar28._0_8_);
                auVar39 = blendvpd(auVar28,auVar35,auVar29);
                auVar30._8_8_ = -(ulonglong)(180.0 < auVar31._8_8_);
                auVar30._0_8_ = -(ulonglong)(180.0 < auVar31._0_8_);
                auVar28._8_8_ = auVar31._8_8_ + 0.0;
                auVar28._0_8_ = auVar31._0_8_ + -360.0;
                auVar28 = blendvpd(auVar31,auVar28,auVar30);
                *(undefined1 (*) [16])(puVar14 + 4) = auVar39;
                dVar24 = auVar28._0_8_;
                puVar14[6] = dVar24;
                auVar41._8_8_ = 0;
                auVar41._0_8_ = dVar24;
                auVar28 = divpd(auVar39,auVar32);
                auVar32 = divpd(auVar41,auVar32);
                auVar28 = roundpd(auVar28,auVar28,3);
                auVar32 = roundpd(auVar32,auVar32,3);
                dVar37 = (auVar39._0_8_ - auVar28._0_8_ * dVar26) * 0.008726646259971648;
                _X = (auVar39._8_8_ - auVar28._8_8_ * dVar27) * 0.008726646259971648;
                _X_00 = (dVar24 - auVar32._0_8_ * dVar26) * 0.008726646259971648;
                _X_01 = (0.0 - auVar32._8_8_ * dVar27) * 0.008726646259971648;
                local_1f8 = sin(dVar37);
                dVar24 = sin(_X);
                uStack_200 = 0;
                uStack_1d0 = 0;
                local_208 = uVar13;
                local_1d8 = uVar12;
                dVar25 = sin(_X_00);
                uStack_1e0 = 0;
                local_1e8 = uVar1;
                sin(_X_01);
                dVar37 = cos(dVar37);
                dVar26 = cos(_X);
                dVar27 = cos(_X_00);
                cos(_X_01);
                local_168 = -(dVar26 * local_1f8 * dVar25) + dVar24 * dVar37 * dVar27;
                dStack_160 = dVar24 * local_1f8 * dVar25 + dVar26 * dVar37 * dVar27;
                local_178 = (longlong *)(local_1f8 * dVar24 * dVar27 - dVar37 * dVar26 * dVar25);
                dStack_170 = -(local_1f8 * dVar26 * dVar27) - dVar37 * dVar24 * dVar25;
                *puVar14 = local_178;
                puVar14[1] = dStack_170;
                puVar14[2] = local_168;
                puVar14[3] = dStack_160;
                uStack_130 = (undefined4)local_1d8;
                uStack_12c = local_1d8._4_4_;
                uStack_150 = (undefined4)local_1e8;
                uStack_14c = local_1e8._4_4_;
                local_128 = local_208;
              }
              else {
                local_178 = (longlong *)*puVar14;
                dStack_170 = (double)puVar14[1];
                local_168 = (double)puVar14[2];
                dStack_160 = (double)puVar14[3];
                uStack_130 = (int)uVar12;
                uStack_12c = (int)((ulonglong)uVar12 >> 0x20);
                uStack_150 = (int)uVar1;
                uStack_14c = (int)((ulonglong)uVar1 >> 0x20);
                local_128 = uVar13;
              }
              uStack_140 = 0;
              uStack_120 = 0;
              local_118 = 0x3f800000;
              local_110 = 0;
              local_10c = 0;
              local_158 = uVar6;
              uStack_154 = uVar7;
              local_148 = uVar2;
              local_138 = uVar4;
              uStack_134 = uVar5;
              uVar12 = (**(code **)(*param_1 + 0x180))(param_1);
              local_220 = 0;
              local_228 = lVar22;
              FUN_140cb5d65(&local_1c0,uVar12);
              local_1c0 = 0;
              local_1b8 = 0xffffffffffffffff;
              if ((local_180 != 0) && ((DAT_14cb26569 & 1) != 0)) {
                FUN_1400848c0(*(undefined8 *)(local_180 + 0x50));
              }
            }
          }
        }
        if ((ushort)uVar17 < 2) break;
        uVar17 = uVar17 >> 1;
        lVar10 = lVar10 + 0x60;
        bVar23 = uVar18 < 0xf;
        uVar18 = uVar18 + 1;
      } while (bVar23);
      uVar9 = *(ushort *)(param_1 + 0x12d);
    }
    *(ushort *)((longlong)param_1 + 0x96a) = uVar9;
  }
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dc0862 FUN_143dc0862 body=147 status=ok
// SIG undefined FUN_143dc0862(void)

void FUN_143dc0862(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (0 < (longlong)*(int *)(param_1 + 0x6d0)) {
    uVar3 = (longlong)*(int *)(param_1 + 0x6d0) + 1;
    bVar2 = DAT_14c950c29;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + -0x10 + uVar3 * 8);
      if (((bVar2 & 1) == 0) || (plVar1 == (longlong *)0x0)) {
        if (plVar1 != (longlong *)0x0) goto LAB_143dc08bd;
      }
      else {
        FUN_1456cec3c(plVar1);
LAB_143dc08bd:
        (**(code **)(*plVar1 + 0x2e0))(plVar1);
        bVar2 = DAT_14c950c29;
      }
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  *(undefined4 *)(param_1 + 0x6d0) = 0;
  if (*(int *)(param_1 + 0x6d4) < 0) {
    FUN_145f26788((longlong *)(param_1 + 0x6c8));
    return;
  }
  return;
}



// FUNCTION 143dc08f6 FUN_143dc08f6 body=199 status=ok
// SIG undefined FUN_143dc08f6(void)

void FUN_143dc08f6(longlong *param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*param_2 != 0) {
    if (*(longlong *)(*param_1 + 0x970) != 0) {
      FUN_1401c4d5c(*param_2 + 0x40,*(undefined8 *)(*param_1 + 0x20));
    }
    if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
        (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_3[1])) &&
         (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
        lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_3 + 2),1);
        if (lVar2 != 0) {
          (**(code **)(*(longlong *)*param_2 + 0xa88))((longlong *)*param_2,param_3);
        }
      }
    }
    (**(code **)(*(longlong *)*param_2 + 0x2b0))();
    *param_2 = 0;
  }
  return;
}



// FUNCTION 143dc09be FUN_143dc09be body=182 status=ok
// SIG undefined FUN_143dc09be(void)

void FUN_143dc09be(longlong *param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  if ((char)param_1[0x15] == '\0') {
    return;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x31c) + param_2 * *(float *)(param_1 + 0x49);
  *(float *)((longlong)param_1 + 0x31c) = fVar2;
  if ((char)param_1[0x12f] == '\x01') {
LAB_143dc09f8:
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
  else {
    fVar3 = *(float *)((longlong)param_1 + 0x1b4);
    if (0.0 <= fVar3) {
LAB_143dc0a24:
      if (0.0 < fVar3) goto LAB_143dc0a33;
    }
    else {
      if (param_1[0xf] != 0) {
        fVar3 = *(float *)(param_1[0xf] + 0x50);
        goto LAB_143dc0a24;
      }
      fVar3 = 1.0;
LAB_143dc0a33:
      if (fVar3 <= fVar2) {
        if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
          lVar1 = param_1[4];
        }
        else {
          lVar1 = 0;
        }
        if (*(char *)(lVar1 + 0x178) != '\x03') goto LAB_143dc0a44;
        goto LAB_143dc09f8;
      }
    }
    (**(code **)(*param_1 + 0x340))(param_1);
  }
LAB_143dc0a44:
  *(undefined4 *)((longlong)param_1 + 0x324) = *(undefined4 *)((longlong)param_1 + 0x31c);
  return;
}



// FUNCTION 143dc0a74 FUN_143dc0a74 body=538 status=ok
// SIG undefined FUN_143dc0a74(void)

void FUN_143dc0a74(longlong *param_1,float param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if ((*(byte *)((longlong)param_1 + 0x311) & 8) == 0) {
    if (param_1[0x10] != 0) {
      (**(code **)(*param_1 + 0x318))(param_1);
    }
    FUN_1412f5858(param_1);
  }
  lVar3 = param_1[0xf];
  if (*(char *)((longlong)param_1 + 0x313) == '\0') {
    if (((((*(byte *)(lVar3 + 0x16c) & 4) == 0) || (fVar5 = *(float *)(lVar3 + 0x168), fVar5 <= 0.0)
         ) || (*(float *)((longlong)param_1 + 0x31c) < fVar5)) ||
       (fVar5 < *(float *)((longlong)param_1 + 0x31c) - param_2)) {
      if (*(char *)((longlong)param_1 + 0x312) == '\x01') {
        fVar5 = *(float *)(lVar3 + 0x160) * param_2 + *(float *)((longlong)param_1 + 0xa4);
        if (*(float *)(lVar3 + 0x158) <= fVar5) {
          fVar5 = *(float *)(lVar3 + 0x158);
        }
        *(float *)((longlong)param_1 + 0xa4) = fVar5;
        if ((fVar5 == *(float *)(lVar3 + 0x158)) && (!NAN(fVar5) && !NAN(*(float *)(lVar3 + 0x158)))
           ) {
          *(undefined1 *)((longlong)param_1 + 0x312) = 0;
        }
      }
      goto LAB_143dc0bba;
    }
    *(undefined2 *)((longlong)param_1 + 0x312) = 0x100;
  }
  fVar4 = *(float *)((longlong)param_1 + 0xa4) - *(float *)(lVar3 + 0x164) * param_2;
  fVar5 = *(float *)(lVar3 + 0x15c);
  if (*(float *)(lVar3 + 0x15c) <= fVar4) {
    fVar5 = fVar4;
  }
  *(float *)((longlong)param_1 + 0xa4) = fVar5;
  if (((fVar5 == *(float *)(lVar3 + 0x15c)) && (!NAN(fVar5) && !NAN(*(float *)(lVar3 + 0x15c)))) &&
     (*(undefined1 *)((longlong)param_1 + 0x313) = 0,
     (*(byte *)((longlong)param_1 + 0x311) & 2) != 0)) {
    if ((*(byte *)(param_1 + 0x62) & 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143dc0b2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2e0))(param_1);
      return;
    }
    *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) | 0x20;
  }
LAB_143dc0bba:
  cVar2 = DAT_14c76399c;
  (**(code **)(*param_1 + 0x370))(param_1);
  if (cVar2 == '\x01') {
    if ((*(byte *)((longlong)param_1 + 0x2ea) & 0x80) == 0) {
      (**(code **)(*param_1 + 0x360))(param_1);
    }
    *(float *)((longlong)param_1 + 0x96c) = param_2;
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar3 = param_1[4];
    }
    else {
      lVar3 = 0;
    }
    iVar1 = *(int *)(lVar3 + 0x3a0);
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar3 + 0x3b0))) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x3a8) + (longlong)iVar1 * 8);
      iVar1 = *(int *)(lVar3 + 0x28);
      *(uint *)(lVar3 + 0x28) = iVar1 + 1U;
      if (*(uint *)(lVar3 + 0x2c) < iVar1 + 1U) {
        FUN_1457457e2((longlong *)(lVar3 + 0x20),iVar1);
      }
      *(longlong **)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar1 * 8) = param_1;
    }
  }
  else {
    (**(code **)(*param_1 + 0x360))(param_1);
    (**(code **)(*param_1 + 0x368))(param_1,param_2);
    (**(code **)(*param_1 + 0x348))(param_1);
    (**(code **)(*param_1 + 0x350))(param_1,param_2);
    *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xbf;
  }
  return;
}



// FUNCTION 143dc0c8e FUN_143dc0c8e body=69 status=ok
// SIG undefined FUN_143dc0c8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc0c8e(void)

{
  _DAT_14cb850b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dc0cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb850c0,1);
  return;
}



// FUNCTION 143dc0cd3 FUN_143dc0cd3 body=69 status=ok
// SIG undefined FUN_143dc0cd3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc0cd3(void)

{
  _DAT_14cb850c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dc0d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb850d0,1);
  return;
}



// FUNCTION 143dc0d18 FUN_143dc0d18 body=69 status=ok
// SIG undefined FUN_143dc0d18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc0d18(void)

{
  _DAT_14cb850d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dc0d5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb850e0,1);
  return;
}



// FUNCTION 143dc0d5d FUN_143dc0d5d body=69 status=ok
// SIG undefined FUN_143dc0d5d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc0d5d(void)

{
  _DAT_14cb850e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dc0d9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb850f0,1);
  return;
}



// FUNCTION 143dc0da2 FUN_143dc0da2 body=106 status=ok
// SIG undefined FUN_143dc0da2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc0da2(void)

{
  _DAT_14cb85118 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb85120,1);
  if (DAT_14cb85108 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb850f8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143dc0e0c FUN_143dc0e0c body=69 status=ok
// SIG undefined FUN_143dc0e0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc0e0c(void)

{
  _DAT_14cb85138 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dc0e4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb85140,1);
  return;
}



// FUNCTION 143dc0e52 FUN_143dc0e52 body=169 status=ok
// SIG undefined FUN_143dc0e52(void)

void FUN_143dc0e52(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x478);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x470);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x488);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x480);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000143dc0e9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x240);
  return;
}



// FUNCTION 143dc0f34 FUN_143dc0f34 body=69 status=ok
// SIG undefined FUN_143dc0f34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc0f34(void)

{
  _DAT_14cb85170 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dc0f76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb85178,1);
  return;
}



// FUNCTION 143dc0f79 FUN_143dc0f79 body=69 status=ok
// SIG undefined FUN_143dc0f79(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc0f79(void)

{
  _DAT_14cb85188 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dc0fbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb85190,1);
  return;
}



// FUNCTION 143dc0fbe FUN_143dc0fbe body=69 status=ok
// SIG undefined FUN_143dc0fbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc0fbe(void)

{
  _DAT_14cb85198 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dc1000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb851a0,1);
  return;
}



// FUNCTION 143dc1003 FUN_143dc1003 body=69 status=ok
// SIG undefined FUN_143dc1003(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc1003(void)

{
  _DAT_14cb851b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dc1045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb851b8,1);
  return;
}



// FUNCTION 143dc1048 FUN_143dc1048 body=69 status=ok
// SIG undefined FUN_143dc1048(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc1048(void)

{
  _DAT_14cb851c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dc108a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb851c8,1);
  return;
}



// FUNCTION 143dc108d FUN_143dc108d body=69 status=ok
// SIG undefined FUN_143dc108d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc108d(void)

{
  _DAT_14cb851d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dc10cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb851d8,1);
  return;
}



// FUNCTION 143dc10d2 FUN_143dc10d2 body=69 status=ok
// SIG undefined FUN_143dc10d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc10d2(void)

{
  _DAT_14cb851e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dc1114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb851e8,1);
  return;
}



// FUNCTION 143dc1117 FUN_143dc1117 body=69 status=ok
// SIG undefined FUN_143dc1117(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc1117(void)

{
  _DAT_14cb851f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dc1159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb851f8,1);
  return;
}



// FUNCTION 143dc115c FUN_143dc115c body=69 status=ok
// SIG undefined FUN_143dc115c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc115c(void)

{
  _DAT_14cb85200 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dc119e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb85208,1);
  return;
}



// FUNCTION 143dc11ae FUN_143dc11ae body=192 status=ok
// SIG undefined FUN_143dc11ae(void)

void FUN_143dc11ae(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  *param_2 = 0;
  uVar2 = 0;
  uVar4 = 0;
  if (((*(int *)(param_1 + 0x70) != 0) && (uVar3 = *(uint *)(param_1 + 0x6c), -1 < (int)uVar3)) &&
     ((int)uVar3 < DAT_14c9647dc)) {
    uVar4 = 0;
    lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x70))) {
      uVar4 = (uint)((*(uint *)(lVar5 + 8) & 0x10200000) == 0);
    }
  }
  *param_2 = uVar4;
  uVar3 = 0;
  if (((*(int *)(param_1 + 0x84) != 0) &&
      (uVar1 = *(uint *)(param_1 + 0x80), uVar3 = uVar2, -1 < (int)uVar1)) &&
     (((int)uVar1 < DAT_14c9647dc &&
      ((lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 != 0 &&
       (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x84))))))) {
    uVar3 = (uint)((*(uint *)(lVar5 + 8) & 0x10200000) == 0) * 2;
  }
  *param_2 = uVar3 | uVar4;
  return;
}



// FUNCTION 143dc126e FUN_143dc126e body=108 status=ok
// SIG undefined FUN_143dc126e(void)

void FUN_143dc126e(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ushort uVar3;
  
  uVar3 = (ushort)(1 << ((byte)param_2 & 0x1f));
  *(ushort *)(param_1 + 0x104) = *(ushort *)(param_1 + 0x104) | uVar3;
  if ((*(ushort *)(param_1 + 0x1dc) >> (param_2 & 0x1f) & 1) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      lVar2 = *(longlong *)(param_1 + 0x20);
    }
    else {
      lVar2 = 0;
    }
    if (*(char *)(lVar2 + 0x178) == '\x03') {
      *(ushort *)(param_1 + 0x1dc) = *(ushort *)(param_1 + 0x1dc) | uVar3;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x20);
      }
      else {
        plVar1 = (longlong *)0x0;
      }
      *(int *)(plVar1 + 0x92) = (int)plVar1[0x92] + 1;
                    /* WARNING: Could not recover jumptable at 0x000143dc12cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x578))();
      return;
    }
  }
  return;
}



// FUNCTION 143dc12da FUN_143dc12da body=26 status=ok
// SIG undefined FUN_143dc12da(void)

undefined8 FUN_143dc12da(longlong param_1)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar1 = 0;
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(char *)(lVar1 + 0x178) == '\x03');
}



// FUNCTION 143dc13e8 FUN_143dc13e8 body=136 status=ok
// SIG undefined FUN_143dc13e8(void)

void FUN_143dc13e8(longlong param_1,undefined4 param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  
  if ((*(uint *)(param_1 + -0x28) & 0x10) == 0) {
    lVar4 = *(longlong *)(param_1 + -0x10);
  }
  else {
    lVar4 = 0;
  }
  if (*(char *)(lVar4 + 0x178) != '\x03') {
    return;
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      if (DVar2 == DVar3) goto LAB_143dc145b;
    }
    *(char *)(param_1 + 0x563) = '\x02' - (char)param_2;
    return;
  }
LAB_143dc145b:
  FUN_143dc1470(param_1 + -0x30,param_2);
  return;
}



// FUNCTION 143dc1470 FUN_143dc1470 body=568 status=ok
// SIG undefined FUN_143dc1470(void)

void FUN_143dc1470(longlong param_1,undefined4 param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte bVar8;
  char cVar9;
  undefined4 uVar10;
  
  *(undefined1 *)(param_1 + 0x593) = 0;
  cVar4 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x68))(param_1 + 0x30);
  cVar9 = (char)param_2;
  if (cVar4 == cVar9) {
    return;
  }
  if (cVar9 == '\0') {
    FUN_1488e1a94(param_1,1);
    if (*(char *)(param_1 + 0x508) == '\x01') {
      *(undefined1 *)(param_1 + 0x508) = 0;
    }
  }
  else {
    *(byte *)(param_1 + 0x101) = *(byte *)(param_1 + 0x101) | 0x20;
    FUN_143dc126e(param_1,0);
    uVar1 = *(ushort *)(param_1 + 0x104);
    *(ushort *)(param_1 + 0x104) = uVar1 & 0xffbf;
    uVar5 = *(uint *)(param_1 + 0x100);
    if ((uVar1 & 4) != 0) {
      if ((uVar5 >> 0x1d & 1) != 0) {
        uVar5 = uVar5 & 0xdfffffff;
        *(uint *)(param_1 + 0x100) = uVar5;
        uVar6 = DAT_14c8464e8;
        *(undefined8 *)(param_1 + 0x1a8) = DAT_14c8464e0;
        *(undefined8 *)(param_1 + 0x1b0) = uVar6;
        *(undefined8 *)(param_1 + 0x1b8) = DAT_14c8464f0;
      }
      *(ushort *)(param_1 + 0x104) = uVar1 & 0xffbb;
    }
    if (((uVar5 >> 0x16 & 1) == 0) && (*(longlong *)(param_1 + 400) != 0)) {
      FUN_1412ffcb8(param_1);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  lVar7 = *(longlong *)(lVar2 + 0x5a0);
  if (lVar7 == 0) {
    uVar6 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(lVar2 + 0x5a0) = lVar7;
  }
  if (*(longlong *)(lVar2 + 0x5a8) == 0) {
    if ((lVar7 == 0) || (*(longlong *)(lVar2 + 0x598) == 0)) goto LAB_143dc160f;
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 != '\0') {
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar2 + 0x598));
        *(longlong *)(lVar2 + 0x5a8) = lVar7;
        if (lVar7 == 0) goto LAB_143dc160f;
        goto LAB_143dc1556;
      }
    }
    *(undefined8 *)(lVar2 + 0x5a8) = 0;
  }
  else {
LAB_143dc1556:
    if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x540), lVar2 != 0)) {
      uVar10 = 0;
      if (cVar9 != '\0') {
        uVar10 = *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x5b0);
      }
      FUN_1487e2868(lVar2,param_1,*(longlong *)(param_1 + 0x80) + 0x598,uVar10);
    }
  }
LAB_143dc160f:
  FUN_14118107a(param_1 + 0x518,param_2);
  bVar8 = 1;
  if ((*(byte *)(param_1 + 0x104) & 0x80) == 0) {
    if (((*(double *)(param_1 + 0x1a8) == 0.0) && (!NAN(*(double *)(param_1 + 0x1a8)))) &&
       ((*(double *)(param_1 + 0x1b0) == 0.0 && (!NAN(*(double *)(param_1 + 0x1b0)))))) {
      bVar8 = -(*(double *)(param_1 + 0x1b8) != 0.0) & 1;
    }
  }
  FUN_140478a46(param_1 + 0x518,bVar8);
  return;
}



// FUNCTION 143dc16a8 FUN_143dc16a8 body=787 status=ok
// SIG undefined FUN_143dc16a8(void)

void FUN_143dc16a8(longlong *param_1,float param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(uint *)(param_1 + -5) & 0x10) == 0) {
    lVar12 = param_1[-2];
  }
  else {
    lVar12 = 0;
  }
  if ((*(char *)(lVar12 + 0x178) == '\x03') &&
     (cVar3 = (**(code **)(*param_1 + 0x68))(param_1), cVar3 == '\0')) {
    if (param_2 <= 0.0001) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_e8);
    }
    if ((*(uint *)(param_1 + -5) & 0x10) == 0) {
      lVar12 = param_1[-2];
    }
    else {
      lVar12 = 0;
    }
    plVar1 = param_1 + 0xab;
    if (param_1[0xab] != 0) {
      lVar4 = FUN_1401b4c98(lVar12);
      lVar6 = *plVar1;
      if (lVar6 != 0) {
        uVar7 = (uint)lVar6;
        if ((int)(uVar7 & 0xffffff) < *(int *)(lVar4 + 0x10)) {
          lVar10 = lVar4 + 0x18;
          if (*(longlong *)(lVar4 + 0x28) != 0) {
            lVar10 = *(longlong *)(lVar4 + 0x28);
          }
          if ((*(uint *)(lVar10 + (ulonglong)((uVar7 & 0xffffff) >> 5) * 4) >> (uVar7 & 0x1f) & 1)
              != 0) {
            lVar10 = *(longlong *)(lVar4 + 8);
            lVar11 = (ulonglong)(uVar7 & 0xffffff) * 0x70;
            if (((lVar10 + lVar11 != 0) && (*(longlong *)(lVar10 + 0x60 + lVar11) == lVar6)) &&
               (*(char *)(lVar10 + 1 + lVar11) != '\x04')) {
              FUN_1405a424c(lVar4);
            }
          }
        }
      }
      *plVar1 = 0;
    }
    uVar5 = FUN_1401b4c98(lVar12);
    local_c0 = (undefined8 *)0x0;
    local_b8 = 0;
    FUN_1446efa72(&local_c0,0,3,0x10);
    puVar2 = local_c0;
    local_b8 = 3;
    *local_c0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_c0[2] = lVar6;
    *local_c0 = &PTR_FUN_14b414cf0;
    local_c0[3] = 0;
    iVar8 = 0;
    if (param_1 + -6 != (longlong *)0x0) {
      uVar7 = *(uint *)((longlong)param_1 + -0x24);
      *(uint *)(local_c0 + 3) = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar8 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar8 = *(int *)(lVar12 + 0x10);
        bVar13 = iVar8 == 0;
        if (bVar13) {
          *(int *)(lVar12 + 0x10) = iVar9;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar8 = iVar9;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar8;
    puVar2[4] = param_1 + -6;
    local_a8 = 0;
    local_a0 = 0;
    FUN_14487d8d8(&local_a8,&local_c0);
    local_68 = 1;
    local_c8 = local_b0;
    local_b0[0] = 0;
    local_ac = 0xbf800000;
    FUN_1406f4044(uVar5,plVar1,&local_a8,param_2);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    if (local_b8 != 0) {
      if (local_c0 == (undefined8 *)0x0) goto LAB_143dc1941;
      (**(code **)*local_c0)(local_c0,0);
      FUN_1446efa72(&local_c0,0,0,0x10);
      local_b8 = 0;
    }
    if (local_c0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143dc1941:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dc19e0 FUN_143dc19e0 body=425 status=ok
// SIG undefined FUN_143dc19e0(void)

void FUN_143dc19e0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  byte bVar5;
  
  if ((*(uint *)(param_1 + -5) & 0x10) == 0) {
    lVar4 = param_1[-2];
  }
  else {
    lVar4 = 0;
  }
  if (*(char *)(lVar4 + 0x178) == '\x03') {
    plVar1 = param_1 + -6;
    *(byte *)((longlong)param_1 + 0xd3) = *(byte *)((longlong)param_1 + 0xd3) & 0xdf;
    *(undefined1 *)((longlong)param_1 + 0x562) = 0;
    FUN_14082b78e(plVar1);
    if (param_2 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    bVar5 = DAT_14c950c29;
    param_1[0x2c] = param_2;
    if ((param_3 != 0) && ((bVar5 & 1) != 0)) {
      FUN_1456cec3c(param_3);
    }
    param_1[0x2d] = param_3;
    lVar4 = *param_5;
    lVar2 = param_5[1];
    param_1[0x31] = param_5[2];
    param_1[0x2f] = lVar4;
    param_1[0x30] = lVar2;
    param_1[0x2e] = param_4;
    if (param_2 != 0) {
      FUN_143dc126e(plVar1,7);
      if (((*(uint *)(param_1 + 0x1a) >> 0x10 & 1) == 0) && (param_1[0x2b] == param_2)) {
        *(uint *)(param_1 + 0x1a) = *(uint *)(param_1 + 0x1a) | 0x10000;
      }
    }
    if ((char)param_1[0x9b] == '\x01') {
      *(undefined1 *)(param_1 + 0x9b) = 0;
    }
    cVar3 = (**(code **)(*param_1 + 0x68))(param_1);
    if ((cVar3 != '\0') && (param_1[0x2c] == 0)) {
      FUN_143dc13e8(param_1,0);
    }
    bVar5 = 1;
    if ((*(byte *)((longlong)param_1 + 0xd4) & 0x80) == 0) {
      if (((((double)param_1[0x2f] == 0.0) && (!NAN((double)param_1[0x2f]))) &&
          ((double)param_1[0x30] == 0.0)) && (!NAN((double)param_1[0x30]))) {
        bVar5 = -((double)param_1[0x31] != 0.0) & 1;
      }
    }
    FUN_140478a46(param_1 + 0x9d,bVar5);
    if (param_1[0x2c] != 0) {
      FUN_1412ffcb8(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 143dc1b8a FUN_143dc1b8a body=422 status=ok
// SIG undefined FUN_143dc1b8a(void)

void FUN_143dc1b8a(longlong param_1,double *param_2)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong *plVar11;
  byte bVar12;
  
  if ((*(uint *)(param_1 + -0x28) & 0x10) == 0) {
    lVar10 = *(longlong *)(param_1 + -0x10);
  }
  else {
    lVar10 = 0;
  }
  if (*(char *)(lVar10 + 0x178) != '\x03') {
    return;
  }
  *(byte *)(param_1 + 0xd3) = *(byte *)(param_1 + 0xd3) & 0xdf;
  *(undefined1 *)(param_1 + 0x562) = 0;
  *(double *)(param_1 + 0x4b8) = param_2[2];
  uVar4 = *(undefined4 *)((longlong)param_2 + 4);
  uVar5 = *(undefined4 *)(param_2 + 1);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x4ac) = uVar4;
  *(undefined4 *)(param_1 + 0x4b0) = uVar5;
  *(undefined4 *)(param_1 + 0x4b4) = uVar6;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143dc1c26;
    }
    *(undefined1 *)(param_1 + 0x562) = 1;
    return;
  }
LAB_143dc1c26:
  FUN_14082b78e(param_1 + -0x30);
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  bVar3 = true;
  if ((*param_2 == *(double *)(param_1 + 0x178)) &&
     (!NAN(*param_2) && !NAN(*(double *)(param_1 + 0x178)))) {
    if ((param_2[1] == *(double *)(param_1 + 0x180)) &&
       (!NAN(param_2[1]) && !NAN(*(double *)(param_1 + 0x180)))) {
      bVar3 = *(double *)(param_1 + 0x188) != param_2[2];
    }
  }
  uVar4 = *(undefined4 *)param_2;
  uVar5 = *(undefined4 *)((longlong)param_2 + 4);
  uVar6 = *(undefined4 *)(param_2 + 1);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(double *)(param_1 + 0x188) = param_2[2];
  *(undefined4 *)(param_1 + 0x178) = uVar4;
  *(undefined4 *)(param_1 + 0x17c) = uVar5;
  *(undefined4 *)(param_1 + 0x180) = uVar6;
  *(undefined4 *)(param_1 + 0x184) = uVar7;
  FUN_1488e1a94(param_1 + -0x30,0x80);
  if (*(char *)(param_1 + 0x4d8) == '\x01') {
    *(undefined1 *)(param_1 + 0x4d8) = 0;
  }
  if (bVar3) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if ((*(uint *)(param_1 + -0x28) & 0x10) == 0) {
      plVar11 = *(longlong **)(param_1 + -0x10);
    }
    else {
      plVar11 = (longlong *)0x0;
    }
    *(int *)(plVar11 + 0x92) = (int)plVar11[0x92] + 1;
    (**(code **)(*plVar11 + 0x578))();
  }
  bVar12 = 1;
  if (((((*(byte *)(param_1 + 0xd4) & 0x80) == 0) &&
       (dVar1 = *(double *)(param_1 + 0x178), dVar1 == 0.0)) && (!NAN(dVar1))) &&
     ((*(double *)(param_1 + 0x180) == 0.0 && (!NAN(*(double *)(param_1 + 0x180)))))) {
    bVar12 = -(*(double *)(param_1 + 0x188) != 0.0) & 1;
  }
  FUN_140478a46(param_1 + 0x4e8,bVar12);
  return;
}



// FUNCTION 143dc1d30 FUN_143dc1d30 body=445 status=ok
// SIG undefined FUN_143dc1d30(void)

void FUN_143dc1d30(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_143dc1d8e;
    }
    *(undefined1 *)(param_1 + 0x560) = 1;
  }
  else {
LAB_143dc1d8e:
    *(undefined1 *)(param_1 + 0x560) = 0;
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x48);
    if (lVar8 != 0) {
      lVar8 = lVar8 * 0x28;
      plVar11 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40) + 8);
      do {
        plVar1 = plVar11 + -1;
        plVar9 = (longlong *)FUN_14479d2ce(plVar1);
        if (plVar9 == (longlong *)0x0) {
          if (*plVar11 != 0) {
            plVar9 = (longlong *)FUN_140007850();
            cVar5 = (*(code *)PTR_FUN_14c758760)();
            if ((plVar9 == (longlong *)0x0) || (cVar5 == '\0')) {
              FUN_14485c47a(plVar1,plVar9);
              if (plVar9 == (longlong *)0x0) goto LAB_143dc1dee;
            }
            else {
              uVar3 = *(uint *)((longlong)plVar9 + 0xc);
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar10 = 0;
              }
              if ((*(uint *)(lVar10 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(plVar1,plVar9);
              }
            }
            if ((*(uint *)(plVar9 + 1) >> 0x1e & 1) == 0) goto LAB_143dc1dca;
          }
        }
        else {
LAB_143dc1dca:
          lVar10 = FUN_144a797b2();
          if ((((*(int *)(lVar10 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                lVar10 + 0x30)) && (lVar10 = FUN_145a557f0(), lVar10 != 0)) &&
             ((*(int *)(lVar10 + 0x38) <= (int)plVar9[7] &&
              (*(longlong *)(plVar9[6] + (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30))))
          {
            lVar10 = plVar9[0x22];
            if (lVar10 == 0) {
              (**(code **)(*plVar9 + 1000))(plVar9);
              lVar10 = plVar9[0x22];
              if (lVar10 == 0) goto LAB_143dc1dee;
            }
            uVar4 = *(undefined8 *)(lVar10 + 0x28);
            *(longlong *)(lVar10 + 0x28) = param_1 + -0x30;
            FUN_14876f6f6(lVar10,param_1 + -0x30);
            *(undefined8 *)(lVar10 + 0x28) = uVar4;
          }
        }
LAB_143dc1dee:
        plVar11 = plVar11 + 5;
        lVar8 = lVar8 + -0x28;
      } while (lVar8 != 0);
    }
  }
  return;
}



// FUNCTION 143dc1f10 FUN_143dc1f10 body=284 status=ok
// SIG undefined FUN_143dc1f10(void)

longlong * FUN_143dc1f10(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140067708();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  lVar5 = param_2[2];
  if (lVar5 != 0) {
LAB_143dc1f43:
    if (lVar4 == 0) {
      uVar3 = FUN_140067708();
      lVar4 = FUN_14477b664(uVar3);
      param_2[1] = lVar4;
      lVar5 = param_2[2];
      if (((lVar5 == 0) && (lVar5 = 0, lVar4 != 0)) && (*param_2 != 0)) {
        plVar1 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar3,param_2);
        }
        param_2[2] = lVar5;
      }
    }
    *param_1 = lVar5;
    FUN_140942716(param_1);
    return param_1;
  }
  if ((lVar4 != 0) && (*param_2 != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_2[2] = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar5 = FUN_144aff482(uVar3,param_2);
      param_2[2] = lVar5;
      if (lVar5 != 0) {
        lVar4 = param_2[1];
        goto LAB_143dc1f43;
      }
    }
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 143dc202c FUN_143dc202c body=2298 status=ok
// SIG undefined FUN_143dc202c(void)

void FUN_143dc202c(longlong *param_1,float param_2)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_228 [32];
  wchar_t *local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  wchar_t *local_1f0;
  wchar_t *local_1e8;
  code *local_1e0;
  undefined1 *local_1d8;
  code **local_1d0;
  code *local_1c8;
  code *local_1c0;
  code *local_1b0;
  code *local_1a8;
  undefined1 local_1a0 [24];
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  ulonglong local_d3;
  undefined8 uStack_cb;
  undefined4 local_c3;
  undefined4 uStack_bf;
  undefined4 uStack_bb;
  undefined4 uStack_b7;
  undefined3 uStack_b3;
  undefined8 local_b0;
  uint3 local_9c [2];
  undefined3 uStack_94;
  undefined5 uStack_91;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined3 uStack_7c;
  undefined8 local_79;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar8 = param_1[4];
  }
  else {
    lVar8 = 0;
  }
  uVar6 = *(uint *)(param_1 + 0x20);
  if ((uVar6 & 1) == 0) {
    if ((uVar6 >> 0xb & 1) != 0) {
      if ((uVar6 >> 0xc & 1) == 0) {
        uVar6 = uVar6 | 0x1000;
        *(uint *)(param_1 + 0x20) = uVar6;
      }
      else {
        (**(code **)(*param_1 + 0x328))(param_1);
        uVar6 = *(uint *)(param_1 + 0x20);
        if ((uVar6 >> 0x1a & 1) == 0) {
          FUN_14082b878(lVar8,param_1);
          uVar6 = *(uint *)(param_1 + 0x20);
        }
      }
    }
    if ((uVar6 & 0x4000800) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_228);
    }
    goto LAB_143dc2840;
  }
  param_2 = param_2 * *(float *)(param_1 + 0x4e);
  *(float *)((longlong)param_1 + 0x324) = *(float *)((longlong)param_1 + 0x324) + param_2;
  lVar8 = (**(code **)(*param_1 + 0x180))(param_1);
  dVar1 = *(double *)(lVar8 + 0x6d0);
  fVar16 = *(float *)(param_1 + 100);
  if (fVar16 <= 0.0) {
LAB_143dc20fc:
    if (0.0 <= fVar16) goto LAB_143dc21a4;
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar8 = param_1[4];
    }
    else {
      lVar8 = 0;
    }
    if (*(char *)(lVar8 + 0x178) == '\x03') {
      lVar8 = param_1[0x10];
      if ((longlong)*(int *)(lVar8 + 0x48) != 0) {
        plVar13 = (longlong *)(*(longlong *)(lVar8 + 0x40) + 8);
        lVar8 = (longlong)*(int *)(lVar8 + 0x48) * 0x28;
        do {
          if ((((*(int *)((longlong)plVar13 + -4) == 0) ||
               (uVar6 = *(uint *)(plVar13 + -1), (int)uVar6 < 0)) || (DAT_14c9647dc <= (int)uVar6))
             || (((plVar11 = (longlong *)
                             ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                  plVar11 == (longlong *)0x0 ||
                  ((int)plVar11[2] != *(int *)((longlong)plVar13 + -4))) ||
                 (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 ||
                  (plVar11 = (longlong *)*plVar11, plVar11 == (longlong *)0x0)))))) {
            if (*plVar13 != 0) {
              plVar11 = (longlong *)FUN_140007850();
              cVar5 = (*(code *)PTR_FUN_14c758760)();
              if ((plVar11 == (longlong *)0x0) || (cVar5 == '\0')) {
                if (plVar11 != (longlong *)0x0) {
                  uVar6 = *(uint *)((longlong)plVar11 + 0xc);
                  *(uint *)(plVar13 + -1) = uVar6;
                  if ((int)uVar6 < DAT_14c9647dc) {
                    lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
                  }
                  else {
                    lVar9 = 0;
                  }
                  iVar7 = *(int *)(lVar9 + 0x10);
                  if (*(int *)(lVar9 + 0x10) == 0) {
                    LOCK();
                    iVar7 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar12 = DAT_14c964868 + 1;
                    bVar15 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar7;
                    if (bVar15) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar12);
                    }
                    LOCK();
                    iVar7 = *(int *)(lVar9 + 0x10);
                    bVar15 = iVar7 == 0;
                    if (bVar15) {
                      *(int *)(lVar9 + 0x10) = iVar12;
                      iVar7 = 0;
                    }
                    UNLOCK();
                    if (bVar15) {
                      iVar7 = iVar12;
                    }
                  }
                  goto LAB_143dc25a8;
                }
                plVar13[-1] = 0;
              }
              else {
                uVar6 = *(uint *)((longlong)plVar11 + 0xc);
                if ((int)uVar6 < DAT_14c9647dc) {
                  lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
                }
                else {
                  lVar9 = 0;
                }
                if ((*(uint *)(lVar9 + 8) & 0x8400000) == 0) {
                  *(uint *)(plVar13 + -1) = uVar6;
                  if ((int)uVar6 < DAT_14c9647dc) {
                    lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
                  }
                  else {
                    lVar9 = 0;
                  }
                  iVar7 = *(int *)(lVar9 + 0x10);
                  if (*(int *)(lVar9 + 0x10) == 0) {
                    LOCK();
                    iVar7 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar12 = DAT_14c964868 + 1;
                    bVar15 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar7;
                    if (bVar15) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar12);
                    }
                    LOCK();
                    iVar7 = *(int *)(lVar9 + 0x10);
                    bVar15 = iVar7 == 0;
                    if (bVar15) {
                      *(int *)(lVar9 + 0x10) = iVar12;
                      iVar7 = 0;
                    }
                    UNLOCK();
                    if (bVar15) {
                      iVar7 = iVar12;
                    }
                  }
LAB_143dc25a8:
                  *(int *)((longlong)plVar13 + -4) = iVar7;
                }
                if ((*(uint *)(plVar11 + 1) >> 0x1e & 1) == 0) goto LAB_143dc2407;
              }
            }
          }
          else {
LAB_143dc2407:
            if (DAT_14c949118 == 0) {
              local_1b0 = FUN_140631fbe;
              lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              DAT_14c949118 = lVar9;
              FUN_1446f470e(local_9c,L"Class",1);
              local_1d0 = &local_1b0;
              local_1d8 = &LAB_146891e90;
              local_1e0 = (code *)&LAB_146273097;
              local_1f0 = L"Engine";
              local_1e8 = (wchar_t *)CONCAT44(local_1e8._4_4_,199);
              local_1f8 = 0x20;
              local_200 = 0x10000000;
              local_208._0_4_ = 8;
              FUN_14574b4b2(lVar9);
              DAT_14c949118 = lVar9;
              if (DAT_14c951858 == 0) {
                local_1a8 = FUN_1449e2820;
                local_1c0 = FUN_14081d0ea;
                local_1c8 = FUN_14081d0ea;
                local_1d0 = &local_1a8;
                local_1d8 = &LAB_1468c5283;
                local_1e0 = FUN_142809da0;
                local_1e8 = L"Engine";
                local_1f0 = (wchar_t *)0x400000000;
                local_1f8 = CONCAT44(local_1f8._4_4_,0x10000000);
                local_200 = 8;
                local_208._0_4_ = 0x50;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              lVar14 = DAT_14c951858;
              lVar9 = DAT_14c949118;
              uVar10 = FUN_1449e2fb2();
              local_208 = L"Class";
              FUN_14574b446(uVar10,lVar9,lVar14,L"/Script/CoreUObject");
            }
            if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(plVar11[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8)
                  == DAT_14c949118 + 0x30)) && (lVar9 = FUN_145a557f0(), lVar9 != 0)) &&
               ((*(int *)(lVar9 + 0x38) <= (int)plVar11[7] &&
                (*(longlong *)(plVar11[6] + (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)))
               ) {
              lVar9 = plVar11[0x22];
              if (lVar9 == 0) {
                (**(code **)(*plVar11 + 1000))(plVar11);
                lVar9 = plVar11[0x22];
                if (lVar9 == 0) goto LAB_143dc25ba;
              }
              uVar10 = *(undefined8 *)(lVar9 + 0x28);
              *(longlong **)(lVar9 + 0x28) = param_1;
              FUN_14876f850(lVar9);
              *(undefined8 *)(lVar9 + 0x28) = uVar10;
            }
          }
LAB_143dc25ba:
          plVar13 = plVar13 + 5;
          lVar8 = lVar8 + -0x28;
        } while (lVar8 != 0);
        lVar8 = param_1[0x10];
      }
      if ((*(byte *)(lVar8 + 0x519) & 1) != 0) {
        FUN_14163f334(param_1,0,1);
      }
      if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
        if (0 < (int)param_1[0xf]) {
          memset(local_1a0,0,0x9c);
          local_100 = 0;
          uStack_f8 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_9c._3_5_ = 0;
          uStack_94 = 0;
          uStack_91 = 0;
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          uStack_80 = 0;
          uStack_7c = 0;
          local_79 = 0;
          local_1a8 = (code *)0x3f80000000000000;
          local_104 = 0xffffffff;
          local_f0 = 0;
          local_d8 = 0xffffffff;
          local_d4 = 0;
          local_d3 = (ulonglong)local_9c[0];
          uStack_cb = 0;
          local_c3 = 0;
          uStack_bf = 0;
          uStack_bb = 0;
          uStack_b7 = 0;
          uStack_b3 = 0;
          local_b0 = 0;
          FUN_1447cd2ec(param_1 + 0xe,&local_1a8);
        }
        (**(code **)(*param_1 + 0x2e8))(param_1,0);
      }
    }
  }
  else {
    fVar16 = fVar16 - param_2;
    *(float *)(param_1 + 100) = fVar16;
    if (0.0 < fVar16) goto LAB_143dc20fc;
    *(byte *)((longlong)param_1 + 0x101) = *(byte *)((longlong)param_1 + 0x101) | 0x20;
    if (fVar16 + param_2 <= param_2) {
      param_2 = fVar16 + param_2;
    }
    *(undefined4 *)(param_1 + 100) = 0xbdcccccd;
LAB_143dc21a4:
    if ((0.0 < *(float *)((longlong)param_1 + 0x334)) &&
       (fVar16 = *(float *)((longlong)param_1 + 0x334) - param_2,
       *(float *)((longlong)param_1 + 0x334) = fVar16, fVar16 <= 0.0)) {
      FUN_14163f334(param_1,0,1);
    }
    uVar6 = *(uint *)(param_1 + 0x20);
    if ((~uVar6 & 0x11) == 0) {
      if (((int)param_1[0xd5] < 1) || (lVar8 = *(longlong *)param_1[0xd4], lVar8 == 0)) {
        FUN_14028d844(param_1 + 0x4f,&local_1a8);
        param_1[0x7f] = local_188;
        param_1[0x80] = lStack_180;
        param_1[0x81] = local_178;
        *(int *)(param_1 + 0x7c) = (int)param_1[0x7f];
        *(undefined4 *)((longlong)param_1 + 0x3e4) = *(undefined4 *)((longlong)param_1 + 0x3fc);
        *(int *)(param_1 + 0x7d) = (int)param_1[0x80];
        *(undefined4 *)((longlong)param_1 + 0x3ec) = *(undefined4 *)((longlong)param_1 + 0x404);
        param_1[0x7e] = param_1[0x81];
        uVar6 = *(uint *)(param_1 + 0x20);
      }
      else {
        lVar14 = *(longlong *)(lVar8 + 0x268);
        lVar9 = *(longlong *)(lVar8 + 0x270);
        param_1[0x7f] = *(longlong *)(lVar8 + 0x260);
        param_1[0x80] = lVar14;
        param_1[0x81] = lVar9;
        *(int *)(param_1 + 0x7c) = (int)param_1[0x7f];
        *(undefined4 *)((longlong)param_1 + 0x3e4) = *(undefined4 *)((longlong)param_1 + 0x3fc);
        *(int *)(param_1 + 0x7d) = (int)param_1[0x80];
        *(undefined4 *)((longlong)param_1 + 0x3ec) = *(undefined4 *)((longlong)param_1 + 0x404);
        param_1[0x7e] = param_1[0x81];
      }
    }
    if ((uVar6 & 0x11) == 1) {
      param_1[0x9d] = DAT_14c8464f0;
      uVar4 = DAT_14c8464e8._4_4_;
      uVar3 = (undefined4)DAT_14c8464e8;
      uVar2 = DAT_14c8464e0._4_4_;
      *(undefined4 *)(param_1 + 0x9b) = (undefined4)DAT_14c8464e0;
      *(undefined4 *)((longlong)param_1 + 0x4dc) = uVar2;
      *(undefined4 *)(param_1 + 0x9c) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x4e4) = uVar4;
      cVar5 = (**(code **)(param_1[6] + 0x68))(param_1 + 6);
      if (cVar5 != '\0') {
        (**(code **)(*param_1 + 0x398))(param_1);
      }
      lVar8 = param_1[0xcb];
      if ((longlong)(int)lVar8 != 0) {
        lVar9 = param_1[0xca];
        lVar14 = 0;
        do {
          (**(code **)(**(longlong **)(lVar9 + lVar14) + 0x18))();
          lVar14 = lVar14 + 0x18;
        } while ((longlong)(int)lVar8 * 0x18 != lVar14);
      }
      if (DAT_14c7639b4 != '\0') {
        *(float *)((longlong)param_1 + 0x754) = param_2;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_228);
      }
      (**(code **)(*param_1 + 0x370))(param_1,param_2);
      (**(code **)(*param_1 + 0x378))(param_1);
    }
    else {
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar8 = param_1[4];
      }
      else {
        lVar8 = 0;
      }
      if (((((uVar6 & 8) == 0) && (*(char *)(lVar8 + 0x178) != '\x03')) && (param_1[0x4f] == 0)) &&
         (param_1[0x50] == 0)) {
        FUN_14028ef70(param_1,1);
      }
    }
    (**(code **)(*param_1 + 0x380))(param_1);
  }
  *(float *)(param_1 + 0x67) = (float)dVar1;
LAB_143dc2840:
  if ((local_70 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dc2984 FUN_143dc2984 body=299 status=ok
// SIG undefined FUN_143dc2984(void)

ulonglong FUN_143dc2984(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
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
  *param_4 = 0;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (((param_2 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x80) + 0x334) & 1) == 0)) &&
     ((*(byte *)(param_2 + 0x62) & 4) != 0)) {
    if (DAT_14cb56270 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148630fef;
      local_50 = FUN_1464b6a91;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar2 = (longlong *)FUN_144718840(param_2,DAT_14cb56270);
    if (plVar2 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar2 + 0x38))(plVar2);
      if (cVar1 == '\0') {
        uVar3 = 0;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dc2ab8 FUN_143dc2ab8 body=577 status=ok
// SIG undefined FUN_143dc2ab8(void)

undefined8 FUN_143dc2ab8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
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
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = param_2 + 0xb8;
  lVar3 = FUN_14485cccc(lVar6);
  if (lVar3 == 0) {
LAB_143dc2b66:
    bVar2 = 0;
LAB_143dc2b68:
    lVar6 = FUN_14485cccc(lVar6);
    if (lVar6 != 0) {
      lVar3 = FUN_14069ec50();
      if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
         ((longlong)*(int *)(lVar6 + 0x3b0) != 0)) {
        lVar3 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x3a8) + lVar3);
          if ((lVar1 != 0) && (*(int *)(lVar1 + 0x58) == *(int *)(param_2 + 0xa8))) {
            bVar2 = 1;
            if ((*(longlong *)(lVar1 + 0x80) != 0) &&
               ((*(byte *)(*(longlong *)(lVar1 + 0x80) + 0x370) & 4) != 0)) goto LAB_143dc2bbb;
            break;
          }
          lVar3 = lVar3 + 8;
        } while ((longlong)*(int *)(lVar6 + 0x3b0) * 8 != lVar3);
      }
    }
    if ((((*(byte *)(*(longlong *)(param_1 + 0x80) + 0x368) & 0x20) == 0) || (bVar2 != 0)) &&
       ((*(char *)(param_1 + 0x794) != '\x01' || (bVar2 == 0)))) {
      uVar5 = 1;
      goto LAB_143dc2bc1;
    }
  }
  else {
    if (DAT_14cb56270 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_148630fef;
      local_60 = FUN_1464b6a91;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar4 = (longlong *)FUN_144718840(lVar3,DAT_14cb56270);
    if (plVar4 == (longlong *)0x0) goto LAB_143dc2b66;
    lVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
    if (lVar3 != 0) {
      lVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
      uVar5 = 1;
      if ((*(byte *)(lVar3 + 0x7c) & 4) != 0) goto LAB_143dc2bc1;
    }
    lVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
    if ((lVar3 == 0) ||
       (lVar3 = (**(code **)(*plVar4 + 0x20))(plVar4), (*(byte *)(lVar3 + 0x7c) & 8) == 0)) {
      lVar3 = FUN_14485cccc(lVar6);
      if ((*(byte *)(lVar3 + 0x62) & 4) == 0) goto LAB_143dc2b66;
      bVar2 = (**(code **)(*plVar4 + 0x38))(plVar4);
      bVar2 = bVar2 ^ 1;
      goto LAB_143dc2b68;
    }
  }
LAB_143dc2bbb:
  uVar5 = 0;
LAB_143dc2bc1:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 143dc2cfa FUN_143dc2cfa body=8144 status=ok
// SIG undefined FUN_143dc2cfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc2cfa(longlong *param_1,void *param_2)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  undefined1 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte bVar11;
  undefined3 uVar12;
  undefined3 uVar13;
  undefined5 uVar14;
  undefined5 uVar15;
  char cVar16;
  byte bVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint *puVar23;
  undefined8 uVar24;
  longlong lVar25;
  uint *puVar26;
  longlong *plVar27;
  uint uVar28;
  longlong lVar29;
  longlong *plVar30;
  longlong *plVar31;
  short sVar32;
  int iVar33;
  uint uVar34;
  undefined4 *puVar35;
  longlong lVar36;
  bool bVar37;
  float fVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  code *****pppppcVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auVar53 [16];
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auStack_448 [32];
  code ****local_428;
  code ****local_420;
  undefined4 local_418;
  undefined8 local_410;
  wchar_t *local_408;
  code *local_400;
  undefined1 *local_3f8;
  undefined1 *local_3f0;
  code *local_3e8;
  code *local_3e0;
  byte local_3ce;
  byte local_3cd;
  undefined4 local_3cc;
  ulonglong local_3c8;
  uint *local_3c0;
  uint *local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  char local_399;
  longlong local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  longlong local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  longlong local_348 [2];
  double local_338;
  double dStack_330;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  code ****local_2e8;
  double dStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  code ****local_2c8;
  double dStack_2c0;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  uint local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  longlong local_278;
  undefined8 local_270;
  longlong local_258;
  undefined8 local_250;
  undefined1 local_248 [4];
  undefined4 uStack_244;
  double dStack_240;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1a4;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  uint local_160;
  uint uStack_15c;
  longlong lStack_158;
  undefined8 local_150;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined3 uStack_138;
  undefined5 uStack_135;
  undefined3 uStack_130;
  uint uStack_12d;
  undefined1 uStack_129;
  ushort uStack_128;
  undefined1 uStack_126;
  uint uStack_125;
  undefined1 uStack_121;
  byte bStack_120;
  undefined2 uStack_11f;
  undefined1 uStack_11d;
  undefined4 uStack_11c;
  undefined3 local_118;
  undefined5 uStack_115;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined1 local_f8 [16];
  double dStack_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_448;
  lVar25 = (longlong)param_2 + 0xb8;
  lVar21 = FUN_14485cccc(lVar25);
  if (*(int *)((longlong)param_2 + 0xdc) == 0) {
LAB_143dc377d:
    lVar36 = 0;
  }
  else {
    uVar18 = *(uint *)((longlong)param_2 + 0xd8);
    lVar36 = 0;
    if ((-1 < (int)uVar18) && ((int)uVar18 < DAT_14c9647dc)) {
      plVar30 = (longlong *)
                ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
      if ((plVar30 == (longlong *)0x0) ||
         (((int)plVar30[2] != *(int *)((longlong)param_2 + 0xdc) ||
          ((*(uint *)(plVar30 + 1) & 0x10200000) != 0)))) goto LAB_143dc377d;
      lVar36 = *plVar30;
    }
  }
  if (((*(byte *)(param_1[0x10] + 0x369) & 1) != 0) &&
     (cVar16 = (**(code **)(*param_1 + 0x2b0))(param_1,param_2), cVar16 != '\0')) {
    if (lVar36 != 0) {
      uVar19 = *(undefined4 *)(lVar36 + 0xc);
      iVar20 = (int)param_1[0x74];
      *(uint *)(param_1 + 0x74) = iVar20 + 1U;
      if (*(uint *)((longlong)param_1 + 0x3a4) < iVar20 + 1U) {
        FUN_1447de67e(param_1 + 0x71,iVar20);
      }
      plVar30 = param_1 + 0x71;
      if ((longlong *)param_1[0x73] != (longlong *)0x0) {
        plVar30 = (longlong *)param_1[0x73];
      }
      *(undefined4 *)((longlong)plVar30 + (longlong)iVar20 * 4) = uVar19;
    }
    goto LAB_143dc4492;
  }
  local_3b8 = (uint *)((longlong)param_2 + 0xd8);
  bVar17 = (**(code **)(*param_1 + 0x2a8))(param_1,param_2);
  local_3cd = bVar17 ^ 1;
  local_399 = '\0';
  if (((local_3cd == 0) && ((*(byte *)((longlong)param_1 + 0x102) & 0x80) != 0)) &&
     ((lVar21 == 0 ||
      (cVar16 = (**(code **)(*param_1 + 0x2a0))(param_1,lVar21,lVar36,&local_399), cVar16 != '\0')))
     ) {
    bVar37 = true;
    if (((*(byte *)(param_1[0x10] + 0x34c) & 1) == 0) ||
       (*(int *)((longlong)param_1 + 0x6b4) <= (int)param_1[0xd6])) {
      plVar30 = (longlong *)0x0;
    }
    else {
      uVar18 = FUN_14048d1da(param_1[0x10] + 0x354,param_2,param_1 + 0xcd,param_1 + 8);
      plVar30 = (longlong *)(ulonglong)uVar18;
    }
  }
  else {
    plVar30 = (longlong *)0x0;
    bVar37 = false;
  }
  if ((*(ushort *)((longlong)param_1 + 0x104) & 4) != 0) {
    *(ushort *)((longlong)param_1 + 0x104) = *(ushort *)((longlong)param_1 + 0x104) & 0xfffb;
  }
  if (bVar37) {
    dVar39 = *(double *)((longlong)param_2 + 0x20);
    dVar47 = *(double *)((longlong)param_2 + 0x50);
    dVar40 = *(double *)((longlong)param_2 + 0x18);
    dVar41 = *(double *)((longlong)param_2 + 0x48);
    param_1[0x7f] =
         (longlong)(*(double *)((longlong)param_2 + 0x10) + *(double *)((longlong)param_2 + 0x40));
    param_1[0x80] = (longlong)(dVar40 + dVar41);
    param_1[0x81] = (longlong)(dVar39 + dVar47);
    dVar39 = 0.0;
    if ((((double)param_1[0x92] != 0.0) || (NAN((double)param_1[0x92]))) ||
       (((double)param_1[0x93] != 0.0 ||
        (((NAN((double)param_1[0x93]) || ((double)param_1[0x94] != 0.0)) ||
         (NAN((double)param_1[0x94]))))))) {
      dVar47 = (double)param_1[0xcd];
      uVar19 = SUB84(dVar47,0);
      uVar48 = (undefined4)((ulonglong)dVar47 >> 0x20);
      dVar40 = (double)param_1[0xce];
      uVar49 = SUB84(dVar40,0);
      uVar50 = (undefined4)((ulonglong)dVar40 >> 0x20);
      if (((dVar47 != 0.0) || (NAN(dVar47))) || ((dVar40 != 0.0 || (NAN(dVar40))))) {
        dVar39 = atan2(dVar40,dVar47);
        dVar39 = dVar39 * 57.29577951308232;
        uVar19 = (undefined4)param_1[0xcd];
        uVar48 = (undefined4)((ulonglong)param_1[0xcd] >> 0x20);
        uVar49 = (undefined4)param_1[0xce];
        uVar50 = (undefined4)((ulonglong)param_1[0xce] >> 0x20);
      }
      dVar40 = SQRT((double)CONCAT44(uVar48,uVar19) * (double)CONCAT44(uVar48,uVar19) +
                    (double)CONCAT44(uVar50,uVar49) * (double)CONCAT44(uVar50,uVar49));
      dVar47 = (double)param_1[0xcf];
      local_2c8 = (code ****)0x0;
      dStack_2c0 = dVar39;
      if (((dVar40 != 0.0) || (NAN(dVar40))) || ((dVar47 != 0.0 || (NAN(dVar47))))) {
        dVar39 = atan2(dVar47,dVar40);
        local_2c8 = (code ****)(dVar39 * 57.29577951308232);
      }
      local_2b8 = (uint *)0x0;
      FUN_1401c9a0e(&local_2c8,local_248,param_1 + 0x92);
      param_1[0x7c] = (longlong)((double)param_1[0x7f] - (double)_local_248);
      param_1[0x7d] = (longlong)((double)param_1[0x80] - dStack_240);
      param_1[0x7e] = (longlong)((double)param_1[0x81] - (double)local_238._0_8_);
    }
    else {
      param_1[0x7e] = param_1[0x81];
      param_1[0x7c] = param_1[0x7f];
      param_1[0x7d] = param_1[0x80];
    }
    param_1[0x6b] = param_1[0x81];
    param_1[0x69] = param_1[0x7f];
    param_1[0x6a] = param_1[0x80];
    local_338 = (double)param_1[0xcf];
    local_348[0] = param_1[0xcd];
    local_348[1] = param_1[0xce];
    if ((float)((double)param_1[0xcf] * *(double *)((longlong)param_2 + 0x50) +
               (double)param_1[0xcd] * *(double *)((longlong)param_2 + 0x40) +
               (double)param_1[0xce] * *(double *)((longlong)param_2 + 0x48)) < 0.0) {
      if (local_399 == '\x01') {
        if ((*(byte *)((longlong)param_1 + 0x103) & 2) == 0) {
LAB_143dc3802:
          fVar38 = *(float *)(param_1 + 0x11);
        }
        else {
          uVar24 = FUN_14485cccc(lVar25);
          lVar25 = FUN_14082ce84(param_1[0x10] + 0x3f8);
          if (lVar25 == 0) goto LAB_143dc3802;
          fVar38 = (float)FUN_14074d5ce(lVar25,uVar24,0);
        }
        lVar25 = param_1[0x10];
        auVar10[0xf] = 0;
        auVar10._0_15_ = stack0xfffffffffffffdb9;
        _local_248 = auVar10 << 8;
        local_228._8_4_ = 0;
        FUN_1456bb102(local_248,param_1[0x39]);
        puVar35 = &local_140;
        FUN_1448729ea(lVar25 + 0x4b8,puVar35,local_248);
        if (bStack_120 == 3) {
          uVar18 = 3;
          fVar54 = local_140;
        }
        else {
          FUN_1400b56fe(&local_2c8,&local_140,3);
          if ((char)local_2a8 == '\0') {
            fVar54 = 1.0;
          }
          else {
            fVar54 = local_2c8._0_4_;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_2a8 & 0xff) * 0x120));
          if (pcVar4 != (code *)0x0) {
            pppppcVar42 = &local_2c8;
            if (0x18 < (ushort)uStack_2b0) {
              pppppcVar42 = (code *****)local_2c8;
            }
            (*pcVar4)(pppppcVar42);
          }
          if (0x18 < (ushort)uStack_2b0) {
            FUN_1400020a8(local_2c8);
          }
          uVar18 = (uint)bStack_120;
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar18 * 0x120));
        if (pcVar4 != (code *)0x0) {
          if (0x18 < uStack_128) {
            puVar35 = (undefined4 *)CONCAT44(uStack_13c,local_140);
          }
          (*pcVar4)(puVar35);
        }
        if (0x18 < uStack_128) {
          FUN_1400020a8(CONCAT44(uStack_13c,local_140));
        }
        FUN_1448173f8(local_228 + 8);
        if ((local_248[0] == '\x03') && ((longlong *)local_238._0_8_ != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)(local_238._0_8_ + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*(longlong *)local_238._0_8_ + 0x10))();
          }
        }
        if (0.0 < fVar38 * fVar54) {
          local_420 = (code ****)0x0;
          local_428 = (code ****)((ulonglong)local_428 & 0xffffffffffffff00);
          (**(code **)(*param_1 + 0x3e0))(param_1,param_2,fVar38 * fVar54,0);
        }
      }
      (**(code **)(*param_1 + 0x3a0))(param_1,local_248,param_2);
      param_1[0xcf] = local_238._0_8_;
      param_1[0xcd] = (longlong)_local_248;
      param_1[0xce] = (longlong)dStack_240;
      dVar39 = (double)param_1[0xcd];
      uVar19 = SUB84(dVar39,0);
      uVar48 = (undefined4)((ulonglong)dVar39 >> 0x20);
      dVar47 = (double)param_1[0xce];
      dVar40 = 0.0;
      if ((((dVar39 != 0.0) || (NAN(dVar39))) || (dVar47 != 0.0)) || (NAN(dVar47))) {
        dVar40 = atan2(dVar47,dVar39);
        dVar40 = dVar40 * 57.29577951308232;
        uVar19 = (undefined4)param_1[0xcd];
        uVar48 = (undefined4)((ulonglong)param_1[0xcd] >> 0x20);
        dVar47 = (double)param_1[0xce];
      }
      dVar47 = SQRT((double)CONCAT44(uVar48,uVar19) * (double)CONCAT44(uVar48,uVar19) +
                    dVar47 * dVar47);
      dVar39 = (double)param_1[0xcf];
      dVar41 = 0.0;
      if (((dVar39 != 0.0) || (NAN(dVar39))) || ((dVar47 != 0.0 || (NAN(dVar47))))) {
        dVar41 = atan2(dVar39,dVar47);
        dVar41 = dVar41 * 57.29577951308232;
      }
      param_1[0x82] = (longlong)dVar41;
      param_1[0x83] = (longlong)dVar40;
      param_1[0x84] = 0;
    }
    local_428 = (code ****)local_248;
    auVar9[0xf] = 0;
    auVar9._0_15_ = stack0xfffffffffffffdb9;
    _local_248 = auVar9 << 8;
    (**(code **)(*param_1 + 0x418))(param_1,param_2,local_348,plVar30);
    if ((local_248[0] != '\x01') || (uVar18 = *(uint *)(param_1 + 0x20), (uVar18 & 0x10) != 0))
    goto LAB_143dc4492;
  }
  else {
    uVar22 = FUN_140717404(lVar21);
    cVar16 = (**(code **)(*param_1 + 0x2b8))(param_1,lVar21,lVar36);
    if (cVar16 != '\0') {
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar29 = param_1[4];
      }
      else {
        lVar29 = 0;
      }
      if (*(char *)(lVar29 + 0x178) == '\x03') {
        dVar39 = *(double *)((longlong)param_2 + 0x28);
        dVar47 = *(double *)((longlong)param_2 + 0x30);
        dVar40 = *(double *)((longlong)param_2 + 0x38);
        dVar6 = *(double *)((longlong)param_2 + 0x58);
        dVar7 = *(double *)((longlong)param_2 + 0x60);
        dVar41 = *(double *)((longlong)param_2 + 0x68);
        uStack_128 = 0;
        uStack_126 = 0;
        uStack_125 = 0;
        uStack_121 = 0;
        bStack_120 = 0;
        uStack_11f = 0;
        uStack_11d = 0;
        uStack_11c = 0;
        uStack_138 = 0;
        uStack_135 = 0;
        uStack_130 = 0;
        uStack_12d = 0;
        uStack_129 = 0;
        local_118 = 0;
        uStack_115 = 0;
        local_110 = (undefined4)DAT_14c8464f8;
        uStack_10c = DAT_14c8464f8._4_4_;
        uStack_108 = (undefined4)DAT_14c846500;
        uStack_104 = DAT_14c846500._4_4_;
        local_100 = DAT_14c846508;
        local_f8 = ZEXT816(0x3ff0000000000000);
        dStack_e8 = 0.0;
        local_3ce = bVar17;
        local_3c8 = uVar22;
        puVar23 = (uint *)FUN_14485cccc(lVar25);
        if ((puVar23 != (uint *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(puVar23);
        }
        uVar14 = uStack_135;
        uVar12 = uStack_138;
        local_140 = SUB84(puVar23,0);
        uStack_13c = (undefined4)((ulonglong)puVar23 >> 0x20);
        uVar22 = local_3c8;
        bVar17 = local_3ce;
        if (((((*(int *)((longlong)param_2 + 0xdc) != 0) && (uVar18 = *local_3b8, -1 < (int)uVar18))
             && ((int)uVar18 < DAT_14c9647dc)) &&
            ((plVar31 = (longlong *)
                        ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
             plVar31 != (longlong *)0x0 && ((int)plVar31[2] == *(int *)((longlong)param_2 + 0xdc))))
            ) && ((*(uint *)(plVar31 + 1) & 0x10200000) == 0)) {
          plVar31 = (longlong *)*plVar31;
          uStack_138 = SUB83(plVar31,0);
          uVar13 = uStack_138;
          uStack_135 = (undefined5)((ulonglong)plVar31 >> 0x18);
          uVar15 = uStack_135;
          if ((plVar31 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
            lVar25 = *(longlong *)((longlong)param_2 + 0xf0);
            uStack_130 = (undefined3)lVar25;
            uStack_12d = (uint)((ulonglong)lVar25 >> 0x18);
            uStack_129 = (undefined1)((ulonglong)lVar25 >> 0x38);
            if (plVar31 == (longlong *)0x0) goto LAB_143dc33e3;
          }
          else {
            uStack_138 = uVar12;
            uStack_135 = uVar14;
            FUN_1456cec3c(plVar31);
            lVar25 = *(longlong *)((longlong)param_2 + 0xf0);
            uStack_130 = (undefined3)lVar25;
            uStack_12d = (uint)((ulonglong)lVar25 >> 0x18);
            uStack_129 = (undefined1)((ulonglong)lVar25 >> 0x38);
          }
          plVar30 = &DAT_14c846480;
          plVar27 = local_348;
          uStack_138 = uVar13;
          uStack_135 = uVar15;
          for (lVar29 = 0xc; lVar29 != 0; lVar29 = lVar29 + -1) {
            *plVar27 = *plVar30;
            plVar30 = plVar30 + 1;
            plVar27 = plVar27 + 1;
          }
          local_3c0 = puVar23;
          if (puVar23 == (uint *)0x0 || lVar25 != 0) {
LAB_143dc3e23:
            if (lVar25 == 0) goto LAB_143dc409e;
            (**(code **)(*plVar31 + 0x4a8))(plVar31,local_348,lVar25,0);
          }
          else {
            if (DAT_14caf64b8 == 0) {
              local_3f0 = local_248;
              _local_248 = (code ****)FUN_141030f22;
              local_3e0 = FUN_14081d0ea;
              local_3e8 = FUN_142b4754c;
              local_3f8 = &LAB_147c45ce0;
              local_400 = (code *)&LAB_1463f1ff4;
              local_408 = L"Game";
              local_410 = 0x4000000000;
              local_418 = 0x10000004;
              local_420 = (code ****)CONCAT44(local_420._4_4_,8);
              local_428 = (code ****)CONCAT44(local_428._4_4_,0x428);
              FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
            }
            if ((((DAT_14caf64b8 != 0) && (lVar25 = *(longlong *)(puVar23 + 4), lVar25 != 0)) &&
                (*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(lVar25 + 0x38))) &&
               ((*(longlong *)
                  (*(longlong *)(lVar25 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
                 DAT_14caf64b8 + 0x30 &&
                ((plVar31 == *(longlong **)(puVar23 + 0x72) ||
                 ((*(byte *)((longlong)plVar31 + 0x1f9) & 8) != 0)))))) {
              plVar30 = (longlong *)plVar31[0x24];
              if (plVar30 == (longlong *)0x0) {
LAB_143dc4061:
                plVar27 = (longlong *)FUN_140849bbe(puVar23);
                if (((plVar27 == (longlong *)0x0) ||
                    (iVar20 = FUN_1417c02a0(plVar27), plVar30 = plVar27, iVar20 < 1)) &&
                   (plVar30 = (longlong *)FUN_146208468(local_3c0), plVar30 == (longlong *)0x0))
                goto LAB_143dc409e;
              }
              else {
                lVar25 = FUN_14081cebe();
                if (((*(int *)(plVar30[2] + 0x38) < *(int *)(lVar25 + 0x38)) ||
                    (*(longlong *)
                      (*(longlong *)(plVar30[2] + 0x30) + (longlong)*(int *)(lVar25 + 0x38) * 8) !=
                     lVar25 + 0x30)) ||
                   (((*(byte *)((longlong)plVar30 + 0x1f9) & 8) != 0 ||
                    ((iVar20 = (**(code **)(*plVar30 + 0x570))(plVar30), iVar20 == 0 ||
                     (puVar23 != (uint *)plVar30[0x15])))))) goto LAB_143dc4061;
                if (DAT_14cad2858 == 0) {
                  local_3f0 = local_248;
                  _local_248 = (code ****)FUN_144a7958c;
                  local_3e0 = FUN_14081d0ea;
                  local_3e8 = (code *)&LAB_146395584;
                  local_3f8 = &LAB_147a0ba80;
                  local_400 = (code *)&LAB_14575ccce;
                  local_408 = L"Engine";
                  local_410 = 0x40000000000;
                  local_418 = 0x10000004;
                  local_420 = (code ****)CONCAT44(local_420._4_4_,0x10);
                  local_428 = (code ****)CONCAT44(local_428._4_4_,0x1180);
                  FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                                FUN_1463bcebe);
                }
                if ((*(int *)(plVar30[2] + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
                   (plVar27 = plVar30,
                   *(longlong *)
                    (*(longlong *)(plVar30[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8
                    ) != DAT_14cad2858 + 0x30)) {
                  plVar27 = (longlong *)0x0;
                }
              }
              dVar39 = (double)param_1[0xcd];
              dVar47 = (double)param_1[0xce];
              dVar40 = (double)param_1[0xcf];
              dVar43 = dVar40 * dVar40 + dVar39 * dVar39 + dVar47 * dVar47;
              if (((dVar43 != 1.0) ||
                  (dVar46 = dVar40, dVar44 = dVar39, dVar45 = dVar47, NAN(dVar43))) &&
                 (dVar46 = DAT_14c8464f0, dVar44 = DAT_14c8464e0, dVar45 = DAT_14c8464e8,
                 9.99999993922529e-09 <= dVar43)) {
                dVar43 = 1.0 / SQRT(dVar43);
                dVar46 = dVar40 * dVar43;
                dVar44 = dVar39 * dVar43;
                dVar45 = dVar47 * dVar43;
              }
              memset(local_248,0,0x100);
              local_178 = 0xffffffff;
              uStack_244 = 0x3f800000;
              local_1a4 = 0xffffffff;
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14cb85280) &&
                 (FUN_144b3d300(&DAT_14cb85280), DAT_14cb85280 == -1)) {
                local_2c8 = (code ****)0x14b4151a0;
                dStack_2c0 = (double)CONCAT35(dStack_2c0._5_3_,0x11);
                uVar18 = FUN_14001a6c0(&local_2c8,1);
                DAT_14cb85278 = (code *****)(ulonglong)uVar18;
                _Init_thread_footer(&DAT_14cb85280);
              }
              local_428 = (code ****)&local_2c8;
              uStack_2a4 = 0;
              dStack_2c0 = 0.0;
              uStack_2a0 = CONCAT22(uStack_2a0._2_2_,0x101);
              local_278 = 0;
              local_270 = 0x800000000;
              local_258 = 0;
              local_250 = 0x400000000;
              uStack_2ac = 0;
              local_2c8 = (code ****)DAT_14cb85278;
              local_2a8 = local_2a8 & 0xffffff00;
              local_2b8 = (uint *)0x100000000000101;
              uStack_2b0 = CONCAT31(uStack_2b0._1_3_,1);
              local_350 = dVar46 * 1000.0 + *(double *)((longlong)param_2 + 0x20);
              local_358 = dVar45 * 1000.0 + *(double *)((longlong)param_2 + 0x18);
              local_360 = dVar44 * 1000.0 + *(double *)((longlong)param_2 + 0x10);
              local_368 = *(double *)((longlong)param_2 + 0x20) - dVar46;
              local_370 = *(double *)((longlong)param_2 + 0x18) - dVar45;
              local_378 = *(double *)((longlong)param_2 + 0x10) - dVar44;
              cVar16 = (**(code **)(*plVar30 + 0x978))(plVar30,local_248);
              if (cVar16 == '\0') {
                pauVar2 = (undefined1 (*) [16])((longlong)param_2 + 0x10);
                if (plVar30 == plVar27) {
                  local_398 = *(longlong *)*pauVar2;
                  uStack_390 = *(undefined8 *)((longlong)param_2 + 0x18);
                  local_388 = *(undefined8 *)((longlong)param_2 + 0x20);
                  local_420 = (code ****)CONCAT71(local_420._1_7_,1);
                  local_428 = (code ****)((ulonglong)local_428 & 0xffffffff00000000);
                  FUN_147a0ff94(plVar27,&local_380,&local_398,&local_2e8);
                  lStack_158 = local_380;
                  if (local_380 == 0) {
                    local_228._0_8_ = *(undefined8 *)((longlong)param_2 + 0x20);
                    local_2e8 = *(code *****)*pauVar2;
                    dStack_2e0 = *(double *)((longlong)param_2 + 0x18);
                  }
                  else {
                    local_228._0_8_ = CONCAT44(uStack_2d4,local_2d8);
                  }
                  local_238._8_8_ = dStack_2e0;
                  local_238._0_8_ = local_2e8;
                }
                else {
                  local_228._0_8_ = *(undefined8 *)((longlong)param_2 + 0x20);
                  local_238 = *pauVar2;
                }
              }
              if (DAT_14c950c29 == '\x01') {
                FUN_1456cec3c(plVar30);
              }
              lVar25 = lStack_158;
              uStack_138 = SUB83(plVar30,0);
              uStack_135 = (undefined5)((ulonglong)plVar30 >> 0x18);
              uStack_130 = (undefined3)lStack_158;
              uStack_12d = (uint)((ulonglong)lStack_158 >> 0x18);
              uStack_129 = (undefined1)((ulonglong)lStack_158 >> 0x38);
              dVar47 = *(double *)((longlong)param_2 + 0x28) - *(double *)((longlong)param_2 + 0x10)
              ;
              dVar39 = *(double *)((longlong)param_2 + 0x30) - *(double *)((longlong)param_2 + 0x18)
              ;
              dVar40 = *(double *)((longlong)param_2 + 0x38) - *(double *)((longlong)param_2 + 0x20)
              ;
              dVar39 = (double)(float)SQRT(dVar40 * dVar40 + dVar39 * dVar39 + dVar47 * dVar47);
              dVar40 = *(double *)((longlong)param_2 + 0x68) * dVar39 + (double)local_228._0_8_;
              dVar47 = *(double *)((longlong)param_2 + 0x60) * dVar39 + (double)local_238._8_8_;
              dVar39 = dVar39 * *(double *)((longlong)param_2 + 0x58) + (double)local_238._0_8_;
              if (local_258 != 0) {
                FUN_1400020a8();
              }
              plVar31 = plVar30;
              if (local_278 != 0) {
                FUN_1400020a8();
              }
              goto LAB_143dc3e23;
            }
LAB_143dc409e:
            plVar30 = plVar31 + 0x48;
            plVar31 = local_348;
            for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
              *plVar31 = *plVar30;
              plVar30 = plVar30 + 1;
              plVar31 = plVar31 + 1;
            }
          }
          if ((0.0001 < ABS(*(float *)(param_1[0x10] + 0x5dc))) &&
             ((CONCAT44(uStack_13c,local_140) == 0 ||
              ((*(byte *)(CONCAT44(uStack_13c,local_140) + 0x62) & 4) == 0)))) {
            dVar43 = (double)*(float *)(param_1[0x10] + 0x5dc);
            dVar39 = dVar39 + dVar43 * dVar6;
            dVar47 = dVar47 + dVar7 * dVar43;
            dVar40 = dVar40 + dVar41 * dVar43;
          }
          dVar43 = (double)param_1[0xcd];
          uVar19 = SUB84(dVar43,0);
          uVar48 = (undefined4)((ulonglong)dVar43 >> 0x20);
          dVar46 = (double)param_1[0xce];
          dVar44 = 0.0;
          if ((((dVar43 != 0.0) || (NAN(dVar43))) || (dVar46 != 0.0)) || (NAN(dVar46))) {
            dVar44 = atan2(dVar46,dVar43);
            dVar44 = dVar44 * 0.5;
            uVar19 = (undefined4)param_1[0xcd];
            uVar48 = (undefined4)((ulonglong)param_1[0xcd] >> 0x20);
            dVar46 = (double)param_1[0xce];
          }
          plVar30 = (longlong *)&local_110;
          dVar46 = SQRT((double)CONCAT44(uVar48,uVar19) * (double)CONCAT44(uVar48,uVar19) +
                        dVar46 * dVar46);
          dVar43 = (double)param_1[0xcf];
          dVar45 = 0.0;
          if (((dVar43 != 0.0) || (NAN(dVar43))) || ((dVar46 != 0.0 || (NAN(dVar46))))) {
            dVar45 = atan2(dVar43,dVar46);
            dVar45 = dVar45 * 0.5;
          }
          dVar43 = sin(dVar45);
          dVar46 = cos(dVar45);
          dVar45 = sin(dVar44);
          dVar44 = cos(dVar44);
          unique0x100007c4 = SUB84(-dVar43 * dVar44,0);
          _local_248 = (code ****)(dVar43 * dVar45);
          unique0x100007c8 = (int)((ulonglong)(-dVar43 * dVar44) >> 0x20);
          local_238._8_4_ = SUB84(dVar46 * dVar44,0);
          local_238._0_8_ = dVar45 * dVar46;
          local_238._12_4_ = (int)((ulonglong)(dVar46 * dVar44) >> 0x20);
          local_228._8_4_ = SUB84(dVar47,0);
          local_228._0_8_ = dVar39;
          local_228._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
          uStack_200 = (undefined4)DAT_14c846518;
          uStack_1fc = (undefined4)((ulonglong)DAT_14c846518 >> 0x20);
          uStack_210 = 0;
          local_208 = (undefined4)DAT_14c846510;
          uStack_204 = DAT_14c846510._4_4_;
          local_1f8 = DAT_14c846520;
          uStack_1f0 = 0;
          local_218 = dVar40;
          FUN_1449437a2(local_248,&local_2c8,local_348);
          uStack_128 = (ushort)local_2a8;
          uStack_126 = (undefined1)(local_2a8 >> 0x10);
          uStack_125._1_3_ = (undefined3)uStack_2a4;
          uStack_125 = CONCAT31(uStack_125._1_3_,(char)(local_2a8 >> 0x18));
          uStack_121 = (undefined1)((uint)uStack_2a4 >> 0x18);
          bStack_120 = (byte)uStack_2a0;
          uStack_11f = (undefined2)((uint)uStack_2a0 >> 8);
          uStack_11d = (undefined1)((uint)uStack_2a0 >> 0x18);
          uStack_11c = uStack_29c;
          local_118 = (undefined3)local_298;
          uStack_115 = (undefined5)((ulonglong)local_298 >> 0x18);
          pppppcVar42 = &local_2e8;
          local_2e8 = local_2c8;
          dStack_2e0 = dStack_2c0;
          local_2d8 = (undefined4)local_2b8;
          uStack_2d4 = local_2b8._4_4_;
          uStack_2d0 = uStack_2b0;
          uStack_2cc = uStack_2ac;
          uVar19 = FUN_1448052ee(pppppcVar42,plVar30);
          lVar25 = -(ulonglong)(9.99999993922529e-09 < ABS(local_308._8_8_));
          auVar53._8_4_ = (int)lVar25;
          auVar53._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_308._0_8_));
          auVar53._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
          iVar20 = movmskpd(uVar19,auVar53);
          lVar25 = -(ulonglong)(9.99999993922529e-09 < ABS(local_2f8._8_8_));
          auVar55._8_4_ = (int)lVar25;
          auVar55._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_2f8._0_8_));
          auVar55._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
          uVar28 = movmskpd((int)pppppcVar42,auVar55);
          uVar19 = (undefined4)DAT_14c846480;
          uVar18 = DAT_14c846480._4_4_;
          uVar48 = (undefined4)DAT_14c846488;
          uVar34 = DAT_14c846488._4_4_;
          uVar49 = (undefined4)DAT_14c8464c0;
          uVar50 = DAT_14c8464c0._4_4_;
          uVar51 = (undefined4)DAT_14c8464c8;
          uVar52 = DAT_14c8464c8._4_4_;
          dVar39 = DAT_14c846490;
          dVar47 = DAT_14c846498;
          dVar40 = DAT_14c8464d0;
          if ((uVar28 & 0x3fffffff) != 0 || iVar20 != 0) {
            auVar55 = divpd(_DAT_149934d80,local_308);
            auVar53 = divpd(ZEXT816(0x3ff0000000000000),local_2f8);
            uVar22 = -(ulonglong)(9.99999993922529e-09 < ABS(local_308._0_8_)) & auVar55._0_8_;
            uVar5 = -(ulonglong)(9.99999993922529e-09 < ABS(local_308._8_8_)) & auVar55._8_8_;
            uVar19 = (int)local_348[0];
            uVar18 = (uint)((ulonglong)local_348[0] >> 0x20) ^ 0x80000000;
            uVar48 = (int)local_348[1];
            uVar34 = (uint)((ulonglong)local_348[1] >> 0x20) ^ 0x80000000;
            uVar49 = (int)uVar22;
            uVar50 = (int)(uVar22 >> 0x20);
            uVar51 = (int)uVar5;
            uVar52 = (int)(uVar5 >> 0x20);
            dVar39 = local_338 * -1.0;
            dVar47 = dStack_330 * 1.0;
            dVar40 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_2f8._0_8_)) &
                             auVar53._0_8_);
          }
          dVar41 = dVar41 * dVar40;
          dVar6 = dVar6 * (double)CONCAT44(uVar50,uVar49);
          dVar7 = dVar7 * (double)CONCAT44(uVar52,uVar51);
          dVar40 = dVar7 * (double)CONCAT44(uVar18,uVar19) - dVar6 * (double)CONCAT44(uVar34,uVar48)
          ;
          dVar43 = dVar41 * (double)CONCAT44(uVar34,uVar48) - dVar7 * dVar39;
          dVar46 = dVar6 * dVar39 - (double)CONCAT44(uVar18,uVar19) * dVar41;
          dVar43 = dVar43 + dVar43;
          dVar46 = dVar46 + dVar46;
          dVar40 = dVar40 + dVar40;
          dStack_e8 = dVar47 * dVar40 + dVar41 +
                      (dVar46 * (double)CONCAT44(uVar18,uVar19) -
                      dVar43 * (double)CONCAT44(uVar34,uVar48));
          dVar41 = (dVar39 * dVar43 - (double)CONCAT44(uVar18,uVar19) * dVar40) +
                   dVar47 * dVar46 + dVar7;
          local_f8._8_4_ = SUB84(dVar41,0);
          local_f8._0_8_ =
               (dVar40 * (double)CONCAT44(uVar34,uVar48) - dVar46 * dVar39) +
               dVar47 * dVar43 + dVar6;
          local_f8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
          FUN_1458dcfae(param_1);
          uVar22 = local_3c8;
          bVar17 = local_3ce;
        }
      }
    }
LAB_143dc33e3:
    if (lVar21 == 0) {
      if (bVar17 == 0) {
        puVar23 = (uint *)(param_1 + 0x20);
        uVar18 = *(uint *)(param_1 + 0x20);
        if ((uVar18 & 4) == 0) {
          uVar19 = CONCAT31((int3)(uVar18 >> 8),-1 < (short)uVar18);
          goto LAB_143dc3735;
        }
      }
      else {
        param_1[0x81] = *(longlong *)((longlong)param_2 + 0x20);
        lVar25 = *(longlong *)((longlong)param_2 + 0x18);
        param_1[0x7f] = *(longlong *)((longlong)param_2 + 0x10);
        param_1[0x80] = lVar25;
LAB_143dc3557:
        dVar39 = 0.0;
        if (((((double)param_1[0x92] != 0.0) || (NAN((double)param_1[0x92]))) ||
            ((double)param_1[0x93] != 0.0)) ||
           (((NAN((double)param_1[0x93]) || ((double)param_1[0x94] != 0.0)) ||
            (NAN((double)param_1[0x94]))))) {
          dVar47 = (double)param_1[0xcd];
          uVar19 = SUB84(dVar47,0);
          uVar48 = (undefined4)((ulonglong)dVar47 >> 0x20);
          dVar40 = (double)param_1[0xce];
          uVar49 = SUB84(dVar40,0);
          uVar50 = (undefined4)((ulonglong)dVar40 >> 0x20);
          if (((dVar47 != 0.0) || (NAN(dVar47))) || ((dVar40 != 0.0 || (NAN(dVar40))))) {
            dVar39 = atan2(dVar40,dVar47);
            dVar39 = dVar39 * 57.29577951308232;
            uVar19 = (undefined4)param_1[0xcd];
            uVar48 = (undefined4)((ulonglong)param_1[0xcd] >> 0x20);
            uVar49 = (undefined4)param_1[0xce];
            uVar50 = (undefined4)((ulonglong)param_1[0xce] >> 0x20);
          }
          plVar30 = param_1 + 0x92;
          dVar40 = SQRT((double)CONCAT44(uVar48,uVar19) * (double)CONCAT44(uVar48,uVar19) +
                        (double)CONCAT44(uVar50,uVar49) * (double)CONCAT44(uVar50,uVar49));
          dVar47 = (double)param_1[0xcf];
          pppppcVar42 = (code *****)0x0;
          dStack_2c0 = dVar39;
          if ((((dVar40 != 0.0) || (NAN(dVar40))) || (dVar47 != 0.0)) || (NAN(dVar47))) {
            dVar39 = atan2(dVar47,dVar40);
            pppppcVar42 = (code *****)(dVar39 * 57.29577951308232);
          }
          local_2b8 = (uint *)0x0;
          local_2c8 = (code ****)pppppcVar42;
          lVar25 = FUN_1401c9a0e(&local_2c8,local_248,plVar30);
          param_1[0x7c] = (longlong)((double)param_1[0x7f] - (double)_local_248);
          param_1[0x7d] = (longlong)((double)param_1[0x80] - dStack_240);
          param_1[0x7e] = (longlong)((double)param_1[0x81] - (double)local_238._0_8_);
        }
        else {
          lVar25 = param_1[0x81];
          param_1[0x7e] = lVar25;
          param_1[0x7c] = param_1[0x7f];
          param_1[0x7d] = param_1[0x80];
        }
        puVar23 = (uint *)(param_1 + 0x20);
        uVar18 = *(uint *)(param_1 + 0x20);
        if ((uVar18 & 4) == 0) {
          sVar32 = (short)uVar18;
          uVar19 = (undefined4)CONCAT71((int7)((ulonglong)lVar25 >> 8),-1 < sVar32);
          if (lVar21 != 0) {
            if ((char)((uVar18 & 0x10) >> 4) != '\0' || local_3cd != 0) {
              fVar38 = (float)FUN_140b3080a(param_1,lVar21);
              goto joined_r0x000143dc37a4;
            }
            local_3cc = CONCAT31((int3)((uint)(int)param_1[0xd7] >> 8),
                                 (int)param_1[0xd7] < *(int *)(param_1[0x10] + 0x304));
            fVar38 = (float)FUN_140b3080a(param_1,lVar21);
            if (-1 < sVar32) goto LAB_143dc37a6;
            uVar19 = 0;
            goto LAB_143dc3811;
          }
LAB_143dc3735:
          puVar23 = (uint *)(param_1 + 0x20);
          local_3c8 = CONCAT44(local_3c8._4_4_,uVar19);
          goto LAB_143dc3a87;
        }
      }
LAB_143dc3ae8:
      if ((*puVar23 & 0x20) != 0) goto LAB_143dc3b06;
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar25 = param_1[4];
      }
      else {
        lVar25 = 0;
      }
      if (*(char *)(lVar25 + 0x178) == '\x03') goto LAB_143dc3b06;
      if (lVar21 == 0) {
        lVar25 = 0;
      }
      else {
        if (DAT_14cb56270 == 0) {
          local_3f0 = local_248;
          _local_248 = (code ****)FUN_1449e2820;
          local_3e0 = FUN_14081d0ea;
          local_3e8 = FUN_1427b09ee;
          local_3f8 = &LAB_148630fef;
          local_400 = FUN_1464b6a91;
          local_408 = L"Engine";
          local_410 = 0;
          local_418 = 0x10004001;
          local_420 = (code ****)CONCAT44(local_420._4_4_,8);
          local_428 = (code ****)CONCAT44(local_428._4_4_,0x28);
          FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
        }
        lVar25 = FUN_144718840(lVar21,DAT_14cb56270);
      }
      if (bVar17 == 0) {
        if (lVar25 == 0) {
          bVar37 = (*puVar23 & 0x8000) == 0;
        }
        else {
          bVar37 = false;
        }
        (**(code **)(*param_1 + 0x410))(param_1,param_2,1,bVar37);
        goto LAB_143dc3be0;
      }
      if (lVar25 == 0) {
        FUN_14028ef70(param_1,1);
      }
    }
    else {
      plVar30 = param_1 + 0x6c;
      cVar16 = FUN_14069eaf4(plVar30,lVar21);
      if ((cVar16 == '\0') &&
         ((uVar22 == 0 || (cVar16 = FUN_14069eaf4(plVar30,uVar22), cVar16 == '\0')))) {
        if (bVar17 != 0) {
          param_1[0x81] = *(longlong *)((longlong)param_2 + 0x20);
          lVar25 = *(longlong *)((longlong)param_2 + 0x18);
          param_1[0x7f] = *(longlong *)((longlong)param_2 + 0x10);
          param_1[0x80] = lVar25;
          if ((0.0 < *(float *)((longlong)param_1 + 0x32c)) &&
             ((*(byte *)((longlong)param_1 + 0x104) & 0x40) != 0)) {
            uVar24 = FUN_140757e32();
            plVar31 = (longlong *)FUN_144718840(lVar21,uVar24);
            if (plVar31 != (longlong *)0x0) {
              plVar30 = (longlong *)local_248;
              memcpy(plVar30,param_2,0xb8);
              local_190 = *(undefined8 *)((longlong)param_2 + 0xb8);
              local_188 = *(undefined8 *)((longlong)param_2 + 0xc0);
              uStack_180 = *(undefined8 *)((longlong)param_2 + 200);
              local_178 = *(undefined4 *)((longlong)param_2 + 0xd0);
              local_174 = *(undefined1 *)((longlong)param_2 + 0xd4);
              local_150 = *(undefined8 *)(local_3b8 + 8);
              local_170 = *(undefined8 *)local_3b8;
              uStack_168 = *(undefined8 *)(local_3b8 + 2);
              local_160 = local_3b8[4];
              uStack_15c = local_3b8[5];
              lStack_158 = *(longlong *)(local_3b8 + 6);
              uVar24 = (**(code **)(*plVar31 + 0x10))(plVar31);
              FUN_147ad4c2e(uVar24,*(undefined4 *)((longlong)param_1 + 0x32c),plVar30);
              param_1[0x81] = local_228._0_8_;
              param_1[0x7f] = local_238._0_8_;
              param_1[0x80] = local_238._8_8_;
            }
          }
          goto LAB_143dc3557;
        }
        puVar23 = (uint *)(param_1 + 0x20);
        uVar18 = *(uint *)(param_1 + 0x20);
        if ((uVar18 & 4) != 0) goto LAB_143dc3ae8;
        fVar38 = (float)FUN_140b3080a(param_1,lVar21);
        sVar32 = (short)uVar18;
joined_r0x000143dc37a4:
        local_3cc = 0;
        uVar19 = 0;
        if (-1 < sVar32) {
LAB_143dc37a6:
          if (DAT_14cb56270 == 0) {
            local_3f0 = local_248;
            _local_248 = (code ****)FUN_1449e2820;
            local_3e0 = FUN_14081d0ea;
            local_3e8 = FUN_1427b09ee;
            local_3f8 = &LAB_148630fef;
            local_400 = FUN_1464b6a91;
            local_408 = L"Engine";
            local_410 = 0;
            local_418 = 0x10004001;
            local_420 = (code ****)CONCAT44(local_420._4_4_,8);
            local_428 = (code ****)CONCAT44(local_428._4_4_,0x28);
            FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
          }
          plVar30 = (longlong *)FUN_144718840(lVar21,DAT_14cb56270);
          if (plVar30 == (longlong *)0x0) {
            uVar19 = 1;
          }
          else {
            lVar25 = (**(code **)(*plVar30 + 0x20))(plVar30);
            uVar19 = (undefined4)CONCAT71((int7)((ulonglong)lVar25 >> 8),lVar25 == 0);
          }
        }
LAB_143dc3811:
        local_3c0 = (uint *)(param_1 + 0x20);
        local_3c8 = CONCAT44(local_3c8._4_4_,uVar19);
        local_3ce = bVar17;
        local_3b0 = lVar21;
        local_3a8 = lVar36;
        if (param_1 == (longlong *)0x0) {
          uVar18 = 0;
          uVar22 = 0;
        }
        else {
          uVar18 = *(uint *)((longlong)param_1 + 0xc);
          if ((int)uVar18 < DAT_14c9647dc) {
            lVar25 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
          }
          else {
            lVar25 = 0;
          }
          uVar22 = (ulonglong)*(uint *)(lVar25 + 0x10);
          if (*(uint *)(lVar25 + 0x10) == 0) {
            LOCK();
            iVar20 = DAT_14c964868 + 1;
            UNLOCK();
            uVar34 = DAT_14c964868 + 1;
            bVar37 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar20;
            if (bVar37) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar34);
            }
            LOCK();
            uVar28 = *(uint *)(lVar25 + 0x10);
            bVar37 = uVar28 == 0;
            if (bVar37) {
              *(uint *)(lVar25 + 0x10) = uVar34;
              uVar28 = 0;
            }
            UNLOCK();
            if (bVar37) {
              uVar28 = uVar34;
            }
            uVar22 = (ulonglong)uVar28;
          }
        }
        lVar21 = param_1[0x23];
        memcpy((void *)((longlong)&uStack_244 + 3),param_2,0xb8);
        lVar25 = *(longlong *)((longlong)param_2 + 0xb8);
        local_348[0] = *(longlong *)((longlong)param_2 + 0xc0);
        local_348[1] = *(longlong *)((longlong)param_2 + 200);
        uVar34 = *(uint *)((longlong)param_2 + 0xd0);
        uVar3 = *(undefined1 *)((longlong)param_2 + 0xd4);
        uVar24 = *(undefined8 *)local_3b8;
        uStack_12d = local_3b8[4];
        uVar28 = local_3b8[5];
        uStack_125 = local_3b8[6];
        uVar8 = local_3b8[7];
        local_140._3_1_ = (undefined1)uVar24;
        uStack_13c = (undefined4)((ulonglong)uVar24 >> 8);
        uStack_138 = (undefined3)((ulonglong)uVar24 >> 0x28);
        uStack_135 = (undefined5)*(undefined8 *)(local_3b8 + 2);
        uStack_130 = (undefined3)((ulonglong)*(undefined8 *)(local_3b8 + 2) >> 0x28);
        uStack_129 = (undefined1)uVar28;
        uStack_128 = (ushort)(uVar28 >> 8);
        uStack_126 = (undefined1)(uVar28 >> 0x18);
        uStack_121 = (undefined1)uVar8;
        bStack_120 = (byte)(uVar8 >> 8);
        uStack_11f = (undefined2)(uVar8 >> 0x10);
        uVar24 = *(undefined8 *)(local_3b8 + 8);
        uStack_11d = (undefined1)uVar24;
        uStack_11c = (undefined4)((ulonglong)uVar24 >> 8);
        local_118 = (undefined3)((ulonglong)uVar24 >> 0x28);
        local_2c8 = (code ****)0x0;
        local_2b8 = (uint *)0x0;
        puVar26 = (uint *)FUN_14001cc68(0x118,8);
        *(undefined ***)puVar26 = &PTR_FUN_14b415160;
        *(ulonglong *)(puVar26 + 2) = (ulonglong)uVar18 | uVar22 << 0x20;
        *(char *)(puVar26 + 4) = (char)lVar21;
        local_2b8 = puVar26;
        memcpy(puVar26 + 6,(void *)((longlong)&uStack_244 + 3),0xb8);
        lVar21 = local_3b0;
        puVar23 = local_3c0;
        bVar17 = local_3ce;
        *(longlong *)(puVar26 + 0x34) = lVar25;
        *(longlong *)(puVar26 + 0x36) = local_348[0];
        *(longlong *)(puVar26 + 0x38) = local_348[1];
        puVar26[0x3a] = uVar34;
        *(undefined1 *)(puVar26 + 0x3b) = uVar3;
        *(longlong *)(puVar26 + 0x44) = CONCAT35(local_118,CONCAT41(uStack_11c,uStack_11d));
        puVar26[0x40] = uStack_12d;
        puVar26[0x41] = CONCAT13(uStack_126,CONCAT21(uStack_128,uStack_129));
        puVar26[0x42] = uStack_125;
        puVar26[0x43] = CONCAT22(uStack_11f,CONCAT11(bStack_120,uStack_121));
        *(longlong *)(puVar26 + 0x3c) = CONCAT35(uStack_138,CONCAT41(uStack_13c,local_140._3_1_));
        *(longlong *)(puVar26 + 0x3e) = CONCAT35(uStack_130,uStack_135);
        if (puVar26 != (uint *)&DAT_fffffffffffffff8) {
          local_2c8 = (code ****)FUN_143dce5ee;
        }
        if (((0.0 < fVar38) || ((*local_3c0 & 0x10) == 0)) &&
           ((-1 < (short)*local_3c0 || ((*(byte *)(param_1[0x10] + 0x378) & 1) != 0)))) {
          local_420 = (code ****)&local_2c8;
          local_428 = (code ****)CONCAT71(local_428._1_7_,(char)local_3cc);
          (**(code **)(*param_1 + 0x3e0))(param_1,param_2,fVar38,local_3cd);
        }
        lVar36 = local_3a8;
        uVar18 = *(uint *)(lVar21 + 0xc);
        *(uint *)(param_1 + 0x6c) = uVar18;
        if ((int)uVar18 < DAT_14c9647dc) {
          plVar30 = (longlong *)
                    ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
        }
        else {
          plVar30 = (longlong *)0x0;
        }
        iVar20 = (int)plVar30[2];
        if ((int)plVar30[2] == 0) {
          LOCK();
          iVar20 = DAT_14c964868 + 1;
          UNLOCK();
          iVar33 = DAT_14c964868 + 1;
          bVar37 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar20;
          if (bVar37) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar33);
          }
          LOCK();
          iVar20 = (int)plVar30[2];
          bVar37 = iVar20 == 0;
          if (bVar37) {
            *(int *)(plVar30 + 2) = iVar33;
            iVar20 = 0;
          }
          UNLOCK();
          if (bVar37) {
            iVar20 = iVar33;
          }
        }
        *(int *)((longlong)param_1 + 0x364) = iVar20;
        if ((code *****)local_2c8 != (code *****)0x0) {
          puVar26 = local_2b8;
          if (local_2b8 == (uint *)0x0) {
            puVar26 = &local_2a8;
          }
          (**(code **)(*(longlong *)puVar26 + 0x10))();
        }
LAB_143dc3a87:
        bVar11 = local_3cd;
        if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
          lVar25 = param_1[4];
        }
        else {
          lVar25 = 0;
        }
        if ((*(char *)(lVar25 + 0x178) == '\x03') &&
           ((**(code **)(*param_1 + 0x410))
                      (param_1,param_2,
                       CONCAT71((int7)((ulonglong)plVar30 >> 8),local_3cd) & 0xffffffff,
                       local_3c8 & 0xffffffff),
           (*(uint *)(param_1 + 0x20) & 0x8010) == 0x8000 && bVar11 == 0)) {
          (**(code **)(*param_1 + 0x368))(param_1,param_2,1);
        }
        goto LAB_143dc3ae8;
      }
LAB_143dc3b06:
      if (bVar17 == 0) {
LAB_143dc3be0:
        *(int *)((longlong)param_1 + 0x6bc) = *(int *)((longlong)param_1 + 0x6bc) + 1;
        if (lVar21 != 0) {
          plVar30 = param_1 + 0x6d;
          uVar19 = *(undefined4 *)(lVar21 + 0xc);
          iVar20 = (int)param_1[0x70];
          *(uint *)(param_1 + 0x70) = iVar20 + 1U;
          if (*(uint *)((longlong)param_1 + 900) < iVar20 + 1U) {
            FUN_1447de67e(plVar30,iVar20);
          }
          plVar31 = (longlong *)param_1[0x6f];
          if ((longlong *)param_1[0x6f] == (longlong *)0x0) {
            plVar31 = plVar30;
          }
          *(undefined4 *)((longlong)plVar31 + (longlong)iVar20 * 4) = uVar19;
          lVar25 = FUN_140717404(lVar21);
          if (lVar25 != 0) {
            uVar19 = *(undefined4 *)(lVar25 + 0xc);
            iVar20 = (int)param_1[0x70];
            *(uint *)(param_1 + 0x70) = iVar20 + 1U;
            if (*(uint *)((longlong)param_1 + 900) < iVar20 + 1U) {
              FUN_1447de67e(plVar30,iVar20);
            }
            if ((longlong *)param_1[0x6f] != (longlong *)0x0) {
              plVar30 = (longlong *)param_1[0x6f];
            }
            *(undefined4 *)((longlong)plVar30 + (longlong)iVar20 * 4) = uVar19;
          }
        }
        if (lVar36 != 0) {
          uVar19 = *(undefined4 *)(lVar36 + 0xc);
          iVar20 = (int)param_1[0x74];
          *(uint *)(param_1 + 0x74) = iVar20 + 1U;
          if (*(uint *)((longlong)param_1 + 0x3a4) < iVar20 + 1U) {
            FUN_1447de67e(param_1 + 0x71,iVar20);
          }
          plVar30 = param_1 + 0x71;
          if ((longlong *)param_1[0x73] != (longlong *)0x0) {
            plVar30 = (longlong *)param_1[0x73];
          }
          *(undefined4 *)((longlong)plVar30 + (longlong)iVar20 * 4) = uVar19;
        }
        if (((((*(ushort *)((longlong)param_1 + 0x104) & 2) != 0) &&
             (*(int *)((longlong)param_1 + 0x6bc) == 1)) && ((int)param_1[0xd6] == 0)) &&
           ((int)param_1[0xd7] == 0)) {
          dVar40 = (double)param_1[0x2f] - (double)param_1[0x29];
          dVar47 = (double)param_1[0x2e] - (double)param_1[0x28];
          dVar39 = (double)param_1[0x2d] - (double)param_1[0x27];
          dVar41 = dVar40 * dVar40 + dVar39 * dVar39 + dVar47 * dVar47;
          if (((dVar41 != 1.0) || (dVar6 = dVar47, dVar7 = dVar39, dVar43 = dVar40, NAN(dVar41))) &&
             (dVar6 = DAT_14c8464e8, dVar7 = DAT_14c8464e0, dVar43 = DAT_14c8464f0,
             9.99999993922529e-09 <= dVar41)) {
            dVar41 = 1.0 / SQRT(dVar41);
            dVar6 = dVar47 * dVar41;
            dVar7 = dVar39 * dVar41;
            dVar43 = dVar40 * dVar41;
          }
          dVar39 = (double)(float)SQRT((double)param_1[0xcf] * (double)param_1[0xcf] +
                                       (double)param_1[0xcd] * (double)param_1[0xcd] +
                                       (double)param_1[0xce] * (double)param_1[0xce]);
          param_1[0xcd] = (longlong)(dVar7 * dVar39);
          param_1[0xce] = (longlong)(dVar6 * dVar39);
          param_1[0xcf] = (longlong)(dVar43 * dVar39);
        }
        *(ushort *)((longlong)param_1 + 0x104) = *(ushort *)((longlong)param_1 + 0x104) | 0x10;
        goto LAB_143dc4492;
      }
    }
    uVar18 = *(uint *)(param_1 + 0x20);
    if ((uVar18 & 0x11) != 1) goto LAB_143dc4492;
  }
  if ((uVar18 & 1) != 0) {
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar25 = param_1[4];
    }
    else {
      lVar25 = 0;
    }
    if (*(char *)(lVar25 + 0x178) == '\x03') {
      lVar25 = *param_1;
      uVar22 = CONCAT71((uint7)(uint3)(uVar18 >> 8),1);
    }
    else {
      *(uint *)(param_1 + 0x20) = uVar18 | 0x4000;
      if ((uVar18 & 0x420) == 0) goto LAB_143dc4492;
      uVar22 = (ulonglong)((uVar18 & 0x40) >> 6);
      lVar25 = *param_1;
    }
    (**(code **)(lVar25 + 0x2e8))(param_1,uVar22);
  }
LAB_143dc4492:
  if ((local_e0 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dc4ccc FUN_143dc4ccc body=214 status=ok
// SIG undefined FUN_143dc4ccc(void)

void FUN_143dc4ccc(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)((longlong)param_1 + 0x592) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x592) = 0;
    local_18 = param_1[0x9d];
    local_28 = (undefined4)param_1[0x9b];
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x4dc);
    uStack_20 = (undefined4)param_1[0x9c];
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0x4e4);
    FUN_143dc1b8a(param_1 + 6);
  }
  if (*(char *)((longlong)param_1 + 0x593) != '\0') {
    FUN_143dc1470(param_1,*(char *)((longlong)param_1 + 0x593) == '\x01');
  }
  if ((char)param_1[0xb2] == '\x01') {
    (**(code **)(param_1[6] + 0x90))(param_1 + 6);
  }
  if (*(char *)((longlong)param_1 + 0x591) == '\x01') {
    (**(code **)(param_1[6] + 0x98))(param_1 + 6);
  }
  (**(code **)(*param_1 + 0x380))(param_1);
  lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  *(float *)(param_1 + 0x67) = (float)*(double *)(lVar1 + 0x6d0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dc4da4 FUN_143dc4da4 body=8373 status=ok
// SIG undefined FUN_143dc4da4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc4da4(longlong *param_1)

{
  undefined8 *_Src;
  byte *pbVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  undefined4 extraout_EAX;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong *plVar18;
  undefined1 (*pauVar19) [16];
  undefined *puVar20;
  longlong lVar21;
  uint uVar22;
  char *pcVar23;
  wchar_t *pwVar24;
  uint *puVar25;
  float *pfVar26;
  uint uVar27;
  double *pdVar28;
  longlong lVar29;
  longlong lVar30;
  longlong *plVar31;
  int iVar32;
  undefined8 *puVar33;
  longlong *plVar34;
  bool bVar35;
  ulonglong uVar36;
  float fVar37;
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
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar67;
  double dVar68;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar69;
  double dVar70;
  double dVar73;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar74 [16];
  undefined1 auStack_578 [32];
  wchar_t *local_558;
  uint local_550;
  undefined8 local_548;
  wchar_t *local_540;
  wchar_t *local_538;
  code *local_530;
  undefined1 *local_528;
  code **local_520;
  code *local_518;
  code *local_510;
  longlong *local_500;
  double local_4f8;
  undefined8 *local_4e0;
  longlong *local_4d8;
  ulonglong local_4c8;
  longlong *local_4c0;
  longlong *local_4b8;
  longlong *local_4b0;
  longlong *local_4a8;
  double local_4a0;
  double local_498;
  double local_490;
  code *local_488;
  longlong lStack_480;
  longlong *local_478;
  undefined8 uStack_470;
  longlong local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  longlong *local_428;
  double local_420;
  double local_418;
  double local_408;
  double local_400;
  undefined8 *local_3f8;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  undefined8 local_390;
  longlong alStack_388 [2];
  undefined4 local_378;
  undefined1 local_374;
  undefined3 local_373;
  undefined5 uStack_370;
  undefined3 uStack_36b;
  undefined5 uStack_368;
  undefined3 local_363;
  undefined5 uStack_360;
  undefined3 uStack_35b;
  undefined5 uStack_358;
  undefined3 uStack_353;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_344;
  undefined1 local_33c;
  code *local_338;
  longlong lStack_330;
  longlong *local_328;
  undefined8 uStack_320;
  longlong local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  double dStack_2f0;
  double local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  undefined8 uStack_280;
  undefined4 local_254;
  undefined4 local_228;
  code *local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double *pdStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined3 local_138;
  undefined5 uStack_135;
  undefined3 uStack_130;
  undefined5 uStack_12d;
  undefined3 uStack_128;
  undefined5 uStack_125;
  undefined3 uStack_120;
  undefined5 uStack_11d;
  undefined3 uStack_118;
  undefined5 local_115;
  undefined3 uStack_110;
  undefined5 uStack_10d;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_578;
  pcVar23 = (char *)param_1;
  lVar14 = (**(code **)(*param_1 + 0x180))();
  dVar38 = *(double *)(lVar14 + 0x6d0);
  uVar27 = *(uint *)(param_1 + 0x20);
  local_500 = param_1;
  if ((uVar27 & 0x11) == 1) {
    local_490 = (double)param_1[0x81] - (double)param_1[0x6b];
    local_498 = (double)param_1[0x80] - (double)param_1[0x6a];
    local_4a0 = (double)param_1[0x7f] - (double)param_1[0x69];
    dVar54 = local_490 * local_490 + local_4a0 * local_4a0 + local_498 * local_498;
    if (9.99999993922529e-09 < dVar54) {
      dVar54 = 1.0 / SQRT(dVar54);
      local_4a0 = local_4a0 * dVar54;
      local_498 = local_498 * dVar54;
      local_490 = local_490 * dVar54;
    }
    if ((longlong)(int)param_1[0xe9] != 0) {
      lVar29 = param_1[0xe8] + 0xb8;
      lVar14 = (longlong)(int)param_1[0xe9] << 8;
      do {
        lVar15 = FUN_14485cccc(lVar29);
        if ((*(int *)(lVar29 + 0x24) == 0) || (uVar27 = *(uint *)(lVar29 + 0x20), (int)uVar27 < 0))
        {
LAB_143dc4fa6:
          lVar30 = 0;
        }
        else {
          lVar30 = 0;
          if ((int)uVar27 < DAT_14c9647dc) {
            plVar31 = (longlong *)
                      ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8));
            if (((plVar31 == (longlong *)0x0) || ((int)plVar31[2] != *(int *)(lVar29 + 0x24))) ||
               ((*(uint *)(plVar31 + 1) & 0x10200000) != 0)) goto LAB_143dc4fa6;
            lVar30 = *plVar31;
          }
        }
        if (lVar15 != 0 || lVar30 != 0) {
          (**(code **)(*param_1 + 0x360))(param_1);
        }
        lVar29 = lVar29 + 0x100;
        lVar14 = lVar14 + -0x100;
      } while (lVar14 != 0);
    }
    memset(&local_2f8,0,0x100);
    local_228 = 0xffffffff;
    local_2f8._4_4_ = 0x3f800000;
    local_254 = 0xffffffff;
    plVar31 = param_1 + 0xe6;
    uVar27 = *(uint *)(param_1 + 0xe7);
    if (0 < (int)uVar27) {
      lVar29 = 0;
      lVar14 = 0;
      do {
        plVar16 = (longlong *)FUN_14485cccc(*plVar31 + lVar29 + 0xb8);
        if (plVar16 != (longlong *)0x0) {
          uVar17 = FUN_140bd76f6();
          plVar16 = (longlong *)(**(code **)(*plVar16 + 0x288))(plVar16,uVar17);
          if (plVar16 != (longlong *)0x0) {
            uVar17 = FUN_140bd76f6();
            plVar18 = (longlong *)FUN_144718840(plVar16,uVar17);
            if (((plVar16 != plVar18) && (plVar18 != (longlong *)0x0)) &&
               (cVar10 = (**(code **)(*plVar18 + 0x10))(plVar18,param_1 + 8,*plVar31 + lVar29),
               cVar10 != '\0')) {
              pbVar1 = (byte *)(param_1[0xe6] + 0xad + lVar29);
              *pbVar1 = *pbVar1 | 1;
              fVar37 = *(float *)(param_1[0xe6] + 8 + lVar29);
              uVar27 = *(uint *)(param_1 + 0xe7);
              param_1 = local_500;
              if ((-1.0 < fVar37) && (0 < (int)uVar27)) {
                iVar12 = -uVar27;
                lVar14 = (ulonglong)uVar27 << 8;
                uVar36 = (ulonglong)uVar27;
                do {
                  lVar14 = lVar14 + -0x100;
                  lVar29 = *plVar31;
                  if (fVar37 < *(float *)(lVar29 + 8 + lVar14)) {
                    uVar27 = *(uint *)(local_500 + 0xe7);
                    if (uVar36 != uVar27) {
                      memmove((void *)(lVar29 + lVar14),(void *)(lVar29 + lVar14 + 0x100),
                              (longlong)(int)(uVar27 + iVar12) << 8);
                      uVar27 = *(uint *)(local_500 + 0xe7);
                    }
                    *(uint *)(local_500 + 0xe7) = uVar27 - 1;
                    FUN_1400911c0(plVar31);
                  }
                  iVar12 = iVar12 + 1;
                  bVar35 = 1 < uVar36;
                  uVar36 = uVar36 - 1;
                } while (bVar35);
                uVar27 = *(uint *)(local_500 + 0xe7);
                param_1 = local_500;
              }
              break;
            }
          }
        }
        lVar14 = lVar14 + 1;
        uVar27 = *(uint *)(param_1 + 0xe7);
        lVar29 = lVar29 + 0x100;
      } while (lVar14 < (int)uVar27);
    }
    plVar16 = param_1 + 0x69;
    plVar18 = param_1 + 0x7f;
    if (uVar27 == 0) {
      pcVar23 = (char *)param_1;
      FUN_14019cdec(param_1,plVar16,plVar18,&local_2f8);
    }
    else {
      local_4b0 = param_1 + 0xe;
      local_4e0 = &local_390;
      local_4a8 = param_1 + 0x13;
      local_4d8 = alStack_388;
      puVar33 = (undefined8 *)(*plVar31 + 0xb8);
      dVar54 = (double)((longlong)(int)uVar27 << 8);
      local_4c8 = 0;
      local_4c0 = plVar18;
      local_4b8 = plVar16;
      do {
        puVar25 = (uint *)(puVar33 + 4);
        if (((((((*(int *)((longlong)puVar33 + 0x24) != 0) && (uVar27 = *puVar25, -1 < (int)uVar27))
               && ((int)uVar27 < DAT_14c9647dc)) &&
              ((plVar31 = (longlong *)
                          ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8)),
               plVar31 != (longlong *)0x0 && ((int)plVar31[2] == *(int *)((longlong)puVar33 + 0x24))
               ))) && ((*(uint *)(plVar31 + 1) & 0x10200000) == 0)) && (*plVar31 != 0)) ||
           (lVar14 = FUN_14485cccc(puVar33), lVar14 == param_1[4])) {
          _Src = puVar33 + -0x17;
          if (0 < (int)param_1[0xf]) {
            local_4f8 = dVar54;
            memcpy(&local_1f8,_Src,0xb8);
            dVar54 = local_4f8;
            uVar17 = *puVar33;
            local_488 = (code *)puVar33[1];
            lStack_480 = puVar33[2];
            uVar13 = *(undefined4 *)(puVar33 + 3);
            uVar2 = *(undefined1 *)((longlong)puVar33 + 0x1c);
            local_115 = (undefined5)puVar33[8];
            uStack_110 = (undefined3)((ulonglong)puVar33[8] >> 0x28);
            uStack_125 = (undefined5)puVar33[6];
            uStack_120 = (undefined3)((ulonglong)puVar33[6] >> 0x28);
            uStack_11d = (undefined5)puVar33[7];
            uStack_118 = (undefined3)((ulonglong)puVar33[7] >> 0x28);
            uStack_135 = (undefined5)*(undefined8 *)puVar25;
            uStack_130 = (undefined3)((ulonglong)*(undefined8 *)puVar25 >> 0x28);
            uStack_12d = (undefined5)puVar33[5];
            uStack_128 = (undefined3)((ulonglong)puVar33[5] >> 0x28);
            memcpy(local_448,&local_1f8,0xb8);
            param_1 = local_500;
            *local_4d8 = (longlong)local_488;
            local_4d8[1] = lStack_480;
            local_350 = CONCAT35(uStack_110,local_115);
            local_373 = local_138;
            uStack_370 = uStack_135;
            uStack_36b = uStack_130;
            uStack_368 = uStack_12d;
            local_363 = uStack_128;
            uStack_360 = uStack_125;
            uStack_35b = uStack_120;
            uStack_358 = uStack_11d;
            uStack_353 = uStack_118;
            local_390 = uVar17;
            local_378 = uVar13;
            local_374 = uVar2;
            FUN_1447cd2ec(local_4b0,local_448);
          }
          local_4f8 = (double)CONCAT71(local_4f8._1_7_,*(byte *)((longlong)puVar33 + -0xb));
          if ((*(byte *)((longlong)puVar33 + -0xb) & 1) == 0) {
            (**(code **)(*param_1 + 0x358))(param_1,_Src,&local_4a0);
          }
          else {
            memcpy(&local_2f8,_Src,0x100);
            uVar17 = (**(code **)(*param_1 + 0x350))(param_1,_Src);
            local_4c8 = CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
          }
          lVar14 = DAT_14cb24ad0;
          if (DAT_14cb24ad0 == 0) {
            plVar31 = (longlong *)FUN_145a7712c();
            lVar14 = plVar31[0x22];
            if (plVar31[0x22] == 0) {
              (**(code **)(*plVar31 + 1000))(plVar31);
              lVar14 = plVar31[0x22];
            }
          }
          DAT_14cb24ad0 = lVar14;
          uVar17 = *(undefined8 *)((longlong)local_500 + 0xdc);
          uVar13 = *(undefined4 *)(DAT_14cb24ad0 + 0x4c);
          memcpy(local_448,_Src,0xb8);
          param_1 = local_500;
          *local_4e0 = 0;
          local_4e0[1] = 0;
          local_4e0[2] = 0;
          local_390 = *puVar33;
          lVar14 = puVar33[2];
          *local_4d8 = puVar33[1];
          local_4d8[1] = lVar14;
          local_378 = *(undefined4 *)(puVar33 + 3);
          local_374 = *(undefined1 *)((longlong)puVar33 + 0x1c);
          local_350 = puVar33[8];
          uStack_360 = (undefined5)puVar33[6];
          uStack_35b = (undefined3)((ulonglong)puVar33[6] >> 0x28);
          uStack_358 = (undefined5)puVar33[7];
          uStack_353 = (undefined3)((ulonglong)puVar33[7] >> 0x28);
          uStack_370 = (undefined5)*(undefined8 *)puVar25;
          uStack_36b = (undefined3)((ulonglong)*(undefined8 *)puVar25 >> 0x28);
          uStack_368 = (undefined5)puVar33[5];
          local_363 = (undefined3)((ulonglong)puVar33[5] >> 0x28);
          local_338 = (code *)0x0;
          local_328 = (longlong *)0x0;
          local_33c = 0;
          local_1f8 = (code *)local_500[0x12];
          pdStack_1c0 = (double *)0x0;
          plVar31 = (longlong *)local_500[0x19];
          if ((longlong *)local_500[0x19] == (longlong *)0x0) {
            plVar31 = local_4a8;
          }
          local_348 = uVar13;
          local_344 = uVar17;
          FUN_1400709d4(&dStack_1f0,plVar31,(int)local_500[0x1a],0);
          local_488 = (code *)0x0;
          local_478 = (longlong *)0x0;
          plVar31 = (longlong *)FUN_14001cc68(0x50,8);
          *plVar31 = (longlong)&PTR_FUN_14b415180;
          plVar31[1] = (longlong)local_1f8;
          plVar31[8] = 0;
          pdVar28 = pdStack_1c0;
          if (pdStack_1c0 == (double *)0x0) {
            pdVar28 = &dStack_1f0;
          }
          local_478 = plVar31;
          FUN_1400709d4(plVar31 + 2,pdVar28,(ulonglong)local_1b8 & 0xffffffff,0);
          uVar9 = uStack_300;
          uVar8 = local_308;
          uVar7 = uStack_310;
          lVar29 = local_318;
          uVar17 = uStack_320;
          plVar16 = local_328;
          lVar14 = lStack_330;
          pcVar6 = local_338;
          if (plVar31 != (longlong *)&DAT_fffffffffffffff8) {
            local_488 = FUN_143dce83a;
          }
          local_108 = local_308;
          uStack_100 = uStack_300;
          uStack_118 = (undefined3)local_318;
          local_115 = (undefined5)((ulonglong)local_318 >> 0x18);
          uStack_110 = (undefined3)uStack_310;
          uStack_10d = (undefined5)((ulonglong)uStack_310 >> 0x18);
          uStack_128 = SUB83(local_328,0);
          uStack_125 = (undefined5)((ulonglong)local_328 >> 0x18);
          uStack_120 = (undefined3)uStack_320;
          uStack_11d = (undefined5)((ulonglong)uStack_320 >> 0x18);
          local_138 = SUB83(local_338,0);
          uStack_135 = (undefined5)((ulonglong)local_338 >> 0x18);
          uStack_130 = (undefined3)lStack_330;
          uStack_12d = (undefined5)((ulonglong)lStack_330 >> 0x18);
          local_308 = local_458;
          uStack_300 = uStack_450;
          local_318 = local_468;
          uStack_310 = uStack_460;
          local_328 = local_478;
          uStack_320 = uStack_470;
          local_338 = local_488;
          lStack_330 = lStack_480;
          local_488 = pcVar6;
          lStack_480 = lVar14;
          local_478 = plVar16;
          uStack_470 = uVar17;
          local_458 = uVar8;
          uStack_450 = uVar9;
          local_468 = lVar29;
          uStack_460 = uVar7;
          if (pcVar6 != (code *)0x0) {
            if (plVar16 == (longlong *)0x0) {
              plVar16 = &local_468;
            }
            (**(code **)(*plVar16 + 0x10))();
          }
          if (pdStack_1c0 != (double *)0x0) {
            FUN_1400020a8();
          }
          FUN_14079f6b4(local_448);
          if (local_338 != (code *)0x0) {
            plVar31 = local_328;
            if (local_328 == (longlong *)0x0) {
              plVar31 = &local_318;
            }
            (**(code **)(*plVar31 + 0x10))();
          }
          if (((ulonglong)local_4f8 & 1) != 0) break;
        }
        puVar33 = puVar33 + 0x20;
        dVar54 = (double)((longlong)dVar54 - 0x100);
      } while (dVar54 != 0.0);
      plVar16 = local_4b8;
      plVar18 = local_4c0;
      pcVar23 = (char *)param_1;
      FUN_14019cdec(param_1,local_4b8,local_4c0,&local_2f8);
      if ((local_4c8 & 1) != 0) {
        uVar27 = *(uint *)(param_1 + 0x20);
        goto LAB_143dc56a5;
      }
    }
    uVar27 = *(uint *)(param_1 + 0x20);
    if ((uVar27 >> 0x11 & 1) != 0) {
      plVar16[2] = plVar18[2];
      lVar14 = plVar18[1];
      *plVar16 = *plVar18;
      plVar16[1] = lVar14;
    }
  }
LAB_143dc56a5:
  uVar13 = SUB84(pcVar23,0);
  if ((uVar27 & 1) != 0) {
    iVar12 = *(int *)(param_1[0x10] + 0x68);
    if (0 < (longlong)iVar12) {
      lVar14 = 0;
      do {
        uVar13 = SUB84(pcVar23,0);
        uVar27 = *(uint *)(param_1 + 0x20);
        if ((uVar27 & 1) == 0) goto LAB_143dc5b69;
        lVar29 = param_1[0x10];
        plVar31 = *(longlong **)(lVar29 + 0x60);
        fVar37 = *(float *)((longlong)param_1 + 0x31c) +
                 *(float *)((longlong)plVar31 + lVar14 * 0xc);
        pcVar23 = (char *)plVar31;
        if (((fVar37 < (float)dVar38) && (*(float *)(param_1 + 0x67) <= fVar37)) &&
           ((longlong)*(int *)(lVar29 + 0x48) != 0)) {
          plVar16 = (longlong *)(*(longlong *)(lVar29 + 0x40) + 8);
          lVar29 = (longlong)*(int *)(lVar29 + 0x48) * 0x28;
          do {
            if (*(int *)((longlong)plVar16 + -4) == 0) {
LAB_143dc5884:
              if (*plVar16 != 0) {
                pcVar23 = (char *)plVar16;
                plVar18 = (longlong *)FUN_140007850();
                cVar10 = (*(code *)PTR_FUN_14c758760)();
                if ((plVar18 == (longlong *)0x0) || (cVar10 == '\0')) {
                  if (plVar18 != (longlong *)0x0) {
                    uVar27 = *(uint *)((longlong)plVar18 + 0xc);
                    goto LAB_143dc58ec;
                  }
                  plVar16[-1] = 0;
                }
                else {
                  uVar27 = *(uint *)((longlong)plVar18 + 0xc);
                  if ((int)uVar27 < DAT_14c9647dc) {
                    lVar15 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
                  }
                  else {
                    lVar15 = 0;
                  }
                  pcVar23 = (char *)(ulonglong)*(uint *)(lVar15 + 8);
                  if ((*(uint *)(lVar15 + 8) & 0x8400000) == 0) {
LAB_143dc58ec:
                    *(uint *)(plVar16 + -1) = uVar27;
                    if ((int)uVar27 < DAT_14c9647dc) {
                      pcVar23 = (char *)(ulonglong)(uVar27 & 0xffff);
                      lVar15 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
                    }
                    else {
                      lVar15 = 0;
                    }
                    iVar11 = *(int *)(lVar15 + 0x10);
                    if (*(int *)(lVar15 + 0x10) == 0) {
                      LOCK();
                      iVar11 = DAT_14c964868 + 1;
                      UNLOCK();
                      iVar32 = DAT_14c964868 + 1;
                      bVar35 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar11;
                      if (bVar35) {
                        pcVar23 = ".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp";
                        local_4f8 = (double)CONCAT44(local_4f8._4_4_,iVar32);
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar32);
                        iVar32 = local_4f8._0_4_;
                      }
                      LOCK();
                      iVar11 = *(int *)(lVar15 + 0x10);
                      bVar35 = iVar11 == 0;
                      if (bVar35) {
                        *(int *)(lVar15 + 0x10) = iVar32;
                        iVar11 = 0;
                      }
                      UNLOCK();
                      if (bVar35) {
                        iVar11 = iVar32;
                      }
                    }
                    *(int *)((longlong)plVar16 + -4) = iVar11;
                  }
                  if ((*(uint *)(plVar18 + 1) >> 0x1e & 1) == 0) goto LAB_143dc578b;
                }
              }
            }
            else {
              uVar27 = *(uint *)(plVar16 + -1);
              pcVar23 = (char *)(ulonglong)uVar27;
              if (((int)uVar27 < 0) || (DAT_14c9647dc <= (int)uVar27)) goto LAB_143dc5884;
              pcVar23 = (char *)(ulonglong)(uVar27 >> 0x10);
              puVar33 = (undefined8 *)
                        ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (longlong)pcVar23 * 8));
              if ((puVar33 == (undefined8 *)0x0) ||
                 (((*(int *)(puVar33 + 2) != *(int *)((longlong)plVar16 + -4) ||
                   ((*(uint *)(puVar33 + 1) & 0x10200000) != 0)) ||
                  (plVar18 = (longlong *)*puVar33, plVar18 == (longlong *)0x0))))
              goto LAB_143dc5884;
LAB_143dc578b:
              if (DAT_14c949118 == 0) {
                local_1f8 = FUN_140631fbe;
                lVar15 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                DAT_14c949118 = lVar15;
                FUN_1446f470e(&local_2f8,L"Class",1);
                local_520 = &local_1f8;
                local_528 = &LAB_146891e90;
                local_530 = (code *)&LAB_146273097;
                local_540 = L"Engine";
                local_538 = (wchar_t *)CONCAT44(local_538._4_4_,199);
                local_548 = 0x20;
                local_550 = 0x10000000;
                local_558._0_4_ = 8;
                FUN_14574b4b2(lVar15);
                DAT_14c949118 = lVar15;
                if (DAT_14c951858 == 0) {
                  local_448._0_8_ = FUN_1449e2820;
                  local_510 = FUN_14081d0ea;
                  local_518 = FUN_14081d0ea;
                  local_520 = (code **)local_448;
                  local_528 = &LAB_1468c5283;
                  local_530 = FUN_142809da0;
                  local_538 = L"Engine";
                  local_540 = (wchar_t *)0x400000000;
                  local_548 = CONCAT44(local_548._4_4_,0x10000000);
                  local_550 = 8;
                  local_558._0_4_ = 0x50;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                lVar30 = DAT_14c951858;
                lVar15 = DAT_14c949118;
                uVar17 = FUN_1449e2fb2();
                local_558 = L"Class";
                FUN_14574b446(uVar17,lVar15,lVar30,L"/Script/CoreUObject");
                param_1 = local_500;
              }
              pcVar23 = (char *)plVar18[2];
              if (((*(int *)(DAT_14c949118 + 0x38) <= (int)*(longlong *)((longlong)pcVar23 + 0x38))
                  && (pcVar23 = *(char **)((longlong)pcVar23 + 0x30),
                     *(longlong *)((longlong)pcVar23 + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8)
                     == DAT_14c949118 + 0x30)) &&
                 ((lVar15 = FUN_145a557f0(), lVar15 != 0 &&
                  ((pcVar23 = (char *)(longlong)*(int *)(lVar15 + 0x38),
                   *(int *)(lVar15 + 0x38) <= (int)plVar18[7] &&
                   (*(longlong *)(plVar18[6] + (longlong)pcVar23 * 8) == lVar15 + 0x30)))))) {
                plVar34 = (longlong *)plVar18[0x22];
                if (plVar34 == (longlong *)0x0) {
                  pcVar23 = (char *)plVar18;
                  (**(code **)(*plVar18 + 1000))();
                  plVar34 = (longlong *)plVar18[0x22];
                  if (plVar34 == (longlong *)0x0) goto LAB_143dc5930;
                }
                pcVar23 = (char *)plVar34[2];
                plVar18 = (longlong *)
                          FUN_1400796d0(pcVar23,*(undefined8 *)
                                                 ((longlong)plVar31 + lVar14 * 0xc + 4),1);
                if ((plVar18 != (longlong *)0x0) &&
                   (pcVar23 = (char *)plVar18, cVar10 = FUN_1488e1db4(), cVar10 != '\0')) {
                  local_448._0_8_ = param_1;
                  lVar15 = plVar34[5];
                  plVar34[5] = (longlong)local_500;
                  pcVar23 = (char *)plVar34;
                  (**(code **)(*plVar34 + 0x248))(plVar34,plVar18,local_448);
                  plVar34[5] = lVar15;
                  param_1 = local_500;
                }
              }
            }
LAB_143dc5930:
            plVar16 = plVar16 + 5;
            lVar29 = lVar29 + -0x28;
          } while (lVar29 != 0);
        }
        uVar13 = SUB84(pcVar23,0);
        lVar14 = lVar14 + 1;
      } while (lVar14 != iVar12);
      uVar27 = *(uint *)(param_1 + 0x20);
    }
LAB_143dc5b69:
    if ((((uVar27 >> 0x10 & 1) == 0) && ((*(byte *)(param_1[0x10] + 0x368) & 0x40) != 0)) &&
       (*(float *)(param_1[0x10] + 0x36c) <= *(float *)((longlong)param_1 + 0x324))) {
      uVar27 = uVar27 | 0x10000;
      *(uint *)(param_1 + 0x20) = uVar27;
    }
    if ((~uVar27 & 0x21) == 0) {
      plVar31 = param_1;
      (**(code **)(*param_1 + 0x2e8))(param_1,(uVar27 & 0x40) >> 6);
      uVar13 = SUB84(plVar31,0);
      uVar27 = *(uint *)(param_1 + 0x20);
    }
  }
  if ((uVar27 & 0x10) != 0) goto LAB_143dc6487;
  lVar14 = param_1[0x10];
  auVar48 = *(undefined1 (*) [16])(param_1 + 0x82);
  auVar40 = divpd(auVar48,_DAT_1499387d0);
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_1[0x84];
  auVar47 = divpd(auVar47,_DAT_1499387d0);
  auVar40 = roundpd(auVar40,auVar40,3);
  auVar47 = roundpd(auVar47,auVar47,3);
  dVar61 = (auVar48._0_8_ - auVar40._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar67 = (auVar48._8_8_ - auVar40._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar70 = ((double)param_1[0x84] - auVar47._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar73 = (0.0 - auVar47._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar38 = sin(dVar61);
  dVar54 = sin(dVar67);
  dVar39 = sin(dVar70);
  sin(dVar73);
  dVar61 = cos(dVar61);
  dVar67 = cos(dVar67);
  dVar70 = cos(dVar70);
  cos(dVar73);
  dVar62 = -(dVar67 * dVar38 * dVar39) + dVar54 * dVar61 * dVar70;
  dVar68 = dVar54 * dVar38 * dVar39 + dVar67 * dVar61 * dVar70;
  dVar73 = dVar38 * dVar54 * dVar70 - dVar61 * dVar67 * dVar39;
  dVar61 = -(dVar38 * dVar67 * dVar70) - dVar61 * dVar54 * dVar39;
  auVar48 = *(undefined1 (*) [16])(lVar14 + 0xe0);
  dVar38 = auVar48._0_8_;
  dVar39 = auVar48._8_8_;
  dVar54 = SUB168(*(undefined1 (*) [16])(lVar14 + 0xf0),0);
  auVar48 = minpd(auVar48,_DAT_149934d80);
  auVar47 = minpd(*(undefined1 (*) [16])(lVar14 + 0xf0),ZEXT816(0x3ff0000000000000));
  auVar40._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
  auVar40._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
  iVar12 = movmskpd(extraout_EAX,auVar40);
  auVar48._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
  auVar48._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
  uVar27 = movmskpd(uVar13,auVar48);
  if ((uVar27 & 0x3fffffff) == 0 && iVar12 == 0) {
    dVar38 = *(double *)(lVar14 + 0xa0);
    dVar67 = *(double *)(lVar14 + 0xa8);
    dVar70 = *(double *)(lVar14 + 0xb0);
    dVar60 = *(double *)(lVar14 + 0xb8);
    dVar54 = SUB168(*(undefined1 (*) [16])(lVar14 + 0xc0),0);
    dVar39 = SUB168(*(undefined1 (*) [16])(lVar14 + 0xc0),8);
    local_448._0_8_ =
         dVar67 * dVar62 * -1.0 + dVar70 * dVar61 + dVar73 * dVar60 * 1.0 + dVar68 * dVar38;
    local_448._8_8_ =
         dVar38 * dVar62 * 1.0 + dVar60 * dVar61 + dVar73 * dVar70 * -1.0 + dVar68 * dVar67;
    local_438._0_8_ =
         dVar60 * dVar62 * 1.0 + ((dVar73 * dVar67 * 1.0 + dVar68 * dVar70) - dVar61 * dVar38);
    local_438._8_8_ =
         dVar70 * dVar62 * -1.0 + ((dVar73 * dVar38 * -1.0 + dVar68 * dVar60) - dVar61 * dVar67);
    dVar38 = *(double *)(lVar14 + 0xd0) * 1.0;
    dVar70 = dVar39 * dVar73 - dVar61 * dVar54;
    dVar60 = dVar38 * dVar61 - dVar62 * dVar39;
    dVar67 = dVar54 * dVar62 - dVar73 * dVar38;
    dVar60 = dVar60 + dVar60;
    dVar67 = dVar67 + dVar67;
    dVar70 = dVar70 + dVar70;
    dVar38 = (double)param_1[0x81] + (dVar67 * dVar73 - dVar61 * dVar60) + dVar68 * dVar70 + dVar38;
    dVar54 = (double)param_1[0x7f] + (dVar70 * dVar61 - dVar62 * dVar67) + dVar68 * dVar60 + dVar54;
    dVar39 = (double)param_1[0x80] + (dVar60 * dVar62 - dVar70 * dVar73) + dVar68 * dVar67 + dVar39;
  }
  else {
    dVar67 = dVar61 + dVar61;
    dVar70 = dVar62 + dVar62;
    dVar60 = dVar73 * (dVar73 + dVar73);
    local_2f8 = (code *)(1.0 - (dVar62 * dVar70 + dVar61 * dVar67));
    dStack_2d0 = 1.0 - (dVar62 * dVar70 + dVar60);
    local_2a8 = 1.0 - (dVar60 + dVar61 * dVar67);
    dStack_2b0 = (dVar73 + dVar73) * dVar68;
    dStack_2f0 = dVar67 * dVar73 + dVar70 * dVar68;
    local_2c8 = dVar70 * dVar61 + dStack_2b0;
    local_2b8 = dVar67 * dVar68 + dVar73 * dVar70;
    local_2d8 = dVar67 * dVar73 - dVar70 * dVar68;
    dStack_2b0 = dVar70 * dVar61 - dStack_2b0;
    local_2e8 = dVar73 * dVar70 - dVar67 * dVar68;
    uStack_2e0 = 0;
    uStack_2c0 = 0;
    uStack_2a0 = 0;
    uStack_280 = 0x3ff0000000000000;
    dVar67 = *(double *)(lVar14 + 0xa0);
    dVar70 = *(double *)(lVar14 + 0xa8);
    dVar61 = *(double *)(lVar14 + 0xb0);
    dVar73 = dVar70 + dVar70;
    dVar62 = dVar61 + dVar61;
    dVar68 = dVar67 * (dVar67 + dVar67);
    local_1f8 = (code *)((1.0 - (dVar61 * dVar62 + dVar70 * dVar73)) * dVar38);
    dStack_1d0 = (1.0 - (dVar61 * dVar62 + dVar68)) * dVar39;
    local_1a8 = (1.0 - (dVar68 + dVar70 * dVar73)) * dVar54;
    dVar63 = *(double *)(lVar14 + 0xa0) * dVar62;
    dVar61 = *(double *)(lVar14 + 0xb8);
    dVar68 = dVar62 * dVar61;
    dVar60 = (dVar67 + dVar67) * *(double *)(lVar14 + 0xb8);
    dVar61 = dVar73 * dVar61;
    dStack_1f0 = (dVar73 * dVar67 + dVar68) * dVar38;
    local_1c8 = (dVar62 * dVar70 + dVar60) * dVar39;
    local_1b8 = (dVar61 + dVar63) * dVar54;
    local_1d8 = (dVar73 * dVar67 - dVar68) * dVar39;
    dStack_1b0 = (dVar62 * dVar70 - dVar60) * dVar54;
    local_1e8 = (dVar63 - dVar61) * dVar38;
    uStack_1e0 = 0;
    pdStack_1c0 = (double *)0x0;
    uStack_1a0 = 0;
    local_198 = *(undefined8 *)(lVar14 + 0xc0);
    uStack_190 = *(undefined8 *)(lVar14 + 200);
    local_188 = *(undefined8 *)(lVar14 + 0xd0);
    uStack_180 = 0x3ff0000000000000;
    local_298 = (double)param_1[0x7f];
    dStack_290 = (double)param_1[0x80];
    local_288 = (double)param_1[0x81];
    FUN_1447fea8d(local_448);
    auVar48 = _DAT_149934d80;
    local_4f8 = (double)local_438._0_8_;
    dVar61 = (double)local_438._0_8_ * (double)local_438._0_8_ +
             (double)local_448._0_8_ * (double)local_448._0_8_ +
             (double)local_448._8_8_ * (double)local_448._8_8_;
    local_4d8 = local_428;
    dVar67 = local_418 * local_418 + (double)local_428 * (double)local_428 + local_420 * local_420;
    local_4e0 = local_3f8;
    dVar70 = (double)local_3f8 * (double)local_3f8 + local_408 * local_408 + local_400 * local_400;
    uVar36 = -(ulonglong)(0.0 <= dVar61 + -9.99999993922529e-09);
    dVar61 = (double)(~uVar36 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar61)) & uVar36);
    uVar36 = -(ulonglong)(0.0 <= dVar67 + -9.99999993922529e-09);
    dVar67 = (double)(~uVar36 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar67)) & uVar36);
    uVar36 = -(ulonglong)(0.0 <= dVar70 + -9.99999993922529e-09);
    dVar70 = (double)(~uVar36 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar70)) & uVar36);
    auVar45._8_8_ = -(ulonglong)(0.0 <= dVar39);
    auVar45._0_8_ = -(ulonglong)(0.0 <= dVar38);
    auVar40 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar45);
    dVar38 = (double)(~-(ulonglong)(0.0 <= dVar54) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= dVar54) & 0x3ff0000000000000);
    dVar54 = auVar40._0_8_;
    local_448._8_8_ = (double)local_448._8_8_ * dVar61 * dVar54;
    local_448._0_8_ = (double)local_448._0_8_ * dVar61 * dVar54;
    local_438._0_8_ = dVar61 * (double)local_438._0_8_ * dVar54;
    dVar54 = auVar40._8_8_;
    local_418 = dVar67 * local_418 * dVar54;
    local_420 = local_420 * dVar67 * dVar54;
    local_428 = (longlong *)(dVar54 * (double)local_428 * dVar67);
    local_3f8 = (undefined8 *)(dVar70 * (double)local_3f8 * dVar38);
    local_400 = local_400 * dVar70 * dVar38;
    local_408 = dVar38 * local_408 * dVar70;
    FUN_14481fd10(&local_138,local_448);
    dVar54 = (double)CONCAT53(uStack_135,local_138);
    dVar39 = (double)CONCAT53(uStack_12d,uStack_130);
    dVar61 = (double)CONCAT53(uStack_125,uStack_128);
    auVar5._8_3_ = uStack_120;
    auVar5._0_8_ = dVar61;
    auVar5._11_5_ = uStack_11d;
    dVar38 = auVar5._8_8_;
    dVar67 = dVar61 * dVar61 + dVar54 * dVar54;
    dVar70 = dVar38 * dVar38 + dVar39 * dVar39;
    auVar57._0_8_ = dVar67 + dVar70;
    auVar57._8_8_ = dVar67 + dVar70;
    auVar46._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_);
    auVar46._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_);
    auVar40 = sqrtpd(auVar57,auVar57);
    auVar48 = divpd(auVar48,auVar40);
    auVar59._0_8_ = auVar48._0_8_ * dVar61;
    auVar59._8_8_ = auVar48._8_8_ * dVar38;
    local_448._0_8_ =
         (ulonglong)(dVar54 * auVar48._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_);
    local_448._8_8_ =
         (ulonglong)(dVar39 * auVar48._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_);
    local_438 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar59,auVar46);
    dVar38 = local_3d8;
    dVar54 = local_3e8;
    dVar39 = dStack_3e0;
  }
  pwVar24 = (wchar_t *)local_448;
  uVar13 = FUN_1448052ee(local_448,&local_2f8);
  if (param_1[0xd2] == 0) {
LAB_143dc5f80:
    bVar35 = false;
  }
  else {
    uVar36 = DAT_149931180;
    uVar3 = DAT_149931180._8_8_;
    dVar61 = (double)DAT_149e1ecd0;
    dVar67 = DAT_149e1ecd0._8_8_;
    auVar74._8_8_ =
         -(ulonglong)(dVar67 < (double)((ulonglong)((double)param_1[0xd9] - DAT_14c8463d8) & uVar3))
    ;
    auVar74._0_8_ =
         -(ulonglong)
          (dVar61 < (double)((ulonglong)((double)param_1[0xd8] - DAT_14c8463d0) & uVar36));
    uVar27 = movmskpd(uVar13,auVar74);
    auVar64._8_8_ =
         -(ulonglong)(dVar67 < (double)((ulonglong)((double)param_1[0xdb] - DAT_14c8463e8) & uVar3))
    ;
    auVar64._0_8_ =
         -(ulonglong)
          (dVar61 < (double)((ulonglong)((double)param_1[0xda] - DAT_14c8463e0) & uVar36));
    iVar12 = movmskpd((int)pwVar24,auVar64);
    uVar22 = iVar12 << 2 | uVar27;
    if (uVar22 == 0) goto LAB_143dc5f80;
    auVar53._8_8_ =
         -(ulonglong)(dVar67 < (double)((ulonglong)((double)param_1[0xd9] + DAT_14c8463d8) & uVar3))
    ;
    auVar53._0_8_ =
         -(ulonglong)
          (dVar61 < (double)((ulonglong)((double)param_1[0xd8] + DAT_14c8463d0) & uVar36));
    iVar12 = movmskpd(uVar27,auVar53);
    auVar56._8_8_ =
         -(ulonglong)(dVar67 < (double)((ulonglong)((double)param_1[0xdb] + DAT_14c8463e8) & uVar3))
    ;
    auVar56._0_8_ =
         -(ulonglong)
          (dVar61 < (double)((ulonglong)((double)param_1[0xda] + DAT_14c8463e0) & uVar36));
    uVar27 = movmskpd(uVar22,auVar56);
    if ((uVar27 & 0x3fffffff) == 0 && iVar12 == 0) goto LAB_143dc5f80;
    auVar4._8_8_ = dStack_2f0;
    auVar4._0_8_ = local_2f8;
    auVar48 = divpd(auVar4,_DAT_1499387d0);
    auVar49._8_8_ = 0;
    auVar49._0_8_ = local_2e8;
    auVar40 = divpd(auVar49,_DAT_1499387d0);
    auVar48 = roundpd(auVar48,auVar48,3);
    auVar40 = roundpd(auVar40,auVar40,3);
    dVar73 = ((double)local_2f8 - auVar48._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar62 = (dStack_2f0 - auVar48._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar68 = (local_2e8 - auVar40._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar60 = (0.0 - auVar40._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar61 = sin(dVar73);
    dVar67 = sin(dVar62);
    dVar70 = sin(dVar68);
    sin(dVar60);
    dVar73 = cos(dVar73);
    dVar62 = cos(dVar62);
    dVar68 = cos(dVar68);
    cos(dVar60);
    dVar63 = -(dVar62 * dVar61 * dVar70) + dVar67 * dVar73 * dVar68;
    dVar69 = dVar67 * dVar61 * dVar70 + dVar62 * dVar73 * dVar68;
    dVar60 = dVar61 * dVar67 * dVar68 - dVar73 * dVar62 * dVar70;
    dVar62 = -(dVar61 * dVar62 * dVar68) - dVar73 * dVar67 * dVar70;
    dVar61 = (double)param_1[0xd8];
    dVar67 = (double)param_1[0xd9];
    dVar70 = (double)param_1[0xda];
    dVar73 = (double)param_1[0xdb];
    local_448._0_8_ =
         dVar67 * dVar63 * -1.0 + dVar70 * dVar62 + dVar73 * dVar60 * 1.0 + dVar61 * dVar69;
    local_448._8_8_ =
         dVar61 * dVar63 * 1.0 + dVar73 * dVar62 + dVar70 * dVar60 * -1.0 + dVar67 * dVar69;
    local_438._0_8_ =
         dVar73 * dVar63 * 1.0 + ((dVar60 * dVar67 * 1.0 + dVar69 * dVar70) - dVar62 * dVar61);
    local_438._8_8_ =
         dVar70 * dVar63 * -1.0 + ((dVar60 * dVar61 * -1.0 + dVar69 * dVar73) - dVar62 * dVar67);
    lVar14 = param_1[0xd2];
    FUN_1448052ee(local_448,&local_1f8);
    local_138 = SUB83(dVar54,0);
    uStack_135 = (undefined5)((ulonglong)dVar54 >> 0x18);
    uStack_130 = SUB83(dVar39,0);
    uStack_12d = (undefined5)((ulonglong)dVar39 >> 0x18);
    uStack_128 = SUB83(dVar38,0);
    uStack_125 = (undefined5)((ulonglong)dVar38 >> 0x18);
    FUN_1412f6616(lVar14,&local_138,&local_1f8);
    bVar35 = true;
  }
  lVar14 = param_1[0xd5];
  if ((longlong)(int)lVar14 != 0) {
    lVar29 = param_1[0xd4];
    lVar15 = 0;
    do {
      lVar30 = *(longlong *)(lVar29 + lVar15);
      if ((lVar30 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
LAB_143dc5ff6:
        if (bVar35) {
          lVar21 = param_1[0xd2];
          if ((lVar21 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          if (lVar30 == lVar21) goto LAB_143dc615d;
        }
        if (*(longlong *)(lVar30 + 0x120) == 0) {
          local_448._8_8_ = dVar39;
          local_448._0_8_ = dVar54;
          local_438._0_8_ = dVar38;
          FUN_1412f6616(lVar30,local_448,&local_2f8);
        }
        else if ((*(byte *)(lVar30 + 0x1f8) & 8) != 0) {
          local_1e8 = local_2e8;
          dStack_1f0 = dStack_2f0;
          uVar36 = *(ulonglong *)(lVar30 + 0x38);
          local_1f8 = local_2f8;
          if (uVar36 < 0xffffffff00000000) {
            plVar31 = DAT_14c9980d0;
            if (DAT_14c9980d8 == 0) {
              plVar31 = (longlong *)0x0;
            }
            (**(code **)(*plVar31 + 0x58))(plVar31,lVar30,uVar36,6);
            param_1 = local_500;
          }
          else {
            uVar27 = (uint)uVar36;
            if ((-1 < (int)uVar27) && ((int)uVar27 < DAT_14c998088)) {
              puVar20 = DAT_14c998080;
              if (DAT_14c998080 == (undefined *)0x0) {
                puVar20 = &DAT_14c998070;
              }
              if ((*(uint *)(puVar20 + ((uint)(uVar36 >> 3) & 0xffffffc)) >> (uVar27 & 0x1f) & 1) !=
                  0) {
                lVar21 = DAT_14c998060 + (ulonglong)(uVar27 & 0x7fffffff) * 0x68;
                puVar25 = *(uint **)(lVar21 + 0x18);
                if (*(uint **)(lVar21 + 0x18) == (uint *)0x0) {
                  puVar25 = (uint *)(lVar21 + 8);
                }
                *puVar25 = *puVar25 | 0x40;
                *(byte *)(lVar21 + 0x60) = *(byte *)(lVar21 + 0x60) | 1;
              }
            }
          }
          *(double *)(lVar30 + 0x1c0) = local_1e8;
          *(code **)(lVar30 + 0x1b0) = local_1f8;
          *(double *)(lVar30 + 0x1b8) = dStack_1f0;
          auVar48 = *(undefined1 (*) [16])(lVar30 + 0x1b0);
          dVar67 = auVar48._0_8_;
          dVar70 = auVar48._8_8_;
          dVar61 = *(double *)(lVar30 + 0x1c0);
          pauVar19 = *(undefined1 (**) [16])(lVar30 + 0x230);
          if (pauVar19 == (undefined1 (*) [16])0x0) {
            pauVar19 = (undefined1 (*) [16])FUN_14001cc68(0x40,0x10);
            dVar73 = DAT_14c8463d8;
            *(double *)*pauVar19 = DAT_14c8463d0;
            *(double *)(*pauVar19 + 8) = dVar73;
            dVar73 = DAT_14c8463e8;
            *(double *)pauVar19[1] = DAT_14c8463e0;
            *(double *)(pauVar19[1] + 8) = dVar73;
            uVar17 = DAT_14c846500;
            *(undefined8 *)pauVar19[2] = DAT_14c8464f8;
            *(undefined8 *)(pauVar19[2] + 8) = uVar17;
            *(undefined8 *)pauVar19[3] = DAT_14c846508;
            *(undefined1 (**) [16])(lVar30 + 0x230) = pauVar19;
          }
          auVar40 = _DAT_1499387d0;
          if (((*(double *)pauVar19[2] != dVar67) || (NAN(*(double *)pauVar19[2]) || NAN(dVar67)))
             || ((*(double *)(pauVar19[2] + 8) != dVar70 ||
                 (((NAN(*(double *)(pauVar19[2] + 8)) || NAN(dVar70) ||
                   (*(double *)pauVar19[3] != dVar61)) ||
                  (NAN(*(double *)pauVar19[3]) || NAN(dVar61))))))) {
            auVar50._8_8_ = 0;
            auVar50._0_8_ = dVar61;
            dVar73 = (double)DAT_1499387d0;
            dVar62 = DAT_1499387d0._8_8_;
            auVar48 = divpd(auVar48,_DAT_1499387d0);
            auVar47 = divpd(auVar50,_DAT_1499387d0);
            auVar48 = roundpd(auVar48,auVar48,3);
            auVar47 = roundpd(auVar47,auVar47,3);
            auVar71._0_8_ = dVar67 - auVar48._0_8_ * dVar73;
            auVar71._8_8_ = dVar70 - auVar48._8_8_ * dVar62;
            auVar51._0_8_ = dVar61 - auVar47._0_8_ * dVar73;
            auVar51._8_8_ = 0.0 - auVar47._8_8_ * dVar62;
            auVar65._0_8_ = auVar71._0_8_ + dVar73;
            auVar65._8_8_ = auVar71._8_8_ + dVar62;
            auVar55._0_8_ = auVar51._0_8_ + dVar73;
            auVar55._8_8_ = auVar51._8_8_ + dVar62;
            auVar41._8_8_ = -(ulonglong)(0.0 <= auVar71._8_8_);
            auVar41._0_8_ = -(ulonglong)(0.0 <= auVar71._0_8_);
            auVar47 = blendvpd(auVar65,auVar71,auVar41);
            auVar42._8_8_ = -(ulonglong)(0.0 <= auVar51._8_8_);
            auVar42._0_8_ = -(ulonglong)(0.0 <= auVar51._0_8_);
            auVar48 = blendvpd(auVar55,auVar51,auVar42);
            auVar52._0_8_ = auVar47._0_8_ + -360.0;
            auVar52._8_8_ = auVar47._8_8_ + -360.0;
            auVar58._0_8_ = auVar48._0_8_ + -360.0;
            auVar58._8_8_ = auVar48._8_8_ + 0.0;
            auVar43._8_8_ = -(ulonglong)(180.0 < auVar47._8_8_);
            auVar43._0_8_ = -(ulonglong)(180.0 < auVar47._0_8_);
            auVar47 = blendvpd(auVar47,auVar52,auVar43);
            auVar44._8_8_ = -(ulonglong)(180.0 < auVar48._8_8_);
            auVar44._0_8_ = -(ulonglong)(180.0 < auVar48._0_8_);
            auVar48 = blendvpd(auVar48,auVar58,auVar44);
            pauVar19[2] = auVar47;
            dVar61 = auVar48._0_8_;
            *(double *)pauVar19[3] = dVar61;
            auVar72._8_8_ = 0;
            auVar72._0_8_ = dVar61;
            auVar48 = divpd(auVar47,auVar40);
            auVar40 = divpd(auVar72,auVar40);
            auVar48 = roundpd(auVar48,auVar48,3);
            auVar40 = roundpd(auVar40,auVar40,3);
            dVar67 = (auVar47._0_8_ - auVar48._0_8_ * dVar73) * 0.008726646259971648;
            dVar70 = (auVar47._8_8_ - auVar48._8_8_ * dVar62) * 0.008726646259971648;
            dVar73 = (dVar61 - auVar40._0_8_ * dVar73) * 0.008726646259971648;
            dVar62 = (0.0 - auVar40._8_8_ * dVar62) * 0.008726646259971648;
            local_4f8 = sin(dVar67);
            dVar61 = sin(dVar70);
            local_4d8 = (longlong *)sin(dVar73);
            sin(dVar62);
            dVar67 = cos(dVar67);
            dVar70 = cos(dVar70);
            dVar73 = cos(dVar73);
            cos(dVar62);
            auVar66._0_8_ = -(dVar70 * local_4f8 * (double)local_4d8) + dVar61 * dVar67 * dVar73;
            auVar66._8_8_ = dVar61 * local_4f8 * (double)local_4d8 + dVar70 * dVar67 * dVar73;
            *(double *)*pauVar19 = local_4f8 * dVar61 * dVar73 - dVar67 * dVar70 * (double)local_4d8
            ;
            *(double *)(*pauVar19 + 8) =
                 -(local_4f8 * dVar70 * dVar73) - dVar67 * dVar61 * (double)local_4d8;
            pauVar19[1] = auVar66;
          }
          local_448 = *pauVar19;
          local_438 = pauVar19[1];
          local_550 = local_550 & 0xffffff00;
          local_558 = (wchar_t *)local_448;
          FUN_140092404(lVar30,*(undefined8 *)(lVar30 + 0x120),*(undefined8 *)(lVar30 + 0x128),1);
        }
      }
      else if (lVar30 != 0) goto LAB_143dc5ff6;
LAB_143dc615d:
      lVar15 = lVar15 + 8;
    } while ((longlong)(int)lVar14 * 8 != lVar15);
  }
  uVar27 = *(uint *)(param_1 + 0x20);
LAB_143dc6487:
  param_1[0x8e] = param_1[0x88];
  param_1[0x8f] = param_1[0x89];
  param_1[0x90] = param_1[0x8a];
  param_1[0x8b] = param_1[0x88];
  param_1[0x8c] = param_1[0x89];
  param_1[0x8d] = param_1[0x8a];
  *(undefined1 *)(param_1 + 0x91) = 1;
  dVar38 = (double)param_1[0x7f];
  dVar54 = (double)param_1[0x80];
  dVar39 = (double)param_1[0x8b];
  if (dVar38 <= (double)param_1[0x8b]) {
    dVar39 = dVar38;
  }
  param_1[0x8b] = (longlong)dVar39;
  dVar61 = (double)param_1[0x8c];
  if (dVar54 <= (double)param_1[0x8c]) {
    dVar61 = dVar54;
  }
  param_1[0x8c] = (longlong)dVar61;
  dVar67 = (double)param_1[0x81];
  dVar70 = (double)param_1[0x8d];
  if (dVar67 <= (double)param_1[0x8d]) {
    dVar70 = dVar67;
  }
  param_1[0x8d] = (longlong)dVar70;
  dVar73 = (double)param_1[0x8e];
  if ((double)param_1[0x8e] <= dVar38) {
    dVar73 = dVar38;
  }
  param_1[0x8e] = (longlong)dVar73;
  dVar38 = (double)param_1[0x8f];
  if ((double)param_1[0x8f] <= dVar54) {
    dVar38 = dVar54;
  }
  param_1[0x8f] = (longlong)dVar38;
  dVar54 = (double)param_1[0x90];
  if ((double)param_1[0x90] <= dVar67) {
    dVar54 = dVar67;
  }
  param_1[0x90] = (longlong)dVar54;
  lVar14 = param_1[0x10];
  pfVar26 = (float *)(lVar14 + 0x360);
  if (0.0 < *(float *)(lVar14 + 0x374)) {
    pfVar26 = (float *)(lVar14 + 0x374);
  }
  dVar67 = (double)*pfVar26;
  param_1[0x8b] = (longlong)(dVar39 - dVar67);
  param_1[0x8c] = (longlong)(dVar61 - dVar67);
  param_1[0x8d] = (longlong)(dVar70 - dVar67);
  param_1[0x8e] = (longlong)(dVar73 + dVar67);
  param_1[0x8f] = (longlong)(dVar38 + dVar67);
  param_1[0x90] = (longlong)(dVar54 + dVar67);
  *(undefined1 *)(param_1 + 0x91) = 1;
  if (((uVar27 & 0x180000) == 0x100000) &&
     (*(uint *)(param_1 + 0x20) = uVar27 | 0x80000, (uVar27 & 1) != 0)) {
    (**(code **)(*param_1 + 0x340))(param_1);
  }
  if ((local_f0 ^ (ulonglong)auStack_578) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dc6e5a FUN_143dc6e5a body=596 status=ok
// SIG undefined FUN_143dc6e5a(void)

void FUN_143dc6e5a(longlong param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar1 = DAT_14c8463f8;
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(float *)(lVar4 + 0x778) <= 0.0) {
    *(undefined8 *)(param_1 + 0x6f8) = DAT_14c8463f0;
    *(undefined8 *)(param_1 + 0x700) = uVar1;
    *(undefined4 *)(param_1 + 0x708) = 0x3f800000;
    *(byte *)(param_1 + 0x104) = *(byte *)(param_1 + 0x104) & 0xfb;
  }
  else {
    uVar1 = *(undefined8 *)(lVar4 + 0x770);
    *(undefined8 *)(param_1 + 0x6f8) = *(undefined8 *)(lVar4 + 0x768);
    *(undefined8 *)(param_1 + 0x700) = uVar1;
    fVar5 = *(float *)(lVar4 + 0x778);
    if ((DAT_14c7639b5 == '\x01') && (0.0 < *(float *)(param_1 + 0x32c))) {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x5e8))();
      if (lVar4 != 0) {
        fVar6 = (float)FUN_1436550b8(lVar4);
        fVar3 = DAT_14c7639c8;
        fVar2 = DAT_14c7639c0;
        if (DAT_14c7639bc < fVar6) {
          fVar8 = DAT_14c7639c0 - DAT_14c7639bc;
          fVar9 = ABS(fVar8);
          fVar7 = fVar6 - DAT_14c7639bc;
          if (fVar9 <= 1e-08) {
            fVar10 = (float)(-(uint)(DAT_14c7639c0 <= fVar6) & 0x3f800000);
          }
          else {
            fVar10 = fVar7 / fVar8;
          }
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          if (fVar9 <= 1e-08) {
            fVar11 = (float)(-(uint)(DAT_14c7639c0 <= fVar6) & 0x3f800000);
          }
          else {
            fVar11 = fVar7 / fVar8;
          }
          fVar10 = (DAT_14c7639b8 - DAT_14cb851a8) * fVar10 + DAT_14cb851a8;
          if (1.0 <= fVar11) {
            fVar11 = 1.0;
          }
          if (fVar11 <= 0.0) {
            fVar11 = 0.0;
          }
          *(double *)(param_1 + 0x6f8) =
               (double)(fVar11 * DAT_14c7639c4 + 0.0) + *(double *)(param_1 + 0x6f8);
          if (fVar9 <= 1e-08) {
            fVar7 = (float)(-(uint)(fVar2 <= fVar6) & 0x3f800000);
          }
          else {
            fVar7 = fVar7 / fVar8;
          }
          fVar5 = fVar5 + fVar10;
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
          *(double *)(param_1 + 0x700) =
               (double)(fVar7 * fVar3 + 0.0) + *(double *)(param_1 + 0x700);
        }
      }
    }
    fVar5 = cosf(fVar5 * 0.5 * 0.017453292);
    *(float *)(param_1 + 0x708) = fVar5;
  }
  return;
}



// FUNCTION 143dc70ae FUN_143dc70ae body=69 status=ok
// SIG undefined FUN_143dc70ae(void)

void FUN_143dc70ae(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((uVar1 & 1) != 0) {
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar2 = param_1[4];
    }
    else {
      lVar2 = 0;
    }
    if (*(char *)(lVar2 + 0x178) == '\x03') {
      if ((uVar1 >> 0x1e & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143dc70e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2e8))(param_1,0);
        return;
      }
      *(uint *)(param_1 + 0x20) = uVar1 & 0xffffff9f | 0x20;
    }
  }
  return;
}



// FUNCTION 143dc70f4 FUN_143dc70f4 body=3793 status=ok
// SIG undefined FUN_143dc70f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc70f4(longlong *param_1)

{
  double dVar1;
  char cVar2;
  undefined4 extraout_EAX;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar22;
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  double dVar25;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined4 uVar33;
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auVar40 [16];
  undefined1 auStack_348 [32];
  longlong *local_328;
  ulonglong local_320;
  undefined1 local_318;
  double local_310;
  undefined1 local_308 [24];
  longlong local_2f0;
  undefined1 local_2e8 [16];
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
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
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
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
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  double local_118;
  undefined2 uStack_110;
  undefined2 uStack_10e;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_1f8 = (double)CONCAT44(local_1f8._4_4_,(uint)local_1f8);
  uStack_1f0 = (double)CONCAT44(uStack_1f0._4_4_,(undefined4)uStack_1f0);
  if (((*(byte *)((longlong)param_1 + 0x104) & 0x20) == 0) &&
     (local_1f8 = (double)CONCAT44(local_1f8._4_4_,(uint)local_1f8),
     uStack_1f0 = (double)CONCAT44(uStack_1f0._4_4_,(undefined4)uStack_1f0), param_1[0xd3] != 0)) {
    plVar6 = param_1;
    lVar4 = FUN_140ccfc10();
    uVar36 = SUB84(plVar6,0);
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      local_2f0 = param_1[4];
    }
    else {
      local_2f0 = 0;
    }
    lVar5 = param_1[0x10];
    dVar15 = (double)param_1[0xcd];
    dVar14 = (double)param_1[0xce];
    dVar13 = 0.0;
    if ((((dVar15 != 0.0) || (NAN(dVar15))) || (dVar14 != 0.0)) || (NAN(dVar14))) {
      dVar13 = atan2(dVar14,dVar15);
      dVar13 = dVar13 * 0.5;
      dVar15 = (double)param_1[0xcd];
      dVar14 = (double)param_1[0xce];
    }
    dVar19 = SQRT(dVar15 * dVar15 + dVar14 * dVar14);
    dVar15 = (double)param_1[0xcf];
    dVar14 = 0.0;
    if (((dVar15 != 0.0) || (NAN(dVar15))) || ((dVar19 != 0.0 || (NAN(dVar19))))) {
      dVar14 = atan2(dVar15,dVar19);
      dVar14 = dVar14 * 0.5;
    }
    dVar15 = sin(dVar14);
    dVar16 = cos(dVar14);
    dVar19 = sin(dVar13);
    dVar14 = cos(dVar13);
    auVar23._0_8_ = dVar15 * dVar19;
    auVar23._8_8_ = extraout_XMM0_Qb;
    dVar30 = -dVar15 * dVar14;
    dVar19 = dVar19 * dVar16;
    dVar16 = dVar16 * dVar14;
    local_2e8 = *(undefined1 (*) [16])(lVar5 + 0xe0);
    dVar15 = local_2e8._0_8_;
    dVar13 = local_2e8._8_8_;
    local_308._0_16_ = *(undefined1 (*) [16])(lVar5 + 0xf0);
    dVar14 = local_308._0_8_;
    auVar20 = minpd(local_2e8,_DAT_149934d80);
    auVar26 = minpd(local_308._0_16_,ZEXT816(0x3ff0000000000000));
    auVar32._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
    auVar32._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
    iVar3 = movmskpd(extraout_EAX,auVar32);
    auVar20._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
    auVar20._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
    uVar8 = movmskpd(uVar36,auVar20);
    if ((uVar8 & 0x3fffffff) == 0 && iVar3 == 0) {
      dVar15 = *(double *)(lVar5 + 0xa0);
      dVar13 = *(double *)(lVar5 + 0xa8);
      dVar25 = *(double *)(lVar5 + 0xb0);
      dVar28 = *(double *)(lVar5 + 0xb8);
      dVar29 = *(double *)(lVar5 + 0xc0);
      dVar1 = *(double *)(lVar5 + 200);
      dVar34 = dVar13 * dVar19 * -1.0 +
               dVar25 * dVar30 + auVar23._0_8_ * dVar28 * 1.0 + dVar16 * dVar15;
      dVar35 = dVar15 * dVar19 * 1.0 +
               dVar28 * dVar30 + auVar23._0_8_ * dVar25 * -1.0 + dVar16 * dVar13;
      auVar40._0_8_ =
           dVar28 * dVar19 * 1.0 +
           ((auVar23._0_8_ * dVar13 * 1.0 + dVar16 * dVar25) - dVar30 * dVar15);
      auVar40._8_8_ =
           dVar25 * dVar19 * -1.0 +
           ((auVar23._0_8_ * dVar15 * -1.0 + dVar16 * dVar28) - dVar30 * dVar13);
      dVar31 = *(double *)(lVar5 + 0xd0) * 1.0;
      dVar22 = *(double *)(lVar5 + 0xd8) * 0.0;
      auVar26._8_8_ = dVar16;
      auVar26._0_8_ = dVar19;
      auVar20 = blendpd(auVar23,auVar26,2);
      dVar15 = dVar1 * auVar23._0_8_ - dVar30 * dVar29;
      dVar27 = dVar31 * dVar30 - dVar19 * dVar1;
      dVar25 = dVar29 * dVar19 - auVar20._0_8_ * dVar31;
      dVar13 = dVar22 * dVar16 - auVar20._8_8_ * dVar22;
      dVar27 = dVar27 + dVar27;
      dVar25 = dVar25 + dVar25;
      dVar15 = dVar15 + dVar15;
      dVar13 = dVar13 + dVar13;
      dVar28 = (double)param_1[0x7f] +
               (dVar15 * dVar30 - dVar19 * dVar25) + dVar16 * dVar27 + dVar29;
      dVar19 = (double)param_1[0x80] +
               (dVar27 * dVar19 - dVar15 * auVar20._0_8_) + dVar16 * dVar25 + dVar1;
      dVar30 = (double)param_1[0x81] +
               (dVar25 * auVar23._0_8_ - dVar30 * dVar27) + dVar16 * dVar15 + dVar31;
      dVar13 = (dVar13 * dVar16 - dVar13 * auVar20._8_8_) + dVar16 * dVar13 + dVar22 + 0.0;
      dVar14 = dVar14 * 1.0;
      dVar15 = local_308._8_8_ * 0.0;
      uVar36 = local_2e8._0_4_;
      uVar37 = local_2e8._4_4_;
      uVar38 = local_2e8._8_4_;
      uVar39 = local_2e8._12_4_;
    }
    else {
      local_308._8_8_ = local_308._8_8_ * 0.0;
      local_308._0_8_ = dVar14 * 1.0;
      dVar25 = dVar30 + dVar30;
      dVar28 = dVar19 + dVar19;
      dVar31 = auVar23._0_8_ * (auVar23._0_8_ + auVar23._0_8_);
      local_1f8 = 1.0 - (dVar19 * dVar28 + dVar30 * dVar25);
      dStack_1d0 = 1.0 - (dVar19 * dVar28 + dVar31);
      local_1a8 = 1.0 - (dVar31 + dVar30 * dVar25);
      dStack_1b0 = (auVar23._0_8_ + auVar23._0_8_) * dVar16;
      uStack_1f0 = dVar25 * auVar23._0_8_ + dVar28 * dVar16;
      local_1c8 = dVar28 * dVar30 + dStack_1b0;
      local_1b8 = dVar25 * dVar16 + auVar23._0_8_ * dVar28;
      local_1d8 = dVar25 * auVar23._0_8_ - dVar28 * dVar16;
      dStack_1b0 = dVar28 * dVar30 - dStack_1b0;
      local_1e8 = auVar23._0_8_ * dVar28 - dVar25 * dVar16;
      uStack_1e0 = 0;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      uStack_180 = 0x3ff0000000000000;
      dVar16 = *(double *)(lVar5 + 0xa0);
      dVar30 = *(double *)(lVar5 + 0xa8);
      dVar19 = *(double *)(lVar5 + 0xb0);
      dVar25 = dVar30 + dVar30;
      dVar28 = dVar19 + dVar19;
      dVar31 = dVar16 * (dVar16 + dVar16);
      local_278 = (1.0 - (dVar19 * dVar28 + dVar30 * dVar25)) * dVar15;
      dStack_250 = (1.0 - (dVar19 * dVar28 + dVar31)) * dVar13;
      local_228 = (1.0 - (dVar31 + dVar30 * dVar25)) * dVar14;
      dVar29 = *(double *)(lVar5 + 0xa0) * dVar28;
      dVar19 = *(double *)(lVar5 + 0xb8);
      dVar31 = dVar28 * dVar19;
      dVar22 = (dVar16 + dVar16) * *(double *)(lVar5 + 0xb8);
      dVar19 = dVar25 * dVar19;
      dStack_270 = (dVar25 * dVar16 + dVar31) * dVar15;
      local_248 = (dVar28 * dVar30 + dVar22) * dVar13;
      local_238 = (dVar19 + dVar29) * dVar14;
      local_258 = (dVar25 * dVar16 - dVar31) * dVar13;
      dStack_230 = (dVar28 * dVar30 - dVar22) * dVar14;
      local_268 = (dVar29 - dVar19) * dVar15;
      uStack_260 = 0;
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = *(undefined8 *)(lVar5 + 0xc0);
      uStack_210 = *(undefined8 *)(lVar5 + 200);
      local_208 = *(undefined8 *)(lVar5 + 0xd0);
      uStack_200 = 0x3ff0000000000000;
      local_198 = (double)param_1[0x7f];
      dStack_190 = (double)param_1[0x80];
      local_188 = (double)param_1[0x81];
      FUN_1447fea8d(local_178);
      auVar20 = _DAT_149934d80;
      local_310 = (double)local_168._0_8_;
      dVar15 = (double)local_168._0_8_ * (double)local_168._0_8_ +
               (double)local_178._0_8_ * (double)local_178._0_8_ +
               (double)local_178._8_8_ * (double)local_178._8_8_;
      dVar13 = local_148 * local_148 +
               (double)local_158._0_8_ * (double)local_158._0_8_ +
               (double)local_158._8_8_ * (double)local_158._8_8_;
      dVar14 = (double)local_128._0_8_ * (double)local_128._0_8_ +
               local_138 * local_138 + uStack_130 * uStack_130;
      uVar12 = -(ulonglong)(0.0 <= dVar15 + -9.99999993922529e-09);
      dVar19 = (double)(~uVar12 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar15)) & uVar12);
      uVar12 = -(ulonglong)(0.0 <= dVar13 + -9.99999993922529e-09);
      dVar16 = (double)(~uVar12 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar13)) & uVar12);
      uVar12 = -(ulonglong)(0.0 <= dVar14 + -9.99999993922529e-09);
      dVar30 = (double)(~uVar12 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar14)) & uVar12);
      dVar14 = (double)local_308._0_8_;
      dVar15 = (double)local_308._8_8_;
      uVar36 = local_2e8._0_4_;
      uVar37 = local_2e8._4_4_;
      uVar38 = local_2e8._8_4_;
      uVar39 = local_2e8._12_4_;
      auVar17._8_8_ = -(ulonglong)(0.0 <= local_2e8._8_8_);
      auVar17._0_8_ = -(ulonglong)(0.0 <= local_2e8._0_8_);
      auVar32 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar17);
      dVar13 = (double)(~-(ulonglong)(0.0 <= (double)local_308._0_8_) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= (double)local_308._0_8_) & 0x3ff0000000000000);
      dVar25 = auVar32._0_8_;
      local_178._8_8_ = (double)local_178._8_8_ * dVar19 * dVar25;
      local_178._0_8_ = (double)local_178._0_8_ * dVar19 * dVar25;
      local_168._0_8_ = dVar19 * (double)local_168._0_8_ * dVar25;
      dVar19 = auVar32._8_8_;
      local_148 = dVar16 * local_148 * dVar19;
      local_158._8_8_ = (double)local_158._8_8_ * dVar16 * dVar19;
      local_158._0_8_ = dVar19 * (double)local_158._0_8_ * dVar16;
      uStack_130 = uStack_130 * dVar30 * dVar13;
      local_138 = dVar13 * local_138 * dVar30;
      local_128._0_8_ = dVar30 * (double)local_128._0_8_ * dVar13;
      FUN_14481fd10(&local_298,local_178);
      dVar13 = local_288 * local_288 + local_298 * local_298;
      dVar19 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar21._0_8_ = dVar13 + dVar19;
      auVar21._8_8_ = dVar13 + dVar19;
      auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
      auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
      auVar32 = sqrtpd(auVar21,auVar21);
      auVar20 = divpd(auVar20,auVar32);
      auVar24._0_8_ = auVar20._0_8_ * local_288;
      auVar24._8_8_ = auVar20._8_8_ * dStack_280;
      dVar34 = (double)((ulonglong)(local_298 * auVar20._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_));
      dVar35 = (double)((ulonglong)(dStack_290 * auVar20._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_));
      auVar40 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar24,auVar18);
      dVar19 = (double)CONCAT44(uStack_10c,CONCAT22(uStack_10e,uStack_110));
      dVar30 = (double)CONCAT44(uStack_104,uStack_108);
      dVar13 = 0.0;
      dVar28 = local_118;
    }
    uVar33 = (undefined4)((ulonglong)dVar19 >> 0x20);
    local_178._8_8_ = dVar35;
    local_178._0_8_ = dVar34;
    local_168 = auVar40;
    FUN_1448052ee(local_178,&local_278);
    uVar12 = (ulonglong)*(ushort *)(param_1 + 0x75);
    if (*(ushort *)(param_1 + 0x75) != 0) {
      lVar4 = lVar4 + 0x248;
      local_308._0_8_ = param_1 + 0xd4;
      uVar10 = 0;
      do {
        if ((uVar12 & 1) != 0) {
          lVar5 = FUN_1402d1dc0(lVar4);
          plVar6 = (longlong *)FUN_140b51ce6(lVar4 + 0x28);
          if (plVar6 != (longlong *)0x0) {
            local_178._8_8_ = 0;
            local_178._0_8_ = param_1;
            local_168._0_8_ = local_168._4_8_ << 0x20;
            local_168._8_8_ = 0;
            lVar5 = (**(code **)(*plVar6 + 0x20))(plVar6,local_178,0,0);
          }
          if (lVar5 != 0) {
            local_320 = param_1[0x39];
            local_178._8_4_ = SUB84(dVar19,0);
            local_178._0_8_ = dVar28;
            local_178._12_4_ = uVar33;
            local_168._0_8_ = dVar30;
            local_318 = 0;
            local_328 = param_1;
            plVar6 = (longlong *)FUN_14028e0e2(local_2f0,lVar5);
            if (plVar6 != (longlong *)0x0) {
              local_298._0_4_ = 0;
              dStack_290 = 0.0;
              if (param_1 == (longlong *)0x0) {
                iVar3 = 0;
                uVar8 = (uint)local_298;
              }
              else {
                uVar8 = *(uint *)((longlong)param_1 + 0xc);
                local_298 = (double)(ulonglong)uVar8;
                if ((int)uVar8 < DAT_14c9647dc) {
                  lVar5 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                }
                else {
                  lVar5 = 0;
                }
                iVar3 = *(int *)(lVar5 + 0x10);
                if (*(int *)(lVar5 + 0x10) == 0) {
                  LOCK();
                  iVar3 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar9 = DAT_14c964868 + 1;
                  bVar11 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar3;
                  if (bVar11) {
                    local_310 = (double)CONCAT44(local_310._4_4_,iVar9);
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar9);
                    iVar9 = local_310._0_4_;
                  }
                  LOCK();
                  iVar3 = *(int *)(lVar5 + 0x10);
                  bVar11 = iVar3 == 0;
                  if (bVar11) {
                    *(int *)(lVar5 + 0x10) = iVar9;
                    iVar3 = 0;
                  }
                  UNLOCK();
                  uVar8 = (uint)local_298;
                  if (bVar11) {
                    iVar3 = iVar9;
                  }
                }
              }
              local_298._0_4_ = uVar8;
              local_298 = (double)CONCAT44(iVar3,(uint)local_298);
              dStack_290 = DAT_14cb85268;
              (**(code **)(*plVar6 + 0xa80))(plVar6,&local_298);
              if (DAT_14c950c29 == '\x01') {
                FUN_1456cec3c(plVar6);
              }
              iVar3 = (int)param_1[0xd5];
              *(uint *)(param_1 + 0xd5) = iVar3 + 1U;
              if (*(uint *)((longlong)param_1 + 0x6ac) < iVar3 + 1U) {
                FUN_140e402be(local_308._0_8_,iVar3);
              }
              *(longlong **)(*(longlong *)local_308._0_8_ + (longlong)iVar3 * 8) = plVar6;
              if (DAT_14c950c29 == '\x01') {
                FUN_1456cec3c(plVar6);
              }
              if (param_1[0xd2] == 0) {
                lVar5 = param_1[0x10];
                local_2b8 = *(undefined8 *)(lVar5 + 0x1a0);
                uStack_2b0 = *(undefined8 *)(lVar5 + 0x1a8);
                local_2a8 = *(undefined8 *)(lVar5 + 0x1b0);
                (**(code **)(*plVar6 + 0x478))(plVar6,&local_2b8);
              }
              else {
                FUN_14057a3b2(plVar6,0,0,1);
                lVar5 = param_1[0x10];
                local_178._0_8_ = *(undefined8 *)(lVar5 + 0x160);
                local_178._8_8_ = *(undefined8 *)(lVar5 + 0x168);
                local_168._0_8_ = *(undefined8 *)(lVar5 + 0x170);
                local_168._8_8_ = *(undefined8 *)(lVar5 + 0x178);
                local_1f8._0_4_ = (uint)*(undefined8 *)(lVar5 + 0x180);
                local_1f8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x180) >> 0x20);
                uStack_1f0._0_4_ = (undefined4)*(undefined8 *)(lVar5 + 0x188);
                uStack_1f0._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x188) >> 0x20);
                local_1e8 = *(double *)(lVar5 + 400);
                local_320 = local_320 & 0xffffffffffffff00;
                local_328 = (longlong *)0x0;
                FUN_144927ad4(plVar6,&local_1f8,local_178,0);
                local_178 = *(undefined1 (*) [16])(lVar5 + 0x1a0);
                local_168._0_8_ = *(undefined8 *)(lVar5 + 0x1b0);
                if (*(code **)(*plVar6 + 0x478) == FUN_14028a216) {
                  FUN_14028a216(plVar6,local_178);
                }
                else {
                  (**(code **)(*plVar6 + 0x478))(plVar6,local_178);
                }
                (**(code **)(*plVar6 + 0x490))(plVar6,param_1[0xd2]);
              }
              (**(code **)(*plVar6 + 0xa60))(plVar6,1);
            }
          }
          lVar5 = *(longlong *)(lVar4 + 0x48);
          if (lVar5 == 0) {
            uVar7 = FUN_140067708();
            lVar5 = FUN_14477b664(uVar7);
            *(longlong *)(lVar4 + 0x48) = lVar5;
          }
          if (*(longlong *)(lVar4 + 0x50) == 0) {
            if ((lVar5 != 0) && (*(longlong *)(lVar4 + 0x40) != 0)) {
              plVar6 = *(longlong **)(lVar5 + 0xb8);
              if (plVar6 != (longlong *)0x0) {
                cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6);
                if (cVar2 != '\0') {
                  uVar7 = (**(code **)(*plVar6 + 0x110))(plVar6);
                  lVar5 = FUN_144aff482(uVar7,(longlong *)(lVar4 + 0x40));
                  *(longlong *)(lVar4 + 0x50) = lVar5;
                  if (lVar5 != 0) goto LAB_143dc7cf5;
                  goto LAB_143dc7e85;
                }
              }
              *(undefined8 *)(lVar4 + 0x50) = 0;
            }
          }
          else {
LAB_143dc7cf5:
            if ((*(char *)(lVar4 + 0x58) != '\x01') || ((*(byte *)(param_1 + 0x20) & 2) != 0)) {
              dVar16 = *(double *)(lVar4 + 0x40);
              uVar7 = FUN_14477b664(*(undefined8 *)(lVar4 + 0x48));
              uVar7 = FUN_14477b664(uVar7);
              dVar25 = *(double *)(lVar4 + 0x50);
              local_1f8._0_4_ = (uint)local_1f8 & 0xffffff00;
              local_1f8._4_4_ = 0;
              uStack_1f0._0_4_ = 0;
              uStack_1e0 = 0;
              local_1d8 = 0.0;
              local_1e8 = dVar16;
              uVar7 = FUN_14477b664(uVar7);
              uStack_1e0 = FUN_14477b664(uVar7);
              dStack_1d0 = 0.0;
              plVar6 = (longlong *)param_1[0x30];
              local_178._8_8_ = dVar35;
              local_178._0_8_ = dVar34;
              local_158._8_4_ = SUB84(dVar19,0);
              local_158._0_8_ = dVar28;
              local_158._12_4_ = uVar33;
              local_138 = (double)CONCAT44(uVar37,uVar36);
              uStack_130 = (double)CONCAT44(uVar39,uVar38);
              local_128._8_4_ = SUB84(dVar15,0);
              local_128._0_8_ = dVar14;
              local_128._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
              local_118 = 5.26354424712089e-315;
              uStack_110 = 0;
              uStack_10c = 0;
              uStack_108 = 0;
              local_1d8 = dVar25;
              local_168 = auVar40;
              local_148 = dVar30;
              dStack_140 = dVar13;
              uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
              local_320 = 0;
              local_328 = plVar6;
              FUN_140cb5d65(&local_2d0,uVar7);
              local_2d0 = 0;
              local_2c8 = 0xffffffffffffffff;
              local_1f8 = (double)CONCAT44(local_1f8._4_4_,(uint)local_1f8);
              uStack_1f0 = (double)CONCAT44(uStack_1f0._4_4_,(undefined4)uStack_1f0);
              if ((dStack_1d0 != 0.0) &&
                 (local_1f8 = (double)CONCAT44(local_1f8._4_4_,(uint)local_1f8),
                 uStack_1f0 = (double)CONCAT44(uStack_1f0._4_4_,(undefined4)uStack_1f0),
                 (DAT_14cb26569 & 1) != 0)) {
                FUN_1400848c0(*(undefined8 *)((longlong)dStack_1d0 + 0x50));
              }
            }
          }
        }
LAB_143dc7e85:
        if ((ushort)uVar12 < 2) break;
        uVar12 = uVar12 >> 1;
        lVar4 = lVar4 + 0x60;
        bVar11 = uVar10 < 0xf;
        uVar10 = uVar10 + 1;
      } while (bVar11);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dc7fc6 FUN_143dc7fc6 body=349 status=ok
// SIG undefined FUN_143dc7fc6(void)

void FUN_143dc7fc6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    uVar3 = FUN_1410b2f8c();
    lVar4 = FUN_144718840(param_2,uVar3);
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_14490f2e4(param_2,&local_58,1,0);
  if (-1 < (int)uStack_50) {
    if (*(int *)((longlong)param_3 + 0xc) < (int)uStack_50) {
      FUN_14480809c(param_3);
    }
    lVar4 = local_58;
    if ((int)uStack_50 != 0) {
      lVar6 = (longlong)(int)uStack_50;
      lVar5 = 0;
      do {
        if (*(longlong *)(lVar4 + lVar5) != 0) {
          uVar1 = *(undefined4 *)(*(longlong *)(lVar4 + lVar5) + 0xc);
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_1447808da(param_3,iVar2);
          }
          *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = uVar1;
        }
        lVar5 = lVar5 + 8;
      } while (lVar6 * 8 != lVar5);
    }
    if ((((*(longlong *)(param_2 + 0x1c8) != 0) &&
         (lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x1c8) + 0x120), lVar4 != 0)) &&
        (lVar4 = *(longlong *)(lVar4 + 0xa8), lVar4 != 0)) && ((*(byte *)(lVar4 + 0x62) & 4) != 0))
    {
      uVar1 = *(undefined4 *)(lVar4 + 0xc);
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1447808da(param_3,iVar2);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = uVar1;
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uStack_50 & 0xffffffff);
}



// FUNCTION 143dc8172 FUN_143dc8172 body=759 status=ok
// SIG undefined FUN_143dc8172(void)

void FUN_143dc8172(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *_Dst;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar10 = *param_1;
  if ((longlong)*(int *)(param_2 + 0x20) == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    lVar11 = *(longlong *)(param_2 + 0x18);
    lVar8 = (longlong)*(int *)(param_2 + 0x20) * 0x30 + lVar11;
    plVar9 = (longlong *)0x0;
    do {
      lVar5 = FUN_14040deec(lVar11);
      plVar7 = plVar9;
      if (lVar5 != 0) {
        plVar6 = *(longlong **)(lVar5 + 0x80);
        if (plVar6 == (longlong *)0x0) {
LAB_143dc81ec:
          plVar6 = (longlong *)0x0;
          _Dst = (longlong *)0x0;
        }
        else {
          iVar4 = (int)plVar6[1];
          do {
            if (iVar4 == 0) goto LAB_143dc81ec;
            LOCK();
            iVar3 = (int)plVar6[1];
            bVar12 = iVar4 == iVar3;
            if (bVar12) {
              *(int *)(plVar6 + 1) = iVar4 + 1;
              iVar3 = iVar4;
            }
            iVar4 = iVar3;
            UNLOCK();
          } while (!bVar12);
          _Dst = *(longlong **)(lVar5 + 0x78);
        }
        if (plVar6 == plVar9) {
          if (plVar9 == (longlong *)0x0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            LOCK();
            plVar1 = plVar6 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              iVar4 = *piVar2;
              UNLOCK();
              plVar1 = plVar6;
              plVar6 = plVar9;
              goto joined_r0x000143dc8232;
            }
          }
        }
        else {
          plVar7 = plVar6;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              iVar4 = *piVar2;
              UNLOCK();
              plVar1 = plVar9;
joined_r0x000143dc8232:
              plVar7 = plVar6;
              if (iVar4 == 0) {
                (**(code **)(*plVar1 + 0x10))();
              }
            }
          }
        }
        if (_Dst != (longlong *)0x0) goto LAB_143dc8395;
      }
      lVar11 = lVar11 + 0x30;
      plVar9 = plVar7;
    } while (lVar11 != lVar8);
  }
  plVar6 = (longlong *)FUN_14001cc68(0x128);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b414b20;
  _Dst = plVar6 + 2;
  memset(_Dst,0,0x88);
  *(undefined8 *)((longlong)plVar6 + 0x4c) = 0xffffffff00000080;
  memset(plVar6 + 0x13,0,0x90);
  local_50 = _Dst;
  local_48 = plVar6;
  FUN_143dc8484(&local_50,_Dst);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (plVar6 == plVar9) {
    if (plVar9 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
      goto LAB_143dc8331;
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plVar7 = plVar9;
    if ((int)*plVar1 != 0) goto LAB_143dc8331;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
    plVar1 = plVar6;
    plVar6 = plVar9;
  }
  else {
    plVar7 = plVar6;
    if (plVar9 == (longlong *)0x0) goto LAB_143dc8331;
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_143dc8331;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
    plVar1 = plVar9;
  }
  plVar7 = plVar6;
  if (iVar4 == 0) {
    (**(code **)(*plVar1 + 0x10))();
  }
LAB_143dc8331:
  plVar9 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_48 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  iVar4 = *(int *)(lVar10 + 0x58);
  *(uint *)(lVar10 + 0x58) = iVar4 + 1U;
  if (*(uint *)(lVar10 + 0x5c) < iVar4 + 1U) {
    FUN_1488e2d44((longlong *)(lVar10 + 0x50),iVar4);
  }
  lVar10 = *(longlong *)(lVar10 + 0x50);
  *(longlong **)(lVar10 + (longlong)iVar4 * 0x10) = _Dst;
  *(longlong **)(lVar10 + 8 + (longlong)iVar4 * 0x10) = plVar7;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
LAB_143dc8395:
  if ((longlong)*(int *)(param_2 + 0x20) != 0) {
    lVar10 = *(longlong *)(param_2 + 0x18);
    lVar11 = (longlong)*(int *)(param_2 + 0x20) * 0x30;
    do {
      lVar8 = FUN_14040deec(lVar10);
      if (((lVar8 != 0) && (*(int *)(lVar8 + 0x20) != 0)) && (*(int *)(lVar8 + 0x30) != 0)) {
        FUN_140f4bed6(_Dst,lVar8);
      }
      lVar10 = lVar10 + 0x30;
      lVar11 = lVar11 + -0x30;
    } while (lVar11 != 0);
  }
  iVar4 = (int)_Dst[0x1c];
  *(uint *)(_Dst + 0x1c) = iVar4 + 1U;
  if (*(uint *)((longlong)_Dst + 0xe4) < iVar4 + 1U) {
    FUN_140f4cb96(_Dst + 0x1b,iVar4);
  }
  *(longlong *)(_Dst[0x1b] + (longlong)iVar4 * 8) = param_2;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dc8484 FUN_143dc8484 body=159 status=ok
// SIG undefined FUN_143dc8484(void)

void FUN_143dc8484(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_143dc84c1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_143dc84c1;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_143dc84c1:
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
                    /* WARNING: Could not recover jumptable at 0x000143dc851f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143dc8524 FUN_143dc8524 body=1456 status=ok
// SIG undefined FUN_143dc8524(void)

void FUN_143dc8524(longlong *param_1,longlong param_2)

{
  longlong *_Dst;
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  double dVar17;
  undefined1 auStack_128 [44];
  undefined4 local_fc;
  longlong *local_f8;
  longlong local_f0;
  undefined4 local_e8 [2];
  longlong local_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong *local_c8;
  longlong *local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined1 local_80;
  undefined1 local_74 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((0 < *(int *)(param_2 + 0x20)) && (*(int *)(param_2 + 0x30) != 0)) {
    local_f0 = param_1[2];
    local_f8 = (longlong *)(local_f0 + 0x50);
    lVar14 = 0;
    do {
      lVar6 = *(longlong *)(param_2 + 0x18);
      lVar15 = lVar14 * 0x50;
      local_a0 = *(double *)(lVar6 + 0x18 + lVar15);
      local_98 = *(double *)(lVar6 + 0x20 + lVar15);
      local_88 = local_98 + 10.0;
      local_90 = local_a0 + 10.0;
      local_98 = local_98 + -10.0;
      local_a0 = local_a0 + -10.0;
      local_80 = 1;
      lVar10 = *param_1;
      *(undefined4 *)(lVar10 + 0x208) = 0;
      if (*(int *)(lVar10 + 0x20c) < 0) {
        FUN_1488e2dca(lVar10,0);
      }
      lVar10 = *param_1;
      FUN_14017cadc(param_1[1],&local_a0,lVar10);
      plVar7 = (longlong *)*param_1;
      uVar13 = (undefined4)lVar14;
      if ((int)plVar7[0x41] == 0) {
        lVar6 = lVar6 + lVar15;
        dVar17 = (double)*(float *)(lVar6 + 0x48);
        local_b0 = *(double *)(lVar6 + 0x20) + dVar17;
        local_b8 = *(double *)(lVar6 + 0x18) + dVar17;
        local_c0 = (longlong *)(*(double *)(lVar6 + 0x20) - dVar17);
        local_c8 = (longlong *)(*(double *)(lVar6 + 0x18) - dVar17);
        local_a8 = 1;
        local_d8 = CONCAT44(local_d8._4_4_,uVar13);
        lStack_d0 = param_2;
        FUN_143dc8ad6(param_1[1],&local_d8,&local_c8);
      }
      else {
        plVar5 = (longlong *)plVar7[0x40];
        if ((longlong *)plVar7[0x40] == (longlong *)0x0) {
          plVar5 = plVar7;
        }
        local_d8 = *plVar5;
        lStack_d0 = plVar5[1];
        if (lStack_d0 != 0) {
          plVar7 = *(longlong **)(param_2 + 0x80);
          if (plVar7 == (longlong *)0x0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            iVar3 = (int)plVar7[1];
            do {
              if (iVar3 == 0) {
                plVar7 = (longlong *)0x0;
                break;
              }
              LOCK();
              iVar2 = (int)plVar7[1];
              bVar16 = iVar3 == iVar2;
              if (bVar16) {
                *(int *)(plVar7 + 1) = iVar3 + 1;
                iVar2 = iVar3;
              }
              iVar3 = iVar2;
              UNLOCK();
            } while (!bVar16);
          }
          lVar6 = 0;
          if (plVar7 != (longlong *)0x0) {
            lVar6 = *(longlong *)(param_2 + 0x78);
          }
          plVar5 = *(longlong **)(lStack_d0 + 0x80);
          uVar11 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
          if (plVar5 == (longlong *)0x0) {
LAB_143dc872d:
            plVar5 = (longlong *)0x0;
            lVar10 = 0;
          }
          else {
            iVar3 = (int)plVar5[1];
            do {
              if (iVar3 == 0) goto LAB_143dc872d;
              LOCK();
              iVar2 = (int)plVar5[1];
              bVar16 = iVar3 == iVar2;
              if (bVar16) {
                *(int *)(plVar5 + 1) = iVar3 + 1;
                iVar2 = iVar3;
              }
              iVar3 = iVar2;
              UNLOCK();
            } while (!bVar16);
            lVar10 = *(longlong *)(lStack_d0 + 0x78);
            uVar11 = 0;
          }
          plVar4 = plVar7;
          if (lStack_d0 == param_2) {
LAB_143dc8788:
            cVar8 = (char)uVar11;
          }
          else {
            uVar9 = (undefined4)uVar11;
            if (((lVar6 != 0) && (lVar10 != 0)) && (lVar6 == lVar10)) {
LAB_143dc877b:
              local_c0 = (longlong *)local_e8;
              local_c8 = &local_d8;
              uVar11 = uVar11 & 0xffffffff;
              local_e8[0] = uVar13;
              local_e0 = param_2;
              FUN_141304ff6(lVar6 + 0x10,local_74,&local_c8);
              goto LAB_143dc8788;
            }
            if (lVar6 == 0 && lVar10 == 0) {
              local_fc = uVar9;
              plVar4 = (longlong *)FUN_14001cc68(0x128);
              plVar4[1] = (longlong)&DAT_100000001;
              *plVar4 = (longlong)&PTR_FUN_14b414b20;
              _Dst = plVar4 + 2;
              memset(_Dst,0,0x88);
              *(undefined8 *)((longlong)plVar4 + 0x4c) = 0xffffffff00000080;
              memset(plVar4 + 0x13,0,0x90);
              local_c8 = _Dst;
              local_c0 = plVar4;
              FUN_143dc8484(&local_c8,_Dst);
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
              }
              plVar12 = (longlong *)0x0;
              if (plVar4 == plVar7) {
                plVar12 = plVar4;
              }
              if (plVar4 != plVar7 && plVar7 != (longlong *)0x0) {
                LOCK();
                plVar12 = plVar7 + 1;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
                if ((int)*plVar12 == 0) {
                  (**(code **)*plVar7)(plVar7);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar3 = *piVar1;
                  UNLOCK();
joined_r0x000143dc891e:
                  if (iVar3 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
              else if (plVar12 != (longlong *)0x0) {
                LOCK();
                plVar7 = plVar12 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*plVar12)(plVar12);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar12 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar3 = *piVar1;
                  UNLOCK();
                  plVar7 = plVar4;
                  goto joined_r0x000143dc891e;
                }
              }
              plVar7 = local_c0;
              if (local_c0 != (longlong *)0x0) {
                LOCK();
                plVar12 = local_c0 + 1;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
                if ((int)*plVar12 == 0) {
                  (**(code **)*local_c0)(local_c0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
              iVar3 = *(int *)(local_f0 + 0x58);
              *(uint *)(local_f0 + 0x58) = iVar3 + 1U;
              if (*(uint *)(local_f0 + 0x5c) < iVar3 + 1U) {
                FUN_1488e2d44(local_f8,iVar3);
              }
              lVar6 = *local_f8;
              *(longlong **)(lVar6 + (longlong)iVar3 * 0x10) = _Dst;
              *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = plVar4;
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
              }
              FUN_140f4bed6(_Dst,param_2);
              FUN_140f4bed6(_Dst,lStack_d0);
              local_c8 = &local_d8;
              local_c0 = (longlong *)local_e8;
              local_e8[0] = uVar13;
              local_e0 = param_2;
              FUN_141304ff6(plVar4 + 4,local_74,&local_c8);
            }
            else {
              if ((lVar6 == 0) && (lVar10 != 0)) {
                FUN_140f4bed6(lVar10,param_2);
                lVar6 = lVar10;
                goto LAB_143dc877b;
              }
              if ((lVar6 == 0) || (lVar10 != 0)) {
                local_fc = uVar9;
                FUN_140f4bed6(lVar10,param_2);
              }
              else {
                local_fc = uVar9;
                FUN_140f4bed6(lVar6);
                lVar10 = lVar6;
              }
              local_c0 = (longlong *)local_e8;
              local_c8 = &local_d8;
              local_e8[0] = uVar13;
              local_e0 = param_2;
              FUN_141304ff6(lVar10 + 0x10,local_74,&local_c8);
            }
            cVar8 = (char)local_fc;
          }
          if (cVar8 == '\0') {
            LOCK();
            plVar7 = plVar5 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar4 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(param_2 + 0x20));
  }
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dc8ad6 FUN_143dc8ad6 body=1471 status=ok
// SIG undefined FUN_143dc8ad6(void)

void FUN_143dc8ad6(void **param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  void *pvVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  void **ppvVar24;
  undefined4 *puVar25;
  undefined1 auStack_198 [40];
  double local_170;
  void *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 local_118 [40];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar19 = FUN_14017cc2c(param_1,param_3,local_118);
  if (iVar19 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_198);
  }
  if (iVar19 == 0) {
    pvVar20 = param_1[9];
    pvVar4 = param_1[7];
    dVar11 = (double)pvVar20 - (double)pvVar4;
    pvVar5 = param_1[8];
    pvVar6 = param_1[6];
    dVar9 = (double)pvVar5 - (double)pvVar6;
    iVar19 = *(int *)(param_1 + 1);
    if (3 < iVar19 &&
        (double)(*(float *)(param_1 + 0xd) * *(float *)(param_1 + 0xd)) <
        dVar9 * dVar9 + dVar11 * dVar11) {
      pvVar7 = param_1[0xb];
      pvVar8 = param_1[0xc];
      dVar10 = dVar11 * 0.5 + (double)pvVar8;
      dVar12 = (double)pvVar7 - dVar9 * 0.5;
      dVar9 = dVar9 * 0.5 + (double)pvVar7;
      puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      uVar3 = *(undefined4 *)(param_1 + 0xd);
      local_170 = (double)pvVar8 + 0.0;
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = dVar12;
      puVar21[7] = pvVar8;
      puVar21[8] = (double)pvVar7 + 0.0;
      puVar21[9] = dVar10;
      *(undefined1 *)(puVar21 + 10) = 1;
      puVar21[0xb] = ((double)pvVar7 + 0.0 + dVar12) * 0.5;
      puVar21[0xc] = (dVar10 + (double)pvVar8) * 0.5;
      *(undefined4 *)(puVar21 + 0xd) = uVar3;
      *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      param_1[2] = puVar21;
      puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = pvVar7;
      puVar21[7] = pvVar8;
      puVar21[8] = pvVar5;
      puVar21[9] = pvVar20;
      *(undefined1 *)(puVar21 + 10) = 1;
      puVar21[0xb] = ((double)pvVar5 + (double)pvVar7) * 0.5;
      puVar21[0xc] = ((double)pvVar20 + (double)pvVar8) * 0.5;
      *(undefined4 *)(puVar21 + 0xd) = uVar3;
      *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      param_1[3] = puVar21;
      puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = pvVar6;
      puVar21[7] = pvVar4;
      puVar21[8] = pvVar7;
      puVar21[9] = pvVar8;
      *(undefined1 *)(puVar21 + 10) = 1;
      puVar21[0xb] = ((double)pvVar6 + (double)pvVar7) * 0.5;
      puVar21[0xc] = ((double)pvVar4 + (double)pvVar8) * 0.5;
      *(undefined4 *)(puVar21 + 0xd) = uVar3;
      *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      param_1[4] = puVar21;
      puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      dVar11 = (double)pvVar8 - dVar11 * 0.5;
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = pvVar7;
      puVar21[7] = dVar11;
      puVar21[8] = dVar9;
      puVar21[9] = local_170;
      *(undefined1 *)(puVar21 + 10) = 1;
      puVar21[0xb] = (dVar9 + (double)pvVar7) * 0.5;
      puVar21[0xc] = (dVar11 + local_170) * 0.5;
      *(undefined4 *)(puVar21 + 0xd) = uVar3;
      *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      param_1[5] = puVar21;
      *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
      local_168 = (void *)0x0;
      uStack_160 = 0;
      if ((longlong)*(int *)(param_1 + 1) != 0) {
        puVar25 = *param_1;
        lVar22 = (longlong)*(int *)(param_1 + 1) * 0x38;
        do {
          iVar19 = FUN_14017cc2c(param_1,puVar25,&local_158);
          if (iVar19 == 1) {
            iVar19 = *(int *)(local_158 + 1);
            *(uint *)(local_158 + 1) = iVar19 + 1U;
            ppvVar24 = local_158;
            if (*(uint *)((longlong)local_158 + 0xc) < iVar19 + 1U) {
LAB_143dc8fad:
              FUN_14189a778(ppvVar24,iVar19);
            }
          }
          else {
            iVar19 = (int)uStack_160;
            uVar1 = (int)uStack_160 + 1;
            uStack_160 = CONCAT44(uStack_160._4_4_,uVar1);
            if (uStack_160._4_4_ < uVar1) {
              ppvVar24 = &local_168;
              goto LAB_143dc8fad;
            }
            ppvVar24 = &local_168;
          }
          pvVar20 = *ppvVar24;
          lVar23 = (longlong)iVar19 * 0x38;
          *(undefined8 *)((longlong)pvVar20 + lVar23 + 0x30) = *(undefined8 *)(puVar25 + 0xc);
          uVar3 = *puVar25;
          uVar13 = puVar25[1];
          uVar14 = puVar25[2];
          uVar15 = puVar25[3];
          uVar16 = *(undefined8 *)(puVar25 + 4);
          uVar17 = *(undefined8 *)(puVar25 + 6);
          uVar18 = *(undefined8 *)(puVar25 + 10);
          puVar21 = (undefined8 *)((longlong)pvVar20 + lVar23 + 0x20);
          *puVar21 = *(undefined8 *)(puVar25 + 8);
          puVar21[1] = uVar18;
          puVar21 = (undefined8 *)((longlong)pvVar20 + lVar23 + 0x10);
          *puVar21 = uVar16;
          puVar21[1] = uVar17;
          puVar2 = (undefined4 *)((longlong)pvVar20 + lVar23);
          *puVar2 = uVar3;
          puVar2[1] = uVar13;
          puVar2[2] = uVar14;
          puVar2[3] = uVar15;
          puVar25 = puVar25 + 0xe;
          lVar22 = lVar22 + -0x38;
        } while (lVar22 != 0);
      }
      pvVar20 = local_168;
      if (&local_168 != param_1) {
        iVar19 = (int)uStack_160;
        lVar22 = (longlong)(int)uStack_160;
        *(int *)(param_1 + 1) = (int)uStack_160;
        if ((int)uStack_160 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
          *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        }
        else {
          FUN_143dc9110(param_1,uStack_160 & 0xffffffff);
          if (iVar19 != 0) {
            memcpy(*param_1,pvVar20,lVar22 * 0x38);
          }
        }
      }
      if (local_168 != (void *)0x0) {
        FUN_1400020a8();
      }
      FUN_143dc8ad6(param_1,param_2,param_3);
      goto LAB_143dc907d;
    }
    local_138 = param_3[4];
    local_158 = (void **)*param_3;
    uStack_150 = param_3[1];
    local_148 = *(undefined4 *)(param_3 + 2);
    uStack_144 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_140 = *(undefined4 *)(param_3 + 3);
    uStack_13c = *(undefined4 *)((longlong)param_3 + 0x1c);
    uStack_130 = *param_2;
    uStack_12c = param_2[1];
    uStack_128 = param_2[2];
    uStack_124 = param_2[3];
    *(uint *)(param_1 + 1) = iVar19 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar19 + 1U) {
      FUN_14189a778(param_1);
    }
    pvVar20 = *param_1;
  }
  else {
    local_138 = param_3[4];
    local_158 = (void **)*param_3;
    uStack_150 = param_3[1];
    local_148 = *(undefined4 *)(param_3 + 2);
    uStack_144 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_140 = *(undefined4 *)(param_3 + 3);
    uStack_13c = *(undefined4 *)((longlong)param_3 + 0x1c);
    uStack_130 = *param_2;
    uStack_12c = param_2[1];
    uStack_128 = param_2[2];
    uStack_124 = param_2[3];
    iVar19 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar19 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar19 + 1U) {
      FUN_14189a778(param_1,iVar19);
    }
    pvVar20 = *param_1;
  }
  lVar22 = (longlong)iVar19 * 0x38;
  *(ulonglong *)((longlong)pvVar20 + lVar22 + 0x30) = CONCAT44(uStack_124,uStack_128);
  puVar21 = (undefined8 *)((longlong)pvVar20 + lVar22 + 0x20);
  *puVar21 = local_138;
  puVar21[1] = CONCAT44(uStack_12c,uStack_130);
  puVar21 = (undefined8 *)((longlong)pvVar20 + lVar22 + 0x10);
  *puVar21 = CONCAT44(uStack_144,local_148);
  puVar21[1] = CONCAT44(uStack_13c,uStack_140);
  puVar25 = (undefined4 *)((longlong)pvVar20 + lVar22);
  *puVar25 = (undefined4)local_158;
  puVar25[1] = local_158._4_4_;
  puVar25[2] = (undefined4)uStack_150;
  puVar25[3] = uStack_150._4_4_;
LAB_143dc907d:
  if ((local_f0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dc9110 FUN_143dc9110 body=337 status=ok
// SIG undefined FUN_143dc9110(void)

void FUN_143dc9110(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  iVar8 = 0;
  if (param_2 != 0) {
    uVar5 = (longlong)param_2 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar3) {
              uVar7 = (ulonglong)bVar3;
            }
            uVar9 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_143dc9191;
              lVar2 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_143dc9191:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if (param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (param_3 < iVar8) {
    FUN_1446f8d3c(param_1,0,iVar8,0x38,8);
    param_3 = iVar8;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143dc9262 FUN_143dc9262 body=339 status=ok
// SIG undefined FUN_143dc9262(void)

void FUN_143dc9262(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_1;
  if ((((*(longlong *)(param_2 + 0x78) == 0) || (*(longlong *)(param_2 + 0x80) == 0)) ||
      (*(int *)(*(longlong *)(param_2 + 0x80) + 8) < 1)) &&
     ((*(int *)(param_2 + 0x20) != 0 && (*(int *)(param_2 + 0x30) != 0)))) {
    plVar6 = (longlong *)FUN_14001cc68(0x128);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14b414b20;
    plVar1 = plVar6 + 2;
    memset(plVar1,0,0x88);
    *(undefined8 *)((longlong)plVar6 + 0x4c) = 0xffffffff00000080;
    memset(plVar6 + 0x13,0,0x90);
    local_40 = plVar1;
    local_38 = plVar6;
    FUN_143dc8484(&local_40,plVar1);
    FUN_140f4bed6(plVar1,param_2);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(lVar4 + 0x58);
    *(uint *)(lVar4 + 0x58) = iVar3 + 1U;
    if (*(uint *)(lVar4 + 0x5c) < iVar3 + 1U) {
      FUN_1488e2d44((longlong *)(lVar4 + 0x50),iVar3);
    }
    plVar5 = local_38;
    lVar4 = *(longlong *)(lVar4 + 0x50);
    *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar1;
    *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dc93d2 FUN_143dc93d2 body=299 status=ok
// SIG undefined FUN_143dc93d2(void)

void FUN_143dc93d2(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = FUN_140b33e0a(param_1,param_3,local_48);
  if (iVar5 != 1) {
    if (((iVar5 != 0) ||
        (((double)param_1[8] - (double)param_1[6]) * ((double)param_1[8] - (double)param_1[6]) +
         ((double)param_1[9] - (double)param_1[7]) * ((double)param_1[9] - (double)param_1[7]) <=
         (double)(*(float *)(param_1 + 0xd) * *(float *)(param_1 + 0xd)))) ||
       ((int)param_1[1] < 100)) {
      local_58 = *(undefined8 *)(param_3 + 8);
      local_78 = *param_3;
      uStack_74 = param_3[1];
      uStack_70 = param_3[2];
      uStack_6c = param_3[3];
      local_68 = param_3[4];
      uStack_64 = param_3[5];
      uStack_60 = param_3[6];
      uStack_5c = param_3[7];
      uVar2 = *param_2;
      lVar3 = param_2[1];
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
        UNLOCK();
      }
      iVar5 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
        FUN_146555a86(param_1,iVar5);
      }
      lVar4 = *param_1;
      lVar6 = (longlong)iVar5 * 0x38;
      *(undefined8 *)(lVar4 + 0x20 + lVar6) = local_58;
      puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar6);
      *puVar1 = local_68;
      puVar1[1] = uStack_64;
      puVar1[2] = uStack_60;
      puVar1[3] = uStack_5c;
      puVar1 = (undefined4 *)(lVar4 + lVar6);
      *puVar1 = local_78;
      puVar1[1] = uStack_74;
      puVar1[2] = uStack_70;
      puVar1[3] = uStack_6c;
      *(undefined8 *)(lVar4 + 0x28 + lVar6) = uVar2;
      *(longlong *)(lVar4 + 0x30 + lVar6) = lVar3;
      if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    FUN_1488e2f38(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
}



// FUNCTION 143dc9524 FUN_143dc9524 body=53 status=ok
// SIG undefined FUN_143dc9524(void)

void FUN_143dc9524(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14189a908(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 143dc955a FUN_143dc955a body=1706 status=ok
// SIG undefined FUN_143dc955a(void)

void FUN_143dc955a(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  uint *puVar22;
  int iVar23;
  ulonglong uVar24;
  
  param_1 = (longlong *)*param_1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar23 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar23 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar23) {
      FUN_1446efaca(param_1,iVar23);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar3 = iVar20 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar10 = iVar20 + 1;
    iVar15 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar15 = iVar20;
    }
    if (iVar15 >> 5 == iVar3) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        iVar3 = iVar20;
        if (iVar20 + 0x20U < 0xa0) {
          iVar10 = 0x80;
        }
        else {
          uVar16 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar16) {
              uVar9 = uVar16;
            }
          }
          else {
            uVar9 = uVar16 + (uVar16 * 3 >> 3) + 0x10;
          }
          uVar8 = (ulonglong)(uVar9 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar18 = (uint)(uVar8 + 0xf);
              if (uVar9 < 0x1ffd) {
                uVar8 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 + 0xf >> 4]];
              }
              else {
                uVar14 = (ulonglong)(uVar18 & 0xfffffff0);
                if (uVar14 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar18 >> 4];
                  uVar24 = 0x32;
                  if (0x32 < bVar7) {
                    uVar24 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_143dc9b02;
                    lVar6 = uVar24 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar6 != 0x33);
                }
                uVar8 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar8 = (ulonglong)DAT_14c841df8;
                }
                uVar8 = -uVar8 & (uVar14 + uVar8) - 1;
              }
            }
            else {
              uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
              iVar3 = (int)param_1[5];
            }
          }
LAB_143dc9b02:
          iVar5 = (int)(uVar8 >> 2);
          iVar10 = -0x20;
          if ((int)uVar16 <= iVar5) {
            iVar10 = iVar5 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar12,iVar3);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar3 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar3 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar11 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar11 = plVar12;
        }
        bVar7 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar11 + (longlong)(iVar3 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar11 + (longlong)(iVar3 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar23;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar20 & 0x1f;
    puVar22 = (uint *)((longlong)plVar12 + (longlong)(iVar15 >> 5) * 4);
    *puVar22 = *puVar22 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar23 = (int)param_1[6];
    lVar6 = (longlong)iVar23;
    iVar20 = *(int *)(*param_1 + 4 + lVar6 * 0x10);
    *(int *)(param_1 + 6) = iVar20;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x10) = 0xffffffff;
    }
  }
  puVar22 = (uint *)(param_1 + 2);
  uVar16 = 1;
  uVar9 = 1 << ((byte)iVar23 & 0x1f);
  puVar13 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar13 = puVar22;
  }
  iVar20 = iVar23 + 0x1f;
  if (-1 < iVar23) {
    iVar20 = iVar23;
  }
  puVar13[iVar20 >> 5] = puVar13[iVar20 >> 5] | uVar9;
  lVar21 = *param_1;
  lVar6 = lVar6 * 0x10;
  *(ulonglong *)(lVar21 + lVar6) = param_2;
  *(undefined4 *)(lVar21 + 8 + lVar6) = 0xffffffff;
  uVar18 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
  uVar18 = uVar18 >> 0x10 ^ uVar18;
  uVar19 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar19 != 0) && (uVar19 != 1)) {
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & uVar18) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(ulonglong *)(*param_1 + (longlong)iVar3 * 0x10) == param_2) {
          *puVar1 = param_2;
          lVar6 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar6 + (longlong)(int)param_1[6] * 0x10) = iVar23;
          }
          *(undefined4 *)(lVar6 + (longlong)iVar23 * 0x10) = 0xffffffff;
          uVar4 = 0xffffffff;
          if (0 < *(int *)((longlong)param_1 + 0x34)) {
            uVar4 = (undefined4)param_1[6];
          }
          *(undefined4 *)(lVar6 + (longlong)iVar23 * 0x10 + 4) = uVar4;
          *(int *)(param_1 + 6) = iVar23;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          if ((uint *)param_1[4] != (uint *)0x0) {
            puVar22 = (uint *)param_1[4];
          }
          puVar22[iVar20 >> 5] = puVar22[iVar20 >> 5] & ~uVar9;
          return;
        }
        iVar3 = (int)puVar1[1];
      } while (iVar3 != -1);
    }
  }
  if (3 < uVar19) {
    uVar8 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar19 < 1) || ((int)uVar16 <= (int)param_1[9])) {
    uVar18 = (int)param_1[9] - 1U & uVar18;
    *(uint *)(lVar21 + lVar6 + 0xc) = uVar18;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(lVar21 + lVar6 + 8) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4) =
         iVar23;
    return;
  }
  *(uint *)(param_1 + 9) = uVar16;
  plVar12 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar12,0,0,4);
    uVar16 = *(uint *)(param_1 + 9);
  }
  plVar11 = param_1 + 7;
  if (uVar16 == 1) {
    if (*plVar12 != 0) {
      FUN_1446efa72(plVar12,0,0,4);
    }
  }
  else {
    if (uVar16 == 0) {
      return;
    }
    FUN_1446efa72(plVar12,0,uVar16,4);
    if ((int)uVar16 < 1) goto LAB_143dc98b1;
  }
  uVar9 = 0;
  do {
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = plVar11;
    }
    *(undefined4 *)((longlong)plVar12 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
         0xffffffff;
    uVar9 = uVar9 + 1;
  } while (uVar16 != uVar9);
LAB_143dc98b1:
  iVar23 = (int)param_1[5];
  if (iVar23 == 0) {
    uVar8 = 0;
    uVar14 = 1;
    iVar20 = 0;
    iVar3 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puVar22;
    }
    uVar16 = *puVar13;
    if (uVar16 == 0) {
      iVar20 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar20 = iVar23 + -1;
      }
      uVar8 = 0;
      uVar14 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar14 = uVar8;
      }
      iVar3 = 0;
      do {
        if (uVar14 == uVar8) {
          return;
        }
        iVar3 = iVar3 + 0x20;
        uVar16 = puVar13[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar8 = 0;
      iVar3 = 0;
    }
    uVar14 = (ulonglong)(-uVar16 & uVar16);
    uVar24 = uVar14 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar20 = (iVar3 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar23 <= iVar20) {
      iVar20 = iVar23;
    }
  }
  if (iVar20 < iVar23) {
    uVar16 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar21 = (longlong)iVar20 * 0x10;
      uVar9 = ((uint)(*(ulonglong *)(lVar6 + lVar21) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar21) >> 4)) * -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      uVar24 = (longlong)(int)(uVar9 >> 0x10 ^ uVar9) & (longlong)(int)param_1[9] - 1U;
      iVar23 = (int)uVar24;
      *(int *)(lVar6 + 0xc + lVar21) = iVar23;
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar11;
      }
      *(undefined4 *)(lVar6 + 8 + lVar21) =
           *(undefined4 *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & uVar24) * 4);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar11;
      }
      *(int *)((longlong)plVar12 + ((longlong)iVar23 & (longlong)(int)param_1[9] - 1U) * 4) = iVar20
      ;
      uVar16 = ~(uint)uVar14 & uVar16;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puVar22;
      }
      iVar23 = (int)param_1[5];
      iVar20 = (int)uVar8;
      lVar6 = (longlong)iVar20;
      uVar9 = puVar13[lVar6] & uVar16;
      if (uVar9 == 0) {
        iVar10 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar10 = iVar23 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar15 = iVar10;
        if (iVar10 < iVar20) {
          iVar15 = iVar20;
        }
        if (iVar10 <= iVar20) {
          return;
        }
        lVar21 = 0;
        while( true ) {
          iVar3 = iVar3 + 0x20;
          uVar9 = puVar13[lVar6 + lVar21 + 1];
          if (uVar9 != 0) break;
          lVar21 = lVar21 + 1;
          if (iVar15 - lVar6 == lVar21) {
            return;
          }
        }
        uVar8 = (ulonglong)(iVar20 + (int)lVar21 + 1);
        uVar16 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar9 & uVar9);
      uVar24 = uVar14 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar20 = (iVar3 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar20 < iVar23);
  }
  return;
}



// FUNCTION 143dc9c04 FUN_143dc9c04 body=162 status=ok
// SIG undefined FUN_143dc9c04(void)

undefined8 FUN_143dc9c04(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0xc00;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841ec0];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0xc00,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if (0x3f < (int)(uVar3 / 0x30)) {
    uVar4 = uVar3 / 0x30 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x30,8);
  }
  return uVar2;
}



// FUNCTION 143dc9ca6 FUN_143dc9ca6 body=158 status=ok
// SIG undefined FUN_143dc9ca6(void)

void FUN_143dc9ca6(longlong *param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  puVar5 = (undefined8 *)param_1[3];
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_147f0bcf2(param_1,iVar3);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar3 * 4) = *(undefined4 *)(param_2 + 0x20);
  if (1 < (int)param_1[1]) {
    lVar6 = *param_1;
    uVar7 = (ulonglong)((int)param_1[1] - 1);
    iVar3 = *(int *)(lVar6 + uVar7 * 4);
    do {
      uVar8 = (int)uVar7 - 1;
      uVar9 = (ulonglong)(uVar8 >> 1);
      iVar4 = *(int *)(lVar6 + uVar9 * 4);
      dVar2 = *(double *)(*(longlong *)*puVar5 + 0x18 + (longlong)iVar4 * 0x30);
      pdVar1 = (double *)(*(longlong *)*puVar5 + 0x18 + (longlong)iVar3 * 0x30);
      if (dVar2 < *pdVar1 || dVar2 == *pdVar1) break;
      *(int *)(lVar6 + uVar7 * 4) = iVar4;
      *(int *)(lVar6 + uVar9 * 4) = iVar3;
      uVar7 = uVar9;
    } while (1 < uVar8);
  }
  *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) | 1;
  return;
}



// FUNCTION 143dc9d44 FUN_143dc9d44 body=265 status=ok
// SIG undefined FUN_143dc9d44(void)

void FUN_143dc9d44(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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



// FUNCTION 143dc9e4e FUN_143dc9e4e body=195 status=ok
// SIG undefined FUN_143dc9e4e(void)

void FUN_143dc9e4e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  
  if ((param_2 != 0) && (lVar1 = *param_1, 0 < *(int *)(lVar1 + 0x1e0))) {
    cVar8 = '\x01';
    do {
      lVar2 = *(longlong *)(lVar1 + 0x1d8);
      if (*(longlong *)(lVar2 + (longlong)(char)(cVar8 + -1) * 8) != 0) {
        lVar6 = FUN_140594892();
        plVar3 = *(longlong **)(lVar2 + (longlong)(char)(cVar8 + -1) * 8);
        if ((((plVar3 != (longlong *)0x0) && (lVar6 != 0)) && (lVar2 = plVar3[2], lVar2 != 0)) &&
           ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar2 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
             lVar6 + 0x30)))) {
          uVar7 = (**(code **)(*plVar3 + 0x2c0))(plVar3);
          cVar4 = FUN_1448093f4(param_2,uVar7);
          if (cVar4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143dc9f0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x2d0))(plVar3,param_2);
            return;
          }
        }
      }
      iVar5 = (int)cVar8;
      cVar8 = cVar8 + '\x01';
    } while (iVar5 < *(int *)(lVar1 + 0x1e0));
  }
  return;
}



// FUNCTION 143dc9f12 FUN_143dc9f12 body=672 status=ok
// SIG undefined FUN_143dc9f12(void)

void FUN_143dc9f12(longlong *param_1)

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
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_143dc9f8f;
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
LAB_143dc9f8f:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar15 = 0;
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
      lVar16 = (longlong)iVar15 * 0x60;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x5c + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x58 + lVar16) =
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



// FUNCTION 143dca1b2 FUN_143dca1b2 body=672 status=ok
// SIG undefined FUN_143dca1b2(void)

void FUN_143dca1b2(longlong *param_1)

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
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_143dca22f;
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
LAB_143dca22f:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar15 = 0;
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
      lVar16 = (longlong)iVar15 * 0x60;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x5c + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x58 + lVar16) =
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



// FUNCTION 143dca452 FUN_143dca452 body=5787 status=ok
// SIG undefined FUN_143dca452(void)

void FUN_143dca452(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  void *pvVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  undefined4 uVar27;
  longlong *plVar28;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98 [11];
  
  local_98[10] = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == (longlong *)0x0) goto LAB_143dcb0f5;
  lVar12 = *param_1;
  lVar9 = (**(code **)(*param_3 + 8))(param_3);
  lVar10 = FUN_140443780();
  if (((lVar10 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
      lVar10 + 0x30)) {
    lVar9 = (**(code **)(*param_3 + 8))(param_3);
    lVar10 = FUN_14015bf82();
    if (((lVar10 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
        lVar10 + 0x30)) goto LAB_143dcb0f5;
    plVar28 = (longlong *)(lVar12 + 0x4d8);
    FUN_140e3418c(param_2,&local_a0,1);
    uVar22 = (uint)((ulonglong)local_a0 >> 0x10);
    uVar24 = (uint)local_a0 & 0xffff;
    uVar22 = ((uint)local_a0 << 0x10 | uVar24) + (int)((ulonglong)local_a0 >> 0x20) +
             (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar24 >> 4);
    iVar26 = *(int *)(lVar12 + 0x4e0);
    iVar21 = *(int *)(lVar12 + 0x50c);
    if (iVar26 != iVar21) {
      lVar9 = lVar12 + 0x510;
      if (*(longlong *)(lVar12 + 0x518) != 0) {
        lVar9 = *(longlong *)(lVar12 + 0x518);
      }
      iVar7 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar12 + 0x520) - 1U & uVar22) * 4);
      if (iVar7 != -1) {
        do {
          lVar9 = *plVar28 + (longlong)iVar7 * 0x60;
          if (*(longlong *)(*plVar28 + (longlong)iVar7 * 0x60) == local_a0) {
            if (lVar9 != 0) goto LAB_143dcaea7;
            break;
          }
          iVar7 = *(int *)(lVar9 + 0x58);
        } while (iVar7 != -1);
      }
    }
    local_b0 = plVar28;
    if (iVar21 == 0) {
      *(int *)(lVar12 + 0x4e0) = iVar26 + 1;
      if (*(int *)(lVar12 + 0x4e4) == iVar26) {
        FUN_14488f93c(plVar28,iVar26);
      }
      iVar21 = *(int *)(lVar12 + 0x500);
      if (iVar21 == 0) {
        iVar7 = -1;
      }
      else {
        iVar7 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar7 = iVar21 + -1;
        }
        iVar7 = iVar7 >> 5;
      }
      lVar9 = lVar12 + 0x4e8;
      iVar15 = iVar21 + 1;
      iVar23 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar23 = iVar21;
      }
      if (iVar23 >> 5 == iVar7) {
        *(int *)(lVar12 + 0x500) = iVar15;
      }
      else {
        if (*(int *)(lVar12 + 0x504) <= iVar21) {
          uVar24 = iVar21 + 0x20;
          local_b8 = (ulonglong)uVar24;
          iVar7 = iVar21;
          if (uVar24 < 0xa0) {
            iVar15 = 0x80;
          }
          else {
            uVar24 = uVar24 >> 5;
            local_b8 = (ulonglong)uVar24;
            if (*(int *)(lVar12 + 0x504) + 0x1fU < 0xa0) {
              uVar6 = 4;
              if (4 < uVar24) {
                uVar6 = uVar24;
              }
            }
            else {
              uVar6 = uVar24 + (uVar24 * 3 >> 3) + 0x10;
            }
            uVar17 = (ulonglong)(uVar6 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar24 = (uint)(uVar17 + 0xf);
                if (uVar6 < 0x1ffd) {
                  uVar17 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar24 >> 4]];
                }
                else {
                  uVar13 = uVar17 + 0xf & 0xfffffffffffffff0;
                  if (uVar13 < 0x7ff1) {
                    bVar14 = (&DAT_14c841e00)[uVar24 >> 4];
                    uVar19 = 0x32;
                    if (0x32 < bVar14) {
                      uVar19 = (ulonglong)bVar14;
                    }
                    uVar20 = 0x32 - (ulonglong)bVar14;
                    do {
                      uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar20 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar20 & 0xffffffff] & 0xf) == 0) goto LAB_143dcb757;
                      lVar10 = uVar19 + 1 + uVar20;
                      uVar20 = uVar20 - 1;
                    } while (lVar10 != 0x33);
                  }
                  uVar17 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar17 = (ulonglong)DAT_14c841df8;
                  }
                  uVar17 = -uVar17 & (uVar13 + uVar17) - 1;
                }
              }
              else {
                uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
                iVar7 = *(int *)(lVar12 + 0x500);
              }
            }
LAB_143dcb757:
            iVar8 = (int)(uVar17 >> 2);
            iVar15 = -0x20;
            if ((int)local_b8 <= iVar8) {
              iVar15 = iVar8 << 5;
            }
          }
          *(int *)(lVar12 + 0x504) = iVar15;
          FUN_1446efbd8(lVar9,iVar7);
          iVar15 = *(int *)(lVar12 + 0x500) + 1;
        }
        iVar7 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar7 = iVar15;
        }
        *(int *)(lVar12 + 0x500) = iVar15;
        if (iVar15 % 0x20 != 0) {
          lVar10 = *(longlong *)(lVar12 + 0x4f8);
          if (*(longlong *)(lVar12 + 0x4f8) == 0) {
            lVar10 = lVar9;
          }
          bVar14 = -(char)(iVar15 % 0x20);
          *(uint *)(lVar10 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar10 + (longlong)(iVar7 >> 5) * 4) << (bVar14 & 0x1f)) >>
               (bVar14 & 0x1f);
        }
      }
      lVar10 = (longlong)iVar26;
      if (*(longlong *)(lVar12 + 0x4f8) != 0) {
        lVar9 = *(longlong *)(lVar12 + 0x4f8);
      }
      bVar14 = (byte)iVar21 & 0x1f;
      puVar2 = (uint *)(lVar9 + (longlong)(iVar23 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
    }
    else {
      iVar26 = *(int *)(lVar12 + 0x508);
      lVar10 = (longlong)iVar26;
      iVar7 = *(int *)(*(longlong *)(lVar12 + 0x4d8) + 4 + lVar10 * 0x60);
      *(int *)(lVar12 + 0x508) = iVar7;
      *(int *)(lVar12 + 0x50c) = iVar21 + -1;
      if (iVar21 + -1 != 0) {
        *(undefined4 *)(*(longlong *)(lVar12 + 0x4d8) + (longlong)iVar7 * 0x60) = 0xffffffff;
      }
    }
    local_b8 = lVar12 + 0x4e8;
    uVar24 = 1 << ((byte)iVar26 & 0x1f);
    lVar9 = *(longlong *)(lVar12 + 0x4f8);
    if (*(longlong *)(lVar12 + 0x4f8) == 0) {
      lVar9 = local_b8;
    }
    iVar21 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar21 = iVar26;
    }
    local_a8 = (longlong)(iVar21 >> 5);
    puVar2 = (uint *)(lVar9 + local_a8 * 4);
    *puVar2 = *puVar2 | uVar24;
    iVar21 = 1;
    plVar28 = (longlong *)(*(longlong *)(lVar12 + 0x4d8) + lVar10 * 0x60);
    local_98[4] = 0;
    local_98[7] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[5] = 0x8000000000;
    local_98[6] = 0xffffffff;
    plVar16 = (longlong *)(*(longlong *)(lVar12 + 0x4d8) + lVar10 * 0x60);
    *plVar16 = local_a0;
    plVar16[5] = 0;
    *(undefined4 *)(plVar16 + 6) = 0;
    plVar16[1] = 0;
    plVar16[2] = 0;
    *(undefined8 *)((longlong)plVar16 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar16 + 0x3c) = 0;
    if ((ulonglong *)(plVar16 + 1) != local_98) {
      *(undefined4 *)(plVar28 + 3) = 0;
      *(undefined4 *)((longlong)plVar28 + 0x1c) = 0;
      *(undefined4 *)(plVar28 + 4) = 0;
      *(undefined4 *)((longlong)plVar28 + 0x24) = 0;
      local_98[5] = 0;
    }
    *(undefined4 *)(plVar28 + 8) = 0;
    plVar28[9] = 0;
    local_98[8] = 0;
    *(undefined4 *)(plVar28 + 10) = 0;
    local_98[9] = 0;
    FUN_143c853d0();
    plVar16 = local_b0;
    *(undefined4 *)(plVar28 + 0xb) = 0xffffffff;
    uVar6 = *(int *)(lVar12 + 0x4e0) - *(int *)(lVar12 + 0x50c);
    if (uVar6 != 1) {
      if (*(int *)(lVar12 + 0x4e0) != *(int *)(lVar12 + 0x50c)) {
        lVar9 = lVar12 + 0x510;
        if (*(longlong *)(lVar12 + 0x518) != 0) {
          lVar9 = *(longlong *)(lVar12 + 0x518);
        }
        iVar7 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar12 + 0x520) - 1U & uVar22) * 4);
        if (iVar7 != -1) {
          do {
            pvVar3 = (void *)(*local_b0 + (longlong)iVar7 * 0x60);
            if (*(longlong *)(*local_b0 + (longlong)iVar7 * 0x60) == *plVar28) {
              *(undefined4 *)((longlong)pvVar3 + 0x50) = 0;
              if (*(longlong *)((longlong)pvVar3 + 0x48) != 0) {
                FUN_1400020a8();
              }
              FUN_143c853d0((longlong)pvVar3 + 8);
              memmove(pvVar3,plVar28,0x58);
              lVar9 = *(longlong *)(lVar12 + 0x4d8);
              if (*(int *)(lVar12 + 0x50c) != 0) {
                *(int *)(lVar9 + (longlong)*(int *)(lVar12 + 0x508) * 0x60) = iVar26;
              }
              lVar10 = (longlong)iVar26 * 0x60;
              *(undefined4 *)(lVar9 + lVar10) = 0xffffffff;
              if (*(int *)(lVar12 + 0x50c) < 1) {
                uVar27 = 0xffffffff;
              }
              else {
                uVar27 = *(undefined4 *)(lVar12 + 0x508);
              }
              *(undefined4 *)(lVar9 + lVar10 + 4) = uVar27;
              *(int *)(lVar12 + 0x508) = iVar26;
              *(int *)(lVar12 + 0x50c) = *(int *)(lVar12 + 0x50c) + 1;
              uVar17 = local_b8;
              if (*(longlong *)(lVar12 + 0x4f8) != 0) {
                uVar17 = *(longlong *)(lVar12 + 0x4f8);
              }
              puVar2 = (uint *)(uVar17 + local_a8 * 4);
              *puVar2 = *puVar2 & ~uVar24;
              plVar16 = local_b0;
              goto LAB_143dcae94;
            }
            iVar7 = *(int *)((longlong)pvVar3 + 0x58);
          } while (iVar7 != -1);
        }
      }
      if (3 < uVar6) {
        uVar17 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
        lVar9 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar21 = 1 << ((byte)lVar9 & 0x1f);
      }
    }
    if (((int)uVar6 < 1) || (iVar21 <= *(int *)(lVar12 + 0x520))) {
      uVar22 = *(int *)(lVar12 + 0x520) - 1U & uVar22;
      *(uint *)((longlong)plVar28 + 0x5c) = uVar22;
      lVar9 = *(longlong *)(lVar12 + 0x518);
      if (*(longlong *)(lVar12 + 0x518) == 0) {
        lVar9 = lVar12 + 0x510;
      }
      *(undefined4 *)(plVar28 + 0xb) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(lVar12 + 0x520) - 1U & (longlong)(int)uVar22) * 4);
      lVar9 = *(longlong *)(lVar12 + 0x518);
      if (*(longlong *)(lVar12 + 0x518) == 0) {
        lVar9 = lVar12 + 0x510;
      }
      *(int *)(lVar9 + ((longlong)*(int *)(lVar12 + 0x520) - 1U & (longlong)(int)uVar22) * 4) =
           iVar26;
    }
    else {
      *(int *)(lVar12 + 0x520) = iVar21;
      FUN_143dca1b2(local_b0);
    }
LAB_143dcae94:
    lVar9 = *plVar16 + (longlong)iVar26 * 0x60;
LAB_143dcaea7:
    plVar28 = (longlong *)(lVar9 + 8);
    piVar11 = (int *)&DAT_14c948618;
    puVar18 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    if (((((int)param_3[5] != 0) && (*(int *)((longlong)param_3 + 0x2c) != 0)) &&
        ((int)param_3[5] != DAT_14c948000)) && (4 < *(int *)((longlong)param_3 + 0x2c))) {
      piVar11 = (int *)(param_3[8] + 0x30);
      puVar18 = (ulonglong *)(param_3[8] + 0x34);
    }
    uVar17 = *puVar18;
    if ((uVar17 == DAT_14c948034) && (*piVar11 != DAT_14c948030)) {
      FUN_14011791e(local_98,*piVar11,uVar17 >> 0x20);
      uVar17 = local_98[0];
    }
    if (*(int *)(lVar9 + 0x3c) == 0) {
      iVar21 = *(int *)(lVar9 + 0x10);
      *(int *)(lVar9 + 0x10) = iVar21 + 1;
      if (*(int *)(lVar9 + 0x14) == iVar21) {
        FUN_14482b872(plVar28,iVar21);
      }
      iVar26 = *(int *)(lVar9 + 0x30);
      if (iVar26 == 0) {
        iVar7 = -1;
      }
      else {
        iVar7 = iVar26 + 0x1e;
        if (-1 < iVar26 + -1) {
          iVar7 = iVar26 + -1;
        }
        iVar7 = iVar7 >> 5;
      }
      lVar12 = lVar9 + 0x18;
      iVar15 = iVar26 + 1;
      iVar23 = iVar26 + 0x1f;
      if (-1 < iVar26) {
        iVar23 = iVar26;
      }
      if (iVar23 >> 5 == iVar7) {
        *(int *)(lVar9 + 0x30) = iVar15;
      }
      else {
        if (*(int *)(lVar9 + 0x34) <= iVar26) {
          iVar7 = iVar26;
          if (iVar26 + 0x20U < 0xa0) {
            iVar15 = 0x80;
          }
          else {
            uVar22 = iVar26 + 0x20U >> 5;
            if (*(int *)(lVar9 + 0x34) + 0x1fU < 0xa0) {
              uVar24 = 4;
              if (4 < uVar22) {
                uVar24 = uVar22;
              }
            }
            else {
              uVar24 = uVar22 + (uVar22 * 3 >> 3) + 0x10;
            }
            uVar13 = (ulonglong)(uVar24 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar6 = (uint)(uVar13 + 0xf);
                if (uVar24 < 0x1ffd) {
                  uVar13 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
                }
                else {
                  uVar19 = uVar13 + 0xf & 0xfffffffffffffff0;
                  if (uVar19 < 0x7ff1) {
                    bVar14 = (&DAT_14c841e00)[uVar6 >> 4];
                    uVar20 = 0x32;
                    if (0x32 < bVar14) {
                      uVar20 = (ulonglong)bVar14;
                    }
                    uVar25 = 0x32 - (ulonglong)bVar14;
                    do {
                      uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0) goto LAB_143dcb6a1;
                      lVar10 = uVar20 + 1 + uVar25;
                      uVar25 = uVar25 - 1;
                    } while (lVar10 != 0x33);
                  }
                  uVar13 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar13 = (ulonglong)DAT_14c841df8;
                  }
                  uVar13 = -uVar13 & (uVar19 + uVar13) - 1;
                }
              }
              else {
                uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
                iVar7 = *(int *)(lVar9 + 0x30);
              }
            }
LAB_143dcb6a1:
            iVar8 = (int)(uVar13 >> 2);
            iVar15 = -0x20;
            if ((int)uVar22 <= iVar8) {
              iVar15 = iVar8 << 5;
            }
          }
          *(int *)(lVar9 + 0x34) = iVar15;
          FUN_1446efbd8(lVar12,iVar7);
          iVar15 = *(int *)(lVar9 + 0x30) + 1;
        }
        iVar7 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar7 = iVar15;
        }
        *(int *)(lVar9 + 0x30) = iVar15;
        if (iVar15 % 0x20 != 0) {
          lVar10 = *(longlong *)(lVar9 + 0x28);
          if (*(longlong *)(lVar9 + 0x28) == 0) {
            lVar10 = lVar12;
          }
          bVar14 = -(char)(iVar15 % 0x20);
          *(uint *)(lVar10 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar10 + (longlong)(iVar7 >> 5) * 4) << (bVar14 & 0x1f)) >>
               (bVar14 & 0x1f);
        }
      }
      lVar10 = (longlong)iVar21;
      if (*(longlong *)(lVar9 + 0x28) != 0) {
        lVar12 = *(longlong *)(lVar9 + 0x28);
      }
      bVar14 = (byte)iVar26 & 0x1f;
      puVar2 = (uint *)(lVar12 + (longlong)(iVar23 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
    }
    else {
      iVar21 = *(int *)(lVar9 + 0x38);
      lVar10 = (longlong)iVar21;
      iVar26 = *(int *)(*plVar28 + 4 + lVar10 * 0x18);
      *(int *)(lVar9 + 0x38) = iVar26;
      iVar7 = *(int *)(lVar9 + 0x3c) + -1;
      *(int *)(lVar9 + 0x3c) = iVar7;
      if (iVar7 != 0) {
        *(undefined4 *)(*plVar28 + (longlong)iVar26 * 0x18) = 0xffffffff;
      }
    }
    uVar22 = 1 << ((byte)iVar21 & 0x1f);
    iVar26 = 1;
    lVar12 = *(longlong *)(lVar9 + 0x28);
    if (*(longlong *)(lVar9 + 0x28) == 0) {
      lVar12 = lVar9 + 0x18;
    }
    iVar7 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar7 = iVar21;
    }
    puVar2 = (uint *)(lVar12 + (longlong)(iVar7 >> 5) * 4);
    *puVar2 = *puVar2 | uVar22;
    puVar18 = (ulonglong *)(*plVar28 + lVar10 * 0x18);
    *puVar18 = uVar17;
    puVar18[1] = (ulonglong)param_3;
    *(undefined4 *)(puVar18 + 2) = 0xffffffff;
    uVar24 = (uint)(uVar17 >> 0x10);
    uVar6 = (uint)uVar17 & 0xffff;
    uVar24 = ((uint)uVar17 << 0x10 | uVar6) + (int)(uVar17 >> 0x20) +
             (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar6 >> 4);
    uVar6 = *(int *)(lVar9 + 0x10) - *(int *)(lVar9 + 0x3c);
    if (1 < uVar6) {
      lVar12 = lVar9 + 0x40;
      if (*(longlong *)(lVar9 + 0x48) != 0) {
        lVar12 = *(longlong *)(lVar9 + 0x48);
      }
      iVar15 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar9 + 0x50) - 1U & uVar24) * 4);
      if (iVar15 != -1) {
        do {
          puVar4 = (ulonglong *)(*plVar28 + (longlong)iVar15 * 0x18);
          if (*puVar4 == uVar17) {
            uVar17 = puVar18[1];
            *puVar4 = *puVar18;
            puVar4[1] = uVar17;
            lVar12 = *plVar28;
            if (*(int *)(lVar9 + 0x3c) != 0) {
              *(int *)(lVar12 + (longlong)*(int *)(lVar9 + 0x38) * 0x18) = iVar21;
            }
            puVar5 = (undefined4 *)(lVar12 + (longlong)iVar21 * 0x18);
            *puVar5 = 0xffffffff;
            if (*(int *)(lVar9 + 0x3c) < 1) {
              uVar27 = 0xffffffff;
            }
            else {
              uVar27 = *(undefined4 *)(lVar9 + 0x38);
            }
            puVar5[1] = uVar27;
            *(int *)(lVar9 + 0x38) = iVar21;
            *(int *)(lVar9 + 0x3c) = *(int *)(lVar9 + 0x3c) + 1;
            lVar12 = lVar9 + 0x18;
            if (*(longlong *)(lVar9 + 0x28) != 0) {
              lVar12 = *(longlong *)(lVar9 + 0x28);
            }
            puVar2 = (uint *)(lVar12 + (longlong)(iVar7 >> 5) * 4);
            *puVar2 = *puVar2 & ~uVar22;
            goto LAB_143dcb0f5;
          }
          iVar15 = (int)puVar4[2];
        } while (iVar15 != -1);
      }
    }
    if (3 < uVar6) {
      uVar17 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar26 = 1 << ((byte)lVar12 & 0x1f);
    }
    if ((0 < (int)uVar6) && (*(int *)(lVar9 + 0x50) < iVar26)) {
      *(int *)(lVar9 + 0x50) = iVar26;
      FUN_143dcbd8a(plVar28);
      goto LAB_143dcb0f5;
    }
    uVar24 = *(int *)(lVar9 + 0x50) - 1U & uVar24;
    *(uint *)((longlong)puVar18 + 0x14) = uVar24;
    lVar12 = lVar9 + 0x40;
    lVar10 = *(longlong *)(lVar9 + 0x48);
    if (*(longlong *)(lVar9 + 0x48) == 0) {
      lVar10 = lVar12;
    }
    uVar17 = (ulonglong)(int)uVar24;
    *(undefined4 *)(puVar18 + 2) =
         *(undefined4 *)(lVar10 + ((longlong)*(int *)(lVar9 + 0x50) - 1U & uVar17) * 4);
  }
  else {
    plVar28 = (longlong *)(lVar12 + 0x488);
    FUN_140e3418c(param_2,&local_a0,1);
    uVar22 = (uint)((ulonglong)local_a0 >> 0x10);
    uVar24 = (uint)local_a0 & 0xffff;
    uVar22 = ((uint)local_a0 << 0x10 | uVar24) + (int)((ulonglong)local_a0 >> 0x20) +
             (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar24 >> 4);
    iVar26 = *(int *)(lVar12 + 0x490);
    iVar21 = *(int *)(lVar12 + 0x4bc);
    if (iVar26 != iVar21) {
      lVar9 = lVar12 + 0x4c0;
      if (*(longlong *)(lVar12 + 0x4c8) != 0) {
        lVar9 = *(longlong *)(lVar12 + 0x4c8);
      }
      iVar7 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar12 + 0x4d0) - 1U & uVar22) * 4);
      if (iVar7 != -1) {
        do {
          lVar9 = *plVar28 + (longlong)iVar7 * 0x60;
          if (*(longlong *)(*plVar28 + (longlong)iVar7 * 0x60) == local_a0) {
            if (lVar9 != 0) goto LAB_143dca96b;
            break;
          }
          iVar7 = *(int *)(lVar9 + 0x58);
        } while (iVar7 != -1);
      }
    }
    local_b0 = plVar28;
    if (iVar21 == 0) {
      *(int *)(lVar12 + 0x490) = iVar26 + 1;
      if (*(int *)(lVar12 + 0x494) == iVar26) {
        FUN_14488f93c(plVar28,iVar26);
      }
      iVar21 = *(int *)(lVar12 + 0x4b0);
      if (iVar21 == 0) {
        iVar7 = -1;
      }
      else {
        iVar7 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar7 = iVar21 + -1;
        }
        iVar7 = iVar7 >> 5;
      }
      lVar9 = lVar12 + 0x498;
      iVar15 = iVar21 + 1;
      iVar23 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar23 = iVar21;
      }
      if (iVar23 >> 5 == iVar7) {
        *(int *)(lVar12 + 0x4b0) = iVar15;
      }
      else {
        if (*(int *)(lVar12 + 0x4b4) <= iVar21) {
          uVar24 = iVar21 + 0x20;
          local_b8 = (ulonglong)uVar24;
          iVar7 = iVar21;
          if (uVar24 < 0xa0) {
            iVar15 = 0x80;
          }
          else {
            uVar24 = uVar24 >> 5;
            local_b8 = (ulonglong)uVar24;
            if (*(int *)(lVar12 + 0x4b4) + 0x1fU < 0xa0) {
              uVar6 = 4;
              if (4 < uVar24) {
                uVar6 = uVar24;
              }
            }
            else {
              uVar6 = uVar24 + (uVar24 * 3 >> 3) + 0x10;
            }
            uVar17 = (ulonglong)(uVar6 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar24 = (uint)(uVar17 + 0xf);
                if (uVar6 < 0x1ffd) {
                  uVar17 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar24 >> 4]];
                }
                else {
                  uVar13 = uVar17 + 0xf & 0xfffffffffffffff0;
                  if (uVar13 < 0x7ff1) {
                    bVar14 = (&DAT_14c841e00)[uVar24 >> 4];
                    uVar19 = 0x32;
                    if (0x32 < bVar14) {
                      uVar19 = (ulonglong)bVar14;
                    }
                    uVar20 = 0x32 - (ulonglong)bVar14;
                    do {
                      uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar20 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar20 & 0xffffffff] & 0xf) == 0) goto LAB_143dcb5fa;
                      lVar10 = uVar19 + 1 + uVar20;
                      uVar20 = uVar20 - 1;
                    } while (lVar10 != 0x33);
                  }
                  uVar17 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar17 = (ulonglong)DAT_14c841df8;
                  }
                  uVar17 = -uVar17 & (uVar13 + uVar17) - 1;
                }
              }
              else {
                uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
                iVar7 = *(int *)(lVar12 + 0x4b0);
              }
            }
LAB_143dcb5fa:
            iVar8 = (int)(uVar17 >> 2);
            iVar15 = -0x20;
            if ((int)local_b8 <= iVar8) {
              iVar15 = iVar8 << 5;
            }
          }
          *(int *)(lVar12 + 0x4b4) = iVar15;
          FUN_1446efbd8(lVar9,iVar7);
          iVar15 = *(int *)(lVar12 + 0x4b0) + 1;
        }
        iVar7 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar7 = iVar15;
        }
        *(int *)(lVar12 + 0x4b0) = iVar15;
        if (iVar15 % 0x20 != 0) {
          lVar10 = *(longlong *)(lVar12 + 0x4a8);
          if (*(longlong *)(lVar12 + 0x4a8) == 0) {
            lVar10 = lVar9;
          }
          bVar14 = -(char)(iVar15 % 0x20);
          *(uint *)(lVar10 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar10 + (longlong)(iVar7 >> 5) * 4) << (bVar14 & 0x1f)) >>
               (bVar14 & 0x1f);
        }
      }
      lVar10 = (longlong)iVar26;
      if (*(longlong *)(lVar12 + 0x4a8) != 0) {
        lVar9 = *(longlong *)(lVar12 + 0x4a8);
      }
      bVar14 = (byte)iVar21 & 0x1f;
      puVar2 = (uint *)(lVar9 + (longlong)(iVar23 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
    }
    else {
      iVar26 = *(int *)(lVar12 + 0x4b8);
      lVar10 = (longlong)iVar26;
      iVar7 = *(int *)(*(longlong *)(lVar12 + 0x488) + 4 + lVar10 * 0x60);
      *(int *)(lVar12 + 0x4b8) = iVar7;
      *(int *)(lVar12 + 0x4bc) = iVar21 + -1;
      if (iVar21 + -1 != 0) {
        *(undefined4 *)(*(longlong *)(lVar12 + 0x488) + (longlong)iVar7 * 0x60) = 0xffffffff;
      }
    }
    local_b8 = lVar12 + 0x498;
    uVar24 = 1 << ((byte)iVar26 & 0x1f);
    lVar9 = *(longlong *)(lVar12 + 0x4a8);
    if (*(longlong *)(lVar12 + 0x4a8) == 0) {
      lVar9 = local_b8;
    }
    iVar21 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar21 = iVar26;
    }
    local_a8 = (longlong)(iVar21 >> 5);
    puVar2 = (uint *)(lVar9 + local_a8 * 4);
    *puVar2 = *puVar2 | uVar24;
    iVar21 = 1;
    plVar28 = (longlong *)(*(longlong *)(lVar12 + 0x488) + lVar10 * 0x60);
    local_98[4] = 0;
    local_98[7] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[5] = 0x8000000000;
    local_98[6] = 0xffffffff;
    plVar16 = (longlong *)(*(longlong *)(lVar12 + 0x488) + lVar10 * 0x60);
    *plVar16 = local_a0;
    plVar16[5] = 0;
    *(undefined4 *)(plVar16 + 6) = 0;
    plVar16[1] = 0;
    plVar16[2] = 0;
    *(undefined8 *)((longlong)plVar16 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar16 + 0x3c) = 0;
    if ((ulonglong *)(plVar16 + 1) != local_98) {
      *(undefined4 *)(plVar28 + 3) = 0;
      *(undefined4 *)((longlong)plVar28 + 0x1c) = 0;
      *(undefined4 *)(plVar28 + 4) = 0;
      *(undefined4 *)((longlong)plVar28 + 0x24) = 0;
      local_98[5] = 0;
    }
    *(undefined4 *)(plVar28 + 8) = 0;
    plVar28[9] = 0;
    local_98[8] = 0;
    *(undefined4 *)(plVar28 + 10) = 0;
    local_98[9] = 0;
    FUN_143c856a0();
    plVar16 = local_b0;
    *(undefined4 *)(plVar28 + 0xb) = 0xffffffff;
    uVar6 = *(int *)(lVar12 + 0x490) - *(int *)(lVar12 + 0x4bc);
    if (uVar6 != 1) {
      if (*(int *)(lVar12 + 0x490) != *(int *)(lVar12 + 0x4bc)) {
        lVar9 = lVar12 + 0x4c0;
        if (*(longlong *)(lVar12 + 0x4c8) != 0) {
          lVar9 = *(longlong *)(lVar12 + 0x4c8);
        }
        iVar7 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar12 + 0x4d0) - 1U & uVar22) * 4);
        if (iVar7 != -1) {
          do {
            pvVar3 = (void *)(*local_b0 + (longlong)iVar7 * 0x60);
            if (*(longlong *)(*local_b0 + (longlong)iVar7 * 0x60) == *plVar28) {
              *(undefined4 *)((longlong)pvVar3 + 0x50) = 0;
              if (*(longlong *)((longlong)pvVar3 + 0x48) != 0) {
                FUN_1400020a8();
              }
              FUN_143c856a0((longlong)pvVar3 + 8);
              memmove(pvVar3,plVar28,0x58);
              lVar9 = *(longlong *)(lVar12 + 0x488);
              if (*(int *)(lVar12 + 0x4bc) != 0) {
                *(int *)(lVar9 + (longlong)*(int *)(lVar12 + 0x4b8) * 0x60) = iVar26;
              }
              lVar10 = (longlong)iVar26 * 0x60;
              *(undefined4 *)(lVar9 + lVar10) = 0xffffffff;
              if (*(int *)(lVar12 + 0x4bc) < 1) {
                uVar27 = 0xffffffff;
              }
              else {
                uVar27 = *(undefined4 *)(lVar12 + 0x4b8);
              }
              *(undefined4 *)(lVar9 + lVar10 + 4) = uVar27;
              *(int *)(lVar12 + 0x4b8) = iVar26;
              *(int *)(lVar12 + 0x4bc) = *(int *)(lVar12 + 0x4bc) + 1;
              uVar17 = local_b8;
              if (*(longlong *)(lVar12 + 0x4a8) != 0) {
                uVar17 = *(longlong *)(lVar12 + 0x4a8);
              }
              puVar2 = (uint *)(uVar17 + local_a8 * 4);
              *puVar2 = *puVar2 & ~uVar24;
              plVar16 = local_b0;
              goto LAB_143dca958;
            }
            iVar7 = *(int *)((longlong)pvVar3 + 0x58);
          } while (iVar7 != -1);
        }
      }
      if (3 < uVar6) {
        uVar17 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
        lVar9 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar21 = 1 << ((byte)lVar9 & 0x1f);
      }
    }
    if (((int)uVar6 < 1) || (iVar21 <= *(int *)(lVar12 + 0x4d0))) {
      uVar22 = *(int *)(lVar12 + 0x4d0) - 1U & uVar22;
      *(uint *)((longlong)plVar28 + 0x5c) = uVar22;
      lVar9 = *(longlong *)(lVar12 + 0x4c8);
      if (*(longlong *)(lVar12 + 0x4c8) == 0) {
        lVar9 = lVar12 + 0x4c0;
      }
      *(undefined4 *)(plVar28 + 0xb) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(lVar12 + 0x4d0) - 1U & (longlong)(int)uVar22) * 4);
      lVar9 = *(longlong *)(lVar12 + 0x4c8);
      if (*(longlong *)(lVar12 + 0x4c8) == 0) {
        lVar9 = lVar12 + 0x4c0;
      }
      *(int *)(lVar9 + ((longlong)*(int *)(lVar12 + 0x4d0) - 1U & (longlong)(int)uVar22) * 4) =
           iVar26;
    }
    else {
      *(int *)(lVar12 + 0x4d0) = iVar21;
      FUN_143dc9f12(local_b0);
    }
LAB_143dca958:
    lVar9 = *plVar16 + (longlong)iVar26 * 0x60;
LAB_143dca96b:
    plVar28 = (longlong *)(lVar9 + 8);
    if (*(int *)(lVar9 + 0x3c) == 0) {
      iVar21 = *(int *)(lVar9 + 0x10);
      *(int *)(lVar9 + 0x10) = iVar21 + 1;
      if (*(int *)(lVar9 + 0x14) == iVar21) {
        FUN_14482b872(plVar28,iVar21);
      }
      iVar26 = *(int *)(lVar9 + 0x30);
      if (iVar26 == 0) {
        iVar7 = -1;
      }
      else {
        iVar7 = iVar26 + 0x1e;
        if (-1 < iVar26 + -1) {
          iVar7 = iVar26 + -1;
        }
        iVar7 = iVar7 >> 5;
      }
      lVar12 = lVar9 + 0x18;
      iVar15 = iVar26 + 1;
      iVar23 = iVar26 + 0x1f;
      if (-1 < iVar26) {
        iVar23 = iVar26;
      }
      if (iVar23 >> 5 == iVar7) {
        *(int *)(lVar9 + 0x30) = iVar15;
      }
      else {
        if (*(int *)(lVar9 + 0x34) <= iVar26) {
          iVar7 = iVar26;
          if (iVar26 + 0x20U < 0xa0) {
            iVar15 = 0x80;
          }
          else {
            uVar22 = iVar26 + 0x20U >> 5;
            if (*(int *)(lVar9 + 0x34) + 0x1fU < 0xa0) {
              uVar24 = 4;
              if (4 < uVar22) {
                uVar24 = uVar22;
              }
            }
            else {
              uVar24 = uVar22 + (uVar22 * 3 >> 3) + 0x10;
            }
            uVar17 = (ulonglong)(uVar24 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar6 = (uint)(uVar17 + 0xf);
                if (uVar24 < 0x1ffd) {
                  uVar17 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
                }
                else {
                  uVar13 = uVar17 + 0xf & 0xfffffffffffffff0;
                  if (uVar13 < 0x7ff1) {
                    bVar14 = (&DAT_14c841e00)[uVar6 >> 4];
                    uVar19 = 0x32;
                    if (0x32 < bVar14) {
                      uVar19 = (ulonglong)bVar14;
                    }
                    uVar20 = 0x32 - (ulonglong)bVar14;
                    do {
                      uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar20 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar20 & 0xffffffff] & 0xf) == 0) goto LAB_143dcb544;
                      lVar10 = uVar19 + 1 + uVar20;
                      uVar20 = uVar20 - 1;
                    } while (lVar10 != 0x33);
                  }
                  uVar17 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar17 = (ulonglong)DAT_14c841df8;
                  }
                  uVar17 = -uVar17 & (uVar13 + uVar17) - 1;
                }
              }
              else {
                uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
                iVar7 = *(int *)(lVar9 + 0x30);
              }
            }
LAB_143dcb544:
            iVar8 = (int)(uVar17 >> 2);
            iVar15 = -0x20;
            if ((int)uVar22 <= iVar8) {
              iVar15 = iVar8 << 5;
            }
          }
          *(int *)(lVar9 + 0x34) = iVar15;
          FUN_1446efbd8(lVar12,iVar7);
          iVar15 = *(int *)(lVar9 + 0x30) + 1;
        }
        iVar7 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar7 = iVar15;
        }
        *(int *)(lVar9 + 0x30) = iVar15;
        if (iVar15 % 0x20 != 0) {
          lVar10 = *(longlong *)(lVar9 + 0x28);
          if (*(longlong *)(lVar9 + 0x28) == 0) {
            lVar10 = lVar12;
          }
          bVar14 = -(char)(iVar15 % 0x20);
          *(uint *)(lVar10 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar10 + (longlong)(iVar7 >> 5) * 4) << (bVar14 & 0x1f)) >>
               (bVar14 & 0x1f);
        }
      }
      lVar10 = (longlong)iVar21;
      if (*(longlong *)(lVar9 + 0x28) != 0) {
        lVar12 = *(longlong *)(lVar9 + 0x28);
      }
      bVar14 = (byte)iVar26 & 0x1f;
      puVar2 = (uint *)(lVar12 + (longlong)(iVar23 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
    }
    else {
      iVar21 = *(int *)(lVar9 + 0x38);
      lVar10 = (longlong)iVar21;
      iVar26 = *(int *)(*plVar28 + 4 + lVar10 * 0x18);
      *(int *)(lVar9 + 0x38) = iVar26;
      iVar7 = *(int *)(lVar9 + 0x3c) + -1;
      *(int *)(lVar9 + 0x3c) = iVar7;
      if (iVar7 != 0) {
        *(undefined4 *)(*plVar28 + (longlong)iVar26 * 0x18) = 0xffffffff;
      }
    }
    uVar22 = 1 << ((byte)iVar21 & 0x1f);
    lVar12 = *(longlong *)(lVar9 + 0x28);
    if (*(longlong *)(lVar9 + 0x28) == 0) {
      lVar12 = lVar9 + 0x18;
    }
    iVar26 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar26 = iVar21;
    }
    puVar2 = (uint *)(lVar12 + (longlong)(iVar26 >> 5) * 4);
    *puVar2 = *puVar2 | uVar22;
    iVar7 = 1;
    plVar16 = (longlong *)(*plVar28 + lVar10 * 0x18);
    lVar12 = param_3[3];
    *plVar16 = lVar12;
    plVar16[1] = (longlong)param_3;
    *(undefined4 *)(plVar16 + 2) = 0xffffffff;
    uVar24 = (uint)((ulonglong)lVar12 >> 0x10);
    uVar6 = (uint)lVar12 & 0xffff;
    uVar24 = ((uint)lVar12 << 0x10 | uVar6) + (int)((ulonglong)lVar12 >> 0x20) +
             (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar6 >> 4);
    uVar6 = *(int *)(lVar9 + 0x10) - *(int *)(lVar9 + 0x3c);
    if (1 < uVar6) {
      lVar10 = lVar9 + 0x40;
      if (*(longlong *)(lVar9 + 0x48) != 0) {
        lVar10 = *(longlong *)(lVar9 + 0x48);
      }
      iVar15 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar9 + 0x50) - 1U & uVar24) * 4);
      if (iVar15 != -1) {
        do {
          plVar1 = (longlong *)(*plVar28 + (longlong)iVar15 * 0x18);
          if (*plVar1 == lVar12) {
            lVar12 = plVar16[1];
            *plVar1 = *plVar16;
            plVar1[1] = lVar12;
            lVar12 = *plVar28;
            if (*(int *)(lVar9 + 0x3c) != 0) {
              *(int *)(lVar12 + (longlong)*(int *)(lVar9 + 0x38) * 0x18) = iVar21;
            }
            puVar5 = (undefined4 *)(lVar12 + (longlong)iVar21 * 0x18);
            *puVar5 = 0xffffffff;
            if (*(int *)(lVar9 + 0x3c) < 1) {
              uVar27 = 0xffffffff;
            }
            else {
              uVar27 = *(undefined4 *)(lVar9 + 0x38);
            }
            puVar5[1] = uVar27;
            *(int *)(lVar9 + 0x38) = iVar21;
            *(int *)(lVar9 + 0x3c) = *(int *)(lVar9 + 0x3c) + 1;
            lVar12 = lVar9 + 0x18;
            if (*(longlong *)(lVar9 + 0x28) != 0) {
              lVar12 = *(longlong *)(lVar9 + 0x28);
            }
            puVar2 = (uint *)(lVar12 + (longlong)(iVar26 >> 5) * 4);
            *puVar2 = *puVar2 & ~uVar22;
            goto LAB_143dcb0f5;
          }
          iVar15 = (int)plVar1[2];
        } while (iVar15 != -1);
      }
    }
    if (3 < uVar6) {
      uVar17 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar12 & 0x1f);
    }
    if ((0 < (int)uVar6) && (*(int *)(lVar9 + 0x50) < iVar7)) {
      *(int *)(lVar9 + 0x50) = iVar7;
      FUN_143dcbaee(plVar28);
      goto LAB_143dcb0f5;
    }
    uVar24 = *(int *)(lVar9 + 0x50) - 1U & uVar24;
    *(uint *)((longlong)plVar16 + 0x14) = uVar24;
    lVar12 = lVar9 + 0x40;
    lVar10 = *(longlong *)(lVar9 + 0x48);
    if (*(longlong *)(lVar9 + 0x48) == 0) {
      lVar10 = lVar12;
    }
    uVar17 = (ulonglong)(int)uVar24;
    *(undefined4 *)(plVar16 + 2) =
         *(undefined4 *)(lVar10 + ((longlong)*(int *)(lVar9 + 0x50) - 1U & uVar17) * 4);
  }
  lVar9 = plVar28[8];
  if (plVar28[8] == 0) {
    lVar9 = lVar12;
  }
  *(int *)(lVar9 + ((longlong)(int)plVar28[9] - 1U & uVar17) * 4) = iVar21;
LAB_143dcb0f5:
  if ((local_98[10] ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dcbaee FUN_143dcbaee body=668 status=ok
// SIG undefined FUN_143dcbaee(void)

void FUN_143dcbaee(longlong *param_1)

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
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_143dcbb6b;
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
LAB_143dcbb6b:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar16 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
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
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x18);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x14 + lVar15 * 0x18) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x10 + lVar15 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 143dcbd8a FUN_143dcbd8a body=668 status=ok
// SIG undefined FUN_143dcbd8a(void)

void FUN_143dcbd8a(longlong *param_1)

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
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_143dcbe07;
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
LAB_143dcbe07:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar16 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
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
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x18);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x14 + lVar15 * 0x18) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x10 + lVar15 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 143dcc026 FUN_143dcc026 body=139 status=ok
// SIG undefined FUN_143dcc026(void)

void FUN_143dcc026(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_20 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_140696187(*param_1,param_1 + 1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dcc0b2 FUN_143dcc0b2 body=101 status=ok
// SIG undefined FUN_143dcc0b2(void)

undefined8 * FUN_143dcc0b2(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b414b60;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[8] = 0;
  lVar2 = param_1 + 0x10;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
  }
  FUN_1400709d4(puVar1 + 2,lVar2,*(undefined4 *)(param_1 + 0x48),0);
  return puVar1 + 1;
}



// FUNCTION 143dcc11e FUN_143dcc11e body=29 status=ok
// SIG undefined FUN_143dcc11e(void)

void FUN_143dcc11e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143dcc13c FUN_143dcc13c body=57 status=ok
// SIG undefined FUN_143dcc13c(void)

undefined8 * FUN_143dcc13c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b414b60;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dcc176 FUN_143dcc176 body=68 status=ok
// SIG undefined FUN_143dcc176(void)

void FUN_143dcc176(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  cVar3 = (**(code **)(*plVar1 + 0x68))(plVar1);
  if (cVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143dcc1ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3f8))(plVar2,param_1[1],plVar1);
    return;
  }
  return;
}



// FUNCTION 143dcc1d8 FUN_143dcc1d8 body=12 status=ok
// SIG undefined FUN_143dcc1d8(void)

void FUN_143dcc1d8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143dcc1e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143dcc1e4 FUN_143dcc1e4 body=29 status=ok
// SIG undefined FUN_143dcc1e4(void)

undefined8 FUN_143dcc1e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dcc202 FUN_143dcc202 body=481 status=ok
// SIG undefined FUN_143dcc202(void)

void FUN_143dcc202(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar10 = *param_3;
    lVar3 = *param_1;
    lVar7 = FUN_140288b94();
    if ((((*(int *)(lVar7 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30)) &&
        (plVar8 = (longlong *)(**(code **)(*param_2 + 0xa70))(param_2), plVar8 != (longlong *)0x0))
       && (cVar4 = (**(code **)(*plVar8 + 0x2a0))(plVar8), cVar4 != '\0')) {
      iVar6 = *(int *)(lVar3 + 0x700);
      *(uint *)(lVar3 + 0x700) = iVar6 + 1U;
      if (*(uint *)(lVar3 + 0x704) < iVar6 + 1U) {
        FUN_1488e4ce2((longlong *)(lVar3 + 0x6f8),iVar6);
      }
      plVar8 = (longlong *)(*(longlong *)(lVar3 + 0x6f8) + (longlong)iVar6 * 0x28);
      plVar8[2] = 0;
      plVar8[3] = 0;
      *plVar8 = 0;
      plVar8[1] = 0;
      plVar8[4] = 0;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      *plVar8 = (longlong)param_2;
      plVar8[1] = lVar10;
      *(undefined4 *)(plVar8 + 2) = *(undefined4 *)param_1[1];
      puVar1 = (uint *)((longlong)plVar8 + 0x14);
      local_48 = "OnTrackedImpactParticleSystemFinished";
      local_40 = 0x25;
      local_3c = 0;
      uVar5 = FUN_14001a6c0(&local_48,1);
      if (lVar3 == 0) {
        *puVar1 = 0;
        iVar6 = 0;
      }
      else {
        uVar2 = *(uint *)(lVar3 + 0xc);
        *puVar1 = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar6 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar6 = *(int *)(lVar10 + 0x10);
          bVar11 = iVar6 == 0;
          if (bVar11) {
            *(int *)(lVar10 + 0x10) = iVar9;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar6 = iVar9;
          }
        }
      }
      *(int *)(plVar8 + 3) = iVar6;
      *(ulonglong *)((longlong)plVar8 + 0x1c) = (ulonglong)uVar5;
      (**(code **)(*param_2 + 0xa80))(param_2,puVar1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dcc402 FUN_143dcc402 body=12 status=ok
// SIG undefined FUN_143dcc402(void)

void FUN_143dcc402(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143dcc40b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143dcc40e FUN_143dcc40e body=29 status=ok
// SIG undefined FUN_143dcc40e(void)

undefined8 FUN_143dcc40e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dcc42c FUN_143dcc42c body=268 status=ok
// SIG undefined FUN_143dcc42c(void)

void FUN_143dcc42c(longlong *param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar10 = (longlong)*(int *)(*param_2 + 0x6d0);
  if (lVar10 != 0) {
    uVar2 = *param_4;
    uVar1 = *param_3;
    lVar3 = *(longlong *)(*param_2 + 0x6c8);
    lVar9 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar9);
      if ((DAT_14c950c29 == '\x01') && (plVar4 != (longlong *)0x0)) {
        FUN_1456cec3c(plVar4);
LAB_143dcc49d:
        if ((*(byte *)((longlong)plVar4 + 0x2ea) & 0x80) != 0) {
          (**(code **)(*plVar4 + 0x2e8))(plVar4,uVar1,uVar2);
          puVar5 = (undefined8 *)*param_1;
          pcVar6 = (code *)*puVar5;
          plVar8 = puVar5 + 4;
          if ((longlong *)puVar5[2] != (longlong *)0x0) {
            plVar8 = (longlong *)puVar5[2];
          }
          local_78 = plVar4;
          local_6c = uVar1;
          local_68 = uVar2;
          uVar7 = (**(code **)(*plVar8 + 8))();
          (*pcVar6)(uVar7,&local_78,&local_6c,&local_68);
        }
      }
      else if (plVar4 != (longlong *)0x0) goto LAB_143dcc49d;
      lVar9 = lVar9 + 8;
    } while (lVar10 * 8 != lVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dcc552 FUN_143dcc552 body=5 status=ok
// SIG undefined FUN_143dcc552(void)

longlong FUN_143dcc552(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143dcc558 FUN_143dcc558 body=12 status=ok
// SIG undefined FUN_143dcc558(void)

void FUN_143dcc558(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143dcc561. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143dcc564 FUN_143dcc564 body=29 status=ok
// SIG undefined FUN_143dcc564(void)

undefined8 FUN_143dcc564(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dcc582 FUN_143dcc582 body=149 status=ok
// SIG undefined FUN_143dcc582(void)

void FUN_143dcc582(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (((*(int *)((longlong)param_1 + 0xac) != 0) &&
      (uVar2 = *(uint *)(param_1 + 0x15), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)((longlong)param_1 + 0xac))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
        (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))) {
      (**(code **)(*plVar3 + 0x640))(plVar3,*(undefined4 *)(param_1 + 0x16));
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143dcc60d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143dcc618 FUN_143dcc618 body=282 status=ok
// SIG undefined FUN_143dcc618(void)

undefined8 * FUN_143dcc618(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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
          __tlregdtor(&LAB_143dc814b);
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



// FUNCTION 143dcc732 FUN_143dcc732 body=149 status=ok
// SIG undefined FUN_143dcc732(void)

void FUN_143dcc732(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (((*(int *)((longlong)param_1 + 0xac) != 0) &&
      (uVar2 = *(uint *)(param_1 + 0x15), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)((longlong)param_1 + 0xac))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
        (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))) {
      (**(code **)(*plVar3 + 0x648))(plVar3,*(undefined4 *)(param_1 + 0x16));
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143dcc7bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143dcc7c8 FUN_143dcc7c8 body=206 status=ok
// SIG undefined FUN_143dcc7c8(void)

void FUN_143dcc7c8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = (longlong)*(int *)(*param_2 + 0x6d0);
  if (lVar8 != 0) {
    lVar1 = *(longlong *)(*param_2 + 0x6c8);
    lVar7 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar7);
      if ((DAT_14c950c29 == '\x01') && (plVar2 != (longlong *)0x0)) {
        FUN_1456cec3c(plVar2);
LAB_143dcc820:
        if ((*(byte *)((longlong)plVar2 + 0x2ea) & 0x80) != 0) {
          (**(code **)(*plVar2 + 0x2f0))(plVar2);
          puVar3 = (undefined8 *)*param_1;
          pcVar4 = (code *)*puVar3;
          plVar6 = puVar3 + 4;
          if ((longlong *)puVar3[2] != (longlong *)0x0) {
            plVar6 = (longlong *)puVar3[2];
          }
          local_40 = plVar2;
          uVar5 = (**(code **)(*plVar6 + 8))();
          (*pcVar4)(uVar5,&local_40);
        }
      }
      else if (plVar2 != (longlong *)0x0) goto LAB_143dcc820;
      lVar7 = lVar7 + 8;
    } while (lVar8 * 8 != lVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dcc8b0 FUN_143dcc8b0 body=5 status=ok
// SIG undefined FUN_143dcc8b0(void)

longlong FUN_143dcc8b0(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143dcc8b6 FUN_143dcc8b6 body=12 status=ok
// SIG undefined FUN_143dcc8b6(void)

void FUN_143dcc8b6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143dcc8bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143dcc8c2 FUN_143dcc8c2 body=29 status=ok
// SIG undefined FUN_143dcc8c2(void)

undefined8 FUN_143dcc8c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dcc8e0 FUN_143dcc8e0 body=254 status=ok
// SIG undefined FUN_143dcc8e0(void)

void FUN_143dcc8e0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar11 = (longlong)*(int *)(*param_2 + 0x6d0);
  if (lVar11 != 0) {
    lVar2 = *(longlong *)(*param_2 + 0x6c8);
    lVar10 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar10);
      if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
LAB_143dcc93f:
        if ((*(byte *)(lVar3 + 0x2ea) & 0x80) != 0) {
          lVar4 = *param_1;
          iVar1 = *(int *)(lVar4 + 0x28);
          *(uint *)(lVar4 + 0x28) = iVar1 + 1U;
          if (*(uint *)(lVar4 + 0x2c) < iVar1 + 1U) {
            FUN_1488e50c0(lVar4,iVar1);
          }
          lVar7 = *(longlong *)(lVar4 + 0x20);
          if (*(longlong *)(lVar4 + 0x20) == 0) {
            lVar7 = lVar4;
          }
          *(longlong *)(lVar7 + (longlong)iVar1 * 8) = lVar3;
          puVar5 = (undefined8 *)param_1[1];
          pcVar6 = (code *)*puVar5;
          plVar9 = puVar5 + 4;
          if ((longlong *)puVar5[2] != (longlong *)0x0) {
            plVar9 = (longlong *)puVar5[2];
          }
          local_50 = lVar3;
          uVar8 = (**(code **)(*plVar9 + 8))();
          (*pcVar6)(uVar8,&local_50);
        }
      }
      else if (lVar3 != 0) goto LAB_143dcc93f;
      lVar10 = lVar10 + 8;
    } while (lVar11 * 8 != lVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dcc9f8 FUN_143dcc9f8 body=5 status=ok
// SIG undefined FUN_143dcc9f8(void)

longlong FUN_143dcc9f8(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143dcc9fe FUN_143dcc9fe body=12 status=ok
// SIG undefined FUN_143dcc9fe(void)

void FUN_143dcc9fe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143dcca07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143dcca0a FUN_143dcca0a body=29 status=ok
// SIG undefined FUN_143dcca0a(void)

undefined8 FUN_143dcca0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dcca64 FUN_143dcca64 body=29 status=ok
// SIG undefined FUN_143dcca64(void)

undefined8 FUN_143dcca64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dcca8a FUN_143dcca8a body=62 status=ok
// SIG undefined FUN_143dcca8a(void)

void FUN_143dcca8a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b414cd0;
  FUN_1488e1626(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 143dccace FUN_143dccace body=29 status=ok
// SIG undefined FUN_143dccace(void)

void FUN_143dccace(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143dccaec FUN_143dccaec body=29 status=ok
// SIG undefined FUN_143dccaec(void)

undefined8 FUN_143dccaec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dccb0a FUN_143dccb0a body=29 status=ok
// SIG undefined FUN_143dccb0a(void)

undefined8 FUN_143dccb0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dccca6 FUN_143dccca6 body=93 status=ok
// SIG undefined FUN_143dccca6(void)

void FUN_143dccca6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b414cf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dccd04 FUN_143dccd04 body=93 status=ok
// SIG undefined FUN_143dccd04(void)

void FUN_143dccd04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b414cf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dccd62 FUN_143dccd62 body=126 status=ok
// SIG undefined FUN_143dccd62(void)

void FUN_143dccd62(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b414cf0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dccdd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dccdfa FUN_143dccdfa body=283 status=ok
// SIG undefined FUN_143dccdfa(void)

undefined8 FUN_143dccdfa(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143dccf0f;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143dccf0f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143dccf0f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143dccec3;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      *(undefined8 *)(lVar3 + 0x588) = 0;
      uVar7 = 1;
      FUN_143dc13e8(lVar3 + 0x30,CONCAT71((int7)((ulonglong)lVar6 >> 8),1));
      goto LAB_143dccec3;
    }
  }
  uVar7 = 0;
LAB_143dccec3:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dccf16 FUN_143dccf16 body=31 status=ok
// SIG undefined FUN_143dccf16(void)

undefined8 FUN_143dccf16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dcd024 FUN_143dcd024 body=29 status=ok
// SIG undefined FUN_143dcd024(void)

undefined8 FUN_143dcd024(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dcd1c0 FUN_143dcd1c0 body=93 status=ok
// SIG undefined FUN_143dcd1c0(void)

void FUN_143dcd1c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b414e00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dcd21e FUN_143dcd21e body=93 status=ok
// SIG undefined FUN_143dcd21e(void)

void FUN_143dcd21e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b414e00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dcd27c FUN_143dcd27c body=126 status=ok
// SIG undefined FUN_143dcd27c(void)

void FUN_143dcd27c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b414e00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dcd2eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dcd314 FUN_143dcd314 body=283 status=ok
// SIG undefined FUN_143dcd314(void)

undefined8 FUN_143dcd314(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143dcd429;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143dcd429;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143dcd429:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143dcd3dd;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      *(undefined8 *)(lVar3 + 0x588) = 0;
      uVar7 = 1;
      FUN_143dc13e8(lVar3 + 0x30,CONCAT71((int7)((ulonglong)lVar6 >> 8),1));
      goto LAB_143dcd3dd;
    }
  }
  uVar7 = 0;
LAB_143dcd3dd:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dcd430 FUN_143dcd430 body=29 status=ok
// SIG undefined FUN_143dcd430(void)

undefined8 FUN_143dcd430(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dcd5cc FUN_143dcd5cc body=93 status=ok
// SIG undefined FUN_143dcd5cc(void)

void FUN_143dcd5cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b414e70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dcd62a FUN_143dcd62a body=93 status=ok
// SIG undefined FUN_143dcd62a(void)

void FUN_143dcd62a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b414e70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143dcd688 FUN_143dcd688 body=126 status=ok
// SIG undefined FUN_143dcd688(void)

void FUN_143dcd688(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b414e70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dcd6f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dcd706 FUN_143dcd706 body=52 status=ok
// SIG undefined FUN_143dcd706(void)

void FUN_143dcd706(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x640) = 0;
  FUN_143dc126e(lVar1,10);
  if (*(char *)(lVar1 + 0x5b0) != '\0') {
    *(undefined1 *)(lVar1 + 0x5b1) = 1;
  }
  return;
}



// FUNCTION 143dcd73a FUN_143dcd73a body=298 status=ok
// SIG undefined FUN_143dcd73a(void)

undefined8 FUN_143dcd73a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143dcd85e;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143dcd85e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143dcd85e:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143dcd7e5;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      *(undefined8 *)(lVar3 + 0x640) = 0;
      FUN_143dc126e(lVar3,CONCAT71((int7)((ulonglong)lVar6 >> 8),10));
      uVar7 = 1;
      if (*(char *)(lVar3 + 0x5b0) != '\0') {
        *(undefined1 *)(lVar3 + 0x5b1) = 1;
      }
      goto LAB_143dcd7e5;
    }
  }
  uVar7 = 0;
LAB_143dcd7e5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dcd866 FUN_143dcd866 body=341 status=ok
// SIG undefined FUN_143dcd866(void)

undefined8 FUN_143dcd866(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  puVar4 = *(undefined4 **)(param_2 + 8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = &DAT_14c9485f0;
  }
  if (DAT_14c947fe0 == 0) {
    lVar3 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar3);
    DAT_14c947fe0 = lVar3;
  }
  FUN_140045924(DAT_14c947fe0,&local_58,puVar4,1);
  local_50 = local_58;
  local_48 = 0x3003;
  local_40 = 0;
  cVar2 = FUN_140334510(lVar1 + 0x98,&local_50,0);
  if (cVar2 == '\0') {
    if (param_2 == 0) {
      local_50 = 0;
    }
    else {
      puVar4 = &DAT_14c9485f0;
      if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
        puVar4 = *(undefined4 **)(param_2 + 8);
      }
      if (DAT_14c947fe0 == 0) {
        lVar3 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar3);
        DAT_14c947fe0 = lVar3;
      }
      FUN_140045924(DAT_14c947fe0,&local_50,puVar4,1);
    }
    local_48 = 0x3003;
    local_40 = 0;
    FUN_140a6f4d0(lVar1 + 0x98);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dcd9da FUN_143dcd9da body=12 status=ok
// SIG undefined FUN_143dcd9da(void)

void FUN_143dcd9da(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143dcd9e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143dcd9e6 FUN_143dcd9e6 body=29 status=ok
// SIG undefined FUN_143dcd9e6(void)

undefined8 FUN_143dcd9e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dcda04 FUN_143dcda04 body=29 status=ok
// SIG undefined FUN_143dcda04(void)

undefined8 FUN_143dcda04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dcdbaa FUN_143dcdbaa body=101 status=ok
// SIG undefined FUN_143dcdbaa(void)

void FUN_143dcdbaa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b414fd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143dcdc10 FUN_143dcdc10 body=101 status=ok
// SIG undefined FUN_143dcdc10(void)

void FUN_143dcdc10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b414fd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143dcdc76 FUN_143dcdc76 body=134 status=ok
// SIG undefined FUN_143dcdc76(void)

void FUN_143dcdc76(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b414fd0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dcdced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dcdd58 FUN_143dcdd58 body=275 status=ok
// SIG undefined FUN_143dcdd58(void)

undefined8 FUN_143dcdd58(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143dcde65;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143dcde65;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143dcde65:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143dcde19;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_143dcde19;
    }
  }
  uVar6 = 0;
LAB_143dcde19:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dcde6c FUN_143dcde6c body=29 status=ok
// SIG undefined FUN_143dcde6c(void)

undefined8 FUN_143dcde6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dcde9e FUN_143dcde9e body=93 status=ok
// SIG undefined FUN_143dcde9e(void)

void FUN_143dcde9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b415040;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143dcdefc FUN_143dcdefc body=93 status=ok
// SIG undefined FUN_143dcdefc(void)

void FUN_143dcdefc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b415040;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143dcdf5a FUN_143dcdf5a body=126 status=ok
// SIG undefined FUN_143dcdf5a(void)

void FUN_143dcdf5a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b415040;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dcdfc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dcdfe2 FUN_143dcdfe2 body=20 status=ok
// SIG undefined FUN_143dcdfe2(void)

undefined1 FUN_143dcdfe2(longlong param_1)

{
  FUN_143dcdff6(param_1 + 0x18);
  return 1;
}



// FUNCTION 143dcdff6 FUN_143dcdff6 body=128 status=ok
// SIG undefined FUN_143dcdff6(void)

void FUN_143dcdff6(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
        ((lVar2 = *plVar3, lVar2 != 0 && (*(longlong *)(lVar2 + 0x698) != 0)))))) {
      FUN_14028d356(lVar2);
      (**(code **)(**(longlong **)(lVar2 + 0x698) + 0x2b0))();
      *(undefined8 *)(lVar2 + 0x698) = 0;
    }
  }
  return;
}



// FUNCTION 143dce076 FUN_143dce076 body=326 status=ok
// SIG undefined FUN_143dce076(void)

void FUN_143dce076(uint *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (((param_1[1] != 0) && (uVar4 = *param_1, -1 < (int)uVar4)) && ((int)uVar4 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_1[1])) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        ((plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0 &&
         ((char)plVar5[0x23] == (char)param_1[2])))))) {
      plVar1 = (longlong *)FUN_14082ce84(plVar5[0x10] + 0x3f8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,param_2,0);
      }
      *(byte *)((longlong)plVar5 + 0x103) = *(byte *)((longlong)plVar5 + 0x103) & 0xfb;
      if (plVar5[0xf3] != 0) {
        if ((*(uint *)(plVar5 + 1) & 0x10) == 0) {
          lVar3 = plVar5[4];
        }
        else {
          lVar3 = 0;
        }
        lVar2 = FUN_1401b4c98(lVar3);
        lVar3 = plVar5[0xf3];
        if (lVar3 != 0) {
          uVar4 = (uint)lVar3;
          if ((int)(uVar4 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
            lVar6 = lVar2 + 0x18;
            if (*(longlong *)(lVar2 + 0x28) != 0) {
              lVar6 = *(longlong *)(lVar2 + 0x28);
            }
            if ((*(uint *)(lVar6 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1)
                != 0) {
              lVar6 = *(longlong *)(lVar2 + 8);
              lVar7 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
              if (((lVar6 + lVar7 != 0) && (*(longlong *)(lVar6 + 0x60 + lVar7) == lVar3)) &&
                 (*(char *)(lVar6 + 1 + lVar7) != '\x04')) {
                FUN_1405a424c(lVar2);
              }
            }
          }
        }
        plVar5[0xf3] = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000143dce1b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x330))(plVar5);
      return;
    }
  }
  return;
}



// FUNCTION 143dce1ec FUN_143dce1ec body=29 status=ok
// SIG undefined FUN_143dce1ec(void)

undefined8 FUN_143dce1ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dce20a FUN_143dce20a body=326 status=ok
// SIG undefined FUN_143dce20a(void)

void FUN_143dce20a(uint *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (((param_1[1] != 0) && (uVar4 = *param_1, -1 < (int)uVar4)) && ((int)uVar4 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_1[1])) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        ((plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0 &&
         ((char)plVar5[0x23] == (char)param_1[2])))))) {
      plVar1 = (longlong *)FUN_14082ce84(plVar5[0x10] + 0x3f8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,param_2,0);
      }
      *(byte *)((longlong)plVar5 + 0x103) = *(byte *)((longlong)plVar5 + 0x103) & 0xfb;
      if (plVar5[0xf3] != 0) {
        if ((*(uint *)(plVar5 + 1) & 0x10) == 0) {
          lVar3 = plVar5[4];
        }
        else {
          lVar3 = 0;
        }
        lVar2 = FUN_1401b4c98(lVar3);
        lVar3 = plVar5[0xf3];
        if (lVar3 != 0) {
          uVar4 = (uint)lVar3;
          if ((int)(uVar4 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
            lVar6 = lVar2 + 0x18;
            if (*(longlong *)(lVar2 + 0x28) != 0) {
              lVar6 = *(longlong *)(lVar2 + 0x28);
            }
            if ((*(uint *)(lVar6 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1)
                != 0) {
              lVar6 = *(longlong *)(lVar2 + 8);
              lVar7 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
              if (((lVar6 + lVar7 != 0) && (*(longlong *)(lVar6 + 0x60 + lVar7) == lVar3)) &&
                 (*(char *)(lVar6 + 1 + lVar7) != '\x04')) {
                FUN_1405a424c(lVar2);
              }
            }
          }
        }
        plVar5[0xf3] = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000143dce349. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x330))(plVar5);
      return;
    }
  }
  return;
}



// FUNCTION 143dce380 FUN_143dce380 body=29 status=ok
// SIG undefined FUN_143dce380(void)

undefined8 FUN_143dce380(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dce39e FUN_143dce39e body=29 status=ok
// SIG undefined FUN_143dce39e(void)

undefined8 FUN_143dce39e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dce3d0 FUN_143dce3d0 body=93 status=ok
// SIG undefined FUN_143dce3d0(void)

void FUN_143dce3d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4150f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143dce42e FUN_143dce42e body=93 status=ok
// SIG undefined FUN_143dce42e(void)

void FUN_143dce42e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4150f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143dce48c FUN_143dce48c body=126 status=ok
// SIG undefined FUN_143dce48c(void)

void FUN_143dce48c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4150f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dce4fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dce514 FUN_143dce514 body=20 status=ok
// SIG undefined FUN_143dce514(void)

undefined1 FUN_143dce514(longlong param_1)

{
  FUN_143dce528(param_1 + 0x18);
  return 1;
}



// FUNCTION 143dce528 FUN_143dce528 body=197 status=ok
// SIG undefined FUN_143dce528(void)

void FUN_143dce528(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  iVar3 = DAT_14c9647dc;
  lVar2 = DAT_14c9647c8;
  if ((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) {
    if ((int)uVar1 < DAT_14c9647dc) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((((plVar7 != (longlong *)0x0) && (*(uint *)(plVar7 + 2) == param_1[1])) &&
          ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && ((longlong *)*plVar7 != (longlong *)0x0))
      {
        plVar5 = (longlong *)0x0;
        plVar6 = (longlong *)*plVar7;
        if ((*(uint *)(plVar7 + 1) & 0x10200000) != 0) {
          plVar6 = plVar5;
        }
        *(byte *)((longlong)plVar6 + 0x103) = *(byte *)((longlong)plVar6 + 0x103) & 0xfb;
        if (param_1[1] != 0) {
          uVar1 = *param_1;
          plVar5 = (longlong *)0x0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < iVar3)) {
            puVar4 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(lVar2 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((puVar4 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar4 + 2) != param_1[1] || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))
               )) {
              plVar5 = (longlong *)0x0;
            }
            else {
              plVar5 = (longlong *)*puVar4;
            }
          }
        }
                    /* WARNING: Could not recover jumptable at 0x000143dce5e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x330))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143dce5ee FUN_143dce5ee body=335 status=ok
// SIG undefined FUN_143dce5ee(void)

void FUN_143dce5ee(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
       || ((plVar7 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar7 == (longlong *)0x0 || (*(uint *)(plVar7 + 2) != param_1[1])))) ||
      ((plVar2 = (longlong *)*param_2, (*(uint *)(plVar7 + 1) & 0x10200000) != 0 ||
       ((plVar7 = (longlong *)*plVar7, plVar7 == (longlong *)0x0 ||
        ((char)plVar7[0x23] != (char)param_1[2])))))) ||
     (cVar3 = (**(code **)(*plVar2 + 0x68))(plVar2), cVar3 == '\0')) {
switchD_143dce6c3_caseD_0:
    return;
  }
  lVar4 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  param_1 = param_1 + 4;
  (**(code **)(*plVar7 + 0x408))(plVar7,param_1,plVar2);
  lVar5 = (**(code **)(*plVar2 + 8))(plVar2);
  lVar6 = lVar5 + 0x80;
  switch(*(undefined1 *)(lVar5 + 0x80)) {
  case 0:
    goto switchD_143dce6c3_caseD_0;
  case 1:
    lVar4 = plVar7[0x30];
    if (lVar4 == 0) goto switchD_143dce6c3_default;
    lVar5 = *plVar7;
    break;
  case 2:
    if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x62) & 4) == 0)) goto switchD_143dce6c3_default;
    lVar5 = *plVar7;
    break;
  case 3:
    (**(code **)(*plVar7 + 0x3b8))(plVar7,param_1,lVar4,lVar6);
  default:
    goto switchD_143dce6c3_default;
  }
  (**(code **)(lVar5 + 0x3a8))(plVar7,param_1,lVar4,lVar6);
switchD_143dce6c3_default:
                    /* WARNING: Could not recover jumptable at 0x000143dce73a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x3d0))(plVar7,param_1,lVar6);
  return;
}



// FUNCTION 143dce73e FUN_143dce73e body=186 status=ok
// SIG undefined FUN_143dce73e(void)

undefined8 * FUN_143dce73e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x118,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b415160;
  *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(param_1 + 0x10);
  puVar4[1] = *(undefined8 *)(param_1 + 8);
  memcpy(puVar4 + 3,(void *)(param_1 + 0x18),0xb8);
  puVar4[0x1a] = *(undefined8 *)(param_1 + 0xd0);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  puVar4[0x1b] = *(undefined8 *)(param_1 + 0xd8);
  puVar4[0x1c] = uVar1;
  *(undefined4 *)(puVar4 + 0x1d) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined1 *)((longlong)puVar4 + 0xec) = *(undefined1 *)(param_1 + 0xec);
  puVar4[0x22] = *(undefined8 *)(param_1 + 0x110);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  uVar3 = *(undefined8 *)(param_1 + 0x108);
  puVar4[0x20] = *(undefined8 *)(param_1 + 0x100);
  puVar4[0x21] = uVar3;
  puVar4[0x1e] = uVar1;
  puVar4[0x1f] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143dce7fe FUN_143dce7fe body=29 status=ok
// SIG undefined FUN_143dce7fe(void)

void FUN_143dce7fe(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143dce81c FUN_143dce81c body=29 status=ok
// SIG undefined FUN_143dce81c(void)

undefined8 FUN_143dce81c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dce83a FUN_143dce83a body=139 status=ok
// SIG undefined FUN_143dce83a(void)

void FUN_143dce83a(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_20 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_140696187(*param_1,param_1 + 1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dce8c6 FUN_143dce8c6 body=101 status=ok
// SIG undefined FUN_143dce8c6(void)

undefined8 * FUN_143dce8c6(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b415180;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[8] = 0;
  lVar2 = param_1 + 0x10;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
  }
  FUN_1400709d4(puVar1 + 2,lVar2,*(undefined4 *)(param_1 + 0x48),0);
  return puVar1 + 1;
}



// FUNCTION 143dce932 FUN_143dce932 body=29 status=ok
// SIG undefined FUN_143dce932(void)

void FUN_143dce932(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143dce950 FUN_143dce950 body=57 status=ok
// SIG undefined FUN_143dce950(void)

undefined8 * FUN_143dce950(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b415180;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dce989 FUN_143dce989 body=3686 status=ok
// SIG undefined FUN_143dce989(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dce989(void)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  char *local_40;
  int local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar4 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb84b80 = (ulonglong)uVar4;
  _DAT_14cb84b88 = 0x47efffffe0000000;
  _DAT_14cb84b90 = 0x47efffffe0000000;
  _DAT_14cb84b98 = 0x47efffffe0000000;
  _DAT_14cb84ba0 = 0x47efffffe0000000;
  _DAT_14cb84ba8 = 0x47efffffe0000000;
  _DAT_14cb84bb0 = 0x47efffffe0000000;
  _DAT_14cb84bb8 = 0x47efffffe0000000;
  _DAT_14cb84bc0 = 0x47efffffe0000000;
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar3 = FUN_140b10a34(&local_40,&DAT_14cb84bc8);
  if (cVar3 == '\0') {
    _DAT_14cb84bc8 = 0;
    uRam000000014cb84bd0 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14cb84bd8,L"Roads",1);
  local_40 = "Road";
  local_38 = 4;
  local_34 = 0;
  uVar4 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb84be0 = (ulonglong)uVar4;
  _DAT_14cb84c64 = 0;
  FUN_14052b5e0(&DAT_14cb84c60,"mission_replay",0);
  _DAT_14cb84c70 = "mission_replay";
  _DAT_14cb84c7c = 0;
  FUN_14052b5e0(&DAT_14cb84c78,"DestinationOnly",0);
  _DAT_14cb84c88 = "DestinationOnly";
  _DAT_14cb84c98 = &LAB_143dbe1e2;
  _DAT_14cb84ca0 = 0x43c78000;
  DAT_14cb84ca4 = 1;
  DAT_14cb84c90 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb84c90;
  atexit((_func_5014 *)&LAB_143dbe1e7);
  _DAT_14cb84cb4 = 0;
  FUN_14052b5e0(&DAT_14cb84cb0,"filename",0);
  _DAT_14cb84cc0 = "filename";
  _DAT_14cb84ccc = 0;
  FUN_14052b5e0(&DAT_14cb84cc8,"mappath",0);
  _DAT_14cb84cd8 = "mappath";
  _DAT_14cb84ce4 = 0;
  FUN_14052b5e0(&DAT_14cb84ce0,&DAT_14a17fbc2,0);
  _DAT_14cb84cf0 = &DAT_14a17fbc2;
  _DAT_14cb84cfc = 0;
  FUN_14052b5e0(&DAT_14cb84cf8,"auto_save_infos",0);
  _DAT_14cb84d08 = "auto_save_infos";
  _DAT_14cb84d14 = 0;
  FUN_14052b5e0(&DAT_14cb84d10,"dest_map",0);
  _DAT_14cb84d20 = "dest_map";
  _DAT_14cb84d2c = 0;
  FUN_14052b5e0(&DAT_14cb84d28,"dest_station",0);
  _DAT_14cb84d38 = "dest_station";
  ram0x00014cb84d44 = 0;
  FUN_14052b5e0(&DAT_14cb84d40,"enabled",0);
  _DAT_14cb84d50 = "enabled";
  _DAT_14cb84d5c = 0;
  FUN_14052b5e0(&DAT_14cb84d58,"station",0);
  _DAT_14cb84d68 = "station";
  _DAT_14cb84d74 = 0;
  FUN_14052b5e0(&DAT_14cb84d70,&DAT_14b4152a8,0);
  _DAT_14cb84d80 = &DAT_14b4152a8;
  _DAT_14cb84d8c = 0;
  FUN_14052b5e0(&DAT_14cb84d88,&DAT_14b3e7b50,0);
  _DAT_14cb84d98 = &DAT_14b3e7b50;
  _DAT_14cb84da4 = 0;
  FUN_14052b5e0(&DAT_14cb84da0,"default_station",0);
  _DAT_14cb84db0 = "default_station";
  DAT_14cb84dc0 = (undefined8 *)0x0;
  _DAT_14cb84dc8 = 0;
  puVar5 = (undefined8 *)FUN_140595974(0x1f00,0);
  lVar7 = 0x1f;
  puVar1 = puVar5;
  do {
    puVar6 = puVar1 + 0x1f;
    *puVar1 = puVar6;
    lVar7 = lVar7 + -1;
    puVar1 = puVar6;
  } while (lVar7 != 0);
  _DAT_14cb84dc8 = _DAT_14cb84dc8 + 0x20;
  *puVar6 = DAT_14cb84dc0;
  DAT_14cb84dc0 = puVar5;
  DAT_14cb84dd0 = (undefined8 *)0x0;
  _DAT_14cb84dd8 = 0;
  puVar5 = (undefined8 *)FUN_140595974(0x700,0);
  lVar7 = 0x1f;
  puVar1 = puVar5;
  do {
    puVar6 = puVar1 + 7;
    *puVar1 = puVar6;
    lVar7 = lVar7 + -1;
    puVar1 = puVar6;
  } while (lVar7 != 0);
  _DAT_14cb84dd8 = _DAT_14cb84dd8 + 0x20;
  *puVar6 = DAT_14cb84dd0;
  DAT_14cb84dd0 = puVar5;
  DAT_14cb84e00 = 0;
  DAT_14cb84e08 = 0;
  DAT_14cb84de0 = 0;
  _DAT_14cb84de8 = 0;
  _DAT_14cb84e0c = 0xffffffff00000080;
  _DAT_14cb84e14 = 0;
  DAT_14cb84e20 = 0;
  _DAT_14cb84e28 = 0;
  atexit(FUN_143dbe21b);
  FUN_1446f470e(&DAT_14cb84e98,L"GbxLevelTravel",1);
  local_40 = (char *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  local_38 = 2;
  *(undefined ***)local_40 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  *(longlong *)(local_40 + 0x10) = lVar8;
  *(undefined ***)local_40 = &PTR_FUN_14a380e50;
  *(code **)(local_40 + 0x18) = FUN_1488de566;
  local_58 = 0;
  FUN_14156bb10(&DAT_14cb84ea0,L"gbx.servertravelnexus",
                L"Initiates seamless travel to another p-map. Same as \'servertravel\', but takes the Nexus name for the map rather than its actual file name."
                ,&local_40);
  if (local_38 == 0) {
LAB_143dceea5:
    if (local_40 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_40 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
    goto LAB_143dceea5;
  }
  atexit(FUN_143dbe31a);
  local_40 = (char *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  local_38 = 2;
  *(undefined ***)local_40 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  *(longlong *)(local_40 + 0x10) = lVar8;
  *(undefined ***)local_40 = &PTR_FUN_14a380e50;
  *(code **)(local_40 + 0x18) = FUN_1488de5ee;
  local_58 = 0;
  FUN_14156bb10(&DAT_14cb84eb0,L"gbx.servertraveltostation",
                L"Initiates seamless travel to another p-map. Expected format: MAP.STATION",
                &local_40);
  if (local_38 != 0) {
    if (local_40 == (char *)0x0) goto LAB_143dcef91;
    (*(code *)**(undefined8 **)local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143dcef91:
  atexit(FUN_143dbe35f);
  local_40 = "nexus";
  local_38 = 5;
  local_34 = 0;
  uVar4 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb84ed8 = (ulonglong)uVar4;
  ram0x00014cb84ee4 = 0;
  FUN_14052b5e0(&DAT_14cb84ee0,"actor_data_layers",0);
  _DAT_14cb84ef0 = "actor_data_layers";
  _DAT_14cb852bc = 0;
  FUN_14052b5e0(&DAT_14cb852b8,"all_maps",0);
  _DAT_14cb852c8 = "all_maps";
  DAT_14cb84ef8 = (undefined8 *)0x0;
  _DAT_14cb84f00 = 0;
  puVar5 = (undefined8 *)FUN_140595974(0x5400,0);
  lVar7 = 0x7f;
  puVar1 = puVar5;
  do {
    puVar6 = puVar1 + 0x15;
    *puVar1 = puVar6;
    lVar7 = lVar7 + -1;
    puVar1 = puVar6;
  } while (lVar7 != 0);
  *puVar6 = DAT_14cb84ef8;
  _DAT_14cb84f00 = _DAT_14cb84f00 + 0x80;
  _DAT_14cb84f10 = &LAB_143dbfb0b;
  _DAT_14cb84f18 = 0x43c80000;
  DAT_14cb84f1c = 1;
  DAT_14cb84f08 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb84f08;
  DAT_14cb84ef8 = puVar5;
  atexit((_func_5014 *)&LAB_143dbfb10);
  FUN_1462a3428(&DAT_14cb84f28,&LAB_143dbfb44,&DAT_14b19b638,&DAT_14b3e7b50);
  atexit((_func_5014 *)&LAB_143dbfb49);
  FUN_145d889d0();
  iVar2 = DAT_14cb84ec8;
  lVar7 = (longlong)(int)DAT_14cb84ec8;
  DAT_14cb84ec8 = DAT_14cb84ec8 + 1;
  if (DAT_14cb84ecc < DAT_14cb84ec8) {
    FUN_140ca86cc(&DAT_14cb84ec0,iVar2);
  }
  *(undefined **)(DAT_14cb84ec0 + lVar7 * 8) = &DAT_14b19b638;
  FUN_1462a3428(&DAT_14cb84f58,&LAB_143dbfb7d,"staticli",&DAT_14b3e7b50);
  atexit((_func_5014 *)&LAB_143dbfb82);
  FUN_145d889d0();
  uVar4 = DAT_14cb84ec8;
  lVar7 = (longlong)(int)DAT_14cb84ec8;
  DAT_14cb84ec8 = DAT_14cb84ec8 + 1;
  if (DAT_14cb84ecc < DAT_14cb84ec8) {
    FUN_140ca86cc(&DAT_14cb84ec0,uVar4);
  }
  *(char **)(DAT_14cb84ec0 + lVar7 * 8) = "staticli";
  FUN_1462a3428(&DAT_14cb84f88,&LAB_143dbfbb6,"station",&DAT_14b3e7b50);
  atexit((_func_5014 *)&LAB_143dbfbbb);
  FUN_145d889d0();
  uVar4 = DAT_14cb84ec8;
  lVar7 = (longlong)(int)DAT_14cb84ec8;
  DAT_14cb84ec8 = DAT_14cb84ec8 + 1;
  if (DAT_14cb84ecc < DAT_14cb84ec8) {
    FUN_140ca86cc(&DAT_14cb84ec0,uVar4);
  }
  *(char **)(DAT_14cb84ec0 + lVar7 * 8) = "station";
  FUN_1462a3428(&DAT_14cb84fb8,&LAB_143dbfbef,"waypoint",&DAT_14b3e7b50);
  atexit((_func_5014 *)&LAB_143dbfbf4);
  FUN_145d889d0();
  uVar4 = DAT_14cb84ec8;
  lVar7 = (longlong)(int)DAT_14cb84ec8;
  DAT_14cb84ec8 = DAT_14cb84ec8 + 1;
  if (DAT_14cb84ecc < DAT_14cb84ec8) {
    FUN_140ca86cc(&DAT_14cb84ec0,uVar4);
  }
  *(char **)(DAT_14cb84ec0 + lVar7 * 8) = "waypoint";
  FUN_1462a3428(&DAT_14cb84fe8,&LAB_143dbfc28,&DAT_14b4152a8,&DAT_14b3e7b50);
  atexit((_func_5014 *)&LAB_143dbfc2d);
  FUN_145d889d0();
  uVar4 = DAT_14cb84ec8;
  lVar7 = (longlong)(int)DAT_14cb84ec8;
  DAT_14cb84ec8 = DAT_14cb84ec8 + 1;
  if (DAT_14cb84ecc < DAT_14cb84ec8) {
    FUN_140ca86cc(&DAT_14cb84ec0,uVar4);
  }
  *(undefined **)(DAT_14cb84ec0 + lVar7 * 8) = &DAT_14b4152a8;
  FUN_1446f470e(&DAT_14cb85018,L"PainterComponent",1);
  local_40 = "bone";
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  local_58 = 0;
  FUN_14153156c(&DAT_14cb85020,L"gbx.LightBeam.ParallelTick",&DAT_14c76399c,
                L"If true, light beam movement and collision will be run across the task graph system."
               );
  atexit(FUN_143dbfc61);
  local_58 = 0;
  FUN_141471170(&DAT_14cb85030,L"gbx.LightBeam.MaxTraceRestart",&DAT_14c7639a0,
                L"Maximum times a trace can restart.");
  atexit(FUN_143dbfca6);
  _DAT_14cb85040 = L"GbxGame.ELightBeamFlag";
  _DAT_14cb85048 = &DAT_14c872af8;
  _DAT_14cb85050 = L"LightBeamFlagNames";
  _DAT_14cb85058 = 0;
  uRam000000014cb85060 = 0;
  _DAT_14cb85068 = 0;
  uRam000000014cb85070 = 0;
  _DAT_14cb85071 = 0;
  uRam000000014cb85078 = 0;
  uRam000000014cb85079 = 0;
  atexit((_func_5014 *)&LAB_143dbfceb);
  FUN_1446f470e(&DAT_14cb850a0,L"OnModifierParticleSystemFinished",1);
  local_58 = 0;
  FUN_141471170(&DAT_14cb850b8,L"gbx.LightBeam.BatchSize",&DAT_14c7639a4,
                L"Maximum number of beams to batch together for ticking.\n");
  atexit(FUN_143dc0c8e);
  local_58 = 0;
  FUN_1415c789c(&DAT_14cb850c8,L"gbx.LightBeam.RecycleUnusedParticlesTime",&DAT_14c7639a8,
                L"How long a pooled particle component needs to be unused for before it can be recycled for use for a different templete."
               );
  atexit(FUN_143dc0cd3);
  local_58 = 0;
  FUN_1415c789c(&DAT_14cb850d8,L"gbx.LightBeam.KillUnusedParticlesTime",&DAT_14c7639ac,
                L"How long a pooled particle component needs to be unused for before it is destroyed."
               );
  atexit(FUN_143dc0d18);
  local_58 = 0;
  FUN_1415c789c(&DAT_14cb850e8,L"gbx.LightBeam.ParticleCleanTime",&DAT_14c7639b0,
                L"How often should the pool be cleaned (in seconds).");
  atexit(FUN_143dc0d5d);
  local_58 = 0;
  local_50 = 0x200;
  FUN_1412c7f16(&DAT_14cb850f8,L"TaskGraph.TaskPriorities.ParallelLightBeamBatchTickTask",
                L"Task and thread priority for FParallelLightBeamBatchTickTask",0x400);
  atexit(FUN_143dc0da2);
  local_58 = 0;
  FUN_1415c789c(&DAT_14cb85138,L"CriticalPathStall.LightBeamBatch",&DAT_14cb85148,
                L"Sleep for the given time in each light beam batch tick task. Time is given in ms. This is a debug option used for critical path analysis and forcing a change in the critical path."
               );
  atexit(FUN_143dc0e0c);
  _DAT_14cb85158 = &LAB_143dc0efb;
  _DAT_14cb85160 = 0x44278000;
  DAT_14cb85164 = 1;
  DAT_14cb85150 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb85150;
  atexit((_func_5014 *)&LAB_143dc0f00);
  local_58 = 0;
  FUN_14153156c(&DAT_14cb85170,L"gbx.LightProjectile.ParallelTick",&DAT_14c7639b4,
                L"If true, light projectile movement and collision will be run across the task graph system."
               );
  atexit(FUN_143dc0f34);
  local_58 = 0;
  FUN_141471170(&DAT_14cb85188,L"gbx.LightProjectile.DisableRelevanceTest",&DAT_14cb85180,
                L"Disables the tracer relevance test.");
  atexit(FUN_143dc0f79);
  local_58 = 0;
  FUN_14153156c(&DAT_14cb85198,L"gbx.LightProjectile.EnableLagCompMagnetism",&DAT_14c7639b5,
                L"Enables adding extra bullet magnetism based on a client\'s ping");
  atexit(FUN_143dc0fbe);
  local_58 = 0;
  FUN_1415c789c(&DAT_14cb851b0,L"gbx.LightProjectile.LagCompMagnetismMinAngle",&DAT_14cb851a8,
                L"Sets the minimum angle to lerp from when adding bullet magnetism based on ping");
  atexit(FUN_143dc1003);
  local_58 = 0;
  FUN_1415c789c(&DAT_14cb851c0,L"gbx.LightProjectile.LagCompMagnetismMaxAngle",&DAT_14c7639b8,
                L"Sets the maximum angle to lerp from when adding bullet magnetism based on ping");
  atexit(FUN_143dc1048);
  local_58 = 0;
  FUN_1415c789c(&DAT_14cb851d0,L"gbx.LightProjectile.LagCompMagnetismMinPing",&DAT_14c7639bc,
                L"Sets the minimum ping in milliseconds where bullet magnetism starts increasing");
  atexit(FUN_143dc108d);
  local_58 = 0;
  FUN_1415c789c(&DAT_14cb851e0,L"gbx.LightProjectile.LagCompMagnetismMaxPing",&DAT_14c7639c0,
                L"Sets the maximum ping in milliseconds where bullet magnetism stops increasing");
  atexit(FUN_143dc10d2);
  local_58 = 0;
  FUN_1415c789c(&DAT_14cb851f0,L"gbx.LightProjectile.LagCompMagnetismMaxYawRate",&DAT_14c7639c4,
                L"Sets the maximum horizontal degrees/second increase to lerp to based on ping");
  atexit(FUN_143dc1117);
  local_58 = 0;
  FUN_1415c789c(&DAT_14cb85200,L"gbx.LightProjectile.LagCompMagnetismMaxPitchRate",&DAT_14c7639c8,
                L"Sets the maximum vertical degrees/second increase to lerp to based on ping");
  atexit(FUN_143dc115c);
  FUN_1446f470e(&DAT_14cb85210,L"LightProjectileTrace",1);
  FUN_1446f470e(&DAT_14cb85218,L"LightProjectileImpactTrace",1);
  _DAT_14cb85220 = L"GbxGame.ELightProjectileFlag";
  _DAT_14cb85228 = &DAT_14c872af8;
  _DAT_14cb85230 = L"LightProjectileFlagNames";
  _DAT_14cb85238 = 0;
  uRam000000014cb85240 = 0;
  _DAT_14cb85248 = 0;
  uRam000000014cb85250 = 0;
  _DAT_14cb85251 = 0;
  uRam000000014cb85258 = 0;
  uRam000000014cb85259 = 0;
  atexit((_func_5014 *)&LAB_143dc11a1);
  FUN_1446f470e(&DAT_14cb85268,L"OnParticleSystemFinished",1);
  FUN_1446f470e(&DAT_14cb85270,L"LightProjectile",1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dcf7f0 FUN_143dcf7f0 body=69 status=ok
// SIG undefined FUN_143dcf7f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dcf7f0(void)

{
  _DAT_14cb852e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dcf832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb852f0,1);
  return;
}



// FUNCTION 143dcf835 FUN_143dcf835 body=69 status=ok
// SIG undefined FUN_143dcf835(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dcf835(void)

{
  _DAT_14cb852f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dcf877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb85300,1);
  return;
}



// FUNCTION 143dcf87a FUN_143dcf87a body=69 status=ok
// SIG undefined FUN_143dcf87a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dcf87a(void)

{
  _DAT_14cb85308 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dcf8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb85310,1);
  return;
}



// FUNCTION 143dcf8bf FUN_143dcf8bf body=69 status=ok
// SIG undefined FUN_143dcf8bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dcf8bf(void)

{
  _DAT_14cb85318 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dcf901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb85320,1);
  return;
}



// FUNCTION 143dcf904 FUN_143dcf904 body=69 status=ok
// SIG undefined FUN_143dcf904(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dcf904(void)

{
  _DAT_14cb85328 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dcf946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb85330,1);
  return;
}



// FUNCTION 143dcf949 FUN_143dcf949 body=69 status=ok
// SIG undefined FUN_143dcf949(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dcf949(void)

{
  _DAT_14cb85338 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dcf98b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb85340,1);
  return;
}



// FUNCTION 143dcf98e FUN_143dcf98e body=69 status=ok
// SIG undefined FUN_143dcf98e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dcf98e(void)

{
  _DAT_14cb85348 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dcf9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb85350,1);
  return;
}



// FUNCTION 143dcf9d3 FUN_143dcf9d3 body=69 status=ok
// SIG undefined FUN_143dcf9d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dcf9d3(void)

{
  _DAT_14cb85358 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dcfa15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb85360,1);
  return;
}



// FUNCTION 143dcfa18 FUN_143dcfa18 body=69 status=ok
// SIG undefined FUN_143dcfa18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dcfa18(void)

{
  _DAT_14cb85368 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dcfa5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb85370,1);
  return;
}



// FUNCTION 143dcfa5d FUN_143dcfa5d body=106 status=ok
// SIG undefined FUN_143dcfa5d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dcfa5d(void)

{
  _DAT_14cb85398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb853a0,1);
  if (DAT_14cb85388 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb85378 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143dcfac7 FUN_143dcfac7 body=69 status=ok
// SIG undefined FUN_143dcfac7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dcfac7(void)

{
  _DAT_14cb853b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143dcfb09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb853c0,1);
  return;
}



// FUNCTION 143dcfb10 FUN_143dcfb10 body=116 status=ok
// SIG undefined FUN_143dcfb10(void)

void FUN_143dcfb10(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar1 = *param_1;
      lVar3 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar3 == 0) {
        iVar5 = iVar5 + -1;
      }
      else if (iVar5 < 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(lVar1 + lVar4 * 8);
        }
        *(longlong *)(lVar1 + (longlong)((int)lVar4 + iVar5) * 8) = lVar3;
        iVar2 = (int)param_1[1];
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
    if (iVar5 < 0) {
      iVar5 = iVar5 + iVar2;
      if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
      *(int *)(param_1 + 1) = iVar5;
    }
  }
  return;
}



// FUNCTION 143dcfb86 FUN_143dcfb86 body=98 status=ok
// SIG undefined FUN_143dcfb86(void)

void FUN_143dcfb86(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x3c8))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3c0) + (ulonglong)param_2 * 8);
    lVar3 = (longlong)*(int *)(lVar1 + 0x28);
    if (lVar3 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x20);
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(lVar1 + lVar4);
        if ((plVar2 != (longlong *)0x0) && (*(uint *)(plVar2 + 0xc) == param_2)) {
          (**(code **)(*plVar2 + 0x2f8))();
        }
        lVar4 = lVar4 + 8;
      } while (lVar3 * 8 != lVar4);
    }
  }
  return;
}



// FUNCTION 143dcfbe8 FUN_143dcfbe8 body=2232 status=ok
// SIG undefined FUN_143dcfbe8(void)

ulonglong FUN_143dcfbe8(longlong param_1,longlong *param_2,double *param_3,double *param_4,
                       float param_5,byte param_6,longlong param_7,longlong param_8,float param_9,
                       longlong *param_10)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  float *pfVar11;
  double *pdVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  double *pdVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStack_338 [32];
  double *local_318;
  double *local_310;
  undefined4 local_2fc;
  double local_2f8;
  double local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  undefined1 local_290 [16];
  double local_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  double local_250;
  undefined4 local_244;
  undefined4 local_240;
  undefined1 local_23b;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined1 local_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_188;
  double dStack_180;
  double local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double *local_130;
  int local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if (*(int *)(param_1 + 0x558) != 0) {
    dVar3 = param_3[2];
    uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
    dVar4 = *param_3;
    uVar36 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar26 = param_3[1];
    uVar21 = (undefined4)((ulonglong)dVar26 >> 0x20);
    dVar33 = *param_4;
    uVar37 = (undefined4)((ulonglong)dVar33 >> 0x20);
    dVar31 = param_4[1];
    uVar25 = (undefined4)((ulonglong)dVar31 >> 0x20);
    dVar29 = param_4[2];
    uVar23 = (undefined4)((ulonglong)dVar29 >> 0x20);
    local_130 = (double *)0x0;
    local_128 = 0;
    if ((((param_9 <= 0.0) || (lVar10 = FUN_1447210f0(param_1), lVar10 == 0)) ||
        (plVar13 = *(longlong **)(lVar10 + 0x938), plVar13 == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(*plVar13 + 0x28))(plVar13,param_9), cVar7 == '\0')) {
      local_2fc = 0;
    }
    else {
      plVar13 = *(longlong **)(lVar10 + 0x938);
      if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
        if (param_1 != 0) goto LAB_143dcfdb4;
        local_2e0 = 0;
      }
      else {
        FUN_1456cec3c(param_1);
LAB_143dcfdb4:
        local_2e0 = param_1 + 0x3a0;
      }
      local_2e8 = param_1;
      local_2fc = (**(code **)(*plVar13 + 0x20))(plVar13,param_9,&local_2e8,&local_130);
    }
    if ((longlong)*(int *)(param_1 + 0x558) != 0) {
      uVar38 = SUB84(dVar4,0);
      uVar39 = uVar36;
      if (dVar33 <= dVar4) {
        uVar38 = SUB84(dVar33,0);
        uVar39 = uVar37;
      }
      uVar40 = SUB84(dVar26,0);
      uVar41 = uVar21;
      if (dVar31 <= dVar26) {
        uVar40 = SUB84(dVar31,0);
        uVar41 = uVar25;
      }
      uVar22 = SUB84(dVar3,0);
      uVar24 = uVar19;
      if (dVar29 <= dVar3) {
        uVar22 = SUB84(dVar29,0);
        uVar24 = uVar23;
      }
      uVar35 = SUB84(dVar4,0);
      if (dVar4 <= dVar33) {
        uVar35 = SUB84(dVar33,0);
        uVar36 = uVar37;
      }
      uVar37 = SUB84(dVar26,0);
      if (dVar26 <= dVar31) {
        uVar37 = SUB84(dVar31,0);
        uVar21 = uVar25;
      }
      uVar25 = SUB84(dVar3,0);
      if (dVar3 <= dVar29) {
        uVar25 = SUB84(dVar29,0);
        uVar19 = uVar23;
      }
      dVar3 = (double)param_5;
      local_2f8 = (double)CONCAT44(uVar19,uVar25) + dVar3;
      dVar4 = (double)CONCAT44(uVar21,uVar37) + dVar3;
      local_2f0 = (double)CONCAT44(uVar24,uVar22) - dVar3;
      plVar13 = *(longlong **)(param_1 + 0x550);
      plVar17 = plVar13 + *(int *)(param_1 + 0x558);
      uVar18 = 0;
      do {
        lVar10 = *plVar13;
        if (lVar10 != param_7 && lVar10 != 0) {
          if ((param_10 != (longlong *)0x0) && ((longlong)(int)param_10[1] != 0)) {
            lVar14 = 0;
            do {
              if (*(int *)(*param_10 + lVar14) == *(int *)(lVar10 + 0x58)) goto LAB_143dcfe84;
              lVar14 = lVar14 + 4;
            } while ((longlong)(int)param_10[1] * 4 != lVar14);
          }
          if ((((*(byte *)(*(longlong *)(lVar10 + 0x80) + 0x370) & 2) != 0) ||
              (*(longlong *)(lVar10 + 0x180) == 0 || *(longlong *)(lVar10 + 0x180) != param_8)) &&
             ((*(byte *)(lVar10 + 0x347) & param_6) == 0)) {
            dVar26 = *(double *)(lVar10 + 0x458);
            uVar23 = (undefined4)*(undefined8 *)(lVar10 + 0x460);
            uVar25 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x460) >> 0x20);
            uVar19 = (undefined4)*(undefined8 *)(lVar10 + 0x468);
            uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x468) >> 0x20);
            dVar33 = *(double *)(lVar10 + 0x470);
            dVar31 = *(double *)(lVar10 + 0x478);
            dVar29 = *(double *)(lVar10 + 0x480);
            local_138 = *(double *)(lVar10 + 0x450);
            local_148 = *(double *)(lVar10 + 0x440);
            dStack_140 = *(double *)(lVar10 + 0x448);
            local_158 = *(double *)(lVar10 + 0x408);
            local_168 = *(double *)(lVar10 + 0x3f8);
            dStack_160 = *(double *)(lVar10 + 0x400);
            if (((char)local_2fc != '\0') && ((longlong)local_128 != 0)) {
              lVar14 = (longlong)local_128 * 0x88;
              pdVar12 = local_130;
              do {
                pdVar16 = pdVar12;
                if (((ulonglong)pdVar12[0x10] & 2) == 0) {
                  pdVar16 = (double *)*pdVar12;
                }
                if ((*(int *)(pdVar16 + 7) == *(int *)(lVar10 + 0x58)) &&
                   (*(char *)((longlong)pdVar16 + 0x3c) == *(char *)(lVar10 + 0x118))) {
                  local_138 = pdVar16[10];
                  local_148 = pdVar16[8];
                  dStack_140 = pdVar16[9];
                  local_158 = pdVar16[0xd];
                  local_168 = pdVar16[0xb];
                  dStack_160 = pdVar16[0xc];
                  dVar26 = *pdVar16;
                  uVar23 = SUB84(pdVar16[1],0);
                  uVar25 = (undefined4)((ulonglong)pdVar16[1] >> 0x20);
                  uVar19 = SUB84(pdVar16[2],0);
                  uVar21 = (undefined4)((ulonglong)pdVar16[2] >> 0x20);
                  dVar33 = pdVar16[3];
                  dVar31 = pdVar16[4];
                  dVar29 = pdVar16[5];
                  break;
                }
                pdVar12 = pdVar12 + 0x11;
                lVar14 = lVar14 + -0x88;
              } while (lVar14 != 0);
            }
            if ((((((double)CONCAT44(uVar39,uVar38) - dVar3 <= dVar33) &&
                  (dVar26 <= (double)CONCAT44(uVar36,uVar35) + dVar3)) &&
                 ((double)CONCAT44(uVar41,uVar40) - dVar3 <= dVar31)) &&
                (((double)CONCAT44(uVar25,uVar23) < dVar4 ||
                  (double)CONCAT44(uVar25,uVar23) == dVar4 && (local_2f0 <= dVar29)))) &&
               ((double)CONCAT44(uVar21,uVar19) < local_2f8 ||
                (double)CONCAT44(uVar21,uVar19) == local_2f8)) {
              fVar20 = (float)FUN_1488e1afe(lVar10);
              local_188 = local_168;
              dStack_180 = dStack_160;
              local_178 = local_158;
              local_1a8 = local_148;
              dStack_1a0 = dStack_140;
              local_198 = local_138;
              local_1c8 = *param_4;
              dStack_1c0 = param_4[1];
              local_1b8 = param_4[2];
              local_1e8 = *(undefined4 *)param_3;
              uStack_1e4 = *(undefined4 *)((longlong)param_3 + 4);
              uStack_1e0 = *(undefined4 *)(param_3 + 1);
              uStack_1dc = *(undefined4 *)((longlong)param_3 + 0xc);
              local_1d8 = param_3[2];
              local_310 = &local_120;
              local_318 = &local_108;
              FUN_144a0d30e(&local_1e8,&local_1c8,&local_1a8,&local_188);
              dVar33 = local_110 - local_f8;
              dVar26 = dStack_118 - dStack_100;
              dVar31 = local_120 - local_108;
              fVar28 = (float)SQRT(dVar33 * dVar33 + dVar31 * dVar31 + dVar26 * dVar26);
              if (fVar28 <= fVar20 + param_5) {
                dVar32 = 1.0 / (double)fVar28;
                dVar26 = dVar26 * dVar32;
                dVar30 = param_4[2] - param_3[2];
                dVar6 = param_4[1] - param_3[1];
                dVar34 = *param_4 - *param_3;
                dVar29 = local_f8 - param_3[2];
                dVar27 = dStack_100 - param_3[1];
                dVar5 = local_108 - *param_3;
                fVar20 = (float)SQRT(dVar29 * dVar29 + dVar5 * dVar5 + dVar27 * dVar27) /
                         (float)SQRT(dVar30 * dVar30 + dVar34 * dVar34 + dVar6 * dVar6);
                memset(&local_2e8,0,0x100);
                local_218 = 0xffffffff;
                local_244 = 0xffffffff;
                local_2e8 = CONCAT44(fVar20,(undefined4)local_2e8);
                local_23b = 1;
                local_2c0 = local_120;
                dStack_2b8 = dStack_118;
                local_2b0 = local_110;
                local_2c8 = local_f8;
                local_2d8 = local_108;
                dStack_2d0 = dStack_100;
                local_280 = -(dVar33 * dVar32);
                local_290._8_4_ = SUB84(dVar26,0);
                local_290._0_8_ = -(dVar31 * dVar32);
                local_290._12_4_ = (uint)((ulonglong)dVar26 >> 0x20) ^ 0x80000000;
                local_268 = param_3[2];
                local_278 = *param_3;
                dStack_270 = param_3[1];
                local_260 = *(undefined4 *)param_4;
                uStack_25c = *(undefined4 *)((longlong)param_4 + 4);
                uStack_258 = *(undefined4 *)(param_4 + 1);
                uStack_254 = *(undefined4 *)((longlong)param_4 + 0xc);
                local_250 = param_4[2];
                local_240 = *(undefined4 *)(lVar10 + 0x58);
                local_2a8 = dVar31 * dVar32;
                local_2a0 = dVar26;
                local_298 = dVar33 * dVar32;
                thunk_FUN_140871de8(&local_230,param_1);
                uVar18 = (ulonglong)*(uint *)(param_2 + 1);
                if (0 < (int)*(uint *)(param_2 + 1)) {
                  pfVar11 = (float *)(*param_2 + 4);
                  uVar15 = 0;
                  do {
                    if (fVar20 < *pfVar11) {
                      iVar9 = FUN_140386e14(param_2,&local_2e8);
                      if (iVar9 != -1) goto LAB_143dd040b;
                      uVar18 = (ulonglong)*(uint *)(param_2 + 1);
                      break;
                    }
                    uVar15 = uVar15 + 1;
                    pfVar11 = pfVar11 + 0x40;
                  } while (uVar18 != uVar15);
                }
                uVar8 = (int)uVar18 + 1;
                *(uint *)(param_2 + 1) = uVar8;
                if (*(uint *)((longlong)param_2 + 0xc) < uVar8) {
                  FUN_144a3a3ee(param_2,uVar18);
                }
                lVar10 = *param_2;
                uVar18 = (longlong)(int)uVar18 * 0x100;
                memcpy((void *)(uVar18 + lVar10),&local_2e8,0xb8);
                puVar1 = (undefined8 *)(lVar10 + 0xb8 + uVar18);
                *puVar1 = 0;
                puVar1[1] = 0;
                *(undefined8 *)(lVar10 + 200 + uVar18) = 0;
                *(undefined4 *)(lVar10 + 0xd0 + uVar18) = 0xffffffff;
                *(undefined1 *)(lVar10 + 0xd4 + uVar18) = 0;
                *(undefined8 *)(lVar10 + 0xb8 + uVar18) = local_230;
                puVar1 = (undefined8 *)(lVar10 + 0xc0 + uVar18);
                *puVar1 = local_228;
                puVar1[1] = uStack_220;
                *(undefined4 *)(lVar10 + 0xd0 + uVar18) = local_218;
                *(undefined1 *)(lVar10 + 0xd4 + uVar18) = local_214;
                *(undefined8 *)(lVar10 + 0xf8 + uVar18) = local_1f0;
                puVar1 = (undefined8 *)(lVar10 + 0xe8 + uVar18);
                *puVar1 = local_200;
                puVar1[1] = uStack_1f8;
                puVar2 = (undefined4 *)(lVar10 + 0xd8 + uVar18);
                *puVar2 = local_210;
                puVar2[1] = uStack_20c;
                puVar2[2] = uStack_208;
                puVar2[3] = uStack_204;
LAB_143dd040b:
                uVar18 = CONCAT71((int7)(uVar18 >> 8),1);
              }
            }
          }
        }
LAB_143dcfe84:
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar17);
      goto LAB_143dcfc7e;
    }
  }
  uVar18 = 0;
LAB_143dcfc7e:
  if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffff01;
}



// FUNCTION 143dd04a6 FUN_143dd04a6 body=135 status=ok
// SIG undefined FUN_143dd04a6(void)

void FUN_143dd04a6(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 != 0) {
    lVar4 = FUN_1447210f0();
    if (lVar4 != 0) {
      iVar3 = FUN_14490d72a(lVar4);
      if (iVar3 != 3) {
        lVar4 = FUN_140877338(lVar4);
        if ((lVar4 != 0) && (iVar3 = *(int *)(lVar4 + 0x3b0), (longlong)iVar3 != 0)) {
          lVar4 = *(longlong *)(lVar4 + 0x3a8);
          lVar5 = 0;
          do {
            uVar1 = *(undefined8 *)(lVar4 + lVar5);
            cVar2 = FUN_1418992a8(param_1,uVar1);
            if (cVar2 != '\0') {
              FUN_143dc70ae(uVar1);
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)iVar3 * 8 != lVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 143dd052e FUN_143dd052e body=306 status=ok
// SIG undefined FUN_143dd052e(void)

void FUN_143dd052e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(int *)(param_1 + 0x78) != 0) && (uVar1 = *(uint *)(param_1 + 0x74), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x78))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar2 = *plVar5, lVar2 != 0)))) {
      lVar4 = FUN_1447210f0(lVar2);
      if (lVar4 != 0) {
        iVar3 = FUN_14490d72a(lVar4);
        if ((iVar3 != 3) && (*(longlong *)(param_1 + 8) != 0)) {
          FUN_140d4f03f(&local_58,lVar2,param_2,param_4);
          *(undefined8 *)(param_1 + 0x30) = local_48;
          *(undefined4 *)(param_1 + 0x20) = local_58;
          *(undefined4 *)(param_1 + 0x24) = uStack_54;
          *(undefined4 *)(param_1 + 0x28) = uStack_50;
          *(undefined4 *)(param_1 + 0x2c) = uStack_4c;
          FUN_141036372(param_3,&local_58,lVar2,0);
          *(undefined8 *)(param_1 + 0x48) = local_48;
          *(undefined4 *)(param_1 + 0x38) = local_58;
          *(undefined4 *)(param_1 + 0x3c) = uStack_54;
          *(undefined4 *)(param_1 + 0x40) = uStack_50;
          *(undefined4 *)(param_1 + 0x44) = uStack_4c;
          FUN_141142006(lVar4,param_1);
        }
      }
    }
  }
  FUN_140bba396(param_1);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dd0662 FUN_143dd0662 body=3400 status=ok
// SIG undefined FUN_143dd0662(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dd0662(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  double *pdVar11;
  uint *puVar12;
  float *pfVar13;
  code **ppcVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  bool bVar19;
  uint uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  code *pcVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auStack_228 [32];
  code **local_208;
  uint local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  wchar_t *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  code **local_1d0;
  code *local_1c8;
  code *local_1c0;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  code *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  code *local_178;
  double local_170;
  float local_168;
  float local_150 [2];
  code *local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  code *local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  double dStack_100;
  code *pcStack_f8;
  double local_f0;
  code *local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  code *pcStack_c0;
  double local_b8;
  char local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (param_2 == (longlong *)0x0) {
    if (*(int *)(param_1 + 0x78) == 0) {
LAB_143dd071d:
      puVar12 = (uint *)(param_1 + 0x80);
    }
    else {
      uVar20 = *(uint *)(param_1 + 0x74);
      if (((((int)uVar20 < 0) || (DAT_14c9647dc <= (int)uVar20)) ||
          (lVar17 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8), lVar17 == 0)) ||
         (*(int *)(lVar17 + 0x10) != *(int *)(param_1 + 0x78))) goto LAB_143dd071d;
      puVar12 = (uint *)(param_1 + 0x80);
      if ((*(uint *)(lVar17 + 8) & 0x10200000) == 0) {
        puVar12 = (uint *)(param_1 + 0x74);
      }
    }
    if (((((puVar12[1] == 0) || (uVar20 = *puVar12, (int)uVar20 < 0)) ||
         ((DAT_14c9647dc <= (int)uVar20 ||
          ((param_2 = (longlong *)
                      ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
           param_2 == (longlong *)0x0 || (*(uint *)(param_2 + 2) != puVar12[1])))))) ||
        ((*(uint *)(param_2 + 1) & 0x10200000) != 0)) ||
       (param_2 = (longlong *)*param_2, param_2 == (longlong *)0x0)) goto LAB_143dd0787;
  }
  lVar17 = FUN_1447210f0(param_2);
  if (((lVar17 == 0) || (iVar7 = FUN_14490d72a(lVar17), iVar7 == 3)) ||
     (lVar8 = FUN_1403d77ae(param_1 + 8), lVar8 == 0)) goto LAB_143dd0787;
  local_d8 = *(double *)(param_1 + 0x30);
  local_e8 = *(code **)(param_1 + 0x20);
  dStack_e0 = *(double *)(param_1 + 0x28);
  if ((((*(double *)(param_1 + 0x20) == 0.0) && (!NAN(*(double *)(param_1 + 0x20)))) &&
      ((*(double *)(param_1 + 0x28) == 0.0 &&
       ((!NAN(*(double *)(param_1 + 0x28)) && (*(double *)(param_1 + 0x30) == 0.0)))))) &&
     (!NAN(*(double *)(param_1 + 0x30)))) {
    FUN_140d4f03f(&local_e8,param_2,param_3,param_7);
  }
  if (DAT_14caf64b8 == 0) {
    local_1d0 = &local_148;
    local_148 = FUN_141030f22;
    local_1c0 = FUN_14081d0ea;
    local_1c8 = FUN_142b4754c;
    local_1d8 = &LAB_147c45ce0;
    local_1e0 = &LAB_1463f1ff4;
    local_1e8 = L"Game";
    local_1f0 = 0x4000000000;
    local_1f8 = 0x10000004;
    local_200 = 8;
    local_208 = (code **)CONCAT44(local_208._4_4_,0x428);
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8)
      != DAT_14caf64b8 + 0x30)) {
    local_1b4 = 0;
    plVar18 = (longlong *)param_2[0x36];
    if ((longlong *)param_2[0x36] != (longlong *)0x0) goto LAB_143dd08b3;
LAB_143dd0998:
    if (((*(char *)(param_4 + 0x14) == '\x01') && (*(float *)(param_4 + 0x10) == 0.0)) &&
       ((!NAN(*(float *)(param_4 + 0x10)) && (*(float *)(param_4 + 8) <= 0.0)))) {
      *(undefined4 *)(param_4 + 8) = *(undefined4 *)(lVar8 + 0x2d4);
    }
    lVar8 = FUN_140519fd4(param_2);
    if ((lVar8 == 0) || (cVar6 = FUN_140b038fa(lVar8), cVar6 == '\0')) {
      FUN_14893fab0(&local_c8,param_2);
      if (local_b0 == '\x01') {
        local_108 = 0;
        dStack_100 = 0.0;
        local_118 = 0.0;
        uStack_110 = 0;
        uVar21 = 0;
        if ((*(longlong *)(lVar17 + 0x30) != 0) &&
           (plVar18 = *(longlong **)(*(longlong *)(lVar17 + 0x30) + 0x2b0),
           plVar18 != (longlong *)0x0)) {
          if (*(code **)(*plVar18 + 0x660) == FUN_1449fb17e) {
            if ((*(byte *)((longlong)plVar18 + 0x39e) & 1) == 0) {
              if ((*(byte *)((longlong)plVar18 + 0x39e) & 2) == 0) {
                if (DAT_14caf84d0 == 0) {
                  local_1d0 = &local_198;
                  local_198 = FUN_1449e2820;
                  local_1c0 = FUN_14081d0ea;
                  local_1c8 = (code *)&LAB_145a62952;
                  local_1d8 = &LAB_147c8cd45;
                  local_1e0 = &LAB_1461468ae;
                  local_1e8 = L"Engine";
                  local_1f0 = 0;
                  local_1f8 = 0x10000006;
                  local_200 = 8;
                  local_208 = (code **)CONCAT44(local_208._4_4_,0x218);
                  FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
                }
                lVar9 = DAT_14caf84d0;
                lVar8 = *(longlong *)(DAT_14caf84d0 + 0x110);
                if (lVar8 == 0) {
                  FUN_140aa6c08(DAT_14caf84d0);
                  lVar8 = *(longlong *)(lVar9 + 0x110);
                }
                puVar10 = (undefined4 *)(lVar8 + 0x38);
              }
              else {
                puVar10 = (undefined4 *)((longlong)plVar18 + 0x41c);
              }
              uVar21 = *puVar10;
              *(undefined4 *)(plVar18 + 0x83) = uVar21;
            }
            else {
              uVar21 = (undefined4)plVar18[0x83];
            }
          }
          else {
            uVar21 = (**(code **)(*plVar18 + 0x660))(plVar18);
          }
        }
        dStack_100 = (double)CONCAT44(dStack_100._4_4_,uVar21);
        local_148 = local_e8;
        dStack_140 = dStack_e0;
        local_138 = local_d8;
        dStack_130 = local_c8;
        local_128 = pcStack_c0;
        dStack_120 = local_b8;
        FUN_14125d732(param_4,&local_198,&local_148);
        uVar21 = (undefined4)local_180;
        uVar30 = (undefined4)((ulonglong)local_180 >> 0x20);
        pdVar11 = (double *)(param_4 + 0x10);
        if (*(char *)(param_4 + 0x14) == '\0') {
          pdVar11 = &dStack_100;
        }
        uVar20 = -(uint)(*(float *)pdVar11 != 0.0);
        uVar20 = ~uVar20 & 0x3f800000 | (uint)(local_168 / *(float *)pdVar11) & uVar20;
      }
      else {
        dVar34 = (double)FUN_144719204(local_1b0,0);
        dVar22 = (double)FUN_144719204(local_1a8);
        dVar38 = sin(dVar34 * 0.017453292519943295);
        dVar34 = cos(dVar34 * 0.017453292519943295);
        dVar22 = dVar22 * 0.017453292519943295;
        uVar20 = SUB84(dVar22,0);
        dVar23 = sin(dVar22);
        dVar22 = cos(dVar22);
        *(double *)(param_1 + 0x38) = dVar22 * dVar34;
        *(double *)(param_1 + 0x40) = dVar23 * dVar34;
        *(double *)(param_1 + 0x48) = dVar38;
        local_170 = 0.0;
        local_178 = (code *)0x0;
        uVar21 = 0;
        uVar30 = 0;
      }
    }
    else {
      local_c8 = (double)FUN_1408a1fe2(lVar8);
      local_208 = &local_148;
      local_138 = 0.0;
      local_118 = 0.0;
      uStack_110 = 0;
      local_148 = (code *)0x0;
      dStack_140 = 0.0;
      local_108 = 0;
      dStack_130 = DAT_14c8464f8;
      local_128 = DAT_14c846500;
      dStack_120 = DAT_14c846508;
      dStack_100 = DAT_14c8464e0;
      pcStack_f8 = DAT_14c8464e8;
      local_f0 = DAT_14c8464f0;
      FUN_14133f9d4(&local_198,param_2,&local_e8);
      FUN_14125d732(param_4,&local_148,&local_198);
      uVar21 = SUB84(dStack_130,0);
      uVar30 = (undefined4)((ulonglong)dStack_130 >> 0x20);
      pfVar13 = local_150;
      if (*(char *)(param_4 + 0x14) != '\0') {
        pfVar13 = (float *)(param_4 + 0x10);
      }
      uVar20 = -(uint)(*pfVar13 != 0.0);
      uVar20 = ~uVar20 & 0x3f800000 | (uint)(local_118._0_4_ / *pfVar13) & uVar20;
      local_b0 = '\x01';
      local_178 = local_128;
      local_170 = dStack_120;
    }
    if ((((((double)CONCAT44(uVar30,uVar21) != 0.0) || (NAN((double)CONCAT44(uVar30,uVar21)))) ||
         ((double)local_178 != 0.0)) || ((NAN((double)local_178) || (local_170 != 0.0)))) ||
       (NAN(local_170))) {
      dVar34 = local_170 * local_170 +
               (double)CONCAT44(uVar30,uVar21) * (double)CONCAT44(uVar30,uVar21) +
               (double)local_178 * (double)local_178;
      if (((dVar34 != 1.0) ||
          (pcVar31 = local_178, dVar22 = (double)CONCAT44(uVar30,uVar21), dVar38 = local_170,
          NAN(dVar34))) &&
         (pcVar31 = DAT_14c8464e8, dVar22 = DAT_14c8464e0, dVar38 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar34)) {
        dVar38 = 1.0 / SQRT(dVar34);
        pcVar31 = (code *)((double)local_178 * dVar38);
        dVar22 = (double)CONCAT44(uVar30,uVar21) * dVar38;
        dVar38 = local_170 * dVar38;
      }
      *(double *)(param_1 + 0x38) = dVar22;
      *(code **)(param_1 + 0x40) = pcVar31;
      *(double *)(param_1 + 0x48) = dVar38;
      *(undefined1 *)(param_1 + 0x179) = 2;
      *(float *)(param_1 + 0x17c) = (float)SQRT(dVar34);
    }
    if (local_b0 != '\0') {
      *(uint *)(param_1 + 0x180) = uVar20;
    }
  }
  else {
    local_1b4 = (undefined4)CONCAT71((int7)((ulonglong)(DAT_14caf64b8 + 0x30) >> 8),param_6);
    plVar18 = param_2;
LAB_143dd08b3:
    pcVar31 = *(code **)(*plVar18 + 0x5e8);
    if (pcVar31 == FUN_140972dde) {
      if (plVar18[0x76] == 0) {
        pcVar31 = *(code **)(*plVar18 + 0x5f8);
        if (pcVar31 == FUN_144784df4) {
          if (*(code **)(plVar18[0x784] + 0x18) == (code *)&LAB_144904684) {
            if ((((*(int *)((longlong)plVar18 + 0x75b4) == 0) ||
                 (uVar20 = *(uint *)(plVar18 + 0xeb6), (int)uVar20 < 0)) ||
                (DAT_14c9647dc <= (int)uVar20)) ||
               (((plVar15 = (longlong *)
                            ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
                 plVar15 == (longlong *)0x0 ||
                 ((int)plVar15[2] != *(int *)((longlong)plVar18 + 0x75b4))) ||
                ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_143dd0998;
            if ((*(uint *)(plVar15 + 1) & 0x10200000) == 0) {
              lVar9 = *plVar15;
            }
            else {
              lVar9 = 0;
            }
            lVar9 = lVar9 + 0x110;
          }
          else {
            lVar9 = (**(code **)(plVar18[0x784] + 0x18))(plVar18 + 0x784);
          }
          if (lVar9 == 0) goto LAB_143dd0998;
          lVar9 = *(longlong *)(lVar9 + 0x20);
        }
        else {
          lVar9 = (*pcVar31)(plVar18);
        }
        if (lVar9 == 0) goto LAB_143dd0998;
        lVar9 = *(longlong *)(lVar9 + 0x3b0);
        goto LAB_143dd0985;
      }
    }
    else {
      lVar9 = (*pcVar31)(plVar18);
LAB_143dd0985:
      if (lVar9 == 0) goto LAB_143dd0998;
    }
    if (0.0 < *(float *)(param_4 + 0xc)) goto LAB_143dd0998;
    local_c8 = 0.0;
    pcStack_c0 = (code *)0x0;
    local_200 = local_200 & 0xffffff00;
    local_208 = (code **)CONCAT44(local_208._4_4_,0xf);
    ppcVar14 = &local_148;
    uVar21 = FUN_143e0f36e(ppcVar14,plVar18,&local_e8);
    local_e8 = local_128;
    dStack_e0 = dStack_120;
    local_d8 = local_118;
    dVar34 = (double)local_148 * 0.0 - dStack_140 * 1.0;
    dVar22 = dStack_140 * 0.0 - local_138 * 0.0;
    dVar38 = local_138 * 1.0 - (double)local_148 * 0.0;
    dVar22 = dVar22 + dVar22;
    dVar38 = dVar38 + dVar38;
    dVar34 = dVar34 + dVar34;
    dVar23 = (local_138 * dVar22 - (double)local_148 * dVar34) + dStack_130 * dVar38 + 0.0;
    auVar33._8_4_ = SUB84(dVar23,0);
    auVar33._0_8_ = (dVar34 * dStack_140 - dVar38 * local_138) + dStack_130 * dVar22 + 1.0;
    auVar33._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x38) = auVar33;
    *(double *)(param_1 + 0x48) =
         dVar34 * dStack_130 + 0.0 + (dVar38 * (double)local_148 - dVar22 * dStack_140);
    if (0.0 < *(float *)(param_4 + 8)) {
      *(undefined1 *)(param_1 + 0x179) = 2;
      *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_4 + 8);
    }
    auVar33 = *(undefined1 (*) [16])(param_4 + 0x18);
    dVar34 = (double)DAT_1499387d0;
    dVar22 = DAT_1499387d0._8_8_;
    auVar24 = divpd(auVar33,_DAT_1499387d0);
    auVar35._8_8_ = 0;
    auVar35._0_8_ = *(double *)(param_4 + 0x28);
    auVar36 = divpd(auVar35,_DAT_1499387d0);
    auVar24 = roundpd(auVar24,auVar24,3);
    auVar36 = roundpd(auVar36,auVar36,3);
    dVar38 = auVar33._0_8_ - auVar24._0_8_ * dVar34;
    dVar23 = auVar33._8_8_ - auVar24._8_8_ * dVar22;
    dVar3 = *(double *)(param_4 + 0x28) - auVar36._0_8_ * dVar34;
    dVar4 = 0.0 - auVar36._8_8_ * dVar22;
    auVar37._0_8_ = dVar38 + dVar34;
    auVar37._8_8_ = dVar23 + dVar22;
    auVar32._0_8_ = dVar34 + dVar3;
    auVar32._8_8_ = dVar22 + dVar4;
    auVar25._8_8_ = -(ulonglong)(0.0 <= dVar23);
    auVar25._0_8_ = -(ulonglong)(0.0 <= dVar38);
    auVar24._8_4_ = SUB84(dVar23,0);
    auVar24._0_8_ = dVar38;
    auVar24._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    auVar24 = blendvpd(auVar37,auVar24,auVar25);
    auVar26._8_8_ = -(ulonglong)(0.0 <= dVar4);
    auVar26._0_8_ = -(ulonglong)(0.0 <= dVar3);
    auVar1._8_4_ = SUB84(dVar4,0);
    auVar1._0_8_ = dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar33 = blendvpd(auVar32,auVar1,auVar26);
    dVar34 = auVar33._8_8_ + -360.0;
    auVar27._8_8_ = -(ulonglong)(180.0 < auVar24._8_8_);
    auVar27._0_8_ = -(ulonglong)(180.0 < auVar24._0_8_);
    auVar5._8_8_ = auVar24._8_8_ + -360.0;
    auVar5._0_8_ = auVar24._0_8_ + -360.0;
    auVar24 = blendvpd(auVar24,auVar5,auVar27);
    auVar28._8_8_ = -(ulonglong)(180.0 < auVar33._8_8_);
    auVar28._0_8_ = -(ulonglong)(180.0 < auVar33._0_8_);
    auVar2._8_4_ = SUB84(dVar34,0);
    auVar2._0_8_ = auVar33._0_8_ + -360.0;
    auVar2._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    auVar33 = blendvpd(auVar33,auVar2,auVar28);
    lVar8 = -(ulonglong)(9.999999747378752e-05 < ABS(auVar24._8_8_));
    auVar36._8_4_ = (int)lVar8;
    auVar36._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar24._0_8_));
    auVar36._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
    iVar7 = movmskpd(uVar21,auVar36);
    auVar29._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar33._8_8_));
    auVar29._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar33._0_8_));
    uVar20 = movmskpd((int)ppcVar14,auVar29);
    if ((uVar20 & 0x3fffffff) != 0 || iVar7 != 0) {
      FUN_1401c9a0e(param_4 + 0x18,&local_198,(undefined8 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x48) = local_188;
      *(undefined8 *)(param_1 + 0x38) = local_198;
      *(undefined8 *)(param_1 + 0x40) = uStack_190;
    }
    if (local_c8 != 0.0) {
      FUN_1400020a8();
    }
  }
  *(double *)(param_1 + 0x30) = local_d8;
  *(code **)(param_1 + 0x20) = local_e8;
  *(double *)(param_1 + 0x28) = dStack_e0;
  uVar20 = *(uint *)((longlong)param_2 + 0xc);
  *(uint *)(param_1 + 0x74) = uVar20;
  if ((int)uVar20 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  iVar7 = *(int *)(lVar8 + 0x10);
  if (*(int *)(lVar8 + 0x10) == 0) {
    LOCK();
    iVar7 = DAT_14c964868 + 1;
    UNLOCK();
    iVar16 = DAT_14c964868 + 1;
    bVar19 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar7;
    if (bVar19) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar16);
    }
    LOCK();
    iVar7 = *(int *)(lVar8 + 0x10);
    bVar19 = iVar7 == 0;
    if (bVar19) {
      *(int *)(lVar8 + 0x10) = iVar16;
      iVar7 = 0;
    }
    UNLOCK();
    if (bVar19) {
      iVar7 = iVar16;
    }
  }
  *(int *)(param_1 + 0x78) = iVar7;
  if ((char)local_1b4 != '\0') {
    uVar20 = *(uint *)((longlong)param_2 + 0xc);
    *(uint *)(param_1 + 0x6c) = uVar20;
    if ((int)uVar20 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar19 = iVar7 == 0;
      if (bVar19) {
        *(int *)(lVar8 + 0x10) = iVar16;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar7 = iVar16;
      }
    }
    *(int *)(param_1 + 0x70) = iVar7;
  }
  if ((*(int *)(param_1 + 0x80) == 0) && (*(int *)(param_1 + 0x84) == 0)) {
    uVar20 = *(uint *)((longlong)param_2 + 0xc);
    *(uint *)(param_1 + 0x80) = uVar20;
    if ((int)uVar20 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar19 = iVar7 == 0;
      if (bVar19) {
        *(int *)(lVar8 + 0x10) = iVar16;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar7 = iVar16;
      }
    }
    *(int *)(param_1 + 0x84) = iVar7;
  }
  FUN_141142006(lVar17,param_1);
LAB_143dd0787:
  FUN_140bba396(param_1);
  if ((local_a0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dd13ab FUN_143dd13ab body=805 status=ok
// SIG undefined FUN_143dd13ab(void)

longlong *
FUN_143dd13ab(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong *local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  uint local_308;
  int local_304;
  undefined8 local_300 [79];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if ((((param_2 == (longlong *)0x0) ||
       (lVar5 = (**(code **)(*param_2 + 0x180))(param_2), lVar5 == 0)) ||
      (iVar4 = FUN_14490d72a(lVar5), iVar4 == 3)) ||
     ((param_4 == 0 || (*(longlong *)(param_3 + 8) == 0)))) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_368);
  }
  local_338 = *param_6;
  uStack_334 = param_6[1];
  uStack_330 = param_6[2];
  uStack_32c = param_6[3];
  local_328 = param_6[4];
  uStack_324 = param_6[5];
  uStack_320 = param_6[6];
  uStack_31c = param_6[7];
  local_318 = param_6[8];
  uStack_314 = param_6[9];
  uStack_310 = param_6[10];
  uStack_30c = param_6[0xb];
  local_304 = 0;
  local_308 = *(uint *)(param_4 + 0xc);
  if ((int)local_308 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((local_308 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_308 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  iVar4 = *(int *)(lVar8 + 0x10);
  if (*(int *)(lVar8 + 0x10) == 0) {
    LOCK();
    iVar4 = DAT_14c964868 + 1;
    UNLOCK();
    iVar7 = DAT_14c964868 + 1;
    bVar9 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar4;
    if (bVar9) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar7);
    }
    LOCK();
    iVar4 = *(int *)(lVar8 + 0x10);
    bVar9 = iVar4 == 0;
    if (bVar9) {
      *(int *)(lVar8 + 0x10) = iVar7;
      iVar4 = 0;
    }
    UNLOCK();
    if (bVar9) {
      iVar4 = iVar7;
    }
  }
  local_304 = iVar4;
  FUN_140ff1a6a(local_300,param_5);
  local_88 = local_338;
  uStack_84 = uStack_334;
  uStack_80 = uStack_330;
  uStack_7c = uStack_32c;
  local_78 = local_328;
  uStack_74 = uStack_324;
  uStack_70 = uStack_320;
  uStack_6c = uStack_31c;
  local_68 = local_318;
  uStack_64 = uStack_314;
  uStack_60 = uStack_310;
  uStack_5c = uStack_30c;
  local_58 = param_7;
  local_54 = param_8;
  plVar6 = (longlong *)FUN_14001cc68(0x4e8,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b416610;
  FUN_14893ec6c(plVar6 + 2,&local_308);
  plVar6[2] = (longlong)&PTR_FUN_14b417820;
  FUN_14185d8e6(plVar6 + 100,param_3);
  *param_1 = (longlong)(plVar6 + 2);
  param_1[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  FUN_140e67fb0(&local_348,lVar5);
  if (local_340 != (longlong *)0x0) {
    iVar4 = (int)local_340[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar7 = (int)local_340[1];
      bVar9 = iVar4 == iVar7;
      if (bVar9) {
        *(int *)(local_340 + 1) = iVar4 + 1;
        iVar7 = iVar4;
      }
      iVar4 = iVar7;
      UNLOCK();
      plVar6 = local_340;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_340 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_340 + 0x10))();
    }
    lVar5 = local_348;
    if (plVar6 != (longlong *)0x0) {
      if (local_348 != 0) {
        local_348 = *param_1;
        plVar3 = (longlong *)param_1[1];
        local_340 = plVar3;
        if (plVar3 == (longlong *)0x0) {
          FUN_140e67c44(lVar5,&local_348);
        }
        else {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          FUN_140e67c44();
          if (plVar3 != (longlong *)0x0) {
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
        }
      }
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  local_300[0] = 0;
  FUN_14076ba36();
  if ((local_50 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dd170a FUN_143dd170a body=41 status=ok
// SIG undefined FUN_143dd170a(void)

void FUN_143dd170a(void)

{
  DAT_14cb85440 = 0;
  if (DAT_14cb85438 != 0) {
    FUN_1400020a8();
  }
  FUN_145d67038();
  return;
}



// FUNCTION 143dd1772 FUN_143dd1772 body=1521 status=ok
// SIG undefined FUN_143dd1772(void)

void FUN_143dd1772(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  undefined8 ****ppppuVar18;
  uint *puVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong *local_90;
  undefined4 local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_4 != 0 && param_3 != 0) && (lVar6 = FUN_1488e6a7a(param_2), lVar6 != 0)) {
    lVar6 = FUN_1488e6a7a(param_2);
    local_a0 = (undefined8 ****)((ulonglong)local_a0 & 0xffffffffffffff00);
    local_78[0] = 0;
    FUN_1456bb102(&local_a0,param_4);
    FUN_1448729ea(lVar6 + 0x18,local_70,&local_a0);
    iVar5 = FUN_14005fbd2(local_70);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar18 = local_70;
      if (0x18 < local_58) {
        ppppuVar18 = (undefined8 ****)local_70[0];
      }
      (*pcVar3)(ppppuVar18);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    FUN_1448173f8(local_78);
    if (((char)local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (0 < iVar5) {
      plVar7 = (longlong *)(param_1 + 0x20);
      iVar17 = *(int *)(param_1 + 0x28);
      uVar13 = (ulonglong)iVar17;
      iVar11 = 0;
      if (uVar13 != 0) {
        puVar19 = *(uint **)(param_1 + 0x20);
        lVar6 = uVar13 * 0x18;
        do {
          if ((puVar19[1] == 0) || (uVar10 = *puVar19, (int)uVar10 < 0)) {
LAB_143dd1927:
            lVar15 = 0;
          }
          else {
            lVar15 = 0;
            if ((int)uVar10 < DAT_14c9647dc) {
              plVar16 = (longlong *)
                        ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
              if (((plVar16 == (longlong *)0x0) || (*(uint *)(plVar16 + 2) != puVar19[1])) ||
                 ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) goto LAB_143dd1927;
              lVar15 = *plVar16;
            }
          }
          if (lVar15 == param_4) {
            if (puVar19 != (uint *)0x0) goto LAB_143dd1a62;
            break;
          }
          puVar19 = puVar19 + 6;
          lVar6 = lVar6 + -0x18;
        } while (lVar6 != 0);
        iVar11 = iVar17;
        if (0 < iVar17) {
          lVar6 = uVar13 * 0x18 + -0x14;
          do {
            iVar17 = *(int *)(*plVar7 + lVar6);
            if (((((iVar17 == 0) || (uVar10 = *(uint *)(*plVar7 + -4 + lVar6), (int)uVar10 < 0)) ||
                 ((DAT_14c9647dc <= (int)uVar10 ||
                  ((plVar16 = (longlong *)
                              ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                   plVar16 == (longlong *)0x0 || ((int)plVar16[2] != iVar17)))))) ||
                ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) || (*plVar16 == 0)) {
              FUN_1488ef42c(plVar7,(int)uVar13 + -1);
              FUN_1488ef496(plVar7);
            }
            lVar6 = lVar6 + -0x18;
            bVar21 = 1 < uVar13;
            uVar13 = uVar13 - 1;
          } while (bVar21);
          iVar11 = *(int *)(param_1 + 0x28);
        }
      }
      *(uint *)(param_1 + 0x28) = iVar11 + 1U;
      if (*(uint *)(param_1 + 0x2c) < iVar11 + 1U) {
        FUN_1488ef544(plVar7);
      }
      lVar6 = *plVar7;
      lVar15 = (longlong)iVar11;
      puVar9 = (undefined8 *)(lVar6 + lVar15 * 0x18);
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined8 *)(lVar6 + 0x10 + lVar15 * 0x18) = 0;
      uVar10 = *(uint *)(param_4 + 0xc);
      *(uint *)(lVar6 + lVar15 * 0x18) = uVar10;
      if ((int)uVar10 < DAT_14c9647dc) {
        lVar20 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      }
      else {
        lVar20 = 0;
      }
      puVar19 = (uint *)(lVar6 + lVar15 * 0x18);
      uVar10 = *(uint *)(lVar20 + 0x10);
      if (*(uint *)(lVar20 + 0x10) == 0) {
        LOCK();
        iVar17 = DAT_14c964868 + 1;
        UNLOCK();
        uVar12 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar17;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar12);
        }
        LOCK();
        uVar10 = *(uint *)(lVar20 + 0x10);
        bVar21 = uVar10 == 0;
        if (bVar21) {
          *(uint *)(lVar20 + 0x10) = uVar12;
          uVar10 = 0;
        }
        UNLOCK();
        if (bVar21) {
          uVar10 = uVar12;
        }
      }
      puVar19[1] = uVar10;
LAB_143dd1a62:
      plVar7 = *(longlong **)(puVar19 + 2);
      uVar10 = puVar19[4];
      lVar6 = (longlong)(int)uVar10;
      if (lVar6 != 0) {
        lVar15 = lVar6 * 0x28;
        plVar16 = plVar7;
        do {
          if ((*plVar16 == *param_2) && ((int)plVar16[1] == (int)param_2[1])) {
            if (plVar16 != (longlong *)0x0) goto LAB_143dd1afd;
            break;
          }
          plVar16 = plVar16 + 5;
          lVar15 = lVar15 + -0x28;
        } while (lVar15 != 0);
      }
      puVar19[4] = uVar10 + 1;
      if (puVar19[5] < uVar10 + 1) {
        FUN_1488ef5d8(puVar19 + 2,uVar10);
        plVar7 = *(longlong **)(puVar19 + 2);
      }
      plVar16 = plVar7 + lVar6 * 5;
      plVar16[2] = 0;
      plVar16[3] = 0;
      *plVar16 = 0;
      plVar16[1] = 0;
      plVar16[4] = 0;
      if ((*param_2 != 0) || ((int)param_2[1] != 0)) {
        *plVar16 = *param_2;
        *(int *)(plVar16 + 1) = (int)param_2[1];
        plVar16[2] = 0;
      }
LAB_143dd1afd:
      plVar7 = plVar16 + 3;
      uVar13 = (ulonglong)(int)plVar16[4];
      if (0 < (longlong)uVar13) {
        iVar17 = -(int)plVar16[4];
        lVar6 = uVar13 * 8;
        do {
          lVar6 = lVar6 + -8;
          cVar4 = FUN_14079e1ea(*plVar7 + lVar6,0);
          if (cVar4 == '\0') {
            iVar11 = *(int *)(*plVar7 + -4 + uVar13 * 8);
            if ((((iVar11 == 0) || (uVar10 = *(uint *)(*plVar7 + -8 + uVar13 * 8), (int)uVar10 < 0))
                || (DAT_14c9647dc <= (int)uVar10)) ||
               (((plVar8 = (longlong *)
                           ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                 plVar8 == (longlong *)0x0 || ((int)plVar8[2] != iVar11)) ||
                (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 ||
                 ((*plVar8 == 0 || ((*(uint *)(*plVar8 + 8) >> 0x1e & 1) != 0))))))))
            goto LAB_143dd1b9a;
          }
          else {
LAB_143dd1b9a:
            uVar10 = *(uint *)(plVar16 + 4);
            if (uVar13 != uVar10) {
              memmove((void *)(plVar16[3] + uVar13 * 8 + -8),(void *)(plVar16[3] + uVar13 * 8),
                      (longlong)(int)(uVar10 + iVar17) << 3);
              uVar10 = *(uint *)(plVar16 + 4);
            }
            *(uint *)(plVar16 + 4) = uVar10 - 1;
            FUN_14819c8f6(plVar7);
          }
          iVar17 = iVar17 + 1;
          bVar21 = 1 < uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar21);
      }
      uVar10 = *(uint *)(param_3 + 0xc);
      local_a0 = (undefined8 ****)(ulonglong)uVar10;
      if ((int)uVar10 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar17 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar17 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar17;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar17 = *(int *)(lVar6 + 0x10);
        bVar21 = iVar17 == 0;
        if (bVar21) {
          *(int *)(lVar6 + 0x10) = iVar11;
          iVar17 = 0;
        }
        UNLOCK();
        uVar10 = (uint)local_a0;
        if (bVar21) {
          iVar17 = iVar11;
        }
      }
      local_a0._0_4_ = uVar10;
      local_a0 = (undefined8 ****)CONCAT44(iVar17,(uint)local_a0);
      FUN_1407a297a(plVar7);
      FUN_1488e6b06(param_3 + 0x2b8,&local_a0);
      iVar17 = (int)plVar16[4] - iVar5;
      if (iVar17 != 0 && iVar5 <= (int)plVar16[4]) {
        uVar10 = iVar17 + 1;
        do {
          uVar12 = ((uint *)*plVar7)[1];
          if ((uVar12 == 0) || (uVar2 = *(uint *)*plVar7, (int)uVar2 < 0)) {
LAB_143dd1cc8:
            uVar14 = 0;
          }
          else {
            uVar14 = 0;
            if ((int)uVar2 < DAT_14c9647dc) {
              puVar9 = (undefined8 *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((puVar9 == (undefined8 *)0x0) || (*(uint *)(puVar9 + 2) != uVar12)) ||
                 ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_143dd1cc8;
              uVar14 = *puVar9;
            }
          }
          local_70[0] = (undefined8 ****)0x0;
          local_a0 = local_70;
          FUN_140bf0ae6(plVar7,&local_a0);
          FUN_1488e6bde(uVar14);
          uVar10 = uVar10 - 1;
        } while (1 < uVar10);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dd1d64 FUN_143dd1d64 body=190 status=ok
// SIG undefined FUN_143dd1d64(void)

void FUN_143dd1d64(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_1 != 0) && (lVar5 = FUN_1447210f0(), lVar5 != 0)) &&
     (FUN_14189b2f2(&local_28,lVar5), local_20 != (longlong *)0x0)) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_143dd1e24(local_28,param_1,0);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dd1e24 FUN_143dd1e24 body=1649 status=ok
// SIG undefined FUN_143dd1e24(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143dd1e24(longlong param_1,longlong param_2,char param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *******pppppppuVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  ulonglong local_d8 [5];
  undefined4 local_b0;
  undefined8 *******local_a8 [3];
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_2 != 0) && (iVar10 = *(int *)(param_1 + 0x28), iVar10 != 0)) {
    if (param_3 == '\0') {
      local_f8 = 0;
    }
    else {
      lVar7 = FUN_144a7cbb2();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
        local_f8 = 0;
      }
      else {
        local_f8 = *(longlong *)(param_2 + 0x3b0);
      }
      iVar10 = *(int *)(param_1 + 0x28);
    }
    if (0 < iVar10) {
      local_e0 = (longlong *)(param_1 + 0x20);
      local_e8 = 0;
      do {
        local_100 = local_e8 * 0x18 + *local_e0;
        cVar5 = FUN_14069eaf4(local_100,param_2);
        if ((cVar5 != '\0') ||
           ((local_f8 != 0 && (cVar5 = FUN_14069eaf4(local_100,local_f8), cVar5 != '\0')))) {
          iVar10 = *(int *)(local_100 + 0x10);
          plVar3 = local_e0;
          if ((longlong)iVar10 < 1) goto joined_r0x000143dd2162;
          local_f0 = (longlong *)(local_100 + 8);
          uVar17 = (longlong)iVar10;
          goto LAB_143dd2067;
        }
        if (0 < *(int *)(local_100 + 0x10)) {
          local_f0 = (longlong *)(local_100 + 8);
          uVar17 = 0;
          do {
            lVar7 = *local_f0;
            local_d8[0] = 0;
            FUN_14485c47a(local_d8,param_2);
            lVar11 = (longlong)*(int *)(lVar7 + 0x20 + uVar17 * 0x28);
            if (lVar11 != 0) {
              local_108 = (longlong *)(lVar7 + uVar17 * 0x28 + 0x18);
              lVar7 = *local_108;
              lVar11 = lVar11 << 3;
              iVar10 = 1;
              lVar14 = 0;
              do {
                cVar5 = FUN_140383372(lVar7,local_d8);
                plVar3 = local_108;
                if (cVar5 != '\0') {
                  if (iVar10 != 0) {
                    iVar6 = (int)local_108[1];
                    if (iVar6 - iVar10 != 0) {
                      memmove((void *)(*local_108 + (lVar14 >> 0x20) * 8),
                              (void *)(*local_108 + (lVar14 >> 0x20) * 8 + 8),
                              (longlong)(iVar6 - iVar10) << 3);
                      iVar6 = (int)plVar3[1];
                    }
                    plVar3 = local_108;
                    *(int *)(local_108 + 1) = iVar6 + -1;
                    FUN_14819c8f6(local_108);
                    plVar4 = local_f0;
                    if ((int)plVar3[1] == 0) {
                      FUN_1488ef798(local_f0,uVar17 & 0xffffffff);
                      FUN_1488ef7f2(plVar4);
                    }
                    iVar10 = *(int *)(local_100 + 0x10);
                    plVar3 = local_e0;
                    goto joined_r0x000143dd2162;
                  }
                  break;
                }
                lVar7 = lVar7 + 8;
                lVar14 = lVar14 + 0x100000000;
                iVar10 = iVar10 + 1;
                lVar11 = lVar11 + -8;
              } while (lVar11 != 0);
            }
            uVar17 = uVar17 + 1;
          } while ((longlong)uVar17 < (longlong)*(int *)(local_100 + 0x10));
        }
        local_e8 = local_e8 + 1;
      } while (local_e8 < *(int *)(param_1 + 0x28));
    }
  }
  goto LAB_143dd1e71;
LAB_143dd2067:
  do {
    uVar16 = uVar17 - 1;
    if (param_3 == '\0') {
LAB_143dd2134:
      plVar3 = local_f0;
      FUN_1488ef798(local_f0,uVar16 & 0xffffffff);
      FUN_1488ef7f2(plVar3);
    }
    else {
      lVar11 = uVar16 * 0x28 + *local_f0;
      lVar7 = FUN_1488e6a7a(lVar11);
      if (*(char *)(lVar7 + 0x68) == '\x01') {
        lVar7 = FUN_1488e6a7a(lVar11);
        local_d8[0] = local_d8[0] & 0xffffffffffffff00;
        local_b0 = 0;
        FUN_1456bb102(local_d8,param_2);
        FUN_1448729ea(lVar7 + 0x70,local_a8,local_d8);
        fVar18 = (float)FUN_144a7b41a(local_a8,0);
        if (1.0 <= fVar18) {
          fVar18 = 1.0;
        }
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
        if (pcVar1 != (code *)0x0) {
          pppppppuVar9 = local_a8;
          if (0x18 < local_90) {
            pppppppuVar9 = local_a8[0];
          }
          (*pcVar1)(pppppppuVar9);
        }
        if (0x18 < local_90) {
          FUN_1400020a8(local_a8[0]);
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        FUN_144a5ac3a(local_d8);
        if (1.0 <= fVar18) {
          if (0 < *(int *)(lVar11 + 0x20)) {
            lVar7 = 0;
            lVar14 = 0;
            do {
              uVar8 = FUN_14479d2ce(*(longlong *)(lVar11 + 0x18) + lVar7);
              *(undefined8 *)(*(longlong *)(lVar11 + 0x18) + lVar14 * 8) = 0;
              FUN_1488e6bde(uVar8);
              lVar14 = lVar14 + 1;
              lVar7 = lVar7 + 8;
            } while (lVar14 < *(int *)(lVar11 + 0x20));
          }
          goto LAB_143dd2134;
        }
        local_108 = (longlong *)(lVar11 + 0x18);
        uVar13 = (uint)(fVar18 * (float)*(int *)(lVar11 + 0x20));
        lVar7 = FUN_1488e6a7a(lVar11);
        cVar5 = *(char *)(lVar7 + 0x6a);
        if (cVar5 == '\0') {
          if (0 < (int)uVar13) {
            local_f8 = (ulonglong)uVar13 << 3;
            lVar14 = 0;
            lVar7 = 0;
            do {
              plVar3 = local_108;
              uVar12 = (ulonglong)*(int *)(lVar11 + 0x20);
              if ((longlong)uVar12 <= lVar7) goto LAB_143dd247d;
              uVar8 = FUN_14479d2ce(*local_108 + lVar14);
              *(undefined8 *)(*plVar3 + lVar14) = 0;
              FUN_1488e6bde(uVar8);
              lVar7 = lVar7 + 1;
              lVar14 = lVar14 + 8;
            } while (local_f8 != lVar14);
          }
LAB_143dd247a:
          uVar12 = (ulonglong)*(uint *)(lVar11 + 0x20);
        }
        else {
          if (cVar5 != '\x01') {
            if ((cVar5 == '\x02') && (0 < (int)uVar13)) {
              iVar10 = uVar13 + 1;
              do {
                iVar6 = *(int *)(lVar11 + 0x20);
                if (iVar6 < 1) goto LAB_143dd23a5;
                iVar6 = rand();
                uVar13 = iVar6 % *(int *)(lVar11 + 0x20);
                lVar7 = (longlong)(int)uVar13;
                uVar8 = FUN_14479d2ce(lVar7 * 8 + *(longlong *)(lVar11 + 0x18));
                *(undefined8 *)(*(longlong *)(lVar11 + 0x18) + lVar7 * 8) = 0;
                FUN_1488e6bde(uVar8);
                iVar6 = *(int *)(lVar11 + 0x20);
                iVar15 = ~uVar13 + iVar6;
                if (iVar15 != 0) {
                  memmove((void *)(*(longlong *)(lVar11 + 0x18) + lVar7 * 8),
                          (void *)(*(longlong *)(lVar11 + 0x18) + lVar7 * 8 + 8),
                          (longlong)iVar15 << 3);
                  iVar6 = *(int *)(lVar11 + 0x20);
                }
                *(int *)(lVar11 + 0x20) = iVar6 + -1;
                FUN_14819c8f6(local_108);
                iVar10 = iVar10 + -1;
              } while (1 < iVar10);
            }
            goto LAB_143dd247a;
          }
          uVar12 = (ulonglong)*(uint *)(lVar11 + 0x20);
          if ((0 < (int)uVar13) && (0 < (int)*(uint *)(lVar11 + 0x20))) {
            lVar7 = uVar12 * 8;
            do {
              lVar7 = lVar7 + -8;
              uVar8 = FUN_14479d2ce(*local_108 + lVar7);
              *(undefined8 *)(*local_108 + -8 + uVar12 * 8) = 0;
              FUN_1488e6bde(uVar8);
              if (uVar12 < 2) break;
              uVar12 = uVar12 - 1;
              bVar2 = 1 < uVar13;
              uVar13 = uVar13 - 1;
            } while (bVar2);
            goto LAB_143dd247a;
          }
        }
LAB_143dd247d:
        iVar6 = (int)uVar12;
        if (0 < iVar6) {
          iVar6 = -iVar6;
          lVar7 = (uVar12 & 0xffffffff) * 8;
          uVar12 = uVar12 & 0xffffffff;
          do {
            lVar7 = lVar7 + -8;
            cVar5 = FUN_14079e1ea(*local_108 + lVar7,0);
            if (cVar5 != '\0') {
              uVar13 = *(uint *)(lVar11 + 0x20);
              if (uVar12 != uVar13) {
                memmove((void *)(*(longlong *)(lVar11 + 0x18) + uVar12 * 8 + -8),
                        (void *)(*(longlong *)(lVar11 + 0x18) + uVar12 * 8),
                        (longlong)(int)(uVar13 + iVar6) << 3);
                uVar13 = *(uint *)(lVar11 + 0x20);
              }
              *(uint *)(lVar11 + 0x20) = uVar13 - 1;
              FUN_14819c8f6(local_108);
            }
            iVar6 = iVar6 + 1;
            bVar2 = 1 < uVar12;
            uVar12 = uVar12 - 1;
          } while (bVar2);
          iVar6 = *(int *)(lVar11 + 0x20);
        }
LAB_143dd23a5:
        if (iVar6 == 0) goto LAB_143dd2134;
      }
    }
    bVar2 = 1 < (longlong)uVar17;
    uVar17 = uVar16;
  } while (bVar2);
  iVar10 = *(int *)(local_100 + 0x10);
  plVar3 = local_e0;
joined_r0x000143dd2162:
  local_e0 = plVar3;
  if (iVar10 == 0) {
    FUN_1488ef42c(plVar3,local_e8);
    FUN_1488ef496(plVar3);
  }
LAB_143dd1e71:
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dd2496 FUN_143dd2496 body=245 status=ok
// SIG undefined FUN_143dd2496(void)

void FUN_143dd2496(longlong *param_1,undefined4 *param_2,float param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = (**(code **)(*param_1 + 0x600))();
  if (cVar1 != '\0') {
    lVar2 = param_1[0x103];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(param_1[0x3d] + 0x30))(param_1 + 0x3d);
    }
    if (*(float *)(lVar2 + 0x98) < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
    }
    local_40 = 0;
    local_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    local_58 = param_2[4];
    uStack_54 = param_2[5];
    uStack_50 = param_2[6];
    uStack_4c = param_2[7];
    local_48 = *(longlong *)(param_2 + 8);
    if (DAT_14c950c29 == '\x01') {
      if (local_48 == 0) {
        local_48 = 0;
      }
      else {
        FUN_1456cec3c();
        local_48 = *(longlong *)(param_2 + 8);
      }
    }
    FUN_140836610(param_1 + 0x3e1);
    FUN_14571cbb6(param_1 + 0x3e1);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dd25a6 FUN_143dd25a6 body=279 status=ok
// SIG undefined FUN_143dd25a6(void)

void FUN_143dd25a6(longlong param_1,char *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  longlong *plVar8;
  
  pcVar6 = param_2 + 0x270;
  if (*param_2 == '\0') {
    pcVar6 = param_2 + 0x110;
  }
  pcVar7 = pcVar6 + 8;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x3c +
                (longlong)*(int *)(param_1 + 0x18) * 0x40) & 1) != 0) {
    pcVar7 = pcVar6 + 0x78;
  }
  *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pcVar7 + 0x28);
  uVar5 = *(undefined8 *)(pcVar7 + 0x20);
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(pcVar7 + 0x18);
  *(undefined8 *)(param_3 + 0x10) = uVar5;
  if (((((*(int *)(pcVar7 + 100) == 0) || (uVar3 = *(uint *)(pcVar7 + 0x60), (int)uVar3 < 0)) ||
       (DAT_14c9647dc <= (int)uVar3)) ||
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(pcVar7 + 100))))) ||
     ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) {
    *(undefined8 *)(param_3 + 0x20) = 0;
    return;
  }
  lVar4 = *plVar8;
  if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_3 + 0x20) = lVar4;
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(lVar4);
    *(longlong *)(param_3 + 0x20) = lVar4;
  }
  if (*(char *)(lVar4 + 0x1fb) != '\x02') {
    return;
  }
  dVar1 = *(double *)(lVar4 + 0x268);
  dVar2 = *(double *)(lVar4 + 0x270);
  *(double *)(param_3 + 8) = *(double *)(param_3 + 8) - *(double *)(lVar4 + 0x260);
  *(double *)(param_3 + 0x10) = *(double *)(param_3 + 0x10) - dVar1;
  *(double *)(param_3 + 0x18) = *(double *)(param_3 + 0x18) - dVar2;
  return;
}



// FUNCTION 143dd270e FUN_143dd270e body=41 status=ok
// SIG undefined FUN_143dd270e(void)

void FUN_143dd270e(void)

{
  DAT_14cb856b8 = 0;
  if (DAT_14cb856b0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d670d6();
  return;
}



// FUNCTION 143dd273c FUN_143dd273c body=781 status=ok
// SIG undefined FUN_143dd273c(void)

void FUN_143dd273c(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  
  lVar20 = *(longlong *)(param_1 + 0x80);
  iVar2 = *(int *)(param_1 + 0x88);
  lVar17 = (longlong)iVar2;
  if (lVar17 != 0) {
    lVar18 = lVar17 * 0x90;
    lVar19 = lVar20;
    do {
      cVar16 = FUN_143dd2a4a(lVar19,param_2);
      if (cVar16 != '\0') {
        if (lVar19 != 0) {
          lVar18 = 0;
          do {
            cVar16 = FUN_143dd2a4a(param_2,(undefined4 *)(lVar20 + lVar18));
            if (cVar16 != '\0') {
              uVar4 = param_2[1];
              uVar5 = param_2[2];
              uVar6 = param_2[3];
              puVar1 = (undefined4 *)(lVar20 + lVar18);
              *puVar1 = *param_2;
              puVar1[1] = uVar4;
              puVar1[2] = uVar5;
              puVar1[3] = uVar6;
              if ((undefined4 *)(lVar20 + lVar18) == param_2) {
                uVar11 = *(undefined8 *)(param_2 + 8);
                uVar12 = *(undefined8 *)(param_2 + 10);
                uVar13 = *(undefined8 *)(param_2 + 0xc);
                uVar14 = *(undefined8 *)(param_2 + 0xe);
                uVar15 = *(undefined8 *)(param_2 + 0x12);
                puVar21 = (undefined8 *)(lVar20 + 0x40 + lVar18);
                *puVar21 = *(undefined8 *)(param_2 + 0x10);
                puVar21[1] = uVar15;
                puVar21 = (undefined8 *)(lVar20 + 0x30 + lVar18);
                *puVar21 = uVar13;
                puVar21[1] = uVar14;
                puVar21 = (undefined8 *)(lVar20 + 0x20 + lVar18);
                *puVar21 = uVar11;
                puVar21[1] = uVar12;
                *(undefined8 *)(lVar20 + 0x50 + lVar18) = *(undefined8 *)(param_2 + 0x14);
                uVar11 = *(undefined8 *)(param_2 + 0x18);
                puVar21 = (undefined8 *)(lVar20 + 0x58 + lVar18);
                *puVar21 = *(undefined8 *)(param_2 + 0x16);
                puVar21[1] = uVar11;
              }
              else {
                iVar2 = param_2[6];
                pvVar3 = *(void **)(param_2 + 4);
                *(int *)(lVar20 + 0x18 + lVar18) = iVar2;
                if (iVar2 == 0 && *(int *)(lVar20 + 0x1c + lVar18) == 0) {
                  *(undefined4 *)(lVar20 + 0x1c + lVar18) = 0;
                }
                else {
                  puVar21 = (undefined8 *)(lVar20 + lVar18 + 0x10);
                  FUN_1446dd670(puVar21,iVar2);
                  if (iVar2 != 0) {
                    memcpy((void *)*puVar21,pvVar3,(longlong)iVar2 * 2);
                  }
                }
                uVar11 = *(undefined8 *)(param_2 + 8);
                uVar12 = *(undefined8 *)(param_2 + 10);
                uVar4 = param_2[0xc];
                uVar5 = param_2[0xd];
                uVar6 = param_2[0xe];
                uVar7 = param_2[0xf];
                uVar8 = param_2[0x11];
                uVar9 = param_2[0x12];
                uVar10 = param_2[0x13];
                puVar1 = (undefined4 *)(lVar20 + 0x40 + lVar18);
                *puVar1 = param_2[0x10];
                puVar1[1] = uVar8;
                puVar1[2] = uVar9;
                puVar1[3] = uVar10;
                puVar1 = (undefined4 *)(lVar20 + 0x30 + lVar18);
                *puVar1 = uVar4;
                puVar1[1] = uVar5;
                puVar1[2] = uVar6;
                puVar1[3] = uVar7;
                puVar21 = (undefined8 *)(lVar20 + 0x20 + lVar18);
                *puVar21 = uVar11;
                puVar21[1] = uVar12;
                *(undefined8 *)(lVar20 + 0x50 + lVar18) = *(undefined8 *)(param_2 + 0x14);
                uVar4 = param_2[0x17];
                uVar5 = param_2[0x18];
                uVar6 = param_2[0x19];
                puVar1 = (undefined4 *)(lVar20 + 0x58 + lVar18);
                *puVar1 = param_2[0x16];
                puVar1[1] = uVar4;
                puVar1[2] = uVar5;
                puVar1[3] = uVar6;
                iVar2 = param_2[0x1c];
                pvVar3 = *(void **)(param_2 + 0x1a);
                *(int *)(lVar20 + 0x70 + lVar18) = iVar2;
                if (iVar2 == 0 && *(int *)(lVar20 + 0x74 + lVar18) == 0) {
                  *(undefined4 *)(lVar20 + 0x74 + lVar18) = 0;
                }
                else {
                  puVar21 = (undefined8 *)(lVar20 + lVar18 + 0x68);
                  FUN_1446dd670(puVar21,iVar2);
                  if (iVar2 != 0) {
                    memcpy((void *)*puVar21,pvVar3,(longlong)iVar2 * 2);
                  }
                }
              }
              FUN_1406fa324(lVar20 + lVar18 + 0x78,param_2 + 0x1e);
              return;
            }
            lVar18 = lVar18 + 0x90;
          } while (lVar17 * 0x90 != lVar18);
          return;
        }
        break;
      }
      lVar19 = lVar19 + 0x90;
      lVar18 = lVar18 + -0x90;
    } while (lVar18 != 0);
  }
  *(uint *)(param_1 + 0x88) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar2 + 1U) {
    FUN_14189bea2((longlong *)(param_1 + 0x80),iVar2);
    lVar20 = *(longlong *)(param_1 + 0x80);
  }
  lVar17 = lVar17 * 0x90;
  lVar18 = lVar20 + lVar17;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  puVar1 = (undefined4 *)(lVar20 + lVar17);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined8 *)(lVar20 + 0x10 + lVar17) = 0;
  iVar2 = param_2[6];
  pvVar3 = *(void **)(param_2 + 4);
  *(int *)(lVar20 + 0x18 + lVar17) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(lVar18 + 0x1c) = 0;
  }
  else {
    puVar21 = (undefined8 *)(lVar20 + lVar17 + 0x10);
    FUN_1446dd670(puVar21,iVar2,0);
    memcpy((void *)*puVar21,pvVar3,(longlong)iVar2 * 2);
  }
  uVar11 = *(undefined8 *)(param_2 + 8);
  uVar12 = *(undefined8 *)(param_2 + 10);
  uVar4 = param_2[0xc];
  uVar5 = param_2[0xd];
  uVar6 = param_2[0xe];
  uVar7 = param_2[0xf];
  uVar8 = param_2[0x11];
  uVar9 = param_2[0x12];
  uVar10 = param_2[0x13];
  *(undefined4 *)(lVar18 + 0x40) = param_2[0x10];
  *(undefined4 *)(lVar18 + 0x44) = uVar8;
  *(undefined4 *)(lVar18 + 0x48) = uVar9;
  *(undefined4 *)(lVar18 + 0x4c) = uVar10;
  *(undefined4 *)(lVar18 + 0x30) = uVar4;
  *(undefined4 *)(lVar18 + 0x34) = uVar5;
  *(undefined4 *)(lVar18 + 0x38) = uVar6;
  *(undefined4 *)(lVar18 + 0x3c) = uVar7;
  *(undefined8 *)(lVar18 + 0x20) = uVar11;
  *(undefined8 *)(lVar18 + 0x28) = uVar12;
  *(undefined8 *)(lVar18 + 0x50) = *(undefined8 *)(param_2 + 0x14);
  uVar4 = param_2[0x17];
  uVar5 = param_2[0x18];
  uVar6 = param_2[0x19];
  *(undefined4 *)(lVar18 + 0x58) = param_2[0x16];
  *(undefined4 *)(lVar18 + 0x5c) = uVar4;
  *(undefined4 *)(lVar18 + 0x60) = uVar5;
  *(undefined4 *)(lVar18 + 100) = uVar6;
  *(undefined8 *)(lVar18 + 0x68) = 0;
  iVar2 = param_2[0x1c];
  pvVar3 = *(void **)(param_2 + 0x1a);
  *(int *)(lVar18 + 0x70) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(lVar18 + 0x74) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(lVar18 + 0x68),iVar2,0);
    memcpy(*(void **)(lVar18 + 0x68),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(lVar18 + 0x78) = 0;
  iVar2 = param_2[0x20];
  pvVar3 = *(void **)(param_2 + 0x1e);
  *(int *)(lVar18 + 0x80) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(lVar18 + 0x84) = 0;
    return;
  }
  FUN_1401b309e((undefined8 *)(lVar18 + 0x78),iVar2,0);
  memcpy(*(void **)(lVar18 + 0x78),pvVar3,(longlong)iVar2 << 3);
  return;
}



// FUNCTION 143dd2a4a FUN_143dd2a4a body=92 status=ok
// SIG undefined FUN_143dd2a4a(void)

undefined8 FUN_143dd2a4a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((*param_1 == *param_2) && ((char)param_1[4] == (char)param_2[4])) {
    iVar2 = (int)param_1[0x10];
    if (iVar2 == (int)param_2[0x10]) {
      uVar3 = CONCAT71((int7)((ulonglong)*param_1 >> 8),1);
      if (iVar2 == 0) {
        return uVar3;
      }
      plVar4 = (longlong *)param_1[0xf];
      plVar1 = plVar4 + iVar2;
      do {
        lVar5 = 0;
        while (*(longlong *)(param_2[0xf] + lVar5) != *plVar4) {
          lVar5 = lVar5 + 8;
          if ((longlong)iVar2 * 8 == lVar5) {
            return 0;
          }
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 143dd2aa6 FUN_143dd2aa6 body=1896 status=ok
// SIG undefined FUN_143dd2aa6(void)

void FUN_143dd2aa6(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined8 unaff_R14;
  bool bVar19;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined1 *local_140;
  byte local_12e;
  byte local_12d;
  int local_12c;
  undefined8 *local_128;
  int local_11c;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  undefined1 local_e9;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined8 *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar5 = FUN_1459477ea(param_1 + 0x58);
  if (lVar5 == 0) {
    if (((*(longlong *)(param_1 + 0x60) != 0) && (DAT_14cb0d2b0 != 0)) &&
       (*(longlong *)(DAT_14cb0d2b0 + 0x360) != 0)) {
      lVar6 = FUN_14050fd64();
      local_d8 = (undefined8 *)0x0;
      iStack_d0 = 0;
      FUN_1446efa72(&local_d8,0,2,0x10);
      iStack_d0 = 2;
      *local_d8 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_d8[2] = lVar8;
      *local_d8 = &PTR_FUN_14b4166c0;
      local_d8[3] = param_1;
      local_140 = &local_e9;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      FUN_140a1e0be(lVar6 + 0x1e8,local_e8,param_1 + 0x60,&local_d8);
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar18 = local_e0 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_e0 + 0x10))(local_e0);
          }
        }
      }
      if (iStack_d0 != 0) {
        if (local_d8 == (undefined8 *)0x0) goto LAB_143dd2c43;
        (**(code **)*local_d8)(local_d8,0);
        FUN_1446efa72(&local_d8,0,0,0x10);
        iStack_d0 = 0;
      }
      if (local_d8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    lVar5 = FUN_1459477ea(param_1 + 0x58);
    if (lVar5 != 0) {
      iVar3 = *(int *)(param_1 + 0x88);
      lVar6 = (longlong)iVar3;
      if (lVar6 != 0) {
        local_128 = *(undefined8 **)(param_1 + 0x80);
        local_d8 = (undefined8 *)*local_128;
        iStack_d0 = *(int *)(local_128 + 1);
        uStack_cc = *(undefined4 *)((longlong)local_128 + 0xc);
        local_c8 = (void *)0x0;
        local_c0 = *(int *)(local_128 + 3);
        lVar8 = (longlong)local_c0;
        pvVar4 = (void *)local_128[2];
        local_108 = param_1;
        if (lVar8 == 0) {
          local_bc = 0;
        }
        else {
          FUN_1446dd670(&local_c8,local_c0,0);
          memcpy(local_c8,pvVar4,lVar8 * 2);
        }
        local_b8 = local_128[4];
        uStack_b0 = local_128[5];
        local_a8 = *(undefined4 *)(local_128 + 6);
        uStack_a4 = *(undefined4 *)((longlong)local_128 + 0x34);
        uStack_a0 = *(undefined4 *)(local_128 + 7);
        uStack_9c = *(undefined4 *)((longlong)local_128 + 0x3c);
        local_98 = *(undefined4 *)(local_128 + 8);
        uStack_94 = *(undefined4 *)((longlong)local_128 + 0x44);
        uStack_90 = *(undefined4 *)(local_128 + 9);
        uStack_8c = *(undefined4 *)((longlong)local_128 + 0x4c);
        local_88 = local_128[10];
        local_80 = *(undefined4 *)(local_128 + 0xb);
        uStack_7c = *(undefined4 *)((longlong)local_128 + 0x5c);
        uStack_78 = *(undefined4 *)(local_128 + 0xc);
        uStack_74 = *(undefined4 *)((longlong)local_128 + 100);
        local_70 = (void *)0x0;
        local_68 = *(int *)(local_128 + 0xe);
        lVar8 = (longlong)local_68;
        pvVar4 = (void *)local_128[0xd];
        if (lVar8 == 0) {
          local_64 = 0;
        }
        else {
          FUN_1446dd670(&local_70,local_68,0);
          memcpy(local_70,pvVar4,lVar8 * 2);
        }
        local_60 = (void *)0x0;
        local_58 = *(int *)(local_128 + 0x10);
        lVar8 = (longlong)local_58;
        pvVar4 = (void *)local_128[0xf];
        if (lVar8 == 0) {
          local_54 = 0;
        }
        else {
          FUN_1401b309e(&local_60,local_58,0);
          memcpy(local_60,pvVar4,lVar8 << 3);
        }
        uVar7 = (ulonglong)*(int *)(lVar5 + 0x38);
        if ((longlong)uVar7 < 1) {
          uVar15 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
        }
        else {
          uVar13 = 0;
          uVar15 = 0;
          do {
            if (((*(undefined8 **)(*(longlong *)(lVar5 + 0x30) + uVar13 * 0x90) == local_d8) &&
                (lVar8 = uVar13 * 0x90 + *(longlong *)(lVar5 + 0x30),
                *(char *)(lVar8 + 0x20) == (char)local_b8)) && (*(int *)(lVar8 + 0x80) == local_58))
            {
              if (local_58 != 0) {
                plVar9 = *(longlong **)(lVar8 + 0x78);
                plVar18 = plVar9 + local_58;
                do {
                  lVar8 = 0;
                  while (*(longlong *)((longlong)local_60 + lVar8) != *plVar9) {
                    lVar8 = lVar8 + 8;
                    if ((longlong)local_58 * 8 - lVar8 == 0) goto LAB_143dd2e7b;
                  }
                  plVar9 = plVar9 + 1;
                } while (plVar9 != plVar18);
              }
              break;
            }
LAB_143dd2e7b:
            uVar13 = uVar13 + 1;
            uVar15 = (ulonglong)(uVar7 <= uVar13);
          } while (uVar13 != uVar7);
        }
        local_110 = lVar5;
        if (local_60 != (void *)0x0) {
          FUN_1400020a8();
        }
        puVar10 = local_128;
        if (local_70 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_c8 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar7 = 0;
        iVar16 = 0;
        lVar5 = local_110;
        local_100 = uVar15;
        do {
          local_12e = (byte)local_100;
          local_100 = local_100 ^ 1;
          lVar8 = (longlong)iVar16;
          local_11c = iVar16 + 1;
          if (iVar16 + 1 < iVar3) {
            local_11c = iVar3;
          }
          local_12d = local_12e & 1;
          local_12c = iVar16;
          local_118 = lVar8;
          local_f8 = uVar7;
          do {
            lVar8 = lVar8 + 1;
            iVar16 = local_11c;
            if (lVar6 <= lVar8) goto LAB_143dd316e;
            lVar14 = lVar8 * 0x90;
            puVar2 = puVar10 + lVar8 * 0x12;
            local_d8 = (undefined8 *)*puVar2;
            iStack_d0 = *(int *)(puVar2 + 1);
            uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
            local_c8 = (void *)0x0;
            local_c0 = *(int *)(puVar10 + lVar8 * 0x12 + 3);
            lVar17 = (longlong)local_c0;
            pvVar4 = (void *)puVar10[lVar8 * 0x12 + 2];
            if (lVar17 == 0) {
              local_bc = 0;
            }
            else {
              FUN_1446dd670(&local_c8,local_c0,0);
              memcpy(local_c8,pvVar4,lVar17 * 2);
            }
            local_b8 = puVar10[lVar8 * 0x12 + 4];
            uStack_b0 = puVar10[lVar8 * 0x12 + 5];
            local_a8 = *(undefined4 *)(puVar10 + lVar8 * 0x12 + 6);
            uStack_a4 = *(undefined4 *)((longlong)puVar10 + lVar14 + 0x34);
            uStack_a0 = *(undefined4 *)(puVar10 + lVar8 * 0x12 + 7);
            uStack_9c = *(undefined4 *)((longlong)puVar10 + lVar14 + 0x3c);
            local_98 = *(undefined4 *)(puVar10 + lVar8 * 0x12 + 8);
            uStack_94 = *(undefined4 *)((longlong)puVar10 + lVar14 + 0x44);
            uStack_90 = *(undefined4 *)(puVar10 + lVar8 * 0x12 + 9);
            uStack_8c = *(undefined4 *)((longlong)puVar10 + lVar14 + 0x4c);
            local_88 = puVar10[lVar8 * 0x12 + 10];
            local_80 = *(undefined4 *)(puVar10 + lVar8 * 0x12 + 0xb);
            uStack_7c = *(undefined4 *)((longlong)puVar10 + lVar14 + 0x5c);
            uStack_78 = *(undefined4 *)(puVar10 + lVar8 * 0x12 + 0xc);
            uStack_74 = *(undefined4 *)((longlong)puVar10 + lVar14 + 100);
            local_70 = (void *)0x0;
            local_68 = *(int *)(puVar10 + lVar8 * 0x12 + 0xe);
            lVar14 = (longlong)local_68;
            pvVar4 = (void *)puVar10[lVar8 * 0x12 + 0xd];
            if (lVar14 == 0) {
              local_64 = 0;
            }
            else {
              FUN_1446dd670(&local_70,local_68,0);
              memcpy(local_70,pvVar4,lVar14 * 2);
            }
            local_60 = (void *)0x0;
            local_58 = *(int *)(puVar10 + lVar8 * 0x12 + 0x10);
            lVar14 = (longlong)local_58;
            pvVar4 = (void *)puVar10[lVar8 * 0x12 + 0xf];
            if (lVar14 == 0) {
              local_54 = 0;
            }
            else {
              FUN_1401b309e(&local_60,local_58,0);
              memcpy(local_60,pvVar4,lVar14 << 3);
            }
            uVar7 = (ulonglong)*(int *)(lVar5 + 0x38);
            if ((longlong)uVar7 < 1) {
              bVar19 = true;
            }
            else {
              uVar15 = 0;
              bVar19 = false;
              do {
                if (((*(undefined8 **)(*(longlong *)(lVar5 + 0x30) + uVar15 * 0x90) == local_d8) &&
                    (lVar14 = uVar15 * 0x90 + *(longlong *)(lVar5 + 0x30),
                    *(char *)(lVar14 + 0x20) == (char)local_b8)) &&
                   (*(int *)(lVar14 + 0x80) == local_58)) {
                  if (local_58 != 0) {
                    plVar18 = *(longlong **)(lVar14 + 0x78);
                    plVar9 = plVar18 + local_58;
                    do {
                      lVar14 = 0;
                      while (*(longlong *)((longlong)local_60 + lVar14) != *plVar18) {
                        lVar14 = lVar14 + 8;
                        if ((longlong)local_58 * 8 - lVar14 == 0) goto LAB_143dd30fa;
                      }
                      plVar18 = plVar18 + 1;
                    } while (plVar18 != plVar9);
                  }
                  break;
                }
LAB_143dd30fa:
                uVar15 = uVar15 + 1;
                bVar19 = uVar7 <= uVar15;
              } while (uVar15 != uVar7);
            }
            if (local_60 != (void *)0x0) {
              FUN_1400020a8();
            }
            uVar7 = local_f8;
            puVar10 = local_128;
            if (local_70 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_c8 != (void *)0x0) {
              FUN_1400020a8();
            }
            lVar5 = local_110;
          } while ((bool)local_12d == bVar19);
          iVar16 = (int)lVar8;
LAB_143dd316e:
          iVar11 = iVar16 - local_12c;
          if ((local_12e & 1) == 0) {
            iVar12 = (int)uVar7;
            if (iVar12 != local_12c) {
              memmove(puVar10 + (longlong)iVar12 * 0x12,puVar10 + local_118 * 0x12,
                      (longlong)iVar11 * 0x90);
            }
            uVar7 = (ulonglong)(uint)(iVar12 + iVar11);
          }
          else {
            FUN_140af8ca7(puVar10 + local_118 * 0x12,iVar11);
          }
        } while (lVar8 < lVar6);
        *(int *)(local_108 + 0x88) = (int)uVar7;
      }
    }
  }
LAB_143dd2c43:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dd320f FUN_143dd320f body=526 status=ok
// SIG undefined FUN_143dd320f(void)

void FUN_143dd320f(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  ulonglong *local_c8;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((((param_2 != 0 && param_1 != (longlong *)0x0) && (*(int *)(param_2 + 0x88) != 0)) &&
      (lVar1 = (**(code **)(*param_1 + 0x5d8))(param_1,0,0,0), lVar1 != 0)) &&
     ((longlong)*(int *)(param_2 + 0x88) != 0)) {
    lVar5 = *(longlong *)(param_2 + 0x80) + 0x50;
    lVar7 = (longlong)*(int *)(param_2 + 0x88) * 0x90;
    do {
      switch(*(undefined1 *)(lVar5 + -0x30)) {
      case 1:
        lVar2 = 0x30;
        lVar3 = 0x2c;
        lVar4 = 0x28;
        lVar6 = 0x24;
        goto LAB_143dd3300;
      case 2:
        local_60 = *(undefined8 *)(lVar5 + -0x50);
        local_58 = CONCAT31(local_58._1_3_,2);
        local_54 = 0xffffffff;
        local_b8 = local_b8 & 0xffffffffffffff00;
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c8 = &local_b8;
        FUN_140042bb4(lVar1,&local_60,*(undefined4 *)(lVar5 + -0x1c),0);
        break;
      case 3:
        lVar2 = 0x4c;
        lVar3 = 0x48;
        lVar4 = 0x44;
        lVar6 = 0x40;
LAB_143dd3300:
        local_58 = *(undefined4 *)(lVar5 + -0x50 + lVar3);
        local_54 = *(undefined4 *)(lVar5 + -0x50 + lVar2);
        local_b8 = *(ulonglong *)(lVar5 + -0x50);
        local_b0 = CONCAT71(local_b0._1_7_,2);
        local_b0 = CONCAT44(0xffffffff,(undefined4)local_b0);
        local_60 = CONCAT44(*(undefined4 *)(lVar5 + -0x50 + lVar4),
                            *(undefined4 *)(lVar5 + -0x50 + lVar6));
        FUN_14016d7a8(lVar1,&local_b8,&local_60);
        break;
      case 4:
        lVar2 = FUN_140832a06(lVar5);
        if (lVar2 != 0) {
          FUN_14016d8b0(lVar1,*(undefined8 *)(lVar5 + -0x50),lVar2);
        }
      }
      lVar5 = lVar5 + 0x90;
      lVar7 = lVar7 + -0x90;
    } while (lVar7 != 0);
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dd341e FUN_143dd341e body=41 status=ok
// SIG undefined FUN_143dd341e(void)

void FUN_143dd341e(void)

{
  DAT_14cb857c0 = 0;
  if (DAT_14cb857b8 != 0) {
    FUN_1400020a8();
  }
  FUN_146175e36();
  return;
}



// FUNCTION 143dd34d4 FUN_143dd34d4 body=6127 status=ok
// SIG undefined FUN_143dd34d4(void)

ulonglong FUN_143dd34d4(longlong *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined7 uVar19;
  ulonglong uVar20;
  longlong lVar21;
  bool bVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_3b8 [32];
  undefined8 *local_398;
  undefined1 local_390;
  undefined8 *local_380;
  int local_378;
  undefined2 local_370 [2];
  undefined4 local_36c;
  undefined8 *local_368;
  int local_360;
  undefined4 uStack_35c;
  char local_34f;
  float local_34c;
  float local_348;
  float local_344;
  float local_338;
  byte local_328;
  longlong local_320;
  char local_297;
  float local_294;
  float local_290;
  float local_28c;
  float local_280;
  longlong local_268;
  char local_1df;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1c8;
  longlong local_1b0;
  float local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  int local_e0;
  byte local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (*(int *)((longlong)param_1 + 0xc) == 0) goto LAB_143dd356c;
  uVar23 = *(uint *)(param_1 + 1);
  uVar17 = 0;
  if (((int)uVar23 < 0) || (DAT_14c9647dc <= (int)uVar23)) goto LAB_143dd356e;
  plVar8 = (longlong *)
           ((ulonglong)((uVar23 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
  if ((plVar8 == (longlong *)0x0) ||
     (((((int)plVar8[2] != *(int *)((longlong)param_1 + 0xc) ||
        ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) || (param_1[3] == 0)) ||
      (*(int *)((longlong)param_1 + 0x14) == 0)))) goto LAB_143dd356c;
  uVar23 = *(uint *)(param_1 + 2);
  uVar17 = 0;
  if (((int)uVar23 < 0) || (uVar17 = 0, DAT_14c9647dc <= (int)uVar23)) goto LAB_143dd356e;
  lVar14 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
  if ((lVar14 != 0) &&
     (((*(int *)(lVar14 + 0x10) == *(int *)((longlong)param_1 + 0x14) &&
       ((*(uint *)(lVar14 + 8) & 0x10200000) == 0)) && ((param_1[4] != 0 && ((int)param_1[5] == 0)))
      ))) {
    if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
      lVar14 = *plVar8;
    }
    else {
      lVar14 = 0;
    }
    if (*(char *)(lVar14 + 0x178) == '\x03') {
      (**(code **)(*param_1 + 0x58))(param_1,&local_368);
      *(undefined8 **)((longlong)param_1 + 0x10c) = local_368;
      puVar15 = &DAT_14c9485f0;
      if (*(undefined4 **)(param_1[4] + 8) != (undefined4 *)0x0) {
        puVar15 = *(undefined4 **)(param_1[4] + 8);
      }
      FUN_1447715ec(param_1 + 0x23,puVar15);
      *(int *)(param_1 + 0x21) = (int)param_1[0x21] + 1;
      if (((((longlong *)param_1[3] != (longlong *)0x0) && (*(int *)((longlong)param_1 + 0x14) != 0)
           ) && (uVar23 = *(uint *)(param_1 + 2), -1 < (int)uVar23)) &&
         ((((int)uVar23 < DAT_14c9647dc &&
           (lVar14 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8), lVar14 != 0))
          && ((*(int *)(lVar14 + 0x10) == *(int *)((longlong)param_1 + 0x14) &&
              ((*(uint *)(lVar14 + 8) & 0x10200000) == 0)))))) {
        (**(code **)(*(longlong *)param_1[3] + 0x20))();
      }
    }
    cVar4 = FUN_143dd508a(param_1,1);
    if (cVar4 != '\0') {
      if (*(int *)((longlong)param_1 + 0xc) == 0) {
LAB_143dd4978:
        uVar9 = 0;
      }
      else {
        uVar23 = *(uint *)(param_1 + 1);
        uVar9 = 0;
        if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c9647dc)) {
          puVar13 = (undefined8 *)
                    ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
          if ((puVar13 == (undefined8 *)0x0) ||
             ((*(int *)(puVar13 + 2) != *(int *)((longlong)param_1 + 0xc) ||
              ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_143dd4978;
          uVar9 = *puVar13;
        }
      }
      uVar9 = FUN_1401b4c98(uVar9);
      uVar23 = 0;
      *(undefined1 *)((longlong)param_1 + 0x79) = 0;
      *(undefined1 *)(param_1 + 0x16) = 0;
      *(undefined1 *)(param_1 + 9) = 0;
      (**(code **)(*param_1 + 8))(param_1);
      lVar14 = param_1[4];
      if (*(char *)(lVar14 + 0x174) == '\x01') {
        *(float *)((longlong)param_1 + 0x2c) =
             *(float *)(lVar14 + 0x17c) - *(float *)(lVar14 + 0x178);
        if ((((*(int *)((longlong)param_1 + 0xc) == 0) ||
             (uVar18 = *(uint *)(param_1 + 1), (int)uVar18 < 0)) || (DAT_14c9647dc <= (int)uVar18))
           || (((plVar8 = (longlong *)
                          ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
                plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)((longlong)param_1 + 0xc)))
               || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) {
          uVar17 = 0;
        }
        else {
          uVar17 = 0;
          uVar23 = 0;
          if (*plVar8 != 0) {
            uVar23 = *(uint *)(*plVar8 + 0xc);
            if ((int)uVar23 < DAT_14c9647dc) {
              lVar21 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
            }
            else {
              lVar21 = 0;
            }
            uVar17 = (ulonglong)*(uint *)(lVar21 + 0x10);
            if (*(uint *)(lVar21 + 0x10) == 0) {
              LOCK();
              iVar6 = DAT_14c964868 + 1;
              UNLOCK();
              uVar18 = DAT_14c964868 + 1;
              bVar22 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar6;
              if (bVar22) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar18);
              }
              LOCK();
              uVar7 = *(uint *)(lVar21 + 0x10);
              bVar22 = uVar7 == 0;
              if (bVar22) {
                *(uint *)(lVar21 + 0x10) = uVar18;
                uVar7 = 0;
              }
              UNLOCK();
              if (bVar22) {
                uVar7 = uVar18;
              }
              uVar17 = (ulonglong)uVar7;
            }
          }
        }
        if ((*(float *)(lVar14 + 0x17c) < *(float *)(lVar14 + 0x178)) ||
           (*(float *)(lVar14 + 0x180) < *(float *)(lVar14 + 0x17c))) {
          FUN_140844034(param_1);
        }
        else {
          if (*(float *)(lVar14 + 0x178) <= 1e-08) {
            uVar2 = *(undefined1 *)((longlong)param_1 + 0xcc);
            *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
            (**(code **)(*param_1 + 0x10))(param_1);
            *(undefined1 *)((longlong)param_1 + 0xcc) = uVar2;
          }
          else {
            local_e8 = (undefined8 *)0x0;
            local_e0 = 0;
            FUN_1446efa72(&local_e8,0,3,0x10);
            local_e0 = 3;
            *local_e8 = &PTR_LAB_14a1c8830;
            LOCK();
            UNLOCK();
            lVar16 = DAT_14c758608 + 1;
            lVar21 = DAT_14c758608 + 1;
            if (lVar16 == 0) {
              LOCK();
              UNLOCK();
              lVar16 = DAT_14c758608 + 2;
              lVar21 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar21;
            local_e8[2] = lVar16;
            *local_e8 = &PTR_FUN_14b416a40;
            local_e8[3] = param_1;
            local_e8[4] = (ulonglong)uVar23 | uVar17 << 0x20;
            uVar5 = *(undefined4 *)(lVar14 + 0x178);
            local_368 = (undefined8 *)0x0;
            local_360 = 0;
            FUN_14487d8d8(&local_368,&local_e8);
            local_328 = 1;
            local_398 = &local_138;
            local_138._0_4_ = (uint)local_138 & 0xffff0000;
            local_138 = CONCAT44(0xbf800000,(uint)local_138);
            FUN_1406f4044(uVar9,param_1 + 0x1a,&local_368,uVar5);
            (*(code *)(&PTR_LAB_14a1c87a0)[local_328])(&local_368);
            if (local_e0 != 0) {
              if (local_e8 == (undefined8 *)0x0) goto LAB_143dd39d2;
              (**(code **)*local_e8)(local_e8,0);
              FUN_1446efa72(&local_e8,0,0,0x10);
              local_e0 = 0;
            }
            if (local_e8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
LAB_143dd39d2:
          if (*(float *)(lVar14 + 0x17c) <= 1e-08) {
            uVar2 = *(undefined1 *)((longlong)param_1 + 0xcc);
            *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
            (**(code **)(*param_1 + 0x18))(param_1);
            *(undefined1 *)((longlong)param_1 + 0xcc) = uVar2;
          }
          else {
            local_e8 = (undefined8 *)0x0;
            local_e0 = 0;
            FUN_1446efa72(&local_e8,0,3,0x10);
            local_e0 = 3;
            *local_e8 = &PTR_LAB_14a1c8830;
            LOCK();
            UNLOCK();
            lVar16 = DAT_14c758608 + 1;
            lVar21 = DAT_14c758608 + 1;
            if (lVar16 == 0) {
              LOCK();
              UNLOCK();
              lVar16 = DAT_14c758608 + 2;
              lVar21 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar21;
            local_e8[2] = lVar16;
            *local_e8 = &PTR_FUN_14b416ab0;
            local_e8[3] = param_1;
            local_e8[4] = (ulonglong)uVar23 | uVar17 << 0x20;
            uVar5 = *(undefined4 *)(lVar14 + 0x17c);
            local_368 = (undefined8 *)0x0;
            local_360 = 0;
            FUN_14487d8d8(&local_368,&local_e8);
            local_328 = 1;
            local_398 = &local_138;
            local_138._0_4_ = (uint)local_138 & 0xffff0000;
            local_138 = CONCAT44(0xbf800000,(uint)local_138);
            FUN_1406f4044(uVar9,param_1 + 0x1b,&local_368,uVar5);
            (*(code *)(&PTR_LAB_14a1c87a0)[local_328])(&local_368);
            if (local_e0 != 0) {
              if (local_e8 == (undefined8 *)0x0) goto LAB_143dd3b52;
              (**(code **)*local_e8)(local_e8,0);
              FUN_1446efa72(&local_e8,0,0,0x10);
              local_e0 = 0;
            }
            if (local_e8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
LAB_143dd3b52:
          if (*(float *)(lVar14 + 0x180) <= 1e-08) {
            uVar2 = *(undefined1 *)((longlong)param_1 + 0xcc);
            *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
            (**(code **)(*param_1 + 0x20))(param_1);
            *(undefined1 *)((longlong)param_1 + 0xcc) = uVar2;
            uVar17 = (ulonglong)uVar23 | uVar17 << 0x20;
          }
          else {
            local_e8 = (undefined8 *)0x0;
            local_e0 = 0;
            uVar17 = (ulonglong)uVar23 | uVar17 << 0x20;
            FUN_1446efa72(&local_e8,0,3,0x10);
            local_e0 = 3;
            *local_e8 = &PTR_LAB_14a1c8830;
            LOCK();
            UNLOCK();
            lVar16 = DAT_14c758608 + 1;
            lVar21 = DAT_14c758608 + 1;
            if (lVar16 == 0) {
              LOCK();
              UNLOCK();
              lVar16 = DAT_14c758608 + 2;
              lVar21 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar21;
            local_e8[2] = lVar16;
            *local_e8 = &PTR_FUN_14b416b20;
            local_e8[3] = param_1;
            local_e8[4] = uVar17;
            uVar5 = *(undefined4 *)(lVar14 + 0x180);
            local_368 = (undefined8 *)0x0;
            local_360 = 0;
            FUN_14487d8d8(&local_368,&local_e8);
            local_328 = 1;
            local_398 = &local_138;
            local_138._0_4_ = (uint)local_138 & 0xffff0000;
            local_138 = CONCAT44(0xbf800000,(uint)local_138);
            FUN_1406f4044(uVar9,param_1 + 0x1c,&local_368,uVar5);
            (*(code *)(&PTR_LAB_14a1c87a0)[local_328])(&local_368);
            if (local_e0 != 0) {
              if (local_e8 == (undefined8 *)0x0) goto LAB_143dd3cd7;
              (**(code **)*local_e8)(local_e8,0);
              FUN_1446efa72(&local_e8,0,0,0x10);
              local_e0 = 0;
            }
            if (local_e8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
LAB_143dd3cd7:
          local_e8 = (undefined8 *)0x0;
          local_e0 = 0;
          FUN_1446efa72(&local_e8,0,3,0x10);
          local_e0 = 3;
          *local_e8 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar16 = DAT_14c758608 + 1;
          lVar21 = DAT_14c758608 + 1;
          if (lVar16 == 0) {
            LOCK();
            UNLOCK();
            lVar16 = DAT_14c758608 + 2;
            lVar21 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar21;
          local_e8[2] = lVar16;
          *local_e8 = &PTR_FUN_14b416b90;
          local_e8[3] = param_1;
          local_e8[4] = uVar17;
          fVar24 = *(float *)(lVar14 + 0x180);
          local_368 = (undefined8 *)0x0;
          local_360 = 0;
          FUN_14487d8d8(&local_368,&local_e8);
          local_328 = 1;
          local_398 = &local_138;
          local_138._0_4_ = (uint)local_138 & 0xffff0000;
          local_138 = CONCAT44(0xbf800000,(uint)local_138);
          FUN_1406f4044(uVar9,param_1 + 0x1d,&local_368,fVar24 + 0.0001);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_328])(&local_368);
          if (local_e0 != 0) {
            if (local_e8 == (undefined8 *)0x0) goto LAB_143dd3e17;
            (**(code **)*local_e8)(local_e8,0);
            FUN_1446efa72(&local_e8,0,0,0x10);
            local_e0 = 0;
          }
          if (local_e8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
LAB_143dd3e17:
      uVar19 = (undefined7)((ulonglong)uVar9 >> 8);
      if ((((((*(int *)((longlong)param_1 + 0xc) != 0) &&
             (uVar23 = *(uint *)(param_1 + 1), -1 < (int)uVar23)) && ((int)uVar23 < DAT_14c9647dc))
           && ((plVar8 = (longlong *)
                         ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
               plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)((longlong)param_1 + 0xc)))))
          && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) &&
         (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)) {
        uVar10 = FUN_140e81900();
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar10);
        if (plVar8 != (longlong *)0x0) {
          uVar10 = FUN_140e81900();
          plVar11 = (longlong *)FUN_144718840(plVar8,uVar10);
          if (plVar11 != (longlong *)0x0 && plVar8 != plVar11) {
            uVar23 = -(uint)(0.0 < *(float *)(param_1 + 0x17));
            fVar24 = (float)(~uVar23 & 0x3f800000 | (uint)*(float *)(param_1 + 0x17) & uVar23);
            uVar10 = 0;
            local_118 = 0;
            local_110 = 0;
            local_138 = 0;
            uStack_130 = 0;
            local_10c = 0xffffffff00000080;
            local_104 = 0;
            local_f8 = 0;
            local_f0 = 0;
            FUN_140dd04a4(&local_138,fVar24);
            if (*(int *)((longlong)param_1 + 0xc) != 0) {
              uVar23 = *(uint *)(param_1 + 1);
              uVar10 = 0;
              if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c9647dc)) {
                puVar13 = (undefined8 *)
                          ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
                if ((puVar13 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar13 + 2) != *(int *)((longlong)param_1 + 0xc) ||
                    ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = *puVar13;
                }
              }
            }
            local_390 = 0;
            local_398 = &local_138;
            uVar5 = (**(code **)(*plVar11 + 0x20))
                              (plVar11,*(undefined8 *)
                                        (param_1[4] + 0x164 +
                                        (ulonglong)(*(byte *)(param_1 + 0xf) ^ 1) * 8),
                               *(undefined8 *)(param_1[4] + 0x15c),uVar10);
            *(char *)(param_1 + 0x20) = (char)uVar5;
            if (*(int *)((longlong)param_1 + 0xc) == 0) {
LAB_143dd4986:
              lVar14 = 0;
            }
            else {
              uVar23 = *(uint *)(param_1 + 1);
              lVar14 = 0;
              if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c9647dc)) {
                plVar8 = (longlong *)
                         ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
                if ((plVar8 == (longlong *)0x0) ||
                   (((int)plVar8[2] != *(int *)((longlong)param_1 + 0xc) ||
                    ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_143dd4986;
                lVar14 = *plVar8;
              }
            }
            FUN_140dc01da(lVar14 + 0x1508,&local_368,uVar5);
            param_1[0x28] = (longlong)local_368;
            plVar11 = (longlong *)CONCAT44(uStack_35c,local_360);
            plVar8 = (longlong *)param_1[0x29];
            if (plVar8 != plVar11) {
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
                UNLOCK();
                plVar8 = (longlong *)param_1[0x29];
              }
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar8 + 0x10))();
                }
              }
              param_1[0x29] = (longlong)plVar11;
              plVar11 = (longlong *)CONCAT44(uStack_35c,local_360);
            }
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar11 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
            }
            plVar8 = (longlong *)param_1[0x29];
            if (plVar8 != (longlong *)0x0) {
              iVar6 = (int)plVar8[1];
              do {
                if (iVar6 == 0) goto LAB_143dd4263;
                LOCK();
                iVar3 = (int)plVar8[1];
                bVar22 = iVar6 == iVar3;
                if (bVar22) {
                  *(int *)(plVar8 + 1) = iVar6 + 1;
                  iVar3 = iVar6;
                }
                iVar6 = iVar3;
                UNLOCK();
              } while (!bVar22);
              lVar14 = param_1[0x28];
              if (lVar14 != 0) {
                uVar23 = 0;
                if ((((*(int *)((longlong)param_1 + 0xc) == 0) ||
                     (uVar18 = *(uint *)(param_1 + 1), (int)uVar18 < 0)) ||
                    (DAT_14c9647dc <= (int)uVar18)) ||
                   (((plVar11 = (longlong *)
                                ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
                     plVar11 == (longlong *)0x0 ||
                     ((int)plVar11[2] != *(int *)((longlong)param_1 + 0xc))) ||
                    ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = 0;
                  uVar23 = 0;
                  if (*plVar11 != 0) {
                    uVar23 = *(uint *)(*plVar11 + 0xc);
                    if ((int)uVar23 < DAT_14c9647dc) {
                      lVar21 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
                    }
                    else {
                      lVar21 = 0;
                    }
                    uVar17 = (ulonglong)*(uint *)(lVar21 + 0x10);
                    if (*(uint *)(lVar21 + 0x10) == 0) {
                      LOCK();
                      iVar6 = DAT_14c964868 + 1;
                      UNLOCK();
                      uVar18 = DAT_14c964868 + 1;
                      bVar22 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar6;
                      if (bVar22) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,uVar18);
                      }
                      LOCK();
                      uVar7 = *(uint *)(lVar21 + 0x10);
                      bVar22 = uVar7 == 0;
                      if (bVar22) {
                        *(uint *)(lVar21 + 0x10) = uVar18;
                        uVar7 = 0;
                      }
                      UNLOCK();
                      if (bVar22) {
                        uVar7 = uVar18;
                      }
                      uVar17 = (ulonglong)uVar7;
                    }
                  }
                }
                local_368 = (undefined8 *)0x0;
                local_360 = 0;
                FUN_1446efa72(&local_368,0,3,0x10);
                local_360 = 3;
                *local_368 = &PTR_LAB_14b3e9c20;
                LOCK();
                UNLOCK();
                lVar16 = DAT_14c758608 + 1;
                lVar21 = DAT_14c758608 + 1;
                if (lVar16 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar16 = DAT_14c758608 + 2;
                  lVar21 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar21;
                local_368[2] = lVar16;
                *local_368 = &PTR_FUN_14b416c00;
                local_368[3] = param_1;
                local_368[4] = (ulonglong)uVar23 | uVar17 << 0x20;
                FUN_140ebcfd8(lVar14 + 0x18,&local_e8,&local_368);
                if (local_360 == 0) {
LAB_143dd4229:
                  if (local_368 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else if (local_368 != (undefined8 *)0x0) {
                  (**(code **)*local_368)(local_368,0);
                  FUN_1446efa72(&local_368,0,0,0x10);
                  local_360 = 0;
                  goto LAB_143dd4229;
                }
                param_1[0x2a] = (longlong)local_e8;
              }
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
LAB_143dd4263:
            if (*(char *)(param_1[4] + 0x174) == '\0') {
              (**(code **)(*(longlong *)param_1[3] + 0x80))
                        ((longlong *)param_1[3],&local_368,param_1 + 0x20);
              if (local_320 == 0) {
                local_344 = 0.0;
              }
              else {
                if (local_34f == '\x02') {
                  local_344 = local_344 * local_348 + local_34c;
                }
                else if (local_34f == '\x01') {
                  local_344 = local_34c + local_344;
                }
                local_344 = local_344 + local_338;
              }
              fVar25 = local_140;
              if (local_1b0 != 0) {
                if (local_1df == '\x02') {
                  local_1d4 = local_1d4 * local_1d8 + local_1dc;
                }
                else if (local_1df == '\x01') {
                  local_1d4 = local_1dc + local_1d4;
                }
                fVar25 = local_1d4 + local_1c8;
              }
              if (local_268 == 0) {
                fVar26 = (local_344 / fVar24 + fVar25 / fVar24) * 0.5;
              }
              else {
                if (local_297 == '\x02') {
                  local_28c = local_28c * local_290 + local_294;
                }
                else if (local_297 == '\x01') {
                  local_28c = local_294 + local_28c;
                }
                fVar26 = (local_28c + local_280) / fVar24;
              }
              *(float *)((longlong)param_1 + 0x2c) = fVar26 - local_344 / fVar24;
              if (local_320 == 0) {
                (**(code **)(*param_1 + 0x10))(param_1);
              }
              if (local_268 == 0) {
                local_380 = (undefined8 *)0x0;
                local_378 = 0;
                uVar20 = 0;
                uVar17 = 0;
                if (*(int *)((longlong)param_1 + 0xc) == 0) {
LAB_143dd445d:
                  FUN_1446efa72(&local_380,0,3,0x10);
                  local_378 = 3;
                }
                else {
                  uVar23 = *(uint *)(param_1 + 1);
                  if ((((int)uVar23 < 0) || (DAT_14c9647dc <= (int)uVar23)) ||
                     ((plVar8 = (longlong *)
                                ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
                      plVar8 == (longlong *)0x0 ||
                      (((int)plVar8[2] != *(int *)((longlong)param_1 + 0xc) ||
                       ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))))) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = 0;
                    uVar17 = uVar20;
                    if (*plVar8 != 0) {
                      uVar23 = *(uint *)(*plVar8 + 0xc);
                      uVar17 = (ulonglong)uVar23;
                      if ((int)uVar23 < DAT_14c9647dc) {
                        lVar14 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
                      }
                      else {
                        lVar14 = 0;
                      }
                      uVar12 = (ulonglong)*(uint *)(lVar14 + 0x10);
                      if (*(uint *)(lVar14 + 0x10) == 0) {
                        LOCK();
                        iVar6 = DAT_14c964868 + 1;
                        UNLOCK();
                        uVar23 = DAT_14c964868 + 1;
                        bVar22 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar6;
                        if (bVar22) {
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,uVar23);
                        }
                        LOCK();
                        uVar18 = *(uint *)(lVar14 + 0x10);
                        bVar22 = uVar18 == 0;
                        if (bVar22) {
                          *(uint *)(lVar14 + 0x10) = uVar23;
                          uVar18 = 0;
                        }
                        UNLOCK();
                        if (bVar22) {
                          uVar18 = uVar23;
                        }
                        uVar12 = (ulonglong)uVar18;
                      }
                    }
                  }
                  uVar20 = uVar17 | uVar12 << 0x20;
                  if (local_378 != 3) goto LAB_143dd445d;
                }
                *local_380 = &PTR_LAB_14a1c8830;
                LOCK();
                UNLOCK();
                lVar21 = DAT_14c758608 + 1;
                lVar14 = DAT_14c758608 + 1;
                if (lVar21 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar21 = DAT_14c758608 + 2;
                  lVar14 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar14;
                local_380[2] = lVar21;
                *local_380 = &PTR_FUN_14b416c70;
                local_380[3] = param_1;
                local_380[4] = uVar20;
                local_e8 = (undefined8 *)0x0;
                local_e0 = 0;
                FUN_14487d8d8(&local_e8,&local_380);
                local_a8 = 1;
                local_398 = (undefined8 *)local_370;
                local_370[0] = 0;
                local_36c = 0xbf800000;
                FUN_1406f4044(uVar9,param_1 + 0x1b,&local_e8,fVar26);
                (*(code *)(&PTR_LAB_14a1c87a0)[local_a8])(&local_e8);
                if (local_378 != 0) {
                  if (local_380 == (undefined8 *)0x0) goto LAB_143dd4572;
                  (**(code **)*local_380)(local_380,0);
                  FUN_1446efa72(&local_380,0,0,0x10);
                  local_378 = 0;
                }
                if (local_380 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
              }
LAB_143dd4572:
              if (local_1b0 == 0) {
                local_380 = (undefined8 *)0x0;
                local_378 = 0;
                uVar20 = 0;
                uVar17 = 0;
                if (*(int *)((longlong)param_1 + 0xc) == 0) {
LAB_143dd4647:
                  FUN_1446efa72(&local_380,0,3,0x10);
                  local_378 = 3;
                }
                else {
                  uVar23 = *(uint *)(param_1 + 1);
                  if (((((int)uVar23 < 0) || (DAT_14c9647dc <= (int)uVar23)) ||
                      (plVar8 = (longlong *)
                                ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
                      plVar8 == (longlong *)0x0)) ||
                     (((int)plVar8[2] != *(int *)((longlong)param_1 + 0xc) ||
                      ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = 0;
                    uVar17 = uVar20;
                    if (*plVar8 != 0) {
                      uVar23 = *(uint *)(*plVar8 + 0xc);
                      uVar17 = (ulonglong)uVar23;
                      if ((int)uVar23 < DAT_14c9647dc) {
                        lVar14 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
                      }
                      else {
                        lVar14 = 0;
                      }
                      uVar12 = (ulonglong)*(uint *)(lVar14 + 0x10);
                      if (*(uint *)(lVar14 + 0x10) == 0) {
                        LOCK();
                        iVar6 = DAT_14c964868 + 1;
                        UNLOCK();
                        uVar23 = DAT_14c964868 + 1;
                        bVar22 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar6;
                        if (bVar22) {
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,uVar23);
                        }
                        LOCK();
                        uVar18 = *(uint *)(lVar14 + 0x10);
                        bVar22 = uVar18 == 0;
                        if (bVar22) {
                          *(uint *)(lVar14 + 0x10) = uVar23;
                          uVar18 = 0;
                        }
                        UNLOCK();
                        if (bVar22) {
                          uVar18 = uVar23;
                        }
                        uVar12 = (ulonglong)uVar18;
                      }
                    }
                  }
                  uVar20 = uVar17 | uVar12 << 0x20;
                  if (local_378 != 3) goto LAB_143dd4647;
                }
                *local_380 = &PTR_LAB_14a1c8830;
                LOCK();
                UNLOCK();
                lVar21 = DAT_14c758608 + 1;
                lVar14 = DAT_14c758608 + 1;
                if (lVar21 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar21 = DAT_14c758608 + 2;
                  lVar14 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar14;
                local_380[2] = lVar21;
                *local_380 = &PTR_FUN_14b416ce0;
                local_380[3] = param_1;
                local_380[4] = uVar20;
                local_e8 = (undefined8 *)0x0;
                local_e0 = 0;
                FUN_14487d8d8(&local_e8,&local_380);
                local_a8 = 1;
                local_398 = (undefined8 *)local_370;
                local_370[0] = 0;
                local_36c = 0xbf800000;
                FUN_1406f4044(uVar9,param_1 + 0x1c,&local_e8,fVar25 / fVar24);
                (*(code *)(&PTR_LAB_14a1c87a0)[local_a8])(&local_e8);
                if (local_378 != 0) {
                  if (local_380 == (undefined8 *)0x0) goto LAB_143dd475c;
                  (**(code **)*local_380)(local_380,0);
                  FUN_1446efa72(&local_380,0,0,0x10);
                  local_378 = 0;
                }
                if (local_380 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
              }
LAB_143dd475c:
              if (local_140 / fVar24 <= 0.0) {
                FUN_140844034(param_1);
              }
              else {
                local_380 = (undefined8 *)0x0;
                local_378 = 0;
                uVar20 = 0;
                uVar17 = 0;
                if (*(int *)((longlong)param_1 + 0xc) == 0) {
LAB_143dd482a:
                  FUN_1446efa72(&local_380,0,3,0x10);
                  local_378 = 3;
                }
                else {
                  uVar23 = *(uint *)(param_1 + 1);
                  if ((((int)uVar23 < 0) || (DAT_14c9647dc <= (int)uVar23)) ||
                     ((plVar8 = (longlong *)
                                ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
                      plVar8 == (longlong *)0x0 ||
                      (((int)plVar8[2] != *(int *)((longlong)param_1 + 0xc) ||
                       ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))))) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = 0;
                    uVar17 = uVar20;
                    if (*plVar8 != 0) {
                      uVar23 = *(uint *)(*plVar8 + 0xc);
                      uVar17 = (ulonglong)uVar23;
                      if ((int)uVar23 < DAT_14c9647dc) {
                        lVar14 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
                      }
                      else {
                        lVar14 = 0;
                      }
                      uVar12 = (ulonglong)*(uint *)(lVar14 + 0x10);
                      if (*(uint *)(lVar14 + 0x10) == 0) {
                        LOCK();
                        iVar6 = DAT_14c964868 + 1;
                        UNLOCK();
                        uVar23 = DAT_14c964868 + 1;
                        bVar22 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar6;
                        if (bVar22) {
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,uVar23);
                        }
                        LOCK();
                        uVar18 = *(uint *)(lVar14 + 0x10);
                        bVar22 = uVar18 == 0;
                        if (bVar22) {
                          *(uint *)(lVar14 + 0x10) = uVar23;
                          uVar18 = 0;
                        }
                        UNLOCK();
                        if (bVar22) {
                          uVar18 = uVar23;
                        }
                        uVar12 = (ulonglong)uVar18;
                      }
                    }
                  }
                  uVar20 = uVar17 | uVar12 << 0x20;
                  if (local_378 != 3) goto LAB_143dd482a;
                }
                *local_380 = &PTR_LAB_14a1c8830;
                LOCK();
                UNLOCK();
                lVar21 = DAT_14c758608 + 1;
                lVar14 = DAT_14c758608 + 1;
                if (lVar21 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar21 = DAT_14c758608 + 2;
                  lVar14 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar14;
                local_380[2] = lVar21;
                *local_380 = &PTR_FUN_14b416d50;
                local_380[3] = param_1;
                local_380[4] = uVar20;
                local_e8 = (undefined8 *)0x0;
                local_e0 = 0;
                FUN_14487d8d8(&local_e8,&local_380);
                local_a8 = 1;
                local_398 = (undefined8 *)local_370;
                local_370[0] = 0;
                local_36c = 0xbf800000;
                FUN_1406f4044(uVar9,param_1 + 0x1d,&local_e8,local_140 / fVar24);
                (*(code *)(&PTR_LAB_14a1c87a0)[local_a8])(&local_e8);
                if (local_378 != 0) {
                  if (local_380 == (undefined8 *)0x0) goto LAB_143dd4946;
                  (**(code **)*local_380)(local_380,0);
                  FUN_1446efa72(&local_380,0,0,0x10);
                  local_378 = 0;
                }
                if (local_380 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
LAB_143dd4946:
            local_f0 = 0;
            if (local_f8 != 0) {
              FUN_1400020a8();
            }
            FUN_140333f4e(&local_138);
            uVar17 = CONCAT71(uVar19,1);
            goto LAB_143dd356e;
          }
        }
      }
      uVar17 = CONCAT71(uVar19,1);
      if (*(char *)(param_1[4] + 0x174) == '\0') {
        FUN_140844034(param_1);
      }
      goto LAB_143dd356e;
    }
  }
LAB_143dd356c:
  uVar17 = 0;
LAB_143dd356e:
  if ((local_90 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
}



// FUNCTION 143dd4cc4 FUN_143dd4cc4 body=964 status=ok
// SIG undefined FUN_143dd4cc4(void)

undefined4
FUN_143dd4cc4(longlong *param_1,longlong param_2,longlong *param_3,undefined4 param_4,char param_5,
             undefined4 param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  undefined1 local_60 [40];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_1[5] == 0) {
LAB_143dd4d16:
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      uVar1 = *(uint *)(param_1 + 1);
      uVar4 = 0;
      if (((int)uVar1 < 0) || (uVar4 = 0, DAT_14c9647dc <= (int)uVar1)) goto LAB_143dd4d66;
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar10 == 0) ||
         ((((*(int *)(lVar10 + 0x10) != *(int *)((longlong)param_1 + 0xc) ||
            ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)) ||
           (plVar6 = (longlong *)param_1[3], plVar6 == (longlong *)0x0)) ||
          (*(int *)((longlong)param_1 + 0x14) == 0)))) goto LAB_143dd4d63;
      uVar1 = *(uint *)(param_1 + 2);
      uVar4 = 0;
      if (((int)uVar1 < 0) || (uVar4 = 0, DAT_14c9647dc <= (int)uVar1)) goto LAB_143dd4d66;
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar10 == 0) ||
         ((*(int *)(lVar10 + 0x10) != *(int *)((longlong)param_1 + 0x14) ||
          ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)))) goto LAB_143dd4d63;
      local_78[0] = 0;
      local_78[1] = 0;
      cVar2 = (**(code **)(*plVar6 + 0x28))(plVar6,local_78,param_6);
      if (cVar2 == '\0') {
LAB_143dd4fdd:
        uVar4 = 0;
      }
      else {
        if ((int)param_1[5] != 0) {
          FUN_140844034(param_1);
        }
        lVar10 = param_3[1];
        if (lVar10 == 0) {
          uVar5 = FUN_145d847d4();
          lVar10 = FUN_14477b664(uVar5);
          param_3[1] = lVar10;
        }
        if (param_3[2] == 0) {
          if ((*param_3 == 0) || (lVar10 == 0)) {
            param_1[4] = 0;
          }
          else {
            plVar6 = *(longlong **)(lVar10 + 0xb8);
            if ((plVar6 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) {
              uVar4 = 0;
              param_3[2] = 0;
              param_1[4] = 0;
              goto LAB_143dd4fe0;
            }
            uVar5 = (**(code **)(*plVar6 + 0x110))(plVar6);
            lVar10 = FUN_144aff482(uVar5);
            param_3[2] = lVar10;
            param_1[4] = lVar10;
            if (lVar10 != 0) goto LAB_143dd4e22;
          }
          goto LAB_143dd4fdd;
        }
        param_1[4] = param_3[2];
LAB_143dd4e22:
        if (param_2 == 0) {
          *(undefined4 *)(param_1 + 0x15) = 0;
          iVar3 = 0;
        }
        else {
          uVar1 = *(uint *)(param_2 + 0xc);
          *(uint *)(param_1 + 0x15) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          iVar3 = *(int *)(lVar10 + 0x10);
          if (*(int *)(lVar10 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            iVar9 = DAT_14c964868 + 1;
            bVar11 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar11) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar9);
            }
            LOCK();
            iVar3 = *(int *)(lVar10 + 0x10);
            bVar11 = iVar3 == 0;
            if (bVar11) {
              *(int *)(lVar10 + 0x10) = iVar9;
              iVar3 = 0;
            }
            UNLOCK();
            if (bVar11) {
              iVar3 = iVar9;
            }
          }
        }
        *(int *)((longlong)param_1 + 0xac) = iVar3;
        *(char *)(param_1 + 0xf) = (char)param_4;
        if (param_5 != '\0') {
          if (*(int *)((longlong)param_1 + 0xc) == 0) {
LAB_143dd501f:
            lVar10 = 0;
          }
          else {
            uVar1 = *(uint *)(param_1 + 1);
            lVar10 = 0;
            if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
              plVar6 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if ((plVar6 == (longlong *)0x0) ||
                 (((int)plVar6[2] != *(int *)((longlong)param_1 + 0xc) ||
                  ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_143dd501f;
              lVar10 = *plVar6;
            }
          }
          if (*(char *)(lVar10 + 0x178) != '\x03') {
            if (iVar3 == 0) {
LAB_143dd5026:
              uVar5 = 0;
            }
            else {
              uVar1 = *(uint *)(param_1 + 0x15);
              uVar5 = 0;
              if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
                puVar7 = (undefined8 *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if ((puVar7 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar7 + 2) != iVar3 || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0))))
                goto LAB_143dd5026;
                uVar5 = *puVar7;
              }
            }
            puVar8 = &DAT_14c9485f0;
            if (*(undefined4 **)(param_1[4] + 8) != (undefined4 *)0x0) {
              puVar8 = *(undefined4 **)(param_1[4] + 8);
            }
            FUN_1447a97f4(local_60,puVar8);
            (**(code **)(*param_1 + 0x48))(param_1,local_60,uVar5,param_4);
          }
        }
        uVar4 = FUN_143dd34d4(param_1);
      }
LAB_143dd4fe0:
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_143dd4d66;
    }
  }
  else if (param_1[4] != 0) {
    uVar4 = 0;
    if (((int)param_1[5] < 3) || (*(char *)(param_1[4] + 0x150) == '\0')) goto LAB_143dd4d66;
    if (param_1[0x1e] == 0) goto LAB_143dd4d16;
  }
LAB_143dd4d63:
  uVar4 = 0;
LAB_143dd4d66:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 143dd508a FUN_143dd508a body=502 status=ok
// SIG undefined FUN_143dd508a(void)

ulonglong FUN_143dd508a(longlong param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined1 auStack_88 [32];
  int local_68;
  int local_60;
  undefined2 *local_50;
  int local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = *(int *)(param_1 + 0x28);
  uVar8 = 0;
  if (iVar2 != param_2) {
    if (param_2 - 2U < 3) {
      uVar8 = (ulonglong)(param_2 - 1);
    }
    iVar7 = (int)uVar8;
    if (iVar2 == iVar7) {
      *(int *)(param_1 + 0x28) = param_2;
      uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
    }
    else {
      local_68 = iVar2;
      local_60 = iVar7;
      if ((((*(int *)(param_1 + 0xc) == 0) || (uVar3 = *(uint *)(param_1 + 8), (int)uVar3 < 0)) ||
          (DAT_14c9647dc <= (int)uVar3)) ||
         (((plVar5 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar5 == (longlong *)0x0 || ((int)plVar5[2] != *(int *)(param_1 + 0xc))) ||
          ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)))) {
        FUN_140002266(local_40,
                      L"%s BeginNextMeleePhase requested an unexpected melee phase. Got %d, Was: %d, Expected to Get %d."
                      ,L"No Actor",param_2);
      }
      else {
        if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
          lVar4 = *plVar5;
        }
        else {
          lVar4 = 0;
        }
        bVar1 = *(byte *)(lVar4 + 0x178);
        lVar4 = FUN_147867946();
        if ((longlong)*(int *)(lVar4 + 0x48) == 0) {
          local_40[0] = 0;
        }
        else {
          local_40[0] = 0;
          lVar9 = 0;
          do {
            if (*(ulonglong *)(*(longlong *)(lVar4 + 0x40) + 8 + lVar9) == (ulonglong)bVar1) {
              local_40[0] = *(longlong *)(*(longlong *)(lVar4 + 0x40) + lVar9);
              break;
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)*(int *)(lVar4 + 0x48) * 0x10 != lVar9);
        }
        FUN_1400021e4(local_40,&local_50);
        puVar10 = local_50;
        if (local_48 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        FUN_140002266(local_40,
                      L"%s BeginNextMeleePhase requested an unexpected melee phase. Got %d, Was: %d, Expected to Get %d."
                      ,puVar10,param_2);
        if (local_50 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (((*(int *)(param_1 + 0xc) != 0) && (uVar3 = *(uint *)(param_1 + 8), -1 < (int)uVar3)) &&
         (((int)uVar3 < DAT_14c9647dc &&
          (((puVar6 = (undefined8 *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
            puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == *(int *)(param_1 + 0xc))) &&
           ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))))) {
        if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
          plVar5 = (longlong *)*puVar6;
        }
        else {
          plVar5 = (longlong *)0x0;
        }
        (**(code **)(*plVar5 + 0x700))();
      }
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
      uVar8 = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 143dd5282 FUN_143dd5282 body=2231 status=ok
// SIG undefined FUN_143dd5282(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dd5282(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  double *pdVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar23;
  undefined1 auVar22 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 in_XMM3 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auStack_128 [40];
  float local_100;
  float local_fc;
  undefined1 local_f8;
  char local_f7;
  double local_f0;
  double dStack_e8;
  double local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_b8 [16];
  ulonglong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((((*(int *)(param_1 + 0xac) == 0) || (uVar1 = *(uint *)(param_1 + 0xa8), (int)uVar1 < 0)) ||
        (DAT_14c9647dc <= (int)uVar1)) ||
       (((lVar15 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar15 == 0 ||
         (*(int *)(lVar15 + 0x10) != *(int *)(param_1 + 0xac))) ||
        (((*(uint *)(lVar15 + 8) & 0x10200000) != 0 ||
         ((*(longlong *)(param_1 + 0x20) == 0 || (*(int *)(param_1 + 0xc) == 0)))))))) ||
      (uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 0)) ||
     ((((DAT_14c9647dc <= (int)uVar1 ||
        (plVar10 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar10 == (longlong *)0x0)) || ((int)plVar10[2] != *(int *)(param_1 + 0xc))) ||
      ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_143dd5316;
  if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
    lVar15 = *plVar10;
  }
  else {
    lVar15 = 0;
  }
  lVar15 = *(longlong *)(lVar15 + 0x430);
  if (lVar15 == 0) goto LAB_143dd5316;
  lVar6 = FUN_140993a2e();
  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
      != lVar6 + 0x30)) goto LAB_143dd5316;
  local_e0 = DAT_14c8464f0;
  local_f0 = DAT_14c8464e0;
  dStack_e8 = DAT_14c8464e8;
  lVar6 = *(longlong *)(param_1 + 0x20);
  pcVar11 = (char *)(lVar6 + 0x2a0);
  if ((&DAT_00001100)[lVar15] == '\x01') {
    pcVar11 = (char *)(lVar6 + 0x274);
  }
  if (*pcVar11 != '\x01') goto LAB_143dd5316;
  lVar16 = 0x2a4;
  if ((&DAT_00001100)[lVar15] == '\x01') {
    lVar16 = 0x278;
  }
  if (*(int *)(lVar6 + lVar16) == 0 || *(int *)(lVar6 + lVar16) != param_2) goto LAB_143dd5316;
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
LAB_143dd5af3:
    lVar8 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    lVar8 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != iVar2 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))))
      goto LAB_143dd5af3;
      lVar8 = *plVar10;
    }
  }
  pdVar14 = (double *)(*(longlong *)(lVar8 + 0x1c8) + 0x260);
  if (*(longlong *)(lVar8 + 0x1c8) == 0) {
    pdVar14 = &DAT_14c8464e0;
  }
  dVar24 = *pdVar14;
  dVar27 = pdVar14[1];
  if (*(int *)(param_1 + 0xac) == 0) {
LAB_143dd5afa:
    lVar8 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xa8);
    lVar8 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != *(int *)(param_1 + 0xac) ||
          ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_143dd5afa;
      lVar8 = *plVar10;
    }
  }
  pdVar14 = (double *)(*(longlong *)(lVar8 + 0x1c8) + 0x260);
  if (*(longlong *)(lVar8 + 0x1c8) == 0) {
    pdVar14 = &DAT_14c8464e0;
  }
  dVar21 = dVar24 - *pdVar14;
  dVar23 = dVar27 - pdVar14[1];
  dVar21 = SQRT(dVar21 * dVar21 + dVar23 * dVar23);
  if (iVar2 == 0) {
LAB_143dd5b02:
    plVar10 = (longlong *)0x0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    plVar10 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(int *)(puVar12 + 2) != iVar2 || ((*(uint *)(puVar12 + 1) & 0x10200000) != 0))))
      goto LAB_143dd5b02;
      plVar10 = (longlong *)*puVar12;
    }
  }
  (**(code **)(*plVar10 + 0x528))(dVar21,&local_98,local_b8);
  fVar30 = (float)local_98;
  if (*(int *)(param_1 + 0xac) == 0) {
LAB_143dd5b09:
    plVar10 = (longlong *)0x0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xa8);
    plVar10 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0xac) ||
          ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_143dd5b09;
      plVar10 = (longlong *)*puVar12;
    }
  }
  (**(code **)(*plVar10 + 0x528))(plVar10,&local_98,local_b8);
  local_100 = (fVar30 + (float)local_98) - (float)dVar21;
  if (local_100 <= 0.0) {
    local_100 = 0.0;
  }
  fVar30 = *(float *)(lVar6 + 0xc + lVar16);
  local_100 = local_100 + fVar30;
  if (*(char *)(lVar6 + 0x15 + lVar16) == '\x01') {
    dVar27 = *(double *)(param_1 + 0x88) - dVar27;
    dVar24 = *(double *)(param_1 + 0x80) - dVar24;
    in_XMM3._0_8_ = dVar27 * dVar27;
    in_XMM3._8_8_ = 0;
    dVar24 = SQRT(dVar24 * dVar24 + in_XMM3._0_8_);
    if (dVar24 <= (double)local_100) {
      local_100 = (float)dVar24;
    }
  }
  fVar30 = (float)(~-(uint)(0.0001 < fVar30) & 0x3f800000 |
                  (uint)(local_100 / fVar30) & -(uint)(0.0001 < fVar30));
  local_fc = *(float *)(lVar6 + 8 + lVar16) * fVar30;
  local_f8 = *(undefined1 *)(lVar6 + 0x14 + lVar16);
  local_f7 = *(char *)(lVar6 + 4 + lVar16);
  local_d8 = *(undefined4 *)(lVar6 + 0x20 + lVar16);
  local_d4 = *(undefined4 *)(lVar6 + 0x24 + lVar16);
  if (local_f7 == '\x01') {
    local_98 = 0;
    uStack_90 = 0;
    uVar13 = 0;
    local_88 = 0;
    local_a8 = 0;
    local_b8 = ZEXT816(0);
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar1 = *(uint *)(param_1 + 8);
      uVar13 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar12 == (undefined8 *)0x0) ||
           ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0xc) ||
            ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) {
          uVar13 = 0;
        }
        else {
          uVar13 = *puVar12;
        }
      }
    }
    FUN_141313b0e(uVar13,&local_98,local_b8);
    uVar13 = local_b8._8_8_;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = local_b8._8_8_;
    local_b8 = auVar28 << 0x40;
    dVar24 = (double)DAT_1499387d0;
    dVar27 = DAT_1499387d0._8_8_;
    auVar17 = divpd(local_b8,_DAT_1499387d0);
    auVar17 = roundpd(auVar17,auVar17,3);
    auVar28 = roundpd(in_XMM3,ZEXT816(0),3);
    auVar25._0_8_ = 0.0 - auVar17._0_8_ * dVar24;
    auVar25._8_8_ = (double)uVar13 - auVar17._8_8_ * dVar27;
    dVar21 = 0.0 - auVar28._0_8_ * dVar24;
    dVar23 = 0.0 - auVar28._8_8_ * dVar27;
    auVar29._0_8_ = auVar25._0_8_ + dVar24;
    auVar29._8_8_ = auVar25._8_8_ + dVar27;
    auVar22._0_8_ = dVar24 + dVar21;
    auVar22._8_8_ = dVar27 + dVar23;
    auVar18._8_8_ = -(ulonglong)(0.0 <= auVar25._8_8_);
    auVar18._0_8_ = -(ulonglong)(0.0 <= auVar25._0_8_);
    auVar28 = blendvpd(auVar29,auVar25,auVar18);
    auVar19._8_8_ = -(ulonglong)(0.0 <= dVar23);
    auVar19._0_8_ = -(ulonglong)(0.0 <= dVar21);
    auVar17._8_8_ = dVar23;
    auVar17._0_8_ = dVar21;
    auVar17 = blendvpd(auVar22,auVar17,auVar19);
    auVar26._0_8_ = auVar28._0_8_ + -360.0;
    auVar26._8_8_ = auVar28._8_8_ + -360.0;
    auVar20._8_8_ = -(ulonglong)(180.0 < auVar28._8_8_);
    auVar20._0_8_ = -(ulonglong)(180.0 < auVar28._0_8_);
    local_b8 = blendvpd(auVar28,auVar26,auVar20);
    dVar24 = auVar17._0_8_;
    local_a8 = ~-(ulonglong)(180.0 < dVar24) & (ulonglong)dVar24 |
               (ulonglong)(dVar24 + -360.0) & -(ulonglong)(180.0 < dVar24);
    FUN_1401c9a0e(local_b8,&local_d0,&DAT_14c8462d8);
    local_f0 = (double)*(float *)(lVar6 + 0x18 + lVar16);
    local_e0 = -local_c0 * local_f0;
    dStack_e8 = -local_c8 * local_f0;
    local_f0 = -local_d0 * local_f0;
    if (*(char *)(lVar6 + 0x15 + lVar16) != '\0') {
      dVar24 = (double)fVar30;
      local_f0 = local_f0 * dVar24;
      dStack_e8 = dStack_e8 * dVar24;
      local_e0 = local_e0 * dVar24;
    }
    local_e0 = (double)*(float *)(lVar6 + 0x10 + lVar16) + local_e0;
    if (*(char *)(lVar6 + 0x1c + lVar16) != '\0') {
      iVar2 = *(int *)(param_1 + 0xc);
      puVar7 = (undefined4 *)&DAT_00000568;
      if (iVar2 == 0) {
LAB_143dd5b10:
        lVar8 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 8);
        lVar8 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar10 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar10 == (longlong *)0x0) ||
             (((int)plVar10[2] != iVar2 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) {
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar10;
          }
          puVar7 = (undefined4 *)(lVar8 + 0x568);
          plVar10 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != iVar2)) ||
             ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) goto LAB_143dd5b10;
          lVar8 = *plVar10;
        }
      }
      uVar3 = *(undefined4 *)(lVar8 + 0x568);
      *(undefined4 *)(lVar8 + 0x568) = *puVar7;
      iVar2 = *(int *)(param_1 + 0xc);
      puVar7 = (undefined4 *)&DAT_0000056c;
      if (iVar2 == 0) {
LAB_143dd5b17:
        lVar9 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 8);
        lVar9 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar10 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar10 == (longlong *)0x0) ||
             (((int)plVar10[2] != iVar2 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) {
            lVar9 = 0;
          }
          else {
            lVar9 = *plVar10;
          }
          puVar7 = (undefined4 *)(lVar9 + 0x56c);
          plVar10 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != iVar2)) ||
             ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) goto LAB_143dd5b17;
          lVar9 = *plVar10;
        }
      }
      uVar4 = *(undefined4 *)(lVar9 + 0x56c);
      *(undefined4 *)(lVar9 + 0x56c) = *puVar7;
      uVar5 = *(undefined4 *)(&DAT_00002bb0 + lVar15);
      FUN_140257a06(lVar15,&DAT_14cb857e8,*(undefined1 *)(lVar6 + 0x1c + lVar16));
      *(undefined4 *)(&DAT_00002bb0 + lVar15) = uVar5;
      *(undefined4 *)(lVar9 + 0x56c) = uVar4;
      *(undefined4 *)(lVar8 + 0x568) = uVar3;
    }
    if (*(char *)(lVar6 + 0x1d + lVar16) == '\0') {
      FUN_1400bc96c(lVar15 + 0x1b98,&DAT_14cb857e8);
    }
  }
  else {
    local_e0 = (double)*(float *)(lVar6 + 0x10 + lVar16);
    local_f0 = 0.0;
    dStack_e8 = 0.0;
  }
  FUN_143ce0d86(lVar15,&local_100);
LAB_143dd5316:
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dd5b3a FUN_143dd5b3a body=894 status=ok
// SIG undefined FUN_143dd5b3a(void)

void FUN_143dd5b3a(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((((*(char *)(param_1 + 0xcd) == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) &&
        (*(char *)(*(longlong *)(param_1 + 0x20) + 0x174) == '\x01')) &&
       (*(char *)(param_1 + 0xcc) != '\x01')) ||
      (((((*(int *)(param_1 + 0xc) == 0 || (uVar6 = *(uint *)(param_1 + 8), (int)uVar6 < 0)) ||
         ((DAT_14c9647dc <= (int)uVar6 ||
          ((plVar2 = (longlong *)
                     ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
           plVar2 == (longlong *)0x0 || ((int)plVar2[2] != *(int *)(param_1 + 0xc))))))) ||
        ((*(uint *)(plVar2 + 1) & 0x10200000) != 0)) ||
       ((((*(longlong *)(param_1 + 0x18) == 0 || (*(int *)(param_1 + 0x14) == 0)) ||
         (uVar6 = *(uint *)(param_1 + 0x10), (int)uVar6 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar6 ||
         (lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar7 == 0))))))))
     || ((*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x14) ||
         ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))) goto LAB_143dd5bc3;
  if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
    lVar7 = *plVar2;
  }
  else {
    lVar7 = 0;
  }
  if ((*(byte *)(lVar7 + 0x178) < 2) || (cVar1 = FUN_143dd508a(param_1,2), cVar1 == '\0'))
  goto LAB_143dd5bc3;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_143dd5ead:
    uVar4 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 8);
    uVar4 = 0;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0xc) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_143dd5ead;
      uVar4 = *puVar5;
    }
  }
  lVar3 = FUN_1401b4c98(uVar4);
  lVar7 = *(longlong *)(param_1 + 0xd0);
  if (lVar7 != 0) {
    uVar6 = (uint)lVar7;
    if ((int)(uVar6 & 0xffffff) < *(int *)(lVar3 + 0x10)) {
      lVar8 = lVar3 + 0x18;
      if (*(longlong *)(lVar3 + 0x28) != 0) {
        lVar8 = *(longlong *)(lVar3 + 0x28);
      }
      if ((*(uint *)(lVar8 + (ulonglong)((uVar6 & 0xffffff) >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0)
      {
        lVar8 = *(longlong *)(lVar3 + 8);
        lVar9 = (ulonglong)(uVar6 & 0xffffff) * 0x70;
        if (((lVar8 + lVar9 != 0) && (*(longlong *)(lVar8 + 0x60 + lVar9) == lVar7)) &&
           (*(char *)(lVar8 + 1 + lVar9) != '\x04')) {
          FUN_1405a424c(lVar3);
        }
      }
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    if (*(int *)(param_1 + 0xac) == 0) {
LAB_143dd5eb4:
      uVar4 = 0;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0xa8);
      uVar4 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((puVar5 == (undefined8 *)0x0) ||
           ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0xac) ||
            ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_143dd5eb4;
        uVar4 = *puVar5;
      }
    }
    FUN_146555fb8(param_1,&local_28,uVar4);
    *(undefined8 *)(param_1 + 0x40) = local_28;
    if (*(int *)(param_1 + 0xac) == 0) {
LAB_143dd5eb9:
      uVar4 = 0;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0xa8);
      uVar4 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((puVar5 == (undefined8 *)0x0) ||
           ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0xac) ||
            ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_143dd5eb9;
        uVar4 = *puVar5;
      }
    }
    FUN_14614480e(param_1,*(undefined4 *)(param_1 + 0x2c),uVar4);
  }
  if (((((*(longlong *)(param_1 + 0x20) != 0) &&
        (*(char *)(*(longlong *)(param_1 + 0x20) + 0x210) == '\x01')) &&
       (*(int *)(param_1 + 0xac) != 0)) &&
      ((uVar6 = *(uint *)(param_1 + 0xa8), -1 < (int)uVar6 && ((int)uVar6 < DAT_14c9647dc)))) &&
     ((lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar7 != 0 &&
      ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0xac) &&
       ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
LAB_143dd5bc3:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dd5ecc FUN_143dd5ecc body=3427 status=ok
// SIG undefined FUN_143dd5ecc(void)

void FUN_143dd5ecc(longlong *param_1)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  byte bVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  uint uVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined1 auStack_178 [32];
  undefined2 *local_158;
  uint local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  code **local_120;
  undefined1 *local_118;
  code *local_110;
  code *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  longlong local_e8 [2];
  undefined8 *local_d8;
  ulonglong uStack_d0;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  code *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (((((((*(char *)((longlong)param_1 + 0xcd) == '\0') && (param_1[4] != 0)) &&
         (*(char *)(param_1[4] + 0x174) == '\x01')) &&
        (*(char *)((longlong)param_1 + 0xcc) != '\x01')) ||
       (((*(int *)((longlong)param_1 + 0xc) == 0 ||
         (uVar20 = *(uint *)(param_1 + 1), (int)uVar20 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar20 ||
         ((plVar6 = (longlong *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)((longlong)param_1 + 0xc)))))))))
      || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) ||
     ((((param_1[3] == 0 || (*(int *)((longlong)param_1 + 0x14) == 0)) ||
       (uVar20 = *(uint *)(param_1 + 2), (int)uVar20 < 0)) || (DAT_14c9647dc <= (int)uVar20))))
  goto LAB_143dd5f6c;
  lVar14 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
  if (((lVar14 == 0) || (*(int *)(lVar14 + 0x10) != *(int *)((longlong)param_1 + 0x14))) ||
     ((*(uint *)(lVar14 + 8) & 0x10200000) != 0)) goto LAB_143dd5f6c;
  if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
    lVar14 = *plVar6;
  }
  else {
    lVar14 = 0;
  }
  if ((*(byte *)(lVar14 + 0x178) < 2) || (cVar4 = FUN_143dd508a(param_1,3), cVar4 == '\0'))
  goto LAB_143dd5f6c;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
LAB_143dd6821:
    uVar9 = 0;
  }
  else {
    uVar20 = *(uint *)(param_1 + 1);
    uVar9 = 0;
    if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)((longlong)param_1 + 0xc) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_143dd6821;
      uVar9 = *puVar11;
    }
  }
  lVar7 = FUN_1401b4c98(uVar9);
  lVar14 = param_1[0x1b];
  if (lVar14 != 0) {
    uVar20 = (uint)lVar14;
    if ((int)(uVar20 & 0xffffff) < *(int *)(lVar7 + 0x10)) {
      lVar10 = lVar7 + 0x18;
      if (*(longlong *)(lVar7 + 0x28) != 0) {
        lVar10 = *(longlong *)(lVar7 + 0x28);
      }
      if ((*(uint *)(lVar10 + (ulonglong)((uVar20 & 0xffffff) >> 5) * 4) >> (uVar20 & 0x1f) & 1) !=
          0) {
        lVar10 = *(longlong *)(lVar7 + 8);
        lVar12 = (ulonglong)(uVar20 & 0xffffff) * 0x70;
        if (((lVar10 + lVar12 != 0) && (*(longlong *)(lVar10 + 0x60 + lVar12) == lVar14)) &&
           (*(char *)(lVar10 + 1 + lVar12) != '\x04')) {
          FUN_1405a424c(lVar7);
        }
      }
    }
    param_1[0x1b] = 0;
  }
  if (((param_1[4] == 0) || (*(char *)(param_1[4] + 0x210) != '\0')) ||
     (*(char *)((longlong)param_1 + 0x79) != '\0')) goto LAB_143dd5f6c;
  puVar1 = (uint *)(param_1 + 0x15);
  cVar4 = FUN_14079e1ea(puVar1,0);
  if (cVar4 == '\0') {
    bVar16 = *(byte *)(param_1 + 0xf);
    if (param_1[4] == 0) goto LAB_143dd615c;
    if (bVar16 == 0) goto LAB_143dd6149;
    bVar16 = 1;
LAB_143dd6152:
    lVar14 = FUN_14082ce84();
  }
  else {
    if (param_1[4] != 0) {
LAB_143dd6149:
      bVar16 = 0;
      goto LAB_143dd6152;
    }
    bVar16 = 0;
LAB_143dd615c:
    lVar14 = 0;
  }
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  if (iVar3 == 0) {
LAB_143dd6a36:
    lVar10 = 0;
  }
  else {
    uVar20 = *(uint *)(param_1 + 1);
    lVar10 = 0;
    if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar20 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != iVar3 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
      goto LAB_143dd6a36;
      lVar10 = *plVar6;
    }
  }
  if (*(char *)(lVar10 + 0x178) == '\x03') {
    if (param_1[0x1f] == 0) {
      uVar18 = 0;
      uVar17 = 0;
      local_d8 = (undefined8 *)0x0;
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      if (iVar3 == 0) {
LAB_143dd62a1:
        FUN_1446efa72(&local_d8,0,3,0x10);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,3);
      }
      else {
        uVar20 = *(uint *)(param_1 + 1);
        if (((((int)uVar20 < 0) || (DAT_14c9647dc <= (int)uVar20)) ||
            (plVar6 = (longlong *)
                      ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
            plVar6 == (longlong *)0x0)) ||
           (((int)plVar6[2] != iVar3 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          uVar17 = uVar18;
          if (*plVar6 != 0) {
            uVar20 = *(uint *)(*plVar6 + 0xc);
            uVar17 = (ulonglong)uVar20;
            if ((int)uVar20 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            uVar8 = (ulonglong)*(uint *)(lVar10 + 0x10);
            if (*(uint *)(lVar10 + 0x10) == 0) {
              LOCK();
              iVar3 = DAT_14c964868 + 1;
              UNLOCK();
              uVar20 = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar3;
              if (bVar21) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar20);
              }
              LOCK();
              uVar15 = *(uint *)(lVar10 + 0x10);
              bVar21 = uVar15 == 0;
              if (bVar21) {
                *(uint *)(lVar10 + 0x10) = uVar20;
                uVar15 = 0;
              }
              UNLOCK();
              if (bVar21) {
                uVar15 = uVar20;
              }
              uVar8 = (ulonglong)uVar15;
            }
          }
        }
        uVar18 = uVar17 | uVar8 << 0x20;
        if ((int)uStack_d0 != 3) goto LAB_143dd62a1;
      }
      *local_d8 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      local_d8[2] = lVar12;
      *local_d8 = &PTR_FUN_14b416dc0;
      local_d8[3] = param_1;
      local_d8[4] = uVar18;
      uVar22 = (**(code **)(*(longlong *)param_1[3] + 0x70))();
      local_b8 = (code *)0x0;
      local_b0 = 0;
      FUN_14487d8d8(&local_b8,&local_d8);
      local_78 = 1;
      local_158 = local_c0;
      local_c0[0] = 0;
      local_bc = 0xbf800000;
      FUN_1406f4044(lVar7,param_1 + 0x1f,&local_b8,uVar22);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
      if ((int)uStack_d0 != 0) {
        if (local_d8 == (undefined8 *)0x0) goto LAB_143dd63dd;
        (**(code **)*local_d8)(local_d8,0);
        FUN_1446efa72(&local_d8,0,0,0x10);
        uStack_d0 = uStack_d0 & 0xffffffff00000000;
      }
      if (local_d8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      (**(code **)(*(longlong *)param_1[3] + 0x78))();
    }
LAB_143dd63dd:
    if (lVar14 != 0) {
      FUN_1405fab15(local_e8);
      if (*(int *)((longlong)param_1 + 0xac) == 0) {
LAB_143dd6a4b:
        uVar9 = 0;
      }
      else {
        uVar20 = *puVar1;
        uVar9 = 0;
        if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
          puVar11 = (undefined8 *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
          if ((puVar11 == (undefined8 *)0x0) ||
             ((*(int *)(puVar11 + 2) != *(int *)((longlong)param_1 + 0xac) ||
              ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_143dd6a4b;
          uVar9 = *puVar11;
        }
      }
      if (*(int *)((longlong)param_1 + 0xc) == 0) {
LAB_143dd6a53:
        uVar13 = 0;
      }
      else {
        uVar20 = *(uint *)(param_1 + 1);
        uVar13 = 0;
        if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
          puVar11 = (undefined8 *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
          if ((puVar11 == (undefined8 *)0x0) ||
             ((*(int *)(puVar11 + 2) != *(int *)((longlong)param_1 + 0xc) ||
              ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_143dd6a53;
          uVar13 = *puVar11;
        }
      }
      local_158 = (undefined2 *)0x0;
      FUN_1405fd19a(uVar13,lVar14,uVar9,local_e8);
    }
    if (bVar16 == 0) {
      FUN_145ecd652(param_1,param_1[4]);
    }
    else {
      if (*(int *)((longlong)param_1 + 0xac) == 0) {
LAB_143dd6a44:
        uVar9 = 0;
      }
      else {
        uVar20 = *puVar1;
        uVar9 = 0;
        if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
          puVar11 = (undefined8 *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
          if ((puVar11 == (undefined8 *)0x0) ||
             ((*(int *)(puVar11 + 2) != *(int *)((longlong)param_1 + 0xac) ||
              ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_143dd6a44;
          uVar9 = *puVar11;
        }
      }
      (**(code **)(*param_1 + 0x50))(param_1,uVar9);
    }
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
LAB_143dd6a3d:
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar20 = *(uint *)(param_1 + 1);
    plVar6 = (longlong *)0x0;
    if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)((longlong)param_1 + 0xc) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_143dd6a3d;
      plVar6 = (longlong *)*puVar11;
    }
  }
  cVar4 = (**(code **)(*plVar6 + 0x700))();
  if (cVar4 != '\0') {
    if (*(int *)((longlong)param_1 + 0xc) == 0) {
LAB_143dd6a68:
      lVar14 = 0;
    }
    else {
      uVar20 = *(uint *)(param_1 + 1);
      lVar14 = 0;
      if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
        plVar6 = (longlong *)
                 ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
        if ((plVar6 == (longlong *)0x0) ||
           (((int)plVar6[2] != *(int *)((longlong)param_1 + 0xc) ||
            ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_143dd6a68;
        lVar14 = *plVar6;
      }
    }
    lVar14 = *(longlong *)(lVar14 + 0x3c0);
    if (lVar14 == 0) {
LAB_143dd68b3:
      lVar14 = 0;
    }
    else {
      if (DAT_14cb61cd0 == 0) {
        local_120 = &local_b8;
        local_b8 = FUN_141030f22;
        local_110 = FUN_14081d0ea;
        local_118 = &LAB_1463b31ae;
        local_128 = &LAB_1486dca4f;
        local_130 = &LAB_1464f50a6;
        local_138 = &DAT_149e063b2;
        local_140 = 0;
        local_148 = 0x10000004;
        local_150 = 8;
        local_158 = (undefined2 *)CONCAT44(local_158._4_4_,0xd70);
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
      }
      if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30))
      goto LAB_143dd68b3;
    }
    if (bVar16 == 0) {
      local_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      FUN_145735bf6(param_1,param_1[4],&local_d8);
      if (0 < (int)uStack_d0) {
        lVar7 = lVar14 + 0x960;
        if (lVar14 == 0) {
          lVar7 = 0;
        }
        lVar10 = param_1[4];
        local_b8 = *(code **)(lVar10 + 0x1d8);
        local_b0 = *(undefined4 *)(lVar10 + 0x1e0);
        local_a8 = 0;
        local_140 = 0;
        local_150 = local_150 & 0xffffff00;
        local_158 = (undefined2 *)((ulonglong)local_158 & 0xffffffffffffff00);
        local_148 = 0x3f800000;
        FUN_140cab31c(lVar14,&local_b8,*(undefined4 *)(lVar10 + 0x1f0),lVar7);
      }
      FUN_14121cbdb(local_d8,(int)uStack_d0);
      if (local_d8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar7 = lVar14 + 0x960;
      if (lVar14 == 0) {
        lVar7 = 0;
      }
      uVar22 = *(undefined4 *)(param_1[4] + 0x1d0);
      lVar10 = FUN_145d25c3c(param_1[4] + 0x1b8);
      if (lVar10 == 0) {
        local_100 = (code *)0x0;
      }
      else {
        puVar19 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar10 + 8) != (undefined4 *)0x0) {
          puVar19 = *(undefined4 **)(lVar10 + 8);
        }
        if (DAT_14c947fe0 == 0) {
          lVar10 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar10);
          DAT_14c947fe0 = lVar10;
        }
        FUN_140045924(DAT_14c947fe0,&local_100,puVar19,1);
      }
      local_f8 = 0x7012;
      local_f0 = 0;
      local_b0 = 0x7012;
      local_a8 = 0;
      local_140 = 0;
      local_150 = local_150 & 0xffffff00;
      local_158 = (undefined2 *)((ulonglong)local_158 & 0xffffffffffffff00);
      local_148 = 0x3f800000;
      local_b8 = local_100;
      FUN_140cab31c(lVar14,&local_b8,uVar22,lVar7);
    }
  }
  FUN_143dd5282(param_1,1);
  if (*(char *)(param_1[4] + 0x150) != '\x01') goto LAB_143dd5f6c;
  fVar2 = *(float *)(param_1[4] + 0x154 + (ulonglong)(bVar16 ^ 1) * 4);
  FUN_141320700(param_1);
  if ((((*(int *)((longlong)param_1 + 0xc) == 0) ||
       (uVar20 = *(uint *)(param_1 + 1), (int)uVar20 < 0)) || (DAT_14c9647dc <= (int)uVar20)) ||
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)((longlong)param_1 + 0xc))) ||
      ((fVar2 <= 1e-08 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))))) goto LAB_143dd5f6c;
  uVar20 = 0;
  if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
    uVar17 = 0;
    uVar20 = 0;
    if (*plVar6 != 0) {
      uVar20 = *(uint *)(*plVar6 + 0xc);
      if ((int)uVar20 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      uVar17 = (ulonglong)*(uint *)(lVar14 + 0x10);
      if (*(uint *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar15 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar15);
        }
        LOCK();
        uVar5 = *(uint *)(lVar14 + 0x10);
        bVar21 = uVar5 == 0;
        if (bVar21) {
          *(uint *)(lVar14 + 0x10) = uVar15;
          uVar5 = 0;
        }
        UNLOCK();
        if (bVar21) {
          uVar5 = uVar15;
        }
        uVar17 = (ulonglong)uVar5;
      }
    }
  }
  else {
    uVar17 = 0;
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
LAB_143dd6a5a:
    uVar9 = 0;
  }
  else {
    uVar15 = *(uint *)(param_1 + 1);
    uVar9 = 0;
    if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)((longlong)param_1 + 0xc) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_143dd6a5a;
      uVar9 = *puVar11;
    }
  }
  uVar9 = FUN_1401b4c98(uVar9);
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = uStack_d0 & 0xffffffff00000000;
  FUN_1446efa72(&local_d8,0,3,0x10);
  uStack_d0 = CONCAT44(uStack_d0._4_4_,3);
  *local_d8 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_d8[2] = lVar7;
  *local_d8 = &PTR_FUN_14b416f10;
  local_d8[3] = param_1;
  local_d8[4] = (ulonglong)uVar20 | uVar17 << 0x20;
  local_b8 = (code *)0x0;
  local_b0 = 0;
  FUN_14487d8d8(&local_b8,&local_d8);
  local_78 = 1;
  local_158 = local_c0;
  local_c0[0] = 0;
  local_bc = 0xbf800000;
  FUN_1406f4044(uVar9,param_1 + 0x1e,&local_b8,fVar2);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
  if ((int)uStack_d0 != 0) {
    if (local_d8 == (undefined8 *)0x0) goto LAB_143dd5f6c;
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
  }
  if (local_d8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143dd5f6c:
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dd6c30 FUN_143dd6c30 body=2466 status=ok
// SIG undefined FUN_143dd6c30(void)

void FUN_143dd6c30(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined2 local_b0;
  undefined2 uStack_ae;
  undefined4 uStack_ac;
  undefined8 *local_a8;
  int local_a0;
  undefined4 uStack_9c;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((((((*(char *)(param_1 + 0xcd) == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) &&
         (*(char *)(*(longlong *)(param_1 + 0x20) + 0x174) == '\x01')) &&
        (*(char *)(param_1 + 0xcc) != '\x01')) ||
       ((*(int *)(param_1 + 0xc) == 0 || (uVar15 = *(uint *)(param_1 + 8), (int)uVar15 < 0)))) ||
      ((((DAT_14c9647dc <= (int)uVar15 ||
         ((plVar8 = (longlong *)
                    ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
          plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_1 + 0xc))))) ||
        ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) ||
       (((*(longlong *)(param_1 + 0x18) == 0 || (*(int *)(param_1 + 0x14) == 0)) ||
        (uVar15 = *(uint *)(param_1 + 0x10), (int)uVar15 < 0)))))) ||
     (((DAT_14c9647dc <= (int)uVar15 ||
       (lVar16 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8), lVar16 == 0)) ||
      ((*(int *)(lVar16 + 0x10) != *(int *)(param_1 + 0x14) ||
       ((*(uint *)(lVar16 + 8) & 0x10200000) != 0)))))) goto LAB_143dd6ccc;
  if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
    lVar16 = *plVar8;
  }
  else {
    lVar16 = 0;
  }
  if ((*(byte *)(lVar16 + 0x178) < 2) || (cVar4 = FUN_143dd508a(param_1,4), cVar4 == '\0'))
  goto LAB_143dd6ccc;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_143dd7404:
    uVar10 = 0;
  }
  else {
    uVar15 = *(uint *)(param_1 + 8);
    uVar10 = 0;
    if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
      puVar13 = (undefined8 *)
                ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
      if ((puVar13 == (undefined8 *)0x0) ||
         ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0xc) ||
          ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_143dd7404;
      uVar10 = *puVar13;
    }
  }
  lVar9 = FUN_1401b4c98(uVar10);
  lVar16 = *(longlong *)(param_1 + 0xe0);
  if (lVar16 != 0) {
    uVar15 = (uint)lVar16;
    if ((int)(uVar15 & 0xffffff) < *(int *)(lVar9 + 0x10)) {
      lVar18 = lVar9 + 0x18;
      if (*(longlong *)(lVar9 + 0x28) != 0) {
        lVar18 = *(longlong *)(lVar9 + 0x28);
      }
      if ((*(uint *)(lVar18 + (ulonglong)((uVar15 & 0xffffff) >> 5) * 4) >> (uVar15 & 0x1f) & 1) !=
          0) {
        lVar18 = *(longlong *)(lVar9 + 8);
        lVar14 = (ulonglong)(uVar15 & 0xffffff) * 0x70;
        if (((lVar18 + lVar14 != 0) && (*(longlong *)(lVar18 + 0x60 + lVar14) == lVar16)) &&
           (*(char *)(lVar18 + 1 + lVar14) != '\x04')) {
          FUN_1405a424c(lVar9);
        }
      }
    }
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_145936452(param_1);
  FUN_14084408c(param_1);
  if ((*(longlong *)(param_1 + 0x20) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x20) + 0x210) != '\x01')) {
    FUN_143dd5282(param_1,2);
LAB_143dd739f:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_e8);
  }
  cVar4 = FUN_143dd508a(param_1,5);
  if (cVar4 == '\0') goto LAB_143dd739f;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_e8);
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x98))();
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_143dd743a:
    lVar16 = 0;
  }
  else {
    uVar15 = *(uint *)(param_1 + 8);
    lVar16 = 0;
    if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar15 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)(param_1 + 0xc) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0))
         )) goto LAB_143dd743a;
      lVar16 = *plVar8;
    }
  }
  if (*(char *)(lVar16 + 0x178) == '\x03') {
    *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x214);
    puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 0x20) + 8);
    puVar17 = &DAT_14c9485f0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar17 = puVar2;
    }
    FUN_1447715ec(param_1 + 0x118,puVar17);
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
    if (((((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) && (*(int *)(param_1 + 0x14) != 0))
         && (uVar15 = *(uint *)(param_1 + 0x10), -1 < (int)uVar15)) &&
        (((int)uVar15 < DAT_14c9647dc &&
         (lVar16 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8), lVar16 != 0))))
       && ((*(int *)(lVar16 + 0x10) == *(int *)(param_1 + 0x14) &&
           ((*(uint *)(lVar16 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
    }
  }
  if ((((*(int *)(param_1 + 0xc) == 0) || (uVar15 = *(uint *)(param_1 + 8), (int)uVar15 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar15 ||
       (((plVar8 = (longlong *)
                   ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
         plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_1 + 0xc))) ||
        ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))))) ||
     (plVar8 = (longlong *)*plVar8, plVar8 == (longlong *)0x0)) goto LAB_143dd73d3;
  uVar10 = FUN_140e81900();
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar10);
  if (plVar8 == (longlong *)0x0) goto LAB_143dd73d3;
  uVar10 = FUN_140e81900();
  plVar11 = (longlong *)FUN_144718840(plVar8,uVar10);
  if (plVar11 == (longlong *)0x0 || plVar8 == plVar11) goto LAB_143dd73d3;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_143dd75a0:
    uVar10 = 0;
  }
  else {
    uVar15 = *(uint *)(param_1 + 8);
    uVar10 = 0;
    if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
      puVar13 = (undefined8 *)
                ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
      if ((puVar13 == (undefined8 *)0x0) ||
         ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0xc) ||
          ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_143dd75a0;
      uVar10 = *puVar13;
    }
  }
  local_c8 = (undefined2 *)((ulonglong)local_c8 & 0xffffffffffffff00);
  uVar5 = (**(code **)(*plVar11 + 0x28))
                    (plVar11,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x214),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x15c),uVar10);
  *(char *)(param_1 + 0x100) = (char)uVar5;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_143dd75a8:
    lVar16 = 0;
  }
  else {
    uVar15 = *(uint *)(param_1 + 8);
    lVar16 = 0;
    if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar15 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)(param_1 + 0xc) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0))
         )) goto LAB_143dd75a8;
      lVar16 = *plVar8;
    }
  }
  FUN_140dc01da(lVar16 + 0x1508,&local_a8,uVar5);
  *(undefined8 **)(param_1 + 0x170) = local_a8;
  plVar11 = (longlong *)CONCAT44(uStack_9c,local_a0);
  plVar8 = *(longlong **)(param_1 + 0x178);
  if (plVar8 != plVar11) {
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x178);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x178) = plVar11;
    plVar11 = (longlong *)CONCAT44(uStack_9c,local_a0);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x170) == 0) || (*(longlong *)(param_1 + 0x178) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x178) + 8) < 1)) {
LAB_143dd73d3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_e8);
  }
  uVar15 = 0;
  if ((((*(int *)(param_1 + 0xc) == 0) || (uVar19 = *(uint *)(param_1 + 8), (int)uVar19 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar19 ||
       ((plVar8 = (longlong *)
                  ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
        plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_1 + 0xc))))))) ||
     ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    uVar15 = 0;
    if (*plVar8 != 0) {
      uVar15 = *(uint *)(*plVar8 + 0xc);
      if ((int)uVar15 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      uVar12 = (ulonglong)*(uint *)(lVar16 + 0x10);
      if (*(uint *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        uVar19 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar19);
        }
        LOCK();
        uVar7 = *(uint *)(lVar16 + 0x10);
        bVar21 = uVar7 == 0;
        if (bVar21) {
          *(uint *)(lVar16 + 0x10) = uVar19;
          uVar7 = 0;
        }
        UNLOCK();
        if (bVar21) {
          uVar7 = uVar19;
        }
        uVar12 = (ulonglong)uVar7;
      }
    }
  }
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  uVar12 = (ulonglong)uVar15 | uVar12 << 0x20;
  FUN_1446efa72(&local_c0,0,3,0x10);
  local_b8 = 3;
  *local_c0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar18 = DAT_14c758608 + 1;
  lVar16 = DAT_14c758608 + 1;
  if (lVar18 == 0) {
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 2;
    lVar16 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar16;
  local_c0[2] = lVar18;
  *local_c0 = &PTR_FUN_14b416e30;
  local_c0[3] = param_1;
  local_c0[4] = uVar12;
  uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x268);
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_14487d8d8(&local_a8,&local_c0);
  local_68 = 1;
  local_c8 = &local_b0;
  local_b0 = 0;
  uStack_ac = 0xbf800000;
  FUN_1406f4044(lVar9,param_1 + 0xe8,&local_a8,uVar5);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
  plVar8 = *(longlong **)(param_1 + 0x178);
  bVar21 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    lVar16 = 0;
  }
  else {
    iVar6 = (int)plVar8[1];
    lVar16 = 0;
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_143dd7450;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar20 = iVar6 == iVar3;
      if (bVar20) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      UNLOCK();
    } while (!bVar20);
    lVar16 = *(longlong *)(param_1 + 0x170);
    bVar21 = false;
  }
LAB_143dd7450:
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,3,0x10);
  local_a0 = 3;
  *local_a8 = &PTR_LAB_14b3e9c20;
  LOCK();
  UNLOCK();
  lVar18 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar18 == 0) {
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_a8[2] = lVar18;
  *local_a8 = &PTR_FUN_14b416ea0;
  local_a8[3] = param_1;
  local_a8[4] = uVar12;
  FUN_140ebcfd8(lVar16 + 0x18,&local_b0,&local_a8);
  if (local_a0 == 0) {
LAB_143dd7511:
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_143dd7511;
  }
  *(ulonglong *)(param_1 + 0x180) = CONCAT44(uStack_ac,CONCAT22(uStack_ae,local_b0));
  if (!bVar21) {
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
  if (local_b8 != 0) {
    if (local_c0 == (undefined8 *)0x0) goto LAB_143dd6ccc;
    (**(code **)*local_c0)(local_c0,0);
    FUN_1446efa72(&local_c0,0,0,0x10);
    local_b8 = 0;
  }
  if (local_c0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143dd6ccc:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dd7634 FUN_143dd7634 body=320 status=ok
// SIG undefined FUN_143dd7634(void)

void FUN_143dd7634(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((((param_1[0x2e] != 0) && (plVar6 = (longlong *)param_1[0x2f], plVar6 != (longlong *)0x0)) &&
      (0 < (int)plVar6[1])) && (param_1[0x30] != 0)) {
    lVar7 = 0;
    iVar5 = (int)plVar6[1];
    do {
      iVar4 = iVar5;
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_143dd769d;
      }
      LOCK();
      iVar5 = (int)plVar6[1];
      bVar8 = iVar4 == iVar5;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar5 = iVar4;
      }
      UNLOCK();
    } while (!bVar8);
    lVar7 = param_1[0x2e];
LAB_143dd769d:
    if (param_1[0x30] != 0) {
      FUN_14480f766(lVar7 + 0x18);
    }
    if (iVar4 != 0) {
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
    param_1[0x2e] = 0;
    plVar6 = (longlong *)param_1[0x2f];
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
  }
  if (param_2 == '\0') {
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  if ((((((longlong *)param_1[3] != (longlong *)0x0) && (*(int *)((longlong)param_1 + 0x14) != 0))
       && ((uVar3 = *(uint *)(param_1 + 2), -1 < (int)uVar3 &&
           (((int)uVar3 < DAT_14c9647dc &&
            (lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar7 != 0))))))
      && (*(int *)(lVar7 + 0x10) == *(int *)((longlong)param_1 + 0x14))) &&
     ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
    (**(code **)(*(longlong *)param_1[3] + 0xa8))();
  }
  FUN_1488e7948(param_1);
  return;
}



// FUNCTION 143dd7774 FUN_143dd7774 body=104 status=ok
// SIG undefined FUN_143dd7774(void)

void FUN_143dd7774(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  
  if (((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      cVar2 = FUN_14069eaf4(param_1 + 0xa8);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1 + 0xb0) = 1;
      }
    }
  }
  return;
}



// FUNCTION 143dd7816 FUN_143dd7816 body=2965 status=ok
// SIG undefined FUN_143dd7816(void)

void FUN_143dd7816(longlong *param_1,longlong *param_2,uint *param_3,float param_4)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  bool bVar21;
  uint uVar22;
  float fVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_1c8 [32];
  undefined2 *local_1a8;
  int local_194;
  longlong local_190;
  longlong *local_188;
  undefined8 local_180;
  uint local_178 [4];
  longlong local_168;
  int local_160;
  undefined8 local_158;
  uint local_150;
  undefined2 local_148 [2];
  undefined4 local_144;
  longlong local_138;
  int local_130;
  longlong local_128;
  undefined8 *local_120;
  int local_118;
  longlong local_110;
  int local_108;
  undefined8 local_100;
  uint local_f8;
  longlong local_f0;
  undefined8 local_e8;
  uint local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_a0;
  byte local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((longlong)(int)param_1[9] != 0) {
    plVar19 = (longlong *)param_1[8];
    lVar5 = (longlong)(int)param_1[9] << 3;
    do {
      lVar8 = *plVar19;
      if ((*(int *)(lVar8 + 0x18) == (int)*param_2) && (*(int *)(lVar8 + 0x20) == (int)param_2[1]))
      {
        if (lVar8 != 0 && plVar19 != (longlong *)0x0) {
          lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
          if (lVar5 == 0) {
            uVar10 = 0;
            iVar4 = 0;
          }
          else {
            uVar10 = *(uint *)(lVar5 + 0xc);
            if ((int)uVar10 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            iVar4 = *(int *)(lVar5 + 0x10);
            if (*(int *)(lVar5 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar20 = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar21) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar20);
              }
              LOCK();
              iVar4 = *(int *)(lVar5 + 0x10);
              bVar21 = iVar4 == 0;
              if (bVar21) {
                *(int *)(lVar5 + 0x10) = iVar20;
                iVar4 = 0;
              }
              UNLOCK();
              if (bVar21) {
                iVar4 = iVar20;
              }
            }
          }
          if (*(longlong *)(lVar8 + 0x10) != 0) {
            local_e8 = *(undefined8 *)param_3;
            local_e0 = param_3[2];
            FUN_1488e952c(*(longlong *)(lVar8 + 0x10),&local_d8);
            plVar19 = local_d8;
            if (local_d8 != (longlong *)0x0) {
              FUN_140212f8e(&local_f0);
              local_f8 = param_3[2];
              local_100 = *(undefined8 *)param_3;
              local_110 = *param_2;
              local_108 = (int)param_2[1];
              plVar6 = (longlong *)FUN_1488e8492();
              if (plVar6 != (longlong *)0x0) {
                if (iVar4 == 0) {
LAB_143dd7b80:
                  lVar5 = 0;
                }
                else {
                  lVar5 = 0;
                  if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
                    plVar11 = (longlong *)
                              ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                    if ((plVar11 == (longlong *)0x0) ||
                       (((int)plVar11[2] != iVar4 || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0))))
                    goto LAB_143dd7b80;
                    lVar5 = *plVar11;
                  }
                }
                if (*(longlong *)(lVar5 + 0x1f0) == 0) {
                  plVar11 = (longlong *)(lVar5 + 0x458);
                }
                else {
                  plVar11 = (longlong *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
                }
                lVar5 = *plVar6;
                if (lVar5 != 0) {
                  lVar13 = *plVar11;
                  uVar22 = (uint)lVar5;
                  if ((int)(uVar22 & 0xffffff) < *(int *)(lVar13 + 0x10)) {
                    lVar14 = lVar13 + 0x18;
                    if (*(longlong *)(lVar13 + 0x28) != 0) {
                      lVar14 = *(longlong *)(lVar13 + 0x28);
                    }
                    if ((*(uint *)(lVar14 + (ulonglong)((uVar22 & 0xffffff) >> 5) * 4) >>
                         (uVar22 & 0x1f) & 1) != 0) {
                      lVar14 = *(longlong *)(lVar13 + 8);
                      lVar18 = (ulonglong)(uVar22 & 0xffffff) * 0x70;
                      lVar16 = lVar14 + lVar18;
                      if (((lVar16 != 0) && (*(longlong *)(lVar14 + 0x60 + lVar18) == lVar5)) &&
                         (cVar2 = *(char *)(lVar14 + 1 + lVar18), cVar2 != '\x04')) {
                        if (cVar2 == '\x01') {
                          dVar24 = *(double *)(lVar16 + 8) - *(double *)(lVar13 + 0x140);
                        }
                        else {
                          if (cVar2 == '\x03') goto LAB_143dd7b93;
                          dVar24 = *(double *)(lVar16 + 8);
                        }
                        if (0.0 < (float)dVar24) {
                          auVar25._0_8_ = (double)(float)dVar24 * 10000000.0 + 0.5;
                          auVar25._8_8_ = 0;
                          roundpd(auVar25,auVar25,1);
                          FUN_140212f8e(&local_c8);
                          goto LAB_143dd7971;
                        }
                      }
                    }
                  }
                }
              }
LAB_143dd7b93:
              uVar22 = (**(code **)(*plVar19 + 0x10))(plVar19);
              if (iVar4 == 0) {
LAB_143dd8295:
                lVar5 = 0;
              }
              else {
                lVar5 = 0;
                if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
                  plVar6 = (longlong *)
                           ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                  if ((plVar6 == (longlong *)0x0) ||
                     (((int)plVar6[2] != iVar4 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
                  goto LAB_143dd8295;
                  lVar5 = *plVar6;
                }
              }
              if (*(longlong *)(lVar5 + 0x1f0) == 0) {
                puVar12 = (undefined8 *)(lVar5 + 0x458);
              }
              else {
                puVar12 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
              }
              local_180 = *puVar12;
              local_188 = local_d0;
              if (local_d0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
                UNLOCK();
              }
              local_130 = (int)param_2[1];
              local_138 = *param_2;
              local_120 = (undefined8 *)0x0;
              local_118 = 0;
              local_194 = 0;
              FUN_1446efa72(&local_120,0,5,0x10);
              puVar12 = local_120;
              local_118 = 5;
              *local_120 = &PTR_LAB_14a1c8830;
              LOCK();
              UNLOCK();
              lVar13 = DAT_14c758608 + 1;
              lVar5 = DAT_14c758608 + 1;
              if (lVar13 == 0) {
                LOCK();
                UNLOCK();
                lVar13 = DAT_14c758608 + 2;
                lVar5 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar5;
              local_120[2] = lVar13;
              *local_120 = &PTR_FUN_14b417130;
              local_120[3] = 0;
              iVar20 = local_194;
              if (param_1 != (longlong *)0x0) {
                uVar3 = *(uint *)((longlong)param_1 + 0xc);
                *(uint *)(local_120 + 3) = uVar3;
                if ((int)uVar3 < DAT_14c9647dc) {
                  local_190 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                }
                else {
                  local_190 = 0;
                }
                iVar20 = *(int *)(local_190 + 0x10);
                if (*(int *)(local_190 + 0x10) == 0) {
                  LOCK();
                  iVar20 = DAT_14c964868 + 1;
                  UNLOCK();
                  local_194 = DAT_14c964868 + 1;
                  bVar21 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar20;
                  if (bVar21) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,local_194);
                  }
                  LOCK();
                  iVar20 = *(int *)(local_190 + 0x10);
                  bVar21 = iVar20 == 0;
                  if (bVar21) {
                    *(int *)(local_190 + 0x10) = local_194;
                    iVar20 = 0;
                  }
                  UNLOCK();
                  if (bVar21) {
                    iVar20 = local_194;
                  }
                }
              }
              local_194 = iVar20;
              *(int *)((longlong)puVar12 + 0x1c) = local_194;
              puVar12[4] = param_1;
              puVar12[5] = plVar19;
              puVar12[6] = local_188;
              *(int *)(puVar12 + 8) = local_130;
              puVar12[7] = local_138;
              plVar19 = (longlong *)(lVar8 + 0x40);
              uVar3 = *param_3;
              uVar9 = param_3[2];
              if (uVar9 != 0) {
                uVar3 = uVar9 >> 0xd ^ uVar3 - uVar9;
                uVar15 = uVar3 << 8 ^ (-0x61c88647 - uVar9) - uVar3;
                uVar17 = uVar15 >> 0xd ^ (uVar9 - uVar3) - uVar15;
                uVar9 = uVar17 >> 0xc ^ (uVar3 - uVar15) - uVar17;
                uVar3 = uVar9 << 0x10 ^ (uVar15 - uVar17) - uVar9;
                uVar15 = uVar3 >> 5 ^ (uVar17 - uVar9) - uVar3;
                uVar9 = uVar15 >> 3 ^ (uVar9 - uVar3) - uVar15;
                uVar3 = uVar9 << 10 ^ (uVar3 - uVar15) - uVar9;
                uVar3 = uVar3 >> 0xf ^ uVar15 - (uVar9 + uVar3);
              }
              uVar7 = FUN_1488f10e6(plVar19,uVar3,param_3);
              local_c8 = 0;
              local_c0 = 0;
              FUN_14487d8d8(&local_c8,&local_120);
              local_88 = 1;
              local_1a8 = local_148;
              local_148[0] = 0;
              local_144 = 0xbf800000;
              FUN_1406f4044(local_180,uVar7,&local_c8,
                            ~-(uint)(param_4 <= -1.0) & (uint)param_4 |
                            uVar22 & -(uint)(param_4 <= -1.0));
              (*(code *)(&PTR_LAB_14a1c87a0)[local_88])(&local_c8);
              if (local_118 == 0) {
LAB_143dd7ea4:
                if (local_120 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
              }
              else if (local_120 != (undefined8 *)0x0) {
                (**(code **)*local_120)(local_120,0);
                FUN_1446efa72(&local_120,0,0,0x10);
                local_118 = 0;
                goto LAB_143dd7ea4;
              }
              FUN_14047ad2e(&local_f0,&local_120,L"%Y.%m.%d-%H.%M.%S");
              if (iVar4 == 0) {
LAB_143dd829c:
                lVar5 = 0;
              }
              else {
                lVar5 = 0;
                if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
                  plVar6 = (longlong *)
                           ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                  if ((plVar6 == (longlong *)0x0) ||
                     (((int)plVar6[2] != iVar4 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
                  goto LAB_143dd829c;
                  lVar5 = *plVar6;
                }
              }
              if (*(longlong *)(lVar5 + 0x1f0) == 0) {
                plVar6 = (longlong *)(lVar5 + 0x458);
              }
              else {
                plVar6 = (longlong *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
              }
              uVar10 = *param_3;
              uVar22 = param_3[2];
              if (uVar22 != 0) {
                uVar10 = uVar22 >> 0xd ^ uVar10 - uVar22;
                uVar3 = uVar10 << 8 ^ (-0x61c88647 - uVar22) - uVar10;
                uVar9 = uVar3 >> 0xd ^ (uVar22 - uVar10) - uVar3;
                uVar22 = uVar9 >> 0xc ^ (uVar10 - uVar3) - uVar9;
                uVar10 = uVar22 << 0x10 ^ (uVar3 - uVar9) - uVar22;
                uVar3 = uVar10 >> 5 ^ (uVar9 - uVar22) - uVar10;
                uVar22 = uVar3 >> 3 ^ (uVar22 - uVar10) - uVar3;
                uVar10 = uVar22 << 10 ^ (uVar10 - uVar3) - uVar22;
                uVar10 = uVar10 >> 0xf ^ uVar3 - (uVar22 + uVar10);
              }
              lVar5 = *plVar6;
              iVar4 = FUN_1488f116c(plVar19,uVar10,param_3);
              if (iVar4 == -1) {
                lVar8 = 0;
              }
              else {
                lVar8 = (longlong)iVar4 * 0x20 + *plVar19;
              }
              plVar19 = (longlong *)(lVar8 + 0x10);
              if (lVar8 == 0) {
                plVar19 = (longlong *)0x0;
              }
              lVar8 = *plVar19;
              fVar23 = -1.0;
              if (lVar8 != 0) {
                uVar10 = (uint)lVar8;
                if ((int)(uVar10 & 0xffffff) < *(int *)(lVar5 + 0x10)) {
                  lVar13 = lVar5 + 0x18;
                  if (*(longlong *)(lVar5 + 0x28) != 0) {
                    lVar13 = *(longlong *)(lVar5 + 0x28);
                  }
                  if ((*(uint *)(lVar13 + (ulonglong)((uVar10 & 0xffffff) >> 5) * 4) >>
                       (uVar10 & 0x1f) & 1) != 0) {
                    lVar13 = *(longlong *)(lVar5 + 8);
                    lVar16 = (ulonglong)(uVar10 & 0xffffff) * 0x70;
                    lVar14 = lVar13 + lVar16;
                    if (((lVar14 != 0) && (*(longlong *)(lVar13 + 0x60 + lVar16) == lVar8)) &&
                       (cVar2 = *(char *)(lVar13 + 1 + lVar16), cVar2 != '\x04')) {
                      if (cVar2 == '\x01') {
                        fVar23 = (float)(*(double *)(lVar14 + 8) - *(double *)(lVar5 + 0x140));
                      }
                      else if (cVar2 == '\x03') {
                        fVar23 = 0.0;
                      }
                      else {
                        fVar23 = (float)*(double *)(lVar14 + 8);
                      }
                    }
                  }
                }
              }
              auVar26._0_8_ = (double)fVar23 * 10000000.0 + 0.5;
              auVar26._8_8_ = 0;
              auVar25 = roundpd(auVar26,auVar26,1);
              local_128 = (longlong)auVar25._0_8_ + local_f0;
              FUN_14047ad2e(&local_128,&local_138,L"%Y.%m.%d-%H.%M.%S");
              FUN_141881c76(local_148,&local_138);
              local_158 = *(undefined8 *)param_3;
              local_150 = param_3[2];
              local_168 = *param_2;
              local_160 = (int)param_2[1];
              FUN_1488416a9(&local_c8,&local_168,&local_158,1);
              if (*(int *)((longlong)param_1 + 0x3c) == 0) {
LAB_143dd82a3:
                uVar7 = 0;
              }
              else {
                uVar10 = *(uint *)(param_1 + 7);
                uVar7 = 0;
                if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
                  puVar12 = (undefined8 *)
                            ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                  if ((puVar12 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar12 + 2) != *(int *)((longlong)param_1 + 0x3c) ||
                      ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_143dd82a3;
                  uVar7 = *puVar12;
                }
              }
              lVar5 = FUN_14040226a(uVar7,0);
              if (lVar5 != 0) {
                FUN_140bc53f1(&local_c8,local_148,lVar5,0);
              }
              if (*(int *)((longlong)param_1 + 0x3c) == 0) {
LAB_143dd82aa:
                uVar7 = 0;
              }
              else {
                uVar10 = *(uint *)(param_1 + 7);
                uVar7 = 0;
                if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
                  puVar12 = (undefined8 *)
                            ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                  if ((puVar12 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar12 + 2) != *(int *)((longlong)param_1 + 0x3c) ||
                      ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_143dd82aa;
                  uVar7 = *puVar12;
                }
              }
              local_178[0] = local_178[0] & 0xffffff00;
              local_178[1] = 0;
              local_178[2] = 0;
              local_178[3] = 0;
              FUN_144976b9c(local_178,DAT_14cb85898);
              lVar5 = FUN_14040226a(uVar7,0);
              if (lVar5 != 0) {
                FUN_140bc53f1(local_d8 + 3,local_178,lVar5,0);
              }
              FUN_140212f8e(local_178);
              if (local_a0 != 0) {
                FUN_1400020a8();
              }
              if (local_138 != 0) {
                FUN_1400020a8();
              }
              if (local_120 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
LAB_143dd7971:
            if (local_d0 != (longlong *)0x0) {
              LOCK();
              plVar19 = local_d0 + 1;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)*plVar19 == 0) {
                (**(code **)*local_d0)(local_d0);
                LOCK();
                piVar1 = (int *)((longlong)local_d0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_d0 + 0x10))(local_d0);
                }
              }
            }
          }
        }
        break;
      }
      plVar19 = plVar19 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dd83ac FUN_143dd83ac body=41 status=ok
// SIG undefined FUN_143dd83ac(void)

void FUN_143dd83ac(void)

{
  DAT_14cb85918 = 0;
  if (DAT_14cb85910 != 0) {
    FUN_1400020a8();
  }
  FUN_145d67174();
  return;
}



// FUNCTION 143dd8436 FUN_143dd8436 body=494 status=ok
// SIG undefined FUN_143dd8436(void)

undefined8 *
FUN_143dd8436(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_44;
  undefined4 local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != (longlong *)0x0) && (lVar3 = FUN_1447210f0(param_2), lVar3 != 0)) {
    pcVar2 = *(code **)(*param_2 + 0x5e8);
    if (pcVar2 == FUN_140972dde) {
      lVar4 = param_2[0x76];
      if (lVar4 == 0) {
        pcVar2 = *(code **)(*param_2 + 0x5f8);
        if (pcVar2 == FUN_144784df4) {
          if (*(code **)(param_2[0x784] + 0x18) == (code *)&LAB_144904684) {
            if (((((*(int *)((longlong)param_2 + 0x75b4) == 0) ||
                  (uVar1 = *(uint *)(param_2 + 0xeb6), (int)uVar1 < 0)) ||
                 (DAT_14c9647dc <= (int)uVar1)) ||
                ((plVar6 = (longlong *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 plVar6 == (longlong *)0x0 ||
                 ((int)plVar6[2] != *(int *)((longlong)param_2 + 0x75b4))))) ||
               ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_143dd8578;
            if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
              lVar4 = *plVar6;
            }
            else {
              lVar4 = 0;
            }
            lVar4 = lVar4 + 0x110;
          }
          else {
            lVar4 = (**(code **)(param_2[0x784] + 0x18))(param_2 + 0x784);
          }
          if (lVar4 == 0) goto LAB_143dd8578;
          lVar4 = *(longlong *)(lVar4 + 0x20);
        }
        else {
          lVar4 = (*pcVar2)(param_2);
        }
        if (lVar4 == 0) goto LAB_143dd8578;
        lVar4 = *(longlong *)(lVar4 + 0x3b0);
        goto LAB_143dd8552;
      }
    }
    else {
      lVar4 = (*pcVar2)(param_2);
LAB_143dd8552:
      if (lVar4 == 0) goto LAB_143dd8578;
    }
    lVar5 = FUN_140082f10();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      local_3c = DAT_14cb7cb38;
      if (DAT_14cb7cb30 != 0) {
        local_3c = *(short *)(lVar4 + 0x538) + 1;
      }
      local_44 = DAT_14cb7cb30;
      local_40 = DAT_14cb7cb34;
      local_58 = param_4;
      FUN_143dd8625(param_1,lVar3,&local_44,param_3);
      goto LAB_143dd8586;
    }
  }
LAB_143dd8578:
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
LAB_143dd8586:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143dd8625 FUN_143dd8625 body=669 status=ok
// SIG undefined FUN_143dd8625(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_143dd8625(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
             longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_168 [32];
  undefined1 local_148 [4];
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [24];
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(int *)(param_5 + 8) < 2) || (lVar2 = *param_4, lVar2 == 0)) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    FUN_144928b90(&local_88,0xd);
    local_108 = *param_3;
    local_100 = *(undefined4 *)(param_3 + 1);
    FUN_144928d62(local_78,1);
    lVar1 = FUN_140149a73(param_2,0);
    if (lVar1 == 0) {
      *(undefined4 *)(param_1 + 1) = DAT_14c948620;
      *param_1 = DAT_14c948618;
    }
    else {
      FUN_14883d5c5(param_1,local_78,lVar1);
    }
    local_110 = *(undefined4 *)(param_1 + 1);
    local_118 = *param_1;
    FUN_144928d62(local_78,2);
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_c0 = local_88;
    local_b8 = local_80;
    FUN_1447715ec(&local_b0,local_78);
    local_128 = _DAT_14cb7d0e0;
    local_120 = DAT_14cb7d0e8;
    FUN_144928d62(&local_b0,3);
    FUN_141881c76(&local_f8,param_5);
    lVar1 = FUN_140149a73(param_2,0);
    if (lVar1 != 0) {
      FUN_140bc53f1(&local_c0,&local_f8,lVar1,0);
    }
    local_d8 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_f8 = local_88;
    local_f0 = local_80;
    FUN_1447715ec(&local_e8,local_78);
    local_138 = _DAT_14cb7d0f8;
    local_130 = DAT_14cb7d100;
    FUN_144928d62(&local_e8,3);
    local_148[0] = 0;
    local_144 = 0;
    local_13c = 0;
    FUN_144976b9c(local_148,lVar2);
    lVar2 = FUN_140149a73(param_2,0);
    if (lVar2 != 0) {
      FUN_140bc53f1(&local_f8,local_148,lVar2,0);
    }
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dd88c4 FUN_143dd88c4 body=580 status=ok
// SIG undefined FUN_143dd88c4(void)

undefined8 *
FUN_143dd88c4(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_44;
  undefined4 local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != (longlong *)0x0) && (lVar3 = FUN_1447210f0(param_2), lVar3 != 0)) {
    pcVar2 = *(code **)(*param_2 + 0x5e8);
    if (pcVar2 == FUN_140972dde) {
      lVar4 = param_2[0x76];
      if (lVar4 == 0) {
        pcVar2 = *(code **)(*param_2 + 0x5f8);
        if (pcVar2 == FUN_144784df4) {
          if (*(code **)(param_2[0x784] + 0x18) == (code *)&LAB_144904684) {
            if ((((*(int *)((longlong)param_2 + 0x75b4) == 0) ||
                 (uVar1 = *(uint *)(param_2 + 0xeb6), (int)uVar1 < 0)) ||
                (DAT_14c9647dc <= (int)uVar1)) ||
               (((plVar6 = (longlong *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 plVar6 == (longlong *)0x0 ||
                 ((int)plVar6[2] != *(int *)((longlong)param_2 + 0x75b4))) ||
                ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_143dd8a06;
            if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
              lVar4 = *plVar6;
            }
            else {
              lVar4 = 0;
            }
            lVar4 = lVar4 + 0x110;
          }
          else {
            lVar4 = (**(code **)(param_2[0x784] + 0x18))(param_2 + 0x784);
          }
          if (lVar4 == 0) goto LAB_143dd8a06;
          lVar4 = *(longlong *)(lVar4 + 0x20);
        }
        else {
          lVar4 = (*pcVar2)(param_2);
        }
        if (lVar4 == 0) goto LAB_143dd8a06;
        lVar4 = *(longlong *)(lVar4 + 0x3b0);
        goto LAB_143dd89e0;
      }
    }
    else {
      lVar4 = (*pcVar2)(param_2);
LAB_143dd89e0:
      if (lVar4 == 0) goto LAB_143dd8a06;
    }
    lVar5 = FUN_140082f10();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         == lVar5 + 0x30)) &&
       (((*(int *)(lVar4 + 0x4e4) != 0 &&
         ((((uVar1 = *(uint *)(lVar4 + 0x4e0), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
           (plVar6 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar6 != (longlong *)0x0)) &&
          (((int)plVar6[2] == *(int *)(lVar4 + 0x4e4) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)
           ))))) && (*plVar6 != 0)))) {
      local_3c = DAT_14cb7cb50;
      if (DAT_14cb7cb48 != 0) {
        local_3c = *(short *)(*plVar6 + 0x420) + 1;
      }
      local_44 = DAT_14cb7cb48;
      local_40 = DAT_14cb7cb4c;
      local_58 = param_4;
      FUN_143dd8625(param_1,lVar3,&local_44,param_3);
      goto LAB_143dd8a14;
    }
  }
LAB_143dd8a06:
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
LAB_143dd8a14:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143dd8b0a FUN_143dd8b0a body=146 status=ok
// SIG undefined FUN_143dd8b0a(void)

undefined8 *
FUN_143dd8b0a(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x180))(param_2);
    if (lVar1 != 0) {
      local_28 = DAT_14cb7d000;
      local_30 = DAT_14cb7cff8;
      local_38 = param_4;
      FUN_143dd8625(param_1,lVar1,&local_30,param_3);
      goto LAB_143dd8b7b;
    }
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
LAB_143dd8b7b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dd8b9d FUN_143dd8b9d body=41 status=ok
// SIG undefined FUN_143dd8b9d(void)

void FUN_143dd8b9d(void)

{
  DAT_14cb85a98 = 0;
  if (DAT_14cb85a90 != 0) {
    FUN_1400020a8();
  }
  FUN_14617367a();
  return;
}



// FUNCTION 143dd8bc6 FUN_143dd8bc6 body=1563 status=ok
// SIG undefined FUN_143dd8bc6(void)

void FUN_143dd8bc6(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  undefined4 uVar7;
  short sVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined8 ***local_190;
  undefined4 local_188;
  undefined8 ***local_180;
  undefined4 local_178;
  undefined8 ***local_170;
  undefined4 local_168;
  undefined1 local_161;
  undefined8 ***local_160;
  undefined4 local_158;
  undefined1 local_151;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 ***local_130;
  undefined4 local_128;
  undefined8 ***local_120;
  undefined1 *local_118;
  undefined **local_110;
  undefined4 local_108;
  longlong local_100;
  ulonglong uStack_f8;
  byte local_e8;
  longlong *local_b8;
  longlong local_98;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 ***local_68;
  undefined8 local_60;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_170 = (undefined8 ****)0x0;
  local_168 = 0;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (undefined1 *)*puVar3 + 1;
  if ((undefined1 *)puVar3[1] < puVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_161,1);
  }
  else {
    local_161 = *(undefined1 *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  FUN_14011750a(&local_170,param_2);
  uVar7 = local_168;
  pppuVar6 = local_170;
  switch(local_161) {
  case 0:
    local_110 = (undefined **)0x0;
    local_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    FUN_14011750a(&local_110,param_2);
    FUN_1488ee54e(param_2,&local_100);
    lVar15 = *(longlong *)(param_2[0x1a] + 0x98);
    if (lVar15 != 0) {
      lVar14 = *(longlong *)
                (*(longlong *)(param_2[0x1a] + 0x13f0) + (longlong)(int)param_2[0x1b] * 8);
      plVar9 = (longlong *)(param_1 + 0x40);
      sVar8 = (short)uVar7 + -1;
      iVar12 = (int)sVar8;
      if ((sVar8 < 0) || (*(int *)(param_1 + 0x48) <= iVar12)) {
        FUN_1488ed3a0(plVar9,iVar12 + 1);
      }
      local_68 = (undefined8 ***)FUN_14001cc68(0x30,0x10);
      *local_68 = (undefined8 **)0x0;
      local_68[1] = (undefined8 **)0x0;
      local_68[2] = (undefined8 **)0x0;
      local_68[3] = (undefined8 **)0x0;
      local_68[4] = (undefined8 **)0x0;
      local_68[5] = (undefined8 **)0x0;
      ppppuVar11 = (undefined8 ****)((longlong)iVar12 * 8 + *plVar9);
      if (ppppuVar11 != &local_68) {
        pppuVar4 = *ppppuVar11;
        *ppppuVar11 = local_68;
        local_68 = (undefined8 ***)0x0;
        FUN_14878e9a6(ppppuVar11,pppuVar4);
      }
      FUN_14878e9a6(&local_68,local_68);
      puVar5 = *(undefined8 **)(*plVar9 + (longlong)iVar12 * 8);
      uVar2 = *(uint *)(lVar15 + 0xc);
      *(uint *)((longlong)puVar5 + 0xc) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      iVar12 = *(int *)(lVar15 + 0x10);
      if (*(int *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar12 = *(int *)(lVar15 + 0x10);
        bVar16 = iVar12 == 0;
        if (bVar16) {
          *(int *)(lVar15 + 0x10) = iVar13;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar12 = iVar13;
        }
      }
      *(int *)(puVar5 + 2) = iVar12;
      if (lVar14 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
        iVar12 = 0;
      }
      else {
        uVar2 = *(uint *)(lVar14 + 0xc);
        *(uint *)((longlong)puVar5 + 0x14) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        iVar12 = *(int *)(lVar15 + 0x10);
        if (*(int *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar12 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar12;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar12 = *(int *)(lVar15 + 0x10);
          bVar16 = iVar12 == 0;
          if (bVar16) {
            *(int *)(lVar15 + 0x10) = iVar13;
            iVar12 = 0;
          }
          UNLOCK();
          if (bVar16) {
            iVar12 = iVar13;
          }
        }
      }
      *(int *)(puVar5 + 3) = iVar12;
      *puVar5 = pppuVar6;
      *(undefined4 *)(puVar5 + 1) = uVar7;
      if ((longlong)(int)uStack_f8 != 0) {
        lVar15 = (longlong)(int)uStack_f8 * 0x50;
        lVar14 = local_100;
        do {
          local_138 = DAT_14cb7d000;
          local_140 = DAT_14cb7cff8;
          local_198 = lVar14 + 0x18;
          lVar10 = FUN_143ddc9ea(param_1,&local_140,lVar14,lVar14 + 8);
          if (lVar10 != 0) {
            FUN_1488edfc4(lVar14,lVar10);
            local_148 = DAT_14cb7d000;
            local_150 = DAT_14cb7cff8;
            FUN_143dd9b42(param_1,&local_150,lVar14 + 0x18,lVar14 + 0x24);
          }
          lVar14 = lVar14 + 0x50;
          lVar15 = lVar15 + -0x50;
        } while (lVar15 != 0);
      }
      local_120 = &local_160;
      local_160 = pppuVar6;
      local_158 = uVar7;
      local_60 = &local_120;
      local_118 = &local_151;
      local_68 = (undefined8 ***)&LAB_1488f5902;
      local_130 = pppuVar6;
      local_128 = uVar7;
      FUN_1488eda1c(param_1);
    }
    FUN_1488ee481(local_100,uStack_f8 & 0xffffffff);
    lVar15 = local_100;
    goto LAB_143dd9014;
  case 1:
    local_178 = local_168;
    local_180 = local_170;
    FUN_1488edc06(param_1,&local_180,param_2);
    break;
  case 2:
    local_188 = local_168;
    local_190 = local_170;
    FUN_1488edce2(param_1,&local_190,param_2);
    break;
  case 3:
    local_118 = (undefined1 *)CONCAT44(local_118._4_4_,local_168);
    local_120 = local_170;
    local_68 = (undefined8 ****)0x0;
    local_60 = (undefined8 ****)((ulonglong)local_60._4_4_ << 0x20);
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_1488ebd87(param_2,&local_68);
    FUN_140077068(param_2,local_58);
    plVar9 = (longlong *)FUN_1488ed51e(param_1,&local_120,&local_68);
    lVar15 = local_58[0];
    if (plVar9 != (longlong *)0x0) {
      memset(&local_110,0,0x90);
      FUN_144869430(&local_110);
      local_80 = 0;
      local_110 = &PTR_FUN_149e1e050;
      local_70 = 0x7fffffffffffffff;
      local_e8 = local_e8 | 1;
      local_78 = local_58;
      FUN_1449c2eca(&local_110,0);
      (**(code **)(*plVar9 + 0x58))(plVar9,&local_110);
      (**(code **)(*plVar9 + 0x50))(plVar9);
      FUN_1447f69b6(param_1 + 0x28);
      local_110 = &PTR__purecall_149e35f70;
      if (local_b8 != (longlong *)0x0) {
        if (*local_b8 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_b8);
      }
      lVar15 = local_58[0];
      if (local_98 != 0) {
        if (*(longlong *)(local_98 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_98);
        lVar15 = local_58[0];
      }
    }
LAB_143dd9014:
    if (lVar15 != 0) {
      FUN_1400020a8();
    }
    break;
  case 4:
    local_60 = (undefined8 ****)CONCAT44(local_60._4_4_,local_168);
    local_68 = local_170;
    local_110 = (undefined **)0x0;
    local_108 = 0;
    FUN_1488ebd87(param_2,&local_110);
    FUN_143ddce00(param_1,&local_68,&local_110);
    break;
  case 5:
    FUN_1488edd7e(param_1,param_2);
    break;
  case 6:
    FUN_1488edf48(param_1,param_2);
  }
  if ((local_58[2] ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dd91e2 FUN_143dd91e2 body=202 status=ok
// SIG undefined FUN_143dd91e2(void)

void FUN_143dd91e2(undefined8 param_1,longlong *param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = 0;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined1 *)*puVar2 + 1;
  if ((undefined1 *)puVar2[1] < puVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_19,1);
  }
  else {
    local_19 = *(undefined1 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_14011750a(&local_28,param_2);
  lVar3 = *(longlong *)(param_2[0x1a] + 0x98);
  if (lVar3 != 0) {
    piVar4 = (int *)FUN_1488ed5b2(param_1,lVar3);
    if ((piVar4 != (int *)0x0) && ((*piVar4 != (int)local_28 || (piVar4[2] != local_20)))) {
      FUN_1488ee0c8(param_1,lVar3);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dd92ad FUN_143dd92ad body=64 status=ok
// SIG undefined FUN_143dd92ad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dd92ad(void)

{
  if (DAT_14cb85af8 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb85af0 = 0;
  if (DAT_14cb85ae8 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb85aa8);
  return;
}



// FUNCTION 143dd92ed FUN_143dd92ed body=41 status=ok
// SIG undefined FUN_143dd92ed(void)

void FUN_143dd92ed(void)

{
  DAT_14cb85b70 = 0;
  if (DAT_14cb85b68 != 0) {
    FUN_1400020a8();
  }
  FUN_145d67212();
  return;
}



// FUNCTION 143dd931c FUN_143dd931c body=1192 status=ok
// SIG undefined FUN_143dd931c(void)

undefined8 *
FUN_143dd931c(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
             longlong param_5)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined8 *local_e8;
  int local_e0;
  char local_d8 [12];
  int local_cc;
  undefined8 local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  uint local_b8 [16];
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = &PTR_LAB_14b4163e0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = param_2;
  param_1[4] = *param_3;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)((longlong)param_1 + 0x2c) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_4 + 1);
  param_1[7] = param_5;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x100000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  puVar8 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_5 + 8) != (undefined4 *)0x0) {
    puVar8 = *(undefined4 **)(param_5 + 8);
  }
  if (DAT_14c947fe0 == 0) {
    lVar3 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar3);
    DAT_14c947fe0 = lVar3;
  }
  FUN_140045924(DAT_14c947fe0,&local_c8,puVar8,1);
  local_b8[0] = local_b8[0] & 0xffffff00;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  FUN_144976b9c(local_b8,local_c8);
  FUN_1488ebe76(param_1,&DAT_14cb7d0f8,local_b8);
  FUN_1488ebe76(param_1,&DAT_14cb7d0b0,param_1 + 1);
  if ((char)param_2[0x23] == '\x01') {
    lVar3 = FUN_143dd97c6(param_1);
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar3 + 8) + 0x10);
      *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x18);
      param_1[0x1d] = uVar2;
    }
    if (*(char *)(param_5 + 0x78) == '\x01') {
      FUN_1488ebfe8(param_1,local_d8,&DAT_14cb85c10);
      if (local_d8[0] == '\x02') {
        fVar10 = (float)local_cc;
      }
      else {
        fVar10 = *(float *)(param_5 + 0x7c);
      }
      fVar11 = 0.0;
      if (0.0 <= fVar10) {
        fVar11 = fVar10;
      }
      if (fVar11 <= 0.0) {
        uVar2 = param_1[3];
        FUN_141881e36(local_b8,L"Finished");
        local_e8 = (undefined8 *)param_1[4];
        local_e0 = *(int *)(param_1 + 5);
        FUN_143dd9b42(uVar2,&local_e8,(longlong)param_1 + 0x2c,local_b8);
      }
      else {
        lVar3 = (**(code **)(*param_2 + 0x180))(param_2);
        *(float *)(param_1 + 0x13) = (float)((double)fVar11 + *(double *)(lVar3 + 0x6d0));
        *(undefined1 *)((longlong)param_1 + 0x9c) = 1;
        lVar3 = (**(code **)(*param_2 + 0x180))(param_2);
        if (*(longlong *)(lVar3 + 0x1f0) == 0) {
          puVar4 = (undefined8 *)(lVar3 + 0x458);
        }
        else {
          puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
        }
        uVar2 = *puVar4;
        local_e8 = (undefined8 *)0x0;
        local_e0 = 0;
        FUN_1446efa72(&local_e8,0,3,0x10);
        puVar4 = local_e8;
        local_e0 = 3;
        *local_e8 = &PTR_LAB_14a1c8830;
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
        local_e8[2] = lVar5;
        *local_e8 = &PTR_FUN_14b417280;
        local_e8[3] = 0;
        iVar6 = 0;
        if (param_2 != (longlong *)0x0) {
          uVar1 = *(uint *)((longlong)param_2 + 0xc);
          *(uint *)(local_e8 + 3) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar3 = 0;
          }
          iVar6 = *(int *)(lVar3 + 0x10);
          if (*(int *)(lVar3 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar9 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar9) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar6 = *(int *)(lVar3 + 0x10);
            bVar9 = iVar6 == 0;
            if (bVar9) {
              *(int *)(lVar3 + 0x10) = iVar7;
              iVar6 = 0;
            }
            UNLOCK();
            if (bVar9) {
              iVar6 = iVar7;
            }
          }
        }
        *(int *)((longlong)puVar4 + 0x1c) = iVar6;
        puVar4[4] = param_1;
        local_b8[0] = 0;
        local_b8[1] = 0;
        local_b8[2] = 0;
        FUN_14487d8d8(local_b8,&local_e8);
        local_78 = 1;
        local_f8 = local_c0;
        local_c0[0] = 0;
        local_bc = 0xbf800000;
        FUN_1406f4044(uVar2,param_1 + 0x12,local_b8,fVar11);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(local_b8);
        if (local_e0 != 0) {
          if (local_e8 == (undefined8 *)0x0) goto LAB_143dd94aa;
          (**(code **)*local_e8)(local_e8,0);
          FUN_1446efa72(&local_e8,0,0,0x10);
          local_e0 = 0;
        }
        if (local_e8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_143dd94aa:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143dd97c6 FUN_143dd97c6 body=543 status=ok
// SIG undefined FUN_143dd97c6(void)

longlong FUN_143dd97c6(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  int local_44 [3];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = *(longlong **)(param_1 + 0xe0);
  if (plVar6 != (longlong *)0x0) {
    iVar4 = (int)plVar6[1];
    do {
      if (iVar4 == 0) goto LAB_143dd9827;
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar11 = iVar4 == iVar3;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar11);
    lVar10 = *(longlong *)(param_1 + 0xd8);
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    if (lVar10 != 0) goto LAB_143dd98a2;
  }
LAB_143dd9827:
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x114);
  if (iVar4 == 0) {
LAB_143dd995f:
    uVar7 = 0;
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x110);
    uVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar8 == (undefined8 *)0x0) ||
         ((*(int *)(puVar8 + 2) != iVar4 || ((*(uint *)(puVar8 + 1) & 0x10200000) != 0))))
      goto LAB_143dd995f;
      uVar7 = *puVar8;
    }
  }
  lVar10 = 0;
  lVar5 = FUN_14040226a(uVar7,0);
  if (lVar5 == 0) goto LAB_143dd98a2;
  plVar6 = (longlong *)FUN_14039ffc6(lVar5);
  if (plVar6 != (longlong *)0x0) {
    FUN_1488ebfe8(param_1,local_38,&DAT_14cb7d0e0);
    FUN_1403a0728(local_38,&local_50);
    local_60 = local_50;
    FUN_1401533ba(local_44,&local_60,1);
    if (local_44[0] != 0) {
      (**(code **)(*plVar6 + 0x78))(plVar6,&local_60,local_44);
      plVar6 = local_58;
      lVar10 = local_60;
      if (local_58 == (longlong *)0x0) {
        *(longlong *)(param_1 + 0xd8) = local_60;
        plVar9 = *(longlong **)(param_1 + 0xe0);
        if (plVar9 != (longlong *)0x0) {
LAB_143dd9979:
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
          *(longlong **)(param_1 + 0xe0) = plVar6;
          if (plVar6 != (longlong *)0x0) goto LAB_143dd9991;
        }
      }
      else {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
        *(longlong *)(param_1 + 0xd8) = local_60;
        if (*(longlong **)(param_1 + 0xe0) != local_58) {
          LOCK();
          *(int *)((longlong)local_58 + 0xc) = *(int *)((longlong)local_58 + 0xc) + 1;
          UNLOCK();
          plVar9 = *(longlong **)(param_1 + 0xe0);
          if (plVar9 != (longlong *)0x0) goto LAB_143dd9979;
          *(longlong **)(param_1 + 0xe0) = local_58;
        }
LAB_143dd9991:
        LOCK();
        plVar9 = plVar6 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_58 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
      goto LAB_143dd98a2;
    }
  }
  lVar10 = 0;
LAB_143dd98a2:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 143dd99e6 FUN_143dd99e6 body=347 status=ok
// SIG undefined FUN_143dd99e6(void)

void FUN_143dd99e6(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_138 [40];
  longlong local_110;
  undefined4 local_108;
  undefined1 local_100 [16];
  longlong local_f0;
  undefined4 local_e8;
  undefined **local_e0 [5];
  byte local_b8;
  longlong *local_88;
  longlong local_68;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  (**(code **)(*param_1 + 0x38))();
  if (*(char *)(param_1[3] + 0x118) == '\x01') {
    FUN_146866eea(local_e0);
    local_b8 = local_b8 | 4;
    (**(code **)(*param_1 + 0x58))(param_1,local_e0);
    local_f0 = param_1[4];
    local_e8 = (undefined4)param_1[5];
    FUN_1488ec91c(param_1[3],&local_f0,(longlong)param_1 + 0x2c,local_38);
    cVar2 = (**(code **)(*param_1 + 0x20))(param_1);
    if (cVar2 != '\0') {
      lVar1 = param_1[3];
      FUN_141881e36(local_100,L"Finished");
      local_110 = param_1[4];
      local_108 = (undefined4)param_1[5];
      FUN_143dd9b42(lVar1,&local_110,(longlong)param_1 + 0x2c,local_100);
    }
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    local_e0[0] = &PTR__purecall_149e35f70;
    if (local_88 != (longlong *)0x0) {
      if (*local_88 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_88);
    }
    if (local_68 != 0) {
      if (*(longlong *)(local_68 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_68);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dd9b42 FUN_143dd9b42 body=266 status=ok
// SIG undefined FUN_143dd9b42(void)

void FUN_143dd9b42(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined8 **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_70 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 1);
  plVar2 = (longlong *)FUN_1488ed51e();
  if (plVar2 != (longlong *)0x0) {
    cVar1 = FUN_1403218c0(plVar2 + 1,param_4);
    if (cVar1 == '\0') {
      (**(code **)(*plVar2 + 8))(plVar2,param_4);
      FUN_1447f69b6(param_1 + 0x28);
      if (*(char *)(param_1 + 0x118) == '\x01') {
        local_88 = *(undefined4 *)(param_3 + 1);
        local_48 = &local_90;
        local_90 = *param_3;
        local_84 = *param_4;
        uStack_80 = param_4[1];
        uStack_7c = param_4[2];
        uStack_78 = param_4[3];
        local_a0 = *param_2;
        local_50 = &local_a0;
        local_98 = *(undefined4 *)(param_2 + 1);
        local_38 = &local_50;
        local_40 = &LAB_1488f558a;
        local_60 = *param_2;
        local_58 = *(undefined4 *)(param_2 + 1);
        FUN_1488eda1c(param_1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dd9c4e FUN_143dd9c4e body=402 status=ok
// SIG undefined FUN_143dd9c4e(void)

ulonglong FUN_143dd9c4e(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 unaff_R14;
  ulonglong uVar7;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 local_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  undefined7 uVar8;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar1 = *(int *)((longlong)param_3 + 0xc);
  FUN_1405d7ab2(*param_3,(int)param_3[1]);
  *(undefined4 *)(param_3 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_3 + 0xc) != 0)) {
    FUN_140f8dd3e(param_3,0);
  }
  uVar8 = (undefined7)((ulonglong)unaff_R14 >> 8);
  uVar7 = CONCAT71(uVar8,1);
  local_b0 = param_3;
  FUN_1488ecb34(param_3,(int)param_2[1],1);
  if (0 < (int)param_2[1]) {
    uVar7 = CONCAT71(uVar8,1);
    lVar4 = 0x10;
    lVar5 = 0;
    lVar6 = 0;
    do {
      local_a0 = *(undefined4 *)(*param_2 + 8 + lVar5);
      local_a8 = *(undefined8 *)(*param_2 + lVar5);
      lVar3 = FUN_140ca9be8(param_1,&local_a8);
      if (lVar3 == 0) {
        local_98 = 0;
        uStack_94 = 0;
        local_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        local_70 = 0;
        uStack_68 = 0;
        uVar7 = 0;
      }
      else {
        FUN_14096c63a(lVar3 + 0x10,&local_98);
        cVar2 = FUN_1401144ce(&local_98);
        if (cVar2 == '\0') {
          uVar7 = 0;
        }
        else {
          lVar3 = *local_b0;
          *(undefined4 *)(lVar3 + -8 + lVar4) = local_90;
          *(ulonglong *)(lVar3 + -0x10 + lVar4) = CONCAT44(uStack_94,CONCAT22(uStack_96,local_98));
          FUN_1447715ec(lVar3 + lVar4,&local_88);
        }
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x38;
      lVar5 = lVar5 + 0xc;
    } while (lVar6 < (int)param_2[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 143dd9df2 FUN_143dd9df2 body=159 status=ok
// SIG undefined FUN_143dd9df2(void)

void FUN_143dd9df2(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x110) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x110) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0x114) = iVar2;
  return;
}



// FUNCTION 143dd9e92 FUN_143dd9e92 body=41 status=ok
// SIG undefined FUN_143dd9e92(void)

void FUN_143dd9e92(longlong param_1)

{
  FUN_143dd9ebc(param_1,0);
  FUN_1488f312a(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x110) = 0;
  return;
}



// FUNCTION 143dd9ebc FUN_143dd9ebc body=1388 status=ok
// SIG undefined FUN_143dd9ebc(void)

void FUN_143dd9ebc(longlong param_1,char param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)FUN_1488ecc96();
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  iVar6 = *(int *)(param_1 + 0x4c);
  FUN_145cc5775(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((iVar6 < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    FUN_1488f346c(param_1 + 0x40);
  }
  iVar6 = *(int *)(param_1 + 0xac);
  FUN_145cc574a(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if ((iVar6 < 0) && (*(int *)(param_1 + 0xac) != 0)) {
    FUN_1488f349c(param_1 + 0xa0);
  }
  iVar6 = *(int *)(param_1 + 0xbc);
  FUN_145cc57d5(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((iVar6 < 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    FUN_1488f34cc(param_1 + 0xb0);
  }
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x119) == '\0') goto LAB_143dda372;
    FUN_140457ffc(&DAT_14cadbeb0,param_1);
    FUN_140457ffc(&DAT_14cadbec8,param_1);
    FUN_140457ffc(&DAT_14cb71688,param_1);
    FUN_140457ffc(&DAT_14cb716a0,param_1);
    FUN_140457ffc(&DAT_14cb71658,param_1);
    FUN_140457ffc(&DAT_14cb71670,param_1);
    if (*(int *)(param_1 + 0x114) != 0) {
      uVar1 = *(uint *)(param_1 + 0x110);
      uVar5 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143dda36c;
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 != (longlong *)0x0) &&
         (((((int)plVar3[2] == *(int *)(param_1 + 0x114) &&
            ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (lVar8 = *plVar3, lVar8 != 0)) &&
          (plVar3 = (longlong *)(**(code **)(*(longlong *)(lVar8 + 0x1c0) + 0x10))(lVar8 + 0x1c0),
          plVar3 != (longlong *)0x0)))) {
        lVar8 = (**(code **)(*plVar3 + 0x2b8))(plVar3);
        if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0xe0) != 0)) {
          FUN_140457ffc(*(longlong *)(lVar8 + 0xe0) + 8,param_1);
        }
        lVar8 = (**(code **)(*plVar3 + 0x2b8))(plVar3);
        if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0xf8) != 0)) {
          FUN_140457ffc(*(longlong *)(lVar8 + 0xf8) + 0x78,param_1);
        }
      }
    }
    uVar5 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x119) != '\0') goto LAB_143dda372;
    FUN_1488eccc8(&local_48,param_1);
    FUN_1488ecdb8(&local_48,param_1);
    FUN_1488ecea8(&DAT_14cb71688,&local_48,param_1,FUN_143dda786);
    FUN_1488ecea8(&DAT_14cb716a0,&local_48,param_1,FUN_143ddaad2);
    FUN_1488ecf9e(&DAT_14cb71658,&local_48,param_1,FUN_143ddab86);
    FUN_1488ecf9e(&DAT_14cb71670,&local_48,param_1,FUN_143ddae0e);
    if (plVar3 != (longlong *)0x0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b3e6310;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_48[2] = lVar4;
      *local_48 = &PTR_FUN_14b417520;
      local_48[3] = 0;
      iVar6 = 0;
      if (param_1 != 0) {
        uVar1 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_48 + 3) = uVar1;
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
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
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
      *(int *)((longlong)puVar2 + 0x1c) = iVar6;
      puVar2[4] = FUN_143ddb028;
      local_50 = DAT_14cb7d000;
      local_58 = DAT_14cb7cff8;
      (**(code **)(*plVar3 + 0x50))(plVar3,&local_58,&local_48);
      if (local_40 != 0) {
        if (local_48 == (undefined8 *)0x0) goto LAB_143dda15a;
        (**(code **)*local_48)(local_48,0);
        FUN_1446efa72(&local_48,0,0,0x10);
        local_40 = 0;
      }
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_143dda15a:
    uVar5 = 1;
    if ((((*(int *)(param_1 + 0x114) != 0) && (uVar1 = *(uint *)(param_1 + 0x110), -1 < (int)uVar1))
        && ((int)uVar1 < DAT_14c9647dc)) &&
       (((plVar3 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x114))) &&
        (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
         ((lVar8 = *plVar3, lVar8 != 0 &&
          (plVar3 = (longlong *)(**(code **)(*(longlong *)(lVar8 + 0x1c0) + 0x10))(lVar8 + 0x1c0),
          plVar3 != (longlong *)0x0)))))))) {
      lVar8 = (**(code **)(*plVar3 + 0x2b8))(plVar3);
      if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0xe0) != 0)) {
        FUN_1488ed094(*(longlong *)(lVar8 + 0xe0) + 8,&local_48,param_1);
      }
      lVar8 = (**(code **)(*plVar3 + 0x2b8))(plVar3);
      if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0xf8) != 0)) {
        FUN_1488ed18a(*(longlong *)(lVar8 + 0xf8) + 0x78,&local_48,param_1);
      }
    }
  }
LAB_143dda36c:
  *(undefined1 *)(param_1 + 0x119) = uVar5;
LAB_143dda372:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dda42a FUN_143dda42a body=326 status=ok
// SIG undefined FUN_143dda42a(void)

void FUN_143dda42a(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  code *local_60;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 != 0) {
    if (DAT_14cb61cd0 == 0) {
      local_80 = &local_60;
      local_60 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1463b31ae;
      local_88 = &LAB_1486dca4f;
      local_90 = &LAB_1464f50a6;
      local_98 = &DAT_149e063b2;
      local_a0 = 0;
      local_a8 = 0x10000004;
      local_b0 = 8;
      local_b8 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
      local_48 = 0;
      local_38 = &PTR_LAB_14b417670;
      local_58 = FUN_143de216a;
      local_30 = param_1;
      local_28 = param_3;
      FUN_143ddb962(param_1,param_3);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dda572 FUN_143dda572 body=530 status=ok
// SIG undefined FUN_143dda572(void)

void FUN_143dda572(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_50;
  undefined4 local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 == 0) goto LAB_143dda5ca;
  if (DAT_14cb61cd0 == 0) {
    local_70 = &local_40;
    local_40 = FUN_141030f22;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_1463b31ae;
    local_78 = &LAB_1486dca4f;
    local_80 = &LAB_1464f50a6;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000004;
    local_a0 = 8;
    local_a8 = 0xd70;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
  }
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30)) goto LAB_143dda5ca;
  if (*(longlong *)(param_3 + 0x398) != 0) {
    FUN_140082f10();
  }
  puVar4 = (undefined8 *)FUN_1488ed5b2(param_1,param_3);
  if (puVar4 == (undefined8 *)0x0) goto LAB_143dda5ca;
  iVar1 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    lVar7 = 0;
    do {
      plVar5 = *(longlong **)(lVar2 + lVar7);
      (**(code **)(*plVar5 + 0x18))(plVar5,param_3);
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  plVar5 = (longlong *)FUN_1488ecc96();
  if (plVar5 != (longlong *)0x0) {
    local_48 = *(undefined4 *)(puVar4 + 1);
    local_50 = *puVar4;
    (**(code **)(*plVar5 + 0x40))();
  }
  if (*(longlong *)(param_3 + 0x398) == 0) {
LAB_143dda6b2:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_140082f10();
    lVar2 = *(longlong *)(param_3 + 0x398);
    if (lVar2 == 0) goto LAB_143dda6b2;
    lVar6 = 0;
    if ((lVar7 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) {
      if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
          lVar7 + 0x30)) goto LAB_143dda6b2;
      lVar6 = (longlong)*(short *)(lVar2 + 0x538);
    }
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar6 * 8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar6 * 8) = 0;
    FUN_14878e9a6();
  }
LAB_143dda5ca:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dda786 FUN_143dda786 body=842 status=ok
// SIG undefined FUN_143dda786(void)

void FUN_143dda786(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 **ppuVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar10 = (int)*(short *)(param_2 + 0x420);
  if ((*(short *)(param_2 + 0x420) < 0) || (*(int *)(param_1 + 0xa8) <= iVar10)) {
    FUN_1488ed62a((longlong *)(param_1 + 0xa0),iVar10 + 1);
  }
  ppuVar7 = (undefined8 **)((longlong)iVar10 * 8 + *(longlong *)(param_1 + 0xa0));
  local_50 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *local_50 = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  if (ppuVar7 != &local_50) {
    puVar2 = *ppuVar7;
    *ppuVar7 = local_50;
    local_50 = (undefined8 *)0x0;
    FUN_14878e9e0(ppuVar7,puVar2);
  }
  FUN_14878e9e0(&local_50,local_50);
  puVar2 = *ppuVar7;
  if (param_2 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    iVar8 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)((longlong)puVar2 + 0xc) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar11 = iVar8 == 0;
      if (bVar11) {
        *(int *)(lVar9 + 0x10) = iVar6;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar8 = iVar6;
      }
    }
  }
  *(int *)(puVar2 + 2) = iVar8;
  iVar8 = DAT_14cb7cb4c;
  iVar6 = DAT_14cb7cb50;
  if (DAT_14cb7cb48 != 0) {
    iVar6 = iVar10 + 1;
  }
  piVar3 = (int *)*ppuVar7;
  *piVar3 = DAT_14cb7cb48;
  piVar3[1] = iVar8;
  piVar3[2] = iVar6;
  plVar4 = (longlong *)FUN_1488ecc96(param_1);
  if (plVar4 != (longlong *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    puVar2 = local_50;
    local_48 = 3;
    *local_50 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_50[2] = lVar5;
    *local_50 = &PTR_FUN_14b417520;
    local_50[3] = 0;
    iVar10 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_50 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar10 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar10 = *(int *)(lVar9 + 0x10);
        bVar11 = iVar10 == 0;
        if (bVar11) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar10 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar10;
    puVar2[4] = FUN_143ddb028;
    local_58 = *(undefined4 *)(*ppuVar7 + 1);
    local_60 = **ppuVar7;
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_60,&local_50);
    if (local_48 != 0) {
      if (local_50 == (undefined8 *)0x0) goto LAB_143dda9e0;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143dda9e0:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ddaad2 FUN_143ddaad2 body=179 status=ok
// SIG undefined FUN_143ddaad2(void)

void FUN_143ddaad2(longlong param_1,longlong param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(ushort *)(param_2 + 0x420);
  if (((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0xa8))) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar1 * 8) != 0)) {
    lVar4 = (longlong)(int)(short)uVar1;
    plVar3 = (longlong *)FUN_1488ecc96(param_1);
    if (plVar3 != (longlong *)0x0) {
      puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + lVar4 * 8);
      local_20 = *(undefined4 *)(puVar2 + 1);
      local_28 = *puVar2;
      (**(code **)(*plVar3 + 0x40))(plVar3);
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar4 * 8) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + lVar4 * 8) = 0;
      FUN_14878e9e0();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ddab86 FUN_143ddab86 body=647 status=ok
// SIG undefined FUN_143ddab86(void)

void FUN_143ddab86(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
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
  undefined8 local_a8;
  undefined4 local_a0;
  code *local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 *local_68;
  code **local_60;
  undefined1 *local_58;
  undefined8 **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar7 = FUN_1401b2ade(param_3);
  if (lVar7 != 0) {
    if (DAT_14cb61cd0 == 0) {
      local_c0 = &local_98;
      local_98 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_1463b31ae;
      local_c8 = &LAB_1486dca4f;
      local_d0 = &LAB_1464f50a6;
      local_d8 = &DAT_149e063b2;
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 8;
      local_f8 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
      puVar8 = (undefined8 *)FUN_1488ed5b2(param_1,lVar7);
      if (puVar8 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)
                  (*(longlong *)(param_1 + 0xa0) + (longlong)*(short *)(param_2 + 0x420) * 8);
        lVar9 = puVar2[3];
        iVar1 = *(int *)(puVar2 + 4);
        iVar5 = 0;
        if ((longlong)iVar1 != 0) {
          lVar10 = 0;
          do {
            (**(code **)(**(longlong **)(lVar9 + lVar10) + 0x10))
                      (*(longlong **)(lVar9 + lVar10),lVar7);
            lVar10 = lVar10 + 8;
          } while ((longlong)iVar1 * 8 != lVar10);
          lVar9 = puVar2[3];
          iVar5 = *(int *)(puVar2 + 4);
        }
        local_88 = 0;
        uStack_80 = 0;
        local_98 = (code *)*puVar2;
        local_90 = *(undefined4 *)(puVar2 + 1);
        if (iVar5 != 0) {
          lVar7 = 0;
          do {
            uVar4 = uStack_80;
            uVar3 = *(undefined8 *)(lVar9 + lVar7);
            lVar10 = (longlong)(int)uStack_80;
            uVar6 = (int)uStack_80 + 1;
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
            if (uStack_80._4_4_ < uVar6) {
              FUN_1488ee822(&local_88,uVar4 & 0xffffffff);
            }
            FUN_1488ed79c(lVar10 * 0x50 + local_88,uVar3);
            lVar7 = lVar7 + 8;
          } while ((longlong)iVar5 * 8 != lVar7);
        }
        local_a0 = *(undefined4 *)(puVar8 + 1);
        local_68 = &local_a8;
        local_a8 = *puVar8;
        local_50 = &local_68;
        local_60 = &local_98;
        local_58 = &LAB_1488f523a;
        local_78 = local_a8;
        local_70 = local_a0;
        FUN_1488eda1c(param_1);
        FUN_1488ee481(local_88,uStack_80 & 0xffffffff);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ddae0e FUN_143ddae0e body=537 status=ok
// SIG undefined FUN_143ddae0e(void)

void FUN_143ddae0e(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
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
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  code *local_50;
  undefined8 **local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != 0) {
    uVar1 = *(ushort *)(param_2 + 0x420);
    if (((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0xa8))) &&
       (puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar1 * 8),
       puVar3 != (undefined8 *)0x0)) {
      uVar1 = *(ushort *)(param_3 + 0x538);
      lVar6 = FUN_1401b2ade(param_3);
      if (lVar6 != 0) {
        if (DAT_14cb61cd0 == 0) {
          local_b0 = &local_50;
          local_50 = FUN_141030f22;
          local_a0 = FUN_14081d0ea;
          local_a8 = &LAB_1463b31ae;
          local_b8 = &LAB_1486dca4f;
          local_c0 = &LAB_1464f50a6;
          local_c8 = &DAT_149e063b2;
          local_d0 = 0;
          local_d8 = 0x10000004;
          local_e0 = 8;
          local_e8 = 0xd70;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
        }
        if (((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) &&
           (iVar2 = *(int *)(puVar3 + 4), (longlong)iVar2 != 0)) {
          lVar4 = puVar3[3];
          lVar7 = 0;
          do {
            (**(code **)(**(longlong **)(lVar4 + lVar7) + 0x18))
                      (*(longlong **)(lVar4 + lVar7),lVar6);
            lVar7 = lVar7 + 8;
          } while ((longlong)iVar2 * 8 != lVar7);
        }
      }
      if (((-1 < (short)uVar1) && ((int)(uint)uVar1 < *(int *)(param_1 + 0x48))) &&
         (puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x40) + (ulonglong)(uint)uVar1 * 8),
         puVar5 != (undefined8 *)0x0)) {
        local_78 = *(undefined4 *)(puVar3 + 1);
        local_58 = &local_80;
        local_80 = *puVar3;
        local_90 = *puVar5;
        local_60 = &local_90;
        local_88 = *(undefined4 *)(puVar5 + 1);
        local_48 = &local_60;
        local_50 = (code *)&LAB_1488f5334;
        local_70 = local_90;
        local_68 = local_88;
        FUN_1488eda1c(param_1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ddb028 FUN_143ddb028 body=1539 status=ok
// SIG undefined FUN_143ddb028(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ddb028(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 *local_c0;
  int local_b8;
  longlong local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 *local_60;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (((*(int *)(param_2 + 0x10) == 0) || (iVar9 = *(int *)(param_2 + 0x14), iVar9 == 0)) ||
     (*(int *)(param_2 + 0x10) == DAT_14c948000)) {
    local_c8 = DAT_14c948620;
    local_d0 = DAT_14c948618;
LAB_143ddb4a6:
    local_d8 = DAT_14c948620;
    local_e0 = DAT_14c948618;
  }
  else {
    if ((iVar9 == 1) || (iVar9 < 2)) {
      local_c8 = DAT_14c948620;
      local_d0 = DAT_14c948618;
    }
    else {
      local_c8 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + 0x14);
      local_d0 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0xc);
    }
    lVar3 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar3 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar9) {
      lVar3 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar9 == 1) || (iVar9 < 3)) goto LAB_143ddb4a6;
    local_d8 = *(undefined4 *)(lVar3 + 0x20);
    local_e0 = *(undefined8 *)(lVar3 + 0x18);
  }
  local_e8 = local_c8;
  local_f0 = local_d0;
  lVar3 = FUN_1488ed51e(param_1,&local_f0,&local_e0);
  if (lVar3 == 0) {
    plVar4 = (longlong *)FUN_1488ecc96(param_1);
    local_118 = _DAT_14cb7d0e0;
    local_110 = DAT_14cb7d0e8;
    local_128 = local_e0;
    local_120 = local_d8;
    local_138 = local_d0;
    local_130 = local_c8;
    FUN_14884572d(&local_88);
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_148,&local_88);
    if ((char)local_148 != '\0') {
      local_158 = _DAT_14cb7d0f8;
      local_150 = DAT_14cb7d100;
      local_168 = local_e0;
      local_160 = local_d8;
      local_178 = local_d0;
      local_170 = local_c8;
      FUN_14884572d(&local_c0);
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_188,&local_c0);
      if ((char)local_188 != '\0') {
        FUN_1403a0728(&local_188,local_108);
        local_190 = local_c8;
        local_198 = local_d0;
        local_1a8 = &local_e0;
        FUN_143ddc9ea(param_1,&local_198,local_108,&local_148);
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    iVar9 = *(int *)(param_2 + 0x10);
    piVar8 = (int *)&DAT_14c948618;
    piVar5 = &DAT_14c948620;
    if (((iVar9 != 0) && (3 < *(int *)(param_2 + 0x14))) && (iVar9 != DAT_14c948000)) {
      piVar8 = (int *)(*(longlong *)(param_2 + 0x28) + 0x24);
      piVar5 = (int *)(*(longlong *)(param_2 + 0x28) + 0x2c);
    }
    if ((*piVar8 == DAT_14cb7d0b0) && (*piVar5 == DAT_14cb7d0b8)) {
      local_f8 = local_c8;
      local_100 = local_d0;
      FUN_143dd9b42(param_1,&local_100,&local_e0,param_2 + 0x38);
      goto LAB_143ddb460;
    }
    piVar8 = (int *)&DAT_14c948618;
    piVar5 = &DAT_14c948620;
    if (((iVar9 != 0) && (3 < *(int *)(param_2 + 0x14))) && (iVar9 != DAT_14c948000)) {
      piVar8 = (int *)(*(longlong *)(param_2 + 0x28) + 0x24);
      piVar5 = (int *)(*(longlong *)(param_2 + 0x28) + 0x2c);
    }
    if (((*piVar8 != DAT_14cb7d0c8) || (*piVar5 != DAT_14cb7d0d0)) ||
       (lVar3 = (**(code **)(*param_1 + 0x180))(param_1), lVar3 == 0)) goto LAB_143ddb460;
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar6 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar6;
    local_148 = local_d0;
    local_140 = local_c8;
    local_188 = local_e0;
    local_180 = local_d8;
    local_c0 = (undefined8 *)0x0;
    local_b8 = 0;
    FUN_1446efa72(&local_c0,0,4,0x10);
    puVar6 = local_c0;
    local_b8 = 4;
    *local_c0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_c0[2] = lVar7;
    *local_c0 = &PTR_FUN_14b417690;
    local_c0[3] = 0;
    iVar9 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_c0 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar9 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar9 = *(int *)(lVar3 + 0x10);
        bVar11 = iVar9 == 0;
        if (bVar11) {
          *(int *)(lVar3 + 0x10) = iVar10;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar9 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar6 + 0x1c) = iVar9;
    puVar6[4] = param_1;
    puVar6[5] = local_148;
    *(undefined4 *)(puVar6 + 6) = local_140;
    *(undefined8 *)((longlong)puVar6 + 0x34) = local_188;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = local_180;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_c0);
    local_48 = 1;
    FUN_14016fdb0(uVar2,local_108,&local_88);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    local_60 = local_c0;
    if (local_b8 != 0) {
      if (local_c0 == (undefined8 *)0x0) goto LAB_143ddb460;
      (**(code **)*local_c0)(local_c0,0);
      FUN_1446efa72(&local_c0,0,0,0x10);
      local_b8 = 0;
      local_60 = local_c0;
    }
  }
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ddb460:
  if ((local_38 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ddb62c FUN_143ddb62c body=800 status=ok
// SIG undefined FUN_143ddb62c(void)

void FUN_143ddb62c(longlong param_1,char param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((byte)(param_2 - 5U) < 2) {
    iVar2 = *param_3;
    iVar3 = param_3[2];
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_78 = param_1;
    if ((longlong)*(int *)(param_1 + 0x48) != 0) {
      plVar13 = *(longlong **)(param_1 + 0x40);
      plVar12 = plVar13 + *(int *)(param_1 + 0x48);
      local_70 = plVar12;
      do {
        lVar5 = *plVar13;
        if ((lVar5 != 0) && (iVar4 = *(int *)(lVar5 + 0x28), (longlong)iVar4 != 0)) {
          lVar5 = *(longlong *)(lVar5 + 0x20);
          lVar10 = 0;
          do {
            uVar7 = uStack_50;
            lVar6 = *(longlong *)(lVar5 + lVar10);
            if (((*(char *)(*(longlong *)(lVar6 + 0x38) + 0x50) == '\x01') &&
                (*(int *)(lVar6 + 0xe8) == iVar2)) && (*(int *)(lVar6 + 0xf0) == iVar3)) {
              lVar9 = (longlong)(int)uStack_50;
              uVar8 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
              if (uStack_50._4_4_ < uVar8) {
                FUN_1488ee4ba(&local_58,uVar7 & 0xffffffff);
                plVar12 = local_70;
              }
              *(undefined4 *)(local_58 + lVar9 * 3 + 1) = *(undefined4 *)(lVar6 + 0x28);
              local_58[lVar9 * 3] = *(undefined8 *)(lVar6 + 0x20);
              *(undefined8 *)((longlong)local_58 + lVar9 * 0x18 + 0xc) =
                   *(undefined8 *)(lVar6 + 0x2c);
              *(undefined4 *)((longlong)local_58 + lVar9 * 0x18 + 0x14) =
                   *(undefined4 *)(lVar6 + 0x34);
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)iVar4 * 8 != lVar10);
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar12);
    }
    if ((longlong)*(int *)(local_78 + 0xa8) != 0) {
      plVar13 = *(longlong **)(local_78 + 0xa0);
      plVar12 = plVar13 + *(int *)(local_78 + 0xa8);
      local_70 = plVar12;
      do {
        lVar5 = *plVar13;
        if ((lVar5 != 0) && (iVar4 = *(int *)(lVar5 + 0x20), (longlong)iVar4 != 0)) {
          lVar5 = *(longlong *)(lVar5 + 0x18);
          lVar10 = 0;
          do {
            uVar7 = uStack_50;
            lVar6 = *(longlong *)(lVar5 + lVar10);
            if (((*(char *)(*(longlong *)(lVar6 + 0x38) + 0x50) == '\x01') &&
                (*(int *)(lVar6 + 0xe8) == iVar2)) && (*(int *)(lVar6 + 0xf0) == iVar3)) {
              lVar9 = (longlong)(int)uStack_50;
              uVar8 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
              if (uStack_50._4_4_ < uVar8) {
                FUN_1488ee4ba(&local_58,uVar7 & 0xffffffff);
                plVar12 = local_70;
              }
              *(undefined4 *)(local_58 + lVar9 * 3 + 1) = *(undefined4 *)(lVar6 + 0x28);
              local_58[lVar9 * 3] = *(undefined8 *)(lVar6 + 0x20);
              *(undefined8 *)((longlong)local_58 + lVar9 * 0x18 + 0xc) =
                   *(undefined8 *)(lVar6 + 0x2c);
              *(undefined4 *)((longlong)local_58 + lVar9 * 0x18 + 0x14) =
                   *(undefined4 *)(lVar6 + 0x34);
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)iVar4 * 8 != lVar10);
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar12);
    }
    iVar4 = *(int *)(local_78 + 0xb8);
    if ((longlong)iVar4 != 0) {
      lVar5 = *(longlong *)(local_78 + 0xb0);
      lVar10 = 0;
      do {
        uVar7 = uStack_50;
        lVar6 = *(longlong *)(lVar5 + lVar10);
        if (((*(char *)(*(longlong *)(lVar6 + 0x38) + 0x50) == '\x01') &&
            (*(int *)(lVar6 + 0xe8) == iVar2)) && (*(int *)(lVar6 + 0xf0) == iVar3)) {
          lVar9 = (longlong)(int)uStack_50;
          uVar8 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
          if (uStack_50._4_4_ < uVar8) {
            FUN_1488ee4ba(&local_58,uVar7 & 0xffffffff);
          }
          *(undefined4 *)(local_58 + lVar9 * 3 + 1) = *(undefined4 *)(lVar6 + 0x28);
          local_58[lVar9 * 3] = *(undefined8 *)(lVar6 + 0x20);
          *(undefined8 *)((longlong)local_58 + lVar9 * 0x18 + 0xc) = *(undefined8 *)(lVar6 + 0x2c);
          *(undefined4 *)((longlong)local_58 + lVar9 * 0x18 + 0x14) = *(undefined4 *)(lVar6 + 0x34);
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar4 * 8 != lVar10);
    }
    lVar5 = local_78;
    if ((longlong)(int)uStack_50 != 0) {
      puVar1 = local_58 + (longlong)(int)uStack_50 * 3;
      puVar11 = local_58;
      do {
        local_60 = *(undefined4 *)(puVar11 + 1);
        local_68 = *puVar11;
        FUN_143ddce00(lVar5,&local_68,(longlong)puVar11 + 0xc);
        puVar11 = puVar11 + 3;
      } while (puVar11 != puVar1);
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ddb94e FUN_143ddb94e body=20 status=ok
// SIG undefined FUN_143ddb94e(void)

void FUN_143ddb94e(longlong param_1,undefined8 param_2,byte param_3,byte param_4)

{
  *(byte *)(param_1 + 0x118) = param_4;
  FUN_143dd9ebc(param_1,~param_3 & param_4);
  return;
}



// FUNCTION 143ddb962 FUN_143ddb962 body=1258 status=ok
// SIG undefined FUN_143ddb962(void)

void FUN_143ddb962(longlong param_1,longlong param_2,longlong *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_128 [32];
  code **local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined1 local_b8 [8];
  undefined8 *local_b0;
  int local_a8;
  short local_9c [2];
  code *local_98 [2];
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar8 = *(longlong *)(param_2 + 0xa08);
  if (lVar8 != 0) {
    if (DAT_14cb5b388 == 0) {
      local_d0 = local_98;
      local_98[0] = FUN_141864c34;
      local_c0 = FUN_14081d0ea;
      local_c8 = &LAB_146431698;
      local_d8 = &LAB_1486775cb;
      local_e0 = &LAB_1464cee35;
      local_e8 = &DAT_149e063b2;
      local_f0 = 0;
      local_f8 = 0x10000005;
      local_100 = 0x10;
      local_108 = (code **)CONCAT44(local_108._4_4_,0x3a20);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
      pcVar1 = (code *)*param_3;
      plVar4 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar4 = (longlong *)param_3[2];
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(uVar3,lVar8);
      goto LAB_143ddbc5c;
    }
  }
  if (*(int *)(param_1 + 0x114) == 0) {
LAB_143ddbcd3:
    lVar8 = 0;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x110);
    lVar8 = 0;
    if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         (((int)plVar4[2] != *(int *)(param_1 + 0x114) ||
          ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)))) goto LAB_143ddbcd3;
      lVar8 = *plVar4;
    }
  }
  if (*(longlong *)(lVar8 + 0x1e0) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar8 + 0x1e0) + 0x68);
  }
  FUN_140d27df6(uVar3,local_9c,param_2);
  if (-1 < local_9c[0]) {
    if (param_2 == 0) {
      uVar9 = 0;
      iVar6 = 0;
    }
    else {
      uVar9 = *(uint *)(param_2 + 0xc);
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
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
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar6 = *(int *)(lVar8 + 0x10);
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar6 = iVar7;
        }
      }
    }
    local_98[0] = (code *)*param_3;
    local_88[0] = 0;
    if (local_98[0] != (code *)0x0) {
      plVar4 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar4 = (longlong *)param_3[2];
      }
      (**(code **)*plVar4)(plVar4,local_88);
    }
    local_58 = CONCAT44(iVar6,uVar9);
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,7,0x10);
    puVar2 = local_b0;
    local_a8 = 7;
    *local_b0 = &PTR_LAB_14b3e9ca0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_b0[2] = lVar5;
    *local_b0 = &PTR_FUN_14b417700;
    local_b0[3] = 0;
    iVar6 = 0;
    if (param_1 != 0) {
      uVar9 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_b0 + 3) = uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
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
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar6 = *(int *)(lVar8 + 0x10);
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar6 = iVar7;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar6;
    puVar2[4] = local_98[0];
    puVar2[6] = local_88[0];
    *(undefined4 *)(puVar2 + 8) = local_78;
    *(undefined4 *)((longlong)puVar2 + 0x44) = uStack_74;
    *(undefined4 *)(puVar2 + 9) = uStack_70;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_6c;
    *(undefined4 *)(puVar2 + 10) = local_68;
    *(undefined4 *)((longlong)puVar2 + 0x54) = uStack_64;
    *(undefined4 *)(puVar2 + 0xb) = uStack_60;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = uStack_5c;
    puVar2[0xc] = local_58;
    FUN_140056680(local_98,L"UMissionTaskStateManager::WaitForPlayerCharacter");
    local_f8 = CONCAT31(local_f8._1_3_,1);
    local_100 = 0x1000000;
    local_108 = local_98;
    FUN_1413d987a(uVar3,local_b8,local_9c,&local_b0);
    if (local_98[0] != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      if (local_b0 == (undefined8 *)0x0) goto LAB_143ddbc5c;
      (**(code **)*local_b0)(local_b0,0);
      FUN_1446efa72(&local_b0,0,0,0x10);
      local_a8 = 0;
    }
    if (local_b0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143ddbc5c:
  if (*param_3 != 0) {
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ddbe4e FUN_143ddbe4e body=2971 status=ok
// SIG undefined FUN_143ddbe4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ddbe4e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  undefined ***_Str;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined2 *puVar9;
  size_t sVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined ***pppuVar24;
  longlong lVar25;
  int iVar26;
  int iVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  undefined **ppuVar30;
  uint uVar31;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  longlong local_170;
  undefined8 *local_168;
  ulonglong local_160;
  longlong *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  uint *local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined2 *local_d8;
  int local_d0;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined ***local_a8;
  undefined8 *local_a0;
  undefined **local_98;
  undefined8 uStack_90;
  byte local_80;
  undefined7 uStack_7f;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  puVar6 = (undefined8 *)FUN_1488ed5b2();
  if ((puVar6 == (undefined8 *)0x0) || (*(char *)(param_1 + 0x118) != '\x01')) {
    FUN_1488ed45c(param_1,&local_98,param_2);
    local_a8 = &local_98;
    local_a0 = param_3;
    FUN_1488f5ad6(param_1 + 0x50,&local_d8);
    local_98 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_80])();
  }
  else {
    iVar27 = *(int *)(puVar6 + 5);
    local_170 = param_1;
    if (iVar27 != 0) {
      local_98 = (undefined **)0x0;
      uStack_90 = 0;
      if (iVar27 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar27);
      }
      FUN_1488f59da(&local_98);
      iVar27 = *(int *)(puVar6 + 5);
      if ((longlong)iVar27 != 0) {
        lVar16 = puVar6[4];
        lVar23 = 0;
        do {
          uVar19 = uStack_90;
          lVar25 = *(longlong *)(lVar16 + lVar23);
          lVar22 = (longlong)(int)uStack_90;
          uVar5 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar5);
          if (uStack_90._4_4_ < uVar5) {
            FUN_1488f5a42(&local_98,uVar19 & 0xffffffff);
          }
          *(undefined4 *)((longlong)local_98 + lVar22 * 0xc + 8) = *(undefined4 *)(lVar25 + 0x34);
          *(undefined8 *)((longlong)local_98 + lVar22 * 0xc) = *(undefined8 *)(lVar25 + 0x2c);
          lVar23 = lVar23 + 8;
        } while ((longlong)iVar27 * 8 != lVar23);
      }
      if ((longlong)(int)uStack_90 != 0) {
        lVar16 = (longlong)(int)uStack_90 * 0xc;
        ppuVar30 = local_98;
        do {
          local_b0 = *(undefined4 *)(puVar6 + 1);
          local_b8 = *puVar6;
          FUN_143ddce00(local_170,&local_b8,ppuVar30);
          ppuVar30 = (undefined **)((longlong)ppuVar30 + 0xc);
          lVar16 = lVar16 + -0xc;
        } while (lVar16 != 0);
      }
      if (local_98 != (undefined **)0x0) {
        FUN_1400020a8(local_98);
      }
    }
    pbVar4 = (byte *)*param_3;
    if ((pbVar4 != (byte *)0x0) && ((~*pbVar4 & 3) == 0)) {
      puVar7 = (undefined8 *)FUN_1408db3b0(pbVar4,&DAT_14b417908);
      pbVar4 = (byte *)*puVar7;
      plVar14 = (longlong *)puVar7[1];
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 3) != 0)) {
        if ((*pbVar4 & 2) == 0) {
          puVar7 = &DAT_14c9a1270;
        }
        else {
          puVar7 = *(undefined8 **)(pbVar4 + 8);
        }
        local_158 = plVar14;
        if ((longlong)*(int *)(puVar7 + 2) != 0) {
          puVar28 = (undefined8 *)*puVar7;
          local_150 = puVar28 + (longlong)*(int *)(puVar7 + 2) * 2;
          local_168 = puVar6;
          do {
            pbVar4 = (byte *)*puVar28;
            puVar6 = &DAT_14c9a1308;
            if (pbVar4 != (byte *)0x0) {
              plVar14 = &DAT_14c9a1288;
              if ((*pbVar4 & 2) != 0) {
                plVar14 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
              }
              puVar6 = &DAT_14c9a1308;
              if ((int)plVar14[2] != *(int *)((longlong)plVar14 + 0x3c)) {
                plVar17 = plVar14 + 8;
                if ((longlong *)plVar14[9] != (longlong *)0x0) {
                  plVar17 = (longlong *)plVar14[9];
                }
                iVar27 = *(int *)((longlong)plVar17 +
                                 (ulonglong)((int)plVar14[10] - 1U & DAT_14cb85c28) * 4);
                puVar6 = &DAT_14c9a1308;
                if (iVar27 != -1) {
                  do {
                    lVar16 = *plVar14 + (longlong)iVar27 * 0x40;
                    if (*(uint *)(*plVar14 + (longlong)iVar27 * 0x40) == DAT_14cb85c28) {
                      puVar6 = &DAT_14c9a1308;
                      if (lVar16 == 0) goto LAB_143ddbfe6;
                      puVar7 = (undefined8 *)(lVar16 + 0x28);
                      puVar6 = &DAT_14c9a1308;
                      if ((puVar7 == (undefined8 *)0x0) ||
                         (((byte *)*puVar7 != (byte *)0x0 &&
                          (puVar6 = puVar7, (*(byte *)*puVar7 & 0x40) == 0)))) goto LAB_143ddbfe6;
                      break;
                    }
                    iVar27 = *(int *)(lVar16 + 0x38);
                  } while (iVar27 != -1);
                  puVar6 = &DAT_14c9a1308;
                }
              }
            }
LAB_143ddbfe6:
            pbVar4 = (byte *)*puVar6;
            if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) != 1)) {
              uVar18 = 0;
            }
            else {
              uVar18 = *(undefined8 *)(pbVar4 + 8);
            }
            FUN_1400b22c2(&local_98,uVar18);
            uStack_c0 = 0;
            uStack_bc = 0;
            ppuVar30 = (undefined **)&DAT_149dfb77a;
            if ((int)uStack_90 != 0) {
              ppuVar30 = local_98;
            }
            FUN_1405f0d29(&local_c4,ppuVar30,0);
            if (local_98 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            pbVar4 = (byte *)*puVar28;
            plVar14 = &DAT_14c9a1288;
            if ((pbVar4 != (byte *)0x0) && (plVar14 = &DAT_14c9a1288, (*pbVar4 & 2) != 0)) {
              plVar14 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
            }
            uVar5 = *(uint *)(plVar14 + 6);
            local_148 = puVar28;
            if (uVar5 == 0) {
              uVar29 = 1;
              uVar19 = 0;
              iVar27 = 0;
              uVar13 = 0;
            }
            else {
              puVar8 = (uint *)plVar14[5];
              if ((uint *)plVar14[5] == (uint *)0x0) {
                puVar8 = (uint *)(plVar14 + 3);
              }
              uVar13 = *puVar8;
              if (uVar13 == 0) {
                iVar27 = uVar5 + 0x1e;
                if (-1 < (int)(uVar5 - 1)) {
                  iVar27 = uVar5 - 1;
                }
                uVar19 = 0;
                uVar21 = (ulonglong)(uint)(iVar27 >> 5);
                if (iVar27 >> 5 < 1) {
                  uVar21 = uVar19;
                }
                iVar27 = 0;
                do {
                  if (uVar21 == uVar19) goto LAB_143ddc106;
                  iVar27 = iVar27 + 0x20;
                  uVar13 = puVar8[uVar19 + 1];
                  uVar19 = uVar19 + 1;
                } while (uVar13 == 0);
              }
              else {
                uVar19 = 0;
                iVar27 = 0;
              }
              uVar29 = (ulonglong)(-uVar13 & uVar13);
              uVar21 = uVar29 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar21 != 0) {
                for (; uVar21 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              uVar13 = (iVar27 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              if ((int)uVar5 <= (int)uVar13) {
                uVar13 = uVar5;
              }
            }
            if (uVar13 != uVar5) {
              uVar31 = 0xffffffff;
              local_160 = (ulonglong)uVar5;
              local_140 = (uint *)(plVar14 + 3);
              do {
                pbVar4 = *(byte **)(*plVar14 + 0x28 + (longlong)(int)uVar13 * 0x40);
                if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) != 1)) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = *(undefined8 *)(pbVar4 + 8);
                }
                lVar16 = *plVar14 + (longlong)(int)uVar13 * 0x40;
                FUN_1400b22c2(&local_a8,uVar18);
                local_98 = (undefined **)0x0;
                uStack_90 = 0;
                FUN_1400b2348(lVar16,&local_98,1);
                FUN_1400b22c2(&local_d8,L"_Common");
                uVar20 = 0;
                uVar21 = (ulonglong)(local_d0 - 1);
                if (local_d0 == 0) {
                  uVar21 = uVar20;
                }
                if (0 < (int)uVar21) {
                  puVar9 = local_d8;
                  if (local_d0 == 0) {
                    puVar9 = &DAT_149dfb77a;
                  }
                  ppuVar30 = (undefined **)&DAT_149dfb77a;
                  if ((int)uStack_90 != 0) {
                    ppuVar30 = local_98;
                  }
                  lVar23 = 0;
LAB_143ddc294:
                  uVar2 = *(ushort *)((longlong)ppuVar30 + lVar23);
                  uVar3 = *(ushort *)((longlong)puVar9 + lVar23);
                  if (uVar2 == uVar3) {
                    iVar26 = 0;
                    if ((uVar2 == 0) || (uVar21 == 1)) goto LAB_143ddc2e6;
LAB_143ddc2b1:
                    uVar21 = uVar21 - 1;
                    lVar23 = lVar23 + 2;
                    goto LAB_143ddc294;
                  }
                  if ((uVar3 | uVar2) < 0x80) {
                    if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                      iVar26 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                               (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                      goto LAB_143ddc2e6;
                    }
                    if (uVar21 == 1) {
                      iVar26 = 0;
                      goto LAB_143ddc2e6;
                    }
                    goto LAB_143ddc2b1;
                  }
                  iVar26 = (uint)uVar2 - (uint)uVar3;
LAB_143ddc2e6:
                  uVar20 = (ulonglong)(iVar26 == 0);
                }
                if (local_d8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_98 != (undefined **)0x0) {
                  FUN_1400020a8();
                }
                if ((char)uVar20 == '\0') {
                  if (*(int *)(lVar16 + 4) < 2 && *(int *)(lVar16 + 0x24) < 1) {
                    lVar23 = lVar16 + 8;
                  }
                  else {
                    lVar23 = *(longlong *)(lVar16 + 0x18);
                  }
                  lVar16 = (longlong)(*(int *)(lVar16 + 4) + -1);
                  local_e0 = *(undefined4 *)(lVar23 + 8 + lVar16 * 0xc);
                  local_e8 = *(undefined8 *)(lVar23 + lVar16 * 0xc);
                  local_f8 = CONCAT44(uStack_c0,local_c4);
                  local_f0 = uStack_bc;
                  local_108 = *local_168;
                  local_100 = *(undefined4 *)(local_168 + 1);
                  FUN_14884572d(&local_98,&local_108,&local_f8,&local_e8);
                  if ((*(int *)(local_170 + 0x114) == 0) ||
                     (uVar5 = *(uint *)(local_170 + 0x110), (int)uVar5 < 0)) {
LAB_143ddc53b:
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = 0;
                    if ((int)uVar5 < DAT_14c9647dc) {
                      puVar6 = (undefined8 *)
                               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
                      if (((puVar6 == (undefined8 *)0x0) ||
                          (*(int *)(puVar6 + 2) != *(int *)(local_170 + 0x114))) ||
                         ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) goto LAB_143ddc53b;
                      uVar18 = *puVar6;
                    }
                  }
                  FUN_141881c76(&local_d8,&local_a8);
                  lVar16 = FUN_14040226a(uVar18,0);
                  if (lVar16 != 0) {
                    FUN_140bc53f1(&local_98,&local_d8,lVar16,0);
                  }
                  if (local_70 != 0) {
                    FUN_1400020a8();
                  }
                }
                if (local_a8 != (undefined ***)0x0) {
                  FUN_1400020a8();
                }
                uVar31 = uVar31 & ~(uint)uVar29;
                puVar8 = (uint *)plVar14[5];
                if ((uint *)plVar14[5] == (uint *)0x0) {
                  puVar8 = local_140;
                }
                uVar5 = *(uint *)(plVar14 + 6);
                iVar26 = (int)uVar19;
                lVar16 = (longlong)iVar26;
                uVar13 = puVar8[lVar16] & uVar31;
                if (uVar13 == 0) {
                  iVar11 = uVar5 + 0x1e;
                  if (-1 < (int)(uVar5 - 1)) {
                    iVar11 = uVar5 - 1;
                  }
                  iVar11 = iVar11 >> 5;
                  iVar27 = iVar27 + 0x20;
                  iVar12 = iVar11;
                  if (iVar11 < iVar26) {
                    iVar12 = iVar26;
                  }
                  if (iVar26 < iVar11) {
                    lVar23 = 0;
                    do {
                      uVar13 = puVar8[lVar16 + lVar23 + 1];
                      if (uVar13 != 0) {
                        uVar19 = (ulonglong)(iVar26 + (int)lVar23 + 1);
                        uVar31 = 0xffffffff;
                        goto LAB_143ddc3ac;
                      }
                      iVar27 = iVar27 + 0x20;
                      lVar23 = lVar23 + 1;
                    } while (iVar12 - lVar16 != lVar23);
                    uVar31 = 0xffffffff;
                    iVar26 = iVar12;
                  }
                  uVar19 = (ulonglong)(iVar26 + 1);
                  uVar13 = uVar5;
                }
                else {
LAB_143ddc3ac:
                  uVar29 = (ulonglong)(-uVar13 & uVar13);
                  uVar21 = uVar29 * 2 + 1;
                  lVar16 = 0x3f;
                  if (uVar21 != 0) {
                    for (; uVar21 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                    }
                  }
                  uVar13 = (iVar27 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                  if ((int)uVar5 <= (int)uVar13) {
                    uVar13 = uVar5;
                  }
                }
              } while (uVar13 != (uint)local_160);
            }
LAB_143ddc106:
            local_118 = _DAT_14cb7d0f8;
            local_110 = DAT_14cb7d100;
            FUN_1448075d0(&local_98,&local_118);
            puVar28 = local_148;
            puVar6 = local_168;
            pbVar4 = (byte *)*local_148;
            puVar7 = &DAT_14c9a1308;
            if (pbVar4 != (byte *)0x0) {
              plVar14 = &DAT_14c9a1288;
              if ((*pbVar4 & 2) != 0) {
                plVar14 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
              }
              puVar7 = &DAT_14c9a1308;
              if ((int)plVar14[2] != *(int *)((longlong)plVar14 + 0x3c)) {
                plVar17 = plVar14 + 8;
                if ((longlong *)plVar14[9] != (longlong *)0x0) {
                  plVar17 = (longlong *)plVar14[9];
                }
                iVar27 = *(int *)((longlong)plVar17 +
                                 (ulonglong)((int)plVar14[10] - 1U & (uint)local_98) * 4);
                puVar7 = &DAT_14c9a1308;
                if (iVar27 != -1) {
                  do {
                    lVar16 = *plVar14 + (longlong)iVar27 * 0x40;
                    if (*(uint *)(*plVar14 + (longlong)iVar27 * 0x40) == (uint)local_98) {
                      puVar7 = &DAT_14c9a1308;
                      if (lVar16 == 0) goto LAB_143ddc58f;
                      puVar15 = (undefined8 *)(lVar16 + 0x28);
                      puVar7 = &DAT_14c9a1308;
                      if ((puVar15 == (undefined8 *)0x0) ||
                         (((byte *)*puVar15 != (byte *)0x0 &&
                          (puVar7 = puVar15, (*(byte *)*puVar15 & 0x40) == 0)))) goto LAB_143ddc58f;
                      break;
                    }
                    iVar27 = *(int *)(lVar16 + 0x38);
                  } while (iVar27 != -1);
                  puVar7 = &DAT_14c9a1308;
                }
              }
            }
LAB_143ddc58f:
            pbVar4 = (byte *)*puVar7;
            if (((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) != 1)) ||
               (_Str = *(undefined ****)(pbVar4 + 8), _Str == (undefined ***)0x0)) {
LAB_143ddc597:
              uVar19 = 0;
              uVar21 = 0;
            }
            else {
              sVar10 = strlen((char *)_Str);
              uVar5 = (uint)sVar10;
              if (uVar5 == 0) goto LAB_143ddc597;
              lVar16 = (longlong)(int)uVar5;
              pppuVar24 = (undefined ***)((longlong)_Str + lVar16 + -1);
              if (pppuVar24 < _Str) {
                lVar23 = 0;
              }
              else {
                uVar13 = 0;
                do {
                  if (9 < (byte)(*(char *)pppuVar24 - 0x30U)) break;
                  uVar13 = uVar13 + 1;
                  pppuVar24 = (undefined ***)((longlong)pppuVar24 + -1);
                } while (_Str <= pppuVar24);
                if (((((uVar13 == 0) || ((int)uVar5 <= (int)uVar13)) || (10 < uVar13)) ||
                    (lVar25 = -(ulonglong)uVar13,
                    *(char *)((longlong)_Str + lVar25 + lVar16 + -1) != '_')) ||
                   ((uVar13 != 1 && (*(char *)((longlong)_Str + lVar25 + lVar16) == '0')))) {
LAB_143ddc5fa:
                  lVar23 = 0;
                }
                else {
                  lVar22 = 0;
                  do {
                    lVar23 = (longlong)*(char *)((longlong)_Str + lVar25 + lVar16) + lVar22 * 10;
                    lVar22 = lVar23 + -0x30;
                    lVar25 = lVar25 + 1;
                  } while (lVar25 != 0);
                  if (0x7ffffffe < lVar22) goto LAB_143ddc5fa;
                  uVar5 = ~uVar13 + uVar5;
                  lVar23 = lVar23 + -0x2f;
                }
                if (uVar5 == 0) goto LAB_143ddc597;
              }
              local_a0._0_5_ = (uint5)uVar5;
              local_a8 = _Str;
              uVar5 = FUN_14001a6c0(&local_a8,1);
              uVar21 = lVar23 << 0x20;
              uVar19 = (ulonglong)uVar5;
            }
            local_d8 = (undefined2 *)(uVar19 | uVar21);
            if (CONCAT71(uStack_7f,local_80) != 0) {
              FUN_1400020a8();
            }
            local_128 = _DAT_14cb7d0e0;
            local_120 = DAT_14cb7d0e8;
            FUN_1448075d0(&local_98,&local_128);
            pbVar4 = (byte *)*puVar28;
            puVar7 = &DAT_14c9a1308;
            if (pbVar4 != (byte *)0x0) {
              plVar14 = &DAT_14c9a1288;
              if ((*pbVar4 & 2) != 0) {
                plVar14 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
              }
              puVar7 = &DAT_14c9a1308;
              if ((int)plVar14[2] != *(int *)((longlong)plVar14 + 0x3c)) {
                plVar17 = plVar14 + 8;
                if ((longlong *)plVar14[9] != (longlong *)0x0) {
                  plVar17 = (longlong *)plVar14[9];
                }
                iVar27 = *(int *)((longlong)plVar17 +
                                 (ulonglong)((int)plVar14[10] - 1U & (uint)local_98) * 4);
                puVar7 = &DAT_14c9a1308;
                if (iVar27 != -1) {
                  do {
                    lVar16 = *plVar14 + (longlong)iVar27 * 0x40;
                    if (*(uint *)(*plVar14 + (longlong)iVar27 * 0x40) == (uint)local_98) {
                      puVar7 = &DAT_14c9a1308;
                      if (lVar16 == 0) goto LAB_143ddc716;
                      puVar15 = (undefined8 *)(lVar16 + 0x28);
                      puVar7 = &DAT_14c9a1308;
                      if ((puVar15 == (undefined8 *)0x0) ||
                         (((byte *)*puVar15 != (byte *)0x0 &&
                          (puVar7 = puVar15, (*(byte *)*puVar15 & 0x40) == 0)))) goto LAB_143ddc716;
                      break;
                    }
                    iVar27 = *(int *)(lVar16 + 0x38);
                  } while (iVar27 != -1);
                  puVar7 = &DAT_14c9a1308;
                }
              }
            }
LAB_143ddc716:
            pbVar4 = (byte *)*puVar7;
            if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) != 1)) {
              uVar18 = 0;
            }
            else {
              uVar18 = *(undefined8 *)(pbVar4 + 8);
            }
            FUN_14883b3e8(&local_a8,uVar18);
            if (CONCAT71(uStack_7f,local_80) != 0) {
              FUN_1400020a8();
            }
            local_138 = *puVar6;
            local_130 = *(undefined4 *)(puVar6 + 1);
            local_178 = &local_c4;
            FUN_143ddc9ea(local_170,&local_138,&local_d8,&local_a8);
            puVar28 = puVar28 + 2;
            plVar14 = local_158;
          } while (puVar28 != local_150);
        }
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*plVar14)();
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ddc9ea FUN_143ddc9ea body=1044 status=ok
// SIG undefined FUN_143ddc9ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_143ddc9ea(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,int *param_5
             )

{
  uint uVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_1f8 [32];
  int *local_1d8;
  longlong local_1d0;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  int local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 *local_128;
  undefined8 **ppuStack_120;
  undefined8 *local_118;
  undefined8 **ppuStack_110;
  longlong local_d8;
  undefined8 *local_c8;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined1 uStack_b4;
  undefined7 uStack_b3;
  undefined1 uStack_ac;
  undefined8 uStack_ab;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_78 [40];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (*param_5 != 0) {
    local_140 = *(undefined4 *)(param_2 + 1);
    local_148 = *param_2;
    plVar4 = (longlong *)FUN_1488ed6e6();
    if (plVar4 != (longlong *)0x0) {
      lVar6 = *param_3;
      local_160 = lVar6;
      uVar5 = FUN_146533f80();
      local_158 = FUN_14477b664(uVar5);
      local_150 = 0;
      if (((local_158 != 0 && lVar6 != 0) &&
          (plVar8 = *(longlong **)(local_158 + 0xb8), plVar8 != (longlong *)0x0)) &&
         (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 != '\0')) {
        uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
        lVar6 = FUN_144aff482(uVar5,&local_160);
        local_150 = lVar6;
        if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x18) != 0)) {
          if ((longlong)(int)plVar4[1] != 0) {
            plVar8 = (longlong *)*plVar4;
            lVar7 = (longlong)(int)plVar4[1] << 3;
            do {
              if ((*(int *)(*plVar8 + 0x2c) == *param_5) && (*(int *)(*plVar8 + 0x34) == param_5[2])
                 ) {
                if (plVar8 != (longlong *)0x0) goto LAB_143ddca1b;
                break;
              }
              plVar8 = plVar8 + 1;
              lVar7 = lVar7 + -8;
            } while (lVar7 != 0);
          }
          local_170 = _DAT_14cb7d0e0;
          local_168 = DAT_14cb7d0e8;
          local_180 = *(undefined8 *)param_5;
          local_178 = param_5[2];
          local_190 = *param_2;
          local_188 = *(undefined4 *)(param_2 + 1);
          FUN_14884572d(local_78);
          if (*(int *)(param_1 + 0x114) == 0) {
LAB_143ddcdf8:
            uVar5 = 0;
          }
          else {
            uVar1 = *(uint *)(param_1 + 0x110);
            uVar5 = 0;
            if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
              puVar9 = (undefined8 *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if ((puVar9 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x114) ||
                  ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_143ddcdf8;
              uVar5 = *puVar9;
            }
          }
          lVar7 = FUN_14040226a(uVar5,0);
          if (lVar7 != 0) {
            FUN_140bc53f1(local_78,param_4,lVar7,0);
          }
          local_198 = *(undefined4 *)(param_2 + 1);
          local_1a0 = *param_2;
          local_1d8 = param_5;
          local_1d0 = lVar6;
          (**(code **)(**(longlong **)(lVar6 + 0x18) + 0x10))
                    (*(longlong **)(lVar6 + 0x18),&local_c8,param_1);
          iVar2 = (int)plVar4[1];
          *(uint *)(plVar4 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
            FUN_1488f541c(plVar4,iVar2);
          }
          lVar6 = *plVar4;
          *(undefined8 **)(lVar6 + (longlong)iVar2 * 8) = local_c8;
          local_c8 = (undefined8 *)0x0;
          plVar4 = *(longlong **)(lVar6 + (longlong)iVar2 * 8);
          FUN_1447f69b6(param_1 + 0x28);
          if (*(char *)(param_1 + 0x118) == '\x01') {
            local_c0 = 0;
            local_c8 = (undefined8 *)0x0;
            local_a0 = 0;
            local_98 = 0;
            local_90 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_bc = 0;
            uStack_b4 = 0;
            uStack_b3 = 0;
            uStack_ac = 0;
            uStack_ab = 0;
            FUN_1488ed79c(&local_118,plVar4);
            FUN_1488ed93c(&local_c8,&local_118);
            if (local_d8 != 0) {
              FUN_1400020a8();
            }
            local_1b0 = *param_2;
            local_128 = &local_1b0;
            local_1a8 = *(undefined4 *)(param_2 + 1);
            ppuStack_110 = &local_128;
            local_118 = (undefined8 *)&LAB_1488f54a2;
            local_138 = *param_2;
            local_130 = *(undefined4 *)(param_2 + 1);
            ppuStack_120 = &local_c8;
            FUN_1488eda1c(param_1);
            (**(code **)(*plVar4 + 0x50))(plVar4);
            FUN_1488ebfe8(plVar4,&local_118,&DAT_14cb7d0b0);
            if ((char)local_118 == '\0') {
              FUN_141881e36(&local_128,L"Active");
              local_118 = local_128;
              ppuStack_110 = ppuStack_120;
            }
            local_1b8 = *(undefined4 *)(param_2 + 1);
            local_1c0 = *param_2;
            FUN_143dd9b42(param_1,&local_1c0,param_5,&local_118);
            if (local_88 != 0) {
              FUN_1400020a8();
            }
          }
          if (local_50 != 0) {
            FUN_1400020a8();
          }
          goto LAB_143ddca1e;
        }
      }
    }
  }
LAB_143ddca1b:
  plVar4 = (longlong *)0x0;
LAB_143ddca1e:
  if ((local_40 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 143ddce00 FUN_143ddce00 body=356 status=ok
// SIG undefined FUN_143ddce00(void)

void FUN_143ddce00(longlong param_1,undefined8 *param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  int local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined1 *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_3 != 0) {
    local_58 = *(undefined4 *)(param_2 + 1);
    local_60 = *param_2;
    plVar2 = (longlong *)FUN_1488ed6e6();
    if ((plVar2 != (longlong *)0x0) && ((longlong)(int)plVar2[1] != 0)) {
      lVar3 = (longlong)(int)plVar2[1] << 3;
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(*plVar2 + lVar4 * 8);
        if ((*(int *)(lVar1 + 0x2c) == *param_3) && (*(int *)(lVar1 + 0x34) == param_3[2])) {
          if ((int)lVar4 != -1) {
            FUN_1488ed9be(plVar2);
            plVar2 = (longlong *)FUN_1488ecc96(param_1);
            if (plVar2 != (longlong *)0x0) {
              local_68 = param_3[2];
              local_70 = *(undefined8 *)param_3;
              local_80 = *param_2;
              local_78 = *(undefined4 *)(param_2 + 1);
              (**(code **)(*plVar2 + 0x48))(plVar2);
            }
            FUN_1447f69b6(param_1 + 0x28);
            if (*(char *)(param_1 + 0x118) == '\x01') {
              local_88 = param_3[2];
              local_38 = &local_90;
              local_90 = *(undefined8 *)param_3;
              local_a0 = *param_2;
              local_40 = &local_a0;
              local_98 = *(undefined4 *)(param_2 + 1);
              local_28 = &local_40;
              local_30 = &LAB_1488f5720;
              local_50 = *param_2;
              local_48 = *(undefined4 *)(param_2 + 1);
              FUN_1488eda1c(param_1);
            }
          }
          break;
        }
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ddcf66 FUN_143ddcf66 body=1382 status=ok
// SIG undefined FUN_143ddcf66(void)

undefined8
FUN_143ddcf66(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  size_t sVar14;
  uint uVar15;
  uint uVar16;
  wchar_t *_Str;
  uint uVar17;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  wchar_t *local_1a8;
  int local_1a0;
  byte *local_198;
  longlong *plStack_190;
  longlong local_188;
  longlong *plStack_180;
  undefined4 local_174;
  undefined4 *local_170;
  undefined4 *local_168;
  int local_15c;
  code *local_158;
  undefined8 local_148;
  undefined **local_138;
  byte **local_130;
  undefined ***local_118;
  longlong *plStack_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 uStack_f8;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined **local_80;
  uint local_78;
  undefined4 uStack_74;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_14009b010(param_5,3,0);
  FUN_1488ed45c(param_1,&local_80,param_2);
  plVar11 = (longlong *)FUN_1488ecc96(param_1);
  puVar12 = (undefined8 *)FUN_1488ed5b2(param_1,param_2);
  if (puVar12 == (undefined8 *)0x0) {
    bVar8 = (&DAT_149fc1b6e)[local_68];
    if (bVar8 == 1) {
      uVar9 = 0xffffffff;
      if ((longlong *)CONCAT44(uStack_74,local_78) != (longlong *)0x0) {
        cVar7 = (**(code **)(*(longlong *)CONCAT44(uStack_74,local_78) + 0x28))();
        if (cVar7 != '\0') {
          bVar8 = (&DAT_149fc1b6e)[local_68];
          goto LAB_143ddd028;
        }
      }
    }
    else if ((local_78 & 0xffffff) == 0) {
      uVar9 = 0xffffffff;
    }
    else {
LAB_143ddd028:
      if ((bVar8 & 1) == 0) {
        uVar16 = local_78 & 0xffffff;
        uVar9 = uVar16 >> 0xd ^ (local_78 >> 0x18) - uVar16;
        uVar15 = uVar9 << 8 ^ (-0x61c88647 - uVar16) - uVar9;
        uVar17 = uVar15 >> 0xd ^ (uVar16 - uVar9) - uVar15;
        uVar16 = uVar17 >> 0xc ^ (uVar9 - uVar15) - uVar17;
        uVar9 = uVar16 << 0x10 ^ (uVar15 - uVar17) - uVar16;
        uVar15 = uVar9 >> 5 ^ (uVar17 - uVar16) - uVar9;
        uVar16 = uVar15 >> 3 ^ (uVar16 - uVar9) - uVar15;
        uVar9 = uVar16 << 10 ^ (uVar9 - uVar15) - uVar16;
        uVar9 = uVar9 >> 0xf ^ uVar15 - (uVar16 + uVar9);
      }
      else {
        uVar9 = (**(code **)(*(longlong *)CONCAT44(uStack_74,local_78) + 0x40))();
      }
    }
    iVar10 = FUN_1488f499a((longlong *)(param_1 + 0x50),uVar9,&local_80);
    if ((iVar10 == -1) || (param_5 == &DAT_14c9a1308)) goto LAB_143ddd3c0;
    lVar4 = *(longlong *)(param_1 + 0x50);
    lVar13 = lVar4 + (longlong)iVar10 * 0x38;
    if ((lVar13 == 0) || (lVar4 + (longlong)iVar10 * 0x38 == -0x20)) goto LAB_143ddd3c0;
    lVar4 = *(longlong *)(lVar13 + 0x20);
    lVar13 = *(longlong *)(lVar13 + 0x28);
    if (lVar13 != 0) {
      LOCK();
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
      UNLOCK();
    }
    plVar11 = (longlong *)param_5[1];
    *param_5 = lVar4;
    param_5[1] = lVar13;
  }
  else {
    local_188 = 0;
    plStack_180 = (longlong *)0x0;
    local_1d0 = param_1;
    FUN_14009b010(&local_188,2,0);
    iVar10 = *(int *)(puVar12 + 5);
    if ((longlong)iVar10 != 0) {
      lVar4 = puVar12[4];
      lVar13 = 0;
      do {
        if (*(char *)((*(longlong **)(lVar4 + lVar13))[7] + 0x50) == '\0') {
          (**(code **)(**(longlong **)(lVar4 + lVar13) + 0x48))();
          local_198 = (byte *)0x0;
          plStack_190 = (longlong *)0x0;
          FUN_14009b010(&local_198,3,0);
          FUN_1408226d0(*(longlong *)(lVar4 + lVar13) + 0x2c,&local_1a8);
          _Str = L"";
          if (local_1a0 != 0) {
            _Str = local_1a8;
          }
          local_98 = 0;
          if (_Str == (wchar_t *)0x0) {
            local_90 = 0;
            local_88 = 0;
          }
          else {
            sVar14 = wcslen(_Str);
            FUN_1449b853c(&local_118,_Str,sVar14 & 0xffffffff,1);
          }
          uVar6 = local_90;
          if ((local_198 != (byte *)0x0) && ((~*local_198 & 3) == 0)) {
            lVar5 = *(longlong *)(local_198 + 8);
            local_174 = 1;
            local_170 = &DAT_14cb85c28;
            local_168 = &local_174;
            FUN_14049fede(lVar5 + 0x18,&local_15c,&local_170,0);
            lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x28 + (longlong)local_15c * 0x40);
            if ((lVar5 != 0) && ((*(byte *)(lVar5 + 1) & 2) == 0)) {
              FUN_140126aca(lVar5,uVar6);
            }
          }
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          if (local_1a8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (plVar11 != (longlong *)0x0) {
            local_148 = 0;
            local_138 = &PTR_LAB_14b417770;
            local_158 = FUN_143de3510;
            local_1b0 = *(undefined4 *)(*(longlong *)(lVar4 + lVar13) + 0x34);
            local_1b8 = *(undefined8 *)(*(longlong *)(lVar4 + lVar13) + 0x2c);
            local_1c8 = *puVar12;
            local_1c0 = *(undefined4 *)(puVar12 + 1);
            local_130 = &local_198;
            (**(code **)(*plVar11 + 0x68))(plVar11,&local_1c8);
          }
          if (local_188 != 0) {
            local_1d8 = 0;
            FUN_140141db6(local_188,&local_198);
          }
          plVar2 = plStack_190;
          if (plStack_190 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_190 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_190)(plStack_190);
              LOCK();
              piVar3 = (int *)((longlong)plVar2 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar10 * 8 != lVar13);
    }
    local_118 = (undefined ***)0x0;
    plStack_110 = (longlong *)0x0;
    local_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    FUN_1446ddda2(&local_118,&DAT_14b417908,0);
    if (*param_5 != 0) {
      local_1d8 = 0;
      FUN_14014191c(*param_5,&local_118,&local_188,0);
    }
    lVar4 = local_1d0;
    if (local_100 != 0) {
      FUN_1400020a8();
    }
    local_118 = &local_80;
    plStack_110 = param_5;
    FUN_1488f5ad6(lVar4 + 0x50,&local_170);
    plVar11 = plStack_180;
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
LAB_143ddd3c0:
  local_80 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_68])();
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ddd4cd FUN_143ddd4cd body=91 status=ok
// SIG undefined FUN_143ddd4cd(void)

void FUN_143ddd4cd(void)

{
  if (DAT_14cb85c58 != 0) {
    if (DAT_14cb85c50 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb85c50)(DAT_14cb85c50,0);
    FUN_1446efa72(&DAT_14cb85c50,0,0,0x10);
    DAT_14cb85c58 = 0;
  }
  if (DAT_14cb85c50 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ddd550 FUN_143ddd550 body=149 status=ok
// SIG undefined FUN_143ddd550(void)

void FUN_143ddd550(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (((*(int *)((longlong)param_1 + 0xac) != 0) &&
      (uVar2 = *(uint *)(param_1 + 0x15), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)((longlong)param_1 + 0xac))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
        (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))) {
      (**(code **)(*plVar3 + 0x650))(plVar3,*(undefined4 *)(param_1 + 0x16));
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ddd5db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143ddd5e6 FUN_143ddd5e6 body=282 status=ok
// SIG undefined FUN_143ddd5e6(void)

undefined8 * FUN_143ddd5e6(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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
          __tlregdtor(&LAB_143ddd528);
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



// FUNCTION 143ddd700 FUN_143ddd700 body=149 status=ok
// SIG undefined FUN_143ddd700(void)

void FUN_143ddd700(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (((*(int *)((longlong)param_1 + 0xac) != 0) &&
      (uVar2 = *(uint *)(param_1 + 0x15), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)((longlong)param_1 + 0xac))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
        (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))) {
      (**(code **)(*plVar3 + 0x658))(plVar3,*(undefined4 *)(param_1 + 0x16));
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ddd78b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143ddd79e FUN_143ddd79e body=182 status=ok
// SIG undefined FUN_143ddd79e(void)

undefined8 * FUN_143ddd79e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14b4165f0;
  lVar1 = *(longlong *)(param_1 + 8);
  puVar2[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(param_1 + 0x10);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  puVar2[7] = &DAT_14a171d50;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[8] = *(undefined8 *)(param_1 + 0x40);
  FUN_1406022fe(puVar2 + 9,param_1 + 0x48);
  puVar2[7] = &PTR_FUN_14b0394b0;
  return puVar2 + 1;
}



// FUNCTION 143ddd85a FUN_143ddd85a body=29 status=ok
// SIG undefined FUN_143ddd85a(void)

void FUN_143ddd85a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ddd878 FUN_143ddd878 body=100 status=ok
// SIG undefined FUN_143ddd878(void)

undefined8 * FUN_143ddd878(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4165f0;
  param_1[7] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    FUN_140115c12(param_1 + 9,0);
  }
  param_1[8] = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ddd8dc FUN_143ddd8dc body=253 status=ok
// SIG undefined FUN_143ddd8dc(void)

void FUN_143ddd8dc(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      uVar4 = (ulonglong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x40c)) {
        uVar4 = uVar4 + (uVar4 * 3 >> 3) + 0x10;
      }
      uVar3 = uVar4 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar3 < 0x7ff1) {
            uVar3 = (ulonglong)
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]];
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
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
        }
      }
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x40c) = iVar5;
    FUN_143ddd9da(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 143ddd9da FUN_143ddd9da body=141 status=ok
// SIG undefined FUN_143ddd9da(void)

void FUN_143ddd9da(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,0x10);
  return;
}



// FUNCTION 143ddda68 FUN_143ddda68 body=185 status=ok
// SIG undefined FUN_143ddda68(void)

void FUN_143ddda68(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0x40;
  if (0x40 < param_2) {
    uVar2 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
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
  FUN_143ddd9da(param_1,0,iVar4);
  *(int *)(param_1 + 0x40c) = iVar4;
  return;
}



// FUNCTION 143dddb32 FUN_143dddb32 body=29 status=ok
// SIG undefined FUN_143dddb32(void)

undefined8 FUN_143dddb32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dddb64 FUN_143dddb64 body=93 status=ok
// SIG undefined FUN_143dddb64(void)

void FUN_143dddb64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4166c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143dddbc2 FUN_143dddbc2 body=93 status=ok
// SIG undefined FUN_143dddbc2(void)

void FUN_143dddbc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4166c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143dddc20 FUN_143dddc20 body=126 status=ok
// SIG undefined FUN_143dddc20(void)

void FUN_143dddc20(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4166c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dddc8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dddca8 FUN_143dddca8 body=20 status=ok
// SIG undefined FUN_143dddca8(void)

undefined1 FUN_143dddca8(longlong param_1)

{
  FUN_143dd2aa6(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143dddcc2 FUN_143dddcc2 body=91 status=ok
// SIG undefined FUN_143dddcc2(void)

bool FUN_143dddcc2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143dddcf2;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143dddcf2:
  return lVar6 == param_2;
}



// FUNCTION 143dddd3a FUN_143dddd3a body=64 status=ok
// SIG undefined FUN_143dddd3a(void)

undefined8 * FUN_143dddd3a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4169d0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dddd8e FUN_143dddd8e body=169 status=ok
// SIG undefined FUN_143dddd8e(void)

void FUN_143dddd8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4169d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)puVar1 + 0x35) = *(undefined8 *)(param_1 + 0x35);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar3;
  *(undefined4 *)(puVar1 + 6) = uVar4;
  *(undefined4 *)((longlong)puVar1 + 0x34) = uVar5;
  lVar2 = *(longlong *)(param_1 + 0x40);
  puVar1[8] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_1 + 0x48);
  *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(param_1 + 0x50);
  return;
}



// FUNCTION 143ddde38 FUN_143ddde38 body=169 status=ok
// SIG undefined FUN_143ddde38(void)

void FUN_143ddde38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4169d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)puVar1 + 0x35) = *(undefined8 *)(param_1 + 0x35);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar3;
  *(undefined4 *)(puVar1 + 6) = uVar4;
  *(undefined4 *)((longlong)puVar1 + 0x34) = uVar5;
  lVar2 = *(longlong *)(param_1 + 0x40);
  puVar1[8] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_1 + 0x48);
  *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(param_1 + 0x50);
  return;
}


