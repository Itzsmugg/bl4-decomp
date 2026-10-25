// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148962342 FUN_148962342 body=38 status=ok
// SIG undefined FUN_148962342(void)

undefined8 FUN_148962342(undefined8 param_1,int param_2)

{
  FUN_145c4af56();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896236c FUN_14896236c body=45 status=ok
// SIG undefined FUN_14896236c(void)

longlong FUN_14896236c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458d399e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489623a2 FUN_1489623a2 body=29 status=ok
// SIG undefined FUN_1489623a2(void)

undefined8 FUN_1489623a2(longlong param_1,undefined8 param_2)

{
  FUN_145924da0(*(undefined8 *)(param_1 + 0x90));
  return param_2;
}



// FUNCTION 1489623c0 FUN_1489623c0 body=142 status=ok
// SIG undefined FUN_1489623c0(void)

void FUN_1489623c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  local_20 = *(undefined8 *)(param_1 + 0x70);
  local_18 = *(longlong **)(param_1 + 0x78);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_14896014a(uVar3,&local_20,param_2,param_3);
  plVar4 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148962452 FUN_148962452 body=196 status=ok
// SIG undefined FUN_148962452(void)

void FUN_148962452(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x88) & 0x10) == 0) {
    local_58 = *(undefined8 *)(param_1 + 0x70);
    local_50 = *(longlong **)(param_1 + 0x78);
    if (local_50 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      plVar3 = local_50;
    }
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    FUN_14895feb6(param_2,&local_48);
    FUN_14895fc34(&local_48,&local_58);
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
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148962588 FUN_148962588 body=38 status=ok
// SIG undefined FUN_148962588(void)

undefined8 FUN_148962588(undefined8 param_1,int param_2)

{
  FUN_140d8c2c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489625b8 FUN_1489625b8 body=60 status=ok
// SIG undefined FUN_1489625b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1489625b8(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + -8);
  FUN_140f0ad24(puVar1);
  if (param_2 != 0) {
    _DAT_14cb8aa74 = _DAT_14cb8aa74 + -1;
    *puVar1 = DAT_14cb8aa68;
    DAT_14cb8aa68 = puVar1;
  }
  return puVar1;
}



// FUNCTION 1489625f4 FUN_1489625f4 body=60 status=ok
// SIG undefined FUN_1489625f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1489625f4(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + -0x28);
  FUN_140f0ad24(puVar1);
  if (param_2 != 0) {
    _DAT_14cb8aa74 = _DAT_14cb8aa74 + -1;
    *puVar1 = DAT_14cb8aa68;
    DAT_14cb8aa68 = puVar1;
  }
  return puVar1;
}



// FUNCTION 148962630 FUN_148962630 body=69 status=ok
// SIG undefined FUN_148962630(void)

