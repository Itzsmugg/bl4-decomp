// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14577dc82 FUN_14577dc82 body=132 status=ok
// SIG undefined FUN_14577dc82(void)

void FUN_14577dc82(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14577dd08 FUN_14577dd08 body=1409 status=ok
// SIG undefined FUN_14577dd08(void)

void FUN_14577dd08(longlong param_1,undefined8 param_2,longlong *param_3,DWORD *param_4,
                  undefined8 *param_5,undefined8 *param_6,DWORD *param_7)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *_Dst;
  longlong *plVar19;
  longlong *plVar20;
  undefined4 uVar21;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [16];
  LARGE_INTEGER local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = *(undefined8 *)(param_1 + 0x10f0);
  uVar5 = *(undefined8 *)(param_1 + 0x10f8);
  uVar6 = *(undefined8 *)(&DAT_00001100 + param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x1108);
  uVar8 = *(undefined8 *)(param_1 + 0x1110);
  uVar9 = *(undefined8 *)(param_1 + 0x1118);
  uVar10 = *(undefined8 *)(param_1 + 0x1120);
  uVar11 = *(undefined8 *)(param_1 + 0x1128);
  uVar12 = *param_5;
  uVar13 = param_5[1];
  uVar14 = param_5[2];
  uVar15 = param_5[3];
  uVar16 = param_5[4];
  uVar17 = param_5[5];
  uVar18 = param_5[7];
  *(undefined8 *)(param_1 + 0x1120) = param_5[6];
  *(undefined8 *)(param_1 + 0x1128) = uVar18;
  *(undefined8 *)(param_1 + 0x1110) = uVar16;
  *(undefined8 *)(param_1 + 0x1118) = uVar17;
  *(undefined8 *)(&DAT_00001100 + param_1) = uVar14;
  *(undefined8 *)(param_1 + 0x1108) = uVar15;
  *(undefined8 *)(param_1 + 0x10f0) = uVar12;
  *(undefined8 *)(param_1 + 0x10f8) = uVar13;
  param_5[6] = uVar10;
  param_5[7] = uVar11;
  param_5[4] = uVar8;
  param_5[5] = uVar9;
  param_5[2] = uVar6;
  param_5[3] = uVar7;
  *param_5 = uVar4;
  param_5[1] = uVar5;
  uVar4 = *(undefined8 *)(param_1 + 0x1140);
  uVar5 = *(undefined8 *)(param_1 + 0x1148);
  uVar6 = *(undefined8 *)(param_1 + 0x1150);
  uVar7 = *(undefined8 *)(param_1 + 0x1158);
  uVar8 = *(undefined8 *)(param_1 + 0x1160);
  uVar9 = *(undefined8 *)(param_1 + 0x1168);
  uVar10 = *(undefined8 *)(param_1 + 0x1170);
  uVar11 = *(undefined8 *)(param_1 + 0x1178);
  uVar12 = *param_6;
  uVar13 = param_6[1];
  uVar14 = param_6[2];
  uVar15 = param_6[3];
  uVar16 = param_6[4];
  uVar17 = param_6[5];
  uVar18 = param_6[7];
  *(undefined8 *)(param_1 + 0x1170) = param_6[6];
  *(undefined8 *)(param_1 + 0x1178) = uVar18;
  *(undefined8 *)(param_1 + 0x1160) = uVar16;
  *(undefined8 *)(param_1 + 0x1168) = uVar17;
  *(undefined8 *)(param_1 + 0x1150) = uVar14;
  *(undefined8 *)(param_1 + 0x1158) = uVar15;
  *(undefined8 *)(param_1 + 0x1140) = uVar12;
  *(undefined8 *)(param_1 + 0x1148) = uVar13;
  param_6[6] = uVar10;
  param_6[7] = uVar11;
  param_6[4] = uVar8;
  param_6[5] = uVar9;
  param_6[2] = uVar6;
  param_6[3] = uVar7;
  *param_6 = uVar4;
  param_6[1] = uVar5;
  local_98 = (LARGE_INTEGER)*(LARGE_INTEGER *)&((LARGE_INTEGER *)(param_1 + 0x1190))->s;
  plVar19 = *(longlong **)(param_1 + 0x1198);
  uVar4 = *(undefined8 *)(param_1 + 0x11a0);
  uVar5 = *(undefined8 *)(param_1 + 0x11a8);
  uVar6 = *(undefined8 *)(param_1 + 0x11b0);
  uVar7 = *(undefined8 *)(param_1 + 0x11b8);
  uVar8 = *(undefined8 *)(param_1 + 0x11c0);
  uVar9 = *(undefined8 *)(param_1 + 0x11c8);
  uVar10 = *(undefined8 *)param_7;
  uVar11 = *(undefined8 *)(param_7 + 2);
  uVar12 = *(undefined8 *)(param_7 + 4);
  uVar13 = *(undefined8 *)(param_7 + 6);
  uVar14 = *(undefined8 *)(param_7 + 8);
  uVar15 = *(undefined8 *)(param_7 + 10);
  uVar16 = *(undefined8 *)(param_7 + 0xe);
  *(undefined8 *)(param_1 + 0x11c0) = *(undefined8 *)(param_7 + 0xc);
  *(undefined8 *)(param_1 + 0x11c8) = uVar16;
  *(undefined8 *)(param_1 + 0x11b0) = uVar14;
  *(undefined8 *)(param_1 + 0x11b8) = uVar15;
  *(undefined8 *)(param_1 + 0x11a0) = uVar12;
  *(undefined8 *)(param_1 + 0x11a8) = uVar13;
  *(undefined8 *)(param_1 + 0x1190) = uVar10;
  *(undefined8 *)(param_1 + 0x1198) = uVar11;
  uStack_90._0_4_ = (DWORD)plVar19;
  uStack_90._4_4_ = (DWORD)((ulonglong)plVar19 >> 0x20);
  local_88._0_4_ = (DWORD)uVar4;
  local_88._4_4_ = (DWORD)((ulonglong)uVar4 >> 0x20);
  uStack_80._0_4_ = (DWORD)uVar5;
  uStack_80._4_4_ = (DWORD)((ulonglong)uVar5 >> 0x20);
  local_78._0_4_ = (DWORD)uVar6;
  local_78._4_4_ = (DWORD)((ulonglong)uVar6 >> 0x20);
  uStack_70._0_4_ = (DWORD)uVar7;
  uStack_70._4_4_ = (DWORD)((ulonglong)uVar7 >> 0x20);
  local_68._0_4_ = (DWORD)uVar8;
  local_68._4_4_ = (DWORD)((ulonglong)uVar8 >> 0x20);
  uStack_60._0_4_ = (DWORD)uVar9;
  uStack_60._4_4_ = (DWORD)((ulonglong)uVar9 >> 0x20);
  param_7[0xc] = (DWORD)local_68;
  param_7[0xd] = local_68._4_4_;
  param_7[0xe] = (DWORD)uStack_60;
  param_7[0xf] = uStack_60._4_4_;
  param_7[8] = (DWORD)local_78;
  param_7[9] = local_78._4_4_;
  param_7[10] = (DWORD)uStack_70;
  param_7[0xb] = uStack_70._4_4_;
  param_7[4] = (DWORD)local_88;
  param_7[5] = local_88._4_4_;
  param_7[6] = (DWORD)uStack_80;
  param_7[7] = uStack_80._4_4_;
  *param_7 = local_98.s.LowPart;
  param_7[1] = local_98.s.HighPart;
  param_7[2] = (DWORD)uStack_90;
  param_7[3] = uStack_90._4_4_;
  uStack_90 = plVar19;
  local_88 = uVar4;
  uStack_80 = uVar5;
  local_78 = uVar6;
  uStack_70 = uVar7;
  local_68 = uVar8;
  uStack_60 = uVar9;
  FUN_140b836e0(param_1);
  if ((*(char *)(param_1 + 0x10a8) != '\x01') ||
     (lVar3 = *param_3, (lVar3 != 0 & *(byte *)(param_1 + 0x10a9)) != 1)) goto LAB_14577defa;
  FUN_140056680(local_a8,L"FRPCDoSAnalyticsData");
  FUN_1446f470e(local_b0,L"Core.ServerRPCDoS",1);
  _Dst = (undefined8 *)FUN_14001cc68(0xf0);
  memset(_Dst,0,0xf0);
  FUN_146efa5c6(_Dst);
  FUN_14577d6f0(_Dst + 4);
  *_Dst = &PTR_FUN_14a9fc720;
  _Dst[0x14] = 0;
  _Dst[0x16] = 0;
  *(undefined1 *)(_Dst + 0x1c) = 0;
  local_c0 = _Dst;
  plVar19 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar19[1] = (longlong)&DAT_100000001;
  *plVar19 = (longlong)&PTR_FUN_14a9fcb90;
  plVar19[2] = (longlong)_Dst;
  local_b8 = plVar19;
  if ((_Dst != (undefined8 *)0x0) &&
     (((_Dst[1] == 0 || (_Dst[2] == 0)) || (*(int *)(_Dst[2] + 8) < 1)))) {
    if (plVar19 == (longlong *)0x0) {
      _Dst[1] = _Dst;
      plVar20 = (longlong *)_Dst[2];
      if (plVar20 != (longlong *)0x0) {
LAB_14577e095:
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar20 + 0x10))();
        }
        _Dst[2] = plVar19;
        if (plVar19 != (longlong *)0x0) goto LAB_14577e0f4;
      }
    }
    else {
      LOCK();
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      UNLOCK();
      _Dst[1] = _Dst;
      if ((longlong *)_Dst[2] != plVar19) {
        LOCK();
        *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
        UNLOCK();
        plVar20 = (longlong *)_Dst[2];
        if (plVar20 != (longlong *)0x0) goto LAB_14577e095;
        _Dst[2] = plVar19;
      }
LAB_14577e0f4:
      LOCK();
      plVar20 = plVar19 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
  }
  local_c8 = local_a8;
  FUN_142a62264(lVar3,&local_98,&local_c0,local_b0);
  plVar19 = uStack_90;
  if (uStack_90 == (longlong *)0x0) {
    ((LARGE_INTEGER *)(param_1 + 0x1440))->QuadPart = (LONGLONG)local_98;
    plVar20 = *(longlong **)(param_1 + 0x1448);
    if (plVar20 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1448) = 0;
LAB_14577e194:
      LOCK();
      plVar19 = plVar20 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014577e1c1:
        if (iVar2 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(uStack_90 + 1) = (int)uStack_90[1] + 1;
    UNLOCK();
    ((LARGE_INTEGER *)(param_1 + 0x1440))->QuadPart = (LONGLONG)local_98;
    plVar20 = *(longlong **)(param_1 + 0x1448);
    if (uStack_90 == plVar20) {
      LOCK();
      plVar20 = uStack_90 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*uStack_90)(uStack_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar20 = plVar19;
        goto joined_r0x00014577e1c1;
      }
    }
    else {
      *(longlong **)(param_1 + 0x1448) = uStack_90;
      if (plVar20 != (longlong *)0x0) goto LAB_14577e194;
    }
  }
  plVar19 = uStack_90;
  if (uStack_90 != (longlong *)0x0) {
    LOCK();
    plVar20 = uStack_90 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*uStack_90)(uStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x1440);
  if (lVar3 != 0) {
    local_98 = (LARGE_INTEGER)*(LARGE_INTEGER *)&((LARGE_INTEGER *)(lVar3 + 0xa0))->s;
    plVar19 = *(longlong **)(lVar3 + 0xa8);
    local_88 = *(undefined8 *)(lVar3 + 0xb0);
    uStack_80 = *(undefined8 *)(lVar3 + 0xb8);
    local_78 = *(undefined8 *)(lVar3 + 0xc0);
    uStack_70 = *(undefined8 *)(lVar3 + 200);
    local_68 = *(undefined8 *)(lVar3 + 0xd0);
    uStack_60 = *(undefined8 *)(lVar3 + 0xd8);
    uVar4 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)(param_4 + 2);
    uVar6 = *(undefined8 *)(param_4 + 4);
    uVar7 = *(undefined8 *)(param_4 + 6);
    uVar8 = *(undefined8 *)(param_4 + 8);
    uVar9 = *(undefined8 *)(param_4 + 10);
    uVar10 = *(undefined8 *)(param_4 + 0xe);
    *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(param_4 + 0xc);
    *(undefined8 *)(lVar3 + 0xd8) = uVar10;
    *(undefined8 *)(lVar3 + 0xc0) = uVar8;
    *(undefined8 *)(lVar3 + 200) = uVar9;
    *(undefined8 *)(lVar3 + 0xb0) = uVar6;
    *(undefined8 *)(lVar3 + 0xb8) = uVar7;
    *(undefined8 *)(lVar3 + 0xa0) = uVar4;
    *(undefined8 *)(lVar3 + 0xa8) = uVar5;
    uStack_90._0_4_ = (DWORD)plVar19;
    uStack_90._4_4_ = (DWORD)((ulonglong)plVar19 >> 0x20);
    *(undefined8 *)(param_4 + 0xc) = local_68;
    *(undefined8 *)(param_4 + 0xe) = uStack_60;
    *(undefined8 *)(param_4 + 8) = local_78;
    *(undefined8 *)(param_4 + 10) = uStack_70;
    *(undefined8 *)(param_4 + 4) = local_88;
    *(undefined8 *)(param_4 + 6) = uStack_80;
    *param_4 = local_98.s.LowPart;
    param_4[1] = local_98.s.HighPart;
    param_4[2] = (DWORD)uStack_90;
    param_4[3] = uStack_90._4_4_;
    uStack_90 = plVar19;
  }
LAB_14577defa:
  QueryPerformanceCounter(&local_98);
  uVar21 = SUB84((double)local_98.QuadPart * DAT_14c83f420 + 16777216.0,0);
  if (*(char *)(param_1 + 0x1358) != *(char *)(param_1 + 0xb)) {
    if (*(char *)(param_1 + 0xb) == '\0') {
      *(undefined1 *)(param_1 + 0x1358) = 0;
    }
    else {
      FUN_147be4d24(param_1,uVar21);
    }
  }
  if (*(char *)(param_1 + 0x10a9) == '\x01') {
    FUN_146834c22(0);
  }
  FUN_1406ff68a(param_1,uVar21);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577e28a FUN_14577e28a body=115 status=ok
// SIG undefined FUN_14577e28a(void)

int FUN_14577e28a(longlong *param_1,uint param_2,int *param_3)

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
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14577e2fe FUN_14577e2fe body=162 status=ok
// SIG undefined FUN_14577e2fe(void)

void FUN_14577e2fe(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14577e38b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14577e38b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14577e3a0 FUN_14577e3a0 body=282 status=ok
// SIG undefined FUN_14577e3a0(void)

undefined8 FUN_14577e3a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x9a8) = 0;
  if ((*(longlong *)(param_1 + 0xa8) != 0) && (*(longlong *)(param_1 + 0x9d0) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0x9c8);
    if (cVar1 != '\0') {
      local_20 = 2;
      local_1c = 1;
      FUN_140513926(param_1 + 0x990,param_1);
      cVar1 = FUN_140b8e072(param_1 + 0x990);
      uVar3 = 0;
      if (cVar1 != '\0') {
        *(undefined4 *)(param_1 + 0x9ac) = 0;
        *(undefined4 *)(param_1 + 0x9b4) = 0;
        uVar3 = 1;
        if (*(longlong *)(param_1 + 0x9f0) != 0) {
          cVar1 = FUN_144729dda(param_1 + 0x9e8);
          if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x9f0) != (longlong *)0x0)) {
            uVar2 = (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x18))();
            local_24 = 0;
            local_38 = DAT_14cb8c178;
            local_30 = 0xffffffff;
            local_48 = DAT_14cb8c168;
            local_40 = 0xffffffff;
            FUN_140f8b8f2(uVar2);
          }
        }
      }
      goto LAB_14577e497;
    }
  }
  uVar3 = 0;
LAB_14577e497:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577e4bc FUN_14577e4bc body=120 status=ok
// SIG undefined FUN_14577e4bc(void)

undefined * FUN_14577e4bc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb41300) {
    FUN_144b3d300(&DAT_14cb41300);
    if (DAT_14cb41300 == -1) {
      FUN_1456bda78(&DAT_14cb3f130);
      DAT_14cb412f0 = &DAT_14cb3f130;
      atexit(FUN_143a9fd0b);
      _Init_thread_footer(&DAT_14cb41300);
    }
  }
  return DAT_14cb412f0;
}



// FUNCTION 14577e534 FUN_14577e534 body=588 status=ok
// SIG undefined FUN_14577e534(void)

void FUN_14577e534(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  void *pvVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  void *local_70;
  int local_68;
  void *local_60;
  int local_58;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = FUN_144a617d4(DAT_14ca85550,1);
  if (cVar3 != '\0') {
    FUN_14577e7d0(&local_70);
    local_88 = 0;
    FUN_140b9bef8(param_1 + 0x10,param_2,L"TessellationTable.Offsets",local_68 << 3);
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    cVar3 = *(char *)(param_2 + 0x69);
    if (cVar3 == '\0') {
      FUN_14002049c(param_2,1);
    }
    local_80 = 1;
    local_88 = uVar1;
    pvVar4 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar2,0);
    if (cVar3 == '\0') {
      FUN_14002049c(param_2,0);
    }
    memcpy(pvVar4,local_70,(ulonglong)*(uint *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
      FUN_14002049c(param_2,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
    }
    local_88 = 0;
    FUN_140b9bef8(param_1 + 0x28,param_2,L"TessellationTable.VertsAndIndexes",local_58 << 2);
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    cVar3 = *(char *)(param_2 + 0x69);
    if (cVar3 == '\0') {
      FUN_14002049c(param_2,1);
    }
    local_80 = 1;
    local_88 = uVar1;
    pvVar4 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar2,0);
    if (cVar3 == '\0') {
      FUN_14002049c(param_2,0);
    }
    memcpy(pvVar4,local_60,(ulonglong)*(uint *)(param_1 + 0x38));
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
      FUN_14002049c(param_2,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
    }
    FUN_14577e782(&local_70);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577e782 FUN_14577e782 body=78 status=ok
// SIG undefined FUN_14577e782(void)

void FUN_14577e782(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14577e7d0 FUN_14577e7d0 body=260 status=ok
// SIG undefined FUN_14577e7d0(void)

undefined8 * FUN_14577e7d0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1414927bc(&local_40);
  FUN_1412cfe60(&local_30,&local_40,(local_38 == 0) + '\x1f');
  FUN_1401aebe8(&local_30,L"Renderer/TessellationTable.bin",0x1e);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)FUN_14054d1d4();
  puVar3 = local_30;
  if (local_28 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x18))(plVar1,puVar3,0);
  FUN_140b9bcb2(puVar2,param_1);
  FUN_1447a84cc(puVar2,param_1 + 2);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14577e8d6 FUN_14577e8d6 body=96 status=ok
// SIG undefined FUN_14577e8d6(void)

void FUN_14577e8d6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 14577e936 FUN_14577e936 body=132 status=ok
// SIG undefined FUN_14577e936(void)

void FUN_14577e936(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14577e9bc FUN_14577e9bc body=109 status=ok
// SIG undefined FUN_14577e9bc(void)

void FUN_14577e9bc(longlong param_1,undefined4 param_2)

{
  byte *pbVar1;
  short sVar2;
  uint uVar3;
  longlong lVar4;
  
  sVar2 = *(short *)(param_1 + 0x24);
  pbVar1 = (byte *)(param_1 + 0x27);
  *pbVar1 = *pbVar1 & sVar2 != (short)param_2;
  if (*pbVar1 != 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    if ((uVar3 & 0x7fffffff) != 0) {
      lVar4 = 0;
      do {
        FUN_14475c2da(*(longlong *)(param_1 + 8) + lVar4,sVar2,param_2,1);
        lVar4 = lVar4 + 0x10;
      } while (((ulonglong)uVar3 & 0x7fffffff) * 0x10 != lVar4);
    }
    *(undefined1 *)(param_1 + 0x27) = 0;
  }
  *(short *)(param_1 + 0x24) = (short)param_2;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}



// FUNCTION 14577ea2a FUN_14577ea2a body=212 status=ok
// SIG undefined FUN_14577ea2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14577ea2a(void)

{
  if ((DAT_14c9c289f & 2) == 0) {
    DAT_14c9c289f = DAT_14c9c289f | 2;
    _DAT_14c9c2840 = L"FDeferredDecalPS";
    _DAT_14c9c2858 = FUN_146826540;
    _DAT_14c9c2860 = FUN_146825d77;
    _DAT_14c9c2868 = FUN_146825fd6;
    _DAT_14c9c2870 = FUN_1407e02ea;
    _DAT_14c9c2878 = FUN_146826273;
    _DAT_14c9c2850 = FUN_147145efc;
    _DAT_14c9c2890 = 0xffffffff00000140;
    _DAT_14c9c2898 = 8;
    DAT_14c9c289c = 0;
    _DAT_14c9c2880 = &LAB_147145f32;
    FUN_14577eafe();
    FUN_14577f0b6();
    FUN_1407e00cc(&DAT_14c9c2838);
  }
  return &DAT_14c9c2838;
}



// FUNCTION 14577eafe FUN_14577eafe body=121 status=ok
// SIG undefined FUN_14577eafe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577eafe(void)

{
  FUN_14577eb78();
  _DAT_14c9c3bd8 = L"SvPositionToDecal";
  DAT_14c9c3c02 = FUN_140850cc5();
  _DAT_14c9c3be0 = FUN_140ec6960();
  _DAT_14c9c3bf0 = &LAB_14682652b;
  _DAT_14c9c3bf8 = 0x1000000f8;
  _DAT_14c9c3c00 = 0;
  _DAT_14c9c3be8 = DAT_14c9c2848;
  DAT_14c9c2848 = &DAT_14c9c3bd8;
  return;
}



// FUNCTION 14577eb78 FUN_14577eb78 body=121 status=ok
// SIG undefined FUN_14577eb78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577eb78(void)

{
  FUN_14577ebf2();
  _DAT_14c9c3c08 = L"RightEyeSvPositionToDecal";
  DAT_14c9c3c32 = FUN_140850cc5();
  _DAT_14c9c3c10 = FUN_140ec6960();
  _DAT_14c9c3c20 = &LAB_14682652b;
  _DAT_14c9c3c28 = 0x1000000fe;
  _DAT_14c9c3c30 = 0;
  _DAT_14c9c3c18 = DAT_14c9c2848;
  DAT_14c9c2848 = &DAT_14c9c3c08;
  return;
}



// FUNCTION 14577ebf2 FUN_14577ebf2 body=121 status=ok
// SIG undefined FUN_14577ebf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577ebf2(void)

{
  FUN_14577ec6c();
  _DAT_14c9c3c38 = L"DecalPositionHigh";
  DAT_14c9c3c62 = FUN_140850cc5();
  _DAT_14c9c3c40 = FUN_140ec6960();
  _DAT_14c9c3c50 = &LAB_14682652b;
  _DAT_14c9c3c58 = 0x100000104;
  _DAT_14c9c3c60 = 0;
  _DAT_14c9c3c48 = DAT_14c9c2848;
  DAT_14c9c2848 = &DAT_14c9c3c38;
  return;
}



// FUNCTION 14577ec6c FUN_14577ec6c body=121 status=ok
// SIG undefined FUN_14577ec6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577ec6c(void)

{
  FUN_14577ece6();
  _DAT_14c9c3c68 = L"DecalToWorld";
  DAT_14c9c3c92 = FUN_140850cc5();
  _DAT_14c9c3c70 = FUN_140ec6960();
  _DAT_14c9c3c80 = &LAB_14682652b;
  _DAT_14c9c3c88 = 0x10000010a;
  _DAT_14c9c3c90 = 0;
  _DAT_14c9c3c78 = DAT_14c9c2848;
  DAT_14c9c2848 = &DAT_14c9c3c68;
  return;
}



// FUNCTION 14577ece6 FUN_14577ece6 body=121 status=ok
// SIG undefined FUN_14577ece6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577ece6(void)

{
  FUN_14577ed60();
  _DAT_14c9c3c98 = L"DecalToWorldInvScale";
  DAT_14c9c3cc2 = FUN_140850cc5();
  _DAT_14c9c3ca0 = FUN_140ec6960();
  _DAT_14c9c3cb0 = &LAB_14682652b;
  _DAT_14c9c3cb8 = 0x100000110;
  _DAT_14c9c3cc0 = 0;
  _DAT_14c9c3ca8 = DAT_14c9c2848;
  DAT_14c9c2848 = &DAT_14c9c3c98;
  return;
}



// FUNCTION 14577ed60 FUN_14577ed60 body=121 status=ok
// SIG undefined FUN_14577ed60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577ed60(void)

{
  FUN_14577edda();
  _DAT_14c9c3cc8 = L"DecalOrientation";
  DAT_14c9c3cf2 = FUN_140850cc5();
  _DAT_14c9c3cd0 = FUN_140ec6960();
  _DAT_14c9c3ce0 = &LAB_14682652b;
  _DAT_14c9c3ce8 = 0x100000116;
  _DAT_14c9c3cf0 = 0;
  _DAT_14c9c3cd8 = DAT_14c9c2848;
  DAT_14c9c2848 = &DAT_14c9c3cc8;
  return;
}



// FUNCTION 14577edda FUN_14577edda body=121 status=ok
// SIG undefined FUN_14577edda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577edda(void)

{
  FUN_14577ee54();
  _DAT_14c9c3cf8 = L"DecalParams";
  DAT_14c9c3d22 = FUN_140850cc5();
  _DAT_14c9c3d00 = FUN_140ec6960();
  _DAT_14c9c3d10 = &LAB_14682652b;
  _DAT_14c9c3d18 = 0x10000011c;
  _DAT_14c9c3d20 = 0;
  _DAT_14c9c3d08 = DAT_14c9c2848;
  DAT_14c9c2848 = &DAT_14c9c3cf8;
  return;
}



// FUNCTION 14577ee54 FUN_14577ee54 body=121 status=ok
// SIG undefined FUN_14577ee54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577ee54(void)

{
  FUN_14577eece();
  _DAT_14c9c3d28 = L"DecalColorParam";
  DAT_14c9c3d52 = FUN_140850cc5();
  _DAT_14c9c3d30 = FUN_140ec6960();
  _DAT_14c9c3d40 = &LAB_14682652b;
  _DAT_14c9c3d48 = 0x100000122;
  _DAT_14c9c3d50 = 0;
  _DAT_14c9c3d38 = DAT_14c9c2848;
  DAT_14c9c2848 = &DAT_14c9c3d28;
  return;
}



// FUNCTION 14577eece FUN_14577eece body=121 status=ok
// SIG undefined FUN_14577eece(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577eece(void)

{
  FUN_14577ef48();
  _DAT_14c9c3d58 = L"MobileBasePassUniformBuffer";
  DAT_14c9c3d82 = FUN_140850cc5();
  _DAT_14c9c3d60 = FUN_14106a12a();
  _DAT_14c9c3d70 = &LAB_14682652b;
  _DAT_14c9c3d78 = 0x100000128;
  _DAT_14c9c3d80 = 0;
  _DAT_14c9c3d68 = DAT_14c9c2848;
  DAT_14c9c2848 = &DAT_14c9c3d58;
  return;
}



// FUNCTION 14577ef48 FUN_14577ef48 body=121 status=ok
// SIG undefined FUN_14577ef48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577ef48(void)

{
  FUN_14577efc2();
  _DAT_14c9c3d88 = L"MobileDirectionLightBufferParam";
  DAT_14c9c3db2 = FUN_140850cc5();
  _DAT_14c9c3d90 = FUN_14106a12a();
  _DAT_14c9c3da0 = &LAB_14682652b;
  _DAT_14c9c3da8 = 0x10000012a;
  _DAT_14c9c3db0 = 0;
  _DAT_14c9c3d98 = DAT_14c9c2848;
  DAT_14c9c2848 = &DAT_14c9c3d88;
  return;
}



// FUNCTION 14577efc2 FUN_14577efc2 body=121 status=ok
// SIG undefined FUN_14577efc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577efc2(void)

{
  FUN_14577f03c();
  _DAT_14c9c3db8 = L"MobileReflectionCaptureParam";
  DAT_14c9c3de2 = FUN_140850cc5();
  _DAT_14c9c3dc0 = FUN_14106a12a();
  _DAT_14c9c3dd0 = &LAB_14682652b;
  _DAT_14c9c3dd8 = 0x10000012c;
  _DAT_14c9c3de0 = 0;
  _DAT_14c9c3dc8 = DAT_14c9c2848;
  DAT_14c9c2848 = &DAT_14c9c3db8;
  return;
}



// FUNCTION 14577f03c FUN_14577f03c body=121 status=ok
// SIG undefined FUN_14577f03c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577f03c(void)

{
  FUN_14577f3da();
  _DAT_14c9c3de8 = L"SecondaryDecalChanelParam";
  DAT_14c9c3e12 = FUN_140850cc5();
  _DAT_14c9c3df0 = FUN_140ec6960();
  _DAT_14c9c3e00 = &LAB_14682652b;
  _DAT_14c9c3e08 = 0x10000012e;
  _DAT_14c9c3e10 = 0;
  _DAT_14c9c3df8 = DAT_14c9c2848;
  DAT_14c9c2848 = &DAT_14c9c3de8;
  return;
}



// FUNCTION 14577f0b6 FUN_14577f0b6 body=123 status=ok
// SIG undefined FUN_14577f0b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577f0b6(void)

{
  _DAT_14c9c4390 = L"BASE";
  DAT_14c9c43ba = 4;
  _DAT_14c9c4398 = FUN_141526006();
  _DAT_14c9c43a0 = DAT_14c9c2848;
  _DAT_14c9c43a8 = &LAB_14682652b;
  DAT_14c9c2848 = &DAT_14c9c4390;
  DAT_14c9c289d = DAT_14c9c289d + '\x01';
  _DAT_14c9c43b0 = 0x100000000;
  if (*(char *)(_DAT_14c9c4398 + 100) != '\0') {
    DAT_14c9c289e = DAT_14c9c289e + '\x01';
  }
  return;
}



// FUNCTION 14577f132 FUN_14577f132 body=205 status=ok
// SIG undefined FUN_14577f132(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577f132(void)

{
  if ((DAT_14c9c1f47 & 2) == 0) {
    DAT_14c9c1f47 = DAT_14c9c1f47 | 2;
    _DAT_14c9c1ee8 = L"FMeshDecalsAmbientOcclusionPS";
    _DAT_14c9c1f00 = FUN_146826540;
    _DAT_14c9c1f08 = FUN_146825d77;
    _DAT_14c9c1f10 = FUN_146825fd6;
    _DAT_14c9c1f18 = FUN_1407e02ea;
    _DAT_14c9c1f20 = FUN_146826273;
    _DAT_14c9c1ef8 = FUN_147144fd4;
    _DAT_14c9c1f38 = 0xffffffff00000108;
    _DAT_14c9c1f40 = 8;
    DAT_14c9c1f44 = 0;
    _DAT_14c9c1f28 = &LAB_14714500a;
    FUN_14577f200();
    FUN_1407e00cc(&DAT_14c9c1ee0);
    return;
  }
  return;
}



// FUNCTION 14577f200 FUN_14577f200 body=133 status=ok
// SIG undefined FUN_14577f200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577f200(void)

{
  _DAT_14c9c4248 = L"BASE";
  DAT_14c9c4272 = 4;
  FUN_14578af2e();
  _DAT_14c9c4258 = DAT_14c9c1ef0;
  _DAT_14c9c4250 = &DAT_14c9c1c90;
  _DAT_14c9c4260 = &LAB_14682652b;
  DAT_14c9c1ef0 = &DAT_14c9c4248;
  DAT_14c9c1f45 = DAT_14c9c1f45 + '\x01';
  _DAT_14c9c4268 = 0x100000000;
  if (DAT_14c9c1cf4 != '\0') {
    DAT_14c9c1f46 = DAT_14c9c1f46 + '\x01';
  }
  return;
}



// FUNCTION 14577f286 FUN_14577f286 body=206 status=ok
// SIG undefined FUN_14577f286(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14577f286(void)

{
  if ((DAT_14c9c2aef & 2) == 0) {
    DAT_14c9c2aef = DAT_14c9c2aef | 2;
    _DAT_14c9c2a90 = L"FDeferredDecalAmbientOcclusionPS";
    _DAT_14c9c2aa8 = FUN_146826540;
    _DAT_14c9c2ab0 = FUN_146825d77;
    _DAT_14c9c2ab8 = FUN_146825fd6;
    _DAT_14c9c2ac0 = FUN_1407e02ea;
    _DAT_14c9c2ac8 = FUN_146826273;
    _DAT_14c9c2aa0 = FUN_1471461ac;
    _DAT_14c9c2ae0 = 0xffffffff00000140;
    _DAT_14c9c2ae8 = 8;
    DAT_14c9c2aec = 0;
    _DAT_14c9c2ad0 = &LAB_1471461e2;
    FUN_14577f354();
    FUN_1407e00cc(&DAT_14c9c2a88);
  }
  return &DAT_14c9c2a88;
}



// FUNCTION 14577f354 FUN_14577f354 body=133 status=ok
// SIG undefined FUN_14577f354(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577f354(void)

{
  _DAT_14c9c43f0 = L"BASE";
  DAT_14c9c441a = 4;
  FUN_14577ea2a();
  _DAT_14c9c4400 = DAT_14c9c2a98;
  _DAT_14c9c43f8 = &DAT_14c9c2838;
  _DAT_14c9c4408 = &LAB_14682652b;
  DAT_14c9c2a98 = &DAT_14c9c43f0;
  DAT_14c9c2aed = DAT_14c9c2aed + '\x01';
  _DAT_14c9c4410 = 0x100000000;
  if (DAT_14c9c289c != '\0') {
    DAT_14c9c2aee = DAT_14c9c2aee + '\x01';
  }
  return;
}



// FUNCTION 14577f3da FUN_14577f3da body=216 status=ok
// SIG undefined FUN_14577f3da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577f3da(void)

{
  _DAT_14c9c3e48 = L"GbxInkMapParam";
  DAT_14c9c3e72 = FUN_140850cc5();
  _DAT_14c9c3e50 = FUN_140fb78d0();
  _DAT_14c9c3e60 = &LAB_14682652b;
  _DAT_14c9c3e68 = 0x100000138;
  _DAT_14c9c3e70 = 0;
  _DAT_14c9c3e58 = DAT_14c9c2848;
  DAT_14c9c2848 = &DAT_14c9c3e48;
  _DAT_14c9c3e18 = L"StencilTextureParam";
  DAT_14c9c3e42 = FUN_140850cc5();
  _DAT_14c9c3e20 = FUN_140fb78d0();
  _DAT_14c9c3e30 = &LAB_14682652b;
  _DAT_14c9c3e38 = 0x100000134;
  _DAT_14c9c3e40 = 0;
  _DAT_14c9c3e28 = DAT_14c9c2848;
  DAT_14c9c2848 = &DAT_14c9c3e18;
  return;
}



// FUNCTION 14577f4b2 FUN_14577f4b2 body=94 status=ok
// SIG undefined FUN_14577f4b2(void)

void FUN_14577f4b2(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x168);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_140ba0042();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140ba0042();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014577f505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x30))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14577f510 FUN_14577f510 body=340 status=ok
// SIG undefined FUN_14577f510(void)

