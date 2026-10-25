// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1472e502c FUN_1472e502c body=136 status=ok
// SIG undefined FUN_1472e502c(void)

longlong FUN_1472e502c(longlong param_1,longlong param_2)

{
  FUN_1472e510c();
  FUN_1472e5164(param_1 + 0x10,param_2 + 0x10);
  FUN_1472e51be(param_1 + 0x20,param_2 + 0x20);
  FUN_1472e54d2(param_1 + 0x38,param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  FUN_1472e5216(param_1 + 0x50,param_2 + 0x50);
  FUN_1472e5270(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  FUN_1472e52c6(param_1 + 0x78,param_2 + 0x78);
  FUN_1472e5320(param_1 + 0x180,param_2 + 0x180);
  return param_1;
}



// FUNCTION 1472e50b4 FUN_1472e50b4 body=88 status=ok
// SIG undefined FUN_1472e50b4(void)

undefined8 * FUN_1472e50b4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1472e595c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1472e510c FUN_1472e510c body=88 status=ok
// SIG undefined FUN_1472e510c(void)

undefined8 * FUN_1472e510c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1472e539a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1472e5164 FUN_1472e5164 body=89 status=ok
// SIG undefined FUN_1472e5164(void)

undefined8 * FUN_1472e5164(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1472e53fc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 1472e51be FUN_1472e51be body=88 status=ok
// SIG undefined FUN_1472e51be(void)

undefined8 * FUN_1472e51be(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1472e5470(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1472e5216 FUN_1472e5216 body=89 status=ok
// SIG undefined FUN_1472e5216(void)

undefined8 * FUN_1472e5216(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1472e55da(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x50);
      }
    }
  }
  return param_1;
}



// FUNCTION 1472e5270 FUN_1472e5270 body=85 status=ok
// SIG undefined FUN_1472e5270(void)

undefined8 * FUN_1472e5270(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1472e564e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x58);
      }
    }
  }
  return param_1;
}



// FUNCTION 1472e52c6 FUN_1472e52c6 body=90 status=ok
// SIG undefined FUN_1472e52c6(void)

longlong FUN_1472e52c6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0xf0);
    if (*(longlong *)(param_1 + 0xf0) == 0) {
      lVar1 = param_1;
    }
    FUN_14473413a(lVar1,*(undefined4 *)(param_1 + 0xf8));
    lVar1 = *(longlong *)(param_2 + 0xf0);
    if (*(longlong *)(param_2 + 0xf0) == 0) {
      lVar1 = param_2;
    }
    FUN_1472e56be(param_1,lVar1,*(undefined4 *)(param_2 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
  }
  return param_1;
}



// FUNCTION 1472e5320 FUN_1472e5320 body=122 status=ok
// SIG undefined FUN_1472e5320(void)

void * FUN_1472e5320(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x100);
    if (*(void **)((longlong)param_2 + 0x100) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x110);
    *(int *)((longlong)param_1 + 0x110) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x114) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x114) = 4;
    }
    else {
      FUN_1472e58dc(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x100);
        if (*(void **)((longlong)param_1 + 0x100) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1472e539a FUN_1472e539a body=98 status=ok
// SIG undefined FUN_1472e539a(void)

void FUN_1472e539a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,0x10);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1472e53fc FUN_1472e53fc body=115 status=ok
// SIG undefined FUN_1472e53fc(void)

void FUN_1472e53fc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1472e5470 FUN_1472e5470 body=98 status=ok
// SIG undefined FUN_1472e5470(void)

void FUN_1472e5470(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1472e54d2 FUN_1472e54d2 body=63 status=ok
// SIG undefined FUN_1472e54d2(void)

ulonglong * FUN_1472e54d2(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *param_2;
    uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_2;
    if ((uVar1 & 1) == 0) {
      uVar2 = uVar1;
    }
    FUN_1472e5512(param_1,uVar2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc));
  }
  return param_1;
}



// FUNCTION 1472e5512 FUN_1472e5512 body=102 status=ok
// SIG undefined FUN_1472e5512(void)

void FUN_1472e5512(ulonglong *param_1,void *param_2,int param_3,int param_4)

{
  void *pvVar1;
  void *_Dst;
  
  *(int *)(param_1 + 1) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1472e5578(param_1,param_3,param_4);
    if (param_3 != 0) {
      pvVar1 = (void *)*param_1;
      _Dst = (void *)(((longlong)pvVar1 >> 0x18) + (longlong)param_1);
      if (((ulonglong)pvVar1 & 1) == 0) {
        _Dst = pvVar1;
      }
      memcpy(_Dst,param_2,(longlong)param_3 << 6);
      return;
    }
  }
  return;
}



// FUNCTION 1472e5578 FUN_1472e5578 body=98 status=ok
// SIG undefined FUN_1472e5578(void)

void FUN_1472e5578(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,0x10);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_144a7f90c(param_1,0,iVar3,0x40,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1472e55da FUN_1472e55da body=115 status=ok
// SIG undefined FUN_1472e55da(void)

void FUN_1472e55da(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1472e564e FUN_1472e564e body=111 status=ok
// SIG undefined FUN_1472e564e(void)

void FUN_1472e564e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1472e56be FUN_1472e56be body=95 status=ok
// SIG undefined FUN_1472e56be(void)

void FUN_1472e56be(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0xf8) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0xfc) = 2;
    return;
  }
  FUN_1472e571e(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    lVar1 = param_1;
  }
  FUN_1472e5791(lVar1,param_2,param_3);
  return;
}



// FUNCTION 1472e571e FUN_1472e571e body=115 status=ok
// SIG undefined FUN_1472e571e(void)

void FUN_1472e571e(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x78,0);
      iVar2 = (int)(uVar1 / 0x78);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_144b16e62(param_1,0,iVar3,0x78);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xfc) = param_3;
  return;
}



// FUNCTION 1472e5791 FUN_1472e5791 body=52 status=ok
// SIG undefined FUN_1472e5791(void)

void FUN_1472e5791(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1472e57c6(param_1,param_2);
    param_1 = param_1 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return;
}



// FUNCTION 1472e57c6 FUN_1472e57c6 body=180 status=ok
// SIG undefined FUN_1472e57c6(void)

undefined8 * FUN_1472e57c6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *_Src;
  
  *param_1 = *param_2;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  puVar10 = (undefined8 *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 6;
  }
  else {
    _Src = param_2 + 1;
    if (puVar10 != (undefined8 *)0x0) {
      _Src = puVar10;
    }
    FUN_1472e587a(param_1 + 1,iVar1,0);
    puVar10 = (undefined8 *)param_1[3];
    if ((undefined8 *)param_1[3] == (undefined8 *)0x0) {
      puVar10 = param_1 + 1;
    }
    memcpy(puVar10,_Src,(longlong)iVar1 * 2);
  }
  param_1[5] = param_2[5];
  lVar2 = param_2[6];
  param_1[6] = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  uVar5 = param_2[9];
  uVar6 = param_2[10];
  uVar7 = param_2[0xb];
  uVar8 = param_2[0xc];
  uVar9 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar9;
  param_1[0xb] = uVar7;
  param_1[0xc] = uVar8;
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  return param_1;
}



// FUNCTION 1472e587a FUN_1472e587a body=97 status=ok
// SIG undefined FUN_1472e587a(void)

void FUN_1472e587a(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 6;
    if (6 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 * 2,0);
      iVar1 = (int)(uVar2 >> 1);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_144ab803c(param_1,0,iVar3,2);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x1c) = param_3;
  return;
}



// FUNCTION 1472e58dc FUN_1472e58dc body=128 status=ok
// SIG undefined FUN_1472e58dc(void)

void FUN_1472e58dc(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 4;
    if (4 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 6,0);
      uVar1 = (uint)(uVar2 >> 6);
      uVar3 = 0x7fffffff;
      if ((int)param_2 <= (int)uVar1) {
        uVar3 = uVar1;
      }
    }
  }
  if (((int)param_3 < (int)uVar3) &&
     ((param_3 = uVar3, 4 < uVar3 || (*(longlong *)(param_1 + 0x100) != 0)))) {
    uVar1 = 0;
    if (4 < uVar3) {
      uVar1 = uVar3;
    }
    FUN_1446efa72(param_1 + 0x100,0,uVar1,0x40);
  }
  *(uint *)(param_1 + 0x114) = param_3;
  return;
}



// FUNCTION 1472e595c FUN_1472e595c body=49 status=ok
// SIG undefined FUN_1472e595c(void)

void FUN_1472e595c(longlong param_1,int param_2,int param_3)

{
  if (param_3 < param_2) {
    FUN_142c1f1fa(param_1,0,param_2,8);
    param_3 = param_2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1472e598d FUN_1472e598d body=212 status=ok
// SIG undefined FUN_1472e598d(void)

undefined8 FUN_1472e598d(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar1 = FUN_1472b578c(param_2 + 0x11728,param_1);
  if (cVar1 != '\0') {
    return 1;
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x3418) + (longlong)param_3 * 4);
  if ((iVar2 != -1 & *(byte *)(param_2 + 0x1177f)) == 1) {
    lVar3 = (longlong)iVar2 * 0x58;
    lVar6 = *(longlong *)(param_1 + 0x3428) + lVar3 + 8;
    puVar4 = (undefined4 *)(lVar3 + *(longlong *)(param_1 + 0x3428) + 0x40);
  }
  else {
    iVar2 = param_3 + 0x3ff;
    if (-1 < param_3) {
      iVar2 = param_3;
    }
    lVar3 = **(longlong **)(*(longlong *)(param_1 + 0x3368) + (longlong)(iVar2 >> 10) * 8);
    lVar6 = lVar3 + (longlong)(param_3 % 0x400) * 0x48;
    puVar4 = (undefined4 *)(lVar3 + (longlong)(param_3 % 0x400) * 0x48 + 0x38);
  }
  uVar5 = FUN_1472b57b0(param_2 + 0x11728,lVar6,*puVar4,
                        (*(byte *)(*(longlong *)(param_1 + 0x3408) + (longlong)param_3) & 0x40) >> 6
                       );
  return uVar5;
}



// FUNCTION 1472e5a62 FUN_1472e5a62 body=132 status=ok
// SIG undefined FUN_1472e5a62(void)

void FUN_1472e5a62(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,0x10);
  return;
}



// FUNCTION 1472e5ae6 FUN_1472e5ae6 body=85 status=ok
// SIG undefined FUN_1472e5ae6(void)

void FUN_1472e5ae6(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
  }
  lVar1 = 0x30;
  do {
    if (*(longlong **)(param_1 + lVar1) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + lVar1) + 0x38))();
    }
    lVar1 = lVar1 + -8;
  } while (lVar1 != 0x18);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1472e5b3c FUN_1472e5b3c body=105 status=ok
// SIG undefined FUN_1472e5b3c(void)

void FUN_1472e5b3c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_141762202(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 1472e5ba6 FUN_1472e5ba6 body=201 status=ok
// SIG undefined FUN_1472e5ba6(void)

void FUN_1472e5ba6(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 1472e5c70 FUN_1472e5c70 body=138 status=ok
// SIG undefined FUN_1472e5c70(void)

code * FUN_1472e5c70(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcPixelCoordMinAndMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000019b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e5cfa;
}



// FUNCTION 1472e5cfa FUN_1472e5cfa body=138 status=ok
// SIG undefined FUN_1472e5cfa(void)

code * FUN_1472e5cfa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstPixelCoordMinAndMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000019a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1bc60;
}



// FUNCTION 1472e5d84 FUN_1472e5d84 body=138 status=ok
// SIG undefined FUN_1472e5d84(void)

code * FUN_1472e5d84(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceMaxUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000197;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1bbd6;
}



// FUNCTION 1472e5e12 FUN_1472e5e12 body=129 status=ok
// SIG undefined FUN_1472e5e12(void)

void FUN_1472e5e12(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x18) = param_2;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1472e5fe6(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar2 = param_1;
    }
    memset((void *)((longlong)iVar1 * 0x10 + lVar2),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x18) = param_2;
    FUN_1472e6064(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1472e5e94 FUN_1472e5e94 body=71 status=ok
// SIG undefined FUN_1472e5e94(void)

void FUN_1472e5e94(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x18) = param_2;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1472e5fe6();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x18) = param_2;
      FUN_1472e6064();
      return;
    }
  }
  return;
}



// FUNCTION 1472e5edc FUN_1472e5edc body=97 status=ok
// SIG undefined FUN_1472e5edc(void)

