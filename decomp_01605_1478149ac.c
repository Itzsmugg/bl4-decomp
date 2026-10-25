// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1478149ac FUN_1478149ac body=78 status=ok
// SIG undefined FUN_1478149ac(void)

undefined8 FUN_1478149ac(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar3 = (undefined4)param_3;
  if (*param_2 == DAT_14cabc828) {
    uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x68);
    uVar4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
  }
  else {
    piVar1 = (int *)FUN_147813c5c(param_1 + -0x28);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 8)) {
      uVar2 = FUN_146918e4a(piVar1);
      return uVar2;
    }
  }
  return CONCAT44(uVar4,uVar3);
}



// FUNCTION 1478149fa FUN_1478149fa body=22 status=ok
// SIG undefined FUN_1478149fa(void)

undefined8 FUN_1478149fa(undefined8 param_1,undefined8 param_2)

{
  FUN_147813d5a();
  return param_2;
}



// FUNCTION 147814a3e FUN_147814a3e body=265 status=ok
// SIG undefined FUN_147814a3e(void)

void FUN_147814a3e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147814b48(plVar1,local_2c);
  FUN_147819ce7(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147814b48 FUN_147814b48 body=404 status=ok
// SIG undefined FUN_147814b48(void)

/* WARNING: Removing unreachable block (ram,0x000147814c64) */

void FUN_147814b48(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1477fe37f(&local_58);
  uVar3 = 0;
  if ((longlong)(int)uStack_50 != 0) {
    lVar5 = (longlong)(int)uStack_50 * 0x38;
    lVar4 = local_58 + 0x28;
    local_80 = param_1;
    do {
      iVar1 = *(int *)(lVar4 + -8);
      if ((((((byte)((param_2 & 0xffffffff) >> 1) & 0x7f & iVar1 == 5) != 0) ||
           ((iVar1 == 3 & (byte)((param_2 & 0xffffffff) >> 2) & 0x3f) != 0)) ||
          ((iVar1 == 1 & (byte)((param_2 & 0xffffffff) >> 3) & 0x1f) != 0)) ||
         ((iVar1 == 2 & (byte)(param_2 & 0xffffffff)) != 0)) {
        FUN_147815232(local_78,lVar4 + -0x28,lVar4);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_147819d8c(param_1,iVar1);
        }
        lVar2 = *param_1;
        lVar6 = (longlong)iVar1 * 0x20;
        FUN_14023423e(lVar2 + lVar6,local_78);
        *(undefined8 *)(lVar2 + 0x10 + lVar6) = 0;
        *(undefined8 *)(lVar2 + 0x10 + lVar6) = local_68;
        *(undefined4 *)(lVar2 + 0x18 + lVar6) = (undefined4)local_60;
        *(undefined4 *)(lVar2 + 0x1c + lVar6) = local_60._4_4_;
        local_60 = 0;
        local_68 = 0;
        param_1 = local_80;
        if (local_78[0] != (longlong *)0x0) {
          (**(code **)(*local_78[0] + 0x10))();
          param_1 = local_80;
        }
      }
      lVar4 = lVar4 + 0x38;
      lVar5 = lVar5 + -0x38;
    } while (lVar5 != 0);
    uVar3 = uStack_50 & 0xffffffff;
  }
  FUN_147819d25(local_58,uVar3);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147814cde FUN_147814cde body=265 status=ok
// SIG undefined FUN_147814cde(void)

void FUN_147814cde(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147814de8(plVar1,local_2c);
  FUN_147819ce7(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147814de8 FUN_147814de8 body=422 status=ok
// SIG undefined FUN_147814de8(void)

/* WARNING: Removing unreachable block (ram,0x000147814f12) */

void FUN_147814de8(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  undefined1 auStack_a8 [36];
  uint local_84;
  longlong *local_80;
  longlong *local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  uVar5 = param_2 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1477fe421(&local_58);
  uVar3 = 0;
  if ((longlong)(int)uStack_50 != 0) {
    lVar6 = (longlong)(int)uStack_50 * 0x38;
    lVar4 = local_58 + 0x28;
    local_84 = (uint)param_2;
    uVar3 = uVar5 >> 2;
    bVar7 = (byte)((param_2 & 0xffffffff) >> 3) & 0x1f;
    local_80 = param_1;
    do {
      iVar1 = *(int *)(lVar4 + -8);
      if ((((((byte)uVar5 & iVar1 == 7) != 0) || ((iVar1 == 4 & bVar7) != 0)) ||
          ((iVar1 == 6 & (byte)uVar3 & 0x3f) != 0)) ||
         ((((byte)((param_2 & 0xffffffff) >> 1) & 0x7f & iVar1 == 8) != 0 ||
          ((iVar1 - 9U < 3 & bVar7) != 0)))) {
        FUN_147815232(local_78,lVar4 + -0x28,lVar4);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_147819d8c(param_1,iVar1);
        }
        lVar2 = *param_1;
        lVar8 = (longlong)iVar1 * 0x20;
        FUN_14023423e(lVar2 + lVar8,local_78);
        *(undefined8 *)(lVar2 + 0x10 + lVar8) = 0;
        *(undefined8 *)(lVar2 + 0x10 + lVar8) = local_68;
        *(undefined4 *)(lVar2 + 0x18 + lVar8) = (undefined4)local_60;
        *(undefined4 *)(lVar2 + 0x1c + lVar8) = local_60._4_4_;
        local_60 = 0;
        local_68 = 0;
        uVar5 = (ulonglong)local_84;
        param_1 = local_80;
        if (local_78[0] != (longlong *)0x0) {
          (**(code **)(*local_78[0] + 0x10))();
          param_1 = local_80;
        }
      }
      lVar4 = lVar4 + 0x38;
      lVar6 = lVar6 + -0x38;
    } while (lVar6 != 0);
    uVar3 = uStack_50 & 0xffffffff;
  }
  FUN_147819d25(local_58,uVar3);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147814f90 FUN_147814f90 body=265 status=ok
// SIG undefined FUN_147814f90(void)

void FUN_147814f90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14781509a(plVar1,local_2c);
  FUN_147819ce7(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781509a FUN_14781509a body=404 status=ok
// SIG undefined FUN_14781509a(void)

/* WARNING: Removing unreachable block (ram,0x0001478151b6) */

void FUN_14781509a(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1477fe421(&local_58);
  uVar3 = 0;
  if ((longlong)(int)uStack_50 != 0) {
    lVar5 = (longlong)(int)uStack_50 * 0x38;
    lVar4 = local_58 + 0x28;
    local_80 = param_1;
    do {
      iVar1 = *(int *)(lVar4 + -8);
      if ((((((byte)((param_2 & 0xffffffff) >> 2) & 0x3f & iVar1 == 0xb) != 0) ||
           ((iVar1 == 10 & (byte)((param_2 & 0xffffffff) >> 1) & 0x7f) != 0)) ||
          ((iVar1 == 4 & (byte)(param_2 & 0xffffffff)) != 0)) ||
         ((iVar1 == 9 & (byte)((param_2 & 0xffffffff) >> 3) & 0x1f) != 0)) {
        FUN_147815232(local_78,lVar4 + -0x28,lVar4);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_147819d8c(param_1,iVar1);
        }
        lVar2 = *param_1;
        lVar6 = (longlong)iVar1 * 0x20;
        FUN_14023423e(lVar2 + lVar6,local_78);
        *(undefined8 *)(lVar2 + 0x10 + lVar6) = 0;
        *(undefined8 *)(lVar2 + 0x10 + lVar6) = local_68;
        *(undefined4 *)(lVar2 + 0x18 + lVar6) = (undefined4)local_60;
        *(undefined4 *)(lVar2 + 0x1c + lVar6) = local_60._4_4_;
        local_60 = 0;
        local_68 = 0;
        param_1 = local_80;
        if (local_78[0] != (longlong *)0x0) {
          (**(code **)(*local_78[0] + 0x10))();
          param_1 = local_80;
        }
      }
      lVar4 = lVar4 + 0x38;
      lVar5 = lVar5 + -0x38;
    } while (lVar5 != 0);
    uVar3 = uStack_50 & 0xffffffff;
  }
  FUN_147819d25(local_58,uVar3);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147815232 FUN_147815232 body=120 status=ok
// SIG undefined FUN_147815232(void)

longlong * FUN_147815232(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1478152aa FUN_1478152aa body=41 status=ok
// SIG undefined FUN_1478152aa(void)

undefined4 FUN_1478152aa(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  uVar2 = iVar1 - 1;
  if (uVar2 < 0x1b) {
    uVar3 = CONCAT31((int3)(uVar2 >> 8),(&DAT_14a5992f3)[uVar2]);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1478152d3 FUN_1478152d3 body=136 status=ok
// SIG undefined FUN_1478152d3(void)

ulonglong FUN_1478152d3(undefined8 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined7 uVar4;
  
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,9);
  switch(uVar2) {
  case 4:
  case 0xe:
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0xf0))();
    uVar3 = (ulonglong)((uint)(cVar1 == '\x01') * 9 + 9);
    break;
  default:
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0xf0))();
    if ((cVar1 == '\x01') ||
       (cVar1 = (**(code **)(*(longlong *)*param_1 + 0xf0))(), cVar1 == '\x02')) {
      uVar3 = CONCAT71(uVar4,2);
    }
    break;
  case 0xc:
  case 0xf:
  case 0x12:
    break;
  case 0xd:
  case 0x10:
  case 0x11:
  case 0x18:
    uVar3 = CONCAT71(uVar4,10);
    break;
  case 0x15:
    uVar3 = CONCAT71(uVar4,0x1b);
    break;
  case 0x19:
    uVar3 = CONCAT71(uVar4,0x3e);
    break;
  case 0x1a:
  case 0x1b:
    uVar3 = CONCAT71(uVar4,0x13);
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14781535b FUN_14781535b body=82 status=ok
// SIG undefined FUN_14781535b(void)

uint FUN_14781535b(undefined8 *param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x50))();
  if (plVar4 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar2 = (uVar2 & 4) >> 2;
  }
  if (1 < param_2) {
    uVar3 = FUN_1478152d3(param_1);
    bVar1 = FUN_14741c19e(uVar3);
    uVar2 = (uint)(byte)((byte)uVar2 | bVar1);
  }
  return uVar2;
}



// FUNCTION 1478153ae FUN_1478153ae body=137 status=ok
// SIG undefined FUN_1478153ae(void)

ulonglong FUN_1478153ae(longlong param_1,undefined8 *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x14e) == '\x01') {
    lVar3 = (**(code **)(*(longlong *)*param_2 + 8))();
    if (((char)param_4 != '\x01') &&
       (uVar4 = CONCAT71((uint7)(uint3)((uint)param_4 >> 8),1), *(char *)(lVar3 + 0x30) == '\x01'))
    goto LAB_147815429;
  }
  plVar2 = (longlong *)*param_2;
  lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
  iVar1 = *(int *)(lVar3 + 0x28);
  lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
  uVar4 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
  if ((*(int *)(lVar3 + 0x24) == *param_3) && (iVar1 == param_3[1])) {
    lVar3 = (**(code **)(*(longlong *)*param_2 + 8))();
    if (*(byte *)(lVar3 + 0x33) < 0x26) {
      uVar4 = 0x1ffff7f9fb >> (*(byte *)(lVar3 + 0x33) & 0x3f);
    }
  }
LAB_147815429:
  return uVar4 & 0xffffff01;
}



// FUNCTION 147815438 FUN_147815438 body=364 status=ok
// SIG undefined FUN_147815438(void)

ulonglong FUN_147815438(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x14e) == '\x01') {
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x48))();
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
      if (((char)param_3 != '\x01') &&
         (uVar7 = CONCAT71((uint7)(uint3)((uint)param_3 >> 8),1), *(char *)(lVar4 + 0x30) == '\x01')
         ) goto LAB_147815582;
    }
  }
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_30);
  (**(code **)(*(longlong *)*param_2 + 0x30))((longlong *)*param_2,&local_38);
  uVar7 = CONCAT71((int7)((ulonglong)&local_30 >> 8),1);
  if ((local_30 != local_38) || (local_2c != local_34)) goto LAB_147815582;
  lVar4 = *(longlong *)(param_1 + 0x130);
  if (lVar4 == 0) {
    lVar4 = FUN_14029dc1a();
  }
  cVar1 = (**(code **)(*(longlong *)*param_2 + 0x40))();
  if (cVar1 != '\0') {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0xc0))();
    cVar1 = thunk_FUN_1467a7f6c(uVar5,lVar4,0x3e7ad7f29abcaf48);
    if (cVar1 == '\0') goto LAB_147815582;
  }
  cVar1 = (**(code **)(*(longlong *)*param_2 + 0xf0))();
  uVar2 = (**(code **)(*(longlong *)*param_2 + 0x28))();
  if (uVar2 < 0x1b) {
    if ((0x6003010U >> (uVar2 & 0x1f) & 1) == 0) {
      if ((0x18000cU >> (uVar2 & 0x1f) & 1) != 0) {
        if (cVar1 != '\x01') {
          if (cVar1 != '\x02') goto LAB_147815577;
          plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x48))();
          if (plVar3 != (longlong *)0x0) {
            pbVar6 = (byte *)(**(code **)(*plVar3 + 8))(plVar3);
            if ((*pbVar6 & 0x10) == 0) goto LAB_147815577;
          }
        }
LAB_147815540:
        uVar7 = 0;
        goto LAB_147815582;
      }
    }
    else if (cVar1 == '\x01') goto LAB_147815540;
  }
LAB_147815577:
  uVar2 = (**(code **)(*(longlong *)*param_2 + 0x40))();
  uVar7 = (ulonglong)uVar2;
LAB_147815582:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478155a6 FUN_1478155a6 body=547 status=ok
// SIG undefined FUN_1478155a6(void)

/* WARNING: Removing unreachable block (ram,0x000147815751) */
/* WARNING: Removing unreachable block (ram,0x00014781575b) */
/* WARNING: Removing unreachable block (ram,0x00014781576d) */

