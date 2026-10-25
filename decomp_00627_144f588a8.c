// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144f588a8 FUN_144f588a8 body=9 status=ok
// SIG undefined FUN_144f588a8(void)

void FUN_144f588a8(longlong param_1)

{
  FUN_144f52bc0(param_1 + -0x18);
  return;
}



// FUNCTION 144f588c0 FUN_144f588c0 body=189 status=ok
// SIG undefined FUN_144f588c0(void)

longlong FUN_144f588c0(longlong param_1,int param_2)

{
  void *_Dst;
  int iVar1;
  ulonglong uVar2;
  
  FUN_144b4a290(param_1,0,1000,0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < param_2) {
    FUN_141807aa8(param_1 + 0x18,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 < param_2) || (param_2 < iVar1)) {
    *(int *)(param_1 + 0x20) = param_2;
    iVar1 = param_2;
  }
  _Dst = *(void **)(param_1 + 0x18);
  uVar2 = (longlong)iVar1 & 0x3fffffffffffffff;
  if ((void *)((longlong)iVar1 * 4 + (longlong)_Dst) < _Dst) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    memset(_Dst,-1,uVar2 << 2);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}



// FUNCTION 144f58980 FUN_144f58980 body=119 status=ok
// SIG undefined FUN_144f58980(void)

void FUN_144f58980(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  ulonglong uVar4;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  piVar3 = *(int **)(param_1 + 0x18);
  piVar1 = piVar3 + *(int *)(param_1 + 0x20);
  for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    if (-1 < *piVar3) {
      FUN_144bdf0d0(param_1);
    }
    *piVar3 = -1;
  }
  LOCK();
  uVar2 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = 0;
  UNLOCK();
  if (0 < (int)uVar2) {
    uVar4 = (ulonglong)uVar2;
    do {
      FUN_144bdf0d0(param_1);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 144f58a00 FUN_144f58a00 body=31 status=ok
// SIG undefined FUN_144f58a00(void)

void FUN_144f58a00(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x14);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 4) = param_2;
  FUN_144bdf120(param_1,1);
  return;
}



// FUNCTION 144f58a20 FUN_144f58a20 body=14 status=ok
// SIG undefined FUN_144f58a20(void)

void FUN_144f58a20(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  UNLOCK();
  FUN_144bdf120(param_1,1);
  return;
}



// FUNCTION 144f58a30 FUN_144f58a30 body=168 status=ok
// SIG undefined FUN_144f58a30(void)

undefined4 * FUN_144f58a30(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  FUN_144bdf0d0();
  iVar5 = *(int *)(param_1 + 0x28);
  while (iVar5 != 0) {
    LOCK();
    iVar4 = *(int *)(param_1 + 0x28);
    bVar8 = iVar5 == iVar4;
    if (bVar8) {
      *(int *)(param_1 + 0x28) = iVar5 + -1;
      iVar4 = iVar5;
    }
    UNLOCK();
    iVar5 = iVar4;
    if (bVar8) {
      *param_2 = 0xffffffff;
      return param_2;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x10);
  uVar7 = (ulonglong)(int)uVar6;
  lVar3 = *(longlong *)(param_1 + 0x18);
  piVar1 = (int *)(lVar3 + uVar7 * 4);
  iVar5 = *(int *)(lVar3 + uVar7 * 4);
  while (iVar5 < 0) {
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    piVar1 = piVar1 + 1;
    iVar5 = *piVar1;
  }
  uVar2 = *(undefined4 *)(lVar3 + (longlong)(int)uVar6 * 4);
  *(undefined4 *)(lVar3 + (longlong)(int)uVar6 * 4) = 0xfffffffe;
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 < *(int *)(param_1 + 0x20)) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 4) != -2) break;
      iVar5 = iVar5 + 1;
      *(int *)(param_1 + 0x10) = iVar5;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 144f58ae0 FUN_144f58ae0 body=104 status=ok
// SIG undefined FUN_144f58ae0(void)

longlong FUN_144f58ae0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_144b3f230();
  }
  FUN_144f58e60(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144f58b50 FUN_144f58b50 body=774 status=ok
// SIG undefined FUN_144f58b50(void)

int * FUN_144f58b50(longlong *param_1,int *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int local_248 [2];
  ulonglong local_240;
  uint local_238;
  uint local_234;
  undefined8 local_230;
  code *pcStack_228;
  char *local_220;
  code *pcStack_218;
  int *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  code *pcStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  int *local_1c0;
  undefined8 local_1b8;
  int local_1b0;
  undefined8 local_118 [20];
  undefined1 local_78 [80];
  
  FUN_144bdf390(local_118,param_3);
  FUN_144be0ae0(local_118);
  FUN_144bdfad0(&local_1b8,local_118);
  FUN_144be0a20(&local_1b8);
  uVar2 = 0;
  local_1f0 = 0xffffffffffffffff;
  uVar9 = 0x80000000;
  local_240 = 0;
  local_238 = 0;
  local_234 = 0x80000000;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1e8 = 0;
  uVar7 = 0;
  uVar8 = uVar2;
  while (local_1b0 != 1) {
    uVar7 = (uint)uVar8;
    piVar3 = (int *)(**(code **)(*param_1 + 0x40))(param_1,local_248,local_1b8,&local_208);
    if (-1 < *piVar3) break;
    uVar5 = uVar7 + 1;
    if ((int)(uVar9 & 0x7fffffff) < (int)uVar5) {
      FUN_144bddc40(&local_240,&PTR_vftable_14c6e47c0,(longlong)(int)uVar5);
      uVar2 = local_240;
      uVar9 = local_234;
      uVar7 = local_238;
    }
    uVar8 = (ulonglong)uVar5;
    puVar1 = (undefined8 *)(uVar2 + (longlong)(int)uVar7 * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
    }
    local_238 = uVar5;
    FUN_144be3730(puVar1,local_1b8);
    FUN_144be0a20(&local_1b8);
    uVar7 = uVar5;
  }
  lVar6 = (longlong)(int)(uVar7 - 1);
  if (-1 < (int)(uVar7 - 1)) {
    do {
      piVar3 = (int *)(**(code **)(*param_1 + 0x28))
                                (param_1,&local_240,
                                 *(ulonglong *)(uVar2 + lVar6 * 8) & 0xfffffffffffffffe,param_4);
      local_248[0] = *piVar3;
      if (local_248[0] < 0) {
        if (DAT_14c797ce0 != '\0') {
          lVar6 = FUN_144bdc640(local_78,&DAT_14c797c90,1);
          local_230 = 2;
          *(char **)(lVar6 + 0x38) = "System\\Io\\FileSystem\\hkFileSystem.cpp";
          pcStack_228 = FUN_144c14830;
          local_220 = "mkdir(todo[i], flag)";
          pcStack_218 = FUN_144bdef40;
          local_210 = local_248;
          local_1e0 = 2;
          pcStack_1d8 = FUN_144c14830;
          *(undefined8 *)(lVar6 + 0x40) = 0x8e;
          local_1d0 = 0x49c0e000;
          uStack_1cc = 1;
          uStack_1c8 = 0x44bdef40;
          uStack_1c4 = 1;
          local_1c0 = local_210;
          uVar4 = FUN_144bdc480(lVar6,"HK_RETURN_IF_FAILED({}) returning {}. ",&local_1e0,0);
          local_240 = 0;
          FUN_144bdc480(uVar4,&DAT_14996de1b,&local_240,0);
          FUN_144bdc690(local_78);
        }
        *param_2 = local_248[0];
        FUN_144b49dd0(&uStack_200);
        uVar8 = uVar2 + (longlong)(int)uVar7 * 8;
        while (uVar8 != uVar2) {
          uVar8 = uVar8 - 8;
          FUN_144b49dd0(uVar8);
        }
        goto LAB_144f58cf1;
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_118[0],param_4);
  FUN_144b49dd0(&uStack_200);
  uVar8 = uVar2 + (longlong)(int)uVar7 * 8;
  while (uVar8 != uVar2) {
    uVar8 = uVar8 - 8;
    FUN_144b49dd0(uVar8);
  }
LAB_144f58cf1:
  if ((-1 < (int)uVar9) && (uVar2 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,uVar2,(ulonglong)(uVar9 & 0x7fffffff) << 3);
  }
  FUN_144bdf2f0(&local_1b8);
  FUN_144bdf2f0(local_118);
  return param_2;
}



// FUNCTION 144f58e60 FUN_144f58e60 body=170 status=ok
// SIG undefined FUN_144f58e60(void)

void FUN_144f58e60(undefined8 *param_1)

{
  *param_1 = hkFileSystem::vftable;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) * 0x18);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0x18);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144f58f10 FUN_144f58f10 body=28 status=ok
// SIG undefined FUN_144f58f10(void)

undefined8 * FUN_144f58f10(undefined8 *param_1)

{
  param_1[3] = 0xffffffffffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 144f58f30 FUN_144f58f30 body=9 status=ok
// SIG undefined FUN_144f58f30(void)

void FUN_144f58f30(longlong param_1)

{
  FUN_144b49dd0(param_1 + 8);
  return;
}



// FUNCTION 144f58f40 FUN_144f58f40 body=125 status=ok
// SIG undefined FUN_144f58f40(void)

void FUN_144f58f40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 local_a8 [160];
  
  FUN_144bdf390(local_a8,param_3);
  FUN_144be0ae0(local_a8);
  *param_1 = param_2;
  FUN_144be3790(param_1 + 1,local_a8);
  FUN_144bdf2f0(local_a8);
  param_1[2] = param_5;
  *(undefined4 *)(param_1 + 4) = param_4;
  param_1[3] = param_6;
  return;
}



// FUNCTION 144f58fc0 FUN_144f58fc0 body=228 status=ok
// SIG undefined FUN_144f58fc0(void)

longlong * FUN_144f58fc0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong local_28 [2];
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x68))(param_1,local_res8);
  local_28[0] = *plVar1;
  *plVar1 = 0;
  if (local_28[0] == 0) {
    *param_2 = 0;
    return param_2;
  }
  iVar3 = 0;
  if (0 < (int)param_1[4]) {
    lVar4 = 0;
    do {
      piVar2 = (int *)(**(code **)(lVar4 + param_1[3]))
                                (local_res8,local_28,param_3,param_4,
                                 *(undefined8 *)(lVar4 + 0x10 + param_1[3]));
      if (*piVar2 < 0) {
        *param_2 = 0;
        goto LAB_144f59057;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while (iVar3 < (int)param_1[4]);
  }
  FUN_144b3d910(local_28[0]);
  *param_2 = local_28[0];
LAB_144f59057:
  if (local_28[0] != 0) {
    FUN_144b3f230();
  }
  return param_2;
}



// FUNCTION 144f590b0 FUN_144f590b0 body=228 status=ok
// SIG undefined FUN_144f590b0(void)

longlong * FUN_144f590b0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong local_28 [2];
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x70))(param_1,local_res8);
  local_28[0] = *plVar1;
  *plVar1 = 0;
  if (local_28[0] == 0) {
    *param_2 = 0;
    return param_2;
  }
  iVar3 = 0;
  if (0 < (int)param_1[6]) {
    lVar4 = 0;
    do {
      piVar2 = (int *)(**(code **)(lVar4 + param_1[5]))
                                (local_res8,local_28,param_3,param_4,
                                 *(undefined8 *)(lVar4 + 0x10 + param_1[5]));
      if (*piVar2 < 0) {
        *param_2 = 0;
        goto LAB_144f59147;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while (iVar3 < (int)param_1[6]);
  }
  FUN_144b3d910(local_28[0]);
  *param_2 = local_28[0];
LAB_144f59147:
  if (local_28[0] != 0) {
    FUN_144b3f230();
  }
  return param_2;
}



// FUNCTION 144f591a0 FUN_144f591a0 body=10 status=ok
// SIG undefined FUN_144f591a0(void)

undefined4 * FUN_144f591a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040278;
  return param_2;
}



// FUNCTION 144f591b0 FUN_144f591b0 body=10 status=ok
// SIG undefined FUN_144f591b0(void)

undefined4 * FUN_144f591b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040278;
  return param_2;
}



// FUNCTION 144f591c0 FUN_144f591c0 body=10 status=ok
// SIG undefined FUN_144f591c0(void)

undefined4 * FUN_144f591c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040278;
  return param_2;
}



// FUNCTION 144f591d0 FUN_144f591d0 body=938 status=ok
// SIG undefined FUN_144f591d0(void)

int * FUN_144f591d0(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char *pcVar8;
  longlong *plVar9;
  int local_res8 [2];
  undefined8 local_238;
  undefined8 local_230;
  ulonglong auStack_228 [3];
  undefined4 local_210;
  undefined8 local_208;
  code *local_200;
  char *local_1f8;
  code *local_1f0;
  int *local_1e8;
  undefined8 local_1e0;
  ulonglong auStack_1d8 [3];
  undefined4 local_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  int local_1a0;
  undefined1 local_108 [80];
  undefined8 local_b8 [20];
  
  auStack_228[2] = 0xffffffffffffffff;
  auStack_228[1] = 0;
  local_230 = 0;
  auStack_228[0] = 0;
  local_210 = 0;
  piVar4 = (int *)(**(code **)(*param_1 + 0x40))(0,&local_238,param_3,&local_230);
  local_res8[0] = *piVar4;
  if (local_res8[0] < 0) {
    if (DAT_14c797ce0 != '\0') {
      lVar5 = FUN_144bdc640(local_108,&DAT_14c797c90,1);
      local_208 = 2;
      *(char **)(lVar5 + 0x38) = "System\\Io\\FileSystem\\hkFileSystem.cpp";
      local_200 = FUN_144f59b00;
      local_1f8 = "stat(srcPath, srcEntry)";
      local_1f0 = FUN_144bdef40;
      local_1e8 = local_res8;
      *(undefined8 *)(lVar5 + 0x40) = 0x98;
      uVar6 = FUN_144bdc480(lVar5,"HK_RETURN_IF_FAILED({}) returning {}. ",&local_208,0);
      local_238 = 0;
      FUN_144bdc480(uVar6,&DAT_14996de1b,&local_238,0);
      FUN_144bdc690(local_108);
    }
    *param_2 = local_res8[0];
    FUN_144b49dd0(auStack_228);
    return param_2;
  }
  FUN_144bdf390(&local_1a8,param_4);
  iVar3 = FUN_144bdfe70(&local_1a8,&DAT_149981d20,0,0x7fffffff);
  if (-1 < iVar3) {
    FUN_144be0640(&local_1a8,(local_1a0 - iVar3) + -1);
  }
  auStack_1d8[1] = 0;
  auStack_1d8[2] = 0xffffffffffffffff;
  local_1e0 = 0;
  auStack_1d8[0] = 0;
  local_1c0 = 0;
  piVar4 = (int *)(**(code **)(*param_1 + 0x40))(param_1,&local_238,local_1a8,&local_1e0);
  local_res8[0] = *piVar4;
  if (local_res8[0] < 0) {
    if (DAT_14c797ce0 != '\0') {
      lVar5 = FUN_144bdc640(local_108,&DAT_14c797c90,1);
      local_208 = 2;
      *(char **)(lVar5 + 0x38) = "System\\Io\\FileSystem\\hkFileSystem.cpp";
      local_200 = FUN_144f59b20;
      local_1f8 = "stat(dstWithoutFilename, dstEntry)";
      local_1f0 = FUN_144bdef40;
      local_1e8 = local_res8;
      *(undefined8 *)(lVar5 + 0x40) = 0xa2;
      uVar6 = FUN_144bdc480(lVar5,"HK_RETURN_IF_FAILED({}) returning {}. ",&local_208,0);
      local_238 = 0;
      FUN_144bdc480(uVar6,&DAT_14996de1b,&local_238,0);
      FUN_144bdc690(local_108);
    }
    *param_2 = local_res8[0];
    goto LAB_144f5953a;
  }
  FUN_144bdf390(local_b8,auStack_1d8[0] & 0xfffffffffffffffe);
  if (-1 < iVar3) {
    FUN_144be0720(local_b8,param_4 + iVar3,0xffffffff);
  }
  plVar7 = (longlong *)FUN_144f58fc0(param_1,&local_238,auStack_228[0] & 0xfffffffffffffffe,1);
  plVar1 = (longlong *)*plVar7;
  *plVar7 = 0;
  if ((plVar1 == (longlong *)0x0) ||
     (pcVar8 = (char *)(**(code **)(*plVar1 + 0x18))(plVar1,local_res8), *pcVar8 == '\0')) {
    *param_2 = -0x7ffbfe00;
    if (plVar1 != (longlong *)0x0) goto LAB_144f59526;
  }
  else {
    plVar9 = (longlong *)FUN_144f590b0(param_1,local_1b8,local_b8[0],3);
    plVar7 = (longlong *)*plVar9;
    *plVar9 = 0;
    if ((plVar7 == (longlong *)0x0) ||
       (pcVar8 = (char *)(**(code **)(*plVar7 + 0x18))(plVar7,local_res8), *pcVar8 == '\0')) {
      *param_2 = -0x7ffbfe00;
      if (plVar7 != (longlong *)0x0) {
        FUN_144b3f230(plVar7);
      }
    }
    else {
      cVar2 = FUN_145302ec0(plVar1,plVar7);
      if (cVar2 != '\0') {
        FUN_144b3f230(plVar7);
        FUN_144b3f230(plVar1);
        *param_2 = 0;
        goto LAB_144f5952e;
      }
      *param_2 = -0x7ffbfe00;
      FUN_144b3f230(plVar7);
    }
LAB_144f59526:
    FUN_144b3f230(plVar1);
  }
LAB_144f5952e:
  FUN_144bdf2f0(local_b8);
LAB_144f5953a:
  FUN_144b49dd0(auStack_1d8);
  FUN_144bdf2f0(&local_1a8);
  FUN_144b49dd0(auStack_228);
  return param_2;
}



// FUNCTION 144f59580 FUN_144f59580 body=48 status=ok
// SIG undefined FUN_144f59580(void)

undefined8 FUN_144f59580(char *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == '\0') {
    return 0;
  }
  if (*param_1 == '.') {
    if (param_1[1] == '\0') {
      return 0;
    }
    if ((param_1[1] == '.') && (param_1[2] == '\0')) {
      return 0;
    }
  }
  if (param_2 != 0) {
    uVar1 = FUN_144bfbc90(param_1,param_2 + 1);
    return uVar1;
  }
  return 1;
}



// FUNCTION 144f595b0 FUN_144f595b0 body=31 status=ok
// SIG undefined FUN_144f595b0(void)

undefined8 * FUN_144f595b0(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkFileSystem::Watcher::vftable;
  return param_1;
}



// FUNCTION 144f595d0 FUN_144f595d0 body=11 status=ok
// SIG undefined FUN_144f595d0(void)

void FUN_144f595d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144f595e0 FUN_144f595e0 body=10 status=ok
// SIG undefined FUN_144f595e0(void)

undefined4 * FUN_144f595e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f595f0 FUN_144f595f0 body=467 status=ok
// SIG undefined FUN_144f595f0(void)

void FUN_144f595f0(longlong *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_58 [16];
  longlong local_48;
  undefined4 local_40;
  uint local_3c;
  longlong local_38;
  undefined4 local_30;
  
  uVar5 = 0;
  local_48 = 0;
  uVar4 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  local_38 = FUN_144b3d480();
  local_30 = 0;
  uVar7 = uVar5;
  uVar8 = uVar5;
  uVar9 = uVar5;
  uVar10 = uVar5;
  uVar11 = uVar5;
  if (0 < (int)param_1[1]) {
    do {
      FUN_144bea740(*(ulonglong *)(*param_1 + 0x10 + uVar10) & 0xfffffffffffffffe);
      lVar3 = FUN_147e6820e(&local_48,local_58);
      if (*(char *)(lVar3 + 8) == '\0') {
        lVar3 = *param_1 + (longlong)(int)uVar7 * 0x18;
        FUN_144b49dd0(lVar3 + 0x10);
        FUN_144b49dd0(lVar3 + 8);
      }
      else {
        if (uVar5 != uVar11) {
          puVar1 = (undefined1 *)(uVar10 + *param_1);
          puVar2 = (undefined1 *)(uVar8 + *param_1);
          if (puVar2 != puVar1) {
            if (puVar2 != (undefined1 *)0x0) {
              *puVar2 = *puVar1;
              *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar1 + 8);
              *(undefined8 *)(puVar1 + 8) = 0;
              *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
              *(undefined8 *)(puVar1 + 0x10) = 0;
            }
            FUN_144b49dd0();
            FUN_144b49dd0(puVar1 + 8);
          }
        }
        uVar9 = (ulonglong)((int)uVar9 + 1);
        uVar11 = uVar11 + 1;
        uVar8 = uVar8 + 0x18;
      }
      uVar4 = (undefined4)uVar9;
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar10 = uVar10 + 0x18;
    } while ((int)uVar6 < (int)param_1[1]);
  }
  *(undefined4 *)(param_1 + 1) = uVar4;
  if ((local_38 != 0) && (*(int *)(local_38 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,local_38,0);
    FUN_144b3ec00(&local_38);
  }
  local_40 = 0;
  if ((-1 < (int)local_3c) && (local_48 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_48,(ulonglong)(local_3c & 0x7fffffff) << 3);
  }
  return;
}



// FUNCTION 144f597d0 FUN_144f597d0 body=71 status=ok
// SIG undefined FUN_144f597d0(void)

undefined8 * FUN_144f597d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144f59820 FUN_144f59820 body=11 status=ok
// SIG undefined FUN_144f59820(void)

undefined8 * FUN_144f59820(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f59830 FUN_144f59830 body=133 status=ok
// SIG undefined FUN_144f59830(void)

longlong FUN_144f59830(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if ((param_2 != 0) && ((param_3 & 1) != 0)) {
    local_res10[0] = 0x48;
    lVar1 = (*DAT_14c787670)(0,local_res10,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar1,"hkBufferedStreamReader");
    }
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_1453029b0(lVar1,param_2,0xffffffff);
    }
    FUN_144b3f230(param_2);
    return lVar2;
  }
  return param_2;
}



// FUNCTION 144f598c0 FUN_144f598c0 body=133 status=ok
// SIG undefined FUN_144f598c0(void)

longlong FUN_144f598c0(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if ((param_2 != 0) && ((param_3 & 1) != 0)) {
    local_res10[0] = 0x40;
    lVar1 = (*DAT_14c787670)(0,local_res10,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar1,"hkBufferedStreamWriter");
    }
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_144f62080(lVar1,param_2,0xffffffff);
    }
    FUN_144b3f230(param_2);
    return lVar2;
  }
  return param_2;
}



// FUNCTION 144f59950 FUN_144f59950 body=87 status=ok
// SIG undefined FUN_144f59950(void)

undefined8 FUN_144f59950(undefined8 param_1,ulonglong param_2)

{
  FUN_144f58e60();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 144f599b0 FUN_144f599b0 body=240 status=ok
// SIG undefined FUN_144f599b0(void)

undefined4 * FUN_144f599b0(undefined4 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*param_2 != 0) {
    *param_1 = 0;
    return param_1;
  }
  local_res8 = 0x40;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"hkFileSystem");
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0xffffffff;
    *puVar1 = hkWin32FileSystem::vftable;
    puVar1[2] = 1;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0x80000000;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x80000000;
    puVar1[7] = 0;
    puVar2 = puVar1;
  }
  puVar1 = (undefined8 *)*param_2;
  if ((puVar2 != puVar1) && (*param_2 = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
    FUN_144b3f230();
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f59aa0 FUN_144f59aa0 body=95 status=ok
// SIG undefined FUN_144f59aa0(void)

undefined4 * FUN_144f59aa0(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_144b3d910(lVar1);
  }
  lVar2 = *param_2;
  *param_2 = 0;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  if (lVar1 != 0) {
    FUN_144b3f230(lVar1);
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f59b00 FUN_144f59b00 body=32 status=ok
// SIG undefined FUN_144f59b00(void)

undefined8 FUN_144f59b00(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144f59b20 FUN_144f59b20 body=32 status=ok
// SIG undefined FUN_144f59b20(void)

undefined8 FUN_144f59b20(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144f59b40 FUN_144f59b40 body=14 status=ok
// SIG undefined FUN_144f59b40(void)

undefined8 * FUN_144f59b40(undefined8 *param_1)

{
  *param_1 = hkStackTracer::vftable;
  return param_1;
}



// FUNCTION 144f59b50 FUN_144f59b50 body=11 status=ok
// SIG undefined FUN_144f59b50(void)

void FUN_144f59b50(undefined8 *param_1)

{
  *param_1 = hkStackTracer::vftable;
  return;
}



// FUNCTION 144f59b60 FUN_144f59b60 body=513 status=ok
// SIG undefined FUN_144f59b60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f59b60(undefined8 param_1,longlong param_2,int param_3,code *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  HANDLE pvVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 local_1088;
  undefined8 local_1080;
  undefined8 uStack_1078;
  undefined8 local_1070;
  char *pcStack_1068;
  undefined8 local_1060;
  undefined4 local_1058 [20];
  undefined4 local_1008;
  undefined1 local_1004 [2012];
  undefined1 local_828 [2048];
  
  FUN_144f59fa0(PTR_DAT_14c727378);
  if (*(longlong *)(PTR_DAT_14c727378 + 0x60) == 0) {
    if (DAT_14c797e58 == '\0') {
      DAT_14c797e58 = 1;
      OutputDebugStringA(
                        "**************************************************************\n* Functions required to dump a stack trace are not available.\n* Make sure dbghelp.dll is accessible.\n**************************************************************\n"
                        );
      return;
    }
  }
  else {
    local_1058[0] = 0x58;
    local_1008 = 0x7d1;
    pvVar3 = GetCurrentProcess();
    if (0 < param_3) {
      lVar5 = 0;
      do {
        uVar1 = *(undefined8 *)(param_2 + lVar5 * 8);
        local_1088 = 0;
        iVar2 = (**(code **)(PTR_DAT_14c727378 + 0x60))(pvVar3,uVar1,&local_1088,local_1058);
        if (iVar2 == 0) {
          if (DAT_14c797e58 == '\0') {
            OutputDebugStringA(
                              "**************************************************************\n* Cannot find symbol for an address\n* Either debug information was not found or your version of\n* dbghelp.dll may be too old to understand the debug format.\n* For more information, see comments in hkStackTracerWin32.cxx\n**************************************************************\n"
                              );
            DAT_14c797e58 = '\x01';
          }
          FUN_144bfbb80(local_1004,local_1008,"(unknown - see comments in hkStackTracerWin32.cxx)");
        }
        local_1060 = 0;
        uStack_1078 = 0;
        local_1080 = 0x28;
        local_1070 = 0;
        pcStack_1068 = (char *)0x0;
        (**(code **)(PTR_DAT_14c727378 + 0x80))(pvVar3,uVar1,&local_1088,&local_1080);
        pcVar4 = "UnknownFile";
        if (pcStack_1068 != (char *)0x0) {
          pcVar4 = pcStack_1068;
        }
        FUN_144bfb9f0(local_828,0x800,0x7ff,"%s(%i):\'%s\'\n",pcVar4,(undefined4)local_1070,
                      local_1004);
        (*param_4)(local_828,param_5);
        lVar5 = lVar5 + 1;
      } while (lVar5 < param_3);
    }
  }
  return;
}



// FUNCTION 144f59d70 FUN_144f59d70 body=479 status=ok
// SIG undefined FUN_144f59d70(void)

uint FUN_144f59d70(undefined8 param_1,undefined8 *param_2,int param_3,undefined4 param_4,
                  undefined1 *param_5)

{
  ushort uVar1;
  int iVar2;
  HANDLE pvVar3;
  HANDLE pvVar4;
  longlong lVar5;
  uint uVar6;
  longlong local_608;
  undefined4 local_5fc;
  longlong local_5f8;
  undefined8 local_5e8;
  undefined4 local_5dc;
  undefined8 local_5d8;
  undefined4 local_5cc;
  undefined1 local_4f8 [1232];
  
  if ((*(code **)(PTR_DAT_14c727378 + 0x90) != (code *)0x0) && (param_5 == (undefined1 *)0x0)) {
    uVar1 = (**(code **)(PTR_DAT_14c727378 + 0x90))(param_4,param_3,param_2,0);
    return (uint)uVar1;
  }
  FUN_144f59fa0();
  if (((*(longlong *)(PTR_DAT_14c727378 + 0x68) != 0) &&
      (*(longlong *)(PTR_DAT_14c727378 + 0x70) != 0)) &&
     (*(longlong *)(PTR_DAT_14c727378 + 0x78) != 0)) {
    pvVar3 = GetCurrentProcess();
    pvVar4 = GetCurrentThread();
    if (param_5 == (undefined1 *)0x0) {
      (**(code **)(PTR_DAT_14c727378 + 0x88))(local_4f8);
      param_5 = local_4f8;
    }
    uVar6 = 1;
    *param_2 = *(undefined8 *)(param_5 + 0xf8);
    local_608 = *(longlong *)(param_5 + 0xf8);
    local_5e8 = *(undefined8 *)(param_5 + 0xa0);
    local_5d8 = *(undefined8 *)(param_5 + 0x98);
    local_5fc = 3;
    local_5dc = 3;
    local_5cc = 3;
    if (1 < (longlong)param_3) {
      lVar5 = 1;
      do {
        iVar2 = (**(code **)(PTR_DAT_14c727378 + 0x68))
                          (0x8664,pvVar3,pvVar4,&local_608,param_5,0,
                           *(undefined8 *)(PTR_DAT_14c727378 + 0x70),
                           *(undefined8 *)(PTR_DAT_14c727378 + 0x78),0);
        if (iVar2 != 1) {
          return uVar6;
        }
        if (local_608 == local_5f8) {
          return uVar6;
        }
        param_2[lVar5] = local_608;
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 1;
      } while (lVar5 < param_3);
    }
    return uVar6;
  }
  return 0;
}



// FUNCTION 144f59f50 FUN_144f59f50 body=71 status=ok
// SIG undefined FUN_144f59f50(void)

undefined8 * FUN_144f59f50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkStackTracer::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(3,param_1,0);
      return param_1;
    }
    FUN_144bda120((char)param_1,8);
  }
  return param_1;
}



// FUNCTION 144f59fa0 FUN_144f59fa0 body=419 status=ok
// SIG undefined FUN_144f59fa0(void)

void FUN_144f59fa0(LPCRITICAL_SECTION param_1)

{
  uint uVar1;
  UINT uMode;
  HMODULE pHVar2;
  FARPROC pFVar3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  HANDLE pvVar5;
  
  if (*(char *)((longlong)&param_1[1].DebugInfo + 1) == '\0') {
    EnterCriticalSection(param_1);
    if (*(char *)((longlong)&param_1[1].DebugInfo + 1) == '\0') {
      pHVar2 = LoadLibraryW((LPCWSTR)PTR_u_dbghelp_dll_14c727370);
      *(HMODULE *)&param_1[1].LockCount = pHVar2;
      if (pHVar2 == (HMODULE)0x0) {
        OutputDebugStringA("Havok StackTracer: hkStackTracer: Unable to load dbghelp.dll\r\n");
      }
      if (*(HMODULE *)&param_1[1].LockCount != (HMODULE)0x0) {
        pFVar3 = GetProcAddress(*(HMODULE *)&param_1[1].LockCount,"SymInitialize");
        param_1[1].OwningThread = pFVar3;
        pFVar3 = GetProcAddress(*(HMODULE *)&param_1[1].LockCount,"SymRefreshModuleList");
        param_1[1].LockSemaphore = pFVar3;
        if (pFVar3 == (FARPROC)0x0) {
          OutputDebugStringA(
                            "Havok StackTracer: Could not load symbol SymRefreshModuleList from dbghelp.dll, version too old, but will continue without it.\r\n"
                            );
        }
        pFVar3 = GetProcAddress(*(HMODULE *)&param_1[1].LockCount,"SymLoadModuleEx");
        param_1[1].SpinCount = (ULONG_PTR)pFVar3;
        if (pFVar3 == (FARPROC)0x0) {
          OutputDebugStringA(
                            "Havok StackTracer: Could not load symbol SymLoadModuleEx from dbghelp.dll, version too old, but will continue without it.\r\n"
                            );
        }
        p_Var4 = (PRTL_CRITICAL_SECTION_DEBUG)
                 GetProcAddress(*(HMODULE *)&param_1[1].LockCount,"SymGetOptions");
        pHVar2 = *(HMODULE *)&param_1[1].LockCount;
        param_1[2].DebugInfo = p_Var4;
        pFVar3 = GetProcAddress(pHVar2,"SymSetOptions");
        *(FARPROC *)&param_1[2].LockCount = pFVar3;
        pFVar3 = GetProcAddress(*(HMODULE *)&param_1[1].LockCount,"SymFromAddr");
        pHVar2 = *(HMODULE *)&param_1[1].LockCount;
        param_1[2].OwningThread = pFVar3;
        pFVar3 = GetProcAddress(pHVar2,"StackWalk64");
        pHVar2 = *(HMODULE *)&param_1[1].LockCount;
        param_1[2].LockSemaphore = pFVar3;
        pFVar3 = GetProcAddress(pHVar2,"SymFunctionTableAccess64");
        pHVar2 = *(HMODULE *)&param_1[1].LockCount;
        param_1[2].SpinCount = (ULONG_PTR)pFVar3;
        p_Var4 = (PRTL_CRITICAL_SECTION_DEBUG)GetProcAddress(pHVar2,"SymGetModuleBase64");
        pHVar2 = *(HMODULE *)&param_1[1].LockCount;
        param_1[3].DebugInfo = p_Var4;
        pFVar3 = GetProcAddress(pHVar2,"SymGetLineFromAddr64");
        *(FARPROC *)&param_1[3].LockCount = pFVar3;
        uVar1 = (*(code *)param_1[2].DebugInfo)();
        (**(code **)&param_1[2].LockCount)(uVar1 | 0x14);
        uMode = GetErrorMode();
        SetErrorMode(1);
        pvVar5 = GetCurrentProcess();
        (*param_1[1].OwningThread)(pvVar5,0,1);
        SetErrorMode(uMode);
        *(undefined1 *)((longlong)&param_1[1].DebugInfo + 1) = 1;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000144f5a136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 144f5a150 FUN_144f5a150 body=10 status=ok
// SIG undefined FUN_144f5a150(void)

undefined4 * FUN_144f5a150(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f5a160 FUN_144f5a160 body=22 status=ok
// SIG undefined FUN_144f5a160(void)

undefined4 *
FUN_144f5a160(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  *param_2 = 0x80040200;
  *param_5 = 0;
  return param_2;
}



// FUNCTION 144f5a180 FUN_144f5a180 body=87 status=ok
// SIG undefined FUN_144f5a180(void)

undefined8 FUN_144f5a180(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144f5a1e0 FUN_144f5a1e0 body=48 status=ok
// SIG undefined FUN_144f5a1e0(void)

longlong * FUN_144f5a1e0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = param_2;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    param_1[1] = lVar1 + param_2;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 144f5a210 FUN_144f5a210 body=146 status=ok
// SIG undefined FUN_144f5a210(void)

undefined8 * FUN_144f5a210(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 *puVar5;
  
  puVar5 = (undefined1 *)*param_1;
  puVar1 = (undefined1 *)param_1[1];
  if (puVar5 == puVar1) {
    uVar2 = param_1[1];
    *param_2 = *param_1;
    param_2[1] = uVar2;
    return param_2;
  }
  while ((puVar5 < puVar1 && (cVar4 = FUN_144bfb950(*puVar5), cVar4 != '\0'))) {
    puVar5 = puVar5 + 1;
  }
  do {
    puVar3 = puVar1;
    puVar1 = puVar3 + -1;
    if (puVar1 <= puVar5) break;
    cVar4 = FUN_144bfb950(*puVar1);
  } while (cVar4 != '\0');
  *param_2 = puVar5;
  param_2[1] = puVar3;
  return param_2;
}



// FUNCTION 144f5a2b0 FUN_144f5a2b0 body=69 status=ok
// SIG undefined FUN_144f5a2b0(void)

undefined8 * FUN_144f5a2b0(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)*param_1;
  pcVar3 = (char *)param_1[1];
  if (pcVar2 != pcVar3) {
    while (*pcVar2 == param_3) {
      pcVar2 = pcVar2 + 1;
      if (pcVar2 == pcVar3) {
        *param_2 = pcVar2;
        param_2[1] = pcVar3;
        return param_2;
      }
    }
    do {
      pcVar1 = pcVar3 + -1;
      if (pcVar3[-1] != param_3) break;
      pcVar3 = pcVar1;
    } while (pcVar2 != pcVar1);
  }
  *param_2 = pcVar2;
  param_2[1] = pcVar3;
  return param_2;
}



// FUNCTION 144f5a300 FUN_144f5a300 body=104 status=ok
// SIG undefined FUN_144f5a300(void)

ulonglong FUN_144f5a300(longlong *param_1,undefined8 *param_2)

{
  void *_Buf1;
  int iVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  ulonglong _Size;
  
  _Size = param_2[1] - (longlong)*param_2;
  _Buf1 = (void *)*param_1;
  uVar2 = param_1[1] - (longlong)_Buf1;
  if (_Size <= uVar2) {
    iVar1 = memcmp(_Buf1,(void *)*param_2,_Size);
    uVar2 = CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      *param_1 = (longlong)_Buf1 + _Size;
      return CONCAT71((int7)((longlong)_Buf1 + _Size >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 144f5a370 FUN_144f5a370 body=36 status=ok
// SIG undefined FUN_144f5a370(void)

void * FUN_144f5a370(longlong *param_1,char param_2,ulonglong param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  
  uVar2 = param_1[1] - *param_1;
  if (param_3 < uVar2) {
    pvVar1 = memchr((void *)(*param_1 + param_3),(int)param_2,uVar2 - param_3);
    return pvVar1;
  }
  return (void *)0x0;
}



// FUNCTION 144f5a3a0 FUN_144f5a3a0 body=134 status=ok
// SIG undefined FUN_144f5a3a0(void)

void * FUN_144f5a3a0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  void *_Buf2;
  longlong lVar1;
  int iVar2;
  void *_Buf1;
  size_t _Size;
  
  _Buf2 = (void *)*param_2;
  _Size = param_2[1] - (longlong)_Buf2;
  if (_Size == 0) {
    return (void *)*param_1;
  }
  lVar1 = param_1[1];
  if (_Size + param_3 <= (ulonglong)(lVar1 - *param_1)) {
    _Buf1 = (void *)(*param_1 + param_3);
    do {
      iVar2 = memcmp(_Buf1,_Buf2,_Size);
      if (iVar2 == 0) {
        return _Buf1;
      }
      _Buf1 = (void *)((longlong)_Buf1 + 1);
    } while (_Buf1 != (void *)((lVar1 - _Size) + 1));
  }
  return (void *)0x0;
}



// FUNCTION 144f5a430 FUN_144f5a430 body=31 status=ok
// SIG undefined FUN_144f5a430(void)

char * FUN_144f5a430(undefined8 *param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)param_1[1];
  do {
    if (pcVar1 == (char *)*param_1) {
      return (char *)0x0;
    }
    pcVar1 = pcVar1 + -1;
  } while (*pcVar1 != param_2);
  return pcVar1;
}



// FUNCTION 144f5a450 FUN_144f5a450 body=57 status=ok
// SIG undefined FUN_144f5a450(void)

int FUN_144f5a450(longlong *param_1,char param_2,int param_3)

{
  longlong lVar1;
  void *pvVar2;
  
  lVar1 = *param_1;
  pvVar2 = (void *)(param_3 + lVar1);
  pvVar2 = memchr(pvVar2,(int)param_2,param_1[1] - (longlong)pvVar2);
  if (pvVar2 != (void *)0x0) {
    return (int)pvVar2 - (int)lVar1;
  }
  return -1;
}



// FUNCTION 144f5a490 FUN_144f5a490 body=39 status=ok
// SIG undefined FUN_144f5a490(void)

int FUN_144f5a490(longlong *param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)param_1[1];
  do {
    pcVar1 = pcVar1 + -1;
    if (pcVar1 == (char *)(*param_1 + -1)) {
      return -1;
    }
  } while (*pcVar1 != param_2);
  return (int)pcVar1 - (int)*param_1;
}



// FUNCTION 144f5a4c0 FUN_144f5a4c0 body=57 status=ok
// SIG undefined FUN_144f5a4c0(void)

ulonglong FUN_144f5a4c0(undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*param_1;
  while( true ) {
    if (pbVar1 == (byte *)param_1[1]) {
      return (ulonglong)pbVar1 & 0xffffffffffffff00;
    }
    if ((*(uint *)(param_2 + (ulonglong)(*pbVar1 >> 5) * 4) >> (*pbVar1 & 0x1f) & 1) != 0) break;
    pbVar1 = pbVar1 + 1;
  }
  return CONCAT71((int7)((ulonglong)pbVar1 >> 8),1);
}



// FUNCTION 144f5a500 FUN_144f5a500 body=206 status=ok
// SIG undefined FUN_144f5a500(void)

undefined8 FUN_144f5a500(undefined8 *param_1,void *param_2)

{
  void *_Buf1;
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong _Size;
  
  if (param_2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)((longlong)param_2 + lVar3) != '\0');
    uVar4 = lVar3 + (longlong)param_2;
  }
  _Buf1 = (void *)*param_1;
  if (_Buf1 == param_2) {
    if (param_1[1] == uVar4) {
      return 0;
    }
    uVar2 = 1;
    if ((ulonglong)param_1[1] < uVar4) {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  uVar4 = uVar4 - (longlong)param_2;
  uVar5 = param_1[1] - (longlong)_Buf1;
  _Size = uVar4;
  if (uVar5 < uVar4) {
    _Size = uVar5;
  }
  iVar1 = memcmp(_Buf1,param_2,_Size);
  if (iVar1 != 0) {
    uVar2 = 1;
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  if (uVar5 == uVar4) {
    return 0;
  }
  uVar2 = 1;
  if (uVar5 < uVar4) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 144f5a5d0 FUN_144f5a5d0 body=60 status=ok
// SIG undefined FUN_144f5a5d0(void)

undefined8 FUN_144f5a5d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  size_t _Size;
  
  _Size = param_2[1] - (longlong)*param_2;
  if (_Size <= (ulonglong)(param_1[1] - (longlong)*param_1)) {
    iVar1 = memcmp((void *)*param_1,(void *)*param_2,_Size);
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  }
  return 0;
}



// FUNCTION 144f5a610 FUN_144f5a610 body=124 status=ok
// SIG undefined FUN_144f5a610(void)

undefined4 *
FUN_144f5a610(int *param_1,undefined4 *param_2,longlong param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[2] - *param_1;
  if (0 < param_5) {
    iVar2 = param_5 + -1;
    if (iVar3 < param_5) {
      iVar2 = iVar3;
    }
    FUN_144bfbb90(param_3,param_4,*(undefined8 *)param_1,iVar2);
    *(undefined1 *)(iVar2 + param_3) = 0;
  }
  uVar1 = 0;
  if (param_5 <= iVar3) {
    uVar1 = 0x80040200;
  }
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 144f5a690 FUN_144f5a690 body=107 status=ok
// SIG undefined FUN_144f5a690(void)

void FUN_144f5a690(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint *puVar2;
  char cVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  
  lVar1 = param_1[1];
  piVar4 = (int *)*param_1;
  if (lVar1 != 0) {
    cVar3 = FUN_144b45dd0(lVar1,&DAT_14c6dcad0);
    if (cVar3 != '\0') {
      puVar2 = (uint *)FUN_144b45d50(lVar1,local_res8);
      if ((*puVar2 >> 3 & 1) == 0) goto LAB_144f5a6da;
    }
  }
  piVar4 = (int *)0x0;
LAB_144f5a6da:
  FUN_144be0720(param_2,*(undefined8 *)piVar4,piVar4[2] - *piVar4);
  return;
}



// FUNCTION 144f5a700 FUN_144f5a700 body=42 status=ok
// SIG undefined FUN_144f5a700(void)

undefined4 * FUN_144f5a700(int *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_144be0720(param_4,*(undefined8 *)param_1,param_1[2] - *param_1);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f5a730 FUN_144f5a730 body=60 status=ok
// SIG undefined FUN_144f5a730(void)

undefined8 FUN_144f5a730(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  size_t _Size;
  
  _Size = param_1[1] - (longlong)*param_1;
  if (_Size == param_2[1] - (longlong)*param_2) {
    iVar1 = memcmp((void *)*param_1,(void *)*param_2,_Size);
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  }
  return 0;
}



// FUNCTION 144f5a770 FUN_144f5a770 body=242 status=ok
// SIG undefined FUN_144f5a770(void)

void FUN_144f5a770(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  void *pvVar2;
  longlong *plVar3;
  void *_Buf;
  int iVar4;
  int iVar5;
  void *pvVar6;
  
  *(undefined4 *)(param_2 + 1) = 0;
  _Buf = (void *)*param_1;
  lVar1 = param_1[1];
  pvVar6 = (void *)*param_1;
  iVar4 = 0;
  while (lVar1 - (longlong)_Buf != 0) {
    pvVar2 = memchr(_Buf,(int)param_3,lVar1 - (longlong)_Buf);
    iVar5 = iVar4 + 1;
    if (pvVar2 == (void *)0x0) break;
    _Buf = (void *)((longlong)pvVar2 + 1);
    if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar5) {
      FUN_144f5a870(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    plVar3 = (longlong *)((longlong)(int)param_2[1] * 0x10 + *param_2);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)pvVar6;
      plVar3[1] = (longlong)pvVar2;
    }
    *(int *)(param_2 + 1) = iVar5;
    pvVar6 = _Buf;
    iVar4 = iVar5;
  }
  iVar4 = iVar4 + 1;
  lVar1 = param_1[1];
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar4) {
    FUN_144f5a870(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  plVar3 = (longlong *)((longlong)(int)param_2[1] * 0x10 + *param_2);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)pvVar6;
    plVar3[1] = lVar1;
  }
  *(int *)(param_2 + 1) = iVar4;
  return;
}



// FUNCTION 144f5a870 FUN_144f5a870 body=266 status=ok
// SIG undefined FUN_144f5a870(void)

void FUN_144f5a870(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144f5a980 FUN_144f5a980 body=123 status=ok
// SIG undefined FUN_144f5a980(void)

void FUN_144f5a980(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f5aa00 FUN_144f5aa00 body=4921 status=ok
// SIG undefined FUN_144f5aa00(void)

undefined8 * FUN_144f5aa00(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint *puVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  ulonglong local_res18;
  undefined1 local_a8 [4];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined8 local_68;
  code *local_60;
  undefined8 *local_58;
  undefined1 local_50;
  undefined *local_48;
  undefined1 local_40;
  
  FUN_145303050();
  *param_1 = hkReflect::Detail::BuiltinTypeReg::vftable;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[3] = 0;
  FUN_144bdde80(param_1 + 6);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  FUN_144ff6a50(param_1 + 0x11);
  iVar4 = 1;
  local_a8[0] = 1;
  local_98 = 1;
  local_78 = 1;
  local_a4 = 0x3fff;
  local_a0 = 0x1fffffff;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_144f8a9e0(param_1 + 0x13,local_a8);
  param_1[0x1f] = param_1;
  param_1[0x20] = param_1 + 0x11;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  puVar5 = (uint *)FUN_144bef800(&DAT_14c7350f0,local_res8);
  uVar1 = *puVar5;
  if (*(int *)((longlong)param_1 + 0x84) < *(int *)(param_1 + 0x10) * 2) {
    FUN_144f5e760(param_1 + 0xf,local_res10,&PTR_vftable_14c6e47a0,
                  *(int *)((longlong)param_1 + 0x84) * 2 + 2);
  }
  iVar10 = 1;
  uVar8 = uVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar1 * -0x4f000000;
  lVar2 = param_1[0xf];
  uVar8 = uVar8 + (uVar8 >> 2) + 0x9e3779b9 & *(uint *)((longlong)param_1 + 0x84);
  uVar9 = (ulonglong)uVar8;
  uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  while (uVar3 != 0xffffffffffffffff) {
    uVar8 = (uint)uVar9;
    if (uVar3 == uVar1) {
      iVar10 = 0;
      break;
    }
    uVar8 = uVar8 + 1 & *(uint *)((longlong)param_1 + 0x84);
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar10;
  puVar7 = (ulonglong *)((longlong)(int)uVar8 * 0x10 + lVar2);
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = (ulonglong)uVar1;
  }
  puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)(int)uVar8 * 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &DAT_14c7350f0;
  }
  puVar5 = (uint *)FUN_144bef800(&DAT_14c735270,local_res8);
  uVar1 = *puVar5;
  if (*(int *)((longlong)param_1 + 0x84) < *(int *)(param_1 + 0x10) * 2) {
    FUN_144f5e760(param_1 + 0xf,local_res10,&PTR_vftable_14c6e47a0,
                  *(int *)((longlong)param_1 + 0x84) * 2 + 2);
  }
  uVar8 = uVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar1 * -0x4f000000;
  lVar2 = param_1[0xf];
  uVar8 = uVar8 + (uVar8 >> 2) + 0x9e3779b9 & *(uint *)((longlong)param_1 + 0x84);
  uVar9 = (ulonglong)uVar8;
  uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  while (iVar10 = 1, uVar3 != 0xffffffffffffffff) {
    uVar8 = (uint)uVar9;
    if (uVar3 == uVar1) {
      iVar10 = 0;
      break;
    }
    uVar8 = uVar8 + 1 & *(uint *)((longlong)param_1 + 0x84);
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar10;
  puVar7 = (ulonglong *)((longlong)(int)uVar8 * 0x10 + lVar2);
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = (ulonglong)uVar1;
  }
  puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)(int)uVar8 * 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &DAT_14c735270;
  }
  puVar5 = (uint *)FUN_144bef800(&DAT_14c7353f0,local_res8);
  uVar1 = *puVar5;
  if (*(int *)((longlong)param_1 + 0x84) < *(int *)(param_1 + 0x10) * 2) {
    FUN_144f5e760(param_1 + 0xf,local_res10,&PTR_vftable_14c6e47a0,
                  *(int *)((longlong)param_1 + 0x84) * 2 + 2);
  }
  uVar8 = uVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar1 * -0x4f000000;
  lVar2 = param_1[0xf];
  uVar8 = uVar8 + (uVar8 >> 2) + 0x9e3779b9 & *(uint *)((longlong)param_1 + 0x84);
  uVar9 = (ulonglong)uVar8;
  uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  while (iVar10 = 1, uVar3 != 0xffffffffffffffff) {
    uVar8 = (uint)uVar9;
    if (uVar3 == uVar1) {
      iVar10 = 0;
      break;
    }
    uVar8 = uVar8 + 1 & *(uint *)((longlong)param_1 + 0x84);
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar10;
  puVar7 = (ulonglong *)((longlong)(int)uVar8 * 0x10 + lVar2);
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = (ulonglong)uVar1;
  }
  puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)(int)uVar8 * 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &DAT_14c7353f0;
  }
  puVar5 = (uint *)FUN_144bef800(&DAT_14c735570,local_res8);
  uVar1 = *puVar5;
  if (*(int *)((longlong)param_1 + 0x84) < *(int *)(param_1 + 0x10) * 2) {
    FUN_144f5e760(param_1 + 0xf,local_res10,&PTR_vftable_14c6e47a0,
                  *(int *)((longlong)param_1 + 0x84) * 2 + 2);
  }
  uVar8 = uVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar1 * -0x4f000000;
  lVar2 = param_1[0xf];
  uVar8 = uVar8 + (uVar8 >> 2) + 0x9e3779b9 & *(uint *)((longlong)param_1 + 0x84);
  uVar9 = (ulonglong)uVar8;
  uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  while (iVar10 = 1, uVar3 != 0xffffffffffffffff) {
    uVar8 = (uint)uVar9;
    if (uVar3 == uVar1) {
      iVar10 = 0;
      break;
    }
    uVar8 = uVar8 + 1 & *(uint *)((longlong)param_1 + 0x84);
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar10;
  puVar7 = (ulonglong *)((longlong)(int)uVar8 * 0x10 + lVar2);
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = (ulonglong)uVar1;
  }
  puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)(int)uVar8 * 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &DAT_14c735570;
  }
  puVar5 = (uint *)FUN_144bef800(&DAT_14c7351b0,local_res8);
  uVar1 = *puVar5;
  if (*(int *)((longlong)param_1 + 0x84) < *(int *)(param_1 + 0x10) * 2) {
    FUN_144f5e760(param_1 + 0xf,local_res10,&PTR_vftable_14c6e47a0,
                  *(int *)((longlong)param_1 + 0x84) * 2 + 2);
  }
  iVar10 = 1;
  uVar8 = uVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar1 * -0x4f000000;
  lVar2 = param_1[0xf];
  uVar8 = uVar8 + (uVar8 >> 2) + 0x9e3779b9 & *(uint *)((longlong)param_1 + 0x84);
  uVar9 = (ulonglong)uVar8;
  uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  while (uVar3 != 0xffffffffffffffff) {
    uVar8 = (uint)uVar9;
    if (uVar3 == uVar1) {
      iVar10 = 0;
      break;
    }
    uVar8 = uVar8 + 1 & *(uint *)((longlong)param_1 + 0x84);
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar10;
  puVar7 = (ulonglong *)(lVar2 + (longlong)(int)uVar8 * 0x10);
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = (ulonglong)uVar1;
  }
  puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)(int)uVar8 * 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &DAT_14c7351b0;
  }
  puVar5 = (uint *)FUN_144bef800(&DAT_14c735330,local_res8);
  uVar1 = *puVar5;
  if (*(int *)((longlong)param_1 + 0x84) < *(int *)(param_1 + 0x10) * 2) {
    FUN_144f5e760(param_1 + 0xf,local_res10,&PTR_vftable_14c6e47a0,
                  *(int *)((longlong)param_1 + 0x84) * 2 + 2);
  }
  uVar8 = uVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar1 * -0x4f000000;
  lVar2 = param_1[0xf];
  uVar8 = uVar8 + (uVar8 >> 2) + 0x9e3779b9 & *(uint *)((longlong)param_1 + 0x84);
  uVar9 = (ulonglong)uVar8;
  uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  while (iVar10 = 1, uVar3 != 0xffffffffffffffff) {
    uVar8 = (uint)uVar9;
    if (uVar3 == uVar1) {
      iVar10 = 0;
      break;
    }
    uVar8 = uVar8 + 1 & *(uint *)((longlong)param_1 + 0x84);
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar10;
  puVar7 = (ulonglong *)(lVar2 + (longlong)(int)uVar8 * 0x10);
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = (ulonglong)uVar1;
  }
  puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)(int)uVar8 * 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &DAT_14c735330;
  }
  puVar5 = (uint *)FUN_144bef800(&DAT_14c7354b0,local_res8);
  uVar1 = *puVar5;
  if (*(int *)((longlong)param_1 + 0x84) < *(int *)(param_1 + 0x10) * 2) {
    FUN_144f5e760(param_1 + 0xf,local_res10,&PTR_vftable_14c6e47a0,
                  *(int *)((longlong)param_1 + 0x84) * 2 + 2);
  }
  uVar8 = uVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar1 * -0x4f000000;
  lVar2 = param_1[0xf];
  uVar8 = uVar8 + (uVar8 >> 2) + 0x9e3779b9 & *(uint *)((longlong)param_1 + 0x84);
  uVar9 = (ulonglong)uVar8;
  uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  while (iVar10 = 1, uVar3 != 0xffffffffffffffff) {
    uVar8 = (uint)uVar9;
    if (uVar3 == uVar1) {
      iVar10 = 0;
      break;
    }
    uVar8 = uVar8 + 1 & *(uint *)((longlong)param_1 + 0x84);
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar10;
  puVar7 = (ulonglong *)(lVar2 + (longlong)(int)uVar8 * 0x10);
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = (ulonglong)uVar1;
  }
  puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)(int)uVar8 * 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &DAT_14c7354b0;
  }
  puVar5 = (uint *)FUN_144bef800(&DAT_14c735630,local_res8);
  uVar1 = *puVar5;
  if (*(int *)((longlong)param_1 + 0x84) < *(int *)(param_1 + 0x10) * 2) {
    FUN_144f5e760(param_1 + 0xf,local_res10,&PTR_vftable_14c6e47a0,
                  *(int *)((longlong)param_1 + 0x84) * 2 + 2);
  }
  uVar8 = uVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar1 * -0x4f000000;
  lVar2 = param_1[0xf];
  uVar8 = uVar8 + (uVar8 >> 2) + 0x9e3779b9 & *(uint *)((longlong)param_1 + 0x84);
  uVar9 = (ulonglong)uVar8;
  uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  while (iVar10 = 1, uVar3 != 0xffffffffffffffff) {
    uVar8 = (uint)uVar9;
    if (uVar3 == uVar1) {
      iVar10 = 0;
      break;
    }
    uVar8 = uVar8 + 1 & *(uint *)((longlong)param_1 + 0x84);
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar10;
  puVar7 = (ulonglong *)(lVar2 + (longlong)(int)uVar8 * 0x10);
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = (ulonglong)uVar1;
  }
  puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)(int)uVar8 * 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &DAT_14c735630;
  }
  puVar5 = (uint *)FUN_144bef800(&DAT_14c735150,local_res8);
  uVar1 = *puVar5;
  if (*(int *)((longlong)param_1 + 0x84) < *(int *)(param_1 + 0x10) * 2) {
    FUN_144f5e760(param_1 + 0xf,local_res10,&PTR_vftable_14c6e47a0,
                  *(int *)((longlong)param_1 + 0x84) * 2 + 2);
  }
  uVar8 = uVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar1 * -0x4f000000;
  lVar2 = param_1[0xf];
  uVar8 = uVar8 + (uVar8 >> 2) + 0x9e3779b9 & *(uint *)((longlong)param_1 + 0x84);
  uVar9 = (ulonglong)uVar8;
  uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  while (iVar10 = 1, uVar3 != 0xffffffffffffffff) {
    uVar8 = (uint)uVar9;
    if (uVar3 == uVar1) {
      iVar10 = 0;
      break;
    }
    uVar8 = uVar8 + 1 & *(uint *)((longlong)param_1 + 0x84);
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar10;
  puVar7 = (ulonglong *)(lVar2 + (longlong)(int)uVar8 * 0x10);
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = (ulonglong)uVar1;
  }
  puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)(int)uVar8 * 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &DAT_14c735150;
  }
  puVar5 = (uint *)FUN_144bef800(&DAT_14c7352d0,local_res8);
  uVar1 = *puVar5;
  if (*(int *)((longlong)param_1 + 0x84) < *(int *)(param_1 + 0x10) * 2) {
    FUN_144f5e760(param_1 + 0xf,local_res10,&PTR_vftable_14c6e47a0,
                  *(int *)((longlong)param_1 + 0x84) * 2 + 2);
  }
  uVar8 = uVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar1 * -0x4f000000;
  lVar2 = param_1[0xf];
  uVar8 = uVar8 + (uVar8 >> 2) + 0x9e3779b9 & *(uint *)((longlong)param_1 + 0x84);
  uVar9 = (ulonglong)uVar8;
  uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  while (iVar10 = 1, uVar3 != 0xffffffffffffffff) {
    uVar8 = (uint)uVar9;
    if (uVar3 == uVar1) {
      iVar10 = 0;
      break;
    }
    uVar8 = uVar8 + 1 & *(uint *)((longlong)param_1 + 0x84);
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar10;
  puVar7 = (ulonglong *)(lVar2 + (longlong)(int)uVar8 * 0x10);
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = (ulonglong)uVar1;
  }
  puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)(int)uVar8 * 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &DAT_14c7352d0;
  }
  puVar5 = (uint *)FUN_144bef800(&DAT_14c735450,local_res8);
  uVar1 = *puVar5;
  if (*(int *)((longlong)param_1 + 0x84) < *(int *)(param_1 + 0x10) * 2) {
    FUN_144f5e760(param_1 + 0xf,local_res10,&PTR_vftable_14c6e47a0,
                  *(int *)((longlong)param_1 + 0x84) * 2 + 2);
  }
  uVar8 = uVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar1 * -0x4f000000;
  lVar2 = param_1[0xf];
  uVar8 = uVar8 + (uVar8 >> 2) + 0x9e3779b9 & *(uint *)((longlong)param_1 + 0x84);
  uVar9 = (ulonglong)uVar8;
  uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  while (iVar10 = 1, uVar3 != 0xffffffffffffffff) {
    uVar8 = (uint)uVar9;
    if (uVar3 == uVar1) {
      iVar10 = 0;
      break;
    }
    uVar8 = uVar8 + 1 & *(uint *)((longlong)param_1 + 0x84);
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar10;
  puVar7 = (ulonglong *)((longlong)(int)uVar8 * 0x10 + lVar2);
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = (ulonglong)uVar1;
  }
  puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)(int)uVar8 * 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &DAT_14c735450;
  }
  puVar5 = (uint *)FUN_144bef800(&DAT_14c7355d0,local_res8);
  uVar1 = *puVar5;
  if (*(int *)((longlong)param_1 + 0x84) < *(int *)(param_1 + 0x10) * 2) {
    FUN_144f5e760(param_1 + 0xf,local_res10,&PTR_vftable_14c6e47a0,
                  *(int *)((longlong)param_1 + 0x84) * 2 + 2);
  }
  uVar8 = uVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar1 * -0x4f000000;
  lVar2 = param_1[0xf];
  uVar8 = uVar8 + (uVar8 >> 2) + 0x9e3779b9 & *(uint *)((longlong)param_1 + 0x84);
  uVar9 = (ulonglong)uVar8;
  uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  while (iVar10 = 1, uVar3 != 0xffffffffffffffff) {
    uVar8 = (uint)uVar9;
    if (uVar3 == uVar1) {
      iVar10 = 0;
      break;
    }
    uVar8 = uVar8 + 1 & *(uint *)((longlong)param_1 + 0x84);
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar10;
  puVar7 = (ulonglong *)((longlong)(int)uVar8 * 0x10 + lVar2);
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = (ulonglong)uVar1;
  }
  puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)(int)uVar8 * 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &DAT_14c7355d0;
  }
  puVar5 = (uint *)FUN_144bef800(&DAT_14c735210,local_res8);
  uVar1 = *puVar5;
  if (*(int *)((longlong)param_1 + 0x84) < *(int *)(param_1 + 0x10) * 2) {
    FUN_144f5e760(param_1 + 0xf,local_res10,&PTR_vftable_14c6e47a0,
                  *(int *)((longlong)param_1 + 0x84) * 2 + 2);
  }
  iVar10 = 1;
  uVar8 = uVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar1 * -0x4f000000;
  lVar2 = param_1[0xf];
  uVar8 = uVar8 + (uVar8 >> 2) + 0x9e3779b9 & *(uint *)((longlong)param_1 + 0x84);
  uVar9 = (ulonglong)uVar8;
  uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  while (uVar3 != 0xffffffffffffffff) {
    uVar8 = (uint)uVar9;
    if (uVar3 == uVar1) {
      iVar10 = 0;
      break;
    }
    uVar8 = uVar8 + 1 & *(uint *)((longlong)param_1 + 0x84);
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar10;
  puVar7 = (ulonglong *)((longlong)(int)uVar8 * 0x10 + lVar2);
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = (ulonglong)uVar1;
  }
  puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)(int)uVar8 * 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &DAT_14c735210;
  }
  puVar5 = (uint *)FUN_144bef800(&DAT_14c735390,local_res8);
  uVar1 = *puVar5;
  if (*(int *)((longlong)param_1 + 0x84) < *(int *)(param_1 + 0x10) * 2) {
    FUN_144f5e760(param_1 + 0xf,local_res10,&PTR_vftable_14c6e47a0,
                  *(int *)((longlong)param_1 + 0x84) * 2 + 2);
  }
  uVar8 = uVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar1 * -0x4f000000;
  lVar2 = param_1[0xf];
  uVar8 = uVar8 + (uVar8 >> 2) + 0x9e3779b9 & *(uint *)((longlong)param_1 + 0x84);
  uVar9 = (ulonglong)uVar8;
  uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  while (iVar10 = 1, uVar3 != 0xffffffffffffffff) {
    uVar8 = (uint)uVar9;
    if (uVar3 == uVar1) {
      iVar10 = 0;
      break;
    }
    uVar8 = uVar8 + 1 & *(uint *)((longlong)param_1 + 0x84);
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar10;
  puVar7 = (ulonglong *)((longlong)(int)uVar8 * 0x10 + lVar2);
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = (ulonglong)uVar1;
  }
  puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)(int)uVar8 * 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &DAT_14c735390;
  }
  puVar5 = (uint *)FUN_144bef800(&DAT_14c735510,local_res8);
  uVar1 = *puVar5;
  if (*(int *)((longlong)param_1 + 0x84) < *(int *)(param_1 + 0x10) * 2) {
    FUN_144f5e760(param_1 + 0xf,local_res10,&PTR_vftable_14c6e47a0,
                  *(int *)((longlong)param_1 + 0x84) * 2 + 2);
  }
  uVar8 = uVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar1 * -0x4f000000;
  lVar2 = param_1[0xf];
  uVar8 = uVar8 + (uVar8 >> 2) + 0x9e3779b9 & *(uint *)((longlong)param_1 + 0x84);
  uVar9 = (ulonglong)uVar8;
  uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  while (iVar10 = 1, uVar3 != 0xffffffffffffffff) {
    uVar8 = (uint)uVar9;
    if (uVar3 == uVar1) {
      iVar10 = 0;
      break;
    }
    uVar8 = uVar8 + 1 & *(uint *)((longlong)param_1 + 0x84);
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar10;
  puVar7 = (ulonglong *)((longlong)(int)uVar8 * 0x10 + lVar2);
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = (ulonglong)uVar1;
  }
  puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)(int)uVar8 * 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &DAT_14c735510;
  }
  puVar5 = (uint *)FUN_144bef800(&DAT_14c735690,local_res8);
  uVar1 = *puVar5;
  if (*(int *)((longlong)param_1 + 0x84) < *(int *)(param_1 + 0x10) * 2) {
    FUN_144f5e760(param_1 + 0xf,local_res10,&PTR_vftable_14c6e47a0,
                  *(int *)((longlong)param_1 + 0x84) * 2 + 2);
  }
  uVar8 = uVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar1 * -0x4f000000;
  lVar2 = param_1[0xf];
  uVar8 = uVar8 + (uVar8 >> 2) + 0x9e3779b9 & *(uint *)((longlong)param_1 + 0x84);
  uVar9 = (ulonglong)uVar8;
  uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  do {
    if (uVar3 == 0xffffffffffffffff) {
LAB_144f5b906:
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar4;
      puVar7 = (ulonglong *)((longlong)(int)uVar8 * 0x10 + lVar2);
      if (puVar7 != (ulonglong *)0x0) {
        *puVar7 = (ulonglong)uVar1;
      }
      puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)(int)uVar8 * 0x10);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &DAT_14c735690;
      }
      puVar5 = (uint *)FUN_144bef800(&DAT_14c7357b0,local_res8);
      uVar1 = *puVar5;
      local_res18 = (ulonglong)uVar1;
      iVar4 = FUN_144f5e920(param_1 + 0xf,&PTR_vftable_14c6e47a0,&local_res18,local_res10);
      puVar7 = (ulonglong *)(param_1[0xf] + (longlong)iVar4 * 0x10);
      if (puVar7 != (ulonglong *)0x0) {
        *puVar7 = (ulonglong)uVar1;
      }
      puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)iVar4 * 0x10);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &DAT_14c7357b0;
      }
      puVar5 = (uint *)FUN_144bef800(&DAT_14c735870,local_res8);
      uVar1 = *puVar5;
      local_res18 = (ulonglong)uVar1;
      iVar4 = FUN_144f5e920(param_1 + 0xf,&PTR_vftable_14c6e47a0,&local_res18,local_res10);
      puVar7 = (ulonglong *)(param_1[0xf] + (longlong)iVar4 * 0x10);
      if (puVar7 != (ulonglong *)0x0) {
        *puVar7 = (ulonglong)uVar1;
      }
      puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)iVar4 * 0x10);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &DAT_14c735870;
      }
      puVar5 = (uint *)FUN_144bef800(&DAT_14c735810,local_res8);
      uVar1 = *puVar5;
      local_res18 = (ulonglong)uVar1;
      iVar4 = FUN_144f5e920(param_1 + 0xf,&PTR_vftable_14c6e47a0,&local_res18,local_res10);
      puVar7 = (ulonglong *)(param_1[0xf] + (longlong)iVar4 * 0x10);
      if (puVar7 != (ulonglong *)0x0) {
        *puVar7 = (ulonglong)uVar1;
      }
      puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)iVar4 * 0x10);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &DAT_14c735810;
      }
      puVar5 = (uint *)FUN_144bef800(&DAT_14c7358d0,local_res8);
      uVar1 = *puVar5;
      local_res18 = (ulonglong)uVar1;
      iVar4 = FUN_144f5e920(param_1 + 0xf,&PTR_vftable_14c6e47a0,&local_res18,local_res10);
      puVar7 = (ulonglong *)(param_1[0xf] + (longlong)iVar4 * 0x10);
      if (puVar7 != (ulonglong *)0x0) {
        *puVar7 = (ulonglong)uVar1;
      }
      puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)iVar4 * 0x10);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &DAT_14c7358d0;
      }
      puVar5 = (uint *)FUN_144bef800(&DAT_14c7356f0,local_res8);
      uVar1 = *puVar5;
      local_res18 = (ulonglong)uVar1;
      iVar4 = FUN_144f5e920(param_1 + 0xf,&PTR_vftable_14c6e47a0,&local_res18,local_res10);
      puVar7 = (ulonglong *)(param_1[0xf] + (longlong)iVar4 * 0x10);
      if (puVar7 != (ulonglong *)0x0) {
        *puVar7 = (ulonglong)uVar1;
      }
      puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)iVar4 * 0x10);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &DAT_14c7356f0;
      }
      puVar5 = (uint *)FUN_144bef800(&DAT_14c735750,local_res8);
      uVar1 = *puVar5;
      local_res18 = (ulonglong)uVar1;
      iVar4 = FUN_144f5e920(param_1 + 0xf,&PTR_vftable_14c6e47a0,&local_res18,local_res10);
      puVar7 = (ulonglong *)(param_1[0xf] + (longlong)iVar4 * 0x10);
      if (puVar7 != (ulonglong *)0x0) {
        *puVar7 = (ulonglong)uVar1;
      }
      puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)iVar4 * 0x10);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &DAT_14c735750;
      }
      puVar5 = (uint *)FUN_144bef800(&DAT_14c6dbc10,local_res8);
      uVar1 = *puVar5;
      local_res18 = (ulonglong)uVar1;
      iVar4 = FUN_144f5e920(param_1 + 0xf,&PTR_vftable_14c6e47a0,&local_res18,local_res10);
      puVar7 = (ulonglong *)(param_1[0xf] + (longlong)iVar4 * 0x10);
      if (puVar7 != (ulonglong *)0x0) {
        *puVar7 = (ulonglong)uVar1;
      }
      puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)iVar4 * 0x10);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &DAT_14c6dbc10;
      }
      puVar5 = (uint *)FUN_144bef800(&DAT_14c6dbc70,local_res8);
      uVar1 = *puVar5;
      local_res18 = (ulonglong)uVar1;
      iVar4 = FUN_144f5e920(param_1 + 0xf,&PTR_vftable_14c6e47a0,&local_res18,local_res10);
      puVar7 = (ulonglong *)(param_1[0xf] + (longlong)iVar4 * 0x10);
      if (puVar7 != (ulonglong *)0x0) {
        *puVar7 = (ulonglong)uVar1;
      }
      puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)iVar4 * 0x10);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &DAT_14c6dbc70;
      }
      puVar5 = (uint *)FUN_144bef800(&DAT_14c6dbcd0,local_res8);
      uVar1 = *puVar5;
      local_res18 = (ulonglong)uVar1;
      iVar4 = FUN_144f5e920(param_1 + 0xf,&PTR_vftable_14c6e47a0,&local_res18,local_res10);
      puVar7 = (ulonglong *)(param_1[0xf] + (longlong)iVar4 * 0x10);
      if (puVar7 != (ulonglong *)0x0) {
        *puVar7 = (ulonglong)uVar1;
      }
      puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)iVar4 * 0x10);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &DAT_14c6dbcd0;
      }
      puVar5 = (uint *)FUN_144bef800(&DAT_14c6dbd90,local_res8);
      uVar1 = *puVar5;
      local_res18 = (ulonglong)uVar1;
      iVar4 = FUN_144f5e920(param_1 + 0xf,&PTR_vftable_14c6e47a0,&local_res18,local_res10);
      puVar7 = (ulonglong *)(param_1[0xf] + (longlong)iVar4 * 0x10);
      if (puVar7 != (ulonglong *)0x0) {
        *puVar7 = (ulonglong)uVar1;
      }
      puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)iVar4 * 0x10);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &DAT_14c6dbd90;
      }
      puVar5 = (uint *)FUN_144bef800(&DAT_14c6da958,local_res8);
      uVar1 = *puVar5;
      local_res18 = (ulonglong)uVar1;
      iVar4 = FUN_144f5e920(param_1 + 0xf,&PTR_vftable_14c6e47a0,&local_res18,local_res10);
      puVar7 = (ulonglong *)(param_1[0xf] + (longlong)iVar4 * 0x10);
      if (puVar7 != (ulonglong *)0x0) {
        *puVar7 = (ulonglong)uVar1;
      }
      puVar6 = (undefined8 *)(param_1[0xf] + 8 + (longlong)iVar4 * 0x10);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &DAT_14c6da958;
      }
      *(undefined4 *)(param_1 + 0x23) = 0;
      local_48 = &DAT_14c797e70;
      local_6c = 0x3fff;
      local_60 = FUN_144f5ea80;
      local_68 = 0x1fffffff;
      local_50 = 0;
      local_40 = 1;
      local_70[0] = 0;
      local_58 = param_1 + 0x1f;
      FUN_144f8aab0(param_1 + 0x13,local_70);
      return param_1;
    }
    uVar8 = (uint)uVar9;
    if (uVar3 == uVar1) {
      iVar4 = 0;
      goto LAB_144f5b906;
    }
    uVar8 = uVar8 + 1 & *(uint *)((longlong)param_1 + 0x84);
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(ulonglong *)(lVar2 + uVar9 * 0x10);
  } while( true );
}



// FUNCTION 144f5bd40 FUN_144f5bd40 body=311 status=ok
// SIG undefined FUN_144f5bd40(void)

void FUN_144f5bd40(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = hkReflect::Detail::BuiltinTypeReg::vftable;
  lVar1 = (longlong)(*(int *)(param_1 + 0xe) + -1);
  if (-1 < *(int *)(param_1 + 0xe) + -1) {
    do {
      FUN_144f67e50(*(undefined8 *)(param_1[0xd] + lVar1 * 8));
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  FUN_144f5a980(param_1 + 0x13);
  FUN_144ff6ac0(param_1 + 0x11);
  FUN_144f5e9f0(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xd],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x74) & 0x7fffffff) << 3);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xb],
               (ulonglong)(*(uint *)((longlong)param_1 + 100) & 0x7fffffff) << 3);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 3);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_145303070(param_1);
  return;
}



// FUNCTION 144f5be80 FUN_144f5be80 body=1086 status=ok
// SIG undefined FUN_144f5be80(void)

ulonglong FUN_144f5be80(longlong param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  code *pcVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 *local_318;
  code *pcStack_310;
  undefined4 *local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 *local_2e8;
  code *pcStack_2e0;
  undefined4 *local_2d8;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8 [16];
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined1 *local_288;
  int local_280;
  uint local_27c;
  undefined1 local_278 [128];
  undefined1 local_1f8 [80];
  undefined1 local_1a8 [368];
  
  uVar15 = 0;
  cVar6 = FUN_144bfb970(param_2);
  if (cVar6 != '\0') {
    return 0;
  }
  FUN_144f5a1e0(&local_2c8,param_2);
  local_280 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_288 = local_278;
  local_2f8 = (undefined1 *)CONCAT44(uStack_2c4,local_2c8);
  uStack_2f0 = (code *)CONCAT44(uStack_2bc,uStack_2c0);
  local_27c = 0x80000008;
  piVar8 = (int *)FUN_144f5ecd0(local_res18,&local_2f8,&local_2b8,&local_288);
  uVar11 = uVar15;
  uVar13 = uVar15;
  if (*piVar8 < 0) {
    if ((1 < DAT_14c797ec0) || (cVar6 = FUN_144bdbf80(), cVar6 != '\0')) {
      cVar6 = FUN_144bdbf80();
      if (cVar6 == '\0') {
        uVar9 = FUN_144bdc640(local_1f8);
        local_318 = &DAT_00000001;
        pcStack_310 = FUN_144c19e40;
        local_308 = &local_2c8;
        local_2e8 = &DAT_00000001;
        pcStack_2e0 = FUN_144c19e40;
        local_2d8 = local_308;
        lVar10 = FUN_144bdc480(uVar9,"Failed to parse invalid type name \'{}\' for registry lookup."
                               ,&local_2e8,0);
        *(char **)(lVar10 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
        *(undefined8 *)(lVar10 + 0x40) = 0x23b;
        FUN_144bdc690(local_1f8);
      }
      else {
        uVar9 = FUN_144bdc810(local_1a8,&DAT_14c797e70,2);
        local_318 = &DAT_00000001;
        pcStack_310 = FUN_144c19e40;
        local_308 = &local_2c8;
        local_2e8 = &DAT_00000001;
        pcStack_2e0 = FUN_144c19e40;
        local_2d8 = local_308;
        lVar10 = FUN_144bdc480(uVar9,"Failed to parse invalid type name \'{}\' for registry lookup."
                               ,&local_2e8,0);
        *(char **)(lVar10 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
        *(undefined8 *)(lVar10 + 0x40) = 0x23b;
        FUN_144bdc8a0(local_1a8);
      }
    }
  }
  else {
    do {
      while (puVar5 = local_288, uVar4 = DAT_14c798a78, (DAT_14c798a78 & 1) != 0) {
        for (iVar7 = 1 << ((byte)uVar11 & 0x1f); 0 < iVar7; iVar7 = iVar7 + -1) {
        }
        if ((uint)uVar11 < 8) {
          uVar11 = (ulonglong)((uint)uVar11 + 1);
        }
      }
      puVar1 = *(ulonglong **)(param_1 + 0x18);
      puVar2 = (undefined1 *)CONCAT44(uStack_2c4,local_2c8);
      pcVar3 = (code *)CONCAT44(uStack_2bc,uStack_2c0);
      pcVar12 = (code *)(local_288 + (longlong)local_280 * 0x10);
      uStack_2f0 = pcVar12;
      local_2f8 = local_288;
      local_298 = (undefined4)local_2b8;
      uStack_294 = local_2b8._4_4_;
      uStack_290 = (undefined4)uStack_2b0;
      uStack_28c = uStack_2b0._4_4_;
      while (uVar13 = uVar15, puVar1 != (ulonglong *)0x0) {
        uVar9 = FUN_144beee40(puVar1[1]);
        iVar7 = FUN_144f5a500(&local_298,uVar9);
        iVar7 = -iVar7;
        if (iVar7 == 0) {
          *puVar1 = *puVar1 | 1;
          local_318 = puVar5;
          pcStack_310 = pcVar12;
          local_2e8 = puVar2;
          pcStack_2e0 = pcVar3;
          piVar8 = (int *)FUN_144f5f2b0(local_res20,puVar1[1],&local_318,local_res18,&local_2e8);
          if (*piVar8 < 0) break;
          iVar7 = local_res18[0];
          if (local_res18[0] == 0) {
            uVar13 = puVar1[1];
            break;
          }
        }
        if (iVar7 < 0) {
          puVar1 = (ulonglong *)puVar1[2];
        }
        else {
          puVar1 = (ulonglong *)puVar1[3];
        }
      }
      uVar11 = uVar15;
    } while (uVar4 != DAT_14c798a78);
    if (uVar13 == 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x30);
      EnterCriticalSection(lpCriticalSection);
      lVar10 = local_2b8;
      puVar14 = *(ulonglong **)(param_1 + 0x68);
      puVar1 = puVar14 + *(int *)(param_1 + 0x70);
      if (puVar14 != puVar1) {
        lVar16 = uStack_2b0 - local_2b8;
        do {
          uVar11 = *puVar14;
          uVar9 = FUN_144beee40(uVar11);
          cVar6 = FUN_144bfbf10(lVar10,lVar16,uVar9);
          if (cVar6 != '\0') {
            local_318 = (undefined1 *)CONCAT44(uStack_2c4,local_2c8);
            pcStack_310 = (code *)CONCAT44(uStack_2bc,uStack_2c0);
            uStack_2f0 = (code *)(local_288 + (longlong)local_280 * 0x10);
            local_2f8 = local_288;
            local_2e8 = local_288;
            local_res18[0] = 0;
            pcStack_2e0 = uStack_2f0;
            piVar8 = (int *)FUN_144f5f2b0(local_2a8,uVar11,&local_2e8,local_res18,&local_318);
            uVar13 = uVar15;
            if ((*piVar8 < 0) || (uVar13 = uVar11, local_res18[0] == 0)) {
              LeaveCriticalSection(lpCriticalSection);
              goto LAB_144f5c267;
            }
          }
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar1);
      }
      LeaveCriticalSection(lpCriticalSection);
      uVar13 = uVar15;
    }
  }
LAB_144f5c267:
  local_280 = 0;
  if ((-1 < (int)local_27c) && (local_288 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_288,(ulonglong)(local_27c & 0x7fffffff) << 4);
  }
  return uVar13;
}



// FUNCTION 144f5c2c0 FUN_144f5c2c0 body=380 status=ok
// SIG undefined FUN_144f5c2c0(void)

ulonglong FUN_144f5c2c0(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  undefined1 local_38 [32];
  
  do {
    uVar2 = DAT_14c798a78;
    uVar6 = 0;
    while (uVar5 = uVar6, (DAT_14c798a78 & 1) != 0) {
      for (iVar7 = 1 << ((byte)uVar5 & 0x1f); 0 < iVar7; iVar7 = iVar7 + -1) {
      }
      uVar6 = uVar5 + 1;
      if (7 < uVar5) {
        uVar6 = uVar5;
      }
    }
    puVar1 = *(ulonglong **)(param_1 + 0x18);
    uVar10 = 0;
    while ((puVar1 != (ulonglong *)0x0 && (uVar10 == 0))) {
      local_68 = *(undefined4 *)param_2;
      uStack_64 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_60 = *(undefined4 *)(param_2 + 1);
      uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
      puVar8 = (undefined8 *)FUN_144bef0c0(puVar1[1],local_48);
      local_58 = *puVar8;
      uStack_50 = puVar8[1];
      iVar7 = FUN_144bf0080(&local_58,&local_68);
      if (iVar7 == 0) {
        *puVar1 = *puVar1 | 1;
        uVar10 = puVar1[1];
      }
      else if (iVar7 < 0) {
        puVar1 = (ulonglong *)puVar1[2];
      }
      else {
        puVar1 = (ulonglong *)puVar1[3];
      }
    }
  } while (uVar2 != DAT_14c798a78);
  if (uVar10 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    puVar11 = *(ulonglong **)(param_1 + 0x68);
    puVar1 = puVar11 + *(int *)(param_1 + 0x70);
    for (; puVar11 != puVar1; puVar11 = puVar11 + 1) {
      uVar2 = *puVar11;
      uVar3 = *param_2;
      uVar4 = param_2[1];
      puVar9 = (undefined4 *)FUN_144bef0c0(uVar2,local_38);
      local_68 = *puVar9;
      uStack_64 = puVar9[1];
      uStack_60 = puVar9[2];
      uStack_5c = puVar9[3];
      local_58 = uVar3;
      uStack_50 = uVar4;
      iVar7 = FUN_144bf0080(&local_68,&local_58);
      if (iVar7 == 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
        return uVar2;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    uVar10 = 0;
  }
  return uVar10;
}



// FUNCTION 144f5c440 FUN_144f5c440 body=143 status=ok
// SIG undefined FUN_144f5c440(void)

ulonglong FUN_144f5c440(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x84);
  if (0 < (int)uVar1) {
    uVar4 = param_2 * -0x61c8864f;
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | param_2 * -0x4f000000;
    uVar4 = uVar4 + (uVar4 >> 2) + 0x9e3779b9 & uVar1;
    puVar3 = (ulonglong *)((ulonglong)uVar4 * 0x10 + *(longlong *)(param_1 + 0x78));
    uVar2 = *puVar3;
    while (uVar2 != 0xffffffffffffffff) {
      if (uVar2 == param_2) {
        return puVar3[1];
      }
      uVar4 = uVar4 + 1 & uVar1;
      puVar3 = (ulonglong *)((ulonglong)uVar4 * 0x10 + *(longlong *)(param_1 + 0x78));
      uVar2 = *puVar3;
    }
  }
  return 0;
}



// FUNCTION 144f5c4d0 FUN_144f5c4d0 body=3174 status=ok
// SIG undefined FUN_144f5c4d0(void)

/* WARNING: Type propagation algorithm not settling */

int * FUN_144f5c4d0(longlong param_1,int *param_2,byte *param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  byte **ppbVar4;
  undefined8 *puVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint *puVar13;
  int *piVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong *plVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  byte **ppbVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  byte *local_res18;
  byte *local_res20;
  longlong local_308;
  undefined8 uStack_300;
  char *local_2f8;
  code *pcStack_2f0;
  byte **local_2e8;
  int local_2e0 [2];
  undefined8 local_2d8;
  byte **ppbStack_2d0;
  byte ***local_2c8;
  longlong local_2b8;
  undefined8 uStack_2b0;
  char *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  byte **local_298;
  byte **local_290;
  int local_288;
  uint local_284;
  byte *local_280;
  int local_278;
  uint local_274;
  undefined8 *local_270;
  int iStack_268;
  uint uStack_264;
  byte ***local_260;
  LPCRITICAL_SECTION local_258;
  code *pcStack_250;
  undefined8 local_248;
  byte **local_240;
  byte **ppbStack_238;
  undefined8 local_230;
  undefined1 local_228 [8];
  undefined1 local_220 [80];
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  byte *pbStack_1a8;
  undefined1 local_1a0 [352];
  
  plVar1 = *(longlong **)(param_3 + 8);
  plVar19 = *(longlong **)param_3;
  if (plVar19 == plVar1) {
    *param_2 = 0;
  }
  else {
    iVar8 = (int)((longlong)plVar1 - (longlong)plVar19 >> 3);
    local_res18 = param_3;
    if (1 < iVar8) {
      local_308 = 0;
      uStack_300._0_4_ = 0;
      uStack_300._4_4_ = 0x80000000;
      local_2f8 = (char *)FUN_144b3d480();
      pcStack_2f0 = (code *)((ulonglong)pcStack_2f0 & 0xffffffff00000000);
      local_2b8 = 0;
      uStack_2b0 = (code *)0x8000000000000000;
      local_2a8 = (char *)FUN_144b3d480();
      uStack_2a0 = 0;
      if ((int)(uStack_300._4_4_ & 0x7fffffff) < iVar8) {
        FUN_144f61770(&local_308,&PTR_vftable_14c6e47a0,(longlong)iVar8);
      }
      uVar20 = (longlong)(iVar8 + 1) * 3;
      if (((int)pcStack_2f0 < 0) || (0xffffffff < (ulonglong)((longlong)(int)pcStack_2f0 * 2))) {
        bVar6 = 1;
      }
      else {
        bVar6 = 0;
      }
      if (((bool)(uVar20 < 0x100000000 & (bVar6 ^ 1))) &&
         ((uint)((longlong)(int)pcStack_2f0 * 2) < (uint)uVar20)) {
        FUN_144b2eb80(&local_2f8,iVar8 + 1);
      }
      do {
        pbVar2 = (byte *)*plVar19;
        local_res20 = pbVar2;
        if ((((*pbVar2 & 8) == 0) ||
            (plVar9 = (longlong *)FUN_144befea0(pbVar2,8), plVar9 == (longlong *)0x0)) ||
           (*plVar9 == 0)) {
          lVar11 = FUN_144f60ac0(&local_2b8,&local_258,&local_res20);
          if (*(char *)(lVar11 + 8) == '\0') {
            if ((DAT_14c797ec0 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
              cVar7 = FUN_144bdbf80();
              if (cVar7 == '\0') {
                uVar10 = FUN_144bdc640(local_220);
                local_res18 = (byte *)0x0;
                lVar11 = FUN_144bdc480(uVar10,
                                       "Duplicate unnamed type found in input list passed to type registry addMany()."
                                       ,&local_res18,0);
                *(char **)(lVar11 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
                *(undefined8 *)(lVar11 + 0x40) = 0xc4;
                FUN_144bdc690(local_220);
              }
              else {
                uVar10 = FUN_144bdc810(local_1a0,&DAT_14c797e70,1);
                local_res18 = (byte *)0x0;
                lVar11 = FUN_144bdc480(uVar10,
                                       "Duplicate unnamed type found in input list passed to type registry addMany()."
                                       ,&local_res18,0);
                *(char **)(lVar11 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
                *(undefined8 *)(lVar11 + 0x40) = 0xc4;
                FUN_144bdc8a0(local_1a0);
              }
            }
            goto LAB_144f5c9fd;
          }
        }
        else {
          uVar10 = FUN_144bef0c0(pbVar2,&local_2d8);
          lVar11 = FUN_144f60b60(&local_308,&local_270,uVar10);
          if (*(char *)(lVar11 + 8) == '\0') {
            if ((DAT_14c797ec0 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
              cVar7 = FUN_144bdbf80();
              if (cVar7 == '\0') {
                uVar10 = FUN_144bef0c0(pbVar2,&local_2d8);
                uVar12 = FUN_144bdc640(local_220,&DAT_14c797e70,1);
                local_258 = (LPCRITICAL_SECTION)0x1;
                pcStack_250 = FUN_144c14800;
                local_240 = (byte **)0x1;
                ppbStack_238 = (byte **)FUN_144c14800;
                local_248 = uVar10;
                local_230 = uVar10;
                lVar11 = FUN_144bdc480(uVar12,
                                       "Duplicate type \'{}\' found in input list passed to type registry addMany()."
                                       ,&local_240,0);
                *(char **)(lVar11 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
                *(undefined8 *)(lVar11 + 0x40) = 0xbe;
                FUN_144bdc690(local_220);
              }
              else {
                uVar10 = FUN_144bef0c0(pbVar2,&local_270);
                uVar12 = FUN_144bdc810(local_1a0,&DAT_14c797e70,1);
                local_258 = (LPCRITICAL_SECTION)0x1;
                pcStack_250 = FUN_144c14800;
                local_240 = (byte **)0x1;
                ppbStack_238 = (byte **)FUN_144c14800;
                local_248 = uVar10;
                local_230 = uVar10;
                lVar11 = FUN_144bdc480(uVar12,
                                       "Duplicate type \'{}\' found in input list passed to type registry addMany()."
                                       ,&local_240,0);
                *(char **)(lVar11 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
                *(undefined8 *)(lVar11 + 0x40) = 0xbe;
                FUN_144bdc8a0(local_1a0);
              }
            }
LAB_144f5c9fd:
            *param_2 = -0x7ffbfda9;
            if ((local_2a8 != (char *)0x0) && (*(int *)(local_2a8 + 4) != -2)) {
              (*DAT_14c787678)(DAT_14c6e47a8,local_2a8,0);
              FUN_144b3ec00(&local_2a8);
            }
            lVar11 = (longlong)uStack_2b0;
            uVar15 = uStack_2b0._4_4_;
            uStack_2b0 = (code *)((ulonglong)uStack_2b0._4_4_ << 0x20);
            if ((-1 < lVar11) && (local_2b8 != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_2b8,(ulonglong)(uVar15 & 0x7fffffff) << 3);
            }
            uStack_2b0 = (code *)CONCAT44(0x80000000,(undefined4)uStack_2b0);
            local_2b8 = 0;
            if ((local_2f8 != (char *)0x0) && (*(int *)(local_2f8 + 4) != -2)) {
              (*DAT_14c787678)(DAT_14c6e47a8,local_2f8,0);
              FUN_144b3ec00(&local_2f8);
            }
            uVar15 = uStack_300._4_4_;
            uStack_300 = (code *)((ulonglong)uStack_300._4_4_ << 0x20);
            if ((int)uVar15 < 0) {
              return param_2;
            }
            if (local_308 == 0) {
              return param_2;
            }
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,local_308,(ulonglong)(uVar15 & 0x7fffffff) << 4);
            return param_2;
          }
        }
        plVar19 = plVar19 + 1;
      } while (plVar19 != plVar1);
      if ((local_2a8 != (char *)0x0) && (*(int *)(local_2a8 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,local_2a8,0);
        FUN_144b3ec00(&local_2a8);
      }
      lVar11 = (longlong)uStack_2b0;
      uVar15 = uStack_2b0._4_4_;
      uStack_2b0 = (code *)((ulonglong)uStack_2b0._4_4_ << 0x20);
      if ((-1 < lVar11) && (local_2b8 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_2b8,(ulonglong)(uVar15 & 0x7fffffff) << 3);
      }
      local_2b8 = 0;
      uStack_2b0 = (code *)CONCAT44(0x80000000,(undefined4)uStack_2b0);
      if ((local_2f8 != (char *)0x0) && (*(int *)(local_2f8 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,local_2f8,0);
        FUN_144b3ec00(&local_2f8);
      }
      uVar15 = uStack_300._4_4_;
      uStack_300 = (code *)((ulonglong)uStack_300._4_4_ << 0x20);
      if ((-1 < (int)uVar15) && (local_308 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_308,(ulonglong)(uVar15 & 0x7fffffff) << 4);
      }
    }
    local_258 = (LPCRITICAL_SECTION)(param_1 + 0x30);
    EnterCriticalSection(local_258);
    plVar19 = *(longlong **)param_3;
    if (plVar19 != plVar1) {
      local_2e0[0] = -0x7ffbfda9;
      do {
        local_240 = (byte **)*plVar19;
        puVar13 = (uint *)FUN_144b45d50(local_240,local_228);
        ppbVar23 = local_240;
        if ((*puVar13 >> 0xc & 1) != 0) {
          iVar8 = local_2e0[0];
          if (DAT_14c797ec0 != '\0') {
            lVar11 = FUN_144bdc640(local_220,&DAT_14c797e70,1);
            local_308 = 2;
            *(char **)(lVar11 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
            uStack_300 = FUN_144be33f0;
            local_2f8 = "isTemporary";
            pcStack_2f0 = FUN_144bdef40;
            local_2e8 = (byte **)local_2e0;
            local_2b8 = 2;
            uStack_2b0 = FUN_144be33f0;
            *(undefined8 *)(lVar11 + 0x40) = 0xd0;
            local_2a8 = "isTemporary";
            uStack_2a0 = 0x44bdef40;
            uStack_29c = 1;
            local_298 = local_2e8;
            uVar10 = FUN_144bdc480(lVar11,"HK_RETURN_RES_IF({}) returning {}. ",&local_2b8,0);
            local_2d8 = (byte **)0x1;
            ppbStack_2d0 = (byte **)FUN_144f61920;
            local_2c8 = &local_240;
            local_270 = (undefined8 *)0x1;
            iStack_268 = 0x44f61920;
            uStack_264 = 1;
            local_260 = local_2c8;
            FUN_144bdc480(uVar10,"Cannot register temporary type {}",&local_270,0);
            FUN_144bdc690(local_220);
            iVar8 = local_2e0[0];
          }
LAB_144f5ce62:
          *param_2 = iVar8;
          LeaveCriticalSection(local_258);
          return param_2;
        }
        local_res20 = (byte *)CONCAT44(local_res20._4_4_,0x80040200);
        do {
          uVar20 = DAT_14c798a78;
          uVar15 = 0;
          while ((DAT_14c798a78 & 1) != 0) {
            for (iVar8 = 1 << ((byte)uVar15 & 0x1f); 0 < iVar8; iVar8 = iVar8 + -1) {
            }
            if (uVar15 < 8) {
              uVar15 = uVar15 + 1;
            }
          }
          puVar3 = *(ulonglong **)(param_1 + 0x18);
          while (puVar3 != (ulonglong *)0x0) {
            iVar8 = FUN_144bef170(puVar3[1],ppbVar23);
            if (iVar8 == 0) {
              *puVar3 = *puVar3 | 1;
              uVar16 = puVar3[1];
              goto code_r0x000144f5cae7;
            }
            if (iVar8 < 0) {
              puVar3 = (ulonglong *)puVar3[2];
            }
            else {
              puVar3 = (ulonglong *)puVar3[3];
            }
          }
          uVar16 = 0;
code_r0x000144f5cae7:
        } while (uVar20 != DAT_14c798a78);
        if (uVar16 != 0) {
          iVar8 = (int)local_res20;
          if (((int)local_res20 < 0) && (DAT_14c797ec0 != '\0')) {
            lVar11 = FUN_144bdc640(local_220,&DAT_14c797e70,1);
            local_308 = 2;
            *(char **)(lVar11 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
            uStack_300 = FUN_144f61950;
            local_2f8 = "treeTypeFromType(type) != nullptr";
            pcStack_2f0 = FUN_144bdef40;
            local_2e8 = &local_res20;
            local_2b8 = 2;
            uStack_2b0 = FUN_144f61950;
            *(undefined8 *)(lVar11 + 0x40) = 0xd1;
            local_2a8 = "treeTypeFromType(type) != nullptr";
            uStack_2a0 = 0x44bdef40;
            uStack_29c = 1;
            local_298 = local_2e8;
            uVar10 = FUN_144bdc480(lVar11,"HK_RETURN_RES_IF({}) returning {}. ",&local_2b8,0);
            local_2d8 = (byte **)0x1;
            ppbStack_2d0 = (byte **)FUN_144f61920;
            local_2c8 = &local_240;
            local_270 = (undefined8 *)0x1;
            iStack_268 = 0x44f61920;
            uStack_264 = 1;
            local_260 = local_2c8;
            FUN_144bdc480(uVar10,"Cannot add type \'{}\' to registry (already in types tree)",
                          &local_270,0);
            FUN_144bdc690(local_220);
            iVar8 = (int)local_res20;
          }
          goto LAB_144f5ce62;
        }
        plVar19 = plVar19 + 1;
      } while (plVar19 != plVar1);
    }
    ppbVar23 = *(byte ***)local_res18;
    ppbVar4 = *(byte ***)(local_res18 + 8);
    *(byte ***)(param_1 + 0x108) = ppbVar23;
    *(byte ***)(param_1 + 0x110) = ppbVar4;
    local_2d8 = ppbVar23;
    ppbStack_2d0 = ppbVar4;
    local_240 = ppbVar23;
    ppbStack_238 = ppbVar4;
    piVar14 = (int *)FUN_144f8ab50(param_1 + 0x98,local_2e0,&local_2d8);
    iVar8 = *piVar14;
    local_res18 = (byte *)CONCAT44(local_res18._4_4_,iVar8);
    if (iVar8 < 0) {
      if (DAT_14c797ec0 != '\0') {
        lVar11 = FUN_144bdc640(local_220,&DAT_14c797e70,1);
        local_308 = 2;
        *(char **)(lVar11 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
        uStack_300 = FUN_144f61950;
        local_2f8 = "m_checker.addAndCheckTypes(types)";
        pcStack_2f0 = FUN_144bdef40;
        local_2e8 = &local_res18;
        local_2b8 = 2;
        uStack_2b0 = FUN_144f61950;
        *(undefined8 *)(lVar11 + 0x40) = 0xd5;
        local_2a8 = "m_checker.addAndCheckTypes(types)";
        uStack_2a0 = 0x44bdef40;
        uStack_29c = 1;
        local_298 = local_2e8;
        uVar10 = FUN_144bdc480(lVar11,"HK_RETURN_IF_FAILED({}) returning {}. ",&local_2b8,0);
        local_res20 = (byte *)0x0;
        FUN_144bdc480(uVar10,&DAT_14996de1b,&local_res20,0);
        FUN_144bdc690(local_220);
        iVar8 = (int)local_res18;
      }
      *param_2 = iVar8;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    }
    else {
      uVar15 = 0x80000000;
      local_270 = (undefined8 *)0x0;
      puVar25 = (undefined8 *)0x0;
      iStack_268 = 0;
      uStack_264 = 0x80000000;
      local_280 = (byte *)0x0;
      local_278 = 0;
      local_274 = 0x80000000;
      local_290 = (byte **)0x0;
      local_288 = 0;
      local_284 = 0x80000000;
      iVar8 = 0;
      for (; ppbVar23 != ppbVar4; ppbVar23 = ppbVar23 + 1) {
        local_res18 = *ppbVar23;
        local_2d8 = &local_res18;
        ppbStack_2d0 = &local_280;
        local_2c8 = &local_290;
        local_res20 = (byte *)(*(longlong *)(param_1 + 0x68) +
                              (longlong)*(int *)(param_1 + 0x70) * 8);
        lVar11 = FUN_144f60c00(*(longlong *)(param_1 + 0x68),&local_res20,&local_2d8);
        iVar18 = iVar8;
        if (lVar11 == *(longlong *)(param_1 + 0x68) + (longlong)*(int *)(param_1 + 0x70) * 8) {
          iVar18 = iVar8 + 1;
          if ((int)(uVar15 & 0x7fffffff) < iVar18) {
            FUN_144f614a0(&local_270,&PTR_vftable_14c6e47c0,(longlong)iVar18);
            puVar25 = local_270;
            iVar8 = iStack_268;
            uVar15 = uStack_264;
          }
          iStack_268 = iVar18;
          if (puVar25 + iVar8 != (undefined8 *)0x0) {
            puVar25[iVar8] = local_res18;
          }
        }
        iVar8 = iVar18;
      }
      iVar18 = *(int *)(param_1 + 0x70);
      iVar22 = (int)((longlong)(puVar25 + iVar8) - (longlong)puVar25 >> 3) + iVar18;
      if ((int)(*(uint *)(param_1 + 0x74) & 0x7fffffff) < iVar22) {
        FUN_144f61a80((longlong *)(param_1 + 0x68),&PTR_vftable_14c6e47a0,(longlong)iVar22);
      }
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar18 * 8);
      for (puVar17 = puVar25; puVar17 != puVar25 + iVar8; puVar17 = puVar17 + 1) {
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = *puVar17;
        }
        puVar5 = puVar5 + 1;
      }
      local_1c0 = 0;
      uStack_1b8 = 0;
      *(int *)(param_1 + 0x70) = iVar22;
      local_1c8 = puVar25 + iVar8;
      ppbStack_2d0 = (byte **)(local_280 + (longlong)local_278 * 0x10);
      local_2d8 = (byte **)local_280;
      pbVar2 = (byte *)local_2d8;
      local_2d8._0_4_ = SUB84(local_280,0);
      local_2d8._4_4_ = (undefined4)((ulonglong)local_280 >> 0x20);
      local_1b0 = (undefined4)local_2d8;
      uStack_1ac = local_2d8._4_4_;
      local_2d8 = (byte **)pbVar2;
      local_1d0 = puVar25;
      pbStack_1a8 = (byte *)ppbStack_2d0;
      FUN_144f5e670(param_1,&local_1d0);
      uVar20 = 0;
      uVar16 = uVar20;
      uVar24 = uVar20;
      if (0 < local_288) {
        do {
          FUN_144f67e50(**(undefined8 **)(uVar20 + (longlong)local_290));
          uVar21 = (int)uVar16 + 1;
          **(undefined8 **)(uVar20 + (longlong)local_290) = *(undefined8 *)(local_280 + uVar24 + 8);
          uVar20 = uVar20 + 8;
          uVar16 = (ulonglong)uVar21;
          uVar24 = uVar24 + 0x10;
        } while ((int)uVar21 < local_288);
      }
      local_288 = 0;
      *param_2 = 0;
      if ((-1 < (int)local_284) && (local_290 != (byte **)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_290,(ulonglong)(local_284 & 0x7fffffff) << 3);
      }
      local_290 = (byte **)0x0;
      local_284 = 0x80000000;
      local_278 = 0;
      if ((-1 < (int)local_274) && (local_280 != (byte *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_280,(ulonglong)(local_274 & 0x7fffffff) << 4);
      }
      local_280 = (byte *)0x0;
      local_274 = 0x80000000;
      if ((-1 < (int)uVar15) && (puVar25 != (undefined8 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,puVar25,(ulonglong)(uVar15 & 0x7fffffff) << 3);
      }
      LeaveCriticalSection(local_258);
    }
  }
  return param_2;
}



// FUNCTION 144f5d140 FUN_144f5d140 body=919 status=ok
// SIG undefined FUN_144f5d140(void)

undefined4 * FUN_144f5d140(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  int iVar3;
  LPCRITICAL_SECTION p_Var4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  LPCRITICAL_SECTION p_Var11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  LPCRITICAL_SECTION p_Var16;
  int iVar17;
  int *piVar18;
  ulonglong local_res8;
  PRTL_CRITICAL_SECTION_DEBUG local_118 [2];
  LPCRITICAL_SECTION local_108;
  LPCRITICAL_SECTION p_Stack_100;
  undefined8 local_f8;
  code *local_f0;
  PRTL_CRITICAL_SECTION_DEBUG *local_e8;
  undefined8 local_e0;
  code *local_d8;
  char *local_d0;
  code *local_c8;
  ulonglong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  LPCRITICAL_SECTION local_a8;
  LPCRITICAL_SECTION local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [80];
  
  p_Var11 = (LPCRITICAL_SECTION)*param_3;
  p_Var4 = (LPCRITICAL_SECTION)param_3[1];
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar13 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar13 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar13 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar13 + 0xf0) = lVar7;
  }
  lVar13 = *(longlong *)(*(longlong *)(lVar7 + 0x3d0) + 0x10);
  iVar17 = (int)((longlong)p_Var4 - (longlong)p_Var11 >> 3);
  if (*(longlong *)(lVar13 + 8) != 0) {
    lVar13 = 0;
  }
  p_Var2 = (PRTL_CRITICAL_SECTION_DEBUG)((longlong)iVar17 * 4);
  local_118[0] = p_Var2;
  if (lVar13 == 0) {
    piVar8 = (int *)(*DAT_14c787670)(1,local_118,0x40);
  }
  else {
    local_res8 = (ulonglong)((longlong)&p_Var2[1].CriticalSection + 7) & 0xffffffffffffffc0;
    if (local_res8 <= *(ulonglong *)(lVar13 + 0x28)) {
      piVar8 = *(int **)(lVar13 + 0x38);
      if ((longlong)piVar8 + local_res8 <= *(ulonglong *)(lVar13 + 0x40)) {
        *(ulonglong *)(lVar13 + 0x38) = (longlong)piVar8 + local_res8;
        goto LAB_144f5d23c;
      }
    }
    piVar8 = (int *)FUN_144b454a0();
  }
LAB_144f5d23c:
  local_108 = (LPCRITICAL_SECTION)(param_1 + 0x30);
  EnterCriticalSection(local_108);
  if (p_Var11 != p_Var4) {
    local_res8 = CONCAT44(local_res8._4_4_,0x80040200);
    p_Var16 = p_Var11;
    piVar18 = piVar8;
    do {
      uVar12 = 0;
      local_118[0] = p_Var16->DebugInfo;
      uVar15 = uVar12;
      if (*(int *)(param_1 + 0x70) < 1) {
LAB_144f5d2a8:
        uVar5 = 0x80040200;
        if (DAT_14c797ec0 != '\0') {
          lVar7 = FUN_144bdc640(local_88,&DAT_14c797e70,CONCAT71((int7)(uVar15 >> 8),1));
          local_e0 = 2;
          *(char **)(lVar7 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
          local_d8 = FUN_144c23860;
          local_d0 = "idx < 0";
          local_c8 = FUN_144bdef40;
          local_c0 = &local_res8;
          *(undefined8 *)(lVar7 + 0x40) = 0x11c;
          uVar9 = FUN_144bdc480(lVar7,"HK_RETURN_RES_IF({}) returning {}. ",&local_e0,0);
          local_f8 = 1;
          local_f0 = FUN_144f61920;
          local_e8 = local_118;
          FUN_144bdc480(uVar9,"Cannot remove type \'{}\' from registry (not present)",&local_f8,0);
          FUN_144bdc690(local_88);
          uVar5 = (undefined4)local_res8;
        }
        *param_2 = uVar5;
        p_Var11 = local_108;
        goto LAB_144f5d36e;
      }
      puVar10 = *(undefined8 **)(param_1 + 0x68);
      while (iVar14 = (int)uVar15, (PRTL_CRITICAL_SECTION_DEBUG)*puVar10 != local_118[0]) {
        uVar15 = (ulonglong)(iVar14 + 1);
        uVar12 = uVar12 + 1;
        puVar10 = puVar10 + 1;
        if ((longlong)*(int *)(param_1 + 0x70) <= (longlong)uVar12) goto LAB_144f5d2a8;
      }
      if (iVar14 < 0) goto LAB_144f5d2a8;
      *piVar18 = iVar14;
      p_Var16 = (LPCRITICAL_SECTION)&p_Var16->LockCount;
      piVar18 = piVar18 + 1;
    } while (p_Var16 != p_Var4);
  }
  local_108 = p_Var11;
  p_Stack_100 = p_Var4;
  FUN_144f8ad80(param_1 + 0x98,&local_108);
  if (1 < iVar17) {
    FUN_144f60d20(piVar8,0,iVar17 + -1,0);
  }
  for (piVar18 = piVar8; piVar18 != piVar8 + iVar17; piVar18 = piVar18 + 1) {
    iVar14 = *(int *)(param_1 + 0x70);
    iVar3 = *piVar18;
    iVar6 = iVar14 + -1;
    *(int *)(param_1 + 0x70) = iVar6;
    if (iVar6 != iVar3) {
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + ((longlong)iVar14 + -1) * 8);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar3 * 8);
      if (puVar1 != puVar10) {
        *puVar1 = *puVar10;
      }
    }
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = p_Var11;
  local_a0 = p_Var4;
  FUN_144f5e670(param_1,&local_b8);
  p_Var11 = (LPCRITICAL_SECTION)(param_1 + 0x30);
  *param_2 = 0;
LAB_144f5d36e:
  LeaveCriticalSection(p_Var11);
  if (lVar13 == 0) {
    (*DAT_14c787678)(1,piVar8,p_Var2);
  }
  else {
    uVar15 = (ulonglong)((longlong)&p_Var2[1].CriticalSection + 7) & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar13 + 0x28) < uVar15) ||
       ((longlong)piVar8 + uVar15 != *(longlong *)(lVar13 + 0x38))) {
      FUN_144be8550(lVar13,piVar8);
    }
    else {
      *(int **)(lVar13 + 0x38) = piVar8;
      if (*(int **)(lVar13 + 0x48) == piVar8) {
        FUN_144be8430(lVar13);
      }
    }
  }
  return param_2;
}



// FUNCTION 144f5d4e0 FUN_144f5d4e0 body=490 status=ok
// SIG undefined FUN_144f5d4e0(void)

undefined8 * FUN_144f5d4e0(longlong *param_1,undefined8 *param_2,code *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res8;
  longlong local_68;
  int local_60;
  uint local_5c;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  iVar4 = (int)param_1[0xc];
  iVar5 = 0;
  if (0 < iVar4) {
    plVar1 = (longlong *)param_1[0xb];
    lVar3 = 0;
    do {
      if (*plVar1 == 0) {
        if (iVar5 != -1) goto LAB_144f5d57e;
        break;
      }
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (lVar3 < iVar4);
  }
  iVar4 = iVar4 + 1;
  iVar5 = (int)param_1[0xc];
  if ((int)(*(uint *)((longlong)param_1 + 100) & 0x7fffffff) < iVar4) {
    FUN_144f61590(param_1 + 0xb,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  puVar2 = (undefined8 *)(param_1[0xb] + (longlong)(int)param_1[0xc] * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
  }
  *(int *)(param_1 + 0xc) = iVar4;
LAB_144f5d57e:
  local_res8 = 0x38;
  puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar2,"hkReferencedObject");
  }
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 1;
    puVar2[1] = 0xffffffff;
    *puVar2 = hkReflect::Detail::BuiltinTypeReg::SubscriptionImpl::vftable;
    puVar2[3] = param_1;
    *(int *)(puVar2 + 4) = iVar5;
    puVar2[5] = param_3;
    puVar2[6] = param_4;
  }
  *(undefined8 **)(param_1[0xb] + (longlong)iVar5 * 8) = puVar2;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0x80000000;
  (**(code **)(*param_1 + 0x50))(param_1,&local_68);
  local_58 = local_68;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = local_68 + (longlong)local_60 * 8;
  local_38 = 0;
  uStack_30 = 0;
  (*param_3)(&local_58,param_4);
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_144b3d910(puVar2);
  }
  FUN_144b3f230(puVar2);
  local_60 = 0;
  if ((-1 < (int)local_5c) && (local_68 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_68,(ulonglong)(local_5c & 0x7fffffff) << 3);
  }
  local_68 = 0;
  local_5c = 0x80000000;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return param_2;
}



// FUNCTION 144f5d6d0 FUN_144f5d6d0 body=296 status=ok
// SIG undefined FUN_144f5d6d0(void)

void FUN_144f5d6d0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar10 = 0;
    do {
      for (puVar5 = *(ulonglong **)(lVar10 + *(longlong *)(param_1 + 0x20));
          puVar5 != (ulonglong *)0x0; puVar5 = (ulonglong *)(*puVar5 & 0xfffffffffffffffc)) {
        if (((byte)*puVar5 >> 1 & 1) == 0) {
          iVar7 = (int)param_2[1] + 1;
          uVar8 = puVar5[1];
          if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar7) {
            FUN_144bf0cc0(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar7);
          }
          puVar1 = (ulonglong *)(*param_2 + (longlong)(int)param_2[1] * 8);
          if (puVar1 != (ulonglong *)0x0) {
            *puVar1 = uVar8;
          }
          *(int *)(param_2 + 1) = iVar7;
        }
      }
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 8;
    } while (iVar9 < *(int *)(param_1 + 0x28));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  uVar2 = *(uint *)(param_1 + 0x70);
  uVar8 = (ulonglong)uVar2;
  lVar10 = param_2[1];
  puVar6 = *(undefined8 **)(param_1 + 0x68);
  iVar9 = uVar2 + (int)lVar10;
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar9) {
    FUN_144c13a80(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  puVar4 = (undefined8 *)(*param_2 + (longlong)(int)lVar10 * 8);
  if (0 < (int)uVar2) {
    do {
      if (puVar4 != (undefined8 *)0x0) {
        uVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar4 = uVar3;
      }
      uVar8 = uVar8 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar8 != 0);
  }
  *(int *)(param_2 + 1) = iVar9;
                    /* WARNING: Could not recover jumptable at 0x000144f5d7f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 144f5d800 FUN_144f5d800 body=461 status=ok
// SIG undefined FUN_144f5d800(void)

void FUN_144f5d800(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  iVar8 = *(int *)(param_1 + 0x28) + 1;
  if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) < iVar8) {
    FUN_144f61680(param_1 + 0x20,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  *(int *)(param_1 + 0x28) = iVar8;
  puVar6 = param_2;
  if (param_2 == (ulonglong *)0x0) {
    FUN_144f5def0(param_1);
  }
  else {
    do {
      FUN_144f5fc20(puVar6[1]);
      puVar6 = (ulonglong *)(*puVar6 & 0xfffffffffffffffc);
    } while (puVar6 != (ulonglong *)0x0);
    FUN_144f5def0(param_1);
    puVar6 = param_2;
    do {
      uVar4 = puVar6[1];
      FUN_144f69520(uVar4,0);
      FUN_144f69690(uVar4);
      puVar6 = (ulonglong *)(*puVar6 & 0xfffffffffffffffc);
    } while (puVar6 != (ulonglong *)0x0);
  }
  uVar4 = 0;
  uVar7 = 0x80000000;
  local_58 = 0;
  iVar8 = 0;
  local_50 = 0;
  local_4c = 0x80000000;
  uVar9 = uVar4;
  uVar2 = local_50;
  while (param_2 != (ulonglong *)0x0) {
    local_50 = (uint)uVar4;
    uVar3 = *param_2;
    if (((byte)uVar3 >> 1 & 1) == 0) {
      uVar4 = param_2[1];
      uVar5 = local_50 + 1;
      if ((int)(uVar7 & 0x7fffffff) < (int)uVar5) {
        local_50 = uVar2;
        FUN_144bf0cc0(&local_58,&PTR_vftable_14c6e47c0,(longlong)(int)uVar5);
        uVar3 = *param_2;
        uVar9 = local_58;
        uVar7 = local_4c;
      }
      puVar6 = (ulonglong *)(uVar9 + (longlong)(int)local_50 * 8);
      if (puVar6 != (ulonglong *)0x0) {
        *puVar6 = uVar4;
        uVar3 = *param_2;
      }
      uVar4 = (ulonglong)uVar5;
      uVar2 = uVar5;
    }
    local_50 = uVar2;
    iVar8 = (int)uVar4;
    uVar2 = local_50;
    param_2 = (ulonglong *)(uVar3 & 0xfffffffffffffffc);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_40 = uVar9 + (longlong)iVar8 * 8;
  local_28 = 0;
  uStack_20 = 0;
  local_50 = uVar2;
  local_48 = uVar9;
  FUN_144f5e670(param_1,&local_48);
  if ((-1 < (int)uVar7) && (uVar9 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,uVar9,(ulonglong)(uVar7 & 0x7fffffff) << 3);
  }
                    /* WARNING: Could not recover jumptable at 0x000144f5d9c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 144f5d9d0 FUN_144f5d9d0 body=1035 status=ok
// SIG undefined FUN_144f5d9d0(void)

void FUN_144f5d9d0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint local_res18;
  int local_res20;
  uint local_f8;
  uint local_f4;
  longlong local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  int local_d0;
  uint local_cc;
  longlong local_c8;
  int local_c0;
  uint local_bc;
  longlong local_b8;
  int local_b0;
  uint local_ac;
  undefined8 local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  local_res20 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar8 = 0;
    plVar6 = *(longlong **)(param_1 + 0x20);
    do {
      if (*plVar6 == param_2) goto LAB_144f5da2e;
      local_res20 = local_res20 + 1;
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x28));
  }
  local_res20 = -1;
LAB_144f5da2e:
  if (-1 < local_res20) {
    local_98 = 0;
    local_f4 = 0x80000000;
    local_ac = 0x80000000;
    local_res18 = 0x80000000;
    local_bc = 0x80000000;
    local_f8 = 0x80000000;
    local_cc = 0x80000000;
    local_e8 = 0;
    local_a8 = (longlong)local_res20 * 8;
    local_b8 = 0;
    local_b0 = 0;
    local_f0 = 0;
    local_c8 = 0;
    puVar10 = *(ulonglong **)(local_a8 + *(longlong *)(param_1 + 0x20));
    local_c0 = 0;
    local_e0 = (undefined8 *)0x0;
    local_d8 = (undefined8 *)0x0;
    local_d0 = 0;
    iVar12 = 0;
    iVar5 = 0;
    iVar13 = 0;
    iVar11 = local_d0;
    for (; puVar10 != (ulonglong *)0x0; puVar10 = (ulonglong *)(*puVar10 & 0xfffffffffffffffc)) {
      uVar3 = puVar10[1];
      iVar1 = iVar13 + 1;
      local_d0 = iVar13;
      if ((int)(local_f8 & 0x7fffffff) < iVar1) {
        local_d0 = iVar11;
        FUN_144bf0cc0(&local_d8,&PTR_vftable_14c6e47a0,(longlong)iVar1);
        local_e0 = local_d8;
        local_f8 = local_cc;
        local_98 = local_e8;
      }
      if (local_e0 + local_d0 != (ulonglong *)0x0) {
        local_e0[local_d0] = uVar3;
      }
      iVar13 = iVar12;
      iVar11 = iVar5;
      local_d0 = iVar1;
      if (((byte)*puVar10 >> 1 & 1) == 0) {
        uVar3 = puVar10[1];
        iVar11 = iVar5 + 1;
        if ((int)(local_res18 & 0x7fffffff) < iVar11) {
          FUN_144bf0cc0(&local_c8,&PTR_vftable_14c6e47a0,(longlong)iVar11);
          local_f0 = local_c8;
          local_res18 = local_bc;
          iVar5 = local_c0;
        }
        puVar2 = (ulonglong *)(local_f0 + (longlong)iVar5 * 8);
        if (puVar2 != (ulonglong *)0x0) {
          *puVar2 = uVar3;
        }
        local_c0 = iVar11;
        iVar5 = FUN_144ff6b80(param_1 + 0x88,puVar10[1]);
        local_98 = local_e8;
        if (iVar5 <= *(int *)(param_1 + 0x94)) {
          iVar13 = iVar12 + 1;
          uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8 + (longlong)iVar5 * 0x10);
          if ((int)(local_f4 & 0x7fffffff) < iVar13) {
            FUN_144bf0cc0(&local_b8,&PTR_vftable_14c6e47a0,(longlong)iVar13);
            local_e8 = local_b8;
            local_f4 = local_ac;
            iVar12 = local_b0;
          }
          puVar9 = (undefined8 *)(local_e8 + (longlong)iVar12 * 8);
          local_98 = local_e8;
          local_b0 = iVar13;
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = uVar4;
          }
        }
      }
      iVar12 = iVar13;
      iVar5 = iVar11;
      iVar13 = iVar1;
      iVar11 = local_d0;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + local_a8);
    local_res20 = *(int *)(param_1 + 0x28) - local_res20;
    if (((local_res20 != 0) && (puVar9 != puVar9 + 1)) &&
       (lVar8 = (longlong)local_res20 * 8, lVar8 != 0)) {
      lVar8 = (lVar8 - 1U >> 3) + 1;
      do {
        *puVar9 = puVar9[1];
        puVar9 = puVar9 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    local_78 = 0;
    uStack_70 = 0;
    local_90 = local_98 + (longlong)iVar12 * 8;
    lStack_a0 = local_f0 + (longlong)iVar5 * 8;
    local_a8._0_4_ = (undefined4)local_f0;
    local_a8._4_4_ = (undefined4)((ulonglong)local_f0 >> 0x20);
    local_88 = (undefined4)local_a8;
    uStack_84 = local_a8._4_4_;
    local_d0 = iVar11;
    local_a8 = local_f0;
    uStack_80 = lStack_a0;
    FUN_144f5e670(param_1,&local_98);
    for (puVar9 = local_e0; puVar9 != local_e0 + iVar13; puVar9 = puVar9 + 1) {
      puVar7 = (undefined8 *)FUN_144befe50(*puVar9,0x2000);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0;
      }
    }
    FUN_144f5def0(param_1);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    FUN_144f5e670(param_1,&local_68);
    if ((-1 < (int)local_f8) && (local_e0 != (undefined8 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_e0,(ulonglong)(local_f8 & 0x7fffffff) << 3);
    }
    if ((-1 < (int)local_res18) && (local_f0 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_f0,(ulonglong)(local_res18 & 0x7fffffff) << 3);
    }
    if ((-1 < (int)local_f4) && (local_e8 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_e8,(ulonglong)(local_f4 & 0x7fffffff) << 3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144f5dde2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 144f5ddf0 FUN_144f5ddf0 body=248 status=ok
// SIG undefined FUN_144f5ddf0(void)

void FUN_144f5ddf0(longlong param_1)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  uVar9 = uVar7;
  if (-1 < *(int *)(param_1 + 0x94)) {
    plVar4 = *(longlong **)(param_1 + 0x88);
    do {
      if (*plVar4 != -1) break;
      uVar9 = (ulonglong)((int)uVar9 + 1);
      uVar7 = uVar7 + 1;
      plVar4 = plVar4 + 2;
    } while ((longlong)uVar7 <= (longlong)*(int *)(param_1 + 0x94));
  }
  if ((int)uVar9 <= *(int *)(param_1 + 0x94)) {
    do {
      iVar8 = (int)uVar9;
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar8 * 0x10);
      puVar2 = (ulonglong *)
               FUN_144befe50(*(undefined8 *)
                              (*(longlong *)(param_1 + 0x88) + 8 + (longlong)iVar8 * 0x10),0x2000);
      if ((puVar2 != (ulonglong *)0x0) &&
         (puVar3 = (undefined8 *)FUN_144befe50(uVar1,0x2000), puVar3 != (undefined8 *)0x0)) {
        *puVar2 = (longlong)(int)((uint)*puVar3 & 0xfffffffc) | (ulonglong)((uint)*puVar3 & 3);
      }
      uVar6 = iVar8 + 1;
      if ((int)uVar6 <= *(int *)(param_1 + 0x94)) {
        lVar5 = (longlong)(int)uVar6;
        plVar4 = (longlong *)(lVar5 * 0x10 + *(longlong *)(param_1 + 0x88));
        do {
          if (*plVar4 != -1) break;
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 2;
        } while (lVar5 <= *(int *)(param_1 + 0x94));
      }
      uVar9 = (ulonglong)uVar6;
    } while ((int)uVar6 <= *(int *)(param_1 + 0x94));
  }
  return;
}



// FUNCTION 144f5def0 FUN_144f5def0 body=1907 status=ok
// SIG undefined FUN_144f5def0(void)

void FUN_144f5def0(longlong *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong *puVar14;
  uint uVar15;
  ulonglong *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  uint local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_338;
  int local_330;
  uint local_32c;
  longlong local_328;
  int local_320;
  uint local_31c;
  longlong local_318;
  longlong local_310;
  longlong *local_308;
  undefined8 *local_300;
  uint local_2f8;
  uint local_2f4;
  longlong *local_2f0;
  ulonglong *local_2e8;
  code *pcStack_2e0;
  uint *local_2d8;
  code *pcStack_2d0;
  uint *local_2c8;
  code *pcStack_2c0;
  undefined4 *local_2b8;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined1 local_2a0 [4];
  undefined1 local_29c [4];
  ulonglong local_298 [2];
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  code *pcStack_250;
  uint *local_248;
  code *pcStack_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 *local_228;
  undefined8 local_220;
  code *pcStack_218;
  uint *local_210;
  code *pcStack_208;
  undefined8 local_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 *local_1f0;
  undefined1 local_1e8 [80];
  undefined1 local_198 [344];
  
  puVar17 = (undefined8 *)0x0;
  uVar19 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  plVar22 = param_1 + 0x11;
  local_2f0 = plVar22;
  FUN_144ff6c50(plVar22);
  LOCK();
  DAT_14c798a78 = DAT_14c798a78 + 1;
  UNLOCK();
  puVar1 = (uint *)(param_1 + 0x23);
  local_res10[0] = *puVar1;
  uVar13 = local_res10[0] + 1 & 3;
  uVar15 = 1;
  if (uVar13 != 0) {
    uVar15 = uVar13;
  }
  *puVar1 = uVar15;
  if (DAT_14c797ec0 < 4) {
    cVar6 = FUN_144bdbf80();
    if (cVar6 != '\0') goto LAB_144f5df70;
  }
  else {
LAB_144f5df70:
    cVar6 = FUN_144bdbf80();
    local_2c8 = puVar1;
    if (cVar6 == '\0') {
      local_res18[0] = (int)param_1[5];
      uVar9 = FUN_144bdc640(local_1e8);
      local_2e8 = (ulonglong *)&DAT_00000003;
      pcStack_2e0 = FUN_144f50970;
      local_2d8 = local_res10;
      pcStack_2d0 = FUN_144f50970;
      pcStack_2c0 = FUN_144f50970;
      local_2b8 = local_res18;
      local_258 = 3;
      pcStack_250 = FUN_144f50970;
      pcStack_240 = FUN_144f50970;
      uStack_230 = 0x44f50970;
      uStack_22c = 1;
      local_248 = local_2d8;
      local_228 = local_2b8;
      local_238 = puVar1;
      lVar10 = FUN_144bdc480(uVar9,"Inheritance State changing from {} to {} [{} lists]",&local_258,
                             0);
      *(char **)(lVar10 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
      *(undefined8 *)(lVar10 + 0x40) = 0x4d2;
      FUN_144bdc690(local_1e8);
    }
    else {
      local_res20[0] = (int)param_1[5];
      uVar9 = FUN_144bdc810(local_198,&DAT_14c797e70,4);
      local_2e8 = (ulonglong *)&DAT_00000003;
      pcStack_2e0 = FUN_144f50970;
      local_2d8 = local_res10;
      pcStack_2d0 = FUN_144f50970;
      pcStack_2c0 = FUN_144f50970;
      local_2b8 = local_res20;
      local_220 = 3;
      pcStack_218 = FUN_144f50970;
      pcStack_208 = FUN_144f50970;
      uStack_1f8 = 0x44f50970;
      uStack_1f4 = 1;
      local_210 = local_2d8;
      local_1f0 = local_2b8;
      local_200 = puVar1;
      lVar10 = FUN_144bdc480(uVar9,"Inheritance State changing from {} to {} [{} lists]",&local_220,
                             0);
      *(char **)(lVar10 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
      *(undefined8 *)(lVar10 + 0x40) = 0x4d2;
      FUN_144bdc8a0(local_198);
    }
  }
  uVar15 = 0;
  local_2f4 = 0x80000000;
  local_300 = (undefined8 *)0x0;
  local_2f8 = 0;
  puVar20 = puVar17;
  puVar21 = puVar17;
  puVar23 = puVar17;
  if (0 < (int)param_1[5]) {
    do {
      plVar22 = local_2f0;
      for (puVar16 = *(ulonglong **)(param_1[4] + (longlong)puVar21); uVar19 = (uint)puVar17,
          local_2f0 = plVar22, puVar16 != (ulonglong *)0x0;
          puVar16 = (ulonglong *)(*puVar16 & 0xfffffffffffffffc)) {
        if (puVar16[1] != 0) {
          uVar13 = uVar19 + 1;
          if ((int)(uVar15 & 0x7fffffff) < (int)uVar13) {
            FUN_144f61be0(&local_300,&PTR_vftable_14c6e47c0,(longlong)(int)uVar13);
            puVar23 = local_300;
            uVar15 = local_2f4;
            uVar19 = local_2f8;
          }
          puVar17 = puVar23 + (longlong)(int)uVar19 * 4;
          if (puVar17 != (undefined8 *)0x0) {
            *puVar17 = puVar16;
            *(int *)(puVar17 + 1) = (int)puVar20;
            FUN_144bef0c0(puVar16[1],puVar17 + 2);
          }
          puVar17 = (undefined8 *)(ulonglong)uVar13;
          local_2f8 = uVar13;
          if ((*(byte *)puVar16[1] >> 3 & 1) == 0) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        plVar22 = local_2f0;
      }
      uVar13 = (int)puVar20 + 1;
      puVar20 = (undefined8 *)(ulonglong)uVar13;
      puVar21 = puVar21 + 1;
    } while ((int)uVar13 < (int)param_1[5]);
  }
  if (1 < (int)uVar19) {
    FUN_144f60df0(puVar23,0,uVar19 - 1,(ulonglong)param_1 & 0xff);
  }
  lVar18 = 0;
  local_320 = 0;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar10 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(lVar10 + 0xf0);
  if (lVar11 == 0) {
    if (*(char *)(lVar10 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = FUN_144b3f4a0();
    *(longlong *)(lVar10 + 0xf0) = lVar11;
  }
  lVar10 = *(longlong *)(*(longlong *)(lVar11 + 0x3d0) + 0x10);
  local_318 = lVar18;
  if (*(longlong *)(lVar10 + 8) == 0) {
    local_318 = lVar10;
  }
  local_308 = (longlong *)((longlong)(int)uVar19 * 8);
  local_2f0 = local_308;
  if (local_318 == 0) {
    local_328 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)local_308 >> 8),1),&local_2f0,0x40);
  }
  else {
    local_298[0] = (longlong)local_308 + 0x3fU & 0xffffffffffffffc0;
    if (local_298[0] <= *(ulonglong *)(local_318 + 0x28)) {
      local_328 = *(longlong *)(local_318 + 0x38);
      if (local_298[0] + local_328 <= *(ulonglong *)(local_318 + 0x40)) {
        *(ulonglong *)(local_318 + 0x38) = local_298[0] + local_328;
        goto LAB_144f5e27b;
      }
    }
    local_328 = FUN_144b454a0(local_318,local_298);
  }
LAB_144f5e27b:
  local_31c = uVar19 | 0x80000000;
  iVar7 = 8;
  local_338 = 0;
  local_330 = 0;
  local_32c = 0xffffffff;
  iVar8 = ((int)uVar19 / 2) * 2;
  if (8 < iVar8) {
    do {
      iVar7 = iVar7 * 2;
    } while (iVar7 < iVar8);
  }
  local_310 = local_328;
  FUN_144f5fff0(&local_338,local_2a0,&PTR_vftable_14c6e47c0);
  if (uVar19 != 0) {
    local_2e8 = (ulonglong *)*puVar23;
    pcStack_2e0 = (code *)puVar23[1];
    local_2b0 = *(undefined4 *)(puVar23 + 2);
    uStack_2ac = *(undefined4 *)((longlong)puVar23 + 0x14);
    uStack_2a8 = *(undefined4 *)(puVar23 + 3);
    uStack_2a4 = *(undefined4 *)((longlong)puVar23 + 0x1c);
    iVar7 = local_320 + 1;
    if ((int)(local_31c & 0x7fffffff) < iVar7) {
      FUN_144f61680(&local_328,&PTR_vftable_14c6e47a0,(longlong)iVar7);
    }
    puVar17 = (undefined8 *)(local_328 + (longlong)local_320 * 8);
    if (puVar17 != (undefined8 *)0x0) {
      *puVar17 = local_2e8;
    }
    local_320 = iVar7;
    if (1 < (int)uVar19) {
      uVar24 = (ulonglong)(uVar19 - 1);
      puVar16 = local_2e8;
      do {
        puVar14 = (ulonglong *)puVar23[4];
        pcStack_2e0 = (code *)puVar23[5];
        local_268 = *(undefined4 *)(puVar23 + 6);
        uStack_264 = *(undefined4 *)((longlong)puVar23 + 0x34);
        uStack_260 = *(undefined4 *)(puVar23 + 7);
        uStack_25c = *(undefined4 *)((longlong)puVar23 + 0x3c);
        local_2e8 = puVar14;
        if (puVar14[1] == puVar16[1]) {
LAB_144f5e3e3:
          *puVar14 = *puVar14 | 2;
          uVar2 = puVar16[1];
          uVar3 = puVar14[1];
          FUN_144ff6ae0(plVar22,uVar2,uVar3);
          if ((int)local_32c < local_330 * 2) {
            FUN_144f5fff0(&local_338,local_29c,&PTR_vftable_14c6e47c0,local_32c * 2 + 2);
          }
          uVar15 = (int)uVar3 * -0x61c8864f;
          iVar7 = (int)(uVar3 >> 0x20);
          uVar19 = iVar7 * -0x61c8864f;
          uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                   (int)uVar3 * -0x4f000000;
          uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                   iVar7 * -0x4f000000;
          uVar15 = local_32c & (uVar15 + uVar19 * 0x40 + (uVar15 >> 2) + 0x9e3779b9 ^ uVar19);
          uVar4 = *(ulonglong *)(local_338 + (ulonglong)uVar15 * 0x10);
          while ((iVar7 = 1, uVar4 != 0xffffffffffffffff && (iVar7 = 0, uVar4 != uVar3))) {
            uVar15 = uVar15 + 1 & local_32c;
            uVar4 = *(ulonglong *)(local_338 + (ulonglong)uVar15 * 0x10);
          }
          local_330 = local_330 + iVar7;
          puVar14 = (ulonglong *)(local_338 + (longlong)(int)uVar15 * 0x10);
          if (puVar14 != (ulonglong *)0x0) {
            *puVar14 = uVar3;
          }
          puVar14 = (ulonglong *)(local_338 + 8 + (longlong)(int)uVar15 * 0x10);
          if (puVar14 != (ulonglong *)0x0) {
            *puVar14 = uVar2;
          }
        }
        else {
          local_288 = local_2b0;
          uStack_284 = uStack_2ac;
          uStack_280 = uStack_2a8;
          uStack_27c = uStack_2a4;
          local_278 = local_268;
          uStack_274 = uStack_264;
          uStack_270 = uStack_260;
          uStack_26c = uStack_25c;
          iVar7 = FUN_144bf0080(&local_278,&local_288);
          if (iVar7 == 0) goto LAB_144f5e3e3;
          *puVar14 = *puVar14 & 0xfffffffffffffffd;
          iVar7 = local_320 + 1;
          if ((int)(local_31c & 0x7fffffff) < iVar7) {
            FUN_144f61680(&local_328,&PTR_vftable_14c6e47a0,(longlong)iVar7);
          }
          puVar17 = (undefined8 *)(local_328 + (longlong)local_320 * 8);
          if (puVar17 != (undefined8 *)0x0) {
            *puVar17 = puVar14;
          }
          local_2b0 = local_268;
          uStack_2ac = uStack_264;
          uStack_2a8 = uStack_260;
          uStack_2a4 = uStack_25c;
          puVar16 = local_2e8;
          local_320 = iVar7;
        }
        uVar24 = uVar24 - 1;
        puVar23 = puVar23 + 4;
      } while (uVar24 != 0);
    }
  }
  iVar7 = local_320 + -1;
  if (-1 < iVar7) {
    iVar8 = iVar7 / 2;
    uVar9 = FUN_144f5fd90(&local_328,0,iVar8 + -1);
    uVar12 = FUN_144f5fd90(&local_328,iVar8 + 1,iVar7);
    lVar18 = *(longlong *)(local_328 + (longlong)iVar8 * 8);
    FUN_144bddda0(lVar18,uVar9,uVar12);
  }
  param_1[3] = lVar18;
  FUN_144f606d0(&local_328,&local_338,(int)param_1[0x23]);
  LOCK();
  DAT_14c798a78 = DAT_14c798a78 + 1;
  UNLOCK();
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_144f60330(&local_338);
  if (local_310 == local_328) {
    local_320 = 0;
  }
  if (local_318 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar24 = (longlong)local_308 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_318 + 0x28) < uVar24) ||
       (local_310 + uVar24 != *(longlong *)(local_318 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(longlong *)(local_318 + 0x38) = local_310;
      if (*(longlong *)(local_318 + 0x48) == local_310) {
        FUN_144be8430();
      }
    }
  }
  local_320 = 0;
  if ((-1 < (int)local_31c) && (local_328 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_328,(ulonglong)(local_31c & 0x7fffffff) << 3);
  }
  local_328 = 0;
  local_31c = 0x80000000;
  if ((-1 < (int)local_2f4) && (local_300 != (undefined8 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_300,(ulonglong)(local_2f4 & 0x7fffffff) << 5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return;
}



// FUNCTION 144f5e670 FUN_144f5e670 body=237 status=ok
// SIG undefined FUN_144f5e670(void)

void FUN_144f5e670(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *local_28;
  undefined4 local_20;
  uint local_1c;
  
  plVar4 = (longlong *)0x0;
  uVar6 = 0x80000000;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_1c = 0x80000000;
  plVar5 = plVar4;
  if ((longlong **)(param_1 + 0x58) != &local_28) {
    uVar1 = *(uint *)(param_1 + 0x60);
    plVar5 = (longlong *)(ulonglong)uVar1;
    plVar3 = *(longlong **)(param_1 + 0x58);
    if (0 < (int)uVar1) {
      FUN_144f61880(&local_28,&PTR_vftable_14c6e47a0,(longlong)(int)uVar1);
    }
    uVar6 = local_1c;
    plVar4 = local_28;
    FUN_144b3d470(local_28,plVar3,(longlong)(int)uVar1 * 8);
  }
  plVar3 = plVar4;
  if (0 < (int)plVar5) {
    do {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x28))(param_2,*(undefined8 *)(lVar2 + 0x30));
      }
      plVar5 = (longlong *)((longlong)plVar5 + -1);
      plVar3 = plVar3 + 1;
    } while (plVar5 != (longlong *)0x0);
  }
  if ((-1 < (int)uVar6) && (plVar4 != (longlong *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,plVar4,(ulonglong)(uVar6 & 0x7fffffff) << 3);
  }
  return;
}



// FUNCTION 144f5e760 FUN_144f5e760 body=442 status=ok
// SIG undefined FUN_144f5e760(void)

undefined4 * FUN_144f5e760(longlong *param_1,undefined4 *param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  undefined1 local_res8 [8];
  
  lVar4 = param_1[1];
  plVar1 = (longlong *)*param_1;
  iVar5 = 8;
  if (8 < param_4) {
    iVar5 = param_4;
  }
  lVar10 = (longlong)iVar5;
  iVar8 = *(int *)((longlong)param_1 + 0xc) + 1;
  lVar6 = (**(code **)(*param_3 + 8))(param_3,lVar10 << 4);
  if (lVar6 == 0) {
    *param_2 = 0x80040200;
  }
  else {
    *param_1 = lVar6;
    if (0 < iVar5) {
      lVar6 = 0;
      do {
        *(undefined8 *)(lVar6 + *param_1) = 0xffffffffffffffff;
        lVar10 = lVar10 + -1;
        lVar6 = lVar6 + 0x10;
      } while (lVar10 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    iVar9 = 0;
    *(int *)((longlong)param_1 + 0xc) = iVar5 + -1;
    lVar6 = (longlong)iVar8;
    plVar11 = plVar1;
    if (0 < iVar8) {
      do {
        if (*plVar11 != -1) {
          if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
            FUN_144f5e760(param_1,local_res8,param_3,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
          }
          lVar10 = *plVar11;
          iVar13 = 1;
          iVar5 = (int)((ulonglong)lVar10 >> 0x20);
          uVar7 = iVar5 * -0x61c8864f;
          uVar12 = (int)lVar10 * -0x61c8864f;
          uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                  iVar5 * -0x4f000000;
          uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                   (int)lVar10 * -0x4f000000;
          lVar2 = *param_1;
          uVar7 = (uVar7 * 0x40 + uVar12 + 0x9e3779b9 + (uVar12 >> 2) ^ uVar7) &
                  *(uint *)((longlong)param_1 + 0xc);
          lVar3 = *(longlong *)(lVar2 + (ulonglong)uVar7 * 0x10);
          while (lVar3 != -1) {
            if (lVar3 == lVar10) {
              iVar13 = 0;
              break;
            }
            uVar7 = uVar7 + 1 & *(uint *)((longlong)param_1 + 0xc);
            lVar3 = *(longlong *)(lVar2 + (ulonglong)uVar7 * 0x10);
          }
          *(int *)(param_1 + 1) = (int)param_1[1] + iVar13;
          FUN_144b3d470((longlong)(int)uVar7 * 0x10 + lVar2,plVar1 + (longlong)iVar9 * 2,0x10);
        }
        iVar9 = iVar9 + 1;
        lVar6 = lVar6 + -1;
        plVar11 = plVar11 + 2;
      } while (lVar6 != 0);
    }
    if (-1 < (int)lVar4) {
      (**(code **)(*param_3 + 0x18))(param_3,plVar1,(longlong)iVar8 << 4);
    }
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 144f5e920 FUN_144f5e920 body=198 status=ok
// SIG undefined FUN_144f5e920(void)

void FUN_144f5e920(longlong *param_1,undefined8 param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_144f5e760(param_1,local_res8,param_2,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
  }
  *param_4 = 1;
  lVar1 = *param_3;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar4 = iVar3 * -0x61c8864f;
  uVar5 = (int)lVar1 * -0x61c8864f;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar4 = (uVar4 * 0x40 + uVar5 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar4) &
          *(uint *)((longlong)param_1 + 0xc);
  lVar2 = *(longlong *)(*param_1 + (ulonglong)uVar4 * 0x10);
  do {
    if (lVar2 == -1) {
LAB_144f5e9d1:
      *(int *)(param_1 + 1) = (int)param_1[1] + *param_4;
      return;
    }
    if (lVar2 == lVar1) {
      *param_4 = 0;
      goto LAB_144f5e9d1;
    }
    uVar4 = uVar4 + 1 & *(uint *)((longlong)param_1 + 0xc);
    lVar2 = *(longlong *)(*param_1 + (ulonglong)uVar4 * 0x10);
  } while( true );
}



// FUNCTION 144f5e9f0 FUN_144f5e9f0 body=139 status=ok
// SIG undefined FUN_144f5e9f0(void)

void FUN_144f5e9f0(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(int *)((longlong)param_1 + 0xc) != 0) &&
     (iVar2 = *(int *)((longlong)param_1 + 0xc) + 1, lVar4 = (longlong)iVar2, 0 < iVar2)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar3 + *param_1) != -1) {
        *(undefined8 *)(lVar3 + *param_1) = 0xffffffffffffffff;
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 & 0x80000000;
  if ((*param_1 != 0) && ((uVar1 & 0x80000000) == 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (longlong)(*(int *)((longlong)param_1 + 0xc) + 1) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  return;
}



// FUNCTION 144f5ea80 FUN_144f5ea80 body=209 status=ok
// SIG undefined FUN_144f5ea80(void)

byte FUN_144f5ea80(ulonglong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  puVar2 = (undefined4 *)FUN_144bef800(param_1,local_res8);
  uVar5 = 0;
  uVar3 = uVar5;
  if (((byte)*puVar2 & 0x1f) == 1) {
    uVar3 = param_1;
  }
  if ((uVar3 != 0) && (iVar1 = FUN_144beec90(param_1), iVar1 != 0)) {
    return 1;
  }
  uVar3 = (**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2,param_1);
  if ((uVar3 != 0) &&
     ((uVar3 == param_1 ||
      (iVar1 = FUN_144ff6be0(param_2[1],uVar3,param_1), iVar1 <= *(int *)(param_2[1] + 0xc))))) {
    return 1;
  }
  puVar4 = (ulonglong *)param_2[2];
  iVar1 = (int)(param_2[3] - (longlong)puVar4 >> 3);
  if (0 < iVar1) {
    uVar3 = uVar5;
    do {
      iVar6 = (int)uVar3;
      if (*puVar4 == param_1) goto LAB_144f5eb38;
      uVar3 = (ulonglong)(iVar6 + 1);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while ((longlong)uVar5 < (longlong)iVar1);
  }
  iVar6 = -1;
LAB_144f5eb38:
  return (byte)((uint)iVar6 >> 0x1f) ^ 1;
}



// FUNCTION 144f5eb60 FUN_144f5eb60 body=87 status=ok
// SIG undefined FUN_144f5eb60(void)

undefined8 FUN_144f5eb60(undefined8 param_1,ulonglong param_2)

{
  FUN_144f5bd40();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 144f5ebc0 FUN_144f5ebc0 body=162 status=ok
// SIG undefined FUN_144f5ebc0(void)

undefined4 * FUN_144f5ebc0(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  if (*param_2 == 0) {
    local_res8 = 0x120;
    lVar2 = (*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar2,"BuiltinTypeReg");
    }
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_144f5aa00(lVar2);
    }
    lVar1 = *param_2;
    if ((lVar2 != lVar1) && (*param_2 = lVar2, lVar1 != 0)) {
      FUN_144b3f230();
    }
    *param_1 = 0;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f5ec70 FUN_144f5ec70 body=95 status=ok
// SIG undefined FUN_144f5ec70(void)

undefined4 * FUN_144f5ec70(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_144b3d910(lVar1);
  }
  lVar2 = *param_2;
  *param_2 = 0;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  if (lVar1 != 0) {
    FUN_144b3f230(lVar1);
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f5ecd0 FUN_144f5ecd0 body=1490 status=ok
// SIG undefined FUN_144f5ecd0(void)

undefined4 *
FUN_144f5ecd0(undefined4 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined4 uVar14;
  int iVar15;
  char *pcVar16;
  longlong *local_res10;
  undefined4 local_res18 [4];
  undefined8 local_268;
  code *local_260;
  longlong *local_258;
  char *local_250;
  char *local_248;
  char *local_240;
  char *local_238;
  undefined8 local_230;
  code *local_228;
  char *local_220;
  code *local_218;
  longlong **local_210;
  undefined1 local_1e0 [80];
  undefined1 local_190 [344];
  
  uVar14 = *(undefined4 *)((longlong)param_2 + 4);
  lVar8 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(int *)param_3 = (int)*param_2;
  *(undefined4 *)((longlong)param_3 + 4) = uVar14;
  *(int *)(param_3 + 1) = (int)lVar8;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar1;
  iVar15 = 0;
  local_res10 = param_2;
  iVar5 = FUN_144f5a450(param_2,0x3c,0);
  local_258 = param_2;
  if (iVar5 == 0) {
    if ((1 < DAT_14c797ec0) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar7 = FUN_144bdc640(&local_230);
        local_268 = 1;
        local_260 = FUN_144c19e40;
        lVar8 = FUN_144bdc480(uVar7,"Invalid type name: \'{}\' (empty root)",&local_268,0);
        *(char **)(lVar8 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
        *(undefined8 *)(lVar8 + 0x40) = 0x13e;
        FUN_144bdc690(&local_230);
        *param_1 = 0x80040200;
        return param_1;
      }
      uVar7 = FUN_144bdc810(local_190,&DAT_14c797e70,2);
      local_268 = 1;
      local_260 = FUN_144c19e40;
      lVar8 = FUN_144bdc480(uVar7,"Invalid type name: \'{}\' (empty root)",&local_268,0);
      *(char **)(lVar8 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
      *(undefined8 *)(lVar8 + 0x40) = 0x13e;
      FUN_144bdc8a0(local_190);
    }
    *param_1 = 0x80040200;
    return param_1;
  }
  if (iVar5 == -1) {
    local_250 = (char *)*param_3;
    local_248 = (char *)param_3[1] + -1;
    if ((local_250 != (char *)param_3[1]) && (*local_248 == '*')) {
      puVar11 = (undefined8 *)FUN_144f5a210(&local_250,&local_268);
      iVar15 = (int)param_4[1] + 1;
      if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar15) {
        FUN_144bfbfc0(param_4,&PTR_vftable_14c6e47c0,(longlong)iVar15);
      }
      puVar12 = (undefined8 *)((longlong)(int)param_4[1] * 0x10 + *param_4);
      if (puVar12 != (undefined8 *)0x0) {
        uVar7 = puVar11[1];
        *puVar12 = *puVar11;
        puVar12[1] = uVar7;
      }
      *(int *)(param_4 + 1) = iVar15;
      *param_3 = (longlong)&DAT_149982c90;
      param_3[1] = (longlong)&DAT_149982c92;
    }
  }
  else {
    local_240 = (char *)*param_2;
    local_238 = local_240 + iVar5;
    puVar9 = (undefined4 *)FUN_144f5a210(&local_240,&local_250);
    uVar14 = puVar9[1];
    uVar1 = puVar9[2];
    uVar2 = puVar9[3];
    *(undefined4 *)param_3 = *puVar9;
    *(undefined4 *)((longlong)param_3 + 4) = uVar14;
    *(undefined4 *)(param_3 + 1) = uVar1;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar2;
    iVar6 = FUN_144f5a490(param_2,0x3e);
    uVar14 = 0x80040257;
    local_res18[0] = 0x80040257;
    if (iVar6 < iVar5) {
      if (DAT_14c797ec0 != 0) {
        lVar8 = FUN_144bdc640(local_1e0,&DAT_14c797e70,1);
        local_230 = 2;
        *(char **)(lVar8 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
        local_228 = FUN_144f61b80;
        local_220 = "indexOfClose < indexOfOpen";
        local_218 = FUN_144bdef40;
        local_210 = (longlong **)local_res18;
        *(undefined8 *)(lVar8 + 0x40) = 0x14a;
        uVar7 = FUN_144bdc480(lVar8,"HK_RETURN_RES_IF({}) returning {}. ",&local_230,0);
        local_268 = 1;
        local_260 = FUN_144c19e40;
        FUN_144bdc480(uVar7,"Invalid type name: \'{}\' (invalid arguments)",&local_268,0);
        FUN_144bdc690(local_1e0);
        uVar14 = local_res18[0];
      }
LAB_144f5ef23:
      *param_1 = uVar14;
      return param_1;
    }
    local_240 = (char *)((longlong)iVar6 + *param_2);
    pcVar13 = (char *)(*param_2 + 1 + (longlong)iVar5);
    pcVar16 = pcVar13 + 1;
    iVar5 = 0;
    if (pcVar16 < local_240) {
      do {
        cVar4 = *pcVar16;
        if (cVar4 == '<') {
          iVar15 = iVar5 + 1;
        }
        else if (cVar4 == '>') {
          local_res18[0] = 0x80040257;
          if (iVar5 < 1) {
            if (DAT_14c797ec0 != 0) {
              lVar8 = FUN_144bdc640(local_1e0,&DAT_14c797e70,1);
              local_230 = 2;
              *(char **)(lVar8 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
              local_228 = FUN_144be3410;
              local_220 = "bracketNesting <= 0";
              local_218 = FUN_144bdef40;
              local_210 = (longlong **)local_res18;
              *(undefined8 *)(lVar8 + 0x40) = 0x161;
              uVar7 = FUN_144bdc480(lVar8,"HK_RETURN_RES_IF({}) returning {}. ",&local_230,0);
              local_268 = 1;
              local_260 = FUN_144c19e40;
              local_258 = local_res10;
              FUN_144bdc480(uVar7,"Invalid type name: {} (invalid brackets nesting)",&local_268,0);
              FUN_144bdc690(local_1e0);
              *param_1 = local_res18[0];
              return param_1;
            }
            goto LAB_144f5ef23;
          }
          iVar15 = iVar5 + -1;
        }
        else {
          iVar15 = iVar5;
          if ((cVar4 == ',') && (iVar5 == 0)) {
            local_250 = pcVar13;
            local_248 = pcVar16;
            puVar9 = (undefined4 *)FUN_144f5a210(&local_250,&local_268);
            iVar5 = (int)param_4[1] + 1;
            if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar5) {
              FUN_144bfbfc0(param_4,&PTR_vftable_14c6e47c0,(longlong)iVar5);
            }
            puVar10 = (undefined4 *)((longlong)(int)param_4[1] * 0x10 + *param_4);
            if (puVar10 != (undefined4 *)0x0) {
              uVar1 = puVar9[1];
              uVar2 = puVar9[2];
              uVar3 = puVar9[3];
              *puVar10 = *puVar9;
              puVar10[1] = uVar1;
              puVar10[2] = uVar2;
              puVar10[3] = uVar3;
            }
            *(int *)(param_4 + 1) = iVar5;
            pcVar13 = pcVar16 + 1;
          }
        }
        pcVar16 = pcVar16 + 1;
        param_2 = local_res10;
        iVar5 = iVar15;
      } while (pcVar16 < local_240);
    }
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,0x80040257);
    if (iVar15 != 0) {
      if (DAT_14c797ec0 != 0) {
        lVar8 = FUN_144bdc640(local_1e0,&DAT_14c797e70,1);
        local_230 = 2;
        *(char **)(lVar8 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
        local_228 = FUN_144f61ba0;
        local_220 = "bracketNesting";
        local_218 = FUN_144bdef40;
        local_210 = &local_res10;
        *(undefined8 *)(lVar8 + 0x40) = 0x16a;
        uVar7 = FUN_144bdc480(lVar8,"HK_RETURN_RES_IF({}) returning {}. ",&local_230,0);
        local_268 = 1;
        local_260 = FUN_144c19e40;
        local_258 = param_2;
        FUN_144bdc480(uVar7,"Invalid type name: {} (invalid brackets nesting)",&local_268,0);
        FUN_144bdc690(local_1e0);
        uVar14 = local_res10._0_4_;
      }
      *param_1 = uVar14;
      return param_1;
    }
    if (pcVar13 < local_240) {
      local_250 = pcVar13;
      local_248 = local_240;
      puVar11 = (undefined8 *)FUN_144f5a210(&local_250,&local_268);
      iVar15 = (int)param_4[1] + 1;
      if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar15) {
        FUN_144bfbfc0(param_4,&PTR_vftable_14c6e47c0,(longlong)iVar15);
      }
      puVar12 = (undefined8 *)((longlong)(int)param_4[1] * 0x10 + *param_4);
      if (puVar12 != (undefined8 *)0x0) {
        uVar7 = puVar11[1];
        *puVar12 = *puVar11;
        puVar12[1] = uVar7;
      }
      *(int *)(param_4 + 1) = iVar15;
    }
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f5f2b0 FUN_144f5f2b0 body=2294 status=ok
// SIG undefined FUN_144f5f2b0(void)

undefined4 *
FUN_144f5f2b0(undefined4 *param_1,undefined8 param_2,longlong *param_3,int *param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 *local_3d8;
  code *pcStack_3d0;
  code **local_3c8;
  code *pcStack_3c0;
  undefined8 *local_3b8;
  code *local_3a8;
  code *pcStack_3a0;
  code **local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 *local_388;
  undefined4 local_378;
  int local_374 [3];
  code *local_368;
  code *pcStack_360;
  undefined8 local_358;
  undefined1 local_350 [8];
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 *local_338;
  code *pcStack_330;
  undefined8 local_328;
  code *pcStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 *local_308;
  undefined1 *local_2d8;
  int local_2d0;
  uint local_2cc;
  undefined1 local_2c8 [320];
  undefined1 local_188 [336];
  
  local_res10 = param_2;
  lVar5 = FUN_144bef4c0(param_2);
  lVar7 = *param_3;
  if (lVar7 == param_3[1]) {
    if (lVar5 == 0) {
LAB_144f5f798:
      *param_4 = 0;
LAB_144f5f79b:
      *param_1 = 0;
      return param_1;
    }
    if ((DAT_14c797ec0 < 4) && (cVar3 = FUN_144bdbf80(), cVar3 == '\0')) goto LAB_144f5f5a1;
    cVar3 = FUN_144bdbf80();
    if (cVar3 == '\0') {
      local_res18 = FUN_144beee40(local_res10);
      uVar6 = FUN_144bdc640(&local_328,&DAT_14c797e70,4);
      local_3d8 = (undefined1 *)0x1;
      pcStack_3d0 = FUN_144f50c70;
      local_3c8 = (code **)&local_res18;
      local_3a8 = (code *)0x1;
      pcStack_3a0 = FUN_144f50c70;
      local_398 = local_3c8;
      lVar7 = FUN_144bdc480(uVar6,
                            "Cannot lookup generic template type \'{}\' by root name alone, need to specify a specialization with arguments."
                            ,&local_3a8,0);
      *(char **)(lVar7 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
      *(undefined8 *)(lVar7 + 0x40) = 0x187;
      FUN_144bdc690(&local_328);
      *param_1 = 0x80040257;
      return param_1;
    }
    local_358 = FUN_144beee40(local_res10);
    uVar6 = FUN_144bdc810(&local_2d8,&DAT_14c797e70,4);
    local_3d8 = (undefined1 *)0x1;
    pcStack_3d0 = FUN_144f50c70;
    local_3c8 = (code **)&local_358;
    local_3a8 = (code *)0x1;
    pcStack_3a0 = FUN_144f50c70;
    local_398 = local_3c8;
    lVar7 = FUN_144bdc480(uVar6,
                          "Cannot lookup generic template type \'{}\' by root name alone, need to specify a specialization with arguments."
                          ,&local_3a8,0);
    *(undefined8 *)(lVar7 + 0x40) = 0x187;
  }
  else {
    if (lVar5 != 0) {
      uVar14 = *(uint *)(lVar5 + 8) & 0xffff;
      uVar12 = (uint)(param_3[1] - lVar7 >> 4);
      if ((*(uint *)(lVar5 + 8) & 0xffff) != uVar12) {
        iVar4 = 1;
        if ((int)uVar14 < (int)uVar12) {
          iVar4 = -1;
        }
        *param_4 = iVar4;
        goto LAB_144f5f79b;
      }
      local_res18 = (ulonglong)local_res18._4_4_ << 0x20;
      if (uVar14 != 0) {
        iVar4 = 0;
        local_378 = 0x80040257;
        do {
          lVar8 = (longlong)iVar4;
          puVar1 = (undefined8 *)(lVar7 + lVar8 * 0x10);
          local_368 = (code *)*puVar1;
          pcStack_360 = (code *)puVar1[1];
          puVar1 = (undefined8 *)(lVar7 + lVar8 * 0x10);
          lVar8 = lVar5 + lVar8 * 0x10;
          if (local_368 == pcStack_360) {
            uVar13 = 0x80040257;
            if (DAT_14c797ec0 != 0) {
              lVar7 = FUN_144bdc640(&local_2d8,&DAT_14c797e70,1);
              local_3d8 = (undefined1 *)0x2;
              *(char **)(lVar7 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
              pcStack_3d0 = FUN_144f61bc0;
              local_3c8 = (code **)0x149c0ea38;
              pcStack_3c0 = FUN_144bdef40;
              local_3b8 = (undefined8 *)&local_378;
              local_328 = 2;
              pcStack_320 = FUN_144f61bc0;
              *(undefined8 *)(lVar7 + 0x40) = 0x1ad;
              local_318 = 0x49c0ea38;
              uStack_314 = 1;
              uStack_310 = 0x44bdef40;
              uStack_30c = 1;
              local_308 = (undefined4 *)local_3b8;
              uVar6 = FUN_144bdc480(lVar7,"HK_RETURN_RES_IF({}) returning {}. ",&local_328,0);
              local_3d8 = (undefined1 *)0x1;
              pcStack_3d0 = FUN_144f50970;
              local_3c8 = (code **)&local_res18;
              local_3a8 = (code *)0x1;
              pcStack_3a0 = FUN_144f50970;
              local_398 = local_3c8;
              FUN_144bdc480(uVar6,"Invalid empty name for template argument #{}",&local_3a8,0);
              FUN_144bdc690(&local_2d8);
              uVar13 = local_378;
            }
            *param_1 = uVar13;
            return param_1;
          }
          if ((**(char **)(lVar8 + 0x18) == 't') != 9 < (byte)((char)*local_368 - 0x30U)) {
            iVar4 = -1;
            if (9 < (byte)((char)*local_368 - 0x30U)) {
              iVar4 = 1;
            }
            *param_4 = iVar4;
            goto LAB_144f5f79b;
          }
          if (**(char **)(lVar8 + 0x18) == 't') {
            local_2d0 = 0;
            local_348 = 0;
            uStack_340 = 0;
            local_2d8 = local_2c8;
            local_2cc = 0x80000008;
            local_3a8 = (code *)*puVar1;
            pcStack_3a0 = (code *)puVar1[1];
            piVar9 = (int *)FUN_144f5ecd0(local_350,&local_3a8,&local_348,&local_2d8);
            if (*piVar9 < 0) {
              if ((3 < DAT_14c797ec0) || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
                cVar3 = FUN_144bdbf80();
                if (cVar3 == '\0') {
                  uVar6 = FUN_144bdc640(&local_328);
                  local_3d8 = (undefined1 *)0x2;
                  pcStack_3d0 = FUN_144c19e40;
                  local_3c8 = &local_368;
                  pcStack_3c0 = FUN_144f50970;
                  local_3b8 = &local_res18;
                  local_3a8 = (code *)0x2;
                  pcStack_3a0 = FUN_144c19e40;
                  uStack_390 = 0x44f50970;
                  uStack_38c = 1;
                  local_398 = local_3c8;
                  local_388 = local_3b8;
                  lVar7 = FUN_144bdc480(uVar6,
                                        "Failed to parse invalid type name \'{}\' for template argument #{}."
                                        ,&local_3a8,0);
                  *(char **)(lVar7 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
                  *(undefined8 *)(lVar7 + 0x40) = 0x1bf;
                  FUN_144bdc690(&local_328);
                }
                else {
                  uVar6 = FUN_144bdc810(local_188,&DAT_14c797e70,4);
                  local_3d8 = (undefined1 *)0x2;
                  pcStack_3d0 = FUN_144c19e40;
                  local_3c8 = &local_368;
                  pcStack_3c0 = FUN_144f50970;
                  local_3b8 = &local_res18;
                  local_3a8 = (code *)0x2;
                  pcStack_3a0 = FUN_144c19e40;
                  uStack_390 = 0x44f50970;
                  uStack_38c = 1;
                  local_398 = local_3c8;
                  local_388 = local_3b8;
                  lVar7 = FUN_144bdc480(uVar6,
                                        "Failed to parse invalid type name \'{}\' for template argument #{}."
                                        ,&local_3a8,0);
                  *(undefined8 *)(lVar7 + 0x40) = 0x1bf;
LAB_144f5fa19:
                  *(char **)(lVar7 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
                  FUN_144bdc8a0(local_188);
                }
              }
            }
            else {
              uVar6 = *(undefined8 *)(lVar8 + 0x10);
              uVar10 = FUN_144beee40(uVar6);
              iVar4 = FUN_144f5a500(&local_348,uVar10);
              if (-iVar4 != 0) {
                *param_4 = -iVar4;
                *param_1 = 0;
                goto LAB_144f5fa3a;
              }
              pcStack_3d0 = (code *)(local_2d8 + (longlong)local_2d0 * 0x10);
              local_338 = local_2d8;
              local_3a8 = local_368;
              pcStack_3a0 = pcStack_360;
              local_3d8 = local_2d8;
              pcStack_330 = pcStack_3d0;
              piVar9 = (int *)FUN_144f5f2b0(&local_358,uVar6,&local_3d8,local_374,&local_3a8);
              if (-1 < *piVar9) {
                local_2d0 = 0;
                if (local_374[0] != 0) {
                  *param_4 = local_374[0];
                  *param_1 = 0;
                  goto LAB_144f5fa3a;
                }
                if ((-1 < (int)local_2cc) && (local_2d8 != (undefined1 *)0x0)) {
                  (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                            (&PTR_vftable_14c6e47c0,local_2d8,
                             (ulonglong)(local_2cc & 0x7fffffff) << 4);
                }
                goto LAB_144f5f77d;
              }
              if ((3 < DAT_14c797ec0) || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
                cVar3 = FUN_144bdbf80();
                if (cVar3 != '\0') {
                  uVar6 = FUN_144bdc810(local_188,&DAT_14c797e70,4);
                  local_3d8 = &DAT_00000001;
                  pcStack_3d0 = FUN_144c19e40;
                  local_3c8 = &local_368;
                  local_3a8 = (code *)&DAT_00000001;
                  pcStack_3a0 = FUN_144c19e40;
                  local_398 = local_3c8;
                  lVar7 = FUN_144bdc480(uVar6,
                                        "Failed to parse template arguments of invalid type name \'{}\' for registry lookup."
                                        ,&local_3a8,0);
                  *(undefined8 *)(lVar7 + 0x40) = 0x1d2;
                  goto LAB_144f5fa19;
                }
                uVar6 = FUN_144bdc640(&local_328);
                local_3d8 = &DAT_00000001;
                pcStack_3d0 = FUN_144c19e40;
                local_3c8 = &local_368;
                local_3a8 = (code *)&DAT_00000001;
                pcStack_3a0 = FUN_144c19e40;
                local_398 = local_3c8;
                lVar7 = FUN_144bdc480(uVar6,
                                      "Failed to parse template arguments of invalid type name \'{}\' for registry lookup."
                                      ,&local_3a8,0);
                *(char **)(lVar7 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
                *(undefined8 *)(lVar7 + 0x40) = 0x1d2;
                FUN_144bdc690(&local_328);
              }
            }
            *param_1 = 0x80040257;
LAB_144f5fa3a:
            local_2d0 = 0;
            if ((int)local_2cc < 0) {
              return param_1;
            }
            if (local_2d8 == (undefined1 *)0x0) {
              return param_1;
            }
            (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                      (&PTR_vftable_14c6e47c0,local_2d8,(ulonglong)(local_2cc & 0x7fffffff) << 4);
            return param_1;
          }
          uVar2 = *(ulonglong *)(lVar8 + 0x10);
          FUN_144bdfbf0(&local_2d8,&local_368);
          uVar11 = FUN_144bfbc00(local_2d8,0);
          if (uVar11 != uVar2) {
            *param_1 = 0;
            iVar4 = 1;
            if (uVar2 < uVar11) {
              iVar4 = -1;
            }
            *param_4 = iVar4;
            FUN_144bdf2f0(&local_2d8);
            return param_1;
          }
          FUN_144bdf2f0(&local_2d8);
LAB_144f5f77d:
          iVar4 = (int)local_res18 + 1;
          local_res18 = CONCAT44(local_res18._4_4_,iVar4);
        } while (iVar4 < (int)(uint)*(ushort *)(lVar5 + 8));
      }
      goto LAB_144f5f798;
    }
    if ((DAT_14c797ec0 < 4) && (cVar3 = FUN_144bdbf80(), cVar3 == '\0')) goto LAB_144f5f5a1;
    cVar3 = FUN_144bdbf80();
    if (cVar3 == '\0') {
      uVar6 = FUN_144bdc640(&local_328);
      local_3d8 = (undefined1 *)0x2;
      pcStack_3d0 = FUN_144bf0db0;
      local_3c8 = (code **)&local_res10;
      pcStack_3c0 = FUN_144c19e40;
      local_3b8 = param_5;
      local_3a8 = (code *)0x2;
      pcStack_3a0 = FUN_144bf0db0;
      local_388 = param_5;
      uStack_390 = 0x44c19e40;
      uStack_38c = 1;
      local_398 = local_3c8;
      lVar7 = FUN_144bdc480(uVar6,
                            "Type \'{}\' is not a template type, cannot lookup invalid type name \'{}\'."
                            ,&local_3a8,0);
      *(char **)(lVar7 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
      *(undefined8 *)(lVar7 + 0x40) = 0x192;
      FUN_144bdc690(&local_328);
      *param_1 = 0x80040257;
      return param_1;
    }
    uVar6 = FUN_144bdc810(&local_2d8,&DAT_14c797e70,4);
    local_3d8 = (undefined1 *)0x2;
    pcStack_3d0 = FUN_144bf0db0;
    local_3c8 = (code **)&local_res10;
    pcStack_3c0 = FUN_144c19e40;
    local_3b8 = param_5;
    local_3a8 = (code *)0x2;
    pcStack_3a0 = FUN_144bf0db0;
    local_388 = param_5;
    uStack_390 = 0x44c19e40;
    uStack_38c = 1;
    local_398 = local_3c8;
    lVar7 = FUN_144bdc480(uVar6,
                          "Type \'{}\' is not a template type, cannot lookup invalid type name \'{}\'."
                          ,&local_3a8,0);
    *(undefined8 *)(lVar7 + 0x40) = 0x192;
  }
  *(char **)(lVar7 + 0x38) = "Reflect\\TypeReg\\Detail\\hkTypeRegDetail.cpp";
  FUN_144bdc8a0(&local_2d8);
LAB_144f5f5a1:
  *param_1 = 0x80040257;
  return param_1;
}



// FUNCTION 144f5fbb0 FUN_144f5fbb0 body=106 status=ok
// SIG undefined FUN_144f5fbb0(void)

undefined8 * FUN_144f5fbb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::BuiltinTypeReg::SubscriptionImpl::vftable;
  if (param_1[3] != 0) {
    *(undefined8 *)(*(longlong *)(param_1[3] + 0x58) + (longlong)*(int *)(param_1 + 4) * 8) = 0;
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 144f5fc20 FUN_144f5fc20 body=366 status=ok
// SIG undefined FUN_144f5fc20(void)

uint FUN_144f5fc20(ulonglong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  undefined1 local_res8 [8];
  
  while( true ) {
    if (param_1 == (ulonglong *)0x0) {
      return 1;
    }
    if ((*param_1 >> 0x14 & 1) != 0) break;
    param_1 = (ulonglong *)param_1[1];
  }
  puVar10 = (ulonglong *)0x0;
  puVar4 = puVar10;
  if ((*param_1 >> 0x14 & 1) != 0) {
    puVar4 = (ulonglong *)FUN_144befea0(param_1,0x100000);
  }
  uVar8 = *puVar4 & 0xffffffff;
  if (((uint)*puVar4 & 0xfff0000) == 0xfff0000) {
    iVar1 = FUN_144f5fc20(param_1[1]);
    puVar5 = (uint *)FUN_144b45d50(param_1,local_res8);
    iVar3 = iVar1;
    if (((*puVar5 >> 7 & 1) != 0) && (iVar3 = 8, 8 < iVar1)) {
      iVar3 = iVar1;
    }
    puVar6 = (undefined4 *)FUN_144bef800(param_1,local_res8);
    puVar11 = puVar10;
    if (((byte)*puVar6 & 0x1f) == 7) {
      puVar11 = param_1;
    }
    if ((puVar11 != (ulonglong *)0x0) && (iVar2 = FUN_144bef9b0(puVar11), iVar1 = iVar3, 0 < iVar2))
    {
      do {
        puVar7 = (undefined8 *)FUN_144befa10(puVar11,local_res8,puVar10);
        iVar3 = FUN_144beecf0(*puVar7);
        if (iVar3 < iVar1) {
          iVar3 = iVar1;
        }
        uVar9 = (int)puVar10 + 1;
        puVar10 = (ulonglong *)(ulonglong)uVar9;
        iVar2 = FUN_144bef9b0(puVar11);
        iVar1 = iVar3;
      } while ((int)uVar9 < iVar2);
    }
    uVar8 = (uVar8 ^ (longlong)iVar3 << 0x10) & 0xfffffffff000ffff ^ (longlong)iVar3 << 0x10;
    *puVar4 = (ulonglong)((uint)uVar8 & 0xffff0000) | uVar8 & 0xffff;
  }
  return (uint)(uVar8 >> 0x10) & 0xfff;
}



// FUNCTION 144f5fd90 FUN_144f5fd90 body=136 status=ok
// SIG undefined FUN_144f5fd90(void)

undefined8 FUN_144f5fd90(longlong *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 < param_2) {
    return 0;
  }
  iVar2 = (param_2 + param_3) / 2;
  uVar3 = FUN_144f5fd90(param_1,param_2,iVar2 + -1);
  uVar4 = FUN_144f5fd90(param_1,iVar2 + 1,param_3);
  uVar1 = *(undefined8 *)(*param_1 + (longlong)iVar2 * 8);
  FUN_144bddda0(uVar1,uVar3,uVar4);
  return uVar1;
}



// FUNCTION 144f5fe20 FUN_144f5fe20 body=3 status=ok
// SIG undefined FUN_144f5fe20(void)

void FUN_144f5fe20(void)

{
  return;
}



// FUNCTION 144f5fe30 FUN_144f5fe30 body=93 status=ok
// SIG undefined FUN_144f5fe30(void)

undefined4
FUN_144f5fe30(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  
  iVar1 = FUN_144f601b0();
  puVar2 = (undefined8 *)(*param_1 + (longlong)iVar1 * 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *param_3;
  }
  puVar2 = (undefined8 *)(*param_1 + 8 + (longlong)iVar1 * 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *param_4;
  }
  return local_res8;
}



// FUNCTION 144f5fe90 FUN_144f5fe90 body=144 status=ok
// SIG undefined FUN_144f5fe90(void)

longlong FUN_144f5fe90(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (0 < (int)uVar1) {
    lVar2 = *param_2;
    lVar3 = *param_1;
    iVar5 = (int)((ulonglong)lVar2 >> 0x20);
    uVar7 = iVar5 * -0x61c8864f;
    uVar8 = (int)lVar2 * -0x61c8864f;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar5 * -0x4f000000;
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
            (int)lVar2 * -0x4f000000;
    uVar7 = (uVar7 * 0x40 + uVar8 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar7) & uVar1;
    lVar6 = (ulonglong)uVar7 * 0x10;
    lVar4 = *(longlong *)(lVar3 + lVar6);
    while (lVar4 != -1) {
      if (lVar4 == lVar2) {
        return lVar3 + 8 + lVar6;
      }
      uVar7 = uVar7 + 1 & uVar1;
      lVar6 = (ulonglong)uVar7 * 0x10;
      lVar4 = *(longlong *)(lVar3 + lVar6);
    }
  }
  return param_3;
}



// FUNCTION 144f5ff20 FUN_144f5ff20 body=54 status=ok
// SIG undefined FUN_144f5ff20(void)

void FUN_144f5ff20(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(int *)((longlong)param_1 + 0xc) != 0) &&
     (iVar1 = *(int *)((longlong)param_1 + 0xc) + 1, lVar3 = (longlong)iVar1, 0 < iVar1)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar2 + *param_1) != -1) {
        *(undefined8 *)(lVar2 + *param_1) = 0xffffffffffffffff;
      }
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
  return;
}



// FUNCTION 144f5ff60 FUN_144f5ff60 body=132 status=ok
// SIG undefined FUN_144f5ff60(void)

void FUN_144f5ff60(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(int *)((longlong)param_1 + 0xc) != 0) &&
     (iVar2 = *(int *)((longlong)param_1 + 0xc) + 1, lVar4 = (longlong)iVar2, 0 < iVar2)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar3 + *param_1) != -1) {
        *(undefined8 *)(lVar3 + *param_1) = 0xffffffffffffffff;
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 & 0x80000000;
  if ((*param_1 != 0) && ((uVar1 & 0x80000000) == 0)) {
    (**(code **)(*param_2 + 0x18))
              (param_2,*param_1,(longlong)(*(int *)((longlong)param_1 + 0xc) + 1) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  return;
}



// FUNCTION 144f5fff0 FUN_144f5fff0 body=442 status=ok
// SIG undefined FUN_144f5fff0(void)

undefined4 * FUN_144f5fff0(longlong *param_1,undefined4 *param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  undefined1 local_res8 [8];
  
  lVar4 = param_1[1];
  plVar1 = (longlong *)*param_1;
  iVar5 = 8;
  if (8 < param_4) {
    iVar5 = param_4;
  }
  lVar10 = (longlong)iVar5;
  iVar8 = *(int *)((longlong)param_1 + 0xc) + 1;
  lVar6 = (**(code **)(*param_3 + 8))(param_3,lVar10 << 4);
  if (lVar6 == 0) {
    *param_2 = 0x80040200;
  }
  else {
    *param_1 = lVar6;
    if (0 < iVar5) {
      lVar6 = 0;
      do {
        *(undefined8 *)(lVar6 + *param_1) = 0xffffffffffffffff;
        lVar10 = lVar10 + -1;
        lVar6 = lVar6 + 0x10;
      } while (lVar10 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    iVar9 = 0;
    *(int *)((longlong)param_1 + 0xc) = iVar5 + -1;
    lVar6 = (longlong)iVar8;
    plVar11 = plVar1;
    if (0 < iVar8) {
      do {
        if (*plVar11 != -1) {
          if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
            FUN_144f5fff0(param_1,local_res8,param_3,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
          }
          lVar10 = *plVar11;
          iVar13 = 1;
          iVar5 = (int)((ulonglong)lVar10 >> 0x20);
          uVar7 = iVar5 * -0x61c8864f;
          uVar12 = (int)lVar10 * -0x61c8864f;
          uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                  iVar5 * -0x4f000000;
          uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                   (int)lVar10 * -0x4f000000;
          lVar2 = *param_1;
          uVar7 = (uVar7 * 0x40 + uVar12 + 0x9e3779b9 + (uVar12 >> 2) ^ uVar7) &
                  *(uint *)((longlong)param_1 + 0xc);
          lVar3 = *(longlong *)(lVar2 + (ulonglong)uVar7 * 0x10);
          while (lVar3 != -1) {
            if (lVar3 == lVar10) {
              iVar13 = 0;
              break;
            }
            uVar7 = uVar7 + 1 & *(uint *)((longlong)param_1 + 0xc);
            lVar3 = *(longlong *)(lVar2 + (ulonglong)uVar7 * 0x10);
          }
          *(int *)(param_1 + 1) = (int)param_1[1] + iVar13;
          FUN_144b3d470((longlong)(int)uVar7 * 0x10 + lVar2,plVar1 + (longlong)iVar9 * 2,0x10);
        }
        iVar9 = iVar9 + 1;
        lVar6 = lVar6 + -1;
        plVar11 = plVar11 + 2;
      } while (lVar6 != 0);
    }
    if (-1 < (int)lVar4) {
      (**(code **)(*param_3 + 0x18))(param_3,plVar1,(longlong)iVar8 << 4);
    }
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 144f601b0 FUN_144f601b0 body=198 status=ok
// SIG undefined FUN_144f601b0(void)

void FUN_144f601b0(longlong *param_1,undefined8 param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_144f5fff0(param_1,local_res8,param_2,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
  }
  *param_4 = 1;
  lVar1 = *param_3;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar4 = iVar3 * -0x61c8864f;
  uVar5 = (int)lVar1 * -0x61c8864f;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar4 = (uVar4 * 0x40 + uVar5 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar4) &
          *(uint *)((longlong)param_1 + 0xc);
  lVar2 = *(longlong *)(*param_1 + (ulonglong)uVar4 * 0x10);
  do {
    if (lVar2 == -1) {
LAB_144f60261:
      *(int *)(param_1 + 1) = (int)param_1[1] + *param_4;
      return;
    }
    if (lVar2 == lVar1) {
      *param_4 = 0;
      goto LAB_144f60261;
    }
    uVar4 = uVar4 + 1 & *(uint *)((longlong)param_1 + 0xc);
    lVar2 = *(longlong *)(*param_1 + (ulonglong)uVar4 * 0x10);
  } while( true );
}



// FUNCTION 144f60280 FUN_144f60280 body=164 status=ok
// SIG undefined FUN_144f60280(void)

longlong FUN_144f60280(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = FUN_144f699a0();
  uVar1 = *(uint *)((longlong)param_2 + 0xc);
  if (0 < (int)uVar1) {
    uVar7 = (int)lVar3 * -0x61c8864f;
    iVar4 = (int)((ulonglong)lVar3 >> 0x20);
    uVar6 = iVar4 * -0x61c8864f;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
            (int)lVar3 * -0x4f000000;
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar4 * -0x4f000000;
    uVar6 = (uVar6 * 0x40 + uVar7 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar6) & uVar1;
    plVar5 = (longlong *)((ulonglong)uVar6 * 0x10 + *param_2);
    lVar2 = *plVar5;
    while (lVar2 != -1) {
      if (lVar2 == lVar3) {
        return plVar5[1];
      }
      uVar6 = uVar6 + 1 & uVar1;
      plVar5 = (longlong *)((ulonglong)uVar6 * 0x10 + *param_2);
      lVar2 = *plVar5;
    }
  }
  return lVar3;
}



// FUNCTION 144f60330 FUN_144f60330 body=139 status=ok
// SIG undefined FUN_144f60330(void)

void FUN_144f60330(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(int *)((longlong)param_1 + 0xc) != 0) &&
     (iVar2 = *(int *)((longlong)param_1 + 0xc) + 1, lVar4 = (longlong)iVar2, 0 < iVar2)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar3 + *param_1) != -1) {
        *(undefined8 *)(lVar3 + *param_1) = 0xffffffffffffffff;
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 & 0x80000000;
  if ((*param_1 != 0) && ((uVar1 & 0x80000000) == 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*param_1,
               (longlong)(*(int *)((longlong)param_1 + 0xc) + 1) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  return;
}



// FUNCTION 144f603c0 FUN_144f603c0 body=577 status=ok
// SIG undefined FUN_144f603c0(void)

int FUN_144f603c0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong local_res18 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  
  lVar6 = FUN_144f60280(param_1,param_4);
  uVar11 = *(uint *)((longlong)param_3 + 0xc);
  local_res18[0] = -1;
  iVar12 = (int)lVar6;
  iVar8 = (int)((ulonglong)lVar6 >> 0x20);
  if (0 < (int)uVar11) {
    uVar14 = iVar12 * -0x61c8864f;
    uVar10 = iVar8 * -0x61c8864f;
    uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
             iVar12 * -0x4f000000;
    uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
             iVar8 * -0x4f000000;
    uVar10 = (uVar14 + uVar10 * 0x40 + (uVar14 >> 2) + 0x9e3779b9 ^ uVar10) & uVar11;
    plVar9 = (longlong *)((ulonglong)uVar10 * 0x10 + *param_3);
    lVar3 = *plVar9;
    while (lVar3 != -1) {
      if (lVar3 == lVar6) {
        plVar9 = plVar9 + 1;
        goto LAB_144f60467;
      }
      uVar10 = uVar10 + 1 & uVar11;
      plVar9 = (longlong *)((ulonglong)uVar10 * 0x10 + *param_3);
      lVar3 = *plVar9;
    }
  }
  plVar9 = local_res18;
LAB_144f60467:
  iVar2 = (int)*plVar9;
  if (iVar2 < 0) {
    iVar5 = -1;
    if (*(longlong *)(lVar6 + 8) != 0) {
      uVar7 = FUN_144f69980();
      iVar5 = FUN_144f603c0(uVar7,param_2,param_3,param_4);
    }
    iVar2 = (int)param_2[1];
    if (iVar5 == -1) {
      local_28 = 0xffffffff;
    }
    else {
      local_28 = *(undefined4 *)(*param_2 + 0xc + (longlong)iVar5 * 0x18);
      *(int *)(*param_2 + (longlong)iVar5 * 0x18 + 0xc) = iVar2;
    }
    iVar13 = (int)param_2[1] + 1;
    if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar13) {
      FUN_144f61290(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar13);
    }
    piVar1 = (int *)(*param_2 + (longlong)(int)param_2[1] * 0x18);
    if (piVar1 != (int *)0x0) {
      *piVar1 = iVar12;
      piVar1[1] = iVar8;
      piVar1[2] = iVar5;
      piVar1[3] = -1;
      *(ulonglong *)(piVar1 + 4) = CONCAT44(uStack_24,local_28);
    }
    *(int *)(param_2 + 1) = iVar13;
    if (*(int *)((longlong)param_3 + 0xc) < (int)param_3[1] * 2) {
      FUN_144f5fff0(param_3,local_res18,&PTR_vftable_14c6e47c0,
                    *(int *)((longlong)param_3 + 0xc) * 2 + 2);
    }
    lVar3 = *param_3;
    iVar5 = 1;
    uVar11 = iVar8 * -0x61c8864f;
    uVar10 = iVar12 * -0x61c8864f;
    uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
             iVar8 * -0x4f000000;
    uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
             iVar12 * -0x4f000000;
    uVar11 = (uVar10 + uVar11 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar11) &
             *(uint *)((longlong)param_3 + 0xc);
    lVar4 = *(longlong *)(lVar3 + (ulonglong)uVar11 * 0x10);
    while (lVar4 != -1) {
      if (lVar4 == lVar6) {
        iVar5 = 0;
        break;
      }
      uVar11 = uVar11 + 1 & *(uint *)((longlong)param_3 + 0xc);
      lVar4 = *(longlong *)(lVar3 + (ulonglong)uVar11 * 0x10);
    }
    *(int *)(param_3 + 1) = (int)param_3[1] + iVar5;
    plVar9 = (longlong *)(lVar3 + (longlong)(int)uVar11 * 0x10);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = lVar6;
    }
    plVar9 = (longlong *)(*param_3 + 8 + (longlong)(int)uVar11 * 0x10);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)iVar2;
    }
  }
  return iVar2;
}



// FUNCTION 144f60610 FUN_144f60610 body=177 status=ok
// SIG undefined FUN_144f60610(void)

uint FUN_144f60610(int param_1,longlong *param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong *puVar4;
  
  uVar2 = *(undefined8 *)(*param_2 + (longlong)param_1 * 0x18);
  uVar3 = param_3 + 1U;
  for (uVar1 = *(uint *)(*param_2 + 0xc + (longlong)param_1 * 0x18); -1 < (int)uVar1;
      uVar1 = *(uint *)(*param_2 + 0x10 + (ulonglong)uVar1 * 0x18)) {
    uVar3 = FUN_144f60610(uVar1,param_2,uVar3,param_4);
  }
  puVar4 = (ulonglong *)FUN_144befe50(uVar2,0x2000);
  if (puVar4 != (ulonglong *)0x0) {
    *puVar4 = (longlong)(int)((uVar3 & 0x7fff | (param_3 + 1U) * 0x8000) << 2) |
              (ulonglong)(param_4 & 3);
  }
  return uVar3;
}



// FUNCTION 144f606d0 FUN_144f606d0 body=993 status=ok
// SIG undefined FUN_144f606d0(void)

void FUN_144f606d0(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 local_res8 [8];
  longlong *local_res10;
  ulonglong local_res20;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  int local_58;
  uint local_54;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  
  uVar14 = *(uint *)(param_1 + 1);
  local_58 = 0;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res10 = param_2;
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar2 + 0xf0);
  if (lVar6 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar6;
  }
  uVar13 = 0;
  uVar16 = *(ulonglong *)(*(longlong *)(lVar6 + 0x3d0) + 0x10);
  local_50 = uVar13;
  if (*(longlong *)(uVar16 + 8) == 0) {
    local_50 = uVar16;
  }
  local_88 = (longlong)(int)uVar14 * 0x18;
  local_40 = local_88;
  if (local_50 == 0) {
    local_60 = (*DAT_14c787670)(CONCAT71((int7)(uVar16 >> 8),1),&local_88,0x40);
  }
  else {
    local_res20 = local_88 + 0x3fU & 0xffffffffffffffc0;
    if (local_res20 <= *(ulonglong *)(local_50 + 0x28)) {
      local_60 = *(longlong *)(local_50 + 0x38);
      if (local_60 + local_res20 <= *(ulonglong *)(local_50 + 0x40)) {
        *(ulonglong *)(local_50 + 0x38) = local_60 + local_res20;
        goto LAB_144f607be;
      }
    }
    local_60 = FUN_144b454a0(local_50,&local_res20);
  }
LAB_144f607be:
  local_54 = uVar14 | 0x80000000;
  iVar4 = (int)param_1[1] * 2;
  iVar9 = 8;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0xffffffff;
  if (8 < iVar4) {
    do {
      iVar9 = iVar9 * 2;
    } while (iVar9 < iVar4);
  }
  local_48 = local_60;
  FUN_144f5fff0(&local_70,local_res8,&PTR_vftable_14c6e47c0);
  uVar16 = uVar13;
  uVar15 = uVar13;
  if (0 < (int)param_1[1]) {
    do {
      FUN_144f603c0(*(undefined8 *)(*(longlong *)(uVar16 + *param_1) + 8),&local_60,&local_70,
                    param_2);
      uVar14 = (int)uVar15 + 1;
      uVar16 = uVar16 + 8;
      uVar15 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)param_1[1]);
  }
  uVar16 = uVar13;
  uVar15 = uVar13;
  iVar9 = local_58;
  if (0 < local_58) {
    do {
      if (*(int *)(uVar15 + 8 + local_60) == -1) {
        local_80 = *(undefined8 *)(uVar15 + local_60);
        uVar12 = (int)uVar13 + 1;
        uVar5 = uVar12;
        for (uVar14 = *(uint *)(uVar15 + 0xc + local_60); uVar13 = (ulonglong)uVar5,
            -1 < (int)uVar14; uVar14 = *(uint *)(local_60 + 0x10 + (ulonglong)uVar14 * 0x18)) {
          uVar5 = FUN_144f60610(uVar14,&local_60,uVar13,param_3);
        }
        puVar7 = (ulonglong *)FUN_144befe50(local_80,0x2000);
        iVar9 = local_58;
        if (puVar7 != (ulonglong *)0x0) {
          *puVar7 = (longlong)(int)((uVar5 & 0x7fff | uVar12 * 0x8000) << 2) |
                    (ulonglong)(param_3 & 3);
        }
      }
      uVar14 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar14;
      param_2 = local_res10;
      uVar15 = uVar15 + 0x18;
    } while ((int)uVar14 < iVar9);
  }
  plVar11 = (longlong *)*param_1;
  plVar1 = plVar11 + (int)param_1[1];
  do {
    if (plVar11 == plVar1) {
      FUN_144f60330(&local_70);
      if (local_48 == local_60) {
        local_58 = 0;
      }
      if (local_50 == 0) {
        (*DAT_14c787678)(1);
      }
      else {
        uVar16 = local_40 + 0x3fU & 0xffffffffffffffc0;
        if ((*(ulonglong *)(local_50 + 0x28) < uVar16) ||
           (local_48 + uVar16 != *(longlong *)(local_50 + 0x38))) {
          FUN_144be8550();
        }
        else {
          *(longlong *)(local_50 + 0x38) = local_48;
          if (*(longlong *)(local_50 + 0x48) == local_48) {
            FUN_144be8430();
          }
        }
      }
      local_58 = 0;
      if ((-1 < (int)local_54) && (local_60 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_60,(ulonglong)(local_54 & 0x7fffffff) * 0x18);
      }
      return;
    }
    uVar3 = *(undefined8 *)(*plVar11 + 8);
    puVar7 = (ulonglong *)FUN_144befe50(uVar3,0x2000);
    if ((puVar7 != (ulonglong *)0x0) && (((uint)*puVar7 & 3) != param_3)) {
      local_78 = FUN_144f699a0(uVar3);
      uVar14 = *(uint *)((longlong)param_2 + 0xc);
      if (0 < (int)uVar14) {
        uVar12 = (int)local_78 * -0x61c8864f;
        iVar9 = (int)((ulonglong)local_78 >> 0x20);
        uVar5 = iVar9 * -0x61c8864f;
        uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                 (int)local_78 * -0x4f000000;
        uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                iVar9 * -0x4f000000;
        lVar2 = *param_2;
        uVar5 = (uVar5 * 0x40 + uVar12 + (uVar12 >> 2) + 0x9e3779b9 ^ uVar5) & uVar14;
        lVar6 = *(longlong *)(lVar2 + (ulonglong)uVar5 * 0x10);
        while (lVar6 != -1) {
          if (lVar6 == local_78) {
            plVar10 = (longlong *)((ulonglong)uVar5 * 0x10 + 8 + lVar2);
            goto LAB_144f609c1;
          }
          uVar5 = uVar5 + 1 & uVar14;
          lVar6 = *(longlong *)(lVar2 + (ulonglong)uVar5 * 0x10);
        }
      }
      plVar10 = &local_78;
LAB_144f609c1:
      puVar8 = (undefined8 *)FUN_144befe50(*plVar10,0x2000);
      *puVar7 = (longlong)(int)((uint)*puVar8 & 0xfffffffc) | (ulonglong)((uint)*puVar8 & 3);
    }
    plVar11 = plVar11 + 1;
  } while( true );
}



// FUNCTION 144f60ac0 FUN_144f60ac0 body=149 status=ok
// SIG undefined FUN_144f60ac0(void)

longlong * FUN_144f60ac0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  int local_res8 [2];
  
  FUN_144f61040(param_1,local_res8);
  iVar3 = (int)param_1[1];
  bVar4 = local_res8[0] == iVar3;
  if (bVar4) {
    iVar3 = iVar3 + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_144c13a80(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_3;
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  lVar2 = *param_1;
  *(bool *)(param_2 + 1) = bVar4;
  *param_2 = lVar2 + (longlong)local_res8[0] * 8;
  return param_2;
}



// FUNCTION 144f60b60 FUN_144f60b60 body=147 status=ok
// SIG undefined FUN_144f60b60(void)

longlong * FUN_144f60b60(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  int local_res8 [2];
  
  FUN_144f61170(param_1,local_res8);
  iVar3 = (int)param_1[1];
  bVar4 = local_res8[0] == iVar3;
  if (bVar4) {
    iVar3 = iVar3 + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_144f61d00(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar2 = (undefined8 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = param_3[1];
      *puVar2 = *param_3;
      puVar2[1] = uVar1;
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  *param_2 = (longlong)local_res8[0] * 0x10 + *param_1;
  *(bool *)(param_2 + 1) = bVar4;
  return param_2;
}



// FUNCTION 144f60c00 FUN_144f60c00 body=276 status=ok
// SIG undefined FUN_144f60c00(void)

longlong * FUN_144f60c00(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)*param_2) {
    while (*(longlong *)*param_3 != *param_1) {
      iVar1 = FUN_144bef170();
      if (iVar1 == 0) {
        plVar3 = (longlong *)param_3[1];
        iVar1 = (int)plVar3[1];
        if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar1 + 1) {
          FUN_144f61970(plVar3,&PTR_vftable_14c6e47c0,(longlong)iVar1 + 1);
        }
        puVar2 = (undefined8 *)((longlong)(int)plVar3[1] * 0x10 + *plVar3);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        *(int *)(plVar3 + 1) = iVar1 + 1;
        plVar3 = (longlong *)((longlong)iVar1 * 0x10 + *plVar3);
        *plVar3 = *param_1;
        plVar3[1] = *(longlong *)*param_3;
        plVar3 = (longlong *)param_3[2];
        iVar1 = (int)plVar3[1] + 1;
        if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar1) {
          FUN_144f613b0(plVar3,&PTR_vftable_14c6e47c0,(longlong)iVar1);
        }
        puVar2 = (undefined8 *)(*plVar3 + (longlong)(int)plVar3[1] * 8);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = param_1;
        }
        *(int *)(plVar3 + 1) = iVar1;
        return param_1;
      }
      param_1 = param_1 + 1;
      if (param_1 == (longlong *)*param_2) {
        return param_1;
      }
    }
  }
  return param_1;
}



// FUNCTION 144f60d20 FUN_144f60d20 body=206 status=ok
// SIG undefined FUN_144f60d20(void)

void FUN_144f60d20(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar6 = (ulonglong)param_2;
  uVar7 = uVar6;
  do {
    uVar9 = uVar7 & 0xffffffff;
    iVar1 = *(int *)(param_1 + ((longlong)((int)uVar7 + param_3) >> 1) * 4);
    uVar5 = (longlong)param_3;
    iVar4 = param_3;
    do {
      uVar8 = (uint)uVar9;
      iVar2 = *(int *)(param_1 + uVar6 * 4);
      while (iVar1 < iVar2) {
        uVar6 = uVar6 + 1;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        iVar2 = *(int *)(param_1 + uVar6 * 4);
      }
      iVar2 = *(int *)(param_1 + uVar5 * 4);
      while (iVar2 < iVar1) {
        uVar5 = uVar5 - 1;
        iVar4 = iVar4 + -1;
        iVar2 = *(int *)(param_1 + uVar5 * 4);
      }
      if ((longlong)uVar5 < (longlong)uVar6) break;
      if (uVar5 != uVar6) {
        uVar3 = *(undefined4 *)(param_1 + uVar5 * 4);
        *(undefined4 *)(param_1 + uVar5 * 4) = *(undefined4 *)(param_1 + uVar6 * 4);
        *(undefined4 *)(param_1 + uVar6 * 4) = uVar3;
      }
      iVar4 = iVar4 + -1;
      uVar5 = uVar5 - 1;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 <= (longlong)uVar5);
    if ((int)uVar7 < iVar4) {
      FUN_144f60d20(param_1,uVar7 & 0xffffffff,iVar4,param_4);
    }
    if (param_3 <= (int)uVar8) {
      return;
    }
    uVar7 = (ulonglong)uVar8;
  } while( true );
}



// FUNCTION 144f60df0 FUN_144f60df0 body=582 status=ok
// SIG undefined FUN_144f60df0(void)

void FUN_144f60df0(longlong param_1,uint param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  bool bVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint local_res10;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_80;
  longlong lStack_78;
  
  uVar15 = (ulonglong)(int)param_2;
  uVar24 = uVar15;
  local_res10 = param_2;
LAB_144f60e30:
  uVar21 = (ulonglong)param_3;
  uVar23 = uVar15 & 0xffffffff;
  lVar20 = ((longlong)((int)uVar15 + param_3) >> 1) * 0x20;
  plVar19 = (longlong *)(lVar20 + param_1);
  lVar4 = *plVar19;
  lStack_78 = plVar19[1];
  puVar16 = (undefined8 *)(lVar20 + 0x10 + param_1);
  uVar5 = *puVar16;
  uVar6 = puVar16[1];
  iVar12 = (int)lStack_78;
  local_80 = lVar4;
  iVar18 = param_3;
LAB_144f60e60:
  plVar19 = (longlong *)(uVar24 * 0x20 + param_1);
  do {
    uVar22 = (uint)uVar23;
    if (*(longlong *)(*plVar19 + 8) == *(longlong *)(lVar4 + 8)) {
LAB_144f60ea0:
      if ((int)plVar19[1] != iVar12) {
        bVar13 = (int)plVar19[1] < iVar12;
        goto LAB_144f60eb1;
      }
      if (*(longlong *)(*plVar19 + 8) == *(longlong *)(lVar4 + 8)) break;
      lVar20 = FUN_144f699a0();
      if (*(longlong *)(*plVar19 + 8) != lVar20) break;
    }
    else {
      local_a0 = (undefined4)plVar19[2];
      uStack_9c = *(undefined4 *)((longlong)plVar19 + 0x14);
      uStack_98 = (undefined4)plVar19[3];
      uStack_94 = *(undefined4 *)((longlong)plVar19 + 0x1c);
      local_b0 = uVar5;
      uStack_a8 = uVar6;
      iVar14 = FUN_144bf0080(&local_a0,&local_b0);
      if (iVar14 == 0) goto LAB_144f60ea0;
      bVar13 = SUB41((uint)iVar14 >> 0x1f,0);
LAB_144f60eb1:
      if (bVar13 == false) break;
    }
    uVar23 = (ulonglong)(uVar22 + 1);
    uVar24 = uVar24 + 1;
    plVar19 = plVar19 + 4;
  } while( true );
  plVar19 = (longlong *)(uVar21 * 0x20 + param_1);
  do {
    if (*(longlong *)(lVar4 + 8) == *(longlong *)(*plVar19 + 8)) {
LAB_144f60f2a:
      if (iVar12 != (int)plVar19[1]) {
        bVar13 = iVar12 < (int)plVar19[1];
        goto LAB_144f60f3f;
      }
      if (*(longlong *)(lVar4 + 8) == *(longlong *)(*plVar19 + 8)) break;
      lVar20 = FUN_144f699a0();
      if (*(longlong *)(lVar4 + 8) != lVar20) break;
    }
    else {
      local_a0 = (undefined4)plVar19[2];
      uStack_9c = *(undefined4 *)((longlong)plVar19 + 0x14);
      uStack_98 = (undefined4)plVar19[3];
      uStack_94 = *(undefined4 *)((longlong)plVar19 + 0x1c);
      local_b0 = uVar5;
      uStack_a8 = uVar6;
      iVar14 = FUN_144bf0080(&local_b0,&local_a0);
      if (iVar14 == 0) goto LAB_144f60f2a;
      bVar13 = SUB41((uint)iVar14 >> 0x1f,0);
LAB_144f60f3f:
      if (bVar13 == false) break;
    }
    iVar18 = iVar18 + -1;
    uVar21 = uVar21 - 1;
    plVar19 = plVar19 + -4;
  } while( true );
  if ((longlong)uVar21 < (longlong)uVar24) goto LAB_144f60f9a;
  if (uVar21 != uVar24) {
    puVar16 = (undefined8 *)(uVar21 * 0x20 + param_1);
    puVar17 = (undefined8 *)(uVar24 * 0x20 + param_1);
    uVar7 = *puVar16;
    uVar8 = puVar16[1];
    uVar1 = *(undefined4 *)((longlong)puVar17 + 4);
    uVar2 = *(undefined4 *)(puVar17 + 1);
    uVar3 = *(undefined4 *)((longlong)puVar17 + 0xc);
    uVar9 = puVar16[2];
    uVar10 = puVar16[3];
    *(undefined4 *)puVar16 = *(undefined4 *)puVar17;
    *(undefined4 *)((longlong)puVar16 + 4) = uVar1;
    *(undefined4 *)(puVar16 + 1) = uVar2;
    *(undefined4 *)((longlong)puVar16 + 0xc) = uVar3;
    uVar11 = puVar17[3];
    puVar16[2] = puVar17[2];
    puVar16[3] = uVar11;
    *puVar17 = uVar7;
    puVar17[1] = uVar8;
    puVar17[2] = uVar9;
    puVar17[3] = uVar10;
  }
  iVar18 = iVar18 + -1;
  uVar21 = uVar21 - 1;
  uVar22 = uVar22 + 1;
  uVar23 = (ulonglong)uVar22;
  uVar24 = uVar24 + 1;
  if ((longlong)uVar21 < (longlong)uVar24) goto LAB_144f60f9a;
  goto LAB_144f60e60;
LAB_144f60f9a:
  if ((int)local_res10 < iVar18) {
    FUN_144f60df0(param_1,local_res10,iVar18,param_4);
  }
  if (param_3 <= (int)uVar22) {
    return;
  }
  uVar15 = (ulonglong)uVar22;
  local_res10 = uVar22;
  goto LAB_144f60e30;
}



// FUNCTION 144f61040 FUN_144f61040 body=296 status=ok
// SIG undefined FUN_144f61040(void)

uint * FUN_144f61040(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = (int)param_1[1] + 1;
  uVar7 = (longlong)iVar8 * 3;
  if ((iVar8 < 0) || (0xffffffff < uVar7)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar3 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar3)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar3 < (uint)uVar7)) {
    FUN_144b2eb80(param_1 + 2);
  }
  lVar1 = *param_3;
  lVar2 = param_1[2];
  iVar8 = (int)((ulonglong)lVar1 >> 0x20);
  uVar9 = iVar8 * -0x61c8864f;
  uVar10 = (int)lVar1 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
           (int)lVar1 * -0x4f000000;
  uVar9 = (uVar10 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + uVar10 ^ uVar9;
  uVar7 = (ulonglong)(uVar9 & *(uint *)(param_1 + 3));
  iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar2 + uVar7 * 8);
    if (iVar8 < 0) {
      uVar10 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar10;
      lVar2 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144f61140:
      param_2[1] = (uint)((longlong)puVar6 - lVar2 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(longlong *)(*param_1 + (longlong)(int)puVar6[1] * 8) == lVar1)) {
      *param_2 = puVar6[1];
      goto LAB_144f61140;
    }
    uVar7 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144f61170 FUN_144f61170 body=286 status=ok
// SIG undefined FUN_144f61170(void)

uint * FUN_144f61170(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar9 = (int)param_1[1] + 1;
  if ((iVar9 < 0) || (0xffffffff < (ulonglong)((longlong)iVar9 * 3))) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar8 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar8)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if (((bool)(bVar6 & bVar5)) && ((uint)uVar8 < (uint)((longlong)iVar9 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar9);
  }
  uVar7 = FUN_144bf0300(param_3);
  iVar9 = *(int *)(param_1[2] + 4 + (ulonglong)(*(uint *)(param_1 + 3) & uVar7) * 8);
  puVar1 = (uint *)(param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & uVar7) * 8);
  do {
    if (iVar9 < 0) {
      uVar3 = *(uint *)(param_1 + 1);
      *puVar1 = uVar7;
      puVar1[1] = uVar3;
      uVar7 = *(uint *)(param_1 + 1);
LAB_144f6125e:
      param_2[1] = (uint)((longlong)puVar1 - param_1[2] >> 3);
      *param_2 = uVar7;
      return param_2;
    }
    if (*puVar1 == uVar7) {
      local_38 = *param_3;
      uStack_30 = param_3[1];
      puVar2 = (undefined4 *)(*param_1 + (longlong)(int)puVar1[1] * 0x10);
      local_28 = *puVar2;
      uStack_24 = puVar2[1];
      uStack_20 = puVar2[2];
      uStack_1c = puVar2[3];
      iVar9 = FUN_144bf0080(&local_28,&local_38);
      if (iVar9 == 0) {
        uVar7 = puVar1[1];
        goto LAB_144f6125e;
      }
    }
    lVar4 = param_1[2];
    uVar8 = ((longlong)puVar1 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
    iVar9 = *(int *)(lVar4 + 4 + uVar8 * 8);
    puVar1 = (uint *)(lVar4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144f61290 FUN_144f61290 body=281 status=ok
// SIG undefined FUN_144f61290(void)

ulonglong FUN_144f61290(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar8 * 0x18;
  puVar5 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
      }
      puVar6 = puVar6 + 6;
      puVar7 = puVar7 + 6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x18 + 0x18;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar8 = local_res8 + uVar8 * -0x18;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar8;
      uVar10 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar9 = uVar9 + uVar8 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar10 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar10;
}



// FUNCTION 144f613b0 FUN_144f613b0 body=235 status=ok
// SIG undefined FUN_144f613b0(void)

void FUN_144f613b0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144f614a0 FUN_144f614a0 body=235 status=ok
// SIG undefined FUN_144f614a0(void)

void FUN_144f614a0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144f61590 FUN_144f61590 body=235 status=ok
// SIG undefined FUN_144f61590(void)

void FUN_144f61590(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144f61680 FUN_144f61680 body=235 status=ok
// SIG undefined FUN_144f61680(void)

void FUN_144f61680(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144f61770 FUN_144f61770 body=258 status=ok
// SIG undefined FUN_144f61770(void)

void FUN_144f61770(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar7 * 0x10;
  puVar4 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144f61880 FUN_144f61880 body=159 status=ok
// SIG undefined FUN_144f61880(void)

void FUN_144f61880(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144f61920 FUN_144f61920 body=36 status=ok
// SIG undefined FUN_144f61920(void)

undefined8 FUN_144f61920(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *param_2;
  FUN_144f50bb0(param_1,local_res8);
  return param_1;
}



// FUNCTION 144f61950 FUN_144f61950 body=32 status=ok
// SIG undefined FUN_144f61950(void)

undefined8 FUN_144f61950(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144f61970 FUN_144f61970 body=266 status=ok
// SIG undefined FUN_144f61970(void)

void FUN_144f61970(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144f61a80 FUN_144f61a80 body=247 status=ok
// SIG undefined FUN_144f61a80(void)

void FUN_144f61a80(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144f61b80 FUN_144f61b80 body=32 status=ok
// SIG undefined FUN_144f61b80(void)

undefined8 FUN_144f61b80(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144f61ba0 FUN_144f61ba0 body=32 status=ok
// SIG undefined FUN_144f61ba0(void)

undefined8 FUN_144f61ba0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144f61bc0 FUN_144f61bc0 body=32 status=ok
// SIG undefined FUN_144f61bc0(void)

undefined8 FUN_144f61bc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144f61be0 FUN_144f61be0 body=274 status=ok
// SIG undefined FUN_144f61be0(void)

void FUN_144f61be0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x20,&local_res8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        uVar4 = *(undefined8 *)(puVar7 + 6);
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
        *(undefined8 *)(puVar6 + 6) = uVar4;
      }
      puVar6 = puVar6 + 8;
      puVar7 = puVar7 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x20 + 0x20;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 << 5);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 144f61d00 FUN_144f61d00 body=266 status=ok
// SIG undefined FUN_144f61d00(void)

void FUN_144f61d00(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144f61e10 FUN_144f61e10 body=127 status=ok
// SIG undefined FUN_144f61e10(void)

ulonglong FUN_144f61e10(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (0 < (int)uVar1) {
    lVar2 = *param_2;
    iVar4 = (int)((ulonglong)lVar2 >> 0x20);
    uVar5 = iVar4 * -0x61c8864f;
    uVar6 = (int)lVar2 * -0x61c8864f;
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar4 * -0x4f000000;
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
            (int)lVar2 * -0x4f000000;
    uVar5 = (uVar5 * 0x40 + uVar6 + (uVar6 >> 2) + 0x9e3779b9 ^ uVar5) & uVar1;
    lVar3 = *(longlong *)(*param_1 + (ulonglong)uVar5 * 0x10);
    while (lVar3 != -1) {
      if (lVar3 == lVar2) {
        return (ulonglong)uVar5;
      }
      uVar5 = uVar5 + 1 & uVar1;
      lVar3 = *(longlong *)(*param_1 + (ulonglong)uVar5 * 0x10);
    }
  }
  return (longlong)(int)(uVar1 + 1);
}



// FUNCTION 144f61e90 FUN_144f61e90 body=104 status=ok
// SIG undefined FUN_144f61e90(void)

undefined4 *
FUN_144f61e90(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_144f61e10(param_1,param_3);
  if (iVar2 <= *(int *)((longlong)param_1 + 0xc)) {
    lVar1 = *param_1;
    *param_2 = 0;
    *param_4 = *(undefined8 *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f61f00 FUN_144f61f00 body=377 status=ok
// SIG undefined FUN_144f61f00(void)

undefined4 * FUN_144f61f00(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = FUN_144f61e10(param_1,param_3);
  if (*(int *)((longlong)param_1 + 0xc) < (int)uVar3) {
    *param_2 = 0x80040200;
    return param_2;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *(undefined8 *)(*param_1 + (ulonglong)uVar3 * 0x10) = 0xffffffffffffffff;
  uVar11 = *(uint *)((longlong)param_1 + 0xc);
  lVar1 = *param_1;
  uVar6 = uVar11 + uVar3 & uVar11;
  lVar2 = *(longlong *)(lVar1 + (ulonglong)uVar6 * 0x10);
  while (lVar2 != -1) {
    uVar6 = uVar6 + uVar11 & uVar11;
    lVar2 = *(longlong *)(lVar1 + (ulonglong)uVar6 * 0x10);
  }
  uVar8 = uVar3 + 1 & uVar11;
  uVar6 = uVar6 + 1 & uVar11;
  lVar9 = (ulonglong)uVar8 * 0x10;
  lVar2 = *(longlong *)(lVar1 + lVar9);
  while (lVar2 != -1) {
    iVar4 = (int)*(undefined8 *)(lVar9 + lVar1);
    uVar10 = iVar4 * -0x61c8864f;
    iVar5 = (int)((ulonglong)*(undefined8 *)(lVar9 + lVar1) >> 0x20);
    uVar7 = iVar5 * -0x61c8864f;
    uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
             iVar4 * -0x4f000000;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar5 * -0x4f000000;
    uVar11 = (uVar10 + 0x9e3779b9 + uVar7 * 0x40 + (uVar10 >> 2) ^ uVar7) & uVar11;
    if ((((uVar8 < uVar6) || (uVar11 <= uVar3)) &&
        ((uVar3 <= uVar8 || ((uVar11 <= uVar3 && (uVar8 < uVar11)))))) &&
       ((uVar11 <= uVar3 || (uVar6 <= uVar11)))) {
      FUN_144b3d470((ulonglong)uVar3 * 0x10 + lVar1,lVar9 + lVar1,0x10);
      *(undefined8 *)(lVar9 + *param_1) = 0xffffffffffffffff;
      uVar3 = uVar8;
    }
    uVar11 = *(uint *)((longlong)param_1 + 0xc);
    lVar1 = *param_1;
    uVar8 = uVar8 + 1 & uVar11;
    lVar9 = (ulonglong)uVar8 * 0x10;
    lVar2 = *(longlong *)(lVar1 + lVar9);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f62080 FUN_144f62080 body=132 status=ok
// SIG undefined FUN_144f62080(void)

undefined8 * FUN_144f62080(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_res8;
  
  FUN_144bdf130();
  param_1[3] = param_2;
  *param_1 = hkBufferedStreamWriter::vftable;
  *(undefined1 *)(param_1 + 7) = 1;
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  iVar1 = 0x10000;
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  local_res8 = (longlong)iVar1;
  uVar2 = (*DAT_14c787670)(0,&local_res8,0x40);
  param_1[4] = uVar2;
  param_1[6] = (longlong)iVar1;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 144f62110 FUN_144f62110 body=119 status=ok
// SIG undefined FUN_144f62110(void)

undefined8 * FUN_144f62110(undefined8 *param_1,undefined8 param_2,int param_3,char param_4)

{
  int iVar1;
  
  FUN_144bdf130();
  param_1[4] = param_2;
  *param_1 = hkBufferedStreamWriter::vftable;
  param_1[3] = 0;
  param_1[5] = 0;
  iVar1 = param_3 + -1;
  if (param_4 == '\0') {
    iVar1 = param_3;
  }
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[6] = (longlong)iVar1;
  if (param_4 != '\0') {
    FUN_144bfbef0(param_2,0,(longlong)param_3);
  }
  return param_1;
}



// FUNCTION 144f62190 FUN_144f62190 body=238 status=ok
// SIG undefined FUN_144f62190(void)

ulonglong FUN_144f62190(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = *(longlong *)(param_1 + 0x30) - lVar1;
  uVar3 = param_3;
  if (uVar2 < param_3) {
    uVar5 = 0;
    do {
      FUN_144bfbed0(lVar1 + *(longlong *)(param_1 + 0x20),param_2,uVar2);
      param_2 = param_2 + uVar2;
      uVar4 = *(longlong *)(param_1 + 0x28) + uVar2;
      uVar3 = uVar3 - uVar2;
      *(ulonglong *)(param_1 + 0x28) = uVar4;
      uVar2 = uVar5;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        if (uVar4 != 0) {
          do {
            lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                              (*(longlong **)(param_1 + 0x18),*(longlong *)(param_1 + 0x20) + uVar2,
                               uVar4 - uVar2);
            uVar2 = uVar2 + lVar1;
            if (lVar1 == 0) goto LAB_144f6222e;
          } while (uVar2 < uVar4);
        }
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
LAB_144f6222e:
      if ((longlong)(int)uVar2 != uVar4) {
        return param_3 - uVar3;
      }
      lVar1 = *(longlong *)(param_1 + 0x28);
      uVar2 = *(longlong *)(param_1 + 0x30) - lVar1;
    } while (uVar2 < uVar3);
  }
  FUN_144bfbed0(lVar1 + *(longlong *)(param_1 + 0x20),param_2,uVar3);
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + uVar3;
  return param_3;
}



// FUNCTION 144f62280 FUN_144f62280 body=41 status=ok
// SIG undefined FUN_144f62280(void)

void FUN_144f62280(longlong param_1)

{
  FUN_144f62440();
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f6229f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
    return;
  }
  return;
}



// FUNCTION 144f622b0 FUN_144f622b0 body=68 status=ok
// SIG undefined FUN_144f622b0(void)

undefined1 * FUN_144f622b0(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined1 *)(**(code **)(*plVar1 + 0x18))(plVar1,local_res8);
    *param_2 = *puVar2;
    return param_2;
  }
  *param_2 = *(longlong *)(param_1 + 0x28) != *(longlong *)(param_1 + 0x30);
  return param_2;
}



// FUNCTION 144f62300 FUN_144f62300 body=55 status=ok
// SIG undefined FUN_144f62300(void)

undefined1 * FUN_144f62300(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined1 *)(**(code **)(*plVar1 + 0x30))(plVar1,local_res8);
    *param_2 = *puVar2;
    return param_2;
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 144f62340 FUN_144f62340 body=170 status=ok
// SIG undefined FUN_144f62340(void)

undefined4 * FUN_144f62340(longlong param_1,undefined4 *param_2,ulonglong param_3,int param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_144f62440();
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
              (*(longlong **)(param_1 + 0x18),param_2,param_3,param_4);
    return param_2;
  }
  uVar2 = param_3;
  if (param_4 != 0) {
    if (param_4 == 1) {
      uVar2 = *(longlong *)(param_1 + 0x28) + param_3;
    }
    else {
      uVar2 = 0xffffffffffffffff;
      if (param_4 == 2) {
        uVar2 = *(longlong *)(param_1 + 0x28) - param_3;
      }
    }
  }
  if ((longlong)uVar2 < 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = 0;
    if (((longlong)uVar2 < 1) || (uVar3 = *(ulonglong *)(param_1 + 0x30), uVar1 = 0, uVar2 <= uVar3)
       ) goto LAB_144f623ca;
  }
  uVar2 = uVar3;
  uVar1 = 0x80040200;
LAB_144f623ca:
  *(ulonglong *)(param_1 + 0x28) = uVar2;
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 144f623f0 FUN_144f623f0 body=60 status=ok
// SIG undefined FUN_144f623f0(void)

longlong FUN_144f623f0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
    if (lVar1 < 0) {
      return -1;
    }
  }
  return *(longlong *)(param_1 + 0x28) + lVar1;
}



// FUNCTION 144f62430 FUN_144f62430 body=7 status=ok
// SIG undefined FUN_144f62430(void)

undefined1 * FUN_144f62430(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  return param_2;
}



// FUNCTION 144f62440 FUN_144f62440 body=119 status=ok
// SIG undefined FUN_144f62440(void)

ulonglong FUN_144f62440(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return 0;
  }
  uVar3 = 0;
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (uVar1 != 0) {
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                        (*(longlong **)(param_1 + 0x18),*(longlong *)(param_1 + 0x20) + uVar3,
                         uVar1 - uVar3);
      uVar3 = uVar3 + lVar2;
      if (lVar2 == 0) goto LAB_144f6249d;
    } while (uVar3 < uVar1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
LAB_144f6249d:
  return uVar3 & 0xffffffff;
}



// FUNCTION 144f624c0 FUN_144f624c0 body=140 status=ok
// SIG undefined FUN_144f624c0(void)

undefined8 * FUN_144f624c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkBufferedStreamWriter::vftable;
  FUN_144f62440();
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  if (*(char *)(param_1 + 7) != '\0') {
    (*DAT_14c787678)(0,param_1[4],0);
  }
  FUN_144bdf150(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144f62550 FUN_144f62550 body=194 status=ok
// SIG undefined FUN_144f62550(void)

void FUN_144f62550(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined8 local_28;
  code *local_20;
  int *local_18;
  
  FUN_144bdff00();
  local_res18[0] = *param_1;
  piVar1 = &DAT_14c727380;
  iVar2 = 0;
  do {
    if (*piVar1 == local_res18[0]) {
      FUN_144be0720(param_2,(&PTR_s_HK_SUCCESS_14c727388)[(longlong)iVar2 * 3],0xffffffff);
      return;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 6;
  } while ((longlong)piVar1 < 0x14c7274e8);
  local_28 = 1;
  local_20 = FUN_144f50a00;
  pcVar3 = "HK_E_{:X8}";
  local_18 = local_res18;
  if (-1 < local_res18[0]) {
    pcVar3 = "HK_SUCCESS_{:X8}";
  }
  FUN_144be1a50(param_2,local_res20,pcVar3,&local_28,0);
  return;
}



// FUNCTION 144f62620 FUN_144f62620 body=101 status=ok
// SIG undefined FUN_144f62620(void)

void FUN_144f62620(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  lVar1 = param_1[1];
  uVar4 = *param_1;
  if (lVar1 != 0) {
    cVar3 = FUN_144b45dd0(lVar1,&DAT_14c6e1290);
    if (cVar3 != '\0') {
      puVar2 = (uint *)FUN_144b45d50(lVar1,local_res8);
      if ((*puVar2 >> 3 & 1) == 0) goto LAB_144f6266a;
    }
  }
  uVar4 = 0;
LAB_144f6266a:
  FUN_144f62550(uVar4,param_2);
  return;
}



// FUNCTION 144f62690 FUN_144f62690 body=32 status=ok
// SIG undefined FUN_144f62690(void)

undefined4 *
FUN_144f62690(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_144f62550(param_1,param_4);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f626b0 FUN_144f626b0 body=67 status=ok
// SIG undefined FUN_144f626b0(void)

uint FUN_144f626b0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar2 = uVar2 >> 8 ^
            *(uint *)(&DAT_14c7274f0 + (((ulonglong)bVar1 ^ (ulonglong)uVar2) & 0xff) * 4);
    bVar1 = *param_1;
  }
  return ~uVar2;
}



// FUNCTION 144f62700 FUN_144f62700 body=66 status=ok
// SIG undefined FUN_144f62700(void)

uint FUN_144f62700(uint param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  
  param_1 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 >> 8 ^
              *(uint *)(&DAT_14c7274f0 + (((ulonglong)bVar1 ^ (ulonglong)param_1) & 0xff) * 4);
  }
  return ~param_1;
}



// FUNCTION 144f62750 FUN_144f62750 body=209 status=ok
// SIG undefined FUN_144f62750(void)

void FUN_144f62750(ulonglong param_1,longlong param_2,int param_3,uint *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  
  *param_4 = *param_4 + 0x3fde80f;
  uVar2 = param_1;
  if (*param_4 < 0x3fde80f) {
    FUN_144be90e0(0x8a9331c2);
  }
  while (uVar1 = uVar2 + 0x8ad1, uVar1 <= (longlong)param_3 + param_1) {
    FUN_144bfbed0(uVar2,param_2,0x8ad1);
    *param_4 = *param_4 + 0x3fff96e6;
    param_2 = param_2 + 0x8ad1;
    uVar2 = uVar1;
    if (*param_4 < 0x3fff96e6) {
      FUN_144be90e0(0x8a9331c2);
    }
  }
  iVar4 = (int)((longlong)param_3 + param_1) - (int)uVar2;
  FUN_144bfbed0(uVar2,param_2,iVar4);
  uVar3 = iVar4 * 0x7606;
  *param_4 = *param_4 + uVar3;
  if (*param_4 < uVar3) {
    FUN_144be90e0(0x8a9331c2);
  }
  return;
}



// FUNCTION 144f62830 FUN_144f62830 body=73 status=ok
// SIG undefined FUN_144f62830(void)

undefined8 * FUN_144f62830(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8 + param_3 * 8);
  *param_2 = *(undefined8 *)(param_1 + 0x10 + param_3 * 8);
  param_2[1] = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144befdb0();
  }
  param_2[2] = uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144f62880 FUN_144f62880 body=37 status=ok
// SIG undefined FUN_144f62880(void)

void FUN_144f62880(longlong param_1,ulonglong param_2,longlong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    param_3 = param_3 + -8;
    do {
      puVar1 = (undefined8 *)(param_3 + 8);
      param_3 = param_3 + 8;
      *(undefined8 *)(param_1 + uVar2 * 8) = *puVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return;
}



// FUNCTION 144f628b0 FUN_144f628b0 body=304 status=ok
// SIG undefined FUN_144f628b0(void)

longlong * FUN_144f628b0(longlong *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  ushort *puVar5;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000100;
  lVar3 = 0;
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_2 == (ushort *)0x0) {
LAB_144f629bc:
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    uVar2 = *param_2;
    puVar5 = param_2;
    while (uVar2 != 0) {
      if (uVar2 < 0x80) {
        lVar3 = lVar3 + 1;
      }
      else if (uVar2 < 0x800) {
        lVar3 = lVar3 + 2;
      }
      else if ((ushort)(uVar2 + 0x2800) < 0x800) {
        if ((0xdbff < uVar2) ||
           (puVar1 = puVar5 + 1, puVar5 = puVar5 + 1, 0x3ff < (ushort)(*puVar1 + 0x2400)))
        goto LAB_144f629bc;
        lVar3 = lVar3 + 4;
      }
      else {
        lVar3 = lVar3 + 3;
      }
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + 1;
      uVar2 = *puVar1;
    }
    iVar4 = (int)lVar3 + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar4) {
      FUN_144be3270(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar4);
    }
    if (((int)param_1[1] < iVar4) || (iVar4 < (int)param_1[1])) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144f62df0(*param_1,param_2,(longlong)puVar5 - (longlong)param_2 >> 1);
    *(undefined1 *)(lVar3 + *param_1) = 0;
  }
  return param_1;
}



// FUNCTION 144f629e0 FUN_144f629e0 body=318 status=ok
// SIG undefined FUN_144f629e0(void)

longlong * FUN_144f629e0(longlong *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  ushort *puVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000100;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (longlong)(param_1 + 2);
  if ((param_2 == (ushort *)0x0) || (param_3 == 0)) {
LAB_144f62afa:
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    for (puVar3 = param_2; puVar3 < param_2 + param_3; puVar3 = puVar3 + 1) {
      uVar1 = *puVar3;
      if (uVar1 < 0x80) {
        lVar2 = 1;
      }
      else if (uVar1 < 0x800) {
        lVar2 = 2;
      }
      else if ((ushort)(uVar1 + 0x2800) < 0x800) {
        if (((0xdbff < uVar1) || (puVar3 = puVar3 + 1, param_2 + param_3 <= puVar3)) ||
           (0x3ff < (ushort)(*puVar3 + 0x2400))) goto LAB_144f62afa;
        lVar2 = 4;
      }
      else {
        lVar2 = 3;
      }
      lVar4 = lVar4 + lVar2;
    }
    iVar5 = (int)lVar4 + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar5) {
      FUN_144be3270(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar5);
    }
    if (((int)param_1[1] < iVar5) || (iVar5 < (int)param_1[1])) {
      *(int *)(param_1 + 1) = iVar5;
    }
    FUN_144f62df0(*param_1,param_2,param_3);
    *(undefined1 *)(lVar4 + *param_1) = 0;
  }
  return param_1;
}



// FUNCTION 144f62b20 FUN_144f62b20 body=171 status=ok
// SIG undefined FUN_144f62b20(void)

longlong * FUN_144f62b20(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  char local_38 [8];
  undefined8 local_30;
  longlong local_28;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000100;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar1 = param_1 + 2;
  *param_1 = (longlong)plVar1;
  if (param_2 != 0) {
    FUN_144f631c0(local_38);
    if (local_38[0] != '\0') {
      iVar2 = (int)local_28 + 1;
      if (0x100 < iVar2) {
        FUN_144f63340(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar2);
        plVar1 = (longlong *)*param_1;
      }
      if (((int)param_1[1] < iVar2) || (iVar2 < (int)param_1[1])) {
        *(int *)(param_1 + 1) = iVar2;
      }
      FUN_144f62f70(plVar1,param_2,local_30);
      *(undefined2 *)(*param_1 + local_28 * 2) = 0;
    }
  }
  return param_1;
}



// FUNCTION 144f62bd0 FUN_144f62bd0 body=384 status=ok
// SIG undefined FUN_144f62bd0(void)

longlong * FUN_144f62bd0(longlong *param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  byte *pbVar6;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000100;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (longlong)(param_1 + 2);
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
LAB_144f62d2b:
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    lVar4 = 0;
    for (pbVar6 = param_2; pbVar6 < param_2 + param_3; pbVar6 = pbVar6 + uVar3) {
      bVar1 = *pbVar6;
      uVar3 = (ulonglong)(byte)(&DAT_149c0f000)[bVar1 >> 3];
      if (param_2 + param_3 < pbVar6 + uVar3) goto LAB_144f62d2b;
      if (uVar3 < 2) {
        uVar2 = 1;
        if (1 < uVar3) goto LAB_144f62cb1;
      }
      else {
        if ((((byte)(bVar1 + 0x40) < 2) || ((bVar1 == 0xe0 && ((pbVar6[1] & 0xe0) == 0x80)))) ||
           ((bVar1 == 0xf0 && ((pbVar6[1] & 0xf0) == 0x80)))) goto LAB_144f62d2b;
        uVar2 = 1;
LAB_144f62cb1:
        do {
          if ((pbVar6[uVar2] & 0xc0) != 0x80) goto LAB_144f62d2b;
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
      }
      if (uVar3 == 0) goto LAB_144f62d2b;
      lVar4 = lVar4 + *(longlong *)(&DAT_149c0f018 + uVar3 * 8);
    }
    iVar5 = (int)lVar4 + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar5) {
      FUN_144f63340(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar5);
    }
    if (((int)param_1[1] < iVar5) || (iVar5 < (int)param_1[1])) {
      *(int *)(param_1 + 1) = iVar5;
    }
    FUN_144f62f70(*param_1,param_2,param_3);
    *(undefined2 *)(*param_1 + lVar4 * 2) = 0;
  }
  return param_1;
}



// FUNCTION 144f62d50 FUN_144f62d50 body=33 status=ok
// SIG undefined FUN_144f62d50(void)

undefined8 FUN_144f62d50(undefined8 param_1,undefined8 *param_2)

{
  FUN_144f62bd0(param_1,*param_2,(longlong)*(int *)(param_2 + 1) + -1);
  return param_1;
}



// FUNCTION 144f62d80 FUN_144f62d80 body=103 status=ok
// SIG undefined FUN_144f62d80(void)

void FUN_144f62d80(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*param_1,*(int *)((longlong)param_1 + 0xc) * 2);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 144f62df0 FUN_144f62df0 body=379 status=ok
// SIG undefined FUN_144f62df0(void)

longlong FUN_144f62df0(byte *param_1,ushort *param_2,longlong param_3)

{
  ushort *puVar1;
  ushort uVar2;
  byte *pbVar3;
  ushort uVar4;
  ushort *puVar5;
  uint uVar6;
  
  if (((param_1 == (byte *)0x0) || (param_2 == (ushort *)0x0)) || (param_3 == 0)) {
    return 0;
  }
  puVar1 = param_2 + param_3;
  pbVar3 = param_1;
  while (puVar5 = param_2, param_2 < puVar1) {
    do {
      if (0x7f < *puVar5) break;
      puVar5 = puVar5 + 1;
    } while (puVar5 < puVar1);
    if (param_2 < puVar5) {
      do {
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        *pbVar3 = (byte)uVar4;
        pbVar3 = pbVar3 + 1;
      } while (param_2 < puVar5);
      if (puVar1 <= param_2) break;
    }
    uVar4 = *param_2;
    puVar5 = param_2;
    do {
      param_2 = puVar5 + 1;
      if (uVar4 < 0x800) {
        *pbVar3 = (byte)(uVar4 >> 6) | 0xc0;
        pbVar3[1] = (byte)uVar4 & 0x3f | 0x80;
        pbVar3 = pbVar3 + 2;
      }
      else if ((ushort)(uVar4 + 0x2800) < 0x800) {
        uVar2 = *param_2;
        param_2 = puVar5 + 2;
        uVar6 = uVar2 + 0xfca02400 + (uint)uVar4 * 0x400;
        *pbVar3 = (byte)(uVar6 >> 0x12) | 0xf0;
        pbVar3[1] = (byte)(uVar6 >> 0xc) & 0x3f | 0x80;
        pbVar3[3] = (byte)uVar6 & 0x3f | 0x80;
        pbVar3[2] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
        pbVar3 = pbVar3 + 4;
      }
      else {
        *pbVar3 = (byte)(uVar4 >> 0xc) | 0xe0;
        pbVar3[2] = (byte)uVar4 & 0x3f | 0x80;
        pbVar3[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
        pbVar3 = pbVar3 + 3;
      }
      if (puVar1 <= param_2) goto LAB_144f62f53;
      uVar4 = *param_2;
      puVar5 = param_2;
    } while (0x7f < uVar4);
  }
LAB_144f62f53:
  return (longlong)pbVar3 - (longlong)param_1;
}



// FUNCTION 144f62f70 FUN_144f62f70 body=578 status=ok
// SIG undefined FUN_144f62f70(void)

longlong FUN_144f62f70(undefined1 (*param_1) [16],ulonglong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar5;
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  ulonglong *puVar46;
  ulonglong uVar47;
  uint uVar48;
  ulonglong uVar49;
  undefined1 (*pauVar50) [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  byte bVar4;
  
  if (((param_1 == (undefined1 (*) [16])0x0) || (param_2 == (ulonglong *)0x0)) || (param_3 == 0)) {
    return 0;
  }
  puVar1 = (ulonglong *)((longlong)param_2 + param_3);
  pauVar50 = param_1;
  puVar46 = param_2;
  while( true ) {
    for (; (param_2 < puVar1 && ((byte)*param_2 < 0x80));
        param_2 = (ulonglong *)((longlong)param_2 + 1)) {
    }
    uVar47 = (longlong)param_2 - (longlong)puVar46;
    if (param_2 < puVar46) {
      uVar47 = 0;
    }
    if (((uVar47 != 0) && (0x1f < uVar47)) &&
       (((undefined1 (*) [16])((longlong)puVar46 + (uVar47 - 1)) < pauVar50 ||
        (pauVar50[-1] + uVar47 * 2 + 0xe < puVar46)))) {
      uVar49 = 0;
      do {
        uVar2 = *puVar46;
        auVar6._8_6_ = 0;
        auVar6._0_8_ = uVar2;
        auVar6[0xe] = (char)(uVar2 >> 0x38);
        auVar10._8_4_ = 0;
        auVar10._0_8_ = uVar2;
        auVar10[0xc] = (char)(uVar2 >> 0x30);
        auVar10._13_2_ = auVar6._13_2_;
        auVar14._8_4_ = 0;
        auVar14._0_8_ = uVar2;
        auVar14._12_3_ = auVar10._12_3_;
        auVar18._8_2_ = 0;
        auVar18._0_8_ = uVar2;
        auVar18[10] = (char)(uVar2 >> 0x28);
        auVar18._11_4_ = auVar14._11_4_;
        auVar22._8_2_ = 0;
        auVar22._0_8_ = uVar2;
        auVar22._10_5_ = auVar18._10_5_;
        auVar26[8] = (char)(uVar2 >> 0x20);
        auVar26._0_8_ = uVar2;
        auVar26._9_6_ = auVar22._9_6_;
        auVar34._7_8_ = 0;
        auVar34._0_7_ = auVar26._8_7_;
        auVar38._1_8_ = SUB158(auVar34 << 0x40,7);
        auVar38[0] = (char)(uVar2 >> 0x18);
        auVar38._9_6_ = 0;
        auVar39._1_10_ = SUB1510(auVar38 << 0x30,5);
        auVar39[0] = (char)(uVar2 >> 0x10);
        auVar39._11_4_ = 0;
        auVar30[2] = (char)(uVar2 >> 8);
        auVar30._0_2_ = (ushort)uVar2;
        auVar30._3_12_ = SUB1512(auVar39 << 0x20,3);
        auVar51._0_2_ = (ushort)uVar2 & 0xff;
        auVar51._2_13_ = auVar30._2_13_;
        auVar51[0xf] = 0;
        uVar49 = uVar49 + 0x20;
        *pauVar50 = auVar51;
        uVar2 = puVar46[1];
        auVar7._8_6_ = 0;
        auVar7._0_8_ = uVar2;
        auVar7[0xe] = (char)(uVar2 >> 0x38);
        auVar11._8_4_ = 0;
        auVar11._0_8_ = uVar2;
        auVar11[0xc] = (char)(uVar2 >> 0x30);
        auVar11._13_2_ = auVar7._13_2_;
        auVar15._8_4_ = 0;
        auVar15._0_8_ = uVar2;
        auVar15._12_3_ = auVar11._12_3_;
        auVar19._8_2_ = 0;
        auVar19._0_8_ = uVar2;
        auVar19[10] = (char)(uVar2 >> 0x28);
        auVar19._11_4_ = auVar15._11_4_;
        auVar23._8_2_ = 0;
        auVar23._0_8_ = uVar2;
        auVar23._10_5_ = auVar19._10_5_;
        auVar27[8] = (char)(uVar2 >> 0x20);
        auVar27._0_8_ = uVar2;
        auVar27._9_6_ = auVar23._9_6_;
        auVar35._7_8_ = 0;
        auVar35._0_7_ = auVar27._8_7_;
        auVar40._1_8_ = SUB158(auVar35 << 0x40,7);
        auVar40[0] = (char)(uVar2 >> 0x18);
        auVar40._9_6_ = 0;
        auVar41._1_10_ = SUB1510(auVar40 << 0x30,5);
        auVar41[0] = (char)(uVar2 >> 0x10);
        auVar41._11_4_ = 0;
        auVar31[2] = (char)(uVar2 >> 8);
        auVar31._0_2_ = (ushort)uVar2;
        auVar31._3_12_ = SUB1512(auVar41 << 0x20,3);
        auVar52._0_2_ = (ushort)uVar2 & 0xff;
        auVar52._2_13_ = auVar31._2_13_;
        auVar52[0xf] = 0;
        pauVar50[1] = auVar52;
        uVar2 = puVar46[2];
        auVar8._8_6_ = 0;
        auVar8._0_8_ = uVar2;
        auVar8[0xe] = (char)(uVar2 >> 0x38);
        auVar12._8_4_ = 0;
        auVar12._0_8_ = uVar2;
        auVar12[0xc] = (char)(uVar2 >> 0x30);
        auVar12._13_2_ = auVar8._13_2_;
        auVar16._8_4_ = 0;
        auVar16._0_8_ = uVar2;
        auVar16._12_3_ = auVar12._12_3_;
        auVar20._8_2_ = 0;
        auVar20._0_8_ = uVar2;
        auVar20[10] = (char)(uVar2 >> 0x28);
        auVar20._11_4_ = auVar16._11_4_;
        auVar24._8_2_ = 0;
        auVar24._0_8_ = uVar2;
        auVar24._10_5_ = auVar20._10_5_;
        auVar28[8] = (char)(uVar2 >> 0x20);
        auVar28._0_8_ = uVar2;
        auVar28._9_6_ = auVar24._9_6_;
        auVar36._7_8_ = 0;
        auVar36._0_7_ = auVar28._8_7_;
        auVar42._1_8_ = SUB158(auVar36 << 0x40,7);
        auVar42[0] = (char)(uVar2 >> 0x18);
        auVar42._9_6_ = 0;
        auVar43._1_10_ = SUB1510(auVar42 << 0x30,5);
        auVar43[0] = (char)(uVar2 >> 0x10);
        auVar43._11_4_ = 0;
        auVar32[2] = (char)(uVar2 >> 8);
        auVar32._0_2_ = (ushort)uVar2;
        auVar32._3_12_ = SUB1512(auVar43 << 0x20,3);
        auVar53._0_2_ = (ushort)uVar2 & 0xff;
        auVar53._2_13_ = auVar32._2_13_;
        auVar53[0xf] = 0;
        pauVar50[2] = auVar53;
        uVar2 = puVar46[3];
        puVar46 = puVar46 + 4;
        auVar9._8_6_ = 0;
        auVar9._0_8_ = uVar2;
        auVar9[0xe] = (char)(uVar2 >> 0x38);
        auVar13._8_4_ = 0;
        auVar13._0_8_ = uVar2;
        auVar13[0xc] = (char)(uVar2 >> 0x30);
        auVar13._13_2_ = auVar9._13_2_;
        auVar17._8_4_ = 0;
        auVar17._0_8_ = uVar2;
        auVar17._12_3_ = auVar13._12_3_;
        auVar21._8_2_ = 0;
        auVar21._0_8_ = uVar2;
        auVar21[10] = (char)(uVar2 >> 0x28);
        auVar21._11_4_ = auVar17._11_4_;
        auVar25._8_2_ = 0;
        auVar25._0_8_ = uVar2;
        auVar25._10_5_ = auVar21._10_5_;
        auVar29[8] = (char)(uVar2 >> 0x20);
        auVar29._0_8_ = uVar2;
        auVar29._9_6_ = auVar25._9_6_;
        auVar37._7_8_ = 0;
        auVar37._0_7_ = auVar29._8_7_;
        auVar44._1_8_ = SUB158(auVar37 << 0x40,7);
        auVar44[0] = (char)(uVar2 >> 0x18);
        auVar44._9_6_ = 0;
        auVar45._1_10_ = SUB1510(auVar44 << 0x30,5);
        auVar45[0] = (char)(uVar2 >> 0x10);
        auVar45._11_4_ = 0;
        auVar33[2] = (char)(uVar2 >> 8);
        auVar33._0_2_ = (ushort)uVar2;
        auVar33._3_12_ = SUB1512(auVar45 << 0x20,3);
        auVar54._0_2_ = (ushort)uVar2 & 0xff;
        auVar54._2_13_ = auVar33._2_13_;
        auVar54[0xf] = 0;
        pauVar50[3] = auVar54;
        pauVar50 = pauVar50 + 4;
      } while (uVar49 < (uVar47 & 0xffffffffffffffe0));
    }
    for (; puVar46 < param_2; puVar46 = (ulonglong *)((longlong)puVar46 + 1)) {
      *(ushort *)*pauVar50 = (ushort)(byte)*puVar46;
      pauVar50 = (undefined1 (*) [16])(*pauVar50 + 2);
    }
    if (puVar1 <= puVar46) break;
    bVar4 = (byte)*puVar46;
    do {
      bVar3 = *(byte *)((longlong)puVar46 + 1);
      param_2 = (ulonglong *)((longlong)puVar46 + 2);
      if (bVar4 < 0xe0) {
        *(ushort *)*pauVar50 = (ushort)(bVar4 & 0x1f) << 6 | (ushort)(bVar3 & 0x3f);
        pauVar50 = (undefined1 (*) [16])(*pauVar50 + 2);
      }
      else if (bVar4 < 0xf0) {
        bVar5 = *(byte *)param_2;
        param_2 = (ulonglong *)((longlong)puVar46 + 3);
        *(ushort *)*pauVar50 =
             ((ushort)(bVar3 & 0x3f) | (ushort)bVar4 << 6) << 6 | (ushort)(bVar5 & 0x3f);
        pauVar50 = (undefined1 (*) [16])(*pauVar50 + 2);
      }
      else {
        bVar5 = *(byte *)param_2;
        param_2 = (ulonglong *)((longlong)puVar46 + 4);
        uVar48 = ((((bVar4 & 7) << 6 | bVar3 & 0x3f) << 6 | bVar5 & 0x3f) << 6 |
                 *(byte *)((longlong)puVar46 + 3) & 0x3f) - 0x10000;
        *(short *)*pauVar50 = (short)(uVar48 >> 10) + -0x2800;
        *(ushort *)(*pauVar50 + 2) = ((ushort)uVar48 & 0x3ff) + 0xdc00;
        pauVar50 = (undefined1 (*) [16])(*pauVar50 + 4);
      }
      if (puVar1 <= param_2) goto LAB_144f6317f;
      bVar4 = (byte)*param_2;
      puVar46 = param_2;
    } while (0x7f < bVar4);
  }
LAB_144f6317f:
  return (longlong)pauVar50 - (longlong)param_1 >> 1;
}



// FUNCTION 144f631c0 FUN_144f631c0 body=378 status=ok
// SIG undefined FUN_144f631c0(void)

undefined1 * FUN_144f631c0(undefined1 *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  longlong lVar4;
  
  if (param_2 == (byte *)0x0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    return param_1;
  }
  bVar1 = *param_2;
  lVar4 = 0;
  pbVar3 = param_2;
  do {
    if (bVar1 == 0) {
      *param_1 = 1;
      *(longlong *)(param_1 + 8) = (longlong)pbVar3 - (longlong)param_2;
      *(longlong *)(param_1 + 0x10) = lVar4;
      return param_1;
    }
    if (bVar1 < 0x80) {
      lVar4 = lVar4 + 1;
      pbVar2 = pbVar3;
    }
    else {
      if (bVar1 < 0xc2) {
LAB_144f63327:
        *param_1 = 0;
        *(longlong *)(param_1 + 8) = (longlong)pbVar3 - (longlong)param_2;
        *(longlong *)(param_1 + 0x10) = lVar4;
        return param_1;
      }
      if (bVar1 < 0xe0) {
        pbVar2 = pbVar3 + 1;
        if ((pbVar3[1] & 0xc0) != 0x80) {
LAB_144f632e3:
          *param_1 = 0;
          *(longlong *)(param_1 + 0x10) = lVar4;
          *(longlong *)(param_1 + 8) = (longlong)pbVar3 - (longlong)param_2;
          return param_1;
        }
        lVar4 = lVar4 + 1;
      }
      else if (bVar1 < 0xf0) {
        if (((pbVar3[1] & 0xc0) != 0x80) || ((bVar1 == 0xe0 && ((pbVar3[1] & 0xe0) == 0x80))))
        goto LAB_144f632e3;
        pbVar2 = pbVar3 + 2;
        if ((pbVar3[2] & 0xc0) != 0x80) {
LAB_144f632f9:
          *param_1 = 0;
          *(longlong *)(param_1 + 0x10) = lVar4;
          *(longlong *)(param_1 + 8) = (longlong)pbVar3 - (longlong)param_2;
          return param_1;
        }
        lVar4 = lVar4 + 1;
      }
      else {
        if (0xf4 < bVar1) goto LAB_144f63327;
        if (((pbVar3[1] & 0xc0) != 0x80) || ((bVar1 == 0xf0 && ((pbVar3[1] & 0xf0) == 0x80))))
        goto LAB_144f632e3;
        if ((pbVar3[2] & 0xc0) != 0x80) goto LAB_144f632f9;
        pbVar2 = pbVar3 + 3;
        if ((pbVar3[3] & 0xc0) != 0x80) {
          *param_1 = 0;
          *(longlong *)(param_1 + 0x10) = lVar4;
          *(byte **)(param_1 + 8) = pbVar2 + (-3 - (longlong)param_2);
          return param_1;
        }
        lVar4 = lVar4 + 2;
      }
    }
    bVar1 = pbVar2[1];
    pbVar3 = pbVar2 + 1;
  } while( true );
}



// FUNCTION 144f63340 FUN_144f63340 body=154 status=ok
// SIG undefined FUN_144f63340(void)

void FUN_144f63340(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 2);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 2);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144f633e0 FUN_144f633e0 body=89 status=ok
// SIG undefined FUN_144f633e0(void)

uint FUN_144f633e0(float param_1,float param_2,float param_3,float param_4)

{
  return ((int)(param_2 * 255.0) & 0xffU |
         (((int)(param_4 * 255.0) & 0xffU) << 8 | (int)(param_1 * 255.0) & 0xffU) << 8) << 8 |
         (int)(param_3 * 255.0) & 0xffU;
}



// FUNCTION 144f63440 FUN_144f63440 body=143 status=ok
// SIG undefined FUN_144f63440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144f63440(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 local_1008 [4088];
  ulonglong uStack_10;
  
  uStack_10 = 0x144f63455;
  FUN_144bfb9f0(local_1008,0x1000,0xffffffff,"in \'%s\', condition: \'%s\'. %s",param_4,param_5,
                param_6);
  uStack_10 = uStack_10 & 0xffffffffffffff;
  iVar1 = FUN_144bfc0f0(param_1,local_1008,param_2,param_3);
  return iVar1 != 0;
}



// FUNCTION 144f634e0 FUN_144f634e0 body=138 status=ok
// SIG undefined FUN_144f634e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144f634e0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_1008 [4088];
  undefined8 uStack_10;
  
  uStack_10 = 0x144f634fa;
  if (PTR_FUN_14c7278f0 == (undefined *)0x0) {
    return 0x1001;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_144bfba60(local_1008,0x1000,0xffffffff,param_2,&local_res18);
  uVar1 = (*(code *)PTR_FUN_14c7278f0)
                    (*param_1,*(undefined8 *)(param_1 + 2),param_1[1],*(undefined8 *)(param_1 + 4),
                     *(undefined8 *)(param_1 + 6),local_1008);
  return uVar1;
}



// FUNCTION 144f63570 FUN_144f63570 body=500 status=ok
// SIG undefined FUN_144f63570(void)

undefined8 * FUN_144f63570(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
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
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
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
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[2] = param_2;
  param_1[3] = param_2;
  param_1[4] = param_2;
  param_1[5] = param_2;
  param_1[6] = param_2;
  param_1[7] = param_2;
  param_1[0x79] = param_1 + 1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return param_1;
}



// FUNCTION 144f63770 FUN_144f63770 body=3 status=ok
// SIG undefined FUN_144f63770(void)

void FUN_144f63770(void)

{
  return;
}



// FUNCTION 144f63780 FUN_144f63780 body=147 status=ok
// SIG undefined FUN_144f63780(void)

undefined8 FUN_144f63780(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  
  iVar1 = *(int *)(param_1 + 0x3c0);
  uVar3 = iVar1 + 1;
  *(uint *)(param_1 + 0x3c0) = uVar3;
  if (uVar3 < 0x10) {
    plVar4 = (longlong *)((longlong)iVar1 * 0x38 + 0x40 + param_1);
    if (plVar4 != (longlong *)0x0) {
      lVar2 = *(longlong *)(param_1 + 0x3c8);
      *plVar4 = lVar2;
      plVar4[1] = 0;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      plVar4[6] = 0;
      plVar4[1] = *(longlong *)(lVar2 + 8);
      plVar4[2] = *(longlong *)(lVar2 + 0x10);
      plVar4[3] = *(longlong *)(lVar2 + 0x18);
      plVar4[4] = *(longlong *)(lVar2 + 0x20);
      plVar4[5] = *(longlong *)(lVar2 + 0x28);
      plVar4[6] = *(longlong *)(lVar2 + 0x30);
    }
    *(longlong *)(param_1 + 0x3c8) = (longlong)*(int *)(param_1 + 0x3c0) * 0x38 + 8 + param_1;
  }
  return *(undefined8 *)(param_1 + 0x3c8);
}



// FUNCTION 144f63820 FUN_144f63820 body=43 status=ok
// SIG undefined FUN_144f63820(void)

void FUN_144f63820(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x3c0) - 1;
  if ((-1 < (int)uVar1) && (*(uint *)(param_1 + 0x3c0) = uVar1, uVar1 < 0x10)) {
    *(longlong *)(param_1 + 0x3c8) = (longlong)(int)uVar1 * 0x38 + 8 + param_1;
  }
  return;
}



// FUNCTION 144f63850 FUN_144f63850 body=34 status=ok
// SIG undefined FUN_144f63850(void)

void FUN_144f63850(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  plVar1 = (longlong *)FUN_144be56e0();
  (**(code **)(*plVar1 + 8))(plVar1,local_res10);
  return;
}



// FUNCTION 144f63880 FUN_144f63880 body=35 status=ok
// SIG undefined FUN_144f63880(void)

void FUN_144f63880(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  
  *param_3 = param_2;
  plVar1 = (longlong *)FUN_144be56e0();
                    /* WARNING: Could not recover jumptable at 0x000144f6389f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1,param_3);
  return;
}



// FUNCTION 144f638b0 FUN_144f638b0 body=47 status=ok
// SIG undefined FUN_144f638b0(void)

void FUN_144f638b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144be56e0();
                    /* WARNING: Could not recover jumptable at 0x000144f638db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
  return;
}



// FUNCTION 144f638e0 FUN_144f638e0 body=61 status=ok
// SIG undefined FUN_144f638e0(void)

undefined8 FUN_144f638e0(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144f63920 FUN_144f63920 body=163 status=ok
// SIG undefined FUN_144f63920(void)

void FUN_144f63920(longlong *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  
  plVar2 = (longlong *)param_1[1];
  if (plVar2 == (longlong *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x18);
    lVar5 = (**(code **)(*param_1 + 8))(param_1,puVar3);
    if (lVar5 == 0) {
      FUN_144f65d50();
      *puVar3 = 0;
    }
    puVar4 = *(ulonglong **)(param_2 + 0x18);
    bVar1 = *(byte *)(param_2 + 8);
    uVar6 = (ulonglong)*(uint *)(param_2 + 0xc) + 0xf + lVar5 & -(ulonglong)*(uint *)(param_2 + 0xc)
    ;
    uVar7 = (int)uVar6 - (int)lVar5;
    *(int *)(uVar6 - 8) = (int)(*puVar4 >> 4);
    *(undefined8 *)(uVar6 - 0x10) = 0;
    *(undefined2 *)(uVar6 - 2) = 0;
    *(ushort *)(uVar6 - 4) = (bVar1 - 0x10) + (short)uVar7;
    *puVar4 = *puVar4 - (ulonglong)uVar7;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144f639bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2,param_2,param_3 + 1);
  return;
}



// FUNCTION 144f639d0 FUN_144f639d0 body=136 status=ok
// SIG undefined FUN_144f639d0(void)

void FUN_144f639d0(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)param_1[1];
  if (plVar1 == (longlong *)0x0) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    plVar1 = *(longlong **)(lVar2 + -0x10);
    if (((ulonglong)plVar1 & 1) == 0) {
      if (plVar1 != (longlong *)0x0) {
        param_1 = plVar1;
      }
    }
    else {
      if (*(longlong **)((ulonglong)plVar1 & 0xfffffffffffffffe) != (longlong *)0x0) {
        param_1 = *(longlong **)((ulonglong)plVar1 & 0xfffffffffffffffe);
      }
      FUN_144f64830((ulonglong)plVar1 & 0xfffffffffffffffe);
    }
                    /* WARNING: Could not recover jumptable at 0x000144f63a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))
              (param_1,(lVar2 + -0x10) - ((ulonglong)*(ushort *)(lVar2 + -4) & 0xfffffffffffffff0),
               (ulonglong)*(uint *)(lVar2 + -8) << 4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144f63a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3 + 1);
  return;
}



// FUNCTION 144f63a60 FUN_144f63a60 body=613 status=ok
// SIG undefined FUN_144f63a60(void)

void FUN_144f63a60(ulonglong param_1,byte param_2,ulonglong *param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong *plVar8;
  byte local_68 [2];
  undefined2 local_66;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  byte local_48 [2];
  undefined2 local_46;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  cVar1 = *(char *)((longlong)param_3 + 0xf);
  cVar2 = *(char *)((longlong)param_3 + 0xe);
  uVar7 = (ulonglong)param_2;
  if (cVar1 != '\0' || cVar2 != '\0') {
    uVar5 = *param_3;
    if ((uVar5 & 1) == 0) {
      if (uVar5 != 0) {
        param_1 = uVar5;
      }
    }
    else if (*(ulonglong *)(uVar5 & 0xfffffffffffffffe) != 0) {
      param_1 = *(ulonglong *)(uVar5 & 0xfffffffffffffffe);
    }
    if (cVar2 != '\0') {
      uVar5 = (ulonglong)(uint)param_3[1];
      bVar4 = cVar2 - 1;
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      pcVar6 = (char *)(lVar3 + 0x114);
      if (*pcVar6 == '\0') {
        __dyn_tls_on_demand_init();
      }
      plVar8 = (longlong *)(lVar3 + 0xf0);
      lVar3 = *plVar8;
      if (lVar3 == 0) {
        if (*pcVar6 == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = FUN_144b3f4a0();
        *plVar8 = lVar3;
      }
      local_60 = *(longlong *)(lVar3 + 0x3d8);
      lVar3 = (ulonglong)bVar4 * 0xe8 + local_60;
      local_50 = DAT_14c7980b8 + 0x18 + (ulonglong)bVar4 * 0x240;
      local_66 = 1;
      local_58 = lVar3 + 0x28;
      local_68[0] = bVar4;
      if (uVar5 != 0) {
        LOCK();
        plVar8 = (longlong *)(local_50 + 0x48 + uVar7 * 0x18);
        *plVar8 = *plVar8 + uVar5 * -0x10;
        UNLOCK();
        LOCK();
        plVar8 = (longlong *)(local_50 + 0x40 + uVar7 * 0x18);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        plVar8 = (longlong *)(lVar3 + 0x30 + uVar7 * 0x18);
        *plVar8 = *plVar8 + uVar5 * -0x10;
        plVar8 = (longlong *)(lVar3 + 0x28 + uVar7 * 0x18);
        *plVar8 = *plVar8 + -1;
        FUN_144f65600(local_68,param_1,uVar7);
      }
    }
    if (cVar1 != '\0') {
      uVar5 = (ulonglong)(uint)param_3[1];
      bVar4 = cVar1 - 1;
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      pcVar6 = (char *)(lVar3 + 0x114);
      if (*pcVar6 == '\0') {
        __dyn_tls_on_demand_init();
      }
      plVar8 = (longlong *)(lVar3 + 0xf0);
      lVar3 = *plVar8;
      if (lVar3 == 0) {
        if (*pcVar6 == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = FUN_144b3f4a0();
        *plVar8 = lVar3;
      }
      local_40 = *(longlong *)(lVar3 + 0x3d8);
      lVar3 = (ulonglong)bVar4 * 0xe8 + local_40;
      local_30 = DAT_14c7980b8 + 0x18 + (ulonglong)bVar4 * 0x240;
      local_46 = 1;
      local_38 = lVar3 + 0x28;
      if (uVar5 != 0) {
        LOCK();
        plVar8 = (longlong *)(local_30 + 0x48 + uVar7 * 0x18);
        *plVar8 = *plVar8 + uVar5 * -0x10;
        UNLOCK();
        LOCK();
        plVar8 = (longlong *)(local_30 + 0x40 + uVar7 * 0x18);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        plVar8 = (longlong *)(lVar3 + 0x30 + uVar7 * 0x18);
        *plVar8 = *plVar8 + uVar5 * -0x10;
        plVar8 = (longlong *)(lVar3 + 0x28 + uVar7 * 0x18);
        *plVar8 = *plVar8 + -1;
        local_48[0] = bVar4;
        FUN_144f65600(local_48,param_1,uVar7);
      }
    }
  }
  return;
}



// FUNCTION 144f63cd0 FUN_144f63cd0 body=2421 status=ok
// SIG undefined FUN_144f63cd0(void)

void FUN_144f63cd0(longlong param_1,longlong *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  char *pcVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *local_res10;
  int local_res18;
  uint local_res20;
  longlong *local_5b8;
  longlong *local_5b0;
  longlong *local_5a8;
  undefined8 local_5a0;
  code *local_598;
  longlong **local_590;
  code *local_588;
  longlong **local_580;
  undefined1 local_578 [8];
  byte local_570 [2];
  ushort local_56e;
  longlong local_568;
  longlong local_560;
  longlong local_558;
  undefined8 local_550;
  undefined8 local_548;
  byte local_540 [2];
  undefined2 local_53e;
  longlong local_538;
  longlong local_530;
  longlong local_528;
  undefined8 local_520;
  code *local_518;
  undefined8 *local_510;
  code *local_508;
  undefined1 *local_500;
  undefined8 local_4f8;
  code *local_4f0;
  undefined8 *local_4e8;
  code *local_4e0;
  undefined1 *local_4d8;
  longlong *local_4c8 [20];
  undefined1 local_428 [80];
  undefined8 local_3d8 [20];
  undefined1 local_338 [80];
  undefined1 local_2e8 [336];
  undefined1 local_198 [344];
  
  local_5b8 = (longlong *)param_2[2];
  local_res20 = 0;
  bVar5 = false;
  bVar4 = false;
  plVar18 = (longlong *)(local_5b8[-2] & 0xfffffffffffffffe);
  local_res10 = param_2;
  local_res18 = param_3;
  local_5a8 = plVar18;
  if ((short)*(ushort *)(plVar18 + 3) < 0) {
    if ((*(ushort *)(plVar18 + 3) >> 0xe & 1) == 0) {
      FUN_144bdf360(local_4c8);
      if ((DAT_14c797ff0 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
        cVar7 = FUN_144bdbf80();
        puVar15 = (undefined8 *)plVar18[1];
        if (cVar7 == '\0') {
          do {
            if (puVar15 == (undefined8 *)0x0) {
              local_4c8[0] = (longlong *)&DAT_14996de1b;
LAB_144f63d8a:
              local_res10 = local_4c8[0];
              uVar8 = FUN_144bdc640(local_428,&DAT_14c797fa0,1);
              local_5a0 = 1;
              local_598 = FUN_144f50c70;
              local_590 = &local_res10;
              lVar9 = FUN_144bdc480(uVar8,"{0}Double Freed",&local_5a0,0);
              *(char **)(lVar9 + 0x38) = "Memory\\Debug\\hkMemoryDebug.cpp";
              *(undefined8 *)(lVar9 + 0x40) = 0x51d;
              FUN_144bdc690(local_428);
              FUN_144bdf2f0(local_4c8);
              return;
            }
            if ((*(byte *)((longlong)puVar15 + 0x19) & 1) != 0) {
              FUN_144bdff80(local_4c8,"[%lli] ",
                            *(undefined8 *)
                             ((ulonglong)*(ushort *)((longlong)puVar15 + 10) + (longlong)puVar15));
              goto LAB_144f63d8a;
            }
            puVar15 = (undefined8 *)*puVar15;
          } while( true );
        }
        for (; puVar15 != (undefined8 *)0x0; puVar15 = (undefined8 *)*puVar15) {
          if ((*(byte *)((longlong)puVar15 + 0x19) & 1) != 0) {
            FUN_144bdff80(local_4c8,"[%lli] ",
                          *(undefined8 *)
                           ((ulonglong)*(ushort *)((longlong)puVar15 + 10) + (longlong)puVar15));
            goto LAB_144f63e5a;
          }
        }
        local_4c8[0] = (longlong *)&DAT_14996de1b;
LAB_144f63e5a:
        local_5b8 = local_4c8[0];
        uVar8 = FUN_144bdc810(local_2e8,&DAT_14c797fa0,1);
        local_5a0 = 1;
        local_598 = FUN_144f50c70;
        local_590 = &local_5b8;
        lVar9 = FUN_144bdc480(uVar8,"{0}Double Freed",&local_5a0,0);
        *(char **)(lVar9 + 0x38) = "Memory\\Debug\\hkMemoryDebug.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x51d;
        FUN_144bdc8a0(local_2e8);
      }
      FUN_144bdf2f0(local_4c8);
      return;
    }
    lVar9 = plVar18[2];
    if (((*(byte *)(lVar9 + 0x16) >> 4 & 1) != 0) &&
       (cVar7 = FUN_144bfb660(local_5b8,*(undefined4 *)((ulonglong)*(ushort *)(lVar9 + 0xe) + lVar9)
                              ,((ulonglong)*(uint *)(local_5b8 + -1) * 0x10 -
                               ((ulonglong)*(ushort *)((longlong)local_5b8 + -4) &
                               0xfffffffffffffff0)) - 0x10 >> 2,&local_5a8), cVar7 == '\0')) {
      FUN_144bdf360(local_4c8);
      if ((DAT_14c797ff0 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
        cVar7 = FUN_144bdbf80();
        puVar15 = (undefined8 *)plVar18[1];
        if (cVar7 == '\0') {
          for (; puVar15 != (undefined8 *)0x0; puVar15 = (undefined8 *)*puVar15) {
            if ((*(byte *)((longlong)puVar15 + 0x19) & 1) != 0) {
              FUN_144bdff80(local_4c8,"[%lli] ",
                            *(undefined8 *)
                             ((ulonglong)*(ushort *)((longlong)puVar15 + 10) + (longlong)puVar15));
              goto LAB_144f63faa;
            }
          }
          local_4c8[0] = (longlong *)&DAT_14996de1b;
LAB_144f63faa:
          local_5b8 = local_4c8[0];
          uVar8 = FUN_144bdc640(local_428,&DAT_14c797fa0,1);
          local_5a0 = 2;
          local_598 = FUN_144f50c70;
          local_590 = &local_5b8;
          local_588 = FUN_144f50b20;
          local_580 = &local_5a8;
          lVar9 = FUN_144bdc480(uVar8,"{0}Modified After Free at offset of {1}",&local_5a0,0);
          *(char **)(lVar9 + 0x38) = "Memory\\Debug\\hkMemoryDebug.cpp";
          *(undefined8 *)(lVar9 + 0x40) = 0x533;
          FUN_144bdc690(local_428);
          FUN_144bdf2f0(local_4c8);
          goto LAB_144f64620;
        }
        for (; puVar15 != (undefined8 *)0x0; puVar15 = (undefined8 *)*puVar15) {
          if ((*(byte *)((longlong)puVar15 + 0x19) & 1) != 0) {
            FUN_144bdff80(local_4c8,"[%lli] ",
                          *(undefined8 *)
                           ((ulonglong)*(ushort *)((longlong)puVar15 + 10) + (longlong)puVar15));
            goto LAB_144f6407f;
          }
        }
        local_4c8[0] = (longlong *)&DAT_14996de1b;
LAB_144f6407f:
        local_5b0 = local_4c8[0];
        uVar8 = FUN_144bdc810(local_2e8,&DAT_14c797fa0,1);
        local_5a0 = 2;
        local_598 = FUN_144f50c70;
        local_590 = &local_5b0;
        local_588 = FUN_144f50b20;
        local_580 = &local_5a8;
        lVar9 = FUN_144bdc480(uVar8,"{0}Modified After Free at offset of {1}",&local_5a0,0);
        *(char **)(lVar9 + 0x38) = "Memory\\Debug\\hkMemoryDebug.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x533;
        FUN_144bdc8a0(local_2e8);
      }
      FUN_144bdf2f0(local_4c8);
    }
  }
  else {
    uVar12 = 0;
    local_res20 = 0;
    plVar18 = (longlong *)plVar18[1];
    if (plVar18 != (longlong *)0x0) {
      local_5b0 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        plVar13 = local_5a8;
        if ((*(byte *)((longlong)plVar18 + 0x19) & 2) != 0) {
          uVar14 = (ulonglong)*(ushort *)((longlong)plVar18 + 10);
          uVar2 = *(ushort *)((longlong)plVar18 + 0xc);
          if ((*(byte *)((longlong)plVar18 + 0x16) >> 5 & 1) != 0) {
            cVar7 = FUN_144bfb870(local_res10[2],
                                  *(undefined4 *)((ulonglong)uVar2 + 4 + (longlong)plVar18),
                                  (ulonglong)*(ushort *)(uVar14 + 0x14 + (longlong)plVar18) +
                                  *(longlong *)(uVar14 + 8 + (longlong)plVar18),
                                  (((ulonglong)*(uint *)(local_5b8 + -1) * 0x10 -
                                   ((ulonglong)*(ushort *)((longlong)local_5b8 + -4) &
                                   0xfffffffffffffff0)) + -0x10) - uVar12,local_578);
            if (cVar7 == '\0') {
              FUN_144bdf360(local_3d8);
              if ((DAT_14c797ff0 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
                cVar7 = FUN_144bdbf80();
                if (cVar7 == '\0') {
                  FUN_144bdff80(local_3d8,"[%lli] ",*(undefined8 *)(uVar14 + (longlong)plVar18));
                  bVar5 = true;
                  local_550 = local_3d8[0];
                  uVar8 = FUN_144bdc640(local_338,&DAT_14c797fa0,1);
                  local_510 = &local_550;
                  local_520 = 2;
                  puVar15 = &local_520;
                  local_518 = FUN_144f50c70;
                  local_508 = FUN_144f50b20;
                  local_500 = local_578;
                }
                else {
                  FUN_144bdff80(local_3d8,"[%lli] ",*(undefined8 *)(uVar14 + (longlong)plVar18));
                  bVar4 = true;
                  local_548 = local_3d8[0];
                  uVar8 = FUN_144bdc810(local_198,&DAT_14c797fa0,1);
                  local_4e8 = &local_548;
                  local_4f8 = 2;
                  puVar15 = &local_4f8;
                  local_4f0 = FUN_144f50c70;
                  local_4e0 = FUN_144f50b20;
                  local_4d8 = local_578;
                }
                lVar9 = FUN_144bdc480(uVar8,"{0}Modified Outside Bounds at offset of {1}",puVar15,0)
                ;
                *(undefined8 *)(lVar9 + 0x40) = 0x55e;
                *(char **)(lVar9 + 0x38) = "Memory\\Debug\\hkMemoryDebug.cpp";
                if (bVar4) {
                  bVar4 = false;
                  FUN_144bdc8a0(local_198);
                }
                if (bVar5) {
                  bVar5 = false;
                  FUN_144bdc690(local_338);
                }
              }
              FUN_144bdf2f0(local_3d8);
            }
            uVar12 = (ulonglong)local_res20;
          }
          local_res20 = (int)uVar12 + *(int *)((ulonglong)uVar2 + (longlong)plVar18);
        }
        if ((*(byte *)((longlong)plVar18 + 0x19) & 8) != 0) {
          lVar9 = (ulonglong)*(ushort *)(plVar18 + 2) + (longlong)plVar18;
          *(ulonglong *)(lVar9 + 0x10) =
               ((longlong)*(int *)(lVar9 + 0x10) ^ *(ulonglong *)(lVar9 + 0x10)) &
               0xfffffffffffffffd ^ (longlong)*(int *)(lVar9 + 0x10) | 1;
          if ((*(byte *)(lVar9 + 0x18) & 1) == 0) {
            lVar10 = *local_5b0;
            uVar3 = *(undefined2 *)((longlong)plVar18 + 0x16);
            bVar1 = *(byte *)(plVar18 + 3);
            pcVar16 = (char *)(lVar10 + 0x114);
            if (*pcVar16 == '\0') {
              __dyn_tls_on_demand_init();
            }
            plVar13 = (longlong *)(lVar10 + 0xf0);
            lVar10 = *plVar13;
            if (lVar10 == 0) {
              if (*pcVar16 == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar10 = FUN_144b3f4a0();
              *plVar13 = lVar10;
            }
            local_538 = *(longlong *)(lVar10 + 0x3d8);
            local_530 = local_538 + (ulonglong)bVar1 * 0xe8 + 0x28;
            local_528 = (ulonglong)bVar1 * 0x240 + DAT_14c7980b8 + 0x18;
            local_540[0] = bVar1;
            local_53e = uVar3;
            FUN_144f64670(lVar9,local_540,(char)local_res10[1]);
            plVar13 = local_5a8;
          }
        }
        uVar2 = *(ushort *)((longlong)plVar18 + 0x16);
        if (((uVar2 & 1) == 0) && ((uVar2 & 0x1c0) == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          bVar1 = *(byte *)(plVar18 + 3);
          lVar9 = param_1;
          if (*plVar13 != 0) {
            lVar9 = *plVar13;
          }
          lVar10 = *local_5b0;
          pcVar16 = (char *)(lVar10 + 0x114);
          if (*pcVar16 == '\0') {
            __dyn_tls_on_demand_init();
          }
          plVar13 = (longlong *)(lVar10 + 0xf0);
          lVar10 = *plVar13;
          if (lVar10 == 0) {
            if (*pcVar16 == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar10 = FUN_144b3f4a0();
            *plVar13 = lVar10;
          }
          local_568 = *(longlong *)(lVar10 + 0x3d8);
          lVar17 = (ulonglong)bVar1 * 0x240 + DAT_14c7980b8;
          lVar10 = (ulonglong)bVar1 * 0xe8 + local_568;
          local_560 = lVar10 + 0x28;
          local_558 = lVar17 + 0x18;
          local_570[0] = bVar1;
          local_56e = uVar2;
          if (-1 < (short)plVar18[1]) {
            uVar11 = *(ushort *)(local_5a8 + 3) & 0x3fff;
            if ((*(ushort *)(local_5a8 + 3) & 0x3fff) != 0) {
              LOCK();
              *(longlong *)(lVar17 + 0xa8) = *(longlong *)(lVar17 + 0xa8) - (ulonglong)uVar11;
              UNLOCK();
              LOCK();
              *(longlong *)(lVar17 + 0xa0) = *(longlong *)(lVar17 + 0xa0) + -1;
              UNLOCK();
              *(longlong *)(lVar10 + 0x78) = *(longlong *)(lVar10 + 0x78) - (ulonglong)uVar11;
              *(longlong *)(lVar10 + 0x70) = *(longlong *)(lVar10 + 0x70) + -1;
              FUN_144f65600(local_570,lVar9,3);
            }
            uVar11 = *(ushort *)(plVar18 + 1) & 0x7fff;
            if ((*(ushort *)(plVar18 + 1) & 0x7fff) != 0) {
              LOCK();
              *(longlong *)(lVar17 + 0xa8) = *(longlong *)(lVar17 + 0xa8) - (ulonglong)uVar11;
              UNLOCK();
              LOCK();
              *(longlong *)(lVar17 + 0xa0) = *(longlong *)(lVar17 + 0xa0) + -1;
              UNLOCK();
              *(longlong *)(lVar10 + 0x78) = *(longlong *)(lVar10 + 0x78) - (ulonglong)uVar11;
              *(longlong *)(lVar10 + 0x70) = *(longlong *)(lVar10 + 0x70) + -1;
              FUN_144f65600(local_570,lVar9,3);
            }
          }
          uVar12 = (ulonglong)*(uint *)(local_5b8 + -1);
          if (uVar12 != 0) {
            lVar17 = (ulonglong)*(byte *)(local_res10 + 1) * 0x18;
            LOCK();
            plVar13 = (longlong *)(lVar17 + 0x48 + local_558);
            *plVar13 = *plVar13 + uVar12 * -0x10;
            UNLOCK();
            LOCK();
            plVar13 = (longlong *)(local_558 + 0x40 + lVar17);
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            plVar13 = (longlong *)(lVar10 + 0x30 + lVar17);
            *plVar13 = *plVar13 + uVar12 * -0x10;
            plVar13 = (longlong *)(lVar10 + 0x28 + lVar17);
            *plVar13 = *plVar13 + -1;
            FUN_144f65600(local_570,lVar9);
          }
        }
        plVar18 = (longlong *)*plVar18;
        uVar12 = (ulonglong)local_res20;
      } while (plVar18 != (longlong *)0x0);
    }
  }
LAB_144f64620:
                    /* WARNING: Could not recover jumptable at 0x000144f64641. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)local_res10[3])(param_1,local_res10,local_res18 + 1);
  return;
}



// FUNCTION 144f64650 FUN_144f64650 body=10 status=ok
// SIG undefined FUN_144f64650(void)

void FUN_144f64650(undefined1 param_1)

{
  FUN_144f65870(0xff,param_1);
  return;
}



// FUNCTION 144f64660 FUN_144f64660 body=10 status=ok
// SIG undefined FUN_144f64660(void)

void FUN_144f64660(undefined1 param_1)

{
  FUN_144f65ab0(0xff,param_1);
  return;
}



// FUNCTION 144f64670 FUN_144f64670 body=342 status=ok
// SIG undefined FUN_144f64670(void)

void FUN_144f64670(longlong *param_1,byte *param_2,byte param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar5 = DAT_14c7980b8 + 0x18 + (ulonglong)*param_2 * 0x240;
  puVar4 = (undefined8 *)(((ulonglong)param_3 + 0xe) * 0x10 + lVar5);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar5 + ((ulonglong)param_3 * 5 + 0x28) * 8);
  EnterCriticalSection(lpCriticalSection);
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    plVar1[1] = (longlong)plVar2;
  }
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)plVar1;
  }
  if ((longlong *)*puVar4 == param_1) {
    *puVar4 = plVar2;
  }
  if ((longlong *)puVar4[1] == param_1) {
    puVar4[1] = plVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((((plVar1 != (longlong *)0x0) && ((plVar1[2] & 0xfffffffffffffffcU) == 0)) &&
      ((lVar5 = *plVar1, lVar5 == 0 || ((*(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffc) == 0))))
     && ((plVar3 = (longlong *)plVar1[1], plVar3 != (longlong *)0x0 &&
         ((plVar3[2] & 0xfffffffffffffffcU) == 0)))) {
    if (lVar5 != 0) {
      *(longlong **)(lVar5 + 8) = plVar3;
    }
    *plVar3 = lVar5;
    if ((longlong *)*puVar4 == plVar1) {
      *puVar4 = plVar3;
    }
    if ((longlong *)puVar4[1] == plVar1) {
      puVar4[1] = lVar5;
    }
    FUN_144f647d0();
  }
  if ((((plVar2 != (longlong *)0x0) && ((plVar2[2] & 0xfffffffffffffffcU) == 0)) &&
      ((lVar5 = *plVar2, lVar5 == 0 || ((*(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffc) == 0))))
     && ((plVar1 = (longlong *)plVar2[1], plVar1 != (longlong *)0x0 &&
         ((plVar1[2] & 0xfffffffffffffffcU) == 0)))) {
    if (lVar5 != 0) {
      *(longlong **)(lVar5 + 8) = plVar1;
    }
    *plVar1 = lVar5;
    if ((longlong *)*puVar4 == plVar2) {
      *puVar4 = plVar1;
    }
    if ((longlong *)puVar4[1] == plVar2) {
      puVar4[1] = lVar5;
    }
    FUN_144f647d0(plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000144f647bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 144f647d0 FUN_144f647d0 body=82 status=ok
// SIG undefined FUN_144f647d0(void)

void FUN_144f647d0(longlong param_1)

{
  undefined **local_18;
  longlong *local_10;
  
  local_10 = (longlong *)FUN_144be56e0();
  local_18 = hkMemory::ForwardingContainerAllocator::vftable;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_144bfbd90(*(longlong *)(param_1 + 0x20),&local_18);
  }
  (**(code **)(*local_10 + 0x10))(local_10,param_1,0x38);
  return;
}



// FUNCTION 144f64830 FUN_144f64830 body=580 status=ok
// SIG undefined FUN_144f64830(void)

void FUN_144f64830(longlong *param_1)

{
  char *pcVar1;
  longlong *plVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  byte local_48 [2];
  undefined2 local_46;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  if ((-1 < (short)*(ushort *)(param_1 + 3)) || ((*(ushort *)(param_1 + 3) >> 0xe & 1) != 0)) {
    puVar5 = (undefined8 *)param_1[1];
    do {
      puVar7 = puVar5;
      if (puVar7 == (undefined8 *)0x0) {
        uVar11 = (ulonglong)_tls_index;
        plVar12 = (longlong *)*param_1;
        if (plVar12 == (longlong *)0x0) {
          lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8);
          if (*(char *)(lVar9 + 0x114) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar8 = *(longlong *)(lVar9 + 0xf0);
          if (lVar8 == 0) {
            if (*(char *)(lVar9 + 0x114) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar8 = FUN_144b3f4a0();
            *(longlong *)(lVar9 + 0xf0) = lVar8;
          }
          plVar12 = *(longlong **)(lVar8 + 0x508);
          if (plVar12 == (longlong *)0x0) {
            if (*(char *)(lVar9 + 0x114) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar8 = *(longlong *)(lVar9 + 0xf0);
            if (lVar8 == 0) {
              if (*(char *)(lVar9 + 0x114) == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar8 = FUN_144b3f4a0();
              *(longlong *)(lVar9 + 0xf0) = lVar8;
            }
            plVar12 = *(longlong **)(*(longlong *)(lVar8 + 0x3d0) + 0x20);
          }
        }
        if ((longlong *)param_1[1] != (longlong *)0x0) {
          lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8);
          pcVar1 = (char *)(lVar9 + 0x114);
          plVar2 = (longlong *)(lVar9 + 0xf0);
          plVar10 = (longlong *)param_1[1];
          do {
            uVar4 = *(undefined2 *)((longlong)plVar10 + 0x16);
            bVar3 = *(byte *)(plVar10 + 3);
            if (*pcVar1 == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar9 = *plVar2;
            if (lVar9 == 0) {
              if (*pcVar1 == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar9 = FUN_144b3f4a0();
              *plVar2 = lVar9;
            }
            local_40 = *(longlong *)(lVar9 + 0x3d8);
            plVar6 = (longlong *)*plVar10;
            local_38 = local_40 + (ulonglong)bVar3 * 0xe8 + 0x28;
            local_30 = (ulonglong)bVar3 * 0x240 + DAT_14c7980b8 + 0x18;
            local_48[0] = bVar3;
            local_46 = uVar4;
            if (((*(byte *)((longlong)plVar10 + 0x19) & 8) != 0) &&
               ((*(byte *)((ulonglong)*(ushort *)(plVar10 + 2) + (longlong)plVar10 + 0x18) & 1) != 0
               )) {
              FUN_144f64670((ulonglong)*(ushort *)(plVar10 + 2) + (longlong)plVar10,local_48,
                            *(undefined1 *)((longlong)param_1 + 0x1a));
            }
            (**(code **)(*plVar12 + 0x10))(plVar12,plVar10,*(ushort *)(plVar10 + 1) & 0x7fff);
            plVar10 = plVar6;
          } while (plVar6 != (longlong *)0x0);
        }
        (**(code **)(*plVar12 + 0x10))(plVar12,param_1,*(ushort *)(param_1 + 3) & 0x3fff);
        return;
      }
      puVar5 = (undefined8 *)*puVar7;
    } while ((((*(byte *)((longlong)puVar7 + 0x19) & 8) == 0) ||
             ((*(uint *)((longlong)puVar7 + (ulonglong)*(ushort *)(puVar7 + 2) + 0x18) >> 1 & 1) ==
              0)) || ((*(byte *)((longlong)puVar7 + (ulonglong)*(ushort *)(puVar7 + 2) + 0x10) & 2)
                      != 0));
  }
  return;
}



// FUNCTION 144f64a80 FUN_144f64a80 body=97 status=ok
// SIG undefined FUN_144f64a80(void)

void FUN_144f64a80(void)

{
  longlong *plVar1;
  void *_Dst;
  
  plVar1 = (longlong *)FUN_144be56e0();
  _Dst = (void *)(**(code **)(*plVar1 + 8))(plVar1);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x4818);
    DAT_14c7980b8 = FUN_144f65250(_Dst);
    return;
  }
  DAT_14c7980b8 = 0;
  return;
}



// FUNCTION 144f64af0 FUN_144f64af0 body=32 status=ok
// SIG undefined FUN_144f64af0(void)

void FUN_144f64af0(void)

{
  FUN_144b3f230(DAT_14c7980b8);
  DAT_14c7980b8 = 0;
  return;
}



// FUNCTION 144f64b10 FUN_144f64b10 body=299 status=ok
// SIG undefined FUN_144f64b10(void)

undefined1 * FUN_144f64b10(longlong *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  local_res8 = 0x1d28;
  puVar1 = (undefined1 *)(**(code **)(*param_1 + 8))(param_1,&local_res8);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_144f59b40(puVar1 + 8);
    puVar2 = puVar1 + 0xdc;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    lVar3 = 0x20;
    do {
      if ((undefined8 *)(puVar2 + -0xb4) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -0xb4) = 0;
        *(undefined8 *)(puVar2 + -0xac) = 0;
        *(undefined8 *)(puVar2 + -0xa4) = 0x8000000000000000;
        *(undefined8 *)(puVar2 + -0x9c) = 0;
        *(undefined8 *)(puVar2 + -0x94) = 0;
        *(undefined8 *)(puVar2 + -0x8c) = 0x8000000000000000;
        *(undefined8 *)(puVar2 + -0x84) = 0;
        *(undefined8 *)(puVar2 + -0x7c) = 0;
        *(undefined8 *)(puVar2 + -0x74) = 0x8000000000000000;
        *(undefined8 *)(puVar2 + -0x6c) = 0;
        *(undefined8 *)(puVar2 + -100) = 0;
        *(undefined8 *)(puVar2 + -0x5c) = 0x8000000000000000;
        *(undefined8 *)(puVar2 + -0x54) = 0;
        *(undefined8 *)(puVar2 + -0x4c) = 0;
        *(undefined8 *)(puVar2 + -0x44) = 0x8000000000000000;
        *(undefined8 *)(puVar2 + -0x3c) = 0;
        *(undefined8 *)(puVar2 + -0x34) = 0;
        *(undefined8 *)(puVar2 + -0x2c) = 0x8000000000000000;
        *(undefined8 *)(puVar2 + -0x24) = 0;
        *(undefined8 *)(puVar2 + -0x1c) = 0;
        *(undefined1 **)(puVar2 + -0x14) = puVar1 + 1;
        *(undefined8 *)(puVar2 + -0xc) = 0;
        *(undefined8 *)(puVar2 + -4) = 0;
        *(undefined8 *)(puVar2 + 4) = 0;
        *(undefined1 **)(puVar2 + 0xc) = puVar1 + 2;
        *(undefined8 *)(puVar2 + 0x14) = 0;
        *(undefined8 *)(puVar2 + 0x1c) = 0;
        *(undefined8 *)(puVar2 + 0x24) = 0;
      }
      puVar2 = puVar2 + 0xe8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return puVar1;
  }
  return (undefined1 *)0x0;
}



// FUNCTION 144f64c40 FUN_144f64c40 body=237 status=ok
// SIG undefined FUN_144f64c40(void)

void FUN_144f64c40(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2 + 0x100;
  lVar2 = 0x20;
  do {
    FUN_144f651a0(lVar1 + -0x18);
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined4 *)(lVar1 + 4) = 0;
    if (*(int *)(lVar1 + -8) != 0) {
      (**(code **)(PTR_vftable_14c727900 + 0x18))
                (&PTR_vftable_14c727900,*(undefined8 *)(lVar1 + -0x10),
                 (longlong)*(int *)(lVar1 + -8) << 3);
      *(undefined4 *)(lVar1 + -8) = 0;
      *(undefined8 *)(lVar1 + -0x10) = 0;
    }
    FUN_144f64f80(lVar1 + -0x38);
    *(undefined8 *)(lVar1 + -0x24) = 0;
    *(undefined4 *)(lVar1 + -0x1c) = 0;
    if (*(int *)(lVar1 + -0x28) != 0) {
      (**(code **)(PTR_vftable_14c727900 + 0x18))
                (&PTR_vftable_14c727900,*(undefined8 *)(lVar1 + -0x30),
                 (longlong)*(int *)(lVar1 + -0x28) << 4);
      *(undefined4 *)(lVar1 + -0x28) = 0;
      *(undefined8 *)(lVar1 + -0x30) = 0;
    }
    lVar1 = lVar1 + 0xe8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_144f59b50(param_2 + 8);
                    /* WARNING: Could not recover jumptable at 0x000144f64d29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2,0x1d28);
  return;
}



// FUNCTION 144f64d30 FUN_144f64d30 body=586 status=ok
// SIG undefined FUN_144f64d30(void)

ulonglong FUN_144f64d30(undefined8 *param_1,ulonglong param_2,byte param_3)

{
  ushort *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  char cVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  char *pcVar14;
  uint local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 *local_58;
  undefined1 local_50;
  longlong local_48;
  code *local_40;
  
  uVar11 = 0;
  if (param_2 != 0) {
    *(undefined1 *)*param_1 = 1;
    if (*(uint *)((longlong)param_1 + 0x1c) != (uint)param_3 &&
        (int)(uint)param_3 <= (int)*(uint *)((longlong)param_1 + 0x1c)) {
      plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        if (param_2 <= uVar11) break;
        puVar3 = (undefined8 *)(param_1[1] + (longlong)*(int *)((longlong)param_1 + 0x14) * 0x10);
        uVar5 = *puVar3;
        lVar6 = puVar3[1];
        iVar7 = *(int *)((longlong)param_1 + 0x14) + 1;
        *(int *)((longlong)param_1 + 0x14) = iVar7;
        if (iVar7 == *(int *)(param_1 + 2)) {
          *(undefined4 *)((longlong)param_1 + 0x14) = 0;
        }
        *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + -1;
        lVar8 = *plVar2;
        pcVar14 = (char *)(lVar8 + 0x114);
        uVar12 = (ulonglong)*(uint *)(lVar6 + -8);
        cVar10 = *pcVar14;
        if (cVar10 == '\0') {
          __dyn_tls_on_demand_init();
          cVar10 = *pcVar14;
        }
        plVar13 = (longlong *)(lVar8 + 0xf0);
        lVar8 = *plVar13;
        if (lVar8 == 0) {
          if (cVar10 == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar8 = FUN_144b3f4a0();
          *plVar13 = lVar8;
        }
        local_88 = (uint)uVar5;
        uVar4 = *(undefined8 *)(*(longlong *)(lVar8 + 0x3d0) + 8 + (ulonglong)(local_88 & 0xff) * 8)
        ;
        uVar9 = *(ulonglong *)(lVar6 + -0x10) & 0xfffffffffffffffe;
        puVar1 = (ushort *)(uVar9 + 0x18);
        *puVar1 = *puVar1 | 0x4000;
        uVar9 = (ulonglong)*(byte *)(*(longlong *)(uVar9 + 0x10) + 0x18);
        if (*pcVar14 == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar8 = *plVar13;
        if (lVar8 == 0) {
          if (*pcVar14 == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar8 = FUN_144b3f4a0();
          *plVar13 = lVar8;
        }
        lVar8 = *(longlong *)(lVar8 + 0x3d8);
        if (uVar12 != 0) {
          LOCK();
          plVar13 = (longlong *)(uVar9 * 0x240 + DAT_14c7980b8 + 0xe8);
          *plVar13 = *plVar13 + uVar12 * -0x10;
          UNLOCK();
          plVar13 = (longlong *)(uVar9 * 0xe8 + lVar8 + 0xb8);
          *plVar13 = *plVar13 + uVar12 * -0x10;
        }
        local_58 = &local_70;
        local_70 = 0xffffffffffffffff;
        local_40 = FUN_144f639d0;
        local_68 = 0;
        local_60 = 0;
        local_50 = (undefined1)uVar5;
        local_48 = lVar6;
        FUN_144f63cd0(uVar4,&local_58,1);
        uVar11 = uVar11 + uVar12 * 0x10;
      } while ((int)(uint)param_3 < *(int *)((longlong)param_1 + 0x1c));
    }
    *(undefined1 *)*param_1 = 0;
  }
  return uVar11;
}



// FUNCTION 144f64f80 FUN_144f64f80 body=122 status=ok
// SIG undefined FUN_144f64f80(void)

undefined8 FUN_144f64f80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144f64d30(param_1,0xffffffffffffffff);
  *(undefined1 *)*param_1 = 1;
  if (*(int *)((longlong)param_1 + 0x1c) == 0) {
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 2) != 0) {
      (**(code **)(PTR_vftable_14c727900 + 0x18))
                (&PTR_vftable_14c727900,param_1[1],(longlong)*(int *)(param_1 + 2) << 4);
      *(undefined4 *)(param_1 + 2) = 0;
      param_1[1] = 0;
    }
  }
  *(undefined1 *)*param_1 = 0;
  return uVar1;
}



// FUNCTION 144f65000 FUN_144f65000 body=407 status=ok
// SIG undefined FUN_144f65000(void)

ulonglong FUN_144f65000(undefined8 *param_1,ulonglong param_2,byte param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  
  uVar9 = 0;
  if (param_2 != 0) {
    *(undefined1 *)*param_1 = 1;
    if ((int)(uint)param_3 < *(int *)((longlong)param_1 + 0x1c)) {
      plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        if (param_2 <= uVar9) break;
        lVar6 = *(longlong *)(param_1[1] + (longlong)*(int *)((longlong)param_1 + 0x14) * 8);
        iVar5 = *(int *)((longlong)param_1 + 0x14) + 1;
        *(int *)((longlong)param_1 + 0x14) = iVar5;
        if (iVar5 == *(int *)(param_1 + 2)) {
          *(undefined4 *)((longlong)param_1 + 0x14) = 0;
        }
        *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + -1;
        uVar7 = *(ulonglong *)(lVar6 + 0x10);
        lVar3 = *(longlong *)(lVar6 + 0x20);
        lVar4 = *plVar1;
        pcVar8 = (char *)(lVar4 + 0x114);
        lVar10 = (ulonglong)(*(ushort *)(lVar3 + 0x18) & 0x3fff) +
                 (ulonglong)(*(ushort *)((uVar7 & 0xfffffffffffffffc) + 8) & 0x7fff);
        *(ulonglong *)(lVar6 + 0x10) =
             ((longlong)(int)uVar7 ^ uVar7) & 0xfffffffffffffffe ^ (longlong)(int)uVar7 | 2;
        bVar2 = *(byte *)((uVar7 & 0xfffffffffffffffc) + 0x18);
        if (*pcVar8 == '\0') {
          __dyn_tls_on_demand_init();
        }
        plVar11 = (longlong *)(lVar4 + 0xf0);
        lVar6 = *plVar11;
        if (lVar6 == 0) {
          if (*pcVar8 == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar6 = FUN_144b3f4a0();
          *plVar11 = lVar6;
        }
        uVar7 = (ulonglong)bVar2;
        lVar6 = *(longlong *)(lVar6 + 0x3d8);
        if (lVar10 != 0) {
          LOCK();
          plVar11 = (longlong *)(uVar7 * 0x240 + DAT_14c7980b8 + 0xf0);
          *plVar11 = *plVar11 - lVar10;
          UNLOCK();
          plVar11 = (longlong *)(uVar7 * 0xe8 + lVar6 + 0xc0);
          *plVar11 = *plVar11 - lVar10;
        }
        FUN_144f64830(lVar3);
        uVar9 = uVar9 + lVar10;
      } while ((int)(uint)param_3 < *(int *)((longlong)param_1 + 0x1c));
    }
    *(undefined1 *)*param_1 = 0;
  }
  return uVar9;
}



// FUNCTION 144f651a0 FUN_144f651a0 body=122 status=ok
// SIG undefined FUN_144f651a0(void)

undefined8 FUN_144f651a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144f65000(param_1,0xffffffffffffffff);
  *(undefined1 *)*param_1 = 1;
  if (*(int *)((longlong)param_1 + 0x1c) == 0) {
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 2) != 0) {
      (**(code **)(PTR_vftable_14c727900 + 0x18))
                (&PTR_vftable_14c727900,param_1[1],(longlong)*(int *)(param_1 + 2) << 3);
      *(undefined4 *)(param_1 + 2) = 0;
      param_1[1] = 0;
    }
  }
  *(undefined1 *)*param_1 = 0;
  return uVar1;
}



// FUNCTION 144f65220 FUN_144f65220 body=46 status=ok
// SIG undefined FUN_144f65220(void)

void FUN_144f65220(longlong *param_1)

{
  longlong *plVar1;
  
  (**(code **)(*param_1 + 8))(param_1,0);
  plVar1 = (longlong *)FUN_144be56e0();
                    /* WARNING: Could not recover jumptable at 0x000144f6524a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0x4818);
  return;
}



// FUNCTION 144f65250 FUN_144f65250 body=530 status=ok
// SIG undefined FUN_144f65250(void)

undefined8 * FUN_144f65250(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  puVar6 = param_1 + 3;
  *param_1 = hkMemory::Detail::DebugCrossThreadData::vftable;
  puVar4 = param_1 + 0xd;
  lVar5 = 0x20;
  do {
    lVar5 = lVar5 + -1;
    lVar3 = 6;
    *puVar6 = 0;
    puVar4[-9] = 0;
    puVar4[-8] = 0;
    puVar4[-7] = 0;
    puVar4[-6] = 0;
    puVar4[-5] = 0;
    puVar4[-4] = 0x500000;
    puVar4[-3] = 0x500000;
    puVar1 = puVar6;
    do {
      *puVar1 = 0xffffffffffffffff;
      puVar1 = puVar1 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    puVar4[-2] = 0;
    puVar4[-1] = 0;
    *puVar4 = 0x8000000000000000;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0x8000000000000000;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0x8000000000000000;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0x8000000000000000;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0x8000000000000000;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0x8000000000000000;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    FUN_144b4a250(puVar4 + 0x1e,100);
    FUN_144b4a250(puVar4 + 0x23,100);
    FUN_144b4a250(puVar4 + 0x28,100);
    FUN_144b4a250(puVar4 + 0x2d,100);
    FUN_144b4a250(puVar4 + 0x32,100);
    FUN_144b4a250(puVar4 + 0x37,100);
    *(undefined4 *)(puVar4 + 0x3c) = 0;
    puVar2 = (undefined1 *)((longlong)puVar4 + 0x1e4);
    *puVar2 = 0;
    *(undefined4 *)((longlong)puVar4 + 0x1e5) = 0;
    *(undefined1 *)((longlong)puVar4 + 0x1e9) = 0;
    lVar3 = 6;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    puVar6 = puVar6 + 0x48;
    puVar4 = puVar4 + 0x48;
  } while (lVar5 != 0);
  return param_1;
}



// FUNCTION 144f65470 FUN_144f65470 body=387 status=ok
// SIG undefined FUN_144f65470(void)

undefined8 * FUN_144f65470(undefined8 *param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar9;
  undefined **local_48;
  longlong *local_40;
  undefined8 *puVar8;
  
  lVar6 = 0x20;
  puVar7 = param_1 + 0x903;
  do {
    puVar8 = puVar7 + -0x48;
    lVar6 = lVar6 + -1;
    lVar4 = 0;
    plVar5 = puVar7 + -0x2c;
    lVar9 = 6;
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + 0x140 + (longlong)puVar8);
      EnterCriticalSection(lpCriticalSection);
      plVar3 = (longlong *)*plVar5;
      if (plVar3 != (longlong *)0x0) {
        do {
          plVar1 = (longlong *)plVar3[1];
          if ((plVar3[2] & 0xfffffffffffffffcU) == 0) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
              *(longlong **)(lVar2 + 8) = plVar1;
            }
            if (plVar1 != (longlong *)0x0) {
              *plVar1 = lVar2;
            }
            if ((longlong *)*plVar5 == plVar3) {
              *plVar5 = (longlong)plVar1;
            }
            if ((longlong *)plVar5[1] == plVar3) {
              plVar5[1] = lVar2;
            }
            local_40 = (longlong *)FUN_144be56e0();
            local_48 = hkMemory::ForwardingContainerAllocator::vftable;
            if (plVar3[4] != 0) {
              FUN_144bfbd90(plVar3[4],&local_48);
            }
            (**(code **)(*local_40 + 0x10))(local_40,plVar3,0x38);
          }
          plVar3 = plVar1;
        } while (plVar1 != (longlong *)0x0);
        lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + 0x140 + (longlong)puVar8);
      }
      LeaveCriticalSection(lpCriticalSection);
      lVar4 = lVar4 + 0x28;
      plVar5 = plVar5 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    _vector_destructor_iterator_(puVar7 + -0x20,0x28,6,DeleteCriticalSection);
    puVar7 = puVar8;
  } while (lVar6 != 0);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 5) == 5) {
    FUN_144bda120(param_1,0x4818);
  }
  return param_1;
}



// FUNCTION 144f65600 FUN_144f65600 body=171 status=ok
// SIG undefined FUN_144f65600(void)

void FUN_144f65600(byte *param_1,undefined8 param_2,byte param_3)

{
  char *pcVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_3;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x48 + uVar5 * 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar5 * 8)) {
    LOCK();
    pcVar1 = (char *)(uVar5 + 0x234 + *(longlong *)(param_1 + 0x18));
    cVar2 = *pcVar1;
    *pcVar1 = '\0';
    UNLOCK();
    if (cVar2 != '\0') {
      uVar4 = 0xffffffff;
      uVar5 = DAT_14c7980a0;
      if (*param_1 != 0x1f) {
        uVar4 = (uint)*param_1;
      }
      while (plVar3 = (longlong *)(uVar5 & 0xfffffffffffffffc), plVar3 != (longlong *)0x0) {
        uVar5 = plVar3[1];
        if ((uVar5 & 3) == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3,uVar4,param_2,param_3);
        }
      }
    }
  }
  return;
}



// FUNCTION 144f656b0 FUN_144f656b0 body=447 status=ok
// SIG undefined FUN_144f656b0(void)

void FUN_144f656b0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_res8;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + -0x10) & 1) != 0)) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar3 + 0xf0);
    if (lVar4 == 0) {
      if (*(char *)(lVar3 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = FUN_144b3f4a0();
      *(longlong *)(lVar3 + 0xf0) = lVar4;
    }
    iVar2 = *(int *)(*(longlong *)(lVar4 + 0x3d8) + 0x20);
    if (iVar2 != 0) {
      uVar1 = *(undefined1 *)((longlong)iVar2 + 0xf + *(longlong *)(lVar4 + 0x3d8));
      if (*(char *)(lVar3 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (*(longlong *)(lVar3 + 0xf0) == 0) {
        if (*(char *)(lVar3 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        uVar5 = FUN_144b3f4a0();
        *(undefined8 *)(lVar3 + 0xf0) = uVar5;
      }
      plVar8 = (longlong *)(*(ulonglong *)(param_1 + -0x10) & 0xfffffffffffffffe);
      plVar7 = (longlong *)*plVar8;
      if (plVar7 == (longlong *)0x0) {
        if (*(char *)(lVar3 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar4 = *(longlong *)(lVar3 + 0xf0);
        if (lVar4 == 0) {
          if (*(char *)(lVar3 + 0x114) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar4 = FUN_144b3f4a0();
          *(longlong *)(lVar3 + 0xf0) = lVar4;
        }
        plVar7 = *(longlong **)(lVar4 + 0x508);
        if (plVar7 == (longlong *)0x0) {
          if (*(char *)(lVar3 + 0x114) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar4 = *(longlong *)(lVar3 + 0xf0);
          if (lVar4 == 0) {
            if (*(char *)(lVar3 + 0x114) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar4 = FUN_144b3f4a0();
            *(longlong *)(lVar3 + 0xf0) = lVar4;
          }
          plVar7 = *(longlong **)(*(longlong *)(lVar4 + 0x3d0) + 0x20);
        }
      }
      local_res8 = 0x28;
      puVar6 = (undefined8 *)(**(code **)(*plVar7 + 8))(plVar7,&local_res8);
      if (puVar6 == (undefined8 *)0x0) {
        FUN_144f65d50();
      }
      else {
        *(undefined2 *)((longlong)puVar6 + 0x16) = 0x400;
        *(ushort *)(puVar6 + 1) = (ushort)local_res8 | 0x8000;
        *(undefined1 *)(puVar6 + 3) = uVar1;
      }
      *(undefined1 *)((longlong)puVar6 + 0x19) = 0x20;
      *(undefined2 *)((longlong)puVar6 + 0x14) = 0x20;
      *puVar6 = 0;
      if ((undefined8 *)plVar8[2] == (undefined8 *)0x0) {
        plVar8[1] = (longlong)puVar6;
      }
      else {
        *(undefined8 *)plVar8[2] = puVar6;
      }
      plVar8[2] = (longlong)puVar6;
      *(undefined8 *)((ulonglong)*(ushort *)((longlong)puVar6 + 0x14) + (longlong)puVar6) = param_2;
    }
  }
  return;
}



// FUNCTION 144f65870 FUN_144f65870 body=572 status=ok
// SIG undefined FUN_144f65870(void)

void FUN_144f65870(byte param_1,char param_2)

{
  char *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  uint uVar11;
  longlong local_res18;
  longlong local_38 [2];
  ulonglong uVar10;
  
  uVar10 = (ulonglong)_tls_index;
  if (param_2 != '\0') {
    FUN_144b3d420(local_38);
    local_res18 = local_38[0];
    if (local_38[0] != 0) {
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8);
      bVar9 = 0;
      if (param_1 != 0xff) {
        bVar9 = param_1;
      }
      pcVar1 = (char *)(lVar3 + 0x114);
      plVar2 = (longlong *)(lVar3 + 0xf0);
      do {
        lVar7 = local_res18;
        lVar3 = *(longlong *)(local_res18 + 0x3d8);
        if (*pcVar1 == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar5 = *plVar2;
        if (lVar5 == 0) {
          if (*pcVar1 == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar5 = FUN_144b3f4a0();
          *plVar2 = lVar5;
        }
        lVar6 = FUN_144f63780(lVar5 + 8);
        uVar10 = 0;
        do {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar7 + 0x3d0) + 8 + (uVar10 & 0xff) * 8);
          if ((char)uVar10 == '\a') {
            *(undefined8 *)(lVar6 + 8) = uVar4;
            *(undefined8 *)(lVar6 + 0x10) = uVar4;
            *(undefined8 *)(lVar6 + 0x18) = uVar4;
            *(undefined8 *)(lVar6 + 0x20) = uVar4;
            *(undefined8 *)(lVar6 + 0x28) = uVar4;
            *(undefined8 *)(lVar6 + 0x30) = uVar4;
          }
          else {
            *(undefined8 *)(lVar6 + 8 + (uVar10 & 0xff) * 8) = uVar4;
          }
          uVar11 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar11;
        } while ((int)uVar11 < 6);
        if (bVar9 < 0x20) {
          uVar10 = (ulonglong)bVar9;
          lVar7 = uVar10 * 0xe8 + 200 + lVar3;
          if (param_1 == 0xff) {
            while( true ) {
              FUN_144f64f80(lVar7);
              bVar8 = (char)uVar10 + 1;
              uVar10 = (ulonglong)bVar8;
              if (0x1f < bVar8) break;
              lVar7 = (ulonglong)bVar8 * 0xe8 + 200 + lVar3;
            }
          }
          else {
            FUN_144f64d30(lVar7,0xffffffffffffffff);
          }
        }
        FUN_144f63820(lVar5 + 8);
        FUN_144b3d450(&local_res18);
      } while (local_res18 != 0);
      uVar10 = (ulonglong)_tls_index;
    }
    FUN_144b3d410(local_38);
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8);
  if (*(char *)(lVar3 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar3 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar3 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar3 + 0xf0) = lVar7;
  }
  lVar3 = *(longlong *)(lVar7 + 0x3d8);
  bVar9 = 0;
  if (param_1 != 0xff) {
    bVar9 = param_1;
  }
  if (bVar9 < 0x20) {
    uVar10 = (ulonglong)bVar9;
    lVar7 = uVar10 * 0xe8 + 200 + lVar3;
    if (param_1 == 0xff) {
      while( true ) {
        FUN_144f64f80(lVar7);
        bVar9 = (char)uVar10 + 1;
        uVar10 = (ulonglong)bVar9;
        if (0x1f < bVar9) break;
        lVar7 = (ulonglong)bVar9 * 0xe8 + 200 + lVar3;
      }
    }
    else {
      FUN_144f64d30(lVar7,0xffffffffffffffff);
    }
  }
  return;
}



// FUNCTION 144f65ab0 FUN_144f65ab0 body=565 status=ok
// SIG undefined FUN_144f65ab0(void)

void FUN_144f65ab0(byte param_1,char param_2)

{
  char *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  uint uVar11;
  longlong local_res18;
  longlong local_38 [2];
  ulonglong uVar10;
  
  uVar10 = (ulonglong)_tls_index;
  if (param_2 != '\0') {
    FUN_144b3d420(local_38);
    local_res18 = local_38[0];
    if (local_38[0] != 0) {
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8);
      bVar9 = 0;
      if (param_1 != 0xff) {
        bVar9 = param_1;
      }
      pcVar1 = (char *)(lVar3 + 0x114);
      plVar2 = (longlong *)(lVar3 + 0xf0);
      do {
        lVar7 = local_res18;
        lVar3 = *(longlong *)(local_res18 + 0x3d8);
        if (*pcVar1 == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar5 = *plVar2;
        if (lVar5 == 0) {
          if (*pcVar1 == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar5 = FUN_144b3f4a0();
          *plVar2 = lVar5;
        }
        lVar6 = FUN_144f63780(lVar5 + 8);
        uVar10 = 0;
        do {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar7 + 0x3d0) + 8 + (uVar10 & 0xff) * 8);
          if ((char)uVar10 == '\a') {
            *(undefined8 *)(lVar6 + 8) = uVar4;
            *(undefined8 *)(lVar6 + 0x10) = uVar4;
            *(undefined8 *)(lVar6 + 0x18) = uVar4;
            *(undefined8 *)(lVar6 + 0x20) = uVar4;
            *(undefined8 *)(lVar6 + 0x28) = uVar4;
            *(undefined8 *)(lVar6 + 0x30) = uVar4;
          }
          else {
            *(undefined8 *)(lVar6 + 8 + (uVar10 & 0xff) * 8) = uVar4;
          }
          uVar11 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar11;
        } while ((int)uVar11 < 6);
        if (bVar9 < 0x20) {
          uVar10 = (ulonglong)bVar9;
          lVar7 = (uVar10 + 1) * 0xe8 + lVar3;
          if (param_1 == 0xff) {
            while( true ) {
              FUN_144f651a0(lVar7);
              bVar8 = (char)uVar10 + 1;
              uVar10 = (ulonglong)bVar8;
              if (0x1f < bVar8) break;
              lVar7 = ((ulonglong)bVar8 + 1) * 0xe8 + lVar3;
            }
          }
          else {
            FUN_144f65000(lVar7,0xffffffffffffffff);
          }
        }
        FUN_144f63820(lVar5 + 8);
        FUN_144b3d450(&local_res18);
      } while (local_res18 != 0);
      uVar10 = (ulonglong)_tls_index;
    }
    FUN_144b3d410(local_38);
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8);
  if (*(char *)(lVar3 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar3 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar3 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar3 + 0xf0) = lVar7;
  }
  lVar3 = *(longlong *)(lVar7 + 0x3d8);
  bVar9 = 0;
  if (param_1 != 0xff) {
    bVar9 = param_1;
  }
  if (bVar9 < 0x20) {
    uVar10 = (ulonglong)bVar9;
    lVar7 = (uVar10 + 1) * 0xe8 + lVar3;
    if (param_1 == 0xff) {
      while( true ) {
        FUN_144f651a0(lVar7);
        bVar9 = (char)uVar10 + 1;
        uVar10 = (ulonglong)bVar9;
        if (0x1f < bVar9) break;
        lVar7 = ((ulonglong)bVar9 + 1) * 0xe8 + lVar3;
      }
    }
    else {
      FUN_144f65000(lVar7,0xffffffffffffffff);
    }
  }
  return;
}



// FUNCTION 144f65cf0 FUN_144f65cf0 body=45 status=ok
// SIG undefined FUN_144f65cf0(void)

undefined4 FUN_144f65cf0(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if (*param_1 == param_2) {
    return 1;
  }
  if (((*param_1 != 0) && (param_2 != 0)) && (iVar1 = FUN_144bfb930(), iVar1 == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144f65d20 FUN_144f65d20 body=34 status=ok
// SIG undefined FUN_144f65d20(void)

undefined8 FUN_144f65d20(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == param_2) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = FUN_144bfb930();
  return uVar1;
}



// FUNCTION 144f65d50 FUN_144f65d50 body=30 status=ok
// SIG undefined FUN_144f65d50(void)

void FUN_144f65d50(void)

{
  FUN_144bfc170(0xdeadf00d,"Memory\\Impl\\hkDefaultMemoryImpl.cpp",0x24,"Out of memory");
  return;
}



// FUNCTION 144f65d70 FUN_144f65d70 body=482 status=ok
// SIG undefined FUN_144f65d70(void)

undefined8 * FUN_144f65d70(byte param_1,ulonglong *param_2,uint param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 *local_50;
  byte local_48;
  uint local_44;
  ulonglong local_40;
  ulonglong *local_38;
  code *local_30;
  
  uVar1 = *param_2;
  uVar7 = (ulonglong)param_3;
  if (uVar1 == 0) {
    return (undefined8 *)0x0;
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar5 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar5 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar5 + 0xf0) = lVar3;
  }
  plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x3d0) + 8 + (ulonglong)param_1 * 8);
  if (plVar2[1] == 0) {
    if (param_3 < 0x11) {
      *param_2 = uVar1 + 0x1f & 0xfffffffffffffff0;
      puVar4 = (undefined8 *)(**(code **)(*plVar2 + 8))();
      if (puVar4 == (undefined8 *)0x0) {
        FUN_144f65d50();
        *param_2 = 0;
      }
      *(int *)(puVar4 + 1) = (int)(*param_2 >> 4);
      *puVar4 = 0;
      *(undefined2 *)((longlong)puVar4 + 0xe) = 0;
      *(ushort *)((longlong)puVar4 + 0xc) = (ushort)param_1;
      *param_2 = *param_2 - 0x10;
      return puVar4 + 2;
    }
    *param_2 = (uVar1 + 0xf & 0xfffffffffffffff0) + uVar7;
    lVar5 = (**(code **)(*plVar2 + 8))(plVar2,param_2);
    if (lVar5 == 0) {
      FUN_144f65d50();
      *param_2 = 0;
    }
    puVar4 = (undefined8 *)(uVar7 + 0xf + lVar5 & -uVar7);
    uVar6 = (int)puVar4 - (int)lVar5;
    *(int *)(puVar4 + -1) = (int)(*param_2 >> 4);
    puVar4[-2] = 0;
    *(undefined2 *)((longlong)puVar4 - 2) = 0;
    *(ushort *)((longlong)puVar4 - 4) = (param_1 - 0x10) + (short)uVar6;
    *param_2 = *param_2 - (ulonglong)uVar6;
    return puVar4;
  }
  local_68 = 0xffffffffffffffff;
  local_60 = 0;
  local_58 = 0;
  local_44 = 0x10;
  if (0x10 < param_3) {
    local_44 = param_3;
  }
  *param_2 = (uVar1 + 0xf & 0xfffffffffffffff0) + (ulonglong)local_44;
  local_50 = &local_68;
  local_30 = FUN_144f63920;
  local_48 = param_1;
  local_40 = uVar1;
  local_38 = param_2;
  puVar4 = (undefined8 *)
           (**(code **)(*(longlong *)plVar2[1] + 8))((longlong *)plVar2[1],&local_50,0);
  return puVar4;
}



// FUNCTION 144f65f60 FUN_144f65f60 body=404 status=ok
// SIG undefined FUN_144f65f60(void)

void FUN_144f65f60(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 *local_40;
  byte local_38;
  longlong local_30;
  code *local_28;
  
  if (param_2 != 0) {
    puVar1 = (ulonglong *)(param_2 + -0x10);
    bVar6 = *(byte *)(param_2 + -4) & 0xf;
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)(lVar2 + 0xf0);
    if (lVar5 == 0) {
      if (*(char *)(lVar2 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar5 = FUN_144b3f4a0();
      *(longlong *)(lVar2 + 0xf0) = lVar5;
    }
    plVar7 = *(longlong **)(*(longlong *)(lVar5 + 0x3d0) + 8 + (ulonglong)bVar6 * 8);
    if (*(short *)(param_2 + -2) != 0) {
      FUN_144f63a60(plVar7,bVar6,puVar1);
    }
    plVar3 = (longlong *)*puVar1;
    local_38 = bVar6;
    local_30 = param_2;
    if (((ulonglong)plVar3 & 1) == 0) {
      plVar4 = (longlong *)plVar7[1];
      if (plVar4 == (longlong *)0x0) {
        if (plVar3 != (longlong *)0x0) {
          plVar7 = plVar3;
        }
        (**(code **)(*plVar7 + 0x10))
                  (plVar7,(longlong)puVar1 -
                          ((ulonglong)*(ushort *)(param_2 + -4) & 0xfffffffffffffff0),
                   (ulonglong)*(uint *)(param_2 + -8) << 4);
      }
      else {
        local_40 = &local_58;
        local_58 = 0xffffffffffffffff;
        local_50 = 0;
        local_28 = FUN_144f639d0;
        local_48 = 0;
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_40,0);
      }
    }
    else {
      local_40 = &local_58;
      local_58 = 0xffffffffffffffff;
      local_50 = 0;
      local_28 = FUN_144f639d0;
      local_48 = 0;
      FUN_144f63cd0(plVar7,&local_40,0);
    }
  }
  return;
}



// FUNCTION 144f66100 thunk_FUN_144f50f00 body=5 status=ok
// SIG undefined thunk_FUN_144f50f00(void)

ulonglong thunk_FUN_144f50f00(void)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  
  uVar1 = rdtsc();
  return CONCAT44((int)((ulonglong)in_RAX >> 0x20),(int)uVar1) | uVar1 & 0xffffffff00000000;
}



// FUNCTION 144f66110 FUN_144f66110 body=214 status=ok
// SIG undefined FUN_144f66110(void)

undefined4 *
FUN_144f66110(undefined8 param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong local_res10;
  
  iVar1 = param_3[2];
  iVar2 = *param_3;
  FUN_144beff00(param_4,&local_res10);
  iVar5 = FUN_144beec90(local_res10);
  FUN_144beff00(param_4,&local_res10);
  uVar3 = *(undefined8 *)param_3;
  uVar7 = 0;
  uVar6 = 0;
  if (local_res10 != 0) {
    uVar6 = FUN_144beec90(local_res10);
    uVar7 = FUN_144befdb0(local_res10);
    if ((uVar7 & 1) != 0) {
      FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
    }
  }
  *param_5 = uVar3;
  param_5[1] = local_res10;
  *(int *)(param_5 + 2) = (iVar1 - iVar2) / iVar5;
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar6;
  uVar4 = param_5[3];
  param_5[3] = uVar7;
  if ((uVar4 & 1) != 0) {
    FUN_144be6b30(uVar4 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f661f0 FUN_144f661f0 body=10 status=ok
// SIG undefined FUN_144f661f0(void)

undefined4 * FUN_144f661f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f66200 FUN_144f66200 body=10 status=ok
// SIG undefined FUN_144f66200(void)

undefined4 * FUN_144f66200(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f66210 FUN_144f66210 body=87 status=ok
// SIG undefined FUN_144f66210(void)

undefined8 FUN_144f66210(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144f66270 FUN_144f66270 body=2677 status=ok
// SIG undefined FUN_144f66270(void)

undefined8 *
FUN_144f66270(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  code *pcVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  longlong lVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 local_3b8 [4];
  uint local_3b4;
  uint local_3b0 [2];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  code *local_398;
  code *pcStack_390;
  longlong local_388;
  uint local_380;
  code *local_378;
  undefined8 uStack_370;
  code *local_368;
  code *local_358;
  undefined8 uStack_350;
  longlong *local_348;
  int local_340;
  longlong local_338;
  longlong *local_330;
  int local_328;
  longlong *local_320;
  code *pcStack_318;
  code *local_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  longlong local_300;
  longlong local_2f8;
  longlong lStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  longlong *local_2d8;
  int local_2d0;
  undefined1 local_2c8 [160];
  undefined8 local_228 [20];
  undefined1 local_188 [336];
  code *pcVar17;
  
  pcVar8 = (code *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_145304e90(param_2,&local_348,&DAT_149971580);
  iVar11 = 0;
  if (-1 < *(int *)(*local_348 + 0x10 + (longlong)local_340 * 0x18)) {
    FUN_144bdf360(local_228);
    FUN_144beee90(param_3,local_228,0,0);
    lVar12 = (longlong)*(int *)(*local_348 + 0x10 + (longlong)local_340 * 0x18);
    lVar4 = *(longlong *)(local_348[0x1a] + lVar12 * 0x10);
    cVar2 = FUN_144bfbf10(lVar4,*(longlong *)(local_348[0x1a] + 8 + lVar12 * 0x10) - lVar4,
                          local_228[0]);
    if (cVar2 == '\0') {
      plVar6 = (longlong *)
               (local_348[0x1a] +
               (longlong)*(int *)(*local_348 + 0x10 + (longlong)local_340 * 0x18) * 0x10);
      local_2f8 = *plVar6;
      lStack_2f0 = plVar6[1];
      puVar3 = (undefined8 *)FUN_144bdfbf0(local_2c8,&local_2f8);
      lVar4 = FUN_144beeba0(*puVar3);
      local_res18 = lVar4;
      FUN_144bdf2f0(local_2c8);
      if (lVar4 == 0) {
        FUN_145304e90(param_2,&local_320,"builtinType");
        iVar14 = *(int *)(*local_320 + 0x10 + (longlong)(int)pcStack_318 * 0x18);
        if (iVar14 < 0) {
LAB_144f663f5:
          if ((1 < DAT_14c7989b0) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
            cVar2 = FUN_144bdbf80();
            lVar4 = (longlong)*(int *)(*local_348 + 0x10 + (longlong)local_340 * 0x18);
            if (cVar2 == '\0') {
              puVar3 = (undefined8 *)(local_348[0x1a] + lVar4 * 0x10);
              local_2e8 = *puVar3;
              uStack_2e0 = puVar3[1];
              uVar5 = FUN_144bdc640(local_2c8,&DAT_14c798960);
              local_3a8 = (code *)0x1;
              uStack_3a0 = FUN_144c19e40;
              local_378 = (code *)&DAT_00000001;
              uStack_370 = FUN_144c19e40;
              local_398 = (code *)&local_2e8;
              local_368 = (code *)&local_2e8;
              lVar4 = FUN_144bdc480(uVar5,"Invalid value type name: \'{}\'",&local_378,0);
              *(char **)(lVar4 + 0x38) = "Reflect\\Attributes\\hkAttributes.cpp";
              *(undefined8 *)(lVar4 + 0x40) = 0xde;
              FUN_144bdc690(local_2c8);
            }
            else {
              plVar6 = (longlong *)(local_348[0x1a] + lVar4 * 0x10);
              local_2f8 = *plVar6;
              lStack_2f0 = plVar6[1];
              uVar5 = FUN_144bdc810(local_188,&DAT_14c798960,2);
              local_3a8 = (code *)0x1;
              uStack_3a0 = FUN_144c19e40;
              local_398 = (code *)&local_2f8;
              local_378 = (code *)&DAT_00000001;
              uStack_370 = FUN_144c19e40;
              local_368 = local_398;
              lVar4 = FUN_144bdc480(uVar5,"Invalid value type name: \'{}\'",&local_378,0);
              *(char **)(lVar4 + 0x38) = "Reflect\\Attributes\\hkAttributes.cpp";
              *(undefined8 *)(lVar4 + 0x40) = 0xde;
              FUN_144bdc8a0(local_188);
            }
          }
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          FUN_144bdf2f0(local_228);
          return param_1;
        }
        puVar3 = (undefined8 *)(local_320[0x1a] + (longlong)iVar14 * 0x10);
        local_2e8 = *puVar3;
        uStack_2e0 = puVar3[1];
        puVar3 = (undefined8 *)FUN_144bdfbf0(local_188,&local_2e8);
        lVar4 = FUN_144beeba0(*puVar3);
        local_res18 = lVar4;
        FUN_144bdf2f0(local_188);
        if (lVar4 == 0) goto LAB_144f663f5;
      }
    }
    FUN_144bdf2f0(local_228);
  }
  local_3b8[0] = 0;
  FUN_145304e90(param_2,&local_330,"strict");
  if (-1 < *(int *)(*local_330 + 0x10 + (longlong)local_328 * 0x18)) {
    local_398 = (code *)0x0;
    plVar6 = (longlong *)FUN_144beec10(&local_358,local_3b8,&DAT_14c6da480);
    uStack_3a0 = (code *)plVar6[1];
    local_3a8 = (code *)*plVar6;
    pcVar7 = pcVar8;
    if (uStack_3a0 != (code *)0x0) {
      pcVar7 = (code *)FUN_144befdb0();
    }
    if (((ulonglong)pcVar7 & 1) != 0) {
      FUN_144be6b20((ulonglong)pcVar7 & 0xfffffffffffffffe);
    }
    if (((ulonglong)local_398 & 1) != 0) {
      uVar9 = (ulonglong)local_398 & 0xfffffffffffffffe;
      local_398 = pcVar7;
      FUN_144be6b30(uVar9);
      pcVar7 = local_398;
    }
    local_398 = pcVar7;
    puVar3 = (undefined8 *)
             (local_330[0x1a] +
             (longlong)*(int *)(*local_330 + 0x10 + (longlong)local_328 * 0x18) * 0x10);
    local_378 = (code *)*puVar3;
    uStack_370 = (code *)puVar3[1];
    FUN_144becdf0(&local_3a8,local_3b0,&local_378);
    if (((ulonglong)local_398 & 1) != 0) {
      FUN_144be6b30((ulonglong)local_398 & 0xfffffffffffffffe);
    }
    if ((int)local_3b0[0] < 0) {
      if ((1 < DAT_14c7989b0) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
        cVar2 = FUN_144bdbf80();
        lVar4 = (longlong)*(int *)(*local_330 + 0x10 + (longlong)local_328 * 0x18);
        if (cVar2 == '\0') {
          puVar3 = (undefined8 *)(local_330[0x1a] + lVar4 * 0x10);
          local_2e8 = *puVar3;
          uStack_2e0 = puVar3[1];
          uVar5 = FUN_144bdc640(local_2c8,&DAT_14c798960);
          local_3a8 = (code *)0x1;
          uStack_3a0 = FUN_144c19e40;
          local_320 = (longlong *)0x1;
          pcStack_318 = FUN_144c19e40;
          local_398 = (code *)&local_2e8;
          local_310 = (code *)&local_2e8;
          lVar4 = FUN_144bdc480(uVar5,"Invalid value for \'strict\' field: \'{}\'",&local_320,0);
          *(char **)(lVar4 + 0x38) = "Reflect\\Attributes\\hkAttributes.cpp";
          *(undefined8 *)(lVar4 + 0x40) = 0xed;
          FUN_144bdc690(local_2c8);
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          return param_1;
        }
        plVar6 = (longlong *)(local_330[0x1a] + lVar4 * 0x10);
        local_2f8 = *plVar6;
        lStack_2f0 = plVar6[1];
        uVar5 = FUN_144bdc810(local_188,&DAT_14c798960,2);
        local_3a8 = (code *)0x1;
        uStack_3a0 = FUN_144c19e40;
        local_398 = (code *)&local_2f8;
        local_320 = (longlong *)0x1;
        pcStack_318 = FUN_144c19e40;
        local_310 = local_398;
        lVar4 = FUN_144bdc480(uVar5,"Invalid value for \'strict\' field: \'{}\'",&local_320,0);
        *(char **)(lVar4 + 0x38) = "Reflect\\Attributes\\hkAttributes.cpp";
        *(undefined8 *)(lVar4 + 0x40) = 0xed;
        FUN_144bdc8a0(local_188);
      }
      goto LAB_144f667b8;
    }
  }
  FUN_145304e90(param_2,&local_2d8,"values");
  iVar14 = *(int *)(*local_2d8 + 0x10 + (longlong)local_2d0 * 0x18);
  if (-1 < iVar14) {
    local_338 = (longlong)iVar14 * 0x10 + local_2d8[0x1a];
    local_380 = 0x80000000;
    local_358 = (code *)0x0;
    local_3b0[0] = 0x80000000;
    uStack_350 = (code *)&DAT_8000000000000000;
    iVar14 = (int)(((longlong)*(int *)(*local_2d8 + (longlong)local_2d0 * 0x18 + 0x14) * 0x10 +
                   local_2d8[0x1a]) - local_338 >> 4);
    pcVar7 = pcVar8;
    pcVar13 = pcVar8;
    pcVar17 = pcVar8;
    if (0 < iVar14) {
      FUN_144f684a0(&local_358,&PTR_vftable_14c6e47c0,(longlong)iVar14);
      local_378 = (code *)0x0;
      uStack_370 = (code *)&DAT_8000000000000000;
      FUN_144f684a0(&local_378,&PTR_vftable_14c6e47c0,(longlong)iVar14);
      local_3b0[0] = uStack_350._4_4_;
      pcVar7 = local_378;
      pcVar13 = local_358;
      pcVar17 = (code *)((ulonglong)uStack_350 & 0xffffffff);
      iVar11 = (int)uStack_370;
      local_380 = uStack_370._4_4_;
    }
    uVar16 = (uint)pcVar17;
    local_3b4 = 0;
    local_358 = pcVar7;
    if (0 < iVar14) {
      do {
        pauVar10 = (undefined1 (*) [16])((longlong)(int)pcVar8 * 0x10 + local_338);
        pcVar8 = (code *)FUN_144f5a370(pauVar10,0x3d,0);
        if (pcVar8 == (code *)0x0) {
          auVar1 = *pauVar10;
          uVar18 = auVar1._0_4_;
          uVar19 = auVar1._4_4_;
          uVar20 = auVar1._8_4_;
          uVar21 = auVar1._12_4_;
          pcVar8 = *(code **)(*pauVar10 + 8);
          local_398 = (code *)0x0;
          pcStack_390 = (code *)0x0;
          pcVar7 = auVar1._0_8_;
        }
        else {
          pcVar7 = *(code **)*pauVar10;
          local_398 = pcVar8 + 1;
          pcStack_390 = *(code **)(*pauVar10 + 8);
          local_3a8._0_4_ = SUB84(pcVar7,0);
          local_3a8._4_4_ = (undefined4)((ulonglong)pcVar7 >> 0x20);
          uStack_3a0._0_4_ = SUB84(pcVar8,0);
          uStack_3a0._4_4_ = (undefined4)((ulonglong)pcVar8 >> 0x20);
          uVar18 = (undefined4)local_3a8;
          uVar19 = local_3a8._4_4_;
          uVar20 = (undefined4)uStack_3a0;
          uVar21 = uStack_3a0._4_4_;
          local_3a8 = pcVar7;
          uStack_3a0 = pcVar8;
        }
        if ((pcVar7 == pcVar8) || (local_398 == pcStack_390)) {
          if ((1 < DAT_14c7989b0) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
            cVar2 = FUN_144bdbf80();
            local_388 = (longlong)(int)local_3b4 * 0x10 + local_338;
            local_300 = local_388;
            if (cVar2 == '\0') {
              uVar5 = FUN_144bdc640(local_2c8);
              local_3a8 = (code *)0x2;
              uStack_3a0 = FUN_144f50970;
              local_398 = (code *)&local_3b4;
              pcStack_390 = FUN_144c19e40;
              local_320 = (longlong *)0x2;
              pcStack_318 = FUN_144f50970;
              uStack_308 = 0x44c19e40;
              uStack_304 = 1;
              local_310 = local_398;
              lVar4 = FUN_144bdc480(uVar5,"Element {} is not a valid \"name = value\" pair (\'{}\')"
                                    ,&local_320,0);
              *(char **)(lVar4 + 0x38) = "Reflect\\Attributes\\hkAttributes.cpp";
              *(undefined8 *)(lVar4 + 0x40) = 0x105;
              FUN_144bdc690(local_2c8);
            }
            else {
              uVar5 = FUN_144bdc810(local_188,&DAT_14c798960,2);
              local_3a8 = (code *)0x2;
              uStack_3a0 = FUN_144f50970;
              local_398 = (code *)&local_3b4;
              pcStack_390 = FUN_144c19e40;
              local_320 = (longlong *)0x2;
              pcStack_318 = FUN_144f50970;
              uStack_308 = 0x44c19e40;
              uStack_304 = 1;
              local_310 = local_398;
              lVar4 = FUN_144bdc480(uVar5,"Element {} is not a valid \"name = value\" pair (\'{}\')"
                                    ,&local_320,0);
              *(char **)(lVar4 + 0x38) = "Reflect\\Attributes\\hkAttributes.cpp";
              *(undefined8 *)(lVar4 + 0x40) = 0x105;
              FUN_144bdc8a0(local_188);
            }
          }
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          if (((int)local_380 < 0) || (pcVar7 = local_358, local_358 == (code *)0x0))
          goto LAB_144f66b08;
          goto LAB_144f66aeb;
        }
        iVar15 = (int)pcVar17;
        uVar16 = iVar15 + 1;
        pcVar17 = (code *)(ulonglong)uVar16;
        pcVar8 = pcVar13 + (longlong)iVar15 * 0x10;
        if (pcVar8 != (code *)0x0) {
          *(undefined4 *)pcVar8 = uVar18;
          *(undefined4 *)(pcVar8 + 4) = uVar19;
          *(undefined4 *)(pcVar8 + 8) = uVar20;
          *(undefined4 *)(pcVar8 + 0xc) = uVar21;
        }
        lVar4 = (longlong)iVar11;
        iVar11 = iVar11 + 1;
        pcVar8 = local_358 + lVar4 * 0x10;
        if (pcVar8 != (code *)0x0) {
          *(code **)pcVar8 = local_398;
          *(code **)(pcVar8 + 8) = pcStack_390;
        }
        local_3b4 = local_3b4 + 1;
        pcVar8 = (code *)(ulonglong)local_3b4;
        pcVar7 = local_358;
      } while ((int)local_3b4 < iVar14);
    }
    uStack_350 = pcVar7 + (longlong)iVar11 * 0x10;
    uStack_370 = pcVar13 + (longlong)(int)uVar16 * 0x10;
    local_378 = pcVar13;
    local_358 = pcVar7;
    FUN_144f66cf0(param_1,&local_378,&local_358,local_res18,local_3b8[0],local_res20);
    if ((-1 < (int)local_380) && (pcVar7 != (code *)0x0)) {
LAB_144f66aeb:
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,pcVar7,(ulonglong)(local_380 & 0x7fffffff) << 4);
    }
LAB_144f66b08:
    if ((int)local_3b0[0] < 0) {
      return param_1;
    }
    if (pcVar13 == (code *)0x0) {
      return param_1;
    }
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,pcVar13,(ulonglong)(local_3b0[0] & 0x7fffffff) << 4);
    return param_1;
  }
  if ((1 < DAT_14c7989b0) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
    cVar2 = FUN_144bdbf80();
    if (cVar2 == '\0') {
      uVar5 = FUN_144bdc640(local_2c8);
      local_res18 = 0;
      lVar4 = FUN_144bdc480(uVar5,"Missing presets values",&local_res18,0);
      *(char **)(lVar4 + 0x38) = "Reflect\\Attributes\\hkAttributes.cpp";
      *(undefined8 *)(lVar4 + 0x40) = 0xf5;
      FUN_144bdc690(local_2c8);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return param_1;
    }
    uVar5 = FUN_144bdc810(local_188,&DAT_14c798960,2);
    local_res18 = 0;
    lVar4 = FUN_144bdc480(uVar5,"Missing presets values",&local_res18,0);
    *(char **)(lVar4 + 0x38) = "Reflect\\Attributes\\hkAttributes.cpp";
    *(undefined8 *)(lVar4 + 0x40) = 0xf5;
    FUN_144bdc8a0(local_188);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return param_1;
  }
LAB_144f667b8:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 144f66cf0 FUN_144f66cf0 body=597 status=ok
// SIG undefined FUN_144f66cf0(void)

longlong *
FUN_144f66cf0(longlong *param_1,undefined4 *param_2,longlong *param_3,code *param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  uint local_res8 [2];
  int local_res10 [2];
  undefined8 local_208;
  code *local_200;
  uint *local_1f8;
  code *local_1f0;
  undefined4 *local_1e8;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_144f682d0(local_1d8,&local_1d8,param_4,param_5,param_6);
  lVar6 = *param_3;
  local_res8[0] = 0;
  lVar2 = *(longlong *)(*param_1 + 0x20);
  iVar7 = (int)(param_3[1] - lVar6 >> 4);
  puVar4 = (uint *)0x0;
  if (0 < iVar7) {
    do {
      puVar1 = (undefined4 *)(lVar6 + (longlong)(int)puVar4 * 0x10);
      local_1d8 = *puVar1;
      uStack_1d4 = puVar1[1];
      uStack_1d0 = puVar1[2];
      uStack_1cc = puVar1[3];
      local_208 = *(undefined8 *)(lVar2 + (longlong)(int)puVar4 * 8);
      puVar4 = (uint *)0x0;
      local_200 = param_4;
      if (param_4 != (code *)0x0) {
        puVar4 = (uint *)FUN_144befdb0(param_4);
      }
      local_1f8 = puVar4;
      if (((ulonglong)puVar4 & 1) != 0) {
        FUN_144be6b20((ulonglong)puVar4 & 0xfffffffffffffffe);
      }
      FUN_144becdf0(&local_208,local_res10,&local_1d8);
      if (((ulonglong)local_1f8 & 1) != 0) {
        FUN_144be6b30((ulonglong)local_1f8 & 0xfffffffffffffffe);
      }
      if (local_res10[0] < 0) {
        if ((1 < DAT_14c7989b0) || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') {
            uVar5 = FUN_144bdc640(local_1c8);
            local_208 = 2;
            local_200 = FUN_144f50970;
            local_1f8 = local_res8;
            local_1f0 = FUN_144c19e40;
            local_1e8 = &local_1d8;
            lVar6 = FUN_144bdc480(uVar5,"Invalid value for element {}: \'{}\'",&local_208,0);
            *(char **)(lVar6 + 0x38) = "Reflect\\Attributes\\hkAttributes.cpp";
            *(undefined8 *)(lVar6 + 0x40) = 0x1a7;
            FUN_144bdc690(local_1c8);
          }
          else {
            uVar5 = FUN_144bdc810(local_178,&DAT_14c798960,2);
            local_208 = 2;
            local_200 = FUN_144f50970;
            local_1f8 = local_res8;
            local_1f0 = FUN_144c19e40;
            local_1e8 = &local_1d8;
            lVar6 = FUN_144bdc480(uVar5,"Invalid value for element {}: \'{}\'",&local_208,0);
            *(char **)(lVar6 + 0x38) = "Reflect\\Attributes\\hkAttributes.cpp";
            *(undefined8 *)(lVar6 + 0x40) = 0x1a7;
            FUN_144bdc8a0(local_178);
          }
        }
        FUN_144becfe0(param_1,3,1);
        return param_1;
      }
      local_res8[0] = local_res8[0] + 1;
      puVar4 = (uint *)(ulonglong)local_res8[0];
    } while ((int)local_res8[0] < iVar7);
  }
  return param_1;
}



// FUNCTION 144f66f50 FUN_144f66f50 body=305 status=ok
// SIG undefined FUN_144f66f50(void)

undefined8 * FUN_144f66f50(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  longlong local_10;
  ulonglong uVar8;
  
  uVar4 = FUN_144beee40(*(undefined8 *)(param_1 + 8));
  iVar3 = FUN_144bfbd00(uVar4,0x3a);
  local_18 = FUN_144beee40(*(undefined8 *)(param_1 + 8));
  local_28 = *param_3;
  uStack_20 = (undefined4)param_3[1];
  uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_10 = local_18 + (iVar3 + 1);
  if ((local_18 != local_10) && (cVar2 = FUN_144f5a5d0(&local_28,&local_18), cVar2 != '\0')) {
    local_28 = local_28 + ((int)local_10 - (int)local_18);
  }
  uVar5 = 0;
  uVar6 = uVar5;
  uVar8 = uVar5;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      cVar2 = FUN_144bfbf10(local_28,CONCAT44(uStack_1c,uStack_20) - local_28,
                            *(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0x18)));
      if (cVar2 != '\0') {
        lVar1 = *(longlong *)(param_1 + 8);
        *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar8 * 8);
        param_2[1] = lVar1;
        if (lVar1 != 0) {
          uVar5 = FUN_144befdb0();
        }
        param_2[2] = uVar5;
        if ((uVar5 & 1) == 0) {
          return param_2;
        }
        FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
        return param_2;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar6 = uVar6 + 8;
    } while ((int)uVar7 < *(int *)(param_1 + 0x10));
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 144f67090 FUN_144f67090 body=1063 status=ok
// SIG undefined FUN_144f67090(void)

longlong * FUN_144f67090(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int local_res8 [2];
  longlong *local_res10;
  undefined1 local_res20 [8];
  longlong local_f8;
  undefined4 *local_f0;
  int local_e8;
  uint local_e4;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  longlong lStack_b0;
  ulonglong local_a8;
  undefined4 *local_98;
  undefined1 local_90 [8];
  undefined4 *local_88;
  longlong local_80;
  undefined1 local_78;
  ulonglong local_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_res8[0] = 0;
  lVar15 = *(longlong *)(param_1 + 8);
  local_f8 = 0;
  local_res10 = param_2;
  puVar7 = (undefined4 *)FUN_144bef800(lVar15,local_res8);
  lVar8 = 0;
  if (((byte)*puVar7 & 0x1f) == 4) {
    lVar8 = lVar15;
  }
  if (lVar8 != 0) {
    uVar9 = FUN_144beee40(*(undefined8 *)(param_1 + 8));
    iVar6 = FUN_144bfbd00(uVar9,0x3a);
    local_e0 = FUN_144beee40(*(undefined8 *)(param_1 + 8));
    local_d8 = local_e0 + (iVar6 + 1);
    local_f0 = (undefined4 *)0x0;
    local_e8 = 0;
    local_e4 = 0x80000000;
    FUN_144f5a770(param_3,&local_f0,0x7c);
    local_88 = local_f0 + (longlong)local_e8 * 4;
    local_98 = local_f0;
    if (local_f0 != local_88) {
      do {
        local_50 = *local_98;
        uStack_4c = local_98[1];
        uStack_48 = local_98[2];
        uStack_44 = local_98[3];
        FUN_144f5a210(&local_50,&local_c8);
        if (local_e0 != local_d8) {
          cVar5 = FUN_144f5a5d0(&local_c8,&local_e0);
          if (cVar5 != '\0') {
            local_b8 = ((int)local_d8 - (int)local_e0) + local_c8;
            lStack_b0 = CONCAT44(uStack_bc,uStack_c0);
            local_c8 = local_b8;
          }
        }
        local_res8[0] = 0;
        if (0 < *(int *)(param_1 + 0x10)) {
          lVar15 = 0;
          do {
            cVar5 = FUN_144bfbf10(local_c8,CONCAT44(uStack_bc,uStack_c0) - local_c8,
                                  *(undefined8 *)(lVar15 + *(longlong *)(param_1 + 0x18)));
            if (cVar5 != '\0') {
              lVar8 = *(longlong *)(param_1 + 8);
              lVar1 = *(longlong *)(lVar15 + *(longlong *)(param_1 + 0x20));
              if (lVar8 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = FUN_144befdb0(lVar8);
              }
              if ((uVar10 & 1) != 0) {
                FUN_144be6b20(uVar10 & 0xfffffffffffffffe);
              }
              local_68 = 0;
              lStack_60 = 0;
              lVar13 = lStack_60;
              uVar12 = 0;
              lVar14 = local_68;
              if (lVar8 != 0) {
                puVar7 = (undefined4 *)FUN_144bef800(lVar8,local_res20);
                lVar13 = lStack_60;
                lVar14 = local_68;
                if ((((byte)*puVar7 & 0x1f) == 4) &&
                   (lVar13 = lVar8, uVar12 = uVar10, lVar14 = lVar1, (uVar10 & 1) != 0)) {
                  FUN_144be6b20(uVar10 & 0xfffffffffffffffe);
                }
              }
              if ((uVar10 & 1) != 0) {
                FUN_144be6b30(uVar10 & 0xfffffffffffffffe);
              }
              if (lVar14 != 0) {
                local_80 = 0;
                local_78 = 0;
                (**(code **)(*(longlong *)(uVar12 & 0xfffffffffffffffe) + 0x30))
                          ((longlong *)(uVar12 & 0xfffffffffffffffe),local_90,lVar14,lVar13,
                           &local_80);
                local_f8 = local_f8 + local_80;
              }
              if ((uVar12 & 1) != 0) {
                FUN_144be6b30(uVar12 & 0xfffffffffffffffe);
              }
            }
            lVar15 = lVar15 + 8;
            local_res8[0] = local_res8[0] + 1;
          } while (local_res8[0] < *(int *)(param_1 + 0x10));
        }
        local_98 = local_98 + 4;
        param_2 = local_res10;
      } while (local_98 != local_88);
    }
    local_e8 = 0;
    if ((-1 < (int)local_e4) && (local_f0 != (undefined4 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_f0,(ulonglong)(local_e4 & 0x7fffffff) << 4);
    }
  }
  if (local_f8 == 0) {
    plVar11 = &local_68;
    lStack_60 = 0;
    local_58 = 0;
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
    lVar15 = 0;
  }
  else {
    local_a8 = 0;
    bVar4 = true;
    bVar3 = true;
    bVar2 = false;
    plVar11 = (longlong *)FUN_144beec10(&local_50,&local_f8,&DAT_14c6da780);
    lStack_b0 = plVar11[1];
    local_b8 = *plVar11;
    if (lStack_b0 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_144befdb0();
    }
    if ((uVar10 & 1) != 0) {
      FUN_144be6b20(uVar10 & 0xfffffffffffffffe);
    }
    if ((local_a8 & 1) != 0) {
      uVar12 = local_a8 & 0xfffffffffffffffe;
      local_a8 = uVar10;
      FUN_144be6b30(uVar12);
      uVar10 = local_a8;
    }
    local_a8 = uVar10;
    plVar11 = (longlong *)FUN_144becf10(&local_b8,&local_80);
    lVar15 = *plVar11;
  }
  *param_2 = lVar15;
  param_2[1] = plVar11[1];
  param_2[2] = plVar11[2];
  plVar11[2] = 0;
  *plVar11 = 0;
  plVar11[1] = 0;
  if ((bVar2) && ((local_58 & 1) != 0)) {
    FUN_144be6b30(local_58 & 0xfffffffffffffffe);
  }
  if ((bVar3) && ((local_70 & 1) != 0)) {
    FUN_144be6b30(local_70 & 0xfffffffffffffffe);
  }
  if ((bVar4) && ((local_a8 & 1) != 0)) {
    FUN_144be6b30(local_a8 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144f674c0 FUN_144f674c0 body=196 status=ok
// SIG undefined FUN_144f674c0(void)

undefined8 FUN_144f674c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar3 = 0;
    do {
      local_20 = *(longlong *)(param_1 + 8);
      local_28 = *(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x20));
      if (local_20 == 0) {
        local_18 = 0;
      }
      else {
        local_18 = FUN_144befdb0();
      }
      if ((local_18 & 1) != 0) {
        FUN_144be6b20(local_18 & 0xfffffffffffffffe);
      }
      iVar1 = FUN_144bece60(param_2,&local_28);
      if ((local_18 & 1) != 0) {
        FUN_144be6b30(local_18 & 0xfffffffffffffffe);
      }
      if (iVar1 == 0) {
        return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 8);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
  return 0;
}



// FUNCTION 144f67590 FUN_144f67590 body=1377 status=ok
// SIG undefined FUN_144f67590(void)

undefined8 FUN_144f67590(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  code *pcVar8;
  code *pcVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  int local_res8 [2];
  undefined1 local_res20 [8];
  ulonglong local_2e8;
  ulonglong local_2e0;
  char local_2d8;
  undefined8 *local_2c8;
  code *pcStack_2c0;
  ulonglong local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  ulonglong *local_2a8;
  longlong local_298;
  code *pcStack_290;
  ulonglong local_288;
  code *pcStack_280;
  ulonglong *local_278;
  undefined1 local_270 [8];
  undefined8 *local_268;
  int local_260;
  uint local_25c;
  undefined8 local_258 [16];
  undefined1 local_1d8 [80];
  undefined1 local_188 [336];
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar12 = 0;
    do {
      pcStack_2c0 = *(code **)(param_1 + 8);
      local_2c8 = *(undefined8 **)(lVar12 + *(longlong *)(param_1 + 0x20));
      if (pcStack_2c0 == (code *)0x0) {
        local_2b8 = 0;
      }
      else {
        local_2b8 = FUN_144befdb0();
      }
      if ((local_2b8 & 1) != 0) {
        FUN_144be6b20(local_2b8 & 0xfffffffffffffffe);
      }
      iVar2 = FUN_144bece60(param_2,&local_2c8);
      if ((local_2b8 & 1) != 0) {
        FUN_144be6b30(local_2b8 & 0xfffffffffffffffe);
      }
      if (iVar2 == 0) {
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 8) != 0) {
          puVar10 = (undefined8 *)FUN_144bdff50(param_3,&DAT_149972340);
          return *puVar10;
        }
        break;
      }
      iVar7 = iVar7 + 1;
      lVar12 = lVar12 + 8;
    } while (iVar7 < *(int *)(param_1 + 0x10));
  }
  lVar12 = *(longlong *)(param_1 + 8);
  puVar3 = (undefined4 *)FUN_144bef800(lVar12,local_res8);
  lVar4 = 0;
  if (((byte)*puVar3 & 0x1f) == 4) {
    lVar4 = lVar12;
  }
  if (lVar4 != 0) {
    uVar5 = 0;
    local_298 = 0;
    pcStack_290 = (code *)0x0;
    pcVar8 = pcStack_290;
    lVar12 = local_298;
    if ((param_2[1] != 0) &&
       (puVar3 = (undefined4 *)FUN_144bef800(param_2[1],local_res8), pcVar8 = pcStack_290,
       lVar12 = local_298, ((byte)*puVar3 & 0x1f) == 4)) {
      lVar12 = *param_2;
      pcVar8 = (code *)param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_144be6b20(param_2[2] & 0xfffffffffffffffe);
      }
      uVar5 = param_2[2];
    }
    local_2e0 = 0;
    local_2d8 = '\0';
    plVar13 = (longlong *)(uVar5 & 0xfffffffffffffffe);
    (**(code **)(*plVar13 + 0x30))(plVar13,local_res20,lVar12,pcVar8,&local_2e0);
    local_2e8 = local_2e0;
    if (local_2d8 != '\0') {
      local_2e8 = -local_2e0;
    }
    if ((uVar5 & 1) != 0) {
      FUN_144be6b30(plVar13);
    }
    if (local_2e8 != 0) {
      uVar5 = 0;
      local_25c = 0x80000010;
      local_268 = local_258;
      local_2e0 = 0;
      local_260 = 0;
      local_res8[0] = 0;
      if (0 < *(int *)(param_1 + 0x10)) {
        lVar12 = 0;
        do {
          pcVar8 = *(code **)(param_1 + 8);
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar12);
          if (pcVar8 == (code *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_144befdb0(pcVar8);
          }
          if ((uVar5 & 1) != 0) {
            FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
          }
          local_298 = 0;
          pcStack_290 = (code *)0x0;
          pcVar9 = pcStack_290;
          uVar11 = 0;
          lVar14 = local_298;
          if (((pcVar8 != (code *)0x0) &&
              (puVar3 = (undefined4 *)FUN_144bef800(pcVar8,local_res20), pcVar9 = pcStack_290,
              lVar14 = local_298, ((byte)*puVar3 & 0x1f) == 4)) &&
             (pcVar9 = pcVar8, uVar11 = uVar5, lVar14 = lVar4, (uVar5 & 1) != 0)) {
            FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
          }
          if ((uVar5 & 1) != 0) {
            FUN_144be6b30(uVar5 & 0xfffffffffffffffe);
          }
          if (lVar14 != 0) {
            local_2c8 = (undefined8 *)0x0;
            pcStack_2c0 = (code *)((ulonglong)pcStack_2c0 & 0xffffffffffffff00);
            (**(code **)(*(longlong *)(uVar11 & 0xfffffffffffffffe) + 0x30))
                      ((longlong *)(uVar11 & 0xfffffffffffffffe),local_270,lVar14,pcVar9,&local_2c8)
            ;
            puVar10 = local_2c8;
            if ((char)pcStack_2c0 != '\0') {
              puVar10 = (undefined8 *)-(longlong)local_2c8;
            }
            if ((undefined8 *)((ulonglong)puVar10 & local_2e8) == puVar10) {
              lVar4 = *(longlong *)(param_1 + 0x18);
              iVar7 = local_260 + 1;
              if ((int)(local_25c & 0x7fffffff) < iVar7) {
                FUN_144be3180(&local_268,&PTR_vftable_14c6e47c0,(longlong)iVar7);
              }
              if (local_268 + local_260 != (undefined8 *)0x0) {
                local_268[local_260] = *(undefined8 *)(lVar4 + lVar12);
              }
              local_2e0 = local_2e0 | (ulonglong)puVar10;
              local_260 = iVar7;
            }
          }
          uVar5 = local_2e0;
          if ((uVar11 & 1) != 0) {
            FUN_144be6b30(uVar11 & 0xfffffffffffffffe);
          }
          lVar12 = lVar12 + 8;
          local_res8[0] = local_res8[0] + 1;
        } while (local_res8[0] < *(int *)(param_1 + 0x10));
      }
      if ((uVar5 != local_2e8) && ((1 < DAT_14c7989b0 || (cVar1 = FUN_144bdbf80(), cVar1 != '\0'))))
      {
        uVar5 = param_1 + 8;
        cVar1 = FUN_144bdbf80();
        local_288 = uVar5;
        if (cVar1 == '\0') {
          uVar6 = FUN_144bdc640(local_1d8);
          local_298 = 2;
          pcStack_290 = FUN_144bf0db0;
          pcStack_280 = FUN_144f50a90;
          local_2a8 = &local_2e8;
          local_2c8 = (undefined8 *)0x2;
          pcStack_2c0 = FUN_144bf0db0;
          uStack_2b0 = 0x44f50a90;
          uStack_2ac = 1;
          local_2b8 = uVar5;
          local_278 = local_2a8;
          lVar12 = FUN_144bdc480(uVar6,"Unmatched bits while decoding {}, value {}",&local_2c8,0);
          *(char **)(lVar12 + 0x38) = "Reflect\\Attributes\\hkAttributes.cpp";
          *(undefined8 *)(lVar12 + 0x40) = 0x8f;
          FUN_144bdc690(local_1d8);
        }
        else {
          uVar6 = FUN_144bdc810(local_188,&DAT_14c798960,2);
          local_298 = 2;
          pcStack_290 = FUN_144bf0db0;
          pcStack_280 = FUN_144f50a90;
          local_2a8 = &local_2e8;
          local_2c8 = (undefined8 *)0x2;
          pcStack_2c0 = FUN_144bf0db0;
          uStack_2b0 = 0x44f50a90;
          uStack_2ac = 1;
          local_2b8 = uVar5;
          local_278 = local_2a8;
          lVar12 = FUN_144bdc480(uVar6,"Unmatched bits while decoding {}, value {}",&local_2c8,0);
          *(char **)(lVar12 + 0x38) = "Reflect\\Attributes\\hkAttributes.cpp";
          *(undefined8 *)(lVar12 + 0x40) = 0x8f;
          FUN_144bdc8a0(local_188);
        }
      }
      if (local_260 == 0) {
        uVar6 = 0;
      }
      else {
        if (local_260 == 1) {
          puVar10 = (undefined8 *)FUN_144be06b0(param_3,*local_268,0xffffffff);
        }
        else {
          pcStack_2c0 = (code *)(local_268 + local_260);
          local_2c8 = local_268;
          puVar10 = (undefined8 *)FUN_144be0570(param_3,&DAT_149c0f83c,&local_2c8);
        }
        uVar6 = *puVar10;
      }
      local_260 = 0;
      if ((int)local_25c < 0) {
        return uVar6;
      }
      if (local_268 == (undefined8 *)0x0) {
        return uVar6;
      }
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_268,(ulonglong)(local_25c & 0x7fffffff) << 3);
      return uVar6;
    }
  }
  return 0;
}



// FUNCTION 144f67b00 FUN_144f67b00 body=197 status=ok
// SIG undefined FUN_144f67b00(void)

undefined4 * FUN_144f67b00(undefined4 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_38 [2];
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  if (*param_2 != 0) {
    plVar2 = (longlong *)FUN_144bef430(param_2[1],local_20,&DAT_14c6df050);
    lVar1 = *plVar2;
    if ((local_10 & 1) != 0) {
      FUN_144be6b30(local_10 & 0xfffffffffffffffe);
    }
    if (lVar1 != 0) {
      FUN_144f66f50(lVar1,local_38,param_3);
      if (local_38[0] != 0) {
        FUN_144bec0a0(param_2,param_1,local_38);
        if ((local_28 & 1) == 0) {
          return param_1;
        }
        FUN_144be6b30(local_28 & 0xfffffffffffffffe);
        return param_1;
      }
      if ((local_28 & 1) != 0) {
        FUN_144be6b30(local_28 & 0xfffffffffffffffe);
      }
    }
  }
  *param_1 = 0x80040200;
  return param_1;
}



// FUNCTION 144f67bd0 FUN_144f67bd0 body=260 status=ok
// SIG undefined FUN_144f67bd0(void)

undefined4 * FUN_144f67bd0(undefined4 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 local_res20 [2];
  longlong local_38 [2];
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  piVar2 = (int *)FUN_144f67b00(local_res20);
  if (-1 < *piVar2) {
    *param_1 = 0;
    return param_1;
  }
  if (*param_2 != 0) {
    plVar3 = (longlong *)FUN_144bef430(param_2[1],local_20,&DAT_14c6df050);
    lVar1 = *plVar3;
    if ((local_10 & 1) != 0) {
      FUN_144be6b30(local_10 & 0xfffffffffffffffe);
    }
    if (lVar1 != 0) {
      FUN_144f67090(lVar1,local_38,param_3);
      if (local_38[0] != 0) {
        FUN_144bec0a0(param_2,local_res20,local_38);
        FUN_144becfe0(local_38,3,1);
        *param_1 = local_res20[0];
        if ((local_28 & 1) == 0) {
          return param_1;
        }
        FUN_144be6b30(local_28 & 0xfffffffffffffffe);
        return param_1;
      }
      if ((local_28 & 1) != 0) {
        FUN_144be6b30(local_28 & 0xfffffffffffffffe);
      }
    }
  }
  *param_1 = 0x80040200;
  return param_1;
}



// FUNCTION 144f67ce0 FUN_144f67ce0 body=357 status=ok
// SIG undefined FUN_144f67ce0(void)

void FUN_144f67ce0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  lVar1 = *param_1;
  puVar2 = (undefined4 *)FUN_144bef800(*(undefined8 *)(lVar1 + 8),local_res8);
  local_38 = FUN_144f6a4d0(*puVar2);
  FUN_144be1640(param_2,&local_res20,"hk::Presets(type = {}, builtinType={}, strict = {}, {{",
                &DAT_149c0f988,(longlong *)(lVar1 + 8),&local_38,lVar1);
  iVar4 = 0;
  if (0 < *(int *)(lVar1 + 0x10)) {
    lVar3 = 0;
    do {
      local_res20 = *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + lVar3 * 8);
      local_28 = *(longlong *)(lVar1 + 8);
      local_30 = *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + lVar3 * 8);
      if (local_28 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_144befdb0();
      }
      if ((local_20 & 1) != 0) {
        FUN_144be6b20(local_20 & 0xfffffffffffffffe);
      }
      if (lVar3 != 0) {
        FUN_144be0720(param_2,&DAT_1499722dc,0xffffffff);
      }
      FUN_144be16e0(param_2,local_res8,"{}={:*!}",&DAT_149c0f9a8,&local_res20,&local_30);
      if ((local_20 & 1) != 0) {
        FUN_144be6b30(local_20 & 0xfffffffffffffffe);
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 1;
    } while (iVar4 < *(int *)(lVar1 + 0x10));
  }
  FUN_144be0720(param_2,&DAT_149c0f984,0xffffffff);
  return;
}



// FUNCTION 144f67e50 FUN_144f67e50 body=99 status=ok
// SIG undefined FUN_144f67e50(void)

undefined1 FUN_144f67e50(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  plVar2 = (longlong *)FUN_144f69110(local_28,param_1,&DAT_14c6df2e0);
  puVar1 = (undefined8 *)*plVar2;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  if (puVar1 != (undefined8 *)0x0) {
    (*(code *)*puVar1)(param_1,puVar1[1],puVar1[2]);
    return 1;
  }
  return 0;
}



// FUNCTION 144f67ec0 FUN_144f67ec0 body=118 status=ok
// SIG undefined FUN_144f67ec0(void)

undefined8 * FUN_144f67ec0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_218 [16];
  undefined1 local_208 [512];
  
  FUN_144bde670(local_218,local_208,0x200);
  FUN_144be6160(local_218,"Only AttributeAllocImpl\'s deallocate function should be used.");
  iVar2 = FUN_144bfc110(0xfd11cd2,local_208,"Reflect\\Attributes\\hkAttributes.cpp",0x247);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined8 *)(*pcVar1)();
    return puVar3;
  }
  FUN_144bde6e0(local_218);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 144f67f40 FUN_144f67f40 body=118 status=ok
// SIG undefined FUN_144f67f40(void)

undefined8 * FUN_144f67f40(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_218 [16];
  undefined1 local_208 [512];
  
  FUN_144bde670(local_218,local_208,0x200);
  FUN_144be6160(local_218,"Only AttributeAllocImpl\'s deallocate function should be used.");
  iVar2 = FUN_144bfc110(0x2d8bd59c,local_208,"Reflect\\Attributes\\hkAttributes.cpp",0x24d);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined8 *)(*pcVar1)();
    return puVar3;
  }
  FUN_144bde6e0(local_218);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 144f67fc0 FUN_144f67fc0 body=3 status=ok
// SIG undefined FUN_144f67fc0(void)

undefined1 FUN_144f67fc0(void)

{
  return 0;
}



// FUNCTION 144f67fd0 FUN_144f67fd0 body=14 status=ok
// SIG undefined FUN_144f67fd0(void)

void FUN_144f67fd0(longlong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000144f67fda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,0);
  return;
}



// FUNCTION 144f67fe0 FUN_144f67fe0 body=87 status=ok
// SIG undefined FUN_144f67fe0(void)

undefined8 FUN_144f67fe0(undefined8 param_1,ulonglong param_2)

{
  FUN_144be7ef0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144f68040 FUN_144f68040 body=649 status=ok
// SIG undefined FUN_144f68040(void)

longlong *
FUN_144f68040(longlong *param_1,int param_2,undefined8 param_3,undefined1 param_4,longlong *param_5,
             int param_6,longlong *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined8 *local_278;
  undefined8 *local_270;
  undefined1 *local_268;
  undefined1 local_260 [96];
  ulonglong local_200;
  undefined8 *local_160;
  
  FUN_144f6faa0(local_260);
  FUN_144f6ff10(local_260,&DAT_14c6df050);
  local_200 = local_200 | 0x80000;
  uVar6 = 0;
  local_160 = (undefined8 *)0x0;
  iVar1 = FUN_144f70820(local_260);
  iVar1 = (param_2 + 4) * 0x10 + iVar1;
  iVar2 = FUN_144beecf0(param_3);
  iVar3 = FUN_144beecf0(param_3);
  uVar9 = -iVar3 & iVar2 + -1 + iVar1;
  puVar4 = (undefined1 *)(**(code **)(*param_5 + 8))(param_5,(longlong)(int)(param_6 + uVar9));
  *param_7 = (longlong)(puVar4 + (int)uVar9);
  local_278 = (undefined8 *)(puVar4 + 0x30);
  local_270 = (undefined8 *)(puVar4 + iVar1);
  local_268 = puVar4;
  if (local_270 < local_278) {
    FUN_144bfc170(0xdeadf11d,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                  ,0x1e,"hkLinearBuffer exhausted");
  }
  *(undefined8 *)(puVar4 + 8) = param_3;
  *puVar4 = param_4;
  *(int *)(puVar4 + 0x10) = param_2;
  puVar7 = (undefined8 *)
           (local_268 + ((longlong)local_278 + (7 - (longlong)local_268) & 0xfffffffffffffff8));
  local_278 = puVar7 + 2;
  if (local_270 < local_278) {
    FUN_144bfc170(0xdeadf11d,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                  ,0x2f,"hkLinearBuffer exhausted");
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_144be7ee0(puVar7);
    puVar7[1] = param_5;
    *puVar7 = hkReflect::Detail::AttributeAllocImpl::vftable;
  }
  local_200 = local_200 | 0x80000;
  local_160 = puVar7;
  lVar5 = FUN_144f70a40(local_260,&local_278);
  puVar8 = local_268 + ((longlong)local_278 + (7 - (longlong)local_268) & 0xfffffffffffffff8);
  local_278 = (undefined8 *)(puVar8 + (longlong)*(int *)(puVar4 + 0x10) * 8);
  if (local_270 < local_278) {
    FUN_144bfc170(0xdeadf11d,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                  ,0x2f,"hkLinearBuffer exhausted");
  }
  *(undefined1 **)(puVar4 + 0x18) = puVar8;
  puVar8 = local_268 + ((longlong)local_278 + (7 - (longlong)local_268) & 0xfffffffffffffff8);
  local_278 = (undefined8 *)(puVar8 + (longlong)*(int *)(puVar4 + 0x10) * 8);
  if (local_270 < local_278) {
    FUN_144bfc170(0xdeadf11d,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                  ,0x2f,"hkLinearBuffer exhausted");
  }
  *(undefined1 **)(puVar4 + 0x20) = puVar8;
  *(undefined8 *)(puVar4 + 0x28) = 0;
  *param_1 = (longlong)puVar4;
  param_1[1] = lVar5;
  if (lVar5 != 0) {
    uVar6 = FUN_144befdb0(lVar5);
  }
  param_1[2] = uVar6;
  if ((uVar6 & 1) != 0) {
    FUN_144be6b20(uVar6 & 0xfffffffffffffffe);
  }
  FUN_144f6fbe0(local_260);
  return param_1;
}



// FUNCTION 144f682d0 FUN_144f682d0 body=449 status=ok
// SIG undefined FUN_144f682d0(void)

longlong *
FUN_144f682d0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  longlong local_res10;
  undefined4 uVar14;
  ulonglong local_48;
  ulonglong uStack_40;
  
  puVar13 = (ulonglong *)*param_2;
  uVar4 = param_2[1] - (longlong)puVar13 >> 4;
  iVar2 = FUN_144beec90(param_3);
  iVar3 = (int)uVar4;
  lVar12 = (longlong)iVar3;
  iVar7 = iVar2 * iVar3;
  puVar9 = puVar13;
  lVar10 = lVar12;
  if (0 < iVar3) {
    do {
      iVar7 = iVar7 + 1 + ((int)puVar9[1] - (int)*puVar9);
      lVar10 = lVar10 + -1;
      puVar9 = puVar9 + 2;
    } while (lVar10 != 0);
  }
  FUN_144f68040(param_1,uVar4 & 0xffffffff,param_3,param_4,param_5,iVar7,&local_48);
  uVar4 = local_48;
  lVar10 = *param_1;
  uVar11 = (longlong)iVar7 + local_48;
  if (0 < lVar12) {
    lVar8 = 0;
    local_48 = 0;
    local_res10 = lVar10;
    do {
      uVar5 = uVar4 + (longlong)iVar2;
      if (uVar11 < uVar5) {
        FUN_144bfc170(0xdeadf11d,
                      "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                      ,0x1e,"hkLinearBuffer exhausted");
      }
      lVar1 = local_res10;
      *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + lVar8 * 8) = uVar4;
      lVar8 = lVar8 + 1;
      uVar4 = uVar5;
      uVar6 = local_48;
    } while (lVar8 < lVar12);
    do {
      uVar14 = (undefined4)((ulonglong)param_5 >> 0x20);
      local_48 = *puVar13;
      uStack_40 = puVar13[1];
      iVar2 = (int)local_48;
      iVar3 = (int)uStack_40;
      uVar4 = uVar5 + (longlong)((iVar3 - iVar2) + 1);
      if (uVar11 < uVar4) {
        FUN_144bfc170(0xdeadf11d,
                      "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                      ,0x2f,"hkLinearBuffer exhausted");
        iVar3 = (int)uStack_40;
        iVar2 = (int)local_48;
      }
      iVar2 = (iVar3 - iVar2) + 1;
      param_5 = CONCAT44(uVar14,iVar2);
      FUN_144f5a610(&local_48,&local_res10,uVar5,iVar2,param_5);
      puVar13 = puVar13 + 2;
      *(ulonglong *)(*(longlong *)(lVar1 + 0x18) + uVar6 * 8) = uVar5;
      uVar6 = uVar6 + 1;
      uVar5 = uVar4;
    } while ((longlong)uVar6 < lVar12);
  }
  return param_1;
}



// FUNCTION 144f684a0 FUN_144f684a0 body=179 status=ok
// SIG undefined FUN_144f684a0(void)

void FUN_144f684a0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144f68560 FUN_144f68560 body=87 status=ok
// SIG undefined FUN_144f68560(void)

longlong FUN_144f68560(longlong param_1)

{
  FUN_144bfb540(param_1,0,0x288);
  *(code **)(param_1 + 0x140) = FUN_144f68840;
  *(code **)(param_1 + 0xa0) = FUN_144f68640;
  *(code **)(param_1 + 400) = FUN_144f68bc0;
  *(code **)(param_1 + 0xf0) = FUN_144f68c30;
  return param_1;
}



// FUNCTION 144f685c0 FUN_144f685c0 body=119 status=ok
// SIG undefined FUN_144f685c0(void)

ulonglong FUN_144f685c0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  
  puVar3 = (uint *)FUN_144bef800(*(undefined8 *)(param_3 + 8),local_res8);
  uVar1 = *puVar3;
  puVar3 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_res8);
  uVar4 = (ulonglong)(*puVar3 & 0x1f) * 9 + (ulonglong)(uVar1 & 0x1f);
  pcVar2 = *(code **)(param_1 + uVar4 * 8);
  if (pcVar2 == (code *)0x0) {
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    uVar4 = (*pcVar2)(param_2,param_3);
  }
  return uVar4;
}



// FUNCTION 144f68640 FUN_144f68640 body=100 status=ok
// SIG undefined FUN_144f68640(void)

bool FUN_144f68640(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined1 local_res18 [16];
  
  local_res8[0] = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res18,*param_2,param_2[1],
             local_res8);
  (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(param_1[2] & 0xfffffffffffffffe),local_res10,*param_1,param_1[1],
             local_res8[0]);
  return -1 < local_res10[0];
}



// FUNCTION 144f686b0 FUN_144f686b0 body=113 status=ok
// SIG undefined FUN_144f686b0(void)

bool FUN_144f686b0(undefined8 *param_1,undefined8 *param_2)

{
  int local_res8 [2];
  undefined1 local_res10 [24];
  longlong local_18;
  undefined1 local_10;
  
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],&local_18
            );
  (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(param_1[2] & 0xfffffffffffffffe),local_res8,*param_1,param_1[1],
             local_18 != 0);
  return -1 < local_res8[0];
}



// FUNCTION 144f68730 FUN_144f68730 body=128 status=ok
// SIG undefined FUN_144f68730(void)

bool FUN_144f68730(undefined8 *param_1,undefined8 *param_2)

{
  int local_res8 [2];
  undefined1 local_res10 [8];
  double local_res18 [2];
  
  local_res18[0] = 0.0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],
             local_res18);
  (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(param_1[2] & 0xfffffffffffffffe),local_res8,*param_1,param_1[1],
             local_res18[0] != 0.0);
  return -1 < local_res8[0];
}



// FUNCTION 144f687b0 FUN_144f687b0 body=130 status=ok
// SIG undefined FUN_144f687b0(void)

bool FUN_144f687b0(undefined8 *param_1,undefined8 *param_2)

{
  char local_res8 [8];
  int local_res10 [2];
  undefined1 local_res18 [16];
  ulonglong local_18;
  uint uStack_10;
  
  local_res8[0] = '\0';
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res18,*param_2,param_2[1],
             local_res8);
  uStack_10 = uStack_10 & 0xffffff00;
  local_18 = (ulonglong)(local_res8[0] != '\0');
  (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(param_1[2] & 0xfffffffffffffffe),local_res10,*param_1,param_1[1],&local_18
            );
  return -1 < local_res10[0];
}



// FUNCTION 144f68840 FUN_144f68840 body=120 status=ok
// SIG undefined FUN_144f68840(void)

bool FUN_144f68840(undefined8 *param_1,undefined8 *param_2)

{
  int local_res8 [2];
  undefined1 local_res10 [24];
  undefined8 local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0;
  uStack_20 = uStack_20 & 0xffffff00;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],&local_28
            );
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(param_1[2] & 0xfffffffffffffffe),local_res8,*param_1,param_1[1],&local_18)
  ;
  return -1 < local_res8[0];
}



// FUNCTION 144f688c0 FUN_144f688c0 body=202 status=ok
// SIG undefined FUN_144f688c0(void)

bool FUN_144f688c0(undefined8 *param_1,undefined8 *param_2)

{
  double dVar1;
  int local_res8 [2];
  double local_res10 [3];
  longlong local_28;
  bool bStack_20;
  undefined3 uStack_1f;
  
  local_res10[0] = 0.0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res8,*param_2,param_2[1],
             local_res10);
  local_28 = 0;
  dVar1 = ABS(local_res10[0]);
  if ((9.223372036854776e+18 <= ABS(local_res10[0])) &&
     (dVar1 = ABS(local_res10[0]) - 9.223372036854776e+18, dVar1 < 9.223372036854776e+18)) {
    local_28 = -0x8000000000000000;
  }
  local_28 = (longlong)dVar1 + local_28;
  _bStack_20 = CONCAT31(uStack_1f,local_res10[0] < 0.0);
  (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(param_1[2] & 0xfffffffffffffffe),local_res8,*param_1,param_1[1],&local_28)
  ;
  return -1 < local_res8[0];
}



// FUNCTION 144f68990 FUN_144f68990 body=260 status=ok
// SIG undefined FUN_144f68990(void)

bool FUN_144f68990(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  int local_res10 [2];
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong local_18;
  uint uStack_10;
  
  local_res20 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res18,*param_2,param_2[1],
             &local_res20);
  if (local_res20 == 0) {
    return false;
  }
  cVar1 = FUN_144beff30(param_1[1]);
  if (cVar1 != '\0') {
    lVar2 = FUN_144bfbbe0();
    local_18 = lVar2;
    if (lVar2 < 0) {
      local_18 = -lVar2;
    }
    uStack_10 = CONCAT31(uStack_10._1_3_,(byte)((ulonglong)lVar2 >> 0x3f));
    (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x28))
              ((longlong *)(param_1[2] & 0xfffffffffffffffe),local_res10,*param_1,param_1[1],
               &local_18);
    return -1 < local_res10[0];
  }
  local_18 = FUN_144bfbc00(local_res20,0);
  uStack_10 = uStack_10 & 0xffffff00;
  (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(param_1[2] & 0xfffffffffffffffe),local_res10,*param_1,param_1[1],&local_18
            );
  return -1 < local_res10[0];
}



// FUNCTION 144f68aa0 FUN_144f68aa0 body=113 status=ok
// SIG undefined FUN_144f68aa0(void)

bool FUN_144f68aa0(undefined8 *param_1,undefined8 *param_2)

{
  char local_res8 [8];
  int local_res10 [2];
  undefined1 local_res18 [16];
  
  local_res8[0] = '\0';
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res18,*param_2,param_2[1],
             local_res8);
  (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(param_1[2] & 0xfffffffffffffffe),local_res10,*param_1,param_1[1],
             (double)(local_res8[0] != '\0'));
  return -1 < local_res10[0];
}



// FUNCTION 144f68b20 FUN_144f68b20 body=160 status=ok
// SIG undefined FUN_144f68b20(void)

bool FUN_144f68b20(undefined8 *param_1,undefined8 *param_2)

{
  double dVar1;
  int local_res8 [8];
  ulonglong local_18;
  char local_10;
  
  local_18 = 0;
  local_10 = '\0';
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res8,*param_2,param_2[1],&local_18)
  ;
  dVar1 = (double)local_18;
  if (local_10 != '\0') {
    dVar1 = -dVar1;
  }
  (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(param_1[2] & 0xfffffffffffffffe),local_res8,*param_1,param_1[1],dVar1);
  return -1 < local_res8[0];
}



// FUNCTION 144f68bc0 FUN_144f68bc0 body=106 status=ok
// SIG undefined FUN_144f68bc0(void)

bool FUN_144f68bc0(undefined8 *param_1,undefined8 *param_2)

{
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],
             local_res18);
  (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(param_1[2] & 0xfffffffffffffffe),local_res8,*param_1,param_1[1],
             local_res18[0]);
  return -1 < local_res8[0];
}



// FUNCTION 144f68c30 FUN_144f68c30 body=105 status=ok
// SIG undefined FUN_144f68c30(void)

bool FUN_144f68c30(undefined8 *param_1,undefined8 *param_2)

{
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],
             local_res18);
  (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(param_1[2] & 0xfffffffffffffffe),local_res8,*param_1,param_1[1],
             local_res18[0]);
  return -1 < local_res8[0];
}



// FUNCTION 144f68ca0 FUN_144f68ca0 body=144 status=ok
// SIG undefined FUN_144f68ca0(void)

undefined4 * FUN_144f68ca0(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_a8 [20];
  
  iVar1 = FUN_144f68d30(param_2);
  if (iVar1 == -1) {
    *param_1 = 0x80040200;
  }
  else if (iVar1 == 5) {
    FUN_144bdfbf0(local_a8,param_2);
    uVar2 = FUN_144bfbc20(local_a8[0]);
    *param_3 = uVar2;
    *param_1 = 0;
    FUN_144bdf2f0(local_a8);
  }
  else {
    *param_1 = 0;
    *param_3 = *(undefined8 *)(&DAT_149c0f9c0 + (longlong)iVar1 * 8);
  }
  return param_1;
}



// FUNCTION 144f68d30 FUN_144f68d30 body=143 status=ok
// SIG undefined FUN_144f68d30(void)

int FUN_144f68d30(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined **ppuVar3;
  int iVar4;
  
  pcVar2 = (char *)*param_1;
  while( true ) {
    if ((char *)param_1[1] <= pcVar2) {
      return 5;
    }
    if (*pcVar2 == '#') break;
    pcVar2 = pcVar2 + 1;
  }
  ppuVar3 = &PTR_s__1__INF00_149c0fa08;
  iVar4 = 0;
  do {
    cVar1 = FUN_144bfbf10(*param_1,param_1[1] - *param_1,*ppuVar3);
    if (cVar1 != '\0') {
      return iVar4;
    }
    iVar4 = iVar4 + 1;
    ppuVar3 = ppuVar3 + 1;
  } while ((longlong)ppuVar3 < 0x149c0fa30);
  return -1;
}



// FUNCTION 144f68dc0 FUN_144f68dc0 body=155 status=ok
// SIG undefined FUN_144f68dc0(void)

undefined8 * FUN_144f68dc0(undefined8 *param_1,uint param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_144f6b2d0(param_1 + 0x14);
  thunk_FUN_144f8a3c0(param_1 + 0x10);
  thunk_FUN_144f8a0b0(param_1 + 0xb);
  FUN_144f6ae80(param_1 + 7);
  FUN_144f6a560(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 144f68e60 FUN_144f68e60 body=118 status=ok
// SIG undefined FUN_144f68e60(void)

void FUN_144f68e60(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [24];
  ulonglong local_res20;
  ulonglong local_18;
  undefined8 local_10;
  
  local_res20 = (ulonglong)((uint)(*(ulonglong *)*param_1 >> 0x10) & 0xfff);
  local_18 = *(ulonglong *)*param_1 & 0xffff;
  local_10 = FUN_144beee40(param_1[1]);
  FUN_144be1640(param_2,local_res8,"{}{{ size={} align={} }}",&DAT_149c0fc90,&local_10,&local_18,
                &local_res20);
  return;
}



// FUNCTION 144f68ee0 FUN_144f68ee0 body=84 status=ok
// SIG undefined FUN_144f68ee0(void)

ulonglong FUN_144f68ee0(ulonglong *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = *param_1 >> 0x1c;
  uVar1 = (uint)uVar2 & 0xf;
  uVar3 = (uint)(*param_1 >> 0x10);
  if ((uVar2 & 0xf) == 0) {
    return (ulonglong)(uVar3 & 0xfff);
  }
  uVar2 = (ulonglong)(uVar3 & 0xfff);
  if (uVar1 != 0xf) {
    uVar1 = 1 << (sbyte)uVar1;
    if (uVar2 <= (ulonglong)(longlong)(int)uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
    return uVar2;
  }
  if (uVar2 <= (ulonglong)(longlong)(param_2 * 4)) {
    uVar2 = (ulonglong)(uint)(param_2 * 4);
  }
  return uVar2;
}



// FUNCTION 144f68f40 FUN_144f68f40 body=178 status=ok
// SIG undefined FUN_144f68f40(void)

longlong FUN_144f68f40(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint7 uVar3;
  
  do {
    uVar1 = *(ulonglong *)*param_2;
    uVar2 = *(ulonglong *)*param_1;
    if ((DAT_14c798a78 & 1) == 0) break;
  } while (((uint)uVar2 & 3) != ((uint)uVar1 & 3));
  uVar3 = (uint7)(DAT_14c798a78 >> 8);
  if (((int)(uVar2 >> 0x11) == (int)(uVar1 >> 0x11)) &&
     (((uint)(uVar2 >> 2) & 0x7fff) == ((uint)(uVar1 >> 2) & 0x7fff))) {
    return CONCAT71(uVar3,1);
  }
  return (ulonglong)uVar3 << 8;
}



// FUNCTION 144f69000 FUN_144f69000 body=136 status=ok
// SIG undefined FUN_144f69000(void)

undefined8 FUN_144f69000(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  do {
    uVar1 = *(ulonglong *)*param_2;
    if ((DAT_14c798a78 & 1) == 0) break;
  } while (((uint)*(ulonglong *)*param_1 & 3) != ((uint)uVar1 & 3));
  iVar2 = (int)(*(ulonglong *)*param_1 >> 0x11);
  if (((int)(uVar1 >> 0x11) <= iVar2) && (iVar2 <= (int)((uint)(uVar1 >> 2) & 0x7fff))) {
    return 1;
  }
  return 0;
}



// FUNCTION 144f69090 FUN_144f69090 body=124 status=ok
// SIG undefined FUN_144f69090(void)

longlong * FUN_144f69090(byte *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((((*param_1 & 0x20) != 0) &&
      (plVar2 = (longlong *)FUN_144befea0(param_1,0x20), plVar2 != (longlong *)0x0)) &&
     (plVar2 = (longlong *)*plVar2, plVar2 != (longlong *)0x0)) {
    plVar3 = plVar2 + 1;
    plVar2 = plVar3 + *plVar2 * 2;
    while( true ) {
      if (plVar3 == plVar2) {
        return (longlong *)0x0;
      }
      cVar1 = FUN_144b45dd0(plVar3[1],param_2);
      if (cVar1 != '\0') break;
      plVar3 = plVar3 + 2;
    }
    return plVar3;
  }
  return (longlong *)0x0;
}



// FUNCTION 144f69110 FUN_144f69110 body=105 status=ok
// SIG undefined FUN_144f69110(void)

undefined8 * FUN_144f69110(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  puVar2 = (undefined8 *)FUN_144f69090(param_2,param_3);
  if (puVar2 == (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar1 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = lVar1;
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_144befdb0();
    }
    param_1[2] = uVar3;
    if ((uVar3 & 1) != 0) {
      FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 144f69180 FUN_144f69180 body=127 status=ok
// SIG undefined FUN_144f69180(void)

void FUN_144f69180(uint *param_1,uint param_2,uint param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  if ((*param_1 >> 0x14 & 1) != 0) {
    puVar1 = (ulonglong *)FUN_144befea0(param_1,0x100000);
    if (puVar1 != (ulonglong *)0x0) {
      uVar2 = *puVar1;
      goto LAB_144f691bb;
    }
  }
  uVar2 = 0;
LAB_144f691bb:
  puVar1 = (ulonglong *)FUN_144befed0(param_1,0x100000);
  *puVar1 = (ulonglong)(param_3 & 0xfff) << 0x10 | (ulonglong)param_2 & 0xffff | uVar2 & 0xf0000000;
  return;
}



// FUNCTION 144f69200 FUN_144f69200 body=95 status=ok
// SIG undefined FUN_144f69200(void)

undefined8 * FUN_144f69200(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144befde0(param_2,0x80000);
  if ((plVar1 != (longlong *)0x0) && (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1,param_1,param_2);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 144f69260 FUN_144f69260 body=116 status=ok
// SIG undefined FUN_144f69260(void)

undefined8 * FUN_144f69260(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144befde0(param_3,0x80000);
  if ((plVar1 != (longlong *)0x0) && (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2,param_3);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 144f692e0 FUN_144f692e0 body=64 status=ok
// SIG undefined FUN_144f692e0(void)

void FUN_144f692e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)FUN_144befde0(param_2,0x80000);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)*puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000144f6931c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2);
  return;
}



// FUNCTION 144f69320 FUN_144f69320 body=55 status=ok
// SIG undefined FUN_144f69320(void)

ulonglong FUN_144f69320(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  plVar2 = (longlong *)FUN_144befde0(param_1,0x80000);
  if ((plVar2 != (longlong *)0x0) && (plVar1 = (longlong *)*plVar2, plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144f6934b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
    return uVar3;
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 144f69360 FUN_144f69360 body=243 status=ok
// SIG undefined FUN_144f69360(void)

undefined4 * FUN_144f69360(undefined4 *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_4;
  plVar4 = (longlong *)FUN_144befe50(param_3,0x400000);
  if ((plVar4 == (longlong *)0x0) || (pcVar5 = (code *)*plVar4, pcVar5 == (code *)0x0)) {
    plVar4 = (longlong *)FUN_144befe50(param_3,0x40);
    if (plVar4 == (longlong *)0x0) {
      pcVar5 = (code *)0x0;
    }
    else {
      pcVar5 = (code *)*plVar4;
    }
    if (pcVar5 == (code *)0x0) {
      *param_1 = 0x80040200;
      return param_1;
    }
  }
  cVar2 = FUN_144b45dd0(param_3,&DAT_14c6dc390);
  if (cVar2 == '\0') {
    (*pcVar5)(param_2,param_3,uVar6);
  }
  else {
    iVar3 = FUN_144beec90(param_3);
    if (0 < (int)param_4) {
      do {
        uVar1 = *(undefined8 *)(param_2 + 8);
        (*pcVar5)(param_2,param_3,1);
        *(undefined8 *)(param_2 + 8) = uVar1;
        param_2 = param_2 + iVar3;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      *param_1 = 0;
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f69460 FUN_144f69460 body=183 status=ok
// SIG undefined FUN_144f69460(void)

undefined4 *
FUN_144f69460(undefined4 *param_1,code *param_2,longlong param_3,undefined8 param_4,uint param_5)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  
  cVar2 = FUN_144b45dd0(param_4,&DAT_14c6dc390);
  if (cVar2 == '\0') {
    (*param_2)(param_3,param_4,param_5);
  }
  else {
    iVar3 = FUN_144beec90(param_4);
    if (0 < (int)param_5) {
      uVar4 = (ulonglong)param_5;
      do {
        uVar1 = *(undefined8 *)(param_3 + 8);
        (*param_2)(param_3,param_4,1);
        *(undefined8 *)(param_3 + 8) = uVar1;
        param_3 = param_3 + iVar3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f69520 FUN_144f69520 body=357 status=ok
// SIG undefined FUN_144f69520(void)

void FUN_144f69520(uint *param_1,char param_2)

{
  short *psVar1;
  short *psVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong local_18;
  undefined4 local_10;
  uint local_c;
  
  local_18 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  FUN_144f6b730(param_1,&local_18);
  if ((((param_2 != '\0') && ((*param_1 >> 8 & 1) != 0)) &&
      (puVar4 = (undefined8 *)FUN_144befea0(param_1,0x100), puVar4 != (undefined8 *)0x0)) &&
     ((undefined *)*puVar4 == &DAT_144bf4e80)) {
    if (((*(longlong *)(param_1 + 2) == 0) ||
        (plVar5 = (longlong *)FUN_144befe50(*(longlong *)(param_1 + 2),0x100),
        plVar5 == (longlong *)0x0)) || (*plVar5 == 0)) {
      puVar4 = (undefined8 *)FUN_144befde0(param_1,0x800000);
      bVar3 = false;
      if ((puVar4 != (undefined8 *)0x0) && (psVar2 = (short *)*puVar4, psVar2 != (short *)0x0)) {
        psVar1 = psVar2 + ((longlong)*psVar2 + 1) * 4;
        do {
          psVar2 = psVar2 + 4;
          bVar3 = false;
          if (psVar2 == psVar1) goto LAB_144f6961b;
          plVar5 = (longlong *)FUN_144befe50(*(undefined8 *)psVar2,0x100);
        } while ((plVar5 == (longlong *)0x0) || (*plVar5 == 0));
        bVar3 = true;
      }
    }
    else {
      bVar3 = true;
    }
LAB_144f6961b:
    puVar4 = (undefined8 *)FUN_144befed0(param_1,0x100);
    pcVar6 = (code *)0x0;
    if (bVar3) {
      pcVar6 = FUN_144bf5410;
    }
    *puVar4 = pcVar6;
  }
  local_10 = 0;
  if ((-1 < (int)local_c) && (local_18 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_18,(ulonglong)(local_c & 0x7fffffff) << 3);
  }
  return;
}



// FUNCTION 144f69690 FUN_144f69690 body=751 status=ok
// SIG undefined FUN_144f69690(void)

void FUN_144f69690(ulonglong *param_1)

{
  short sVar1;
  short sVar2;
  ulonglong uVar3;
  longlong lVar4;
  short *psVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong local_res18 [2];
  
  if ((((uint)*param_1 & 0x208000) == 0x208000) &&
     ((((*param_1 >> 0x15 & 1) == 0 ||
       (pbVar7 = (byte *)FUN_144befea0(param_1,0x200000), pbVar7 == (byte *)0x0)) ||
      ((*pbVar7 & 1) == 0)))) {
    puVar8 = (undefined4 *)FUN_144bef800(param_1,local_res8);
    puVar13 = (ulonglong *)0x0;
    puVar10 = puVar13;
    if (((byte)*puVar8 & 0x1f) == 8) {
      puVar10 = param_1;
    }
    if (puVar10 == (ulonglong *)0x0) {
      puVar8 = (undefined4 *)FUN_144bef800(param_1,local_res8);
      puVar10 = puVar13;
      if (((byte)*puVar8 & 0x1f) == 7) {
        puVar10 = param_1;
      }
      if (puVar10 != (ulonglong *)0x0) {
        uVar3 = param_1[1];
        if (uVar3 != 0) {
          FUN_144f69690(uVar3);
          pbVar7 = (byte *)FUN_144b45d50(uVar3,local_res8);
          if ((*pbVar7 & 1) != 0) {
            if ((((uint)*param_1 >> 0x15 & 1) != 0) &&
               (puVar9 = (undefined8 *)FUN_144befea0(param_1,0x200000), puVar9 != (undefined8 *)0x0)
               ) {
              puVar13 = (ulonglong *)*puVar9;
            }
            puVar10 = (ulonglong *)FUN_144befed0(param_1,0x200000);
            *puVar10 = (ulonglong)puVar13 | 1;
            return;
          }
        }
        plVar11 = (longlong *)FUN_144befe50(param_1,0x4000);
        if ((plVar11 != (longlong *)0x0) &&
           (plVar11 = (longlong *)*plVar11, plVar11 != (longlong *)0x0)) {
          lVar4 = *plVar11;
          for (plVar12 = plVar11 + 1; plVar12 != plVar11 + lVar4 * 2 + 1; plVar12 = plVar12 + 2) {
            FUN_144f69690(*plVar12);
            pbVar7 = (byte *)FUN_144b45d50(*plVar12,local_res8);
            if ((*pbVar7 & 1) != 0) {
              if ((((uint)*param_1 >> 0x15 & 1) != 0) &&
                 (puVar9 = (undefined8 *)FUN_144befea0(param_1,0x200000),
                 puVar9 != (undefined8 *)0x0)) {
                puVar13 = (ulonglong *)*puVar9;
              }
              puVar10 = (ulonglong *)FUN_144befed0(param_1,0x200000);
              *puVar10 = (ulonglong)puVar13 | 1;
              return;
            }
          }
        }
        puVar9 = (undefined8 *)FUN_144befde0(param_1,0x800000);
        if ((puVar9 != (undefined8 *)0x0) && (psVar5 = (short *)*puVar9, psVar5 != (short *)0x0)) {
          sVar1 = psVar5[1];
          sVar2 = *psVar5;
          for (plVar11 = (longlong *)(psVar5 + 4);
              plVar11 != (longlong *)(psVar5 + ((longlong)((int)sVar1 + (int)sVar2) + 1) * 4);
              plVar11 = plVar11 + 1) {
            local_res18[0] = *plVar11;
            pbVar7 = (byte *)FUN_144bf04d0(local_res18,local_res8);
            if ((~*pbVar7 & 1) != 0) {
              uVar6 = *(undefined8 *)(local_res18[0] + 8);
              FUN_144f69690(uVar6);
              pbVar7 = (byte *)FUN_144b45d50(uVar6,&local_res10);
              if ((*pbVar7 & 1) != 0) {
                if ((((uint)*param_1 >> 0x15 & 1) != 0) &&
                   (puVar9 = (undefined8 *)FUN_144befea0(param_1,0x200000),
                   puVar9 != (undefined8 *)0x0)) {
                  puVar13 = (ulonglong *)*puVar9;
                }
                puVar10 = (ulonglong *)FUN_144befed0(param_1,0x200000);
                *puVar10 = (ulonglong)puVar13 | 1;
                return;
              }
            }
          }
        }
      }
    }
    else {
      FUN_144beff00(puVar10,&local_res10);
      if (local_res10 != 0) {
        FUN_144f69690(local_res10);
        pbVar7 = (byte *)FUN_144b45d50(local_res10,local_res8);
        if ((*pbVar7 & 1) != 0) {
          if ((((uint)*param_1 >> 0x15 & 1) != 0) &&
             (puVar9 = (undefined8 *)FUN_144befea0(param_1,0x200000), puVar9 != (undefined8 *)0x0))
          {
            puVar13 = (ulonglong *)*puVar9;
          }
          puVar10 = (ulonglong *)FUN_144befed0(param_1,0x200000);
          *puVar10 = (ulonglong)puVar13 | 1;
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 144f69980 FUN_144f69980 body=27 status=ok
// SIG undefined FUN_144f69980(void)

byte * FUN_144f69980(byte *param_1)

{
  for (; (param_1 != (byte *)0x0 && ((~*param_1 & 1) != 0)); param_1 = *(byte **)(param_1 + 8)) {
  }
  return param_1;
}



// FUNCTION 144f699a0 FUN_144f699a0 body=71 status=ok
// SIG undefined FUN_144f699a0(void)

byte * FUN_144f699a0(byte *param_1)

{
  longlong lVar1;
  byte *pbVar2;
  
  for (; (param_1 != (byte *)0x0 && ((~*param_1 & 1) != 0)); param_1 = *(byte **)(param_1 + 8)) {
  }
  lVar1 = FUN_144bef4c0(param_1);
  if ((lVar1 != 0) && (pbVar2 = (byte *)FUN_144bf0910(lVar1), pbVar2 != (byte *)0x0)) {
    param_1 = pbVar2;
  }
  return param_1;
}



// FUNCTION 144f699f0 FUN_144f699f0 body=48 status=ok
// SIG undefined FUN_144f699f0(void)

longlong * FUN_144f699f0(longlong *param_1)

{
  *param_1 = DAT_14c798b78;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_14c798b78 + 0xc0));
  return param_1;
}