void FUN_1472e5edc(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x35;
  do {
    *(undefined8 *)(param_1 + -0x35 + lVar2) = 0;
    *(undefined4 *)(param_1 + -0x2d + lVar2) = 1;
    puVar1 = (undefined8 *)(param_1 + -0x29 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(int *)(param_1 + -0x19 + lVar2) = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    puVar1 = (undefined8 *)(param_1 + -0x15 + lVar2);
    *puVar1 = 0x100000000;
    puVar1[1] = 0x1000100000001;
    *(undefined4 *)(param_1 + -5 + lVar2) = 0x101;
    *(undefined2 *)(param_1 + -1 + lVar2) = 0xff00;
    lVar2 = lVar2 + 0x38;
  } while (lVar2 != 0x115);
  return;
}



// FUNCTION 1472e5f3e FUN_1472e5f3e body=168 status=ok
// SIG undefined FUN_1472e5f3e(void)

void FUN_1472e5f3e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = 0x35;
  do {
    *(undefined1 *)(param_1 + -3 + lVar4) = *(undefined1 *)(param_2 + -3 + lVar4);
    *(undefined8 *)(param_1 + -0x35 + lVar4) = *(undefined8 *)(param_2 + -0x35 + lVar4);
    *(undefined1 *)(param_1 + -2 + lVar4) = *(undefined1 *)(param_2 + -2 + lVar4);
    *(undefined1 *)(param_1 + -1 + lVar4) = *(undefined1 *)(param_2 + -1 + lVar4);
    *(undefined8 *)(param_1 + -0x11 + lVar4) = *(undefined8 *)(param_2 + -0x11 + lVar4);
    *(undefined2 *)(param_1 + -9 + lVar4) = *(undefined2 *)(param_2 + -9 + lVar4);
    *(undefined2 *)(param_1 + -7 + lVar4) = *(undefined2 *)(param_2 + -7 + lVar4);
    *(undefined1 *)(param_1 + -5 + lVar4) = *(undefined1 *)(param_2 + -5 + lVar4);
    *(undefined1 *)(param_1 + -4 + lVar4) = *(undefined1 *)(param_2 + -4 + lVar4);
    puVar1 = (undefined8 *)(param_2 + -0x2d + lVar4);
    uVar3 = puVar1[1];
    puVar2 = (undefined8 *)(param_1 + -0x2d + lVar4);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    *(undefined4 *)(param_1 + -0x1d + lVar4) = *(undefined4 *)(param_2 + -0x1d + lVar4);
    *(undefined4 *)(param_1 + -0x15 + lVar4) = *(undefined4 *)(param_2 + -0x15 + lVar4);
    *(undefined1 *)(param_1 + lVar4) = *(undefined1 *)(param_2 + lVar4);
    *(undefined4 *)(param_1 + -0x19 + lVar4) = *(undefined4 *)(param_2 + -0x19 + lVar4);
    lVar4 = lVar4 + 0x38;
  } while (lVar4 != 0x115);
  return;
}



// FUNCTION 1472e5fe6 FUN_1472e5fe6 body=124 status=ok
// SIG undefined FUN_1472e5fe6(void)