void FUN_1478155a6(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  LARGE_INTEGER LVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 local_58;
  longlong lStack_50;
  LARGE_INTEGER local_48;
  double local_40;
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (LARGE_INTEGER)0x0;
  local_58 = *param_2;
  lStack_50 = param_2[1];
  if (lStack_50 == 0) {
    lStack_50 = 0;
  }
  else {
    LOCK();
    *(int *)(lStack_50 + 8) = *(int *)(lStack_50 + 8) + 1;
    UNLOCK();
  }
  FUN_1446f470e(local_60,L"MediaTextureResourceReuseFence",1);
  (**(code **)(*DAT_14ca83900 + 0xb8))(DAT_14ca83900,&local_38,local_60);
  LVar5 = local_48;
  local_48 = local_38;
  local_38.QuadPart = 0;
  if (LVar5 != (LARGE_INTEGER)0x0) {
    LOCK();
    puVar1 = (uint *)((longlong)LVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
    if (local_38.QuadPart != 0) {
      LOCK();
      puVar1 = (uint *)(local_38.QuadPart + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  QueryPerformanceCounter(&local_38);
  LVar5 = local_48;
  local_40 = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  (**(code **)(*DAT_14ca83900 + 0xc0))(DAT_14ca83900,&DAT_14ca85100,local_48.QuadPart);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  iVar3 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
    FUN_147819eae((longlong *)(param_1 + 0x18),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  lVar6 = (longlong)iVar3 * 0x20;
  *(undefined8 *)(lVar4 + lVar6) = local_58;
  *(longlong *)(lVar4 + 8 + lVar6) = lStack_50;
  if (lStack_50 != 0) {
    LOCK();
    *(int *)(lStack_50 + 8) = *(int *)(lStack_50 + 8) + 1;
    UNLOCK();
    LVar5 = local_48;
  }
  ((LARGE_INTEGER *)(lVar4 + lVar6 + 0x10))->QuadPart = (LONGLONG)LVar5;
  if (LVar5.QuadPart != 0) {
    LOCK();
    *(int *)(LVar5.QuadPart + 8) = *(int *)(LVar5.QuadPart + 8) + 1;
    UNLOCK();
  }
  *(double *)(lVar4 + lVar6 + 0x18) = local_40;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  FUN_1478176a0(&local_58);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478157ca FUN_1478157ca body=174 status=ok
// SIG undefined FUN_1478157ca(void)

void FUN_1478157ca(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48 [2];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = 0x8000000000000000;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
    cVar4 = (**(code **)(*(longlong *)*param_2 + 8))();
    if (cVar4 != '\0') {
      (**(code **)(*local_38 + 0x60))(local_38,local_48);
      uVar5 = local_48[0];
    }
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
  }
  LOCK();
  *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x208) = uVar5;
  UNLOCK();
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147815890 FUN_147815890 body=32 status=ok
// SIG undefined FUN_147815890(void)

undefined8 FUN_147815890(longlong param_1,undefined8 param_2)

{
  FUN_14010318a(*(undefined8 *)(param_1 + 0x90),param_2,0);
  return param_2;
}



// FUNCTION 1478158cc FUN_1478158cc body=136 status=ok
// SIG undefined FUN_1478158cc(void)

void FUN_1478158cc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0x8000000000000000;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  lVar1 = *(longlong *)(param_1 + 0x128);
  *(undefined8 **)(param_1 + 0x128) = puVar2;
  if (lVar1 != 0) {
    FUN_14781409a(lVar1);
    FUN_1400020a8(lVar1);
    puVar2 = *(undefined8 **)(param_1 + 0x128);
  }
  FUN_147815954(puVar2,param_2);
  return;
}



// FUNCTION 147815954 FUN_147815954 body=177 status=ok
// SIG undefined FUN_147815954(void)

undefined4 * FUN_147815954(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  uVar10 = param_2[4];
  uVar11 = param_2[5];
  uVar12 = param_2[6];
  uVar13 = param_2[7];
  uVar14 = param_2[9];
  uVar15 = param_2[10];
  uVar16 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar14;
  param_1[10] = uVar15;
  param_1[0xb] = uVar16;
  param_1[4] = uVar10;
  param_1[5] = uVar11;
  param_1[6] = uVar12;
  param_1[7] = uVar13;
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  uVar6 = param_2[0x13];
  uVar7 = param_2[0x14];
  uVar8 = param_2[0x15];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar6;
  param_1[0x14] = uVar7;
  param_1[0x15] = uVar8;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar4 = *(longlong *)(param_2 + 0x1a);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(longlong *)(param_1 + 0x1a) = lVar4;
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
  return param_1;
}



// FUNCTION 147815a06 FUN_147815a06 body=742 status=ok
// SIG undefined FUN_147815a06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147815a06(longlong param_1,undefined8 *param_2,float *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auStack_1b8 [32];
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  float local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  float fStack_144;
  double local_140;
  double dStack_138;
  float local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar7 = *(longlong *)(param_1 + 0x130);
  if (lVar7 == 0) {
    lVar7 = FUN_14029dc1a();
  }
  lVar8 = (**(code **)(*(longlong *)*param_2 + 0x58))();
  if (lVar8 == 0) {
    uVar9 = (**(code **)(*(longlong *)*param_2 + 0xc0))();
    cVar6 = thunk_FUN_1467a7f6c(uVar9,lVar7,0x9abcaf48);
    if (cVar6 == '\0') {
      uVar9 = (**(code **)(*(longlong *)*param_2 + 0xc0))();
      FUN_14603ed46(&local_158,uVar9,lVar7,1);
      *param_3 = (float)(double)CONCAT44(uStack_154,local_158);
      param_3[1] = (float)dStack_138;
      param_3[2] = (float)local_118;
      param_3[3] = (float)local_f8;
      param_3[4] = (float)(double)CONCAT44(uStack_14c,uStack_150);
      param_3[5] = (float)(double)CONCAT44(uStack_12c,local_130);
      param_3[6] = (float)local_110;
      param_3[7] = (float)local_f0;
      param_3[8] = (float)(double)CONCAT44(fStack_144,uStack_148);
      param_3[9] = (float)(double)CONCAT44(uStack_124,uStack_128);
      param_3[10] = (float)local_108;
      param_3[0xb] = (float)local_e8;
      param_3[0xc] = (float)local_140;
      param_3[0xd] = (float)(double)CONCAT44(uStack_11c,uStack_120);
      param_3[0xe] = (float)local_100;
      param_3[0xf] = (float)local_e0;
      goto LAB_147815ad3;
    }
  }
  uVar9 = _DAT_14c846288;
  *(undefined8 *)(param_3 + 0xc) = _DAT_14c846280;
  *(undefined8 *)(param_3 + 0xe) = uVar9;
  uVar9 = _DAT_14c846278;
  *(undefined8 *)(param_3 + 8) = _DAT_14c846270;
  *(undefined8 *)(param_3 + 10) = uVar9;
  uVar9 = _DAT_14c846268;
  *(undefined8 *)(param_3 + 4) = _DAT_14c846260;
  *(undefined8 *)(param_3 + 6) = uVar9;
  fVar5 = DAT_14c846258._4_4_;
  fVar4 = (float)DAT_14c846258;
  fVar10 = DAT_14c846254;
  *param_3 = DAT_14c846250;
  param_3[1] = fVar10;
  param_3[2] = fVar4;
  param_3[3] = fVar5;
LAB_147815ad3:
  fVar10 = (float)(**(code **)(*(longlong *)*param_2 + 0xf8))();
  if ((fVar10 != 1.0) || (NAN(fVar10))) {
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    local_140 = 0.0;
    dStack_138 = 0.0;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_11c = 0x3f800000;
    local_158 = fVar10;
    fStack_144 = fVar10;
    local_130 = fVar10;
    FUN_144afeb32(&local_198,&local_158,param_3);
    *(undefined8 *)(param_3 + 0xc) = local_168;
    *(undefined8 *)(param_3 + 0xe) = uStack_160;
    *(undefined8 *)(param_3 + 8) = local_178;
    *(undefined8 *)(param_3 + 10) = uStack_170;
    *(undefined8 *)(param_3 + 4) = local_188;
    *(undefined8 *)(param_3 + 6) = uStack_180;
    *param_3 = local_198;
    param_3[1] = fStack_194;
    param_3[2] = fStack_190;
    param_3[3] = fStack_18c;
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
  if ((local_d0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147815ced FUN_147815ced body=678 status=ok
// SIG undefined FUN_147815ced(void)

longlong *
FUN_147815ced(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_c0;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  uint local_84;
  undefined1 local_80;
  undefined4 local_7c;
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 1;
  local_94 = 0;
  uStack_8c = 0;
  local_84 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_80 = 0;
  local_7c = 0;
  local_78 = L"TempMediaVertexBuffer";
  local_70 = 0;
  uStack_68 = 0;
  uVar3 = FUN_1414e3242(0x4004,0);
  local_b4 = 0x80;
  local_ac = 0x4004;
  local_c8 = uVar3;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    local_c0 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_1,&DAT_14ca85100,&local_b4);
    *(undefined4 *)(*param_1 + 0x18) = uVar3;
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    local_c0 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_1,&DAT_14ca85100,&local_b4);
    *(undefined4 *)(*param_1 + 0x18) = uVar3;
  }
  cVar2 = DAT_14ca85169;
  lVar1 = *param_1;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
  }
  local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,1);
  local_c8 = 0x80;
  puVar4 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,&DAT_14ca85100,lVar1,0)
  ;
  if (cVar2 == '\0') {
    FUN_14002049c(&DAT_14ca85100,0);
  }
  *puVar4 = 0x3f800000bf800000;
  puVar4[1] = &DAT_3f8000003f800000;
  puVar4[4] = &DAT_3f8000003f800000;
  puVar4[5] = &DAT_3f8000003f800000;
  puVar4[8] = 0xbf800000bf800000;
  puVar4[9] = &DAT_3f8000003f800000;
  *(undefined4 *)(puVar4 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 100) = 0xbf800000;
  *(undefined4 *)(puVar4 + 0xd) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0x6c) = 0x3f800000;
  *(undefined4 *)(puVar4 + 2) = param_2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = param_4;
  *(undefined4 *)(puVar4 + 6) = param_3;
  *(undefined4 *)((longlong)puVar4 + 0x34) = param_4;
  *(undefined4 *)(puVar4 + 10) = param_2;
  *(undefined4 *)((longlong)puVar4 + 0x54) = param_5;
  *(undefined4 *)(puVar4 + 0xe) = param_3;
  *(undefined4 *)((longlong)puVar4 + 0x74) = param_5;
  lVar1 = *param_1;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,lVar1);
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,lVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147815f94 FUN_147815f94 body=99 status=ok
// SIG undefined FUN_147815f94(void)

