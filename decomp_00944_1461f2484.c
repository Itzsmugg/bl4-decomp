// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1461f2484 FUN_1461f2484 body=693 status=ok
// SIG undefined FUN_1461f2484(void)

int * FUN_1461f2484(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined1 **local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  int local_134;
  longlong *local_130;
  longlong *local_128;
  undefined1 *local_120;
  longlong *local_118;
  longlong local_110;
  undefined1 local_108 [8];
  byte local_100;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((((*(short *)(param_1 + 2) == -1) || (*(short *)(param_1 + 4) == -1)) ||
      (*(short *)(param_1 + 6) == -1)) || (cVar4 = FUN_1461f2866(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_1461f268d;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a4d8300;
  FUN_1461f273a(plVar5 + 2,param_1,param_7,param_8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  local_50 = 0x10000000000;
  local_78 = 0x10000000000;
  FUN_140dba9e6(local_70,*(undefined2 *)(param_1 + 2));
  FUN_140dba9e6(local_70,*(undefined2 *)(param_1 + 4));
  FUN_140dba9e6(local_70,*(undefined2 *)(param_1 + 6));
  local_d8 = 0x10000000000;
  local_b0 = 0x10000000000;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1461f27be(param_1,local_f8);
  local_118 = &local_110;
  local_120 = &LAB_1461df566;
  local_100 = *(byte *)(param_6 + 8);
  local_110 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_100])(local_108);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_148 = local_98;
  local_160 = &local_120;
  local_168 = local_108;
  local_158 = local_f8;
  local_150 = local_70;
  local_130 = plVar5 + 2;
  local_128 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_130);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_134);
      *param_2 = local_134;
      iVar3 = local_134;
      if (local_134 != -1) goto LAB_1461f264f;
    }
  }
  else {
LAB_1461f264f:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
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
LAB_1461f268d:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1461f273a FUN_1461f273a body=131 status=ok
// SIG undefined FUN_1461f273a(void)

undefined8 *
FUN_1461f273a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_14a4d8318;
  uVar3 = *param_3;
  uVar4 = *param_4;
  plVar5 = (longlong *)param_4[1];
  if (plVar5 == (longlong *)0x0) {
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = plVar5;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 2);
  uVar3 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar3;
  return param_1;
}



// FUNCTION 1461f27be FUN_1461f27be body=167 status=ok
// SIG undefined FUN_1461f27be(void)

void FUN_1461f27be(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *(undefined2 *)(param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 4);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 6);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f2866 FUN_1461f2866 body=171 status=ok
// SIG undefined FUN_1461f2866(void)

undefined8 FUN_1461f2866(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *(ushort *)(param_1 + 2);
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = *(ushort *)(param_1 + 4);
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = *(ushort *)(param_1 + 6);
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5);
}



// FUNCTION 1461f2912 FUN_1461f2912 body=63 status=ok
// SIG undefined FUN_1461f2912(void)

void FUN_1461f2912(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1461f2952(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 1461f2952 FUN_1461f2952 body=113 status=ok
// SIG undefined FUN_1461f2952(void)

ulonglong FUN_1461f2952(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x50) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      uVar1 = uVar1 / 0x50;
    }
  }
  return uVar1;
}



// FUNCTION 1461f29ce FUN_1461f29ce body=870 status=ok
// SIG undefined FUN_1461f29ce(void)

undefined8 * FUN_1461f29ce(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  uVar4 = DAT_14cb717f0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140486538(param_2,DAT_14cb717f0);
  FUN_14048646a(param_2 + 0x20,uVar4,0,0);
  FUN_14064ffa8(param_1,param_2);
  *param_1 = &PTR_FUN_14b7c3bf0;
  param_1[0x72] = &PTR_FUN_14b7c4260;
  param_1[0x73] = &PTR_FUN_14b7c4280;
  param_1[0x74] = &PTR_FUN_14b7c42b0;
  param_1[0x75] = &PTR_FUN_14b7c42c0;
  param_1[0x76] = &PTR_FUN_14b7c4330;
  param_1[0x77] = &PTR_FUN_14b7c4360;
  param_1[0x78] = &PTR_FUN_14b7c4390;
  param_1[0x7f] = &PTR_FUN_14b7c4440;
  param_1[0x80] = &PTR_FUN_14b7c44b0;
  param_1[0x81] = &PTR_FUN_14b7c4520;
  param_1[0x82] = &PTR_FUN_14b7c4550;
  param_1[0x83] = &PTR_FUN_14b7c4590;
  param_1[0x84] = &PTR_FUN_14b7c4630;
  param_1[0x85] = &PTR_FUN_14b7c4650;
  param_1[0x89] = &PTR_FUN_14b7c4670;
  param_1[0x8a] = &PTR_FUN_14b7c4730;
  param_1[0x8b] = &PTR_FUN_14b7c47b0;
  param_1[0x8c] = &PTR_FUN_14b7c4800;
  param_1[0x8d] = &PTR_FUN_14b7c4840;
  param_1[0x8e] = &PTR_FUN_14b7c4860;
  param_1[0x8f] = &PTR_FUN_14b7c4880;
  param_1[0x90] = &PTR_FUN_14b7c48a0;
  param_1[0x91] = &PTR_FUN_14b7c48c0;
  param_1[0x92] = &PTR_FUN_14b7c48e0;
  param_1[0x93] = &PTR_FUN_14b7c4900;
  param_1[0x94] = &PTR_FUN_14b7c4920;
  param_1[0x95] = &PTR_FUN_14b7c4940;
  param_1[0x96] = &PTR_FUN_14b7c4960;
  param_1[0x34b] = &PTR_FUN_14b7c4980;
  param_1[0x352] = &PTR_FUN_14b7c4990;
  param_1[0x353] = &PTR_FUN_14b7c49d0;
  param_1[0x354] = &PTR_FUN_14b7c4a10;
  param_1[0x355] = &PTR_FUN_14b7c4a60;
  param_1[0x356] = &PTR_FUN_14b7c4a90;
  param_1[0x359] = &PTR_FUN_14b7c4ad0;
  param_1[0x35a] = &PTR_FUN_14b7c4ae0;
  param_1[0x35b] = &PTR_FUN_14b7c4b10;
  param_1[0x35c] = &PTR_FUN_14b7c4bb0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  FUN_1405ba932(param_1,1);
  FUN_1446ddc76(&local_30,"RootStaticMesh",1);
  uVar4 = FUN_140c7aaec();
  local_40 = 0;
  local_48 = 0;
  lVar5 = FUN_14048696c(param_1,local_30,uVar4,uVar4);
  if ((lVar5 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x39] = lVar5;
    if (lVar5 == 0) goto LAB_1461f2cfd;
  }
  else {
    FUN_1456cec3c(lVar5);
    param_1[0x39] = lVar5;
  }
  lVar5 = FUN_144a3a302();
  plVar2 = (longlong *)param_1[0x39];
  if (((plVar2 != (longlong *)0x0) && (lVar5 != 0)) && (lVar3 = plVar2[2], lVar3 != 0)) {
    iVar1 = *(int *)(lVar5 + 0x38);
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == lVar5 + 0x30)) {
      (**(code **)(*plVar2 + 0x690))(plVar2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
      (**(code **)(*plVar2 + 0x588))(plVar2,2);
    }
  }
LAB_1461f2cfd:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f2d36 FUN_1461f2d36 body=149 status=ok
// SIG undefined FUN_1461f2d36(void)

void FUN_1461f2d36(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_1416455a0(param_1,"app_language",&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f2dd8 FUN_1461f2dd8 body=1157 status=ok
// SIG undefined FUN_1461f2dd8(void)

ulonglong FUN_1461f2dd8(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  ulonglong uVar8;
  ulonglong unaff_RBP;
  undefined7 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_1461f2e7a;
  }
  uVar9 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x48);
      local_78 = puVar2[2];
      local_88 = *puVar2;
      uStack_80 = puVar2[1];
      local_70 = *(undefined4 *)(puVar2 + 3);
      uStack_6c = *(undefined4 *)((longlong)puVar2 + 0x1c);
      uStack_68 = *(undefined4 *)(puVar2 + 4);
      uStack_64 = *(undefined4 *)((longlong)puVar2 + 0x24);
      local_60 = puVar2[5];
      local_58 = puVar2[6];
      local_50 = puVar2[7];
      if ((DAT_14c950c29 == '\x01') && (local_50 != 0)) {
        FUN_1456cec3c();
      }
      bVar13 = *(byte *)(puVar2 + 8);
      local_48 = bVar13;
      FUN_1461aa200(param_1 + 0x18);
      FUN_1461aa190(param_1 + 0x68,param_2);
      uVar6 = *(uint *)(param_1 + 0xa8);
      lVar3 = *(longlong *)(param_1 + 0xa0);
      uVar12 = 0;
      uVar11 = uVar6;
      if (0 < (int)uVar6) {
        do {
          uVar1 = (uVar11 >> 1) + uVar12;
          if (*(int *)(lVar3 + (ulonglong)uVar1 * 0x30) < param_2) {
            uVar12 = uVar1 + (uVar11 & 1);
          }
          bVar4 = 1 < uVar11;
          uVar11 = uVar11 >> 1;
        } while (bVar4);
      }
      if (((int)uVar12 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar12 * 0x30) <= param_2)) {
        if (~uVar12 + uVar6 != 0) {
          pvVar7 = (void *)(lVar3 + (ulonglong)uVar12 * 0x30);
          memmove(pvVar7,(void *)((longlong)pvVar7 + 0x30),(longlong)(int)(~uVar12 + uVar6) * 0x30);
          uVar6 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar6 - 1;
        FUN_1476b011c(param_1 + 0xa0);
      }
joined_r0x0001461f31ce:
      if ((bVar13 & 1) != 0) {
        FUN_1461f325e(&local_70);
      }
      unaff_RBP = 0;
      goto LAB_1461f2e7a;
    }
    unaff_RBP = CONCAT71(uVar9,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x40 + (longlong)param_2 * 0x48) & 1) == 0)
    goto LAB_1461f2e7a;
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x48);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0xa8);
    lVar3 = *(longlong *)(param_1 + 0xa0);
    uVar8 = 0;
    if (0 < (int)uVar6) {
      uVar8 = 0;
      uVar10 = (ulonglong)uVar6;
      uVar11 = uVar6;
      do {
        uVar10 = uVar10 >> 1;
        uVar12 = (uint)uVar10 + (int)uVar8;
        if (*(int *)(lVar3 + (ulonglong)uVar12 * 0x30) < param_2) {
          uVar8 = (ulonglong)(uVar12 + (uVar11 & 1));
        }
        bVar4 = 1 < uVar11;
        uVar11 = (uint)uVar10;
      } while (bVar4);
    }
    if ((((int)uVar8 < (int)uVar6) && (*(int *)(lVar3 + uVar8 * 0x30) <= param_2)) &&
       (lVar3 + uVar8 * 0x30 != -8)) {
      FUN_1461f325e();
      uVar6 = *(uint *)(param_1 + 0xa8);
      lVar3 = *(longlong *)(param_1 + 0xa0);
      uVar12 = 0;
      uVar11 = uVar6;
      if (0 < (int)uVar6) {
        do {
          uVar1 = (uVar11 >> 1) + uVar12;
          if (*(int *)(lVar3 + (ulonglong)uVar1 * 0x30) < param_2) {
            uVar12 = uVar1 + (uVar11 & 1);
          }
          bVar4 = 1 < uVar11;
          uVar11 = uVar11 >> 1;
        } while (bVar4);
      }
      unaff_RBP = CONCAT71(uVar9,1);
      if (((int)uVar12 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar12 * 0x30) <= param_2)) {
        if (~uVar12 + uVar6 != 0) {
          pvVar7 = (void *)(lVar3 + (ulonglong)uVar12 * 0x30);
          memmove(pvVar7,(void *)((longlong)pvVar7 + 0x30),(longlong)(int)(~uVar12 + uVar6) * 0x30);
          uVar6 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar6 - 1;
        FUN_1476b011c(param_1 + 0xa0);
      }
      goto LAB_1461f2e7a;
    }
    unaff_RBP = CONCAT71(uVar9,1);
    if (param_4 == '\0') {
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x48);
      bVar13 = *(byte *)(puVar2 + 8);
      if ((bVar13 & 2) == 0) {
        local_78 = puVar2[2];
        local_88 = *puVar2;
        uStack_80 = puVar2[1];
        local_70 = *(undefined4 *)(puVar2 + 3);
        uStack_6c = *(undefined4 *)((longlong)puVar2 + 0x1c);
        uStack_68 = *(undefined4 *)(puVar2 + 4);
        uStack_64 = *(undefined4 *)((longlong)puVar2 + 0x24);
        local_60 = puVar2[5];
        local_58 = puVar2[6];
        local_50 = puVar2[7];
        if ((DAT_14c950c29 == '\x01') && (local_50 != 0)) {
          FUN_1456cec3c();
          bVar13 = *(byte *)(puVar2 + 8);
        }
        local_48 = bVar13;
        FUN_1461aa200(param_1 + 0x18);
        FUN_1461aa190(param_1 + 0x68,param_2);
        uVar6 = *(uint *)(param_1 + 0xa8);
        lVar3 = *(longlong *)(param_1 + 0xa0);
        uVar12 = 0;
        uVar11 = uVar6;
        if (0 < (int)uVar6) {
          do {
            uVar1 = (uVar11 >> 1) + uVar12;
            if (*(int *)(lVar3 + (ulonglong)uVar1 * 0x30) < param_2) {
              uVar12 = uVar1 + (uVar11 & 1);
            }
            bVar4 = 1 < uVar11;
            uVar11 = uVar11 >> 1;
          } while (bVar4);
        }
        if (((int)uVar12 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar12 * 0x30) <= param_2)) {
          if (~uVar12 + uVar6 != 0) {
            pvVar7 = (void *)(lVar3 + (ulonglong)uVar12 * 0x30);
            memmove(pvVar7,(void *)((longlong)pvVar7 + 0x30),(longlong)(int)(~uVar12 + uVar6) * 0x30
                   );
            uVar6 = *(uint *)(param_1 + 0xa8);
          }
          *(uint *)(param_1 + 0xa8) = uVar6 - 1;
          FUN_1476b011c(param_1 + 0xa0);
        }
        goto joined_r0x0001461f31ce;
      }
      if ((bVar13 & 1) == 0) goto LAB_1461f2e7a;
    }
    else {
      if (param_4 != '\x01') goto LAB_1461f2e7a;
      bVar13 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x40 + (longlong)param_2 * 0x48);
      if ((bVar13 & 1) == 0) goto LAB_1461f2e7a;
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x48);
      *(byte *)(puVar2 + 8) = bVar13 | 2;
    }
  }
  FUN_1461f325e(puVar2 + 3);
LAB_1461f2e7a:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f325e FUN_1461f325e body=159 status=ok
// SIG undefined FUN_1461f325e(void)

void FUN_1461f325e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = FUN_14479d2ce();
  if (lVar1 != 0) {
    lVar2 = FUN_14479d2ce(param_1 + 0x10);
    if ((longlong)*(int *)(lVar1 + 0x428) != 0) {
      plVar4 = *(longlong **)(lVar1 + 0x420);
      lVar5 = (longlong)*(int *)(lVar1 + 0x428) * 0x30;
      do {
        if ((*plVar4 == *(longlong *)(param_1 + 8)) && (plVar4[1] == lVar2)) {
          if (plVar4 != (longlong *)0x0) {
            FUN_1461f3306();
          }
          break;
        }
        plVar4 = plVar4 + 6;
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
    }
    uVar3 = FUN_1459b9e2c();
    lVar1 = FUN_144718840(lVar1,uVar3);
    if (lVar1 != 0) {
      uVar3 = FUN_1461f32fe(lVar1);
      FUN_1461f3312(uVar3,param_1 + 0x18,0);
      return;
    }
  }
  return;
}



// FUNCTION 1461f32fe FUN_1461f32fe body=7 status=ok
// SIG undefined FUN_1461f32fe(void)

void FUN_1461f32fe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001461f3301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



// FUNCTION 1461f3306 FUN_1461f3306 body=12 status=ok
// SIG undefined FUN_1461f3306(void)