void FUN_1472e5fe6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_1472e5a62(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472e6064 FUN_1472e6064 body=52 status=ok
// SIG undefined FUN_1472e6064(void)

void FUN_1472e6064(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472e6098(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 == *(int *)(param_1 + 0x1c)) {
    return;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  FUN_1472e5a62(param_1,*(undefined4 *)(param_1 + 0x18),iVar1);
  return;
}



// FUNCTION 1472e6098 FUN_1472e6098 body=108 status=ok
// SIG undefined FUN_1472e6098(void)

ulonglong FUN_1472e6098(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1472e610c FUN_1472e610c body=121 status=ok
// SIG undefined FUN_1472e610c(void)

undefined8
FUN_1472e610c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 1;
  local_28 = param_8;
  local_38 = param_6;
  uStack_30 = param_7;
  local_20 = param_4;
  FUN_1430219d2(param_2,param_3,&local_20,param_5);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e61a8 FUN_1472e61a8 body=372 status=ok
// SIG undefined FUN_1472e61a8(void)

undefined4 * FUN_1472e61a8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1472e631e(param_1,local_50);
  puVar1 = (ulonglong *)param_3[1];
  uVar8 = *(ulonglong *)*param_3;
  *local_48 = uVar8;
  uVar2 = *puVar1;
  local_48[1] = uVar2;
  puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_FUN_14a2f9610;
  puVar7[2] = uVar2;
  local_48[2] = (ulonglong)puVar7;
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_1472e6404(param_1,uVar5,local_48,&local_54);
  uVar3 = local_54;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_48 + 0x1c) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_144aaf21e(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e631e FUN_1472e631e body=229 status=ok
// SIG undefined FUN_1472e631e(void)

int * FUN_1472e631e(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1472e6404 FUN_1472e6404 body=191 status=ok
// SIG undefined FUN_1472e6404(void)

undefined8 FUN_1472e6404(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_1472e650c(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 1472e64c4 FUN_1472e64c4 body=42 status=ok
// SIG undefined FUN_1472e64c4(void)

void FUN_1472e64c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1472e5ae6(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1472e64ee FUN_1472e64ee body=29 status=ok
// SIG undefined FUN_1472e64ee(void)

undefined8 FUN_1472e64ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e650c FUN_1472e650c body=114 status=ok
// SIG undefined FUN_1472e650c(void)

void FUN_1472e650c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 1472e657e FUN_1472e657e body=331 status=ok
// SIG undefined FUN_1472e657e(void)

undefined4 * FUN_1472e657e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1472e66ca(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_1472e67b0(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_1472e68c4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e66ca FUN_1472e66ca body=229 status=ok
// SIG undefined FUN_1472e66ca(void)

int * FUN_1472e66ca(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1472e67b0 FUN_1472e67b0 body=161 status=ok
// SIG undefined FUN_1472e67b0(void)

undefined8 FUN_1472e67b0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
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
          FUN_1472e6852(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1472e6852 FUN_1472e6852 body=114 status=ok
// SIG undefined FUN_1472e6852(void)

void FUN_1472e6852(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 1472e68c4 FUN_1472e68c4 body=476 status=ok
// SIG undefined FUN_1472e68c4(void)

void FUN_1472e68c4(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 1472e6aa2 FUN_1472e6aa2 body=147 status=ok
// SIG undefined FUN_1472e6aa2(void)

void FUN_1472e6aa2(longlong param_1,int param_2)

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



// FUNCTION 1472e6b36 FUN_1472e6b36 body=56 status=ok
// SIG undefined FUN_1472e6b36(void)

undefined8 * FUN_1472e6b36(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2f9730;
  FUN_144725486();
  FUN_146306c0c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e6b6e FUN_1472e6b6e body=38 status=ok
// SIG undefined FUN_1472e6b6e(void)

undefined8 FUN_1472e6b6e(undefined8 param_1,int param_2)

{
  FUN_146306c0c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e6b94 FUN_1472e6b94 body=29 status=ok
// SIG undefined FUN_1472e6b94(void)

undefined8 FUN_1472e6b94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e6bb2 FUN_1472e6bb2 body=221 status=ok
// SIG undefined FUN_1472e6bb2(void)

undefined8 *
FUN_1472e6bb2(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar4;
  uVar2 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  lVar5 = FUN_144a890ae();
  puVar6[3] = uVar2;
  lVar3 = *(longlong *)(lVar5 + 0x48);
  puVar6[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar6[5] = lVar5;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a2f97a8;
  puVar6[8] = uVar2;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1402aa76e(param_1,iVar1);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar1 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 1472e6c90 FUN_1472e6c90 body=38 status=ok
// SIG undefined FUN_1472e6c90(void)

undefined8 FUN_1472e6c90(undefined8 param_1,int param_2)

{
  FUN_144ada7d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e6cb6 FUN_1472e6cb6 body=132 status=ok
// SIG undefined FUN_1472e6cb6(void)

void FUN_1472e6cb6(longlong param_1,int param_2)

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



// FUNCTION 1472e6d3b FUN_1472e6d3b body=496 status=ok
// SIG undefined FUN_1472e6d3b(void)

void FUN_1472e6d3b(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar10 = iVar6;
joined_r0x0001472e6d76:
    do {
      iVar3 = iVar6 * 2 + 1;
      if (iVar3 < (int)param_2) {
        iVar9 = iVar6 * 2 + 2;
        if (iVar9 < (int)param_2) {
          puVar5 = &DAT_149dfb77a;
          if (*(int *)(param_1[iVar3] + 0x10) != 0) {
            puVar5 = *(undefined2 **)(param_1[iVar3] + 8);
          }
          puVar4 = &DAT_149dfb77a;
          if (*(int *)(param_1[iVar9] + 0x10) != 0) {
            puVar4 = *(undefined2 **)(param_1[iVar9] + 8);
          }
          iVar2 = FUN_144a80a00(puVar4,puVar5);
          if (-1 < iVar2) {
            iVar3 = iVar9;
          }
        }
        puVar5 = &DAT_149dfb77a;
        if (*(int *)(param_1[iVar3] + 0x10) != 0) {
          puVar5 = *(undefined2 **)(param_1[iVar3] + 8);
        }
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(param_1[iVar6] + 0x10) != 0) {
          puVar4 = *(undefined2 **)(param_1[iVar6] + 8);
        }
        iVar9 = FUN_144a80a00(puVar4,puVar5);
        if (iVar9 < 0) {
          uVar1 = param_1[iVar6];
          param_1[iVar6] = param_1[iVar3];
          param_1[iVar3] = uVar1;
          iVar6 = iVar3;
          goto joined_r0x0001472e6d76;
        }
      }
      bVar11 = iVar10 != 0;
      iVar6 = iVar10 + -1;
      iVar10 = iVar6;
    } while (bVar11);
    if (1 < (int)param_2) {
      uVar7 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar7 - 1];
      param_1[uVar7 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar8 = uVar7 - 1;
          iVar6 = 0;
          iVar3 = 1;
          iVar10 = 0;
          do {
            iVar6 = iVar6 + 2;
            iVar9 = iVar3;
            if ((longlong)iVar6 < (longlong)uVar8) {
              puVar5 = &DAT_149dfb77a;
              if (*(int *)(param_1[iVar3] + 0x10) != 0) {
                puVar5 = *(undefined2 **)(param_1[iVar3] + 8);
              }
              puVar4 = &DAT_149dfb77a;
              if (*(int *)(param_1[iVar6] + 0x10) != 0) {
                puVar4 = *(undefined2 **)(param_1[iVar6] + 8);
              }
              iVar3 = FUN_144a80a00(puVar4,puVar5);
              if (-1 < iVar3) {
                iVar9 = iVar6;
              }
            }
            puVar5 = &DAT_149dfb77a;
            if (*(int *)(param_1[iVar9] + 0x10) != 0) {
              puVar5 = *(undefined2 **)(param_1[iVar9] + 8);
            }
            puVar4 = &DAT_149dfb77a;
            if (*(int *)(param_1[iVar10] + 0x10) != 0) {
              puVar4 = *(undefined2 **)(param_1[iVar10] + 8);
            }
            iVar6 = FUN_144a80a00(puVar4,puVar5);
            if (-1 < iVar6) break;
            uVar1 = param_1[iVar10];
            param_1[iVar10] = param_1[iVar9];
            param_1[iVar9] = uVar1;
            iVar6 = iVar9 * 2;
            iVar3 = iVar9 * 2 + 1;
            iVar10 = iVar9;
          } while ((longlong)iVar3 < (longlong)uVar8);
          uVar1 = *param_1;
          *param_1 = param_1[uVar7 - 2];
          param_1[uVar7 - 2] = uVar1;
          uVar7 = uVar8;
        } while (2 < uVar8);
      }
    }
  }
  return;
}



// FUNCTION 1472e6f2c FUN_1472e6f2c body=124 status=ok
// SIG undefined FUN_1472e6f2c(void)

void FUN_1472e6f2c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472e6faa FUN_1472e6faa body=180 status=ok
// SIG undefined FUN_1472e6faa(void)

longlong FUN_1472e6faa(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x38;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x38) == *param_3) {
          if (lVar3 != 0) goto LAB_1472e7041;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x30);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1472e7060(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x38 + *param_1;
LAB_1472e7041:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1472e7060 FUN_1472e7060 body=285 status=ok
// SIG undefined FUN_1472e7060(void)

undefined4 * FUN_1472e7060(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1472e717e(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  *(undefined8 *)(local_40 + 6) = 0;
  *(undefined8 *)(local_40 + 8) = 0;
  *(undefined2 *)(local_40 + 10) = 0;
  local_40[0xc] = 0xffffffff;
  cVar1 = FUN_1472e7260(param_1,param_3,local_40,local_48);
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
      local_40[0xd] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[0xc] =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1472e4c0e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e717e FUN_1472e717e body=226 status=ok
// SIG undefined FUN_1472e717e(void)

int * FUN_1472e717e(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1472e7260 FUN_1472e7260 body=187 status=ok
// SIG undefined FUN_1472e7260(void)

undefined8 FUN_1472e7260(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar16 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar16 != -1) {
      do {
        piVar2 = (int *)(*param_1 + (longlong)iVar16 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar16 * 0x38) == *param_3) {
          if (*(longlong *)(piVar2 + 6) != 0) {
            LOCK();
            puVar1 = (uint *)(*(longlong *)(piVar2 + 6) + 8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          iVar8 = param_3[4];
          iVar9 = param_3[5];
          iVar10 = param_3[6];
          iVar11 = param_3[7];
          iVar12 = param_3[9];
          iVar13 = param_3[10];
          iVar14 = param_3[0xb];
          piVar2[8] = param_3[8];
          piVar2[9] = iVar12;
          piVar2[10] = iVar13;
          piVar2[0xb] = iVar14;
          piVar2[4] = iVar8;
          piVar2[5] = iVar9;
          piVar2[6] = iVar10;
          piVar2[7] = iVar11;
          *piVar2 = iVar4;
          piVar2[1] = iVar5;
          piVar2[2] = iVar6;
          piVar2[3] = iVar7;
          FUN_1472e4b9a(param_1,*param_4);
          *param_4 = iVar16;
          return 1;
        }
        iVar16 = piVar2[0xc];
      } while (iVar16 != -1);
    }
  }
  return 0;
}



// FUNCTION 1472e731c FUN_1472e731c body=38 status=ok
// SIG undefined FUN_1472e731c(void)

undefined8 FUN_1472e731c(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e7342 FUN_1472e7342 body=121 status=ok
// SIG undefined FUN_1472e7342(void)

longlong FUN_1472e7342(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1472e73bc();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_1472e7410(param_1,&local_24,param_2);
    lVar1 = *param_1 + (longlong)local_24 * 0x18;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 1472e73bc FUN_1472e73bc body=84 status=ok
// SIG undefined FUN_1472e73bc(void)

int * FUN_1472e73bc(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 8;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[10];
    }
    if (plVar3 == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[0xb] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*piVar1 == *param_3) {
          return piVar1;
        }
        iVar2 = piVar1[4];
      } while (iVar2 != -1);
    }
  }
  return (int *)0x0;
}



// FUNCTION 1472e7410 FUN_1472e7410 body=298 status=ok
// SIG undefined FUN_1472e7410(void)

undefined4 * FUN_1472e7410(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1472e753c(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  local_40[4] = 0xffffffff;
  cVar1 = FUN_1472e7622(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar4 <= *(int *)(param_1 + 0x58))) {
      param_3 = *(int *)(param_1 + 0x58) - 1U & param_3;
      local_40[5] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar5 = param_1 + 0x40;
      }
      if (lVar5 == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[4] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar5 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar5 = param_1 + 0x40;
      }
      if (lVar5 == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x58) = iVar4;
      FUN_1472def86(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e753c FUN_1472e753c body=230 status=ok
// SIG undefined FUN_1472e753c(void)

int * FUN_1472e753c(longlong *param_1,int *param_2)

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
      FUN_1406389c2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144ab60d6(param_1 + 2,1);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1472e7622 FUN_1472e7622 body=182 status=ok
// SIG undefined FUN_1472e7622(void)

undefined8 FUN_1472e7622(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 8;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[10];
    }
    if (plVar7 == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[0xb] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar2 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar2 == *param_3) {
          if (*(longlong *)(piVar2 + 2) != 0) {
            LOCK();
            puVar1 = (uint *)(*(longlong *)(piVar2 + 2) + 8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          *piVar2 = *param_3;
          piVar2[1] = iVar4;
          piVar2[2] = iVar5;
          piVar2[3] = iVar6;
          FUN_1472e76d8(param_1,*param_4);
          *param_4 = iVar8;
          return 1;
        }
        iVar8 = piVar2[4];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 1472e76d8 FUN_1472e76d8 body=114 status=ok
// SIG undefined FUN_1472e76d8(void)

void FUN_1472e76d8(longlong *param_1,int param_2)

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



// FUNCTION 1472e774a FUN_1472e774a body=85 status=ok
// SIG undefined FUN_1472e774a(void)

void FUN_1472e774a(longlong param_1,int param_2)

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
  FUN_14013778c();
  return;
}



// FUNCTION 1472e77a0 FUN_1472e77a0 body=14 status=ok
// SIG undefined FUN_1472e77a0(void)

void FUN_1472e77a0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_14302bcd8();
  return;
}



// FUNCTION 1472e77ae FUN_1472e77ae body=85 status=ok
// SIG undefined FUN_1472e77ae(void)

void FUN_1472e77ae(longlong param_1,int param_2)

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
  FUN_14302bcd8();
  return;
}



// FUNCTION 1472e7804 FUN_1472e7804 body=38 status=ok
// SIG undefined FUN_1472e7804(void)

undefined8 FUN_1472e7804(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e782a FUN_1472e782a body=127 status=ok
// SIG undefined FUN_1472e782a(void)

undefined4 FUN_1472e782a(longlong param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
    lVar4 = param_1 + 0x128;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x130);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x138) - 1U & (param_2[1] >> 0x14 ^ *param_2)) * 4)
    ;
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(param_1 + 0xf0);
      do {
        lVar5 = (longlong)iVar3 * 0x10;
        uVar2 = *(uint *)(lVar4 + lVar5) ^ *param_2;
        bVar6 = *(uint *)(lVar4 + 4 + lVar5) == param_2[1] && uVar2 == 0;
        uVar1 = CONCAT31((int3)(uVar2 >> 8),bVar6);
        if (bVar6) {
          return uVar1;
        }
        iVar3 = *(int *)(lVar5 + lVar4 + 8);
      } while (iVar3 != -1);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1472e78aa FUN_1472e78aa body=151 status=ok
// SIG undefined FUN_1472e78aa(void)

undefined8 FUN_1472e78aa(longlong param_1,int param_2,uint param_3,int param_4,undefined1 *param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*(char *)(param_1 + 0x59) == '\x01') {
    if ((int)param_3 < 1) goto LAB_1472e78f3;
    uVar5 = 0xffffffff;
    uVar6 = 0;
    uVar4 = 0xffffffff;
    do {
      uVar1 = *(uint *)(param_1 + 0x28 + uVar6 * 4);
      if (((int)(param_2 - uVar1) <= param_4 && *(longlong *)(param_1 + 8 + uVar6 * 8) != 0) &&
          uVar1 < uVar5) {
        uVar4 = uVar6 & 0xffffffff;
        uVar5 = uVar1;
      }
      iVar3 = (int)uVar4;
      uVar6 = uVar6 + 1;
    } while (param_3 != uVar6);
  }
  else {
    iVar3 = param_2 % (int)param_3;
  }
  if (((iVar3 != -1) && (lVar2 = (longlong)iVar3, *(longlong *)(param_1 + 8 + lVar2 * 8) != 0)) &&
     (param_2 - *(int *)(param_1 + 0x28 + lVar2 * 4) <= param_4)) {
    *param_5 = *(undefined1 *)(param_1 + 0x55 + lVar2);
    return *(undefined8 *)(param_1 + 8 + lVar2 * 8);
  }
LAB_1472e78f3:
  *param_5 = 0;
  return 0;
}



// FUNCTION 1472e7942 FUN_1472e7942 body=85 status=ok
// SIG undefined FUN_1472e7942(void)

void FUN_1472e7942(longlong param_1,int param_2)

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
  FUN_14302d7ee();
  return;
}



// FUNCTION 1472e7998 FUN_1472e7998 body=85 status=ok
// SIG undefined FUN_1472e7998(void)

void FUN_1472e7998(longlong param_1,int param_2)

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
  FUN_14302d9b0();
  return;
}



// FUNCTION 1472e79ee FUN_1472e79ee body=85 status=ok
// SIG undefined FUN_1472e79ee(void)

void FUN_1472e79ee(longlong param_1,int param_2)

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
  FUN_14302db72();
  return;
}



// FUNCTION 1472e7a44 FUN_1472e7a44 body=85 status=ok
// SIG undefined FUN_1472e7a44(void)

void FUN_1472e7a44(longlong param_1,int param_2)

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
  FUN_14302dd34();
  return;
}



// FUNCTION 1472e7a9a FUN_1472e7a9a body=98 status=ok
// SIG undefined FUN_1472e7a9a(void)

void FUN_1472e7a9a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar2 = 2;
  if (2 < uVar1) {
    if (*(uint *)(param_1 + 0x14) < 3) {
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
  *(uint *)(param_1 + 0x14) = uVar2;
  FUN_1472e7afe();
  return;
}



// FUNCTION 1472e7afe FUN_1472e7afe body=124 status=ok
// SIG undefined FUN_1472e7afe(void)

void FUN_1472e7afe(void *param_1,int param_2,uint param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if (param_3 < 3) {
    if (_Src != (void *)0x0) {
      memmove(param_1,_Src,(longlong)param_2 << 2);
      FUN_14302def6((longlong)param_1 + 8,0);
      return;
    }
  }
  else {
    FUN_14302def6((longlong)param_1 + 8,param_3);
    if (_Src == (void *)0x0) {
      memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 2);
      return;
    }
  }
  return;
}



// FUNCTION 1472e7b7a FUN_1472e7b7a body=84 status=ok
// SIG undefined FUN_1472e7b7a(void)

void FUN_1472e7b7a(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar3 = 2;
  if (2 < uVar1) {
    if ((((longlong)(int)(uVar2 - uVar1) & 0x3ffffffffffff000U) == 0) &&
       ((int)(uVar2 * 2) <= (int)(uVar1 * 3))) {
      return;
    }
    uVar3 = uVar1;
    if ((int)(uVar2 - uVar1) < 0x41) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0x14) = uVar3;
  FUN_1472e7afe();
  return;
}



// FUNCTION 1472e7bce FUN_1472e7bce body=38 status=ok
// SIG undefined FUN_1472e7bce(void)

undefined8 FUN_1472e7bce(undefined8 param_1,int param_2)

{
  FUN_1402d0d4e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e7bf4 FUN_1472e7bf4 body=42 status=ok
// SIG undefined FUN_1472e7bf4(void)

longlong FUN_1472e7bf4(longlong param_1,int param_2)

{
  FUN_1472e7c1e(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e7c1e FUN_1472e7c1e body=65 status=ok
// SIG undefined FUN_1472e7c1e(void)

void FUN_1472e7c1e(undefined8 *param_1)

{
  FUN_1430227fa(param_1 + 0x1d);
  *param_1 = &PTR_LAB_14a2f5630;
  FUN_14485b438(param_1 + 1);
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1472e7c60 FUN_1472e7c60 body=38 status=ok
// SIG undefined FUN_1472e7c60(void)

undefined8 FUN_1472e7c60(undefined8 param_1,int param_2)

{
  FUN_1472e7c1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e7c86 FUN_1472e7c86 body=328 status=ok
// SIG undefined FUN_1472e7c86(void)

char FUN_1472e7c86(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  void *_Src;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pcVar2 = (char *)(param_1 + 0x90);
  LOCK();
  bVar10 = *(char *)(param_1 + 0x90) == '\0';
  if (bVar10) {
    *(char *)(param_1 + 0x90) = '\x01';
  }
  UNLOCK();
  if (!bVar10) {
    FUN_1447d2058(pcVar2);
  }
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_144801554((longlong *)(param_1 + 0x98),iVar4);
  }
  lVar6 = *(longlong *)(param_1 + 0x98);
  lVar9 = (longlong)iVar4 * 0x10;
  puVar3 = (undefined8 *)(lVar6 + lVar9);
  *(undefined8 *)(lVar6 + lVar9) = 0;
  iVar5 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(lVar6 + 8 + lVar9) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  }
  else {
    FUN_14721d452(puVar3,iVar5,0);
    memcpy((void *)*puVar3,_Src,(longlong)iVar5 << 2);
  }
  LOCK();
  cVar7 = *pcVar2;
  bVar10 = cVar7 == '\x01';
  if (bVar10) {
    *pcVar2 = '\0';
    cVar7 = '\x01';
  }
  UNLOCK();
  if (!bVar10) {
    cVar7 = FUN_14008cdb0(pcVar2);
  }
  if (iVar4 == 0) {
    local_48 = param_1;
    uVar8 = FUN_14480154e(param_1 + 0xa8);
    local_58 = param_1;
    cVar7 = FUN_14302e7ea(param_1 + 0xa8,&local_40,uVar8,&local_48);
    if (local_40 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_40 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        cVar7 = (**(code **)*local_40)(local_40,1);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return cVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e7dd0 FUN_1472e7dd0 body=212 status=ok
// SIG undefined FUN_1472e7dd0(void)

undefined8 * FUN_1472e7dd0(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar3 = (undefined8 *)FUN_144a23e24(&DAT_14c896140);
  puVar5 = (undefined8 *)puVar3[1];
  if (puVar5 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar3 + 2) + -1;
    goto LAB_1472e7df3;
  }
  puVar5 = (undefined8 *)*puVar3;
  if (puVar5 == (undefined8 *)0x0) {
    uVar2 = FUN_14470efbc(&DAT_14c896180);
    if (uVar2 == 0) {
      puVar3[1] = 0;
LAB_1472e7e77:
      puVar5 = (undefined8 *)FUN_14001cc68(0x10000,0);
      puVar3[1] = puVar5;
      iVar1 = 0xff;
      puVar6 = puVar5;
      do {
        puVar4 = puVar6 + 0x20;
        *puVar6 = puVar4;
        iVar1 = iVar1 + -1;
        puVar6 = puVar4;
      } while (iVar1 != 0);
      goto LAB_1472e7e16;
    }
    puVar5 = *(undefined8 **)
              (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
              (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
    puVar3[1] = puVar5;
    if (puVar5 == (undefined8 *)0x0) goto LAB_1472e7e77;
  }
  else {
    puVar3[1] = puVar5;
    puVar4 = puVar3;
LAB_1472e7e16:
    *puVar4 = 0;
  }
  *(undefined4 *)(puVar3 + 2) = 0x100;
  iVar1 = 0xff;
LAB_1472e7df3:
  puVar3[1] = *puVar5;
  *(int *)(puVar3 + 2) = iVar1;
  return puVar5;
}



// FUNCTION 1472e7ea4 FUN_1472e7ea4 body=40 status=ok
// SIG undefined FUN_1472e7ea4(void)

undefined8 FUN_1472e7ea4(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1472e7efe(param_1);
  }
  return param_1;
}



// FUNCTION 1472e7ed8 FUN_1472e7ed8 body=38 status=ok
// SIG undefined FUN_1472e7ed8(void)

undefined8 FUN_1472e7ed8(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e7efe FUN_1472e7efe body=145 status=ok
// SIG undefined FUN_1472e7efe(void)

void FUN_1472e7efe(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_144a23e24();
  if ((int)plVar2[2] < 0x100) {
    lVar3 = plVar2[1];
  }
  else {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      uVar1 = FUN_14493c560();
      if (uVar1 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (ulonglong)((uVar1 & 0x3fff) * 0x18) +
                *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8);
      }
      *(longlong *)(lVar4 + 8) = lVar3;
      FUN_144a8fde6(&DAT_14c896180,uVar1);
    }
    *plVar2 = plVar2[1];
    *(undefined4 *)(plVar2 + 2) = 0;
    lVar3 = 0;
  }
  *param_1 = lVar3;
  plVar2[1] = (longlong)param_1;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  return;
}



// FUNCTION 1472e7f90 FUN_1472e7f90 body=75 status=ok
// SIG undefined FUN_1472e7f90(void)

void FUN_1472e7f90(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((((longlong)(iVar2 - iVar1) & 0x1ffffffffffff800U) != 0) || (iVar1 * 3 < iVar2 * 2)) {
    if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_140322e0a();
      return;
    }
  }
  return;
}



// FUNCTION 1472e7fdc FUN_1472e7fdc body=85 status=ok
// SIG undefined FUN_1472e7fdc(void)

void FUN_1472e7fdc(longlong param_1,int param_2)

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
  FUN_1402d3b50();
  return;
}



// FUNCTION 1472e8032 FUN_1472e8032 body=93 status=ok
// SIG undefined FUN_1472e8032(void)

void FUN_1472e8032(longlong param_1,int param_2)

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
  FUN_14007ed02();
  return;
}



// FUNCTION 1472e8090 FUN_1472e8090 body=42 status=ok
// SIG undefined FUN_1472e8090(void)

longlong FUN_1472e8090(longlong param_1,int param_2)

{
  FUN_1400200e4(param_1 + 0x20);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e80ba FUN_1472e80ba body=38 status=ok
// SIG undefined FUN_1472e80ba(void)

undefined8 FUN_1472e80ba(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e80e0 FUN_1472e80e0 body=124 status=ok
// SIG undefined FUN_1472e80e0(void)

void FUN_1472e80e0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_1472e815e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472e815e FUN_1472e815e body=132 status=ok
// SIG undefined FUN_1472e815e(void)

void FUN_1472e815e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,0x10);
  return;
}



// FUNCTION 1472e81e2 FUN_1472e81e2 body=147 status=ok
// SIG undefined FUN_1472e81e2(void)

void FUN_1472e81e2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0xb10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0xb14) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x580,0);
      iVar5 = (int)(uVar4 / 0x580);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0xb14) = iVar6;
    FUN_1472e8276(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472e8276 FUN_1472e8276 body=146 status=ok
// SIG undefined FUN_1472e8276(void)

void FUN_1472e8276(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xb00);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x580);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xb00,0,param_3,0x580);
    memmove(*(void **)((longlong)param_1 + 0xb00),param_1,(longlong)param_2 * 0x580);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xb00,param_2,param_3,0x580);
  return;
}



// FUNCTION 1472e8308 FUN_1472e8308 body=121 status=ok
// SIG undefined FUN_1472e8308(void)

void FUN_1472e8308(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0xb00);
  if (*(longlong *)(param_1 + 0xb00) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((ulonglong)param_2 * 0x580 + lVar2);
  FUN_144760828(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0xb10);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x580 + (longlong)_Dst),(longlong)iVar3 * 0x580);
    iVar1 = *(int *)(param_1 + 0xb10);
  }
  *(int *)(param_1 + 0xb10) = iVar1 - param_3;
  return;
}



// FUNCTION 1472e8382 FUN_1472e8382 body=67 status=ok
// SIG undefined FUN_1472e8382(void)

void FUN_1472e8382(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472e83c6(*(undefined4 *)(param_1 + 0xb10),*(undefined4 *)(param_1 + 0xb14));
  if (iVar1 == *(int *)(param_1 + 0xb14)) {
    return;
  }
  *(int *)(param_1 + 0xb14) = iVar1;
  FUN_1472e8276(param_1,*(undefined4 *)(param_1 + 0xb10),iVar1);
  return;
}



// FUNCTION 1472e83c6 FUN_1472e83c6 body=98 status=ok
// SIG undefined FUN_1472e83c6(void)

ulonglong FUN_1472e83c6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = 2;
  if (2 < param_1) {
    if ((int)(param_2 - param_1) < 0x41) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = (ulonglong)param_2;
      if (0x3fff < (ulonglong)((longlong)(int)(param_2 - param_1) * 0x580)) {
        if ((int)param_1 < 1) {
          uVar1 = (ulonglong)param_1;
        }
        else {
          uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x580,0);
          uVar1 = uVar1 / 0x580;
        }
      }
    }
  }
  return uVar1;
}



