// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14756cf46 FUN_14756cf46 body=132 status=ok
// SIG undefined FUN_14756cf46(void)

void FUN_14756cf46(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a4810b0;
  FUN_14756cde4(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14756cdb0(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145ec2f68(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014756cfbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14756cfca FUN_14756cfca body=135 status=ok
// SIG undefined FUN_14756cfca(void)

void FUN_14756cfca(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_3c;
  undefined8 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38) = *param_3;
  local_3c = param_2;
  FUN_14621f65a(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_1458160bc(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756d052 FUN_14756d052 body=116 status=ok
// SIG undefined FUN_14756d052(void)

void FUN_14756d052(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14756d0c6 FUN_14756d0c6 body=100 status=ok
// SIG undefined FUN_14756d0c6(void)

void FUN_14756d0c6(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  FUN_14756bcec(lVar1 + (ulonglong)param_2 * 0x30 + 8);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x30);
    memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)(int)(~param_2 + iVar2) * 0x30);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_14756d12a(param_1);
  return;
}



// FUNCTION 14756d12a FUN_14756d12a body=62 status=ok
// SIG undefined FUN_14756d12a(void)

void FUN_14756d12a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14756d168(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 14756d168 FUN_14756d168 body=112 status=ok
// SIG undefined FUN_14756d168(void)

ulonglong FUN_14756d168(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14756d1a2;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_14756d1a2:
  return param_2 & 0xffffffff;
}



// FUNCTION 14756d1d8 FUN_14756d1d8 body=167 status=ok
// SIG undefined FUN_14756d1d8(void)

void FUN_14756d1d8(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14756d253;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14756d253;
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
LAB_14756d253:
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
                    /* WARNING: Could not recover jumptable at 0x00014756d273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14756d280 FUN_14756d280 body=240 status=ok
// SIG undefined FUN_14756d280(void)

void FUN_14756d280(longlong *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  uVar6 = 0;
  if (0 < (int)uVar2) {
    uVar6 = 0;
    uVar5 = uVar2;
    do {
      uVar1 = (uVar5 >> 1) + uVar6;
      if (*(int *)(lVar8 + (ulonglong)uVar1 * 0x30) < *param_2) {
        uVar6 = uVar1 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
    if (((int)uVar6 < (int)uVar2) && (*(int *)(lVar8 + (ulonglong)uVar6 * 0x30) <= *param_2)) {
      piVar7 = (int *)(lVar8 + (ulonglong)uVar6 * 0x30);
      FUN_14756cde4(piVar7,1);
      goto LAB_14756d337;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_14756d370(param_1,uVar2);
    lVar8 = *param_1;
  }
  lVar4 = (ulonglong)uVar6 * 0x30;
  memmove((void *)(lVar8 + lVar4 + 0x30),(void *)(lVar8 + lVar4),(ulonglong)(uVar2 - uVar6) * 0x30);
  piVar7 = (int *)(lVar4 + *param_1);
LAB_14756d337:
  *piVar7 = *param_2;
  FUN_14756bc96(piVar7 + 2,param_3);
  return;
}



// FUNCTION 14756d370 FUN_14756d370 body=147 status=ok
// SIG undefined FUN_14756d370(void)

void FUN_14756d370(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
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



// FUNCTION 14756d404 FUN_14756d404 body=32 status=ok
// SIG undefined FUN_14756d404(void)

undefined8 FUN_14756d404(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSequenceDirectorPlaybackCapability");
  return param_2;
}



// FUNCTION 14756d424 FUN_14756d424 body=38 status=ok
// SIG undefined FUN_14756d424(void)

void FUN_14756d424(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x1c) < 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0;
      FUN_14757c5d8(lVar1 + 0x10);
      return;
    }
    *(undefined4 *)(lVar1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14756d497 FUN_14756d497 body=124 status=ok
// SIG undefined FUN_14756d497(void)

void FUN_14756d497(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  if (0 < (int)*(uint *)(param_1 + 1)) {
    iVar7 = 0;
    uVar4 = *(uint *)(param_1 + 1);
    do {
      uVar6 = (uVar4 >> 1) + iVar7;
      lVar5 = (ulonglong)uVar6 * 0x30;
      lVar1 = *param_1 + lVar5;
      uVar2 = *(uint *)(*param_1 + lVar5);
      if ((uVar2 < *param_2) ||
         ((uVar2 <= *param_2 &&
          ((*(uint *)(lVar1 + 4) < param_2[1] ||
           ((*(uint *)(lVar1 + 4) == param_2[1] &&
            ((*(uint *)(lVar1 + 8) < param_2[2] ||
             ((*(uint *)(lVar1 + 8) == param_2[2] && (*(uint *)(lVar1 + 0xc) < param_2[3])))))))))))
         ) {
        iVar7 = uVar6 + (uVar4 & 1);
      }
      bVar3 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar3);
  }
  FUN_14757de3c();
  return;
}



// FUNCTION 14756d514 FUN_14756d514 body=86 status=ok
// SIG undefined FUN_14756d514(void)

void FUN_14756d514(longlong param_1)

{
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14756d56a FUN_14756d56a body=197 status=ok
// SIG undefined FUN_14756d56a(void)

undefined8 * FUN_14756d56a(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = param_2;
  puVar6 = param_1;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_1406fa324(param_1 + 0xc,param_2 + 0xc);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  FUN_1475798da(param_1 + 0xf,param_2 + 0xf);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0x15);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0x15) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar3;
  FUN_144a787a6(param_1 + 0x16,param_2 + 0x16);
  lVar4 = param_2[0x18];
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[0x18];
    }
  }
  param_1[0x18] = lVar4;
  FUN_1403fbf4e(param_1 + 0x19,param_2 + 0x19);
  param_1[0x1b] = param_2[0x1b];
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  return param_1;
}



// FUNCTION 14756d630 FUN_14756d630 body=167 status=ok
// SIG undefined FUN_14756d630(void)

undefined4 * FUN_14756d630(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  _Src = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  uVar2 = *(undefined8 *)(param_2 + 8);
  param_1[10] = iVar1;
  if (iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1475799d2(param_1 + 8,iVar1,0);
    FUN_147579a34(*(undefined8 *)(param_1 + 8),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14756d6d8 FUN_14756d6d8 body=77 status=ok
// SIG undefined FUN_14756d6d8(void)

undefined8 FUN_14756d6d8(longlong param_1,int *param_2)

{
  int iVar1;
  
  if ((((param_2[1] != 0 || *param_2 != 0) || param_2[2] != 0) || param_2[3] != 0) &&
     (iVar1 = FUN_140c7f2b4(), iVar1 != -1)) {
    FUN_14756d726(param_1,param_2);
    FUN_14756d75a(param_1 + 0x60,iVar1);
    return 1;
  }
  return 0;
}



// FUNCTION 14756d726 FUN_14756d726 body=51 status=ok
// SIG undefined FUN_14756d726(void)

void FUN_14756d726(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140b2f12c();
  if (iVar1 == -1) {
    return;
  }
  FUN_14757e18c(param_1 + 0x80,iVar1);
  FUN_14757e1f8(param_1 + 0x80);
  return;
}



// FUNCTION 14756d75a FUN_14756d75a body=88 status=ok
// SIG undefined FUN_14756d75a(void)

void FUN_14756d75a(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0xf0 + *param_1);
  FUN_14756d514(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0xf0),(longlong)(int)(~param_2 + iVar1) * 0xf0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_14757df48(param_1);
  return;
}



// FUNCTION 14756d7b2 FUN_14756d7b2 body=302 status=ok
// SIG undefined FUN_14756d7b2(void)

undefined4 *
FUN_14756d7b2(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14756d95e(&local_c8,param_3,param_4);
  iVar6 = FUN_14756d8e1((longlong *)(param_1 + 0x70),&local_c8);
  FUN_14756d9f6(&local_c8);
  lVar2 = *(longlong *)(param_1 + 0x70);
  lVar7 = (longlong)iVar6 * 0x80;
  puVar1 = (undefined4 *)(lVar2 + 0x38 + lVar7);
  local_c8 = *puVar1;
  uStack_c4 = puVar1[1];
  uStack_c0 = puVar1[2];
  uStack_bc = puVar1[3];
  local_b8 = (void *)0x0;
  local_b0 = *(int *)(lVar2 + 0x50 + lVar7);
  lVar8 = (longlong)local_b0;
  _Src = *(void **)(lVar2 + 0x48 + lVar7);
  if (lVar8 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,local_b0,0);
    memcpy(local_b8,_Src,lVar8 * 2);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_14756d497(param_1 + 0x80,&local_c8);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x38 + lVar7);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756d8e1 FUN_14756d8e1 body=125 status=ok
// SIG undefined FUN_14756d8e1(void)

void FUN_14756d8e1(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  if (0 < (int)*(uint *)(param_1 + 1)) {
    iVar7 = 0;
    uVar4 = *(uint *)(param_1 + 1);
    do {
      uVar6 = (uVar4 >> 1) + iVar7;
      lVar5 = (ulonglong)uVar6 * 0x80;
      lVar1 = *param_1 + lVar5;
      uVar2 = *(uint *)(*param_1 + 0x38 + lVar5);
      if ((uVar2 < *(uint *)(param_2 + 0x38)) ||
         ((uVar2 <= *(uint *)(param_2 + 0x38) &&
          ((*(uint *)(lVar1 + 0x3c) < *(uint *)(param_2 + 0x3c) ||
           ((*(uint *)(lVar1 + 0x3c) == *(uint *)(param_2 + 0x3c) &&
            ((*(uint *)(lVar1 + 0x40) < *(uint *)(param_2 + 0x40) ||
             ((*(uint *)(lVar1 + 0x40) == *(uint *)(param_2 + 0x40) &&
              (*(uint *)(lVar1 + 0x44) < *(uint *)(param_2 + 0x44))))))))))))) {
        iVar7 = uVar6 + (uVar4 & 1);
      }
      bVar3 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar3);
  }
  FUN_14757dff4();
  return;
}



// FUNCTION 14756d95e FUN_14756d95e body=151 status=ok
// SIG undefined FUN_14756d95e(void)

undefined8 * FUN_14756d95e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  CoCreateGuid((GUID *)(param_1 + 7));
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],_Src,(longlong)iVar1 * 2);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xf) = DAT_14cab329c;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  return param_1;
}



// FUNCTION 14756d9f6 FUN_14756d9f6 body=62 status=ok
// SIG undefined FUN_14756d9f6(void)

void FUN_14756d9f6(longlong *param_1)

{
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14756da34 FUN_14756da34 body=195 status=ok
// SIG undefined FUN_14756da34(void)

bool FUN_14756da34(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14031352e();
  if (iVar1 != -1) {
    lVar4 = *(longlong *)(param_1 + 0x70);
    lVar3 = (longlong)iVar1 * 0x80;
    if (((*(int *)(lVar4 + 0x5c + lVar3) != 0 || *(int *)(lVar4 + 0x58 + lVar3) != 0) ||
        *(int *)(lVar4 + 0x60 + lVar3) != 0) || *(int *)(lVar4 + 100 + lVar3) != 0) {
      iVar2 = FUN_140c7f2b4(param_1,lVar4 + lVar3 + 0x58);
      if ((iVar2 != -1) &&
         (lVar4 = (longlong)iVar2 * 0xf0 + *(longlong *)(param_1 + 0x60), lVar4 != 0)) {
        local_30 = param_2;
        FUN_14757c608(lVar4 + 200);
      }
    }
    FUN_14756daf8(param_1 + 0x70,iVar1);
    FUN_14756d726(param_1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar1 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756daf8 FUN_14756daf8 body=85 status=ok
// SIG undefined FUN_14756daf8(void)

void FUN_14756daf8(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x80 + *param_1);
  FUN_14756d9f6(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x80),(longlong)(int)(~param_2 + iVar1) << 7);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_14757e06a(param_1);
  return;
}



// FUNCTION 14756db4e FUN_14756db4e body=50 status=ok
// SIG undefined FUN_14756db4e(void)

longlong * FUN_14756db4e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  return param_2;
}



// FUNCTION 14756db80 FUN_14756db80 body=44 status=ok
// SIG undefined FUN_14756db80(void)

void FUN_14756db80(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_147522e5c((undefined8 *)(param_1 + 0x108));
  if (cVar2 == '\0') {
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 0x108) = *param_2;
    *(undefined8 *)(param_1 + 0x110) = uVar1;
  }
  return;
}



// FUNCTION 14756dbac FUN_14756dbac body=266 status=ok
// SIG undefined FUN_14756dbac(void)

undefined8
FUN_14756dbac(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,undefined8 param_5
             ,byte param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_98 = 0;
  uStack_c0 = (ulonglong)param_4;
  local_b0 = param_5;
  local_b8 = (ushort)param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d8 = param_2;
  local_d0 = param_1;
  local_c8 = param_3;
  uVar1 = FUN_1402710dd(&local_d8);
  if (local_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756dcb8 FUN_14756dcb8 body=120 status=ok
// SIG undefined FUN_14756dcb8(void)

void FUN_14756dcb8(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_14757e106((longlong *)(param_1 + 0x20),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 14756dd30 FUN_14756dd30 body=93 status=ok
// SIG undefined FUN_14756dd30(void)

undefined8 FUN_14756dd30(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = FUN_140b2f12c(param_1,param_3);
  if ((iVar1 == -1) || (lVar3 = (longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x80), lVar3 == 0))
  {
    uVar2 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x170))(param_2,0,param_1,0x10);
    FUN_14756dcb8(lVar3,param_2);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14756dd8e FUN_14756dd8e body=255 status=ok
// SIG undefined FUN_14756dd8e(void)

undefined8 FUN_14756dd8e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar2) == param_2) {
        local_30 = param_2;
        if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(param_2);
        }
        uVar1 = FUN_14756de8e(param_1 + 0xe0,&local_30);
        goto LAB_14756de43;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0xe8) * 8 != lVar2);
  }
  if ((longlong)*(int *)(param_1 + 0x88) == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = (longlong)*(int *)(param_1 + 0x88) * 0x30;
    lVar2 = *(longlong *)(param_1 + 0x80) + 0x20;
    do {
      lVar3 = lVar3 + -0x30;
      local_30 = param_2;
      if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
      uVar1 = FUN_14756de8e(lVar2,&local_30);
    } while (((int)uVar1 == 0) && (lVar2 = lVar2 + 0x30, lVar3 != 0));
  }
LAB_14756de43:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14756de8e FUN_14756de8e body=201 status=ok
// SIG undefined FUN_14756de8e(void)

undefined8 FUN_14756de8e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    iVar5 = 1;
    lVar6 = 0;
    lVar7 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar6) == lVar2) {
        if (iVar5 == 0) {
          return 0;
        }
        memmove((void *)(*param_1 + (lVar7 >> 0x20) * 8),
                (void *)(*param_1 + (lVar7 >> 0x20) * 8 + 8),
                (longlong)((int)param_1[1] - iVar5) << 3);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return 1;
      }
      lVar7 = lVar7 + 0x100000000;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  return 0;
}



// FUNCTION 14756df58 FUN_14756df58 body=88 status=ok
// SIG undefined FUN_14756df58(void)

undefined8 FUN_14756df58(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x80);
    puVar3 = puVar2 + (longlong)*(int *)(param_1 + 0x88) * 6;
    do {
      if ((longlong)*(int *)(puVar2 + 5) != 0) {
        lVar4 = 0;
        do {
          if (*(longlong *)(puVar2[4] + lVar4) == param_2) {
            uVar1 = puVar2[1];
            *param_3 = *puVar2;
            param_3[1] = uVar1;
            return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)*(int *)(puVar2 + 5) * 8 != lVar4);
      }
      puVar2 = puVar2 + 6;
    } while (puVar2 != puVar3);
  }
  return 0;
}



// FUNCTION 14756dfb0 FUN_14756dfb0 body=218 status=ok
// SIG undefined FUN_14756dfb0(void)

longlong FUN_14756dfb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar2 = FUN_1402984e6();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar3 = *param_2;
      goto LAB_14756dfef;
    }
  }
  lVar3 = 0;
LAB_14756dfef:
  lVar3 = FUN_14756dbac(param_1,lVar3,0,8,0,0,0,0);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  iVar1 = *(int *)(param_1 + 0xe8);
  *(uint *)(param_1 + 0xe8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xec) < iVar1 + 1U) {
    FUN_14757e106((longlong *)(param_1 + 0xe0),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar1 * 8) = lVar3;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  return lVar3;
}



// FUNCTION 14756e08a FUN_14756e08a body=56 status=ok
// SIG undefined FUN_14756e08a(void)

longlong FUN_14756e08a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar2 = (longlong)*(int *)(param_1 + 0xe8);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2 * 8;
    lVar3 = 0;
    do {
      bVar4 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar3) == param_2;
      lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar4);
      if (bVar4) {
        return lVar2;
      }
      bVar4 = lVar1 + -8 != lVar3;
      lVar3 = lVar3 + 8;
    } while (bVar4);
  }
  return lVar2;
}



// FUNCTION 14756e0c2 FUN_14756e0c2 body=162 status=ok
// SIG undefined FUN_14756e0c2(void)

longlong FUN_14756e0c2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    lVar2 = *param_2;
    if ((((lVar2 == 0) || (lVar1 = FUN_1402984e6(), lVar1 == 0)) ||
        (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *param_2;
    }
    lVar2 = FUN_14756dbac(param_1,lVar2,0,8,0,0,0,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0xf0) = lVar2;
    return lVar2;
  }
  return *(longlong *)(param_1 + 0xf0);
}



// FUNCTION 14756e164 FUN_14756e164 body=8 status=ok
// SIG undefined FUN_14756e164(void)

undefined8 FUN_14756e164(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



// FUNCTION 14756e16c FUN_14756e16c body=22 status=ok
// SIG undefined FUN_14756e16c(void)

void FUN_14756e16c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 14756e182 FUN_14756e182 body=68 status=ok
// SIG undefined FUN_14756e182(void)

void FUN_14756e182(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756e1c8 FUN_14756e1c8 body=874 status=ok
// SIG undefined FUN_14756e1c8(void)

void FUN_14756e1c8(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  int *local_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar6 = FUN_140b2f12c();
  if (iVar6 == -1) {
    lVar13 = 0;
  }
  else {
    lVar13 = (longlong)iVar6 * 0x30 + *(longlong *)(param_1 + 0x80);
  }
  local_90 = param_1;
  iVar6 = FUN_140b2f12c(param_1,param_3);
  if ((iVar6 != -1) &&
     (lVar15 = (longlong)iVar6 * 0x30 + *(longlong *)(local_90 + 0x80), lVar15 != 0 && lVar13 != 0))
  {
    FUN_14756e876(lVar13,&local_58);
    FUN_14756e534(lVar15,&local_58);
    if (local_58 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar13 = local_90;
  iVar6 = FUN_140c7f2b4(local_90,param_3);
  if (iVar6 == -1) {
    local_80 = 0;
  }
  else {
    local_80 = (longlong)iVar6 * 0xf0 + *(longlong *)(lVar13 + 0x60);
  }
  local_58 = (int *)0x0;
  uStack_50 = 0;
  iVar6 = *(int *)(lVar13 + 0x78);
  if (0 < iVar6) {
    plVar12 = (longlong *)(lVar13 + 0x70);
    local_78 = local_80 + 200;
    lVar15 = 0;
    local_88 = plVar12;
    local_70 = param_2;
    do {
      lVar2 = *plVar12;
      lVar16 = lVar15 * 0x80;
      if ((((*(int *)(lVar2 + 0x58 + lVar16) == *param_2) &&
           (*(int *)(lVar2 + 0x5c + lVar16) == param_2[1])) &&
          (*(int *)(lVar2 + 0x60 + lVar16) == param_2[2])) &&
         (*(int *)(lVar2 + 100 + lVar16) == param_2[3])) {
        lVar1 = lVar2 + lVar16;
        if (0 < iVar6) {
          iVar6 = 0;
          lVar10 = 100;
          do {
            lVar3 = *plVar12;
            iVar7 = *(int *)(lVar3 + -0x14 + lVar10);
            if (iVar7 == *(int *)(lVar1 + 0x50)) {
              if ((iVar7 < 2) ||
                 (iVar7 = FUN_144a80a00(*(undefined8 *)(lVar3 + -0x1c + lVar10),
                                        *(undefined8 *)(lVar1 + 0x48)), lVar13 = local_90,
                 plVar12 = local_88, iVar7 == 0)) {
LAB_14756e333:
                uVar5 = uStack_50;
                if (((*(int *)(lVar3 + -0xc + lVar10) == *param_3) &&
                    ((*(int *)(lVar3 + -8 + lVar10) == param_3[1] &&
                     (*(int *)(lVar3 + -4 + lVar10) == param_3[2])))) &&
                   (*(int *)(lVar3 + lVar10) == param_3[3])) {
                  lVar14 = (longlong)(int)uStack_50;
                  uVar8 = (int)uStack_50 + 1;
                  uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
                  if (uStack_50._4_4_ < uVar8) {
                    FUN_140c60952(&local_58,uVar5 & 0xffffffff);
                    lVar13 = local_90;
                    plVar12 = local_88;
                  }
                  lVar3 = lVar3 + lVar10;
                  iVar6 = *(int *)(lVar3 + -0x28);
                  iVar7 = *(int *)(lVar3 + -0x24);
                  iVar4 = *(int *)(lVar3 + -0x20);
                  piVar11 = local_58 + lVar14 * 4;
                  *piVar11 = *(int *)(lVar3 + -0x2c);
                  piVar11[1] = iVar6;
                  piVar11[2] = iVar7;
                  piVar11[3] = iVar4;
                  break;
                }
              }
            }
            else if (*(int *)(lVar1 + 0x50) + iVar7 == 1) goto LAB_14756e333;
            iVar6 = iVar6 + 1;
            lVar10 = lVar10 + 0x80;
          } while (iVar6 < *(int *)(lVar13 + 0x78));
        }
        param_2 = local_70;
        if ((((*(int *)(lVar1 + 0x58) != *param_3) || (*(int *)(lVar1 + 0x5c) != param_3[1])) ||
            (*(int *)(lVar1 + 0x60) != param_3[2])) || (*(int *)(lVar1 + 100) != param_3[3])) {
          lVar2 = lVar2 + lVar16;
          iVar6 = param_3[1];
          iVar7 = param_3[2];
          iVar4 = param_3[3];
          *(int *)(lVar2 + 0x58) = *param_3;
          *(int *)(lVar2 + 0x5c) = iVar6;
          *(int *)(lVar2 + 0x60) = iVar7;
          *(int *)(lVar2 + 100) = iVar4;
        }
        if (local_80 != 0) {
          FUN_140c608a8(local_78,lVar1 + 0x38);
          lVar13 = local_90;
          plVar12 = local_88;
        }
      }
      lVar2 = local_90;
      lVar15 = lVar15 + 1;
      iVar6 = *(int *)(lVar13 + 0x78);
    } while ((int)lVar15 < iVar6);
    if ((longlong)(int)uStack_50 != 0) {
      piVar17 = local_58 + (longlong)(int)uStack_50 * 4;
      piVar11 = local_58;
      do {
        local_68 = *piVar11;
        iStack_64 = piVar11[1];
        iStack_60 = piVar11[2];
        iStack_5c = piVar11[3];
        if (0 < (longlong)*(int *)(lVar13 + 0x78)) {
          piVar9 = (int *)(*local_88 + 0x44);
          lVar15 = 0;
          do {
            if (((piVar9[-3] == local_68) && (piVar9[-2] == iStack_64)) &&
               ((piVar9[-1] == iStack_60 && (*piVar9 == iStack_5c)))) {
              FUN_14756daf8(local_88);
              break;
            }
            lVar15 = lVar15 + 1;
            piVar9 = piVar9 + 0x20;
          } while (*(int *)(lVar13 + 0x78) != lVar15);
        }
        FUN_14756d726(lVar2,&local_68);
        piVar11 = piVar11 + 4;
        lVar13 = lVar2;
      } while (piVar11 != piVar17);
    }
    if (local_58 != (int *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14756e534 FUN_14756e534 body=832 status=ok
// SIG undefined FUN_14756e534(void)

void FUN_14756e534(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  lVar6 = param_2[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar3 = *param_2;
    lVar10 = 0;
    do {
      local_e0 = *(longlong **)(lVar3 + lVar10);
      FUN_14757e6a0(&local_98,&local_b8,&local_e0);
      lVar10 = lVar10 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar10);
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  if (0 < (longlong)*(int *)(param_1 + 0x28)) {
    uVar11 = (longlong)*(int *)(param_1 + 0x28);
    do {
      if ((int)uStack_90 != local_64) {
        uVar4 = *(ulonglong *)(*plVar1 + -8 + uVar11 * 8);
        uVar7 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        puVar8 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar8 = local_60;
        }
        for (iVar9 = *(int *)(puVar8 + (ulonglong)(local_50 - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
            iVar9 != -1; iVar9 = *(int *)((longlong)iVar9 * 0x10 + local_98 + 8)) {
          if (*(ulonglong *)(local_98 + (longlong)iVar9 * 0x10) == uVar4) {
            FUN_14756f382(&local_98);
            goto LAB_14756e6ba;
          }
        }
      }
      uVar7 = *(uint *)(param_1 + 0x28);
      if (uVar11 != uVar7) {
        _Src = (void *)(*plVar1 + uVar11 * 8);
        memmove((void *)((longlong)_Src + -8),_Src,(longlong)(int)(uVar7 - (int)uVar11) << 3);
        uVar7 = *(uint *)(param_1 + 0x28);
      }
      *(uint *)(param_1 + 0x28) = uVar7 - 1;
LAB_14756e6ba:
      bVar5 = 1 < (longlong)uVar11;
      uVar11 = uVar11 - 1;
    } while (bVar5);
  }
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar9 = 0;
  local_b0 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar9 = local_70;
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = &local_98;
  if ((iStack_a4 != iVar9) || (local_b0 != local_88)) {
    do {
      lVar6 = *(longlong *)(*local_e0 + (longlong)iStack_c4 * 0x10);
      if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar6);
      }
      iVar2 = *(int *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x2c) < iVar2 + 1U) {
        FUN_14757e106(plVar1,iVar2);
      }
      *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar6;
      if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar6);
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != &local_98 || (local_d0 != local_88 || iStack_c4 != iVar9));
  }
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x28)) {
    FUN_14757ebe6(plVar1);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14757e612(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756e876 FUN_14756e876 body=104 status=ok
// SIG undefined FUN_14756e876(void)

undefined8 * FUN_14756e876(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  _Src = *(void **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *param_2 = 0;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_14757e5b0(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
  }
  return param_2;
}



// FUNCTION 14756e8de FUN_14756e8de body=44 status=ok
// SIG undefined FUN_14756e8de(void)

void FUN_14756e8de(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((((*(int *)(param_1 + 0x58) != *param_2) || (*(int *)(param_1 + 0x5c) != param_2[1])) ||
      (*(int *)(param_1 + 0x60) != param_2[2])) || (*(int *)(param_1 + 100) != param_2[3])) {
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x60) = uVar1;
  }
  return;
}



// FUNCTION 14756e90a FUN_14756e90a body=141 status=ok
// SIG undefined FUN_14756e90a(void)

undefined8 * FUN_14756e90a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  plVar3 = (longlong *)FUN_14757e2a6(param_1 + 0x130);
  *param_2 = plVar3 + 2;
  param_2[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756e99a FUN_14756e99a body=33 status=ok
// SIG undefined FUN_14756e99a(void)

void FUN_14756e99a(longlong param_1,int param_2,undefined4 param_3)

{
  if ((-1 < param_2) || (param_2 < *(int *)(param_1 + 0x158))) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x150) + (longlong)param_2 * 0x20) = param_3;
  }
  return;
}



// FUNCTION 14756e9bc FUN_14756e9bc body=633 status=ok
// SIG undefined FUN_14756e9bc(void)

ulonglong FUN_14756e9bc(longlong param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  int iVar12;
  undefined1 auStack_a8 [44];
  int local_7c;
  int *local_78;
  longlong local_70;
  int local_68;
  undefined1 local_5c [4];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2[4] < 2) {
    local_58 = L"MarkedFrameCharacters";
    local_50 = 0x15;
    local_78 = param_2;
    FUN_1446e940c(&local_70,&local_58);
    local_58 = L"MovieScene";
    local_50 = 10;
    FUN_1446e940c(local_5c,&local_58);
    FUN_140208bae(&local_58,local_5c,&local_70,L"ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    local_7c = 1;
    lVar8 = 0;
    iVar12 = 0;
    do {
      lVar4 = FUN_1447a1f4a(&local_58);
      if (*(int *)(lVar4 + 8) + 0x7fffffffU < 0x80000001) {
        bVar1 = false;
      }
      else {
        lVar4 = 0;
        do {
          plVar5 = (longlong *)FUN_1447a1f4a(&local_58);
          FUN_1467ace16(&local_70,local_7c,*(undefined2 *)(*plVar5 + lVar4 * 2));
          if (lVar8 != 0) {
            FUN_1400020a8(lVar8);
          }
          iVar12 = local_68;
          lVar8 = local_70;
          iVar3 = *(int *)(param_1 + 0x158);
          bVar1 = true;
          if ((longlong)iVar3 != 0) {
            lVar6 = *(longlong *)(param_1 + 0x150);
            lVar9 = 0;
            do {
              iVar2 = *(int *)(lVar6 + 0x10 + lVar9);
              if (iVar2 == iVar12) {
                if ((iVar12 < 2) ||
                   (iVar2 = FUN_144a80a00(*(undefined8 *)(lVar6 + 8 + lVar9),lVar8), iVar2 == 0))
                goto LAB_14756eb15;
              }
              else if (iVar2 + iVar12 == 1) {
LAB_14756eb15:
                bVar1 = false;
                break;
              }
              lVar9 = lVar9 + 0x20;
            } while ((longlong)iVar3 * 0x20 != lVar9);
          }
          lVar4 = lVar4 + 1;
          lVar6 = FUN_1447a1f4a(&local_58);
          iVar3 = *(int *)(lVar6 + 8) + -1;
          if (*(int *)(lVar6 + 8) == 0) {
            iVar3 = 0;
          }
        } while ((lVar4 < iVar3) && (!bVar1));
      }
      local_7c = local_7c + 1;
    } while (!bVar1);
    param_2 = local_78;
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
      param_2 = local_78;
    }
  }
  else {
    iVar12 = 0;
    lVar8 = 0;
  }
  plVar5 = (longlong *)(param_1 + 0x150);
  iVar3 = *(int *)(param_1 + 0x158);
  *(uint *)(param_1 + 0x158) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x15c) < iVar3 + 1U) {
    FUN_14757e406(plVar5,iVar3);
  }
  FUN_14757e396(*plVar5 + (longlong)iVar3 * 0x20,param_2);
  if (1 < iVar12) {
    FUN_1402980a2(*plVar5 + (longlong)iVar3 * 0x20 + 8,lVar8,iVar12 + -1);
  }
  FUN_140fe2f26();
  uVar10 = 0xffffffff;
  if (0 < (longlong)*(int *)(param_1 + 0x158)) {
    piVar11 = (int *)*plVar5;
    uVar7 = 0;
    do {
      if (*piVar11 == *param_2) {
        uVar10 = uVar7 & 0xffffffff;
        break;
      }
      uVar7 = uVar7 + 1;
      piVar11 = piVar11 + 8;
    } while ((longlong)*(int *)(param_1 + 0x158) != uVar7);
  }
  if (lVar8 != 0) {
    FUN_1400020a8(lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 14756ec36 FUN_14756ec36 body=48 status=ok
// SIG undefined FUN_14756ec36(void)

ulonglong FUN_14756ec36(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int *piVar2;
  
  if (0 < (longlong)*(int *)(param_1 + 0x158)) {
    piVar2 = *(int **)(param_1 + 0x150);
    uVar1 = 0;
    do {
      if (*piVar2 == param_2) {
        return uVar1 & 0xffffffff;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x158) != uVar1);
  }
  return 0xffffffff;
}



// FUNCTION 14756ec66 FUN_14756ec66 body=46 status=ok
// SIG undefined FUN_14756ec66(void)

void FUN_14756ec66(longlong param_1)

{
  FUN_14757e48c(param_1 + 0x150);
  FUN_14757e4e4(param_1 + 0x150);
  FUN_140fe2f26(param_1);
  return;
}



// FUNCTION 14756ec94 FUN_14756ec94 body=71 status=ok
// SIG undefined FUN_14756ec94(void)

void FUN_14756ec94(longlong param_1)

{
  FUN_140cae155(*(undefined8 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x158));
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(int *)(param_1 + 0x15c) == 0) {
    return;
  }
  FUN_14757e580(param_1 + 0x150);
  return;
}



// FUNCTION 14756ecdc FUN_14756ecdc body=134 status=ok
// SIG undefined FUN_14756ecdc(void)

ulonglong FUN_14756ecdc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x158);
  if (0 < iVar2) {
    lVar4 = 0x10;
    uVar3 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x150) + lVar4);
      if (iVar1 == *(int *)(param_2 + 1)) {
        if ((iVar1 < 2) ||
           (iVar2 = FUN_144a80a00(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + -8 + lVar4),
                                  *param_2), iVar2 == 0)) goto LAB_14756ed51;
        iVar2 = *(int *)(param_1 + 0x158);
      }
      else if (*(int *)(param_2 + 1) + iVar1 == 1) {
LAB_14756ed51:
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while ((longlong)uVar3 < (longlong)iVar2);
  }
  return 0xffffffff;
}



// FUNCTION 14756ed62 FUN_14756ed62 body=1566 status=ok
// SIG undefined FUN_14756ed62(void)

ulonglong FUN_14756ed62(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong *plVar10;
  int *piVar11;
  ulonglong uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  ulonglong uVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_398 [39];
  char local_371;
  longlong local_370;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  uVar21 = *(uint *)(param_1 + 0x158);
  uVar17 = (ulonglong)uVar21;
  if (uVar17 == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    if (1 < (int)uVar21) {
      lVar1 = *(longlong *)(param_1 + 0x150);
      local_371 = param_3;
      local_370 = param_1;
      memset(local_358,0,0x2f0);
      local_360 = uVar17 * 0x20 + lVar1 + -0x20;
      local_368 = lVar1;
      fVar28 = logf((float)(int)uVar21);
      local_358[0] = (int)(longlong)(fVar28 + fVar28);
      plVar10 = &local_368;
      do {
        piVar16 = (int *)*plVar10;
        piVar13 = (int *)plVar10[1];
        iVar20 = (int)plVar10[2];
        iVar14 = (int)((ulonglong)((longlong)piVar13 - (longlong)piVar16) >> 5);
        uVar21 = iVar14 + 1;
        piVar18 = piVar13;
        piVar26 = piVar16;
        if (iVar20 != 0) {
LAB_14756ee26:
          if (8 < (int)uVar21) {
            uVar17 = (ulonglong)(uVar21 >> 1);
            uVar2 = *(undefined8 *)(piVar16 + uVar17 * 8);
            uVar3 = *(undefined8 *)(piVar16 + uVar17 * 8 + 2);
            uVar4 = *(undefined8 *)(piVar16 + uVar17 * 8 + 4);
            uVar5 = *(undefined8 *)(piVar16 + uVar17 * 8 + 4 + 2);
            uVar6 = *(undefined8 *)piVar16;
            uVar7 = *(undefined8 *)(piVar16 + 2);
            uVar8 = *(undefined8 *)(piVar16 + 6);
            *(undefined8 *)(piVar16 + uVar17 * 8 + 4) = *(undefined8 *)(piVar16 + 4);
            *(undefined8 *)(piVar16 + uVar17 * 8 + 4 + 2) = uVar8;
            *(undefined8 *)(piVar16 + uVar17 * 8) = uVar6;
            *(undefined8 *)(piVar16 + uVar17 * 8 + 2) = uVar7;
            *(undefined8 *)(piVar16 + 4) = uVar4;
            *(undefined8 *)(piVar16 + 6) = uVar5;
            *(undefined8 *)piVar16 = uVar2;
            *(undefined8 *)(piVar16 + 2) = uVar3;
            piVar23 = piVar18 + 8;
            piVar11 = piVar16;
            do {
              piVar9 = piVar11 + 8;
              piVar19 = piVar11 + 8;
              do {
                piVar11 = piVar19;
                piVar24 = piVar9;
                if (piVar18 < piVar11) break;
                piVar9 = piVar24 + 8;
                piVar19 = piVar11 + 8;
              } while (*piVar11 <= *piVar16);
              piVar9 = piVar23 + -0x10;
              do {
                piVar19 = piVar23;
                piVar25 = piVar9;
                piVar23 = piVar19 + -8;
                if (piVar23 <= piVar16) break;
                piVar9 = piVar25 + -8;
              } while (*piVar16 <= *piVar23);
              if (piVar23 < piVar11) goto LAB_14756ef1b;
              uVar2 = *(undefined8 *)piVar11;
              uVar3 = *(undefined8 *)(piVar11 + 2);
              uVar4 = *(undefined8 *)(piVar11 + 4);
              uVar5 = *(undefined8 *)(piVar11 + 6);
              uVar6 = *(undefined8 *)piVar23;
              uVar7 = *(undefined8 *)(piVar19 + -6);
              uVar8 = *(undefined8 *)(piVar19 + -2);
              *(undefined8 *)(piVar11 + 4) = *(undefined8 *)(piVar19 + -4);
              *(undefined8 *)(piVar11 + 6) = uVar8;
              *(undefined8 *)piVar11 = uVar6;
              *(undefined8 *)(piVar11 + 2) = uVar7;
              *(undefined8 *)(piVar19 + -4) = uVar4;
              *(undefined8 *)(piVar19 + -2) = uVar5;
              *(undefined8 *)piVar23 = uVar2;
              *(undefined8 *)(piVar19 + -6) = uVar3;
            } while( true );
          }
          if (piVar16 < piVar18) {
            do {
              piVar13 = piVar16;
              if (piVar16 + 8 <= piVar18) {
                piVar26 = piVar16 + 8;
                iVar20 = *piVar16;
                do {
                  iVar14 = *piVar26;
                  iVar22 = iVar20;
                  if (iVar20 <= iVar14) {
                    iVar22 = iVar14;
                  }
                  if (iVar20 < iVar14) {
                    piVar13 = piVar26;
                  }
                  piVar26 = piVar26 + 8;
                  iVar20 = iVar22;
                } while (piVar26 <= piVar18);
              }
              local_68 = *(undefined8 *)piVar13;
              uStack_60 = *(undefined8 *)(piVar13 + 2);
              local_58 = *(undefined8 *)(piVar13 + 4);
              uStack_50 = *(undefined8 *)(piVar13 + 6);
              uVar5 = local_68;
              uVar6 = uStack_60;
              uVar2 = *(undefined8 *)piVar18;
              uVar3 = *(undefined8 *)(piVar18 + 2);
              uVar4 = *(undefined8 *)(piVar18 + 6);
              *(undefined8 *)(piVar13 + 4) = *(undefined8 *)(piVar18 + 4);
              *(undefined8 *)(piVar13 + 6) = uVar4;
              *(undefined8 *)piVar13 = uVar2;
              *(undefined8 *)(piVar13 + 2) = uVar3;
              local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
              *(undefined8 *)(piVar18 + 4) = local_58;
              *(undefined8 *)(piVar18 + 6) = uStack_50;
              *piVar18 = (int)local_68;
              piVar18[1] = local_68._4_4_;
              piVar18[2] = (int)uStack_60;
              piVar18[3] = uStack_60._4_4_;
              piVar18 = piVar18 + -8;
              local_68 = uVar5;
              uStack_60 = uVar6;
            } while (piVar16 < piVar18);
          }
          goto LAB_14756f2bd;
        }
LAB_14756efe9:
        if (uVar21 != 0) {
          iVar20 = (iVar14 - (iVar14 + -1 >> 0x1f)) + -1 >> 1;
          iVar14 = iVar20;
joined_r0x00014756f010:
          do {
            iVar22 = iVar20 * 2 + 1;
            if (iVar22 < (int)uVar21) {
              iVar15 = iVar20 * 2 + 2;
              if ((iVar15 < (int)uVar21) &&
                 (piVar16[(longlong)iVar22 * 8] <= piVar16[(longlong)iVar15 * 8])) {
                iVar22 = iVar15;
              }
              if (piVar16[(longlong)iVar20 * 8] < piVar16[(longlong)iVar22 * 8]) {
                piVar13 = piVar16 + (longlong)iVar20 * 8;
                piVar18 = piVar16 + (longlong)iVar22 * 8;
                local_68 = *(undefined8 *)piVar13;
                uStack_60 = *(undefined8 *)(piVar13 + 2);
                local_58 = *(undefined8 *)(piVar13 + 4);
                uStack_50 = *(undefined8 *)(piVar13 + 6);
                uVar5 = local_68;
                uVar6 = uStack_60;
                uVar2 = *(undefined8 *)piVar18;
                uVar3 = *(undefined8 *)(piVar18 + 2);
                uVar4 = *(undefined8 *)(piVar18 + 6);
                *(undefined8 *)(piVar13 + 4) = *(undefined8 *)(piVar18 + 4);
                *(undefined8 *)(piVar13 + 6) = uVar4;
                *(undefined8 *)piVar13 = uVar2;
                *(undefined8 *)(piVar13 + 2) = uVar3;
                local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
                uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
                *(undefined8 *)(piVar18 + 4) = local_58;
                *(undefined8 *)(piVar18 + 6) = uStack_50;
                *piVar18 = (int)local_68;
                piVar18[1] = local_68._4_4_;
                piVar18[2] = (int)uStack_60;
                piVar18[3] = uStack_60._4_4_;
                local_68 = uVar5;
                uStack_60 = uVar6;
                iVar20 = iVar22;
                goto joined_r0x00014756f010;
              }
            }
            bVar27 = iVar14 != 0;
            iVar20 = iVar14 + -1;
            iVar14 = iVar20;
          } while (bVar27);
          if (1 < (int)uVar21) {
            uVar17 = (ulonglong)uVar21 - 1;
            local_68 = *(undefined8 *)piVar16;
            uStack_60 = *(undefined8 *)(piVar16 + 2);
            local_58 = *(undefined8 *)(piVar16 + 4);
            uStack_50 = *(undefined8 *)(piVar16 + 6);
            uVar5 = local_68;
            uVar6 = uStack_60;
            uVar2 = *(undefined8 *)(piVar16 + uVar17 * 8);
            uVar3 = *(undefined8 *)(piVar16 + uVar17 * 8 + 2);
            uVar4 = *(undefined8 *)(piVar16 + uVar17 * 8 + 4 + 2);
            *(undefined8 *)(piVar16 + 4) = *(undefined8 *)(piVar16 + uVar17 * 8 + 4);
            *(undefined8 *)(piVar16 + 6) = uVar4;
            *(undefined8 *)piVar16 = uVar2;
            *(undefined8 *)(piVar16 + 2) = uVar3;
            local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
            uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
            *(undefined8 *)(piVar16 + uVar17 * 8 + 4) = local_58;
            *(undefined8 *)(piVar16 + uVar17 * 8 + 4 + 2) = uStack_50;
            piVar18 = piVar16 + uVar17 * 8;
            *piVar18 = (int)local_68;
            piVar18[1] = local_68._4_4_;
            piVar18[2] = (int)uStack_60;
            piVar18[3] = uStack_60._4_4_;
            local_68 = uVar5;
            uStack_60 = uVar6;
            if (uVar21 != 2) {
              do {
                iVar20 = 0;
                iVar22 = 1;
                iVar14 = 0;
                do {
                  iVar20 = iVar20 + 2;
                  iVar15 = iVar22;
                  if (((longlong)iVar20 < (longlong)uVar17) &&
                     (piVar16[(longlong)iVar22 * 8] <= piVar16[(longlong)iVar20 * 8])) {
                    iVar15 = iVar20;
                  }
                  if (piVar16[(longlong)iVar15 * 8] <= piVar16[(longlong)iVar14 * 8]) break;
                  piVar13 = piVar16 + (longlong)iVar14 * 8;
                  piVar18 = piVar16 + (longlong)iVar15 * 8;
                  uVar2 = *(undefined8 *)piVar13;
                  uVar3 = *(undefined8 *)(piVar13 + 2);
                  uVar4 = *(undefined8 *)(piVar13 + 4);
                  uVar5 = *(undefined8 *)(piVar13 + 6);
                  uVar6 = *(undefined8 *)piVar18;
                  uVar7 = *(undefined8 *)(piVar18 + 2);
                  uVar8 = *(undefined8 *)(piVar18 + 6);
                  *(undefined8 *)(piVar13 + 4) = *(undefined8 *)(piVar18 + 4);
                  *(undefined8 *)(piVar13 + 6) = uVar8;
                  *(undefined8 *)piVar13 = uVar6;
                  *(undefined8 *)(piVar13 + 2) = uVar7;
                  *(undefined8 *)(piVar18 + 4) = uVar4;
                  *(undefined8 *)(piVar18 + 6) = uVar5;
                  *(undefined8 *)piVar18 = uVar2;
                  *(undefined8 *)(piVar18 + 2) = uVar3;
                  iVar20 = iVar15 * 2;
                  iVar22 = iVar15 * 2 + 1;
                  iVar14 = iVar15;
                } while ((longlong)iVar22 < (longlong)uVar17);
                uVar12 = uVar17 - 1;
                local_68 = *(undefined8 *)piVar16;
                uStack_60 = *(undefined8 *)(piVar16 + 2);
                local_58 = *(undefined8 *)(piVar16 + 4);
                uStack_50 = *(undefined8 *)(piVar16 + 6);
                uVar5 = local_68;
                uVar6 = uStack_60;
                uVar2 = *(undefined8 *)(piVar16 + uVar12 * 8);
                uVar3 = *(undefined8 *)(piVar16 + uVar12 * 8 + 2);
                uVar4 = *(undefined8 *)(piVar16 + uVar12 * 8 + 4 + 2);
                *(undefined8 *)(piVar16 + 4) = *(undefined8 *)(piVar16 + uVar12 * 8 + 4);
                *(undefined8 *)(piVar16 + 6) = uVar4;
                *(undefined8 *)piVar16 = uVar2;
                *(undefined8 *)(piVar16 + 2) = uVar3;
                local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
                uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
                *(undefined8 *)(piVar16 + uVar12 * 8 + 4) = local_58;
                *(undefined8 *)(piVar16 + uVar12 * 8 + 4 + 2) = uStack_50;
                piVar18 = piVar16 + uVar12 * 8;
                *piVar18 = (int)local_68;
                piVar18[1] = local_68._4_4_;
                piVar18[2] = (int)uStack_60;
                piVar18[3] = uStack_60._4_4_;
                bVar27 = 2 < uVar17;
                uVar17 = uVar12;
                local_68 = uVar5;
                uStack_60 = uVar6;
              } while (bVar27);
            }
          }
        }
LAB_14756f2bd:
        plVar10 = plVar10 + -3;
      } while (&local_368 <= plVar10);
      uVar17 = (ulonglong)*(uint *)(local_370 + 0x158);
      param_1 = local_370;
      param_3 = local_371;
    }
    iVar20 = (int)uVar17;
    if (param_3 == '\0') {
      if (1 < iVar20) {
        piVar18 = *(int **)(param_1 + 0x150);
        uVar12 = 0;
        do {
          piVar18 = piVar18 + 8;
          if (param_2 <= *piVar18) {
            uVar12 = uVar12 & 0xffffffff;
            goto LAB_14756f2f1;
          }
          uVar12 = uVar12 + 1;
        } while (uVar17 - 1 != uVar12);
      }
      uVar12 = (ulonglong)(iVar20 - 1);
    }
    else {
      if (1 < iVar20) {
        uVar12 = (ulonglong)(iVar20 - 1);
        do {
          uVar21 = (int)uVar12 - 1;
          if (*(int *)(*(longlong *)(param_1 + 0x150) + (ulonglong)uVar21 * 0x20) <= param_2)
          goto LAB_14756f2f1;
          uVar12 = (ulonglong)uVar21;
        } while (0 < (int)uVar21);
      }
      uVar12 = 0;
    }
  }
LAB_14756f2f1:
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
LAB_14756ef1b:
  local_68 = *(undefined8 *)piVar16;
  uStack_60 = *(undefined8 *)(piVar16 + 2);
  local_58 = *(undefined8 *)(piVar16 + 4);
  uStack_50 = *(undefined8 *)(piVar16 + 6);
  uVar5 = local_68;
  uVar6 = uStack_60;
  uVar2 = *(undefined8 *)piVar23;
  uVar3 = *(undefined8 *)(piVar19 + -6);
  uVar4 = *(undefined8 *)(piVar19 + -2);
  *(undefined8 *)(piVar16 + 4) = *(undefined8 *)(piVar19 + -4);
  *(undefined8 *)(piVar16 + 6) = uVar4;
  *(undefined8 *)piVar16 = uVar2;
  *(undefined8 *)(piVar16 + 2) = uVar3;
  local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
  *(undefined8 *)(piVar19 + -4) = local_58;
  *(undefined8 *)(piVar19 + -2) = uStack_50;
  *piVar23 = (int)local_68;
  piVar19[-7] = local_68._4_4_;
  piVar19[-6] = (int)uStack_60;
  piVar19[-5] = uStack_60._4_4_;
  iVar20 = iVar20 + -1;
  piVar19 = piVar19 + -0x10;
  local_68 = uVar5;
  uStack_60 = uVar6;
  if ((longlong)piVar25 - (longlong)piVar26 < (longlong)piVar13 - (longlong)piVar24) {
    if (piVar11 < piVar18) {
      *plVar10 = (longlong)piVar11;
      plVar10[1] = (longlong)piVar18;
      *(int *)(plVar10 + 2) = iVar20;
      plVar10 = plVar10 + 3;
    }
    piVar24 = piVar16;
    piVar13 = piVar25;
    if (piVar23 <= piVar16 + 8) goto LAB_14756f2bd;
  }
  else {
    if (piVar16 + 8 < piVar23) {
      *plVar10 = (longlong)piVar16;
      plVar10[1] = (longlong)piVar19;
      *(int *)(plVar10 + 2) = iVar20;
      plVar10 = plVar10 + 3;
    }
    piVar16 = piVar11;
    piVar19 = piVar18;
    piVar13 = piVar18;
    if (piVar18 <= piVar11) goto LAB_14756f2bd;
  }
  iVar14 = (int)((ulonglong)((longlong)piVar13 - (longlong)piVar24) >> 5);
  uVar21 = iVar14 + 1;
  piVar18 = piVar19;
  piVar26 = piVar24;
  if (iVar20 == 0) goto LAB_14756efe9;
  goto LAB_14756ee26;
}



// FUNCTION 14756f382 FUN_14756f382 body=132 status=ok
// SIG undefined FUN_14756f382(void)

void FUN_14756f382(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_14757eb8c(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14756f410 FUN_14756f410 body=1223 status=ok
// SIG undefined FUN_14756f410(void)

void FUN_14756f410(longlong param_1,int *param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  ulonglong local_e8;
  int *local_e0;
  longlong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  int *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = (ulonglong)*(int *)(param_1 + 0x30);
  if (local_108 == 0) goto LAB_14756f8a2;
  local_ec = *param_2;
  local_f0 = param_2[1];
  local_f4 = param_2[2];
  local_f8 = param_2[3];
  local_fc = param_2[4];
  local_100 = param_2[5];
  piVar11 = *(int **)(param_1 + 0x28);
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  if (param_3 == 0) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
  }
  else {
    FUN_1400bbfc4(&local_80,param_3);
    uStack_a0 = CONCAT44(uStack_7c,local_80);
    local_98 = CONCAT44(uStack_74,uStack_78);
    if (uStack_90 != 0) {
      FUN_1400020a8();
    }
    uStack_90 = CONCAT44(uStack_6c,local_70);
    local_88 = CONCAT44(uStack_64,uStack_68);
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
      uVar14 = *(uint *)(param_3 + 0xc);
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        local_a8 = 0;
        goto LAB_14756f54d;
      }
    }
    FUN_14485c47a(&local_a8,param_3);
  }
LAB_14756f54d:
  cVar2 = FUN_144a7afa6(piVar11 + 8,&uStack_a0);
  if (uStack_90 != 0) {
    FUN_1400020a8();
  }
  local_e8 = 0;
  bVar15 = false;
  if ((((cVar2 != '\0') && (bVar15 = false, local_ec == *piVar11)) && (local_f0 == piVar11[1])) &&
     ((local_f4 == piVar11[2] && (local_f8 == piVar11[3])))) {
    if (local_fc == piVar11[4]) {
      bVar15 = local_100 == piVar11[5];
    }
    else {
      bVar15 = false;
    }
  }
  local_b8 = -local_108;
  local_c0 = piVar11 + 0x1a;
  uVar5 = 0;
  local_e0 = piVar11;
  local_c8 = param_1;
LAB_14756f5ff:
  do {
    uVar14 = (int)uVar5 + 1;
    if ((int)uVar14 < (int)local_108) {
      lVar13 = (longlong)(int)uVar5;
      local_d8 = lVar13 + 1;
      lVar6 = local_b8 + 1;
      local_b0 = lVar13 * 9;
      piVar12 = local_c0 + lVar13 * 0x12;
      bVar1 = true;
      lVar9 = 0;
      local_d0 = uVar5;
      do {
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_88 = 0;
        if (param_3 == 0) {
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
        }
        else {
          FUN_1400bbfc4(&local_80,param_3);
          uStack_a0 = CONCAT44(uStack_7c,local_80);
          local_98 = CONCAT44(uStack_74,uStack_78);
          if (uStack_90 != 0) {
            FUN_1400020a8();
          }
          uStack_90 = CONCAT44(uStack_6c,local_70);
          local_88 = CONCAT44(uStack_64,uStack_68);
          cVar2 = (*(code *)PTR_FUN_14c758760)();
          if (cVar2 != '\0') {
            uVar14 = *(uint *)(param_3 + 0xc);
            if ((int)uVar14 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
              local_a8 = 0;
              goto LAB_14756f70f;
            }
          }
          FUN_14485c47a(&local_a8,param_3);
        }
LAB_14756f70f:
        cVar2 = FUN_144a7afa6(piVar12,&uStack_a0);
        if (uStack_90 != 0) {
          FUN_1400020a8();
        }
        piVar11 = local_e0;
        uVar4 = local_d0;
        if (((cVar2 == '\0') || (local_ec != piVar12[-8])) ||
           ((local_f0 != piVar12[-7] ||
            (((local_f4 != piVar12[-6] || (local_f8 != piVar12[-5])) || (local_fc != piVar12[-4]))))
           )) {
          if (bVar15 != false) {
            FUN_1407c9f3e(local_e0 + local_b0 * 2,(int)lVar9 + 1);
            if (!bVar1) goto LAB_14756f88b;
            uVar5 = local_d8 + lVar9;
            bVar15 = false;
            goto LAB_14756f5ff;
          }
        }
        else if ((local_100 == piVar12[-3]) != bVar15) {
          uVar5 = (ulonglong)(uint)((int)local_d8 + (int)lVar9);
          goto LAB_14756f7d2;
        }
        bVar1 = lVar9 + lVar13 + 2 < (longlong)local_108;
        lVar9 = lVar9 + 1;
        piVar12 = piVar12 + 0x12;
      } while (lVar6 + lVar13 + lVar9 != 0);
      uVar5 = local_108 & 0xffffffff;
    }
    else {
      bVar1 = false;
      uVar4 = uVar5;
      uVar5 = (ulonglong)uVar14;
    }
LAB_14756f7d2:
    iVar3 = (int)uVar4;
    iVar10 = (int)uVar5 - iVar3;
    if (bVar15 == false) {
      iVar8 = (int)local_e8;
      if (iVar8 != iVar3) {
        memmove(piVar11 + (longlong)iVar8 * 0x12,piVar11 + (longlong)iVar3 * 0x12,
                (longlong)iVar10 * 0x48);
      }
      local_e8 = (ulonglong)(uint)(iVar8 + iVar10);
      bVar15 = true;
      if (!bVar1) break;
      goto LAB_14756f5ff;
    }
    FUN_1407c9f3e(piVar11 + (longlong)iVar3 * 0x12,iVar10);
    bVar15 = false;
  } while (bVar1);
LAB_14756f88b:
  *(int *)(local_c8 + 0x30) = (int)local_e8;
  if ((int)local_108 != (int)local_e8) {
    *(undefined1 *)(local_c8 + 0x38) = 1;
  }
LAB_14756f8a2:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14756f8d8 FUN_14756f8d8 body=22 status=ok
// SIG undefined FUN_14756f8d8(void)

undefined8 FUN_14756f8d8(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014756f8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x2e8))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14756f8ee FUN_14756f8ee body=289 status=ok
// SIG undefined FUN_14756f8ee(void)

longlong FUN_14756f8ee(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar8 = 0;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    iVar8 = 0;
    uVar6 = *(uint *)(param_1 + 1);
    do {
      uVar2 = (uVar6 >> 1) + iVar8;
      iVar5 = (uVar6 & 1) + uVar2;
      lVar7 = (ulonglong)uVar2 * 0x30;
      lVar1 = *param_1 + lVar7;
      uVar2 = *(uint *)(*param_1 + lVar7);
      if ((*param_2 < uVar2) ||
         ((*param_2 <= uVar2 &&
          ((param_2[1] < *(uint *)(lVar1 + 4) ||
           ((param_2[1] == *(uint *)(lVar1 + 4) &&
            ((param_2[2] < *(uint *)(lVar1 + 8) ||
             ((param_2[2] == *(uint *)(lVar1 + 8) && (param_2[3] < *(uint *)(lVar1 + 0xc))))))))))))
         ) {
        iVar5 = iVar8;
      }
      iVar8 = iVar5;
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
  }
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_68 = *param_3;
  *param_3 = 0;
  local_60 = (undefined4)param_3[1];
  local_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_58 = 0;
  local_50 = 0;
  lVar7 = FUN_14756fa10(local_78,&local_78,iVar8);
  lVar1 = local_68;
  FUN_140843826(local_68,local_60);
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
  }
  bVar4 = FUN_147026224(lVar7 + 0x10);
  if ((~bVar4 & 3) == 0) {
    *(byte *)(lVar7 + 0x20) = *(byte *)(lVar7 + 0x20) | 1;
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 14756fa10 FUN_14756fa10 body=106 status=ok
// SIG undefined FUN_14756fa10(void)

void FUN_14756fa10(longlong *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14757ed16(param_1,iVar1);
  }
  lVar2 = (ulonglong)param_3 * 0x30;
  memmove((void *)(*param_1 + lVar2 + 0x30),(void *)(*param_1 + lVar2),
          (ulonglong)(iVar1 - param_3) * 0x30);
  FUN_14757ecb8(lVar2 + *param_1,param_2);
  return;
}



// FUNCTION 14756fa7a FUN_14756fa7a body=289 status=ok
// SIG undefined FUN_14756fa7a(void)

void FUN_14756fa7a(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  
  uVar8 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar8) {
    lVar6 = *param_1;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar9 = 0;
    uVar10 = uVar8;
    do {
      uVar15 = (uVar10 >> 1) + (int)uVar9;
      lVar14 = (ulonglong)uVar15 * 0x30;
      lVar13 = lVar6 + lVar14;
      uVar5 = *(uint *)(lVar6 + lVar14);
      if ((uVar5 < uVar1) ||
         ((uVar5 <= uVar1 &&
          ((*(uint *)(lVar13 + 4) < uVar2 ||
           ((*(uint *)(lVar13 + 4) == uVar2 &&
            ((*(uint *)(lVar13 + 8) < uVar3 ||
             ((*(uint *)(lVar13 + 8) == uVar3 && (*(uint *)(lVar13 + 0xc) < uVar4)))))))))))) {
        uVar9 = (ulonglong)(uVar15 + (uVar10 & 1));
      }
      bVar7 = 1 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar7);
    if (((((int)uVar9 < (int)uVar8) && (lVar13 = uVar9 * 0x30, *(uint *)(lVar6 + lVar13) == uVar1))
        && (*(uint *)(lVar6 + 4 + lVar13) == uVar2)) &&
       ((*(uint *)(lVar6 + 8 + lVar13) == uVar3 && (*(uint *)(lVar6 + 0xc + lVar13) == uVar4)))) {
      iVar11 = 0;
      do {
        uVar10 = (uVar8 >> 1) + iVar11;
        iVar12 = (uVar8 & 1) + uVar10;
        lVar14 = (ulonglong)uVar10 * 0x30;
        lVar13 = lVar6 + lVar14;
        uVar10 = *(uint *)(lVar6 + lVar14);
        if ((uVar1 < uVar10) ||
           ((uVar1 <= uVar10 &&
            ((uVar2 < *(uint *)(lVar13 + 4) ||
             ((uVar2 == *(uint *)(lVar13 + 4) &&
              ((uVar3 < *(uint *)(lVar13 + 8) ||
               ((uVar3 == *(uint *)(lVar13 + 8) && (uVar4 < *(uint *)(lVar13 + 0xc))))))))))))) {
          iVar12 = iVar11;
        }
        iVar11 = iVar12;
        bVar7 = 1 < uVar8;
        uVar8 = uVar8 >> 1;
      } while (bVar7);
      if (iVar11 != (int)uVar9) {
        FUN_14757edaa(param_1);
        FUN_14757ee12(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14756fb9c FUN_14756fb9c body=293 status=ok
// SIG undefined FUN_14756fb9c(void)

void FUN_14756fb9c(longlong *param_1,uint *param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = uVar2;
    do {
      uVar1 = (uVar7 >> 1) + uVar8;
      lVar9 = (ulonglong)uVar1 * 0x30;
      lVar6 = *param_1 + lVar9;
      uVar3 = *(uint *)(*param_1 + lVar9);
      if ((uVar3 < *param_2) ||
         ((uVar3 <= *param_2 &&
          ((*(uint *)(lVar6 + 4) < param_2[1] ||
           ((*(uint *)(lVar6 + 4) == param_2[1] &&
            ((*(uint *)(lVar6 + 8) < param_2[2] ||
             ((*(uint *)(lVar6 + 8) == param_2[2] && (*(uint *)(lVar6 + 0xc) < param_2[3])))))))))))
         ) {
        uVar8 = uVar1 + (uVar7 & 1);
      }
      bVar10 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar10);
  }
  if ((int)uVar8 < (int)uVar2) {
    lVar6 = (ulonglong)uVar8 * 0x30 + 0xc;
    do {
      lVar9 = *param_1;
      if (*(uint *)(lVar9 + -0xc + lVar6) != *param_2) {
        return;
      }
      if (*(uint *)(lVar9 + -8 + lVar6) != param_2[1]) {
        return;
      }
      if (*(uint *)(lVar9 + -4 + lVar6) != param_2[2]) {
        return;
      }
      if (*(uint *)(lVar9 + lVar6) != param_2[3]) {
        return;
      }
      lVar9 = FUN_140521dd2(param_1,uVar8,param_3);
      if (lVar9 != 0) {
        iVar4 = *(int *)(param_4 + 0x10);
        *(uint *)(param_4 + 0x10) = iVar4 + 1U;
        if (*(uint *)(param_4 + 0x14) < iVar4 + 1U) {
          FUN_14571f162(param_4,iVar4);
        }
        lVar5 = *(longlong *)(param_4 + 8);
        if (*(longlong *)(param_4 + 8) == 0) {
          lVar5 = param_4;
        }
        *(longlong *)(lVar5 + (longlong)iVar4 * 8) = lVar9;
      }
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x30;
    } while (uVar2 != uVar8);
  }
  return;
}



// FUNCTION 14756fcc2 FUN_14756fcc2 body=299 status=ok
// SIG undefined FUN_14756fcc2(void)

void FUN_14756fcc2(longlong *param_1,uint *param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = uVar2;
    do {
      uVar1 = (uVar7 >> 1) + uVar8;
      lVar6 = (ulonglong)uVar1 * 0x30;
      lVar5 = *param_1 + lVar6;
      uVar3 = *(uint *)(*param_1 + lVar6);
      if ((uVar3 < *param_2) ||
         ((uVar3 <= *param_2 &&
          ((*(uint *)(lVar5 + 4) < param_2[1] ||
           ((*(uint *)(lVar5 + 4) <= param_2[1] &&
            ((*(uint *)(lVar5 + 8) < param_2[2] ||
             ((*(uint *)(lVar5 + 8) == param_2[2] && (*(uint *)(lVar5 + 0xc) < param_2[3])))))))))))
         ) {
        uVar8 = uVar1 + (uVar7 & 1);
      }
      bVar9 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar9);
  }
  if ((int)uVar8 < (int)uVar2) {
    do {
      lVar5 = *param_1;
      lVar6 = (ulonglong)uVar8 * 0x30;
      if (*(uint *)(lVar5 + lVar6) != *param_2) {
        return;
      }
      if (*(uint *)(lVar5 + 4 + lVar6) != param_2[1]) {
        return;
      }
      if (*(uint *)(lVar5 + 8 + lVar6) != param_2[2]) {
        return;
      }
      if (*(uint *)(lVar5 + 0xc + lVar6) != param_2[3]) {
        return;
      }
      uVar4 = FUN_147025dfc(lVar5 + lVar6 + 0x10,param_4);
      lVar5 = FUN_140521eec(uVar4);
      if ((longlong)(int)param_3[1] != 0) {
        lVar6 = 0;
        do {
          if (*(longlong *)(*param_3 + lVar6) == lVar5) {
            FUN_14757eec0(param_1,uVar8);
            FUN_14757ee12(param_1);
            goto LAB_14756fdbc;
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)param_3[1] * 8 != lVar6);
      }
      uVar8 = uVar8 + 1;
LAB_14756fdbc:
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14756fdee FUN_14756fdee body=276 status=ok
// SIG undefined FUN_14756fdee(void)

void FUN_14756fdee(longlong *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar8;
      lVar7 = (ulonglong)uVar1 * 0x30;
      lVar5 = *param_1 + lVar7;
      uVar3 = *(uint *)(*param_1 + lVar7);
      if ((uVar3 < *param_2) ||
         ((uVar3 <= *param_2 &&
          ((*(uint *)(lVar5 + 4) < param_2[1] ||
           ((*(uint *)(lVar5 + 4) == param_2[1] &&
            ((*(uint *)(lVar5 + 8) < param_2[2] ||
             ((*(uint *)(lVar5 + 8) == param_2[2] && (*(uint *)(lVar5 + 0xc) < param_2[3])))))))))))
         ) {
        uVar8 = uVar1 + (uVar6 & 1);
      }
      bVar9 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar9);
  }
  if ((int)uVar8 < (int)uVar2) {
    do {
      lVar5 = *param_1;
      lVar7 = (ulonglong)uVar8 * 0x30;
      if (*(uint *)(lVar5 + lVar7) != *param_2) {
        return;
      }
      if (*(uint *)(lVar5 + 4 + lVar7) != param_2[1]) {
        return;
      }
      if (*(uint *)(lVar5 + 8 + lVar7) != param_2[2]) {
        return;
      }
      if (*(uint *)(lVar5 + 0xc + lVar7) != param_2[3]) {
        return;
      }
      uVar4 = FUN_147025dfc(lVar5 + lVar7 + 0x10,param_3);
      lVar5 = FUN_140521eec(uVar4);
      if ((lVar5 == 0) || ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0)) {
        FUN_14757eec0(param_1,uVar8);
        FUN_14757ee12(param_1);
      }
      else {
        uVar8 = uVar8 + 1;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14756ff02 FUN_14756ff02 body=81 status=ok
// SIG undefined FUN_14756ff02(void)

ulonglong FUN_14756ff02(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_1402984e6();
    lVar2 = FUN_144a78ede(param_1,uVar1);
    if (((lVar2 != 0) &&
        (uVar1 = FUN_14758438e(lVar2,*(undefined4 *)(param_1 + 0xb8)), (char)uVar1 == '\0')) &&
       (*(char *)(lVar2 + 0x69) == '\0')) {
      return CONCAT71((int7)((ulonglong)uVar1 >> 8),*(undefined1 *)(param_1 + 0xc0)) &
             0xffffffffffffff01;
    }
  }
  return 0;
}



// FUNCTION 14756ff54 FUN_14756ff54 body=164 status=ok
// SIG undefined FUN_14756ff54(void)

longlong FUN_14756ff54(longlong *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < (int)param_1[1]) {
    lVar2 = 0;
    do {
      lVar3 = *(longlong *)(*param_1 + lVar2 * 8);
      if ((((param_3 == -1) || (*(int *)(lVar3 + 0xb8) == param_3)) &&
          (local_3c = param_2, cVar1 = FUN_1400a246c(lVar3 + 0x98,&local_3c), cVar1 != '\0')) &&
         (cVar1 = FUN_14756ff02(lVar3), cVar1 != '\0')) goto LAB_14756ffd1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_1[1]);
  }
  lVar3 = 0;
LAB_14756ffd1:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14756fffa FUN_14756fffa body=2267 status=ok
// SIG undefined FUN_14756fffa(void)

void FUN_14756fffa(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong *unaff_RBP;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong *in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  longlong *plVar19;
  uint uVar20;
  int iVar21;
  ulonglong unaff_R15;
  float fVar22;
  undefined1 auStack_3b8 [32];
  longlong *local_398;
  longlong *local_390;
  ulonglong local_388;
  longlong *local_380;
  longlong *local_378;
  longlong *local_370;
  longlong *local_368;
  longlong *local_360;
  ulonglong local_358;
  ulonglong local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  iVar15 = (int)param_1[1];
  if (1 < (longlong)iVar15) {
    lVar1 = *param_1;
    memset(local_338,0,0x2f0);
    local_340 = lVar1 + (longlong)iVar15 * 8 + -8;
    local_348 = lVar1;
    fVar22 = logf((float)iVar15);
    local_358 = (ulonglong)(fVar22 + fVar22);
    local_338[0] = (int)local_358;
    plVar9 = &local_348;
    local_350 = local_358;
    do {
      plVar13 = (longlong *)*plVar9;
      plVar6 = (longlong *)plVar9[1];
      iVar15 = (int)((ulonglong)((longlong)plVar6 - (longlong)plVar13) >> 3);
      plVar16 = (longlong *)(ulonglong)(iVar15 + 1);
      local_390 = (longlong *)CONCAT44(local_390._4_4_,(int)plVar9[2]);
      plVar5 = plVar6;
      plVar4 = unaff_RBP;
      plVar19 = plVar13;
      local_398 = plVar9;
      local_370 = in_R11;
      if ((int)plVar9[2] != 0) {
LAB_1475700b0:
        unaff_RBP = plVar5;
        if (8 < (int)(uint)plVar16) {
          uVar17 = (uint)plVar16 >> 1;
          lVar1 = plVar13[uVar17];
          plVar13[uVar17] = *plVar13;
          *plVar13 = lVar1;
          plVar16 = unaff_RBP + 1;
          plVar14 = plVar13;
          local_380 = plVar19;
          local_378 = plVar6;
          do {
            plVar9 = plVar14 + 1;
            plVar5 = plVar14 + 1;
            do {
              plVar14 = plVar5;
              plVar19 = plVar9;
              if (unaff_RBP < plVar14) break;
              uVar7 = 1;
              if (*plVar14 == 0) {
                uVar3 = 0;
                uVar8 = 1;
              }
              else {
                uVar8 = *(ulonglong *)(*plVar14 + 0x98);
                unaff_R13 = uVar8 >> 8;
                uVar3 = uVar8 & 0xffffffff00000000;
              }
              if (*plVar13 == 0) {
                uVar18 = 0;
              }
              else {
                uVar7 = *(ulonglong *)(*plVar13 + 0x98);
                unaff_R15 = uVar7 >> 8;
                uVar18 = uVar7 & 0xffffffff00000000;
              }
              cVar2 = FUN_14055b5b2(uVar7 & 0xff | (uint)((int)unaff_R15 << 8) | uVar18,
                                    uVar8 & 0xff | (uint)((int)unaff_R13 << 8) | uVar3);
              plVar9 = plVar19 + 1;
              plVar5 = plVar14 + 1;
              in_R11 = local_370;
            } while (cVar2 == '\0');
            plVar9 = plVar16 + -2;
            local_388 = unaff_R15;
            do {
              plVar5 = plVar16;
              plVar6 = plVar9;
              plVar16 = plVar5 + -1;
              if (plVar16 <= plVar13) break;
              uVar7 = 1;
              if (*plVar13 == 0) {
                uVar3 = 0;
                uVar8 = 1;
              }
              else {
                uVar8 = *(ulonglong *)(*plVar13 + 0x98);
                local_350 = uVar8 >> 8;
                uVar3 = uVar8 & 0xffffffff00000000;
              }
              if (*plVar16 == 0) {
                uVar18 = 0;
              }
              else {
                uVar7 = *(ulonglong *)(*plVar16 + 0x98);
                unaff_R12 = uVar7 >> 8;
                uVar18 = uVar7 & 0xffffffff00000000;
              }
              cVar2 = FUN_14055b5b2(uVar7 & 0xff | (uint)((int)unaff_R12 << 8) | uVar18,
                                    uVar8 & 0xff | (uint)((int)local_350 << 8) | uVar3);
              plVar9 = plVar6 + -1;
              in_R11 = local_370;
            } while (cVar2 == '\0');
            unaff_R15 = local_388;
            if (plVar16 < plVar14) goto LAB_147570293;
            lVar1 = *plVar14;
            *plVar14 = *plVar16;
            *plVar16 = lVar1;
          } while( true );
        }
        plVar9 = local_398;
        if (plVar13 < unaff_RBP) {
          local_370 = plVar13 + 1;
          plVar5 = plVar13;
          plVar6 = local_370;
          do {
            for (; plVar6 <= unaff_RBP; plVar6 = plVar6 + 1) {
              uVar7 = 1;
              if (*plVar6 == 0) {
                uVar3 = 0;
                uVar8 = 1;
              }
              else {
                uVar8 = *(ulonglong *)(*plVar6 + 0x98);
                local_358 = uVar8 >> 8;
                uVar3 = uVar8 & 0xffffffff00000000;
              }
              if (*plVar5 == 0) {
                uVar18 = 0;
              }
              else {
                uVar7 = *(ulonglong *)(*plVar5 + 0x98);
                in_R11 = (longlong *)(uVar7 >> 8);
                uVar18 = uVar7 & 0xffffffff00000000;
              }
              cVar2 = FUN_14055b5b2(uVar7 & 0xff | (uint)((int)in_R11 << 8) | uVar18,
                                    uVar8 & 0xff | (uint)((int)local_358 << 8) | uVar3);
              plVar9 = plVar6;
              if (cVar2 == '\0') {
                plVar9 = plVar5;
              }
              plVar5 = plVar9;
              plVar4 = unaff_RBP;
            }
            lVar1 = *plVar5;
            *plVar5 = *unaff_RBP;
            *unaff_RBP = lVar1;
            unaff_RBP = unaff_RBP + -1;
            plVar9 = local_398;
            plVar5 = plVar13;
            plVar6 = local_370;
          } while (plVar13 < unaff_RBP);
        }
        goto LAB_147570896;
      }
LAB_14757035b:
      plVar9 = local_398;
      plVar4 = unaff_RBP;
      if ((int)plVar16 != 0) {
        uVar17 = (iVar15 - (iVar15 + -1 >> 0x1f)) + -1 >> 1;
        local_388 = unaff_R15;
        local_380 = plVar16;
        do {
          plVar4 = (longlong *)(ulonglong)uVar17;
          uVar10 = uVar17 * 2 + 1;
          plVar9 = plVar4;
          plVar5 = plVar4;
          plVar6 = plVar4;
          local_360 = plVar4;
          if ((int)uVar10 < (int)plVar16) {
            do {
              local_368 = plVar6;
              local_378 = plVar5;
              local_390 = plVar9;
              uVar20 = uVar17 * 2 + 2;
              uVar17 = uVar10;
              if ((int)uVar20 < (int)plVar16) {
                uVar7 = 1;
                if (plVar13[(int)uVar20] == 0) {
                  uVar3 = 0;
                  uVar8 = 1;
                }
                else {
                  uVar8 = *(ulonglong *)(plVar13[(int)uVar20] + 0x98);
                  local_368 = (longlong *)(uVar8 >> 8);
                  uVar3 = uVar8 & 0xffffffff00000000;
                }
                if (plVar13[(int)uVar10] == 0) {
                  uVar18 = 0;
                }
                else {
                  uVar7 = *(ulonglong *)(plVar13[(int)uVar10] + 0x98);
                  local_378 = (longlong *)(uVar7 >> 8);
                  uVar18 = uVar7 & 0xffffffff00000000;
                }
                cVar2 = FUN_14055b5b2(uVar8 & 0xff | (uint)((int)local_368 << 8) | uVar3,
                                      uVar7 & 0xff | (uint)((int)local_378 << 8) | uVar18);
                if (cVar2 == '\0') {
                  uVar17 = uVar20;
                }
              }
              iVar15 = (int)plVar4;
              uVar7 = 1;
              if (plVar13[iVar15] == 0) {
                uVar3 = 0;
                uVar8 = 1;
              }
              else {
                uVar8 = *(ulonglong *)(plVar13[iVar15] + 0x98);
                local_390 = (longlong *)(uVar8 >> 8);
                uVar3 = uVar8 & 0xffffffff00000000;
              }
              if (plVar13[(int)uVar17] == 0) {
                uVar18 = 0;
              }
              else {
                uVar7 = *(ulonglong *)(plVar13[(int)uVar17] + 0x98);
                unaff_RBP = (longlong *)(uVar7 >> 8);
                uVar18 = uVar7 & 0xffffffff00000000;
              }
              cVar2 = FUN_14055b5b2(uVar8 & 0xff | (uint)((int)local_390 << 8) | uVar3,
                                    uVar7 & 0xff | (uint)((int)unaff_RBP << 8) | uVar18);
              plVar16 = local_380;
              in_R11 = local_370;
              if (cVar2 == '\0') break;
              lVar1 = plVar13[iVar15];
              plVar13[iVar15] = plVar13[(int)uVar17];
              plVar13[(int)uVar17] = lVar1;
              uVar10 = uVar17 * 2 + 1;
              plVar4 = (longlong *)(ulonglong)uVar17;
              plVar9 = local_390;
              plVar5 = local_378;
              plVar6 = local_368;
            } while ((int)uVar10 < (int)local_380);
          }
          uVar17 = (int)local_360 - 1;
        } while ((int)local_360 != 0);
        plVar9 = local_398;
        plVar4 = unaff_RBP;
        unaff_R15 = local_388;
        if (1 < (int)plVar16) {
          uVar7 = (ulonglong)plVar16 & 0xffffffff;
          plVar5 = (longlong *)*plVar13;
          *plVar13 = plVar13[uVar7 - 1];
          plVar13[uVar7 - 1] = (longlong)plVar5;
          if ((int)plVar16 != 2) {
            plVar6 = (longlong *)(uVar7 - 1);
            do {
              iVar15 = 0;
              iVar12 = 1;
              local_390 = plVar5;
              local_380 = plVar5;
              local_378 = plVar6;
              local_368 = plVar5;
              iVar21 = 0;
              do {
                iVar15 = iVar15 + 2;
                iVar11 = iVar12;
                if ((longlong)iVar15 < (longlong)local_378) {
                  uVar7 = 1;
                  if (plVar13[iVar15] == 0) {
                    uVar3 = 0;
                    uVar8 = 1;
                  }
                  else {
                    uVar8 = *(ulonglong *)(plVar13[iVar15] + 0x98);
                    local_368 = (longlong *)(uVar8 >> 8);
                    uVar3 = uVar8 & 0xffffffff00000000;
                  }
                  if (plVar13[iVar12] == 0) {
                    uVar18 = 0;
                  }
                  else {
                    uVar7 = *(ulonglong *)(plVar13[iVar12] + 0x98);
                    local_380 = (longlong *)(uVar7 >> 8);
                    uVar18 = uVar7 & 0xffffffff00000000;
                  }
                  cVar2 = FUN_14055b5b2(uVar8 & 0xff | (uint)((int)local_368 << 8) | uVar3,
                                        uVar7 & 0xff | (uint)((int)local_380 << 8) | uVar18);
                  if (cVar2 == '\0') {
                    iVar11 = iVar15;
                  }
                }
                uVar7 = 1;
                if (plVar13[iVar21] == 0) {
                  uVar3 = 0;
                  uVar8 = 1;
                }
                else {
                  uVar8 = *(ulonglong *)(plVar13[iVar21] + 0x98);
                  local_390 = (longlong *)(uVar8 >> 8);
                  uVar3 = uVar8 & 0xffffffff00000000;
                }
                if (plVar13[iVar11] == 0) {
                  uVar18 = 0;
                }
                else {
                  uVar7 = *(ulonglong *)(plVar13[iVar11] + 0x98);
                  unaff_RBP = (longlong *)(uVar7 >> 8);
                  uVar18 = uVar7 & 0xffffffff00000000;
                }
                cVar2 = FUN_14055b5b2(uVar8 & 0xff | (uint)((int)local_390 << 8) | uVar3,
                                      uVar7 & 0xff | (uint)((int)unaff_RBP << 8) | uVar18);
                if (cVar2 == '\0') break;
                lVar1 = plVar13[iVar21];
                plVar13[iVar21] = plVar13[iVar11];
                plVar13[iVar11] = lVar1;
                iVar15 = iVar11 * 2;
                iVar12 = iVar11 * 2 + 1;
                iVar21 = iVar11;
              } while ((longlong)iVar12 < (longlong)local_378);
              lVar1 = *plVar13;
              *plVar13 = plVar13[(longlong)local_378 + -1];
              plVar13[(longlong)local_378 + -1] = lVar1;
              plVar5 = (longlong *)((longlong)local_378 + -1);
              plVar6 = plVar5;
              plVar9 = local_398;
              plVar4 = unaff_RBP;
              in_R11 = local_370;
              unaff_R15 = local_388;
            } while ((longlong *)0x2 < local_378);
          }
        }
      }
LAB_147570896:
      plVar9 = plVar9 + -3;
      unaff_RBP = plVar4;
    } while (&local_348 <= plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147570293:
  lVar1 = *plVar13;
  *plVar13 = *plVar16;
  *plVar16 = lVar1;
  iVar21 = (int)local_390 + -1;
  local_390 = (longlong *)CONCAT44(local_390._4_4_,iVar21);
  plVar5 = plVar5 + -2;
  plVar4 = unaff_RBP;
  if ((longlong)plVar6 - (longlong)local_380 < (longlong)local_378 - (longlong)plVar19) {
    plVar9 = local_398;
    if (plVar14 < unaff_RBP) {
      *local_398 = (longlong)plVar14;
      local_398[1] = (longlong)unaff_RBP;
      *(int *)(local_398 + 2) = iVar21;
      plVar9 = local_398 + 3;
    }
    plVar19 = plVar13;
    if (plVar16 <= plVar13 + 1) goto LAB_147570896;
  }
  else {
    if (plVar13 + 1 < plVar16) {
      *local_398 = (longlong)plVar13;
      local_398[1] = (longlong)plVar5;
      *(int *)(local_398 + 2) = iVar21;
      local_398 = local_398 + 3;
    }
    plVar5 = unaff_RBP;
    plVar9 = local_398;
    plVar13 = plVar14;
    plVar6 = unaff_RBP;
    if (unaff_RBP <= plVar14) goto LAB_147570896;
  }
  local_398 = plVar9;
  iVar15 = (int)((ulonglong)((longlong)plVar6 - (longlong)plVar19) >> 3);
  plVar16 = (longlong *)(ulonglong)(iVar15 + 1);
  if (iVar21 == 0) goto LAB_14757035b;
  goto LAB_1475700b0;
}



// FUNCTION 1475708d6 FUN_1475708d6 body=855 status=ok
// SIG undefined FUN_1475708d6(void)

ulonglong FUN_1475708d6(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  undefined8 local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar8 = *(ulonglong *)(param_2 + 0x98);
  uVar1 = *(ulonglong *)(param_2 + 0xa0);
  uVar6 = uVar8 & 0xff;
  uVar13 = uVar1 & 0xff;
  iVar4 = (int)(uVar8 >> 0x20);
  iVar12 = (int)(uVar1 >> 0x20);
  if (((uVar6 != 2) && ((int)uVar13 != 2)) && (iVar12 <= iVar4)) {
    uVar8 = 0;
    goto LAB_14757093c;
  }
  iVar10 = (int)param_1[1];
  if ((longlong)iVar10 != 0) {
    lVar16 = (longlong)iVar10 << 3;
    lVar14 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar14 * 8) == param_2) {
        uVar5 = (uint)lVar14;
        if (uVar5 == 0xffffffff) break;
        if (iVar10 < (int)uVar5 || (int)uVar5 < 1) {
          if (param_3 != '\0') break;
        }
        else {
          plVar2 = *(longlong **)(*param_1 + -8 + (ulonglong)(uVar5 & 0x7fffffff) * 8);
          if (param_3 != '\0') {
            uVar6 = plVar2[0x13] & 0xff;
            if ((uVar6 == 2) ||
               ((int)((uint)((int)uVar6 != 1) + (int)((ulonglong)plVar2[0x13] >> 0x20)) < iVar12)) {
              (**(code **)(*plVar2 + 0x2b0))(plVar2,uVar1);
            }
            break;
          }
          if ((char)uVar8 == '\0') {
            uVar9 = uVar8 & 0xff;
            uVar6 = 1;
          }
          else if (((uint)uVar8 & 0xff) == 1) {
            uVar6 = 0;
            uVar9 = 0;
          }
          else {
            uVar9 = (ulonglong)((uint)uVar8 & 0xffffff00);
          }
          uVar11 = plVar2[0x13] & 0xff;
          if ((uVar11 == 2) ||
             (local_90 = uVar9,
             (int)((uint)((int)uVar11 != 1) + (int)((ulonglong)plVar2[0x13] >> 0x20)) < iVar4)) {
            (**(code **)(*plVar2 + 0x2b0))(plVar2,uVar6 | uVar8 & 0xffffffff00000000 | uVar9);
            iVar10 = (int)param_1[1];
          }
        }
        if ((-2 < (int)uVar5) && ((int)(uVar5 + 1) < iVar10)) {
          plVar2 = *(longlong **)(*param_1 + (longlong)(int)(uVar5 + 1) * 8);
          if ((char)uVar1 == '\0') {
            uVar6 = uVar1 & 0xff;
            uVar13 = 1;
          }
          else if (((uint)uVar1 & 0xff) == 1) {
            uVar6 = 0;
            uVar13 = 0;
          }
          else {
            uVar6 = (ulonglong)((uint)uVar1 & 0xffffff00);
          }
          uVar9 = plVar2[0x14] & 0xff;
          if ((uVar9 == 2) ||
             (iVar12 < (int)((uint)((int)uVar9 == 1) + (int)((ulonglong)plVar2[0x14] >> 0x20)))) {
            (**(code **)(*plVar2 + 0x2a8))(plVar2,uVar6 | uVar1 & 0xffffffff00000000 | uVar13);
          }
        }
        break;
      }
      lVar14 = lVar14 + 1;
      lVar16 = lVar16 + -8;
    } while (lVar16 != 0);
  }
  if (param_4 == '\0') {
LAB_147570997:
    uVar8 = 0;
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    lVar14 = param_1[1];
    local_80 = param_2;
    local_78 = uVar8;
    local_70 = uVar1;
    if ((longlong)(int)lVar14 == 0) goto LAB_147570997;
    lVar16 = *param_1;
    lVar7 = 0;
    do {
      lVar15 = *(longlong *)(lVar16 + lVar7);
      if (local_80 != lVar15) {
        local_58 = *(undefined8 **)(lVar15 + 0x98);
        uStack_50 = *(undefined4 *)(lVar15 + 0xa0);
        uStack_4c = *(undefined4 *)(lVar15 + 0xa4);
        cVar3 = FUN_147557108(&local_78,&local_58);
        uVar8 = uStack_60;
        if (cVar3 != '\0') {
          lVar15 = (longlong)(int)uStack_60;
          uVar5 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
          if (uStack_60._4_4_ < uVar5) {
            FUN_1408617ce(&local_68,uVar8 & 0xffffffff);
          }
          *(undefined8 *)(local_68 + lVar15 * 8) = *(undefined8 *)(lVar16 + lVar7);
        }
      }
      lVar15 = local_68;
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar14 * 8 != lVar7);
    lVar14 = (longlong)(int)uStack_60;
    if (lVar14 == 0) {
      uVar8 = 0;
    }
    else {
      lVar16 = 0;
      do {
        local_88 = *(undefined8 *)(lVar15 + lVar16);
        local_58 = &local_88;
        FUN_14757ef30(param_1,&local_58);
        lVar16 = lVar16 + 8;
      } while (lVar14 * 8 != lVar16);
      uVar8 = CONCAT71((int7)((ulonglong)&local_58 >> 8),0 < (int)uStack_60);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  FUN_14756fffa(param_1);
LAB_14757093c:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 147570c2e FUN_147570c2e body=1286 status=ok
// SIG undefined FUN_147570c2e(void)

ulonglong FUN_147570c2e(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  char local_88;
  undefined2 local_87;
  undefined1 local_85;
  int local_84;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar4 = *(char *)(param_2 + 0x98);
  local_4a = *(undefined1 *)(param_2 + 0x9b);
  local_4c = *(undefined2 *)(param_2 + 0x99);
  iVar1 = *(int *)(param_2 + 0x9c);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  uVar5 = (uint)uVar2 & 0xff;
  iVar14 = (int)((ulonglong)uVar2 >> 0x20);
  if (((cVar4 != '\x02') && (uVar5 != 2)) && (iVar14 <= iVar1)) {
    uVar8 = 0;
    goto LAB_147570c9e;
  }
  iVar7 = (int)param_1[1];
  if ((longlong)iVar7 != 0) {
    lVar13 = (longlong)iVar7 * 8;
    lVar16 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar16 * 8) == param_2) {
        uVar12 = (uint)lVar16;
        if (uVar12 == 0xffffffff) break;
        if (iVar7 < (int)uVar12 || (int)uVar12 < 1) {
          if (param_3 != '\0') break;
          *(undefined4 *)(param_2 + 0x60) = 0;
        }
        else {
          plVar3 = *(longlong **)(*param_1 + -8 + (ulonglong)(uVar12 & 0x7fffffff) * 8);
          if (param_3 != '\0') {
            uVar8 = plVar3[0x13] & 0xff;
            if ((uVar8 == 2) ||
               ((int)((uint)((int)uVar8 != 1) + (int)((ulonglong)plVar3[0x13] >> 0x20)) < iVar14)) {
              (**(code **)(*plVar3 + 0x2b0))(plVar3,uVar2);
            }
            break;
          }
          if (*(int *)((longlong)plVar3 + 0xa4) < iVar1) {
            lVar13 = param_2 + 0x1c;
            if (*(char *)(param_2 + 0x78) == '\0') {
              lVar13 = param_2;
            }
            uVar5 = *(int *)(lVar13 + 0x60) + iVar1;
            uVar8 = plVar3[0x13] & 0xff;
            if ((uVar8 == 2) ||
               ((int)((uint)((int)uVar8 != 1) + (int)((ulonglong)plVar3[0x13] >> 0x20)) < (int)uVar5
               )) {
              (**(code **)(*plVar3 + 0x2b0))(plVar3,(ulonglong)uVar5 << 0x20);
            }
          }
          else {
            if (uVar5 != 2) {
              uVar8 = plVar3[0x14] & 0xff;
              if (uVar8 != 2) {
                iVar10 = (((uint)(uVar5 == 1) + iVar14) - (int)((ulonglong)plVar3[0x14] >> 0x20)) -
                         (uint)((int)uVar8 == 1);
                iVar7 = 0;
                if (0 < iVar10) {
                  iVar7 = iVar10;
                }
                iVar10 = *(int *)(param_2 + 100);
                if (iVar7 < *(int *)(param_2 + 100)) {
                  iVar10 = iVar7;
                }
                *(int *)(param_2 + 100) = iVar10;
                if (*(int *)(param_2 + 0x94) <= iVar7) {
                  iVar7 = *(int *)(param_2 + 0x94);
                }
                *(int *)(param_2 + 0x94) = iVar7;
              }
            }
            uVar8 = *(ulonglong *)(param_2 + 0x98) & 0xff;
            if (uVar8 != 2) {
              uVar11 = plVar3[0x13] & 0xff;
              if (uVar11 != 2) {
                iVar10 = (((uint)((int)uVar8 != 1) + (int)(*(ulonglong *)(param_2 + 0x98) >> 0x20))
                         - (int)((ulonglong)plVar3[0x13] >> 0x20)) - (uint)((int)uVar11 != 1);
                iVar7 = 0;
                if (0 < iVar10) {
                  iVar7 = iVar10;
                }
                iVar10 = (int)plVar3[0xc];
                if (iVar7 < (int)plVar3[0xc]) {
                  iVar10 = iVar7;
                }
                *(int *)(plVar3 + 0xc) = iVar10;
                if (*(int *)((longlong)plVar3 + 0x7c) <= iVar7) {
                  iVar7 = *(int *)((longlong)plVar3 + 0x7c);
                }
                *(int *)((longlong)plVar3 + 0x7c) = iVar7;
              }
            }
          }
        }
        if (((int)uVar12 < -1) || ((int)param_1[1] <= (int)(uVar12 + 1))) {
          *(undefined4 *)(param_2 + 100) = 0;
        }
        else {
          plVar3 = *(longlong **)(*param_1 + (longlong)(int)(uVar12 + 1) * 8);
          if (iVar14 < *(int *)((longlong)plVar3 + 0x9c)) {
            plVar6 = (longlong *)((longlong)plVar3 + 0x1c);
            if ((char)plVar3[0xf] == '\0') {
              plVar6 = plVar3;
            }
            uVar5 = iVar14 - (int)plVar6[0xc];
            uVar8 = plVar3[0x14] & 0xff;
            if ((uVar8 == 2) ||
               ((int)uVar5 < (int)((uint)((int)uVar8 == 1) + (int)((ulonglong)plVar3[0x14] >> 0x20))
               )) {
              (**(code **)(*plVar3 + 0x2a8))(plVar3,((ulonglong)uVar5 << 0x20) + 1);
            }
          }
          else {
            uVar8 = *(ulonglong *)(param_2 + 0x98) & 0xff;
            if (uVar8 != 2) {
              uVar11 = plVar3[0x13] & 0xff;
              if (uVar11 != 2) {
                iVar7 = ((int)((ulonglong)plVar3[0x13] >> 0x20) -
                        ((uint)((int)uVar8 != 1) + (int)(*(ulonglong *)(param_2 + 0x98) >> 0x20))) +
                        (uint)((int)uVar11 != 1);
                iVar14 = 0;
                if (0 < iVar7) {
                  iVar14 = iVar7;
                }
                iVar7 = *(int *)(param_2 + 0x60);
                if (iVar14 < *(int *)(param_2 + 0x60)) {
                  iVar7 = iVar14;
                }
                *(int *)(param_2 + 0x60) = iVar7;
                if (*(int *)(param_2 + 0x7c) <= iVar14) {
                  iVar14 = *(int *)(param_2 + 0x7c);
                }
                *(int *)(param_2 + 0x7c) = iVar14;
              }
            }
            uVar8 = *(ulonglong *)(param_2 + 0xa0) & 0xff;
            if (uVar8 != 2) {
              uVar11 = plVar3[0x14] & 0xff;
              if (uVar11 != 2) {
                iVar7 = ((int)((ulonglong)plVar3[0x14] >> 0x20) -
                        ((uint)((int)uVar8 == 1) + (int)(*(ulonglong *)(param_2 + 0xa0) >> 0x20))) +
                        (uint)((int)uVar11 == 1);
                iVar14 = 0;
                if (0 < iVar7) {
                  iVar14 = iVar7;
                }
                iVar7 = *(int *)((longlong)plVar3 + 100);
                if (iVar14 < *(int *)((longlong)plVar3 + 100)) {
                  iVar7 = iVar14;
                }
                *(int *)((longlong)plVar3 + 100) = iVar7;
                if (*(int *)((longlong)plVar3 + 0x94) <= iVar14) {
                  iVar14 = *(int *)((longlong)plVar3 + 0x94);
                }
                *(int *)((longlong)plVar3 + 0x94) = iVar14;
              }
            }
          }
        }
        break;
      }
      lVar16 = lVar16 + 1;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  if (param_4 == '\0') {
LAB_147570d10:
    uVar8 = 0;
  }
  else {
    local_85 = local_4a;
    local_87 = local_4c;
    local_78 = 0;
    uStack_70 = 0;
    lVar13 = param_1[1];
    local_90 = param_2;
    local_88 = cVar4;
    local_84 = iVar1;
    local_80 = uVar2;
    if ((longlong)(int)lVar13 == 0) goto LAB_147570d10;
    lVar16 = *param_1;
    lVar9 = 0;
    do {
      lVar15 = *(longlong *)(lVar16 + lVar9);
      if (local_90 != lVar15) {
        local_68 = *(undefined8 **)(lVar15 + 0x98);
        uStack_60 = *(undefined4 *)(lVar15 + 0xa0);
        uStack_5c = *(undefined4 *)(lVar15 + 0xa4);
        cVar4 = FUN_147557108(&local_88,&local_68);
        uVar8 = uStack_70;
        if (cVar4 != '\0') {
          lVar15 = (longlong)(int)uStack_70;
          uVar5 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
          if (uStack_70._4_4_ < uVar5) {
            FUN_1408617ce(&local_78,uVar8 & 0xffffffff);
          }
          *(undefined8 *)(local_78 + lVar15 * 8) = *(undefined8 *)(lVar16 + lVar9);
        }
      }
      lVar15 = local_78;
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar13 * 8 != lVar9);
    lVar13 = (longlong)(int)uStack_70;
    if (lVar13 == 0) {
      uVar8 = 0;
    }
    else {
      lVar16 = 0;
      do {
        local_98 = *(undefined8 *)(lVar15 + lVar16);
        local_68 = &local_98;
        FUN_14757ef30(param_1,&local_68);
        lVar16 = lVar16 + 8;
      } while (lVar13 * 8 != lVar16);
      uVar8 = CONCAT71((int7)((ulonglong)&local_68 >> 8),0 < (int)uStack_70);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  FUN_14756fffa(param_1);
LAB_147570c9e:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 147571136 FUN_147571136 body=38 status=ok
// SIG undefined FUN_147571136(void)

float FUN_147571136(longlong *param_1)

{
  float fVar1;
  float fVar2;
  
  if (param_1 == (longlong *)0x0) {
    fVar2 = 0.0;
  }
  else {
    fVar1 = (float)(**(code **)(*param_1 + 0x2c8))();
    fVar2 = 0.0;
    if (0.0 <= fVar1) {
      fVar2 = fVar1;
    }
  }
  return fVar2;
}



// FUNCTION 14757115c FUN_14757115c body=711 status=ok
// SIG undefined FUN_14757115c(void)

longlong FUN_14757115c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined4 local_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint local_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined1 local_a0 [40];
  undefined1 local_78 [4];
  undefined2 local_74;
  undefined1 local_70;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  lVar3 = FUN_140584627(param_2,*(undefined8 *)(param_1 + 0x10),param_3,0);
  FUN_147d81e8c(local_78);
  local_70 = 0;
  local_74 = 0x100;
  FUN_147d81eba(local_a0,local_78);
  FUN_1437656e6(param_1,lVar3,local_a0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab3488) {
    FUN_144b3d300(&DAT_14cab3488);
    if (DAT_14cab3488 == -1) {
      FUN_1446f470e(&DAT_14cab3480,L"SequencerActor",1);
      _Init_thread_footer(&DAT_14cab3488);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab3494) {
    FUN_144b3d300(&DAT_14cab3494);
    if (DAT_14cab3494 == -1) {
      FUN_1446f470e(&DAT_14cab348c,L"SequencerPreviewActor",1);
      _Init_thread_footer(&DAT_14cab3494);
    }
  }
  local_c8 = (longlong *)&DAT_14cab3480;
  FUN_1408ff3be(lVar3 + 0x1f0,&local_c8);
  local_c8 = (longlong *)&DAT_14cab348c;
  FUN_1408ff3be(lVar3 + 0x1f0,&local_c8);
  lVar4 = FUN_144944cf2(lVar3);
  if (lVar4 != 0) {
    local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
    FUN_1433b7f0e(lVar3);
  }
  plVar1 = (longlong *)(lVar3 + 0x240);
  lVar4 = lVar3 + 0x250;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar4;
  if (*(int *)(lVar3 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar5 = *(int *)(lVar3 + 0x268);
  }
  uStack_a8 = CONCAT44(uStack_34,uStack_38);
  local_b0 = local_40;
  iStack_ac = iStack_3c;
  local_c0 = (undefined4)local_50;
  uStack_bc = local_50._4_4_;
  uStack_b8 = (undefined4)uStack_48;
  uStack_b4 = uStack_48._4_4_;
  local_c8 = plVar1;
  if ((iStack_3c != iVar5) || (uStack_48 != lVar4)) {
    do {
      lVar2 = *(longlong *)(*local_c8 + (longlong)iStack_ac * 0x10);
      if (lVar2 != 0) {
        FUN_14472eae2(lVar2,0x40);
      }
      local_b0 = local_b0 & ~uStack_bc;
      FUN_1449c0562(&local_c0);
    } while (local_c8 != plVar1 || (CONCAT44(uStack_b4,uStack_b8) != lVar4 || iStack_ac != iVar5));
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147571424 FUN_147571424 body=307 status=ok
// SIG undefined FUN_147571424(void)

ulonglong FUN_147571424(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != (longlong *)0x0) {
    lVar6 = (**(code **)(*param_1 + 0x2e8))();
    if (lVar6 != 0) {
      iVar5 = FUN_140c7f2b4(lVar6,param_2);
      if ((iVar5 != -1) &&
         (uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1),
         (longlong)iVar5 * 0xf0 + *(longlong *)(lVar6 + 0x60) != 0)) goto LAB_147571508;
    }
    lVar6 = (**(code **)(*param_1 + 0x2a8))(param_1);
    if (lVar6 != 0) {
      FUN_1432dd47e(lVar6,&local_50,param_2);
      if ((longlong)local_48 != 0) {
        lVar6 = 0;
        do {
          plVar3 = *(longlong **)(local_50 + 0x28 + lVar6);
          if (plVar3 != (longlong *)0x0) {
            local_40 = *param_3;
            local_38 = param_3[1];
            if (local_38 != 0) {
              LOCK();
              *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
              UNLOCK();
            }
            cVar4 = (**(code **)(*plVar3 + 0x2a8))(plVar3,&local_40);
            if (cVar4 != '\0') {
              uVar7 = CONCAT71((int7)((ulonglong)&local_40 >> 8),1);
              goto LAB_147571508;
            }
          }
          lVar6 = lVar6 + 0x30;
        } while ((longlong)local_48 * 0x30 != lVar6);
      }
    }
  }
  uVar7 = 0;
LAB_147571508:
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147571558 FUN_147571558 body=1508 status=ok
// SIG undefined FUN_147571558(void)

void FUN_147571558(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  undefined8 *puVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_3a8 [32];
  longlong *local_388;
  int local_37c;
  undefined8 *local_378;
  longlong local_370 [2];
  longlong local_360 [2];
  undefined8 local_350;
  longlong local_348;
  longlong local_340;
  uint local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14757f76a(param_1);
  }
  FUN_1457a9e34(&local_348,0x10,1,0);
  uVar18 = (ulonglong)local_338[0];
  if ((-1 < (int)local_338[0]) && ((int)local_338[0] < (int)local_340)) {
    do {
      lVar1 = *(longlong *)(local_348 + (uVar18 & 0xffffffff) * 8);
      lVar6 = FUN_145909298();
      if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)) &&
         (lVar1 = *(longlong *)(local_348 + (longlong)(int)local_338[0] * 8),
         (*(byte *)(lVar1 + 0xd4) & 1) == 0)) {
        local_370[0] = *(longlong *)(lVar1 + 0x18);
        FUN_1400021e4(local_370,local_360);
        cVar3 = FUN_144a791f8(local_360,L"SKEL_",5,1);
        cVar4 = '\x01';
        if (cVar3 == '\0') {
          local_350 = *(undefined8 *)
                       (*(longlong *)(local_348 + (longlong)(int)local_338[0] * 8) + 0x18);
          FUN_1400021e4(&local_350,local_370);
          cVar4 = FUN_144a791f8(local_370,L"REINST_",7,1);
          if (local_370[0] != 0) {
            FUN_1400020a8();
          }
        }
        if (local_360[0] != 0) {
          FUN_1400020a8();
        }
        if (cVar4 == '\0') {
          lVar1 = *(longlong *)(local_348 + (longlong)(int)local_338[0] * 8);
          if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar1);
          }
          iVar8 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
            FUN_14757f79a(param_1,iVar8);
          }
          *(longlong *)(*param_1 + (longlong)iVar8 * 8) = lVar1;
          if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar1);
          }
        }
      }
      uVar18 = (longlong)(int)local_338[0];
      do {
        uVar17 = uVar18;
        uVar18 = uVar17 + 1;
        local_338[0] = (uint)uVar18;
        if ((longlong)(int)local_340 <= (longlong)uVar18) break;
      } while (*(longlong *)(local_348 + uVar18 * 8) == 0);
    } while ((-2 < (longlong)uVar17) && ((int)local_338[0] < (int)local_340));
  }
  if (local_348 != 0) {
    FUN_1400020a8();
  }
  iVar8 = (int)param_1[1];
  if (1 < (longlong)iVar8) {
    lVar1 = *param_1;
    memset(local_338,0,0x2f0);
    local_340 = lVar1 + (longlong)iVar8 * 8 + -8;
    local_348 = lVar1;
    fVar24 = logf((float)iVar8);
    local_338[0] = (uint)(longlong)(fVar24 + fVar24);
    plVar10 = &local_348;
    do {
      puVar11 = (undefined8 *)*plVar10;
      puVar15 = (undefined8 *)plVar10[1];
      iVar8 = (int)plVar10[2];
      iVar5 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar11) >> 3);
      uVar21 = iVar5 + 1;
      puVar12 = puVar11;
      puVar16 = puVar11;
      puVar19 = puVar15;
      local_388 = plVar10;
      if (iVar8 != 0) {
LAB_147571799:
        if (8 < (int)uVar21) {
          uVar2 = puVar12[uVar21 >> 1];
          puVar12[uVar21 >> 1] = *puVar12;
          *puVar12 = uVar2;
          puVar22 = puVar19 + 1;
          puVar16 = puVar12;
          local_37c = iVar8;
          local_378 = puVar11;
          do {
            puVar11 = puVar16 + 1;
            puVar20 = puVar16 + 1;
            do {
              puVar16 = puVar20;
              puVar7 = puVar11;
              if (puVar19 < puVar16) break;
              cVar3 = FUN_1432df6f8(puVar12,puVar16);
              puVar11 = puVar7 + 1;
              puVar20 = puVar16 + 1;
            } while (cVar3 == '\0');
            puVar11 = puVar22 + -2;
            do {
              puVar20 = puVar22;
              puVar9 = puVar11;
              puVar22 = puVar20 + -1;
              if (puVar22 <= puVar12) break;
              cVar3 = FUN_1432df6f8(puVar22,puVar12);
              puVar11 = puVar9 + -1;
            } while (cVar3 == '\0');
            if (puVar22 < puVar16) goto LAB_147571831;
            uVar2 = *puVar16;
            *puVar16 = *puVar22;
            *puVar22 = uVar2;
          } while( true );
        }
        for (; plVar10 = local_388, puVar15 = puVar12, puVar11 = puVar12, puVar12 < puVar19;
            puVar19 = puVar19 + -1) {
          while (puVar16 = puVar15, puVar11 = puVar11 + 1, puVar11 <= puVar19) {
            cVar3 = FUN_1432df6f8(puVar16,puVar11);
            puVar15 = puVar11;
            if (cVar3 == '\0') {
              puVar15 = puVar16;
            }
          }
          uVar2 = *puVar16;
          *puVar16 = *puVar19;
          *puVar19 = uVar2;
        }
        goto LAB_147571a83;
      }
LAB_1475718e5:
      plVar10 = local_388;
      if (uVar21 != 0) {
        iVar8 = (iVar5 - (iVar5 + -1 >> 0x1f)) + -1 >> 1;
        iVar5 = iVar8;
joined_r0x000147571906:
        do {
          iVar14 = iVar8 * 2 + 1;
          if (iVar14 < (int)uVar21) {
            iVar13 = iVar8 * 2 + 2;
            if ((iVar13 < (int)uVar21) &&
               (cVar3 = FUN_1432df6f8(puVar16 + iVar13,puVar16 + iVar14), cVar3 == '\0')) {
              iVar14 = iVar13;
            }
            puVar19 = puVar16 + iVar8;
            puVar11 = puVar16 + iVar14;
            cVar3 = FUN_1432df6f8(puVar19,puVar11);
            if (cVar3 != '\0') {
              uVar2 = *puVar19;
              *puVar19 = *puVar11;
              *puVar11 = uVar2;
              iVar8 = iVar14;
              goto joined_r0x000147571906;
            }
          }
          bVar23 = iVar5 != 0;
          iVar8 = iVar5 + -1;
          iVar5 = iVar8;
        } while (bVar23);
        plVar10 = local_388;
        if (1 < (int)uVar21) {
          uVar18 = (ulonglong)uVar21;
          uVar2 = *puVar16;
          *puVar16 = puVar16[uVar18 - 1];
          puVar16[uVar18 - 1] = uVar2;
          if (uVar21 != 2) {
            do {
              uVar17 = uVar18 - 1;
              iVar8 = 0;
              iVar14 = 1;
              iVar5 = 0;
              do {
                iVar8 = iVar8 + 2;
                iVar13 = iVar14;
                if (((longlong)iVar8 < (longlong)uVar17) &&
                   (cVar3 = FUN_1432df6f8(puVar16 + iVar8,puVar16 + iVar14), cVar3 == '\0')) {
                  iVar13 = iVar8;
                }
                puVar19 = puVar16 + iVar5;
                puVar11 = puVar16 + iVar13;
                cVar3 = FUN_1432df6f8(puVar19,puVar11);
                if (cVar3 == '\0') break;
                uVar2 = *puVar19;
                *puVar19 = *puVar11;
                *puVar11 = uVar2;
                iVar8 = iVar13 * 2;
                iVar14 = iVar13 * 2 + 1;
                iVar5 = iVar13;
              } while ((longlong)iVar14 < (longlong)uVar17);
              uVar2 = *puVar16;
              *puVar16 = puVar16[uVar18 - 2];
              puVar16[uVar18 - 2] = uVar2;
              plVar10 = local_388;
              uVar18 = uVar17;
            } while (2 < uVar17);
          }
        }
      }
LAB_147571a83:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147571831:
  uVar2 = *puVar12;
  *puVar12 = *puVar22;
  *puVar22 = uVar2;
  iVar8 = local_37c + -1;
  puVar20 = puVar20 + -2;
  if ((longlong)puVar9 - (longlong)local_378 < (longlong)puVar15 - (longlong)puVar7) {
    plVar10 = local_388;
    if (puVar16 < puVar19) {
      *local_388 = (longlong)puVar16;
      local_388[1] = (longlong)puVar19;
      *(int *)(local_388 + 2) = iVar8;
      plVar10 = local_388 + 3;
    }
    puVar16 = puVar12;
    puVar15 = puVar9;
    if (puVar22 <= puVar12 + 1) goto LAB_147571a83;
  }
  else {
    if (puVar12 + 1 < puVar22) {
      *local_388 = (longlong)puVar12;
      local_388[1] = (longlong)puVar20;
      *(int *)(local_388 + 2) = iVar8;
      local_388 = local_388 + 3;
    }
    plVar10 = local_388;
    puVar12 = puVar7;
    puVar20 = puVar19;
    puVar15 = puVar19;
    if (puVar19 <= puVar16) goto LAB_147571a83;
  }
  local_388 = plVar10;
  iVar5 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar12) >> 3);
  uVar21 = iVar5 + 1;
  puVar11 = puVar12;
  puVar12 = puVar16;
  puVar19 = puVar20;
  if (iVar8 == 0) goto LAB_1475718e5;
  goto LAB_147571799;
}



// FUNCTION 147571b3e FUN_147571b3e body=282 status=ok
// SIG undefined FUN_147571b3e(void)

undefined8
FUN_147571b3e(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_1 + 0x2e8))();
    if (lVar4 != 0) {
      iVar3 = FUN_140c7f2b4(lVar4,param_2);
      if ((iVar3 != -1) &&
         (lVar4 = (longlong)iVar3 * 0xf0 + *(longlong *)(lVar4 + 0x60), lVar4 != 0)) {
        uVar6 = *(undefined8 *)(lVar4 + 0xc0);
        goto LAB_147571c0d;
      }
      lVar4 = (**(code **)(*param_1 + 0x2a8))(param_1);
      if (lVar4 != 0) {
        lVar4 = FUN_140bf242e(lVar4,param_2,param_4);
        if (lVar4 != 0) {
          local_40 = *param_3;
          local_38 = param_3[1];
          if (local_38 != 0) {
            LOCK();
            *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
            UNLOCK();
          }
          plVar5 = (longlong *)FUN_140f96da0(lVar4,&local_40);
          if (plVar5 != (longlong *)0x0) {
            uVar6 = (**(code **)(*plVar5 + 0x300))(plVar5);
            goto LAB_147571c0d;
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_147571c0d:
  plVar5 = (longlong *)param_3[1];
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147571c5a FUN_147571c5a body=348 status=ok
// SIG undefined FUN_147571c5a(void)

longlong * FUN_147571c5a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = 0xffff;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = param_2;
  puVar5 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar5[1] = &DAT_100000001;
  *puVar5 = &PTR_FUN_14a475bf0;
  puVar1 = puVar5 + 2;
  FUN_140b56624(puVar1,param_3,&local_58);
  *param_1 = (longlong)puVar1;
  param_1[1] = (longlong)puVar5;
  FUN_140b560f4(param_1,puVar1);
  plVar6 = (longlong *)FUN_14001cc68(0x110);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a4914c0;
  plVar2 = plVar6 + 2;
  memset(plVar2,0,0x100);
  FUN_1475742aa(plVar2);
  lVar4 = *param_1;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_68 = plVar2;
  local_60 = plVar6;
  FUN_147571db8(lVar4,&local_68);
  local_78 = *param_1;
  local_70 = param_1[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  FUN_140a473e6(plVar2,&DAT_14cab329c,param_3,&local_78);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147571db8 FUN_147571db8 body=152 status=ok
// SIG undefined FUN_147571db8(void)

void FUN_147571db8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar3 = FUN_14757f848(param_1 + 0x38,&local_28);
  FUN_1409e50e6(param_1,uVar3);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
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



// FUNCTION 147571e62 FUN_147571e62 body=558 status=ok
// SIG undefined FUN_147571e62(void)

longlong FUN_147571e62(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  uint local_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  uStack_4c = 1;
  if (param_1 == 0) {
    uVar8 = 0;
    lVar4 = 0;
    if (param_2 == 0) goto LAB_147571f7a;
LAB_147571f1b:
    uVar7 = (uint)uVar8;
    lVar4 = *(longlong *)(param_2 + 0xa8);
    bVar10 = true;
    if (lVar4 != 0) {
      local_50 = uVar7 + 1;
      if (uStack_4c < uVar7 + 1) {
        FUN_14757fe76(&local_60,uVar8);
      }
      plVar2 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar2 = &local_60;
      }
      plVar2[(int)uVar7] = lVar4;
      uVar7 = local_50;
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x60);
    bVar10 = lVar4 != 0;
    if (bVar10) {
      local_50 = 1;
      uStack_4c = 1;
      local_60 = lVar4;
    }
    uStack_4c = 1;
    local_50 = (uint)bVar10;
    uVar8 = (ulonglong)bVar10;
    uVar7 = (uint)bVar10;
    if (param_2 != 0) {
      plVar2 = (longlong *)FUN_1475843c0(param_1,*(undefined4 *)(param_2 + 0xb8));
      if ((plVar2 != (longlong *)0x0) && (lVar6 = *plVar2, lVar6 != 0)) {
        local_50 = bVar10 + 1;
        if (lVar4 == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          FUN_14757fe76(&local_60,uVar8);
          plVar2 = local_58;
        }
        if (plVar2 == (longlong *)0x0) {
          plVar2 = &local_60;
        }
        plVar2[uVar8] = lVar6;
        uVar8 = (ulonglong)local_50;
      }
      goto LAB_147571f1b;
    }
    bVar10 = false;
  }
  if (uVar7 == 0) {
    lVar4 = 0;
  }
  else if (uVar7 == 1) {
    plVar2 = &local_60;
    if (local_58 != (longlong *)0x0) {
      plVar2 = local_58;
    }
    lVar4 = *plVar2;
  }
  else {
    if ((bool)(param_1 == 0 & (bVar10 ^ 1U))) {
      local_68 = 0;
    }
    else {
      if (bVar10) {
        param_1 = param_2;
      }
      uVar3 = FUN_14073751e();
      local_68 = FUN_144a78ede(param_1,uVar3);
    }
    lVar4 = FUN_147572091(local_68);
    plVar2 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar2 = &local_60;
    }
    lVar6 = (longlong)(int)local_50;
    if (lVar6 != 0) {
      lVar9 = 0;
      do {
        lVar1 = *(longlong *)((longlong)plVar2 + lVar9);
        plVar5 = (longlong *)FUN_147572142(lVar4 + 0x68);
        if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar1);
        }
        *plVar5 = lVar1;
        lVar9 = lVar9 + 8;
      } while (lVar6 * 8 != lVar9);
    }
    if (param_3 != '\0') {
      FUN_14757217e(local_68,lVar4);
    }
  }
LAB_147571f7a:
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 147572091 FUN_147572091 body=175 status=ok
// SIG undefined FUN_147572091(void)

undefined8 FUN_147572091(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459e402c();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147572142 FUN_147572142 body=59 status=ok
// SIG undefined FUN_147572142(void)

longlong FUN_147572142(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14757ff80(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 8 + *param_1;
  FUN_14757ff78(lVar2);
  return lVar2;
}



// FUNCTION 14757217e FUN_14757217e body=132 status=ok
// SIG undefined FUN_14757217e(void)

void FUN_14757217e(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x168);
  *(uint *)(param_1 + 0x168) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x16c) < iVar1 + 1U) {
    FUN_14757a6b6((longlong *)(param_1 + 0x160),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 147572202 FUN_147572202 body=150 status=ok
// SIG undefined FUN_147572202(void)

ulonglong FUN_147572202(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  
  if (param_3 == 0) {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    lVar5 = FUN_14479d2ce(*param_5 + 0x20);
    uVar4 = FUN_147552576((ulonglong)*(ushort *)(*param_5 + 0x30) * 0x128 +
                          *(longlong *)(*(longlong *)(lVar5 + 0x548) + 8),param_1,param_2,param_3,
                          param_4);
    uVar6 = (ulonglong)uVar4;
  }
  plVar3 = (longlong *)param_5[1];
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 14757229e FUN_14757229e body=275 status=ok
// SIG undefined FUN_14757229e(void)

void FUN_14757229e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1475723b2(&local_38,local_20,local_24);
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_38);
  }
  *param_3 = local_38;
  *(undefined1 *)(param_3 + 1) = local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475723b2 FUN_1475723b2 body=204 status=ok
// SIG undefined FUN_1475723b2(void)

longlong * FUN_1475723b2(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_2,1);
  if (lVar2 != 0) {
    iVar1 = FUN_144b2c470(lVar2);
    if (param_3 < iVar1) {
      FUN_144a7d35a(lVar2,&local_38);
      if (0 < param_3) {
        local_30 = local_30 + param_3;
      }
      lVar2 = FUN_14479d2ce((longlong)local_30 * 8 + *local_38);
      if (lVar2 != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x3d0);
        if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar2);
        }
        *param_1 = lVar2;
        goto LAB_14757244d;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_14757244d:
  *(undefined1 *)(param_1 + 1) = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147572482 FUN_147572482 body=1115 status=ok
// SIG undefined FUN_147572482(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_147572482(undefined8 *param_1,longlong *param_2,longlong *param_3,void *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  void *_Src;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 *_Src_00;
  void *_Dst;
  undefined1 *puVar12;
  longlong lVar13;
  void *_Dst_00;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_78 [8];
  longlong *local_70;
  void *local_68;
  longlong local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  puVar12 = auStack_78;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  lVar4 = *param_3;
  if (lVar4 == 0) goto LAB_147572761;
  uVar2 = *(ushort *)(lVar4 + 0xb6);
  lVar13 = (longlong)*(int *)(lVar4 + 0x5c);
  lVar8 = lVar13 + (ulonglong)uVar2;
  if ((int)lVar8 == 0) {
    puVar10 = (undefined1 *)0x0;
    puVar12 = auStack_78;
  }
  else {
    lVar8 = -(lVar8 + 0x1eU & 0xfffffffffffffff0);
    puVar10 = auStack_78 + lVar8;
    puVar12 = auStack_78 + lVar8;
  }
  _Dst_00 = (void *)(-lVar13 & (ulonglong)(puVar10 + lVar13 + -1));
  plVar14 = (longlong *)0x0;
  local_70 = param_2;
  local_68 = param_4;
  *(undefined8 *)(puVar12 + -0x28) = 0x147572512;
  memset(_Dst_00,0,(ulonglong)uVar2);
  local_58 = *(longlong **)(lVar4 + 0x50);
  local_50 = 0xffffffff;
  local_4c = 0x101;
  local_4a = 0;
  local_60 = lVar4;
  *(undefined8 *)(puVar12 + -0x28) = 0x147572545;
  FUN_144a2daf0(&local_60);
  if (local_58 != (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
    do {
      plVar1 = local_58;
      uVar7 = (uint)local_58[7];
      if ((uVar7 & 0x280) == 0x80) {
        iVar3 = *(int *)((longlong)local_58 + 0x44);
        pcVar5 = *(code **)(*local_58 + 0x160);
        *(undefined8 *)(puVar12 + -0x28) = 0x147572586;
        (*pcVar5)(plVar1,(longlong)iVar3 + (longlong)_Dst_00);
        uVar7 = (uint)plVar1[7];
      }
      if ((uVar7 >> 10 & 1) != 0) {
        plVar14 = plVar1;
      }
      local_58 = (longlong *)local_58[3];
      *(undefined8 *)(puVar12 + -0x28) = 0x1475725af;
      FUN_144a2daf0(&local_60);
    } while (local_58 != (longlong *)0x0);
  }
  plVar1 = param_3 + 1;
  *(undefined8 *)(puVar12 + -0x28) = 0x1475725c9;
  lVar8 = FUN_1446ddbd2();
  if (param_3[1] == 0) {
    if ((int)param_3[4] != 0) goto LAB_1475725f3;
  }
  else {
    *(undefined8 *)(puVar12 + -0x28) = 0x1475725e4;
    cVar6 = FUN_144729dda(param_3 + 2);
    if ((cVar6 == '\0') && ((int)param_3[4] != 0)) {
LAB_1475725f3:
      *(undefined8 *)(puVar12 + -0x28) = 0x147572604;
      plVar9 = (longlong *)FUN_14007daa4(plVar1,0,0);
      if (plVar9 == (longlong *)0x0) {
LAB_147572854:
        if (*plVar1 != 0) {
          *plVar1 = 0;
          param_3[2] = 0;
        }
        goto LAB_147572686;
      }
      lVar13 = plVar9[1];
      if (*(ulonglong *)(lVar8 + 8) == 0) {
        bVar15 = lVar13 != 0;
        if (lVar13 != lVar8 && bVar15) {
          do {
            lVar13 = *(longlong *)(lVar13 + 0x30);
            bVar15 = lVar13 != 0;
            if (lVar13 == lVar8) break;
          } while (lVar13 != 0);
        }
        if (!bVar15) goto LAB_147572854;
      }
      else if ((*(ulonglong *)(lVar13 + 0x18) & *(ulonglong *)(lVar8 + 8)) == 0) goto LAB_147572854;
      *plVar1 = (longlong)plVar9;
    }
    else {
      plVar9 = (longlong *)*plVar1;
    }
    if (plVar9 != (longlong *)0x0) {
      pcVar5 = *(code **)(*plVar9 + 0x80);
      *(undefined8 *)(puVar12 + -0x28) = 0x14757265e;
      cVar6 = (*pcVar5)(plVar9);
      _Src = local_68;
      if (cVar6 == '\0') {
        _Dst = (void *)((longlong)*(int *)((longlong)plVar9 + 0x44) + (longlong)_Dst_00);
        if (_Dst != local_68) {
          if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
            lVar8 = plVar9[6];
            pcVar5 = *(code **)(*plVar9 + 0x100);
            *(undefined8 *)(puVar12 + -0x28) = 0x14757281e;
            (*pcVar5)(plVar9,_Dst,_Src,(int)lVar8);
          }
          else {
            iVar3 = *(int *)((longlong)plVar9 + 0x34);
            lVar8 = plVar9[6];
            *(undefined8 *)(puVar12 + -0x28) = 0x1475728bd;
            memcpy(_Dst,_Src,(longlong)(int)lVar8 * (longlong)iVar3);
          }
        }
      }
      else {
        pcVar5 = *(code **)(*plVar9 + 0x98);
        *(undefined8 *)(puVar12 + -0x28) = 0x147572682;
        (*pcVar5)(plVar9,_Dst_00,_Src);
      }
    }
  }
LAB_147572686:
  if (plVar14 != (longlong *)0x0) {
    if (DAT_14cab3500 == 0) {
      *(undefined8 *)(puVar12 + -0x28) = 0x1475726a0;
      uVar11 = FUN_140bd662f();
      *(undefined8 *)(puVar12 + -0x28) = 0x1475726b6;
      DAT_14cab3500 = FUN_140002ddd(FUN_1463401b7,uVar11,L"MovieSceneDynamicBindingResolveResult");
    }
    plVar1 = local_70;
    if (plVar14[0xe] == DAT_14cab3500) {
      pcVar5 = *(code **)(*local_70 + 0x248);
      *(undefined8 *)(puVar12 + -0x28) = 0x1475727aa;
      (*pcVar5)(plVar1,lVar4,_Dst_00);
      pcVar5 = *(code **)(*plVar14 + 0x88);
      *(undefined8 *)(puVar12 + -0x28) = 0x1475727be;
      cVar6 = (*pcVar5)(plVar14);
      if (cVar6 == '\0') {
        _Src_00 = (undefined8 *)((longlong)*(int *)((longlong)plVar14 + 0x44) + (longlong)_Dst_00);
        if (_Src_00 != param_1) {
          if ((*(byte *)((longlong)plVar14 + 0x3b) & 0x40) == 0) {
            lVar8 = plVar14[6];
            pcVar5 = *(code **)(*plVar14 + 0x100);
            *(undefined8 *)(puVar12 + -0x28) = 0x14757289c;
            (*pcVar5)(plVar14,param_1,_Src_00,(int)lVar8);
          }
          else {
            iVar3 = *(int *)((longlong)plVar14 + 0x34);
            lVar8 = plVar14[6];
            *(undefined8 *)(puVar12 + -0x28) = 0x1475728dd;
            memcpy(param_1,_Src_00,(longlong)(int)lVar8 * (longlong)iVar3);
          }
        }
      }
      else {
        pcVar5 = *(code **)(*plVar14 + 0xa0);
        *(undefined8 *)(puVar12 + -0x28) = 0x1475727e0;
        (*pcVar5)(plVar14,_Dst_00,param_1);
      }
    }
  }
  local_58 = *(longlong **)(lVar4 + 0x50);
  local_50 = 0xffffffff;
  local_4c = 0x101;
  local_4a = 0;
  local_60 = lVar4;
  *(undefined8 *)(puVar12 + -0x28) = 0x1475726fa;
  FUN_144a2daf0(&local_60);
  if (local_58 != (longlong *)0x0) {
    do {
      plVar14 = local_58;
      if ((local_58[7] & 0x1000000080U) == 0x80) {
        iVar3 = *(int *)((longlong)local_58 + 0x44);
        pcVar5 = *(code **)(*local_58 + 0x148);
        *(undefined8 *)(puVar12 + -0x28) = 0x147572738;
        (*pcVar5)(plVar14,(longlong)iVar3 + (longlong)_Dst_00);
      }
      local_58 = (longlong *)local_58[3];
      *(undefined8 *)(puVar12 + -0x28) = 0x147572754;
      FUN_144a2daf0(&local_60);
    } while (local_58 != (longlong *)0x0);
  }
LAB_147572761:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar12 + -0x28) = &UNK_14757278e;
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1475728f2 FUN_1475728f2 body=521 status=ok
// SIG undefined FUN_1475728f2(void)

/* WARNING: Removing unreachable block (ram,0x0001475729de) */

void FUN_1475728f2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 *local_1e8;
  undefined8 **local_1e0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    plVar1 = (longlong *)(param_1 + 0x58);
    FUN_1447a1747(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(int *)(param_1 + 100) != 0) {
      FUN_1408be2c4(plVar1,0);
    }
    if ((longlong)*(int *)(param_1 + 0x70) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x68);
      lVar6 = (longlong)*(int *)(param_1 + 0x70) << 4;
      do {
        local_1f8 = (undefined **)0x0;
        uStack_1f0 = 0;
        FUN_1407c869a(lVar7,&local_1f8,0);
        iVar3 = *(int *)(param_1 + 0x60);
        *(uint *)(param_1 + 0x60) = iVar3 + 1U;
        if (*(uint *)(param_1 + 100) < iVar3 + 1U) {
          FUN_1447a1bd6(plVar1,iVar3);
        }
        lVar4 = *plVar1;
        lVar5 = (longlong)iVar3 * 0x10;
        *(undefined8 *)(lVar4 + lVar5) = 0;
        *(undefined ***)(lVar4 + lVar5) = local_1f8;
        *(undefined4 *)(lVar4 + 8 + lVar5) = (undefined4)uStack_1f0;
        *(undefined4 *)(lVar4 + 0xc + lVar5) = uStack_1f0._4_4_;
        lVar7 = lVar7 + 0x10;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
    local_1e0 = &local_1e8;
    local_1f8 = &PTR_FUN_149e37810;
    local_1e8 = &local_1f8;
    uStack_1f0 = param_2;
    switchD_143c3d4dc::caseD_20(param_1);
  }
  else {
    local_1e0 = &local_1e8;
    local_1f8 = &PTR_FUN_149e37810;
    local_1e8 = &local_1f8;
    uStack_1f0 = param_2;
    switchD_143c3d4dc::caseD_20(param_1);
    plVar1 = (longlong *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x74) != 0) {
      FUN_140504644(plVar1,0);
    }
    if ((longlong)*(int *)(param_1 + 0x60) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x58);
      lVar6 = (longlong)*(int *)(param_1 + 0x60) << 4;
      do {
        local_1f8 = (undefined **)0x0;
        uStack_1f0 = 0;
        FUN_140b10a34(lVar7,&local_1f8);
        iVar3 = *(int *)(param_1 + 0x70);
        *(uint *)(param_1 + 0x70) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x74) < iVar3 + 1U) {
          FUN_140c60952(plVar1,iVar3);
        }
        puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar3 * 0x10);
        *puVar2 = (undefined4)local_1f8;
        puVar2[1] = local_1f8._4_4_;
        puVar2[2] = (undefined4)uStack_1f0;
        puVar2[3] = uStack_1f0._4_4_;
        lVar7 = lVar7 + 0x10;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147572afc FUN_147572afc body=17 status=ok
// SIG undefined FUN_147572afc(void)

void FUN_147572afc(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x40);
  return;
}



// FUNCTION 147572b0e FUN_147572b0e body=11 status=ok
// SIG undefined FUN_147572b0e(void)

undefined8 * FUN_147572b0e(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x2c);
  return param_2;
}



// FUNCTION 147572b1a FUN_147572b1a body=5 status=ok
// SIG undefined FUN_147572b1a(void)

void FUN_147572b1a(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x2c) = param_2;
  return;
}



// FUNCTION 147572b20 FUN_147572b20 body=120 status=ok
// SIG undefined FUN_147572b20(void)

void FUN_147572b20(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
    FUN_147580084((longlong *)(param_1 + 0x38),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 147572b98 FUN_147572b98 body=103 status=ok
// SIG undefined FUN_147572b98(void)

void FUN_147572b98(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_14758010a(param_1 + 0x38);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147572c00 FUN_147572c00 body=5 status=ok
// SIG undefined FUN_147572c00(void)

longlong FUN_147572c00(longlong param_1)

{
  return param_1 + 0x48;
}



// FUNCTION 147572c06 FUN_147572c06 body=120 status=ok
// SIG undefined FUN_147572c06(void)

void FUN_147572c06(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
    FUN_14757e106((longlong *)(param_1 + 0x48),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 147572c7e FUN_147572c7e body=103 status=ok
// SIG undefined FUN_147572c7e(void)

void FUN_147572c7e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_14758023a(param_1 + 0x48);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147572ce6 FUN_147572ce6 body=5 status=ok
// SIG undefined FUN_147572ce6(void)

longlong FUN_147572ce6(longlong param_1)

{
  return param_1 + 0x68;
}



// FUNCTION 147572cec FUN_147572cec body=61 status=ok
// SIG undefined FUN_147572cec(void)

void FUN_147572cec(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar2 + 1U) {
    FUN_140c60952((longlong *)(param_1 + 0x68),iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 147572d2a FUN_147572d2a body=66 status=ok
// SIG undefined FUN_147572d2a(void)

void FUN_147572d2a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14757c608(param_1 + 0x68,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147572d6e FUN_147572d6e body=111 status=ok
// SIG undefined FUN_147572d6e(void)

void FUN_147572d6e(longlong param_1)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if (0 < iVar2) {
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x38);
      if (*(longlong *)(lVar1 + (longlong)(int)uVar3 * 8) == 0) {
        if (~uVar3 + iVar2 != 0) {
          _Dst = (void *)(lVar1 + (longlong)(int)uVar3 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar3 + iVar2) << 3);
          iVar2 = *(int *)(param_1 + 0x40);
        }
        *(int *)(param_1 + 0x40) = iVar2 + -1;
        FUN_14758036a((longlong *)(param_1 + 0x38));
        iVar2 = *(int *)(param_1 + 0x40);
      }
      else {
        uVar3 = uVar3 + 1;
      }
    } while ((int)uVar3 < iVar2);
  }
  FUN_1446e0b6e(param_1);
  return;
}



// FUNCTION 147572dde FUN_147572dde body=458 status=ok
// SIG undefined FUN_147572dde(void)

longlong * FUN_147572dde(longlong *param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145cba7c3(&local_50);
  *(undefined1 *)param_1 = 2;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  if ((char)*param_2 != '\x02') {
    dVar3 = (double)(float)((ulonglong)*param_2 >> 0x20);
    local_48 = local_50;
    dVar1 = (double)FUN_146811cfa(&local_48);
    dVar2 = (double)FUN_146811cfa(&local_48);
    if (dVar1 <= dVar3) {
      dVar3 = dVar1;
    }
    if (dVar3 <= -dVar2) {
      dVar3 = -dVar2;
    }
    dVar3 = ((double)(int)local_48 * dVar3) / (double)local_48._4_4_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar3;
    auVar6 = roundpd(auVar6,auVar6,1);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (double)(int)(dVar3 - auVar6._0_8_) + dVar3;
    auVar4 = roundpd(auVar4,auVar4,1);
    dVar3 = auVar4._0_8_;
    if (2147483647.0 <= dVar3) {
      dVar3 = 2147483647.0;
    }
    if (dVar3 <= -2147483648.0) {
      dVar3 = -2147483648.0;
    }
    *param_1 = ((ulonglong)(uint)(int)dVar3 << 0x20) + 1;
  }
  if ((char)param_2[1] != '\x02') {
    dVar3 = (double)(float)((ulonglong)param_2[1] >> 0x20);
    local_48 = local_50;
    dVar1 = (double)FUN_146811cfa(&local_48);
    dVar2 = (double)FUN_146811cfa(&local_48);
    if (dVar1 <= dVar3) {
      dVar3 = dVar1;
    }
    if (dVar3 <= -dVar2) {
      dVar3 = -dVar2;
    }
    dVar3 = ((double)(int)local_48 * dVar3) / (double)local_48._4_4_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar3;
    auVar4 = roundpd(auVar7,auVar7,1);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (double)(int)(dVar3 - auVar4._0_8_) + dVar3;
    auVar4 = roundpd(auVar5,auVar5,1);
    dVar3 = auVar4._0_8_;
    if (2147483647.0 <= dVar3) {
      dVar3 = 2147483647.0;
    }
    if (dVar3 <= -2147483648.0) {
      dVar3 = -2147483648.0;
    }
    param_1[1] = ((ulonglong)(uint)(int)dVar3 << 0x20) + 1;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147572fa9 FUN_147572fa9 body=216 status=ok
// SIG undefined FUN_147572fa9(void)

int * FUN_147572fa9(int *param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_3;
  dVar1 = (double)FUN_146811cfa(&local_48);
  dVar2 = (double)FUN_146811cfa(&local_48);
  uVar5 = SUB84(param_4,0);
  uVar6 = (int)((ulonglong)param_4 >> 0x20);
  if (dVar1 <= param_4) {
    uVar5 = SUB84(dVar1,0);
    uVar6 = (int)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = (double)CONCAT44(uVar6,uVar5);
  if ((double)CONCAT44(uVar6,uVar5) <= -dVar2) {
    dVar1 = -dVar2;
  }
  dVar1 = ((double)(int)local_48 * dVar1) / (double)local_48._4_4_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar1;
  auVar4 = roundpd(auVar4,auVar4,1);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (double)(int)(dVar1 - auVar4._0_8_) + dVar1;
  auVar3 = roundpd(auVar3,auVar3,1);
  dVar1 = auVar3._0_8_;
  if (2147483647.0 <= dVar1) {
    dVar1 = 2147483647.0;
  }
  if (dVar1 <= -2147483648.0) {
    dVar1 = -2147483648.0;
  }
  *param_1 = (int)dVar1;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147573082 FUN_147573082 body=269 status=ok
// SIG undefined FUN_147573082(void)

undefined4 FUN_147573082(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab3580) {
    FUN_144b3d300(&DAT_14cab3580);
    if (DAT_14cab3580 == -1) {
      FUN_1446ddc76(&DAT_14cab3578,"FloatRange",1);
      _Init_thread_footer(&DAT_14cab3580);
    }
  }
  local_38 = *(undefined4 *)(param_2 + 8);
  uVar1 = FUN_1468ec2ac();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_146891ff0();
    local_38 = CONCAT31(local_38._1_3_,2);
    local_34 = 0;
    local_30 = 2;
    local_2c = 0;
    FUN_14483b62e(uVar2,param_3,&local_38,0);
    FUN_147572dde(&local_48,&local_38);
    *param_1 = local_48;
    param_1[1] = uStack_44;
    param_1[2] = uStack_40;
    param_1[3] = uStack_3c;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147573190 FUN_147573190 body=545 status=ok
// SIG undefined FUN_147573190(void)

void FUN_147573190(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    thunk_FUN_14047a987(&local_58,"Exclusive",9);
    FUN_140002184(&local_58,0x3a);
    uVar2 = *(undefined4 *)(param_1 + 4);
LAB_147573270:
    uStack_60 = 0;
    local_68 = 0;
    FUN_144a83b10(&local_68,uVar2);
    iVar3 = (int)uStack_60 + -1;
    if ((int)uStack_60 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(&local_58,local_68,iVar3);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (cVar1 == '\x01') {
      thunk_FUN_14047a987(&local_58,"Inclusive",9);
      FUN_140002184(&local_58,0x3a);
      uVar2 = *(undefined4 *)(param_1 + 4);
      goto LAB_147573270;
    }
    if (cVar1 == '\x02') {
      thunk_FUN_14047a987(&local_58,&DAT_14a491dee,4);
      FUN_140002184(&local_58,0x3a);
      FUN_140002184(&local_58,0x30);
    }
  }
  FUN_140002184(&local_58,0x3a);
  cVar1 = param_1[8];
  if (cVar1 == '\0') {
    pcVar4 = "Exclusive";
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        thunk_FUN_14047a987(&local_58,&DAT_14a491dee,4);
        FUN_140002184(&local_58,0x3a);
        FUN_140002184(&local_58,0x30);
      }
      goto LAB_147573361;
    }
    pcVar4 = "Inclusive";
  }
  thunk_FUN_14047a987(&local_58,pcVar4,9);
  FUN_140002184(&local_58,0x3a);
  local_68 = 0;
  uStack_60 = 0;
  FUN_144a83b10(&local_68,*(undefined4 *)(param_1 + 0xc));
  iVar3 = (int)uStack_60 + -1;
  if ((int)uStack_60 == 0) {
    iVar3 = 0;
  }
  FUN_1400020e8(&local_58,local_68,iVar3);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_147573361:
  iVar3 = (int)uStack_50 + -1;
  if ((int)uStack_50 == 0) {
    iVar3 = 0;
  }
  FUN_1400020e8(param_2,local_58,iVar3);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475733b2 FUN_1475733b2 body=957 status=ok
// SIG undefined FUN_1475733b2(void)

ulonglong FUN_1475733b2(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined8 *local_58;
  ulonglong uStack_50;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pwVar6 = L"";
  FUN_140056680(local_40,&DAT_149dfb77a);
  lVar4 = FUN_1401e9420(*param_2,local_40,1);
  if (lVar4 != 0) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_1403de9f2(local_40,&local_58,&DAT_149e31048,0);
    puVar1 = local_58;
    if ((int)uStack_50 == 4) {
      FUN_1400b22c2(&local_68,&DAT_14a491dee);
      iVar2 = *(int *)(puVar1 + 1);
      if (iVar2 == local_60) {
        bVar7 = true;
        if (1 < iVar2) {
          iVar2 = FUN_144a80a00(*puVar1,local_68);
          bVar7 = iVar2 == 0;
        }
      }
      else {
        bVar7 = local_60 + iVar2 == 1;
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      puVar1 = local_58;
      lVar4 = 2;
      if (bVar7) {
LAB_1475734ce:
        *param_1 = lVar4;
      }
      else {
        FUN_1400b22c2(&local_68,"Inclusive");
        iVar2 = *(int *)(puVar1 + 1);
        if (iVar2 == local_60) {
          bVar7 = true;
          if (1 < iVar2) {
            iVar2 = FUN_144a80a00(*puVar1,local_68);
            bVar7 = iVar2 == 0;
          }
        }
        else {
          bVar7 = local_60 + iVar2 == 1;
        }
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        puVar1 = local_58;
        if (bVar7) {
          if (*(int *)(local_58 + 3) == 0) {
            pwVar6 = L"";
          }
          else {
            pwVar6 = (wchar_t *)local_58[2];
          }
          uVar3 = _wtoi(pwVar6);
          lVar4 = ((ulonglong)uVar3 << 0x20) + 1;
          goto LAB_1475734ce;
        }
        FUN_1400b22c2(&local_68,"Exclusive");
        iVar2 = *(int *)(puVar1 + 1);
        if (iVar2 == local_60) {
          bVar7 = true;
          if (1 < iVar2) {
            iVar2 = FUN_144a80a00(*puVar1,local_68);
            bVar7 = iVar2 == 0;
          }
        }
        else {
          bVar7 = local_60 + iVar2 == 1;
        }
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (bVar7) {
          if (*(int *)(local_58 + 3) != 0) {
            pwVar6 = (wchar_t *)local_58[2];
          }
          uVar3 = _wtoi(pwVar6);
          lVar4 = (ulonglong)uVar3 << 0x20;
          goto LAB_1475734ce;
        }
      }
      puVar1 = local_58;
      FUN_1400b22c2(&local_68,&DAT_14a491dee);
      iVar2 = *(int *)(puVar1 + 5);
      if (iVar2 == local_60) {
        bVar7 = true;
        if (1 < iVar2) {
          iVar2 = FUN_144a80a00(puVar1[4],local_68);
          bVar7 = iVar2 == 0;
        }
      }
      else {
        bVar7 = local_60 + iVar2 == 1;
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      puVar1 = local_58;
      if (bVar7) {
        param_1[1] = 2;
      }
      else {
        FUN_1400b22c2(&local_68,"Inclusive");
        iVar2 = *(int *)(puVar1 + 5);
        if (iVar2 == local_60) {
          bVar7 = true;
          if (1 < iVar2) {
            iVar2 = FUN_144a80a00(puVar1[4],local_68);
            bVar7 = iVar2 == 0;
          }
        }
        else {
          bVar7 = local_60 + iVar2 == 1;
        }
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        puVar1 = local_58;
        if (bVar7) {
          if (*(int *)(local_58 + 7) == 0) {
            pwVar6 = L"";
          }
          else {
            pwVar6 = (wchar_t *)local_58[6];
          }
          uVar3 = _wtoi(pwVar6);
          lVar4 = ((ulonglong)uVar3 << 0x20) + 1;
        }
        else {
          FUN_1400b22c2(&local_68,"Exclusive");
          iVar2 = *(int *)(puVar1 + 5);
          if (iVar2 == local_60) {
            bVar7 = true;
            if (1 < iVar2) {
              iVar2 = FUN_144a80a00(puVar1[4],local_68);
              bVar7 = iVar2 == 0;
            }
          }
          else {
            bVar7 = local_60 + iVar2 == 1;
          }
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          if (!bVar7) goto LAB_147573578;
          if (*(int *)(local_58 + 7) == 0) {
            pwVar6 = L"";
          }
          else {
            pwVar6 = (wchar_t *)local_58[6];
          }
          uVar3 = _wtoi(pwVar6);
          lVar4 = (ulonglong)uVar3 << 0x20;
        }
        param_1[1] = lVar4;
      }
LAB_147573578:
      FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      goto LAB_147573479;
    }
    FUN_1447a1747(local_58);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar5 = 0;
LAB_147573479:
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 147573770 FUN_147573770 body=108 status=ok
// SIG undefined FUN_147573770(void)

void FUN_147573770(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 1) == '\0') {
    puVar2 = param_2;
    if ((*(byte *)(param_2 + 8) & 2) == 0) {
      puVar2 = (undefined8 *)*param_2;
    }
    if ((*(char *)(puVar2 + 2) == '\x01') && ((undefined4 *)((longlong)puVar2 + 0xc) != param_1)) {
      *param_1 = *(undefined4 *)((longlong)puVar2 + 0xc);
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  iVar1 = param_1[4];
  param_1[4] = iVar1 + 1U;
  if ((uint)param_1[5] < iVar1 + 1U) {
    FUN_147580406(param_1 + 2,iVar1);
  }
  FUN_14758049a((longlong)iVar1 * 0x48 + *(longlong *)(param_1 + 2),param_2);
  return;
}



// FUNCTION 1475737dc FUN_1475737dc body=75 status=ok
// SIG undefined FUN_1475737dc(void)

void FUN_1475737dc(undefined4 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(char *)(param_1 + 1) == '\x01') && ((longlong)(int)param_1[4] != 0)) {
    plVar3 = *(longlong **)(param_1 + 2);
    lVar2 = (longlong)(int)param_1[4] * 0x48;
    do {
      plVar1 = plVar3;
      if ((*(byte *)(plVar3 + 8) & 2) == 0) {
        plVar1 = (longlong *)*plVar3;
      }
      (**(code **)(*plVar1 + 8))(plVar1,*param_1);
      plVar3 = plVar3 + 9;
      lVar2 = lVar2 + -0x48;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 147573828 FUN_147573828 body=19 status=ok
// SIG undefined FUN_147573828(void)

void FUN_147573828(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 1);
  *(char *)(param_2 + 1) = cVar1;
  if (cVar1 == '\x01') {
    *param_2 = *param_1;
  }
  return;
}



// FUNCTION 14757383c FUN_14757383c body=68 status=ok
// SIG undefined FUN_14757383c(void)

void FUN_14757383c(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar3 = *(longlong **)(param_1 + 8);
    lVar2 = (longlong)*(int *)(param_1 + 0x10) * 0x48;
    do {
      plVar1 = plVar3;
      if ((*(byte *)(plVar3 + 8) & 2) == 0) {
        plVar1 = (longlong *)*plVar3;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
      plVar3 = plVar3 + 9;
      lVar2 = lVar2 + -0x48;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 147573880 FUN_147573880 body=208 status=ok
// SIG undefined FUN_147573880(void)

void FUN_147573880(longlong param_1,longlong param_2,void **param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x38);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_1 + 0x30);
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  if (&local_38 == param_3) {
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(int *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757396a FUN_14757396a body=208 status=ok
// SIG undefined FUN_14757396a(void)

void FUN_14757396a(longlong param_1,longlong param_2,void **param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x50);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_1 + 0x48);
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  if (&local_38 == param_3) {
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(int *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147573a3c FUN_147573a3c body=299 status=ok
// SIG undefined FUN_147573a3c(void)

void FUN_147573a3c(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18));
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar2 == 0) {
    local_3c = 0;
    iVar3 = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar2 * 2);
    iVar3 = local_40;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x30,local_48,iVar1);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147573b68 FUN_147573b68 body=152 status=ok
// SIG undefined FUN_147573b68(void)

void FUN_147573b68(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0x40) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147573c02 FUN_147573c02 body=299 status=ok
// SIG undefined FUN_147573c02(void)

void FUN_147573c02(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18));
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar2 == 0) {
    local_3c = 0;
    iVar3 = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar2 * 2);
    iVar3 = local_40;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x48,local_48,iVar1);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147573d32 FUN_147573d32 body=392 status=ok
// SIG undefined FUN_147573d32(void)

void FUN_147573d32(longlong param_1,undefined8 param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined8 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1427dc336(local_38);
  local_58 = DAT_14cab35d0;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_48;
  pvVar1 = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,pvVar1,lVar2 * 2);
  }
  local_40 = 1;
  FUN_1407c67d8(param_2);
  FUN_14170a840(param_1 + 0x18,&local_88);
  local_78 = DAT_14cab35d8;
  local_70 = local_88;
  uStack_68 = uStack_80;
  local_88 = 0;
  uStack_80 = 0;
  local_60 = 0x300000004;
  FUN_1407c67d8(param_2);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  local_a8 = DAT_14cab35e0;
  local_a0 = (void *)0x0;
  local_98 = *(int *)(param_1 + 0x28);
  lVar2 = (longlong)local_98;
  pvVar1 = *(void **)(param_1 + 0x20);
  if (lVar2 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1446dd670(&local_a0,local_98,0);
    memcpy(local_a0,pvVar1,lVar2 * 2);
  }
  local_90 = 1;
  FUN_1407c67d8(param_2);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147573ec0 FUN_147573ec0 body=231 status=ok
// SIG undefined FUN_147573ec0(void)

int * FUN_147573ec0(int *param_1,int param_2,undefined4 param_3,int param_4,longlong param_5)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [64];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((DAT_14cab329c == param_2) || (param_5 == 0)) {
    *param_1 = param_4;
  }
  else {
    local_48 = (undefined1 *)0x0;
    local_40 = 0x800000000;
    FUN_1400a31b8(local_88);
    FUN_1410cbfee(local_88,param_3);
    lVar3 = (longlong)(int)local_40;
    if (lVar3 != 0) {
      puVar2 = local_88;
      if (local_48 != (undefined1 *)0x0) {
        puVar2 = local_48;
      }
      lVar4 = 0;
      do {
        iVar1 = *(int *)(puVar2 + lVar4);
        if (param_4 != 0) {
          iVar1 = FUN_144a78877(param_4);
        }
        param_4 = iVar1;
        lVar4 = lVar4 + 8;
      } while (lVar3 * 8 != lVar4);
    }
    *param_1 = param_4;
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147573fa8 FUN_147573fa8 body=260 status=ok
// SIG undefined FUN_147573fa8(void)

void FUN_147573fa8(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_118 [40];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [64];
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [64];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_58 = 0;
  local_50 = 0x800000000;
  FUN_1400a31b8(local_98,param_2,param_5);
  local_a8 = 0;
  local_a0 = 0x800000000;
  FUN_1400a31b8(local_e8,param_3,param_5);
  FUN_147557a74(&local_ec,local_98,local_e8);
  uVar3 = param_4[1];
  uVar1 = param_4[2];
  uVar2 = param_4[3];
  *param_1 = *param_4;
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  FUN_147557b4c(local_e8,&local_f0,local_ec);
  param_1[4] = local_f0;
  uVar3 = FUN_147557b1e(local_98,local_ec);
  param_1[5] = uVar3;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475740ae FUN_1475740ae body=144 status=ok
// SIG undefined FUN_1475740ae(void)

undefined8 *
FUN_1475740ae(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  if ((*(longlong *)(*param_5 + 0x28) == 0) || (*(int *)(*param_5 + 0x34) == -1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1400a382a();
  }
  FUN_147573fa8(param_1,param_2,param_3,param_4,uVar4);
  plVar3 = (longlong *)param_5[1];
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
  return param_1;
}



// FUNCTION 14757413e FUN_14757413e body=45 status=ok
// SIG undefined FUN_14757413e(void)

undefined8 * FUN_14757413e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  FUN_147573fa8();
  return param_1;
}



// FUNCTION 14757416c FUN_14757416c body=59 status=ok
// SIG undefined FUN_14757416c(void)

undefined8 *
FUN_14757416c(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  FUN_147573fa8(param_2,param_3,uVar1,param_1,param_4);
  return param_2;
}



// FUNCTION 1475741a8 FUN_1475741a8 body=58 status=ok
// SIG undefined FUN_1475741a8(void)

undefined4 *
FUN_1475741a8(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4)

{
  if (*(int *)(param_1 + 0x14) == -1) {
    *param_2 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    FUN_147573ec0(param_2,param_3,*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),param_4);
  }
  return param_2;
}



// FUNCTION 1475741e2 FUN_1475741e2 body=196 status=ok
// SIG undefined FUN_1475741e2(void)

undefined8 FUN_1475741e2(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = (**(code **)(*param_4 + 0x10))(param_4);
  local_38 = *(undefined8 *)(lVar4 + 8);
  plVar3 = *(longlong **)(lVar4 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
    FUN_1410cbcd8(param_1,param_2,param_3);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_30 = plVar3;
    FUN_1410cbcd8(param_1,param_2,param_3);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475742aa FUN_1475742aa body=146 status=ok
// SIG undefined FUN_1475742aa(void)

void FUN_1475742aa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a490480;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  return;
}



// FUNCTION 14757433c FUN_14757433c body=145 status=ok
// SIG undefined FUN_14757433c(void)

void FUN_14757433c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a490480;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140a07934(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140a0796c(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140a079a4(param_1 + 1);
  return;
}



// FUNCTION 1475743ce FUN_1475743ce body=43 status=ok
// SIG undefined FUN_1475743ce(void)

undefined2 FUN_1475743ce(longlong param_1)

{
  ushort uVar1;
  undefined *puVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x1e0);
  puVar2 = &DAT_14cab3698;
  if (DAT_14cab36a8 != (undefined *)0x0) {
    puVar2 = DAT_14cab36a8;
  }
  return CONCAT11((char)(uVar1 >> 8),
                  (*(uint *)(puVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
}



// FUNCTION 1475743fa FUN_1475743fa body=209 status=ok
// SIG undefined FUN_1475743fa(void)

void FUN_1475743fa(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  int local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = param_3;
  FUN_1401abe9c(param_1,&local_58,param_2);
  if ((longlong)local_50 != 0) {
    lVar4 = 0;
    do {
      local_60 = *(undefined8 *)(local_58 + lVar4);
      lVar2 = FUN_14479d2ce(&local_60);
      if (lVar2 != 0) {
        iVar1 = *(int *)(param_6 + 0x10);
        *(uint *)(param_6 + 0x10) = iVar1 + 1U;
        if (*(uint *)(param_6 + 0x14) < iVar1 + 1U) {
          FUN_14571f162(param_6,iVar1);
        }
        lVar3 = *(longlong *)(param_6 + 8);
        if (*(longlong *)(param_6 + 8) == 0) {
          lVar3 = param_6;
        }
        *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar2;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)local_50 * 8 != lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475744cc FUN_1475744cc body=320 status=ok
// SIG undefined FUN_1475744cc(void)

void FUN_1475744cc(longlong *param_1,longlong *param_2,undefined4 *param_3,undefined4 param_4,
                  longlong *param_5,undefined8 param_6)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  longlong *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x58))();
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_3,param_4,param_6);
    if (cVar1 == '\0') goto LAB_147574522;
  }
  lVar3 = (**(code **)(*param_5 + 0x2a8))(param_5);
  if (lVar3 == 0) {
    FUN_14757460e(param_1,local_88);
    local_98 = param_6;
    (**(code **)(*param_5 + 0x2c0))(param_5,param_3,param_2,local_88);
  }
  else {
    local_68 = param_5;
    if (param_5 != (longlong *)0x0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_5);
    }
    local_60 = *param_3;
    uStack_5c = param_3[1];
    uStack_58 = param_3[2];
    uStack_54 = param_3[3];
    local_48 = *param_2;
    local_50 = param_4;
    if ((local_48 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_14757460e(param_1,local_78);
    local_98 = param_6;
    FUN_140521b2e(lVar3,&local_68,param_2,local_78);
  }
LAB_147574522:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757460e FUN_14757460e body=95 status=ok
// SIG undefined FUN_14757460e(void)

undefined8 * FUN_14757460e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = (**(code **)(*param_1 + 0x10))();
  uVar3 = *(undefined8 *)(lVar5 + 8);
  plVar4 = *(longlong **)(lVar5 + 0x10);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
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
  return param_2;
}



// FUNCTION 14757466e FUN_14757466e body=95 status=ok
// SIG undefined FUN_14757466e(void)

undefined8 * FUN_14757466e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = (**(code **)(*param_1 + 0x10))();
  uVar3 = *(undefined8 *)(lVar5 + 8);
  plVar4 = *(longlong **)(lVar5 + 0x10);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
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
  return param_2;
}



// FUNCTION 1475746ce FUN_1475746ce body=188 status=ok
// SIG undefined FUN_1475746ce(void)

undefined8 * FUN_1475746ce(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = (**(code **)(*param_1 + 0x10))();
  lVar2 = *(longlong *)(lVar4 + 8);
  plVar3 = *(longlong **)(lVar4 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((lVar2 == 0) || (plVar5 = (longlong *)FUN_147580a6e(lVar2 + 0x38), plVar5 == (longlong *)0x0))
  {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  (**(code **)(*plVar5 + 8))(plVar5,param_2);
  if (plVar3 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  plVar5 = plVar3 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 != 0) {
    return param_2;
  }
  (**(code **)*plVar3)(plVar3);
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) {
    return param_2;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return param_2;
}



// FUNCTION 14757478a FUN_14757478a body=59 status=ok
// SIG undefined FUN_14757478a(void)

undefined8 *
FUN_14757478a(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  if (param_4 == 0 || param_3 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*param_3 + 0x338))(param_3,param_2,param_4);
  }
  return param_2;
}



// FUNCTION 1475748d4 FUN_1475748d4 body=155 status=ok
// SIG undefined FUN_1475748d4(void)

void FUN_1475748d4(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2c0))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147574970 FUN_147574970 body=131 status=ok
// SIG undefined FUN_147574970(void)

void FUN_147574970(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475749f4 FUN_1475749f4 body=146 status=ok
// SIG undefined FUN_1475749f4(void)

void FUN_1475749f4(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x59) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147574a8c FUN_147574a8c body=174 status=ok
// SIG undefined FUN_147574a8c(void)

void FUN_147574a8c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(uint *)(param_1 + 0xc0) & 2) == 0) {
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xfffffffc | (uint)(local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147574b40 FUN_147574b40 body=170 status=ok
// SIG undefined FUN_147574b40(void)

void FUN_147574b40(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(uint *)(param_1 + 0xc0) = (*(uint *)(param_1 + 0xc0) & 0xfffffffd) + (uint)(local_1c != 0) * 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147574bec FUN_147574bec body=152 status=ok
// SIG undefined FUN_147574bec(void)

void FUN_147574bec(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0xbc) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147574c86 FUN_147574c86 body=161 status=ok
// SIG undefined FUN_147574c86(void)

void FUN_147574c86(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(byte *)(param_1 + 0xc0) & 2) == 0) {
    *(undefined4 *)(param_1 + 0xb4) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147574d28 FUN_147574d28 body=161 status=ok
// SIG undefined FUN_147574d28(void)

void FUN_147574d28(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(byte *)(param_1 + 0xc0) & 2) == 0) {
    *(undefined4 *)(param_1 + 0xb0) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147574dca FUN_147574dca body=152 status=ok
// SIG undefined FUN_147574dca(void)

void FUN_147574dca(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0xb8) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147574e64 FUN_147574e64 body=7 status=ok
// SIG undefined FUN_147574e64(void)

void FUN_147574e64(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb8) = param_2;
  return;
}



// FUNCTION 147574e9a FUN_147574e9a body=90 status=ok
// SIG undefined FUN_147574e9a(void)

void FUN_147574e9a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    plVar3 = *(longlong **)(param_1 + 0xe8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xe8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147574ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147574ef4 FUN_147574ef4 body=90 status=ok
// SIG undefined FUN_147574ef4(void)

void FUN_147574ef4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    plVar3 = *(longlong **)(param_1 + 0xe8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xe8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147574f43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147574f4e FUN_147574f4e body=90 status=ok
// SIG undefined FUN_147574f4e(void)

void FUN_147574f4e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    plVar3 = *(longlong **)(param_1 + 0xe8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xe8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147574f9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147574fa8 FUN_147574fa8 body=118 status=ok
// SIG undefined FUN_147574fa8(void)

void FUN_147574fa8(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((*(byte *)(param_1 + 0xc0) & 2) == 0) {
    uVar1 = *(ulonglong *)(param_1 + 0xa0);
    if ((((char)uVar1 != '\x02') && (((uint)param_2 & 0xff) != 2)) &&
       ((int)(uVar1 >> 0x20) < (int)(param_2 >> 0x20))) {
      param_2 = uVar1 & 0xff;
      if ((char)uVar1 == '\0') {
        uVar2 = 1;
      }
      else if ((int)param_2 == 1) {
        uVar2 = 0;
        param_2 = 0;
      }
      else {
        param_2 = (ulonglong)((uint)uVar1 & 0xffffff00);
        uVar2 = uVar1 & 0xff;
      }
      param_2 = uVar1 & 0xffffffff00000000 | uVar2 | param_2;
    }
    *(ulonglong *)(param_1 + 0x98) = param_2;
  }
  return;
}



// FUNCTION 14757501e FUN_14757501e body=123 status=ok
// SIG undefined FUN_14757501e(void)

void FUN_14757501e(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((*(byte *)(param_1 + 0xc0) & 2) == 0) {
    uVar1 = *(ulonglong *)(param_1 + 0x98);
    if ((((char)uVar1 == '\x02') || (((uint)param_2 & 0xff) == 2)) ||
       ((int)(uVar1 >> 0x20) <= (int)((ulonglong)param_2 >> 0x20))) {
      *(undefined8 *)(param_1 + 0xa0) = param_2;
      return;
    }
    uVar2 = uVar1 & 0xff;
    if ((char)uVar1 == '\0') {
      uVar3 = 1;
    }
    else if ((int)uVar2 == 1) {
      uVar3 = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = (ulonglong)((uint)uVar1 & 0xffffff00);
      uVar3 = uVar1 & 0xff;
    }
    *(ulonglong *)(param_1 + 0xa0) = uVar1 & 0xffffffff00000000 | uVar3 | uVar2;
  }
  return;
}



// FUNCTION 14757509a FUN_14757509a body=48 status=ok
// SIG undefined FUN_14757509a(void)

longlong FUN_14757509a(longlong *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = param_1[0x1c];
  if (lVar2 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x358))();
    *(undefined1 *)(param_1 + 0x1e) = uVar1;
    lVar2 = param_1[0x1c];
  }
  return lVar2;
}



// FUNCTION 1475750ca FUN_1475750ca body=333 status=ok
// SIG undefined FUN_1475750ca(void)

undefined8 FUN_1475750ca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_28[1] = (longlong)&DAT_100000001;
  *local_28 = (longlong)&PTR_FUN_14a492060;
  local_30 = local_28 + 2;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 2;
  local_28[10] = 0;
  local_28[0xb] = 0x100000000;
  FUN_140aec6f8(&local_30);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_30;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (plVar4 == (longlong *)0x0) goto LAB_1475751d0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_14757519a:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1475751d0;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_30;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (local_28 != plVar4) {
      *(longlong **)(param_1 + 0xe8) = local_28;
      if (plVar4 == (longlong *)0x0) goto LAB_1475751d0;
      goto LAB_14757519a;
    }
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1475751d0;
    (**(code **)*local_28)(local_28);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1475751d0:
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147575222 FUN_147575222 body=210 status=ok
// SIG undefined FUN_147575222(void)

void FUN_147575222(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
    if ((char)param_1[0x13] != '\x02') {
      *(int *)((longlong)param_1 + 0x9c) = (int)((ulonglong)param_1[0x13] >> 0x20) + param_2;
    }
    if ((char)param_1[0x14] != '\x02') {
      *(int *)((longlong)param_1 + 0xa4) = (int)((ulonglong)param_1[0x14] >> 0x20) + param_2;
    }
    lVar5 = param_1[0x1c];
    if (lVar5 == 0) {
      uVar4 = (**(code **)(*param_1 + 0x358))(param_1);
      *(undefined1 *)(param_1 + 0x1e) = uVar4;
      lVar5 = param_1[0x1c];
    }
    lVar6 = lVar5 + 0x28;
    if (*(longlong *)(lVar5 + 0x40) != 0) {
      lVar6 = *(longlong *)(lVar5 + 0x40);
    }
    if ((longlong)*(int *)(lVar5 + 0x48) != 0) {
      lVar5 = lVar6 + (longlong)*(int *)(lVar5 + 0x48) * 0x18;
      do {
        iVar1 = *(int *)(lVar6 + 0x10);
        if ((longlong)iVar1 != 0) {
          lVar2 = *(longlong *)(lVar6 + 8);
          lVar7 = 0;
          do {
            plVar3 = *(longlong **)(lVar2 + lVar7);
            (**(code **)(*plVar3 + 0x58))(plVar3,param_2);
            lVar7 = lVar7 + 8;
          } while ((longlong)iVar1 * 8 != lVar7);
        }
        lVar6 = lVar6 + 0x18;
      } while (lVar6 != lVar5);
    }
  }
  return;
}



// FUNCTION 1475752fa FUN_1475752fa body=753 status=ok
// SIG undefined FUN_1475752fa(void)

ulonglong * FUN_1475752fa(longlong *param_1,ulonglong *param_2)

{
  undefined1 uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  char cVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  char local_50 [4];
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0;
  local_88 = 0;
  lVar16 = param_1[0x1c];
  if (lVar16 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x358))();
    *(undefined1 *)(param_1 + 0x1e) = uVar1;
    lVar16 = param_1[0x1c];
  }
  lVar17 = lVar16 + 0x28;
  if (*(longlong *)(lVar16 + 0x40) != 0) {
    lVar17 = *(longlong *)(lVar16 + 0x40);
  }
  uVar7 = 0;
  if ((longlong)*(int *)(lVar16 + 0x48) != 0) {
    local_78 = lVar17 + (longlong)*(int *)(lVar16 + 0x48) * 0x18;
    uVar13 = 0;
    uVar15 = 0;
    local_90 = 0;
    uVar3 = 0;
    uVar14 = 0;
    local_98 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar11 = 0;
    uVar9 = 0;
    local_80 = param_2;
    do {
      local_70 = lVar17;
      if ((longlong)*(int *)(lVar17 + 0x10) == 0) {
        uVar10 = (uint)uVar11;
        uVar11 = local_98;
      }
      else {
        local_68 = *(longlong *)(lVar17 + 8);
        local_60 = (longlong)*(int *)(lVar17 + 0x10) << 3;
        lVar16 = 0;
        uVar15 = (ulonglong)uVar14;
        uVar13 = uVar9;
        uVar14 = uVar5;
        local_90 = uVar8;
        do {
          (**(code **)(**(longlong **)(local_68 + lVar16) + 0x40))
                    (*(longlong **)(local_68 + lVar16),&local_58);
          cVar12 = (char)uVar13;
          if ((cVar12 == '\x02') || ((char)uVar11 == '\x02')) {
LAB_14757541b:
            if (((char)local_58 == '\x02') || (local_50[0] == '\x02')) {
LAB_147575435:
              puVar2 = &local_88;
              if (((char)local_98 != '\x02') &&
                 (puVar2 = (ulonglong *)local_50, local_50[0] != '\x02')) {
                puVar2 = &local_88;
                if ((((int)uVar15 <= iStack_4c) &&
                    (puVar2 = (ulonglong *)local_50, iStack_4c <= (int)uVar15)) &&
                   ((char)local_98 == '\x01')) {
                  puVar2 = &local_88;
                }
              }
              puVar4 = &local_58;
              if (cVar12 == '\x02') {
                puVar4 = &local_a0;
              }
              if (cVar12 != '\x02' && (char)local_58 != '\x02') {
                if ((int)uVar7 < local_58._4_4_) {
                  puVar4 = &local_a0;
                }
                else if (local_58._4_4_ < (int)uVar7) {
                  puVar4 = &local_58;
                }
                else {
                  puVar4 = &local_58;
                  if (cVar12 == '\x01') {
                    puVar4 = &local_a0;
                  }
                }
              }
              goto LAB_147575494;
            }
            uVar8 = local_90;
            if (iStack_4c < local_58._4_4_) {
              puVar4 = &local_a0;
            }
            else if ((local_58._4_4_ != iStack_4c) ||
                    (puVar4 = &local_a0, local_50[0] != '\0' && (char)local_58 != '\0'))
            goto LAB_147575435;
          }
          else {
            puVar2 = (ulonglong *)local_50;
            puVar4 = &local_58;
            if (((int)uVar6 <= (int)uVar14) &&
               ((uVar6 != uVar14 || (((char)uVar11 != '\0' && (cVar12 != '\0'))))))
            goto LAB_14757541b;
LAB_147575494:
            uVar8 = *puVar2;
          }
          uVar13 = *puVar4;
          uVar15 = uVar8 >> 0x20;
          uVar7 = uVar13 >> 0x20;
          lVar16 = lVar16 + 8;
          uVar3 = uVar13 & 0xffffffff;
          uVar14 = (uint)(uVar8 >> 0x20);
          uVar10 = (uint)uVar8;
          uVar6 = (uint)(uVar13 >> 0x20);
          uVar9 = uVar13 & 0xffffffff;
          local_98 = uVar8 & 0xffffffff;
          uVar11 = uVar8;
          uVar5 = uVar14;
          local_a0 = uVar13;
          local_90 = uVar8;
          local_88 = uVar8;
        } while (local_60 != lVar16);
      }
      local_98 = uVar11 & 0xffffffff;
      lVar17 = local_70 + 0x18;
      uVar11 = (ulonglong)uVar10;
    } while (lVar17 != local_78);
    param_2 = local_80;
    if (((char)uVar3 != '\x02') && ((char)local_90 != '\x02')) {
      if ((int)uVar15 < (int)uVar7) {
        uVar7 = 0;
        goto LAB_1475755b7;
      }
      if ((int)uVar7 == (int)uVar15) {
        uVar7 = 0;
        if (((char)local_90 == '\0') || (uVar7 = 0, (char)uVar3 == '\0')) goto LAB_1475755b7;
      }
    }
    *local_80 = uVar13;
    local_80[1] = uVar8;
    uVar7 = 1;
  }
LAB_1475755b7:
  *(char *)(param_2 + 2) = (char)uVar7;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1475755ec FUN_1475755ec body=89 status=ok
// SIG undefined FUN_1475755ec(void)

void FUN_1475755ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a490a70;
  if (*(char *)((longlong)param_1 + 0x84) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x5c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x4e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x4e) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



// FUNCTION 147575646 FUN_147575646 body=134 status=ok
// SIG undefined FUN_147575646(void)

void FUN_147575646(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  uVar4 = *(undefined2 *)(param_2 + 8);
  uVar2 = *(undefined1 *)(param_2 + 0x14);
  uVar6 = *(undefined8 *)(param_2 + 0xc);
  uVar3 = *(undefined1 *)(param_2 + 0x18);
  iVar5 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar5 + 1U) {
    FUN_140561fb4(param_1,iVar5);
  }
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar7 = param_1;
  }
  puVar1 = (undefined8 *)(lVar7 + (longlong)iVar5 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a491650;
  *(undefined2 *)(puVar1 + 1) = uVar4;
  *(undefined8 *)((longlong)puVar1 + 0xc) = uVar6;
  *(undefined1 *)((longlong)puVar1 + 0x14) = uVar2;
  *(undefined1 *)(puVar1 + 3) = uVar3;
  return;
}



// FUNCTION 1475756cc FUN_1475756cc body=176 status=ok
// SIG undefined FUN_1475756cc(void)

longlong FUN_1475756cc(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0xb8);
  local_48 = *(undefined4 *)(param_1 + 0x98);
  uStack_44 = *(undefined4 *)(param_1 + 0x9c);
  uStack_40 = *(undefined4 *)(param_1 + 0xa0);
  uStack_3c = *(undefined4 *)(param_1 + 0xa4);
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *param_2;
    lVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar2 + lVar6);
      if ((lVar5 != param_1) && (*(int *)(lVar5 + 0xb8) == param_3 + iVar1)) {
        local_58 = *(undefined4 *)(lVar5 + 0x98);
        uStack_54 = *(undefined4 *)(lVar5 + 0x9c);
        uStack_50 = *(undefined4 *)(lVar5 + 0xa0);
        uStack_4c = *(undefined4 *)(lVar5 + 0xa4);
        cVar4 = FUN_14055ad78(&local_48);
        if (cVar4 != '\0') break;
      }
      lVar6 = lVar6 + 8;
      lVar5 = 0;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14757577e FUN_14757577e body=296 status=ok
// SIG undefined FUN_14757577e(void)

void FUN_14757577e(longlong *param_1,longlong *param_2,int param_3,int param_4,char param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(int *)((longlong)param_1 + 0x9c) = param_3;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(int *)((longlong)param_1 + 0xa4) = param_4 + param_3;
  *(undefined4 *)(param_1 + 0x17) = 0;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    iVar5 = *(int *)((longlong)param_1 + 0xbc);
    lVar6 = 0;
    do {
      iVar7 = *(int *)(*(longlong *)(lVar1 + lVar6) + 0xbc) + 1;
      if (iVar5 <= iVar7) {
        iVar5 = iVar7;
      }
      *(int *)((longlong)param_1 + 0xbc) = iVar5;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar6);
  }
  lVar2 = (**(code **)(*param_1 + 0x2f8))(param_1,param_2,0,0);
  if (param_5 == '\0') {
    while (lVar2 != 0) {
      if ((char)*(undefined8 *)(lVar2 + 0xa0) == '\x02') {
        *(int *)((longlong)param_1 + 0xbc) = *(int *)((longlong)param_1 + 0xbc) + 1;
        break;
      }
      FUN_147575222(param_1,(int)((ulonglong)*(undefined8 *)(lVar2 + 0xa0) >> 0x20) - param_3);
      lVar2 = (**(code **)(*param_1 + 0x2f8))(param_1,param_2,0,0);
    }
  }
  else {
    while (lVar2 != 0) {
      *(int *)(param_1 + 0x17) = (int)param_1[0x17] + 1;
      lVar2 = (**(code **)(*param_1 + 0x2f8))(param_1,param_2,0,0);
    }
  }
  uVar3 = FUN_1402984e6();
  plVar4 = (longlong *)FUN_144a78ede(param_1,uVar3);
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147575895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x2b0))(plVar4);
    return;
  }
  return;
}



// FUNCTION 1475758a6 FUN_1475758a6 body=320 status=ok
// SIG undefined FUN_1475758a6(void)

void FUN_1475758a6(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(int *)((longlong)param_1 + 0x9c) = param_3;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(int *)((longlong)param_1 + 0xa4) = param_4 + param_3;
  *(int *)(param_1 + 0x17) = param_5;
  if (param_5 == -1) {
    *(undefined4 *)(param_1 + 0x17) = 0;
    while( true ) {
      lVar2 = (**(code **)(*param_1 + 0x2f8))(param_1,param_2,0,0);
      if (lVar2 == 0) break;
      *(int *)(param_1 + 0x17) = (int)param_1[0x17] + 1;
    }
  }
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    iVar5 = *(int *)((longlong)param_1 + 0xbc);
    lVar6 = 0;
    do {
      iVar7 = *(int *)(*(longlong *)(lVar1 + lVar6) + 0xbc) + 1;
      if (iVar5 <= iVar7) {
        iVar5 = iVar7;
      }
      *(int *)((longlong)param_1 + 0xbc) = iVar5;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar6);
  }
  lVar2 = (**(code **)(*param_1 + 0x2f8))(param_1,param_2,0,0);
  if ((lVar2 != 0) && (lVar2 = param_2[1], (longlong)(int)lVar2 != 0)) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      plVar4 = *(longlong **)(lVar1 + lVar6);
      if ((plVar4 != param_1 && plVar4 != (longlong *)0x0) &&
         ((int)param_1[0x17] <= (int)plVar4[0x17])) {
        *(int *)(plVar4 + 0x17) = (int)plVar4[0x17] + 1;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar6);
  }
  uVar3 = FUN_1402984e6();
  plVar4 = (longlong *)FUN_144a78ede(param_1,uVar3);
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475759a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x2b0))(plVar4);
    return;
  }
  return;
}