undefined8 * FUN_148962630(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b425788;
  FUN_141166f0f(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148962676 FUN_148962676 body=216 status=ok
// SIG undefined FUN_148962676(void)

void FUN_148962676(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *in_stack_00000028;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = (**(code **)(*in_stack_00000028 + 0x20))();
  if (lVar2 != 0) {
    lVar3 = FUN_1410758a4();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (iVar1 = *(int *)(param_1 + 0x10), (longlong)iVar1 != 0)) {
      lVar3 = *(longlong *)(param_1 + 8);
      lVar5 = 0;
      do {
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(lVar3 + 8 + lVar5) != 0) {
          puVar4 = *(undefined2 **)(lVar3 + lVar5);
        }
        FUN_1446f470e(&local_40,puVar4,1);
        FUN_141440cd6(lVar2 + 0x8c0,local_40);
        lVar5 = lVar5 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar5);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148962750 FUN_148962750 body=29 status=ok
// SIG undefined FUN_148962750(void)

undefined8 FUN_148962750(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896276e FUN_14896276e body=146 status=ok
// SIG undefined FUN_14896276e(void)

void FUN_14896276e(longlong param_1)

{
  longlong lVar1;
  longlong *in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined **local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &PTR_FUN_14b4257b0;
  local_20 = in_stack_00000028;
  lVar1 = DAT_14cb8aae8;
  if (DAT_14cb8aae8 == 0) {
    lVar1 = FUN_14570767c(&DAT_14cb8aae8,0);
  }
  FUN_1475578f4(in_stack_00000028 + 0x22,lVar1,&local_28);
  if (0.0 < *(float *)(param_1 + 8)) {
    (**(code **)(*in_stack_00000028 + 0xe0))(in_stack_00000028);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148962802 FUN_148962802 body=29 status=ok
// SIG undefined FUN_148962802(void)

undefined8 FUN_148962802(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148962820 FUN_148962820 body=49 status=ok
// SIG undefined FUN_148962820(void)

undefined8 * FUN_148962820(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))();
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  *param_2 = &PTR_FUN_14b4257c8;
  return param_2;
}



// FUNCTION 148962852 FUN_148962852 body=29 status=ok
// SIG undefined FUN_148962852(void)

undefined8 FUN_148962852(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148962870 FUN_148962870 body=57 status=ok
// SIG undefined FUN_148962870(void)

void FUN_148962870(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_145eff0c2(param_2);
  if (0.0 < *(float *)(param_1 + 8)) {
                    /* WARNING: Could not recover jumptable at 0x00014896289f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xe0))(plVar1,*(code **)(*plVar1 + 0xe0));
    return;
  }
  return;
}



// FUNCTION 1489628aa FUN_1489628aa body=275 status=ok
// SIG undefined FUN_1489628aa(void)

undefined8 * FUN_1489628aa(undefined8 *param_1)

{
  ulonglong _Size;
  longlong lVar1;
  ulonglong uVar2;
  void *_Src;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  
  uVar5 = 0x7fffffffffffffff;
  lVar1 = param_1[2];
  if (lVar1 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_146eb22ad();
  }
  _Size = lVar1 + 1;
  uVar2 = param_1[3];
  uVar4 = 0x8000000000000000;
  if ((-2 < lVar1) && (uVar4 = 0x8000000000000000, uVar2 <= (uVar2 >> 1 ^ 0x7fffffffffffffff))) {
    uVar5 = (uVar2 >> 1) + uVar2;
    if (uVar5 < (_Size | 0xf)) {
      uVar5 = _Size | 0xf;
    }
    uVar4 = uVar5 + 1;
    if (uVar4 < 0x1000) {
      if (uVar4 == 0) {
        uVar5 = 0xffffffffffffffff;
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)FUN_14001cc68(uVar4,0x10);
      }
      goto LAB_14896291b;
    }
  }
  puVar3 = (undefined1 *)FUN_140c1ca1d(uVar4);
LAB_14896291b:
  param_1[2] = _Size;
  param_1[3] = uVar5;
  if (uVar2 < 0x10) {
    *puVar3 = 0x2e;
    memcpy(puVar3 + 1,param_1,_Size);
  }
  else {
    _Src = (void *)*param_1;
    *puVar3 = 0x2e;
    memcpy(puVar3 + 1,_Src,_Size);
    pvVar6 = _Src;
    if ((uVar2 - 0xfff < 0xfffffffffffff000) &&
       (pvVar6 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(pvVar6);
  }
  *param_1 = puVar3;
  return param_1;
}



// FUNCTION 1489629be FUN_1489629be body=38 status=ok
// SIG undefined FUN_1489629be(void)

undefined8 FUN_1489629be(undefined8 param_1,int param_2)

{
  FUN_14026cc9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489629e5 FUN_1489629e5 body=26 status=ok
// SIG undefined FUN_1489629e5(void)

void FUN_1489629e5(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 148962a00 FUN_148962a00 body=147 status=ok
// SIG undefined FUN_148962a00(void)

void FUN_148962a00(longlong param_1,int param_2)

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



// FUNCTION 148962a94 FUN_148962a94 body=62 status=ok
// SIG undefined FUN_148962a94(void)

void FUN_148962a94(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148962ad2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 148962ad2 FUN_148962ad2 body=112 status=ok
// SIG undefined FUN_148962ad2(void)

ulonglong FUN_148962ad2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148962b0c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_148962b0c:
  return param_2 & 0xffffffff;
}



// FUNCTION 148962b42 FUN_148962b42 body=48 status=ok
// SIG undefined FUN_148962b42(void)

void FUN_148962b42(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 148962b72 FUN_148962b72 body=48 status=ok
// SIG undefined FUN_148962b72(void)

void FUN_148962b72(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 148962bb2 FUN_148962bb2 body=1 status=ok
// SIG undefined FUN_148962bb2(void)

void FUN_148962bb2(void)

{
  return;
}



// FUNCTION 148962bb4 FUN_148962bb4 body=29 status=ok
// SIG undefined FUN_148962bb4(void)

undefined8 FUN_148962bb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148962bd2 FUN_148962bd2 body=29 status=ok
// SIG undefined FUN_148962bd2(void)

undefined8 FUN_148962bd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148962bf0 FUN_148962bf0 body=589 status=ok
// SIG undefined FUN_148962bf0(void)

int * FUN_148962bf0(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*param_1 == -1) || (param_1[1] == -1)) ||
     (cVar7 = FUN_14602e2dc(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_148962c2e;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b425840;
  plVar8[2] = (longlong)&PTR_FUN_14b425858;
  plVar8[3] = *param_7;
  *(undefined4 *)(plVar8 + 6) = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(plVar8 + 4) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar4;
  *(undefined4 *)(plVar8 + 5) = uVar5;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = uVar6;
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_14602e298(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_148962ece;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar8 + 2;
  local_c8 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_148962dca;
    }
  }
  else {
LAB_148962dca:
    thunk_FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    thunk_FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_148962c2e:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148962e3e FUN_148962e3e body=80 status=ok
// SIG undefined FUN_148962e3e(void)

void FUN_148962e3e(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_148962ee6(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148962e90 FUN_148962e90 body=1 status=ok
// SIG undefined FUN_148962e90(void)

void FUN_148962e90(void)

{
  return;
}



// FUNCTION 148962e92 FUN_148962e92 body=29 status=ok
// SIG undefined FUN_148962e92(void)

undefined8 FUN_148962e92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148962eb0 FUN_148962eb0 body=29 status=ok
// SIG undefined FUN_148962eb0(void)

undefined8 FUN_148962eb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148962ee6 FUN_148962ee6 body=95 status=ok
// SIG undefined FUN_148962ee6(void)

void FUN_148962ee6(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(lVar1 + 0x20);
  lVar6 = 0;
  lVar5 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar5 = lVar6;
  }
  lVar4 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar4 = lVar6;
  }
  lVar3 = lVar3 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar3 = lVar6;
  }
  FUN_148962f46(param_1,lVar1,lVar3,lVar4,lVar5);
  return;
}



// FUNCTION 148962f46 FUN_148962f46 body=279 status=ok
// SIG undefined FUN_148962f46(void)

void FUN_148962f46(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar2 = (ulonglong)*(ushort *)(param_2 + 0xe);
  if (param_5 == 0) {
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
        uVar4 = (ulonglong)*(ushort *)(param_4 + 2 + uVar3 * 4);
        lVar1 = *(longlong *)*param_1;
        *(double *)(lVar1 + uVar4 * 0x18) =
             *(double *)(param_3 + uVar3 * 8) + *(double *)(lVar1 + uVar4 * 0x18);
        *(float *)(lVar1 + 8 + uVar4 * 0x18) = *(float *)(lVar1 + 8 + uVar4 * 0x18) + 1.0;
        *(float *)(lVar1 + 0xc + uVar4 * 0x18) =
             (float)((double)*(float *)(lVar1 + 0xc + uVar4 * 0x18) +
                    *(double *)(param_3 + uVar3 * 8));
        *(float *)(lVar1 + 0x10 + uVar4 * 0x18) = *(float *)(lVar1 + 0x10 + uVar4 * 0x18) + 1.0;
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
  }
  else if (uVar2 != 0) {
    uVar3 = 0;
    do {
      uVar4 = (ulonglong)*(ushort *)(param_4 + 2 + uVar3 * 4);
      lVar1 = *(longlong *)*param_1;
      fVar5 = (float)*(double *)(param_5 + uVar3 * 8);
      *(double *)(lVar1 + uVar4 * 0x18) =
           (double)fVar5 * *(double *)(param_3 + uVar3 * 8) + *(double *)(lVar1 + uVar4 * 0x18);
      *(float *)(lVar1 + 8 + uVar4 * 0x18) = fVar5 + *(float *)(lVar1 + 8 + uVar4 * 0x18);
      *(float *)(lVar1 + 0xc + uVar4 * 0x18) =
           (float)((double)*(float *)(lVar1 + 0xc + uVar4 * 0x18) + *(double *)(param_3 + uVar3 * 8)
                  );
      *(float *)(lVar1 + 0x10 + uVar4 * 0x18) = *(float *)(lVar1 + 0x10 + uVar4 * 0x18) + 1.0;
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



// FUNCTION 14896305e FUN_14896305e body=614 status=ok
// SIG undefined FUN_14896305e(void)

int * FUN_14896305e(ushort *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

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
  undefined1 **local_100;
  ushort *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  ushort **local_b8;
  ushort *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar3 = *param_1;
  if (uVar3 != 0xffff) {
    lVar8 = FUN_14482820e(param_3);
    if ((*(uint *)(lVar8 + 0x20) != (uint)uVar3 && (int)(uint)uVar3 <= (int)*(uint *)(lVar8 + 0x20))
       && ((*(uint *)(lVar8 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0)) {
      plVar9 = (longlong *)FUN_14001cc68(0x30,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14b425860;
      plVar9[2] = (longlong)&PTR_FUN_14b425878;
      plVar9[3] = *param_7;
      uVar5 = *(undefined4 *)(param_1 + 2);
      uVar6 = *(undefined4 *)(param_1 + 4);
      uVar7 = *(undefined4 *)(param_1 + 6);
      *(undefined4 *)(plVar9 + 4) = *(undefined4 *)param_1;
      *(undefined4 *)((longlong)plVar9 + 0x24) = uVar5;
      *(undefined4 *)(plVar9 + 5) = uVar6;
      *(undefined4 *)((longlong)plVar9 + 0x2c) = uVar7;
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
      FUN_1400abb7c(local_70,param_1 + 0x38);
      local_78 = 0;
      FUN_1400abb7c(local_98,param_1 + 0x4c);
      FUN_140dba9e6(local_70,*param_1);
      if (param_1[1] != 0xffff) {
        FUN_140dba9e6(local_70);
      }
      local_b8 = &local_b0;
      local_c0 = &LAB_14896338e;
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
      local_f8 = param_1 + 8;
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
          if (local_d4 != -1) goto LAB_148963222;
        }
      }
      else {
LAB_148963222:
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
      goto LAB_14896326a;
    }
  }
  *param_2 = -1;
LAB_14896326a:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489632c6 FUN_1489632c6 body=137 status=ok
// SIG undefined FUN_1489632c6(void)

void FUN_1489632c6(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  local_28 = (int)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)(local_30 + 0x60) + (longlong)local_28 * 8) + 0x20);
  uVar2 = (ulonglong)*(uint *)*param_2;
  uVar3 = (ulonglong)((uint *)*param_2)[1];
  lVar1 = lVar4 + uVar2;
  if (uVar2 == 0xffffffff) {
    lVar1 = 0;
  }
  lVar4 = lVar4 + uVar3;
  if (uVar3 == 0xffffffff) {
    lVar4 = 0;
  }
  FUN_1489633a6(param_3 + 8,&local_30,lVar1,lVar4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148963350 FUN_148963350 body=1 status=ok
// SIG undefined FUN_148963350(void)

void FUN_148963350(void)

{
  return;
}



// FUNCTION 148963352 FUN_148963352 body=29 status=ok
// SIG undefined FUN_148963352(void)

undefined8 FUN_148963352(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148963370 FUN_148963370 body=29 status=ok
// SIG undefined FUN_148963370(void)

undefined8 FUN_148963370(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489633a6 FUN_1489633a6 body=436 status=ok
// SIG undefined FUN_1489633a6(void)

void FUN_1489633a6(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  lVar5 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  FUN_141645258(param_2);
  if (*(ushort *)(lVar5 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar5 + 0x28);
    puVar14 = puVar9 + (ulonglong)*(ushort *)(lVar5 + 0xc) * 4;
    do {
      uVar2 = *(uint *)((longlong *)*param_1 + 1);
      lVar10 = *(longlong *)*param_1;
      uVar13 = 0;
      if (0 < (int)uVar2) {
        uVar13 = 0;
        uVar12 = uVar2;
        do {
          uVar1 = (uVar12 >> 1) + uVar13;
          if (*(ushort *)(lVar10 + (ulonglong)uVar1 * 0x20) < *(ushort *)((longlong)puVar9 + 0x1e))
          {
            uVar13 = uVar1 + (uVar12 & 1);
          }
          bVar7 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar7);
      }
      if (((int)uVar13 < (int)uVar2) &&
         (*(ushort *)(lVar10 + (ulonglong)uVar13 * 0x20) <= *(ushort *)((longlong)puVar9 + 0x1e))) {
        lVar10 = lVar10 + (ulonglong)uVar13 * 0x20;
        lVar11 = lVar10 + 8;
        if (lVar11 != 0) {
          if (*(ushort *)(lVar5 + 0xc) != 0) {
            puVar15 = *(undefined8 **)(lVar5 + 0x28);
            lVar8 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
            do {
              if (*(short *)((longlong)puVar15 + 0x1e) == *(short *)(lVar10 + 0x18))
              goto LAB_148963473;
              puVar15 = puVar15 + 4;
              lVar8 = lVar8 + -0x20;
            } while (lVar8 != 0);
          }
          puVar15 = (undefined8 *)0x0;
LAB_148963473:
          iVar3 = *(int *)(lVar5 + 0x14);
          if (iVar3 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(puVar15 + 1));
          }
          LOCK();
          *(int *)(puVar15 + 3) = *(int *)(puVar15 + 3) + 1;
          UNLOCK();
          uVar6 = *puVar15;
          iVar4 = *(int *)(lVar5 + 0x14);
          if (iVar4 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
          }
          LOCK();
          *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
          UNLOCK();
          FUN_14896355a(lVar5,*puVar9,uVar6,param_3,param_4,lVar11);
          if (puVar9 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + -1;
            UNLOCK();
            if (iVar4 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(puVar9 + 1));
            }
          }
          if (puVar15 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar15 + 3) = *(int *)(puVar15 + 3) + -1;
            UNLOCK();
            if (iVar3 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(puVar15 + 1));
            }
          }
        }
      }
      puVar9 = puVar9 + 4;
    } while (puVar9 != puVar14);
  }
  return;
}



// FUNCTION 14896355a FUN_14896355a body=489 status=ok
// SIG undefined FUN_14896355a(void)

void FUN_14896355a(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb8aaf4) && (FUN_144b3d300(&DAT_14cb8aaf4), DAT_14cb8aaf4 == -1)) {
    plVar1 = (longlong *)FUN_145b7cfa4();
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
    }
    DAT_14cb8aaf0 = *(undefined1 *)(lVar2 + 100);
    _Init_thread_footer(&DAT_14cb8aaf4);
  }
  uVar3 = (ulonglong)*(ushort *)(param_1 + 0xe);
  if (param_5 == 0) {
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        uVar5 = (ulonglong)*(ushort *)(param_4 + 2 + uVar4 * 4);
        lVar2 = *param_6;
        *(double *)(lVar2 + uVar5 * 0x18) =
             (*(double *)(param_2 + uVar4 * 8) - *(double *)(param_3 + uVar4 * 8)) +
             *(double *)(lVar2 + uVar5 * 0x18);
        *(float *)(lVar2 + 8 + uVar5 * 0x18) = *(float *)(lVar2 + 8 + uVar5 * 0x18) + 1.0;
        *(float *)(lVar2 + 0xc + uVar5 * 0x18) =
             (float)((double)*(float *)(lVar2 + 0xc + uVar5 * 0x18) +
                    (*(double *)(param_2 + uVar4 * 8) - *(double *)(param_3 + uVar4 * 8)));
        *(float *)(lVar2 + 0x10 + uVar5 * 0x18) = *(float *)(lVar2 + 0x10 + uVar5 * 0x18) + 1.0;
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  else if (uVar3 != 0) {
    uVar4 = 0;
    do {
      uVar5 = (ulonglong)*(ushort *)(param_4 + 2 + uVar4 * 4);
      lVar2 = *param_6;
      fVar6 = (float)*(double *)(param_5 + uVar4 * 8);
      *(double *)(lVar2 + uVar5 * 0x18) =
           (double)fVar6 * (*(double *)(param_2 + uVar4 * 8) - *(double *)(param_3 + uVar4 * 8)) +
           *(double *)(lVar2 + uVar5 * 0x18);
      *(float *)(lVar2 + 8 + uVar5 * 0x18) = fVar6 + *(float *)(lVar2 + 8 + uVar5 * 0x18);
      *(float *)(lVar2 + 0xc + uVar5 * 0x18) =
           (float)((double)*(float *)(lVar2 + 0xc + uVar5 * 0x18) +
                  (*(double *)(param_2 + uVar4 * 8) - *(double *)(param_3 + uVar4 * 8)));
      *(float *)(lVar2 + 0x10 + uVar5 * 0x18) = *(float *)(lVar2 + 0x10 + uVar5 * 0x18) + 1.0;
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  return;
}



// FUNCTION 148963744 FUN_148963744 body=547 status=ok
// SIG undefined FUN_148963744(void)

int * FUN_148963744(ushort *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  ushort *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  ushort **local_b8;
  ushort *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar3 = *param_1;
  if (uVar3 != 0xffff) {
    lVar5 = FUN_14482820e(param_3);
    if ((*(uint *)(lVar5 + 0x20) != (uint)uVar3 && (int)(uint)uVar3 <= (int)*(uint *)(lVar5 + 0x20))
       && ((*(uint *)(lVar5 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0)) {
      plVar6 = (longlong *)FUN_1489639e0(param_1,param_7,param_8,param_9);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
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
      local_50 = 0;
      FUN_1400abb7c(local_70,param_1 + 0x38);
      local_78 = 0;
      FUN_1400abb7c(local_98,param_1 + 0x4c);
      FUN_140dba9e6(local_70,*param_1);
      local_b8 = &local_b0;
      local_c0 = &LAB_148963abc;
      local_a0 = *(byte *)(param_6 + 8);
      local_b0 = param_1;
      (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_100 = &local_c0;
      local_108 = local_a8;
      local_f8 = param_1 + 8;
      local_f0 = local_70;
      local_e8 = local_98;
      local_d0 = plVar6 + 2;
      local_c8 = plVar6;
      FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
      iVar4 = *param_2;
      if (*param_2 == -1) {
        if ((*(byte *)(param_5 + 1) & 4) != 0) {
          FUN_145c7137e(param_4,&local_d4);
          *param_2 = local_d4;
          iVar4 = local_d4;
          if (local_d4 != -1) goto LAB_1489638f4;
        }
      }
      else {
LAB_1489638f4:
        thunk_FUN_1407ce0e2(param_4,iVar4,0xffffffff);
        thunk_FUN_1407cdf34(param_4,*param_2,0xffffffff);
      }
      if (plVar6 != (longlong *)0x0) {
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
      goto LAB_14896379d;
    }
  }
  *param_2 = -1;
LAB_14896379d:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148963968 FUN_148963968 body=119 status=ok
// SIG undefined FUN_148963968(void)

void FUN_148963968(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  int local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_1;
  local_18 = (int)param_1[1];
  local_14 = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar1 = 0;
  if ((ulonglong)*(uint *)*param_2 != 0xffffffff) {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_20 + 0x60) + (longlong)local_18 * 8) + 0x20) +
            (ulonglong)*(uint *)*param_2;
  }
  FUN_148963ad4(param_3 + 8,&local_20,lVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489639e0 FUN_1489639e0 body=158 status=ok
// SIG undefined FUN_1489639e0(void)

undefined8 *
FUN_1489639e0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar5[1] = &DAT_100000001;
  *puVar5 = &PTR_LAB_14b425880;
  puVar5[2] = &PTR_FUN_14b425898;
  lVar2 = *param_2;
  lVar3 = *param_4;
  puVar5[3] = *param_3;
  lVar6 = FUN_14009d2a0();
  uVar1 = *(ushort *)(lVar3 + 0x12);
  puVar5[4] = (ulonglong)*(ushort *)(lVar3 + 0x10) * 4 + *(longlong *)(lVar6 + 0x10);
  *(uint *)(puVar5 + 5) = (uint)uVar1;
  puVar5[6] = *(undefined8 *)(lVar2 + 0x248);
  *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(lVar3 + 0xc);
  uVar4 = param_1[1];
  puVar5[8] = *param_1;
  puVar5[9] = uVar4;
  return puVar5;
}



// FUNCTION 148963a80 FUN_148963a80 body=29 status=ok
// SIG undefined FUN_148963a80(void)

undefined8 FUN_148963a80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148963a9e FUN_148963a9e body=29 status=ok
// SIG undefined FUN_148963a9e(void)

undefined8 FUN_148963a9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148963ad4 FUN_148963ad4 body=496 status=ok
// SIG undefined FUN_148963ad4(void)

void FUN_148963ad4(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_a8 [36];
  int local_84;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_141645258(param_2);
  if (0 < *(int *)(param_1 + 2)) {
    lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
    lVar6 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 4);
      uVar1 = *(ushort *)(param_1[1] + lVar6 * 4);
      FUN_148959046(*param_1,&local_60,uVar1);
      if ((((uVar1 != 0xffff && (uVar2 >> ((uint)lVar6 & 0x1f) & 1) != 0) &&
           ((int)(uint)uVar1 < *(int *)(lVar4 + 0x20))) &&
          ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0)) &&
         (((CONCAT44(uStack_5c,local_60) != 0 || (CONCAT44(uStack_54,uStack_58) != 0)) ||
          (local_50 != 0)))) {
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          plVar7 = *(longlong **)(lVar3 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(ushort *)((longlong)plVar7 + 0x1e) == uVar1) goto LAB_148963be1;
            plVar7 = plVar7 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        plVar7 = (longlong *)0x0;
LAB_148963be1:
        local_80 = param_1[3];
        local_84 = *(int *)(lVar3 + 0x14);
        if (local_84 == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
        }
        LOCK();
        *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
        UNLOCK();
        lVar8 = *plVar7;
        local_68 = local_50;
        local_78 = local_60;
        uStack_74 = uStack_5c;
        uStack_70 = uStack_58;
        uStack_6c = uStack_54;
        if (*(short *)(lVar3 + 0xe) != 0) {
          uVar5 = 0;
          do {
            FUN_148958f15(&local_78,*(undefined2 *)(param_3 + 2 + uVar5 * 4),lVar8);
            uVar5 = uVar5 + 1;
            lVar8 = lVar8 + 8;
          } while (uVar5 < *(ushort *)(lVar3 + 0xe));
        }
        if (plVar7 != (longlong *)0x0) {
          uVar5 = plVar7[2];
          if ((ulonglong)plVar7[2] < local_80) {
            uVar5 = local_80;
          }
          plVar7[2] = uVar5;
          LOCK();
          *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
          UNLOCK();
          if (local_84 == 1) {
            ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 2));
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148963cc6 FUN_148963cc6 body=609 status=ok
// SIG undefined FUN_148963cc6(void)

int * FUN_148963cc6(ushort *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7,longlong *param_8)

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
  undefined1 **local_100;
  ushort *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  ushort **local_b8;
  ushort *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar3 = *param_1;
  if (uVar3 != 0xffff) {
    lVar8 = FUN_14482820e(param_3);
    if ((*(uint *)(lVar8 + 0x20) != (uint)uVar3 && (int)(uint)uVar3 <= (int)*(uint *)(lVar8 + 0x20))
       && ((*(uint *)(lVar8 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0)) {
      plVar9 = (longlong *)FUN_14001cc68(0x38,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14b4258a0;
      plVar9[2] = (longlong)&PTR_FUN_14b4258b8;
      lVar8 = *param_8;
      plVar9[3] = *param_7;
      plVar9[4] = lVar8;
      uVar5 = *(undefined4 *)(param_1 + 2);
      uVar6 = *(undefined4 *)(param_1 + 4);
      uVar7 = *(undefined4 *)(param_1 + 6);
      *(undefined4 *)(plVar9 + 5) = *(undefined4 *)param_1;
      *(undefined4 *)((longlong)plVar9 + 0x2c) = uVar5;
      *(undefined4 *)(plVar9 + 6) = uVar6;
      *(undefined4 *)((longlong)plVar9 + 0x34) = uVar7;
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
      FUN_1400abb7c(local_70,param_1 + 0x38);
      local_78 = 0;
      FUN_1400abb7c(local_98,param_1 + 0x4c);
      FUN_140dba9e6(local_70,*param_1);
      local_b8 = &local_b0;
      local_c0 = &LAB_148963fde;
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
      local_f8 = param_1 + 8;
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
          if (local_d4 != -1) goto LAB_148963e85;
        }
      }
      else {
LAB_148963e85:
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
      goto LAB_148963ecd;
    }
  }
  *param_2 = -1;
LAB_148963ecd:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148963f28 FUN_148963f28 body=119 status=ok
// SIG undefined FUN_148963f28(void)

void FUN_148963f28(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  int local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_1;
  local_18 = (int)param_1[1];
  local_14 = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar1 = 0;
  if ((ulonglong)*(uint *)*param_2 != 0xffffffff) {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_20 + 0x60) + (longlong)local_18 * 8) + 0x20) +
            (ulonglong)*(uint *)*param_2;
  }
  FUN_148963ff6(param_3 + 8,&local_20,lVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148963fa0 FUN_148963fa0 body=1 status=ok
// SIG undefined FUN_148963fa0(void)

void FUN_148963fa0(void)

{
  return;
}



// FUNCTION 148963fa2 FUN_148963fa2 body=29 status=ok
// SIG undefined FUN_148963fa2(void)

undefined8 FUN_148963fa2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148963fc0 FUN_148963fc0 body=29 status=ok
// SIG undefined FUN_148963fc0(void)

undefined8 FUN_148963fc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148963ff6 FUN_148963ff6 body=544 status=ok
// SIG undefined FUN_148963ff6(void)

void FUN_148963ff6(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8aafc) {
    FUN_144b3d300(&DAT_14cb8aafc);
    if (DAT_14cb8aafc == -1) {
      plVar6 = (longlong *)FUN_145b7cfa4();
      lVar7 = plVar6[0x22];
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 1000))(plVar6);
        lVar7 = plVar6[0x22];
      }
      DAT_14cb8aaf8 = *(undefined1 *)(lVar7 + 100);
      _Init_thread_footer(&DAT_14cb8aafc);
    }
  }
  lVar7 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  lVar3 = FUN_141645258(param_2);
  lVar10 = 0;
  lVar4 = FUN_14009d2a0();
  do {
    uVar1 = *(ushort *)(lVar4 + 0xbc + lVar10 * 2);
    if (((uVar1 != 0xffff) &&
        (uVar9 = (uint)uVar1,
        *(uint *)(lVar3 + 0x20) != uVar9 && (int)(uint)uVar1 <= (int)*(uint *)(lVar3 + 0x20))) &&
       ((*(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0)) {
      FUN_148959046(*param_1,&local_60,uVar9);
      if (((local_60 != 0) || (local_58 != 0)) || (local_50 != 0)) {
        if (*(ushort *)(lVar7 + 0xc) != 0) {
          plVar6 = *(longlong **)(lVar7 + 0x28);
          lVar5 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
          do {
            if (*(ushort *)((longlong)plVar6 + 0x1e) == uVar1) goto LAB_1489640ec;
            plVar6 = plVar6 + 4;
            lVar5 = lVar5 + -0x20;
          } while (lVar5 != 0);
        }
        plVar6 = (longlong *)0x0;
LAB_1489640ec:
        local_78 = param_1[1];
        iVar2 = *(int *)(lVar7 + 0x14);
        local_70 = param_1;
        if (iVar2 == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
        }
        LOCK();
        *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
        UNLOCK();
        if (*(short *)(lVar7 + 0xe) != 0) {
          lVar5 = *plVar6;
          uVar8 = 0;
          do {
            FUN_148958f15(&local_60,*(undefined2 *)(local_68 + 2 + uVar8 * 4),lVar5);
            uVar8 = uVar8 + 1;
            lVar5 = lVar5 + 8;
          } while (uVar8 < *(ushort *)(lVar7 + 0xe));
        }
        param_1 = local_70;
        if (plVar6 != (longlong *)0x0) {
          uVar8 = plVar6[2];
          if ((ulonglong)plVar6[2] < local_78) {
            uVar8 = local_78;
          }
          plVar6[2] = uVar8;
          LOCK();
          *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
          UNLOCK();
          if (iVar2 == 1) {
            ReleaseSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
          }
        }
      }
    }
    lVar10 = lVar10 + 1;
    if (lVar10 == 9) {
      if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 148964218 FUN_148964218 body=119 status=ok
// SIG undefined FUN_148964218(void)

undefined4 * FUN_148964218(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 4,param_3 + 4);
  *(undefined8 *)(param_1 + 0x24) = 0;
  FUN_1400abb7c(param_1 + 0x1c,param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x2e) = 0;
  FUN_1400abb7c(param_1 + 0x26,param_3 + 0x26);
  *(longlong *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 148964290 FUN_148964290 body=259 status=ok
// SIG undefined FUN_148964290(void)

void FUN_148964290(undefined8 param_1,longlong *param_2,short *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_78,param_3[1]);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_3) goto LAB_1489642ee;
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_1489642ee:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 1));
  }
  LOCK();
  *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
  UNLOCK();
  local_50 = *puVar4;
  local_48 = local_78;
  local_40 = local_70;
  local_38 = local_68;
  local_88 = (undefined4)*param_2;
  uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_80 = (undefined4)param_2[1];
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_60 = puVar4;
  local_58 = iVar1;
  FUN_148964394(param_1);
  FUN_1476971b0(&local_60);
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148964394 FUN_148964394 body=268 status=ok
// SIG undefined FUN_148964394(void)

void FUN_148964394(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  FUN_141645258(param_2);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar2 + 0x28);
    puVar10 = puVar9 + (ulonglong)*(ushort *)(lVar2 + 0xc) * 4;
    do {
      uVar1 = *(uint *)((longlong *)*param_1 + 1);
      lVar5 = *(longlong *)*param_1;
      if ((int)uVar1 < 1) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        uVar6 = (ulonglong)uVar1;
        uVar7 = uVar1;
        do {
          uVar6 = uVar6 >> 1;
          uVar8 = (uint)uVar6 + (int)uVar4;
          if (*(ushort *)(lVar5 + (ulonglong)uVar8 * 0x18) < *(ushort *)((longlong)puVar9 + 0x1e)) {
            uVar4 = (ulonglong)(uVar8 + (uVar7 & 1));
          }
          bVar3 = 1 < uVar7;
          uVar7 = (uint)uVar6;
        } while (bVar3);
      }
      if ((((int)uVar4 < (int)uVar1) &&
          (*(ushort *)(lVar5 + uVar4 * 0x18) <= *(ushort *)((longlong)puVar9 + 0x1e))) &&
         (lVar5 = lVar5 + uVar4 * 0x18 + 8, lVar5 != 0)) {
        if (*(int *)(lVar2 + 0x14) != 0) {
          AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
        }
        FUN_1489644a0(lVar2,*puVar9,param_3,param_4,lVar5);
        if (*(int *)(lVar2 + 0x14) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(puVar9 + 1));
        }
      }
      puVar9 = puVar9 + 4;
    } while (puVar9 != puVar10);
  }
  return;
}



// FUNCTION 1489644a0 FUN_1489644a0 body=512 status=ok
// SIG undefined FUN_1489644a0(void)

void FUN_1489644a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb8ab04) && (FUN_144b3d300(&DAT_14cb8ab04), DAT_14cb8ab04 == -1)) {
    plVar3 = (longlong *)FUN_145b7cfa4();
    lVar4 = plVar3[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      lVar4 = plVar3[0x22];
    }
    DAT_14cb8ab00 = *(undefined1 *)(lVar4 + 100);
    _Init_thread_footer(&DAT_14cb8ab04);
  }
  uVar6 = (ulonglong)*(ushort *)(param_1 + 0xe);
  if (param_4 == 0) {
    if (uVar6 != 0) {
      uVar5 = 0;
      do {
        uVar1 = *(ushort *)(param_3 + 2 + uVar5 * 4);
        if ((int)param_5[1] <= (int)(uint)uVar1) {
          FUN_14895acaa(param_5,uVar1 + 1,0);
          uVar1 = *(ushort *)(param_3 + 2 + uVar5 * 4);
        }
        lVar4 = *param_5;
        uVar2 = (ulonglong)uVar1;
        *(double *)(lVar4 + uVar2 * 0x18) =
             *(double *)(param_2 + uVar5 * 8) + *(double *)(lVar4 + uVar2 * 0x18);
        *(float *)(lVar4 + 8 + uVar2 * 0x18) = *(float *)(lVar4 + 8 + uVar2 * 0x18) + 1.0;
        *(float *)(lVar4 + 0xc + uVar2 * 0x18) =
             (float)((double)*(float *)(lVar4 + 0xc + uVar2 * 0x18) +
                    *(double *)(param_2 + uVar5 * 8));
        *(float *)(lVar4 + 0x10 + uVar2 * 0x18) = *(float *)(lVar4 + 0x10 + uVar2 * 0x18) + 1.0;
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
    }
  }
  else if (uVar6 != 0) {
    uVar5 = 0;
    do {
      uVar1 = *(ushort *)(param_3 + 2 + uVar5 * 4);
      if ((int)param_5[1] <= (int)(uint)uVar1) {
        FUN_14895acaa(param_5,uVar1 + 1,0);
        uVar1 = *(ushort *)(param_3 + 2 + uVar5 * 4);
      }
      lVar4 = *param_5;
      uVar2 = (ulonglong)uVar1;
      fVar7 = (float)*(double *)(param_4 + uVar5 * 8);
      *(double *)(lVar4 + uVar2 * 0x18) =
           (double)fVar7 * *(double *)(param_2 + uVar5 * 8) + *(double *)(lVar4 + uVar2 * 0x18);
      *(float *)(lVar4 + 8 + uVar2 * 0x18) = fVar7 + *(float *)(lVar4 + 8 + uVar2 * 0x18);
      *(float *)(lVar4 + 0xc + uVar2 * 0x18) =
           (float)((double)*(float *)(lVar4 + 0xc + uVar2 * 0x18) + *(double *)(param_2 + uVar5 * 8)
                  );
      *(float *)(lVar4 + 0x10 + uVar2 * 0x18) = *(float *)(lVar4 + 0x10 + uVar2 * 0x18) + 1.0;
      uVar5 = uVar5 + 1;
    } while (uVar6 != uVar5);
  }
  return;
}



// FUNCTION 1489646a0 FUN_1489646a0 body=119 status=ok
// SIG undefined FUN_1489646a0(void)

undefined4 * FUN_1489646a0(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 4,param_3 + 4);
  *(undefined8 *)(param_1 + 0x24) = 0;
  FUN_1400abb7c(param_1 + 0x1c,param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x2e) = 0;
  FUN_1400abb7c(param_1 + 0x26,param_3 + 0x26);
  *(longlong *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 148964718 FUN_148964718 body=259 status=ok
// SIG undefined FUN_148964718(void)

void FUN_148964718(undefined8 param_1,longlong *param_2,short *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_78,param_3[1]);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_3) goto LAB_148964776;
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_148964776:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 1));
  }
  LOCK();
  *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
  UNLOCK();
  local_50 = *puVar4;
  local_48 = local_78;
  local_40 = local_70;
  local_38 = local_68;
  local_88 = (undefined4)*param_2;
  uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_80 = (undefined4)param_2[1];
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_60 = puVar4;
  local_58 = iVar1;
  FUN_1489633a6(param_1);
  FUN_1476971b0(&local_60);
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14896481c FUN_14896481c body=119 status=ok
// SIG undefined FUN_14896481c(void)

undefined4 * FUN_14896481c(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 4,param_3 + 4);
  *(undefined8 *)(param_1 + 0x24) = 0;
  FUN_1400abb7c(param_1 + 0x1c,param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x2e) = 0;
  FUN_1400abb7c(param_1 + 0x26,param_3 + 0x26);
  *(longlong *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 148964894 FUN_148964894 body=186 status=ok
// SIG undefined FUN_148964894(void)

void FUN_148964894(undefined8 param_1,longlong *param_2,short *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_3) goto LAB_1489648cb;
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_1489648cb:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 1));
  }
  LOCK();
  *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
  UNLOCK();
  local_38 = (undefined4)*param_2;
  uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_30 = (undefined4)param_2[1];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_148964950(param_1,&local_38,*puVar4);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + -1;
    UNLOCK();
    if (iVar1 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(puVar4 + 1));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148964950 FUN_148964950 body=270 status=ok
// SIG undefined FUN_148964950(void)

void FUN_148964950(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  lVar3 = FUN_141645258(param_2);
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = param_1;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1449c0562(&local_50);
    if (iStack_3c < *(int *)(local_48 + 0x18)) {
      do {
        uVar1 = *(ushort *)(**(longlong **)(param_1 + 0x20) + 0x14 + (longlong)iStack_3c * 0x58);
        if (((uVar1 != 0xffff) &&
            (*(uint *)(lVar3 + 0x20) != (uint)uVar1 &&
             (int)(uint)uVar1 <= (int)*(uint *)(lVar3 + 0x20))) &&
           ((*(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0)) {
          local_58 = param_3;
          FUN_148964a60(param_1,uVar2,lVar3,
                        **(longlong **)(param_1 + 0x20) + (longlong)iStack_3c * 0x58);
          break;
        }
        local_40 = local_40 & ~local_50._4_4_;
        FUN_1449c0562(&local_50);
      } while (iStack_3c < *(int *)(local_48 + 0x18));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148964a60 FUN_148964a60 body=613 status=ok
// SIG undefined FUN_148964a60(void)

void FUN_148964a60(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb8ab0c) && (FUN_144b3d300(&DAT_14cb8ab0c), DAT_14cb8ab0c == -1)) {
    plVar5 = (longlong *)FUN_145b7cfa4();
    lVar6 = plVar5[0x22];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 1000))(plVar5);
      lVar6 = plVar5[0x22];
    }
    DAT_14cb8ab08 = *(undefined1 *)(lVar6 + 100);
    _Init_thread_footer(&DAT_14cb8ab0c);
  }
  uVar1 = *(ushort *)(param_4 + 0x12);
  if ((ulonglong)uVar1 != 0) {
    uVar2 = *(ushort *)(param_4 + 0x10);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    uVar7 = 0;
    do {
      if ((*(uint *)(param_4 + 0xc) >> ((uint)uVar7 & 0x1f) & 1) != 0) {
        uVar3 = *(ushort *)((ulonglong)uVar2 * 4 + lVar6 + uVar7 * 4);
        if ((((uVar3 != 0xffff) &&
             (uVar8 = (uint)uVar3,
             *(uint *)(param_3 + 0x20) != uVar8 &&
             (int)(uint)uVar3 <= (int)*(uint *)(param_3 + 0x20))) &&
            ((*(uint *)(param_3 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0)) &&
           (((local_78 = param_1, FUN_148959046(*(undefined8 *)(param_1 + 0x28),&local_60,uVar8),
             local_60 != 0 || (local_58 != 0)) || (param_1 = local_78, local_50 != 0)))) {
          if (*(ushort *)(param_2 + 0xc) != 0) {
            plVar5 = *(longlong **)(param_2 + 0x28);
            lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
            do {
              if (*(ushort *)((longlong)plVar5 + 0x1e) == uVar3) goto LAB_148964b95;
              plVar5 = plVar5 + 4;
              lVar4 = lVar4 + -0x20;
            } while (lVar4 != 0);
          }
          plVar5 = (longlong *)0x0;
LAB_148964b95:
          local_70 = *(ulonglong *)(local_78 + 0x30);
          local_7c = *(int *)(param_2 + 0x14);
          if (local_7c == 1) {
            AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
          }
          LOCK();
          *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
          UNLOCK();
          if (*(short *)(param_2 + 0xe) != 0) {
            lVar4 = *plVar5;
            uVar9 = 0;
            local_68 = param_2;
            do {
              FUN_148958f15(&local_60,*(undefined2 *)(param_5 + 2 + uVar9 * 4),lVar4);
              uVar9 = uVar9 + 1;
              lVar4 = lVar4 + 8;
              param_2 = local_68;
            } while (uVar9 < *(ushort *)(local_68 + 0xe));
          }
          param_1 = local_78;
          if (plVar5 != (longlong *)0x0) {
            uVar9 = plVar5[2];
            if ((ulonglong)plVar5[2] < local_70) {
              uVar9 = local_70;
            }
            plVar5[2] = uVar9;
            LOCK();
            *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
            UNLOCK();
            if (local_7c == 1) {
              ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
              param_1 = local_78;
            }
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148964cc6 FUN_148964cc6 body=119 status=ok
// SIG undefined FUN_148964cc6(void)

undefined4 * FUN_148964cc6(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 4,param_3 + 4);
  *(undefined8 *)(param_1 + 0x24) = 0;
  FUN_1400abb7c(param_1 + 0x1c,param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x2e) = 0;
  FUN_1400abb7c(param_1 + 0x26,param_3 + 0x26);
  *(longlong *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 148964d3e FUN_148964d3e body=186 status=ok
// SIG undefined FUN_148964d3e(void)

void FUN_148964d3e(undefined8 param_1,longlong *param_2,short *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_3) goto LAB_148964d75;
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_148964d75:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 1));
  }
  LOCK();
  *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
  UNLOCK();
  local_38 = (undefined4)*param_2;
  uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_30 = (undefined4)param_2[1];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_148963ff6(param_1,&local_38,*puVar4);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + -1;
    UNLOCK();
    if (iVar1 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(puVar4 + 1));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148964dfa FUN_148964dfa body=218 status=ok
// SIG undefined FUN_148964dfa(void)

ushort * FUN_148964dfa(longlong *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ushort *puVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar6 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar5 = uVar2;
    do {
      uVar1 = (uVar5 >> 1) + uVar7;
      if (*(ushort *)(lVar6 + (ulonglong)uVar1 * 0x18) < *param_2) {
        uVar7 = uVar1 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(ushort *)(lVar6 + (ulonglong)uVar7 * 0x18) <= *param_2)) {
      puVar8 = (ushort *)(lVar6 + (ulonglong)uVar7 * 0x18);
      FUN_145ab7d19(puVar8,1);
      goto LAB_148964ea3;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_148964ed4(param_1,uVar2);
    lVar6 = *param_1;
  }
  lVar4 = (ulonglong)uVar7 * 0x18;
  memmove((void *)(lVar6 + lVar4 + 0x18),(void *)(lVar6 + lVar4),(ulonglong)(uVar2 - uVar7) * 0x18);
  puVar8 = (ushort *)(lVar4 + *param_1);
LAB_148964ea3:
  *puVar8 = *param_2;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  return puVar8 + 4;
}



// FUNCTION 148964ed4 FUN_148964ed4 body=147 status=ok
// SIG undefined FUN_148964ed4(void)

void FUN_148964ed4(longlong param_1,int param_2)

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



// FUNCTION 148964f68 FUN_148964f68 body=231 status=ok
// SIG undefined FUN_148964f68(void)

ushort * FUN_148964f68(longlong *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ushort *puVar7;
  longlong lVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  if ((int)uVar2 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar4 = uVar2;
    do {
      uVar1 = (uVar4 >> 1) + uVar5;
      if (*(ushort *)(lVar8 + (ulonglong)uVar1 * 0x20) < *param_2) {
        uVar5 = uVar1 + (uVar4 & 1);
      }
      bVar3 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar3);
    if (((int)uVar5 < (int)uVar2) && (*(ushort *)(lVar8 + (ulonglong)uVar5 * 0x20) <= *param_2)) {
      puVar7 = (ushort *)(lVar8 + (ulonglong)uVar5 * 0x20);
      FUN_145ab7d4a(puVar7,1);
      goto LAB_148965014;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_148965050(param_1,uVar2);
    lVar8 = *param_1;
  }
  lVar6 = (ulonglong)uVar5 * 0x20;
  memmove((void *)(lVar8 + lVar6 + 0x20),(void *)(lVar8 + lVar6),(ulonglong)(uVar2 - uVar5) << 5);
  puVar7 = (ushort *)(lVar6 + *param_1);
LAB_148965014:
  *puVar7 = *param_2;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0xffff;
  return puVar7 + 4;
}



// FUNCTION 148965050 FUN_148965050 body=132 status=ok
// SIG undefined FUN_148965050(void)

void FUN_148965050(longlong param_1,int param_2)

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



// FUNCTION 1489650d6 FUN_1489650d6 body=166 status=ok
// SIG undefined FUN_1489650d6(void)

void FUN_1489650d6(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896517e FUN_14896517e body=170 status=ok
// SIG undefined FUN_14896517e(void)

undefined8 FUN_14896517e(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *param_1;
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
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
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



// FUNCTION 148965228 FUN_148965228 body=299 status=ok
// SIG undefined FUN_148965228(void)

void FUN_148965228(short *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  short *local_50;
  ulonglong *local_48;
  short local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = -1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if (param_1[3] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[3];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[4] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[4];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148965354 FUN_148965354 body=184 status=ok
// SIG undefined FUN_148965354(void)

void FUN_148965354(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[9] + 8));
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001489653fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14896540c FUN_14896540c body=193 status=ok
// SIG undefined FUN_14896540c(void)

undefined8 * FUN_14896540c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[7] = 0x10000000000;
  param_1[0xc] = 0x10000000000;
  param_1[0x13] = 0x10000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0x10000000000;
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 3,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 4);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 3,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489654ce FUN_1489654ce body=113 status=ok
// SIG undefined FUN_1489654ce(void)

undefined8 FUN_1489654ce(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
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
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 148965540 FUN_148965540 body=264 status=ok
// SIG undefined FUN_148965540(void)

void FUN_148965540(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  short *local_50;
  ulonglong *local_48;
  short local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = -1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *(short *)(param_1 + 2);
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *(short *)(param_1 + 4);
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if (*(short *)(param_1 + 6) != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = *(short *)(param_1 + 6);
    FUN_147552f5e(param_2,param_3);
  }
  if (*(short *)(param_1 + 8) != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = *(short *)(param_1 + 8);
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896564a FUN_14896564a body=153 status=ok
// SIG undefined FUN_14896564a(void)

void FUN_14896564a(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x58) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x50) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001489656d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1489656e4 FUN_1489656e4 body=29 status=ok
// SIG undefined FUN_1489656e4(void)

undefined8 FUN_1489656e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896571c FUN_14896571c body=29 status=ok
// SIG undefined FUN_14896571c(void)

bool FUN_14896571c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 14896573a FUN_14896573a body=26 status=ok
// SIG undefined FUN_14896573a(void)

bool FUN_14896573a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 148965754 FUN_148965754 body=24 status=ok
// SIG undefined FUN_148965754(void)

bool FUN_148965754(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 != 0;
}



// FUNCTION 148965778 FUN_148965778 body=109 status=ok
// SIG undefined FUN_148965778(void)

void FUN_148965778(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b425990;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  *puVar1 = &PTR_FUN_14b425920;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar2;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 1489657e6 FUN_1489657e6 body=109 status=ok
// SIG undefined FUN_1489657e6(void)

void FUN_1489657e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b425990;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  *puVar1 = &PTR_FUN_14b425920;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar2;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 148965854 FUN_148965854 body=142 status=ok
// SIG undefined FUN_148965854(void)

void FUN_148965854(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  _LIST_ENTRY *p_Var7;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b425990;
  p_Var7 = *(_LIST_ENTRY **)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var7;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = uVar2;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  *(undefined ***)p_Var1 = &PTR_FUN_14b425920;
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar2;
  p_Var1->SpareWORD = (short)((uint)uVar2 >> 0x10);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar6;
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489658d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489658e2 FUN_1489658e2 body=91 status=ok
// SIG undefined FUN_1489658e2(void)

void FUN_1489658e2(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  local_28 = *(undefined4 *)(param_1 + 0x10);
  uStack_24 = *(undefined4 *)(param_1 + 0x14);
  uStack_20 = *(undefined4 *)(param_1 + 0x18);
  uStack_1c = *(undefined4 *)(param_1 + 0x1c);
  (**(code **)(param_1 + 0x30))(*(int *)(param_1 + 0x38) + lVar1,*(undefined8 *)(param_1 + 8));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896593e FUN_14896593e body=166 status=ok
// SIG undefined FUN_14896593e(void)

bool FUN_14896593e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x28,&local_38,0);
    lVar3 = CONCAT44(uStack_34,local_38);
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 != 0) {
    local_38 = *(undefined4 *)(param_1 + 0x10);
    uStack_34 = *(undefined4 *)(param_1 + 0x14);
    uStack_30 = *(undefined4 *)(param_1 + 0x18);
    uStack_2c = *(undefined4 *)(param_1 + 0x1c);
    (**(code **)(param_1 + 0x30))(*(int *)(param_1 + 0x38) + lVar2,*(undefined8 *)(param_1 + 8));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489659e8 FUN_1489659e8 body=31 status=ok
// SIG undefined FUN_1489659e8(void)

undefined8 FUN_1489659e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148965a1c FUN_148965a1c body=85 status=ok
// SIG undefined FUN_148965a1c(void)

void FUN_148965a1c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425a90;
  return;
}



// FUNCTION 148965a72 FUN_148965a72 body=118 status=ok
// SIG undefined FUN_148965a72(void)

void FUN_148965a72(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b425a90;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148965ad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148965ae8 FUN_148965ae8 body=101 status=ok
// SIG undefined FUN_148965ae8(void)

undefined8 FUN_148965ae8(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145dddf4a(local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148965b4e FUN_148965b4e body=45 status=ok
// SIG undefined FUN_148965b4e(void)

longlong FUN_148965b4e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145abc096(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148965b7c FUN_148965b7c body=45 status=ok
// SIG undefined FUN_148965b7c(void)

longlong FUN_148965b7c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145abc096(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148965baa FUN_148965baa body=54 status=ok
// SIG undefined FUN_148965baa(void)

longlong FUN_148965baa(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148965be0 FUN_148965be0 body=290 status=ok
// SIG undefined FUN_148965be0(void)

void FUN_148965be0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar6);
    }
    iVar8 = 0;
    iVar9 = 0;
    bVar5 = *plVar2 == lVar6;
    do {
      lVar7 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar6 = lVar7;
      iVar4 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar4;
        if (lVar12 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_14689c22e(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar5 == (plVar2[lVar6] == lVar3));
      if (bVar5 == false) {
        if (iVar8 != iVar9) {
          memmove(plVar2 + iVar8,plVar2 + lVar7,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar5 = (bool)(bVar5 ^ 1);
    } while (lVar6 < lVar12);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 148965d02 FUN_148965d02 body=128 status=ok
// SIG undefined FUN_148965d02(void)

void FUN_148965d02(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 148965d82 FUN_148965d82 body=222 status=ok
// SIG undefined FUN_148965d82(void)

void FUN_148965d82(longlong param_1,int param_2)

{
  void *_Src;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_147526062();
  if (iVar1 != param_2) {
    plVar2 = *(longlong **)(param_1 + 0x18);
    local_48 = (void *)0x0;
    local_40 = *(int *)(*plVar2 + 8 + (longlong)param_2 * 0x10);
    lVar3 = (longlong)local_40;
    _Src = *(void **)(*plVar2 + (longlong)param_2 * 0x10);
    if (lVar3 == 0) {
      local_3c = 0;
    }
    else {
      FUN_1446dd670(&local_48,local_40,0);
      memcpy(local_48,_Src,lVar3 * 2);
      plVar2 = *(longlong **)(param_1 + 0x18);
    }
    FUN_148965f14(plVar2,param_2);
    FUN_148965e62(*(undefined8 *)(param_1 + 0x18),&local_48,iVar1);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148965e62 FUN_148965e62 body=177 status=ok
// SIG undefined FUN_148965e62(void)

int FUN_148965e62(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_148965f6c(param_1,iVar2);
  }
  lVar4 = (longlong)param_3 * 0x10;
  memmove((void *)(*param_1 + lVar4 + 0x10),(void *)(*param_1 + lVar4),
          (ulonglong)(uint)(iVar2 - param_3) << 4);
  lVar3 = *param_1;
  puVar1 = (undefined8 *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + lVar4) = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(lVar3 + 8 + lVar4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  return param_3;
}



// FUNCTION 148965f14 FUN_148965f14 body=87 status=ok
// SIG undefined FUN_148965f14(void)

void FUN_148965f14(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + (longlong)(int)param_2 * 0x10) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar2) << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148965f6c FUN_148965f6c body=132 status=ok
// SIG undefined FUN_148965f6c(void)

void FUN_148965f6c(longlong param_1,int param_2)

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



// FUNCTION 148965ff2 FUN_148965ff2 body=215 status=ok
// SIG undefined FUN_148965ff2(void)

ulonglong FUN_148965ff2(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  ulonglong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_147525f8a();
  FUN_148965e62(*(undefined8 *)(param_1 + 0x18),param_3,uVar2);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x10) != 0)) {
    lVar3 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar1 + 8) + 8 + lVar3) != 0) &&
         (*(longlong *)(*(longlong *)(lVar1 + 8) + lVar3) != 0)) {
        local_38 = (ulonglong *)0x0;
        uStack_30 = 1;
        FUN_14753e66a(&local_38,0);
        *local_38 = (ulonglong)uVar2 | param_2 << 0x20;
        FUN_14753e6f0(*(longlong *)(param_1 + 0x10) + 8,*(longlong *)(param_1 + 0x10),&local_38);
        if (local_38 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(lVar1 + 0x10) * 0x10 != lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (ulonglong)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489660ca FUN_1489660ca body=298 status=ok
// SIG undefined FUN_1489660ca(void)

void FUN_1489660ca(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  if (~param_2 + iVar4 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),
            (longlong)(int)(~param_2 + iVar4) << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  FUN_148965f14(param_1[3],param_2);
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489661f6 FUN_1489661f6 body=48 status=ok
// SIG undefined FUN_1489661f6(void)

void FUN_1489661f6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148966226 FUN_148966226 body=136 status=ok
// SIG undefined FUN_148966226(void)

void FUN_148966226(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x118,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14b215af0;
  FUN_1489662ae(param_1 + 4,param_2 + 0x20);
  return;
}



// FUNCTION 1489662ae FUN_1489662ae body=192 status=ok
// SIG undefined FUN_1489662ae(void)

undefined8 * FUN_1489662ae(undefined8 *param_1,longlong param_2)

{
  FUN_1475affea();
  *param_1 = &PTR_FUN_14b217ce0;
  param_1[10] = 0;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined8 *)(param_2 + 0x58) = 0;
  param_1[0xc] = 0;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_2 + 0x68) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return param_1;
}



// FUNCTION 14896636e FUN_14896636e body=207 status=ok
// SIG undefined FUN_14896636e(void)

void FUN_14896636e(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_147526062();
  if (uVar2 != param_2) {
    plVar4 = *(longlong **)(param_1 + 0x18);
    lVar1 = *plVar4;
    lVar5 = (longlong)(int)param_2 * 0x10;
    local_48 = *(longlong *)(lVar1 + lVar5);
    if ((DAT_14c950c29 == '\x01') && (local_48 != 0)) {
      FUN_14689c22e();
      plVar4 = *(longlong **)(param_1 + 0x18);
    }
    local_40 = *(undefined1 *)(lVar1 + lVar5 + 8);
    iVar3 = (int)plVar4[1];
    if (~param_2 + iVar3 != 0) {
      memmove((void *)(*plVar4 + lVar5),(void *)(*plVar4 + lVar5 + 0x10),
              (longlong)(int)(~param_2 + iVar3) << 4);
      iVar3 = (int)plVar4[1];
    }
    *(int *)(plVar4 + 1) = iVar3 + -1;
    FUN_14896643e(*(undefined8 *)(param_1 + 0x18),&local_48,uVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896643e FUN_14896643e body=143 status=ok
// SIG undefined FUN_14896643e(void)

int FUN_14896643e(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1489664ce(param_1,iVar1);
  }
  lVar4 = (longlong)param_3 * 0x10;
  memmove((void *)(*param_1 + lVar4 + 0x10),(void *)(*param_1 + lVar4),
          (ulonglong)(uint)(iVar1 - param_3) << 4);
  lVar2 = *param_1;
  lVar3 = *param_2;
  *(longlong *)(lVar2 + lVar4) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  *(char *)(lVar2 + lVar4 + 8) = (char)param_2[1];
  return param_3;
}



// FUNCTION 1489664ce FUN_1489664ce body=132 status=ok
// SIG undefined FUN_1489664ce(void)

void FUN_1489664ce(longlong param_1,int param_2)

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



// FUNCTION 148966554 FUN_148966554 body=345 status=ok
// SIG undefined FUN_148966554(void)

void FUN_148966554(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  iVar6 = iVar4 + ~param_2;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),(longlong)iVar6 << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  plVar3 = (longlong *)param_1[3];
  iVar4 = (int)plVar3[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 0x10),
            (void *)((longlong)(int)param_2 * 0x10 + *plVar3 + 0x10),(longlong)iVar6 << 4);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489666ae FUN_1489666ae body=48 status=ok
// SIG undefined FUN_1489666ae(void)

void FUN_1489666ae(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1489666de FUN_1489666de body=197 status=ok
// SIG undefined FUN_1489666de(void)

undefined8 * FUN_1489666de(undefined8 *param_1,undefined8 param_2)

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
  lVar4 = FUN_1464f2172();
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



// FUNCTION 1489667a4 FUN_1489667a4 body=136 status=ok
// SIG undefined FUN_1489667a4(void)

void FUN_1489667a4(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x130,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14b2171d0;
  FUN_147613664(param_1 + 4,param_2 + 0x20);
  return;
}



// FUNCTION 14896682c FUN_14896682c body=411 status=ok
// SIG undefined FUN_14896682c(void)

void FUN_14896682c(longlong *param_1,uint param_2)

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
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
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
        puVar5 = puVar5 + -6;
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



// FUNCTION 1489669c8 FUN_1489669c8 body=291 status=ok
// SIG undefined FUN_1489669c8(void)

undefined4 * FUN_1489669c8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  short sVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  short *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406feabe(param_1,local_48);
  puVar2 = (undefined8 *)param_3[1];
  sVar1 = *(short *)*param_3;
  *local_40 = sVar1;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[8] = -1;
  local_40[9] = -1;
  local_4c = local_48[0];
  local_58 = 0;
  cVar4 = FUN_1406fea2a(param_1,(int)sVar1,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & (int)sVar1;
      *(uint *)(local_40 + 10) = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1406feca4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148966aec FUN_148966aec body=114 status=ok
// SIG undefined FUN_148966aec(void)

void FUN_148966aec(longlong *param_1,int param_2)

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



// FUNCTION 148966b5e FUN_148966b5e body=107 status=ok
// SIG undefined FUN_148966b5e(void)

void FUN_148966b5e(longlong *param_1,longlong *param_2)

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
    FUN_148966bca(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 148966bca FUN_148966bca body=132 status=ok
// SIG undefined FUN_148966bca(void)

void FUN_148966bca(longlong param_1,int param_2)

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



// FUNCTION 148966c50 FUN_148966c50 body=114 status=ok
// SIG undefined FUN_148966c50(void)

void FUN_148966c50(longlong *param_1,int param_2)

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



// FUNCTION 148966cc2 FUN_148966cc2 body=114 status=ok
// SIG undefined FUN_148966cc2(void)

void FUN_148966cc2(longlong *param_1,int param_2)

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



// FUNCTION 148966d34 FUN_148966d34 body=114 status=ok
// SIG undefined FUN_148966d34(void)

void FUN_148966d34(longlong *param_1,int param_2)

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



// FUNCTION 148966da6 FUN_148966da6 body=64 status=ok
// SIG undefined FUN_148966da6(void)

void FUN_148966da6(void)

{
  if (DAT_14cb8a72c != 0) {
    DAT_14cb8a72c = 0;
    FUN_1446f8d3c(&DAT_14cb8a720,DAT_14cb8a728,0,8,8);
  }
  return;
}



// FUNCTION 148966de6 FUN_148966de6 body=128 status=ok
// SIG undefined FUN_148966de6(void)

void FUN_148966de6(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb8a730;
  if (DAT_14cb8a764 != 0) {
    *(int *)(DAT_14cb8a730 + (longlong)DAT_14cb8a760 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb8a764) {
    iVar4 = DAT_14cb8a760;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cb8a764 = DAT_14cb8a764 + 1;
  puVar3 = &DAT_14cb8a740;
  if (DAT_14cb8a750 != (undefined4 *)0x0) {
    puVar3 = DAT_14cb8a750;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb8a760 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 148966e66 FUN_148966e66 body=76 status=ok
// SIG undefined FUN_148966e66(void)

void FUN_148966e66(void)

{
  int iVar1;
  
  iVar1 = FUN_148966eb2(DAT_14cb8a728,DAT_14cb8a72c);
  if (iVar1 != DAT_14cb8a72c) {
    DAT_14cb8a72c = iVar1;
    FUN_1446f8d3c(&DAT_14cb8a720,DAT_14cb8a728,iVar1,8,8);
  }
  return;
}



// FUNCTION 148966eb2 FUN_148966eb2 body=93 status=ok
// SIG undefined FUN_148966eb2(void)

ulonglong FUN_148966eb2(uint param_1,uint param_2)

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



// FUNCTION 148966f10 FUN_148966f10 body=89 status=ok
// SIG undefined FUN_148966f10(void)

void FUN_148966f10(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x20 + *param_1);
  FUN_14026ccd7(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x20 + (longlong)_Dst),(longlong)iVar2 << 5);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148966f6a FUN_148966f6a body=114 status=ok
// SIG undefined FUN_148966f6a(void)

void FUN_148966f6a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 148966fdc FUN_148966fdc body=110 status=ok
// SIG undefined FUN_148966fdc(void)

void FUN_148966fdc(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_145ca6d8c(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1460b218e(param_1);
    return;
  }
  FUN_14896704a(param_1);
  FUN_145ca6d8c(param_1,param_2);
  return;
}



// FUNCTION 14896704a FUN_14896704a body=322 status=ok
// SIG undefined FUN_14896704a(void)

void FUN_14896704a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 14896718e FUN_14896718e body=31 status=ok
// SIG undefined FUN_14896718e(void)

undefined8 FUN_14896718e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489671c8 FUN_1489671c8 body=93 status=ok
// SIG undefined FUN_1489671c8(void)

void FUN_1489671c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425da0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148967226 FUN_148967226 body=93 status=ok
// SIG undefined FUN_148967226(void)

void FUN_148967226(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425da0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148967284 FUN_148967284 body=126 status=ok
// SIG undefined FUN_148967284(void)

void FUN_148967284(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b425da0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489672f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148967302 FUN_148967302 body=40 status=ok
// SIG undefined FUN_148967302(void)

void FUN_148967302(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148967327. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14896732a FUN_14896732a body=31 status=ok
// SIG undefined FUN_14896732a(void)

undefined8 FUN_14896732a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148967364 FUN_148967364 body=93 status=ok
// SIG undefined FUN_148967364(void)

void FUN_148967364(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425e10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489673c2 FUN_1489673c2 body=93 status=ok
// SIG undefined FUN_1489673c2(void)

void FUN_1489673c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425e10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148967420 FUN_148967420 body=126 status=ok
// SIG undefined FUN_148967420(void)

void FUN_148967420(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca6c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b425e10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014896748f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14896749e FUN_14896749e body=48 status=ok
// SIG undefined FUN_14896749e(void)

void FUN_14896749e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489674cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1489674ce FUN_1489674ce body=31 status=ok
// SIG undefined FUN_1489674ce(void)

undefined8 FUN_1489674ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148967508 FUN_148967508 body=93 status=ok
// SIG undefined FUN_148967508(void)

void FUN_148967508(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425e80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148967566 FUN_148967566 body=93 status=ok
// SIG undefined FUN_148967566(void)

void FUN_148967566(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425e80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489675c4 FUN_1489675c4 body=126 status=ok
// SIG undefined FUN_1489675c4(void)

void FUN_1489675c4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b425e80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148967633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148967642 FUN_148967642 body=40 status=ok
// SIG undefined FUN_148967642(void)

void FUN_148967642(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148967667. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14896766a FUN_14896766a body=31 status=ok
// SIG undefined FUN_14896766a(void)

undefined8 FUN_14896766a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489676a4 FUN_1489676a4 body=93 status=ok
// SIG undefined FUN_1489676a4(void)

void FUN_1489676a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425ef0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148967702 FUN_148967702 body=93 status=ok
// SIG undefined FUN_148967702(void)

void FUN_148967702(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425ef0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148967760 FUN_148967760 body=126 status=ok
// SIG undefined FUN_148967760(void)

void FUN_148967760(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca5b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b425ef0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489677cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489677de FUN_1489677de body=133 status=ok
// SIG undefined FUN_1489677de(void)

void FUN_1489677de(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined2 local_38 [4];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  pcVar1 = *(code **)(param_1 + 0x20);
  local_38[0] = *param_3;
  local_30 = *(longlong *)(param_3 + 4);
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  (*pcVar1)(uVar2,param_2,local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148967864 FUN_148967864 body=31 status=ok
// SIG undefined FUN_148967864(void)

undefined8 FUN_148967864(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896789e FUN_14896789e body=29 status=ok
// SIG undefined FUN_14896789e(void)

bool FUN_14896789e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489678bc FUN_1489678bc body=26 status=ok
// SIG undefined FUN_1489678bc(void)

bool FUN_1489678bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489678d6 FUN_1489678d6 body=93 status=ok
// SIG undefined FUN_1489678d6(void)

void FUN_1489678d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90a240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425f60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148967934 FUN_148967934 body=93 status=ok
// SIG undefined FUN_148967934(void)

void FUN_148967934(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90a240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425f60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148967992 FUN_148967992 body=126 status=ok
// SIG undefined FUN_148967992(void)

void FUN_148967992(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a90a240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b425f60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148967a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148967a10 FUN_148967a10 body=48 status=ok
// SIG undefined FUN_148967a10(void)

void FUN_148967a10(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148967a3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148967a40 FUN_148967a40 body=163 status=ok
// SIG undefined FUN_148967a40(void)

bool FUN_148967a40(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 148967ae4 FUN_148967ae4 body=31 status=ok
// SIG undefined FUN_148967ae4(void)

undefined8 FUN_148967ae4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148967b1e FUN_148967b1e body=29 status=ok
// SIG undefined FUN_148967b1e(void)

bool FUN_148967b1e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148967b3c FUN_148967b3c body=93 status=ok
// SIG undefined FUN_148967b3c(void)

void FUN_148967b3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90c0e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425fd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148967b9a FUN_148967b9a body=93 status=ok
// SIG undefined FUN_148967b9a(void)

void FUN_148967b9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90c0e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425fd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148967bf8 FUN_148967bf8 body=126 status=ok
// SIG undefined FUN_148967bf8(void)

void FUN_148967bf8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a90c0e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b425fd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148967c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148967c76 FUN_148967c76 body=58 status=ok
// SIG undefined FUN_148967c76(void)

void FUN_148967c76(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148967cad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148967cb0 FUN_148967cb0 body=173 status=ok
// SIG undefined FUN_148967cb0(void)

bool FUN_148967cb0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148967d5e FUN_148967d5e body=48 status=ok
// SIG undefined FUN_148967d5e(void)

void FUN_148967d5e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148967d8e FUN_148967d8e body=175 status=ok
// SIG undefined FUN_148967d8e(void)

undefined8 FUN_148967d8e(undefined8 param_1)

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
  local_b8 = FUN_14594bf84();
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



// FUNCTION 148967e44 FUN_148967e44 body=64 status=ok
// SIG undefined FUN_148967e44(void)

undefined8 * FUN_148967e44(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b426100;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148967e88 FUN_148967e88 body=81 status=ok
// SIG undefined FUN_148967e88(void)

undefined8 FUN_148967e88(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148967ee0 FUN_148967ee0 body=89 status=ok
// SIG undefined FUN_148967ee0(void)

bool FUN_148967ee0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148967f2b;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148967f2b:
  return lVar6 == param_2;
}



// FUNCTION 148967f56 FUN_148967f56 body=118 status=ok
// SIG undefined FUN_148967f56(void)

void FUN_148967f56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426100;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148967fcc FUN_148967fcc body=118 status=ok
// SIG undefined FUN_148967fcc(void)

void FUN_148967fcc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426100;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148968042 FUN_148968042 body=156 status=ok
// SIG undefined FUN_148968042(void)

void FUN_148968042(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b426100;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489680ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489680de FUN_1489680de body=104 status=ok
// SIG undefined FUN_1489680de(void)

void FUN_1489680de(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014896812b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014896813c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148968146 FUN_148968146 body=101 status=ok
// SIG undefined FUN_148968146(void)

ulonglong FUN_148968146(longlong param_1)

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
LAB_1489681a0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1489681a0;
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



// FUNCTION 1489681ac FUN_1489681ac body=1 status=ok
// SIG undefined FUN_1489681ac(void)

void FUN_1489681ac(void)

{
  return;
}



// FUNCTION 1489681ae FUN_1489681ae body=29 status=ok
// SIG undefined FUN_1489681ae(void)

undefined8 FUN_1489681ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489681cc FUN_1489681cc body=9 status=ok
// SIG undefined FUN_1489681cc(void)

void FUN_1489681cc(longlong param_1)

{
  FUN_1489684c0(param_1 + 0x10);
  return;
}



// FUNCTION 1489681d6 FUN_1489681d6 body=29 status=ok
// SIG undefined FUN_1489681d6(void)

undefined8 FUN_1489681d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489681f4 FUN_1489681f4 body=38 status=ok
// SIG undefined FUN_1489681f4(void)

undefined8 FUN_1489681f4(undefined8 param_1,int param_2)

{
  FUN_1489684c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896821a FUN_14896821a body=72 status=ok
// SIG undefined FUN_14896821a(void)

undefined8 FUN_14896821a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143e22008();
  if (((cVar1 == '\0') || (cVar1 = FUN_14895f000(param_1,param_2), cVar1 == '\0')) ||
     ((*(char *)(param_1 + 0xd4) == '\x02' && (cVar1 = FUN_14895fbc4(param_1), cVar1 == '\0')))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 148968262 FUN_148968262 body=74 status=ok
// SIG undefined FUN_148968262(void)

void FUN_148968262(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b426080;
  plVar3 = (longlong *)param_1[0x13];
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
  FUN_140f97a52(param_1);
  return;
}



// FUNCTION 1489682ac FUN_1489682ac body=167 status=ok
// SIG undefined FUN_1489682ac(void)

void FUN_1489682ac(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148968327;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148968327;
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
LAB_148968327:
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
                    /* WARNING: Could not recover jumptable at 0x000148968347. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148968354 FUN_148968354 body=195 status=ok
// SIG undefined FUN_148968354(void)

undefined8 * FUN_148968354(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  plVar3 = (longlong *)param_3[1];
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_14895ebb4(param_1,param_2,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_14895ebb4(param_1);
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
  }
  *param_1 = &PTR_FUN_14b426250;
  param_1[0x33] = *(undefined8 *)(*param_3 + 0xe0);
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(*param_3 + 0xe8);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148968418 FUN_148968418 body=9 status=ok
// SIG undefined FUN_148968418(void)

void FUN_148968418(longlong param_1)

{
  FUN_1489684c0(param_1 + 0x10);
  return;
}



// FUNCTION 148968422 FUN_148968422 body=29 status=ok
// SIG undefined FUN_148968422(void)

undefined8 FUN_148968422(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148968440 FUN_148968440 body=38 status=ok
// SIG undefined FUN_148968440(void)

undefined8 FUN_148968440(undefined8 param_1,int param_2)

{
  FUN_1489684c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896846c FUN_14896846c body=84 status=ok
// SIG undefined FUN_14896846c(void)

ulonglong FUN_14896846c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 unaff_RBX;
  bool bVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x198);
  bVar3 = *(longlong *)(param_2 + 0x24) == lVar1;
  if (bVar3 && lVar1 != 0) {
    cVar2 = FUN_143e22008(param_1);
    if (cVar2 == '\0') {
      FUN_140f97840(param_1);
    }
    if (*(char *)(param_1 + 0x1a0) == '\x01') {
      FUN_14895fbc4(param_1);
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3 && lVar1 != 0) & 0xffffffff;
}



// FUNCTION 1489684c0 FUN_1489684c0 body=118 status=ok
// SIG undefined FUN_1489684c0(void)

void FUN_1489684c0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b4255a0;
  FUN_145859e92(param_1 + 0x1b);
  if (*(char *)((longlong)param_1 + 0xc9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc9) = 0;
  }
  plVar3 = (longlong *)param_1[0x18];
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
  if (*(char *)((longlong)param_1 + 0xa9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xa9) = 0;
  }
  FUN_148968262(param_1);
  return;
}



// FUNCTION 148968536 FUN_148968536 body=167 status=ok
// SIG undefined FUN_148968536(void)

void FUN_148968536(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489685b1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489685b1;
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
LAB_1489685b1:
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
                    /* WARNING: Could not recover jumptable at 0x0001489685d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489685de FUN_1489685de body=124 status=ok
// SIG undefined FUN_1489685de(void)

undefined8 * FUN_1489685de(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  FUN_140f2a246();
  *param_1 = &PTR_LAB_14b426370;
  param_1[0x12] = *param_3;
  lVar1 = param_3[1];
  param_1[0x13] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_14b4262f0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x191) = 0;
  *(undefined2 *)((longlong)param_1 + 0x193) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  return param_1;
}



// FUNCTION 14896865a FUN_14896865a body=9 status=ok
// SIG undefined FUN_14896865a(void)

void FUN_14896865a(longlong param_1)

{
  FUN_148968e46(param_1 + 0x10);
  return;
}



// FUNCTION 148968664 FUN_148968664 body=29 status=ok
// SIG undefined FUN_148968664(void)

undefined8 FUN_148968664(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148968682 FUN_148968682 body=38 status=ok
// SIG undefined FUN_148968682(void)

undefined8 FUN_148968682(undefined8 param_1,int param_2)

{
  FUN_148968e46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489686a8 FUN_1489686a8 body=29 status=ok
// SIG undefined FUN_1489686a8(void)

undefined8 FUN_1489686a8(longlong param_1,undefined8 param_2)

{
  FUN_145924da0(*(undefined8 *)(param_1 + 0x90));
  return param_2;
}



// FUNCTION 1489686c6 FUN_1489686c6 body=143 status=ok
// SIG undefined FUN_1489686c6(void)

void FUN_1489686c6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x90);
  local_20 = *(undefined8 *)(param_1 + 0x70);
  local_18 = *(longlong **)(param_1 + 0x78);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_20,param_2,param_3);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148968786 FUN_148968786 body=146 status=ok
// SIG undefined FUN_148968786(void)

void FUN_148968786(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x88) & 0x10) == 0) {
    plVar3 = *(longlong **)(param_1 + 0x90);
    local_20 = *(undefined8 *)(param_1 + 0x70);
    local_18 = *(longlong **)(param_1 + 0x78);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2,&local_20);
    plVar3 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896881a FUN_14896881a body=1070 status=ok
// SIG undefined FUN_14896881a(void)

bool FUN_14896881a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  code **ppcVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined1 local_190 [8];
  undefined8 local_188;
  longlong local_180;
  undefined1 *local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  longlong local_128;
  undefined4 local_120;
  code *local_118;
  longlong *local_110;
  byte local_d8 [56];
  undefined1 local_a0 [64];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_148969746(param_1,0,param_2);
  if (*(char *)(param_1 + 0x191) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_1c8);
  }
  local_190[0] = 0;
  local_188 = *(undefined8 *)(param_1 + 0x170);
  local_180 = *(longlong *)(param_1 + 0x178);
  if (local_180 != 0) {
    LOCK();
    *(int *)(local_180 + 8) = *(int *)(local_180 + 8) + 1;
    UNLOCK();
  }
  lVar5 = FUN_1489608c4(*(undefined8 *)(param_1 + 0x90),param_2);
  if (lVar5 != 0) {
    FUN_1459670f6(&local_118,lVar5);
    ppcVar2 = (code **)(param_1 + 0xb0);
    if (&local_118 != ppcVar2) {
      FUN_145966f58(ppcVar2,&local_118);
    }
    FUN_144a2da94(local_a0);
    FUN_144a2da94(local_d8);
    FUN_144a2da94(&local_118);
    cVar4 = FUN_145966fd4(ppcVar2,*(undefined8 *)(*param_2 + 0x40),*(char *)(param_1 + 0xe9) != '\0'
                         );
    if (cVar4 != '\0') {
      *(undefined1 *)(param_1 + 0x160) = 0;
      plVar7 = *(longlong **)(*param_2 + 0x40);
      if (plVar7 != (longlong *)0x0) {
        uVar6 = FUN_1407ca880();
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar6);
        if (plVar7 != (longlong *)0x0) {
          uVar6 = FUN_1407ca880();
          plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
          if (((plVar8 != (longlong *)0x0 && plVar7 != plVar8) &&
              (*(longlong *)(*param_2 + 0x40) != 0)) && (lVar9 = FUN_1447210f0(), lVar9 != 0)) {
            lVar9 = FUN_144a88394(lVar9);
            bVar11 = false;
            if (lVar9 == 0) goto LAB_1489688d3;
            local_148 = 0;
            local_140 = 0;
            local_168 = 0;
            uStack_160 = 0;
            local_13c = 0xffffffff00000080;
            local_134 = 0;
            local_128 = 0;
            local_120 = 0;
            FUN_140fee7ad(param_2,&local_168);
            uVar6 = (**(code **)(*plVar8 + 0x50))(plVar8);
            if ((*(longlong *)(param_2[2] + 0x28) == 0) ||
               ((~*(byte *)(*(longlong *)(param_2[2] + 0x28) + 0x88) & 0x18) != 0)) {
              uVar10 = 3;
            }
            else {
              uVar10 = 0;
            }
            local_1a0 = CONCAT31(local_1a0._1_3_,1);
            local_1a8 = &local_168;
            FUN_14096dfee(uVar6,&local_118,lVar5,uVar10);
            plVar8 = local_110;
            *(code **)(param_1 + 0xa0) = local_118;
            local_118 = (code *)0x0;
            plVar7 = *(longlong **)(param_1 + 0xa8);
            if (local_110 == plVar7) {
LAB_148968ad0:
              plVar7 = local_110;
              if (local_110 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_110 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 == 0) {
                  (**(code **)*local_110)(local_110);
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
            else {
              local_110 = (longlong *)0x0;
              *(longlong **)(param_1 + 0xa8) = plVar8;
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                plVar8 = plVar7 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 == 0) {
                  (**(code **)*plVar7)(plVar7);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
                goto LAB_148968ad0;
              }
            }
            lVar5 = *(longlong *)(param_1 + 0xa0);
            bVar11 = lVar5 != 0;
            if (bVar11) {
              local_178 = &LAB_1489698a0;
              local_170 = 0;
              FUN_14896925c(&local_118,param_1);
              FUN_140ebcfd8(lVar5 + 0x18,&local_178,&local_118);
              FUN_1449db362(&local_118);
              *(undefined1 **)(param_1 + 0x188) = local_178;
              uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0xb0);
              local_118 = FUN_148969a42;
              local_110 = (longlong *)((ulonglong)local_110 & 0xffffffff00000000);
              FUN_1489698c0(&local_178,param_1,&local_118);
              local_118 = (code *)0x0;
              local_110 = (longlong *)((ulonglong)local_110 & 0xffffffff00000000);
              FUN_14487d8d8(&local_118,&local_178);
              local_d8[0] = 1;
              local_1a0 = 0xbf800000;
              local_1a8 = (undefined8 *)((ulonglong)local_1a8 & 0xffffffffffffff00);
              FUN_1406f3fee(lVar9,param_1 + 0x180,&local_118,uVar3);
              (*(code *)(&PTR_LAB_14a1c87a0)[local_d8[0]])(&local_118);
              FUN_1449db362(&local_178);
              local_190[0] = 1;
            }
            local_120 = 0;
            if (local_128 != 0) {
              FUN_1400020a8();
            }
            FUN_140333f4e(&local_168);
            goto LAB_1489688d3;
          }
        }
      }
    }
  }
  bVar11 = false;
LAB_1489688d3:
  FUN_148969b00(local_190);
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar11;
}



// FUNCTION 148968c70 FUN_148968c70 body=235 status=ok
// SIG undefined FUN_148968c70(void)

void FUN_148968c70(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14896a4ee();
  if (*(char *)(param_1 + 0x193) == '\x01') {
    if (*(char *)(param_1 + 0x192) == '\x01') {
      puVar3 = &DAT_14cb8a9e0;
    }
    else {
      if (*(char *)(param_1 + 0x192) != '\0') goto LAB_148968d3d;
      puVar3 = &DAT_14cb8a9e8;
    }
    local_28 = 1;
    local_30 = 4;
    local_48 = 0;
    puVar2 = &local_48;
    FUN_1410f7fb4(param_1,param_2,puVar3,puVar2);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_30) {
        puVar2 = (undefined4 *)CONCAT44(uStack_44,local_48);
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(CONCAT44(uStack_44,local_48));
    }
  }
LAB_148968d3d:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148968d5c FUN_148968d5c body=120 status=ok
// SIG undefined FUN_148968d5c(void)

ulonglong FUN_148968d5c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 unaff_RBX;
  bool bVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x164);
  bVar3 = *(longlong *)(param_2 + 0x24) == lVar1;
  if ((bVar3 && lVar1 != 0) && (*(char *)(param_1 + 0x194) == '\0')) {
    *(undefined1 *)(param_1 + 0x194) = 1;
    FUN_148969746(param_1,1,param_2);
    if (*(char *)(param_1 + 0x191) == '\x01') {
      cVar2 = FUN_148968f30(param_1,param_2);
      if (cVar2 == '\0') {
        FUN_140f97840(param_1);
      }
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3 && lVar1 != 0) & 0xffffffff;
}



// FUNCTION 148968e46 FUN_148968e46 body=159 status=ok
// SIG undefined FUN_148968e46(void)

void FUN_148968e46(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4262f0;
  if (*(char *)((longlong)param_1 + 0x193) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x193) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x191) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x191) = 0;
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
  FUN_145859e92(param_1 + 0x16);
  plVar3 = (longlong *)param_1[0x15];
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
  FUN_148968ee6(param_1);
  return;
}



// FUNCTION 148968ee6 FUN_148968ee6 body=74 status=ok
// SIG undefined FUN_148968ee6(void)

void FUN_148968ee6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b426370;
  plVar3 = (longlong *)param_1[0x13];
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
  FUN_140f97a52(param_1);
  return;
}



// FUNCTION 148968f30 FUN_148968f30 body=766 status=ok
// SIG undefined FUN_148968f30(void)

ulonglong FUN_148968f30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined1 local_b0;
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x191) == '\x01') {
    lVar6 = 0x118;
    if (*(char *)(param_1 + 400) != '\0') {
      lVar6 = 0xd0;
    }
    lVar6 = FUN_140fee782(lVar6 + *(longlong *)(param_1 + 0x90));
    if ((lVar6 != 0) && (plVar4 = *(longlong **)(*param_2 + 0x40), plVar4 != (longlong *)0x0)) {
      uVar3 = FUN_1407ca880();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar3);
      if (plVar4 != (longlong *)0x0) {
        uVar3 = FUN_1407ca880();
        plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
        if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
          lVar7 = *(longlong *)(param_1 + 0xa0);
          if (lVar7 != 0) {
            if (*(longlong *)(param_1 + 0x188) != 0) {
              FUN_14480f766(lVar7 + 0x18);
              lVar7 = *(longlong *)(param_1 + 0xa0);
            }
            *(undefined8 *)(param_1 + 0x188) = 0;
            FUN_14103b6f6(lVar7,1);
            *(undefined8 *)(param_1 + 0xa0) = 0;
            plVar4 = *(longlong **)(param_1 + 0xa8);
            if (plVar4 != (longlong *)0x0) {
              *(undefined8 *)(param_1 + 0xa8) = 0;
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
          }
          local_68 = 0;
          local_60 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_5c = 0xffffffff00000080;
          local_54 = 0;
          local_48 = 0;
          local_40 = 0;
          FUN_140fee7ad(param_2,&local_88);
          uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
          if ((*(longlong *)(param_2[2] + 0x28) == 0) ||
             ((~*(byte *)(*(longlong *)(param_2[2] + 0x28) + 0x88) & 0x18) != 0)) {
            uVar10 = 3;
          }
          else {
            uVar10 = 0;
          }
          local_b0 = 1;
          local_b8 = &local_88;
          FUN_14096dfee(uVar3,&local_98,lVar6,uVar10);
          plVar5 = local_90;
          *(undefined8 *)(param_1 + 0xa0) = local_98;
          local_98 = 0;
          plVar4 = *(longlong **)(param_1 + 0xa8);
          if (local_90 == plVar4) {
LAB_148969158:
            plVar5 = local_90;
            if (local_90 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_90 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_90)(local_90);
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
          else {
            local_90 = (longlong *)0x0;
            *(longlong **)(param_1 + 0xa8) = plVar5;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar4 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar2 = (int *)((longlong)plVar4 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
              goto LAB_148969158;
            }
          }
          lVar6 = *(longlong *)(param_1 + 0xa0);
          uVar9 = CONCAT71((int7)((ulonglong)plVar5 >> 8),lVar6 != 0);
          if (lVar6 != 0) {
            local_a8 = &LAB_148969230;
            local_a0 = 0;
            FUN_14896925c(&local_98,param_1);
            FUN_140ebcfd8(lVar6 + 0x18,&local_a8,&local_98);
            FUN_1449db362(&local_98);
            *(undefined1 **)(param_1 + 0x188) = local_a8;
            puVar8 = &DAT_14cb8a9d8;
            if (*(char *)(param_1 + 400) != '\0') {
              puVar8 = &DAT_14cb8a9d0;
            }
            FUN_145878280(param_1,puVar8,param_2);
          }
          local_40 = 0;
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          FUN_140333f4e(&local_88);
          goto LAB_148968fd8;
        }
      }
    }
  }
  uVar9 = 0;
LAB_148968fd8:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14896925c FUN_14896925c body=386 status=ok
// SIG undefined FUN_14896925c(void)

longlong * FUN_14896925c(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14896936d:
    *puVar5 = &PTR_LAB_14b3e9c20;
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
    *puVar5 = &PTR_FUN_14b4263f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14896936d;
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
    *puVar5 = &PTR_LAB_14b3e9c20;
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
    *puVar5 = &PTR_FUN_14b4263f0;
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



// FUNCTION 1489693de FUN_1489693de body=64 status=ok
// SIG undefined FUN_1489693de(void)

undefined8 * FUN_1489693de(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4263f0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148969422 FUN_148969422 body=81 status=ok
// SIG undefined FUN_148969422(void)

undefined8 FUN_148969422(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 14896947a FUN_14896947a body=89 status=ok
// SIG undefined FUN_14896947a(void)

bool FUN_14896947a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1489694c5;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1489694c5:
  return lVar6 == param_2;
}



// FUNCTION 1489694f0 FUN_1489694f0 body=118 status=ok
// SIG undefined FUN_1489694f0(void)

void FUN_1489694f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4263f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148969566 FUN_148969566 body=118 status=ok
// SIG undefined FUN_148969566(void)

void FUN_148969566(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4263f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1489695dc FUN_1489695dc body=156 status=ok
// SIG undefined FUN_1489695dc(void)

void FUN_1489695dc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4263f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148969668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148969678 FUN_148969678 body=104 status=ok
// SIG undefined FUN_148969678(void)

void FUN_148969678(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489696c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489696d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489696e0 FUN_1489696e0 body=101 status=ok
// SIG undefined FUN_1489696e0(void)

ulonglong FUN_1489696e0(longlong param_1)

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
LAB_14896973a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14896973a;
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



// FUNCTION 148969746 FUN_148969746 body=345 status=ok
// SIG undefined FUN_148969746(void)

void FUN_148969746(longlong param_1,char param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  code **ppcVar3;
  code cVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 auStack_58 [32];
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar6 = FUN_1458781b8(param_3);
  if ((cVar6 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x90) + 0x160) == param_2)) {
    FUN_148960906(*(longlong *)(param_1 + 0x90),&local_38,param_3);
    plVar1 = local_30;
    ppcVar3 = (code **)(param_1 + 0x170);
    if (ppcVar3 != &local_38) {
      *(code **)(param_1 + 0x170) = local_38;
      local_38 = (code *)0x0;
      plVar5 = *(longlong **)(param_1 + 0x178);
      if (local_30 != plVar5) {
        local_30 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x178) = plVar1;
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
    plVar1 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (*ppcVar3 != (code *)0x0) {
      cVar6 = FUN_148985f10();
      if (cVar6 != '\0') {
        cVar4 = (*ppcVar3)[0x28];
        if ((byte)cVar4 < 2) {
          local_38 = FUN_148969cce;
          local_30 = (longlong *)((ulonglong)local_30 & 0xffffffff00000000);
          FUN_148969b4e(*ppcVar3 + 0x18,param_1);
        }
        else {
          *(bool *)(param_1 + 400) = cVar4 == (code)0x2;
          *(undefined1 *)(param_1 + 0x191) = 1;
        }
        goto LAB_148969781;
      }
    }
    *(undefined2 *)(param_1 + 400) = 0x100;
  }
LAB_148969781:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489698c0 FUN_1489698c0 body=386 status=ok
// SIG undefined FUN_1489698c0(void)

longlong * FUN_1489698c0(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1489699d1:
    *puVar5 = &PTR_LAB_14a1c8830;
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
    *puVar5 = &PTR_FUN_14b4264f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1489699d1;
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
    *puVar5 = &PTR_LAB_14a1c8830;
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
    *puVar5 = &PTR_FUN_14b4264f0;
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



// FUNCTION 148969a42 FUN_148969a42 body=188 status=ok
// SIG undefined FUN_148969a42(void)

void FUN_148969a42(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_148985f3e();
    *(undefined8 *)(param_1 + 0x170) = 0;
    plVar3 = *(longlong **)(param_1 + 0x178);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x178) = 0;
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
  }
  *(undefined2 *)(param_1 + 400) = 0x100;
  local_48 = 0;
  local_38 = &PTR_LAB_14b426560;
  local_58 = &LAB_14896a49e;
  local_30 = param_1;
  FUN_148974406(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148969b00 FUN_148969b00 body=78 status=ok
// SIG undefined FUN_148969b00(void)

void FUN_148969b00(char *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((*param_1 == '\0') && (*(longlong *)(param_1 + 8) != 0)) {
    FUN_148985f3e();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000148969b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148969b4e FUN_148969b4e body=384 status=ok
// SIG undefined FUN_148969b4e(void)

void FUN_148969b4e(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148969c61:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b426460;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148969c61;
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
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b426460;
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
                    /* WARNING: Could not recover jumptable at 0x000148969c5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148969cce FUN_148969cce body=98 status=ok
// SIG undefined FUN_148969cce(void)

void FUN_148969cce(longlong param_1)

{
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  longlong local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x88) & 2) == 0) {
    local_38 = 0;
    local_28 = &PTR_LAB_14b4264d0;
    local_48 = FUN_14896a094;
    local_20 = param_1;
    FUN_148974406();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148969d32 FUN_148969d32 body=64 status=ok
// SIG undefined FUN_148969d32(void)

undefined8 * FUN_148969d32(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b426460;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148969d76 FUN_148969d76 body=81 status=ok
// SIG undefined FUN_148969d76(void)

undefined8 FUN_148969d76(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148969dce FUN_148969dce body=89 status=ok
// SIG undefined FUN_148969dce(void)

bool FUN_148969dce(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148969e19;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148969e19:
  return lVar6 == param_2;
}



// FUNCTION 148969e44 FUN_148969e44 body=118 status=ok
// SIG undefined FUN_148969e44(void)

void FUN_148969e44(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426460;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148969eba FUN_148969eba body=118 status=ok
// SIG undefined FUN_148969eba(void)

void FUN_148969eba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426460;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148969f30 FUN_148969f30 body=156 status=ok
// SIG undefined FUN_148969f30(void)

void FUN_148969f30(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b426460;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148969fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148969fcc FUN_148969fcc body=100 status=ok
// SIG undefined FUN_148969fcc(void)

void FUN_148969fcc(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014896a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014896a025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14896a030 FUN_14896a030 body=100 status=ok
// SIG undefined FUN_14896a030(void)

ulonglong FUN_14896a030(longlong param_1)

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
LAB_14896a089:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14896a089;
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



// FUNCTION 14896a094 FUN_14896a094 body=19 status=ok
// SIG undefined FUN_14896a094(void)

undefined1 FUN_14896a094(undefined8 *param_1)

{
  FUN_14896a0f0(*param_1);
  return 1;
}



// FUNCTION 14896a0d2 FUN_14896a0d2 body=29 status=ok
// SIG undefined FUN_14896a0d2(void)

undefined8 FUN_14896a0d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896a0f0 FUN_14896a0f0 body=75 status=ok
// SIG undefined FUN_14896a0f0(void)

void FUN_14896a0f0(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(longlong *)(param_1 + 0x170) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(*(longlong *)(param_1 + 0x170) + 0x28) == '\x02';
  }
  *(bool *)(param_1 + 400) = bVar2;
  *(undefined1 *)(param_1 + 0x191) = 1;
  cVar1 = FUN_148968f30(param_1);
  if (cVar1 != '\0') {
    return;
  }
  FUN_140f97840(param_1);
  return;
}



// FUNCTION 14896a13c FUN_14896a13c body=64 status=ok
// SIG undefined FUN_14896a13c(void)

undefined8 * FUN_14896a13c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4264f0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896a180 FUN_14896a180 body=81 status=ok
// SIG undefined FUN_14896a180(void)

undefined8 FUN_14896a180(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 14896a1d8 FUN_14896a1d8 body=89 status=ok
// SIG undefined FUN_14896a1d8(void)

bool FUN_14896a1d8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14896a223;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14896a223:
  return lVar6 == param_2;
}



// FUNCTION 14896a24e FUN_14896a24e body=118 status=ok
// SIG undefined FUN_14896a24e(void)

void FUN_14896a24e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4264f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14896a2c4 FUN_14896a2c4 body=118 status=ok
// SIG undefined FUN_14896a2c4(void)

void FUN_14896a2c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4264f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14896a33a FUN_14896a33a body=156 status=ok
// SIG undefined FUN_14896a33a(void)

void FUN_14896a33a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4264f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014896a3c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14896a3d6 FUN_14896a3d6 body=100 status=ok
// SIG undefined FUN_14896a3d6(void)

void FUN_14896a3d6(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014896a422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014896a42f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14896a43a FUN_14896a43a body=100 status=ok
// SIG undefined FUN_14896a43a(void)

ulonglong FUN_14896a43a(longlong param_1)

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
LAB_14896a493:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14896a493;
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



// FUNCTION 14896a4d0 FUN_14896a4d0 body=29 status=ok
// SIG undefined FUN_14896a4d0(void)

undefined8 FUN_14896a4d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896a4ee FUN_14896a4ee body=287 status=ok
// SIG undefined FUN_14896a4ee(void)

void FUN_14896a4ee(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0xa0);
  if (lVar5 != 0) {
    if (*(longlong *)(param_1 + 0x188) != 0) {
      FUN_14480f766(lVar5 + 0x18);
      lVar5 = *(longlong *)(param_1 + 0xa0);
    }
    *(undefined8 *)(param_1 + 0x188) = 0;
    FUN_14103b6f6(lVar5,1);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    plVar3 = *(longlong **)(param_1 + 0xa8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xa8) = 0;
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
  }
  lVar5 = *(longlong *)(param_1 + 0x170);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x20) != 0) {
      puVar4 = *(undefined8 **)(lVar5 + 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,0);
        FUN_1446efa72((longlong *)(lVar5 + 0x18),0,0,0x10);
        *(undefined4 *)(lVar5 + 0x20) = 0;
        lVar5 = *(longlong *)(param_1 + 0x170);
      }
    }
    FUN_148985f3e(lVar5);
    *(undefined8 *)(param_1 + 0x170) = 0;
    plVar3 = *(longlong **)(param_1 + 0x178);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x178) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014896a600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14896a60e FUN_14896a60e body=167 status=ok
// SIG undefined FUN_14896a60e(void)

void FUN_14896a60e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14896a689;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14896a689;
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
LAB_14896a689:
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
                    /* WARNING: Could not recover jumptable at 0x00014896a6a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14896a6b6 FUN_14896a6b6 body=142 status=ok
// SIG undefined FUN_14896a6b6(void)

undefined8 * FUN_14896a6b6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b426580;
  FUN_140f2a246(param_1 + 2);
  param_1[2] = &PTR_LAB_14b426620;
  param_1[0x14] = *param_3;
  lVar1 = param_3[1];
  param_1[0x15] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = &PTR_FUN_14b4265a0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  *(undefined1 *)((longlong)param_1 + 0x189) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 14896a74e FUN_14896a74e body=29 status=ok
// SIG undefined FUN_14896a74e(void)

undefined8 FUN_14896a74e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896a76c FUN_14896a76c body=38 status=ok
// SIG undefined FUN_14896a76c(void)

undefined8 FUN_14896a76c(undefined8 param_1,int param_2)

{
  FUN_14896a9ce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14896a792 FUN_14896a792 body=29 status=ok
// SIG undefined FUN_14896a792(void)

undefined8 FUN_14896a792(longlong param_1,undefined8 param_2)

{
  FUN_145924da0(*(undefined8 *)(param_1 + 0x90));
  return param_2;
}



// FUNCTION 14896a7b0 FUN_14896a7b0 body=143 status=ok
// SIG undefined FUN_14896a7b0(void)

void FUN_14896a7b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x90);
  local_20 = *(undefined8 *)(param_1 + 0x70);
  local_18 = *(longlong **)(param_1 + 0x78);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_20,param_2,param_3);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896a840 FUN_14896a840 body=146 status=ok
// SIG undefined FUN_14896a840(void)

void FUN_14896a840(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x88) & 0x10) == 0) {
    plVar3 = *(longlong **)(param_1 + 0x90);
    local_20 = *(undefined8 *)(param_1 + 0x70);
    local_18 = *(longlong **)(param_1 + 0x78);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2,&local_20);
    plVar3 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896a8d4 FUN_14896a8d4 body=50 status=ok
// SIG undefined FUN_14896a8d4(void)

undefined8 FUN_14896a8d4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1458781b8(param_2);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = FUN_14896aa7e(param_1,param_2);
  return uVar2;
}



// FUNCTION 14896a906 FUN_14896a906 body=85 status=ok
// SIG undefined FUN_14896a906(void)

undefined8 FUN_14896a906(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x168) == '\x01') && (*(char *)(param_1 + 0x160) == '\0')) {
    cVar1 = FUN_145966fd4(param_1 + 0xb0,*(undefined8 *)(*param_2 + 0x40),
                          *(char *)(param_1 + 0xe9) == '\0');
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x160) = 1;
    }
  }
  FUN_145878106(param_1);
  return 1;
}



// FUNCTION 14896a9ce FUN_14896a9ce body=102 status=ok
// SIG undefined FUN_14896a9ce(void)

void FUN_14896a9ce(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4265a0;
  if (*(char *)((longlong)param_1 + 0x179) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x179) = 0;
  }
  FUN_145859e92(param_1 + 0x16);
  plVar3 = (longlong *)param_1[0x15];
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
  FUN_14896aa34(param_1);
  return;
}



// FUNCTION 14896aa34 FUN_14896aa34 body=74 status=ok
// SIG undefined FUN_14896aa34(void)

void FUN_14896aa34(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b426620;
  plVar3 = (longlong *)param_1[0x13];
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
  FUN_140f97a52(param_1);
  return;
}



// FUNCTION 14896aa7e FUN_14896aa7e body=705 status=ok
// SIG undefined FUN_14896aa7e(void)

bool FUN_14896aa7e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined1 local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined1 local_80 [72];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar4 = FUN_148960b04(*(undefined8 *)(param_1 + 0x90));
  if ((lVar4 != 0) && (plVar6 = *(longlong **)(*param_2 + 0x40), plVar6 != (longlong *)0x0)) {
    uVar5 = FUN_1407ca880();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      uVar5 = FUN_1407ca880();
      plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
      if (plVar7 != (longlong *)0x0 && plVar6 != plVar7) {
        FUN_1459670f6(&local_f8,lVar4);
        puVar2 = (undefined8 *)(param_1 + 0xb0);
        if (&local_f8 != puVar2) {
          FUN_145966f58(puVar2,&local_f8);
        }
        FUN_144a2da94(local_80);
        FUN_144a2da94(&local_b8);
        FUN_144a2da94(&local_f8);
        cVar3 = FUN_145966fd4(puVar2,*(undefined8 *)(*param_2 + 0x40),
                              *(char *)(param_1 + 0xe9) != '\0');
        bVar9 = false;
        if (cVar3 == '\0') goto LAB_14896ab09;
        *(undefined1 *)(param_1 + 0x160) = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_cc = 0xffffffff00000080;
        local_c4 = 0;
        local_b8 = 0;
        local_b0 = 0;
        FUN_140fee7ad(param_2,&local_f8);
        uVar5 = (**(code **)(*plVar7 + 0x50))(plVar7);
        if ((*(longlong *)(param_2[2] + 0x28) == 0) ||
           ((~*(byte *)(*(longlong *)(param_2[2] + 0x28) + 0x88) & 0x18) != 0)) {
          uVar8 = 3;
        }
        else {
          uVar8 = 0;
        }
        local_120 = 1;
        local_128 = &local_f8;
        FUN_14096dfee(uVar5,&local_108,lVar4,uVar8);
        plVar7 = local_100;
        *(undefined8 *)(param_1 + 0xa0) = local_108;
        local_108 = 0;
        plVar6 = *(longlong **)(param_1 + 0xa8);
        if (local_100 == plVar6) {
LAB_14896ac90:
          plVar6 = local_100;
          if (local_100 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_100 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*local_100)(local_100);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
        }
        else {
          local_100 = (longlong *)0x0;
          *(longlong **)(param_1 + 0xa8) = plVar7;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar6 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
            goto LAB_14896ac90;
          }
        }
        lVar4 = *(longlong *)(param_1 + 0xa0);
        bVar9 = lVar4 != 0;
        if (bVar9) {
          local_118 = &DAT_14896ad40;
          local_110 = 0;
          FUN_14896ad42(&local_108,param_1);
          FUN_140ebcfd8(lVar4 + 0x18,&local_118,&local_108);
          FUN_1449db362(&local_108);
          *(undefined **)(param_1 + 0x170) = local_118;
        }
        local_b0 = 0;
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        FUN_140333f4e(&local_f8);
        goto LAB_14896ab09;
      }
    }
  }
  bVar9 = false;
LAB_14896ab09:
  if ((local_38 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9;
}



// FUNCTION 14896ad42 FUN_14896ad42 body=386 status=ok
// SIG undefined FUN_14896ad42(void)

longlong * FUN_14896ad42(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14896ae53:
    *puVar5 = &PTR_LAB_14b3e9c20;
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
    *puVar5 = &PTR_FUN_14b4266a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14896ae53;
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
    *puVar5 = &PTR_LAB_14b3e9c20;
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
    *puVar5 = &PTR_FUN_14b4266a0;
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



// FUNCTION 14896aec4 FUN_14896aec4 body=64 status=ok
// SIG undefined FUN_14896aec4(void)

undefined8 * FUN_14896aec4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4266a0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