// FUNCTION 1472e8428 FUN_1472e8428 body=132 status=ok
// SIG undefined FUN_1472e8428(void)

void FUN_1472e8428(longlong param_1,int param_2)

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



// FUNCTION 1472e84ae FUN_1472e84ae body=85 status=ok
// SIG undefined FUN_1472e84ae(void)

void FUN_1472e84ae(longlong param_1,int param_2)

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
  FUN_1401b961c();
  return;
}



// FUNCTION 1472e8504 FUN_1472e8504 body=42 status=ok
// SIG undefined FUN_1472e8504(void)

longlong FUN_1472e8504(longlong param_1,int param_2)

{
  FUN_1430333f4(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e852e FUN_1472e852e body=85 status=ok
// SIG undefined FUN_1472e852e(void)

void FUN_1472e852e(longlong param_1,int param_2)

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
  FUN_143033458();
  return;
}



// FUNCTION 1472e8584 FUN_1472e8584 body=135 status=ok
// SIG undefined FUN_1472e8584(void)

void FUN_1472e8584(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2f28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2f2c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xbc8,0);
      iVar4 = (int)(uVar3 / 0xbc8);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x2f2c) = iVar5;
    FUN_1472e860c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1472e860c FUN_1472e860c body=147 status=ok
// SIG undefined FUN_1472e860c(void)

void FUN_1472e860c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x2f20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xbc8);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x2f20,0,param_3,0xbc8);
    memmove(*(void **)((longlong)param_1 + 0x2f20),param_1,(longlong)param_2 * 0xbc8);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x2f20,param_2,param_3,0xbc8);
  return;
}



// FUNCTION 1472e86a0 FUN_1472e86a0 body=121 status=ok
// SIG undefined FUN_1472e86a0(void)

void FUN_1472e86a0(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x2f20);
  if (*(longlong *)(param_1 + 0x2f20) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((ulonglong)param_2 * 0xbc8 + lVar2);
  FUN_1448fc7e8(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x2f28);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xbc8 + (longlong)_Dst),(longlong)iVar3 * 0xbc8);
    iVar1 = *(int *)(param_1 + 0x2f28);
  }
  *(int *)(param_1 + 0x2f28) = iVar1 - param_3;
  return;
}



// FUNCTION 1472e871a FUN_1472e871a body=67 status=ok
// SIG undefined FUN_1472e871a(void)

void FUN_1472e871a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472e875e(*(undefined4 *)(param_1 + 0x2f28),*(undefined4 *)(param_1 + 0x2f2c));
  if (iVar1 == *(int *)(param_1 + 0x2f2c)) {
    return;
  }
  *(int *)(param_1 + 0x2f2c) = iVar1;
  FUN_1472e860c(param_1,*(undefined4 *)(param_1 + 0x2f28),iVar1);
  return;
}



// FUNCTION 1472e875e FUN_1472e875e body=98 status=ok
// SIG undefined FUN_1472e875e(void)

ulonglong FUN_1472e875e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = 4;
  if (4 < param_1) {
    if ((int)(param_2 - param_1) < 0x41) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = (ulonglong)param_2;
      if (0x3fff < (ulonglong)((longlong)(int)(param_2 - param_1) * 0xbc8)) {
        if ((int)param_1 < 1) {
          uVar1 = (ulonglong)param_1;
        }
        else {
          uVar1 = FUN_144a3809e((ulonglong)param_1 * 0xbc8,0);
          uVar1 = uVar1 / 0xbc8;
        }
      }
    }
  }
  return uVar1;
}



// FUNCTION 1472e87c0 FUN_1472e87c0 body=27 status=ok
// SIG undefined FUN_1472e87c0(void)

void FUN_1472e87c0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) == 0x80) {
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0x80;
  FUN_140090ec0(param_1,0x80);
  return;
}



// FUNCTION 1472e87dc FUN_1472e87dc body=75 status=ok
// SIG undefined FUN_1472e87dc(void)

void FUN_1472e87dc(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((((longlong)(iVar2 - iVar1) & 0x1ffffffffffff800U) != 0) || (iVar1 * 3 < iVar2 * 2)) {
    if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_14032bb28();
      return;
    }
  }
  return;
}



// FUNCTION 1472e8828 FUN_1472e8828 body=85 status=ok
// SIG undefined FUN_1472e8828(void)

void FUN_1472e8828(longlong param_1,int param_2)

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
  FUN_1402cf78c();
  return;
}



// FUNCTION 1472e887e FUN_1472e887e body=85 status=ok
// SIG undefined FUN_1472e887e(void)

void FUN_1472e887e(longlong param_1,int param_2)

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
  FUN_1430353ae();
  return;
}



// FUNCTION 1472e88d4 FUN_1472e88d4 body=42 status=ok
// SIG undefined FUN_1472e88d4(void)

longlong FUN_1472e88d4(longlong param_1,int param_2)