void FUN_1461f3306(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1461f3312 FUN_1461f3312 body=83 status=ok
// SIG undefined FUN_1461f3312(void)

void FUN_1461f3312(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = 0;
  lVar1 = FUN_141066b56();
  *(undefined8 *)(lVar1 + 8 + (ulonglong)(param_3 & 0xff) * 8) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f337a FUN_1461f337a body=340 status=ok
// SIG undefined FUN_1461f337a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461f337a(void)

{
  longlong lVar1;
  undefined1 auStack_1f8 [15];
  undefined8 auStack_1e9 [2];
  undefined1 auStack_1d9 [201];
  undefined8 local_110;
  undefined7 uStack_108;
  undefined4 uStack_101;
  byte local_fd;
  uint local_fc;
  uint local_f8;
  undefined1 local_f0 [192];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  DAT_14ca850e8 = 0;
  DAT_14ca850f0 = 0x400000000;
  _DAT_14ca850f8 = 0;
  auStack_1d9._1_4_ = 0;
  lVar1 = 0x19;
  do {
    *(undefined8 *)((longlong)auStack_1e9 + lVar1) = 0;
    *(undefined8 *)((longlong)auStack_1e9 + lVar1 + 8) = 0xffffffff00000000;
    *(undefined2 *)(auStack_1d9 + lVar1) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0xd9);
  local_fc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_110 = 0;
  uStack_108 = 0;
  uStack_101 = 0;
  local_fd = local_fd & 0xc0 | 0x20;
  local_f8 = local_fc;
  memset(local_f0,0,0xc0);
  FUN_141645ea2(&DAT_14ca85100);
  DAT_14ca8541c = 0;
  DAT_14ca85434 = 0;
  DAT_14ca85478 = 0;
  _DAT_14ca85480 = 0x400000000;
  _DAT_14ca85408 = 0;
  DAT_14ca85410 = 0;
  _DAT_14ca85420 = 0;
  DAT_14ca85428 = 0;
  _DAT_14ca85438 = 0;
  DAT_14ca85440 = 0;
  DAT_14ca85448 = 0;
  DAT_14ca85450 = 0;
  if ((local_30 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    memset(&DAT_14ca85488,0,0xc4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_1f8);
}



// FUNCTION 1461f34e8 FUN_1461f34e8 body=210 status=ok
// SIG undefined FUN_1461f34e8(void)

void FUN_1461f34e8(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  
  piVar1 = *(int **)(param_1 + 0xf8);
  lVar5 = (longlong)*(int *)(param_1 + 0x100);
  if (lVar5 != 0) {
    lVar4 = lVar5 * 0x60;
    piVar3 = piVar1;
    do {
      if (*piVar3 == param_2) {
        if (piVar3 != (int *)0x0) {
          piVar3[1] = param_3;
          return;
        }
        break;
      }
      piVar3 = piVar3 + 0x18;
      lVar4 = lVar4 + -0x60;
    } while (lVar4 != 0);
  }
  uVar2 = *(int *)(param_1 + 0x100) + 1;
  *(uint *)(param_1 + 0x100) = uVar2;
  if (*(uint *)(param_1 + 0x104) < uVar2) {
    FUN_1461f35ba((undefined8 *)(param_1 + 0xf8));
    piVar1 = *(int **)(param_1 + 0xf8);
  }
  piVar1[lVar5 * 0x18] = param_2;
  piVar1[lVar5 * 0x18 + 1] = param_3;
  (piVar1 + lVar5 * 0x18 + 10)[0] = 0;
  (piVar1 + lVar5 * 0x18 + 10)[1] = 0;
  piVar1[lVar5 * 0x18 + 0xc] = 0;
  piVar3 = piVar1 + lVar5 * 0x18 + 2;
  piVar3[0] = 0;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  (piVar1 + lVar5 * 0x18 + 0xd)[0] = 0x80;
  (piVar1 + lVar5 * 0x18 + 0xd)[1] = -1;
  piVar1[lVar5 * 0x18 + 0xf] = 0;
  (piVar1 + lVar5 * 0x18 + 0x12)[0] = 0;
  (piVar1 + lVar5 * 0x18 + 0x12)[1] = 0;
  piVar1[lVar5 * 0x18 + 0x14] = 0;
  (piVar1 + lVar5 * 0x18 + 0x16)[0] = -1;
  (piVar1 + lVar5 * 0x18 + 0x16)[1] = 1;
  return;
}



// FUNCTION 1461f35ba FUN_1461f35ba body=147 status=ok
// SIG undefined FUN_1461f35ba(void)

void FUN_1461f35ba(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1461f364e FUN_1461f364e body=287 status=ok
// SIG undefined FUN_1461f364e(void)

undefined4 * FUN_1461f364e(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1461f37d8(param_1,local_48);
  FUN_140d600ee(local_40,param_3);
  *(undefined4 *)(local_40 + 0x70) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_1414b3267(local_40);
  cVar2 = FUN_1461f376e(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)(local_40 + 0x74) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x70) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1461f38bc(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f376e FUN_1461f376e body=105 status=ok
// SIG undefined FUN_1461f376e(void)

undefined8 FUN_1461f376e(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_14659020e(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x78 + *param_1);
    FUN_140d5fbf2(_Dst);
    memmove(_Dst,param_3,0x70);
    FUN_14613a2f6(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1461f37d8 FUN_1461f37d8 body=227 status=ok
// SIG undefined FUN_1461f37d8(void)

int * FUN_1461f37d8(longlong *param_1,int *param_2)

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
      FUN_1410fd1ac(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x78);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x78) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x78 + *param_1;
  return param_2;
}



// FUNCTION 1461f38bc FUN_1461f38bc body=450 status=ok
// SIG undefined FUN_1461f38bc(void)

void FUN_1461f38bc(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x78;
        iVar6 = FUN_1414b3267(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x74 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x70 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461f3a80 FUN_1461f3a80 body=358 status=ok
// SIG undefined FUN_1461f3a80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461f3a80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  double dVar8;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1461f3e02();
  if (((*(longlong *)(param_1 + 0x3e0) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 1000), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      lVar6 = _DAT_00000018;
      if (iVar5 == 0) goto LAB_1461f3af3;
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
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x3e0) + 0x18);
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
LAB_1461f3af3:
    if ((lVar6 != 0) &&
       (0.0001 < *(float *)(param_1 + 0x3a0) || *(float *)(param_1 + 0x3a0) == 0.0001)) {
      FUN_145ac22e8(lVar6,&local_58);
      dVar8 = (double)*(float *)(lVar6 + 0x140);
      local_70 = 1.0 / (double)*(float *)(param_1 + 0x3a0);
      local_60 = (local_30 - local_48) * dVar8 * local_70;
      local_68 = (local_38 - local_50) * dVar8 * local_70;
      local_70 = local_70 * (local_40 - local_58) * dVar8;
      FUN_1412269c6(param_1);
      FUN_1461f3be8(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461f3be8 FUN_1461f3be8 body=471 status=ok
// SIG undefined FUN_1461f3be8(void)

void FUN_1461f3be8(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  FUN_1461f3e02();
  plVar2 = *(longlong **)(param_1 + 1000);
  if (plVar2 != (longlong *)0x0) {
    iVar4 = (int)plVar2[1];
    do {
      if (iVar4 == 0) {
        return;
      }
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar9);
    if (((((*(longlong *)(param_1 + 0x3e0) != 0) &&
          (*(longlong *)(*(longlong *)(param_1 + 0x3e0) + 0x60) != 0)) &&
         (plVar5 = (longlong *)FUN_1461f3dc0(), plVar5 != (longlong *)0x0)) &&
        ((piVar6 = (int *)(**(code **)(*plVar5 + 0x2c8))(plVar5), piVar6 != (int *)0x0 &&
         (0 < *piVar6)))) && (0 < piVar6[1])) {
      lVar7 = FUN_1407635e4(DAT_14c951640);
      lVar8 = *(longlong *)(param_1 + 0x3f8);
      if (lVar7 == 0) {
        if (lVar8 != 0) {
          if (DAT_14c872a72 == '\0') {
            FUN_140113f48();
          }
          *(undefined8 *)(param_1 + 0x3f8) = 0;
        }
      }
      else {
        if (lVar8 != lVar7) {
          if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
            FUN_140113f48();
          }
          FUN_1401924dc(lVar7);
          *(longlong *)(param_1 + 0x3f8) = lVar7;
          lVar8 = lVar7;
        }
        *(undefined1 *)(lVar8 + 0x15b) = 0;
        lVar8 = *(longlong *)(param_1 + 0x3f8);
        *(undefined4 *)(lVar8 + 0x148) = 0;
        *(undefined4 *)(lVar8 + 0x14c) = 0;
        *(undefined4 *)(lVar8 + 0x150) = 0;
        *(undefined4 *)(lVar8 + 0x154) = 0x3f800000;
        *(undefined1 *)(*(longlong *)(param_1 + 0x3f8) + 0xf1) = *(undefined1 *)(param_1 + 0x3d8);
        pbVar1 = (byte *)(*(longlong *)(param_1 + 0x3f8) + 0x15c);
        *pbVar1 = *pbVar1 & 0xfd;
        FUN_141646166(*(undefined8 *)(param_1 + 0x3f8),*piVar6,piVar6[1]);
        FUN_140768b6e(*(undefined8 *)(param_1 + 0x3f8),1);
        if ((*(longlong *)(param_1 + 0x3f0) != 0) && (*(longlong *)(param_1 + 0x398) != 0)) {
          FUN_14016d8b0(*(longlong *)(param_1 + 0x3f0),*(undefined8 *)(param_1 + 0x3d0),
                        *(undefined8 *)(param_1 + 0x3f8));
          FUN_1448215fa(*(undefined8 *)(param_1 + 0x398));
        }
        FUN_14164617e(param_1);
      }
    }
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar6 = (int *)((longlong)plVar2 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461f3dbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1461f3dc0 FUN_1461f3dc0 body=65 status=ok
// SIG undefined FUN_1461f3dc0(void)

undefined8 FUN_1461f3dc0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x168) == '\x01') {
    cVar1 = FUN_144729dda(param_1 + 0x1c8);
    if (cVar1 != '\0') {
      uVar2 = FUN_14479d2ce(param_1 + 0x1c8);
      return uVar2;
    }
  }
  return *(undefined8 *)(param_1 + 0x1c0);
}



// FUNCTION 1461f3e02 FUN_1461f3e02 body=130 status=ok
// SIG undefined FUN_1461f3e02(void)

void FUN_1461f3e02(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x3f8) != 0) {
    FUN_14080c2b4();
    FUN_141646166(*(undefined8 *)(param_1 + 0x3f8),1,1);
    if (*(longlong *)(param_1 + 0x3f8) != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      *(undefined8 *)(param_1 + 0x3f8) = 0;
    }
    if (*(char *)(param_1 + 0x418) == '\x01') {
      if (*(longlong *)(param_1 + 0x408) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x418) = 0;
    }
  }
  return;
}



// FUNCTION 1461f3e84 FUN_1461f3e84 body=613 status=ok
// SIG undefined FUN_1461f3e84(void)

int * FUN_1461f3e84(undefined4 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  code **local_100;
  undefined4 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  code *local_c0;
  undefined4 **local_b8;
  undefined4 *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar3 = *(ushort *)((longlong)param_1 + 6);
  if (uVar3 != 0xffff) {
    lVar8 = FUN_14482820e(param_3);
    if ((*(uint *)(lVar8 + 0x20) != (uint)uVar3 && (int)(uint)uVar3 <= (int)*(uint *)(lVar8 + 0x20))
       && ((*(uint *)(lVar8 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0)) {
      plVar9 = (longlong *)FUN_14001cc68(0x30,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14b424080;
      plVar9[2] = (longlong)&PTR_FUN_14b424098;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      *(undefined4 *)((longlong)plVar9 + 0x1c) = *param_1;
      *(undefined4 *)(plVar9 + 4) = uVar5;
      *(undefined4 *)((longlong)plVar9 + 0x24) = uVar6;
      *(undefined4 *)(plVar9 + 5) = uVar7;
      *(undefined4 *)((longlong)plVar9 + 0x2c) = param_1[4];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
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
      local_50 = 0;
      FUN_1400abb7c(local_70,param_1 + 0x1e);
      local_78 = 0;
      FUN_1400abb7c(local_98,param_1 + 0x28);
      FUN_1461f40ec(param_1,local_70,local_98);
      local_b8 = &local_b0;
      local_c0 = FUN_14895386c;
      local_a0 = *(byte *)(param_6 + 8);
      local_b0 = param_1;
      (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_100 = &local_c0;
      local_108 = local_a8;
      local_f8 = param_1 + 6;
      local_f0 = local_70;
      local_e8 = local_98;
      local_d0 = plVar9 + 2;
      local_c8 = plVar9;
      FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
      iVar4 = *param_2;
      if (*param_2 == -1) {
        if ((*(byte *)(param_5 + 1) & 4) != 0) {
          FUN_145c7137e(param_4,&local_d4);
          *param_2 = local_d4;
          iVar4 = local_d4;
          if (local_d4 != -1) goto LAB_1461f40c5;
        }
      }
      else {
LAB_1461f40c5:
        thunk_FUN_1407ce0e2(param_4,iVar4,0xffffffff);
        thunk_FUN_1407cdf34(param_4,*param_2,0xffffffff);
      }
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
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      goto LAB_1461f404b;
    }
  }
  *param_2 = -1;
LAB_1461f404b:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f40ea FUN_1461f40ea body=1 status=ok
// SIG undefined FUN_1461f40ea(void)

void FUN_1461f40ea(void)

{
  return;
}



// FUNCTION 1461f40ec FUN_1461f40ec body=100 status=ok
// SIG undefined FUN_1461f40ec(void)

void FUN_1461f40ec(short *param_1,undefined8 param_2,undefined8 param_3)

{
  if (*param_1 != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[1] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[2] != -1) {
    FUN_140dba9e6(param_2);
  }
  FUN_140dba9e6(param_2,param_1[3]);
  FUN_140dba9e6(param_3,param_1[3]);
  return;
}



// FUNCTION 1461f4150 FUN_1461f4150 body=1300 status=ok
// SIG undefined FUN_1461f4150(void)

/* WARNING: Removing unreachable block (ram,0x0001461f4445) */

void FUN_1461f4150(undefined **param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined *puVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_118 [32];
  undefined ***local_f8;
  undefined **local_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined1 local_90 [16];
  undefined **local_80;
  longlong *local_78;
  undefined1 local_70 [16];
  undefined **local_60;
  undefined8 local_58;
  longlong *local_50;
  byte local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  ppuVar1 = param_1 + 4;
  cVar6 = FUN_14142923a(ppuVar1);
  if (cVar6 != '\0') {
    *(undefined1 *)(param_1 + 3) = 1;
    goto LAB_1461f430f;
  }
  *(undefined4 *)(param_1 + 9) = 3;
  FUN_140b6de3c();
  local_60 = param_1;
  FUN_1461f4666(local_70,param_1);
  uVar8 = FUN_14479d2ce(ppuVar1);
  FUN_141335bfe(&DAT_14cb97950,uVar8,param_1 + 5,local_70);
  puVar3 = param_1[5];
  plVar9 = (longlong *)FUN_14479d2ce(ppuVar1);
  uVar8 = (**(code **)(*plVar9 + 0x180))(plVar9);
  FUN_140b6e166(&local_80,uVar8,puVar3);
  if (local_80 == (undefined **)0x0) {
    *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -2;
  }
  else {
    FUN_140b6de3c();
    local_e8 = param_1;
    FUN_1461f480c(local_90,param_1);
    local_60 = local_80;
    local_58 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
      plVar9 = local_78;
    }
    uVar8 = FUN_14479d2ce(ppuVar1);
    FUN_141335bfe(&DAT_14cb97950,uVar8,&local_60,local_90);
    if (plVar9 != (longlong *)0x0) {
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
    ppuVar5 = local_80;
    plVar9 = (longlong *)FUN_14479d2ce(ppuVar1);
    uVar8 = (**(code **)(*plVar9 + 0x180))(plVar9);
    FUN_140b6ec10(&local_a0,uVar8,ppuVar5);
    if (local_a0 == 0) {
      plVar9 = (longlong *)FUN_14479d2ce(ppuVar1);
      (**(code **)(*plVar9 + 0x180))(plVar9);
      local_60 = (undefined **)0x0;
      plVar9 = (longlong *)FUN_1401e3228();
      if (plVar9 == (longlong *)0x0) goto LAB_1461f42cb;
      (**(code **)(*plVar9 + 0xb8))(plVar9,&local_b0);
      if (local_b0 == (longlong *)0x0) {
LAB_1461f4565:
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_a8 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar2 = (int *)((longlong)local_a8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_a8 + 0x10))(local_a8);
            }
          }
        }
        goto LAB_1461f42cb;
      }
      local_c8 = 0;
      uStack_c0 = 0;
      (**(code **)(*local_80 + 0x30))(local_80,&local_60);
      uVar4 = uStack_c0;
      lVar10 = (longlong)(int)uStack_c0;
      uVar7 = (int)uStack_c0 + 1;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar7);
      if (uStack_c0._4_4_ < uVar7) {
        FUN_1447a1bd6(&local_c8,uVar4 & 0xffffffff);
      }
      lVar10 = lVar10 * 0x10;
      *(undefined8 *)(local_c8 + lVar10) = 0;
      *(undefined ***)(local_c8 + lVar10) = local_60;
      *(undefined4 *)(local_c8 + 8 + lVar10) = (undefined4)local_58;
      *(undefined4 *)(local_c8 + 0xc + lVar10) = local_58._4_4_;
      local_58 = (longlong *)0x0;
      local_60 = (undefined **)0x0;
      local_e8 = (undefined **)0x0;
      uStack_e0 = 0;
      local_d8 = 0;
      plVar9 = (longlong *)FUN_14479d2ce(ppuVar1);
      (**(code **)(*plVar9 + 0x350))(plVar9,&local_60);
      if ((&DAT_149fc1b6e)[local_48] == '\x01') {
        plVar11 = local_58;
        if (local_50 == (longlong *)0x0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
          plVar9 = local_50;
        }
      }
      else {
        plVar9 = (longlong *)0x0;
        plVar11 = (longlong *)0x0;
      }
      local_60 = &PTR_FUN_14a5af930;
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      local_60 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])();
      if (plVar11 == (longlong *)0x0) {
        if (plVar9 != (longlong *)0x0) {
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
        if (local_e8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_c8,uStack_c0 & 0xffffffff);
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1461f4565;
      }
      local_f0 = param_1;
      FUN_148ab0116(&local_60,param_1);
      local_f8 = &local_60;
      (**(code **)(*local_b0 + 0x48))(local_b0,plVar11,&local_e8,&local_c8);
      FUN_1449db362(&local_60);
      if (plVar9 != (longlong *)0x0) {
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
      if (local_e8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(local_c8,uStack_c0 & 0xffffffff);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_a8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar2 = (int *)((longlong)local_a8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_a8 + 0x10))(local_a8);
          }
        }
      }
    }
    else {
LAB_1461f42cb:
      *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
    }
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_98 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)local_98 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_98 + 0x10))(local_98);
        }
      }
    }
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_78 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
LAB_1461f430f:
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461f4666 FUN_1461f4666 body=422 status=ok
// SIG undefined FUN_1461f4666(void)

longlong * FUN_1461f4666(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1461f4740:
    *puVar3 = &PTR_LAB_14b4e4d80;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4f5ae0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = *param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1461f4740;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b4e4d80;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4f5ae0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = *param_3;
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
  return param_1;
}



// FUNCTION 1461f480c FUN_1461f480c body=422 status=ok
// SIG undefined FUN_1461f480c(void)

longlong * FUN_1461f480c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1461f48e6:
    *puVar3 = &PTR_LAB_14b4e4d80;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4f5b50;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = *param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1461f48e6;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b4e4d80;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4f5b50;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = *param_3;
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
  return param_1;
}



// FUNCTION 1461f49b2 FUN_1461f49b2 body=84 status=ok
// SIG undefined FUN_1461f49b2(void)

undefined8 FUN_1461f49b2(longlong param_1,undefined8 param_2,undefined1 param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x28);
    FUN_1461f4a06(lVar2 + 0x50,param_4);
    uVar1 = *(undefined4 *)(param_4 + 0x118);
    *(undefined4 *)(lVar2 + 0x168) = uVar1;
    *(undefined1 *)(lVar2 + 0x48) = param_3;
    *(undefined1 *)(lVar2 + 0x18) = 1;
    uVar3 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 1461f4a06 FUN_1461f4a06 body=274 status=ok
// SIG undefined FUN_1461f4a06(void)

longlong FUN_1461f4a06(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
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
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x34);
  uVar7 = *(undefined4 *)(param_2 + 0x38);
  uVar8 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 0x38) = uVar7;
  *(undefined4 *)(param_1 + 0x3c) = uVar8;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  FUN_1412c5fc6(param_1 + 0x60,param_2 + 0x60);
  FUN_1412c6060(param_1 + 0xb0,param_2 + 0xb0);
  uVar3 = *(undefined8 *)(param_2 + 0x100);
  lVar4 = *(longlong *)(param_2 + 0x108);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x100) = uVar3;
  *(longlong *)(param_1 + 0x108) = lVar4;
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
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  return param_1;
}



// FUNCTION 1461f4b18 FUN_1461f4b18 body=205 status=ok
// SIG undefined FUN_1461f4b18(void)

void FUN_1461f4b18(longlong param_1)

{
  void *_Dst;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
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
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_18 = 0;
  FUN_1461f4cb7(DAT_14c760db4,&local_48,0);
  _Dst = *(void **)(param_1 + 0x20);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)FUN_14001cc68(0x80,0x10);
    *(void **)(param_1 + 0x20) = _Dst;
  }
  memcpy(_Dst,&local_c8,0x80);
  if ((local_10 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    FUN_1461f4be6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f4be6 FUN_1461f4be6 body=208 status=ok
// SIG undefined FUN_1461f4be6(void)

void FUN_1461f4be6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14164672c(&local_20,*(longlong *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10));
    lVar3 = *(longlong *)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x18) = local_20;
    local_20 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_20 != 0) {
        LOCK();
        puVar1 = (uint *)(local_20 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
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



// FUNCTION 1461f4cb7 FUN_1461f4cb7 body=1489 status=ok
// SIG undefined FUN_1461f4cb7(void)

void FUN_1461f4cb7(int param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  bVar3 = FUN_1449277db();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb02c10) && (FUN_144b3d300(&DAT_14cb02c10), DAT_14cb02c10 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VirtualTexturedLightmaps",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14cb02c08 = 0;
    }
    else {
      DAT_14cb02c08 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14cb02c10);
  }
  if (*(int *)(DAT_14cb02c08 + 4) == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = FUN_1449d9015(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_1 * 2),0);
  }
  lVar9 = DAT_14ca94dc8;
  *param_4 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  lVar2 = DAT_14ca94e18;
  param_4[1] = *(longlong *)(DAT_14ca94e18 + 0x10);
  param_4[2] = *(longlong *)(lVar9 + 0x10);
  param_4[3] = *(longlong *)(lVar2 + 0x10);
  lVar10 = DAT_14ca8c008;
  lVar8 = *(longlong *)(DAT_14ca8c008 + 0x48);
  param_4[4] = lVar8;
  param_4[5] = lVar8;
  lVar8 = DAT_14ca8c000;
  param_4[6] = *(longlong *)(DAT_14ca8c000 + 0x48);
  param_4[7] = *(longlong *)(lVar10 + 0x48);
  param_4[8] = *(longlong *)(lVar8 + 0x48);
  lVar8 = *(longlong *)(DAT_14ca8c090 + 0x10);
  param_4[0xe] = lVar8;
  param_4[0xf] = lVar8;
  lVar8 = *(longlong *)(lVar9 + 0x18);
  param_4[9] = lVar8;
  param_4[10] = lVar8;
  param_4[0xb] = *(longlong *)(lVar2 + 0x18);
  param_4[0xc] = *(longlong *)(lVar9 + 0x18);
  param_4[0xd] = *(longlong *)(lVar2 + 0x18);
  if (cVar4 != '\0') {
    if (param_3 == (longlong *)0x0) {
      return;
    }
    lVar8 = *(longlong *)(param_2 + 0x20 + (ulonglong)(bVar3 ^ 1) * 8);
    if (lVar8 == 0) {
      return;
    }
    lVar10 = (**(code **)(*param_3 + 0x30))(param_3,0,0);
    param_4[4] = lVar10;
    lVar10 = (**(code **)(*param_3 + 0x30))(param_3,1,0);
    param_4[5] = lVar10;
    iVar5 = FUN_147da7c0a(lVar8,3);
    if (iVar5 == -1) {
      lVar10 = *(longlong *)(DAT_14ca8c000 + 0x48);
    }
    else {
      lVar10 = (**(code **)(*param_3 + 0x30))(param_3,3,0);
    }
    param_4[6] = lVar10;
    iVar5 = FUN_147da7c0a(lVar8,4);
    if (iVar5 == -1) {
      lVar10 = *(longlong *)(DAT_14ca8c008 + 0x48);
    }
    else {
      lVar10 = (**(code **)(*param_3 + 0x30))(param_3,4,0);
    }
    param_4[7] = lVar10;
    iVar5 = FUN_147da7c0a(lVar8,2);
    if (iVar5 == -1) {
      lVar8 = *(longlong *)(DAT_14ca8c000 + 0x48);
    }
    else {
      lVar8 = (**(code **)(*param_3 + 0x30))(param_3,2,0);
    }
    param_4[8] = lVar8;
    lVar8 = (**(code **)(*param_3 + 0x10))(param_3,0);
    param_4[0xe] = lVar8;
    uVar6 = (**(code **)(*param_3 + 8))(param_3);
    if (1 < uVar6) {
      lVar8 = (**(code **)(*param_3 + 0x10))(param_3,1);
    }
    param_4[0xf] = lVar8;
    lVar8 = DAT_14cb04ec0;
    param_4[9] = DAT_14cb04ec0;
    param_4[10] = lVar8;
    param_4[0xb] = lVar8;
    param_4[0xc] = lVar8;
    param_4[0xd] = lVar8;
    return;
  }
  lVar8 = *(longlong *)(param_2 + (ulonglong)(bVar3 ^ 1) * 8);
  if (lVar8 == 0) {
    lVar10 = *(longlong *)(lVar9 + 0x10);
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(lVar8 + 0x128) + 0x10);
  }
  if (lVar10 == 0) {
    *param_4 = 0;
  }
  else {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
    *param_4 = lVar10;
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar6 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar10 = DAT_14ca94e18;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x128);
  }
  lVar10 = *(longlong *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    param_4[1] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
    param_4[1] = lVar10;
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar6 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar10 = DAT_14ca94dc8;
  if (*(longlong *)(param_2 + 0x18) != 0) {
    lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x128);
  }
  lVar10 = *(longlong *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    param_4[2] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
    param_4[2] = lVar10;
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar6 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar9 = DAT_14ca94dc8;
  lVar10 = *(longlong *)(DAT_14ca94dc8 + 0x18);
  if (lVar8 == 0) {
    param_4[9] = lVar10;
    lVar10 = *(longlong *)(lVar9 + 0x18);
  }
  else {
    lVar9 = FUN_1448463c0(lVar8);
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = FUN_1448463c0(lVar8);
      lVar9 = *(longlong *)(lVar9 + 0x18);
    }
    if (lVar9 != 0) {
      lVar10 = lVar9;
    }
    param_4[9] = lVar10;
    lVar10 = *(longlong *)(DAT_14ca94dc8 + 0x18);
    lVar9 = FUN_1448463c0(lVar8);
    if (lVar9 != 0) {
      lVar8 = FUN_1448463c0(lVar8);
      lVar8 = *(longlong *)(lVar8 + 0x18);
      goto LAB_1461f4ee4;
    }
  }
  lVar8 = 0;
