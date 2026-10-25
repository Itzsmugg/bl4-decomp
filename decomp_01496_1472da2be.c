// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1472da2be FUN_1472da2be body=42 status=ok
// SIG undefined FUN_1472da2be(void)

void FUN_1472da2be(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472da308 FUN_1472da308 body=96 status=ok
// SIG undefined FUN_1472da308(void)

undefined8 FUN_1472da308(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f5a64e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca46ed8,1);
  return uVar3;
}



// FUNCTION 1472da368 FUN_1472da368 body=52 status=ok
// SIG undefined FUN_1472da368(void)

void FUN_1472da368(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472da39c FUN_1472da39c body=256 status=ok
// SIG undefined FUN_1472da39c(void)

void FUN_1472da39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_145f5a64e();
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca46ed8,param_5,&local_b8);
  local_b8 = param_5;
  local_a8 = *(undefined4 *)param_4;
  uStack_a4 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_a0 = *(undefined4 *)(param_4 + 1);
  uStack_9c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_98 = *param_6;
  local_90 = param_6[1];
  local_88 = param_7;
  uStack_80 = param_8;
  local_78 = param_9;
  local_70 = 0;
  uStack_b0 = param_2;
  FUN_145f5a64e();
  FUN_1472de430(param_1,param_3,param_5,&local_b8);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472da49e FUN_1472da49e body=278 status=ok
// SIG undefined FUN_1472da49e(void)

void FUN_1472da49e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar5 = 0;
  do {
    uVar3 = FUN_14001cc68(0x58,0x10);
    FUN_1446f470e(&local_c8,L"FeedbackOcclusionBuffer.Readback",1);
    FUN_1402593fa(uVar3,local_c8);
    *(undefined8 *)(param_1 + 0x98 + lVar5) = uVar3;
    lVar5 = lVar5 + 0x20;
  } while (lVar5 != 0x60);
  local_c0 = 0x1000040000;
  local_b8 = 0x1002001040001;
  local_38 = 0x1100000003;
  local_b0 = 0x1002002041001;
  lVar4 = FUN_14486d71a();
  lVar5 = *(longlong *)(param_1 + 0x148);
  if (lVar5 != lVar4) {
    *(longlong *)(param_1 + 0x148) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472da5b6 FUN_1472da5b6 body=211 status=ok
// SIG undefined FUN_1472da5b6(void)

void FUN_1472da5b6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_1472de5ba(param_1 + 0x10,0);
  }
  lVar4 = param_1 + 0x88;
  lVar5 = 3;
  do {
    lVar3 = *(longlong *)(lVar4 + 0x10);
    if (lVar3 != 0) {
      FUN_14003821a(lVar3);
      FUN_1400020a8(lVar3);
    }
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined4 *)(lVar4 + 8) = 0;
    if (*(int *)(lVar4 + 0xc) != 0) {
      FUN_1472de69c(lVar4,0);
    }
    lVar4 = lVar4 + 0x20;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  lVar4 = *(longlong *)(param_1 + 0x148);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x148) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_1472da68a(param_1 + 0xf0);
  return;
}



// FUNCTION 1472da68a FUN_1472da68a body=63 status=ok
// SIG undefined FUN_1472da68a(void)

void FUN_1472da68a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145a40f2e(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1472de840(param_1);
    return;
  }
  FUN_1472de6fc(param_1);
  FUN_145a40f2e(param_1);
  return;
}



// FUNCTION 1472da6ca FUN_1472da6ca body=305 status=ok
// SIG undefined FUN_1472da6ca(void)

void FUN_1472da6ca(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  wchar_t **local_68;
  uint local_60;
  int local_5c;
  longlong local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(uint *)(param_1 + 0x90 + (ulonglong)*(uint *)(param_1 + 0xe8) * 0x20);
  uVar2 = 1;
  if (1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  local_68 = (wchar_t **)&local_39;
  local_39 = 0;
  local_48 = L"FeedbackOcclusionBuffer";
  local_60 = 4;
  if (DAT_14ca84e48 < 4) {
    local_60 = DAT_14ca84e48;
  }
  local_60 = local_60 + (local_60 == 0);
  local_58 = CONCAT44(local_58._4_4_,0x10129);
  if (DAT_14ca84e48 <= uVar2) {
    uVar2 = DAT_14ca84e48;
  }
  local_50 = 0;
  local_5c = uVar2 + (uVar2 == 0);
  local_58 = FUN_144738de6(param_2 + 0x188,param_2 + 0x70,&local_48,&local_60);
  *(longlong *)(param_1 + 0x80) = local_58;
  local_60 = local_60 & 0xff000000;
  if ((*(byte *)(local_58 + 0x68) & 0x80) != 0) {
    local_60 = CONCAT31(local_60._1_3_,0x1c);
  }
  local_48 = (wchar_t *)((ulonglong)local_48 & 0xffffffffffffff00);
  local_68 = &local_48;
  uVar3 = FUN_144a23c98(param_2 + 0x198,param_2 + 0x70,local_58 + 8,&local_60);
  FUN_1405bfba3(param_2,uVar3,0,2);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472da7fc FUN_1472da7fc body=73 status=ok
// SIG undefined FUN_1472da7fc(void)

void FUN_1472da7fc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)*(uint *)(param_1 + 0xe8) * 0x20;
  FUN_1401e3a19(param_2,*(undefined8 *)(param_1 + 0x98 + lVar1),*(undefined8 *)(param_1 + 0x80),
                *(int *)(param_1 + 0x90 + lVar1) << 2);
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 1472da846 FUN_1472da846 body=97 status=ok
// SIG undefined FUN_1472da846(void)

void FUN_1472da846(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe8) + ((*(int *)(param_1 + 0xe8) + 1U) / 3) * -3 + 1;
  *(int *)(param_1 + 0xe8) = iVar1;
  param_1 = param_1 + (ulonglong)(uint)(iVar1 * 0x20);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_1472de69c(param_1 + 0x88,0);
  }
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  return;
}



// FUNCTION 1472da8a8 FUN_1472da8a8 body=656 status=ok
// SIG undefined FUN_1472da8a8(void)

void FUN_1472da8a8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [44];
  undefined1 local_7c [20];
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x300000000;
  lVar1 = param_1 + 0x88;
  iVar9 = 1;
  while( true ) {
    uVar7 = *(int *)(param_1 + 0xe8) + ((uint)(iVar9 + *(int *)(param_1 + 0xe8)) / 3) * -3 + iVar9;
    lVar5 = (ulonglong)uVar7 * 0x20;
    if (*(int *)(param_1 + 0x90 + lVar5) == 0) break;
    lVar5 = lVar5 + lVar1;
    if (*(uint *)(param_1 + 0x140) < *(uint *)(lVar5 + 0x18)) {
      lVar5 = *(longlong *)(lVar5 + 0x10);
      lVar8 = *(longlong *)(lVar5 + 8);
      if ((lVar8 != 0) &&
         ((*(int *)(lVar8 + 0x10) != 0 ||
          (cVar3 = (**(code **)(**(longlong **)(lVar5 + 8) + 0x18))(), cVar3 == '\0')))) break;
      uVar10 = local_50;
      lVar5 = (longlong)(int)local_50;
      uVar4 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar4);
      if (local_50._4_4_ < uVar4) {
        FUN_1472de9f8(local_68,uVar10 & 0xffffffff);
      }
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_68;
      }
      *(uint *)(puVar6 + lVar5 * 4) = uVar7;
    }
    iVar9 = iVar9 + 1;
    if (iVar9 == 4) break;
  }
  if ((int)local_50 == 0) {
    uVar7 = (*(int *)(param_1 + 0xe8) + 1U) % 3;
    uVar10 = (ulonglong)(uVar7 << 5);
    if ((*(int *)(param_1 + 0x90 + uVar10) < 1) ||
       (lVar5 = uVar10 + lVar1, *(uint *)(lVar5 + 0x18) <= *(uint *)(param_1 + 0x140)))
    goto LAB_1472da9db;
    FUN_1403936f2(local_7c,1,1);
    plVar2 = *(longlong **)(*(longlong *)(lVar5 + 0x10) + 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2,~(-1 << ((byte)DAT_14c760da4 & 0x1f)));
    }
    uVar10 = local_50;
    lVar5 = (longlong)(int)local_50;
    uVar4 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,uVar4);
    if (local_50._4_4_ < uVar4) {
      FUN_1472de9f8(local_68,uVar10 & 0xffffffff);
    }
    puVar6 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar6 = local_68;
    }
    *(uint *)(puVar6 + lVar5 * 4) = uVar7;
    FUN_1402488ea(local_7c);
  }
  puVar6 = local_68;
  if (local_58 != (undefined1 *)0x0) {
    puVar6 = local_58;
  }
  lVar8 = (ulonglong)*(uint *)(puVar6 + (longlong)((int)local_50 + -1) * 4) * 0x20;
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0xa0 + lVar8);
  FUN_1472dab3a(param_1 + 0xf0);
  iVar9 = *(int *)(param_1 + 0x90 + lVar8);
  lVar5 = FUN_1400de8b4(*(undefined8 *)(param_1 + 0x98 + lVar8),iVar9 * 4);
  if (iVar9 != 0) {
    lVar11 = 0;
    do {
      if (*(int *)(lVar5 + lVar11 * 4) == 0) {
        FUN_1472deaf4(param_1 + 0xf0,local_7c,
                      (longlong)(int)lVar11 * 8 + *(longlong *)(lVar1 + lVar8));
      }
      lVar11 = lVar11 + 1;
    } while (iVar9 != (int)lVar11);
  }
  lVar1 = ((longlong *)(lVar1 + lVar8))[2];
  (**(code **)(*DAT_14ca83900 + 0x100))
            (DAT_14ca83900,&DAT_14ca85100,
             *(undefined8 *)(lVar1 + 0x18 + (ulonglong)*(uint *)(lVar1 + 0x14) * 8));
LAB_1472da9db:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472dab3a FUN_1472dab3a body=68 status=ok
// SIG undefined FUN_1472dab3a(void)

void FUN_1472dab3a(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1472de6fc();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1472dab7e FUN_1472dab7e body=441 status=ok
// SIG undefined FUN_1472dab7e(void)

void FUN_1472dab7e(longlong param_1,undefined8 *param_2,double *param_3,double *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar12 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x78) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x70);
    lVar13 = lVar11;
    if (lVar11 == 0) {
      lVar13 = lVar12;
    }
    lVar10 = (longlong)(*(int *)(param_1 + 0x78) + -1);
    if (*(uint *)(lVar13 + 0x18 + lVar10 * 0x20) < 0x200) goto LAB_1472dac5f;
  }
  local_68 = param_2;
  FUN_144ada54e(param_5,&local_60,0x4000);
  iVar7 = *(int *)(param_1 + 0x78);
  uVar9 = iVar7 + 1;
  *(uint *)(param_1 + 0x78) = uVar9;
  if (*(uint *)(param_1 + 0x7c) < uVar9) {
    local_6c = local_4c;
    FUN_1472dedf2(lVar12);
    local_4c = local_6c;
  }
  lVar11 = *(longlong *)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    lVar11 = lVar12;
  }
  lVar13 = (longlong)iVar7 * 0x20;
  *(undefined8 *)(lVar11 + lVar13) = local_60;
  *(undefined8 *)(lVar11 + 8 + lVar13) = local_58;
  *(undefined4 *)(lVar11 + 0x10 + lVar13) = local_50;
  *(undefined4 *)(lVar11 + 0x14 + lVar13) = local_4c;
  *(undefined4 *)(lVar11 + 0x18 + lVar13) = 0;
  lVar11 = *(longlong *)(param_1 + 0x70);
  lVar10 = (longlong)(*(int *)(param_1 + 0x78) + -1);
  param_2 = local_68;
LAB_1472dac5f:
  if (lVar11 != 0) {
    lVar12 = lVar11;
  }
  dVar2 = param_3[2];
  dVar3 = param_3[1];
  dVar4 = param_4[2];
  lVar10 = lVar10 * 0x20;
  dVar5 = param_4[1];
  dVar6 = *param_4;
  pfVar8 = *(float **)(lVar12 + lVar10);
  *pfVar8 = (float)*param_3;
  pfVar8[1] = (float)dVar3;
  pfVar8[2] = (float)dVar2;
  pfVar8[3] = 0.0;
  pfVar8[4] = (float)dVar6;
  pfVar8[5] = (float)dVar5;
  pfVar8[6] = (float)dVar4;
  pfVar8[7] = 0.0;
  *(longlong *)(lVar12 + lVar10) = *(longlong *)(lVar12 + lVar10) + 0x20;
  piVar1 = (int *)(lVar12 + 0x18 + lVar10);
  *piVar1 = *piVar1 + 1;
  param_1 = param_1 + (ulonglong)*(uint *)(param_1 + 0xe8) * 0x20;
  iVar7 = *(int *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x90) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar7 + 1U) {
    FUN_1472dee62((longlong *)(param_1 + 0x88),iVar7);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar7 * 8) = *param_2;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472dad38 FUN_1472dad38 body=42 status=ok
// SIG undefined FUN_1472dad38(void)

void FUN_1472dad38(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472dad82 FUN_1472dad82 body=96 status=ok
// SIG undefined FUN_1472dad82(void)

undefined8 FUN_1472dad82(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eded74();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca46f60,1);
  return uVar3;
}



// FUNCTION 1472dade2 FUN_1472dade2 body=52 status=ok
// SIG undefined FUN_1472dade2(void)

void FUN_1472dade2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472dae16 FUN_1472dae16 body=42 status=ok
// SIG undefined FUN_1472dae16(void)

void FUN_1472dae16(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472dae60 FUN_1472dae60 body=96 status=ok
// SIG undefined FUN_1472dae60(void)

undefined8 FUN_1472dae60(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f9292a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca46fe8,1);
  return uVar3;
}



// FUNCTION 1472daec0 FUN_1472daec0 body=52 status=ok
// SIG undefined FUN_1472daec0(void)

void FUN_1472daec0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472daef4 FUN_1472daef4 body=63 status=ok
// SIG undefined FUN_1472daef4(void)

undefined8 FUN_1472daef4(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x3e0))();
    if (lVar2 != 0) {
      uVar3 = FUN_1472b1642(lVar2 + 0x4298,param_2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1472daf34 FUN_1472daf34 body=363 status=ok
// SIG undefined FUN_1472daf34(void)

void FUN_1472daf34(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  int *local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x10);
  local_68 = param_2;
  if (lVar4 == 0) {
    iVar5 = 0;
    iVar9 = 0;
    iVar8 = 0;
    iVar6 = 0;
  }
  else {
    lVar7 = 0;
    iVar6 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar5 = 0;
    local_60 = lVar4;
    do {
      lVar1 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)(int)lVar7 * 8);
      iVar3 = *(int *)(lVar1 + 0x4d8);
      if (iVar6 < *(int *)(lVar1 + 0x4d8)) {
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      iVar3 = *(int *)(lVar1 + 0x4dc);
      if (iVar8 < *(int *)(lVar1 + 0x4dc)) {
        iVar3 = iVar8;
      }
      iVar8 = iVar3;
      if (iVar9 < *(int *)(lVar1 + 0x4e0)) {
        iVar9 = *(int *)(lVar1 + 0x4e0);
      }
      if (iVar5 < *(int *)(lVar1 + 0x4e4)) {
        iVar5 = *(int *)(lVar1 + 0x4e4);
      }
      if (*(char *)(param_1 + 0x23f4) == '\x01') {
        FUN_147cf0e92(param_1);
        if ((longlong)local_50 != 0) {
          lVar4 = 0;
          iVar3 = iVar6;
          iVar2 = iVar8;
          do {
            lVar1 = *(longlong *)(local_58 + lVar4);
            iVar6 = *(int *)(lVar1 + 0x4d8);
            if (iVar3 < *(int *)(lVar1 + 0x4d8)) {
              iVar6 = iVar3;
            }
            iVar8 = *(int *)(lVar1 + 0x4dc);
            if (iVar2 < *(int *)(lVar1 + 0x4dc)) {
              iVar8 = iVar2;
            }
            if (iVar9 < *(int *)(lVar1 + 0x4e0)) {
              iVar9 = *(int *)(lVar1 + 0x4e0);
            }
            if (iVar5 < *(int *)(lVar1 + 0x4e4)) {
              iVar5 = *(int *)(lVar1 + 0x4e4);
            }
            lVar4 = lVar4 + 8;
            iVar3 = iVar6;
            iVar2 = iVar8;
          } while ((longlong)local_50 * 8 != lVar4);
        }
        lVar4 = local_60;
        if (local_58 != 0) {
          FUN_1400020a8();
          lVar4 = local_60;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar4);
  }
  *local_68 = iVar6;
  local_68[1] = iVar8;
  local_68[2] = iVar9;
  local_68[3] = iVar5;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472db0a0 FUN_1472db0a0 body=111 status=ok
// SIG undefined FUN_1472db0a0(void)

void FUN_1472db0a0(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = param_1 + 0x3118;
  if (*(longlong *)(param_1 + 0x3128) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x3128);
  }
  uVar4 = param_3 + 0x1f;
  if (-1 < (int)param_3) {
    uVar4 = param_3;
  }
  if (((*(uint *)(lVar3 + (longlong)((int)uVar4 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) &&
     (lVar3 = (longlong)(int)param_3,
     (*(byte *)(*(longlong *)(param_1 + 0x31d8) + 0x10 + lVar3 * 0x18) & 2) != 0)) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x3d20) + lVar3 * 8);
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x3d20) + 4 + lVar3 * 8);
    *(undefined1 *)param_2 = 1;
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined1 *)(param_2 + 1) = 0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 1472db110 FUN_1472db110 body=138 status=ok
// SIG undefined FUN_1472db110(void)

longlong FUN_1472db110(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_14031f528(param_1 + 8);
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14a2efea8;
  FUN_142fe4fde(param_1 + 0x1c0);
  *(undefined1 *)(param_1 + 0x348) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 1;
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_3 + 0x348);
  *(undefined8 *)(param_1 + 0x364) = 0;
  *(undefined8 *)(param_1 + 0x36c) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  return param_1;
}



// FUNCTION 1472db19a FUN_1472db19a body=78 status=ok
// SIG undefined FUN_1472db19a(void)

void FUN_1472db19a(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1472df460();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_1472df4e6();
      return;
    }
  }
  return;
}



// FUNCTION 1472db1ea FUN_1472db1ea body=88 status=ok
// SIG undefined FUN_1472db1ea(void)