{
  FUN_140430b1a(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e88fe FUN_1472e88fe body=21 status=ok
// SIG undefined FUN_1472e88fe(void)

void FUN_1472e88fe(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1430353ae(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1472e8914 FUN_1472e8914 body=42 status=ok
// SIG undefined FUN_1472e8914(void)

longlong FUN_1472e8914(longlong param_1,int param_2)

{
  FUN_1472e893e(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e893e FUN_1472e893e body=112 status=ok
// SIG undefined FUN_1472e893e(void)

void FUN_1472e893e(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1471c577e(param_1 + 1);
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001472e89a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1472e89ae FUN_1472e89ae body=318 status=ok
// SIG undefined FUN_1472e89ae(void)

undefined4 * FUN_1472e89ae(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1472e8aee(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = *(uint *)(puVar1 + 1);
  local_40[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined8 *)(local_40 + 6) = puVar1[2];
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1472e8bd4(param_1,uVar5,local_40,&local_4c);
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
      local_40[9] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[8] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1472e8ce4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e8aee FUN_1472e8aee body=230 status=ok
// SIG undefined FUN_1472e8aee(void)

int * FUN_1472e8aee(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1472e8bd4 FUN_1472e8bd4 body=158 status=ok
// SIG undefined FUN_1472e8bd4(void)

undefined8 FUN_1472e8bd4(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*piVar1 == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[5];
          iVar7 = param_3[6];
          iVar8 = param_3[7];
          piVar1[4] = param_3[4];
          piVar1[5] = iVar6;
          piVar1[6] = iVar7;
          piVar1[7] = iVar8;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1472e8c72(param_1,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = piVar1[8];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 1472e8c72 FUN_1472e8c72 body=114 status=ok
// SIG undefined FUN_1472e8c72(void)

void FUN_1472e8c72(longlong *param_1,int param_2)

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



// FUNCTION 1472e8ce4 FUN_1472e8ce4 body=419 status=ok
// SIG undefined FUN_1472e8ce4(void)

void FUN_1472e8ce4(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x28);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 1472e8e88 FUN_1472e8e88 body=79 status=ok
// SIG undefined FUN_1472e8e88(void)

void FUN_1472e8e88(longlong *param_1,int *param_2)

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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x28) == *param_2) {
          FUN_1472e8ed8();
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1472e8ed8 FUN_1472e8ed8 body=87 status=ok
// SIG undefined FUN_1472e8ed8(void)

void FUN_1472e8ed8(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1472e8f30();
  return;
}



// FUNCTION 1472e8f30 FUN_1472e8f30 body=52 status=ok
// SIG undefined FUN_1472e8f30(void)

void FUN_1472e8f30(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1472e8c72(param_1,param_2);
  return;
}



// FUNCTION 1472e8f64 FUN_1472e8f64 body=67 status=ok
// SIG undefined FUN_1472e8f64(void)

void FUN_1472e8f64(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145a40b86(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1472e90ec(param_1);
    return;
  }
  FUN_1472e8fa8(param_1);
  FUN_145a40b86(param_1,0);
  return;
}



// FUNCTION 1472e8fa8 FUN_1472e8fa8 body=322 status=ok
// SIG undefined FUN_1472e8fa8(void)

void FUN_1472e8fa8(longlong *param_1)

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



// FUNCTION 1472e90ec FUN_1472e90ec body=422 status=ok
// SIG undefined FUN_1472e90ec(void)

void FUN_1472e90ec(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1472e9294 FUN_1472e9294 body=181 status=ok
// SIG undefined FUN_1472e9294(void)

longlong FUN_1472e9294(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x10;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == *param_3) {
          if (lVar3 != 0) goto LAB_1472e932c;
          break;
        }
        iVar1 = *(int *)(lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1472e934a(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x10 + *param_1;
LAB_1472e932c:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 4;
}



// FUNCTION 1472e934a FUN_1472e934a body=275 status=ok
// SIG undefined FUN_1472e934a(void)

undefined4 * FUN_1472e934a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1472e945e(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 1) = 0xffffffff00000000;
  cVar1 = FUN_1472e9544(param_1,param_3,local_40,local_48);
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
      local_40[3] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[2] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1472e90ec(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e945e FUN_1472e945e body=229 status=ok
// SIG undefined FUN_1472e945e(void)

int * FUN_1472e945e(longlong *param_1,int *param_2)

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



// FUNCTION 1472e9544 FUN_1472e9544 body=124 status=ok
// SIG undefined FUN_1472e9544(void)

undefined8 FUN_1472e9544(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
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
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_1472e95c0(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1472e95c0 FUN_1472e95c0 body=114 status=ok
// SIG undefined FUN_1472e95c0(void)

void FUN_1472e95c0(longlong *param_1,int param_2)

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



// FUNCTION 1472e9632 FUN_1472e9632 body=29 status=ok
// SIG undefined FUN_1472e9632(void)

undefined8 FUN_1472e9632(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e9650 FUN_1472e9650 body=215 status=ok
// SIG undefined FUN_1472e9650(void)

void FUN_1472e9650(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_140069376();
  uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar2 = uVar3 + 600;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x260);
    uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar2 = uVar3 + 600;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1472e9728(uVar3,param_2,param_3,param_4,1,param_5);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar3;
  *(int *)(uVar3 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar3);
  return;
}



// FUNCTION 1472e9728 FUN_1472e9728 body=249 status=ok
// SIG undefined FUN_1472e9728(void)

undefined8 *
FUN_1472e9728(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined2 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(longlong *)(param_3 + 0x48);
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  local_48 = 2;
  local_40 = param_4;
  local_30 = param_3;
  FUN_140068f1a(param_1,param_2,&local_40,param_5);
  *param_1 = &PTR_FUN_14a2f9ca0;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *(undefined4 *)(param_1 + 0x37) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  param_1[0x39] = *(undefined8 *)(param_6 + 4);
  param_1[0x3a] = *(undefined8 *)(param_6 + 6);
  param_1[0x3b] = *(undefined8 *)(param_6 + 8);
  param_1[0x3c] = *(undefined8 *)(param_6 + 10);
  param_1[0x3d] = *(undefined8 *)(param_6 + 0xc);
  param_1[0x3e] = *(undefined8 *)(param_6 + 0xe);
  puVar5 = (undefined8 *)(param_6 + 0x10);
  puVar6 = param_1 + 0x3f;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_6 + 0x26);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472e9822 FUN_1472e9822 body=38 status=ok
// SIG undefined FUN_1472e9822(void)

undefined8 FUN_1472e9822(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472e9848 FUN_1472e9848 body=253 status=ok
// SIG undefined FUN_1472e9848(void)

void FUN_1472e9848(ulonglong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x30);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar3 + 2) = (float)(int)uVar1;
  *(float *)((longlong)puVar3 + 0x14) = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(float *)((longlong)puVar3 + 0x1c) = (float)(int)uVar2;
  *(float *)(puVar3 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_1,param_5);
  FUN_143035b76(param_7);
  FUN_1447a9dbb(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1472e9945 FUN_1472e9945 body=39 status=ok
// SIG undefined FUN_1472e9945(void)

void FUN_1472e9945(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
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
    param_1 = param_1 + 0xc;
  }
  return;
}



// FUNCTION 1472e996c FUN_1472e996c body=136 status=ok
// SIG undefined FUN_1472e996c(void)

void FUN_1472e996c(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x248);
  if (param_2 <= (int)uVar1) {
    iVar5 = 6;
    if (6 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (6 < *(uint *)(param_1 + 0x24c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x60,0);
      iVar4 = (int)(uVar3 / 0x60);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x24c) = iVar5;
    FUN_1472e99f6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1472e99f6 FUN_1472e99f6 body=149 status=ok
// SIG undefined FUN_1472e99f6(void)

void FUN_1472e99f6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x240);
  if ((uint)param_3 < 7) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x60);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x240,0,param_3,0x60);
    memmove(*(void **)((longlong)param_1 + 0x240),param_1,(longlong)param_2 * 0x60);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x240,param_2,param_3,0x60);
  return;
}



// FUNCTION 1472e9a8c FUN_1472e9a8c body=67 status=ok
// SIG undefined FUN_1472e9a8c(void)

void FUN_1472e9a8c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472e9ad0(*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x24c));
  if (iVar1 == *(int *)(param_1 + 0x24c)) {
    return;
  }
  *(int *)(param_1 + 0x24c) = iVar1;
  FUN_1472e99f6(param_1,*(undefined4 *)(param_1 + 0x248),iVar1);
  return;
}



// FUNCTION 1472e9ad0 FUN_1472e9ad0 body=129 status=ok
// SIG undefined FUN_1472e9ad0(void)

ulonglong FUN_1472e9ad0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 6;
  if (6 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x60) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x60,0);
      uVar1 = uVar1 / 0x60;
    }
  }
  return uVar1;
}



// FUNCTION 1472e9b51 FUN_1472e9b51 body=575 status=ok
// SIG undefined FUN_1472e9b51(void)

void FUN_1472e9b51(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = *(int *)(param_3 + 0x30fc);
  fVar7 = (float)*(int *)(*param_2 + 0x88);
  iVar2 = *(int *)(param_3 + 0x30f8);
  fVar8 = (float)*(int *)(*param_2 + 0x84);
  iVar3 = *(int *)(*param_1 + 0x88);
  *(float *)(param_4 + 0xb0) = ((float)*(int *)(*param_1 + 0x84) * 0.5) / fVar8;
  *(float *)(param_4 + 0xb4) = ((float)iVar3 * 0.5) / fVar7;
  *(float *)(param_4 + 0xb8) = ((float)iVar2 * -0.5) / fVar8;
  *(float *)(param_4 + 0xbc) = ((float)iVar1 * -0.5) / fVar7;
  iVar1 = *(int *)(param_3 + 0x3104);
  iVar2 = *(int *)(param_3 + 0x30fc);
  iVar3 = *(int *)(*param_2 + 0x88);
  *(float *)(param_4 + 0xc0) =
       ((float)(*(int *)(param_3 + 0x3100) - *(int *)(param_3 + 0x30f8)) * 0.5 + -0.5) /
       (float)*(int *)(*param_2 + 0x84);
  *(float *)(param_4 + 0xc4) = ((float)(iVar1 - iVar2) * 0.5 + -0.5) / (float)iVar3;
  *(undefined8 *)(param_4 + 0xe0) = *(undefined8 *)(param_3 + 0x136f0);
  uVar4 = DAT_14c9c0d80;
  *(undefined8 *)(param_4 + 0xe8) = DAT_14c9c0d80;
  *(longlong *)(param_4 + 0xf0) = *param_2;
  *(undefined8 *)(param_4 + 0xf8) = uVar4;
  *(longlong *)(param_4 + 0x100) = param_2[1];
  *(undefined8 *)(param_4 + 0x108) = uVar4;
  fVar7 = (float)(*(int *)(param_3 + 0x3104) - *(int *)(param_3 + 0x30fc)) /
          (float)(*(int *)(param_3 + 0x137cc) * 2);
  fVar8 = (float)(*(int *)(param_3 + 0x3100) - *(int *)(param_3 + 0x30f8)) /
          (float)(*(int *)(param_3 + 0x137c8) * 2);
  *(float *)(param_4 + 0xa0) = fVar8;
  *(float *)(param_4 + 0xa4) = fVar7;
  *(float *)(param_4 + 0xa8) = 1.0 / fVar8;
  *(float *)(param_4 + 0xac) = 1.0 / fVar7;
  lVar5 = FUN_1447e4f80();
  cVar6 = '\x02';
  if (*(char *)(lVar5 + 0x41) != '\x03') {
    cVar6 = *(char *)(lVar5 + 0x41);
  }
  *(undefined8 *)(param_4 + 0x110) = *(undefined8 *)(param_3 + 0x18);
  *(char *)(param_4 + 0x118) = cVar6;
  *(undefined8 *)(param_4 + 0x120) = 0;
  *(uint *)(param_4 + 0xd4) = (uint)(*(int *)(DAT_14ca4cbf8 + 4) != 0);
  *(uint *)(param_4 + 0xd8) = (uint)(*(int *)(DAT_14ca4cc10 + 4) != 0);
  return;
}



// FUNCTION 1472e9d90 FUN_1472e9d90 body=53 status=ok
// SIG undefined FUN_1472e9d90(void)

undefined4 FUN_1472e9d90(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_14ca4cbc8 + 4);
  uVar1 = 4;
  if (3 < iVar3) {
    iVar3 = 4;
  }
  iVar2 = 1;
  if (1 < iVar3) {
    iVar2 = iVar3;
  }
  if (iVar2 - 2U < 3) {
    uVar1 = *(undefined4 *)(&DAT_14a304224 + (ulonglong)(iVar2 - 2U) * 4);
  }
  return uVar1;
}



// FUNCTION 1472e9dc6 FUN_1472e9dc6 body=44 status=ok
// SIG undefined FUN_1472e9dc6(void)

void FUN_1472e9dc6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472e9e12 FUN_1472e9e12 body=96 status=ok
// SIG undefined FUN_1472e9e12(void)

undefined8 FUN_1472e9e12(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f6d3b4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca55a58,1);
  return uVar3;
}



// FUNCTION 1472e9e72 FUN_1472e9e72 body=138 status=ok
// SIG undefined FUN_1472e9e72(void)

void * FUN_1472e9e72(void)

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



// FUNCTION 1472e9efc FUN_1472e9efc body=44 status=ok
// SIG undefined FUN_1472e9efc(void)

void FUN_1472e9efc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472e9f48 FUN_1472e9f48 body=96 status=ok
// SIG undefined FUN_1472e9f48(void)

undefined8 FUN_1472e9f48(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f35f62();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca55ae0,1);
  return uVar3;
}



// FUNCTION 1472e9fa8 FUN_1472e9fa8 body=138 status=ok
// SIG undefined FUN_1472e9fa8(void)

void * FUN_1472e9fa8(void)

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



// FUNCTION 1472ea032 FUN_1472ea032 body=177 status=ok
// SIG undefined FUN_1472ea032(void)

void FUN_1472ea032(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f6d3b4();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca55a58,param_4);
  local_78 = &DAT_14ca55a58;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1472fef6c(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ea0e4 FUN_1472ea0e4 body=177 status=ok
// SIG undefined FUN_1472ea0e4(void)

void FUN_1472ea0e4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f35f62();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca55ae0,param_4);
  local_78 = &DAT_14ca55ae0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1472ff34c(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ea196 FUN_1472ea196 body=56 status=ok
// SIG undefined FUN_1472ea196(void)

void FUN_1472ea196(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 1472ea1d2 FUN_1472ea1d2 body=56 status=ok
// SIG undefined FUN_1472ea1d2(void)

void FUN_1472ea1d2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 1472ea222 FUN_1472ea222 body=146 status=ok
// SIG undefined FUN_1472ea222(void)

void FUN_1472ea222(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0xffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(uint *)(param_1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0xffffffff;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0;
  return;
}



// FUNCTION 1472ea2b4 FUN_1472ea2b4 body=342 status=ok
// SIG undefined FUN_1472ea2b4(void)

longlong FUN_1472ea2b4(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0xffff;
  *(undefined2 *)(param_1 + 0xf4) = 0;
  iVar5 = 0;
  FUN_147440b96(param_1 + 0xf0,*(undefined8 *)(param_2 + 0x28),L"Material",0);
  if (0 < *(int *)(*(longlong *)(param_2 + 0x88) + 0x130)) {
    puVar1 = (ulonglong *)(param_1 + 0xe0);
    do {
      local_4a = 0xffff;
      FUN_140002266(&local_60,L"MaterialCollection%u",iVar5);
      puVar6 = &DAT_149dfb77a;
      if (local_58 != 0) {
        puVar6 = local_60;
      }
      FUN_147440b96(&local_4a,*(undefined8 *)(param_2 + 0x28),puVar6,0);
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      iVar2 = *(int *)(param_1 + 0xe8);
      *(uint *)(param_1 + 0xe8) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0xec) < iVar2 + 1U) {
        FUN_1472f5ad2(puVar1,iVar2);
      }
      uVar3 = *puVar1;
      uVar4 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      if ((uVar3 & 1) == 0) {
        uVar4 = uVar3;
      }
      *(undefined2 *)(uVar4 + (longlong)iVar2 * 2) = local_4a;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(*(longlong *)(param_2 + 0x88) + 0x130));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1472ea40c FUN_1472ea40c body=74 status=ok
// SIG undefined FUN_1472ea40c(void)

longlong FUN_1472ea40c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea2b4();
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined2 *)(param_1 + 0x100) = 0xffff;
  uVar1 = (**(code **)(*(longlong *)(param_2 + 0xa0) + 0x30))
                    (*(byte *)(param_2 + 0x10) & 0xf,*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  return param_1;
}



// FUNCTION 1472ea456 FUN_1472ea456 body=103 status=ok
// SIG undefined FUN_1472ea456(void)

void FUN_1472ea456(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  plVar4 = param_2;
  plVar1 = (longlong *)FUN_146827ffc(param_2);
  uVar3 = *(ulonglong *)(param_1 + 200);
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_147432850();
    uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,uVar2,*(ulonglong *)(param_1 + 200) >> 1);
    plVar4 = plVar1;
  }
  uVar2 = (**(code **)(uVar3 + 0x38))
                    (CONCAT71((int7)((ulonglong)plVar4 >> 8),*(undefined1 *)(param_1 + 0xd0)) &
                     0xffffffffffffff0f);
  FUN_1472ea4be(param_3,param_2,uVar2);
  return;
}



// FUNCTION 1472ea4be FUN_1472ea4be body=182 status=ok
// SIG undefined FUN_1472ea4be(void)

void FUN_1472ea4be(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  uint *local_48;
  undefined1 local_40 [12];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_1;
  uVar3 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar3 = uVar1;
  }
  if (uVar3 != 0) {
    local_34 = 0;
    uVar2 = FUN_1412f7d22();
    local_48 = &local_34;
    FUN_14682810a(param_2,local_40,uVar2,param_3);
    FUN_146828008(local_40,uVar3 - local_34,param_3);
    FUN_146827334(local_40);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_1468280da(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ea582 FUN_1472ea582 body=229 status=ok
// SIG undefined FUN_1472ea582(void)

void FUN_1472ea582(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined2 local_58;
  undefined1 local_56;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405f00c8();
  cVar3 = '\x02';
  if (DAT_14ca4d2c9 != '\x03') {
    cVar3 = DAT_14ca4d2c9;
  }
  *param_3 = *(undefined8 *)(param_2 + 0x60);
  *(char *)(param_3 + 1) = cVar3;
  local_40 = *(longlong *)(param_2 + 0x70);
  local_58 = CONCAT11(local_58._1_1_,0x1c);
  local_54 = 0;
  uStack_50 = 0xffffffff;
  local_48 = 0;
  uVar2 = FUN_14475683e(param_1 + 0x198,param_1 + 0x70,local_40 + 8,&local_58);
  param_3[2] = uVar2;
  lVar1 = *(longlong *)(param_2 + 0x68);
  local_58 = 0x1c;
  local_56 = 0;
  uStack_50 = (undefined4)lVar1;
  uStack_4c = (undefined4)((ulonglong)lVar1 >> 0x20);
  local_68 = &local_31;
  local_31 = 0;
  uVar2 = FUN_144a23c98(param_1 + 0x198,param_1 + 0x70,lVar1 + 8,&local_58);
  param_3[3] = uVar2;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ea668 FUN_1472ea668 body=10 status=ok
// SIG undefined FUN_1472ea668(void)

void FUN_1472ea668(byte param_1)

{
  DAT_14ca4d100 = (uint)param_1;
  return;
}



// FUNCTION 1472ea672 FUN_1472ea672 body=7 status=ok
// SIG undefined FUN_1472ea672(void)

void FUN_1472ea672(int param_1)

{
  DAT_14ca4d330 = DAT_14ca4d330 + param_1;
  return;
}



// FUNCTION 1472ea679 FUN_1472ea679 body=257 status=ok
// SIG undefined FUN_1472ea679(void)

void FUN_1472ea679(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 auStack_b8 [36];
  undefined4 local_94 [18];
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *param_1;
  uVar2 = *(undefined8 *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_1 + 0xc);
  puVar10 = (undefined4 *)(param_1 + 0x14);
  puVar11 = local_94;
  for (lVar8 = 0x12; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_4c = param_1[0x5c];
  lVar8 = *(longlong *)(param_1 + 0x60);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  lVar4 = *(longlong *)(param_1 + 0x68);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  iVar6 = DAT_14ca4d248;
  iVar5 = DAT_14c7590b0;
  lVar9 = (longlong)(int)DAT_14ca4d248;
  DAT_14ca4d248 = DAT_14ca4d248 + 1;
  if (DAT_14ca4d24c < DAT_14ca4d248) {
    FUN_1472ff7de(iVar6);
  }
  puVar7 = (undefined1 *)(DAT_14ca4d240 + lVar9 * 0x80);
  *puVar7 = uVar1;
  *(undefined8 *)(puVar7 + 4) = uVar2;
  *(undefined8 *)(puVar7 + 0xc) = uVar3;
  puVar10 = local_94;
  puVar11 = (undefined4 *)(puVar7 + 0x14);
  for (lVar9 = 0x12; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar7[0x5c] = local_4c;
  *(longlong *)(puVar7 + 0x60) = lVar8;
  *(longlong *)(puVar7 + 0x68) = lVar4;
  *(undefined8 *)(puVar7 + 0x70) = param_2;
  *(int *)(puVar7 + 0x78) = iVar5 + 10;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ea77c FUN_1472ea77c body=44 status=ok
// SIG undefined FUN_1472ea77c(void)

void FUN_1472ea77c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472ea7da FUN_1472ea7da body=96 status=ok
// SIG undefined FUN_1472ea7da(void)

undefined8 FUN_1472ea7da(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1405effc4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca55d20,1);
  return uVar3;
}



// FUNCTION 1472ea83a FUN_1472ea83a body=138 status=ok
// SIG undefined FUN_1472ea83a(void)

void * FUN_1472ea83a(void)

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



// FUNCTION 1472ea8c4 FUN_1472ea8c4 body=44 status=ok
// SIG undefined FUN_1472ea8c4(void)

void FUN_1472ea8c4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472ea922 FUN_1472ea922 body=96 status=ok
// SIG undefined FUN_1472ea922(void)

undefined8 FUN_1472ea922(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ee37a6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca55da8,1);
  return uVar3;
}



// FUNCTION 1472ea982 FUN_1472ea982 body=138 status=ok
// SIG undefined FUN_1472ea982(void)

void * FUN_1472ea982(void)

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



// FUNCTION 1472eaa0c FUN_1472eaa0c body=44 status=ok
// SIG undefined FUN_1472eaa0c(void)

void FUN_1472eaa0c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472eaa6a FUN_1472eaa6a body=96 status=ok
// SIG undefined FUN_1472eaa6a(void)

undefined8 FUN_1472eaa6a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f92d8c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca55e30,1);
  return uVar3;
}



// FUNCTION 1472eaaca FUN_1472eaaca body=138 status=ok
// SIG undefined FUN_1472eaaca(void)

void * FUN_1472eaaca(void)

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



// FUNCTION 1472eab54 FUN_1472eab54 body=44 status=ok
// SIG undefined FUN_1472eab54(void)

void FUN_1472eab54(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472eabb2 FUN_1472eabb2 body=96 status=ok
// SIG undefined FUN_1472eabb2(void)

undefined8 FUN_1472eabb2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ea25c8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca55eb8,1);
  return uVar3;
}



// FUNCTION 1472eac12 FUN_1472eac12 body=138 status=ok
// SIG undefined FUN_1472eac12(void)

void * FUN_1472eac12(void)

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



// FUNCTION 1472eac9c FUN_1472eac9c body=44 status=ok
// SIG undefined FUN_1472eac9c(void)

void FUN_1472eac9c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472eacfa FUN_1472eacfa body=96 status=ok
// SIG undefined FUN_1472eacfa(void)

undefined8 FUN_1472eacfa(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e5c92c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca55f40,1);
  return uVar3;
}



// FUNCTION 1472ead5a FUN_1472ead5a body=138 status=ok
// SIG undefined FUN_1472ead5a(void)

void * FUN_1472ead5a(void)

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



// FUNCTION 1472eade4 FUN_1472eade4 body=44 status=ok
// SIG undefined FUN_1472eade4(void)

void FUN_1472eade4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472eae42 FUN_1472eae42 body=96 status=ok
// SIG undefined FUN_1472eae42(void)

undefined8 FUN_1472eae42(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f1bfe2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca55fc8,1);
  return uVar3;
}



// FUNCTION 1472eaea2 FUN_1472eaea2 body=138 status=ok
// SIG undefined FUN_1472eaea2(void)

void * FUN_1472eaea2(void)

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



// FUNCTION 1472eaf2c FUN_1472eaf2c body=44 status=ok
// SIG undefined FUN_1472eaf2c(void)

void FUN_1472eaf2c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472eaf8a FUN_1472eaf8a body=96 status=ok
// SIG undefined FUN_1472eaf8a(void)

undefined8 FUN_1472eaf8a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ea2b3a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca56050,1);
  return uVar3;
}



// FUNCTION 1472eafea FUN_1472eafea body=138 status=ok
// SIG undefined FUN_1472eafea(void)

void * FUN_1472eafea(void)

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



// FUNCTION 1472eb074 FUN_1472eb074 body=44 status=ok
// SIG undefined FUN_1472eb074(void)

void FUN_1472eb074(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472eb0d2 FUN_1472eb0d2 body=96 status=ok
// SIG undefined FUN_1472eb0d2(void)

undefined8 FUN_1472eb0d2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ddb094();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca560d8,1);
  return uVar3;
}



