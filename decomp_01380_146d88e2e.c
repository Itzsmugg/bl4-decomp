// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146d88e2e FUN_146d88e2e body=38 status=ok
// SIG undefined FUN_146d88e2e(void)

undefined8 FUN_146d88e2e(undefined8 param_1,int param_2)

{
  FUN_1407fbc7e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d88e96 FUN_146d88e96 body=76 status=ok
// SIG undefined FUN_146d88e96(void)

void FUN_146d88e96(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 * 4 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 4),(longlong)iVar2 << 2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d88ee8 FUN_146d88ee8 body=47 status=ok
// SIG undefined FUN_146d88ee8(void)

longlong FUN_146d88ee8(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d88f5a FUN_146d88f5a body=79 status=ok
// SIG undefined FUN_146d88f5a(void)

void FUN_146d88f5a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar1 = iVar2 - (param_3 + param_2);
    if (iVar1 != 0) {
      _Dst = (void *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar1 << 4);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar2 - param_3;
  }
  return;
}



// FUNCTION 146d88faa FUN_146d88faa body=84 status=ok
// SIG undefined FUN_146d88faa(void)

void FUN_146d88faa(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) * 0x10 + *(longlong *)(param_1 + 8)),
            (longlong)iVar3 << 4);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 146d89004 FUN_146d89004 body=157 status=ok
// SIG undefined FUN_146d89004(void)

void FUN_146d89004(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 0x10);
  iVar3 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar3 + 1U) {
    FUN_140ac5818((longlong *)(param_3 + 8),iVar3);
  }
  uVar2 = puVar6[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar3 * 0x10);
  *puVar1 = *puVar6;
  puVar1[1] = uVar2;
  iVar3 = *(int *)(param_1 + 0x10);
  iVar5 = ~param_2 + iVar3;
  if (iVar5 != 0) {
    iVar4 = 1;
    if (iVar5 < 1) {
      iVar4 = iVar5;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar3 - iVar4) * 0x10 + *(longlong *)(param_1 + 8)),
            (longlong)iVar4 << 4);
    iVar3 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar3 + -1;
  return;
}



// FUNCTION 146d890a2 FUN_146d890a2 body=47 status=ok
// SIG undefined FUN_146d890a2(void)

longlong FUN_146d890a2(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d890d2 FUN_146d890d2 body=96 status=ok
// SIG undefined FUN_146d890d2(void)

void FUN_146d890d2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 146d89132 FUN_146d89132 body=63 status=ok
// SIG undefined FUN_146d89132(void)

void FUN_146d89132(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d89172(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 146d89172 FUN_146d89172 body=97 status=ok
// SIG undefined FUN_146d89172(void)

ulonglong FUN_146d89172(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146d891d4 FUN_146d891d4 body=38 status=ok
// SIG undefined FUN_146d891d4(void)

undefined8 FUN_146d891d4(undefined8 param_1,int param_2)

{
  FUN_140b4d3d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d891fa FUN_146d891fa body=53 status=ok
// SIG undefined FUN_146d891fa(void)

void FUN_146d891fa(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_146d89256();
  uVar1 = FUN_146d8a7a9(param_2,param_1 + 0x78);
  FUN_146d8a7a9(uVar1,param_1 + 0x90);
  return;
}



// FUNCTION 146d89230 FUN_146d89230 body=38 status=ok
// SIG undefined FUN_146d89230(void)

undefined8 FUN_146d89230(undefined8 param_1,int param_2)

{
  FUN_140b4d418();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d89256 FUN_146d89256 body=756 status=ok
// SIG undefined FUN_146d89256(void)

void FUN_146d89256(longlong param_1,longlong *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 **ppuVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined **local_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined **local_58;
  longlong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1406274a0();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3c9a0);
  iVar10 = FUN_1448332aa(param_2,&DAT_149e3c9a0);
  if (iVar10 < 3) {
    local_50 = 0;
    uStack_48 = 0;
    local_58 = &PTR_LAB_149f51e00;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = &PTR_LAB_149f51e40;
    uVar11 = FUN_146d89987(param_2);
    FUN_146d8989f(uVar11,&local_68);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_146d89a56((longlong *)(param_1 + 0x60),uStack_48 & 0xffffffff,1);
      lVar13 = local_50;
      if ((longlong)(int)uStack_48 != 0) {
        lVar15 = (longlong)(int)uStack_48 << 3;
        lVar14 = 0;
        do {
          plVar8 = *(longlong **)(lVar13 + lVar14 * 8);
          (**(code **)(*plVar8 + 0x28))(plVar8,&local_78);
          ppuVar12 = (undefined8 **)((longlong)(int)lVar14 * 8 + *(longlong *)(param_1 + 0x60));
          if (ppuVar12 == &local_78) {
LAB_146d8936c:
            if (local_78 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_78 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((*piVar1 == 0) && (*(int *)((longlong)local_78 + 0xc) == 0)) {
                (**(code **)*local_78)(local_78,1);
              }
            }
          }
          else {
            puVar9 = *ppuVar12;
            *ppuVar12 = local_78;
            local_78 = (undefined8 *)0x0;
            if (puVar9 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar9 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((*piVar1 == 0) && (*(int *)((longlong)puVar9 + 0xc) == 0)) {
                (**(code **)*puVar9)(puVar9,1);
              }
              goto LAB_146d8936c;
            }
          }
          lVar14 = lVar14 + 1;
          lVar15 = lVar15 + -8;
        } while (lVar15 != 0);
      }
    }
    FUN_146d8a419(local_68,uStack_60 & 0xffffffff);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_140a28356(param_2,param_1 + 0x60);
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  iVar10 = FUN_1448332aa(param_2,&DAT_149e3cc08);
  if (iVar10 < 0x32) {
    local_50 = 0;
    uStack_48 = 0;
    local_58 = &PTR_LAB_149f51e80;
    FUN_14017e500(&local_50,*(undefined4 *)(param_1 + 0x50),0);
    if (0 < *(int *)(param_1 + 0x50)) {
      lVar13 = 0xc;
      lVar14 = 0;
      do {
        lVar15 = *(longlong *)(param_1 + 0x48);
        fVar2 = *(float *)(lVar15 + lVar13);
        fVar3 = *(float *)(lVar15 + -4 + lVar13);
        fVar4 = *(float *)(lVar15 + -8 + lVar13);
        *(double *)(local_50 + -0x18 + lVar13 * 2) = (double)*(float *)(lVar15 + -0xc + lVar13);
        *(double *)(local_50 + -0x10 + lVar13 * 2) = (double)fVar4;
        *(double *)(local_50 + -8 + lVar13 * 2) = (double)fVar3;
        *(double *)(local_50 + lVar13 * 2) = (double)fVar2;
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x10;
      } while (lVar14 < *(int *)(param_1 + 0x50));
    }
    FUN_146d89bfc(param_2,&local_50);
    FUN_1400d134e((longlong *)(param_1 + 0x48),uStack_48 & 0xffffffff,0);
    if (0 < (int)uStack_48) {
      lVar13 = 0xc;
      lVar14 = 0;
      do {
        dVar5 = *(double *)(local_50 + lVar13 * 2);
        dVar6 = *(double *)(local_50 + -8 + lVar13 * 2);
        dVar7 = *(double *)(local_50 + -0x10 + lVar13 * 2);
        lVar15 = *(longlong *)(param_1 + 0x48);
        *(float *)(lVar15 + -0xc + lVar13) = (float)*(double *)(local_50 + -0x18 + lVar13 * 2);
        *(float *)(lVar15 + -8 + lVar13) = (float)dVar7;
        *(float *)(lVar15 + -4 + lVar13) = (float)dVar6;
        *(float *)(lVar15 + lVar13) = (float)dVar5;
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x10;
      } while (lVar14 < (int)uStack_48);
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_146d89afc(param_2,param_1 + 0x48);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8958e FUN_146d8958e body=79 status=ok
// SIG undefined FUN_146d8958e(void)

void FUN_146d8958e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar1 = iVar2 - (param_3 + param_2);
    if (iVar1 != 0) {
      _Dst = (void *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar1 << 4);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar2 - param_3;
  }
  return;
}



// FUNCTION 146d895e4 FUN_146d895e4 body=47 status=ok
// SIG undefined FUN_146d895e4(void)

longlong FUN_146d895e4(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d89614 FUN_146d89614 body=96 status=ok
// SIG undefined FUN_146d89614(void)

void FUN_146d89614(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,0x10);
  }
  return;
}



// FUNCTION 146d89674 FUN_146d89674 body=63 status=ok
// SIG undefined FUN_146d89674(void)

void FUN_146d89674(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d896b4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,0x10);
  }
  return;
}



// FUNCTION 146d896b4 FUN_146d896b4 body=97 status=ok
// SIG undefined FUN_146d896b4(void)

ulonglong FUN_146d896b4(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,0x10);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146d89758 FUN_146d89758 body=99 status=ok
// SIG undefined FUN_146d89758(void)

void FUN_146d89758(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    _Dst = (void *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 8));
    FUN_144756766(_Dst,param_3);
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_2 + param_3);
    if (iVar2 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar2 << 3);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d897c2 FUN_146d897c2 body=59 status=ok
// SIG undefined FUN_146d897c2(void)

longlong FUN_146d897c2(longlong param_1,int param_2)

{
  FUN_144756766(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d897fe FUN_146d897fe body=63 status=ok
// SIG undefined FUN_146d897fe(void)

void FUN_146d897fe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d8983e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146d8983e FUN_146d8983e body=97 status=ok
// SIG undefined FUN_146d8983e(void)

ulonglong FUN_146d8983e(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146d8989f FUN_146d8989f body=230 status=ok
// SIG undefined FUN_146d8989f(void)

longlong * FUN_146d8989f(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146d8a222(param_2);
    }
    FUN_146d8a282(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146d8a516(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146d89987 FUN_146d89987 body=206 status=ok
// SIG undefined FUN_146d89987(void)

longlong * FUN_146d89987(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  FUN_146d89f04(param_2,local_2c,1);
  if (0 < local_2c) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_140a2860c(param_1,*param_2 + lVar3);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (lVar4 < local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d89a56 FUN_146d89a56 body=165 status=ok
// SIG undefined FUN_146d89a56(void)

void FUN_146d89a56(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < param_2 - iVar3) {
      FUN_140619960(param_1,iVar3);
      return;
    }
  }
  else {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    iVar2 = iVar3 - param_2;
    if (iVar2 != 0 && (int)param_2 <= iVar3) {
      _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
      FUN_144756766(_Dst,iVar2);
      iVar1 = (int)param_1[1] - iVar3;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar2 * 8),(longlong)iVar1 << 3);
        iVar3 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar3 - iVar2;
      if (param_3 == '\x01') {
        FUN_146d897fe(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146d89afc FUN_146d89afc body=254 status=ok
// SIG undefined FUN_146d89afc(void)

longlong * FUN_146d89afc(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146d89614(param_2);
    }
    FUN_1400d134e(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_140a4aa2c(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146d89bfc FUN_146d89bfc body=254 status=ok
// SIG undefined FUN_146d89bfc(void)

longlong * FUN_146d89bfc(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146d8a6a8(param_2);
    }
    FUN_14017e500(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_1400f4f7e(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x20;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146d89d4a FUN_146d89d4a body=76 status=ok
// SIG undefined FUN_146d89d4a(void)

void FUN_146d89d4a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar2 << 3);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d89d96 FUN_146d89d96 body=77 status=ok
// SIG undefined FUN_146d89d96(void)

void FUN_146d89d96(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 - iVar3) * 8),
            (longlong)iVar3 << 3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 146d89dea FUN_146d89dea body=138 status=ok
// SIG undefined FUN_146d89dea(void)

void FUN_146d89dea(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_146d89f8c((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2 * 8) =
       *(undefined8 *)(lVar1 + (longlong)(int)param_2 * 8);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 - iVar4) * 8),
            (longlong)iVar4 << 3);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 146d89e74 FUN_146d89e74 body=47 status=ok
// SIG undefined FUN_146d89e74(void)

longlong FUN_146d89e74(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d89ea4 FUN_146d89ea4 body=96 status=ok
// SIG undefined FUN_146d89ea4(void)

void FUN_146d89ea4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146d89f04 FUN_146d89f04 body=115 status=ok
// SIG undefined FUN_146d89f04(void)

void FUN_146d89f04(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d89f8c(param_1,iVar1);
    }
    FUN_146d89f78((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146d8a012(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146d89f78 FUN_146d89f78 body=19 status=ok
// SIG undefined FUN_146d89f78(void)

void FUN_146d89f78(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 146d89f8c FUN_146d89f8c body=132 status=ok
// SIG undefined FUN_146d89f8c(void)

void FUN_146d89f8c(longlong param_1,int param_2)

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



// FUNCTION 146d8a012 FUN_146d8a012 body=63 status=ok
// SIG undefined FUN_146d8a012(void)

void FUN_146d8a012(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d8a052(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146d8a052 FUN_146d8a052 body=97 status=ok
// SIG undefined FUN_146d8a052(void)

ulonglong FUN_146d8a052(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146d8a102 FUN_146d8a102 body=101 status=ok
// SIG undefined FUN_146d8a102(void)

void FUN_146d8a102(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    _Dst = (void *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 8));
    FUN_146d8a419(_Dst,param_3);
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_2 + param_3);
    if (iVar2 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar2 << 3);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d8a17e FUN_146d8a17e body=104 status=ok
// SIG undefined FUN_146d8a17e(void)

void FUN_146d8a17e(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_146d8a354((longlong *)(param_3 + 8),iVar1);
  }
  lVar3 = (longlong)param_2;
  *(undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar1 * 8) =
       *(undefined8 *)(lVar2 + lVar3 * 8);
  *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
  FUN_146d8a4b0(param_1 + 8,lVar3,1);
  return;
}



// FUNCTION 146d8a1e6 FUN_146d8a1e6 body=59 status=ok
// SIG undefined FUN_146d8a1e6(void)

longlong FUN_146d8a1e6(longlong param_1,int param_2)

{
  FUN_146d8a419(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d8a222 FUN_146d8a222 body=96 status=ok
// SIG undefined FUN_146d8a222(void)

void FUN_146d8a222(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146d8a282 FUN_146d8a282 body=208 status=ok
// SIG undefined FUN_146d8a282(void)

void FUN_146d8a282(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < param_2 - iVar2) {
      FUN_146d8a354(param_1);
    }
    memset((void *)((longlong)iVar2 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar2) << 3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar3 = iVar2 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar2) {
      _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
      FUN_146d8a419(_Dst,iVar3);
      iVar1 = (int)param_1[1] - iVar2;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 8),(longlong)iVar1 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 - iVar3;
      if (param_3 == '\x01') {
        FUN_146d8a3da(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146d8a354 FUN_146d8a354 body=132 status=ok
// SIG undefined FUN_146d8a354(void)

void FUN_146d8a354(longlong param_1,int param_2)

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



// FUNCTION 146d8a3da FUN_146d8a3da body=63 status=ok
// SIG undefined FUN_146d8a3da(void)

void FUN_146d8a3da(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d8a44e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146d8a419 FUN_146d8a419 body=52 status=ok
// SIG undefined FUN_146d8a419(void)

void FUN_146d8a419(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 146d8a44e FUN_146d8a44e body=97 status=ok
// SIG undefined FUN_146d8a44e(void)

ulonglong FUN_146d8a44e(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146d8a4b0 FUN_146d8a4b0 body=101 status=ok
// SIG undefined FUN_146d8a4b0(void)

void FUN_146d8a4b0(longlong *param_1,int param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)param_2 * 8);
  FUN_146d8a419(_Dst,param_3);
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



// FUNCTION 146d8a516 FUN_146d8a516 body=182 status=ok
// SIG undefined FUN_146d8a516(void)

void FUN_146d8a516(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x218))
            (*(longlong **)(param_1 + 0x90),&DAT_149e3cc18);
  iVar2 = FUN_1448332aa(*(undefined8 *)(param_1 + 0x90),&DAT_149e3cc18);
  if (iVar2 < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  local_28 = (undefined8 *)*param_2;
  FUN_140a2860c(param_1);
  if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x28) & 1) != 0) {
    puVar1 = (undefined8 *)*param_2;
    if ((puVar1 != local_28) && (*param_2 = (longlong)local_28, puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8a622 FUN_146d8a622 body=79 status=ok
// SIG undefined FUN_146d8a622(void)

void FUN_146d8a622(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar1 = iVar2 - (param_3 + param_2);
    if (iVar1 != 0) {
      _Dst = (void *)((longlong)param_2 * 0x20 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 * 0x20 + (longlong)_Dst),(longlong)iVar1 << 5);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar2 - param_3;
  }
  return;
}



// FUNCTION 146d8a678 FUN_146d8a678 body=47 status=ok
// SIG undefined FUN_146d8a678(void)

longlong FUN_146d8a678(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d8a6a8 FUN_146d8a6a8 body=96 status=ok
// SIG undefined FUN_146d8a6a8(void)

void FUN_146d8a6a8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,0x10);
  }
  return;
}



// FUNCTION 146d8a708 FUN_146d8a708 body=63 status=ok
// SIG undefined FUN_146d8a708(void)

void FUN_146d8a708(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d8a748(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,0x10);
  }
  return;
}



// FUNCTION 146d8a748 FUN_146d8a748 body=97 status=ok
// SIG undefined FUN_146d8a748(void)

ulonglong FUN_146d8a748(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,0x10);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 146d8a7a9 FUN_146d8a7a9 body=260 status=ok
// SIG undefined FUN_146d8a7a9(void)

longlong * FUN_146d8a7a9(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_140163800(param_2);
    }
    FUN_140627580(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_144aa3513(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0xc;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146d8a8b0 FUN_146d8a8b0 body=38 status=ok
// SIG undefined FUN_146d8a8b0(void)

undefined8 FUN_146d8a8b0(undefined8 param_1,int param_2)

{
  FUN_146d8a8d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d8a8d6 FUN_146d8a8d6 body=316 status=ok
// SIG undefined FUN_146d8a8d6(void)

void FUN_146d8a8d6(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f517d0;
  FUN_146d8aadd(param_1[0xa3],*(undefined4 *)(param_1 + 0xa4));
  if (param_1[0xa3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9f] != 0) {
    FUN_1400020a8();
  }
  FUN_146d8aadd(param_1[0x9d],*(undefined4 *)(param_1 + 0x9e));
  if (param_1[0x9d] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[0x9c];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  if (param_1[0x9a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x98] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  FUN_146d8aa12(param_1 + 0x85);
  FUN_146d8aa12(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x72) = 0;
  if (param_1[0x71] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x69);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x5f);
  FUN_146d8aa74(param_1 + 1);
  return;
}



// FUNCTION 146d8aa12 FUN_146d8aa12 body=97 status=ok
// SIG undefined FUN_146d8aa12(void)

void FUN_146d8aa12(longlong *param_1)

{
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1407b1382(param_1 + 5);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146d8aa74 FUN_146d8aa74 body=105 status=ok
// SIG undefined FUN_146d8aa74(void)

void FUN_146d8aa74(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_1400020a8();
  }
  FUN_14062bdec(param_1 + 0x150);
  FUN_14062bdec(param_1 + 8);
  return;
}



// FUNCTION 146d8aadd FUN_146d8aadd body=43 status=ok
// SIG undefined FUN_146d8aadd(void)

void FUN_146d8aadd(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146d8ab08 FUN_146d8ab08 body=96 status=ok
// SIG undefined FUN_146d8ab08(void)

void FUN_146d8ab08(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 6,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,0x10);
  }
  return;
}



// FUNCTION 146d8ab68 FUN_146d8ab68 body=322 status=ok
// SIG undefined FUN_146d8ab68(void)

void FUN_146d8ab68(longlong *param_1)

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



// FUNCTION 146d8acac FUN_146d8acac body=76 status=ok
// SIG undefined FUN_146d8acac(void)

void FUN_146d8acac(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar1 = param_1;
  }
  FUN_144760452(lVar1,*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) == param_2) {
    return;
  }
  FUN_146d8acfa(param_1,param_2);
  return;
}



// FUNCTION 146d8acfa FUN_146d8acfa body=85 status=ok
// SIG undefined FUN_146d8acfa(void)

void FUN_146d8acfa(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    uVar1 = (uint)(uVar2 >> 3);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x14)) {
    return;
  }
  *(uint *)(param_1 + 0x14) = uVar3;
  FUN_140279634(param_1,*(undefined4 *)(param_1 + 0x10),uVar3,8);
  return;
}



// FUNCTION 146d8ad50 FUN_146d8ad50 body=98 status=ok
// SIG undefined FUN_146d8ad50(void)

void FUN_146d8ad50(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146d8adb2 FUN_146d8adb2 body=38 status=ok
// SIG undefined FUN_146d8adb2(void)

void FUN_146d8adb2(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + lVar2 * 8);
      *(longlong *)(param_1 + lVar2 * 8) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 1;
    } while (param_3 != (int)lVar2);
  }
  return;
}



// FUNCTION 146d8add8 FUN_146d8add8 body=112 status=ok
// SIG undefined FUN_146d8add8(void)

void FUN_146d8add8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc0,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc0)) {
      uVar2 = uVar1 / 0xc0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc0,8);
  }
  return;
}



// FUNCTION 146d8ae48 FUN_146d8ae48 body=86 status=ok
// SIG undefined FUN_146d8ae48(void)

void FUN_146d8ae48(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146d8ae9e FUN_146d8ae9e body=132 status=ok
// SIG undefined FUN_146d8ae9e(void)

void FUN_146d8ae9e(longlong param_1,int param_2)

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



// FUNCTION 146d8af24 FUN_146d8af24 body=147 status=ok
// SIG undefined FUN_146d8af24(void)

void FUN_146d8af24(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d8afb8 FUN_146d8afb8 body=41 status=ok
// SIG undefined FUN_146d8afb8(void)

void FUN_146d8afb8(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146d838a6(param_1);
    param_1 = param_1 + 0xc0;
  }
  return;
}



// FUNCTION 146d8b056 FUN_146d8b056 body=139 status=ok
// SIG undefined FUN_146d8b056(void)

void FUN_146d8b056(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_140bfc2d4((longlong *)(param_3 + 8),iVar1);
  }
  lVar4 = (longlong)param_2 * 0x10;
  lVar3 = *(longlong *)(param_3 + 8);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar3 + lVar5) = 0;
  *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar2 + lVar4);
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined4 *)(lVar3 + 8 + lVar5) = *(undefined4 *)(lVar2 + 8 + lVar4);
  *(undefined4 *)(lVar3 + 0xc + lVar5) = *(undefined4 *)(lVar2 + 0xc + lVar4);
  *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
  FUN_146d8b11e(param_1 + 8,(longlong)param_2,1);
  return;
}



// FUNCTION 146d8b0e2 FUN_146d8b0e2 body=59 status=ok
// SIG undefined FUN_146d8b0e2(void)

longlong FUN_146d8b0e2(longlong param_1,int param_2)

{
  FUN_144716727(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d8b11e FUN_146d8b11e body=113 status=ok
// SIG undefined FUN_146d8b11e(void)

void FUN_146d8b11e(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)param_2 * 0x10 + lVar1);
  FUN_144716727(_Dst,param_3);
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



// FUNCTION 146d8b190 FUN_146d8b190 body=96 status=ok
// SIG undefined FUN_146d8b190(void)

void FUN_146d8b190(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
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



// FUNCTION 146d8b1f0 FUN_146d8b1f0 body=95 status=ok
// SIG undefined FUN_146d8b1f0(void)

void FUN_146d8b1f0(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_1411d370f(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146d8b250 FUN_146d8b250 body=63 status=ok
// SIG undefined FUN_146d8b250(void)

void FUN_146d8b250(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d8b290(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146d8b290 FUN_146d8b290 body=97 status=ok
// SIG undefined FUN_146d8b290(void)

ulonglong FUN_146d8b290(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146d8b2f2 FUN_146d8b2f2 body=132 status=ok
// SIG undefined FUN_146d8b2f2(void)

void FUN_146d8b2f2(longlong param_1,int param_2)

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



// FUNCTION 146d8b3ba FUN_146d8b3ba body=67 status=ok
// SIG undefined FUN_146d8b3ba(void)

void FUN_146d8b3ba(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 + (longlong)_Dst),(longlong)iVar2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d8b404 FUN_146d8b404 body=47 status=ok
// SIG undefined FUN_146d8b404(void)

longlong FUN_146d8b404(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d8b433 FUN_146d8b433 body=43 status=ok
// SIG undefined FUN_146d8b433(void)

void FUN_146d8b433(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146d8b45e FUN_146d8b45e body=116 status=ok
// SIG undefined FUN_146d8b45e(void)

void FUN_146d8b45e(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_146d8b4d4(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146d8b4d4 FUN_146d8b4d4 body=133 status=ok
// SIG undefined FUN_146d8b4d4(void)

void FUN_146d8b4d4(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 146d8b55a FUN_146d8b55a body=63 status=ok
// SIG undefined FUN_146d8b55a(void)

void FUN_146d8b55a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d8b59a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 146d8b59a FUN_146d8b59a body=97 status=ok
// SIG undefined FUN_146d8b59a(void)

ulonglong FUN_146d8b59a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146d8b5fb FUN_146d8b5fb body=1 status=ok
// SIG undefined FUN_146d8b5fb(void)

void FUN_146d8b5fb(void)

{
  return;
}



// FUNCTION 146d8b5fc FUN_146d8b5fc body=63 status=ok
// SIG undefined FUN_146d8b5fc(void)

void FUN_146d8b5fc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d8b63c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 146d8b63c FUN_146d8b63c body=117 status=ok
// SIG undefined FUN_146d8b63c(void)

ulonglong FUN_146d8b63c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0xc) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
      uVar1 = uVar1 / 0xc;
    }
  }
  return uVar1;
}



// FUNCTION 146d8b6b2 FUN_146d8b6b2 body=319 status=ok
// SIG undefined FUN_146d8b6b2(void)

void FUN_146d8b6b2(longlong *param_1)

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
      lVar2 = (longlong)iStack_54 * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(lVar1 + lVar2 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8b7f2 FUN_146d8b7f2 body=433 status=ok
// SIG undefined FUN_146d8b7f2(void)

void FUN_146d8b7f2(longlong *param_1,uint param_2)

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
      FUN_1448fc38a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_14488f93c(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x60 + lVar2 + -0x5c);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x18;
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



// FUNCTION 146d8b9a4 FUN_146d8b9a4 body=423 status=ok
// SIG undefined FUN_146d8b9a4(void)

void FUN_146d8b9a4(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 146d8bb4c FUN_146d8bb4c body=197 status=ok
// SIG undefined FUN_146d8bb4c(void)

longlong FUN_146d8bb4c(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_146d8bbf4;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_146d8bc12(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_146d8bbf4:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146d8bc12 FUN_146d8bc12 body=296 status=ok
// SIG undefined FUN_146d8bc12(void)

undefined4 *
FUN_146d8bc12(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
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
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146d8bd3c(param_1,local_58);
  FUN_146d8befa(param_4,local_50);
  *(undefined4 *)(local_50 + 0x58) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_146d8be2a(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
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
      *(uint *)(local_50 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x58) =
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
      FUN_146d8b9a4(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8bd3c FUN_146d8bd3c body=238 status=ok
// SIG undefined FUN_146d8bd3c(void)

int * FUN_146d8bd3c(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 146d8be2a FUN_146d8be2a body=208 status=ok
// SIG undefined FUN_146d8be2a(void)

void FUN_146d8be2a(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  void *_Dst;
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_1447a082e((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_146d8bf96(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_146d8be9f;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_146d8be9f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 146d8befa FUN_146d8befa body=154 status=ok
// SIG undefined FUN_146d8befa(void)

undefined4 * FUN_146d8befa(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined4 *)*param_1;
  FUN_14627166e(param_2 + 2,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8bf96 FUN_146d8bf96 body=150 status=ok
// SIG undefined FUN_146d8bf96(void)

void FUN_146d8bf96(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x60 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
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
      puVar7 = puVar7 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146d8c02c FUN_146d8c02c body=118 status=ok
// SIG undefined FUN_146d8c02c(void)

void FUN_146d8c02c(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_3) {
      FUN_140163800(param_1,param_3);
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_140aacb36(param_1,iVar1);
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
      *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 146d8c0a4 FUN_146d8c0a4 body=115 status=ok
// SIG undefined FUN_146d8c0a4(void)

void FUN_146d8c0a4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146d8c118 FUN_146d8c118 body=96 status=ok
// SIG undefined FUN_146d8c118(void)

void FUN_146d8c118(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 146d8c178 FUN_146d8c178 body=132 status=ok
// SIG undefined FUN_146d8c178(void)

void FUN_146d8c178(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d8c1fe FUN_146d8c1fe body=68 status=ok
// SIG undefined FUN_146d8c1fe(void)

void FUN_146d8c1fe(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1411d370f(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146d8b190(param_1,param_2);
  return;
}



// FUNCTION 146d8c244 FUN_146d8c244 body=265 status=ok
// SIG undefined FUN_146d8c244(void)

undefined8 *
FUN_146d8c244(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  void *_Src;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_5;
  local_70 = param_5[1];
  local_90 = param_1 + 0x38;
  local_98 = param_1;
  FUN_146d8c8a8(local_68,param_3,param_4);
  local_88 = &LAB_146d8c98e;
  local_80 = local_68;
  FUN_1400bd65e(*(undefined4 *)(param_1 + 0x40),&local_88,0);
  FUN_146d8c91a(&local_40,local_30,1);
  _Src = local_40;
  *param_2 = 0;
  *(int *)(param_2 + 1) = local_38;
  if ((longlong)local_38 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_146d8cdea(param_2,local_38,0);
    memcpy((void *)*param_2,_Src,(longlong)local_38 << 3);
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8(local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8c34e FUN_146d8c34e body=61 status=ok
// SIG undefined FUN_146d8c34e(void)

void FUN_146d8c34e(longlong *param_1)

{
  if (param_1[7] != 0) {
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



// FUNCTION 146d8c38c FUN_146d8c38c body=58 status=ok
// SIG undefined FUN_146d8c38c(void)

void FUN_146d8c38c(longlong param_1)

{
  FUN_146d8c434();
  if (-1 < *(int *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_14481578e(param_1 + 0x38,0);
  return;
}



// FUNCTION 146d8c3c6 FUN_146d8c3c6 body=109 status=ok
// SIG undefined FUN_146d8c3c6(void)

undefined4 FUN_146d8c3c6(longlong *param_1,undefined4 param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = param_3 + -1 + (uint)(param_3 == 0);
  uVar1 = (ulonglong)uVar5 * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  FUN_146d8c542(param_1,1 << ((byte)lVar3 & 0x1f),CONCAT71((uint7)(uint3)(uVar5 >> 8),1));
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    lVar4 = 0;
    do {
      *(undefined4 *)(lVar2 + lVar4) = 0xffffffff;
      lVar4 = lVar4 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar4);
  }
  FUN_146d8c592(param_1 + 2,param_2,1);
  LOCK();
  lVar3 = param_1[4];
  *(undefined4 *)(param_1 + 4) = 0;
  UNLOCK();
  return (int)lVar3;
}



// FUNCTION 146d8c434 FUN_146d8c434 body=78 status=ok
// SIG undefined FUN_146d8c434(void)

void FUN_146d8c434(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_146d8c482(param_1,0);
  }
  if (-1 < *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_146d8c4e2(param_1 + 0x10,0);
  return;
}



// FUNCTION 146d8c482 FUN_146d8c482 body=96 status=ok
// SIG undefined FUN_146d8c482(void)

void FUN_146d8c482(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 146d8c4e2 FUN_146d8c4e2 body=96 status=ok
// SIG undefined FUN_146d8c4e2(void)

void FUN_146d8c4e2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,0x10);
  }
  return;
}



// FUNCTION 146d8c542 FUN_146d8c542 body=78 status=ok
// SIG undefined FUN_146d8c542(void)

void FUN_146d8c542(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d8c5e2();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146d8c668();
      return;
    }
  }
  return;
}



// FUNCTION 146d8c592 FUN_146d8c592 body=78 status=ok
// SIG undefined FUN_146d8c592(void)

void FUN_146d8c592(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d8c70a();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146d8c790();
      return;
    }
  }
  return;
}



// FUNCTION 146d8c5e2 FUN_146d8c5e2 body=132 status=ok
// SIG undefined FUN_146d8c5e2(void)

void FUN_146d8c5e2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d8c668 FUN_146d8c668 body=63 status=ok
// SIG undefined FUN_146d8c668(void)

void FUN_146d8c668(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d8c6a8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 146d8c6a8 FUN_146d8c6a8 body=97 status=ok
// SIG undefined FUN_146d8c6a8(void)

ulonglong FUN_146d8c6a8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146d8c70a FUN_146d8c70a body=132 status=ok
// SIG undefined FUN_146d8c70a(void)

void FUN_146d8c70a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d8c790 FUN_146d8c790 body=63 status=ok
// SIG undefined FUN_146d8c790(void)

void FUN_146d8c790(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d8c7d0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,0x10);
  }
  return;
}



// FUNCTION 146d8c7d0 FUN_146d8c7d0 body=97 status=ok
// SIG undefined FUN_146d8c7d0(void)

ulonglong FUN_146d8c7d0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,0x10);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 146d8c832 FUN_146d8c832 body=116 status=ok
// SIG undefined FUN_146d8c832(void)

void FUN_146d8c832(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d8c70a(param_1,iVar1);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146d8c790(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146d8c8a8 FUN_146d8c8a8 body=113 status=ok
// SIG undefined FUN_146d8c8a8(void)

undefined4 *
FUN_146d8c8a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = *param_4;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 4) = param_4[1];
  *(undefined8 *)(param_1 + 6) = param_5;
  *(undefined8 *)(param_1 + 8) = param_6;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x10));
  FUN_146d8c91a(param_1 + 10,param_3,1);
  FUN_146d8c91a(param_1 + 10,param_1[0xd],1);
  LOCK();
  param_1[0xf] = param_1[0xc];
  UNLOCK();
  return param_1;
}



// FUNCTION 146d8c91a FUN_146d8c91a body=116 status=ok
// SIG undefined FUN_146d8c91a(void)

void FUN_146d8c91a(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1402e69d2(param_1,iVar1);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146d8cd48(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146d8c996 FUN_146d8c996 body=495 status=ok
// SIG undefined FUN_146d8c996(void)

void FUN_146d8c996(int *param_1,int param_2)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 6) + 0x10);
  lVar6 = (longlong)*(int *)(**(longlong **)(param_1 + 8) + (longlong)param_2 * 4) * 0x20;
  pauVar1 = (undefined1 (*) [16])(lVar5 + lVar6);
  iVar2 = *(int *)(lVar5 + 0x10 + lVar6);
  iVar7 = *(int *)(lVar5 + 0x18 + lVar6);
  if (iVar7 != -1) {
    do {
      lVar6 = (longlong)iVar7 * 0x20;
      if (*(undefined1 (*) [16])(lVar5 + lVar6) == *pauVar1) {
        iStack_84 = *(int *)(lVar5 + 0x10 + lVar6);
        local_88 = iVar2;
        FUN_146d8cb86(param_1,&local_88);
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 6) + 0x10);
      }
      iVar7 = *(int *)(lVar5 + 0x18 + lVar6);
    } while (iVar7 != -1);
  }
  if (0 < *param_1) {
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      local_88 = *(int *)*pauVar1;
      iStack_84 = *(int *)(*pauVar1 + 4);
      uStack_7c = *(undefined4 *)(*pauVar1 + 0xc);
      iStack_80 = iVar7 + *(int *)(*pauVar1 + 8);
      FUN_146d8cc6a(param_1,iVar2,&local_88);
      iVar4 = *param_1;
    } while (iVar7 < iVar4);
    if (0 < iVar4) {
      iVar7 = 1;
      do {
        if (-1 < iVar4) {
          iVar8 = -iVar4;
          do {
            local_88 = *(int *)*pauVar1;
            uStack_7c = *(undefined4 *)(*pauVar1 + 0xc);
            iStack_84 = iVar7 + *(int *)(*pauVar1 + 4);
            iStack_80 = iVar8 + *(int *)(*pauVar1 + 8);
            FUN_146d8cc6a(param_1,iVar2,&local_88);
            iVar4 = *param_1;
            bVar3 = iVar8 < iVar4;
            iVar8 = iVar8 + 1;
          } while (bVar3);
        }
        bVar3 = iVar7 < iVar4;
        iVar7 = iVar7 + 1;
      } while (bVar3);
      if (0 < iVar4) {
        iVar7 = 1;
        do {
          if (-1 < iVar4) {
            iVar8 = -iVar4;
            do {
              if (-1 < iVar4) {
                iVar9 = -iVar4;
                do {
                  uStack_7c = *(undefined4 *)(*pauVar1 + 0xc);
                  local_88 = iVar7 + *(int *)*pauVar1;
                  iStack_84 = iVar8 + *(int *)(*pauVar1 + 4);
                  iStack_80 = iVar9 + *(int *)(*pauVar1 + 8);
                  FUN_146d8cc6a(param_1,iVar2,&local_88);
                  iVar4 = *param_1;
                  bVar3 = iVar9 < iVar4;
                  iVar9 = iVar9 + 1;
                } while (bVar3);
              }
              bVar3 = iVar8 < iVar4;
              iVar8 = iVar8 + 1;
            } while (bVar3);
          }
          bVar3 = iVar7 < iVar4;
          iVar7 = iVar7 + 1;
        } while (bVar3);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d8cb86 FUN_146d8cb86 body=227 status=ok
// SIG undefined FUN_146d8cb86(void)

void FUN_146d8cb86(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  int iVar2;
  char cVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)param_2;
  local_34 = *(undefined4 *)((longlong)param_2 + 4);
  cVar3 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
  if (cVar3 != '\0') {
    LOCK();
    piVar1 = (int *)(param_1 + 0x38);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    SRWLock = (PSRWLOCK)(param_1 + 0x40);
    if (iVar2 < *(int *)(param_1 + 0x3c)) {
      AcquireSRWLockShared(SRWLock);
      *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 8) = *param_2;
      ReleaseSRWLockShared(SRWLock);
    }
    else {
      AcquireSRWLockExclusive(SRWLock);
      if (*(int *)(param_1 + 0x3c) <= iVar2) {
        FUN_146d8c91a(param_1 + 0x28,iVar2 + 1,1);
        FUN_146d8c91a(param_1 + 0x28,*(undefined4 *)(param_1 + 0x34),1);
        LOCK();
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x30);
        UNLOCK();
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 8) = *param_2;
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8cc6a FUN_146d8cc6a body=220 status=ok
// SIG undefined FUN_146d8cc6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d8cc6a(longlong param_1,undefined4 param_2,undefined1 (*param_3) [16])

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x18);
  auVar5 = pmulld(*param_3,_DAT_149f50230);
  iVar3 = *(int *)(*plVar1 +
                  ((longlong)(int)(auVar5._12_4_ ^ auVar5._0_4_ ^ auVar5._8_4_ ^ auVar5._4_4_) &
                  (longlong)(int)plVar1[1] - 1U) * 4);
  if (iVar3 != -1) {
    lVar2 = plVar1[2];
    do {
      lVar4 = (longlong)iVar3 * 0x20;
      if (*(undefined1 (*) [16])(lVar2 + lVar4) == *param_3) {
        local_34 = *(undefined4 *)(lVar2 + 0x10 + lVar4);
        local_38 = param_2;
        FUN_146d8cb86(param_1,&local_38);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
      }
      iVar3 = *(int *)(lVar2 + 0x18 + lVar4);
    } while (iVar3 != -1);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d8cd48 FUN_146d8cd48 body=63 status=ok
// SIG undefined FUN_146d8cd48(void)

void FUN_146d8cd48(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d8cd88(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 146d8cd88 FUN_146d8cd88 body=97 status=ok
// SIG undefined FUN_146d8cd88(void)

ulonglong FUN_146d8cd88(undefined8 param_1,uint param_2,uint param_3)

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
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146d8cdea FUN_146d8cdea body=98 status=ok
// SIG undefined FUN_146d8cdea(void)

void FUN_146d8cdea(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146d8ce4c FUN_146d8ce4c body=143 status=ok
// SIG undefined FUN_146d8ce4c(void)

void FUN_146d8ce4c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d8cedc(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146d8cf62(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146d8cfc2(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146d8cedc FUN_146d8cedc body=132 status=ok
// SIG undefined FUN_146d8cedc(void)

void FUN_146d8cedc(longlong param_1,int param_2)

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



// FUNCTION 146d8cf62 FUN_146d8cf62 body=95 status=ok
// SIG undefined FUN_146d8cf62(void)

void FUN_146d8cf62(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146d8b433(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146d8cfc2 FUN_146d8cfc2 body=63 status=ok
// SIG undefined FUN_146d8cfc2(void)

void FUN_146d8cfc2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d8d002(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146d8d002 FUN_146d8d002 body=97 status=ok
// SIG undefined FUN_146d8d002(void)

ulonglong FUN_146d8d002(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146d8d064 FUN_146d8d064 body=132 status=ok
// SIG undefined FUN_146d8d064(void)

void FUN_146d8d064(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d8d0e9 FUN_146d8d0e9 body=43 status=ok
// SIG undefined FUN_146d8d0e9(void)

void FUN_146d8d0e9(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146d8d114 FUN_146d8d114 body=83 status=ok
// SIG undefined FUN_146d8d114(void)

void FUN_146d8d114(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x90);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
        iVar2 = *(int *)(param_1 + 0x90);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 146d8d168 FUN_146d8d168 body=67 status=ok
// SIG undefined FUN_146d8d168(void)

void FUN_146d8d168(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x90);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))();
        iVar2 = *(int *)(param_1 + 0x90);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 146d8d1ac FUN_146d8d1ac body=303 status=ok
// SIG undefined FUN_146d8d1ac(void)

undefined8 *
FUN_146d8d1ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_5;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_140f623bc(param_1 + 6);
  param_1[6] = &PTR_FUN_149f52a00;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x3ff0000000000000;
  param_1[0x23] = 0x3ff0000000000000;
  param_1[0x24] = 0x3ff0000000000000;
  param_1[0x25] = 0x3ff0000000000000;
  param_1[0x26] = 0x3ff0000000000000;
  param_1[0x27] = 0x3ff0000000000000;
  param_1[0x28] = 0x3ff0000000000000;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3ff00000;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0x3ff0000000000000;
  param_1[0x35] = 0x3ff0000000000000;
  param_1[0x36] = 0x3ff0000000000000;
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
  *(undefined1 *)(param_1 + 0x44) = 0;
  return param_1;
}



// FUNCTION 146d8d2dc FUN_146d8d2dc body=43 status=ok
// SIG undefined FUN_146d8d2dc(void)

void FUN_146d8d2dc(longlong param_1)

{
  FUN_140bd5786(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146d8d308 FUN_146d8d308 body=167 status=ok
// SIG undefined FUN_146d8d308(void)

void FUN_146d8d308(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_1457cf150(param_1 + 0x20,iVar1);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = param_2;
  *(int *)(param_2 + 3) = iVar1;
  (**(code **)(*param_2 + 0x48))(param_2,&local_38,param_3);
  FUN_140f616d2(param_1 + 0x30,iVar1,&local_38);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8d3b0 FUN_146d8d3b0 body=133 status=ok
// SIG undefined FUN_146d8d3b0(void)

longlong FUN_146d8d3b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  
  do {
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 == (longlong *)0x0) {
      iVar3 = *(int *)(param_1 + 0x18) + 1;
      *(int *)(param_1 + 0x18) = iVar3;
      if (*(int *)(param_1 + 0x24) <= iVar3) goto LAB_146d8d41f;
LAB_146d8d415:
      lVar4 = *(longlong *)(param_1 + 0x10);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x28);
      iVar6 = iVar3 + 1;
      *(int *)(param_1 + 0x28) = iVar6;
      if ((int)plVar1[1] <= iVar6) {
LAB_146d8d41f:
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        FUN_146d98100(param_1);
        goto LAB_146d8d415;
      }
      plVar1 = *(longlong **)(*plVar1 + 8 + (longlong)iVar3 * 8);
      lVar4 = *plVar1;
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(lVar4 + 0x70);
      }
      lVar2 = plVar1[1];
      *(longlong *)(param_1 + 0x10) = lVar4;
      *(int *)(param_1 + 0x18) = (int)lVar2;
      *(undefined1 *)(param_1 + 0x1c) = uVar5;
    }
    if ((lVar4 == 0) ||
       (*(char *)(*(longlong *)(lVar4 + 0x230) + (longlong)*(int *)(param_1 + 0x18)) == '\0')) {
      return param_1;
    }
  } while( true );
}



// FUNCTION 146d8d436 FUN_146d8d436 body=141 status=ok
// SIG undefined FUN_146d8d436(void)

void FUN_146d8d436(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x310);
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x308) + (longlong)iVar4 * 8);
      if (*(int *)(*(longlong *)(*plVar2 + 0x2a8) + 0x30 + (longlong)(int)plVar2[1] * 0x40) == 0) {
        puVar1 = (uint *)(*(longlong *)(*plVar2 + 0x248) + (longlong)(int)plVar2[1] * 4);
        *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x318);
        FUN_1447dd1e0(param_1 + 0x2b8,plVar2);
        FUN_1456cc230(param_1,plVar2,1);
        iVar3 = *(int *)(param_1 + 0x310);
      }
      else {
        iVar4 = iVar4 + 1;
      }
    } while (iVar4 < iVar3);
  }
  return;
}



// FUNCTION 146d8d4c4 FUN_146d8d4c4 body=55 status=ok
// SIG undefined FUN_146d8d4c4(void)

void FUN_146d8d4c4(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar1 = FUN_14014691a(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0x38) = uVar1;
  }
  do {
    cVar2 = FUN_1401464b0(param_1);
  } while (cVar2 != '\0');
  return;
}



// FUNCTION 146d8d4fc FUN_146d8d4fc body=61 status=ok
// SIG undefined FUN_146d8d4fc(void)

int FUN_146d8d4fc(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) == iVar1) {
    FUN_1462862d2(param_1,iVar1);
  }
  FUN_144b048c5((longlong)iVar1 * 0x120 + *param_1);
  return iVar1;
}



// FUNCTION 146d8d53a FUN_146d8d53a body=133 status=ok
// SIG undefined FUN_146d8d53a(void)

undefined8 FUN_146d8d53a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  FUN_146b03e12(&local_38,param_3);
  FUN_146d98938(param_1 + 8,param_2,&local_38);
  FUN_1449db362(&local_38);
  FUN_1449db362(param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8d5c0 FUN_146d8d5c0 body=133 status=ok
// SIG undefined FUN_146d8d5c0(void)

undefined8 FUN_146d8d5c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  FUN_146b03e12(&local_38,param_3);
  FUN_146d98938(param_1 + 0x20,param_2,&local_38);
  FUN_1449db362(&local_38);
  FUN_1449db362(param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8d646 FUN_146d8d646 body=133 status=ok
// SIG undefined FUN_146d8d646(void)

undefined8 FUN_146d8d646(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  FUN_146b03e12(&local_38,param_3);
  FUN_146d98938(param_1 + 0x38,param_2,&local_38);
  FUN_1449db362(&local_38);
  FUN_1449db362(param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8d6cc FUN_146d8d6cc body=290 status=ok
// SIG undefined FUN_146d8d6cc(void)

undefined8 FUN_146d8d6cc(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_19 = *(undefined1 *)(param_2 + 0x70);
  }
  else {
    local_19 = 0;
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar2 + 1;
  if ((undefined1 *)puVar2[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_19,1);
  }
  else {
    local_19 = *(undefined1 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  switch(local_19) {
  case 0:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      uVar3 = FUN_14001cc68(0x270,0x10);
      FUN_1411dabc2(uVar3);
      goto LAB_146d8d790;
    }
    break;
  case 1:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      uVar3 = FUN_14001cc68(0x2b8,0x10);
      FUN_1411dab2c(uVar3);
      goto LAB_146d8d790;
    }
    break;
  case 2:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      uVar3 = FUN_14001cc68(0x5a0,0x10);
      FUN_1411da860(uVar3);
      goto LAB_146d8d790;
    }
    break;
  case 3:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      uVar3 = FUN_14001cc68(0x6a8,0x10);
      FUN_145838950(uVar3);
      goto LAB_146d8d790;
    }
  }
  uVar3 = 0;
LAB_146d8d790:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146d8d7f0 FUN_146d8d7f0 body=133 status=ok
// SIG undefined FUN_146d8d7f0(void)

void FUN_146d8d7f0(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = (longlong)param_2 * 0x18;
  FUN_146d8d875(*(longlong *)(param_1 + 0xf8) + lVar2,param_3);
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0xf8) + 0x10 + lVar2);
  if (0 < lVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0xf8) + (longlong)param_2 * 0x18;
      lVar4 = *(longlong *)(lVar1 + 8);
      if (lVar4 == 0) {
        lVar4 = lVar1;
      }
      lVar1 = *(longlong *)(lVar4 + lVar3);
      if (lVar1 != 0) {
        *(uint *)(lVar1 + 8) = (*(uint *)(lVar1 + 8) & 7) + (int)lVar3;
      }
      lVar3 = lVar3 + 8;
    } while (lVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 146d8d875 FUN_146d8d875 body=350 status=ok
// SIG undefined FUN_146d8d875(void)

void FUN_146d8d875(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar7 = (int)param_2[1];
  if (iVar7 == 0) {
    return;
  }
  uVar8 = *(uint *)*param_2;
  if (iVar7 < 2) {
    iVar7 = *(int *)(param_1 + 0x10);
    uVar5 = 1;
  }
  else {
    uVar5 = 1;
    lVar9 = 1;
    do {
      uVar2 = *(uint *)(*param_2 + lVar9 * 4);
      if (uVar2 != uVar8) {
        if ((0 < (int)uVar5) && ((int)(uVar8 + 1) < (int)uVar2)) {
          lVar6 = (longlong)(int)(uVar8 + 1);
          iVar7 = ~uVar8 + uVar2;
          do {
            lVar4 = *(longlong *)(param_1 + 8);
            if (*(longlong *)(param_1 + 8) == 0) {
              lVar4 = param_1;
            }
            lVar1 = lVar4 + lVar6 * 8;
            puVar3 = *(undefined8 **)((ulonglong)uVar5 * -8 + lVar1);
            *(undefined8 *)((ulonglong)uVar5 * -8 + lVar1) = *(undefined8 *)(lVar4 + lVar6 * 8);
            *(undefined8 *)(lVar4 + lVar6 * 8) = 0;
            if (puVar3 != (undefined8 *)0x0) {
              (**(code **)*puVar3)(puVar3,1);
            }
            lVar6 = lVar6 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          iVar7 = (int)param_2[1];
        }
        uVar5 = uVar5 + 1;
        uVar8 = uVar2;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar7);
    iVar7 = *(int *)(param_1 + 0x10);
    if ((int)uVar5 < 1) goto LAB_146d8d9b4;
  }
  if ((int)(uVar8 + 1) < iVar7) {
    lVar9 = (longlong)(int)uVar8;
    do {
      lVar6 = *(longlong *)(param_1 + 8);
      if (*(longlong *)(param_1 + 8) == 0) {
        lVar6 = param_1;
      }
      lVar4 = lVar6 + lVar9 * 8;
      puVar3 = *(undefined8 **)((ulonglong)uVar5 * -8 + 8 + lVar4);
      *(undefined8 *)((ulonglong)uVar5 * -8 + 8 + lVar4) = *(undefined8 *)(lVar6 + 8 + lVar9 * 8);
      *(undefined8 *)(lVar6 + 8 + lVar9 * 8) = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      lVar9 = lVar9 + 1;
    } while (iVar7 + -1 != (int)lVar9);
    iVar7 = *(int *)(param_1 + 0x10);
  }
LAB_146d8d9b4:
  FUN_140279438(param_1,iVar7 - uVar5,0);
  return;
}



// FUNCTION 146d8d9d4 FUN_146d8d9d4 body=156 status=ok
// SIG undefined FUN_146d8d9d4(void)

longlong FUN_146d8d9d4(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = (longlong)param_2 * 0x10;
  lVar3 = *(longlong *)(param_1 + 0x1a0) + lVar4;
  if (*(longlong *)(*(longlong *)(param_1 + 0x1a0) + lVar4) == 0) {
    FUN_146d8da72(local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x98) + (longlong)param_2 * 8));
    FUN_146d8daea(lVar3,local_28);
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8da72 FUN_146d8da72 body=119 status=ok
// SIG undefined FUN_146d8da72(void)

longlong * FUN_146d8da72(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f52c00;
  plVar3[2] = param_2;
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
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
      }
    }
  }
  return param_1;
}



// FUNCTION 146d8daea FUN_146d8daea body=96 status=ok
// SIG undefined FUN_146d8daea(void)

undefined8 * FUN_146d8daea(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
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
  return param_1;
}



// FUNCTION 146d8db4a FUN_146d8db4a body=756 status=ok
// SIG undefined FUN_146d8db4a(void)

void FUN_146d8db4a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 **ppuVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined **local_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined **local_58;
  longlong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146ca2ba0();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3c9a0);
  iVar10 = FUN_1448332aa(param_2,&DAT_149e3c9a0);
  if (iVar10 < 3) {
    local_50 = 0;
    uStack_48 = 0;
    local_58 = &PTR_LAB_149f51e00;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = &PTR_LAB_149f51e40;
    uVar11 = FUN_146d89987(param_2);
    FUN_146d8989f(uVar11,&local_68);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_146d89a56((longlong *)(param_1 + 0x60),uStack_48 & 0xffffffff,1);
      lVar13 = local_50;
      if ((longlong)(int)uStack_48 != 0) {
        lVar15 = (longlong)(int)uStack_48 << 3;
        lVar14 = 0;
        do {
          plVar8 = *(longlong **)(lVar13 + lVar14 * 8);
          (**(code **)(*plVar8 + 0x28))(plVar8,&local_78);
          ppuVar12 = (undefined8 **)((longlong)(int)lVar14 * 8 + *(longlong *)(param_1 + 0x60));
          if (ppuVar12 == &local_78) {
LAB_146d8dc60:
            if (local_78 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_78 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((*piVar1 == 0) && (*(int *)((longlong)local_78 + 0xc) == 0)) {
                (**(code **)*local_78)(local_78,1);
              }
            }
          }
          else {
            puVar9 = *ppuVar12;
            *ppuVar12 = local_78;
            local_78 = (undefined8 *)0x0;
            if (puVar9 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar9 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((*piVar1 == 0) && (*(int *)((longlong)puVar9 + 0xc) == 0)) {
                (**(code **)*puVar9)(puVar9,1);
              }
              goto LAB_146d8dc60;
            }
          }
          lVar14 = lVar14 + 1;
          lVar15 = lVar15 + -8;
        } while (lVar15 != 0);
      }
    }
    FUN_146d8a419(local_68,uStack_60 & 0xffffffff);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_140a28356(param_2,param_1 + 0x60);
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  iVar10 = FUN_1448332aa(param_2,&DAT_149e3cc08);
  if (iVar10 < 0x32) {
    local_50 = 0;
    uStack_48 = 0;
    local_58 = &PTR_LAB_149f51e80;
    FUN_14017e500(&local_50,*(undefined4 *)(param_1 + 0x50),0);
    if (0 < *(int *)(param_1 + 0x50)) {
      lVar13 = 0xc;
      lVar14 = 0;
      do {
        lVar15 = *(longlong *)(param_1 + 0x48);
        fVar2 = *(float *)(lVar15 + lVar13);
        fVar3 = *(float *)(lVar15 + -4 + lVar13);
        fVar4 = *(float *)(lVar15 + -8 + lVar13);
        *(double *)(local_50 + -0x18 + lVar13 * 2) = (double)*(float *)(lVar15 + -0xc + lVar13);
        *(double *)(local_50 + -0x10 + lVar13 * 2) = (double)fVar4;
        *(double *)(local_50 + -8 + lVar13 * 2) = (double)fVar3;
        *(double *)(local_50 + lVar13 * 2) = (double)fVar2;
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x10;
      } while (lVar14 < *(int *)(param_1 + 0x50));
    }
    FUN_146d89bfc(param_2,&local_50);
    FUN_1400d134e((longlong *)(param_1 + 0x48),uStack_48 & 0xffffffff,0);
    if (0 < (int)uStack_48) {
      lVar13 = 0xc;
      lVar14 = 0;
      do {
        dVar5 = *(double *)(local_50 + lVar13 * 2);
        dVar6 = *(double *)(local_50 + -8 + lVar13 * 2);
        dVar7 = *(double *)(local_50 + -0x10 + lVar13 * 2);
        lVar15 = *(longlong *)(param_1 + 0x48);
        *(float *)(lVar15 + -0xc + lVar13) = (float)*(double *)(local_50 + -0x18 + lVar13 * 2);
        *(float *)(lVar15 + -8 + lVar13) = (float)dVar7;
        *(float *)(lVar15 + -4 + lVar13) = (float)dVar6;
        *(float *)(lVar15 + lVar13) = (float)dVar5;
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x10;
      } while (lVar14 < (int)uStack_48);
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_146d89afc(param_2,param_1 + 0x48);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8de3f FUN_146d8de3f body=232 status=ok
// SIG undefined FUN_146d8de3f(void)

longlong * FUN_146d8de3f(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146d9cf48(param_2);
    }
    FUN_14007e8fc(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146d9e189(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x18;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146d8df2a FUN_146d8df2a body=356 status=ok
// SIG undefined FUN_146d8df2a(void)

void FUN_146d8df2a(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cba8);
  iVar5 = FUN_1448332aa(param_1,&DAT_149e3cba8);
  if (iVar5 < 0x19) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_146d9e742(param_1,&local_48);
    FUN_146d9e718(param_2,uStack_40 & 0xffffffff);
    lVar4 = local_48;
    lVar6 = (longlong)(int)uStack_40;
    uVar8 = 0;
    if (lVar6 != 0) {
      lVar9 = local_48 + 0x20;
      lVar10 = 0;
      do {
        local_68 = *(undefined8 *)(lVar4 + 0x30 + lVar10);
        puVar1 = (undefined8 *)(lVar9 + lVar10);
        local_78 = *puVar1;
        uStack_70 = puVar1[1];
        local_50 = *(undefined8 *)(lVar4 + 0x48 + lVar10);
        puVar2 = (undefined4 *)(lVar4 + 0x38 + lVar10);
        local_60 = *puVar2;
        uStack_5c = puVar2[1];
        uStack_58 = puVar2[2];
        uStack_54 = puVar2[3];
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_1400b4f0c(param_2,iVar5);
        }
        lVar3 = *param_2;
        lVar7 = (longlong)iVar5 * 0x30;
        *(undefined8 *)(lVar3 + 0x10 + lVar7) = local_68;
        *(undefined8 *)(lVar3 + lVar7) = local_78;
        ((undefined8 *)(lVar3 + lVar7))[1] = uStack_70;
        puVar2 = (undefined4 *)(lVar3 + 0x18 + lVar7);
        *puVar2 = local_60;
        puVar2[1] = uStack_5c;
        puVar2[2] = uStack_58;
        puVar2[3] = uStack_54;
        *(undefined8 *)(lVar3 + 0x28 + lVar7) = local_50;
        lVar10 = lVar10 + 0x50;
      } while (lVar6 * 0x50 != lVar10);
      uVar8 = uStack_40 & 0xffffffff;
    }
    FUN_146d9e940(local_48,uVar8);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_146d9eabc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8e09e FUN_146d8e09e body=337 status=ok
// SIG undefined FUN_146d8e09e(void)

longlong * FUN_146d8e09e(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  int local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1],(longlong)*(int *)((longlong)param_2 + 0xc));
  local_38 = (int)param_2[1];
  puVar1 = (ulonglong *)param_1[1];
  piVar3 = (int *)*puVar1 + 1;
  if ((int *)puVar1[1] < piVar3) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_38,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_38);
    }
  }
  else {
    local_38 = *(int *)*puVar1;
    *puVar1 = (ulonglong)piVar3;
  }
  if (local_38 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_38);
  }
  if (*(int *)((longlong)param_2 + 0xc) < local_38) {
    FUN_14475e67c(param_2);
  }
  FUN_1448c4dd6(param_2,local_38,1);
  if (0 < local_38) {
    lVar4 = 0;
    do {
      lVar2 = *param_2;
      piVar3 = *(int **)param_1[1];
      if ((int *)((undefined8 *)param_1[1])[1] < piVar3 + 1) {
        local_34 = (uint)*(byte *)(lVar2 + lVar4);
        (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
        if (1 < local_34) {
          FUN_14572541c(param_1);
        }
        *(bool *)(lVar2 + lVar4) = local_34 != 0;
      }
      else {
        *(bool *)(lVar2 + lVar4) = *piVar3 != 0;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d8e1f1 FUN_146d8e1f1 body=252 status=ok
// SIG undefined FUN_146d8e1f1(void)

longlong * FUN_146d8e1f1(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 2,(longlong)*(int *)((longlong)param_2 + 0xc) * 2);
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146d9d198(param_2);
    }
    FUN_14007132e(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146d9eca2(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 2;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146d8e2ef FUN_146d8e2ef body=199 status=ok
// SIG undefined FUN_146d8e2ef(void)

longlong * FUN_146d8e2ef(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  FUN_146d9ecf6(param_2,local_2c);
  if (0 < local_2c) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_146cae532(param_1,*param_2 + lVar3);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (lVar4 < local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8e3b8 FUN_146d8e3b8 body=1628 status=ok
// SIG undefined FUN_146d8e3b8(void)

longlong *
FUN_146d8e3b8(longlong *param_1,longlong *param_2,longlong param_3,uint param_4,uint param_5)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  undefined1 auStack_148 [32];
  longlong local_128;
  int *local_120;
  longlong *local_118;
  ulonglong local_110;
  longlong local_108;
  int *local_100;
  uint local_f4;
  undefined1 local_f0 [4];
  uint local_ec;
  uint *local_e8;
  undefined8 uStack_e0;
  longlong local_d8 [5];
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_1 = 0;
  param_1[1] = 0;
  local_d8[2] = 0;
  local_d8[3] = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_118 = param_1;
  local_108 = param_3;
  FUN_140bfc3e2(local_d8 + 2,param_5 - param_4);
  FUN_140bfc48e(local_d8,(int)param_2[1]);
  local_128 = (longlong)(int)param_4 * -0x68 + local_d8[2];
  if (0 < (int)param_2[1]) {
    lVar16 = 0;
    lVar17 = 0;
    do {
      lVar9 = *param_2;
      *(undefined4 *)(local_d8[0] + lVar16) = *(undefined4 *)(lVar9 + lVar17 * 8);
      *(undefined4 *)(local_d8[0] + 4 + lVar16) = *(undefined4 *)(lVar9 + 4 + lVar17 * 8);
      lVar8 = (longlong)*(int *)(lVar9 + lVar17 * 8) * 0x68;
      lVar11 = local_128 + lVar8;
      iVar4 = *(int *)(local_128 + 0x28 + lVar8);
      *(uint *)(local_128 + 0x28 + lVar8) = iVar4 + 1U;
      if (*(uint *)(local_128 + 0x2c + lVar8) < iVar4 + 1U) {
        FUN_1400cc390(lVar11,iVar4);
      }
      lVar8 = *(longlong *)(lVar11 + 0x20);
      if (*(longlong *)(lVar11 + 0x20) == 0) {
        lVar8 = lVar11;
      }
      *(int *)(lVar8 + (longlong)iVar4 * 4) = (int)lVar17;
      lVar9 = (longlong)*(int *)(lVar9 + 4 + lVar17 * 8) * 0x68;
      lVar11 = local_128 + lVar9;
      iVar4 = *(int *)(local_128 + 0x28 + lVar9);
      *(uint *)(local_128 + 0x28 + lVar9) = iVar4 + 1U;
      if (*(uint *)(local_128 + 0x2c + lVar9) < iVar4 + 1U) {
        FUN_1400cc390(lVar11,iVar4);
      }
      lVar9 = *(longlong *)(lVar11 + 0x20);
      if (*(longlong *)(lVar11 + 0x20) == 0) {
        lVar9 = lVar11;
      }
      *(int *)(lVar9 + (longlong)iVar4 * 4) = (int)lVar17;
      lVar17 = lVar17 + 1;
      lVar16 = lVar16 + 0xc;
    } while (lVar17 < (int)param_2[1]);
  }
  local_98 = 0;
  local_90 = 0;
  local_d8[4] = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_e8 = (uint *)0x0;
  uStack_e0 = 0;
  if ((int)param_4 < (int)param_5) {
    local_110 = 0xffffffff;
    do {
      fVar3 = *(float *)(*(longlong *)(*(longlong *)(local_108 + 8) + 0x90) +
                        ((longlong)(int)param_4 + (longlong)*(int *)(local_108 + 0x10)) * 4);
      local_f4 = param_4;
      if ((int)uStack_b0 != local_84) {
        puVar12 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar12 = local_80;
        }
        for (iVar4 = *(int *)(puVar12 + (ulonglong)(local_70 - 1U & param_4) * 4); iVar4 != -1;
            iVar4 = *(int *)(local_d8[4] + (longlong)iVar4 * 0xc + 4)) {
          if (*(uint *)(local_d8[4] + (longlong)iVar4 * 0xc) == param_4) goto LAB_146d8e959;
        }
      }
      if ((fVar3 != 0.0) || (NAN(fVar3))) {
        uStack_e0 = CONCAT44(uStack_e0._4_4_,1);
        if (uStack_e0._4_4_ == 0) {
          FUN_1446f48e2(&local_e8,0);
        }
        *local_e8 = param_4;
        while (lVar16 = local_128, (int)uStack_e0 != 0) {
          local_ec = local_e8[(int)uStack_e0 + -1];
          lVar17 = (longlong)(int)local_ec * 0x68;
          piVar1 = (int *)(local_128 + lVar17);
          FUN_144a1a59e(&local_e8,(longlong)((int)uStack_e0 + -1),0);
          FUN_1447cbafe(local_d8 + 4,local_f0,&local_ec,0);
          piVar18 = *(int **)(lVar16 + 0x20 + lVar17);
          if (piVar18 == (int *)0x0) {
            piVar18 = piVar1;
          }
          lVar16 = (longlong)*(int *)(lVar16 + 0x28 + lVar17);
          if (lVar16 != 0) {
            piVar10 = piVar18 + lVar16;
            local_100 = piVar1 + 0xe;
            local_120 = piVar10;
            do {
              iVar4 = *piVar18;
              if (*(int *)(local_d8[0] + 8 + (longlong)iVar4 * 0xc) < 0) {
                puVar2 = (uint *)(local_d8[0] + (longlong)iVar4 * 0xc);
                uVar15 = 0xffffffff;
                if (*puVar2 == local_ec) {
                  uVar15 = puVar2[1];
                }
                if (puVar2[1] == local_ec) {
                  uVar15 = *puVar2;
                }
                piVar10 = *(int **)(piVar1 + 0x16);
                piVar14 = piVar10;
                if (piVar10 == (int *)0x0) {
                  piVar14 = local_100;
                }
                iVar5 = piVar1[0x18];
                lVar16 = (longlong)iVar5;
                if (lVar16 != 0) {
                  uVar7 = piVar1[0xc];
                  do {
                    lVar17 = 0;
                    while (*(uint *)((longlong)piVar14 + lVar17) != uVar7) {
                      lVar17 = lVar17 + 4;
                      if (lVar16 * 4 - lVar17 == 0) goto LAB_146d8e6c8;
                    }
                    uVar7 = uVar7 + 1;
                    piVar1[0xc] = uVar7;
                  } while( true );
                }
                uVar7 = piVar1[0xc];
LAB_146d8e6c8:
                lVar17 = (longlong)(int)uVar15;
                if ((uVar15 != 0xffffffff) &&
                   ((fVar3 = *(float *)(*(longlong *)(*(longlong *)(local_108 + 8) + 0x90) +
                                       (*(int *)(local_108 + 0x10) + lVar17) * 4), fVar3 != 0.0 ||
                    (NAN(fVar3))))) {
                  lVar9 = local_128 + lVar17 * 0x68;
                  lVar11 = *(longlong *)(lVar9 + 0x58);
                  if (*(longlong *)(lVar9 + 0x58) == 0) {
                    lVar11 = lVar9 + 0x38;
                  }
                  while( true ) {
                    if (*(int *)(lVar9 + 0x60) != 0) {
                      lVar8 = 0;
                      do {
                        if (*(uint *)(lVar11 + lVar8) == uVar7) goto LAB_146d8e756;
                        lVar8 = lVar8 + 4;
                      } while ((longlong)*(int *)(lVar9 + 0x60) << 2 != lVar8);
                    }
                    if (iVar5 == 0) break;
                    lVar8 = 0;
                    while (*(uint *)((longlong)piVar14 + lVar8) != uVar7) {
                      lVar8 = lVar8 + 4;
                      if (lVar16 * 4 - lVar8 == 0) goto LAB_146d8e75b;
                    }
LAB_146d8e756:
                    uVar7 = uVar7 + 1;
                  }
                }
LAB_146d8e75b:
                iVar13 = (int)local_110;
                local_110 = local_110 & 0xffffffff;
                if (iVar13 <= (int)uVar7) {
                  local_110 = (ulonglong)uVar7;
                }
                piVar1[0x18] = iVar5 + 1U;
                if ((uint)piVar1[0x19] < iVar5 + 1U) {
                  FUN_1400cc390(local_100,iVar5);
                  piVar10 = *(int **)(piVar1 + 0x16);
                }
                if (piVar10 == (int *)0x0) {
                  piVar10 = local_100;
                }
                piVar10[lVar16] = uVar7;
                puVar2[2] = uVar7;
                if (uVar7 == piVar1[0xc]) {
                  piVar1[0xc] = uVar7 + 1;
                }
                if ((int)local_118[1] <= (int)local_110) {
                  FUN_140bfc200(local_118,(int)local_110 + 1);
                }
                lVar16 = *local_118;
                lVar11 = (longlong)(int)puVar2[2] * 0x10;
                iVar5 = *(int *)(lVar16 + 8 + lVar11);
                *(uint *)(lVar16 + 8 + lVar11) = iVar5 + 1U;
                if (*(uint *)(lVar16 + 0xc + lVar11) < iVar5 + 1U) {
                  FUN_1446f48e2((longlong *)(lVar16 + lVar11),iVar5);
                }
                *(int *)(*(longlong *)(lVar16 + lVar11) + (longlong)iVar5 * 4) = iVar4;
                piVar10 = local_120;
                if ((uVar15 != 0xffffffff) &&
                   ((fVar3 = *(float *)(*(longlong *)(*(longlong *)(local_108 + 8) + 0x90) +
                                       (*(int *)(local_108 + 0x10) + lVar17) * 4), fVar3 != 0.0 ||
                    (NAN(fVar3))))) {
                  lVar16 = local_128 + lVar17 * 0x68;
                  iVar4 = *(int *)(lVar16 + 0x60);
                  *(uint *)(lVar16 + 0x60) = iVar4 + 1U;
                  if (*(uint *)(lVar16 + 100) < iVar4 + 1U) {
                    FUN_1400cc390(lVar16 + 0x38,iVar4);
                  }
                  uVar6 = uStack_e0;
                  lVar17 = *(longlong *)(lVar16 + 0x58);
                  if (*(longlong *)(lVar16 + 0x58) == 0) {
                    lVar17 = lVar16 + 0x38;
                  }
                  *(uint *)(lVar17 + (longlong)iVar4 * 4) = puVar2[2];
                  if ((int)uStack_b0 != local_84) {
                    puVar12 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar12 = local_80;
                    }
                    for (iVar4 = *(int *)(puVar12 + (ulonglong)(local_70 - 1U & uVar15) * 4);
                        iVar4 != -1; iVar4 = *(int *)(local_d8[4] + (longlong)iVar4 * 0xc + 4)) {
                      piVar10 = local_120;
                      if (*(uint *)(local_d8[4] + (longlong)iVar4 * 0xc) == uVar15)
                      goto LAB_146d8e657;
                    }
                  }
                  lVar16 = (longlong)(int)uStack_e0;
                  uVar7 = (int)uStack_e0 + 1;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar7);
                  if (uStack_e0._4_4_ < uVar7) {
                    FUN_1446f48e2(&local_e8,uVar6 & 0xffffffff);
                  }
                  local_e8[lVar16] = uVar15;
                  piVar10 = local_120;
                }
              }
LAB_146d8e657:
              piVar18 = piVar18 + 1;
            } while (piVar18 != piVar10);
          }
        }
      }
LAB_146d8e959:
      param_4 = local_f4 + 1;
    } while (param_4 != param_5);
    if (local_e8 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_d8 + 4);
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140bfc290(local_d8[2],local_d8[3] & 0xffffffff);
  if (local_d8[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return local_118;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8ea16 FUN_146d8ea16 body=2551 status=ok
// SIG undefined FUN_146d8ea16(void)

longlong *
FUN_146d8ea16(longlong *param_1,longlong *param_2,longlong param_3,uint param_4,uint param_5)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  undefined1 *puVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  int *piVar22;
  uint *puVar23;
  longlong *plVar24;
  undefined1 auStack_178 [40];
  int *local_150;
  longlong local_148;
  longlong local_140;
  int *local_138;
  longlong local_130;
  ulonglong local_128;
  longlong *local_120;
  int *local_118;
  uint local_10c;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined1 local_f0 [4];
  uint local_ec;
  uint *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *param_1 = 0;
  param_1[1] = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_140 = param_3;
  local_120 = param_1;
  FUN_140bfc3e2(&local_c8,param_5 - param_4);
  FUN_14108867a(&local_d8,(int)param_2[1]);
  local_148 = (longlong)(int)param_4 * -0x68 + local_c8;
  if (0 < (int)param_2[1]) {
    lVar17 = 8;
    lVar19 = 0;
    lVar15 = 0;
    do {
      lVar8 = *param_2;
      *(undefined4 *)(local_d8 + lVar19) = *(undefined4 *)(lVar8 + -8 + lVar17);
      *(undefined4 *)(local_d8 + 4 + lVar19) = *(undefined4 *)(lVar8 + -4 + lVar17);
      *(undefined4 *)(local_d8 + 0xc + lVar19) = *(undefined4 *)(lVar8 + lVar17);
      lVar7 = (longlong)*(int *)(lVar8 + -8 + lVar17) * 0x68;
      lVar20 = local_148 + lVar7;
      iVar2 = *(int *)(local_148 + 0x28 + lVar7);
      *(uint *)(local_148 + 0x28 + lVar7) = iVar2 + 1U;
      if (*(uint *)(local_148 + 0x2c + lVar7) < iVar2 + 1U) {
        FUN_1400cc390(lVar20,iVar2);
      }
      lVar7 = *(longlong *)(lVar20 + 0x20);
      if (*(longlong *)(lVar20 + 0x20) == 0) {
        lVar7 = lVar20;
      }
      uVar13 = (undefined4)lVar15;
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 4) = uVar13;
      lVar7 = (longlong)*(int *)(lVar8 + -4 + lVar17) * 0x68;
      lVar20 = local_148 + lVar7;
      iVar2 = *(int *)(local_148 + 0x28 + lVar7);
      *(uint *)(local_148 + 0x28 + lVar7) = iVar2 + 1U;
      if (*(uint *)(local_148 + 0x2c + lVar7) < iVar2 + 1U) {
        FUN_1400cc390(lVar20,iVar2);
      }
      lVar7 = *(longlong *)(lVar20 + 0x20);
      if (*(longlong *)(lVar20 + 0x20) == 0) {
        lVar7 = lVar20;
      }
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 4) = uVar13;
      lVar8 = (longlong)*(int *)(lVar8 + lVar17) * 0x68;
      lVar20 = local_148 + lVar8;
      iVar2 = *(int *)(local_148 + 0x28 + lVar8);
      *(uint *)(local_148 + 0x28 + lVar8) = iVar2 + 1U;
      if (*(uint *)(local_148 + 0x2c + lVar8) < iVar2 + 1U) {
        FUN_1400cc390(lVar20,iVar2);
      }
      lVar8 = *(longlong *)(lVar20 + 0x20);
      if (*(longlong *)(lVar20 + 0x20) == 0) {
        lVar8 = lVar20;
      }
      *(undefined4 *)(lVar8 + (longlong)iVar2 * 4) = uVar13;
      lVar15 = lVar15 + 1;
      lVar19 = lVar19 + 0x10;
      lVar17 = lVar17 + 0xc;
    } while (lVar15 < (int)param_2[1]);
  }
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_e8 = (uint *)0x0;
  uStack_e0 = 0;
  plVar24 = local_120;
  if ((int)param_4 < (int)param_5) {
    local_128 = 0xffffffff;
    lVar15 = local_148;
    do {
      fVar1 = *(float *)(*(longlong *)(*(longlong *)(local_140 + 8) + 0x90) +
                        ((longlong)(int)param_4 + (longlong)*(int *)(local_140 + 0x10)) * 4);
      local_10c = param_4;
      if ((int)uStack_b0 != local_84) {
        puVar10 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar10 = local_80;
        }
        for (iVar2 = *(int *)(puVar10 + (ulonglong)(local_70 - 1U & param_4) * 4); iVar2 != -1;
            iVar2 = *(int *)(local_b8 + (longlong)iVar2 * 0xc + 4)) {
          if (*(uint *)(local_b8 + (longlong)iVar2 * 0xc) == param_4) goto LAB_146d8f2f9;
        }
      }
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        uStack_e0 = CONCAT44(uStack_e0._4_4_,1);
        if (uStack_e0._4_4_ == 0) {
          FUN_1446f48e2(&local_e8,0);
        }
        *local_e8 = param_4;
        while ((int)uStack_e0 != 0) {
          local_ec = local_e8[(int)uStack_e0 + -1];
          lVar17 = (longlong)(int)local_ec * 0x68;
          piVar22 = (int *)(lVar15 + lVar17);
          FUN_144a1a59e(&local_e8,(longlong)((int)uStack_e0 + -1),0);
          FUN_1447cbafe(&local_b8,local_f0,&local_ec,0);
          piVar18 = *(int **)(lVar15 + 0x20 + lVar17);
          if (piVar18 == (int *)0x0) {
            piVar18 = piVar22;
          }
          lVar15 = (longlong)*(int *)(lVar15 + 0x28 + lVar17);
          if (lVar15 != 0) {
            piVar9 = piVar18 + lVar15;
            local_118 = piVar22 + 0xe;
            lVar15 = local_140;
            local_150 = piVar22;
            local_138 = piVar9;
            do {
              lVar17 = (longlong)*piVar18;
              if (*(int *)(local_d8 + 8 + lVar17 * 0x10) < 0) {
                puVar23 = (uint *)(local_d8 + lVar17 * 0x10);
                uVar6 = *puVar23;
                uVar3 = puVar23[1];
                uVar4 = puVar23[3];
                uVar14 = 0xffffffff;
                if (uVar6 == local_ec) {
                  uVar14 = uVar3;
                }
                uVar16 = 0xffffffff;
                if (uVar6 == local_ec) {
                  uVar16 = uVar4;
                }
                if (uVar3 == local_ec) {
                  uVar14 = uVar6;
                  uVar16 = uVar4;
                }
                if (uVar4 == local_ec) {
                  uVar16 = uVar3;
                  uVar14 = uVar6;
                }
                piVar9 = *(int **)(piVar22 + 0x16);
                piVar12 = piVar9;
                if (piVar9 == (int *)0x0) {
                  piVar12 = local_118;
                }
                iVar2 = piVar22[0x18];
                lVar19 = (longlong)iVar2;
                if (lVar19 != 0) {
                  uVar6 = piVar22[0xc];
                  do {
                    lVar20 = 0;
                    while (*(uint *)((longlong)piVar12 + lVar20) != uVar6) {
                      lVar20 = lVar20 + 4;
                      if (lVar19 * 4 - lVar20 == 0) goto LAB_146d8edfb;
                    }
                    uVar6 = uVar6 + 1;
                    piVar22[0xc] = uVar6;
                  } while( true );
                }
                uVar6 = piVar22[0xc];
LAB_146d8edfb:
                local_130 = (longlong)(int)uVar14;
                if ((uVar14 != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar15 + 8) + 0x90) +
                                       (*(int *)(lVar15 + 0x10) + local_130) * 4), fVar1 != 0.0 ||
                    (NAN(fVar1))))) {
                  lVar8 = local_148 + local_130 * 0x68;
                  lVar20 = *(longlong *)(lVar8 + 0x58);
                  if (*(longlong *)(lVar8 + 0x58) == 0) {
                    lVar20 = lVar8 + 0x38;
                  }
                  while( true ) {
                    if (*(int *)(lVar8 + 0x60) != 0) {
                      lVar7 = 0;
                      do {
                        if (*(uint *)(lVar20 + lVar7) == uVar6) goto LAB_146d8ee89;
                        lVar7 = lVar7 + 4;
                      } while ((longlong)*(int *)(lVar8 + 0x60) << 2 != lVar7);
                    }
                    piVar22 = local_150;
                    if (iVar2 == 0) break;
                    lVar7 = 0;
                    while (*(uint *)((longlong)piVar12 + lVar7) != uVar6) {
                      lVar7 = lVar7 + 4;
                      if (lVar19 * 4 - lVar7 == 0) goto LAB_146d8ee93;
                    }
LAB_146d8ee89:
                    uVar6 = uVar6 + 1;
                  }
                }
LAB_146d8ee93:
                local_100 = (longlong)(int)uVar16;
                if ((uVar16 != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar15 + 8) + 0x90) +
                                       (*(int *)(lVar15 + 0x10) + local_100) * 4), fVar1 != 0.0 ||
                    (NAN(fVar1))))) {
                  lVar20 = local_100 * 0x68 + local_148;
                  if (uVar14 == 0xffffffff) {
                    lVar8 = lVar20 + 0x38;
                    if (*(longlong *)(lVar20 + 0x58) != 0) {
                      lVar8 = *(longlong *)(lVar20 + 0x58);
                    }
                    while( true ) {
                      if (*(int *)(lVar20 + 0x60) != 0) {
                        lVar7 = 0;
                        do {
                          if (*(uint *)(lVar8 + lVar7) == uVar6) goto LAB_146d8f2e0;
                          lVar7 = lVar7 + 4;
                        } while ((longlong)*(int *)(lVar20 + 0x60) << 2 != lVar7);
                      }
                      piVar22 = local_150;
                      if (iVar2 == 0) break;
                      lVar7 = 0;
                      while (*(uint *)((longlong)piVar12 + lVar7) != uVar6) {
                        lVar7 = lVar7 + 4;
                        if (lVar19 * 4 - lVar7 == 0) goto LAB_146d8ef80;
                      }
LAB_146d8f2e0:
                      uVar6 = uVar6 + 1;
                    }
                  }
                  else {
                    lVar8 = lVar20 + 0x38;
                    if (*(longlong *)(lVar20 + 0x58) != 0) {
                      lVar8 = *(longlong *)(lVar20 + 0x58);
                    }
                    local_108 = (longlong)*(int *)(lVar20 + 0x60);
                    lVar7 = local_148 + local_130 * 0x68;
                    while( true ) {
                      if (*(int *)(lVar20 + 0x60) != 0) {
                        lVar15 = 0;
                        do {
                          if (*(uint *)(lVar8 + lVar15) == uVar6) goto LAB_146d8ef6c;
                          lVar15 = lVar15 + 4;
                        } while (local_108 << 2 != lVar15);
                      }
                      lVar15 = *(longlong *)(lVar7 + 0x58);
                      if (*(longlong *)(lVar7 + 0x58) == 0) {
                        lVar15 = lVar7 + 0x38;
                      }
                      if ((longlong)*(int *)(lVar7 + 0x60) != 0) {
                        lVar21 = 0;
                        do {
                          if (*(uint *)(lVar15 + lVar21) == uVar6) goto LAB_146d8ef6c;
                          lVar21 = lVar21 + 4;
                        } while ((longlong)*(int *)(lVar7 + 0x60) * 4 != lVar21);
                      }
                      lVar15 = local_140;
                      piVar22 = local_150;
                      plVar24 = local_120;
                      if (iVar2 == 0) break;
                      lVar21 = 0;
                      while (*(uint *)((longlong)piVar12 + lVar21) != uVar6) {
                        lVar21 = lVar21 + 4;
                        if (lVar19 * 4 - lVar21 == 0) goto LAB_146d8ef80;
                      }
LAB_146d8ef6c:
                      uVar6 = uVar6 + 1;
                    }
                  }
                }
LAB_146d8ef80:
                iVar11 = (int)local_128;
                local_128 = local_128 & 0xffffffff;
                if (iVar11 <= (int)uVar6) {
                  local_128 = (ulonglong)uVar6;
                }
                piVar22[0x18] = iVar2 + 1U;
                local_f8 = lVar17;
                if ((uint)piVar22[0x19] < iVar2 + 1U) {
                  FUN_1400cc390(local_118,iVar2);
                  piVar9 = *(int **)(local_150 + 0x16);
                  piVar22 = local_150;
                }
                if (piVar9 == (int *)0x0) {
                  piVar9 = local_118;
                }
                piVar9[lVar19] = uVar6;
                puVar23[2] = uVar6;
                if (uVar6 == piVar22[0xc]) {
                  piVar22[0xc] = uVar6 + 1;
                }
                if ((int)plVar24[1] <= (int)local_128) {
                  FUN_140bfc200(plVar24,(int)local_128 + 1,1);
                }
                lVar17 = *plVar24;
                lVar19 = (longlong)(int)puVar23[2] * 0x10;
                iVar2 = *(int *)(lVar17 + 8 + lVar19);
                *(uint *)(lVar17 + 8 + lVar19) = iVar2 + 1U;
                if (*(uint *)(lVar17 + 0xc + lVar19) < iVar2 + 1U) {
                  FUN_1446f48e2((longlong *)(lVar17 + lVar19),iVar2);
                }
                *(int *)(*(longlong *)(lVar17 + lVar19) + (longlong)iVar2 * 4) = (int)local_f8;
                if ((uVar14 != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar15 + 8) + 0x90) +
                                       (*(int *)(lVar15 + 0x10) + local_130) * 4), fVar1 != 0.0 ||
                    (NAN(fVar1))))) {
                  lVar17 = local_148 + local_130 * 0x68;
                  iVar2 = *(int *)(lVar17 + 0x60);
                  *(uint *)(lVar17 + 0x60) = iVar2 + 1U;
                  if (*(uint *)(lVar17 + 100) < iVar2 + 1U) {
                    FUN_1400cc390(lVar17 + 0x38,iVar2);
                  }
                  uVar5 = uStack_e0;
                  lVar19 = *(longlong *)(lVar17 + 0x58);
                  if (*(longlong *)(lVar17 + 0x58) == 0) {
                    lVar19 = lVar17 + 0x38;
                  }
                  *(uint *)(lVar19 + (longlong)iVar2 * 4) = puVar23[2];
                  if ((int)uStack_b0 != local_84) {
                    puVar10 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar10 = local_80;
                    }
                    for (iVar2 = *(int *)(puVar10 + (ulonglong)(local_70 - 1U & uVar14) * 4);
                        iVar2 != -1; iVar2 = *(int *)(local_b8 + (longlong)iVar2 * 0xc + 4)) {
                      if (*(uint *)(local_b8 + (longlong)iVar2 * 0xc) == uVar14) goto LAB_146d8f108;
                    }
                  }
                  lVar17 = (longlong)(int)uStack_e0;
                  uVar6 = (int)uStack_e0 + 1;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar6);
                  if (uStack_e0._4_4_ < uVar6) {
                    FUN_1446f48e2(&local_e8,uVar5 & 0xffffffff);
                  }
                  local_e8[lVar17] = uVar14;
                }
LAB_146d8f108:
                piVar9 = local_138;
                piVar22 = local_150;
                if ((uVar16 != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar15 + 8) + 0x90) +
                                       (*(int *)(lVar15 + 0x10) + local_100) * 4), fVar1 != 0.0 ||
                    (NAN(fVar1))))) {
                  lVar17 = local_148 + local_100 * 0x68;
                  iVar2 = *(int *)(lVar17 + 0x60);
                  *(uint *)(lVar17 + 0x60) = iVar2 + 1U;
                  if (*(uint *)(lVar17 + 100) < iVar2 + 1U) {
                    FUN_1400cc390(lVar17 + 0x38,iVar2);
                  }
                  uVar5 = uStack_e0;
                  lVar19 = *(longlong *)(lVar17 + 0x58);
                  if (*(longlong *)(lVar17 + 0x58) == 0) {
                    lVar19 = lVar17 + 0x38;
                  }
                  *(uint *)(lVar19 + (longlong)iVar2 * 4) = puVar23[2];
                  if ((int)uStack_b0 != local_84) {
                    puVar10 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar10 = local_80;
                    }
                    for (iVar2 = *(int *)(puVar10 + (ulonglong)(local_70 - 1U & uVar16) * 4);
                        iVar2 != -1; iVar2 = *(int *)(local_b8 + (longlong)iVar2 * 0xc + 4)) {
                      piVar9 = local_138;
                      piVar22 = local_150;
                      if (*(uint *)(local_b8 + (longlong)iVar2 * 0xc) == uVar16) goto LAB_146d8ed54;
                    }
                  }
                  lVar17 = (longlong)(int)uStack_e0;
                  uVar6 = (int)uStack_e0 + 1;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar6);
                  if (uStack_e0._4_4_ < uVar6) {
                    FUN_1446f48e2(&local_e8,uVar5 & 0xffffffff);
                  }
                  local_e8[lVar17] = uVar16;
                  piVar9 = local_138;
                  piVar22 = local_150;
                }
              }
LAB_146d8ed54:
              piVar18 = piVar18 + 1;
            } while (piVar18 != piVar9);
          }
          lVar15 = local_148;
        }
      }
LAB_146d8f2f9:
      param_4 = local_10c + 1;
    } while (param_4 != param_5);
    if (local_e8 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_b8);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_140bfc290(local_c8,uStack_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return plVar24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8f40e FUN_146d8f40e body=3630 status=ok
// SIG undefined FUN_146d8f40e(void)

longlong *
FUN_146d8f40e(longlong *param_1,longlong *param_2,longlong param_3,uint param_4,uint param_5)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  undefined1 *puVar16;
  int *piVar17;
  undefined4 uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  int *piVar23;
  uint uVar24;
  longlong lVar25;
  int *piVar26;
  longlong *plVar27;
  undefined1 auStack_188 [32];
  int *local_168;
  longlong local_160;
  longlong local_158;
  longlong *local_150;
  int *local_148;
  longlong local_140;
  uint *local_138;
  ulonglong local_130;
  longlong local_128;
  int *local_120;
  uint local_114;
  longlong local_110;
  longlong local_108;
  int *local_100;
  longlong local_f8;
  undefined1 local_f0 [4];
  uint local_ec;
  uint *local_e8;
  undefined8 uStack_e0;
  longlong local_d8 [5];
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *param_1 = 0;
  param_1[1] = 0;
  local_d8[2] = 0;
  local_d8[3] = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_158 = param_3;
  local_150 = param_1;
  FUN_140bfc3e2(local_d8 + 2,param_5 - param_4);
  FUN_1412893be(local_d8,(int)param_2[1]);
  local_160 = (longlong)(int)param_4 * -0x68 + local_d8[2];
  if (0 < (int)param_2[1]) {
    lVar22 = 0xc;
    lVar25 = 0;
    lVar20 = 0;
    do {
      lVar11 = *param_2;
      *(undefined4 *)(local_d8[0] + lVar25) = *(undefined4 *)(lVar11 + -0xc + lVar22);
      *(undefined4 *)(local_d8[0] + 4 + lVar25) = *(undefined4 *)(lVar11 + -8 + lVar22);
      *(undefined4 *)(local_d8[0] + 0xc + lVar25) = *(undefined4 *)(lVar11 + -4 + lVar22);
      *(undefined4 *)(local_d8[0] + 0x10 + lVar25) = *(undefined4 *)(lVar11 + lVar22);
      lVar10 = (longlong)*(int *)(lVar11 + -0xc + lVar22) * 0x68;
      lVar12 = local_160 + lVar10;
      iVar2 = *(int *)(local_160 + 0x28 + lVar10);
      *(uint *)(local_160 + 0x28 + lVar10) = iVar2 + 1U;
      if (*(uint *)(local_160 + 0x2c + lVar10) < iVar2 + 1U) {
        FUN_1400cc390(lVar12,iVar2);
      }
      lVar10 = *(longlong *)(lVar12 + 0x20);
      if (*(longlong *)(lVar12 + 0x20) == 0) {
        lVar10 = lVar12;
      }
      uVar18 = (undefined4)lVar20;
      *(undefined4 *)(lVar10 + (longlong)iVar2 * 4) = uVar18;
      lVar10 = (longlong)*(int *)(lVar11 + -8 + lVar22) * 0x68;
      lVar12 = local_160 + lVar10;
      iVar2 = *(int *)(local_160 + 0x28 + lVar10);
      *(uint *)(local_160 + 0x28 + lVar10) = iVar2 + 1U;
      if (*(uint *)(local_160 + 0x2c + lVar10) < iVar2 + 1U) {
        FUN_1400cc390(lVar12,iVar2);
      }
      lVar10 = *(longlong *)(lVar12 + 0x20);
      if (*(longlong *)(lVar12 + 0x20) == 0) {
        lVar10 = lVar12;
      }
      *(undefined4 *)(lVar10 + (longlong)iVar2 * 4) = uVar18;
      lVar10 = (longlong)*(int *)(lVar11 + -4 + lVar22) * 0x68;
      lVar12 = local_160 + lVar10;
      iVar2 = *(int *)(local_160 + 0x28 + lVar10);
      *(uint *)(local_160 + 0x28 + lVar10) = iVar2 + 1U;
      if (*(uint *)(local_160 + 0x2c + lVar10) < iVar2 + 1U) {
        FUN_1400cc390(lVar12,iVar2);
      }
      lVar10 = *(longlong *)(lVar12 + 0x20);
      if (*(longlong *)(lVar12 + 0x20) == 0) {
        lVar10 = lVar12;
      }
      *(undefined4 *)(lVar10 + (longlong)iVar2 * 4) = uVar18;
      lVar11 = (longlong)*(int *)(lVar11 + lVar22) * 0x68;
      lVar12 = local_160 + lVar11;
      iVar2 = *(int *)(local_160 + 0x28 + lVar11);
      *(uint *)(local_160 + 0x28 + lVar11) = iVar2 + 1U;
      if (*(uint *)(local_160 + 0x2c + lVar11) < iVar2 + 1U) {
        FUN_1400cc390(lVar12,iVar2);
      }
      lVar11 = *(longlong *)(lVar12 + 0x20);
      if (*(longlong *)(lVar12 + 0x20) == 0) {
        lVar11 = lVar12;
      }
      *(undefined4 *)(lVar11 + (longlong)iVar2 * 4) = uVar18;
      lVar20 = lVar20 + 1;
      lVar25 = lVar25 + 0x14;
      lVar22 = lVar22 + 0x10;
    } while (lVar20 < (int)param_2[1]);
  }
  local_98 = 0;
  local_90 = 0;
  local_d8[4] = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_e8 = (uint *)0x0;
  uStack_e0 = 0;
  plVar27 = local_150;
  if ((int)param_4 < (int)param_5) {
    local_130 = 0xffffffff;
    lVar20 = local_158;
    do {
      fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar20 + 8) + 0x90) +
                        ((longlong)(int)param_4 + (longlong)*(int *)(lVar20 + 0x10)) * 4);
      local_114 = param_4;
      if ((int)uStack_b0 != local_84) {
        puVar16 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar16 = local_80;
        }
        for (iVar2 = *(int *)(puVar16 + (ulonglong)(local_70 - 1U & param_4) * 4); iVar2 != -1;
            iVar2 = *(int *)(local_d8[4] + (longlong)iVar2 * 0xc + 4)) {
          if (*(uint *)(local_d8[4] + (longlong)iVar2 * 0xc) == param_4) goto LAB_146d9017d;
        }
      }
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        uStack_e0 = CONCAT44(uStack_e0._4_4_,1);
        if (uStack_e0._4_4_ == 0) {
          FUN_1446f48e2(&local_e8,0);
        }
        *local_e8 = param_4;
        while (lVar22 = local_160, (int)uStack_e0 != 0) {
          local_ec = local_e8[(int)uStack_e0 + -1];
          lVar25 = (longlong)(int)local_ec * 0x68;
          piVar26 = (int *)(local_160 + lVar25);
          FUN_144a1a59e(&local_e8,(longlong)((int)uStack_e0 + -1),0);
          FUN_1447cbafe(local_d8 + 4,local_f0,&local_ec,0);
          piVar23 = *(int **)(lVar22 + 0x20 + lVar25);
          if (piVar23 == (int *)0x0) {
            piVar23 = piVar26;
          }
          lVar22 = (longlong)*(int *)(lVar22 + 0x28 + lVar25);
          if (lVar22 != 0) {
            piVar15 = piVar23 + lVar22;
            local_120 = piVar26 + 0xe;
            local_168 = piVar26;
            local_148 = piVar15;
            do {
              lVar22 = (longlong)*piVar23;
              if (*(int *)(local_d8[0] + 8 + lVar22 * 0x14) < 0) {
                local_138 = (uint *)(local_d8[0] + lVar22 * 0x14);
                uVar9 = *local_138;
                uVar3 = local_138[1];
                uVar4 = local_138[3];
                uVar21 = 0xffffffff;
                uVar24 = 0xffffffff;
                uVar19 = 0xffffffff;
                if (uVar9 == local_ec) {
                  uVar21 = local_138[4];
                  uVar24 = uVar4;
                  uVar19 = uVar3;
                }
                uVar5 = local_138[4];
                if (uVar3 == local_ec) {
                  uVar19 = uVar9;
                  uVar21 = uVar5;
                  uVar24 = uVar4;
                }
                if (uVar4 == local_ec) {
                  uVar21 = uVar5;
                }
                if (uVar5 == local_ec) {
                  uVar21 = uVar4;
                }
                if (uVar5 == local_ec || uVar4 == local_ec) {
                  uVar24 = uVar3;
                  uVar19 = uVar9;
                }
                piVar15 = *(int **)(piVar26 + 0x16);
                piVar17 = piVar15;
                if (piVar15 == (int *)0x0) {
                  piVar17 = local_120;
                }
                iVar2 = piVar26[0x18];
                lVar25 = (longlong)iVar2;
                if (lVar25 != 0) {
                  uVar9 = piVar26[0xc];
                  do {
                    lVar12 = 0;
                    while (*(uint *)((longlong)piVar17 + lVar12) != uVar9) {
                      lVar12 = lVar12 + 4;
                      if (lVar25 * 4 - lVar12 == 0) goto LAB_146d8f857;
                    }
                    uVar9 = uVar9 + 1;
                    piVar26[0xc] = uVar9;
                  } while( true );
                }
                uVar9 = piVar26[0xc];
LAB_146d8f857:
                local_140 = (longlong)(int)uVar19;
                if ((uVar19 != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar20 + 8) + 0x90) +
                                       (*(int *)(lVar20 + 0x10) + local_140) * 4), fVar1 != 0.0 ||
                    (NAN(fVar1))))) {
                  lVar11 = local_140 * 0x68 + local_160;
                  lVar12 = *(longlong *)(lVar11 + 0x58);
                  if (*(longlong *)(lVar11 + 0x58) == 0) {
                    lVar12 = lVar11 + 0x38;
                  }
                  while( true ) {
                    if (*(int *)(lVar11 + 0x60) != 0) {
                      lVar10 = 0;
                      do {
                        if (*(uint *)(lVar12 + lVar10) == uVar9) goto LAB_146d8f8e3;
                        lVar10 = lVar10 + 4;
                      } while ((longlong)*(int *)(lVar11 + 0x60) << 2 != lVar10);
                    }
                    piVar26 = local_168;
                    if (iVar2 == 0) break;
                    lVar10 = 0;
                    while (*(uint *)((longlong)piVar17 + lVar10) != uVar9) {
                      lVar10 = lVar10 + 4;
                      if (lVar25 * 4 - lVar10 == 0) goto LAB_146d8f8ed;
                    }
LAB_146d8f8e3:
                    uVar9 = uVar9 + 1;
                  }
                }
LAB_146d8f8ed:
                local_128 = (longlong)(int)uVar24;
                if ((uVar24 != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar20 + 8) + 0x90) +
                                       (*(int *)(lVar20 + 0x10) + local_128) * 4), fVar1 != 0.0 ||
                    (NAN(fVar1))))) {
                  lVar12 = local_128 * 0x68 + local_160;
                  if (uVar19 == 0xffffffff) {
                    lVar11 = lVar12 + 0x38;
                    if (*(longlong *)(lVar12 + 0x58) != 0) {
                      lVar11 = *(longlong *)(lVar12 + 0x58);
                    }
                    while( true ) {
                      if (*(int *)(lVar12 + 0x60) != 0) {
                        lVar10 = 0;
                        do {
                          if (*(uint *)(lVar11 + lVar10) == uVar9) goto LAB_146d8fb57;
                          lVar10 = lVar10 + 4;
                        } while ((longlong)*(int *)(lVar12 + 0x60) << 2 != lVar10);
                      }
                      piVar26 = local_168;
                      if (iVar2 == 0) break;
                      lVar10 = 0;
                      while (*(uint *)((longlong)piVar17 + lVar10) != uVar9) {
                        lVar10 = lVar10 + 4;
                        if (lVar25 * 4 - lVar10 == 0) goto LAB_146d8f9d0;
                      }
LAB_146d8fb57:
                      uVar9 = uVar9 + 1;
                    }
                  }
                  else {
                    lVar11 = lVar12 + 0x38;
                    if (*(longlong *)(lVar12 + 0x58) != 0) {
                      lVar11 = *(longlong *)(lVar12 + 0x58);
                    }
                    lVar10 = local_160 + local_140 * 0x68;
                    while( true ) {
                      if (*(int *)(lVar12 + 0x60) != 0) {
                        lVar20 = 0;
                        do {
                          if (*(uint *)(lVar11 + lVar20) == uVar9) goto LAB_146d8f9bc;
                          lVar20 = lVar20 + 4;
                        } while ((longlong)*(int *)(lVar12 + 0x60) << 2 != lVar20);
                      }
                      lVar20 = *(longlong *)(lVar10 + 0x58);
                      if (*(longlong *)(lVar10 + 0x58) == 0) {
                        lVar20 = lVar10 + 0x38;
                      }
                      if ((longlong)*(int *)(lVar10 + 0x60) != 0) {
                        lVar13 = 0;
                        do {
                          if (*(uint *)(lVar20 + lVar13) == uVar9) goto LAB_146d8f9bc;
                          lVar13 = lVar13 + 4;
                        } while ((longlong)*(int *)(lVar10 + 0x60) * 4 != lVar13);
                      }
                      piVar26 = local_168;
                      lVar20 = local_158;
                      plVar27 = local_150;
                      if (iVar2 == 0) break;
                      lVar13 = 0;
                      while (*(uint *)((longlong)piVar17 + lVar13) != uVar9) {
                        lVar13 = lVar13 + 4;
                        if (lVar25 * 4 - lVar13 == 0) goto LAB_146d8f9d0;
                      }
LAB_146d8f9bc:
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
LAB_146d8f9d0:
                local_108 = (longlong)(int)uVar21;
                if ((uVar21 != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar20 + 8) + 0x90) +
                                       (*(int *)(lVar20 + 0x10) + local_108) * 4), fVar1 != 0.0 ||
                    (NAN(fVar1))))) {
                  lVar12 = local_108 * 0x68 + local_160;
                  if ((uVar19 & uVar24) == 0xffffffff) {
                    lVar11 = lVar12 + 0x38;
                    if (*(longlong *)(lVar12 + 0x58) != 0) {
                      lVar11 = *(longlong *)(lVar12 + 0x58);
                    }
                    while( true ) {
                      if (*(int *)(lVar12 + 0x60) != 0) {
                        lVar10 = 0;
                        do {
                          if (*(uint *)(lVar11 + lVar10) == uVar9) goto LAB_146d8fbb3;
                          lVar10 = lVar10 + 4;
                        } while ((longlong)*(int *)(lVar12 + 0x60) << 2 != lVar10);
                      }
                      if (iVar2 == 0) break;
                      lVar10 = 0;
                      while (*(uint *)((longlong)piVar17 + lVar10) != uVar9) {
                        lVar10 = lVar10 + 4;
                        if (lVar25 * 4 - lVar10 == 0) goto LAB_146d8fce6;
                      }
LAB_146d8fbb3:
                      uVar9 = uVar9 + 1;
                    }
                  }
                  else if (uVar19 == 0xffffffff) {
                    lVar11 = lVar12 + 0x38;
                    if (*(longlong *)(lVar12 + 0x58) != 0) {
                      lVar11 = *(longlong *)(lVar12 + 0x58);
                    }
                    lVar10 = local_160 + local_128 * 0x68;
                    while( true ) {
                      if (*(int *)(lVar12 + 0x60) != 0) {
                        lVar20 = 0;
                        do {
                          if (*(uint *)(lVar11 + lVar20) == uVar9) goto LAB_146d8fc4a;
                          lVar20 = lVar20 + 4;
                        } while ((longlong)*(int *)(lVar12 + 0x60) << 2 != lVar20);
                      }
                      lVar20 = *(longlong *)(lVar10 + 0x58);
                      if (*(longlong *)(lVar10 + 0x58) == 0) {
                        lVar20 = lVar10 + 0x38;
                      }
                      if ((longlong)*(int *)(lVar10 + 0x60) != 0) {
                        lVar13 = 0;
                        do {
                          if (*(uint *)(lVar20 + lVar13) == uVar9) goto LAB_146d8fc4a;
                          lVar13 = lVar13 + 4;
                        } while ((longlong)*(int *)(lVar10 + 0x60) * 4 != lVar13);
                      }
                      piVar26 = local_168;
                      lVar20 = local_158;
                      plVar27 = local_150;
                      if (iVar2 == 0) break;
                      lVar13 = 0;
                      while (*(uint *)((longlong)piVar17 + lVar13) != uVar9) {
                        lVar13 = lVar13 + 4;
                        if (lVar25 * 4 - lVar13 == 0) goto LAB_146d8fce6;
                      }
LAB_146d8fc4a:
                      uVar9 = uVar9 + 1;
                    }
                  }
                  else if (uVar24 == 0xffffffff) {
                    lVar11 = lVar12 + 0x38;
                    if (*(longlong *)(lVar12 + 0x58) != 0) {
                      lVar11 = *(longlong *)(lVar12 + 0x58);
                    }
                    lVar10 = local_160 + local_140 * 0x68;
                    while( true ) {
                      if (*(int *)(lVar12 + 0x60) != 0) {
                        lVar20 = 0;
                        do {
                          if (*(uint *)(lVar11 + lVar20) == uVar9) goto LAB_146d8fcd2;
                          lVar20 = lVar20 + 4;
                        } while ((longlong)*(int *)(lVar12 + 0x60) << 2 != lVar20);
                      }
                      lVar20 = *(longlong *)(lVar10 + 0x58);
                      if (*(longlong *)(lVar10 + 0x58) == 0) {
                        lVar20 = lVar10 + 0x38;
                      }
                      if ((longlong)*(int *)(lVar10 + 0x60) != 0) {
                        lVar13 = 0;
                        do {
                          if (*(uint *)(lVar20 + lVar13) == uVar9) goto LAB_146d8fcd2;
                          lVar13 = lVar13 + 4;
                        } while ((longlong)*(int *)(lVar10 + 0x60) * 4 != lVar13);
                      }
                      piVar26 = local_168;
                      lVar20 = local_158;
                      plVar27 = local_150;
                      if (iVar2 == 0) break;
                      lVar13 = 0;
                      while (*(uint *)((longlong)piVar17 + lVar13) != uVar9) {
                        lVar13 = lVar13 + 4;
                        if (lVar25 * 4 - lVar13 == 0) goto LAB_146d8fce6;
                      }
LAB_146d8fcd2:
                      uVar9 = uVar9 + 1;
                    }
                  }
                  else {
                    lVar11 = lVar12 + 0x38;
                    if (*(longlong *)(lVar12 + 0x58) != 0) {
                      lVar11 = *(longlong *)(lVar12 + 0x58);
                    }
                    local_110 = (longlong)*(int *)(lVar12 + 0x60);
                    lVar10 = local_160 + local_140 * 0x68;
                    lVar13 = local_160 + local_128 * 0x68;
                    while( true ) {
                      if (*(int *)(lVar12 + 0x60) != 0) {
                        lVar20 = 0;
                        do {
                          if (*(uint *)(lVar11 + lVar20) == uVar9) goto LAB_146d8fafb;
                          lVar20 = lVar20 + 4;
                        } while (local_110 * 4 != lVar20);
                      }
                      lVar20 = *(longlong *)(lVar10 + 0x58);
                      if (*(longlong *)(lVar10 + 0x58) == 0) {
                        lVar20 = lVar10 + 0x38;
                      }
                      if ((longlong)*(int *)(lVar10 + 0x60) != 0) {
                        lVar14 = 0;
                        do {
                          if (*(uint *)(lVar20 + lVar14) == uVar9) goto LAB_146d8fafb;
                          lVar14 = lVar14 + 4;
                        } while ((longlong)*(int *)(lVar10 + 0x60) * 4 != lVar14);
                      }
                      lVar20 = *(longlong *)(lVar13 + 0x58);
                      if (*(longlong *)(lVar13 + 0x58) == 0) {
                        lVar20 = lVar13 + 0x38;
                      }
                      if ((longlong)*(int *)(lVar13 + 0x60) != 0) {
                        lVar14 = 0;
                        do {
                          if (*(uint *)(lVar20 + lVar14) == uVar9) goto LAB_146d8fafb;
                          lVar14 = lVar14 + 4;
                        } while ((longlong)*(int *)(lVar13 + 0x60) * 4 != lVar14);
                      }
                      piVar26 = local_168;
                      lVar20 = local_158;
                      plVar27 = local_150;
                      if (iVar2 == 0) break;
                      lVar14 = 0;
                      while (*(uint *)((longlong)piVar17 + lVar14) != uVar9) {
                        lVar14 = lVar14 + 4;
                        if (lVar25 * 4 - lVar14 == 0) goto LAB_146d8fce6;
                      }
LAB_146d8fafb:
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
LAB_146d8fce6:
                iVar8 = (int)local_130;
                local_130 = local_130 & 0xffffffff;
                if (iVar8 <= (int)uVar9) {
                  local_130 = (ulonglong)uVar9;
                }
                piVar26[0x18] = iVar2 + 1U;
                local_100 = piVar15;
                local_f8 = lVar22;
                if ((uint)piVar26[0x19] < iVar2 + 1U) {
                  FUN_1400cc390(local_120,iVar2);
                  piVar15 = *(int **)(local_168 + 0x16);
                  piVar26 = local_168;
                }
                puVar6 = local_138;
                if (piVar15 == (int *)0x0) {
                  piVar15 = local_120;
                }
                piVar15[lVar25] = uVar9;
                local_138[2] = uVar9;
                if (uVar9 == piVar26[0xc]) {
                  piVar26[0xc] = uVar9 + 1;
                }
                if ((int)plVar27[1] <= (int)local_130) {
                  FUN_140bfc200(plVar27,(int)local_130 + 1);
                  piVar26 = local_168;
                }
                lVar22 = *plVar27;
                lVar25 = (longlong)(int)puVar6[2] * 0x10;
                iVar2 = *(int *)(lVar22 + 8 + lVar25);
                *(uint *)(lVar22 + 8 + lVar25) = iVar2 + 1U;
                if (*(uint *)(lVar22 + 0xc + lVar25) < iVar2 + 1U) {
                  FUN_1446f48e2((longlong *)(lVar22 + lVar25),iVar2);
                  piVar26 = local_168;
                }
                *(int *)(*(longlong *)(lVar22 + lVar25) + (longlong)iVar2 * 4) = (int)local_f8;
                if ((uVar19 != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar20 + 8) + 0x90) +
                                       (*(int *)(lVar20 + 0x10) + local_140) * 4), fVar1 != 0.0 ||
                    (NAN(fVar1))))) {
                  lVar22 = local_160 + local_140 * 0x68;
                  iVar2 = *(int *)(lVar22 + 0x60);
                  *(uint *)(lVar22 + 0x60) = iVar2 + 1U;
                  if (*(uint *)(lVar22 + 100) < iVar2 + 1U) {
                    FUN_1400cc390(lVar22 + 0x38,iVar2);
                    piVar26 = local_168;
                  }
                  uVar7 = uStack_e0;
                  lVar25 = *(longlong *)(lVar22 + 0x58);
                  if (*(longlong *)(lVar22 + 0x58) == 0) {
                    lVar25 = lVar22 + 0x38;
                  }
                  *(uint *)(lVar25 + (longlong)iVar2 * 4) = local_138[2];
                  if ((int)uStack_b0 != local_84) {
                    puVar16 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar16 = local_80;
                    }
                    for (iVar2 = *(int *)(puVar16 + (ulonglong)(local_70 - 1U & uVar19) * 4);
                        iVar2 != -1; iVar2 = *(int *)(local_d8[4] + (longlong)iVar2 * 0xc + 4)) {
                      if (*(uint *)(local_d8[4] + (longlong)iVar2 * 0xc) == uVar19)
                      goto LAB_146d8fe7a;
                    }
                  }
                  lVar22 = (longlong)(int)uStack_e0;
                  uVar9 = (int)uStack_e0 + 1;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar9);
                  if (uStack_e0._4_4_ < uVar9) {
                    FUN_1446f48e2(&local_e8,uVar7 & 0xffffffff);
                    piVar26 = local_168;
                  }
                  local_e8[lVar22] = uVar19;
                }
LAB_146d8fe7a:
                if ((uVar24 != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar20 + 8) + 0x90) +
                                       (*(int *)(lVar20 + 0x10) + local_128) * 4), fVar1 != 0.0 ||
                    (NAN(fVar1))))) {
                  lVar22 = local_160 + local_128 * 0x68;
                  iVar2 = *(int *)(lVar22 + 0x60);
                  *(uint *)(lVar22 + 0x60) = iVar2 + 1U;
                  if (*(uint *)(lVar22 + 100) < iVar2 + 1U) {
                    FUN_1400cc390(lVar22 + 0x38,iVar2);
                    piVar26 = local_168;
                  }
                  uVar7 = uStack_e0;
                  lVar25 = *(longlong *)(lVar22 + 0x58);
                  if (*(longlong *)(lVar22 + 0x58) == 0) {
                    lVar25 = lVar22 + 0x38;
                  }
                  *(uint *)(lVar25 + (longlong)iVar2 * 4) = local_138[2];
                  if ((int)uStack_b0 != local_84) {
                    puVar16 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar16 = local_80;
                    }
                    for (iVar2 = *(int *)(puVar16 + (ulonglong)(local_70 - 1U & uVar24) * 4);
                        iVar2 != -1; iVar2 = *(int *)(local_d8[4] + (longlong)iVar2 * 0xc + 4)) {
                      if (*(uint *)(local_d8[4] + (longlong)iVar2 * 0xc) == uVar24)
                      goto LAB_146d8ff49;
                    }
                  }
                  lVar22 = (longlong)(int)uStack_e0;
                  uVar9 = (int)uStack_e0 + 1;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar9);
                  if (uStack_e0._4_4_ < uVar9) {
                    FUN_1446f48e2(&local_e8,uVar7 & 0xffffffff);
                    piVar26 = local_168;
                  }
                  local_e8[lVar22] = uVar24;
                }
LAB_146d8ff49:
                piVar15 = local_148;
                if ((uVar21 != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar20 + 8) + 0x90) +
                                       (*(int *)(lVar20 + 0x10) + local_108) * 4), fVar1 != 0.0 ||
                    (NAN(fVar1))))) {
                  lVar22 = local_160 + local_108 * 0x68;
                  iVar2 = *(int *)(lVar22 + 0x60);
                  *(uint *)(lVar22 + 0x60) = iVar2 + 1U;
                  if (*(uint *)(lVar22 + 100) < iVar2 + 1U) {
                    FUN_1400cc390(lVar22 + 0x38,iVar2);
                    piVar26 = local_168;
                  }
                  uVar7 = uStack_e0;
                  lVar25 = *(longlong *)(lVar22 + 0x58);
                  if (*(longlong *)(lVar22 + 0x58) == 0) {
                    lVar25 = lVar22 + 0x38;
                  }
                  *(uint *)(lVar25 + (longlong)iVar2 * 4) = local_138[2];
                  if ((int)uStack_b0 != local_84) {
                    puVar16 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar16 = local_80;
                    }
                    for (iVar2 = *(int *)(puVar16 + (ulonglong)(local_70 - 1U & uVar21) * 4);
                        iVar2 != -1; iVar2 = *(int *)(local_d8[4] + (longlong)iVar2 * 0xc + 4)) {
                      piVar15 = local_148;
                      if (*(uint *)(local_d8[4] + (longlong)iVar2 * 0xc) == uVar21)
                      goto LAB_146d8f790;
                    }
                  }
                  lVar22 = (longlong)(int)uStack_e0;
                  uVar9 = (int)uStack_e0 + 1;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar9);
                  if (uStack_e0._4_4_ < uVar9) {
                    FUN_1446f48e2(&local_e8,uVar7 & 0xffffffff);
                    piVar26 = local_168;
                  }
                  local_e8[lVar22] = uVar21;
                  piVar15 = local_148;
                }
              }
LAB_146d8f790:
              piVar23 = piVar23 + 1;
            } while (piVar23 != piVar15);
          }
        }
      }
LAB_146d9017d:
      param_4 = local_114 + 1;
    } while (param_4 != param_5);
    if (local_e8 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_d8 + 4);
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140bfc290(local_d8[2],local_d8[3] & 0xffffffff);
  if (local_d8[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar27;
}



// FUNCTION 146d9023e FUN_146d9023e body=203 status=ok
// SIG undefined FUN_146d9023e(void)

undefined8 FUN_146d9023e(longlong param_1,double param_2)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong in_RDX;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  
  bVar3 = true;
  do {
    bVar2 = bVar3;
    dVar11 = param_2;
    uVar8 = (ulonglong)(((byte)~bVar2 & 1) << 3);
    dVar1 = *(double *)(in_RDX + uVar8);
    param_2 = *(double *)(param_1 + 0xc0 + uVar8);
    if ((dVar1 <= param_2) && (param_2 = *(double *)(param_1 + 0xb0 + uVar8), param_2 <= dVar1)) {
      param_2 = dVar1;
    }
    bVar3 = false;
  } while (bVar2);
  iVar4 = (int)((dVar11 - *(double *)(param_1 + 0xb0)) / *(double *)(param_1 + 0xd8));
  iVar6 = (int)((param_2 - *(double *)(param_1 + 0xb8)) / *(double *)(param_1 + 0xe0));
  iVar10 = 0;
  if (0 < iVar4) {
    iVar10 = iVar4;
  }
  if (*(int *)(param_1 + 0xd0) <= iVar4) {
    iVar10 = *(int *)(param_1 + 0xd0) + -1;
  }
  iVar4 = *(int *)(param_1 + 0xd4) + -1;
  iVar9 = 0;
  if (0 < iVar6) {
    iVar9 = iVar6;
  }
  if (*(int *)(param_1 + 0xd4) <= iVar6) {
    iVar9 = iVar4;
  }
  uVar7 = (*(ushort *)(param_1 + 0x92) - 1) * iVar9 + iVar10;
  uVar5 = CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),0xff);
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x48))) {
    uVar5 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x40) >> 8),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar7));
  }
  return uVar5;
}



// FUNCTION 146d9030a FUN_146d9030a body=39 status=ok
// SIG undefined FUN_146d9030a(void)

undefined1 FUN_146d9030a(longlong param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = (*(ushort *)(param_1 + 0x92) - 1) * param_3 + param_2;
  uVar1 = 0xff;
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0x48))) {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar2);
  }
  return uVar1;
}



// FUNCTION 146d90332 FUN_146d90332 body=766 status=ok
// SIG undefined FUN_146d90332(void)

ulonglong FUN_146d90332(longlong param_1,double *param_2,double param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong unaff_RBP;
  longlong lVar13;
  undefined1 auStack_188 [32];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  longlong local_148;
  undefined8 uStack_140;
  double *local_130;
  double *local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_128 = &local_120;
  local_168 = *param_2 - param_3;
  local_160 = param_2[1] - param_3;
  local_158 = *param_2 + param_3;
  local_150 = param_2[1] + param_3;
  local_148 = 0;
  uStack_140 = 0;
  local_130 = param_2;
  local_120 = param_3;
  FUN_1401ad93c(local_158,&local_168,&local_148);
  lVar9 = local_148;
  lVar13 = (longlong)(int)uStack_140;
  if (lVar13 == 0) {
    unaff_RBP = 0;
  }
  else {
    lVar12 = 0;
    do {
      uVar4 = *(ushort *)(param_1 + 0x92);
      uVar11 = (longlong)*(int *)(lVar9 + lVar12) +
               (longlong)*(int *)(lVar9 + 4 + lVar12) * (ulonglong)uVar4;
      dVar2 = *(double *)(param_1 + 0x80);
      lVar5 = *(longlong *)(param_1 + 0x20);
      dVar3 = *(double *)(param_1 + 0xa0);
      lVar1 = (longlong)(int)uVar11 + (ulonglong)uVar4;
      uVar6 = (ulonglong)(uint)((int)uVar11 >> 0x1f) << 0x20 | uVar11 & 0xffffffff;
      dVar8 = (double)(int)((longlong)uVar6 % (longlong)(int)(uint)uVar4);
      dVar7 = (double)(int)((longlong)uVar6 / (longlong)(int)(uint)uVar4);
      local_118 = *(double *)(param_1 + 0x50) * dVar8;
      local_110 = *(double *)(param_1 + 0x58) * dVar7;
      local_c0 = *(double *)(param_1 + 0x60);
      local_108 = ((double)*(ushort *)(lVar5 + uVar11 * 2) * dVar3 + dVar2) * local_c0;
      local_100 = (dVar8 + 1.0) * *(double *)(param_1 + 0x50);
      local_f0 = ((double)*(ushort *)(lVar5 + 2 + uVar11 * 2) * dVar3 + dVar2) * local_c0;
      local_e0 = (dVar7 + 1.0) * *(double *)(param_1 + 0x58);
      local_d8 = ((double)*(ushort *)(lVar5 + lVar1 * 2) * dVar3 + dVar2) * local_c0;
      local_c0 = ((double)*(ushort *)(lVar5 + 2 + lVar1 * 2) * dVar3 + dVar2) * local_c0;
      local_f8 = local_110;
      local_e8 = local_118;
      local_d0 = local_100;
      local_c8 = local_e0;
      cVar10 = FUN_1429af3c8(&local_130,&local_118,&local_100,&local_d0);
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
      if ((cVar10 != '\0') ||
         (cVar10 = FUN_1429af3c8(&local_130,&local_118,&local_d0,&local_e8), cVar10 != '\0'))
      goto LAB_146d905bc;
      lVar12 = lVar12 + 8;
    } while (lVar13 * 8 != lVar12);
    unaff_RBP = 0;
  }
LAB_146d905bc:
  if (local_148 != 0) {
    FUN_1400020a8(local_148);
  }
  if ((local_b0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 146d90632 thunk_FUN_146d90638 body=5 status=ok
// SIG undefined thunk_FUN_146d90638(void)

bool thunk_FUN_146d90638(longlong param_1,longlong param_2,undefined8 param_3,double param_4,
                        undefined8 *param_5,undefined8 *param_6,double *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_208 [32];
  undefined8 *puStack_1e8;
  undefined4 *puStack_1e0;
  double *pdStack_1d8;
  double *pdStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double dStack_178;
  double dStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  ulonglong uStack_b0;
  
  uStack_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uStack_158 = *(double *)(param_2 + 0x20) - param_4;
  uStack_150 = *(double *)(param_2 + 0x28) - param_4;
  dStack_148 = *(double *)(param_2 + 0x30) - param_4;
  dStack_140 = *(double *)(param_2 + 0x38) + param_4;
  dStack_138 = *(double *)(param_2 + 0x40) + param_4;
  dStack_130 = param_4 + *(double *)(param_2 + 0x48);
  lStack_128 = param_2;
  uStack_120 = param_3;
  FUN_1400c6592(&uStack_158,&dStack_118);
  dStack_148 = dStack_108;
  uStack_158 = dStack_118;
  dVar2 = uStack_158;
  uStack_150 = dStack_110;
  dVar1 = uStack_150;
  dStack_140 = dStack_100;
  dStack_138 = dStack_f8;
  dStack_130 = dStack_f0;
  uStack_158._0_4_ = SUB84(dStack_118,0);
  uStack_158._4_4_ = (undefined4)((ulonglong)dStack_118 >> 0x20);
  uStack_150._0_4_ = SUB84(dStack_110,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dStack_110 >> 0x20);
  lStack_168 = 0;
  uStack_160 = 0;
  uStack_188 = (undefined4)uStack_158;
  uStack_184 = uStack_158._4_4_;
  uStack_180 = (undefined4)uStack_150;
  uStack_17c = uStack_150._4_4_;
  dStack_178 = dStack_100;
  dStack_170 = dStack_f8;
  uStack_158 = dVar2;
  uStack_150 = dVar1;
  FUN_1401ad93c(param_1);
  lVar6 = lStack_168;
  pdVar16 = &dStack_d0;
  pdVar11 = &dStack_e8;
  pdVar13 = &dStack_100;
  pdStack_1c8 = pdVar16;
  if (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x60) < 0.0)
  {
    pdVar11 = pdVar16;
    pdVar13 = pdVar16;
    pdVar16 = &dStack_100;
    pdStack_1c8 = &dStack_e8;
  }
  dStack_190 = 3.4028234663852886e+38;
  lVar14 = (longlong)(int)uStack_160;
  if (lVar14 != 0) {
    lVar12 = 0;
    do {
      iVar8 = *(int *)(lVar6 + lVar12);
      iVar4 = *(int *)(lVar6 + 4 + lVar12);
      uVar3 = *(ushort *)(param_1 + 0x92);
      uVar15 = (uVar3 - 1) * iVar4 + iVar8;
      if ((((int)uVar15 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar15)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar15) != -1)) {
        uVar10 = (uint)uVar3;
        iVar8 = iVar4 * uVar10 + iVar8;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar2 = *(double *)(param_1 + 0x80);
        dVar1 = *(double *)(param_1 + 0xa0);
        dStack_118 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar10);
        dStack_110 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar10);
        dStack_c0 = *(double *)(param_1 + 0x60);
        dStack_108 = ((double)*(ushort *)(lVar5 + lVar9 * 2) * dVar1 + dVar2) * dStack_c0;
        dStack_100 = ((double)(iVar8 % (int)uVar10) + 1.0) * *(double *)(param_1 + 0x50);
        dStack_f0 = ((double)*(ushort *)(lVar5 + 2 + lVar9 * 2) * dVar1 + dVar2) * dStack_c0;
        dStack_e0 = ((double)(iVar8 / (int)uVar10) + 1.0) * *(double *)(param_1 + 0x58);
        dStack_d8 = ((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2) *
                    dStack_c0;
        dStack_c0 = ((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2
                    ) * dStack_c0;
        pdStack_1d8 = &dStack_190;
        puStack_1e0 = &uStack_1c0;
        puStack_1e8 = &uStack_1a8;
        dStack_f8 = dStack_110;
        dStack_e8 = dStack_118;
        dStack_d0 = dStack_100;
        dStack_c8 = dStack_e0;
        cVar7 = FUN_146d9f4aa(&lStack_128,&dStack_118,pdVar13,pdVar16);
        if ((cVar7 != '\0') && (dStack_190 < *param_7)) {
          *param_7 = dStack_190;
          param_5[2] = uStack_198;
          *param_5 = uStack_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = uStack_1b0;
          *(undefined4 *)param_6 = uStack_1c0;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_1bc;
          *(undefined4 *)(param_6 + 1) = uStack_1b8;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_1b4;
          *param_8 = uVar15 * 2;
        }
        pdStack_1d8 = &dStack_190;
        puStack_1e0 = &uStack_1c0;
        puStack_1e8 = &uStack_1a8;
        cVar7 = FUN_146d9f4aa(&lStack_128,&dStack_118,pdStack_1c8,pdVar11);
        if ((cVar7 != '\0') && (dStack_190 < *param_7)) {
          *param_7 = dStack_190;
          param_5[2] = uStack_198;
          *param_5 = uStack_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = uStack_1b0;
          *param_6 = CONCAT44(uStack_1bc,uStack_1c0);
          param_6[1] = CONCAT44(uStack_1b4,uStack_1b8);
          *param_8 = uVar15 * 2;
        }
      }
      lVar12 = lVar12 + 8;
    } while (lVar14 * 8 != lVar12);
  }
  dVar2 = *param_7;
  if (lStack_168 != 0) {
    FUN_1400020a8(lStack_168);
  }
  if ((uStack_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar2 < 0.0;
}



// FUNCTION 146d90638 FUN_146d90638 body=1299 status=ok
// SIG undefined FUN_146d90638(void)

bool FUN_146d90638(longlong param_1,longlong param_2,undefined8 param_3,double param_4,
                  undefined8 *param_5,undefined8 *param_6,double *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 *local_1e0;
  double *local_1d8;
  double *local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  double dStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  longlong local_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_158 = *(double *)(param_2 + 0x20) - param_4;
  uStack_150 = *(double *)(param_2 + 0x28) - param_4;
  local_148 = *(double *)(param_2 + 0x30) - param_4;
  local_140 = *(double *)(param_2 + 0x38) + param_4;
  dStack_138 = *(double *)(param_2 + 0x40) + param_4;
  local_130 = param_4 + *(double *)(param_2 + 0x48);
  local_128 = param_2;
  local_120 = param_3;
  FUN_1400c6592(&local_158,&local_118);
  local_148 = local_108;
  local_158 = local_118;
  dVar2 = local_158;
  uStack_150 = dStack_110;
  dVar1 = uStack_150;
  local_140 = local_100;
  dStack_138 = dStack_f8;
  local_130 = local_f0;
  local_158._0_4_ = SUB84(local_118,0);
  local_158._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
  uStack_150._0_4_ = SUB84(dStack_110,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dStack_110 >> 0x20);
  local_168 = 0;
  uStack_160 = 0;
  local_188 = (undefined4)local_158;
  uStack_184 = local_158._4_4_;
  uStack_180 = (undefined4)uStack_150;
  uStack_17c = uStack_150._4_4_;
  local_178 = local_100;
  dStack_170 = dStack_f8;
  local_158 = dVar2;
  uStack_150 = dVar1;
  FUN_1401ad93c(param_1);
  lVar6 = local_168;
  pdVar16 = &local_d0;
  pdVar11 = &local_e8;
  pdVar13 = &local_100;
  local_1c8 = pdVar16;
  if (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x60) < 0.0)
  {
    pdVar11 = pdVar16;
    pdVar13 = pdVar16;
    pdVar16 = &local_100;
    local_1c8 = &local_e8;
  }
  local_190 = 3.4028234663852886e+38;
  lVar14 = (longlong)(int)uStack_160;
  if (lVar14 != 0) {
    lVar12 = 0;
    do {
      iVar8 = *(int *)(lVar6 + lVar12);
      iVar4 = *(int *)(lVar6 + 4 + lVar12);
      uVar3 = *(ushort *)(param_1 + 0x92);
      uVar15 = (uVar3 - 1) * iVar4 + iVar8;
      if ((((int)uVar15 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar15)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar15) != -1)) {
        uVar10 = (uint)uVar3;
        iVar8 = iVar4 * uVar10 + iVar8;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar2 = *(double *)(param_1 + 0x80);
        dVar1 = *(double *)(param_1 + 0xa0);
        local_118 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar10);
        dStack_110 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar10);
        local_c0 = *(double *)(param_1 + 0x60);
        local_108 = ((double)*(ushort *)(lVar5 + lVar9 * 2) * dVar1 + dVar2) * local_c0;
        local_100 = ((double)(iVar8 % (int)uVar10) + 1.0) * *(double *)(param_1 + 0x50);
        local_f0 = ((double)*(ushort *)(lVar5 + 2 + lVar9 * 2) * dVar1 + dVar2) * local_c0;
        local_e0 = ((double)(iVar8 / (int)uVar10) + 1.0) * *(double *)(param_1 + 0x58);
        local_d8 = ((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2) *
                   local_c0;
        local_c0 = ((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2)
                   * local_c0;
        local_1d8 = &local_190;
        local_1e0 = &local_1c0;
        local_1e8 = &local_1a8;
        dStack_f8 = dStack_110;
        local_e8 = local_118;
        local_d0 = local_100;
        local_c8 = local_e0;
        cVar7 = FUN_146d9f4aa(&local_128,&local_118,pdVar13,pdVar16);
        if ((cVar7 != '\0') && (local_190 < *param_7)) {
          *param_7 = local_190;
          param_5[2] = local_198;
          *param_5 = local_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = local_1b0;
          *(undefined4 *)param_6 = local_1c0;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_1bc;
          *(undefined4 *)(param_6 + 1) = uStack_1b8;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_1b4;
          *param_8 = uVar15 * 2;
        }
        local_1d8 = &local_190;
        local_1e0 = &local_1c0;
        local_1e8 = &local_1a8;
        cVar7 = FUN_146d9f4aa(&local_128,&local_118,local_1c8,pdVar11);
        if ((cVar7 != '\0') && (local_190 < *param_7)) {
          *param_7 = local_190;
          param_5[2] = local_198;
          *param_5 = local_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = local_1b0;
          *param_6 = CONCAT44(uStack_1bc,local_1c0);
          param_6[1] = CONCAT44(uStack_1b4,uStack_1b8);
          *param_8 = uVar15 * 2;
        }
      }
      lVar12 = lVar12 + 8;
    } while (lVar14 * 8 != lVar12);
  }
  dVar2 = *param_7;
  if (local_168 != 0) {
    FUN_1400020a8(local_168);
  }
  if ((local_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar2 < 0.0;
}



// FUNCTION 146d90b4c thunk_FUN_146d90b52 body=5 status=ok
// SIG undefined thunk_FUN_146d90b52(void)

bool thunk_FUN_146d90b52(longlong param_1,longlong param_2,undefined8 param_3,double param_4,
                        undefined8 *param_5,undefined8 *param_6,double *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_208 [32];
  undefined8 *puStack_1e8;
  undefined4 *puStack_1e0;
  double *pdStack_1d8;
  double *pdStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double dStack_178;
  double dStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  ulonglong uStack_b0;
  
  uStack_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  dVar1 = *(double *)(param_2 + 0x10);
  uStack_158 = (*(double *)(param_2 + 0x20) - dVar1) - param_4;
  uStack_150 = (*(double *)(param_2 + 0x28) - dVar1) - param_4;
  dStack_148 = (*(double *)(param_2 + 0x30) - dVar1) - param_4;
  dStack_140 = dVar1 + *(double *)(param_2 + 0x20) + param_4;
  dStack_138 = dVar1 + *(double *)(param_2 + 0x28) + param_4;
  dStack_130 = dVar1 + *(double *)(param_2 + 0x30) + param_4;
  lStack_128 = param_2;
  uStack_120 = param_3;
  FUN_1400c6592(&uStack_158,&dStack_118);
  dStack_148 = dStack_108;
  uStack_158 = dStack_118;
  dVar1 = uStack_158;
  uStack_150 = dStack_110;
  dVar2 = uStack_150;
  dStack_140 = dStack_100;
  dStack_138 = dStack_f8;
  dStack_130 = dStack_f0;
  uStack_158._0_4_ = SUB84(dStack_118,0);
  uStack_158._4_4_ = (undefined4)((ulonglong)dStack_118 >> 0x20);
  uStack_150._0_4_ = SUB84(dStack_110,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dStack_110 >> 0x20);
  lStack_168 = 0;
  uStack_160 = 0;
  uStack_188 = (undefined4)uStack_158;
  uStack_184 = uStack_158._4_4_;
  uStack_180 = (undefined4)uStack_150;
  uStack_17c = uStack_150._4_4_;
  dStack_178 = dStack_100;
  dStack_170 = dStack_f8;
  uStack_158 = dVar1;
  uStack_150 = dVar2;
  FUN_1401ad93c(param_1);
  lVar6 = lStack_168;
  pdVar16 = &dStack_d0;
  pdVar11 = &dStack_e8;
  pdVar13 = &dStack_100;
  pdStack_1c8 = pdVar16;
  if (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x60) < 0.0)
  {
    pdVar11 = pdVar16;
    pdVar13 = pdVar16;
    pdVar16 = &dStack_100;
    pdStack_1c8 = &dStack_e8;
  }
  dStack_190 = 3.4028234663852886e+38;
  lVar14 = (longlong)(int)uStack_160;
  if (lVar14 != 0) {
    lVar12 = 0;
    do {
      iVar8 = *(int *)(lVar6 + lVar12);
      iVar4 = *(int *)(lVar6 + 4 + lVar12);
      uVar3 = *(ushort *)(param_1 + 0x92);
      uVar15 = (uVar3 - 1) * iVar4 + iVar8;
      if ((((int)uVar15 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar15)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar15) != -1)) {
        uVar10 = (uint)uVar3;
        iVar8 = iVar4 * uVar10 + iVar8;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar1 = *(double *)(param_1 + 0x80);
        dVar2 = *(double *)(param_1 + 0xa0);
        dStack_118 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar10);
        dStack_110 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar10);
        dStack_c0 = *(double *)(param_1 + 0x60);
        dStack_108 = ((double)*(ushort *)(lVar5 + lVar9 * 2) * dVar2 + dVar1) * dStack_c0;
        dStack_100 = ((double)(iVar8 % (int)uVar10) + 1.0) * *(double *)(param_1 + 0x50);
        dStack_f0 = ((double)*(ushort *)(lVar5 + 2 + lVar9 * 2) * dVar2 + dVar1) * dStack_c0;
        dStack_e0 = ((double)(iVar8 / (int)uVar10) + 1.0) * *(double *)(param_1 + 0x58);
        dStack_d8 = ((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar9) * 2) * dVar2 + dVar1) *
                    dStack_c0;
        dStack_c0 = ((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar2 + dVar1
                    ) * dStack_c0;
        pdStack_1d8 = &dStack_190;
        puStack_1e0 = &uStack_1c0;
        puStack_1e8 = &uStack_1a8;
        dStack_f8 = dStack_110;
        dStack_e8 = dStack_118;
        dStack_d0 = dStack_100;
        dStack_c8 = dStack_e0;
        cVar7 = FUN_146d9f7ec(&lStack_128,&dStack_118,pdVar13,pdVar16);
        if ((cVar7 != '\0') && (dStack_190 < *param_7)) {
          *param_7 = dStack_190;
          param_5[2] = uStack_198;
          *param_5 = uStack_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = uStack_1b0;
          *(undefined4 *)param_6 = uStack_1c0;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_1bc;
          *(undefined4 *)(param_6 + 1) = uStack_1b8;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_1b4;
          *param_8 = uVar15 * 2;
        }
        pdStack_1d8 = &dStack_190;
        puStack_1e0 = &uStack_1c0;
        puStack_1e8 = &uStack_1a8;
        cVar7 = FUN_146d9f7ec(&lStack_128,&dStack_118,pdStack_1c8,pdVar11);
        if ((cVar7 != '\0') && (dStack_190 < *param_7)) {
          *param_7 = dStack_190;
          param_5[2] = uStack_198;
          *param_5 = uStack_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = uStack_1b0;
          *param_6 = CONCAT44(uStack_1bc,uStack_1c0);
          param_6[1] = CONCAT44(uStack_1b4,uStack_1b8);
          *param_8 = uVar15 * 2;
        }
      }
      lVar12 = lVar12 + 8;
    } while (lVar14 * 8 != lVar12);
  }
  dVar1 = *param_7;
  if (lStack_168 != 0) {
    FUN_1400020a8(lStack_168);
  }
  if ((uStack_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < 0.0;
}



// FUNCTION 146d90b52 FUN_146d90b52 body=1297 status=ok
// SIG undefined FUN_146d90b52(void)

bool FUN_146d90b52(longlong param_1,longlong param_2,undefined8 param_3,double param_4,
                  undefined8 *param_5,undefined8 *param_6,double *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 *local_1e0;
  double *local_1d8;
  double *local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  double dStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  longlong local_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  dVar1 = *(double *)(param_2 + 0x10);
  local_158 = (*(double *)(param_2 + 0x20) - dVar1) - param_4;
  uStack_150 = (*(double *)(param_2 + 0x28) - dVar1) - param_4;
  local_148 = (*(double *)(param_2 + 0x30) - dVar1) - param_4;
  local_140 = dVar1 + *(double *)(param_2 + 0x20) + param_4;
  dStack_138 = dVar1 + *(double *)(param_2 + 0x28) + param_4;
  local_130 = dVar1 + *(double *)(param_2 + 0x30) + param_4;
  local_128 = param_2;
  local_120 = param_3;
  FUN_1400c6592(&local_158,&local_118);
  local_148 = local_108;
  local_158 = local_118;
  dVar1 = local_158;
  uStack_150 = dStack_110;
  dVar2 = uStack_150;
  local_140 = local_100;
  dStack_138 = dStack_f8;
  local_130 = local_f0;
  local_158._0_4_ = SUB84(local_118,0);
  local_158._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
  uStack_150._0_4_ = SUB84(dStack_110,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dStack_110 >> 0x20);
  local_168 = 0;
  uStack_160 = 0;
  local_188 = (undefined4)local_158;
  uStack_184 = local_158._4_4_;
  uStack_180 = (undefined4)uStack_150;
  uStack_17c = uStack_150._4_4_;
  local_178 = local_100;
  dStack_170 = dStack_f8;
  local_158 = dVar1;
  uStack_150 = dVar2;
  FUN_1401ad93c(param_1);
  lVar6 = local_168;
  pdVar16 = &local_d0;
  pdVar11 = &local_e8;
  pdVar13 = &local_100;
  local_1c8 = pdVar16;
  if (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x60) < 0.0)
  {
    pdVar11 = pdVar16;
    pdVar13 = pdVar16;
    pdVar16 = &local_100;
    local_1c8 = &local_e8;
  }
  local_190 = 3.4028234663852886e+38;
  lVar14 = (longlong)(int)uStack_160;
  if (lVar14 != 0) {
    lVar12 = 0;
    do {
      iVar8 = *(int *)(lVar6 + lVar12);
      iVar4 = *(int *)(lVar6 + 4 + lVar12);
      uVar3 = *(ushort *)(param_1 + 0x92);
      uVar15 = (uVar3 - 1) * iVar4 + iVar8;
      if ((((int)uVar15 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar15)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar15) != -1)) {
        uVar10 = (uint)uVar3;
        iVar8 = iVar4 * uVar10 + iVar8;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar1 = *(double *)(param_1 + 0x80);
        dVar2 = *(double *)(param_1 + 0xa0);
        local_118 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar10);
        dStack_110 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar10);
        local_c0 = *(double *)(param_1 + 0x60);
        local_108 = ((double)*(ushort *)(lVar5 + lVar9 * 2) * dVar2 + dVar1) * local_c0;
        local_100 = ((double)(iVar8 % (int)uVar10) + 1.0) * *(double *)(param_1 + 0x50);
        local_f0 = ((double)*(ushort *)(lVar5 + 2 + lVar9 * 2) * dVar2 + dVar1) * local_c0;
        local_e0 = ((double)(iVar8 / (int)uVar10) + 1.0) * *(double *)(param_1 + 0x58);
        local_d8 = ((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar9) * 2) * dVar2 + dVar1) *
                   local_c0;
        local_c0 = ((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar2 + dVar1)
                   * local_c0;
        local_1d8 = &local_190;
        local_1e0 = &local_1c0;
        local_1e8 = &local_1a8;
        dStack_f8 = dStack_110;
        local_e8 = local_118;
        local_d0 = local_100;
        local_c8 = local_e0;
        cVar7 = FUN_146d9f7ec(&local_128,&local_118,pdVar13,pdVar16);
        if ((cVar7 != '\0') && (local_190 < *param_7)) {
          *param_7 = local_190;
          param_5[2] = local_198;
          *param_5 = local_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = local_1b0;
          *(undefined4 *)param_6 = local_1c0;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_1bc;
          *(undefined4 *)(param_6 + 1) = uStack_1b8;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_1b4;
          *param_8 = uVar15 * 2;
        }
        local_1d8 = &local_190;
        local_1e0 = &local_1c0;
        local_1e8 = &local_1a8;
        cVar7 = FUN_146d9f7ec(&local_128,&local_118,local_1c8,pdVar11);
        if ((cVar7 != '\0') && (local_190 < *param_7)) {
          *param_7 = local_190;
          param_5[2] = local_198;
          *param_5 = local_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = local_1b0;
          *param_6 = CONCAT44(uStack_1bc,local_1c0);
          param_6[1] = CONCAT44(uStack_1b4,uStack_1b8);
          *param_8 = uVar15 * 2;
        }
      }
      lVar12 = lVar12 + 8;
    } while (lVar14 * 8 != lVar12);
  }
  dVar1 = *param_7;
  if (local_168 != 0) {
    FUN_1400020a8(local_168);
  }
  if ((local_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1 < 0.0;
}



// FUNCTION 146d91064 thunk_FUN_146d9106a body=5 status=ok
// SIG undefined thunk_FUN_146d9106a(void)

bool thunk_FUN_146d9106a(longlong param_1,undefined8 param_2,undefined8 param_3,double param_4,
                        undefined8 *param_5,undefined8 *param_6,double *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_208 [32];
  undefined8 *puStack_1e8;
  undefined4 *puStack_1e0;
  double *pdStack_1d8;
  double *pdStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double dStack_178;
  double dStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  ulonglong uStack_b0;
  
  uStack_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uStack_128 = param_2;
  uStack_120 = param_3;
  FUN_144b0186e(param_2,&uStack_158);
  uStack_158 = uStack_158 - param_4;
  uStack_150 = uStack_150 - param_4;
  dStack_148 = dStack_148 - param_4;
  dStack_140 = dStack_140 + param_4;
  dStack_138 = dStack_138 + param_4;
  dStack_130 = param_4 + dStack_130;
  FUN_1400c6592(&uStack_158,&dStack_118,param_3);
  dStack_148 = dStack_108;
  uStack_158 = dStack_118;
  dVar2 = uStack_158;
  uStack_150 = dStack_110;
  dVar1 = uStack_150;
  dStack_140 = dStack_100;
  dStack_138 = dStack_f8;
  dStack_130 = dStack_f0;
  uStack_158._0_4_ = SUB84(dStack_118,0);
  uStack_158._4_4_ = (undefined4)((ulonglong)dStack_118 >> 0x20);
  uStack_150._0_4_ = SUB84(dStack_110,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dStack_110 >> 0x20);
  lStack_168 = 0;
  uStack_160 = 0;
  uStack_188 = (undefined4)uStack_158;
  uStack_184 = uStack_158._4_4_;
  uStack_180 = (undefined4)uStack_150;
  uStack_17c = uStack_150._4_4_;
  dStack_178 = dStack_100;
  dStack_170 = dStack_f8;
  uStack_158 = dVar2;
  uStack_150 = dVar1;
  FUN_1401ad93c(param_1);
  lVar6 = lStack_168;
  pdVar16 = &dStack_d0;
  pdVar11 = &dStack_e8;
  pdVar13 = &dStack_100;
  pdStack_1c8 = pdVar16;
  if (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x60) < 0.0)
  {
    pdVar11 = pdVar16;
    pdVar13 = pdVar16;
    pdVar16 = &dStack_100;
    pdStack_1c8 = &dStack_e8;
  }
  dStack_190 = 3.4028234663852886e+38;
  lVar14 = (longlong)(int)uStack_160;
  if (lVar14 != 0) {
    lVar12 = 0;
    do {
      iVar8 = *(int *)(lVar6 + lVar12);
      iVar4 = *(int *)(lVar6 + 4 + lVar12);
      uVar3 = *(ushort *)(param_1 + 0x92);
      uVar15 = (uVar3 - 1) * iVar4 + iVar8;
      if ((((int)uVar15 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar15)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar15) != -1)) {
        uVar10 = (uint)uVar3;
        iVar8 = iVar4 * uVar10 + iVar8;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar2 = *(double *)(param_1 + 0x80);
        dVar1 = *(double *)(param_1 + 0xa0);
        dStack_118 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar10);
        dStack_110 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar10);
        dStack_c0 = *(double *)(param_1 + 0x60);
        dStack_108 = ((double)*(ushort *)(lVar5 + lVar9 * 2) * dVar1 + dVar2) * dStack_c0;
        dStack_100 = ((double)(iVar8 % (int)uVar10) + 1.0) * *(double *)(param_1 + 0x50);
        dStack_f0 = ((double)*(ushort *)(lVar5 + 2 + lVar9 * 2) * dVar1 + dVar2) * dStack_c0;
        dStack_e0 = ((double)(iVar8 / (int)uVar10) + 1.0) * *(double *)(param_1 + 0x58);
        dStack_d8 = ((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2) *
                    dStack_c0;
        dStack_c0 = ((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2
                    ) * dStack_c0;
        pdStack_1d8 = &dStack_190;
        puStack_1e0 = &uStack_1c0;
        puStack_1e8 = &uStack_1a8;
        dStack_f8 = dStack_110;
        dStack_e8 = dStack_118;
        dStack_d0 = dStack_100;
        dStack_c8 = dStack_e0;
        cVar7 = FUN_146d9fb2e(&uStack_128,&dStack_118,pdVar13,pdVar16);
        if ((cVar7 != '\0') && (dStack_190 < *param_7)) {
          *param_7 = dStack_190;
          param_5[2] = uStack_198;
          *param_5 = uStack_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = uStack_1b0;
          *(undefined4 *)param_6 = uStack_1c0;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_1bc;
          *(undefined4 *)(param_6 + 1) = uStack_1b8;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_1b4;
          *param_8 = uVar15 * 2;
        }
        pdStack_1d8 = &dStack_190;
        puStack_1e0 = &uStack_1c0;
        puStack_1e8 = &uStack_1a8;
        cVar7 = FUN_146d9fb2e(&uStack_128,&dStack_118,pdStack_1c8,pdVar11);
        if ((cVar7 != '\0') && (dStack_190 < *param_7)) {
          *param_7 = dStack_190;
          param_5[2] = uStack_198;
          *param_5 = uStack_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = uStack_1b0;
          *param_6 = CONCAT44(uStack_1bc,uStack_1c0);
          param_6[1] = CONCAT44(uStack_1b4,uStack_1b8);
          *param_8 = uVar15 * 2;
        }
      }
      lVar12 = lVar12 + 8;
    } while (lVar14 * 8 != lVar12);
  }
  dVar2 = *param_7;
  if (lStack_168 != 0) {
    FUN_1400020a8(lStack_168);
  }
  if ((uStack_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar2 < 0.0;
}



// FUNCTION 146d9106a FUN_146d9106a body=1290 status=ok
// SIG undefined FUN_146d9106a(void)

bool FUN_146d9106a(longlong param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 *param_5,undefined8 *param_6,double *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 *local_1e0;
  double *local_1d8;
  double *local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  double dStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined8 local_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_128 = param_2;
  local_120 = param_3;
  FUN_144b0186e(param_2,&local_158);
  local_158 = local_158 - param_4;
  uStack_150 = uStack_150 - param_4;
  local_148 = local_148 - param_4;
  local_140 = local_140 + param_4;
  dStack_138 = dStack_138 + param_4;
  local_130 = param_4 + local_130;
  FUN_1400c6592(&local_158,&local_118,param_3);
  local_148 = local_108;
  local_158 = local_118;
  dVar2 = local_158;
  uStack_150 = dStack_110;
  dVar1 = uStack_150;
  local_140 = local_100;
  dStack_138 = dStack_f8;
  local_130 = local_f0;
  local_158._0_4_ = SUB84(local_118,0);
  local_158._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
  uStack_150._0_4_ = SUB84(dStack_110,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dStack_110 >> 0x20);
  local_168 = 0;
  uStack_160 = 0;
  local_188 = (undefined4)local_158;
  uStack_184 = local_158._4_4_;
  uStack_180 = (undefined4)uStack_150;
  uStack_17c = uStack_150._4_4_;
  local_178 = local_100;
  dStack_170 = dStack_f8;
  local_158 = dVar2;
  uStack_150 = dVar1;
  FUN_1401ad93c(param_1);
  lVar6 = local_168;
  pdVar16 = &local_d0;
  pdVar11 = &local_e8;
  pdVar13 = &local_100;
  local_1c8 = pdVar16;
  if (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x60) < 0.0)
  {
    pdVar11 = pdVar16;
    pdVar13 = pdVar16;
    pdVar16 = &local_100;
    local_1c8 = &local_e8;
  }
  local_190 = 3.4028234663852886e+38;
  lVar14 = (longlong)(int)uStack_160;
  if (lVar14 != 0) {
    lVar12 = 0;
    do {
      iVar8 = *(int *)(lVar6 + lVar12);
      iVar4 = *(int *)(lVar6 + 4 + lVar12);
      uVar3 = *(ushort *)(param_1 + 0x92);
      uVar15 = (uVar3 - 1) * iVar4 + iVar8;
      if ((((int)uVar15 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar15)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar15) != -1)) {
        uVar10 = (uint)uVar3;
        iVar8 = iVar4 * uVar10 + iVar8;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar2 = *(double *)(param_1 + 0x80);
        dVar1 = *(double *)(param_1 + 0xa0);
        local_118 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar10);
        dStack_110 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar10);
        local_c0 = *(double *)(param_1 + 0x60);
        local_108 = ((double)*(ushort *)(lVar5 + lVar9 * 2) * dVar1 + dVar2) * local_c0;
        local_100 = ((double)(iVar8 % (int)uVar10) + 1.0) * *(double *)(param_1 + 0x50);
        local_f0 = ((double)*(ushort *)(lVar5 + 2 + lVar9 * 2) * dVar1 + dVar2) * local_c0;
        local_e0 = ((double)(iVar8 / (int)uVar10) + 1.0) * *(double *)(param_1 + 0x58);
        local_d8 = ((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2) *
                   local_c0;
        local_c0 = ((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2)
                   * local_c0;
        local_1d8 = &local_190;
        local_1e0 = &local_1c0;
        local_1e8 = &local_1a8;
        dStack_f8 = dStack_110;
        local_e8 = local_118;
        local_d0 = local_100;
        local_c8 = local_e0;
        cVar7 = FUN_146d9fb2e(&local_128,&local_118,pdVar13,pdVar16);
        if ((cVar7 != '\0') && (local_190 < *param_7)) {
          *param_7 = local_190;
          param_5[2] = local_198;
          *param_5 = local_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = local_1b0;
          *(undefined4 *)param_6 = local_1c0;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_1bc;
          *(undefined4 *)(param_6 + 1) = uStack_1b8;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_1b4;
          *param_8 = uVar15 * 2;
        }
        local_1d8 = &local_190;
        local_1e0 = &local_1c0;
        local_1e8 = &local_1a8;
        cVar7 = FUN_146d9fb2e(&local_128,&local_118,local_1c8,pdVar11);
        if ((cVar7 != '\0') && (local_190 < *param_7)) {
          *param_7 = local_190;
          param_5[2] = local_198;
          *param_5 = local_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = local_1b0;
          *param_6 = CONCAT44(uStack_1bc,local_1c0);
          param_6[1] = CONCAT44(uStack_1b4,uStack_1b8);
          *param_8 = uVar15 * 2;
        }
      }
      lVar12 = lVar12 + 8;
    } while (lVar14 * 8 != lVar12);
  }
  dVar2 = *param_7;
  if (local_168 != 0) {
    FUN_1400020a8(local_168);
  }
  if ((local_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar2 < 0.0;
}



// FUNCTION 146d91576 thunk_FUN_146d9157c body=5 status=ok
// SIG undefined thunk_FUN_146d9157c(void)

bool thunk_FUN_146d9157c(longlong param_1,longlong param_2,undefined8 param_3,double param_4,
                        undefined8 *param_5,undefined8 *param_6,double *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_208 [32];
  undefined8 *puStack_1e8;
  undefined4 *puStack_1e0;
  double *pdStack_1d8;
  double *pdStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double dStack_178;
  double dStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  ulonglong uStack_b0;
  
  uStack_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uStack_158 = (double)*(float *)(param_2 + 0x40) - param_4;
  uStack_150 = (double)*(float *)(param_2 + 0x44) - param_4;
  dStack_148 = (double)*(float *)(param_2 + 0x48) - param_4;
  dStack_140 = (double)*(float *)(param_2 + 0x4c) + param_4;
  dStack_138 = (double)*(float *)(param_2 + 0x50) + param_4;
  dStack_130 = (double)*(float *)(param_2 + 0x54) + param_4;
  lStack_128 = param_2;
  uStack_120 = param_3;
  FUN_1400c6592(&uStack_158,&dStack_118);
  dStack_148 = dStack_108;
  uStack_158 = dStack_118;
  dVar2 = uStack_158;
  uStack_150 = dStack_110;
  dVar1 = uStack_150;
  dStack_140 = dStack_100;
  dStack_138 = dStack_f8;
  dStack_130 = dStack_f0;
  uStack_158._0_4_ = SUB84(dStack_118,0);
  uStack_158._4_4_ = (undefined4)((ulonglong)dStack_118 >> 0x20);
  uStack_150._0_4_ = SUB84(dStack_110,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dStack_110 >> 0x20);
  lStack_168 = 0;
  uStack_160 = 0;
  uStack_188 = (undefined4)uStack_158;
  uStack_184 = uStack_158._4_4_;
  uStack_180 = (undefined4)uStack_150;
  uStack_17c = uStack_150._4_4_;
  dStack_178 = dStack_100;
  dStack_170 = dStack_f8;
  uStack_158 = dVar2;
  uStack_150 = dVar1;
  FUN_1401ad93c(param_1);
  lVar6 = lStack_168;
  pdVar16 = &dStack_d0;
  pdVar11 = &dStack_e8;
  pdVar13 = &dStack_100;
  pdStack_1c8 = pdVar16;
  if (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x60) < 0.0)
  {
    pdVar11 = pdVar16;
    pdVar13 = pdVar16;
    pdVar16 = &dStack_100;
    pdStack_1c8 = &dStack_e8;
  }
  dStack_190 = 3.4028234663852886e+38;
  lVar14 = (longlong)(int)uStack_160;
  if (lVar14 != 0) {
    lVar12 = 0;
    do {
      iVar8 = *(int *)(lVar6 + lVar12);
      iVar4 = *(int *)(lVar6 + 4 + lVar12);
      uVar3 = *(ushort *)(param_1 + 0x92);
      uVar15 = (uVar3 - 1) * iVar4 + iVar8;
      if ((((int)uVar15 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar15)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar15) != -1)) {
        uVar10 = (uint)uVar3;
        iVar8 = iVar4 * uVar10 + iVar8;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar2 = *(double *)(param_1 + 0x80);
        dVar1 = *(double *)(param_1 + 0xa0);
        dStack_118 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar10);
        dStack_110 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar10);
        dStack_c0 = *(double *)(param_1 + 0x60);
        dStack_108 = ((double)*(ushort *)(lVar5 + lVar9 * 2) * dVar1 + dVar2) * dStack_c0;
        dStack_100 = ((double)(iVar8 % (int)uVar10) + 1.0) * *(double *)(param_1 + 0x50);
        dStack_f0 = ((double)*(ushort *)(lVar5 + 2 + lVar9 * 2) * dVar1 + dVar2) * dStack_c0;
        dStack_e0 = ((double)(iVar8 / (int)uVar10) + 1.0) * *(double *)(param_1 + 0x58);
        dStack_d8 = ((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2) *
                    dStack_c0;
        dStack_c0 = ((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2
                    ) * dStack_c0;
        pdStack_1d8 = &dStack_190;
        puStack_1e0 = &uStack_1c0;
        puStack_1e8 = &uStack_1a8;
        dStack_f8 = dStack_110;
        dStack_e8 = dStack_118;
        dStack_d0 = dStack_100;
        dStack_c8 = dStack_e0;
        cVar7 = FUN_146d9fe70(&lStack_128,&dStack_118,pdVar13,pdVar16);
        if ((cVar7 != '\0') && (dStack_190 < *param_7)) {
          *param_7 = dStack_190;
          param_5[2] = uStack_198;
          *param_5 = uStack_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = uStack_1b0;
          *(undefined4 *)param_6 = uStack_1c0;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_1bc;
          *(undefined4 *)(param_6 + 1) = uStack_1b8;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_1b4;
          *param_8 = uVar15 * 2;
        }
        pdStack_1d8 = &dStack_190;
        puStack_1e0 = &uStack_1c0;
        puStack_1e8 = &uStack_1a8;
        cVar7 = FUN_146d9fe70(&lStack_128,&dStack_118,pdStack_1c8,pdVar11);
        if ((cVar7 != '\0') && (dStack_190 < *param_7)) {
          *param_7 = dStack_190;
          param_5[2] = uStack_198;
          *param_5 = uStack_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = uStack_1b0;
          *param_6 = CONCAT44(uStack_1bc,uStack_1c0);
          param_6[1] = CONCAT44(uStack_1b4,uStack_1b8);
          *param_8 = uVar15 * 2;
        }
      }
      lVar12 = lVar12 + 8;
    } while (lVar14 * 8 != lVar12);
  }
  dVar2 = *param_7;
  if (lStack_168 != 0) {
    FUN_1400020a8(lStack_168);
  }
  if ((uStack_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar2 < 0.0;
}



// FUNCTION 146d9157c FUN_146d9157c body=1275 status=ok
// SIG undefined FUN_146d9157c(void)

bool FUN_146d9157c(longlong param_1,longlong param_2,undefined8 param_3,double param_4,
                  undefined8 *param_5,undefined8 *param_6,double *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 *local_1e0;
  double *local_1d8;
  double *local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  double dStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  longlong local_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_158 = (double)*(float *)(param_2 + 0x40) - param_4;
  uStack_150 = (double)*(float *)(param_2 + 0x44) - param_4;
  local_148 = (double)*(float *)(param_2 + 0x48) - param_4;
  local_140 = (double)*(float *)(param_2 + 0x4c) + param_4;
  dStack_138 = (double)*(float *)(param_2 + 0x50) + param_4;
  local_130 = (double)*(float *)(param_2 + 0x54) + param_4;
  local_128 = param_2;
  local_120 = param_3;
  FUN_1400c6592(&local_158,&local_118);
  local_148 = local_108;
  local_158 = local_118;
  dVar2 = local_158;
  uStack_150 = dStack_110;
  dVar1 = uStack_150;
  local_140 = local_100;
  dStack_138 = dStack_f8;
  local_130 = local_f0;
  local_158._0_4_ = SUB84(local_118,0);
  local_158._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
  uStack_150._0_4_ = SUB84(dStack_110,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dStack_110 >> 0x20);
  local_168 = 0;
  uStack_160 = 0;
  local_188 = (undefined4)local_158;
  uStack_184 = local_158._4_4_;
  uStack_180 = (undefined4)uStack_150;
  uStack_17c = uStack_150._4_4_;
  local_178 = local_100;
  dStack_170 = dStack_f8;
  local_158 = dVar2;
  uStack_150 = dVar1;
  FUN_1401ad93c(param_1);
  lVar6 = local_168;
  pdVar16 = &local_d0;
  pdVar11 = &local_e8;
  pdVar13 = &local_100;
  local_1c8 = pdVar16;
  if (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x60) < 0.0)
  {
    pdVar11 = pdVar16;
    pdVar13 = pdVar16;
    pdVar16 = &local_100;
    local_1c8 = &local_e8;
  }
  local_190 = 3.4028234663852886e+38;
  lVar14 = (longlong)(int)uStack_160;
  if (lVar14 != 0) {
    lVar12 = 0;
    do {
      iVar8 = *(int *)(lVar6 + lVar12);
      iVar4 = *(int *)(lVar6 + 4 + lVar12);
      uVar3 = *(ushort *)(param_1 + 0x92);
      uVar15 = (uVar3 - 1) * iVar4 + iVar8;
      if ((((int)uVar15 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar15)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar15) != -1)) {
        uVar10 = (uint)uVar3;
        iVar8 = iVar4 * uVar10 + iVar8;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar2 = *(double *)(param_1 + 0x80);
        dVar1 = *(double *)(param_1 + 0xa0);
        local_118 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar10);
        dStack_110 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar10);
        local_c0 = *(double *)(param_1 + 0x60);
        local_108 = ((double)*(ushort *)(lVar5 + lVar9 * 2) * dVar1 + dVar2) * local_c0;
        local_100 = ((double)(iVar8 % (int)uVar10) + 1.0) * *(double *)(param_1 + 0x50);
        local_f0 = ((double)*(ushort *)(lVar5 + 2 + lVar9 * 2) * dVar1 + dVar2) * local_c0;
        local_e0 = ((double)(iVar8 / (int)uVar10) + 1.0) * *(double *)(param_1 + 0x58);
        local_d8 = ((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2) *
                   local_c0;
        local_c0 = ((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2)
                   * local_c0;
        local_1d8 = &local_190;
        local_1e0 = &local_1c0;
        local_1e8 = &local_1a8;
        dStack_f8 = dStack_110;
        local_e8 = local_118;
        local_d0 = local_100;
        local_c8 = local_e0;
        cVar7 = FUN_146d9fe70(&local_128,&local_118,pdVar13,pdVar16);
        if ((cVar7 != '\0') && (local_190 < *param_7)) {
          *param_7 = local_190;
          param_5[2] = local_198;
          *param_5 = local_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = local_1b0;
          *(undefined4 *)param_6 = local_1c0;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_1bc;
          *(undefined4 *)(param_6 + 1) = uStack_1b8;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_1b4;
          *param_8 = uVar15 * 2;
        }
        local_1d8 = &local_190;
        local_1e0 = &local_1c0;
        local_1e8 = &local_1a8;
        cVar7 = FUN_146d9fe70(&local_128,&local_118,local_1c8,pdVar11);
        if ((cVar7 != '\0') && (local_190 < *param_7)) {
          *param_7 = local_190;
          param_5[2] = local_198;
          *param_5 = local_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = local_1b0;
          *param_6 = CONCAT44(uStack_1bc,local_1c0);
          param_6[1] = CONCAT44(uStack_1b4,uStack_1b8);
          *param_8 = uVar15 * 2;
        }
      }
      lVar12 = lVar12 + 8;
    } while (lVar14 * 8 != lVar12);
  }
  dVar2 = *param_7;
  if (local_168 != 0) {
    FUN_1400020a8(local_168);
  }
  if ((local_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar2 < 0.0;
}



// FUNCTION 146d91a78 thunk_FUN_146d91a7e body=5 status=ok
// SIG undefined thunk_FUN_146d91a7e(void)

bool thunk_FUN_146d91a7e(longlong param_1,longlong param_2,undefined8 param_3,double param_4,
                        undefined8 *param_5,undefined8 *param_6,double *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_208 [32];
  undefined8 *puStack_1e8;
  undefined4 *puStack_1e0;
  double *pdStack_1d8;
  double *pdStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double dStack_178;
  double dStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  ulonglong uStack_b0;
  
  uStack_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uStack_158 = *(double *)(param_2 + 0x58) - param_4;
  uStack_150 = *(double *)(param_2 + 0x60) - param_4;
  dStack_148 = *(double *)(param_2 + 0x68) - param_4;
  dStack_140 = *(double *)(param_2 + 0x70) + param_4;
  dStack_138 = *(double *)(param_2 + 0x78) + param_4;
  dStack_130 = param_4 + *(double *)(param_2 + 0x80);
  lStack_128 = param_2;
  uStack_120 = param_3;
  FUN_1400c6592(&uStack_158,&dStack_118);
  dStack_148 = dStack_108;
  uStack_158 = dStack_118;
  dVar2 = uStack_158;
  uStack_150 = dStack_110;
  dVar1 = uStack_150;
  dStack_140 = dStack_100;
  dStack_138 = dStack_f8;
  dStack_130 = dStack_f0;
  uStack_158._0_4_ = SUB84(dStack_118,0);
  uStack_158._4_4_ = (undefined4)((ulonglong)dStack_118 >> 0x20);
  uStack_150._0_4_ = SUB84(dStack_110,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dStack_110 >> 0x20);
  lStack_168 = 0;
  uStack_160 = 0;
  uStack_188 = (undefined4)uStack_158;
  uStack_184 = uStack_158._4_4_;
  uStack_180 = (undefined4)uStack_150;
  uStack_17c = uStack_150._4_4_;
  dStack_178 = dStack_100;
  dStack_170 = dStack_f8;
  uStack_158 = dVar2;
  uStack_150 = dVar1;
  FUN_1401ad93c(param_1);
  lVar6 = lStack_168;
  pdVar16 = &dStack_d0;
  pdVar11 = &dStack_e8;
  pdVar13 = &dStack_100;
  pdStack_1c8 = pdVar16;
  if (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x60) < 0.0)
  {
    pdVar11 = pdVar16;
    pdVar13 = pdVar16;
    pdVar16 = &dStack_100;
    pdStack_1c8 = &dStack_e8;
  }
  dStack_190 = 3.4028234663852886e+38;
  lVar14 = (longlong)(int)uStack_160;
  if (lVar14 != 0) {
    lVar12 = 0;
    do {
      iVar8 = *(int *)(lVar6 + lVar12);
      iVar4 = *(int *)(lVar6 + 4 + lVar12);
      uVar3 = *(ushort *)(param_1 + 0x92);
      uVar15 = (uVar3 - 1) * iVar4 + iVar8;
      if ((((int)uVar15 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar15)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar15) != -1)) {
        uVar10 = (uint)uVar3;
        iVar8 = iVar4 * uVar10 + iVar8;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar2 = *(double *)(param_1 + 0x80);
        dVar1 = *(double *)(param_1 + 0xa0);
        dStack_118 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar10);
        dStack_110 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar10);
        dStack_c0 = *(double *)(param_1 + 0x60);
        dStack_108 = ((double)*(ushort *)(lVar5 + lVar9 * 2) * dVar1 + dVar2) * dStack_c0;
        dStack_100 = ((double)(iVar8 % (int)uVar10) + 1.0) * *(double *)(param_1 + 0x50);
        dStack_f0 = ((double)*(ushort *)(lVar5 + 2 + lVar9 * 2) * dVar1 + dVar2) * dStack_c0;
        dStack_e0 = ((double)(iVar8 / (int)uVar10) + 1.0) * *(double *)(param_1 + 0x58);
        dStack_d8 = ((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2) *
                    dStack_c0;
        dStack_c0 = ((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2
                    ) * dStack_c0;
        pdStack_1d8 = &dStack_190;
        puStack_1e0 = &uStack_1c0;
        puStack_1e8 = &uStack_1a8;
        dStack_f8 = dStack_110;
        dStack_e8 = dStack_118;
        dStack_d0 = dStack_100;
        dStack_c8 = dStack_e0;
        cVar7 = FUN_146da01b2(&lStack_128,&dStack_118,pdVar13,pdVar16);
        if ((cVar7 != '\0') && (dStack_190 < *param_7)) {
          *param_7 = dStack_190;
          param_5[2] = uStack_198;
          *param_5 = uStack_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = uStack_1b0;
          *(undefined4 *)param_6 = uStack_1c0;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_1bc;
          *(undefined4 *)(param_6 + 1) = uStack_1b8;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_1b4;
          *param_8 = uVar15 * 2;
        }
        pdStack_1d8 = &dStack_190;
        puStack_1e0 = &uStack_1c0;
        puStack_1e8 = &uStack_1a8;
        cVar7 = FUN_146da01b2(&lStack_128,&dStack_118,pdStack_1c8,pdVar11);
        if ((cVar7 != '\0') && (dStack_190 < *param_7)) {
          *param_7 = dStack_190;
          param_5[2] = uStack_198;
          *param_5 = uStack_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = uStack_1b0;
          *param_6 = CONCAT44(uStack_1bc,uStack_1c0);
          param_6[1] = CONCAT44(uStack_1b4,uStack_1b8);
          *param_8 = uVar15 * 2;
        }
      }
      lVar12 = lVar12 + 8;
    } while (lVar14 * 8 != lVar12);
  }
  dVar2 = *param_7;
  if (lStack_168 != 0) {
    FUN_1400020a8(lStack_168);
  }
  if ((uStack_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar2 < 0.0;
}



// FUNCTION 146d91a7e FUN_146d91a7e body=1302 status=ok
// SIG undefined FUN_146d91a7e(void)

bool FUN_146d91a7e(longlong param_1,longlong param_2,undefined8 param_3,double param_4,
                  undefined8 *param_5,undefined8 *param_6,double *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 *local_1e0;
  double *local_1d8;
  double *local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  double dStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  longlong local_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_158 = *(double *)(param_2 + 0x58) - param_4;
  uStack_150 = *(double *)(param_2 + 0x60) - param_4;
  local_148 = *(double *)(param_2 + 0x68) - param_4;
  local_140 = *(double *)(param_2 + 0x70) + param_4;
  dStack_138 = *(double *)(param_2 + 0x78) + param_4;
  local_130 = param_4 + *(double *)(param_2 + 0x80);
  local_128 = param_2;
  local_120 = param_3;
  FUN_1400c6592(&local_158,&local_118);
  local_148 = local_108;
  local_158 = local_118;
  dVar2 = local_158;
  uStack_150 = dStack_110;
  dVar1 = uStack_150;
  local_140 = local_100;
  dStack_138 = dStack_f8;
  local_130 = local_f0;
  local_158._0_4_ = SUB84(local_118,0);
  local_158._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
  uStack_150._0_4_ = SUB84(dStack_110,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dStack_110 >> 0x20);
  local_168 = 0;
  uStack_160 = 0;
  local_188 = (undefined4)local_158;
  uStack_184 = local_158._4_4_;
  uStack_180 = (undefined4)uStack_150;
  uStack_17c = uStack_150._4_4_;
  local_178 = local_100;
  dStack_170 = dStack_f8;
  local_158 = dVar2;
  uStack_150 = dVar1;
  FUN_1401ad93c(param_1);
  lVar6 = local_168;
  pdVar16 = &local_d0;
  pdVar11 = &local_e8;
  pdVar13 = &local_100;
  local_1c8 = pdVar16;
  if (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x60) < 0.0)
  {
    pdVar11 = pdVar16;
    pdVar13 = pdVar16;
    pdVar16 = &local_100;
    local_1c8 = &local_e8;
  }
  local_190 = 3.4028234663852886e+38;
  lVar14 = (longlong)(int)uStack_160;
  if (lVar14 != 0) {
    lVar12 = 0;
    do {
      iVar8 = *(int *)(lVar6 + lVar12);
      iVar4 = *(int *)(lVar6 + 4 + lVar12);
      uVar3 = *(ushort *)(param_1 + 0x92);
      uVar15 = (uVar3 - 1) * iVar4 + iVar8;
      if ((((int)uVar15 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar15)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar15) != -1)) {
        uVar10 = (uint)uVar3;
        iVar8 = iVar4 * uVar10 + iVar8;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar2 = *(double *)(param_1 + 0x80);
        dVar1 = *(double *)(param_1 + 0xa0);
        local_118 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar10);
        dStack_110 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar10);
        local_c0 = *(double *)(param_1 + 0x60);
        local_108 = ((double)*(ushort *)(lVar5 + lVar9 * 2) * dVar1 + dVar2) * local_c0;
        local_100 = ((double)(iVar8 % (int)uVar10) + 1.0) * *(double *)(param_1 + 0x50);
        local_f0 = ((double)*(ushort *)(lVar5 + 2 + lVar9 * 2) * dVar1 + dVar2) * local_c0;
        local_e0 = ((double)(iVar8 / (int)uVar10) + 1.0) * *(double *)(param_1 + 0x58);
        local_d8 = ((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2) *
                   local_c0;
        local_c0 = ((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2)
                   * local_c0;
        local_1d8 = &local_190;
        local_1e0 = &local_1c0;
        local_1e8 = &local_1a8;
        dStack_f8 = dStack_110;
        local_e8 = local_118;
        local_d0 = local_100;
        local_c8 = local_e0;
        cVar7 = FUN_146da01b2(&local_128,&local_118,pdVar13,pdVar16);
        if ((cVar7 != '\0') && (local_190 < *param_7)) {
          *param_7 = local_190;
          param_5[2] = local_198;
          *param_5 = local_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = local_1b0;
          *(undefined4 *)param_6 = local_1c0;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_1bc;
          *(undefined4 *)(param_6 + 1) = uStack_1b8;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_1b4;
          *param_8 = uVar15 * 2;
        }
        local_1d8 = &local_190;
        local_1e0 = &local_1c0;
        local_1e8 = &local_1a8;
        cVar7 = FUN_146da01b2(&local_128,&local_118,local_1c8,pdVar11);
        if ((cVar7 != '\0') && (local_190 < *param_7)) {
          *param_7 = local_190;
          param_5[2] = local_198;
          *param_5 = local_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = local_1b0;
          *param_6 = CONCAT44(uStack_1bc,local_1c0);
          param_6[1] = CONCAT44(uStack_1b4,uStack_1b8);
          *param_8 = uVar15 * 2;
        }
      }
      lVar12 = lVar12 + 8;
    } while (lVar14 * 8 != lVar12);
  }
  dVar2 = *param_7;
  if (local_168 != 0) {
    FUN_1400020a8(local_168);
  }
  if ((local_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar2 < 0.0;
}



// FUNCTION 146d91f96 thunk_FUN_146d91f9c body=5 status=ok
// SIG undefined thunk_FUN_146d91f9c(void)

bool thunk_FUN_146d91f9c(longlong param_1,longlong param_2,undefined8 param_3,double param_4,
                        undefined8 *param_5,undefined8 *param_6,double *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_208 [32];
  undefined8 *puStack_1e8;
  undefined4 *puStack_1e0;
  double *pdStack_1d8;
  double *pdStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double dStack_178;
  double dStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  ulonglong uStack_b0;
  
  uStack_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uStack_158 = *(double *)(param_2 + 0x58) - param_4;
  uStack_150 = *(double *)(param_2 + 0x60) - param_4;
  dStack_148 = *(double *)(param_2 + 0x68) - param_4;
  dStack_140 = *(double *)(param_2 + 0x70) + param_4;
  dStack_138 = *(double *)(param_2 + 0x78) + param_4;
  dStack_130 = param_4 + *(double *)(param_2 + 0x80);
  lStack_128 = param_2;
  uStack_120 = param_3;
  FUN_1400c6592(&uStack_158,&dStack_118);
  dStack_148 = dStack_108;
  uStack_158 = dStack_118;
  dVar2 = uStack_158;
  uStack_150 = dStack_110;
  dVar1 = uStack_150;
  dStack_140 = dStack_100;
  dStack_138 = dStack_f8;
  dStack_130 = dStack_f0;
  uStack_158._0_4_ = SUB84(dStack_118,0);
  uStack_158._4_4_ = (undefined4)((ulonglong)dStack_118 >> 0x20);
  uStack_150._0_4_ = SUB84(dStack_110,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dStack_110 >> 0x20);
  lStack_168 = 0;
  uStack_160 = 0;
  uStack_188 = (undefined4)uStack_158;
  uStack_184 = uStack_158._4_4_;
  uStack_180 = (undefined4)uStack_150;
  uStack_17c = uStack_150._4_4_;
  dStack_178 = dStack_100;
  dStack_170 = dStack_f8;
  uStack_158 = dVar2;
  uStack_150 = dVar1;
  FUN_1401ad93c(param_1);
  lVar6 = lStack_168;
  pdVar16 = &dStack_d0;
  pdVar11 = &dStack_e8;
  pdVar13 = &dStack_100;
  pdStack_1c8 = pdVar16;
  if (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x60) < 0.0)
  {
    pdVar11 = pdVar16;
    pdVar13 = pdVar16;
    pdVar16 = &dStack_100;
    pdStack_1c8 = &dStack_e8;
  }
  dStack_190 = 3.4028234663852886e+38;
  lVar14 = (longlong)(int)uStack_160;
  if (lVar14 != 0) {
    lVar12 = 0;
    do {
      iVar8 = *(int *)(lVar6 + lVar12);
      iVar4 = *(int *)(lVar6 + 4 + lVar12);
      uVar3 = *(ushort *)(param_1 + 0x92);
      uVar15 = (uVar3 - 1) * iVar4 + iVar8;
      if ((((int)uVar15 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar15)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar15) != -1)) {
        uVar10 = (uint)uVar3;
        iVar8 = iVar4 * uVar10 + iVar8;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar2 = *(double *)(param_1 + 0x80);
        dVar1 = *(double *)(param_1 + 0xa0);
        dStack_118 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar10);
        dStack_110 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar10);
        dStack_c0 = *(double *)(param_1 + 0x60);
        dStack_108 = ((double)*(ushort *)(lVar5 + lVar9 * 2) * dVar1 + dVar2) * dStack_c0;
        dStack_100 = ((double)(iVar8 % (int)uVar10) + 1.0) * *(double *)(param_1 + 0x50);
        dStack_f0 = ((double)*(ushort *)(lVar5 + 2 + lVar9 * 2) * dVar1 + dVar2) * dStack_c0;
        dStack_e0 = ((double)(iVar8 / (int)uVar10) + 1.0) * *(double *)(param_1 + 0x58);
        dStack_d8 = ((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2) *
                    dStack_c0;
        dStack_c0 = ((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2
                    ) * dStack_c0;
        pdStack_1d8 = &dStack_190;
        puStack_1e0 = &uStack_1c0;
        puStack_1e8 = &uStack_1a8;
        dStack_f8 = dStack_110;
        dStack_e8 = dStack_118;
        dStack_d0 = dStack_100;
        dStack_c8 = dStack_e0;
        cVar7 = FUN_146da04f4(&lStack_128,&dStack_118,pdVar13,pdVar16);
        if ((cVar7 != '\0') && (dStack_190 < *param_7)) {
          *param_7 = dStack_190;
          param_5[2] = uStack_198;
          *param_5 = uStack_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = uStack_1b0;
          *(undefined4 *)param_6 = uStack_1c0;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_1bc;
          *(undefined4 *)(param_6 + 1) = uStack_1b8;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_1b4;
          *param_8 = uVar15 * 2;
        }
        pdStack_1d8 = &dStack_190;
        puStack_1e0 = &uStack_1c0;
        puStack_1e8 = &uStack_1a8;
        cVar7 = FUN_146da04f4(&lStack_128,&dStack_118,pdStack_1c8,pdVar11);
        if ((cVar7 != '\0') && (dStack_190 < *param_7)) {
          *param_7 = dStack_190;
          param_5[2] = uStack_198;
          *param_5 = uStack_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = uStack_1b0;
          *param_6 = CONCAT44(uStack_1bc,uStack_1c0);
          param_6[1] = CONCAT44(uStack_1b4,uStack_1b8);
          *param_8 = uVar15 * 2;
        }
      }
      lVar12 = lVar12 + 8;
    } while (lVar14 * 8 != lVar12);
  }
  dVar2 = *param_7;
  if (lStack_168 != 0) {
    FUN_1400020a8(lStack_168);
  }
  if ((uStack_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar2 < 0.0;
}



// FUNCTION 146d91f9c FUN_146d91f9c body=1302 status=ok
// SIG undefined FUN_146d91f9c(void)

bool FUN_146d91f9c(longlong param_1,longlong param_2,undefined8 param_3,double param_4,
                  undefined8 *param_5,undefined8 *param_6,double *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 *local_1e0;
  double *local_1d8;
  double *local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  double dStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  longlong local_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_158 = *(double *)(param_2 + 0x58) - param_4;
  uStack_150 = *(double *)(param_2 + 0x60) - param_4;
  local_148 = *(double *)(param_2 + 0x68) - param_4;
  local_140 = *(double *)(param_2 + 0x70) + param_4;
  dStack_138 = *(double *)(param_2 + 0x78) + param_4;
  local_130 = param_4 + *(double *)(param_2 + 0x80);
  local_128 = param_2;
  local_120 = param_3;
  FUN_1400c6592(&local_158,&local_118);
  local_148 = local_108;
  local_158 = local_118;
  dVar2 = local_158;
  uStack_150 = dStack_110;
  dVar1 = uStack_150;
  local_140 = local_100;
  dStack_138 = dStack_f8;
  local_130 = local_f0;
  local_158._0_4_ = SUB84(local_118,0);
  local_158._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
  uStack_150._0_4_ = SUB84(dStack_110,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dStack_110 >> 0x20);
  local_168 = 0;
  uStack_160 = 0;
  local_188 = (undefined4)local_158;
  uStack_184 = local_158._4_4_;
  uStack_180 = (undefined4)uStack_150;
  uStack_17c = uStack_150._4_4_;
  local_178 = local_100;
  dStack_170 = dStack_f8;
  local_158 = dVar2;
  uStack_150 = dVar1;
  FUN_1401ad93c(param_1);
  lVar6 = local_168;
  pdVar16 = &local_d0;
  pdVar11 = &local_e8;
  pdVar13 = &local_100;
  local_1c8 = pdVar16;
  if (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x60) < 0.0)
  {
    pdVar11 = pdVar16;
    pdVar13 = pdVar16;
    pdVar16 = &local_100;
    local_1c8 = &local_e8;
  }
  local_190 = 3.4028234663852886e+38;
  lVar14 = (longlong)(int)uStack_160;
  if (lVar14 != 0) {
    lVar12 = 0;
    do {
      iVar8 = *(int *)(lVar6 + lVar12);
      iVar4 = *(int *)(lVar6 + 4 + lVar12);
      uVar3 = *(ushort *)(param_1 + 0x92);
      uVar15 = (uVar3 - 1) * iVar4 + iVar8;
      if ((((int)uVar15 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar15)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar15) != -1)) {
        uVar10 = (uint)uVar3;
        iVar8 = iVar4 * uVar10 + iVar8;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar2 = *(double *)(param_1 + 0x80);
        dVar1 = *(double *)(param_1 + 0xa0);
        local_118 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar10);
        dStack_110 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar10);
        local_c0 = *(double *)(param_1 + 0x60);
        local_108 = ((double)*(ushort *)(lVar5 + lVar9 * 2) * dVar1 + dVar2) * local_c0;
        local_100 = ((double)(iVar8 % (int)uVar10) + 1.0) * *(double *)(param_1 + 0x50);
        local_f0 = ((double)*(ushort *)(lVar5 + 2 + lVar9 * 2) * dVar1 + dVar2) * local_c0;
        local_e0 = ((double)(iVar8 / (int)uVar10) + 1.0) * *(double *)(param_1 + 0x58);
        local_d8 = ((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2) *
                   local_c0;
        local_c0 = ((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2)
                   * local_c0;
        local_1d8 = &local_190;
        local_1e0 = &local_1c0;
        local_1e8 = &local_1a8;
        dStack_f8 = dStack_110;
        local_e8 = local_118;
        local_d0 = local_100;
        local_c8 = local_e0;
        cVar7 = FUN_146da04f4(&local_128,&local_118,pdVar13,pdVar16);
        if ((cVar7 != '\0') && (local_190 < *param_7)) {
          *param_7 = local_190;
          param_5[2] = local_198;
          *param_5 = local_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = local_1b0;
          *(undefined4 *)param_6 = local_1c0;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_1bc;
          *(undefined4 *)(param_6 + 1) = uStack_1b8;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_1b4;
          *param_8 = uVar15 * 2;
        }
        local_1d8 = &local_190;
        local_1e0 = &local_1c0;
        local_1e8 = &local_1a8;
        cVar7 = FUN_146da04f4(&local_128,&local_118,local_1c8,pdVar11);
        if ((cVar7 != '\0') && (local_190 < *param_7)) {
          *param_7 = local_190;
          param_5[2] = local_198;
          *param_5 = local_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = local_1b0;
          *param_6 = CONCAT44(uStack_1bc,local_1c0);
          param_6[1] = CONCAT44(uStack_1b4,uStack_1b8);
          *param_8 = uVar15 * 2;
        }
      }
      lVar12 = lVar12 + 8;
    } while (lVar14 * 8 != lVar12);
  }
  dVar2 = *param_7;
  if (local_168 != 0) {
    FUN_1400020a8(local_168);
  }
  if ((local_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar2 < 0.0;
}



// FUNCTION 146d924b4 thunk_FUN_146d924ba body=5 status=ok
// SIG undefined thunk_FUN_146d924ba(void)

bool thunk_FUN_146d924ba(longlong param_1,longlong param_2,undefined8 param_3,double param_4,
                        undefined8 *param_5,undefined8 *param_6,double *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_208 [32];
  undefined8 *puStack_1e8;
  undefined4 *puStack_1e0;
  double *pdStack_1d8;
  double *pdStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double dStack_178;
  double dStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  ulonglong uStack_b0;
  
  uStack_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uStack_158 = *(double *)(param_2 + 0x58) - param_4;
  uStack_150 = *(double *)(param_2 + 0x60) - param_4;
  dStack_148 = *(double *)(param_2 + 0x68) - param_4;
  dStack_140 = *(double *)(param_2 + 0x70) + param_4;
  dStack_138 = *(double *)(param_2 + 0x78) + param_4;
  dStack_130 = param_4 + *(double *)(param_2 + 0x80);
  lStack_128 = param_2;
  uStack_120 = param_3;
  FUN_1400c6592(&uStack_158,&dStack_118);
  dStack_148 = dStack_108;
  uStack_158 = dStack_118;
  dVar2 = uStack_158;
  uStack_150 = dStack_110;
  dVar1 = uStack_150;
  dStack_140 = dStack_100;
  dStack_138 = dStack_f8;
  dStack_130 = dStack_f0;
  uStack_158._0_4_ = SUB84(dStack_118,0);
  uStack_158._4_4_ = (undefined4)((ulonglong)dStack_118 >> 0x20);
  uStack_150._0_4_ = SUB84(dStack_110,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dStack_110 >> 0x20);
  lStack_168 = 0;
  uStack_160 = 0;
  uStack_188 = (undefined4)uStack_158;
  uStack_184 = uStack_158._4_4_;
  uStack_180 = (undefined4)uStack_150;
  uStack_17c = uStack_150._4_4_;
  dStack_178 = dStack_100;
  dStack_170 = dStack_f8;
  uStack_158 = dVar2;
  uStack_150 = dVar1;
  FUN_1401ad93c(param_1);
  lVar6 = lStack_168;
  pdVar16 = &dStack_d0;
  pdVar11 = &dStack_e8;
  pdVar13 = &dStack_100;
  pdStack_1c8 = pdVar16;
  if (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x60) < 0.0)
  {
    pdVar11 = pdVar16;
    pdVar13 = pdVar16;
    pdVar16 = &dStack_100;
    pdStack_1c8 = &dStack_e8;
  }
  dStack_190 = 3.4028234663852886e+38;
  lVar14 = (longlong)(int)uStack_160;
  if (lVar14 != 0) {
    lVar12 = 0;
    do {
      iVar8 = *(int *)(lVar6 + lVar12);
      iVar4 = *(int *)(lVar6 + 4 + lVar12);
      uVar3 = *(ushort *)(param_1 + 0x92);
      uVar15 = (uVar3 - 1) * iVar4 + iVar8;
      if ((((int)uVar15 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar15)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar15) != -1)) {
        uVar10 = (uint)uVar3;
        iVar8 = iVar4 * uVar10 + iVar8;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar2 = *(double *)(param_1 + 0x80);
        dVar1 = *(double *)(param_1 + 0xa0);
        dStack_118 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar10);
        dStack_110 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar10);
        dStack_c0 = *(double *)(param_1 + 0x60);
        dStack_108 = ((double)*(ushort *)(lVar5 + lVar9 * 2) * dVar1 + dVar2) * dStack_c0;
        dStack_100 = ((double)(iVar8 % (int)uVar10) + 1.0) * *(double *)(param_1 + 0x50);
        dStack_f0 = ((double)*(ushort *)(lVar5 + 2 + lVar9 * 2) * dVar1 + dVar2) * dStack_c0;
        dStack_e0 = ((double)(iVar8 / (int)uVar10) + 1.0) * *(double *)(param_1 + 0x58);
        dStack_d8 = ((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2) *
                    dStack_c0;
        dStack_c0 = ((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2
                    ) * dStack_c0;
        pdStack_1d8 = &dStack_190;
        puStack_1e0 = &uStack_1c0;
        puStack_1e8 = &uStack_1a8;
        dStack_f8 = dStack_110;
        dStack_e8 = dStack_118;
        dStack_d0 = dStack_100;
        dStack_c8 = dStack_e0;
        cVar7 = FUN_146da0836(&lStack_128,&dStack_118,pdVar13,pdVar16);
        if ((cVar7 != '\0') && (dStack_190 < *param_7)) {
          *param_7 = dStack_190;
          param_5[2] = uStack_198;
          *param_5 = uStack_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = uStack_1b0;
          *(undefined4 *)param_6 = uStack_1c0;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_1bc;
          *(undefined4 *)(param_6 + 1) = uStack_1b8;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_1b4;
          *param_8 = uVar15 * 2;
        }
        pdStack_1d8 = &dStack_190;
        puStack_1e0 = &uStack_1c0;
        puStack_1e8 = &uStack_1a8;
        cVar7 = FUN_146da0836(&lStack_128,&dStack_118,pdStack_1c8,pdVar11);
        if ((cVar7 != '\0') && (dStack_190 < *param_7)) {
          *param_7 = dStack_190;
          param_5[2] = uStack_198;
          *param_5 = uStack_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = uStack_1b0;
          *param_6 = CONCAT44(uStack_1bc,uStack_1c0);
          param_6[1] = CONCAT44(uStack_1b4,uStack_1b8);
          *param_8 = uVar15 * 2;
        }
      }
      lVar12 = lVar12 + 8;
    } while (lVar14 * 8 != lVar12);
  }
  dVar2 = *param_7;
  if (lStack_168 != 0) {
    FUN_1400020a8(lStack_168);
  }
  if ((uStack_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar2 < 0.0;
}



// FUNCTION 146d924ba FUN_146d924ba body=1302 status=ok
// SIG undefined FUN_146d924ba(void)

bool FUN_146d924ba(longlong param_1,longlong param_2,undefined8 param_3,double param_4,
                  undefined8 *param_5,undefined8 *param_6,double *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 *local_1e0;
  double *local_1d8;
  double *local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  double dStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  longlong local_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_158 = *(double *)(param_2 + 0x58) - param_4;
  uStack_150 = *(double *)(param_2 + 0x60) - param_4;
  local_148 = *(double *)(param_2 + 0x68) - param_4;
  local_140 = *(double *)(param_2 + 0x70) + param_4;
  dStack_138 = *(double *)(param_2 + 0x78) + param_4;
  local_130 = param_4 + *(double *)(param_2 + 0x80);
  local_128 = param_2;
  local_120 = param_3;
  FUN_1400c6592(&local_158,&local_118);
  local_148 = local_108;
  local_158 = local_118;
  dVar2 = local_158;
  uStack_150 = dStack_110;
  dVar1 = uStack_150;
  local_140 = local_100;
  dStack_138 = dStack_f8;
  local_130 = local_f0;
  local_158._0_4_ = SUB84(local_118,0);
  local_158._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
  uStack_150._0_4_ = SUB84(dStack_110,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dStack_110 >> 0x20);
  local_168 = 0;
  uStack_160 = 0;
  local_188 = (undefined4)local_158;
  uStack_184 = local_158._4_4_;
  uStack_180 = (undefined4)uStack_150;
  uStack_17c = uStack_150._4_4_;
  local_178 = local_100;
  dStack_170 = dStack_f8;
  local_158 = dVar2;
  uStack_150 = dVar1;
  FUN_1401ad93c(param_1);
  lVar6 = local_168;
  pdVar16 = &local_d0;
  pdVar11 = &local_e8;
  pdVar13 = &local_100;
  local_1c8 = pdVar16;
  if (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x60) < 0.0)
  {
    pdVar11 = pdVar16;
    pdVar13 = pdVar16;
    pdVar16 = &local_100;
    local_1c8 = &local_e8;
  }
  local_190 = 3.4028234663852886e+38;
  lVar14 = (longlong)(int)uStack_160;
  if (lVar14 != 0) {
    lVar12 = 0;
    do {
      iVar8 = *(int *)(lVar6 + lVar12);
      iVar4 = *(int *)(lVar6 + 4 + lVar12);
      uVar3 = *(ushort *)(param_1 + 0x92);
      uVar15 = (uVar3 - 1) * iVar4 + iVar8;
      if ((((int)uVar15 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar15)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar15) != -1)) {
        uVar10 = (uint)uVar3;
        iVar8 = iVar4 * uVar10 + iVar8;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar2 = *(double *)(param_1 + 0x80);
        dVar1 = *(double *)(param_1 + 0xa0);
        local_118 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar10);
        dStack_110 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar10);
        local_c0 = *(double *)(param_1 + 0x60);
        local_108 = ((double)*(ushort *)(lVar5 + lVar9 * 2) * dVar1 + dVar2) * local_c0;
        local_100 = ((double)(iVar8 % (int)uVar10) + 1.0) * *(double *)(param_1 + 0x50);
        local_f0 = ((double)*(ushort *)(lVar5 + 2 + lVar9 * 2) * dVar1 + dVar2) * local_c0;
        local_e0 = ((double)(iVar8 / (int)uVar10) + 1.0) * *(double *)(param_1 + 0x58);
        local_d8 = ((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2) *
                   local_c0;
        local_c0 = ((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2)
                   * local_c0;
        local_1d8 = &local_190;
        local_1e0 = &local_1c0;
        local_1e8 = &local_1a8;
        dStack_f8 = dStack_110;
        local_e8 = local_118;
        local_d0 = local_100;
        local_c8 = local_e0;
        cVar7 = FUN_146da0836(&local_128,&local_118,pdVar13,pdVar16);
        if ((cVar7 != '\0') && (local_190 < *param_7)) {
          *param_7 = local_190;
          param_5[2] = local_198;
          *param_5 = local_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = local_1b0;
          *(undefined4 *)param_6 = local_1c0;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_1bc;
          *(undefined4 *)(param_6 + 1) = uStack_1b8;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_1b4;
          *param_8 = uVar15 * 2;
        }
        local_1d8 = &local_190;
        local_1e0 = &local_1c0;
        local_1e8 = &local_1a8;
        cVar7 = FUN_146da0836(&local_128,&local_118,local_1c8,pdVar11);
        if ((cVar7 != '\0') && (local_190 < *param_7)) {
          *param_7 = local_190;
          param_5[2] = local_198;
          *param_5 = local_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = local_1b0;
          *param_6 = CONCAT44(uStack_1bc,local_1c0);
          param_6[1] = CONCAT44(uStack_1b4,uStack_1b8);
          *param_8 = uVar15 * 2;
        }
      }
      lVar12 = lVar12 + 8;
    } while (lVar14 * 8 != lVar12);
  }
  dVar2 = *param_7;
  if (local_168 != 0) {
    FUN_1400020a8(local_168);
  }
  if ((local_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar2 < 0.0;
}



// FUNCTION 146d929d2 thunk_FUN_146d929d8 body=5 status=ok
// SIG undefined thunk_FUN_146d929d8(void)

bool thunk_FUN_146d929d8(longlong param_1,longlong param_2,undefined8 param_3,double param_4,
                        undefined8 *param_5,undefined8 *param_6,double *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_208 [32];
  undefined8 *puStack_1e8;
  undefined4 *puStack_1e0;
  double *pdStack_1d8;
  double *pdStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double dStack_178;
  double dStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  ulonglong uStack_b0;
  
  uStack_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uStack_158 = *(double *)(param_2 + 0x58) - param_4;
  uStack_150 = *(double *)(param_2 + 0x60) - param_4;
  dStack_148 = *(double *)(param_2 + 0x68) - param_4;
  dStack_140 = *(double *)(param_2 + 0x70) + param_4;
  dStack_138 = *(double *)(param_2 + 0x78) + param_4;
  dStack_130 = param_4 + *(double *)(param_2 + 0x80);
  lStack_128 = param_2;
  uStack_120 = param_3;
  FUN_1400c6592(&uStack_158,&dStack_118);
  dStack_148 = dStack_108;
  uStack_158 = dStack_118;
  dVar2 = uStack_158;
  uStack_150 = dStack_110;
  dVar1 = uStack_150;
  dStack_140 = dStack_100;
  dStack_138 = dStack_f8;
  dStack_130 = dStack_f0;
  uStack_158._0_4_ = SUB84(dStack_118,0);
  uStack_158._4_4_ = (undefined4)((ulonglong)dStack_118 >> 0x20);
  uStack_150._0_4_ = SUB84(dStack_110,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dStack_110 >> 0x20);
  lStack_168 = 0;
  uStack_160 = 0;
  uStack_188 = (undefined4)uStack_158;
  uStack_184 = uStack_158._4_4_;
  uStack_180 = (undefined4)uStack_150;
  uStack_17c = uStack_150._4_4_;
  dStack_178 = dStack_100;
  dStack_170 = dStack_f8;
  uStack_158 = dVar2;
  uStack_150 = dVar1;
  FUN_1401ad93c(param_1);
  lVar6 = lStack_168;
  pdVar16 = &dStack_d0;
  pdVar11 = &dStack_e8;
  pdVar13 = &dStack_100;
  pdStack_1c8 = pdVar16;
  if (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x60) < 0.0)
  {
    pdVar11 = pdVar16;
    pdVar13 = pdVar16;
    pdVar16 = &dStack_100;
    pdStack_1c8 = &dStack_e8;
  }
  dStack_190 = 3.4028234663852886e+38;
  lVar14 = (longlong)(int)uStack_160;
  if (lVar14 != 0) {
    lVar12 = 0;
    do {
      iVar8 = *(int *)(lVar6 + lVar12);
      iVar4 = *(int *)(lVar6 + 4 + lVar12);
      uVar3 = *(ushort *)(param_1 + 0x92);
      uVar15 = (uVar3 - 1) * iVar4 + iVar8;
      if ((((int)uVar15 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar15)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar15) != -1)) {
        uVar10 = (uint)uVar3;
        iVar8 = iVar4 * uVar10 + iVar8;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar2 = *(double *)(param_1 + 0x80);
        dVar1 = *(double *)(param_1 + 0xa0);
        dStack_118 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar10);
        dStack_110 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar10);
        dStack_c0 = *(double *)(param_1 + 0x60);
        dStack_108 = ((double)*(ushort *)(lVar5 + lVar9 * 2) * dVar1 + dVar2) * dStack_c0;
        dStack_100 = ((double)(iVar8 % (int)uVar10) + 1.0) * *(double *)(param_1 + 0x50);
        dStack_f0 = ((double)*(ushort *)(lVar5 + 2 + lVar9 * 2) * dVar1 + dVar2) * dStack_c0;
        dStack_e0 = ((double)(iVar8 / (int)uVar10) + 1.0) * *(double *)(param_1 + 0x58);
        dStack_d8 = ((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2) *
                    dStack_c0;
        dStack_c0 = ((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2
                    ) * dStack_c0;
        pdStack_1d8 = &dStack_190;
        puStack_1e0 = &uStack_1c0;
        puStack_1e8 = &uStack_1a8;
        dStack_f8 = dStack_110;
        dStack_e8 = dStack_118;
        dStack_d0 = dStack_100;
        dStack_c8 = dStack_e0;
        cVar7 = FUN_146da0b78(&lStack_128,&dStack_118,pdVar13,pdVar16);
        if ((cVar7 != '\0') && (dStack_190 < *param_7)) {
          *param_7 = dStack_190;
          param_5[2] = uStack_198;
          *param_5 = uStack_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = uStack_1b0;
          *(undefined4 *)param_6 = uStack_1c0;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_1bc;
          *(undefined4 *)(param_6 + 1) = uStack_1b8;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_1b4;
          *param_8 = uVar15 * 2;
        }
        pdStack_1d8 = &dStack_190;
        puStack_1e0 = &uStack_1c0;
        puStack_1e8 = &uStack_1a8;
        cVar7 = FUN_146da0b78(&lStack_128,&dStack_118,pdStack_1c8,pdVar11);
        if ((cVar7 != '\0') && (dStack_190 < *param_7)) {
          *param_7 = dStack_190;
          param_5[2] = uStack_198;
          *param_5 = uStack_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = uStack_1b0;
          *param_6 = CONCAT44(uStack_1bc,uStack_1c0);
          param_6[1] = CONCAT44(uStack_1b4,uStack_1b8);
          *param_8 = uVar15 * 2;
        }
      }
      lVar12 = lVar12 + 8;
    } while (lVar14 * 8 != lVar12);
  }
  dVar2 = *param_7;
  if (lStack_168 != 0) {
    FUN_1400020a8(lStack_168);
  }
  if ((uStack_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar2 < 0.0;
}



// FUNCTION 146d929d8 FUN_146d929d8 body=1302 status=ok
// SIG undefined FUN_146d929d8(void)

bool FUN_146d929d8(longlong param_1,longlong param_2,undefined8 param_3,double param_4,
                  undefined8 *param_5,undefined8 *param_6,double *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 *local_1e0;
  double *local_1d8;
  double *local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  double dStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  longlong local_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_158 = *(double *)(param_2 + 0x58) - param_4;
  uStack_150 = *(double *)(param_2 + 0x60) - param_4;
  local_148 = *(double *)(param_2 + 0x68) - param_4;
  local_140 = *(double *)(param_2 + 0x70) + param_4;
  dStack_138 = *(double *)(param_2 + 0x78) + param_4;
  local_130 = param_4 + *(double *)(param_2 + 0x80);
  local_128 = param_2;
  local_120 = param_3;
  FUN_1400c6592(&local_158,&local_118);
  local_148 = local_108;
  local_158 = local_118;
  dVar2 = local_158;
  uStack_150 = dStack_110;
  dVar1 = uStack_150;
  local_140 = local_100;
  dStack_138 = dStack_f8;
  local_130 = local_f0;
  local_158._0_4_ = SUB84(local_118,0);
  local_158._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
  uStack_150._0_4_ = SUB84(dStack_110,0);
  uStack_150._4_4_ = (undefined4)((ulonglong)dStack_110 >> 0x20);
  local_168 = 0;
  uStack_160 = 0;
  local_188 = (undefined4)local_158;
  uStack_184 = local_158._4_4_;
  uStack_180 = (undefined4)uStack_150;
  uStack_17c = uStack_150._4_4_;
  local_178 = local_100;
  dStack_170 = dStack_f8;
  local_158 = dVar2;
  uStack_150 = dVar1;
  FUN_1401ad93c(param_1);
  lVar6 = local_168;
  pdVar16 = &local_d0;
  pdVar11 = &local_e8;
  pdVar13 = &local_100;
  local_1c8 = pdVar16;
  if (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x60) < 0.0)
  {
    pdVar11 = pdVar16;
    pdVar13 = pdVar16;
    pdVar16 = &local_100;
    local_1c8 = &local_e8;
  }
  local_190 = 3.4028234663852886e+38;
  lVar14 = (longlong)(int)uStack_160;
  if (lVar14 != 0) {
    lVar12 = 0;
    do {
      iVar8 = *(int *)(lVar6 + lVar12);
      iVar4 = *(int *)(lVar6 + 4 + lVar12);
      uVar3 = *(ushort *)(param_1 + 0x92);
      uVar15 = (uVar3 - 1) * iVar4 + iVar8;
      if ((((int)uVar15 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar15)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar15) != -1)) {
        uVar10 = (uint)uVar3;
        iVar8 = iVar4 * uVar10 + iVar8;
        lVar5 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar2 = *(double *)(param_1 + 0x80);
        dVar1 = *(double *)(param_1 + 0xa0);
        local_118 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar10);
        dStack_110 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar10);
        local_c0 = *(double *)(param_1 + 0x60);
        local_108 = ((double)*(ushort *)(lVar5 + lVar9 * 2) * dVar1 + dVar2) * local_c0;
        local_100 = ((double)(iVar8 % (int)uVar10) + 1.0) * *(double *)(param_1 + 0x50);
        local_f0 = ((double)*(ushort *)(lVar5 + 2 + lVar9 * 2) * dVar1 + dVar2) * local_c0;
        local_e0 = ((double)(iVar8 / (int)uVar10) + 1.0) * *(double *)(param_1 + 0x58);
        local_d8 = ((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2) *
                   local_c0;
        local_c0 = ((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar1 + dVar2)
                   * local_c0;
        local_1d8 = &local_190;
        local_1e0 = &local_1c0;
        local_1e8 = &local_1a8;
        dStack_f8 = dStack_110;
        local_e8 = local_118;
        local_d0 = local_100;
        local_c8 = local_e0;
        cVar7 = FUN_146da0b78(&local_128,&local_118,pdVar13,pdVar16);
        if ((cVar7 != '\0') && (local_190 < *param_7)) {
          *param_7 = local_190;
          param_5[2] = local_198;
          *param_5 = local_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = local_1b0;
          *(undefined4 *)param_6 = local_1c0;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_1bc;
          *(undefined4 *)(param_6 + 1) = uStack_1b8;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_1b4;
          *param_8 = uVar15 * 2;
        }
        local_1d8 = &local_190;
        local_1e0 = &local_1c0;
        local_1e8 = &local_1a8;
        cVar7 = FUN_146da0b78(&local_128,&local_118,local_1c8,pdVar11);
        if ((cVar7 != '\0') && (local_190 < *param_7)) {
          *param_7 = local_190;
          param_5[2] = local_198;
          *param_5 = local_1a8;
          param_5[1] = uStack_1a0;
          param_6[2] = local_1b0;
          *param_6 = CONCAT44(uStack_1bc,local_1c0);
          param_6[1] = CONCAT44(uStack_1b4,uStack_1b8);
          *param_8 = uVar15 * 2;
        }
      }
      lVar12 = lVar12 + 8;
    } while (lVar14 * 8 != lVar12);
  }
  dVar2 = *param_7;
  if (local_168 != 0) {
    FUN_1400020a8(local_168);
  }
  if ((local_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar2 < 0.0;
}



// FUNCTION 146d92ef0 thunk_FUN_146d92ef6 body=5 status=ok
// SIG undefined thunk_FUN_146d92ef6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong thunk_FUN_146d92ef6(longlong param_1,longlong param_2,double *param_3,double param_4,
                             undefined8 *param_5)

{
  int *piVar1;
  double dVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  char cVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar23;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  undefined1 auVar33 [16];
  float fVar35;
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  double dVar39;
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auStack_278 [32];
  undefined8 *puStack_258;
  float fStack_24c;
  undefined1 auStack_248 [8];
  float fStack_240;
  float fStack_23c;
  undefined1 auStack_238 [8];
  float fStack_230;
  float fStack_22c;
  undefined1 auStack_228 [16];
  double dStack_218;
  double adStack_210 [4];
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  int *piStack_1b8;
  undefined8 uStack_1b0;
  double adStack_1a8 [3];
  double adStack_190 [4];
  double *pdStack_170;
  double *pdStack_168;
  double dStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  ulonglong uStack_f0;
  
  uStack_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  pdStack_168 = &dStack_160;
  adStack_1a8[0] = *(double *)(param_2 + 0x58) - param_4;
  adStack_1a8[1] = *(double *)(param_2 + 0x60) - param_4;
  adStack_1a8[2] = *(double *)(param_2 + 0x68) - param_4;
  adStack_190[0] = *(double *)(param_2 + 0x70) + param_4;
  adStack_190[1] = *(double *)(param_2 + 0x78) + param_4;
  adStack_190[2] = param_4 + *(double *)(param_2 + 0x80);
  adStack_190[3] = (double)param_2;
  pdStack_170 = param_3;
  dStack_160 = param_4;
  FUN_1400c6592(adStack_1a8,&uStack_158);
  adStack_1a8[2] = uStack_148;
  adStack_1a8[0] = uStack_158;
  adStack_1a8[1] = uStack_150;
  adStack_190[2] = uStack_130;
  adStack_190[0] = uStack_140;
  adStack_190[1] = uStack_138;
  piStack_1b8 = (int *)0x0;
  uStack_1b0 = 0;
  auStack_238._0_4_ = (undefined4)uStack_158;
  auStack_238._4_4_ = (undefined4)uStack_150;
  auStack_248._0_4_ = (undefined4)uStack_140;
  auStack_248._4_4_ = (undefined4)uStack_138;
  fStack_230 = (float)uStack_148;
  fStack_22c = 0.0;
  fStack_240 = (float)uStack_130;
  fStack_23c = 0.0;
  adStack_210[3] = uStack_158;
  dStack_1f0 = uStack_150;
  dStack_1e8 = uStack_140;
  dStack_1e0 = uStack_138;
  auStack_1d8 = _auStack_238;
  auStack_1c8 = _auStack_248;
  cVar6 = FUN_144947e24(param_1);
  if (cVar6 != '\0') {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
      param_5[1] = 0;
      uVar14 = 0;
      param_5[2] = 0;
      param_5[6] = 0xffefffffffffffff;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 0;
      if ((longlong)(int)uStack_1b0 != 0) {
        piVar1 = piStack_1b8 + (longlong)(int)uStack_1b0 * 2;
        uVar14 = 0;
        piVar13 = piStack_1b8;
        do {
          uVar3 = *(ushort *)(param_1 + 0x92);
          uVar12 = (uint)uVar3;
          iVar9 = piVar13[1] * uVar12 + *piVar13;
          dStack_100 = *(double *)(param_1 + 0x80);
          lVar11 = *(longlong *)(param_1 + 0x20);
          lVar10 = (longlong)iVar9;
          dVar18 = *(double *)(param_1 + 0xa0);
          dVar17 = (double)*(ushort *)(lVar11 + lVar10 * 2) * dVar18 + dStack_100;
          dVar23 = (double)*(ushort *)(lVar11 + 2 + lVar10 * 2) * dVar18 + dStack_100;
          dVar39 = (double)*(ushort *)(lVar11 + ((ulonglong)uVar3 + lVar10) * 2) * dVar18 +
                   dStack_100;
          dStack_100 = (double)*(ushort *)(lVar11 + 2 + ((ulonglong)uVar3 + lVar10) * 2) * dVar18 +
                       dStack_100;
          dVar18 = dVar39;
          if (dStack_100 <= dVar39) {
            dVar18 = dStack_100;
          }
          dVar2 = dVar23;
          if (dVar18 <= dVar23) {
            dVar2 = dVar18;
          }
          adStack_210[2] = dVar17;
          if (dVar2 <= dVar17) {
            adStack_210[2] = dVar2;
          }
          dVar18 = dVar39;
          if (dVar39 <= dStack_100) {
            dVar18 = dStack_100;
          }
          dVar2 = dVar23;
          if (dVar23 <= dVar18) {
            dVar2 = dVar18;
          }
          dVar18 = dVar17;
          if (dVar17 <= dVar2) {
            dVar18 = dVar2;
          }
          uStack_158 = *(double *)(param_1 + 0x50) * (double)(iVar9 % (int)uVar12);
          uStack_150 = (double)(iVar9 / (int)uVar12) * *(double *)(param_1 + 0x58);
          dVar2 = *(double *)(param_1 + 0x60);
          uStack_148 = dVar17 * dVar2;
          uStack_140 = ((double)(iVar9 % (int)uVar12) + 1.0) * *(double *)(param_1 + 0x50);
          uStack_138 = uStack_150;
          uStack_130 = dVar23 * dVar2;
          uStack_128 = uStack_158;
          dStack_108 = ((double)(iVar9 / (int)uVar12) + 1.0) * *(double *)(param_1 + 0x58);
          uStack_120 = dStack_108;
          dStack_118 = dVar39 * dVar2;
          dStack_110 = uStack_140;
          dStack_100 = dStack_100 * dVar2;
          dVar18 = dVar18 * dVar2;
          adStack_210[2] = adStack_210[2] * dVar2;
          dStack_218 = adStack_210[2];
          if (dVar18 <= adStack_210[2]) {
            dStack_218 = dVar18;
          }
          auStack_228._8_8_ = uStack_150;
          if (dStack_108 <= uStack_150) {
            auStack_228._8_8_ = dStack_108;
          }
          auStack_228._0_8_ = uStack_158;
          if (uStack_140 <= uStack_158) {
            auStack_228._0_8_ = uStack_140;
          }
          if (adStack_210[2] <= dVar18) {
            adStack_210[2] = dVar18;
          }
          adStack_210[1] = uStack_150;
          if (uStack_150 <= dStack_108) {
            adStack_210[1] = dStack_108;
          }
          adStack_210[0] = uStack_158;
          if (uStack_158 <= uStack_140) {
            adStack_210[0] = uStack_140;
          }
          lVar11 = -3;
          do {
            if ((adStack_190[lVar11 + 3] <= adStack_210[lVar11] &&
                 adStack_210[lVar11] != adStack_190[lVar11 + 3]) ||
               (adStack_210[lVar11 + 3] <= adStack_190[lVar11] &&
                adStack_190[lVar11] != adStack_210[lVar11 + 3])) goto LAB_146d93383;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0);
          if (((int)*(uint *)(param_1 + 0x48) < 1) ||
             ((uVar12 = (uVar3 - 1) * piVar13[1] + *piVar13, uVar12 < *(uint *)(param_1 + 0x48) &&
              (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar12) != -1)))) {
            puStack_258 = param_5;
            bVar7 = FUN_146da1232(adStack_190 + 3,&uStack_158,&uStack_140,&dStack_110);
            puStack_258 = param_5;
            bVar8 = FUN_146da1232(adStack_190 + 3,&uStack_158,&dStack_110,&uStack_128);
            uVar14 = (ulonglong)(byte)((byte)uVar14 | bVar8 | bVar7);
          }
LAB_146d93383:
          piVar13 = piVar13 + 2;
        } while (piVar13 != piVar1);
      }
      goto LAB_146d93783;
    }
    lVar11 = *(longlong *)(param_2 + 0x88);
    dVar18 = *(double *)(lVar11 + 0x30) * *(double *)(param_2 + 0x30);
    dVar23 = *(double *)(lVar11 + 0x28) * *(double *)(param_2 + 0x28);
    dVar17 = *(double *)(lVar11 + 0x20) * *(double *)(param_2 + 0x20);
    auVar36._0_4_ = (float)dVar18;
    auVar36._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar36._8_8_ = 0;
    auVar41._0_4_ = (float)dVar23;
    auVar41._4_4_ = (int)((ulonglong)dVar23 >> 0x20);
    auVar41._8_8_ = 0;
    auVar34._0_4_ = (float)dVar17;
    auVar34._4_4_ = (int)((ulonglong)dVar17 >> 0x20);
    auVar34._8_8_ = 0;
    auVar33 = insertps(auVar34,auVar41,0x1c);
    auStack_228 = insertps(auVar33,auVar36,0x28);
    fVar15 = (float)param_3[2];
    fVar21 = (float)param_3[3];
    fVar32 = (float)*param_3;
    fVar35 = (float)param_3[1];
    fVar16 = fVar32 * fVar32 + fVar35 * fVar35;
    fVar22 = fVar15 * fVar15 + fVar21 * fVar21;
    auVar43._0_4_ = fVar22 + fVar16;
    auVar43._4_4_ = fVar22 + fVar16;
    auVar43._8_4_ = fVar16 + fVar22;
    auVar43._12_4_ = fVar16 + fVar22;
    auVar33._4_4_ = -(uint)(1e-08 <= auVar43._4_4_);
    auVar33._0_4_ = -(uint)(1e-08 <= auVar43._0_4_);
    auVar33._8_4_ = -(uint)(1e-08 <= auVar43._8_4_);
    auVar33._12_4_ = -(uint)(1e-08 <= auVar43._12_4_);
    auVar36 = sqrtps(auVar43,auVar43);
    auVar36 = divps(_DAT_1499314a0,auVar36);
    auVar44._0_4_ = auVar36._0_4_ * fVar32 * -1.0;
    auVar44._4_4_ = auVar36._4_4_ * fVar35 * -1.0;
    auVar44._8_4_ = auVar36._8_4_ * fVar15 * -1.0;
    auVar44._12_4_ = auVar36._12_4_ * fVar21 * 1.0;
    auVar36 = blendvps(_DAT_149f51f60,auVar44,auVar33);
    if ((longlong)(int)uStack_1b0 != 0) {
      fStack_24c = (float)(double)(-(ulonglong)(0.0 < *(double *)(lVar11 + 0x10)) &
                                  *(ulonglong *)(param_2 + 0x10));
      dVar18 = param_3[6];
      dVar17 = param_3[4];
      dVar23 = param_3[5];
      piVar1 = piStack_1b8 + (longlong)(int)uStack_1b0 * 2;
      fVar15 = auVar36._0_4_;
      fVar16 = auVar36._4_4_;
      fVar21 = auVar36._8_4_;
      fVar22 = auVar36._12_4_;
      piVar13 = piStack_1b8;
      do {
        uVar3 = *(ushort *)(param_1 + 0x92);
        uVar12 = (uint)uVar3;
        iVar9 = piVar13[1] * uVar12 + *piVar13;
        dVar39 = *(double *)(param_1 + 0x80);
        lVar11 = *(longlong *)(param_1 + 0x20);
        lVar10 = (longlong)iVar9;
        dVar2 = *(double *)(param_1 + 0xa0);
        uVar4 = *(ushort *)(lVar11 + ((ulonglong)uVar3 + lVar10) * 2);
        dVar29 = (double)*(ushort *)(lVar11 + lVar10 * 2) * dVar2 + dVar39;
        auVar30._0_4_ = (float)dVar29;
        auVar30._4_8_ = (ulonglong)dVar29 >> 0x20;
        auVar30._12_4_ = 0;
        fVar38 = (float)((double)*(ushort *)(lVar11 + 2 + lVar10 * 2) * dVar2 + dVar39);
        fVar35 = (float)((double)uVar4 * dVar2 + dVar39);
        fVar40 = (float)(iVar9 / (int)uVar12);
        fVar32 = (float)(iVar9 % (int)uVar12);
        fVar42 = (float)((double)*(ushort *)(lVar11 + 2 + ((ulonglong)uVar3 + lVar10) * 2) * dVar2 +
                        dVar39);
        auVar36 = insertps(ZEXT416((uint)fVar32),ZEXT416((uint)fVar40),0x1c);
        auVar43 = insertps(auVar36,auVar30,0x20);
        auVar33 = insertps(ZEXT416((uint)(fVar32 + 1.0)),ZEXT416((uint)fVar40),0x1c);
        auVar44 = insertps(auVar33,ZEXT416((uint)fVar38),0x20);
        auVar33 = insertps(ZEXT416((uint)fVar32),ZEXT416((uint)(fVar40 + 1.0)),0x1c);
        auVar34 = insertps(auVar33,ZEXT416((uint)fVar35),0x20);
        auVar33 = insertps(ZEXT416((uint)(fVar32 + 1.0)),ZEXT416((uint)(fVar40 + 1.0)),0x1c);
        auVar5._4_4_ = unaff_XMM13_Db;
        auVar5._0_4_ = fVar42;
        auVar5._8_4_ = unaff_XMM13_Dc;
        auVar5._12_4_ = unaff_XMM13_Dd;
        auVar41 = insertps(auVar33,auVar5,0x20);
        fVar32 = fVar35;
        if (fVar42 <= fVar35) {
          fVar32 = fVar42;
        }
        fVar40 = fVar38;
        if (fVar32 <= fVar38) {
          fVar40 = fVar32;
        }
        fVar32 = auVar30._0_4_;
        if (fVar40 <= auVar30._0_4_) {
          fVar32 = fVar40;
        }
        auVar37._4_4_ = (int)((ulonglong)dVar29 >> 0x20);
        auVar37._0_4_ = fVar32;
        auVar37._8_8_ = 0;
        if (fVar35 <= fVar42) {
          fVar35 = fVar42;
        }
        if (fVar38 <= fVar35) {
          fVar38 = fVar35;
        }
        if (auVar30._0_4_ <= fVar38) {
          auVar30._0_4_ = fVar38;
          auVar30._12_4_ = 0;
        }
        auVar33 = insertps(auVar33,auVar30,0x20);
        auVar36 = insertps(auVar36,auVar37,0x20);
        fVar32 = *(float *)(param_1 + 0x70);
        fVar35 = *(float *)(param_1 + 0x74);
        fVar38 = *(float *)(param_1 + 0x78);
        fVar40 = *(float *)(param_1 + 0x7c);
        uStack_158 = (double)CONCAT44(auVar43._4_4_ * fVar35,auVar43._0_4_ * fVar32);
        uStack_150 = (double)CONCAT44(auVar43._12_4_ * fVar40,auVar43._8_4_ * fVar38);
        uStack_148 = (double)CONCAT44(auVar44._4_4_ * fVar35,auVar44._0_4_ * fVar32);
        uStack_140 = (double)CONCAT44(auVar44._12_4_ * fVar40,auVar44._8_4_ * fVar38);
        uStack_138 = (double)CONCAT44(auVar34._4_4_ * fVar35,auVar34._0_4_ * fVar32);
        uStack_130 = (double)CONCAT44(auVar34._12_4_ * fVar40,auVar34._8_4_ * fVar38);
        uStack_128 = (double)CONCAT44(auVar41._4_4_ * fVar35,auVar41._0_4_ * fVar32);
        uStack_120 = (double)CONCAT44(auVar41._12_4_ * fVar40,auVar41._8_4_ * fVar38);
        auVar19._0_8_ = CONCAT44(auVar36._4_4_ * fVar35,auVar36._0_4_ * fVar32);
        auVar19._8_4_ = auVar36._8_4_ * fVar38;
        auVar19._12_4_ = auVar36._12_4_ * fVar40;
        auVar24._0_4_ = auVar33._0_4_ * fVar32;
        auVar24._4_4_ = auVar33._4_4_ * fVar35;
        auVar24._8_4_ = auVar33._8_4_ * fVar38;
        auVar24._12_4_ = auVar33._12_4_ * fVar40;
        auVar31._8_4_ = auVar19._8_4_;
        auVar31._0_8_ = auVar19._0_8_;
        auVar31._12_4_ = auVar19._12_4_;
        auVar33 = minps(auVar31,auVar24);
        auVar36 = maxps(auVar19,auVar24);
        auVar20._4_4_ = -(uint)(auVar36._4_4_ < (float)auStack_238._4_4_);
        auVar20._0_4_ = -(uint)(auVar36._0_4_ < (float)auStack_238._0_4_);
        auVar20._8_4_ = -(uint)(auVar36._8_4_ < fStack_230);
        auVar20._12_4_ = -(uint)(auVar36._12_4_ < fStack_22c);
        auVar25._4_4_ = -(uint)((float)auStack_248._4_4_ < auVar33._4_4_);
        auVar25._0_4_ = -(uint)((float)auStack_248._0_4_ < auVar33._0_4_);
        auVar25._8_4_ = -(uint)(fStack_240 < auVar33._8_4_);
        auVar25._12_4_ = -(uint)(fStack_23c < auVar33._12_4_);
        iVar9 = movmskps(iVar9 / (int)uVar12,auVar25 | auVar20);
        if ((iVar9 == 0) &&
           (((int)*(uint *)(param_1 + 0x48) < 1 ||
            ((uVar12 = (uVar3 - 1) * piVar13[1] + *piVar13, uVar12 < *(uint *)(param_1 + 0x48) &&
             (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar12) != -1)))))) {
          lVar11 = 0;
          do {
            fVar32 = *(float *)((longlong)&uStack_158 + lVar11) - (float)dVar17;
            fVar35 = *(float *)((longlong)&uStack_158 + lVar11 + 4) - (float)dVar23;
            fVar38 = *(float *)((longlong)&uStack_150 + lVar11) - (float)dVar18;
            fVar40 = *(float *)((longlong)&uStack_150 + lVar11 + 4) - 0.0;
            fVar42 = fVar35 * fVar15 - fVar16 * fVar32;
            fVar26 = fVar38 * fVar16 - fVar21 * fVar35;
            fVar27 = fVar32 * fVar21 - fVar15 * fVar38;
            fVar28 = fVar40 * fVar22 - fVar22 * fVar40;
            fVar42 = fVar42 + fVar42;
            fVar26 = fVar26 + fVar26;
            fVar27 = fVar27 + fVar27;
            fVar28 = fVar28 + fVar28;
            *(float *)((longlong)&uStack_158 + lVar11) =
                 (fVar42 * fVar16 - fVar27 * fVar21) + fVar22 * fVar26 + fVar32;
            *(float *)((longlong)&uStack_158 + lVar11 + 4) =
                 (fVar26 * fVar21 - fVar42 * fVar15) + fVar22 * fVar27 + fVar35;
            *(float *)((longlong)&uStack_150 + lVar11) =
                 (fVar27 * fVar15 - fVar26 * fVar16) + fVar22 * fVar42 + fVar38;
            *(float *)((longlong)&uStack_150 + lVar11 + 4) =
                 (fVar28 * fVar22 - fVar28 * fVar22) + fVar22 * fVar28 + fVar40;
            lVar11 = lVar11 + 0x10;
          } while (lVar11 != 0x40);
          puStack_258 = (undefined8 *)CONCAT44(puStack_258._4_4_,fStack_24c);
          cVar6 = FUN_140685390(&uStack_158,&uStack_148,&uStack_128,auStack_228);
          if (cVar6 == '\0') {
            puStack_258 = (undefined8 *)CONCAT44(puStack_258._4_4_,fStack_24c);
            cVar6 = FUN_140685390(&uStack_158,&uStack_128,&uStack_138,auStack_228);
            if (cVar6 == '\0') goto LAB_146d9369b;
          }
          uVar14 = CONCAT71((uint7)(byte)(uVar4 >> 8),1);
          goto LAB_146d93783;
        }
LAB_146d9369b:
        piVar13 = piVar13 + 2;
      } while (piVar13 != piVar1);
    }
  }
  uVar14 = 0;
LAB_146d93783:
  if (piStack_1b8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((uStack_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffffffffff01;
}



// FUNCTION 146d92ef6 FUN_146d92ef6 body=2346 status=ok
// SIG undefined FUN_146d92ef6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146d92ef6(longlong param_1,longlong param_2,double *param_3,double param_4,
                       undefined8 *param_5)

{
  int *piVar1;
  double dVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  char cVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar23;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  undefined1 auVar33 [16];
  float fVar35;
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  double dVar39;
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auStack_278 [32];
  undefined8 *local_258;
  float local_24c;
  undefined1 local_248 [8];
  float fStack_240;
  float fStack_23c;
  undefined1 local_238 [8];
  float fStack_230;
  float fStack_22c;
  undefined1 local_228 [16];
  double local_218;
  double local_210 [4];
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  int *local_1b8;
  undefined8 uStack_1b0;
  double local_1a8 [3];
  double local_190 [4];
  double *local_170;
  double *local_168;
  double local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_168 = &local_160;
  local_1a8[0] = *(double *)(param_2 + 0x58) - param_4;
  local_1a8[1] = *(double *)(param_2 + 0x60) - param_4;
  local_1a8[2] = *(double *)(param_2 + 0x68) - param_4;
  local_190[0] = *(double *)(param_2 + 0x70) + param_4;
  local_190[1] = *(double *)(param_2 + 0x78) + param_4;
  local_190[2] = param_4 + *(double *)(param_2 + 0x80);
  local_190[3] = (double)param_2;
  local_170 = param_3;
  local_160 = param_4;
  FUN_1400c6592(local_1a8,&local_158);
  local_1a8[2] = local_148;
  local_1a8[0] = local_158;
  local_1a8[1] = uStack_150;
  local_190[2] = uStack_130;
  local_190[0] = uStack_140;
  local_190[1] = uStack_138;
  local_1b8 = (int *)0x0;
  uStack_1b0 = 0;
  local_238._0_4_ = (undefined4)local_158;
  local_238._4_4_ = (undefined4)uStack_150;
  local_248._0_4_ = (undefined4)uStack_140;
  local_248._4_4_ = (undefined4)uStack_138;
  fStack_230 = (float)local_148;
  fStack_22c = 0.0;
  fStack_240 = (float)uStack_130;
  fStack_23c = 0.0;
  local_210[3] = local_158;
  dStack_1f0 = uStack_150;
  local_1e8 = uStack_140;
  dStack_1e0 = uStack_138;
  local_1d8 = _local_238;
  local_1c8 = _local_248;
  cVar6 = FUN_144947e24(param_1);
  if (cVar6 != '\0') {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
      param_5[1] = 0;
      uVar14 = 0;
      param_5[2] = 0;
      param_5[6] = 0xffefffffffffffff;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 0;
      if ((longlong)(int)uStack_1b0 != 0) {
        piVar1 = local_1b8 + (longlong)(int)uStack_1b0 * 2;
        uVar14 = 0;
        piVar13 = local_1b8;
        do {
          uVar3 = *(ushort *)(param_1 + 0x92);
          uVar12 = (uint)uVar3;
          iVar9 = piVar13[1] * uVar12 + *piVar13;
          local_100 = *(double *)(param_1 + 0x80);
          lVar11 = *(longlong *)(param_1 + 0x20);
          lVar10 = (longlong)iVar9;
          dVar18 = *(double *)(param_1 + 0xa0);
          dVar17 = (double)*(ushort *)(lVar11 + lVar10 * 2) * dVar18 + local_100;
          dVar23 = (double)*(ushort *)(lVar11 + 2 + lVar10 * 2) * dVar18 + local_100;
          dVar39 = (double)*(ushort *)(lVar11 + ((ulonglong)uVar3 + lVar10) * 2) * dVar18 +
                   local_100;
          local_100 = (double)*(ushort *)(lVar11 + 2 + ((ulonglong)uVar3 + lVar10) * 2) * dVar18 +
                      local_100;
          dVar18 = dVar39;
          if (local_100 <= dVar39) {
            dVar18 = local_100;
          }
          dVar2 = dVar23;
          if (dVar18 <= dVar23) {
            dVar2 = dVar18;
          }
          local_210[2] = dVar17;
          if (dVar2 <= dVar17) {
            local_210[2] = dVar2;
          }
          dVar18 = dVar39;
          if (dVar39 <= local_100) {
            dVar18 = local_100;
          }
          dVar2 = dVar23;
          if (dVar23 <= dVar18) {
            dVar2 = dVar18;
          }
          dVar18 = dVar17;
          if (dVar17 <= dVar2) {
            dVar18 = dVar2;
          }
          local_158 = *(double *)(param_1 + 0x50) * (double)(iVar9 % (int)uVar12);
          uStack_150 = (double)(iVar9 / (int)uVar12) * *(double *)(param_1 + 0x58);
          dVar2 = *(double *)(param_1 + 0x60);
          local_148 = dVar17 * dVar2;
          uStack_140 = ((double)(iVar9 % (int)uVar12) + 1.0) * *(double *)(param_1 + 0x50);
          uStack_138 = uStack_150;
          uStack_130 = dVar23 * dVar2;
          local_128 = local_158;
          local_108 = ((double)(iVar9 / (int)uVar12) + 1.0) * *(double *)(param_1 + 0x58);
          uStack_120 = local_108;
          local_118 = dVar39 * dVar2;
          local_110 = uStack_140;
          local_100 = local_100 * dVar2;
          dVar18 = dVar18 * dVar2;
          local_210[2] = local_210[2] * dVar2;
          local_218 = local_210[2];
          if (dVar18 <= local_210[2]) {
            local_218 = dVar18;
          }
          local_228._8_8_ = uStack_150;
          if (local_108 <= uStack_150) {
            local_228._8_8_ = local_108;
          }
          local_228._0_8_ = local_158;
          if (uStack_140 <= local_158) {
            local_228._0_8_ = uStack_140;
          }
          if (local_210[2] <= dVar18) {
            local_210[2] = dVar18;
          }
          local_210[1] = uStack_150;
          if (uStack_150 <= local_108) {
            local_210[1] = local_108;
          }
          local_210[0] = local_158;
          if (local_158 <= uStack_140) {
            local_210[0] = uStack_140;
          }
          lVar11 = -3;
          do {
            if ((local_190[lVar11 + 3] <= local_210[lVar11] &&
                 local_210[lVar11] != local_190[lVar11 + 3]) ||
               (local_210[lVar11 + 3] <= local_190[lVar11] &&
                local_190[lVar11] != local_210[lVar11 + 3])) goto LAB_146d93383;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0);
          if (((int)*(uint *)(param_1 + 0x48) < 1) ||
             ((uVar12 = (uVar3 - 1) * piVar13[1] + *piVar13, uVar12 < *(uint *)(param_1 + 0x48) &&
              (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar12) != -1)))) {
            local_258 = param_5;
            bVar7 = FUN_146da1232(local_190 + 3,&local_158,&uStack_140,&local_110);
            local_258 = param_5;
            bVar8 = FUN_146da1232(local_190 + 3,&local_158,&local_110,&local_128);
            uVar14 = (ulonglong)(byte)((byte)uVar14 | bVar8 | bVar7);
          }
LAB_146d93383:
          piVar13 = piVar13 + 2;
        } while (piVar13 != piVar1);
      }
      goto LAB_146d93783;
    }
    lVar11 = *(longlong *)(param_2 + 0x88);
    dVar18 = *(double *)(lVar11 + 0x30) * *(double *)(param_2 + 0x30);
    dVar23 = *(double *)(lVar11 + 0x28) * *(double *)(param_2 + 0x28);
    dVar17 = *(double *)(lVar11 + 0x20) * *(double *)(param_2 + 0x20);
    auVar36._0_4_ = (float)dVar18;
    auVar36._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar36._8_8_ = 0;
    auVar41._0_4_ = (float)dVar23;
    auVar41._4_4_ = (int)((ulonglong)dVar23 >> 0x20);
    auVar41._8_8_ = 0;
    auVar34._0_4_ = (float)dVar17;
    auVar34._4_4_ = (int)((ulonglong)dVar17 >> 0x20);
    auVar34._8_8_ = 0;
    auVar33 = insertps(auVar34,auVar41,0x1c);
    local_228 = insertps(auVar33,auVar36,0x28);
    fVar15 = (float)param_3[2];
    fVar21 = (float)param_3[3];
    fVar32 = (float)*param_3;
    fVar35 = (float)param_3[1];
    fVar16 = fVar32 * fVar32 + fVar35 * fVar35;
    fVar22 = fVar15 * fVar15 + fVar21 * fVar21;
    auVar43._0_4_ = fVar22 + fVar16;
    auVar43._4_4_ = fVar22 + fVar16;
    auVar43._8_4_ = fVar16 + fVar22;
    auVar43._12_4_ = fVar16 + fVar22;
    auVar33._4_4_ = -(uint)(1e-08 <= auVar43._4_4_);
    auVar33._0_4_ = -(uint)(1e-08 <= auVar43._0_4_);
    auVar33._8_4_ = -(uint)(1e-08 <= auVar43._8_4_);
    auVar33._12_4_ = -(uint)(1e-08 <= auVar43._12_4_);
    auVar36 = sqrtps(auVar43,auVar43);
    auVar36 = divps(_DAT_1499314a0,auVar36);
    auVar44._0_4_ = auVar36._0_4_ * fVar32 * -1.0;
    auVar44._4_4_ = auVar36._4_4_ * fVar35 * -1.0;
    auVar44._8_4_ = auVar36._8_4_ * fVar15 * -1.0;
    auVar44._12_4_ = auVar36._12_4_ * fVar21 * 1.0;
    auVar36 = blendvps(_DAT_149f51f60,auVar44,auVar33);
    if ((longlong)(int)uStack_1b0 != 0) {
      local_24c = (float)(double)(-(ulonglong)(0.0 < *(double *)(lVar11 + 0x10)) &
                                 *(ulonglong *)(param_2 + 0x10));
      dVar18 = param_3[6];
      dVar17 = param_3[4];
      dVar23 = param_3[5];
      piVar1 = local_1b8 + (longlong)(int)uStack_1b0 * 2;
      fVar15 = auVar36._0_4_;
      fVar16 = auVar36._4_4_;
      fVar21 = auVar36._8_4_;
      fVar22 = auVar36._12_4_;
      piVar13 = local_1b8;
      do {
        uVar3 = *(ushort *)(param_1 + 0x92);
        uVar12 = (uint)uVar3;
        iVar9 = piVar13[1] * uVar12 + *piVar13;
        dVar39 = *(double *)(param_1 + 0x80);
        lVar11 = *(longlong *)(param_1 + 0x20);
        lVar10 = (longlong)iVar9;
        dVar2 = *(double *)(param_1 + 0xa0);
        uVar4 = *(ushort *)(lVar11 + ((ulonglong)uVar3 + lVar10) * 2);
        dVar29 = (double)*(ushort *)(lVar11 + lVar10 * 2) * dVar2 + dVar39;
        auVar30._0_4_ = (float)dVar29;
        auVar30._4_8_ = (ulonglong)dVar29 >> 0x20;
        auVar30._12_4_ = 0;
        fVar38 = (float)((double)*(ushort *)(lVar11 + 2 + lVar10 * 2) * dVar2 + dVar39);
        fVar35 = (float)((double)uVar4 * dVar2 + dVar39);
        fVar40 = (float)(iVar9 / (int)uVar12);
        fVar32 = (float)(iVar9 % (int)uVar12);
        fVar42 = (float)((double)*(ushort *)(lVar11 + 2 + ((ulonglong)uVar3 + lVar10) * 2) * dVar2 +
                        dVar39);
        auVar36 = insertps(ZEXT416((uint)fVar32),ZEXT416((uint)fVar40),0x1c);
        auVar43 = insertps(auVar36,auVar30,0x20);
        auVar33 = insertps(ZEXT416((uint)(fVar32 + 1.0)),ZEXT416((uint)fVar40),0x1c);
        auVar44 = insertps(auVar33,ZEXT416((uint)fVar38),0x20);
        auVar33 = insertps(ZEXT416((uint)fVar32),ZEXT416((uint)(fVar40 + 1.0)),0x1c);
        auVar34 = insertps(auVar33,ZEXT416((uint)fVar35),0x20);
        auVar33 = insertps(ZEXT416((uint)(fVar32 + 1.0)),ZEXT416((uint)(fVar40 + 1.0)),0x1c);
        auVar5._4_4_ = unaff_XMM13_Db;
        auVar5._0_4_ = fVar42;
        auVar5._8_4_ = unaff_XMM13_Dc;
        auVar5._12_4_ = unaff_XMM13_Dd;
        auVar41 = insertps(auVar33,auVar5,0x20);
        fVar32 = fVar35;
        if (fVar42 <= fVar35) {
          fVar32 = fVar42;
        }
        fVar40 = fVar38;
        if (fVar32 <= fVar38) {
          fVar40 = fVar32;
        }
        fVar32 = auVar30._0_4_;
        if (fVar40 <= auVar30._0_4_) {
          fVar32 = fVar40;
        }
        auVar37._4_4_ = (int)((ulonglong)dVar29 >> 0x20);
        auVar37._0_4_ = fVar32;
        auVar37._8_8_ = 0;
        if (fVar35 <= fVar42) {
          fVar35 = fVar42;
        }
        if (fVar38 <= fVar35) {
          fVar38 = fVar35;
        }
        if (auVar30._0_4_ <= fVar38) {
          auVar30._0_4_ = fVar38;
          auVar30._12_4_ = 0;
        }
        auVar33 = insertps(auVar33,auVar30,0x20);
        auVar36 = insertps(auVar36,auVar37,0x20);
        fVar32 = *(float *)(param_1 + 0x70);
        fVar35 = *(float *)(param_1 + 0x74);
        fVar38 = *(float *)(param_1 + 0x78);
        fVar40 = *(float *)(param_1 + 0x7c);
        local_158 = (double)CONCAT44(auVar43._4_4_ * fVar35,auVar43._0_4_ * fVar32);
        uStack_150 = (double)CONCAT44(auVar43._12_4_ * fVar40,auVar43._8_4_ * fVar38);
        local_148 = (double)CONCAT44(auVar44._4_4_ * fVar35,auVar44._0_4_ * fVar32);
        uStack_140 = (double)CONCAT44(auVar44._12_4_ * fVar40,auVar44._8_4_ * fVar38);
        uStack_138 = (double)CONCAT44(auVar34._4_4_ * fVar35,auVar34._0_4_ * fVar32);
        uStack_130 = (double)CONCAT44(auVar34._12_4_ * fVar40,auVar34._8_4_ * fVar38);
        local_128 = (double)CONCAT44(auVar41._4_4_ * fVar35,auVar41._0_4_ * fVar32);
        uStack_120 = (double)CONCAT44(auVar41._12_4_ * fVar40,auVar41._8_4_ * fVar38);
        auVar19._0_8_ = CONCAT44(auVar36._4_4_ * fVar35,auVar36._0_4_ * fVar32);
        auVar19._8_4_ = auVar36._8_4_ * fVar38;
        auVar19._12_4_ = auVar36._12_4_ * fVar40;
        auVar24._0_4_ = auVar33._0_4_ * fVar32;
        auVar24._4_4_ = auVar33._4_4_ * fVar35;
        auVar24._8_4_ = auVar33._8_4_ * fVar38;
        auVar24._12_4_ = auVar33._12_4_ * fVar40;
        auVar31._8_4_ = auVar19._8_4_;
        auVar31._0_8_ = auVar19._0_8_;
        auVar31._12_4_ = auVar19._12_4_;
        auVar33 = minps(auVar31,auVar24);
        auVar36 = maxps(auVar19,auVar24);
        auVar20._4_4_ = -(uint)(auVar36._4_4_ < (float)local_238._4_4_);
        auVar20._0_4_ = -(uint)(auVar36._0_4_ < (float)local_238._0_4_);
        auVar20._8_4_ = -(uint)(auVar36._8_4_ < fStack_230);
        auVar20._12_4_ = -(uint)(auVar36._12_4_ < fStack_22c);
        auVar25._4_4_ = -(uint)((float)local_248._4_4_ < auVar33._4_4_);
        auVar25._0_4_ = -(uint)((float)local_248._0_4_ < auVar33._0_4_);
        auVar25._8_4_ = -(uint)(fStack_240 < auVar33._8_4_);
        auVar25._12_4_ = -(uint)(fStack_23c < auVar33._12_4_);
        iVar9 = movmskps(iVar9 / (int)uVar12,auVar25 | auVar20);
        if ((iVar9 == 0) &&
           (((int)*(uint *)(param_1 + 0x48) < 1 ||
            ((uVar12 = (uVar3 - 1) * piVar13[1] + *piVar13, uVar12 < *(uint *)(param_1 + 0x48) &&
             (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar12) != -1)))))) {
          lVar11 = 0;
          do {
            fVar32 = *(float *)((longlong)&local_158 + lVar11) - (float)dVar17;
            fVar35 = *(float *)((longlong)&local_158 + lVar11 + 4) - (float)dVar23;
            fVar38 = *(float *)((longlong)&uStack_150 + lVar11) - (float)dVar18;
            fVar40 = *(float *)((longlong)&uStack_150 + lVar11 + 4) - 0.0;
            fVar42 = fVar35 * fVar15 - fVar16 * fVar32;
            fVar26 = fVar38 * fVar16 - fVar21 * fVar35;
            fVar27 = fVar32 * fVar21 - fVar15 * fVar38;
            fVar28 = fVar40 * fVar22 - fVar22 * fVar40;
            fVar42 = fVar42 + fVar42;
            fVar26 = fVar26 + fVar26;
            fVar27 = fVar27 + fVar27;
            fVar28 = fVar28 + fVar28;
            *(float *)((longlong)&local_158 + lVar11) =
                 (fVar42 * fVar16 - fVar27 * fVar21) + fVar22 * fVar26 + fVar32;
            *(float *)((longlong)&local_158 + lVar11 + 4) =
                 (fVar26 * fVar21 - fVar42 * fVar15) + fVar22 * fVar27 + fVar35;
            *(float *)((longlong)&uStack_150 + lVar11) =
                 (fVar27 * fVar15 - fVar26 * fVar16) + fVar22 * fVar42 + fVar38;
            *(float *)((longlong)&uStack_150 + lVar11 + 4) =
                 (fVar28 * fVar22 - fVar28 * fVar22) + fVar22 * fVar28 + fVar40;
            lVar11 = lVar11 + 0x10;
          } while (lVar11 != 0x40);
          local_258 = (undefined8 *)CONCAT44(local_258._4_4_,local_24c);
          cVar6 = FUN_140685390(&local_158,&local_148,&local_128,local_228);
          if (cVar6 == '\0') {
            local_258 = (undefined8 *)CONCAT44(local_258._4_4_,local_24c);
            cVar6 = FUN_140685390(&local_158,&local_128,&uStack_138,local_228);
            if (cVar6 == '\0') goto LAB_146d9369b;
          }
          uVar14 = CONCAT71((uint7)(byte)(uVar4 >> 8),1);
          goto LAB_146d93783;
        }
LAB_146d9369b:
        piVar13 = piVar13 + 2;
      } while (piVar13 != piVar1);
    }
  }
  uVar14 = 0;
LAB_146d93783:
  if (local_1b8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffffffffff01;
}



// FUNCTION 146d93822 thunk_FUN_146d93828 body=5 status=ok
// SIG undefined thunk_FUN_146d93828(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong thunk_FUN_146d93828(longlong param_1,longlong param_2,double *param_3,double param_4,
                             undefined8 *param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  char cVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  double dVar35;
  undefined1 auVar36 [16];
  float fVar37;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auStack_278 [32];
  undefined8 *puStack_258;
  undefined1 auStack_248 [8];
  float fStack_240;
  float fStack_23c;
  undefined1 auStack_238 [8];
  float fStack_230;
  float fStack_22c;
  double adStack_228 [3];
  double adStack_210 [4];
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  int *piStack_1b8;
  undefined8 uStack_1b0;
  double adStack_1a8 [3];
  double adStack_190 [4];
  double *pdStack_170;
  double *pdStack_168;
  double dStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  ulonglong uStack_f0;
  
  uStack_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  pdStack_168 = &dStack_160;
  adStack_1a8[0] = *(double *)(param_2 + 0x58) - param_4;
  adStack_1a8[1] = *(double *)(param_2 + 0x60) - param_4;
  adStack_1a8[2] = *(double *)(param_2 + 0x68) - param_4;
  adStack_190[0] = *(double *)(param_2 + 0x70) + param_4;
  adStack_190[1] = *(double *)(param_2 + 0x78) + param_4;
  adStack_190[2] = param_4 + *(double *)(param_2 + 0x80);
  adStack_190[3] = (double)param_2;
  pdStack_170 = param_3;
  dStack_160 = param_4;
  FUN_1400c6592(adStack_1a8,&uStack_158);
  adStack_1a8[2] = uStack_148;
  adStack_1a8[0] = uStack_158;
  adStack_1a8[1] = uStack_150;
  adStack_190[2] = uStack_130;
  adStack_190[0] = uStack_140;
  adStack_190[1] = uStack_138;
  piStack_1b8 = (int *)0x0;
  uStack_1b0 = 0;
  auStack_238._4_4_ = (float)uStack_150;
  auStack_238._0_4_ = (float)uStack_158;
  fStack_230 = (float)uStack_148;
  fStack_22c = 0.0;
  auStack_1d8._4_4_ = (float)uStack_150;
  auStack_1d8._0_4_ = (float)uStack_158;
  auStack_1d8._8_4_ = (float)uStack_148;
  auStack_1d8._12_4_ = 0;
  auStack_248._4_4_ = (float)uStack_138;
  auStack_248._0_4_ = (float)uStack_140;
  fStack_240 = (float)uStack_130;
  fStack_23c = 0.0;
  auStack_1c8._4_4_ = (float)uStack_138;
  auStack_1c8._0_4_ = (float)uStack_140;
  auStack_1c8._8_4_ = (float)uStack_130;
  auStack_1c8._12_4_ = 0;
  adStack_210[3] = uStack_158;
  dStack_1f0 = uStack_150;
  dStack_1e8 = uStack_140;
  dStack_1e0 = uStack_138;
  cVar7 = FUN_144947e24(param_1);
  if (cVar7 != '\0') {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
      param_5[1] = 0;
      uVar15 = 0;
      param_5[2] = 0;
      param_5[6] = 0xffefffffffffffff;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 0;
      if ((longlong)(int)uStack_1b0 != 0) {
        piVar1 = piStack_1b8 + (longlong)(int)uStack_1b0 * 2;
        uVar15 = 0;
        piVar14 = piStack_1b8;
        do {
          uVar4 = *(ushort *)(param_1 + 0x92);
          uVar13 = (uint)uVar4;
          iVar10 = piVar14[1] * uVar13 + *piVar14;
          dStack_100 = *(double *)(param_1 + 0x80);
          lVar12 = *(longlong *)(param_1 + 0x20);
          lVar11 = (longlong)iVar10;
          dVar2 = *(double *)(param_1 + 0xa0);
          dVar18 = (double)*(ushort *)(lVar12 + lVar11 * 2) * dVar2 + dStack_100;
          dVar22 = (double)*(ushort *)(lVar12 + 2 + lVar11 * 2) * dVar2 + dStack_100;
          dVar35 = (double)*(ushort *)(lVar12 + ((ulonglong)uVar4 + lVar11) * 2) * dVar2 +
                   dStack_100;
          dStack_100 = (double)*(ushort *)(lVar12 + 2 + ((ulonglong)uVar4 + lVar11) * 2) * dVar2 +
                       dStack_100;
          dVar2 = dVar35;
          if (dStack_100 <= dVar35) {
            dVar2 = dStack_100;
          }
          dVar3 = dVar22;
          if (dVar2 <= dVar22) {
            dVar3 = dVar2;
          }
          adStack_210[2] = dVar18;
          if (dVar3 <= dVar18) {
            adStack_210[2] = dVar3;
          }
          dVar2 = dVar35;
          if (dVar35 <= dStack_100) {
            dVar2 = dStack_100;
          }
          dVar3 = dVar22;
          if (dVar22 <= dVar2) {
            dVar3 = dVar2;
          }
          dVar2 = dVar18;
          if (dVar18 <= dVar3) {
            dVar2 = dVar3;
          }
          uStack_158 = *(double *)(param_1 + 0x50) * (double)(iVar10 % (int)uVar13);
          uStack_150 = (double)(iVar10 / (int)uVar13) * *(double *)(param_1 + 0x58);
          dVar3 = *(double *)(param_1 + 0x60);
          uStack_148 = dVar18 * dVar3;
          uStack_140 = ((double)(iVar10 % (int)uVar13) + 1.0) * *(double *)(param_1 + 0x50);
          uStack_138 = uStack_150;
          uStack_130 = dVar22 * dVar3;
          uStack_128 = uStack_158;
          dStack_108 = ((double)(iVar10 / (int)uVar13) + 1.0) * *(double *)(param_1 + 0x58);
          uStack_120 = dStack_108;
          dStack_118 = dVar35 * dVar3;
          dStack_110 = uStack_140;
          dStack_100 = dStack_100 * dVar3;
          dVar2 = dVar2 * dVar3;
          adStack_210[2] = adStack_210[2] * dVar3;
          adStack_228[2] = adStack_210[2];
          if (dVar2 <= adStack_210[2]) {
            adStack_228[2] = dVar2;
          }
          adStack_228[1] = uStack_150;
          if (dStack_108 <= uStack_150) {
            adStack_228[1] = dStack_108;
          }
          adStack_228[0] = uStack_158;
          if (uStack_140 <= uStack_158) {
            adStack_228[0] = uStack_140;
          }
          if (adStack_210[2] <= dVar2) {
            adStack_210[2] = dVar2;
          }
          adStack_210[1] = uStack_150;
          if (uStack_150 <= dStack_108) {
            adStack_210[1] = dStack_108;
          }
          adStack_210[0] = uStack_158;
          if (uStack_158 <= uStack_140) {
            adStack_210[0] = uStack_140;
          }
          lVar12 = -3;
          do {
            if ((adStack_190[lVar12 + 3] <= adStack_210[lVar12] &&
                 adStack_210[lVar12] != adStack_190[lVar12 + 3]) ||
               (adStack_210[lVar12 + 3] <= adStack_190[lVar12] &&
                adStack_190[lVar12] != adStack_210[lVar12 + 3])) goto LAB_146d93cb5;
            lVar12 = lVar12 + 1;
          } while (lVar12 != 0);
          if (((int)*(uint *)(param_1 + 0x48) < 1) ||
             ((uVar13 = (uVar4 - 1) * piVar14[1] + *piVar14, uVar13 < *(uint *)(param_1 + 0x48) &&
              (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar13) != -1)))) {
            puStack_258 = param_5;
            bVar8 = FUN_146da13ee(adStack_190 + 3,&uStack_158,&uStack_140,&dStack_110);
            puStack_258 = param_5;
            bVar9 = FUN_146da13ee(adStack_190 + 3,&uStack_158,&dStack_110,&uStack_128);
            uVar15 = (ulonglong)(byte)((byte)uVar15 | bVar9 | bVar8);
          }
LAB_146d93cb5:
          piVar14 = piVar14 + 2;
        } while (piVar14 != piVar1);
      }
      goto LAB_146d9404c;
    }
    adStack_228[0] = 0.0;
    adStack_228[1] = 0.0;
    FUN_146d71a4a(adStack_228,param_2);
    fVar16 = (float)param_3[2];
    fVar19 = (float)param_3[3];
    fVar21 = (float)*param_3;
    fVar25 = (float)param_3[1];
    fVar17 = fVar21 * fVar21 + fVar25 * fVar25;
    fVar20 = fVar16 * fVar16 + fVar19 * fVar19;
    auVar30._0_4_ = fVar20 + fVar17;
    auVar30._4_4_ = fVar20 + fVar17;
    auVar30._8_4_ = fVar17 + fVar20;
    auVar30._12_4_ = fVar17 + fVar20;
    auVar36._4_4_ = -(uint)(1e-08 <= auVar30._4_4_);
    auVar36._0_4_ = -(uint)(1e-08 <= auVar30._0_4_);
    auVar36._8_4_ = -(uint)(1e-08 <= auVar30._8_4_);
    auVar36._12_4_ = -(uint)(1e-08 <= auVar30._12_4_);
    auVar30 = sqrtps(auVar30,auVar30);
    auVar30 = divps(_DAT_1499314a0,auVar30);
    auVar33._0_4_ = auVar30._0_4_ * fVar21 * -1.0;
    auVar33._4_4_ = auVar30._4_4_ * fVar25 * -1.0;
    auVar33._8_4_ = auVar30._8_4_ * fVar16 * -1.0;
    auVar33._12_4_ = auVar30._12_4_ * fVar19 * 1.0;
    auVar36 = blendvps(_DAT_149f51f60,auVar33,auVar36);
    if ((longlong)(int)uStack_1b0 != 0) {
      dVar2 = param_3[6];
      dVar18 = param_3[4];
      dVar22 = param_3[5];
      piVar1 = piStack_1b8 + (longlong)(int)uStack_1b0 * 2;
      fVar16 = auVar36._0_4_;
      fVar17 = auVar36._4_4_;
      fVar19 = auVar36._8_4_;
      fVar20 = auVar36._12_4_;
      piVar14 = piStack_1b8;
      do {
        uVar4 = *(ushort *)(param_1 + 0x92);
        uVar13 = (uint)uVar4;
        iVar10 = piVar14[1] * uVar13 + *piVar14;
        dVar35 = *(double *)(param_1 + 0x80);
        lVar12 = *(longlong *)(param_1 + 0x20);
        lVar11 = (longlong)iVar10;
        dVar3 = *(double *)(param_1 + 0xa0);
        uVar5 = *(ushort *)(lVar12 + ((ulonglong)uVar4 + lVar11) * 2);
        dVar29 = (double)*(ushort *)(lVar12 + lVar11 * 2) * dVar3 + dVar35;
        auVar31._0_4_ = (float)dVar29;
        auVar31._4_8_ = (ulonglong)dVar29 >> 0x20;
        auVar31._12_4_ = 0;
        fVar34 = (float)((double)*(ushort *)(lVar12 + 2 + lVar11 * 2) * dVar3 + dVar35);
        fVar25 = (float)((double)uVar5 * dVar3 + dVar35);
        fVar40 = (float)(iVar10 / (int)uVar13);
        fVar21 = (float)(iVar10 % (int)uVar13);
        fVar37 = (float)((double)*(ushort *)(lVar12 + 2 + ((ulonglong)uVar4 + lVar11) * 2) * dVar3 +
                        dVar35);
        auVar36 = insertps(ZEXT416((uint)fVar21),ZEXT416((uint)fVar40),0x1c);
        auVar38 = insertps(auVar36,auVar31,0x20);
        auVar30 = insertps(ZEXT416((uint)(fVar21 + 1.0)),ZEXT416((uint)fVar40),0x1c);
        auVar39 = insertps(auVar30,ZEXT416((uint)fVar34),0x20);
        auVar30 = insertps(ZEXT416((uint)fVar21),ZEXT416((uint)(fVar40 + 1.0)),0x1c);
        auVar33 = insertps(auVar30,ZEXT416((uint)fVar25),0x20);
        auVar30 = insertps(ZEXT416((uint)(fVar21 + 1.0)),ZEXT416((uint)(fVar40 + 1.0)),0x1c);
        auVar41._4_4_ = unaff_XMM12_Db;
        auVar41._0_4_ = fVar37;
        auVar41._8_4_ = unaff_XMM12_Dc;
        auVar41._12_4_ = unaff_XMM12_Dd;
        auVar41 = insertps(auVar30,auVar41,0x20);
        fVar21 = fVar25;
        if (fVar37 <= fVar25) {
          fVar21 = fVar37;
        }
        fVar40 = fVar34;
        if (fVar21 <= fVar34) {
          fVar40 = fVar21;
        }
        fVar21 = auVar31._0_4_;
        if (fVar40 <= auVar31._0_4_) {
          fVar21 = fVar40;
        }
        if (fVar25 <= fVar37) {
          fVar25 = fVar37;
        }
        if (fVar34 <= fVar25) {
          fVar34 = fVar25;
        }
        if (auVar31._0_4_ <= fVar34) {
          auVar31._0_4_ = fVar34;
          auVar31._12_4_ = 0;
        }
        auVar30 = insertps(auVar30,auVar31,0x20);
        auVar6._4_4_ = (int)((ulonglong)dVar29 >> 0x20);
        auVar6._0_4_ = fVar21;
        auVar6._8_8_ = 0;
        auVar36 = insertps(auVar36,auVar6,0x20);
        fVar21 = *(float *)(param_1 + 0x70);
        fVar25 = *(float *)(param_1 + 0x74);
        fVar34 = *(float *)(param_1 + 0x78);
        fVar37 = *(float *)(param_1 + 0x7c);
        uStack_158 = (double)CONCAT44(auVar38._4_4_ * fVar25,auVar38._0_4_ * fVar21);
        uStack_150 = (double)CONCAT44(auVar38._12_4_ * fVar37,auVar38._8_4_ * fVar34);
        uStack_148 = (double)CONCAT44(auVar39._4_4_ * fVar25,auVar39._0_4_ * fVar21);
        uStack_140 = (double)CONCAT44(auVar39._12_4_ * fVar37,auVar39._8_4_ * fVar34);
        uStack_138 = (double)CONCAT44(auVar33._4_4_ * fVar25,auVar33._0_4_ * fVar21);
        uStack_130 = (double)CONCAT44(auVar33._12_4_ * fVar37,auVar33._8_4_ * fVar34);
        uStack_128 = (double)CONCAT44(auVar41._4_4_ * fVar25,auVar41._0_4_ * fVar21);
        uStack_120 = (double)CONCAT44(auVar41._12_4_ * fVar37,auVar41._8_4_ * fVar34);
        auVar38._0_8_ = CONCAT44(auVar36._4_4_ * fVar25,auVar36._0_4_ * fVar21);
        auVar38._8_4_ = auVar36._8_4_ * fVar34;
        auVar38._12_4_ = auVar36._12_4_ * fVar37;
        auVar23._0_4_ = auVar30._0_4_ * fVar21;
        auVar23._4_4_ = auVar30._4_4_ * fVar25;
        auVar23._8_4_ = auVar30._8_4_ * fVar34;
        auVar23._12_4_ = auVar30._12_4_ * fVar37;
        auVar32._8_4_ = auVar38._8_4_;
        auVar32._0_8_ = auVar38._0_8_;
        auVar32._12_4_ = auVar38._12_4_;
        auVar30 = minps(auVar32,auVar23);
        auVar36 = maxps(auVar38,auVar23);
        auVar39._4_4_ = -(uint)(auVar36._4_4_ < (float)auStack_238._4_4_);
        auVar39._0_4_ = -(uint)(auVar36._0_4_ < (float)auStack_238._0_4_);
        auVar39._8_4_ = -(uint)(auVar36._8_4_ < fStack_230);
        auVar39._12_4_ = -(uint)(auVar36._12_4_ < fStack_22c);
        auVar24._4_4_ = -(uint)((float)auStack_248._4_4_ < auVar30._4_4_);
        auVar24._0_4_ = -(uint)((float)auStack_248._0_4_ < auVar30._0_4_);
        auVar24._8_4_ = -(uint)(fStack_240 < auVar30._8_4_);
        auVar24._12_4_ = -(uint)(fStack_23c < auVar30._12_4_);
        iVar10 = movmskps(iVar10 / (int)uVar13,auVar24 | auVar39);
        if ((iVar10 == 0) &&
           (((int)*(uint *)(param_1 + 0x48) < 1 ||
            ((uVar13 = (uVar4 - 1) * piVar14[1] + *piVar14, uVar13 < *(uint *)(param_1 + 0x48) &&
             (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar13) != -1)))))) {
          lVar12 = 0;
          do {
            fVar21 = *(float *)((longlong)&uStack_158 + lVar12) - (float)dVar18;
            fVar25 = *(float *)((longlong)&uStack_158 + lVar12 + 4) - (float)dVar22;
            fVar34 = *(float *)((longlong)&uStack_150 + lVar12) - (float)dVar2;
            fVar37 = *(float *)((longlong)&uStack_150 + lVar12 + 4) - 0.0;
            fVar40 = fVar25 * fVar16 - fVar17 * fVar21;
            fVar26 = fVar34 * fVar17 - fVar19 * fVar25;
            fVar27 = fVar21 * fVar19 - fVar16 * fVar34;
            fVar28 = fVar37 * fVar20 - fVar20 * fVar37;
            fVar40 = fVar40 + fVar40;
            fVar26 = fVar26 + fVar26;
            fVar27 = fVar27 + fVar27;
            fVar28 = fVar28 + fVar28;
            *(float *)((longlong)&uStack_158 + lVar12) =
                 (fVar40 * fVar17 - fVar27 * fVar19) + fVar20 * fVar26 + fVar21;
            *(float *)((longlong)&uStack_158 + lVar12 + 4) =
                 (fVar26 * fVar19 - fVar40 * fVar16) + fVar20 * fVar27 + fVar25;
            *(float *)((longlong)&uStack_150 + lVar12) =
                 (fVar27 * fVar16 - fVar26 * fVar17) + fVar20 * fVar40 + fVar34;
            *(float *)((longlong)&uStack_150 + lVar12 + 4) =
                 (fVar28 * fVar20 - fVar28 * fVar20) + fVar20 * fVar28 + fVar37;
            lVar12 = lVar12 + 0x10;
          } while (lVar12 != 0x40);
          cVar7 = FUN_1405cbc66(adStack_228,&uStack_158,&uStack_148,&uStack_128);
          if ((cVar7 != '\0') ||
             (cVar7 = FUN_1405cbc66(adStack_228,&uStack_158,&uStack_128,&uStack_138), cVar7 != '\0')
             ) {
            uVar15 = CONCAT71((uint7)(byte)(uVar5 >> 8),1);
            goto LAB_146d9404c;
          }
        }
        piVar14 = piVar14 + 2;
      } while (piVar14 != piVar1);
    }
  }
  uVar15 = 0;
LAB_146d9404c:
  if (piStack_1b8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((uStack_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffffffffff01;
}



// FUNCTION 146d93828 FUN_146d93828 body=2241 status=ok
// SIG undefined FUN_146d93828(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146d93828(longlong param_1,longlong param_2,double *param_3,double param_4,
                       undefined8 *param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  char cVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  double dVar35;
  undefined1 auVar36 [16];
  float fVar37;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auStack_278 [32];
  undefined8 *local_258;
  undefined1 local_248 [8];
  float fStack_240;
  float fStack_23c;
  undefined1 local_238 [8];
  float fStack_230;
  float fStack_22c;
  double local_228 [3];
  double local_210 [4];
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  int *local_1b8;
  undefined8 uStack_1b0;
  double local_1a8 [3];
  double local_190 [4];
  double *local_170;
  double *local_168;
  double local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_168 = &local_160;
  local_1a8[0] = *(double *)(param_2 + 0x58) - param_4;
  local_1a8[1] = *(double *)(param_2 + 0x60) - param_4;
  local_1a8[2] = *(double *)(param_2 + 0x68) - param_4;
  local_190[0] = *(double *)(param_2 + 0x70) + param_4;
  local_190[1] = *(double *)(param_2 + 0x78) + param_4;
  local_190[2] = param_4 + *(double *)(param_2 + 0x80);
  local_190[3] = (double)param_2;
  local_170 = param_3;
  local_160 = param_4;
  FUN_1400c6592(local_1a8,&local_158);
  local_1a8[2] = local_148;
  local_1a8[0] = local_158;
  local_1a8[1] = uStack_150;
  local_190[2] = uStack_130;
  local_190[0] = uStack_140;
  local_190[1] = uStack_138;
  local_1b8 = (int *)0x0;
  uStack_1b0 = 0;
  local_238._4_4_ = (float)uStack_150;
  local_238._0_4_ = (float)local_158;
  fStack_230 = (float)local_148;
  fStack_22c = 0.0;
  local_1d8._4_4_ = (float)uStack_150;
  local_1d8._0_4_ = (float)local_158;
  local_1d8._8_4_ = (float)local_148;
  local_1d8._12_4_ = 0;
  local_248._4_4_ = (float)uStack_138;
  local_248._0_4_ = (float)uStack_140;
  fStack_240 = (float)uStack_130;
  fStack_23c = 0.0;
  local_1c8._4_4_ = (float)uStack_138;
  local_1c8._0_4_ = (float)uStack_140;
  local_1c8._8_4_ = (float)uStack_130;
  local_1c8._12_4_ = 0;
  local_210[3] = local_158;
  dStack_1f0 = uStack_150;
  local_1e8 = uStack_140;
  dStack_1e0 = uStack_138;
  cVar7 = FUN_144947e24(param_1);
  if (cVar7 != '\0') {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
      param_5[1] = 0;
      uVar15 = 0;
      param_5[2] = 0;
      param_5[6] = 0xffefffffffffffff;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 0;
      if ((longlong)(int)uStack_1b0 != 0) {
        piVar1 = local_1b8 + (longlong)(int)uStack_1b0 * 2;
        uVar15 = 0;
        piVar14 = local_1b8;
        do {
          uVar4 = *(ushort *)(param_1 + 0x92);
          uVar13 = (uint)uVar4;
          iVar10 = piVar14[1] * uVar13 + *piVar14;
          local_100 = *(double *)(param_1 + 0x80);
          lVar12 = *(longlong *)(param_1 + 0x20);
          lVar11 = (longlong)iVar10;
          dVar2 = *(double *)(param_1 + 0xa0);
          dVar18 = (double)*(ushort *)(lVar12 + lVar11 * 2) * dVar2 + local_100;
          dVar22 = (double)*(ushort *)(lVar12 + 2 + lVar11 * 2) * dVar2 + local_100;
          dVar35 = (double)*(ushort *)(lVar12 + ((ulonglong)uVar4 + lVar11) * 2) * dVar2 + local_100
          ;
          local_100 = (double)*(ushort *)(lVar12 + 2 + ((ulonglong)uVar4 + lVar11) * 2) * dVar2 +
                      local_100;
          dVar2 = dVar35;
          if (local_100 <= dVar35) {
            dVar2 = local_100;
          }
          dVar3 = dVar22;
          if (dVar2 <= dVar22) {
            dVar3 = dVar2;
          }
          local_210[2] = dVar18;
          if (dVar3 <= dVar18) {
            local_210[2] = dVar3;
          }
          dVar2 = dVar35;
          if (dVar35 <= local_100) {
            dVar2 = local_100;
          }
          dVar3 = dVar22;
          if (dVar22 <= dVar2) {
            dVar3 = dVar2;
          }
          dVar2 = dVar18;
          if (dVar18 <= dVar3) {
            dVar2 = dVar3;
          }
          local_158 = *(double *)(param_1 + 0x50) * (double)(iVar10 % (int)uVar13);
          uStack_150 = (double)(iVar10 / (int)uVar13) * *(double *)(param_1 + 0x58);
          dVar3 = *(double *)(param_1 + 0x60);
          local_148 = dVar18 * dVar3;
          uStack_140 = ((double)(iVar10 % (int)uVar13) + 1.0) * *(double *)(param_1 + 0x50);
          uStack_138 = uStack_150;
          uStack_130 = dVar22 * dVar3;
          local_128 = local_158;
          local_108 = ((double)(iVar10 / (int)uVar13) + 1.0) * *(double *)(param_1 + 0x58);
          uStack_120 = local_108;
          local_118 = dVar35 * dVar3;
          local_110 = uStack_140;
          local_100 = local_100 * dVar3;
          dVar2 = dVar2 * dVar3;
          local_210[2] = local_210[2] * dVar3;
          local_228[2] = local_210[2];
          if (dVar2 <= local_210[2]) {
            local_228[2] = dVar2;
          }
          local_228[1] = uStack_150;
          if (local_108 <= uStack_150) {
            local_228[1] = local_108;
          }
          local_228[0] = local_158;
          if (uStack_140 <= local_158) {
            local_228[0] = uStack_140;
          }
          if (local_210[2] <= dVar2) {
            local_210[2] = dVar2;
          }
          local_210[1] = uStack_150;
          if (uStack_150 <= local_108) {
            local_210[1] = local_108;
          }
          local_210[0] = local_158;
          if (local_158 <= uStack_140) {
            local_210[0] = uStack_140;
          }
          lVar12 = -3;
          do {
            if ((local_190[lVar12 + 3] <= local_210[lVar12] &&
                 local_210[lVar12] != local_190[lVar12 + 3]) ||
               (local_210[lVar12 + 3] <= local_190[lVar12] &&
                local_190[lVar12] != local_210[lVar12 + 3])) goto LAB_146d93cb5;
            lVar12 = lVar12 + 1;
          } while (lVar12 != 0);
          if (((int)*(uint *)(param_1 + 0x48) < 1) ||
             ((uVar13 = (uVar4 - 1) * piVar14[1] + *piVar14, uVar13 < *(uint *)(param_1 + 0x48) &&
              (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar13) != -1)))) {
            local_258 = param_5;
            bVar8 = FUN_146da13ee(local_190 + 3,&local_158,&uStack_140,&local_110);
            local_258 = param_5;
            bVar9 = FUN_146da13ee(local_190 + 3,&local_158,&local_110,&local_128);
            uVar15 = (ulonglong)(byte)((byte)uVar15 | bVar9 | bVar8);
          }
LAB_146d93cb5:
          piVar14 = piVar14 + 2;
        } while (piVar14 != piVar1);
      }
      goto LAB_146d9404c;
    }
    local_228[0] = 0.0;
    local_228[1] = 0.0;
    FUN_146d71a4a(local_228,param_2);
    fVar16 = (float)param_3[2];
    fVar19 = (float)param_3[3];
    fVar21 = (float)*param_3;
    fVar25 = (float)param_3[1];
    fVar17 = fVar21 * fVar21 + fVar25 * fVar25;
    fVar20 = fVar16 * fVar16 + fVar19 * fVar19;
    auVar30._0_4_ = fVar20 + fVar17;
    auVar30._4_4_ = fVar20 + fVar17;
    auVar30._8_4_ = fVar17 + fVar20;
    auVar30._12_4_ = fVar17 + fVar20;
    auVar36._4_4_ = -(uint)(1e-08 <= auVar30._4_4_);
    auVar36._0_4_ = -(uint)(1e-08 <= auVar30._0_4_);
    auVar36._8_4_ = -(uint)(1e-08 <= auVar30._8_4_);
    auVar36._12_4_ = -(uint)(1e-08 <= auVar30._12_4_);
    auVar30 = sqrtps(auVar30,auVar30);
    auVar30 = divps(_DAT_1499314a0,auVar30);
    auVar33._0_4_ = auVar30._0_4_ * fVar21 * -1.0;
    auVar33._4_4_ = auVar30._4_4_ * fVar25 * -1.0;
    auVar33._8_4_ = auVar30._8_4_ * fVar16 * -1.0;
    auVar33._12_4_ = auVar30._12_4_ * fVar19 * 1.0;
    auVar36 = blendvps(_DAT_149f51f60,auVar33,auVar36);
    if ((longlong)(int)uStack_1b0 != 0) {
      dVar2 = param_3[6];
      dVar18 = param_3[4];
      dVar22 = param_3[5];
      piVar1 = local_1b8 + (longlong)(int)uStack_1b0 * 2;
      fVar16 = auVar36._0_4_;
      fVar17 = auVar36._4_4_;
      fVar19 = auVar36._8_4_;
      fVar20 = auVar36._12_4_;
      piVar14 = local_1b8;
      do {
        uVar4 = *(ushort *)(param_1 + 0x92);
        uVar13 = (uint)uVar4;
        iVar10 = piVar14[1] * uVar13 + *piVar14;
        dVar35 = *(double *)(param_1 + 0x80);
        lVar12 = *(longlong *)(param_1 + 0x20);
        lVar11 = (longlong)iVar10;
        dVar3 = *(double *)(param_1 + 0xa0);
        uVar5 = *(ushort *)(lVar12 + ((ulonglong)uVar4 + lVar11) * 2);
        dVar29 = (double)*(ushort *)(lVar12 + lVar11 * 2) * dVar3 + dVar35;
        auVar31._0_4_ = (float)dVar29;
        auVar31._4_8_ = (ulonglong)dVar29 >> 0x20;
        auVar31._12_4_ = 0;
        fVar34 = (float)((double)*(ushort *)(lVar12 + 2 + lVar11 * 2) * dVar3 + dVar35);
        fVar25 = (float)((double)uVar5 * dVar3 + dVar35);
        fVar40 = (float)(iVar10 / (int)uVar13);
        fVar21 = (float)(iVar10 % (int)uVar13);
        fVar37 = (float)((double)*(ushort *)(lVar12 + 2 + ((ulonglong)uVar4 + lVar11) * 2) * dVar3 +
                        dVar35);
        auVar36 = insertps(ZEXT416((uint)fVar21),ZEXT416((uint)fVar40),0x1c);
        auVar38 = insertps(auVar36,auVar31,0x20);
        auVar30 = insertps(ZEXT416((uint)(fVar21 + 1.0)),ZEXT416((uint)fVar40),0x1c);
        auVar39 = insertps(auVar30,ZEXT416((uint)fVar34),0x20);
        auVar30 = insertps(ZEXT416((uint)fVar21),ZEXT416((uint)(fVar40 + 1.0)),0x1c);
        auVar33 = insertps(auVar30,ZEXT416((uint)fVar25),0x20);
        auVar30 = insertps(ZEXT416((uint)(fVar21 + 1.0)),ZEXT416((uint)(fVar40 + 1.0)),0x1c);
        auVar41._4_4_ = unaff_XMM12_Db;
        auVar41._0_4_ = fVar37;
        auVar41._8_4_ = unaff_XMM12_Dc;
        auVar41._12_4_ = unaff_XMM12_Dd;
        auVar41 = insertps(auVar30,auVar41,0x20);
        fVar21 = fVar25;
        if (fVar37 <= fVar25) {
          fVar21 = fVar37;
        }
        fVar40 = fVar34;
        if (fVar21 <= fVar34) {
          fVar40 = fVar21;
        }
        fVar21 = auVar31._0_4_;
        if (fVar40 <= auVar31._0_4_) {
          fVar21 = fVar40;
        }
        if (fVar25 <= fVar37) {
          fVar25 = fVar37;
        }
        if (fVar34 <= fVar25) {
          fVar34 = fVar25;
        }
        if (auVar31._0_4_ <= fVar34) {
          auVar31._0_4_ = fVar34;
          auVar31._12_4_ = 0;
        }
        auVar30 = insertps(auVar30,auVar31,0x20);
        auVar6._4_4_ = (int)((ulonglong)dVar29 >> 0x20);
        auVar6._0_4_ = fVar21;
        auVar6._8_8_ = 0;
        auVar36 = insertps(auVar36,auVar6,0x20);
        fVar21 = *(float *)(param_1 + 0x70);
        fVar25 = *(float *)(param_1 + 0x74);
        fVar34 = *(float *)(param_1 + 0x78);
        fVar37 = *(float *)(param_1 + 0x7c);
        local_158 = (double)CONCAT44(auVar38._4_4_ * fVar25,auVar38._0_4_ * fVar21);
        uStack_150 = (double)CONCAT44(auVar38._12_4_ * fVar37,auVar38._8_4_ * fVar34);
        local_148 = (double)CONCAT44(auVar39._4_4_ * fVar25,auVar39._0_4_ * fVar21);
        uStack_140 = (double)CONCAT44(auVar39._12_4_ * fVar37,auVar39._8_4_ * fVar34);
        uStack_138 = (double)CONCAT44(auVar33._4_4_ * fVar25,auVar33._0_4_ * fVar21);
        uStack_130 = (double)CONCAT44(auVar33._12_4_ * fVar37,auVar33._8_4_ * fVar34);
        local_128 = (double)CONCAT44(auVar41._4_4_ * fVar25,auVar41._0_4_ * fVar21);
        uStack_120 = (double)CONCAT44(auVar41._12_4_ * fVar37,auVar41._8_4_ * fVar34);
        auVar38._0_8_ = CONCAT44(auVar36._4_4_ * fVar25,auVar36._0_4_ * fVar21);
        auVar38._8_4_ = auVar36._8_4_ * fVar34;
        auVar38._12_4_ = auVar36._12_4_ * fVar37;
        auVar23._0_4_ = auVar30._0_4_ * fVar21;
        auVar23._4_4_ = auVar30._4_4_ * fVar25;
        auVar23._8_4_ = auVar30._8_4_ * fVar34;
        auVar23._12_4_ = auVar30._12_4_ * fVar37;
        auVar32._8_4_ = auVar38._8_4_;
        auVar32._0_8_ = auVar38._0_8_;
        auVar32._12_4_ = auVar38._12_4_;
        auVar30 = minps(auVar32,auVar23);
        auVar36 = maxps(auVar38,auVar23);
        auVar39._4_4_ = -(uint)(auVar36._4_4_ < (float)local_238._4_4_);
        auVar39._0_4_ = -(uint)(auVar36._0_4_ < (float)local_238._0_4_);
        auVar39._8_4_ = -(uint)(auVar36._8_4_ < fStack_230);
        auVar39._12_4_ = -(uint)(auVar36._12_4_ < fStack_22c);
        auVar24._4_4_ = -(uint)((float)local_248._4_4_ < auVar30._4_4_);
        auVar24._0_4_ = -(uint)((float)local_248._0_4_ < auVar30._0_4_);
        auVar24._8_4_ = -(uint)(fStack_240 < auVar30._8_4_);
        auVar24._12_4_ = -(uint)(fStack_23c < auVar30._12_4_);
        iVar10 = movmskps(iVar10 / (int)uVar13,auVar24 | auVar39);
        if ((iVar10 == 0) &&
           (((int)*(uint *)(param_1 + 0x48) < 1 ||
            ((uVar13 = (uVar4 - 1) * piVar14[1] + *piVar14, uVar13 < *(uint *)(param_1 + 0x48) &&
             (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar13) != -1)))))) {
          lVar12 = 0;
          do {
            fVar21 = *(float *)((longlong)&local_158 + lVar12) - (float)dVar18;
            fVar25 = *(float *)((longlong)&local_158 + lVar12 + 4) - (float)dVar22;
            fVar34 = *(float *)((longlong)&uStack_150 + lVar12) - (float)dVar2;
            fVar37 = *(float *)((longlong)&uStack_150 + lVar12 + 4) - 0.0;
            fVar40 = fVar25 * fVar16 - fVar17 * fVar21;
            fVar26 = fVar34 * fVar17 - fVar19 * fVar25;
            fVar27 = fVar21 * fVar19 - fVar16 * fVar34;
            fVar28 = fVar37 * fVar20 - fVar20 * fVar37;
            fVar40 = fVar40 + fVar40;
            fVar26 = fVar26 + fVar26;
            fVar27 = fVar27 + fVar27;
            fVar28 = fVar28 + fVar28;
            *(float *)((longlong)&local_158 + lVar12) =
                 (fVar40 * fVar17 - fVar27 * fVar19) + fVar20 * fVar26 + fVar21;
            *(float *)((longlong)&local_158 + lVar12 + 4) =
                 (fVar26 * fVar19 - fVar40 * fVar16) + fVar20 * fVar27 + fVar25;
            *(float *)((longlong)&uStack_150 + lVar12) =
                 (fVar27 * fVar16 - fVar26 * fVar17) + fVar20 * fVar40 + fVar34;
            *(float *)((longlong)&uStack_150 + lVar12 + 4) =
                 (fVar28 * fVar20 - fVar28 * fVar20) + fVar20 * fVar28 + fVar37;
            lVar12 = lVar12 + 0x10;
          } while (lVar12 != 0x40);
          cVar7 = FUN_1405cbc66(local_228,&local_158,&local_148,&local_128);
          if ((cVar7 != '\0') ||
             (cVar7 = FUN_1405cbc66(local_228,&local_158,&local_128,&uStack_138), cVar7 != '\0')) {
            uVar15 = CONCAT71((uint7)(byte)(uVar5 >> 8),1);
            goto LAB_146d9404c;
          }
        }
        piVar14 = piVar14 + 2;
      } while (piVar14 != piVar1);
    }
  }
  uVar15 = 0;
LAB_146d9404c:
  if (local_1b8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffffffffff01;
}



// FUNCTION 146d940ea thunk_FUN_146d940f0 body=5 status=ok
// SIG undefined thunk_FUN_146d940f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong thunk_FUN_146d940f0(longlong param_1,longlong param_2,double *param_3,double param_4,
                             undefined8 *param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  char cVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar23;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar34;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  double dVar38;
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auStack_298 [32];
  undefined8 *puStack_278;
  float fStack_270;
  float fStack_25c;
  undefined1 auStack_258 [8];
  float fStack_250;
  float fStack_24c;
  undefined1 auStack_248 [8];
  float fStack_240;
  float fStack_23c;
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  double dStack_218;
  double adStack_210 [4];
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  int *piStack_1b8;
  undefined8 uStack_1b0;
  double adStack_1a8 [3];
  double adStack_190 [4];
  double *pdStack_170;
  double *pdStack_168;
  double dStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  ulonglong uStack_f0;
  
  uStack_f0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  pdStack_168 = &dStack_160;
  adStack_1a8[0] = *(double *)(param_2 + 0x58) - param_4;
  adStack_1a8[1] = *(double *)(param_2 + 0x60) - param_4;
  adStack_1a8[2] = *(double *)(param_2 + 0x68) - param_4;
  adStack_190[0] = *(double *)(param_2 + 0x70) + param_4;
  adStack_190[1] = *(double *)(param_2 + 0x78) + param_4;
  adStack_190[2] = param_4 + *(double *)(param_2 + 0x80);
  adStack_190[3] = (double)param_2;
  pdStack_170 = param_3;
  dStack_160 = param_4;
  FUN_1400c6592(adStack_1a8,&uStack_158);
  adStack_1a8[2] = uStack_148;
  adStack_1a8[0] = uStack_158;
  adStack_1a8[1] = uStack_150;
  adStack_190[2] = uStack_130;
  adStack_190[0] = uStack_140;
  adStack_190[1] = uStack_138;
  piStack_1b8 = (int *)0x0;
  uStack_1b0 = 0;
  auStack_248._0_4_ = (undefined4)uStack_158;
  auStack_248._4_4_ = (undefined4)uStack_150;
  auStack_258._0_4_ = (undefined4)uStack_140;
  auStack_258._4_4_ = (undefined4)uStack_138;
  fStack_240 = (float)uStack_148;
  fStack_23c = 0.0;
  fStack_250 = (float)uStack_130;
  fStack_24c = 0.0;
  adStack_210[3] = uStack_158;
  dStack_1f0 = uStack_150;
  dStack_1e8 = uStack_140;
  dStack_1e0 = uStack_138;
  auStack_1d8 = _auStack_248;
  auStack_1c8 = _auStack_258;
  cVar7 = FUN_144947e24(param_1);
  if (cVar7 != '\0') {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
      param_5[1] = 0;
      uVar15 = 0;
      param_5[2] = 0;
      param_5[6] = 0xffefffffffffffff;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 0;
      if ((longlong)(int)uStack_1b0 != 0) {
        piVar1 = piStack_1b8 + (longlong)(int)uStack_1b0 * 2;
        uVar15 = 0;
        piVar14 = piStack_1b8;
        do {
          uVar4 = *(ushort *)(param_1 + 0x92);
          uVar13 = (uint)uVar4;
          iVar10 = piVar14[1] * uVar13 + *piVar14;
          dStack_100 = *(double *)(param_1 + 0x80);
          lVar12 = *(longlong *)(param_1 + 0x20);
          lVar11 = (longlong)iVar10;
          dVar2 = *(double *)(param_1 + 0xa0);
          dVar18 = (double)*(ushort *)(lVar12 + lVar11 * 2) * dVar2 + dStack_100;
          dVar23 = (double)*(ushort *)(lVar12 + 2 + lVar11 * 2) * dVar2 + dStack_100;
          dVar38 = (double)*(ushort *)(lVar12 + ((ulonglong)uVar4 + lVar11) * 2) * dVar2 +
                   dStack_100;
          dStack_100 = (double)*(ushort *)(lVar12 + 2 + ((ulonglong)uVar4 + lVar11) * 2) * dVar2 +
                       dStack_100;
          dVar2 = dVar38;
          if (dStack_100 <= dVar38) {
            dVar2 = dStack_100;
          }
          dVar3 = dVar23;
          if (dVar2 <= dVar23) {
            dVar3 = dVar2;
          }
          adStack_210[2] = dVar18;
          if (dVar3 <= dVar18) {
            adStack_210[2] = dVar3;
          }
          dVar2 = dVar38;
          if (dVar38 <= dStack_100) {
            dVar2 = dStack_100;
          }
          dVar3 = dVar23;
          if (dVar23 <= dVar2) {
            dVar3 = dVar2;
          }
          dVar2 = dVar18;
          if (dVar18 <= dVar3) {
            dVar2 = dVar3;
          }
          uStack_158 = *(double *)(param_1 + 0x50) * (double)(iVar10 % (int)uVar13);
          uStack_150 = (double)(iVar10 / (int)uVar13) * *(double *)(param_1 + 0x58);
          dVar3 = *(double *)(param_1 + 0x60);
          uStack_148 = dVar18 * dVar3;
          uStack_140 = ((double)(iVar10 % (int)uVar13) + 1.0) * *(double *)(param_1 + 0x50);
          uStack_138 = uStack_150;
          uStack_130 = dVar23 * dVar3;
          uStack_128 = uStack_158;
          dStack_108 = ((double)(iVar10 / (int)uVar13) + 1.0) * *(double *)(param_1 + 0x58);
          uStack_120 = dStack_108;
          dStack_118 = dVar38 * dVar3;
          dStack_110 = uStack_140;
          dStack_100 = dStack_100 * dVar3;
          dVar2 = dVar2 * dVar3;
          adStack_210[2] = adStack_210[2] * dVar3;
          dStack_218 = adStack_210[2];
          if (dVar2 <= adStack_210[2]) {
            dStack_218 = dVar2;
          }
          auStack_228._8_8_ = uStack_150;
          if (dStack_108 <= uStack_150) {
            auStack_228._8_8_ = dStack_108;
          }
          auStack_228._0_8_ = uStack_158;
          if (uStack_140 <= uStack_158) {
            auStack_228._0_8_ = uStack_140;
          }
          if (adStack_210[2] <= dVar2) {
            adStack_210[2] = dVar2;
          }
          adStack_210[1] = uStack_150;
          if (uStack_150 <= dStack_108) {
            adStack_210[1] = dStack_108;
          }
          adStack_210[0] = uStack_158;
          if (uStack_158 <= uStack_140) {
            adStack_210[0] = uStack_140;
          }
          lVar12 = -3;
          do {
            if ((adStack_190[lVar12 + 3] <= adStack_210[lVar12] &&
                 adStack_210[lVar12] != adStack_190[lVar12 + 3]) ||
               (adStack_210[lVar12 + 3] <= adStack_190[lVar12] &&
                adStack_190[lVar12] != adStack_210[lVar12 + 3])) goto LAB_146d9458c;
            lVar12 = lVar12 + 1;
          } while (lVar12 != 0);
          if (((int)*(uint *)(param_1 + 0x48) < 1) ||
             ((uVar13 = (uVar4 - 1) * piVar14[1] + *piVar14, uVar13 < *(uint *)(param_1 + 0x48) &&
              (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar13) != -1)))) {
            puStack_278 = param_5;
            bVar8 = FUN_146da15aa(adStack_190 + 3,&uStack_158,&uStack_140,&dStack_110);
            puStack_278 = param_5;
            bVar9 = FUN_146da15aa(adStack_190 + 3,&uStack_158,&dStack_110,&uStack_128);
            uVar15 = (ulonglong)(byte)((byte)uVar15 | bVar9 | bVar8);
          }
LAB_146d9458c:
          piVar14 = piVar14 + 2;
        } while (piVar14 != piVar1);
      }
      goto LAB_146d94a14;
    }
    lVar12 = *(longlong *)(param_2 + 0x88);
    dVar2 = *(double *)(lVar12 + 0x50);
    dVar18 = *(double *)(lVar12 + 0x30) * *(double *)(param_2 + 0x30);
    dVar38 = *(double *)(lVar12 + 0x28) * *(double *)(param_2 + 0x28);
    dVar23 = *(double *)(lVar12 + 0x20) * *(double *)(param_2 + 0x20);
    auVar42._0_4_ = (float)dVar18;
    auVar42._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar42._8_8_ = 0;
    auVar41._0_4_ = (float)dVar38;
    auVar41._4_4_ = (int)((ulonglong)dVar38 >> 0x20);
    auVar41._8_8_ = 0;
    auVar45._0_4_ = (float)dVar23;
    auVar45._4_4_ = (int)((ulonglong)dVar23 >> 0x20);
    auVar45._8_8_ = 0;
    auVar39 = insertps(auVar45,auVar41,0x1c);
    dVar18 = (dVar2 * *(double *)(lVar12 + 0x38) + *(double *)(lVar12 + 0x20)) *
             *(double *)(param_2 + 0x20);
    auVar35._0_4_ = (float)dVar18;
    auVar35._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar35._8_8_ = 0;
    auStack_228 = insertps(auVar39,auVar42,0x28);
    auVar39 = insertps(auVar35,ZEXT416((uint)(float)((*(double *)(lVar12 + 0x40) * dVar2 +
                                                     *(double *)(lVar12 + 0x28)) *
                                                    *(double *)(param_2 + 0x28))),0x1c);
    auStack_238 = insertps(auVar39,ZEXT416((uint)(float)((*(double *)(lVar12 + 0x48) * dVar2 +
                                                         *(double *)(lVar12 + 0x30)) *
                                                        *(double *)(param_2 + 0x30))),0x28);
    fVar16 = (float)param_3[2];
    fVar21 = (float)param_3[3];
    fVar32 = (float)*param_3;
    fVar34 = (float)param_3[1];
    fVar17 = fVar32 * fVar32 + fVar34 * fVar34;
    fVar22 = fVar16 * fVar16 + fVar21 * fVar21;
    auVar33._0_4_ = fVar22 + fVar17;
    auVar33._4_4_ = fVar22 + fVar17;
    auVar33._8_4_ = fVar17 + fVar22;
    auVar33._12_4_ = fVar17 + fVar22;
    auVar39._4_4_ = -(uint)(1e-08 <= auVar33._4_4_);
    auVar39._0_4_ = -(uint)(1e-08 <= auVar33._0_4_);
    auVar39._8_4_ = -(uint)(1e-08 <= auVar33._8_4_);
    auVar39._12_4_ = -(uint)(1e-08 <= auVar33._12_4_);
    auVar35 = sqrtps(auVar33,auVar33);
    auVar35 = divps(_DAT_1499314a0,auVar35);
    auVar44._0_4_ = auVar35._0_4_ * fVar32 * -1.0;
    auVar44._4_4_ = auVar35._4_4_ * fVar34 * -1.0;
    auVar44._8_4_ = auVar35._8_4_ * fVar16 * -1.0;
    auVar44._12_4_ = auVar35._12_4_ * fVar21 * 1.0;
    auVar39 = blendvps(_DAT_149f51f60,auVar44,auVar39);
    if ((longlong)(int)uStack_1b0 != 0) {
      fStack_25c = (float)(double)(-(ulonglong)(0.0 < *(double *)(lVar12 + 0x10)) &
                                  *(ulonglong *)(param_2 + 0x10));
      dVar2 = param_3[6];
      dVar18 = param_3[4];
      dVar23 = param_3[5];
      piVar1 = piStack_1b8 + (longlong)(int)uStack_1b0 * 2;
      fVar16 = auVar39._0_4_;
      fVar17 = auVar39._4_4_;
      fVar21 = auVar39._8_4_;
      fVar22 = auVar39._12_4_;
      piVar14 = piStack_1b8;
      do {
        uVar4 = *(ushort *)(param_1 + 0x92);
        uVar13 = (uint)uVar4;
        iVar10 = piVar14[1] * uVar13 + *piVar14;
        dVar38 = *(double *)(param_1 + 0x80);
        lVar12 = *(longlong *)(param_1 + 0x20);
        lVar11 = (longlong)iVar10;
        dVar3 = *(double *)(param_1 + 0xa0);
        uVar5 = *(ushort *)(lVar12 + 2 + ((ulonglong)uVar4 + lVar11) * 2);
        dVar29 = (double)*(ushort *)(lVar12 + lVar11 * 2) * dVar3 + dVar38;
        auVar30._0_4_ = (float)dVar29;
        auVar30._4_8_ = (ulonglong)dVar29 >> 0x20;
        auVar30._12_4_ = 0;
        fVar37 = (float)((double)*(ushort *)(lVar12 + 2 + lVar11 * 2) * dVar3 + dVar38);
        fVar34 = (float)((double)*(ushort *)(lVar12 + ((ulonglong)uVar4 + lVar11) * 2) * dVar3 +
                        dVar38);
        fVar40 = (float)(iVar10 / (int)uVar13);
        fVar32 = (float)(iVar10 % (int)uVar13);
        fVar43 = (float)((double)uVar5 * dVar3 + dVar38);
        auVar39 = insertps(ZEXT416((uint)fVar32),ZEXT416((uint)fVar40),0x1c);
        auVar44 = insertps(auVar39,auVar30,0x20);
        auVar35 = insertps(ZEXT416((uint)(fVar32 + 1.0)),ZEXT416((uint)fVar40),0x1c);
        auVar45 = insertps(auVar35,ZEXT416((uint)fVar37),0x20);
        auVar35 = insertps(ZEXT416((uint)fVar32),ZEXT416((uint)(fVar40 + 1.0)),0x1c);
        auVar33 = insertps(auVar35,ZEXT416((uint)fVar34),0x20);
        auVar35 = insertps(ZEXT416((uint)(fVar32 + 1.0)),ZEXT416((uint)(fVar40 + 1.0)),0x1c);
        auVar6._4_4_ = unaff_XMM13_Db;
        auVar6._0_4_ = fVar43;
        auVar6._8_4_ = unaff_XMM13_Dc;
        auVar6._12_4_ = unaff_XMM13_Dd;
        auVar42 = insertps(auVar35,auVar6,0x20);
        fVar32 = fVar34;
        if (fVar43 <= fVar34) {
          fVar32 = fVar43;
        }
        fVar40 = fVar37;
        if (fVar32 <= fVar37) {
          fVar40 = fVar32;
        }
        fVar32 = auVar30._0_4_;
        if (fVar40 <= auVar30._0_4_) {
          fVar32 = fVar40;
        }
        auVar36._4_4_ = (int)((ulonglong)dVar29 >> 0x20);
        auVar36._0_4_ = fVar32;
        auVar36._8_8_ = 0;
        if (fVar34 <= fVar43) {
          fVar34 = fVar43;
        }
        if (fVar37 <= fVar34) {
          fVar37 = fVar34;
        }
        if (auVar30._0_4_ <= fVar37) {
          auVar30._0_4_ = fVar37;
          auVar30._12_4_ = 0;
        }
        auVar35 = insertps(auVar35,auVar30,0x20);
        auVar39 = insertps(auVar39,auVar36,0x20);
        fVar32 = *(float *)(param_1 + 0x70);
        fVar34 = *(float *)(param_1 + 0x74);
        fVar37 = *(float *)(param_1 + 0x78);
        fVar40 = *(float *)(param_1 + 0x7c);
        uStack_158 = (double)CONCAT44(auVar44._4_4_ * fVar34,auVar44._0_4_ * fVar32);
        uStack_150 = (double)CONCAT44(auVar44._12_4_ * fVar40,auVar44._8_4_ * fVar37);
        uStack_148 = (double)CONCAT44(auVar45._4_4_ * fVar34,auVar45._0_4_ * fVar32);
        uStack_140 = (double)CONCAT44(auVar45._12_4_ * fVar40,auVar45._8_4_ * fVar37);
        uStack_138 = (double)CONCAT44(auVar33._4_4_ * fVar34,auVar33._0_4_ * fVar32);
        uStack_130 = (double)CONCAT44(auVar33._12_4_ * fVar40,auVar33._8_4_ * fVar37);
        uStack_128 = (double)CONCAT44(auVar42._4_4_ * fVar34,auVar42._0_4_ * fVar32);
        uStack_120 = (double)CONCAT44(auVar42._12_4_ * fVar40,auVar42._8_4_ * fVar37);
        auVar19._0_8_ = CONCAT44(auVar39._4_4_ * fVar34,auVar39._0_4_ * fVar32);
        auVar19._8_4_ = auVar39._8_4_ * fVar37;
        auVar19._12_4_ = auVar39._12_4_ * fVar40;
        auVar24._0_4_ = auVar35._0_4_ * fVar32;
        auVar24._4_4_ = auVar35._4_4_ * fVar34;
        auVar24._8_4_ = auVar35._8_4_ * fVar37;
        auVar24._12_4_ = auVar35._12_4_ * fVar40;
        auVar31._8_4_ = auVar19._8_4_;
        auVar31._0_8_ = auVar19._0_8_;
        auVar31._12_4_ = auVar19._12_4_;
        auVar35 = minps(auVar31,auVar24);
        auVar39 = maxps(auVar19,auVar24);
        auVar20._4_4_ = -(uint)(auVar39._4_4_ < (float)auStack_248._4_4_);
        auVar20._0_4_ = -(uint)(auVar39._0_4_ < (float)auStack_248._0_4_);
        auVar20._8_4_ = -(uint)(auVar39._8_4_ < fStack_240);
        auVar20._12_4_ = -(uint)(auVar39._12_4_ < fStack_23c);
        auVar25._4_4_ = -(uint)((float)auStack_258._4_4_ < auVar35._4_4_);
        auVar25._0_4_ = -(uint)((float)auStack_258._0_4_ < auVar35._0_4_);
        auVar25._8_4_ = -(uint)(fStack_250 < auVar35._8_4_);
        auVar25._12_4_ = -(uint)(fStack_24c < auVar35._12_4_);
        iVar10 = movmskps(iVar10 / (int)uVar13,auVar25 | auVar20);
        if ((iVar10 == 0) &&
           (((int)*(uint *)(param_1 + 0x48) < 1 ||
            ((uVar13 = (uVar4 - 1) * piVar14[1] + *piVar14, uVar13 < *(uint *)(param_1 + 0x48) &&
             (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar13) != -1)))))) {
          lVar12 = 0;
          do {
            fVar32 = *(float *)((longlong)&uStack_158 + lVar12) - (float)dVar18;
            fVar34 = *(float *)((longlong)&uStack_158 + lVar12 + 4) - (float)dVar23;
            fVar37 = *(float *)((longlong)&uStack_150 + lVar12) - (float)dVar2;
            fVar40 = *(float *)((longlong)&uStack_150 + lVar12 + 4) - 0.0;
            fVar43 = fVar34 * fVar16 - fVar17 * fVar32;
            fVar26 = fVar37 * fVar17 - fVar21 * fVar34;
            fVar27 = fVar32 * fVar21 - fVar16 * fVar37;
            fVar28 = fVar40 * fVar22 - fVar22 * fVar40;
            fVar43 = fVar43 + fVar43;
            fVar26 = fVar26 + fVar26;
            fVar27 = fVar27 + fVar27;
            fVar28 = fVar28 + fVar28;
            *(float *)((longlong)&uStack_158 + lVar12) =
                 (fVar43 * fVar17 - fVar27 * fVar21) + fVar22 * fVar26 + fVar32;
            *(float *)((longlong)&uStack_158 + lVar12 + 4) =
                 (fVar26 * fVar21 - fVar43 * fVar16) + fVar22 * fVar27 + fVar34;
            *(float *)((longlong)&uStack_150 + lVar12) =
                 (fVar27 * fVar16 - fVar26 * fVar17) + fVar22 * fVar43 + fVar37;
            *(float *)((longlong)&uStack_150 + lVar12 + 4) =
                 (fVar28 * fVar22 - fVar28 * fVar22) + fVar22 * fVar28 + fVar40;
            lVar12 = lVar12 + 0x10;
          } while (lVar12 != 0x40);
          fStack_270 = fStack_25c;
          puStack_278 = (undefined8 *)auStack_238;
          cVar7 = FUN_1402e7e35(&uStack_158,&uStack_148,&uStack_128,auStack_228);
          if (cVar7 == '\0') {
            fStack_270 = fStack_25c;
            puStack_278 = (undefined8 *)auStack_238;
            cVar7 = FUN_1402e7e35(&uStack_158,&uStack_128,&uStack_138,auStack_228);
            if (cVar7 == '\0') goto LAB_146d94918;
          }
          uVar15 = CONCAT71((uint7)(byte)(uVar5 >> 8),1);
          goto LAB_146d94a14;
        }
LAB_146d94918:
        piVar14 = piVar14 + 2;
      } while (piVar14 != piVar1);
    }
  }
  uVar15 = 0;
LAB_146d94a14:
  if (piStack_1b8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((uStack_f0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffffffffff01;
}



// FUNCTION 146d940f0 FUN_146d940f0 body=2497 status=ok
// SIG undefined FUN_146d940f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146d940f0(longlong param_1,longlong param_2,double *param_3,double param_4,
                       undefined8 *param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  char cVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar23;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar34;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  double dVar38;
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  float local_270;
  float local_25c;
  undefined1 local_258 [8];
  float fStack_250;
  float fStack_24c;
  undefined1 local_248 [8];
  float fStack_240;
  float fStack_23c;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  double local_218;
  double local_210 [4];
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  int *local_1b8;
  undefined8 uStack_1b0;
  double local_1a8 [3];
  double local_190 [4];
  double *local_170;
  double *local_168;
  double local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_168 = &local_160;
  local_1a8[0] = *(double *)(param_2 + 0x58) - param_4;
  local_1a8[1] = *(double *)(param_2 + 0x60) - param_4;
  local_1a8[2] = *(double *)(param_2 + 0x68) - param_4;
  local_190[0] = *(double *)(param_2 + 0x70) + param_4;
  local_190[1] = *(double *)(param_2 + 0x78) + param_4;
  local_190[2] = param_4 + *(double *)(param_2 + 0x80);
  local_190[3] = (double)param_2;
  local_170 = param_3;
  local_160 = param_4;
  FUN_1400c6592(local_1a8,&local_158);
  local_1a8[2] = local_148;
  local_1a8[0] = local_158;
  local_1a8[1] = uStack_150;
  local_190[2] = uStack_130;
  local_190[0] = uStack_140;
  local_190[1] = uStack_138;
  local_1b8 = (int *)0x0;
  uStack_1b0 = 0;
  local_248._0_4_ = (undefined4)local_158;
  local_248._4_4_ = (undefined4)uStack_150;
  local_258._0_4_ = (undefined4)uStack_140;
  local_258._4_4_ = (undefined4)uStack_138;
  fStack_240 = (float)local_148;
  fStack_23c = 0.0;
  fStack_250 = (float)uStack_130;
  fStack_24c = 0.0;
  local_210[3] = local_158;
  dStack_1f0 = uStack_150;
  local_1e8 = uStack_140;
  dStack_1e0 = uStack_138;
  local_1d8 = _local_248;
  local_1c8 = _local_258;
  cVar7 = FUN_144947e24(param_1);
  if (cVar7 != '\0') {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
      param_5[1] = 0;
      uVar15 = 0;
      param_5[2] = 0;
      param_5[6] = 0xffefffffffffffff;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 0;
      if ((longlong)(int)uStack_1b0 != 0) {
        piVar1 = local_1b8 + (longlong)(int)uStack_1b0 * 2;
        uVar15 = 0;
        piVar14 = local_1b8;
        do {
          uVar4 = *(ushort *)(param_1 + 0x92);
          uVar13 = (uint)uVar4;
          iVar10 = piVar14[1] * uVar13 + *piVar14;
          local_100 = *(double *)(param_1 + 0x80);
          lVar12 = *(longlong *)(param_1 + 0x20);
          lVar11 = (longlong)iVar10;
          dVar2 = *(double *)(param_1 + 0xa0);
          dVar18 = (double)*(ushort *)(lVar12 + lVar11 * 2) * dVar2 + local_100;
          dVar23 = (double)*(ushort *)(lVar12 + 2 + lVar11 * 2) * dVar2 + local_100;
          dVar38 = (double)*(ushort *)(lVar12 + ((ulonglong)uVar4 + lVar11) * 2) * dVar2 + local_100
          ;
          local_100 = (double)*(ushort *)(lVar12 + 2 + ((ulonglong)uVar4 + lVar11) * 2) * dVar2 +
                      local_100;
          dVar2 = dVar38;
          if (local_100 <= dVar38) {
            dVar2 = local_100;
          }
          dVar3 = dVar23;
          if (dVar2 <= dVar23) {
            dVar3 = dVar2;
          }
          local_210[2] = dVar18;
          if (dVar3 <= dVar18) {
            local_210[2] = dVar3;
          }
          dVar2 = dVar38;
          if (dVar38 <= local_100) {
            dVar2 = local_100;
          }
          dVar3 = dVar23;
          if (dVar23 <= dVar2) {
            dVar3 = dVar2;
          }
          dVar2 = dVar18;
          if (dVar18 <= dVar3) {
            dVar2 = dVar3;
          }
          local_158 = *(double *)(param_1 + 0x50) * (double)(iVar10 % (int)uVar13);
          uStack_150 = (double)(iVar10 / (int)uVar13) * *(double *)(param_1 + 0x58);
          dVar3 = *(double *)(param_1 + 0x60);
          local_148 = dVar18 * dVar3;
          uStack_140 = ((double)(iVar10 % (int)uVar13) + 1.0) * *(double *)(param_1 + 0x50);
          uStack_138 = uStack_150;
          uStack_130 = dVar23 * dVar3;
          local_128 = local_158;
          local_108 = ((double)(iVar10 / (int)uVar13) + 1.0) * *(double *)(param_1 + 0x58);
          uStack_120 = local_108;
          local_118 = dVar38 * dVar3;
          local_110 = uStack_140;
          local_100 = local_100 * dVar3;
          dVar2 = dVar2 * dVar3;
          local_210[2] = local_210[2] * dVar3;
          local_218 = local_210[2];
          if (dVar2 <= local_210[2]) {
            local_218 = dVar2;
          }
          local_228._8_8_ = uStack_150;
          if (local_108 <= uStack_150) {
            local_228._8_8_ = local_108;
          }
          local_228._0_8_ = local_158;
          if (uStack_140 <= local_158) {
            local_228._0_8_ = uStack_140;
          }
          if (local_210[2] <= dVar2) {
            local_210[2] = dVar2;
          }
          local_210[1] = uStack_150;
          if (uStack_150 <= local_108) {
            local_210[1] = local_108;
          }
          local_210[0] = local_158;
          if (local_158 <= uStack_140) {
            local_210[0] = uStack_140;
          }
          lVar12 = -3;
          do {
            if ((local_190[lVar12 + 3] <= local_210[lVar12] &&
                 local_210[lVar12] != local_190[lVar12 + 3]) ||
               (local_210[lVar12 + 3] <= local_190[lVar12] &&
                local_190[lVar12] != local_210[lVar12 + 3])) goto LAB_146d9458c;
            lVar12 = lVar12 + 1;
          } while (lVar12 != 0);
          if (((int)*(uint *)(param_1 + 0x48) < 1) ||
             ((uVar13 = (uVar4 - 1) * piVar14[1] + *piVar14, uVar13 < *(uint *)(param_1 + 0x48) &&
              (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar13) != -1)))) {
            local_278 = param_5;
            bVar8 = FUN_146da15aa(local_190 + 3,&local_158,&uStack_140,&local_110);
            local_278 = param_5;
            bVar9 = FUN_146da15aa(local_190 + 3,&local_158,&local_110,&local_128);
            uVar15 = (ulonglong)(byte)((byte)uVar15 | bVar9 | bVar8);
          }
LAB_146d9458c:
          piVar14 = piVar14 + 2;
        } while (piVar14 != piVar1);
      }
      goto LAB_146d94a14;
    }
    lVar12 = *(longlong *)(param_2 + 0x88);
    dVar2 = *(double *)(lVar12 + 0x50);
    dVar18 = *(double *)(lVar12 + 0x30) * *(double *)(param_2 + 0x30);
    dVar38 = *(double *)(lVar12 + 0x28) * *(double *)(param_2 + 0x28);
    dVar23 = *(double *)(lVar12 + 0x20) * *(double *)(param_2 + 0x20);
    auVar42._0_4_ = (float)dVar18;
    auVar42._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar42._8_8_ = 0;
    auVar41._0_4_ = (float)dVar38;
    auVar41._4_4_ = (int)((ulonglong)dVar38 >> 0x20);
    auVar41._8_8_ = 0;
    auVar45._0_4_ = (float)dVar23;
    auVar45._4_4_ = (int)((ulonglong)dVar23 >> 0x20);
    auVar45._8_8_ = 0;
    auVar39 = insertps(auVar45,auVar41,0x1c);
    dVar18 = (dVar2 * *(double *)(lVar12 + 0x38) + *(double *)(lVar12 + 0x20)) *
             *(double *)(param_2 + 0x20);
    auVar35._0_4_ = (float)dVar18;
    auVar35._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar35._8_8_ = 0;
    local_228 = insertps(auVar39,auVar42,0x28);
    auVar39 = insertps(auVar35,ZEXT416((uint)(float)((*(double *)(lVar12 + 0x40) * dVar2 +
                                                     *(double *)(lVar12 + 0x28)) *
                                                    *(double *)(param_2 + 0x28))),0x1c);
    local_238 = insertps(auVar39,ZEXT416((uint)(float)((*(double *)(lVar12 + 0x48) * dVar2 +
                                                       *(double *)(lVar12 + 0x30)) *
                                                      *(double *)(param_2 + 0x30))),0x28);
    fVar16 = (float)param_3[2];
    fVar21 = (float)param_3[3];
    fVar32 = (float)*param_3;
    fVar34 = (float)param_3[1];
    fVar17 = fVar32 * fVar32 + fVar34 * fVar34;
    fVar22 = fVar16 * fVar16 + fVar21 * fVar21;
    auVar33._0_4_ = fVar22 + fVar17;
    auVar33._4_4_ = fVar22 + fVar17;
    auVar33._8_4_ = fVar17 + fVar22;
    auVar33._12_4_ = fVar17 + fVar22;
    auVar39._4_4_ = -(uint)(1e-08 <= auVar33._4_4_);
    auVar39._0_4_ = -(uint)(1e-08 <= auVar33._0_4_);
    auVar39._8_4_ = -(uint)(1e-08 <= auVar33._8_4_);
    auVar39._12_4_ = -(uint)(1e-08 <= auVar33._12_4_);
    auVar35 = sqrtps(auVar33,auVar33);
    auVar35 = divps(_DAT_1499314a0,auVar35);
    auVar44._0_4_ = auVar35._0_4_ * fVar32 * -1.0;
    auVar44._4_4_ = auVar35._4_4_ * fVar34 * -1.0;
    auVar44._8_4_ = auVar35._8_4_ * fVar16 * -1.0;
    auVar44._12_4_ = auVar35._12_4_ * fVar21 * 1.0;
    auVar39 = blendvps(_DAT_149f51f60,auVar44,auVar39);
    if ((longlong)(int)uStack_1b0 != 0) {
      local_25c = (float)(double)(-(ulonglong)(0.0 < *(double *)(lVar12 + 0x10)) &
                                 *(ulonglong *)(param_2 + 0x10));
      dVar2 = param_3[6];
      dVar18 = param_3[4];
      dVar23 = param_3[5];
      piVar1 = local_1b8 + (longlong)(int)uStack_1b0 * 2;
      fVar16 = auVar39._0_4_;
      fVar17 = auVar39._4_4_;
      fVar21 = auVar39._8_4_;
      fVar22 = auVar39._12_4_;
      piVar14 = local_1b8;
      do {
        uVar4 = *(ushort *)(param_1 + 0x92);
        uVar13 = (uint)uVar4;
        iVar10 = piVar14[1] * uVar13 + *piVar14;
        dVar38 = *(double *)(param_1 + 0x80);
        lVar12 = *(longlong *)(param_1 + 0x20);
        lVar11 = (longlong)iVar10;
        dVar3 = *(double *)(param_1 + 0xa0);
        uVar5 = *(ushort *)(lVar12 + 2 + ((ulonglong)uVar4 + lVar11) * 2);
        dVar29 = (double)*(ushort *)(lVar12 + lVar11 * 2) * dVar3 + dVar38;
        auVar30._0_4_ = (float)dVar29;
        auVar30._4_8_ = (ulonglong)dVar29 >> 0x20;
        auVar30._12_4_ = 0;
        fVar37 = (float)((double)*(ushort *)(lVar12 + 2 + lVar11 * 2) * dVar3 + dVar38);
        fVar34 = (float)((double)*(ushort *)(lVar12 + ((ulonglong)uVar4 + lVar11) * 2) * dVar3 +
                        dVar38);
        fVar40 = (float)(iVar10 / (int)uVar13);
        fVar32 = (float)(iVar10 % (int)uVar13);
        fVar43 = (float)((double)uVar5 * dVar3 + dVar38);
        auVar39 = insertps(ZEXT416((uint)fVar32),ZEXT416((uint)fVar40),0x1c);
        auVar44 = insertps(auVar39,auVar30,0x20);
        auVar35 = insertps(ZEXT416((uint)(fVar32 + 1.0)),ZEXT416((uint)fVar40),0x1c);
        auVar45 = insertps(auVar35,ZEXT416((uint)fVar37),0x20);
        auVar35 = insertps(ZEXT416((uint)fVar32),ZEXT416((uint)(fVar40 + 1.0)),0x1c);
        auVar33 = insertps(auVar35,ZEXT416((uint)fVar34),0x20);
        auVar35 = insertps(ZEXT416((uint)(fVar32 + 1.0)),ZEXT416((uint)(fVar40 + 1.0)),0x1c);
        auVar6._4_4_ = unaff_XMM13_Db;
        auVar6._0_4_ = fVar43;
        auVar6._8_4_ = unaff_XMM13_Dc;
        auVar6._12_4_ = unaff_XMM13_Dd;
        auVar42 = insertps(auVar35,auVar6,0x20);
        fVar32 = fVar34;
        if (fVar43 <= fVar34) {
          fVar32 = fVar43;
        }
        fVar40 = fVar37;
        if (fVar32 <= fVar37) {
          fVar40 = fVar32;
        }
        fVar32 = auVar30._0_4_;
        if (fVar40 <= auVar30._0_4_) {
          fVar32 = fVar40;
        }
        auVar36._4_4_ = (int)((ulonglong)dVar29 >> 0x20);
        auVar36._0_4_ = fVar32;
        auVar36._8_8_ = 0;
        if (fVar34 <= fVar43) {
          fVar34 = fVar43;
        }
        if (fVar37 <= fVar34) {
          fVar37 = fVar34;
        }
        if (auVar30._0_4_ <= fVar37) {
          auVar30._0_4_ = fVar37;
          auVar30._12_4_ = 0;
        }
        auVar35 = insertps(auVar35,auVar30,0x20);
        auVar39 = insertps(auVar39,auVar36,0x20);
        fVar32 = *(float *)(param_1 + 0x70);
        fVar34 = *(float *)(param_1 + 0x74);
        fVar37 = *(float *)(param_1 + 0x78);
        fVar40 = *(float *)(param_1 + 0x7c);
        local_158 = (double)CONCAT44(auVar44._4_4_ * fVar34,auVar44._0_4_ * fVar32);
        uStack_150 = (double)CONCAT44(auVar44._12_4_ * fVar40,auVar44._8_4_ * fVar37);
        local_148 = (double)CONCAT44(auVar45._4_4_ * fVar34,auVar45._0_4_ * fVar32);
        uStack_140 = (double)CONCAT44(auVar45._12_4_ * fVar40,auVar45._8_4_ * fVar37);
        uStack_138 = (double)CONCAT44(auVar33._4_4_ * fVar34,auVar33._0_4_ * fVar32);
        uStack_130 = (double)CONCAT44(auVar33._12_4_ * fVar40,auVar33._8_4_ * fVar37);
        local_128 = (double)CONCAT44(auVar42._4_4_ * fVar34,auVar42._0_4_ * fVar32);
        uStack_120 = (double)CONCAT44(auVar42._12_4_ * fVar40,auVar42._8_4_ * fVar37);
        auVar19._0_8_ = CONCAT44(auVar39._4_4_ * fVar34,auVar39._0_4_ * fVar32);
        auVar19._8_4_ = auVar39._8_4_ * fVar37;
        auVar19._12_4_ = auVar39._12_4_ * fVar40;
        auVar24._0_4_ = auVar35._0_4_ * fVar32;
        auVar24._4_4_ = auVar35._4_4_ * fVar34;
        auVar24._8_4_ = auVar35._8_4_ * fVar37;
        auVar24._12_4_ = auVar35._12_4_ * fVar40;
        auVar31._8_4_ = auVar19._8_4_;
        auVar31._0_8_ = auVar19._0_8_;
        auVar31._12_4_ = auVar19._12_4_;
        auVar35 = minps(auVar31,auVar24);
        auVar39 = maxps(auVar19,auVar24);
        auVar20._4_4_ = -(uint)(auVar39._4_4_ < (float)local_248._4_4_);
        auVar20._0_4_ = -(uint)(auVar39._0_4_ < (float)local_248._0_4_);
        auVar20._8_4_ = -(uint)(auVar39._8_4_ < fStack_240);
        auVar20._12_4_ = -(uint)(auVar39._12_4_ < fStack_23c);
        auVar25._4_4_ = -(uint)((float)local_258._4_4_ < auVar35._4_4_);
        auVar25._0_4_ = -(uint)((float)local_258._0_4_ < auVar35._0_4_);
        auVar25._8_4_ = -(uint)(fStack_250 < auVar35._8_4_);
        auVar25._12_4_ = -(uint)(fStack_24c < auVar35._12_4_);
        iVar10 = movmskps(iVar10 / (int)uVar13,auVar25 | auVar20);
        if ((iVar10 == 0) &&
           (((int)*(uint *)(param_1 + 0x48) < 1 ||
            ((uVar13 = (uVar4 - 1) * piVar14[1] + *piVar14, uVar13 < *(uint *)(param_1 + 0x48) &&
             (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar13) != -1)))))) {
          lVar12 = 0;
          do {
            fVar32 = *(float *)((longlong)&local_158 + lVar12) - (float)dVar18;
            fVar34 = *(float *)((longlong)&local_158 + lVar12 + 4) - (float)dVar23;
            fVar37 = *(float *)((longlong)&uStack_150 + lVar12) - (float)dVar2;
            fVar40 = *(float *)((longlong)&uStack_150 + lVar12 + 4) - 0.0;
            fVar43 = fVar34 * fVar16 - fVar17 * fVar32;
            fVar26 = fVar37 * fVar17 - fVar21 * fVar34;
            fVar27 = fVar32 * fVar21 - fVar16 * fVar37;
            fVar28 = fVar40 * fVar22 - fVar22 * fVar40;
            fVar43 = fVar43 + fVar43;
            fVar26 = fVar26 + fVar26;
            fVar27 = fVar27 + fVar27;
            fVar28 = fVar28 + fVar28;
            *(float *)((longlong)&local_158 + lVar12) =
                 (fVar43 * fVar17 - fVar27 * fVar21) + fVar22 * fVar26 + fVar32;
            *(float *)((longlong)&local_158 + lVar12 + 4) =
                 (fVar26 * fVar21 - fVar43 * fVar16) + fVar22 * fVar27 + fVar34;
            *(float *)((longlong)&uStack_150 + lVar12) =
                 (fVar27 * fVar16 - fVar26 * fVar17) + fVar22 * fVar43 + fVar37;
            *(float *)((longlong)&uStack_150 + lVar12 + 4) =
                 (fVar28 * fVar22 - fVar28 * fVar22) + fVar22 * fVar28 + fVar40;
            lVar12 = lVar12 + 0x10;
          } while (lVar12 != 0x40);
          local_270 = local_25c;
          local_278 = (undefined8 *)local_238;
          cVar7 = FUN_1402e7e35(&local_158,&local_148,&local_128,local_228);
          if (cVar7 == '\0') {
            local_270 = local_25c;
            local_278 = (undefined8 *)local_238;
            cVar7 = FUN_1402e7e35(&local_158,&local_128,&uStack_138,local_228);
            if (cVar7 == '\0') goto LAB_146d94918;
          }
          uVar15 = CONCAT71((uint7)(byte)(uVar5 >> 8),1);
          goto LAB_146d94a14;
        }
LAB_146d94918:
        piVar14 = piVar14 + 2;
      } while (piVar14 != piVar1);
    }
  }
  uVar15 = 0;
LAB_146d94a14:
  if (local_1b8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffffffffff01;
}



// FUNCTION 146d94ab2 FUN_146d94ab2 body=82 status=ok
// SIG undefined FUN_146d94ab2(void)

void FUN_146d94ab2(void)

{
  FUN_146d94b04();
  return;
}



// FUNCTION 146d94b04 FUN_146d94b04 body=925 status=ok
// SIG undefined FUN_146d94b04(void)

bool FUN_146d94b04(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double param_5,double *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined4 *param_9,double param_10,undefined1 param_11)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_358 [32];
  double *local_338;
  double *local_330;
  undefined1 local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double local_240;
  double dStack_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  local_328 = param_11;
  local_330 = (double *)param_10;
  local_338 = (double *)param_4;
  FUN_146da1c56(&local_228,param_1 + 0x20,param_2,param_3);
  local_248 = *(double *)(param_2 + 0x68);
  local_258 = *(double *)(param_2 + 0x58);
  dStack_250 = *(double *)(param_2 + 0x60);
  local_240 = *(double *)(param_2 + 0x70);
  dStack_238 = *(double *)(param_2 + 0x78);
  local_230 = *(double *)(param_2 + 0x80);
  local_2b8 = *param_3;
  dStack_2b0 = param_3[1];
  local_2a8 = *(undefined4 *)(param_3 + 2);
  uStack_2a4 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_2a0 = *(undefined4 *)(param_3 + 3);
  uStack_29c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0x3ff0000000000000;
  uStack_270 = 0x3ff0000000000000;
  local_268 = 0x3ff0000000000000;
  uStack_260 = 0;
  FUN_1400fd046(&local_258,&local_2e8);
  dVar2 = (local_230 - local_248) * 0.5 + local_248;
  dVar6 = (dStack_238 - dStack_250) * 0.5 + dStack_250;
  dVar9 = (local_240 - local_258) * 0.5 + local_258;
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = param_3[2];
  dVar1 = param_3[3];
  dVar10 = dVar9 * dVar5 - dVar3 * dVar2;
  dVar7 = dVar6 * dVar3 - dVar4 * dVar9;
  dVar8 = dVar2 * dVar4 - dVar5 * dVar6;
  dVar8 = dVar8 + dVar8;
  dVar10 = dVar10 + dVar10;
  dVar7 = dVar7 + dVar7;
  local_308 = (dVar7 * dVar4 - dVar10 * dVar5) + dVar1 * dVar8 + dVar9 + param_3[4];
  dStack_300 = (dVar5 * dVar8 - dVar3 * dVar7) + param_3[3] * dVar10 + dVar6 + param_3[5];
  local_2f8 = dVar7 * dVar1 + dVar2 + (dVar10 * dVar3 - dVar8 * dVar4) + param_3[6];
  local_310 = (local_2c0 - local_2d8) * 0.5 + param_10;
  local_318 = (local_2c8 - local_2e0) * 0.5 + param_10;
  local_320 = (local_2d0 - local_2e8) * 0.5 + param_10;
  local_338 = &local_320;
  local_330 = &local_228;
  FUN_146da202a(param_1,&local_308,param_4,param_5);
  if (local_228 <= param_5) {
    *param_6 = local_228;
    param_7[2] = local_210;
    *param_7 = local_220;
    param_7[1] = uStack_218;
    param_8[2] = local_1f8;
    *param_8 = local_208;
    param_8[1] = uStack_200;
    *param_9 = local_1f0;
  }
  if ((local_b0 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return local_228 <= param_5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d94ea2 FUN_146d94ea2 body=82 status=ok
// SIG undefined FUN_146d94ea2(void)

void FUN_146d94ea2(void)

{
  FUN_146d94ef4();
  return;
}



// FUNCTION 146d94ef4 FUN_146d94ef4 body=925 status=ok
// SIG undefined FUN_146d94ef4(void)

bool FUN_146d94ef4(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double param_5,double *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined4 *param_9,double param_10,undefined1 param_11)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_358 [32];
  double *local_338;
  double *local_330;
  undefined1 local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double local_240;
  double dStack_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  local_328 = param_11;
  local_330 = (double *)param_10;
  local_338 = (double *)param_4;
  FUN_146da315e(&local_228,param_1 + 0x20,param_2,param_3);
  local_248 = *(double *)(param_2 + 0x68);
  local_258 = *(double *)(param_2 + 0x58);
  dStack_250 = *(double *)(param_2 + 0x60);
  local_240 = *(double *)(param_2 + 0x70);
  dStack_238 = *(double *)(param_2 + 0x78);
  local_230 = *(double *)(param_2 + 0x80);
  local_2b8 = *param_3;
  dStack_2b0 = param_3[1];
  local_2a8 = *(undefined4 *)(param_3 + 2);
  uStack_2a4 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_2a0 = *(undefined4 *)(param_3 + 3);
  uStack_29c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0x3ff0000000000000;
  uStack_270 = 0x3ff0000000000000;
  local_268 = 0x3ff0000000000000;
  uStack_260 = 0;
  FUN_1400fd046(&local_258,&local_2e8);
  dVar2 = (local_230 - local_248) * 0.5 + local_248;
  dVar6 = (dStack_238 - dStack_250) * 0.5 + dStack_250;
  dVar9 = (local_240 - local_258) * 0.5 + local_258;
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = param_3[2];
  dVar1 = param_3[3];
  dVar10 = dVar9 * dVar5 - dVar3 * dVar2;
  dVar7 = dVar6 * dVar3 - dVar4 * dVar9;
  dVar8 = dVar2 * dVar4 - dVar5 * dVar6;
  dVar8 = dVar8 + dVar8;
  dVar10 = dVar10 + dVar10;
  dVar7 = dVar7 + dVar7;
  local_308 = (dVar7 * dVar4 - dVar10 * dVar5) + dVar1 * dVar8 + dVar9 + param_3[4];
  dStack_300 = (dVar5 * dVar8 - dVar3 * dVar7) + param_3[3] * dVar10 + dVar6 + param_3[5];
  local_2f8 = dVar7 * dVar1 + dVar2 + (dVar10 * dVar3 - dVar8 * dVar4) + param_3[6];
  local_310 = (local_2c0 - local_2d8) * 0.5 + param_10;
  local_318 = (local_2c8 - local_2e0) * 0.5 + param_10;
  local_320 = (local_2d0 - local_2e8) * 0.5 + param_10;
  local_338 = &local_320;
  local_330 = &local_228;
  FUN_146da3532(param_1,&local_308,param_4,param_5);
  if (local_228 <= param_5) {
    *param_6 = local_228;
    param_7[2] = local_210;
    *param_7 = local_220;
    param_7[1] = uStack_218;
    param_8[2] = local_1f8;
    *param_8 = local_208;
    param_8[1] = uStack_200;
    *param_9 = local_1f0;
  }
  if ((local_b0 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return local_228 <= param_5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d95292 FUN_146d95292 body=82 status=ok
// SIG undefined FUN_146d95292(void)

void FUN_146d95292(void)

{
  FUN_146d952e4();
  return;
}



// FUNCTION 146d952e4 FUN_146d952e4 body=925 status=ok
// SIG undefined FUN_146d952e4(void)

bool FUN_146d952e4(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double param_5,double *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined4 *param_9,double param_10,undefined1 param_11)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_358 [32];
  double *local_338;
  double *local_330;
  undefined1 local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double local_240;
  double dStack_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  local_328 = param_11;
  local_330 = (double *)param_10;
  local_338 = (double *)param_4;
  FUN_146da464e(&local_228,param_1 + 0x20,param_2,param_3);
  local_248 = *(double *)(param_2 + 0x68);
  local_258 = *(double *)(param_2 + 0x58);
  dStack_250 = *(double *)(param_2 + 0x60);
  local_240 = *(double *)(param_2 + 0x70);
  dStack_238 = *(double *)(param_2 + 0x78);
  local_230 = *(double *)(param_2 + 0x80);
  local_2b8 = *param_3;
  dStack_2b0 = param_3[1];
  local_2a8 = *(undefined4 *)(param_3 + 2);
  uStack_2a4 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_2a0 = *(undefined4 *)(param_3 + 3);
  uStack_29c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0x3ff0000000000000;
  uStack_270 = 0x3ff0000000000000;
  local_268 = 0x3ff0000000000000;
  uStack_260 = 0;
  FUN_1400fd046(&local_258,&local_2e8);
  dVar2 = (local_230 - local_248) * 0.5 + local_248;
  dVar6 = (dStack_238 - dStack_250) * 0.5 + dStack_250;
  dVar9 = (local_240 - local_258) * 0.5 + local_258;
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = param_3[2];
  dVar1 = param_3[3];
  dVar10 = dVar9 * dVar5 - dVar3 * dVar2;
  dVar7 = dVar6 * dVar3 - dVar4 * dVar9;
  dVar8 = dVar2 * dVar4 - dVar5 * dVar6;
  dVar8 = dVar8 + dVar8;
  dVar10 = dVar10 + dVar10;
  dVar7 = dVar7 + dVar7;
  local_308 = (dVar7 * dVar4 - dVar10 * dVar5) + dVar1 * dVar8 + dVar9 + param_3[4];
  dStack_300 = (dVar5 * dVar8 - dVar3 * dVar7) + param_3[3] * dVar10 + dVar6 + param_3[5];
  local_2f8 = dVar7 * dVar1 + dVar2 + (dVar10 * dVar3 - dVar8 * dVar4) + param_3[6];
  local_310 = (local_2c0 - local_2d8) * 0.5 + param_10;
  local_318 = (local_2c8 - local_2e0) * 0.5 + param_10;
  local_320 = (local_2d0 - local_2e8) * 0.5 + param_10;
  local_338 = &local_320;
  local_330 = &local_228;
  FUN_146da4a22(param_1,&local_308,param_4,param_5);
  if (local_228 <= param_5) {
    *param_6 = local_228;
    param_7[2] = local_210;
    *param_7 = local_220;
    param_7[1] = uStack_218;
    param_8[2] = local_1f8;
    *param_8 = local_208;
    param_8[1] = uStack_200;
    *param_9 = local_1f0;
  }
  if ((local_b0 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return local_228 <= param_5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d95682 FUN_146d95682 body=82 status=ok
// SIG undefined FUN_146d95682(void)

void FUN_146d95682(void)

{
  FUN_146d956d4();
  return;
}



// FUNCTION 146d956d4 FUN_146d956d4 body=925 status=ok
// SIG undefined FUN_146d956d4(void)

bool FUN_146d956d4(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double param_5,double *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined4 *param_9,double param_10,undefined1 param_11)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_358 [32];
  double *local_338;
  double *local_330;
  undefined1 local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double local_240;
  double dStack_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  local_328 = param_11;
  local_330 = (double *)param_10;
  local_338 = (double *)param_4;
  FUN_146da5b56(&local_228,param_1 + 0x20,param_2,param_3);
  local_248 = *(double *)(param_2 + 0x68);
  local_258 = *(double *)(param_2 + 0x58);
  dStack_250 = *(double *)(param_2 + 0x60);
  local_240 = *(double *)(param_2 + 0x70);
  dStack_238 = *(double *)(param_2 + 0x78);
  local_230 = *(double *)(param_2 + 0x80);
  local_2b8 = *param_3;
  dStack_2b0 = param_3[1];
  local_2a8 = *(undefined4 *)(param_3 + 2);
  uStack_2a4 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_2a0 = *(undefined4 *)(param_3 + 3);
  uStack_29c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0x3ff0000000000000;
  uStack_270 = 0x3ff0000000000000;
  local_268 = 0x3ff0000000000000;
  uStack_260 = 0;
  FUN_1400fd046(&local_258,&local_2e8);
  dVar2 = (local_230 - local_248) * 0.5 + local_248;
  dVar6 = (dStack_238 - dStack_250) * 0.5 + dStack_250;
  dVar9 = (local_240 - local_258) * 0.5 + local_258;
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = param_3[2];
  dVar1 = param_3[3];
  dVar10 = dVar9 * dVar5 - dVar3 * dVar2;
  dVar7 = dVar6 * dVar3 - dVar4 * dVar9;
  dVar8 = dVar2 * dVar4 - dVar5 * dVar6;
  dVar8 = dVar8 + dVar8;
  dVar10 = dVar10 + dVar10;
  dVar7 = dVar7 + dVar7;
  local_308 = (dVar7 * dVar4 - dVar10 * dVar5) + dVar1 * dVar8 + dVar9 + param_3[4];
  dStack_300 = (dVar5 * dVar8 - dVar3 * dVar7) + param_3[3] * dVar10 + dVar6 + param_3[5];
  local_2f8 = dVar7 * dVar1 + dVar2 + (dVar10 * dVar3 - dVar8 * dVar4) + param_3[6];
  local_310 = (local_2c0 - local_2d8) * 0.5 + param_10;
  local_318 = (local_2c8 - local_2e0) * 0.5 + param_10;
  local_320 = (local_2d0 - local_2e8) * 0.5 + param_10;
  local_338 = &local_320;
  local_330 = &local_228;
  FUN_146da5f2a(param_1,&local_308,param_4,param_5);
  if (local_228 <= param_5) {
    *param_6 = local_228;
    param_7[2] = local_210;
    *param_7 = local_220;
    param_7[1] = uStack_218;
    param_8[2] = local_1f8;
    *param_8 = local_208;
    param_8[1] = uStack_200;
    *param_9 = local_1f0;
  }
  if ((local_b0 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return local_228 <= param_5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d95a72 thunk_FUN_146d95a78 body=5 status=ok
// SIG undefined thunk_FUN_146d95a78(void)

bool thunk_FUN_146d95a78(longlong param_1,longlong param_2,double *param_3,double *param_4,
                        double param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                        undefined8 *param_9,undefined8 *param_10,undefined4 *param_11,
                        undefined4 *param_12)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auStack_308 [32];
  double *pdStack_2e8;
  double *pdStack_2e0;
  double dStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  double dStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  double dStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  ulonglong uStack_e0;
  
  uVar9 = (undefined4)param_7;
  uVar10 = (undefined4)((ulonglong)param_7 >> 0x20);
  uStack_e0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  uVar5 = (undefined4)param_6;
  uVar6 = (undefined4)((ulonglong)param_6 >> 0x20);
  if (DAT_14c75eff8 == '\0') {
    uVar5 = 0;
    uVar6 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  dStack_120 = (double)*(float *)(param_2 + 0x54);
  dStack_128 = (double)*(float *)(param_2 + 0x50);
  dStack_130 = (double)*(float *)(param_2 + 0x4c);
  dStack_138 = (double)*(float *)(param_2 + 0x48);
  dStack_140 = (double)*(float *)(param_2 + 0x44);
  dStack_148 = (double)*(float *)(param_2 + 0x40);
  dStack_298 = *param_3;
  dStack_290 = param_3[1];
  uStack_288 = *(undefined4 *)(param_3 + 2);
  uStack_284 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_280 = *(undefined4 *)(param_3 + 3);
  uStack_27c = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_278 = 0;
  uStack_270 = 0.0;
  uStack_268 = 0.0;
  dStack_260 = 0.0;
  uStack_258 = 0x3ff0000000000000;
  uStack_250 = 0x3ff0000000000000;
  uStack_248 = 0x3ff0000000000000;
  uStack_240 = 0;
  FUN_1400c6592(&dStack_148,&dStack_110,&dStack_298);
  uStack_2c8 = CONCAT44(uVar10,uVar9);
  uStack_2d0 = CONCAT44(uVar6,uVar5);
  dStack_2d8 = param_5;
  pdStack_2e8 = param_3;
  pdStack_2e0 = param_4;
  FUN_146da7046(&dStack_298,param_1 + 0x20,param_2,&dStack_110);
  dStack_2a0 = (dStack_e8 - dStack_100) * 0.5;
  dStack_2a8 = (dStack_f0 - dStack_108) * 0.5;
  dStack_2b0 = (dStack_f8 - dStack_110) * 0.5;
  dStack_100 = dStack_100 + dStack_2a0;
  dStack_108 = dStack_108 + dStack_2a8;
  dStack_110 = dStack_110 + dStack_2b0;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  dVar1 = param_3[3];
  dVar11 = dStack_110 * dVar4 - dVar2 * dStack_100;
  dVar7 = dStack_108 * dVar2 - dVar3 * dStack_110;
  dVar8 = dStack_100 * dVar3 - dVar4 * dStack_108;
  dVar8 = dVar8 + dVar8;
  dVar11 = dVar11 + dVar11;
  dVar7 = dVar7 + dVar7;
  dStack_148 = (dVar7 * dVar3 - dVar11 * dVar4) + dVar1 * dVar8 + dStack_110 + param_3[4];
  dStack_140 = (dVar4 * dVar8 - dVar2 * dVar7) + param_3[3] * dVar11 + dStack_108 + param_3[5];
  dStack_138 = dVar7 * dVar1 + dStack_100 + (dVar11 * dVar2 - dVar8 * dVar3) + param_3[6];
  pdStack_2e8 = &dStack_2b0;
  pdStack_2e0 = &dStack_298;
  FUN_146da725a(param_1,&dStack_148,param_4,param_5);
  uVar5 = SUB84(dStack_290,0);
  uVar6 = (undefined4)((ulonglong)dStack_290 >> 0x20);
  dVar1 = (double)(-(ulonglong)(0.0 < param_5) & (ulonglong)(dStack_298 / param_5));
  uVar9 = SUB84(dVar1,0);
  uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dStack_2c0 = dStack_290;
  dStack_2b8 = dVar1;
  if (dVar1 <= 1.0) {
    if (DAT_14c75eff8 == '\0') {
      pdStack_2e0 = &dStack_2c0;
      pdStack_2e8 = &dStack_2b8;
      FUN_146d4aafb(SUB84(param_4[2] * dStack_260 + *param_4 * uStack_270 + param_4[1] * uStack_268,
                          0),SUB84(param_5,0),param_6,param_7);
      uVar9 = SUB84(dStack_2b8,0);
      uVar10 = (undefined4)((ulonglong)dStack_2b8 >> 0x20);
      uVar5 = SUB84(dStack_2c0,0);
      uVar6 = (undefined4)((ulonglong)dStack_2c0 >> 0x20);
    }
    *param_8 = CONCAT44(uVar10,uVar9);
    *param_9 = CONCAT44(uVar6,uVar5);
    param_10[2] = uStack_278;
    *param_10 = CONCAT44(uStack_284,uStack_288);
    param_10[1] = CONCAT44(uStack_27c,uStack_280);
    *(double *)(param_11 + 4) = dStack_260;
    *param_11 = (undefined4)uStack_270;
    param_11[1] = uStack_270._4_4_;
    param_11[2] = (undefined4)uStack_268;
    param_11[3] = uStack_268._4_4_;
    *param_12 = (undefined4)uStack_258;
  }
  if ((uStack_e0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return dVar1 <= 1.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d95a78 FUN_146d95a78 body=1183 status=ok
// SIG undefined FUN_146d95a78(void)

bool FUN_146d95a78(longlong param_1,longlong param_2,double *param_3,double *param_4,double param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 *param_8,undefined8 *param_9,
                  undefined8 *param_10,undefined4 *param_11,undefined4 *param_12)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auStack_308 [32];
  double *local_2e8;
  double *local_2e0;
  double local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  double dStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  uVar9 = (undefined4)param_7;
  uVar10 = (undefined4)((ulonglong)param_7 >> 0x20);
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  uVar5 = (undefined4)param_6;
  uVar6 = (undefined4)((ulonglong)param_6 >> 0x20);
  if (DAT_14c75eff8 == '\0') {
    uVar5 = 0;
    uVar6 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  local_120 = (double)*(float *)(param_2 + 0x54);
  local_128 = (double)*(float *)(param_2 + 0x50);
  local_130 = (double)*(float *)(param_2 + 0x4c);
  local_138 = (double)*(float *)(param_2 + 0x48);
  dStack_140 = (double)*(float *)(param_2 + 0x44);
  local_148 = (double)*(float *)(param_2 + 0x40);
  local_298 = *param_3;
  dStack_290 = param_3[1];
  local_288 = *(undefined4 *)(param_3 + 2);
  uStack_284 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_280 = *(undefined4 *)(param_3 + 3);
  uStack_27c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_278 = 0;
  uStack_270 = 0.0;
  local_268 = 0.0;
  dStack_260 = 0.0;
  local_258 = 0x3ff0000000000000;
  uStack_250 = 0x3ff0000000000000;
  local_248 = 0x3ff0000000000000;
  uStack_240 = 0;
  FUN_1400c6592(&local_148,&local_110,&local_298);
  local_2c8 = CONCAT44(uVar10,uVar9);
  local_2d0 = CONCAT44(uVar6,uVar5);
  local_2d8 = param_5;
  local_2e8 = param_3;
  local_2e0 = param_4;
  FUN_146da7046(&local_298,param_1 + 0x20,param_2,&local_110);
  local_2a0 = (local_e8 - local_100) * 0.5;
  local_2a8 = (local_f0 - local_108) * 0.5;
  local_2b0 = (local_f8 - local_110) * 0.5;
  local_100 = local_100 + local_2a0;
  local_108 = local_108 + local_2a8;
  local_110 = local_110 + local_2b0;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  dVar1 = param_3[3];
  dVar11 = local_110 * dVar4 - dVar2 * local_100;
  dVar7 = local_108 * dVar2 - dVar3 * local_110;
  dVar8 = local_100 * dVar3 - dVar4 * local_108;
  dVar8 = dVar8 + dVar8;
  dVar11 = dVar11 + dVar11;
  dVar7 = dVar7 + dVar7;
  local_148 = (dVar7 * dVar3 - dVar11 * dVar4) + dVar1 * dVar8 + local_110 + param_3[4];
  dStack_140 = (dVar4 * dVar8 - dVar2 * dVar7) + param_3[3] * dVar11 + local_108 + param_3[5];
  local_138 = dVar7 * dVar1 + local_100 + (dVar11 * dVar2 - dVar8 * dVar3) + param_3[6];
  local_2e8 = &local_2b0;
  local_2e0 = &local_298;
  FUN_146da725a(param_1,&local_148,param_4,param_5);
  uVar5 = SUB84(dStack_290,0);
  uVar6 = (undefined4)((ulonglong)dStack_290 >> 0x20);
  dVar1 = (double)(-(ulonglong)(0.0 < param_5) & (ulonglong)(local_298 / param_5));
  uVar9 = SUB84(dVar1,0);
  uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_2c0 = dStack_290;
  local_2b8 = dVar1;
  if (dVar1 <= 1.0) {
    if (DAT_14c75eff8 == '\0') {
      local_2e0 = &local_2c0;
      local_2e8 = &local_2b8;
      FUN_146d4aafb(SUB84(param_4[2] * dStack_260 + *param_4 * uStack_270 + param_4[1] * local_268,0
                         ),SUB84(param_5,0),param_6,param_7);
      uVar9 = SUB84(local_2b8,0);
      uVar10 = (undefined4)((ulonglong)local_2b8 >> 0x20);
      uVar5 = SUB84(local_2c0,0);
      uVar6 = (undefined4)((ulonglong)local_2c0 >> 0x20);
    }
    *param_8 = CONCAT44(uVar10,uVar9);
    *param_9 = CONCAT44(uVar6,uVar5);
    param_10[2] = local_278;
    *param_10 = CONCAT44(uStack_284,local_288);
    param_10[1] = CONCAT44(uStack_27c,uStack_280);
    *(double *)(param_11 + 4) = dStack_260;
    *param_11 = (undefined4)uStack_270;
    param_11[1] = uStack_270._4_4_;
    param_11[2] = (undefined4)local_268;
    param_11[3] = local_268._4_4_;
    *param_12 = (undefined4)local_258;
  }
  if ((local_e0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return dVar1 <= 1.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d95f18 thunk_FUN_146d95f1e body=5 status=ok
// SIG undefined thunk_FUN_146d95f1e(void)

bool thunk_FUN_146d95f1e(longlong param_1,longlong param_2,double *param_3,double *param_4,
                        double param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                        undefined8 *param_9,undefined8 *param_10,undefined4 *param_11,
                        undefined4 *param_12)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auStack_308 [32];
  double *pdStack_2e8;
  double *pdStack_2e0;
  double dStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  double dStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  double dStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  ulonglong uStack_e0;
  
  uVar9 = (undefined4)param_7;
  uVar10 = (undefined4)((ulonglong)param_7 >> 0x20);
  uStack_e0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  uVar5 = (undefined4)param_6;
  uVar6 = (undefined4)((ulonglong)param_6 >> 0x20);
  if (DAT_14c75eff8 == '\0') {
    uVar5 = 0;
    uVar6 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  dStack_138 = *(double *)(param_2 + 0x68);
  dStack_148 = *(double *)(param_2 + 0x58);
  dStack_140 = *(double *)(param_2 + 0x60);
  uStack_130 = *(undefined8 *)(param_2 + 0x70);
  uStack_128 = *(undefined8 *)(param_2 + 0x78);
  uStack_120 = *(undefined8 *)(param_2 + 0x80);
  dStack_298 = *param_3;
  dStack_290 = param_3[1];
  uStack_288 = *(undefined4 *)(param_3 + 2);
  uStack_284 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_280 = *(undefined4 *)(param_3 + 3);
  uStack_27c = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_278 = 0;
  uStack_270 = 0.0;
  uStack_268 = 0.0;
  dStack_260 = 0.0;
  uStack_258 = 0x3ff0000000000000;
  uStack_250 = 0x3ff0000000000000;
  uStack_248 = 0x3ff0000000000000;
  uStack_240 = 0;
  FUN_1400c6592(&dStack_148,&dStack_110,&dStack_298);
  uStack_2c8 = CONCAT44(uVar10,uVar9);
  uStack_2d0 = CONCAT44(uVar6,uVar5);
  dStack_2d8 = param_5;
  pdStack_2e8 = param_3;
  pdStack_2e0 = param_4;
  FUN_146da84a6(&dStack_298,param_1 + 0x20,param_2,&dStack_110);
  dStack_2a0 = (dStack_e8 - dStack_100) * 0.5;
  dStack_2a8 = (dStack_f0 - dStack_108) * 0.5;
  dStack_2b0 = (dStack_f8 - dStack_110) * 0.5;
  dStack_100 = dStack_100 + dStack_2a0;
  dStack_108 = dStack_108 + dStack_2a8;
  dStack_110 = dStack_110 + dStack_2b0;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  dVar1 = param_3[3];
  dVar11 = dStack_110 * dVar4 - dVar2 * dStack_100;
  dVar7 = dStack_108 * dVar2 - dVar3 * dStack_110;
  dVar8 = dStack_100 * dVar3 - dVar4 * dStack_108;
  dVar8 = dVar8 + dVar8;
  dVar11 = dVar11 + dVar11;
  dVar7 = dVar7 + dVar7;
  dStack_148 = (dVar7 * dVar3 - dVar11 * dVar4) + dVar1 * dVar8 + dStack_110 + param_3[4];
  dStack_140 = (dVar4 * dVar8 - dVar2 * dVar7) + param_3[3] * dVar11 + dStack_108 + param_3[5];
  dStack_138 = dVar7 * dVar1 + dStack_100 + (dVar11 * dVar2 - dVar8 * dVar3) + param_3[6];
  pdStack_2e8 = &dStack_2b0;
  pdStack_2e0 = &dStack_298;
  FUN_146da86ba(param_1,&dStack_148,param_4,param_5);
  uVar5 = SUB84(dStack_290,0);
  uVar6 = (undefined4)((ulonglong)dStack_290 >> 0x20);
  dVar1 = (double)(-(ulonglong)(0.0 < param_5) & (ulonglong)(dStack_298 / param_5));
  uVar9 = SUB84(dVar1,0);
  uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dStack_2c0 = dStack_290;
  dStack_2b8 = dVar1;
  if (dVar1 <= 1.0) {
    if (DAT_14c75eff8 == '\0') {
      pdStack_2e0 = &dStack_2c0;
      pdStack_2e8 = &dStack_2b8;
      FUN_146d4aafb(SUB84(param_4[2] * dStack_260 + *param_4 * uStack_270 + param_4[1] * uStack_268,
                          0),SUB84(param_5,0),param_6,param_7);
      uVar9 = SUB84(dStack_2b8,0);
      uVar10 = (undefined4)((ulonglong)dStack_2b8 >> 0x20);
      uVar5 = SUB84(dStack_2c0,0);
      uVar6 = (undefined4)((ulonglong)dStack_2c0 >> 0x20);
    }
    *param_8 = CONCAT44(uVar10,uVar9);
    *param_9 = CONCAT44(uVar6,uVar5);
    param_10[2] = uStack_278;
    *param_10 = CONCAT44(uStack_284,uStack_288);
    param_10[1] = CONCAT44(uStack_27c,uStack_280);
    *(double *)(param_11 + 4) = dStack_260;
    *param_11 = (undefined4)uStack_270;
    param_11[1] = uStack_270._4_4_;
    param_11[2] = (undefined4)uStack_268;
    param_11[3] = uStack_268._4_4_;
    *param_12 = (undefined4)uStack_258;
  }
  if ((uStack_e0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return dVar1 <= 1.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d95f1e FUN_146d95f1e body=1148 status=ok
// SIG undefined FUN_146d95f1e(void)

bool FUN_146d95f1e(longlong param_1,longlong param_2,double *param_3,double *param_4,double param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 *param_8,undefined8 *param_9,
                  undefined8 *param_10,undefined4 *param_11,undefined4 *param_12)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auStack_308 [32];
  double *local_2e8;
  double *local_2e0;
  double local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  double dStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  uVar9 = (undefined4)param_7;
  uVar10 = (undefined4)((ulonglong)param_7 >> 0x20);
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  uVar5 = (undefined4)param_6;
  uVar6 = (undefined4)((ulonglong)param_6 >> 0x20);
  if (DAT_14c75eff8 == '\0') {
    uVar5 = 0;
    uVar6 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  local_138 = *(double *)(param_2 + 0x68);
  local_148 = *(double *)(param_2 + 0x58);
  dStack_140 = *(double *)(param_2 + 0x60);
  local_130 = *(undefined8 *)(param_2 + 0x70);
  uStack_128 = *(undefined8 *)(param_2 + 0x78);
  local_120 = *(undefined8 *)(param_2 + 0x80);
  local_298 = *param_3;
  dStack_290 = param_3[1];
  local_288 = *(undefined4 *)(param_3 + 2);
  uStack_284 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_280 = *(undefined4 *)(param_3 + 3);
  uStack_27c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_278 = 0;
  uStack_270 = 0.0;
  local_268 = 0.0;
  dStack_260 = 0.0;
  local_258 = 0x3ff0000000000000;
  uStack_250 = 0x3ff0000000000000;
  local_248 = 0x3ff0000000000000;
  uStack_240 = 0;
  FUN_1400c6592(&local_148,&local_110,&local_298);
  local_2c8 = CONCAT44(uVar10,uVar9);
  local_2d0 = CONCAT44(uVar6,uVar5);
  local_2d8 = param_5;
  local_2e8 = param_3;
  local_2e0 = param_4;
  FUN_146da84a6(&local_298,param_1 + 0x20,param_2,&local_110);
  local_2a0 = (local_e8 - local_100) * 0.5;
  local_2a8 = (local_f0 - local_108) * 0.5;
  local_2b0 = (local_f8 - local_110) * 0.5;
  local_100 = local_100 + local_2a0;
  local_108 = local_108 + local_2a8;
  local_110 = local_110 + local_2b0;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  dVar1 = param_3[3];
  dVar11 = local_110 * dVar4 - dVar2 * local_100;
  dVar7 = local_108 * dVar2 - dVar3 * local_110;
  dVar8 = local_100 * dVar3 - dVar4 * local_108;
  dVar8 = dVar8 + dVar8;
  dVar11 = dVar11 + dVar11;
  dVar7 = dVar7 + dVar7;
  local_148 = (dVar7 * dVar3 - dVar11 * dVar4) + dVar1 * dVar8 + local_110 + param_3[4];
  dStack_140 = (dVar4 * dVar8 - dVar2 * dVar7) + param_3[3] * dVar11 + local_108 + param_3[5];
  local_138 = dVar7 * dVar1 + local_100 + (dVar11 * dVar2 - dVar8 * dVar3) + param_3[6];
  local_2e8 = &local_2b0;
  local_2e0 = &local_298;
  FUN_146da86ba(param_1,&local_148,param_4,param_5);
  uVar5 = SUB84(dStack_290,0);
  uVar6 = (undefined4)((ulonglong)dStack_290 >> 0x20);
  dVar1 = (double)(-(ulonglong)(0.0 < param_5) & (ulonglong)(local_298 / param_5));
  uVar9 = SUB84(dVar1,0);
  uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_2c0 = dStack_290;
  local_2b8 = dVar1;
  if (dVar1 <= 1.0) {
    if (DAT_14c75eff8 == '\0') {
      local_2e0 = &local_2c0;
      local_2e8 = &local_2b8;
      FUN_146d4aafb(SUB84(param_4[2] * dStack_260 + *param_4 * uStack_270 + param_4[1] * local_268,0
                         ),SUB84(param_5,0),param_6,param_7);
      uVar9 = SUB84(local_2b8,0);
      uVar10 = (undefined4)((ulonglong)local_2b8 >> 0x20);
      uVar5 = SUB84(local_2c0,0);
      uVar6 = (undefined4)((ulonglong)local_2c0 >> 0x20);
    }
    *param_8 = CONCAT44(uVar10,uVar9);
    *param_9 = CONCAT44(uVar6,uVar5);
    param_10[2] = local_278;
    *param_10 = CONCAT44(uStack_284,local_288);
    param_10[1] = CONCAT44(uStack_27c,uStack_280);
    *(double *)(param_11 + 4) = dStack_260;
    *param_11 = (undefined4)uStack_270;
    param_11[1] = uStack_270._4_4_;
    param_11[2] = (undefined4)local_268;
    param_11[3] = local_268._4_4_;
    *param_12 = (undefined4)local_258;
  }
  if ((local_e0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return dVar1 <= 1.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d9639c thunk_FUN_146d963a2 body=5 status=ok
// SIG undefined thunk_FUN_146d963a2(void)

bool thunk_FUN_146d963a2(longlong param_1,longlong param_2,double *param_3,double *param_4,
                        double param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                        undefined8 *param_9,undefined8 *param_10,undefined4 *param_11,
                        undefined4 *param_12)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auStack_308 [32];
  double *pdStack_2e8;
  double *pdStack_2e0;
  double dStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  double dStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  double dStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  ulonglong uStack_e0;
  
  uVar9 = (undefined4)param_7;
  uVar10 = (undefined4)((ulonglong)param_7 >> 0x20);
  uStack_e0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  uVar5 = (undefined4)param_6;
  uVar6 = (undefined4)((ulonglong)param_6 >> 0x20);
  if (DAT_14c75eff8 == '\0') {
    uVar5 = 0;
    uVar6 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  dStack_138 = *(double *)(param_2 + 0x68);
  dStack_148 = *(double *)(param_2 + 0x58);
  dStack_140 = *(double *)(param_2 + 0x60);
  uStack_130 = *(undefined8 *)(param_2 + 0x70);
  uStack_128 = *(undefined8 *)(param_2 + 0x78);
  uStack_120 = *(undefined8 *)(param_2 + 0x80);
  dStack_298 = *param_3;
  dStack_290 = param_3[1];
  uStack_288 = *(undefined4 *)(param_3 + 2);
  uStack_284 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_280 = *(undefined4 *)(param_3 + 3);
  uStack_27c = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_278 = 0;
  uStack_270 = 0.0;
  uStack_268 = 0.0;
  dStack_260 = 0.0;
  uStack_258 = 0x3ff0000000000000;
  uStack_250 = 0x3ff0000000000000;
  uStack_248 = 0x3ff0000000000000;
  uStack_240 = 0;
  FUN_1400c6592(&dStack_148,&dStack_110,&dStack_298);
  uStack_2c8 = CONCAT44(uVar10,uVar9);
  uStack_2d0 = CONCAT44(uVar6,uVar5);
  dStack_2d8 = param_5;
  pdStack_2e8 = param_3;
  pdStack_2e0 = param_4;
  FUN_146da9938(&dStack_298,param_1 + 0x20,param_2,&dStack_110);
  dStack_2a0 = (dStack_e8 - dStack_100) * 0.5;
  dStack_2a8 = (dStack_f0 - dStack_108) * 0.5;
  dStack_2b0 = (dStack_f8 - dStack_110) * 0.5;
  dStack_100 = dStack_100 + dStack_2a0;
  dStack_108 = dStack_108 + dStack_2a8;
  dStack_110 = dStack_110 + dStack_2b0;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  dVar1 = param_3[3];
  dVar11 = dStack_110 * dVar4 - dVar2 * dStack_100;
  dVar7 = dStack_108 * dVar2 - dVar3 * dStack_110;
  dVar8 = dStack_100 * dVar3 - dVar4 * dStack_108;
  dVar8 = dVar8 + dVar8;
  dVar11 = dVar11 + dVar11;
  dVar7 = dVar7 + dVar7;
  dStack_148 = (dVar7 * dVar3 - dVar11 * dVar4) + dVar1 * dVar8 + dStack_110 + param_3[4];
  dStack_140 = (dVar4 * dVar8 - dVar2 * dVar7) + param_3[3] * dVar11 + dStack_108 + param_3[5];
  dStack_138 = dVar7 * dVar1 + dStack_100 + (dVar11 * dVar2 - dVar8 * dVar3) + param_3[6];
  pdStack_2e8 = &dStack_2b0;
  pdStack_2e0 = &dStack_298;
  FUN_146da9b4c(param_1,&dStack_148,param_4,param_5);
  uVar5 = SUB84(dStack_290,0);
  uVar6 = (undefined4)((ulonglong)dStack_290 >> 0x20);
  dVar1 = (double)(-(ulonglong)(0.0 < param_5) & (ulonglong)(dStack_298 / param_5));
  uVar9 = SUB84(dVar1,0);
  uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dStack_2c0 = dStack_290;
  dStack_2b8 = dVar1;
  if (dVar1 <= 1.0) {
    if (DAT_14c75eff8 == '\0') {
      pdStack_2e0 = &dStack_2c0;
      pdStack_2e8 = &dStack_2b8;
      FUN_146d4aafb(SUB84(param_4[2] * dStack_260 + *param_4 * uStack_270 + param_4[1] * uStack_268,
                          0),SUB84(param_5,0),param_6,param_7);
      uVar9 = SUB84(dStack_2b8,0);
      uVar10 = (undefined4)((ulonglong)dStack_2b8 >> 0x20);
      uVar5 = SUB84(dStack_2c0,0);
      uVar6 = (undefined4)((ulonglong)dStack_2c0 >> 0x20);
    }
    *param_8 = CONCAT44(uVar10,uVar9);
    *param_9 = CONCAT44(uVar6,uVar5);
    param_10[2] = uStack_278;
    *param_10 = CONCAT44(uStack_284,uStack_288);
    param_10[1] = CONCAT44(uStack_27c,uStack_280);
    *(double *)(param_11 + 4) = dStack_260;
    *param_11 = (undefined4)uStack_270;
    param_11[1] = uStack_270._4_4_;
    param_11[2] = (undefined4)uStack_268;
    param_11[3] = uStack_268._4_4_;
    *param_12 = (undefined4)uStack_258;
  }
  if ((uStack_e0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return dVar1 <= 1.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d963a2 FUN_146d963a2 body=1148 status=ok
// SIG undefined FUN_146d963a2(void)

bool FUN_146d963a2(longlong param_1,longlong param_2,double *param_3,double *param_4,double param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 *param_8,undefined8 *param_9,
                  undefined8 *param_10,undefined4 *param_11,undefined4 *param_12)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auStack_308 [32];
  double *local_2e8;
  double *local_2e0;
  double local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  double dStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  uVar9 = (undefined4)param_7;
  uVar10 = (undefined4)((ulonglong)param_7 >> 0x20);
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  uVar5 = (undefined4)param_6;
  uVar6 = (undefined4)((ulonglong)param_6 >> 0x20);
  if (DAT_14c75eff8 == '\0') {
    uVar5 = 0;
    uVar6 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  local_138 = *(double *)(param_2 + 0x68);
  local_148 = *(double *)(param_2 + 0x58);
  dStack_140 = *(double *)(param_2 + 0x60);
  local_130 = *(undefined8 *)(param_2 + 0x70);
  uStack_128 = *(undefined8 *)(param_2 + 0x78);
  local_120 = *(undefined8 *)(param_2 + 0x80);
  local_298 = *param_3;
  dStack_290 = param_3[1];
  local_288 = *(undefined4 *)(param_3 + 2);
  uStack_284 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_280 = *(undefined4 *)(param_3 + 3);
  uStack_27c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_278 = 0;
  uStack_270 = 0.0;
  local_268 = 0.0;
  dStack_260 = 0.0;
  local_258 = 0x3ff0000000000000;
  uStack_250 = 0x3ff0000000000000;
  local_248 = 0x3ff0000000000000;
  uStack_240 = 0;
  FUN_1400c6592(&local_148,&local_110,&local_298);
  local_2c8 = CONCAT44(uVar10,uVar9);
  local_2d0 = CONCAT44(uVar6,uVar5);
  local_2d8 = param_5;
  local_2e8 = param_3;
  local_2e0 = param_4;
  FUN_146da9938(&local_298,param_1 + 0x20,param_2,&local_110);
  local_2a0 = (local_e8 - local_100) * 0.5;
  local_2a8 = (local_f0 - local_108) * 0.5;
  local_2b0 = (local_f8 - local_110) * 0.5;
  local_100 = local_100 + local_2a0;
  local_108 = local_108 + local_2a8;
  local_110 = local_110 + local_2b0;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  dVar1 = param_3[3];
  dVar11 = local_110 * dVar4 - dVar2 * local_100;
  dVar7 = local_108 * dVar2 - dVar3 * local_110;
  dVar8 = local_100 * dVar3 - dVar4 * local_108;
  dVar8 = dVar8 + dVar8;
  dVar11 = dVar11 + dVar11;
  dVar7 = dVar7 + dVar7;
  local_148 = (dVar7 * dVar3 - dVar11 * dVar4) + dVar1 * dVar8 + local_110 + param_3[4];
  dStack_140 = (dVar4 * dVar8 - dVar2 * dVar7) + param_3[3] * dVar11 + local_108 + param_3[5];
  local_138 = dVar7 * dVar1 + local_100 + (dVar11 * dVar2 - dVar8 * dVar3) + param_3[6];
  local_2e8 = &local_2b0;
  local_2e0 = &local_298;
  FUN_146da9b4c(param_1,&local_148,param_4,param_5);
  uVar5 = SUB84(dStack_290,0);
  uVar6 = (undefined4)((ulonglong)dStack_290 >> 0x20);
  dVar1 = (double)(-(ulonglong)(0.0 < param_5) & (ulonglong)(local_298 / param_5));
  uVar9 = SUB84(dVar1,0);
  uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_2c0 = dStack_290;
  local_2b8 = dVar1;
  if (dVar1 <= 1.0) {
    if (DAT_14c75eff8 == '\0') {
      local_2e0 = &local_2c0;
      local_2e8 = &local_2b8;
      FUN_146d4aafb(SUB84(param_4[2] * dStack_260 + *param_4 * uStack_270 + param_4[1] * local_268,0
                         ),SUB84(param_5,0),param_6,param_7);
      uVar9 = SUB84(local_2b8,0);
      uVar10 = (undefined4)((ulonglong)local_2b8 >> 0x20);
      uVar5 = SUB84(local_2c0,0);
      uVar6 = (undefined4)((ulonglong)local_2c0 >> 0x20);
    }
    *param_8 = CONCAT44(uVar10,uVar9);
    *param_9 = CONCAT44(uVar6,uVar5);
    param_10[2] = local_278;
    *param_10 = CONCAT44(uStack_284,local_288);
    param_10[1] = CONCAT44(uStack_27c,uStack_280);
    *(double *)(param_11 + 4) = dStack_260;
    *param_11 = (undefined4)uStack_270;
    param_11[1] = uStack_270._4_4_;
    param_11[2] = (undefined4)local_268;
    param_11[3] = local_268._4_4_;
    *param_12 = (undefined4)local_258;
  }
  if ((local_e0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return dVar1 <= 1.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d96820 thunk_FUN_146d96826 body=5 status=ok
// SIG undefined thunk_FUN_146d96826(void)

bool thunk_FUN_146d96826(longlong param_1,longlong param_2,double *param_3,double *param_4,
                        double param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                        undefined8 *param_9,undefined8 *param_10,undefined4 *param_11,
                        undefined4 *param_12)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auStack_308 [32];
  double *pdStack_2e8;
  double *pdStack_2e0;
  double dStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  double dStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  double dStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  ulonglong uStack_e0;
  
  uVar9 = (undefined4)param_7;
  uVar10 = (undefined4)((ulonglong)param_7 >> 0x20);
  uStack_e0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  uVar5 = (undefined4)param_6;
  uVar6 = (undefined4)((ulonglong)param_6 >> 0x20);
  if (DAT_14c75eff8 == '\0') {
    uVar5 = 0;
    uVar6 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  dStack_138 = *(double *)(param_2 + 0x68);
  dStack_148 = *(double *)(param_2 + 0x58);
  dStack_140 = *(double *)(param_2 + 0x60);
  uStack_130 = *(undefined8 *)(param_2 + 0x70);
  uStack_128 = *(undefined8 *)(param_2 + 0x78);
  uStack_120 = *(undefined8 *)(param_2 + 0x80);
  dStack_298 = *param_3;
  dStack_290 = param_3[1];
  uStack_288 = *(undefined4 *)(param_3 + 2);
  uStack_284 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_280 = *(undefined4 *)(param_3 + 3);
  uStack_27c = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_278 = 0;
  uStack_270 = 0.0;
  uStack_268 = 0.0;
  dStack_260 = 0.0;
  uStack_258 = 0x3ff0000000000000;
  uStack_250 = 0x3ff0000000000000;
  uStack_248 = 0x3ff0000000000000;
  uStack_240 = 0;
  FUN_1400c6592(&dStack_148,&dStack_110,&dStack_298);
  uStack_2c8 = CONCAT44(uVar10,uVar9);
  uStack_2d0 = CONCAT44(uVar6,uVar5);
  dStack_2d8 = param_5;
  pdStack_2e8 = param_3;
  pdStack_2e0 = param_4;
  FUN_146daadee(&dStack_298,param_1 + 0x20,param_2,&dStack_110);
  dStack_2a0 = (dStack_e8 - dStack_100) * 0.5;
  dStack_2a8 = (dStack_f0 - dStack_108) * 0.5;
  dStack_2b0 = (dStack_f8 - dStack_110) * 0.5;
  dStack_100 = dStack_100 + dStack_2a0;
  dStack_108 = dStack_108 + dStack_2a8;
  dStack_110 = dStack_110 + dStack_2b0;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  dVar1 = param_3[3];
  dVar11 = dStack_110 * dVar4 - dVar2 * dStack_100;
  dVar7 = dStack_108 * dVar2 - dVar3 * dStack_110;
  dVar8 = dStack_100 * dVar3 - dVar4 * dStack_108;
  dVar8 = dVar8 + dVar8;
  dVar11 = dVar11 + dVar11;
  dVar7 = dVar7 + dVar7;
  dStack_148 = (dVar7 * dVar3 - dVar11 * dVar4) + dVar1 * dVar8 + dStack_110 + param_3[4];
  dStack_140 = (dVar4 * dVar8 - dVar2 * dVar7) + param_3[3] * dVar11 + dStack_108 + param_3[5];
  dStack_138 = dVar7 * dVar1 + dStack_100 + (dVar11 * dVar2 - dVar8 * dVar3) + param_3[6];
  pdStack_2e8 = &dStack_2b0;
  pdStack_2e0 = &dStack_298;
  FUN_146dab002(param_1,&dStack_148,param_4,param_5);
  uVar5 = SUB84(dStack_290,0);
  uVar6 = (undefined4)((ulonglong)dStack_290 >> 0x20);
  dVar1 = (double)(-(ulonglong)(0.0 < param_5) & (ulonglong)(dStack_298 / param_5));
  uVar9 = SUB84(dVar1,0);
  uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dStack_2c0 = dStack_290;
  dStack_2b8 = dVar1;
  if (dVar1 <= 1.0) {
    if (DAT_14c75eff8 == '\0') {
      pdStack_2e0 = &dStack_2c0;
      pdStack_2e8 = &dStack_2b8;
      FUN_146d4aafb(SUB84(param_4[2] * dStack_260 + *param_4 * uStack_270 + param_4[1] * uStack_268,
                          0),SUB84(param_5,0),param_6,param_7);
      uVar9 = SUB84(dStack_2b8,0);
      uVar10 = (undefined4)((ulonglong)dStack_2b8 >> 0x20);
      uVar5 = SUB84(dStack_2c0,0);
      uVar6 = (undefined4)((ulonglong)dStack_2c0 >> 0x20);
    }
    *param_8 = CONCAT44(uVar10,uVar9);
    *param_9 = CONCAT44(uVar6,uVar5);
    param_10[2] = uStack_278;
    *param_10 = CONCAT44(uStack_284,uStack_288);
    param_10[1] = CONCAT44(uStack_27c,uStack_280);
    *(double *)(param_11 + 4) = dStack_260;
    *param_11 = (undefined4)uStack_270;
    param_11[1] = uStack_270._4_4_;
    param_11[2] = (undefined4)uStack_268;
    param_11[3] = uStack_268._4_4_;
    *param_12 = (undefined4)uStack_258;
  }
  if ((uStack_e0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return dVar1 <= 1.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d96826 FUN_146d96826 body=1148 status=ok
// SIG undefined FUN_146d96826(void)

bool FUN_146d96826(longlong param_1,longlong param_2,double *param_3,double *param_4,double param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 *param_8,undefined8 *param_9,
                  undefined8 *param_10,undefined4 *param_11,undefined4 *param_12)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auStack_308 [32];
  double *local_2e8;
  double *local_2e0;
  double local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  double dStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  uVar9 = (undefined4)param_7;
  uVar10 = (undefined4)((ulonglong)param_7 >> 0x20);
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  uVar5 = (undefined4)param_6;
  uVar6 = (undefined4)((ulonglong)param_6 >> 0x20);
  if (DAT_14c75eff8 == '\0') {
    uVar5 = 0;
    uVar6 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  local_138 = *(double *)(param_2 + 0x68);
  local_148 = *(double *)(param_2 + 0x58);
  dStack_140 = *(double *)(param_2 + 0x60);
  local_130 = *(undefined8 *)(param_2 + 0x70);
  uStack_128 = *(undefined8 *)(param_2 + 0x78);
  local_120 = *(undefined8 *)(param_2 + 0x80);
  local_298 = *param_3;
  dStack_290 = param_3[1];
  local_288 = *(undefined4 *)(param_3 + 2);
  uStack_284 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_280 = *(undefined4 *)(param_3 + 3);
  uStack_27c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_278 = 0;
  uStack_270 = 0.0;
  local_268 = 0.0;
  dStack_260 = 0.0;
  local_258 = 0x3ff0000000000000;
  uStack_250 = 0x3ff0000000000000;
  local_248 = 0x3ff0000000000000;
  uStack_240 = 0;
  FUN_1400c6592(&local_148,&local_110,&local_298);
  local_2c8 = CONCAT44(uVar10,uVar9);
  local_2d0 = CONCAT44(uVar6,uVar5);
  local_2d8 = param_5;
  local_2e8 = param_3;
  local_2e0 = param_4;
  FUN_146daadee(&local_298,param_1 + 0x20,param_2,&local_110);
  local_2a0 = (local_e8 - local_100) * 0.5;
  local_2a8 = (local_f0 - local_108) * 0.5;
  local_2b0 = (local_f8 - local_110) * 0.5;
  local_100 = local_100 + local_2a0;
  local_108 = local_108 + local_2a8;
  local_110 = local_110 + local_2b0;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  dVar1 = param_3[3];
  dVar11 = local_110 * dVar4 - dVar2 * local_100;
  dVar7 = local_108 * dVar2 - dVar3 * local_110;
  dVar8 = local_100 * dVar3 - dVar4 * local_108;
  dVar8 = dVar8 + dVar8;
  dVar11 = dVar11 + dVar11;
  dVar7 = dVar7 + dVar7;
  local_148 = (dVar7 * dVar3 - dVar11 * dVar4) + dVar1 * dVar8 + local_110 + param_3[4];
  dStack_140 = (dVar4 * dVar8 - dVar2 * dVar7) + param_3[3] * dVar11 + local_108 + param_3[5];
  local_138 = dVar7 * dVar1 + local_100 + (dVar11 * dVar2 - dVar8 * dVar3) + param_3[6];
  local_2e8 = &local_2b0;
  local_2e0 = &local_298;
  FUN_146dab002(param_1,&local_148,param_4,param_5);
  uVar5 = SUB84(dStack_290,0);
  uVar6 = (undefined4)((ulonglong)dStack_290 >> 0x20);
  dVar1 = (double)(-(ulonglong)(0.0 < param_5) & (ulonglong)(local_298 / param_5));
  uVar9 = SUB84(dVar1,0);
  uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_2c0 = dStack_290;
  local_2b8 = dVar1;
  if (dVar1 <= 1.0) {
    if (DAT_14c75eff8 == '\0') {
      local_2e0 = &local_2c0;
      local_2e8 = &local_2b8;
      FUN_146d4aafb(SUB84(param_4[2] * dStack_260 + *param_4 * uStack_270 + param_4[1] * local_268,0
                         ),SUB84(param_5,0),param_6,param_7);
      uVar9 = SUB84(local_2b8,0);
      uVar10 = (undefined4)((ulonglong)local_2b8 >> 0x20);
      uVar5 = SUB84(local_2c0,0);
      uVar6 = (undefined4)((ulonglong)local_2c0 >> 0x20);
    }
    *param_8 = CONCAT44(uVar10,uVar9);
    *param_9 = CONCAT44(uVar6,uVar5);
    param_10[2] = local_278;
    *param_10 = CONCAT44(uStack_284,local_288);
    param_10[1] = CONCAT44(uStack_27c,uStack_280);
    *(double *)(param_11 + 4) = dStack_260;
    *param_11 = (undefined4)uStack_270;
    param_11[1] = uStack_270._4_4_;
    param_11[2] = (undefined4)local_268;
    param_11[3] = local_268._4_4_;
    *param_12 = (undefined4)local_258;
  }
  if ((local_e0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return dVar1 <= 1.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d96ca4 thunk_FUN_146d96caa body=5 status=ok
// SIG undefined thunk_FUN_146d96caa(void)

bool thunk_FUN_146d96caa(longlong param_1,longlong param_2,double *param_3,double *param_4,
                        double param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                        undefined8 *param_9,undefined8 *param_10,undefined4 *param_11,
                        undefined4 *param_12)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auStack_308 [32];
  double *pdStack_2e8;
  double *pdStack_2e0;
  double dStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  double dStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  double dStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  ulonglong uStack_e0;
  
  uVar9 = (undefined4)param_7;
  uVar10 = (undefined4)((ulonglong)param_7 >> 0x20);
  uStack_e0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  uVar5 = (undefined4)param_6;
  uVar6 = (undefined4)((ulonglong)param_6 >> 0x20);
  if (DAT_14c75eff8 == '\0') {
    uVar5 = 0;
    uVar6 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  dStack_138 = *(double *)(param_2 + 0x68);
  dStack_148 = *(double *)(param_2 + 0x58);
  dStack_140 = *(double *)(param_2 + 0x60);
  uStack_130 = *(undefined8 *)(param_2 + 0x70);
  uStack_128 = *(undefined8 *)(param_2 + 0x78);
  uStack_120 = *(undefined8 *)(param_2 + 0x80);
  dStack_298 = *param_3;
  dStack_290 = param_3[1];
  uStack_288 = *(undefined4 *)(param_3 + 2);
  uStack_284 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_280 = *(undefined4 *)(param_3 + 3);
  uStack_27c = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_278 = 0;
  uStack_270 = 0.0;
  uStack_268 = 0.0;
  dStack_260 = 0.0;
  uStack_258 = 0x3ff0000000000000;
  uStack_250 = 0x3ff0000000000000;
  uStack_248 = 0x3ff0000000000000;
  uStack_240 = 0;
  FUN_1400c6592(&dStack_148,&dStack_110,&dStack_298);
  uStack_2c8 = CONCAT44(uVar10,uVar9);
  uStack_2d0 = CONCAT44(uVar6,uVar5);
  dStack_2d8 = param_5;
  pdStack_2e8 = param_3;
  pdStack_2e0 = param_4;
  FUN_146dac348(&dStack_298,param_1 + 0x20,param_2,&dStack_110);
  dStack_2a0 = (dStack_e8 - dStack_100) * 0.5;
  dStack_2a8 = (dStack_f0 - dStack_108) * 0.5;
  dStack_2b0 = (dStack_f8 - dStack_110) * 0.5;
  dStack_100 = dStack_100 + dStack_2a0;
  dStack_108 = dStack_108 + dStack_2a8;
  dStack_110 = dStack_110 + dStack_2b0;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  dVar1 = param_3[3];
  dVar11 = dStack_110 * dVar4 - dVar2 * dStack_100;
  dVar7 = dStack_108 * dVar2 - dVar3 * dStack_110;
  dVar8 = dStack_100 * dVar3 - dVar4 * dStack_108;
  dVar8 = dVar8 + dVar8;
  dVar11 = dVar11 + dVar11;
  dVar7 = dVar7 + dVar7;
  dStack_148 = (dVar7 * dVar3 - dVar11 * dVar4) + dVar1 * dVar8 + dStack_110 + param_3[4];
  dStack_140 = (dVar4 * dVar8 - dVar2 * dVar7) + param_3[3] * dVar11 + dStack_108 + param_3[5];
  dStack_138 = dVar7 * dVar1 + dStack_100 + (dVar11 * dVar2 - dVar8 * dVar3) + param_3[6];
  pdStack_2e8 = &dStack_2b0;
  pdStack_2e0 = &dStack_298;
  FUN_146dac55c(param_1,&dStack_148,param_4,param_5);
  uVar5 = SUB84(dStack_290,0);
  uVar6 = (undefined4)((ulonglong)dStack_290 >> 0x20);
  dVar1 = (double)(-(ulonglong)(0.0 < param_5) & (ulonglong)(dStack_298 / param_5));
  uVar9 = SUB84(dVar1,0);
  uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dStack_2c0 = dStack_290;
  dStack_2b8 = dVar1;
  if (dVar1 <= 1.0) {
    if (DAT_14c75eff8 == '\0') {
      pdStack_2e0 = &dStack_2c0;
      pdStack_2e8 = &dStack_2b8;
      FUN_146d4aafb(SUB84(param_4[2] * dStack_260 + *param_4 * uStack_270 + param_4[1] * uStack_268,
                          0),SUB84(param_5,0),param_6,param_7);
      uVar9 = SUB84(dStack_2b8,0);
      uVar10 = (undefined4)((ulonglong)dStack_2b8 >> 0x20);
      uVar5 = SUB84(dStack_2c0,0);
      uVar6 = (undefined4)((ulonglong)dStack_2c0 >> 0x20);
    }
    *param_8 = CONCAT44(uVar10,uVar9);
    *param_9 = CONCAT44(uVar6,uVar5);
    param_10[2] = uStack_278;
    *param_10 = CONCAT44(uStack_284,uStack_288);
    param_10[1] = CONCAT44(uStack_27c,uStack_280);
    *(double *)(param_11 + 4) = dStack_260;
    *param_11 = (undefined4)uStack_270;
    param_11[1] = uStack_270._4_4_;
    param_11[2] = (undefined4)uStack_268;
    param_11[3] = uStack_268._4_4_;
    *param_12 = (undefined4)uStack_258;
  }
  if ((uStack_e0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return dVar1 <= 1.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d96caa FUN_146d96caa body=1148 status=ok
// SIG undefined FUN_146d96caa(void)

bool FUN_146d96caa(longlong param_1,longlong param_2,double *param_3,double *param_4,double param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 *param_8,undefined8 *param_9,
                  undefined8 *param_10,undefined4 *param_11,undefined4 *param_12)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auStack_308 [32];
  double *local_2e8;
  double *local_2e0;
  double local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  double dStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  uVar9 = (undefined4)param_7;
  uVar10 = (undefined4)((ulonglong)param_7 >> 0x20);
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  uVar5 = (undefined4)param_6;
  uVar6 = (undefined4)((ulonglong)param_6 >> 0x20);
  if (DAT_14c75eff8 == '\0') {
    uVar5 = 0;
    uVar6 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  local_138 = *(double *)(param_2 + 0x68);
  local_148 = *(double *)(param_2 + 0x58);
  dStack_140 = *(double *)(param_2 + 0x60);
  local_130 = *(undefined8 *)(param_2 + 0x70);
  uStack_128 = *(undefined8 *)(param_2 + 0x78);
  local_120 = *(undefined8 *)(param_2 + 0x80);
  local_298 = *param_3;
  dStack_290 = param_3[1];
  local_288 = *(undefined4 *)(param_3 + 2);
  uStack_284 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_280 = *(undefined4 *)(param_3 + 3);
  uStack_27c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_278 = 0;
  uStack_270 = 0.0;
  local_268 = 0.0;
  dStack_260 = 0.0;
  local_258 = 0x3ff0000000000000;
  uStack_250 = 0x3ff0000000000000;
  local_248 = 0x3ff0000000000000;
  uStack_240 = 0;
  FUN_1400c6592(&local_148,&local_110,&local_298);
  local_2c8 = CONCAT44(uVar10,uVar9);
  local_2d0 = CONCAT44(uVar6,uVar5);
  local_2d8 = param_5;
  local_2e8 = param_3;
  local_2e0 = param_4;
  FUN_146dac348(&local_298,param_1 + 0x20,param_2,&local_110);
  local_2a0 = (local_e8 - local_100) * 0.5;
  local_2a8 = (local_f0 - local_108) * 0.5;
  local_2b0 = (local_f8 - local_110) * 0.5;
  local_100 = local_100 + local_2a0;
  local_108 = local_108 + local_2a8;
  local_110 = local_110 + local_2b0;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  dVar1 = param_3[3];
  dVar11 = local_110 * dVar4 - dVar2 * local_100;
  dVar7 = local_108 * dVar2 - dVar3 * local_110;
  dVar8 = local_100 * dVar3 - dVar4 * local_108;
  dVar8 = dVar8 + dVar8;
  dVar11 = dVar11 + dVar11;
  dVar7 = dVar7 + dVar7;
  local_148 = (dVar7 * dVar3 - dVar11 * dVar4) + dVar1 * dVar8 + local_110 + param_3[4];
  dStack_140 = (dVar4 * dVar8 - dVar2 * dVar7) + param_3[3] * dVar11 + local_108 + param_3[5];
  local_138 = dVar7 * dVar1 + local_100 + (dVar11 * dVar2 - dVar8 * dVar3) + param_3[6];
  local_2e8 = &local_2b0;
  local_2e0 = &local_298;
  FUN_146dac55c(param_1,&local_148,param_4,param_5);
  uVar5 = SUB84(dStack_290,0);
  uVar6 = (undefined4)((ulonglong)dStack_290 >> 0x20);
  dVar1 = (double)(-(ulonglong)(0.0 < param_5) & (ulonglong)(local_298 / param_5));
  uVar9 = SUB84(dVar1,0);
  uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_2c0 = dStack_290;
  local_2b8 = dVar1;
  if (dVar1 <= 1.0) {
    if (DAT_14c75eff8 == '\0') {
      local_2e0 = &local_2c0;
      local_2e8 = &local_2b8;
      FUN_146d4aafb(SUB84(param_4[2] * dStack_260 + *param_4 * uStack_270 + param_4[1] * local_268,0
                         ),SUB84(param_5,0),param_6,param_7);
      uVar9 = SUB84(local_2b8,0);
      uVar10 = (undefined4)((ulonglong)local_2b8 >> 0x20);
      uVar5 = SUB84(local_2c0,0);
      uVar6 = (undefined4)((ulonglong)local_2c0 >> 0x20);
    }
    *param_8 = CONCAT44(uVar10,uVar9);
    *param_9 = CONCAT44(uVar6,uVar5);
    param_10[2] = local_278;
    *param_10 = CONCAT44(uStack_284,local_288);
    param_10[1] = CONCAT44(uStack_27c,uStack_280);
    *(double *)(param_11 + 4) = dStack_260;
    *param_11 = (undefined4)uStack_270;
    param_11[1] = uStack_270._4_4_;
    param_11[2] = (undefined4)local_268;
    param_11[3] = local_268._4_4_;
    *param_12 = (undefined4)local_258;
  }
  if ((local_e0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return dVar1 <= 1.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d97128 FUN_146d97128 body=859 status=ok
// SIG undefined FUN_146d97128(void)

undefined4 * FUN_146d97128(longlong param_1,undefined4 *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_1a8 [32];
  double *local_188;
  undefined4 *local_180;
  undefined1 *local_178;
  double *local_170;
  double *local_168;
  undefined4 *local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  longlong local_138;
  undefined8 uStack_130;
  double local_128;
  undefined1 local_119;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *param_2 = 0xffffffff;
  *(undefined8 *)(param_2 + 2) = 0x7fefffffffffffff;
  *(undefined1 *)(param_2 + 4) = 0;
  local_128 = param_4 * param_4;
  local_140 = param_3[1] + param_4;
  local_148 = *param_3 + param_4;
  local_150 = param_3[1] - param_4;
  local_158 = *param_3 - param_4;
  local_138 = 0;
  uStack_130 = 0;
  FUN_1401ad93c(local_158,&local_158,&local_138);
  lVar5 = local_138;
  local_178 = &local_119;
  lVar9 = (longlong)(int)uStack_130;
  local_170 = param_3;
  local_168 = &local_128;
  local_160 = param_2;
  if (lVar9 != 0) {
    lVar10 = 0;
    local_180 = param_2;
    do {
      uVar3 = *(ushort *)(param_1 + 0x92);
      iVar8 = *(int *)(lVar5 + 4 + lVar10) * (uVar3 - 1) + *(int *)(lVar5 + lVar10);
      iVar6 = iVar8 / (int)(uVar3 - 1) + iVar8;
      dVar1 = *(double *)(param_1 + 0x80);
      lVar4 = *(longlong *)(param_1 + 0x20);
      lVar7 = (longlong)iVar6;
      dVar2 = *(double *)(param_1 + 0xa0);
      dVar12 = (double)(iVar6 % (int)(uint)uVar3);
      dVar11 = (double)(iVar6 / (int)(uint)uVar3);
      local_118 = *(double *)(param_1 + 0x50) * dVar12;
      local_110 = *(double *)(param_1 + 0x58) * dVar11;
      local_c0 = *(double *)(param_1 + 0x60);
      local_108 = ((double)*(ushort *)(lVar4 + lVar7 * 2) * dVar2 + dVar1) * local_c0;
      local_100 = (dVar12 + 1.0) * *(double *)(param_1 + 0x50);
      local_f0 = ((double)*(ushort *)(lVar4 + 2 + lVar7 * 2) * dVar2 + dVar1) * local_c0;
      local_e0 = (dVar11 + 1.0) * *(double *)(param_1 + 0x58);
      local_d8 = ((double)*(ushort *)(lVar4 + ((ulonglong)uVar3 + lVar7) * 2) * dVar2 + dVar1) *
                 local_c0;
      local_c0 = ((double)*(ushort *)(lVar4 + 2 + ((ulonglong)uVar3 + lVar7) * 2) * dVar2 + dVar1) *
                 local_c0;
      local_188 = &local_d0;
      local_f8 = local_110;
      local_e8 = local_118;
      local_d0 = local_100;
      local_c8 = local_e0;
      FUN_1429af5f0(&local_178,iVar8 * 2,&local_118,&local_100);
      local_188 = &local_e8;
      FUN_1429af5f0(&local_178,iVar8 * 2 + 1,&local_118,&local_d0);
      lVar10 = lVar10 + 8;
      param_2 = local_180;
    } while (lVar9 * 8 != lVar10);
  }
  if (local_138 != 0) {
    FUN_1400020a8(local_138);
  }
  if ((local_b0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146d97484 FUN_146d97484 body=301 status=ok
// SIG undefined FUN_146d97484(void)

double FUN_146d97484(longlong param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int local_88 [2];
  double local_80;
  char local_78;
  double local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = param_2[1] / *(double *)(param_1 + 0x58);
  local_50 = *param_2 / *(double *)(param_1 + 0x50);
  FUN_146d975b2(&local_70,&local_50,param_1 + 0x20,param_1 + 0xb0);
  param_3[2] = local_58;
  *(undefined4 *)param_3 = local_68;
  *(undefined4 *)((longlong)param_3 + 4) = uStack_64;
  *(undefined4 *)(param_3 + 1) = uStack_60;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_5c;
  dVar1 = param_2[2] - local_70;
  FUN_146d97128(param_1,local_88,param_2,ABS(dVar1));
  if (-1 < local_88[0]) {
    FUN_1429af9be(param_1,&local_a0);
    param_3[2] = local_90;
    *param_3 = local_a0;
    param_3[1] = uStack_98;
    if (local_80 < 0.0) {
      dVar1 = sqrt(local_80);
    }
    else {
      dVar1 = SQRT(local_80);
    }
    if (local_78 != '\0') {
      dVar1 = -dVar1;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return dVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d975b2 FUN_146d975b2 body=1437 status=ok
// SIG undefined FUN_146d975b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d975b2(double *param_1,longlong param_2,longlong *param_3,double *param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  ulonglong uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined4 unaff_XMM10_Da;
  undefined4 uVar24;
  undefined4 unaff_XMM10_Db;
  undefined4 uVar25;
  undefined4 unaff_XMM10_Dc;
  undefined4 uVar26;
  undefined4 unaff_XMM10_Dd;
  undefined4 uVar27;
  undefined1 auStack_118 [32];
  undefined *local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  bVar14 = true;
  do {
    bVar12 = bVar14;
    uVar27 = unaff_XMM10_Dd;
    uVar26 = unaff_XMM10_Dc;
    uVar25 = unaff_XMM10_Db;
    uVar24 = unaff_XMM10_Da;
    uVar13 = (ulonglong)(byte)~bVar12;
    dVar2 = *(double *)(param_2 + uVar13 * 8);
    dVar22 = param_4[uVar13 + 2];
    unaff_XMM10_Da = SUB84(dVar22,0);
    unaff_XMM10_Db = (undefined4)((ulonglong)dVar22 >> 0x20);
    if (dVar2 <= dVar22) {
      dVar22 = param_4[uVar13];
      unaff_XMM10_Da = SUB84(dVar22,0);
      unaff_XMM10_Db = (undefined4)((ulonglong)dVar22 >> 0x20);
      if (dVar22 <= dVar2) {
        unaff_XMM10_Da = SUB84(dVar2,0);
        unaff_XMM10_Db = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
    }
    unaff_XMM10_Dc = 0;
    unaff_XMM10_Dd = 0;
    bVar14 = false;
  } while (bVar12);
  iVar16 = (int)(((double)CONCAT44(uVar25,uVar24) - *param_4) / param_4[5]);
  iVar18 = (int)(((double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da) - param_4[1]) / param_4[6]);
  iVar15 = *(int *)(param_4 + 4);
  iVar4 = *(int *)((longlong)param_4 + 0x24);
  iVar19 = 0;
  if (0 < iVar16) {
    iVar19 = iVar16;
  }
  if (iVar15 <= iVar16) {
    iVar19 = iVar15 + -1;
  }
  iVar16 = 0;
  if (0 < iVar18) {
    iVar16 = iVar18;
  }
  if (iVar4 <= iVar18) {
    iVar16 = iVar4 + -1;
  }
  iVar18 = 0;
  if (0 < iVar19) {
    iVar18 = iVar19;
  }
  if (iVar15 <= iVar19) {
    iVar18 = iVar15 + -1;
  }
  iVar15 = 0;
  if (0 < iVar16) {
    iVar15 = iVar16;
  }
  if (iVar4 <= iVar16) {
    iVar15 = iVar4 + -1;
  }
  uVar20 = (uint)*(ushort *)((longlong)param_3 + 0x72);
  iVar18 = iVar15 * uVar20 + iVar18;
  dVar2 = (double)param_3[0xc];
  lVar5 = *param_3;
  lVar17 = (longlong)iVar18;
  dVar22 = (double)param_3[0x10];
  lVar1 = (ulonglong)*(ushort *)((longlong)param_3 + 0x72) + lVar17;
  dVar11 = (double)param_3[6] * (double)(iVar18 % (int)uVar20);
  dVar9 = (double)param_3[7] * (double)(iVar18 / (int)uVar20);
  dVar3 = (double)param_3[8];
  dVar10 = ((double)*(ushort *)(lVar5 + lVar17 * 2) * dVar22 + dVar2) * dVar3;
  dVar6 = ((double)(iVar18 % (int)uVar20) + 1.0) * (double)param_3[6];
  dVar8 = ((double)(iVar18 / (int)uVar20) + 1.0) * (double)param_3[7];
  dVar21 = ((double)*(ushort *)(lVar5 + 2 + lVar1 * 2) * dVar22 + dVar2) * dVar3;
  auVar23._4_4_ = uVar25;
  auVar23._0_4_ = uVar24;
  auVar23._8_4_ = uVar26;
  auVar23._12_4_ = uVar27;
  auVar23 = roundsd(ZEXT816(0),auVar23,9);
  local_f0 = (double)CONCAT44(uVar25,uVar24) - auVar23._0_8_;
  auVar7._4_4_ = unaff_XMM10_Db;
  auVar7._0_4_ = unaff_XMM10_Da;
  auVar7._8_8_ = 0;
  auVar23 = roundsd(ZEXT816(0),auVar7,9);
  local_e8 = (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da) - auVar23._0_8_;
  iVar15 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110);
  if (local_f0 <= local_e8) {
    dVar3 = ((double)*(ushort *)(lVar5 + 2 + lVar17 * 2) * dVar22 + dVar2) * dVar3;
    if (iVar15 < DAT_14c993848) {
      FUN_144b3d300(&DAT_14c993848);
      if (DAT_14c993848 == -1) {
        _DAT_14c993800 = 0;
        uRam000000014c993808 = 0;
        _DAT_14c993810 = 0;
        _DAT_14c993818 = 0x3ff0000000000000;
        _DAT_14c993820 = 0;
        uRam000000014c993828 = 0;
        _DAT_14c993830 = 0x3ff0000000000000;
        _DAT_14c993838 = 0x3ff0000000000000;
        _DAT_14c993840 = 0;
        _Init_thread_footer(&DAT_14c993848);
      }
    }
    local_e0 = 0;
    local_f8 = &DAT_14c993830;
    FUN_14276f93e(&local_d8,&local_f0,&DAT_14c993800,&DAT_14c993818);
    *param_1 = local_c8 * dVar21 + local_d8 * dVar10 + local_d0 * dVar3;
    dVar3 = dVar3 - dVar10;
    dVar6 = dVar6 - dVar11;
    dVar8 = dVar8 - dVar9;
    dVar22 = dVar6 * dVar8 - dVar6 * (dVar9 - dVar9);
    dVar2 = dVar6 * dVar3 - (dVar21 - dVar10) * dVar6;
    dVar3 = (dVar9 - dVar9) * (dVar21 - dVar10) - dVar8 * dVar3;
    dVar21 = dVar22 * dVar22 + dVar3 * dVar3 + dVar2 * dVar2;
  }
  else {
    dVar3 = ((double)*(ushort *)(lVar5 + lVar1 * 2) * dVar22 + dVar2) * dVar3;
    if (iVar15 < DAT_14c9937f8) {
      FUN_144b3d300(&DAT_14c9937f8);
      if (DAT_14c9937f8 == -1) {
        _DAT_14c9937b0 = 0;
        uRam000000014c9937b8 = 0;
        _DAT_14c9937c0 = 0;
        _DAT_14c9937c8 = 0x3ff0000000000000;
        _DAT_14c9937d0 = 0x3ff0000000000000;
        _DAT_14c9937d8 = 0;
        _DAT_14c9937e0 = 0;
        _DAT_14c9937e8 = 0x3ff0000000000000;
        _DAT_14c9937f0 = 0;
        _Init_thread_footer(&DAT_14c9937f8);
      }
    }
    local_e0 = 0;
    local_f8 = &DAT_14c9937e0;
    FUN_14276f93e(&local_d8,&local_f0,&DAT_14c9937b0,&DAT_14c9937c8);
    *param_1 = local_c8 * dVar3 + local_d8 * dVar10 + local_d0 * dVar21;
    dVar8 = dVar8 - dVar9;
    dVar6 = dVar6 - dVar11;
    dVar3 = dVar3 - dVar10;
    dVar22 = dVar6 * dVar8 - (dVar11 - dVar11) * dVar8;
    dVar2 = (dVar21 - dVar10) * (dVar11 - dVar11) - dVar3 * dVar6;
    dVar3 = dVar3 * dVar8 - dVar8 * (dVar21 - dVar10);
    dVar21 = dVar22 * dVar22 + dVar3 * dVar3 + dVar2 * dVar2;
  }
  dVar21 = 1.0 / SQRT(dVar21);
  param_1[1] = dVar21 * dVar3;
  param_1[2] = dVar2 * dVar21;
  param_1[3] = dVar22 * dVar21;
  if ((local_c0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d97b50 FUN_146d97b50 body=38 status=ok
// SIG undefined FUN_146d97b50(void)

undefined8 FUN_146d97b50(undefined8 param_1,int param_2)

{
  FUN_140bd5786();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d97ba6 FUN_146d97ba6 body=308 status=ok
// SIG undefined FUN_146d97ba6(void)

undefined4 FUN_146d97ba6(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_1b8 [40];
  undefined **local_190 [19];
  undefined8 local_f8;
  undefined **local_f0 [18];
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_48 = 0;
  uStack_40 = 0;
  memset(local_f0,0,0x90);
  FUN_144869430(local_f0);
  local_60 = 0;
  local_f0[0] = &PTR_FUN_149e1e590;
  local_50 = 0;
  local_58 = &local_48;
  FUN_144a69558(local_f0,1);
  (*(code *)local_f0[0][0x1e])(local_f0,0);
  local_f0[0] = &PTR_FUN_149e1e330;
  FUN_140713482(local_190,local_f0);
  local_190[0] = &PTR_FUN_149f52ef0;
  uVar2 = FUN_14001cc68(0x158,0x10);
  FUN_140dffb3a(uVar2);
  local_f8 = uVar2;
  FUN_140d039f0(param_1,local_190);
  uVar1 = (*(code *)PTR_FUN_14c75b148)(local_48,uStack_3c,0);
  FUN_14041e0ac(local_190);
  FUN_144a7fc42(local_f0);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d97cdc FUN_146d97cdc body=38 status=ok
// SIG undefined FUN_146d97cdc(void)

undefined8 FUN_146d97cdc(undefined8 param_1,int param_2)

{
  FUN_140bd5786();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d97d1a FUN_146d97d1a body=93 status=ok
// SIG undefined FUN_146d97d1a(void)

void FUN_146d97d1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f539d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146d97d78 FUN_146d97d78 body=126 status=ok
// SIG undefined FUN_146d97d78(void)

void FUN_146d97d78(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f539d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146d97de7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146d97e04 FUN_146d97e04 body=21 status=ok
// SIG undefined FUN_146d97e04(void)

undefined8 FUN_146d97e04(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146d97e1a FUN_146d97e1a body=96 status=ok
// SIG undefined FUN_146d97e1a(void)

void FUN_146d97e1a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146d97e7a FUN_146d97e7a body=96 status=ok
// SIG undefined FUN_146d97e7a(void)

void FUN_146d97e7a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
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



// FUNCTION 146d97eda FUN_146d97eda body=1 status=ok
// SIG undefined FUN_146d97eda(void)

void FUN_146d97eda(void)

{
  return;
}



// FUNCTION 146d97edc FUN_146d97edc body=29 status=ok
// SIG undefined FUN_146d97edc(void)

undefined8 FUN_146d97edc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d97efa FUN_146d97efa body=143 status=ok
// SIG undefined FUN_146d97efa(void)

void FUN_146d97efa(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d97f8a FUN_146d97f8a body=62 status=ok
// SIG undefined FUN_146d97f8a(void)

void FUN_146d97f8a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d97fc8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146d97fc8 FUN_146d97fc8 body=93 status=ok
// SIG undefined FUN_146d97fc8(void)

ulonglong FUN_146d97fc8(uint param_1,uint param_2)

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



// FUNCTION 146d98026 FUN_146d98026 body=132 status=ok
// SIG undefined FUN_146d98026(void)

void FUN_146d98026(longlong param_1,int param_2)

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



// FUNCTION 146d980ac FUN_146d980ac body=83 status=ok
// SIG undefined FUN_146d980ac(void)

undefined8 * FUN_146d980ac(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15) = 0;
  FUN_146d98100();
  while ((param_1[2] != 0 &&
         (*(char *)(*(longlong *)(param_1[2] + 0x230) + (longlong)*(int *)(param_1 + 3)) == '\x01'))
        ) {
    FUN_146d8d3b0(param_1);
  }
  return param_1;
}



// FUNCTION 146d98100 FUN_146d98100 body=211 status=ok
// SIG undefined FUN_146d98100(void)

void FUN_146d98100(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  
  plVar2 = (longlong *)*param_1;
  uVar1 = *(uint *)(param_1 + 4);
  uVar5 = (ulonglong)uVar1;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar8 = (longlong)(int)uVar1 << 4 | 8;
    uVar5 = (longlong)(int)uVar1;
    do {
      lVar6 = *(longlong *)(*plVar2 + uVar8);
      if (lVar6 == 0) {
        piVar9 = (int *)(*(longlong *)(*plVar2 + -8 + uVar8) + 0x18);
      }
      else {
        piVar9 = (int *)(lVar6 + 8);
      }
      if (*piVar9 != 0) goto LAB_146d9815a;
      uVar10 = uVar5 + 1;
      *(int *)(param_1 + 4) = (int)uVar5 + 1;
      uVar8 = uVar8 + 0x10;
      uVar5 = uVar10;
    } while ((longlong)uVar10 < (longlong)(int)plVar2[1]);
    uVar5 = uVar10 & 0xffffffff;
  }
LAB_146d9815a:
  *(undefined4 *)(param_1 + 5) = 0;
  if ((int)uVar5 < (int)plVar2[1]) {
    lVar6 = (longlong)(int)uVar5 * 0x10;
    puVar3 = *(undefined8 **)(*plVar2 + 8 + lVar6);
    param_1[1] = (longlong)puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      lVar6 = *(longlong *)(*plVar2 + lVar6);
      uVar4 = 0;
    }
    else {
      uVar4 = (undefined4)(*(longlong **)*puVar3)[1];
      lVar6 = **(longlong **)*puVar3;
    }
    if (lVar6 == 0) {
      uVar7 = 0;
      lVar6 = 0;
    }
    else {
      uVar7 = *(undefined1 *)(lVar6 + 0x70);
    }
    param_1[2] = lVar6;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined1 *)((longlong)param_1 + 0x1c) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar6 + 0x18);
    return;
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 146d981d4 FUN_146d981d4 body=114 status=ok
// SIG undefined FUN_146d981d4(void)

void FUN_146d981d4(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 146d98288 FUN_146d98288 body=90 status=ok
// SIG undefined FUN_146d98288(void)

void FUN_146d98288(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar1 = iVar2 - (param_3 + param_2);
    if (iVar1 != 0) {
      _Dst = (void *)((longlong)param_2 * 0x30 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 * 0x30 + (longlong)_Dst),(longlong)iVar1 * 0x30);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar2 - param_3;
  }
  return;
}



// FUNCTION 146d982e8 FUN_146d982e8 body=47 status=ok
// SIG undefined FUN_146d982e8(void)

longlong FUN_146d982e8(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d98318 FUN_146d98318 body=113 status=ok
// SIG undefined FUN_146d98318(void)

void FUN_146d98318(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 146d9838a FUN_146d9838a body=48 status=ok
// SIG undefined FUN_146d9838a(void)

void FUN_146d9838a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x120,0x10);
  }
  return;
}



// FUNCTION 146d983ba FUN_146d983ba body=48 status=ok
// SIG undefined FUN_146d983ba(void)

void FUN_146d983ba(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 146d983ea FUN_146d983ea body=48 status=ok
// SIG undefined FUN_146d983ea(void)

void FUN_146d983ea(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x1e0,0x10);
  }
  return;
}



// FUNCTION 146d9841a FUN_146d9841a body=58 status=ok
// SIG undefined FUN_146d9841a(void)

int FUN_146d9841a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) == iVar1) {
    FUN_146d985f6(param_1,iVar1);
  }
  FUN_146d9857c((longlong)iVar1 * 0x1e0 + *param_1);
  return iVar1;
}



// FUNCTION 146d98454 FUN_146d98454 body=296 status=ok
// SIG undefined FUN_146d98454(void)

longlong FUN_146d98454(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  FUN_146d9868a();
  puVar6 = (undefined8 *)(param_2 + 0x18);
  puVar7 = (undefined8 *)(param_1 + 0x18);
  for (lVar5 = 0xf; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(param_2 + 0x90);
  FUN_146d986e2(param_1 + 0x98,param_2 + 0x98);
  puVar6 = *(undefined8 **)(param_2 + 0xa8);
  puVar7 = *(undefined8 **)(param_1 + 0xa8);
  if (puVar7 != puVar6) {
    *(undefined8 **)(param_1 + 0xa8) = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
    }
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar7 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && (*(int *)((longlong)puVar7 + 0xc) == 0)) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0xb0);
  lVar5 = *(longlong *)(param_2 + 0xb8);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  *(longlong *)(param_1 + 0xb8) = lVar5;
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
  FUN_146d9873c(param_1 + 0xc0,param_2 + 0xc0);
  FUN_146d98796(param_1 + 0xd0,param_2 + 0xd0);
  FUN_146d98796(param_1 + 0xe0,param_2 + 0xe0);
  return param_1;
}



// FUNCTION 146d9857c FUN_146d9857c body=122 status=ok
// SIG undefined FUN_146d9857c(void)

void FUN_146d9857c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 0x12) = 4;
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
  *(undefined2 *)(param_1 + 0x30) = 4;
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
  return;
}



// FUNCTION 146d985f6 FUN_146d985f6 body=146 status=ok
// SIG undefined FUN_146d985f6(void)

void FUN_146d985f6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1e0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1e0)) {
      uVar5 = uVar4 / 0x1e0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1e0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d9868a FUN_146d9868a body=88 status=ok
// SIG undefined FUN_146d9868a(void)

undefined8 * FUN_146d9868a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  lVar4 = param_2[2];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[2];
  param_1[1] = uVar3;
  param_1[2] = lVar4;
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



// FUNCTION 146d986e2 FUN_146d986e2 body=89 status=ok
// SIG undefined FUN_146d986e2(void)

undefined8 * FUN_146d986e2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146d987ee(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x90);
      }
    }
  }
  return param_1;
}



// FUNCTION 146d9873c FUN_146d9873c body=89 status=ok
// SIG undefined FUN_146d9873c(void)

undefined8 * FUN_146d9873c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146d98862(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 146d98796 FUN_146d98796 body=88 status=ok
// SIG undefined FUN_146d98796(void)

undefined8 * FUN_146d98796(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146d988d6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 146d987ee FUN_146d987ee body=115 status=ok
// SIG undefined FUN_146d987ee(void)

void FUN_146d987ee(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,0x10);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146d98862 FUN_146d98862 body=115 status=ok
// SIG undefined FUN_146d98862(void)

void FUN_146d98862(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146d988d6 FUN_146d988d6 body=98 status=ok
// SIG undefined FUN_146d988d6(void)

void FUN_146d988d6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146d98938 FUN_146d98938 body=230 status=ok
// SIG undefined FUN_146d98938(void)

undefined8 * FUN_146d98938(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 146d98a20 FUN_146d98a20 body=69 status=ok
// SIG undefined FUN_146d98a20(void)

void FUN_146d98a20(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)(*param_1 + (longlong)param_2 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_1446f48e2(param_1 + 2,iVar2);
  }
  *(int *)(param_1[2] + (longlong)iVar2 * 4) = param_2;
  return;
}



// FUNCTION 146d98a66 FUN_146d98a66 body=743 status=ok
// SIG undefined FUN_146d98a66(void)

void FUN_146d98a66(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  undefined **local_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined **local_68;
  longlong local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1429aed2c();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc08);
  if (iVar6 < 0x32) {
    local_60 = 0;
    uStack_58 = 0;
    local_68 = &PTR_LAB_149f48c00;
    FUN_146ca6f88(&local_60,*(undefined4 *)(param_1 + 0x280),0);
    if (0 < *(int *)(param_1 + 0x280)) {
      lVar8 = 8;
      lVar9 = 0;
      do {
        lVar5 = *(longlong *)(param_1 + 0x278);
        fVar1 = *(float *)(lVar5 + lVar8);
        fVar2 = *(float *)(lVar5 + -4 + lVar8);
        *(double *)(local_60 + -0x10 + lVar8 * 2) = (double)*(float *)(lVar5 + -8 + lVar8);
        *(double *)(local_60 + -8 + lVar8 * 2) = (double)fVar2;
        *(double *)(local_60 + lVar8 * 2) = (double)fVar1;
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0xc;
      } while (lVar9 < *(int *)(param_1 + 0x280));
    }
    local_78 = 0;
    uStack_70 = 0;
    local_80 = &PTR_LAB_149f48c00;
    FUN_146ca6f88(&local_78,*(undefined4 *)(param_1 + 0x298),0);
    if (0 < *(int *)(param_1 + 0x298)) {
      lVar8 = 8;
      lVar9 = 0;
      do {
        lVar5 = *(longlong *)(param_1 + 0x290);
        fVar1 = *(float *)(lVar5 + lVar8);
        fVar2 = *(float *)(lVar5 + -4 + lVar8);
        *(double *)(local_78 + -0x10 + lVar8 * 2) = (double)*(float *)(lVar5 + -8 + lVar8);
        *(double *)(local_78 + -8 + lVar8 * 2) = (double)fVar2;
        *(double *)(local_78 + lVar8 * 2) = (double)fVar1;
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0xc;
      } while (lVar9 < *(int *)(param_1 + 0x298));
    }
    uVar7 = FUN_146d98e76(param_2,&local_60);
    FUN_146d98e76(uVar7,&local_78);
    FUN_140627580((longlong *)(param_1 + 0x278),uStack_58 & 0xffffffff,0);
    if (0 < (int)uStack_58) {
      lVar8 = 8;
      lVar9 = 0;
      do {
        dVar3 = *(double *)(local_60 + lVar8 * 2);
        dVar4 = *(double *)(local_60 + -8 + lVar8 * 2);
        lVar5 = *(longlong *)(param_1 + 0x278);
        *(float *)(lVar5 + -8 + lVar8) = (float)*(double *)(local_60 + -0x10 + lVar8 * 2);
        *(float *)(lVar5 + -4 + lVar8) = (float)dVar4;
        *(float *)(lVar5 + lVar8) = (float)dVar3;
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0xc;
      } while (lVar9 < (int)uStack_58);
    }
    FUN_140627580((longlong *)(param_1 + 0x290),uStack_70 & 0xffffffff,0);
    if (0 < (int)uStack_70) {
      lVar8 = 8;
      lVar9 = 0;
      do {
        dVar3 = *(double *)(local_78 + lVar8 * 2);
        dVar4 = *(double *)(local_78 + -8 + lVar8 * 2);
        lVar5 = *(longlong *)(param_1 + 0x290);
        *(float *)(lVar5 + -8 + lVar8) = (float)*(double *)(local_78 + -0x10 + lVar8 * 2);
        *(float *)(lVar5 + -4 + lVar8) = (float)dVar4;
        *(float *)(lVar5 + lVar8) = (float)dVar3;
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0xc;
      } while (lVar9 < (int)uStack_70);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar7 = FUN_146d8a7a9(param_2,param_1 + 0x278);
    FUN_146d8a7a9(uVar7,param_1 + 0x290);
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar6 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (8 < iVar6) {
    FUN_146d98f7c(param_2,param_1 + 0x2a8);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d98d90 FUN_146d98d90 body=79 status=ok
// SIG undefined FUN_146d98d90(void)

void FUN_146d98d90(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar1 = iVar2 - (param_3 + param_2);
    if (iVar1 != 0) {
      _Dst = (void *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar1 << 6);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar2 - param_3;
  }
  return;
}



// FUNCTION 146d98de6 FUN_146d98de6 body=47 status=ok
// SIG undefined FUN_146d98de6(void)

longlong FUN_146d98de6(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d98e16 FUN_146d98e16 body=96 status=ok
// SIG undefined FUN_146d98e16(void)

void FUN_146d98e16(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 6,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,0x10);
  }
  return;
}



// FUNCTION 146d98e76 FUN_146d98e76 body=260 status=ok
// SIG undefined FUN_146d98e76(void)

longlong * FUN_146d98e76(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_140268ec4(param_2);
    }
    FUN_146ca6f88(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_141724e7a(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x18;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146d98f7c FUN_146d98f7c body=254 status=ok
// SIG undefined FUN_146d98f7c(void)

longlong * FUN_146d98f7c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146d98e16(param_2);
    }
    FUN_140331c9c(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146d9907c(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x40;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146d9907c FUN_146d9907c body=740 status=ok
// SIG undefined FUN_146d9907c(void)

longlong * FUN_146d9907c(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cbc8);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cbf8);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cbb8);
  iVar2 = FUN_1448332aa(param_1,&DAT_149e3cbc8);
  iVar3 = FUN_1448332aa(param_1,&DAT_149e3cbf8);
  iVar4 = FUN_1448332aa(param_1,&DAT_149e3cbb8);
  if ((iVar2 < 3) && (iVar3 < 0x10)) {
    local_a8 = 0.0;
    dStack_a0 = 0.0;
    local_98 = 0.0;
    dStack_90 = 1.0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = 0;
    uStack_5c = 0x3ff00000;
    local_58 = 0x3ff0000000000000;
    uStack_50 = 0;
    FUN_1400f4f7e(param_1,&local_a8);
    FUN_14480c34d(param_1,&local_88);
    FUN_14480c34d(param_1,&local_68);
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      uStack_70 = 0;
      uStack_50 = 0;
    }
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 6,4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 6) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    *param_2 = local_88;
    param_2[1] = uStack_80;
    param_2[2] = local_78;
    *(float *)(param_2 + 4) = (float)local_a8;
    *(float *)((longlong)param_2 + 0x24) = (float)dStack_a0;
    *(float *)(param_2 + 5) = (float)local_98;
    *(float *)((longlong)param_2 + 0x2c) = (float)dStack_90;
  }
  else {
    FUN_141724e7a(param_1,param_2);
    if (iVar4 < 0xa3) {
      local_98 = 0.0;
      dStack_90 = 0.0;
      local_a8 = 0.0;
      dStack_a0 = 0.0;
      if ((*(byte *)(param_1 + 5) & 1) == 0) {
        dStack_90 = (double)*(float *)((longlong)param_2 + 0x2c);
        local_98 = (double)*(float *)(param_2 + 5);
        dStack_a0 = (double)*(float *)((longlong)param_2 + 0x24);
        local_a8 = (double)*(float *)(param_2 + 4);
        FUN_1400f4f7e(param_1);
      }
      else {
        FUN_1400f4f7e(param_1,&local_a8);
        *(float *)(param_2 + 4) = (float)local_a8;
        *(float *)((longlong)param_2 + 0x24) = (float)dStack_a0;
        *(float *)(param_2 + 5) = (float)local_98;
        *(float *)((longlong)param_2 + 0x2c) = (float)dStack_90;
      }
    }
    else {
      FUN_140a4aa2c(param_1,param_2 + 4);
    }
    param_2 = param_2 + 6;
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
      }
      else {
        thunk_FUN_14572512c(param_1,param_2);
      }
    }
    else {
      *(undefined4 *)param_2 = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