// FUNCTION 1475759e6 FUN_1475759e6 body=274 status=ok
// SIG undefined FUN_1475759e6(void)

longlong * FUN_1475759e6(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_3c = *param_2;
  cVar2 = FUN_1400a246c(param_1 + 0x13);
  if (cVar2 == '\0') {
    plVar4 = (longlong *)0x0;
  }
  else {
    FUN_144757f48(param_1,8);
    plVar4 = (longlong *)0x0;
    if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
      plVar1 = (longlong *)param_1[4];
      uVar3 = FUN_14055f146();
      plVar4 = (longlong *)FUN_14092e757(uVar3,param_1,plVar1,0);
      (**(code **)(*plVar1 + 0x318))(plVar1,plVar4);
      local_58 = *param_2;
      uStack_54 = param_2[1];
      uStack_50 = param_2[2];
      uStack_4c = param_2[3];
      (**(code **)(*param_1 + 0x2d8))(param_1,&local_58,0,param_3);
      *(undefined4 *)((longlong)param_1 + 100) = 0;
      *(undefined1 *)(param_1 + 0x12) = 0;
      *(undefined4 *)((longlong)param_1 + 0x94) = 0;
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      (**(code **)(*plVar4 + 0x2d8))(plVar4,&local_68,1,param_3);
      *(undefined4 *)(plVar4 + 0xc) = 0;
      *(undefined1 *)(plVar4 + 0xf) = 0;
      *(undefined4 *)((longlong)plVar4 + 0x7c) = 0;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147575afa FUN_147575afa body=237 status=ok
// SIG undefined FUN_147575afa(void)

undefined8 FUN_147575afa(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_1402984e6();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  if (lVar3 != 0) {
    uVar2 = FUN_14073751e();
    lVar4 = FUN_144a78ede(lVar3,uVar2);
    if ((lVar4 != 0) && ((longlong)*(int *)(lVar4 + 0x88) != 0)) {
      puVar5 = *(undefined4 **)(lVar4 + 0x80);
      puVar6 = puVar5 + (longlong)*(int *)(lVar4 + 0x88) * 0xc;
      uVar2 = 0;
      do {
        if ((longlong)(int)puVar5[10] != 0) {
          lVar7 = 0;
          do {
            if (*(longlong *)(*(longlong *)(puVar5 + 8) + lVar7) == lVar3) {
              local_28 = *puVar5;
              uStack_24 = puVar5[1];
              uStack_20 = puVar5[2];
              uStack_1c = puVar5[3];
              iVar1 = FUN_140c7f2b4(lVar4);
              if ((iVar1 == -1) ||
                 (lVar3 = (longlong)iVar1 * 0xf0 + *(longlong *)(lVar4 + 0x60), lVar3 == 0))
              goto LAB_147575bc8;
              uVar2 = *(undefined8 *)(lVar3 + 0xc0);
              goto LAB_147575bca;
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)(int)puVar5[10] * 8 != lVar7);
        }
        puVar5 = puVar5 + 0xc;
      } while (puVar5 != puVar6);
      goto LAB_147575bca;
    }
  }
LAB_147575bc8:
  uVar2 = 0;
LAB_147575bca:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147575be8 FUN_147575be8 body=292 status=ok
// SIG undefined FUN_147575be8(void)

void FUN_147575be8(longlong *param_1,uint *param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = *param_2;
  cVar4 = FUN_1400a246c(param_1 + 0x13);
  if (cVar4 != '\0') {
    FUN_144757f48(param_1,8);
    if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
      if ((char)param_3 == '\0') {
        param_1[0x14] = (ulonglong)*param_2 << 0x20;
      }
      else {
        param_1[0x13] = ((ulonglong)*param_2 << 0x20) + 1;
      }
      if (param_4 != '\0') {
        lVar6 = param_1[0x1c];
        if (lVar6 == 0) {
          uVar5 = (**(code **)(*param_1 + 0x358))(param_1);
          *(undefined1 *)(param_1 + 0x1e) = uVar5;
          lVar6 = param_1[0x1c];
        }
        lVar7 = lVar6 + 0x28;
        if (*(longlong *)(lVar6 + 0x40) != 0) {
          lVar7 = *(longlong *)(lVar6 + 0x40);
        }
        if ((longlong)*(int *)(lVar6 + 0x48) != 0) {
          lVar6 = lVar7 + (longlong)*(int *)(lVar6 + 0x48) * 0x18;
          do {
            iVar1 = *(int *)(lVar7 + 0x10);
            if ((longlong)iVar1 != 0) {
              lVar2 = *(longlong *)(lVar7 + 8);
              lVar8 = 0;
              do {
                plVar3 = *(longlong **)(lVar2 + lVar8);
                (**(code **)(*plVar3 + 0x30))(plVar3,*param_2,param_3);
                lVar8 = lVar8 + 8;
              } while ((longlong)iVar1 * 8 != lVar8);
            }
            lVar7 = lVar7 + 0x18;
          } while (lVar7 != lVar6);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147575d0e FUN_147575d0e body=183 status=ok
// SIG undefined FUN_147575d0e(void)

void FUN_147575d0e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147575dc6(param_1,&local_40,local_28);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147575dc6 FUN_147575dc6 body=614 status=ok
// SIG undefined FUN_147575dc6(void)

undefined8 * FUN_147575dc6(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [32];
  longlong *local_d8 [2];
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  longlong *local_a0 [2];
  undefined1 local_90 [8];
  undefined1 local_88 [48];
  undefined1 local_58 [8];
  longlong *local_50;
  wchar_t *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar8 = (longlong *)FUN_1475760dc(param_1,param_3);
  if ((int)plVar8[1] != 0) {
    puVar3 = (undefined4 *)*plVar8;
    param_2[2] = *(undefined8 *)(puVar3 + 4);
    uVar4 = puVar3[1];
    uVar5 = puVar3[2];
    uVar6 = puVar3[3];
    *(undefined4 *)param_2 = *puVar3;
    *(undefined4 *)((longlong)param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 1) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_f8);
  }
  FUN_1446ddc76(local_90,&DAT_14a492018,1);
  FUN_14276766e(local_88,local_90);
  local_48 = L"FindNamedBinding_Warning";
  local_40 = 0x18;
  FUN_1446e940c(local_a4,&local_48);
  local_48 = L"UMovieSceneSequence";
  local_40 = 0x13;
  FUN_1446e940c(local_a8,&local_48);
  FUN_140208bae(local_a0,local_a8,local_a4,L"Attempted to find a named binding that did not exist");
  FUN_1427679d4(local_88,&local_48,local_a0);
  pwVar7 = local_48;
  FUN_144a5dc74(local_d8);
  FUN_1468756a4(&local_c8,param_1,local_d8);
  local_b8 = local_c8;
  local_b0 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
  }
  FUN_1467eb24e(pwVar7,local_58,&local_b8);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_50 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  plVar8 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_b0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_c0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))(local_c0);
      }
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  plVar8 = (longlong *)CONCAT44(uStack_3c,local_40);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if (local_a0[0] != (longlong *)0x0) {
    (**(code **)(*local_a0[0] + 0x10))();
  }
  FUN_1427678c0(local_88);
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = DAT_14cab329c;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0xffffffff;
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14757602e FUN_14757602e body=172 status=ok
// SIG undefined FUN_14757602e(void)

void FUN_14757602e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1475760dc(param_1,local_28);
  FUN_147576204(param_3,uVar1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475760dc FUN_1475760dc body=296 status=ok
// SIG undefined FUN_1475760dc(void)

undefined8 * FUN_1475760dc(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x2e8))();
  if (*(int *)(lVar2 + 0x98) != *(int *)(lVar2 + 0xc4)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar4 = lVar2 + 200;
    if (*(longlong *)(lVar2 + 0xd0) != 0) {
      lVar4 = *(longlong *)(lVar2 + 0xd0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar2 + 0xd8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(lVar2 + 0x90) + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x90) + (longlong)iVar3 * 0x20) == param_2) {
          if (lVar4 != 0) {
            return (undefined8 *)(lVar4 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab3808) && (FUN_144b3d300(&DAT_14cab3808), DAT_14cab3808 == -1)) {
    DAT_14cab37f8 = 0;
    uRam000000014cab3800 = 0;
    atexit((_func_5014 *)&LAB_1432dd82d);
    _Init_thread_footer(&DAT_14cab3808);
  }
  return &DAT_14cab37f8;
}



// FUNCTION 147576204 FUN_147576204 body=89 status=ok
// SIG undefined FUN_147576204(void)

undefined8 * FUN_147576204(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147580b16(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 14757625e FUN_14757625e body=53 status=ok
// SIG undefined FUN_14757625e(void)

void FUN_14757625e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2e8))();
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined8 *)((longlong)param_3 + 0xd) = 0;
  return;
}



// FUNCTION 1475762a2 FUN_1475762a2 body=170 status=ok
// SIG undefined FUN_1475762a2(void)

void FUN_1475762a2(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14a483e58);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc28);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e31250);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = plVar1;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757634e FUN_14757634e body=60 status=ok
// SIG undefined FUN_14757634e(void)

