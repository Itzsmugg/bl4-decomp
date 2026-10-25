// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14584ec7a FUN_14584ec7a body=236 status=ok
// SIG undefined FUN_14584ec7a(void)

void FUN_14584ec7a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141237922();
  lVar1 = FUN_14584ed68(param_2);
  if (lVar1 != 0) {
    local_48 = FUN_14589d872;
    local_40 = 0;
    FUN_14589dace(lVar1 + 0x30,&local_38,param_1,&local_48);
    *(undefined8 *)(param_1 + 0x60) = local_38;
    local_48 = FUN_14589d690;
    local_40 = 0;
    FUN_14589dace(lVar1 + 0x48,&local_38,param_1,&local_48);
    *(undefined8 *)(param_1 + 0x68) = local_38;
    local_48 = FUN_1412c57c6;
    local_40 = 0;
    FUN_14589dace(lVar1 + 0x78,&local_38,param_1,&local_48);
    *(undefined8 *)(param_1 + 0x70) = local_38;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584ed68 FUN_14584ed68 body=145 status=ok
// SIG undefined FUN_14584ed68(void)

longlong FUN_14584ed68(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1403ca9d2();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = FUN_14134816c(param_1,&local_18);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca9d2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_14584edcc;
  }
  lVar1 = 0;
LAB_14584edcc:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584edfa FUN_14584edfa body=7 status=ok
// SIG undefined FUN_14584edfa(void)

undefined1 FUN_14584edfa(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3e4);
}



// FUNCTION 14584ee02 FUN_14584ee02 body=161 status=ok
// SIG undefined FUN_14584ee02(void)