LAB_1461f4ee4:
  if (lVar8 != 0) {
    lVar10 = lVar8;
  }
  param_4[10] = lVar10;
  lVar8 = *(longlong *)(DAT_14ca94e18 + 0x18);
  lVar10 = *(longlong *)(param_2 + 0x10);
  if ((lVar10 == 0) || (lVar9 = FUN_1448463c0(lVar10), lVar9 == 0)) {
    lVar10 = 0;
  }
  else {
    lVar10 = FUN_1448463c0(lVar10);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  if (lVar10 != 0) {
    lVar8 = lVar10;
  }
  param_4[0xb] = lVar8;
  lVar8 = *(longlong *)(DAT_14ca94dc8 + 0x18);
  lVar10 = *(longlong *)(param_2 + 0x18);
  if ((lVar10 == 0) || (lVar9 = FUN_1448463c0(lVar10), lVar9 == 0)) {
    lVar10 = 0;
  }
  else {
    lVar10 = FUN_1448463c0(lVar10);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  if (lVar10 != 0) {
    lVar8 = lVar10;
  }
  param_4[0xc] = lVar8;
  lVar8 = DAT_14ca94e18;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x128);
  }
  lVar8 = *(longlong *)(lVar8 + 0x10);
  if (lVar8 == 0) {
    param_4[3] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    param_4[3] = lVar8;
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar6 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar8 = *(longlong *)(DAT_14ca94e18 + 0x18);
  lVar10 = *(longlong *)(param_2 + 0x30);
  if ((lVar10 == 0) || (lVar9 = FUN_1448463c0(lVar10), lVar9 == 0)) {
    lVar10 = 0;
  }
  else {
    lVar10 = FUN_1448463c0(lVar10);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  if (lVar10 != 0) {
    lVar8 = lVar10;
  }
  param_4[0xd] = lVar8;
  lVar8 = *(longlong *)(DAT_14ca8c090 + 0x10);
  param_4[0xe] = lVar8;
  param_4[0xf] = lVar8;
  return;
}



// FUNCTION 1461f5288 FUN_1461f5288 body=255 status=ok
// SIG undefined FUN_1461f5288(void)

undefined8 FUN_1461f5288(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [40];
  wchar_t *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e0);
  _Str = L"";
  if ((int)local_d8 != 0) {
    _Str = local_e0;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e0 = local_20;
  local_c8 = 0x4000000000;
  uVar2 = FUN_1461f5388();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f5388 FUN_1461f5388 body=460 status=ok
// SIG undefined FUN_1461f5388(void)

undefined8 * FUN_1461f5388(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  ulonglong local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined2 *local_258;
  int local_250;
  longlong local_248 [68];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  uVar1 = FUN_1409ffe1d();
  local_260 = DAT_14c9a8748;
  FUN_1400021e4(&local_260,local_248);
  FUN_140ba7826(&local_258,L"GbxValue_",local_248);
  if (local_248[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1caea0;
  puVar5 = local_258;
  if (local_250 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_268,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_288 = 0;
  uStack_280 = 0;
  local_290 = local_290 & 0xffffffffffffff00;
  local_298 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_268,0xc5);
  FUN_140282a3c(local_248);
  local_288 = 8;
  local_290 = 0x28;
  local_298 = 1;
  FUN_14086a4ba(uVar4,local_248,0,puVar2);
  FUN_140010906(local_248);
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0);
  uVar1 = FUN_144a7452c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  *puVar2 = &PTR_LAB_149e71030;
  local_270 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_1400167d4(puVar2,&local_270,param_1);
  if (local_258 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461f5556 FUN_1461f5556 body=255 status=ok
// SIG undefined FUN_1461f5556(void)

undefined8 FUN_1461f5556(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [40];
  wchar_t *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e0);
  _Str = L"";
  if ((int)local_d8 != 0) {
    _Str = local_e0;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e0 = local_20;
  local_c8 = 0x4000000000;
  uVar2 = FUN_1461f5656();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f5656 FUN_1461f5656 body=460 status=ok
// SIG undefined FUN_1461f5656(void)

undefined8 * FUN_1461f5656(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  ulonglong local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined2 *local_258;
  int local_250;
  longlong local_248 [68];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  uVar1 = FUN_1409ffe1d();
  local_260 = DAT_14c9a8868;
  FUN_1400021e4(&local_260,local_248);
  FUN_140ba7826(&local_258,L"GbxValue_",local_248);
  if (local_248[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cb000;
  puVar5 = local_258;
  if (local_250 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_268,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_288 = 0;
  uStack_280 = 0;
  local_290 = local_290 & 0xffffffffffffff00;
  local_298 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_268,0xc5);
  FUN_140282a3c(local_248);
  local_288 = 8;
  local_290 = 0x28;
  local_298 = 1;
  FUN_14086a4ba(uVar4,local_248,0,puVar2);
  FUN_140010906(local_248);
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0);
  uVar1 = FUN_144a64e42();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  *puVar2 = &PTR_LAB_149e71d60;
  local_270 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015e2e(puVar2,&local_270,param_1);
  if (local_258 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461f5824 FUN_1461f5824 body=255 status=ok
// SIG undefined FUN_1461f5824(void)

undefined8 FUN_1461f5824(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [40];
  wchar_t *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e0);
  _Str = L"";
  if ((int)local_d8 != 0) {
    _Str = local_e0;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e0 = local_20;
  local_c8 = 0x4000000000;
  uVar2 = FUN_1461f5924();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f5924 FUN_1461f5924 body=460 status=ok
// SIG undefined FUN_1461f5924(void)

undefined8 * FUN_1461f5924(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  ulonglong local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined2 *local_258;
  int local_250;
  longlong local_248 [68];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  uVar1 = FUN_1409ffe1d();
  local_260 = DAT_14c9a9ca8;
  FUN_1400021e4(&local_260,local_248);
  FUN_140ba7826(&local_258,L"GbxValue_",local_248);
  if (local_248[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cb160;
  puVar5 = local_258;
  if (local_250 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_268,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_288 = 0;
  uStack_280 = 0;
  local_290 = local_290 & 0xffffffffffffff00;
  local_298 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_268,0xc5);
  FUN_140282a3c(local_248);
  local_288 = 8;
  local_290 = 0x28;
  local_298 = 1;
  FUN_14086a4ba(uVar4,local_248,0,puVar2);
  FUN_140010906(local_248);
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0);
  uVar1 = FUN_144a49fc8();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  *puVar2 = &PTR_LAB_149e712b0;
  local_270 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140017230(puVar2,&local_270,param_1);
  if (local_258 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461f5af2 FUN_1461f5af2 body=255 status=ok
// SIG undefined FUN_1461f5af2(void)

undefined8 FUN_1461f5af2(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [40];
  wchar_t *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e0);
  _Str = L"";
  if ((int)local_d8 != 0) {
    _Str = local_e0;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e0 = local_20;
  local_c8 = 0x4000000000;
  uVar2 = FUN_1461f5bf2();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f5bf2 FUN_1461f5bf2 body=460 status=ok
// SIG undefined FUN_1461f5bf2(void)

undefined8 * FUN_1461f5bf2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  ulonglong local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined2 *local_258;
  int local_250;
  longlong local_248 [68];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  uVar1 = FUN_1409ffe1d();
  local_260 = DAT_14c9a9948;
  FUN_1400021e4(&local_260,local_248);
  FUN_140ba7826(&local_258,L"GbxValue_",local_248);
  if (local_248[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cb9a0;
  puVar5 = local_258;
  if (local_250 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_268,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_288 = 0;
  uStack_280 = 0;
  local_290 = local_290 & 0xffffffffffffff00;
  local_298 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_268,0xc5);
  FUN_140282a3c(local_248);
  local_288 = 8;
  local_290 = 0x28;
  local_298 = 1;
  FUN_14086a4ba(uVar4,local_248,0,puVar2);
  FUN_140010906(local_248);
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0);
  uVar1 = FUN_144a63fc8();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  *puVar2 = &PTR_LAB_149e71530;
  local_270 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140016c46(puVar2,&local_270,param_1);
  if (local_258 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461f5dc0 FUN_1461f5dc0 body=255 status=ok
// SIG undefined FUN_1461f5dc0(void)

undefined8 FUN_1461f5dc0(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [40];
  wchar_t *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e0);
  _Str = L"";
  if ((int)local_d8 != 0) {
    _Str = local_e0;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e0 = local_20;
  local_c8 = 0x4000000000;
  uVar2 = FUN_1461f5ec0();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f5ec0 FUN_1461f5ec0 body=460 status=ok
// SIG undefined FUN_1461f5ec0(void)

undefined8 * FUN_1461f5ec0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  ulonglong local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined2 *local_258;
  int local_250;
  longlong local_248 [68];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  uVar1 = FUN_1409ffe1d();
  local_260 = DAT_14c9a8e08;
  FUN_1400021e4(&local_260,local_248);
  FUN_140ba7826(&local_258,L"GbxValue_",local_248);
  if (local_248[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cbb00;
  puVar5 = local_258;
  if (local_250 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_268,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_288 = 0;
  uStack_280 = 0;
  local_290 = local_290 & 0xffffffffffffff00;
  local_298 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_268,0xc5);
  FUN_140282a3c(local_248);
  local_288 = 8;
  local_290 = 0x28;
  local_298 = 1;
  FUN_14086a4ba(uVar4,local_248,0,puVar2);
  FUN_140010906(local_248);
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0);
  uVar1 = FUN_144a49f24();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  *puVar2 = &PTR_LAB_149e71720;
  local_270 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140016d3a(puVar2,&local_270,param_1);
  if (local_258 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461f608e FUN_1461f608e body=212 status=ok
// SIG undefined FUN_1461f608e(void)

void FUN_1461f608e(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x220);
  lVar2 = (longlong)local_30;
  pvVar1 = *(void **)(param_1 + 0x218);
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_147cc4540(&local_38,local_30,0);
    memcpy(local_38,pvVar1,lVar2 << 4);
    pvVar1 = local_38;
    lVar2 = (longlong)local_30;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        FUN_147cadc36(param_1,*(undefined8 *)((longlong)pvVar1 + lVar3));
        lVar3 = lVar3 + 0x10;
      } while (lVar2 * 0x10 != lVar3);
    }
  }
  FUN_1461f6164(param_1 + 0x10);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461f6164 FUN_1461f6164 body=505 status=ok
// SIG undefined FUN_1461f6164(void)

void FUN_1461f6164(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = 0x58;
  do {
    lVar3 = *(longlong *)(param_1 + lVar4);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + lVar4) = 0;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = lVar4 + 0x38;
  } while (lVar4 != 0x1a8);
  lVar4 = *(longlong *)(param_1 + 0x1a8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x1e0);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
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
      FUN_144a54812();
    }
  }
  lVar4 = 0x60;
  do {
    lVar3 = *(longlong *)(param_1 + lVar4);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + lVar4) = 0;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = lVar4 + 0x38;
  } while (lVar4 != 0x1b0);
  lVar4 = *(longlong *)(param_1 + 0x1b0);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x1e8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1461f635e FUN_1461f635e body=40 status=ok
// SIG undefined FUN_1461f635e(void)

undefined8 FUN_1461f635e(undefined8 param_1,int param_2)

{
  FUN_141646822();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461f6386 FUN_1461f6386 body=40 status=ok
// SIG undefined FUN_1461f6386(void)

undefined8 FUN_1461f6386(undefined8 param_1,int param_2)

{
  FUN_141646ac8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461f63ae FUN_1461f63ae body=178 status=ok
// SIG undefined FUN_1461f63ae(void)

void FUN_1461f63ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141646d70();
  lVar3 = *(longlong *)(param_1 + 0x48);
  if ((*(char *)(lVar3 + 0xc5) == '\x01') && (*(char *)(lVar3 + 0x80) == '\x01')) {
    FUN_14625f670(param_1,&local_30);
    if (local_30 != 0) {
      puVar4 = &DAT_14cb80c78;
      if (*(longlong *)(lVar3 + 200) != 0) {
        puVar4 = (undefined8 *)(lVar3 + 200);
      }
      FUN_145bef72e(local_30,puVar4);
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f6462 FUN_1461f6462 body=68 status=ok
// SIG undefined FUN_1461f6462(void)

void FUN_1461f6462(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145887e04(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1461f64a8(param_1,param_2);
  return;
}



// FUNCTION 1461f64a8 FUN_1461f64a8 body=111 status=ok
// SIG undefined FUN_1461f64a8(void)

void FUN_1461f64a8(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0xa8,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0xa8,8);
  }
  return;
}



// FUNCTION 1461f6518 FUN_1461f6518 body=227 status=ok
// SIG undefined FUN_1461f6518(void)

void FUN_1461f6518(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1461f65fc(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f65fc FUN_1461f65fc body=104 status=ok
// SIG undefined FUN_1461f65fc(void)

void FUN_1461f65fc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    FUN_1461f6664();
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30 &&
        (*(longlong *)(param_1 + 0xb0) != 0)))) {
      FUN_14480f766(param_2 + 0x1200);
      return;
    }
  }
  return;
}



// FUNCTION 1461f6664 FUN_1461f6664 body=1565 status=ok
// SIG undefined FUN_1461f6664(void)

void FUN_1461f6664(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar2 = FUN_144729dda(param_1 + 0x50);
  if (cVar2 == '\0') goto LAB_1461f6b14;
  FUN_1400b22c2(local_58,"_Idle_Stop");
  FUN_1407ec8fc(&local_48,param_1 + 0x30,local_58);
  if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
    puVar8 = local_48;
    if (local_40 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    (*DAT_14cc2d210)(puVar8);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_14480f766(lVar3 + 0x5900);
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_14480f766(lVar3 + 0x59a0);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_14480f766(lVar3 + 0x5068);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_14480f766(lVar3 + 0x5088);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_14480f766(lVar3 + 0x52a8);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_14480f766(lVar3 + 0x4220);
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_14480f766(lVar3 + 0x4ad8);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_14480f766(lVar3 + 0x4af0);
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_14480f766(lVar3 + 0x6048);
  }
  plVar1 = (longlong *)(lVar3 + 0x3b38);
  lVar4 = (**(code **)(*(longlong *)(lVar3 + 0x3b38) + 0x18))(plVar1);
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_14480f766(lVar4 + 0x300);
  }
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_14480f766(lVar4 + 0x378);
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_14480f766(lVar3 + 0x3fa8);
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_14480f766(lVar3 + 0x71b8);
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_14480f766(lVar3 + 0x71f8);
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_14480f766(lVar3 + 0x72c8);
  }
  FUN_1461f6c82(&local_60);
  FUN_1409ca370(lVar3 + 0x67d0,param_1,local_60);
  FUN_144a7b126(lVar3 + 0x67d0,&local_48,1);
  FUN_1461f7098(&local_68);
  FUN_1409ca370(lVar3 + 0x5fc0,param_1,local_68);
  FUN_144a7b126(lVar3 + 0x5fc0,&local_48,1);
  FUN_1461f6e86(&local_70);
  FUN_1409ca370(lVar3 + 0x66a8,param_1,local_70);
  FUN_144a7b126(lVar3 + 0x66a8,&local_48,1);
  cVar2 = FUN_144729dda(param_1 + 0x58);
  if (cVar2 != '\0') {
    lVar4 = FUN_14479d2ce(param_1 + 0x58);
    FUN_1461f6f36(&local_78);
    FUN_1409ca370(lVar4 + 0x4460,param_1,local_78);
    FUN_144a7b126(lVar4 + 0x4460,&local_48,1);
    FUN_1461f6fe6(&local_80);
    FUN_1409ca370(lVar4 + 0x3ba8,param_1,local_80);
    FUN_144a7b126(lVar4 + 0x3ba8,&local_48,1);
    FUN_1461f6d2e(&local_88);
    FUN_1409ca370(lVar4 + 0x3bb8,param_1,local_88);
    FUN_144a7b126(lVar4 + 0x3bb8,&local_48,1);
    FUN_1461f7156(&local_90);
    FUN_1409ca370(lVar4 + 0x4408,param_1,local_90);
    FUN_144a7b126(lVar4 + 0x4408,&local_48,1);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x68);
  if (lVar4 == 0) {
    uVar5 = FUN_145c05732();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x68) = lVar4;
  }
  plVar1 = (longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    if ((lVar4 != 0) && (*plVar1 != 0)) {
      lVar4 = FUN_14494cb38(lVar4,plVar1);
      *(longlong *)(param_1 + 0x70) = lVar4;
      if (lVar4 != 0) goto LAB_1461f6a3a;
    }
  }
  else {
LAB_1461f6a3a:
    uVar5 = (**(code **)(*(longlong *)(lVar3 + 0x3a40) + 0x10))(lVar3 + 0x3a40);
    lVar4 = *(longlong *)(param_1 + 0x68);
    if (lVar4 == 0) {
      uVar6 = FUN_145c05732();
      lVar4 = FUN_14477b664(uVar6);
      *(longlong *)(param_1 + 0x68) = lVar4;
    }
    lVar7 = *(longlong *)(param_1 + 0x70);
    if (((lVar7 == 0) && (lVar7 = 0, lVar4 != 0)) && (*plVar1 != 0)) {
      lVar7 = FUN_14494cb38(lVar4,plVar1);
      *(longlong *)(param_1 + 0x70) = lVar7;
    }
    FUN_141060d80(uVar5,lVar7,param_1 + 0x130);
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (lVar4 == 0) {
    uVar5 = FUN_145c05732();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x80) = lVar4;
  }
  plVar1 = (longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    if ((lVar4 != 0) && (*plVar1 != 0)) {
      lVar4 = FUN_14494cb38(lVar4,plVar1);
      *(longlong *)(param_1 + 0x88) = lVar4;
      if (lVar4 != 0) goto LAB_1461f6a9c;
    }
  }
  else {
LAB_1461f6a9c:
    uVar5 = (**(code **)(*(longlong *)(lVar3 + 0x3a40) + 0x10))(lVar3 + 0x3a40);
    lVar4 = *(longlong *)(param_1 + 0x80);
    if (lVar4 == 0) {
      uVar6 = FUN_145c05732();
      lVar4 = FUN_14477b664(uVar6);
      *(longlong *)(param_1 + 0x80) = lVar4;
    }
    lVar7 = *(longlong *)(param_1 + 0x88);
    if (((lVar7 == 0) && (lVar7 = 0, lVar4 != 0)) && (*plVar1 != 0)) {
      lVar7 = FUN_14494cb38(lVar4,plVar1);
      *(longlong *)(param_1 + 0x88) = lVar7;
    }
    FUN_141060d80(uVar5,lVar7,param_1 + 0x138);
  }
  FUN_1461f6dda(&local_98);
  FUN_1461f7214(lVar3 + 0x20f,param_1,local_98);
  FUN_144a7e010(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x50) = 0;
LAB_1461f6b14:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461f6c82 FUN_1461f6c82 body=170 status=ok
// SIG undefined FUN_1461f6c82(void)

undefined8 * FUN_1461f6c82(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2d230) {
    FUN_144b3d300(&DAT_14cc2d230);
    if (DAT_14cc2d230 == -1) {
      builtin_wcsncpy(local_28,L"JumpEvent",10);
      FUN_1446f470e(&DAT_14cc2d228,local_28,1);
      _Init_thread_footer(&DAT_14cc2d230);
    }
  }
  *param_1 = DAT_14cc2d228;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f6d2e FUN_1461f6d2e body=170 status=ok
// SIG undefined FUN_1461f6d2e(void)

undefined8 * FUN_1461f6d2e(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2d280) {
    FUN_144b3d300(&DAT_14cc2d280);
    if (DAT_14cc2d280 == -1) {
      builtin_wcsncpy(local_28,L"StopSlide",10);
      FUN_1446f470e(&DAT_14cc2d278,local_28,1);
      _Init_thread_footer(&DAT_14cc2d280);
    }
  }
  *param_1 = DAT_14cc2d278;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f6dda FUN_1461f6dda body=170 status=ok
// SIG undefined FUN_1461f6dda(void)

undefined8 * FUN_1461f6dda(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2d2a0) {
    FUN_144b3d300(&DAT_14cc2d2a0);
    if (DAT_14cc2d2a0 == -1) {
      builtin_wcsncpy(local_28,L"OnEndPlay",10);
      FUN_1446f470e(&DAT_14cc2d298,local_28,1);
      _Init_thread_footer(&DAT_14cc2d2a0);
    }
  }
  *param_1 = DAT_14cc2d298;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f6e86 FUN_1461f6e86 body=174 status=ok
// SIG undefined FUN_1461f6e86(void)

undefined8 * FUN_1461f6e86(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2d250) {
    FUN_144b3d300(&DAT_14cc2d250);
    if (DAT_14cc2d250 == -1) {
      builtin_wcsncpy(local_38 + 8,L"enuOpen",8);
      builtin_wcsncpy(local_38,L"OnIsAnyM",8);
      FUN_1446f470e(&DAT_14cc2d248,local_38,1);
      _Init_thread_footer(&DAT_14cc2d250);
    }
  }
  *param_1 = DAT_14cc2d248;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f6f36 FUN_1461f6f36 body=174 status=ok
// SIG undefined FUN_1461f6f36(void)

undefined8 * FUN_1461f6f36(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2d260) {
    FUN_144b3d300(&DAT_14cc2d260);
    if (DAT_14cc2d260 == -1) {
      builtin_wcsncpy(local_38 + 8,L"Dash",5);
      builtin_wcsncpy(local_38,L"StartAir",8);
      FUN_1446f470e(&DAT_14cc2d258,local_38,1);
      _Init_thread_footer(&DAT_14cc2d260);
    }
  }
  *param_1 = DAT_14cc2d258;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f6fe6 FUN_1461f6fe6 body=177 status=ok
// SIG undefined FUN_1461f6fe6(void)

undefined8 * FUN_1461f6fe6(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2d270) {
    FUN_144b3d300(&DAT_14cc2d270);
    if (DAT_14cc2d270 == -1) {
      builtin_wcsncpy(local_28,L"StartSlide",0xb);
      FUN_1446f470e(&DAT_14cc2d268,local_28,1);
      _Init_thread_footer(&DAT_14cc2d270);
    }
  }
  *param_1 = DAT_14cc2d268;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f7098 FUN_1461f7098 body=188 status=ok
// SIG undefined FUN_1461f7098(void)

undefined8 * FUN_1461f7098(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2d240) {
    FUN_144b3d300(&DAT_14cc2d240);
    if (DAT_14cc2d240 == -1) {
      builtin_wcsncpy(local_38,L"WeaponChangedEvent",0x13);
      FUN_1446f470e(&DAT_14cc2d238,local_38,1);
      _Init_thread_footer(&DAT_14cc2d240);
    }
  }
  *param_1 = DAT_14cc2d238;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f7156 FUN_1461f7156 body=188 status=ok
// SIG undefined FUN_1461f7156(void)

undefined8 * FUN_1461f7156(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2d290) {
    FUN_144b3d300(&DAT_14cc2d290);
    if (DAT_14cc2d290 == -1) {
      builtin_wcsncpy(local_38,L"StopGroundSlamEvent",0x14);
      FUN_1446f470e(&DAT_14cc2d288,local_38,1);
      _Init_thread_footer(&DAT_14cc2d290);
    }
  }
  *param_1 = DAT_14cc2d288;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f7214 FUN_1461f7214 body=106 status=ok
// SIG undefined FUN_1461f7214(void)

void FUN_1461f7214(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == '\x01') {
    FUN_1402599be(param_1,&local_30);
    cVar1 = FUN_14048e8dc(param_1 + -0x20f,local_30,param_2,param_3);
    *param_1 = cVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f7280 FUN_1461f7280 body=259 status=ok
// SIG undefined FUN_1461f7280(void)

undefined8 FUN_1461f7280(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [40];
  wchar_t *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e0);
  _Str = L"";
  if ((int)local_d8 != 0) {
    _Str = local_e0;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e0 = local_20;
  local_c8 = 0x400000001d;
  uVar2 = FUN_1461f7384();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f7384 FUN_1461f7384 body=460 status=ok
// SIG undefined FUN_1461f7384(void)

undefined8 * FUN_1461f7384(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  ulonglong local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined2 *local_258;
  int local_250;
  longlong local_248 [68];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  uVar1 = FUN_1409ffe1d();
  local_260 = DAT_14c9aa368;
  FUN_1400021e4(&local_260,local_248);
  FUN_140ba7826(&local_258,L"GbxValue_",local_248);
  if (local_248[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cc600;
  puVar5 = local_258;
  if (local_250 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_268,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_288 = 0;
  uStack_280 = 0;
  local_290 = local_290 & 0xffffffffffffff00;
  local_298 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_268,0xc5);
  FUN_140282a3c(local_248);
  local_288 = 8;
  local_290 = 0x28;
  local_298 = 1;
  FUN_14086a4ba(uVar4,local_248,0,puVar2);
  FUN_140010906(local_248);
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0);
  uVar1 = FUN_144a4a07e();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  *puVar2 = &PTR_LAB_149e71b60;
  local_270 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140017520(puVar2,&local_270,param_1);
  if (local_258 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461f755c FUN_1461f755c body=710 status=ok
// SIG undefined FUN_1461f755c(void)

undefined8 * FUN_1461f755c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_140312256();
  *param_1 = &PTR_FUN_14b5e6170;
  param_1[0x72] = &PTR_FUN_14b5e67b0;
  param_1[0x73] = &PTR_FUN_14b5e6820;
  param_1[0x74] = &PTR_FUN_14b5e6890;
  param_1[0x75] = &PTR_FUN_14b5e68c0;
  param_1[0x76] = &PTR_FUN_14b5e68f0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x484) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 1;
  FUN_1411c3dfa(param_1 + 0x98);
  param_1[0x98] = &PTR_FUN_14b5eae70;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  *(undefined4 *)(param_1 + 0xde) = 2;
  *(undefined8 *)((longlong)param_1 + 0x6f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x704) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x714) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x724) = 0;
  *(undefined8 *)((longlong)param_1 + 0x72c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x734) = 0;
  *(undefined8 *)((longlong)param_1 + 0x73c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x743) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x754) = 0;
  *(undefined8 *)((longlong)param_1 + 0x75c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x764) = 0;
  *(undefined8 *)((longlong)param_1 + 0x76c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x774) = 0;
  *(undefined8 *)((longlong)param_1 + 0x77c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x784) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x794) = 0;
  *(undefined8 *)((longlong)param_1 + 0x79c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ac) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x7b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7bc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c4) = 0;
  *(undefined4 *)(param_1 + 0xf9) = 2;
  param_1[0x101] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7f9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d4) = 0;
  param_1[0x104] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x102] = DAT_14c8464e0;
  param_1[0x103] = uVar1;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x105) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0x82c) = uVar2;
  *(undefined4 *)(param_1 + 0x106) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x834) = uVar4;
  param_1[0x107] = DAT_14c846508;
  param_1[0x108] = 0;
  *(undefined1 *)(param_1 + 0x109) = 0;
  param_1[0x10a] = 0;
  FUN_14112fbd2(param_1 + 0x10b);
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  *(undefined8 *)((longlong)param_1 + 0xacc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xad4) = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x15e] = DAT_14c8464e0;
  param_1[0x15f] = uVar1;
  param_1[0x160] = DAT_14c8464f0;
  param_1[0x163] = DAT_14c846508;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x161) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0xb0c) = uVar2;
  *(undefined4 *)(param_1 + 0x162) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xb14) = uVar4;
  param_1[0x164] = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  *(undefined1 *)(param_1 + 7) = 4;
  FUN_140c7ce82(param_1,0);
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 4;
  FUN_1403121a6(param_1,0);
  FUN_141323f6e(param_1 + 0x77,param_2);
  return param_1;
}



// FUNCTION 1461f7822 FUN_1461f7822 body=293 status=ok
// SIG undefined FUN_1461f7822(void)

void FUN_1461f7822(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
      plVar3 = local_38;
      if (local_38 != (longlong *)0x0) {
        local_58 = FUN_146071620;
        local_50 = 0;
        FUN_1461f7948(local_48,param_1);
        (**(code **)(*plVar3 + 0xa0))(plVar3,&local_58,local_48);
        *(code **)(param_1 + 0x128) = local_58;
        FUN_1449db362(local_48);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x10);
        }
        (**(code **)(*local_38 + 0x98))
                  (local_38,uVar4,param_1 + 0x38,*(byte *)(param_1 + 0x110) ^ 1);
      }
      goto LAB_1461f78f0;
    }
  }
  local_38 = (longlong *)0x0;
  plStack_30 = (longlong *)0x0;
LAB_1461f78f0:
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f7948 FUN_1461f7948 body=428 status=ok
// SIG undefined FUN_1461f7948(void)