undefined8 * FUN_1472db1ea(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1472dfa48(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1472db242 FUN_1472db242 body=81 status=ok
// SIG undefined FUN_1472db242(void)

void FUN_1472db242(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472db294 FUN_1472db294 body=58 status=ok
// SIG undefined FUN_1472db294(void)

undefined4 FUN_1472db294(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  (**(code **)(**(longlong **)(param_2 + 0x218) + 0x3e0))();
  lVar1 = (**(code **)(**(longlong **)(param_2 + 0x218) + 0x3e0))();
  return *(undefined4 *)(lVar1 + 0x5004);
}



// FUNCTION 1472db2ce FUN_1472db2ce body=207 status=ok
// SIG undefined FUN_1472db2ce(void)

void FUN_1472db2ce(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined4 param_14)

{
  FUN_140094833(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                param_12,param_13,param_14,1);
  return;
}



// FUNCTION 1472db39e FUN_1472db39e body=117 status=ok
// SIG undefined FUN_1472db39e(void)

undefined8 FUN_1472db39e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_1472dfbb6(&local_30,param_3);
  FUN_1472dface(param_1 + 0x58,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472db424 FUN_1472db424 body=117 status=ok
// SIG undefined FUN_1472db424(void)

undefined8 FUN_1472db424(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_1472dfbb6(&local_30,param_3);
  FUN_1472dface(param_1 + 0x70,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472db4aa FUN_1472db4aa body=68 status=ok
// SIG undefined FUN_1472db4aa(void)

void FUN_1472db4aa(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_3 + 0x40) + 0x3e0))();
  uVar2 = FUN_14001cc68(0x4c8,0x10);
  FUN_1472db4ee(uVar2,param_2,uVar1,param_3);
  return;
}



// FUNCTION 1472db4ee FUN_1472db4ee body=317 status=ok
// SIG undefined FUN_1472db4ee(void)

undefined8 *
FUN_1472db4ee(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a2f0ba8;
  param_1[1] = &PTR_FUN_14a2f1c30;
  param_1[2] = 0;
  puVar1 = param_1 + 3;
  FUN_1404606c4(puVar1);
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = param_3 + 0x7e1;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0x8000000000;
  param_1[0x97] = param_3 + 0x7e1;
  param_1[0x98] = param_4;
  param_1[2] = param_3;
  FUN_1449b47aa(param_1 + 0xb,param_1 + 1);
  if (param_1[0x98] != 0) {
    *(undefined8 **)(param_1[0x98] + 0x178) = param_1 + 1;
  }
  (**(code **)(*param_3 + 0x60))(param_3,param_2,0);
  FUN_141763a12(param_1[0x13],param_2,param_1 + 0x14);
  FUN_1449b3f6c(param_1[0x13],param_2,puVar1);
  FUN_1449b3dbc(param_1 + 0xb,param_2,puVar1);
  return param_1;
}



// FUNCTION 1472db62c FUN_1472db62c body=62 status=ok
// SIG undefined FUN_1472db62c(void)

void FUN_1472db62c(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_3 + 0x3e0))(param_3);
  uVar2 = FUN_14001cc68(0x4c8,0x10);
  FUN_1472db4ee(uVar2,param_2,uVar1,0);
  return;
}



// FUNCTION 1472db6b0 FUN_1472db6b0 body=303 status=ok
// SIG undefined FUN_1472db6b0(void)

void FUN_1472db6b0(undefined8 param_1,longlong param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    fVar5 = (float)(uint)(*(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x54));
    uVar4 = (ulonglong)*(byte *)(param_2 + 0x21);
    fVar6 = param_3[1] * fVar5;
    uVar1 = *(undefined4 *)(param_2 + 0x70);
    fVar7 = (float)(uint)(*(int *)(param_2 + 0x50) * *(int *)(param_2 + 0x10));
    fVar8 = *param_3 * fVar7;
    fVar5 = fVar5 * param_4[1];
    fVar7 = fVar7 * *param_4;
    local_40 = CONCAT44(-((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1),
                        -((int)ROUND(-0.5 - (fVar7 + fVar7)) >> 1));
    local_48 = CONCAT44((int)ROUND(fVar6 + fVar6 + -0.5) >> 1,(int)ROUND(fVar8 + fVar8 + -0.5) >> 1)
    ;
    uVar2 = *(undefined4 *)(param_2 + 0x74);
    uVar3 = FUN_143784a99();
    if (uVar4 != 0) {
      param_2 = param_2 + 0x24;
      do {
        local_58 = 0;
        local_68 = uVar2;
        local_60 = uVar3;
        FUN_14043a1ca(DAT_14ca712d8,param_2,uVar1,&local_48);
        param_2 = param_2 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472db7ea FUN_1472db7ea body=69 status=ok
// SIG undefined FUN_1472db7ea(void)

void FUN_1472db7ea(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_147cccf74(&DAT_14cb00cc8);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472db86e FUN_1472db86e body=38 status=ok
// SIG undefined FUN_1472db86e(void)

undefined8 FUN_1472db86e(undefined8 param_1,int param_2)

{
  FUN_145a40e54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472db894 FUN_1472db894 body=38 status=ok
// SIG undefined FUN_1472db894(void)

undefined8 FUN_1472db894(undefined8 param_1,int param_2)

{
  FUN_14006dea6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472db8d2 FUN_1472db8d2 body=123 status=ok
// SIG undefined FUN_1472db8d2(void)

longlong FUN_1472db8d2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_147432e9e();
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined2 *)(param_1 + 0xe4) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"PlatformData",1);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_1472db94e();
  FUN_147440c52(param_1,param_1,uVar1,uVar2,&DAT_14ca46af8,0);
  return param_1;
}



// FUNCTION 1472db94e FUN_1472db94e body=258 status=ok
// SIG undefined FUN_1472db94e(void)

void FUN_1472db94e(void)

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
              0x110) < DAT_14ca46b78) {
    FUN_144b3d300(&DAT_14ca46b78);
    if (DAT_14ca46b78 == -1) {
      FUN_1472dba52(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x31;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca46af8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fe8f15);
      _Init_thread_footer(&DAT_14ca46b78);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472dba52 FUN_1472dba52 body=226 status=ok
// SIG undefined FUN_1472dba52(void)

longlong * FUN_1472dba52(longlong *param_1)

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
  pcVar13 = FUN_1472dbb36;
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



// FUNCTION 1472dbb36 FUN_1472dbb36 body=136 status=ok
// SIG undefined FUN_1472dbb36(void)

code * FUN_1472dbb36(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutCombinedRTWriteMask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472dbbbe;
}



// FUNCTION 1472dbbbe FUN_1472dbbbe body=136 status=ok
// SIG undefined FUN_1472dbbbe(void)

code * FUN_1472dbbbe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RTWriteMaskInputs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureMetadata";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472dbc46;
}



// FUNCTION 1472dbc46 FUN_1472dbc46 body=130 status=ok
// SIG undefined FUN_1472dbc46(void)

undefined1 * FUN_1472dbc46(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReferenceInput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x32;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472dbcc8;
}



// FUNCTION 1472dbcd6 FUN_1472dbcd6 body=38 status=ok
// SIG undefined FUN_1472dbcd6(void)

undefined8 FUN_1472dbcd6(undefined8 param_1,int param_2)

{
  FUN_1472dbdd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472dbcfc FUN_1472dbcfc body=21 status=ok
// SIG undefined FUN_1472dbcfc(void)

undefined * FUN_1472dbcfc(void)

{
  FUN_1472dc096();
  return &DAT_14ca46c8c;
}



// FUNCTION 1472dbd14 FUN_1472dbd14 body=168 status=ok
// SIG undefined FUN_1472dbd14(void)

void FUN_1472dbd14(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  
  plVar6 = *(longlong **)(param_1 + 0xa8);
  plVar4 = plVar6 + -10;
  if (plVar6 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar2 = *(uint *)(param_1 + 0x2c);
  iVar8 = 1;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    uVar7 = uVar1;
    if ((int)uVar1 < (int)uVar2) {
      uVar7 = uVar2;
    }
    uVar3 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    iVar8 = 1;
    if (uVar7 != 0) {
      iVar8 = (uVar3 ^ 0xffffffe0) + 0x21;
    }
  }
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  if (((*(uint *)((longlong)plVar4 + 0xbc) != uVar1) || (*(uint *)(plVar4 + 0x18) != uVar2)) ||
     (*(int *)((longlong)plVar4 + 0xc4) != iVar8)) {
    *(uint *)((longlong)plVar4 + 0xbc) = uVar1;
    *(uint *)(plVar4 + 0x18) = uVar2;
    *(int *)((longlong)plVar4 + 0xc4) = iVar8;
    FUN_1447fd100(plVar4,uVar5);
    plVar6 = *(longlong **)(param_1 + 0xa8);
  }
  uVar5 = (**(code **)(*plVar6 + 8))(plVar6,param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  return;
}



// FUNCTION 1472dbdd6 FUN_1472dbdd6 body=117 status=ok
// SIG undefined FUN_1472dbdd6(void)

void FUN_1472dbdd6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a2f1890;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1472dbef4(param_1 + 8);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1472dbe4c FUN_1472dbe4c body=38 status=ok
// SIG undefined FUN_1472dbe4c(void)

undefined8 FUN_1472dbe4c(undefined8 param_1,int param_2)

{
  FUN_1472dbdd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472dbe72 FUN_1472dbe72 body=126 status=ok
// SIG undefined FUN_1472dbe72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1472dbe72(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Rendering/CustomRenderPass.h",0x15,
                L"Pure virtual not implemented (%s)",L"ICustomRenderPass::GetTypeName");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca47504) {
    FUN_144b3d300(&DAT_14ca47504);
    if (DAT_14ca47504 == -1) {
      _DAT_14ca474fc = 0;
      _Init_thread_footer(&DAT_14ca47504);
    }
  }
  return &DAT_14ca474fc;
}



// FUNCTION 1472dbef4 FUN_1472dbef4 body=54 status=ok
// SIG undefined FUN_1472dbef4(void)

void FUN_1472dbef4(longlong *param_1)

{
  FUN_1472dbf2a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1472dbf2a FUN_1472dbf2a body=361 status=ok
// SIG undefined FUN_1472dbf2a(void)

void FUN_1472dbf2a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
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
      puVar2 = *(undefined8 **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144727cd0(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar4 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
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



// FUNCTION 1472dc096 FUN_1472dc096 body=104 status=ok
// SIG undefined FUN_1472dc096(void)

void FUN_1472dc096(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca46c94) {
    FUN_144b3d300(&DAT_14ca46c94);
    if (DAT_14ca46c94 == -1) {
      FUN_1446f470e(&DAT_14ca46c8c,L"FSceneCapturePass",1);
      _Init_thread_footer(&DAT_14ca46c94);
      return;
    }
  }
  return;
}



// FUNCTION 1472dc0fe FUN_1472dc0fe body=95 status=ok
// SIG undefined FUN_1472dc0fe(void)

void FUN_1472dc0fe(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  if (~param_2 + iVar4 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar4) << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 1472dc15e FUN_1472dc15e body=138 status=ok
// SIG undefined FUN_1472dc15e(void)

code * FUN_1472dc15e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UpdatedCellIds";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000311;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f08e32;
}



// FUNCTION 1472dc1e8 FUN_1472dc1e8 body=138 status=ok
// SIG undefined FUN_1472dc1e8(void)

code * FUN_1472dc1e8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceHierarchyItemChunks";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000030f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f08daa;
}



// FUNCTION 1472dc272 FUN_1472dc272 body=138 status=ok
// SIG undefined FUN_1472dc272(void)

code * FUN_1472dc272(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceHierarchyCellBlockData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< FCellBlockData >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000030d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472dc2fc;
}



// FUNCTION 1472dc2fc FUN_1472dc2fc body=138 status=ok
// SIG undefined FUN_1472dc2fc(void)

code * FUN_1472dc2fc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxCells";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000030b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472dc386;
}



// FUNCTION 1472dc386 FUN_1472dc386 body=138 status=ok
// SIG undefined FUN_1472dc386(void)

code * FUN_1472dc386(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FirstLevel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0000030a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472dc410;
}



// FUNCTION 1472dc410 FUN_1472dc410 body=138 status=ok
// SIG undefined FUN_1472dc410(void)

code * FUN_1472dc410(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalCellCoordMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000309;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472dc49a;
}



// FUNCTION 1472dc49a FUN_1472dc49a body=138 status=ok
// SIG undefined FUN_1472dc49a(void)

code * FUN_1472dc49a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CellBlockDimLog2";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000308;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472dc524;
}



// FUNCTION 1472dc524 FUN_1472dc524 body=138 status=ok
// SIG undefined FUN_1472dc524(void)

code * FUN_1472dc524(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumCellsPerBlockLog2";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000307;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f08ebc;
}



// FUNCTION 1472dc5b2 FUN_1472dc5b2 body=112 status=ok
// SIG undefined FUN_1472dc5b2(void)

ulonglong FUN_1472dc5b2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1472dc5ec;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_1472dc5ec:
  return param_2 & 0xffffffff;
}



// FUNCTION 1472dc622 FUN_1472dc622 body=95 status=ok
// SIG undefined FUN_1472dc622(void)

longlong FUN_1472dc622(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  FUN_1471d266a(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28));
  FUN_1474409b8(param_1 + 0xf2,*(undefined8 *)(param_2 + 0x28),L"ViewId",0);
  return param_1;
}



// FUNCTION 1472dc682 FUN_1472dc682 body=138 status=ok
// SIG undefined FUN_1472dc682(void)

code * FUN_1472dc682(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvTestTargetSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000039b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146305fe6;
}



// FUNCTION 1472dc70c FUN_1472dc70c body=138 status=ok
// SIG undefined FUN_1472dc70c(void)

code * FUN_1472dc70c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BoundsExtentTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000398;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472dc796;
}



// FUNCTION 1472dc796 FUN_1472dc796 body=138 status=ok
// SIG undefined FUN_1472dc796(void)

code * FUN_1472dc796(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BoundsCenterSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000397;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472dc820;
}



// FUNCTION 1472dc820 FUN_1472dc820 body=138 status=ok
// SIG undefined FUN_1472dc820(void)

code * FUN_1472dc820(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BoundsCenterTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000396;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5a94c;
}



// FUNCTION 1472dc8aa FUN_1472dc8aa body=138 status=ok
// SIG undefined FUN_1472dc8aa(void)

code * FUN_1472dc8aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000394;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630606e;
}



// FUNCTION 1472dc938 FUN_1472dc938 body=107 status=ok
// SIG undefined FUN_1472dc938(void)

void FUN_1472dc938(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar2 = 1;
  if (1 < uVar1) {
    if (*(uint *)(param_1 + 0x94) < 2) {
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
  }
  *(uint *)(param_1 + 0x94) = uVar2;
  FUN_1472dc9a4();
  return;
}



// FUNCTION 1472dc9a4 FUN_1472dc9a4 body=147 status=ok
// SIG undefined FUN_1472dc9a4(void)

void FUN_1472dc9a4(void *param_1,int param_2,uint param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x88);
  if (param_3 < 2) {
    if (_Src != (void *)0x0) {
      memmove(param_1,_Src,(longlong)param_2 * 0x88);
      FUN_142fea3d2((longlong)param_1 + 0x88,0);
      return;
    }
  }
  else {
    FUN_142fea3d2((longlong)param_1 + 0x88,param_3);
    if (_Src == (void *)0x0) {
      memmove(*(void **)((longlong)param_1 + 0x88),param_1,(longlong)param_2 * 0x88);
      return;
    }
  }
  return;
}



// FUNCTION 1472dca38 FUN_1472dca38 body=122 status=ok
// SIG undefined FUN_1472dca38(void)

void FUN_1472dca38(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 1472dcab2 FUN_1472dcab2 body=85 status=ok
// SIG undefined FUN_1472dcab2(void)

void FUN_1472dcab2(longlong param_1,int param_2)

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
  FUN_142fea59a();
  return;
}



// FUNCTION 1472dcb08 FUN_1472dcb08 body=272 status=ok
// SIG undefined FUN_1472dcb08(void)