double * FUN_14584ee02(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  dVar1 = DAT_14c8464e0;
  *param_2 = DAT_14c8464e0;
  param_2[1] = dVar2;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1413618d6(dVar1,&local_38);
    dVar1 = *(double *)(param_1 + 0x148);
    dVar2 = *(double *)(param_1 + 0x140);
    *param_2 = local_38 - *(double *)(param_1 + 0x138);
    param_2[1] = local_30 - dVar2;
    param_2[2] = local_28 - dVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584eea4 FUN_14584eea4 body=40 status=ok
// SIG undefined FUN_14584eea4(void)

undefined8 FUN_14584eea4(undefined8 param_1,int param_2)

{
  FUN_14584eecc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584eecc FUN_14584eecc body=57 status=ok
// SIG undefined FUN_14584eecc(void)

void FUN_14584eecc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2908f0;
  FUN_14123891a(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 14584ef06 FUN_14584ef06 body=40 status=ok
// SIG undefined FUN_14584ef06(void)

undefined8 FUN_14584ef06(undefined8 param_1,int param_2)

{
  FUN_14584ef2e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584ef2e FUN_14584ef2e body=130 status=ok
// SIG undefined FUN_14584ef2e(void)

void FUN_14584ef2e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b283150;
  plVar3 = (longlong *)param_1[0x12];
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
  FUN_14584eff1(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  param_1[7] = &PTR_FUN_14b2841e0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14584efb0(param_1);
  return;
}



// FUNCTION 14584efb0 FUN_14584efb0 body=65 status=ok
// SIG undefined FUN_14584efb0(void)

void FUN_14584efb0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b284200;
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
                    /* WARNING: Could not recover jumptable at 0x00014584efed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14584eff1 FUN_14584eff1 body=56 status=ok
// SIG undefined FUN_14584eff1(void)

void FUN_14584eff1(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b2841e0;
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 14584f02a FUN_14584f02a body=54 status=ok
// SIG undefined FUN_14584f02a(void)

undefined1 FUN_14584f02a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141238a10(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 14584f060 FUN_14584f060 body=84 status=ok
// SIG undefined FUN_14584f060(void)

void FUN_14584f060(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < (longlong)*(int *)(param_1 + 0x1150)) {
    uVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + uVar2 * 8);
      if (*(longlong *)(lVar1 + 0x360) == param_2) {
        FUN_14572aa80(lVar1,0);
        FUN_14584f0b4((longlong *)(param_1 + 0x1148),uVar2 & 0xffffffff);
        return;
      }
      uVar2 = uVar2 + 1;
    } while ((longlong)*(int *)(param_1 + 0x1150) != uVar2);
  }
  return;
}



// FUNCTION 14584f0b4 FUN_14584f0b4 body=106 status=ok
// SIG undefined FUN_14584f0b4(void)

void FUN_14584f0b4(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(int)param_2;
  lVar1 = *(longlong *)(*param_1 + lVar3 * 8);
  if (lVar1 != 0) {
    FUN_14584f11e(lVar1);
    FUN_1400020a8(lVar1);
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(*param_1 + lVar3 * 8),(void *)(*param_1 + lVar3 * 8 + 8),
            (longlong)(int)(~param_2 + iVar2) << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_140380544(param_1);
  return;
}



// FUNCTION 14584f11e FUN_14584f11e body=424 status=ok
// SIG undefined FUN_14584f11e(void)

void FUN_14584f11e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x348) = 0;
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_1400020a8();
  }
  FUN_14584f2f0(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FUN_1400020a8();
  }
  FUN_14584f2c6(*(undefined8 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2b8));
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FUN_1400020a8();
  }
  FUN_14584f2c7(*(undefined8 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x240));
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FUN_1400020a8();
  }
  FUN_141238aee(param_1 + 0x1c8);
  FUN_141238aee(param_1 + 0x160);
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  FUN_14584f3a4(param_1 + 8);
  return;
}



// FUNCTION 14584f2c6 FUN_14584f2c6 body=1 status=ok
// SIG undefined FUN_14584f2c6(void)

void FUN_14584f2c6(void)

{
  return;
}



// FUNCTION 14584f2c7 FUN_14584f2c7 body=40 status=ok
// SIG undefined FUN_14584f2c7(void)

void FUN_14584f2c7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147865052(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 14584f2f0 FUN_14584f2f0 body=55 status=ok
// SIG undefined FUN_14584f2f0(void)

void FUN_14584f2f0(longlong *param_1)

{
  FUN_14584f328(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14584f328 FUN_14584f328 body=123 status=ok
// SIG undefined FUN_14584f328(void)

void FUN_14584f328(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14584f3a4 FUN_14584f3a4 body=185 status=ok
// SIG undefined FUN_14584f3a4(void)

void FUN_14584f3a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  FUN_140d0a7fc(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  FUN_140113f01(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0xa8);
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
  FUN_141238aee(param_1);
  return;
}



// FUNCTION 14584f45e FUN_14584f45e body=52 status=ok
// SIG undefined FUN_14584f45e(void)

void FUN_14584f45e(undefined8 *param_1)

{
  FUN_1410ad47a(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 2) {
    FUN_14584f492(param_1);
    return;
  }
  return;
}



// FUNCTION 14584f492 FUN_14584f492 body=145 status=ok
// SIG undefined FUN_14584f492(void)

void FUN_14584f492(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x40;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e04];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x40,8);
  }
  uVar2 = 0x7fffffff;
  if (1 < (int)(uVar1 >> 5)) {
    uVar2 = uVar1 >> 5 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 14584f524 FUN_14584f524 body=98 status=ok
// SIG undefined FUN_14584f524(void)

void FUN_14584f524(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28);
    local_20 = &local_28;
    FUN_141238d96(param_1 + 0x30);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584f588 FUN_14584f588 body=90 status=ok
// SIG undefined FUN_14584f588(void)

undefined8 * FUN_14584f588(undefined8 *param_1,undefined8 *param_2)

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
    FUN_14584f60e(param_1,iVar1,0);
    FUN_14584f5e2(*param_1,uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 14584f5e2 FUN_14584f5e2 body=44 status=ok
// SIG undefined FUN_14584f5e2(void)

void FUN_14584f5e2(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      lVar1 = lVar1 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14584f60e FUN_14584f60e body=115 status=ok
// SIG undefined FUN_14584f60e(void)

void FUN_14584f60e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14584f682 FUN_14584f682 body=48 status=ok
// SIG undefined FUN_14584f682(void)

void FUN_14584f682(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 14584f6b2 FUN_14584f6b2 body=181 status=ok
// SIG undefined FUN_14584f6b2(void)

void FUN_14584f6b2(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if ((*(char *)(param_2 + 0x10) != '\x01') || (*(char *)(param_1 + 0x178) != '\x03'))
    goto LAB_14584f74c;
    uVar1 = 1;
  }
  else {
    if (((*(char *)(param_3 + 0x18) != '\x01') || (*(char *)(param_3 + 0x10) != '\x01')) ||
       (*(char *)(param_1 + 0x178) != '\x03')) goto LAB_14584f74c;
    uVar1 = 0;
  }
  local_c = 0;
  local_18 = 0xffffffff;
  local_20 = DAT_14cbc55d0;
  FUN_141094e00(param_1 + 0x4d8,&local_20,uVar1);
LAB_14584f74c:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584f768 FUN_14584f768 body=314 status=ok
// SIG undefined FUN_14584f768(void)

void FUN_14584f768(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_148 [40];
  undefined1 *local_120;
  code *local_118;
  undefined1 **local_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x1000000000;
  local_110 = &local_120;
  local_118 = FUN_148d6a46e;
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  local_120 = local_108;
  uVar4 = FUN_140094010();
  if (puVar1 != puVar2) {
    do {
      puVar8 = puVar1 + 1;
      bVar3 = FUN_14584f8a3(uVar4,*puVar1,&local_118,0);
      puVar1 = puVar8;
    } while ((bVar3 & puVar8 != puVar2) != 0);
  }
  FUN_1447a993c(param_1,local_40 & 0xffffffff);
  if (0 < (int)local_40) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      puVar7 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar7 = local_108;
      }
      FUN_140093fc6(param_1,uVar6 & 0xffffffff,puVar7 + lVar5);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while ((longlong)uVar6 < (longlong)(int)local_40);
  }
  FUN_14009404e(param_1);
  FUN_141238f06(param_1,*(undefined4 *)(param_1 + 4));
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14584f8a3 FUN_14584f8a3 body=42 status=ok
// SIG undefined FUN_14584f8a3(void)

void FUN_14584f8a3(undefined8 param_1,short *param_2,undefined8 *param_3,undefined4 param_4)

{
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    FUN_1446df218(param_1,param_2,param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014584f8ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(param_3[1],&DAT_14c948618);
  return;
}



// FUNCTION 14584f8ce FUN_14584f8ce body=66 status=ok
// SIG undefined FUN_14584f8ce(void)

longlong FUN_14584f8ce(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14584f930(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_14584f910(lVar2,1);
  return lVar2;
}



// FUNCTION 14584f910 FUN_14584f910 body=31 status=ok
// SIG undefined FUN_14584f910(void)

void FUN_14584f910(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14584f930 FUN_14584f930 body=132 status=ok
// SIG undefined FUN_14584f930(void)

void FUN_14584f930(longlong param_1,int param_2)

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



// FUNCTION 14584f9b6 FUN_14584f9b6 body=52 status=ok
// SIG undefined FUN_14584f9b6(void)

void FUN_14584f9b6(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = FUN_141238f08();
  if (lVar1 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)*(double *)(lVar1 + 0x6d0);
  }
  *(float *)(param_1 + 0x11c) = fVar2;
  FUN_1409d496c(param_1);
  return;
}



// FUNCTION 14584f9f8 FUN_14584f9f8 body=40 status=ok
// SIG undefined FUN_14584f9f8(void)

undefined8 FUN_14584f9f8(undefined8 param_1,int param_2)

{
  FUN_141238f76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584fa20 FUN_14584fa20 body=86 status=ok
// SIG undefined FUN_14584fa20(void)

void FUN_14584fa20(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a179950;
  FUN_14584fa76(param_1 + 7);
  FUN_1401e20e6(param_1 + 4);
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
                    /* WARNING: Could not recover jumptable at 0x00014584fa72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14584fa76 FUN_14584fa76 body=84 status=ok
// SIG undefined FUN_14584fa76(void)

void FUN_14584fa76(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14584facc FUN_14584facc body=102 status=ok
// SIG undefined FUN_14584facc(void)

void FUN_14584facc(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x48) == param_2) {
          FUN_14584fb32(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x48 + 0x40);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14584fb32 FUN_14584fb32 body=85 status=ok
// SIG undefined FUN_14584fb32(void)

void FUN_14584fb32(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x48;
  lVar5 = (longlong)*(int *)(lVar1 + 0x44);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x48 + 0x40);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x40);
  FUN_14584fb88();
  return;
}



// FUNCTION 14584fb88 FUN_14584fb88 body=116 status=ok
// SIG undefined FUN_14584fb88(void)

void FUN_14584fb88(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 14584fbfc FUN_14584fbfc body=29 status=ok
// SIG undefined FUN_14584fbfc(void)

void FUN_14584fbfc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14584fc1a FUN_14584fc1a body=73 status=ok
// SIG undefined FUN_14584fc1a(void)

undefined8 * FUN_14584fc1a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2221c0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584fc70 FUN_14584fc70 body=31 status=ok
// SIG undefined FUN_14584fc70(void)

undefined8 FUN_14584fc70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584fc90 FUN_14584fc90 body=29 status=ok
// SIG undefined FUN_14584fc90(void)

void FUN_14584fc90(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14584fcae FUN_14584fcae body=73 status=ok
// SIG undefined FUN_14584fcae(void)

undefined8 * FUN_14584fcae(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2a0610;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584fd04 FUN_14584fd04 body=31 status=ok
// SIG undefined FUN_14584fd04(void)

undefined8 FUN_14584fd04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584fd24 FUN_14584fd24 body=29 status=ok
// SIG undefined FUN_14584fd24(void)

void FUN_14584fd24(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14584fd42 FUN_14584fd42 body=73 status=ok
// SIG undefined FUN_14584fd42(void)

undefined8 * FUN_14584fd42(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2a12c0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584fd98 FUN_14584fd98 body=31 status=ok
// SIG undefined FUN_14584fd98(void)

undefined8 FUN_14584fd98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584fdb8 FUN_14584fdb8 body=29 status=ok
// SIG undefined FUN_14584fdb8(void)

void FUN_14584fdb8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14584fdd6 FUN_14584fdd6 body=73 status=ok
// SIG undefined FUN_14584fdd6(void)

undefined8 * FUN_14584fdd6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a312960;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584fe2c FUN_14584fe2c body=31 status=ok
// SIG undefined FUN_14584fe2c(void)

undefined8 FUN_14584fe2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584fe4c FUN_14584fe4c body=29 status=ok
// SIG undefined FUN_14584fe4c(void)

void FUN_14584fe4c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14584fe6a FUN_14584fe6a body=73 status=ok
// SIG undefined FUN_14584fe6a(void)

undefined8 * FUN_14584fe6a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a337230;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584fec0 FUN_14584fec0 body=31 status=ok
// SIG undefined FUN_14584fec0(void)

undefined8 FUN_14584fec0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584feea FUN_14584feea body=121 status=ok
// SIG undefined FUN_14584feea(void)

undefined8 * FUN_14584feea(undefined8 *param_1)

{
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a5151f0;
  param_1[5] = &PTR_FUN_14a515550;
  FUN_140ca8f8e(param_1 + 0x2e);
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = &DAT_3f8000003f800000;
  param_1[0x47] = &DAT_3f8000003f800000;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  return param_1;
}



// FUNCTION 14584ff64 FUN_14584ff64 body=40 status=ok
// SIG undefined FUN_14584ff64(void)

undefined8 FUN_14584ff64(undefined8 param_1,int param_2)

{
  FUN_14584ff8c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14584ff8c FUN_14584ff8c body=405 status=ok
// SIG undefined FUN_14584ff8c(void)

void FUN_14584ff8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd09400;
  param_1[0x21] = &PTR_FUN_14bd09720;
  param_1[0x22] = &PTR_FUN_14bd09760;
  param_1[0x23] = &PTR_FUN_14bd09770;
  param_1[0x24] = &PTR_FUN_14bd097a0;
  param_1[0x25] = &PTR_FUN_14bd097d0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_145850152(param_1[0x38],*(undefined4 *)(param_1 + 0x39));
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_141239a12(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_141239a12(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_141239a12(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_141239a12(param_1[0x30],*(undefined4 *)(param_1 + 0x31));
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_145850121(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_141136054(param_1);
  return;
}



// FUNCTION 145850121 FUN_145850121 body=49 status=ok
// SIG undefined FUN_145850121(void)

void FUN_145850121(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145850152 FUN_145850152 body=60 status=ok
// SIG undefined FUN_145850152(void)

void FUN_145850152(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_141239a12(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14585019a FUN_14585019a body=61 status=ok
// SIG undefined FUN_14585019a(void)

undefined8 * FUN_14585019a(undefined8 *param_1)

{
  FUN_1458501dc();
  *param_1 = &PTR_FUN_14a16fd80;
  *(undefined4 *)(param_1 + 0x16) = 0x6eaa8b21;
  param_1[0x17] = "meta_data";
  thunk_FUN_1407d0668();
  return param_1;
}



// FUNCTION 1458501d7 thunk_FUN_1407d0668 body=5 status=ok
// SIG undefined thunk_FUN_1407d0668(void)

longlong * thunk_FUN_1407d0668(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c9a1b00 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_14001cc68(0x10,0x10);
    *plVar2 = 0;
    plVar2[1] = 0;
    DAT_14c9a1b00 = plVar2;
    FUN_1446ddc76(&uStack_40,&DAT_14a1795a8,1);
    FUN_1457475bc(&uStack_34,uStack_40,0);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_145747620(plVar2,iVar1);
    }
    lVar3 = *plVar2;
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined4 *)(lVar3 + lVar4) = 0;
    *(undefined4 *)(lVar3 + 0xc + lVar4) = uStack_2c;
    *(undefined8 *)(lVar3 + 4 + lVar4) = uStack_34;
    plVar2 = DAT_14c9a1b00;
    FUN_1446ddc76(&uStack_48,"WarmUp",1);
    FUN_1457475bc(&uStack_34,uStack_48,0);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_145747620(plVar2,iVar1);
    }
    lVar3 = *plVar2;
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined4 *)(lVar3 + lVar4) = 1;
    *(undefined4 *)(lVar3 + 0xc + lVar4) = uStack_2c;
    *(undefined8 *)(lVar3 + 4 + lVar4) = uStack_34;
    plVar2 = DAT_14c9a1b00;
    FUN_1446ddc76(&uStack_50,"PreSpawn",1);
    FUN_1457475bc(&uStack_34,uStack_50,0);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_145747620(plVar2,iVar1);
    }
    lVar3 = *plVar2;
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined4 *)(lVar3 + lVar4) = 2;
    *(undefined4 *)(lVar3 + 0xc + lVar4) = uStack_2c;
    *(undefined8 *)(lVar3 + 4 + lVar4) = uStack_34;
    plVar2 = DAT_14c9a1b00;
    FUN_1446ddc76(&uStack_58,"PostSpawn",1);
    FUN_1457475bc(&uStack_34,uStack_58,0);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_145747620(plVar2,iVar1);
    }
    lVar3 = *plVar2;
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined4 *)(lVar3 + lVar4) = 3;
    *(undefined4 *)(lVar3 + 0xc + lVar4) = uStack_2c;
    *(undefined8 *)(lVar3 + 4 + lVar4) = uStack_34;
    plVar2 = DAT_14c9a1b00;
    FUN_1446ddc76(&uStack_60,"Active",1);
    FUN_1457475bc(&uStack_34,uStack_60,0);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_145747620(plVar2,iVar1);
    }
    lVar3 = *plVar2;
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined4 *)(lVar3 + lVar4) = 4;
    *(undefined8 *)(lVar3 + 4 + lVar4) = uStack_34;
    *(undefined4 *)(lVar3 + 0xc + lVar4) = uStack_2c;
    FUN_1446f470e(&uStack_68,L"NexusBundle",1);
    FUN_1457475bc(&uStack_34,uStack_68,2);
    if ((longlong)(int)DAT_14c9a1b00[1] != 0) {
      lVar4 = (longlong)(int)DAT_14c9a1b00[1] << 4;
      lVar3 = *DAT_14c9a1b00 + 8;
      do {
        uStack_70 = 0;
        FUN_145747562(lVar3 + -4,&uStack_70);
        FUN_145747562(&uStack_34,lVar3);
        lVar3 = lVar3 + 0x10;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
  }
  if ((uStack_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14c9a1b00;
}



// FUNCTION 1458501dc FUN_1458501dc body=42 status=ok
// SIG undefined FUN_1458501dc(void)

undefined8 * FUN_1458501dc(undefined8 *param_1)

{
  FUN_140c6b9f8();
  *param_1 = &PTR_FUN_14a1663b0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 145850212 FUN_145850212 body=150 status=ok
// SIG undefined FUN_145850212(void)

undefined8 * FUN_145850212(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_28,L"Sprite",1);
  FUN_140486538(param_2,local_28);
  FUN_14048646a(param_2 + 0x20,local_28,0,0);
  FUN_140834366(param_1,param_2);
  *param_1 = &PTR_FUN_14ab26060;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458502aa FUN_1458502aa body=152 status=ok
// SIG undefined FUN_1458502aa(void)

void FUN_1458502aa(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x68) = param_2;
    if ((uint)(*(int *)(param_1 + 0x6c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145850344(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar2 = param_1;
    }
    memset((void *)((longlong)iVar1 * 0x10 + lVar2),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1467c4c7a(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1467c4cde(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145850344 FUN_145850344 body=53 status=ok
// SIG undefined FUN_145850344(void)

void FUN_145850344(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 <= *(int *)(param_1 + 0x68)) {
    uVar1 = FUN_14585037a(*(int *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    FUN_1458784ca(param_1,param_2,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14585037a FUN_14585037a body=93 status=ok
// SIG undefined FUN_14585037a(void)

ulonglong FUN_14585037a(uint param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 6;
  if (6 < param_1) {
    lVar1 = (longlong)(int)param_1;
    if (6 < param_2) {
      lVar1 = lVar1 + ((ulonglong)(lVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = lVar1 << 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
    }
    uVar3 = 0x7fffffff;
    if ((int)param_1 <= (int)(uVar2 >> 4)) {
      uVar3 = uVar2 >> 4 & 0xffffffff;
    }
  }
  return uVar3;
}



// FUNCTION 1458503e8 FUN_1458503e8 body=280 status=ok
// SIG undefined FUN_1458503e8(void)

void FUN_1458503e8(longlong param_1)

{
  longlong lVar1;
  wchar_t *_Str;
  size_t sVar2;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_14123bd7e();
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    local_1d8 = local_1b8;
    local_1c0 = '\0';
    local_1c8 = local_b8;
    local_1d0 = local_1d8;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"Activate",&local_1d8);
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar2 = wcslen(_Str);
      FUN_1446fe5a4(local_b8,_Str,sVar2 & 0xffffffff,1);
    }
    FUN_1412a486e(lVar1,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 == '\x01') {
      FUN_1400020a8(local_1d8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145850502 FUN_145850502 body=221 status=ok
// SIG undefined FUN_145850502(void)

undefined8 FUN_145850502(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
    do {
      *(undefined2 *)(param_2 + -0xb0) = *(undefined2 *)(param_3 + -0xb0);
      *(undefined8 *)(param_2 + -0xb8) = *(undefined8 *)(param_3 + -0xb8);
      uVar1 = *(undefined4 *)(param_3 + -0xa4);
      uVar2 = *(undefined4 *)(param_3 + -0xa0);
      uVar3 = *(undefined4 *)(param_3 + -0x9c);
      uVar4 = *(undefined4 *)(param_3 + -0x98);
      uVar5 = *(undefined4 *)(param_3 + -0x94);
      uVar6 = *(undefined4 *)(param_3 + -0x90);
      uVar7 = *(undefined4 *)(param_3 + -0x8c);
      *(undefined4 *)(param_2 + -0xa8) = *(undefined4 *)(param_3 + -0xa8);
      *(undefined4 *)(param_2 + -0xa4) = uVar1;
      *(undefined4 *)(param_2 + -0xa0) = uVar2;
      *(undefined4 *)(param_2 + -0x9c) = uVar3;
      *(undefined4 *)(param_2 + -0x98) = uVar4;
      *(undefined4 *)(param_2 + -0x94) = uVar5;
      *(undefined4 *)(param_2 + -0x90) = uVar6;
      *(undefined4 *)(param_2 + -0x8c) = uVar7;
      *(undefined8 *)(param_2 + -0x88) = *(undefined8 *)(param_3 + -0x88);
      FUN_14123bd80(param_2 + -0x80,param_3 + -0x80);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      uVar4 = *(undefined4 *)(param_3 + -0x28);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      uVar8 = *(undefined4 *)(param_3 + -0x18);
      uVar9 = *(undefined4 *)(param_3 + -0x14);
      uVar10 = *(undefined4 *)(param_3 + -0x10);
      uVar11 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      *(undefined4 *)(param_2 + -0x28) = uVar4;
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x18) = uVar8;
      *(undefined4 *)(param_2 + -0x14) = uVar9;
      *(undefined4 *)(param_2 + -0x10) = uVar10;
      *(undefined4 *)(param_2 + -0xc) = uVar11;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140d2c6ac(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      memcpy((void *)(param_2 + 0x18),(void *)(param_3 + 0x18),0x1ab);
      param_3 = param_3 + 0x290;
      param_2 = param_2 + 0x290;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1458505e0 FUN_1458505e0 body=40 status=ok
// SIG undefined FUN_1458505e0(void)

undefined8 FUN_1458505e0(undefined8 param_1,int param_2)

{
  FUN_145850608();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145850608 FUN_145850608 body=107 status=ok
// SIG undefined FUN_145850608(void)

void FUN_145850608(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aef7740;
  param_1[5] = &PTR_FUN_14aef7b60;
  param_1[0x13] = &PTR_FUN_14aef7b80;
  param_1[0x17] = &PTR_FUN_14aef7bb0;
  FUN_145850673(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1458506c0(param_1);
  return;
}



// FUNCTION 145850673 FUN_145850673 body=77 status=ok
// SIG undefined FUN_145850673(void)

void FUN_145850673(longlong param_1,int param_2)

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



// FUNCTION 1458506c0 FUN_1458506c0 body=108 status=ok
// SIG undefined FUN_1458506c0(void)

void FUN_1458506c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aef6650;
  param_1[5] = &PTR_FUN_14aef6a60;
  param_1[0x13] = &PTR_FUN_14aef6a80;
  param_1[0x17] = &PTR_FUN_14aef6ab0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1411412a8(param_1);
  return;
}



// FUNCTION 14585072c FUN_14585072c body=64 status=ok
// SIG undefined FUN_14585072c(void)

bool FUN_14585072c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  cVar1 = FUN_14123be06();
  if (cVar1 == '\0') {
    lVar2 = FUN_141147bae();
    if (*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) {
      bVar3 = false;
    }
    else {
      bVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30;
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}



// FUNCTION 145850782 FUN_145850782 body=122 status=ok
// SIG undefined FUN_145850782(void)

undefined8 * FUN_145850782(undefined8 *param_1)

{
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac88e00;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x12] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x15) = 0x41200000;
  *(undefined4 *)(param_1 + 0x11) = 1;
  FUN_144860b82(param_1 + 0x10,0);
  *(undefined1 *)param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 145850808 FUN_145850808 body=49 status=ok
// SIG undefined FUN_145850808(void)

undefined8 * FUN_145850808(undefined8 *param_1)

{
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14b1a6620;
  *(byte *)((longlong)param_1 + 0x39c) = *(byte *)((longlong)param_1 + 0x39c) | 1;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0xffffc000;
  return param_1;
}



// FUNCTION 14585083a FUN_14585083a body=40 status=ok
// SIG undefined FUN_14585083a(void)

undefined8 FUN_14585083a(undefined8 param_1,int param_2)

{
  thunk_FUN_145850868();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145850862 thunk_FUN_145850868 body=5 status=ok
// SIG undefined thunk_FUN_145850868(void)

void thunk_FUN_145850868(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4bffe0;
  param_1[0x1f] = &PTR_LAB_14a4c0350;
  if (*(char *)((longlong)param_1 + 0x374) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x374) = 0;
  }
  FUN_1404dbc70(param_1 + 0x27);
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 145850868 FUN_145850868 body=75 status=ok
// SIG undefined FUN_145850868(void)

void FUN_145850868(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4bffe0;
  param_1[0x1f] = &PTR_LAB_14a4c0350;
  if (*(char *)((longlong)param_1 + 0x374) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x374) = 0;
  }
  FUN_1404dbc70(param_1 + 0x27);
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 1458508c2 FUN_1458508c2 body=40 status=ok
// SIG undefined FUN_1458508c2(void)

undefined8 FUN_1458508c2(undefined8 param_1,int param_2)

{
  FUN_1458508ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458508ea FUN_1458508ea body=66 status=ok
// SIG undefined FUN_1458508ea(void)

void FUN_1458508ea(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b343c60;
  plVar3 = (longlong *)param_1[6];
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
                    /* WARNING: Could not recover jumptable at 0x000145850921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14585092c FUN_14585092c body=21 status=ok
// SIG undefined FUN_14585092c(void)

undefined8 FUN_14585092c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145850956 FUN_145850956 body=226 status=ok
// SIG undefined FUN_145850956(void)

longlong * FUN_145850956(longlong *param_1)

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
  pcVar13 = FUN_1462b8af6;
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



// FUNCTION 145850a3a FUN_145850a3a body=138 status=ok
// SIG undefined FUN_145850a3a(void)

code * FUN_145850a3a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportSizeInverse";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000000e0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14713a7fa;
}



// FUNCTION 145850ac4 FUN_145850ac4 body=138 status=ok
// SIG undefined FUN_145850ac4(void)

code * FUN_145850ac4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenPosToViewportBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000d8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14713a998;
}



// FUNCTION 145850b4e FUN_145850b4e body=138 status=ok
// SIG undefined FUN_145850b4e(void)

code * FUN_145850b4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ExtentInverse";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000d4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14713aa22;
}



// FUNCTION 145850bd8 FUN_145850bd8 body=247 status=ok
// SIG undefined FUN_145850bd8(void)

void FUN_145850bd8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_14094b946(param_1,&local_30);
  lVar3 = *param_2;
  uVar6 = FUN_140dec39c();
  cVar5 = FUN_1448093f4(lVar3,uVar6);
  if ((cVar5 != '\0') && (lVar3 != 0)) {
    FUN_14123c256(lVar3 + 0x348,param_1 + 400);
    FUN_14123c256(lVar3 + 0x330,param_1 + 0x178);
    FUN_144a7bb84(lVar3 + 0x300,param_1 + 0x148);
    FUN_144a7bb84(lVar3 + 0x318,param_1 + 0x160);
  }
  plVar4 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145850cf0 FUN_145850cf0 body=104 status=ok
// SIG undefined FUN_145850cf0(void)

undefined8 FUN_145850cf0(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_145850d5a(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145850d5a FUN_145850d5a body=22 status=ok
// SIG undefined FUN_145850d5a(void)

undefined8 FUN_145850d5a(int *param_1)

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
  
  plVar4 = DAT_14cb8c8f0;
  if (DAT_14cb8c8f0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb8c8f0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb8c8f0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb8c8f0[0x3a] <= *(int *)((longlong)DAT_14cb8c8f0 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb8c8f0 + 0x300))(DAT_14cb8c8f0);
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



// FUNCTION 145850d76 FUN_145850d76 body=236 status=ok
// SIG undefined FUN_145850d76(void)

void FUN_145850d76(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_1c);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_20);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,2);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_24);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,3);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_28);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    local_38 = local_28;
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_1c,local_20,
               local_24);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145850e64 FUN_145850e64 body=139 status=ok
// SIG undefined FUN_145850e64(void)

void FUN_145850e64(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  *(uint *)(param_1 + 0x2c8) = param_2;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar2 + 0x1c0))) {
      lVar1 = FUN_140f9b9fa((ulonglong)param_2 * 0x1e8 + *(longlong *)(lVar2 + 0x1b8),param_3,
                            param_4,param_5);
      if (lVar1 != 0) {
        FUN_140f9ba4c(param_1,lVar1,0);
        lVar2 = *(longlong *)(param_1 + 0x288);
        if (lVar2 == 0) goto LAB_145850ed4;
      }
    }
    *(undefined1 *)(lVar2 + 0x1dd) = 0;
  }
LAB_145850ed4:
  FUN_140de1078(param_1,&DAT_14cbe20a0,0,0);
  return;
}



// FUNCTION 145850ef0 FUN_145850ef0 body=40 status=ok
// SIG undefined FUN_145850ef0(void)

undefined8 FUN_145850ef0(undefined8 param_1,int param_2)

{
  FUN_145850f18();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145850f18 FUN_145850f18 body=67 status=ok
// SIG undefined FUN_145850f18(void)

void FUN_145850f18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4bee10;
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145850f64 FUN_145850f64 body=222 status=ok
// SIG undefined FUN_145850f64(void)

undefined8 * FUN_145850f64(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14007ca06();
  FUN_145851044(param_1,uVar2);
  *param_1 = &PTR_FUN_14ae7bd00;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_1446f470e(&local_20,L"WaterWaves",1);
  uVar2 = FUN_145851064();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[5] = lVar3;
  for (puVar1 = param_1; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)puVar1[4]) {
    if ((*(uint *)(puVar1 + 1) & 0x30) != 0) goto LAB_145851018;
  }
  FUN_14123e1e0(param_1);
LAB_145851018:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145851044 FUN_145851044 body=32 status=ok
// SIG undefined FUN_145851044(void)

undefined8 * FUN_145851044(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ae9e5c0;
  return param_1;
}



// FUNCTION 145851064 FUN_145851064 body=228 status=ok
// SIG undefined FUN_145851064(void)

longlong FUN_145851064(void)

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
  if (DAT_14cb46d18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145909a96;
    local_38 = &LAB_1483e17bd;
    local_40 = FUN_146486144;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/Water",L"GerstnerWaterWaveGeneratorSimple",&DAT_14cb46d18,&DAT_1483e17bc
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb46d18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585114a FUN_14585114a body=105 status=ok
// SIG undefined FUN_14585114a(void)

void FUN_14585114a(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14123e32e();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1458511b4(param_1 + 0x1160,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458511b4 FUN_1458511b4 body=76 status=ok
// SIG undefined FUN_1458511b4(void)

void FUN_1458511b4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14123e32e();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1458511f1;
    }
  }
  lVar2 = 0;
LAB_1458511f1:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 145851200 FUN_145851200 body=147 status=ok
// SIG undefined FUN_145851200(void)

void FUN_145851200(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145851294 FUN_145851294 body=9 status=ok
// SIG undefined FUN_145851294(void)

void FUN_145851294(longlong param_1)

{
  FUN_14585129e(param_1 + 0x10);
  return;
}



// FUNCTION 14585129e FUN_14585129e body=84 status=ok
// SIG undefined FUN_14585129e(void)

void FUN_14585129e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b420e58;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b421658;
  FUN_1449db362(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001458512ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1458512f2 FUN_1458512f2 body=37 status=ok
// SIG undefined FUN_1458512f2(void)

void FUN_1458512f2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  FUN_145851318(param_2);
  return;
}



// FUNCTION 145851318 FUN_145851318 body=97 status=ok
// SIG undefined FUN_145851318(void)

undefined8 * FUN_145851318(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b84d000;
  FUN_144a5dc74(param_1 + 3);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_144a5dc74(param_1 + 10);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 145851379 FUN_145851379 body=35 status=ok
// SIG undefined FUN_145851379(void)

void FUN_145851379(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14585139c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14beb1b60;
  return;
}



// FUNCTION 14585139c FUN_14585139c body=32 status=ok
// SIG undefined FUN_14585139c(void)

undefined8 * FUN_14585139c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a7a25c0;
  return param_1;
}



// FUNCTION 1458513bc FUN_1458513bc body=1067 status=ok
// SIG undefined FUN_1458513bc(void)

void FUN_1458513bc(void)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1458517e8(&DAT_14cb109f0,&local_58,FUN_1459c83ac);
  DAT_14cb44098 = local_58;
  FUN_1458517e8(&DAT_14cb10980,&local_58,&LAB_1458c3ef4);
  DAT_14cb440a0 = local_58;
  FUN_14576a192(&DAT_14cb10a20,&local_58,&LAB_14032bcea);
  DAT_14cb440a8 = local_58;
  FUN_14576a192(&DAT_14cb10a08,&local_58,&LAB_14183b1b8);
  DAT_14cb440b0 = local_58;
  FUN_145afd586(&local_58,FUN_145942db4);
  FUN_14126834e(&DAT_14cb10a38,&local_60,&local_58);
  FUN_1401cb1ee(&local_58);
  DAT_14cb440b8 = local_60;
  FUN_145afd586(&local_58,FUN_14647bbce);
  FUN_14126834e(&DAT_14cb10ae8,&local_60,&local_58);
  FUN_1401cb1ee(&local_58);
  DAT_14cb440c0 = local_60;
  FUN_1458518c2(&DAT_14cb10838,&local_58,FUN_14014a5a6);
  FUN_1458518c2(&DAT_14cb10868,&local_58,FUN_14484683e);
  DAT_14cb440c8 = local_58;
  FUN_1458518c2(&DAT_14cb10850,&local_58,FUN_14183b25c);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *local_58 = &PTR_LAB_14a1e1a40;
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
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14ae2fb00;
  FUN_141211c46(&DAT_14cb10820,&local_60,&local_58);
  FUN_1449db362(&local_58);
  DAT_14cb440d0 = local_60;
  uVar3 = FUN_140c61bfa();
  FUN_14123f5ce(uVar3,&local_58,FUN_140dc4668);
  DAT_14cb440d8 = local_58;
  FUN_14123f5ce(&DAT_14c9646f8,&local_58,FUN_143ad0a92);
  DAT_14cb440e0 = local_58;
  uVar3 = FUN_140b631de();
  FUN_14123f5ce(uVar3,&local_58,FUN_1410c1e18);
  DAT_14cb440e8 = local_58;
  FUN_14123f5ce(&DAT_14c964740,&local_58,FUN_1408b9c28);
  DAT_14cb440f0 = local_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    uVar3 = FUN_14118da1c();
    DAT_14c8442b8 = FUN_14054d46e(uVar3,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_145851742;
    bVar1 = DAT_14c8442b8 & 1;
  }
  if (bVar1 == 0) {
    lVar4 = FUN_1411c1a08();
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,2,0x10);
    local_50 = 2;
    *local_58 = &PTR_LAB_14ae30180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_58[2] = lVar5;
    *local_58 = &PTR_FUN_14ae2fb70;
    FUN_145851a76(lVar4 + 0x90,&local_60,&local_58);
    FUN_1449db362(&local_58);
    DAT_14cb440f8 = local_60;
  }
LAB_145851742:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458517e8 FUN_1458517e8 body=217 status=ok
// SIG undefined FUN_1458517e8(void)

undefined8 FUN_1458517e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14a1ca5b0;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14a1ca540;
  local_38[3] = param_3;
  FUN_14123f6f0(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458518c2 FUN_1458518c2 body=217 status=ok
// SIG undefined FUN_1458518c2(void)

undefined8 FUN_1458518c2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14a3ea200;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14a9bb850;
  local_38[3] = param_3;
  FUN_14585199c(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585199c FUN_14585199c body=216 status=ok
// SIG undefined FUN_14585199c(void)

undefined8 * FUN_14585199c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145851a76 FUN_145851a76 body=216 status=ok
// SIG undefined FUN_145851a76(void)

undefined8 * FUN_145851a76(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145851b5c FUN_145851b5c body=40 status=ok
// SIG undefined FUN_145851b5c(void)

undefined8 FUN_145851b5c(undefined8 param_1,int param_2)

{
  FUN_145851b84();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145851b84 FUN_145851b84 body=74 status=ok
// SIG undefined FUN_145851b84(void)

void FUN_145851b84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac47970;
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145851bd8 FUN_145851bd8 body=65 status=ok
// SIG undefined FUN_145851bd8(void)

void FUN_145851bd8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145851c1a FUN_145851c1a body=40 status=ok
// SIG undefined FUN_145851c1a(void)

undefined8 FUN_145851c1a(undefined8 param_1,int param_2)

{
  FUN_145851c42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145851c42 FUN_145851c42 body=125 status=ok
// SIG undefined FUN_145851c42(void)

void FUN_145851c42(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a52aa90;
  param_1[5] = &PTR_FUN_14a52adb0;
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
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145851cc0 FUN_145851cc0 body=156 status=ok
// SIG undefined FUN_145851cc0(void)

void FUN_145851cc0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_145851d5e(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145851d5e FUN_145851d5e body=62 status=ok
// SIG undefined FUN_145851d5e(void)

void FUN_145851d5e(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a7cbb2();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_145851d8b;
  }
  param_1 = 0;
LAB_145851d8b:
  FUN_14494e0ba(param_1);
  return;
}



// FUNCTION 145851d9c FUN_145851d9c body=86 status=ok
// SIG undefined FUN_145851d9c(void)

undefined8 FUN_145851d9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined2 *)(param_2 + -0x18) = *(undefined2 *)(param_3 + -0x18);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_145851df2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 145851df2 FUN_145851df2 body=93 status=ok
// SIG undefined FUN_145851df2(void)

undefined8 * FUN_145851df2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141067f06(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145851e50(param_1,iVar1);
      FUN_14124051b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145851e50 FUN_145851e50 body=100 status=ok
// SIG undefined FUN_145851e50(void)

void FUN_145851e50(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145851eb4 FUN_145851eb4 body=138 status=ok
// SIG undefined FUN_145851eb4(void)

void FUN_145851eb4(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x24 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x24) = param_2;
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
      puVar7 = puVar7 + 9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145851f3e FUN_145851f3e body=103 status=ok
// SIG undefined FUN_145851f3e(void)

ulonglong FUN_145851f3e(longlong param_1)

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
LAB_145851f88:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145851f88;
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



// FUNCTION 145851fa6 FUN_145851fa6 body=42 status=ok
// SIG undefined FUN_145851fa6(void)

void FUN_145851fa6(longlong *param_1)

{
  if ((*(byte *)(param_1 + 3) & 2) != 0) {
    (**(code **)(*param_1 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x000145851fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1);
    return;
  }
  return;
}



// FUNCTION 145851fd6 FUN_145851fd6 body=103 status=ok
// SIG undefined FUN_145851fd6(void)

undefined4 FUN_145851fd6(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 *puVar3;
  
  cVar2 = FUN_14019108b(*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_1;
    if (2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf]) {
      puVar3 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar3 = DAT_14ca96af8;
      }
      if (((uint)puVar3[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return CONCAT31((int3)((uint)~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] >> 8),
                        (~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] & 0x1400000) == 0);
      }
    }
  }
  return 0;
}



// FUNCTION 14585204c FUN_14585204c body=40 status=ok
// SIG undefined FUN_14585204c(void)

undefined8 FUN_14585204c(undefined8 param_1,int param_2)

{
  FUN_144a659aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145852082 FUN_145852082 body=40 status=ok
// SIG undefined FUN_145852082(void)

undefined8 FUN_145852082(undefined8 param_1,int param_2)

{
  FUN_1407f61d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458520aa FUN_1458520aa body=156 status=ok
// SIG undefined FUN_1458520aa(void)

void FUN_1458520aa(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_145852148(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145852148 FUN_145852148 body=66 status=ok
// SIG undefined FUN_145852148(void)

undefined8 FUN_145852148(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      uVar2 = FUN_140cf8aa6(param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14585218a FUN_14585218a body=40 status=ok
// SIG undefined FUN_14585218a(void)

undefined8 FUN_14585218a(undefined8 param_1,int param_2)

{
  FUN_1458521b2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458521b2 FUN_1458521b2 body=63 status=ok
// SIG undefined FUN_1458521b2(void)

void FUN_1458521b2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a468d50;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1458521f2(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458521f2 FUN_1458521f2 body=53 status=ok
// SIG undefined FUN_1458521f2(void)

void FUN_1458521f2(longlong *param_1)

{
  FUN_145852228();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145852228 FUN_145852228 body=88 status=ok
// SIG undefined FUN_145852228(void)

void FUN_145852228(longlong param_1)

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



// FUNCTION 14585228c FUN_14585228c body=92 status=ok
// SIG undefined FUN_14585228c(void)

undefined1 FUN_14585228c(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x20))(param_2);
      (**(code **)(*param_2 + 0x28))(param_2);
    }
    return cVar1 != '\0';
  }
  uVar3 = (**(code **)(*param_2 + 0x28))();
  uVar2 = FUN_1458522e8(param_1,param_2,uVar3);
  return uVar2;
}



// FUNCTION 1458522e8 FUN_1458522e8 body=1016 status=ok
// SIG undefined FUN_1458522e8(void)

ulonglong FUN_1458522e8(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  byte *local_90;
  longlong *local_88;
  undefined1 local_7c;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar3 = FUN_144a7c06e(param_3);
  if ((cVar3 != '\0') &&
     (plVar6 = (longlong *)FUN_1412446d2(param_3),
     (int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c))) {
    plVar11 = plVar6 + 8;
    if ((longlong *)plVar6[9] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar6[9];
    }
    iVar10 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar6[10] - 1U & DAT_14cb7ea60) * 4);
    if (iVar10 != -1) {
      do {
        if (*(uint *)(*plVar6 + (longlong)iVar10 * 0x40) == DAT_14cb7ea60) {
          plVar6 = (longlong *)FUN_1412446d2(param_3);
          if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
            plVar11 = plVar6 + 8;
            if ((longlong *)plVar6[9] != (longlong *)0x0) {
              plVar11 = (longlong *)plVar6[9];
            }
            iVar10 = *(int *)((longlong)plVar11 +
                             (ulonglong)((int)plVar6[10] - 1U & DAT_14cb7ea88) * 4);
            if (iVar10 != -1) {
              uVar14 = 0;
              goto LAB_1458523d1;
            }
          }
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x40 + *plVar6 + 0x38);
      } while (iVar10 != -1);
    }
  }
  uVar14 = 0;
LAB_1458524a1:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
LAB_1458523d1:
  if (*(uint *)(*plVar6 + (longlong)iVar10 * 0x40) != DAT_14cb7ea88) goto LAB_1458524f1;
  puVar7 = (undefined8 *)FUN_144a06846(param_3,&DAT_14cb7ea60);
  pbVar2 = (byte *)*puVar7;
  if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(pbVar2 + 8);
  }
  uVar5 = FUN_1458526e2(uVar8);
  puVar7 = (undefined8 *)FUN_144a06846(param_3,&DAT_14cb7ea88);
  local_90 = (byte *)*puVar7;
  local_88 = (longlong *)puVar7[1];
  if (local_88 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
  }
  if ((local_90 == (byte *)0x0) || ((*local_90 & 3) == 0)) {
    uVar14 = 0;
    goto switchD_14585253b_default;
  }
  if ((char)uVar5 == '\x05') {
    local_78 = (undefined2 *)0x0;
    uVar8 = FUN_140205d5a();
    uVar5 = FUN_1446e7478(&local_90,&local_78,uVar8,0);
    uVar14 = (ulonglong)uVar5;
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(param_1 + 7)])(param_1);
    *param_1 = (longlong)local_78;
    *(undefined1 *)(param_1 + 7) = 5;
    goto switchD_14585253b_default;
  }
  uVar14 = CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
  switch(uVar5 & 0xff) {
  case 0:
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_7c = 0;
    FUN_140008118(&local_78,&local_90);
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(param_1 + 7)])(param_1);
    FUN_14170fc10(param_1,&local_78);
    *(undefined1 *)(param_1 + 7) = 0;
    break;
  case 1:
    if ((*local_90 & 3) == 1) {
      puVar12 = &DAT_149e02088;
      if (*(undefined1 **)(local_90 + 8) != (undefined1 *)0x0) {
        puVar12 = *(undefined1 **)(local_90 + 8);
      }
    }
    else {
      puVar12 = &DAT_149e02088;
    }
    FUN_1400b22c2(&local_78,puVar12);
    puVar13 = local_78;
    if (local_70 == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    uVar8 = FUN_1446f8646();
    lVar9 = FUN_140277b32(uVar8,0,puVar13,0);
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(param_1 + 7)])(param_1);
    *param_1 = lVar9;
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
    *(undefined1 *)(param_1 + 7) = 1;
    local_50 = local_78;
    goto LAB_1458526b8;
  case 2:
    uVar15 = FUN_140b963dc(&local_90,0);
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(param_1 + 7)])(param_1);
    *(undefined4 *)param_1 = uVar15;
    *(undefined1 *)(param_1 + 7) = 2;
    break;
  case 3:
    uVar4 = FUN_1410c4486(&local_90,0);
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(param_1 + 7)])(param_1);
    *(undefined1 *)param_1 = uVar4;
    *(undefined1 *)(param_1 + 7) = 3;
    break;
  case 4:
    FUN_144928b90(&local_78,0);
    uVar5 = FUN_148834660(&local_78,param_2,&local_90);
    uVar14 = (ulonglong)uVar5;
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(param_1 + 7)])(param_1);
    FUN_1400750e6(param_1,&local_78);
    *(undefined1 *)(param_1 + 7) = 4;
LAB_1458526b8:
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
switchD_14585253b_default:
  plVar6 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_88 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  goto LAB_1458524a1;
LAB_1458524f1:
  iVar10 = *(int *)((longlong)iVar10 * 0x40 + *plVar6 + 0x38);
  if (iVar10 == -1) goto LAB_1458524a1;
  goto LAB_1458523d1;
}



// FUNCTION 1458526e2 FUN_1458526e2 body=118 status=ok
// SIG undefined FUN_1458526e2(void)

undefined1 FUN_1458526e2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    uVar2 = FUN_14124473a();
    FUN_1446ddc76(&local_30,param_1,1);
    cVar1 = FUN_1412446f0(local_30,uVar2,local_28);
    if (cVar1 != '\0') goto LAB_145852736;
  }
  local_28[0] = 0;
LAB_145852736:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_28[0];
}



// FUNCTION 14585275a FUN_14585275a body=40 status=ok
// SIG undefined FUN_14585275a(void)

undefined8 FUN_14585275a(undefined8 param_1,int param_2)

{
  FUN_145852782();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145852782 FUN_145852782 body=130 status=ok
// SIG undefined FUN_145852782(void)

void FUN_145852782(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac47d70;
  FUN_144a2da94(param_1 + 0x38);
  FUN_144a2da94(param_1 + 0x30);
  FUN_144a2da94(param_1 + 0x28);
  FUN_144a2da94(param_1 + 0x20);
  FUN_144a2da94(param_1 + 0x18);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145852804 FUN_145852804 body=65 status=ok
// SIG undefined FUN_145852804(void)

longlong FUN_145852804(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145852866(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_145852845(lVar2);
  return lVar2;
}



// FUNCTION 145852845 FUN_145852845 body=32 status=ok
// SIG undefined FUN_145852845(void)

void FUN_145852845(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  return;
}



// FUNCTION 145852866 FUN_145852866 body=147 status=ok
// SIG undefined FUN_145852866(void)

void FUN_145852866(longlong param_1,int param_2)

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



// FUNCTION 1458528fa FUN_1458528fa body=38 status=ok
// SIG undefined FUN_1458528fa(void)

undefined8 FUN_1458528fa(undefined8 param_1,int param_2)

{
  FUN_1412451e2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145852920 FUN_145852920 body=53 status=ok
// SIG undefined FUN_145852920(void)

void FUN_145852920(longlong *param_1)

{
  FUN_1458529a2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145852956 FUN_145852956 body=75 status=ok
// SIG undefined FUN_145852956(void)

void FUN_145852956(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014585299e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1458529a2 FUN_1458529a2 body=90 status=ok
// SIG undefined FUN_1458529a2(void)

void FUN_1458529a2(longlong param_1)

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



// FUNCTION 1458529fc FUN_1458529fc body=75 status=ok
// SIG undefined FUN_1458529fc(void)

undefined8 * FUN_1458529fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adcb7a0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145852a48(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145852a48 FUN_145852a48 body=53 status=ok
// SIG undefined FUN_145852a48(void)

void FUN_145852a48(longlong *param_1)

{
  FUN_145852a7e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145852a7e FUN_145852a7e body=90 status=ok
// SIG undefined FUN_145852a7e(void)

void FUN_145852a7e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
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



// FUNCTION 145852ad8 FUN_145852ad8 body=24 status=ok
// SIG undefined FUN_145852ad8(void)

void FUN_145852ad8(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145852aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145852af0 FUN_145852af0 body=38 status=ok
// SIG undefined FUN_145852af0(void)

undefined8 FUN_145852af0(undefined8 param_1,int param_2)

{
  FUN_145852b16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145852b16 FUN_145852b16 body=67 status=ok
// SIG undefined FUN_145852b16(void)

void FUN_145852b16(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba47bc0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_145852b5a(param_1 + 0xd);
  FUN_145857f46(param_1);
  return;
}



// FUNCTION 145852b5a FUN_145852b5a body=53 status=ok
// SIG undefined FUN_145852b5a(void)

void FUN_145852b5a(longlong *param_1)

{
  FUN_145852b90();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145852b90 FUN_145852b90 body=309 status=ok
// SIG undefined FUN_145852b90(void)

void FUN_145852b90(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1412457ca((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145852cc6 FUN_145852cc6 body=38 status=ok
// SIG undefined FUN_145852cc6(void)

undefined8 FUN_145852cc6(undefined8 param_1,int param_2)

{
  FUN_145852cec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145852cec FUN_145852cec body=105 status=ok
// SIG undefined FUN_145852cec(void)

void FUN_145852cec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa35ae0;
  if ((param_1[0xf] != 0) && (*(longlong *)(param_1[0xd] + 0x38) != 0)) {
    FUN_1411dc7ca(*(longlong *)(param_1[0xd] + 0x38) + 0x70);
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145852d56(param_1 + 1);
  return;
}



// FUNCTION 145852d56 FUN_145852d56 body=53 status=ok
// SIG undefined FUN_145852d56(void)

void FUN_145852d56(longlong *param_1)

{
  FUN_141245882();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145852d8c FUN_145852d8c body=40 status=ok
// SIG undefined FUN_145852d8c(void)

undefined8 FUN_145852d8c(undefined8 param_1,int param_2)

{
  FUN_145852db4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145852db4 FUN_145852db4 body=79 status=ok
// SIG undefined FUN_145852db4(void)

void FUN_145852db4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc9d760;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bc9c180;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145852e04(param_1);
  return;
}



// FUNCTION 145852e04 FUN_145852e04 body=46 status=ok
// SIG undefined FUN_145852e04(void)

void FUN_145852e04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc24070;
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  }
  FUN_145852e32(param_1);
  return;
}



// FUNCTION 145852e32 FUN_145852e32 body=95 status=ok
// SIG undefined FUN_145852e32(void)

void FUN_145852e32(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc22860;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145852eec FUN_145852eec body=40 status=ok
// SIG undefined FUN_145852eec(void)

undefined8 FUN_145852eec(undefined8 param_1,int param_2)

{
  FUN_145852f14();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145852f14 FUN_145852f14 body=143 status=ok
// SIG undefined FUN_145852f14(void)

void FUN_145852f14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b83fdc0;
  param_1[6] = &PTR_FUN_14b840080;
  param_1[7] = &PTR_LAB_14b840110;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_145852fa4(param_1 + 9);
  FUN_140af926c(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145852fa4 FUN_145852fa4 body=55 status=ok
// SIG undefined FUN_145852fa4(void)

void FUN_145852fa4(longlong *param_1)

{
  FUN_145852fdc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145852fdc FUN_145852fdc body=121 status=ok
// SIG undefined FUN_145852fdc(void)

void FUN_145852fdc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145853056 FUN_145853056 body=64 status=ok
// SIG undefined FUN_145853056(void)

void FUN_145853056(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145853096(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145853096 FUN_145853096 body=87 status=ok
// SIG undefined FUN_145853096(void)

ulonglong FUN_145853096(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
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



// FUNCTION 1458530ee FUN_1458530ee body=66 status=ok
// SIG undefined FUN_1458530ee(void)

void FUN_1458530ee(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 8);
  FUN_141245fae(param_1,uVar1,0);
  FUN_141245f18(param_1,param_2);
  FUN_141245fae(param_1,param_2,1);
  return;
}



// FUNCTION 145853130 FUN_145853130 body=40 status=ok
// SIG undefined FUN_145853130(void)

undefined8 FUN_145853130(undefined8 param_1,int param_2)

{
  FUN_145853158();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145853158 FUN_145853158 body=94 status=ok
// SIG undefined FUN_145853158(void)

void FUN_145853158(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b1bc6d0;
  lVar1 = param_1[0x1e];
  if (lVar1 != 0) {
    FUN_144a2da94(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1458531b6 FUN_1458531b6 body=216 status=ok
// SIG undefined FUN_1458531b6(void)

undefined8 * FUN_1458531b6(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14a5449a0;
  param_1[2] = 0;
  FUN_141247186(param_2);
  FUN_140056680(local_38,param_2);
  FUN_14124722a(local_38,1);
  lVar1 = FUN_14124734e(local_38,param_3);
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[2] = lVar1;
    if (lVar1 == 0) {
      FUN_14283f6fe(param_2);
    }
  }
  else {
    FUN_1456cec3c(lVar1);
    param_1[2] = lVar1;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585329a FUN_14585329a body=44 status=ok
// SIG undefined FUN_14585329a(void)

undefined8 * FUN_14585329a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a7210c0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 1458532c6 FUN_1458532c6 body=105 status=ok
// SIG undefined FUN_1458532c6(void)

void FUN_1458532c6(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_18 = *(longlong *)(param_1 + 0x10);
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_145853330(&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    switchD_143c3d4dc::caseD_1f(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145853330 FUN_145853330 body=103 status=ok
// SIG undefined FUN_145853330(void)

void FUN_145853330(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_145853440();
  if (uVar1 == 0xffffffff) {
    return;
  }
  iVar2 = ~uVar1 + DAT_14cb1fcd8;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(DAT_14cb1fcd0 + (longlong)(int)uVar1 * 8),
            (void *)(DAT_14cb1fcd0 + (longlong)(DAT_14cb1fcd8 - iVar3) * 8),(longlong)iVar3 << 3);
  }
  DAT_14cb1fcd8 = DAT_14cb1fcd8 + -1;
  FUN_145853398();
  return;
}



// FUNCTION 145853398 FUN_145853398 body=76 status=ok
// SIG undefined FUN_145853398(void)

void FUN_145853398(void)

{
  int iVar1;
  
  iVar1 = FUN_1458533e4(DAT_14cb1fcd8,DAT_14cb1fcdc);
  if (iVar1 != DAT_14cb1fcdc) {
    DAT_14cb1fcdc = iVar1;
    FUN_1446f8d3c(&DAT_14cb1fcd0,DAT_14cb1fcd8,iVar1,8,8);
  }
  return;
}



// FUNCTION 1458533e4 FUN_1458533e4 body=91 status=ok
// SIG undefined FUN_1458533e4(void)

ulonglong FUN_1458533e4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 145853440 FUN_145853440 body=193 status=ok
// SIG undefined FUN_145853440(void)

ulonglong FUN_145853440(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar1 = DAT_14cb1fcd0;
  if ((longlong)DAT_14cb1fcd8 != 0) {
    lVar4 = (longlong)DAT_14cb1fcd8 << 3;
    uVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar1 + uVar6 * 8);
      if ((((lVar5 == 0) || (lVar2 = FUN_1412474be(), lVar2 == 0)) ||
          (*(int *)(lVar5 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar1 + uVar6 * 8);
      }
      lVar2 = *param_1;
      if (((lVar2 == 0) || (lVar3 = FUN_1412474be(), lVar3 == 0)) ||
         ((*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30)))) {
        lVar2 = 0;
      }
      else {
        lVar2 = *param_1;
      }
      if (lVar5 == lVar2) {
        return uVar6 & 0xffffffff;
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return 0xffffffff;
}



// FUNCTION 145853526 FUN_145853526 body=40 status=ok
// SIG undefined FUN_145853526(void)

undefined8 FUN_145853526(undefined8 param_1,int param_2)

{
  thunk_FUN_145853554();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585354e thunk_FUN_145853554 body=5 status=ok
// SIG undefined thunk_FUN_145853554(void)

void thunk_FUN_145853554(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b458040;
  param_1[5] = &PTR_LAB_14b4584e0;
  param_1[6] = &PTR_LAB_14b458520;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffbf72(param_1);
  return;
}



// FUNCTION 145853554 FUN_145853554 body=72 status=ok
// SIG undefined FUN_145853554(void)

void FUN_145853554(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b458040;
  param_1[5] = &PTR_LAB_14b4584e0;
  param_1[6] = &PTR_LAB_14b458520;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffbf72(param_1);
  return;
}



// FUNCTION 14585359c FUN_14585359c body=132 status=ok
// SIG undefined FUN_14585359c(void)

void FUN_14585359c(longlong param_1,int param_2)

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



// FUNCTION 14585362c FUN_14585362c body=171 status=ok
// SIG undefined FUN_14585362c(void)

undefined8 * FUN_14585362c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bc16fe0;
  param_1[5] = &PTR_FUN_14bc172a0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  FUN_144a7c084(param_1 + 0xd);
  FUN_144a7c084(param_1 + 0x12);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1b),4000);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  FUN_144a7c084(param_1 + 0x24);
  FUN_144a7c084(param_1 + 0x29);
  return param_1;
}



// FUNCTION 1458536e2 FUN_1458536e2 body=277 status=ok
// SIG undefined FUN_1458536e2(void)

void FUN_1458536e2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x268);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,1);
    *(undefined8 *)(param_1 + 0x268) = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2d8));
  FUN_141249b58(param_1 + 0x2a0);
  FUN_1458537f7(*(undefined8 *)(param_1 + 0x290),*(undefined4 *)(param_1 + 0x298));
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FUN_1400020a8();
  }
  FUN_1412494f0(*(undefined8 *)(param_1 + 0x280),*(undefined4 *)(param_1 + 0x288));
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FUN_1400020a8();
  }
  puVar4 = *(undefined8 **)(param_1 + 0x260);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  FUN_1458538b0(param_1 + 0x1b0);
  FUN_141249b12(param_1 + 0x148);
  FUN_145853864(param_1 + 0x120);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  FUN_145853978(param_1 + 0x30);
  plVar3 = *(longlong **)(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x0001458537d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458537f7 FUN_1458537f7 body=47 status=ok
// SIG undefined FUN_1458537f7(void)

void FUN_1458537f7(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 145853826 FUN_145853826 body=62 status=ok
// SIG undefined FUN_145853826(void)

undefined8 * FUN_145853826(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a15ed90;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  FUN_14018802a(param_1[2]);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145853864 FUN_145853864 body=75 status=ok
// SIG undefined FUN_145853864(void)

void FUN_145853864(longlong *param_1)

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



// FUNCTION 1458538b0 FUN_1458538b0 body=87 status=ok
// SIG undefined FUN_1458538b0(void)

void FUN_1458538b0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_145853908(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_145853940(param_1 + 0x10);
  return;
}



// FUNCTION 145853908 FUN_145853908 body=55 status=ok
// SIG undefined FUN_145853908(void)

void FUN_145853908(longlong *param_1)

{
  FUN_1403f117c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145853940 FUN_145853940 body=55 status=ok
// SIG undefined FUN_145853940(void)

void FUN_145853940(longlong *param_1)

{
  FUN_1402a4d52(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145853978 FUN_145853978 body=101 status=ok
// SIG undefined FUN_145853978(void)

void FUN_145853978(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x68);
  while (lVar2 != param_1 + 0x80) {
    lVar1 = *(longlong *)(lVar2 + 8);
    bVar3 = lVar2 != 0;
    lVar2 = lVar1;
    if (bVar3) {
      FUN_1400020a8();
    }
  }
  FUN_1400020a8(*(undefined8 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1458539de(param_1 + 0x10);
  return;
}



// FUNCTION 1458539de FUN_1458539de body=53 status=ok
// SIG undefined FUN_1458539de(void)

void FUN_1458539de(longlong *param_1)

{
  FUN_145853a14();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145853a14 FUN_145853a14 body=90 status=ok
// SIG undefined FUN_145853a14(void)

void FUN_145853a14(longlong param_1)

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



// FUNCTION 145853a6e FUN_145853a6e body=35 status=ok
// SIG undefined FUN_145853a6e(void)

void FUN_145853a6e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145853a92(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9ec080;
  return;
}



// FUNCTION 145853a92 FUN_145853a92 body=48 status=ok
// SIG undefined FUN_145853a92(void)

undefined8 * FUN_145853a92(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b9e6840;
  FUN_14045d416(param_1 + 5);
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  return param_1;
}



// FUNCTION 145853ac2 FUN_145853ac2 body=79 status=ok
// SIG undefined FUN_145853ac2(void)

longlong *
FUN_145853ac2(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  FUN_14027c0e6();
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    FUN_145853b11(param_1,param_3,param_4,param_5,param_6);
  }
  return param_1;
}



// FUNCTION 145853b11 FUN_145853b11 body=125 status=ok
// SIG undefined FUN_145853b11(void)

undefined8
FUN_145853b11(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_140d76916(param_1,4);
  FUN_145853c0e(param_1,&DAT_14cbc6b80,param_2);
  FUN_145853c0e(param_1,&DAT_14cbc6b90,param_3);
  FUN_145853b8e(param_1,&DAT_14cbc6ba0,param_4);
  FUN_145853b8e(param_1,&DAT_14cbc6b70,param_5);
  return param_1;
}



// FUNCTION 145853b8e FUN_145853b8e body=128 status=ok
// SIG undefined FUN_145853b8e(void)

longlong * FUN_145853b8e(longlong *param_1,undefined8 *param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar3 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar3,iVar1);
    }
    lVar2 = *plVar3;
    lVar4 = (longlong)iVar1 * 0x30;
    *(double *)(lVar2 + lVar4) = (double)*param_3;
    *(undefined1 *)(lVar2 + 0x20 + lVar4) = 3;
    *(undefined8 *)(lVar2 + 0x28 + lVar4) = *param_2;
  }
  return param_1;
}



// FUNCTION 145853c0e FUN_145853c0e body=128 status=ok
// SIG undefined FUN_145853c0e(void)

longlong * FUN_145853c0e(longlong *param_1,undefined8 *param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar3 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar3,iVar1);
    }
    lVar2 = *plVar3;
    lVar4 = (longlong)iVar1 * 0x30;
    *(double *)(lVar2 + lVar4) = (double)*param_3;
    *(undefined1 *)(lVar2 + 0x20 + lVar4) = 3;
    *(undefined8 *)(lVar2 + 0x28 + lVar4) = *param_2;
  }
  return param_1;
}



// FUNCTION 145853c9a FUN_145853c9a body=135 status=ok
// SIG undefined FUN_145853c9a(void)

undefined8 * FUN_145853c9a(undefined8 *param_1)

{
  FUN_145853d22();
  *param_1 = &PTR_FUN_14b15dc40;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9a) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 2;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x19] = 2;
  return param_1;
}



// FUNCTION 145853d22 FUN_145853d22 body=114 status=ok
// SIG undefined FUN_145853d22(void)

undefined8 * FUN_145853d22(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14060481e();
  *param_1 = &PTR_FUN_14b15a3d0;
  plVar3 = (longlong *)FUN_14494321d(0xa8);
  FUN_145853d94(plVar3);
  param_1[5] = plVar3 + 2;
  param_1[6] = plVar3;
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
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 145853d94 FUN_145853d94 body=149 status=ok
// SIG undefined FUN_145853d94(void)

undefined8 * FUN_145853d94(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b162000;
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
  param_1[2] = &PTR_FUN_14b162f20;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_145853e2a(param_1 + 7);
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 145853e2a FUN_145853e2a body=50 status=ok
// SIG undefined FUN_145853e2a(void)

undefined8 * FUN_145853e2a(undefined8 *param_1)

{
  FUN_145853e5c();
  param_1[1] = &DAT_14cb7dd90;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b16b1f0;
  return param_1;
}



// FUNCTION 145853e5c FUN_145853e5c body=181 status=ok
// SIG undefined FUN_145853e5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145853e5c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7de00) {
    FUN_144b3d300(&DAT_14cb7de00);
    if (DAT_14cb7de00 == -1) {
      _DAT_14cb7ddb0 = 0;
      _DAT_14cb7ddb8 = 0;
      _DAT_14cb7dd90 = 0;
      uRam000000014cb7dd98 = 0;
      _DAT_14cb7ddbc = 0xffffffff00000080;
      _DAT_14cb7ddc4 = 0;
      DAT_14cb7ddd0 = 0;
      _DAT_14cb7ddd8 = 0;
      DAT_14cb7dde0 = 0;
      uRam000000014cb7dde8 = 0;
      _DAT_14cb7ddf0 = 0;
      InitializeSRWLock((PSRWLOCK)&DAT_14cb7ddf8);
      atexit(FUN_143d53076);
      _Init_thread_footer(&DAT_14cb7de00);
      return;
    }
  }
  return;
}



// FUNCTION 145853f12 FUN_145853f12 body=167 status=ok
// SIG undefined FUN_145853f12(void)

void FUN_145853f12(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  plVar2 = (longlong *)
           FUN_14585403e(param_1 + 0xcc8,(uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30,
                         &local_30);
  local_38 = 0;
  FUN_14485c47a(&local_38,param_3);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_145853fba(plVar2,iVar1);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = local_38;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145853fba FUN_145853fba body=132 status=ok
// SIG undefined FUN_145853fba(void)

void FUN_145853fba(longlong param_1,int param_2)

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



// FUNCTION 14585403e FUN_14585403e body=133 status=ok
// SIG undefined FUN_14585403e(void)

longlong FUN_14585403e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1458540c4();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_14585408b;
  }
  local_30 = param_3;
  FUN_1458541b2(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_14585408b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 8;
}



// FUNCTION 1458540c4 FUN_1458540c4 body=180 status=ok
// SIG undefined FUN_1458540c4(void)

int FUN_1458540c4(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_14585417a(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_145854152;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_145854152:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585417a FUN_14585417a body=55 status=ok
// SIG undefined FUN_14585417a(void)

ulonglong FUN_14585417a(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 != *param_2) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != param_2[1])) {
    cVar1 = FUN_144729dda();
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(param_2);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 1458541b2 FUN_1458541b2 body=276 status=ok
// SIG undefined FUN_1458541b2(void)

undefined4 * FUN_1458541b2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14585436c(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_1458542c8(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_1415e3602(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458542c8 FUN_1458542c8 body=163 status=ok
// SIG undefined FUN_1458542c8(void)

undefined8 FUN_1458542c8(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar6 = FUN_141249bb4();
    if (iVar6 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)param_3;
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      uVar4 = *(undefined4 *)(param_3 + 1);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_3[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_145bfdca8(param_1,*param_4);
      *param_4 = iVar6;
      uVar7 = 1;
      goto LAB_14585430c;
    }
  }
  uVar7 = 0;
LAB_14585430c:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585436c FUN_14585436c body=239 status=ok
// SIG undefined FUN_14585436c(void)

int * FUN_14585436c(longlong *param_1,int *param_2)

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



// FUNCTION 14585445c FUN_14585445c body=40 status=ok
// SIG undefined FUN_14585445c(void)

undefined8 FUN_14585445c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145854484 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 14585448a FUN_14585448a body=68 status=ok
// SIG undefined FUN_14585448a(void)

undefined8 * FUN_14585448a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aaf8930;
  FUN_1400020a8(param_1[0xd]);
  param_1[0xd] = 0;
  FUN_1458544ce(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458544ce FUN_1458544ce body=67 status=ok
// SIG undefined FUN_1458544ce(void)

void FUN_1458544ce(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aaf0d40;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145854512 FUN_145854512 body=69 status=ok
// SIG undefined FUN_145854512(void)

undefined8 * FUN_145854512(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a312360;
  FUN_145854557(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145854557 FUN_145854557 body=42 status=ok
// SIG undefined FUN_145854557(void)

void FUN_145854557(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_1449db362(param_1);
      param_1 = param_1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14585458a FUN_14585458a body=240 status=ok
// SIG undefined FUN_14585458a(void)

undefined8 * FUN_14585458a(undefined8 *param_1)

{
  FUN_14585467a();
  *param_1 = &PTR_FUN_14aef7130;
  param_1[5] = &PTR_FUN_14aef7570;
  param_1[0x13] = &PTR_FUN_14aef7590;
  param_1[0x24] = &PTR_FUN_14aef75c0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x131) = 0;
  *(undefined8 *)((longlong)param_1 + 0x139) = 0;
  FUN_1411b354a(param_1 + 0x29,0,0,0,0);
  param_1[0x74] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0x3ff00000;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0x3ff0000000000000;
  param_1[0x8b] = 0x3ff0000000000000;
  param_1[0x8c] = 0x3ff0000000000000;
  param_1[0x8d] = 0;
  return param_1;
}



// FUNCTION 14585467a FUN_14585467a body=156 status=ok
// SIG undefined FUN_14585467a(void)

undefined8 * FUN_14585467a(undefined8 *param_1)

{
  FUN_141249ec6();
  *param_1 = &PTR_FUN_14aefa000;
  param_1[5] = &PTR_FUN_14aefa3d0;
  param_1[0x13] = &PTR_FUN_14aefa3f0;
  param_1[0x15] = 0;
  param_1[0x16] = &DAT_100000004;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 145854716 FUN_145854716 body=55 status=ok
// SIG undefined FUN_145854716(void)

longlong FUN_145854716(longlong param_1,int param_2)

{
  FUN_140af926c(param_1 + 0x88);
  thunk_FUN_145854754(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14585474e thunk_FUN_145854754 body=5 status=ok
// SIG undefined thunk_FUN_145854754(void)

void thunk_FUN_145854754(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a816f60;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145854754 FUN_145854754 body=79 status=ok
// SIG undefined FUN_145854754(void)

void FUN_145854754(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a816f60;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458547ac FUN_1458547ac body=418 status=ok
// SIG undefined FUN_1458547ac(void)

longlong * FUN_1458547ac(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_14007ca06();
  FUN_1406ed334(param_1,uVar4);
  *param_1 = (longlong)&PTR_FUN_14b215780;
  FUN_14124d4e4(param_1 + 0x1f);
  *(undefined1 *)(param_1 + 0x1b) = 1;
  local_40 = (longlong *)0x2;
  local_38 = (longlong *)0x2;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_40);
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar5 + 2;
  FUN_145854950(plVar1,param_1 + 0x1f);
  local_40 = plVar1;
  local_38 = plVar5;
  FUN_140aec6f8(&local_40,plVar1);
  plVar1 = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x1c] = (longlong)local_40;
    plVar5 = (longlong *)param_1[0x1d];
    if (plVar5 == (longlong *)0x0) goto LAB_145854898;
    param_1[0x1d] = 0;
LAB_1458548f0:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145854898;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x1c] = (longlong)local_40;
    plVar5 = (longlong *)param_1[0x1d];
    if (local_38 != plVar5) {
      param_1[0x1d] = (longlong)local_38;
      if (plVar5 == (longlong *)0x0) goto LAB_145854898;
      goto LAB_1458548f0;
    }
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_145854898;
    (**(code **)*local_38)(local_38);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_145854898:
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145854950 FUN_145854950 body=197 status=ok
// SIG undefined FUN_145854950(void)

undefined8 * FUN_145854950(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  puVar1 = param_1 + 5;
  param_1[8] = 0;
  param_1[9] = 0x100000000;
  lVar4 = FUN_145854a16();
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1457d67de(puVar1,iVar2);
  }
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  puVar5[(longlong)iVar2 * 3] = uVar3;
  puVar5[(longlong)iVar2 * 3 + 1] = 0;
  (puVar5 + (longlong)iVar2 * 3 + 1)[1] = 0;
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  iVar2 = *(int *)(puVar5 + 2);
  *(uint *)(puVar5 + 2) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x14) < iVar2 + 1U) {
    FUN_140aec898(puVar5 + 1,iVar2);
  }
  *(undefined8 *)(puVar5[1] + (longlong)iVar2 * 8) = param_2;
  return param_1;
}



// FUNCTION 145854a16 FUN_145854a16 body=57 status=ok
// SIG undefined FUN_145854a16(void)

void FUN_145854a16(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb63428 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb63428 = FUN_140002ddd(FUN_1464fcee0,uVar1,L"GbxSequenceMomentEventChannel");
  }
  return;
}



// FUNCTION 145854a50 FUN_145854a50 body=45 status=ok
// SIG undefined FUN_145854a50(void)

undefined8 FUN_145854a50(undefined8 param_1,int param_2)

{
  FUN_145854a7e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 145854a7e FUN_145854a7e body=108 status=ok
// SIG undefined FUN_145854a7e(void)

void FUN_145854a7e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0d1b50;
  FUN_144a2da94(param_1 + 0x26);
  FUN_144a2da94(param_1 + 0x1f);
  FUN_144a2da94(param_1 + 0x17);
  *param_1 = &PTR_FUN_14b0c6840;
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145854aea FUN_145854aea body=45 status=ok
// SIG undefined FUN_145854aea(void)

undefined8 FUN_145854aea(undefined8 param_1,int param_2)

{
  FUN_145854b18();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,400);
  }
  return param_1;
}



// FUNCTION 145854b18 FUN_145854b18 body=98 status=ok
// SIG undefined FUN_145854b18(void)

void FUN_145854b18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0d11c0;
  FUN_144a2da94(param_1 + 0x28);
  FUN_144a2da94(param_1 + 0x21);
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145854b84 FUN_145854b84 body=105 status=ok
// SIG undefined FUN_145854b84(void)

void FUN_145854b84(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14acb0810;
  FUN_145854bed(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14124dd15(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145854be9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145854bed FUN_145854bed body=75 status=ok
// SIG undefined FUN_145854bed(void)

void FUN_145854bed(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145854c38 FUN_145854c38 body=128 status=ok
// SIG undefined FUN_145854c38(void)

void FUN_145854c38(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (*(int *)(lVar1 + 0xd98) != 0)) &&
       (*(longlong *)(lVar1 + 0xda0) != 0)) {
      FUN_140c125e6(lVar1 + 0xd98,&DAT_14cbd9390);
    }
  }
  FUN_140457ffc(&DAT_14c9647a0,param_1);
  FUN_14124ddb6(param_1);
  return;
}



// FUNCTION 145854cb8 FUN_145854cb8 body=137 status=ok
// SIG undefined FUN_145854cb8(void)

undefined1 * FUN_145854cb8(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0xc] = 2;
  *(undefined4 *)(param_1 + 0x18) = 0x80;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0x8000000000;
  FUN_145854d42(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  param_1[200] = 1;
  FUN_1456bd906(param_1 + 0x20,0x100);
  FUN_14124ddea(param_1 + 0x40,0x100);
  return param_1;
}



// FUNCTION 145854d42 FUN_145854d42 body=102 status=ok
// SIG undefined FUN_145854d42(void)

undefined8 * FUN_145854d42(undefined8 *param_1)

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



// FUNCTION 145854da8 FUN_145854da8 body=52 status=ok
// SIG undefined FUN_145854da8(void)

void FUN_145854da8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xbc0,0x10);
  FUN_145854ddc(uVar1);
  FUN_140de79e2(param_1,uVar1);
  return;
}



// FUNCTION 145854ddc FUN_145854ddc body=152 status=ok
// SIG undefined FUN_145854ddc(void)

undefined8 * FUN_145854ddc(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_145854e74();
  *param_1 = &PTR_FUN_14b905170;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x16e] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x16f) = (int)plVar2[1];
  *(byte *)(param_1 + 0x170) = *(byte *)(param_1 + 0x170) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0xb84) = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0xffffffff00000000;
  param_1[0x173] = 0;
  param_1[0x174] = 0xffffffff00000000;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  return param_1;
}



// FUNCTION 145854e74 FUN_145854e74 body=332 status=ok
// SIG undefined FUN_145854e74(void)

undefined8 * FUN_145854e74(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_145854fc0();
  *param_1 = &PTR_FUN_14b895ab0;
  FUN_140056680(param_1 + 0x74,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x76,&DAT_149dfb77a);
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x78] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x79) = (int)plVar2[1];
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  FUN_1413526be(param_1 + 0x85);
  FUN_1413526be(param_1 + 0xd2);
  *(undefined1 *)(param_1 + 0x11f) = 0;
  *(byte *)((longlong)param_1 + 0x8f9) = *(byte *)((longlong)param_1 + 0x8f9) & 0xe0;
  *(undefined8 *)((longlong)param_1 + 0x8fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x904) = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  FUN_14124e07a(param_1 + 0x123);
  FUN_14124e07a(param_1 + 0x133);
  FUN_14124e07a(param_1 + 0x143);
  param_1[0x153] = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  *(undefined4 *)(param_1 + 0x157) = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  *(byte *)(param_1 + 0x160) = *(byte *)(param_1 + 0x160) & 0xc0;
  param_1[0x162] = 0;
  param_1[0x164] = 0;
  return param_1;
}



// FUNCTION 145854fc0 FUN_145854fc0 body=318 status=ok
// SIG undefined FUN_145854fc0(void)

undefined8 * FUN_145854fc0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  memset(param_1,0,0xb0);
  FUN_1408f3f9e(param_1);
  *param_1 = &PTR_FUN_14b895be0;
  FUN_14124e07a(param_1 + 0x16);
  FUN_14124e07a(param_1 + 0x26);
  FUN_14124e07a(param_1 + 0x36);
  FUN_14124e07a(param_1 + 0x46);
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x66) = 0x40;
  *(byte *)((longlong)param_1 + 0x331) = *(byte *)((longlong)param_1 + 0x331) & 0xf8 | 4;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x6e] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x6f) = (int)plVar2[1];
  FUN_1400b22c2(param_1 + 0x70,&DAT_149e02088);
  param_1[0x72] = 0;
  *(undefined2 *)(param_1 + 0x73) = 0;
  return param_1;
}



// FUNCTION 1458550fe FUN_1458550fe body=449 status=ok
// SIG undefined FUN_1458550fe(void)

void FUN_1458550fe(undefined8 param_1)

{
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  undefined1 *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_48 = &PTR_LAB_149f61800;
  local_40 = FUN_1429f8284;
  local_68[0] = &LAB_14011ae20;
  local_6c = 0;
  FUN_1458552c0(param_1,&local_6c,local_68);
  local_58 = 0;
  local_48 = &PTR_LAB_149f61970;
  local_40 = FUN_1429f954e;
  local_68[0] = &LAB_1400ed700;
  local_6c = 1;
  FUN_14585544a(param_1,&local_6c,local_68);
  local_58 = 0;
  local_48 = &PTR_LAB_149f61ae0;
  local_40 = FUN_1429f97d0;
  local_68[0] = &LAB_1400ed652;
  local_6c = 2;
  FUN_14585554e(param_1,&local_6c,local_68);
  local_58 = 0;
  local_48 = &PTR_LAB_149f61c50;
  local_40 = FUN_1429f9dfc;
  local_68[0] = &LAB_1400ed7ac;
  local_6c = 3;
  FUN_145855652(param_1,&local_6c,local_68);
  local_58 = 0;
  local_48 = &PTR_LAB_149f61dc0;
  local_40 = FUN_1429f9fd6;
  local_68[0] = &LAB_1400eec7c;
  local_6c = 4;
  FUN_145855756(param_1,&local_6c,local_68);
  local_58 = 0;
  local_48 = &PTR_LAB_149f61f30;
  local_40 = FUN_1429fa2d0;
  local_68[0] = &LAB_1400eebce;
  local_6c = 5;
  FUN_14585585a(param_1,&local_6c,local_68);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458552c0 FUN_1458552c0 body=234 status=ok
// SIG undefined FUN_1458552c0(void)

void FUN_1458552c0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78 [2];
  undefined8 local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  uVar1 = FUN_14001cc68(0x180,0x10);
  local_78[0] = *param_3;
  local_68[0] = 0;
  if (local_78[0] != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,local_68);
  }
  FUN_14585595e(uVar1,param_1,local_78);
  local_84 = *param_2;
  local_80 = uVar1;
  FUN_14124e114(param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458553c4 FUN_1458553c4 body=132 status=ok
// SIG undefined FUN_1458553c4(void)

void FUN_1458553c4(longlong param_1,int param_2)

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



// FUNCTION 14585544a FUN_14585544a body=234 status=ok
// SIG undefined FUN_14585544a(void)

void FUN_14585544a(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78 [2];
  undefined8 local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  uVar1 = FUN_14001cc68(0x180,0x10);
  local_78[0] = *param_3;
  local_68[0] = 0;
  if (local_78[0] != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,local_68);
  }
  FUN_145855a9a(uVar1,param_1,local_78);
  local_84 = *param_2;
  local_80 = uVar1;
  FUN_14124e114(param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585554e FUN_14585554e body=234 status=ok
// SIG undefined FUN_14585554e(void)

void FUN_14585554e(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78 [2];
  undefined8 local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  uVar1 = FUN_14001cc68(0x180,0x10);
  local_78[0] = *param_3;
  local_68[0] = 0;
  if (local_78[0] != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,local_68);
  }
  FUN_145855bd6(uVar1,param_1,local_78);
  local_84 = *param_2;
  local_80 = uVar1;
  FUN_14124e114(param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145855652 FUN_145855652 body=234 status=ok
// SIG undefined FUN_145855652(void)

void FUN_145855652(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78 [2];
  undefined8 local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  uVar1 = FUN_14001cc68(0x180,0x10);
  local_78[0] = *param_3;
  local_68[0] = 0;
  if (local_78[0] != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,local_68);
  }
  FUN_145855d12(uVar1,param_1,local_78);
  local_84 = *param_2;
  local_80 = uVar1;
  FUN_14124e114(param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145855756 FUN_145855756 body=234 status=ok
// SIG undefined FUN_145855756(void)

void FUN_145855756(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78 [2];
  undefined8 local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  uVar1 = FUN_14001cc68(0x180,0x10);
  local_78[0] = *param_3;
  local_68[0] = 0;
  if (local_78[0] != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,local_68);
  }
  FUN_145855f38(uVar1,param_1,local_78);
  local_84 = *param_2;
  local_80 = uVar1;
  FUN_14124e114(param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585585a FUN_14585585a body=234 status=ok
// SIG undefined FUN_14585585a(void)

void FUN_14585585a(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78 [2];
  undefined8 local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  uVar1 = FUN_14001cc68(0x180,0x10);
  local_78[0] = *param_3;
  local_68[0] = 0;
  if (local_78[0] != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,local_68);
  }
  FUN_145856074(uVar1,param_1,local_78);
  local_84 = *param_2;
  local_80 = uVar1;
  FUN_14124e114(param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14585595e FUN_14585595e body=316 status=ok
// SIG undefined FUN_14585595e(void)

undefined8 * FUN_14585595e(undefined8 *param_1,undefined1 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f616b0;
  lVar1 = *param_3;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 4);
  }
  FUN_1458561b0(param_1 + 10,*param_2);
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
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x29));
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x2e));
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return param_1;
}



// FUNCTION 145855a9a FUN_145855a9a body=316 status=ok
// SIG undefined FUN_145855a9a(void)

undefined8 * FUN_145855a9a(undefined8 *param_1,undefined1 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f61820;
  lVar1 = *param_3;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 4);
  }
  FUN_145856780(param_1 + 10,*param_2);
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
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x29));
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x2e));
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return param_1;
}



// FUNCTION 145855bd6 FUN_145855bd6 body=316 status=ok
// SIG undefined FUN_145855bd6(void)

undefined8 * FUN_145855bd6(undefined8 *param_1,undefined1 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f61990;
  lVar1 = *param_3;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 4);
  }
  FUN_1458563a0(param_1 + 10,*param_2);
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
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x29));
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x2e));
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return param_1;
}



// FUNCTION 145855d12 FUN_145855d12 body=316 status=ok
// SIG undefined FUN_145855d12(void)

undefined8 * FUN_145855d12(undefined8 *param_1,undefined1 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f61b00;
  lVar1 = *param_3;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 4);
  }
  FUN_145855e4e(param_1 + 10,*param_2);
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
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x29));
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x2e));
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return param_1;
}



// FUNCTION 145855e4e FUN_145855e4e body=234 status=ok
// SIG undefined FUN_145855e4e(void)

undefined8 * FUN_145855e4e(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == '\x02') {
    puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar1 = &PTR_FUN_149f61b90;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = puVar1 + 1;
    puVar1[6] = puVar1 + 3;
  }
  else if (param_2 == '\x04') {
    puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    FUN_146ea0ac2(puVar1);
  }
  else if (param_2 == '\x03') {
    puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    *puVar1 = &PTR_FUN_149f61bd0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
  }
  else if (param_2 == '\x01') {
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_149f61b50;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 145855f38 FUN_145855f38 body=316 status=ok
// SIG undefined FUN_145855f38(void)

undefined8 * FUN_145855f38(undefined8 *param_1,undefined1 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f61c70;
  lVar1 = *param_3;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 4);
  }
  FUN_145856590(param_1 + 10,*param_2);
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
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x29));
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x2e));
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return param_1;
}



// FUNCTION 145856074 FUN_145856074 body=316 status=ok
// SIG undefined FUN_145856074(void)

undefined8 * FUN_145856074(undefined8 *param_1,undefined1 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f61de0;
  lVar1 = *param_3;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 4);
  }
  FUN_14585698a(param_1 + 10,*param_2);
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
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x29));
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x2e));
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return param_1;
}


