// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14749332a FUN_14749332a body=323 status=ok
// SIG undefined FUN_14749332a(void)

undefined8 * FUN_14749332a(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined **ppuVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar3 = *param_2;
  iVar2 = (int)param_2[1];
  lVar9 = (longlong)iVar2;
  if (lVar9 != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar6) == param_1) {
        return (undefined8 *)0x0;
      }
      lVar6 = lVar6 + 8;
    } while (lVar9 * 8 - lVar6 != 0);
  }
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_147493f8a(param_2,iVar2);
    lVar3 = *param_2;
  }
  *(longlong *)(lVar3 + lVar9 * 8) = param_1;
  uVar8 = (longlong)(int)param_2[1];
  if (0 < (longlong)(int)param_2[1]) {
    do {
      cVar1 = (**(code **)(**(longlong **)(*param_2 + -8 + uVar8 * 8) + 0x480))();
      uVar5 = uVar8 - 1 & 0xffffffff;
      if (cVar1 == '\0') {
        uVar5 = 0xffffffff;
      }
    } while ((1 < uVar8) && (uVar8 = uVar8 - 1, (int)uVar5 == -1));
    if ((int)uVar5 != -1) {
      iVar2 = (**(code **)(**(longlong **)(*param_2 + uVar5 * 8) + 0x478))();
      if (iVar2 == 2) {
        ppuVar7 = &PTR_FUN_149f5fe20;
      }
      else {
        iVar2 = (**(code **)(**(longlong **)(*param_2 + uVar5 * 8) + 0x478))();
        if (iVar2 == 3) {
          ppuVar7 = &PTR_FUN_149f5fe80;
        }
        else {
          iVar2 = (**(code **)(**(longlong **)(*param_2 + uVar5 * 8) + 0x478))();
          if (iVar2 != 4) {
            return (undefined8 *)0x0;
          }
          ppuVar7 = &PTR_FUN_149f5fee0;
        }
      }
      puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      puVar4[1] = 0;
      FUN_1446ddc76(puVar4 + 1,&DAT_149e02088,1);
      *puVar4 = ppuVar7;
      return puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 147493472 FUN_147493472 body=45 status=ok
// SIG undefined FUN_147493472(void)

longlong FUN_147493472(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1459a17fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474934a0 FUN_1474934a0 body=48 status=ok
// SIG undefined FUN_1474934a0(void)

longlong FUN_1474934a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_1459a17fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474934d0 FUN_1474934d0 body=48 status=ok
// SIG undefined FUN_1474934d0(void)

longlong FUN_1474934d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_1459a17fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147493500 FUN_147493500 body=48 status=ok
// SIG undefined FUN_147493500(void)

longlong FUN_147493500(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_1459a17fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147493538 FUN_147493538 body=45 status=ok
// SIG undefined FUN_147493538(void)

longlong FUN_147493538(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14749356c FUN_14749356c body=45 status=ok
// SIG undefined FUN_14749356c(void)

longlong FUN_14749356c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474935a0 FUN_1474935a0 body=45 status=ok
// SIG undefined FUN_1474935a0(void)

longlong FUN_1474935a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474935d4 FUN_1474935d4 body=45 status=ok
// SIG undefined FUN_1474935d4(void)

longlong FUN_1474935d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14749360a FUN_14749360a body=45 status=ok
// SIG undefined FUN_14749360a(void)

longlong FUN_14749360a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14749363e FUN_14749363e body=45 status=ok
// SIG undefined FUN_14749363e(void)

longlong FUN_14749363e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147493672 FUN_147493672 body=45 status=ok
// SIG undefined FUN_147493672(void)

longlong FUN_147493672(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474936a6 FUN_1474936a6 body=45 status=ok
// SIG undefined FUN_1474936a6(void)

longlong FUN_1474936a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474936d4 FUN_1474936d4 body=45 status=ok
// SIG undefined FUN_1474936d4(void)

longlong FUN_1474936d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147493702 FUN_147493702 body=45 status=ok
// SIG undefined FUN_147493702(void)

longlong FUN_147493702(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147493730 FUN_147493730 body=45 status=ok
// SIG undefined FUN_147493730(void)

longlong FUN_147493730(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14749375e FUN_14749375e body=45 status=ok
// SIG undefined FUN_14749375e(void)

longlong FUN_14749375e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14749378c FUN_14749378c body=45 status=ok
// SIG undefined FUN_14749378c(void)

longlong FUN_14749378c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474937ba FUN_1474937ba body=45 status=ok
// SIG undefined FUN_1474937ba(void)

longlong FUN_1474937ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474937e8 FUN_1474937e8 body=45 status=ok
// SIG undefined FUN_1474937e8(void)

longlong FUN_1474937e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147493816 FUN_147493816 body=45 status=ok
// SIG undefined FUN_147493816(void)

longlong FUN_147493816(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147493844 FUN_147493844 body=45 status=ok
// SIG undefined FUN_147493844(void)

longlong FUN_147493844(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147493872 FUN_147493872 body=45 status=ok
// SIG undefined FUN_147493872(void)

longlong FUN_147493872(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474938a0 FUN_1474938a0 body=45 status=ok
// SIG undefined FUN_1474938a0(void)

longlong FUN_1474938a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474938d2 FUN_1474938d2 body=45 status=ok
// SIG undefined FUN_1474938d2(void)

longlong FUN_1474938d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147493900 FUN_147493900 body=45 status=ok
// SIG undefined FUN_147493900(void)

longlong FUN_147493900(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14749392e FUN_14749392e body=45 status=ok
// SIG undefined FUN_14749392e(void)

longlong FUN_14749392e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14749395c FUN_14749395c body=45 status=ok
// SIG undefined FUN_14749395c(void)

longlong FUN_14749395c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147493990 FUN_147493990 body=45 status=ok
// SIG undefined FUN_147493990(void)

longlong FUN_147493990(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474939be FUN_1474939be body=38 status=ok
// SIG undefined FUN_1474939be(void)

undefined8 FUN_1474939be(undefined8 param_1,int param_2)

{
  FUN_140064e2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474939fc FUN_1474939fc body=79 status=ok
// SIG undefined FUN_1474939fc(void)

undefined8 * FUN_1474939fc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147493a9c(param_1,iVar1);
      FUN_147493afe(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147493a4c FUN_147493a4c body=79 status=ok
// SIG undefined FUN_147493a4c(void)

undefined8 * FUN_147493a4c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147493b50(param_1,iVar1);
      FUN_147493bb2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147493a9c FUN_147493a9c body=98 status=ok
// SIG undefined FUN_147493a9c(void)

void FUN_147493a9c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147493afe FUN_147493afe body=82 status=ok
// SIG undefined FUN_147493afe(void)

void FUN_147493afe(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 147493b50 FUN_147493b50 body=98 status=ok
// SIG undefined FUN_147493b50(void)

void FUN_147493b50(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147493bb2 FUN_147493bb2 body=82 status=ok
// SIG undefined FUN_147493bb2(void)

void FUN_147493bb2(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 147493c04 FUN_147493c04 body=48 status=ok
// SIG undefined FUN_147493c04(void)

void FUN_147493c04(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147493c34 FUN_147493c34 body=48 status=ok
// SIG undefined FUN_147493c34(void)

void FUN_147493c34(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147493c64 FUN_147493c64 body=132 status=ok
// SIG undefined FUN_147493c64(void)

void FUN_147493c64(longlong param_1,int param_2)

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



// FUNCTION 147493cea FUN_147493cea body=132 status=ok
// SIG undefined FUN_147493cea(void)

void FUN_147493cea(longlong param_1,int param_2)

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



// FUNCTION 147493dae FUN_147493dae body=100 status=ok
// SIG undefined FUN_147493dae(void)

undefined1 FUN_147493dae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    FUN_1474939fc(param_2 + 0x10,param_3 + 0x10);
    FUN_147493a4c(param_2 + 0x20,param_3 + 0x20);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 147493e3a FUN_147493e3a body=59 status=ok
// SIG undefined FUN_147493e3a(void)

undefined8 FUN_147493e3a(longlong *param_1)

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



// FUNCTION 147493e80 FUN_147493e80 body=34 status=ok
// SIG undefined FUN_147493e80(void)

void FUN_147493e80(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1459a193a(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147493ef2 FUN_147493ef2 body=29 status=ok
// SIG undefined FUN_147493ef2(void)

undefined8 FUN_147493ef2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147493f16 FUN_147493f16 body=45 status=ok
// SIG undefined FUN_147493f16(void)

void FUN_147493f16(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_14a3fdf00;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  return;
}



// FUNCTION 147493f44 FUN_147493f44 body=68 status=ok
// SIG undefined FUN_147493f44(void)

void FUN_147493f44(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1408bc7be(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146eee2a6(param_1,param_2);
  return;
}



// FUNCTION 147493f8a FUN_147493f8a body=132 status=ok
// SIG undefined FUN_147493f8a(void)

void FUN_147493f8a(longlong param_1,int param_2)

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



// FUNCTION 147494010 FUN_147494010 body=298 status=ok
// SIG undefined FUN_147494010(void)

void FUN_147494010(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_14749413c(local_18,local_1c,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749413c FUN_14749413c body=119 status=ok
// SIG undefined FUN_14749413c(void)

void FUN_14749413c(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x878) != 0)) &&
     (*(longlong **)(param_1 + 0x880) != (longlong *)0x0)) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x880) + 8))();
    if (lVar1 != 0) {
      uVar2 = FUN_145b31914();
      plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
      if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001474941b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1474941b4 FUN_1474941b4 body=300 status=ok
// SIG undefined FUN_1474941b4(void)

void FUN_1474941b4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
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
  FUN_1474942e2(local_18,local_20,local_24);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474942e2 FUN_1474942e2 body=121 status=ok
// SIG undefined FUN_1474942e2(void)

void FUN_1474942e2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x878) != 0)) &&
     (*(longlong **)(param_1 + 0x880) != (longlong *)0x0)) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x880) + 8))();
    if (lVar1 != 0) {
      uVar2 = FUN_145b31914();
      plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
      if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147494358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3,param_2,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14749435c FUN_14749435c body=298 status=ok
// SIG undefined FUN_14749435c(void)

void FUN_14749435c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_14749413c(local_18,local_1c,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147494496 FUN_147494496 body=235 status=ok
// SIG undefined FUN_147494496(void)

void FUN_147494496(undefined8 param_1,longlong param_2)

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
  FUN_1474b3bd4(param_1,local_20,local_21);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147494585 FUN_147494585 body=96 status=ok
// SIG undefined FUN_147494585(void)

void FUN_147494585(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_1474945e6(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474945e6 FUN_1474945e6 body=88 status=ok
// SIG undefined FUN_1474945e6(void)

undefined8 * FUN_1474945e6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474ab1e8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 7);
      }
    }
  }
  return param_1;
}



// FUNCTION 14749463e FUN_14749463e body=96 status=ok
// SIG undefined FUN_14749463e(void)

void FUN_14749463e(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_1474946a0(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474946a0 FUN_1474946a0 body=85 status=ok
// SIG undefined FUN_1474946a0(void)

undefined8 * FUN_1474946a0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474ab24a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x38);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474946f5 FUN_1474946f5 body=96 status=ok
// SIG undefined FUN_1474946f5(void)

void FUN_1474946f5(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_147494756(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147494756 FUN_147494756 body=89 status=ok
// SIG undefined FUN_147494756(void)

undefined8 * FUN_147494756(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474ab2ba(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x50);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474947af FUN_1474947af body=96 status=ok
// SIG undefined FUN_1474947af(void)

void FUN_1474947af(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_147494810(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147494810 FUN_147494810 body=88 status=ok
// SIG undefined FUN_147494810(void)

undefined8 * FUN_147494810(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474ab32e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 147494868 FUN_147494868 body=138 status=ok
// SIG undefined FUN_147494868(void)

void FUN_147494868(undefined8 param_1,longlong param_2)

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
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474948f4 FUN_1474948f4 body=156 status=ok
// SIG undefined FUN_1474948f4(void)

void FUN_1474948f4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147494992(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147494992 FUN_147494992 body=280 status=ok
// SIG undefined FUN_147494992(void)

void FUN_147494992(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_28 = param_2;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    iVar3 = FUN_1474ab390(param_1 + 0x358,uVar2 >> 0x10 ^ uVar2,&local_28);
    if (iVar3 == -1) {
      local_30 = param_2;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      FUN_1474ab460(param_1 + 0x358,local_34,&local_30);
      lVar1 = *(longlong *)(param_2 + 0x390);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xa40) != 0)) {
        if (*(longlong *)(lVar1 + 0xb0) == 0) {
          FUN_1448abda6();
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147494ade FUN_147494ade body=138 status=ok
// SIG undefined FUN_147494ade(void)

void FUN_147494ade(undefined8 param_1,longlong param_2)

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
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147494b6a FUN_147494b6a body=156 status=ok
// SIG undefined FUN_147494b6a(void)

void FUN_147494b6a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147494c08(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147494c08 FUN_147494c08 body=153 status=ok
// SIG undefined FUN_147494c08(void)

void FUN_147494c08(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0xb0);
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1);
    }
    FUN_14749575a(param_1,*(undefined8 *)(lVar1 + 0x260));
    local_28 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    FUN_147495bc8(param_1 + 0x358,&local_28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147494cb6 FUN_147494cb6 body=177 status=ok
// SIG undefined FUN_147494cb6(void)

void FUN_147494cb6(longlong param_1,longlong param_2)

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
  *(byte *)(param_1 + 0x2a8) = *(byte *)(param_1 + 0x2a8) & 0xfd | (local_1c != 0) * '\x02';
  FUN_147495b14(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147494d68 FUN_147494d68 body=199 status=ok
// SIG undefined FUN_147494d68(void)

void FUN_147494d68(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_24 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0x2d4) = puVar4[2];
  uVar1 = *(undefined4 *)((longlong)puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 1);
  uVar3 = *(undefined4 *)((longlong)puVar4 + 0xc);
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)puVar4;
  *(undefined4 *)(param_1 + 0x2c8) = uVar1;
  *(undefined4 *)(param_1 + 0x2cc) = uVar2;
  *(undefined4 *)(param_1 + 0x2d0) = uVar3;
  FUN_147495b14(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147494e34 FUN_147494e34 body=175 status=ok
// SIG undefined FUN_147494e34(void)

void FUN_147494e34(longlong param_1,longlong param_2)

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
  *(byte *)(param_1 + 0x2a8) = *(byte *)(param_1 + 0x2a8) & 0xfe | local_1c != 0;
  FUN_147495b14(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147494ee4 FUN_147494ee4 body=199 status=ok
// SIG undefined FUN_147494ee4(void)

void FUN_147494ee4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_24 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 700) = puVar4[2];
  uVar1 = *(undefined4 *)((longlong)puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 1);
  uVar3 = *(undefined4 *)((longlong)puVar4 + 0xc);
  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)puVar4;
  *(undefined4 *)(param_1 + 0x2b0) = uVar1;
  *(undefined4 *)(param_1 + 0x2b4) = uVar2;
  *(undefined4 *)(param_1 + 0x2b8) = uVar3;
  FUN_147495b14(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147494fb0 FUN_147494fb0 body=178 status=ok
// SIG undefined FUN_147494fb0(void)

void FUN_147494fb0(longlong param_1,longlong param_2)

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
  *(byte *)(param_1 + 0x2a8) = *(byte *)(param_1 + 0x2a8) & 0xf7 | (local_1c != 0) << 3;
  FUN_147495b14(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147495064 FUN_147495064 body=192 status=ok
// SIG undefined FUN_147495064(void)

void FUN_147495064(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 uStack_24;
  undefined1 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_24 = 0;
  uStack_1c = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar4 = &local_28;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)(param_1 + 0x2f4) = *puVar4;
  *(undefined4 *)(param_1 + 0x2f8) = uVar1;
  *(undefined4 *)(param_1 + 0x2fc) = uVar2;
  *(undefined4 *)(param_1 + 0x300) = uVar3;
  FUN_147495b14(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749512a FUN_14749512a body=178 status=ok
// SIG undefined FUN_14749512a(void)

void FUN_14749512a(longlong param_1,longlong param_2)

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
  *(byte *)(param_1 + 0x2a8) = *(byte *)(param_1 + 0x2a8) & 0xfb | (local_1c != 0) << 2;
  FUN_147495b14(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474951de FUN_1474951de body=199 status=ok
// SIG undefined FUN_1474951de(void)

void FUN_1474951de(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_24 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0x2ec) = puVar4[2];
  uVar1 = *(undefined4 *)((longlong)puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 1);
  uVar3 = *(undefined4 *)((longlong)puVar4 + 0xc);
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)puVar4;
  *(undefined4 *)(param_1 + 0x2e0) = uVar1;
  *(undefined4 *)(param_1 + 0x2e4) = uVar2;
  *(undefined4 *)(param_1 + 0x2e8) = uVar3;
  FUN_147495b14(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474952a6 FUN_1474952a6 body=291 status=ok
// SIG undefined FUN_1474952a6(void)

void FUN_1474952a6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x518);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,plVar2,local_39,param_1 + 0x240);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474953ca FUN_1474953ca body=291 status=ok
// SIG undefined FUN_1474953ca(void)

void FUN_1474953ca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x508);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,plVar2,local_39,param_1 + 0x240);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474954ee FUN_1474954ee body=291 status=ok
// SIG undefined FUN_1474954ee(void)

void FUN_1474954ee(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x538);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,plVar2,local_39,param_1 + 0x240);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147495612 FUN_147495612 body=291 status=ok
// SIG undefined FUN_147495612(void)

void FUN_147495612(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x528);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,plVar2,local_39,param_1 + 0x240);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749575a FUN_14749575a body=163 status=ok
// SIG undefined FUN_14749575a(void)

void FUN_14749575a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x9d0);
  local_24 = 0;
  FUN_1406526fe(uVar1,&local_24,param_1);
  local_24 = 1;
  FUN_1406526fe(uVar1,&local_24,param_1);
  local_24 = 2;
  FUN_1406526fe(uVar1,&local_24,param_1);
  local_24 = 4;
  FUN_1406526fe(uVar1,&local_24,param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474957fe FUN_1474957fe body=446 status=ok
// SIG undefined FUN_1474957fe(void)

void FUN_1474957fe(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
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
  if ((*(int *)(param_1 + 0x310) == *(int *)(param_1 + 0x33c)) &&
     (*(int *)(param_1 + 0x360) == *(int *)(param_1 + 0x38c))) {
    lVar4 = *(longlong *)(param_1 + 0xb0);
    if (lVar4 == 0) {
      lVar4 = FUN_1448abda6(param_1);
    }
    if (*(longlong *)(lVar4 + 0x260) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0xb0);
    if (lVar4 == 0) {
      lVar4 = FUN_1448abda6(param_1);
    }
    if (*(longlong *)(lVar4 + 0x260) != 0) {
      FUN_1474959d2(param_1);
    }
    plVar1 = (longlong *)(param_1 + 0x358);
    lVar4 = param_1 + 0x368;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar4;
    if (*(int *)(param_1 + 0x380) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = *(int *)(param_1 + 0x380);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != lVar4)) {
      do {
        local_60 = uVar2;
        lVar5 = *(longlong *)(*local_78 + (longlong)iVar3 * 0x10);
        if ((lVar5 != 0) &&
           ((lVar5 = *(longlong *)(lVar5 + 0x390), lVar5 != 0 && (*(longlong *)(lVar5 + 0xa40) != 0)
            ))) {
          lVar5 = *(longlong *)(lVar5 + 0xb0);
          if (lVar5 == 0) {
            lVar5 = FUN_1448abda6();
          }
          FUN_1474959d2(param_1,*(undefined8 *)(lVar5 + 0x260));
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != plVar1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar4 || local_60._4_4_ != iVar6));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474959d2 FUN_1474959d2 body=321 status=ok
// SIG undefined FUN_1474959d2(void)

void FUN_1474959d2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x9d0);
  local_3c = 0;
  local_50 = FUN_147495dc2;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_68 = &local_60;
  FUN_147495d00(uVar1,&local_3c,param_1,&local_50);
  local_3c = 1;
  local_50 = FUN_147495f76;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_68 = &local_60;
  FUN_147495eb4(uVar1,&local_3c,param_1,&local_50);
  local_3c = 2;
  local_50 = FUN_1474960d0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_68 = &local_60;
  FUN_14749600e(uVar1,&local_3c,param_1,&local_50);
  local_3c = 4;
  local_50 = FUN_14749622a;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_68 = &local_60;
  FUN_147496168(uVar1,&local_3c,param_1,&local_50);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147495b14 FUN_147495b14 body=89 status=ok
// SIG undefined FUN_147495b14(void)

undefined4 FUN_147495b14(longlong param_1)

{
  undefined4 uVar1;
  byte bVar2;
  
  if ((*(byte *)(param_1 + 0x2a8) & 0xf) == 0) {
    *(byte *)(param_1 + 0x1fa) = *(byte *)(param_1 + 0x1fa) & 0xf7;
  }
  else {
    bVar2 = 8;
    if (((*(char *)(param_1 + 0x2c0) != '\x04') && (*(char *)(param_1 + 0x2d8) != '\x03')) &&
       (*(char *)(param_1 + 0x2f0) != '\x03')) {
      bVar2 = (*(char *)(param_1 + 0x300) == '\x02') << 3;
    }
    *(byte *)(param_1 + 0x1fa) = *(byte *)(param_1 + 0x1fa) & 0xf7 | bVar2;
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x490);
  *(undefined4 *)(param_1 + 0x490) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 147495b6e FUN_147495b6e body=26 status=ok
// SIG undefined FUN_147495b6e(void)

void FUN_147495b6e(undefined8 param_1)

{
  FUN_1401c3ca6();
  FUN_1474957fe(param_1);
  return;
}



// FUNCTION 147495b88 FUN_147495b88 body=62 status=ok
// SIG undefined FUN_147495b88(void)

void FUN_147495b88(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
  FUN_14749575a(param_1,*(undefined8 *)(lVar1 + 0x260));
  FUN_1448c4a0e(param_1,param_2);
  return;
}



// FUNCTION 147495bc8 FUN_147495bc8 body=311 status=ok
// SIG undefined FUN_147495bc8(void)

void FUN_147495bc8(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar8 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar7 = (ulonglong *)((longlong)iVar5 * 0x10 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar7;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_1474ab9ca(param_1,(int)*puVar8);
          return;
        }
        iVar5 = (int)puVar7[1];
        puVar8 = puVar7 + 1;
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 147495d00 FUN_147495d00 body=192 status=ok
// SIG undefined FUN_147495d00(void)

void FUN_147495d00(longlong param_1,int *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar4 = *param_4;
  uVar2 = *(undefined4 *)(param_5 + 1);
  uVar5 = *param_5;
  iVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8);
  local_50 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *local_50 = &PTR_FUN_14a40d840;
  local_50[1] = param_3;
  local_50[2] = uVar4;
  *(undefined4 *)(local_50 + 3) = uVar1;
  local_50[4] = uVar5;
  *(undefined4 *)(local_50 + 5) = uVar2;
  (**(code **)(*plVar6 + 8))(plVar6);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147495dc2 FUN_147495dc2 body=242 status=ok
// SIG undefined FUN_147495dc2(void)

void FUN_147495dc2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  
  if ((*(byte *)(param_1 + 0x2a8) & 1) == 0) {
    return;
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x3f0);
  _Src = *(void **)(param_2 + 8);
  iVar3 = *(int *)(param_1 + 0x3f8);
  *(uint *)(param_1 + 0x3f8) = iVar3 + uVar2;
  if ((uint)(*(int *)(param_1 + 0x3fc) - iVar3) < uVar2) {
    FUN_14172debc(plVar1,iVar3);
  }
  else if (uVar2 == 0) goto LAB_147495e3d;
  memcpy((void *)((longlong)iVar3 * 0x120 + *plVar1),_Src,(longlong)(int)uVar2 * 0x120);
LAB_147495e3d:
  plVar4 = *(longlong **)(param_1 + 0x508);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,param_1 + 0x430,plVar1);
    if ((0 < *(int *)(*(longlong *)(param_1 + 0x508) + 0x18)) && (0 < *(int *)(param_1 + 0x3b0))) {
      FUN_147494585(param_1 + 0x3a8,*(longlong *)(param_1 + 0x508) + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  if (-1 < *(int *)(param_1 + 0x3fc)) {
    return;
  }
  FUN_146e9f4f2(plVar1,0);
  return;
}



// FUNCTION 147495eb4 FUN_147495eb4 body=192 status=ok
// SIG undefined FUN_147495eb4(void)

void FUN_147495eb4(longlong param_1,int *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar4 = *param_4;
  uVar2 = *(undefined4 *)(param_5 + 1);
  uVar5 = *param_5;
  iVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8);
  local_50 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *local_50 = &PTR_FUN_14a40d860;
  local_50[1] = param_3;
  local_50[2] = uVar4;
  *(undefined4 *)(local_50 + 3) = uVar1;
  local_50[4] = uVar5;
  *(undefined4 *)(local_50 + 5) = uVar2;
  (**(code **)(*plVar6 + 8))(plVar6);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147495f76 FUN_147495f76 body=151 status=ok
// SIG undefined FUN_147495f76(void)

void FUN_147495f76(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(byte *)(param_1 + 0x2a8) & 2) != 0) {
    lVar1 = param_1 + 0x400;
    FUN_1474962c2(lVar1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
    plVar2 = *(longlong **)(param_1 + 0x518);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1 + 0x430,lVar1);
      if ((0 < *(int *)(*(longlong *)(param_1 + 0x518) + 0x18)) && (0 < *(int *)(param_1 + 0x3c0)))
      {
        FUN_14749463e(param_1 + 0x3b8,*(longlong *)(param_1 + 0x518) + 0x10);
      }
    }
    *(undefined4 *)(param_1 + 0x408) = 0;
    if (*(int *)(param_1 + 0x40c) < 0) {
      FUN_146dfc51c(lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14749600e FUN_14749600e body=192 status=ok
// SIG undefined FUN_14749600e(void)

void FUN_14749600e(longlong param_1,int *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar4 = *param_4;
  uVar2 = *(undefined4 *)(param_5 + 1);
  uVar5 = *param_5;
  iVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8);
  local_50 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *local_50 = &PTR_FUN_14a40d880;
  local_50[1] = param_3;
  local_50[2] = uVar4;
  *(undefined4 *)(local_50 + 3) = uVar1;
  local_50[4] = uVar5;
  *(undefined4 *)(local_50 + 5) = uVar2;
  (**(code **)(*plVar6 + 8))(plVar6);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474960d0 FUN_1474960d0 body=151 status=ok
// SIG undefined FUN_1474960d0(void)

void FUN_1474960d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(byte *)(param_1 + 0x2a8) & 4) != 0) {
    lVar1 = param_1 + 0x410;
    FUN_147496314(lVar1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
    plVar2 = *(longlong **)(param_1 + 0x528);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1 + 0x430,lVar1);
      if ((0 < *(int *)(*(longlong *)(param_1 + 0x528) + 0x18)) && (0 < *(int *)(param_1 + 0x3d0)))
      {
        FUN_1474946f5(param_1 + 0x3c8,*(longlong *)(param_1 + 0x528) + 0x10);
      }
    }
    *(undefined4 *)(param_1 + 0x418) = 0;
    if (*(int *)(param_1 + 0x41c) < 0) {
      FUN_146ea0880(lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 147496168 FUN_147496168 body=192 status=ok
// SIG undefined FUN_147496168(void)

void FUN_147496168(longlong param_1,int *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar4 = *param_4;
  uVar2 = *(undefined4 *)(param_5 + 1);
  uVar5 = *param_5;
  iVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8);
  local_50 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *local_50 = &PTR_FUN_14a40d8a0;
  local_50[1] = param_3;
  local_50[2] = uVar4;
  *(undefined4 *)(local_50 + 3) = uVar1;
  local_50[4] = uVar5;
  *(undefined4 *)(local_50 + 5) = uVar2;
  (**(code **)(*plVar6 + 8))(plVar6);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749622a FUN_14749622a body=151 status=ok
// SIG undefined FUN_14749622a(void)

void FUN_14749622a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(byte *)(param_1 + 0x2a8) & 8) != 0) {
    lVar1 = param_1 + 0x420;
    FUN_147496366(lVar1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
    plVar2 = *(longlong **)(param_1 + 0x538);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1 + 0x430,lVar1);
      if ((0 < *(int *)(*(longlong *)(param_1 + 0x538) + 0x18)) && (0 < *(int *)(param_1 + 0x3e0)))
      {
        FUN_1474947af(param_1 + 0x3d8,*(longlong *)(param_1 + 0x538) + 0x10);
      }
    }
    *(undefined4 *)(param_1 + 0x428) = 0;
    if (*(int *)(param_1 + 0x42c) < 0) {
      FUN_146ea0fec(lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1474962c2 FUN_1474962c2 body=81 status=ok
// SIG undefined FUN_1474962c2(void)

void FUN_1474962c2(longlong *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_3) {
    FUN_145765404(param_1,iVar1);
  }
  FUN_1474abd53((longlong)iVar1 * 0x98 + *param_1,param_2,param_3);
  return;
}



// FUNCTION 147496314 FUN_147496314 body=82 status=ok
// SIG undefined FUN_147496314(void)

void FUN_147496314(longlong *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_3) {
    FUN_146287622(param_1,iVar1);
  }
  FUN_1474abdd8((longlong)iVar1 * 0x90 + *param_1,param_2,param_3);
  return;
}



// FUNCTION 147496366 FUN_147496366 body=78 status=ok
// SIG undefined FUN_147496366(void)

void FUN_147496366(longlong *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_3) {
    FUN_145747b24(param_1,iVar1);
  }
  FUN_1474abe46((longlong)iVar1 * 0x58 + *param_1,param_2,param_3);
  return;
}



// FUNCTION 1474963b4 FUN_1474963b4 body=574 status=ok
// SIG undefined FUN_1474963b4(void)

void FUN_1474963b4(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined4 *puVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = param_1 + 2;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_1474abe9c(plVar1);
  }
  piVar12 = (int *)param_1[0x10];
  lVar11 = param_3[1];
  if ((longlong)(int)lVar11 != 0) {
    fVar5 = (float)piVar12[4];
    lVar9 = *param_3;
    lVar14 = 0;
    do {
      if (((((float)piVar12[2] <= 0.0) ||
           (dVar6 = *(double *)(lVar9 + 0x28 + lVar14), dVar7 = *(double *)(lVar9 + 0x30 + lVar14),
           dVar15 = *(double *)(lVar9 + 0x38 + lVar14),
           (double)(float)piVar12[2] <= SQRT(dVar15 * dVar15 + dVar6 * dVar6 + dVar7 * dVar7))) &&
          (((float)piVar12[3] <= 0.0 ||
           (dVar6 = (double)(float)piVar12[3], pdVar3 = (double *)(lVar9 + 0x58 + lVar14),
           dVar6 < *pdVar3 || dVar6 == *pdVar3)))) &&
         (((float)piVar12[4] <= 0.0 ||
          (dVar7 = *(double *)(param_2 + 0x20) - *(double *)(lVar9 + 0x10 + lVar14),
          dVar15 = *(double *)(param_2 + 0x28) - *(double *)(lVar9 + 0x18 + lVar14),
          dVar6 = *(double *)(param_2 + 0x30) - *(double *)(lVar9 + 0x20 + lVar14),
          (float)(dVar6 * dVar6 + dVar15 * dVar15 + dVar7 * dVar7) <= fVar5 * fVar5)))) {
        local_a8 = *(undefined8 *)(lVar9 + 0x20 + lVar14);
        puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar14);
        local_b8 = *puVar2;
        uStack_b0 = puVar2[1];
        uStack_90 = *(undefined8 *)(lVar9 + 0x38 + lVar14);
        puVar4 = (undefined4 *)(lVar9 + 0x28 + lVar14);
        uStack_a0 = *puVar4;
        uStack_9c = puVar4[1];
        uStack_98 = puVar4[2];
        uStack_94 = puVar4[3];
        dVar6 = *(double *)(lVar9 + 0x58 + lVar14);
        iVar8 = (int)param_1[3];
        *(uint *)(param_1 + 3) = iVar8 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar8 + 1U) {
          FUN_1474abecc(plVar1,iVar8);
        }
        lVar10 = param_1[2];
        lVar13 = (longlong)iVar8 * 0x38;
        puVar2 = (undefined8 *)(lVar10 + 0x20 + lVar13);
        *puVar2 = CONCAT44(uStack_94,uStack_98);
        puVar2[1] = uStack_90;
        puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar13);
        *puVar2 = local_a8;
        puVar2[1] = CONCAT44(uStack_9c,uStack_a0);
        puVar4 = (undefined4 *)(lVar10 + lVar13);
        *puVar4 = (undefined4)local_b8;
        puVar4[1] = local_b8._4_4_;
        puVar4[2] = (undefined4)uStack_b0;
        puVar4[3] = uStack_b0._4_4_;
        *(float *)(lVar10 + 0x30 + lVar13) = (float)dVar6;
        piVar12 = (int *)param_1[0x10];
        if ((0 < *piVar12) && ((int)param_1[3] == *piVar12)) break;
      }
      lVar14 = lVar14 + 0x98;
    } while ((longlong)(int)lVar11 * 0x98 - lVar14 != 0);
  }
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001474965dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,plVar1,(char)piVar12[5],param_2);
  return;
}



// FUNCTION 1474965f4 FUN_1474965f4 body=7362 status=ok
// SIG undefined FUN_1474965f4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1474965f4(undefined8 param_1,longlong *param_2,char param_3,longlong param_4)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double *pdVar17;
  longlong *plVar18;
  double *pdVar19;
  double *pdVar20;
  longlong lVar21;
  int iVar22;
  double *pdVar23;
  double *pdVar24;
  ulonglong uVar25;
  double *pdVar26;
  double *pdVar27;
  longlong lVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  double *pdVar32;
  double *pdVar33;
  double *pdVar34;
  int iVar35;
  bool bVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auStack_3c8 [32];
  longlong local_3a8;
  longlong local_3a0;
  undefined4 local_398 [188];
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  if (param_3 == '\x03') {
    iVar29 = (int)param_2[1];
    if (1 < (longlong)iVar29) {
      dVar4 = *(double *)(param_4 + 0x30);
      lVar21 = *param_2;
      dVar2 = *(double *)(param_4 + 0x20);
      dVar3 = *(double *)(param_4 + 0x28);
      memset(local_398,0,0x2f0);
      local_3a0 = (longlong)iVar29 * 0x38 + lVar21 + -0x38;
      local_3a8 = lVar21;
      fVar37 = logf((float)iVar29);
      local_398[0] = (int)(longlong)(fVar37 + fVar37);
      plVar18 = &local_3a8;
      do {
        pdVar24 = (double *)*plVar18;
        pdVar23 = (double *)plVar18[1];
        iVar29 = (int)plVar18[2];
        iVar35 = (int)((ulonglong)((longlong)pdVar23 - (longlong)pdVar24) >> 3) * -0x49249249;
        uVar30 = iVar35 + 1;
        pdVar20 = pdVar24;
        pdVar19 = pdVar24;
        pdVar26 = pdVar23;
        if (iVar29 != 0) {
LAB_14749787b:
          if (8 < (int)uVar30) {
            uVar25 = (ulonglong)(uVar30 >> 1);
            dVar5 = pdVar20[uVar25 * 7 + 6];
            dVar6 = pdVar20[uVar25 * 7];
            dVar7 = (pdVar20 + uVar25 * 7)[1];
            dVar8 = pdVar20[uVar25 * 7 + 2];
            dVar9 = (pdVar20 + uVar25 * 7 + 2)[1];
            dVar10 = pdVar20[uVar25 * 7 + 4];
            dVar11 = (pdVar20 + uVar25 * 7 + 4)[1];
            pdVar20[uVar25 * 7 + 6] = pdVar20[6];
            dVar12 = *pdVar20;
            dVar13 = pdVar20[1];
            dVar14 = pdVar20[2];
            dVar15 = pdVar20[3];
            dVar16 = pdVar20[5];
            pdVar20[uVar25 * 7 + 4] = pdVar20[4];
            (pdVar20 + uVar25 * 7 + 4)[1] = dVar16;
            pdVar20[uVar25 * 7 + 2] = dVar14;
            (pdVar20 + uVar25 * 7 + 2)[1] = dVar15;
            pdVar20[uVar25 * 7] = dVar12;
            (pdVar20 + uVar25 * 7)[1] = dVar13;
            pdVar20[6] = dVar5;
            pdVar20[4] = dVar10;
            pdVar20[5] = dVar11;
            pdVar20[2] = dVar8;
            pdVar20[3] = dVar9;
            *pdVar20 = dVar6;
            pdVar20[1] = dVar7;
            pdVar32 = pdVar26 + 7;
            pdVar19 = pdVar20;
            do {
              pdVar17 = pdVar19 + 7;
              pdVar27 = pdVar19 + 7;
              do {
                pdVar19 = pdVar27;
                pdVar34 = pdVar17;
                if (pdVar26 < pdVar19) break;
                pdVar17 = pdVar34 + 7;
                pdVar27 = pdVar19 + 7;
              } while ((float)((dVar4 - pdVar19[2]) * (dVar4 - pdVar19[2]) +
                              (dVar3 - pdVar19[1]) * (dVar3 - pdVar19[1]) +
                              (dVar2 - *pdVar19) * (dVar2 - *pdVar19)) <=
                       (float)((dVar4 - pdVar20[2]) * (dVar4 - pdVar20[2]) +
                              (dVar3 - pdVar20[1]) * (dVar3 - pdVar20[1]) +
                              (dVar2 - *pdVar20) * (dVar2 - *pdVar20)));
              pdVar17 = pdVar32 + -0xe;
              do {
                pdVar27 = pdVar32;
                pdVar33 = pdVar17;
                pdVar32 = pdVar27 + -7;
                if (pdVar32 <= pdVar20) break;
                pdVar17 = pdVar33 + -7;
              } while ((float)((dVar4 - pdVar20[2]) * (dVar4 - pdVar20[2]) +
                              (dVar3 - pdVar20[1]) * (dVar3 - pdVar20[1]) +
                              (dVar2 - *pdVar20) * (dVar2 - *pdVar20)) <=
                       (float)((dVar4 - pdVar27[-5]) * (dVar4 - pdVar27[-5]) +
                              (dVar3 - pdVar27[-6]) * (dVar3 - pdVar27[-6]) +
                              (dVar2 - *pdVar32) * (dVar2 - *pdVar32)));
              if (pdVar32 < pdVar19) goto LAB_147497ad9;
              dVar5 = pdVar19[6];
              dVar6 = *pdVar19;
              dVar7 = pdVar19[1];
              dVar8 = pdVar19[2];
              dVar9 = pdVar19[3];
              dVar10 = pdVar19[4];
              dVar11 = pdVar19[5];
              pdVar19[6] = pdVar27[-1];
              dVar12 = *pdVar32;
              dVar13 = pdVar27[-6];
              dVar14 = pdVar27[-5];
              dVar15 = pdVar27[-4];
              dVar16 = pdVar27[-2];
              pdVar19[4] = pdVar27[-3];
              pdVar19[5] = dVar16;
              pdVar19[2] = dVar14;
              pdVar19[3] = dVar15;
              *pdVar19 = dVar12;
              pdVar19[1] = dVar13;
              pdVar27[-1] = dVar5;
              pdVar27[-3] = dVar10;
              pdVar27[-2] = dVar11;
              pdVar27[-5] = dVar8;
              pdVar27[-4] = dVar9;
              *pdVar32 = dVar6;
              pdVar27[-6] = dVar7;
            } while( true );
          }
          if (pdVar20 < pdVar26) {
            do {
              pdVar24 = pdVar20;
              if (pdVar20 + 7 <= pdVar26) {
                uVar38 = SUB84(*pdVar20,0);
                uVar39 = (undefined4)((ulonglong)*pdVar20 >> 0x20);
                pdVar23 = pdVar20 + 7;
                do {
                  dVar6 = dVar2 - (double)CONCAT44(uVar39,uVar38);
                  dVar5 = *pdVar23;
                  if ((float)((dVar4 - pdVar24[2]) * (dVar4 - pdVar24[2]) +
                             (dVar3 - pdVar24[1]) * (dVar3 - pdVar24[1]) + dVar6 * dVar6) <
                      (float)((dVar4 - pdVar23[2]) * (dVar4 - pdVar23[2]) +
                             (dVar3 - pdVar23[1]) * (dVar3 - pdVar23[1]) +
                             (dVar2 - dVar5) * (dVar2 - dVar5))) {
                    pdVar24 = pdVar23;
                    uVar38 = SUB84(dVar5,0);
                    uVar39 = (int)((ulonglong)dVar5 >> 0x20);
                  }
                  pdVar23 = pdVar23 + 7;
                } while (pdVar23 <= pdVar26);
              }
              local_78 = pdVar24[6];
              local_a8 = *pdVar24;
              uStack_a0 = pdVar24[1];
              local_98 = pdVar24[2];
              dStack_90 = pdVar24[3];
              local_88 = pdVar24[4];
              dStack_80 = pdVar24[5];
              dVar10 = local_a8;
              dVar11 = uStack_a0;
              pdVar24[6] = pdVar26[6];
              dVar5 = *pdVar26;
              dVar6 = pdVar26[1];
              dVar7 = pdVar26[2];
              dVar8 = pdVar26[3];
              dVar9 = pdVar26[5];
              pdVar24[4] = pdVar26[4];
              pdVar24[5] = dVar9;
              pdVar24[2] = dVar7;
              pdVar24[3] = dVar8;
              *pdVar24 = dVar5;
              pdVar24[1] = dVar6;
              pdVar26[6] = local_78;
              local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
              uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
              pdVar26[4] = local_88;
              pdVar26[5] = dStack_80;
              pdVar26[2] = local_98;
              pdVar26[3] = dStack_90;
              *(undefined4 *)pdVar26 = (undefined4)local_a8;
              *(undefined4 *)((longlong)pdVar26 + 4) = local_a8._4_4_;
              *(undefined4 *)(pdVar26 + 1) = (undefined4)uStack_a0;
              *(undefined4 *)((longlong)pdVar26 + 0xc) = uStack_a0._4_4_;
              pdVar26 = pdVar26 + -7;
              local_a8 = dVar10;
              uStack_a0 = dVar11;
            } while (pdVar20 < pdVar26);
          }
          goto LAB_147498266;
        }
LAB_147497bf4:
        if (uVar30 != 0) {
          iVar29 = (iVar35 - (iVar35 + -1 >> 0x1f)) + -1 >> 1;
          iVar35 = iVar29;
joined_r0x000147497c1b:
          do {
            iVar31 = iVar29 * 2 + 1;
            if (iVar31 < (int)uVar30) {
              iVar22 = iVar29 * 2 + 2;
              if (iVar22 < (int)uVar30) {
                lVar28 = (longlong)iVar22;
                lVar21 = (longlong)iVar31;
                if ((float)((dVar4 - pdVar19[lVar21 * 7 + 2]) * (dVar4 - pdVar19[lVar21 * 7 + 2]) +
                           (dVar3 - pdVar19[lVar21 * 7 + 1]) * (dVar3 - pdVar19[lVar21 * 7 + 1]) +
                           (dVar2 - pdVar19[lVar21 * 7]) * (dVar2 - pdVar19[lVar21 * 7])) <=
                    (float)((dVar4 - pdVar19[lVar28 * 7 + 2]) * (dVar4 - pdVar19[lVar28 * 7 + 2]) +
                           (dVar3 - pdVar19[lVar28 * 7 + 1]) * (dVar3 - pdVar19[lVar28 * 7 + 1]) +
                           (dVar2 - pdVar19[lVar28 * 7]) * (dVar2 - pdVar19[lVar28 * 7]))) {
                  iVar31 = iVar22;
                }
              }
              lVar28 = (longlong)iVar29;
              lVar21 = (longlong)iVar31;
              if ((float)((dVar4 - pdVar19[lVar28 * 7 + 2]) * (dVar4 - pdVar19[lVar28 * 7 + 2]) +
                         (dVar3 - pdVar19[lVar28 * 7 + 1]) * (dVar3 - pdVar19[lVar28 * 7 + 1]) +
                         (dVar2 - pdVar19[lVar28 * 7]) * (dVar2 - pdVar19[lVar28 * 7])) <
                  (float)((dVar4 - pdVar19[lVar21 * 7 + 2]) * (dVar4 - pdVar19[lVar21 * 7 + 2]) +
                         (dVar3 - pdVar19[lVar21 * 7 + 1]) * (dVar3 - pdVar19[lVar21 * 7 + 1]) +
                         (dVar2 - pdVar19[lVar21 * 7]) * (dVar2 - pdVar19[lVar21 * 7]))) {
                pdVar24 = pdVar19 + lVar28 * 7;
                pdVar26 = pdVar19 + lVar21 * 7;
                local_78 = pdVar24[6];
                local_a8 = *pdVar24;
                uStack_a0 = pdVar24[1];
                local_98 = pdVar24[2];
                dStack_90 = pdVar24[3];
                local_88 = pdVar24[4];
                dStack_80 = pdVar24[5];
                dVar10 = local_a8;
                dVar11 = uStack_a0;
                pdVar24[6] = pdVar26[6];
                dVar5 = *pdVar26;
                dVar6 = pdVar26[1];
                dVar7 = pdVar26[2];
                dVar8 = pdVar26[3];
                dVar9 = pdVar26[5];
                pdVar24[4] = pdVar26[4];
                pdVar24[5] = dVar9;
                pdVar24[2] = dVar7;
                pdVar24[3] = dVar8;
                *pdVar24 = dVar5;
                pdVar24[1] = dVar6;
                pdVar26[6] = local_78;
                local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
                uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
                pdVar26[4] = local_88;
                pdVar26[5] = dStack_80;
                pdVar26[2] = local_98;
                pdVar26[3] = dStack_90;
                *(undefined4 *)pdVar26 = (undefined4)local_a8;
                *(undefined4 *)((longlong)pdVar26 + 4) = local_a8._4_4_;
                *(undefined4 *)(pdVar26 + 1) = (undefined4)uStack_a0;
                *(undefined4 *)((longlong)pdVar26 + 0xc) = uStack_a0._4_4_;
                local_a8 = dVar10;
                uStack_a0 = dVar11;
                iVar29 = iVar31;
                goto joined_r0x000147497c1b;
              }
            }
            bVar36 = iVar35 != 0;
            iVar29 = iVar35 + -1;
            iVar35 = iVar29;
          } while (bVar36);
          if (1 < (int)uVar30) {
            uVar25 = (ulonglong)uVar30 - 1;
            local_78 = pdVar19[6];
            local_a8 = *pdVar19;
            uStack_a0 = pdVar19[1];
            local_98 = pdVar19[2];
            dStack_90 = pdVar19[3];
            local_88 = pdVar19[4];
            dStack_80 = pdVar19[5];
            dVar10 = local_a8;
            dVar11 = uStack_a0;
            pdVar19[6] = pdVar19[uVar25 * 7 + 6];
            dVar5 = pdVar19[uVar25 * 7];
            dVar6 = (pdVar19 + uVar25 * 7)[1];
            dVar7 = pdVar19[uVar25 * 7 + 2];
            dVar8 = (pdVar19 + uVar25 * 7 + 2)[1];
            dVar9 = (pdVar19 + uVar25 * 7 + 4)[1];
            pdVar19[4] = pdVar19[uVar25 * 7 + 4];
            pdVar19[5] = dVar9;
            pdVar19[2] = dVar7;
            pdVar19[3] = dVar8;
            *pdVar19 = dVar5;
            pdVar19[1] = dVar6;
            pdVar19[uVar25 * 7 + 6] = local_78;
            local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
            uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
            pdVar19[uVar25 * 7 + 4] = local_88;
            (pdVar19 + uVar25 * 7 + 4)[1] = dStack_80;
            pdVar19[uVar25 * 7 + 2] = local_98;
            (pdVar19 + uVar25 * 7 + 2)[1] = dStack_90;
            pdVar26 = pdVar19 + uVar25 * 7;
            *(undefined4 *)pdVar26 = (undefined4)local_a8;
            *(undefined4 *)((longlong)pdVar26 + 4) = local_a8._4_4_;
            *(undefined4 *)(pdVar26 + 1) = (undefined4)uStack_a0;
            *(undefined4 *)((longlong)pdVar26 + 0xc) = uStack_a0._4_4_;
            local_a8 = dVar10;
            uStack_a0 = dVar11;
            if (uVar30 != 2) {
              do {
                iVar29 = 0;
                iVar31 = 1;
                iVar35 = 0;
                do {
                  lVar21 = (longlong)(iVar29 + 2);
                  iVar22 = iVar31;
                  if ((lVar21 < (longlong)uVar25) &&
                     (lVar28 = (longlong)iVar31,
                     (float)((dVar4 - pdVar19[lVar28 * 7 + 2]) * (dVar4 - pdVar19[lVar28 * 7 + 2]) +
                            (dVar3 - pdVar19[lVar28 * 7 + 1]) * (dVar3 - pdVar19[lVar28 * 7 + 1]) +
                            (dVar2 - pdVar19[lVar28 * 7]) * (dVar2 - pdVar19[lVar28 * 7])) <=
                     (float)((dVar4 - pdVar19[lVar21 * 7 + 2]) * (dVar4 - pdVar19[lVar21 * 7 + 2]) +
                            (dVar3 - pdVar19[lVar21 * 7 + 1]) * (dVar3 - pdVar19[lVar21 * 7 + 1]) +
                            (dVar2 - pdVar19[lVar21 * 7]) * (dVar2 - pdVar19[lVar21 * 7])))) {
                    iVar22 = iVar29 + 2;
                  }
                  lVar21 = (longlong)iVar35;
                  lVar28 = (longlong)iVar22;
                  if ((float)((dVar4 - pdVar19[lVar28 * 7 + 2]) * (dVar4 - pdVar19[lVar28 * 7 + 2])
                             + (dVar3 - pdVar19[lVar28 * 7 + 1]) * (dVar3 - pdVar19[lVar28 * 7 + 1])
                               + (dVar2 - pdVar19[lVar28 * 7]) * (dVar2 - pdVar19[lVar28 * 7])) <=
                      (float)((dVar4 - pdVar19[lVar21 * 7 + 2]) * (dVar4 - pdVar19[lVar21 * 7 + 2])
                             + (dVar3 - pdVar19[lVar21 * 7 + 1]) * (dVar3 - pdVar19[lVar21 * 7 + 1])
                               + (dVar2 - pdVar19[lVar21 * 7]) * (dVar2 - pdVar19[lVar21 * 7])))
                  break;
                  pdVar26 = pdVar19 + lVar21 * 7;
                  pdVar24 = pdVar19 + lVar28 * 7;
                  dVar5 = pdVar26[6];
                  dVar6 = *pdVar26;
                  dVar7 = pdVar26[1];
                  dVar8 = pdVar26[2];
                  dVar9 = pdVar26[3];
                  dVar10 = pdVar26[4];
                  dVar11 = pdVar26[5];
                  pdVar26[6] = pdVar24[6];
                  dVar12 = *pdVar24;
                  dVar13 = pdVar24[1];
                  dVar14 = pdVar24[2];
                  dVar15 = pdVar24[3];
                  dVar16 = pdVar24[5];
                  pdVar26[4] = pdVar24[4];
                  pdVar26[5] = dVar16;
                  pdVar26[2] = dVar14;
                  pdVar26[3] = dVar15;
                  *pdVar26 = dVar12;
                  pdVar26[1] = dVar13;
                  pdVar24[6] = dVar5;
                  pdVar24[4] = dVar10;
                  pdVar24[5] = dVar11;
                  pdVar24[2] = dVar8;
                  pdVar24[3] = dVar9;
                  *pdVar24 = dVar6;
                  pdVar24[1] = dVar7;
                  iVar29 = iVar22 * 2;
                  iVar31 = iVar22 * 2 + 1;
                  iVar35 = iVar22;
                } while ((longlong)iVar31 < (longlong)uVar25);
                uVar1 = uVar25 - 1;
                local_78 = pdVar19[6];
                local_a8 = *pdVar19;
                uStack_a0 = pdVar19[1];
                local_98 = pdVar19[2];
                dStack_90 = pdVar19[3];
                local_88 = pdVar19[4];
                dStack_80 = pdVar19[5];
                dVar10 = local_a8;
                dVar11 = uStack_a0;
                pdVar19[6] = pdVar19[uVar1 * 7 + 6];
                dVar5 = pdVar19[uVar1 * 7];
                dVar6 = (pdVar19 + uVar1 * 7)[1];
                dVar7 = pdVar19[uVar1 * 7 + 2];
                dVar8 = (pdVar19 + uVar1 * 7 + 2)[1];
                dVar9 = (pdVar19 + uVar1 * 7 + 4)[1];
                pdVar19[4] = pdVar19[uVar1 * 7 + 4];
                pdVar19[5] = dVar9;
                pdVar19[2] = dVar7;
                pdVar19[3] = dVar8;
                *pdVar19 = dVar5;
                pdVar19[1] = dVar6;
                pdVar19[uVar1 * 7 + 6] = local_78;
                local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
                uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
                pdVar19[uVar1 * 7 + 4] = local_88;
                (pdVar19 + uVar1 * 7 + 4)[1] = dStack_80;
                pdVar19[uVar1 * 7 + 2] = local_98;
                (pdVar19 + uVar1 * 7 + 2)[1] = dStack_90;
                pdVar26 = pdVar19 + uVar1 * 7;
                *(undefined4 *)pdVar26 = (undefined4)local_a8;
                *(undefined4 *)((longlong)pdVar26 + 4) = local_a8._4_4_;
                *(undefined4 *)(pdVar26 + 1) = (undefined4)uStack_a0;
                *(undefined4 *)((longlong)pdVar26 + 0xc) = uStack_a0._4_4_;
                bVar36 = 2 < uVar25;
                uVar25 = uVar1;
                local_a8 = dVar10;
                uStack_a0 = dVar11;
              } while (bVar36);
            }
          }
        }
LAB_147498266:
        plVar18 = plVar18 + -3;
      } while (&local_3a8 <= plVar18);
    }
  }
  else if (param_3 == '\x02') {
    iVar29 = (int)param_2[1];
    if (1 < (longlong)iVar29) {
      lVar21 = *param_2;
      memset(local_398,0,0x2f0);
      local_3a0 = (longlong)iVar29 * 0x38 + lVar21 + -0x38;
      local_3a8 = lVar21;
      fVar37 = logf((float)iVar29);
      local_398[0] = (int)(longlong)(fVar37 + fVar37);
      plVar18 = &local_3a8;
      do {
        pdVar24 = (double *)*plVar18;
        pdVar23 = (double *)plVar18[1];
        iVar29 = (int)plVar18[2];
        iVar35 = (int)((ulonglong)((longlong)pdVar23 - (longlong)pdVar24) >> 3) * -0x49249249;
        uVar30 = iVar35 + 1;
        pdVar20 = pdVar24;
        pdVar19 = pdVar24;
        pdVar26 = pdVar23;
        if (iVar29 != 0) {
LAB_147496e7a:
          if (8 < (int)uVar30) {
            uVar25 = (ulonglong)(uVar30 >> 1);
            dVar4 = pdVar20[uVar25 * 7 + 6];
            dVar2 = pdVar20[uVar25 * 7];
            dVar3 = (pdVar20 + uVar25 * 7)[1];
            dVar5 = pdVar20[uVar25 * 7 + 2];
            dVar6 = (pdVar20 + uVar25 * 7 + 2)[1];
            dVar7 = pdVar20[uVar25 * 7 + 4];
            dVar8 = (pdVar20 + uVar25 * 7 + 4)[1];
            pdVar20[uVar25 * 7 + 6] = pdVar20[6];
            dVar9 = *pdVar20;
            dVar10 = pdVar20[1];
            dVar11 = pdVar20[2];
            dVar12 = pdVar20[3];
            dVar13 = pdVar20[5];
            pdVar20[uVar25 * 7 + 4] = pdVar20[4];
            (pdVar20 + uVar25 * 7 + 4)[1] = dVar13;
            pdVar20[uVar25 * 7 + 2] = dVar11;
            (pdVar20 + uVar25 * 7 + 2)[1] = dVar12;
            pdVar20[uVar25 * 7] = dVar9;
            (pdVar20 + uVar25 * 7)[1] = dVar10;
            pdVar20[6] = dVar4;
            pdVar20[4] = dVar7;
            pdVar20[5] = dVar8;
            pdVar20[2] = dVar5;
            pdVar20[3] = dVar6;
            *pdVar20 = dVar2;
            pdVar20[1] = dVar3;
            pdVar32 = pdVar26 + 7;
            pdVar19 = pdVar20;
            do {
              pdVar17 = pdVar19 + 7;
              pdVar27 = pdVar19 + 7;
              do {
                pdVar19 = pdVar27;
                pdVar34 = pdVar17;
                if (pdVar26 < pdVar19) break;
                pdVar17 = pdVar34 + 7;
                pdVar27 = pdVar19 + 7;
              } while (SQRT(pdVar20[5] * pdVar20[5] +
                            pdVar20[3] * pdVar20[3] + pdVar20[4] * pdVar20[4]) <=
                       SQRT(pdVar19[5] * pdVar19[5] +
                            pdVar19[3] * pdVar19[3] + pdVar19[4] * pdVar19[4]));
              pdVar17 = pdVar32 + -0xe;
              do {
                pdVar27 = pdVar32;
                pdVar33 = pdVar17;
                pdVar32 = pdVar27 + -7;
                if (pdVar32 <= pdVar20) break;
                pdVar17 = pdVar33 + -7;
              } while (SQRT(pdVar27[-2] * pdVar27[-2] +
                            pdVar27[-4] * pdVar27[-4] + pdVar27[-3] * pdVar27[-3]) <=
                       SQRT(pdVar20[5] * pdVar20[5] +
                            pdVar20[3] * pdVar20[3] + pdVar20[4] * pdVar20[4]));
              if (pdVar32 < pdVar19) goto LAB_1474970b4;
              dVar4 = pdVar19[6];
              dVar2 = *pdVar19;
              dVar3 = pdVar19[1];
              dVar5 = pdVar19[2];
              dVar6 = pdVar19[3];
              dVar7 = pdVar19[4];
              dVar8 = pdVar19[5];
              pdVar19[6] = pdVar27[-1];
              dVar9 = *pdVar32;
              dVar10 = pdVar27[-6];
              dVar11 = pdVar27[-5];
              dVar12 = pdVar27[-4];
              dVar13 = pdVar27[-2];
              pdVar19[4] = pdVar27[-3];
              pdVar19[5] = dVar13;
              pdVar19[2] = dVar11;
              pdVar19[3] = dVar12;
              *pdVar19 = dVar9;
              pdVar19[1] = dVar10;
              pdVar27[-1] = dVar4;
              pdVar27[-3] = dVar7;
              pdVar27[-2] = dVar8;
              pdVar27[-5] = dVar5;
              pdVar27[-4] = dVar6;
              *pdVar32 = dVar2;
              pdVar27[-6] = dVar3;
            } while( true );
          }
          for (; pdVar23 = pdVar20, pdVar24 = pdVar20, pdVar20 < pdVar26; pdVar26 = pdVar26 + -7) {
            while (pdVar19 = pdVar23, pdVar24 = pdVar24 + 7, pdVar24 <= pdVar26) {
              pdVar23 = pdVar24;
              if (SQRT(pdVar19[5] * pdVar19[5] + pdVar19[3] * pdVar19[3] + pdVar19[4] * pdVar19[4])
                  <= SQRT(pdVar24[5] * pdVar24[5] +
                          pdVar24[3] * pdVar24[3] + pdVar24[4] * pdVar24[4])) {
                pdVar23 = pdVar19;
              }
            }
            local_78 = pdVar19[6];
            local_a8 = *pdVar19;
            uStack_a0 = pdVar19[1];
            local_98 = pdVar19[2];
            dStack_90 = pdVar19[3];
            local_88 = pdVar19[4];
            dStack_80 = pdVar19[5];
            dVar7 = local_a8;
            dVar8 = uStack_a0;
            pdVar19[6] = pdVar26[6];
            dVar4 = *pdVar26;
            dVar2 = pdVar26[1];
            dVar3 = pdVar26[2];
            dVar5 = pdVar26[3];
            dVar6 = pdVar26[5];
            pdVar19[4] = pdVar26[4];
            pdVar19[5] = dVar6;
            pdVar19[2] = dVar3;
            pdVar19[3] = dVar5;
            *pdVar19 = dVar4;
            pdVar19[1] = dVar2;
            pdVar26[6] = local_78;
            local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
            uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
            pdVar26[4] = local_88;
            pdVar26[5] = dStack_80;
            pdVar26[2] = local_98;
            pdVar26[3] = dStack_90;
            *(undefined4 *)pdVar26 = (undefined4)local_a8;
            *(undefined4 *)((longlong)pdVar26 + 4) = local_a8._4_4_;
            *(undefined4 *)(pdVar26 + 1) = (undefined4)uStack_a0;
            *(undefined4 *)((longlong)pdVar26 + 0xc) = uStack_a0._4_4_;
            local_a8 = dVar7;
            uStack_a0 = dVar8;
          }
          goto LAB_1474977d2;
        }
LAB_1474971d1:
        if (uVar30 != 0) {
          iVar29 = (iVar35 - (iVar35 + -1 >> 0x1f)) + -1 >> 1;
          iVar35 = iVar29;
joined_r0x0001474971f8:
          do {
            iVar31 = iVar29 * 2 + 1;
            if (iVar31 < (int)uVar30) {
              iVar22 = iVar29 * 2 + 2;
              if (iVar22 < (int)uVar30) {
                lVar28 = (longlong)iVar22;
                lVar21 = (longlong)iVar31;
                if (SQRT(pdVar19[lVar28 * 7 + 5] * pdVar19[lVar28 * 7 + 5] +
                         pdVar19[lVar28 * 7 + 3] * pdVar19[lVar28 * 7 + 3] +
                         pdVar19[lVar28 * 7 + 4] * pdVar19[lVar28 * 7 + 4]) <=
                    SQRT(pdVar19[lVar21 * 7 + 5] * pdVar19[lVar21 * 7 + 5] +
                         pdVar19[lVar21 * 7 + 3] * pdVar19[lVar21 * 7 + 3] +
                         pdVar19[lVar21 * 7 + 4] * pdVar19[lVar21 * 7 + 4])) {
                  iVar31 = iVar22;
                }
              }
              lVar21 = (longlong)iVar29;
              lVar28 = (longlong)iVar31;
              if (SQRT(pdVar19[lVar28 * 7 + 5] * pdVar19[lVar28 * 7 + 5] +
                       pdVar19[lVar28 * 7 + 3] * pdVar19[lVar28 * 7 + 3] +
                       pdVar19[lVar28 * 7 + 4] * pdVar19[lVar28 * 7 + 4]) <
                  SQRT(pdVar19[lVar21 * 7 + 5] * pdVar19[lVar21 * 7 + 5] +
                       pdVar19[lVar21 * 7 + 3] * pdVar19[lVar21 * 7 + 3] +
                       pdVar19[lVar21 * 7 + 4] * pdVar19[lVar21 * 7 + 4])) {
                pdVar26 = pdVar19 + lVar21 * 7;
                pdVar24 = pdVar19 + lVar28 * 7;
                local_78 = pdVar26[6];
                local_a8 = *pdVar26;
                uStack_a0 = pdVar26[1];
                local_98 = pdVar26[2];
                dStack_90 = pdVar26[3];
                local_88 = pdVar26[4];
                dStack_80 = pdVar26[5];
                dVar7 = local_a8;
                dVar8 = uStack_a0;
                pdVar26[6] = pdVar24[6];
                dVar4 = *pdVar24;
                dVar2 = pdVar24[1];
                dVar3 = pdVar24[2];
                dVar5 = pdVar24[3];
                dVar6 = pdVar24[5];
                pdVar26[4] = pdVar24[4];
                pdVar26[5] = dVar6;
                pdVar26[2] = dVar3;
                pdVar26[3] = dVar5;
                *pdVar26 = dVar4;
                pdVar26[1] = dVar2;
                pdVar24[6] = local_78;
                local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
                uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
                pdVar24[4] = local_88;
                pdVar24[5] = dStack_80;
                pdVar24[2] = local_98;
                pdVar24[3] = dStack_90;
                *(undefined4 *)pdVar24 = (undefined4)local_a8;
                *(undefined4 *)((longlong)pdVar24 + 4) = local_a8._4_4_;
                *(undefined4 *)(pdVar24 + 1) = (undefined4)uStack_a0;
                *(undefined4 *)((longlong)pdVar24 + 0xc) = uStack_a0._4_4_;
                local_a8 = dVar7;
                uStack_a0 = dVar8;
                iVar29 = iVar31;
                goto joined_r0x0001474971f8;
              }
            }
            bVar36 = iVar35 != 0;
            iVar29 = iVar35 + -1;
            iVar35 = iVar29;
          } while (bVar36);
          if (1 < (int)uVar30) {
            uVar25 = (ulonglong)uVar30 - 1;
            local_78 = pdVar19[6];
            local_a8 = *pdVar19;
            uStack_a0 = pdVar19[1];
            local_98 = pdVar19[2];
            dStack_90 = pdVar19[3];
            local_88 = pdVar19[4];
            dStack_80 = pdVar19[5];
            dVar7 = local_a8;
            dVar8 = uStack_a0;
            pdVar19[6] = pdVar19[uVar25 * 7 + 6];
            dVar4 = pdVar19[uVar25 * 7];
            dVar2 = (pdVar19 + uVar25 * 7)[1];
            dVar3 = pdVar19[uVar25 * 7 + 2];
            dVar5 = (pdVar19 + uVar25 * 7 + 2)[1];
            dVar6 = (pdVar19 + uVar25 * 7 + 4)[1];
            pdVar19[4] = pdVar19[uVar25 * 7 + 4];
            pdVar19[5] = dVar6;
            pdVar19[2] = dVar3;
            pdVar19[3] = dVar5;
            *pdVar19 = dVar4;
            pdVar19[1] = dVar2;
            pdVar19[uVar25 * 7 + 6] = local_78;
            local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
            uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
            pdVar19[uVar25 * 7 + 4] = local_88;
            (pdVar19 + uVar25 * 7 + 4)[1] = dStack_80;
            pdVar19[uVar25 * 7 + 2] = local_98;
            (pdVar19 + uVar25 * 7 + 2)[1] = dStack_90;
            pdVar26 = pdVar19 + uVar25 * 7;
            *(undefined4 *)pdVar26 = (undefined4)local_a8;
            *(undefined4 *)((longlong)pdVar26 + 4) = local_a8._4_4_;
            *(undefined4 *)(pdVar26 + 1) = (undefined4)uStack_a0;
            *(undefined4 *)((longlong)pdVar26 + 0xc) = uStack_a0._4_4_;
            local_a8 = dVar7;
            uStack_a0 = dVar8;
            if (uVar30 != 2) {
              do {
                iVar29 = 0;
                iVar31 = 1;
                iVar35 = 0;
                do {
                  lVar21 = (longlong)(iVar29 + 2);
                  iVar22 = iVar31;
                  if ((lVar21 < (longlong)uVar25) &&
                     (lVar28 = (longlong)iVar31,
                     SQRT(pdVar19[lVar21 * 7 + 5] * pdVar19[lVar21 * 7 + 5] +
                          pdVar19[lVar21 * 7 + 3] * pdVar19[lVar21 * 7 + 3] +
                          pdVar19[lVar21 * 7 + 4] * pdVar19[lVar21 * 7 + 4]) <=
                     SQRT(pdVar19[lVar28 * 7 + 5] * pdVar19[lVar28 * 7 + 5] +
                          pdVar19[lVar28 * 7 + 3] * pdVar19[lVar28 * 7 + 3] +
                          pdVar19[lVar28 * 7 + 4] * pdVar19[lVar28 * 7 + 4]))) {
                    iVar22 = iVar29 + 2;
                  }
                  lVar21 = (longlong)iVar35;
                  lVar28 = (longlong)iVar22;
                  if (SQRT(pdVar19[lVar21 * 7 + 5] * pdVar19[lVar21 * 7 + 5] +
                           pdVar19[lVar21 * 7 + 3] * pdVar19[lVar21 * 7 + 3] +
                           pdVar19[lVar21 * 7 + 4] * pdVar19[lVar21 * 7 + 4]) <=
                      SQRT(pdVar19[lVar28 * 7 + 5] * pdVar19[lVar28 * 7 + 5] +
                           pdVar19[lVar28 * 7 + 3] * pdVar19[lVar28 * 7 + 3] +
                           pdVar19[lVar28 * 7 + 4] * pdVar19[lVar28 * 7 + 4])) break;
                  pdVar24 = pdVar19 + lVar21 * 7;
                  pdVar26 = pdVar19 + lVar28 * 7;
                  dVar4 = pdVar24[6];
                  dVar2 = *pdVar24;
                  dVar3 = pdVar24[1];
                  dVar5 = pdVar24[2];
                  dVar6 = pdVar24[3];
                  dVar7 = pdVar24[4];
                  dVar8 = pdVar24[5];
                  pdVar24[6] = pdVar26[6];
                  dVar9 = *pdVar26;
                  dVar10 = pdVar26[1];
                  dVar11 = pdVar26[2];
                  dVar12 = pdVar26[3];
                  dVar13 = pdVar26[5];
                  pdVar24[4] = pdVar26[4];
                  pdVar24[5] = dVar13;
                  pdVar24[2] = dVar11;
                  pdVar24[3] = dVar12;
                  *pdVar24 = dVar9;
                  pdVar24[1] = dVar10;
                  pdVar26[6] = dVar4;
                  pdVar26[4] = dVar7;
                  pdVar26[5] = dVar8;
                  pdVar26[2] = dVar5;
                  pdVar26[3] = dVar6;
                  *pdVar26 = dVar2;
                  pdVar26[1] = dVar3;
                  iVar29 = iVar22 * 2;
                  iVar31 = iVar22 * 2 + 1;
                  iVar35 = iVar22;
                } while ((longlong)iVar31 < (longlong)uVar25);
                uVar1 = uVar25 - 1;
                local_78 = pdVar19[6];
                local_a8 = *pdVar19;
                uStack_a0 = pdVar19[1];
                local_98 = pdVar19[2];
                dStack_90 = pdVar19[3];
                local_88 = pdVar19[4];
                dStack_80 = pdVar19[5];
                dVar7 = local_a8;
                dVar8 = uStack_a0;
                pdVar19[6] = pdVar19[uVar1 * 7 + 6];
                dVar4 = pdVar19[uVar1 * 7];
                dVar2 = (pdVar19 + uVar1 * 7)[1];
                dVar3 = pdVar19[uVar1 * 7 + 2];
                dVar5 = (pdVar19 + uVar1 * 7 + 2)[1];
                dVar6 = (pdVar19 + uVar1 * 7 + 4)[1];
                pdVar19[4] = pdVar19[uVar1 * 7 + 4];
                pdVar19[5] = dVar6;
                pdVar19[2] = dVar3;
                pdVar19[3] = dVar5;
                *pdVar19 = dVar4;
                pdVar19[1] = dVar2;
                pdVar19[uVar1 * 7 + 6] = local_78;
                local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
                uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
                pdVar19[uVar1 * 7 + 4] = local_88;
                (pdVar19 + uVar1 * 7 + 4)[1] = dStack_80;
                pdVar19[uVar1 * 7 + 2] = local_98;
                (pdVar19 + uVar1 * 7 + 2)[1] = dStack_90;
                pdVar26 = pdVar19 + uVar1 * 7;
                *(undefined4 *)pdVar26 = (undefined4)local_a8;
                *(undefined4 *)((longlong)pdVar26 + 4) = local_a8._4_4_;
                *(undefined4 *)(pdVar26 + 1) = (undefined4)uStack_a0;
                *(undefined4 *)((longlong)pdVar26 + 0xc) = uStack_a0._4_4_;
                bVar36 = 2 < uVar25;
                uVar25 = uVar1;
                local_a8 = dVar7;
                uStack_a0 = dVar8;
              } while (bVar36);
            }
          }
        }
LAB_1474977d2:
        plVar18 = plVar18 + -3;
      } while (&local_3a8 <= plVar18);
    }
  }
  else if (param_3 == '\x01') {
    iVar29 = (int)param_2[1];
    if (1 < (longlong)iVar29) {
      lVar21 = *param_2;
      memset(local_398,0,0x2f0);
      local_3a0 = (longlong)iVar29 * 0x38 + lVar21 + -0x38;
      local_3a8 = lVar21;
      fVar37 = logf((float)iVar29);
      local_398[0] = (int)(longlong)(fVar37 + fVar37);
      plVar18 = &local_3a8;
      do {
        pdVar24 = (double *)*plVar18;
        pdVar23 = (double *)plVar18[1];
        iVar29 = (int)plVar18[2];
        iVar35 = (int)((ulonglong)((longlong)pdVar23 - (longlong)pdVar24) >> 3) * -0x49249249;
        uVar30 = iVar35 + 1;
        pdVar20 = pdVar24;
        pdVar19 = pdVar24;
        pdVar26 = pdVar23;
        if (iVar29 != 0) {
LAB_1474966d7:
          if (8 < (int)uVar30) {
            uVar25 = (ulonglong)(uVar30 >> 1);
            dVar4 = pdVar20[uVar25 * 7 + 6];
            dVar2 = pdVar20[uVar25 * 7];
            dVar3 = (pdVar20 + uVar25 * 7)[1];
            dVar5 = pdVar20[uVar25 * 7 + 2];
            dVar6 = (pdVar20 + uVar25 * 7 + 2)[1];
            dVar7 = pdVar20[uVar25 * 7 + 4];
            dVar8 = (pdVar20 + uVar25 * 7 + 4)[1];
            pdVar20[uVar25 * 7 + 6] = pdVar20[6];
            dVar9 = *pdVar20;
            dVar10 = pdVar20[1];
            dVar11 = pdVar20[2];
            dVar12 = pdVar20[3];
            dVar13 = pdVar20[5];
            pdVar20[uVar25 * 7 + 4] = pdVar20[4];
            (pdVar20 + uVar25 * 7 + 4)[1] = dVar13;
            pdVar20[uVar25 * 7 + 2] = dVar11;
            (pdVar20 + uVar25 * 7 + 2)[1] = dVar12;
            pdVar20[uVar25 * 7] = dVar9;
            (pdVar20 + uVar25 * 7)[1] = dVar10;
            pdVar20[6] = dVar4;
            pdVar20[4] = dVar7;
            pdVar20[5] = dVar8;
            pdVar20[2] = dVar5;
            pdVar20[3] = dVar6;
            *pdVar20 = dVar2;
            pdVar20[1] = dVar3;
            pdVar32 = pdVar26 + 7;
            pdVar19 = pdVar20;
            do {
              pdVar17 = pdVar19 + 7;
              pdVar27 = pdVar19 + 7;
              do {
                pdVar19 = pdVar27;
                pdVar34 = pdVar17;
                if (pdVar26 < pdVar19) break;
                pdVar17 = pdVar34 + 7;
                pdVar27 = pdVar19 + 7;
              } while (*(float *)(pdVar20 + 6) < *(float *)(pdVar19 + 6) ||
                       *(float *)(pdVar20 + 6) == *(float *)(pdVar19 + 6));
              pdVar17 = pdVar32 + -0xe;
              do {
                pdVar27 = pdVar32;
                pdVar33 = pdVar17;
                pdVar32 = pdVar27 + -7;
                if (pdVar32 <= pdVar20) break;
                pdVar17 = pdVar33 + -7;
              } while (*(float *)(pdVar27 + -1) < *(float *)(pdVar20 + 6) ||
                       *(float *)(pdVar27 + -1) == *(float *)(pdVar20 + 6));
              if (pdVar32 < pdVar19) goto LAB_14749686b;
              dVar4 = pdVar19[6];
              dVar2 = *pdVar19;
              dVar3 = pdVar19[1];
              dVar5 = pdVar19[2];
              dVar6 = pdVar19[3];
              dVar7 = pdVar19[4];
              dVar8 = pdVar19[5];
              pdVar19[6] = pdVar27[-1];
              dVar9 = *pdVar32;
              dVar10 = pdVar27[-6];
              dVar11 = pdVar27[-5];
              dVar12 = pdVar27[-4];
              dVar13 = pdVar27[-2];
              pdVar19[4] = pdVar27[-3];
              pdVar19[5] = dVar13;
              pdVar19[2] = dVar11;
              pdVar19[3] = dVar12;
              *pdVar19 = dVar9;
              pdVar19[1] = dVar10;
              pdVar27[-1] = dVar4;
              pdVar27[-3] = dVar7;
              pdVar27[-2] = dVar8;
              pdVar27[-5] = dVar5;
              pdVar27[-4] = dVar6;
              *pdVar32 = dVar2;
              pdVar27[-6] = dVar3;
            } while( true );
          }
          for (; pdVar23 = pdVar20, pdVar24 = pdVar20, pdVar20 < pdVar26; pdVar26 = pdVar26 + -7) {
            while (pdVar19 = pdVar23, pdVar24 = pdVar24 + 7, pdVar24 <= pdVar26) {
              pdVar23 = pdVar24;
              if (*(float *)(pdVar19 + 6) < *(float *)(pdVar24 + 6) ||
                  *(float *)(pdVar19 + 6) == *(float *)(pdVar24 + 6)) {
                pdVar23 = pdVar19;
              }
            }
            local_78 = pdVar19[6];
            local_a8 = *pdVar19;
            uStack_a0 = pdVar19[1];
            local_98 = pdVar19[2];
            dStack_90 = pdVar19[3];
            local_88 = pdVar19[4];
            dStack_80 = pdVar19[5];
            dVar7 = local_a8;
            dVar8 = uStack_a0;
            pdVar19[6] = pdVar26[6];
            dVar4 = *pdVar26;
            dVar2 = pdVar26[1];
            dVar3 = pdVar26[2];
            dVar5 = pdVar26[3];
            dVar6 = pdVar26[5];
            pdVar19[4] = pdVar26[4];
            pdVar19[5] = dVar6;
            pdVar19[2] = dVar3;
            pdVar19[3] = dVar5;
            *pdVar19 = dVar4;
            pdVar19[1] = dVar2;
            pdVar26[6] = local_78;
            local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
            uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
            pdVar26[4] = local_88;
            pdVar26[5] = dStack_80;
            pdVar26[2] = local_98;
            pdVar26[3] = dStack_90;
            *(undefined4 *)pdVar26 = (undefined4)local_a8;
            *(undefined4 *)((longlong)pdVar26 + 4) = local_a8._4_4_;
            *(undefined4 *)(pdVar26 + 1) = (undefined4)uStack_a0;
            *(undefined4 *)((longlong)pdVar26 + 0xc) = uStack_a0._4_4_;
            local_a8 = dVar7;
            uStack_a0 = dVar8;
          }
          goto LAB_147496de3;
        }
LAB_147496988:
        if (uVar30 != 0) {
          iVar29 = (iVar35 - (iVar35 + -1 >> 0x1f)) + -1 >> 1;
          iVar35 = iVar29;
joined_r0x0001474969af:
          do {
            iVar31 = iVar29 * 2 + 1;
            if (iVar31 < (int)uVar30) {
              iVar22 = iVar29 * 2 + 2;
              if ((iVar22 < (int)uVar30) &&
                 (*(float *)(pdVar19 + (longlong)iVar22 * 7 + 6) <
                  *(float *)(pdVar19 + (longlong)iVar31 * 7 + 6) ||
                  *(float *)(pdVar19 + (longlong)iVar22 * 7 + 6) ==
                  *(float *)(pdVar19 + (longlong)iVar31 * 7 + 6))) {
                iVar31 = iVar22;
              }
              if (*(float *)(pdVar19 + (longlong)iVar31 * 7 + 6) <=
                  *(float *)(pdVar19 + (longlong)iVar29 * 7 + 6) &&
                  *(float *)(pdVar19 + (longlong)iVar29 * 7 + 6) !=
                  *(float *)(pdVar19 + (longlong)iVar31 * 7 + 6)) {
                pdVar26 = pdVar19 + (longlong)iVar29 * 7;
                pdVar24 = pdVar19 + (longlong)iVar31 * 7;
                local_78 = pdVar26[6];
                local_a8 = *pdVar26;
                uStack_a0 = pdVar26[1];
                local_98 = pdVar26[2];
                dStack_90 = pdVar26[3];
                local_88 = pdVar26[4];
                dStack_80 = pdVar26[5];
                dVar7 = local_a8;
                dVar8 = uStack_a0;
                pdVar26[6] = pdVar24[6];
                dVar4 = *pdVar24;
                dVar2 = pdVar24[1];
                dVar3 = pdVar24[2];
                dVar5 = pdVar24[3];
                dVar6 = pdVar24[5];
                pdVar26[4] = pdVar24[4];
                pdVar26[5] = dVar6;
                pdVar26[2] = dVar3;
                pdVar26[3] = dVar5;
                *pdVar26 = dVar4;
                pdVar26[1] = dVar2;
                pdVar24[6] = local_78;
                local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
                uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
                pdVar24[4] = local_88;
                pdVar24[5] = dStack_80;
                pdVar24[2] = local_98;
                pdVar24[3] = dStack_90;
                *(undefined4 *)pdVar24 = (undefined4)local_a8;
                *(undefined4 *)((longlong)pdVar24 + 4) = local_a8._4_4_;
                *(undefined4 *)(pdVar24 + 1) = (undefined4)uStack_a0;
                *(undefined4 *)((longlong)pdVar24 + 0xc) = uStack_a0._4_4_;
                local_a8 = dVar7;
                uStack_a0 = dVar8;
                iVar29 = iVar31;
                goto joined_r0x0001474969af;
              }
            }
            bVar36 = iVar35 != 0;
            iVar29 = iVar35 + -1;
            iVar35 = iVar29;
          } while (bVar36);
          if (1 < (int)uVar30) {
            uVar25 = (ulonglong)uVar30 - 1;
            local_78 = pdVar19[6];
            local_a8 = *pdVar19;
            uStack_a0 = pdVar19[1];
            local_98 = pdVar19[2];
            dStack_90 = pdVar19[3];
            local_88 = pdVar19[4];
            dStack_80 = pdVar19[5];
            dVar7 = local_a8;
            dVar8 = uStack_a0;
            pdVar19[6] = pdVar19[uVar25 * 7 + 6];
            dVar4 = pdVar19[uVar25 * 7];
            dVar2 = (pdVar19 + uVar25 * 7)[1];
            dVar3 = pdVar19[uVar25 * 7 + 2];
            dVar5 = (pdVar19 + uVar25 * 7 + 2)[1];
            dVar6 = (pdVar19 + uVar25 * 7 + 4)[1];
            pdVar19[4] = pdVar19[uVar25 * 7 + 4];
            pdVar19[5] = dVar6;
            pdVar19[2] = dVar3;
            pdVar19[3] = dVar5;
            *pdVar19 = dVar4;
            pdVar19[1] = dVar2;
            pdVar19[uVar25 * 7 + 6] = local_78;
            local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
            uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
            pdVar19[uVar25 * 7 + 4] = local_88;
            (pdVar19 + uVar25 * 7 + 4)[1] = dStack_80;
            pdVar19[uVar25 * 7 + 2] = local_98;
            (pdVar19 + uVar25 * 7 + 2)[1] = dStack_90;
            pdVar26 = pdVar19 + uVar25 * 7;
            *(undefined4 *)pdVar26 = (undefined4)local_a8;
            *(undefined4 *)((longlong)pdVar26 + 4) = local_a8._4_4_;
            *(undefined4 *)(pdVar26 + 1) = (undefined4)uStack_a0;
            *(undefined4 *)((longlong)pdVar26 + 0xc) = uStack_a0._4_4_;
            local_a8 = dVar7;
            uStack_a0 = dVar8;
            if (uVar30 != 2) {
              do {
                iVar29 = 0;
                iVar31 = 1;
                iVar35 = 0;
                do {
                  iVar29 = iVar29 + 2;
                  iVar22 = iVar31;
                  if (((longlong)iVar29 < (longlong)uVar25) &&
                     (*(float *)(pdVar19 + (longlong)iVar29 * 7 + 6) <
                      *(float *)(pdVar19 + (longlong)iVar31 * 7 + 6) ||
                      *(float *)(pdVar19 + (longlong)iVar29 * 7 + 6) ==
                      *(float *)(pdVar19 + (longlong)iVar31 * 7 + 6))) {
                    iVar22 = iVar29;
                  }
                  if (*(float *)(pdVar19 + (longlong)iVar35 * 7 + 6) <
                      *(float *)(pdVar19 + (longlong)iVar22 * 7 + 6) ||
                      *(float *)(pdVar19 + (longlong)iVar35 * 7 + 6) ==
                      *(float *)(pdVar19 + (longlong)iVar22 * 7 + 6)) break;
                  pdVar24 = pdVar19 + (longlong)iVar35 * 7;
                  pdVar26 = pdVar19 + (longlong)iVar22 * 7;
                  dVar4 = pdVar24[6];
                  dVar2 = *pdVar24;
                  dVar3 = pdVar24[1];
                  dVar5 = pdVar24[2];
                  dVar6 = pdVar24[3];
                  dVar7 = pdVar24[4];
                  dVar8 = pdVar24[5];
                  pdVar24[6] = pdVar26[6];
                  dVar9 = *pdVar26;
                  dVar10 = pdVar26[1];
                  dVar11 = pdVar26[2];
                  dVar12 = pdVar26[3];
                  dVar13 = pdVar26[5];
                  pdVar24[4] = pdVar26[4];
                  pdVar24[5] = dVar13;
                  pdVar24[2] = dVar11;
                  pdVar24[3] = dVar12;
                  *pdVar24 = dVar9;
                  pdVar24[1] = dVar10;
                  pdVar26[6] = dVar4;
                  pdVar26[4] = dVar7;
                  pdVar26[5] = dVar8;
                  pdVar26[2] = dVar5;
                  pdVar26[3] = dVar6;
                  *pdVar26 = dVar2;
                  pdVar26[1] = dVar3;
                  iVar29 = iVar22 * 2;
                  iVar31 = iVar22 * 2 + 1;
                  iVar35 = iVar22;
                } while ((longlong)iVar31 < (longlong)uVar25);
                uVar1 = uVar25 - 1;
                local_78 = pdVar19[6];
                local_a8 = *pdVar19;
                uStack_a0 = pdVar19[1];
                local_98 = pdVar19[2];
                dStack_90 = pdVar19[3];
                local_88 = pdVar19[4];
                dStack_80 = pdVar19[5];
                dVar7 = local_a8;
                dVar8 = uStack_a0;
                pdVar19[6] = pdVar19[uVar1 * 7 + 6];
                dVar4 = pdVar19[uVar1 * 7];
                dVar2 = (pdVar19 + uVar1 * 7)[1];
                dVar3 = pdVar19[uVar1 * 7 + 2];
                dVar5 = (pdVar19 + uVar1 * 7 + 2)[1];
                dVar6 = (pdVar19 + uVar1 * 7 + 4)[1];
                pdVar19[4] = pdVar19[uVar1 * 7 + 4];
                pdVar19[5] = dVar6;
                pdVar19[2] = dVar3;
                pdVar19[3] = dVar5;
                *pdVar19 = dVar4;
                pdVar19[1] = dVar2;
                pdVar19[uVar1 * 7 + 6] = local_78;
                local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
                uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
                pdVar19[uVar1 * 7 + 4] = local_88;
                (pdVar19 + uVar1 * 7 + 4)[1] = dStack_80;
                pdVar19[uVar1 * 7 + 2] = local_98;
                (pdVar19 + uVar1 * 7 + 2)[1] = dStack_90;
                pdVar26 = pdVar19 + uVar1 * 7;
                *(undefined4 *)pdVar26 = (undefined4)local_a8;
                *(undefined4 *)((longlong)pdVar26 + 4) = local_a8._4_4_;
                *(undefined4 *)(pdVar26 + 1) = (undefined4)uStack_a0;
                *(undefined4 *)((longlong)pdVar26 + 0xc) = uStack_a0._4_4_;
                bVar36 = 2 < uVar25;
                uVar25 = uVar1;
                local_a8 = dVar7;
                uStack_a0 = dVar8;
              } while (bVar36);
            }
          }
        }
LAB_147496de3:
        plVar18 = plVar18 + -3;
      } while (&local_3a8 <= plVar18);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147497ad9:
  local_78 = pdVar20[6];
  local_a8 = *pdVar20;
  uStack_a0 = pdVar20[1];
  local_98 = pdVar20[2];
  dStack_90 = pdVar20[3];
  local_88 = pdVar20[4];
  dStack_80 = pdVar20[5];
  dVar10 = local_a8;
  dVar11 = uStack_a0;
  pdVar20[6] = pdVar27[-1];
  dVar5 = *pdVar32;
  dVar6 = pdVar27[-6];
  dVar7 = pdVar27[-5];
  dVar8 = pdVar27[-4];
  dVar9 = pdVar27[-2];
  pdVar20[4] = pdVar27[-3];
  pdVar20[5] = dVar9;
  pdVar20[2] = dVar7;
  pdVar20[3] = dVar8;
  *pdVar20 = dVar5;
  pdVar20[1] = dVar6;
  pdVar27[-1] = local_78;
  local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  pdVar27[-3] = local_88;
  pdVar27[-2] = dStack_80;
  pdVar27[-5] = local_98;
  pdVar27[-4] = dStack_90;
  *(undefined4 *)pdVar32 = (undefined4)local_a8;
  *(undefined4 *)((longlong)pdVar27 + -0x34) = local_a8._4_4_;
  *(undefined4 *)(pdVar27 + -6) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)pdVar27 + -0x2c) = uStack_a0._4_4_;
  iVar29 = iVar29 + -1;
  pdVar27 = pdVar27 + -0xe;
  local_a8 = dVar10;
  uStack_a0 = dVar11;
  if ((longlong)pdVar33 - (longlong)pdVar24 < (longlong)pdVar23 - (longlong)pdVar34) {
    if (pdVar19 < pdVar26) {
      *plVar18 = (longlong)pdVar19;
      plVar18[1] = (longlong)pdVar26;
      *(int *)(plVar18 + 2) = iVar29;
      plVar18 = plVar18 + 3;
    }
    pdVar19 = pdVar20;
    pdVar23 = pdVar33;
    if (pdVar32 <= pdVar20 + 7) goto LAB_147498266;
  }
  else {
    if (pdVar20 + 7 < pdVar32) {
      *plVar18 = (longlong)pdVar20;
      plVar18[1] = (longlong)pdVar27;
      *(int *)(plVar18 + 2) = iVar29;
      plVar18 = plVar18 + 3;
    }
    pdVar20 = pdVar34;
    pdVar27 = pdVar26;
    pdVar23 = pdVar26;
    if (pdVar26 <= pdVar19) goto LAB_147498266;
  }
  iVar35 = (int)((ulonglong)((longlong)pdVar23 - (longlong)pdVar20) >> 3) * -0x49249249;
  uVar30 = iVar35 + 1;
  pdVar24 = pdVar20;
  pdVar20 = pdVar19;
  pdVar26 = pdVar27;
  if (iVar29 == 0) goto LAB_147497bf4;
  goto LAB_14749787b;
LAB_1474970b4:
  local_78 = pdVar20[6];
  local_a8 = *pdVar20;
  uStack_a0 = pdVar20[1];
  local_98 = pdVar20[2];
  dStack_90 = pdVar20[3];
  local_88 = pdVar20[4];
  dStack_80 = pdVar20[5];
  dVar7 = local_a8;
  dVar8 = uStack_a0;
  pdVar20[6] = pdVar27[-1];
  dVar4 = *pdVar32;
  dVar2 = pdVar27[-6];
  dVar3 = pdVar27[-5];
  dVar5 = pdVar27[-4];
  dVar6 = pdVar27[-2];
  pdVar20[4] = pdVar27[-3];
  pdVar20[5] = dVar6;
  pdVar20[2] = dVar3;
  pdVar20[3] = dVar5;
  *pdVar20 = dVar4;
  pdVar20[1] = dVar2;
  pdVar27[-1] = local_78;
  local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  pdVar27[-3] = local_88;
  pdVar27[-2] = dStack_80;
  pdVar27[-5] = local_98;
  pdVar27[-4] = dStack_90;
  *(undefined4 *)pdVar32 = (undefined4)local_a8;
  *(undefined4 *)((longlong)pdVar27 + -0x34) = local_a8._4_4_;
  *(undefined4 *)(pdVar27 + -6) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)pdVar27 + -0x2c) = uStack_a0._4_4_;
  iVar29 = iVar29 + -1;
  pdVar27 = pdVar27 + -0xe;
  local_a8 = dVar7;
  uStack_a0 = dVar8;
  if ((longlong)pdVar33 - (longlong)pdVar24 < (longlong)pdVar23 - (longlong)pdVar34) {
    if (pdVar19 < pdVar26) {
      *plVar18 = (longlong)pdVar19;
      plVar18[1] = (longlong)pdVar26;
      *(int *)(plVar18 + 2) = iVar29;
      plVar18 = plVar18 + 3;
    }
    pdVar19 = pdVar20;
    pdVar23 = pdVar33;
    if (pdVar32 <= pdVar20 + 7) goto LAB_1474977d2;
  }
  else {
    if (pdVar20 + 7 < pdVar32) {
      *plVar18 = (longlong)pdVar20;
      plVar18[1] = (longlong)pdVar27;
      *(int *)(plVar18 + 2) = iVar29;
      plVar18 = plVar18 + 3;
    }
    pdVar20 = pdVar34;
    pdVar27 = pdVar26;
    pdVar23 = pdVar26;
    if (pdVar26 <= pdVar19) goto LAB_1474977d2;
  }
  iVar35 = (int)((ulonglong)((longlong)pdVar23 - (longlong)pdVar20) >> 3) * -0x49249249;
  uVar30 = iVar35 + 1;
  pdVar24 = pdVar20;
  pdVar20 = pdVar19;
  pdVar26 = pdVar27;
  if (iVar29 == 0) goto LAB_1474971d1;
  goto LAB_147496e7a;
LAB_14749686b:
  local_78 = pdVar20[6];
  local_a8 = *pdVar20;
  uStack_a0 = pdVar20[1];
  local_98 = pdVar20[2];
  dStack_90 = pdVar20[3];
  local_88 = pdVar20[4];
  dStack_80 = pdVar20[5];
  dVar7 = local_a8;
  dVar8 = uStack_a0;
  pdVar20[6] = pdVar27[-1];
  dVar4 = *pdVar32;
  dVar2 = pdVar27[-6];
  dVar3 = pdVar27[-5];
  dVar5 = pdVar27[-4];
  dVar6 = pdVar27[-2];
  pdVar20[4] = pdVar27[-3];
  pdVar20[5] = dVar6;
  pdVar20[2] = dVar3;
  pdVar20[3] = dVar5;
  *pdVar20 = dVar4;
  pdVar20[1] = dVar2;
  pdVar27[-1] = local_78;
  local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  pdVar27[-3] = local_88;
  pdVar27[-2] = dStack_80;
  pdVar27[-5] = local_98;
  pdVar27[-4] = dStack_90;
  *(undefined4 *)pdVar32 = (undefined4)local_a8;
  *(undefined4 *)((longlong)pdVar27 + -0x34) = local_a8._4_4_;
  *(undefined4 *)(pdVar27 + -6) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)pdVar27 + -0x2c) = uStack_a0._4_4_;
  iVar29 = iVar29 + -1;
  pdVar27 = pdVar27 + -0xe;
  local_a8 = dVar7;
  uStack_a0 = dVar8;
  if ((longlong)pdVar33 - (longlong)pdVar24 < (longlong)pdVar23 - (longlong)pdVar34) {
    if (pdVar19 < pdVar26) {
      *plVar18 = (longlong)pdVar19;
      plVar18[1] = (longlong)pdVar26;
      *(int *)(plVar18 + 2) = iVar29;
      plVar18 = plVar18 + 3;
    }
    pdVar19 = pdVar20;
    pdVar23 = pdVar33;
    if (pdVar32 <= pdVar20 + 7) goto LAB_147496de3;
  }
  else {
    if (pdVar20 + 7 < pdVar32) {
      *plVar18 = (longlong)pdVar20;
      plVar18[1] = (longlong)pdVar27;
      *(int *)(plVar18 + 2) = iVar29;
      plVar18 = plVar18 + 3;
    }
    pdVar20 = pdVar34;
    pdVar27 = pdVar26;
    pdVar23 = pdVar26;
    if (pdVar26 <= pdVar19) goto LAB_147496de3;
  }
  iVar35 = (int)((ulonglong)((longlong)pdVar23 - (longlong)pdVar20) >> 3) * -0x49249249;
  uVar30 = iVar35 + 1;
  pdVar24 = pdVar20;
  pdVar20 = pdVar19;
  pdVar26 = pdVar27;
  if (iVar29 == 0) goto LAB_147496988;
  goto LAB_1474966d7;
}



// FUNCTION 1474982b8 FUN_1474982b8 body=905 status=ok
// SIG undefined FUN_1474982b8(void)

void FUN_1474982b8(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_168 [40];
  longlong *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118 [4];
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar11 = param_1 + 2;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_1474abf5c(plVar11);
  }
  piVar9 = (int *)param_1[0x10];
  lVar8 = param_3[1];
  if ((longlong)(int)lVar8 != 0) {
    fVar2 = (float)piVar9[2];
    fVar3 = (float)piVar9[4];
    lVar6 = *param_3;
    fVar4 = (float)piVar9[3];
    lVar12 = 0;
    do {
      if ((float)piVar9[1] <= 0.0) {
LAB_1474983ac:
        if (0.0 < (float)piVar9[2]) {
          dVar18 = *(double *)(lVar6 + 0x60 + lVar12);
          dVar17 = *(double *)(lVar6 + 0x68 + lVar12);
          dVar19 = *(double *)(lVar6 + 0x70 + lVar12);
          dVar16 = dVar19 * dVar19 + dVar18 * dVar18 + dVar17 * dVar17;
          dVar18 = *(double *)(lVar6 + 0x48 + lVar12);
          dVar17 = *(double *)(lVar6 + 0x50 + lVar12);
          dVar19 = *(double *)(lVar6 + 0x58 + lVar12);
          dVar18 = dVar19 * dVar19 + dVar18 * dVar18 + dVar17 * dVar17;
          if (dVar16 <= dVar18) {
            dVar18 = dVar16;
          }
          if ((float)dVar18 < fVar2 * fVar2) goto LAB_14749857f;
        }
        if ((((float)piVar9[3] <= 0.0) ||
            (dVar18 = *(double *)(lVar6 + 0x18 + lVar12),
            dVar17 = *(double *)(lVar6 + 0x20 + lVar12), dVar19 = *(double *)(lVar6 + 0x28 + lVar12)
            , (double)(fVar4 * fVar4) <= dVar19 * dVar19 + dVar18 * dVar18 + dVar17 * dVar17)) &&
           (((float)piVar9[4] <= 0.0 ||
            (dVar17 = *(double *)(param_2 + 0x20) - *(double *)(lVar6 + lVar12),
            dVar19 = *(double *)(param_2 + 0x28) - *(double *)(lVar6 + 8 + lVar12),
            dVar18 = *(double *)(param_2 + 0x30) - *(double *)(lVar6 + 0x10 + lVar12),
            (float)(dVar18 * dVar18 + dVar19 * dVar19 + dVar17 * dVar17) <= fVar3 * fVar3)))) {
          puVar13 = (undefined8 *)(lVar12 + lVar6);
          local_118[2] = puVar13[2];
          local_118[0] = *puVar13;
          local_118[1] = puVar13[1];
          local_f0 = *(undefined8 *)(lVar6 + 0x40 + lVar12);
          puVar13 = (undefined8 *)(lVar6 + 0x30 + lVar12);
          local_118[3] = *puVar13;
          uStack_f8 = puVar13[1];
          local_d8 = *(undefined8 *)(lVar6 + 0x58 + lVar12);
          puVar13 = (undefined8 *)(lVar6 + 0x48 + lVar12);
          local_e8 = *puVar13;
          uStack_e0 = puVar13[1];
          local_c0 = *(undefined8 *)(lVar6 + 0x70 + lVar12);
          puVar13 = (undefined8 *)(lVar6 + 0x60 + lVar12);
          local_d0 = *puVar13;
          uStack_c8 = puVar13[1];
          dVar18 = *(double *)(lVar6 + 0xd8 + lVar12);
          dVar17 = *(double *)(lVar6 + 0xe0 + lVar12);
          local_128 = *(undefined8 *)(lVar6 + 0x28 + lVar12);
          puVar1 = (undefined4 *)(lVar6 + 0x18 + lVar12);
          local_138 = *puVar1;
          uStack_134 = puVar1[1];
          uStack_130 = puVar1[2];
          uStack_12c = puVar1[3];
          iVar5 = (int)param_1[3];
          *(uint *)(param_1 + 3) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0x1c) < iVar5 + 1U) {
            local_140 = plVar11;
            FUN_1474abf8c(plVar11,iVar5);
            plVar11 = local_140;
          }
          lVar7 = param_1[2];
          lVar15 = (longlong)iVar5 * 0x80;
          puVar13 = local_118;
          puVar14 = (undefined8 *)(lVar7 + lVar15);
          for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          }
          *(float *)(lVar7 + 0x60 + lVar15) = (float)dVar18;
          *(float *)(lVar7 + 100 + lVar15) = (float)dVar17;
          *(undefined8 *)(lVar7 + 0x78 + lVar15) = local_128;
          puVar1 = (undefined4 *)(lVar7 + 0x68 + lVar15);
          *puVar1 = local_138;
          puVar1[1] = uStack_134;
          puVar1[2] = uStack_130;
          puVar1[3] = uStack_12c;
          piVar9 = (int *)param_1[0x10];
          if ((0 < *piVar9) && ((int)param_1[3] == *piVar9)) break;
        }
      }
      else {
        dVar18 = *(double *)(lVar6 + 0xd8 + lVar12);
        dVar17 = *(double *)(lVar6 + 0xe0 + lVar12);
        if (dVar17 <= dVar18) {
          dVar18 = dVar17;
        }
        if ((float)piVar9[1] <= (float)dVar18) goto LAB_1474983ac;
      }
LAB_14749857f:
      lVar12 = lVar12 + 0x120;
    } while ((longlong)(int)lVar8 * 0x120 != lVar12);
  }
  if ((local_b0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_168,plVar11,(char)piVar9[5]);
  }
                    /* WARNING: Could not recover jumptable at 0x000147498620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}



// FUNCTION 147498642 FUN_147498642 body=7657 status=ok
// SIG undefined FUN_147498642(void)

void FUN_147498642(undefined8 param_1,longlong *param_2,undefined1 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  int iVar14;
  double *pdVar15;
  uint uVar16;
  longlong lVar17;
  double *pdVar18;
  longlong *plVar19;
  int iVar20;
  double *pdVar21;
  ulonglong uVar22;
  bool bVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_428 [32];
  longlong local_408;
  longlong local_400;
  undefined4 local_3f8 [190];
  double local_100 [16];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_428;
  switch(param_3) {
  case 1:
    iVar6 = (int)param_2[1];
    if (1 < (longlong)iVar6) {
      lVar1 = *param_2;
      memset(local_3f8,0,0x2f0);
      local_400 = (longlong)iVar6 * 0x80 + lVar1 + -0x80;
      local_408 = lVar1;
      fVar24 = logf((float)iVar6);
      local_3f8[0] = (int)(longlong)(fVar24 + fVar24);
      plVar19 = &local_408;
      do {
        pdVar15 = (double *)*plVar19;
        pdVar10 = (double *)plVar19[1];
        iVar6 = (int)plVar19[2];
        iVar20 = (int)((ulonglong)((longlong)pdVar10 - (longlong)pdVar15) >> 7);
        uVar16 = iVar20 + 1;
        pdVar4 = pdVar10;
        pdVar3 = pdVar15;
        if (iVar6 != 0) {
LAB_14749872c:
          if (8 < (int)uVar16) {
            pdVar7 = pdVar15 + (ulonglong)(uVar16 >> 1) * 0x10;
            pdVar5 = local_100;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar5 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar5 = pdVar5 + 1;
            }
            pdVar7 = pdVar15;
            pdVar5 = pdVar15 + (ulonglong)(uVar16 >> 1) * 0x10;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar5 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar5 = pdVar5 + 1;
            }
            pdVar7 = local_100;
            pdVar5 = pdVar15;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar5 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar5 = pdVar5 + 1;
            }
            pdVar7 = pdVar10 + 0x10;
            pdVar5 = pdVar15;
            do {
              pdVar9 = pdVar5 + 0x10;
              pdVar11 = pdVar5 + 0x10;
              do {
                pdVar5 = pdVar11;
                pdVar18 = pdVar9;
                if (pdVar10 < pdVar5) break;
                fVar24 = *(float *)(pdVar15 + 0xc);
                if (*(float *)(pdVar15 + 0xc) <= *(float *)((longlong)pdVar15 + 100)) {
                  fVar24 = *(float *)((longlong)pdVar15 + 100);
                }
                fVar27 = *(float *)(pdVar5 + 0xc);
                if (*(float *)(pdVar5 + 0xc) <= *(float *)((longlong)pdVar5 + 100)) {
                  fVar27 = *(float *)((longlong)pdVar5 + 100);
                }
                pdVar9 = pdVar18 + 0x10;
                pdVar11 = pdVar5 + 0x10;
              } while (fVar24 <= fVar27);
              pdVar9 = pdVar7 + -0x20;
              do {
                pdVar11 = pdVar7;
                pdVar21 = pdVar9;
                pdVar7 = pdVar11 + -0x10;
                if (pdVar7 <= pdVar15) break;
                fVar24 = *(float *)(pdVar11 + -4);
                if (*(float *)(pdVar11 + -4) <= *(float *)((longlong)pdVar11 + -0x1c)) {
                  fVar24 = *(float *)((longlong)pdVar11 + -0x1c);
                }
                fVar27 = *(float *)(pdVar15 + 0xc);
                if (*(float *)(pdVar15 + 0xc) <= *(float *)((longlong)pdVar15 + 100)) {
                  fVar27 = *(float *)((longlong)pdVar15 + 100);
                }
                pdVar9 = pdVar21 + -0x10;
              } while (fVar24 <= fVar27);
              lVar1 = 0x10;
              pdVar9 = pdVar15;
              pdVar8 = pdVar5;
              pdVar12 = local_100;
              if (pdVar7 < pdVar5) goto code_r0x000147498821;
              for (; lVar1 != 0; lVar1 = lVar1 + -1) {
                *pdVar12 = *pdVar8;
                pdVar8 = pdVar8 + 1;
                pdVar12 = pdVar12 + 1;
              }
              pdVar9 = pdVar7;
              pdVar11 = pdVar5;
              for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                *pdVar11 = *pdVar9;
                pdVar9 = pdVar9 + 1;
                pdVar11 = pdVar11 + 1;
              }
              pdVar9 = local_100;
              pdVar11 = pdVar7;
              for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                *pdVar11 = *pdVar9;
                pdVar9 = pdVar9 + 1;
                pdVar11 = pdVar11 + 1;
              }
            } while( true );
          }
          while (pdVar4 = pdVar15, pdVar3 = pdVar15, pdVar15 < pdVar10) {
            while (pdVar7 = pdVar4, pdVar4 = pdVar3 + 0x10, pdVar4 <= pdVar10) {
              fVar24 = *(float *)(pdVar7 + 0xc);
              if (*(float *)(pdVar7 + 0xc) <= *(float *)((longlong)pdVar7 + 100)) {
                fVar24 = *(float *)((longlong)pdVar7 + 100);
              }
              fVar27 = *(float *)(pdVar4 + 0xc);
              if (*(float *)(pdVar4 + 0xc) <= *(float *)((longlong)pdVar3 + 0xe4)) {
                fVar27 = *(float *)((longlong)pdVar3 + 0xe4);
              }
              pdVar3 = pdVar4;
              if (fVar24 <= fVar27) {
                pdVar4 = pdVar7;
              }
            }
            pdVar4 = pdVar10 + -0x10;
            pdVar3 = pdVar7;
            pdVar5 = local_100;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar5 = *pdVar3;
              pdVar3 = pdVar3 + 1;
              pdVar5 = pdVar5 + 1;
            }
            pdVar3 = pdVar10;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar7 = *pdVar3;
              pdVar3 = pdVar3 + 1;
              pdVar7 = pdVar7 + 1;
            }
            pdVar3 = local_100;
            pdVar7 = pdVar10;
            for (lVar1 = 0x10; pdVar10 = pdVar4, lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar7 = *pdVar3;
              pdVar3 = pdVar3 + 1;
              pdVar7 = pdVar7 + 1;
            }
          }
          goto LAB_147498b94;
        }
LAB_1474988ce:
        if (uVar16 != 0) {
          iVar20 = (iVar20 - (iVar20 + -1 >> 0x1f)) + -1 >> 1;
          iVar6 = iVar20;
joined_r0x0001474988f6:
          do {
            iVar14 = iVar6 * 2 + 1;
            if (iVar14 < (int)uVar16) {
              iVar13 = iVar6 * 2 + 2;
              if (iVar13 < (int)uVar16) {
                fVar24 = *(float *)((longlong)pdVar15 + (longlong)iVar13 * 0x80 + 100);
                fVar27 = *(float *)(pdVar15 + (longlong)iVar13 * 0x10 + 0xc);
                if (*(float *)(pdVar15 + (longlong)iVar13 * 0x10 + 0xc) <= fVar24) {
                  fVar27 = fVar24;
                }
                fVar24 = *(float *)((longlong)pdVar15 + (longlong)iVar14 * 0x80 + 100);
                fVar28 = *(float *)(pdVar15 + (longlong)iVar14 * 0x10 + 0xc);
                if (*(float *)(pdVar15 + (longlong)iVar14 * 0x10 + 0xc) <= fVar24) {
                  fVar28 = fVar24;
                }
                if (fVar27 <= fVar28) {
                  iVar14 = iVar13;
                }
              }
              lVar17 = (longlong)iVar6;
              lVar1 = (longlong)iVar14;
              fVar24 = *(float *)((longlong)pdVar15 + lVar17 * 0x80 + 100);
              fVar27 = *(float *)(pdVar15 + lVar17 * 0x10 + 0xc);
              if (*(float *)(pdVar15 + lVar17 * 0x10 + 0xc) <= fVar24) {
                fVar27 = fVar24;
              }
              fVar24 = *(float *)((longlong)pdVar15 + lVar1 * 0x80 + 100);
              fVar28 = *(float *)(pdVar15 + lVar1 * 0x10 + 0xc);
              if (*(float *)(pdVar15 + lVar1 * 0x10 + 0xc) <= fVar24) {
                fVar28 = fVar24;
              }
              if (fVar28 < fVar27) {
                pdVar10 = pdVar15 + lVar17 * 0x10;
                pdVar4 = local_100;
                for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                pdVar10 = pdVar15 + lVar1 * 0x10;
                pdVar4 = pdVar15 + lVar17 * 0x10;
                for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                pdVar10 = local_100;
                pdVar4 = pdVar15 + lVar1 * 0x10;
                for (lVar17 = 0x10; iVar6 = iVar14, lVar17 != 0; lVar17 = lVar17 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                goto joined_r0x0001474988f6;
              }
            }
            bVar23 = iVar20 != 0;
            iVar20 = iVar20 + -1;
            iVar6 = iVar20;
          } while (bVar23);
          if (1 < (int)uVar16) {
            pdVar10 = pdVar15;
            pdVar4 = local_100;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar4 = *pdVar10;
              pdVar10 = pdVar10 + 1;
              pdVar4 = pdVar4 + 1;
            }
            pdVar10 = pdVar15 + ((ulonglong)uVar16 - 1) * 0x10;
            pdVar4 = pdVar15;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar4 = *pdVar10;
              pdVar10 = pdVar10 + 1;
              pdVar4 = pdVar4 + 1;
            }
            pdVar10 = local_100;
            pdVar4 = pdVar15 + ((ulonglong)uVar16 - 1) * 0x10;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar4 = *pdVar10;
              pdVar10 = pdVar10 + 1;
              pdVar4 = pdVar4 + 1;
            }
            uVar22 = (ulonglong)uVar16 - 1;
            if (uVar16 != 2) {
              do {
                iVar6 = 0;
                iVar14 = 1;
                iVar20 = 0;
                do {
                  lVar1 = (longlong)(iVar6 + 2);
                  iVar13 = iVar14;
                  if (lVar1 < (longlong)uVar22) {
                    fVar24 = *(float *)((longlong)pdVar15 + lVar1 * 0x80 + 100);
                    fVar27 = *(float *)(pdVar15 + lVar1 * 0x10 + 0xc);
                    if (*(float *)(pdVar15 + lVar1 * 0x10 + 0xc) <= fVar24) {
                      fVar27 = fVar24;
                    }
                    fVar24 = *(float *)((longlong)pdVar15 + (longlong)iVar14 * 0x80 + 100);
                    fVar28 = *(float *)(pdVar15 + (longlong)iVar14 * 0x10 + 0xc);
                    if (*(float *)(pdVar15 + (longlong)iVar14 * 0x10 + 0xc) <= fVar24) {
                      fVar28 = fVar24;
                    }
                    if (fVar27 <= fVar28) {
                      iVar13 = iVar6 + 2;
                    }
                  }
                  lVar17 = (longlong)iVar20;
                  lVar1 = (longlong)iVar13;
                  fVar24 = *(float *)((longlong)pdVar15 + lVar17 * 0x80 + 100);
                  fVar27 = *(float *)(pdVar15 + lVar17 * 0x10 + 0xc);
                  if (*(float *)(pdVar15 + lVar17 * 0x10 + 0xc) <= fVar24) {
                    fVar27 = fVar24;
                  }
                  fVar24 = *(float *)((longlong)pdVar15 + lVar1 * 0x80 + 100);
                  fVar28 = *(float *)(pdVar15 + lVar1 * 0x10 + 0xc);
                  if (*(float *)(pdVar15 + lVar1 * 0x10 + 0xc) <= fVar24) {
                    fVar28 = fVar24;
                  }
                  if (fVar27 <= fVar28) break;
                  pdVar10 = pdVar15 + lVar17 * 0x10;
                  pdVar4 = local_100;
                  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
                    *pdVar4 = *pdVar10;
                    pdVar10 = pdVar10 + 1;
                    pdVar4 = pdVar4 + 1;
                  }
                  pdVar10 = pdVar15 + lVar1 * 0x10;
                  pdVar4 = pdVar15 + lVar17 * 0x10;
                  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
                    *pdVar4 = *pdVar10;
                    pdVar10 = pdVar10 + 1;
                    pdVar4 = pdVar4 + 1;
                  }
                  pdVar10 = local_100;
                  pdVar4 = pdVar15 + lVar1 * 0x10;
                  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
                    *pdVar4 = *pdVar10;
                    pdVar10 = pdVar10 + 1;
                    pdVar4 = pdVar4 + 1;
                  }
                  iVar6 = iVar13 * 2;
                  iVar14 = iVar13 * 2 + 1;
                  iVar20 = iVar13;
                } while ((longlong)iVar14 < (longlong)uVar22);
                pdVar10 = pdVar15;
                pdVar4 = local_100;
                for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                pdVar10 = pdVar15 + (uVar22 - 1) * 0x10;
                pdVar4 = pdVar15;
                for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                pdVar10 = local_100;
                pdVar4 = pdVar15 + (uVar22 - 1) * 0x10;
                for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                bVar23 = 2 < uVar22;
                uVar22 = uVar22 - 1;
              } while (bVar23);
            }
          }
        }
LAB_147498b94:
        plVar19 = plVar19 + -3;
      } while (&local_408 <= plVar19);
    }
    break;
  case 2:
    iVar6 = (int)param_2[1];
    if (1 < (longlong)iVar6) {
      lVar1 = *param_2;
      memset(local_3f8,0,0x2f0);
      local_400 = (longlong)iVar6 * 0x80 + lVar1 + -0x80;
      local_408 = lVar1;
      fVar24 = logf((float)iVar6);
      local_3f8[0] = (int)(longlong)(fVar24 + fVar24);
      plVar19 = &local_408;
      do {
        pdVar15 = (double *)*plVar19;
        pdVar10 = (double *)plVar19[1];
        iVar6 = (int)plVar19[2];
        iVar20 = (int)((ulonglong)((longlong)pdVar10 - (longlong)pdVar15) >> 7);
        uVar16 = iVar20 + 1;
        pdVar4 = pdVar10;
        pdVar3 = pdVar15;
        if (iVar6 != 0) {
LAB_147499abe:
          if (8 < (int)uVar16) {
            pdVar7 = pdVar15 + (ulonglong)(uVar16 >> 1) * 0x10;
            pdVar5 = local_100;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar5 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar5 = pdVar5 + 1;
            }
            pdVar7 = pdVar15;
            pdVar5 = pdVar15 + (ulonglong)(uVar16 >> 1) * 0x10;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar5 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar5 = pdVar5 + 1;
            }
            pdVar7 = local_100;
            pdVar5 = pdVar15;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar5 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar5 = pdVar5 + 1;
            }
            pdVar7 = pdVar10 + 0x10;
            pdVar5 = pdVar15;
            do {
              pdVar9 = pdVar5 + 0x10;
              pdVar11 = pdVar5 + 0x10;
              do {
                pdVar5 = pdVar11;
                pdVar18 = pdVar9;
                if (pdVar10 < pdVar5) break;
                dVar29 = SQRT(pdVar15[0xb] * pdVar15[0xb] +
                              pdVar15[9] * pdVar15[9] + pdVar15[10] * pdVar15[10]);
                dVar26 = SQRT(pdVar15[8] * pdVar15[8] +
                              pdVar15[6] * pdVar15[6] + pdVar15[7] * pdVar15[7]);
                if (dVar26 <= dVar29) {
                  dVar26 = dVar29;
                }
                dVar30 = SQRT(pdVar5[0xb] * pdVar5[0xb] +
                              pdVar5[9] * pdVar5[9] + pdVar5[10] * pdVar5[10]);
                dVar29 = SQRT(pdVar5[8] * pdVar5[8] + pdVar5[6] * pdVar5[6] + pdVar5[7] * pdVar5[7])
                ;
                if (dVar29 <= dVar30) {
                  dVar29 = dVar30;
                }
                pdVar9 = pdVar18 + 0x10;
                pdVar11 = pdVar5 + 0x10;
              } while (dVar26 <= dVar29);
              pdVar9 = pdVar7 + -0x20;
              do {
                pdVar11 = pdVar7;
                pdVar21 = pdVar9;
                pdVar7 = pdVar11 + -0x10;
                if (pdVar7 <= pdVar15) break;
                dVar29 = SQRT(pdVar11[-5] * pdVar11[-5] +
                              pdVar11[-7] * pdVar11[-7] + pdVar11[-6] * pdVar11[-6]);
                dVar26 = SQRT(pdVar11[-8] * pdVar11[-8] +
                              pdVar11[-10] * pdVar11[-10] + pdVar11[-9] * pdVar11[-9]);
                if (dVar26 <= dVar29) {
                  dVar26 = dVar29;
                }
                dVar30 = SQRT(pdVar15[0xb] * pdVar15[0xb] +
                              pdVar15[9] * pdVar15[9] + pdVar15[10] * pdVar15[10]);
                dVar29 = SQRT(pdVar15[8] * pdVar15[8] +
                              pdVar15[6] * pdVar15[6] + pdVar15[7] * pdVar15[7]);
                if (dVar29 <= dVar30) {
                  dVar29 = dVar30;
                }
                pdVar9 = pdVar21 + -0x10;
              } while (dVar26 <= dVar29);
              lVar1 = 0x10;
              pdVar9 = pdVar15;
              pdVar8 = pdVar5;
              pdVar12 = local_100;
              if (pdVar7 < pdVar5) goto code_r0x000147499d03;
              for (; lVar1 != 0; lVar1 = lVar1 + -1) {
                *pdVar12 = *pdVar8;
                pdVar8 = pdVar8 + 1;
                pdVar12 = pdVar12 + 1;
              }
              pdVar9 = pdVar7;
              pdVar11 = pdVar5;
              for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                *pdVar11 = *pdVar9;
                pdVar9 = pdVar9 + 1;
                pdVar11 = pdVar11 + 1;
              }
              pdVar9 = local_100;
              pdVar11 = pdVar7;
              for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                *pdVar11 = *pdVar9;
                pdVar9 = pdVar9 + 1;
                pdVar11 = pdVar11 + 1;
              }
            } while( true );
          }
          while (pdVar3 = pdVar15, pdVar4 = pdVar15, pdVar15 < pdVar10) {
            while (pdVar7 = pdVar3, pdVar4 = pdVar4 + 0x10, pdVar4 <= pdVar10) {
              dVar29 = SQRT(pdVar7[0xb] * pdVar7[0xb] +
                            pdVar7[9] * pdVar7[9] + pdVar7[10] * pdVar7[10]);
              dVar26 = SQRT(pdVar7[8] * pdVar7[8] + pdVar7[6] * pdVar7[6] + pdVar7[7] * pdVar7[7]);
              if (dVar26 <= dVar29) {
                dVar26 = dVar29;
              }
              dVar30 = SQRT(pdVar4[0xb] * pdVar4[0xb] +
                            pdVar4[9] * pdVar4[9] + pdVar4[10] * pdVar4[10]);
              dVar29 = SQRT(pdVar4[8] * pdVar4[8] + pdVar4[6] * pdVar4[6] + pdVar4[7] * pdVar4[7]);
              if (dVar29 <= dVar30) {
                dVar29 = dVar30;
              }
              pdVar3 = pdVar4;
              if (dVar26 <= dVar29) {
                pdVar3 = pdVar7;
              }
            }
            pdVar4 = pdVar10 + -0x10;
            pdVar3 = pdVar7;
            pdVar5 = local_100;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar5 = *pdVar3;
              pdVar3 = pdVar3 + 1;
              pdVar5 = pdVar5 + 1;
            }
            pdVar3 = pdVar10;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar7 = *pdVar3;
              pdVar3 = pdVar3 + 1;
              pdVar7 = pdVar7 + 1;
            }
            pdVar3 = local_100;
            pdVar7 = pdVar10;
            for (lVar1 = 0x10; pdVar10 = pdVar4, lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar7 = *pdVar3;
              pdVar3 = pdVar3 + 1;
              pdVar7 = pdVar7 + 1;
            }
          }
          goto LAB_14749a3d3;
        }
LAB_147499db0:
        if (uVar16 != 0) {
          iVar20 = (iVar20 - (iVar20 + -1 >> 0x1f)) + -1 >> 1;
          iVar6 = iVar20;
joined_r0x000147499dd8:
          do {
            iVar14 = iVar6 * 2 + 1;
            if (iVar14 < (int)uVar16) {
              iVar13 = iVar6 * 2 + 2;
              if (iVar13 < (int)uVar16) {
                lVar1 = (longlong)iVar13;
                lVar17 = (longlong)iVar14;
                dVar29 = SQRT(pdVar15[lVar1 * 0x10 + 0xb] * pdVar15[lVar1 * 0x10 + 0xb] +
                              pdVar15[lVar1 * 0x10 + 9] * pdVar15[lVar1 * 0x10 + 9] +
                              pdVar15[lVar1 * 0x10 + 10] * pdVar15[lVar1 * 0x10 + 10]);
                dVar26 = SQRT(pdVar15[lVar1 * 0x10 + 8] * pdVar15[lVar1 * 0x10 + 8] +
                              pdVar15[lVar1 * 0x10 + 6] * pdVar15[lVar1 * 0x10 + 6] +
                              pdVar15[lVar1 * 0x10 + 7] * pdVar15[lVar1 * 0x10 + 7]);
                if (dVar26 <= dVar29) {
                  dVar26 = dVar29;
                }
                dVar30 = SQRT(pdVar15[lVar17 * 0x10 + 0xb] * pdVar15[lVar17 * 0x10 + 0xb] +
                              pdVar15[lVar17 * 0x10 + 9] * pdVar15[lVar17 * 0x10 + 9] +
                              pdVar15[lVar17 * 0x10 + 10] * pdVar15[lVar17 * 0x10 + 10]);
                dVar29 = SQRT(pdVar15[lVar17 * 0x10 + 8] * pdVar15[lVar17 * 0x10 + 8] +
                              pdVar15[lVar17 * 0x10 + 6] * pdVar15[lVar17 * 0x10 + 6] +
                              pdVar15[lVar17 * 0x10 + 7] * pdVar15[lVar17 * 0x10 + 7]);
                if (dVar29 <= dVar30) {
                  dVar29 = dVar30;
                }
                if (dVar26 <= dVar29) {
                  iVar14 = iVar13;
                }
              }
              lVar17 = (longlong)iVar6;
              lVar1 = (longlong)iVar14;
              dVar29 = SQRT(pdVar15[lVar17 * 0x10 + 0xb] * pdVar15[lVar17 * 0x10 + 0xb] +
                            pdVar15[lVar17 * 0x10 + 9] * pdVar15[lVar17 * 0x10 + 9] +
                            pdVar15[lVar17 * 0x10 + 10] * pdVar15[lVar17 * 0x10 + 10]);
              dVar26 = SQRT(pdVar15[lVar17 * 0x10 + 8] * pdVar15[lVar17 * 0x10 + 8] +
                            pdVar15[lVar17 * 0x10 + 6] * pdVar15[lVar17 * 0x10 + 6] +
                            pdVar15[lVar17 * 0x10 + 7] * pdVar15[lVar17 * 0x10 + 7]);
              if (dVar26 <= dVar29) {
                dVar26 = dVar29;
              }
              dVar30 = SQRT(pdVar15[lVar1 * 0x10 + 0xb] * pdVar15[lVar1 * 0x10 + 0xb] +
                            pdVar15[lVar1 * 0x10 + 9] * pdVar15[lVar1 * 0x10 + 9] +
                            pdVar15[lVar1 * 0x10 + 10] * pdVar15[lVar1 * 0x10 + 10]);
              dVar29 = SQRT(pdVar15[lVar1 * 0x10 + 8] * pdVar15[lVar1 * 0x10 + 8] +
                            pdVar15[lVar1 * 0x10 + 6] * pdVar15[lVar1 * 0x10 + 6] +
                            pdVar15[lVar1 * 0x10 + 7] * pdVar15[lVar1 * 0x10 + 7]);
              if (dVar29 <= dVar30) {
                dVar29 = dVar30;
              }
              if (dVar29 < dVar26) {
                pdVar10 = pdVar15 + lVar17 * 0x10;
                pdVar4 = local_100;
                for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                pdVar10 = pdVar15 + lVar1 * 0x10;
                pdVar4 = pdVar15 + lVar17 * 0x10;
                for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                pdVar10 = local_100;
                pdVar4 = pdVar15 + lVar1 * 0x10;
                for (lVar17 = 0x10; iVar6 = iVar14, lVar17 != 0; lVar17 = lVar17 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                goto joined_r0x000147499dd8;
              }
            }
            bVar23 = iVar20 != 0;
            iVar20 = iVar20 + -1;
            iVar6 = iVar20;
          } while (bVar23);
          if (1 < (int)uVar16) {
            pdVar10 = pdVar15;
            pdVar4 = local_100;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar4 = *pdVar10;
              pdVar10 = pdVar10 + 1;
              pdVar4 = pdVar4 + 1;
            }
            pdVar10 = pdVar15 + ((ulonglong)uVar16 - 1) * 0x10;
            pdVar4 = pdVar15;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar4 = *pdVar10;
              pdVar10 = pdVar10 + 1;
              pdVar4 = pdVar4 + 1;
            }
            pdVar10 = local_100;
            pdVar4 = pdVar15 + ((ulonglong)uVar16 - 1) * 0x10;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar4 = *pdVar10;
              pdVar10 = pdVar10 + 1;
              pdVar4 = pdVar4 + 1;
            }
            uVar22 = (ulonglong)uVar16 - 1;
            if (uVar16 != 2) {
              do {
                iVar6 = 0;
                iVar14 = 1;
                iVar20 = 0;
                do {
                  lVar1 = (longlong)(iVar6 + 2);
                  iVar13 = iVar14;
                  if (lVar1 < (longlong)uVar22) {
                    lVar17 = (longlong)iVar14;
                    dVar29 = SQRT(pdVar15[lVar1 * 0x10 + 0xb] * pdVar15[lVar1 * 0x10 + 0xb] +
                                  pdVar15[lVar1 * 0x10 + 9] * pdVar15[lVar1 * 0x10 + 9] +
                                  pdVar15[lVar1 * 0x10 + 10] * pdVar15[lVar1 * 0x10 + 10]);
                    dVar26 = SQRT(pdVar15[lVar1 * 0x10 + 8] * pdVar15[lVar1 * 0x10 + 8] +
                                  pdVar15[lVar1 * 0x10 + 6] * pdVar15[lVar1 * 0x10 + 6] +
                                  pdVar15[lVar1 * 0x10 + 7] * pdVar15[lVar1 * 0x10 + 7]);
                    if (dVar26 <= dVar29) {
                      dVar26 = dVar29;
                    }
                    dVar30 = SQRT(pdVar15[lVar17 * 0x10 + 0xb] * pdVar15[lVar17 * 0x10 + 0xb] +
                                  pdVar15[lVar17 * 0x10 + 9] * pdVar15[lVar17 * 0x10 + 9] +
                                  pdVar15[lVar17 * 0x10 + 10] * pdVar15[lVar17 * 0x10 + 10]);
                    dVar29 = SQRT(pdVar15[lVar17 * 0x10 + 8] * pdVar15[lVar17 * 0x10 + 8] +
                                  pdVar15[lVar17 * 0x10 + 6] * pdVar15[lVar17 * 0x10 + 6] +
                                  pdVar15[lVar17 * 0x10 + 7] * pdVar15[lVar17 * 0x10 + 7]);
                    if (dVar29 <= dVar30) {
                      dVar29 = dVar30;
                    }
                    if (dVar26 <= dVar29) {
                      iVar13 = iVar6 + 2;
                    }
                  }
                  lVar17 = (longlong)iVar20;
                  lVar1 = (longlong)iVar13;
                  dVar29 = SQRT(pdVar15[lVar17 * 0x10 + 0xb] * pdVar15[lVar17 * 0x10 + 0xb] +
                                pdVar15[lVar17 * 0x10 + 9] * pdVar15[lVar17 * 0x10 + 9] +
                                pdVar15[lVar17 * 0x10 + 10] * pdVar15[lVar17 * 0x10 + 10]);
                  dVar26 = SQRT(pdVar15[lVar17 * 0x10 + 8] * pdVar15[lVar17 * 0x10 + 8] +
                                pdVar15[lVar17 * 0x10 + 6] * pdVar15[lVar17 * 0x10 + 6] +
                                pdVar15[lVar17 * 0x10 + 7] * pdVar15[lVar17 * 0x10 + 7]);
                  if (dVar26 <= dVar29) {
                    dVar26 = dVar29;
                  }
                  dVar30 = SQRT(pdVar15[lVar1 * 0x10 + 0xb] * pdVar15[lVar1 * 0x10 + 0xb] +
                                pdVar15[lVar1 * 0x10 + 9] * pdVar15[lVar1 * 0x10 + 9] +
                                pdVar15[lVar1 * 0x10 + 10] * pdVar15[lVar1 * 0x10 + 10]);
                  dVar29 = SQRT(pdVar15[lVar1 * 0x10 + 8] * pdVar15[lVar1 * 0x10 + 8] +
                                pdVar15[lVar1 * 0x10 + 6] * pdVar15[lVar1 * 0x10 + 6] +
                                pdVar15[lVar1 * 0x10 + 7] * pdVar15[lVar1 * 0x10 + 7]);
                  if (dVar29 <= dVar30) {
                    dVar29 = dVar30;
                  }
                  if (dVar26 <= dVar29) break;
                  pdVar10 = pdVar15 + lVar17 * 0x10;
                  pdVar4 = local_100;
                  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
                    *pdVar4 = *pdVar10;
                    pdVar10 = pdVar10 + 1;
                    pdVar4 = pdVar4 + 1;
                  }
                  pdVar10 = pdVar15 + lVar1 * 0x10;
                  pdVar4 = pdVar15 + lVar17 * 0x10;
                  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
                    *pdVar4 = *pdVar10;
                    pdVar10 = pdVar10 + 1;
                    pdVar4 = pdVar4 + 1;
                  }
                  pdVar10 = local_100;
                  pdVar4 = pdVar15 + lVar1 * 0x10;
                  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
                    *pdVar4 = *pdVar10;
                    pdVar10 = pdVar10 + 1;
                    pdVar4 = pdVar4 + 1;
                  }
                  iVar6 = iVar13 * 2;
                  iVar14 = iVar13 * 2 + 1;
                  iVar20 = iVar13;
                } while ((longlong)iVar14 < (longlong)uVar22);
                pdVar10 = pdVar15;
                pdVar4 = local_100;
                for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                pdVar10 = pdVar15 + (uVar22 - 1) * 0x10;
                pdVar4 = pdVar15;
                for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                pdVar10 = local_100;
                pdVar4 = pdVar15 + (uVar22 - 1) * 0x10;
                for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                bVar23 = 2 < uVar22;
                uVar22 = uVar22 - 1;
              } while (bVar23);
            }
          }
        }
LAB_14749a3d3:
        plVar19 = plVar19 + -3;
      } while (&local_408 <= plVar19);
    }
    break;
  case 3:
    iVar6 = (int)param_2[1];
    if (1 < (longlong)iVar6) {
      lVar1 = *param_2;
      memset(local_3f8,0,0x2f0);
      local_400 = (longlong)iVar6 * 0x80 + lVar1 + -0x80;
      local_408 = lVar1;
      fVar24 = logf((float)iVar6);
      local_3f8[0] = (int)(longlong)(fVar24 + fVar24);
      plVar19 = &local_408;
      do {
        pdVar15 = (double *)*plVar19;
        pdVar10 = (double *)plVar19[1];
        iVar6 = (int)plVar19[2];
        iVar20 = (int)((ulonglong)((longlong)pdVar10 - (longlong)pdVar15) >> 7);
        uVar16 = iVar20 + 1;
        pdVar4 = pdVar10;
        pdVar3 = pdVar15;
        if (iVar6 != 0) {
LAB_147498c35:
          if (8 < (int)uVar16) {
            pdVar7 = pdVar15 + (ulonglong)(uVar16 >> 1) * 0x10;
            pdVar5 = local_100;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar5 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar5 = pdVar5 + 1;
            }
            pdVar7 = pdVar15;
            pdVar5 = pdVar15 + (ulonglong)(uVar16 >> 1) * 0x10;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar5 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar5 = pdVar5 + 1;
            }
            pdVar7 = local_100;
            pdVar5 = pdVar15;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar5 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar5 = pdVar5 + 1;
            }
            pdVar7 = pdVar10 + 0x10;
            pdVar5 = pdVar15;
            do {
              pdVar9 = pdVar5 + 0x10;
              pdVar11 = pdVar5 + 0x10;
              do {
                pdVar5 = pdVar11;
                pdVar18 = pdVar9;
                if (pdVar10 < pdVar5) break;
                pdVar9 = pdVar18 + 0x10;
                pdVar11 = pdVar5 + 0x10;
              } while (SQRT(pdVar15[0xf] * pdVar15[0xf] +
                            pdVar15[0xd] * pdVar15[0xd] + pdVar15[0xe] * pdVar15[0xe]) <=
                       SQRT(pdVar5[0xf] * pdVar5[0xf] +
                            pdVar5[0xd] * pdVar5[0xd] + pdVar5[0xe] * pdVar5[0xe]));
              pdVar9 = pdVar7 + -0x20;
              do {
                pdVar11 = pdVar7;
                pdVar21 = pdVar9;
                pdVar7 = pdVar11 + -0x10;
                if (pdVar7 <= pdVar15) break;
                pdVar9 = pdVar21 + -0x10;
              } while (SQRT(pdVar11[-1] * pdVar11[-1] +
                            pdVar11[-3] * pdVar11[-3] + pdVar11[-2] * pdVar11[-2]) <=
                       SQRT(pdVar15[0xf] * pdVar15[0xf] +
                            pdVar15[0xd] * pdVar15[0xd] + pdVar15[0xe] * pdVar15[0xe]));
              lVar1 = 0x10;
              pdVar9 = pdVar15;
              pdVar8 = pdVar5;
              pdVar12 = local_100;
              if (pdVar7 < pdVar5) goto code_r0x000147498daf;
              for (; lVar1 != 0; lVar1 = lVar1 + -1) {
                *pdVar12 = *pdVar8;
                pdVar8 = pdVar8 + 1;
                pdVar12 = pdVar12 + 1;
              }
              pdVar9 = pdVar7;
              pdVar11 = pdVar5;
              for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                *pdVar11 = *pdVar9;
                pdVar9 = pdVar9 + 1;
                pdVar11 = pdVar11 + 1;
              }
              pdVar9 = local_100;
              pdVar11 = pdVar7;
              for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                *pdVar11 = *pdVar9;
                pdVar9 = pdVar9 + 1;
                pdVar11 = pdVar11 + 1;
              }
            } while( true );
          }
          while (pdVar3 = pdVar15, pdVar4 = pdVar15, pdVar15 < pdVar10) {
            while (pdVar7 = pdVar3, pdVar4 = pdVar4 + 0x10, pdVar4 <= pdVar10) {
              pdVar3 = pdVar4;
              if (SQRT(pdVar7[0xf] * pdVar7[0xf] +
                       pdVar7[0xd] * pdVar7[0xd] + pdVar7[0xe] * pdVar7[0xe]) <=
                  SQRT(pdVar4[0xf] * pdVar4[0xf] +
                       pdVar4[0xd] * pdVar4[0xd] + pdVar4[0xe] * pdVar4[0xe])) {
                pdVar3 = pdVar7;
              }
            }
            pdVar4 = pdVar10 + -0x10;
            pdVar3 = pdVar7;
            pdVar5 = local_100;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar5 = *pdVar3;
              pdVar3 = pdVar3 + 1;
              pdVar5 = pdVar5 + 1;
            }
            pdVar3 = pdVar10;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar7 = *pdVar3;
              pdVar3 = pdVar3 + 1;
              pdVar7 = pdVar7 + 1;
            }
            pdVar3 = local_100;
            pdVar7 = pdVar10;
            for (lVar1 = 0x10; pdVar10 = pdVar4, lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar7 = *pdVar3;
              pdVar3 = pdVar3 + 1;
              pdVar7 = pdVar7 + 1;
            }
          }
          goto LAB_147499282;
        }
LAB_147498e5c:
        if (uVar16 != 0) {
          iVar20 = (iVar20 - (iVar20 + -1 >> 0x1f)) + -1 >> 1;
          iVar6 = iVar20;
joined_r0x000147498e84:
          do {
            iVar14 = iVar6 * 2 + 1;
            if (iVar14 < (int)uVar16) {
              iVar13 = iVar6 * 2 + 2;
              if (iVar13 < (int)uVar16) {
                lVar17 = (longlong)iVar13;
                lVar1 = (longlong)iVar14;
                if (SQRT(pdVar15[lVar17 * 0x10 + 0xf] * pdVar15[lVar17 * 0x10 + 0xf] +
                         pdVar15[lVar17 * 0x10 + 0xd] * pdVar15[lVar17 * 0x10 + 0xd] +
                         pdVar15[lVar17 * 0x10 + 0xe] * pdVar15[lVar17 * 0x10 + 0xe]) <=
                    SQRT(pdVar15[lVar1 * 0x10 + 0xf] * pdVar15[lVar1 * 0x10 + 0xf] +
                         pdVar15[lVar1 * 0x10 + 0xd] * pdVar15[lVar1 * 0x10 + 0xd] +
                         pdVar15[lVar1 * 0x10 + 0xe] * pdVar15[lVar1 * 0x10 + 0xe])) {
                  iVar14 = iVar13;
                }
              }
              lVar17 = (longlong)iVar6;
              lVar1 = (longlong)iVar14;
              if (SQRT(pdVar15[lVar1 * 0x10 + 0xf] * pdVar15[lVar1 * 0x10 + 0xf] +
                       pdVar15[lVar1 * 0x10 + 0xd] * pdVar15[lVar1 * 0x10 + 0xd] +
                       pdVar15[lVar1 * 0x10 + 0xe] * pdVar15[lVar1 * 0x10 + 0xe]) <
                  SQRT(pdVar15[lVar17 * 0x10 + 0xf] * pdVar15[lVar17 * 0x10 + 0xf] +
                       pdVar15[lVar17 * 0x10 + 0xd] * pdVar15[lVar17 * 0x10 + 0xd] +
                       pdVar15[lVar17 * 0x10 + 0xe] * pdVar15[lVar17 * 0x10 + 0xe])) {
                pdVar10 = pdVar15 + lVar17 * 0x10;
                pdVar4 = local_100;
                for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                pdVar10 = pdVar15 + lVar1 * 0x10;
                pdVar4 = pdVar15 + lVar17 * 0x10;
                for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                pdVar10 = local_100;
                pdVar4 = pdVar15 + lVar1 * 0x10;
                for (lVar17 = 0x10; iVar6 = iVar14, lVar17 != 0; lVar17 = lVar17 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                goto joined_r0x000147498e84;
              }
            }
            bVar23 = iVar20 != 0;
            iVar20 = iVar20 + -1;
            iVar6 = iVar20;
          } while (bVar23);
          if (1 < (int)uVar16) {
            pdVar10 = pdVar15;
            pdVar4 = local_100;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar4 = *pdVar10;
              pdVar10 = pdVar10 + 1;
              pdVar4 = pdVar4 + 1;
            }
            pdVar10 = pdVar15 + ((ulonglong)uVar16 - 1) * 0x10;
            pdVar4 = pdVar15;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar4 = *pdVar10;
              pdVar10 = pdVar10 + 1;
              pdVar4 = pdVar4 + 1;
            }
            pdVar10 = local_100;
            pdVar4 = pdVar15 + ((ulonglong)uVar16 - 1) * 0x10;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar4 = *pdVar10;
              pdVar10 = pdVar10 + 1;
              pdVar4 = pdVar4 + 1;
            }
            uVar22 = (ulonglong)uVar16 - 1;
            if (uVar16 != 2) {
              do {
                iVar6 = 0;
                iVar14 = 1;
                iVar20 = 0;
                do {
                  lVar1 = (longlong)(iVar6 + 2);
                  iVar13 = iVar14;
                  if ((lVar1 < (longlong)uVar22) &&
                     (lVar17 = (longlong)iVar14,
                     SQRT(pdVar15[lVar1 * 0x10 + 0xf] * pdVar15[lVar1 * 0x10 + 0xf] +
                          pdVar15[lVar1 * 0x10 + 0xd] * pdVar15[lVar1 * 0x10 + 0xd] +
                          pdVar15[lVar1 * 0x10 + 0xe] * pdVar15[lVar1 * 0x10 + 0xe]) <=
                     SQRT(pdVar15[lVar17 * 0x10 + 0xf] * pdVar15[lVar17 * 0x10 + 0xf] +
                          pdVar15[lVar17 * 0x10 + 0xd] * pdVar15[lVar17 * 0x10 + 0xd] +
                          pdVar15[lVar17 * 0x10 + 0xe] * pdVar15[lVar17 * 0x10 + 0xe]))) {
                    iVar13 = iVar6 + 2;
                  }
                  lVar17 = (longlong)iVar20;
                  lVar1 = (longlong)iVar13;
                  if (SQRT(pdVar15[lVar17 * 0x10 + 0xf] * pdVar15[lVar17 * 0x10 + 0xf] +
                           pdVar15[lVar17 * 0x10 + 0xd] * pdVar15[lVar17 * 0x10 + 0xd] +
                           pdVar15[lVar17 * 0x10 + 0xe] * pdVar15[lVar17 * 0x10 + 0xe]) <=
                      SQRT(pdVar15[lVar1 * 0x10 + 0xf] * pdVar15[lVar1 * 0x10 + 0xf] +
                           pdVar15[lVar1 * 0x10 + 0xd] * pdVar15[lVar1 * 0x10 + 0xd] +
                           pdVar15[lVar1 * 0x10 + 0xe] * pdVar15[lVar1 * 0x10 + 0xe])) break;
                  pdVar10 = pdVar15 + lVar17 * 0x10;
                  pdVar4 = local_100;
                  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
                    *pdVar4 = *pdVar10;
                    pdVar10 = pdVar10 + 1;
                    pdVar4 = pdVar4 + 1;
                  }
                  pdVar10 = pdVar15 + lVar1 * 0x10;
                  pdVar4 = pdVar15 + lVar17 * 0x10;
                  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
                    *pdVar4 = *pdVar10;
                    pdVar10 = pdVar10 + 1;
                    pdVar4 = pdVar4 + 1;
                  }
                  pdVar10 = local_100;
                  pdVar4 = pdVar15 + lVar1 * 0x10;
                  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
                    *pdVar4 = *pdVar10;
                    pdVar10 = pdVar10 + 1;
                    pdVar4 = pdVar4 + 1;
                  }
                  iVar6 = iVar13 * 2;
                  iVar14 = iVar13 * 2 + 1;
                  iVar20 = iVar13;
                } while ((longlong)iVar14 < (longlong)uVar22);
                pdVar10 = pdVar15;
                pdVar4 = local_100;
                for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                pdVar10 = pdVar15 + (uVar22 - 1) * 0x10;
                pdVar4 = pdVar15;
                for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                pdVar10 = local_100;
                pdVar4 = pdVar15 + (uVar22 - 1) * 0x10;
                for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                bVar23 = 2 < uVar22;
                uVar22 = uVar22 - 1;
              } while (bVar23);
            }
          }
        }
LAB_147499282:
        plVar19 = plVar19 + -3;
      } while (&local_408 <= plVar19);
    }
    break;
  case 4:
    iVar6 = (int)param_2[1];
    if (1 < (longlong)iVar6) {
      dVar26 = *(double *)(param_4 + 0x30);
      lVar1 = *param_2;
      dVar29 = *(double *)(param_4 + 0x20);
      dVar30 = *(double *)(param_4 + 0x28);
      memset(local_3f8,0,0x2f0);
      local_400 = (longlong)iVar6 * 0x80 + lVar1 + -0x80;
      local_408 = lVar1;
      fVar24 = logf((float)iVar6);
      local_3f8[0] = (int)(longlong)(fVar24 + fVar24);
      plVar19 = &local_408;
      do {
        pdVar15 = (double *)*plVar19;
        pdVar10 = (double *)plVar19[1];
        iVar6 = (int)plVar19[2];
        iVar20 = (int)((ulonglong)((longlong)pdVar10 - (longlong)pdVar15) >> 7);
        uVar16 = iVar20 + 1;
        pdVar4 = pdVar10;
        pdVar3 = pdVar15;
        if (iVar6 != 0) {
LAB_147499335:
          if (8 < (int)uVar16) {
            pdVar7 = pdVar15 + (ulonglong)(uVar16 >> 1) * 0x10;
            pdVar5 = local_100;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar5 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar5 = pdVar5 + 1;
            }
            pdVar7 = pdVar15;
            pdVar5 = pdVar15 + (ulonglong)(uVar16 >> 1) * 0x10;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar5 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar5 = pdVar5 + 1;
            }
            pdVar7 = local_100;
            pdVar5 = pdVar15;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar5 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar5 = pdVar5 + 1;
            }
            pdVar7 = pdVar10 + 0x10;
            pdVar5 = pdVar15;
            do {
              pdVar9 = pdVar5 + 0x10;
              pdVar11 = pdVar5 + 0x10;
              do {
                pdVar5 = pdVar11;
                pdVar18 = pdVar9;
                if (pdVar10 < pdVar5) break;
                pdVar9 = pdVar18 + 0x10;
                pdVar11 = pdVar5 + 0x10;
              } while ((float)((dVar26 - pdVar5[2]) * (dVar26 - pdVar5[2]) +
                              (dVar30 - pdVar5[1]) * (dVar30 - pdVar5[1]) +
                              (dVar29 - *pdVar5) * (dVar29 - *pdVar5)) <=
                       (float)((dVar26 - pdVar15[2]) * (dVar26 - pdVar15[2]) +
                              (dVar30 - pdVar15[1]) * (dVar30 - pdVar15[1]) +
                              (dVar29 - *pdVar15) * (dVar29 - *pdVar15)));
              pdVar9 = pdVar7 + -0x20;
              do {
                pdVar11 = pdVar7;
                pdVar21 = pdVar9;
                pdVar7 = pdVar11 + -0x10;
                if (pdVar7 <= pdVar15) break;
                pdVar9 = pdVar21 + -0x10;
              } while ((float)((dVar26 - pdVar15[2]) * (dVar26 - pdVar15[2]) +
                              (dVar30 - pdVar15[1]) * (dVar30 - pdVar15[1]) +
                              (dVar29 - *pdVar15) * (dVar29 - *pdVar15)) <=
                       (float)((dVar26 - pdVar11[-0xe]) * (dVar26 - pdVar11[-0xe]) +
                              (dVar30 - pdVar11[-0xf]) * (dVar30 - pdVar11[-0xf]) +
                              (dVar29 - *pdVar7) * (dVar29 - *pdVar7)));
              lVar1 = 0x10;
              pdVar9 = pdVar15;
              pdVar8 = pdVar5;
              pdVar12 = local_100;
              if (pdVar7 < pdVar5) goto code_r0x0001474994d9;
              for (; lVar1 != 0; lVar1 = lVar1 + -1) {
                *pdVar12 = *pdVar8;
                pdVar8 = pdVar8 + 1;
                pdVar12 = pdVar12 + 1;
              }
              pdVar9 = pdVar7;
              pdVar11 = pdVar5;
              for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                *pdVar11 = *pdVar9;
                pdVar9 = pdVar9 + 1;
                pdVar11 = pdVar11 + 1;
              }
              pdVar9 = local_100;
              pdVar11 = pdVar7;
              for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                *pdVar11 = *pdVar9;
                pdVar9 = pdVar9 + 1;
                pdVar11 = pdVar11 + 1;
              }
            } while( true );
          }
          if (pdVar15 < pdVar10) {
            do {
              pdVar4 = pdVar15;
              if (pdVar15 + 0x10 <= pdVar10) {
                dVar25 = *pdVar15;
                pdVar3 = pdVar15 + 0x10;
                do {
                  dVar31 = dVar29 - *pdVar3;
                  if ((float)((dVar26 - pdVar4[2]) * (dVar26 - pdVar4[2]) +
                             (dVar30 - pdVar4[1]) * (dVar30 - pdVar4[1]) +
                             (dVar29 - dVar25) * (dVar29 - dVar25)) <
                      (float)((dVar26 - pdVar3[2]) * (dVar26 - pdVar3[2]) +
                             (dVar30 - pdVar3[1]) * (dVar30 - pdVar3[1]) + dVar31 * dVar31)) {
                    pdVar4 = pdVar3;
                    dVar25 = *pdVar3;
                  }
                  pdVar3 = pdVar3 + 0x10;
                } while (pdVar3 <= pdVar10);
              }
              pdVar3 = pdVar10 + -0x10;
              pdVar7 = pdVar4;
              pdVar5 = local_100;
              for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                *pdVar5 = *pdVar7;
                pdVar7 = pdVar7 + 1;
                pdVar5 = pdVar5 + 1;
              }
              pdVar7 = pdVar10;
              for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                *pdVar4 = *pdVar7;
                pdVar7 = pdVar7 + 1;
                pdVar4 = pdVar4 + 1;
              }
              pdVar4 = local_100;
              for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                *pdVar10 = *pdVar4;
                pdVar4 = pdVar4 + 1;
                pdVar10 = pdVar10 + 1;
              }
              pdVar10 = pdVar3;
            } while (pdVar15 < pdVar3);
          }
          goto LAB_147499a1d;
        }
LAB_147499586:
        if (uVar16 != 0) {
          iVar20 = (iVar20 - (iVar20 + -1 >> 0x1f)) + -1 >> 1;
          iVar6 = iVar20;
joined_r0x0001474995ae:
          do {
            iVar14 = iVar6 * 2 + 1;
            if (iVar14 < (int)uVar16) {
              iVar13 = iVar6 * 2 + 2;
              if (iVar13 < (int)uVar16) {
                lVar1 = (longlong)iVar13;
                lVar17 = (longlong)iVar14;
                if ((float)((dVar26 - pdVar15[lVar17 * 0x10 + 2]) *
                            (dVar26 - pdVar15[lVar17 * 0x10 + 2]) +
                           (dVar30 - pdVar15[lVar17 * 0x10 + 1]) *
                           (dVar30 - pdVar15[lVar17 * 0x10 + 1]) +
                           (dVar29 - pdVar15[lVar17 * 0x10]) * (dVar29 - pdVar15[lVar17 * 0x10])) <=
                    (float)((dVar26 - pdVar15[lVar1 * 0x10 + 2]) *
                            (dVar26 - pdVar15[lVar1 * 0x10 + 2]) +
                           (dVar30 - pdVar15[lVar1 * 0x10 + 1]) *
                           (dVar30 - pdVar15[lVar1 * 0x10 + 1]) +
                           (dVar29 - pdVar15[lVar1 * 0x10]) * (dVar29 - pdVar15[lVar1 * 0x10]))) {
                  iVar14 = iVar13;
                }
              }
              lVar17 = (longlong)iVar6;
              lVar1 = (longlong)iVar14;
              if ((float)((dVar26 - pdVar15[lVar17 * 0x10 + 2]) *
                          (dVar26 - pdVar15[lVar17 * 0x10 + 2]) +
                         (dVar30 - pdVar15[lVar17 * 0x10 + 1]) *
                         (dVar30 - pdVar15[lVar17 * 0x10 + 1]) +
                         (dVar29 - pdVar15[lVar17 * 0x10]) * (dVar29 - pdVar15[lVar17 * 0x10])) <
                  (float)((dVar26 - pdVar15[lVar1 * 0x10 + 2]) *
                          (dVar26 - pdVar15[lVar1 * 0x10 + 2]) +
                         (dVar30 - pdVar15[lVar1 * 0x10 + 1]) * (dVar30 - pdVar15[lVar1 * 0x10 + 1])
                         + (dVar29 - pdVar15[lVar1 * 0x10]) * (dVar29 - pdVar15[lVar1 * 0x10]))) {
                pdVar10 = pdVar15 + lVar17 * 0x10;
                pdVar4 = local_100;
                for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                pdVar10 = pdVar15 + lVar1 * 0x10;
                pdVar4 = pdVar15 + lVar17 * 0x10;
                for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                pdVar10 = local_100;
                pdVar4 = pdVar15 + lVar1 * 0x10;
                for (lVar17 = 0x10; iVar6 = iVar14, lVar17 != 0; lVar17 = lVar17 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                goto joined_r0x0001474995ae;
              }
            }
            bVar23 = iVar20 != 0;
            iVar20 = iVar20 + -1;
            iVar6 = iVar20;
          } while (bVar23);
          if (1 < (int)uVar16) {
            pdVar10 = pdVar15;
            pdVar4 = local_100;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar4 = *pdVar10;
              pdVar10 = pdVar10 + 1;
              pdVar4 = pdVar4 + 1;
            }
            pdVar10 = pdVar15 + ((ulonglong)uVar16 - 1) * 0x10;
            pdVar4 = pdVar15;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar4 = *pdVar10;
              pdVar10 = pdVar10 + 1;
              pdVar4 = pdVar4 + 1;
            }
            pdVar10 = local_100;
            pdVar4 = pdVar15 + ((ulonglong)uVar16 - 1) * 0x10;
            for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
              *pdVar4 = *pdVar10;
              pdVar10 = pdVar10 + 1;
              pdVar4 = pdVar4 + 1;
            }
            uVar22 = (ulonglong)uVar16 - 1;
            if (uVar16 != 2) {
              do {
                iVar6 = 0;
                iVar14 = 1;
                iVar20 = 0;
                do {
                  lVar1 = (longlong)(iVar6 + 2);
                  iVar13 = iVar14;
                  if ((lVar1 < (longlong)uVar22) &&
                     (lVar17 = (longlong)iVar14,
                     (float)((dVar26 - pdVar15[lVar17 * 0x10 + 2]) *
                             (dVar26 - pdVar15[lVar17 * 0x10 + 2]) +
                            (dVar30 - pdVar15[lVar17 * 0x10 + 1]) *
                            (dVar30 - pdVar15[lVar17 * 0x10 + 1]) +
                            (dVar29 - pdVar15[lVar17 * 0x10]) * (dVar29 - pdVar15[lVar17 * 0x10]))
                     <= (float)((dVar26 - pdVar15[lVar1 * 0x10 + 2]) *
                                (dVar26 - pdVar15[lVar1 * 0x10 + 2]) +
                               (dVar30 - pdVar15[lVar1 * 0x10 + 1]) *
                               (dVar30 - pdVar15[lVar1 * 0x10 + 1]) +
                               (dVar29 - pdVar15[lVar1 * 0x10]) * (dVar29 - pdVar15[lVar1 * 0x10])))
                     ) {
                    iVar13 = iVar6 + 2;
                  }
                  lVar17 = (longlong)iVar20;
                  lVar1 = (longlong)iVar13;
                  if ((float)((dVar26 - pdVar15[lVar1 * 0x10 + 2]) *
                              (dVar26 - pdVar15[lVar1 * 0x10 + 2]) +
                             (dVar30 - pdVar15[lVar1 * 0x10 + 1]) *
                             (dVar30 - pdVar15[lVar1 * 0x10 + 1]) +
                             (dVar29 - pdVar15[lVar1 * 0x10]) * (dVar29 - pdVar15[lVar1 * 0x10])) <=
                      (float)((dVar26 - pdVar15[lVar17 * 0x10 + 2]) *
                              (dVar26 - pdVar15[lVar17 * 0x10 + 2]) +
                             (dVar30 - pdVar15[lVar17 * 0x10 + 1]) *
                             (dVar30 - pdVar15[lVar17 * 0x10 + 1]) +
                             (dVar29 - pdVar15[lVar17 * 0x10]) * (dVar29 - pdVar15[lVar17 * 0x10])))
                  break;
                  pdVar10 = pdVar15 + lVar17 * 0x10;
                  pdVar4 = local_100;
                  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
                    *pdVar4 = *pdVar10;
                    pdVar10 = pdVar10 + 1;
                    pdVar4 = pdVar4 + 1;
                  }
                  pdVar10 = pdVar15 + lVar1 * 0x10;
                  pdVar4 = pdVar15 + lVar17 * 0x10;
                  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
                    *pdVar4 = *pdVar10;
                    pdVar10 = pdVar10 + 1;
                    pdVar4 = pdVar4 + 1;
                  }
                  pdVar10 = local_100;
                  pdVar4 = pdVar15 + lVar1 * 0x10;
                  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
                    *pdVar4 = *pdVar10;
                    pdVar10 = pdVar10 + 1;
                    pdVar4 = pdVar4 + 1;
                  }
                  iVar6 = iVar13 * 2;
                  iVar14 = iVar13 * 2 + 1;
                  iVar20 = iVar13;
                } while ((longlong)iVar14 < (longlong)uVar22);
                pdVar10 = pdVar15;
                pdVar4 = local_100;
                for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                pdVar10 = pdVar15 + (uVar22 - 1) * 0x10;
                pdVar4 = pdVar15;
                for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                pdVar10 = local_100;
                pdVar4 = pdVar15 + (uVar22 - 1) * 0x10;
                for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *pdVar4 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar4 = pdVar4 + 1;
                }
                bVar23 = 2 < uVar22;
                uVar22 = uVar22 - 1;
              } while (bVar23);
            }
          }
        }
LAB_147499a1d:
        plVar19 = plVar19 + -3;
      } while (&local_408 <= plVar19);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001474994d9:
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar12 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar12 = pdVar12 + 1;
  }
  pdVar9 = pdVar7;
  pdVar8 = pdVar15;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar8 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar8 = pdVar8 + 1;
  }
  pdVar9 = local_100;
  pdVar8 = pdVar7;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar8 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar8 = pdVar8 + 1;
  }
  iVar6 = iVar6 + -1;
  pdVar11 = pdVar11 + -0x20;
  if ((longlong)pdVar21 - (longlong)pdVar3 < (longlong)pdVar4 - (longlong)pdVar18) {
    if (pdVar5 < pdVar10) {
      *plVar19 = (longlong)pdVar5;
      plVar19[1] = (longlong)pdVar10;
      *(int *)(plVar19 + 2) = iVar6;
      plVar19 = plVar19 + 3;
    }
    pdVar18 = pdVar15;
    if (pdVar7 <= pdVar15 + 0x10) goto LAB_147499a1d;
  }
  else {
    if (pdVar15 + 0x10 < pdVar7) {
      *plVar19 = (longlong)pdVar15;
      plVar19[1] = (longlong)pdVar11;
      *(int *)(plVar19 + 2) = iVar6;
      plVar19 = plVar19 + 3;
    }
    pdVar15 = pdVar5;
    pdVar11 = pdVar10;
    pdVar21 = pdVar10;
    if (pdVar10 <= pdVar5) goto LAB_147499a1d;
  }
  iVar20 = (int)((ulonglong)((longlong)pdVar21 - (longlong)pdVar18) >> 7);
  uVar16 = iVar20 + 1;
  pdVar10 = pdVar11;
  pdVar4 = pdVar21;
  pdVar3 = pdVar18;
  if (iVar6 == 0) goto LAB_147499586;
  goto LAB_147499335;
code_r0x000147498daf:
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar12 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar12 = pdVar12 + 1;
  }
  pdVar9 = pdVar7;
  pdVar8 = pdVar15;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar8 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar8 = pdVar8 + 1;
  }
  pdVar9 = local_100;
  pdVar8 = pdVar7;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar8 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar8 = pdVar8 + 1;
  }
  iVar6 = iVar6 + -1;
  pdVar11 = pdVar11 + -0x20;
  if ((longlong)pdVar21 - (longlong)pdVar3 < (longlong)pdVar4 - (longlong)pdVar18) {
    if (pdVar5 < pdVar10) {
      *plVar19 = (longlong)pdVar5;
      plVar19[1] = (longlong)pdVar10;
      *(int *)(plVar19 + 2) = iVar6;
      plVar19 = plVar19 + 3;
    }
    pdVar18 = pdVar15;
    if (pdVar7 <= pdVar15 + 0x10) goto LAB_147499282;
  }
  else {
    if (pdVar15 + 0x10 < pdVar7) {
      *plVar19 = (longlong)pdVar15;
      plVar19[1] = (longlong)pdVar11;
      *(int *)(plVar19 + 2) = iVar6;
      plVar19 = plVar19 + 3;
    }
    pdVar15 = pdVar5;
    pdVar11 = pdVar10;
    pdVar21 = pdVar10;
    if (pdVar10 <= pdVar5) goto LAB_147499282;
  }
  iVar20 = (int)((ulonglong)((longlong)pdVar21 - (longlong)pdVar18) >> 7);
  uVar16 = iVar20 + 1;
  pdVar10 = pdVar11;
  pdVar4 = pdVar21;
  pdVar3 = pdVar18;
  if (iVar6 == 0) goto LAB_147498e5c;
  goto LAB_147498c35;
code_r0x000147499d03:
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar12 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar12 = pdVar12 + 1;
  }
  pdVar9 = pdVar7;
  pdVar8 = pdVar15;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar8 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar8 = pdVar8 + 1;
  }
  pdVar9 = local_100;
  pdVar8 = pdVar7;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar8 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar8 = pdVar8 + 1;
  }
  iVar6 = iVar6 + -1;
  pdVar11 = pdVar11 + -0x20;
  if ((longlong)pdVar21 - (longlong)pdVar3 < (longlong)pdVar4 - (longlong)pdVar18) {
    if (pdVar5 < pdVar10) {
      *plVar19 = (longlong)pdVar5;
      plVar19[1] = (longlong)pdVar10;
      *(int *)(plVar19 + 2) = iVar6;
      plVar19 = plVar19 + 3;
    }
    pdVar18 = pdVar15;
    if (pdVar7 <= pdVar15 + 0x10) goto LAB_14749a3d3;
  }
  else {
    if (pdVar15 + 0x10 < pdVar7) {
      *plVar19 = (longlong)pdVar15;
      plVar19[1] = (longlong)pdVar11;
      *(int *)(plVar19 + 2) = iVar6;
      plVar19 = plVar19 + 3;
    }
    pdVar15 = pdVar5;
    pdVar11 = pdVar10;
    pdVar21 = pdVar10;
    if (pdVar10 <= pdVar5) goto LAB_14749a3d3;
  }
  iVar20 = (int)((ulonglong)((longlong)pdVar21 - (longlong)pdVar18) >> 7);
  uVar16 = iVar20 + 1;
  pdVar10 = pdVar11;
  pdVar4 = pdVar21;
  pdVar3 = pdVar18;
  if (iVar6 == 0) goto LAB_147499db0;
  goto LAB_147499abe;
code_r0x000147498821:
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar12 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar12 = pdVar12 + 1;
  }
  pdVar9 = pdVar7;
  pdVar8 = pdVar15;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar8 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar8 = pdVar8 + 1;
  }
  pdVar9 = local_100;
  pdVar8 = pdVar7;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar8 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar8 = pdVar8 + 1;
  }
  iVar6 = iVar6 + -1;
  pdVar11 = pdVar11 + -0x20;
  if ((longlong)pdVar21 - (longlong)pdVar3 < (longlong)pdVar4 - (longlong)pdVar18) {
    if (pdVar5 < pdVar10) {
      *plVar19 = (longlong)pdVar5;
      plVar19[1] = (longlong)pdVar10;
      *(int *)(plVar19 + 2) = iVar6;
      plVar19 = plVar19 + 3;
    }
    pdVar18 = pdVar15;
    if (pdVar7 <= pdVar15 + 0x10) goto LAB_147498b94;
  }
  else {
    if (pdVar15 + 0x10 < pdVar7) {
      *plVar19 = (longlong)pdVar15;
      plVar19[1] = (longlong)pdVar11;
      *(int *)(plVar19 + 2) = iVar6;
      plVar19 = plVar19 + 3;
    }
    pdVar15 = pdVar5;
    pdVar11 = pdVar10;
    pdVar21 = pdVar10;
    if (pdVar10 <= pdVar5) goto LAB_147498b94;
  }
  iVar20 = (int)((ulonglong)((longlong)pdVar21 - (longlong)pdVar18) >> 7);
  uVar16 = iVar20 + 1;
  pdVar10 = pdVar11;
  pdVar4 = pdVar21;
  pdVar3 = pdVar18;
  if (iVar6 == 0) goto LAB_1474988ce;
  goto LAB_14749872c;
}



// FUNCTION 14749a42c FUN_14749a42c body=448 status=ok
// SIG undefined FUN_14749a42c(void)

void FUN_14749a42c(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  double *pdVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_1474ac012(plVar1);
  }
  piVar9 = (int *)param_1[0x10];
  lVar8 = param_3[1];
  if ((longlong)(int)lVar8 != 0) {
    fVar14 = (float)piVar9[2] * (float)piVar9[2];
    lVar5 = *param_3;
    lVar10 = 0;
    do {
      if ((((float)piVar9[1] <= 0.0) ||
          (dVar7 = (double)(float)piVar9[1], pdVar2 = (double *)(lVar5 + 0x18 + lVar10),
          dVar7 < *pdVar2 || dVar7 == *pdVar2)) &&
         ((fVar14 <= 0.0 ||
          (dVar12 = *(double *)(param_2 + 0x20) - *(double *)(lVar5 + lVar10),
          dVar13 = *(double *)(param_2 + 0x28) - *(double *)(lVar5 + 8 + lVar10),
          dVar7 = *(double *)(param_2 + 0x30) - *(double *)(lVar5 + 0x10 + lVar10),
          (float)(dVar7 * dVar7 + dVar13 * dVar13 + dVar12 * dVar12) <= fVar14)))) {
        pdVar2 = (double *)(lVar5 + 0x18 + lVar10);
        local_78 = pdVar2[-1];
        local_88 = *(undefined4 *)(pdVar2 + -3);
        uStack_84 = *(undefined4 *)((longlong)pdVar2 + -0x14);
        uStack_80 = *(undefined4 *)(pdVar2 + -2);
        uStack_7c = *(undefined4 *)((longlong)pdVar2 + -0xc);
        dVar7 = *pdVar2;
        iVar4 = (int)param_1[3];
        *(uint *)(param_1 + 3) = iVar4 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar4 + 1U) {
          FUN_1474ac042(plVar1,iVar4);
        }
        lVar6 = param_1[2];
        lVar11 = (longlong)iVar4 * 0x20;
        *(double *)(lVar6 + 0x10 + lVar11) = local_78;
        puVar3 = (undefined4 *)(lVar6 + lVar11);
        *puVar3 = local_88;
        puVar3[1] = uStack_84;
        puVar3[2] = uStack_80;
        puVar3[3] = uStack_7c;
        *(float *)(lVar6 + 0x18 + lVar11) = (float)dVar7;
        *(undefined4 *)(lVar6 + 0x1c + lVar11) = 0xffffffff;
        piVar9 = (int *)param_1[0x10];
        if ((0 < *piVar9) && ((int)param_1[3] == *piVar9)) break;
      }
      lVar10 = lVar10 + 0x58;
    } while ((longlong)(int)lVar8 * 0x58 - lVar10 != 0);
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014749a5d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,plVar1,(char)piVar9[3],param_2);
  return;
}



// FUNCTION 14749a5ee FUN_14749a5ee body=3620 status=ok
// SIG undefined FUN_14749a5ee(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14749a5ee(undefined8 param_1,longlong *param_2,char param_3,longlong param_4)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double *pdVar12;
  longlong *plVar13;
  double *pdVar14;
  double *pdVar15;
  longlong lVar16;
  int iVar17;
  double *pdVar18;
  double *pdVar19;
  ulonglong uVar20;
  double *pdVar21;
  double *pdVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  double *pdVar27;
  double *pdVar28;
  double *pdVar29;
  int iVar30;
  bool bVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  longlong local_390;
  undefined4 local_388 [188];
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (param_3 == '\x02') {
    iVar23 = (int)param_2[1];
    if (1 < (longlong)iVar23) {
      dVar2 = *(double *)(param_4 + 0x30);
      lVar16 = *param_2;
      dVar3 = *(double *)(param_4 + 0x20);
      dVar4 = *(double *)(param_4 + 0x28);
      memset(local_388,0,0x2f0);
      local_390 = (longlong)iVar23 * 0x20 + lVar16 + -0x20;
      local_398 = lVar16;
      fVar32 = logf((float)iVar23);
      local_388[0] = (int)(longlong)(fVar32 + fVar32);
      plVar13 = &local_398;
      do {
        pdVar19 = (double *)*plVar13;
        pdVar18 = (double *)plVar13[1];
        iVar23 = (int)plVar13[2];
        iVar30 = (int)((ulonglong)((longlong)pdVar18 - (longlong)pdVar19) >> 5);
        uVar25 = iVar30 + 1;
        pdVar15 = pdVar19;
        pdVar14 = pdVar19;
        pdVar21 = pdVar18;
        if (iVar23 != 0) {
LAB_14749ac1e:
          if (8 < (int)uVar25) {
            uVar20 = (ulonglong)(uVar25 >> 1);
            dVar5 = pdVar15[uVar20 * 4];
            dVar6 = (pdVar15 + uVar20 * 4)[1];
            dVar7 = pdVar15[uVar20 * 4 + 2];
            dVar8 = (pdVar15 + uVar20 * 4 + 2)[1];
            dVar9 = *pdVar15;
            dVar10 = pdVar15[1];
            dVar11 = pdVar15[3];
            pdVar15[uVar20 * 4 + 2] = pdVar15[2];
            (pdVar15 + uVar20 * 4 + 2)[1] = dVar11;
            pdVar15[uVar20 * 4] = dVar9;
            (pdVar15 + uVar20 * 4)[1] = dVar10;
            pdVar15[2] = dVar7;
            pdVar15[3] = dVar8;
            *pdVar15 = dVar5;
            pdVar15[1] = dVar6;
            pdVar27 = pdVar21 + 4;
            pdVar14 = pdVar15;
            do {
              pdVar12 = pdVar14 + 4;
              pdVar22 = pdVar14 + 4;
              do {
                pdVar14 = pdVar22;
                pdVar29 = pdVar12;
                if (pdVar21 < pdVar14) break;
                pdVar12 = pdVar29 + 4;
                pdVar22 = pdVar14 + 4;
              } while ((float)((dVar2 - pdVar14[2]) * (dVar2 - pdVar14[2]) +
                              (dVar4 - pdVar14[1]) * (dVar4 - pdVar14[1]) +
                              (dVar3 - *pdVar14) * (dVar3 - *pdVar14)) <=
                       (float)((dVar2 - pdVar15[2]) * (dVar2 - pdVar15[2]) +
                              (dVar4 - pdVar15[1]) * (dVar4 - pdVar15[1]) +
                              (dVar3 - *pdVar15) * (dVar3 - *pdVar15)));
              pdVar12 = pdVar27 + -8;
              do {
                pdVar22 = pdVar27;
                pdVar28 = pdVar12;
                pdVar27 = pdVar22 + -4;
                if (pdVar27 <= pdVar15) break;
                pdVar12 = pdVar28 + -4;
              } while ((float)((dVar2 - pdVar15[2]) * (dVar2 - pdVar15[2]) +
                              (dVar4 - pdVar15[1]) * (dVar4 - pdVar15[1]) +
                              (dVar3 - *pdVar15) * (dVar3 - *pdVar15)) <=
                       (float)((dVar2 - pdVar22[-2]) * (dVar2 - pdVar22[-2]) +
                              (dVar4 - pdVar22[-3]) * (dVar4 - pdVar22[-3]) +
                              (dVar3 - *pdVar27) * (dVar3 - *pdVar27)));
              if (pdVar27 < pdVar14) goto LAB_14749adea;
              dVar5 = *pdVar14;
              dVar6 = pdVar14[1];
              dVar7 = pdVar14[2];
              dVar8 = pdVar14[3];
              dVar9 = *pdVar27;
              dVar10 = pdVar22[-3];
              dVar11 = pdVar22[-1];
              pdVar14[2] = pdVar22[-2];
              pdVar14[3] = dVar11;
              *pdVar14 = dVar9;
              pdVar14[1] = dVar10;
              pdVar22[-2] = dVar7;
              pdVar22[-1] = dVar8;
              *pdVar27 = dVar5;
              pdVar22[-3] = dVar6;
            } while( true );
          }
          if (pdVar15 < pdVar21) {
            do {
              pdVar19 = pdVar15;
              if (pdVar15 + 4 <= pdVar21) {
                uVar33 = SUB84(*pdVar15,0);
                uVar34 = (undefined4)((ulonglong)*pdVar15 >> 0x20);
                pdVar18 = pdVar15 + 4;
                do {
                  dVar6 = dVar3 - (double)CONCAT44(uVar34,uVar33);
                  dVar5 = *pdVar18;
                  if ((float)((dVar2 - pdVar19[2]) * (dVar2 - pdVar19[2]) +
                             (dVar4 - pdVar19[1]) * (dVar4 - pdVar19[1]) + dVar6 * dVar6) <
                      (float)((dVar2 - pdVar18[2]) * (dVar2 - pdVar18[2]) +
                             (dVar4 - pdVar18[1]) * (dVar4 - pdVar18[1]) +
                             (dVar3 - dVar5) * (dVar3 - dVar5))) {
                    pdVar19 = pdVar18;
                    uVar33 = SUB84(dVar5,0);
                    uVar34 = (int)((ulonglong)dVar5 >> 0x20);
                  }
                  pdVar18 = pdVar18 + 4;
                } while (pdVar18 <= pdVar21);
              }
              local_98 = *pdVar19;
              uStack_90 = pdVar19[1];
              local_88 = pdVar19[2];
              dStack_80 = pdVar19[3];
              dVar8 = local_98;
              dVar9 = uStack_90;
              dVar5 = *pdVar21;
              dVar6 = pdVar21[1];
              dVar7 = pdVar21[3];
              pdVar19[2] = pdVar21[2];
              pdVar19[3] = dVar7;
              *pdVar19 = dVar5;
              pdVar19[1] = dVar6;
              local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
              uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
              pdVar21[2] = local_88;
              pdVar21[3] = dStack_80;
              *(undefined4 *)pdVar21 = (undefined4)local_98;
              *(undefined4 *)((longlong)pdVar21 + 4) = local_98._4_4_;
              *(undefined4 *)(pdVar21 + 1) = (undefined4)uStack_90;
              *(undefined4 *)((longlong)pdVar21 + 0xc) = uStack_90._4_4_;
              pdVar21 = pdVar21 + -4;
              local_98 = dVar8;
              uStack_90 = dVar9;
            } while (pdVar15 < pdVar21);
          }
          goto LAB_14749b3c2;
        }
LAB_14749aeb8:
        if (uVar25 != 0) {
          iVar23 = (iVar30 - (iVar30 + -1 >> 0x1f)) + -1 >> 1;
          iVar30 = iVar23;
joined_r0x00014749aedf:
          do {
            iVar26 = iVar23 * 2 + 1;
            if (iVar26 < (int)uVar25) {
              iVar17 = iVar23 * 2 + 2;
              if (iVar17 < (int)uVar25) {
                lVar16 = (longlong)iVar17;
                lVar24 = (longlong)iVar26;
                if ((float)((dVar2 - pdVar14[lVar24 * 4 + 2]) * (dVar2 - pdVar14[lVar24 * 4 + 2]) +
                           (dVar4 - pdVar14[lVar24 * 4 + 1]) * (dVar4 - pdVar14[lVar24 * 4 + 1]) +
                           (dVar3 - pdVar14[lVar24 * 4]) * (dVar3 - pdVar14[lVar24 * 4])) <=
                    (float)((dVar2 - pdVar14[lVar16 * 4 + 2]) * (dVar2 - pdVar14[lVar16 * 4 + 2]) +
                           (dVar4 - pdVar14[lVar16 * 4 + 1]) * (dVar4 - pdVar14[lVar16 * 4 + 1]) +
                           (dVar3 - pdVar14[lVar16 * 4]) * (dVar3 - pdVar14[lVar16 * 4]))) {
                  iVar26 = iVar17;
                }
              }
              lVar16 = (longlong)iVar23;
              lVar24 = (longlong)iVar26;
              if ((float)((dVar2 - pdVar14[lVar16 * 4 + 2]) * (dVar2 - pdVar14[lVar16 * 4 + 2]) +
                         (dVar4 - pdVar14[lVar16 * 4 + 1]) * (dVar4 - pdVar14[lVar16 * 4 + 1]) +
                         (dVar3 - pdVar14[lVar16 * 4]) * (dVar3 - pdVar14[lVar16 * 4])) <
                  (float)((dVar2 - pdVar14[lVar24 * 4 + 2]) * (dVar2 - pdVar14[lVar24 * 4 + 2]) +
                         (dVar4 - pdVar14[lVar24 * 4 + 1]) * (dVar4 - pdVar14[lVar24 * 4 + 1]) +
                         (dVar3 - pdVar14[lVar24 * 4]) * (dVar3 - pdVar14[lVar24 * 4]))) {
                pdVar21 = pdVar14 + lVar16 * 4;
                pdVar19 = pdVar14 + lVar24 * 4;
                local_98 = *pdVar21;
                uStack_90 = pdVar21[1];
                local_88 = pdVar21[2];
                dStack_80 = pdVar21[3];
                dVar8 = local_98;
                dVar9 = uStack_90;
                dVar5 = *pdVar19;
                dVar6 = pdVar19[1];
                dVar7 = pdVar19[3];
                pdVar21[2] = pdVar19[2];
                pdVar21[3] = dVar7;
                *pdVar21 = dVar5;
                pdVar21[1] = dVar6;
                local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
                uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
                pdVar19[2] = local_88;
                pdVar19[3] = dStack_80;
                *(undefined4 *)pdVar19 = (undefined4)local_98;
                *(undefined4 *)((longlong)pdVar19 + 4) = local_98._4_4_;
                *(undefined4 *)(pdVar19 + 1) = (undefined4)uStack_90;
                *(undefined4 *)((longlong)pdVar19 + 0xc) = uStack_90._4_4_;
                local_98 = dVar8;
                uStack_90 = dVar9;
                iVar23 = iVar26;
                goto joined_r0x00014749aedf;
              }
            }
            bVar31 = iVar30 != 0;
            iVar23 = iVar30 + -1;
            iVar30 = iVar23;
          } while (bVar31);
          if (1 < (int)uVar25) {
            uVar20 = (ulonglong)uVar25 - 1;
            local_98 = *pdVar14;
            uStack_90 = pdVar14[1];
            local_88 = pdVar14[2];
            dStack_80 = pdVar14[3];
            dVar8 = local_98;
            dVar9 = uStack_90;
            dVar5 = pdVar14[uVar20 * 4];
            dVar6 = (pdVar14 + uVar20 * 4)[1];
            dVar7 = (pdVar14 + uVar20 * 4 + 2)[1];
            pdVar14[2] = pdVar14[uVar20 * 4 + 2];
            pdVar14[3] = dVar7;
            *pdVar14 = dVar5;
            pdVar14[1] = dVar6;
            local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
            uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
            pdVar14[uVar20 * 4 + 2] = local_88;
            (pdVar14 + uVar20 * 4 + 2)[1] = dStack_80;
            pdVar21 = pdVar14 + uVar20 * 4;
            *(undefined4 *)pdVar21 = (undefined4)local_98;
            *(undefined4 *)((longlong)pdVar21 + 4) = local_98._4_4_;
            *(undefined4 *)(pdVar21 + 1) = (undefined4)uStack_90;
            *(undefined4 *)((longlong)pdVar21 + 0xc) = uStack_90._4_4_;
            local_98 = dVar8;
            uStack_90 = dVar9;
            if (uVar25 != 2) {
              do {
                iVar23 = 0;
                iVar26 = 1;
                iVar30 = 0;
                do {
                  lVar16 = (longlong)(iVar23 + 2);
                  iVar17 = iVar26;
                  if ((lVar16 < (longlong)uVar20) &&
                     (lVar24 = (longlong)iVar26,
                     (float)((dVar2 - pdVar14[lVar24 * 4 + 2]) * (dVar2 - pdVar14[lVar24 * 4 + 2]) +
                            (dVar4 - pdVar14[lVar24 * 4 + 1]) * (dVar4 - pdVar14[lVar24 * 4 + 1]) +
                            (dVar3 - pdVar14[lVar24 * 4]) * (dVar3 - pdVar14[lVar24 * 4])) <=
                     (float)((dVar2 - pdVar14[lVar16 * 4 + 2]) * (dVar2 - pdVar14[lVar16 * 4 + 2]) +
                            (dVar4 - pdVar14[lVar16 * 4 + 1]) * (dVar4 - pdVar14[lVar16 * 4 + 1]) +
                            (dVar3 - pdVar14[lVar16 * 4]) * (dVar3 - pdVar14[lVar16 * 4])))) {
                    iVar17 = iVar23 + 2;
                  }
                  lVar24 = (longlong)iVar30;
                  lVar16 = (longlong)iVar17;
                  if ((float)((dVar2 - pdVar14[lVar16 * 4 + 2]) * (dVar2 - pdVar14[lVar16 * 4 + 2])
                             + (dVar4 - pdVar14[lVar16 * 4 + 1]) * (dVar4 - pdVar14[lVar16 * 4 + 1])
                               + (dVar3 - pdVar14[lVar16 * 4]) * (dVar3 - pdVar14[lVar16 * 4])) <=
                      (float)((dVar2 - pdVar14[lVar24 * 4 + 2]) * (dVar2 - pdVar14[lVar24 * 4 + 2])
                             + (dVar4 - pdVar14[lVar24 * 4 + 1]) * (dVar4 - pdVar14[lVar24 * 4 + 1])
                               + (dVar3 - pdVar14[lVar24 * 4]) * (dVar3 - pdVar14[lVar24 * 4])))
                  break;
                  pdVar19 = pdVar14 + lVar24 * 4;
                  pdVar21 = pdVar14 + lVar16 * 4;
                  dVar5 = *pdVar19;
                  dVar6 = pdVar19[1];
                  dVar7 = pdVar19[2];
                  dVar8 = pdVar19[3];
                  dVar9 = *pdVar21;
                  dVar10 = pdVar21[1];
                  dVar11 = pdVar21[3];
                  pdVar19[2] = pdVar21[2];
                  pdVar19[3] = dVar11;
                  *pdVar19 = dVar9;
                  pdVar19[1] = dVar10;
                  pdVar21[2] = dVar7;
                  pdVar21[3] = dVar8;
                  *pdVar21 = dVar5;
                  pdVar21[1] = dVar6;
                  iVar23 = iVar17 * 2;
                  iVar26 = iVar17 * 2 + 1;
                  iVar30 = iVar17;
                } while ((longlong)iVar26 < (longlong)uVar20);
                uVar1 = uVar20 - 1;
                local_98 = *pdVar14;
                uStack_90 = pdVar14[1];
                local_88 = pdVar14[2];
                dStack_80 = pdVar14[3];
                dVar8 = local_98;
                dVar9 = uStack_90;
                dVar5 = pdVar14[uVar1 * 4];
                dVar6 = (pdVar14 + uVar1 * 4)[1];
                dVar7 = (pdVar14 + uVar1 * 4 + 2)[1];
                pdVar14[2] = pdVar14[uVar1 * 4 + 2];
                pdVar14[3] = dVar7;
                *pdVar14 = dVar5;
                pdVar14[1] = dVar6;
                local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
                uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
                pdVar14[uVar1 * 4 + 2] = local_88;
                (pdVar14 + uVar1 * 4 + 2)[1] = dStack_80;
                pdVar21 = pdVar14 + uVar1 * 4;
                *(undefined4 *)pdVar21 = (undefined4)local_98;
                *(undefined4 *)((longlong)pdVar21 + 4) = local_98._4_4_;
                *(undefined4 *)(pdVar21 + 1) = (undefined4)uStack_90;
                *(undefined4 *)((longlong)pdVar21 + 0xc) = uStack_90._4_4_;
                bVar31 = 2 < uVar20;
                uVar20 = uVar1;
                local_98 = dVar8;
                uStack_90 = dVar9;
              } while (bVar31);
            }
          }
        }
LAB_14749b3c2:
        plVar13 = plVar13 + -3;
      } while (&local_398 <= plVar13);
    }
  }
  else if (param_3 == '\x01') {
    iVar23 = (int)param_2[1];
    if (1 < (longlong)iVar23) {
      lVar16 = *param_2;
      memset(local_388,0,0x2f0);
      local_390 = (longlong)iVar23 * 0x20 + lVar16 + -0x20;
      local_398 = lVar16;
      fVar32 = logf((float)iVar23);
      local_388[0] = (int)(longlong)(fVar32 + fVar32);
      plVar13 = &local_398;
      do {
        pdVar19 = (double *)*plVar13;
        pdVar18 = (double *)plVar13[1];
        iVar23 = (int)plVar13[2];
        iVar30 = (int)((ulonglong)((longlong)pdVar18 - (longlong)pdVar19) >> 5);
        uVar25 = iVar30 + 1;
        pdVar15 = pdVar19;
        pdVar14 = pdVar19;
        pdVar21 = pdVar18;
        if (iVar23 != 0) {
LAB_14749a6c4:
          if (8 < (int)uVar25) {
            uVar20 = (ulonglong)(uVar25 >> 1);
            dVar2 = pdVar15[uVar20 * 4];
            dVar3 = (pdVar15 + uVar20 * 4)[1];
            dVar4 = pdVar15[uVar20 * 4 + 2];
            dVar5 = (pdVar15 + uVar20 * 4 + 2)[1];
            dVar6 = *pdVar15;
            dVar7 = pdVar15[1];
            dVar8 = pdVar15[3];
            pdVar15[uVar20 * 4 + 2] = pdVar15[2];
            (pdVar15 + uVar20 * 4 + 2)[1] = dVar8;
            pdVar15[uVar20 * 4] = dVar6;
            (pdVar15 + uVar20 * 4)[1] = dVar7;
            pdVar15[2] = dVar4;
            pdVar15[3] = dVar5;
            *pdVar15 = dVar2;
            pdVar15[1] = dVar3;
            pdVar27 = pdVar21 + 4;
            pdVar14 = pdVar15;
            do {
              pdVar12 = pdVar14 + 4;
              pdVar22 = pdVar14 + 4;
              do {
                pdVar14 = pdVar22;
                pdVar29 = pdVar12;
                if (pdVar21 < pdVar14) break;
                pdVar12 = pdVar29 + 4;
                pdVar22 = pdVar14 + 4;
              } while (*(float *)(pdVar15 + 3) < *(float *)(pdVar14 + 3) ||
                       *(float *)(pdVar15 + 3) == *(float *)(pdVar14 + 3));
              pdVar12 = pdVar27 + -8;
              do {
                pdVar22 = pdVar27;
                pdVar28 = pdVar12;
                pdVar27 = pdVar22 + -4;
                if (pdVar27 <= pdVar15) break;
                pdVar12 = pdVar28 + -4;
              } while (*(float *)(pdVar22 + -1) < *(float *)(pdVar15 + 3) ||
                       *(float *)(pdVar22 + -1) == *(float *)(pdVar15 + 3));
              if (pdVar27 < pdVar14) goto LAB_14749a7c2;
              dVar2 = *pdVar14;
              dVar3 = pdVar14[1];
              dVar4 = pdVar14[2];
              dVar5 = pdVar14[3];
              dVar6 = *pdVar27;
              dVar7 = pdVar22[-3];
              dVar8 = pdVar22[-1];
              pdVar14[2] = pdVar22[-2];
              pdVar14[3] = dVar8;
              *pdVar14 = dVar6;
              pdVar14[1] = dVar7;
              pdVar22[-2] = dVar4;
              pdVar22[-1] = dVar5;
              *pdVar27 = dVar2;
              pdVar22[-3] = dVar3;
            } while( true );
          }
          for (; pdVar18 = pdVar15, pdVar19 = pdVar15, pdVar15 < pdVar21; pdVar21 = pdVar21 + -4) {
            while (pdVar14 = pdVar18, pdVar19 = pdVar19 + 4, pdVar19 <= pdVar21) {
              pdVar18 = pdVar19;
              if (*(float *)(pdVar14 + 3) < *(float *)(pdVar19 + 3) ||
                  *(float *)(pdVar14 + 3) == *(float *)(pdVar19 + 3)) {
                pdVar18 = pdVar14;
              }
            }
            local_98 = *pdVar14;
            uStack_90 = pdVar14[1];
            local_88 = pdVar14[2];
            dStack_80 = pdVar14[3];
            dVar5 = local_98;
            dVar6 = uStack_90;
            dVar2 = *pdVar21;
            dVar3 = pdVar21[1];
            dVar4 = pdVar21[3];
            pdVar14[2] = pdVar21[2];
            pdVar14[3] = dVar4;
            *pdVar14 = dVar2;
            pdVar14[1] = dVar3;
            local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
            uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
            pdVar21[2] = local_88;
            pdVar21[3] = dStack_80;
            *(undefined4 *)pdVar21 = (undefined4)local_98;
            *(undefined4 *)((longlong)pdVar21 + 4) = local_98._4_4_;
            *(undefined4 *)(pdVar21 + 1) = (undefined4)uStack_90;
            *(undefined4 *)((longlong)pdVar21 + 0xc) = uStack_90._4_4_;
            local_98 = dVar5;
            uStack_90 = dVar6;
          }
          goto LAB_14749ab79;
        }
LAB_14749a890:
        if (uVar25 != 0) {
          iVar23 = (iVar30 - (iVar30 + -1 >> 0x1f)) + -1 >> 1;
          iVar30 = iVar23;
joined_r0x00014749a8b7:
          do {
            iVar26 = iVar23 * 2 + 1;
            if (iVar26 < (int)uVar25) {
              iVar17 = iVar23 * 2 + 2;
              if ((iVar17 < (int)uVar25) &&
                 (*(float *)(pdVar14 + (longlong)iVar17 * 4 + 3) <
                  *(float *)(pdVar14 + (longlong)iVar26 * 4 + 3) ||
                  *(float *)(pdVar14 + (longlong)iVar17 * 4 + 3) ==
                  *(float *)(pdVar14 + (longlong)iVar26 * 4 + 3))) {
                iVar26 = iVar17;
              }
              if (*(float *)(pdVar14 + (longlong)iVar26 * 4 + 3) <=
                  *(float *)(pdVar14 + (longlong)iVar23 * 4 + 3) &&
                  *(float *)(pdVar14 + (longlong)iVar23 * 4 + 3) !=
                  *(float *)(pdVar14 + (longlong)iVar26 * 4 + 3)) {
                pdVar21 = pdVar14 + (longlong)iVar23 * 4;
                pdVar19 = pdVar14 + (longlong)iVar26 * 4;
                local_98 = *pdVar21;
                uStack_90 = pdVar21[1];
                local_88 = pdVar21[2];
                dStack_80 = pdVar21[3];
                dVar5 = local_98;
                dVar6 = uStack_90;
                dVar2 = *pdVar19;
                dVar3 = pdVar19[1];
                dVar4 = pdVar19[3];
                pdVar21[2] = pdVar19[2];
                pdVar21[3] = dVar4;
                *pdVar21 = dVar2;
                pdVar21[1] = dVar3;
                local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
                uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
                pdVar19[2] = local_88;
                pdVar19[3] = dStack_80;
                *(undefined4 *)pdVar19 = (undefined4)local_98;
                *(undefined4 *)((longlong)pdVar19 + 4) = local_98._4_4_;
                *(undefined4 *)(pdVar19 + 1) = (undefined4)uStack_90;
                *(undefined4 *)((longlong)pdVar19 + 0xc) = uStack_90._4_4_;
                local_98 = dVar5;
                uStack_90 = dVar6;
                iVar23 = iVar26;
                goto joined_r0x00014749a8b7;
              }
            }
            bVar31 = iVar30 != 0;
            iVar23 = iVar30 + -1;
            iVar30 = iVar23;
          } while (bVar31);
          if (1 < (int)uVar25) {
            uVar20 = (ulonglong)uVar25 - 1;
            local_98 = *pdVar14;
            uStack_90 = pdVar14[1];
            local_88 = pdVar14[2];
            dStack_80 = pdVar14[3];
            dVar5 = local_98;
            dVar6 = uStack_90;
            dVar2 = pdVar14[uVar20 * 4];
            dVar3 = (pdVar14 + uVar20 * 4)[1];
            dVar4 = (pdVar14 + uVar20 * 4 + 2)[1];
            pdVar14[2] = pdVar14[uVar20 * 4 + 2];
            pdVar14[3] = dVar4;
            *pdVar14 = dVar2;
            pdVar14[1] = dVar3;
            local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
            uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
            pdVar14[uVar20 * 4 + 2] = local_88;
            (pdVar14 + uVar20 * 4 + 2)[1] = dStack_80;
            pdVar21 = pdVar14 + uVar20 * 4;
            *(undefined4 *)pdVar21 = (undefined4)local_98;
            *(undefined4 *)((longlong)pdVar21 + 4) = local_98._4_4_;
            *(undefined4 *)(pdVar21 + 1) = (undefined4)uStack_90;
            *(undefined4 *)((longlong)pdVar21 + 0xc) = uStack_90._4_4_;
            local_98 = dVar5;
            uStack_90 = dVar6;
            if (uVar25 != 2) {
              do {
                iVar23 = 0;
                iVar26 = 1;
                iVar30 = 0;
                do {
                  iVar23 = iVar23 + 2;
                  iVar17 = iVar26;
                  if (((longlong)iVar23 < (longlong)uVar20) &&
                     (*(float *)(pdVar14 + (longlong)iVar23 * 4 + 3) <
                      *(float *)(pdVar14 + (longlong)iVar26 * 4 + 3) ||
                      *(float *)(pdVar14 + (longlong)iVar23 * 4 + 3) ==
                      *(float *)(pdVar14 + (longlong)iVar26 * 4 + 3))) {
                    iVar17 = iVar23;
                  }
                  if (*(float *)(pdVar14 + (longlong)iVar30 * 4 + 3) <
                      *(float *)(pdVar14 + (longlong)iVar17 * 4 + 3) ||
                      *(float *)(pdVar14 + (longlong)iVar30 * 4 + 3) ==
                      *(float *)(pdVar14 + (longlong)iVar17 * 4 + 3)) break;
                  pdVar19 = pdVar14 + (longlong)iVar30 * 4;
                  pdVar21 = pdVar14 + (longlong)iVar17 * 4;
                  dVar2 = *pdVar19;
                  dVar3 = pdVar19[1];
                  dVar4 = pdVar19[2];
                  dVar5 = pdVar19[3];
                  dVar6 = *pdVar21;
                  dVar7 = pdVar21[1];
                  dVar8 = pdVar21[3];
                  pdVar19[2] = pdVar21[2];
                  pdVar19[3] = dVar8;
                  *pdVar19 = dVar6;
                  pdVar19[1] = dVar7;
                  pdVar21[2] = dVar4;
                  pdVar21[3] = dVar5;
                  *pdVar21 = dVar2;
                  pdVar21[1] = dVar3;
                  iVar23 = iVar17 * 2;
                  iVar26 = iVar17 * 2 + 1;
                  iVar30 = iVar17;
                } while ((longlong)iVar26 < (longlong)uVar20);
                uVar1 = uVar20 - 1;
                local_98 = *pdVar14;
                uStack_90 = pdVar14[1];
                local_88 = pdVar14[2];
                dStack_80 = pdVar14[3];
                dVar5 = local_98;
                dVar6 = uStack_90;
                dVar2 = pdVar14[uVar1 * 4];
                dVar3 = (pdVar14 + uVar1 * 4)[1];
                dVar4 = (pdVar14 + uVar1 * 4 + 2)[1];
                pdVar14[2] = pdVar14[uVar1 * 4 + 2];
                pdVar14[3] = dVar4;
                *pdVar14 = dVar2;
                pdVar14[1] = dVar3;
                local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
                uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
                pdVar14[uVar1 * 4 + 2] = local_88;
                (pdVar14 + uVar1 * 4 + 2)[1] = dStack_80;
                pdVar21 = pdVar14 + uVar1 * 4;
                *(undefined4 *)pdVar21 = (undefined4)local_98;
                *(undefined4 *)((longlong)pdVar21 + 4) = local_98._4_4_;
                *(undefined4 *)(pdVar21 + 1) = (undefined4)uStack_90;
                *(undefined4 *)((longlong)pdVar21 + 0xc) = uStack_90._4_4_;
                bVar31 = 2 < uVar20;
                uVar20 = uVar1;
                local_98 = dVar5;
                uStack_90 = dVar6;
              } while (bVar31);
            }
          }
        }
LAB_14749ab79:
        plVar13 = plVar13 + -3;
      } while (&local_398 <= plVar13);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14749adea:
  local_98 = *pdVar15;
  uStack_90 = pdVar15[1];
  local_88 = pdVar15[2];
  dStack_80 = pdVar15[3];
  dVar8 = local_98;
  dVar9 = uStack_90;
  dVar5 = *pdVar27;
  dVar6 = pdVar22[-3];
  dVar7 = pdVar22[-1];
  pdVar15[2] = pdVar22[-2];
  pdVar15[3] = dVar7;
  *pdVar15 = dVar5;
  pdVar15[1] = dVar6;
  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  pdVar22[-2] = local_88;
  pdVar22[-1] = dStack_80;
  *(undefined4 *)pdVar27 = (undefined4)local_98;
  *(undefined4 *)((longlong)pdVar22 + -0x1c) = local_98._4_4_;
  *(undefined4 *)(pdVar22 + -3) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)pdVar22 + -0x14) = uStack_90._4_4_;
  iVar23 = iVar23 + -1;
  pdVar22 = pdVar22 + -8;
  local_98 = dVar8;
  uStack_90 = dVar9;
  if ((longlong)pdVar28 - (longlong)pdVar19 < (longlong)pdVar18 - (longlong)pdVar29) {
    if (pdVar14 < pdVar21) {
      *plVar13 = (longlong)pdVar14;
      plVar13[1] = (longlong)pdVar21;
      *(int *)(plVar13 + 2) = iVar23;
      plVar13 = plVar13 + 3;
    }
    pdVar14 = pdVar15;
    pdVar18 = pdVar28;
    if (pdVar27 <= pdVar15 + 4) goto LAB_14749b3c2;
  }
  else {
    if (pdVar15 + 4 < pdVar27) {
      *plVar13 = (longlong)pdVar15;
      plVar13[1] = (longlong)pdVar22;
      *(int *)(plVar13 + 2) = iVar23;
      plVar13 = plVar13 + 3;
    }
    pdVar15 = pdVar29;
    pdVar22 = pdVar21;
    pdVar18 = pdVar21;
    if (pdVar21 <= pdVar14) goto LAB_14749b3c2;
  }
  iVar30 = (int)((ulonglong)((longlong)pdVar18 - (longlong)pdVar15) >> 5);
  uVar25 = iVar30 + 1;
  pdVar19 = pdVar15;
  pdVar15 = pdVar14;
  pdVar21 = pdVar22;
  if (iVar23 == 0) goto LAB_14749aeb8;
  goto LAB_14749ac1e;
LAB_14749a7c2:
  local_98 = *pdVar15;
  uStack_90 = pdVar15[1];
  local_88 = pdVar15[2];
  dStack_80 = pdVar15[3];
  dVar5 = local_98;
  dVar6 = uStack_90;
  dVar2 = *pdVar27;
  dVar3 = pdVar22[-3];
  dVar4 = pdVar22[-1];
  pdVar15[2] = pdVar22[-2];
  pdVar15[3] = dVar4;
  *pdVar15 = dVar2;
  pdVar15[1] = dVar3;
  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  pdVar22[-2] = local_88;
  pdVar22[-1] = dStack_80;
  *(undefined4 *)pdVar27 = (undefined4)local_98;
  *(undefined4 *)((longlong)pdVar22 + -0x1c) = local_98._4_4_;
  *(undefined4 *)(pdVar22 + -3) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)pdVar22 + -0x14) = uStack_90._4_4_;
  iVar23 = iVar23 + -1;
  pdVar22 = pdVar22 + -8;
  local_98 = dVar5;
  uStack_90 = dVar6;
  if ((longlong)pdVar28 - (longlong)pdVar19 < (longlong)pdVar18 - (longlong)pdVar29) {
    if (pdVar14 < pdVar21) {
      *plVar13 = (longlong)pdVar14;
      plVar13[1] = (longlong)pdVar21;
      *(int *)(plVar13 + 2) = iVar23;
      plVar13 = plVar13 + 3;
    }
    pdVar14 = pdVar15;
    pdVar18 = pdVar28;
    if (pdVar27 <= pdVar15 + 4) goto LAB_14749ab79;
  }
  else {
    if (pdVar15 + 4 < pdVar27) {
      *plVar13 = (longlong)pdVar15;
      plVar13[1] = (longlong)pdVar22;
      *(int *)(plVar13 + 2) = iVar23;
      plVar13 = plVar13 + 3;
    }
    pdVar15 = pdVar29;
    pdVar22 = pdVar21;
    pdVar18 = pdVar21;
    if (pdVar21 <= pdVar14) goto LAB_14749ab79;
  }
  iVar30 = (int)((ulonglong)((longlong)pdVar18 - (longlong)pdVar15) >> 5);
  uVar25 = iVar30 + 1;
  pdVar19 = pdVar15;
  pdVar15 = pdVar14;
  pdVar21 = pdVar22;
  if (iVar23 == 0) goto LAB_14749a890;
  goto LAB_14749a6c4;
}



// FUNCTION 14749b414 FUN_14749b414 body=702 status=ok
// SIG undefined FUN_14749b414(void)

void FUN_14749b414(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  double *pdVar10;
  longlong *plVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  double local_c8 [4];
  double dStack_a8;
  double local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar11 = param_1 + 2;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_1474ac0c8(plVar11);
  }
  piVar6 = (int *)param_1[0x10];
  lVar5 = param_3[1];
  if ((longlong)(int)lVar5 != 0) {
    fVar15 = (float)piVar6[4] * (float)piVar6[4];
    lVar2 = *param_3;
    lVar12 = 0;
    do {
      if ((((((float)piVar6[1] <= 0.0) ||
            (dVar4 = (double)(float)piVar6[1], pdVar9 = (double *)(lVar2 + 0x48 + lVar12),
            dVar4 < *pdVar9 || dVar4 == *pdVar9)) &&
           (((float)piVar6[2] <= 0.0 ||
            (dVar4 = *(double *)(lVar2 + 0x18 + lVar12), dVar13 = *(double *)(lVar2 + 0x20 + lVar12)
            , dVar14 = *(double *)(lVar2 + 0x28 + lVar12),
            (double)(float)piVar6[2] <= SQRT(dVar14 * dVar14 + dVar4 * dVar4 + dVar13 * dVar13)))))
          && (((float)piVar6[3] <= 0.0 ||
              (dVar4 = *(double *)(lVar2 + 0x30 + lVar12),
              dVar13 = *(double *)(lVar2 + 0x38 + lVar12),
              dVar14 = *(double *)(lVar2 + 0x40 + lVar12),
              (double)(float)piVar6[3] <= SQRT(dVar14 * dVar14 + dVar4 * dVar4 + dVar13 * dVar13))))
          ) && ((fVar15 <= 0.0 ||
                (dVar13 = *(double *)(param_2 + 0x20) - *(double *)(lVar2 + lVar12),
                dVar14 = *(double *)(param_2 + 0x28) - *(double *)(lVar2 + 8 + lVar12),
                dVar4 = *(double *)(param_2 + 0x30) - *(double *)(lVar2 + 0x10 + lVar12),
                (float)(dVar4 * dVar4 + dVar14 * dVar14 + dVar13 * dVar13) <= fVar15)))) {
        pdVar9 = (double *)(lVar12 + lVar2 + 0x48);
        local_c8[2] = pdVar9[-7];
        local_c8[0] = pdVar9[-9];
        local_c8[1] = pdVar9[-8];
        local_a0 = pdVar9[-4];
        local_c8[3] = pdVar9[-6];
        dStack_a8 = pdVar9[-5];
        local_88 = pdVar9[-1];
        local_98 = *(undefined4 *)(pdVar9 + -3);
        uStack_94 = *(undefined4 *)((longlong)pdVar9 + -0x14);
        uStack_90 = *(undefined4 *)(pdVar9 + -2);
        uStack_8c = *(undefined4 *)((longlong)pdVar9 + -0xc);
        dVar4 = *pdVar9;
        iVar1 = (int)param_1[3];
        *(uint *)(param_1 + 3) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
          local_d0 = plVar11;
          FUN_1474ac0f8(plVar11,iVar1);
          plVar11 = local_d0;
        }
        lVar3 = param_1[2];
        lVar8 = (longlong)iVar1 * 0x50;
        pdVar9 = local_c8;
        pdVar10 = (double *)(lVar3 + lVar8);
        for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pdVar10 = *pdVar9;
          pdVar9 = pdVar9 + 1;
          pdVar10 = pdVar10 + 1;
        }
        *(float *)(lVar3 + 0x48 + lVar8) = (float)dVar4;
        *(undefined4 *)(lVar3 + 0x4c + lVar8) = 0xffffffff;
        piVar6 = (int *)param_1[0x10];
        if ((0 < *piVar6) && ((int)param_1[3] == *piVar6)) break;
      }
      lVar12 = lVar12 + 0x90;
    } while ((longlong)(int)lVar5 * 0x90 != lVar12);
  }
  if ((local_80 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014749b6b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,plVar11,(char)piVar6[5],param_2);
  return;
}



// FUNCTION 14749b6d4 FUN_14749b6d4 body=5128 status=ok
// SIG undefined FUN_14749b6d4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14749b6d4(undefined8 param_1,longlong *param_2,char param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  longlong *plVar10;
  int iVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  double *pdVar21;
  uint uVar22;
  double *pdVar23;
  double *pdVar24;
  ulonglong uVar25;
  bool bVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_3f8 [32];
  longlong local_3d8;
  longlong local_3d0;
  undefined4 local_3c8 [190];
  double local_d0 [10];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  if (param_3 == '\x03') {
    iVar11 = (int)param_2[1];
    if (1 < (longlong)iVar11) {
      dVar1 = *(double *)(param_4 + 0x30);
      lVar5 = *param_2;
      dVar2 = *(double *)(param_4 + 0x20);
      dVar3 = *(double *)(param_4 + 0x28);
      memset(local_3c8,0,0x2f0);
      local_3d0 = (longlong)iVar11 * 0x50 + lVar5 + -0x50;
      local_3d8 = lVar5;
      fVar27 = logf((float)iVar11);
      local_3c8[0] = (int)(longlong)(fVar27 + fVar27);
      plVar10 = &local_3d8;
      do {
        pdVar21 = (double *)*plVar10;
        pdVar15 = (double *)plVar10[1];
        iVar11 = (int)plVar10[2];
        iVar4 = (int)((ulonglong)((longlong)pdVar15 - (longlong)pdVar21) >> 4) * -0x33333333;
        uVar22 = iVar4 + 1;
        pdVar9 = pdVar15;
        pdVar7 = pdVar21;
        if (iVar11 != 0) {
LAB_14749c388:
          if (8 < (int)uVar22) {
            pdVar12 = pdVar21 + (ulonglong)(uVar22 >> 1) * 10;
            pdVar8 = local_d0;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar8 = *pdVar12;
              pdVar12 = pdVar12 + 1;
              pdVar8 = pdVar8 + 1;
            }
            pdVar12 = pdVar21;
            pdVar8 = pdVar21 + (ulonglong)(uVar22 >> 1) * 10;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar8 = *pdVar12;
              pdVar12 = pdVar12 + 1;
              pdVar8 = pdVar8 + 1;
            }
            pdVar12 = local_d0;
            pdVar8 = pdVar21;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar8 = *pdVar12;
              pdVar12 = pdVar12 + 1;
              pdVar8 = pdVar8 + 1;
            }
            pdVar12 = pdVar15 + 10;
            pdVar8 = pdVar21;
            do {
              pdVar14 = pdVar8 + 10;
              pdVar16 = pdVar8 + 10;
              do {
                pdVar8 = pdVar16;
                pdVar23 = pdVar14;
                if (pdVar15 < pdVar8) break;
                pdVar14 = pdVar23 + 10;
                pdVar16 = pdVar8 + 10;
              } while ((float)((dVar1 - pdVar8[2]) * (dVar1 - pdVar8[2]) +
                              (dVar3 - pdVar8[1]) * (dVar3 - pdVar8[1]) +
                              (dVar2 - *pdVar8) * (dVar2 - *pdVar8)) <=
                       (float)((dVar1 - pdVar21[2]) * (dVar1 - pdVar21[2]) +
                              (dVar3 - pdVar21[1]) * (dVar3 - pdVar21[1]) +
                              (dVar2 - *pdVar21) * (dVar2 - *pdVar21)));
              pdVar14 = pdVar12 + -0x14;
              do {
                pdVar16 = pdVar12;
                pdVar24 = pdVar14;
                pdVar12 = pdVar16 + -10;
                if (pdVar12 <= pdVar21) break;
                pdVar14 = pdVar24 + -10;
              } while ((float)((dVar1 - pdVar21[2]) * (dVar1 - pdVar21[2]) +
                              (dVar3 - pdVar21[1]) * (dVar3 - pdVar21[1]) +
                              (dVar2 - *pdVar21) * (dVar2 - *pdVar21)) <=
                       (float)((dVar1 - pdVar16[-8]) * (dVar1 - pdVar16[-8]) +
                              (dVar3 - pdVar16[-9]) * (dVar3 - pdVar16[-9]) +
                              (dVar2 - *pdVar12) * (dVar2 - *pdVar12)));
              lVar5 = 10;
              pdVar14 = pdVar21;
              pdVar13 = pdVar8;
              pdVar17 = local_d0;
              if (pdVar12 < pdVar8) goto code_r0x00014749c52e;
              for (; lVar5 != 0; lVar5 = lVar5 + -1) {
                *pdVar17 = *pdVar13;
                pdVar13 = pdVar13 + 1;
                pdVar17 = pdVar17 + 1;
              }
              pdVar14 = pdVar12;
              pdVar16 = pdVar8;
              for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                *pdVar16 = *pdVar14;
                pdVar14 = pdVar14 + 1;
                pdVar16 = pdVar16 + 1;
              }
              pdVar14 = local_d0;
              pdVar16 = pdVar12;
              for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                *pdVar16 = *pdVar14;
                pdVar14 = pdVar14 + 1;
                pdVar16 = pdVar16 + 1;
              }
            } while( true );
          }
          if (pdVar21 < pdVar15) {
            do {
              pdVar9 = pdVar21;
              if (pdVar21 + 10 <= pdVar15) {
                dVar28 = *pdVar21;
                pdVar7 = pdVar21 + 10;
                do {
                  dVar29 = dVar2 - *pdVar7;
                  if ((float)((dVar1 - pdVar9[2]) * (dVar1 - pdVar9[2]) +
                             (dVar3 - pdVar9[1]) * (dVar3 - pdVar9[1]) +
                             (dVar2 - dVar28) * (dVar2 - dVar28)) <
                      (float)((dVar1 - pdVar7[2]) * (dVar1 - pdVar7[2]) +
                             (dVar3 - pdVar7[1]) * (dVar3 - pdVar7[1]) + dVar29 * dVar29)) {
                    pdVar9 = pdVar7;
                    dVar28 = *pdVar7;
                  }
                  pdVar7 = pdVar7 + 10;
                } while (pdVar7 <= pdVar15);
              }
              pdVar7 = pdVar15 + -10;
              pdVar12 = pdVar9;
              pdVar8 = local_d0;
              for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                *pdVar8 = *pdVar12;
                pdVar12 = pdVar12 + 1;
                pdVar8 = pdVar8 + 1;
              }
              pdVar12 = pdVar15;
              for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                *pdVar9 = *pdVar12;
                pdVar12 = pdVar12 + 1;
                pdVar9 = pdVar9 + 1;
              }
              pdVar9 = local_d0;
              for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                *pdVar15 = *pdVar9;
                pdVar9 = pdVar9 + 1;
                pdVar15 = pdVar15 + 1;
              }
              pdVar15 = pdVar7;
            } while (pdVar21 < pdVar7);
          }
          goto LAB_14749ca89;
        }
LAB_14749c5d9:
        if (uVar22 != 0) {
          iVar4 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
          iVar11 = iVar4;
joined_r0x00014749c601:
          do {
            iVar20 = iVar11 * 2 + 1;
            if (iVar20 < (int)uVar22) {
              iVar19 = iVar11 * 2 + 2;
              if (iVar19 < (int)uVar22) {
                lVar5 = (longlong)iVar19;
                lVar18 = (longlong)iVar20;
                if ((float)((dVar1 - pdVar21[lVar18 * 10 + 2]) * (dVar1 - pdVar21[lVar18 * 10 + 2])
                           + (dVar3 - pdVar21[lVar18 * 10 + 1]) * (dVar3 - pdVar21[lVar18 * 10 + 1])
                             + (dVar2 - pdVar21[lVar18 * 10]) * (dVar2 - pdVar21[lVar18 * 10])) <=
                    (float)((dVar1 - pdVar21[lVar5 * 10 + 2]) * (dVar1 - pdVar21[lVar5 * 10 + 2]) +
                           (dVar3 - pdVar21[lVar5 * 10 + 1]) * (dVar3 - pdVar21[lVar5 * 10 + 1]) +
                           (dVar2 - pdVar21[lVar5 * 10]) * (dVar2 - pdVar21[lVar5 * 10]))) {
                  iVar20 = iVar19;
                }
              }
              lVar5 = (longlong)iVar11;
              lVar18 = (longlong)iVar20;
              if ((float)((dVar1 - pdVar21[lVar5 * 10 + 2]) * (dVar1 - pdVar21[lVar5 * 10 + 2]) +
                         (dVar3 - pdVar21[lVar5 * 10 + 1]) * (dVar3 - pdVar21[lVar5 * 10 + 1]) +
                         (dVar2 - pdVar21[lVar5 * 10]) * (dVar2 - pdVar21[lVar5 * 10])) <
                  (float)((dVar1 - pdVar21[lVar18 * 10 + 2]) * (dVar1 - pdVar21[lVar18 * 10 + 2]) +
                         (dVar3 - pdVar21[lVar18 * 10 + 1]) * (dVar3 - pdVar21[lVar18 * 10 + 1]) +
                         (dVar2 - pdVar21[lVar18 * 10]) * (dVar2 - pdVar21[lVar18 * 10]))) {
                pdVar15 = pdVar21 + lVar5 * 10;
                pdVar9 = local_d0;
                for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                pdVar15 = pdVar21 + lVar18 * 10;
                pdVar9 = pdVar21 + lVar5 * 10;
                for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                pdVar15 = local_d0;
                pdVar9 = pdVar21 + lVar18 * 10;
                for (lVar5 = 10; iVar11 = iVar20, lVar5 != 0; lVar5 = lVar5 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                goto joined_r0x00014749c601;
              }
            }
            bVar26 = iVar4 != 0;
            iVar4 = iVar4 + -1;
            iVar11 = iVar4;
          } while (bVar26);
          if (1 < (int)uVar22) {
            pdVar15 = pdVar21;
            pdVar9 = local_d0;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar9 = *pdVar15;
              pdVar15 = pdVar15 + 1;
              pdVar9 = pdVar9 + 1;
            }
            pdVar15 = pdVar21 + ((ulonglong)uVar22 - 1) * 10;
            pdVar9 = pdVar21;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar9 = *pdVar15;
              pdVar15 = pdVar15 + 1;
              pdVar9 = pdVar9 + 1;
            }
            pdVar15 = local_d0;
            pdVar9 = pdVar21 + ((ulonglong)uVar22 - 1) * 10;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar9 = *pdVar15;
              pdVar15 = pdVar15 + 1;
              pdVar9 = pdVar9 + 1;
            }
            uVar25 = (ulonglong)uVar22 - 1;
            if (uVar22 != 2) {
              do {
                iVar11 = 0;
                iVar20 = 1;
                iVar4 = 0;
                do {
                  lVar5 = (longlong)(iVar11 + 2);
                  iVar19 = iVar20;
                  if ((lVar5 < (longlong)uVar25) &&
                     (lVar18 = (longlong)iVar20,
                     (float)((dVar1 - pdVar21[lVar18 * 10 + 2]) * (dVar1 - pdVar21[lVar18 * 10 + 2])
                            + (dVar3 - pdVar21[lVar18 * 10 + 1]) *
                              (dVar3 - pdVar21[lVar18 * 10 + 1]) +
                              (dVar2 - pdVar21[lVar18 * 10]) * (dVar2 - pdVar21[lVar18 * 10])) <=
                     (float)((dVar1 - pdVar21[lVar5 * 10 + 2]) * (dVar1 - pdVar21[lVar5 * 10 + 2]) +
                            (dVar3 - pdVar21[lVar5 * 10 + 1]) * (dVar3 - pdVar21[lVar5 * 10 + 1]) +
                            (dVar2 - pdVar21[lVar5 * 10]) * (dVar2 - pdVar21[lVar5 * 10])))) {
                    iVar19 = iVar11 + 2;
                  }
                  lVar5 = (longlong)iVar4;
                  lVar18 = (longlong)iVar19;
                  if ((float)((dVar1 - pdVar21[lVar18 * 10 + 2]) *
                              (dVar1 - pdVar21[lVar18 * 10 + 2]) +
                             (dVar3 - pdVar21[lVar18 * 10 + 1]) * (dVar3 - pdVar21[lVar18 * 10 + 1])
                             + (dVar2 - pdVar21[lVar18 * 10]) * (dVar2 - pdVar21[lVar18 * 10])) <=
                      (float)((dVar1 - pdVar21[lVar5 * 10 + 2]) * (dVar1 - pdVar21[lVar5 * 10 + 2])
                             + (dVar3 - pdVar21[lVar5 * 10 + 1]) * (dVar3 - pdVar21[lVar5 * 10 + 1])
                               + (dVar2 - pdVar21[lVar5 * 10]) * (dVar2 - pdVar21[lVar5 * 10])))
                  break;
                  pdVar15 = pdVar21 + lVar5 * 10;
                  pdVar9 = local_d0;
                  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
                    *pdVar9 = *pdVar15;
                    pdVar15 = pdVar15 + 1;
                    pdVar9 = pdVar9 + 1;
                  }
                  pdVar15 = pdVar21 + lVar18 * 10;
                  pdVar9 = pdVar21 + lVar5 * 10;
                  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
                    *pdVar9 = *pdVar15;
                    pdVar15 = pdVar15 + 1;
                    pdVar9 = pdVar9 + 1;
                  }
                  pdVar15 = local_d0;
                  pdVar9 = pdVar21 + lVar18 * 10;
                  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                    *pdVar9 = *pdVar15;
                    pdVar15 = pdVar15 + 1;
                    pdVar9 = pdVar9 + 1;
                  }
                  iVar11 = iVar19 * 2;
                  iVar20 = iVar19 * 2 + 1;
                  iVar4 = iVar19;
                } while ((longlong)iVar20 < (longlong)uVar25);
                pdVar15 = pdVar21;
                pdVar9 = local_d0;
                for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                pdVar15 = pdVar21 + (uVar25 - 1) * 10;
                pdVar9 = pdVar21;
                for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                pdVar15 = local_d0;
                pdVar9 = pdVar21 + (uVar25 - 1) * 10;
                for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                bVar26 = 2 < uVar25;
                uVar25 = uVar25 - 1;
              } while (bVar26);
            }
          }
        }
LAB_14749ca89:
        plVar10 = plVar10 + -3;
      } while (&local_3d8 <= plVar10);
    }
  }
  else if (param_3 == '\x02') {
    iVar11 = (int)param_2[1];
    if (1 < (longlong)iVar11) {
      lVar5 = *param_2;
      memset(local_3c8,0,0x2f0);
      local_3d0 = (longlong)iVar11 * 0x50 + lVar5 + -0x50;
      local_3d8 = lVar5;
      fVar27 = logf((float)iVar11);
      local_3c8[0] = (int)(longlong)(fVar27 + fVar27);
      plVar10 = &local_3d8;
      do {
        pdVar21 = (double *)*plVar10;
        pdVar15 = (double *)plVar10[1];
        iVar11 = (int)plVar10[2];
        iVar4 = (int)((ulonglong)((longlong)pdVar15 - (longlong)pdVar21) >> 4) * -0x33333333;
        uVar22 = iVar4 + 1;
        pdVar9 = pdVar15;
        pdVar7 = pdVar21;
        if (iVar11 != 0) {
LAB_14749bc73:
          if (8 < (int)uVar22) {
            pdVar12 = pdVar21 + (ulonglong)(uVar22 >> 1) * 10;
            pdVar8 = local_d0;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar8 = *pdVar12;
              pdVar12 = pdVar12 + 1;
              pdVar8 = pdVar8 + 1;
            }
            pdVar12 = pdVar21;
            pdVar8 = pdVar21 + (ulonglong)(uVar22 >> 1) * 10;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar8 = *pdVar12;
              pdVar12 = pdVar12 + 1;
              pdVar8 = pdVar8 + 1;
            }
            pdVar12 = local_d0;
            pdVar8 = pdVar21;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar8 = *pdVar12;
              pdVar12 = pdVar12 + 1;
              pdVar8 = pdVar8 + 1;
            }
            pdVar12 = pdVar15 + 10;
            pdVar8 = pdVar21;
            do {
              pdVar14 = pdVar8 + 10;
              pdVar16 = pdVar8 + 10;
              do {
                pdVar8 = pdVar16;
                pdVar23 = pdVar14;
                if (pdVar15 < pdVar8) break;
                pdVar14 = pdVar23 + 10;
                pdVar16 = pdVar8 + 10;
              } while (SQRT(pdVar21[5] * pdVar21[5] +
                            pdVar21[3] * pdVar21[3] + pdVar21[4] * pdVar21[4]) <=
                       SQRT(pdVar8[5] * pdVar8[5] + pdVar8[3] * pdVar8[3] + pdVar8[4] * pdVar8[4]));
              pdVar14 = pdVar12 + -0x14;
              do {
                pdVar16 = pdVar12;
                pdVar24 = pdVar14;
                pdVar12 = pdVar16 + -10;
                if (pdVar12 <= pdVar21) break;
                pdVar14 = pdVar24 + -10;
              } while (SQRT(pdVar16[-5] * pdVar16[-5] +
                            pdVar16[-7] * pdVar16[-7] + pdVar16[-6] * pdVar16[-6]) <=
                       SQRT(pdVar21[5] * pdVar21[5] +
                            pdVar21[3] * pdVar21[3] + pdVar21[4] * pdVar21[4]));
              lVar5 = 10;
              pdVar14 = pdVar21;
              pdVar13 = pdVar8;
              pdVar17 = local_d0;
              if (pdVar12 < pdVar8) goto code_r0x00014749bdef;
              for (; lVar5 != 0; lVar5 = lVar5 + -1) {
                *pdVar17 = *pdVar13;
                pdVar13 = pdVar13 + 1;
                pdVar17 = pdVar17 + 1;
              }
              pdVar14 = pdVar12;
              pdVar16 = pdVar8;
              for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                *pdVar16 = *pdVar14;
                pdVar14 = pdVar14 + 1;
                pdVar16 = pdVar16 + 1;
              }
              pdVar14 = local_d0;
              pdVar16 = pdVar12;
              for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                *pdVar16 = *pdVar14;
                pdVar14 = pdVar14 + 1;
                pdVar16 = pdVar16 + 1;
              }
            } while( true );
          }
          while (pdVar7 = pdVar21, pdVar9 = pdVar21, pdVar21 < pdVar15) {
            while (pdVar12 = pdVar7, pdVar9 = pdVar9 + 10, pdVar9 <= pdVar15) {
              pdVar7 = pdVar9;
              if (SQRT(pdVar12[5] * pdVar12[5] + pdVar12[3] * pdVar12[3] + pdVar12[4] * pdVar12[4])
                  <= SQRT(pdVar9[5] * pdVar9[5] + pdVar9[3] * pdVar9[3] + pdVar9[4] * pdVar9[4])) {
                pdVar7 = pdVar12;
              }
            }
            pdVar9 = pdVar15 + -10;
            pdVar7 = pdVar12;
            pdVar8 = local_d0;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar8 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar8 = pdVar8 + 1;
            }
            pdVar7 = pdVar15;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar12 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar12 = pdVar12 + 1;
            }
            pdVar7 = local_d0;
            pdVar12 = pdVar15;
            for (lVar5 = 10; pdVar15 = pdVar9, lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar12 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar12 = pdVar12 + 1;
            }
          }
          goto LAB_14749c2d6;
        }
LAB_14749be9a:
        if (uVar22 != 0) {
          iVar4 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
          iVar11 = iVar4;
joined_r0x00014749bec2:
          do {
            iVar20 = iVar11 * 2 + 1;
            if (iVar20 < (int)uVar22) {
              iVar19 = iVar11 * 2 + 2;
              if (iVar19 < (int)uVar22) {
                lVar5 = (longlong)iVar19;
                lVar18 = (longlong)iVar20;
                if (SQRT(pdVar21[lVar5 * 10 + 5] * pdVar21[lVar5 * 10 + 5] +
                         pdVar21[lVar5 * 10 + 3] * pdVar21[lVar5 * 10 + 3] +
                         pdVar21[lVar5 * 10 + 4] * pdVar21[lVar5 * 10 + 4]) <=
                    SQRT(pdVar21[lVar18 * 10 + 5] * pdVar21[lVar18 * 10 + 5] +
                         pdVar21[lVar18 * 10 + 3] * pdVar21[lVar18 * 10 + 3] +
                         pdVar21[lVar18 * 10 + 4] * pdVar21[lVar18 * 10 + 4])) {
                  iVar20 = iVar19;
                }
              }
              lVar5 = (longlong)iVar11;
              lVar18 = (longlong)iVar20;
              if (SQRT(pdVar21[lVar18 * 10 + 5] * pdVar21[lVar18 * 10 + 5] +
                       pdVar21[lVar18 * 10 + 3] * pdVar21[lVar18 * 10 + 3] +
                       pdVar21[lVar18 * 10 + 4] * pdVar21[lVar18 * 10 + 4]) <
                  SQRT(pdVar21[lVar5 * 10 + 5] * pdVar21[lVar5 * 10 + 5] +
                       pdVar21[lVar5 * 10 + 3] * pdVar21[lVar5 * 10 + 3] +
                       pdVar21[lVar5 * 10 + 4] * pdVar21[lVar5 * 10 + 4])) {
                pdVar15 = pdVar21 + lVar5 * 10;
                pdVar9 = local_d0;
                for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                pdVar15 = pdVar21 + lVar18 * 10;
                pdVar9 = pdVar21 + lVar5 * 10;
                for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                pdVar15 = local_d0;
                pdVar9 = pdVar21 + lVar18 * 10;
                for (lVar5 = 10; iVar11 = iVar20, lVar5 != 0; lVar5 = lVar5 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                goto joined_r0x00014749bec2;
              }
            }
            bVar26 = iVar4 != 0;
            iVar4 = iVar4 + -1;
            iVar11 = iVar4;
          } while (bVar26);
          if (1 < (int)uVar22) {
            pdVar15 = pdVar21;
            pdVar9 = local_d0;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar9 = *pdVar15;
              pdVar15 = pdVar15 + 1;
              pdVar9 = pdVar9 + 1;
            }
            pdVar15 = pdVar21 + ((ulonglong)uVar22 - 1) * 10;
            pdVar9 = pdVar21;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar9 = *pdVar15;
              pdVar15 = pdVar15 + 1;
              pdVar9 = pdVar9 + 1;
            }
            pdVar15 = local_d0;
            pdVar9 = pdVar21 + ((ulonglong)uVar22 - 1) * 10;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar9 = *pdVar15;
              pdVar15 = pdVar15 + 1;
              pdVar9 = pdVar9 + 1;
            }
            uVar25 = (ulonglong)uVar22 - 1;
            if (uVar22 != 2) {
              do {
                iVar11 = 0;
                iVar20 = 1;
                iVar4 = 0;
                do {
                  lVar5 = (longlong)(iVar11 + 2);
                  iVar19 = iVar20;
                  if ((lVar5 < (longlong)uVar25) &&
                     (lVar18 = (longlong)iVar20,
                     SQRT(pdVar21[lVar5 * 10 + 5] * pdVar21[lVar5 * 10 + 5] +
                          pdVar21[lVar5 * 10 + 3] * pdVar21[lVar5 * 10 + 3] +
                          pdVar21[lVar5 * 10 + 4] * pdVar21[lVar5 * 10 + 4]) <=
                     SQRT(pdVar21[lVar18 * 10 + 5] * pdVar21[lVar18 * 10 + 5] +
                          pdVar21[lVar18 * 10 + 3] * pdVar21[lVar18 * 10 + 3] +
                          pdVar21[lVar18 * 10 + 4] * pdVar21[lVar18 * 10 + 4]))) {
                    iVar19 = iVar11 + 2;
                  }
                  lVar5 = (longlong)iVar4;
                  lVar18 = (longlong)iVar19;
                  if (SQRT(pdVar21[lVar5 * 10 + 5] * pdVar21[lVar5 * 10 + 5] +
                           pdVar21[lVar5 * 10 + 3] * pdVar21[lVar5 * 10 + 3] +
                           pdVar21[lVar5 * 10 + 4] * pdVar21[lVar5 * 10 + 4]) <=
                      SQRT(pdVar21[lVar18 * 10 + 5] * pdVar21[lVar18 * 10 + 5] +
                           pdVar21[lVar18 * 10 + 3] * pdVar21[lVar18 * 10 + 3] +
                           pdVar21[lVar18 * 10 + 4] * pdVar21[lVar18 * 10 + 4])) break;
                  pdVar15 = pdVar21 + lVar5 * 10;
                  pdVar9 = local_d0;
                  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
                    *pdVar9 = *pdVar15;
                    pdVar15 = pdVar15 + 1;
                    pdVar9 = pdVar9 + 1;
                  }
                  pdVar15 = pdVar21 + lVar18 * 10;
                  pdVar9 = pdVar21 + lVar5 * 10;
                  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
                    *pdVar9 = *pdVar15;
                    pdVar15 = pdVar15 + 1;
                    pdVar9 = pdVar9 + 1;
                  }
                  pdVar15 = local_d0;
                  pdVar9 = pdVar21 + lVar18 * 10;
                  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                    *pdVar9 = *pdVar15;
                    pdVar15 = pdVar15 + 1;
                    pdVar9 = pdVar9 + 1;
                  }
                  iVar11 = iVar19 * 2;
                  iVar20 = iVar19 * 2 + 1;
                  iVar4 = iVar19;
                } while ((longlong)iVar20 < (longlong)uVar25);
                pdVar15 = pdVar21;
                pdVar9 = local_d0;
                for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                pdVar15 = pdVar21 + (uVar25 - 1) * 10;
                pdVar9 = pdVar21;
                for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                pdVar15 = local_d0;
                pdVar9 = pdVar21 + (uVar25 - 1) * 10;
                for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                bVar26 = 2 < uVar25;
                uVar25 = uVar25 - 1;
              } while (bVar26);
            }
          }
        }
LAB_14749c2d6:
        plVar10 = plVar10 + -3;
      } while (&local_3d8 <= plVar10);
    }
  }
  else if (param_3 == '\x01') {
    iVar11 = (int)param_2[1];
    if (1 < (longlong)iVar11) {
      lVar5 = *param_2;
      memset(local_3c8,0,0x2f0);
      local_3d0 = (longlong)iVar11 * 0x50 + lVar5 + -0x50;
      local_3d8 = lVar5;
      fVar27 = logf((float)iVar11);
      local_3c8[0] = (int)(longlong)(fVar27 + fVar27);
      plVar10 = &local_3d8;
      do {
        pdVar21 = (double *)*plVar10;
        pdVar15 = (double *)plVar10[1];
        iVar11 = (int)plVar10[2];
        iVar4 = (int)((ulonglong)((longlong)pdVar15 - (longlong)pdVar21) >> 4) * -0x33333333;
        uVar22 = iVar4 + 1;
        pdVar9 = pdVar15;
        pdVar7 = pdVar21;
        if (iVar11 != 0) {
LAB_14749b7c3:
          if (8 < (int)uVar22) {
            pdVar12 = pdVar21 + (ulonglong)(uVar22 >> 1) * 10;
            pdVar8 = local_d0;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar8 = *pdVar12;
              pdVar12 = pdVar12 + 1;
              pdVar8 = pdVar8 + 1;
            }
            pdVar12 = pdVar21;
            pdVar8 = pdVar21 + (ulonglong)(uVar22 >> 1) * 10;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar8 = *pdVar12;
              pdVar12 = pdVar12 + 1;
              pdVar8 = pdVar8 + 1;
            }
            pdVar12 = local_d0;
            pdVar8 = pdVar21;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar8 = *pdVar12;
              pdVar12 = pdVar12 + 1;
              pdVar8 = pdVar8 + 1;
            }
            pdVar12 = pdVar15 + 10;
            pdVar8 = pdVar21;
            do {
              pdVar14 = pdVar8 + 10;
              pdVar16 = pdVar8 + 10;
              do {
                pdVar8 = pdVar16;
                pdVar23 = pdVar14;
                if (pdVar15 < pdVar8) break;
                pdVar14 = pdVar23 + 10;
                pdVar16 = pdVar8 + 10;
              } while (*(float *)(pdVar21 + 9) < *(float *)(pdVar8 + 9) ||
                       *(float *)(pdVar21 + 9) == *(float *)(pdVar8 + 9));
              pdVar14 = pdVar12 + -0x14;
              do {
                pdVar16 = pdVar12;
                pdVar24 = pdVar14;
                pdVar12 = pdVar16 + -10;
                if (pdVar12 <= pdVar21) break;
                pdVar14 = pdVar24 + -10;
              } while (*(float *)(pdVar16 + -1) < *(float *)(pdVar21 + 9) ||
                       *(float *)(pdVar16 + -1) == *(float *)(pdVar21 + 9));
              lVar5 = 10;
              pdVar14 = pdVar21;
              pdVar13 = pdVar8;
              pdVar17 = local_d0;
              if (pdVar12 < pdVar8) goto code_r0x00014749b89b;
              for (; lVar5 != 0; lVar5 = lVar5 + -1) {
                *pdVar17 = *pdVar13;
                pdVar13 = pdVar13 + 1;
                pdVar17 = pdVar17 + 1;
              }
              pdVar14 = pdVar12;
              pdVar16 = pdVar8;
              for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                *pdVar16 = *pdVar14;
                pdVar14 = pdVar14 + 1;
                pdVar16 = pdVar16 + 1;
              }
              pdVar14 = local_d0;
              pdVar16 = pdVar12;
              for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                *pdVar16 = *pdVar14;
                pdVar14 = pdVar14 + 1;
                pdVar16 = pdVar16 + 1;
              }
            } while( true );
          }
          while (pdVar7 = pdVar21, pdVar9 = pdVar21, pdVar21 < pdVar15) {
            while (pdVar12 = pdVar7, pdVar9 = pdVar9 + 10, pdVar9 <= pdVar15) {
              pdVar7 = pdVar9;
              if (*(float *)(pdVar12 + 9) < *(float *)(pdVar9 + 9) ||
                  *(float *)(pdVar12 + 9) == *(float *)(pdVar9 + 9)) {
                pdVar7 = pdVar12;
              }
            }
            pdVar9 = pdVar15 + -10;
            pdVar7 = pdVar12;
            pdVar8 = local_d0;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar8 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar8 = pdVar8 + 1;
            }
            pdVar7 = pdVar15;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar12 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar12 = pdVar12 + 1;
            }
            pdVar7 = local_d0;
            pdVar12 = pdVar15;
            for (lVar5 = 10; pdVar15 = pdVar9, lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar12 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar12 = pdVar12 + 1;
            }
          }
          goto LAB_14749bbd3;
        }
LAB_14749b946:
        if (uVar22 != 0) {
          iVar4 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
          iVar11 = iVar4;
joined_r0x00014749b96e:
          do {
            iVar20 = iVar11 * 2 + 1;
            if (iVar20 < (int)uVar22) {
              iVar19 = iVar11 * 2 + 2;
              if ((iVar19 < (int)uVar22) &&
                 (*(float *)(pdVar21 + (longlong)iVar19 * 10 + 9) <
                  *(float *)(pdVar21 + (longlong)iVar20 * 10 + 9) ||
                  *(float *)(pdVar21 + (longlong)iVar19 * 10 + 9) ==
                  *(float *)(pdVar21 + (longlong)iVar20 * 10 + 9))) {
                iVar20 = iVar19;
              }
              if (*(float *)(pdVar21 + (longlong)iVar20 * 10 + 9) <=
                  *(float *)(pdVar21 + (longlong)iVar11 * 10 + 9) &&
                  *(float *)(pdVar21 + (longlong)iVar11 * 10 + 9) !=
                  *(float *)(pdVar21 + (longlong)iVar20 * 10 + 9)) {
                pdVar15 = pdVar21 + (longlong)iVar11 * 10;
                pdVar9 = local_d0;
                for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                pdVar15 = pdVar21 + (longlong)iVar20 * 10;
                pdVar9 = pdVar21 + (longlong)iVar11 * 10;
                for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                pdVar15 = local_d0;
                pdVar9 = pdVar21 + (longlong)iVar20 * 10;
                for (lVar5 = 10; iVar11 = iVar20, lVar5 != 0; lVar5 = lVar5 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                goto joined_r0x00014749b96e;
              }
            }
            bVar26 = iVar4 != 0;
            iVar4 = iVar4 + -1;
            iVar11 = iVar4;
          } while (bVar26);
          if (1 < (int)uVar22) {
            pdVar15 = pdVar21;
            pdVar9 = local_d0;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar9 = *pdVar15;
              pdVar15 = pdVar15 + 1;
              pdVar9 = pdVar9 + 1;
            }
            pdVar15 = pdVar21 + ((ulonglong)uVar22 - 1) * 10;
            pdVar9 = pdVar21;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar9 = *pdVar15;
              pdVar15 = pdVar15 + 1;
              pdVar9 = pdVar9 + 1;
            }
            pdVar15 = local_d0;
            pdVar9 = pdVar21 + ((ulonglong)uVar22 - 1) * 10;
            for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *pdVar9 = *pdVar15;
              pdVar15 = pdVar15 + 1;
              pdVar9 = pdVar9 + 1;
            }
            uVar25 = (ulonglong)uVar22 - 1;
            if (uVar22 != 2) {
              do {
                iVar11 = 0;
                iVar20 = 1;
                iVar4 = 0;
                do {
                  iVar11 = iVar11 + 2;
                  iVar19 = iVar20;
                  if (((longlong)iVar11 < (longlong)uVar25) &&
                     (*(float *)(pdVar21 + (longlong)iVar11 * 10 + 9) <
                      *(float *)(pdVar21 + (longlong)iVar20 * 10 + 9) ||
                      *(float *)(pdVar21 + (longlong)iVar11 * 10 + 9) ==
                      *(float *)(pdVar21 + (longlong)iVar20 * 10 + 9))) {
                    iVar19 = iVar11;
                  }
                  if (*(float *)(pdVar21 + (longlong)iVar4 * 10 + 9) <
                      *(float *)(pdVar21 + (longlong)iVar19 * 10 + 9) ||
                      *(float *)(pdVar21 + (longlong)iVar4 * 10 + 9) ==
                      *(float *)(pdVar21 + (longlong)iVar19 * 10 + 9)) break;
                  pdVar15 = pdVar21 + (longlong)iVar4 * 10;
                  pdVar9 = local_d0;
                  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                    *pdVar9 = *pdVar15;
                    pdVar15 = pdVar15 + 1;
                    pdVar9 = pdVar9 + 1;
                  }
                  pdVar15 = pdVar21 + (longlong)iVar19 * 10;
                  pdVar9 = pdVar21 + (longlong)iVar4 * 10;
                  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                    *pdVar9 = *pdVar15;
                    pdVar15 = pdVar15 + 1;
                    pdVar9 = pdVar9 + 1;
                  }
                  pdVar15 = local_d0;
                  pdVar9 = pdVar21 + (longlong)iVar19 * 10;
                  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                    *pdVar9 = *pdVar15;
                    pdVar15 = pdVar15 + 1;
                    pdVar9 = pdVar9 + 1;
                  }
                  iVar11 = iVar19 * 2;
                  iVar20 = iVar19 * 2 + 1;
                  iVar4 = iVar19;
                } while ((longlong)iVar20 < (longlong)uVar25);
                pdVar15 = pdVar21;
                pdVar9 = local_d0;
                for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                pdVar15 = pdVar21 + (uVar25 - 1) * 10;
                pdVar9 = pdVar21;
                for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                pdVar15 = local_d0;
                pdVar9 = pdVar21 + (uVar25 - 1) * 10;
                for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *pdVar9 = *pdVar15;
                  pdVar15 = pdVar15 + 1;
                  pdVar9 = pdVar9 + 1;
                }
                bVar26 = 2 < uVar25;
                uVar25 = uVar25 - 1;
              } while (bVar26);
            }
          }
        }
LAB_14749bbd3:
        plVar10 = plVar10 + -3;
      } while (&local_3d8 <= plVar10);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014749c52e:
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar17 = *pdVar14;
    pdVar14 = pdVar14 + 1;
    pdVar17 = pdVar17 + 1;
  }
  pdVar14 = pdVar12;
  pdVar13 = pdVar21;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar13 = *pdVar14;
    pdVar14 = pdVar14 + 1;
    pdVar13 = pdVar13 + 1;
  }
  pdVar14 = local_d0;
  pdVar13 = pdVar12;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar13 = *pdVar14;
    pdVar14 = pdVar14 + 1;
    pdVar13 = pdVar13 + 1;
  }
  iVar11 = iVar11 + -1;
  pdVar16 = pdVar16 + -0x14;
  if ((longlong)pdVar24 - (longlong)pdVar7 < (longlong)pdVar9 - (longlong)pdVar23) {
    if (pdVar8 < pdVar15) {
      *plVar10 = (longlong)pdVar8;
      plVar10[1] = (longlong)pdVar15;
      *(int *)(plVar10 + 2) = iVar11;
      plVar10 = plVar10 + 3;
    }
    pdVar23 = pdVar21;
    if (pdVar12 <= pdVar21 + 10) goto LAB_14749ca89;
  }
  else {
    if (pdVar21 + 10 < pdVar12) {
      *plVar10 = (longlong)pdVar21;
      plVar10[1] = (longlong)pdVar16;
      *(int *)(plVar10 + 2) = iVar11;
      plVar10 = plVar10 + 3;
    }
    pdVar21 = pdVar8;
    pdVar16 = pdVar15;
    pdVar24 = pdVar15;
    if (pdVar15 <= pdVar8) goto LAB_14749ca89;
  }
  iVar4 = (int)((ulonglong)((longlong)pdVar24 - (longlong)pdVar23) >> 4) * -0x33333333;
  uVar22 = iVar4 + 1;
  pdVar15 = pdVar16;
  pdVar9 = pdVar24;
  pdVar7 = pdVar23;
  if (iVar11 == 0) goto LAB_14749c5d9;
  goto LAB_14749c388;
code_r0x00014749bdef:
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar17 = *pdVar14;
    pdVar14 = pdVar14 + 1;
    pdVar17 = pdVar17 + 1;
  }
  pdVar14 = pdVar12;
  pdVar13 = pdVar21;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar13 = *pdVar14;
    pdVar14 = pdVar14 + 1;
    pdVar13 = pdVar13 + 1;
  }
  pdVar14 = local_d0;
  pdVar13 = pdVar12;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar13 = *pdVar14;
    pdVar14 = pdVar14 + 1;
    pdVar13 = pdVar13 + 1;
  }
  iVar11 = iVar11 + -1;
  pdVar16 = pdVar16 + -0x14;
  if ((longlong)pdVar24 - (longlong)pdVar7 < (longlong)pdVar9 - (longlong)pdVar23) {
    if (pdVar8 < pdVar15) {
      *plVar10 = (longlong)pdVar8;
      plVar10[1] = (longlong)pdVar15;
      *(int *)(plVar10 + 2) = iVar11;
      plVar10 = plVar10 + 3;
    }
    pdVar23 = pdVar21;
    if (pdVar12 <= pdVar21 + 10) goto LAB_14749c2d6;
  }
  else {
    if (pdVar21 + 10 < pdVar12) {
      *plVar10 = (longlong)pdVar21;
      plVar10[1] = (longlong)pdVar16;
      *(int *)(plVar10 + 2) = iVar11;
      plVar10 = plVar10 + 3;
    }
    pdVar21 = pdVar8;
    pdVar16 = pdVar15;
    pdVar24 = pdVar15;
    if (pdVar15 <= pdVar8) goto LAB_14749c2d6;
  }
  iVar4 = (int)((ulonglong)((longlong)pdVar24 - (longlong)pdVar23) >> 4) * -0x33333333;
  uVar22 = iVar4 + 1;
  pdVar15 = pdVar16;
  pdVar9 = pdVar24;
  pdVar7 = pdVar23;
  if (iVar11 == 0) goto LAB_14749be9a;
  goto LAB_14749bc73;
code_r0x00014749b89b:
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar17 = *pdVar14;
    pdVar14 = pdVar14 + 1;
    pdVar17 = pdVar17 + 1;
  }
  pdVar14 = pdVar12;
  pdVar13 = pdVar21;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar13 = *pdVar14;
    pdVar14 = pdVar14 + 1;
    pdVar13 = pdVar13 + 1;
  }
  pdVar14 = local_d0;
  pdVar13 = pdVar12;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar13 = *pdVar14;
    pdVar14 = pdVar14 + 1;
    pdVar13 = pdVar13 + 1;
  }
  iVar11 = iVar11 + -1;
  pdVar16 = pdVar16 + -0x14;
  if ((longlong)pdVar24 - (longlong)pdVar7 < (longlong)pdVar9 - (longlong)pdVar23) {
    if (pdVar8 < pdVar15) {
      *plVar10 = (longlong)pdVar8;
      plVar10[1] = (longlong)pdVar15;
      *(int *)(plVar10 + 2) = iVar11;
      plVar10 = plVar10 + 3;
    }
    pdVar23 = pdVar21;
    if (pdVar12 <= pdVar21 + 10) goto LAB_14749bbd3;
  }
  else {
    if (pdVar21 + 10 < pdVar12) {
      *plVar10 = (longlong)pdVar21;
      plVar10[1] = (longlong)pdVar16;
      *(int *)(plVar10 + 2) = iVar11;
      plVar10 = plVar10 + 3;
    }
    pdVar21 = pdVar8;
    pdVar16 = pdVar15;
    pdVar24 = pdVar15;
    if (pdVar15 <= pdVar8) goto LAB_14749bbd3;
  }
  iVar4 = (int)((ulonglong)((longlong)pdVar24 - (longlong)pdVar23) >> 4) * -0x33333333;
  uVar22 = iVar4 + 1;
  pdVar15 = pdVar16;
  pdVar9 = pdVar24;
  pdVar7 = pdVar23;
  if (iVar11 == 0) goto LAB_14749b946;
  goto LAB_14749b7c3;
}



// FUNCTION 14749cae6 FUN_14749cae6 body=592 status=ok
// SIG undefined FUN_14749cae6(void)

void FUN_14749cae6(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined4 local_b4;
  undefined4 local_88;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  memset(&local_158,0,0x100);
  local_88 = 0xffffffff;
  local_158._4_4_ = 0x3f800000;
  local_b4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_158);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_168 = local_48;
  local_178 = local_58;
  uStack_170 = uStack_50;
  local_188 = local_30;
  local_198 = local_40;
  uStack_194 = uStack_3c;
  uStack_190 = uStack_38;
  uStack_18c = uStack_34;
  if (*(longlong *)(param_1 + 0x390) != 0) {
    puVar1 = &local_158;
    if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_2 + 0x38);
    }
    *puVar1 = 0x3f80000000000000;
    memset(puVar1 + 1,0,0x9c);
    *(undefined4 *)((longlong)puVar1 + 0xa4) = 0xffffffff;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0xffffffff;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    *(undefined8 *)((longlong)puVar1 + 0xe4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xec) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
    puVar1[0xe] = CONCAT44(uStack_194,local_198);
    puVar1[0xf] = CONCAT44(uStack_18c,uStack_190);
    puVar1[0x10] = local_188;
    *(undefined4 *)(puVar1 + 0x11) = (undefined4)local_178;
    *(undefined4 *)((longlong)puVar1 + 0x8c) = local_178._4_4_;
    *(undefined4 *)(puVar1 + 0x12) = (undefined4)uStack_170;
    *(undefined4 *)((longlong)puVar1 + 0x94) = uStack_170._4_4_;
    puVar1[0x13] = local_168;
  }
  *param_3 = 0;
  if ((local_28 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749cd44 FUN_14749cd44 body=475 status=ok
// SIG undefined FUN_14749cd44(void)

void FUN_14749cd44(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1427dc336(local_28);
  switchD_143c3d4dc::caseD_3d(param_1,local_28);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_140056680(&local_58,&DAT_149e01fe8);
  }
  else {
    local_88[0] = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18);
    FUN_1400021e4(local_88,&local_58);
  }
  local_48 = DAT_14caa92f8;
  local_40 = local_58;
  uStack_38 = uStack_50;
  local_58 = 0;
  uStack_50 = 0;
  local_30 = 1;
  FUN_1407c67d8(param_2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_140056680(&local_58,L"INVALID");
  }
  else {
    FUN_1474b5564(*(longlong *)(param_1 + 0x38),local_88);
    local_58 = 0;
    uStack_50 = 0;
    FUN_1407c869a(local_88,&local_58,0);
  }
  local_78 = DAT_14caa9300;
  local_70 = local_58;
  uStack_68 = uStack_50;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  FUN_1407c67d8(param_2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_140056680(&local_58,L"INVALID");
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    FUN_1407c869a(param_1 + 0x40,&local_58,0);
  }
  local_a8 = DAT_14caa9308;
  local_a0 = local_58;
  uStack_98 = uStack_50;
  local_58 = 0;
  uStack_50 = 0;
  local_90 = 0;
  FUN_1407c67d8(param_2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749cf20 FUN_14749cf20 body=143 status=ok
// SIG undefined FUN_14749cf20(void)

undefined4 FUN_14749cf20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_58 [32];
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (((*(int *)(param_1 + 0x44) == 0 && *(int *)(param_1 + 0x40) == 0) &&
      *(int *)(param_1 + 0x48) == 0) && *(int *)(param_1 + 0x4c) == 0) {
    bVar2 = false;
    local_38 = 0;
  }
  else {
    FUN_1474b5572(param_2,&local_38);
    local_38 = *(uint *)(param_1 + 0x40) ^ local_38;
    bVar2 = *(int *)(param_1 + 0x4c) == local_2c &&
            (*(int *)(param_1 + 0x48) == local_30 &&
            (*(int *)(param_1 + 0x44) == local_34 && local_38 == 0));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT31((int3)(local_38 >> 8),lVar1 == param_2 & bVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749cfb0 FUN_14749cfb0 body=127 status=ok
// SIG undefined FUN_14749cfb0(void)

void FUN_14749cfb0(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147c685fe(&local_40);
  local_40 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (local_40 == 0) {
      local_40 = 0;
    }
    else {
      FUN_1456cec3c();
      local_40 = *param_2;
    }
  }
  local_38 = (undefined4)param_2[1];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = (undefined4)param_2[2];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_28 = (undefined4)param_2[3];
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_20 = (undefined4)param_2[4];
  FUN_1447cd2ec(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749d030 FUN_14749d030 body=215 status=ok
// SIG undefined FUN_14749d030(void)

void FUN_14749d030(undefined8 param_1)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = 0;
  local_d0 = DAT_14c8464e0;
  uStack_c8 = DAT_14c8464e8;
  local_c0 = DAT_14c8464f0;
  local_b8 = DAT_14c8463d0;
  uStack_b0 = DAT_14c8463d8;
  local_a8 = (undefined4)DAT_14c8463e0;
  uStack_a4 = DAT_14c8463e0._4_4_;
  uStack_a0 = (undefined4)DAT_14c8463e8;
  uStack_9c = DAT_14c8463e8._4_4_;
  local_98 = DAT_14c8464e0;
  uStack_90 = DAT_14c8464e8;
  local_88 = DAT_14c8464f0;
  local_80 = DAT_14c8464e0;
  uStack_78 = DAT_14c8464e8;
  local_70 = DAT_14c8464f0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_14749d108(&local_d8);
  FUN_1447cd2ec(param_1,&local_d8);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749d108 FUN_14749d108 body=90 status=ok
// SIG undefined FUN_14749d108(void)

longlong * FUN_14749d108(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  memcpy(param_1 + 1,param_2 + 1,0xa8);
  FUN_14054c6c4(param_1 + 0x16,param_2 + 0x16);
  return param_1;
}



// FUNCTION 14749d192 FUN_14749d192 body=266 status=ok
// SIG undefined FUN_14749d192(void)

void FUN_14749d192(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    puVar1 = local_38;
    if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(param_2 + 0x38);
    }
    local_1c = local_20;
    FUN_146ee90f8(*(longlong *)(param_1 + 0xa40),&local_1c,puVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749d2b4 FUN_14749d2b4 body=266 status=ok
// SIG undefined FUN_14749d2b4(void)

void FUN_14749d2b4(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    puVar1 = local_38;
    if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(param_2 + 0x38);
    }
    local_1c = local_20;
    FUN_146ee8ef4(*(longlong *)(param_1 + 0xa40),&local_1c,puVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749d3c0 FUN_14749d3c0 body=266 status=ok
// SIG undefined FUN_14749d3c0(void)

void FUN_14749d3c0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    puVar1 = local_38;
    if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(param_2 + 0x38);
    }
    local_1c = local_20;
    FUN_146ee8df0(*(longlong *)(param_1 + 0xa40),&local_1c,puVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749d4cc FUN_14749d4cc body=617 status=ok
// SIG undefined FUN_14749d4cc(void)

void FUN_14749d4cc(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    local_24 = local_28;
    local_58 = local_50;
    local_60 = local_4c;
    local_68 = local_48;
    FUN_146ee8b3c(*(longlong *)(param_1 + 0xa40),&local_24,puVar1,local_44);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749d736 FUN_14749d736 body=617 status=ok
// SIG undefined FUN_14749d736(void)

void FUN_14749d736(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    local_24 = local_28;
    local_58 = local_50;
    local_60 = local_4c;
    local_68 = local_48;
    FUN_146ee8c96(*(longlong *)(param_1 + 0xa40),&local_24,puVar1,local_44);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749d9a0 FUN_14749d9a0 body=241 status=ok
// SIG undefined FUN_14749d9a0(void)

void FUN_14749d9a0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
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
  local_48 = local_28;
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  FUN_14749da92(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749da92 FUN_14749da92 body=248 status=ok
// SIG undefined FUN_14749da92(void)

void FUN_14749da92(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 local_f8 [200];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  local_118 = *param_3;
  uStack_114 = param_3[1];
  uStack_110 = param_3[2];
  uStack_10c = param_3[3];
  local_108 = *(undefined8 *)(param_3 + 4);
  puVar1[1] = 0;
  FUN_1446ddc76(puVar1 + 1,&DAT_149e02088,1);
  *puVar1 = &PTR_FUN_149f62c00;
  *(undefined4 *)(puVar1 + 2) = param_2;
  *(undefined4 *)(puVar1 + 3) = local_118;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_114;
  *(undefined4 *)(puVar1 + 4) = uStack_110;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_10c;
  puVar1[5] = local_108;
  puVar1[6] = 0x200000004;
  *(undefined4 *)(puVar1 + 7) = 1;
  FUN_1474900d2(local_f8,1,puVar1);
  FUN_1403c27ec(param_1,local_f8);
  FUN_14017126a(local_f8);
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749db8c FUN_14749db8c body=266 status=ok
// SIG undefined FUN_14749db8c(void)

void FUN_14749db8c(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    puVar1 = local_38;
    if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(param_2 + 0x38);
    }
    local_1c = local_20;
    FUN_146ee8ff8(*(longlong *)(param_1 + 0xa40),&local_1c,puVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749dc9c FUN_14749dc9c body=390 status=ok
// SIG undefined FUN_14749dc9c(void)

void FUN_14749dc9c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_25;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_25 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  FUN_14749de24(param_1,iVar1 != 0,local_25,local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749de24 FUN_14749de24 body=145 status=ok
// SIG undefined FUN_14749de24(void)

void FUN_14749de24(undefined8 param_1,char param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [200];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_5 != 0 && param_2 == '\x01') {
    uVar1 = FUN_1474a8466(param_3);
    FUN_14748fd2e(local_f0,uVar1,param_5,param_4);
    FUN_1403c27ec(param_1,local_f0);
    FUN_14017126a(local_f0);
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749ded8 FUN_14749ded8 body=154 status=ok
// SIG undefined FUN_14749ded8(void)

void FUN_14749ded8(undefined8 param_1,longlong param_2)

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
  FUN_14749df74(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749df74 FUN_14749df74 body=125 status=ok
// SIG undefined FUN_14749df74(void)

void FUN_14749df74(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  ulonglong *local_38;
  longlong local_30 [2];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0xa40);
  if (lVar1 != 0) {
    local_40 = &local_1c;
    local_38 = &local_18;
    local_1c = param_2;
    FUN_1474a88e2(local_30);
    FUN_1401c16de(lVar1,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749dff6 FUN_14749dff6 body=175 status=ok
// SIG undefined FUN_14749dff6(void)

void FUN_14749dff6(longlong param_1,longlong param_2)

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
  *(byte *)(param_1 + 0x851) = *(byte *)(param_1 + 0x851) & 0xfe | local_1c == 0;
  FUN_140ca2e9a(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749e0aa FUN_14749e0aa body=175 status=ok
// SIG undefined FUN_14749e0aa(void)

void FUN_14749e0aa(longlong param_1,longlong param_2)

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
  *(byte *)(param_1 + 0x851) = *(byte *)(param_1 + 0x851) & 0xfe | local_1c != 0;
  FUN_140ca2e9a(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749e15a FUN_14749e15a body=215 status=ok
// SIG undefined FUN_14749e15a(void)

void FUN_14749e15a(longlong param_1,longlong param_2,void **param_3)

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
  local_30 = *(int *)(param_1 + 0x6a0);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_1 + 0x698);
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1447c510a(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 << 2);
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



// FUNCTION 14749e232 FUN_14749e232 body=139 status=ok
// SIG undefined FUN_14749e232(void)

void FUN_14749e232(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14749e2be(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749e2be FUN_14749e2be body=683 status=ok
// SIG undefined FUN_14749e2be(void)

undefined8 * FUN_14749e2be(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x660) == 0) {
    FUN_1400b22c2(local_50,&DAT_149e3cc88);
  }
  else {
    local_40 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x18);
    FUN_1400021e4(&local_40,local_50);
  }
  FUN_1400b22c2(local_60,"RestCollection - ");
  FUN_1401c7f3e(&local_40,local_60,local_50);
  iVar7 = local_38 + -1;
  if (local_38 == 0) {
    iVar7 = 0;
  }
  FUN_1400020e8(param_2,local_40,iVar7);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_14047a987(param_2,&DAT_149dfc0af,1);
  lVar3 = *(longlong *)(param_1 + 0x660);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x218);
    plVar5 = *(longlong **)(lVar3 + 0x220);
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
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x660) + 0x218);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      FUN_146ecea92(uVar6,&local_40);
      iVar7 = local_38 + -1;
      if (local_38 == 0) {
        iVar7 = 0;
      }
      FUN_1400020e8(param_2,local_40,iVar7);
      if (local_40 != 0) {
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
    }
  }
  puVar8 = &DAT_14a179933;
  if (*(longlong *)(param_1 + 0xa48) == 0) {
    puVar8 = &DAT_14a179937;
  }
  FUN_1400b22c2(local_50,puVar8);
  FUN_1400b22c2(local_60,"DynamicCollection - ");
  FUN_1401c7f3e(&local_40,local_60,local_50);
  iVar7 = local_38 + -1;
  if (local_38 == 0) {
    iVar7 = 0;
  }
  FUN_1400020e8(param_2,local_40,iVar7);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_14047a987(param_2,&DAT_149dfc0af,1);
  if (*(longlong *)(param_1 + 0xa48) != 0) {
    FUN_146ecea92(*(longlong *)(param_1 + 0xa48),&local_40);
    iVar7 = local_38 + -1;
    if (local_38 == 0) {
      iVar7 = 0;
    }
    FUN_1400020e8(param_2,local_40,iVar7);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749e56a FUN_14749e56a body=161 status=ok
// SIG undefined FUN_14749e56a(void)

void FUN_14749e56a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_14749e60c(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749e60c FUN_14749e60c body=293 status=ok
// SIG undefined FUN_14749e60c(void)

int FUN_14749e60c(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x660);
  iVar8 = -1;
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x218);
    plVar5 = *(longlong **)(lVar3 + 0x220);
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
    if (lVar4 != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
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
      if ((int)param_2 < -1) {
        local_34 = param_2;
        puVar6 = (undefined8 *)FUN_1474a8934(*(undefined8 *)(param_1 + 0xa40));
        if ((puVar6 == (undefined8 *)0x0) || (*(int *)(puVar6 + 1) == 0)) goto LAB_14749e6dd;
        param_2 = *(uint *)(*(longlong *)(lVar3 + 0x120) + (longlong)*(int *)*puVar6 * 4);
      }
      if (-1 < (int)param_2) {
        uVar7 = (ulonglong)param_2;
        iVar8 = -1;
        do {
          uVar7 = (ulonglong)*(int *)(*(longlong *)(lVar3 + 0x120) + uVar7 * 4);
          iVar8 = iVar8 + 1;
        } while (uVar7 != 0xffffffffffffffff);
      }
    }
  }
LAB_14749e6dd:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749e732 FUN_14749e732 body=139 status=ok
// SIG undefined FUN_14749e732(void)

void FUN_14749e732(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14749e7be(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749e7be FUN_14749e7be body=2225 status=ok
// SIG undefined FUN_14749e7be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14749e7be(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar24;
  uint uVar25;
  double *pdVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar43;
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_2c8 [40];
  double *local_2a0;
  double local_298;
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
  double local_1f8;
  double dStack_1f0;
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
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  double *pdVar23;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  *param_2 = 0;
  param_2[1] = 0;
  lVar24 = *(longlong *)(param_1 + 0x660);
  if (lVar24 != 0) {
    lVar27 = *(longlong *)(lVar24 + 0x218);
    plVar20 = *(longlong **)(lVar24 + 0x220);
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar2 = (int *)((longlong)plVar20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
    if (lVar27 != 0) {
      lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
      plVar20 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar20 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar2 = (int *)((longlong)plVar20 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      FUN_146eb7819(lVar24 + 0xb0,lVar24 + 0x110,param_2);
      pdVar26 = DAT_14c9974a8;
      FUN_1446ddc76(&local_2a0,"MassToLocal",1);
      plVar20 = (longlong *)FUN_1474a89b0(lVar24);
      if (((plVar20 != (longlong *)0x0) &&
          (lVar24 = param_2[1], iVar19 = (**(code **)(*plVar20 + 0x60))(plVar20),
          (int)lVar24 == iVar19)) && (0 < (int)param_2[1])) {
        lVar27 = 0;
        lVar24 = 0;
        pdVar23 = local_2a0;
        do {
          auVar40 = _DAT_149934d80;
          lVar8 = plVar20[2];
          lVar21 = *param_2;
          auVar32 = *(undefined1 (*) [16])(lVar21 + 0x40 + lVar27);
          dVar9 = auVar32._0_8_;
          dVar11 = auVar32._8_8_;
          auVar5 = *(undefined1 (*) [16])(lVar21 + 0x50 + lVar27);
          dVar10 = auVar5._0_8_;
          auVar6 = *(undefined1 (*) [16])(lVar8 + 0x40 + lVar27);
          auVar7 = *(undefined1 (*) [16])(lVar8 + 0x50 + lVar27);
          auVar32 = minpd(auVar6,auVar32);
          auVar38 = minpd(auVar7,auVar5);
          auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
          auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
          uVar22 = movmskpd((int)pdVar23,auVar33);
          pdVar23 = (double *)(ulonglong)uVar22;
          auVar32._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
          auVar32._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
          uVar25 = movmskpd((int)pdVar26,auVar32);
          if ((uVar25 & 0x3fffffff) == 0 && uVar22 == 0) {
            dVar43 = *(double *)(lVar8 + lVar27);
            dVar47 = ((double *)(lVar8 + lVar27))[1];
            pdVar26 = (double *)(lVar8 + 0x10 + lVar27);
            dVar13 = *pdVar26;
            dVar14 = pdVar26[1];
            dVar15 = *(double *)(lVar21 + lVar27);
            dVar16 = ((double *)(lVar21 + lVar27))[1];
            pdVar26 = (double *)(lVar21 + 0x10 + lVar27);
            dVar17 = *pdVar26;
            dVar18 = pdVar26[1];
            pdVar26 = (double *)(lVar21 + 0x18 + lVar27);
            dVar42 = *pdVar26;
            dVar30 = *pdVar26;
            dVar46 = *(double *)(lVar21 + lVar27);
            dVar45 = *(double *)(lVar21 + lVar27);
            pdVar26 = (double *)(lVar21 + 8 + lVar27);
            dVar34 = *pdVar26;
            dVar36 = *pdVar26;
            pdVar26 = (double *)(lVar21 + 0x10 + lVar27);
            dVar37 = *pdVar26;
            dVar41 = *pdVar26;
            dVar31 = dVar47 * dVar37 * -1.0 +
                     dVar13 * dVar34 + dVar14 * dVar46 * 1.0 + dVar43 * dVar42;
            dVar35 = dVar43 * dVar41 * 1.0 +
                     dVar14 * dVar36 + dVar13 * dVar45 * -1.0 + dVar47 * dVar30;
            auVar40._0_8_ =
                 dVar14 * dVar37 * 1.0 +
                 ((dVar46 * dVar47 * 1.0 + dVar13 * dVar42) - dVar43 * dVar34);
            auVar40._8_8_ =
                 dVar13 * dVar41 * -1.0 +
                 ((dVar45 * dVar43 * -1.0 + dVar14 * dVar30) - dVar47 * dVar36);
            pdVar26 = (double *)(lVar8 + 0x20 + lVar27);
            dVar37 = *pdVar26 * dVar9;
            dVar41 = pdVar26[1] * dVar11;
            pdVar26 = (double *)(lVar8 + 0x30 + lVar27);
            dVar34 = *pdVar26 * dVar10;
            dVar36 = pdVar26[1] * auVar5._8_8_;
            dVar46 = dVar41 * dVar15 - dVar16 * dVar37;
            dVar47 = dVar34 * dVar16 - dVar17 * dVar41;
            dVar43 = dVar37 * dVar17 - dVar15 * dVar34;
            dVar45 = dVar36 * dVar18 - dVar18 * dVar36;
            dVar47 = dVar47 + dVar47;
            dVar43 = dVar43 + dVar43;
            dVar46 = dVar46 + dVar46;
            dVar45 = dVar45 + dVar45;
            pdVar26 = (double *)(lVar21 + 0x20 + lVar27);
            dVar37 = (dVar46 * dVar16 - dVar17 * dVar43) + dVar42 * dVar47 + dVar37 + *pdVar26;
            dVar41 = (dVar47 * dVar17 - dVar46 * dVar15) + dVar30 * dVar43 + dVar41 + pdVar26[1];
            pdVar26 = (double *)(lVar21 + 0x30 + lVar27);
            dVar42 = (dVar43 * dVar15 - dVar16 * dVar47) + dVar42 * dVar46 + dVar34 + *pdVar26;
            dVar30 = (dVar45 * dVar18 - dVar45 * dVar18) + dVar30 * dVar45 + dVar36 + pdVar26[1];
            pdVar26 = (double *)0x0;
          }
          else {
            dVar46 = *(double *)(lVar21 + lVar27);
            dVar45 = ((double *)(lVar21 + lVar27))[1];
            dVar42 = *(double *)(lVar21 + 0x10 + lVar27);
            dVar34 = dVar45 + dVar45;
            dVar36 = dVar42 + dVar42;
            dVar30 = dVar46 * (dVar46 + dVar46);
            local_1f8 = ((double)DAT_149934d80 - (dVar42 * dVar36 + dVar45 * dVar34)) * dVar9;
            dStack_1d0 = (DAT_149934d80._8_8_ - (dVar42 * dVar36 + dVar30)) * dVar11;
            local_1a8 = (1.0 - (dVar30 + dVar45 * dVar34)) * dVar10;
            dVar42 = *(double *)(lVar21 + lVar27) * dVar36;
            pdVar26 = (double *)(lVar21 + 0x18 + lVar27);
            dVar30 = *pdVar26;
            dVar37 = dVar36 * dVar30;
            dVar41 = (dVar46 + dVar46) * *pdVar26;
            dVar30 = dVar34 * dVar30;
            dStack_1f0 = (dVar34 * dVar46 + dVar37) * dVar9;
            local_1c8 = (dVar36 * dVar45 + dVar41) * dVar11;
            local_1b8 = (dVar30 + dVar42) * dVar10;
            local_1d8 = (dVar34 * dVar46 - dVar37) * dVar11;
            dStack_1b0 = (dVar36 * dVar45 - dVar41) * dVar10;
            local_1e8 = (dVar42 - dVar30) * dVar9;
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            puVar3 = (undefined8 *)(lVar21 + 0x20 + lVar27);
            local_198 = *puVar3;
            uStack_190 = puVar3[1];
            local_188 = *(undefined8 *)(lVar21 + 0x30 + lVar27);
            uStack_180 = 0x3ff0000000000000;
            dVar46 = *(double *)(lVar8 + lVar27);
            dVar45 = ((double *)(lVar8 + lVar27))[1];
            dVar42 = *(double *)(lVar8 + 0x10 + lVar27);
            pdVar26 = (double *)(lVar8 + 0x40 + lVar27);
            local_268 = *pdVar26;
            local_258 = pdVar26[1];
            dStack_230 = *(double *)(lVar8 + 0x50 + lVar27);
            dVar41 = dVar45 + dVar45;
            dVar34 = dVar42 + dVar42;
            dVar30 = dVar46 * (dVar46 + dVar46);
            local_278 = ((double)DAT_149934d80 - (dVar42 * dVar34 + dVar45 * dVar41)) * local_268;
            dStack_250 = (DAT_149934d80._8_8_ - (dVar42 * dVar34 + dVar30)) * local_258;
            local_228 = (1.0 - (dVar30 + dVar45 * dVar41)) * dStack_230;
            dVar42 = *(double *)(lVar8 + lVar27) * dVar34;
            pdVar26 = (double *)(lVar8 + 0x18 + lVar27);
            dVar30 = *pdVar26;
            dVar36 = dVar34 * dVar30;
            dVar37 = (dVar46 + dVar46) * *pdVar26;
            dVar30 = dVar41 * dVar30;
            dStack_270 = (dVar41 * dVar46 + dVar36) * local_268;
            local_248 = (dVar34 * dVar45 + dVar37) * local_258;
            local_238 = (dVar30 + dVar42) * dStack_230;
            local_268 = (dVar42 - dVar30) * local_268;
            local_258 = (dVar41 * dVar46 - dVar36) * local_258;
            dStack_230 = (dVar34 * dVar45 - dVar37) * dStack_230;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            puVar3 = (undefined8 *)(lVar8 + 0x20 + lVar27);
            local_218 = *puVar3;
            uStack_210 = puVar3[1];
            local_208 = *(undefined8 *)(lVar8 + 0x30 + lVar27);
            uStack_200 = 0x3ff0000000000000;
            pdVar26 = &local_1f8;
            FUN_1447fea8d(&local_178,&local_278);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar38._8_8_ = -(ulonglong)(0.0 <= auVar6._8_8_ * dVar11);
            auVar38._0_8_ = -(ulonglong)(0.0 <= auVar6._0_8_ * dVar9);
            auVar32 = blendvpd(_DAT_149936790,auVar40,auVar38);
            uVar28 = -(ulonglong)(0.0 <= auVar7._0_8_ * dVar10);
            dVar30 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
            dVar42 = auVar32._0_8_;
            local_168 = local_168 * dVar42;
            local_170 = local_170 * dVar42;
            local_178 = local_178 * dVar42;
            dVar42 = auVar32._8_8_;
            local_148 = local_148 * dVar42;
            local_150 = local_150 * dVar42;
            local_158 = dVar42 * local_158;
            local_128 = local_128 * dVar30;
            local_130 = local_130 * dVar30;
            local_138 = dVar30 * local_138;
            pdVar23 = &local_178;
            FUN_14481fd10(&local_298);
            dVar30 = local_288 * local_288 + local_298 * local_298;
            dVar42 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar39._0_8_ = dVar30 + dVar42;
            auVar39._8_8_ = dVar30 + dVar42;
            auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
            auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
            auVar32 = sqrtpd(auVar39,auVar39);
            auVar32 = divpd(auVar40,auVar32);
            auVar44._0_8_ = auVar32._0_8_ * local_288;
            auVar44._8_8_ = auVar32._8_8_ * dStack_280;
            dVar31 = (double)((ulonglong)(local_298 * auVar32._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
            dVar35 = (double)((ulonglong)(dStack_290 * auVar32._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
            auVar40 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar44,auVar29);
            dVar30 = 0.0;
            lVar21 = *param_2;
            dVar37 = local_118;
            dVar41 = dStack_110;
            dVar42 = local_108;
          }
          dVar46 = auVar7._8_8_ * auVar5._8_8_;
          dVar11 = auVar6._8_8_ * dVar11;
          *(double *)(lVar21 + lVar27) = dVar31;
          ((double *)(lVar21 + lVar27))[1] = dVar35;
          *(undefined1 (*) [16])(lVar21 + 0x10 + lVar27) = auVar40;
          pdVar4 = (double *)(lVar21 + 0x20 + lVar27);
          *pdVar4 = dVar37;
          pdVar4[1] = dVar41;
          auVar5._8_4_ = SUB84(dVar30,0);
          auVar5._0_8_ = dVar42;
          auVar5._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
          *(undefined1 (*) [16])(lVar21 + 0x30 + lVar27) = auVar5;
          auVar12._8_4_ = SUB84(dVar11,0);
          auVar12._0_8_ = auVar6._0_8_ * dVar9;
          auVar12._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
          *(undefined1 (*) [16])(lVar21 + 0x40 + lVar27) = auVar12;
          auVar6._8_4_ = SUB84(dVar46,0);
          auVar6._0_8_ = auVar7._0_8_ * dVar10;
          auVar6._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
          *(undefined1 (*) [16])(lVar21 + 0x50 + lVar27) = auVar6;
          lVar24 = lVar24 + 1;
          lVar27 = lVar27 + 0x60;
        } while (lVar24 < (int)param_2[1]);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14749f0b4 FUN_14749f0b4 body=229 status=ok
// SIG undefined FUN_14749f0b4(void)

void FUN_14749f0b4(undefined8 param_1,longlong param_2,longlong *param_3)

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
  FUN_14749f19a(param_1,&local_38,local_24 != 0);
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



// FUNCTION 14749f19a FUN_14749f19a body=2504 status=ok
// SIG undefined FUN_14749f19a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14749f19a(longlong param_1,longlong *param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  void *_Src;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar24;
  uint uVar25;
  double *pdVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar43;
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_2c8 [40];
  undefined ***local_2a0;
  double local_298;
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
  double local_1f8;
  double dStack_1f0;
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
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined **local_178;
  double local_170;
  void *local_168;
  int local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  undefined ***pppuVar23;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  *param_2 = 0;
  param_2[1] = 0;
  lVar24 = *(longlong *)(param_1 + 0x660);
  if (lVar24 != 0) {
    lVar27 = *(longlong *)(lVar24 + 0x218);
    plVar20 = *(longlong **)(lVar24 + 0x220);
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar2 = (int *)((longlong)plVar20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
    if (lVar27 != 0) {
      lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
      plVar20 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar20 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar2 = (int *)((longlong)plVar20 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      iVar19 = *(int *)(param_1 + 0x770);
      if (((longlong)iVar19 < 1) || ((iVar19 == *(int *)(lVar24 + 200) & (param_3 ^ 1)) == 0)) {
        lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
        plVar20 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
        if (plVar20 == (longlong *)0x0) {
          FUN_146eb7819(lVar27 + 0xb0,lVar24 + 0x110,param_2);
        }
        else {
          LOCK();
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
          UNLOCK();
          FUN_146eb7819(lVar27 + 0xb0,lVar24 + 0x110,param_2);
          LOCK();
          plVar1 = plVar20 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar2 = (int *)((longlong)plVar20 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
        }
      }
      else {
        local_170 = (double)((ulonglong)local_170 & 0xffffffffffffff00);
        local_178 = &PTR_LAB_149f6b350;
        local_168 = (void *)0x0;
        _Src = *(void **)(param_1 + 0x768);
        local_160 = iVar19;
        FUN_144756262(&local_168,iVar19,0);
        memcpy(local_168,_Src,(longlong)iVar19 * 0x60);
        local_178 = &PTR_LAB_149f6b2c0;
        FUN_146eb7685(&local_178,lVar24 + 0x110,param_2);
        local_178 = &PTR_LAB_149f6b350;
        if (local_168 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      pdVar26 = DAT_14c9974a8;
      FUN_1446ddc76(&local_2a0,"MassToLocal",1);
      plVar20 = (longlong *)FUN_1474a89b0(lVar24);
      if (((plVar20 != (longlong *)0x0) &&
          (lVar24 = param_2[1], iVar19 = (**(code **)(*plVar20 + 0x60))(plVar20),
          (int)lVar24 == iVar19)) && (0 < (int)param_2[1])) {
        lVar27 = 0;
        lVar24 = 0;
        pppuVar23 = local_2a0;
        do {
          auVar40 = _DAT_149934d80;
          lVar8 = plVar20[2];
          lVar21 = *param_2;
          auVar32 = *(undefined1 (*) [16])(lVar21 + 0x40 + lVar27);
          dVar9 = auVar32._0_8_;
          dVar11 = auVar32._8_8_;
          auVar5 = *(undefined1 (*) [16])(lVar21 + 0x50 + lVar27);
          dVar10 = auVar5._0_8_;
          auVar6 = *(undefined1 (*) [16])(lVar8 + 0x40 + lVar27);
          auVar7 = *(undefined1 (*) [16])(lVar8 + 0x50 + lVar27);
          auVar32 = minpd(auVar6,auVar32);
          auVar38 = minpd(auVar7,auVar5);
          auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
          auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
          uVar22 = movmskpd((int)pppuVar23,auVar33);
          pppuVar23 = (undefined ***)(ulonglong)uVar22;
          auVar32._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
          auVar32._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
          uVar25 = movmskpd((int)pdVar26,auVar32);
          if ((uVar25 & 0x3fffffff) == 0 && uVar22 == 0) {
            dVar43 = *(double *)(lVar8 + lVar27);
            dVar47 = ((double *)(lVar8 + lVar27))[1];
            pdVar26 = (double *)(lVar8 + 0x10 + lVar27);
            dVar13 = *pdVar26;
            dVar14 = pdVar26[1];
            dVar15 = *(double *)(lVar21 + lVar27);
            dVar16 = ((double *)(lVar21 + lVar27))[1];
            pdVar26 = (double *)(lVar21 + 0x10 + lVar27);
            dVar17 = *pdVar26;
            dVar18 = pdVar26[1];
            pdVar26 = (double *)(lVar21 + 0x18 + lVar27);
            dVar42 = *pdVar26;
            dVar30 = *pdVar26;
            dVar45 = *(double *)(lVar21 + lVar27);
            dVar46 = *(double *)(lVar21 + lVar27);
            pdVar26 = (double *)(lVar21 + 8 + lVar27);
            dVar36 = *pdVar26;
            dVar34 = *pdVar26;
            pdVar26 = (double *)(lVar21 + 0x10 + lVar27);
            dVar41 = *pdVar26;
            dVar37 = *pdVar26;
            dVar31 = dVar47 * dVar41 * -1.0 +
                     dVar13 * dVar36 + dVar14 * dVar45 * 1.0 + dVar43 * dVar42;
            dVar35 = dVar43 * dVar37 * 1.0 +
                     dVar14 * dVar34 + dVar13 * dVar46 * -1.0 + dVar47 * dVar30;
            auVar40._0_8_ =
                 dVar14 * dVar41 * 1.0 +
                 ((dVar45 * dVar47 * 1.0 + dVar13 * dVar42) - dVar43 * dVar36);
            auVar40._8_8_ =
                 dVar13 * dVar37 * -1.0 +
                 ((dVar46 * dVar43 * -1.0 + dVar14 * dVar30) - dVar47 * dVar34);
            pdVar26 = (double *)(lVar8 + 0x20 + lVar27);
            dVar37 = *pdVar26 * dVar9;
            dVar41 = pdVar26[1] * dVar11;
            pdVar26 = (double *)(lVar8 + 0x30 + lVar27);
            dVar34 = *pdVar26 * dVar10;
            dVar36 = pdVar26[1] * auVar5._8_8_;
            dVar46 = dVar41 * dVar15 - dVar16 * dVar37;
            dVar47 = dVar34 * dVar16 - dVar17 * dVar41;
            dVar43 = dVar37 * dVar17 - dVar15 * dVar34;
            dVar45 = dVar36 * dVar18 - dVar18 * dVar36;
            dVar47 = dVar47 + dVar47;
            dVar43 = dVar43 + dVar43;
            dVar46 = dVar46 + dVar46;
            dVar45 = dVar45 + dVar45;
            pdVar26 = (double *)(lVar21 + 0x20 + lVar27);
            dVar37 = (dVar46 * dVar16 - dVar17 * dVar43) + dVar42 * dVar47 + dVar37 + *pdVar26;
            dVar41 = (dVar47 * dVar17 - dVar46 * dVar15) + dVar30 * dVar43 + dVar41 + pdVar26[1];
            pdVar26 = (double *)(lVar21 + 0x30 + lVar27);
            dVar42 = (dVar43 * dVar15 - dVar16 * dVar47) + dVar42 * dVar46 + dVar34 + *pdVar26;
            dVar30 = (dVar45 * dVar18 - dVar45 * dVar18) + dVar30 * dVar45 + dVar36 + pdVar26[1];
            pdVar26 = (double *)0x0;
          }
          else {
            dVar46 = *(double *)(lVar21 + lVar27);
            dVar45 = ((double *)(lVar21 + lVar27))[1];
            dVar42 = *(double *)(lVar21 + 0x10 + lVar27);
            dVar34 = dVar45 + dVar45;
            dVar36 = dVar42 + dVar42;
            dVar30 = dVar46 * (dVar46 + dVar46);
            local_1f8 = ((double)DAT_149934d80 - (dVar42 * dVar36 + dVar45 * dVar34)) * dVar9;
            dStack_1d0 = (DAT_149934d80._8_8_ - (dVar42 * dVar36 + dVar30)) * dVar11;
            local_1a8 = (1.0 - (dVar30 + dVar45 * dVar34)) * dVar10;
            dVar42 = *(double *)(lVar21 + lVar27) * dVar36;
            pdVar26 = (double *)(lVar21 + 0x18 + lVar27);
            dVar30 = *pdVar26;
            dVar37 = dVar36 * dVar30;
            dVar41 = (dVar46 + dVar46) * *pdVar26;
            dVar30 = dVar34 * dVar30;
            dStack_1f0 = (dVar34 * dVar46 + dVar37) * dVar9;
            local_1c8 = (dVar36 * dVar45 + dVar41) * dVar11;
            local_1b8 = (dVar30 + dVar42) * dVar10;
            local_1d8 = (dVar34 * dVar46 - dVar37) * dVar11;
            dStack_1b0 = (dVar36 * dVar45 - dVar41) * dVar10;
            local_1e8 = (dVar42 - dVar30) * dVar9;
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            puVar3 = (undefined8 *)(lVar21 + 0x20 + lVar27);
            local_198 = *puVar3;
            uStack_190 = puVar3[1];
            local_188 = *(undefined8 *)(lVar21 + 0x30 + lVar27);
            uStack_180 = 0x3ff0000000000000;
            dVar46 = *(double *)(lVar8 + lVar27);
            dVar45 = ((double *)(lVar8 + lVar27))[1];
            dVar42 = *(double *)(lVar8 + 0x10 + lVar27);
            pdVar26 = (double *)(lVar8 + 0x40 + lVar27);
            local_268 = *pdVar26;
            local_258 = pdVar26[1];
            dStack_230 = *(double *)(lVar8 + 0x50 + lVar27);
            dVar41 = dVar45 + dVar45;
            dVar34 = dVar42 + dVar42;
            dVar30 = dVar46 * (dVar46 + dVar46);
            local_278 = ((double)DAT_149934d80 - (dVar42 * dVar34 + dVar45 * dVar41)) * local_268;
            dStack_250 = (DAT_149934d80._8_8_ - (dVar42 * dVar34 + dVar30)) * local_258;
            local_228 = (1.0 - (dVar30 + dVar45 * dVar41)) * dStack_230;
            dVar42 = *(double *)(lVar8 + lVar27) * dVar34;
            pdVar26 = (double *)(lVar8 + 0x18 + lVar27);
            dVar30 = *pdVar26;
            dVar36 = dVar34 * dVar30;
            dVar37 = (dVar46 + dVar46) * *pdVar26;
            dVar30 = dVar41 * dVar30;
            dStack_270 = (dVar41 * dVar46 + dVar36) * local_268;
            local_248 = (dVar34 * dVar45 + dVar37) * local_258;
            local_238 = (dVar30 + dVar42) * dStack_230;
            local_268 = (dVar42 - dVar30) * local_268;
            local_258 = (dVar41 * dVar46 - dVar36) * local_258;
            dStack_230 = (dVar34 * dVar45 - dVar37) * dStack_230;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            puVar3 = (undefined8 *)(lVar8 + 0x20 + lVar27);
            local_218 = *puVar3;
            uStack_210 = puVar3[1];
            local_208 = *(undefined8 *)(lVar8 + 0x30 + lVar27);
            uStack_200 = 0x3ff0000000000000;
            pdVar26 = &local_1f8;
            FUN_1447fea8d(&local_178,&local_278);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar38._8_8_ = -(ulonglong)(0.0 <= auVar6._8_8_ * dVar11);
            auVar38._0_8_ = -(ulonglong)(0.0 <= auVar6._0_8_ * dVar9);
            auVar32 = blendvpd(_DAT_149936790,auVar40,auVar38);
            uVar28 = -(ulonglong)(0.0 <= auVar7._0_8_ * dVar10);
            dVar30 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
            dVar42 = auVar32._0_8_;
            local_168 = (void *)((double)local_168 * dVar42);
            local_170 = local_170 * dVar42;
            local_178 = (undefined **)((double)local_178 * dVar42);
            dVar42 = auVar32._8_8_;
            local_148 = local_148 * dVar42;
            local_150 = local_150 * dVar42;
            local_158 = dVar42 * local_158;
            local_128 = local_128 * dVar30;
            local_130 = local_130 * dVar30;
            local_138 = dVar30 * local_138;
            pppuVar23 = &local_178;
            FUN_14481fd10(&local_298);
            dVar30 = local_288 * local_288 + local_298 * local_298;
            dVar42 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar39._0_8_ = dVar30 + dVar42;
            auVar39._8_8_ = dVar30 + dVar42;
            auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
            auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
            auVar32 = sqrtpd(auVar39,auVar39);
            auVar32 = divpd(auVar40,auVar32);
            auVar44._0_8_ = auVar32._0_8_ * local_288;
            auVar44._8_8_ = auVar32._8_8_ * dStack_280;
            dVar31 = (double)((ulonglong)(local_298 * auVar32._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
            dVar35 = (double)((ulonglong)(dStack_290 * auVar32._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
            auVar40 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar44,auVar29);
            dVar30 = 0.0;
            lVar21 = *param_2;
            dVar37 = local_118;
            dVar41 = dStack_110;
            dVar42 = local_108;
          }
          dVar46 = auVar7._8_8_ * auVar5._8_8_;
          dVar11 = auVar6._8_8_ * dVar11;
          *(double *)(lVar21 + lVar27) = dVar31;
          ((double *)(lVar21 + lVar27))[1] = dVar35;
          *(undefined1 (*) [16])(lVar21 + 0x10 + lVar27) = auVar40;
          pdVar4 = (double *)(lVar21 + 0x20 + lVar27);
          *pdVar4 = dVar37;
          pdVar4[1] = dVar41;
          auVar5._8_4_ = SUB84(dVar30,0);
          auVar5._0_8_ = dVar42;
          auVar5._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
          *(undefined1 (*) [16])(lVar21 + 0x30 + lVar27) = auVar5;
          auVar12._8_4_ = SUB84(dVar11,0);
          auVar12._0_8_ = auVar6._0_8_ * dVar9;
          auVar12._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
          *(undefined1 (*) [16])(lVar21 + 0x40 + lVar27) = auVar12;
          auVar6._8_4_ = SUB84(dVar46,0);
          auVar6._0_8_ = auVar7._0_8_ * dVar10;
          auVar6._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
          *(undefined1 (*) [16])(lVar21 + 0x50 + lVar27) = auVar6;
          lVar24 = lVar24 + 1;
          lVar27 = lVar27 + 0x60;
        } while (lVar24 < (int)param_2[1]);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14749fb64 FUN_14749fb64 body=337 status=ok
// SIG undefined FUN_14749fb64(void)

void FUN_14749fb64(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [48];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar2 = &local_30;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14749fcb6(param_1,local_2c,puVar2,puVar3);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749fcb6 FUN_14749fcb6 body=802 status=ok
// SIG undefined FUN_14749fcb6(void)

void FUN_14749fcb6(longlong param_1,int param_2,float *param_3,double *param_4)

{
  longlong *plVar1;
  int *piVar2;
  double *pdVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_3 = 0.0;
  param_4[4] = 0.0;
  param_4[5] = 0.0;
  param_4[2] = 0.0;
  param_4[3] = 0.0;
  *param_4 = 0.0;
  param_4[1] = 0.0;
  *(undefined1 *)(param_4 + 6) = 0;
  lVar6 = *(longlong *)(param_1 + 0x660);
  if (lVar6 != 0) {
    lVar12 = *(longlong *)(lVar6 + 0x218);
    plVar16 = *(longlong **)(lVar6 + 0x220);
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar16 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    if (lVar12 != 0) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
      plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar16 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
      uVar11 = DAT_14c9974a8;
      FUN_1446f470e(&local_50,L"Mass",1);
      lVar12 = FUN_146d84416(lVar6,local_50,uVar11);
      uVar11 = DAT_14c9974a8;
      if (lVar12 != 0) {
        FUN_1446f470e(&local_58,L"BoundingBox",1);
        local_70 = FUN_1474a8aaa(lVar6,local_58,uVar11);
        uVar11 = DAT_14c996af0;
        FUN_1446f470e(&local_60,L"BoundingBox",1);
        lVar13 = FUN_1474a8aaa(lVar6,local_60,uVar11);
        if (param_2 < -1) {
          local_64 = param_2;
          plVar16 = (longlong *)FUN_1474a8934(*(undefined8 *)(param_1 + 0xa40));
          if ((plVar16 != (longlong *)0x0) && (lVar14 = plVar16[1], (longlong)(int)lVar14 != 0)) {
            lVar7 = *plVar16;
            lVar17 = 0;
            do {
              lVar18 = (longlong)*(int *)(lVar7 + lVar17);
              *param_3 = *(float *)(*(longlong *)(lVar12 + 0x10) + lVar18 * 4) + *param_3;
              if (local_70 == 0) {
                if (lVar13 != 0) {
                  lVar18 = (longlong)*(int *)(*(longlong *)(lVar6 + 400) + lVar18 * 4);
                  lVar19 = *(longlong *)(lVar13 + 0x10);
                  goto LAB_14749ff0c;
                }
              }
              else {
                lVar19 = *(longlong *)(local_70 + 0x10);
LAB_14749ff0c:
                pdVar3 = (double *)(lVar19 + lVar18 * 0x38);
                cVar5 = *(char *)(lVar19 + 0x30 + lVar18 * 0x38);
                if ((*(char *)(param_4 + 6) == '\0') || (cVar5 == '\0')) {
                  if (cVar5 != '\0') {
                    param_4[6] = pdVar3[6];
                    uVar20 = *(undefined4 *)pdVar3;
                    uVar21 = *(undefined4 *)((longlong)pdVar3 + 4);
                    uVar8 = *(undefined4 *)(pdVar3 + 1);
                    uVar9 = *(undefined4 *)((longlong)pdVar3 + 0xc);
                    dVar22 = pdVar3[2];
                    dVar4 = pdVar3[3];
                    dVar10 = pdVar3[5];
                    param_4[4] = pdVar3[4];
                    param_4[5] = dVar10;
                    param_4[2] = dVar22;
                    param_4[3] = dVar4;
                    *(undefined4 *)param_4 = uVar20;
                    *(undefined4 *)((longlong)param_4 + 4) = uVar21;
                    *(undefined4 *)(param_4 + 1) = uVar8;
                    *(undefined4 *)((longlong)param_4 + 0xc) = uVar9;
                  }
                }
                else {
                  dVar22 = *param_4;
                  uVar20 = SUB84(dVar22,0);
                  uVar21 = (undefined4)((ulonglong)dVar22 >> 0x20);
                  dVar4 = *pdVar3;
                  if (dVar4 <= dVar22) {
                    uVar20 = SUB84(dVar4,0);
                    uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
                  }
                  *param_4 = (double)CONCAT44(uVar21,uVar20);
                  dVar22 = param_4[1];
                  if (pdVar3[1] <= param_4[1]) {
                    dVar22 = pdVar3[1];
                  }
                  param_4[1] = dVar22;
                  dVar22 = param_4[2];
                  uVar20 = SUB84(dVar22,0);
                  uVar21 = (undefined4)((ulonglong)dVar22 >> 0x20);
                  dVar4 = pdVar3[2];
                  if (dVar4 <= dVar22) {
                    uVar20 = SUB84(dVar4,0);
                    uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
                  }
                  param_4[2] = (double)CONCAT44(uVar21,uVar20);
                  dVar22 = param_4[3];
                  uVar20 = SUB84(dVar22,0);
                  uVar21 = (undefined4)((ulonglong)dVar22 >> 0x20);
                  dVar4 = pdVar3[3];
                  if (dVar22 <= dVar4) {
                    uVar20 = SUB84(dVar4,0);
                    uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
                  }
                  param_4[3] = (double)CONCAT44(uVar21,uVar20);
                  dVar22 = param_4[4];
                  uVar20 = SUB84(dVar22,0);
                  uVar21 = (undefined4)((ulonglong)dVar22 >> 0x20);
                  dVar4 = pdVar3[4];
                  if (dVar22 <= dVar4) {
                    uVar20 = SUB84(dVar4,0);
                    uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
                  }
                  param_4[4] = (double)CONCAT44(uVar21,uVar20);
                  dVar22 = param_4[5];
                  uVar20 = SUB84(dVar22,0);
                  uVar21 = (undefined4)((ulonglong)dVar22 >> 0x20);
                  dVar4 = pdVar3[5];
                  if (dVar22 <= dVar4) {
                    uVar20 = SUB84(dVar4,0);
                    uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
                  }
                  param_4[5] = (double)CONCAT44(uVar21,uVar20);
                }
              }
              lVar17 = lVar17 + 4;
            } while ((longlong)(int)lVar14 * 4 != lVar17);
          }
        }
        else {
          lVar14 = (longlong)param_2;
          *param_3 = *(float *)(*(longlong *)(lVar12 + 0x10) + lVar14 * 4);
          if (local_70 == 0) {
            puVar15 = (undefined4 *)
                      ((longlong)*(int *)(*(longlong *)(lVar6 + 400) + lVar14 * 4) * 0x38 +
                      *(longlong *)(lVar13 + 0x10));
          }
          else {
            puVar15 = (undefined4 *)(lVar14 * 0x38 + *(longlong *)(local_70 + 0x10));
          }
          param_4[6] = *(double *)(puVar15 + 0xc);
          uVar20 = *puVar15;
          uVar21 = puVar15[1];
          uVar8 = puVar15[2];
          uVar9 = puVar15[3];
          dVar22 = *(double *)(puVar15 + 4);
          dVar4 = *(double *)(puVar15 + 6);
          dVar10 = *(double *)(puVar15 + 10);
          param_4[4] = *(double *)(puVar15 + 8);
          param_4[5] = dVar10;
          param_4[2] = dVar22;
          param_4[3] = dVar4;
          *(undefined4 *)param_4 = uVar20;
          *(undefined4 *)((longlong)param_4 + 4) = uVar21;
          *(undefined4 *)(param_4 + 1) = uVar8;
          *(undefined4 *)((longlong)param_4 + 0xc) = uVar9;
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14749ffda FUN_14749ffda body=102 status=ok
// SIG undefined FUN_14749ffda(void)

void FUN_14749ffda(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474a0042(param_1,local_78);
  puVar2 = local_78;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a0042 FUN_1474a0042 body=1907 status=ok
// SIG undefined FUN_1474a0042(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1474a0042(longlong param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  int iVar21;
  undefined8 *puVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  undefined1 (*pauVar26) [16];
  ulonglong uVar27;
  double dVar28;
  double dVar31;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar38;
  double dVar39;
  undefined1 auVar37 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStack_2b8 [32];
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  double dVar2;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  puVar22 = &DAT_14c846480;
  pauVar26 = param_2;
  for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined8 *)*pauVar26 = *puVar22;
    puVar22 = puVar22 + 1;
    pauVar26 = (undefined1 (*) [16])(*pauVar26 + 8);
  }
  if (*(longlong *)(param_1 + 0x660) != 0) {
    iVar23 = (int)param_1 + 0x9a0;
    puVar22 = (undefined8 *)FUN_1406cf6b2();
    auVar46 = _DAT_149934d80;
    dVar28 = (double)(float)puVar22[4];
    dVar31 = (double)(float)((ulonglong)puVar22[4] >> 0x20);
    dVar35 = (double)(float)puVar22[5];
    dVar38 = (double)(float)((ulonglong)puVar22[5] >> 0x20);
    local_298 = (double)(float)puVar22[2];
    dStack_290 = (double)(float)((ulonglong)puVar22[2] >> 0x20);
    dVar16 = (double)(float)puVar22[3];
    dVar17 = (double)(float)((ulonglong)puVar22[3] >> 0x20);
    dVar10 = (double)(float)*puVar22;
    dVar11 = (double)(float)((ulonglong)*puVar22 >> 0x20);
    dVar36 = (double)(float)puVar22[1];
    dVar39 = (double)(float)((ulonglong)puVar22[1] >> 0x20);
    auVar33 = *(undefined1 (*) [16])(param_1 + 0x280);
    dVar4 = auVar33._0_8_;
    dVar6 = auVar33._8_8_;
    auVar3 = *(undefined1 (*) [16])(param_1 + 0x290);
    dVar5 = auVar3._0_8_;
    auVar44._8_8_ = dVar31;
    auVar44._0_8_ = dVar28;
    auVar33 = minpd(auVar44,auVar33);
    auVar43._8_8_ = dVar38;
    auVar43._0_8_ = dVar35;
    auVar44 = minpd(auVar43,auVar3);
    auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
    auVar34._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
    iVar21 = movmskpd((int)puVar22,auVar34);
    auVar33._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
    auVar33._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
    uVar24 = movmskpd(iVar23,auVar33);
    if ((uVar24 & 0x3fffffff) == 0 && iVar21 == 0) {
      dVar41 = *(double *)(param_1 + 0x240);
      dVar18 = *(double *)(param_1 + 0x248);
      dVar7 = *(double *)(param_1 + 600);
      dVar32 = *(double *)(param_1 + 600);
      dVar45 = *(double *)(param_1 + 0x240);
      dVar42 = *(double *)(param_1 + 0x240);
      dVar15 = *(double *)(param_1 + 0x248);
      dVar14 = *(double *)(param_1 + 0x248);
      dVar19 = *(double *)(param_1 + 0x250);
      dVar20 = *(double *)(param_1 + 600);
      dVar1 = *(double *)(param_1 + 0x250);
      dVar2 = *(double *)(param_1 + 0x250);
      dVar13 = dVar11 * dVar1 * -1.0 + dVar36 * dVar15 + dVar39 * dVar45 * 1.0 + dVar7 * dVar10;
      dVar40 = dVar10 * dVar2 * 1.0 + dVar39 * dVar14 + dVar36 * dVar42 * -1.0 + dVar32 * dVar11;
      auVar46._0_8_ =
           dVar39 * dVar1 * 1.0 + ((dVar45 * dVar11 * 1.0 + dVar7 * dVar36) - dVar15 * dVar10);
      auVar46._8_8_ =
           dVar36 * dVar2 * -1.0 + ((dVar42 * dVar10 * -1.0 + dVar32 * dVar39) - dVar14 * dVar11);
      dVar42 = local_298 * dVar4;
      dVar45 = dStack_290 * dVar6;
      dVar16 = dVar16 * dVar5;
      dVar17 = dVar17 * auVar3._8_8_;
      dVar36 = dVar45 * dVar41 - dVar42 * dVar18;
      dVar10 = dVar16 * dVar18 - dVar45 * dVar19;
      dVar11 = dVar42 * dVar19 - dVar16 * dVar41;
      dVar39 = dVar17 * dVar20 - dVar17 * dVar20;
      dVar10 = dVar10 + dVar10;
      dVar11 = dVar11 + dVar11;
      dVar36 = dVar36 + dVar36;
      dVar39 = dVar39 + dVar39;
      local_f8 = (dVar36 * dVar18 - dVar19 * dVar11) + dVar7 * dVar10 + dVar42 +
                 *(double *)(param_1 + 0x260);
      dStack_f0 = (dVar10 * dVar19 - dVar36 * dVar41) + dVar32 * dVar11 + dVar45 +
                  *(double *)(param_1 + 0x268);
      local_e8 = (dVar11 * dVar41 - dVar18 * dVar10) + dVar7 * dVar36 + dVar16 +
                 *(double *)(param_1 + 0x270);
      dVar36 = (dVar39 * dVar20 - dVar39 * dVar20) + dVar32 * dVar39 + dVar17 +
               *(double *)(param_1 + 0x278);
    }
    else {
      dVar1 = *(double *)(param_1 + 0x240);
      dVar2 = *(double *)(param_1 + 0x248);
      dVar13 = *(double *)(param_1 + 0x250);
      dVar7 = dVar2 + dVar2;
      dVar42 = dVar13 + dVar13;
      dVar40 = dVar1 * (dVar1 + dVar1);
      local_288._8_4_ = SUB84(dVar17,0);
      local_288._0_8_ = dVar16;
      local_288._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      dVar41 = *(double *)(param_1 + 0x240) * dVar42;
      dVar17 = *(double *)(param_1 + 600);
      dVar45 = dVar42 * dVar17;
      dVar14 = (dVar1 + dVar1) * *(double *)(param_1 + 600);
      dVar17 = dVar7 * dVar17;
      dVar32 = (dVar42 * dVar2 - dVar14) * dVar5;
      dVar15 = (DAT_149934d80._8_8_ - (dVar13 * dVar42 + dVar40)) * dVar6;
      local_188 = (1.0 - (dVar40 + dVar2 * dVar7)) * dVar5;
      dVar40 = (dVar7 * dVar1 + dVar45) * dVar4;
      local_1a8 = (dVar42 * dVar2 + dVar14) * dVar6;
      local_1c8 = (dVar41 - dVar17) * dVar4;
      local_1d8._8_4_ = SUB84(dVar40,0);
      local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar13 * dVar42 + dVar2 * dVar7)) * dVar4;
      local_1d8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar15,0);
      local_1b8._0_8_ = (dVar7 * dVar1 - dVar45) * dVar6;
      local_1b8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      uStack_1a0 = 0;
      local_198._8_4_ = SUB84(dVar32,0);
      local_198._0_8_ = (dVar17 + dVar41) * dVar5;
      local_198._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
      uStack_180 = 0;
      local_178 = *(undefined8 *)(param_1 + 0x260);
      uStack_170 = *(undefined8 *)(param_1 + 0x268);
      local_168 = *(undefined8 *)(param_1 + 0x270);
      uStack_160 = 0x3ff0000000000000;
      dVar7 = dVar11 + dVar11;
      dVar42 = dVar36 + dVar36;
      dVar32 = (dVar10 + dVar10) * dVar10;
      local_208 = (1.0 - (dVar32 + dVar7 * dVar11)) * dVar35;
      dVar45 = (dVar10 + dVar10) * dVar39;
      dVar17 = (dVar42 * dVar11 - dVar45) * dVar35;
      local_258 = ((double)DAT_149934d80 - (dVar42 * dVar36 + dVar7 * dVar11)) * dVar28;
      dVar36 = (DAT_149934d80._8_8_ - (dVar42 * dVar36 + dVar32)) * dVar31;
      dStack_250 = (dVar7 * dVar10 + dVar42 * dVar39) * dVar28;
      local_228 = (dVar42 * dVar11 + dVar45) * dVar31;
      local_248 = (dVar10 * dVar42 - dVar7 * dVar39) * dVar28;
      uStack_240 = 0;
      local_238._8_4_ = SUB84(dVar36,0);
      local_238._0_8_ = (dVar7 * dVar10 - dVar42 * dVar39) * dVar31;
      local_238._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      uStack_220 = 0;
      local_218._8_4_ = SUB84(dVar17,0);
      local_218._0_8_ = (dVar10 * dVar42 + dVar7 * dVar39) * dVar35;
      local_218._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      uStack_200 = 0;
      uStack_1e0 = 0x3ff0000000000000;
      local_1f8 = local_298;
      dStack_1f0 = dStack_290;
      local_1e8 = dVar16;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar29._8_8_ = -(ulonglong)(0.0 <= dVar6 * dVar31);
      auVar29._0_8_ = -(ulonglong)(0.0 <= dVar4 * dVar28);
      auVar33 = blendvpd(_DAT_149936790,auVar46,auVar29);
      uVar27 = -(ulonglong)(0.0 <= dVar5 * dVar35);
      dVar36 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
      dVar39 = auVar33._0_8_;
      local_148 = local_148 * dVar39;
      local_150 = local_150 * dVar39;
      local_158 = local_158 * dVar39;
      dVar39 = auVar33._8_8_;
      local_128 = local_128 * dVar39;
      local_130 = local_130 * dVar39;
      local_138 = dVar39 * local_138;
      local_108 = local_108 * dVar36;
      local_110 = local_110 * dVar36;
      local_118 = dVar36 * local_118;
      FUN_14481fd10(&local_278,&local_158);
      dVar36 = local_268 * local_268 + local_278 * local_278;
      dVar39 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar37._0_8_ = dVar36 + dVar39;
      auVar37._8_8_ = dVar36 + dVar39;
      auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
      auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
      auVar33 = sqrtpd(auVar37,auVar37);
      auVar33 = divpd(auVar46,auVar33);
      auVar47._0_8_ = auVar33._0_8_ * local_268;
      auVar47._8_8_ = auVar33._8_8_ * dStack_260;
      dVar13 = (double)((ulonglong)(local_278 * auVar33._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
      dVar40 = (double)((ulonglong)(dStack_270 * auVar33._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
      auVar46 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar30);
      dVar36 = 0.0;
    }
    dVar38 = auVar3._8_8_ * dVar38;
    auVar12._8_4_ = SUB84(dVar40,0);
    auVar12._0_8_ = dVar13;
    auVar12._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    *param_2 = auVar12;
    param_2[1] = auVar46;
    auVar9._8_4_ = SUB84(dStack_f0,0);
    auVar9._0_8_ = local_f8;
    auVar9._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
    param_2[2] = auVar9;
    *(double *)param_2[3] = local_e8;
    *(double *)(param_2[3] + 8) = dVar36;
    auVar8._8_4_ = SUB84(dVar6 * dVar31,0);
    auVar8._0_8_ = dVar4 * dVar28;
    auVar8._12_4_ = (int)((ulonglong)(dVar6 * dVar31) >> 0x20);
    param_2[4] = auVar8;
    auVar3._8_4_ = SUB84(dVar38,0);
    auVar3._0_8_ = dVar5 * dVar35;
    auVar3._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    param_2[5] = auVar3;
  }
  if ((local_d0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a07e4 FUN_1474a07e4 body=102 status=ok
// SIG undefined FUN_1474a07e4(void)

void FUN_1474a07e4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474a084c(param_1,local_78);
  puVar2 = local_78;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a084c FUN_1474a084c body=2065 status=ok
// SIG undefined FUN_1474a084c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1474a084c(longlong param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  longlong *plVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  double *pdVar22;
  double *pdVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auStack_2f8 [32];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  double dVar4;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  pdVar22 = (double *)&DAT_14c846480;
  pdVar23 = param_2;
  for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
    *pdVar23 = *pdVar22;
    pdVar22 = pdVar22 + 1;
    pdVar23 = pdVar23 + 1;
  }
  lVar21 = *(longlong *)(param_1 + 0x660);
  if (lVar21 != 0) {
    lVar7 = *(longlong *)(lVar21 + 0x218);
    plVar8 = *(longlong **)(lVar21 + 0x220);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
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
    if (lVar7 != 0) {
      lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
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
      iVar19 = *(int *)(*(longlong *)(param_1 + 0x660) + 0x1e8);
      if ((-1 < iVar19) && (iVar19 < *(int *)(lVar21 + 200))) {
        pdVar22 = &local_2d8;
        uVar18 = FUN_146eba115(pdVar22,lVar21 + 0xb0,lVar21 + 0x110);
        auVar40 = _DAT_149934d80;
        auVar29 = *(undefined1 (*) [16])(param_1 + 0x280);
        dVar9 = auVar29._0_8_;
        dVar13 = auVar29._8_8_;
        auVar6 = *(undefined1 (*) [16])(param_1 + 0x290);
        dVar10 = auVar6._0_8_;
        dVar11 = local_298._0_8_;
        dVar14 = local_298._8_8_;
        dVar12 = local_288._0_8_;
        auVar29 = minpd(local_298,auVar29);
        auVar33 = minpd(local_288,auVar6);
        auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
        auVar30._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
        iVar19 = movmskpd(uVar18,auVar30);
        auVar29._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
        auVar29._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
        uVar20 = movmskpd((int)pdVar22,auVar29);
        if ((uVar20 & 0x3fffffff) == 0 && iVar19 == 0) {
          dVar35 = *(double *)(param_1 + 0x240);
          dVar36 = *(double *)(param_1 + 0x248);
          dVar38 = *(double *)(param_1 + 0x250);
          dVar17 = *(double *)(param_1 + 600);
          dVar27 = *(double *)(param_1 + 600);
          dVar34 = *(double *)(param_1 + 600);
          dVar37 = *(double *)(param_1 + 0x240);
          dVar39 = *(double *)(param_1 + 0x240);
          dVar3 = *(double *)(param_1 + 0x248);
          dVar4 = *(double *)(param_1 + 0x248);
          dVar5 = *(double *)(param_1 + 0x250);
          dVar31 = *(double *)(param_1 + 0x250);
          dVar28 = dStack_2d0 * dVar5 * -1.0 +
                   local_2c8 * dVar3 + dStack_2c0 * dVar37 * 1.0 + local_2d8 * dVar27;
          dVar32 = local_2d8 * dVar31 * 1.0 +
                   dStack_2c0 * dVar4 + local_2c8 * dVar39 * -1.0 + dStack_2d0 * dVar34;
          auVar40._0_8_ =
               dStack_2c0 * dVar5 * 1.0 +
               ((dVar37 * dStack_2d0 * 1.0 + local_2c8 * dVar27) - local_2d8 * dVar3);
          auVar40._8_8_ =
               local_2c8 * dVar31 * -1.0 +
               ((dVar39 * local_2d8 * -1.0 + dStack_2c0 * dVar34) - dStack_2d0 * dVar4);
          local_2b8 = local_2b8 * dVar9;
          dStack_2b0 = dStack_2b0 * dVar13;
          local_2a8 = local_2a8 * dVar10;
          dStack_2a0 = dStack_2a0 * auVar6._8_8_;
          dVar37 = dStack_2b0 * dVar35 - dVar36 * local_2b8;
          dVar39 = local_2a8 * dVar36 - dVar38 * dStack_2b0;
          dVar3 = local_2b8 * dVar38 - dVar35 * local_2a8;
          dVar4 = dStack_2a0 * dVar17 - dVar17 * dStack_2a0;
          dVar39 = dVar39 + dVar39;
          dVar3 = dVar3 + dVar3;
          dVar37 = dVar37 + dVar37;
          dVar4 = dVar4 + dVar4;
          local_f8 = (dVar37 * dVar36 - dVar38 * dVar3) + dVar27 * dVar39 + local_2b8 +
                     *(double *)(param_1 + 0x260);
          dStack_f0 = (dVar39 * dVar38 - dVar37 * dVar35) + dVar34 * dVar3 + dStack_2b0 +
                      *(double *)(param_1 + 0x268);
          local_e8 = (dVar3 * dVar35 - dVar36 * dVar39) + dVar27 * dVar37 + local_2a8 +
                     *(double *)(param_1 + 0x270);
          dVar27 = (dVar4 * dVar17 - dVar4 * dVar17) + dVar34 * dVar4 + dStack_2a0 +
                   *(double *)(param_1 + 0x278);
        }
        else {
          dVar3 = *(double *)(param_1 + 0x240);
          dVar4 = *(double *)(param_1 + 0x248);
          dVar5 = *(double *)(param_1 + 0x250);
          dVar31 = dVar4 + dVar4;
          dVar35 = dVar5 + dVar5;
          dVar34 = dVar3 * (dVar3 + dVar3);
          local_188 = (1.0 - (dVar34 + dVar4 * dVar31)) * dVar10;
          dVar39 = *(double *)(param_1 + 0x240) * dVar35;
          dVar27 = *(double *)(param_1 + 600);
          dVar36 = dVar35 * dVar27;
          dVar38 = (dVar3 + dVar3) * *(double *)(param_1 + 600);
          dVar27 = dVar31 * dVar27;
          local_198 = (dVar27 + dVar39) * dVar10;
          dVar34 = (DAT_149934d80._8_8_ - (dVar5 * dVar35 + dVar34)) * dVar13;
          dVar37 = (dVar31 * dVar3 + dVar36) * dVar9;
          local_1a8 = (dVar35 * dVar4 + dVar38) * dVar13;
          dStack_190 = (dVar35 * dVar4 - dVar38) * dVar10;
          local_1c8 = (dVar39 - dVar27) * dVar9;
          local_1d8._8_4_ = SUB84(dVar37,0);
          local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar5 * dVar35 + dVar4 * dVar31)) * dVar9;
          local_1d8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
          uStack_1c0 = 0;
          local_1b8._8_4_ = SUB84(dVar34,0);
          local_1b8._0_8_ = (dVar31 * dVar3 - dVar36) * dVar13;
          local_1b8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
          uStack_1a0 = 0;
          uStack_180 = 0;
          local_178 = *(undefined8 *)(param_1 + 0x260);
          uStack_170 = *(undefined8 *)(param_1 + 0x268);
          local_168 = *(undefined8 *)(param_1 + 0x270);
          uStack_160 = 0x3ff0000000000000;
          dVar34 = dStack_2d0 + dStack_2d0;
          dVar37 = local_2c8 + local_2c8;
          dVar27 = local_2d8 * (local_2d8 + local_2d8);
          local_208 = (1.0 - (dVar27 + dStack_2d0 * dVar34)) * dVar12;
          dVar39 = (local_2d8 + local_2d8) * dStack_2c0;
          local_218 = (dVar34 * dStack_2c0 + local_2d8 * dVar37) * dVar12;
          dStack_210 = (dVar37 * dStack_2d0 - dVar39) * dVar12;
          local_258 = ((double)DAT_149934d80 - (local_2c8 * dVar37 + dStack_2d0 * dVar34)) * dVar11;
          dVar27 = (DAT_149934d80._8_8_ - (local_2c8 * dVar37 + dVar27)) * dVar14;
          dStack_250 = (dVar34 * local_2d8 + dVar37 * dStack_2c0) * dVar11;
          local_228 = (dVar37 * dStack_2d0 + dVar39) * dVar14;
          local_248 = (local_2d8 * dVar37 - dVar34 * dStack_2c0) * dVar11;
          uStack_240 = 0;
          local_238._8_4_ = SUB84(dVar27,0);
          local_238._0_8_ = (dVar34 * local_2d8 - dVar37 * dStack_2c0) * dVar14;
          local_238._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
          uStack_220 = 0;
          uStack_200 = 0;
          local_1f8 = local_2b8;
          dStack_1f0 = dStack_2b0;
          local_1e8 = local_2a8;
          uStack_1e0 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_158);
          FUN_144a1c686(&local_158,0x3e45798ee0000000);
          auVar33._8_8_ = -(ulonglong)(0.0 <= dVar13 * dVar14);
          auVar33._0_8_ = -(ulonglong)(0.0 <= dVar9 * dVar11);
          auVar29 = blendvpd(_DAT_149936790,auVar40,auVar33);
          uVar24 = -(ulonglong)(0.0 <= dVar10 * dVar12);
          dVar27 = (double)(~uVar24 & 0xbff0000000000000 | uVar24 & 0x3ff0000000000000);
          dVar34 = auVar29._0_8_;
          local_148 = local_148 * dVar34;
          local_150 = local_150 * dVar34;
          local_158 = local_158 * dVar34;
          dVar34 = auVar29._8_8_;
          local_128 = local_128 * dVar34;
          local_130 = local_130 * dVar34;
          local_138 = dVar34 * local_138;
          local_108 = local_108 * dVar27;
          local_110 = local_110 * dVar27;
          local_118 = dVar27 * local_118;
          FUN_14481fd10(&local_278,&local_158);
          dVar27 = local_268 * local_268 + local_278 * local_278;
          dVar34 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
          auVar26._0_8_ = dVar27 + dVar34;
          auVar26._8_8_ = dVar27 + dVar34;
          auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
          auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
          auVar29 = sqrtpd(auVar26,auVar26);
          auVar29 = divpd(auVar40,auVar29);
          auVar41._0_8_ = auVar29._0_8_ * local_268;
          auVar41._8_8_ = auVar29._8_8_ * dStack_260;
          dVar28 = (double)((ulonglong)(local_278 * auVar29._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
          dVar32 = (double)((ulonglong)(dStack_270 * auVar29._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
          auVar40 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar25);
          dVar27 = 0.0;
        }
        dVar34 = auVar6._8_8_ * local_288._8_8_;
        *param_2 = dVar28;
        param_2[1] = dVar32;
        *(undefined1 (*) [16])(param_2 + 2) = auVar40;
        auVar15._8_4_ = SUB84(dStack_f0,0);
        auVar15._0_8_ = local_f8;
        auVar15._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 4) = auVar15;
        param_2[6] = local_e8;
        param_2[7] = dVar27;
        auVar16._8_4_ = SUB84(dVar13 * dVar14,0);
        auVar16._0_8_ = dVar9 * dVar11;
        auVar16._12_4_ = (int)((ulonglong)(dVar13 * dVar14) >> 0x20);
        *(undefined1 (*) [16])(param_2 + 8) = auVar16;
        auVar6._8_4_ = SUB84(dVar34,0);
        auVar6._0_8_ = dVar10 * dVar12;
        auVar6._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 10) = auVar6;
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a111a FUN_1474a111a body=181 status=ok
// SIG undefined FUN_1474a111a(void)

void FUN_1474a111a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(char *)(param_1 + 0x853) == '\x01') && (*(char *)(param_1 + 0x9c) < '\0')) {
    *(undefined8 *)(param_1 + 0x854) = local_20;
    FUN_140759f2c(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a11d6 FUN_1474a11d6 body=436 status=ok
// SIG undefined FUN_1474a11d6(void)

void FUN_1474a11d6(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_108;
  int local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_d0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_104 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  iVar1 = local_104;
  local_108 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = CONCAT71(uStack_cf,local_d0);
  local_a8 = local_e0;
  uStack_a4 = uStack_dc;
  uStack_a0 = uStack_d8;
  uStack_9c = uStack_d4;
  local_b8 = local_f0;
  uStack_b4 = uStack_ec;
  uStack_b0 = uStack_e8;
  uStack_ac = uStack_e4;
  local_c8 = local_100;
  uStack_c4 = uStack_fc;
  uStack_c0 = uStack_f8;
  uStack_bc = uStack_f4;
  puVar3 = &DAT_14c846480;
  puVar4 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    local_118 = local_108;
    FUN_146ee891c(*(longlong *)(param_1 + 0xa40),&local_c8,local_88,iVar1 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a1392 FUN_1474a1392 body=257 status=ok
// SIG undefined FUN_1474a1392(void)

void FUN_1474a1392(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FUN_146ee8862(*(longlong *)(param_1 + 0xa40),local_1c,local_20 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a149c FUN_1474a149c body=618 status=ok
// SIG undefined FUN_1474a149c(void)

void FUN_1474a149c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_138 [13];
  undefined4 local_d0;
  int local_cc;
  undefined8 local_c8 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined7 uStack_2f;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0x3ff00000;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  local_cc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_cc);
  }
  iVar2 = local_cc;
  local_d0 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  uVar1 = local_d0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_c8;
  puVar5 = local_138;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_148 = CONCAT71(uStack_2f,local_30);
  local_158 = local_40;
  uStack_154 = uStack_3c;
  uStack_150 = uStack_38;
  uStack_14c = uStack_34;
  local_168 = local_50;
  uStack_164 = uStack_4c;
  uStack_160 = uStack_48;
  uStack_15c = uStack_44;
  local_178 = local_60;
  uStack_174 = uStack_5c;
  uStack_170 = uStack_58;
  uStack_16c = uStack_54;
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    local_188 = uVar1;
    FUN_146ee891c(*(longlong *)(param_1 + 0xa40),&local_178,local_138,iVar2 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a1708 FUN_1474a1708 body=166 status=ok
// SIG undefined FUN_1474a1708(void)

void FUN_1474a1708(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x694) = local_19;
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FUN_146eebb4a();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a17b0 FUN_1474a17b0 body=231 status=ok
// SIG undefined FUN_1474a17b0(void)

void FUN_1474a17b0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [36];
  undefined1 local_24 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24[0] = 1;
  local_24._4_8_ = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  puVar1 = (undefined8 *)local_24;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(puVar1 + 1);
  *(undefined8 *)(param_1 + 0x6ac) = *puVar1;
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FUN_146eeba74(*(longlong *)(param_1 + 0xa40),*(undefined1 *)(param_1 + 0x6ac),
                  *(undefined4 *)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0x6b4));
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a1898 FUN_1474a1898 body=214 status=ok
// SIG undefined FUN_1474a1898(void)

void FUN_1474a1898(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a67f5c(param_1 + 0x698,plVar1);
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FUN_146eeb8bc(*(longlong *)(param_1 + 0xa40),param_1 + 0x698);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a1974 FUN_1474a1974 body=185 status=ok
// SIG undefined FUN_1474a1974(void)

void FUN_1474a1974(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
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
  *(bool *)(param_1 + 0x684) = local_1c != 0;
  lVar1 = *(longlong *)(param_1 + 0xa40);
  if (lVar1 != 0) {
    uVar2 = FUN_1407594de(param_1);
    FUN_146eebc92(lVar1,uVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a1a32 FUN_1474a1a32 body=177 status=ok
// SIG undefined FUN_1474a1a32(void)

void FUN_1474a1a32(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x6b8) = local_1c != 0;
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FUN_146ee91f8(*(longlong *)(param_1 + 0xa40),local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a1ae4 FUN_1474a1ae4 body=174 status=ok
// SIG undefined FUN_1474a1ae4(void)

void FUN_1474a1ae4(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  uint local_1c;
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
  if (local_1c < 8) {
    *(uint *)(param_1 + 0x67c) = local_1c;
    if (*(longlong *)(param_1 + 0xa40) != 0) {
      FUN_146eec146();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a1b9a FUN_1474a1b9a body=264 status=ok
// SIG undefined FUN_1474a1b9a(void)

void FUN_1474a1b9a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474a1ca4(param_1,plVar1,local_3c != 0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a1ca4 FUN_1474a1ca4 body=5455 status=ok
// SIG undefined FUN_1474a1ca4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474a1ca4(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  void **ppvVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  void *_Src;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong **pplVar18;
  longlong lVar19;
  undefined8 *puVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  undefined1 *puVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar41;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar52;
  double dVar53;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar54;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar55;
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  double dVar69;
  double dVar70;
  undefined1 auStack_358 [47];
  char local_329;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  longlong local_300;
  undefined1 local_2f8 [16];
  longlong local_2e0;
  longlong *local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b0;
  void *local_2a8;
  int local_2a0;
  double local_298;
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
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
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
  longlong *local_178;
  undefined8 local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  lVar25 = *(longlong *)(param_1 + 0x660);
  if (lVar25 != 0) {
    lVar19 = *(longlong *)(lVar25 + 0x218);
    plVar16 = *(longlong **)(lVar25 + 0x220);
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar16 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    if (lVar19 != 0) {
      FUN_14749e7be(param_1,&local_2a8);
      if (local_2a0 == (int)param_2[1]) {
        local_300 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
        plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar16 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar2 = (int *)((longlong)plVar16 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
        puVar24 = DAT_14c9974a8;
        FUN_1446ddc76(&local_2b0,"MassToLocal",1);
        lVar25 = local_300;
        local_2d0 = FUN_1417966ba(local_300,local_2b0);
        uVar27 = (ulonglong)*(uint *)(lVar25 + 0x128);
        local_2c8 = 0;
        uStack_2c0 = 0;
        if ((int)*(uint *)(lVar25 + 0x128) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar27);
        }
        uVar15 = 0;
        uVar23 = 0;
        if (uVar27 != 0) {
          FUN_14481578e(&local_2c8);
          uVar15 = (uint)uStack_2c0;
          uVar23 = uStack_2c0._4_4_;
        }
        uVar65 = *(undefined4 *)(*(longlong *)(param_1 + 0x660) + 0x1e8);
        uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar15 + 1);
        local_2e0 = param_1;
        local_2d8 = param_2;
        if (uVar23 < uVar15 + 1) {
          uVar27 = (ulonglong)uVar15;
          FUN_1446f48e2(&local_2c8);
        }
        *(undefined4 *)(local_2c8 + (longlong)(int)uVar15 * 4) = uVar65;
        if (0 < (int)(uint)uStack_2c0) {
          lVar25 = 0;
          local_329 = param_3;
          do {
            lVar19 = local_300;
            auVar49 = _DAT_149934d80;
            uVar15 = (uint)uVar27;
            lVar26 = (longlong)*(int *)(local_2c8 + lVar25 * 4);
            if (local_2d0 == 0) {
LAB_1474a2139:
              local_318 = DAT_14c8464a0;
              dStack_310 = DAT_14c8464a8;
              local_328 = DAT_14c8464b0;
              dStack_320 = DAT_14c8464b8;
              auVar35 = _DAT_14c8464d0;
              uVar65 = (undefined4)DAT_14c846480;
              uVar66 = DAT_14c846480._4_4_;
              uVar67 = (undefined4)DAT_14c846488;
              uVar68 = DAT_14c846488._4_4_;
              dVar28 = DAT_14c8464c0;
              dVar33 = DAT_14c8464c8;
              dVar37 = DAT_14c846490;
              dVar41 = DAT_14c846498;
            }
            else {
              lVar17 = *(longlong *)(local_2d0 + 0x10);
              lVar14 = lVar26 * 0x60;
              auVar35 = *(undefined1 (*) [16])(lVar17 + 0x40 + lVar14);
              auVar47 = *(undefined1 (*) [16])(lVar17 + 0x50 + lVar14);
              auVar38._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar35._8_8_));
              auVar38._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar35._0_8_));
              uVar15 = movmskpd(uVar15,auVar38);
              auVar45._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar47._8_8_));
              auVar45._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar47._0_8_));
              iVar22 = movmskpd((int)puVar24,auVar45);
              uVar23 = iVar22 << 2 | uVar15;
              puVar24 = (undefined1 *)(ulonglong)uVar23;
              if (uVar23 == 0) goto LAB_1474a2139;
              pdVar13 = (double *)(lVar17 + lVar14);
              auVar45 = divpd(_DAT_149934d80,auVar35);
              auVar38 = divpd(ZEXT816(0x3ff0000000000000),auVar47);
              dVar28 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar35._0_8_)) &
                               auVar45._0_8_);
              dVar33 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar35._8_8_)) &
                               auVar45._8_8_);
              auVar35._0_8_ =
                   (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar47._0_8_)) & auVar38._0_8_)
              ;
              auVar35._8_8_ = 0;
              dVar70 = *pdVar13;
              dVar10 = -dVar70;
              dVar11 = -pdVar13[1];
              dVar37 = pdVar13[2] * -1.0;
              dVar41 = pdVar13[3] * 1.0;
              dVar61 = pdVar13[4] * dVar28;
              dVar63 = pdVar13[5] * dVar33;
              dVar34 = pdVar13[6] * auVar35._0_8_;
              dVar42 = dVar63 * dVar10 - dVar11 * dVar61;
              dVar52 = dVar34 * dVar11 - dVar37 * dVar63;
              dVar53 = dVar61 * dVar37 - dVar10 * dVar34;
              dVar52 = dVar52 + dVar52;
              dVar53 = dVar53 + dVar53;
              dVar42 = dVar42 + dVar42;
              local_318 = 0.0 - ((dVar42 * dVar11 - dVar53 * dVar37) + dVar41 * dVar52 + dVar61);
              dStack_310 = 0.0 - (dVar42 * dVar70 + dVar37 * dVar52 + dVar41 * dVar53 + dVar63);
              local_328 = 0.0 - (dVar41 * dVar42 + dVar34 + (dVar53 * dVar10 - dVar52 * dVar11));
              dStack_320 = 0.0;
              uVar65 = SUB84(dVar70,0);
              uVar66 = (int)((ulonglong)dVar10 >> 0x20);
              uVar67 = SUB84(pdVar13[1],0);
              uVar68 = (int)((ulonglong)dVar11 >> 0x20);
            }
            dVar34 = auVar35._0_8_;
            if ((local_329 == '\0') ||
               (*(int *)(*(longlong *)(local_300 + 0x1b0) + lVar26 * 4) == 1)) {
              lVar17 = *local_2d8;
              lVar14 = lVar26 * 0x60;
              pdVar13 = (double *)(lVar17 + lVar14);
              auVar47 = *(undefined1 (*) [16])(lVar17 + 0x40 + lVar14);
              dVar10 = auVar47._0_8_;
              dVar53 = auVar47._8_8_;
              auVar38 = *(undefined1 (*) [16])(lVar17 + 0x50 + lVar14);
              dVar11 = auVar38._0_8_;
              auVar59._8_8_ = dVar33;
              auVar59._0_8_ = dVar28;
              auVar47 = minpd(auVar59,auVar47);
              auVar45 = minpd(auVar35,auVar38);
              auVar60._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
              auVar60._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
              iVar22 = movmskpd((int)lVar17,auVar60);
              auVar47._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
              auVar47._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
              uVar15 = movmskpd(uVar15,auVar47);
              if ((uVar15 & 0x3fffffff) == 0 && iVar22 == 0) {
                dVar44 = *pdVar13;
                dVar54 = pdVar13[1];
                dVar69 = pdVar13[2];
                dVar56 = pdVar13[3];
                dVar42 = pdVar13[3];
                dVar70 = pdVar13[3];
                dVar61 = pdVar13[1];
                dVar52 = pdVar13[1];
                dVar63 = pdVar13[2];
                dVar43 = pdVar13[2];
                dVar62 = (double)CONCAT44(uVar68,uVar67) * dVar63 * -1.0 +
                         dVar37 * dVar61 +
                         dVar41 * *pdVar13 * 1.0 + (double)CONCAT44(uVar66,uVar65) * dVar42;
                dVar64 = (double)CONCAT44(uVar66,uVar65) * dVar43 * 1.0 +
                         dVar41 * dVar52 +
                         dVar37 * *pdVar13 * -1.0 + (double)CONCAT44(uVar68,uVar67) * dVar70;
                auVar49._0_8_ =
                     dVar41 * dVar63 * 1.0 +
                     ((*pdVar13 * (double)CONCAT44(uVar68,uVar67) * 1.0 + dVar37 * dVar42) -
                     (double)CONCAT44(uVar66,uVar65) * dVar61);
                auVar49._8_8_ =
                     dVar37 * dVar43 * -1.0 +
                     ((*pdVar13 * (double)CONCAT44(uVar66,uVar65) * -1.0 + dVar41 * dVar70) -
                     (double)CONCAT44(uVar68,uVar67) * dVar52);
                dVar52 = local_318 * dVar10;
                dVar63 = dStack_310 * dVar53;
                dVar36 = local_328 * dVar11;
                dVar55 = dStack_320 * auVar38._8_8_;
                dVar37 = dVar63 * dVar44 - dVar52 * dVar54;
                dVar41 = dVar36 * dVar54 - dVar63 * dVar69;
                dVar61 = dVar52 * dVar69 - dVar36 * dVar44;
                dVar43 = dVar55 * dVar56 - dVar55 * dVar56;
                dVar41 = dVar41 + dVar41;
                dVar61 = dVar61 + dVar61;
                dVar37 = dVar37 + dVar37;
                dVar43 = dVar43 + dVar43;
                dVar52 = (dVar37 * dVar54 - dVar69 * dVar61) + dVar42 * dVar41 + dVar52 + pdVar13[4]
                ;
                dVar63 = (dVar41 * dVar69 - dVar37 * dVar44) + dVar70 * dVar61 + dVar63 + pdVar13[5]
                ;
                dVar37 = (dVar61 * dVar44 - dVar54 * dVar41) + dVar42 * dVar37 + dVar36 + pdVar13[6]
                ;
                dVar41 = (dVar43 * dVar56 - dVar43 * dVar56) + dVar70 * dVar43 + dVar55 + pdVar13[7]
                ;
                local_2f8 = auVar35;
              }
              else {
                dVar44 = *pdVar13;
                dVar54 = pdVar13[1];
                dVar69 = pdVar13[2];
                dVar52 = dVar54 + dVar54;
                dVar61 = dVar69 + dVar69;
                dVar42 = dVar44 * (dVar44 + dVar44);
                local_1a8 = (1.0 - (dVar42 + dVar54 * dVar52)) * dVar11;
                dVar70 = pdVar13[3];
                dVar63 = dVar61 * dVar70;
                dVar43 = (dVar44 + dVar44) * pdVar13[3];
                dVar70 = dVar52 * dVar70;
                local_1b8 = (dVar70 + *pdVar13 * dVar61) * dVar11;
                dStack_1b0 = (dVar61 * dVar54 - dVar43) * dVar11;
                dVar42 = (1.0 - (dVar69 * dVar61 + dVar42)) * dVar53;
                local_1c8 = (dVar61 * dVar54 + dVar43) * dVar53;
                local_1e8 = (*pdVar13 * dVar61 - dVar70) * dVar10;
                local_1f8._8_8_ = (dVar52 * dVar44 + dVar63) * dVar10;
                local_1f8._0_8_ = (1.0 - (dVar69 * dVar61 + dVar54 * dVar52)) * dVar10;
                uStack_1e0 = 0.0;
                local_1d8._8_4_ = SUB84(dVar42,0);
                local_1d8._0_8_ = (dVar52 * dVar44 - dVar63) * dVar53;
                local_1d8._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = pdVar13[4];
                dStack_190 = pdVar13[5];
                local_188 = pdVar13[6];
                uStack_180 = 0x3ff0000000000000;
                dVar70 = (double)CONCAT44(uVar66,uVar65) + (double)CONCAT44(uVar66,uVar65);
                dVar42 = (double)CONCAT44(uVar68,uVar67) + (double)CONCAT44(uVar68,uVar67);
                dVar43 = dVar37 + dVar37;
                dVar44 = (double)CONCAT44(uVar66,uVar65) * dVar70;
                dVar54 = (double)CONCAT44(uVar68,uVar67) * dVar42;
                local_228 = (1.0 - (dVar44 + dVar54)) * dVar34;
                dVar52 = dVar42 * (double)CONCAT44(uVar66,uVar65);
                dVar61 = dVar43 * (double)CONCAT44(uVar68,uVar67);
                dVar69 = (double)CONCAT44(uVar66,uVar65) * dVar43;
                dVar70 = dVar70 * dVar41;
                local_258 = (dVar52 - dVar43 * dVar41) * dVar33;
                dVar63 = (dVar61 - dVar70) * dVar34;
                local_278 = ((double)DAT_149934d80 - (dVar37 * dVar43 + dVar54)) * dVar28;
                dStack_250 = (DAT_149934d80._8_8_ - (dVar37 * dVar43 + dVar44)) * dVar33;
                dStack_270 = (dVar52 + dVar43 * dVar41) * dVar28;
                local_248 = (dVar61 + dVar70) * dVar33;
                local_268 = (dVar69 - dVar42 * dVar41) * dVar28;
                uStack_260 = 0;
                uStack_240 = 0;
                local_238._8_4_ = SUB84(dVar63,0);
                local_238._0_8_ = (dVar42 * dVar41 + dVar69) * dVar34;
                local_238._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
                uStack_220 = 0;
                local_218 = local_318;
                dStack_210 = dStack_310;
                local_208 = local_328;
                uStack_200 = 0x3ff0000000000000;
                puVar24 = local_1f8;
                FUN_1447fea8d(&local_178,&local_278,puVar24);
                FUN_144a1c686(&local_178,0x3e45798ee0000000);
                auVar31._8_8_ = -(ulonglong)(0.0 <= dVar33 * dVar53);
                auVar31._0_8_ = -(ulonglong)(0.0 <= dVar28 * dVar10);
                auVar47 = blendvpd(_DAT_149936790,auVar49,auVar31);
                uVar27 = -(ulonglong)(0.0 <= dVar34 * dVar11);
                dVar37 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
                dVar41 = auVar47._0_8_;
                local_168 = local_168 * dVar41;
                local_170 = local_170 * dVar41;
                local_178 = (longlong *)((double)local_178 * dVar41);
                dVar41 = auVar47._8_8_;
                local_148 = local_148 * dVar41;
                local_150 = local_150 * dVar41;
                local_158 = dVar41 * local_158;
                local_128 = local_128 * dVar37;
                local_130 = local_130 * dVar37;
                local_138 = dVar37 * local_138;
                FUN_14481fd10(&local_298,&local_178);
                dVar37 = local_288 * local_288 + local_298 * local_298;
                dVar41 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                auVar40._0_8_ = dVar37 + dVar41;
                auVar40._8_8_ = dVar37 + dVar41;
                auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_);
                auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_);
                auVar47 = sqrtpd(auVar40,auVar40);
                auVar49 = divpd(auVar49,auVar47);
                auVar51._0_8_ = auVar49._0_8_ * local_288;
                auVar51._8_8_ = auVar49._8_8_ * dStack_280;
                dVar62 = (double)((ulonglong)(local_298 * auVar49._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_));
                dVar64 = (double)((ulonglong)(dStack_290 * auVar49._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_));
                auVar49 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar51,auVar32);
                dVar41 = 0.0;
                dVar52 = local_118;
                dVar63 = dStack_110;
                dVar37 = local_108;
              }
              dVar70 = auVar35._8_8_ * auVar38._8_8_;
              *(double *)((longlong)local_2a8 + lVar14) = dVar62;
              ((double *)((longlong)local_2a8 + lVar14))[1] = dVar64;
              *(undefined1 (*) [16])((longlong)local_2a8 + lVar14 + 0x10) = auVar49;
              auVar7._8_4_ = SUB84(dVar63,0);
              auVar7._0_8_ = dVar52;
              auVar7._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
              *(undefined1 (*) [16])((longlong)local_2a8 + lVar14 + 0x20) = auVar7;
              pdVar13 = (double *)((longlong)local_2a8 + lVar14 + 0x30);
              *pdVar13 = dVar37;
              pdVar13[1] = dVar41;
              auVar5._8_4_ = SUB84(dVar33 * dVar53,0);
              auVar5._0_8_ = dVar28 * dVar10;
              auVar5._12_4_ = (int)((ulonglong)(dVar33 * dVar53) >> 0x20);
              *(undefined1 (*) [16])((longlong)local_2a8 + lVar14 + 0x40) = auVar5;
              auVar9._8_4_ = SUB84(dVar70,0);
              auVar9._0_8_ = dVar34 * dVar11;
              auVar9._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
              *(undefined1 (*) [16])((longlong)local_2a8 + lVar14 + 0x50) = auVar9;
              lVar17 = (longlong)*(int *)(*(longlong *)(lVar19 + 0x120) + lVar26 * 4);
              if (lVar17 != -1) {
                puVar24 = (undefined1 *)(lVar17 * 0x60 + (longlong)local_2a8);
                FUN_1449437a2((void *)((longlong)local_2a8 + lVar26 * 0x60),&local_178,puVar24);
                pplVar18 = &local_178;
                puVar20 = (undefined8 *)(lVar26 * 0x60 + (longlong)local_2a8);
                for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
                  *puVar20 = *pplVar18;
                  pplVar18 = pplVar18 + 1;
                  puVar20 = puVar20 + 1;
                }
              }
            }
            else {
              lVar17 = lVar26 * 0x60;
              pdVar13 = (double *)((longlong)local_2a8 + lVar17);
              auVar47 = *(undefined1 (*) [16])((longlong)local_2a8 + lVar17 + 0x40);
              dVar10 = auVar47._0_8_;
              dVar53 = auVar47._8_8_;
              auVar38 = *(undefined1 (*) [16])((longlong)local_2a8 + lVar17 + 0x50);
              dVar11 = auVar38._0_8_;
              auVar46._8_8_ = dVar33;
              auVar46._0_8_ = dVar28;
              auVar47 = minpd(auVar46,auVar47);
              auVar45 = minpd(auVar35,auVar38);
              auVar48._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
              auVar48._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
              iVar22 = movmskpd(uVar15,auVar48);
              auVar57._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
              auVar57._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
              uVar15 = movmskpd((int)puVar24,auVar57);
              if ((uVar15 & 0x3fffffff) == 0 && iVar22 == 0) {
                dVar44 = *pdVar13;
                dVar54 = pdVar13[1];
                dVar69 = pdVar13[2];
                dVar56 = pdVar13[3];
                dVar42 = pdVar13[3];
                dVar70 = pdVar13[3];
                dVar61 = pdVar13[1];
                dVar52 = pdVar13[1];
                dVar43 = pdVar13[2];
                dVar63 = pdVar13[2];
                dVar62 = (double)CONCAT44(uVar68,uVar67) * dVar43 * -1.0 +
                         dVar37 * dVar61 +
                         dVar41 * *pdVar13 * 1.0 + (double)CONCAT44(uVar66,uVar65) * dVar42;
                dVar64 = (double)CONCAT44(uVar66,uVar65) * dVar63 * 1.0 +
                         dVar41 * dVar52 +
                         dVar37 * *pdVar13 * -1.0 + (double)CONCAT44(uVar68,uVar67) * dVar70;
                auVar58._0_8_ =
                     dVar41 * dVar43 * 1.0 +
                     ((*pdVar13 * (double)CONCAT44(uVar68,uVar67) * 1.0 + dVar37 * dVar42) -
                     (double)CONCAT44(uVar66,uVar65) * dVar61);
                auVar58._8_8_ =
                     dVar37 * dVar63 * -1.0 +
                     ((*pdVar13 * (double)CONCAT44(uVar66,uVar65) * -1.0 + dVar41 * dVar70) -
                     (double)CONCAT44(uVar68,uVar67) * dVar52);
                dVar52 = local_318 * dVar10;
                dVar63 = dStack_310 * dVar53;
                dVar43 = local_328 * dVar11;
                dVar36 = dStack_320 * auVar38._8_8_;
                dVar37 = dVar63 * dVar44 - dVar52 * dVar54;
                dVar41 = dVar43 * dVar54 - dVar63 * dVar69;
                dVar61 = dVar52 * dVar69 - dVar43 * dVar44;
                dVar55 = dVar36 * dVar56 - dVar36 * dVar56;
                dVar41 = dVar41 + dVar41;
                dVar61 = dVar61 + dVar61;
                dVar37 = dVar37 + dVar37;
                dVar55 = dVar55 + dVar55;
                dVar52 = (dVar37 * dVar54 - dVar69 * dVar61) + dVar42 * dVar41 + dVar52 + pdVar13[4]
                ;
                dVar63 = (dVar41 * dVar69 - dVar37 * dVar44) + dVar70 * dVar61 + dVar63 + pdVar13[5]
                ;
                dVar37 = (dVar61 * dVar44 - dVar54 * dVar41) + dVar42 * dVar37 + dVar43 + pdVar13[6]
                ;
                dVar41 = (dVar55 * dVar56 - dVar55 * dVar56) + dVar70 * dVar55 + dVar36 + pdVar13[7]
                ;
                puVar24 = (undefined1 *)0x0;
                local_2f8 = auVar35;
              }
              else {
                dVar44 = *pdVar13;
                dVar54 = pdVar13[1];
                dVar69 = pdVar13[2];
                dVar42 = dVar54 + dVar54;
                dVar52 = dVar69 + dVar69;
                dVar43 = dVar44 * (dVar44 + dVar44);
                local_1a8 = (1.0 - (dVar43 + dVar54 * dVar42)) * dVar11;
                dVar70 = pdVar13[3];
                dVar61 = dVar52 * dVar70;
                dVar63 = (dVar44 + dVar44) * pdVar13[3];
                dVar70 = dVar42 * dVar70;
                local_1b8 = (dVar70 + *pdVar13 * dVar52) * dVar11;
                dStack_1b0 = (dVar52 * dVar54 - dVar63) * dVar11;
                dVar43 = (1.0 - (dVar69 * dVar52 + dVar43)) * dVar53;
                dVar56 = (dVar42 * dVar44 + dVar61) * dVar10;
                local_1c8 = (dVar52 * dVar54 + dVar63) * dVar53;
                local_1e8 = (*pdVar13 * dVar52 - dVar70) * dVar10;
                local_1f8._8_4_ = SUB84(dVar56,0);
                local_1f8._0_8_ = (1.0 - (dVar69 * dVar52 + dVar54 * dVar42)) * dVar10;
                local_1f8._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
                uStack_1e0 = 0.0;
                local_1d8._8_4_ = SUB84(dVar43,0);
                local_1d8._0_8_ = (dVar42 * dVar44 - dVar61) * dVar53;
                local_1d8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = pdVar13[4];
                dStack_190 = pdVar13[5];
                local_188 = pdVar13[6];
                uStack_180 = 0x3ff0000000000000;
                dVar70 = (double)CONCAT44(uVar66,uVar65) + (double)CONCAT44(uVar66,uVar65);
                dVar42 = (double)CONCAT44(uVar68,uVar67) + (double)CONCAT44(uVar68,uVar67);
                dVar69 = dVar37 + dVar37;
                dVar44 = (double)CONCAT44(uVar66,uVar65) * dVar70;
                dVar54 = (double)CONCAT44(uVar68,uVar67) * dVar42;
                local_228 = (1.0 - (dVar44 + dVar54)) * dVar34;
                dVar52 = dVar42 * (double)CONCAT44(uVar66,uVar65);
                dVar61 = dVar69 * (double)CONCAT44(uVar68,uVar67);
                dVar43 = (double)CONCAT44(uVar66,uVar65) * dVar69;
                dVar70 = dVar70 * dVar41;
                local_258 = (dVar52 - dVar69 * dVar41) * dVar33;
                dVar63 = (dVar61 - dVar70) * dVar34;
                local_278 = ((double)DAT_149934d80 - (dVar37 * dVar69 + dVar54)) * dVar28;
                dStack_250 = (DAT_149934d80._8_8_ - (dVar37 * dVar69 + dVar44)) * dVar33;
                dStack_270 = (dVar52 + dVar69 * dVar41) * dVar28;
                local_248 = (dVar61 + dVar70) * dVar33;
                local_268 = (dVar43 - dVar42 * dVar41) * dVar28;
                uStack_260 = 0;
                uStack_240 = 0;
                local_238._8_4_ = SUB84(dVar63,0);
                local_238._0_8_ = (dVar42 * dVar41 + dVar43) * dVar34;
                local_238._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
                uStack_220 = 0;
                local_218 = local_318;
                dStack_210 = dStack_310;
                local_208 = local_328;
                uStack_200 = 0x3ff0000000000000;
                puVar24 = local_1f8;
                FUN_1447fea8d(&local_178,&local_278,puVar24);
                FUN_144a1c686(&local_178,0x3e45798ee0000000);
                auVar29._8_8_ = -(ulonglong)(0.0 <= dVar33 * dVar53);
                auVar29._0_8_ = -(ulonglong)(0.0 <= dVar28 * dVar10);
                auVar47 = blendvpd(_DAT_149936790,auVar49,auVar29);
                uVar27 = -(ulonglong)(0.0 <= dVar34 * dVar11);
                dVar37 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
                dVar41 = auVar47._0_8_;
                local_168 = local_168 * dVar41;
                local_170 = local_170 * dVar41;
                local_178 = (longlong *)((double)local_178 * dVar41);
                dVar41 = auVar47._8_8_;
                local_148 = local_148 * dVar41;
                local_150 = local_150 * dVar41;
                local_158 = dVar41 * local_158;
                local_128 = local_128 * dVar37;
                local_130 = local_130 * dVar37;
                local_138 = dVar37 * local_138;
                FUN_14481fd10(&local_298,&local_178);
                dVar37 = local_288 * local_288 + local_298 * local_298;
                dVar41 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                auVar39._0_8_ = dVar37 + dVar41;
                auVar39._8_8_ = dVar37 + dVar41;
                auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
                auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
                auVar47 = sqrtpd(auVar39,auVar39);
                auVar49 = divpd(auVar49,auVar47);
                auVar50._0_8_ = auVar49._0_8_ * local_288;
                auVar50._8_8_ = auVar49._8_8_ * dStack_280;
                dVar62 = (double)((ulonglong)(local_298 * auVar49._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
                dVar64 = (double)((ulonglong)(dStack_290 * auVar49._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
                auVar58 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar30);
                dVar41 = 0.0;
                dVar52 = local_118;
                dVar63 = dStack_110;
                dVar37 = local_108;
              }
              dVar70 = auVar35._8_8_ * auVar38._8_8_;
              *(double *)((longlong)local_2a8 + lVar17) = dVar62;
              ((double *)((longlong)local_2a8 + lVar17))[1] = dVar64;
              *(undefined1 (*) [16])((longlong)local_2a8 + lVar17 + 0x10) = auVar58;
              auVar6._8_4_ = SUB84(dVar63,0);
              auVar6._0_8_ = dVar52;
              auVar6._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
              *(undefined1 (*) [16])((longlong)local_2a8 + lVar17 + 0x20) = auVar6;
              pdVar13 = (double *)((longlong)local_2a8 + lVar17 + 0x30);
              *pdVar13 = dVar37;
              pdVar13[1] = dVar41;
              auVar4._8_4_ = SUB84(dVar33 * dVar53,0);
              auVar4._0_8_ = dVar28 * dVar10;
              auVar4._12_4_ = (int)((ulonglong)(dVar33 * dVar53) >> 0x20);
              *(undefined1 (*) [16])((longlong)local_2a8 + lVar17 + 0x40) = auVar4;
              auVar8._8_4_ = SUB84(dVar70,0);
              auVar8._0_8_ = dVar34 * dVar11;
              auVar8._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
              *(undefined1 (*) [16])((longlong)local_2a8 + lVar17 + 0x50) = auVar8;
            }
            lVar17 = *(longlong *)(lVar19 + 0x140);
            lVar19 = lVar26 * 0x50 + lVar17;
            dVar37 = (double)(lVar19 + 0x10);
            local_1f8._0_8_ = 2.12199579096527e-314;
            local_1e8 = 2.12199579047121e-314;
            uStack_1e0 = (double)((ulonglong)uStack_1e0 & 0xffffffff00000000);
            local_1f8._8_8_ = dVar37;
            if (*(int *)(lVar19 + 0x28) != 0) {
              FUN_1449c0562(local_1f8);
            }
            plVar16 = (longlong *)(lVar17 + lVar26 * 0x50);
            local_160 = local_1e8;
            local_158 = uStack_1e0;
            local_170 = (double)local_1f8._0_8_;
            local_168 = (double)local_1f8._8_8_;
            iVar22 = (int)plVar16[5];
            local_1f8._4_4_ = 1 << ((byte)iVar22 & 0x1f);
            uVar27 = (ulonglong)(uint)local_1f8._4_4_;
            local_1f8._0_4_ = iVar22 >> 5;
            local_1f8._8_8_ = dVar37;
            local_1e8 = (double)CONCAT44(iVar22,-1 << ((byte)iVar22 & 0x1f));
            uStack_1e0 = (double)(CONCAT44(uStack_1e0._4_4_,iVar22) & 0xffffffffffffffe0);
            local_178 = plVar16;
            if ((int)plVar16[5] != iVar22) {
              FUN_1449c0562(local_1f8);
              dVar37 = (double)local_1f8._8_8_;
              iVar22 = local_1e8._4_4_;
            }
            uVar27 = CONCAT71((int7)(uVar27 >> 8),local_160._4_4_ != iVar22);
            puVar24 = (undefined1 *)CONCAT71((int7)((ulonglong)puVar24 >> 8),local_168 != dVar37);
            if ((local_178 != plVar16 || local_168 != dVar37) || local_160._4_4_ != iVar22) {
              do {
                uVar12 = uStack_2c0;
                uVar65 = *(undefined4 *)(*local_178 + (longlong)local_160._4_4_ * 0xc);
                lVar19 = (longlong)(int)(uint)uStack_2c0;
                uVar15 = (uint)uStack_2c0 + 1;
                uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar15);
                if (uStack_2c0._4_4_ < uVar15) {
                  uVar27 = uVar12 & 0xffffffff;
                  FUN_1446f48e2(&local_2c8,uVar27);
                }
                *(undefined4 *)(local_2c8 + lVar19 * 4) = uVar65;
                local_160 = CONCAT44(local_160._4_4_,(uint)local_160 & ~local_170._4_4_);
                FUN_1449c0562(&local_170);
                bVar21 = local_168 != dVar37 || local_160._4_4_ != iVar22;
                puVar24 = (undefined1 *)CONCAT71((int7)((ulonglong)puVar24 >> 8),bVar21);
                bVar21 = local_178 != plVar16 || bVar21;
                uVar27 = CONCAT71((int7)(uVar27 >> 8),bVar21);
              } while (bVar21);
            }
            lVar25 = lVar25 + 1;
          } while (lVar25 < (int)(uint)uStack_2c0);
        }
        _Src = local_2a8;
        lVar25 = local_2e0;
        ppvVar3 = (void **)(local_2e0 + 0x768);
        if (ppvVar3 != &local_2a8) {
          *(int *)(local_2e0 + 0x770) = local_2a0;
          if (local_2a0 == 0 && *(int *)(local_2e0 + 0x774) == 0) {
            *(undefined4 *)(local_2e0 + 0x774) = 0;
          }
          else {
            FUN_144756262(ppvVar3,local_2a0);
            if (local_2a0 != 0) {
              memcpy(*ppvVar3,_Src,(longlong)local_2a0 * 0x60);
            }
          }
        }
        FUN_1474a5c64(lVar25,ppvVar3);
        FUN_1474a5b7e(lVar25);
        if (local_2c8 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_2a8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474a31fa FUN_1474a31fa body=158 status=ok
// SIG undefined FUN_1474a31fa(void)

void FUN_1474a31fa(undefined8 param_1,longlong param_2)

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
  FUN_14179639c(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a32a4 FUN_1474a32a4 body=240 status=ok
// SIG undefined FUN_1474a32a4(void)

void FUN_1474a32a4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474a3396(param_1,iVar1 != 0,local_28 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a3396 FUN_1474a3396 body=89 status=ok
// SIG undefined FUN_1474a3396(void)

void FUN_1474a3396(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(char *)(param_1 + 0x844) == (char)param_2) && (*(char *)(param_1 + 0x845) == (char)param_3)
     ) {
    return;
  }
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FUN_146ee9342(*(longlong *)(param_1 + 0xa40),param_2,param_3);
  }
  *(char *)(param_1 + 0x844) = (char)param_2;
  *(char *)(param_1 + 0x845) = (char)param_3;
  FUN_14075ad8a(param_1);
  return;
}



// FUNCTION 1474a33f4 FUN_1474a33f4 body=189 status=ok
// SIG undefined FUN_1474a33f4(void)

void FUN_1474a33f4(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  bVar1 = local_24 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((bool)*(char *)(param_1 + 0x846) != bVar1) {
    if (*(longlong *)(param_1 + 0xa40) != 0) {
      FUN_146ee93f6(*(longlong *)(param_1 + 0xa40),local_24 != 0);
    }
    *(bool *)(param_1 + 0x846) = bVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a34b6 FUN_1474a34b6 body=174 status=ok
// SIG undefined FUN_1474a34b6(void)

void FUN_1474a34b6(longlong param_1,longlong param_2)

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
  if ((bool)*(char *)(param_1 + 0x847) != (local_1c != 0)) {
    *(bool *)(param_1 + 0x847) = local_1c != 0;
    FUN_1474a4f10(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a3570 FUN_1474a3570 body=314 status=ok
// SIG undefined FUN_1474a3570(void)

void FUN_1474a3570(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  bVar2 = local_38 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((bool)*(char *)(param_1 + 0x849) != (iVar1 != 0)) ||
     ((bool)*(char *)(param_1 + 0x84a) != bVar2)) {
    if (*(longlong *)(param_1 + 0xa40) != 0) {
      FUN_146ee949c(*(longlong *)(param_1 + 0xa40),iVar1 != 0,local_38 != 0);
    }
    *(bool *)(param_1 + 0x844) = iVar1 != 0;
    *(bool *)(param_1 + 0x84a) = bVar2;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a36b0 FUN_1474a36b0 body=158 status=ok
// SIG undefined FUN_1474a36b0(void)

void FUN_1474a36b0(undefined8 param_1,longlong param_2)

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
  FUN_1474a3750(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a3750 FUN_1474a3750 body=65 status=ok
// SIG undefined FUN_1474a3750(void)

void FUN_1474a3750(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x848) == (char)param_2) {
    return;
  }
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FUN_146ee949a(*(longlong *)(param_1 + 0xa40),param_2);
  }
  *(char *)(param_1 + 0x848) = (char)param_2;
  FUN_1474a4f52(param_1);
  return;
}



// FUNCTION 1474a3796 FUN_1474a3796 body=158 status=ok
// SIG undefined FUN_1474a3796(void)

void FUN_1474a3796(undefined8 param_1,longlong param_2)

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
  FUN_1474a3836(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a3836 FUN_1474a3836 body=65 status=ok
// SIG undefined FUN_1474a3836(void)

void FUN_1474a3836(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x843) == (char)param_2) {
    return;
  }
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FUN_146ee9340(*(longlong *)(param_1 + 0xa40),param_2);
  }
  *(char *)(param_1 + 0x843) = (char)param_2;
  FUN_14075ad8a(param_1);
  return;
}



// FUNCTION 1474a3878 FUN_1474a3878 body=169 status=ok
// SIG undefined FUN_1474a3878(void)

void FUN_1474a3878(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x680) = local_1c;
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FUN_146eec1ea();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a3922 FUN_1474a3922 body=195 status=ok
// SIG undefined FUN_1474a3922(void)

void FUN_1474a3922(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1406fa324(param_1 + 0x888,plVar1);
  FUN_140759f2c(param_1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a39e6 FUN_1474a39e6 body=261 status=ok
// SIG undefined FUN_1474a39e6(void)

void FUN_1474a39e6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474a3aec(param_1,plVar1,local_40);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a3aec FUN_1474a3aec body=239 status=ok
// SIG undefined FUN_1474a3aec(void)

void FUN_1474a3aec(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x660);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x218);
    plVar5 = *(longlong **)(lVar3 + 0x220);
    if (plVar5 == (longlong *)0x0) {
      iVar8 = *(int *)(lVar4 + 200);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      iVar8 = *(int *)(lVar4 + 200);
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
    bVar10 = *(int *)(param_1 + 0x8a0) != iVar8;
    if (bVar10) {
      FUN_14001aa68((longlong *)(param_1 + 0x898),iVar8,1);
    }
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar4 = *param_2;
      lVar7 = 0;
      do {
        lVar9 = (longlong)*(int *)(lVar4 + lVar7);
        if (((-1 < lVar9) && (*(int *)(lVar4 + lVar7) < *(int *)(param_1 + 0x8a0))) &&
           (lVar6 = *(longlong *)(param_1 + 0x898), *(longlong *)(lVar6 + lVar9 * 8) != param_3)) {
          *(longlong *)(lVar6 + lVar9 * 8) = param_3;
          bVar10 = true;
        }
        lVar7 = lVar7 + 4;
      } while ((longlong)(int)lVar3 * 4 != lVar7);
    }
    if (bVar10) {
      FUN_140759f2c(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1474a3be8 FUN_1474a3be8 body=338 status=ok
// SIG undefined FUN_1474a3be8(void)

void FUN_1474a3be8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
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
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar1 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1406cc26a(param_1,local_28,iVar1 != 0,local_30 != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a3d3c FUN_1474a3d3c body=387 status=ok
// SIG undefined FUN_1474a3d3c(void)

void FUN_1474a3d3c(undefined8 param_1,longlong param_2)

{
  double *pdVar1;
  undefined1 auStack_d8 [32];
  double local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_b8[0] = 0.0;
  local_b8[1] = 0.0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  pdVar1 = local_b8;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar1 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fStack_20 = (float)pdVar1[10];
  fStack_1c = (float)pdVar1[0xb];
  local_28 = (float)pdVar1[8];
  fStack_24 = (float)pdVar1[9];
  fStack_30 = (float)pdVar1[6];
  fStack_2c = (float)pdVar1[7];
  local_38 = (float)pdVar1[4];
  fStack_34 = (float)pdVar1[5];
  fStack_40 = (float)pdVar1[2];
  fStack_3c = (float)pdVar1[3];
  local_48 = (float)*pdVar1;
  fStack_44 = (float)pdVar1[1];
  FUN_1474a87e2(param_1,local_4c);
  FUN_140ca2e9a(param_1);
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a3ec0 FUN_1474a3ec0 body=156 status=ok
// SIG undefined FUN_1474a3ec0(void)

void FUN_1474a3ec0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474a3f5e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a3f5e FUN_1474a3f5e body=65 status=ok
// SIG undefined FUN_1474a3f5e(void)

void FUN_1474a3f5e(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x658) = param_2;
  FUN_1406cc694(param_1);
  FUN_1406cc378(param_1);
  return;
}



// FUNCTION 1474a3fa4 FUN_1474a3fa4 body=177 status=ok
// SIG undefined FUN_1474a3fa4(void)

void FUN_1474a3fa4(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x6a9) = local_1c != 0;
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FUN_146eebbee(*(longlong *)(param_1 + 0xa40),local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a405a FUN_1474a405a body=189 status=ok
// SIG undefined FUN_1474a405a(void)

void FUN_1474a405a(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  bVar1 = local_24 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((bool)*(char *)(param_1 + 0x873) != bVar1) {
    if (*(longlong *)(param_1 + 0xa40) != 0) {
      FUN_142a1f3ee(*(longlong *)(param_1 + 0xa40),local_24 != 0);
    }
    *(bool *)(param_1 + 0x873) = bVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a4224 FUN_1474a4224 body=60 status=ok
// SIG undefined FUN_1474a4224(void)

void FUN_1474a4224(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x2c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
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



// FUNCTION 1474a4260 FUN_1474a4260 body=99 status=ok
// SIG undefined FUN_1474a4260(void)

void FUN_1474a4260(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  FUN_1448284b2(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3c9a0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a42c4 FUN_1474a42c4 body=214 status=ok
// SIG undefined FUN_1474a42c4(void)

undefined8 FUN_1474a42c4(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  short *psVar9;
  
  if ((*(int *)(param_1 + 4) != 0) && (*(char *)(param_1 + 6) == (char)param_2[6])) {
    if ((longlong)*(int *)(param_1 + 1) != 0) {
      if ((longlong)(int)param_2[1] == 0) {
        return 1;
      }
      psVar3 = (short *)*param_1;
      psVar9 = psVar3 + (longlong)*(int *)(param_1 + 1) * 0x1c;
      do {
        lVar6 = 0;
        while (*(short *)(*param_2 + lVar6) != *psVar3) {
          lVar6 = lVar6 + 0x38;
          if ((longlong)(int)param_2[1] * 0x38 - lVar6 == 0) {
            return 1;
          }
        }
        psVar3 = psVar3 + 0x1c;
      } while (psVar3 != psVar9);
    }
    if ((longlong)*(int *)(param_1 + 3) == 0) {
      return 0;
    }
    lVar6 = param_2[3];
    if ((longlong)(int)lVar6 != 0) {
      lVar7 = param_1[2];
      lVar8 = (longlong)*(int *)(param_1 + 3) * 0x80 + lVar7;
      lVar1 = param_2[2];
      while( true ) {
        lVar4 = (longlong)(int)lVar6 << 7;
        lVar5 = lVar1;
        while (*(short *)(lVar5 + 0x70) != *(short *)(lVar7 + 0x70)) {
          lVar5 = lVar5 + 0x80;
          lVar4 = lVar4 + -0x80;
          if (lVar4 == 0) {
            return 1;
          }
        }
        if ((lVar5 == 0) || (cVar2 = FUN_1474a439a(lVar7), cVar2 != '\0')) break;
        lVar7 = lVar7 + 0x80;
        if (lVar7 == lVar8) {
          return 0;
        }
      }
    }
  }
  return 1;
}



// FUNCTION 1474a439a FUN_1474a439a body=192 status=ok
// SIG undefined FUN_1474a439a(void)

uint FUN_1474a439a(double *param_1,double *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  
  uVar4 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  if ((*(char *)((longlong)param_2 + 0x72) == *(char *)((longlong)param_1 + 0x72)) &&
     (*(short *)(param_2 + 0xe) == *(short *)(param_1 + 0xe))) {
    if (((((*param_2 == *param_1) &&
          ((((!NAN(*param_2) && !NAN(*param_1) && (param_2[1] == param_1[1])) &&
            (!NAN(param_2[1]) && !NAN(param_1[1]))) &&
           ((param_2[2] == param_1[2] && (!NAN(param_2[2]) && !NAN(param_1[2]))))))) &&
         (param_2[3] == param_1[3])) &&
        (((!NAN(param_2[3]) && !NAN(param_1[3]) && (param_2[4] == param_1[4])) &&
         ((!NAN(param_2[4]) && !NAN(param_1[4]) &&
          (((param_2[5] == param_1[5] && (!NAN(param_2[5]) && !NAN(param_1[5]))) &&
           (param_2[6] == param_1[6])))))))) &&
       (((!NAN(param_2[6]) && !NAN(param_1[6]) && (param_2[7] == param_1[7])) &&
        ((!NAN(param_2[7]) && !NAN(param_1[7]) &&
         ((param_2[8] == param_1[8] && (!NAN(param_2[8]) && !NAN(param_1[8]))))))))) {
      auVar1._8_8_ = -(ulonglong)(param_1[0xb] != param_2[0xb]);
      auVar1._0_8_ = -(ulonglong)(param_1[10] != param_2[10]);
      iVar3 = movmskpd(uVar4,auVar1);
      auVar2._8_8_ = -(ulonglong)(param_1[0xd] != param_2[0xd]);
      auVar2._0_8_ = -(ulonglong)(param_1[0xc] != param_2[0xc]);
      uVar4 = movmskpd((int)param_1,auVar2);
      uVar4 = (uint)((uVar4 & 0x3fffffff) != 0 || iVar3 != 0);
    }
  }
  return uVar4;
}



// FUNCTION 1474a445a FUN_1474a445a body=107 status=ok
// SIG undefined FUN_1474a445a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474a445a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa9688) {
    FUN_144b3d300(&DAT_14caa9688);
    if (DAT_14caa9688 == -1) {
      _DAT_14caa9678 = &PTR_LAB_14a40dd10;
      _DAT_14caa9680 = DAT_14caa9670;
      _Init_thread_footer(&DAT_14caa9688);
      return;
    }
  }
  return;
}



// FUNCTION 1474a44c6 FUN_1474a44c6 body=677 status=ok
// SIG undefined FUN_1474a44c6(void)

void FUN_1474a44c6(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  int *piVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_3 = 1;
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x20),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1474ac18c(param_2,param_1);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x24),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  local_30 = *(undefined4 *)(param_1 + 0x18);
  puVar3 = (ulonglong *)param_2[1];
  puVar2 = (undefined4 *)*puVar3 + 1;
  if ((undefined4 *)puVar3[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_30);
    }
  }
  else {
    local_30 = *(undefined4 *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
  }
  piVar4 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
    local_2c = (uint)*(byte *)(param_1 + 0x30);
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x30) = local_2c != 0;
  }
  else {
    *(bool *)(param_1 + 0x30) = *piVar4 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (FUN_1474a476c(param_1 + 0x10,local_30), *(char *)(param_1 + 0x2c) == '\x01')) {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    puVar8 = (undefined1 *)(lVar5 + 0x72);
    do {
      FUN_14480c34d(param_2,puVar8 + -0x72);
      FUN_14480c34d(param_2,puVar8 + -0x5a);
      FUN_14480c34d(param_2,puVar8 + -0x42);
      FUN_1400f4f7e(param_2,puVar8 + -0x22);
      puVar6 = *(undefined2 **)param_2[1];
      if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar8 + -2,2);
        }
        else {
          thunk_FUN_1457251a8(param_2);
        }
      }
      else {
        *(undefined2 *)(puVar8 + -2) = *puVar6;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
      }
      puVar7 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,puVar8,1);
      }
      else {
        *puVar8 = *puVar7;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      puVar7 = puVar8 + 0xe;
      puVar8 = puVar8 + 0x80;
    } while (puVar7 != (undefined1 *)((longlong)iVar1 * 0x80 + lVar5));
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474a476c FUN_1474a476c body=109 status=ok
// SIG undefined FUN_1474a476c(void)

void FUN_1474a476c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1474ac8e4(param_1,iVar1);
    }
    FUN_1474ac49a((longlong)iVar1 * 0x80 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1474ac96a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1474a47da FUN_1474a47da body=100 status=ok
// SIG undefined FUN_1474a47da(void)

ulonglong FUN_1474a47da(int *param_1,longlong param_2)

{
  int iVar1;
  int *_Buf1;
  void *_Buf2;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if ((*param_1 != 0) && (param_1[8] == *(int *)(param_2 + 0x20))) {
    _Buf2 = (void *)(param_2 + 8);
    if (*(void **)(param_2 + 0x18) != (void *)0x0) {
      _Buf2 = *(void **)(param_2 + 0x18);
    }
    _Buf1 = param_1 + 2;
    if (*(int **)(param_1 + 6) != (int *)0x0) {
      _Buf1 = *(int **)(param_1 + 6);
    }
    iVar1 = memcmp(_Buf1,_Buf2,(ulonglong)(param_1[8] + 0x1fU >> 3 & 0xfffffffc));
    if (iVar1 == 0) {
      uVar2 = CONCAT71(uVar3,(char)param_1[10] != *(char *)(param_2 + 0x28));
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1474a483e FUN_1474a483e body=107 status=ok
// SIG undefined FUN_1474a483e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474a483e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa96c8) {
    FUN_144b3d300(&DAT_14caa96c8);
    if (DAT_14caa96c8 == -1) {
      _DAT_14caa96b8 = &PTR_LAB_14a40dd10;
      _DAT_14caa96c0 = DAT_14caa96b0;
      _Init_thread_footer(&DAT_14caa96c8);
      return;
    }
  }
  return;
}



// FUNCTION 1474a48aa FUN_1474a48aa body=449 status=ok
// SIG undefined FUN_1474a48aa(void)

void FUN_1474a48aa(undefined4 *param_1,longlong *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  ulonglong *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_48 [38];
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_3 = 1;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_146897be2(param_1 + 2,param_2);
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1 + 10,1);
  }
  else {
    *(undefined1 *)(param_1 + 10) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  local_22 = *(undefined2 *)(param_1 + 0xe);
  puVar3 = (ulonglong *)param_2[1];
  puVar6 = (undefined2 *)*puVar3 + 1;
  if ((undefined2 *)puVar3[1] < puVar6) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_22,2);
    }
    else {
      thunk_FUN_1457251a8(param_2,&local_22);
    }
  }
  else {
    local_22 = *(undefined2 *)*puVar3;
    *puVar3 = (ulonglong)puVar6;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_1474a4a6c(param_1 + 0xc,local_22);
  }
  if ((longlong)(int)param_1[0xe] != 0) {
    puVar6 = *(undefined2 **)(param_1 + 0xc);
    lVar5 = (longlong)(int)param_1[0xe] * 0x38;
    do {
      puVar4 = *(undefined2 **)param_2[1];
      if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar6,2);
        }
        else {
          thunk_FUN_1457251a8(param_2,puVar6);
        }
      }
      else {
        *puVar6 = *puVar4;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
      }
      FUN_14480c34d(param_2,puVar6 + 4);
      FUN_14480c34d(param_2,puVar6 + 0x10);
      puVar6 = puVar6 + 0x1c;
      lVar5 = lVar5 + -0x38;
    } while (lVar5 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474a4a6c FUN_1474a4a6c body=42 status=ok
// SIG undefined FUN_1474a4a6c(void)

void FUN_1474a4a6c(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1474aca06();
      return;
    }
  }
  else if (param_2 < iVar1) {
    *(int *)(param_1 + 8) = param_2;
    FUN_1474aca96();
    return;
  }
  return;
}



// FUNCTION 1474a4a96 FUN_1474a4a96 body=320 status=ok
// SIG undefined FUN_1474a4a96(void)

bool FUN_1474a4a96(double *param_1,double *param_2)

{
  bool bVar1;
  
  if ((((((9.999999747378752e-05 < ABS(*param_1 - *param_2)) ||
         (9.999999747378752e-05 < ABS(param_1[1] - param_2[1]))) ||
        (9.999999747378752e-05 < ABS(param_1[2] - param_2[2]))) ||
       ((9.999999747378752e-05 < ABS(param_1[3] - param_2[3]) ||
        (9.999999747378752e-05 < ABS(param_1[4] - param_2[4]))))) ||
      ((9.999999747378752e-05 < ABS(param_1[5] - param_2[5]) ||
       ((9.999999747378752e-05 < ABS(param_1[6] - param_2[6]) ||
        (9.999999747378752e-05 < ABS(param_1[7] - param_2[7]))))))) ||
     ((9.999999747378752e-05 < ABS(param_1[8] - param_2[8]) ||
      ((9.999999747378752e-05 < ABS(param_1[9] - param_2[9]) ||
       (9.999999747378752e-05 < ABS(param_1[10] - param_2[10]))))))) {
    bVar1 = false;
  }
  else {
    bVar1 = ABS(param_1[0xb] - param_2[0xb]) <= 9.999999747378752e-05;
  }
  return bVar1;
}



// FUNCTION 1474a4bd6 FUN_1474a4bd6 body=125 status=ok
// SIG undefined FUN_1474a4bd6(void)

undefined8 FUN_1474a4bd6(int *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*param_1 != 0) {
    if ((longlong)param_1[4] == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_2 + 0x10);
    if ((longlong)iVar1 != 0) {
      lVar6 = *(longlong *)(param_1 + 2);
      lVar7 = (longlong)param_1[4] * 0x68 + lVar6;
      lVar2 = *(longlong *)(param_2 + 8);
      while( true ) {
        lVar4 = lVar2;
        lVar5 = (longlong)iVar1 * 0x68;
        while (*(short *)(lVar4 + 0x60) != *(short *)(lVar6 + 0x60)) {
          lVar4 = lVar4 + 0x68;
          lVar5 = lVar5 + -0x68;
          if (lVar5 == 0) {
            return 1;
          }
        }
        if ((lVar4 == 0) || (cVar3 = FUN_1474a4a96(lVar4,lVar6), cVar3 == '\0')) break;
        lVar6 = lVar6 + 0x68;
        if (lVar6 == lVar7) {
          return 0;
        }
      }
    }
  }
  return 1;
}



// FUNCTION 1474a4c53 FUN_1474a4c53 body=107 status=ok
// SIG undefined FUN_1474a4c53(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474a4c53(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa9708) {
    FUN_144b3d300(&DAT_14caa9708);
    if (DAT_14caa9708 == -1) {
      _DAT_14caa96f8 = &PTR_LAB_14a40dd10;
      _DAT_14caa9700 = DAT_14caa96f0;
      _Init_thread_footer(&DAT_14caa9708);
      return;
    }
  }
  return;
}



// FUNCTION 1474a4cbe FUN_1474a4cbe body=486 status=ok
// SIG undefined FUN_1474a4cbe(void)

void FUN_1474a4cbe(undefined4 *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_58 [46];
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  local_2a = *(undefined2 *)(param_1 + 4);
  puVar3 = (ulonglong *)param_2[1];
  puVar5 = (undefined2 *)*puVar3 + 1;
  if ((undefined2 *)puVar3[1] < puVar5) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_2a,2);
    }
    else {
      thunk_FUN_1457251a8(param_2,&local_2a);
    }
  }
  else {
    local_2a = *(undefined2 *)*puVar3;
    *puVar3 = (ulonglong)puVar5;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_1474a4ea6(param_1 + 2,local_2a);
  }
  iVar1 = param_1[4];
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 2);
    puVar7 = (undefined1 *)(lVar4 + 0x62);
    do {
      puVar5 = *(undefined2 **)param_2[1];
      if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar7 + -2,2);
        }
        else {
          thunk_FUN_1457251a8(param_2);
        }
      }
      else {
        *(undefined2 *)(puVar7 + -2) = *puVar5;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
      }
      puVar6 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,puVar7,1);
      }
      else {
        *puVar7 = *puVar6;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      FUN_14480c34d(param_2,puVar7 + -0x62);
      FUN_14480c34d(param_2,puVar7 + -0x4a);
      FUN_14480c34d(param_2,puVar7 + -0x32);
      FUN_14480c34d(param_2,puVar7 + -0x1a);
      puVar6 = puVar7 + 6;
      puVar7 = puVar7 + 0x68;
    } while (puVar6 != (undefined1 *)((longlong)iVar1 * 0x68 + lVar4));
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474a4ea6 FUN_1474a4ea6 body=42 status=ok
// SIG undefined FUN_1474a4ea6(void)

void FUN_1474a4ea6(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1474acb3c();
      return;
    }
  }
  else if (param_2 < iVar1) {
    *(int *)(param_1 + 8) = param_2;
    FUN_1474acbcc();
    return;
  }
  return;
}



// FUNCTION 1474a4ed0 FUN_1474a4ed0 body=26 status=ok
// SIG undefined FUN_1474a4ed0(void)

void FUN_1474a4ed0(undefined8 param_1)

{
  FUN_140456554();
  FUN_140ca2e9a(param_1);
  return;
}



// FUNCTION 1474a4eea FUN_1474a4eea body=26 status=ok
// SIG undefined FUN_1474a4eea(void)

void FUN_1474a4eea(undefined8 param_1)

{
  FUN_14058337a();
  FUN_140ca2e9a(param_1);
  return;
}



// FUNCTION 1474a4f10 FUN_1474a4f10 body=66 status=ok
// SIG undefined FUN_1474a4f10(void)

void FUN_1474a4f10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1407592a6();
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x847) == '\x01') {
    FUN_147c6966a(lVar1,param_1);
    return;
  }
  FUN_147c696b6(lVar1,param_1);
  return;
}



// FUNCTION 1474a4f52 FUN_1474a4f52 body=66 status=ok
// SIG undefined FUN_1474a4f52(void)

void FUN_1474a4f52(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1407592a6();
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x848) == '\x01') {
    FUN_147c696c2(lVar1,param_1);
    return;
  }
  FUN_147c6970e(lVar1,param_1);
  return;
}



// FUNCTION 1474a4fa0 FUN_1474a4fa0 body=123 status=ok
// SIG undefined FUN_1474a4fa0(void)

void FUN_1474a4fa0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x550);
  *(undefined8 *)(param_1 + 0x550) = 0;
  FUN_1405a2f76();
  *(undefined8 *)(param_1 + 0x550) = uVar1;
  if (((param_2 != '\0') && (*(longlong *)(param_1 + 0xa40) == 0)) &&
     (*(longlong *)(param_1 + 0x660) != 0)) {
    FUN_1417be5f6(param_1);
    if (*(longlong *)(param_1 + 0xa40) == 0) {
      cVar2 = FUN_1474b40a4(*(undefined8 *)(param_1 + 0x660));
      if (cVar2 == '\0') {
        FUN_140758034(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1474a5052 FUN_1474a5052 body=419 status=ok
// SIG undefined FUN_1474a5052(void)

void FUN_1474a5052(undefined8 param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_148 [32];
  undefined1 local_128 [200];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar7 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar7 != 1.0) || (dVar4 = dVar3, dVar5 = dVar2, dVar8 = dVar1, NAN(dVar7))) &&
     (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar8 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar7)) {
    dVar8 = 1.0 / SQRT(dVar7);
    dVar4 = dVar3 * dVar8;
    dVar5 = dVar2 * dVar8;
    dVar8 = dVar1 * dVar8;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar6[1] = 0;
  FUN_1446ddc76(puVar6 + 1,&DAT_149e02088,1);
  *puVar6 = &PTR_FUN_149f62a30;
  *(float *)(puVar6 + 2) = (float)SQRT(dVar7);
  puVar6[3] = dVar8;
  puVar6[4] = dVar5;
  puVar6[5] = dVar4;
  FUN_1474900d2(local_128,2,puVar6);
  FUN_1403c27ec(param_1,local_128);
  FUN_14017126a(local_128);
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474a51f6 FUN_1474a51f6 body=436 status=ok
// SIG undefined FUN_1474a51f6(void)

void FUN_1474a51f6(undefined8 param_1,double *param_2,undefined8 param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_158 [32];
  undefined1 local_138 [200];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar8 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar8 != 1.0) || (dVar4 = dVar3, dVar5 = dVar2, dVar9 = dVar1, NAN(dVar8))) &&
     (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar9 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar8)) {
    dVar9 = 1.0 / SQRT(dVar8);
    dVar4 = dVar3 * dVar9;
    dVar5 = dVar2 * dVar9;
    dVar9 = dVar1 * dVar9;
  }
  uVar7 = 0x13;
  if (param_4 != '\0') {
    uVar7 = 5;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar6[1] = 0;
  FUN_1446ddc76(puVar6 + 1,&DAT_149e02088,1);
  *puVar6 = &PTR_FUN_149f62a30;
  *(float *)(puVar6 + 2) = (float)SQRT(dVar8);
  puVar6[3] = dVar9;
  puVar6[4] = dVar5;
  puVar6[5] = dVar4;
  FUN_1474900d2(local_138,uVar7,puVar6);
  FUN_1403c27ec(param_1,local_138);
  FUN_14017126a(local_138);
  if ((local_70 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474a53ac FUN_1474a53ac body=109 status=ok
// SIG undefined FUN_1474a53ac(void)

void FUN_1474a53ac(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    local_18 = param_3[2];
    local_28 = *param_3;
    uStack_20 = param_3[1];
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = *(undefined8 *)(param_2 + 4);
    FUN_146ee86a2(*(longlong *)(param_1 + 0xa40),&local_48,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a541a FUN_1474a541a body=576 status=ok
// SIG undefined FUN_1474a541a(void)

undefined8 *
FUN_1474a541a(undefined8 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
             int param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  if (param_5 == 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    local_78 = *param_2;
    uStack_74 = param_2[1];
    uStack_70 = param_2[2];
    uStack_6c = param_2[3];
    local_68 = *(undefined8 *)(param_2 + 4);
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_149f62a90;
    FUN_1446ddc76(puVar3 + 1,&DAT_149e02088,1);
    *puVar3 = &PTR_FUN_149f62ae0;
    *(undefined4 *)(puVar3 + 2) = param_4;
    *(undefined4 *)(puVar3 + 3) = local_78;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_74;
    *(undefined4 *)(puVar3 + 4) = uStack_70;
    *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_6c;
    puVar3[5] = local_68;
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    local_98 = *param_2;
    uStack_94 = param_2[1];
    uStack_90 = param_2[2];
    uStack_8c = param_2[3];
    local_88 = *(undefined8 *)(param_2 + 4);
    puVar1[1] = 0;
    FUN_1446ddc76(puVar1 + 1,&DAT_149e02088,1);
    *puVar1 = &PTR_FUN_149f62b40;
    *(undefined4 *)(puVar1 + 2) = param_4;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0x3f80000000000000;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 4) = param_3;
    *(undefined4 *)(puVar1 + 5) = local_98;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_94;
    *(undefined4 *)(puVar1 + 6) = uStack_90;
    *(undefined4 *)((longlong)puVar1 + 0x34) = uStack_8c;
    puVar1[7] = local_88;
    *(undefined4 *)(puVar1 + 8) = 1;
    puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    local_a8 = *(undefined8 *)(param_2 + 4);
    puVar2[1] = 0;
    FUN_1446ddc76(puVar2 + 1,&DAT_149e02088,1);
    *puVar2 = &PTR_FUN_149f62ae0;
    *(undefined4 *)(puVar2 + 2) = 0x3f800000;
    *(undefined4 *)(puVar2 + 3) = local_b8;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_b4;
    *(undefined4 *)(puVar2 + 4) = uStack_b0;
    *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_ac;
    puVar2[5] = local_a8;
    puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_149f62a90;
    FUN_1446ddc76(puVar3 + 1,&DAT_149e02088,1);
    *puVar3 = &PTR_FUN_149f62ba0;
    *(undefined4 *)(puVar3 + 2) = 0x3f800000;
    puVar3[3] = puVar1;
    puVar3[4] = puVar2;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
  }
  if (puVar3 != (undefined8 *)0x0) {
    *param_1 = puVar3;
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a565c FUN_1474a565c body=153 status=ok
// SIG undefined FUN_1474a565c(void)

void FUN_1474a565c(longlong param_1)

{
  undefined4 in_stack_00000028;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong local_e8;
  undefined1 local_e0 [200];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(byte *)(param_1 + 0x2dd) & 0x40) == 0) {
    local_f8 = in_stack_00000028;
    FUN_1474a541a(&local_e8);
    if (local_e8 != 0) {
      FUN_1403c23ea(local_e0,2);
      FUN_1403c221c(local_e0);
      FUN_1403c27ec(param_1,local_e0);
      FUN_14017126a(local_e0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a56f6 FUN_1474a56f6 body=172 status=ok
// SIG undefined FUN_1474a56f6(void)

void FUN_1474a56f6(longlong param_1)

{
  undefined8 uVar1;
  undefined4 in_stack_00000028;
  char in_stack_00000030;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong local_e8;
  undefined1 local_e0 [200];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(byte *)(param_1 + 0x2dd) & 0x20) == 0) {
    local_f8 = in_stack_00000028;
    FUN_1474a541a(&local_e8);
    if (local_e8 != 0) {
      uVar1 = 0x13;
      if (in_stack_00000030 != '\0') {
        uVar1 = 5;
      }
      FUN_1403c23ea(local_e0,uVar1);
      FUN_1403c221c(local_e0);
      FUN_1403c27ec(param_1,local_e0);
      FUN_14017126a(local_e0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a57a4 FUN_1474a57a4 body=419 status=ok
// SIG undefined FUN_1474a57a4(void)

void FUN_1474a57a4(undefined8 param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_148 [32];
  undefined1 local_128 [200];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar7 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar7 != 1.0) || (dVar4 = dVar3, dVar5 = dVar2, dVar8 = dVar1, NAN(dVar7))) &&
     (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar8 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar7)) {
    dVar8 = 1.0 / SQRT(dVar7);
    dVar4 = dVar3 * dVar8;
    dVar5 = dVar2 * dVar8;
    dVar8 = dVar1 * dVar8;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar6[1] = 0;
  FUN_1446ddc76(puVar6 + 1,&DAT_149e02088,1);
  *puVar6 = &PTR_FUN_149f62a30;
  *(float *)(puVar6 + 2) = (float)SQRT(dVar7);
  puVar6[3] = dVar8;
  puVar6[4] = dVar5;
  puVar6[5] = dVar4;
  FUN_1474900d2(local_128,7,puVar6);
  FUN_1403c27ec(param_1,local_128);
  FUN_14017126a(local_128);
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474a5948 FUN_1474a5948 body=491 status=ok
// SIG undefined FUN_1474a5948(void)

void FUN_1474a5948(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  void *_Src;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined1 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0xa48) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
  if (*(int *)(param_1 + 0x770) < 1) {
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
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
    puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x660) + 0x220);
    if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
    FUN_146eb8859(lVar6 + 0xb0,lVar3 + 0x110,param_2);
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
      }
    }
  }
  else {
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
    local_50 = 0;
    local_58 = &PTR_LAB_149f6b350;
    local_48 = (void *)0x0;
    local_40 = *(int *)(param_1 + 0x770);
    lVar6 = (longlong)local_40;
    _Src = *(void **)(param_1 + 0x768);
    if (lVar6 == 0) {
      local_3c = 0;
    }
    else {
      FUN_144756262(&local_48,local_40,0);
      memcpy(local_48,_Src,lVar6 * 0x60);
    }
    local_58 = &PTR_LAB_149f6b2c0;
    FUN_146eb9339(&local_58,lVar3 + 0x110,param_2);
    local_58 = &PTR_LAB_149f6b350;
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a5b7e FUN_1474a5b7e body=180 status=ok
// SIG undefined FUN_1474a5b7e(void)

void FUN_1474a5b7e(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(byte *)(param_1 + 0x9a4) = *(byte *)(param_1 + 0x9a4) | 3;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0xa10) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0xa18) = uVar1;
  *(undefined8 *)(param_1 + 0xa20) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0xa08) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x9f8) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x9fc) = uVar2;
  *(undefined4 *)(param_1 + 0xa00) = uVar3;
  *(undefined4 *)(param_1 + 0xa04) = uVar4;
  *(undefined1 *)(param_1 + 0xa28) = 0;
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    FUN_14068053a(param_1);
  }
  *(undefined8 *)(param_1 + 0x9e8) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x9d8) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x9e0) = uVar1;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x9c0) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x9c4) = uVar2;
  *(undefined4 *)(param_1 + 0x9c8) = uVar3;
  *(undefined4 *)(param_1 + 0x9cc) = uVar4;
  *(undefined8 *)(param_1 + 0x9d0) = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x9f0) = 0;
  FUN_1432795ee(param_1);
  FUN_140ca2e9a(param_1);
  return;
}



// FUNCTION 1474a5c32 FUN_1474a5c32 body=49 status=ok
// SIG undefined FUN_1474a5c32(void)

void FUN_1474a5c32(longlong param_1)

{
  FUN_144756208(param_1 + 0x768);
  FUN_1474a5c64(param_1,param_1 + 0x768);
  FUN_1474a5b7e(param_1);
  return;
}



// FUNCTION 1474a5c64 FUN_1474a5c64 body=230 status=ok
// SIG undefined FUN_1474a5c64(void)

void FUN_1474a5c64(longlong param_1,longlong *param_2)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0xa48) != 0) {
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa48) + 0xb8) + 200);
    uVar4 = *(uint *)(param_2 + 1);
    if ((int)uVar2 < (int)*(uint *)(param_2 + 1)) {
      uVar4 = uVar2;
    }
    if (0 < (int)uVar4) {
      lVar6 = 0x50;
      uVar5 = 0;
      do {
        lVar3 = *param_2;
        fStack_40 = (float)*(double *)(lVar3 + lVar6);
        fStack_3c = (float)((double *)(lVar3 + lVar6))[1];
        pdVar1 = (double *)(lVar3 + -0x10 + lVar6);
        local_48 = (float)*pdVar1;
        fStack_44 = (float)pdVar1[1];
        pdVar1 = (double *)(lVar3 + -0x20 + lVar6);
        fStack_50 = (float)*pdVar1;
        fStack_4c = (float)pdVar1[1];
        pdVar1 = (double *)(lVar3 + -0x30 + lVar6);
        local_58 = (float)*pdVar1;
        fStack_54 = (float)pdVar1[1];
        pdVar1 = (double *)(lVar3 + -0x40 + lVar6);
        fStack_60 = (float)*pdVar1;
        fStack_5c = (float)pdVar1[1];
        pdVar1 = (double *)(lVar3 + -0x50 + lVar6);
        local_68 = (float)*pdVar1;
        fStack_64 = (float)pdVar1[1];
        FUN_144a5e404(*(undefined8 *)(param_1 + 0xa48),uVar5 & 0xffffffff,&local_68);
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x60;
      } while (uVar4 != uVar5);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a5d4c FUN_1474a5d4c body=204 status=ok
// SIG undefined FUN_1474a5d4c(void)

void FUN_1474a5d4c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  FUN_1479f20c4();
  lVar1 = *(longlong *)(param_1 + 0xa70);
  if (lVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (1 < *(uint *)(lVar1 + 0x48)) {
      iVar2 = *(uint *)(lVar1 + 0x48) * 4;
    }
    iVar2 = iVar2 + *(int *)(lVar1 + 0xc) * 0x10 + (*(int *)(lVar1 + 0x2c) + 0x1fU >> 5) * 4;
  }
  FUN_14484255c(param_2,(longlong)
                        (iVar2 + *(int *)(param_1 + 0xa3c) +
                                 *(int *)(param_1 + 0x7a4) + *(int *)(param_1 + 0x9b4) * 0x30 +
                                 *(int *)(param_1 + 0x774) * 0x60 + *(int *)(param_1 + 0x6a4) * 4 +
                                 (*(int *)(param_1 + 0xa6c) +
                                 *(int *)(param_1 + 0x894) + *(int *)(param_1 + 0x674)) * 8));
  return;
}



// FUNCTION 1474a5e18 FUN_1474a5e18 body=12 status=ok
// SIG undefined FUN_1474a5e18(void)

void FUN_1474a5e18(longlong param_1)

{
  FUN_1406cf856(param_1 + 0x9a0);
  return;
}



// FUNCTION 1474a5e24 FUN_1474a5e24 body=85 status=ok
// SIG undefined FUN_1474a5e24(void)

undefined8 * FUN_1474a5e24(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474aa99e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x38);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474a5e7a FUN_1474a5e7a body=64 status=ok
// SIG undefined FUN_1474a5e7a(void)

longlong FUN_1474a5e7a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1474ac8e4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x80 + *param_1;
  FUN_1474ac49a(lVar2,1);
  return lVar2;
}



// FUNCTION 1474a5eba FUN_1474a5eba body=167 status=ok
// SIG undefined FUN_1474a5eba(void)

longlong * FUN_1474a5eba(longlong *param_1,longlong *param_2)

{
  if (param_1 == param_2) {
    param_1[4] = param_2[4];
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    param_1[4] = param_2[4];
    if (*(char *)((longlong)param_2 + 0x2c) == '\x01') {
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
    }
    else if (*(char *)((longlong)param_1 + 0x2c) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
    }
  }
  *(char *)(param_1 + 6) = (char)param_2[6];
  return param_1;
}



// FUNCTION 1474a5f62 FUN_1474a5f62 body=2477 status=ok
// SIG undefined FUN_1474a5f62(void)

void FUN_1474a5f62(longlong param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong *plVar5;
  void *_Src;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  int *piVar24;
  uint uVar25;
  longlong *plVar26;
  longlong lVar27;
  bool bVar28;
  bool bVar29;
  undefined1 auStack_1b8 [40];
  longlong local_190;
  int *local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined1 local_148 [24];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 uStack_110;
  int local_100 [2];
  longlong local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [48];
  longlong *local_b8;
  void *local_b0;
  uint local_a8;
  undefined4 local_a4;
  undefined4 local_a0 [2];
  undefined1 local_98 [16];
  undefined1 *local_88;
  undefined8 local_80;
  byte local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (((((*(char *)(param_1 + 0x852) != '\x01') || (*(longlong *)(param_1 + 0xa40) == 0)) ||
       (lVar27 = *(longlong *)(param_1 + 0xa8), lVar27 == 0)) ||
      ((iVar12 = FUN_14487fd02(lVar27), iVar12 == 0 || (-1 < *(char *)(param_1 + 0x9c))))) ||
     ((*(char *)(lVar27 + 0x178) != '\x03' || (lVar23 = *(longlong *)(param_1 + 0x660), lVar23 == 0)
      ))) goto LAB_1474a5fc7;
  lVar21 = *(longlong *)(lVar23 + 0x218);
  plVar5 = *(longlong **)(lVar23 + 0x220);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar26 = plVar5 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar24 = (int *)((longlong)plVar5 + 0xc);
      *piVar24 = *piVar24 + -1;
      UNLOCK();
      if (*piVar24 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (lVar21 == 0) goto LAB_1474a5fc7;
  lVar23 = *(longlong *)(param_1 + 0xa40);
  local_178 = *(longlong *)(lVar23 + 8);
  local_b0 = (void *)0x0;
  local_a8 = *(uint *)(lVar23 + 0x348);
  lVar21 = (longlong)(int)local_a8;
  _Src = *(void **)(lVar23 + 0x340);
  if (lVar21 == 0) {
    local_a4 = 0;
    uVar20 = 0;
  }
  else {
    FUN_14172b2d6(&local_b0,local_a8,0);
    memcpy(local_b0,_Src,lVar21 << 3);
    lVar23 = *(longlong *)(param_1 + 0xa40);
    uVar20 = local_a8;
  }
  FUN_1401c0b60(lVar23 + 0x5d0,local_e8);
  local_88 = (undefined1 *)0x0;
  local_80 = 0x8000000000;
  local_70 = 0;
  uStack_68 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_a0[0] = *(undefined4 *)(param_1 + 0x8e8);
  local_100[0] = *(int *)(param_1 + 0x928);
  local_78 = *(byte *)(param_1 + 0x910);
  lVar23 = *(longlong *)(param_1 + 0xa40);
  iVar12 = *(int *)(*(longlong *)(lVar23 + 0x410) + (longlong)*(int *)(lVar23 + 0x180) * 4);
  if (((-1 < (longlong)iVar12) && (iVar12 < *(int *)(lVar23 + 0x348))) &&
     (plVar5 = *(longlong **)(*(longlong *)(lVar23 + 0x340) + (longlong)iVar12 * 8),
     plVar5 != (longlong *)0x0)) {
    local_78 = *(byte *)(*(longlong *)(*plVar5 + 0x680) + (longlong)(int)plVar5[1]) >> 1 & 1;
  }
  local_118 = 0;
  uStack_110 = 0;
  uVar25 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x660) != 0) {
    uVar25 = *(uint *)(*(longlong *)(param_1 + 0x660) + 0x1e8);
  }
  iVar12 = *(int *)(lVar23 + 0x300);
  FUN_14476b79c(local_98,iVar12,0);
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12);
  }
  local_180 = lVar27;
  if (uStack_68._4_4_ < iVar12) {
    FUN_1474aa8c2(&local_70,iVar12);
  }
  if (0 < (int)uVar20) {
    local_170 = local_178 + 0x2b0;
    uVar22 = 0;
    do {
      plVar5 = *(longlong **)((longlong)local_b0 + uVar22 * 8);
      if (plVar5 != (longlong *)0x0) {
        uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa40) + 0x400) + uVar22 * 4);
        piVar24 = (int *)(ulonglong)uVar4;
        iVar12 = -1;
        if ((local_b8 != (longlong *)0x0) && (-1 < (int)uVar4)) {
          iVar13 = (**(code **)(*local_b8 + 0x60))(local_b8);
          iVar12 = -1;
          if ((int)uVar4 < iVar13) {
            iVar12 = *(int *)(local_b8[2] + (longlong)piVar24 * 4);
          }
        }
        plVar26 = *(longlong **)(*(longlong *)(*plVar5 + 0x5a8) + (longlong)(int)plVar5[1] * 0x10);
        if (plVar26 == (longlong *)0x0) {
          plVar26 = (longlong *)0x0;
        }
        else if (*(byte *)((longlong)plVar26 + 0xc) < 3) {
          plVar26 = (longlong *)0x0;
        }
        if ((plVar26 == (longlong *)0x0) && (uVar4 != uVar25)) {
          if ((*(char *)(param_1 + 0x853) != '\x01') || (iVar12 <= *(int *)(param_1 + 0x8a8))) {
            puVar18 = local_88;
            if (local_88 == (undefined1 *)0x0) {
              puVar18 = local_98;
            }
            uVar17 = uVar4 + 0x1f;
            if (-1 < (int)uVar4) {
              uVar17 = uVar4;
            }
            *(uint *)(puVar18 + (longlong)((int)uVar17 >> 5) * 4) =
                 *(uint *)(puVar18 + (longlong)((int)uVar17 >> 5) * 4) | 1 << ((byte)uVar4 & 0x1f);
            if (*(char *)(*(longlong *)(*plVar5 + 0x2c0) + 0xd + (longlong)(int)plVar5[1] * 0x10) ==
                '\0') {
              local_190 = CONCAT44(local_190._4_4_,iVar12);
              puVar14 = (undefined2 *)FUN_1474a6912(&local_70);
              *puVar14 = (short)uVar4;
              lVar23 = (longlong)(int)plVar5[1];
              lVar27 = *(longlong *)(*plVar5 + 0x278);
              fVar2 = *(float *)(lVar27 + 8 + lVar23 * 0xc);
              fVar3 = *(float *)(lVar27 + 4 + lVar23 * 0xc);
              *(double *)(puVar14 + 4) = (double)*(float *)(lVar27 + lVar23 * 0xc);
              *(double *)(puVar14 + 8) = (double)fVar3;
              *(double *)(puVar14 + 0xc) = (double)fVar2;
              lVar23 = (longlong)(int)plVar5[1];
              lVar27 = *(longlong *)(*plVar5 + 0x290);
              fVar2 = *(float *)(lVar27 + 8 + lVar23 * 0xc);
              fVar3 = *(float *)(lVar27 + 4 + lVar23 * 0xc);
              *(double *)(puVar14 + 0x10) =
                   (double)*(float *)(lVar27 + lVar23 * 0xc) * 57.2957763671875;
              *(double *)(puVar14 + 0x14) = (double)fVar3 * 57.2957763671875;
              *(double *)(puVar14 + 0x18) = (double)fVar2 * 57.2957763671875;
              iVar12 = (int)local_190;
            }
          }
          if (((*(char *)(param_1 + 0x853) == '\x01') && (*(int *)(param_1 + 0x8a8) < iVar12)) &&
             (*(char *)(*(longlong *)(*plVar5 + 0x2c0) + 0xd + (longlong)(int)plVar5[1] * 0x10) ==
              '\0')) {
            local_190 = CONCAT44(local_190._4_4_,iVar12);
            FUN_14016e00e(*(undefined8 *)(local_178 + 0x9c8),plVar5);
            FUN_1456cc230(local_170,plVar5,1);
            iVar12 = (int)local_190;
          }
        }
        uVar9 = uStack_110;
        bVar28 = plVar26 == (longlong *)0x0;
        if (plVar26 == (longlong *)0x0) {
          uVar17 = 0;
          plVar26 = (longlong *)0x0;
        }
        else {
          local_190 = CONCAT44(local_190._4_4_,iVar12);
          local_188 = piVar24;
          if ((*(byte *)(*(longlong *)(*plVar26 + 0x680) + (longlong)(int)plVar26[1]) & 1) == 0) {
            uVar17 = 0;
            plVar26 = (longlong *)0x0;
          }
          else {
            bVar29 = *(longlong *)(*(longlong *)(*plVar26 + 200) + (longlong)(int)plVar26[1] * 8) ==
                     *(longlong *)(*(longlong *)(*plVar5 + 200) + (longlong)(int)plVar5[1] * 8);
            uVar17 = (uint)bVar29;
            if (!bVar29) {
              plVar26 = (longlong *)0x0;
            }
          }
        }
        if (((*(byte *)(*(longlong *)(*plVar5 + 0x2c0) + 0xd + (longlong)(int)plVar5[1] * 0x10) ^ 1)
            & (uVar4 == uVar25 || bVar28)) != 0) {
          plVar26 = plVar5;
        }
        if (((int)(iVar12 - uVar17) <= *(int *)(param_1 + 0x8ac)) && (plVar26 != (longlong *)0x0)) {
          lVar27 = (longlong)(int)uStack_110;
          if (lVar27 != 0) {
            uVar19 = 0;
            do {
              if (*(longlong **)(local_118 + uVar19) == plVar26) {
                if ((~uVar19 & 0xffffffff0) != 0) goto LAB_1474a6463;
                break;
              }
              uVar19 = uVar19 + 0x10;
            } while (lVar27 << 4 != uVar19);
          }
          uVar17 = (int)uStack_110 + 1;
          uStack_110 = CONCAT44(uStack_110._4_4_,uVar17);
          if (uStack_110._4_4_ < uVar17) {
            FUN_14327c6ea(&local_118,uVar9 & 0xffffffff);
          }
          *(longlong **)(local_118 + lVar27 * 0x10) = plVar26;
          *(uint *)(local_118 + 8 + lVar27 * 0x10) = uVar4;
        }
      }
LAB_1474a6463:
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar20);
  }
  if (uStack_68._4_4_ != (int)uStack_68) {
    FUN_1474aa8c2(&local_70);
  }
  if ((int)uStack_110 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_110 & 0xffffffff);
  }
  local_190 = param_1 + 0x8e8;
  local_188 = (int *)(param_1 + 0x928);
  if ((uStack_110 & 0xffffffff) != 0) {
    FUN_1474aa930(&local_f8);
    lVar27 = local_118;
    lVar23 = (longlong)(int)uStack_110;
    if (lVar23 != 0) {
      lVar21 = 0;
      do {
        puVar15 = (undefined8 *)FUN_1474a6944(&local_f8);
        *(undefined2 *)(puVar15 + 0xc) = *(undefined2 *)(lVar27 + 8 + lVar21);
        *(byte *)((longlong)puVar15 + 0x62) =
             *(byte *)(*(longlong *)(**(longlong **)(lVar27 + lVar21) + 0x680) +
                      (longlong)(int)(*(longlong **)(lVar27 + lVar21))[1]) & 1;
        lVar16 = (longlong)(int)(*(longlong **)(lVar27 + lVar21))[1];
        lVar6 = *(longlong *)(**(longlong **)(lVar27 + lVar21) + 0x28);
        puVar1 = (undefined8 *)(lVar6 + lVar16 * 0x18);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        puVar15[2] = *(undefined8 *)(lVar6 + 0x10 + lVar16 * 0x18);
        *puVar15 = uVar7;
        puVar15[1] = uVar8;
        lVar6 = *(longlong *)(**(longlong **)(lVar27 + lVar21) + 0x48);
        lVar16 = (longlong)(int)(*(longlong **)(lVar27 + lVar21))[1] * 0x10;
        local_150 = (double)*(float *)(lVar6 + 0xc + lVar16);
        local_158 = (double)*(float *)(lVar6 + 8 + lVar16);
        local_160 = (double)*(float *)(lVar6 + 4 + lVar16);
        local_168 = (double)*(float *)(lVar6 + lVar16);
        FUN_1448052ee(&local_168,local_148);
        FUN_1414d053e(local_148,&local_130);
        puVar15[5] = local_120;
        puVar15[3] = local_130;
        puVar15[4] = uStack_128;
        lVar16 = (longlong)(int)(*(longlong **)(lVar27 + lVar21))[1];
        lVar6 = *(longlong *)(**(longlong **)(lVar27 + lVar21) + 0x278);
        fVar2 = *(float *)(lVar6 + 8 + lVar16 * 0xc);
        fVar3 = *(float *)(lVar6 + 4 + lVar16 * 0xc);
        puVar15[6] = (double)*(float *)(lVar6 + lVar16 * 0xc);
        puVar15[7] = (double)fVar3;
        puVar15[8] = (double)fVar2;
        lVar16 = (longlong)(int)(*(longlong **)(lVar27 + lVar21))[1];
        lVar6 = *(longlong *)(**(longlong **)(lVar27 + lVar21) + 0x290);
        fVar2 = *(float *)(lVar6 + 8 + lVar16 * 0xc);
        fVar3 = *(float *)(lVar6 + 4 + lVar16 * 0xc);
        puVar15[9] = (double)*(float *)(lVar6 + lVar16 * 0xc) * 57.2957763671875;
        puVar15[10] = (double)fVar3 * 57.2957763671875;
        puVar15[0xb] = (double)fVar2 * 57.2957763671875;
        *(int *)((longlong)puVar15 + 100) = local_100[0] + 1;
        lVar21 = lVar21 + 0x10;
      } while (lVar23 * 0x10 != lVar21);
    }
  }
  lVar27 = local_190;
  bVar10 = FUN_1474a47da(local_a0,local_190);
  piVar24 = local_188;
  bVar11 = FUN_1474a4bd6(local_100,local_188);
  if ((((bVar10 | bVar11) == 1) && (DAT_14c760f48 == 1)) && (*(longlong *)(param_1 + 0xa8) != 0)) {
    FUN_14103d96c();
  }
  if (bVar10 == 0) {
    if (bVar11 != 0) {
LAB_1474a67cd:
      lVar27 = local_180;
      *(int *)(param_1 + 0x928) = local_100[0];
      if (piVar24 != local_100) {
        if (*(longlong *)(param_1 + 0x930) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x930) = local_f8;
        local_f8 = 0;
        *(undefined4 *)(param_1 + 0x938) = (undefined4)uStack_f0;
        *(undefined4 *)(param_1 + 0x93c) = uStack_f0._4_4_;
        uStack_f0 = 0;
      }
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x13);
      *(int *)(param_1 + 0x928) = *(int *)(param_1 + 0x928) + 1;
      goto LAB_1474a6843;
    }
  }
  else {
    FUN_1474a6980(lVar27,local_a0);
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0x12);
    *(int *)(param_1 + 0x8e8) = *(int *)(param_1 + 0x8e8) + 1;
    lVar27 = local_180;
    if (bVar11 != 0) goto LAB_1474a67cd;
LAB_1474a6843:
    if ((1 < *(byte *)(lVar27 + 0x179)) && (DAT_14c760f48 != 1)) {
      FUN_14081ae08(lVar27,1);
    }
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b0 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1474a5fc7:
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474a6912 FUN_1474a6912 body=50 status=ok
// SIG undefined FUN_1474a6912(void)

longlong FUN_1474a6912(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1474aca06(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x38 + *param_1;
}



// FUNCTION 1474a6944 FUN_1474a6944 body=59 status=ok
// SIG undefined FUN_1474a6944(void)

longlong FUN_1474a6944(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1474acb3c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x68 + *param_1;
  FUN_1474acd15(lVar2);
  return lVar2;
}



// FUNCTION 1474a6980 FUN_1474a6980 body=154 status=ok
// SIG undefined FUN_1474a6980(void)

undefined4 * FUN_1474a6980(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  if (param_1 == param_2) {
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  }
  else {
    if (*(longlong *)(param_2 + 6) == 0) {
      uVar1 = param_2[3];
      uVar2 = param_2[4];
      uVar3 = param_2[5];
      param_1[2] = param_2[2];
      param_1[3] = uVar1;
      param_1[4] = uVar2;
      param_1[5] = uVar3;
    }
    if (*(longlong *)(param_1 + 6) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 6) = 0;
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    if (*(longlong *)(param_1 + 0xc) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_2 + 0xc) = 0;
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    *(undefined8 *)(param_2 + 0xe) = 0;
  }
  return param_1;
}



// FUNCTION 1474a6a34 FUN_1474a6a34 body=123 status=ok
// SIG undefined FUN_1474a6a34(void)

void FUN_1474a6a34(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x8dc) == '\0') {
    *(undefined4 *)(param_1 + 0x8d8) = param_3;
    *(undefined1 *)(param_1 + 0x8dc) = 1;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = (*(byte *)(*(longlong *)(param_1 + 0xa8) + 0x60) & 0x10) >> 4;
  }
  FUN_14327b09b(param_2,param_3,param_1 + 0x8b0,*(undefined8 *)(param_1 + 0xa40),param_1 + 0x940,
                param_1 + 0xa80,param_1 + 0xa78,bVar1);
  return;
}



// FUNCTION 1474a6ab0 FUN_1474a6ab0 body=551 status=ok
// SIG undefined FUN_1474a6ab0(void)

void FUN_1474a6ab0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  byte bVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  char local_54;
  undefined1 local_50;
  longlong local_48;
  undefined1 uStack_40;
  undefined4 uStack_3f;
  undefined4 uStack_3b;
  undefined4 uStack_37;
  undefined4 uStack_33;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x658) == 0) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (((lVar3 == 0) && (lVar3 = FUN_1448abda6(param_1), lVar3 == 0)) ||
       (*(longlong *)(lVar3 + 0x260) == 0)) goto LAB_1474a6aea;
    plVar2 = (longlong *)(*(longlong *)(lVar3 + 0x260) + 0x38);
  }
  else {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x658) + 0x550);
  }
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    bVar7 = 1;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      bVar7 = *(byte *)(*(longlong *)(param_1 + 0xa8) + 0x60) >> 4 & 1;
    }
    local_88 = *(undefined8 *)(param_1 + 0xa40);
    FUN_1474a6cd8(&local_80,param_1 + 0x8b0);
    local_48 = param_1 + 0x940;
    lVar1 = param_1 + 0xa78;
    uStack_40 = (undefined1)lVar1;
    uStack_3f = (undefined4)((ulonglong)lVar1 >> 8);
    uStack_3b._0_3_ = (undefined3)((ulonglong)lVar1 >> 0x28);
    param_1 = param_1 + 0xa80;
    uStack_3b._3_1_ = (undefined1)param_1;
    uStack_37 = (undefined4)((ulonglong)param_1 >> 8);
    uStack_33 = CONCAT13(bVar7,(int3)((ulonglong)param_1 >> 0x28));
    puVar4 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar5 = (undefined8 *)FUN_14001cc68(0x68,8);
    *puVar5 = &PTR_LAB_14a40da70;
    puVar5[1] = local_88;
    puVar5[2] = local_80;
    local_80 = 0;
    *(undefined4 *)(puVar5 + 3) = (undefined4)local_78;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = local_78._4_4_;
    local_78 = 0;
    puVar5[4] = local_70;
    local_70 = 0;
    *(undefined4 *)(puVar5 + 5) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = local_68._4_4_;
    local_68 = 0;
    puVar5[6] = local_60;
    *(char *)((longlong)puVar5 + 0x3c) = local_54;
    if (local_54 == '\x01') {
      *(undefined4 *)(puVar5 + 7) = local_58;
    }
    *(undefined1 *)(puVar5 + 8) = local_50;
    puVar5[9] = local_48;
    puVar5[10] = CONCAT35((undefined3)uStack_3b,CONCAT41(uStack_3f,uStack_40));
    *(undefined4 *)((longlong)puVar5 + 0x51) = uStack_3f;
    *(undefined4 *)((longlong)puVar5 + 0x55) = uStack_3b;
    *(undefined4 *)((longlong)puVar5 + 0x59) = uStack_37;
    *(undefined4 *)((longlong)puVar5 + 0x5d) = uStack_33;
    pcVar6 = FUN_14327c7f0;
    if (puVar5 == (undefined8 *)&DAT_fffffffffffffff8) {
      pcVar6 = (code *)0x0;
    }
    *(undefined2 *)(puVar4 + 1) = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined2 *)(puVar4 + 8) = 1;
    *puVar4 = &PTR_FUN_149f45dc0;
    puVar4[10] = 0;
    puVar4[0xc] = 0;
    puVar4[0x12] = pcVar6;
    puVar4[0x14] = puVar5;
    *(undefined1 *)(puVar4 + 0x1a) = 1;
    FUN_1406e6496(lVar3 + 0x70,puVar4);
    if (local_54 == '\x01') {
      local_54 = '\0';
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1474a6aea:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474a6cd8 FUN_1474a6cd8 body=193 status=ok
// SIG undefined FUN_1474a6cd8(void)

undefined8 * FUN_1474a6cd8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  pvVar3 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1474aa99e(param_1,iVar2,0);
    memcpy((void *)*param_1,pvVar3,(longlong)iVar2 * 0x38);
  }
  param_1[2] = 0;
  iVar2 = *(int *)(param_2 + 3);
  pvVar3 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1474aa190(param_1 + 2,iVar2,0);
    memcpy((void *)param_1[2],pvVar3,(longlong)iVar2 << 7);
  }
  param_1[4] = param_2[4];
  cVar1 = *(char *)((longlong)param_2 + 0x2c);
  *(char *)((longlong)param_1 + 0x2c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 1474a6d9a FUN_1474a6d9a body=471 status=ok
// SIG undefined FUN_1474a6d9a(void)

void FUN_1474a6d9a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x658) == 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (((lVar2 == 0) && (lVar2 = FUN_1448abda6(param_1), lVar2 == 0)) ||
       (*(longlong *)(lVar2 + 0x260) == 0)) goto LAB_1474a6dd0;
    plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x260) + 0x38);
  }
  else {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x658) + 0x550);
  }
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    local_70 = *(undefined8 *)(param_1 + 0xa40);
    FUN_1474a6f72(local_68,param_1 + 0x8e8);
    local_28 = param_1 + 0x940;
    puVar3 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar4 = (undefined8 *)FUN_14001cc68(0x58,8);
    *puVar4 = &PTR_LAB_14a40da90;
    puVar4[1] = local_70;
    *(undefined4 *)(puVar4 + 2) = local_68[0];
    if (local_50 == 0) {
      puVar4[3] = local_60;
      puVar4[4] = uStack_58;
    }
    puVar4[5] = local_50;
    local_50 = 0;
    *(undefined4 *)(puVar4 + 6) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar4 + 0x34) = local_48._4_4_;
    local_48 = 0;
    *(undefined1 *)(puVar4 + 7) = local_40;
    puVar4[8] = local_38;
    local_38 = 0;
    *(undefined4 *)(puVar4 + 9) = (undefined4)local_30;
    *(undefined4 *)((longlong)puVar4 + 0x4c) = local_30._4_4_;
    local_30 = 0;
    puVar4[10] = local_28;
    pcVar5 = FUN_14327c8b4;
    if (puVar4 == (undefined8 *)&DAT_fffffffffffffff8) {
      pcVar5 = (code *)0x0;
    }
    *(undefined2 *)(puVar3 + 1) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined2 *)(puVar3 + 8) = 1;
    *puVar3 = &PTR_FUN_149f45dc0;
    puVar3[10] = 0;
    puVar3[0xc] = 0;
    puVar3[0x12] = pcVar5;
    puVar3[0x14] = puVar4;
    *(undefined1 *)(puVar3 + 0x1a) = 1;
    FUN_1406e6496(lVar2 + 0x70,puVar3);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1474a6dd0:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474a6f72 FUN_1474a6f72 body=123 status=ok
// SIG undefined FUN_1474a6f72(void)

undefined4 * FUN_1474a6f72(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_144a69486(param_1 + 2,param_2 + 2);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = param_2[0xe];
  _Src = *(void **)(param_2 + 0xc);
  param_1[0xe] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xf] = 0;
  }
  else {
    FUN_1474aa424(param_1 + 0xc,iVar1,0);
    memcpy(*(void **)(param_1 + 0xc),_Src,(longlong)iVar1 * 0x38);
  }
  return param_1;
}



// FUNCTION 1474a6fee FUN_1474a6fee body=537 status=ok
// SIG undefined FUN_1474a6fee(void)

void FUN_1474a6fee(longlong param_1)

{
  uint uVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  void *local_60;
  undefined8 local_58;
  longlong local_50;
  byte bStack_48;
  undefined7 uStack_47;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x658) == 0) {
    lVar5 = *(longlong *)(param_1 + 0xb0);
    if (((lVar5 == 0) && (lVar5 = FUN_1448abda6(param_1), lVar5 == 0)) ||
       (*(longlong *)(lVar5 + 0x260) == 0)) goto LAB_1474a7186;
    plVar2 = (longlong *)(*(longlong *)(lVar5 + 0x260) + 0x38);
  }
  else {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x658) + 0x550);
  }
  lVar5 = *plVar2;
  if (lVar5 != 0) {
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      bVar7 = 1;
    }
    else {
      bVar7 = *(byte *)(*(longlong *)(param_1 + 0xa8) + 0x60) >> 4 & 1;
    }
    local_70 = *(undefined8 *)(param_1 + 0xa40);
    local_68 = *(undefined4 *)(param_1 + 0x928);
    local_60 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 0x938);
    _Src = *(void **)(param_1 + 0x930);
    local_58 = CONCAT44(local_58._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      local_58 = (ulonglong)uVar1;
    }
    else {
      FUN_1474aa6a6(&local_60,uVar1,0);
      memcpy(local_60,_Src,(longlong)(int)uVar1 * 0x68);
    }
    local_50 = param_1 + 0x944;
    local_40 = param_1 + 0xa78;
    bStack_48 = bVar7;
    puVar3 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar4 = (undefined8 *)FUN_14001cc68(0x40);
    *puVar4 = &PTR_LAB_14a40dab0;
    puVar4[1] = local_70;
    *(undefined4 *)(puVar4 + 2) = local_68;
    puVar4[3] = local_60;
    local_60 = (void *)0x0;
    *(undefined4 *)(puVar4 + 4) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar4 + 0x24) = local_58._4_4_;
    local_58 = 0;
    puVar4[7] = local_40;
    puVar4[5] = local_50;
    puVar4[6] = CONCAT71(uStack_47,bStack_48);
    pcVar6 = FUN_14327cc0c;
    if (puVar4 + 1 == (undefined8 *)0x0) {
      pcVar6 = (code *)0x0;
    }
    *(undefined2 *)(puVar3 + 1) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined2 *)(puVar3 + 8) = 1;
    *puVar3 = &PTR_FUN_149f45dc0;
    puVar3[10] = 0;
    puVar3[0xc] = 0;
    puVar3[0x12] = pcVar6;
    puVar3[0x14] = puVar4;
    *(undefined1 *)(puVar3 + 0x1a) = 1;
    FUN_1406e6496(lVar5 + 0x70,puVar3);
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1474a7186:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474a7208 FUN_1474a7208 body=97 status=ok
// SIG undefined FUN_1474a7208(void)

void FUN_1474a7208(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa48);
  if (lVar1 != 0) {
    iVar2 = (**(code **)(*(longlong *)(lVar1 + 0x150) + 0x60))(lVar1 + 0x150);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        *(undefined1 *)(*(longlong *)(lVar1 + 0x160) + lVar3) = *param_2;
        lVar3 = lVar3 + 1;
        iVar2 = (**(code **)(*(longlong *)(lVar1 + 0x150) + 0x60))(lVar1 + 0x150);
      } while (lVar3 < iVar2);
    }
  }
  return;
}



// FUNCTION 1474a726a FUN_1474a726a body=127 status=ok
// SIG undefined FUN_1474a726a(void)

void FUN_1474a726a(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if ((*(longlong *)(param_1 + 0xa48) != 0) && (lVar5 = param_2[1], (longlong)(int)lVar5 != 0)) {
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa48) + 0xb8) + 200);
    lVar3 = *param_2;
    lVar7 = 0;
    do {
      iVar2 = *(int *)(lVar3 + lVar7);
      if (iVar2 < iVar1) {
        uVar4 = *(undefined8 *)(param_1 + 0xa48);
        iVar6 = FUN_144b072ca(uVar4,iVar2);
        if (-1 < iVar6) {
          FUN_140148510(uVar4,iVar2,0);
        }
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar7);
  }
  return;
}



// FUNCTION 1474a72ea FUN_1474a72ea body=236 status=ok
// SIG undefined FUN_1474a72ea(void)

undefined8 FUN_1474a72ea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x660);
  if (lVar5 != 0) {
    lVar6 = *(longlong *)(lVar5 + 0x218);
    plVar3 = *(longlong **)(lVar5 + 0x220);
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
    if (lVar6 != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
      if (plVar3 == (longlong *)0x0) {
        iVar7 = *(int *)(lVar5 + 0xe8);
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        iVar7 = *(int *)(lVar5 + 0xe8);
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
      if (0 < iVar7) {
        return 1;
      }
    }
    lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x660) + 200);
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x660) + 0xc0) + lVar6);
        if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x1b8))) {
          return 1;
        }
        lVar6 = lVar6 + 8;
      } while (lVar5 * 8 != lVar6);
    }
  }
  return 0;
}



// FUNCTION 1474a73d6 FUN_1474a73d6 body=525 status=ok
// SIG undefined FUN_1474a73d6(void)

void FUN_1474a73d6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = *(longlong *)(param_1 + 0x660);
  if (lVar7 != 0) {
    lVar12 = *(longlong *)(lVar7 + 0x218);
    plVar5 = *(longlong **)(lVar7 + 0x220);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar5 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (lVar12 != 0) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar9 = plVar5 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      lVar12 = (longlong)*(int *)(lVar7 + 0xe8);
      if (lVar12 != 0) {
        lVar7 = *(longlong *)(lVar7 + 0xe0);
        lVar10 = 0;
        do {
          iVar3 = (int)param_2[1];
          lVar11 = (longlong)iVar3;
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1474acd28(param_2,iVar3);
          }
          lVar6 = *param_2;
          *(undefined4 *)(lVar6 + 8 + lVar11 * 0xc) = 0;
          *(undefined8 *)(lVar6 + lVar11 * 0xc) = 0;
          puVar8 = &DAT_149dfb77a;
          if (*(int *)(lVar7 + 8 + lVar10) != 0) {
            puVar8 = *(undefined2 **)(lVar7 + lVar10);
          }
          puVar2 = (undefined8 *)(lVar6 + lVar11 * 0xc);
          FUN_1446f470e(&local_50,puVar8,1);
          *puVar2 = local_50;
          *(undefined1 *)(puVar2 + 1) = 1;
          lVar10 = lVar10 + 0x10;
        } while (lVar12 * 0x10 != lVar10);
      }
    }
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x660) + 200);
    if (lVar7 != 0) {
      plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0xc0);
      plVar5 = plVar9 + lVar7;
      do {
        lVar7 = *plVar9;
        if ((lVar7 != 0) && (iVar3 = *(int *)(lVar7 + 0x1b8), (longlong)iVar3 != 0)) {
          lVar7 = *(longlong *)(lVar7 + 0x1b0);
          lVar12 = 0;
          do {
            if (*(longlong *)(lVar7 + lVar12) != 0) {
              iVar4 = (int)param_2[1];
              lVar10 = (longlong)iVar4;
              *(uint *)(param_2 + 1) = iVar4 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
                FUN_1474acd28(param_2,iVar4);
              }
              lVar11 = *param_2;
              *(undefined4 *)(lVar11 + 8 + lVar10 * 0xc) = 0;
              *(undefined8 *)(lVar11 + lVar10 * 0xc) = 0;
              *(undefined8 *)(lVar11 + lVar10 * 0xc) =
                   *(undefined8 *)(*(longlong *)(lVar7 + lVar12) + 0x28);
              *(undefined1 *)(lVar11 + 8 + lVar10 * 0xc) = 2;
            }
            lVar12 = lVar12 + 8;
          } while ((longlong)iVar3 * 8 != lVar12);
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474a75e4 FUN_1474a75e4 body=103 status=ok
// SIG undefined FUN_1474a75e4(void)

longlong * FUN_1474a75e4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 == 0) {
      lVar3 = 0;
      goto LAB_1474a7606;
    }
  }
  else {
    FUN_1456cec3c(lVar1);
  }
  uVar2 = FUN_145990214();
  lVar3 = FUN_144718840(lVar1,uVar2);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
LAB_1474a7606:
  *param_1 = lVar1;
  param_1[1] = lVar3;
  return param_1;
}



// FUNCTION 1474a764c FUN_1474a764c body=143 status=ok
// SIG undefined FUN_1474a764c(void)

void FUN_1474a764c(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  *(byte *)(param_1 + 0x851) = *(byte *)(param_1 + 0x851) & 0xfb;
  cVar2 = FUN_140c02098();
  if (((cVar2 != '\0') && (*(longlong *)(param_1 + 0x878) != 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x880), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
    *(byte *)(param_1 + 0x851) = *(byte *)(param_1 + 0x851) & 0xfb | cVar2 << 2;
    cVar2 = FUN_140c02098(param_1);
    if ((cVar2 != '\0') &&
       ((*(byte *)(param_1 + 0x851) & 0x10) == 0 && (~*(byte *)(param_1 + 0x851) & 0xc) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001474a76d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1474a76dc FUN_1474a76dc body=175 status=ok
// SIG undefined FUN_1474a76dc(void)

void FUN_1474a76dc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined ***pppuVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_1407592a6();
  if (((lVar2 != 0) && (*(longlong *)(param_1 + 0xa40) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa40) + 8), lVar1 != 0)) {
    local_48 = (undefined ***)0x0;
    local_38 = &PTR_LAB_14a40db50;
    local_58[0] = &LAB_14327d78c;
    local_68 = 0;
    local_30 = param_1;
    FUN_147c69d2e(lVar2,*(undefined4 *)(lVar1 + 0x268),param_1,local_58);
    if (local_58[0] != (undefined1 *)0x0) {
      pppuVar3 = local_48;
      if (local_48 == (undefined ***)0x0) {
        pppuVar3 = &local_38;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a778c FUN_1474a778c body=3147 status=ok
// SIG undefined FUN_1474a778c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474a778c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  double *pdVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double extraout_XMM0_Qb;
  double dVar27;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar29;
  double dVar30;
  double dVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar38;
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  undefined1 unaff_XMM15 [16];
  undefined1 auVar61 [16];
  double dVar62;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  undefined4 local_380;
  undefined1 local_378;
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  undefined1 local_338 [160];
  longlong local_298;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  lVar10 = *(longlong *)(param_1 + 0x660);
  if ((lVar10 == 0) || (*(longlong *)(param_1 + 0xa40) == 0)) goto LAB_1474a80a9;
  lVar11 = *(longlong *)(lVar10 + 0x218);
  plVar3 = *(longlong **)(lVar10 + 0x220);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (((lVar11 != 0) && (*(longlong *)(param_1 + 0xa48) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0xa48) + 0xa8) == '\x01')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caa9820) && (FUN_144b3d300(&DAT_14caa9820), DAT_14caa9820 == -1)) {
      FUN_1446ddc76(&DAT_14caa9818,"MassToLocal",1);
      _Init_thread_footer(&DAT_14caa9820);
    }
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x660) + 0x218);
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
    if (plVar5 == (longlong *)0x0) {
      lVar10 = FUN_1401466c8(uVar4,DAT_14caa9818,DAT_14c9974a8);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      lVar10 = FUN_1401466c8(uVar4,DAT_14caa9818,DAT_14c9974a8);
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
    FUN_1401c0802(local_338,*(undefined8 *)(param_1 + 0xa48));
    if (*(longlong *)(param_1 + 0x660) == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = *(int *)(*(longlong *)(param_1 + 0x660) + 0x1e8);
    }
    cVar9 = FUN_146e99abc(local_338,iVar16);
    lVar19 = (longlong)iVar16;
    if ((cVar9 != '\0') || (*(char *)(*(longlong *)(local_298 + 0x10) + lVar19) != '\x03')) {
      iVar17 = iVar16 * 0x30 + (int)*(undefined8 *)(lVar11 + 0xc0);
      iVar15 = iVar16;
      FUN_144a5e404(*(undefined8 *)(param_1 + 0xa48));
      auVar51 = _DAT_149934d80;
      if ((iVar16 < 0) ||
         ((lVar11 = *(longlong *)(param_1 + 0xa40), *(int *)(lVar11 + 0x418) <= iVar16 ||
          (lVar13 = (longlong)*(int *)(*(longlong *)(lVar11 + 0x410) + lVar19 * 4), lVar13 == -1))))
      {
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x440) + lVar13 * 8);
      }
      dVar62 = (double)*(float *)(lVar11 + 0x4c);
      dVar20 = (double)*(float *)(lVar11 + 0x48);
      dVar39 = (double)*(float *)(lVar11 + 0x44);
      auVar61._8_8_ = unaff_XMM15._8_8_;
      auVar61._0_8_ = (double)*(float *)(lVar11 + 0x40);
      pdVar14 = *(double **)(lVar10 + 0x10);
      auVar31 = *(undefined1 (*) [16])(pdVar14 + lVar19 * 0xc + 8);
      auVar22 = *(undefined1 (*) [16])(pdVar14 + lVar19 * 0xc + 10);
      auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar31._8_8_));
      auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar31._0_8_));
      iVar16 = movmskpd(iVar15,auVar41);
      auVar46._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar22._8_8_));
      auVar46._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar22._0_8_));
      uVar18 = movmskpd(iVar17,auVar46);
      if ((uVar18 & 0x3fffffff) == 0 && iVar16 == 0) {
        local_348 = DAT_14c8464a0;
        dStack_340 = DAT_14c8464a8;
        uVar47 = (undefined4)DAT_14c8464c0;
        uVar48 = DAT_14c8464c0._4_4_;
        uVar49 = (undefined4)DAT_14c8464c8;
        uVar50 = DAT_14c8464c8._4_4_;
        auVar31 = _DAT_14c8464d0;
        uVar54 = (undefined4)DAT_14c846480;
        uVar55 = DAT_14c846480._4_4_;
        uVar56 = (undefined4)DAT_14c846488;
        uVar57 = DAT_14c846488._4_4_;
        dVar29 = DAT_14c846490;
        dVar34 = DAT_14c846498;
        local_368 = DAT_14c8464b0;
        dStack_360 = DAT_14c8464b8;
      }
      else {
        pdVar14 = pdVar14 + lVar19 * 0xc;
        dVar8 = *pdVar14;
        local_358._8_8_ = unaff_XMM6_Qb;
        local_358._0_8_ = dVar39;
        auVar46 = divpd(_DAT_149934d80,auVar31);
        auVar41 = divpd(ZEXT816(0x3ff0000000000000),auVar22);
        dVar6 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar31._0_8_)) & auVar46._0_8_);
        dVar28 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar31._8_8_)) & auVar46._8_8_);
        dVar30 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar22._0_8_)) & auVar41._0_8_);
        dVar29 = pdVar14[2] * -1.0;
        dVar34 = pdVar14[3] * 1.0;
        dVar59 = -dVar8;
        dVar38 = -pdVar14[1];
        dVar60 = pdVar14[4] * dVar6;
        dVar7 = pdVar14[5] * dVar28;
        dVar40 = pdVar14[6] * dVar30;
        auVar61._8_4_ = unaff_XMM15._8_4_;
        auVar61._12_4_ = unaff_XMM15._12_4_;
        dVar21 = dVar7 * dVar59 - dVar60 * dVar38;
        dVar27 = dVar40 * dVar38 - dVar7 * dVar29;
        dVar58 = dVar60 * dVar29 - dVar59 * dVar40;
        dVar27 = dVar27 + dVar27;
        dVar58 = dVar58 + dVar58;
        dVar21 = dVar21 + dVar21;
        local_348 = 0.0 - ((dVar21 * dVar38 - dVar58 * dVar29) + dVar34 * dVar27 + dVar60);
        dStack_340 = 0.0 - (dVar21 * dVar8 + dVar29 * dVar27 + dVar34 * dVar58 + dVar7);
        auVar31._8_8_ = 0;
        auVar31._0_8_ = dVar30;
        uVar47 = SUB84(dVar6,0);
        uVar48 = (int)((ulonglong)dVar6 >> 0x20);
        uVar49 = SUB84(dVar28,0);
        uVar50 = (int)((ulonglong)dVar28 >> 0x20);
        uVar54 = SUB84(dVar8,0);
        uVar55 = (int)((ulonglong)dVar59 >> 0x20);
        uVar56 = SUB84(pdVar14[1],0);
        uVar57 = (int)((ulonglong)dVar38 >> 0x20);
        local_368 = 0.0 - (dVar34 * dVar21 + dVar40 + (dVar58 * dVar59 - dVar27 * dVar38));
        dStack_360 = 0.0;
      }
      auVar42._8_8_ = dVar62;
      auVar42._0_8_ = dVar20;
      auVar22._4_4_ = uVar48;
      auVar22._0_4_ = uVar47;
      auVar22._12_4_ = uVar50;
      auVar22._8_4_ = uVar49;
      auVar22 = minpd(auVar22,_DAT_149934d80);
      auVar41 = minpd(auVar31,ZEXT816(0x3ff0000000000000));
      auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
      auVar23._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
      iVar16 = movmskpd((int)lVar11,auVar23);
      auVar36._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
      auVar36._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
      uVar18 = movmskpd((int)pdVar14,auVar36);
      dVar30 = auVar61._0_8_;
      if ((uVar18 & 0x3fffffff) == 0 && iVar16 == 0) {
        dVar6 = (double)CONCAT44(uVar57,uVar56) * dVar20 * -1.0 +
                dVar29 * dVar39 + dVar30 * dVar34 * 1.0 + dVar62 * (double)CONCAT44(uVar55,uVar54);
        dVar28 = (double)CONCAT44(uVar55,uVar54) * dVar20 * 1.0 +
                 dVar34 * dVar39 + dVar30 * dVar29 * -1.0 + dVar62 * (double)CONCAT44(uVar57,uVar56)
        ;
        auVar51._0_8_ =
             dVar34 * dVar20 * 1.0 +
             ((dVar30 * (double)CONCAT44(uVar57,uVar56) * 1.0 + dVar62 * dVar29) -
             dVar39 * (double)CONCAT44(uVar55,uVar54));
        auVar51._8_8_ =
             dVar29 * dVar20 * -1.0 +
             ((dVar30 * (double)CONCAT44(uVar55,uVar54) * -1.0 + dVar62 * dVar34) -
             dVar39 * (double)CONCAT44(uVar57,uVar56));
        local_368 = local_368 * 1.0;
        dStack_360 = dStack_360 * 0.0;
        auVar31 = blendpd(auVar61,auVar42,2);
        dVar59 = dStack_340 * dVar30 - dVar39 * local_348;
        dVar38 = local_368 * dVar39 - dVar20 * dStack_340;
        dVar29 = local_348 * dVar20 - auVar31._0_8_ * local_368;
        dVar34 = dStack_360 * dVar62 - auVar31._8_8_ * dStack_360;
        dVar38 = dVar38 + dVar38;
        dVar29 = dVar29 + dVar29;
        dVar59 = dVar59 + dVar59;
        dVar34 = dVar34 + dVar34;
        local_108 = *(double *)(lVar11 + 0x20) +
                    (dVar59 * dVar39 - dVar20 * dVar29) + dVar62 * dVar38 + local_348;
        dStack_100 = *(double *)(lVar11 + 0x28) +
                     (dVar38 * dVar20 - dVar59 * auVar31._0_8_) + dVar62 * dVar29 + dStack_340;
        local_f8 = *(double *)(lVar11 + 0x30) +
                   (dVar29 * dVar30 - dVar39 * dVar38) + dVar62 * dVar59 + local_368;
        dVar62 = (dVar34 * dVar62 - dVar34 * auVar31._8_8_) + dVar62 * dVar34 + dStack_360 + 0.0;
        uVar47 = 0;
        local_368 = dVar20;
        dStack_360 = extraout_XMM0_Qb;
      }
      else {
        auVar24._8_4_ = SUB84(dVar39,0);
        auVar24._0_8_ = dVar30;
        auVar24._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
        dVar28 = auVar24._8_8_ + dVar39;
        dVar6 = dVar20 + dVar20;
        dVar59 = dVar30 * (dVar30 + dVar30);
        local_1e8 = (double)DAT_149934d80 - (dVar20 * dVar6 + dVar39 * dVar28);
        dVar20 = DAT_149934d80._8_8_ - (dVar20 * dVar6 + dVar59);
        local_198 = 1.0 - (dVar59 + dVar39 * dVar28);
        dStack_1a0 = (dVar30 + dVar30) * dVar62;
        dStack_1e0 = dVar28 * dVar30 + dVar6 * dVar62;
        local_1b8 = dVar6 * dVar39 + dStack_1a0;
        dStack_1a0 = dVar6 * dVar39 - dStack_1a0;
        local_1a8 = dVar30 * dVar6 + dVar28 * dVar62;
        local_1d8 = dVar30 * dVar6 - dVar28 * dVar62;
        uStack_1d0 = 0;
        local_1c8._8_4_ = SUB84(dVar20,0);
        local_1c8._0_8_ = dVar28 * dVar30 - dVar6 * dVar62;
        local_1c8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_178._8_4_ = 0;
        local_178._0_8_ = *(double *)(lVar11 + 0x30);
        local_178._12_4_ = 0x3ff00000;
        dVar62 = (double)CONCAT44(uVar55,uVar54) + (double)CONCAT44(uVar55,uVar54);
        dVar20 = (double)CONCAT44(uVar57,uVar56) + (double)CONCAT44(uVar57,uVar56);
        dVar60 = dVar29 + dVar29;
        dVar59 = (double)CONCAT44(uVar55,uVar54) * dVar62;
        dVar38 = (double)CONCAT44(uVar57,uVar56) * dVar20;
        dStack_240 = (DAT_149934d80._8_8_ - (dVar29 * dVar60 + dVar59)) *
                     (double)CONCAT44(uVar50,uVar49);
        dVar30 = dVar20 * (double)CONCAT44(uVar55,uVar54);
        dVar6 = dVar60 * (double)CONCAT44(uVar57,uVar56);
        dVar39 = (double)CONCAT44(uVar55,uVar54) * dVar60;
        dVar62 = dVar62 * dVar34;
        local_358._0_8_ = auVar31._0_8_;
        uVar4 = local_358._0_8_;
        local_248 = (dVar30 - dVar60 * dVar34) * (double)CONCAT44(uVar50,uVar49);
        dVar28 = (dVar6 - dVar62) * (double)local_358._0_8_;
        dVar30 = (dVar30 + dVar60 * dVar34) * (double)CONCAT44(uVar48,uVar47);
        local_238 = (dVar6 + dVar62) * (double)CONCAT44(uVar50,uVar49);
        local_268._8_4_ = SUB84(dVar30,0);
        local_268._0_8_ =
             ((double)DAT_149934d80 - (dVar29 * dVar60 + dVar38)) * (double)CONCAT44(uVar48,uVar47);
        local_268._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        local_258 = (dVar39 - dVar20 * dVar34) * (double)CONCAT44(uVar48,uVar47);
        uStack_250 = 0;
        uStack_230 = 0;
        local_228._8_4_ = SUB84(dVar28,0);
        local_228._0_8_ = (dVar39 + dVar20 * dVar34) * (double)local_358._0_8_;
        local_228._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        local_218 = (1.0 - (dVar59 + dVar38)) * (double)local_358._0_8_;
        uStack_210 = 0;
        local_208 = local_348;
        dStack_200 = dStack_340;
        uStack_1f0 = 0x3ff0000000000000;
        local_358 = auVar31;
        local_1f8 = local_368;
        local_188 = *(double *)(lVar11 + 0x20);
        dStack_180 = *(double *)(lVar11 + 0x28);
        FUN_1447fea8d(local_168);
        FUN_144a1c686(local_168,0x3e45798ee0000000);
        auVar25._8_8_ = -(ulonglong)(0.0 <= (double)CONCAT44(uVar50,uVar49));
        auVar25._0_8_ = -(ulonglong)(0.0 <= (double)CONCAT44(uVar48,uVar47));
        auVar31 = blendvpd(_DAT_149936790,auVar51,auVar25);
        dVar62 = (double)(~-(ulonglong)(0.0 <= (double)uVar4) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= (double)uVar4) & 0x3ff0000000000000);
        dVar20 = auVar31._0_8_;
        local_168._8_8_ = (double)local_168._8_8_ * dVar20;
        local_168._0_8_ = (double)local_168._0_8_ * dVar20;
        local_158._0_8_ = (double)local_158._0_8_ * dVar20;
        dVar20 = auVar31._8_8_;
        local_138 = local_138 * dVar20;
        local_140 = local_140 * dVar20;
        local_148 = dVar20 * local_148;
        local_118 = local_118 * dVar62;
        local_120 = local_120 * dVar62;
        local_128 = dVar62 * local_128;
        pdVar14 = &local_288;
        iVar16 = FUN_14481fd10(pdVar14,local_168);
        uVar47 = SUB84(pdVar14,0);
        auVar32._0_8_ = local_288 * local_288;
        auVar32._8_8_ = dStack_280 * dStack_280;
        dVar62 = local_278 * local_278 + auVar32._0_8_;
        dVar20 = dStack_270 * dStack_270 + auVar32._8_8_;
        auVar35._0_8_ = dVar62 + dVar20;
        auVar35._8_8_ = dVar62 + dVar20;
        auVar31 = sqrtpd(auVar32,auVar35);
        auVar51 = divpd(auVar51,auVar31);
        auVar52._0_8_ = auVar51._0_8_ * local_278;
        auVar52._8_8_ = auVar51._8_8_ * dStack_270;
        dVar6 = (double)((ulonglong)(local_288 * auVar51._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
        dVar28 = (double)((ulonglong)(dStack_280 * auVar51._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
        auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
        auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
        auVar51 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar52,auVar26);
        dVar62 = 0.0;
      }
      local_108 = local_108 - *(double *)(param_1 + 0x260);
      dStack_100 = dStack_100 - *(double *)(param_1 + 0x268);
      auVar43._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_100));
      auVar43._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_108));
      iVar16 = movmskpd(iVar16,auVar43);
      auVar37._8_8_ =
           -(ulonglong)(9.999999747378752e-05 < ABS(dVar62 - *(double *)(param_1 + 0x278)));
      auVar37._0_8_ =
           -(ulonglong)(9.999999747378752e-05 < ABS(local_f8 - *(double *)(param_1 + 0x270)));
      uVar18 = movmskpd(uVar47,auVar37);
      if ((uVar18 & 0x3fffffff) == 0 && iVar16 == 0) {
        auVar53._8_8_ =
             -(ulonglong)(9.999999747378752e-05 < ABS(dVar28 - *(double *)(param_1 + 0x248)));
        auVar53._0_8_ =
             -(ulonglong)(9.999999747378752e-05 < ABS(dVar6 - *(double *)(param_1 + 0x240)));
        uVar18 = movmskpd(iVar16,auVar53);
        auVar44._8_8_ =
             -(ulonglong)(9.999999747378752e-05 < ABS(auVar51._8_8_ - *(double *)(param_1 + 600)));
        auVar44._0_8_ =
             -(ulonglong)(9.999999747378752e-05 < ABS(auVar51._0_8_ - *(double *)(param_1 + 0x250)))
        ;
        iVar16 = movmskpd(0,auVar44);
        uVar12 = iVar16 << 2 | uVar18;
        if (uVar12 != 0) {
          auVar45._8_8_ =
               -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x248) + dVar28));
          auVar45._0_8_ =
               -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x240) + dVar6));
          iVar16 = movmskpd(uVar18,auVar45);
          auVar33._8_8_ =
               -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(param_1 + 600) + auVar51._8_8_))
          ;
          auVar33._0_8_ =
               -(ulonglong)
                (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x250) + auVar51._0_8_));
          uVar18 = movmskpd(uVar12,auVar33);
          if ((uVar18 & 0x3fffffff) != 0 || iVar16 != 0) goto LAB_1474a7fe2;
        }
      }
      else {
LAB_1474a7fe2:
        local_1d8 = local_f8 - *(double *)(param_1 + 0x270);
        local_168._8_4_ = SUB84(dVar28,0);
        local_168._0_8_ = dVar6;
        local_168._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        local_1e8 = local_108;
        dStack_1e0 = dStack_100;
        local_158 = auVar51;
        FUN_1448052ee(local_168,local_268);
        local_378 = 0;
        local_380 = 2;
        local_388 = 0;
        FUN_1407fd932(param_1,&local_1e8,local_268,0);
      }
      *(byte *)(param_1 + 0x9a4) = *(byte *)(param_1 + 0x9a4) | 3;
      uVar4 = DAT_14c8464e8;
      *(undefined8 *)(param_1 + 0xa10) = DAT_14c8464e0;
      *(undefined8 *)(param_1 + 0xa18) = uVar4;
      *(undefined8 *)(param_1 + 0xa20) = DAT_14c8464f0;
      uVar4 = DAT_14c8464e8;
      *(undefined8 *)(param_1 + 0x9f8) = DAT_14c8464e0;
      *(undefined8 *)(param_1 + 0xa00) = uVar4;
      *(undefined8 *)(param_1 + 0xa08) = DAT_14c8464f0;
      *(undefined1 *)(param_1 + 0xa28) = 0;
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_1474a80a9:
  if ((local_e0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474a83d8 FUN_1474a83d8 body=67 status=ok
// SIG undefined FUN_1474a83d8(void)

void FUN_1474a83d8(longlong param_1)

{
  FUN_1417e9802();
  FUN_140757c4e(param_1);
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FUN_142a23d44(*(longlong *)(param_1 + 0xa40),param_1 + 0x95c,param_1 + 0x96c);
    return;
  }
  return;
}



// FUNCTION 1474a841c FUN_1474a841c body=74 status=ok
// SIG undefined FUN_1474a841c(void)

void FUN_1474a841c(longlong param_1)

{
  FUN_1400bcfd8(param_1 + 0x410);
  FUN_140757c4e(param_1);
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FUN_142a23d44(*(longlong *)(param_1 + 0xa40),param_1 + 0x95c,param_1 + 0x96c);
    return;
  }
  return;
}



// FUNCTION 1474a8466 FUN_1474a8466 body=203 status=ok
// SIG undefined FUN_1474a8466(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1474a8466(uint param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa9860) {
    FUN_144b3d300(&DAT_14caa9860);
    if (DAT_14caa9860 == -1) {
      DAT_14caa9850 = (undefined8 *)0x0;
      _DAT_14caa9858 = 0xe;
      FUN_1474ab05a(&DAT_14caa9850,0xe,0);
      puVar1 = DAT_14caa9850;
      DAT_14caa9850[4] = 0xa00000009;
      puVar1[5] = 0x800000003;
      puVar1[2] = 0xf00000011;
      puVar1[3] = 0x700000002;
      *puVar1 = 0x100000006;
      puVar1[1] = 0x1200000005;
      puVar1[6] = 0x1400000013;
      atexit((_func_5014 *)&LAB_14327c1d9);
      _Init_thread_footer(&DAT_14caa9860);
    }
  }
  return *(undefined4 *)((longlong)DAT_14caa9850 + ((ulonglong)param_1 & 0xff) * 4);
}



// FUNCTION 1474a8532 FUN_1474a8532 body=155 status=ok
// SIG undefined FUN_1474a8532(void)

undefined8 FUN_1474a8532(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_3 < (int)param_1[1]) {
    lVar9 = (longlong)param_3;
    uVar1 = *(undefined8 *)(param_1[4] + lVar9 * 8);
    lVar2 = *param_1;
    uVar3 = *(undefined8 *)(param_1[2] + lVar9 * 8);
    plVar4 = (longlong *)FUN_1403c252d();
    iVar5 = -1;
    if ((longlong)(int)plVar4[1] != 0) {
      lVar7 = (longlong)(int)plVar4[1] << 3;
      lVar8 = 0;
      do {
        if (*(longlong *)(*plVar4 + lVar8 * 8) == *(longlong *)(lVar2 + lVar9 * 8)) {
          iVar5 = (int)lVar8;
          break;
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
    iVar6 = 0;
    if (iVar5 < 0x14) {
      iVar6 = iVar5;
    }
    if (iVar5 == -1) {
      iVar6 = 0;
    }
    FUN_14748fd2e(param_2,iVar6,uVar3,uVar1);
  }
  else {
    FUN_14748d762(param_2);
  }
  return param_2;
}



// FUNCTION 1474a85ce FUN_1474a85ce body=268 status=ok
// SIG undefined FUN_1474a85ce(void)

longlong * FUN_1474a85ce(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_3;
  FUN_1446ddc76(param_1 + 2,&DAT_149e02088,1);
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = -0x3810000020000000;
  param_1[5] = -0x3810000020000000;
  param_1[6] = -0x3810000020000000;
  param_1[7] = 0x47efffffe0000000;
  param_1[8] = 0x47efffffe0000000;
  param_1[9] = 0x47efffffe0000000;
  *(undefined1 *)(param_1 + 10) = 1;
  plVar1 = (longlong *)FUN_1403c252d();
  iVar2 = -1;
  if ((longlong)(int)plVar1[1] != 0) {
    lVar4 = (longlong)(int)plVar1[1] << 3;
    lVar5 = 0;
    do {
      if (*(longlong *)(*plVar1 + lVar5 * 8) == *param_2) {
        iVar2 = (int)lVar5;
        break;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  iVar3 = 0;
  if (iVar2 < 0x14) {
    iVar3 = iVar2;
  }
  if (iVar2 == -1) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0xb) = iVar3;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  lVar4 = DAT_14c8464e8;
  param_1[0xc] = DAT_14c8464e0;
  param_1[0xd] = lVar4;
  param_1[0xe] = DAT_14c8464f0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 1474a86da FUN_1474a86da body=88 status=ok
// SIG undefined FUN_1474a86da(void)

longlong FUN_1474a86da(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x658);
  if (lVar1 == 0) {
    lVar1 = FUN_1407592a6();
    if ((lVar1 != 0) && (lVar1 = FUN_147c6965e(lVar1), lVar1 != 0)) {
      lVar2 = FUN_14119cd9e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        return lVar1;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1474a8732 FUN_1474a8732 body=175 status=ok
// SIG undefined FUN_1474a8732(void)

undefined8 FUN_1474a8732(undefined8 param_1)

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
  local_b8 = FUN_144a80466();
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



// FUNCTION 1474a87e2 FUN_1474a87e2 body=122 status=ok
// SIG undefined FUN_1474a87e2(void)

void FUN_1474a87e2(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if ((*(int *)(param_1 + 0xae8) == 0) && (*(longlong *)(param_1 + 0x660) != 0)) {
    FUN_1474a885c((longlong *)(param_1 + 0xae0),
                  *(undefined4 *)(*(longlong *)(param_1 + 0x660) + 200));
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xae8))) {
    lVar2 = *(longlong *)(param_1 + 0xae0);
    lVar8 = (ulonglong)param_2 * 0x30;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[5];
    puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar8);
    *puVar1 = param_3[4];
    puVar1[1] = uVar7;
    puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar8);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    *(undefined8 *)(lVar2 + lVar8) = uVar3;
    ((undefined8 *)(lVar2 + lVar8))[1] = uVar4;
  }
  return;
}



// FUNCTION 1474a885c FUN_1474a885c body=132 status=ok
// SIG undefined FUN_1474a885c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474a885c(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140491bf8(param_1,param_2);
    }
    for (; param_2 != 0; param_2 = param_2 + -1) {
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1406ce8b4(param_1,iVar3);
      }
      uVar8 = uRam000000014c846088;
      lVar4 = *param_1;
      lVar9 = (longlong)iVar3 * 0x30;
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar9);
      *puVar2 = _DAT_14c846080;
      puVar2[1] = uVar8;
      uVar8 = uRam000000014c846078;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar9);
      *puVar2 = _DAT_14c846070;
      puVar2[1] = uVar8;
      uVar7 = uRam000000014c84606c;
      uVar6 = uRam000000014c846068;
      uVar5 = uRam000000014c846064;
      puVar1 = (undefined4 *)(lVar4 + lVar9);
      *puVar1 = _DAT_14c846060;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1474a88e2 FUN_1474a88e2 body=82 status=ok
// SIG undefined FUN_1474a88e2(void)

undefined8 * FUN_1474a88e2(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  uVar2 = (ulonglong)(param_2[1] - lVar1) >> 2;
  *(int *)(param_1 + 1) = (int)uVar2;
  if ((int)uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1474ad712(param_1,uVar2 & 0xffffffff);
    FUN_1474ad76b(*param_1,lVar1,uVar2 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 1474a8934 FUN_1474a8934 body=123 status=ok
// SIG undefined FUN_1474a8934(void)

longlong FUN_1474a8934(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (-2 < (int)*param_2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x4a8) != *(int *)(param_1 + 0x4d4)) {
    uVar1 = *param_2 & 0x7fffffff;
    lVar3 = param_1 + 0x4d8;
    if (*(longlong *)(param_1 + 0x4e0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x4e0);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x4e8) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x4a0) + (longlong)iVar4 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x4a0) + (longlong)iVar4 * 0x20) == uVar1)
        goto LAB_1474a894b;
        iVar4 = *(int *)(lVar3 + 0x18);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_1474a894b:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1474a89b0 FUN_1474a89b0 body=249 status=ok
// SIG undefined FUN_1474a89b0(void)

undefined8 FUN_1474a89b0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 0x10U & 0xffffffffffffffef) != 0) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 1474a8aaa FUN_1474a8aaa body=249 status=ok
// SIG undefined FUN_1474a8aaa(void)

undefined8 FUN_1474a8aaa(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 0x10U & 0xffffffffffffffef) != 0) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 1474a8ba4 FUN_1474a8ba4 body=314 status=ok
// SIG undefined FUN_1474a8ba4(void)

void FUN_1474a8ba4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = *(longlong *)(param_1 + 0x660);
  fVar10 = 0.0;
  if (lVar8 != 0) {
    lVar4 = *(longlong *)(lVar8 + 0x218);
    plVar5 = *(longlong **)(lVar8 + 0x220);
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
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x660) + 0x218);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
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
      uVar7 = DAT_14c9974a8;
      FUN_1446f470e(&local_48,L"Mass",1);
      lVar8 = FUN_146d84416(uVar6,local_48,uVar7);
      if (lVar8 != 0) {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x660) + 0x1e8);
        if ((-1 < (longlong)iVar3) && (iVar3 < *(int *)(lVar8 + 0x18))) {
          fVar10 = *(float *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar3 * 4);
        }
      }
    }
  }
  fVar9 = (float)FUN_1407594de(param_1);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar9 * fVar10);
}



// FUNCTION 1474a8ce0 FUN_1474a8ce0 body=383 status=ok
// SIG undefined FUN_1474a8ce0(void)

void FUN_1474a8ce0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x660);
  fVar9 = 0.0;
  local_48 = param_2;
  if (lVar3 != 0) {
    lVar7 = *(longlong *)(lVar3 + 0x218);
    plVar4 = *(longlong **)(lVar3 + 0x220);
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
    if (lVar7 != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
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
      uVar5 = DAT_14c9974a8;
      FUN_1446f470e(&local_50,L"Mass",1);
      lVar7 = FUN_146d84416(lVar3,local_50,uVar5);
      if (lVar7 != 0) {
        if (local_48 == 0) {
          uVar6 = *(uint *)(*(longlong *)(param_1 + 0x660) + 0x1e8);
        }
        else {
          FUN_1400021e4(&local_48,local_60);
          uVar6 = FUN_144a075de(lVar3 + 0xe0,local_60);
          if (local_60[0] != 0) {
            FUN_1400020a8();
          }
        }
        if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(lVar7 + 0x18))) {
          fVar9 = *(float *)(*(longlong *)(lVar7 + 0x10) + (ulonglong)uVar6 * 4);
        }
      }
    }
  }
  fVar8 = (float)FUN_1407594de(param_1);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar8 * fVar9);
}



// FUNCTION 1474a8e60 FUN_1474a8e60 body=74 status=ok
// SIG undefined FUN_1474a8e60(void)

void FUN_1474a8e60(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_140c11cd0();
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    lVar2 = FUN_14075957a(param_1);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0xa40);
      uVar3 = FUN_14488068a(lVar2);
      FUN_146eec42e(uVar1,uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1474a8eaa FUN_1474a8eaa body=108 status=ok
// SIG undefined FUN_1474a8eaa(void)

undefined4 FUN_1474a8eaa(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = 0xffffffff;
  if (param_2 != 0 && *(longlong *)(param_1 + 0x788) != 0) {
    lVar2 = 0;
    if (1 < *(byte *)(param_2 + 0x90)) {
      lVar2 = param_2;
    }
    FUN_144b1df9c(*(longlong *)(param_1 + 0x788),&local_14,lVar2);
    uVar1 = local_14;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474a8f1e FUN_1474a8f1e body=45 status=ok
// SIG undefined FUN_1474a8f1e(void)

longlong FUN_1474a8f1e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c33982(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474a8f4c FUN_1474a8f4c body=170 status=ok
// SIG undefined FUN_1474a8f4c(void)

double * FUN_1474a8f4c(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = *(double *)(param_1 + 0xa08);
  dVar2 = *(double *)(param_1 + 0xa00);
  dVar3 = (*(double *)(param_1 + 0xa20) - dVar1) * 0.5;
  dVar4 = (*(double *)(param_1 + 0xa18) - dVar2) * 0.5;
  dVar5 = (*(double *)(param_1 + 0xa10) - *(double *)(param_1 + 0x9f8)) * 0.5;
  *param_2 = *(double *)(param_1 + 0x9f8) + dVar5;
  param_2[1] = dVar2 + dVar4;
  param_2[2] = dVar1 + dVar3;
  param_2[3] = dVar5;
  param_2[4] = dVar4;
  param_2[5] = dVar3;
  param_2[6] = SQRT(dVar3 * dVar3 + dVar5 * dVar5 + dVar4 * dVar4);
  return param_2;
}



// FUNCTION 1474a9010 FUN_1474a9010 body=45 status=ok
// SIG undefined FUN_1474a9010(void)

longlong FUN_1474a9010(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140aee7e4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474a9044 FUN_1474a9044 body=48 status=ok
// SIG undefined FUN_1474a9044(void)

longlong FUN_1474a9044(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140aee7e4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474a907c FUN_1474a907c body=48 status=ok
// SIG undefined FUN_1474a907c(void)

longlong FUN_1474a907c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140aee7e4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474a90b4 FUN_1474a90b4 body=48 status=ok
// SIG undefined FUN_1474a90b4(void)

longlong FUN_1474a90b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140aee7e4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