void FUN_1472dcb08(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_1472dcc18(*param_2,lVar11,param_4,param_5);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1472dcc18 FUN_1472dcc18 body=149 status=ok
// SIG undefined FUN_1472dcc18(void)

void FUN_1472dcc18(undefined8 param_1,undefined8 param_2,longlong param_3,double *param_4)

{
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = (float)param_4[3] / 0.9659258;
  local_10 = (float)(param_4[2] + *(double *)(param_3 + 0x1040));
  local_14 = (float)(param_4[1] + *(double *)(param_3 + 0x1038));
  local_18 = (float)(*param_4 + *(double *)(param_3 + 0x1030));
  FUN_14021cfd2();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472dccae FUN_1472dccae body=38 status=ok
// SIG undefined FUN_1472dccae(void)

undefined8 FUN_1472dccae(undefined8 param_1,int param_2)

{
  FUN_14177e49e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472dccd8 FUN_1472dccd8 body=132 status=ok
// SIG undefined FUN_1472dccd8(void)

void FUN_1472dccd8(longlong param_1,int param_2)

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



// FUNCTION 1472dcd5e FUN_1472dcd5e body=69 status=ok
// SIG undefined FUN_1472dcd5e(void)

undefined8 * FUN_1472dcd5e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2f0aa8;
  FUN_1472dcda3(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472dcda3 FUN_1472dcda3 body=47 status=ok
// SIG undefined FUN_1472dcda3(void)

void FUN_1472dcda3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1472dcdd2 FUN_1472dcdd2 body=38 status=ok
// SIG undefined FUN_1472dcdd2(void)

undefined8 FUN_1472dcdd2(undefined8 param_1,int param_2)

{
  FUN_1472dcdfe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472dcdfe FUN_1472dcdfe body=94 status=ok
// SIG undefined FUN_1472dcdfe(void)

void FUN_1472dcdfe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a2f0ba8;
  FUN_142c2fffa(param_1[0x13]);
  if (param_1[0x98] != 0) {
    *(undefined8 *)(param_1[0x98] + 0x178) = 0;
  }
  FUN_1400f59fa(param_1 + 0x14);
  FUN_1400f5996(param_1 + 0x95);
  FUN_14177e49e(param_1 + 1);
  return;
}



// FUNCTION 1472dce5c FUN_1472dce5c body=29 status=ok
// SIG undefined FUN_1472dce5c(void)

undefined8 FUN_1472dce5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472dce79 FUN_1472dce79 body=305 status=ok
// SIG undefined FUN_1472dce79(void)

void FUN_1472dce79(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_1472db94e();
  FUN_1472dd055(lVar11,param_2,param_4);
  FUN_1472dcfaa(*param_2,lVar11,*param_5,*param_6);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fa8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1472dcfaa FUN_1472dcfaa body=170 status=ok
// SIG undefined FUN_1472dcfaa(void)

void FUN_1472dcfaa(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined2 *)(param_1 + 0xe0);
  uVar2 = *(undefined2 *)(param_1 + 0xe2);
  lVar3 = param_2[2];
  FUN_144ab3e68(*param_2,param_2 + 1,param_4,param_3);
  local_48 = &local_32;
  local_32 = (undefined2)param_4;
  local_50 = &local_34;
  local_58 = &local_36;
  local_38 = uVar1;
  local_36 = uVar2;
  local_34 = (short)lVar3;
  FUN_144ab3f26(*param_2,*param_2 + 0x38,param_2 + 3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472dd055 FUN_1472dd055 body=36 status=ok
// SIG undefined FUN_1472dd055(void)

void FUN_1472dd055(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  void *_Dst_00;
  undefined8 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong _Size;
  undefined1 auStack_a8 [46];
  undefined2 uStack_7a;
  undefined2 uStack_78;
  ushort uStack_76;
  uint uStack_74;
  longlong lStack_70;
  ulonglong uStack_68;
  undefined2 *puStack_60;
  longlong lStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  param_2 = (undefined8 *)*param_2;
  if ((byte)((*(byte *)(param_2 + 0x1a) & 0xe) - 6) < 4) {
    FUN_143236b9c();
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar13 = (ulonglong)uRam000000014ca46b34;
  puVar4 = (undefined2 *)*param_2;
  puVar11 = (undefined2 *)(((longlong)puVar4 >> 0x18) + (longlong)param_2);
  if (((ulonglong)puVar4 & 1) == 0) {
    puVar11 = puVar4;
  }
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puStack_60 = puVar11 + (longlong)*(int *)(param_2 + 1) * 4;
    uStack_74 = uRam000000014ca46b34;
    lStack_70 = param_3;
    do {
      uVar2 = puVar11[2];
      uStack_76 = puVar11[3];
      _Size = (ulonglong)uStack_76;
      uStack_7a = *puVar11;
      uStack_78 = puVar11[1];
      uVar3 = *(uint *)(param_1 + 2);
      uStack_68 = (ulonglong)uVar3;
      iVar12 = uVar3 + uStack_76;
      lVar5 = *param_1;
      puVar1 = (ulonglong *)(lVar5 + 0x10);
      _Dst_00 = *(void **)(lVar5 + 0x10);
      uVar6 = *(ulonglong *)(lVar5 + 0x18);
      uVar13 = (longlong)_Dst_00 + _Size;
      if (uVar3 == 0) {
        if (uVar6 < uVar13) {
          FUN_140023dd8(puVar1,uStack_76 + 1);
          _Dst_00 = (void *)*puVar1;
          uVar13 = (longlong)_Dst_00 + _Size;
        }
        *puVar1 = uVar13;
        _Dst = _Dst_00;
      }
      else if (uVar6 < uVar13) {
        uVar13 = (longlong)_Dst_00 + (longlong)iVar12;
        _Dst = _Dst_00;
        if (uVar6 < uVar13) {
          FUN_140023dd8(puVar1,iVar12 + 1);
          _Dst = (void *)*puVar1;
          uVar13 = (longlong)iVar12 + (longlong)_Dst;
        }
        *puVar1 = uVar13;
        memcpy(_Dst,(void *)param_1[1],(longlong)(int)param_1[2]);
        _Dst_00 = (void *)((longlong)(int)param_1[2] + (longlong)_Dst);
      }
      else {
        _Dst = (void *)param_1[1];
        *puVar1 = uVar13;
      }
      param_3 = lStack_70;
      memcpy(_Dst_00,(void *)((ulonglong)uVar2 + lStack_70),_Size);
      param_1[1] = (longlong)_Dst;
      *(int *)(param_1 + 2) = iVar12;
      lVar10 = *param_1;
      puVar1 = (ulonglong *)(lVar10 + 0x38);
      lVar5 = (longlong)(int)param_1[4] + 1;
      puVar7 = *(undefined8 **)(lVar10 + 0x38);
      if ((longlong)(int)param_1[4] == 0) {
        puVar7 = (undefined8 *)((longlong)puVar7 + 1U & 0xfffffffffffffffe);
        puVar9 = puVar7 + 1;
        puVar8 = puVar7;
        if (*(undefined8 **)(lVar10 + 0x40) < puVar9) {
          FUN_140023dd8(puVar1,10);
          puVar7 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
          puVar9 = puVar7 + 1;
          puVar8 = puVar7;
        }
LAB_1446fe406:
        *puVar1 = (ulonglong)puVar9;
        uVar13 = (ulonglong)uStack_74;
      }
      else {
        puVar9 = puVar7 + 1;
        if (puVar9 <= *(undefined8 **)(lVar10 + 0x40)) {
          puVar8 = (undefined8 *)param_1[3];
          goto LAB_1446fe406;
        }
        puVar8 = (undefined8 *)((longlong)puVar7 + 1U & 0xfffffffffffffffe);
        puVar7 = puVar8 + lVar5;
        if (*(undefined8 **)(lVar10 + 0x40) < puVar7) {
          FUN_140023dd8(puVar1);
          puVar8 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
          puVar7 = puVar8 + lVar5;
        }
        *puVar1 = (ulonglong)puVar7;
        param_3 = lStack_70;
        puVar7 = puVar8;
        if ((int)param_1[4] < 1) {
          uVar13 = (ulonglong)uStack_74;
        }
        else {
          lVar10 = 0;
          uVar13 = (ulonglong)uStack_74;
          do {
            *puVar7 = *(undefined8 *)(param_1[3] + lVar10 * 8);
            lVar10 = lVar10 + 1;
            puVar7 = puVar7 + 1;
          } while (lVar10 < (int)param_1[4]);
        }
      }
      *(undefined2 *)puVar7 = uStack_7a;
      *(undefined2 *)((longlong)puVar7 + 2) = uStack_78;
      *(short *)((longlong)puVar7 + 4) = (short)uStack_68;
      *(ushort *)((longlong)puVar7 + 6) = uStack_76;
      param_1[3] = (longlong)puVar8;
      *(int *)(param_1 + 4) = (int)lVar5;
      puVar11 = puVar11 + 4;
    } while (puVar11 != puStack_60);
  }
  uStack_50 = (undefined4)uVar13;
  lStack_58 = param_3;
  FUN_140023e89(param_1,param_2,&lStack_58,CONCAT71((int7)(uVar13 >> 8),1));
  if ((uStack_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472dd07a FUN_1472dd07a body=56 status=ok
// SIG undefined FUN_1472dd07a(void)

undefined8 * FUN_1472dd07a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2f0c50;
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472dd0b2 FUN_1472dd0b2 body=755 status=ok
// SIG undefined FUN_1472dd0b2(void)

void FUN_1472dd0b2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  int local_94 [3];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar7 = *(uint *)(param_1 + 0x18) << 5;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FTileTexCoordVertexBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_94[1] = 0;
  local_94[2] = 0x4001;
  local_94[0] = iVar7;
  if ((*(uint *)(param_1 + 0x18) & 0x7ffffff) == 0) {
    FUN_14570b4be(param_2,&local_88,0x4001,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,local_94);
    *(undefined4 *)(local_a0 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,local_94);
    *(undefined4 *)(local_a0 + 0x18) = 8;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  if (plVar1 != &local_a0) {
    lVar5 = *plVar1;
    *plVar1 = local_a0;
    local_a0 = 0;
    if (lVar5 == 0) goto LAB_1472dd1bb;
    LOCK();
    puVar2 = (uint *)(lVar5 + 8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_a0 != 0) {
    LOCK();
    puVar2 = (uint *)(local_a0 + 8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1472dd1bb:
  lVar5 = *plVar1;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  local_b8 = iVar7;
  lVar5 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar4 = 3;
    uVar6 = 0;
    do {
      *(undefined8 *)(lVar5 + (ulonglong)(uVar4 - 3) * 8) = 0;
      *(undefined8 *)(lVar5 + (ulonglong)(uVar4 - 2) * 8) = 0x3f80000000000000;
      *(undefined1 **)(lVar5 + (ulonglong)(uVar4 - 1) * 8) = &DAT_3f8000003f800000;
      *(undefined8 *)(lVar5 + (ulonglong)uVar4 * 8) = 0x3f800000;
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 4;
    } while (uVar6 < *(uint *)(param_1 + 0x18));
  }
  lVar5 = *plVar1;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472dd3a6 FUN_1472dd3a6 body=56 status=ok
// SIG undefined FUN_1472dd3a6(void)

undefined8 * FUN_1472dd3a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2f0cc0;
  FUN_144725486();
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472dd3de FUN_1472dd3de body=774 status=ok
// SIG undefined FUN_1472dd3de(void)

void FUN_1472dd3de(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  short sVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  int local_94 [3];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar4 = *(int *)(param_1 + 0x18) * 0xc;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FTileIndexBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_94[1] = 2;
  local_94[2] = 0x8001;
  local_94[0] = iVar4;
  if (iVar4 == 0) {
    FUN_14570b4be(param_2,&local_88,0x8001,2);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,local_94);
    *(undefined4 *)(local_a0 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,local_94);
    *(undefined4 *)(local_a0 + 0x18) = 8;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  if (plVar1 != &local_a0) {
    lVar6 = *plVar1;
    *plVar1 = local_a0;
    local_a0 = 0;
    if (lVar6 == 0) goto LAB_1472dd4ea;
    LOCK();
    puVar2 = (uint *)(lVar6 + 8);
    uVar7 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_a0 != 0) {
    LOCK();
    puVar2 = (uint *)(local_a0 + 8);
    uVar7 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1472dd4ea:
  lVar6 = *plVar1;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  local_b8 = iVar4;
  lVar6 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar6,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    sVar5 = 3;
    uVar7 = 5;
    uVar8 = 0;
    do {
      *(short *)(lVar6 + (ulonglong)(uVar7 - 5) * 2) = sVar5 + -3;
      *(short *)(lVar6 + (ulonglong)(uVar7 - 4) * 2) = sVar5 + -2;
      *(short *)(lVar6 + (ulonglong)(uVar7 - 3) * 2) = sVar5 + -1;
      *(short *)(lVar6 + (ulonglong)(uVar7 - 2) * 2) = sVar5 + -3;
      *(short *)(lVar6 + (ulonglong)(uVar7 - 1) * 2) = sVar5 + -1;
      *(short *)(lVar6 + (ulonglong)uVar7 * 2) = sVar5;
      uVar8 = uVar8 + 1;
      sVar5 = sVar5 + 4;
      uVar7 = uVar7 + 6;
    } while (uVar8 < *(uint *)(param_1 + 0x18));
  }
  lVar6 = *plVar1;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar6);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472dd6fe FUN_1472dd6fe body=38 status=ok
// SIG undefined FUN_1472dd6fe(void)

undefined8 FUN_1472dd6fe(undefined8 param_1,int param_2)

{
  FUN_146305b54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472dd72a FUN_1472dd72a body=294 status=ok
// SIG undefined FUN_1472dd72a(void)

undefined4 * FUN_1472dd72a(longlong param_1,undefined4 *param_2,uint *param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1472dd852(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  local_48[1] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar1 = FUN_1472dd938(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_48[2] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[1] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1472dda4c(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472dd852 FUN_1472dd852 body=230 status=ok
// SIG undefined FUN_1472dd852(void)

int * FUN_1472dd852(longlong *param_1,int *param_2)

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
      FUN_1447cc1b4(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xc) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 1472dd938 FUN_1472dd938 body=138 status=ok
// SIG undefined FUN_1472dd938(void)

void FUN_1472dd938(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar3 * 0xc) == *param_3) {
          FUN_1472dd9c2(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_1472dd9a0;
        }
        iVar3 = *(int *)(*param_1 + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_1472dd9a0:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1472dd9c2 FUN_1472dd9c2 body=138 status=ok
// SIG undefined FUN_1472dd9c2(void)

void FUN_1472dd9c2(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0xc + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc) = param_2;
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
      puVar7 = puVar7 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1472dda4c FUN_1472dda4c body=419 status=ok
// SIG undefined FUN_1472dda4c(void)

void FUN_1472dda4c(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0xc);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 8 + lVar6 * 0xc) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 4 + lVar6 * 0xc) =
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



// FUNCTION 1472ddbf0 FUN_1472ddbf0 body=116 status=ok
// SIG undefined FUN_1472ddbf0(void)

void FUN_1472ddbf0(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x10;
    if (0x10 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_14016d724(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1472ddc66 FUN_1472ddc66 body=59 status=ok
// SIG undefined FUN_1472ddc66(void)

void FUN_1472ddc66(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472ddca2(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_14016d724(param_1,*(undefined4 *)(param_1 + 0x48),iVar1,4);
  return;
}



// FUNCTION 1472ddca2 FUN_1472ddca2 body=105 status=ok
// SIG undefined FUN_1472ddca2(void)

ulonglong FUN_1472ddca2(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x10;
  if (0x10 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 1472ddd0c FUN_1472ddd0c body=144 status=ok
// SIG undefined FUN_1472ddd0c(void)

void FUN_1472ddd0c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 1;
  if (param_2 == 1) {
LAB_1472ddd21:
    uVar2 = (uint)uVar3;
    if ((uVar2 < 2) && (uVar1 = 1, *(longlong *)(param_1 + 0x40) == 0)) goto LAB_1472ddd4f;
    uVar4 = 0;
    uVar1 = uVar2;
    if (1 < uVar2) {
      uVar4 = uVar3 & 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
    uVar3 = FUN_144a3809e((longlong)param_2 * 0x3c,0);
    uVar3 = uVar3 / 0x3c;
    if (param_2 <= (int)uVar3) {
      if ((int)uVar3 < 1) goto LAB_1472ddd4f;
      goto LAB_1472ddd21;
    }
    uVar1 = 0x7fffffff;
    uVar4 = 0x7fffffff;
  }
  FUN_1446efa72(param_1 + 0x40,0,uVar4,0x3c);
LAB_1472ddd4f:
  *(uint *)(param_1 + 0x4c) = uVar1;
  return;
}



// FUNCTION 1472ddd9c FUN_1472ddd9c body=132 status=ok
// SIG undefined FUN_1472ddd9c(void)

void FUN_1472ddd9c(longlong param_1,int param_2)

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



// FUNCTION 1472dde22 FUN_1472dde22 body=62 status=ok
// SIG undefined FUN_1472dde22(void)

void FUN_1472dde22(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472dde60(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1472dde60 FUN_1472dde60 body=93 status=ok
// SIG undefined FUN_1472dde60(void)

ulonglong FUN_1472dde60(uint param_1,uint param_2)

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



// FUNCTION 1472ddebe FUN_1472ddebe body=135 status=ok
// SIG undefined FUN_1472ddebe(void)

void FUN_1472ddebe(longlong param_1)

{
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) == 1) {
    iVar2 = 0;
    uVar1 = 1;
  }
  else {
    FUN_14475fe8c(param_1 + 0x40,1);
    iVar2 = *(int *)(param_1 + 0x50);
    uVar1 = *(uint *)(param_1 + 0x54);
  }
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (uVar1 < iVar2 + 1U) {
    FUN_146f3c7b6(param_1 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 1) {
    FUN_14476002c(param_1 + 0x58,1);
  }
  FUN_144718544(param_1 + 0x58);
  FUN_1456b5576(param_1);
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 1472ddf46 FUN_1472ddf46 body=48 status=ok
// SIG undefined FUN_1472ddf46(void)

void FUN_1472ddf46(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1472ddf76 FUN_1472ddf76 body=62 status=ok
// SIG undefined FUN_1472ddf76(void)

void FUN_1472ddf76(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472ddfb4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,4);
  }
  return;
}



// FUNCTION 1472ddfb4 FUN_1472ddfb4 body=93 status=ok
// SIG undefined FUN_1472ddfb4(void)

ulonglong FUN_1472ddfb4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,4);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 1472de012 FUN_1472de012 body=93 status=ok
// SIG undefined FUN_1472de012(void)

void FUN_1472de012(longlong param_1,int param_2)

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
  FUN_1400f3f3a();
  return;
}



// FUNCTION 1472de070 FUN_1472de070 body=56 status=ok
// SIG undefined FUN_1472de070(void)

undefined8 * FUN_1472de070(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2f1070;
  FUN_144725486();
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472de0a8 FUN_1472de0a8 body=85 status=ok
// SIG undefined FUN_1472de0a8(void)

void FUN_1472de0a8(longlong param_1,int param_2)

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
  FUN_142ffb360();
  return;
}



// FUNCTION 1472de0fe FUN_1472de0fe body=29 status=ok
// SIG undefined FUN_1472de0fe(void)

undefined8 FUN_1472de0fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472de11c FUN_1472de11c body=258 status=ok
// SIG undefined FUN_1472de11c(void)

void FUN_1472de11c(void)

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
              0x110) < DAT_14ca472e8) {
    FUN_144b3d300(&DAT_14ca472e8);
    if (DAT_14ca472e8 == -1) {
      FUN_1472de220(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHZBOcclusionUpdateTexturesParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x3aa;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca47268,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ffb997);
      _Init_thread_footer(&DAT_14ca472e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472de220 FUN_1472de220 body=226 status=ok
// SIG undefined FUN_1472de220(void)

longlong * FUN_1472de220(longlong *param_1)

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
  pcVar13 = FUN_1472de304;
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



// FUNCTION 1472de304 FUN_1472de304 body=136 status=ok
// SIG undefined FUN_1472de304(void)

code * FUN_1472de304(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BoundsExtentTexture";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000003ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472de38c;
}



// FUNCTION 1472de38c FUN_1472de38c body=130 status=ok
// SIG undefined FUN_1472de38c(void)

undefined1 * FUN_1472de38c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BoundsCenterTexture";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472de40e;
}



// FUNCTION 1472de412 FUN_1472de412 body=29 status=ok
// SIG undefined FUN_1472de412(void)

undefined8 FUN_1472de412(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472de430 FUN_1472de430 body=354 status=ok
// SIG undefined FUN_1472de430(void)

void FUN_1472de430(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_48 = DAT_14ca46f20;
  if (DAT_14ca46f20 != 0) {
    LOCK();
    *(int *)(DAT_14ca46f20 + 8) = *(int *)(DAT_14ca46f20 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca46ed8;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a2f1150;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar3 = *(undefined4 *)(param_4 + 6);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar5 = *(undefined4 *)(param_4 + 7);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar7 = *(undefined4 *)(param_4 + 8);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar9 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472de594 FUN_1472de594 body=38 status=ok
// SIG undefined FUN_1472de594(void)

undefined8 FUN_1472de594(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472de5ba FUN_1472de5ba body=94 status=ok
// SIG undefined FUN_1472de5ba(void)

void FUN_1472de5ba(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 3;
    if (3 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 5,0);
      iVar1 = (int)(uVar2 >> 5);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x6c)) {
    *(int *)(param_1 + 0x6c) = iVar3;
    FUN_1472de618(param_1,*(undefined4 *)(param_1 + 0x68));
    return;
  }
  return;
}



// FUNCTION 1472de618 FUN_1472de618 body=132 status=ok
// SIG undefined FUN_1472de618(void)

void FUN_1472de618(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,0x20);
  return;
}



// FUNCTION 1472de69c FUN_1472de69c body=96 status=ok
// SIG undefined FUN_1472de69c(void)

void FUN_1472de69c(longlong param_1,int param_2)

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



// FUNCTION 1472de6fc FUN_1472de6fc body=322 status=ok
// SIG undefined FUN_1472de6fc(void)

void FUN_1472de6fc(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 1472de840 FUN_1472de840 body=438 status=ok
// SIG undefined FUN_1472de840(void)

void FUN_1472de840(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)(*(uint *)(lVar3 + 4 + lVar7) >> 0x14 ^ *(uint *)(lVar3 + lVar7)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1472de9f8 FUN_1472de9f8 body=116 status=ok
// SIG undefined FUN_1472de9f8(void)

void FUN_1472de9f8(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    uVar4 = 3;
    if (3 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (3 < *(uint *)(param_1 + 0x1c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar4;
    FUN_1472dea6e(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1472dea6e FUN_1472dea6e body=133 status=ok
// SIG undefined FUN_1472dea6e(void)

void FUN_1472dea6e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 1472deaf4 FUN_1472deaf4 body=285 status=ok
// SIG undefined FUN_1472deaf4(void)

undefined4 * FUN_1472deaf4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1472dec12(param_1,local_48);
  uVar1 = *param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x34) ^ (uint)uVar1;
  cVar3 = FUN_1472decf8(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0xc) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1472de840(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472dec12 FUN_1472dec12 body=229 status=ok
// SIG undefined FUN_1472dec12(void)

int * FUN_1472dec12(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_144869a3c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1472decf8 FUN_1472decf8 body=135 status=ok
// SIG undefined FUN_1472decf8(void)

undefined8 FUN_1472decf8(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar3 * 0x10;
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          *(undefined8 *)(lVar1 + lVar4) = *(undefined8 *)param_3;
          FUN_1472ded80(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((undefined8 *)(lVar1 + lVar4) + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1472ded80 FUN_1472ded80 body=114 status=ok
// SIG undefined FUN_1472ded80(void)

void FUN_1472ded80(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 1472dedf2 FUN_1472dedf2 body=110 status=ok
// SIG undefined FUN_1472dedf2(void)

void FUN_1472dedf2(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (param_2 <= (int)uVar1) {
    iVar5 = 3;
    if (3 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (3 < *(uint *)(param_1 + 0x6c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x6c) = iVar5;
    FUN_1472de618(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1472dee62 FUN_1472dee62 body=132 status=ok
// SIG undefined FUN_1472dee62(void)

void FUN_1472dee62(longlong param_1,int param_2)

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



// FUNCTION 1472deee8 FUN_1472deee8 body=38 status=ok
// SIG undefined FUN_1472deee8(void)

undefined8 FUN_1472deee8(undefined8 param_1,int param_2)

{
  FUN_146305b9c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472def14 FUN_1472def14 body=38 status=ok
// SIG undefined FUN_1472def14(void)

undefined8 FUN_1472def14(undefined8 param_1,int param_2)

{
  FUN_146305b0a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472def3a FUN_1472def3a body=76 status=ok
// SIG undefined FUN_1472def3a(void)

undefined8 * FUN_1472def3a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a2f1230;
  puVar2 = (undefined8 *)param_1[0xc];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_144a4509c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472def86 FUN_1472def86 body=451 status=ok
// SIG undefined FUN_1472def86(void)

void FUN_1472def86(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[10] != 0) {
    FUN_14025f766(param_1 + 10,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 0xb);
  uVar5 = local_60;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    plVar2 = param_1 + 8;
    uVar11 = 0;
    FUN_14025f66e(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar9 = (longlong *)param_1[10];
        if ((longlong *)param_1[10] == (longlong *)0x0) {
          plVar9 = plVar2;
        }
        if (plVar9 == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)
         ((longlong)plVar9 + (ulonglong)((int)param_1[0xb] + 0x7fffffffU & uVar11) * 4) = 0xffffffff
        ;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_48 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_1[5] != 0) {
      FUN_144b14e04(&local_50);
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_78 = param_1;
    if (local_60._4_4_ < (int)local_48[3]) {
      iVar6 = local_60._4_4_;
      local_60 = uVar5;
      do {
        lVar4 = *local_78;
        lVar7 = (longlong)iVar6;
        uVar10 = (longlong)(int)param_1[0xb] - 1U & (longlong)*(int *)(lVar4 + lVar7 * 0x18);
        iVar8 = (int)uVar10;
        *(int *)(lVar4 + 0x14 + lVar7 * 0x18) = iVar8;
        plVar9 = (longlong *)param_1[10];
        if ((longlong *)param_1[10] == (longlong *)0x0) {
          plVar9 = plVar2;
        }
        if (plVar9 == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x10 + lVar7 * 0x18) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[0xb] - 1U & uVar10) * 4);
        plVar9 = (longlong *)param_1[10];
        if ((longlong *)param_1[10] == (longlong *)0x0) {
          plVar9 = plVar2;
        }
        if (plVar9 == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar8 & (longlong)(int)param_1[0xb] - 1U) * 4) =
             iVar6;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_144b14e04(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_60._4_4_ < (int)local_68[3]);
    }
  }
  local_60 = uVar5;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472df14a FUN_1472df14a body=74 status=ok
// SIG undefined FUN_1472df14a(void)

undefined8 * FUN_1472df14a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2f1260;
  FUN_144725486();
  *param_1 = &PTR_FUN_14a384700;
  FUN_145843210(param_1);
  FUN_144a4509c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472df194 FUN_1472df194 body=72 status=ok
// SIG undefined FUN_1472df194(void)

void FUN_1472df194(longlong param_1)

{
  FUN_1456b3954(param_1 + 0x368);
  FUN_14002d158(*(undefined8 *)(param_1 + 0x358),*(undefined4 *)(param_1 + 0x360));
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FUN_1400020a8();
  }
  FUN_14006dea6(param_1 + 8);
  return;
}



// FUNCTION 1472df1dc FUN_1472df1dc body=146 status=ok
// SIG undefined FUN_1472df1dc(void)

void FUN_1472df1dc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x13c10,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x13c10)) {
      uVar5 = uVar4 / 0x13c10 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x13c10,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472df270 FUN_1472df270 body=111 status=ok
// SIG undefined FUN_1472df270(void)

void FUN_1472df270(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x3c0,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x3c0)) {
      uVar2 = uVar1 / 0x3c0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x3c0,8);
  }
  return;
}



// FUNCTION 1472df2e0 FUN_1472df2e0 body=146 status=ok
// SIG undefined FUN_1472df2e0(void)

void FUN_1472df2e0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x3c0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x3c0)) {
      uVar5 = uVar4 / 0x3c0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x3c0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472df374 FUN_1472df374 body=101 status=ok
// SIG undefined FUN_1472df374(void)

undefined8 * FUN_1472df374(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144ab5a64(param_1);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_144899d7a(param_1,param_2);
  return param_1;
}



// FUNCTION 1472df3da FUN_1472df3da body=132 status=ok
// SIG undefined FUN_1472df3da(void)

void FUN_1472df3da(longlong param_1,int param_2)

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



// FUNCTION 1472df460 FUN_1472df460 body=132 status=ok
// SIG undefined FUN_1472df460(void)

void FUN_1472df460(longlong param_1,int param_2)

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



// FUNCTION 1472df4e6 FUN_1472df4e6 body=63 status=ok
// SIG undefined FUN_1472df4e6(void)

void FUN_1472df4e6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472df526(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1472df526 FUN_1472df526 body=97 status=ok
// SIG undefined FUN_1472df526(void)

ulonglong FUN_1472df526(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
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



// FUNCTION 1472df588 FUN_1472df588 body=147 status=ok
// SIG undefined FUN_1472df588(void)

void FUN_1472df588(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472df61c FUN_1472df61c body=29 status=ok
// SIG undefined FUN_1472df61c(void)

undefined8 FUN_1472df61c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472df63a FUN_1472df63a body=20 status=ok
// SIG undefined FUN_1472df63a(void)

void FUN_1472df63a(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_1472df64e(param_1,*(undefined4 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 1472df64e FUN_1472df64e body=218 status=ok
// SIG undefined FUN_1472df64e(void)

void FUN_1472df64e(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  int iVar2;
  ulonglong *puVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    _Src = (void *)*param_1;
    iVar2 = param_3 * 0x18;
    puVar3 = TlsGetValue(DAT_14ca954e4);
    uVar4 = (ulonglong)((uint)(0xf < iVar2) * 8);
    lVar1 = uVar4 + 7;
    uVar4 = uVar4 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar3 + lVar1 & uVar4);
    uVar5 = (longlong)_Dst + (longlong)iVar2;
    if (puVar3[1] < uVar5) {
      FUN_140023dd8(puVar3,iVar2 + (uint)(0xf < iVar2) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar3 & uVar4);
      uVar5 = (longlong)iVar2 + (longlong)_Dst;
    }
    *puVar3 = uVar5;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 * 0x18);
      return;
    }
  }
  return;
}



// FUNCTION 1472df728 FUN_1472df728 body=258 status=ok
// SIG undefined FUN_1472df728(void)

void FUN_1472df728(void)

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
              0x110) < DAT_14ca473d0) {
    FUN_144b3d300(&DAT_14ca473d0);
    if (DAT_14ca473d0 == -1) {
      FUN_1472df82c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FFlushCrossGPUTransfersParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0xef3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca47350,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ffd802);
      _Init_thread_footer(&DAT_14ca473d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472df82c FUN_1472df82c body=226 status=ok
// SIG undefined FUN_1472df82c(void)

longlong * FUN_1472df82c(longlong *param_1)

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
  pcVar13 = FUN_1472df910;
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



// FUNCTION 1472df910 FUN_1472df910 body=130 status=ok
// SIG undefined FUN_1472df910(void)

undefined1 * FUN_1472df910(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Textures";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xef4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xb;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472df992;
}



// FUNCTION 1472df996 FUN_1472df996 body=68 status=ok
// SIG undefined FUN_1472df996(void)

void FUN_1472df996(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1471daeb8(param_1);
  return;
}



// FUNCTION 1472df9da FUN_1472df9da body=110 status=ok
// SIG undefined FUN_1472df9da(void)

void FUN_1472df9da(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc4 + (longlong)param_2 * 0xd0);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0xc0 + lVar5 * 0xd0);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0xd0 + 0xc0);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0xd0 + 0xc0);
  FUN_1471dae20(param_1,param_2,1);
  return;
}



// FUNCTION 1472dfa48 FUN_1472dfa48 body=98 status=ok
// SIG undefined FUN_1472dfa48(void)

void FUN_1472dfa48(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1472dfaae FUN_1472dfaae body=31 status=ok
// SIG undefined FUN_1472dfaae(void)

undefined8 FUN_1472dfaae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472dface FUN_1472dface body=230 status=ok
// SIG undefined FUN_1472dface(void)

undefined8 * FUN_1472dface(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 1472dfbb6 FUN_1472dfbb6 body=130 status=ok
// SIG undefined FUN_1472dfbb6(void)

void FUN_1472dfbb6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 1472dfc3a FUN_1472dfc3a body=164 status=ok
// SIG undefined FUN_1472dfc3a(void)

void FUN_1472dfc3a(longlong *param_1,undefined8 param_2)

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
        goto LAB_1472dfcba;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1472dfcba:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1472dfcde FUN_1472dfcde body=175 status=ok
// SIG undefined FUN_1472dfcde(void)

void FUN_1472dfcde(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1472dfd67;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1472dfd67:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1472dfd8e FUN_1472dfd8e body=56 status=ok
// SIG undefined FUN_1472dfd8e(void)

undefined8 * FUN_1472dfd8e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2f1610;
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472dfdc6 FUN_1472dfdc6 body=629 status=ok
// SIG undefined FUN_1472dfdc6(void)

void FUN_1472dfdc6(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FDummySceneColorResolveBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84 = 0x30;
  local_7c = 0x4001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
  }
  plVar6 = (longlong *)(param_1 + 0x10);
  if (plVar6 != &local_90) {
    lVar4 = *plVar6;
    *plVar6 = local_90;
    local_90 = 0;
    if (lVar4 == 0) goto LAB_1472dfeb8;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1472dfeb8:
  lVar4 = *plVar6;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,1);
  local_a8 = 0x30;
  puVar5 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar4,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,0);
  }
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  lVar4 = *plVar6;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e003c FUN_1472e003c body=29 status=ok
// SIG undefined FUN_1472e003c(void)

undefined8 FUN_1472e003c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e005a FUN_1472e005a body=258 status=ok
// SIG undefined FUN_1472e005a(void)

void FUN_1472e005a(void)

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
              0x110) < DAT_14ca47470) {
    FUN_144b3d300(&DAT_14ca47470);
    if (DAT_14ca47470 == -1) {
      FUN_1472e0b08(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FResolveSceneColorParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x193a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca473f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143000c84);
      _Init_thread_footer(&DAT_14ca47470);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e015d FUN_1472e015d body=301 status=ok
// SIG undefined FUN_1472e015d(void)

void FUN_1472e015d(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar12 = FUN_144821ef4();
  lVar5 = *param_2;
  uVar6 = *param_5;
  FUN_144775fd8(lVar12,lVar5 + 0xe0,*param_4);
  FUN_144a86bff(lVar12,lVar5 + 0xe4,uVar6);
  iVar10 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar12 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar12 + 0x40)) == iVar11 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar14) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar14;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    uVar6 = *(undefined8 *)(lVar12 + 0x38);
    uVar1 = *(undefined4 *)(lVar12 + 0x40);
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    uVar2 = *(undefined4 *)(lVar12 + 0x30);
    uVar8 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = *(undefined4 *)(lVar12 + 0x20);
    uVar9 = *(undefined8 *)(lVar12 + 8);
    uVar4 = *(undefined4 *)(lVar12 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fd8;
    puVar13[2] = param_3;
    puVar13[3] = uVar9;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar8;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar7;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar6;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1472e028a FUN_1472e028a body=301 status=ok
// SIG undefined FUN_1472e028a(void)

void FUN_1472e028a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar12 = FUN_144821ef4();
  lVar5 = *param_2;
  uVar6 = *param_5;
  FUN_144775fd8(lVar12,lVar5 + 0xe0,*param_4);
  FUN_144a86bff(lVar12,lVar5 + 0xe4,uVar6);
  iVar10 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar12 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar12 + 0x40)) == iVar11 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar14) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar14;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    uVar6 = *(undefined8 *)(lVar12 + 0x38);
    uVar1 = *(undefined4 *)(lVar12 + 0x40);
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    uVar2 = *(undefined4 *)(lVar12 + 0x30);
    uVar8 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = *(undefined4 *)(lVar12 + 0x20);
    uVar9 = *(undefined8 *)(lVar12 + 8);
    uVar4 = *(undefined4 *)(lVar12 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fd8;
    puVar13[2] = param_3;
    puVar13[3] = uVar9;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar8;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar7;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar6;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1472e03b7 FUN_1472e03b7 body=301 status=ok
// SIG undefined FUN_1472e03b7(void)

void FUN_1472e03b7(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar12 = FUN_144821ef4();
  lVar5 = *param_2;
  uVar6 = *param_5;
  FUN_144775fd8(lVar12,lVar5 + 0xe0,*param_4);
  FUN_144a86bff(lVar12,lVar5 + 0xe4,uVar6);
  iVar10 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar12 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar12 + 0x40)) == iVar11 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar14) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar14;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    uVar6 = *(undefined8 *)(lVar12 + 0x38);
    uVar1 = *(undefined4 *)(lVar12 + 0x40);
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    uVar2 = *(undefined4 *)(lVar12 + 0x30);
    uVar8 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = *(undefined4 *)(lVar12 + 0x20);
    uVar9 = *(undefined8 *)(lVar12 + 8);
    uVar4 = *(undefined4 *)(lVar12 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fd8;
    puVar13[2] = param_3;
    puVar13[3] = uVar9;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar8;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar7;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar6;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1472e04e4 FUN_1472e04e4 body=262 status=ok
// SIG undefined FUN_1472e04e4(void)

void FUN_1472e04e4(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_144775fd8(lVar11,*param_2 + 0xe0,*param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1472e05ea FUN_1472e05ea body=262 status=ok
// SIG undefined FUN_1472e05ea(void)

void FUN_1472e05ea(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_144775fd8(lVar11,*param_2 + 0xe0,*param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1472e06f0 FUN_1472e06f0 body=262 status=ok
// SIG undefined FUN_1472e06f0(void)

void FUN_1472e06f0(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_144775fd8(lVar11,*param_2 + 0xe0,*param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1472e07f6 FUN_1472e07f6 body=262 status=ok
// SIG undefined FUN_1472e07f6(void)

void FUN_1472e07f6(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_144775fd8(lVar11,*param_2 + 0xe0,*param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1472e08fc FUN_1472e08fc body=262 status=ok
// SIG undefined FUN_1472e08fc(void)

void FUN_1472e08fc(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_144775fd8(lVar11,*param_2 + 0xe0,*param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1472e0a02 FUN_1472e0a02 body=262 status=ok
// SIG undefined FUN_1472e0a02(void)

void FUN_1472e0a02(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_144775fd8(lVar11,*param_2 + 0xe0,*param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1472e0b08 FUN_1472e0b08 body=226 status=ok
// SIG undefined FUN_1472e0b08(void)

longlong * FUN_1472e0b08(longlong *param_1)

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
  pcVar13 = FUN_1472e0bec;
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



// FUNCTION 1472e0bec FUN_1472e0bec body=136 status=ok
// SIG undefined FUN_1472e0bec(void)

code * FUN_1472e0bec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000193d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e0c74;
}



// FUNCTION 1472e0c74 FUN_1472e0c74 body=136 status=ok
// SIG undefined FUN_1472e0c74(void)

code * FUN_1472e0c74(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorFMask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000193c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e0cfc;
}



// FUNCTION 1472e0cfc FUN_1472e0cfc body=130 status=ok
// SIG undefined FUN_1472e0cfc(void)

undefined1 * FUN_1472e0cfc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x193b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472e0d7e;
}



// FUNCTION 1472e0d82 FUN_1472e0d82 body=29 status=ok
// SIG undefined FUN_1472e0d82(void)

undefined8 FUN_1472e0d82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e0da0 FUN_1472e0da0 body=38 status=ok
// SIG undefined FUN_1472e0da0(void)

undefined8 FUN_1472e0da0(undefined8 param_1,int param_2)

{
  FUN_146305be4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e0dcc FUN_1472e0dcc body=258 status=ok
// SIG undefined FUN_1472e0dcc(void)

void FUN_1472e0dcc(void)

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
              0x110) < DAT_14ca474f8) {
    FUN_144b3d300(&DAT_14ca474f8);
    if (DAT_14ca474f8 == -1) {
      FUN_1472e1002(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FResolveSceneDepthParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x19f8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca47478,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143001914);
      _Init_thread_footer(&DAT_14ca474f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e0ecf FUN_1472e0ecf body=307 status=ok
// SIG undefined FUN_1472e0ecf(void)

void FUN_1472e0ecf(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147432062(*param_2,lVar11,param_4,param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1472e1002 FUN_1472e1002 body=226 status=ok
// SIG undefined FUN_1472e1002(void)

longlong * FUN_1472e1002(longlong *param_1)

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
  pcVar13 = FUN_1472e10e6;
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



// FUNCTION 1472e10e6 FUN_1472e10e6 body=136 status=ok
// SIG undefined FUN_1472e10e6(void)

code * FUN_1472e10e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000019fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e116e;
}



// FUNCTION 1472e116e FUN_1472e116e body=130 status=ok
// SIG undefined FUN_1472e116e(void)

undefined1 * FUN_1472e116e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19f9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472e11f0;
}



// FUNCTION 1472e11f4 FUN_1472e11f4 body=110 status=ok
// SIG undefined FUN_1472e11f4(void)

void FUN_1472e11f4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1472e1264(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1472e1264 FUN_1472e1264 body=132 status=ok
// SIG undefined FUN_1472e1264(void)

void FUN_1472e1264(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,0x10);
  return;
}



// FUNCTION 1472e12e8 FUN_1472e12e8 body=44 status=ok
// SIG undefined FUN_1472e12e8(void)

void FUN_1472e12e8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472e1320 FUN_1472e1320 body=96 status=ok
// SIG undefined FUN_1472e1320(void)

undefined8 FUN_1472e1320(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145dace8c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca4bae8,1);
  return uVar3;
}



// FUNCTION 1472e1380 FUN_1472e1380 body=138 status=ok
// SIG undefined FUN_1472e1380(void)

void * FUN_1472e1380(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472e140a FUN_1472e140a body=44 status=ok
// SIG undefined FUN_1472e140a(void)

void FUN_1472e140a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472e143a FUN_1472e143a body=289 status=ok
// SIG undefined FUN_1472e143a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1472e143a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b228) {
    FUN_144b3d300(&DAT_14ca4b228);
    if (DAT_14ca4b228 == -1) {
      FUN_1472e3f9e();
      FUN_14610ca56();
      FUN_140db5666(&DAT_14ca4b180,0,&DAT_14ca4b118,L"FHZBBuildCS",L"/Engine/Private/HZB.usf",
                    L"HZBBuildCS",5,0x100,FUN_1472e15bc,FUN_1472e155c,&LAB_1430038de,&LAB_1430038da,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca4bbf8);
      _DAT_14ca4b180 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143003972);
      _Init_thread_footer(&DAT_14ca4b228);
    }
  }
  return &DAT_14ca4b180;
}



// FUNCTION 1472e155c FUN_1472e155c body=96 status=ok
// SIG undefined FUN_1472e155c(void)

undefined8 FUN_1472e155c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1472e3f9e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca4bbf8,1);
  return uVar3;
}



// FUNCTION 1472e15bc FUN_1472e15bc body=138 status=ok
// SIG undefined FUN_1472e15bc(void)

void * FUN_1472e15bc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472e1646 FUN_1472e1646 body=24 status=ok
// SIG undefined FUN_1472e1646(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1472e1646(void)

{
  FUN_140051d28();
  _DAT_14ca4bc80 = 0;
  _DAT_14ca4bc88 = 0;
  return;
}



// FUNCTION 1472e165e FUN_1472e165e body=195 status=ok
// SIG undefined FUN_1472e165e(void)

void FUN_1472e165e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 600) != *(int *)(param_1 + 0x284)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    lVar4 = param_1 + 0x288;
    if (*(longlong *)(param_1 + 0x290) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x290);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x298) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) +
                             ((int)param_3 << 0x10 | (uint)(ushort)param_3) +
                             (uVar2 << 0x13 | uVar2) + (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x250) + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x250) + (longlong)iVar3 * 0x20) == param_3) {
          if ((longlong *)(lVar4 + 8) != (longlong *)0x0 && lVar4 != 0) {
            puVar1 = *(undefined1 **)(*(longlong *)(lVar4 + 8) + 8);
            goto LAB_1472e1679;
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  puVar1 = &DAT_100000001;
LAB_1472e1679:
  *param_2 = puVar1;
  return;
}



// FUNCTION 1472e1721 FUN_1472e1721 body=54 status=ok
// SIG undefined FUN_1472e1721(void)

undefined8 FUN_1472e1721(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(char *)(param_2 + 0x23d9) != '\x01') {
    return 0;
  }
  if (*(char *)(*(longlong *)(param_2 + 8) + 0xd0) == '\x01') {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x348);
    lVar3 = 0;
    if (*(char *)(lVar1 + 8) != '\0') {
      lVar3 = lVar1;
    }
  }
  else {
    lVar3 = 0;
  }
  uVar2 = FUN_1448e2c77(param_1,lVar3,param_3,param_3);
  return uVar2;
}



// FUNCTION 1472e1757 FUN_1472e1757 body=287 status=ok
// SIG undefined FUN_1472e1757(void)

void FUN_1472e1757(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar5 + 0x1e;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(plVar1);
    puVar5 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar5 + 0x1e;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar3;
  *puVar5 = &PTR_FUN_14a2f97a0;
  puVar3 = puVar5 + 2;
  memset(puVar3,0,0xd8);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar5;
  FUN_140250972(param_1,param_2,param_3,puVar3);
  local_48 = puVar3;
  lVar4 = FUN_144a890ae();
  local_50 = *(undefined8 *)(lVar4 + 0x18);
  FUN_1472e6bb2(param_1 + 0x1a8,plVar1,&local_48);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e1877 FUN_1472e1877 body=254 status=ok
// SIG undefined FUN_1472e1877(void)

undefined8 * FUN_1472e1877(undefined8 *param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  if (*(int *)(param_3 + 0x3090) < 3) {
    if (*(char *)(param_3 + 0x23d9) == '\x01') {
      if (*(char *)(*(longlong *)(param_3 + 8) + 0xd0) == '\x01') {
        lVar1 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x348);
        lVar3 = 0;
        if (*(char *)(lVar1 + 8) != '\0') {
          lVar3 = lVar1;
        }
      }
      else {
        lVar3 = 0;
      }
      uVar2 = FUN_1472e1757(param_2,lVar3,param_4 >> 8 & 4 | (uint)((param_4 & 0x1f8) != 0));
    }
    else {
      uVar2 = 0;
    }
    lVar3 = FUN_144a890ae();
    cVar4 = '\x02';
    if (*(char *)(lVar3 + 0x41) != '\x03') {
      cVar4 = *(char *)(lVar3 + 0x41);
    }
    param_1[2] = uVar2;
    *(char *)(param_1 + 3) = cVar4;
  }
  else {
    if (*(char *)(param_3 + 0x23d9) == '\x01') {
      if (*(char *)(*(longlong *)(param_3 + 8) + 0xd0) == '\x01') {
        lVar1 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x348);
        lVar3 = 0;
        if (*(char *)(lVar1 + 8) != '\0') {
          lVar3 = lVar1;
        }
      }
      else {
        lVar3 = 0;
      }
      uVar2 = FUN_1448e2c77(param_2,lVar3);
    }
    else {
      uVar2 = 0;
    }
    lVar3 = FUN_14482e3b2();
    cVar4 = '\x02';
    if (*(char *)(lVar3 + 0x41) != '\x03') {
      cVar4 = *(char *)(lVar3 + 0x41);
    }
    *param_1 = uVar2;
    *(char *)(param_1 + 1) = cVar4;
  }
  return param_1;
}



// FUNCTION 1472e1976 FUN_1472e1976 body=34 status=ok
// SIG undefined FUN_1472e1976(void)

void FUN_1472e1976(undefined8 *param_1,undefined8 param_2)

{
  FUN_1448c569e();
  FUN_14742a04a(param_2,*param_1);
  return;
}



// FUNCTION 1472e1998 FUN_1472e1998 body=243 status=ok
// SIG undefined FUN_1472e1998(void)

undefined8 FUN_1472e1998(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar2 = *(uint *)(param_2 + 0x158);
  uVar6 = 1 << ((byte)uVar2 & 0x1f);
  lVar3 = *(longlong *)(param_1 + 0x3188);
  if (*(longlong *)(param_1 + 0x3188) == 0) {
    lVar3 = param_1 + 0x3178;
  }
  bVar8 = true;
  if ((*(uint *)(lVar3 + (longlong)((int)uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0) {
    lVar3 = FUN_1472e6faa(*(longlong *)(param_1 + 0x10) + 0x4d0,*(undefined4 *)(param_2 + 0x10),
                          param_2 + 0x10);
    FUN_1430090b6(lVar3,param_1,param_3 & 0xffffffff);
    lVar3 = *(longlong *)(lVar3 + 0x10);
    *(longlong *)(*(longlong *)(param_1 + 0x3198) + (longlong)(int)uVar2 * 8) = lVar3;
    puVar4 = &DAT_000031a8 + param_1;
    if (*(undefined1 **)(param_1 + 0x31b8) != (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(param_1 + 0x31b8);
    }
    uVar7 = uVar2 + 0x1f;
    if (-1 < (int)uVar2) {
      uVar7 = uVar2;
    }
    lVar5 = (longlong)((int)uVar7 >> 5);
    bVar8 = lVar3 == 0;
    if (bVar8) {
      uVar7 = ~uVar6 & *(uint *)(puVar4 + lVar5 * 4);
    }
    else {
      uVar7 = *(uint *)(puVar4 + lVar5 * 4) | uVar6;
    }
    *(uint *)(puVar4 + lVar5 * 4) = uVar7;
    lVar3 = param_1 + 0x3178;
    if (*(longlong *)(param_1 + 0x3188) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x3188);
    }
    puVar1 = (uint *)(lVar3 + (longlong)((int)uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | uVar6;
  }
  return CONCAT71((int7)((param_3 & 0xffffffff) >> 8),((byte)(param_3 & 0xffffffff) ^ 1) & bVar8);
}



// FUNCTION 1472e1a8c FUN_1472e1a8c body=233 status=ok
// SIG undefined FUN_1472e1a8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1472e1a8c(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = param_2;
  lVar1 = *(longlong *)(param_2 + 0x18);
  param_1[1] = lVar1;
  lVar2 = *(longlong *)(param_2 + 0x20);
  param_1[2] = lVar2;
  param_1[3] = param_2 + 0x30;
  param_1[4] = lVar2 + 600;
  param_1[5] = lVar2 + 0x298;
  param_1[6] = lVar2 + 0x2158;
  param_1[7] = 0;
  param_1[8] = *(longlong *)(param_2 + 0x10);
  param_1[9] = param_3;
  lVar3 = *(longlong *)(lVar1 + 0x1050);
  param_1[10] = *(longlong *)(lVar1 + 0x1048);
  param_1[0xb] = lVar3;
  param_1[0xc] = *(longlong *)(lVar1 + 0x1058);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(lVar2 + 0x4c8);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(DAT_14cb0d2b0 + 0xd8c);
  *(float *)(param_1 + 0xe) = (float)*(double *)(*(longlong *)(lVar1 + 8) + 0x88);
  *(float *)((longlong)param_1 + 0x74) = DAT_14ca4b4f0 * DAT_14ca4b4f0;
  *(bool *)(param_1 + 0xf) = *(int *)(lVar2 + 0x2a0) != -1;
  *(bool *)((longlong)param_1 + 0x79) =
       (0 < DAT_14c7609dc && 0 < _DAT_14c7609e0) && 0.0 < DAT_14ca4b4c0;
  return;
}



// FUNCTION 1472e1b76 FUN_1472e1b76 body=1492 status=ok
// SIG undefined FUN_1472e1b76(void)

void FUN_1472e1b76(longlong *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong lVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_388 [44];
  uint local_35c;
  longlong local_358;
  undefined8 uStack_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  iVar19 = (int)param_1[4];
  if (iVar19 != 0) {
    local_358 = 0;
    uStack_350 = 0;
    if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar19);
    }
    FUN_1472e77a0(&local_358);
    if ((longlong)(int)param_1[4] != 0) {
      lVar28 = param_1[3];
      lVar26 = (longlong)(int)param_1[4] << 6;
      do {
        uVar13 = uStack_350;
        lVar12 = (longlong)(int)uStack_350;
        uVar5 = (int)uStack_350 + 1;
        uStack_350 = CONCAT44(uStack_350._4_4_,uVar5);
        if (uStack_350._4_4_ < uVar5) {
          FUN_1472e77ae(&local_358,uVar13 & 0xffffffff);
        }
        *(longlong *)(local_358 + lVar12 * 8) = lVar28;
        lVar28 = lVar28 + 0x40;
        lVar26 = lVar26 + -0x40;
      } while (lVar26 != 0);
    }
    lVar28 = local_358;
    iVar21 = (int)uStack_350;
    uVar13 = uStack_350 & 0xffffffff;
    iVar19 = *(int *)(*(longlong *)(*param_1 + 8) + 0x136d0);
    iVar15 = *(int *)(*(longlong *)(*param_1 + 0x48) + 4);
    iVar6 = 2;
    if (iVar15 < 2) {
      iVar6 = iVar15;
    }
    iVar6 = DAT_14ca84e10 / iVar6;
    uVar16 = uVar13;
    if (iVar6 < iVar19 + (int)uStack_350) {
      uVar5 = ((int)uStack_350 + 9) / 10;
      uVar3 = iVar6 - iVar19;
      if (iVar6 <= (int)(iVar19 + uVar5)) {
        uVar3 = uVar5;
      }
      uVar16 = (ulonglong)uVar3;
      if ((1 < (int)uStack_350) && ((int)uVar3 < (int)uStack_350)) {
        local_35c = uVar3;
        memset(local_338,0,0x2f0);
        local_348 = lVar28;
        local_340 = lVar28 + uVar13 * 8 + -8;
        fVar30 = logf((float)iVar21);
        local_338[0] = (int)(longlong)(fVar30 + fVar30);
        plVar8 = &local_348;
        do {
          plVar9 = (longlong *)*plVar8;
          plVar17 = (longlong *)plVar8[1];
          iVar19 = (int)plVar8[2];
          iVar15 = (int)((ulonglong)((longlong)plVar17 - (longlong)plVar9) >> 3);
          uVar13 = (ulonglong)(iVar15 + 1);
          plVar22 = plVar17;
          plVar27 = plVar9;
          if (iVar19 != 0) {
LAB_1472e1d25:
            plVar14 = plVar9;
            if (8 < (int)(uint)uVar13) {
              uVar5 = (uint)uVar13 >> 1;
              lVar28 = plVar14[uVar5];
              plVar14[uVar5] = *plVar14;
              *plVar14 = lVar28;
              plVar23 = plVar17 + 1;
              plVar9 = plVar14;
              do {
                plVar4 = plVar9 + 1;
                plVar18 = plVar9 + 1;
                do {
                  plVar9 = plVar18;
                  plVar24 = plVar4;
                  if (plVar17 < plVar9) break;
                  plVar4 = plVar24 + 1;
                  plVar18 = plVar9 + 1;
                } while (*(uint *)(*plVar9 + 0x38) <= *(uint *)(*plVar14 + 0x38));
                plVar4 = plVar23 + -2;
                do {
                  plVar18 = plVar23;
                  plVar25 = plVar4;
                  plVar23 = plVar18 + -1;
                  if (plVar23 <= plVar14) break;
                  plVar4 = plVar25 + -1;
                } while (*(uint *)(*plVar14 + 0x38) <= *(uint *)(*plVar23 + 0x38));
                if (plVar23 < plVar9) goto LAB_1472e1db5;
                lVar28 = *plVar9;
                *plVar9 = *plVar23;
                *plVar23 = lVar28;
              } while( true );
            }
            if (plVar14 < plVar17) {
              do {
                plVar9 = plVar14;
                if (plVar14 + 1 <= plVar17) {
                  lVar28 = *plVar14;
                  plVar22 = plVar14 + 1;
                  plVar27 = plVar14;
                  do {
                    plVar9 = plVar22;
                    lVar26 = *plVar22;
                    if (*(uint *)(*plVar22 + 0x38) <= *(uint *)(lVar28 + 0x38)) {
                      plVar9 = plVar27;
                      lVar26 = lVar28;
                    }
                    lVar28 = lVar26;
                    plVar22 = plVar22 + 1;
                    plVar27 = plVar9;
                  } while (plVar22 <= plVar17);
                }
                lVar28 = *plVar9;
                *plVar9 = *plVar17;
                *plVar17 = lVar28;
                plVar17 = plVar17 + -1;
              } while (plVar14 < plVar17);
            }
            goto LAB_1472e1fe4;
          }
LAB_1472e1e48:
          iVar19 = (int)uVar13;
          if (iVar19 != 0) {
            iVar15 = (iVar15 - (iVar15 + -1 >> 0x1f)) + -1 >> 1;
            iVar21 = iVar15;
joined_r0x0001472e1e6f:
            do {
              iVar6 = iVar15 * 2 + 1;
              if (iVar6 < iVar19) {
                iVar20 = iVar15 * 2 + 2;
                if ((iVar20 < iVar19) &&
                   (*(uint *)(plVar9[iVar6] + 0x38) <= *(uint *)(plVar9[iVar20] + 0x38))) {
                  iVar6 = iVar20;
                }
                lVar28 = plVar9[iVar15];
                if (*(uint *)(lVar28 + 0x38) < *(uint *)(plVar9[iVar6] + 0x38)) {
                  plVar9[iVar15] = plVar9[iVar6];
                  plVar9[iVar6] = lVar28;
                  iVar15 = iVar6;
                  goto joined_r0x0001472e1e6f;
                }
              }
              bVar29 = iVar21 != 0;
              iVar15 = iVar21 + -1;
              iVar21 = iVar15;
            } while (bVar29);
            if (1 < iVar19) {
              lVar28 = *plVar9;
              *plVar9 = plVar9[uVar13 - 1];
              plVar9[uVar13 - 1] = lVar28;
              if (iVar19 != 2) {
                do {
                  uVar16 = uVar13 - 1;
                  iVar19 = 0;
                  iVar21 = 1;
                  iVar15 = 0;
                  do {
                    iVar19 = iVar19 + 2;
                    iVar6 = iVar21;
                    if (((longlong)iVar19 < (longlong)uVar16) &&
                       (*(uint *)(plVar9[iVar21] + 0x38) <= *(uint *)(plVar9[iVar19] + 0x38))) {
                      iVar6 = iVar19;
                    }
                    lVar28 = plVar9[iVar15];
                    if (*(uint *)(plVar9[iVar6] + 0x38) <= *(uint *)(lVar28 + 0x38)) break;
                    plVar9[iVar15] = plVar9[iVar6];
                    plVar9[iVar6] = lVar28;
                    iVar19 = iVar6 * 2;
                    iVar21 = iVar6 * 2 + 1;
                    iVar15 = iVar6;
                  } while ((longlong)iVar21 < (longlong)uVar16);
                  lVar28 = *plVar9;
                  *plVar9 = plVar9[uVar13 - 2];
                  plVar9[uVar13 - 2] = lVar28;
                  uVar13 = uVar16;
                } while (2 < uVar16);
              }
            }
          }
LAB_1472e1fe4:
          plVar8 = plVar8 + -3;
        } while (&local_348 <= plVar8);
        uVar16 = (ulonglong)local_35c;
      }
    }
    if (0 < (int)uVar16) {
      uVar13 = 0;
      do {
        plVar8 = *(longlong **)(local_358 + uVar13 * 8);
        plVar17 = (longlong *)param_1[5];
        if ((int)plVar17[1] != *(int *)((longlong)plVar17 + 0x34)) {
          lVar28 = *plVar8;
          plVar9 = plVar17 + 7;
          if ((longlong *)plVar17[8] != (longlong *)0x0) {
            plVar9 = (longlong *)plVar17[8];
          }
          iVar19 = *(int *)((longlong)plVar9 +
                           (ulonglong)
                           ((int)plVar17[9] - 1U &
                           ((uint)((ulonglong)lVar28 >> 0x34) ^ (uint)lVar28)) * 4);
          if (iVar19 != -1) {
            lVar26 = *plVar17;
            do {
              lVar11 = (longlong)iVar19 * 0x68;
              lVar12 = lVar26 + lVar11;
              if (CONCAT44(*(undefined4 *)(lVar26 + 0x50 + lVar11),*(undefined4 *)(lVar26 + lVar11))
                  == lVar28) goto LAB_1472e2030;
              iVar19 = *(int *)(lVar12 + 0x60);
            } while (iVar19 != -1);
          }
        }
        lVar12 = 0;
LAB_1472e2030:
        uVar7 = FUN_14480cb48(*(longlong *)(*param_1 + 8) + 0x136a0,plVar8 + 1,plVar8 + 4,param_1[2]
                             );
        lVar28 = *(longlong *)(*param_1 + 0x10);
        lVar26 = lVar28 + 0x21a8;
        if (*(longlong *)(lVar28 + 0x21c8) != 0) {
          lVar26 = *(longlong *)(lVar28 + 0x21c8);
        }
        *(undefined8 *)
         (lVar26 + (longlong)
                   (*(int *)(lVar28 + 0x4c8) % *(int *)(*(longlong *)(*param_1 + 0x48) + 4)) * 8) =
             uVar7;
        piVar1 = (int *)(*(longlong *)(*param_1 + 0x10) + 0x21d8);
        *piVar1 = *piVar1 + 1;
        lVar28 = *(longlong *)(*param_1 + 0x48);
        uVar2 = *(undefined1 *)(lVar28 + 0xe);
        iVar19 = *(int *)(*(longlong *)(*param_1 + 0x10) + 0x4c8);
        uVar10 = (longlong)iVar19 % (longlong)*(int *)(lVar28 + 4) & 0xffffffff;
        *(undefined8 *)(lVar12 + 8 + uVar10 * 8) = uVar7;
        *(int *)(lVar12 + 0x28 + uVar10 * 4) = iVar19;
        *(undefined1 *)(lVar12 + 0x55 + uVar10) = 0;
        *(undefined1 *)(lVar12 + 0x59) = uVar2;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar16);
    }
    FUN_14302bc74(&local_358);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1472e1db5:
  lVar28 = *plVar14;
  *plVar14 = *plVar23;
  *plVar23 = lVar28;
  iVar19 = iVar19 + -1;
  plVar18 = plVar18 + -2;
  if ((longlong)plVar25 - (longlong)plVar27 < (longlong)plVar22 - (longlong)plVar24) {
    if (plVar9 < plVar17) {
      *plVar8 = (longlong)plVar9;
      plVar8[1] = (longlong)plVar17;
      *(int *)(plVar8 + 2) = iVar19;
      plVar8 = plVar8 + 3;
    }
    plVar9 = plVar14;
    if (plVar23 <= plVar14 + 1) goto LAB_1472e1fe4;
  }
  else {
    if (plVar14 + 1 < plVar23) {
      *plVar8 = (longlong)plVar14;
      plVar8[1] = (longlong)plVar18;
      *(int *)(plVar8 + 2) = iVar19;
      plVar8 = plVar8 + 3;
    }
    plVar14 = plVar24;
    plVar18 = plVar17;
    plVar25 = plVar17;
    if (plVar17 <= plVar9) goto LAB_1472e1fe4;
  }
  iVar15 = (int)((ulonglong)((longlong)plVar25 - (longlong)plVar14) >> 3);
  uVar13 = (ulonglong)(iVar15 + 1);
  plVar17 = plVar18;
  plVar22 = plVar25;
  plVar27 = plVar14;
  if (iVar19 == 0) goto LAB_1472e1e48;
  goto LAB_1472e1d25;
}



// FUNCTION 1472e214c FUN_1472e214c body=3875 status=ok
// SIG undefined FUN_1472e214c(void)

/* WARNING: Removing unreachable block (ram,0x0001472e2e1b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1472e214c(longlong param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  uint *puVar1;
  double *pdVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong *plVar18;
  byte bVar19;
  int iVar20;
  longlong lVar21;
  longlong *plVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  byte bVar25;
  double dVar26;
  ulonglong unaff_R12;
  double dVar27;
  byte bVar28;
  bool bVar29;
  float fVar30;
  double dVar31;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  undefined4 local_230;
  undefined1 local_228;
  byte local_211;
  ulonglong local_210;
  longlong *local_208;
  int local_1fc;
  undefined8 local_1f8;
  longlong *local_1f0;
  int *local_1e8;
  ulonglong local_1e0;
  uint local_1d4;
  ulonglong local_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined4 local_103;
  undefined1 local_ff;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar17 = *(longlong *)(param_1 + 0x40);
  lVar21 = (longlong)(int)param_4;
  bVar28 = *(byte *)(*(longlong *)(lVar17 + 0x33b0) + lVar21);
  uVar24 = 1;
  local_1d4 = (uint)bVar28;
  local_208 = param_2;
  local_1f8 = param_4;
  local_1e8 = param_3;
  if (((bVar28 & 0x10) == 0) || (*(char *)(*(longlong *)(param_1 + 0x48) + 0xf) != '\x01')) {
    local_210 = 0;
    local_1f0 = (longlong *)0x0;
    local_1fc = 0;
LAB_1472e22ce:
    local_1e0 = (ulonglong)*(uint *)(*(longlong *)(lVar17 + 0x33d8) + lVar21 * 4);
    uVar15 = (uint)local_1f8;
    uVar12 = uVar15 + 0x3ff;
    if (-1 < (int)uVar15) {
      uVar12 = uVar15;
    }
    local_1c0 = (longlong)((int)uVar12 >> 10);
    local_1c8 = (ulonglong)(int)(uVar15 - (uVar12 & 0xfffffc00));
    uVar23 = 0;
    local_1b8 = uVar24;
    local_1a0 = lVar21;
LAB_1472e2353:
    unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),1);
    bVar28 = 1;
    uVar24 = local_1e0;
    local_1d0 = uVar23;
    do {
      plVar18 = *(longlong **)(param_1 + 0x30);
      dVar26 = (double)(uVar23 << 0x20 | uVar24);
      local_211 = bVar28;
      if ((int)plVar18[1] != *(int *)((longlong)plVar18 + 0x34)) {
        plVar22 = plVar18 + 7;
        if ((longlong *)plVar18[8] != (longlong *)0x0) {
          plVar22 = (longlong *)plVar18[8];
        }
        iVar20 = *(int *)((longlong)plVar22 +
                         (ulonglong)
                         ((int)plVar18[9] - 1U & ((uint)(uVar23 >> 0x14) & 0xfff ^ (uint)uVar24)) *
                         4);
        if (iVar20 != -1) {
          lVar17 = *plVar18;
          do {
            lVar21 = (longlong)iVar20 * 0x68;
            dVar27 = (double)(lVar17 + lVar21);
            if ((double)CONCAT44(*(undefined4 *)(lVar17 + 0x50 + lVar21),
                                 *(undefined4 *)(lVar17 + lVar21)) == dVar26) {
              if (dVar27 != 0.0) {
                uVar15 = *(uint *)(*(longlong *)(param_1 + 8) + 0x125b0);
                if ((uVar15 & 0x10) == 0) {
                  if (*(char *)(param_1 + 0x78) == '\x01') {
                    local_158 = (double)CONCAT44((int)uVar23,(int)local_1e0);
                    bVar11 = FUN_1472e782a(*(undefined8 *)(param_1 + 0x28),&local_158);
LAB_1472e24fd:
                    bVar28 = 1;
                  }
                  else {
                    puVar3 = *(undefined4 **)(param_1 + 0x48);
                    if (*(char *)((longlong)puVar3 + 0xd) == '\x01') {
                      cVar10 = FUN_1472d9f68(*(undefined8 *)(param_1 + 0x20),
                                             *(undefined4 *)((longlong)dVar27 + 0x38));
                      if (cVar10 != '\0') {
                        bVar11 = FUN_1472da286(*(undefined8 *)(param_1 + 0x20),
                                               *(undefined4 *)((longlong)dVar27 + 0x40));
                        bVar11 = bVar11 ^ 1;
                        goto LAB_1472e24fd;
                      }
                      bVar11 = 0;
                      bVar28 = 0;
                    }
                    else {
                      local_158 = 0.0;
                      local_198 = (double)((ulonglong)local_198 & 0xffffffffffffff00);
                      iVar20 = puVar3[1];
                      local_238 = &local_198;
                      lVar17 = FUN_1472e78aa(dVar27,*(undefined4 *)(param_1 + 0x68),iVar20,*puVar3);
                      if (lVar17 == 0) {
                        if ((iVar20 < 2) && (DAT_14ca84e10 == 0x7fffffff)) {
                          bVar11 = *(float *)((longlong)dVar27 + 0x44) +
                                   *(float *)(DAT_14cb0d2b0 + 0xd8c) < *(float *)(param_1 + 0x70);
                          bVar28 = 1;
                        }
                        else {
                          bVar11 = *(byte *)((longlong)dVar27 + 0x54) >> 6 & 1;
                          bVar28 = *(byte *)((longlong)dVar27 + 0x54) >> 7;
                        }
                        if ((bool)bVar11 == false) {
                          *(undefined4 *)((longlong)dVar27 + 0x4c) =
                               *(undefined4 *)(DAT_14cb0d2b0 + 0xd90);
                        }
                        else {
                          *(undefined4 *)((longlong)dVar27 + 0x4c) = 0;
                        }
                      }
                      else {
                        local_238 = (undefined8 *)CONCAT44(local_238._4_4_,0xffffffff);
                        cVar10 = (**(code **)(*DAT_14ca83900 + 0x2b8))
                                           (DAT_14ca83900,lVar17,&local_158,1);
                        if (cVar10 == '\0') {
                          bVar11 = false;
                          bVar28 = 0;
                        }
                        else {
                          bVar11 = local_158._0_4_ == 0;
                          if ((bool)bVar11) {
                            fVar30 = 0.0;
                          }
                          else {
                            fVar30 = (float)((ulonglong)local_158 & 0xffffffff) *
                                     *(float *)(*(longlong *)(param_1 + 8) + 0x137d0);
                          }
                          *(float *)((longlong)dVar27 + 0x4c) = fVar30;
                          bVar28 = (byte)local_198 ^ 1;
                        }
                        local_1e8[1] = local_1e8[1] + 1;
                      }
                    }
                  }
                  if ((DAT_14ca4b410 != 0) && (bVar11 != 0)) {
                    plVar18 = local_1f0;
                    uVar24 = uVar23;
                    if ((char)local_210 == '\0') {
                      plVar18 = *(longlong **)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x33c0) +
                                 local_1c0 * 8);
                      uVar24 = local_1c8;
                    }
                    lVar17 = *plVar18;
                    lVar21 = uVar24 * 0x38;
                    dStack_148 = *(double *)(lVar17 + 0x10 + lVar21);
                    dVar4 = *(double *)(lVar17 + 0x28 + lVar21);
                    local_130 = dStack_148 + dVar4;
                    local_150 = *(double *)(lVar17 + 8 + lVar21);
                    dVar5 = *(double *)(lVar17 + 0x20 + lVar21);
                    dStack_138 = local_150 + dVar5;
                    dVar6 = *(double *)(lVar17 + 0x18 + lVar21);
                    local_140 = *(double *)(lVar17 + lVar21) + dVar6;
                    dStack_148 = dStack_148 - dVar4;
                    local_150 = local_150 - dVar5;
                    local_158 = *(double *)(lVar17 + lVar21) - dVar6;
                    dStack_128 = (double)CONCAT71(dStack_128._1_7_,1);
                    local_198 = (double)CONCAT44(DAT_14c75905c,DAT_14c758d28);
                    uStack_190 = (double)CONCAT44(0x3f800000,DAT_14c758d28);
                    local_230 = 0;
                    local_238 = (undefined8 *)((ulonglong)local_238 & 0xffffffff00000000);
                    local_228 = 0;
                    FUN_147cb7407(*(undefined8 *)(*local_208 + 0x18),&local_158,&local_198,1);
                  }
                }
                else {
                  bVar28 = (byte)uVar15 >> 5 & 1;
                  bVar11 = 0;
                }
                goto LAB_1472e2409;
              }
              break;
            }
            iVar20 = *(int *)((longlong)dVar27 + 0x60);
          } while (iVar20 != -1);
        }
      }
      local_158 = (double)CONCAT44(local_158._4_4_,(uint)uVar24);
      local_120 = 0xffffffffffffffff;
      local_118 = 0;
      uStack_110 = 0;
      bVar11 = 0;
      local_104 = 0;
      local_ff = 0;
      local_103 = 0;
      local_130 = 0.0;
      dStack_128 = 0.0;
      local_140 = 0.0;
      dStack_138 = 0.0;
      local_150 = 0.0;
      dStack_148 = 0.0;
      plVar18 = (longlong *)local_208[5];
      local_108 = (int)uVar23;
      FUN_144a8c452(plVar18,&local_198,&local_158);
      dVar27 = (double)((longlong)(int)local_198 * 0x68 + *plVar18);
      bVar28 = 0;
LAB_1472e2409:
      if (*(char *)(*(longlong *)(param_1 + 0x48) + 0xc) != '\x01') goto LAB_1472e2650;
      if (*(char *)(param_1 + 0x79) == '\x01') {
        bVar25 = *(byte *)((longlong)dVar27 + 0x54);
        if ((bVar25 & 0x3f) == 0) {
          if (DAT_14c7609dc < (uint)(*(int *)(param_1 + 0x68) - *(int *)((longlong)dVar27 + 0x3c)))
          {
            bVar19 = DAT_14c7609e0 & 0x3f;
            bVar25 = bVar25 | bVar19;
            *(byte *)((longlong)dVar27 + 0x54) = bVar25;
            if (bVar19 != 0) goto LAB_1472e242d;
          }
          goto LAB_1472e252b;
        }
LAB_1472e242d:
        *(byte *)((longlong)dVar27 + 0x54) = bVar25 & 0xc0 | bVar25 - 1 & 0x3f;
        bVar29 = true;
      }
      else {
LAB_1472e252b:
        bVar29 = false;
      }
      plVar18 = local_1f0;
      uVar24 = uVar23;
      if ((char)local_210 == '\0') {
        plVar18 = *(longlong **)
                   (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x33c0) + local_1c0 * 8);
        uVar24 = local_1c8;
      }
      lVar17 = *plVar18;
      if (bVar29) {
        local_180 = (double)DAT_14ca4b4c0;
      }
      else {
        local_180 = 0.0;
      }
      lVar21 = uVar24 * 0x38;
      local_180 = (double)_DAT_14ca4b4d8 + local_180;
      dVar7 = *(double *)(lVar17 + 0x30 + lVar21) + local_180;
      local_170 = *(double *)(lVar17 + 0x28 + lVar21) + local_180;
      dStack_178 = *(double *)(lVar17 + 0x20 + lVar21) + local_180;
      local_180 = local_180 + *(double *)(lVar17 + 0x18 + lVar21);
      dVar8 = *(double *)(lVar17 + lVar21);
      dVar9 = ((double *)(lVar17 + lVar21))[1];
      dVar4 = *(double *)(lVar17 + 0x10 + lVar21);
      dVar5 = dVar8 - *(double *)(param_1 + 0x50);
      dVar31 = dVar9 - *(double *)(param_1 + 0x58);
      dVar6 = dVar4 - *(double *)(param_1 + 0x60);
      local_198 = dVar8;
      uStack_190 = dVar9;
      local_188 = dVar4;
      local_168 = dVar7;
      if ((double)*(float *)(param_1 + 0x74) <= dVar6 * dVar6 + dVar31 * dVar31 + dVar5 * dVar5) {
        lVar17 = *(longlong *)(param_1 + 8);
        if (*(char *)(lVar17 + 0x2140) == '\x01') {
          if ((*(double *)(lVar17 + 0x2160) * dVar4 +
              *(double *)(lVar17 + 0x2150) * dVar8 + dVar9 * *(double *)(lVar17 + 0x2158)) -
              *(double *)(lVar17 + 0x2168) <
              -(ABS(local_170 * *(double *)(lVar17 + 0x2160)) +
               ABS(dStack_178 * *(double *)(lVar17 + 0x2158)) +
               ABS(local_180 * *(double *)(lVar17 + 0x2150)))) goto LAB_1472e2773;
          goto LAB_1472e264b;
        }
        if (1.0 < *(double *)(lVar17 + 0x8a8) || *(double *)(lVar17 + 0x8a8) == 1.0) {
          FUN_1436a4df0(lVar17,&local_158,&local_198);
          if (dStack_148 - dVar7 * *(double *)(lVar17 + 0x880) < 1.0) goto LAB_1472e2773;
          goto LAB_1472e264b;
        }
        if (4398046511104.0 <= dVar7) goto LAB_1472e264b;
LAB_1472e2773:
        *(undefined4 *)((longlong)dVar27 + 0x38) = *(undefined4 *)(param_1 + 0x68);
        if (*(char *)(param_1 + 0x78) == '\x01') {
          lVar17 = *(longlong *)(param_1 + 8);
          local_140 = dVar4 + *(double *)(lVar17 + 0x1040);
          dStack_148 = dVar9 + *(double *)(lVar17 + 0x1038);
          local_150 = dVar8 + *(double *)(lVar17 + 0x1030);
          dStack_128 = local_170;
          dStack_138 = local_180;
          local_130 = dStack_178;
          local_238 = (undefined8 *)local_208[2];
          local_158 = dVar26;
          FUN_1472dab7e(*(undefined8 *)(*local_208 + 0x28),&local_158,&local_150);
        }
        else if (*(char *)(*(longlong *)(param_1 + 0x48) + 0xd) == '\x01') {
          local_140 = local_188;
          local_150 = local_198;
          dStack_148 = uStack_190;
          dStack_138 = local_180;
          local_130 = dStack_178;
          dStack_128 = local_170;
          local_158 = dVar27;
          uVar13 = FUN_1472d9f80(*(undefined8 *)(*local_208 + 0x20),&local_150,&dStack_138);
          *(undefined4 *)((longlong)local_158 + 0x40) = uVar13;
        }
        else {
          if ((local_1d4 & 4) == 0 || (char)local_210 != '\0') {
LAB_1472e291f:
            cVar10 = '\0';
          }
          else {
            cVar10 = '\x01';
            if (bVar11 == 0) {
              if (bVar28 != 0) {
                LOCK();
                UNLOCK();
                bVar29 = 0xdf2 < DAT_14ca475f0;
                uVar15 = DAT_14ca475f0;
                DAT_14ca475f0 = DAT_14ca475f0 + 1;
                if (bVar29) {
                  LOCK();
                  DAT_14ca475f0 = 0;
                  UNLOCK();
                  uVar15 = 0;
                }
                if (DAT_14ca84e14 == '\x01') {
                  fVar30 = *(float *)((longlong)dVar27 + 0x4c) / *(float *)(DAT_14cb0d2b0 + 0xd90);
                  if (fVar30 <= 1.0) {
                    fVar30 = 1.0;
                  }
                  if ((float)(&DAT_14ca475f4)[uVar15] * fVar30 < *(float *)(DAT_14cb0d2b0 + 0xd90))
                  goto LAB_1472e291f;
                }
                else if ((float)(&DAT_14ca475f4)[uVar15] * 0.125 * *(float *)(param_1 + 0x6c) <
                         *(float *)(param_1 + 0x70) - *(float *)((longlong)dVar27 + 0x44))
                goto LAB_1472e291f;
                goto LAB_1472e2650;
              }
              goto LAB_1472e291f;
            }
          }
          lVar17 = *(longlong *)(param_1 + 8);
          dVar4 = local_188 + *(double *)(lVar17 + 0x1040);
          dVar5 = uStack_190 + *(double *)(lVar17 + 0x1038);
          dVar6 = local_198 + *(double *)(lVar17 + 0x1030);
          if ((cVar10 == '\0') && (DAT_14ca84e10 != 0x7fffffff)) {
            uVar15 = 0;
            lVar17 = -4;
            do {
              if ((*(char *)((longlong)dVar27 + 0x59 + lVar17) == '\0') &&
                 (uVar12 = *(uint *)((longlong)dVar27 + 0x38 + lVar17 * 4), uVar15 < uVar12)) {
                uVar15 = uVar12;
              }
              lVar17 = lVar17 + 1;
            } while (lVar17 != 0);
            iVar20 = (int)local_208[4];
            *(uint *)(local_208 + 4) = iVar20 + 1U;
            plVar18 = local_208 + 3;
            lVar17 = (longlong)iVar20;
            if (*(uint *)((longlong)local_208 + 0x24) < iVar20 + 1U) {
              local_1b0 = (longlong)iVar20;
              local_1a8 = local_208 + 3;
              FUN_1472e7a44();
              plVar18 = local_1a8;
              lVar17 = local_1b0;
            }
            lVar21 = *plVar18;
            lVar17 = lVar17 * 0x40;
            *(double *)(lVar21 + lVar17) = dVar26;
            *(double *)(lVar21 + 8 + lVar17) = dVar6;
            *(double *)(lVar21 + 0x10 + lVar17) = dVar5;
            *(double *)(lVar21 + 0x18 + lVar17) = dVar4;
            pdVar2 = (double *)(lVar21 + 0x20 + lVar17);
            *pdVar2 = local_180;
            pdVar2[1] = dStack_178;
            *(double *)(lVar21 + 0x30 + lVar17) = local_170;
            *(uint *)(lVar21 + 0x38 + lVar17) = uVar15;
          }
          else {
            dStack_128 = local_170;
            dStack_138 = local_180;
            local_130 = dStack_178;
            local_120 = CONCAT71(local_120._1_7_,cVar10);
            local_158 = dVar27;
            local_150 = dVar6;
            dStack_148 = dVar5;
            local_140 = dVar4;
            FUN_1456ce842(local_208,&local_158);
          }
        }
      }
      else {
LAB_1472e264b:
        bVar11 = 0;
        bVar28 = 1;
      }
LAB_1472e2650:
      uVar24 = local_1e0;
      uVar13 = *(undefined4 *)(param_1 + 0x70);
      *(undefined4 *)((longlong)dVar27 + 0x48) = uVar13;
      bVar25 = bVar11 & bVar28;
      if ((bVar11 == 0) && ((bVar28 & 1) != 0)) {
        *(undefined4 *)((longlong)dVar27 + 0x44) = uVar13;
        bVar25 = 1;
      }
      *(undefined4 *)((longlong)dVar27 + 0x3c) = *(undefined4 *)(param_1 + 0x68);
      *(byte *)((longlong)dVar27 + 0x54) =
           bVar28 << 7 | *(byte *)((longlong)dVar27 + 0x54) & 0x3f | bVar11 << 6;
      if ((char)local_210 == '\0') goto LAB_1472e2b0e;
      plVar18 = *(longlong **)(param_1 + 0x38);
      iVar20 = (int)plVar18[1];
      *(uint *)(plVar18 + 1) = iVar20 + 1U;
      if (*(uint *)((longlong)plVar18 + 0xc) < iVar20 + 1U) {
        FUN_1401c3474(plVar18,iVar20);
      }
      *(byte *)(*plVar18 + (longlong)iVar20) = bVar11;
      bVar28 = local_211 & bVar11;
      unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),(byte)unaff_R12 & (bVar11 ^ 1) & bVar25);
      uVar23 = uVar23 + 1;
      if (uVar23 == local_1b8) {
        local_210 = unaff_R12 & 0xffffffff;
        lVar21 = local_1a0;
        goto LAB_1472e2c3d;
      }
    } while( true );
  }
  plVar18 = *(longlong **)(*(longlong *)(lVar17 + 0x3358) + lVar21 * 8);
  local_1f0 = (longlong *)(**(code **)(*plVar18 + 0xb8))(plVar18,*(undefined8 *)(param_1 + 8));
  uVar15 = *(uint *)(local_1f0 + 1);
  uVar24 = (ulonglong)uVar15;
  if (uVar15 == 0) {
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x3128);
    lVar21 = *(longlong *)(param_1 + 8) + 0x3118;
    if (lVar17 != 0) {
      lVar21 = lVar17;
    }
    iVar20 = (int)local_1f8;
    iVar14 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar14 = iVar20;
    }
    bVar28 = (byte)local_1f8 & 0x1f;
    puVar1 = (uint *)(lVar21 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar28 | 0xfffffffeU >> 0x20 - bVar28);
  }
  else {
    puVar16 = *(undefined8 **)(param_1 + 0x38);
    if ((puVar16 == (undefined8 *)0x0) ||
       (*(int *)((longlong)puVar16 + 0xc) < (int)(*(int *)(puVar16 + 1) + uVar15))) {
      puVar16 = (undefined8 *)FUN_14302d6f4(*(longlong *)(param_1 + 8) + 0x30f0);
      *puVar16 = 0;
      puVar16[1] = 0;
      *(undefined8 **)(param_1 + 0x38) = puVar16;
      uVar12 = 0x400;
      if (0x400 < uVar15) {
        uVar12 = uVar15;
      }
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar12);
      }
      if (*(int *)((longlong)puVar16 + 0xc) < (int)uVar12) {
        FUN_14475e67c(puVar16);
        puVar16 = *(undefined8 **)(param_1 + 0x38);
      }
    }
    local_1fc = *(int *)(puVar16 + 1);
    local_210 = CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
    if (0 < (int)uVar15) {
      lVar17 = *(longlong *)(param_1 + 0x40);
      goto LAB_1472e22ce;
    }
    bVar28 = 1;
LAB_1472e2c3d:
    plVar18 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x3358) + lVar21 * 8);
    local_238 = (undefined8 *)
                CONCAT44(local_238._4_4_,*(int *)(*(longlong *)(param_1 + 0x38) + 8) - local_1fc);
    (**(code **)(*plVar18 + 0xc0))(plVar18,*(undefined8 *)(param_1 + 8));
    iVar20 = (int)local_1f8;
    if (bVar28 == 0) {
      if ((char)local_210 != '\0') {
        lVar17 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x3168);
        lVar21 = *(longlong *)(param_1 + 8) + 0x3158;
        if (lVar17 != 0) {
          lVar21 = lVar17;
        }
        iVar14 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar14 = iVar20;
        }
        puVar1 = (uint *)(lVar21 + (longlong)(iVar14 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)local_1f8 & 0x1f);
      }
    }
    else {
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x3128);
      lVar21 = *(longlong *)(param_1 + 8) + 0x3118;
      if (lVar17 != 0) {
        lVar21 = lVar17;
      }
      iVar14 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar14 = iVar20;
      }
      bVar28 = (byte)local_1f8 & 0x1f;
      puVar1 = (uint *)(lVar21 + (longlong)(iVar14 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar28 | 0xfffffffeU >> 0x20 - bVar28);
      *local_1e8 = *local_1e8 + 1;
    }
  }
LAB_1472e2cb6:
  if ((local_f0 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1472e2b0e:
  iVar20 = (int)local_1f8;
  if (bVar11 == 0) {
    if (bVar25 != 0) {
      iVar14 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar14 = iVar20;
      }
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x3168);
      lVar21 = *(longlong *)(param_1 + 8) + 0x3158;
      if (lVar17 != 0) {
        lVar21 = lVar17;
      }
      puVar1 = (uint *)(lVar21 + (longlong)(iVar14 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)local_1f8 & 0x1f);
    }
  }
  else {
    iVar14 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar14 = iVar20;
    }
    bVar28 = (byte)local_1f8 & 0x1f;
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x3128);
    lVar21 = *(longlong *)(param_1 + 8) + 0x3118;
    if (lVar17 != 0) {
      lVar21 = lVar17;
    }
    puVar1 = (uint *)(lVar21 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar28 | 0xfffffffeU >> 0x20 - bVar28);
    *local_1e8 = *local_1e8 + 1;
  }
  uVar23 = local_1d0 + 1;
  if (uVar23 == local_1b8) goto LAB_1472e2cb6;
  goto LAB_1472e2353;
}



// FUNCTION 1472e3072 FUN_1472e3072 body=28 status=ok
// SIG undefined FUN_1472e3072(void)

void FUN_1472e3072(longlong param_1,undefined8 param_2)

{
  FUN_1401f5ed8();
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 1472e308e FUN_1472e308e body=77 status=ok
// SIG undefined FUN_1472e308e(void)

void FUN_1472e308e(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_14485b438(param_1 + 8);
  FUN_1472e1b76(param_1 + 0xd0);
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
  LOCK();
  piVar1 = (int *)(lVar3 + 0x58);
  *piVar1 = *piVar1 + (int)uVar2;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(lVar3 + 0x5c);
  *piVar1 = *piVar1 + (int)((ulonglong)uVar2 >> 0x20);
  UNLOCK();
  FUN_1403376bc(param_1,param_2);
  return;
}



// FUNCTION 1472e30dc FUN_1472e30dc body=138 status=ok
// SIG undefined FUN_1472e30dc(void)

undefined8 * FUN_1472e30dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14302e0b8();
  FUN_1403fb00c(puVar1,param_2);
  *puVar1 = &PTR_FUN_14a2f9900;
  FUN_1472e1a8c(puVar1 + 10,param_2,puVar1 + 8);
  puVar1[0x1a] = puVar1 + 10;
  puVar1[0x1b] = &DAT_14ca85100;
  puVar1[0x1c] = puVar1 + 1;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = puVar1[0xc] + 0x2158;
  puVar1[0x20] = 0;
  return puVar1;
}



// FUNCTION 1472e3166 FUN_1472e3166 body=428 status=ok
// SIG undefined FUN_1472e3166(void)

void FUN_1472e3166(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = *param_2 + *(double *)(param_1 + 0xb48);
  *(double *)(param_1 + 0xb48) = dVar3;
  dVar4 = param_2[1] + *(double *)(param_1 + 0xb50);
  *(double *)(param_1 + 0xb50) = dVar4;
  dVar5 = param_2[2] + *(double *)(param_1 + 0xb58);
  *(double *)(param_1 + 0xb58) = dVar5;
  *(double *)(param_1 + 0xb30) = *(double *)(param_1 + 0xb30) - *param_2;
  *(double *)(param_1 + 0xb38) = *(double *)(param_1 + 0xb38) - param_2[1];
  *(double *)(param_1 + 0xb40) = *(double *)(param_1 + 0xb40) - param_2[2];
  dVar1 = param_2[2];
  dVar2 = param_2[1];
  dVar6 = -*param_2;
  *(double *)(param_1 + 0x510) =
       *(double *)(param_1 + 0x510) +
       *(double *)(param_1 + 0x510) * 0.0 +
       ((dVar6 * *(double *)(param_1 + 0x4b0) - dVar2 * *(double *)(param_1 + 0x4d0)) -
       dVar1 * *(double *)(param_1 + 0x4f0));
  *(double *)(param_1 + 0x518) =
       *(double *)(param_1 + 0x518) * 0.0 +
       ((dVar6 * *(double *)(param_1 + 0x4b8) - dVar2 * *(double *)(param_1 + 0x4d8)) -
       dVar1 * *(double *)(param_1 + 0x4f8)) + *(double *)(param_1 + 0x518);
  *(double *)(param_1 + 0x520) =
       ((*(double *)(param_1 + 0x4c0) * dVar6 - dVar2 * *(double *)(param_1 + 0x4e0)) -
       dVar1 * *(double *)(param_1 + 0x500)) + *(double *)(param_1 + 0x520) * 0.0 +
       *(double *)(param_1 + 0x520);
  *(double *)(param_1 + 0x590) = dVar3;
  *(double *)(param_1 + 0x598) = dVar4;
  *(double *)(param_1 + 0x5a0) = dVar5;
  FUN_144b16ef4();
  return;
}



// FUNCTION 1472e3312 FUN_1472e3312 body=153 status=ok
// SIG undefined FUN_1472e3312(void)

undefined8
FUN_1472e3312(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_143035570();
  FUN_1401a700c(&local_3c,0x41);
  uVar3 = (ulonglong)local_3c;
  uVar1 = *param_4;
  FUN_1401a700c(&local_3c,0x3e);
  local_58 = uVar1;
  local_50 = uVar3;
  FUN_147bbf104(uVar2,*param_2,param_3,local_3c);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e33ac FUN_1472e33ac body=384 status=ok
// SIG undefined FUN_1472e33ac(void)

void FUN_1472e33ac(longlong *param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  uint local_4c;
  uint *local_48;
  longlong *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = param_2;
  if (param_3 != 0 && param_2 != 0) {
    plVar1 = param_1 + 1;
    if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
      plVar4 = param_1 + 8;
      if ((longlong *)param_1[9] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[9];
      }
      uVar5 = *(uint *)((longlong)plVar4 + (ulonglong)((int)param_1[10] - 1U & param_2) * 4);
      if (uVar5 != 0xffffffff) {
        do {
          puVar6 = (uint *)(*plVar1 + (longlong)(int)uVar5 * 0x28);
          if (*puVar6 == param_2) {
            if (puVar6 != (uint *)0x0) {
              puVar6 = puVar6 + 2;
              goto LAB_1472e3493;
            }
            break;
          }
          uVar5 = puVar6[8];
        } while (uVar5 != 0xffffffff);
      }
    }
    local_40 = local_68;
    local_68[0] = 0;
    local_68[1] = 0;
    local_68[2] = 0;
    local_48 = &local_4c;
    FUN_1472e89ae(plVar1);
    lVar2 = *plVar1;
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + (longlong)local_34 * 0x28;
    puVar6 = (uint *)(lVar2 + 8);
    lVar3 = *param_1;
    if ((longlong)*(int *)(lVar3 + 0x33e0) != 0) {
      uVar8 = 0;
      lVar7 = 0;
      do {
        if (*(uint *)(*(longlong *)(lVar3 + 0x33d8) + uVar8) == local_4c) {
          if ((int)(~uVar8 >> 2) != 0) {
            *(undefined8 *)(lVar2 + 0x18) =
                 *(undefined8 *)(*(longlong *)(lVar3 + 0x3330) + (lVar7 >> 0x20) * 8);
          }
          break;
        }
        lVar7 = lVar7 + 0x100000000;
        uVar8 = uVar8 + 4;
      } while ((longlong)*(int *)(lVar3 + 0x33e0) * 4 != uVar8);
    }
LAB_1472e3493:
    local_68[0] = param_3;
    FUN_1472e5b3c(puVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472e352e FUN_1472e352e body=211 status=ok
// SIG undefined FUN_1472e352e(void)

void FUN_1472e352e(longlong param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_58 [44];
  uint local_2c;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  if ((param_3 != 0 && param_2 != 0) && (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c))) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar3 * 0x28);
        if (*puVar1 == param_2) {
          if (puVar1 != (uint *)&DAT_fffffffffffffff8 && puVar1 != (uint *)0x0) {
            local_20 = &local_28;
            local_28 = param_3;
            FUN_1472e5ba6();
            if (puVar1[4] == 0) {
              FUN_1472e8e88((longlong *)(param_1 + 8),&local_2c);
            }
          }
          break;
        }
        uVar3 = puVar1[8];
      } while (uVar3 != 0xffffffff);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472e3602 FUN_1472e3602 body=410 status=ok
// SIG undefined FUN_1472e3602(void)

void FUN_1472e3602(longlong param_1,longlong param_2,longlong *param_3,undefined2 *param_4,
                  char param_5)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  
  if (param_3[2] != 0) {
    *param_4 = *(undefined2 *)(param_2 + 0x608);
    if ((longlong)(int)param_3[1] != 0) {
      plVar9 = (longlong *)*param_3;
      plVar1 = plVar9 + (int)param_3[1];
      do {
        lVar3 = *plVar9;
        if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x10) != 0)) &&
            (uVar7 = *(uint *)(lVar3 + 0x158), uVar7 < 0x7fffffff)) &&
           ((int)uVar7 < *(int *)(param_2 + 0x598))) {
          uVar6 = 1 << ((byte)uVar7 & 0x1f);
          lVar5 = *(longlong *)(param_2 + 0x590);
          if (*(longlong *)(param_2 + 0x590) == 0) {
            lVar5 = param_2 + 0x580;
          }
          uVar4 = (ulonglong)(uVar7 >> 5);
          puVar2 = (uint *)(lVar5 + uVar4 * 4);
          *puVar2 = *puVar2 | uVar6;
          lVar5 = *(longlong *)(param_2 + 0x5b0);
          if (*(longlong *)(param_2 + 0x5b0) == 0) {
            lVar5 = param_2 + 0x5a0;
          }
          if (param_5 == '\0') {
            uVar8 = *(uint *)(lVar5 + uVar4 * 4) & ~uVar6;
          }
          else {
            uVar8 = *(uint *)(lVar5 + uVar4 * 4) | uVar6;
          }
          uVar4 = (ulonglong)((uVar7 >> 5) << 2);
          *(uint *)(lVar5 + uVar4) = uVar8;
          lVar5 = *(longlong *)(param_2 + 0x5f0);
          if (*(longlong *)(param_2 + 0x5f0) == 0) {
            lVar5 = param_2 + 0x5e0;
          }
          *(uint *)(lVar5 + uVar4) = *(uint *)(lVar5 + uVar4) & ~uVar6;
          lVar5 = *(longlong *)(param_2 + 0x5d0);
          if (*(longlong *)(param_2 + 0x5d0) == 0) {
            lVar5 = param_2 + 0x5c0;
          }
          *(uint *)(lVar5 + uVar4) = *(uint *)(lVar5 + uVar4) | uVar6;
          if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
            lVar5 = *(longlong *)(param_1 + 0x48);
            if (*(longlong *)(param_1 + 0x48) == 0) {
              lVar5 = param_1 + 0x40;
            }
            uVar7 = *(uint *)(lVar5 + (ulonglong)
                                      (*(int *)(param_1 + 0x50) - 1U & *(uint *)(lVar3 + 0x10)) * 4)
            ;
            if (uVar7 != 0xffffffff) {
              do {
                puVar2 = (uint *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar7 * 0x28);
                if (*puVar2 == *(uint *)(lVar3 + 0x10)) {
                  if (puVar2 != (uint *)&DAT_fffffffffffffff8 && puVar2 != (uint *)0x0) {
                    FUN_1472e379c(param_1,param_2);
                  }
                  break;
                }
                uVar7 = puVar2[8];
              } while (uVar7 != 0xffffffff);
            }
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar1);
    }
  }
  return;
}



// FUNCTION 1472e379c FUN_1472e379c body=326 status=ok
// SIG undefined FUN_1472e379c(void)

void FUN_1472e379c(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  short *psVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  
  lVar3 = param_3[2];
  if (lVar3 != 0) {
    psVar5 = (short *)FUN_1472e9294(param_2 + 0x610,*(undefined4 *)(lVar3 + 0x10),lVar3 + 0x10);
    if (*psVar5 != *(short *)(param_2 + 0x608)) {
      *psVar5 = *(short *)(param_2 + 0x608);
      if ((longlong)(int)param_3[1] != 0) {
        plVar8 = (longlong *)*param_3;
        plVar1 = plVar8 + (int)param_3[1];
        do {
          lVar3 = *plVar8;
          if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x10) != 0)) &&
              (uVar7 = *(uint *)(lVar3 + 0x158), uVar7 < 0x7fffffff)) &&
             ((int)uVar7 < *(int *)(param_2 + 0x5f8))) {
            lVar6 = *(longlong *)(param_2 + 0x5f0);
            if (*(longlong *)(param_2 + 0x5f0) == 0) {
              lVar6 = param_2 + 0x5e0;
            }
            puVar2 = (uint *)(lVar6 + (ulonglong)(uVar7 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << ((byte)uVar7 & 0x1f);
            lVar6 = *(longlong *)(param_2 + 0x5d0);
            if (*(longlong *)(param_2 + 0x5d0) == 0) {
              lVar6 = param_2 + 0x5c0;
            }
            bVar4 = (byte)uVar7 & 0x1f;
            puVar2 = (uint *)(lVar6 + (ulonglong)(uVar7 >> 5) * 4);
            *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
            if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
              lVar6 = *(longlong *)(param_1 + 0x48);
              if (*(longlong *)(param_1 + 0x48) == 0) {
                lVar6 = param_1 + 0x40;
              }
              uVar7 = *(uint *)(lVar6 + (ulonglong)
                                        (*(int *)(param_1 + 0x50) - 1U & *(uint *)(lVar3 + 0x10)) *
                                        4);
              if (uVar7 != 0xffffffff) {
                do {
                  puVar2 = (uint *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar7 * 0x28);
                  if (*puVar2 == *(uint *)(lVar3 + 0x10)) {
                    if (puVar2 != (uint *)&DAT_fffffffffffffff8 && puVar2 != (uint *)0x0) {
                      FUN_1472e379c(param_1,param_2);
                    }
                    break;
                  }
                  uVar7 = puVar2[8];
                } while (uVar7 != 0xffffffff);
              }
            }
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar1);
      }
    }
  }
  return;
}



// FUNCTION 1472e38e2 FUN_1472e38e2 body=44 status=ok
// SIG undefined FUN_1472e38e2(void)

void FUN_1472e38e2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472e391a FUN_1472e391a body=39 status=ok
// SIG undefined FUN_1472e391a(void)

void FUN_1472e391a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1472e3942 FUN_1472e3942 body=138 status=ok
// SIG undefined FUN_1472e3942(void)

void * FUN_1472e3942(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472e39cc FUN_1472e39cc body=44 status=ok
// SIG undefined FUN_1472e39cc(void)

void FUN_1472e39cc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472e3a18 FUN_1472e3a18 body=96 status=ok
// SIG undefined FUN_1472e3a18(void)

undefined8 FUN_1472e3a18(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141597eb2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca4bcd0,1);
  return uVar3;
}



// FUNCTION 1472e3a78 FUN_1472e3a78 body=138 status=ok
// SIG undefined FUN_1472e3a78(void)

void * FUN_1472e3a78(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472e3b02 FUN_1472e3b02 body=254 status=ok
// SIG undefined FUN_1472e3b02(void)

void FUN_1472e3b02(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3108);
  plVar2 = *(longlong **)(param_1 + 0x13178);
  plVar3 = (longlong *)*param_2;
  if (plVar3 != plVar2) {
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x13180);
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != plVar2) {
    param_2[1] = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x13188);
  plVar3 = (longlong *)param_2[2];
  if (plVar3 != plVar2) {
    param_2[2] = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x131c0);
  plVar3 = (longlong *)param_2[3];
  if (plVar3 != plVar2) {
    param_2[3] = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
  }
  param_2[4] = lVar1 + 0x12a8;
  param_2[5] = lVar1 + 0x12b0;
  param_2[6] = lVar1 + 0x12b8;
  param_2[7] = lVar1 + 0x12f0;
  return;
}



// FUNCTION 1472e3c00 FUN_1472e3c00 body=80 status=ok
// SIG undefined FUN_1472e3c00(void)

void FUN_1472e3c00(longlong *param_1)

{
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x38))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001472e3c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x38))();
    return;
  }
  return;
}



// FUNCTION 1472e3c50 FUN_1472e3c50 body=59 status=ok
// SIG undefined FUN_1472e3c50(void)

undefined4 FUN_1472e3c50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar2 = DAT_14ca4cb10;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 4);
  uVar3 = 0;
  if (iVar1 != 0) {
    if ((iVar1 != 1) && (lVar4 = FUN_141508108(), lVar2 != lVar4)) {
      return 2;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1472e3c8c FUN_1472e3c8c body=136 status=ok
// SIG undefined FUN_1472e3c8c(void)

void FUN_1472e3c8c(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x248);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x248) = param_2;
    if ((uint)(*(int *)(param_1 + 0x24c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1472e996c(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x240);
    if (*(longlong *)(param_1 + 0x240) == 0) {
      lVar2 = param_1;
    }
    FUN_1472e9945((longlong)iVar1 * 0x60 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x248) = param_2;
    FUN_1472e9a8c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1472e3d18 FUN_1472e3d18 body=38 status=ok
// SIG undefined FUN_1472e3d18(void)

undefined8 FUN_1472e3d18(undefined8 param_1,int param_2)

{
  FUN_1448fc46c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e3d7c FUN_1472e3d7c body=138 status=ok
// SIG undefined FUN_1472e3d7c(void)

code * FUN_1472e3d7c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ParentTextureMipSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e3e06;
}



// FUNCTION 1472e3e06 FUN_1472e3e06 body=138 status=ok
// SIG undefined FUN_1472e3e06(void)

code * FUN_1472e3e06(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ParentTextureMip";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463067ec;
}



// FUNCTION 1472e3e90 FUN_1472e3e90 body=138 status=ok
// SIG undefined FUN_1472e3e90(void)

code * FUN_1472e3e90(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PixelViewPortMinMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e3f1a;
}



// FUNCTION 1472e3f1a FUN_1472e3f1a body=132 status=ok
// SIG undefined FUN_1472e3f1a(void)

undefined1 * FUN_1472e3f1a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DispatchThreadIdToBufferUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145dad37a;
}



// FUNCTION 1472e3f9e FUN_1472e3f9e body=258 status=ok
// SIG undefined FUN_1472e3f9e(void)

void FUN_1472e3f9e(void)

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
              0x110) < DAT_14ca4bc78) {
    FUN_144b3d300(&DAT_14ca4bc78);
    if (DAT_14ca4bc78 == -1) {
      FUN_145dc4ff4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x100;
      local_58 = 0x51;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca4bbf8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143021d1b);
      _Init_thread_footer(&DAT_14ca4bc78);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e40a2 FUN_1472e40a2 body=138 status=ok
// SIG undefined FUN_1472e40a2(void)

code * FUN_1472e40a2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FroxelArgsOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e412c;
}



// FUNCTION 1472e412c FUN_1472e412c body=138 status=ok
// SIG undefined FUN_1472e412c(void)

code * FUN_1472e412c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bFroxelIsOrtho";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c00000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e41b6;
}



// FUNCTION 1472e41b6 FUN_1472e41b6 body=138 status=ok
// SIG undefined FUN_1472e41b6(void)

code * FUN_1472e41b6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FroxelInvRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d3b30a;
}



// FUNCTION 1472e4240 FUN_1472e4240 body=138 status=ok
// SIG undefined FUN_1472e4240(void)

code * FUN_1472e4240(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FroxelClipToViewTransformBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e42ca;
}



// FUNCTION 1472e42ca FUN_1472e42ca body=138 status=ok
// SIG undefined FUN_1472e42ca(void)

code * FUN_1472e42ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FroxelClipToViewTransformScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c0000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e4354;
}



// FUNCTION 1472e4354 FUN_1472e4354 body=138 status=ok
// SIG undefined FUN_1472e4354(void)

code * FUN_1472e4354(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FroxelViewToClipTransformScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e43de;
}



// FUNCTION 1472e43de FUN_1472e43de body=138 status=ok
// SIG undefined FUN_1472e43de(void)

code * FUN_1472e43de(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FroxelNear";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x340000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e4468;
}



// FUNCTION 1472e4468 FUN_1472e4468 body=138 status=ok
// SIG undefined FUN_1472e4468(void)

code * FUN_1472e4468(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FroxelDepthScale1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e44f2;
}



// FUNCTION 1472e44f2 FUN_1472e44f2 body=138 status=ok
// SIG undefined FUN_1472e44f2(void)

code * FUN_1472e44f2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FroxelRecNearScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e457c;
}



// FUNCTION 1472e457c FUN_1472e457c body=138 status=ok
// SIG undefined FUN_1472e457c(void)

code * FUN_1472e457c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FroxelRecLog2DepthScale1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e4606;
}



// FUNCTION 1472e4606 FUN_1472e4606 body=138 status=ok
// SIG undefined FUN_1472e4606(void)

code * FUN_1472e4606(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FroxelClipToViewScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000016;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d3b392;
}



// FUNCTION 1472e4694 FUN_1472e4694 body=230 status=ok
// SIG undefined FUN_1472e4694(void)

void FUN_1472e4694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145dace8c();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca4bae8,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_145dace8c();
  FUN_1472e491a(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e477c FUN_1472e477c body=38 status=ok
// SIG undefined FUN_1472e477c(void)

undefined8 FUN_1472e477c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e47a2 FUN_1472e47a2 body=219 status=ok
// SIG undefined FUN_1472e47a2(void)

void FUN_1472e47a2(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_143021d40(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 1472e487e FUN_1472e487e body=125 status=ok
// SIG undefined FUN_1472e487e(void)

void FUN_1472e487e(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0x3f80000000000000;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  lVar1 = 0x72;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x132);
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined1 (*) [16])(param_1 + 0x24) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2a] = 0;
  return;
}



// FUNCTION 1472e48fc FUN_1472e48fc body=29 status=ok
// SIG undefined FUN_1472e48fc(void)

undefined8 FUN_1472e48fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e491a FUN_1472e491a body=354 status=ok
// SIG undefined FUN_1472e491a(void)

void FUN_1472e491a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_48 = DAT_14ca4bb30;
  if (DAT_14ca4bb30 != 0) {
    LOCK();
    *(int *)(DAT_14ca4bb30 + 8) = *(int *)(DAT_14ca4bb30 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca4bae8;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a2f6cd0;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar3 = *(undefined4 *)(param_4 + 6);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar5 = *(undefined4 *)(param_4 + 7);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar7 = *(undefined4 *)(param_4 + 8);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar9 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e4a7e FUN_1472e4a7e body=38 status=ok
// SIG undefined FUN_1472e4a7e(void)

undefined8 FUN_1472e4a7e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e4aa4 FUN_1472e4aa4 body=85 status=ok
// SIG undefined FUN_1472e4aa4(void)

void FUN_1472e4aa4(longlong param_1,int param_2)

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
  FUN_1401ba26c();
  return;
}



// FUNCTION 1472e4afa FUN_1472e4afa body=87 status=ok
// SIG undefined FUN_1472e4afa(void)

void FUN_1472e4afa(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x30 + lVar5 * 0x38);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_1472e4b52();
  return;
}



// FUNCTION 1472e4b52 FUN_1472e4b52 body=72 status=ok
// SIG undefined FUN_1472e4b52(void)

void FUN_1472e4b52(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x38);
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1472e4b9a(param_1,param_2);
  return;
}



// FUNCTION 1472e4b9a FUN_1472e4b9a body=116 status=ok
// SIG undefined FUN_1472e4b9a(void)

void FUN_1472e4b9a(longlong *param_1,int param_2)

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



// FUNCTION 1472e4c0e FUN_1472e4c0e body=419 status=ok
// SIG undefined FUN_1472e4c0e(void)

void FUN_1472e4c0e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1472e4db2 FUN_1472e4db2 body=634 status=ok
// SIG undefined FUN_1472e4db2(void)

undefined8 FUN_1472e4db2(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar11;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  undefined8 in_RAX;
  undefined8 uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  double dVar10;
  double dVar12;
  
  dVar1 = *param_1;
  dVar2 = *param_1;
  dVar3 = param_1[1];
  dVar4 = param_1[1];
  dVar5 = param_1[2];
  dVar6 = param_1[2];
  dVar7 = *param_2;
  dVar8 = *param_2;
  dVar9 = param_2[1];
  dVar10 = param_2[1];
  dVar11 = param_2[2];
  dVar12 = param_2[2];
  lVar20 = -(ulonglong)
            (ABS(param_3[9]) * dVar12 + ABS(param_3[5]) * dVar10 + ABS(param_3[1]) * dVar8 <
            (dVar6 * param_3[9] + dVar4 * param_3[5] + dVar2 * param_3[1]) - param_3[0xd]);
  lVar21 = -(ulonglong)
            (ABS(param_3[0xb]) * dVar12 + ABS(param_3[7]) * dVar10 + ABS(param_3[3]) * dVar8 <
            (dVar6 * param_3[0xb] + dVar4 * param_3[7] + dVar2 * param_3[3]) - param_3[0xf]);
  auVar13._8_4_ = (int)lVar20;
  auVar13._0_8_ =
       -(ulonglong)
        (ABS(param_3[8]) * dVar11 + ABS(param_3[4]) * dVar9 + ABS(*param_3) * dVar7 <
        (dVar5 * param_3[8] + dVar3 * param_3[4] + dVar1 * *param_3) - param_3[0xc]);
  auVar13._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
  iVar17 = movmskpd((int)in_RAX,auVar13);
  auVar15._8_4_ = (int)lVar21;
  auVar15._0_8_ =
       -(ulonglong)
        (ABS(param_3[10]) * dVar11 + ABS(param_3[6]) * dVar9 + ABS(param_3[2]) * dVar7 <
        (dVar5 * param_3[10] + dVar3 * param_3[6] + dVar1 * param_3[2]) - param_3[0xe]);
  auVar15._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
  uVar19 = movmskpd((int)param_1,auVar15);
  if ((uVar19 & 0x3fffffff) == 0 && iVar17 == 0) {
    lVar20 = -(ulonglong)
              (ABS(param_3[0x19]) * dVar12 +
               ABS(param_3[0x15]) * dVar10 + ABS(param_3[0x11]) * dVar8 <
              (dVar6 * param_3[0x19] + dVar4 * param_3[0x15] + dVar2 * param_3[0x11]) -
              param_3[0x1d]);
    lVar21 = -(ulonglong)
              (ABS(param_3[0x1b]) * dVar12 +
               ABS(param_3[0x17]) * dVar10 + ABS(param_3[0x13]) * dVar8 <
              (dVar6 * param_3[0x1b] + dVar4 * param_3[0x17] + dVar2 * param_3[0x13]) -
              param_3[0x1f]);
    auVar16._8_4_ = (int)lVar20;
    auVar16._0_8_ =
         -(ulonglong)
          (ABS(param_3[0x18]) * dVar11 + ABS(param_3[0x14]) * dVar9 + ABS(param_3[0x10]) * dVar7 <
          (dVar5 * param_3[0x18] + dVar3 * param_3[0x14] + dVar1 * param_3[0x10]) - param_3[0x1c]);
    auVar16._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
    iVar17 = movmskpd(iVar17,auVar16);
    auVar14._8_4_ = (int)lVar21;
    auVar14._0_8_ =
         -(ulonglong)
          (ABS(param_3[0x1a]) * dVar11 + ABS(param_3[0x16]) * dVar9 + ABS(param_3[0x12]) * dVar7 <
          (dVar5 * param_3[0x1a] + dVar3 * param_3[0x16] + dVar1 * param_3[0x12]) - param_3[0x1e]);
    auVar14._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
    uVar19 = movmskpd(0,auVar14);
    uVar18 = CONCAT71((int7)(CONCAT44((int)((ulonglong)in_RAX >> 0x20),iVar17) >> 8),
                      (uVar19 & 0x3fffffff) == 0 && iVar17 == 0);
  }
  else {
    uVar18 = 0;
  }
  return uVar18;
}