// FUNCTION 1472eb132 FUN_1472eb132 body=138 status=ok
// SIG undefined FUN_1472eb132(void)

void * FUN_1472eb132(void)

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



// FUNCTION 1472eb1bc FUN_1472eb1bc body=44 status=ok
// SIG undefined FUN_1472eb1bc(void)

void FUN_1472eb1bc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472eb21a FUN_1472eb21a body=96 status=ok
// SIG undefined FUN_1472eb21a(void)

undefined8 FUN_1472eb21a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ddb094();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca560d8,1);
  return uVar3;
}



// FUNCTION 1472eb27a FUN_1472eb27a body=138 status=ok
// SIG undefined FUN_1472eb27a(void)

void * FUN_1472eb27a(void)

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



// FUNCTION 1472eb304 FUN_1472eb304 body=44 status=ok
// SIG undefined FUN_1472eb304(void)

void FUN_1472eb304(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472eb362 FUN_1472eb362 body=96 status=ok
// SIG undefined FUN_1472eb362(void)

undefined8 FUN_1472eb362(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f1c5d2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca56160,1);
  return uVar3;
}



// FUNCTION 1472eb3c2 FUN_1472eb3c2 body=138 status=ok
// SIG undefined FUN_1472eb3c2(void)

void * FUN_1472eb3c2(void)

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



// FUNCTION 1472eb44c FUN_1472eb44c body=44 status=ok
// SIG undefined FUN_1472eb44c(void)

void FUN_1472eb44c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472eb4aa FUN_1472eb4aa body=96 status=ok
// SIG undefined FUN_1472eb4aa(void)

undefined8 FUN_1472eb4aa(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e75dda();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca561e8,1);
  return uVar3;
}



// FUNCTION 1472eb50a FUN_1472eb50a body=138 status=ok
// SIG undefined FUN_1472eb50a(void)

void * FUN_1472eb50a(void)

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



// FUNCTION 1472eb594 FUN_1472eb594 body=44 status=ok
// SIG undefined FUN_1472eb594(void)

void FUN_1472eb594(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472eb5f2 FUN_1472eb5f2 body=96 status=ok
// SIG undefined FUN_1472eb5f2(void)

undefined8 FUN_1472eb5f2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e94d20();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca56270,1);
  return uVar3;
}



// FUNCTION 1472eb652 FUN_1472eb652 body=138 status=ok
// SIG undefined FUN_1472eb652(void)

void * FUN_1472eb652(void)

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



// FUNCTION 1472eb6dc FUN_1472eb6dc body=44 status=ok
// SIG undefined FUN_1472eb6dc(void)

void FUN_1472eb6dc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472eb73a FUN_1472eb73a body=96 status=ok
// SIG undefined FUN_1472eb73a(void)

undefined8 FUN_1472eb73a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e76348();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca562f8,1);
  return uVar3;
}



// FUNCTION 1472eb79a FUN_1472eb79a body=138 status=ok
// SIG undefined FUN_1472eb79a(void)

void * FUN_1472eb79a(void)

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



// FUNCTION 1472eb824 FUN_1472eb824 body=660 status=ok
// SIG undefined FUN_1472eb824(void)

byte * FUN_1472eb824(byte *param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 **)(param_1 + 0xc) = &DAT_100000001;
  param_1[0x14] = 0xff;
  uVar3 = DAT_14c8464e8;
  param_1[0x15] = 0xff;
  param_1[0x16] = 0xff;
  param_1[0x17] = 0xff;
  param_1[0x18] = 0xff;
  param_1[0x19] = 0xff;
  param_1[0x1a] = 0xff;
  param_1[0x1b] = 0xff;
  *(undefined8 *)(param_1 + 0x20) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = DAT_14c8464f0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0x80;
  param_1[0x3b] = 0x3f;
  param_1[0x3c] = 1;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 **)(param_1 + 0x40) = &DAT_100000001;
  param_1[0x48] = 1;
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
  *param_1 = DAT_14ca4d100 != 0;
  *(undefined8 *)(param_1 + 4) = *param_2;
  *(undefined8 *)(param_1 + 0xc) = param_2[1];
  puVar4 = DAT_14ca4d118;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (*piVar1 == 0x40000002) {
    uVar10 = 1;
    if (1 < (int)*DAT_14ca4d118) {
      uVar10 = (ulonglong)*DAT_14ca4d118;
    }
LAB_1472eb8d2:
    bVar13 = true;
    uVar7 = 0;
    puVar9 = DAT_14ca4d118;
  }
  else {
    bVar5 = FUN_144a61b4f();
    puVar9 = DAT_14ca4d118;
    uVar10 = 1;
    if (1 < (int)puVar4[bVar5 ^ 1]) {
      uVar10 = (ulonglong)puVar4[bVar5 ^ 1];
    }
    if (*piVar1 == 0x40000002) goto LAB_1472eb8d2;
    bVar5 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar5 ^ 1);
    bVar13 = *piVar1 == 0x40000002;
  }
  uVar6 = (ulonglong)puVar9[uVar7];
  if ((int)puVar9[uVar7] < 2) {
    uVar6 = 1;
  }
  *(ulonglong *)(param_1 + 0x3c) = uVar6 | uVar10 << 0x20;
  puVar4 = DAT_14ca4d148;
  if (bVar13) {
    uVar10 = 1;
    if (1 < (int)*DAT_14ca4d148) {
      uVar10 = (ulonglong)*DAT_14ca4d148;
    }
  }
  else {
    bVar5 = FUN_144a61b4f();
    lVar12 = DAT_14ca4d130;
    uVar2 = 1;
    if (1 < (int)puVar4[bVar5 ^ 1]) {
      uVar2 = puVar4[bVar5 ^ 1];
    }
    uVar10 = (ulonglong)uVar2;
    if (*piVar1 != 0x40000002) {
      bVar5 = FUN_144a61b4f();
      uVar7 = (ulonglong)(bVar5 ^ 1);
      goto LAB_1472eb910;
    }
  }
  uVar7 = 0;
  lVar12 = DAT_14ca4d130;