undefined4 * FUN_147815f94(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_1460a2244();
  FUN_1448e935e(param_2,&local_30,uVar1,0);
  FUN_1460a2244();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147815ff8 FUN_147815ff8 body=99 status=ok
// SIG undefined FUN_147815ff8(void)

undefined4 * FUN_147815ff8(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_1460a24b4();
  FUN_1448e935e(param_2,&local_30,uVar1,0);
  FUN_1460a24b4();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147816078 FUN_147816078 body=48 status=ok
// SIG undefined FUN_147816078(void)

longlong FUN_147816078(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_145ad9406(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478160b0 FUN_1478160b0 body=48 status=ok
// SIG undefined FUN_1478160b0(void)

longlong FUN_1478160b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd0;
  FUN_145ad9406(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478160e8 FUN_1478160e8 body=54 status=ok
// SIG undefined FUN_1478160e8(void)

undefined8 * FUN_1478160e8(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\MediaAssets\\Public\\MediaSource.h",0x39,
                L"Pure virtual not implemented (%s)",L"UMediaSource::GetUrl");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14781611e FUN_14781611e body=42 status=ok
// SIG undefined FUN_14781611e(void)

undefined8 FUN_14781611e(void)

{
  FUN_140033559("Runtime\\MediaAssets\\Public\\MediaSource.h",0x41,
                L"Pure virtual not implemented (%s)",L"UMediaSource::Validate");
  return 0;
}



// FUNCTION 147816148 FUN_147816148 body=45 status=ok
// SIG undefined FUN_147816148(void)

longlong FUN_147816148(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14781617a FUN_14781617a body=64 status=ok
// SIG undefined FUN_14781617a(void)

undefined8 * FUN_14781617a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a592e30;
  plVar2 = (longlong *)param_1[3];
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



// FUNCTION 1478161ca FUN_1478161ca body=100 status=ok
// SIG undefined FUN_1478161ca(void)

longlong FUN_1478161ca(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x848);
  if (lVar2 == 0) {
    plVar1 = (longlong *)FUN_145b54fcc();
    lVar3 = plVar1[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar3 = plVar1[0x22];
      if (lVar3 == 0) {
        return 0;
      }
    }
    lVar2 = FUN_14797545c(lVar3);
    if (lVar2 == 0) {
      lVar2 = FUN_147975464(lVar3);
      return lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 14781622e FUN_14781622e body=45 status=ok
// SIG undefined FUN_14781622e(void)

longlong FUN_14781622e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14611adc0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14781625c FUN_14781625c body=38 status=ok
// SIG undefined FUN_14781625c(void)

undefined8 FUN_14781625c(undefined8 param_1,int param_2)

{
  FUN_14336f138();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478162a0 FUN_1478162a0 body=38 status=ok
// SIG undefined FUN_1478162a0(void)

undefined8 FUN_1478162a0(undefined8 param_1,int param_2)

{
  FUN_145de9396();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14781630c FUN_14781630c body=54 status=ok
// SIG undefined FUN_14781630c(void)

undefined1 FUN_14781630c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147816420(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 14781636a FUN_14781636a body=59 status=ok
// SIG undefined FUN_14781636a(void)

undefined8 FUN_14781636a(longlong *param_1)

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



// FUNCTION 1478163b0 FUN_1478163b0 body=34 status=ok
// SIG undefined FUN_1478163b0(void)

void FUN_1478163b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_147810e80(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147816420 FUN_147816420 body=69 status=ok
// SIG undefined FUN_147816420(void)

longlong FUN_147816420(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_1447a122a(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 147816476 FUN_147816476 body=44 status=ok
// SIG undefined FUN_147816476(void)

void FUN_147816476(undefined8 param_1,longlong *param_2)

{
  FUN_147816611(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478164b8 FUN_1478164b8 body=54 status=ok
// SIG undefined FUN_1478164b8(void)

undefined1 FUN_1478164b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478165b2(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147816516 FUN_147816516 body=59 status=ok
// SIG undefined FUN_147816516(void)

undefined8 FUN_147816516(longlong *param_1)

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



// FUNCTION 1478165b2 FUN_1478165b2 body=95 status=ok
// SIG undefined FUN_1478165b2(void)

undefined8 * FUN_1478165b2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147816611(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147816638(param_1,iVar1);
      FUN_14781669a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147816611 FUN_147816611 body=38 status=ok
// SIG undefined FUN_147816611(void)

void FUN_147816611(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147810e80(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 147816638 FUN_147816638 body=98 status=ok
// SIG undefined FUN_147816638(void)

void FUN_147816638(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14781669a FUN_14781669a body=52 status=ok
// SIG undefined FUN_14781669a(void)

void FUN_14781669a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1478166ce(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 1478166ce FUN_1478166ce body=309 status=ok
// SIG undefined FUN_1478166ce(void)

undefined8 * FUN_1478166ce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 147816804 FUN_147816804 body=50 status=ok
// SIG undefined FUN_147816804(void)

void FUN_147816804(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_147816611(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 147816836 FUN_147816836 body=93 status=ok
// SIG undefined FUN_147816836(void)

longlong FUN_147816836(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_147816894(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 147816894 FUN_147816894 body=383 status=ok
// SIG undefined FUN_147816894(void)

longlong * FUN_147816894(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        FUN_147816a14((longlong)iVar6 * 0x28 + *local_78);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147816a14 FUN_147816a14 body=59 status=ok
// SIG undefined FUN_147816a14(void)

void FUN_147816a14(longlong *param_1)

{
  FUN_147816611(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147816a50 FUN_147816a50 body=52 status=ok
// SIG undefined FUN_147816a50(void)

void FUN_147816a50(longlong *param_1)

{
  FUN_147816a84();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147816a84 FUN_147816a84 body=307 status=ok
// SIG undefined FUN_147816a84(void)

void FUN_147816a84(longlong *param_1)

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
      FUN_147816a14((longlong)iStack_4c * 0x28 + *local_68);
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



// FUNCTION 147816bb8 FUN_147816bb8 body=228 status=ok
// SIG undefined FUN_147816bb8(void)

undefined8 FUN_147816bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14a5981a0;
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
  *local_38 = &PTR_FUN_14a598130;
  local_38[3] = param_3;
  local_38[4] = &LAB_143376e5e;
  FUN_14603a25e(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147816c9e FUN_147816c9e body=38 status=ok
// SIG undefined FUN_147816c9e(void)

undefined8 FUN_147816c9e(undefined8 param_1,int param_2)

{
  FUN_147816e5e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147816cc4 FUN_147816cc4 body=29 status=ok
// SIG undefined FUN_147816cc4(void)

undefined8 FUN_147816cc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147816cfe FUN_147816cfe body=93 status=ok
// SIG undefined FUN_147816cfe(void)

void FUN_147816cfe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5981a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a598130;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147816d5c FUN_147816d5c body=93 status=ok
// SIG undefined FUN_147816d5c(void)

void FUN_147816d5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5981a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a598130;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147816dba FUN_147816dba body=126 status=ok
// SIG undefined FUN_147816dba(void)

void FUN_147816dba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5981a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a598130;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147816e29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147816e46 FUN_147816e46 body=21 status=ok
// SIG undefined FUN_147816e46(void)

undefined8 FUN_147816e46(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147816e5e FUN_147816e5e body=84 status=ok
// SIG undefined FUN_147816e5e(void)

void FUN_147816e5e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a598110;
  FUN_147816eb2();
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_145a369d8(param_1 + 0xd);
  return;
}



// FUNCTION 147816eb2 FUN_147816eb2 body=62 status=ok
// SIG undefined FUN_147816eb2(void)

void FUN_147816eb2(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x1c);
  if (cVar2 != '\0') {
    lVar1 = FUN_14479d2ce(param_1 + 0x1c);
    FUN_140457ffc(lVar1 + 0x118,param_1);
    return;
  }
  return;
}



// FUNCTION 147816ef0 FUN_147816ef0 body=101 status=ok
// SIG undefined FUN_147816ef0(void)

void FUN_147816ef0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  **(undefined1 **)(param_1 + 0x28) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x14);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
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



// FUNCTION 147816fc2 FUN_147816fc2 body=59 status=ok
// SIG undefined FUN_147816fc2(void)

undefined8 FUN_147816fc2(longlong *param_1)

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



// FUNCTION 1478170dc FUN_1478170dc body=59 status=ok
// SIG undefined FUN_1478170dc(void)

undefined8 FUN_1478170dc(longlong *param_1)

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



// FUNCTION 14781717e FUN_14781717e body=38 status=ok
// SIG undefined FUN_14781717e(void)

undefined8 FUN_14781717e(undefined8 param_1,int param_2)

{
  FUN_14781421e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478171a4 FUN_1478171a4 body=52 status=ok
// SIG undefined FUN_1478171a4(void)

void FUN_1478171a4(longlong *param_1)

{
  FUN_1478171d8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478171d8 FUN_1478171d8 body=337 status=ok
// SIG undefined FUN_1478171d8(void)

void FUN_1478171d8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_14781732a(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781732a FUN_14781732a body=54 status=ok
// SIG undefined FUN_14781732a(void)

void FUN_14781732a(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147817360 FUN_147817360 body=29 status=ok
// SIG undefined FUN_147817360(void)

void FUN_147817360(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 14781737e FUN_14781737e body=29 status=ok
// SIG undefined FUN_14781737e(void)

void FUN_14781737e(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 14781739c FUN_14781739c body=49 status=ok
// SIG undefined FUN_14781739c(void)

void FUN_14781739c(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478173c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1478173e4 FUN_1478173e4 body=54 status=ok
// SIG undefined FUN_1478173e4(void)

undefined1 FUN_1478173e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14781750a(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147817442 FUN_147817442 body=59 status=ok
// SIG undefined FUN_147817442(void)

undefined8 FUN_147817442(longlong *param_1)

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



// FUNCTION 147817488 FUN_147817488 body=52 status=ok
// SIG undefined FUN_147817488(void)

void FUN_147817488(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 14781750a FUN_14781750a body=85 status=ok
// SIG undefined FUN_14781750a(void)

longlong * FUN_14781750a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 147817560 FUN_147817560 body=280 status=ok
// SIG undefined FUN_147817560(void)

void FUN_147817560(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar5 = FUN_145e436a4();
  if (cVar5 == '\0') {
    FUN_1446f470e(&local_28,L"MediaModule",1);
    plVar7 = (longlong *)FUN_1447c1074(local_28);
    if (plVar7 != (longlong *)0x0) {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0xa8))(plVar7);
      plStack_30 = *(longlong **)(param_1 + 0x10);
      if (plStack_30 == (longlong *)0x0) {
LAB_147817607:
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
        bVar8 = true;
      }
      else {
        iVar6 = (int)plStack_30[1];
        do {
          if (iVar6 == 0) goto LAB_147817607;
          LOCK();
          iVar4 = (int)plStack_30[1];
          bVar8 = iVar6 == iVar4;
          if (bVar8) {
            *(int *)(plStack_30 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar8);
        local_38 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
        bVar8 = false;
      }
      plVar3 = plStack_30;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_38);
      plVar7 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (!bVar8) {
        LOCK();
        plVar7 = plVar3 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14781767a FUN_14781767a body=38 status=ok
// SIG undefined FUN_14781767a(void)

undefined8 FUN_14781767a(undefined8 param_1,int param_2)

{
  FUN_145e434fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478176a0 FUN_1478176a0 body=93 status=ok
// SIG undefined FUN_1478176a0(void)

void FUN_1478176a0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  plVar5 = *(longlong **)(param_1 + 8);
  if (plVar5 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001478176f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1478176fe FUN_1478176fe body=31 status=ok
// SIG undefined FUN_1478176fe(void)

undefined8 FUN_1478176fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147817738 FUN_147817738 body=29 status=ok
// SIG undefined FUN_147817738(void)

bool FUN_147817738(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147817756 FUN_147817756 body=26 status=ok
// SIG undefined FUN_147817756(void)

bool FUN_147817756(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147817770 FUN_147817770 body=101 status=ok
// SIG undefined FUN_147817770(void)

void FUN_147817770(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5981a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a598c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1478177d6 FUN_1478177d6 body=101 status=ok
// SIG undefined FUN_1478177d6(void)

void FUN_1478177d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5981a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a598c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14781783c FUN_14781783c body=134 status=ok
// SIG undefined FUN_14781783c(void)

void FUN_14781783c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5981a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a598c20;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478178b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478178c2 FUN_1478178c2 body=42 status=ok
// SIG undefined FUN_1478178c2(void)

void FUN_1478178c2(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001478178e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1478178ec FUN_1478178ec body=154 status=ok
// SIG undefined FUN_1478178ec(void)

bool FUN_1478178ec(longlong param_1,undefined4 param_2)

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



// FUNCTION 147817988 FUN_147817988 body=132 status=ok
// SIG undefined FUN_147817988(void)

void FUN_147817988(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147817a0e FUN_147817a0e body=319 status=ok
// SIG undefined FUN_147817a0e(void)

undefined4 * FUN_147817a0e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147817b4e(param_1,local_48);
  FUN_147817ca2(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_147817c34(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147817e54(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147817b4e FUN_147817b4e body=230 status=ok
// SIG undefined FUN_147817b4e(void)

int * FUN_147817b4e(longlong *param_1,int *param_2)

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



// FUNCTION 147817c34 FUN_147817c34 body=109 status=ok
// SIG undefined FUN_147817c34(void)

undefined8 FUN_147817c34(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_147817d56(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    FUN_147816a14(puVar1);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_147817de2(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 147817ca2 FUN_147817ca2 body=101 status=ok
// SIG undefined FUN_147817ca2(void)

undefined8 * FUN_147817ca2(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
  FUN_147817d08(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 147817d08 FUN_147817d08 body=77 status=ok
// SIG undefined FUN_147817d08(void)

undefined8 * FUN_147817d08(undefined8 *param_1,undefined8 *param_2)

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
    FUN_147816638(param_1,iVar1,0);
    FUN_14781669a(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147817d56 FUN_147817d56 body=140 status=ok
// SIG undefined FUN_147817d56(void)

int FUN_147817d56(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar5 = (longlong)iVar1;
        iVar2 = *(int *)(lVar4 + 8 + lVar5 * 0x28);
        if (iVar2 == *(int *)(param_3 + 1)) {
          if (iVar2 < 2) {
            return iVar1;
          }
          iVar2 = FUN_144a80a00(*(undefined8 *)(lVar4 + lVar5 * 0x28),*param_3);
          if (iVar2 == 0) {
            return iVar1;
          }
          lVar4 = *param_1;
        }
        else if (*(int *)(param_3 + 1) + iVar2 == 1) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + 0x20 + lVar5 * 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147817de2 FUN_147817de2 body=114 status=ok
// SIG undefined FUN_147817de2(void)

void FUN_147817de2(longlong *param_1,int param_2)

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



// FUNCTION 147817e54 FUN_147817e54 body=476 status=ok
// SIG undefined FUN_147817e54(void)

void FUN_147817e54(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147818032 FUN_147818032 body=98 status=ok
// SIG undefined FUN_147818032(void)

void FUN_147818032(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147818094 FUN_147818094 body=34 status=ok
// SIG undefined FUN_147818094(void)

void FUN_147818094(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a592e30;
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001478180b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1478180b6 FUN_1478180b6 body=29 status=ok
// SIG undefined FUN_1478180b6(void)

undefined8 FUN_1478180b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478180d4 FUN_1478180d4 body=186 status=ok
// SIG undefined FUN_1478180d4(void)

undefined8 FUN_1478180d4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  uint *puVar7;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  plVar3 = (longlong *)FUN_140633c48(param_1,&local_28);
  if (plVar3 != (longlong *)0x0) {
    iVar2 = FUN_140b132ac(plVar3,param_3);
    if ((0 < iVar2) && ((int)plVar3[9] != 0)) {
      plVar5 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[8];
      }
      puVar7 = (uint *)((longlong)plVar5 + (longlong)(int)((int)plVar3[9] - 1U & param_3) * 4);
      uVar4 = 0;
      do {
        lVar6 = (longlong)(int)*puVar7;
        if (lVar6 == -1) goto LAB_147818170;
        puVar1 = (uint *)(*plVar3 + lVar6 * 0x18);
        puVar7 = puVar1 + 4;
      } while (*puVar1 != param_3);
      uVar4 = *(undefined8 *)(*plVar3 + 8 + lVar6 * 0x18);
      goto LAB_147818170;
    }
  }
  uVar4 = 0;
LAB_147818170:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147818190 FUN_147818190 body=120 status=ok
// SIG undefined FUN_147818190(void)

undefined8 * FUN_147818190(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cabc968) {
    FUN_144b3d300(&DAT_14cabc968);
    if (DAT_14cabc968 == -1) {
      FUN_1446ddc76(&DAT_14cabc960,"FMediaPlayerProxy",1);
      _Init_thread_footer(&DAT_14cabc968);
    }
  }
  *param_1 = DAT_14cabc960;
  return param_1;
}



// FUNCTION 147818208 FUN_147818208 body=132 status=ok
// SIG undefined FUN_147818208(void)

void FUN_147818208(longlong param_1,int param_2)

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



// FUNCTION 14781828e FUN_14781828e body=317 status=ok
// SIG undefined FUN_14781828e(void)

int FUN_14781828e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    lVar5 = *(longlong *)*param_2;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    iVar12 = 0;
    iVar9 = 0;
    bVar3 = *plVar1 == lVar5;
    do {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar5 = lVar6;
      iVar4 = iVar9 + 1;
      if (iVar9 + 1 < iVar7) {
        iVar4 = iVar7;
      }
      do {
        lVar5 = lVar5 + 1;
        iVar11 = iVar4;
        if (lVar8 <= lVar5) break;
        lVar2 = *(longlong *)*param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar3 == (plVar1[lVar5] == lVar2));
      if (bVar3 == false) {
        if (iVar12 != iVar9) {
          memmove(plVar1 + iVar12,plVar1 + lVar6,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar12 = iVar12 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar3 = (bool)(bVar3 ^ 1);
    } while (lVar5 < lVar8);
    *(int *)(param_1 + 1) = iVar12;
    iVar7 = iVar7 - iVar12;
  }
  return iVar7;
}



// FUNCTION 1478183cc FUN_1478183cc body=62 status=ok
// SIG undefined FUN_1478183cc(void)

void FUN_1478183cc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14781840a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14781840a FUN_14781840a body=93 status=ok
// SIG undefined FUN_14781840a(void)

ulonglong FUN_14781840a(uint param_1,uint param_2)

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



// FUNCTION 147818468 FUN_147818468 body=132 status=ok
// SIG undefined FUN_147818468(void)

void FUN_147818468(longlong param_1,int param_2)

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



// FUNCTION 1478184ee FUN_1478184ee body=9 status=ok
// SIG undefined FUN_1478184ee(void)

void FUN_1478184ee(longlong param_1)

{
  FUN_147805bf6(param_1 + 0x10);
  return;
}



// FUNCTION 1478184f8 FUN_1478184f8 body=29 status=ok
// SIG undefined FUN_1478184f8(void)

undefined8 FUN_1478184f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147818516 FUN_147818516 body=24 status=ok
// SIG undefined FUN_147818516(void)

void FUN_147818516(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014781852a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14781852e FUN_14781852e body=29 status=ok
// SIG undefined FUN_14781852e(void)

undefined8 FUN_14781852e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14781854c FUN_14781854c body=344 status=ok
// SIG undefined FUN_14781854c(void)

undefined4 * FUN_14781854c(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1478186a6(param_1,local_40);
  FUN_147818848(param_3,local_38);
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  uVar1 = *local_38;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = 0;
  cVar2 = FUN_14781878c(param_1,uVar7,local_38);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0x24) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147818940(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478186a6 FUN_1478186a6 body=230 status=ok
// SIG undefined FUN_1478186a6(void)

int * FUN_1478186a6(longlong *param_1,int *param_2)

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



// FUNCTION 14781878c FUN_14781878c body=187 status=ok
// SIG undefined FUN_14781878c(void)

void FUN_14781878c(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (longlong *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*plVar9 == *param_3) {
          if (plVar9[2] != 0) {
            FUN_1400020a8();
          }
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar9 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar9 + 0x14) = uVar3;
          *(int *)(plVar9 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar9 + 0x1c) = uVar4;
          *(int *)plVar9 = (int)lVar5;
          *(undefined4 *)((longlong)plVar9 + 4) = uVar1;
          *(int *)(plVar9 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar9 + 0xc) = uVar2;
          FUN_1478188b6(param_1,*param_4,1);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_1478187fe;
        }
        iVar10 = (int)plVar9[4];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_1478187fe:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 147818848 FUN_147818848 body=110 status=ok
// SIG undefined FUN_147818848(void)

undefined8 * FUN_147818848(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Src;
  
  puVar2 = (undefined4 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  *(undefined4 *)(param_2 + 1) = *puVar2;
  param_2[2] = 0;
  iVar1 = puVar2[4];
  _Src = *(void **)(puVar2 + 2);
  *(int *)(param_2 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_2 + 2,iVar1,0);
    memcpy((void *)param_2[2],_Src,(longlong)iVar1);
  }
  return param_2;
}



// FUNCTION 1478188b6 FUN_1478188b6 body=138 status=ok
// SIG undefined FUN_1478188b6(void)

void FUN_1478188b6(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147818940 FUN_147818940 body=473 status=ok
// SIG undefined FUN_147818940(void)

void FUN_147818940(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 147818b30 FUN_147818b30 body=53 status=ok
// SIG undefined FUN_147818b30(void)

undefined8 * FUN_147818b30(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a598d20;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147818b66 FUN_147818b66 body=53 status=ok
// SIG undefined FUN_147818b66(void)

ulonglong FUN_147818b66(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147818b9c FUN_147818b9c body=132 status=ok
// SIG undefined FUN_147818b9c(void)

void FUN_147818b9c(longlong param_1,int param_2)

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



// FUNCTION 147818c22 FUN_147818c22 body=307 status=ok
// SIG undefined FUN_147818c22(void)

undefined4 * FUN_147818c22(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147818d56(param_1,local_48);
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_14781732a(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = (uint)((ulonglong)*local_40 >> 0x20) ^ (uint)*local_40;
  cVar2 = FUN_147818e3c(param_1,uVar7,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x1c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147819058(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147818d56 FUN_147818d56 body=229 status=ok
// SIG undefined FUN_147818d56(void)

int * FUN_147818d56(longlong *param_1,int *param_2)

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



// FUNCTION 147818e3c FUN_147818e3c body=189 status=ok
// SIG undefined FUN_147818e3c(void)

undefined8 FUN_147818e3c(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    iVar7 = FUN_147818efa();
    if (iVar7 != -1) {
      lVar2 = *param_1;
      lVar9 = (longlong)iVar7 * 0x20;
      puVar1 = (undefined4 *)(lVar2 + lVar9);
      FUN_14781732a(*(undefined8 *)(lVar2 + 8 + lVar9),*(undefined4 *)(lVar2 + 0x10 + lVar9));
      if (*(longlong *)(lVar2 + 8 + lVar9) != 0) {
        FUN_1400020a8();
      }
      uVar3 = *(undefined4 *)param_3;
      uVar4 = *(undefined4 *)((longlong)param_3 + 4);
      uVar5 = *(undefined4 *)(param_3 + 1);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_3[2];
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_147818fb0(param_1,*param_4);
      *param_4 = iVar7;
      uVar8 = 1;
      goto LAB_147818e66;
    }
  }
  uVar8 = 0;
LAB_147818e66:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147818efa FUN_147818efa body=180 status=ok
// SIG undefined FUN_147818efa(void)

int FUN_147818efa(longlong *param_1,uint param_2,undefined8 *param_3)

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
        cVar1 = FUN_147819022(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_147818f88;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_147818f88:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147818fb0 FUN_147818fb0 body=114 status=ok
// SIG undefined FUN_147818fb0(void)

void FUN_147818fb0(longlong *param_1,int param_2)

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



// FUNCTION 147819022 FUN_147819022 body=53 status=ok
// SIG undefined FUN_147819022(void)

ulonglong FUN_147819022(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147819058 FUN_147819058 body=439 status=ok
// SIG undefined FUN_147819058(void)

void FUN_147819058(longlong *param_1)

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
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 147819210 FUN_147819210 body=132 status=ok
// SIG undefined FUN_147819210(void)

void FUN_147819210(longlong param_1,int param_2)

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



// FUNCTION 147819296 FUN_147819296 body=62 status=ok
// SIG undefined FUN_147819296(void)

void FUN_147819296(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147819346(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1478192d4 FUN_1478192d4 body=113 status=ok
// SIG undefined FUN_1478192d4(void)

void FUN_1478192d4(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
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
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    iVar5 = 1;
    if (iVar6 < 1) {
      iVar5 = iVar6;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar2),
            (void *)((longlong)(iVar4 - iVar5) * 0x10 + lVar2),(longlong)iVar5 << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 147819346 FUN_147819346 body=93 status=ok
// SIG undefined FUN_147819346(void)

ulonglong FUN_147819346(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 1478193a4 FUN_1478193a4 body=31 status=ok
// SIG undefined FUN_1478193a4(void)

undefined8 FUN_1478193a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478193e0 FUN_1478193e0 body=93 status=ok
// SIG undefined FUN_1478193e0(void)

void FUN_1478193e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a598e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14781943e FUN_14781943e body=126 status=ok
// SIG undefined FUN_14781943e(void)

void FUN_14781943e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a598e30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478194ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478194bc FUN_1478194bc body=21 status=ok
// SIG undefined FUN_1478194bc(void)

undefined8 FUN_1478194bc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1478194d2 FUN_1478194d2 body=38 status=ok
// SIG undefined FUN_1478194d2(void)

undefined8 FUN_1478194d2(undefined8 param_1,int param_2)

{
  FUN_145c72586();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478194fc FUN_1478194fc body=87 status=ok
// SIG undefined FUN_1478194fc(void)

int FUN_1478194fc(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_14781992c((longlong *)(param_1 + 8),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
  FUN_1478199b2(lVar2 + lVar3,param_2);
  return iVar1;
}



// FUNCTION 147819554 FUN_147819554 body=73 status=ok
// SIG undefined FUN_147819554(void)

void FUN_147819554(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (*(int *)(*(longlong *)(param_1 + 8) + 8 + (longlong)param_2 * 0x10) != 0) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 0x10);
    puVar1 = (undefined8 *)*plVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(plVar2,0,0,0x10);
      *(undefined4 *)(plVar2 + 1) = 0;
    }
  }
  return;
}



// FUNCTION 14781959e FUN_14781959e body=129 status=ok
// SIG undefined FUN_14781959e(void)

longlong FUN_14781959e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  *param_3 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    do {
      if (((*(int *)(lVar2 + 8 + lVar6) != 0) && (*(longlong **)(lVar2 + lVar6) != (longlong *)0x0))
         && (cVar3 = (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x30))(), cVar3 != '\0')) {
        if (*(int *)(lVar2 + 8 + lVar6) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(lVar2 + lVar6);
        }
        lVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,param_2,param_3);
        if (lVar4 != 0) {
          return lVar4;
        }
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar6);
  }
  return 0;
}



// FUNCTION 14781962a FUN_14781962a body=67 status=ok
// SIG undefined FUN_14781962a(void)

void FUN_14781962a(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0x28),0,0,0x10);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  return;
}



// FUNCTION 14781966e FUN_14781966e body=133 status=ok
// SIG undefined FUN_14781966e(void)

undefined8 FUN_14781966e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  FUN_147819ba2(&local_38,param_3);
  FUN_147819aba(param_1 + 0x38,param_2,&local_38);
  FUN_1449db362(&local_38);
  FUN_1449db362(param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781970e FUN_14781970e body=67 status=ok
// SIG undefined FUN_14781970e(void)

undefined8 FUN_14781970e(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x30) != 0) && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x30) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x28);
      }
                    /* WARNING: Could not recover jumptable at 0x000147819741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147819752 FUN_147819752 body=107 status=ok
// SIG undefined FUN_147819752(void)

longlong * FUN_147819752(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_14117a870();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 1478197be FUN_1478197be body=71 status=ok
// SIG undefined FUN_1478197be(void)

longlong FUN_1478197be(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_147811eb5(param_2,0,8);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14780c560(lVar1,param_1);
  return lVar1;
}



// FUNCTION 147819828 FUN_147819828 body=93 status=ok
// SIG undefined FUN_147819828(void)

void FUN_147819828(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a599010;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a598fa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147819886 FUN_147819886 body=126 status=ok
// SIG undefined FUN_147819886(void)

void FUN_147819886(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a599010;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a598fa0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478198f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147819912 FUN_147819912 body=23 status=ok
// SIG undefined FUN_147819912(void)

undefined8 FUN_147819912(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 14781992c FUN_14781992c body=132 status=ok
// SIG undefined FUN_14781992c(void)

void FUN_14781992c(longlong param_1,int param_2)

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



// FUNCTION 1478199b2 FUN_1478199b2 body=130 status=ok
// SIG undefined FUN_1478199b2(void)

void FUN_1478199b2(longlong *param_1,longlong *param_2)

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



// FUNCTION 147819a36 FUN_147819a36 body=130 status=ok
// SIG undefined FUN_147819a36(void)

void FUN_147819a36(longlong *param_1,longlong *param_2)

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



// FUNCTION 147819aba FUN_147819aba body=230 status=ok
// SIG undefined FUN_147819aba(void)

undefined8 * FUN_147819aba(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 147819ba2 FUN_147819ba2 body=130 status=ok
// SIG undefined FUN_147819ba2(void)

void FUN_147819ba2(longlong *param_1,longlong *param_2)

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



// FUNCTION 147819c26 FUN_147819c26 body=193 status=ok
// SIG undefined FUN_147819c26(void)

void FUN_147819c26(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147819cbd;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147819cbd:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147819ce7 FUN_147819ce7 body=62 status=ok
// SIG undefined FUN_147819ce7(void)

void FUN_147819ce7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)plVar1[-2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-2] + 0x10))();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147819d25 FUN_147819d25 body=38 status=ok
// SIG undefined FUN_147819d25(void)

void FUN_147819d25(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147819d4c(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 147819d4c FUN_147819d4c body=63 status=ok
// SIG undefined FUN_147819d4c(void)

void FUN_147819d4c(longlong *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147819d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 147819d8c FUN_147819d8c body=132 status=ok
// SIG undefined FUN_147819d8c(void)

void FUN_147819d8c(longlong param_1,int param_2)

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



// FUNCTION 147819e12 FUN_147819e12 body=62 status=ok
// SIG undefined FUN_147819e12(void)

void FUN_147819e12(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147819e50(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 147819e50 FUN_147819e50 body=93 status=ok
// SIG undefined FUN_147819e50(void)

ulonglong FUN_147819e50(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 147819eae FUN_147819eae body=132 status=ok
// SIG undefined FUN_147819eae(void)

void FUN_147819eae(longlong param_1,int param_2)

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



// FUNCTION 147819f33 FUN_147819f33 body=490 status=ok
// SIG undefined FUN_147819f33(void)

void FUN_147819f33(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,undefined8 param_6,undefined8 param_7,undefined1 *param_8,
                  undefined8 param_9,undefined1 *param_10,undefined1 *param_11)

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
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = param_2;
  lVar11 = FUN_144821ef4(&DAT_14ca85100);
  uVar5 = *param_1;
  local_68 = *param_11;
  local_70 = *param_10;
  local_80 = *param_8;
  local_50 = *param_5;
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_58 = *param_4;
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  local_78 = param_9;
  local_88 = param_7;
  local_90 = param_6;
  local_98 = &local_50;
  FUN_14741d602(uVar5,lVar11,param_3,&local_58);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
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
    puVar12[2] = local_60;
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
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781a11e FUN_14781a11e body=440 status=ok
// SIG undefined FUN_14781a11e(void)

void FUN_14781a11e(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6,undefined8 param_7,undefined1 *param_8,
                  undefined1 *param_9)

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
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = param_2;
  lVar11 = FUN_144821ef4(&DAT_14ca85100);
  uVar5 = *param_1;
  local_68 = *param_9;
  local_70 = *param_8;
  local_80 = *param_6;
  local_50 = *param_3;
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_78 = param_7;
  local_88 = param_5;
  FUN_14741d9b8(uVar5,lVar11,&local_50,param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
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
    puVar12[2] = local_58;
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
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781a2d7 FUN_14781a2d7 body=467 status=ok
// SIG undefined FUN_14781a2d7(void)

void FUN_14781a2d7(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 *param_9,undefined1 *param_10)

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
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar11 = FUN_144821ef4(&DAT_14ca85100);
  uVar5 = *param_1;
  local_60 = *param_10;
  local_68 = *param_9;
  local_50 = *param_5;
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_58 = *param_4;
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  local_70 = param_8;
  local_78 = param_7;
  local_80 = param_6;
  local_88 = &local_50;
  FUN_14741de6a(uVar5,lVar11,param_3,&local_58);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
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
    puVar12[2] = param_2;
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
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781a4ab FUN_14781a4ab body=436 status=ok
// SIG undefined FUN_14781a4ab(void)

void FUN_14781a4ab(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 *param_8,
                  undefined1 *param_9)

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
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = param_2;
  lVar11 = FUN_144821ef4(&DAT_14ca85100);
  uVar5 = *param_1;
  local_68 = *param_9;
  local_70 = *param_8;
  local_50 = *param_4;
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_78 = param_7;
  local_80 = param_6;
  local_88 = param_5;
  FUN_14741e208(uVar5,lVar11,param_3,&local_50);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
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
    puVar12[2] = local_58;
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
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781a660 FUN_14781a660 body=488 status=ok
// SIG undefined FUN_14781a660(void)

void FUN_14781a660(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6,undefined8 param_7,undefined1 *param_8,
                  undefined1 *param_9,undefined1 *param_10,undefined1 *param_11,undefined1 *param_12
                  )

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
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = param_2;
  lVar11 = FUN_144821ef4(&DAT_14ca85100);
  uVar5 = *param_1;
  local_60 = *param_12;
  local_68 = *param_11;
  local_70 = *param_10;
  local_78 = *param_9;
  local_80 = *param_8;
  local_90 = *param_6;
  local_50 = *param_3;
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_88 = param_7;
  local_98 = param_5;
  FUN_14741f4f8(uVar5,lVar11,&local_50,param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
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
    puVar12[2] = local_58;
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
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781a849 FUN_14781a849 body=440 status=ok
// SIG undefined FUN_14781a849(void)

void FUN_14781a849(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6,undefined8 param_7,undefined1 *param_8,
                  undefined1 *param_9)

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
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = param_2;
  lVar11 = FUN_144821ef4(&DAT_14ca85100);
  uVar5 = *param_1;
  local_68 = *param_9;
  local_70 = *param_8;
  local_80 = *param_6;
  local_50 = *param_3;
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_78 = param_7;
  local_88 = param_5;
  FUN_14741f880(uVar5,lVar11,&local_50,param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
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
    puVar12[2] = local_58;
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
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781aa02 FUN_14781aa02 body=427 status=ok
// SIG undefined FUN_14781aa02(void)

void FUN_14781aa02(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,undefined1 *param_7,undefined1 *param_8)

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
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = param_2;
  lVar11 = FUN_144821ef4(&DAT_14ca85100);
  uVar5 = *param_1;
  local_60 = *param_8;
  local_68 = *param_7;
  local_78 = *param_5;
  local_50 = *param_3;
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_70 = param_6;
  FUN_14741fbba(uVar5,lVar11,&local_50,param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
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
    puVar12[2] = local_58;
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781abae FUN_14781abae body=404 status=ok
// SIG undefined FUN_14781abae(void)

void FUN_14781abae(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,undefined1 *param_7)

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
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar11 = FUN_144821ef4(&DAT_14ca85100);
  uVar5 = *param_1;
  local_58 = *param_7;
  local_68 = *param_5;
  local_50 = *param_3;
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_60 = param_6;
  FUN_14741e662(uVar5,lVar11,&local_50,param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
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
    puVar12[2] = param_2;
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781ad43 FUN_14781ad43 body=404 status=ok
// SIG undefined FUN_14781ad43(void)

void FUN_14781ad43(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,undefined1 *param_7)

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
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar11 = FUN_144821ef4(&DAT_14ca85100);
  uVar5 = *param_1;
  local_58 = *param_7;
  local_68 = *param_5;
  local_50 = *param_3;
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_60 = param_6;
  FUN_14741fedc(uVar5,lVar11,&local_50,param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
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
    puVar12[2] = param_2;
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781aed8 FUN_14781aed8 body=371 status=ok
// SIG undefined FUN_14781aed8(void)

void FUN_14781aed8(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined1 *param_5)

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
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar11 = FUN_144821ef4(&DAT_14ca85100);
  uVar5 = *param_1;
  local_58 = *param_5;
  local_48 = *param_3;
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  FUN_14741d2e8(uVar5,lVar11,&local_48,param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
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
    puVar12[2] = param_2;
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781b04c FUN_14781b04c body=388 status=ok
// SIG undefined FUN_14781b04c(void)

void FUN_14781b04c(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined1 *param_5)

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
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined *local_60;
  undefined1 local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar11 = FUN_144821ef4(&DAT_14ca85100);
  uVar5 = *param_1;
  local_68 = *param_5;
  local_48 = *param_3;
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_60 = &DAT_14cabc8f0;
  local_58 = 0;
  FUN_14741e662(uVar5,lVar11,&local_48,param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
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
    puVar12[2] = param_2;
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
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781b1d1 FUN_14781b1d1 body=404 status=ok
// SIG undefined FUN_14781b1d1(void)

void FUN_14781b1d1(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,undefined1 *param_7)

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
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar11 = FUN_144821ef4(&DAT_14ca85100);
  uVar5 = *param_1;
  local_58 = *param_7;
  local_68 = *param_5;
  local_50 = *param_3;
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_60 = param_6;
  FUN_14741e9cc(uVar5,lVar11,&local_50,param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
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
    puVar12[2] = param_2;
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781b366 FUN_14781b366 body=422 status=ok
// SIG undefined FUN_14781b366(void)

void FUN_14781b366(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6,undefined8 param_7,undefined1 *param_8)

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
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = param_2;
  lVar11 = FUN_144821ef4(&DAT_14ca85100);
  uVar5 = *param_1;
  local_60 = *param_8;
  local_70 = *param_6;
  local_50 = *param_3;
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_68 = param_7;
  local_78 = param_5;
  FUN_147420ec0(uVar5,lVar11,&local_50,param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
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
    puVar12[2] = local_58;
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781b50d FUN_14781b50d body=397 status=ok
// SIG undefined FUN_14781b50d(void)

void FUN_14781b50d(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6)

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
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar11 = FUN_144821ef4(&DAT_14ca85100);
  uVar5 = *param_1;
  local_40 = *param_4;
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_48 = *param_3;
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_50 = param_6;
  local_58 = param_5;
  FUN_14742086e(uVar5,lVar11,&local_48,&local_40);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
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
    puVar12[2] = param_2;
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
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781b6a8 FUN_14781b6a8 body=293 status=ok
// SIG undefined FUN_14781b6a8(void)

longlong * FUN_14781b6a8(int *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_1[1] == 0 && *param_1 == 0) && param_1[2] == 0) && param_1[3] == 0) ||
     (*param_3 == 0)) {
    *param_2 = 0;
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xfc;
    *(undefined1 *)(param_2 + 2) = 0;
    goto LAB_14781b716;
  }
  FUN_144a79778();
  local_30 = 0;
  local_28 = *param_1;
  iStack_24 = param_1[1];
  iStack_20 = param_1[2];
  iStack_1c = param_1[3];
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (((iStack_24 == 0 && local_28 == 0) && iStack_20 == 0) && iStack_1c == 0) {
LAB_14781b79c:
      lVar3 = 0;
    }
    else {
      lVar4 = thunk_FUN_140971090();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar4 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(&local_30,lVar4);
        if (lVar4 == 0) goto LAB_14781b79c;
      }
      else {
        uVar1 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(&local_30,lVar4);
        }
      }
      lVar3 = 0;
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
        lVar3 = lVar4;
      }
    }
  }
  *param_2 = lVar3;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
LAB_14781b716:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14781b7ce FUN_14781b7ce body=190 status=ok
// SIG undefined FUN_14781b7ce(void)

longlong * FUN_14781b7ce(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  longlong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (longlong *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a5dc74(&local_38);
  local_28 = local_28 & 0xffffff0000000000;
  FUN_144a5dc74(local_48);
  plVar2 = (longlong *)FUN_147027222(&local_38,local_48);
  plVar1 = (longlong *)*plVar2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)plVar2[1];
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)plVar2 + 0x14);
  *(int *)(param_1 + 2) = (int)plVar2[2];
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781b892 FUN_14781b892 body=150 status=ok
// SIG undefined FUN_14781b892(void)

void FUN_14781b892(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781b92a FUN_14781b92a body=176 status=ok
// SIG undefined FUN_14781b92a(void)

void FUN_14781b92a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781b9dc FUN_14781b9dc body=176 status=ok
// SIG undefined FUN_14781b9dc(void)

void FUN_14781b9dc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781ba8e FUN_14781ba8e body=164 status=ok
// SIG undefined FUN_14781ba8e(void)

void FUN_14781ba8e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
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
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781bb36 FUN_14781bb36 body=551 status=ok
// SIG undefined FUN_14781bb36(void)

void FUN_14781bb36(longlong param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 *local_40;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  local_58 = 0;
  lVar4 = FUN_14781bd5e(param_1,0,8,0);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  *(longlong *)(param_1 + 0x70) = lVar4;
  iVar2 = *DAT_14cabca80;
  *(bool *)(lVar4 + 0x128) = iVar2 == 0;
  if ((iVar2 != 0) && (*(char *)(lVar4 + 0x129) == '\0')) {
    *(undefined1 *)(lVar4 + 0x129) = 1;
  }
  local_30 = 0x10000ea60;
  local_40 = (undefined2 *)0x0;
  local_38 = *(int *)(DAT_14cabca98 + 1);
  lVar4 = (longlong)local_38;
  pvVar3 = (void *)*DAT_14cabca98;
  if (lVar4 == 0) {
    local_34 = 0;
LAB_14781bc13:
    puVar5 = &DAT_149dfb77a;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar3,lVar4 * 2);
    puVar5 = local_40;
    if (local_38 == 0) goto LAB_14781bc13;
  }
  FUN_140f5b025(&local_30,puVar5);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x118) = local_30;
  local_48 = 0x10000001e;
  local_40 = (undefined2 *)0x0;
  local_38 = *(int *)(DAT_14cabcab0 + 1);
  lVar4 = (longlong)local_38;
  pvVar3 = (void *)*DAT_14cabcab0;
  if (lVar4 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar3,lVar4 * 2);
    puVar5 = local_40;
    if (local_38 != 0) goto LAB_14781bcb2;
  }
  puVar5 = &DAT_149dfb77a;
LAB_14781bcb2:
  FUN_140f5b025(&local_48,puVar5);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x120) = local_48;
  cVar1 = *DAT_14cabcac8;
  lVar4 = *(longlong *)(param_1 + 0x70);
  *(char *)(lVar4 + 0x129) = cVar1;
  if (cVar1 != '\x06') {
    *(undefined8 *)(lVar4 + 0x130) = 0;
    *(undefined8 *)(lVar4 + 0x138) = 0;
    *(undefined4 *)(lVar4 + 0x148) = 0;
    if (*(int *)(lVar4 + 0x14c) < 0) {
      FUN_1446f8c06((undefined8 *)(lVar4 + 0x140),0);
    }
    puVar5 = *(undefined2 **)(lVar4 + 0x140);
    if (puVar5 != (undefined2 *)0x0) {
      *puVar5 = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14781bd5e FUN_14781bd5e body=246 status=ok
// SIG undefined FUN_14781bd5e(void)

undefined8
FUN_14781bd5e(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

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
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_14073751e();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
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



// FUNCTION 14781be56 FUN_14781be56 body=320 status=ok
// SIG undefined FUN_14781be56(void)

longlong FUN_14781be56(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  local_48 = param_3;
  FUN_1446ddc76(&local_60,"LevelSequence",1);
  uVar3 = FUN_144a52528();
  plVar4 = (longlong *)FUN_14493e38c(uVar3,local_60);
  (**(code **)(*plVar4 + 0x48))(plVar4,&local_58);
  if ((longlong)(int)uStack_50 != 0) {
    puVar6 = local_58 + (longlong)(int)uStack_50 * 2;
    puVar7 = local_58;
    do {
      plVar4 = (longlong *)*puVar7;
      plVar2 = (longlong *)puVar7[1];
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      lVar5 = (**(code **)(*plVar4 + 0x38))
                        (plVar4,param_2,*(undefined8 *)(param_1 + 0x70),&local_48);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar2 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if (lVar5 != 0) goto LAB_14781bf50;
      puVar7 = puVar7 + 2;
      param_3 = local_48;
    } while (puVar7 != puVar6);
  }
  lVar5 = FUN_14757115c(param_2,*(undefined8 *)(param_1 + 0x70),param_3);
LAB_14781bf50:
  FUN_1409f5b5f(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14781bf98 FUN_14781bf98 body=119 status=ok
// SIG undefined FUN_14781bf98(void)

undefined8 FUN_14781bf98(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_144a6c4d8();
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
LAB_14781bfc0:
    lVar1 = FUN_144a78d6a();
    if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      lVar2 = lVar1 + 0x30;
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar2) goto LAB_14781bff6;
    }
    lVar1 = FUN_1402e44f4();
    if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                       *(longlong *)
                        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                        (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30);
    }
  }
  else {
    lVar2 = lVar1 + 0x30;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar2) goto LAB_14781bfc0;
LAB_14781bff6:
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 14781c02c FUN_14781c02c body=142 status=ok
// SIG undefined FUN_14781c02c(void)

void FUN_14781c02c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147025b26(&local_38,param_3,param_4,0);
  iVar1 = 0;
  if (local_30 != 0) {
    FUN_14756f8ee(param_1,param_2,&local_38);
    iVar1 = local_30;
  }
  FUN_140843826(local_38,iVar1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781c0c0 FUN_14781c0c0 body=22 status=ok
// SIG undefined FUN_14781c0c0(void)

undefined8 FUN_14781c0c0(undefined8 param_1,undefined8 param_2)

{
  FUN_147576420();
  return param_2;
}



// FUNCTION 14781c0d6 FUN_14781c0d6 body=217 status=ok
// SIG undefined FUN_14781c0d6(void)

undefined8 *
FUN_14781c0d6(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  longlong local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    lVar4 = FUN_1405e0c42(*param_4 + 0x38);
    if (lVar4 != 0) {
      FUN_14755582a(lVar4,local_34,param_1);
      local_48 = *param_4;
      local_40 = param_4[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      local_58 = &local_48;
      FUN_147555ab2(lVar4,param_2,param_3,local_34);
      goto LAB_14781c164;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14781c164:
  plVar3 = (longlong *)param_4[1];
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
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781c1b0 FUN_14781c1b0 body=124 status=ok
// SIG undefined FUN_14781c1b0(void)

longlong FUN_14781c1b0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_144a78d6a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      return param_2[0x15];
    }
    lVar1 = FUN_1402e44f4();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30)) && (lVar1 = (**(code **)(*param_2 + 0x180))(param_2), lVar1 != 0)) {
      lVar1 = FUN_144a49ec8(param_2);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14781c22c FUN_14781c22c body=225 status=ok
// SIG undefined FUN_14781c22c(void)

ulonglong FUN_14781c22c(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_147571558(&local_38);
  lVar1 = local_38;
  if ((longlong)(int)uStack_30 == 0) {
    uVar5 = 0;
  }
  else {
    lVar4 = (longlong)(int)uStack_30 * 8;
    lVar3 = 0;
    do {
      lVar6 = *(longlong *)(lVar1 + lVar3);
      if ((((lVar6 == 0) || (lVar2 = FUN_145909298(), lVar2 == 0)) ||
          (*(int *)(lVar6 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(lVar1 + lVar3);
      }
      lVar2 = FUN_1458f06e6();
      if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
        goto LAB_14781c2d5;
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 != lVar3);
    uVar5 = 0;
  }
LAB_14781c2d5:
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14781c340 FUN_14781c340 body=251 status=ok
// SIG undefined FUN_14781c340(void)

void FUN_14781c340(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_38 = *(longlong *)(param_2 + 0x10);
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    lVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_38);
    if (lVar2 != 0) {
      local_40 = lVar2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      local_30 = &local_40;
      FUN_1474be378(param_1 + 5);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[6];
    *(uint *)(param_1 + 6) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x34) < iVar1 + 1U) {
      FUN_140730f78(param_1 + 5,iVar1);
    }
    *(longlong *)(param_1[5] + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781c43c FUN_14781c43c body=172 status=ok
// SIG undefined FUN_14781c43c(void)

longlong FUN_14781c43c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar4 * 8);
      if (lVar1 != 0) {
        lVar3 = *param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
LAB_14781c47f:
          lVar2 = FUN_144ae113c();
          if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)) goto LAB_14781c4a1;
        }
        else {
          if (lVar3 != 0) goto LAB_14781c47f;
LAB_14781c4a1:
          lVar3 = 0;
        }
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          return lVar1;
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x30));
  }
  return 0;
}



// FUNCTION 14781c4e8 FUN_14781c4e8 body=256 status=ok
// SIG undefined FUN_14781c4e8(void)

void FUN_14781c4e8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x30);
  if (0 < iVar3) {
    lVar6 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + -8 + lVar6 * 8);
      if (lVar1 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_14781c535:
          lVar4 = FUN_144ae113c();
          if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) goto LAB_14781c557;
        }
        else {
          if (lVar5 != 0) goto LAB_14781c535;
LAB_14781c557:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) {
          iVar3 = *(int *)(param_1 + 0x30);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x30);
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            if (iVar3 != (int)lVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x28) + lVar6 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0x28) + lVar6 * 8),
                      (longlong)(iVar3 - (int)lVar6) << 3);
              iVar3 = *(int *)(param_1 + 0x30);
            }
            *(int *)(param_1 + 0x30) = iVar3 + -1;
            FUN_1474be4b6((longlong *)(param_1 + 0x28));
            return;
          }
        }
      }
      bVar2 = lVar6 < iVar3;
      lVar6 = lVar6 + 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 14781c5f2 FUN_14781c5f2 body=264 status=ok
// SIG undefined FUN_14781c5f2(void)

void FUN_14781c5f2(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_58 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_50 = (int)uStack_30;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,uStack_30 & 0xffffffff,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  FUN_14781c6fc(param_1,&local_68);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781c6fc FUN_14781c6fc body=68 status=ok
// SIG undefined FUN_14781c6fc(void)

void FUN_14781c6fc(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 0x40,param_2 + 4);
  FUN_14781ecd0(param_1);
  if (*(longlong *)(param_2 + 4) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14781c750 FUN_14781c750 body=345 status=ok
// SIG undefined FUN_14781c750(void)

void FUN_14781c750(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = DAT_14cabca0c;
  uStack_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_38;
  uStack_64 = local_38._4_4_;
  uStack_60 = (undefined4)uStack_30;
  uStack_5c = uStack_30._4_4_;
  local_58 = CONCAT44(uStack_24,local_28);
  FUN_14781c8aa(param_1,&local_68,local_40,local_44 != 0);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781c8aa FUN_14781c8aa body=657 status=ok
// SIG undefined FUN_14781c8aa(void)

void FUN_14781c8aa(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_118 [32];
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined8 local_e8;
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
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((param_2[1] == 0 && *param_2 == 0) && param_2[2] == 0) && param_2[3] == 0) {
    FUN_1446ddc76(local_90,&DAT_14a492018,1);
    FUN_14276766e(local_88,local_90);
    local_48 = L"AddBinding_Warning";
    local_40 = 0x12;
    FUN_1446e940c(local_a4,&local_48);
    local_48 = L"LevelSequenceActor";
    local_40 = 0x12;
    FUN_1446e940c(local_a8,&local_48);
    FUN_140208bae(local_a0,local_a8,local_a4,L"The specified binding ID is not valid");
    FUN_1427679d4(local_88,&local_48,local_a0);
    pwVar4 = local_48;
    FUN_144a5dc74(local_d8);
    FUN_1468756a4(&local_c8,param_1,local_d8);
    local_b8 = local_c8;
    local_b0 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    FUN_1467eb24e(pwVar4,local_58,&local_b8);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    plVar3 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_c0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    plVar3 = (longlong *)CONCAT44(uStack_3c,local_40);
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
    if (local_a0[0] != (longlong *)0x0) {
      (**(code **)(*local_a0[0] + 0x10))();
    }
    FUN_1427678c0(local_88);
  }
  else {
    local_e8 = *(undefined8 *)(param_2 + 4);
    local_f8 = *param_2;
    iStack_f4 = param_2[1];
    iStack_f0 = param_2[2];
    iStack_ec = param_2[3];
    FUN_140e06a08(*(undefined8 *)(param_1 + 0x3f0));
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      FUN_146340746(param_2,local_88,DAT_14cabca0c,*(longlong *)(param_1 + 0x3d0) + 0x28);
      FUN_140e06640(*(longlong *)(param_1 + 0x3d0) + 0x38,param_2,local_88);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781cb42 FUN_14781cb42 body=311 status=ok
// SIG undefined FUN_14781cb42(void)

void FUN_14781cb42(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14781cc7a(param_1,local_20,local_28,local_2c != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781cc7a FUN_14781cc7a body=1148 status=ok
// SIG undefined FUN_14781cc7a(void)

void FUN_14781cc7a(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined1 local_148 [4];
  undefined1 local_144 [4];
  longlong *local_140 [2];
  longlong *local_130;
  longlong *local_128;
  longlong *local_120 [2];
  longlong *local_110 [2];
  undefined1 local_100 [8];
  undefined1 local_f8 [48];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  wchar_t **local_70;
  ulonglong *local_68;
  wchar_t *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_98 = param_2;
  if ((*(longlong **)(param_1 + 0x3d8) != (longlong *)0x0) &&
     (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x2e8))(),
     *(int *)(lVar9 + 0x98) != *(int *)(lVar9 + 0xc4))) {
    uVar5 = (uint)((ulonglong)param_2 >> 0x10);
    uVar11 = (uint)param_2 & 0xffff;
    lVar12 = lVar9 + 200;
    if (*(longlong *)(lVar9 + 0xd0) != 0) {
      lVar12 = *(longlong *)(lVar9 + 0xd0);
    }
    iVar10 = *(int *)(lVar12 + (ulonglong)
                               (*(int *)(lVar9 + 0xd8) - 1U &
                               (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar11)
                               + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        lVar12 = *(longlong *)(lVar9 + 0x90) + (longlong)iVar10 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar9 + 0x90) + (longlong)iVar10 * 0x20) == param_2) {
          if ((lVar12 + 8U & 0xfffffffffffffff7) != 0) {
            iVar10 = *(int *)(lVar12 + 0x10);
            if ((longlong)iVar10 != 0) {
              lVar9 = *(longlong *)(lVar12 + 8);
              lVar12 = 0;
              do {
                puVar4 = (undefined4 *)(lVar9 + lVar12);
                local_b8 = *puVar4;
                uStack_b4 = puVar4[1];
                uStack_b0 = puVar4[2];
                uStack_ac = puVar4[3];
                local_a8 = *(undefined8 *)(lVar9 + 0x10 + lVar12);
                FUN_14781c8aa(param_1,&local_b8,param_3,param_4);
                lVar12 = lVar12 + 0x18;
              } while ((longlong)iVar10 * 0x18 != lVar12);
            }
            goto LAB_14781cfda;
          }
          break;
        }
        iVar10 = *(int *)(lVar12 + 0x18);
      } while (iVar10 != -1);
    }
  }
  if (DAT_14c761210 == '\x01') {
    FUN_1446ddc76(local_100,&DAT_14a492018,1);
    FUN_14276766e(local_f8,local_100);
    FUN_145715fae(local_120,&local_98);
    local_60 = L"AddBindingByTag";
    local_58 = 0xf;
    FUN_1446e940c(local_144,&local_60);
    local_60 = L"LevelSequenceActor";
    local_58 = 0x12;
    FUN_1446e940c(local_148,&local_60);
    FUN_140208bae(local_140,local_148,local_144,
                  L"Sequence did not contain any bindings with the tag \'{0}\'");
    FUN_14023409e(&local_130,local_140,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_120);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_130;
    local_88 = local_128;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_128 + 1) = (int)local_128[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_110,&local_90,&local_70);
    FUN_14007f2db(local_70,(ulonglong)local_68 & 0xffffffff);
    if (local_70 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_128 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_128 + 0x10))(local_128);
        }
      }
    }
    if (local_120[0] != (longlong *)0x0) {
      (**(code **)(*local_120[0] + 0x10))();
    }
    FUN_1427679d4(local_f8,&local_60,local_110);
    pwVar8 = local_60;
    FUN_144a5dc74(&local_90);
    FUN_1468756a4(&local_80,param_1,&local_90);
    local_70 = local_80;
    local_68 = local_78;
    if (local_78 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
    }
    FUN_1467eb24e(pwVar8,local_c8,&local_70);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_c0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    puVar7 = local_68;
    if (local_68 != (ulonglong *)0x0) {
      LOCK();
      puVar2 = local_68 + 1;
      *(int *)puVar2 = (int)*puVar2 + -1;
      UNLOCK();
      if ((int)*puVar2 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)puVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*puVar7 + 0x10))(puVar7);
        }
      }
    }
    puVar7 = local_78;
    if (local_78 != (ulonglong *)0x0) {
      LOCK();
      puVar2 = local_78 + 1;
      *(int *)puVar2 = (int)*puVar2 + -1;
      UNLOCK();
      if ((int)*puVar2 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)puVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*puVar7 + 0x10))(puVar7);
        }
      }
    }
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 0x10))();
    }
    plVar6 = (longlong *)CONCAT44(uStack_54,local_58);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
    }
    FUN_1427678c0(local_f8);
  }
LAB_14781cfda:
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14781d0f8 FUN_14781d0f8 body=230 status=ok
// SIG undefined FUN_14781d0f8(void)

void FUN_14781d0f8(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
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
  if (*(longlong *)(param_1 + 0x3d0) == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = DAT_14cabca0c;
    uStack_34 = 0xffffffff;
  }
  else {
    FUN_147575dc6(*(undefined8 *)(*(longlong *)(param_1 + 0x3d0) + 0x298),&local_48,local_28);
  }
  *(ulonglong *)(param_3 + 4) = CONCAT44(uStack_34,local_38);
  *param_3 = (undefined4)local_48;
  param_3[1] = local_48._4_4_;
  param_3[2] = (undefined4)uStack_40;
  param_3[3] = uStack_40._4_4_;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781d1e0 FUN_14781d1e0 body=172 status=ok
// SIG undefined FUN_14781d1e0(void)

void FUN_14781d1e0(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  uVar1 = FUN_14781d28e(param_1,local_28);
  FUN_147576204(param_3,uVar1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781d28e FUN_14781d28e body=134 status=ok
// SIG undefined FUN_14781d28e(void)

undefined8 * FUN_14781d28e(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    puVar1 = (undefined8 *)FUN_1475760dc(*(undefined8 *)(*(longlong *)(param_1 + 0x3d0) + 0x298));
    return puVar1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cabcc20) {
    FUN_144b3d300(&DAT_14cabcc20);
    if (DAT_14cabcc20 == -1) {
      DAT_14cabcc10 = 0;
      uRam000000014cabcc18 = 0;
      atexit((_func_5014 *)&LAB_143377fb4);
      _Init_thread_footer(&DAT_14cabcc20);
    }
  }
  return &DAT_14cabcc10;
}



// FUNCTION 14781d34c FUN_14781d34c body=266 status=ok
// SIG undefined FUN_14781d34c(void)

void FUN_14781d34c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = DAT_14cabca0c;
  uStack_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_48 = CONCAT44(uStack_24,local_28);
  FUN_14781d458(param_1,&local_58,local_40);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781d458 FUN_14781d458 body=658 status=ok
// SIG undefined FUN_14781d458(void)

void FUN_14781d458(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_108 [32];
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined8 local_d8;
  longlong *local_d0 [2];
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  longlong *local_98 [2];
  undefined1 local_88 [8];
  undefined1 local_80 [48];
  undefined1 local_50 [8];
  longlong *local_48;
  wchar_t *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((param_2[1] == 0 && *param_2 == 0) && param_2[2] == 0) && param_2[3] == 0) {
    FUN_1446ddc76(local_88,&DAT_14a492018,1);
    FUN_14276766e(local_80,local_88);
    local_40 = L"RemoveBinding_Warning";
    local_38 = 0x15;
    FUN_1446e940c(local_9c,&local_40);
    local_40 = L"LevelSequenceActor";
    local_38 = 0x12;
    FUN_1446e940c(local_a0,&local_40);
    FUN_140208bae(local_98,local_a0,local_9c,L"The specified binding ID is not valid");
    FUN_1427679d4(local_80,&local_40,local_98);
    pwVar4 = local_40;
    FUN_144a5dc74(local_d0);
    FUN_1468756a4(&local_c0,param_1,local_d0);
    local_b0 = local_c0;
    local_a8 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    FUN_1467eb24e(pwVar4,local_50,&local_b0);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    plVar3 = local_a8;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_a8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_b8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
        }
      }
    }
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
    plVar3 = (longlong *)CONCAT44(uStack_34,local_38);
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
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    FUN_1427678c0(local_80);
  }
  else {
    local_d8 = *(undefined8 *)(param_2 + 4);
    local_e8 = *param_2;
    iStack_e4 = param_2[1];
    iStack_e0 = param_2[2];
    iStack_dc = param_2[3];
    FUN_14756f410(*(undefined8 *)(param_1 + 0x3f0));
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      FUN_146340746(param_2,local_80,DAT_14cabca0c,*(longlong *)(param_1 + 0x3d0) + 0x28);
      FUN_140e06640(*(longlong *)(param_1 + 0x3d0) + 0x38,param_2,local_80);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781d6ec FUN_14781d6ec body=232 status=ok
// SIG undefined FUN_14781d6ec(void)

void FUN_14781d6ec(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_14781d7d6(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781d7d6 FUN_14781d7d6 body=1134 status=ok
// SIG undefined FUN_14781d7d6(void)

void FUN_14781d7d6(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined1 local_148 [4];
  undefined1 local_144 [4];
  longlong *local_140 [2];
  longlong *local_130;
  longlong *local_128;
  longlong *local_120 [2];
  longlong *local_110 [2];
  undefined1 local_100 [8];
  undefined1 local_f8 [48];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  wchar_t **local_70;
  ulonglong *local_68;
  wchar_t *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_98 = param_2;
  if ((*(longlong **)(param_1 + 0x3d8) != (longlong *)0x0) &&
     (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x2e8))(),
     *(int *)(lVar9 + 0x98) != *(int *)(lVar9 + 0xc4))) {
    uVar5 = (uint)((ulonglong)param_2 >> 0x10);
    uVar11 = (uint)param_2 & 0xffff;
    lVar12 = lVar9 + 200;
    if (*(longlong *)(lVar9 + 0xd0) != 0) {
      lVar12 = *(longlong *)(lVar9 + 0xd0);
    }
    iVar10 = *(int *)(lVar12 + (ulonglong)
                               (*(int *)(lVar9 + 0xd8) - 1U &
                               (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar11)
                               + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        lVar12 = *(longlong *)(lVar9 + 0x90) + (longlong)iVar10 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar9 + 0x90) + (longlong)iVar10 * 0x20) == param_2) {
          if ((lVar12 + 8U & 0xfffffffffffffff7) != 0) {
            iVar10 = *(int *)(lVar12 + 0x10);
            if ((longlong)iVar10 != 0) {
              lVar9 = *(longlong *)(lVar12 + 8);
              lVar12 = 0;
              do {
                puVar4 = (undefined4 *)(lVar9 + lVar12);
                local_b8 = *puVar4;
                uStack_b4 = puVar4[1];
                uStack_b0 = puVar4[2];
                uStack_ac = puVar4[3];
                local_a8 = *(undefined8 *)(lVar9 + 0x10 + lVar12);
                FUN_14781d458(param_1,&local_b8,param_3);
                lVar12 = lVar12 + 0x18;
              } while ((longlong)iVar10 * 0x18 != lVar12);
            }
            goto LAB_14781db2f;
          }
          break;
        }
        iVar10 = *(int *)(lVar12 + 0x18);
      } while (iVar10 != -1);
    }
  }
  if (DAT_14c761210 == '\x01') {
    FUN_1446ddc76(local_100,&DAT_14a492018,1);
    FUN_14276766e(local_f8,local_100);
    FUN_145715fae(local_120,&local_98);
    local_60 = L"RemoveBindingByTag";
    local_58 = 0x12;
    FUN_1446e940c(local_144,&local_60);
    local_60 = L"LevelSequenceActor";
    local_58 = 0x12;
    FUN_1446e940c(local_148,&local_60);
    FUN_140208bae(local_140,local_148,local_144,
                  L"Sequence did not contain any bindings with the tag \'{0}\'");
    FUN_14023409e(&local_130,local_140,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_120);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_130;
    local_88 = local_128;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_128 + 1) = (int)local_128[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_110,&local_90,&local_70);
    FUN_14007f2db(local_70,(ulonglong)local_68 & 0xffffffff);
    if (local_70 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_128 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_128 + 0x10))(local_128);
        }
      }
    }
    if (local_120[0] != (longlong *)0x0) {
      (**(code **)(*local_120[0] + 0x10))();
    }
    FUN_1427679d4(local_f8,&local_60,local_110);
    pwVar8 = local_60;
    FUN_144a5dc74(&local_90);
    FUN_1468756a4(&local_80,param_1,&local_90);
    local_70 = local_80;
    local_68 = local_78;
    if (local_78 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
    }
    FUN_1467eb24e(pwVar8,local_c8,&local_70);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_c0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    puVar7 = local_68;
    if (local_68 != (ulonglong *)0x0) {
      LOCK();
      puVar2 = local_68 + 1;
      *(int *)puVar2 = (int)*puVar2 + -1;
      UNLOCK();
      if ((int)*puVar2 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)puVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*puVar7 + 0x10))(puVar7);
        }
      }
    }
    puVar7 = local_78;
    if (local_78 != (ulonglong *)0x0) {
      LOCK();
      puVar2 = local_78 + 1;
      *(int *)puVar2 = (int)*puVar2 + -1;
      UNLOCK();
      if ((int)*puVar2 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)puVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*puVar7 + 0x10))(puVar7);
        }
      }
    }
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 0x10))();
    }
    plVar6 = (longlong *)CONCAT44(uStack_54,local_58);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
    }
    FUN_1427678c0(local_f8);
  }
LAB_14781db2f:
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14781dc46 FUN_14781dc46 body=190 status=ok
// SIG undefined FUN_14781dc46(void)

void FUN_14781dc46(undefined8 param_1,longlong param_2)

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
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = DAT_14cabca0c;
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
  FUN_14781dd06(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781dd06 FUN_14781dd06 body=658 status=ok
// SIG undefined FUN_14781dd06(void)

void FUN_14781dd06(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_108 [32];
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined8 local_d8;
  longlong *local_d0 [2];
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  longlong *local_98 [2];
  undefined1 local_88 [8];
  undefined1 local_80 [48];
  undefined1 local_50 [8];
  longlong *local_48;
  wchar_t *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((param_2[1] == 0 && *param_2 == 0) && param_2[2] == 0) && param_2[3] == 0) {
    FUN_1446ddc76(local_88,&DAT_14a492018,1);
    FUN_14276766e(local_80,local_88);
    local_40 = L"ResetBinding_Warning";
    local_38 = 0x14;
    FUN_1446e940c(local_9c,&local_40);
    local_40 = L"LevelSequenceActor";
    local_38 = 0x12;
    FUN_1446e940c(local_a0,&local_40);
    FUN_140208bae(local_98,local_a0,local_9c,L"The specified binding ID is not valid");
    FUN_1427679d4(local_80,&local_40,local_98);
    pwVar4 = local_40;
    FUN_144a5dc74(local_d0);
    FUN_1468756a4(&local_c0,param_1,local_d0);
    local_b0 = local_c0;
    local_a8 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    FUN_1467eb24e(pwVar4,local_50,&local_b0);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    plVar3 = local_a8;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_a8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_b8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
        }
      }
    }
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
    plVar3 = (longlong *)CONCAT44(uStack_34,local_38);
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
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    FUN_1427678c0(local_80);
  }
  else {
    local_d8 = *(undefined8 *)(param_2 + 4);
    local_e8 = *param_2;
    iStack_e4 = param_2[1];
    iStack_e0 = param_2[2];
    iStack_dc = param_2[3];
    FUN_140b8797e(*(undefined8 *)(param_1 + 0x3f0));
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      FUN_146340746(param_2,local_80,DAT_14cabca0c,*(longlong *)(param_1 + 0x3d0) + 0x28);
      FUN_140e06640(*(longlong *)(param_1 + 0x3d0) + 0x38,param_2,local_80);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781df9a FUN_14781df9a body=73 status=ok
// SIG undefined FUN_14781df9a(void)

void FUN_14781df9a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140a2343a(*(undefined8 *)(param_1 + 0x3f0));
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (lVar1 != 0) {
    FUN_145dbe83e(lVar1 + 0x38,lVar1 + 0x28);
    return;
  }
  return;
}



// FUNCTION 14781dfea FUN_14781dfea body=374 status=ok
// SIG undefined FUN_14781dfea(void)

void FUN_14781dfea(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int local_4c;
  longlong local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = DAT_14cabca0c;
  uStack_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = CONCAT44(uStack_24,local_28);
  local_68 = (undefined4)local_38;
  uStack_64 = local_38._4_4_;
  uStack_60 = (undefined4)uStack_30;
  uStack_5c = uStack_30._4_4_;
  FUN_14781e162(param_1,&local_68,plVar1,local_4c != 0);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781e162 FUN_14781e162 body=780 status=ok
// SIG undefined FUN_14781e162(void)

void FUN_14781e162(longlong param_1,int *param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  undefined1 auStack_118 [32];
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined8 local_e8;
  longlong *local_e0 [2];
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  longlong *local_a8 [2];
  undefined1 local_98 [8];
  longlong local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_60 [8];
  longlong *local_58;
  wchar_t *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((param_2[1] == 0 && *param_2 == 0) && param_2[2] == 0) && param_2[3] == 0) {
    FUN_1446ddc76(local_98,&DAT_14a492018,1);
    FUN_14276766e(&local_90,local_98);
    local_50 = L"SetBinding_Warning";
    local_48 = 0x12;
    FUN_1446e940c(local_ac,&local_50);
    local_50 = L"LevelSequenceActor";
    local_48 = 0x12;
    FUN_1446e940c(local_b0,&local_50);
    FUN_140208bae(local_a8,local_b0,local_ac,L"The specified binding ID is not valid");
    FUN_1427679d4(&local_90,&local_50,local_a8);
    pwVar7 = local_50;
    FUN_144a5dc74(local_e0);
    FUN_1468756a4(&local_d0,param_1,local_e0);
    local_c0 = local_d0;
    local_b8 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
      UNLOCK();
    }
    FUN_1467eb24e(pwVar7,local_60,&local_c0);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_58 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
    plVar6 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_c8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar1 = (int *)((longlong)local_c8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_c8 + 0x10))(local_c8);
        }
      }
    }
    if (local_e0[0] != (longlong *)0x0) {
      (**(code **)(*local_e0[0] + 0x10))();
    }
    plVar6 = (longlong *)CONCAT44(uStack_44,local_48);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
    FUN_1427678c0(&local_90);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x3f0);
    local_90 = 0;
    iVar3 = *(int *)(param_3 + 1);
    uVar5 = *param_3;
    local_88 = iVar3;
    if (iVar3 == 0) {
      local_84 = 0;
    }
    else {
      FUN_14010590e(&local_90,iVar3,0);
      FUN_14782382b(local_90,uVar5,iVar3);
    }
    local_e8 = *(undefined8 *)(param_2 + 4);
    local_f8 = *param_2;
    iStack_f4 = param_2[1];
    iStack_f0 = param_2[2];
    iStack_ec = param_2[3];
    FUN_140b87554(uVar4,&local_f8,&local_90,param_4);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      FUN_146340746(param_2,&local_90,DAT_14cabca0c,*(longlong *)(param_1 + 0x3d0) + 0x28);
      FUN_140e06640(*(longlong *)(param_1 + 0x3d0) + 0x38,param_2,&local_90);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781e476 FUN_14781e476 body=340 status=ok
// SIG undefined FUN_14781e476(void)

void FUN_14781e476(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
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
  FUN_14781e5cc(param_1,local_38[2],plVar1,local_3c != 0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781e5cc FUN_14781e5cc body=1148 status=ok
// SIG undefined FUN_14781e5cc(void)

void FUN_14781e5cc(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined1 local_148 [4];
  undefined1 local_144 [4];
  longlong *local_140 [2];
  longlong *local_130;
  longlong *local_128;
  longlong *local_120 [2];
  longlong *local_110 [2];
  undefined1 local_100 [8];
  undefined1 local_f8 [48];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  wchar_t **local_70;
  ulonglong *local_68;
  wchar_t *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_98 = param_2;
  if ((*(longlong **)(param_1 + 0x3d8) != (longlong *)0x0) &&
     (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x2e8))(),
     *(int *)(lVar9 + 0x98) != *(int *)(lVar9 + 0xc4))) {
    uVar5 = (uint)((ulonglong)param_2 >> 0x10);
    uVar11 = (uint)param_2 & 0xffff;
    lVar12 = lVar9 + 200;
    if (*(longlong *)(lVar9 + 0xd0) != 0) {
      lVar12 = *(longlong *)(lVar9 + 0xd0);
    }
    iVar10 = *(int *)(lVar12 + (ulonglong)
                               (*(int *)(lVar9 + 0xd8) - 1U &
                               (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar11)
                               + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        lVar12 = *(longlong *)(lVar9 + 0x90) + (longlong)iVar10 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar9 + 0x90) + (longlong)iVar10 * 0x20) == param_2) {
          if ((lVar12 + 8U & 0xfffffffffffffff7) != 0) {
            iVar10 = *(int *)(lVar12 + 0x10);
            if ((longlong)iVar10 != 0) {
              lVar9 = *(longlong *)(lVar12 + 8);
              lVar12 = 0;
              do {
                puVar4 = (undefined4 *)(lVar9 + lVar12);
                local_b8 = *puVar4;
                uStack_b4 = puVar4[1];
                uStack_b0 = puVar4[2];
                uStack_ac = puVar4[3];
                local_a8 = *(undefined8 *)(lVar9 + 0x10 + lVar12);
                FUN_14781e162(param_1,&local_b8,param_3,param_4);
                lVar12 = lVar12 + 0x18;
              } while ((longlong)iVar10 * 0x18 != lVar12);
            }
            goto LAB_14781e92c;
          }
          break;
        }
        iVar10 = *(int *)(lVar12 + 0x18);
      } while (iVar10 != -1);
    }
  }
  if (DAT_14c761210 == '\x01') {
    FUN_1446ddc76(local_100,&DAT_14a492018,1);
    FUN_14276766e(local_f8,local_100);
    FUN_145715fae(local_120,&local_98);
    local_60 = L"SetBindingByTag";
    local_58 = 0xf;
    FUN_1446e940c(local_144,&local_60);
    local_60 = L"LevelSequenceActor";
    local_58 = 0x12;
    FUN_1446e940c(local_148,&local_60);
    FUN_140208bae(local_140,local_148,local_144,
                  L"Sequence did not contain any bindings with the tag \'{0}\'");
    FUN_14023409e(&local_130,local_140,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_120);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_130;
    local_88 = local_128;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_128 + 1) = (int)local_128[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_110,&local_90,&local_70);
    FUN_14007f2db(local_70,(ulonglong)local_68 & 0xffffffff);
    if (local_70 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_128 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_128 + 0x10))(local_128);
        }
      }
    }
    if (local_120[0] != (longlong *)0x0) {
      (**(code **)(*local_120[0] + 0x10))();
    }
    FUN_1427679d4(local_f8,&local_60,local_110);
    pwVar8 = local_60;
    FUN_144a5dc74(&local_90);
    FUN_1468756a4(&local_80,param_1,&local_90);
    local_70 = local_80;
    local_68 = local_78;
    if (local_78 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
    }
    FUN_1467eb24e(pwVar8,local_c8,&local_70);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_c0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    puVar7 = local_68;
    if (local_68 != (ulonglong *)0x0) {
      LOCK();
      puVar2 = local_68 + 1;
      *(int *)puVar2 = (int)*puVar2 + -1;
      UNLOCK();
      if ((int)*puVar2 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)puVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*puVar7 + 0x10))(puVar7);
        }
      }
    }
    puVar7 = local_78;
    if (local_78 != (ulonglong *)0x0) {
      LOCK();
      puVar2 = local_78 + 1;
      *(int *)puVar2 = (int)*puVar2 + -1;
      UNLOCK();
      if ((int)*puVar2 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)puVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*puVar7 + 0x10))(puVar7);
        }
      }
    }
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 0x10))();
    }
    plVar6 = (longlong *)CONCAT44(uStack_54,local_58);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
    }
    FUN_1427678c0(local_f8);
  }
LAB_14781e92c:
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14781ea4e FUN_14781ea4e body=181 status=ok
// SIG undefined FUN_14781ea4e(void)

void FUN_14781ea4e(longlong param_1,longlong param_2)

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
  *(byte *)(param_1 + 0x3f8) = *(byte *)(param_1 + 0x3f8) & 0xfb | (local_1c != 0) * '\x04';
  FUN_140c7ce82(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781eb04 FUN_14781eb04 body=156 status=ok
// SIG undefined FUN_14781eb04(void)

void FUN_14781eb04(undefined8 param_1,longlong param_2)

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
  FUN_14781eba2(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781eba2 FUN_14781eba2 body=132 status=ok
// SIG undefined FUN_14781eba2(void)

void FUN_14781eba2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  if (*(char *)(lVar2 + 0x290) == '\x01') {
    return;
  }
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x3d8) = param_2;
    if (param_2 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x3d8) = param_2;
    lVar2 = *(longlong *)(param_1 + 0x3d0);
  }
  uVar1 = FUN_144a79cc8(param_1);
  FUN_140a22888(lVar2,param_2,uVar1,param_1 + 0x3e0);
  return;
}



// FUNCTION 14781ec4e FUN_14781ec4e body=54 status=ok
// SIG undefined FUN_14781ec4e(void)

void FUN_14781ec4e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (lVar1 != 0) {
    FUN_140c7df0a(lVar1);
    *(undefined8 *)(lVar1 + 0x398) = 0;
    *(undefined8 *)(lVar1 + 0x38c) = 0;
    *(undefined1 *)(lVar1 + 0x394) = 0;
  }
  return;
}



// FUNCTION 14781ec84 FUN_14781ec84 body=52 status=ok
// SIG undefined FUN_14781ec84(void)

longlong FUN_14781ec84(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x68) & 2) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x70);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 14781ecd0 FUN_14781ecd0 body=870 status=ok
// SIG undefined FUN_14781ecd0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14781ecd0(longlong param_1)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160 [8];
  longlong local_158;
  longlong local_150 [2];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  void *local_130;
  int local_128;
  undefined4 local_124;
  undefined2 *local_120;
  int local_118;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_150[1] = 0;
  local_140 = *(undefined4 *)(param_1 + 0x30);
  uStack_13c = *(undefined4 *)(param_1 + 0x34);
  uStack_138 = *(undefined4 *)(param_1 + 0x38);
  uStack_134 = *(undefined4 *)(param_1 + 0x3c);
  local_130 = (void *)0x0;
  local_128 = *(int *)(param_1 + 0x48);
  lVar7 = (longlong)local_128;
  _Src = *(void **)(param_1 + 0x40);
  if (lVar7 == 0) {
    local_124 = 0;
  }
  else {
    FUN_1446dd670(&local_130,local_128,0);
    memcpy(local_130,_Src,lVar7 * 2);
  }
  FUN_1413e28b0(&local_120);
  FUN_1458ca2cc(&local_120,local_150,local_150 + 1);
  FUN_140f77756(&local_120);
  if ((((local_150[0] != 0) && (lVar7 = FUN_145991796(), lVar7 != 0)) &&
      (*(int *)(lVar7 + 0x38) <= *(int *)(local_150[0] + 0x38))) &&
     (*(longlong *)(*(longlong *)(local_150[0] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) {
    lVar7 = FUN_145991796();
    if ((lVar7 == 0) || (*(int *)(local_150[0] + 0x38) < *(int *)(lVar7 + 0x38))) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      if (*(longlong *)(*(longlong *)(local_150[0] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
          == lVar7 + 0x30) {
        lVar2 = local_150[0];
      }
    }
    lVar7 = *(longlong *)(lVar2 + 0x110);
    if (lVar7 == 0) {
      FUN_140aa6c08(lVar2);
      lVar7 = *(longlong *)(lVar2 + 0x110);
      if (lVar7 != 0) goto LAB_14781ee0e;
LAB_14781ee2e:
      lVar7 = 0;
    }
    else {
LAB_14781ee0e:
      lVar2 = FUN_145991796();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) != lVar2 + 0x30)) goto LAB_14781ee2e;
    }
    FUN_14781f0ec(lVar7,&local_158);
    lVar7 = local_158;
    if ((((local_158 != 0) && (lVar3 = FUN_1459867ca(), lVar2 = local_158, lVar3 != 0)) &&
        (*(int *)(lVar3 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
       (local_158 != 0 &&
        *(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      lVar7 = *(longlong *)(param_1 + 0x50);
      if (lVar7 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c();
        }
        lVar3 = FUN_1459867ca();
        if ((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
              lVar3 + 0x30) {
            lVar5 = lVar2;
          }
        }
        lVar7 = *(longlong *)(lVar7 + 0x10);
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) goto LAB_14781ed7e;
        plVar1 = *(longlong **)(param_1 + 0x50);
        if (plVar1 != (longlong *)0x0) {
          FUN_1446ddc76(&local_168,"Settings_EXPIRED",1);
          uVar4 = FUN_1459867ca();
          local_178 = 0;
          FUN_140af9fb2(local_160,param_1,uVar4,local_168);
          FUN_1400021e4(local_160,&local_120);
          puVar6 = local_120;
          if (local_118 == 0) {
            puVar6 = &DAT_149dfb77a;
          }
          (**(code **)(*plVar1 + 0x170))(plVar1,puVar6,0,0);
          if (local_120 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      FUN_1446ddc76(&local_170,"Settings",1);
      lVar7 = local_158;
      if ((((local_158 == 0) || (lVar2 = FUN_1459867ca(), lVar2 == 0)) ||
          (*(int *)(lVar7 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        local_158 = 0;
      }
      lVar7 = FUN_14781f1a5(param_1,local_158,local_170);
      if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar7);
      }
      *(longlong *)(param_1 + 0x50) = lVar7;
      FUN_144757f48(lVar7,*(uint *)(param_1 + 8) & 0x69);
      goto LAB_14781ed7e;
    }
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
LAB_14781ed7e:
  if (local_130 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14781f038 FUN_14781f038 body=162 status=ok
// SIG undefined FUN_14781f038(void)

void FUN_14781f038(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x378) = param_2;
  if (*(longlong *)(param_2 + 0x3d0) == 0) {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_30 = &LAB_14782009e;
  local_28 = 0;
  FUN_14781ffc2(*(longlong *)(param_2 + 0x3d0) + 0x3f8,local_20,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14781f0ec FUN_14781f0ec body=184 status=ok
// SIG undefined FUN_14781f0ec(void)

longlong * FUN_14781f0ec(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14477b072(param_1,DAT_14cabccc0);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_30 = 0;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
    *param_2 = local_30;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  (**(code **)(*param_1 + 0x4a0))(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14781f1a5 FUN_14781f1a5 body=201 status=ok
// SIG undefined FUN_14781f1a5(void)

undefined8 FUN_14781f1a5(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_68 = (longlong *)0x0;
  local_38 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781f26f FUN_14781f26f body=280 status=ok
// SIG undefined FUN_14781f26f(void)

longlong FUN_14781f26f(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 == 0) {
    lVar6 = 0;
  }
  else {
    FUN_1400021e4(param_1,&local_58);
    cVar3 = FUN_14622a6c4(&local_58);
    if (cVar3 != '\0') {
      FUN_1467aca2a(&local_58,0,0x2f);
    }
    iVar1 = *(int *)(param_2 + 0x90);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_2 + 0x88);
      lVar5 = 0;
      do {
        lVar6 = *(longlong *)(lVar2 + lVar5);
        if (lVar6 != 0) {
          FUN_147b98996(lVar6,local_68);
          iVar7 = local_50 + -1;
          if (local_50 == 0) {
            iVar7 = 0;
          }
          puVar4 = &DAT_149dfb77a;
          if (local_50 != 0) {
            puVar4 = local_58;
          }
          cVar3 = FUN_144a38768(local_68,puVar4,iVar7,1);
          if (local_68[0] != 0) {
            FUN_1400020a8();
          }
          if (cVar3 != '\0') goto LAB_14781f34a;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    lVar6 = 0;
LAB_14781f34a:
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781f3b6 FUN_14781f3b6 body=258 status=ok
// SIG undefined FUN_14781f3b6(void)

void FUN_14781f3b6(undefined8 *param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (1 < *(int *)(param_1 + 1))) {
    FUN_1449b8608(&local_30,param_1,&DAT_149e0635c);
    FUN_144a7dea0(&local_40,&local_30);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    local_30 = local_40;
    local_28 = local_38 + -1;
    if (local_38 == 0) {
      local_28 = 0;
    }
    FUN_14475bf92(param_1 + 2);
    *(undefined4 *)(param_1 + 7) = 0;
    if (*(int *)((longlong)param_1 + 0x3c) < 0) {
      FUN_1446f8c06(param_1 + 6,0);
    }
    puVar1 = (undefined2 *)param_1[6];
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_1446f8c06(param_1,0);
    }
    if ((undefined2 *)*param_1 != (undefined2 *)0x0) {
      *(undefined2 *)*param_1 = 0;
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781f4ba FUN_14781f4ba body=1375 status=ok
// SIG undefined FUN_14781f4ba(void)

char FUN_14781f4ba(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_1a8 [35];
  char local_185;
  undefined4 local_184;
  longlong *local_180;
  undefined8 local_178;
  undefined1 *local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong local_158;
  undefined1 *local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong local_138 [2];
  undefined1 local_128 [16];
  undefined8 local_118;
  int local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8 [2];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_138[0] = CONCAT44(local_138[0]._4_4_,*(undefined4 *)(param_2 + 8));
  if (DAT_14cabccb0 == 0) {
    uVar3 = FUN_141051008();
    DAT_14cabccb0 = FUN_140002ddd(FUN_146367e2b,uVar3,L"LevelSequenceBindingReferences");
  }
  cVar1 = FUN_1468ec2ac(local_138,*(undefined8 *)(DAT_14cabccb0 + 0x18));
  if (cVar1 != '\0') {
    local_118 = 0;
    local_110 = 0;
    local_138[0] = 0;
    local_138[1] = 0;
    local_10c = 0xffffffff00000080;
    local_104 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_e8[0] = 0;
    local_e8[1] = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_185 = cVar1;
    if (DAT_14cabccb0 == 0) {
      uVar3 = FUN_141051008();
      DAT_14cabccb0 = FUN_140002ddd(FUN_146367e2b,uVar3,L"LevelSequenceBindingReferences");
    }
    FUN_14483b62e(DAT_14cabccb0,param_3,local_138,0);
    local_150 = local_128;
    local_158 = 0x100000000;
    local_148._0_4_ = 0xffffffff;
    local_148._4_4_ = 0;
    local_140 = 0;
    iVar5 = 0;
    if (local_110 != 0) {
      FUN_1449c0562(&local_158);
      iVar5 = local_110;
    }
    local_168._0_4_ = (uint)local_148;
    local_168._4_4_ = local_148._4_4_;
    local_160 = local_140;
    local_15c = local_13c;
    local_178 = local_158;
    local_170 = local_150;
    local_180 = local_138;
    if ((local_148._4_4_ != iVar5) || (local_150 != local_128)) {
      do {
        lVar6 = (longlong)*(int *)(*local_180 + 0x18 + (longlong)local_168._4_4_ * 0x28);
        if (lVar6 != 0) {
          lVar4 = *local_180 + (longlong)local_168._4_4_ * 0x28;
          lVar6 = lVar6 << 6;
          lVar7 = *(longlong *)(lVar4 + 0x10) + 0x30;
          do {
            if (*(longlong *)(lVar7 + -0x20) == 0) {
              FUN_142aec8be(&local_158);
              FUN_14781fa96(&local_158,lVar7);
            }
            else {
              FUN_142aec8be(&local_158);
              FUN_14781fb38(&local_158,lVar7 + -0x20);
            }
            FUN_14756f8ee(param_1,lVar4,&local_158);
            FUN_140843826(local_158,(ulonglong)local_150 & 0xffffffff);
            if (local_158 != 0) {
              FUN_1400020a8();
            }
            lVar7 = lVar7 + 0x40;
            lVar6 = lVar6 + -0x40;
          } while (lVar6 != 0);
        }
        local_168._0_4_ = (uint)local_168 & ~local_178._4_4_;
        FUN_1449c0562(&local_178);
      } while (local_180 != local_138 || (local_170 != local_128 || local_168._4_4_ != iVar5));
    }
    local_158 = 0x100000000;
    local_148._0_4_ = 0xffffffff;
    local_148._4_4_ = 0;
    local_140 = 0;
    iVar5 = 0;
    local_150 = local_d8;
    if (local_c0 != 0) {
      FUN_1449c0562(&local_158);
      iVar5 = local_c0;
    }
    local_168._0_4_ = (uint)local_148;
    local_168._4_4_ = local_148._4_4_;
    local_160 = local_140;
    local_15c = local_13c;
    local_178 = local_158;
    local_170 = local_150;
    local_180 = local_e8;
    if ((local_148._4_4_ != iVar5) || (local_150 != local_d8)) {
      do {
        lVar4 = (longlong)local_168._4_4_;
        lVar6 = *local_180;
        FUN_142aec8be(&local_158);
        local_184 = 0;
        FUN_14781fbe4(&local_158);
        FUN_14756f8ee(param_1,lVar4 * 0x18 + lVar6,&local_158);
        FUN_140843826(local_158,(ulonglong)local_150 & 0xffffffff);
        if (local_158 != 0) {
          FUN_1400020a8();
        }
        local_168._0_4_ = (uint)local_168 & ~local_178._4_4_;
        FUN_1449c0562(&local_178);
      } while (local_180 != local_e8 || (local_170 != local_d8 || local_168._4_4_ != iVar5));
    }
    local_158 = 0x100000000;
    local_148 = 0xffffffff;
    local_140 = 0;
    iVar5 = 0;
    local_150 = local_88;
    if (local_70 != 0) {
      FUN_1449c0562(&local_158);
      iVar5 = local_70;
    }
    local_168 = local_148;
    uVar3 = local_168;
    local_160 = local_140;
    local_15c = local_13c;
    local_178 = local_158;
    local_170 = local_150;
    local_168._4_4_ = (int)((ulonglong)local_148 >> 0x20);
    iVar2 = local_168._4_4_;
    local_180 = local_98;
    if ((local_168._4_4_ != iVar5) || (local_168 = uVar3, local_150 != local_88)) {
      do {
        local_168 = uVar3;
        lVar6 = *local_180;
        FUN_142aec8be(&local_158);
        local_184 = 1;
        FUN_14781fbe4(&local_158);
        FUN_14756f8ee(param_1,(longlong)iVar2 * 0x18 + lVar6,&local_158);
        FUN_140843826(local_158,(ulonglong)local_150 & 0xffffffff);
        if (local_158 != 0) {
          FUN_1400020a8();
        }
        local_168 = CONCAT44(local_168._4_4_,(uint)local_168 & ~local_178._4_4_);
        FUN_1449c0562(&local_178);
        iVar2 = local_168._4_4_;
        uVar3 = local_168;
      } while (local_180 != local_98 || (local_170 != local_88 || local_168._4_4_ != iVar5));
    }
    FUN_14781fc6c(local_138);
    cVar1 = local_185;
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781fa1a FUN_14781fa1a body=123 status=ok
// SIG undefined FUN_14781fa1a(void)

void FUN_14781fa1a(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  return;
}



// FUNCTION 14781fa96 FUN_14781fa96 body=160 status=ok
// SIG undefined FUN_14781fa96(void)

void FUN_14781fa96(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined1 local_48 [30];
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2a = DAT_14c99e131;
  local_29 = 0;
  FUN_142aedb00(local_48,&local_50,0x10,8);
  *local_50 = 0;
  *local_50 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(local_50 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)local_50 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_14702619c(param_1,local_48);
  FUN_147027914(local_48);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781fb38 FUN_14781fb38 body=170 status=ok
// SIG undefined FUN_14781fb38(void)

void FUN_14781fb38(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  undefined1 local_48 [30];
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2a = DAT_14cb0cab8;
  local_29 = 0;
  FUN_142aedb00(local_48,&local_50,0x20,8);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *local_50 = *param_2;
  local_50[1] = uVar1;
  local_50[2] = uVar2;
  local_50[3] = uVar3;
  *(undefined8 *)(local_50 + 4) = 0;
  *(undefined8 *)(local_50 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  local_50[6] = param_2[6];
  local_50[7] = param_2[7];
  *(undefined8 *)(param_2 + 6) = 0;
  FUN_14702619c(param_1,local_48);
  FUN_147027914(local_48);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781fbe4 FUN_14781fbe4 body=134 status=ok
// SIG undefined FUN_14781fbe4(void)

void FUN_14781fbe4(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  undefined1 local_48 [30];
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2a = DAT_14cb0cab9;
  local_29 = 0;
  FUN_142aedb00(local_48,&local_50,4,4);
  *local_50 = *param_2;
  FUN_14702619c(param_1,local_48);
  FUN_147027914(local_48);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781fc6c FUN_14781fc6c body=125 status=ok
// SIG undefined FUN_14781fc6c(void)

void FUN_14781fc6c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1478233bc(param_1);
  return;
}



// FUNCTION 14781fcea FUN_14781fcea body=602 status=ok
// SIG undefined FUN_14781fcea(void)

void FUN_14781fcea(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong **pplVar2;
  ulonglong *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong **pplStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  undefined1 local_84 [4];
  undefined8 *local_80;
  longlong **pplStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_88);
    }
  }
  else {
    local_88 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if (((*(byte *)(param_2 + 5) & 4) != 0) || ((*(byte *)((longlong)param_2 + 0x2b) & 10) != 0)) {
      pplVar2 = (longlong **)(param_1 + 2);
      local_80 = (undefined8 *)&DAT_100000000;
      local_70 = 0xffffffff;
      uStack_68 = 0;
      pplStack_78 = pplVar2;
      if ((int)param_1[5] == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_80);
        iVar8 = (int)param_1[5];
      }
      uStack_a8 = CONCAT44(uStack_64,uStack_68);
      local_b0 = local_70;
      uVar6 = local_b0;
      uStack_c0 = local_80;
      pplStack_b8 = pplStack_78;
      local_b0._4_4_ = (int)((ulonglong)local_70 >> 0x20);
      iVar7 = local_b0._4_4_;
      local_c8 = param_1;
      if ((local_b0._4_4_ != iVar8) || (local_b0 = uVar6, pplStack_78 != pplVar2)) {
        do {
          local_b0 = uVar6;
          lVar4 = *local_c8;
          lVar9 = (longlong)iVar7 * 0x38;
          FUN_1402ac1b3(param_2,lVar4 + lVar9);
          FUN_1402ac1b3(param_2,lVar4 + lVar9 + 0x10);
          FUN_14021219d(param_2,lVar4 + lVar9 + 0x20);
          local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0 & ~uStack_c0._4_4_);
          FUN_1449c0562(&uStack_c0);
          iVar7 = local_b0._4_4_;
          uVar6 = local_b0;
        } while (local_c8 != param_1 || (pplStack_b8 != pplVar2 || local_b0._4_4_ != iVar8));
      }
    }
  }
  else {
    iVar8 = local_88 + -1;
    bVar5 = 0 < local_88;
    local_88 = iVar8;
    if (bVar5) {
      do {
        local_98 = 0;
        uStack_90 = 0;
        FUN_1402ac1b3(param_2,&local_98);
        pplStack_b8 = (longlong **)0x0;
        local_b0 = 0;
        local_c8 = (longlong *)0x0;
        uStack_c0 = (undefined8 *)0x0;
        FUN_1402ac1b3(param_2,&local_c8);
        FUN_14021219d(param_2,&pplStack_b8);
        local_80 = &local_98;
        pplStack_78 = &local_c8;
        FUN_147823848(param_1,local_84,&local_80);
        if (pplStack_b8 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        iVar8 = local_88 + -1;
        bVar5 = 0 < local_88;
        local_88 = iVar8;
      } while (bVar5);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14781ff46 FUN_14781ff46 body=120 status=ok
// SIG undefined FUN_14781ff46(void)

void FUN_14781ff46(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x4a0))(param_1,&local_20);
  if (DAT_14c950c29 == '\x01') {
    if (local_20 == 0) {
      local_20 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14781ffc2 FUN_14781ffc2 body=218 status=ok
// SIG undefined FUN_14781ffc2(void)

undefined8
FUN_14781ffc2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14a5a4760;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a5a46f0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_147823dee(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478200b0 FUN_1478200b0 body=198 status=ok
// SIG undefined FUN_1478200b0(void)

void FUN_1478200b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = DAT_14cabca0c;
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
  uVar1 = FUN_147820178(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147820178 FUN_147820178 body=356 status=ok
// SIG undefined FUN_147820178(void)

longlong FUN_147820178(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = FUN_14782105e();
  if (lVar6 == 0) {
    lVar6 = 0;
    FUN_1415b7ec4(L"No player interface available or assigned.",2,0);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(lVar6 + 0x100);
    plVar5 = *(longlong **)(lVar6 + 0x108);
    if (plVar5 == (longlong *)0x0) {
      local_50 = (longlong *)0x0;
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
      local_50 = plVar5;
    }
    local_58 = uVar4;
    FUN_1410cbcd8(param_2,&local_48,uVar3,&local_58);
    if ((longlong)local_40 != 0) {
      lVar8 = 0;
      do {
        local_60 = *(undefined8 *)(local_48 + lVar8);
        lVar6 = FUN_14479d2ce(&local_60);
        if (lVar6 != 0) {
          lVar7 = FUN_144a6c4d8();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) goto LAB_14782026b;
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)local_40 * 8 != lVar8);
    }
    lVar6 = 0;
LAB_14782026b:
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478202de FUN_1478202de body=261 status=ok
// SIG undefined FUN_1478202de(void)

void FUN_1478202de(undefined8 param_1,longlong param_2,longlong *param_3)

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
  local_28 = DAT_14cabca0c;
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
  FUN_1478203e4(param_1,&local_48);
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



// FUNCTION 1478203e4 FUN_1478203e4 body=416 status=ok
// SIG undefined FUN_1478203e4(void)

longlong * FUN_1478203e4(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
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
  lVar7 = FUN_14782105e();
  if (lVar7 == 0) {
    FUN_1415b7ec4(L"No player interface available or assigned.",2,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(lVar7 + 0x100);
  plVar6 = *(longlong **)(lVar7 + 0x108);
  if (plVar6 == (longlong *)0x0) {
    local_60 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_60 = plVar6;
  }
  local_68 = uVar5;
  FUN_1410cbcd8(param_3,&local_58,uVar3,&local_68);
  if ((longlong)local_50 != 0) {
    lVar7 = 0;
    do {
      local_70 = *(undefined8 *)(local_58 + lVar7);
      lVar8 = FUN_14479d2ce(&local_70);
      if (lVar8 != 0) {
        lVar9 = FUN_144a6c4d8();
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
          iVar4 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
            FUN_1447d05f2(param_2,iVar4);
          }
          *(longlong *)(*param_2 + (longlong)iVar4 * 8) = lVar8;
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)local_50 * 8 != lVar7);
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147820586 FUN_147820586 body=198 status=ok
// SIG undefined FUN_147820586(void)

void FUN_147820586(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = DAT_14cabca0c;
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
  uVar1 = FUN_14782064e(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782064e FUN_14782064e body=334 status=ok
// SIG undefined FUN_14782064e(void)

longlong FUN_14782064e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = FUN_14782105e();
  if (lVar6 == 0) {
    lVar6 = 0;
    FUN_1415b7ec4(L"No player interface available or assigned.",2,0);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(lVar6 + 0x100);
    plVar5 = *(longlong **)(lVar6 + 0x108);
    if (plVar5 == (longlong *)0x0) {
      local_50 = (longlong *)0x0;
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
      local_50 = plVar5;
    }
    local_58 = uVar4;
    FUN_1410cbcd8(param_2,&local_48,uVar3,&local_58);
    if ((longlong)local_40 == 0) {
      lVar6 = 0;
    }
    else {
      lVar7 = 0;
      do {
        local_60 = *(undefined8 *)(local_48 + lVar7);
        lVar6 = FUN_14479d2ce(&local_60);
        if (lVar6 != 0) break;
        lVar7 = lVar7 + 8;
        lVar6 = 0;
      } while ((longlong)local_40 * 8 != lVar7);
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
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14782079e FUN_14782079e body=261 status=ok
// SIG undefined FUN_14782079e(void)

void FUN_14782079e(undefined8 param_1,longlong param_2,longlong *param_3)

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
  local_28 = DAT_14cabca0c;
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
  FUN_1478208a4(param_1,&local_48);
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



// FUNCTION 1478208a4 FUN_1478208a4 body=380 status=ok
// SIG undefined FUN_1478208a4(void)

longlong * FUN_1478208a4(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
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
  lVar7 = FUN_14782105e();
  if (lVar7 == 0) {
    FUN_1415b7ec4(L"No player interface available or assigned.",2,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(lVar7 + 0x100);
  plVar6 = *(longlong **)(lVar7 + 0x108);
  if (plVar6 == (longlong *)0x0) {
    local_60 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_60 = plVar6;
  }
  local_68 = uVar5;
  FUN_1410cbcd8(param_3,&local_58,uVar3,&local_68);
  if ((longlong)local_50 != 0) {
    lVar7 = 0;
    do {
      local_70 = *(undefined8 *)(local_58 + lVar7);
      lVar8 = FUN_14479d2ce(&local_70);
      if (lVar8 != 0) {
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_1447f76d2(param_2,iVar4);
        }
        *(longlong *)(*param_2 + (longlong)iVar4 * 8) = lVar8;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)local_50 * 8 != lVar7);
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
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147820a22 FUN_147820a22 body=88 status=ok
// SIG undefined FUN_147820a22(void)

void FUN_147820a22(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147820a7c(param_1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147820a7c FUN_147820a7c body=503 status=ok
// SIG undefined FUN_147820a7c(void)

undefined8 * FUN_147820a7c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_90 [32];
  undefined1 local_70 [40];
  undefined5 local_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = FUN_14782105e();
  if (lVar4 == 0) {
    *param_2 = 0;
    param_2[1] = 0x10000ea60;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + 0x100);
    plVar2 = *(longlong **)(lVar4 + 0x108);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    plVar5 = (longlong *)FUN_14479d2ce(lVar6 + 0x10);
    local_34 = *(int *)(param_1 + 0x28);
    if (local_34 != DAT_14cabca0c) {
      uVar7 = FUN_147552f3e(lVar6);
      lVar6 = FUN_1400d12c6(uVar7,&local_34);
      if (lVar6 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)FUN_1400a4c08(lVar6);
      }
    }
    lVar6 = (**(code **)(*plVar5 + 0x2e8))(plVar5);
    uVar7 = *(undefined8 *)(lVar6 + 0x120);
    local_98 = *(undefined8 *)(lVar4 + 0x88);
    local_b8 = *(undefined4 *)(lVar4 + 0x68);
    uStack_b4 = *(uint *)(lVar4 + 0x6c);
    uStack_b0 = *(uint *)(lVar4 + 0x70);
    uStack_ac = *(undefined4 *)(lVar4 + 0x74);
    local_a8 = *(uint *)(lVar4 + 0x78);
    uStack_a4 = *(uint *)(lVar4 + 0x7c);
    uStack_a0 = *(undefined4 *)(lVar4 + 0x80);
    uStack_9c = *(undefined4 *)(lVar4 + 0x84);
    FUN_144a3f8b4(local_90,lVar4 + 0x90);
    FUN_144b1f2a6(local_70,lVar4 + 0xb0);
    local_48 = (undefined5)*(undefined8 *)(lVar4 + 0xd8);
    uStack_43 = (undefined3)*(undefined8 *)(lVar4 + 0xdd);
    uStack_40 = (undefined5)((ulonglong)*(undefined8 *)(lVar4 + 0xdd) >> 0x18);
    if (SBORROW4(0,local_98._4_4_)) {
      puVar8 = &uStack_b4;
      if ((int)local_98 == 0) {
        puVar8 = &local_a8;
      }
      puVar10 = &uStack_b0;
      if ((int)local_98 == 0) {
        puVar10 = &uStack_a4;
      }
      uVar9 = (ulonglong)*puVar10 << 0x20;
      uVar3 = *puVar8;
    }
    else {
      uVar9 = 0;
      uVar3 = local_98._4_4_;
    }
    FUN_144a808d5(param_2,uVar3 | uVar9,CONCAT44(uStack_9c,uStack_a0),uVar7);
    param_2[1] = uVar7;
    FUN_144adeafa(&local_b8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147820c74 FUN_147820c74 body=88 status=ok
// SIG undefined FUN_147820c74(void)

void FUN_147820c74(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147820cce(param_1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147820cce FUN_147820cce body=537 status=ok
// SIG undefined FUN_147820cce(void)

undefined8 * FUN_147820cce(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  uint uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined1 local_80 [40];
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = FUN_14782105e();
  if (lVar7 == 0) {
LAB_147820e35:
    *param_2 = 0;
    param_2[1] = 0x10000ea60;
  }
  else {
    lVar3 = *(longlong *)(lVar7 + 0x100);
    plVar4 = *(longlong **)(lVar7 + 0x108);
    if (plVar4 == (longlong *)0x0) {
      plVar8 = (longlong *)FUN_14479d2ce(lVar3 + 0x10);
      if (plVar8 == (longlong *)0x0) goto LAB_147820e35;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar4 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      plVar8 = (longlong *)FUN_14479d2ce(lVar3 + 0x10);
      if (plVar8 == (longlong *)0x0) {
        LOCK();
        plVar8 = plVar4 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        goto LAB_147820e35;
      }
    }
    uVar2 = *(ushort *)(lVar7 + 0x122);
    lVar7 = FUN_14479d2ce(lVar3 + 0x20);
    lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x548) + 8);
    lVar7 = (**(code **)(*plVar8 + 0x2e8))(plVar8);
    uVar5 = *(undefined8 *)(lVar7 + 0x120);
    lVar12 = (ulonglong)uVar2 * 0x128;
    lVar7 = lVar12 + lVar3;
    local_a8 = *(undefined8 *)(lVar7 + 0x88);
    local_c8 = *(undefined4 *)(lVar7 + 0x68);
    uStack_c4 = *(uint *)(lVar7 + 0x6c);
    uStack_c0 = *(uint *)(lVar7 + 0x70);
    uStack_bc = *(undefined4 *)(lVar7 + 0x74);
    local_b8 = *(uint *)(lVar7 + 0x78);
    uStack_b4 = *(uint *)(lVar7 + 0x7c);
    uStack_b0 = *(undefined4 *)(lVar7 + 0x80);
    uStack_ac = *(undefined4 *)(lVar7 + 0x84);
    FUN_144a3f8b4();
    lVar12 = lVar12 + lVar3;
    FUN_144b1f2a6(local_80,lVar12 + 0xb0);
    local_58 = (undefined5)*(undefined8 *)(lVar12 + 0xd8);
    uStack_53 = (undefined3)*(undefined8 *)(lVar12 + 0xdd);
    uStack_50 = (undefined5)((ulonglong)*(undefined8 *)(lVar12 + 0xdd) >> 0x18);
    if (SBORROW4(0,local_a8._4_4_)) {
      puVar9 = &uStack_c4;
      if ((int)local_a8 == 0) {
        puVar9 = &local_b8;
      }
      puVar11 = &uStack_c0;
      if ((int)local_a8 == 0) {
        puVar11 = &uStack_b4;
      }
      uVar10 = (ulonglong)*puVar11 << 0x20;
      uVar6 = *puVar9;
    }
    else {
      uVar10 = 0;
      uVar6 = local_a8._4_4_;
    }
    FUN_144a808d5(param_2,uVar6 | uVar10,CONCAT44(uStack_ac,uStack_b0),uVar5);
    param_2[1] = uVar5;
    FUN_144adeafa(&local_c8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar4 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147820ee8 FUN_147820ee8 body=38 status=ok
// SIG undefined FUN_147820ee8(void)

void FUN_147820ee8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147820f0e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147820f0e FUN_147820f0e body=251 status=ok
// SIG undefined FUN_147820f0e(void)

undefined8 FUN_147820f0e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = FUN_14782105e();
  if (lVar5 == 0) {
    uVar6 = 0;
    FUN_1415b7ec4(L"No sequence player.",2,0);
  }
  else {
    local_1c = *(int *)(param_1 + 0x28);
    lVar3 = *(longlong *)(lVar5 + 0x100);
    plVar4 = *(longlong **)(lVar5 + 0x108);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
    if (local_1c == DAT_14cabca0c) {
      uVar6 = FUN_14479d2ce(lVar3 + 0x10);
    }
    else {
      uVar6 = FUN_147552f3e(lVar3);
      lVar5 = FUN_1400d12c6(uVar6,&local_1c);
      if (lVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1400a4c08(lVar5);
      }
    }
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 147821012 FUN_147821012 body=76 status=ok
// SIG undefined FUN_147821012(void)

longlong FUN_147821012(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144a7b8cc();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if (lVar2 == 0) {
    uVar1 = FUN_144a7757c();
    lVar2 = FUN_144a78ede(param_1,uVar1);
    if (lVar2 == 0) {
      lVar2 = FUN_14475ec7e(param_1);
      return lVar2;
    }
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0xc0);
  }
  return lVar2;
}



// FUNCTION 14782105e FUN_14782105e body=115 status=ok
// SIG undefined FUN_14782105e(void)

longlong FUN_14782105e(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x2c);
  if (lVar2 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x34);
    lVar2 = *(longlong *)(lVar2 + 0x548);
    if ((int)(uint)uVar1 < *(int *)(lVar2 + 0x30)) {
      lVar3 = lVar2 + 0x18;
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        lVar3 = *(longlong *)(lVar2 + 0x28);
      }
      if ((*(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
        lVar3 = (ulonglong)(uint)uVar1 * 0x128;
        if (*(short *)(param_1 + 0x36) != *(short *)(*(longlong *)(lVar2 + 8) + 0x11c + lVar3)) {
          return 0;
        }
        return *(longlong *)(lVar2 + 8) + lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1478210d8 FUN_1478210d8 body=514 status=ok
// SIG undefined FUN_1478210d8(void)

void FUN_1478210d8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  uint local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  local_58 = 0;
  uStack_50 = 0;
  local_48 = CONCAT22(local_48._2_2_,0x100);
  uStack_44 = 0x3f800000;
  uStack_40 = 0;
  local_38 = local_38 & 0xffffff00;
  uStack_34 = 2;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  plVar2 = &local_60;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = CONCAT44(uStack_34,local_38);
  local_78 = local_48;
  uStack_74 = uStack_44;
  uStack_70 = (undefined4)uStack_40;
  uStack_6c = uStack_40._4_4_;
  local_88 = (undefined4)local_58;
  uStack_84 = local_58._4_4_;
  uStack_80 = (undefined4)uStack_50;
  uStack_7c = uStack_50._4_4_;
  uVar1 = FUN_1478212dc(local_28,local_30,&local_88,plVar2);
  *param_3 = uVar1;
  if ((DAT_14c950c29 == '\x01') && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478212dc FUN_1478212dc body=443 status=ok
// SIG undefined FUN_1478212dc(void)

undefined8 FUN_1478212dc(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_2 != 0) {
    lVar10 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if ((lVar10 != 0) && ((*(byte *)(lVar10 + 0x155) & 0x20) == 0)) {
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_98 = 0;
      local_88 = (longlong *)0x0;
      local_a8 = 0x48000c0101;
      uVar11 = FUN_1403c9430();
      local_148 = &local_d8;
      lVar12 = FUN_141137228(lVar10,uVar11,0,0);
      *(undefined8 *)(lVar12 + 0x3c8) = param_3[4];
      uVar11 = *param_3;
      uVar8 = param_3[1];
      uVar9 = param_3[3];
      *(undefined8 *)(lVar12 + 0x3b8) = param_3[2];
      *(undefined8 *)(lVar12 + 0x3c0) = uVar9;
      *(undefined8 *)(lVar12 + 0x3a8) = uVar11;
      *(undefined8 *)(lVar12 + 0x3b0) = uVar8;
      lVar10 = *(longlong *)(lVar12 + 0x3d0);
      *(undefined8 *)(lVar10 + 0x2d4) = param_3[4];
      uVar1 = *(undefined4 *)param_3;
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar6 = *(undefined4 *)(param_3 + 3);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
      *(undefined4 *)(lVar10 + 0x2c4) = *(undefined4 *)(param_3 + 2);
      *(undefined4 *)(lVar10 + 0x2c8) = uVar5;
      *(undefined4 *)(lVar10 + 0x2cc) = uVar6;
      *(undefined4 *)(lVar10 + 0x2d0) = uVar7;
      *(undefined4 *)(lVar10 + 0x2b4) = uVar1;
      *(undefined4 *)(lVar10 + 0x2b8) = uVar2;
      *(undefined4 *)(lVar10 + 700) = uVar3;
      *(undefined4 *)(lVar10 + 0x2c0) = uVar4;
      FUN_14781eba2(lVar12,param_2);
      FUN_140d641a2(lVar12);
      *param_4 = lVar12;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      uStack_11c = 0x3ff00000;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f4 = 0x3ff00000;
      uStack_f0 = 0;
      uStack_ec = 0x3ff00000;
      local_e8 = 0x3ff0000000000000;
      uStack_e0 = 0;
      local_148 = (undefined8 *)((ulonglong)local_148 & 0xffffffffffffff00);
      FUN_14113775c(lVar12,&local_138,0,0);
      uVar11 = *(undefined8 *)(lVar12 + 0x3d0);
      if (local_98 != 0) {
        plVar13 = local_88;
        if (local_88 == (longlong *)0x0) {
          plVar13 = local_78;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      goto LAB_14782133c;
    }
  }
  uVar11 = 0;
LAB_14782133c:
  if ((local_50 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147821498 FUN_147821498 body=45 status=ok
// SIG undefined FUN_147821498(void)

void FUN_147821498(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14479d2ce(param_1 + 0x4d4);
  *param_3 = uVar1;
  return;
}



// FUNCTION 147821554 FUN_147821554 body=281 status=ok
// SIG undefined FUN_147821554(void)

void FUN_147821554(longlong param_1)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar3 = FUN_1447210f0(param_1);
    if ((lVar3 != 0) && (*(longlong **)(lVar3 + 0x178) != (longlong *)0x0)) {
      dVar1 = (double)(**(code **)(**(longlong **)(lVar3 + 0x178) + 0x640))();
      *(float *)(param_1 + 0x3a8) = (float)dVar1;
    }
    iVar2 = FUN_14487fd02(param_1);
    if (iVar2 != 1) {
      if ((*(float *)(param_1 + 0x3a8) != -1.1754944e-38) || (NAN(*(float *)(param_1 + 0x3a8)))) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  else {
    local_28 = *(undefined2 **)(param_1 + 0x18);
    FUN_1400021e4(&local_28,&local_38);
    puVar4 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar4 = local_38;
    }
    FUN_140002266(&local_28,L"Cannot initiate playback when Sequence does not have authority (%s)",
                  puVar4);
    puVar4 = &DAT_149dfb77a;
    if (local_20 != 0) {
      puVar4 = local_28;
    }
    FUN_1415b7ec4(puVar4,3,0);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782167c FUN_14782167c body=156 status=ok
// SIG undefined FUN_14782167c(void)

void FUN_14782167c(undefined8 param_1,longlong param_2)

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
  FUN_14782171a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


