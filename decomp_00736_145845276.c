// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145845276 FUN_145845276 body=92 status=ok
// SIG undefined FUN_145845276(void)

void FUN_145845276(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4ef9d0;
  plVar3 = (longlong *)param_1[4];
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
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001458452ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1458452d2 FUN_1458452d2 body=121 status=ok
// SIG undefined FUN_1458452d2(void)

void FUN_1458452d2(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x118 + lVar1);
  FUN_14121cbdb(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x118),(longlong)iVar3 * 0x118);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14584534c FUN_14584534c body=106 status=ok
// SIG undefined FUN_14584534c(void)

void FUN_14584534c(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if ((longlong)(int)param_1[1] != 0) {
    uVar1 = 0;
    do {
      if ((*(short *)(*param_1 + 0xc + uVar1) == *(short *)(param_2 + 0xc)) &&
         (*(int *)(*param_1 + 0x10 + uVar1) == *(int *)(param_2 + 0x10))) {
        if ((int)(uVar1 >> 4) * 0x38e38e39 == -1) {
          return;
        }
        FUN_145845464(param_1);
        FUN_1458453b6(param_1);
        return;
      }
      uVar1 = uVar1 + 0x90;
    } while ((longlong)(int)param_1[1] * 0x90 != uVar1);
  }
  return;
}



// FUNCTION 1458453b6 FUN_1458453b6 body=62 status=ok
// SIG undefined FUN_1458453b6(void)

void FUN_1458453b6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458453f4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x90,8);
  }
  return;
}



// FUNCTION 1458453f4 FUN_1458453f4 body=111 status=ok
// SIG undefined FUN_1458453f4(void)

ulonglong FUN_1458453f4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x90) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x90,8);
      uVar1 = uVar1 / 0x90;
    }
  }
  return uVar1;
}



// FUNCTION 145845464 FUN_145845464 body=124 status=ok
// SIG undefined FUN_145845464(void)

void FUN_145845464(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x90 + lVar1);
  FUN_1458454e0(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x90),(longlong)iVar3 * 0x90);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1458454e0 FUN_1458454e0 body=41 status=ok
// SIG undefined FUN_1458454e0(void)

void FUN_1458454e0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14584550a(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 14584550a FUN_14584550a body=101 status=ok
// SIG undefined FUN_14584550a(void)

void FUN_14584550a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_14121cc12(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x55) == '\x01') {
    *(undefined1 *)(param_1 + 0x55) = 0;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145845570 FUN_145845570 body=62 status=ok
// SIG undefined FUN_145845570(void)

void FUN_145845570(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458455ae(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 1458455ae FUN_1458455ae body=111 status=ok
// SIG undefined FUN_1458455ae(void)

ulonglong FUN_1458455ae(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x48) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      uVar1 = uVar1 / 0x48;
    }
  }
  return uVar1;
}



// FUNCTION 14584564c FUN_14584564c body=122 status=ok
// SIG undefined FUN_14584564c(void)

undefined8 * FUN_14584564c(undefined8 *param_1)

{
  FUN_140b9673e();
  *param_1 = &PTR_FUN_14b5e2b80;
  param_1[5] = &PTR_FUN_14b5e31a0;
  param_1[6] = &PTR_LAB_14b5e31e0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0x4000;
  param_1[0x6e] = 0;
  *(undefined1 *)(param_1 + 0x6f) = 1;
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0x80 | 0x43;
  *(byte *)((longlong)param_1 + 0x2a9) = *(byte *)((longlong)param_1 + 0x2a9) & 0xfe;
  return param_1;
}



// FUNCTION 1458456ce FUN_1458456ce body=316 status=ok
// SIG undefined FUN_1458456ce(void)

undefined8 * FUN_1458456ce(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_14584580a();
  *param_1 = &PTR_FUN_14ba06810;
  param_1[6] = &PTR_FUN_14ba06b18;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0xf] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x10] = uVar1;
  param_1[0x11] = DAT_14c8464f0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0x3ff0000000000000;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x1b) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar4;
  param_1[0x1d] = DAT_14c8464f0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0x3ff0000000000000;
  FUN_1458d302c(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x3ff00000;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0x3ff0000000000000;
  param_1[0x59] = 0x3ff0000000000000;
  param_1[0x5a] = 0x3ff0000000000000;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 14584580a FUN_14584580a body=32 status=ok
// SIG undefined FUN_14584580a(void)

undefined8 * FUN_14584580a(undefined8 *param_1)

{
  FUN_1412202b0();
  *param_1 = &PTR_FUN_14aef2a90;
  return param_1;
}



// FUNCTION 14584584c FUN_14584584c body=17 status=ok
// SIG undefined FUN_14584584c(void)

void FUN_14584584c(longlong *param_1,longlong *param_2)

{
  if (*param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145845859. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return;
  }
  return;
}



// FUNCTION 14584585e FUN_14584585e body=71 status=ok
// SIG undefined FUN_14584585e(void)

void FUN_14584585e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_14113f0c0(param_1 + 0x50);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x48);
    FUN_1458458a5(param_1 + 0x50,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1458458a5 FUN_1458458a5 body=106 status=ok
// SIG undefined FUN_1458458a5(void)

void FUN_1458458a5(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_28 = param_3;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145845918 FUN_145845918 body=185 status=ok
// SIG undefined FUN_145845918(void)

undefined8 * FUN_145845918(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_14097c306();
  *param_1 = &PTR_FUN_14b8d6690;
  param_1[0xad] = &PTR_FUN_14b8d6a30;
  *(undefined1 *)(param_1 + 0xc6) = 0;
  uVar1 = DAT_14c8463f8;
  param_1[199] = DAT_14c8463f0;
  param_1[200] = uVar1;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xcd] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xcb] = DAT_14c8464e0;
  param_1[0xcc] = uVar1;
  param_1[0xd0] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xce] = DAT_14c8464e0;
  param_1[0xcf] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x68c) = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  puVar2 = (undefined8 *)FUN_1458459d1();
  param_1[0xd4] = *puVar2;
  return param_1;
}



// FUNCTION 1458459d1 FUN_1458459d1 body=21 status=ok
// SIG undefined FUN_1458459d1(void)

undefined * FUN_1458459d1(void)

{
  FUN_1458459e6();
  return &DAT_14cbc3ca0;
}



// FUNCTION 1458459e6 FUN_1458459e6 body=194 status=ok
// SIG undefined FUN_1458459e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458459e6(void)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbc3ca8 == '\0') {
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    lVar1 = DAT_14caa8580;
    FUN_140056680(local_30,L"OakDefaultAnimSetTags");
    FUN_1446f470e(&local_40,L"AnimSet.Player.Vehicle.AdditiveAdjustmentPose",1);
    FUN_1413e432a(lVar1,&local_38,local_40,local_30);
    _DAT_14cbc3ca0 = local_38;
    DAT_14cbc3ca8 = '\x01';
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145845aaa FUN_145845aaa body=64 status=ok
// SIG undefined FUN_145845aaa(void)

void FUN_145845aaa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145845aea(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145845aea FUN_145845aea body=95 status=ok
// SIG undefined FUN_145845aea(void)

ulonglong FUN_145845aea(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 145845b66 FUN_145845b66 body=57 status=ok
// SIG undefined FUN_145845b66(void)

void FUN_145845b66(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60c78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60c78 = FUN_140002ddd(FUN_1464ef24a,uVar1,L"GbxMomentNodeState_PlayDialogLines");
  }
  return;
}



// FUNCTION 145845ba6 FUN_145845ba6 body=57 status=ok
// SIG undefined FUN_145845ba6(void)

void FUN_145845ba6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0d40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0d40 = FUN_140002ddd(FUN_1465ac373,uVar1,L"GbxBrainAspect_Land");
  }
  return;
}



// FUNCTION 145845be0 FUN_145845be0 body=186 status=ok
// SIG undefined FUN_145845be0(void)

void FUN_145845be0(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = FUN_1412217cc();
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_30);
  }
  FUN_14122166c(&local_30,param_3);
  iVar1 = DAT_14cab5a58;
  lVar3 = (longlong)(int)DAT_14cab5a58;
  DAT_14cab5a58 = DAT_14cab5a58 + 1;
  if (DAT_14cab5a5c < DAT_14cab5a58) {
    FUN_145845c9c(iVar1);
  }
  puVar2 = &DAT_14cab5a38;
  if (DAT_14cab5a50 != (undefined2 *)0x0) {
    puVar2 = DAT_14cab5a50;
  }
  puVar2[lVar3 * 3] = param_1;
  puVar2[lVar3 * 3 + 1] = param_2;
  puVar2[lVar3 * 3 + 2] = (short)param_3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145845c9c FUN_145845c9c body=128 status=ok
// SIG undefined FUN_145845c9c(void)

void FUN_145845c9c(int param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = DAT_14cab5a58;
  if (param_1 <= (int)DAT_14cab5a58) {
    if (DAT_14cab5a58 < 5) {
      DAT_14cab5a5c = 4;
    }
    else {
      lVar3 = (longlong)(int)DAT_14cab5a58;
      if (4 < DAT_14cab5a5c) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 6,0);
      iVar2 = (int)(uVar4 / 6);
      DAT_14cab5a5c = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        DAT_14cab5a5c = iVar2;
      }
    }
    FUN_145845d1c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14cab5a58);
}



// FUNCTION 145845d1c FUN_145845d1c body=147 status=ok
// SIG undefined FUN_145845d1c(void)

void FUN_145845d1c(int param_1,uint param_2)

{
  if (param_2 < 5) {
    if (DAT_14cab5a50 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14cab5a38,DAT_14cab5a50,(longlong)param_1 * 6);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14cab5a50 == (void *)0x0) {
    FUN_1446efa72(&DAT_14cab5a50,0,param_2,6);
    memmove(DAT_14cab5a50,&DAT_14cab5a38,(longlong)param_1 * 6);
    return;
  }
  FUN_1446efa72(&DAT_14cab5a50,param_1,param_2,6);
  return;
}



// FUNCTION 145845db0 FUN_145845db0 body=77 status=ok
// SIG undefined FUN_145845db0(void)

undefined8 * FUN_145845db0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6e5070;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1412218b2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 145845dfe FUN_145845dfe body=174 status=ok
// SIG undefined FUN_145845dfe(void)