longlong * FUN_1461f7948(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1461f7a28:
    *puVar5 = &PTR_LAB_149eae4d0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4f2e70;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1461f7a28;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149eae4d0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4f2e70;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1461f7b00 FUN_1461f7b00 body=711 status=ok
// SIG undefined FUN_1461f7b00(void)

undefined8 * FUN_1461f7b00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_140312256();
  *param_1 = &PTR_FUN_14b71d960;
  param_1[0x72] = &PTR_FUN_14b71dfa0;
  param_1[0x73] = &PTR_FUN_14b71e010;
  param_1[0x74] = &PTR_FUN_14b71e0b0;
  param_1[0x75] = &PTR_FUN_14b71e0e0;
  param_1[0x76] = &PTR_FUN_14b71e110;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x91) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x48c) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 1;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0xffffffff;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(undefined8 *)((longlong)param_1 + 0x574) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  *(undefined4 *)(param_1 + 0xb5) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5fb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0;
  *(undefined8 *)((longlong)param_1 + 0x65c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x63c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x624) = 0;
  *(undefined8 *)((longlong)param_1 + 0x62c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x614) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60c) = 0;
  *(undefined4 *)(param_1 + 0xcd) = 2;
  *(undefined4 *)((longlong)param_1 + 0x67c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x674) = 0;
  param_1[0xd0] = 2;
  FUN_1412d7af2(param_1 + 0xd1);
  uVar1 = DAT_14cbc62e8;
  uVar2 = FUN_144a799b0();
  lVar3 = FUN_14048696c(param_1,uVar1,uVar2,uVar2,0,1);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x39] = lVar3;
    if (lVar3 == 0) goto LAB_1461f7d96;
  }
  else {
    FUN_1456cec3c(lVar3);
    param_1[0x39] = lVar3;
  }
  FUN_140381810(lVar3,0);
  (**(code **)(*(longlong *)param_1[0x39] + 0x588))((longlong *)param_1[0x39],2);
LAB_1461f7d96:
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  FUN_141323f6e(param_1 + 0x78,param_2);
  return param_1;
}



// FUNCTION 1461f7dc8 FUN_1461f7dc8 body=87 status=ok
// SIG undefined FUN_1461f7dc8(void)

void FUN_1461f7dc8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [7];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)(param_1 + 0x40) + 0x48) !=
      *(int *)(*(longlong *)(param_1 + 0x40) + 0x74)) {
    local_9 = 1;
    FUN_1461f7e20(param_2,local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f7e20 FUN_1461f7e20 body=274 status=ok
// SIG undefined FUN_1461f7e20(void)

undefined8 FUN_1461f7e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 **local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 *local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_40 = &LAB_14108ea9e;
  plVar3 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a480d30;
  local_50 = plVar3 + 2;
  plVar3[2] = (longlong)&PTR_FUN_14a480d48;
  plVar3[3] = param_4;
  plVar3[4] = (longlong)&LAB_14108eaaa;
  local_48 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    local_58 = &local_40;
    FUN_1406abf4a(param_1,param_2,param_3,&local_50);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_58 = &local_40;
    FUN_1406abf4a(param_1,param_2,param_3,&local_50);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f7f34 FUN_1461f7f34 body=280 status=ok
// SIG undefined FUN_1461f7f34(void)

undefined1 *
FUN_1461f7f34(undefined8 param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *(undefined8 *)(param_4 + 0x20);
  local_48 = *(undefined8 *)(param_4 + 0x28);
  local_40 = *(longlong **)(param_4 + 0x30);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_140230656(&local_50);
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (((char)uVar4 == '\0') || (*(int *)(param_4 + 0xc) == DAT_14cb987b8)) {
    FUN_145ca2a50(param_1,param_2,param_3,param_4);
    FUN_141646d72(DAT_14cb98ab0,uVar4);
  }
  else {
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f804e FUN_1461f804e body=216 status=ok
// SIG undefined FUN_1461f804e(void)

void FUN_1461f804e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  uVar2 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar2);
  local_40 = local_28;
  uVar1 = FUN_1461f8128(param_1,&local_50);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f8128 FUN_1461f8128 body=146 status=ok
// SIG undefined FUN_1461f8128(void)

undefined4 FUN_1461f8128(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar3 = FUN_140b1c3dc();
    lVar6 = FUN_14477b664(uVar3);
    param_2[1] = lVar6;
  }
  lVar4 = param_2[2];
  if (((lVar4 != 0) || (lVar4 = 0, lVar6 == 0)) || (*param_2 == 0)) goto LAB_1461f818b;
  plVar1 = *(longlong **)(lVar6 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_1461f81a0:
    lVar4 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_1461f81a0;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(uVar3,param_2);
  }
  param_2[2] = lVar4;
LAB_1461f818b:
  puVar5 = (undefined4 *)FUN_1409e484c(param_1,lVar4);
  return *puVar5;
}



// FUNCTION 1461f81ba FUN_1461f81ba body=404 status=ok
// SIG undefined FUN_1461f81ba(void)

void FUN_1461f81ba(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    lVar5 = FUN_144a5dd5e();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) && (*param_2 != 0)) {
      cVar4 = (**(code **)(*(longlong *)(param_3 + 0xe50) + 0x18))(param_3 + 0xe50);
      if (cVar4 != '\0') {
        FUN_1447f69b6(*param_2 + 0x108);
        lVar5 = *param_2;
        if (*(longlong *)(lVar5 + 0xa8) != 0) {
          cVar4 = FUN_144729dda(lVar5 + 0xa0);
          if ((cVar4 != '\0') && (plVar3 = *(longlong **)(lVar5 + 0xa8), plVar3 != (longlong *)0x0))
          {
            lVar5 = FUN_140d80daa(plVar3);
            if (lVar5 != 0) {
              uVar6 = FUN_14037bb52();
              plVar7 = (longlong *)FUN_144718840(lVar5,uVar6);
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x18))(plVar7,&local_48,0);
                if (local_40 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_40 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_40)(local_40);
                    LOCK();
                    piVar2 = (int *)((longlong)local_40 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*local_40 + 0x10))(local_40);
                    }
                  }
                }
                if (local_48 != 0) {
                  FUN_148e04844(param_3 + 0xe50,plVar7,0);
                }
              }
            }
            local_48 = (**(code **)(*plVar3 + 8))(plVar3);
            if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(local_48);
            }
            local_40 = plVar3;
            FUN_1461f8350(param_3);
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f8350 FUN_1461f8350 body=139 status=ok
// SIG undefined FUN_1461f8350(void)

void FUN_1461f8350(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (local_30 == 0) {
      local_30 = 0;
    }
    else {
      FUN_1456cec3c();
      local_30 = *param_2;
    }
  }
  local_28 = param_2[1];
  uVar1 = FUN_14477b072(param_1,DAT_14cbad8b0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f83dc FUN_1461f83dc body=364 status=ok
// SIG undefined FUN_1461f83dc(void)

void FUN_1461f83dc(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_58 = 0;
  FUN_1461f854a();
  plVar3 = (longlong *)param_1[0x127];
  if (plVar3 == (longlong *)0x0) goto LAB_1461f84a6;
  lVar4 = param_1[0xf8];
  if (lVar4 == 0) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x3d0))(param_1);
    (**(code **)(*plVar3 + 0x90))(plVar3,&local_78);
    plVar3 = local_70;
    if (local_70 == (longlong *)0x0) {
      param_1[0xf8] = local_78;
      plVar5 = (longlong *)param_1[0xf9];
      if (plVar5 != (longlong *)0x0) {
        param_1[0xf9] = 0;
LAB_1461f84e6:
        LOCK();
        plVar3 = plVar5 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x0001461f8515:
          if (iVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
      param_1[0xf8] = local_78;
      plVar5 = (longlong *)param_1[0xf9];
      if (local_70 == plVar5) {
        LOCK();
        plVar5 = local_70 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar5 = plVar3;
          goto joined_r0x0001461f8515;
        }
      }
      else {
        param_1[0xf9] = (longlong)local_70;
        if (plVar5 != (longlong *)0x0) goto LAB_1461f84e6;
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_70 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
    lVar4 = param_1[0xf8];
    plVar3 = (longlong *)param_1[0x127];
  }
  (**(code **)(*plVar3 + 0x88))(plVar3,lVar4);
LAB_1461f84a6:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f854a FUN_1461f854a body=727 status=ok
// SIG undefined FUN_1461f854a(void)

void FUN_1461f854a(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88 [2];
  longlong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x948) != '\x02') {
    *(undefined1 *)(param_1 + 0x948) = 3;
  }
  if (*param_2 == *(longlong *)(param_1 + 0x938)) {
LAB_1461f8608:
    pcVar6 = (code *)*param_3;
    if (pcVar6 == (code *)0x0) goto LAB_1461f8614;
    plVar10 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar10 = (longlong *)param_3[2];
    }
    uVar9 = (**(code **)(*plVar10 + 8))();
    (*pcVar6)(uVar9);
  }
  else {
    plVar10 = *(longlong **)(param_1 + 0x940);
    *(undefined8 *)(param_1 + 0x938) = 0;
    *(undefined8 *)(param_1 + 0x940) = 0;
    lVar4 = *param_2;
    lVar11 = param_2[1];
    if (lVar11 == 0) {
      *(longlong *)(param_1 + 0x938) = lVar4;
      *(undefined8 *)(param_1 + 0x940) = 0;
    }
    else {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x940);
      *(longlong *)(param_1 + 0x938) = lVar4;
      *(longlong *)(param_1 + 0x940) = lVar11;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    lVar4 = *(longlong *)(param_1 + 0x920);
    if (*(longlong *)(param_1 + 0xf0) == 0) {
LAB_1461f85e6:
      iVar3 = *(int *)(param_1 + 0x100);
      if ((longlong)iVar3 != 0) {
        local_90 = *(longlong *)(param_1 + 0xf8);
        lVar11 = 0;
        do {
          local_98 = *(longlong *)(local_90 + lVar11);
          if (local_98 != 0) {
            lVar8 = FUN_140186a80();
            if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(local_98 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(local_98 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
              FUN_148a36610(local_98,param_2);
            }
          }
          lVar11 = lVar11 + 8;
        } while ((longlong)iVar3 * 8 != lVar11);
      }
    }
    else {
      lVar8 = FUN_140186a80();
      lVar11 = *(longlong *)(param_1 + 0xf0);
      if ((((lVar11 == 0) || (lVar8 == 0)) || (lVar7 = *(longlong *)(lVar11 + 0x10), lVar7 == 0)) ||
         ((*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
           lVar8 + 0x30)))) goto LAB_1461f85e6;
      FUN_148a36610(lVar11,param_2);
    }
    if (lVar4 == 0) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar10 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      goto LAB_1461f8608;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x920);
    local_88[0] = *param_3;
    local_78 = param_3[2];
    param_3[2] = 0;
    local_68 = (undefined4)param_3[4];
    uStack_64 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_60 = (undefined4)param_3[5];
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_58 = (undefined4)param_3[6];
    uStack_54 = *(undefined4 *)((longlong)param_3 + 0x34);
    uStack_50 = (undefined4)param_3[7];
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0x3c);
    if (local_88[0] != 0) {
      *param_3 = 0;
    }
    FUN_148a37210(uVar9,(undefined8 *)(param_1 + 0x938),local_88);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar10 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  if (*param_3 != 0) {
    plVar10 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar10 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
LAB_1461f8614:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461f8822 FUN_1461f8822 body=540 status=ok
// SIG undefined FUN_1461f8822(void)

void FUN_1461f8822(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x16d) == '\0') {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14b526cc0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14b526e80;
    local_30[3] = param_1;
    if (DAT_14cb99c48 == (undefined8 *)0x0) {
      DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *DAT_14cb99c48 = 0;
      DAT_14cb99c48[1] = 0;
      DAT_14cb99c48[2] = 2;
    }
    local_40 = 0;
    local_38 = 0;
    FUN_1412f566c(&local_40,&local_30);
    FUN_1461f8a40(param_2,&local_40);
  }
  else {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_14b526cc0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar2;
    *local_30 = &PTR_FUN_14b526ef0;
    local_30[3] = param_1;
    if (DAT_14cb99c48 == (undefined8 *)0x0) {
      DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *DAT_14cb99c48 = 0;
      DAT_14cb99c48[1] = 0;
      DAT_14cb99c48[2] = 2;
    }
    local_50 = 0;
    local_48 = 0;
    FUN_1412f566c(&local_50,&local_30);
    FUN_1461f8b54(param_2,&local_50);
  }
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f8a40 FUN_1461f8a40 body=275 status=ok
// SIG undefined FUN_1461f8a40(void)

void FUN_1461f8a40(undefined8 *param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  vx_req_aux_get_capture_devices_create(&local_c0);
  if (*(int *)(param_1 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
  }
  local_38 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_b8,_Str,sVar1 & 0xffffffff,1);
  }
  uVar2 = vx_strdup(local_30);
  *(undefined8 *)(local_c0 + 0x30) = uVar2;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_d0 = 0;
  local_c8 = 0;
  FUN_1412f566c(&local_d0,param_2);
  FUN_1412f579e(local_c0,&local_d0);
  FUN_1449db362(param_2);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f8b54 FUN_1461f8b54 body=275 status=ok
// SIG undefined FUN_1461f8b54(void)

void FUN_1461f8b54(undefined8 *param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  vx_req_aux_get_render_devices_create(&local_c0);
  if (*(int *)(param_1 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
  }
  local_38 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_b8,_Str,sVar1 & 0xffffffff,1);
  }
  uVar2 = vx_strdup(local_30);
  *(undefined8 *)(local_c0 + 0x30) = uVar2;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_d0 = 0;
  local_c8 = 0;
  FUN_1412f566c(&local_d0,param_2);
  FUN_1412f579e(local_c0,&local_d0);
  FUN_1449db362(param_2);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f8c68 FUN_1461f8c68 body=293 status=ok