LAB_1472eb910:
  uVar2 = *(uint *)(lVar12 + uVar7 * 4);
  uVar7 = 1;
  if (1 < (int)uVar2) {
    uVar7 = (ulonglong)uVar2;
  }
  *(ulonglong *)(param_1 + 0x44) = uVar7 | uVar10 << 0x20;
  lVar12 = DAT_14ca4d160;
  bVar5 = *param_1;
  if (bVar5 == 1) {
    if (*piVar1 == 0x40000002) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_144a61b4f();
      uVar10 = (uVar10 ^ 1) & 0xff;
      bVar5 = *param_1;
    }
    iVar8 = DAT_14ca4e244 + *(int *)(lVar12 + uVar10 * 4);
    iVar11 = 0;
    if (0 < iVar8) {
      iVar11 = iVar8;
    }
  }
  else {
    iVar11 = 0;
  }
  *(int *)(param_1 + 0x4c) = iVar11;
  lVar12 = DAT_14ca4d178;
  iVar11 = 0;
  if ((bVar5 & 1) != 0) {
    if (*piVar1 == 0x40000002) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_144a61b4f();
      uVar10 = (uVar10 ^ 1) & 0xff;
      bVar5 = *param_1;
    }
    iVar8 = DAT_14ca4e240 + *(int *)(lVar12 + uVar10 * 4);
    iVar11 = 0;
    if (0 < iVar8) {
      iVar11 = iVar8;
    }
  }
  *(int *)(param_1 + 0x50) = iVar11;
  lVar12 = DAT_14ca4d190;
  if ((bVar5 & 1) == 0) {
    iVar11 = 0;
  }
  else {
    if (*piVar1 == 0x40000002) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_144a61b4f();
      uVar10 = (uVar10 ^ 1) & 0xff;
      bVar5 = *param_1;
    }
    iVar8 = DAT_14ca4e248 + *(int *)(lVar12 + uVar10 * 4);
    iVar11 = 0;
    if (0 < iVar8) {
      iVar11 = iVar8;
    }
  }
  *(int *)(param_1 + 0x54) = iVar11;
  lVar12 = DAT_14ca4d1a8;
  iVar11 = 0;
  if ((bVar5 & 1) != 0) {
    if (*piVar1 == 0x40000002) {
      uVar10 = 0;
    }
    else {
      bVar5 = FUN_144a61b4f();
      uVar10 = (ulonglong)(bVar5 ^ 1);
    }
    iVar8 = DAT_14ca4e24c + *(int *)(lVar12 + uVar10 * 4);
    iVar11 = 0;
    if (0 < iVar8) {
      iVar11 = iVar8;
    }
  }
  *(int *)(param_1 + 0x58) = iVar11;
  param_1[0x5c] = 0;
  return param_1;
}



// FUNCTION 1472ebab8 FUN_1472ebab8 body=25 status=ok
// SIG undefined FUN_1472ebab8(void)

undefined8 FUN_1472ebab8(undefined8 param_1)

{
  FUN_1405f0270();
  return param_1;
}



// FUNCTION 1472ebad1 FUN_1472ebad1 body=178 status=ok
// SIG undefined FUN_1472ebad1(void)

undefined1 * FUN_1472ebad1(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *param_1 = *param_3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
  puVar5 = (undefined4 *)(param_3 + 0x14);
  puVar7 = (undefined4 *)(param_1 + 0x14);
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0x5c] = param_3[0x5c];
  plVar3 = (longlong *)FUN_1449609de(param_2,*(undefined8 *)(param_3 + 0x68));
  lVar4 = *plVar3;
  if (lVar4 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *(longlong *)(param_1 + 0x60) = lVar4;
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    puVar6 = *(undefined8 **)(param_1 + 0x68);
  }
  plVar3 = (longlong *)FUN_1449609de(param_2,*(undefined8 *)(param_3 + 0x70));
  puVar2 = (undefined8 *)*plVar3;
  if (puVar6 != puVar2) {
    *(undefined8 **)(param_1 + 0x68) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      UNLOCK();
    }
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1472ebb84 FUN_1472ebb84 body=74 status=ok
// SIG undefined FUN_1472ebb84(void)