void FUN_145845dfe(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    uVar1 = FUN_140338614();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
      local_48 = &LAB_141051786;
      local_40 = 0;
      FUN_145845f98(local_38,param_1);
      FUN_145845eb4(uVar1,&local_48,local_38);
      FUN_1449db362(local_38);
    }
  }
  thunk_FUN_14105178c(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145845eae thunk_FUN_14105178c body=5 status=ok
// SIG undefined thunk_FUN_14105178c(void)

void thunk_FUN_14105178c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_141051814:
    uStack_28 = 0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_141051814;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    uStack_28 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plStack_20 = plVar4;
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
  FUN_141051866(uVar3,&uStack_28);
  plVar4 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(uStack_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145845eb4 FUN_145845eb4 body=214 status=ok
// SIG undefined FUN_145845eb4(void)

undefined8 * FUN_145845eb4(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145845f98 FUN_145845f98 body=428 status=ok
// SIG undefined FUN_145845f98(void)

longlong * FUN_145845f98(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145846078:
    *puVar5 = &PTR_LAB_14b96d6d0;
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
    *puVar5 = &PTR_FUN_14b96d660;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145846078;
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
    *puVar5 = &PTR_LAB_14b96d6d0;
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
    *puVar5 = &PTR_FUN_14b96d660;
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



// FUNCTION 145846144 FUN_145846144 body=179 status=ok
// SIG undefined FUN_145846144(void)

undefined8 * FUN_145846144(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14a179950;
  uVar1 = FUN_14001cc68(0x10,0x10);
  FUN_145846242(uVar1);
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14a17a070;
  puVar2[2] = uVar1;
  param_1[1] = uVar1;
  param_1[2] = puVar2;
  local_20 = 0;
  FUN_1458461f8();
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458461f8 FUN_1458461f8 body=73 status=ok
// SIG undefined FUN_1458461f8(void)

void FUN_1458461f8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  plVar4 = *(longlong **)(lVar3 + 8);
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
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  FUN_1400020a8(lVar3);
  return;
}



// FUNCTION 145846242 FUN_145846242 body=180 status=ok
// SIG undefined FUN_145846242(void)

longlong * FUN_145846242(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_14001cc68(0x10,0x10);
  plVar1[1] = 0;
  lVar2 = FUN_14001cc68(0x30,0x10);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *plVar1 = lVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14a179ef0;
  puVar3[2] = plVar1;
  *param_1 = (longlong)plVar1;
  param_1[1] = (longlong)puVar3;
  local_28 = 0;
  FUN_1458462f8();
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458462f8 FUN_1458462f8 body=52 status=ok
// SIG undefined FUN_1458462f8(void)

void FUN_1458462f8(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if (param_1 == (longlong *)0x0) {
    return;
  }
  FUN_1401e1e6a(*(undefined8 *)(*param_1 + 8));
  FUN_1400020a8(*param_1);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145846338 FUN_145846338 body=65 status=ok
// SIG undefined FUN_145846338(void)

longlong FUN_145846338(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145846390(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_145846379(lVar2);
  return lVar2;
}



// FUNCTION 145846379 FUN_145846379 body=22 status=ok
// SIG undefined FUN_145846379(void)

void FUN_145846379(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 145846390 FUN_145846390 body=147 status=ok
// SIG undefined FUN_145846390(void)

void FUN_145846390(longlong param_1,int param_2)

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



// FUNCTION 145846424 FUN_145846424 body=78 status=ok
// SIG undefined FUN_145846424(void)

undefined8 * FUN_145846424(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a26be80;
  param_1[2] = 0x40000000400;
  param_1[3] = 4;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_145846472(param_1 + 5);
  return param_1;
}



// FUNCTION 145846472 FUN_145846472 body=79 status=ok
// SIG undefined FUN_145846472(void)

void FUN_145846472(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 4;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 4) {
    FUN_145846598(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}



// FUNCTION 1458464c2 FUN_1458464c2 body=102 status=ok
// SIG undefined FUN_1458464c2(void)

undefined8 * FUN_1458464c2(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 1;
  FUN_14473de44(param_1 + 4);
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x100000000;
  param_1[0xe] = 0;
  param_1[10] = &DAT_100000001;
  FUN_144718544(param_1 + 0xb);
  return param_1;
}



// FUNCTION 145846528 FUN_145846528 body=112 status=ok
// SIG undefined FUN_145846528(void)

undefined8 * FUN_145846528(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a27d000;
  param_1[2] = 0x400000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 5) = 4;
  FUN_14134681c(param_1 + 4,0);
  puVar1 = (undefined8 *)param_1[4];
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 145846598 FUN_145846598 body=132 status=ok
// SIG undefined FUN_145846598(void)

void FUN_145846598(longlong param_1,int param_2)

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



// FUNCTION 145846644 FUN_145846644 body=13 status=ok
// SIG undefined FUN_145846644(void)

void FUN_145846644(longlong param_1)

{
  FUN_145846652(param_1 + 0x10,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 145846652 FUN_145846652 body=62 status=ok
// SIG undefined FUN_145846652(void)

void FUN_145846652(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_14047c7cc(param_2);
    FUN_1400020a8(param_2);
    return;
  }
  return;
}



// FUNCTION 145846690 FUN_145846690 body=53 status=ok
// SIG undefined FUN_145846690(void)

void FUN_145846690(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1458466c6(param_1);
  return;
}



// FUNCTION 1458466c6 FUN_1458466c6 body=69 status=ok
// SIG undefined FUN_1458466c6(void)

void FUN_1458466c6(longlong *param_1)

{
  FUN_14584670c();
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14584670c FUN_14584670c body=78 status=ok
// SIG undefined FUN_14584670c(void)

void FUN_14584670c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1471fcb40(param_1);
  }
  FUN_14473de44(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_1446fb5ec(param_1 + 0x10,0);
  return;
}



// FUNCTION 145846768 FUN_145846768 body=36 status=ok
// SIG undefined FUN_145846768(void)

undefined8 FUN_145846768(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14584679a FUN_14584679a body=36 status=ok
// SIG undefined FUN_14584679a(void)

undefined8 FUN_14584679a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1458467be FUN_1458467be body=144 status=ok
// SIG undefined FUN_1458467be(void)

bool FUN_1458467be(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 145846860 FUN_145846860 body=66 status=ok
// SIG undefined FUN_145846860(void)

void FUN_145846860(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3a4a60;
  plVar3 = (longlong *)param_1[5];
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
                    /* WARNING: Could not recover jumptable at 0x000145846897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458468b0 FUN_1458468b0 body=36 status=ok
// SIG undefined FUN_1458468b0(void)

undefined8 FUN_1458468b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1458468e2 FUN_1458468e2 body=36 status=ok
// SIG undefined FUN_1458468e2(void)

undefined8 FUN_1458468e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 145846914 FUN_145846914 body=36 status=ok
// SIG undefined FUN_145846914(void)

undefined8 FUN_145846914(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 145846938 FUN_145846938 body=71 status=ok
// SIG undefined FUN_145846938(void)

void FUN_145846938(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = FUN_1458469b2(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014584694f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  _Dst = (void *)FUN_141193556(&DAT_14cb85450);
  memset(_Dst,0,0xc0);
  FUN_145836b20(_Dst);
  return;
}



// FUNCTION 145846980 FUN_145846980 body=49 status=ok
// SIG undefined FUN_145846980(void)

void FUN_145846980(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_141193556(&DAT_14cb85450);
  memset(_Dst,0,0xc0);
  FUN_145836b20(_Dst);
  return;
}



// FUNCTION 1458469b2 FUN_1458469b2 body=191 status=ok
// SIG undefined FUN_1458469b2(void)

longlong FUN_1458469b2(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_145846a72();
  lVar3 = *param_1;
  if (DAT_14cb85400 != DAT_14cb8542c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb85430;
    if (DAT_14cb85438 != (undefined *)0x0) {
      puVar7 = DAT_14cb85438;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb85440 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb853f8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb853f0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 145846a72 FUN_145846a72 body=152 status=ok
// SIG undefined FUN_145846a72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145846a72(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb85448) {
    FUN_144b3d300(&DAT_14cb85448);
    if (DAT_14cb85448 == -1) {
      DAT_14cb85418 = 0;
      DAT_14cb85420 = 0;
      DAT_14cb853f8 = 0;
      _DAT_14cb85400 = 0;
      _DAT_14cb85424 = 0xffffffff00000080;
      DAT_14cb8542c = 0;
      DAT_14cb85438 = 0;
      DAT_14cb85440 = 0;
      atexit(FUN_143dd170a);
      _Init_thread_footer(&DAT_14cb85448);
      return;
    }
  }
  return;
}



// FUNCTION 145846b0a FUN_145846b0a body=489 status=ok
// SIG undefined FUN_145846b0a(void)

void FUN_145846b0a(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb857b8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb857b8,0,0,4);
  }
  uVar2 = DAT_14cb857c0;
  uVar3 = local_50;
  if (DAT_14cb857c0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb857b0,0,DAT_14cb857c0,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cb857b8;
        if (DAT_14cb857b8 == (undefined *)0x0) {
          puVar5 = &DAT_14cb857b0;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb857c0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb85788;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb857a0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb85778;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)
                (int)((uint)((ulonglong)*(undefined8 *)(lVar1 + lVar6) >> 0x20) ^
                     (uint)*(undefined8 *)(lVar1 + lVar6)) & (longlong)(int)DAT_14cb857c0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14cb857b8;
        if (DAT_14cb857b8 == (undefined *)0x0) {
          puVar5 = &DAT_14cb857b0;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb857c0 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb857b8;
        if (DAT_14cb857b8 == (undefined *)0x0) {
          puVar5 = &DAT_14cb857b0;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb857c0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145846cf4 FUN_145846cf4 body=38 status=ok
// SIG undefined FUN_145846cf4(void)

undefined8 FUN_145846cf4(undefined8 param_1,int param_2)

{
  FUN_145846d1a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145846d1a FUN_145846d1a body=78 status=ok
// SIG undefined FUN_145846d1a(void)

void FUN_145846d1a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ab66bd0;
  FUN_1411cdc38(param_1 + 1);
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x000145846d5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145846d72 FUN_145846d72 body=126 status=ok
// SIG undefined FUN_145846d72(void)

void FUN_145846d72(longlong param_1)

{
  FUN_145846df0(*(undefined8 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 400));
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x170) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145846df0 FUN_145846df0 body=41 status=ok
// SIG undefined FUN_145846df0(void)

void FUN_145846df0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145846e1a(param_1);
    param_1 = param_1 + 0x120;
  }
  return;
}



// FUNCTION 145846e1a FUN_145846e1a body=56 status=ok
// SIG undefined FUN_145846e1a(void)

void FUN_145846e1a(longlong param_1)

{
  FUN_140368b56(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145846e52 FUN_145846e52 body=38 status=ok
// SIG undefined FUN_145846e52(void)

undefined8 FUN_145846e52(undefined8 param_1,int param_2)

{
  FUN_145846e78();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145846e78 FUN_145846e78 body=495 status=ok
// SIG undefined FUN_145846e78(void)

void FUN_145846e78(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_149f68380;
  FUN_1447f69b6(param_1 + 10);
  if (param_1[0x17d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x179] != 0) {
    FUN_1400020a8();
  }
  FUN_145847068(param_1 + 0x16f);
  FUN_14584709e(param_1 + 0x165);
  FUN_145847068(param_1 + 0x15b);
  FUN_14584709e(param_1 + 0x151);
  lVar3 = param_1[0x150];
  if (lVar3 != 0) {
    FUN_14122435e(lVar3);
    FUN_1400020a8(lVar3);
  }
  if (param_1[0x14e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x148] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x146] != 0) {
    FUN_1400020a8();
  }
  FUN_1458471ae(param_1 + 0x13f);
  plVar4 = (longlong *)param_1[0x13e];
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
  lVar3 = param_1[0x13c];
  if (lVar3 != 0) {
    puVar5 = *(undefined8 **)(lVar3 + 0x18);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    FUN_1400020a8(lVar3);
  }
  lVar3 = param_1[0x13b];
  if (lVar3 != 0) {
    FUN_1458471e4(lVar3);
    FUN_1400020a8(lVar3);
  }
  FUN_14584717a(param_1[0x13a]);
  puVar5 = (undefined8 *)param_1[0x139];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  FUN_1458475b2(param_1 + 0x56);
  FUN_1412243be(param_1 + 0x50);
  FUN_1412244d2(param_1);
  return;
}



// FUNCTION 145847068 FUN_145847068 body=54 status=ok
// SIG undefined FUN_145847068(void)

void FUN_145847068(longlong param_1)

{
  FUN_1401b5f7a();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14584709e FUN_14584709e body=54 status=ok
// SIG undefined FUN_14584709e(void)

void FUN_14584709e(longlong param_1)

{
  FUN_1401b6098();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458470d4 FUN_1458470d4 body=43 status=ok
// SIG undefined FUN_1458470d4(void)

void FUN_1458470d4(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x10);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    FUN_1400020a8(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 145847100 FUN_145847100 body=51 status=ok
// SIG undefined FUN_145847100(void)

longlong FUN_145847100(longlong param_1,int param_2)

{
  FUN_145847134(param_1 + 0x68);
  FUN_145847134(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145847134 FUN_145847134 body=70 status=ok
// SIG undefined FUN_145847134(void)

void FUN_145847134(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14014a700(param_1 + 2);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14584717a FUN_14584717a body=52 status=ok
// SIG undefined FUN_14584717a(void)

void FUN_14584717a(longlong param_1)

{
  if (param_1 != 0) {
    FUN_141224456();
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 1458471ae FUN_1458471ae body=53 status=ok
// SIG undefined FUN_1458471ae(void)

void FUN_1458471ae(longlong *param_1)

{
  FUN_145847230();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458471e4 FUN_1458471e4 body=75 status=ok
// SIG undefined FUN_1458471e4(void)

void FUN_1458471e4(longlong *param_1)

{
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145847230 FUN_145847230 body=88 status=ok
// SIG undefined FUN_145847230(void)

void FUN_145847230(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140b584e0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145847288 FUN_145847288 body=38 status=ok
// SIG undefined FUN_145847288(void)

undefined8 FUN_145847288(undefined8 param_1,int param_2)

{
  FUN_145847b1c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458472ae FUN_1458472ae body=38 status=ok
// SIG undefined FUN_1458472ae(void)

undefined8 FUN_1458472ae(undefined8 param_1,int param_2)

{
  FUN_14584783e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458472d4 FUN_1458472d4 body=38 status=ok
// SIG undefined FUN_1458472d4(void)

undefined8 FUN_1458472d4(undefined8 param_1,int param_2)

{
  FUN_1458472fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458472fa FUN_1458472fa body=574 status=ok
// SIG undefined FUN_1458472fa(void)

void FUN_1458472fa(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_149f61820;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x29));
  plVar6 = param_1 + 0x1f;
  puVar3 = param_1 + 0x21;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = puVar3;
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x24);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar6;
  if ((iStack_54 != iVar5) || (uStack_60 != puVar3)) {
    do {
      lVar1 = *local_90;
      lVar4 = (longlong)iStack_74;
      puVar2 = *(undefined8 **)(lVar1 + 8 + lVar4 * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *(undefined8 *)(lVar1 + lVar4 * 0x18 + 8) = 0;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar5) || ((undefined8 *)CONCAT44(uStack_7c,uStack_80) != puVar3)) ||
            (local_90 != plVar6));
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x29));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1410fef86(plVar6);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1410fef86(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1410feffa(param_1 + 0xb);
  puVar3 = (undefined8 *)param_1[10];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (param_1[2] != 0) {
    plVar6 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584753a FUN_14584753a body=54 status=ok
// SIG undefined FUN_14584753a(void)

longlong FUN_14584753a(longlong param_1,int param_2)

{
  FUN_145847570(param_1 + 0x80);
  FUN_145847570(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145847570 FUN_145847570 body=65 status=ok
// SIG undefined FUN_145847570(void)

void FUN_145847570(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1410ff070(param_1 + 0x28);
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458475b2 FUN_1458475b2 body=613 status=ok
// SIG undefined FUN_1458475b2(void)

void FUN_1458475b2(longlong *param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1[7] + 0x38) = 0;
  *(undefined1 *)(param_1[8] + 0x38) = 0;
  FUN_141224894(param_1 + 0xda);
  if (param_1[0xd7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xce] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[200] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb9] != 0) {
    FUN_1400020a8();
  }
  FUN_141224728(param_1 + 0xac);
  FUN_141224728(param_1 + 0x9f);
  FUN_141224728(param_1 + 0x92);
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  FUN_141224678(param_1 + 0x7e);
  FUN_141224678(param_1 + 0x71);
  FUN_141224678(param_1 + 100);
  FUN_141224678(param_1 + 0x57);
  FUN_141224678(param_1 + 0x4a);
  FUN_141224678(param_1 + 0x3d);
  FUN_1412246b4(param_1 + 0x30);
  FUN_1412246b4(param_1 + 0x23);
  FUN_1412246b4(param_1 + 0x16);
  FUN_1412246b4(param_1 + 9);
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[5];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458477fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145847818 FUN_145847818 body=38 status=ok
// SIG undefined FUN_145847818(void)

undefined8 FUN_145847818(undefined8 param_1,int param_2)

{
  FUN_145910b8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584783e FUN_14584783e body=614 status=ok
// SIG undefined FUN_14584783e(void)

void FUN_14584783e(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_149f61990;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x29));
  plVar6 = param_1 + 0x1f;
  puVar1 = param_1 + 0x21;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar5 = 0;
  local_60 = puVar1;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x24);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar6;
  if ((iStack_54 != iVar5) || (local_60 != puVar1)) {
    do {
      lVar2 = *local_90;
      lVar4 = (longlong)iStack_74;
      puVar3 = *(undefined8 **)(lVar2 + 8 + lVar4 * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      *(undefined8 *)(lVar2 + lVar4 * 0x18 + 8) = 0;
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar5) || (local_80 != puVar1)) || (local_90 != plVar6));
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x29));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1410fef86(plVar6);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1410fef86(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1410feffa(param_1 + 0xb);
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[2] != 0) {
    plVar6 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145847aa6 FUN_145847aa6 body=51 status=ok
// SIG undefined FUN_145847aa6(void)

longlong FUN_145847aa6(longlong param_1,int param_2)

{
  FUN_145847ada(param_1 + 0x78);
  FUN_145847ada(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145847ada FUN_145847ada body=65 status=ok
// SIG undefined FUN_145847ada(void)

void FUN_145847ada(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1410ff070(param_1 + 0x20);
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145847b1c FUN_145847b1c body=614 status=ok
// SIG undefined FUN_145847b1c(void)

void FUN_145847b1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_149f61b00;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x29));
  plVar6 = param_1 + 0x1f;
  puVar1 = param_1 + 0x21;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar5 = 0;
  local_60 = puVar1;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x24);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar6;
  if ((iStack_54 != iVar5) || (local_60 != puVar1)) {
    do {
      lVar2 = *local_90;
      lVar4 = (longlong)iStack_74;
      puVar3 = *(undefined8 **)(lVar2 + 8 + lVar4 * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      *(undefined8 *)(lVar2 + lVar4 * 0x18 + 8) = 0;
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar5) || (local_80 != puVar1)) || (local_90 != plVar6));
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x29));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1410fef86(plVar6);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1410fef86(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1410feffa(param_1 + 0xb);
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[2] != 0) {
    plVar6 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145847d84 FUN_145847d84 body=65 status=ok
// SIG undefined FUN_145847d84(void)

longlong FUN_145847d84(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145847dc6 FUN_145847dc6 body=104 status=ok
// SIG undefined FUN_145847dc6(void)

undefined8 FUN_145847dc6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_145847e30(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145847e30 FUN_145847e30 body=47 status=ok
// SIG undefined FUN_145847e30(void)

undefined8 FUN_145847e30(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145847e60();
  if (lVar1 != 0) {
    uVar2 = FUN_144837462(lVar1,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 145847e60 FUN_145847e60 body=8 status=ok
// SIG undefined FUN_145847e60(void)

undefined8 FUN_145847e60(void)

{
  return DAT_14cb8b918;
}



// FUNCTION 145847e68 FUN_145847e68 body=104 status=ok
// SIG undefined FUN_145847e68(void)

undefined8 FUN_145847e68(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_145847ed2(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145847ed2 FUN_145847ed2 body=47 status=ok
// SIG undefined FUN_145847ed2(void)

undefined8 FUN_145847ed2(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145847f02();
  if (lVar1 != 0) {
    uVar2 = FUN_144837462(lVar1,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 145847f02 FUN_145847f02 body=8 status=ok
// SIG undefined FUN_145847f02(void)

undefined8 FUN_145847f02(void)

{
  return DAT_14cb8b938;
}



// FUNCTION 145847f12 FUN_145847f12 body=685 status=ok
// SIG undefined FUN_145847f12(void)

undefined8 * FUN_145847f12(undefined8 *param_1)

{
  FUN_145c73f34();
  *param_1 = &PTR_FUN_14bda8e60;
  param_1[5] = &PTR_FUN_14bda94e0;
  param_1[0x13] = &PTR_FUN_14bda9500;
  param_1[0x15] = &PTR_FUN_14bda9530;
  param_1[0x16] = &PTR_FUN_14bda9570;
  param_1[0x174] = &PTR_FUN_14bda95a0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  *(undefined4 *)(param_1 + 0x17b) = 2;
  *(undefined8 *)((longlong)param_1 + 0xbdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc04) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0c) = 0xffffffff00000000;
  param_1[0x187] = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4c) = 0;
  param_1[0x18b] = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined1 *)(param_1 + 0x18d) = 0;
  *(undefined1 *)(param_1 + 0x19c) = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[0x19d] = 0;
  param_1[0x19e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd14) = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd34) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd3c) = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd94) = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  *(undefined1 *)((longlong)param_1 + 0xdb1) = 3;
  *(undefined8 *)((longlong)param_1 + 0xdb4) = 0;
  FUN_1411b354a(param_1 + 0x1b8,0,0,0,0);
  FUN_1458481c0(param_1 + 0x1fc);
  param_1[0x237] = 0x7fefffffffffffff;
  param_1[0x238] = 0x7fefffffffffffff;
  param_1[0x239] = 0x7fefffffffffffff;
  param_1[0x23a] = 0xffefffffffffffff;
  param_1[0x23b] = 0xffefffffffffffff;
  param_1[0x23c] = 0xffefffffffffffff;
  param_1[0x240] = 0;
  param_1[0x242] = 0;
  param_1[0x23d] = 0;
  param_1[0x23e] = 0;
  *(undefined1 *)(param_1 + 0x23f) = 0;
  FUN_1458481c0(param_1 + 0x248);
  param_1[0x283] = 0x7fefffffffffffff;
  param_1[0x284] = 0x7fefffffffffffff;
  param_1[0x285] = 0x7fefffffffffffff;
  param_1[0x286] = 0xffefffffffffffff;
  param_1[0x287] = 0xffefffffffffffff;
  param_1[0x288] = 0xffefffffffffffff;
  param_1[0x289] = 0xbff0000000000000;
  *(undefined1 *)(param_1 + 0x28a) = 0;
  param_1[0x28b] = 0;
  param_1[0x28c] = 0;
  param_1[0x28d] = 0;
  param_1[0x28e] = 0;
  param_1[0x28f] = 0;
  param_1[0x290] = 0;
  param_1[0x291] = 0;
  param_1[0x292] = 0;
  param_1[0x293] = 0;
  param_1[0x294] = 0;
  param_1[0x295] = 0;
  param_1[0x296] = 0;
  *(undefined2 *)(param_1 + 0x297) = 0;
  param_1[0x298] = 0;
  param_1[0x299] = 0;
  param_1[0x29a] = 0;
  param_1[0x29b] = 0;
  param_1[0x29c] = 0;
  param_1[0x29d] = 0;
  param_1[0x29e] = 0;
  return param_1;
}



// FUNCTION 1458481c0 FUN_1458481c0 body=266 status=ok
// SIG undefined FUN_1458481c0(void)

undefined8 * FUN_1458481c0(undefined8 *param_1)

{
  *param_1 = 0x408f400000000000;
  param_1[1] = 0x3fd0000000000000;
  *(undefined4 *)(param_1 + 2) = 10;
  FUN_141224904(param_1 + 3);
  FUN_141040b84(param_1 + 6);
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_141224ac8(param_1 + 10);
  FUN_141224b64(param_1 + 0xd);
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_1458482ca(param_1 + 0x25);
  FUN_145848434(param_1 + 0x28);
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0x7fffffff7fffffff;
  param_1[0x38] = 0x800000017fffffff;
  param_1[0x39] = 0x8000000180000001;
  return param_1;
}



// FUNCTION 1458482ca FUN_1458482ca body=97 status=ok
// SIG undefined FUN_1458482ca(void)

undefined8 * FUN_1458482ca(undefined8 *param_1)

{
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x800);
  memset(_Dst,0,0x800);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_14584832c(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 14584832c FUN_14584832c body=132 status=ok
// SIG undefined FUN_14584832c(void)

void FUN_14584832c(longlong param_1,int param_2)

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



// FUNCTION 1458483b0 FUN_1458483b0 body=132 status=ok
// SIG undefined FUN_1458483b0(void)

void FUN_1458483b0(longlong param_1,int param_2)

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



// FUNCTION 145848434 FUN_145848434 body=159 status=ok
// SIG undefined FUN_145848434(void)

void * FUN_145848434(void *param_1)

{
  int iVar1;
  byte bVar2;
  void *pvVar3;
  int iVar4;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x8000000fff;
  FUN_14499171c(param_1,0,0x80,4);
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x1000;
  pvVar3 = *(void **)((longlong)param_1 + 0x10);
  if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
    pvVar3 = param_1;
  }
  memset(pvVar3,0,0x200);
  iVar4 = *(int *)((longlong)param_1 + 0x18);
  iVar1 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar1 = iVar4;
  }
  if (iVar4 % 0x20 != 0) {
    pvVar3 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar3 = param_1;
    }
    bVar2 = -(char)(iVar4 % 0x20);
    *(uint *)((longlong)pvVar3 + (longlong)(iVar1 >> 5) * 4) =
         (uint)(*(int *)((longlong)pvVar3 + (longlong)(iVar1 >> 5) * 4) << (bVar2 & 0x1f)) >>
         (bVar2 & 0x1f);
    iVar4 = *(int *)((longlong)param_1 + 0x18);
  }
  *(int *)((longlong)param_1 + 0x20) = iVar4;
  return param_1;
}



// FUNCTION 1458484dc FUN_1458484dc body=60 status=ok
// SIG undefined FUN_1458484dc(void)

undefined8 * FUN_1458484dc(undefined8 *param_1)

{
  FUN_145848518();
  *param_1 = &PTR_FUN_14b0c4660;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x800000000;
  return param_1;
}



// FUNCTION 145848518 FUN_145848518 body=89 status=ok
// SIG undefined FUN_145848518(void)

void FUN_145848518(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_14b0bc210;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x800000000;
  return;
}



// FUNCTION 145848580 FUN_145848580 body=9 status=ok
// SIG undefined FUN_145848580(void)

void FUN_145848580(longlong param_1)

{
  FUN_14584858a(param_1 + 0x10);
  return;
}



// FUNCTION 14584858a FUN_14584858a body=79 status=ok
// SIG undefined FUN_14584858a(void)

void FUN_14584858a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b420a58;
  FUN_1407e878c(param_1 + 7);
  *param_1 = &PTR_FUN_14b421658;
  FUN_1449db362(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001458485d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1458485da FUN_1458485da body=115 status=ok
// SIG undefined FUN_1458485da(void)

void FUN_1458485da(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_144a77418();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 != 0) goto LAB_145848605;
  }
  else {
    FUN_1456cec3c(lVar1);
LAB_145848605:
    lVar2 = FUN_144a77418();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      lVar3 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        lVar3 = lVar1;
      }
      goto LAB_14584862a;
    }
  }
  lVar3 = 0;
LAB_14584862a:
  FUN_1448a6f9c(param_1 + 0x100,lVar3);
  return;
}



// FUNCTION 14584864e FUN_14584864e body=145 status=ok
// SIG undefined FUN_14584864e(void)

void FUN_14584864e(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14122506a();
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    if (param_2 != 0) {
      lVar2 = FUN_1449f3324();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
        FUN_1458486e0(param_2,param_3);
        *(byte *)(*plVar1 + 0x194) = *(byte *)(*plVar1 + 0x194) & 0xfe | (byte)param_3;
        return;
      }
    }
    *(byte *)(*plVar1 + 0x194) = *(byte *)(*plVar1 + 0x194) & 0xfe | (byte)param_3;
  }
  return;
}



// FUNCTION 1458486e0 FUN_1458486e0 body=55 status=ok
// SIG undefined FUN_1458486e0(void)

void FUN_1458486e0(longlong *param_1,char param_2)

{
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0xcf8))();
                    /* WARNING: Could not recover jumptable at 0x00014584870d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xd78))(param_1,0,0);
    return;
  }
  return;
}



// FUNCTION 145848738 FUN_145848738 body=121 status=ok
// SIG undefined FUN_145848738(void)

void FUN_145848738(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1458487b2(param_1,iVar1);
    }
    FUN_145848836((longlong)iVar1 * 0x100 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147d58568(param_1,param_2,iVar1 - param_2);
    FUN_147d585c2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1458487b2 FUN_1458487b2 body=132 status=ok
// SIG undefined FUN_1458487b2(void)

void FUN_1458487b2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int extraout_var;
  longlong lVar3;
  int iVar4;
  
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
      lVar3 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    FUN_144a3809e(lVar3 << 8,8);
    iVar4 = 0x7fffffff;
    if ((int)uVar1 <= extraout_var) {
      iVar4 = extraout_var;
    }
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,param_2,iVar4,0x100,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145848836 FUN_145848836 body=137 status=ok
// SIG undefined FUN_145848836(void)

void FUN_145848836(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0xf8);
    do {
      *(undefined4 *)(puVar1 + -0x1d) = 0;
      puVar1[-0x18] = 0;
      puVar1[-0x17] = 0x8000000000;
      puVar1[-0x1c] = 0;
      puVar1[-0x1b] = 0;
      puVar1[-0x14] = 0;
      puVar1[-0x13] = 0x8000000000;
      puVar1[-0x10] = 0;
      puVar1[-0xf] = 0x8000000000;
      puVar1[-0xc] = 0;
      puVar1[-0xb] = 0x8000000000;
      puVar1[-6] = 0;
      *(undefined4 *)(puVar1 + -5) = 0;
      puVar1[-10] = 0;
      puVar1[-9] = 0;
      *(undefined8 *)((longlong)puVar1 + -0x24) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar1 + -0x1c) = 0;
      puVar1[-2] = 0;
      *(undefined4 *)(puVar1 + -1) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458488c8 FUN_1458488c8 body=109 status=ok
// SIG undefined FUN_1458488c8(void)

undefined8 * FUN_1458488c8(undefined8 *param_1)

{
  FUN_141225fb0();
  *param_1 = &PTR_FUN_14b41e160;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ff00000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0x3ff0000000000000;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = DAT_14cb86640;
  return param_1;
}



// FUNCTION 145848944 FUN_145848944 body=69 status=ok
// SIG undefined FUN_145848944(void)

undefined8 * FUN_145848944(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6fa860;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14584898a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584898a FUN_14584898a body=59 status=ok
// SIG undefined FUN_14584898a(void)

void FUN_14584898a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6fa6f0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458489c6 FUN_1458489c6 body=72 status=ok
// SIG undefined FUN_1458489c6(void)

void FUN_1458489c6(longlong param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf0) | param_3;
  lVar1 = FUN_145848a0e(param_1 + 0x150);
  FUN_145848a5a(lVar1,param_2);
  *(uint *)(lVar1 + 0x10) = param_3;
  *(undefined8 *)(lVar1 + 0x14) = *param_4;
  return;
}



// FUNCTION 145848a0e FUN_145848a0e body=59 status=ok
// SIG undefined FUN_145848a0e(void)

longlong FUN_145848a0e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145848ad8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_145848a49(lVar2);
  return lVar2;
}



// FUNCTION 145848a49 FUN_145848a49 body=16 status=ok
// SIG undefined FUN_145848a49(void)

void FUN_145848a49(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 145848a5a FUN_145848a5a body=124 status=ok
// SIG undefined FUN_145848a5a(void)

void FUN_145848a5a(longlong *param_1,longlong *param_2)

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



// FUNCTION 145848ad8 FUN_145848ad8 body=132 status=ok
// SIG undefined FUN_145848ad8(void)

void FUN_145848ad8(longlong param_1,int param_2)

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



// FUNCTION 145848b62 FUN_145848b62 body=154 status=ok
// SIG undefined FUN_145848b62(void)

void FUN_145848b62(longlong param_1)

{
  longlong lVar1;
  
  FUN_1400bc96c(param_1 + 0xbc8,&DAT_14cbcaf90);
  FUN_1412260cc(param_1);
  FUN_145848c8c(param_1);
  FUN_145848d76(param_1);
  FUN_1458493f2(param_1);
  FUN_1458490ca(param_1);
  if ((*(longlong *)(param_1 + 0xc20) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xc20) + 0x1d9) == '\x01')) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x58))(param_1 + 0x3c0,&DAT_14cb71330);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0xc68) = *(byte *)(lVar1 + 0xc68) | 0x20;
    }
  }
  FUN_1400bc8c2(param_1 + 0xbc8,&DAT_14cbcaf90);
  return;
}



// FUNCTION 145848bfc FUN_145848bfc body=7 status=ok
// SIG undefined FUN_145848bfc(void)

void FUN_145848bfc(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 145848c04 FUN_145848c04 body=135 status=ok
// SIG undefined FUN_145848c04(void)

void FUN_145848c04(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1 + 0xad0;
  FUN_140457ffc(lVar1,param_1);
  FUN_14035c1e0(lVar1,param_1,*(undefined8 *)(param_1 + 0x3f0),param_1 + 0x530);
  local_30 = &LAB_1488ae2d6;
  local_28 = 0;
  FUN_145848edc(lVar1,local_20,param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145848c8c FUN_145848c8c body=233 status=ok
// SIG undefined FUN_145848c8c(void)

void FUN_145848c8c(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0xc20) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0xc10);
    if ((cVar2 != '\0') && (*(char *)(*(longlong *)(param_1 + 0xc20) + 0x1b0) == '\x01')) {
      lVar3 = FUN_14479d2ce(param_1 + 0xc10);
      plVar1 = *(longlong **)(&DAT_00006850 + lVar3);
      lVar3 = (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x58))(param_1 + 0x3c0,&DAT_14cb71330);
      if ((plVar1 != (longlong *)0x0) && (lVar3 != 0)) {
        cVar2 = (**(code **)(*plVar1 + 0xe78))(plVar1,0x40000);
        if (cVar2 != '\0') {
          (**(code **)(*(longlong *)(lVar3 + 0x1248) + 0x20))
                    (lVar3 + 0x1248,*(longlong *)(param_1 + 0xc20) + 0x1b4);
        }
        cVar2 = (**(code **)(*plVar1 + 0xe78))(plVar1,0x20000);
        if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000145848d72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(longlong *)(lVar3 + 0x1248) + 0x20))
                    (lVar3 + 0x1248,*(longlong *)(param_1 + 0xc20) + 0x1bc);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145848d76 FUN_145848d76 body=357 status=ok
// SIG undefined FUN_145848d76(void)

void FUN_145848d76(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0xc20) != 0) {
    lVar2 = (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x58))(param_1 + 0x3c0,&DAT_14cb71330);
    if ((lVar2 != 0) && (*(char *)(*(longlong *)(param_1 + 0xc20) + 0x1c4) == '\x01')) {
      lVar4 = param_1 + 0xc10;
      cVar1 = FUN_144729dda(lVar4);
      if ((cVar1 != '\0') && (lVar2 = *(longlong *)(lVar2 + 0xae8), lVar2 != 0)) {
        lVar3 = FUN_14016d2a8();
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          lVar3 = FUN_14479d2ce(lVar4);
          local_40 = FUN_145849f46;
          lVar2 = 0;
          local_38 = 0;
          FUN_145849d46(lVar3 + 0x5fd0,local_30,param_1,&local_40);
          lVar3 = FUN_14479d2ce(lVar4);
          local_40 = FUN_148d3f4ec;
          local_38 = 0;
          FUN_145849e46(lVar3 + 0x7790,local_30,param_1,&local_40);
          lVar4 = FUN_14479d2ce(lVar4);
          if ((0 < *(int *)(lVar4 + 0x6190)) &&
             ((lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x6188) + 0x20), DAT_14c950c29 == '\x01'
              && (lVar2 != 0)))) {
            FUN_1456cec3c(lVar2);
          }
          FUN_145849f46(param_1,lVar2,0);
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



// FUNCTION 145848edc FUN_145848edc body=254 status=ok
// SIG undefined FUN_145848edc(void)

undefined8
FUN_145848edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3e7b60;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b40e650;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140f4dcf0(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145848fdc FUN_145848fdc body=237 status=ok
// SIG undefined FUN_145848fdc(void)

void FUN_145848fdc(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  undefined1 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_38 = (undefined1 *)0x0;
  local_30 = 0x1800000000;
  FUN_141226200(param_1,local_f8,0);
  puVar3 = local_38;
  if (local_38 == (undefined1 *)0x0) {
    puVar3 = local_f8;
  }
  lVar2 = (longlong)(int)local_30;
  if (lVar2 != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(puVar3 + lVar4);
      if (plVar1 != (longlong *)0x0) {
        *(byte *)((longlong)plVar1 + 0x66c) = *(byte *)((longlong)plVar1 + 0x66c) | 4;
        (**(code **)(*plVar1 + 0xa18))(plVar1,1);
        if (((*(byte *)((longlong)plVar1 + 0x9d) & 0x20) != 0) &&
           ((*(byte *)((longlong)plVar1 + 0x9c) & 1) == 0)) {
          FUN_140b506a4(plVar1);
        }
      }
      lVar4 = lVar4 + 8;
    } while (lVar2 * 8 != lVar4);
  }
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458490ca FUN_1458490ca body=501 status=ok
// SIG undefined FUN_1458490ca(void)

void FUN_1458490ca(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(longlong *)(param_1 + 0xc20) != 0) && (*(longlong *)(param_1 + 0xc18) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0xc20) + 0x1d8) == '\x01')) {
    lVar5 = (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x58))(param_1 + 0x3c0,&DAT_14cb71330);
    if (lVar5 != 0) {
      lVar6 = FUN_14479d2ce(lVar5 + 0x668);
      if (lVar6 == 0) {
        lVar6 = lVar5;
      }
      uVar2 = *(undefined4 *)(lVar6 + 0x720);
      *(undefined4 *)(param_1 + 0xc48) = 0;
      uVar7 = FUN_1401cb356();
      uStack_68 = 0;
      local_70 = param_1;
      FUN_14485c47a(&uStack_68,lVar5);
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      local_60 = uVar2;
      FUN_1446efa72(&local_58,0,4,0x10);
      puVar4 = local_58;
      local_50 = 4;
      *local_58 = &PTR_LAB_149e02020;
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
      local_58[2] = lVar6;
      *local_58 = &PTR_FUN_14b974720;
      local_58[3] = 0;
      FUN_14485c47a(local_58 + 3,param_1);
      puVar4[6] = CONCAT44(uStack_5c,local_60);
      *(undefined4 *)(puVar4 + 4) = (undefined4)local_70;
      *(undefined4 *)((longlong)puVar4 + 0x24) = local_70._4_4_;
      *(undefined4 *)(puVar4 + 5) = (undefined4)uStack_68;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = uStack_68._4_4_;
      local_78 = 0;
      FUN_1405f67fc(uVar7,&local_48,&local_58,L"AOakCharacterStandIn_ResetCloth");
      if ((undefined8 *)(param_1 + 0xc38) != &local_48) {
        *(undefined8 *)(param_1 + 0xc38) = local_48;
        local_48 = 0;
        plVar3 = *(longlong **)(param_1 + 0xc40);
        *(longlong **)(param_1 + 0xc40) = local_40;
        local_40 = (longlong *)0x0;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
      FUN_1449db362(&local_58);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458492c0 FUN_1458492c0 body=304 status=ok
// SIG undefined FUN_1458492c0(void)

void FUN_1458492c0(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_128 [40];
  undefined1 local_100 [192];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(longlong *)(param_1 + 0x3f8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x3f8) + 0xf8) == '\x01')) {
    local_40 = (undefined1 *)0x0;
    local_38 = 0x1800000000;
    FUN_1488adaec(param_1,local_100);
    puVar2 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar2 = local_100;
    }
    lVar3 = (longlong)(int)local_38;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(puVar2 + lVar4);
        FUN_140c71916(plVar1,1);
        (**(code **)(*plVar1 + 0x2a8))(plVar1,1);
        FUN_1439f4d0c(plVar1,1);
        FUN_14810cb52(plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x3f8) + 0xfc));
        (**(code **)(*plVar1 + 0x3a0))(plVar1,0,2,0);
        FUN_14810e5a6(plVar1,1);
        lVar4 = lVar4 + 8;
      } while (lVar3 * 8 != lVar4);
    }
    if (local_40 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458493f2 FUN_1458493f2 body=530 status=ok
// SIG undefined FUN_1458493f2(void)

void FUN_1458493f2(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0xc20) != 0) && (*(longlong *)(param_1 + 0xc18) != 0)) {
    puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 0xc18) + 8);
    puVar7 = &DAT_14c9485f0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar7 = puVar2;
    }
    FUN_1447325ac(puVar7,&local_38,1);
    lVar5 = *(longlong *)(param_1 + 0xc20);
    if (*(int *)(lVar5 + 0x168) != *(int *)(lVar5 + 0x194)) {
      uVar4 = (uint)((ulonglong)local_38 >> 0x10);
      uVar8 = (uint)local_38 & 0xffff;
      lVar6 = lVar5 + 0x198;
      if (*(longlong *)(lVar5 + 0x1a0) != 0) {
        lVar6 = *(longlong *)(lVar5 + 0x1a0);
      }
      iVar9 = *(int *)(lVar6 + (ulonglong)
                               (*(int *)(lVar5 + 0x1a8) - 1U &
                               (int)((ulonglong)local_38 >> 0x20) + ((uint)local_38 << 0x10 | uVar8)
                               + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
      if (iVar9 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(lVar5 + 0x160) + (longlong)iVar9 * 0x14);
          if (*plVar1 == local_38) {
            if ((plVar1 != (longlong *)0x0) && ((float *)(plVar1 + 1) != (float *)0x0)) {
              dVar3 = (double)*(float *)(plVar1 + 1);
              FUN_144a7b71c(param_1,&local_68);
              local_40 = local_58 * dVar3;
              local_48 = local_60 * dVar3;
              local_50 = dVar3 * local_68;
              FUN_1412269c6(param_1);
              lVar5 = *(longlong *)(param_1 + 0xc20);
            }
            break;
          }
          iVar9 = *(int *)((longlong)plVar1 + 0xc);
        } while (iVar9 != -1);
      }
    }
    if ((*(char *)(lVar5 + 0x1d8) == '\x01') && (lVar5 = *(longlong *)(param_1 + 0x1c8), lVar5 != 0)
       ) {
      lVar6 = FUN_1400b5618();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        local_78 = (double)((float)*(double *)(lVar5 + 0x290) * *(float *)(lVar5 + 0x640));
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        FUN_145849bf0(param_1,&local_88,0,0);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145849606 FUN_145849606 body=512 status=ok
// SIG undefined FUN_145849606(void)

void FUN_145849606(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_138 [40];
  undefined1 local_110 [192];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x1800000000;
  FUN_140312d42(param_1,local_110,0);
  puVar5 = local_50;
  if (local_50 == (undefined1 *)0x0) {
    puVar5 = local_110;
  }
  lVar3 = (longlong)(int)local_48;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(puVar5 + lVar4);
      *(undefined1 *)((longlong)plVar1 + 0x17ff) = 0;
      uVar2 = (**(code **)(*param_1 + 0x688))(param_1);
      FUN_145849808(plVar1,uVar2,1);
      (**(code **)(*plVar1 + 0x690))(plVar1,0);
      if (((*(byte *)((longlong)plVar1 + 0x9d) & 0x20) != 0) &&
         ((*(byte *)((longlong)plVar1 + 0x9c) & 1) == 0)) {
        FUN_140b506a4(plVar1);
      }
      if ((param_1[0x7f] != 0) && (*(char *)(param_1[0x7f] + 0xa1) == '\x01')) {
        *(undefined1 *)((longlong)plVar1 + 0x89c) = 1;
        FUN_140d52e40(plVar1,&DAT_14cb80e18,1,1);
        (**(code **)(plVar1[0xca] + 0x28))(plVar1 + 0xca,0);
        (**(code **)(plVar1[0xca] + 0x30))(plVar1 + 0xca,0);
      }
      *(byte *)((longlong)plVar1 + 0x89f) = *(byte *)((longlong)plVar1 + 0x89f) | 2;
      (**(code **)(*plVar1 + 0xa18))(plVar1,1);
      *(byte *)((longlong)plVar1 + 0x2d4) = *(byte *)((longlong)plVar1 + 0x2d4) & 0xbf;
      FUN_140357fa8(plVar1,3,2);
      FUN_140c056bc(plVar1,0);
      FUN_140c0563c(plVar1,0);
      FUN_140c0573e(plVar1,0);
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  (**(code **)(*param_1 + 0x680))(param_1);
  FUN_1458498a6(param_1);
  if ((param_1[0x7f] != 0) && (*(char *)(param_1[0x7f] + 0xa2) == '\x01')) {
    *(undefined1 *)(param_1 + 0x83) = 1;
  }
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145849808 FUN_145849808 body=157 status=ok
// SIG undefined FUN_145849808(void)

void FUN_145849808(longlong param_1,longlong param_2,char param_3)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x1640) != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x1640) = param_2;
    *(undefined1 *)(param_1 + 0x17fc) = 1;
    if ((param_3 != '\0') && ((*(byte *)(param_1 + 0x9c) & 1) != 0)) {
      FUN_140c89340(local_28,param_1);
      FUN_140f2be08(param_1,1);
      FUN_140c8931a(local_28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458498a6 FUN_1458498a6 body=496 status=ok
// SIG undefined FUN_1458498a6(void)

void FUN_1458498a6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar7 = *(longlong *)(param_1 + 0x3f8);
  if ((lVar7 != 0) && ((longlong)*(int *)(lVar7 + 200) != 0)) {
    puVar5 = *(undefined8 **)(lVar7 + 0xc0);
    puVar6 = puVar5 + (longlong)*(int *)(lVar7 + 200) * 5;
    do {
      local_e0 = *puVar5;
      local_d8 = *(undefined4 *)(puVar5 + 1);
      uStack_d4 = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_d0 = *(undefined4 *)(puVar5 + 2);
      uStack_cc = *(undefined4 *)((longlong)puVar5 + 0x14);
      local_c8 = (void *)0x0;
      local_c0 = *(int *)(puVar5 + 4);
      lVar7 = (longlong)local_c0;
      _Src = (void *)puVar5[3];
      if (lVar7 == 0) {
        local_bc = 0;
      }
      else {
        FUN_1446dd670(&local_c8,local_c0,0);
        memcpy(local_c8,_Src,lVar7 * 2);
      }
      local_98 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      uStack_90 = 0x8000000000;
      local_88 = 0xffffffff;
      uVar4 = FUN_140963a30(&local_e0);
      local_f8 = &local_b8;
      FUN_14122243a(param_1 + 0x9e0,local_f0,uVar4,1);
      plVar3 = local_e8;
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_e8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      uStack_70 = uStack_70 & 0xffffffff00000000;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_b8);
      if (local_c8 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar5 = puVar5 + 5;
    } while (puVar5 != puVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145849a98 FUN_145849a98 body=342 status=ok
// SIG undefined FUN_145849a98(void)

void FUN_145849a98(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0xba8) != 0) || (*(longlong *)(param_1 + 0x3f8) == 0))
  goto LAB_145849b57;
  uVar4 = FUN_1447210f0(param_1);
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x3f8) + 0xa8);
  local_40 = *(undefined4 *)(*(longlong *)(param_1 + 0x3f8) + 0xb0);
  local_38 = 0;
  local_58 = 1;
  FUN_14035b3c6(&local_30,&local_48,param_1 + 0x3d8,uVar4);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xba8) = local_30;
    plVar5 = *(longlong **)(param_1 + 0xbb0);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xbb0) = 0;
LAB_145849b94:
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000145849bbf:
        if (iVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xba8) = local_30;
    plVar5 = *(longlong **)(param_1 + 0xbb0);
    if (local_28 == plVar5) {
      LOCK();
      plVar5 = local_28 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar5 = plVar1;
        goto joined_r0x000145849bbf;
      }
    }
    else {
      *(longlong **)(param_1 + 0xbb0) = local_28;
      if (plVar5 != (longlong *)0x0) goto LAB_145849b94;
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
LAB_145849b57:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145849bf0 FUN_145849bf0 body=220 status=ok
// SIG undefined FUN_145849bf0(void)

void FUN_145849bf0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0x3f80000000000000;
      memset(param_4 + 1,0,0x9c);
      *(undefined4 *)((longlong)param_4 + 0xa4) = 0xffffffff;
      param_4[0x15] = 0;
      param_4[0x16] = 0;
      param_4[0x17] = 0;
      param_4[0x18] = 0;
      param_4[0x19] = 0;
      *(undefined4 *)(param_4 + 0x1a) = 0xffffffff;
      *(undefined8 *)((longlong)param_4 + 0xd4) = 0;
      *(undefined8 *)((longlong)param_4 + 0xdc) = 0;
      *(undefined8 *)((longlong)param_4 + 0xe4) = 0;
      *(undefined8 *)((longlong)param_4 + 0xec) = 0;
      param_4[0x1e] = 0;
      param_4[0x1f] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
    }
  }
  else {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    local_38 = param_5;
    FUN_145849cd0(*(longlong *)(param_1 + 0x1c8),&local_28,param_3,param_4);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145849cd0 FUN_145849cd0 body=116 status=ok
// SIG undefined FUN_145849cd0(void)

void FUN_145849cd0(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = param_2[2] + *(double *)(param_1 + 0x270);
  local_18 = *(double *)(param_1 + 0x268) + param_2[1];
  local_20 = *(double *)(param_1 + 0x260) + *param_2;
  local_28 = param_5;
  FUN_140d93b16();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145849d46 FUN_145849d46 body=254 status=ok
// SIG undefined FUN_145849d46(void)

undefined8
FUN_145849d46(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b4aa9f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b974790;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14100c9d8(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145849e46 FUN_145849e46 body=254 status=ok
// SIG undefined FUN_145849e46(void)

undefined8
FUN_145849e46(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b96ec30;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b974800;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140f50c4e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145849f46 FUN_145849f46 body=1174 status=ok
// SIG undefined FUN_145849f46(void)

void FUN_145849f46(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_118 [47];
  char local_e9;
  longlong local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined8 *puStack_d0;
  undefined1 local_bc [4];
  undefined8 *local_b8;
  longlong *plStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar6 = FUN_144729dda(param_1 + 0xc10);
  if (cVar6 == '\0') goto LAB_14584a1f3;
  lVar3 = param_1 + 0x558;
  cVar6 = FUN_1413ea91c(lVar3);
  if (cVar6 == '\0') {
    cVar6 = FUN_144729dda(param_1 + 0xc00);
    if (cVar6 != '\0') goto LAB_14584a229;
  }
  else {
LAB_14584a229:
    FUN_140457ffc(lVar3,param_1);
    FUN_140efa5a0(lVar3);
    *(undefined8 *)(param_1 + 0xc00) = 0;
  }
  if ((((param_3 != 0) && (lVar8 = *(longlong *)(param_1 + 0xc20), lVar8 != 0)) &&
      (*(longlong *)(lVar8 + 0x240) != 0)) && (*(char *)(param_1 + 0xbc8) == '\0')) {
    uVar7 = FUN_1461a60e8(param_1,lVar8 + 0x240);
    *(char *)(param_1 + 0xc30) = (char)uVar7;
    if ((char)uVar7 != '\0') {
      FUN_140dc01da(param_1 + 0x9e0,&local_b8,uVar7);
      if (local_b8 != (undefined8 *)0x0) {
        local_d8 = FUN_148d3f6e2;
        puStack_d0 = (undefined8 *)((ulonglong)puStack_d0 & 0xffffffff00000000);
        FUN_148d3f5e2(local_b8 + 3,&local_e0,param_1);
      }
      plVar5 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_b0)(plStack_b0);
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
  }
  if (param_2 != 0) {
    FUN_14485c47a(param_1 + 0xc00,param_2);
    FUN_140457ffc(lVar3,param_1);
    local_b8 = (undefined8 *)0x0;
    plStack_b0._0_4_ = 0;
    FUN_1446efa72(&local_b8,0,3,0x10);
    puVar4 = local_b8;
    plStack_b0 = (longlong *)CONCAT44(plStack_b0._4_4_,3);
    *local_b8 = &PTR_LAB_149e020b0;
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
    local_b8[2] = lVar10;
    *local_b8 = &PTR_FUN_14b9748e0;
    local_b8[3] = 0;
    FUN_14485c47a(local_b8 + 3,param_1);
    puVar4[4] = param_1;
    FUN_1448b6402(lVar3,&local_d8,&local_b8);
    FUN_1449db362(&local_b8);
    lVar8 = *(longlong *)(param_1 + 0xc20);
    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x270) != 0)) {
      FUN_1461a60e8(param_1,lVar8 + 0x270);
    }
  }
  local_e9 = param_3 == 0;
  lVar8 = (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x58))(param_1 + 0x3c0,&DAT_14cb71330);
  local_98 = 0;
  local_90 = 0;
  local_b8 = (undefined8 *)0x0;
  plStack_b0 = (longlong *)0x0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_e0 = 0;
  local_e8 = param_3;
  FUN_14485c47a(&local_e0,param_1);
  local_d8 = (code *)&DAT_14c9a63f0;
  puStack_d0 = &local_e0;
  FUN_1406c57ae(&local_b8,local_bc,&local_d8,0);
  local_e0 = 0;
  FUN_14485c47a(&local_e0,param_2);
  local_d8 = (code *)&DAT_14c9a63e8;
  puStack_d0 = &local_e0;
  FUN_1406c57ae(&local_b8,local_bc,&local_d8,0);
  local_d8 = (code *)0x0;
  puStack_d0 = (undefined8 *)0x0;
  FUN_141226b46(&local_d8,lVar8 + 0x1288,&local_b8);
  FUN_1405eb5c0(lVar3,&local_d8,0);
  lVar3 = local_e8;
  if (((param_2 == 0 && local_e9 == '\0') && (lVar8 != 0)) && (*(char *)(param_1 + 0xc30) == '\0'))
  {
    cVar6 = FUN_144729dda(param_1 + 0xc28);
    if (cVar6 != '\0') {
      uVar9 = FUN_14479d2ce(param_1 + 0xc28);
      FUN_140aeefbc(uVar9,0,1);
    }
    lVar8 = *(longlong *)(lVar8 + 0xae8);
    if (lVar8 != 0) {
      lVar10 = FUN_14016d2a8();
      if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
        FUN_140ef75a0(lVar8,0,lVar3);
      }
    }
  }
  FUN_140861e20(local_d8,(ulonglong)puStack_d0 & 0xffffffff);
  if (local_d8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140535736(&local_b8);
LAB_14584a1f3:
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584a3de FUN_14584a3de body=141 status=ok
// SIG undefined FUN_14584a3de(void)

void FUN_14584a3de(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_1488dc4ec(param_2);
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = FUN_143dbc5c2;
  local_20 = &local_30;
  local_28 = FUN_141227eda;
  local_48 = param_2;
  FUN_141227b2e(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584a472 FUN_14584a472 body=164 status=ok
// SIG undefined FUN_14584a472(void)

void FUN_14584a472(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x3c20) + 0x18))(param_1 + 0x3c20);
  if (lVar2 != 0) {
    FUN_14584a516(lVar2,param_2);
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    lVar3 = FUN_144a5dd5e();
    lVar2 = *(longlong *)(param_1 + 0x3c0);
    if ((((lVar2 != 0) && (lVar3 != 0)) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      plVar4 = (longlong *)FUN_1404281d6(param_1);
      if (plVar4 == (longlong *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar4 + 0x860))(plVar4);
      }
      FUN_140ee9c88(lVar2,uVar5);
      return;
    }
  }
  return;
}



// FUNCTION 14584a516 FUN_14584a516 body=7 status=ok
// SIG undefined FUN_14584a516(void)

void FUN_14584a516(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x149) = param_2;
  return;
}



// FUNCTION 14584a528 FUN_14584a528 body=336 status=ok
// SIG undefined FUN_14584a528(void)

undefined8 * FUN_14584a528(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1412292fa();
  *param_1 = &PTR_FUN_14a4d3360;
  param_1[8] = &PTR_FUN_14a4d3640;
  lVar2 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar2 + 0x24);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar2 + 0x2c);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_20 = param_1[2];
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_28 = FUN_1413319c2();
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_28);
    }
    FUN_140909372(&local_28,&local_20);
    local_30 = param_1[2];
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_38 = FUN_145990b9a();
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_38);
    }
    FUN_140909372(&local_38,&local_30);
    lVar2 = FUN_14038fb82();
    uVar1 = *(undefined2 *)(lVar2 + 0x24);
    local_40 = param_1[2];
    if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_40,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584a688 FUN_14584a688 body=59 status=ok
// SIG undefined FUN_14584a688(void)

undefined8 * FUN_14584a688(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5d1040;
  FUN_14051f4c4(param_1 + 5);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 14584a6cc FUN_14584a6cc body=95 status=ok
// SIG undefined FUN_14584a6cc(void)

undefined8 * FUN_14584a6cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14a16f5d0;
  FUN_141293e54(param_1 + 3);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 6) = 1;
  FUN_14584a77a(param_1 + 5);
  FUN_14584a72c(param_1[5],param_1 + 3);
  return param_1;
}



// FUNCTION 14584a72c FUN_14584a72c body=77 status=ok
// SIG undefined FUN_14584a72c(void)

undefined8 * FUN_14584a72c(undefined8 *param_1,undefined8 *param_2)

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
    FUN_140b856de(param_1,iVar1,0);
    FUN_140b8566a(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14584a77a FUN_14584a77a body=125 status=ok
// SIG undefined FUN_14584a77a(void)

void FUN_14584a77a(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = (ulonglong)uVar1;
      }
    }
    else {
      uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
    }
    uVar2 = FUN_144a3809e(uVar2 << 4,8);
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 4)) {
      uVar3 = uVar2 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 14584a7f7 FUN_14584a7f7 body=157 status=ok
// SIG undefined FUN_14584a7f7(void)

undefined8 FUN_14584a7f7(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *param_1;
  iVar1 = *(int *)(lVar5 + 0x4f0);
  if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar5 + 0x880))) {
    lVar2 = *(longlong *)(lVar5 + 0x878);
    lVar5 = lVar5 + 0x4f8;
    if (lVar2 != 0) {
      lVar5 = lVar2;
    }
    lVar5 = (longlong)iVar1 * 0x38 + lVar5;
    if (lVar5 != 0) {
      cVar3 = FUN_144a7b75a(CONCAT71((int7)(int3)((uint)iVar1 >> 8),*(undefined1 *)(lVar5 + 0x20)),
                            CONCAT71((int7)((ulonglong)lVar2 >> 8),4));
      if (cVar3 != '\0') {
        FUN_144a7b7fe(lVar5,&local_38);
        *(undefined8 *)(param_2 + 4) = local_28;
        *param_2 = local_38;
        param_2[1] = uStack_34;
        param_2[2] = uStack_30;
        param_2[3] = uStack_2c;
        uVar4 = 1;
        goto LAB_14584a872;
      }
    }
  }
  uVar4 = 0;
LAB_14584a872:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584a896 FUN_14584a896 body=101 status=ok
// SIG undefined FUN_14584a896(void)

void FUN_14584a896(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  **(undefined1 **)(param_1 + 0x40) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x14);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0xc);
  *(undefined1 *)(param_2 + 0x60) = 1;
  iVar2 = *(int *)(param_2 + 0x58);
  lVar6 = (longlong)iVar2;
  *(uint *)(param_2 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
    FUN_14579eadc(param_2,iVar2);
  }
  lVar5 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar5 = param_2;
  }
  *(undefined8 *)(lVar5 + lVar6 * 0x14) = uVar4;
  *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = uVar1;
  *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar3;
  return;
}



// FUNCTION 14584a8fc FUN_14584a8fc body=101 status=ok
// SIG undefined FUN_14584a8fc(void)

void FUN_14584a8fc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  **(undefined1 **)(param_1 + 0x40) = 1;
  uVar3 = *(undefined8 *)(param_1 + 0x14);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0xc);
  *(undefined1 *)(param_2 + 0x60) = 1;
  iVar2 = *(int *)(param_2 + 0x58);
  lVar6 = (longlong)iVar2;
  *(uint *)(param_2 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
    FUN_14579eadc(param_2,iVar2);
  }
  lVar5 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar5 = param_2;
  }
  *(undefined8 *)(lVar5 + lVar6 * 0x14) = uVar4;
  *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = uVar1;
  *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar3;
  return;
}



// FUNCTION 14584a962 FUN_14584a962 body=97 status=ok
// SIG undefined FUN_14584a962(void)

void FUN_14584a962(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14066e964();
  local_30 = FUN_140343d7a(param_1);
  FUN_14584a9c4(&local_28);
  *(undefined4 *)(param_1 + 0xd8) = local_28;
  *(undefined4 *)(param_1 + 0xdc) = uStack_24;
  *(undefined4 *)(param_1 + 0xe0) = uStack_20;
  *(undefined4 *)(param_1 + 0xe4) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584a9c4 FUN_14584a9c4 body=74 status=ok
// SIG undefined FUN_14584a9c4(void)

undefined8 * FUN_14584a9c4(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_1412c0c36();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_14485c47a(param_1,*param_2);
    }
  }
  return param_1;
}



// FUNCTION 14584aa0e FUN_14584aa0e body=40 status=ok
// SIG undefined FUN_14584aa0e(void)

undefined8 FUN_14584aa0e(undefined8 param_1,int param_2)

{
  FUN_14584aa36();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584aa36 FUN_14584aa36 body=113 status=ok
// SIG undefined FUN_14584aa36(void)

void FUN_14584aa36(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2a9ca0;
  param_1[0x72] = &PTR_FUN_14b2aa2e0;
  param_1[0x73] = &PTR_FUN_14b2aa300;
  FUN_14063a842(param_1 + 0x85);
  FUN_144760e21(param_1[0x79],*(undefined4 *)(param_1 + 0x7a));
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 14584aaa8 FUN_14584aaa8 body=95 status=ok
// SIG undefined FUN_14584aaa8(void)

ulonglong FUN_14584aaa8(longlong param_1)

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
LAB_14584aaea:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14584aaea;
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



// FUNCTION 14584ab16 FUN_14584ab16 body=87 status=ok
// SIG undefined FUN_14584ab16(void)

void FUN_14584ab16(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_14122bd5e(*(undefined8 *)(param_1 + 0x48),DAT_14cb809d0);
  FUN_14122bd00(param_1,uVar1);
  if ((longlong)*(int *)(param_1 + 0x158) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x150);
    lVar3 = (longlong)*(int *)(param_1 + 0x158) << 6;
    do {
      FUN_14889bd12(lVar2,1);
      lVar2 = lVar2 + 0x40;
      lVar3 = lVar3 + -0x40;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14584ab7a FUN_14584ab7a body=125 status=ok
// SIG undefined FUN_14584ab7a(void)

void FUN_14584ab7a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99c6a0;
  param_1[4] = &PTR_FUN_14b99c6e0;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *param_1 = &PTR_FUN_14b99c6f0;
  param_1[4] = &PTR_LAB_14b99c730;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 14584ac00 FUN_14584ac00 body=83 status=ok
// SIG undefined FUN_14584ac00(void)

void FUN_14584ac00(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  FUN_14584ac54(param_1 + 0x150);
  FUN_14122c31a(param_1 + 0xe0);
  FUN_14122c31a(param_1 + 0x70);
  FUN_14122c31a(param_1);
  return;
}



// FUNCTION 14584ac54 FUN_14584ac54 body=55 status=ok
// SIG undefined FUN_14584ac54(void)

void FUN_14584ac54(longlong *param_1)

{
  FUN_14584ac8c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14584ac8c FUN_14584ac8c body=386 status=ok
// SIG undefined FUN_14584ac8c(void)

void FUN_14584ac8c(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x28 + (longlong)iStack_54 * 0x48) != 0) {
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
    FUN_1403af08a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
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



// FUNCTION 14584ae10 FUN_14584ae10 body=578 status=ok
// SIG undefined FUN_14584ae10(void)

undefined8 FUN_14584ae10(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FUN_14584b054();
  }
  lVar3 = FUN_14001cc68(0x30,0x10);
  local_48 = *(undefined8 *)(param_1 + 0x2c0);
  local_40 = *(longlong *)(param_1 + 0x2c8);
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_58 = *(undefined8 *)(param_1 + 8);
  local_50 = *(longlong *)(param_1 + 0x10);
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_1412536a6(lVar3,&local_58,&local_48);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a452170;
  plVar4[2] = lVar3;
  *(longlong *)(param_1 + 0x2d0) = lVar3;
  plVar6 = *(longlong **)(param_1 + 0x2d8);
  if (plVar4 == plVar6) {
    if (plVar4 == (longlong *)0x0) goto LAB_14584aeff;
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      plVar6 = plVar4;
      goto joined_r0x00014584afd2;
    }
  }
  else {
    *(longlong **)(param_1 + 0x2d8) = plVar4;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar6 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014584afd2:
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x2d0);
  plVar6 = *(longlong **)(param_1 + 0x2d8);
LAB_14584aeff:
  if (plVar6 == (longlong *)0x0) {
    uVar5 = FUN_14001cc68(0x38,0x10);
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    uVar5 = FUN_14001cc68(0x38,0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_30 = plVar6;
  }
  local_38 = lVar3;
  FUN_14125362e(uVar5,&local_38);
  lVar3 = *(longlong *)(param_1 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2b8) = uVar5;
  if (lVar3 != 0) {
    FUN_1400020a8();
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  *(undefined4 *)(param_1 + 0x418) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x410) = 0;
  if (*(int *)(param_1 + 0x414) != 0) {
    FUN_14122c398(param_1 + 1000);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584b054 FUN_14584b054 body=96 status=ok
// SIG undefined FUN_14584b054(void)

void FUN_14584b054(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_14584b0b6(local_28);
  FUN_1416a5e5a(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584b0b6 FUN_14584b0b6 body=254 status=ok
// SIG undefined FUN_14584b0b6(void)

void FUN_14584b0b6(undefined8 param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14c96b468;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14c96b480 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_58 = local_38;
  local_50 = local_30;
  local_60 = &DAT_14c96b458;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      plVar1 = *(longlong **)(*local_60 + 8 + (longlong)iStack_44 * 0x18);
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584b1b6 FUN_14584b1b6 body=257 status=ok
// SIG undefined FUN_14584b1b6(void)

char * FUN_14584b1b6(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 == 0) {
    pcVar4 = "invalid scanner";
  }
  else {
    FUN_14584b2f2();
    lVar1 = *param_1;
    FUN_1401d825c(lVar1);
    if (*(longlong *)(lVar1 + 0x90) == 0) {
      pcVar4 = "empty scanner";
    }
    else {
      local_48 = (undefined4)*param_1;
      uStack_44 = *(undefined4 *)((longlong)param_1 + 4);
      uStack_40 = (undefined4)param_1[1];
      uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
      puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      plVar3 = (longlong *)FUN_14001cc68(0x10,0x10);
      plVar3[1] = 0;
      *puVar2 = plVar3;
      *plVar3 = (longlong)puVar2;
      local_38 = puVar2;
      FUN_14584b3fc(&local_48,param_2);
      lVar1 = *param_1;
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar1 + 0xc);
      *param_3 = *(undefined8 *)(lVar1 + 4);
      if (*(char *)*param_1 == '\0') {
        pcVar4 = (char *)0x0;
      }
      else {
        pcVar4 = *(char **)((char *)*param_1 + 0x10);
      }
      FUN_14584b2b8(&local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return pcVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584b2b8 FUN_14584b2b8 body=57 status=ok
// SIG undefined FUN_14584b2b8(void)

void FUN_14584b2b8(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14122cc1a(puVar1);
    uVar2 = *puVar1;
    *puVar1 = 0;
    FUN_1400020a8(uVar2);
    FUN_1400020a8(puVar1);
    return;
  }
  return;
}



// FUNCTION 14584b2f2 FUN_14584b2f2 body=266 status=ok
// SIG undefined FUN_14584b2f2(void)

void FUN_14584b2f2(longlong *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar1 = *param_1;
  FUN_1401d825c(lVar1);
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    bVar4 = false;
    do {
      lVar1 = *param_1;
      FUN_1401d825c(lVar1);
      lVar1 = *(longlong *)
               (*(longlong *)(lVar1 + 0x78) +
               (*(longlong *)(lVar1 + 0x80) - 1U & *(ulonglong *)(lVar1 + 0x88)) * 8);
      if (*(int *)(lVar1 + 4) != 0) {
        return;
      }
      if (!bVar4) {
        puVar2 = (undefined1 *)FUN_14001cc68(0x20,0x10);
        *(undefined8 *)(puVar2 + 0x10) = 0;
        *(undefined8 *)(puVar2 + 0x18) = 0;
        lVar3 = FUN_14001cc68(0x60,0x10);
        *(longlong *)lVar3 = lVar3;
        *(longlong *)(lVar3 + 8) = lVar3;
        *(longlong *)(lVar3 + 0x10) = lVar3;
        *(undefined2 *)(lVar3 + 0x18) = 0x101;
        *(longlong *)(puVar2 + 0x10) = lVar3;
        *puVar2 = 1;
        *(undefined8 *)(puVar2 + 4) = 0x200000001;
        FUN_145883a4e(param_1 + 1,puVar2);
      }
      FUN_1470a653a(param_1,lVar1);
      lVar1 = *param_1;
      FUN_1401d825c(lVar1);
      if (*(longlong *)(lVar1 + 0x90) != 0) {
        FUN_1401d76f6(lVar1 + 0x70);
      }
      lVar1 = *param_1;
      FUN_1401d825c(lVar1);
      bVar4 = true;
    } while (*(longlong *)(lVar1 + 0x90) != 0);
  }
  return;
}



// FUNCTION 14584b3fc FUN_14584b3fc body=272 status=ok
// SIG undefined FUN_14584b3fc(void)

void FUN_14584b3fc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1401d825c(lVar1);
  (**(code **)(*param_2 + 8))
            (param_2,*(longlong *)
                      (*(longlong *)(lVar1 + 0x78) +
                      (*(longlong *)(lVar1 + 0x80) - 1U & *(ulonglong *)(lVar1 + 0x88)) * 8) + 8);
  lVar1 = *param_1;
  FUN_1401d825c(lVar1);
  if (*(int *)(*(longlong *)
                (*(longlong *)(lVar1 + 0x78) +
                (*(longlong *)(lVar1 + 0x80) - 1U & *(ulonglong *)(lVar1 + 0x88)) * 8) + 4) == 1) {
    lVar1 = *param_1;
    FUN_1401d825c(lVar1);
    if (*(longlong *)(lVar1 + 0x90) != 0) {
      FUN_1401d76f6(lVar1 + 0x70);
    }
  }
  FUN_1401d7864(param_1,param_2);
  (**(code **)(*param_2 + 0x10))(param_2);
  while( true ) {
    lVar1 = *param_1;
    FUN_1401d825c(lVar1);
    if (*(longlong *)(lVar1 + 0x90) == 0) {
      return;
    }
    lVar1 = *param_1;
    FUN_1401d825c(lVar1);
    if (*(int *)(*(longlong *)
                  (*(longlong *)(lVar1 + 0x78) +
                  (*(longlong *)(lVar1 + 0x80) - 1U & *(ulonglong *)(lVar1 + 0x88)) * 8) + 4) != 2)
    break;
    lVar1 = *param_1;
    FUN_1401d825c(lVar1);
    if (*(longlong *)(lVar1 + 0x90) != 0) {
      FUN_1401d76f6(lVar1 + 0x70);
    }
  }
  return;
}



// FUNCTION 14584b510 FUN_14584b510 body=39 status=ok
// SIG undefined FUN_14584b510(void)

void FUN_14584b510(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14122ccaa();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14584b538 FUN_14584b538 body=64 status=ok
// SIG undefined FUN_14584b538(void)

void FUN_14584b538(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14584b578(param_1 + 8);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14584b578 FUN_14584b578 body=53 status=ok
// SIG undefined FUN_14584b578(void)

void FUN_14584b578(longlong *param_1)

{
  FUN_14584b5ae();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14584b5ae FUN_14584b5ae body=88 status=ok
// SIG undefined FUN_14584b5ae(void)

void FUN_14584b5ae(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_148207abc(param_1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14584b606 FUN_14584b606 body=70 status=ok
// SIG undefined FUN_14584b606(void)

undefined1 FUN_14584b606(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x658)) {
    lVar2 = 0;
    do {
      lVar1 = FUN_14584b64c(*(undefined8 *)(*(longlong *)(param_1 + 0x650) + lVar2 * 8));
      if (lVar1 != 0) {
        return 1;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x658));
  }
  return 0;
}



// FUNCTION 14584b64c FUN_14584b64c body=154 status=ok
// SIG undefined FUN_14584b64c(void)

undefined8 FUN_14584b64c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x628) + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_144a7b8cc();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
         == lVar1 + 0x30)) && (*(longlong *)(lVar2 + 0xc0) != 0)) {
      lVar2 = FUN_14584b6e8(lVar2);
      if (lVar2 != 0) {
        local_28 = *(undefined4 *)(param_1 + 0x30);
        uStack_24 = *(undefined4 *)(param_1 + 0x34);
        uStack_20 = *(undefined4 *)(param_1 + 0x38);
        uStack_1c = *(undefined4 *)(param_1 + 0x3c);
        uVar3 = FUN_147ba5d64(lVar2);
        goto LAB_14584b6b3;
      }
    }
  }
  uVar3 = 0;
LAB_14584b6b3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584b6e8 FUN_14584b6e8 body=60 status=ok
// SIG undefined FUN_14584b6e8(void)

longlong FUN_14584b6e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (((param_1 != 0) && (param_2 != 0)) &&
     ((lVar1 = FUN_1403358e4(param_2), lVar1 == 0 ||
      (lVar1 = *(longlong *)(lVar1 + 0x220), lVar1 == 0)))) {
    lVar1 = *(longlong *)(param_1 + 0x220);
  }
  return lVar1;
}



// FUNCTION 14584b72c FUN_14584b72c body=69 status=ok
// SIG undefined FUN_14584b72c(void)

void FUN_14584b72c(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 6) = 0xffffffffffffffff;
  *param_1 = 0xffffffffffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x55) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x37) = 0;
  return;
}



// FUNCTION 14584b7c0 FUN_14584b7c0 body=123 status=ok
// SIG undefined FUN_14584b7c0(void)

bool FUN_14584b7c0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  cVar2 = FUN_140aa53c6();
  if (cVar2 == '\0') {
    bVar3 = false;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x78);
    FUN_14122db64(&local_28,local_24,0);
    FUN_14122db38(local_24,&local_30);
    bVar3 = local_30 == *(longlong *)(lVar1 + 0x18);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584b848 FUN_14584b848 body=48 status=ok
// SIG undefined FUN_14584b848(void)

void FUN_14584b848(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14584b878 FUN_14584b878 body=92 status=ok
// SIG undefined FUN_14584b878(void)

void FUN_14584b878(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    puVar1 = (undefined8 *)(param_1 + 8);
    cVar4 = FUN_144729dda(param_1 + 0x10);
    if (cVar4 != '\0') {
      lVar3 = FUN_14479d2ce(param_1 + 0x10);
      uVar2 = *(undefined8 *)(lVar3 + 0xf0);
      lVar3 = FUN_144a61814(uVar2,puVar1);
      if (lVar3 != 0) {
        FUN_1405a424c(uVar2,*puVar1);
      }
    }
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 14584b8d4 FUN_14584b8d4 body=215 status=ok
// SIG undefined FUN_14584b8d4(void)

undefined8 * FUN_14584b8d4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [44];
  undefined1 local_3c [12];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar4 = FUN_14584b9ac();
    cVar2 = FUN_1448093f4(lVar1,uVar4);
    if (cVar2 != '\0') {
      lVar5 = FUN_141230368(*(undefined8 *)(param_1 + 0x18));
      if (lVar5 != 0) {
        FUN_140fda471(local_3c,lVar5);
        FUN_140e3418c(local_3c,&local_30,1);
        bVar3 = local_30 == *(longlong *)(lVar1 + 8) ^ *(byte *)(lVar1 + 0x20);
        *(undefined1 *)param_2 = 1;
        *(uint *)((longlong)param_2 + 0xc) = (uint)bVar3;
        puVar6 = &DAT_14cb7c580;
        if (bVar3 != 0) {
          puVar6 = &DAT_14cb7c588;
        }
        *(undefined8 *)((longlong)param_2 + 4) = *puVar6;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14584b9ac FUN_14584b9ac body=55 status=ok
// SIG undefined FUN_14584b9ac(void)

void FUN_14584b9ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57680 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57680 = FUN_140002ddd(FUN_1464bd068,uVar1,L"FactEvaluator_IsInMap");
  }
  return;
}



// FUNCTION 14584b9e4 FUN_14584b9e4 body=40 status=ok
// SIG undefined FUN_14584b9e4(void)

undefined8 FUN_14584b9e4(undefined8 param_1,int param_2)

{
  FUN_14584ba0c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584ba0c FUN_14584ba0c body=101 status=ok
// SIG undefined FUN_14584ba0c(void)

void FUN_14584ba0c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5325f0;
  param_1[5] = &PTR_FUN_14a532940;
  param_1[0x52] = &PTR_LAB_14a532980;
  plVar3 = (longlong *)param_1[0x16b];
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
  FUN_14584ba72(param_1);
  return;
}



// FUNCTION 14584ba72 FUN_14584ba72 body=724 status=ok
// SIG undefined FUN_14584ba72(void)

void FUN_14584ba72(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5194b0;
  param_1[5] = &PTR_FUN_14a519800;
  param_1[0x52] = &PTR_LAB_14a519840;
  if (param_1[0x166] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x164] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x162] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x160] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15a] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x156];
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
  if (param_1[0x153] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffd8aa(param_1 + 0x88);
  FUN_14584bd46(param_1 + 0x70);
  FUN_1449db362(param_1 + 0x6d);
  FUN_1449db362(param_1 + 0x6b);
  FUN_144760e21(param_1[0x68],*(undefined4 *)(param_1 + 0x69));
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x65],*(undefined4 *)(param_1 + 0x66));
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x62],*(undefined4 *)(param_1 + 99));
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5f],*(undefined4 *)(param_1 + 0x60));
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5c],*(undefined4 *)(param_1 + 0x5d));
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x59],*(undefined4 *)(param_1 + 0x5a));
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x56],*(undefined4 *)(param_1 + 0x57));
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x53],*(undefined4 *)(param_1 + 0x54));
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_14584bd96(param_1);
  return;
}



// FUNCTION 14584bd46 FUN_14584bd46 body=79 status=ok
// SIG undefined FUN_14584bd46(void)

void FUN_14584bd46(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eeb4b0;
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
                    /* WARNING: Could not recover jumptable at 0x00014584bd91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14584bd96 FUN_14584bd96 body=248 status=ok
// SIG undefined FUN_14584bd96(void)

void FUN_14584bd96(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a51aa30;
  param_1[5] = &PTR_FUN_14a51ad70;
  plVar3 = (longlong *)param_1[0x51];
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
  FUN_144760e21(param_1[0x4d],*(undefined4 *)(param_1 + 0x4e));
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4a],*(undefined4 *)(param_1 + 0x4b));
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_14122e0b2(param_1 + 0x38);
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 14584beaa FUN_14584beaa body=31 status=ok
// SIG undefined FUN_14584beaa(void)

undefined8 FUN_14584beaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584bed8 FUN_14584bed8 body=31 status=ok
// SIG undefined FUN_14584bed8(void)

undefined8 FUN_14584bed8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584bef7 FUN_14584bef7 body=313 status=ok
// SIG undefined FUN_14584bef7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14584bef7(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb240d0 == (longlong *)0x0) {
    _DAT_14cb24100 = 0;
    _DAT_14cb24108 = 0;
    _DAT_14cb240f0 = 0;
    _DAT_14cb240f8 = 0;
    _DAT_14cb240e0 = 0;
    uRam000000014cb240e8 = 0;
    _DAT_14cb24110 = 0;
    _DAT_14cb240d8 = &PTR_FUN_14a171dc0;
    FUN_144a319ae(&DAT_14cb240e0);
    _DAT_14cb240f0 = CONCAT44(DAT_14cb240f0_4,0xffffffff);
    _DAT_14cb240d8 = &PTR_FUN_14ac73f10;
    _DAT_14cb240f8 = 0;
    _DAT_14cb24100 = CONCAT44(DAT_14cb24100_4,0x3dcccccd);
    _DAT_14cb24108 = 0;
    _DAT_14cb24110 = 0;
    DAT_14cb240d0 = (longlong *)&DAT_14cb240d8;
  }
  plVar1 = DAT_14cb240d0;
  lVar3 = FUN_144a7b9b0(DAT_14cb240d0 + 1);
  if (lVar3 == 0) {
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_14584bf3f;
    FUN_144a884d2(local_58,"def_globals_gps",0);
    FUN_140024ada(local_58,plVar1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar2 = FUN_1449e3c20(plVar1);
    if (cVar2 == '\0') goto LAB_14584bf3f;
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_14584bf3f:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584c05a FUN_14584c05a body=195 status=ok
// SIG undefined FUN_14584c05a(void)

undefined8 * FUN_14584c05a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140ac1c72(param_1,uVar1);
  *param_1 = &PTR_FUN_14b950260;
  param_1[7] = &PTR_FUN_14b950520;
  param_1[8] = 0xffffffffffffffff;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 2;
  *(undefined2 *)((longlong)param_1 + 0x99) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0xff;
  *(undefined4 *)(param_1 + 0x18) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 2;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 200;
  return param_1;
}



// FUNCTION 14584c11e FUN_14584c11e body=40 status=ok
// SIG undefined FUN_14584c11e(void)

undefined8 FUN_14584c11e(undefined8 param_1,int param_2)

{
  FUN_14584c146();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584c146 FUN_14584c146 body=118 status=ok
// SIG undefined FUN_14584c146(void)

void FUN_14584c146(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a502b90;
  param_1[5] = &PTR_FUN_14a502eb0;
  plVar3 = (longlong *)param_1[0x162];
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
  if (param_1[0x15f] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffdb16(param_1 + 0x34);
  FUN_140f861ce(param_1);
  return;
}



// FUNCTION 14584c1ca FUN_14584c1ca body=40 status=ok
// SIG undefined FUN_14584c1ca(void)

undefined8 FUN_14584c1ca(undefined8 param_1,int param_2)

{
  FUN_14584c1f2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584c1f2 FUN_14584c1f2 body=59 status=ok
// SIG undefined FUN_14584c1f2(void)

void FUN_14584c1f2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b316f20;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14584c238 FUN_14584c238 body=69 status=ok
// SIG undefined FUN_14584c238(void)

undefined8 * FUN_14584c238(undefined8 *param_1)

{
  FUN_14122fab6();
  *param_1 = &PTR_FUN_14b6cb230;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1af) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x437a0000;
  return param_1;
}



// FUNCTION 14584c27e FUN_14584c27e body=240 status=ok
// SIG undefined FUN_14584c27e(void)

void FUN_14584c27e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined *local_38;
  longlong local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14584c370();
  local_30 = param_1 + 0x1b8;
  local_38 = &DAT_14cbc3cb8;
  FUN_14122fc52(param_2,local_24,&local_38,0);
  local_30 = param_1 + 0x1e0;
  local_38 = &DAT_14cbc3cc0;
  FUN_14122fc52(param_2,local_24,&local_38,0);
  local_30 = param_1 + 0x208;
  local_38 = &DAT_14cbc3cc8;
  FUN_14122fc52(param_2,local_24,&local_38,0);
  local_30 = param_1 + 0x230;
  local_38 = &DAT_14cbc3cd0;
  FUN_14122fc52(param_2,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584c370 FUN_14584c370 body=362 status=ok
// SIG undefined FUN_14584c370(void)

void FUN_14584c370(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_2 + 8) != *(int *)(param_2 + 0x34)) {
    FUN_1487df68c(param_2);
    FUN_1487df7d0(param_2);
  }
  FUN_14584c4dc(param_2,param_1 + 0xc0);
  plVar1 = (longlong *)(param_1 + 0x70);
  lVar2 = param_1 + 0x80;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar3 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x98);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (local_50 != lVar2)) {
    do {
      do {
        local_58 = *local_80 + (longlong)iStack_64 * 0x38;
        local_50 = (longlong)iStack_64 * 0x38 + *local_80 + 8;
        FUN_14122fc52(param_2,local_34,&local_58,0);
        local_68 = local_68 & ~local_78._4_4_;
        FUN_1449c0562(&local_78);
      } while (iStack_64 != iVar3);
    } while ((local_70 != lVar2) || (local_80 != plVar1));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14584c4dc FUN_14584c4dc body=397 status=ok
// SIG undefined FUN_14584c4dc(void)

void FUN_14584c4dc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_14584c66c(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1412300b8(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar3 = 0;
  local_50 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_2[5];
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_2;
  if ((iStack_44 != iVar3) || (local_50 != plVar1)) {
    do {
      do {
        local_58 = *local_80 + (longlong)iStack_64 * 0x38;
        local_50 = (longlong *)((longlong)iStack_64 * 0x38 + *local_80 + 8);
        FUN_14122fc52(param_1,local_34,&local_58,0);
        local_68 = local_68 & ~local_78._4_4_;
        FUN_1449c0562(&local_78);
      } while (iStack_64 != iVar3);
    } while ((local_70 != plVar1) || (local_80 != param_2));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584c66c FUN_14584c66c body=424 status=ok
// SIG undefined FUN_14584c66c(void)

void FUN_14584c66c(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144748838(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1447030e2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x38 + lVar2 + -0x34);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0xe;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
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
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 14584c814 FUN_14584c814 body=103 status=ok
// SIG undefined FUN_14584c814(void)

ulonglong FUN_14584c814(longlong param_1)

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
LAB_14584c85e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14584c85e;
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



// FUNCTION 14584c87c FUN_14584c87c body=110 status=ok
// SIG undefined FUN_14584c87c(void)

void FUN_14584c87c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    return;
  }
  lVar1 = FUN_1447210f0(param_2);
  lVar2 = FUN_141230368(*(undefined8 *)(param_1 + 0x18));
  if (lVar1 != lVar2) {
    return;
  }
  if (param_3 != 0) {
    lVar1 = FUN_1449f3324();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14584c8cc;
  }
  param_3 = 0;
LAB_14584c8cc:
  FUN_14584c8ea(param_1,param_3);
  return;
}



// FUNCTION 14584c8ea FUN_14584c8ea body=329 status=ok
// SIG undefined FUN_14584c8ea(void)

void FUN_14584c8ea(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined8 local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xf0);
      lVar4 = (longlong)*(int *)(param_1 + 0xf8) << 3;
      do {
        cVar2 = FUN_1411db966(lVar3,param_2);
        if (cVar2 != '\0') goto LAB_14584ca0c;
        lVar3 = lVar3 + 8;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    cVar2 = FUN_1412303d0(param_1 + 0x38,param_2);
    if (cVar2 != '\0') {
      local_38[0] = 0;
      FUN_14485c47a(local_38,param_2);
      iVar1 = *(int *)(param_1 + 0xf8);
      *(uint *)(param_1 + 0xf8) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xfc) < iVar1 + 1U) {
        FUN_14577298c(param_1 + 0xf0,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar1 * 8) = local_38[0];
      if (*(char *)(param_1 + 0x88) == '\x03') {
        local_48 = FUN_1411db870;
        local_40 = 0;
        FUN_14584ca34(local_38,param_1);
        FUN_141230466(param_2 + 0x9c0,&local_48,local_38);
        FUN_1449db362(local_38);
        param_2 = *(longlong *)(param_2 + 0xa08);
        if (param_2 == 0) goto LAB_14584ca0c;
      }
      else if (*(char *)(param_1 + 0x88) != '\x02') goto LAB_14584ca0c;
      FUN_1411dbaa8(param_1,param_2);
    }
  }
LAB_14584ca0c:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14584ca34 FUN_14584ca34 body=428 status=ok
// SIG undefined FUN_14584ca34(void)

longlong * FUN_14584ca34(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14584cb14:
    *puVar5 = &PTR_LAB_14b3fc260;
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
    *puVar5 = &PTR_FUN_14b3fc040;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14584cb14;
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
    *puVar5 = &PTR_LAB_14b3fc260;
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
    *puVar5 = &PTR_FUN_14b3fc040;
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



// FUNCTION 14584cbe0 FUN_14584cbe0 body=37 status=ok
// SIG undefined FUN_14584cbe0(void)

void FUN_14584cbe0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x238);
  FUN_14584cc06(param_2);
  return;
}



// FUNCTION 14584cc06 FUN_14584cc06 body=251 status=ok
// SIG undefined FUN_14584cc06(void)

undefined8 * FUN_14584cc06(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b78ae70;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_141230602(param_1 + 6);
  param_1[0x2b] = 0xfffffffe;
  uVar1 = DAT_14cbabaa0;
  param_1[0x2c] = DAT_14cbabaa0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = uVar1;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0x4040000000000001;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0xf00000d0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3d) = 0x3e19999a;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xf00000d0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0x3f800000;
  return param_1;
}



// FUNCTION 14584cd02 FUN_14584cd02 body=152 status=ok
// SIG undefined FUN_14584cd02(void)

void FUN_14584cd02(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14584cd9c();
  local_30 = 0;
  local_38 = 0;
  local_40 = 1;
  FUN_1446f470e(&local_48,L"Identity",1);
  uVar1 = FUN_140e85284();
  FUN_140e85284();
  uVar1 = FUN_140f1fabf(uVar1,local_48);
  FUN_140f1fa23(uVar1,param_2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584cd9c FUN_14584cd9c body=2643 status=ok
// SIG undefined FUN_14584cd9c(void)

void FUN_14584cd9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457c8080();
  FUN_1446f470e(&local_58,L"MovementMode",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"OrientationMode",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"MovementTargetPtr",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"MovementTargetLocation",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"MovementComponentTargetPtr",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"LocationTargetType",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"OrientationTargetPtr",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"RotationInterpSpeed",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"DroneSpeed",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"HoverSpeed",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"DroneAccelerationTime",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"HoverAltitude",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"HoverRadius",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"StopFlyAtTargetDistance",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"HoverDirection",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"DeactivateMode",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bIsDeactivated",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bIsDead",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bProjectileCollisionEnabled",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"DecelerateToTargetDistance",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bUseDecelerateToTargetDistance",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"HoverAngle",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bUseHoverAngle",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bUseHoverQuery",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bWithinDriftAngle",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"CurrentVelocity",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"HoverQueryTolerance",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"HoveryQueryResult",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"WaypointQueryResult",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bIsMovementLocked",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bHoverQueryFoundLocation",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"OrbitValues",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"GbxActorPartOwnerState",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"AppearanceNetChannels",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = FUN_1458720f0();
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"PreviousTargetLocation",1);
  uVar1 = FUN_1412308c8();
  FUN_1412308c8();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584d7f0 FUN_14584d7f0 body=162 status=ok
// SIG undefined FUN_14584d7f0(void)

void FUN_14584d7f0(longlong *param_1,undefined4 param_2)

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
        goto LAB_14584d87d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14584d87d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14584d892 FUN_14584d892 body=101 status=ok
// SIG undefined FUN_14584d892(void)

void FUN_14584d892(longlong param_1)

{
  FUN_14584d93c(param_1 + 0x140);
  FUN_14584d97c(param_1 + 400);
  FUN_14584d8f8(param_1 + 0x1e0);
  FUN_14584d8f8(param_1 + 0x230);
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  return;
}



// FUNCTION 14584d8f8 FUN_14584d8f8 body=67 status=ok
// SIG undefined FUN_14584d8f8(void)

void FUN_14584d8f8(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14584d9bc(param_1);
    FUN_145af2b60(param_1,0);
    return;
  }
  FUN_145af2b60(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1461f38bc(param_1);
  return;
}



// FUNCTION 14584d93c FUN_14584d93c body=63 status=ok
// SIG undefined FUN_14584d93c(void)

void FUN_14584d93c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14584db0c(param_1);
    FUN_145ff3e90(param_1);
    return;
  }
  FUN_145ff3e90(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_145cf00fe(param_1);
  return;
}



// FUNCTION 14584d97c FUN_14584d97c body=63 status=ok
// SIG undefined FUN_14584d97c(void)

void FUN_14584d97c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14584dc52(param_1);
    FUN_146026858(param_1);
    return;
  }
  FUN_146026858(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_148aeb010(param_1);
  return;
}



// FUNCTION 14584d9bc FUN_14584d9bc body=335 status=ok
// SIG undefined FUN_14584d9bc(void)

void FUN_14584d9bc(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x74 + (longlong)iVar4 * 0x78) * 4) =
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



// FUNCTION 14584db0c FUN_14584db0c body=325 status=ok
// SIG undefined FUN_14584db0c(void)

void FUN_14584db0c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x74 + (longlong)iVar4 * 0x78) * 4) =
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



// FUNCTION 14584dc52 FUN_14584dc52 body=345 status=ok
// SIG undefined FUN_14584dc52(void)

void FUN_14584dc52(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x84 + (longlong)iVar4 * 0x88) * 4) =
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



// FUNCTION 14584ddac FUN_14584ddac body=54 status=ok
// SIG undefined FUN_14584ddac(void)

undefined1 FUN_14584ddac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14584dde2(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 14584dde2 FUN_14584dde2 body=131 status=ok
// SIG undefined FUN_14584dde2(void)

undefined1 * FUN_14584dde2(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 8) = lVar1;
  FUN_14065c7a4(param_1 + 0x10,param_2 + 0x10);
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x20);
    }
  }
  *(longlong *)(param_1 + 0x20) = lVar1;
  puVar2 = (undefined8 *)(param_2 + 0x28);
  puVar3 = (undefined8 *)(param_1 + 0x28);
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}



// FUNCTION 14584de66 FUN_14584de66 body=38 status=ok
// SIG undefined FUN_14584de66(void)

undefined8 FUN_14584de66(undefined8 param_1,int param_2)

{
  FUN_14584de8c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584de8c FUN_14584de8c body=1 status=ok
// SIG undefined FUN_14584de8c(void)

void FUN_14584de8c(void)

{
  return;
}



// FUNCTION 14584de8e FUN_14584de8e body=55 status=ok
// SIG undefined FUN_14584de8e(void)

void FUN_14584de8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c510 == 0) {
    uVar1 = FUN_141235669();
    DAT_14c99c510 = FUN_140002ddd(FUN_14628f2f9,uVar1,L"ElementID");
  }
  return;
}



// FUNCTION 14584deca FUN_14584deca body=53 status=ok
// SIG undefined FUN_14584deca(void)

void FUN_14584deca(longlong *param_1)

{
  FUN_14584df00();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14584df00 FUN_14584df00 body=90 status=ok
// SIG undefined FUN_14584df00(void)

void FUN_14584df00(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14584df5a FUN_14584df5a body=53 status=ok
// SIG undefined FUN_14584df5a(void)

void FUN_14584df5a(longlong *param_1)

{
  FUN_14584df90();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14584df90 FUN_14584df90 body=90 status=ok
// SIG undefined FUN_14584df90(void)

void FUN_14584df90(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14584dfea FUN_14584dfea body=53 status=ok
// SIG undefined FUN_14584dfea(void)

void FUN_14584dfea(longlong *param_1)

{
  FUN_14584e020();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14584e020 FUN_14584e020 body=90 status=ok
// SIG undefined FUN_14584e020(void)

void FUN_14584e020(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140957390(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14584e07a FUN_14584e07a body=53 status=ok
// SIG undefined FUN_14584e07a(void)

void FUN_14584e07a(longlong *param_1)

{
  FUN_14584e0b0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14584e0b0 FUN_14584e0b0 body=90 status=ok
// SIG undefined FUN_14584e0b0(void)

void FUN_14584e0b0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14584e116 FUN_14584e116 body=106 status=ok
// SIG undefined FUN_14584e116(void)

undefined8 * FUN_14584e116(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14abc3bd0;
  param_1[5] = &PTR_FUN_14abc3ed0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xffffff18 | 0x40;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined2 *)(param_1 + 7) = 0x7f;
  FUN_144757f48(param_1,0x1000000);
  return param_1;
}



// FUNCTION 14584e18a FUN_14584e18a body=55 status=ok
// SIG undefined FUN_14584e18a(void)

void FUN_14584e18a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb2b748 == 0) {
    uVar1 = FUN_141235dbb();
    DAT_14cb2b748 = FUN_140002ddd(FUN_14181d0bc,uVar1,L"FOscillator");
  }
  return;
}



// FUNCTION 14584e1cc FUN_14584e1cc body=106 status=ok
// SIG undefined FUN_14584e1cc(void)

undefined8 * FUN_14584e1cc(undefined8 *param_1)

{
  FUN_140312256();
  FUN_1409e1656(param_1 + 0x72);
  *param_1 = &PTR_FUN_14b5b4230;
  param_1[0x72] = &PTR_FUN_14b5b4870;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf0 | 0xb;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f000000;
  *(byte *)((longlong)param_1 + 0x3bc) = *(byte *)((longlong)param_1 + 0x3bc) & 0xfd;
  *(byte *)(param_1 + 0x77) = *(byte *)(param_1 + 0x77) & 0xfe;
  return param_1;
}



// FUNCTION 14584e23e FUN_14584e23e body=182 status=ok
// SIG undefined FUN_14584e23e(void)

void FUN_14584e23e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x100);
  *param_2 = &PTR_FUN_14b937cd0;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xf00000d0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0x3f800000;
  *(undefined1 *)(param_2 + 0xb) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0xf00000d0;
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x1d) = 0xf00000d0;
  param_2[0x1e] = 0;
  *(undefined4 *)(param_2 + 0x1f) = 0x3f800000;
  return;
}



// FUNCTION 14584e2fa FUN_14584e2fa body=55 status=ok
// SIG undefined FUN_14584e2fa(void)

void FUN_14584e2fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d6e8 == 0) {
    uVar1 = FUN_141235ed7();
    DAT_14cc2d6e8 = FUN_140002ddd(FUN_1467682d9,uVar1,L"PBIKBoneSetting");
  }
  return;
}



// FUNCTION 14584e332 FUN_14584e332 body=55 status=ok
// SIG undefined FUN_14584e332(void)

void FUN_14584e332(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2def8 == 0) {
    uVar1 = FUN_141235f08();
    DAT_14cc2def8 = FUN_140002ddd(FUN_14676b296,uVar1,L"FBIKBoneLimit");
  }
  return;
}



// FUNCTION 14584e36a FUN_14584e36a body=104 status=ok
// SIG undefined FUN_14584e36a(void)

undefined8 FUN_14584e36a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_14123751a(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584e3ec FUN_14584e3ec body=104 status=ok
// SIG undefined FUN_14584e3ec(void)

undefined8 FUN_14584e3ec(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_14584e456(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584e456 FUN_14584e456 body=22 status=ok
// SIG undefined FUN_14584e456(void)

undefined8 FUN_14584e456(int *param_1)

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
  
  plVar4 = DAT_14cbc8a28;
  if (DAT_14cbc8a28 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cbc8a28 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbc8a28 + 0x154) & 1) == 0) ||
       ((int)DAT_14cbc8a28[0x3a] <= *(int *)((longlong)DAT_14cbc8a28 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cbc8a28 + 0x300))(DAT_14cbc8a28);
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



// FUNCTION 14584e46c FUN_14584e46c body=40 status=ok
// SIG undefined FUN_14584e46c(void)

undefined8 FUN_14584e46c(undefined8 param_1,int param_2)

{
  FUN_14584e494();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584e494 FUN_14584e494 body=246 status=ok
// SIG undefined FUN_14584e494(void)

void FUN_14584e494(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b8fb570;
  param_1[5] = &PTR_FUN_14b8fbc50;
  param_1[6] = &PTR_LAB_14b8fbc90;
  param_1[0x2f] = &PTR_FUN_14b8fbce0;
  if (param_1[0x3b5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b0] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x34c) = 0;
  if (param_1[0x34b] != 0) {
    FUN_1400020a8();
  }
  FUN_14584e58a(param_1 + 0x343);
  *(undefined4 *)(param_1 + 0x342) = 0;
  if (param_1[0x341] != 0) {
    FUN_1400020a8();
  }
  FUN_14584e5c0(param_1 + 0x339);
  plVar3 = (longlong *)param_1[0x330];
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
  FUN_140ea1498(param_1 + 0x19f);
  FUN_14584e6a8(param_1);
  return;
}



// FUNCTION 14584e58a FUN_14584e58a body=53 status=ok
// SIG undefined FUN_14584e58a(void)

void FUN_14584e58a(longlong *param_1)

{
  FUN_14584e64e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14584e5c0 FUN_14584e5c0 body=53 status=ok
// SIG undefined FUN_14584e5c0(void)

void FUN_14584e5c0(longlong *param_1)

{
  FUN_14584e5f6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14584e5f6 FUN_14584e5f6 body=88 status=ok
// SIG undefined FUN_14584e5f6(void)

void FUN_14584e5f6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14584e64e FUN_14584e64e body=90 status=ok
// SIG undefined FUN_14584e64e(void)

void FUN_14584e64e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14584e6a8 FUN_14584e6a8 body=272 status=ok
// SIG undefined FUN_14584e6a8(void)

void FUN_14584e6a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b51f760;
  param_1[5] = &PTR_FUN_14b51fe10;
  param_1[6] = &PTR_LAB_14b51fe50;
  param_1[0x2f] = &PTR_FUN_14b51fea0;
  FUN_141237597(param_1[0x19b],*(undefined4 *)(param_1 + 0x19c));
  if (param_1[0x19b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x198] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x196] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x194] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x193) = 0;
  if (param_1[0x192] != 0) {
    FUN_1400020a8();
  }
  FUN_14584e7b8(param_1 + 0x18a);
  if (param_1[0x185] != 0) {
    FUN_1400020a8();
  }
  FUN_14584e7f0(param_1 + 0x16a);
  FUN_14584e83e(param_1 + 0x15b);
  FUN_14584e88e(param_1 + 0x140);
  if (param_1[0x139] != 0) {
    FUN_1400020a8();
  }
  FUN_14584e8de(param_1);
  return;
}



// FUNCTION 14584e7b8 FUN_14584e7b8 body=55 status=ok
// SIG undefined FUN_14584e7b8(void)

void FUN_14584e7b8(longlong *param_1)

{
  FUN_1411f746e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14584e7f0 FUN_14584e7f0 body=78 status=ok
// SIG undefined FUN_14584e7f0(void)

void FUN_14584e7f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  *(undefined **)(param_1 + 8) = &DAT_14a176f00;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x10);
  return;
}



// FUNCTION 14584e83e FUN_14584e83e body=79 status=ok
// SIG undefined FUN_14584e83e(void)

void FUN_14584e83e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14584e88e FUN_14584e88e body=80 status=ok
// SIG undefined FUN_14584e88e(void)

void FUN_14584e88e(undefined8 *param_1)

{
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &DAT_14a176f00;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 1);
  return;
}



// FUNCTION 14584e8de FUN_14584e8de body=575 status=ok
// SIG undefined FUN_14584e8de(void)

void FUN_14584e8de(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b513e90;
  param_1[5] = &PTR_FUN_14b514510;
  param_1[6] = &PTR_LAB_14b514550;
  param_1[0x2f] = &PTR_FUN_14b5145a0;
  puVar1 = (undefined8 *)param_1[0x132];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x130];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0xee] = &DAT_14a176f00;
  if (param_1[0xfc] != 0) {
    FUN_1400020a8();
  }
  param_1[0xee] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0xef);
  param_1[0xdb] = &DAT_14a176f00;
  if (param_1[0xe9] != 0) {
    FUN_1400020a8();
  }
  param_1[0xdb] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0xdc);
  param_1[200] = &DAT_14a176f00;
  if (param_1[0xd6] != 0) {
    FUN_1400020a8();
  }
  param_1[200] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0xc9);
  param_1[0xb5] = &DAT_14a176f00;
  if (param_1[0xc3] != 0) {
    FUN_1400020a8();
  }
  param_1[0xb5] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0xb6);
  param_1[0xa2] = &DAT_14a176f00;
  if (param_1[0xb0] != 0) {
    FUN_1400020a8();
  }
  param_1[0xa2] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0xa3);
  param_1[0x8f] = &DAT_14a176f00;
  if (param_1[0x9d] != 0) {
    FUN_1400020a8();
  }
  param_1[0x8f] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x90);
  param_1[0x7c] = &DAT_14a176f00;
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  param_1[0x7c] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x7d);
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_14584eb1d(param_1[0x4a],*(undefined4 *)(param_1 + 0x4b));
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_140d7aa08(param_1);
  return;
}



// FUNCTION 14584eb1d FUN_14584eb1d body=52 status=ok
// SIG undefined FUN_14584eb1d(void)

void FUN_14584eb1d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14584eb52 FUN_14584eb52 body=144 status=ok
// SIG undefined FUN_14584eb52(void)

bool FUN_14584eb52(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 14584ebe9 FUN_14584ebe9 body=143 status=ok
// SIG undefined FUN_14584ebe9(void)

void FUN_14584ebe9(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48 [7];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141237793();
  local_58[0] = *param_1;
  local_48[0] = 0;
  if (local_58[0] != 0) {
    plVar1 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[2];
    }
    (**(code **)*plVar1)(plVar1,local_48);
  }
  FUN_141237878(local_58);
  if (*param_1 != 0) {
    plVar1 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