// SIG undefined FUN_1461f8c68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461f8c68(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  _DAT_14cb975b8 = 0;
  _DAT_14cb975c0 = 0;
  DAT_14cb97598 = 0;
  _DAT_14cb975a0 = 0;
  _DAT_14cb975c4 = 0xffffffff00000080;
  DAT_14cb975cc = 0;
  DAT_14cb975d8 = 0;
  DAT_14cb975e0 = 0;
  uVar4 = (ulonglong)(param_1[1] - *param_1) >> 4;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1461f8d8e(&DAT_14cb97598,uVar4 & 0xffffffff);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((DAT_14cb975e0 == 0) || (DAT_14cb975e0 < iVar2)) {
      DAT_14cb975e0 = iVar2;
      FUN_140906920(&DAT_14cb97598);
    }
  }
  puVar5 = (undefined4 *)*param_1;
  puVar1 = (undefined4 *)param_1[1];
  if (puVar5 != puVar1) {
    do {
      local_48 = *puVar5;
      uStack_44 = puVar5[1];
      uStack_40 = puVar5[2];
      uStack_3c = puVar5[3];
      FUN_140906722(&DAT_14cb97598,local_34,&local_48,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f8d8e FUN_1461f8d8e body=436 status=ok
// SIG undefined FUN_1461f8d8e(void)

void FUN_1461f8d8e(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1405357e8(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1403951a8(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x18 + -0x14);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        uVar3 = 0xffffffff;
        if (0 < *(int *)((longlong)param_1 + 0x34)) {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1461f8f42 FUN_1461f8f42 body=141 status=ok
// SIG undefined FUN_1461f8f42(void)

void FUN_1461f8f42(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x598);
  if (lVar1 != 0) {
    local_38 = FUN_141640b62;
    local_30 = 0;
    FUN_1461f8fd8(local_28);
    FUN_141646dc4(lVar1,local_28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1441c9614(param_1,1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f8fd8 FUN_1461f8fd8 body=428 status=ok
// SIG undefined FUN_1461f8fd8(void)

longlong * FUN_1461f8fd8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1461f90b8:
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b98c7f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1461f90b8;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b98c7f0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1461f9184 FUN_1461f9184 body=269 status=ok
// SIG undefined FUN_1461f9184(void)

undefined8 FUN_1461f9184(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_b0 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000000;
  uStack_b8 = 0x10000;
  uVar2 = FUN_1461f9292();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f9292 FUN_1461f9292 body=460 status=ok
// SIG undefined FUN_1461f9292(void)

undefined8 * FUN_1461f9292(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  ulonglong local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined2 *local_258;
  int local_250;
  longlong local_248 [68];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  uVar1 = FUN_1409ffe1d();
  local_260 = DAT_14c9a8628;
  FUN_1400021e4(&local_260,local_248);
  FUN_140ba7826(&local_258,L"GbxValue_",local_248);
  if (local_248[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cad40;
  puVar5 = local_258;
  if (local_250 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_268,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_288 = 0;
  uStack_280 = 0;
  local_290 = local_290 & 0xffffffffffffff00;
  local_298 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_268,0xc5);
  FUN_140282a3c(local_248);
  local_288 = 8;
  local_290 = 0x28;
  local_298 = 1;
  FUN_14086a4ba(uVar4,local_248,0,puVar2);
  FUN_140010906(local_248);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_144a5ab96();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  *puVar2 = &PTR_LAB_149e70e50;
  local_270 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_1446f2e62(puVar2,&local_270,param_1);
  if (local_258 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461f9460 FUN_1461f9460 body=104 status=ok
// SIG undefined FUN_1461f9460(void)

void FUN_1461f9460(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1461f9556();
    *(undefined8 *)(param_1 + 0x98) = 0;
    plVar3 = *(longlong **)(param_1 + 0xa0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001461f94bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1461f94c8 FUN_1461f94c8 body=9 status=ok
// SIG undefined FUN_1461f94c8(void)

void FUN_1461f94c8(longlong param_1)

{
  FUN_1461f94d2(param_1 + 0x10);
  return;
}



// FUNCTION 1461f94d2 FUN_1461f94d2 body=63 status=ok
// SIG undefined FUN_1461f94d2(void)

void FUN_1461f94d2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b008cf0;
  plVar2 = (longlong *)param_1[0xf];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1407e878c(param_1 + 0xc);
  FUN_1461f9512(param_1);
  return;
}



// FUNCTION 1461f9512 FUN_1461f9512 body=67 status=ok
// SIG undefined FUN_1461f9512(void)

void FUN_1461f9512(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b008d60;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461f9551. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1461f9556 FUN_1461f9556 body=244 status=ok
// SIG undefined FUN_1461f9556(void)

void FUN_1461f9556(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x30))();
  uVar5 = FUN_14479d2ce(param_1 + 0xb);
  plVar6 = (longlong *)FUN_14007a5e6(uVar5);
  if ((plVar6 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar6 + 0x110))(plVar6), lVar7 != 0)) {
    plVar6 = (longlong *)param_1[2];
    if (plVar6 == (longlong *)0x0) {
LAB_1461f960f:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)plVar6[1];
      do {
        if (iVar4 == 0) goto LAB_1461f960f;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar8);
      local_38 = param_1[1];
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_30 = plVar6;
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
    FUN_1461f964c(lVar7,&local_38);
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461f964c FUN_1461f964c body=372 status=ok
// SIG undefined FUN_1461f964c(void)

void FUN_1461f964c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  int local_88;
  uint local_84;
  int local_7c;
  uint local_78;
  int local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (undefined8 *)FUN_14621c130(*param_2);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_68 = *puVar3;
  local_60 = *(undefined4 *)(puVar3 + 1);
  FUN_1447715ec(&local_58,puVar3 + 2);
  FUN_140ac173c(&local_90,&local_68);
  uVar2 = (uint)local_90;
  if (local_88 != 0) {
    uVar2 = FUN_144a78877((ulonglong)local_90 & 0xffffffff);
  }
  if (local_7c != 0) {
    local_84 = FUN_144a78877(local_84);
  }
  plVar5 = (longlong *)(param_1 + 0x4d8);
  if (local_70 != 0) {
    local_78 = FUN_144a78877(local_78);
  }
  iVar1 = FUN_1410b645c(plVar5,local_84 ^ uVar2 ^ local_78,&local_90);
  if (iVar1 != -1) {
    lVar4 = *plVar5 + (longlong)iVar1 * 0x50;
    if ((lVar4 != 0) && ((longlong)iVar1 * 0x50 + *plVar5 != -0x28)) {
      local_90 = param_2;
      FUN_1461f97c2(lVar4 + 0x38);
      if ((*(int *)(lVar4 + 0x30) < 1) && (*(int *)(lVar4 + 0x40) < 1)) {
        FUN_140ac173c(&local_90,&local_68);
        FUN_14612a164(plVar5,&local_90);
      }
    }
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f97c2 FUN_1461f97c2 body=241 status=ok
// SIG undefined FUN_1461f97c2(void)

void FUN_1461f97c2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int local_4c;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    local_4c = 0;
    bVar5 = *plVar2 == *(longlong *)*param_2;
    iVar6 = 0;
    do {
      lVar10 = (longlong)iVar6;
      iVar4 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar8 = iVar6;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar7 = iVar4;
        if (lVar12 <= lVar11) break;
        lVar3 = *plVar9;
        iVar8 = iVar8 + 1;
        plVar9 = plVar9 + 2;
        iVar7 = iVar8;
      } while (bVar5 == (lVar3 == *(longlong *)*param_2));
      iVar4 = iVar7 - iVar6;
      if (bVar5 == false) {
        if (local_4c != iVar6) {
          memmove(plVar2 + (longlong)local_4c * 2,plVar2 + lVar10 * 2,(longlong)iVar4 << 4);
        }
        local_4c = local_4c + iVar4;
      }
      else {
        FUN_145c6b69c(plVar2 + lVar10 * 2,iVar4);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar6 = iVar7;
    } while (lVar11 < lVar12);
    *(int *)(param_1 + 1) = local_4c;
  }
  return;
}



// FUNCTION 1461f98b3 FUN_1461f98b3 body=506 status=ok
// SIG undefined FUN_1461f98b3(void)

void FUN_1461f98b3(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  code *local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar3 = 0;
  local_c8 = 0;
  FUN_14485c47a(&local_c8);
  local_c0 = (void *)0x0;
  local_b8 = *(int *)(param_2 + 1);
  lVar2 = (longlong)local_b8;
  pvVar1 = (void *)*param_2;
  if (lVar2 == 0) {
    local_b4 = 0;
  }
  else {
    FUN_1446dd670(&local_c0,local_b8,0);
    memcpy(local_c0,pvVar1,lVar2 * 2);
    iVar3 = local_b8;
  }
  pvVar1 = local_c0;
  local_88 = *param_3;
  *param_3 = 0;
  local_80 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_60 = FUN_143f00e0c;
  local_58 = FUN_143f00f0a;
  local_50 = FUN_143f00f8e;
  local_48 = FUN_143f0103c;
  local_a0 = local_c8;
  local_98 = (void *)0x0;
  local_90 = iVar3;
  if (iVar3 == 0) {
    local_8c = 0;
  }
  else {
    local_b0 = local_88;
    local_a8 = local_80;
    FUN_1446dd670(&local_98,iVar3,0);
    memcpy(local_98,pvVar1,(longlong)iVar3 * 2);
    local_88 = local_b0;
    local_80 = local_a8;
  }
  local_b0 = 0;
  local_a8 = 0;
  FUN_1401e7e86(local_f8,param_2);
  FUN_1461f9aae(local_f8,local_d8);
  bifrost::social::voice::vivox::genTokenJoin(*(undefined8 *)(param_1 + 0x2b8),local_d8,&local_a0);
  FUN_1401e7e48(local_f8);
  FUN_1449db362(&local_b0);
  if (local_c0 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_3);
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f9aae FUN_1461f9aae body=45 status=ok
// SIG undefined FUN_1461f9aae(void)

longlong * FUN_1461f9aae(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_14482e566();
  iVar1 = *(int *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x10);
  *param_2 = lVar2;
  param_2[1] = iVar1 + lVar2;
  return param_2;
}



// FUNCTION 1461f9adc FUN_1461f9adc body=257 status=ok
// SIG undefined FUN_1461f9adc(void)

void FUN_1461f9adc(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  float fVar6;
  
  lVar5 = param_1 + 0xf8;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  cVar4 = FUN_14486ea84(lVar5);
  if (cVar4 != '\0') {
    uVar2 = thunk_FUN_14008e0ae(lVar5);
    lVar3 = FUN_14008e0a4(uVar2);
    if (0.0001 < *(float *)(lVar3 + 200) - *(float *)(param_1 + 0x144)) {
      *(undefined1 *)(param_1 + 0x131) = 1;
      FUN_1461f9bde(param_1);
      fVar1 = *(float *)(param_1 + 0x144);
      uVar2 = thunk_FUN_14008e0ae(lVar5);
      lVar3 = FUN_14008e0a4(uVar2);
      fVar6 = *(float *)(lVar3 + 200);
      if (fVar1 <= *(float *)(lVar3 + 200)) {
        fVar6 = fVar1;
      }
      *(float *)(param_1 + 300) = fVar6;
      uVar2 = thunk_FUN_14008e0ae(lVar5);
      uVar2 = FUN_14008e0a4(uVar2);
      FUN_1409d461e(uVar2,fVar6,1);
      uVar2 = thunk_FUN_14008e0ae(lVar5);
      lVar5 = FUN_14008e0a4(uVar2);
      *(float *)(lVar5 + 0xc4) = fVar6;
      FUN_14020a6cc(lVar5 + 0xbc,1);
      return;
    }
  }
  return;
}



// FUNCTION 1461f9bde FUN_1461f9bde body=111 status=ok
// SIG undefined FUN_1461f9bde(void)

void FUN_1461f9bde(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x130) == '\x01') {
    cVar2 = FUN_14486ea84(param_1 + 0xf8);
    if (cVar2 != '\0') {
      fVar4 = *(float *)(param_1 + 0x144);
      if (*(float *)(param_1 + 0x144) <= *(float *)(param_1 + 0x128)) {
        fVar4 = *(float *)(param_1 + 0x128);
      }
      uVar1 = thunk_FUN_14008e0ae(param_1 + 0xf8);
      lVar3 = FUN_14008e0a4(uVar1);
      *(float *)(lVar3 + 0x34) = fVar4;
      FUN_14020a6cc(lVar3 + 0x2c,1);
      *(undefined1 *)(param_1 + 0x130) = 0;
    }
  }
  return;
}



// FUNCTION 1461f9c4e FUN_1461f9c4e body=148 status=ok
// SIG undefined FUN_1461f9c4e(void)

void FUN_1461f9c4e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"OnlineSubsystem",1);
  uVar2 = FUN_144a52528();
  plVar3 = (longlong *)FUN_1401e3324(uVar2,local_20);
  (**(code **)(*plVar3 + 0x80))(plVar3,DAT_14cb8e468);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_1461f9ce4();
    FUN_1400020a8(lVar1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f9ce4 FUN_1461f9ce4 body=102 status=ok
// SIG undefined FUN_1461f9ce4(void)

void FUN_1461f9ce4(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (DAT_14cbf4e48 != (longlong *)0x0) {
    (**(code **)(*DAT_14cbf4e48 + 0x150))();
    plVar3 = DAT_14cbf4e50;
    DAT_14cbf4e48 = (longlong *)0x0;
    if (DAT_14cbf4e50 != (longlong *)0x0) {
      DAT_14cbf4e50 = (longlong *)0x0;
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
                    /* WARNING: Could not recover jumptable at 0x0001461f9d3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1461f9d4a FUN_1461f9d4a body=9 status=ok
// SIG undefined FUN_1461f9d4a(void)

void FUN_1461f9d4a(longlong param_1)

{
  FUN_1461f9d54(param_1 + 0x10);
  return;
}



// FUNCTION 1461f9d54 FUN_1461f9d54 body=1228 status=ok
// SIG undefined FUN_1461f9d54(void)

void FUN_1461f9d54(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba4a940;
  param_1[0xe] = &PTR_FUN_14ba4abb0;
  FUN_144760e21(param_1[0x4d],*(undefined4 *)(param_1 + 0x4e));
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  plVar3 = (longlong *)param_1[0x47];
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
  plVar3 = (longlong *)param_1[0x45];
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
  plVar3 = (longlong *)param_1[0x41];
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
  plVar3 = (longlong *)param_1[0x3f];
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
  plVar3 = (longlong *)param_1[0x3d];
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
  plVar3 = (longlong *)param_1[0x3b];
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
  plVar3 = (longlong *)param_1[0x39];
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
  plVar3 = (longlong *)param_1[0x37];
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
  plVar3 = (longlong *)param_1[0x35];
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
  plVar3 = (longlong *)param_1[0x33];
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
  plVar3 = (longlong *)param_1[0x31];
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
  plVar3 = (longlong *)param_1[0x2f];
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
  plVar3 = (longlong *)param_1[0x2a];
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
  plVar3 = (longlong *)param_1[0x28];
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
  plVar3 = (longlong *)param_1[0x26];
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
  plVar3 = (longlong *)param_1[0x24];
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
  plVar3 = (longlong *)param_1[0x22];
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
  plVar3 = (longlong *)param_1[0x20];
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
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_145bfbe50(param_1);
  return;
}



// FUNCTION 1461fa220 FUN_1461fa220 body=244 status=ok
// SIG undefined FUN_1461fa220(void)

undefined8 *
FUN_1461fa220(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_LAB_14b4f0350;
  param_1[4] = &PTR_LAB_14b4f0378;
  FUN_14485c47a(param_1 + 6);
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14b4f0600;
  param_1[4] = &PTR_FUN_14b4f0628;
  *(undefined4 *)(param_1 + 9) = param_3;
  param_1[10] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],_Src,(longlong)iVar1 * 2);
  }
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_1461fa314(param_1 + 0xc,param_5);
  *(undefined4 *)(param_1 + 0xe) = 3;
  FUN_1449db362(param_5);
  return param_1;
}



// FUNCTION 1461fa314 FUN_1461fa314 body=124 status=ok
// SIG undefined FUN_1461fa314(void)

void FUN_1461fa314(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fa392 FUN_1461fa392 body=115 status=ok
// SIG undefined FUN_1461fa392(void)

int FUN_1461fa392(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1461fa406(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_3 * 0xf8);
  memmove((void *)((longlong)_Src + 0xf8),_Src,(ulonglong)(uint)(iVar1 - param_3) * 0xf8);
  FUN_1461fa49c((longlong)param_3 * 0xf8 + *param_1,param_2);
  return param_3;
}



// FUNCTION 1461fa406 FUN_1461fa406 body=150 status=ok
// SIG undefined FUN_1461fa406(void)

void FUN_1461fa406(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf8)) {
      uVar5 = uVar4 / 0xf8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1461fa49c FUN_1461fa49c body=660 status=ok
// SIG undefined FUN_1461fa49c(void)

void FUN_1461fa49c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_2 + 0x38) = 0;
  param_1[0x40] = param_2[0x40];
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined8 *)(param_2 + 0x60) = 0;
  param_1[0x68] = param_2[0x68];
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_2 + 0x78) = 0;
  param_1[0x80] = param_2[0x80];
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  *(undefined8 *)(param_2 + 0xe8) = 0;
  param_1[0xf0] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  param_1[0xf0] = param_2[0xf0];
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  return;
}



// FUNCTION 1461fa730 FUN_1461fa730 body=394 status=ok
// SIG undefined FUN_1461fa730(void)

void FUN_1461fa730(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  code *local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined1 *)(param_1 + 0x18) = 1;
  lVar3 = FUN_1414354ce();
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1e0) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x1e0) + 0x68), lVar1 != 0)) {
    FUN_1415b584a(lVar1,&local_5c,*(undefined4 *)(param_1 + 0x30));
    if (-1 < (short)local_5c) {
      iVar2 = FUN_140b9fef0(lVar1,&local_5c,0);
      if (iVar2 < 0) {
        if ((*(longlong *)(lVar3 + 0x1e0) != 0) &&
           (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x1e0) + 0x30), lVar3 != 0)) {
          local_58 = FUN_145c70bb4;
          local_50 = 0;
          FUN_1461fa936(local_48,param_1);
          FUN_145a0b054(lVar3 + 0x40,&local_58,local_48);
          FUN_1449db362(local_48);
          *(code **)(param_1 + 0x60) = local_58;
          local_58 = FUN_14164526c;
          local_50 = 0;
          FUN_1461faae2(local_48,param_1,&local_58);
          FUN_1461fa8bc(lVar3,&local_58,local_48);
          *(code **)(param_1 + 0x50) = local_58;
          FUN_1449db362(local_48);
          *(undefined1 *)(param_1 + 0x18) = 0;
          iVar2 = FUN_14164740e(lVar3,&local_5c);
          if (iVar2 < 0) {
            *(undefined4 *)(param_1 + 0x80) = 1;
            *(undefined1 *)(param_1 + 0x18) = 1;
          }
        }
      }
      else {
        FUN_143f2b85c(param_1,local_5c);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fa8bc FUN_1461fa8bc body=120 status=ok
// SIG undefined FUN_1461fa8bc(void)

undefined8 FUN_1461fa8bc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_145840954(&local_30,param_3);
  FUN_145840a30(param_1 + 0x298,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fa936 FUN_1461fa936 body=428 status=ok
// SIG undefined FUN_1461fa936(void)

longlong * FUN_1461fa936(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1461faa16:
    *puVar5 = &PTR_LAB_14b3fdf50;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ebc70;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1461faa16;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b3fdf50;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ebc70;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1461faae2 FUN_1461faae2 body=428 status=ok
// SIG undefined FUN_1461faae2(void)

longlong * FUN_1461faae2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1461fabc2:
    *puVar5 = &PTR_LAB_14b434d90;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ebce0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1461fabc2;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b434d90;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ebce0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1461fac8e FUN_1461fac8e body=267 status=ok
// SIG undefined FUN_1461fac8e(void)

undefined8 FUN_1461fac8e(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_b0 = 0;
  local_e8 = local_20;
  local_d0 = 0x400000003d;
  uVar2 = FUN_1461fad9a();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fad9a FUN_1461fad9a body=472 status=ok
// SIG undefined FUN_1461fad9a(void)

undefined8 * FUN_1461fad9a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = FUN_1409ffe1d();
  local_280 = DAT_14c9aa5a8;
  FUN_1400021e4(&local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cc4a0;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446e6c6a();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e62a10;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140017cac(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461faf74 FUN_1461faf74 body=270 status=ok
// SIG undefined FUN_1461faf74(void)

undefined8 FUN_1461faf74(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = FUN_14068e11a;
  uVar2 = FUN_1461fb083();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fb083 FUN_1461fb083 body=472 status=ok
// SIG undefined FUN_1461fb083(void)

undefined8 * FUN_1461fb083(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = FUN_1409ffe1d();
  local_280 = DAT_14c9a8988;
  FUN_1400021e4(&local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cb2c0;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fb25c FUN_1461fb25c body=270 status=ok
// SIG undefined FUN_1461fb25c(void)

undefined8 FUN_1461fb25c(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = FUN_14016b782;
  uVar2 = FUN_1461fb36b();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fb36b FUN_1461fb36b body=472 status=ok
// SIG undefined FUN_1461fb36b(void)

undefined8 * FUN_1461fb36b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = FUN_1409ffe1d();
  local_280 = DAT_14c9a8aa8;
  FUN_1400021e4(&local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cb420;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fb544 FUN_1461fb544 body=270 status=ok
// SIG undefined FUN_1461fb544(void)

undefined8 FUN_1461fb544(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000011;
  local_b0 = FUN_14081d0ea;
  uVar2 = FUN_1461fb653();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fb653 FUN_1461fb653 body=472 status=ok
// SIG undefined FUN_1461fb653(void)

undefined8 * FUN_1461fb653(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = FUN_1409ffe1d();
  local_280 = DAT_14c9a8bc8;
  FUN_1400021e4(&local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cb580;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_14010a2ea();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149eaa2d0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_1400182dc(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fb82c FUN_1461fb82c body=270 status=ok
// SIG undefined FUN_1461fb82c(void)

undefined8 FUN_1461fb82c(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000011;
  local_b0 = FUN_142b4754c;
  uVar2 = FUN_1461fb93b();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fb93b FUN_1461fb93b body=472 status=ok
// SIG undefined FUN_1461fb93b(void)

undefined8 * FUN_1461fb93b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = FUN_1409ffe1d();
  local_280 = DAT_14c9a8ce8;
  FUN_1400021e4(&local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cb6e0;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_14010a2ea();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149eaa2d0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_1400182dc(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fbb14 FUN_1461fbb14 body=270 status=ok
// SIG undefined FUN_1461fbb14(void)

undefined8 FUN_1461fbb14(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000011;
  local_b0 = FUN_142b47bc4;
  uVar2 = FUN_1461fbc23();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fbc23 FUN_1461fbc23 body=472 status=ok
// SIG undefined FUN_1461fbc23(void)

undefined8 * FUN_1461fbc23(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = FUN_1409ffe1d();
  local_280 = DAT_14c9a94c8;
  FUN_1400021e4(&local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cb840;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_14010a2ea();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149eaa2d0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_1400182dc(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fbdfc FUN_1461fbdfc body=270 status=ok
// SIG undefined FUN_1461fbdfc(void)

undefined8 FUN_1461fbdfc(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_1462b1d30;
  uVar2 = FUN_1461fbf0b();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fbf0b FUN_1461fbf0b body=472 status=ok
// SIG undefined FUN_1461fbf0b(void)

undefined8 * FUN_1461fbf0b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = FUN_1409ffe1d();
  local_280 = DAT_14c9a9168;
  FUN_1400021e4(&local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cbc60;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fc0e4 FUN_1461fc0e4 body=270 status=ok
// SIG undefined FUN_1461fc0e4(void)

undefined8 FUN_1461fc0e4(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_1462b1d36;
  uVar2 = FUN_1461fc1f3();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fc1f3 FUN_1461fc1f3 body=472 status=ok
// SIG undefined FUN_1461fc1f3(void)

undefined8 * FUN_1461fc1f3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = FUN_1409ffe1d();
  local_280 = DAT_14c9a95e8;
  FUN_1400021e4(&local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cbdc0;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fc3cc FUN_1461fc3cc body=270 status=ok
// SIG undefined FUN_1461fc3cc(void)

undefined8 FUN_1461fc3cc(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = FUN_140bf8bc4;
  uVar2 = FUN_1461fc4db();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fc4db FUN_1461fc4db body=472 status=ok
// SIG undefined FUN_1461fc4db(void)

undefined8 * FUN_1461fc4db(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = FUN_1409ffe1d();
  local_280 = DAT_14c9aa008;
  FUN_1400021e4(&local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cbf20;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fc6b4 FUN_1461fc6b4 body=270 status=ok
// SIG undefined FUN_1461fc6b4(void)

undefined8 FUN_1461fc6b4(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_14592907e;
  uVar2 = FUN_1461fc7c3();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fc7c3 FUN_1461fc7c3 body=472 status=ok
// SIG undefined FUN_1461fc7c3(void)

undefined8 * FUN_1461fc7c3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = FUN_1409ffe1d();
  local_280 = DAT_14c9aa128;
  FUN_1400021e4(&local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cc080;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fc99c FUN_1461fc99c body=270 status=ok
// SIG undefined FUN_1461fc99c(void)

undefined8 FUN_1461fc99c(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_1459290bc;
  uVar2 = FUN_1461fcaab();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fcaab FUN_1461fcaab body=472 status=ok
// SIG undefined FUN_1461fcaab(void)

undefined8 * FUN_1461fcaab(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = FUN_1409ffe1d();
  local_280 = DAT_14c9aab48;
  FUN_1400021e4(&local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cc1e0;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fcc84 FUN_1461fcc84 body=270 status=ok
// SIG undefined FUN_1461fcc84(void)

undefined8 FUN_1461fcc84(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000010;
  local_b0 = FUN_14081d0ea;
  uVar2 = FUN_1461fcd93();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fcd93 FUN_1461fcd93 body=472 status=ok
// SIG undefined FUN_1461fcd93(void)

undefined8 * FUN_1461fcd93(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = FUN_1409ffe1d();
  local_280 = DAT_14c9aa488;
  FUN_1400021e4(&local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1cc340;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446ef9c4();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71910;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_14001742c(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fcf6c FUN_1461fcf6c body=84 status=ok
// SIG undefined FUN_1461fcf6c(void)

undefined8 * FUN_1461fcf6c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b61b850;
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  FUN_1461fcfc0(param_1 + 0x38);
  FUN_14129efe4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461fcfc0 FUN_1461fcfc0 body=102 status=ok
// SIG undefined FUN_1461fcfc0(void)

void FUN_1461fcfc0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  FUN_144a2da94(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461fd00b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1461fd026 FUN_1461fd026 body=736 status=ok
// SIG undefined FUN_1461fd026(void)

void FUN_1461fd026(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  void *local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70 [2];
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x69) == '\x01') {
    FUN_1402815f4(param_1,&local_58);
    lVar5 = local_58[0x86];
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0xf0));
    plVar1 = local_50;
    *(int *)(lVar5 + 0xe8) = *(int *)(lVar5 + 0xe8) + 1;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    plVar1 = (longlong *)(lVar5 + 0x30);
    iVar4 = *(int *)(lVar5 + 0x3c);
    FUN_145976519(*(undefined8 *)(lVar5 + 0x30),*(undefined4 *)(lVar5 + 0x38));
    *(undefined4 *)(lVar5 + 0x38) = 0;
    if ((iVar4 < 0) && (*(int *)(lVar5 + 0x3c) != 0)) {
      FUN_148e53e60(plVar1);
    }
    *(int *)(lVar5 + 0x40) = *(int *)(lVar5 + 0x40) + 1;
    plVar8 = (longlong *)FUN_1461fd307(param_2);
    if ((longlong)(int)plVar8[1] != 0) {
      local_78 = (longlong)(int)plVar8[1] * 0x48;
      lVar11 = *plVar8 + 0x28;
      local_80 = param_1 + 0xa8;
      do {
        plVar8 = (longlong *)(lVar11 + -0x20);
        cVar7 = FUN_1442869c4(param_1,*(undefined4 *)(lVar11 + -0x28),plVar8);
        if (cVar7 == '\0') {
          *(int *)(lVar5 + 0x40) = *(int *)(lVar5 + 0x40) + 1;
          FUN_140009b9a(&local_58,lVar11 + -0x10);
          FUN_140009b9a(local_70,lVar11);
          iVar4 = *(int *)(lVar5 + 0x38);
          *(uint *)(lVar5 + 0x38) = iVar4 + 1U;
          if (*(uint *)(lVar5 + 0x3c) < iVar4 + 1U) {
            FUN_145cff1e2(plVar1,iVar4);
          }
          lVar6 = *plVar1;
          lVar9 = (longlong)iVar4 * 0x70;
          lVar3 = lVar6 + lVar9;
          *(undefined8 *)(lVar6 + lVar9) = *(undefined8 *)(lVar11 + -0x28);
          *(undefined4 *)(lVar6 + 8 + lVar9) = 0;
          *(undefined8 *)(lVar6 + 0x10 + lVar9) = 0;
          iVar4 = *(int *)(lVar11 + -0x18);
          local_88 = *(void **)(lVar11 + -0x20);
          *(int *)(lVar6 + 0x18 + lVar9) = iVar4;
          if ((longlong)iVar4 == 0) {
            *(undefined4 *)(lVar3 + 0x1c) = 0;
          }
          else {
            puVar10 = (undefined8 *)(lVar6 + lVar9 + 0x10);
            FUN_1446dd670(puVar10,iVar4,0);
            memcpy((void *)*puVar10,local_88,(longlong)iVar4 * 2);
          }
          *(undefined4 *)(lVar3 + 0x20) = 0;
          FUN_14023423e(lVar3 + 0x28,local_70);
          *(undefined4 *)(lVar3 + 0x38) = 0;
          FUN_14023423e(lVar3 + 0x40,&local_58);
          *(undefined4 *)(lVar3 + 0x50) = 0;
          *(undefined8 *)(lVar3 + 0x58) = 0;
          iVar4 = *(int *)(lVar11 + 0x18);
          local_88 = *(void **)(lVar11 + 0x10);
          *(int *)(lVar3 + 0x60) = iVar4;
          if ((longlong)iVar4 == 0) {
            *(undefined4 *)(lVar3 + 100) = 0;
          }
          else {
            FUN_1446dd670((undefined8 *)(lVar3 + 0x58),iVar4,0);
            memcpy(*(void **)(lVar3 + 0x58),local_88,(longlong)iVar4 * 2);
          }
          *(undefined4 *)(lVar3 + 0x68) = 0;
          if (local_70[0] != (longlong *)0x0) {
            (**(code **)(*local_70[0] + 0x10))();
          }
          if (local_58 != (longlong *)0x0) {
            (**(code **)(*local_58 + 0x10))();
          }
        }
        else {
          local_5c = *(undefined4 *)(lVar11 + -0x28);
          local_58 = (longlong *)&local_5c;
          local_50 = plVar8;
          FUN_148e5407c(local_80,local_70,&local_58);
          FUN_148e4a140(param_1,*(undefined8 *)(lVar11 + -0x28),plVar8);
        }
        lVar11 = lVar11 + 0x48;
        local_78 = local_78 + -0x48;
      } while (local_78 != 0);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0xf0));
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461fd307 FUN_1461fd307 body=8 status=ok
// SIG undefined FUN_1461fd307(void)

longlong FUN_1461fd307(longlong param_1)

{
  return param_1 + 0x2d8;
}



// FUNCTION 1461fd310 FUN_1461fd310 body=63 status=ok
// SIG undefined FUN_1461fd310(void)

undefined1 FUN_1461fd310(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1461fd350(param_2,param_3);
    param_3 = param_3 + 0x138;
    param_2 = param_2 + 0x138;
  }
  return 1;
}



// FUNCTION 1461fd350 FUN_1461fd350 body=217 status=ok
// SIG undefined FUN_1461fd350(void)

longlong FUN_1461fd350(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  FUN_140cae46a();
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  FUN_140cae504(param_1 + 0x58,param_2 + 0x58);
  FUN_140cae59e(param_1 + 0xa8,param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0xfc);
  uVar2 = *(undefined4 *)(param_2 + 0x100);
  uVar3 = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  *(undefined8 *)(param_1 + 0x105) = *(undefined8 *)(param_2 + 0x105);
  FUN_1461fd42a(param_1 + 0x110,param_2 + 0x110);
  lVar5 = *(longlong *)(param_2 + 0x120);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 0x120);
    }
  }
  *(longlong *)(param_1 + 0x120) = lVar5;
  *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x130) == '\x01') {
      *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
      uVar4 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x130) != '\x01') {
        return param_1;
      }
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 0x130) = uVar4;
  }
  return param_1;
}



// FUNCTION 1461fd42a FUN_1461fd42a body=93 status=ok
// SIG undefined FUN_1461fd42a(void)

undefined8 * FUN_1461fd42a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a36824(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bbd60e(param_1,iVar1);
      FUN_148bbd680(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1461fd488 FUN_1461fd488 body=360 status=ok
// SIG undefined FUN_1461fd488(void)

longlong * FUN_1461fd488(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  byte local_62;
  int local_60;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14105aa76(DAT_14c872ce0,L"/Script/UnrealEd.ProjectPackagingSettings",
                L"LocalizationTargetsToChunk",param_1,&DAT_14c872af8);
  lVar4 = FUN_1461fd5f0();
  if (0 < *(int *)(lVar4 + 8)) {
    iVar1 = (int)param_1[1];
    lVar10 = (longlong)iVar1;
    if (lVar10 != 0) {
      lVar2 = *param_1;
      local_62 = FUN_144a23846(lVar4,lVar2);
      local_60 = 0;
      iVar7 = 0;
      do {
        lVar5 = (longlong)iVar7;
        iVar11 = iVar7 + 1;
        if (iVar7 + 1 < iVar1) {
          iVar11 = iVar1;
        }
        lVar6 = lVar5 * 0x10;
        lVar12 = lVar2 + 0x10 + lVar6;
        iVar8 = iVar7;
        do {
          lVar5 = lVar5 + 1;
          iVar9 = iVar11;
          if (lVar10 <= lVar5) break;
          bVar3 = FUN_144a23846(lVar4,lVar12);
          iVar8 = iVar8 + 1;
          lVar12 = lVar12 + 0x10;
          iVar9 = iVar8;
        } while ((local_62 & 1) == bVar3);
        iVar11 = iVar9 - iVar7;
        if ((local_62 & 1) == 0) {
          if (local_60 != iVar7) {
            memmove((void *)((longlong)local_60 * 0x10 + lVar2),(void *)(lVar6 + lVar2),
                    (longlong)iVar11 << 4);
          }
          local_60 = local_60 + iVar11;
        }
        else {
          FUN_1447a1747(lVar6 + lVar2,iVar11);
        }
        iVar7 = iVar9;
        local_62 = local_62 ^ 1;
      } while (lVar5 < lVar10);
      *(int *)(param_1 + 1) = local_60;
    }
  }
  return param_1;
}



// FUNCTION 1461fd5f0 FUN_1461fd5f0 body=386 status=ok
// SIG undefined FUN_1461fd5f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1461fd5f0(void)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844ed0) {
    FUN_144b3d300(&DAT_14c844ed0);
    if (DAT_14c844ed0 == -1) {
      DAT_14c844ec0 = 0;
      _DAT_14c844ec8 = 0;
      atexit(FUN_142766200);
      _Init_thread_footer(&DAT_14c844ed0);
    }
  }
  if (DAT_14c844ed4 == '\0') {
    local_48 = &DAT_14c872ce8;
    FUN_14105aa76(DAT_14c872ce0,L"Internationalization",L"DisabledLocalizationTargets",
                  &DAT_14c844ec0);
    local_38 = (void *)0x0;
    uStack_30 = 0;
    local_48 = &DAT_14c872af8;
    FUN_14105aa76(DAT_14c872ce0,L"Internationalization",L"DisabledLocalizationTargets",&local_38);
    uVar2 = _DAT_14c844ec8;
    lVar3 = (longlong)(int)(uint)uStack_30;
    if (lVar3 != 0) {
      iVar1 = DAT_14c844ec8;
      lVar4 = (longlong)DAT_14c844ec8;
      _DAT_14c844ec8 = CONCAT44(DAT_14c844ecc,DAT_14c844ec8 + (uint)uStack_30);
      if ((uint)(DAT_14c844ecc - iVar1) < (uint)uStack_30) {
        FUN_1447a1bd6(&DAT_14c844ec0,uVar2 & 0xffffffff);
      }
      memmove((void *)(lVar4 * 0x10 + DAT_14c844ec0),local_38,lVar3 << 4);
      uStack_30 = uStack_30 & 0xffffffff00000000;
    }
    FUN_1447a1747(local_38,0);
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
    DAT_14c844ed4 = '\x01';
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return &DAT_14c844ec0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fd774 FUN_1461fd774 body=270 status=ok
// SIG undefined FUN_1461fd774(void)

undefined8 FUN_1461fd774(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_145929040;
  uVar2 = FUN_1461fd883();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fd883 FUN_1461fd883 body=475 status=ok
// SIG undefined FUN_1461fd883(void)

undefined8 * FUN_1461fd883(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined1 local_280 [8];
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = thunk_FUN_1409ffe1d();
  FUN_1457c4932(local_280,0x21);
  FUN_1400021e4(local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1c7ab0;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fda60 FUN_1461fda60 body=270 status=ok
// SIG undefined FUN_1461fda60(void)

undefined8 FUN_1461fda60(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_1458b62a0;
  uVar2 = FUN_1461fdb6f();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fdb6f FUN_1461fdb6f body=475 status=ok
// SIG undefined FUN_1461fdb6f(void)

undefined8 * FUN_1461fdb6f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined1 local_280 [8];
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = thunk_FUN_1409ffe1d();
  FUN_1457c4932(local_280,0x1e);
  FUN_1400021e4(local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1c7c10;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fdd4c FUN_1461fdd4c body=270 status=ok
// SIG undefined FUN_1461fdd4c(void)

undefined8 FUN_1461fdd4c(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_1459366d4;
  uVar2 = FUN_1461fde5b();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fde5b FUN_1461fde5b body=475 status=ok
// SIG undefined FUN_1461fde5b(void)

undefined8 * FUN_1461fde5b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined1 local_280 [8];
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = thunk_FUN_1409ffe1d();
  FUN_1457c4932(local_280,0x14);
  FUN_1400021e4(local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1c7d70;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fe038 FUN_1461fe038 body=270 status=ok
// SIG undefined FUN_1461fe038(void)

undefined8 FUN_1461fe038(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_1462b1210;
  uVar2 = FUN_1461fe147();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fe147 FUN_1461fe147 body=475 status=ok
// SIG undefined FUN_1461fe147(void)

undefined8 * FUN_1461fe147(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined1 local_280 [8];
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = thunk_FUN_1409ffe1d();
  FUN_1457c4932(local_280,0x17);
  FUN_1400021e4(local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1c8020;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fe324 FUN_1461fe324 body=270 status=ok
// SIG undefined FUN_1461fe324(void)

undefined8 FUN_1461fe324(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_1462b1944;
  uVar2 = FUN_1461fe433();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fe433 FUN_1461fe433 body=475 status=ok
// SIG undefined FUN_1461fe433(void)

undefined8 * FUN_1461fe433(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined1 local_280 [8];
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = thunk_FUN_1409ffe1d();
  FUN_1457c4932(local_280,0xd);
  FUN_1400021e4(local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1c9330;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fe610 FUN_1461fe610 body=270 status=ok
// SIG undefined FUN_1461fe610(void)

undefined8 FUN_1461fe610(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_1462b194a;
  uVar2 = FUN_1461fe71f();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fe71f FUN_1461fe71f body=475 status=ok
// SIG undefined FUN_1461fe71f(void)

undefined8 * FUN_1461fe71f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined1 local_280 [8];
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = thunk_FUN_1409ffe1d();
  FUN_1457c4932(local_280,0x11);
  FUN_1400021e4(local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1c9490;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461fe8fc FUN_1461fe8fc body=270 status=ok
// SIG undefined FUN_1461fe8fc(void)

undefined8 FUN_1461fe8fc(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_1464225e8;
  uVar2 = FUN_1461fea0b();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fea0b FUN_1461fea0b body=475 status=ok
// SIG undefined FUN_1461fea0b(void)

undefined8 * FUN_1461fea0b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined1 local_280 [8];
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = thunk_FUN_1409ffe1d();
  FUN_1457c4932(local_280,9);
  FUN_1400021e4(local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14aba2c80;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461febe8 FUN_1461febe8 body=270 status=ok
// SIG undefined FUN_1461febe8(void)

undefined8 FUN_1461febe8(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_145929194;
  uVar2 = FUN_1461fecf7();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fecf7 FUN_1461fecf7 body=475 status=ok
// SIG undefined FUN_1461fecf7(void)

undefined8 * FUN_1461fecf7(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined1 local_280 [8];
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = thunk_FUN_1409ffe1d();
  FUN_1457c4932(local_280,0xc);
  FUN_1400021e4(local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14ac8d430;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461feed4 FUN_1461feed4 body=270 status=ok
// SIG undefined FUN_1461feed4(void)

undefined8 FUN_1461feed4(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_14654c4ac;
  uVar2 = FUN_1461fefe3();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fefe3 FUN_1461fefe3 body=475 status=ok
// SIG undefined FUN_1461fefe3(void)

undefined8 * FUN_1461fefe3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined1 local_280 [8];
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = thunk_FUN_1409ffe1d();
  FUN_1457c4932(local_280,0x1f);
  FUN_1400021e4(local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14b3fab90;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461ff1c0 FUN_1461ff1c0 body=270 status=ok
// SIG undefined FUN_1461ff1c0(void)

undefined8 FUN_1461ff1c0(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_14654e9d4;
  uVar2 = FUN_1461ff2cf();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ff2cf FUN_1461ff2cf body=475 status=ok
// SIG undefined FUN_1461ff2cf(void)

undefined8 * FUN_1461ff2cf(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined1 local_280 [8];
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = thunk_FUN_1409ffe1d();
  FUN_1457c4932(local_280,0x13);
  FUN_1400021e4(local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14b401780;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461ff4ac FUN_1461ff4ac body=270 status=ok
// SIG undefined FUN_1461ff4ac(void)

undefined8 FUN_1461ff4ac(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_146550e18;
  uVar2 = FUN_1461ff5bb();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ff5bb FUN_1461ff5bb body=475 status=ok
// SIG undefined FUN_1461ff5bb(void)

undefined8 * FUN_1461ff5bb(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined1 local_280 [8];
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = thunk_FUN_1409ffe1d();
  FUN_1457c4932(local_280,0x20);
  FUN_1400021e4(local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14b406aa0;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461ff798 FUN_1461ff798 body=270 status=ok
// SIG undefined FUN_1461ff798(void)

undefined8 FUN_1461ff798(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_146556d2c;
  uVar2 = FUN_1461ff8a7();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ff8a7 FUN_1461ff8a7 body=475 status=ok
// SIG undefined FUN_1461ff8a7(void)

undefined8 * FUN_1461ff8a7(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined1 local_280 [8];
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = thunk_FUN_1409ffe1d();
  FUN_1457c4932(local_280,0x16);
  FUN_1400021e4(local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14b417ef0;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_14689c22e(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461ffa84 FUN_1461ffa84 body=270 status=ok
// SIG undefined FUN_1461ffa84(void)

undefined8 FUN_1461ffa84(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x4000000019;
  local_b0 = &LAB_1459293d8;
  uVar2 = FUN_1461ffb93();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ffb93 FUN_1461ffb93 body=475 status=ok
// SIG undefined FUN_1461ffb93(void)

undefined8 * FUN_1461ffb93(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_290;
  undefined8 local_288;
  undefined1 local_280 [8];
  undefined2 *local_278;
  int local_270;
  longlong local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar1 = thunk_FUN_1409ffe1d();
  FUN_1457c4932(local_280,0x1a);
  FUN_1400021e4(local_280,local_268);
  FUN_140ba7826(&local_278,L"GbxValue_",local_268);
  if (local_268[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14b41ec20;
  puVar5 = local_278;
  if (local_270 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_288,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b0 = local_2b0 & 0xffffffffffffff00;
  local_2b8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_288,0xc5);
  FUN_140282a3c(local_268);
  local_2a8 = 8;
  local_2b0 = 0x28;
  local_2b8 = 1;
  FUN_14086a4ba(uVar4,local_268,0,puVar2);
  FUN_140010906(local_268);
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar1 = FUN_1446dcc8c();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_LAB_149e71fe0;
  local_290 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar2,&local_290,param_1);
  if (local_278 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1461ffd70 FUN_1461ffd70 body=549 status=ok
// SIG undefined FUN_1461ffd70(void)

void FUN_1461ffd70(longlong param_1,byte param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  byte local_98;
  longlong *local_88;
  longlong *local_80;
  undefined **local_78;
  longlong *local_70;
  longlong *local_68;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = (longlong *)FUN_144a7c8f0(*(undefined8 *)(param_1 + 0x38));
  lVar3 = plVar4[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *plVar4;
    lVar5 = 0;
    do {
      plVar4 = *(longlong **)(lVar2 + lVar5);
      (**(code **)(*plVar4 + 0x350))(plVar4,&local_78);
      if ((&DAT_149fc1b6e)[local_60] == '\x01') {
        plVar6 = local_70;
        if (local_68 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_68 + 1) = (int)local_68[1] + 1;
          UNLOCK();
          plVar7 = local_68;
        }
      }
      else {
        plVar7 = (longlong *)0x0;
        plVar6 = (longlong *)0x0;
      }
      local_78 = &PTR_FUN_14a5af930;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_78 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
      if (plVar6 != (longlong *)0x0) {
        local_88 = plVar6;
        local_80 = plVar7;
        if (plVar7 == (longlong *)0x0) {
          local_98 = param_2 & 1;
          FUN_141647a44(param_1,&local_78,&local_88,0);
        }
        else {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          local_98 = param_2 & 1;
          FUN_141647a44(param_1,&local_78,&local_88,0);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar7 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
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
        }
        FUN_1461fff96(param_1,(int)plVar4[0x1c]);
        plVar4 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_70 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        param_2 = 0;
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar7 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461fff96 FUN_1461fff96 body=306 status=ok
// SIG undefined FUN_1461fff96(void)

void FUN_1461fff96(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_a8 [32];
  code **local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_6c;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_6c = param_2;
  FUN_1447cbafe(param_1 + 0x178,local_68,&local_6c,0);
  if (((*(longlong *)(param_1 + 0x168) == 0) || (*(longlong *)(param_1 + 0x170) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x170) + 8) < 1)) {
    uVar3 = FUN_1401cb356();
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b4f0bf0;
    local_68[0] = FUN_143f3f5a0;
    local_88 = local_68;
    local_40 = param_1;
    FUN_1401cbba4(uVar3,&local_80,L"FGbxParty::UpdateMemberCustomProperties",0);
    *(undefined8 *)(param_1 + 0x168) = local_80;
    local_80 = 0;
    plVar2 = *(longlong **)(param_1 + 0x170);
    *(longlong **)(param_1 + 0x170) = local_78;
    local_78 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_78 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
      }
    }
    if (local_68[0] != (code *)0x0) {
      pppuVar4 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar4 = &local_48;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462000ca FUN_1462000ca body=148 status=ok
// SIG undefined FUN_1462000ca(void)

void FUN_1462000ca(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141647fae(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146200160 FUN_146200160 body=26 status=ok
// SIG undefined FUN_146200160(void)

undefined8 FUN_146200160(longlong param_1,undefined8 param_2)

{
  FUN_14620017a(param_1 + 0x18);
  return param_2;
}



// FUNCTION 14620017a FUN_14620017a body=347 status=ok
// SIG undefined FUN_14620017a(void)

undefined8 * FUN_14620017a(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb85c50 == (longlong *)0x0 || DAT_14cb85c58 == 0) ||
     (cVar3 = (**(code **)(*DAT_14cb85c50 + 0x30))(), cVar3 == '\0')) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_14b416000;
    puVar4[4] = 0;
    puVar4[5] = 0;
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14b4178d0;
    plVar5[2] = (longlong)puVar4;
    local_28 = plVar5;
    if (puVar4 == (undefined8 *)0x0) {
      local_30 = (undefined8 *)0x0;
    }
    else {
      local_30 = puVar4;
      if (plVar5 == (longlong *)0x0) {
        puVar4[2] = puVar4;
        local_28 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        puVar4[2] = puVar4;
        if ((longlong *)puVar4[3] != plVar5) {
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
          plVar2 = (longlong *)puVar4[3];
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))();
            }
          }
          puVar4[3] = plVar5;
        }
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
  else {
    plVar5 = DAT_14cb85c50;
    if (DAT_14cb85c58 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,&local_30);
  }
  *param_2 = local_30;
  param_2[1] = local_28;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1462002d6 FUN_1462002d6 body=96 status=ok
// SIG undefined FUN_1462002d6(void)

ulonglong FUN_1462002d6(longlong param_1)

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
LAB_146200319:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146200319;
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



// FUNCTION 146200336 FUN_146200336 body=211 status=ok
// SIG undefined FUN_146200336(void)

void FUN_146200336(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_3;
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 0x168) == param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
  }
  else {
    FUN_14620041c(local_38,param_1);
    FUN_145c81c2c(lVar3 + 0x130,local_40,local_38);
    FUN_1449db362(local_38);
    lVar3 = *param_3;
    lVar4 = param_3[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_1 + 0x178);
    *(longlong *)(param_1 + 0x170) = lVar3;
    *(longlong *)(param_1 + 0x178) = lVar4;
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
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620041c FUN_14620041c body=423 status=ok
// SIG undefined FUN_14620041c(void)

longlong * FUN_14620041c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1462004f3:
    *puVar3 = &PTR_LAB_14b419ce0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b4b0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = &LAB_146206976;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1462004f3;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b419ce0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b4b0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_146206976;
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
  return param_1;
}



// FUNCTION 1462005c4 FUN_1462005c4 body=277 status=ok
// SIG undefined FUN_1462005c4(void)

undefined8 FUN_1462005c4(undefined8 param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  longlong local_28;
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400021e4(param_1,&local_e8);
  _Str = L"";
  if ((int)local_e0 != 0) {
    _Str = local_e8;
  }
  local_28 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_20 = (wchar_t *)0x0;
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_a8,_Str,sVar1 & 0xffffffff,1);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_c8 = 0;
  local_c0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = local_20;
  local_d0 = 0x400000003f;
  uStack_b8 = 0xf00000d000000000;
  local_b0 = &LAB_1462b1204;
  uVar2 = FUN_1462006da();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462006da FUN_1462006da body=470 status=ok
// SIG undefined FUN_1462006da(void)

undefined8 * FUN_1462006da(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  ulonglong local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  ulonglong local_280;
  undefined8 local_278;
  undefined1 local_270 [8];
  undefined2 *local_268;
  int local_260;
  longlong local_258 [69];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  uVar1 = thunk_FUN_1409ffe1d();
  FUN_1457c4932(local_270,10);
  FUN_1400021e4(local_270,local_258);
  FUN_140ba7826(&local_268,L"GbxValue_",local_258);
  if (local_258[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0x800000028;
  *puVar2 = &PTR_FUN_14a1c7950;
  puVar5 = local_268;
  if (local_260 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_278,puVar5,1);
  uVar3 = FUN_1446f4bba();
  local_298 = 0;
  uStack_290 = 0;
  local_2a0 = local_2a0 & 0xffffffffffffff00;
  local_2a8 = 0;
  uVar4 = FUN_140010cf7(uVar3,uVar1,local_278,0xc5);
  FUN_140282a3c(local_258);
  local_298 = 8;
  local_2a0 = 0x28;
  local_2a8 = 1;
  FUN_14086a4ba(uVar4,local_258,0,puVar2);
  FUN_140010906(local_258);
  puVar2 = (undefined8 *)FUN_14001cc68(0x80,0);
  uVar1 = FUN_1446ef920();
  FUN_14145874c(puVar2,0,uVar1);
  puVar2[0xd] = 0;
  *puVar2 = &PTR_LAB_149e62650;
  puVar2[0xf] = 0;
  local_280 = uVar4 | 1;
  if (((uVar4 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar4 & 0xfffffffffffffffe);
  }
  FUN_14001785e(puVar2,&local_280,param_1);
  if (local_268 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1462008b2 FUN_1462008b2 body=156 status=ok
// SIG undefined FUN_1462008b2(void)

bool FUN_1462008b2(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146200950 FUN_146200950 body=278 status=ok
// SIG undefined FUN_146200950(void)

void FUN_146200950(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined7 uStack_57;
  longlong *local_50;
  PSRWLOCK local_48;
  int local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402815f4(param_1,&local_58);
  lVar3 = *(longlong *)(CONCAT71(uStack_57,local_58) + 0x3e0);
  local_48 = (PSRWLOCK)(lVar3 + 0xc0);
  local_40 = 1;
  AcquireSRWLockExclusive(local_48);
  *(int *)(lVar3 + 0xb8) = *(int *)(lVar3 + 0xb8) + 1;
  local_30 = 1;
  local_38 = lVar3;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if (*(int *)(local_38 + 0x10) == param_2) {
    iVar5 = 1;
    if (*(int *)(local_38 + 0x14) != 0) goto LAB_1462009de;
  }
  else {
    iVar5 = *(int *)(local_38 + 0x14) + 1;
  }
  *(int *)(local_38 + 0x10) = param_2;
  *(int *)(local_38 + 0x14) = iVar5;
LAB_1462009de:
  local_58 = (undefined1)param_2;
  uVar4 = FUN_1405c673d();
  FUN_146200a7a(param_1,&local_48,uVar4,&local_58);
  if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000146200a27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146200a7a FUN_146200a7a body=273 status=ok
// SIG undefined FUN_146200a7a(void)

void FUN_146200a7a(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar2 = FUN_1402a1246(lVar2);
      if (lVar2 != 0) {
        if (*param_4 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
        uVar4 = FUN_1405c673d();
        uVar1 = FUN_148cef1ee(uVar4,*(undefined1 *)(lVar2 + 0x710),*param_4);
        FUN_14130ca8a(param_3,&local_30,uVar1,1);
        lVar2 = *(longlong *)(param_2 + 0x10);
        if (local_30 == *(longlong *)(lVar2 + 0xac)) {
          if (*(int *)(lVar2 + 0xb4) != 0) goto LAB_146200b7f;
          iVar5 = 1;
        }
        else {
          iVar5 = *(int *)(lVar2 + 0xb4) + 1;
        }
        *(longlong *)(lVar2 + 0xac) = local_30;
        *(int *)(lVar2 + 0xb4) = iVar5;
      }
    }
  }
LAB_146200b7f:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146200bac FUN_146200bac body=47 status=ok
// SIG undefined FUN_146200bac(void)

void FUN_146200bac(undefined8 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_145ce326a(param_1);
    FUN_145ce28e0(param_1);
  }
  FUN_1416481fc(param_1,param_2);
  return;
}



// FUNCTION 146200bdc FUN_146200bdc body=34 status=ok
// SIG undefined FUN_146200bdc(void)

void FUN_146200bdc(undefined8 param_1,undefined8 param_2)

{
  FUN_146200bfe();
  FUN_141648666(param_1,param_2);
  return;
}



// FUNCTION 146200bfe FUN_146200bfe body=387 status=ok
// SIG undefined FUN_146200bfe(void)

void FUN_146200bfe(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_48 [16];
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_144729dda(&DAT_14cb97f10);
  if (cVar1 == '\0') {
    FUN_1446ddc76(&local_20,"Shift",1);
    uVar2 = FUN_144a52528();
    plVar3 = (longlong *)FUN_1405f3750(uVar2,local_20,0);
    if (plVar3 != (longlong *)0x0) {
      FUN_1459340c4(&local_98);
      FUN_141648345(&local_a8);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      local_38 = local_a8;
      uStack_30 = uStack_a0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = &DAT_14c872ce8;
      FUN_1449da20c(DAT_14c872ce0,L"Shift",L"GameName");
      if (CONCAT44(uStack_94,local_98) != 0) {
        FUN_1400020a8();
      }
      local_98 = (undefined4)local_a8;
      uStack_94 = local_a8._4_4_;
      uStack_90 = (undefined4)uStack_a0;
      uStack_8c = uStack_a0._4_4_;
      FUN_141648437();
      if (CONCAT44(uStack_84,local_88) != 0) {
        FUN_1400020a8();
      }
      local_88 = (undefined4)local_a8;
      uStack_84 = local_a8._4_4_;
      uStack_80 = (undefined4)uStack_a0;
      uStack_7c = uStack_a0._4_4_;
      FUN_14020fad6(local_48,&DAT_14b4f8230);
      uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,&local_98);
      FUN_14485c47a(&DAT_14cb97f10,uVar2);
      FUN_145aa5f9a(&local_98);
    }
  }
  FUN_14479d2ce(&DAT_14cb97f10);
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146200d82 FUN_146200d82 body=962 status=ok
// SIG undefined FUN_146200d82(void)

ulonglong FUN_146200d82(longlong param_1,int param_2,char param_3,char param_4)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 local_54;
  undefined4 local_4c;
  char local_48;
  byte local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar4 == '\0') goto LAB_146200ea0;
  }
  uVar8 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      lVar5 = (longlong)param_2;
      puVar6 = (undefined1 *)(*(longlong *)(param_1 + 0x68) + lVar5 * 0x28);
      local_68 = *puVar6;
      local_64 = *(undefined4 *)(puVar6 + 4);
      uStack_60 = *(undefined4 *)(puVar6 + 8);
      uStack_5c = *(undefined4 *)(puVar6 + 0xc);
      uStack_58 = *(undefined4 *)(puVar6 + 0x10);
      local_54 = *(undefined8 *)(puVar6 + 0x14);
      local_48 = puVar6[0x20];
      if (local_48 == '\x01') {
        local_4c = *(undefined4 *)(puVar6 + 0x1c);
      }
      bVar1 = puVar6[0x24];
      local_44 = bVar1;
      FUN_146201146(param_1 + 0x18);
      if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x20 + lVar5 * 0x28) == '\x01') {
        *(undefined1 *)(*(longlong *)(param_1 + 0x68) + lVar5 * 0x28 + 0x20) = 0;
      }
      FUN_1462011f2(param_1 + 0x68);
      uVar2 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar2) {
        uVar9 = (ulonglong)uVar2;
        uVar10 = uVar2;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x24) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar3 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar3);
      }
      if (((int)uVar7 < (int)uVar2) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x24) <= param_2)) {
        FUN_1476b8a76(param_1 + 0xa0);
      }
joined_r0x000146201129:
      if ((bVar1 & 1) != 0) {
        FUN_1462012da(&local_64);
      }
      unaff_RBP = 0;
      goto LAB_146200ea0;
    }
    unaff_RBP = CONCAT71(uVar8,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x24 + (longlong)param_2 * 0x28) & 1) == 0)
    goto LAB_146200ea0;
    puVar6 = (undefined1 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x28);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xa8);
    lVar5 = *(longlong *)(param_1 + 0xa0);
    uVar7 = 0;
    if (0 < (int)uVar2) {
      uVar7 = 0;
      uVar9 = (ulonglong)uVar2;
      uVar10 = uVar2;
      do {
        uVar9 = uVar9 >> 1;
        uVar11 = (uint)uVar9 + (int)uVar7;
        if (*(int *)(lVar5 + (ulonglong)uVar11 * 0x24) < param_2) {
          uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
        }
        bVar3 = 1 < uVar10;
        uVar10 = (uint)uVar9;
      } while (bVar3);
    }
    if ((((int)uVar7 < (int)uVar2) && (*(int *)(lVar5 + uVar7 * 0x24) <= param_2)) &&
       (lVar5 + uVar7 * 0x24 != -4)) {
      FUN_1462012da();
      uVar2 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar2) {
        uVar9 = (ulonglong)uVar2;
        uVar10 = uVar2;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x24) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar3 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar3);
      }
      unaff_RBP = CONCAT71(uVar8,1);
      if (((int)uVar7 < (int)uVar2) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x24) <= param_2)) {
        FUN_1476b8a76(param_1 + 0xa0);
      }
      goto LAB_146200ea0;
    }
    unaff_RBP = CONCAT71(uVar8,1);
    if (param_4 == '\0') {
      lVar5 = (longlong)param_2;
      puVar6 = (undefined1 *)(*(longlong *)(param_1 + 0x68) + lVar5 * 0x28);
      bVar1 = puVar6[0x24];
      if ((bVar1 & 2) == 0) {
        local_68 = *puVar6;
        local_64 = *(undefined4 *)(puVar6 + 4);
        uStack_60 = *(undefined4 *)(puVar6 + 8);
        uStack_5c = *(undefined4 *)(puVar6 + 0xc);
        uStack_58 = *(undefined4 *)(puVar6 + 0x10);
        local_54 = *(undefined8 *)(puVar6 + 0x14);
        local_48 = puVar6[0x20];
        if (local_48 == '\x01') {
          local_4c = *(undefined4 *)(puVar6 + 0x1c);
        }
        local_44 = bVar1;
        FUN_146201146(param_1 + 0x18);
        if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x20 + lVar5 * 0x28) == '\x01') {
          *(undefined1 *)(*(longlong *)(param_1 + 0x68) + lVar5 * 0x28 + 0x20) = 0;
        }
        FUN_1462011f2(param_1 + 0x68);
        uVar2 = *(uint *)(param_1 + 0xa8);
        uVar7 = 0;
        if (0 < (int)uVar2) {
          uVar7 = 0;
          uVar9 = (ulonglong)uVar2;
          uVar10 = uVar2;
          do {
            uVar9 = uVar9 >> 1;
            uVar11 = (uint)uVar9 + (int)uVar7;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x24) < param_2) {
              uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
            }
            bVar3 = 1 < uVar10;
            uVar10 = (uint)uVar9;
          } while (bVar3);
        }
        if (((int)uVar7 < (int)uVar2) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x24) <= param_2)) {
          FUN_1476b8a76(param_1 + 0xa0);
        }
        goto joined_r0x000146201129;
      }
      if ((bVar1 & 1) == 0) goto LAB_146200ea0;
    }
    else {
      if (param_4 != '\x01') goto LAB_146200ea0;
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x24 + (longlong)param_2 * 0x28);
      if ((bVar1 & 1) == 0) goto LAB_146200ea0;
      puVar6 = (undefined1 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x28);
      puVar6[0x24] = bVar1 | 2;
    }
  }
  FUN_1462012da(puVar6 + 4);
LAB_146200ea0:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 146201146 FUN_146201146 body=81 status=ok
// SIG undefined FUN_146201146(void)

void FUN_146201146(longlong *param_1,byte param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(byte *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_146201198(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146201198 FUN_146201198 body=89 status=ok
// SIG undefined FUN_146201198(void)

void FUN_146201198(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_146201266();
  return;
}



// FUNCTION 1462011f2 FUN_1462011f2 body=116 status=ok
// SIG undefined FUN_1462011f2(void)

void FUN_1462011f2(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 146201266 FUN_146201266 body=116 status=ok
// SIG undefined FUN_146201266(void)

void FUN_146201266(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 1462012da FUN_1462012da body=531 status=ok
// SIG undefined FUN_1462012da(void)

void FUN_1462012da(undefined4 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *param_1;
  local_2c = param_1[1];
  lVar2 = FUN_14479d2ce();
  if (lVar2 == 0) goto LAB_146201479;
  lVar3 = FUN_144a7757c();
  if ((((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) || (*(longlong *)(lVar2 + 0x1f0) == 0)) ||
     ((*(char *)(lVar2 + 0x152) == '\x02' || (*(char *)(lVar2 + 0x152) == '\x04'))))
  goto LAB_146201479;
  local_30 = param_1[2];
  local_2c = param_1[3];
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
LAB_14620149a:
    local_30 = param_1[2];
    local_2c = param_1[3];
    lVar2 = FUN_14479d2ce();
    if (lVar2 == 0) goto LAB_146201479;
    lVar3 = FUN_1449db7f2();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_146201479;
  }
  else {
    lVar4 = FUN_1449db7f2();
    if (((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         != lVar4 + 0x30)) || (lVar2 = FUN_140334a94(lVar3,lVar2), lVar2 == 0)) goto LAB_14620149a;
    plVar1 = *(longlong **)(lVar2 + 0x448);
    if ((DAT_14c950c29 == '\x01') && (plVar1 != (longlong *)0x0)) {
      FUN_1456cec3c(plVar1);
LAB_1462013e2:
      local_30 = param_1[4];
      local_2c = param_1[5];
      lVar3 = FUN_14479d2ce();
      if (lVar3 == 0) {
LAB_1462014d9:
        lVar3 = 0;
      }
      else {
        lVar4 = FUN_144a6c4d8();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_1462014d9;
      }
      local_40 = 0;
      local_3c = 1;
      local_38 = 0x40000000;
      (**(code **)(*plVar1 + 0x780))(plVar1,lVar3);
      *(byte *)(plVar1 + 0x5cb) = *(byte *)(plVar1 + 0x5cb) & 0x7f;
    }
    else if (plVar1 != (longlong *)0x0) goto LAB_1462013e2;
    lVar2 = FUN_144a7ba4c(lVar2);
    if (lVar2 == 0) goto LAB_146201479;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(lVar2 + 0xb8) = *(undefined1 *)(param_1 + 6);
  }
LAB_146201479:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462014f6 FUN_1462014f6 body=752 status=ok
// SIG undefined FUN_1462014f6(void)

undefined8 * FUN_1462014f6(undefined8 *param_1)

{
  FUN_1412202b0();
  *param_1 = &PTR_FUN_14af07350;
  param_1[6] = &PTR_FUN_14af07630;
  param_1[7] = &PTR_FUN_14af07650;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3ff00000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x3ff0000000000000;
  param_1[0x1d] = 0x3ff0000000000000;
  param_1[0x1e] = 0x3ff0000000000000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x7fefffffffffffff;
  param_1[0x21] = 0x7fefffffffffffff;
  param_1[0x22] = 0x7fefffffffffffff;
  param_1[0x23] = 0xffefffffffffffff;
  param_1[0x24] = 0xffefffffffffffff;
  param_1[0x25] = 0xffefffffffffffff;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined2 *)(param_1 + 99) = 0;
  param_1[0x66] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x68] = &PTR_LAB_14af11820;
  param_1[0x69] = param_1;
  param_1[100] = &LAB_1485145c2;
  param_1[0x6e] = 0;
  param_1[0x70] = &PTR_LAB_14af11840;
  param_1[0x71] = param_1;
  param_1[0x6c] = &LAB_1485145ea;
  param_1[0x80] = 0;
  param_1[0x82] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f1) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  param_1[0x89] = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  param_1[0xab] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xac) = 1;
  return param_1;
}



// FUNCTION 1462017e6 FUN_1462017e6 body=178 status=ok
// SIG undefined FUN_1462017e6(void)

uint FUN_1462017e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint unaff_EBP;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1462018b4(param_1,&local_48,param_2);
  if (local_48 != (longlong *)0x0) {
    unaff_EBP = (**(code **)(*local_48 + 0x18))(local_48,param_3);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (local_48 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_EBP & 0xffffff01;
}



// FUNCTION 1462018b4 FUN_1462018b4 body=175 status=ok
// SIG undefined FUN_1462018b4(void)

void FUN_1462018b4(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x98);
    lVar3 = (longlong)*(int *)(param_1 + 0xa0) << 4;
    do {
      if ((((*(int *)(param_1 + 0x14) == param_3[3] &&
             (*(int *)(param_1 + 0x10) == param_3[2] &&
             (*(int *)(param_1 + 0xc) == param_3[1] && *(int *)(param_1 + 8) == *param_3))) &&
           (lVar1 = *plVar2, *(int *)(lVar1 + 0x50) == param_3[4])) &&
          (*(int *)(lVar1 + 0x54) == param_3[5])) &&
         (((*(int *)(lVar1 + 0x58) == param_3[6] && (*(int *)(lVar1 + 0x5c) == param_3[7])) &&
          (*(longlong *)(lVar1 + 0x60) == *(longlong *)(param_3 + 8))))) {
        if (plVar2 != (longlong *)0x0) {
          *param_2 = lVar1;
          lVar3 = plVar2[1];
          param_2[1] = lVar3;
          if (lVar3 == 0) {
            return;
          }
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          return;
        }
        break;
      }
      plVar2 = plVar2 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 146201964 FUN_146201964 body=279 status=ok
// SIG undefined FUN_146201964(void)

void FUN_146201964(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = param_1 + 0x19;
  lVar2 = FUN_14479d2ce(plVar1);
  if (lVar2 != param_2) {
    FUN_14485c47a(plVar1,param_2);
    FUN_144729dda(plVar1);
    lVar2 = (**(code **)(*param_1 + 800))(param_1,param_1 + 0xe);
    if (lVar2 == 0) {
      lVar2 = FUN_14479d2ce(plVar1);
      FUN_146201a7c(local_50);
      plVar1 = local_38;
      local_48 = DAT_14cb27698;
      if (lVar2 == 0) {
        local_40 = 0xffffffff;
      }
      else {
        local_40 = *(undefined4 *)(lVar2 + 0x100);
      }
      if (local_38 != DAT_14cb276a0) {
        local_38 = DAT_14cb276a0;
        if (DAT_14cb276a0 != (longlong *)0x0) {
          (**(code **)(*DAT_14cb276a0 + 8))();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
      local_30 = DAT_14cb276a8;
      local_28 = local_28 | 1;
      (**(code **)(*param_1 + 0x318))(param_1,local_50);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146201a7c FUN_146201a7c body=425 status=ok
// SIG undefined FUN_146201a7c(void)

longlong * FUN_146201a7c(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar3 = (longlong *)FUN_14032f648();
  lVar5 = plVar3[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar5 = plVar3[0x22];
  }
  lVar7 = lVar5 + 0x90;
  lVar4 = FUN_14479d2ce(lVar7);
  if (lVar4 == 0) {
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar4 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar4 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(lVar7,lVar4);
        if (lVar4 == 0) goto LAB_146201baa;
      }
      else {
        uVar1 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(lVar7,lVar4);
        }
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_146201b09;
    }
  }
  else {
LAB_146201b09:
    lVar5 = FUN_144a797b2();
    if ((((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) && (lVar5 = FUN_1411f02a2(), lVar5 != 0)) &&
       (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
      lVar7 = 0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        lVar7 = lVar4;
      }
      *param_1 = lVar7;
      if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      goto LAB_146201b67;
    }
  }
LAB_146201baa:
  *param_1 = 0;
LAB_146201b67:
  param_1[1] = DAT_14caa8578;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  plVar6 = (longlong *)FUN_140e82300();
  plVar3 = (longlong *)*plVar6;
  param_1[3] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(int *)(param_1 + 4) = (int)plVar6[1];
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  return param_1;
}



// FUNCTION 146201c30 FUN_146201c30 body=750 status=ok
// SIG undefined FUN_146201c30(void)

undefined8 * FUN_146201c30(undefined8 *param_1)

{
  int iVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14acb0850;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  FUN_140056680(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x51] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 100;
  *(undefined1 *)((longlong)param_1 + 0x2f4) = 1;
  param_1[0x5f] = 0x402000003f800000;
  *(undefined4 *)(param_1 + 0x60) = 0x8000;
  *(undefined2 *)((longlong)param_1 + 0x304) = 0;
  param_1[0x61] = 1;
  param_1[0x62] = 0x20000040000;
  *(undefined4 *)(param_1 + 99) = 4;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0x1000000514;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x80;
  *(undefined1 *)(param_1 + 0x65) = 1;
  *(undefined4 *)((longlong)param_1 + 0x32a) = 0x1400000;
  param_1[0x66] = 0x4000000;
  *(undefined4 *)(param_1 + 0x67) = 0x80;
  memset(param_1 + 0x68,0,0x120);
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 2;
  FUN_1456afa32(&local_50,L"WWISEROOT");
  iVar1 = local_48 + -1;
  if (local_48 == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 5,local_50,iVar1);
  *(undefined1 *)(param_1 + 0x8c) = 0;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146201f20 FUN_146201f20 body=34 status=ok
// SIG undefined FUN_146201f20(void)

void FUN_146201f20(undefined8 param_1,undefined8 param_2)

{
  FUN_14123bd7e();
  FUN_146201f42(param_1,param_2);
  return;
}



// FUNCTION 146201f42 FUN_146201f42 body=130 status=ok
// SIG undefined FUN_146201f42(void)

void FUN_146201f42(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  code *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_28 = FUN_148e75982;
      local_20 = 0;
      FUN_146201fc6(param_1,param_2,param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146201fc6 FUN_146201fc6 body=271 status=ok
// SIG undefined FUN_146201fc6(void)

void FUN_146201fc6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = (code *)*param_4;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_14164950e(param_2,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_40 = DAT_14cb92c50;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_40);
  if (lVar4 != 0) {
    local_40 = FUN_140ed4b7e;
    local_38 = 0;
    local_48 = &local_40;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462020d6 FUN_1462020d6 body=127 status=ok
// SIG undefined FUN_1462020d6(void)

void FUN_1462020d6(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_145da38cf(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_148e36114(param_1,0);
  }
  FUN_14025a15c(param_1 + 2,0);
  FUN_140b96410(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  if (*(int *)(param_1 + 7) != *(int *)((longlong)param_1 + 100)) {
    FUN_14620228c(param_1 + 6);
    FUN_146202156(param_1 + 6);
  }
  *(undefined1 *)((longlong)param_1 + 0x15c) = 1;
  return;
}



// FUNCTION 146202156 FUN_146202156 body=309 status=ok
// SIG undefined FUN_146202156(void)

void FUN_146202156(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
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
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54 * 0x20;
      FUN_1456d172d(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
      if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620228c FUN_14620228c body=325 status=ok
// SIG undefined FUN_14620228c(void)

void FUN_14620228c(longlong *param_1)

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



// FUNCTION 1462023d2 FUN_1462023d2 body=98 status=ok
// SIG undefined FUN_1462023d2(void)

undefined4 * FUN_1462023d2(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  param_1[4] = param_2[4];
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  uVar2 = *(undefined8 *)(param_2 + 6);
  lVar3 = *(longlong *)(param_2 + 8);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 8);
  *(undefined8 *)(param_1 + 6) = uVar2;
  *(longlong *)(param_1 + 8) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_146202434(param_1 + 10,param_2 + 10);
  return param_1;
}



// FUNCTION 146202434 FUN_146202434 body=93 status=ok
// SIG undefined FUN_146202434(void)

undefined8 * FUN_146202434(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141506615(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148851c24(param_1,iVar1);
      FUN_148851c96(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146202492 FUN_146202492 body=234 status=ok
// SIG undefined FUN_146202492(void)

void FUN_146202492(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  lVar6 = *(longlong *)(param_1 + 0x3f8);
  if (lVar6 != 0) {
    iVar3 = *(int *)(lVar6 + 0x40);
    if ((longlong)iVar3 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x38);
      lVar8 = 0;
      do {
        lVar4 = *(longlong *)(lVar6 + lVar8);
        FUN_1416496fc(param_1,lVar4,*(longlong *)(param_1 + 0x3f8) + 0x18,lVar4 + 0x10,0);
        lVar8 = lVar8 + 0x10;
      } while ((longlong)iVar3 * 0x10 != lVar8);
    }
    uVar7 = 0;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      lVar6 = FUN_14119d4d6();
      uVar7 = 0;
      if (lVar6 != 0) {
        uVar7 = *(undefined4 *)(lVar6 + 0xe0);
      }
    }
    FUN_1462029ae(param_1,uVar7,**(undefined8 **)(param_1 + 0x3f8),&DAT_14cb97800);
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    plVar5 = *(longlong **)(param_1 + 0x400);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x400) = 0;
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
    FUN_146202586(param_1);
    return;
  }
  return;
}



// FUNCTION 14620257c FUN_14620257c body=9 status=ok
// SIG undefined FUN_14620257c(void)

void FUN_14620257c(longlong param_1)

{
  FUN_146202762(param_1 + 0x10);
  return;
}



// FUNCTION 146202586 FUN_146202586 body=224 status=ok
// SIG undefined FUN_146202586(void)

void FUN_146202586(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((*(longlong *)(param_1 + 0x3f8) != 0) || (*(int *)(param_1 + 0x3f0) < 1)) {
    return;
  }
  plVar2 = (longlong *)(param_1 + 1000);
  uVar4 = *(undefined8 *)*plVar2;
  plVar5 = (longlong *)((undefined8 *)*plVar2)[1];
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x3f8) = uVar4;
    plVar6 = *(longlong **)(param_1 + 0x400);
    if (plVar6 == (longlong *)0x0) goto LAB_1462025df;
    *(undefined8 *)(param_1 + 0x400) = 0;
LAB_146202629:
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1462025df;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar5 = plVar6;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x3f8) = uVar4;
    plVar6 = *(longlong **)(param_1 + 0x400);
    if (plVar5 != plVar6) {
      *(longlong **)(param_1 + 0x400) = plVar5;
      if (plVar6 == (longlong *)0x0) goto LAB_1462025df;
      goto LAB_146202629;
    }
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1462025df;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_1462025df:
  FUN_1462026fe(plVar2);
  FUN_146202666(plVar2);
  FUN_141649aec(param_1);
  return;
}



// FUNCTION 146202666 FUN_146202666 body=62 status=ok
// SIG undefined FUN_146202666(void)

void FUN_146202666(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1462026a4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1462026a4 FUN_1462026a4 body=89 status=ok
// SIG undefined FUN_1462026a4(void)

ulonglong FUN_1462026a4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1462026fe FUN_1462026fe body=99 status=ok
// SIG undefined FUN_1462026fe(void)

void FUN_1462026fe(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  longlong *plVar3;
  int iVar4;
  
  _Dst = (void *)*param_1;
  plVar3 = *(longlong **)((longlong)_Dst + 8);
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
  iVar4 = 0;
  if (*(int *)(param_1 + 1) + -1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(*(int *)(param_1 + 1) + -1) << 4);
    iVar4 = *(int *)(param_1 + 1) + -1;
  }
  *(int *)(param_1 + 1) = iVar4;
  return;
}



// FUNCTION 146202762 FUN_146202762 body=415 status=ok
// SIG undefined FUN_146202762(void)

void FUN_146202762(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0xa0) != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0xa8) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0xa0);
    local_20 = *(longlong *)(param_1 + 0xa8);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    plVar2 = *(longlong **)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0xa8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x50);
  FUN_146202912(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146202912 FUN_146202912 body=73 status=ok
// SIG undefined FUN_146202912(void)

void FUN_146202912(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14620295c FUN_14620295c body=9 status=ok
// SIG undefined FUN_14620295c(void)

void FUN_14620295c(longlong param_1)

{
  FUN_146202966(param_1 + 0x10);
  return;
}



// FUNCTION 146202966 FUN_146202966 body=72 status=ok
// SIG undefined FUN_146202966(void)

void FUN_146202966(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001462029aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1462029ae FUN_1462029ae body=490 status=ok
// SIG undefined FUN_1462029ae(void)

undefined8 FUN_1462029ae(undefined8 param_1,undefined4 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  undefined8 **local_88;
  longlong local_78;
  longlong *plStack_70;
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_3 + 0x10))(param_3,&local_78);
  FUN_1446f470e(&local_50,L"SHIFT",1);
  if ((local_78 == local_50) && (lVar10 = FUN_14119d510(param_1,param_2), lVar10 != 0)) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,2,0x10);
    local_58 = 2;
    *local_60 = &PTR_LAB_14b4f3a00;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar13;
    ppuVar12 = &PTR_FUN_14b4f04b0;
    *local_60 = &PTR_FUN_14b4f04b0;
    plStack_70 = (longlong *)param_3[2];
    if (plStack_70 == (longlong *)0x0) {
LAB_146202b3e:
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      bVar14 = true;
    }
    else {
      uVar7 = *(uint *)(plStack_70 + 1);
      do {
        if (uVar7 == 0) goto LAB_146202b3e;
        ppuVar12 = (undefined **)(ulonglong)(uVar7 + 1);
        LOCK();
        uVar4 = *(uint *)(plStack_70 + 1);
        bVar14 = uVar7 == uVar4;
        if (bVar14) {
          *(uint *)(plStack_70 + 1) = uVar7 + 1;
          uVar4 = uVar7;
        }
        uVar7 = uVar4;
        UNLOCK();
      } while (!bVar14);
      local_78 = param_3[1];
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
      bVar14 = false;
    }
    plVar5 = plStack_70;
    uVar8 = FUN_145829596(ppuVar12,&local_78);
    uVar9 = FUN_14119d564(param_1);
    local_88 = &local_60;
    FUN_141649595(lVar10,uVar9,uVar8,param_4);
    plVar2 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (!bVar14) {
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 146202b9a FUN_146202b9a body=113 status=ok
// SIG undefined FUN_146202b9a(void)

ulonglong FUN_146202b9a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146202bee:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146202bee;
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
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 146202c0c FUN_146202c0c body=342 status=ok
// SIG undefined FUN_146202c0c(void)

longlong FUN_146202c0c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14144f736(param_1 + 0x40,&DAT_14cbca388,0);
  lVar3 = FUN_146202d62(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x531) == '\x01') {
    (**(code **)(*param_1 + 0x450))(param_1,0);
  }
  FUN_14144f736(param_1 + 0x40,&DAT_14cbca388,lVar3 != 0);
  if (param_1[6] != 0) {
    lVar1 = *(longlong *)(param_1[6] + 0x2a0);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) {
      return lVar3;
    }
    if (*(int *)(lVar1 + 0x380) != 3) {
      FUN_1446efa72((longlong *)(lVar1 + 0x378),0,3,0x10);
      *(undefined4 *)(lVar1 + 0x380) = 3;
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x378);
    *puVar2 = &PTR_LAB_14b971490;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    puVar2[2] = lVar4;
    *puVar2 = &PTR_FUN_14b971420;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = FUN_140de7ba2;
    *(undefined4 *)(puVar2 + 5) = 0;
  }
  return lVar3;
}



// FUNCTION 146202d62 FUN_146202d62 body=97 status=ok
// SIG undefined FUN_146202d62(void)

void FUN_146202d62(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar1 + 0x48))(plVar1,&local_24);
  FUN_14164a60a(param_1,local_24,param_2,0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146202dc4 FUN_146202dc4 body=446 status=ok
// SIG undefined FUN_146202dc4(void)

void FUN_146202dc4(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110 [2];
  undefined **local_100;
  ulonglong *local_f8;
  byte local_d6;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = param_4;
  memset(&local_100,0,0x90);
  FUN_144869430(&local_100);
  local_70 = 0;
  local_100 = &PTR_FUN_149e1e590;
  local_60 = 0;
  local_68 = &local_58;
  FUN_144a69558(&local_100,1);
  (*(code *)local_100[0x1e])(&local_100,0);
  local_100 = &PTR_FUN_149e1e330;
  (**(code **)(*(longlong *)*param_2 + 0x80))((longlong *)*param_2,local_110,1);
  puVar1 = (undefined8 *)*local_f8 + 1;
  if ((undefined8 *)local_f8[1] < puVar1) {
    if ((local_d6 & 2) == 0) {
      (*(code *)local_100[0x2e])(&local_100,&local_48,8);
    }
    else {
      FUN_146821949(&local_100,&local_48);
    }
  }
  else {
    local_48 = *(undefined8 *)*local_f8;
    *local_f8 = (ulonglong)puVar1;
  }
  FUN_14021219d(&local_100,local_110);
  local_118 = param_5;
  FUN_146202f84(*(undefined8 *)(param_1 + 0x30 + (ulonglong)(param_3 != '\0') * 0x10),0x40,local_58,
                (longlong)(int)uStack_50);
  if (local_110[0] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(&local_100);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146202f84 FUN_146202f84 body=705 status=ok
// SIG undefined FUN_146202f84(void)

void FUN_146202f84(undefined8 *param_1,uint param_2,void *param_3,size_t param_4,undefined4 *param_5
                  )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (param_2 < 0x41) {
    if (param_2 == 0x40) {
      local_d8 = (undefined4)param_1[6];
      uStack_d4 = (undefined4)((ulonglong)param_1[6] >> 0x20);
      uStack_d0 = param_1[7];
      local_e8 = (undefined4)param_1[4];
      uStack_e4 = (undefined4)((ulonglong)param_1[4] >> 0x20);
      uStack_e0 = (undefined4)param_1[5];
      uStack_dc = (undefined4)((ulonglong)param_1[5] >> 0x20);
      local_f8 = (undefined4)param_1[2];
      uStack_f4 = (undefined4)((ulonglong)param_1[2] >> 0x20);
      uStack_f0 = (undefined4)param_1[3];
      uStack_ec = (undefined4)((ulonglong)param_1[3] >> 0x20);
      local_108 = *param_1;
      uStack_100 = param_1[1];
    }
    else {
      memcpy(&local_108,param_1,(ulonglong)param_2);
      memset((void *)((longlong)&local_108 + (ulonglong)param_2),0,(ulonglong)(0x40 - param_2));
    }
  }
  else {
    local_c8 = 0xefcdab8967452301;
    uStack_c0 = 0x1032547698badcfe;
    local_b8 = 0xc3d2e1f0;
    local_b0 = 0;
    FUN_140c54e34(&local_c8,param_1,param_2);
    FUN_140c54d7a(&local_c8);
    local_f8 = local_54;
    local_108 = CONCAT44(uStack_60,local_64);
    uStack_100 = CONCAT44(uStack_58,uStack_5c);
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    local_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
  }
  lVar5 = 0;
  do {
    uVar1 = *(uint *)((longlong)&local_108 + lVar5);
    uVar2 = *(uint *)((longlong)&local_108 + lVar5 + 4);
    uVar3 = *(uint *)((longlong)&uStack_100 + lVar5);
    uVar4 = *(uint *)((longlong)&uStack_100 + lVar5 + 4);
    *(uint *)((longlong)&local_148 + lVar5) = uVar1 ^ 0x5c5c5c5c;
    *(uint *)((longlong)&local_148 + lVar5 + 4) = uVar2 ^ 0x5c5c5c5c;
    *(uint *)((longlong)&uStack_140 + lVar5) = uVar3 ^ 0x5c5c5c5c;
    *(uint *)((longlong)&uStack_140 + lVar5 + 4) = uVar4 ^ 0x5c5c5c5c;
    *(uint *)((longlong)&local_188 + lVar5) = uVar1 ^ 0x36363636;
    *(uint *)((longlong)&local_188 + lVar5 + 4) = uVar2 ^ 0x36363636;
    *(uint *)((longlong)&uStack_180 + lVar5) = uVar3 ^ 0x36363636;
    *(uint *)((longlong)&uStack_180 + lVar5 + 4) = uVar4 ^ 0x36363636;
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x40);
  puVar6 = (undefined8 *)FUN_14001cc68(param_4 + 0x40 + (ulonglong)(param_4 + 0x40 == 0),0x10);
  *puVar6 = local_188;
  puVar6[1] = uStack_180;
  puVar6[2] = local_178;
  puVar6[3] = uStack_170;
  puVar6[4] = local_168;
  puVar6[5] = uStack_160;
  puVar6[6] = local_158;
  puVar6[7] = uStack_150;
  memcpy(puVar6 + 8,param_3,param_4);
  local_c8 = 0xefcdab8967452301;
  uStack_c0 = 0x1032547698badcfe;
  local_b8 = 0xc3d2e1f0;
  local_b0 = 0;
  FUN_140c54e34(&local_c8,puVar6,param_4 + 0x40);
  FUN_140c54d7a(&local_c8);
  local_198 = local_54;
  local_1a8 = local_64;
  uStack_1a4 = uStack_60;
  uStack_1a0 = uStack_5c;
  uStack_19c = uStack_58;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  local_1d8 = local_118;
  uStack_1d4 = uStack_114;
  uStack_1d0 = uStack_110;
  uStack_1cc = uStack_10c;
  local_1e8 = local_128;
  uStack_1e4 = uStack_124;
  uStack_1e0 = uStack_120;
  uStack_1dc = uStack_11c;
  local_1f8 = local_138;
  uStack_1f4 = uStack_134;
  uStack_1f0 = uStack_130;
  uStack_1ec = uStack_12c;
  local_208 = local_148;
  uStack_200 = uStack_140;
  local_1c8 = local_1a8;
  uStack_1c4 = uStack_1a4;
  uStack_1c0 = uStack_1a0;
  uStack_1bc = uStack_19c;
  local_1b8 = local_198;
  local_c8 = 0xefcdab8967452301;
  uStack_c0 = 0x1032547698badcfe;
  local_b8 = 0xc3d2e1f0;
  local_b0 = 0;
  FUN_140c54e34(&local_c8,&local_208,0x54);
  FUN_140c54d7a(&local_c8);
  param_5[4] = local_54;
  *param_5 = local_64;
  param_5[1] = uStack_60;
  param_5[2] = uStack_5c;
  param_5[3] = uStack_58;
  if ((local_40 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146203246 FUN_146203246 body=169 status=ok
// SIG undefined FUN_146203246(void)

bool FUN_146203246(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462032f0 FUN_1462032f0 body=982 status=ok
// SIG undefined FUN_1462032f0(void)

void FUN_1462032f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  void *_Src;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_7c [4];
  undefined2 *local_78;
  int local_70;
  void *local_68;
  int local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != (longlong *)0x0) {
    lVar5 = FUN_140e212f4();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      lVar5 = FUN_1410e4b5a();
      if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) {
        lVar5 = FUN_1410e4a74();
        if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
            != lVar5 + 0x30)) {
          lVar5 = FUN_14119b10c();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
              == lVar5 + 0x30)) {
            uVar6 = FUN_145800c9e(param_2,0);
            uVar8 = FUN_145800c9e(param_2,1);
            uVar9 = FUN_140059518(param_1 + 0x44);
            lVar5 = FUN_1404960a8(uVar9);
            if (lVar5 != 0) {
              puVar7 = (undefined8 *)FUN_14001cc68(0x28,0x10);
              uVar2 = (**(code **)(*param_2 + 0x300))(param_2);
              FUN_1410e4a6a(uVar8,&local_88);
              FUN_1410e4a6a(uVar6,&local_90);
              lVar1 = param_2[0xe];
              *puVar7 = &PTR_FUN_14b9b3328;
              puVar7[1] = lVar1;
              puVar7[2] = local_90;
              puVar7[3] = local_88;
              *(undefined1 *)(puVar7 + 4) = uVar2;
              FUN_14039144e(lVar5,puVar7);
            }
            cVar3 = FUN_145800bfe(param_2);
            if (cVar3 != '\0') {
              FUN_1410e7e0e(param_1);
            }
          }
        }
        else {
          uVar6 = FUN_140059518(param_1 + 0x44);
          lVar5 = FUN_1404960a8(uVar6);
          if (lVar5 != 0) {
            puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
            uVar4 = (**(code **)(*param_2 + 800))(param_2);
            lVar1 = param_2[0xe];
            *puVar7 = &PTR_FUN_14b9b32f0;
            puVar7[1] = lVar1;
            *(undefined4 *)(puVar7 + 2) = uVar4;
            FUN_14039144e(lVar5,puVar7);
          }
        }
      }
      else {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        uVar6 = FUN_140059518(param_1 + 0x44);
        lVar5 = FUN_1404960a8(uVar6);
        if (lVar5 != 0) {
          FUN_148b05ade(param_2,&local_58);
          puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          FUN_1411ab38a(&local_58,local_7c);
          FUN_1458b729a(local_7c,&local_78);
          puVar10 = local_78;
          if (local_70 == 0) {
            puVar10 = &DAT_149dfb77a;
          }
          FUN_140002266(&local_68,&DAT_14b9b5e50,puVar10);
          _Src = local_68;
          lVar1 = param_2[0xe];
          *puVar7 = &PTR_FUN_14b9b32c0;
          puVar7[1] = lVar1;
          puVar7[2] = 0;
          *(int *)(puVar7 + 3) = local_60;
          if ((longlong)local_60 == 0) {
            *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
          }
          else {
            FUN_1446dd670(puVar7 + 2,local_60,0);
            memcpy((void *)puVar7[2],_Src,(longlong)local_60 * 2);
          }
          FUN_14039144e(lVar5,puVar7);
          if (local_68 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
    else {
      uVar6 = FUN_140059518(param_1 + 0x44);
      lVar5 = FUN_1404960a8(uVar6);
      if (lVar5 != 0) {
        puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        (**(code **)(*param_2 + 0x340))(param_2,&local_58);
        lVar1 = param_2[0xe];
        *puVar7 = &PTR_FUN_14b9b3288;
        puVar7[1] = lVar1;
        puVar7[2] = local_58;
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 8))();
        }
        *(undefined4 *)(puVar7 + 3) = local_50;
        FUN_14039144e(lVar5,puVar7);
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 0x10))();
        }
      }
    }
    FUN_1458003e0(param_1,param_1 + 0xc0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462036c8 FUN_1462036c8 body=40 status=ok
// SIG undefined FUN_1462036c8(void)

undefined8 FUN_1462036c8(undefined8 param_1,int param_2)

{
  FUN_1462036f0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462036f0 FUN_1462036f0 body=729 status=ok
// SIG undefined FUN_1462036f0(void)

void FUN_1462036f0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14bda65d0;
  param_1[5] = &PTR_FUN_14bda6c30;
  param_1[0x13] = &PTR_FUN_14bda6c50;
  param_1[0x15] = &PTR_FUN_14bda6c80;
  param_1[0x16] = &PTR_FUN_14bda6cc0;
  param_1[0x174] = &PTR_FUN_14bda6cf0;
  if (param_1[0x226] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x224] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x222] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[0x221];
  if (lVar1 != 0) {
    FUN_149684c92(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_1[0x21f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x21c) = 0;
  if (param_1[0x21b] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x213);
  if (param_1[0x211] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e5b52(param_1 + 0x1f6);
  FUN_145820e5c(param_1 + 0x1b4);
  if (param_1[0x1b1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1af] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1ae) = 0;
  if (param_1[0x1ad] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x1a5);
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  if (param_1[0x1a3] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x19b);
  if (param_1[0x199] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x197] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x195] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x193] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x191) = 0;
  if (param_1[400] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x188);
  if (param_1[0x187] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x183] != 0) {
    FUN_1400020a8();
  }
  FUN_14598c502(param_1);
  return;
}



// FUNCTION 1462039ca FUN_1462039ca body=543 status=ok
// SIG undefined FUN_1462039ca(void)

longlong * FUN_1462039ca(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146203c0a(param_4,&local_48,*(undefined4 *)(param_1 + 8));
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) goto LAB_146203a0e;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a4c1880;
  plVar5 = plVar4 + 2;
  FUN_146203e1e(plVar5,param_3);
  local_58 = plVar5;
  local_50 = plVar4;
  FUN_146203cbe(&local_58,plVar5);
  plVar1 = local_40;
  local_48 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
LAB_146203b7f:
      LOCK();
      plVar5 = plVar1 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000146203bba:
        if (iVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == local_40) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar1 = plVar4;
        goto joined_r0x000146203bba;
      }
    }
    else {
      bVar6 = local_40 != (longlong *)0x0;
      local_40 = plVar4;
      if (bVar6) goto LAB_146203b7f;
    }
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_48;
  (**(code **)(*local_48 + 0x10))(local_48,*(undefined4 *)(param_1 + 8),param_4);
  local_68 = plVar5;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar5 = local_48;
  }
  FUN_146203d60(param_4,*(undefined4 *)(param_1 + 8),&local_68);
LAB_146203a0e:
  plVar1 = local_40;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146203c0a FUN_146203c0a body=179 status=ok
// SIG undefined FUN_146203c0a(void)

undefined8 * FUN_146203c0a(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_146203ca8;
    }
  }
  uVar6 = 0;
LAB_146203ca8:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 146203cbe FUN_146203cbe body=162 status=ok
// SIG undefined FUN_146203cbe(void)

void FUN_146203cbe(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146203cfd;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146203cfd;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146203cfd:
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
                    /* WARNING: Could not recover jumptable at 0x000146203d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146203d60 FUN_146203d60 body=188 status=ok
// SIG undefined FUN_146203d60(void)

void FUN_146203d60(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146203e1e FUN_146203e1e body=241 status=ok
// SIG undefined FUN_146203e1e(void)

undefined8 * FUN_146203e1e(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4c18a0;
  param_1[0x1b] = &PTR_FUN_14a4c18e8;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 0x1c) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  *(int *)(param_1 + 0x1d) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_30);
    *(undefined4 *)(param_1 + 0x1e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146203f10 FUN_146203f10 body=543 status=ok
// SIG undefined FUN_146203f10(void)

longlong * FUN_146203f10(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146204150(param_4,&local_48,*(undefined4 *)(param_1 + 8));
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) goto LAB_146203f54;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a4c1d80;
  plVar5 = plVar4 + 2;
  FUN_146204364(plVar5,param_3);
  local_58 = plVar5;
  local_50 = plVar4;
  FUN_146204204(&local_58,plVar5);
  plVar1 = local_40;
  local_48 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
LAB_1462040c5:
      LOCK();
      plVar5 = plVar1 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000146204100:
        if (iVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == local_40) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar1 = plVar4;
        goto joined_r0x000146204100;
      }
    }
    else {
      bVar6 = local_40 != (longlong *)0x0;
      local_40 = plVar4;
      if (bVar6) goto LAB_1462040c5;
    }
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_48;
  (**(code **)(*local_48 + 0x10))(local_48,*(undefined4 *)(param_1 + 8),param_4);
  local_68 = plVar5;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar5 = local_48;
  }
  FUN_1462042a6(param_4,*(undefined4 *)(param_1 + 8),&local_68);
LAB_146203f54:
  plVar1 = local_40;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146204150 FUN_146204150 body=179 status=ok
// SIG undefined FUN_146204150(void)

undefined8 * FUN_146204150(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_1462041ee;
    }
  }
  uVar6 = 0;
LAB_1462041ee:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 146204204 FUN_146204204 body=162 status=ok
// SIG undefined FUN_146204204(void)

void FUN_146204204(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146204243;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146204243;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146204243:
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
                    /* WARNING: Could not recover jumptable at 0x0001462042a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1462042a6 FUN_1462042a6 body=188 status=ok
// SIG undefined FUN_1462042a6(void)

void FUN_1462042a6(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146204364 FUN_146204364 body=241 status=ok
// SIG undefined FUN_146204364(void)

undefined8 * FUN_146204364(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4c1da0;
  param_1[0x1b] = &PTR_FUN_14a4c1de8;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 0x1c) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  *(int *)(param_1 + 0x1d) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_30);
    *(undefined4 *)(param_1 + 0x1e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146204456 FUN_146204456 body=543 status=ok
// SIG undefined FUN_146204456(void)

longlong * FUN_146204456(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146204696(param_4,&local_48,*(undefined4 *)(param_1 + 8));
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) goto LAB_14620449a;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a4c6670;
  plVar5 = plVar4 + 2;
  FUN_1462048aa(plVar5,param_3);
  local_58 = plVar5;
  local_50 = plVar4;
  FUN_14620474a(&local_58,plVar5);
  plVar1 = local_40;
  local_48 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
LAB_14620460b:
      LOCK();
      plVar5 = plVar1 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000146204646:
        if (iVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == local_40) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar1 = plVar4;
        goto joined_r0x000146204646;
      }
    }
    else {
      bVar6 = local_40 != (longlong *)0x0;
      local_40 = plVar4;
      if (bVar6) goto LAB_14620460b;
    }
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_48;
  (**(code **)(*local_48 + 0x10))(local_48,*(undefined4 *)(param_1 + 8),param_4);
  local_68 = plVar5;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar5 = local_48;
  }
  FUN_1462047ec(param_4,*(undefined4 *)(param_1 + 8),&local_68);
LAB_14620449a:
  plVar1 = local_40;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146204696 FUN_146204696 body=179 status=ok
// SIG undefined FUN_146204696(void)

undefined8 * FUN_146204696(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_146204734;
    }
  }
  uVar6 = 0;
LAB_146204734:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14620474a FUN_14620474a body=162 status=ok
// SIG undefined FUN_14620474a(void)

void FUN_14620474a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146204789;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146204789;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146204789:
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
                    /* WARNING: Could not recover jumptable at 0x0001462047e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1462047ec FUN_1462047ec body=188 status=ok
// SIG undefined FUN_1462047ec(void)

void FUN_1462047ec(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462048aa FUN_1462048aa body=241 status=ok
// SIG undefined FUN_1462048aa(void)

undefined8 * FUN_1462048aa(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4c6690;
  param_1[0x1b] = &PTR_FUN_14a4c66d8;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 0x1c) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  *(int *)(param_1 + 0x1d) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_30);
    *(undefined4 *)(param_1 + 0x1e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14620499c FUN_14620499c body=226 status=ok
// SIG undefined FUN_14620499c(void)

longlong * FUN_14620499c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c1c5c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146204a84 FUN_146204a84 body=138 status=ok
// SIG undefined FUN_146204a84(void)

code * FUN_146204a84(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectDrawParameter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa00000045b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146204b0e;
}



// FUNCTION 146204b0e FUN_146204b0e body=146 status=ok
// SIG undefined FUN_146204b0e(void)

code * FUN_146204b0e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145eb962c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FShadowTileVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000045a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c8d18;
  return FUN_1462c1ce4;
}



// FUNCTION 146204ba0 FUN_146204ba0 body=180 status=ok
// SIG undefined FUN_146204ba0(void)

void FUN_146204ba0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((byte *)*param_4 != (byte *)0x0) && ((*(byte *)*param_4 & 3) != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
      lVar3 = FUN_140dbafcc();
      if (lVar3 != 0) {
        lVar2 = FUN_1400f6f32(lVar2);
        if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x68), lVar2 != 0)) {
          lVar3 = FUN_140bccd38(lVar2,param_2 + 0x18);
          if (lVar3 != 0) {
            uVar1 = FUN_140def96c(lVar2,param_2 + 0x18);
            lVar2 = FUN_140dbae30(lVar3);
            if (lVar2 != 0) {
              FUN_146204c54(lVar2,param_4,uVar1);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 146204c54 FUN_146204c54 body=786 status=ok
// SIG undefined FUN_146204c54(void)

void FUN_146204c54(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  longlong local_58;
  longlong *local_50;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1402815f4(param_1,&local_58);
  pfVar3 = *(float **)(local_58 + 0x4e0);
  AcquireSRWLockExclusive((PSRWLOCK)(pfVar3 + 0x10));
  pfVar3[0xf] = (float)((int)pfVar3[0xf] + 1);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  local_78 = *pfVar3;
  fStack_74 = pfVar3[1];
  fStack_70 = pfVar3[2];
  fStack_6c = pfVar3[3];
  local_88 = DAT_14cbd60e0;
  local_80 = DAT_14cbd60e8;
  FUN_1448075d0(&local_58);
  uVar4 = FUN_144a06846(param_2,&local_58);
  FUN_1400097a2(&local_68,uVar4,&local_78);
  if (((((local_68 != *pfVar3) || (NAN(local_68) || NAN(*pfVar3))) || (fStack_64 != pfVar3[1])) ||
      ((NAN(fStack_64) || NAN(pfVar3[1]) || (fStack_60 != pfVar3[2])))) ||
     (NAN(fStack_60) || NAN(pfVar3[2]))) {
LAB_146204d54:
    *pfVar3 = local_68;
    pfVar3[1] = fStack_64;
    pfVar3[2] = fStack_60;
    pfVar3[3] = fStack_5c;
    pfVar3[4] = (float)((int)pfVar3[4] + 1);
  }
  else if (((fStack_5c != pfVar3[3]) || (NAN(fStack_5c) || NAN(pfVar3[3]))) || (pfVar3[4] == 0.0))
  goto LAB_146204d54;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_98 = pfVar3[5];
  fStack_94 = pfVar3[6];
  fStack_90 = pfVar3[7];
  fStack_8c = pfVar3[8];
  local_a8 = DAT_14cbd60ec;
  local_a0 = DAT_14cbd60f4;
  FUN_1448075d0(&local_58);
  uVar4 = FUN_144a06846(param_2,&local_58);
  FUN_1400097a2(&local_68,uVar4,&local_98);
  if ((((local_68 != pfVar3[5]) || (NAN(local_68) || NAN(pfVar3[5]))) || (fStack_64 != pfVar3[6]))
     || (((NAN(fStack_64) || NAN(pfVar3[6]) || (fStack_60 != pfVar3[7])) ||
         (NAN(fStack_60) || NAN(pfVar3[7]))))) {
LAB_146204e16:
    pfVar3[5] = local_68;
    pfVar3[6] = fStack_64;
    pfVar3[7] = fStack_60;
    pfVar3[8] = fStack_5c;
    pfVar3[9] = (float)((int)pfVar3[9] + 1);
  }
  else if (((fStack_5c != pfVar3[8]) || (NAN(fStack_5c) || NAN(pfVar3[8]))) || (pfVar3[9] == 0.0))
  goto LAB_146204e16;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_b8 = pfVar3[10];
  fStack_b4 = pfVar3[0xb];
  fStack_b0 = pfVar3[0xc];
  fStack_ac = pfVar3[0xd];
  local_c8 = DAT_14cbd60f8;
  local_c0 = DAT_14cbd6100;
  FUN_1448075d0(&local_58);
  uVar4 = FUN_144a06846(param_2,&local_58);
  FUN_1400097a2(&local_68,uVar4,&local_b8);
  if ((((local_68 == pfVar3[10]) && (!NAN(local_68) && !NAN(pfVar3[10]))) &&
      (fStack_64 == pfVar3[0xb])) &&
     (((!NAN(fStack_64) && !NAN(pfVar3[0xb]) && (fStack_60 == pfVar3[0xc])) &&
      (!NAN(fStack_60) && !NAN(pfVar3[0xc]))))) {
    if (((fStack_5c == pfVar3[0xd]) && (!NAN(fStack_5c) && !NAN(pfVar3[0xd]))) &&
       (pfVar3[0xe] != 0.0)) goto LAB_146204eed;
  }
  pfVar3[10] = local_68;
  pfVar3[0xb] = fStack_64;
  pfVar3[0xc] = fStack_60;
  pfVar3[0xd] = fStack_5c;
  pfVar3[0xe] = (float)((int)pfVar3[0xe] + 1);
LAB_146204eed:
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pfVar3 + 0x10));
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146204f68 FUN_146204f68 body=38 status=ok
// SIG undefined FUN_146204f68(void)

undefined8 FUN_146204f68(undefined8 param_1,int param_2)

{
  FUN_14164ab54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146204fa6 FUN_146204fa6 body=364 status=ok
// SIG undefined FUN_146204fa6(void)

void FUN_146204fa6(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,4);
  uVar3 = *(ushort *)(param_2 + 0xc);
  uVar2 = (uint)uVar3;
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar3 << 5;
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_1) goto LAB_146204ff2;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_146204ff2:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    uVar2 = (uint)uVar3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[1]) goto LAB_146205045;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_146205045:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 4 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    uVar2 = (uint)uVar3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[2]) goto LAB_146205092;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_146205092:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 8 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar2 = (uint)uVar3;
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[3]) goto LAB_1462050d7;
      puVar1 = puVar1 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1462050d7:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar5 + 0xc + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 14620511a FUN_14620511a body=766 status=ok
// SIG undefined FUN_14620511a(void)

undefined8 * FUN_14620511a(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14ba561c0;
  param_1[5] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 6) = 0;
  FUN_1405bceb4(param_1 + 5);
  param_1[5] = &PTR_FUN_14ba5ae20;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar1 = FUN_1458f2cea();
  param_1[0xc] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  lVar1 = FUN_1458f2dd6();
  param_1[0xd] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x10] = &PTR_FUN_14a5af930;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x16] = &PTR_FUN_14a5af930;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x199) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a1) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a9) = 0x10103;
  *(undefined1 *)((longlong)param_1 + 0x1ad) = 0;
  param_1[0x3c] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 4) = 0;
  puVar2[1] = &PTR_FUN_14a5af930;
  puVar2[10] = 0;
  *(undefined1 *)(puVar2 + 0xb) = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  param_1[0x3f] = puVar2;
  param_1[0x3e] = puVar2;
  *(undefined2 *)(param_1 + 0x40) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x22b) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)((longlong)param_1 + 0x225) = 0;
  *(undefined1 *)((longlong)param_1 + 0x229) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x4a] = 0x1e40a00000;
  *(undefined4 *)(param_1 + 0x4b) = 0x3c;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 2;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x57) = 2;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  param_1[0x6c] = 2;
  return param_1;
}