undefined4 FUN_14757634e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2b8))();
  if ((char)uVar1 != '\0') {
    FUN_147025b42(param_4,param_2,param_3,0);
  }
  return uVar1;
}



// FUNCTION 14757638e FUN_14757638e body=145 status=ok
// SIG undefined FUN_14757638e(void)

void FUN_14757638e(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = (**(code **)(*param_1 + 0x2a8))();
  if (lVar4 == 0) {
    (**(code **)(*param_1 + 0x2c8))(param_1,param_2,*param_3,param_5);
  }
  else {
    FUN_14756fb9c(lVar4,param_2,param_3,param_5);
  }
  plVar3 = *(longlong **)(param_4 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001475763fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147576420 FUN_147576420 body=294 status=ok
// SIG undefined FUN_147576420(void)

undefined8 * FUN_147576420(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == 0 || param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  FUN_147571c5a(&local_48,param_4,param_1);
  if (local_40 == (longlong *)0x0) {
    local_58 = local_48;
    local_50 = (longlong *)0x0;
    (**(code **)(*param_1 + 0x2d0))(param_1,param_2,param_3);
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
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
    local_58 = local_48;
    local_50 = local_40;
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    (**(code **)(*param_1 + 0x2d0))(param_1,param_2,param_3);
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
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147576548 FUN_147576548 body=76 status=ok
// SIG undefined FUN_147576548(void)

void FUN_147576548(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != '\0') {
    uVar1 = FUN_140b55eae();
    FUN_1475350d8(uVar1,local_14,param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757659a FUN_14757659a body=68 status=ok
// SIG undefined FUN_14757659a(void)

void FUN_14757659a(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475765e0 FUN_1475765e0 body=15 status=ok
// SIG undefined FUN_1475765e0(void)

void FUN_1475765e0(longlong param_1)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfc | 2;
  FUN_1475765f0();
  return;
}



// FUNCTION 1475765f0 FUN_1475765f0 body=120 status=ok
// SIG undefined FUN_1475765f0(void)

undefined8 FUN_1475765f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    plVar3 = param_2;
    if ((*(byte *)(param_2 + 2) & 2) == 0) {
      plVar3 = (longlong *)*param_2;
    }
    lVar1 = (**(code **)(*plVar3 + 8))();
    plVar3 = *(longlong **)(lVar1 + 0xb8);
    uVar2 = FUN_147576668(param_1,(int)plVar3[1],*(undefined4 *)((longlong)plVar3 + 0xc));
    (**(code **)(*plVar3 + 0x10))(plVar3,uVar2);
    if ((*(byte *)(param_2 + 2) & 2) == 0) {
      param_2 = (longlong *)*param_2;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,uVar2,param_2,1);
  }
  return param_1;
}



// FUNCTION 147576668 FUN_147576668 body=97 status=ok
// SIG undefined FUN_147576668(void)

undefined8 * FUN_147576668(undefined8 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  FUN_1457651fa();
  bVar1 = *(byte *)(param_1 + 2) & 0xfd | (param_3 < 9 && param_2 < 0x11) * '\x02';
  *(byte *)(param_1 + 2) = bVar1;
  if (param_3 >= 9 || param_2 >= 0x11) {
    uVar2 = FUN_14001cc68(param_2,param_3);
    *param_1 = uVar2;
    bVar1 = *(byte *)(param_1 + 2);
  }
  *(byte *)(param_1 + 2) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = (undefined8 *)*param_1;
  }
  return param_1;
}



// FUNCTION 1475766f0 FUN_1475766f0 body=261 status=ok
// SIG undefined FUN_1475766f0(void)

void FUN_1475766f0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar3 = FUN_1405246fa();
  if (cVar3 != '\0') {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,3,0x10);
    puVar1 = local_28;
    local_20 = 3;
    *local_28 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_28[2] = lVar4;
    *local_28 = &PTR_FUN_14a491670;
    local_28[3] = 0;
    FUN_14485c47a(local_28 + 3,param_1);
    puVar1[4] = FUN_1475766f0;
    *(undefined4 *)(puVar1 + 5) = 0;
    FUN_14621550a(param_1,&local_28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  *(byte *)((longlong)param_1 + 0x294) = *(byte *)((longlong)param_1 + 0x294) ^ 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147576735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2b8))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475767fe FUN_1475767fe body=261 status=ok
// SIG undefined FUN_1475767fe(void)

void FUN_1475767fe(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = DAT_14cab329c;
  uStack_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_38;
  uStack_64 = local_38._4_4_;
  uStack_60 = (undefined4)uStack_30;
  uStack_5c = uStack_30._4_4_;
  local_58 = CONCAT44(uStack_24,local_28);
  FUN_147576904(param_1,&local_48);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147576904 FUN_147576904 body=339 status=ok
// SIG undefined FUN_147576904(void)

longlong * FUN_147576904(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  lVar6 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1 + 0x28);
  uVar4 = *(undefined8 *)(lVar6 + 8);
  plVar5 = *(longlong **)(lVar6 + 0x10);
  if (plVar5 == (longlong *)0x0) {
    local_60 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_60 = plVar5;
  }
  local_68 = uVar4;
  FUN_1410cbcd8(param_3,&local_58,DAT_14cab329c,&local_68);
  if ((longlong)local_50 != 0) {
    lVar6 = 0;
    do {
      local_70 = *(undefined8 *)(local_58 + lVar6);
      lVar7 = FUN_14479d2ce(&local_70);
      if (lVar7 != 0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1447f76d2(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar7;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)local_50 * 8 != lVar6);
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147576b9c FUN_147576b9c body=226 status=ok
// SIG undefined FUN_147576b9c(void)

void FUN_147576b9c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147576c80(param_1,&local_38,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147576c80 FUN_147576c80 body=201 status=ok
// SIG undefined FUN_147576c80(void)

undefined8 * FUN_147576c80(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  lVar4 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1 + 0x28);
  local_38 = *(undefined8 *)(lVar4 + 8);
  plVar3 = *(longlong **)(lVar4 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
    FUN_147555bda(param_1 + 0x38,param_3,&local_38,param_2);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_30 = plVar3;
    FUN_147555bda(param_1 + 0x38,param_3,&local_38,param_2);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147576d88 FUN_147576d88 body=236 status=ok
// SIG undefined FUN_147576d88(void)

void FUN_147576d88(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14179f158(param_1,&local_38,local_24 != 0);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147576f46 FUN_147576f46 body=154 status=ok
// SIG undefined FUN_147576f46(void)

void FUN_147576f46(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147576fe2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147576fe2 FUN_147576fe2 body=267 status=ok
// SIG undefined FUN_147576fe2(void)

void FUN_147576fe2(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_1405246fa();
  if (cVar3 != '\0') {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar1 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14a491750;
    *(undefined4 *)(local_30 + 1) = param_2;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_30[2] = lVar4;
    *local_30 = &PTR_FUN_14a4916e0;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    puVar1[4] = FUN_147576fe2;
    *(undefined4 *)(puVar1 + 5) = 0;
    FUN_14621550a(param_1,&local_30);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  *(undefined4 *)(param_1 + 0x57) = param_2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014757702a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2b8))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757710e FUN_14757710e body=436 status=ok
// SIG undefined FUN_14757710e(void)

void FUN_14757710e(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined4 local_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined1 local_79;
  undefined8 local_78;
  undefined4 local_70;
  void *local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_70 = 0;
  uStack_40 = 0x1000000;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = uStack_44 & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_79 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_79);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_79);
  }
  _Src = local_68;
  uVar1 = local_79;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c0 = local_78;
  local_b8 = local_70;
  local_b0 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_60;
  local_a8 = (int)uStack_60;
  if (lVar2 == 0) {
    local_a4 = 0;
  }
  else {
    FUN_1446dd670(&local_b0,uStack_60 & 0xffffffff,0);
    memcpy(local_b0,_Src,lVar2 * 2);
  }
  uStack_90 = uStack_48;
  uStack_8c = uStack_44;
  uStack_88 = uStack_40;
  uStack_a0 = (undefined4)local_58;
  uStack_9c = local_58._4_4_;
  uStack_98 = uStack_50;
  local_94 = uStack_4c;
  FUN_146341752(param_1,&local_c0,uVar1);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475772c4 FUN_1475772c4 body=81 status=ok
// SIG undefined FUN_1475772c4(void)

void FUN_1475772c4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = DAT_14cab329c;
  lVar2 = FUN_1475542ea(param_1 + 0x2e0);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x370) != 0)) {
    FUN_14755b532(*(longlong *)(param_1 + 0x370),uVar1);
    return;
  }
  return;
}



// FUNCTION 147577316 FUN_147577316 body=202 status=ok
// SIG undefined FUN_147577316(void)

void FUN_147577316(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = DAT_14cab329c;
  uStack_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = CONCAT44(uStack_24,local_28);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_1c = local_28;
  FUN_140e06640(param_1 + 0x38);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475773f8 FUN_1475773f8 body=164 status=ok
// SIG undefined FUN_1475773f8(void)

void FUN_1475773f8(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x290) = 2;
  plVar1 = *(longlong **)(param_1 + 0x3d0);
  local_20 = *(undefined8 *)(param_1 + 0x308);
  local_28 = *(undefined8 *)(param_1 + 0x31c);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  if ((char)plVar1[3] == '\x01') {
    *(undefined1 *)(plVar1 + 3) = 0;
  }
  cVar2 = FUN_1402d76c0(param_1);
  if (cVar2 != '\0') {
    *(undefined8 *)(param_1 + 0x38c) = *(undefined8 *)(param_1 + 0x31c);
    *(undefined1 *)(param_1 + 0x394) = *(undefined1 *)(param_1 + 0x290);
    *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_1 + 0x2ac);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475774a2 FUN_1475774a2 body=172 status=ok
// SIG undefined FUN_1475774a2(void)

void FUN_1475774a2(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(uint *)(param_1 + 0x2d0) = *(uint *)(param_1 + 0x2d0) & 0xffffffdf | (uint)(local_1c != 0) << 5;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147577550 FUN_147577550 body=326 status=ok
// SIG undefined FUN_147577550(void)

void FUN_147577550(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140ef61d2(param_1,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147577698 FUN_147577698 body=162 status=ok
// SIG undefined FUN_147577698(void)

void FUN_147577698(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0x10000ea60;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1432ddc5c(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147577740 FUN_147577740 body=172 status=ok
// SIG undefined FUN_147577740(void)

void FUN_147577740(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(uint *)(param_1 + 0x2d0) = *(uint *)(param_1 + 0x2d0) & 0xffffffef | (uint)(local_1c != 0) << 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475777ee FUN_1475777ee body=261 status=ok
// SIG undefined FUN_1475777ee(void)

void FUN_1475777ee(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1475778f4(param_1,local_38 + 2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475778f4 FUN_1475778f4 body=288 status=ok
// SIG undefined FUN_1475778f4(void)

void FUN_1475778f4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_78 [40];
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong **)(param_1 + 0x298) == (longlong *)0x0) ||
     (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x298) + 0x2e8))(), lVar5 == 0))
  goto LAB_147577936;
  iVar3 = FUN_14756ecdc(lVar5,param_2);
  iVar4 = FUN_14756ecdc(lVar5,param_3);
  uVar1 = *(undefined8 *)(lVar5 + 0x118);
  uVar2 = *(undefined8 *)(lVar5 + 0x120);
  if (iVar3 == -1) {
    if (iVar4 == -1) goto LAB_147577936;
    iVar3 = *(int *)(param_1 + 0x2a0);
LAB_1475779d6:
    FUN_144a808d5(local_50,*(undefined4 *)(*(longlong *)(lVar5 + 0x150) + (longlong)iVar4 * 0x20),
                  uVar1,uVar2);
    iVar6 = local_50[0] - iVar3;
    local_50[0] = iVar3;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x2a4);
    FUN_144a808d5(local_50,*(undefined4 *)(*(longlong *)(lVar5 + 0x150) + (longlong)iVar3 * 0x20),
                  uVar1,uVar2);
    iVar3 = local_50[0];
    if (iVar4 != -1) goto LAB_1475779d6;
  }
  FUN_140ef61d2(param_1,local_50[0],iVar6,0);
LAB_147577936:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147577a16 FUN_147577a16 body=360 status=ok
// SIG undefined FUN_147577a16(void)

void FUN_147577a16(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined4 local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  void *local_60;
  ulonglong uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_70 = 0;
  local_68 = 0;
  uStack_38 = 0x1000000;
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uStack_3c & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  _Src = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_68;
  local_b0 = local_70;
  local_a0 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_58;
  local_98 = (int)uStack_58;
  if (lVar1 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1446dd670(&local_a0,uStack_58 & 0xffffffff,0);
    memcpy(local_a0,_Src,lVar1 * 2);
  }
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  uStack_78 = uStack_38;
  uStack_90 = (undefined4)local_50;
  uStack_8c = local_50._4_4_;
  uStack_88 = uStack_48;
  local_84 = uStack_44;
  FUN_1405244c0(param_1);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147577b80 FUN_147577b80 body=156 status=ok
// SIG undefined FUN_147577b80(void)

void FUN_147577b80(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x2c8) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147577c1e FUN_147577c1e body=232 status=ok
// SIG undefined FUN_147577c1e(void)

void FUN_147577c1e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147577d08(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147577d08 FUN_147577d08 body=252 status=ok
// SIG undefined FUN_147577d08(void)

void FUN_147577d08(longlong param_1,float param_2,float param_3)

{
  int iVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  dVar3 = (double)(int)*(undefined8 *)(param_1 + 0x308);
  dVar7 = (double)(int)((ulonglong)*(undefined8 *)(param_1 + 0x308) >> 0x20);
  dVar5 = ((double)param_2 * dVar3) / dVar7;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar5;
  auVar9 = roundpd(auVar9,auVar9,1);
  dVar8 = auVar9._0_8_;
  dVar5 = dVar5 - dVar8;
  if (2147483647.0 <= dVar8) {
    dVar8 = 2147483647.0;
  }
  if (dVar8 <= -2147483648.0) {
    dVar8 = -2147483648.0;
  }
  dVar7 = ((double)param_3 * dVar3) / dVar7;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar7;
  auVar9 = roundpd(auVar4,auVar4,1);
  dVar3 = auVar9._0_8_;
  dVar7 = dVar7 - dVar3;
  if (2147483647.0 <= dVar3) {
    dVar3 = 2147483647.0;
  }
  if (dVar3 <= -2147483648.0) {
    dVar3 = -2147483648.0;
  }
  iVar1 = (int)dVar7;
  fVar2 = (float)dVar7 - (float)iVar1;
  fVar6 = fVar2;
  if (0.99999994 <= fVar2) {
    fVar6 = 0.99999994;
  }
  fVar6 = (float)(~-(uint)(0.0 < fVar2) & (uint)fVar2 | (uint)fVar6 & -(uint)(0.0 < fVar2)) + 0.5 +
          -0.5;
  if (0.99999994 <= fVar6) {
    fVar6 = 0.99999994;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  FUN_140ef61d2(param_1,(int)dVar5 + (int)dVar8,(uint)(0.5 <= fVar6) + (int)dVar3 + iVar1);
  return;
}



// FUNCTION 147577e04 FUN_147577e04 body=164 status=ok
// SIG undefined FUN_147577e04(void)

void FUN_147577e04(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147578214(param_1,local_20,DAT_14cab329c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147577ee8 FUN_147577ee8 body=108 status=ok
// SIG undefined FUN_147577ee8(void)

bool FUN_147577ee8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,2);
  if (uVar1 == local_2c) {
    FUN_144aa02de(*param_3,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147577f56 FUN_147577f56 body=139 status=ok
// SIG undefined FUN_147577f56(void)

undefined4 FUN_147577f56(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = *(undefined4 *)(param_2 + 8);
  FUN_1446ddc76(&local_38,"LevelSequencePlaybackSettings",1);
  uVar1 = FUN_1468ec2ac(&local_2c,local_38);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_14633a04a();
    FUN_14483b62e(uVar2,param_3,param_1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147577fe2 FUN_147577fe2 body=174 status=ok
// SIG undefined FUN_147577fe2(void)

void FUN_147577fe2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5,undefined8 param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x378) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x380), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_3,param_4,param_6);
    if (cVar2 == '\0') goto LAB_147578038;
  }
  FUN_14757460e(param_1,local_48);
  local_58 = param_6;
  (**(code **)(*param_5 + 0x2c0))(param_5,param_3,param_2,local_48);
LAB_147578038:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475780a0 FUN_1475780a0 body=39 status=ok
// SIG undefined FUN_1475780a0(void)

void FUN_1475780a0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined8 *)(param_1 + 0x2d4) = *(undefined8 *)(param_3 + 8);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  *(undefined4 *)(param_1 + 0x2c4) = param_3[4];
  *(undefined4 *)(param_1 + 0x2c8) = uVar5;
  *(undefined4 *)(param_1 + 0x2cc) = uVar6;
  *(undefined4 *)(param_1 + 0x2d0) = uVar7;
  *(undefined4 *)(param_1 + 0x2b4) = uVar1;
  *(undefined4 *)(param_1 + 0x2b8) = uVar2;
  *(undefined4 *)(param_1 + 700) = uVar3;
  *(undefined4 *)(param_1 + 0x2c0) = uVar4;
  FUN_140a23dcc();
  return;
}



// FUNCTION 1475780d4 FUN_1475780d4 body=176 status=ok
// SIG undefined FUN_1475780d4(void)

void FUN_1475780d4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_147578186(param_1,&local_28);
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    local_30 = *(undefined8 *)(param_1 + 0x308);
    local_38 = *(undefined8 *)(param_1 + 0x31c);
    FUN_1405246a4();
  }
  plVar3 = (longlong *)param_2[1];
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



// FUNCTION 147578186 FUN_147578186 body=133 status=ok
// SIG undefined FUN_147578186(void)

void FUN_147578186(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x3d8);
  *(undefined8 *)(param_1 + 0x3d0) = uVar3;
  *(longlong *)(param_1 + 0x3d8) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001475781ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147578214 FUN_147578214 body=783 status=ok
// SIG undefined FUN_147578214(void)

void FUN_147578214(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  longlong *local_f8;
  longlong local_f0 [2];
  longlong *local_e0 [2];
  longlong *local_d0 [2];
  longlong *local_c0 [2];
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  wchar_t *local_80;
  undefined4 local_78;
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar4 = FUN_1475542ea(param_1 + 0x2e0);
  if (lVar4 != 0) {
    if (*(longlong *)(param_1 + 0x370) == 0) {
      if (*(longlong *)(param_1 + 0x2e8) == 0) {
        uVar3 = 0xffff;
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(*(longlong *)(param_1 + 0x2e8) + 0x30);
        uVar3 = uVar8 & 0xffff;
        uVar8 = uVar8 & 0xffff0000;
      }
      uVar5 = FUN_14001cc68(0x20,0x10);
      FUN_14755b08c(uVar5,lVar4,uVar8 | uVar3);
      lVar4 = *(longlong *)(param_1 + 0x370);
      *(undefined8 *)(param_1 + 0x370) = uVar5;
      if (lVar4 != 0) {
        FUN_14755b0b8(lVar4);
        FUN_1400020a8(lVar4);
      }
      if (((*(byte *)(param_1 + 0x2d8) & 4) == 0) && (*(longlong *)(param_1 + 0x298) != 0)) {
        local_80 = L"SetWeightWarning";
        local_78 = 0x10;
        FUN_1446e940c(&local_90,&local_80);
        local_80 = L"UMovieSceneSequencePlayer";
        local_78 = 0x19;
        FUN_1446e940c(&local_a0,&local_80);
        FUN_140208bae(local_c0,&local_a0,&local_90,
                      L"Attempting to set a weight on sequence {0} with PlaybackSettings.bDynamicWeighting disabled. This may lead to undesireable blending artifacts or broken in/out blends."
                     );
        local_80 = *(wchar_t **)(*(longlong *)(param_1 + 0x298) + 0x18);
        FUN_1400021e4(&local_80,local_f0);
        FUN_140233b1a(local_e0,local_f0);
        FUN_14023409e(&local_100,local_c0,1);
        local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
        FUN_14023423e(local_70,local_e0);
        local_98 = local_60;
        local_a0 = &local_80;
        FUN_14010d304(&local_90,&local_a0);
        local_b0 = local_100;
        local_a8 = local_f8;
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_d0,&local_b0,&local_90);
        FUN_14007f2db(local_90,local_88);
        if (local_90 != 0) {
          FUN_1400020a8();
        }
        if (local_70[0] != (longlong *)0x0) {
          (**(code **)(*local_70[0] + 0x10))();
        }
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_f8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar2 = (int *)((longlong)local_f8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_f8 + 0x10))(local_f8);
            }
          }
        }
        if (local_e0[0] != (longlong *)0x0) {
          (**(code **)(*local_e0[0] + 0x10))();
        }
        puVar6 = (undefined8 *)FUN_1447a1f4a(local_d0);
        if (*(int *)(puVar6 + 1) == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        else {
          puVar7 = (undefined2 *)*puVar6;
        }
        FUN_1415b7ec4(puVar7,3,0);
        if (local_d0[0] != (longlong *)0x0) {
          (**(code **)(*local_d0[0] + 0x10))();
        }
        if (local_f0[0] != 0) {
          FUN_1400020a8();
        }
        if (local_c0[0] != (longlong *)0x0) {
          (**(code **)(*local_c0[0] + 0x10))();
        }
      }
    }
    FUN_14755b13e(*(undefined8 *)(param_1 + 0x370),param_3,param_2);
  }
  if ((local_60[0] ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147578548 FUN_147578548 body=45 status=ok
// SIG undefined FUN_147578548(void)

longlong FUN_147578548(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14757857c FUN_14757857c body=45 status=ok
// SIG undefined FUN_14757857c(void)

longlong FUN_14757857c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475785b8 FUN_1475785b8 body=38 status=ok
// SIG undefined FUN_1475785b8(void)

undefined8 FUN_1475785b8(undefined8 param_1,int param_2)

{
  FUN_14116d584();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475785de FUN_1475785de body=45 status=ok
// SIG undefined FUN_1475785de(void)

longlong FUN_1475785de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c8f6b4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14757864c FUN_14757864c body=84 status=ok
// SIG undefined FUN_14757864c(void)

void FUN_14757864c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  undefined2 local_f;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = 0xbf800000;
  local_f = 0;
  local_20 = param_3;
  local_18 = param_4;
  (**(code **)(*param_1 + 0xd0))(param_1,param_2,&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475786b6 FUN_1475786b6 body=81 status=ok
// SIG undefined FUN_1475786b6(void)

void FUN_1475786b6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  local_18 = param_3;
  FUN_147581f4c(param_1 + 0x118,local_c,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147578718 FUN_147578718 body=41 status=ok
// SIG undefined FUN_147578718(void)

void FUN_147578718(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0x77,
                L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::BindPossessableObject");
  return;
}



// FUNCTION 147578742 FUN_147578742 body=42 status=ok
// SIG undefined FUN_147578742(void)

undefined8 FUN_147578742(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0x80,
                L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::CanPossessObject");
  return 0;
}



// FUNCTION 14757876e FUN_14757876e body=63 status=ok
// SIG undefined FUN_14757876e(void)

undefined8 *
FUN_14757876e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar3 = *(longlong **)(param_4 + 8);
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
  return param_2;
}



// FUNCTION 1475787b0 FUN_1475787b0 body=42 status=ok
// SIG undefined FUN_1475787b0(void)

undefined8 FUN_1475787b0(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0xd9,
                L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::GetMovieScene()");
  return 0;
}



// FUNCTION 1475787da FUN_1475787da body=42 status=ok
// SIG undefined FUN_1475787da(void)

undefined8 FUN_1475787da(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0xe1,
                L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::GetParentObject()");
  return 0;
}



// FUNCTION 14757880c FUN_14757880c body=41 status=ok
// SIG undefined FUN_14757880c(void)

void FUN_14757880c(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0xf7,
                L"Pure virtual not implemented (%s)",
                L"UMovieSceneSequence::UnbindPossessableObjects");
  return;
}



// FUNCTION 147578836 FUN_147578836 body=41 status=ok
// SIG undefined FUN_147578836(void)

void FUN_147578836(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0x100,
                L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::UnbindObjects");
  return;
}



// FUNCTION 147578860 FUN_147578860 body=41 status=ok
// SIG undefined FUN_147578860(void)

void FUN_147578860(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0x108,
                L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::UnbindInvalidObjects");
  return;
}



// FUNCTION 1475788aa FUN_1475788aa body=51 status=ok
// SIG undefined FUN_1475788aa(void)

undefined8 FUN_1475788aa(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
  return 0;
}



// FUNCTION 1475788fe FUN_1475788fe body=66 status=ok
// SIG undefined FUN_1475788fe(void)

longlong * FUN_1475788fe(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1f8);
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_2[1] = *(longlong *)(param_1 + 0x200);
  return param_2;
}



// FUNCTION 147578940 FUN_147578940 body=45 status=ok
// SIG undefined FUN_147578940(void)

longlong FUN_147578940(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140a07204(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14757896e FUN_14757896e body=48 status=ok
// SIG undefined FUN_14757896e(void)

longlong FUN_14757896e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x210;
  FUN_140a07204(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147578a12 FUN_147578a12 body=59 status=ok
// SIG undefined FUN_147578a12(void)

undefined8 FUN_147578a12(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147578ae2 FUN_147578ae2 body=194 status=ok
// SIG undefined FUN_147578ae2(void)

undefined8 FUN_147578ae2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      FUN_147579064(param_2 + lVar10,param_3 + lVar10);
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_140bee9ec(lVar1 + 0x50,lVar2 + 0x50);
      uVar3 = *(undefined4 *)(lVar2 + 100);
      uVar4 = *(undefined4 *)(lVar2 + 0x68);
      uVar5 = *(undefined4 *)(lVar2 + 0x6c);
      uVar6 = *(undefined4 *)(lVar2 + 0x70);
      uVar7 = *(undefined4 *)(lVar2 + 0x74);
      uVar8 = *(undefined4 *)(lVar2 + 0x78);
      uVar9 = *(undefined4 *)(lVar2 + 0x7c);
      *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)(lVar2 + 0x60);
      *(undefined4 *)(lVar1 + 100) = uVar3;
      *(undefined4 *)(lVar1 + 0x68) = uVar4;
      *(undefined4 *)(lVar1 + 0x6c) = uVar5;
      *(undefined4 *)(lVar1 + 0x70) = uVar6;
      *(undefined4 *)(lVar1 + 0x74) = uVar7;
      *(undefined4 *)(lVar1 + 0x78) = uVar8;
      *(undefined4 *)(lVar1 + 0x7c) = uVar9;
      FUN_147578fea(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      uVar3 = *(undefined4 *)(lVar2 + 0xd4);
      uVar4 = *(undefined4 *)(lVar2 + 0xd8);
      uVar5 = *(undefined4 *)(lVar2 + 0xdc);
      uVar6 = *(undefined4 *)(lVar2 + 0xe0);
      uVar7 = *(undefined4 *)(lVar2 + 0xe4);
      uVar8 = *(undefined4 *)(lVar2 + 0xe8);
      uVar9 = *(undefined4 *)(lVar2 + 0xec);
      *(undefined4 *)(lVar1 + 0xd0) = *(undefined4 *)(lVar2 + 0xd0);
      *(undefined4 *)(lVar1 + 0xd4) = uVar3;
      *(undefined4 *)(lVar1 + 0xd8) = uVar4;
      *(undefined4 *)(lVar1 + 0xdc) = uVar5;
      *(undefined4 *)(lVar1 + 0xe0) = uVar6;
      *(undefined4 *)(lVar1 + 0xe4) = uVar7;
      *(undefined4 *)(lVar1 + 0xe8) = uVar8;
      *(undefined4 *)(lVar1 + 0xec) = uVar9;
      lVar10 = lVar10 + 0xf0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147578bcc FUN_147578bcc body=59 status=ok
// SIG undefined FUN_147578bcc(void)

undefined8 FUN_147578bcc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147578c18 FUN_147578c18 body=40 status=ok
// SIG undefined FUN_147578c18(void)

void FUN_147578c18(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_147578d26(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 147578d26 FUN_147578d26 body=112 status=ok
// SIG undefined FUN_147578d26(void)

void FUN_147578d26(longlong param_1)

{
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_147578d96(param_1 + 0x80);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_147578e4e(param_1);
  return;
}



// FUNCTION 147578d96 FUN_147578d96 body=54 status=ok
// SIG undefined FUN_147578d96(void)

void FUN_147578d96(longlong *param_1)

{
  FUN_147578dcc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147578dcc FUN_147578dcc body=128 status=ok
// SIG undefined FUN_147578dcc(void)

void FUN_147578dcc(longlong param_1,int param_2)

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
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147578e4e FUN_147578e4e body=54 status=ok
// SIG undefined FUN_147578e4e(void)

void FUN_147578e4e(longlong *param_1)

{
  FUN_147578e84(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147578e84 FUN_147578e84 body=355 status=ok
// SIG undefined FUN_147578e84(void)

void FUN_147578e84(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147578fea FUN_147578fea body=122 status=ok
// SIG undefined FUN_147578fea(void)

longlong FUN_147578fea(longlong param_1,longlong param_2)

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
    FUN_147579210(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147579064 FUN_147579064 body=122 status=ok
// SIG undefined FUN_147579064(void)

longlong FUN_147579064(longlong param_1,longlong param_2)

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
    FUN_1475790de(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1475790de FUN_1475790de body=201 status=ok
// SIG undefined FUN_1475790de(void)

undefined8 * FUN_1475790de(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147578e84(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1475791a8(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1475791a8 FUN_1475791a8 body=103 status=ok
// SIG undefined FUN_1475791a8(void)

undefined8 * FUN_1475791a8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 147579210 FUN_147579210 body=121 status=ok
// SIG undefined FUN_147579210(void)

undefined8 * FUN_147579210(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147578dcc(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447cc1b4(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0xc);
    }
  }
  return param_1;
}



// FUNCTION 14757929a FUN_14757929a body=44 status=ok
// SIG undefined FUN_14757929a(void)

void FUN_14757929a(undefined8 param_1,longlong *param_2)

{
  FUN_1447a1747(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475792dc FUN_1475792dc body=54 status=ok
// SIG undefined FUN_1475792dc(void)

undefined1 FUN_1475792dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140bee9ec(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14757933a FUN_14757933a body=59 status=ok
// SIG undefined FUN_14757933a(void)

undefined8 FUN_14757933a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475793d8 FUN_1475793d8 body=48 status=ok
// SIG undefined FUN_1475793d8(void)

void FUN_1475793d8(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1447a1747(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 14757943c FUN_14757943c body=54 status=ok
// SIG undefined FUN_14757943c(void)

undefined1 FUN_14757943c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147576204(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14757949a FUN_14757949a body=59 status=ok
// SIG undefined FUN_14757949a(void)

undefined8 FUN_14757949a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475794e0 FUN_1475794e0 body=37 status=ok
// SIG undefined FUN_1475794e0(void)

void FUN_1475794e0(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14757958a FUN_14757958a body=54 status=ok
// SIG undefined FUN_14757958a(void)

undefined1 FUN_14757958a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475796a2(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1475795e8 FUN_1475795e8 body=59 status=ok
// SIG undefined FUN_1475795e8(void)

undefined8 FUN_1475795e8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757962e FUN_14757962e body=37 status=ok
// SIG undefined FUN_14757962e(void)

void FUN_14757962e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1475796a2 FUN_1475796a2 body=88 status=ok
// SIG undefined FUN_1475796a2(void)

undefined8 * FUN_1475796a2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1475796fa(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1475796fa FUN_1475796fa body=98 status=ok
// SIG undefined FUN_1475796fa(void)

void FUN_1475796fa(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147579796 FUN_147579796 body=96 status=ok
// SIG undefined FUN_147579796(void)

undefined8 FUN_147579796(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined4 *)(lVar2 + -8) = *puVar1;
      FUN_144a787a6(lVar2,puVar1 + 2);
      *(undefined2 *)(lVar2 + 0x10) = *(undefined2 *)(puVar1 + 6);
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14757981e FUN_14757981e body=59 status=ok
// SIG undefined FUN_14757981e(void)

undefined8 FUN_14757981e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147579864 FUN_147579864 body=38 status=ok
// SIG undefined FUN_147579864(void)

void FUN_147579864(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1475798da FUN_1475798da body=248 status=ok
// SIG undefined FUN_1475798da(void)

longlong * FUN_1475798da(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar3 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_2;
    }
  }
  *param_1 = lVar3;
  plVar1 = param_2 + 1;
  lVar3 = FUN_1446ddbd2();
  if (param_2[1] == 0) {
    if ((int)param_2[4] != 0) goto LAB_147579929;
  }
  else {
    cVar2 = FUN_144729dda(param_2 + 2);
    if ((cVar2 != '\0') || ((int)param_2[4] == 0)) {
      lVar4 = *plVar1;
      goto LAB_14757999c;
    }
LAB_147579929:
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (bVar6) goto LAB_14757994e;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_14757994e:
        *plVar1 = lVar4;
        goto LAB_14757999c;
      }
    }
    if (*plVar1 != 0) {
      *plVar1 = 0;
      param_2[2] = 0;
    }
  }
  lVar4 = 0;
LAB_14757999c:
  param_1[1] = lVar4;
  param_1[2] = param_2[2];
  FUN_1406fa324(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 1475799d2 FUN_1475799d2 body=98 status=ok
// SIG undefined FUN_1475799d2(void)

void FUN_1475799d2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147579a34 FUN_147579a34 body=82 status=ok
// SIG undefined FUN_147579a34(void)

void FUN_147579a34(longlong param_1,longlong param_2,int param_3)

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
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147579a86 FUN_147579a86 body=79 status=ok
// SIG undefined FUN_147579a86(void)

undefined8 * FUN_147579a86(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1475799d2(param_1,iVar1);
      FUN_147579a34(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147579ae6 FUN_147579ae6 body=48 status=ok
// SIG undefined FUN_147579ae6(void)

void FUN_147579ae6(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147579b2c FUN_147579b2c body=83 status=ok
// SIG undefined FUN_147579b2c(void)

undefined1 FUN_147579b2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_147579a86(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147579ba8 FUN_147579ba8 body=59 status=ok
// SIG undefined FUN_147579ba8(void)

undefined8 FUN_147579ba8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147579c46 FUN_147579c46 body=52 status=ok
// SIG undefined FUN_147579c46(void)

void FUN_147579c46(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}