void FUN_1472ebb84(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001472ebbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1472ebbce FUN_1472ebbce body=206 status=ok
// SIG undefined FUN_1472ebbce(void)

undefined1 * FUN_1472ebbce(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [80];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *param_1 = *param_3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
  puVar3 = (undefined4 *)(param_3 + 0x14);
  puVar4 = (undefined4 *)(param_1 + 0x14);
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x5c] = param_3[0x5c];
  FUN_14303e858(param_1,local_88);
  FUN_14305d836(param_1 + 0x60,local_88);
  uVar1 = FUN_144735dd8(param_2,param_3 + 0x60,0);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = FUN_144735dd8(param_2,param_3 + 0x68,0);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ebc9d FUN_1472ebc9d body=269 status=ok
// SIG undefined FUN_1472ebc9d(void)

void FUN_1472ebc9d(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0 [96];
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = param_4;
  FUN_14303ea0a(param_1,param_2,param_2 + 0x13870,param_3);
  if (*(longlong *)(param_2 + 8) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x40);
  }
  if ((longlong)DAT_14ca4d248 != 0) {
    lVar3 = (longlong)DAT_14ca4d248 << 7;
    lVar5 = DAT_14ca4d240;
    do {
      if ((*(longlong *)(lVar5 + 0x70) == 0) || (*(longlong *)(lVar5 + 0x70) == lVar4)) {
        FUN_1472ebbce(local_c0,param_1,lVar5);
        local_c8 = param_4;
        FUN_14303ea0a(param_1,param_2,local_c0,param_3);
        if (local_60 != 0) {
          LOCK();
          puVar1 = (uint *)(local_60 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
      }
      lVar5 = lVar5 + 0x80;
      lVar3 = lVar3 + -0x80;
    } while (lVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472ebdac FUN_1472ebdac body=53 status=ok
// SIG undefined FUN_1472ebdac(void)

undefined8 * FUN_1472ebdac(undefined8 *param_1,int param_2,int param_3)

{
  param_2 = param_2 * param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (-1 < param_2) {
    if (param_2 != 0) {
      FUN_144893a1c(param_1 + 2);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1472ebde2 FUN_1472ebde2 body=204 status=ok
// SIG undefined FUN_1472ebde2(void)

void FUN_1472ebde2(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  
  lVar4 = param_1[3];
  iVar2 = (int)param_2[1];
  lVar5 = *param_2;
  if (lVar5 + (longlong)iVar2 * 2 + -2 != lVar5 && iVar2 != 0) {
    lVar6 = 0;
    do {
      uVar1 = *(undefined1 *)(lVar5 + lVar6);
      iVar3 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar3 + 1U) {
        FUN_1447403be(param_1 + 2,iVar3);
      }
      *(undefined1 *)(param_1[2] + (longlong)iVar3) = uVar1;
      lVar6 = lVar6 + 2;
    } while ((longlong)iVar2 * 2 + -2 != lVar6);
  }
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_1472ffa98(param_1,iVar3);
  }
  cVar7 = (char)iVar2 + -1;
  if (iVar2 == 0) {
    cVar7 = '\0';
  }
  lVar6 = *param_1;
  *(undefined4 *)(lVar6 + lVar5 * 8) = param_3;
  *(char *)(lVar6 + 6 + lVar5 * 8) = cVar7;
  *(short *)(lVar6 + 4 + lVar5 * 8) = (short)(int)lVar4;
  return;
}



// FUNCTION 1472ebeae FUN_1472ebeae body=674 status=ok
// SIG undefined FUN_1472ebeae(void)

int * FUN_1472ebeae(undefined8 *param_1,int *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  ulonglong local_a0;
  undefined1 local_98;
  int *local_88;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar4 = *(int *)(param_1 + 1);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 1) = 1;
    if (*(int *)((longlong)param_1 + 0xc) == 0) {
      FUN_1472ffa98(param_1,0);
    }
    puVar2 = (undefined4 *)*param_1;
    *puVar2 = 0xffffffff;
    *(undefined1 *)((longlong)puVar2 + 6) = 4;
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar1 = param_1 + 2;
    iVar4 = *(int *)(param_1 + 3);
    *(uint *)(param_1 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar4 + 1U) {
      FUN_1447403be(puVar1,iVar4);
    }
    *(undefined1 *)(param_1[2] + (longlong)iVar4) = 0x4e;
    iVar4 = *(int *)(param_1 + 3);
    *(uint *)(param_1 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar4 + 1U) {
      FUN_1447403be(puVar1,iVar4);
    }
    *(undefined1 *)(param_1[2] + (longlong)iVar4) = 0x6f;
    iVar4 = *(int *)(param_1 + 3);
    *(uint *)(param_1 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar4 + 1U) {
      FUN_1447403be(puVar1,iVar4);
    }
    *(undefined1 *)(param_1[2] + (longlong)iVar4) = 0x6e;
    iVar4 = *(int *)(param_1 + 3);
    *(uint *)(param_1 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar4 + 1U) {
      FUN_1447403be(puVar1,iVar4);
    }
    *(undefined1 *)(param_1[2] + (longlong)iVar4) = 0x65;
    iVar4 = *(int *)(param_1 + 1);
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    *param_2 = iVar4;
    param_2[1] = *(int *)(param_1 + 3);
    if (iVar4 == 0) {
      local_a8 = &DAT_14a303218;
      local_98 = 1;
      local_a0 = 8;
      iVar4 = 1;
      goto LAB_1472ebf30;
    }
  }
  else {
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    *param_2 = iVar4;
    param_2[1] = *(int *)(param_1 + 3);
  }
  local_a0 = (ulonglong)(uint)(iVar4 * 8);
  local_a8 = (undefined *)*param_1;
  local_98 = 0;
LAB_1472ebf30:
  local_88 = param_2 + 4;
  local_50 = FUN_144942e63(param_3,L"ShaderPrint.Strings.Infos",8,iVar4);
  local_68[0] = 0;
  local_64 = 0xffffffff00000000;
  local_58 = 0;
  if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
    local_68[0] = 0x1c;
  }
  uVar3 = FUN_14475683e(param_3 + 0x198,param_3 + 0x70,local_50 + 8,local_68);
  *(undefined8 *)(param_2 + 2) = uVar3;
  local_7c = *(int *)(param_1 + 3);
  local_a8 = (undefined *)(longlong)local_7c;
  local_70 = 0;
  local_78 = 0x4109;
  local_80 = 1;
  local_a0 = local_a0 & 0xffffffffffffff00;
  local_50 = FUN_1400489e9(param_3,L"ShaderPrint.Strings.Chars",&local_80,param_1[2]);
  local_68[0] = 0x39;
  local_64 = 0xffffffff00000000;
  local_58 = 0;
  uVar3 = FUN_14475683e(param_3 + 0x198,param_3 + 0x70,local_50 + 8,local_68);
  *(undefined8 *)local_88 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ec152 FUN_1472ec152 body=44 status=ok
// SIG undefined FUN_1472ec152(void)

void FUN_1472ec152(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472ec19e FUN_1472ec19e body=96 status=ok
// SIG undefined FUN_1472ec19e(void)

undefined8 FUN_1472ec19e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e95290();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca56408,1);
  return uVar3;
}



// FUNCTION 1472ec1fe FUN_1472ec1fe body=138 status=ok
// SIG undefined FUN_1472ec1fe(void)

void * FUN_1472ec1fe(void)

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



// FUNCTION 1472ec288 FUN_1472ec288 body=44 status=ok
// SIG undefined FUN_1472ec288(void)

void FUN_1472ec288(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472ec2d4 FUN_1472ec2d4 body=96 status=ok
// SIG undefined FUN_1472ec2d4(void)

undefined8 FUN_1472ec2d4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e95800();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca56490,1);
  return uVar3;
}



// FUNCTION 1472ec334 FUN_1472ec334 body=138 status=ok
// SIG undefined FUN_1472ec334(void)

void * FUN_1472ec334(void)

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



// FUNCTION 1472ec3be FUN_1472ec3be body=177 status=ok
// SIG undefined FUN_1472ec3be(void)

void FUN_1472ec3be(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e95800();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca56490,param_4);
  local_78 = &DAT_14ca56490;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1472ffc10(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ec470 FUN_1472ec470 body=44 status=ok
// SIG undefined FUN_1472ec470(void)

void FUN_1472ec470(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472ec4bc FUN_1472ec4bc body=39 status=ok
// SIG undefined FUN_1472ec4bc(void)

void FUN_1472ec4bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1472ec4e4 FUN_1472ec4e4 body=138 status=ok
// SIG undefined FUN_1472ec4e4(void)

void * FUN_1472ec4e4(void)

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



// FUNCTION 1472ec56e FUN_1472ec56e body=44 status=ok
// SIG undefined FUN_1472ec56e(void)

void FUN_1472ec56e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472ec5a6 FUN_1472ec5a6 body=39 status=ok
// SIG undefined FUN_1472ec5a6(void)

void FUN_1472ec5a6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1472ec5ce FUN_1472ec5ce body=138 status=ok
// SIG undefined FUN_1472ec5ce(void)

void * FUN_1472ec5ce(void)

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



// FUNCTION 1472ec658 FUN_1472ec658 body=1094 status=ok
// SIG undefined FUN_1472ec658(void)

void FUN_1472ec658(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  float local_1a8;
  float fStack_1a4;
  float local_1a0;
  undefined4 uStack_19c;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (*(char *)(*(longlong *)(param_3 + 8) + 0xd0) == '\x01') {
    lVar3 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x348);
    lVar5 = 0;
    if (*(char *)(lVar3 + 8) != '\0') {
      lVar5 = lVar3;
    }
  }
  else {
    lVar5 = 0;
  }
  FUN_140250972(param_2,lVar5,0,param_4);
  local_1a0 = (float)(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x1040));
  fStack_1a4 = (float)(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x1038));
  local_1a8 = (float)(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x1030));
  local_1d8 = 0x3f800000;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0x3f800000;
  local_1c0 = 0.0;
  dStack_1b8 = 0.0;
  local_1b0 = 5.26354424712089e-315;
  uStack_19c = 0x3f800000;
  FUN_144afeb32(&local_158,&local_1d8,param_1 + 0x220);
  *(undefined4 *)(param_4 + 0x110) = (undefined4)local_128;
  *(undefined4 *)(param_4 + 0x114) = local_128._4_4_;
  *(undefined4 *)(param_4 + 0x118) = (undefined4)uStack_120;
  *(undefined4 *)(param_4 + 0x11c) = uStack_120._4_4_;
  *(undefined4 *)(param_4 + 0x100) = (undefined4)local_138;
  *(undefined4 *)(param_4 + 0x104) = local_138._4_4_;
  *(undefined4 *)(param_4 + 0x108) = (undefined4)uStack_130;
  *(undefined4 *)(param_4 + 0x10c) = uStack_130._4_4_;
  *(undefined4 *)(param_4 + 0xf0) = (undefined4)local_148;
  *(undefined4 *)(param_4 + 0xf4) = local_148._4_4_;
  *(undefined4 *)(param_4 + 0xf8) = (undefined4)uStack_140;
  *(undefined4 *)(param_4 + 0xfc) = uStack_140._4_4_;
  *(undefined4 *)(param_4 + 0xe0) = (undefined4)local_158;
  *(undefined4 *)(param_4 + 0xe4) = local_158._4_4_;
  *(undefined4 *)(param_4 + 0xe8) = (undefined4)uStack_150;
  *(undefined4 *)(param_4 + 0xec) = uStack_150._4_4_;
  FUN_144a928e2(&local_158,param_1 + 0x60);
  *(undefined8 *)(param_4 + 0x120) = local_158;
  *(undefined8 *)(param_4 + 0x128) = uStack_150;
  *(undefined8 *)(param_4 + 0x130) = local_148;
  *(undefined8 *)(param_4 + 0x138) = uStack_140;
  *(undefined4 *)(param_4 + 0x140) = (undefined4)local_138;
  *(undefined4 *)(param_4 + 0x144) = local_138._4_4_;
  *(undefined4 *)(param_4 + 0x148) = (undefined4)uStack_130;
  *(undefined4 *)(param_4 + 0x14c) = uStack_130._4_4_;
  *(undefined4 *)(param_4 + 0x150) = (undefined4)local_128;
  *(undefined4 *)(param_4 + 0x154) = local_128._4_4_;
  *(undefined4 *)(param_4 + 0x158) = (undefined4)uStack_120;
  *(undefined4 *)(param_4 + 0x15c) = uStack_120._4_4_;
  uVar6 = *(undefined4 *)(param_1 + 0x2a0);
  uVar1 = *(undefined4 *)(param_1 + 0x10e0);
  *(undefined8 *)(param_4 + 0x160) = *(undefined8 *)(param_1 + 0x10d8);
  *(undefined4 *)(param_4 + 0x168) = uVar1;
  *(undefined4 *)(param_4 + 0x16c) = uVar6;
  uVar2 = *(uint *)(param_1 + 0x990);
  if (((((char)uVar2 < '\0') && ((uVar2 & 0x10) != 0)) && (-1 < *(int *)(param_1 + 0x944))) ||
     ((uVar6 = 0, (uVar2 >> 0xb & 1) != 0 && ((uVar2 & 0x10) != 0)))) {
    uVar6 = 0x3f800000;
  }
  *(undefined4 *)(param_4 + 0x170) = uVar6;
  if ((*(byte *)(param_1 + 0x990) & 0x20) != 0) {
    local_e8 = *(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x1040);
    local_f0 = *(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x1038);
    local_f8 = *(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x1030);
    local_158 = 0x3ff0000000000000;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0x3ff0000000000000;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0x3ff0000000000000;
    local_100 = 0;
    local_e0 = 0x3ff0000000000000;
    pfVar4 = (float *)(param_4 + 0x1bc);
    lVar5 = 0;
    do {
      FUN_1447fea8d(&local_1d8,&local_158,*(longlong *)(param_1 + 0x9b0) + lVar5);
      pfVar4[-0xf] = (float)(double)CONCAT44(uStack_1d4,local_1d8);
      pfVar4[-0xe] = (float)(double)CONCAT44(uStack_1cc,uStack_1d0);
      pfVar4[-0xd] = (float)(double)CONCAT44(uStack_1c4,uStack_1c8);
      pfVar4[-0xc] = (float)local_1c0;
      pfVar4[-0xb] = (float)dStack_1b8;
      pfVar4[-10] = (float)local_1b0;
      pfVar4[-9] = (float)(double)CONCAT44(fStack_1a4,local_1a8);
      pfVar4[-8] = (float)(double)CONCAT44(uStack_19c,local_1a0);
      pfVar4[-7] = (float)local_198;
      pfVar4[-6] = (float)local_190;
      pfVar4[-5] = (float)local_188;
      pfVar4[-4] = (float)local_180;
      pfVar4[-3] = (float)local_178;
      pfVar4[-2] = (float)local_170;
      pfVar4[-1] = (float)local_168;
      *pfVar4 = (float)local_160;
      lVar5 = lVar5 + 0x80;
      pfVar4 = pfVar4 + 0x10;
    } while (lVar5 != 0x300);
  }
  if ((local_d0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472ecaa0 FUN_1472ecaa0 body=56 status=ok
// SIG undefined FUN_1472ecaa0(void)

void FUN_1472ecaa0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 1472ecae0 FUN_1472ecae0 body=39 status=ok
// SIG undefined FUN_1472ecae0(void)

void FUN_1472ecae0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14730000e(uVar1,param_1);
  return;
}



// FUNCTION 1472ecb08 FUN_1472ecb08 body=196 status=ok
// SIG undefined FUN_1472ecb08(void)

void * FUN_1472ecb08(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x118);
  memset(_Dst,0,0x118);
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
  *(undefined8 *)((longlong)_Dst + 0xe0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
  *(undefined2 *)((longlong)_Dst + 0xf0) = 0xffff;
  *(undefined1 *)((longlong)_Dst + 0xf4) = 0;
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x108) = 0;
  *(undefined4 *)((longlong)_Dst + 0x110) = 0;
  return _Dst;
}



// FUNCTION 1472ecbcc FUN_1472ecbcc body=56 status=ok
// SIG undefined FUN_1472ecbcc(void)

void FUN_1472ecbcc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 1472ecc08 FUN_1472ecc08 body=284 status=ok
// SIG undefined FUN_1472ecc08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1472ecc08(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4ec38) {
    FUN_144b3d300(&DAT_14ca4ec38);
    if (DAT_14ca4ec38 == -1) {
      FUN_1456c065a();
      FUN_140db5666(&DAT_14ca4eb90,2,&DAT_14ca4eb28,L"TShadowDepthVSVertexShadowDepth_OutputDepth",
                    L"/Engine/Private/ShadowDepthVertexShader.usf",L"Main",0,1,FUN_1472ecd50,
                    FUN_1472ecd28,FUN_14178096a,&LAB_1472ecd24,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca4eb90 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_143043041);
      _Init_thread_footer(&DAT_14ca4ec38);
    }
  }
  return &DAT_14ca4eb90;
}



// FUNCTION 1472ecd28 FUN_1472ecd28 body=39 status=ok
// SIG undefined FUN_1472ecd28(void)

void FUN_1472ecd28(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14730000e(uVar1,param_1);
  return;
}



// FUNCTION 1472ecd50 FUN_1472ecd50 body=196 status=ok
// SIG undefined FUN_1472ecd50(void)

void * FUN_1472ecd50(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x118);
  memset(_Dst,0,0x118);
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
  *(undefined8 *)((longlong)_Dst + 0xe0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
  *(undefined2 *)((longlong)_Dst + 0xf0) = 0xffff;
  *(undefined1 *)((longlong)_Dst + 0xf4) = 0;
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x108) = 0;
  *(undefined4 *)((longlong)_Dst + 0x110) = 0;
  return _Dst;
}



// FUNCTION 1472ece14 FUN_1472ece14 body=56 status=ok
// SIG undefined FUN_1472ece14(void)

void FUN_1472ece14(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 1472ece54 FUN_1472ece54 body=39 status=ok
// SIG undefined FUN_1472ece54(void)

void FUN_1472ece54(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14730000e(uVar1,param_1);
  return;
}



// FUNCTION 1472ece7c FUN_1472ece7c body=196 status=ok
// SIG undefined FUN_1472ece7c(void)

void * FUN_1472ece7c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x118);
  memset(_Dst,0,0x118);
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
  *(undefined8 *)((longlong)_Dst + 0xe0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
  *(undefined2 *)((longlong)_Dst + 0xf0) = 0xffff;
  *(undefined1 *)((longlong)_Dst + 0xf4) = 0;
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x108) = 0;
  *(undefined4 *)((longlong)_Dst + 0x110) = 0;
  return _Dst;
}



// FUNCTION 1472ecf40 FUN_1472ecf40 body=56 status=ok
// SIG undefined FUN_1472ecf40(void)

void FUN_1472ecf40(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 1472ecf7c FUN_1472ecf7c body=284 status=ok
// SIG undefined FUN_1472ecf7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1472ecf7c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4ee88) {
    FUN_144b3d300(&DAT_14ca4ee88);
    if (DAT_14ca4ee88 == -1) {
      FUN_1456c0902();
      FUN_140db5666(&DAT_14ca4ede0,2,&DAT_14ca4ed78,
                    L"TShadowDepthVSVertexShadowDepth_VirtualShadowMap",
                    L"/Engine/Private/ShadowDepthVertexShader.usf",L"Main",0,1,FUN_1472ed0c4,
                    FUN_1472ed09c,FUN_1407db42c,&LAB_1472ed098,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca4ede0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_143043059);
      _Init_thread_footer(&DAT_14ca4ee88);
    }
  }
  return &DAT_14ca4ede0;
}



// FUNCTION 1472ed09c FUN_1472ed09c body=39 status=ok
// SIG undefined FUN_1472ed09c(void)

void FUN_1472ed09c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14730000e(uVar1,param_1);
  return;
}



// FUNCTION 1472ed0c4 FUN_1472ed0c4 body=196 status=ok
// SIG undefined FUN_1472ed0c4(void)

void * FUN_1472ed0c4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x118);
  memset(_Dst,0,0x118);
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
  *(undefined8 *)((longlong)_Dst + 0xe0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
  *(undefined2 *)((longlong)_Dst + 0xf0) = 0xffff;
  *(undefined1 *)((longlong)_Dst + 0xf4) = 0;
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x108) = 0;
  *(undefined4 *)((longlong)_Dst + 0x110) = 0;
  return _Dst;
}



// FUNCTION 1472ed188 FUN_1472ed188 body=56 status=ok
// SIG undefined FUN_1472ed188(void)

void FUN_1472ed188(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 1472ed1c8 FUN_1472ed1c8 body=39 status=ok
// SIG undefined FUN_1472ed1c8(void)

void FUN_1472ed1c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14730000e(uVar1,param_1);
  return;
}



// FUNCTION 1472ed1f0 FUN_1472ed1f0 body=196 status=ok
// SIG undefined FUN_1472ed1f0(void)

void * FUN_1472ed1f0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x118);
  memset(_Dst,0,0x118);
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
  *(undefined8 *)((longlong)_Dst + 0xe0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
  *(undefined2 *)((longlong)_Dst + 0xf0) = 0xffff;
  *(undefined1 *)((longlong)_Dst + 0xf4) = 0;
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x108) = 0;
  *(undefined4 *)((longlong)_Dst + 0x110) = 0;
  return _Dst;
}



// FUNCTION 1472ed2b4 FUN_1472ed2b4 body=56 status=ok
// SIG undefined FUN_1472ed2b4(void)

void FUN_1472ed2b4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 1472ed2f4 FUN_1472ed2f4 body=39 status=ok
// SIG undefined FUN_1472ed2f4(void)

void FUN_1472ed2f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14730000e(uVar1,param_1);
  return;
}