undefined4 * FUN_14577f510(undefined4 *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14577f6fc(local_40);
  lVar2 = *param_2;
  puVar3 = (undefined4 *)param_2[1];
  *local_38 = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(lVar2 + 0x18);
  *(byte *)(local_38 + 3) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(local_38 + 1,lVar2 + 8);
  *(undefined4 *)(local_38 + 4) = *puVar3;
  *(undefined4 *)(local_38 + 5) = 0xffffffff;
  local_44 = local_40[0];
  uVar6 = FUN_140ba40f9(local_38);
  cVar5 = FUN_14577f666(uVar6,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar7 = DAT_14cb979d8 - DAT_14cb97a04;
    iVar10 = 1;
    if (3 < uVar7) {
      uVar9 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= DAT_14cb97a18)) {
      uVar6 = DAT_14cb97a18 - 1U & uVar6;
      *(uint *)((longlong)local_38 + 0x2c) = uVar6;
      puVar8 = DAT_14cb97a10;
      if (DAT_14cb97a10 == (undefined *)0x0) {
        puVar8 = &DAT_14cb97a08;
      }
      *(undefined4 *)(local_38 + 5) =
           *(undefined4 *)(puVar8 + ((longlong)DAT_14cb97a18 - 1U & (longlong)(int)uVar6) * 4);
      puVar8 = DAT_14cb97a10;
      if (DAT_14cb97a10 == (undefined *)0x0) {
        puVar8 = &DAT_14cb97a08;
      }
      *(undefined4 *)(puVar8 + ((longlong)DAT_14cb97a18 - 1U & (longlong)(int)uVar6) * 4) = local_44
      ;
    }
    else {
      DAT_14cb97a18 = iVar10;
      FUN_14577f812();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577f666 FUN_14577f666 body=149 status=ok
// SIG undefined FUN_14577f666(void)

undefined8 FUN_14577f666(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if ((DAT_14cb979d8 - DAT_14cb97a04 != 1) && (iVar10 = FUN_140ba4172(), iVar10 != -1)) {
    puVar1 = (undefined8 *)(DAT_14cb979d0 + (longlong)iVar10 * 0x30);
    *puVar1 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(puVar1 + 3)])(puVar1 + 1);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    uVar8 = param_2[6];
    uVar9 = param_2[7];
    puVar1[4] = *(undefined8 *)(param_2 + 8);
    *(undefined4 *)(puVar1 + 2) = uVar6;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uVar7;
    *(undefined4 *)(puVar1 + 3) = uVar8;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar9;
    *(undefined4 *)puVar1 = uVar2;
    *(undefined4 *)((longlong)puVar1 + 4) = uVar3;
    *(undefined4 *)(puVar1 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uVar5;
    FUN_148ab6498(*param_3);
    *param_3 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 14577f6fc FUN_14577f6fc body=278 status=ok
// SIG undefined FUN_14577f6fc(void)

int * FUN_14577f6fc(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb97a00;
  iVar3 = DAT_14cb979d8;
  if (DAT_14cb97a04 == 0) {
    iVar2 = DAT_14cb979d8 + 1;
    bVar7 = DAT_14cb979dc == DAT_14cb979d8;
    DAT_14cb979d8 = iVar2;
    if (bVar7) {
      FUN_140044672(&DAT_14cb979d0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb979e0,1);
    puVar4 = DAT_14cb979f0;
    if (DAT_14cb979f0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb979e0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb97a00;
    DAT_14cb97a00 = *(int *)(DAT_14cb979d0 + 4 + lVar6 * 0x30);
    DAT_14cb97a04 = DAT_14cb97a04 + -1;
    if (DAT_14cb97a04 != 0) {
      *(undefined4 *)(DAT_14cb979d0 + (longlong)DAT_14cb97a00 * 0x30) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb979e0;
  if (DAT_14cb979f0 != (undefined *)0x0) {
    puVar4 = DAT_14cb979f0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x30 + DAT_14cb979d0;
  return param_1;
}



// FUNCTION 14577f812 FUN_14577f812 body=490 status=ok
// SIG undefined FUN_14577f812(void)

void FUN_14577f812(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb97a10 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb97a10,0,0,4);
  }
  uVar2 = DAT_14cb97a18;
  uVar3 = local_60;
  if (DAT_14cb97a18 != 0) {
    uVar8 = 0;
    FUN_144a1cbf0(&DAT_14cb97a08,0,DAT_14cb97a18,4);
    if (0 < (int)uVar2) {
      do {
        puVar7 = DAT_14cb97a10;
        if (DAT_14cb97a10 == (undefined *)0x0) {
          puVar7 = &DAT_14cb97a08;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cb97a18 + 0x7fffffff & uVar8) * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14cb979e0;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14cb979f8 != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = &DAT_14cb979d0;
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if (local_60._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar4 = local_60._4_4_;
      local_60 = uVar3;
      do {
        lVar1 = *local_78;
        lVar9 = (longlong)iVar4 * 0x30;
        iVar5 = FUN_140ba40f9(lVar1 + lVar9);
        uVar6 = (longlong)iVar5 & (longlong)(int)DAT_14cb97a18 - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar1 + 0x2c + lVar9) = iVar5;
        puVar7 = DAT_14cb97a10;
        if (DAT_14cb97a10 == (undefined *)0x0) {
          puVar7 = &DAT_14cb97a08;
        }
        *(undefined4 *)(lVar1 + 0x28 + lVar9) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14cb97a18 - 1U & uVar6) * 4);
        puVar7 = DAT_14cb97a10;
        if (DAT_14cb97a10 == (undefined *)0x0) {
          puVar7 = &DAT_14cb97a08;
        }
        *(int *)(puVar7 + ((longlong)iVar5 & (longlong)(int)DAT_14cb97a18 - 1U) * 4) = iVar4;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
    }
  }
  local_60 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14577f9fe FUN_14577f9fe body=205 status=ok
// SIG undefined FUN_14577f9fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577f9fe(void)

{
  if ((DAT_14c9c4c9f & 2) == 0) {
    DAT_14c9c4c9f = DAT_14c9c4c9f | 2;
    _DAT_14c9c4c40 = L"FDigistructStencilEffectPS";
    _DAT_14c9c4c58 = FUN_146826540;
    _DAT_14c9c4c60 = FUN_146825d77;
    _DAT_14c9c4c68 = FUN_146825fd6;
    _DAT_14c9c4c70 = FUN_1407e02ea;
    _DAT_14c9c4c78 = FUN_146826273;
    _DAT_14c9c4c50 = FUN_14714d97e;
    _DAT_14c9c4c90 = 0xffffffff00000108;
    _DAT_14c9c4c98 = 8;
    DAT_14c9c4c9c = 0;
    _DAT_14c9c4c80 = &LAB_14714d9b4;
    FUN_14577facc();
    FUN_1407e00cc(&DAT_14c9c4c38);
    return;
  }
  return;
}



// FUNCTION 14577facc FUN_14577facc body=123 status=ok
// SIG undefined FUN_14577facc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577facc(void)

{
  _DAT_14c9c9248 = L"BASE";
  DAT_14c9c9272 = 4;
  _DAT_14c9c9250 = FUN_141092e92();
  _DAT_14c9c9258 = DAT_14c9c4c48;
  _DAT_14c9c9260 = &LAB_14682652b;
  DAT_14c9c4c48 = &DAT_14c9c9248;
  DAT_14c9c4c9d = DAT_14c9c4c9d + '\x01';
  _DAT_14c9c9268 = 0x100000000;
  if (*(char *)(_DAT_14c9c9250 + 100) != '\0') {
    DAT_14c9c4c9e = DAT_14c9c4c9e + '\x01';
  }
  return;
}



// FUNCTION 14577fb48 FUN_14577fb48 body=164 status=ok
// SIG undefined FUN_14577fb48(void)

void FUN_14577fb48(longlong param_1,longlong *param_2)

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
    if ((longlong *)param_2[1] == plVar2) goto LAB_14577fbc0;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_14577fbc0;
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
LAB_14577fbc0:
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
                    /* WARNING: Could not recover jumptable at 0x00014577fbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14577fbec FUN_14577fbec body=225 status=ok
// SIG undefined FUN_14577fbec(void)

undefined1 *
FUN_14577fbec(undefined1 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,longlong *param_7,undefined8 *param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined8 *)(param_1 + 0x20) = param_6;
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar3 = (int)param_7[1];
  _Src = (void *)*param_7;
  *(int *)(param_1 + 0x30) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x28,iVar3,0);
    memcpy(*(void **)(param_1 + 0x28),_Src,(longlong)iVar3 * 2);
  }
  *(undefined8 *)(param_1 + 0x38) = *param_8;
  lVar4 = param_8[1];
  *(longlong *)(param_1 + 0x40) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  if (*param_7 != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_8[1];
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
  return param_1;
}



// FUNCTION 14577fcce FUN_14577fcce body=303 status=ok
// SIG undefined FUN_14577fcce(void)

undefined4 * FUN_14577fcce(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489d9fda(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *(undefined8 *)(local_40 + 4) = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1489da0c0(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1489da1f0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577fdfe FUN_14577fdfe body=102 status=ok
// SIG undefined FUN_14577fdfe(void)

undefined8 FUN_14577fdfe(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,L"gadget");
  FUN_140775538(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577fe66 FUN_14577fe66 body=102 status=ok
// SIG undefined FUN_14577fe66(void)

undefined8 FUN_14577fe66(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,L"repairkit");
  FUN_140775538(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577fece FUN_14577fece body=22 status=ok
// SIG undefined FUN_14577fece(void)

undefined8 FUN_14577fece(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cbc8d78;
  if (DAT_14cbc8d78 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cbc8d78 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbc8d78 + 0x154) & 1) == 0) ||
       ((int)DAT_14cbc8d78[0x3a] <= *(int *)((longlong)DAT_14cbc8d78 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cbc8d78 + 0x300))(DAT_14cbc8d78);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 14577fee4 FUN_14577fee4 body=113 status=ok
// SIG undefined FUN_14577fee4(void)

undefined8 *
FUN_14577fee4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = FUN_140b47a16(param_1,param_3);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 8) == '\x02')) {
    param_4 = (undefined8 *)(lVar2 + 0x38);
  }
  *param_2 = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 14577ff56 FUN_14577ff56 body=146 status=ok
// SIG undefined FUN_14577ff56(void)

void FUN_14577ff56(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
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
    uVar5 = FUN_144a3809e(lVar4 * 0xe0,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14577ffea FUN_14577ffea body=1094 status=ok
// SIG undefined FUN_14577ffea(void)

void FUN_14577ffea(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  int iVar13;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) goto LAB_14578011a;
  FUN_140bad112(param_1 + 0x4b0,&DAT_149dfb77a);
  uVar8 = FUN_1447a1f4a(param_2 + 0x68);
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  FUN_144a787a6(param_1 + 0xb8,uVar8);
  lVar9 = FUN_1447a1f4a(param_2 + 0x78);
  if ((1 < *(int *)(lVar9 + 8)) && (*(int *)(param_1 + 0x508) != *(int *)(param_1 + 0x534))) {
    lVar9 = *(longlong *)(param_1 + 0x540);
    if (*(longlong *)(param_1 + 0x540) == 0) {
      lVar9 = param_1 + 0x538;
    }
    iVar13 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x548) - 1U & 9) * 4);
    if (iVar13 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x500);
      iVar7 = iVar13;
      do {
        if (*(char *)(lVar9 + (longlong)iVar7 * 0x28) == '\t') goto LAB_1457801f9;
        iVar7 = *(int *)(lVar9 + (longlong)iVar7 * 0x28 + 0x20);
      } while (iVar7 != -1);
    }
  }
  goto LAB_14578006d;
  while (iVar13 = *(int *)(pcVar12 + 0x20), iVar13 != -1) {
LAB_1457801f9:
    pcVar12 = (char *)(lVar9 + (longlong)iVar13 * 0x28);
    if (*pcVar12 == '\t') goto LAB_14578020d;
  }
  pcVar12 = (char *)0x0;
LAB_14578020d:
  if (0 < *(int *)(pcVar12 + 0x10)) {
    uVar8 = FUN_1447a1f4a(param_2 + 0x78);
    if (*(int *)(param_1 + 0x508) != *(int *)(param_1 + 0x534)) {
      lVar9 = param_1 + 0x538;
      if (*(longlong *)(param_1 + 0x540) != 0) {
        lVar9 = *(longlong *)(param_1 + 0x540);
      }
      iVar13 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x548) - 1U & 9) * 4);
      if (iVar13 != -1) {
        do {
          pcVar12 = (char *)(*(longlong *)(param_1 + 0x500) + (longlong)iVar13 * 0x28);
          if (*pcVar12 == '\t') goto LAB_14578022f;
          iVar13 = *(int *)(pcVar12 + 0x20);
        } while (iVar13 != -1);
      }
    }
    pcVar12 = (char *)0x0;
LAB_14578022f:
    *(int *)(pcVar12 + 0x18) = *(int *)(pcVar12 + 0x18) + 1;
    lVar9 = *(longlong *)(pcVar12 + 8);
    piVar2 = (int *)(lVar9 + 0x18);
    *piVar2 = *piVar2 + 1;
    FUN_144a787a6(lVar9 + 8,uVar8);
  }
LAB_14578006d:
  lVar9 = *(longlong *)(param_2 + 0x20);
  if (lVar9 == 0) {
    uVar8 = FUN_1418c9e66();
    lVar9 = FUN_14477b664(uVar8);
    *(longlong *)(param_2 + 0x20) = lVar9;
  }
  plVar1 = (longlong *)(param_2 + 0x18);
  if (*(longlong *)(param_2 + 0x28) == 0) {
    if ((lVar9 == 0) || (*plVar1 == 0)) goto LAB_14578011a;
    plVar3 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
      *(undefined8 *)(param_2 + 0x28) = 0;
      goto LAB_14578011a;
    }
    uVar8 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar9 = FUN_144aff482(uVar8,plVar1);
    *(longlong *)(param_2 + 0x28) = lVar9;
    if (lVar9 == 0) goto LAB_14578011a;
  }
  plVar3 = (longlong *)(param_1 + 0x500);
  lVar9 = param_1 + 0x510;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_60 = lVar9;
  if (*(int *)(param_1 + 0x528) == 0) {
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar13 = *(int *)(param_1 + 0x528);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uVar8 = local_78;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  iVar7 = local_78._4_4_;
  local_90 = plVar3;
  if ((local_78._4_4_ != iVar13) || (local_78 = uVar8, uStack_60 != lVar9)) {
    do {
      local_78 = uVar8;
      if ((*(char *)(*local_90 + (longlong)iVar7 * 0x28) == '\x05') &&
         (lVar4 = *local_90 + (longlong)iVar7 * 0x28, 0 < *(int *)(lVar4 + 0x10))) {
        *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
        lVar4 = *(longlong *)(lVar4 + 8);
        lVar10 = *(longlong *)(param_2 + 0x20);
        if (lVar10 == 0) {
          uVar8 = FUN_1418c9e66();
          lVar10 = FUN_14477b664(uVar8);
          *(longlong *)(param_2 + 0x20) = lVar10;
        }
        lVar11 = *(longlong *)(param_2 + 0x28);
        if (((lVar11 == 0) && (lVar11 = 0, lVar10 != 0)) && (*plVar1 != 0)) {
          plVar5 = *(longlong **)(lVar10 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar5 + 0x108))(), cVar6 == '\0')) {
            lVar11 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar5 + 0x110))(plVar5);
            lVar11 = FUN_144aff482(uVar8,plVar1);
          }
          *(longlong *)(param_2 + 0x28) = lVar11;
        }
        uVar8 = FUN_1447a1f4a(lVar11 + 0x40);
        *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
        FUN_144a787a6(lVar4 + 0x38,uVar8);
        *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
        lVar10 = *(longlong *)(param_2 + 0x20);
        if (lVar10 == 0) {
          uVar8 = FUN_1418c9e66();
          lVar10 = FUN_14477b664(uVar8);
          *(longlong *)(param_2 + 0x20) = lVar10;
        }
        lVar11 = *(longlong *)(param_2 + 0x28);
        if (((lVar11 == 0) && (lVar11 = 0, lVar10 != 0)) && (*plVar1 != 0)) {
          plVar5 = *(longlong **)(lVar10 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar5 + 0x108))(), cVar6 == '\0')) {
            lVar11 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar5 + 0x110))(plVar5);
            lVar11 = FUN_144aff482(uVar8,plVar1);
          }
          *(longlong *)(param_2 + 0x28) = lVar11;
        }
        FUN_140390f7a(lVar11 + 0x50,lVar4 + 0x20);
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar7 = local_78._4_4_;
      uVar8 = local_78;
    } while (local_90 != plVar3 ||
             (CONCAT44(uStack_7c,uStack_80) != lVar9 || local_78._4_4_ != iVar13));
  }
LAB_14578011a:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145780432 FUN_145780432 body=295 status=ok
// SIG undefined FUN_145780432(void)

undefined4 * FUN_145780432(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457806fc(param_1,local_48);
  FUN_14578055a(param_3,local_40);
  local_40[0x20] = 0xff;
  local_40[0x21] = 0xff;
  local_40[0x22] = 0xff;
  local_40[0x23] = 0xff;
  local_4c = local_48[0];
  bVar1 = *local_40;
  local_58 = 0;
  cVar2 = FUN_14578062e(param_1,bVar1,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_40 + 0x24) = uVar4;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x20) =
           *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar4) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar4) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140bb409e(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578055a FUN_14578055a body=120 status=ok
// SIG undefined FUN_14578055a(void)

undefined1 * FUN_14578055a(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  *param_2 = *(undefined1 *)*param_1;
  FUN_1457805d4(param_2 + 8,&local_38);
  FUN_140bb1538(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457805d4 FUN_1457805d4 body=90 status=ok
// SIG undefined FUN_1457805d4(void)

undefined8 * FUN_1457805d4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_148e1f782(param_1,iVar1,0);
    FUN_148e1f7f4(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 14578062e FUN_14578062e body=205 status=ok
// SIG undefined FUN_14578062e(void)

void FUN_14578062e(longlong *param_1,uint param_2,char *param_3,int *param_4,undefined1 *param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        pcVar1 = (char *)(*param_1 + (longlong)iVar11 * 0x28);
        if (*pcVar1 == *param_3) {
          FUN_140bb1538(*(undefined8 *)(pcVar1 + 8),*(undefined4 *)(pcVar1 + 0x10));
          if (*(longlong *)(pcVar1 + 8) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          uVar6 = *(undefined4 *)(param_3 + 0x14);
          uVar7 = *(undefined4 *)(param_3 + 0x18);
          uVar8 = *(undefined4 *)(param_3 + 0x1c);
          *(undefined4 *)(pcVar1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
          *(undefined4 *)(pcVar1 + 0x14) = uVar6;
          *(undefined4 *)(pcVar1 + 0x18) = uVar7;
          *(undefined4 *)(pcVar1 + 0x1c) = uVar8;
          *(undefined4 *)pcVar1 = uVar2;
          *(undefined4 *)(pcVar1 + 4) = uVar3;
          *(undefined4 *)(pcVar1 + 8) = uVar4;
          *(undefined4 *)(pcVar1 + 0xc) = uVar5;
          FUN_1457810a8(param_1,*param_4,1);
          *param_4 = iVar11;
          uVar9 = 1;
          break;
        }
        iVar11 = *(int *)(pcVar1 + 0x20);
        uVar9 = 0;
      } while (iVar11 != -1);
      goto LAB_14578069f;
    }
  }
  uVar9 = 0;
LAB_14578069f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  return;
}



// FUNCTION 1457806fc FUN_1457806fc body=243 status=ok
// SIG undefined FUN_1457806fc(void)

int * FUN_1457806fc(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1457807f0 FUN_1457807f0 body=282 status=ok
// SIG undefined FUN_1457807f0(void)

undefined4 * FUN_1457807f0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457806fc(param_1,local_48);
  FUN_14578090c(param_3,local_40);
  local_40[0x20] = 0xff;
  local_40[0x21] = 0xff;
  local_40[0x22] = 0xff;
  local_40[0x23] = 0xff;
  local_4c = local_48[0];
  bVar1 = *local_40;
  local_58 = 0;
  cVar2 = FUN_14578062e(param_1,bVar1,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_40 + 0x24) = uVar4;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x20) =
           *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar4) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar4) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140bb409e(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578090c FUN_14578090c body=120 status=ok
// SIG undefined FUN_14578090c(void)

undefined1 * FUN_14578090c(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  *param_2 = *(undefined1 *)*param_1;
  FUN_1457805d4(param_2 + 8,&local_38);
  FUN_140bb1538(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145780986 FUN_145780986 body=1568 status=ok
// SIG undefined FUN_145780986(void)

void FUN_145780986(longlong param_1)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_128 [40];
  longlong local_100 [13];
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar2 = *(int *)(param_1 + 0x434);
  if (*(char *)(param_1 + 0x430) == '\0') {
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_145780f93;
    }
  }
  else {
LAB_145780f93:
    *(undefined1 *)(param_1 + 0x430) = 0;
    *(int *)(param_1 + 0x434) = iVar2 + 1;
  }
  if (((((DAT_14c8464e0 != *(double *)(param_1 + 0x440)) ||
        (NAN(DAT_14c8464e0) || NAN(*(double *)(param_1 + 0x440)))) ||
       (DAT_14c8464e8 != *(double *)(param_1 + 0x448))) ||
      ((NAN(DAT_14c8464e8) || NAN(*(double *)(param_1 + 0x448)) ||
       (DAT_14c8464f0 != *(double *)(param_1 + 0x450))))) ||
     ((NAN(DAT_14c8464f0) || NAN(*(double *)(param_1 + 0x450)) || (*(int *)(param_1 + 0x458) == 0)))
     ) {
    *(double *)(param_1 + 0x450) = DAT_14c8464f0;
    dVar1 = DAT_14c8464e8;
    *(double *)(param_1 + 0x440) = DAT_14c8464e0;
    *(double *)(param_1 + 0x448) = dVar1;
    *(int *)(param_1 + 0x458) = *(int *)(param_1 + 0x458) + 1;
  }
  FUN_1414cfa40(param_1 + 0x20);
  memset(local_100,0,0xd8);
  local_94 = 0x80;
  local_90 = 0xffffffff;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0xf;
  local_40 = 1;
  local_3c = 0;
  uStack_34 = 0;
  FUN_145780fa8(param_1 + 0x218,local_100);
  FUN_140368b56(local_100);
  FUN_140bad112(param_1 + 0x468,&DAT_149dfb77a);
  FUN_145781042(param_1 + 0x480);
  FUN_140bad112(param_1 + 0x498,&DAT_149dfb77a);
  FUN_140bad112(param_1 + 0x4b0,&DAT_149dfb77a);
  iVar2 = *(int *)(param_1 + 0x30);
  if ((*(int *)(param_1 + 0x2c) != 0) || (bVar3 = iVar2 == 0, iVar2 = 0, bVar3)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x30) = iVar2 + 1;
  }
  iVar2 = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x34) == 0) {
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_145780ee7;
    }
  }
  else {
LAB_145780ee7:
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(int *)(param_1 + 0x38) = iVar2 + 1;
  }
  iVar2 = *(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x44) == 0) {
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_145780efa;
    }
  }
  else {
LAB_145780efa:
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(int *)(param_1 + 0x48) = iVar2 + 1;
  }
  FUN_140c12dec(param_1 + 0x68,&DAT_149e02088);
  FUN_140c12dec(param_1 + 0x80,&DAT_149e02088);
  iVar2 = *(int *)(param_1 + 0xb4);
  if (*(int *)(param_1 + 0xb0) == 0) {
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_145780e44;
    }
  }
  else {
LAB_145780e44:
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(int *)(param_1 + 0xb4) = iVar2 + 1;
  }
  FUN_140bad112(param_1 + 0xb8,&DAT_149dfb77a);
  FUN_140bad112(param_1 + 0xd0,&DAT_149dfb77a);
  iVar2 = *(int *)(param_1 + 0xec);
  if (*(char *)(param_1 + 0xe8) == '\0') {
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_145780f0d;
    }
  }
  else {
LAB_145780f0d:
    *(undefined1 *)(param_1 + 0xe8) = 0;
    *(int *)(param_1 + 0xec) = iVar2 + 1;
  }
  FUN_140bad112(param_1 + 0xf0,&DAT_149dfb77a);
  iVar2 = *(int *)(param_1 + 0x40c);
  if (*(char *)(param_1 + 0x408) == '\0') {
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_145780e5d;
    }
  }
  else {
LAB_145780e5d:
    *(undefined1 *)(param_1 + 0x408) = 0;
    *(int *)(param_1 + 0x40c) = iVar2 + 1;
  }
  iVar2 = *(int *)(param_1 + 0x4d4);
  if (*(char *)(param_1 + 0x4d0) == '\0') {
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_145780e73;
    }
  }
  else {
LAB_145780e73:
    *(undefined1 *)(param_1 + 0x4d0) = 0;
    *(int *)(param_1 + 0x4d4) = iVar2 + 1;
  }
  iVar2 = *(int *)(param_1 + 0x3fc);
  if (*(char *)(param_1 + 0x3f8) == '\0') {
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_145780e89;
    }
  }
  else {
LAB_145780e89:
    *(undefined1 *)(param_1 + 0x3f8) = 0;
    *(int *)(param_1 + 0x3fc) = iVar2 + 1;
  }
  FUN_140bad112(param_1 + 0x108,&DAT_149dfb77a);
  FUN_140bad112(param_1 + 0x120,&DAT_149dfb77a);
  iVar2 = *(int *)(param_1 + 0x13c);
  if (*(int *)(param_1 + 0x138) == 0) {
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_145780f23;
    }
  }
  else {
LAB_145780f23:
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(int *)(param_1 + 0x13c) = iVar2 + 1;
  }
  FUN_140bad112(param_1 + 0x140,&DAT_149dfb77a);
  FUN_140bad112(param_1 + 0x158,&DAT_149dfb77a);
  FUN_140bad112(param_1 + 0x170,&DAT_149dfb77a);
  if (*(int *)(param_1 + 0x188) == 0) {
    if (*(int *)(param_1 + 0x18c) == 0) {
      iVar2 = 1;
      goto LAB_145780ed0;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18c) + 1;
LAB_145780ed0:
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(int *)(param_1 + 0x18c) = iVar2;
  }
  FUN_140bad112(param_1 + 400,&DAT_149dfb77a);
  FUN_140bad112(param_1 + 0x1a8,&DAT_149dfb77a);
  FUN_140bad112(param_1 + 0x550,&DAT_149dfb77a);
  if (*(char *)(param_1 + 0x1c0) == '\0') {
    if (*(int *)(param_1 + 0x1c4) == 0) {
      iVar2 = 1;
      goto LAB_145780ea2;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1c4) + 1;
LAB_145780ea2:
    *(undefined1 *)(param_1 + 0x1c0) = 0;
    *(int *)(param_1 + 0x1c4) = iVar2;
  }
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    if (*(int *)(param_1 + 0x1cc) == 0) {
      iVar2 = 1;
      goto LAB_145780eb9;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1cc) + 1;
LAB_145780eb9:
    *(undefined1 *)(param_1 + 0x1c8) = 0;
    *(int *)(param_1 + 0x1cc) = iVar2;
  }
  FUN_145780fe4(param_1 + 0x1d8,&DAT_149e62e78);
  FUN_140bad112(param_1 + 0x1f0,&DAT_149dfb77a);
  iVar2 = 1;
  FUN_1446f470e(local_100,&DAT_149dfb77a,1);
  if (local_100[0] == *(longlong *)(param_1 + 0x620)) {
    if (*(int *)(param_1 + 0x628) == 0) goto LAB_145780f6a;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x628) + 1;
LAB_145780f6a:
    *(longlong *)(param_1 + 0x620) = local_100[0];
    *(int *)(param_1 + 0x628) = iVar2;
  }
  if (*(char *)(param_1 + 0x4d8) == '\0') {
    if (*(int *)(param_1 + 0x4dc) == 0) {
      iVar2 = 1;
      goto LAB_145780e05;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4dc) + 1;
LAB_145780e05:
    *(undefined1 *)(param_1 + 0x4d8) = 0;
    *(int *)(param_1 + 0x4dc) = iVar2;
  }
  if (*(char *)(param_1 + 0x4e0) == '\0') {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      iVar2 = 1;
      goto LAB_145780e1c;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4e4) + 1;
LAB_145780e1c:
    *(undefined1 *)(param_1 + 0x4e0) = 0;
    *(int *)(param_1 + 0x4e4) = iVar2;
  }
  if (*(char *)(param_1 + 0x4e8) == '\0') {
    if (*(int *)(param_1 + 0x4ec) == 0) {
      iVar2 = 1;
      goto LAB_145780df1;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4ec) + 1;
LAB_145780df1:
    *(undefined1 *)(param_1 + 0x4e8) = 0;
    *(int *)(param_1 + 0x4ec) = iVar2;
  }
  if (*(char *)(param_1 + 0x4f8) == '\0') {
    if (*(int *)(param_1 + 0x4fc) != 0) goto LAB_145780dc6;
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4fc) + 1;
  }
  *(undefined1 *)(param_1 + 0x4f8) = 0;
  *(int *)(param_1 + 0x4fc) = iVar2;
LAB_145780dc6:
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145780fa8 FUN_145780fa8 body=60 status=ok
// SIG undefined FUN_145780fa8(void)

void FUN_145780fa8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140991644(param_2,param_1);
  if ((cVar1 == '\0') || (*(int *)(param_1 + 0xd8) == 0)) {
    FUN_140a6a9d4(param_1,param_2);
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  }
  return;
}



// FUNCTION 145780fe4 FUN_145780fe4 body=93 status=ok
// SIG undefined FUN_145780fe4(void)

undefined8 FUN_145780fe4(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28);
  FUN_140775538(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145781042 FUN_145781042 body=100 status=ok
// SIG undefined FUN_145781042(void)

undefined8 FUN_145781042(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,&DAT_149e25dfc);
  FUN_140775538(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457810a8 FUN_1457810a8 body=138 status=ok
// SIG undefined FUN_1457810a8(void)

void FUN_1457810a8(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145781132 FUN_145781132 body=1253 status=ok
// SIG undefined FUN_145781132(void)

void FUN_145781132(longlong param_1,uint param_2)

{
  longlong *_Dst;
  char cVar1;
  ulonglong uVar2;
  undefined8 ****ppppuVar3;
  longlong *plVar4;
  byte bVar5;
  ushort uVar6;
  code *pcVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 ***local_98 [3];
  ushort local_80;
  byte local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  undefined8 ***local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar5 = (byte)param_2;
  if ((*(byte *)(param_1 + 0x30) == bVar5) || (*(byte *)(param_1 + 0x30) = bVar5, bVar5 == 0))
  goto LAB_1457811f8;
  _Dst = (longlong *)(param_1 + 8);
  if (((&DAT_14c9a8514)[(uint)*(byte *)(param_1 + 0x28) * 0x120] & 0x20) == 0) {
    FUN_1400b56fe(local_70,_Dst,param_2);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x120));
    if (pcVar7 != (code *)0x0) {
      plVar4 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0x20)) {
        plVar4 = (longlong *)*_Dst;
      }
      (*pcVar7)(plVar4);
    }
    if (0x18 < *(ushort *)(param_1 + 0x20)) {
      FUN_1400020a8(*_Dst);
    }
    *(ushort *)(param_1 + 0x20) = local_58;
    if (local_58 < 0x19) {
      uVar2 = (ulonglong)((uint)local_50 * 0x120);
      pcVar7 = *(code **)((longlong)&DAT_14c9a85b8 + uVar2);
      if ((pcVar7 == (code *)0x0) &&
         (pcVar7 = *(code **)((longlong)&DAT_14c9a85b0 + uVar2), pcVar7 == (code *)0x0)) {
        memcpy(_Dst,local_70,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar2));
      }
      else {
        (*pcVar7)(_Dst);
      }
    }
    else {
      *_Dst = (longlong)local_70[0];
      local_70[0] = (undefined8 ****)0x0;
      local_58 = 0;
    }
    *(byte *)(param_1 + 0x28) = local_50;
    local_50 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      ppppuVar3 = local_70;
      if (0x18 < local_58) {
        ppppuVar3 = (undefined8 ****)local_70[0];
      }
      (*DAT_14c9a85d0)(ppppuVar3);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    if (*(char *)(param_1 + 0x28) != '\0') goto LAB_1457811f8;
    uVar2 = (ulonglong)((param_2 & 0xff) * 0x120);
    local_58 = (ushort)*(uint *)((longlong)&DAT_14c9a8510 + uVar2);
    if (local_58 < 0x19) {
      ppppuVar3 = local_70;
    }
    else {
      ppppuVar3 = (undefined8 ****)
                  FUN_14001cc68(*(uint *)((longlong)&DAT_14c9a8510 + uVar2) & 0xffff);
      local_70[0] = ppppuVar3;
    }
    if (*(code **)((longlong)&DAT_14c9a85a8 + uVar2) == (code *)0x0) {
      memset(ppppuVar3,0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar2));
    }
    else {
      (**(code **)((longlong)&DAT_14c9a85a8 + uVar2))();
    }
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x120));
    uVar6 = *(ushort *)(param_1 + 0x20);
    local_50 = bVar5;
    if (pcVar7 != (code *)0x0) {
      plVar4 = _Dst;
      if (0x18 < uVar6) {
        plVar4 = (longlong *)*_Dst;
      }
      (*pcVar7)(plVar4);
      uVar6 = *(ushort *)(param_1 + 0x20);
    }
    if (0x18 < uVar6) {
      FUN_1400020a8(*_Dst);
    }
    *(ushort *)(param_1 + 0x20) = local_58;
    if (local_58 < 0x19) {
      uVar2 = (ulonglong)((uint)local_50 * 0x120);
      if (*(code **)((longlong)&DAT_14c9a85b8 + uVar2) == (code *)0x0) {
        if (*(code **)((longlong)&DAT_14c9a85b0 + uVar2) == (code *)0x0) {
          memcpy(_Dst,local_70,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar2));
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b0 + uVar2))(_Dst,local_70);
        }
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b8 + uVar2))(_Dst,local_70);
      }
    }
    else {
      *_Dst = (longlong)local_70[0];
      local_70[0] = (undefined8 ****)0x0;
      local_58 = 0;
    }
    *(byte *)(param_1 + 0x28) = local_50;
    local_50 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      ppppuVar3 = (undefined8 ****)local_70[0];
      if (local_58 < 0x19) {
        ppppuVar3 = local_70;
      }
      (*DAT_14c9a85d0)(ppppuVar3);
    }
    ppppuVar3 = (undefined8 ****)local_70[0];
    if (local_58 < 0x19) goto LAB_1457811f8;
  }
  else {
    local_48 = (undefined8 ****)0x0;
    local_40 = 0x2400000000;
    FUN_140bb6e30(_Dst);
    ppppuVar3 = (undefined8 ****)local_48;
    if ((undefined8 ****)local_48 == (undefined8 ****)0x0) {
      ppppuVar3 = local_70;
    }
    for (lVar8 = (longlong)(int)local_40; lVar8 != 0; lVar8 = lVar8 + -1) {
      cVar1 = FUN_144a7b75a(*(undefined1 *)ppppuVar3);
      if (cVar1 != '\0') {
        if (ppppuVar3 != (undefined8 ****)0x0) goto LAB_1457811ea;
        break;
      }
      ppppuVar3 = (undefined8 ****)((longlong)ppppuVar3 + 1);
    }
    uVar2 = (ulonglong)((param_2 & 0xff) * 0x120);
    local_80 = (ushort)*(uint *)((longlong)&DAT_14c9a8510 + uVar2);
    if (local_80 < 0x19) {
      ppppuVar3 = local_98;
    }
    else {
      ppppuVar3 = (undefined8 ****)
                  FUN_14001cc68(*(uint *)((longlong)&DAT_14c9a8510 + uVar2) & 0xffff);
      local_98[0] = ppppuVar3;
    }
    if (*(code **)((longlong)&DAT_14c9a85a8 + uVar2) == (code *)0x0) {
      memset(ppppuVar3,0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar2));
    }
    else {
      (**(code **)((longlong)&DAT_14c9a85a8 + uVar2))();
    }
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x120));
    local_78 = bVar5;
    if (pcVar7 != (code *)0x0) {
      plVar4 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0x20)) {
        plVar4 = (longlong *)*_Dst;
      }
      (*pcVar7)(plVar4);
    }
    if (0x18 < *(ushort *)(param_1 + 0x20)) {
      FUN_1400020a8(*_Dst);
    }
    *(ushort *)(param_1 + 0x20) = local_80;
    if (local_80 < 0x19) {
      uVar2 = (ulonglong)((uint)local_78 * 0x120);
      if (*(code **)((longlong)&DAT_14c9a85b8 + uVar2) == (code *)0x0) {
        if (*(code **)((longlong)&DAT_14c9a85b0 + uVar2) == (code *)0x0) {
          memcpy(_Dst,local_98,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar2));
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b0 + uVar2))(_Dst,local_98);
        }
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b8 + uVar2))(_Dst,local_98);
      }
    }
    else {
      *_Dst = (longlong)local_98[0];
      local_98[0] = (undefined8 ****)0x0;
      local_80 = 0;
    }
    *(byte *)(param_1 + 0x28) = local_78;
    local_78 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      ppppuVar3 = (undefined8 ****)local_98[0];
      if (local_80 < 0x19) {
        ppppuVar3 = local_98;
      }
      (*DAT_14c9a85d0)(ppppuVar3);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(local_98[0]);
    }
LAB_1457811ea:
    ppppuVar3 = (undefined8 ****)local_48;
    if ((undefined8 ****)local_48 == (undefined8 ****)0x0) goto LAB_1457811f8;
  }
  FUN_1400020a8(ppppuVar3);
LAB_1457811f8:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145781618 FUN_145781618 body=319 status=ok
// SIG undefined FUN_145781618(void)

void FUN_145781618(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)((longlong)param_1 + 0x1c) == '\x02') {
    if (DAT_14cad83b0 == '\x01') {
      FUN_144a61b4f();
    }
    lVar5 = FUN_14479d2ce(param_1);
    if ((lVar5 == 0) || (lVar7 = *(longlong *)(lVar5 + 0xa8), lVar7 == 0)) {
      if (*(char *)((longlong)param_1 + 0x1c) != '\x02') goto LAB_145781637;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = 0xffffffff;
      uVar2 = 0;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
      uVar4 = *(undefined4 *)(param_1 + 3);
      local_40 = 0;
      uVar6 = FUN_144a87850();
      local_38 = FUN_144718840(lVar7,uVar6);
      if (local_38 != 0) {
        FUN_14485c47a(&local_40,lVar7);
      }
      param_1[1] = local_40;
      param_1[2] = local_38;
      if (param_1[2] != 0) {
        bVar3 = FUN_144729dda(param_1 + 1);
        plVar1 = (longlong *)param_1[2];
        if ((plVar1 != (longlong *)0x0 & bVar3) == 1) {
          uVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,uVar4,lVar5);
          *(undefined4 *)(param_1 + 3) = uVar4;
          lVar7 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
        }
      }
      FUN_14485c47a(param_1,lVar7);
      uVar2 = 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x1c) = uVar2;
  }
LAB_145781637:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145781758 FUN_145781758 body=127 status=ok
// SIG undefined FUN_145781758(void)

void FUN_145781758(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x808);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x101) {
      iVar5 = 0x100;
    }
    else {
      lVar4 = (longlong)(int)uVar1;
      if (0x100 < *(uint *)(param_1 + 0x80c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x80c) = iVar5;
    FUN_1457817d8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1457817d8 FUN_1457817d8 body=143 status=ok
// SIG undefined FUN_1457817d8(void)

void FUN_1457817d8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x800);
  if ((uint)param_3 < 0x101) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x800,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x800),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x800,param_2,param_3,8);
  return;
}



// FUNCTION 145781868 FUN_145781868 body=40 status=ok
// SIG undefined FUN_145781868(void)

undefined8 FUN_145781868(undefined8 param_1,int param_2)

{
  FUN_145781890();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145781890 FUN_145781890 body=413 status=ok
// SIG undefined FUN_145781890(void)

void FUN_145781890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b389230;
  FUN_140bd4e4b(param_1[0xac],*(undefined4 *)(param_1 + 0xad));
  if (param_1[0xac] != 0) {
    FUN_1400020a8();
  }
  FUN_1411af240(param_1 + 0x9e);
  FUN_1411af240(param_1 + 0x90);
  FUN_1447a1747(param_1[0x8e],*(undefined4 *)(param_1 + 0x8f));
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x79) = 0;
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  FUN_140bc0814(param_1 + 0x70);
  FUN_140c8a73d(param_1[0x6e],*(undefined4 *)(param_1 + 0x6f));
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  FUN_140c8a6d9(param_1[0x6c],*(undefined4 *)(param_1 + 0x6d));
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  FUN_140c8a5af(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_140bc08c8(param_1[0x68],*(undefined4 *)(param_1 + 0x69));
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  FUN_1406d02ae(param_1);
  return;
}



// FUNCTION 145781a2e FUN_145781a2e body=132 status=ok
// SIG undefined FUN_145781a2e(void)

void FUN_145781a2e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145781ab4 FUN_145781ab4 body=88 status=ok
// SIG undefined FUN_145781ab4(void)

undefined8 FUN_145781ab4(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  while( true ) {
    cVar1 = FUN_144729dda(param_1 + 0x60);
    if (cVar1 == '\0') break;
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x60);
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2f8))(plVar2);
    if (plVar2 == (longlong *)0x0) break;
    param_1 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
    if (param_1 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(param_1 + 0x130);
}



// FUNCTION 145781b0c FUN_145781b0c body=155 status=ok
// SIG undefined FUN_145781b0c(void)

void FUN_145781b0c(undefined8 param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_140114204(param_2);
  if ((cVar1 != '\0') && (*param_2 == '\t')) {
    uVar2 = FUN_145781f60(param_3);
    FUN_140bc5fbc(param_2,local_50);
    local_60 = 0;
    local_68 = 0;
    FUN_145781ba8(param_1,local_50,uVar2,1);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145781ba8 FUN_145781ba8 body=338 status=ok
// SIG undefined FUN_145781ba8(void)

void FUN_145781ba8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = FUN_14479d2ce(param_1 + 8);
  if ((((*(longlong *)(lVar4 + 0x30) != 0) &&
       (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x360), lVar4 != 0)) &&
      ((bVar1 = *(byte *)(lVar4 + 0x152), bVar1 == 1 ||
       ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) &&
     ((cVar2 = FUN_1407579fa(lVar4), cVar2 == '\0' && (iVar3 = FUN_14490d72a(lVar4), iVar3 != 3))))
  {
    FUN_145781cfb(local_70,param_2);
    local_98 = &local_71;
    local_71 = 0;
    local_90 = &local_72;
    local_72 = 0;
    local_88 = param_6;
    local_a0 = param_5;
    local_a8 = param_4;
    FUN_140bc7254(param_1,local_70,param_3,0);
    lVar4 = FUN_14103c0a0(lVar4);
    if (lVar4 != 0) {
      FUN_145781dd6(local_70,param_3,lVar4);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145781cfb FUN_145781cfb body=217 status=ok
// SIG undefined FUN_145781cfb(void)

undefined8 * FUN_145781cfb(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [36];
  int local_34 [2];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a7c8fe(param_2,local_34,0,1);
  if ((local_34[0] != DAT_14cb793b0) || (local_2c != DAT_14cb793b8)) {
    FUN_1447a97f4(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1447a993c(param_1,*(int *)(param_2 + 4) + -1);
  if (1 < *(int *)(param_2 + 4)) {
    iVar1 = 1;
    do {
      FUN_144a659ac(param_2,local_34,iVar1);
      FUN_144928d62(param_1,iVar1 + -1,local_34);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_2 + 4));
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145781dd6 FUN_145781dd6 body=281 status=ok
// SIG undefined FUN_145781dd6(void)

void FUN_145781dd6(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  longlong local_70;
  int local_68;
  longlong **local_60;
  longlong *local_58;
  code *local_50;
  longlong ***local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140bc692a(&local_70,param_1);
  if (1 < local_68) {
    local_60 = &local_40;
    local_40 = (longlong *)0x0;
    local_48 = &local_60;
    local_50 = FUN_143d24a4a;
    local_58 = &local_70;
    FUN_145781f16(param_3);
    plVar1 = local_40;
    if (local_40 != (longlong *)0x0) {
      lVar3 = FUN_145781ef0(local_40);
      if (lVar3 == 0) {
        bVar5 = true;
      }
      else {
        bVar5 = *(char *)(lVar3 + 0x178) != '\x03';
      }
      cVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
      if ((!bVar5) && (cVar2 != '\0')) {
        FUN_1447325ac(param_1,&local_78,1);
        uVar4 = (**(code **)(*plVar1 + 0x308))(plVar1);
        local_88 = 0;
        FUN_1411ac4f8(param_3,uVar4,param_2,local_78);
      }
    }
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145781ef0 FUN_145781ef0 body=38 status=ok
// SIG undefined FUN_145781ef0(void)

undefined8 FUN_145781ef0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x2a0))();
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x2b8);
  }
  return uVar2;
}



// FUNCTION 145781f16 FUN_145781f16 body=73 status=ok
// SIG undefined FUN_145781f16(void)

void FUN_145781f16(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = param_2[1];
  FUN_140bc66fe(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145781f60 FUN_145781f60 body=495 status=ok
// SIG undefined FUN_145781f60(void)

ulonglong FUN_145781f60(char *param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *unaff_RBX;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb793d0) && (FUN_144b3d300(&DAT_14cb793d0), DAT_14cb793d0 == -1)) {
    DAT_14cb793c8 = FUN_145782150();
    _Init_thread_footer(&DAT_14cb793d0);
  }
  cVar3 = *param_1;
  if (cVar3 == '\x03') {
    FUN_1403a0728(param_1,&local_50);
    FUN_1400021e4(&local_50,&local_40);
    uVar6 = 0;
    if (0 < *(int *)(DAT_14cb793c8 + 0x48)) {
      unaff_RBX = &local_50;
      do {
        FUN_1401cfb1c(DAT_14cb793c8,unaff_RBX);
        if (local_38 == local_48) {
          if (local_38 < 2) {
            bVar9 = true;
          }
          else {
            lVar7 = 0;
            while( true ) {
              uVar1 = *(ushort *)(local_40 + lVar7);
              uVar4 = (uint)uVar1;
              uVar2 = *(ushort *)(local_50 + lVar7);
              uVar8 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14578203a;
                }
                iVar5 = uVar4 - uVar8;
                goto LAB_145782079;
              }
              if (uVar1 == 0) break;
LAB_14578203a:
              lVar7 = lVar7 + 2;
            }
            iVar5 = 0;
LAB_145782079:
            bVar9 = iVar5 == 0;
          }
        }
        else {
          bVar9 = local_48 + local_38 == 1;
        }
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        if (bVar9) {
          unaff_RBX = (longlong *)
                      CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                               *(undefined1 *)
                                (*(longlong *)(DAT_14cb793c8 + 0x40) + 8 + uVar6 * 0x10));
          bVar9 = true;
          goto LAB_1457820bc;
        }
        uVar4 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar4;
      } while ((int)uVar4 < *(int *)(DAT_14cb793c8 + 0x48));
    }
    bVar9 = false;
LAB_1457820bc:
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (bVar9) goto LAB_1457820d0;
    cVar3 = *param_1;
  }
  if (cVar3 == '\x01') {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(int *)(param_1 + 0xc) != 0);
  }
  else {
    uVar4 = FUN_140321d1a(param_1);
    uVar6 = (ulonglong)uVar4;
  }
  unaff_RBX = (longlong *)CONCAT71((int7)(uVar6 >> 8),(char)uVar6 * '\x02');
LAB_1457820d0:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)unaff_RBX & 0xffffffff;
}



// FUNCTION 145782150 FUN_145782150 body=57 status=ok
// SIG undefined FUN_145782150(void)

void FUN_145782150(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb10ef0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb10ef0 = FUN_14171c317(FUN_1417fad09,uVar1,L"EDataLayerRuntimeState");
  }
  return;
}



// FUNCTION 14578218a FUN_14578218a body=211 status=ok
// SIG undefined FUN_14578218a(void)

void FUN_14578218a(longlong param_1,char *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  char cVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == '\x06') {
    cVar2 = FUN_140114204(param_2);
    if (cVar2 != '\0') {
      local_30 = 0xffffffff;
      puVar3 = (ulonglong *)FUN_1408264ac(param_2,param_1 + 0x28,&local_30,&local_2a);
      uVar1 = local_30;
      if (puVar3 != (ulonglong *)0x0) {
        uVar4 = 0x7fffffffffffffff;
        if (param_3 < 0x7fffffffffffffff) {
          uVar4 = param_3;
        }
        *puVar3 = uVar4;
        local_2a = (undefined2)local_30;
        FUN_140b25444(param_1 + 0x60);
        FUN_140b254aa(param_1,puVar3,uVar1,0);
        cVar2 = FUN_144729dda(param_1 + 8);
        if (cVar2 != '\0') {
          uVar5 = FUN_14479d2ce(param_1 + 8);
          FUN_1405f658a(uVar5);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578225e FUN_14578225e body=55 status=ok
// SIG undefined FUN_14578225e(void)

void FUN_14578225e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc06630 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc06630 = FUN_140002ddd(FUN_1466c8a28,uVar1,L"RigCurveElement");
  }
  return;
}



// FUNCTION 145782296 FUN_145782296 body=114 status=ok
// SIG undefined FUN_145782296(void)

int FUN_145782296(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((int)param_2 < *(int *)(param_1 + 0x24)) {
    lVar4 = (ulonglong)((param_2 & 0xffff) * 0x18) +
            *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  iVar2 = *(int *)(lVar4 + 0x10);
  if (*(int *)(lVar4 + 0x10) == 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0xb0);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar3 = iVar2 + 1;
    if (iVar2 < 1000) {
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
  return iVar2;
}



// FUNCTION 145782308 FUN_145782308 body=736 status=ok
// SIG undefined FUN_145782308(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145782308(longlong param_1,longlong param_2,longlong param_3,double *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_4 = 0.0;
  plVar1 = *(longlong **)
            (*(longlong *)(**(longlong **)(param_1 + 0xe0) + 0x60) +
            (longlong)(int)(*(longlong **)(param_1 + 0xe0))[1] * 8);
  plVar2 = *(longlong **)
            (*(longlong *)(**(longlong **)(param_1 + 0xe8) + 0x60) +
            (longlong)(int)(*(longlong **)(param_1 + 0xe8))[1] * 8);
  if (*(char *)((longlong)plVar1 + 0x1a) == '\x01') {
    if (*(char *)((longlong)plVar2 + 0x1a) == '\0') {
      (**(code **)(*plVar1 + 0x80))();
      goto LAB_145782576;
    }
    (**(code **)(*plVar1 + 0x80))(plVar1,&local_70);
    dVar7 = local_48 - local_60;
    dVar8 = local_50 - local_68;
    dVar9 = local_58 - local_70;
    if ((dVar9 <= dVar8 || dVar9 <= dVar7) && (dVar9 = dVar8, dVar8 <= dVar7)) {
      dVar9 = dVar7;
    }
    (**(code **)(**(longlong **)
                   (*(longlong *)(**(longlong **)(param_1 + 0xe8) + 0x60) +
                   (longlong)(int)(*(longlong **)(param_1 + 0xe8))[1] * 8) + 0x80))();
    local_48 = local_48 - local_60;
    local_50 = local_50 - local_68;
    local_58 = local_58 - local_70;
    if ((local_58 <= local_50 || local_58 <= local_48) &&
       (local_58 = local_50, local_50 <= local_48)) {
      local_58 = local_48;
    }
    if (local_58 <= dVar9) {
      dVar9 = local_58;
    }
  }
  else {
    if (*(char *)((longlong)plVar2 + 0x1a) == '\0') {
      uVar4 = 0;
      goto LAB_14578251e;
    }
    (**(code **)(*plVar2 + 0x80))(plVar2);
LAB_145782576:
    local_48 = local_48 - local_60;
    local_50 = local_50 - local_68;
    dVar9 = local_58 - local_70;
    if ((dVar9 <= local_50 || dVar9 <= local_48) && (dVar9 = local_50, local_50 <= local_48)) {
      dVar9 = local_48;
    }
  }
  uVar4 = 0;
  if ((1.0 - (double)_DAT_14c75f0ac <=
       *(double *)(param_2 + 0x40) * *(double *)(param_3 + 0x40) +
       *(double *)(param_2 + 0x30) * *(double *)(param_3 + 0x30) +
       *(double *)(param_2 + 0x38) * *(double *)(param_3 + 0x38)) &&
     (dVar9 = dVar9 * (double)_DAT_14c75f0a8, 0.0 < dVar9)) {
    lVar6 = 0;
    bVar3 = true;
    do {
      bVar5 = bVar3;
      lVar6 = lVar6 * 0x18;
      dVar7 = *(double *)(param_2 + 0x10 + lVar6) - *(double *)(param_3 + 0x10 + lVar6);
      dVar10 = *(double *)(param_2 + 8 + lVar6) - *(double *)(param_3 + 8 + lVar6);
      dVar8 = *(double *)(param_2 + lVar6) - *(double *)(param_3 + lVar6);
      dVar7 = dVar7 * dVar7 + dVar8 * dVar8 + dVar10 * dVar10;
      if (dVar7 < dVar9 * dVar9) {
        dVar9 = 1.0 - dVar7 / (dVar9 * dVar9);
        if (1.0 <= dVar9) {
          dVar9 = 1.0;
        }
        if (dVar9 <= 0.0) {
          dVar9 = 0.0;
        }
        *param_4 = dVar9;
        uVar4 = 1;
        break;
      }
      lVar6 = 1;
      uVar4 = 0;
      bVar3 = false;
    } while (bVar5);
  }
LAB_14578251e:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1457825ea FUN_1457825ea body=132 status=ok
// SIG undefined FUN_1457825ea(void)

void FUN_1457825ea(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    if ((uint)(*(int *)(param_1 + 0x3c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1481f1f5c(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar2 = param_1;
    }
    FUN_14034d321(lVar2 + (longlong)iVar1 * 0x18,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1481f2074(param_1,param_2,iVar1 - param_2);
    FUN_1481f20de(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14578266e FUN_14578266e body=109 status=ok
// SIG undefined FUN_14578266e(void)

undefined8 FUN_14578266e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (((*(byte *)(param_1 + 0x1151) & 4) != 0) && (*(longlong *)(param_1 + 0xe38) != 0)) {
    lVar3 = FUN_140b3d448();
    lVar1 = *(longlong *)(param_1 + 0xe38);
    if (((lVar1 != 0) &&
        (((lVar3 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = FUN_14048db04(lVar1,param_2);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1457826e2 FUN_1457826e2 body=147 status=ok
// SIG undefined FUN_1457826e2(void)

void FUN_1457826e2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x120,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x120)) {
      uVar5 = uVar4 / 0x120 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x120,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145782776 FUN_145782776 body=147 status=ok
// SIG undefined FUN_145782776(void)

void FUN_145782776(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14578280a FUN_14578280a body=85 status=ok
// SIG undefined FUN_14578280a(void)

void FUN_14578280a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_145782860();
  return;
}



// FUNCTION 145782860 FUN_145782860 body=116 status=ok
// SIG undefined FUN_145782860(void)

void FUN_145782860(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1457828d4 FUN_1457828d4 body=180 status=ok
// SIG undefined FUN_1457828d4(void)

void FUN_1457828d4(longlong param_1,int param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  int *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  longlong *local_28;
  int local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_2;
  local_19 = param_3;
  if ((*(longlong *)(param_1 + 0x980) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x980) + 0x1c) != param_2)) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x7b8))
                      (*(longlong **)(param_1 + 0x118),0,1,0xffffffff);
    if (lVar1 != 0) {
      local_28 = &local_48;
      local_40 = &local_20;
      local_38 = &local_19;
      local_30 = &LAB_143f7ec26;
      local_48 = param_1;
      FUN_144966906(lVar1 + 0x138);
      param_2 = local_20;
    }
    *(int *)(param_1 + 0x9ac) = param_2;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578298a thunk_FUN_140bc97f4 body=5 status=ok
// SIG undefined thunk_FUN_140bc97f4(void)

void thunk_FUN_140bc97f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a648ae0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145782990 FUN_145782990 body=132 status=ok
// SIG undefined FUN_145782990(void)

void FUN_145782990(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145782a14 FUN_145782a14 body=127 status=ok
// SIG undefined FUN_145782a14(void)

undefined8 * FUN_145782a14(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_1412cbb62();
  *param_1 = &PTR_FUN_14a1c9cf0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = param_2;
  lVar2 = 0x80;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x40) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    uVar1 = FUN_14493c560();
    *(ulonglong *)((longlong)param_1 + lVar2 + -0x40) =
         *(ulonglong *)((longlong)param_1 + lVar2 + -0x40) & 0xfffffffffc000000 | (ulonglong)uVar1;
    *(ulonglong *)((longlong)param_1 + lVar2) =
         *(ulonglong *)((longlong)param_1 + lVar2) & 0xfffffffffc000000 | (ulonglong)uVar1;
    lVar2 = lVar2 + 0x80;
  } while (lVar2 != 0x280);
  return param_1;
}



// FUNCTION 145782a94 FUN_145782a94 body=357 status=ok
// SIG undefined FUN_145782a94(void)

undefined4
FUN_145782a94(longlong *param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 uStack_170;
  longlong local_168;
  longlong lStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined8 local_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_108 = 0;
  local_100 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  lStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_37 = 0;
  local_34 = 0;
  if (&local_168 != param_2) {
    local_168 = *param_2;
    *param_2 = 0;
    lStack_160 = param_2[1];
    param_2[1] = 0;
  }
  local_36 = param_5;
  local_38 = param_4;
  uVar1 = (**(code **)(*param_1 + 0x50))(0,&local_178,param_3,1);
  FUN_14019571a(&local_178);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145782bfa FUN_145782bfa body=191 status=ok
// SIG undefined FUN_145782bfa(void)

void FUN_145782bfa(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar2 = FUN_140be8873();
  lVar3 = FUN_140be88df();
  bVar1 = *(byte *)(param_1 + 0x838);
  lVar4 = lVar2;
  if (bVar1 == 1) {
    if ((*(char *)(param_1 + 0x8e8) == '\0') &&
       (*(longlong *)(param_1 + 0x8e0) == lVar3 && *(longlong *)(param_1 + 0x8f0) == lVar2))
    goto LAB_145782c57;
  }
  else if (*(longlong *)(param_1 + 0x8f0) == lVar2) goto LAB_145782c57;
  FUN_145782cba(param_2);
  bVar1 = *(byte *)(param_1 + 0x838);
  lVar4 = *(longlong *)(param_1 + 0x8f0);
LAB_145782c57:
  if (((bVar1 & 1) == 0) || (param_4 = param_1 + 0x840, *(char *)(param_1 + 0x8e8) != '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = *(longlong *)(param_1 + 0x8e0) == lVar3;
  }
  param_3[1] = param_1 + 0x30;
  *param_3 = param_4;
  *(bool *)(param_3 + 2) = bVar5;
  *(bool *)((longlong)param_3 + 0x11) = lVar4 == lVar2;
  return;
}



// FUNCTION 145782cba FUN_145782cba body=127 status=ok
// SIG undefined FUN_145782cba(void)

void FUN_145782cba(longlong *param_1)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)((longlong)param_1 + 0x24) == 0) {
    FUN_145782d3a(param_1 + 1);
    if ((char)param_1[4] == '\x01') {
      LOCK();
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      UNLOCK();
    }
    local_1c = 1;
    FUN_145782d6a(param_1 + 1,*param_1);
    if ((char)param_1[4] == '\x01') {
      LOCK();
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145782d3a FUN_145782d3a body=47 status=ok
// SIG undefined FUN_145782d3a(void)

void FUN_145782d3a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 2) == '\x01') {
    if (*(int *)(param_1 + 1) == 0) {
      ReleaseSRWLockShared((PSRWLOCK)*param_1);
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)*param_1);
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 145782d6a FUN_145782d6a body=91 status=ok
// SIG undefined FUN_145782d6a(void)

undefined8 * FUN_145782d6a(undefined8 *param_1,PSRWLOCK param_2,int *param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    if (*(int *)(param_1 + 1) == 0) {
      ReleaseSRWLockShared((PSRWLOCK)*param_1);
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)*param_1);
    }
  }
  iVar1 = *param_3;
  *param_1 = param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    AcquireSRWLockShared(param_2);
  }
  else {
    AcquireSRWLockExclusive(param_2);
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



// FUNCTION 145782dc6 FUN_145782dc6 body=84 status=ok
// SIG undefined FUN_145782dc6(void)

void FUN_145782dc6(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 << 4,0);
  iVar1 = (int)(uVar2 >> 4);
  iVar3 = 0x7fffffff;
  if ((int)param_2 <= iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 != *(int *)(param_1 + 0xac)) {
    *(int *)(param_1 + 0xac) = iVar3;
    FUN_145782e58(param_1,*(undefined4 *)(param_1 + 0xa8));
    return;
  }
  return;
}



// FUNCTION 145782e1a FUN_145782e1a body=62 status=ok
// SIG undefined FUN_145782e1a(void)

void FUN_145782e1a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145782ee6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145782e58 FUN_145782e58 body=141 status=ok
// SIG undefined FUN_145782e58(void)

void FUN_145782e58(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa0);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa0,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0xa0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa0,param_2,param_3,0x10);
  return;
}



// FUNCTION 145782ee6 FUN_145782ee6 body=91 status=ok
// SIG undefined FUN_145782ee6(void)

ulonglong FUN_145782ee6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 145782f42 FUN_145782f42 body=87 status=ok
// SIG undefined FUN_145782f42(void)

undefined1 FUN_145782f42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145782f9a(param_2,param_3);
    FUN_140bec736(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 145782f9a FUN_145782f9a body=79 status=ok
// SIG undefined FUN_145782f9a(void)

undefined8 * FUN_145782f9a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478a4810(param_1,iVar1);
      FUN_1478a4872(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145782fea FUN_145782fea body=29 status=ok
// SIG undefined FUN_145782fea(void)

void FUN_145782fea(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x9c8) + 0x331) = 0;
  return;
}



// FUNCTION 145783008 FUN_145783008 body=120 status=ok
// SIG undefined FUN_145783008(void)

longlong FUN_145783008(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_140becde2(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145783080 FUN_145783080 body=210 status=ok
// SIG undefined FUN_145783080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145783080(void)

{
  if ((DAT_14ca3a7ff & 2) == 0) {
    DAT_14ca3a7ff = DAT_14ca3a7ff | 2;
    _DAT_14ca3a7a0 = L"FRayTracingDynamicGeometryConverterCS";
    _DAT_14ca3a7b8 = FUN_146826540;
    _DAT_14ca3a7c0 = FUN_146825d77;
    _DAT_14ca3a7c8 = FUN_146825fd6;
    _DAT_14ca3a7d0 = FUN_1407e02ea;
    _DAT_14ca3a7d8 = FUN_146826273;
    _DAT_14ca3a7b0 = FUN_1472b46ae;
    _DAT_14ca3a7f0 = 0xffffffff00000140;
    _DAT_14ca3a7f8 = 8;
    DAT_14ca3a7fc = 0;
    _DAT_14ca3a7e0 = &LAB_1472b46e4;
    FUN_145783152();
    FUN_1457834a8();
    FUN_1407e00cc(&DAT_14ca3a798);
    return;
  }
  return;
}



// FUNCTION 145783152 FUN_145783152 body=121 status=ok
// SIG undefined FUN_145783152(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145783152(void)

{
  FUN_1457831cc();
  _DAT_14ca3ef70 = L"RWVertexPositions";
  DAT_14ca3ef9a = FUN_140850cc5();
  _DAT_14ca3ef78 = FUN_140fb78d0();
  _DAT_14ca3ef88 = &LAB_14682652b;
  _DAT_14ca3ef90 = &DAT_100000108;
  _DAT_14ca3ef98 = 0;
  _DAT_14ca3ef80 = DAT_14ca3a7a8;
  DAT_14ca3a7a8 = &DAT_14ca3ef70;
  return;
}



// FUNCTION 1457831cc FUN_1457831cc body=121 status=ok
// SIG undefined FUN_1457831cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457831cc(void)

{
  FUN_145783246();
  _DAT_14ca3efa0 = L"UsingIndirectDraw";
  DAT_14ca3efca = FUN_140850cc5();
  _DAT_14ca3efa8 = FUN_140ec6960();
  _DAT_14ca3efb8 = &LAB_14682652b;
  _DAT_14ca3efc0 = 0x10000010c;
  _DAT_14ca3efc8 = 0;
  _DAT_14ca3efb0 = DAT_14ca3a7a8;
  DAT_14ca3a7a8 = &DAT_14ca3efa0;
  return;
}



// FUNCTION 145783246 FUN_145783246 body=121 status=ok
// SIG undefined FUN_145783246(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145783246(void)

{
  FUN_1457832c0();
  _DAT_14ca3efd0 = L"NumVertices";
  DAT_14ca3effa = FUN_140850cc5();
  _DAT_14ca3efd8 = FUN_140ec6960();
  _DAT_14ca3efe8 = &LAB_14682652b;
  _DAT_14ca3eff0 = 0x100000112;
  _DAT_14ca3eff8 = 0;
  _DAT_14ca3efe0 = DAT_14ca3a7a8;
  DAT_14ca3a7a8 = &DAT_14ca3efd0;
  return;
}



// FUNCTION 1457832c0 FUN_1457832c0 body=121 status=ok
// SIG undefined FUN_1457832c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457832c0(void)

{
  FUN_14578333a();
  _DAT_14ca3f000 = L"MinVertexIndex";
  DAT_14ca3f02a = FUN_140850cc5();
  _DAT_14ca3f008 = FUN_140ec6960();
  _DAT_14ca3f018 = &LAB_14682652b;
  _DAT_14ca3f020 = 0x100000118;
  _DAT_14ca3f028 = 0;
  _DAT_14ca3f010 = DAT_14ca3a7a8;
  DAT_14ca3a7a8 = &DAT_14ca3f000;
  return;
}



// FUNCTION 14578333a FUN_14578333a body=121 status=ok
// SIG undefined FUN_14578333a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578333a(void)

{
  FUN_1457833b4();
  _DAT_14ca3f030 = L"PrimitiveId";
  DAT_14ca3f05a = FUN_140850cc5();
  _DAT_14ca3f038 = FUN_140ec6960();
  _DAT_14ca3f048 = &LAB_14682652b;
  _DAT_14ca3f050 = 0x10000011e;
  _DAT_14ca3f058 = 0;
  _DAT_14ca3f040 = DAT_14ca3a7a8;
  DAT_14ca3a7a8 = &DAT_14ca3f030;
  return;
}



// FUNCTION 1457833b4 FUN_1457833b4 body=121 status=ok
// SIG undefined FUN_1457833b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457833b4(void)

{
  FUN_14578342e();
  _DAT_14ca3f060 = L"bApplyWorldPositionOffset";
  DAT_14ca3f08a = FUN_140850cc5();
  _DAT_14ca3f068 = FUN_140ec6960();
  _DAT_14ca3f078 = &LAB_14682652b;
  _DAT_14ca3f080 = 0x100000124;
  _DAT_14ca3f088 = 0;
  _DAT_14ca3f070 = DAT_14ca3a7a8;
  DAT_14ca3a7a8 = &DAT_14ca3f060;
  return;
}



// FUNCTION 14578342e FUN_14578342e body=121 status=ok
// SIG undefined FUN_14578342e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578342e(void)

{
  FUN_145783524();
  _DAT_14ca3f090 = L"OutputVertexBaseIndex";
  DAT_14ca3f0ba = FUN_140850cc5();
  _DAT_14ca3f098 = FUN_140ec6960();
  _DAT_14ca3f0a8 = &LAB_14682652b;
  _DAT_14ca3f0b0 = 0x10000012a;
  _DAT_14ca3f0b8 = 0;
  _DAT_14ca3f0a0 = DAT_14ca3a7a8;
  DAT_14ca3a7a8 = &DAT_14ca3f090;
  return;
}



// FUNCTION 1457834a8 FUN_1457834a8 body=123 status=ok
// SIG undefined FUN_1457834a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457834a8(void)

{
  _DAT_14ca3f890 = L"BASE";
  DAT_14ca3f8ba = 4;
  _DAT_14ca3f898 = FUN_141092e92();
  _DAT_14ca3f8a0 = DAT_14ca3a7a8;
  _DAT_14ca3f8a8 = &LAB_14682652b;
  DAT_14ca3a7a8 = &DAT_14ca3f890;
  DAT_14ca3a7fd = DAT_14ca3a7fd + '\x01';
  _DAT_14ca3f8b0 = 0x100000000;
  if (*(char *)(_DAT_14ca3f898 + 100) != '\0') {
    DAT_14ca3a7fe = DAT_14ca3a7fe + '\x01';
  }
  return;
}



// FUNCTION 145783524 FUN_145783524 body=216 status=ok
// SIG undefined FUN_145783524(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145783524(void)

{
  _DAT_14ca3f0f0 = L"WorldToInstance";
  DAT_14ca3f11a = FUN_140850cc5();
  _DAT_14ca3f0f8 = FUN_140ec6960();
  _DAT_14ca3f108 = &LAB_14682652b;
  _DAT_14ca3f110 = 0x100000136;
  _DAT_14ca3f118 = 0;
  _DAT_14ca3f100 = DAT_14ca3a7a8;
  DAT_14ca3a7a8 = &DAT_14ca3f0f0;
  _DAT_14ca3f0c0 = L"InstanceId";
  DAT_14ca3f0ea = FUN_140850cc5();
  _DAT_14ca3f0c8 = FUN_140ec6960();
  _DAT_14ca3f0d8 = &LAB_14682652b;
  _DAT_14ca3f0e0 = 0x100000130;
  _DAT_14ca3f0e8 = 0;
  _DAT_14ca3f0d0 = DAT_14ca3a7a8;
  DAT_14ca3a7a8 = &DAT_14ca3f0c0;
  return;
}



// FUNCTION 1457835fc FUN_1457835fc body=188 status=ok
// SIG undefined FUN_1457835fc(void)

int FUN_1457835fc(longlong param_1,ulonglong param_2,char param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 < 1) {
    iVar2 = *(int *)(param_1 + 0x2c);
  }
  else {
    if (iVar2 == 1) {
      uVar3 = 0;
    }
    else {
      uVar4 = 0;
      plVar5 = *(longlong **)(param_1 + 0x18);
      do {
        uVar3 = uVar4;
        if (param_2 <= *(ulonglong *)(*plVar5 + 0x10)) break;
        uVar4 = uVar4 + 1;
        plVar5 = plVar5 + 3;
        uVar3 = (ulonglong)(iVar2 - 1);
      } while (iVar2 - 1 != uVar4);
    }
    plVar5 = (longlong *)(*(longlong **)(param_1 + 0x18))[uVar3 * 3];
    iVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
    uVar3 = FUN_140bed6b6(param_1,iVar2);
    if (param_2 < uVar3) {
      iVar1 = iVar2 + -1;
    }
    else {
      uVar3 = FUN_140bed6b6(param_1,iVar2 + 1);
      iVar1 = iVar2 + 1;
      if (param_2 < uVar3) {
        iVar1 = iVar2;
      }
    }
    iVar6 = iVar1;
    if ((param_3 != '\0') && (iVar6 = *(int *)(param_1 + 0x28), iVar1 < *(int *)(param_1 + 0x28))) {
      iVar6 = iVar1;
    }
    iVar2 = *(int *)(param_1 + 0x2c);
    if (*(int *)(param_1 + 0x2c) < iVar6) {
      iVar2 = iVar6;
    }
  }
  return iVar2;
}



// FUNCTION 1457836b8 FUN_1457836b8 body=81 status=ok
// SIG undefined FUN_1457836b8(void)

int FUN_1457836b8(longlong param_1,undefined8 param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_4_ = (int)((ulonglong)param_2 >> 0x20);
  auVar2._0_8_ = param_2;
  auVar2._12_4_ = 0x45300000;
  dVar1 = pow((((double)CONCAT44(0x43300000,(int)param_2) - 4503599627370496.0) +
              (auVar2._8_8_ - 1.9342813113834067e+25)) / *(double *)(param_1 + 0x28) -
              *(double *)(param_1 + 0x38),1.0 / *(double *)(param_1 + 0x30));
  return (int)((dVar1 - *(double *)(param_1 + 0x18)) / *(double *)(param_1 + 0x20));
}



// FUNCTION 14578370a FUN_14578370a body=109 status=ok
// SIG undefined FUN_14578370a(void)

void FUN_14578370a(longlong param_1,byte param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(byte *)(param_1 + 0x3b0) = param_2;
  cVar1 = FUN_144729dda(param_1 + 0x398);
  lVar2 = param_1 + 0x390;
  if (cVar1 != '\0') {
    lVar2 = param_1 + 0x398;
  }
  lVar2 = FUN_14479d2ce(lVar2);
  if (lVar2 != 0) {
    lVar2 = FUN_140bede9a(lVar2);
    if (lVar2 != 0) {
      FUN_140cbebe8(param_1 + 0x30,*(int *)(lVar2 + 0x798) == 0 & param_2);
      return;
    }
  }
  return;
}



// FUNCTION 145783778 FUN_145783778 body=40 status=ok
// SIG undefined FUN_145783778(void)

undefined8 FUN_145783778(undefined8 param_1,int param_2)

{
  FUN_1457837a0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457837a0 FUN_1457837a0 body=99 status=ok
// SIG undefined FUN_1457837a0(void)

void FUN_1457837a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b903b60;
  plVar3 = (longlong *)param_1[0xf];
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
  FUN_140beec14(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140fa3ec8(param_1);
  return;
}



// FUNCTION 145783804 FUN_145783804 body=206 status=ok
// SIG undefined FUN_145783804(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145783804(void)

{
  if ((DAT_14c9b0247 & 2) == 0) {
    DAT_14c9b0247 = DAT_14c9b0247 | 2;
    _DAT_14c9b01e8 = L"TBasePassCSFNoLightMapPolicySkylight";
    _DAT_14c9b0200 = FUN_146826540;
    _DAT_14c9b0208 = FUN_146825d77;
    _DAT_14c9b0210 = FUN_146825fd6;
    _DAT_14c9b0218 = FUN_1407e02ea;
    _DAT_14c9b0220 = FUN_146826273;
    _DAT_14c9b01f8 = FUN_14712d334;
    _DAT_14c9b0238 = 0xffffffff00000128;
    _DAT_14c9b0240 = 8;
    DAT_14c9b0244 = 0;
    _DAT_14c9b0228 = &LAB_14712d36a;
    FUN_1457838d2();
    FUN_1407e00cc(&DAT_14c9b01e0);
  }
  return &DAT_14c9b01e0;
}



// FUNCTION 1457838d2 FUN_1457838d2 body=133 status=ok
// SIG undefined FUN_1457838d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457838d2(void)

{
  _DAT_14c9bb720 = L"BASE";
  DAT_14c9bb74a = 4;
  FUN_145783958();
  _DAT_14c9bb730 = DAT_14c9b01f0;
  _DAT_14c9bb728 = &DAT_14c9bb750;
  _DAT_14c9bb738 = &LAB_14682652b;
  DAT_14c9b01f0 = &DAT_14c9bb720;
  DAT_14c9b0245 = DAT_14c9b0245 + '\x01';
  _DAT_14c9bb740 = 0x100000000;
  if (DAT_14c9bb7b4 != '\0') {
    DAT_14c9b0246 = DAT_14c9b0246 + '\x01';
  }
  return;
}



// FUNCTION 145783958 FUN_145783958 body=200 status=ok
// SIG undefined FUN_145783958(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145783958(void)

{
  if ((DAT_14c9bb7b7 & 2) != 0) {
    return;
  }
  DAT_14c9bb7b7 = DAT_14c9bb7b7 | 2;
  _DAT_14c9bb758 = L"TBasePassComputeShaderBaseType";
  _DAT_14c9bb770 = FUN_146826540;
  _DAT_14c9bb778 = FUN_146825d77;
  _DAT_14c9bb780 = FUN_146825fd6;
  _DAT_14c9bb788 = FUN_1407e02ea;
  _DAT_14c9bb790 = FUN_146826273;
  _DAT_14c9bb768 = FUN_14713cd7c;
  _DAT_14c9bb7a8 = 0xffffffff00000128;
  _DAT_14c9bb7b0 = 8;
  DAT_14c9bb7b4 = 0;
  _DAT_14c9bb798 = &LAB_14713cdb2;
  FUN_145783a20();
  FUN_1407e00cc(&DAT_14c9bb750);
  return;
}



// FUNCTION 145783a20 FUN_145783a20 body=133 status=ok
// SIG undefined FUN_145783a20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145783a20(void)

{
  _DAT_14c9bb7b8 = L"BASE";
  DAT_14c9bb7e2 = 4;
  FUN_145783bfa();
  _DAT_14c9bb7c8 = DAT_14c9bb760;
  _DAT_14c9bb7c0 = &DAT_14c9bb7e8;
  _DAT_14c9bb7d0 = &LAB_14682652b;
  DAT_14c9bb760 = &DAT_14c9bb7b8;
  DAT_14c9bb7b5 = DAT_14c9bb7b5 + '\x01';
  _DAT_14c9bb7d8 = 0x100000000;
  if (DAT_14c9bb84c != '\0') {
    DAT_14c9bb7b6 = DAT_14c9bb7b6 + '\x01';
  }
  return;
}



// FUNCTION 145783aa6 FUN_145783aa6 body=206 status=ok
// SIG undefined FUN_145783aa6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145783aa6(void)

{
  if ((DAT_14c9b036f & 2) == 0) {
    DAT_14c9b036f = DAT_14c9b036f | 2;
    _DAT_14c9b0310 = L"TBasePassCSFNoLightMapPolicy";
    _DAT_14c9b0328 = FUN_146826540;
    _DAT_14c9b0330 = FUN_146825d77;
    _DAT_14c9b0338 = FUN_146825fd6;
    _DAT_14c9b0340 = FUN_1407e02ea;
    _DAT_14c9b0348 = FUN_146826273;
    _DAT_14c9b0320 = FUN_14712d3fa;
    _DAT_14c9b0360 = 0xffffffff00000128;
    _DAT_14c9b0368 = 8;
    DAT_14c9b036c = 0;
    _DAT_14c9b0350 = &LAB_14712d430;
    FUN_145783b74();
    FUN_1407e00cc(&DAT_14c9b0308);
  }
  return &DAT_14c9b0308;
}



// FUNCTION 145783b74 FUN_145783b74 body=133 status=ok
// SIG undefined FUN_145783b74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145783b74(void)

{
  _DAT_14c9bbb40 = L"BASE";
  DAT_14c9bbb6a = 4;
  FUN_145783958();
  _DAT_14c9bbb50 = DAT_14c9b0318;
  _DAT_14c9bbb48 = &DAT_14c9bb750;
  _DAT_14c9bbb58 = &LAB_14682652b;
  DAT_14c9b0318 = &DAT_14c9bbb40;
  DAT_14c9b036d = DAT_14c9b036d + '\x01';
  _DAT_14c9bbb60 = 0x100000000;
  if (DAT_14c9bb7b4 != '\0') {
    DAT_14c9b036e = DAT_14c9b036e + '\x01';
  }
  return;
}



// FUNCTION 145783bfa FUN_145783bfa body=210 status=ok
// SIG undefined FUN_145783bfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145783bfa(void)

{
  if ((DAT_14c9bb84f & 2) == 0) {
    DAT_14c9bb84f = DAT_14c9bb84f | 2;
    _DAT_14c9bb7f0 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_14c9bb808 = FUN_146826540;
    _DAT_14c9bb810 = FUN_146825d77;
    _DAT_14c9bb818 = FUN_146825fd6;
    _DAT_14c9bb820 = FUN_1407e02ea;
    _DAT_14c9bb828 = FUN_146826273;
    _DAT_14c9bb800 = FUN_14713cdb6;
    _DAT_14c9bb840 = 0xffffffff00000128;
    _DAT_14c9bb848 = 8;
    DAT_14c9bb84c = 0;
    _DAT_14c9bb830 = &LAB_14713cdec;
    FUN_145783ccc();
    FUN_1457842e2();
    FUN_1407e00cc(&DAT_14c9bb7e8);
    return;
  }
  return;
}



// FUNCTION 145783ccc FUN_145783ccc body=121 status=ok
// SIG undefined FUN_145783ccc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145783ccc(void)

{
  FUN_145783d46();
  _DAT_14c9bb850 = L"ReflectionCaptureBuffer";
  DAT_14c9bb87a = FUN_140850cc5();
  _DAT_14c9bb858 = FUN_14106a12a();
  _DAT_14c9bb868 = &LAB_14682652b;
  _DAT_14c9bb870 = 0x10000010e;
  _DAT_14c9bb878 = 0;
  _DAT_14c9bb860 = DAT_14c9bb7f8;
  DAT_14c9bb7f8 = &DAT_14c9bb850;
  return;
}



// FUNCTION 145783d46 FUN_145783d46 body=121 status=ok
// SIG undefined FUN_145783d46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145783d46(void)

{
  FUN_145783dc0();
  _DAT_14c9bb880 = L"ShadingOutputsParam";
  DAT_14c9bb8aa = FUN_140850cc5();
  _DAT_14c9bb888 = FUN_14106a12a();
  _DAT_14c9bb898 = &LAB_14682652b;
  _DAT_14c9bb8a0 = 0x100000110;
  _DAT_14c9bb8a8 = 0;
  _DAT_14c9bb890 = DAT_14c9bb7f8;
  DAT_14c9bb7f8 = &DAT_14c9bb880;
  return;
}



// FUNCTION 145783dc0 FUN_145783dc0 body=121 status=ok
// SIG undefined FUN_145783dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145783dc0(void)

{
  FUN_145783e3a();
  _DAT_14c9bb8b0 = L"ViewRectParam";
  DAT_14c9bb8da = FUN_140850cc5();
  _DAT_14c9bb8b8 = FUN_140ec6960();
  _DAT_14c9bb8c8 = &LAB_14682652b;
  _DAT_14c9bb8d0 = 0x100000112;
  _DAT_14c9bb8d8 = 0;
  _DAT_14c9bb8c0 = DAT_14c9bb7f8;
  DAT_14c9bb7f8 = &DAT_14c9bb8b0;
  return;
}



// FUNCTION 145783e3a FUN_145783e3a body=121 status=ok
// SIG undefined FUN_145783e3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145783e3a(void)

{
  FUN_145783eb4();
  _DAT_14c9bb8e0 = L"PassDataParam";
  DAT_14c9bb90a = FUN_140850cc5();
  _DAT_14c9bb8e8 = FUN_140ec6960();
  _DAT_14c9bb8f8 = &LAB_14682652b;
  _DAT_14c9bb900 = 0x100000118;
  _DAT_14c9bb908 = 0;
  _DAT_14c9bb8f0 = DAT_14c9bb7f8;
  DAT_14c9bb7f8 = &DAT_14c9bb8e0;
  return;
}



// FUNCTION 145783eb4 FUN_145783eb4 body=121 status=ok
// SIG undefined FUN_145783eb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145783eb4(void)

{
  FUN_145783f2e();
  _DAT_14c9bb910 = L"Target0";
  DAT_14c9bb93a = FUN_140850cc5();
  _DAT_14c9bb918 = FUN_1410b9266();
  _DAT_14c9bb928 = &LAB_14682652b;
  _DAT_14c9bb930 = 0x10000011e;
  _DAT_14c9bb938 = 0;
  _DAT_14c9bb920 = DAT_14c9bb7f8;
  DAT_14c9bb7f8 = &DAT_14c9bb910;
  return;
}



// FUNCTION 145783f2e FUN_145783f2e body=121 status=ok
// SIG undefined FUN_145783f2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145783f2e(void)

{
  FUN_145783fa8();
  _DAT_14c9bb940 = L"Target1";
  DAT_14c9bb96a = FUN_140850cc5();
  _DAT_14c9bb948 = FUN_1410b9266();
  _DAT_14c9bb958 = &LAB_14682652b;
  _DAT_14c9bb960 = 0x10000011f;
  _DAT_14c9bb968 = 0;
  _DAT_14c9bb950 = DAT_14c9bb7f8;
  DAT_14c9bb7f8 = &DAT_14c9bb940;
  return;
}



// FUNCTION 145783fa8 FUN_145783fa8 body=121 status=ok
// SIG undefined FUN_145783fa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145783fa8(void)

{
  FUN_145784022();
  _DAT_14c9bb970 = L"Target2";
  DAT_14c9bb99a = FUN_140850cc5();
  _DAT_14c9bb978 = FUN_1410b9266();
  _DAT_14c9bb988 = &LAB_14682652b;
  _DAT_14c9bb990 = 0x100000120;
  _DAT_14c9bb998 = 0;
  _DAT_14c9bb980 = DAT_14c9bb7f8;
  DAT_14c9bb7f8 = &DAT_14c9bb970;
  return;
}



// FUNCTION 145784022 FUN_145784022 body=121 status=ok
// SIG undefined FUN_145784022(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145784022(void)

{
  FUN_14578409c();
  _DAT_14c9bb9a0 = L"Target3";
  DAT_14c9bb9ca = FUN_140850cc5();
  _DAT_14c9bb9a8 = FUN_1410b9266();
  _DAT_14c9bb9b8 = &LAB_14682652b;
  _DAT_14c9bb9c0 = 0x100000121;
  _DAT_14c9bb9c8 = 0;
  _DAT_14c9bb9b0 = DAT_14c9bb7f8;
  DAT_14c9bb7f8 = &DAT_14c9bb9a0;
  return;
}



// FUNCTION 14578409c FUN_14578409c body=121 status=ok
// SIG undefined FUN_14578409c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578409c(void)

{
  FUN_145784116();
  _DAT_14c9bb9d0 = L"Target4";
  DAT_14c9bb9fa = FUN_140850cc5();
  _DAT_14c9bb9d8 = FUN_1410b9266();
  _DAT_14c9bb9e8 = &LAB_14682652b;
  _DAT_14c9bb9f0 = 0x100000122;
  _DAT_14c9bb9f8 = 0;
  _DAT_14c9bb9e0 = DAT_14c9bb7f8;
  DAT_14c9bb7f8 = &DAT_14c9bb9d0;
  return;
}



// FUNCTION 145784116 FUN_145784116 body=121 status=ok
// SIG undefined FUN_145784116(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145784116(void)

{
  FUN_145784190();
  _DAT_14c9bba00 = L"Target5";
  DAT_14c9bba2a = FUN_140850cc5();
  _DAT_14c9bba08 = FUN_1410b9266();
  _DAT_14c9bba18 = &LAB_14682652b;
  _DAT_14c9bba20 = 0x100000123;
  _DAT_14c9bba28 = 0;
  _DAT_14c9bba10 = DAT_14c9bb7f8;
  DAT_14c9bb7f8 = &DAT_14c9bba00;
  return;
}



// FUNCTION 145784190 FUN_145784190 body=121 status=ok
// SIG undefined FUN_145784190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145784190(void)

{
  FUN_14578420a();
  _DAT_14c9bba30 = L"Target6";
  DAT_14c9bba5a = FUN_140850cc5();
  _DAT_14c9bba38 = FUN_1410b9266();
  _DAT_14c9bba48 = &LAB_14682652b;
  _DAT_14c9bba50 = 0x100000124;
  _DAT_14c9bba58 = 0;
  _DAT_14c9bba40 = DAT_14c9bb7f8;
  DAT_14c9bb7f8 = &DAT_14c9bba30;
  return;
}



// FUNCTION 14578420a FUN_14578420a body=216 status=ok
// SIG undefined FUN_14578420a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578420a(void)

{
  _DAT_14c9bba90 = L"Targets";
  DAT_14c9bbaba = FUN_140850cc5();
  _DAT_14c9bba98 = FUN_1410b9266();
  _DAT_14c9bbaa8 = &LAB_14682652b;
  _DAT_14c9bbab0 = 0x100000126;
  _DAT_14c9bbab8 = 0;
  _DAT_14c9bbaa0 = DAT_14c9bb7f8;
  DAT_14c9bb7f8 = &DAT_14c9bba90;
  _DAT_14c9bba60 = L"Target7";
  DAT_14c9bba8a = FUN_140850cc5();
  _DAT_14c9bba68 = FUN_1410b9266();
  _DAT_14c9bba78 = &LAB_14682652b;
  _DAT_14c9bba80 = 0x100000125;
  _DAT_14c9bba88 = 0;
  _DAT_14c9bba70 = DAT_14c9bb7f8;
  DAT_14c9bb7f8 = &DAT_14c9bba60;
  return;
}



// FUNCTION 1457842e2 FUN_1457842e2 body=225 status=ok
// SIG undefined FUN_1457842e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457842e2(void)

{
  _DAT_14c9bbac0 = L"BASE";
  DAT_14c9bbaea = 4;
  _DAT_14c9bbac8 = FUN_1411cad6c();
  _DAT_14c9bbad0 = DAT_14c9bb7f8;
  _DAT_14c9bbad8 = &LAB_14682652b;
  DAT_14c9bb7f8 = &DAT_14c9bbac0;
  DAT_14c9bb84d = DAT_14c9bb84d + '\x01';
  _DAT_14c9bbae0 = &DAT_100000108;
  if (*(char *)(_DAT_14c9bbac8 + 100) != '\0') {
    DAT_14c9bb84e = DAT_14c9bb84e + '\x01';
  }
  _DAT_14c9bbaf0 = L"BASE";
  DAT_14c9bbb1a = 4;
  _DAT_14c9bbaf8 = FUN_141092e92();
  _DAT_14c9bbb00 = DAT_14c9bb7f8;
  _DAT_14c9bbb08 = &LAB_14682652b;
  DAT_14c9bb7f8 = &DAT_14c9bbaf0;
  DAT_14c9bb84d = DAT_14c9bb84d + '\x01';
  _DAT_14c9bbb10 = 0x100000000;
  if (*(char *)(_DAT_14c9bbaf8 + 100) != '\0') {
    DAT_14c9bb84e = DAT_14c9bb84e + '\x01';
  }
  return;
}



// FUNCTION 1457843c4 FUN_1457843c4 body=99 status=ok
// SIG undefined FUN_1457843c4(void)

void FUN_1457843c4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000145784423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145784406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 145784434 FUN_145784434 body=285 status=ok
// SIG undefined FUN_145784434(void)

void FUN_145784434(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  char cVar1;
  undefined ***pppuVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x58))(param_1,local_78);
  if (local_78[0] != 0) {
    local_a8 = (undefined ***)0x0;
    local_98 = &PTR_LAB_14b3f60f0;
    local_b8[0] = FUN_143cfdb94;
    local_90 = local_78;
    local_88 = param_4;
    if (param_5 == 0) {
      lVar3 = 0;
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x50))(param_1);
      lVar3 = 0;
      if (cVar1 != '\0') {
        lVar3 = param_5;
      }
    }
    FUN_1488204d6(param_2,local_b8,param_3 + 0x108,lVar3);
    if (local_b8[0] != (code *)0x0) {
      pppuVar2 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar2 = &local_98;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    if (local_78[0] != 0) {
      if (local_68 == (longlong *)0x0) {
        local_68 = local_58;
      }
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145784846 FUN_145784846 body=612 status=ok
// SIG undefined FUN_145784846(void)

undefined8 FUN_145784846(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  int iStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x168) != 0) {
    lVar9 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x160) + lVar9);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x8a0) == *param_2)) {
        FUN_140bfdd42(lVar2,&local_60);
        fVar11 = ((float)((longlong)iStack_54 * (longlong)(int)local_60) +
                 (float)iStack_54 * (float)((ulonglong)local_60 >> 0x20)) / (float)local_58;
        uVar13 = 0;
        goto LAB_145784905;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)*(int *)(param_1 + 0x168) * 8 != lVar9);
  }
  plVar5 = (longlong *)FUN_14479d2ce(param_1 + 0x48);
  fVar12 = 0.0;
  uVar14 = 0;
  fVar11 = fVar12;
  uVar13 = uVar14;
  if (plVar5 != (longlong *)0x0) {
    uVar6 = FUN_140437988();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar6);
    if (plVar5 != (longlong *)0x0) {
      uVar6 = FUN_140437988();
      plVar7 = (longlong *)FUN_144718840(plVar5,uVar6);
      if ((plVar5 != plVar7) && (plVar7 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar7 + 0x18))(plVar7);
        local_60 = *param_2;
        local_58 = -1;
        cVar4 = FUN_144a7a548(plVar5);
        if ((cVar4 != '\0') &&
           ((lVar9 = (longlong)local_58 * 0x88 + *plVar5, lVar9 != 0 &&
            ((longlong)*(int *)(lVar9 + 0x10) != 0)))) {
          puVar10 = *(undefined8 **)(lVar9 + 8);
          puVar8 = puVar10 + (longlong)*(int *)(lVar9 + 0x10) * 2;
          do {
            plVar5 = (longlong *)*puVar10;
            plVar7 = (longlong *)puVar10[1];
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
            lVar9 = (**(code **)(*plVar5 + 0x50))();
            bVar3 = true;
            if ((lVar9 != 0) && (*(char *)(lVar9 + 0x290) == '\x01')) {
              FUN_140bfdd42(lVar9,&local_60);
              unaff_XMM7_Da =
                   ((float)((longlong)iStack_54 * (longlong)(int)local_60) +
                   (float)iStack_54 * (float)((ulonglong)local_60 >> 0x20)) / (float)local_58;
              unaff_XMM7_Db = 0;
              bVar3 = false;
            }
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar7 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            fVar11 = unaff_XMM7_Da;
            uVar13 = unaff_XMM7_Db;
          } while ((bVar3) &&
                  (puVar10 = puVar10 + 2, fVar11 = fVar12, uVar13 = uVar14, puVar10 != puVar8));
        }
      }
    }
  }
LAB_145784905:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar13,fVar11);
}



// FUNCTION 145784aac FUN_145784aac body=15 status=ok
// SIG undefined FUN_145784aac(void)

undefined8 FUN_145784aac(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x50);
  if (puVar1 != (undefined1 *)0x0) {
    return CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1);
  }
  return 0;
}



// FUNCTION 145784abc FUN_145784abc body=621 status=ok
// SIG undefined FUN_145784abc(void)

longlong FUN_145784abc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar4 = (longlong *)FUN_14587963c(*(undefined1 *)(param_1 + 0x2b));
  lVar6 = *plVar4;
  plVar4 = (longlong *)plVar4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(lVar6 + 0x18);
    if (lVar7 == 0) {
      uVar5 = FUN_145c56e60();
      lVar7 = FUN_14477b664(uVar5);
      *(longlong *)(lVar6 + 0x18) = lVar7;
    }
    lVar8 = *(longlong *)(lVar6 + 0x20);
    if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*(longlong *)(lVar6 + 0x10) != 0)) {
      plVar2 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar8 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar8 = FUN_144aff482(uVar5,(longlong *)(lVar6 + 0x10));
      }
      *(longlong *)(lVar6 + 0x20) = lVar8;
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if (lVar8 != 0) {
    return lVar8;
  }
  plVar4 = (longlong *)FUN_1400c2ca6(*(undefined2 *)(param_1 + 0x10));
  lVar6 = plVar4[1];
  if (lVar6 == 0) {
    uVar5 = FUN_14043db3a();
    lVar6 = FUN_14477b664(uVar5);
    plVar4[1] = lVar6;
  }
  lVar7 = plVar4[2];
  if (lVar7 == 0) {
    if (lVar6 == 0) {
      return 0;
    }
    if (*plVar4 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      plVar4[2] = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar7 = FUN_144aff482(uVar5,plVar4);
      plVar4[2] = lVar7;
      if (lVar7 != 0) goto LAB_145784b22;
    }
    lVar6 = 0;
  }
  else {
LAB_145784b22:
    lVar8 = *(longlong *)(lVar7 + 0x30);
    if (lVar8 == 0) {
      uVar5 = FUN_145c56e60();
      lVar8 = FUN_14477b664(uVar5);
      *(longlong *)(lVar7 + 0x30) = lVar8;
    }
    lVar6 = *(longlong *)(lVar7 + 0x38);
    if (((lVar6 == 0) && (lVar6 = 0, lVar8 != 0)) && (*(longlong *)(lVar7 + 0x28) != 0)) {
      plVar4 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar7 + 0x28));
      }
      *(longlong *)(lVar7 + 0x38) = lVar6;
    }
  }
  return lVar6;
}



// FUNCTION 145784d2a FUN_145784d2a body=130 status=ok
// SIG undefined FUN_145784d2a(void)

void FUN_145784d2a(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar3 = FUN_1407f787c();
    lVar4 = FUN_14477b664(uVar3);
    param_1[1] = lVar4;
  }
  if (param_1[2] != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*param_1 != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,param_1);
    }
    param_1[2] = lVar4;
    return;
  }
  return;
}



// FUNCTION 145784dac FUN_145784dac body=96 status=ok
// SIG undefined FUN_145784dac(void)

void FUN_145784dac(longlong param_1)

{
  if (*(char *)(param_1 + 0xb91) != '\0') {
    if ((*(longlong *)(param_1 + 0xb38) != 0) &&
       (*(longlong **)(param_1 + 0xb40) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(param_1 + 0xb40) + 0x38))();
    }
    *(undefined1 *)(param_1 + 0xb91) = 0;
  }
  if (*(longlong *)(param_1 + 0xd60) == DAT_14cb94e30) {
    *(byte *)(param_1 + 0xb90) = *(byte *)(param_1 + 0xb90) | 4;
    FUN_140ebdd2e(param_1);
    return;
  }
  return;
}



// FUNCTION 145784e0c FUN_145784e0c body=113 status=ok
// SIG undefined FUN_145784e0c(void)

void FUN_145784e0c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 145784e7e FUN_145784e7e body=113 status=ok
// SIG undefined FUN_145784e7e(void)

void FUN_145784e7e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,4);
  }
  return;
}



// FUNCTION 145784ef0 FUN_145784ef0 body=850 status=ok
// SIG undefined FUN_145784ef0(void)

void FUN_145784ef0(longlong param_1)

{
  int iVar1;
  
  do {
    if (*(int *)(param_1 + 0x1c) < 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      FUN_14008b684(param_1 + 0x10,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    FUN_140c0bd00(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
      FUN_145784e0c(param_1 + 0x20,0);
    }
    if (*(int *)(param_1 + 0x3c) < 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      FUN_140c108c0(param_1 + 0x30,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    FUN_1402a3552(param_1 + 0x50);
    if (*(int *)(param_1 + 0xac) < 0) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      FUN_14481578e(param_1 + 0xa0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
    if (*(int *)(param_1 + 0xbc) < 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
      FUN_14481578e(param_1 + 0xb0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    *(undefined8 *)(param_1 + 0xf4) = 0;
    *(undefined8 *)(param_1 + 0xfc) = 0;
    *(undefined8 *)(param_1 + 0xe4) = 0;
    *(undefined8 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    if (*(int *)(param_1 + 0x114) < 0) {
      *(undefined4 *)(param_1 + 0x110) = 0;
      FUN_140c108c0(param_1 + 0x108,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    if (*(int *)(param_1 + 0x124) < 0) {
      *(undefined4 *)(param_1 + 0x120) = 0;
      FUN_145784e7e(param_1 + 0x118,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    if (*(int *)(param_1 + 0x194) < 0) {
      *(undefined4 *)(param_1 + 400) = 0;
      FUN_14481578e(param_1 + 0x188,0);
    }
    else {
      *(undefined4 *)(param_1 + 400) = 0;
    }
    if (*(int *)(param_1 + 0x1a4) < 0) {
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      FUN_14481578e(param_1 + 0x198,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1a0) = 0;
    }
    if (*(int *)(param_1 + 0x1b4) < 0) {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
      FUN_146dedcd2(param_1 + 0x1a8,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    }
    if (*(int *)(param_1 + 0x1c4) < 0) {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      FUN_14481578e(param_1 + 0x1b8,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
    }
    *(undefined8 *)(param_1 + 0x13c) = 0;
    *(undefined8 *)(param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    if (*(int *)(param_1 + 0x15c) < 0) {
      *(undefined4 *)(param_1 + 0x158) = 0;
      FUN_14481578e(param_1 + 0x150,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x158) = 0;
    }
    if (*(int *)(param_1 + 0x16c) < 0) {
      *(undefined4 *)(param_1 + 0x168) = 0;
      FUN_14481578e(param_1 + 0x160,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x168) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x17c);
    FUN_140c0bd2f(*(undefined8 *)(param_1 + 0x170));
    *(undefined4 *)(param_1 + 0x178) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x17c) != 0)) {
      FUN_146e34f26(param_1 + 0x170);
    }
    *(undefined1 *)(param_1 + 0x181) = 1;
    *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xc) = 1;
    param_1 = *(longlong *)(param_1 + 0xc0);
  } while (param_1 != 0);
  return;
}



// FUNCTION 145785242 FUN_145785242 body=122 status=ok
// SIG undefined FUN_145785242(void)

void FUN_145785242(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,undefined8 param_8)

{
  if (((param_7 >> 0x1a & 1) == 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    FUN_140c11da0(*(longlong *)(param_1 + 0x70),param_1,param_1,param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8);
  }
  else {
    FUN_140e1b78c(param_1,param_2);
  }
  return;
}



// FUNCTION 1457852bc FUN_1457852bc body=109 status=ok
// SIG undefined FUN_1457852bc(void)

ulonglong FUN_1457852bc(longlong *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457854c0(param_1,iVar1);
  }
  lVar2 = (ulonglong)param_3 * 0x70;
  memmove((void *)(*param_1 + lVar2 + 0x70),(void *)(*param_1 + lVar2),
          (ulonglong)(iVar1 - param_3) * 0x70);
  FUN_1457853f4(lVar2 + *param_1,param_2);
  return (ulonglong)param_3;
}



// FUNCTION 14578532a FUN_14578532a body=201 status=ok
// SIG undefined FUN_14578532a(void)

undefined8 * FUN_14578532a(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  *param_1 = local_38;
  *(undefined4 *)(param_1 + 1) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  param_1[6] = local_38;
  *(undefined4 *)(param_1 + 7) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x3c) = local_2c;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_1400b22c2(param_1 + 9,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0xb,"inactive");
  param_1[0xd] = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457853f4 FUN_1457853f4 body=204 status=ok
// SIG undefined FUN_1457853f4(void)

undefined8 * FUN_1457853f4(undefined8 *param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14129a3f4();
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_14129a3f4(param_1 + 6,param_2 + 0x30);
  param_1[9] = 0;
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined8 *)(param_2 + 0x50) = 0;
  param_1[0xb] = 0;
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined8 *)(param_2 + 0x60) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  return param_1;
}



// FUNCTION 1457854c0 FUN_1457854c0 body=143 status=ok
// SIG undefined FUN_1457854c0(void)

void FUN_1457854c0(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14578555a FUN_14578555a body=938 status=ok
// SIG undefined FUN_14578555a(void)

undefined8 * FUN_14578555a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_145785904();
  *param_1 = &PTR_FUN_14b162020;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 2;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0;
  param_1[0x98] = 2;
  param_1[0x99] = 0;
  FUN_140c13428(param_1 + 0x9b);
  FUN_1457860f6();
  param_1[0xa0] = &DAT_14cb7db80;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0x9f] = &PTR_FUN_14b16a860;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0x200000000;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x57c) = 0;
  param_1[0xb4] = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5b4) = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 2;
  plVar4 = (longlong *)FUN_14001cc68(0x420,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b162f70;
  FUN_145785d54(plVar4 + 2);
  param_1[0xbd] = plVar4 + 2;
  param_1[0xbe] = plVar4;
  if (plVar4 != (longlong *)0x0) {
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
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined1 *)(param_1 + 0xc3) = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  FUN_145853e5c();
  param_1[199] = &DAT_14cb7dd90;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xc6] = &PTR_FUN_14b16b1f0;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6b4) = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0x200000001;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xdd) = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 2;
  *(undefined4 *)((longlong)param_1 + 0x714) = 0;
  *(undefined8 *)((longlong)param_1 + 0x704) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70c) = 0;
  param_1[0xe3] = 2;
  lVar5 = FUN_144a78b9e();
  if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar5);
  }
  param_1[0x79] = lVar5;
  lVar5 = FUN_1449f3324();
  if (lVar5 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar5);
  }
  bVar3 = DAT_14c950c29;
  param_1[0x7b] = lVar5;
  if ((lVar5 != 0) && ((bVar3 & 1) != 0)) {
    FUN_1456cec3c(lVar5);
    lVar5 = param_1[0x7b];
  }
  param_1[0x76] = lVar5;
  lVar5 = FUN_140082f10();
  if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar5);
  }
  param_1[0x77] = lVar5;
  lVar5 = FUN_14041aabe();
  if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar5);
  }
  param_1[0x75] = lVar5;
  lVar5 = FUN_145894e7a();
  if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar5);
  }
  param_1[0x92] = lVar5;
  return param_1;
}



// FUNCTION 145785904 FUN_145785904 body=201 status=ok
// SIG undefined FUN_145785904(void)

undefined8 * FUN_145785904(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1457859ce();
  *param_1 = &PTR_FUN_14a8e4840;
  *(undefined1 *)((longlong)param_1 + 0x471) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(byte *)(param_1 + 0x87) = *(byte *)(param_1 + 0x87) & 0xfe;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[0x86] = DAT_14cadad68;
  lVar1 = FUN_145967c50();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x8a] = lVar1;
  lVar1 = FUN_140caa2f8();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x75] = lVar1;
  *(undefined4 *)(param_1 + 0x89) = 0x3f800000;
  param_1[0x8d] = 0x1043960000;
  return param_1;
}



// FUNCTION 1457859ce FUN_1457859ce body=671 status=ok
// SIG undefined FUN_1457859ce(void)

undefined8 * FUN_1457859ce(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_38,L"Sprite",1);
  FUN_140486538(param_2,local_38);
  FUN_14048646a(param_2 + 0x20,local_38,0,0);
  FUN_140834366(param_1,param_2);
  *param_1 = &PTR_FUN_14a8eda80;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  FUN_144a5dc74(param_1 + 0x80);
  *(undefined1 *)((longlong)param_1 + 0x414) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined1 *)(param_1 + 0x85) = 1;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) & 0xf7;
  *(uint *)(param_1 + 0x82) = *(uint *)(param_1 + 0x82) & 0xfffffff9 | 4;
  lVar1 = FUN_145785c6e();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x79] = lVar1;
  lVar1 = FUN_144a75eb4();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x76] = lVar1;
  lVar1 = FUN_1400d1928();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x77] = lVar1;
  lVar1 = FUN_1413e9348();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x75] = lVar1;
  lVar1 = FUN_140c1325c();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x78] = lVar1;
  lVar1 = FUN_140c13176();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x74] = lVar1;
  lVar1 = FUN_140554cf2();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x7a] = lVar1;
  lVar1 = FUN_144a75eb4();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x7b] = lVar1;
  lVar1 = FUN_140c13342();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x7c] = lVar1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145785c6e FUN_145785c6e body=228 status=ok
// SIG undefined FUN_145785c6e(void)

longlong FUN_145785c6e(void)

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
  if (DAT_14cad5c38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b216c;
    local_38 = &LAB_147a5d7ed;
    local_40 = &LAB_1463c3293;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x450;
    FUN_14081cfa3(L"/Script/Engine",L"DefaultPawn",&DAT_14cad5c38,FUN_1463c326c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad5c38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145785d54 FUN_145785d54 body=929 status=ok
// SIG undefined FUN_145785d54(void)

undefined8 * FUN_145785d54(undefined8 *param_1)

{
  undefined8 *_Dst;
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14b1629d0;
  _Dst = param_1 + 1;
  plVar4 = param_1 + 4;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  memset(_Dst,0,0x210);
  *(undefined8 *)((longlong)param_1 + 0x234) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 1;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  FUN_140c13428(param_1 + 0x5a);
  memset(param_1 + 0x5e,0,0xb0);
  FUN_1457860f6();
  param_1[0x75] = &DAT_14cb7db80;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x74] = &PTR_FUN_14b16a860;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  lVar6 = FUN_1411531be();
  if (lVar6 == 0) {
    *_Dst = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      FUN_1446f8c06(plVar4,0);
    }
    if ((undefined2 *)*plVar4 != (undefined2 *)0x0) {
      *(undefined2 *)*plVar4 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_70,lVar6);
    *(undefined4 *)(param_1 + 2) = (undefined4)local_70;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_70._4_4_;
    *(undefined4 *)(param_1 + 3) = uStack_68;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_64;
    if (param_1 + 2 == &local_70) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
      param_1[4] = local_60;
      local_60 = 0;
      *(undefined4 *)(param_1 + 5) = local_58;
      *(undefined4 *)((longlong)param_1 + 0x2c) = local_54;
    }
    cVar5 = (*(code *)PTR_FUN_14c758760)();
    if (cVar5 != '\0') {
      uVar3 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
        param_1[1] = 0;
        goto LAB_145785f0d;
      }
    }
    FUN_14485c47a(_Dst,lVar6);
  }
LAB_145785f0d:
  local_78 = (longlong *)FUN_14001cc68(0x38,0x10);
  local_78[1] = (longlong)&DAT_100000001;
  *local_78 = (longlong)&PTR_FUN_14b403910;
  local_80 = local_78 + 2;
  local_78[2] = (longlong)&PTR_FUN_14b162f88;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  FUN_1457861ac(&local_70);
  FUN_14029d0b6(param_1 + 0x6c,&local_70);
  plVar4 = (longlong *)CONCAT44(uStack_64,uStack_68);
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
  plVar4 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  lVar7 = FUN_140c13176();
  lVar6 = *(longlong *)(lVar7 + 0x110);
  if (lVar6 == 0) {
    FUN_140aa6c08(lVar7);
    lVar6 = *(longlong *)(lVar7 + 0x110);
    if (lVar6 == 0) goto LAB_145785fc3;
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar6 + 0x390);
  *(undefined4 *)((longlong)param_1 + 0x284) = *(undefined4 *)(lVar6 + 0x394);
LAB_145785fc3:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1457860f6 FUN_1457860f6 body=181 status=ok
// SIG undefined FUN_1457860f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457860f6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7dbf0) {
    FUN_144b3d300(&DAT_14cb7dbf0);
    if (DAT_14cb7dbf0 == -1) {
      _DAT_14cb7dba0 = 0;
      _DAT_14cb7dba8 = 0;
      _DAT_14cb7db80 = 0;
      uRam000000014cb7db88 = 0;
      _DAT_14cb7dbac = 0xffffffff00000080;
      _DAT_14cb7dbb4 = 0;
      DAT_14cb7dbc0 = 0;
      _DAT_14cb7dbc8 = 0;
      DAT_14cb7dbd0 = 0;
      uRam000000014cb7dbd8 = 0;
      _DAT_14cb7dbe0 = 0;
      InitializeSRWLock((PSRWLOCK)&DAT_14cb7dbe8);
      atexit(FUN_143d51a66);
      _Init_thread_footer(&DAT_14cb7dbf0);
      return;
    }
  }
  return;
}



// FUNCTION 1457861ac FUN_1457861ac body=133 status=ok
// SIG undefined FUN_1457861ac(void)

undefined8 * FUN_1457861ac(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_2;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 == (longlong *)0x0) {
    *param_1 = plVar4;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    param_1[1] = plVar2;
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 8))();
  }
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2,uVar3);
  if (plVar2 != (longlong *)0x0) {
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
      }
    }
  }
  return param_1;
}



// FUNCTION 145786232 FUN_145786232 body=280 status=ok
// SIG undefined FUN_145786232(void)

void FUN_145786232(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40 = 0;
  local_38 = 0x401d;
  local_30 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_50 = local_38;
  local_48 = 0;
  uVar1 = FUN_140c1542c(local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578634c FUN_14578634c body=548 status=ok
// SIG undefined FUN_14578634c(void)

void FUN_14578634c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [72];
  longlong local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined1 local_80 [72];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_140fbcb60(local_80);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  local_88 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_98 = 0;
  uStack_90 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  uVar1 = local_88;
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140c19bd6(local_e0,local_80);
  uVar2 = FUN_145786572(local_38,local_e0,uVar1,plVar3);
  *param_3 = uVar2;
  FUN_140ee7917(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1412dafa6(local_80);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145786572 FUN_145786572 body=168 status=ok
// SIG undefined FUN_145786572(void)

undefined4
FUN_145786572(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14578661c(param_4,&local_48);
  FUN_140ee7917(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  lVar2 = FUN_140948f46(param_1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140c19e8c(lVar2,param_2,param_3,param_4);
  }
  FUN_1412dafa6(param_2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578661c FUN_14578661c body=80 status=ok
// SIG undefined FUN_14578661c(void)

longlong * FUN_14578661c(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140ee7917(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14578666c FUN_14578666c body=174 status=ok
// SIG undefined FUN_14578666c(void)

undefined8 FUN_14578666c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_141338fda();
  FUN_14578671c(param_3,local_48,uVar2,&DAT_14cb8c358);
  FUN_140cc7bf8(param_2,local_48);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_48;
    if (0x18 < local_30) {
      pppuVar3 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578671c FUN_14578671c body=198 status=ok
// SIG undefined FUN_14578671c(void)

longlong FUN_14578671c(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_3 == 0) {
    (**(code **)(*param_1 + 0x28))(param_1,param_2,param_4);
  }
  else {
    if ((longlong)(int)param_1[0x11] != 0) {
      plVar5 = (longlong *)param_1[0x10];
      lVar6 = (longlong)(int)param_1[0x11] << 4;
      do {
        lVar4 = (**(code **)(*(longlong *)*plVar5 + 0x58))();
        if (lVar4 == param_3) {
          if (plVar5 != (longlong *)0x0) {
            plVar3 = (longlong *)*plVar5;
            plVar5 = (longlong *)plVar5[1];
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x78))(plVar3,param_2,param_4);
            }
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
            if (plVar3 != (longlong *)0x0) {
              return param_2;
            }
          }
          break;
        }
        plVar5 = plVar5 + 2;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
    *(undefined2 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return param_2;
}



// FUNCTION 14578681e FUN_14578681e body=280 status=ok
// SIG undefined FUN_14578681e(void)

void FUN_14578681e(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14071053a(param_1 + 0x1420,param_1);
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 == 0) {
      local_20 = 0;
      goto LAB_145786873;
    }
  }
  else {
    FUN_1456cec3c(param_1);
  }
  local_20 = param_1 + 0x4a0;
LAB_145786873:
  local_28 = param_1;
  FUN_140e343d0(param_1 + 0xdc8);
  FUN_141270908(param_1 + 0x22a0,param_1);
  FUN_140c1abaa(param_1);
  thunk_FUN_1405f85e0(param_1 + 0x15f8);
  FUN_1401b3e2a(param_1 + 0x5d8);
  FUN_14035925a(param_1 + 0x658,param_1,1,1);
  FUN_140c7d22e(param_1 + 0x1d08,param_1);
  if (*(char *)(param_1 + 0x1d00) == '\0') {
    FUN_14036c39e(param_1 + 0x1c30,param_1);
    *(undefined1 *)(param_1 + 0x1d00) = 1;
  }
  FUN_14056a50a(param_1,1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145786938 FUN_145786938 body=53 status=ok
// SIG undefined FUN_145786938(void)

void FUN_145786938(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_14578696e(param_1 + 0x60);
  FUN_1457869b2(param_1 + 0xb0);
  *(undefined1 *)(param_1 + 0x22) = 0;
  return;
}



// FUNCTION 14578696e FUN_14578696e body=67 status=ok
// SIG undefined FUN_14578696e(void)

void FUN_14578696e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1457869f6(param_1);
    FUN_140a1be5e(param_1,0);
    return;
  }
  FUN_140a1be5e(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1406feca4(param_1);
  return;
}



// FUNCTION 1457869b2 FUN_1457869b2 body=67 status=ok
// SIG undefined FUN_1457869b2(void)

void FUN_1457869b2(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145786b46(param_1);
    FUN_140a1bde2(param_1,0);
    return;
  }
  FUN_140a1bde2(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14096a72c(param_1);
  return;
}



// FUNCTION 1457869f6 FUN_1457869f6 body=335 status=ok
// SIG undefined FUN_1457869f6(void)

void FUN_1457869f6(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145786b46 FUN_145786b46 body=335 status=ok
// SIG undefined FUN_145786b46(void)

void FUN_145786b46(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145786c96 FUN_145786c96 body=191 status=ok
// SIG undefined FUN_145786c96(void)

void FUN_145786c96(undefined8 *param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  void *_Src;
  longlong lVar6;
  
  _Src = (void *)*param_1;
  *param_1 = 0;
  iVar4 = *(int *)(param_1 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar6 + 0xc7c);
  uVar5 = *puVar1;
  pbVar2 = (byte *)(lVar6 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_145786d56(param_1,iVar4);
    memcpy((void *)*param_1,_Src,(longlong)iVar4 * 0xc);
  }
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar5;
    *pbVar2 = 1;
  }
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
    return;
  }
  return;
}



// FUNCTION 145786d56 FUN_145786d56 body=106 status=ok
// SIG undefined FUN_145786d56(void)

undefined8 FUN_145786d56(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0xc,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0xc)) {
    uVar5 = uVar2 / 0xc & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0xc,4);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 145786dc0 FUN_145786dc0 body=191 status=ok
// SIG undefined FUN_145786dc0(void)

void FUN_145786dc0(undefined8 *param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  void *_Src;
  longlong lVar6;
  
  _Src = (void *)*param_1;
  *param_1 = 0;
  iVar4 = *(int *)(param_1 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar6 + 0xc7c);
  uVar5 = *puVar1;
  pbVar2 = (byte *)(lVar6 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_145786e80(param_1,iVar4);
    memcpy((void *)*param_1,_Src,(longlong)iVar4 * 0xc);
  }
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar5;
    *pbVar2 = 1;
  }
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
    return;
  }
  return;
}



// FUNCTION 145786e80 FUN_145786e80 body=106 status=ok
// SIG undefined FUN_145786e80(void)

undefined8 FUN_145786e80(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0xc,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0xc)) {
    uVar5 = uVar2 / 0xc & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0xc,4);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 145786eea FUN_145786eea body=193 status=ok
// SIG undefined FUN_145786eea(void)

void FUN_145786eea(undefined8 *param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  void *_Src;
  longlong lVar6;
  
  _Src = (void *)*param_1;
  *param_1 = 0;
  iVar4 = *(int *)(param_1 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar6 + 0xc7c);
  uVar5 = *puVar1;
  pbVar2 = (byte *)(lVar6 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1401b309e(param_1,iVar4,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar4 << 3);
  }
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar5;
    *pbVar2 = 1;
  }
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
    return;
  }
  return;
}



// FUNCTION 145786fac FUN_145786fac body=202 status=ok
// SIG undefined FUN_145786fac(void)

void FUN_145786fac(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_145787078(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_145787078(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145787078 FUN_145787078 body=79 status=ok
// SIG undefined FUN_145787078(void)

undefined8 * FUN_145787078(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457870c8(param_1,iVar1);
      FUN_140c1c328(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457870c8 FUN_1457870c8 body=115 status=ok
// SIG undefined FUN_1457870c8(void)

void FUN_1457870c8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14578713c FUN_14578713c body=216 status=ok
// SIG undefined FUN_14578713c(void)

void FUN_14578713c(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_145787216(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_145787216(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  FUN_140d60d3d(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145787216 FUN_145787216 body=93 status=ok
// SIG undefined FUN_145787216(void)

undefined8 * FUN_145787216(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d60d3d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145787274(param_1,iVar1);
      FUN_140c1c398(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145787274 FUN_145787274 body=115 status=ok
// SIG undefined FUN_145787274(void)

void FUN_145787274(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1457872e8 FUN_1457872e8 body=216 status=ok
// SIG undefined FUN_1457872e8(void)

void FUN_1457872e8(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_1457873c2(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_1457873c2(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  FUN_1413f882b(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457873c2 FUN_1457873c2 body=93 status=ok
// SIG undefined FUN_1457873c2(void)

undefined8 * FUN_1457873c2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1413f882b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145787420(param_1,iVar1);
      FUN_140c1c41c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145787420 FUN_145787420 body=98 status=ok
// SIG undefined FUN_145787420(void)

void FUN_145787420(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145787482 FUN_145787482 body=216 status=ok
// SIG undefined FUN_145787482(void)

void FUN_145787482(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_14578755c(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_14578755c(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  FUN_1413f8801(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578755c FUN_14578755c body=93 status=ok
// SIG undefined FUN_14578755c(void)

undefined8 * FUN_14578755c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1413f8801(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457875ba(param_1,iVar1);
      FUN_140c1c464(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457875ba FUN_1457875ba body=115 status=ok
// SIG undefined FUN_1457875ba(void)

void FUN_1457875ba(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,0x10);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14578762e FUN_14578762e body=132 status=ok
// SIG undefined FUN_14578762e(void)

void FUN_14578762e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457876b4 FUN_1457876b4 body=75 status=ok
// SIG undefined FUN_1457876b4(void)

void FUN_1457876b4(longlong param_1)

{
  FUN_1449e6b18(param_1 + 0x48);
  FUN_1449e6b18(param_1 + 0x3c);
  FUN_1449e6b18(param_1 + 0x30);
  FUN_1449e6b18(param_1 + 0x24);
  FUN_1449e6b18(param_1 + 0x18);
  FUN_1449e6b18(param_1 + 0xc);
  FUN_1449e6b18(param_1);
  return;
}



// FUNCTION 145787700 thunk_FUN_140c2c4ea body=5 status=ok
// SIG undefined thunk_FUN_140c2c4ea(void)

void thunk_FUN_140c2c4ea(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  wchar_t *pwStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c2c5be();
  uStack_28 = 0;
  uStack_38 = 8;
  uStack_30 = 1;
  pwStack_48 = L"HealthState";
  uStack_40 = 0x100000012;
  FUN_140c2c993(&pwStack_48,param_2,&uStack_38);
  pwStack_48 = L"GrappleableState";
  uStack_40 = 0x100000013;
  FUN_140c2c993(&pwStack_48,param_2,&uStack_38);
  pwStack_48 = L"bGrappleEnabled";
  uStack_40 = 0x100000011;
  FUN_140c2c993(&pwStack_48,param_2,&uStack_38);
  if ((uStack_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145787706 FUN_145787706 body=132 status=ok
// SIG undefined FUN_145787706(void)

bool FUN_145787706(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578778c FUN_14578778c body=858 status=ok
// SIG undefined FUN_14578778c(void)

void FUN_14578778c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_128 [40];
  float local_100;
  float local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0 [8];
  longlong local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  double local_c0;
  ulonglong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((DAT_14cb0d2b0 == 0) || (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 8))(), cVar6 == '\0')) {
    if (DAT_14c98e618 != (longlong *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0.0;
      uStack_b8 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      FUN_145787ae8(DAT_14c98e618,&local_c8);
      *(undefined4 *)(param_1 + 0xa0) = local_c8;
      *(undefined4 *)(param_1 + 0xa4) = uStack_c4;
      (**(code **)(*DAT_14c98e618 + 0x30))(DAT_14c98e618,&local_d8);
      if (local_d8 == 0) {
        iVar7 = *(int *)(param_1 + 0xa0);
        iVar8 = *(int *)(param_1 + 0xa4);
      }
      else {
        FUN_140c2d24e(local_d8,&local_f8);
        plVar3 = *(longlong **)(local_d8 + 0x3a8);
        if (plVar3 != (longlong *)0x0) {
          iVar7 = (int)plVar3[1];
          do {
            if (iVar7 == 0) goto LAB_145787876;
            LOCK();
            iVar8 = (int)plVar3[1];
            bVar9 = iVar7 == iVar8;
            if (bVar9) {
              *(int *)(plVar3 + 1) = iVar7 + 1;
              iVar8 = iVar7;
            }
            iVar7 = iVar8;
            UNLOCK();
          } while (!bVar9);
          plVar4 = *(longlong **)(local_d8 + 0x3a0);
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
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,local_e0);
            local_f8._0_4_ = (float)local_e0._0_4_;
            local_f8._4_4_ = (float)local_e0._4_4_;
          }
        }
LAB_145787876:
        iVar7 = (int)(float)local_f8;
        *(int *)(param_1 + 0xa0) = iVar7;
        iVar8 = (int)local_f8._4_4_;
        *(int *)(param_1 + 0xa4) = iVar8;
      }
      local_fc = (float)iVar8;
      local_f8 = 0;
      uStack_f0 = 0;
      local_100 = (float)iVar7;
      FUN_145787b40(DAT_14c98e618,&local_f8);
      *(int *)(param_1 + 0x90) = -((int)ROUND(-0.5 - ((float)local_f8 + (float)local_f8)) >> 1);
      *(int *)(param_1 + 0x94) = -((int)ROUND(-0.5 - (local_f8._4_4_ + local_f8._4_4_)) >> 1);
      *(int *)(param_1 + 0x98) = -((int)ROUND(-0.5 - ((float)uStack_f0 + (float)uStack_f0)) >> 1);
      *(int *)(param_1 + 0x9c) = -((int)ROUND(-0.5 - (uStack_f0._4_4_ + uStack_f0._4_4_)) >> 1);
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_d0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar2 = (int *)((longlong)local_d0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_d0 + 0x10))(local_d0);
          }
        }
      }
      FUN_140ecb711(local_c0,uStack_b8 & 0xffffffff);
      if (local_c0 != 0.0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 0x50))
              (*(longlong **)(DAT_14cb0d2b0 + 0xfd0),&local_c8);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0x8c);
    dVar5 = (double)*(int *)(param_1 + 0x88);
    iVar7 = (int)((dVar5 - (double)CONCAT44(uStack_c4,local_c8) * dVar5) * 0.5);
    *(int *)(param_1 + 0x90) = iVar7;
    dVar5 = (double)*(int *)(param_1 + 0x8c);
    iVar8 = (int)((dVar5 - local_c0 * dVar5) * 0.5);
    *(int *)(param_1 + 0x94) = iVar8;
    *(int *)(param_1 + 0x98) = iVar7;
    *(int *)(param_1 + 0x9c) = iVar8;
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145787ae8 FUN_145787ae8 body=78 status=ok
// SIG undefined FUN_145787ae8(void)

void FUN_145787ae8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  FUN_140c2d49a(param_2);
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  FUN_140ecb6b4(param_1 + 0x48,param_2 + 1);
  puVar2 = param_2 + 3;
  puVar3 = (undefined8 *)(param_1 + 0x58);
  for (lVar1 = 0xd; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  uVar4 = FUN_145787b36();
  *(undefined4 *)(param_1 + 0xc0) = uVar4;
  return;
}



// FUNCTION 145787b36 FUN_145787b36 body=9 status=ok
// SIG undefined FUN_145787b36(void)

undefined4 FUN_145787b36(void)

{
  return DAT_14c75ed00;
}



// FUNCTION 145787b40 FUN_145787b40 body=367 status=ok
// SIG undefined FUN_145787b40(void)

void FUN_145787b40(longlong param_1,float *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  undefined8 local_c0 [5];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  fVar4 = DAT_14c84635c._4_4_;
  fVar5 = (float)DAT_14c84635c;
  if (((((float)DAT_14c84635c == 0.0) && (!NAN((float)DAT_14c84635c))) &&
      (DAT_14c84635c._4_4_ == 0.0)) && (!NAN(DAT_14c84635c._4_4_))) {
    local_c0[2] = 0;
    local_c0[3] = 0;
    local_c0[0] = 0;
    local_c0[1] = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_d8 = *(undefined8 *)(param_1 + 0x40);
    FUN_140ecb6b4(&uStack_d0,param_1 + 0x48);
    puVar2 = (undefined8 *)(param_1 + 0x58);
    puVar3 = local_c0;
    for (lVar1 = 0xd; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    fVar4 = (float)(int)local_d8._4_4_;
    fVar5 = (float)(int)(float)local_d8;
    FUN_140ecb711(uStack_d0,uStack_c8 & 0xffffffff);
    if (uStack_d0 != 0) {
      FUN_1400020a8();
    }
  }
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_145787cb0(param_1,&local_d8);
  *param_2 = (float)local_d8 * fVar5 * 0.5;
  param_2[2] = fVar5 * (float)uStack_d0 * 0.5;
  param_2[1] = local_d8._4_4_ * fVar4 * 0.5;
  param_2[3] = fVar4 * uStack_d0._4_4_ * 0.5;
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145787cb0 FUN_145787cb0 body=411 status=ok
// SIG undefined FUN_145787cb0(void)

void FUN_145787cb0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  ulonglong uStack_b8;
  undefined8 local_b0 [5];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(char *)(param_1 + 0x131) == '\x01') ||
     ((*(char *)(param_1 + 0x131) == '\x02' &&
      (((((*(float *)(param_1 + 0x134) != 0.0 || (NAN(*(float *)(param_1 + 0x134)))) ||
         (*(float *)(param_1 + 0x13c) != 0.0)) ||
        ((NAN(*(float *)(param_1 + 0x13c)) || (*(float *)(param_1 + 0x138) != 0.0)))) ||
       ((NAN(*(float *)(param_1 + 0x138)) ||
        ((*(float *)(param_1 + 0x140) != 0.0 || (NAN(*(float *)(param_1 + 0x140)))))))))))) {
    fVar1 = *(float *)(param_1 + 0x138);
    fVar2 = *(float *)(param_1 + 0x13c);
    fVar3 = *(float *)(param_1 + 0x140);
    *param_2 = *(float *)(param_1 + 0x134);
    param_2[1] = fVar1;
    param_2[2] = fVar2;
    param_2[3] = fVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
  }
  local_b0[2] = 0;
  local_b0[3] = 0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_88 = 0.0;
  dStack_80 = 0.0;
  local_78 = 0.0;
  dStack_70 = 0.0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_c8 = *(undefined8 *)(param_1 + 0x40);
  FUN_140ecb6b4(&local_c0,param_1 + 0x48);
  puVar5 = (undefined8 *)(param_1 + 0x58);
  puVar6 = local_b0;
  for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *param_2 = (float)local_88 / ((float)(int)local_c8 * 0.5);
  param_2[1] = (float)dStack_80 / ((float)local_c8._4_4_ * 0.5);
  param_2[2] = (float)local_78 / ((float)(int)local_c8 * 0.5);
  param_2[3] = (float)dStack_70 / ((float)local_c8._4_4_ * 0.5);
  FUN_140ecb711(local_c0,uStack_b8 & 0xffffffff);
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145787e4e FUN_145787e4e body=143 status=ok
// SIG undefined FUN_145787e4e(void)

undefined1 FUN_145787e4e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9670f0) {
    FUN_144b3d300(&DAT_14c9670f0);
    if (DAT_14c9670f0 == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c9670ec = FUN_14054d46e(&DAT_14c846b20,L"RenderOffScreen");
      _Init_thread_footer(&DAT_14c9670f0);
    }
  }
  return DAT_14c9670ec;
}



// FUNCTION 145787ede FUN_145787ede body=162 status=ok
// SIG undefined FUN_145787ede(void)

undefined8 FUN_145787ede(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0xb0;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e0b];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0xb0,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0x2e8ba2e8ba2e8ba3),0);
  uVar4 = 0x7fffffff;
  if (1 < (int)(uVar3 / 0x58)) {
    uVar4 = uVar3 / 0x58 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x58,8);
  }
  return uVar2;
}



// FUNCTION 145787f80 FUN_145787f80 body=196 status=ok
// SIG undefined FUN_145787f80(void)

undefined8 * FUN_145787f80(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[10] = param_2[10];
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = param_2[6];
  uVar6 = param_2[7];
  uVar7 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar7;
  param_1[6] = uVar5;
  param_1[7] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  return param_1;
}



// FUNCTION 145788044 FUN_145788044 body=226 status=ok
// SIG undefined FUN_145788044(void)

undefined4 FUN_145788044(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  HMONITOR pHVar3;
  HDC hdc;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  RECT local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c75ed08 != 0) {
    if (DAT_14c967938 == (code *)0x0) {
      hdc = GetDC((HWND)0x0);
      GetDeviceCaps(hdc,0x58);
      ReleaseDC((HWND)0x0,hdc);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
    local_28.left = *(LONG *)(param_1 + 0x30);
    local_28.top = *(LONG *)(param_1 + 0x34);
    local_28.right = *(LONG *)(param_1 + 0x38);
    local_28.bottom = *(LONG *)(param_1 + 0x3c);
    pHVar3 = MonitorFromRect(&local_28,2);
    if (pHVar3 != (HMONITOR)0x0) {
      local_2c = 0;
      local_30 = 0;
      iVar1 = (*DAT_14c967938)(pHVar3,0);
      uVar2 = 0x60;
      if (-1 < iVar1) {
        uVar2 = local_2c;
      }
      goto LAB_1457880cf;
    }
  }
  uVar2 = 0x60;
LAB_1457880cf:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578812c FUN_14578812c body=500 status=ok
// SIG undefined FUN_14578812c(void)

void FUN_14578812c(int *param_1)

{
  double dVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  float fVar6;
  double dVar7;
  
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar2 = FUN_140c2d9be(&DAT_14c846b20,L"SafeZonePaddingLeft=",param_1 + 0x10);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar3 = FUN_140c2d9be(&DAT_14c846b20,L"SafeZonePaddingTop=",param_1 + 0x12);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar4 = FUN_140c2d9be(&DAT_14c846b20,L"SafeZonePaddingRight=",param_1 + 0x14);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar5 = FUN_140c2d9be(&DAT_14c846b20,L"SafeZonePaddingBottom=",param_1 + 0x16);
  if ((((cVar2 == '\0' && cVar3 == '\0') && cVar4 == '\0') && cVar5 == '\0') &&
     (DAT_14c75ed00 < 1.0)) {
    fVar6 = (1.0 - DAT_14c75ed00) * 0.5;
    dVar7 = (double)((float)param_1[1] * fVar6);
    dVar1 = (double)((float)*param_1 * fVar6);
    *(double *)(param_1 + 0x10) = dVar1;
    *(double *)(param_1 + 0x12) = dVar7;
    *(double *)(param_1 + 0x14) = dVar1;
    *(double *)(param_1 + 0x16) = dVar7;
  }
  if (DAT_14c75ed04 < 1.0) {
    fVar6 = (1.0 - DAT_14c75ed04) * 0.5;
    dVar7 = (double)((float)param_1[1] * fVar6);
    dVar1 = (double)((float)*param_1 * fVar6);
    *(double *)(param_1 + 0x18) = dVar1;
    *(double *)(param_1 + 0x1a) = dVar7;
    *(double *)(param_1 + 0x1c) = dVar1;
    *(double *)(param_1 + 0x1e) = dVar7;
  }
  return;
}



// FUNCTION 145788320 FUN_145788320 body=239 status=ok
// SIG undefined FUN_145788320(void)

float FUN_145788320(float param_1,float param_2)

{
  int iVar1;
  HMONITOR pHVar2;
  HDC hdc;
  POINT pt;
  float fVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  fVar3 = 1.0;
  if (DAT_14c75ed08 != 0) {
    if (DAT_14c967938 == (code *)0x0) {
      hdc = GetDC((HWND)0x0);
      iVar1 = GetDeviceCaps(hdc,0x58);
      fVar3 = (float)iVar1 / 96.0;
      ReleaseDC((HWND)0x0,hdc);
    }
    else {
      pt.x = (int)param_1;
      pt.y = (int)param_2;
      pHVar2 = MonitorFromPoint(pt,2);
      if (pHVar2 != (HMONITOR)0x0) {
        local_24 = 0;
        local_28 = 0;
        iVar1 = (*DAT_14c967938)(pHVar2,0);
        if (iVar1 < 0) {
          fVar3 = 1.0;
        }
        else {
          fVar3 = (float)local_24 / 96.0;
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145788410 FUN_145788410 body=1202 status=ok
// SIG undefined FUN_145788410(void)

ulonglong FUN_145788410(longlong *param_1,uint *param_2,uint *param_3,int *param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  LSTATUS LVar6;
  BOOL BVar7;
  HDEVINFO DeviceInfoSet;
  HKEY hKey;
  void *_Dst;
  ushort uVar8;
  ulonglong uVar9;
  code *pcVar10;
  byte bVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStackY_6a8 [32];
  void *local_648;
  int local_640;
  DWORD local_634 [3];
  undefined1 local_628 [400];
  _SP_DEVINFO_DATA local_498;
  BYTE local_478 [21];
  byte local_463;
  byte local_462;
  byte local_440;
  byte local_43e;
  byte local_43d;
  byte local_43b;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStackY_6a8;
  uVar16 = 0;
  DeviceInfoSet =
       SetupDiGetClassDevsExW
                 ((GUID *)&DAT_149ec83b8,(PCWSTR)0x0,(HWND)0x0,2,(HDEVINFO)0x0,(PCWSTR)0x0,
                  (PVOID)0x0);
  if (DeviceInfoSet != (HDEVINFO)0x0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x103) {
      bVar11 = 0;
    }
    else {
      uVar16 = 0;
      bVar11 = 0;
      pcVar10 = SetupDiEnumDeviceInfo_exref;
      do {
        local_498.ClassGuid.Data2 = 0;
        local_498.ClassGuid.Data3 = 0;
        local_498.ClassGuid.Data4[0] = '\0';
        local_498.ClassGuid.Data4[1] = '\0';
        local_498.ClassGuid.Data4[2] = '\0';
        local_498.ClassGuid.Data4[3] = '\0';
        local_498.ClassGuid.Data4[4] = '\0';
        local_498.ClassGuid.Data4[5] = '\0';
        local_498.ClassGuid.Data4[6] = '\0';
        local_498.ClassGuid.Data4[7] = '\0';
        local_498.DevInst = 0;
        local_498.Reserved = 0;
        local_498.cbSize = 0x20;
        local_498.ClassGuid.Data1 = 0;
        iVar4 = (*pcVar10)(DeviceInfoSet,uVar16,&local_498);
        if (iVar4 == 1) {
          iVar4 = CM_Get_Device_IDW(local_498.DevInst,local_628,200,0);
          if (iVar4 == 0) {
            FUN_140056680(&local_648,local_628);
            uVar5 = FUN_1447ee042(&local_648,&DAT_149e01f64);
            if (uVar5 != 0x7fffffff) {
              uVar15 = local_640 - 1;
              if (local_640 == 0) {
                uVar15 = 0;
              }
              if ((int)uVar15 <= (int)uVar5) {
                uVar5 = uVar15;
              }
              if ((int)uVar5 < 1) {
                uVar5 = 0;
              }
              uVar15 = uVar15 - uVar5;
              if (0 < (int)uVar15) {
                iVar4 = local_640 - (uVar15 + uVar5);
                if (iVar4 != 0) {
                  _Dst = (void *)((ulonglong)uVar5 * 2 + (longlong)local_648);
                  memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar15 * 2),(longlong)iVar4 * 2)
                  ;
                }
                local_640 = local_640 - uVar15;
              }
            }
            uVar5 = local_640 - 1;
            if (local_640 == 0) {
              uVar5 = 0;
            }
            uVar15 = 8;
            if ((int)uVar5 < 8) {
              uVar15 = uVar5;
            }
            if ((int)uVar15 < 1) {
              uVar15 = 0;
            }
            if (0 < (int)uVar5) {
              if (local_640 - uVar15 != 0) {
                memmove(local_648,(void *)((longlong)local_648 + (ulonglong)uVar15 * 2),
                        (longlong)(int)(local_640 - uVar15) * 2);
              }
              local_640 = local_640 - uVar15;
            }
            if (local_640 == (int)param_1[1]) {
              if (1 < local_640) {
                lVar12 = 0;
                while( true ) {
                  uVar8 = *(ushort *)((longlong)local_648 + lVar12);
                  uVar9 = (ulonglong)uVar8;
                  uVar13 = *(ushort *)(*param_1 + lVar12);
                  if (uVar8 != uVar13) break;
                  if (uVar8 == 0) goto LAB_14578865d;
LAB_145788629:
                  lVar12 = lVar12 + 2;
                }
                if ((uVar13 | uVar8) < 0x80) {
                  uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                  uVar14 = (ulonglong)uVar13;
                  uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                  if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar14]) goto LAB_145788629;
                }
                if (uVar8 != uVar13) goto LAB_1457888ab;
              }
LAB_14578865d:
              bVar2 = false;
              hKey = SetupDiOpenDevRegKey(DeviceInfoSet,&local_498,1,0,1,0x20019);
              puVar1 = (undefined1 *)((longlong)&hKey->unused + 1);
              if (&DAT_00000001 < puVar1) {
                local_634[1] = 0x200;
                local_634[0] = 0x400;
                DVar3 = 0;
                do {
                  LVar6 = RegEnumValueW(hKey,DVar3,(LPWSTR)&DAT_14c967400,local_634 + 1,(LPDWORD)0x0
                                        ,local_634 + 2,local_478,local_634);
                  if ((LVar6 == 0) &&
                     (iVar4 = wcscmp((wchar_t *)&DAT_14c967400,L"EDID"), iVar4 == 0)) {
                    *param_2 = (uint)local_440 | (local_43e & 0xf0) << 4;
                    uVar5 = (uint)local_43d | (local_43b & 0xf0) << 4;
                    *param_3 = uVar5;
                    iVar4 = 0;
                    if ((local_463 != 0) && (iVar4 = 0, local_462 != 0)) {
                      iVar4 = ((int)((float)uVar5 / ((float)local_462 * 0.393701)) +
                              (int)((float)(int)*param_2 / ((float)local_463 * 0.393701))) / 2;
                    }
                    *param_4 = iVar4;
                    bVar11 = 1;
                    goto LAB_1457887c4;
                  }
                  DVar3 = DVar3 + 1;
                } while (LVar6 != 0x103);
                bVar11 = 0;
LAB_1457887c4:
                RegCloseKey(hKey);
                bVar2 = true;
              }
              if (puVar1 < (undefined1 *)0x2) {
                bVar2 = false;
              }
            }
            else {
              if ((int)param_1[1] + local_640 == 1) goto LAB_14578865d;
LAB_1457888ab:
              bVar2 = false;
            }
            pcVar10 = SetupDiEnumDeviceInfo_exref;
            if (local_648 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (bVar2) break;
          }
        }
        uVar16 = (ulonglong)((int)uVar16 + 1);
        DVar3 = GetLastError();
      } while (DVar3 != 0x103);
    }
    BVar7 = SetupDiDestroyDeviceInfoList(DeviceInfoSet);
    uVar16 = CONCAT71((int7)(uVar16 >> 8),BVar7 != 0 & bVar11);
  }
  if ((local_70 ^ (ulonglong)auStackY_6a8) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457888c4 FUN_1457888c4 body=483 status=ok
// SIG undefined FUN_1457888c4(void)

void FUN_1457888c4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 145788aa8 FUN_145788aa8 body=132 status=ok
// SIG undefined FUN_145788aa8(void)

void FUN_145788aa8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145788b2d FUN_145788b2d body=117 status=ok
// SIG undefined FUN_145788b2d(void)

void FUN_145788b2d(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x18);
  }
  FUN_1405f0c40(DAT_14cb84f20,&local_28,lVar1);
  local_30 = local_28;
  if (local_28 == 0) {
    local_30 = lVar1;
  }
  FUN_140c3a90d(&local_30,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145788bac FUN_145788bac body=72 status=ok
// SIG undefined FUN_145788bac(void)

void FUN_145788bac(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140c3d23b(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145788bf4 FUN_145788bf4 body=148 status=ok
// SIG undefined FUN_145788bf4(void)

bool FUN_145788bf4(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145788c93 FUN_145788c93 body=822 status=ok
// SIG undefined FUN_145788c93(void)

undefined1 *
FUN_145788c93(undefined1 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             float param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_144a64e42();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) goto LAB_145788cd9;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_145788cd9:
      FUN_145788fc9(param_1,param_2,param_3,param_4,param_5);
      return param_1;
    }
    lVar2 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_144a7452c();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) goto LAB_145788e31;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_145788e31:
      FUN_1470dda72(param_1,param_2,param_3,param_4,param_5);
      return param_1;
    }
    lVar2 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_14093f0c0();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) goto LAB_145788e7e;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_145788e7e:
      FUN_1470ddb24(param_1,param_2,param_3,param_4,param_5);
      return param_1;
    }
    lVar2 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) goto LAB_145788ecb;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_145788ecb:
      FUN_1470ddbda(param_1,param_2,param_3,param_4,param_5);
      return param_1;
    }
    lVar2 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) goto LAB_145788f18;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_145788f18:
      FUN_1470dd86c(param_1,param_2,param_3,param_4,param_5);
      return param_1;
    }
    lVar2 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_144a7add4();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) goto LAB_145788f65;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_145788f65:
      FUN_1470dd920(param_1,param_2,param_3,param_4,param_5);
      return param_1;
    }
    lVar2 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_144a49fc8();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) goto LAB_145788fb2;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_145788fb2:
      FUN_1470dd9f7(param_1,param_3,param_4,(double)param_5);
      return param_1;
    }
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return param_1;
}



// FUNCTION 145788fc9 FUN_145788fc9 body=185 status=ok
// SIG undefined FUN_145788fc9(void)

undefined1 *
FUN_145788fc9(undefined1 *param_1,longlong *param_2,float *param_3,byte param_4,float param_5)

{
  float fVar1;
  char cVar2;
  float fVar3;
  
  fVar1 = *param_3;
  if (param_4 - 1 < 2) {
    fVar3 = param_5 + fVar1;
  }
  else {
    fVar3 = param_5;
    if (param_4 != 4) {
      if (param_4 == 3) {
        fVar3 = param_5 * fVar1;
      }
      else {
        fVar3 = fVar1;
        if (param_4 == 0) {
          fVar3 = (float)(-(uint)(param_5 < 0.0) & (uint)(1.0 / (1.0 - param_5)) |
                         ~-(uint)(param_5 < 0.0) & (uint)(param_5 + 1.0)) * fVar1;
        }
      }
    }
  }
  cVar2 = (**(code **)(*param_2 + 0x1e8))(param_2);
  if (cVar2 != '\0') {
    fVar3 = (float)(int)fVar3;
  }
  *param_3 = fVar3;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return param_1;
}



// FUNCTION 145789082 FUN_145789082 body=144 status=ok
// SIG undefined FUN_145789082(void)

void FUN_145789082(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xc08);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x81) {
      iVar5 = 0x80;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0xc0c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xc0c) = iVar5;
    FUN_145789112(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 145789112 FUN_145789112 body=151 status=ok
// SIG undefined FUN_145789112(void)

void FUN_145789112(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc00);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc00,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0xc00),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc00,param_2,param_3,0x18);
  return;
}



// FUNCTION 1457891aa FUN_1457891aa body=137 status=ok
// SIG undefined FUN_1457891aa(void)

void FUN_1457891aa(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 2) {
      iVar7 = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x44) < 2) {
        uVar3 = 4;
        if (4 < uVar1) {
          uVar3 = uVar1;
        }
        lVar4 = (longlong)(int)uVar3;
      }
      else {
        lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar5 = FUN_144a3809e(lVar4 * 0x38,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar5 >> 3;
      iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar7 = 0x7fffffff;
      if ((int)uVar1 <= iVar6) {
        iVar7 = iVar6;
      }
    }
    *(int *)(param_1 + 0x44) = iVar7;
    FUN_145789234(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145789234 FUN_145789234 body=131 status=ok
// SIG undefined FUN_145789234(void)

void FUN_145789234(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x38);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x38,0,param_3,0x38);
    memmove(*(void **)((longlong)param_1 + 0x38),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x38,param_2,param_3,0x38);
  return;
}



// FUNCTION 1457892b8 FUN_1457892b8 body=84 status=ok
// SIG undefined FUN_1457892b8(void)

longlong * FUN_1457892b8(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14578930c FUN_14578930c body=132 status=ok
// SIG undefined FUN_14578930c(void)

void FUN_14578930c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145789392 FUN_145789392 body=364 status=ok
// SIG undefined FUN_145789392(void)

void FUN_145789392(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined4 local_39;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = FUN_14479d2ce(param_2 + 0x34);
  if (lVar2 != 0) {
    lVar3 = FUN_1402095ca();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar2 = FUN_1412d33a2(lVar2);
      if ((lVar2 != 0) &&
         ((*(longlong *)(param_1 + 0x150) != 0 && (*(longlong *)(param_1 + 0x140) != 0)))) {
        uVar4 = (**(code **)(*(longlong *)(lVar2 + 0x870) + 0x10))(lVar2 + 0x870);
        lVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x150) + 0x870) + 0x10))
                          (*(longlong *)(param_1 + 0x150) + 0x870);
        if (lVar3 != 0) {
          iVar1 = FUN_14479d732(lVar3,uVar4);
          if (iVar1 == 2) {
            local_b8[0] = 0;
            local_b0 = 0;
            uStack_a8 = 0;
            local_a0 = 0;
            uStack_98 = 0;
            local_90 = 0;
            uStack_88 = 0;
            uStack_84 = 0;
            uStack_80 = 0;
            uStack_7c = 0;
            local_70 = 0;
            uStack_68 = 0;
            local_60 = 0;
            uStack_58 = 0;
            local_50 = 0;
            uStack_48 = 0;
            local_40 = 0xffffffff;
            local_3c = 0;
            local_3a = 1;
            local_39 = 0;
            uVar4 = *(undefined8 *)(param_1 + 0x150);
            lVar3 = *(longlong *)(param_1 + 0x140);
            uVar5 = FUN_1447210f0(lVar2);
            local_c8 = local_b8;
            FUN_140bdce7c(uVar5,lVar3 + 0x690,lVar2,uVar4);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145789500 FUN_145789500 body=71 status=ok
// SIG undefined FUN_145789500(void)

longlong FUN_145789500(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_141498c8a();
  if (lVar1 != 0) {
    lVar2 = FUN_145a8bcd8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 145789548 FUN_145789548 body=124 status=ok
// SIG undefined FUN_145789548(void)

void FUN_145789548(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1844a8;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    param_1[3] = 0;
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
    plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x0001457895c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1457895c4 FUN_1457895c4 body=128 status=ok
// SIG undefined FUN_1457895c4(void)

undefined8 * FUN_1457895c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b3f7688;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b3f7698;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b3f76b0;
  puVar2[2] = puVar1;
  param_1[1] = puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    param_1[2] = puVar2;
  }
  return param_1;
}



// FUNCTION 145789644 FUN_145789644 body=204 status=ok
// SIG undefined FUN_145789644(void)

undefined8 * FUN_145789644(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b3f7688;
  lVar4 = FUN_14001cc68(0x18,0x10);
  FUN_145789710(lVar4,*(undefined8 *)(param_2 + 8));
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b3f76b0;
  plVar5[2] = lVar4;
  param_1[1] = lVar4;
  plVar3 = (longlong *)param_1[2];
  if (plVar5 == plVar3) {
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) {
      return param_1;
    }
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar5;
  }
  else {
    param_1[2] = plVar5;
    if (plVar3 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) {
      return param_1;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return param_1;
}



// FUNCTION 145789710 FUN_145789710 body=107 status=ok
// SIG undefined FUN_145789710(void)

undefined8 * FUN_145789710(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14b3f7668;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1488233ce(param_1 + 1,iVar1,0);
    FUN_148823430(param_1[1],uVar2,iVar1);
  }
  *param_1 = &PTR_FUN_14b3f7698;
  return param_1;
}



// FUNCTION 14578977c FUN_14578977c body=334 status=ok
// SIG undefined FUN_14578977c(void)

int * FUN_14578977c(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[1];
  if (param_3 < iVar3) {
    lVar7 = *param_1;
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_14482b872(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar7 = *param_1;
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar3 * 0x18) = 0xffffffff;
        lVar4 = param_1[6];
        *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x18) = (int)lVar4;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)lVar4 * 0x18) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = FUN_144a54ea4(param_1 + 2,1);
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar4 = (longlong)param_3;
  iVar3 = *(int *)(lVar7 + lVar4 * 0x18);
  iVar5 = *(int *)(lVar7 + 4 + lVar4 * 0x18);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar5;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x18) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar7 + (longlong)iVar5 * 0x18) = iVar3;
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar3 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar4 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1457898ca FUN_1457898ca body=237 status=ok
// SIG undefined FUN_1457898ca(void)

void FUN_1457898ca(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  FUN_1457d8d86();
  uVar4 = FUN_140c4fdb6();
  *(undefined8 *)(param_1 + 8) = uVar4;
  puVar5 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0x80;
  *(undefined4 *)(puVar5 + 8) = 0xffffffff;
  puVar5[0xc] = 0;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b3f75e0;
  plVar6[2] = (longlong)puVar5;
  *(undefined8 **)(param_1 + 0x10) = puVar5;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar6 == plVar3) {
    if (plVar6 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) {
      return;
    }
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar6;
  }
  else {
    *(longlong **)(param_1 + 0x18) = plVar6;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) {
      return;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return;
}



// FUNCTION 1457899b8 FUN_1457899b8 body=165 status=ok
// SIG undefined FUN_1457899b8(void)

uint FUN_1457899b8(longlong *param_1,undefined8 param_2)

{
  DWORD dwErrCode;
  uint uVar1;
  undefined1 auStack_268 [32];
  LPCWSTR local_248;
  undefined2 *local_240;
  char local_230;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_140c50214(&local_248);
  *local_240 = 0;
  RemoveDirectoryW(local_248);
  if (local_230 == '\x01') {
    FUN_1400020a8(local_248);
  }
  dwErrCode = GetLastError();
  uVar1 = (**(code **)(*param_1 + 0x108))(param_1,param_2);
  if ((char)uVar1 != '\0') {
    SetLastError(dwErrCode);
  }
  if ((local_28 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145789a5e FUN_145789a5e body=176 status=ok
// SIG undefined FUN_145789a5e(void)

undefined8 FUN_145789a5e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)param_3;
  if (((((char)param_3 != '\x04') && (lVar2 = *(longlong *)(param_1 + 0x420), lVar2 != 0)) &&
      (*(char *)(lVar2 + 300) != '\b')) && (*(char *)(lVar2 + 300) != '\x06')) {
    cVar1 = FUN_140ce3b60(lVar2,0);
    if (cVar1 != '\0') {
      *(undefined1 *)(*(longlong *)(param_1 + 0x420) + 0x150) = 1;
      return 0;
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x229) == '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x360);
    if (lVar2 != 0) {
      FUN_1400bc8c2(lVar2 + 0x1218,&DAT_14cbcaa88);
    }
  }
  if (*(char *)(param_1 + 0x419) == '\x01') {
    *(undefined1 *)(param_1 + 0xb5) = 1;
    uVar4 = (undefined4)CONCAT71((uint7)((ulonglong)param_3 >> 8) & 0xffffff,1);
  }
  uVar3 = FUN_140c5097a(param_1,param_2,uVar4);
  return uVar3;
}



// FUNCTION 145789b0e FUN_145789b0e body=402 status=ok
// SIG undefined FUN_145789b0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_145789b0e(char param_1)

{
  DWORD DVar1;
  undefined2 *puVar2;
  wchar_t *pwVar3;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c8c3a90 == 0) {
    DVar1 = GetModuleFileNameW(DAT_14c8c26f8,&DAT_14c8c3a90,0x200);
    if (DVar1 == 0) {
      memset(&DAT_14c8c3a90,0,0x400);
      memset(&DAT_14c8c3e90,0,0x400);
    }
    else {
      FUN_140056680(local_38,&DAT_14c8c3a90);
      FUN_140056680(local_48,&DAT_14c8c3a90);
      FUN_140c50e86(&local_58,local_38,1);
      pwVar3 = local_58;
      if (local_50 == 0) {
        pwVar3 = L"";
      }
      wcsncpy(&DAT_14c8c3a90,pwVar3,0x1ff);
      _DAT_14c8c3e8e = 0;
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      FUN_144a06ecc(&local_58,local_48);
      pwVar3 = local_58;
      if (local_50 == 0) {
        pwVar3 = L"";
      }
      wcsncpy((wchar_t *)&DAT_14c8c3e90,pwVar3,0x1ff);
      _DAT_14c8c428e = 0;
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  puVar2 = (undefined2 *)&DAT_14c8c3e90;
  if (param_1 != '\0') {
    puVar2 = &DAT_14c8c3a90;
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 145789ca2 FUN_145789ca2 body=163 status=ok
// SIG undefined FUN_145789ca2(void)

void FUN_145789ca2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14477b072(param_1,DAT_14cadadc0);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_30 = 0;
    local_38 = param_2;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000145789d0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x668))(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145789d54 FUN_145789d54 body=1260 status=ok
// SIG undefined FUN_145789d54(void)

longlong FUN_145789d54(undefined8 param_1)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 uVar12;
  double dVar13;
  double *pdVar14;
  undefined4 uVar15;
  uint uVar16;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  double local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [28];
  char local_ac;
  longlong local_a0;
  char local_78;
  ulonglong local_70;
  longlong lVar17;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  plVar11 = (longlong *)FUN_14578a612();
  if (plVar11 == (longlong *)0x0) {
    lVar18 = 0;
  }
  else {
    lVar18 = plVar11[0x22];
    if (lVar18 == 0) {
      (**(code **)(*plVar11 + 1000))(plVar11);
      lVar18 = plVar11[0x22];
    }
  }
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uVar12 = FUN_1447210f0(param_1);
  local_130 = FUN_145983792();
  if ((local_130 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_130);
  }
  FUN_14578a328(local_d0,uVar12,&local_130,5);
  if (local_ac == '\0') {
    do {
      lVar20 = local_a0;
      dVar13 = (double)FUN_14578a242();
      lVar17 = *(longlong *)(lVar20 + 0x10);
      piVar1 = (int *)((longlong)dVar13 + 0x38);
      if (*piVar1 <= *(int *)(lVar17 + 0x38)) {
        dVar13 = (double)((longlong)dVar13 + 0x30);
        lVar17 = *(longlong *)(lVar17 + 0x30);
        if (*(double *)(lVar17 + (longlong)*piVar1 * 8) == dVar13) goto LAB_145789fcc;
      }
      uVar15 = (undefined4)lVar17;
      lVar17 = *(longlong *)(lVar20 + 0x1c8);
      if (lVar17 == 0) {
        local_138 = DAT_14c8464f0;
        local_148 = DAT_14c8464e0;
        uStack_140 = DAT_14c8464e8;
        local_158 = DAT_14c846508;
        local_168 = (undefined4)DAT_14c8464f8;
        uStack_164 = DAT_14c8464f8._4_4_;
        uStack_160 = (undefined4)DAT_14c846500;
        uStack_15c = DAT_14c846500._4_4_;
      }
      else {
        local_148 = *(undefined8 *)(lVar17 + 0x260);
        uStack_140 = *(undefined8 *)(lVar17 + 0x268);
        local_138 = *(undefined8 *)(lVar17 + 0x270);
        dVar4 = *(double *)(lVar17 + 0x240);
        dVar5 = *(double *)(lVar17 + 0x248);
        dVar6 = *(double *)(lVar17 + 0x250);
        dVar7 = *(double *)(lVar17 + 600);
        pdVar14 = *(double **)(lVar17 + 0x228);
        local_108 = dVar4;
        uStack_100 = dVar5;
        local_f8 = dVar6;
        uStack_f0 = dVar7;
        if (pdVar14 == (double *)0x0) {
          uVar15 = 0x40;
          pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
          dVar13 = DAT_14c8463d8;
          *pdVar14 = DAT_14c8463d0;
          pdVar14[1] = dVar13;
          dVar13 = DAT_14c8463e8;
          pdVar14[2] = DAT_14c8463e0;
          pdVar14[3] = dVar13;
          dVar13 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
          pdVar14[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
          pdVar14[5] = dVar13;
          dVar13 = DAT_14c846508;
          pdVar14[6] = DAT_14c846508;
          *(double **)(lVar17 + 0x228) = pdVar14;
        }
        auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar14[1]);
        auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar14);
        auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar14[1]) >> 0x20);
        iVar10 = movmskpd(SUB84(dVar13,0),auVar2);
        auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar14[3]);
        auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar14[2]);
        auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar14[3]) >> 0x20);
        uVar16 = movmskpd(uVar15,auVar3);
        if ((uVar16 & 0x3fffffff) != 0 || iVar10 != 0) {
          *(undefined4 *)(pdVar14 + 2) = (undefined4)local_f8;
          *(undefined4 *)((longlong)pdVar14 + 0x14) = local_f8._4_4_;
          *(undefined4 *)(pdVar14 + 3) = (undefined4)uStack_f0;
          *(undefined4 *)((longlong)pdVar14 + 0x1c) = uStack_f0._4_4_;
          *(undefined4 *)pdVar14 = (undefined4)local_108;
          *(undefined4 *)((longlong)pdVar14 + 4) = local_108._4_4_;
          *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_100;
          *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_100._4_4_;
          FUN_1448052ee(&local_108,&local_e8);
          pdVar14[6] = local_d8;
          pdVar14[4] = local_e8;
          pdVar14[5] = dStack_e0;
        }
        local_158 = pdVar14[6];
        local_168 = *(undefined4 *)(pdVar14 + 4);
        uStack_164 = *(undefined4 *)((longlong)pdVar14 + 0x24);
        uStack_160 = *(undefined4 *)(pdVar14 + 5);
        uStack_15c = *(undefined4 *)((longlong)pdVar14 + 0x2c);
      }
      local_178 = local_158;
      local_188 = CONCAT44(uStack_164,local_168);
      uStack_180 = CONCAT44(uStack_15c,uStack_160);
      local_1a8 = (undefined4)local_148;
      uStack_1a4 = local_148._4_4_;
      uStack_1a0 = (undefined4)uStack_140;
      uStack_19c = uStack_140._4_4_;
      local_198 = local_138;
      local_1d8 = 0;
      cVar9 = FUN_140c59c06(uVar12,lVar18,&local_1a8,&local_188);
      uVar8 = uStack_110;
      if (cVar9 == '\0') {
        iVar10 = (int)uStack_110;
        uVar16 = (int)uStack_110 + 1;
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar16);
        plVar11 = &local_118;
        if (uStack_110._4_4_ < uVar16) {
          FUN_14578a58e(&local_118,uVar8 & 0xffffffff);
        }
LAB_145789faa:
        *(longlong *)(*plVar11 + (longlong)iVar10 * 8) = lVar20;
      }
      else {
        local_1b8 = local_158;
        local_1c8 = local_168;
        uStack_1c4 = uStack_164;
        uStack_1c0 = uStack_160;
        uStack_1bc = uStack_15c;
        cVar9 = FUN_140d7405c(uVar12,lVar18,&local_148,&local_1c8);
        uVar8 = uStack_120;
        if (cVar9 != '\0') {
          iVar10 = (int)uStack_120;
          uVar16 = (int)uStack_120 + 1;
          uStack_120 = CONCAT44(uStack_120._4_4_,uVar16);
          if (uStack_120._4_4_ < uVar16) {
            FUN_14578a58e(&local_128,uVar8 & 0xffffffff);
            plVar11 = &local_128;
          }
          else {
            plVar11 = &local_128;
          }
          goto LAB_145789faa;
        }
      }
      FUN_14578a3ac(local_d0);
    } while (local_ac != '\x01');
  }
  lVar20 = 0;
LAB_145789fcc:
  if (local_78 == '\x01') {
    FUN_14024445c(local_c8);
  }
  if (lVar20 == 0) {
    iVar10 = (int)uStack_110;
    if ((int)uStack_110 < 1) {
      iVar10 = (int)uStack_120;
      if ((int)uStack_120 < 1) {
        lVar20 = 0;
      }
      else {
        iVar19 = (int)uStack_120 + -1;
        uVar16 = rand();
        iVar10 = (int)((float)iVar10 * ((float)(uVar16 & 0x7fff) / 32767.0));
        if (iVar10 < iVar19) {
          iVar19 = iVar10;
        }
        lVar20 = *(longlong *)(local_128 + (longlong)iVar19 * 8);
      }
    }
    else {
      iVar19 = (int)uStack_110 + -1;
      uVar16 = rand();
      iVar10 = (int)((float)iVar10 * ((float)(uVar16 & 0x7fff) / 32767.0));
      if (iVar10 < iVar19) {
        iVar19 = iVar10;
      }
      lVar20 = *(longlong *)(local_118 + (longlong)iVar19 * 8);
    }
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar20;
}



// FUNCTION 14578a242 FUN_14578a242 body=228 status=ok
// SIG undefined FUN_14578a242(void)

longlong FUN_14578a242(void)

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
  if (DAT_14cafa5c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14598378c;
    local_38 = &LAB_147ca8d5b;
    local_40 = FUN_1463fa6ed;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3c0;
    FUN_14081cfa3(L"/Script/Engine",L"PlayerStartPIE",&DAT_14cafa5c0,&DAT_147ca8d5a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cafa5c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578a328 FUN_14578a328 body=131 status=ok
// SIG undefined FUN_14578a328(void)

undefined4 *
FUN_14578a328(undefined4 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *param_1 = param_4;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_28 = param_2;
  FUN_140244552(param_1 + 2,&local_28,&local_30);
  FUN_14578a3ac(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578a3ac FUN_14578a3ac body=481 status=ok
// SIG undefined FUN_14578a3ac(void)

void FUN_14578a3ac(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  uint *puVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar13 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar12 = (longlong)(int)param_1[8] + 1;
    do {
      lVar6 = lVar12;
      puVar9 = param_1 + 4;
      if (lVar13 <= lVar12) {
        lVar6 = lVar12 - lVar13;
        puVar9 = param_1 + 0xe;
      }
      lVar6 = *(longlong *)(*(longlong *)puVar9 + lVar6 * 8);
      param_1[10] = param_1[10] + 1;
      if (((lVar6 != 0) && (lVar7 = FUN_144a79cc8(lVar6), lVar7 != 0)) &&
         ((uVar5 = *param_1, (uVar5 & 1) == 0 || ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)))) {
        if ((uVar5 & 2) != 0) {
          cVar4 = FUN_144affb44(lVar6);
          if (cVar4 == '\0') goto LAB_14578a569;
          uVar5 = *param_1;
        }
        if ((uVar5 & 4) == 0) {
          lVar10 = *(longlong *)(lVar7 + 0xc0);
        }
        else {
          if (((*(byte *)(lVar7 + 0x240) & 0x20) == 0) ||
             (bVar8 = 1, (*(byte *)(lVar7 + 0x242) & 8) != 0)) {
            bVar8 = 1;
            if ((*(byte *)(lVar7 + 0x241) & 0x20) == 0) {
              bVar8 = (*(byte *)(lVar7 + 0x241) & 0x40) >> 6;
            }
          }
          lVar10 = *(longlong *)(lVar7 + 0xc0);
          if (lVar10 == 0) {
LAB_14578a4f0:
            pcVar11 = (char *)0x0;
          }
          else {
            iVar1 = *(int *)(lVar10 + 0x1b0);
            if (((longlong)iVar1 < 0) || (*(int *)(lVar10 + 0x1a8) <= iVar1)) goto LAB_14578a4f0;
            pcVar11 = (char *)((longlong)iVar1 * 0x78 + *(longlong *)(lVar10 + 0x1a0));
          }
          pcVar3 = *(char **)(lVar7 + 0x2e8);
          if (pcVar3 == (char *)0x0) {
            bVar14 = true;
          }
          else {
            bVar14 = *pcVar3 == '\x02';
          }
          if ((bVar8 & ((pcVar11 == (char *)0x0 || pcVar3 == pcVar11) | bVar14)) != 1)
          goto LAB_14578a569;
        }
        if (lVar10 == lVar2) {
          if (*(longlong *)(lVar2 + 0x30) == lVar7) {
LAB_14578a4d7:
            *(longlong *)(param_1 + 0xc) = lVar6;
            param_1[8] = (uint)lVar12;
            return;
          }
          lVar7 = FUN_14059e8cc();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_14578a4d7;
        }
      }
LAB_14578a569:
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[0x10] + lVar13);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 14578a58e FUN_14578a58e body=132 status=ok
// SIG undefined FUN_14578a58e(void)

void FUN_14578a58e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14578a612 FUN_14578a612 body=163 status=ok
// SIG undefined FUN_14578a612(void)

void FUN_14578a612(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14477b072(param_1,DAT_14cadade0);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_30 = 0;
    local_38 = param_2;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014578a67a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x690))(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578a6c4 FUN_14578a6c4 body=72 status=ok
// SIG undefined FUN_14578a6c4(void)

undefined8 FUN_14578a6c4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3c8);
  if ((((lVar1 != 0) && (lVar2 = FUN_144a7cbb2(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return *(undefined8 *)(param_1 + 0x3c8);
  }
  return 0;
}



// FUNCTION 14578a70c thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14578a712 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14578a71e FUN_14578a71e body=360 status=ok
// SIG undefined FUN_14578a71e(void)

void FUN_14578a71e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + 0x18 + (longlong)iStack_54 * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14578a888 FUN_14578a888 body=24 status=ok
// SIG undefined FUN_14578a888(void)

void FUN_14578a888(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014578a89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14578a8a0 FUN_14578a8a0 body=38 status=ok
// SIG undefined FUN_14578a8a0(void)

undefined8 FUN_14578a8a0(undefined8 param_1,int param_2)

{
  FUN_14578a8c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14578a8c6 FUN_14578a8c6 body=98 status=ok
// SIG undefined FUN_14578a8c6(void)

void FUN_14578a8c6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9b0a38;
  param_1[0xb] = &PTR_FUN_14b9b0a48;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b9a70e8;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140c69d40(param_1 + 1);
  return;
}



// FUNCTION 14578a928 FUN_14578a928 body=418 status=ok
// SIG undefined FUN_14578a928(void)

uint FUN_14578a928(longlong param_1,void *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_1a8 [44];
  undefined1 local_17c [156];
  undefined1 local_e0 [160];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar1 = (longlong *)(param_1 + 0x10);
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar3 = (ulonglong)(int)uVar4;
  if (1 < (longlong)uVar3) {
    uVar5 = 1;
    lVar2 = 0x148;
    do {
      if (*(longlong *)(*plVar1 + lVar2) == 0) {
        *(undefined8 *)(*plVar1 + lVar2) = param_3;
        memcpy(local_17c,param_2,0x9c);
        uVar4 = (uint)uVar5;
        goto LAB_14578a9d6;
      }
      uVar5 = uVar5 + 1;
      lVar2 = lVar2 + 0xa8;
    } while (uVar4 != uVar5);
  }
  memcpy(local_e0,param_2,0x9c);
  *(uint *)(param_1 + 0x18) = uVar4 + 1;
  if (*(uint *)(param_1 + 0x1c) < uVar4 + 1) {
    FUN_145ec7c72(plVar1,uVar4);
  }
  lVar2 = *plVar1;
  memcpy((void *)(lVar2 + uVar3 * 0xa8),local_e0,0xa0);
  *(undefined8 *)(lVar2 + 0xa0 + uVar3 * 0xa8) = param_3;
  memcpy(local_17c,param_2,0x9c);
  uVar5 = uVar3;
  if (uVar4 == 0xffffffff) {
    uVar4 = 0xffffffff;
  }
  else {
LAB_14578a9d6:
    memcpy((void *)(uVar5 * 0xa8 + *plVar1),local_17c,0x9c);
    plVar1 = DAT_14cb01860;
    if (DAT_14cb01860 != (longlong *)0x0) {
      DAT_14cb01860 = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar1 = DAT_14cb01868;
    if (DAT_14cb01868 != (longlong *)0x0) {
      DAT_14cb01868 = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14578aacc FUN_14578aacc body=75 status=ok
// SIG undefined FUN_14578aacc(void)

void FUN_14578aacc(longlong param_1,char param_2,int param_3)

{
  uint uVar1;
  
  if (0xfe < param_3) {
    param_3 = 0xff;
  }
  uVar1 = param_3 << (param_2 << 3 & 0x1fU) |
          ~(0xff << (param_2 << 3 & 0x1fU)) & *(uint *)(param_1 + 0xb60);
  if (*(uint *)(param_1 + 0xb60) != uVar1) {
    *(uint *)(param_1 + 0xb60) = uVar1;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0xc);
    return;
  }
  return;
}



// FUNCTION 14578ab18 FUN_14578ab18 body=445 status=ok
// SIG undefined FUN_14578ab18(void)

void FUN_14578ab18(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14578acd6 FUN_14578acd6 body=227 status=ok
// SIG undefined FUN_14578acd6(void)

bool FUN_14578acd6(int param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  bool bVar5;
  
  bVar5 = true;
  if (param_1 < 2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caefca8) {
      FUN_144b3d300(&DAT_14caefca8);
      if (DAT_14caefca8 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar4 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.Mobile.AllowDitheredLODTransition",1);
        if (plVar4 == (longlong *)0x0) {
          DAT_14caefca0 = 0;
        }
        else {
          DAT_14caefca0 = (**(code **)(*plVar4 + 0x68))(plVar4);
        }
        _Init_thread_footer(&DAT_14caefca8);
      }
    }
    lVar1 = DAT_14caefca0;
    if (DAT_14caefca0 == 0) {
      bVar5 = false;
    }
    else {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar3 = 0;
      }
      else {
        bVar2 = FUN_144a61b4f();
        uVar3 = (ulonglong)(bVar2 ^ 1);
      }
      bVar5 = *(int *)(lVar1 + uVar3 * 4) != 0;
    }
  }
  return bVar5;
}



// FUNCTION 14578adba FUN_14578adba body=38 status=ok
// SIG undefined FUN_14578adba(void)

undefined8 FUN_14578adba(undefined8 param_1,int param_2)

{
  FUN_14578ade0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14578ade0 FUN_14578ade0 body=121 status=ok
// SIG undefined FUN_14578ade0(void)

void FUN_14578ade0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4108d0;
  plVar3 = (longlong *)param_1[0xb];
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
  *param_1 = &PTR_FUN_14b411430;
  plVar3 = (longlong *)param_1[8];
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
                    /* WARNING: Could not recover jumptable at 0x00014578ae55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14578ae5a FUN_14578ae5a body=44 status=ok
// SIG undefined FUN_14578ae5a(void)

undefined8 FUN_14578ae5a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xb0))();
  FUN_140002266(param_2,&DAT_149e063bc,uVar1);
  return param_2;
}



// FUNCTION 14578aec0 FUN_14578aec0 body=109 status=ok
// SIG undefined FUN_14578aec0(void)

void FUN_14578aec0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x2c,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x2c)) {
      uVar2 = uVar1 / 0x2c & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x2c,4);
  }
  return;
}


