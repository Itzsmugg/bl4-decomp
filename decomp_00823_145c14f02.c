// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145c14f02 FUN_145c14f02 body=80 status=ok
// SIG undefined FUN_145c14f02(void)

undefined8 * FUN_145c14f02(undefined8 *param_1)

{
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6f3490;
  param_1[6] = 0;
  param_1[0xd] = 0x3ff0000000000000;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0x3ff0000000000000;
  param_1[0x10] = 0x3f800000;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 0x10;
  return param_1;
}



// FUNCTION 145c14f5e FUN_145c14f5e body=80 status=ok
// SIG undefined FUN_145c14f5e(void)

undefined8 * FUN_145c14f5e(undefined8 *param_1)

{
  FUN_1410ea038();
  *param_1 = &PTR_FUN_14a759010;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  return param_1;
}



// FUNCTION 145c14fb4 FUN_145c14fb4 body=86 status=ok
// SIG undefined FUN_145c14fb4(void)

void FUN_145c14fb4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a79d540;
  FUN_140056680(puVar1 + 5,&DAT_149e01fe8);
  *(undefined2 *)((longlong)puVar1 + 0x3c) = 0x100;
  *puVar1 = &PTR_FUN_14a7a01d0;
  FUN_14020fad6(puVar1 + 5,L"Bitwise Compress Only");
  return;
}



// FUNCTION 145c1500a FUN_145c1500a body=314 status=ok
// SIG undefined FUN_145c1500a(void)

void FUN_145c1500a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  undefined8 local_38;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = &local_2c;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_145c15146(&local_50,puVar1,local_38);
  if ((*param_3 != local_50) || ((int)param_3[1] != local_48)) {
    *param_3 = local_50;
    *(int *)(param_3 + 1) = local_48;
    param_3[2] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c15146 FUN_145c15146 body=262 status=ok
// SIG undefined FUN_145c15146(void)

longlong FUN_145c15146(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c1524e(&local_50,param_2,param_3,1);
  local_38 = local_50;
  uVar3 = FUN_14477b664(local_48);
  local_30 = FUN_14477b664(uVar3);
  local_28 = local_40;
  if (local_30 == 0) {
    uVar3 = FUN_140927942();
    local_30 = FUN_14477b664(uVar3);
  }
  if (local_40 == 0) {
    local_28 = 0;
    local_40 = 0;
    if ((local_50 != 0) && (local_30 != 0)) {
      plVar1 = *(longlong **)(local_30 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        local_40 = 0;
        local_28 = local_40;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        local_40 = FUN_144aff482(uVar3,&local_38);
        local_28 = local_40;
      }
    }
  }
  FUN_144a79b68(param_1,local_40);
  *(undefined4 *)(param_1 + 8) = 0x4000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145c1524e FUN_145c1524e body=149 status=ok
// SIG undefined FUN_145c1524e(void)

undefined8 FUN_145c1524e(undefined8 param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ff2acb(local_40);
  FUN_1411a0e4c(local_40,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_40;
    if (0x18 < local_28) {
      pppuVar2 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c152f0 FUN_145c152f0 body=80 status=ok
// SIG undefined FUN_145c152f0(void)

undefined8 * FUN_145c152f0(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1458097b0();
  *param_1 = &PTR_FUN_14ac10be0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  lVar1 = FUN_1412474be();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x3d] = lVar1;
  return param_1;
}



// FUNCTION 145c15340 FUN_145c15340 body=86 status=ok
// SIG undefined FUN_145c15340(void)

undefined8 * FUN_145c15340(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adf9a40;
  param_1[0x74] = &PTR_LAB_14adfa080;
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c15396 thunk_FUN_1402ef4ac body=5 status=ok
// SIG undefined thunk_FUN_1402ef4ac(void)

void thunk_FUN_1402ef4ac(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_14a77e150;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x56];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_1407903ca(param_1 + 0x48);
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140115fde(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xe) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar6 = *(int *)(param_1 + 0xe) + -1;
      lVar4 = (longlong)iVar6 * 0x88;
      lVar2 = DAT_14c9a3d60 + lVar4;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  FUN_144760f98(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c1539c FUN_145c1539c body=62 status=ok
// SIG undefined FUN_145c1539c(void)

undefined8 * FUN_145c1539c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14ae37bf0;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c153da FUN_145c153da body=29 status=ok
// SIG undefined FUN_145c153da(void)

undefined8 FUN_145c153da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c153f8 FUN_145c153f8 body=65 status=ok
// SIG undefined FUN_145c153f8(void)

undefined8 * FUN_145c153f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aed5030;
  FUN_145c1543a(param_1 + 0x16);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c1543a FUN_145c1543a body=67 status=ok
// SIG undefined FUN_145c1543a(void)

void FUN_145c1543a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145c1547e(param_1 + 0x28);
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000145c15479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c1547e FUN_145c1547e body=141 status=ok
// SIG undefined FUN_145c1547e(void)

void FUN_145c1547e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x50);
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
  plVar3 = *(longlong **)(param_1 + 0x30);
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
                    /* WARNING: Could not recover jumptable at 0x000145c15507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c15516 FUN_145c15516 body=80 status=ok
// SIG undefined FUN_145c15516(void)

undefined8 * FUN_145c15516(undefined8 *param_1)

{
  FUN_1406ed334();
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfc;
  *param_1 = &PTR_FUN_14b2162d0;
  param_1[0x1f] = &PTR_FUN_14b216640;
  param_1[0x20] = &PTR_FUN_14b216670;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x201;
  return param_1;
}



// FUNCTION 145c15570 FUN_145c15570 body=82 status=ok
// SIG undefined FUN_145c15570(void)

void FUN_145c15570(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b4f2df0;
  param_1[4] = &PTR_FUN_14b4f2e18;
  FUN_1449db362(param_1 + 0x11);
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1411ebb9a(param_1);
  return;
}



// FUNCTION 145c155c2 FUN_145c155c2 body=37 status=ok
// SIG undefined FUN_145c155c2(void)

void FUN_145c155c2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c155e8();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c155e8 FUN_145c155e8 body=47 status=ok
// SIG undefined FUN_145c155e8(void)

ulonglong FUN_145c155e8(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1458f73f0();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_145c15618(lVar2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 == 0 | bVar1) & 0xffffff01;
}



// FUNCTION 145c15618 FUN_145c15618 body=7 status=ok
// SIG undefined FUN_145c15618(void)

undefined1 FUN_145c15618(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



// FUNCTION 145c15628 FUN_145c15628 body=174 status=ok
// SIG undefined FUN_145c15628(void)

undefined8 * FUN_145c15628(undefined8 *param_1)

{
  FUN_140bf9282();
  *param_1 = &PTR_FUN_14b7be2a0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return param_1;
}



// FUNCTION 145c156d6 FUN_145c156d6 body=9 status=ok
// SIG undefined FUN_145c156d6(void)

void FUN_145c156d6(longlong param_1)

{
  FUN_145c156e0(param_1 + 0x10);
  return;
}



// FUNCTION 145c156e0 FUN_145c156e0 body=82 status=ok
// SIG undefined FUN_145c156e0(void)

void FUN_145c156e0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3c590;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x000145c1572e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c15732 FUN_145c15732 body=62 status=ok
// SIG undefined FUN_145c15732(void)

undefined8 * FUN_145c15732(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14ba40c20;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c15770 FUN_145c15770 body=29 status=ok
// SIG undefined FUN_145c15770(void)

undefined8 FUN_145c15770(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c1578e FUN_145c1578e body=40 status=ok
// SIG undefined FUN_145c1578e(void)

undefined8 FUN_145c1578e(undefined8 param_1,int param_2)

{
  FUN_145c157b6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c157b6 FUN_145c157b6 body=90 status=ok
// SIG undefined FUN_145c157b6(void)

void FUN_145c157b6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc56bd0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c15810(param_1 + 8);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c15810 FUN_145c15810 body=53 status=ok
// SIG undefined FUN_145c15810(void)

void FUN_145c15810(longlong *param_1)

{
  FUN_145c15846();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c15846 FUN_145c15846 body=90 status=ok
// SIG undefined FUN_145c15846(void)

void FUN_145c15846(longlong param_1)

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



// FUNCTION 145c158a0 FUN_145c158a0 body=89 status=ok
// SIG undefined FUN_145c158a0(void)

void FUN_145c158a0(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_145c158fa();
  return;
}



// FUNCTION 145c158fa FUN_145c158fa body=52 status=ok
// SIG undefined FUN_145c158fa(void)

void FUN_145c158fa(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_145c1592e(param_1,param_2);
  return;
}



// FUNCTION 145c1592e FUN_145c1592e body=116 status=ok
// SIG undefined FUN_145c1592e(void)

void FUN_145c1592e(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145c159a2 FUN_145c159a2 body=117 status=ok
// SIG undefined FUN_145c159a2(void)

void FUN_145c159a2(void)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_1411d204e();
  FUN_145c15a18(local_58,FUN_143231df0);
  FUN_145c15ada(uVar1,&local_60,local_58);
  FUN_1401cb1ee(local_58);
  DAT_14ca9a530 = local_60;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c15a18 FUN_145c15a18 body=193 status=ok
// SIG undefined FUN_145c15a18(void)

LPCRITICAL_SECTION FUN_145c15a18(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 2) {
    FUN_1446efa72(param_1 + 1,0,2,0x10);
    param_1[1].LockCount = 2;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e1c150;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_149e8f3c0;
  (p_Var1->ProcessLocksList).Blink = param_2;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 145c15ada FUN_145c15ada body=315 status=ok
// SIG undefined FUN_145c15ada(void)

undefined8 *
FUN_145c15ada(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  *param_2 = 0;
  EnterCriticalSection(param_3);
  cVar3 = '\0';
  if ((param_3[1].LockCount != 0) && (param_3[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_3[1].DebugInfo + 0x30))();
  }
  if (param_3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_3);
  }
  if (cVar3 != '\0') {
    FUN_14109be94(param_1,1);
    EnterCriticalSection(param_3);
    if ((param_3[1].LockCount == 0) ||
       (p_Var2 = param_3[1].DebugInfo, p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      local_40 = 0;
    }
    else {
      (**(code **)(*(longlong *)p_Var2 + 0x38))(p_Var2,&local_40);
    }
    if (param_3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_3);
    }
    *param_2 = local_40;
    iVar1 = param_1[1].LockCount;
    lVar4 = (longlong)iVar1;
    param_1[1].LockCount = iVar1 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar1 + 1U) {
      FUN_1447a71f6(param_1 + 1,iVar1);
    }
    p_Var2 = param_1[1].DebugInfo;
    *(undefined8 *)(&p_Var2->Type + lVar4 * 8) = 0;
    *(undefined4 *)(&p_Var2->CriticalSection + lVar4 * 2) = 0;
    FUN_14109be38(&p_Var2->Type + lVar4 * 8,param_3);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c15c22 FUN_145c15c22 body=132 status=ok
// SIG undefined FUN_145c15c22(void)

void FUN_145c15c22(longlong param_1,int param_2)

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



// FUNCTION 145c15ca6 FUN_145c15ca6 body=329 status=ok
// SIG undefined FUN_145c15ca6(void)

undefined4 *
FUN_145c15ca6(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145c15e86(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_145c15df0(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
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
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_145cb4e9a(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c15df0 FUN_145c15df0 body=149 status=ok
// SIG undefined FUN_145c15df0(void)

void FUN_145c15df0(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_1470a435a(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_145c15e14;
    }
  }
  uVar1 = 0;
LAB_145c15e14:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 145c15e86 FUN_145c15e86 body=228 status=ok
// SIG undefined FUN_145c15e86(void)

int * FUN_145c15e86(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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



// FUNCTION 145c15f6a FUN_145c15f6a body=40 status=ok
// SIG undefined FUN_145c15f6a(void)

undefined8 FUN_145c15f6a(undefined8 param_1,int param_2)

{
  FUN_145c15f92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c15f92 FUN_145c15f92 body=74 status=ok
// SIG undefined FUN_145c15f92(void)

void FUN_145c15f92(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1bf7a0;
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145c15fdc FUN_145c15fdc body=261 status=ok
// SIG undefined FUN_145c15fdc(void)

undefined8 * FUN_145c15fdc(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar4 = (ulonglong)(param_2[1] - *param_2) >> 4;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_145c163c8(param_1,uVar4 & 0xffffffff);
    if (uVar3 < 4) {
      iVar2 = 1;
    }
    else {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 9) == 0) || (*(int *)(param_1 + 9) < iVar2)) {
      *(int *)(param_1 + 9) = iVar2;
      FUN_1414ee2b8(param_1);
    }
  }
  puVar5 = (undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  if (puVar5 != puVar1) {
    do {
      local_48 = *puVar5;
      uStack_44 = puVar5[1];
      uStack_40 = puVar5[2];
      uStack_3c = puVar5[3];
      FUN_145c160e2(param_1,local_34,&local_48,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c160e2 FUN_145c160e2 body=358 status=ok
// SIG undefined FUN_145c160e2(void)

undefined4 *
FUN_145c160e2(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c162e2(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_145c1624a(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1414ee2b8(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c1624a FUN_145c1624a body=152 status=ok
// SIG undefined FUN_145c1624a(void)

void FUN_145c1624a(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_14891744e((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_145c16295;
    }
  }
  uVar5 = 0;
LAB_145c16295:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 145c162e2 FUN_145c162e2 body=230 status=ok
// SIG undefined FUN_145c162e2(void)

int * FUN_145c162e2(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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



// FUNCTION 145c163c8 FUN_145c163c8 body=440 status=ok
// SIG undefined FUN_145c163c8(void)

void FUN_145c163c8(longlong *param_1,uint param_2)

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
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x18 + -0x14);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar9 + -1;
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
        puVar5 = puVar5 + -6;
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



// FUNCTION 145c16580 FUN_145c16580 body=9 status=ok
// SIG undefined FUN_145c16580(void)

void FUN_145c16580(longlong param_1)

{
  FUN_145c1658a(param_1 + 0x10);
  return;
}



// FUNCTION 145c1658a FUN_145c1658a body=356 status=ok
// SIG undefined FUN_145c1658a(void)

void FUN_145c1658a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eeb710;
  if (*(char *)(param_1 + 0x1fa) == '\x01') {
    *(undefined1 *)(param_1 + 0x1fa) = 0;
  }
  param_1[0x1e0] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[500];
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
  param_1[0x1ca] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x1de];
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
  param_1[0x1b4] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x1c8];
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
  param_1[0x19e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x1b2];
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
  plVar3 = (longlong *)param_1[0x199];
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
  FUN_140ffd7a4(param_1 + 2);
  return;
}



// FUNCTION 145c166fa FUN_145c166fa body=296 status=ok
// SIG undefined FUN_145c166fa(void)

undefined8 * FUN_145c166fa(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a511ed0;
  param_1[5] = &PTR_FUN_14a5121d0;
  param_1[0x2d] = &PTR_FUN_14a512210;
  FUN_145c16822(param_1 + 0x2e);
  FUN_140ca8f8e(param_1 + 0x5e);
  param_1[0x74] = 0x3f800000;
  param_1[0x75] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) | 1;
  lVar1 = FUN_140bcc93a();
  FUN_140f13d9e(param_1 + 0x30,lVar1 + 0x2230);
  FUN_140f13d9e(param_1 + 0x46,lVar1 + 0x22e0);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(lVar1 + 0x2390);
  lVar1 = FUN_140bcc93a();
  FUN_140f13d9e(param_1 + 0x5e,lVar1 + 0x23a0);
  param_1[0x74] = &DAT_3f8000003f800000;
  param_1[0x75] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined1 **)((longlong)param_1 + 0x3cc) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x3d4) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0x4000000040800000;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0x4000000040800000;
  return param_1;
}



// FUNCTION 145c16822 FUN_145c16822 body=58 status=ok
// SIG undefined FUN_145c16822(void)

undefined8 * FUN_145c16822(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eeb6d0;
  FUN_140ca8f8e(param_1 + 2);
  FUN_140ca8f8e(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x2e) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 145c1685c FUN_145c1685c body=48 status=ok
// SIG undefined FUN_145c1685c(void)

void FUN_145c1685c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x3d8))(param_1,0);
  if (param_1[0x37] != 0) {
    FUN_145c1688c();
    return;
  }
  return;
}



// FUNCTION 145c1688c FUN_145c1688c body=264 status=ok
// SIG undefined FUN_145c1688c(void)

void FUN_145c1688c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((DAT_14caf2c98 == '\x01') && (iVar1 = *(int *)(param_1 + 0x2b8), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x2b0);
    lVar3 = 0;
    do {
      local_58 = *(undefined8 *)(lVar2 + lVar3);
      local_60 = FUN_140634914(param_1,&local_58,0);
      local_80[0] = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_78 = *(undefined8 *)(param_1 + 0x148);
      FUN_147bf2ce2(local_80);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if (*(int *)(param_1 + 700) < 0) {
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    FUN_1417c3e4a(param_1 + 0x2b0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x2b8) = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c16996 FUN_145c16996 body=312 status=ok
// SIG undefined FUN_145c16996(void)

undefined4 * FUN_145c16996(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  FUN_145c16ba4(param_1,local_48);
  FUN_145c16ad0(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
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
  cVar3 = FUN_145c16b34(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_145c16c94(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c16ad0 FUN_145c16ad0 body=100 status=ok
// SIG undefined FUN_145c16ad0(void)

undefined8 * FUN_145c16ad0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 145c16b34 FUN_145c16b34 body=111 status=ok
// SIG undefined FUN_145c16b34(void)

undefined8 FUN_145c16b34(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1414ee5e2(), iVar7 != -1)) {
    lVar2 = *param_1;
    lVar8 = (longlong)iVar7 * 0x20;
    FUN_14584004c(lVar2 + lVar8);
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + lVar8) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + lVar8);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14743e5ee(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 145c16ba4 FUN_145c16ba4 body=239 status=ok
// SIG undefined FUN_145c16ba4(void)

int * FUN_145c16ba4(longlong *param_1,int *param_2)

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



// FUNCTION 145c16c94 FUN_145c16c94 body=485 status=ok
// SIG undefined FUN_145c16c94(void)

void FUN_145c16c94(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
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
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
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



// FUNCTION 145c16e7a FUN_145c16e7a body=40 status=ok
// SIG undefined FUN_145c16e7a(void)

undefined8 FUN_145c16e7a(undefined8 param_1,int param_2)

{
  FUN_145c16ea2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c16ea2 FUN_145c16ea2 body=91 status=ok
// SIG undefined FUN_145c16ea2(void)

void FUN_145c16ea2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1d9a30;
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_145c16efe(param_1 + 0x72);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145c16efe FUN_145c16efe body=53 status=ok
// SIG undefined FUN_145c16efe(void)

void FUN_145c16efe(longlong *param_1)

{
  FUN_145c16f34();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c16f34 FUN_145c16f34 body=90 status=ok
// SIG undefined FUN_145c16f34(void)

void FUN_145c16f34(longlong param_1)

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



// FUNCTION 145c16fa5 FUN_145c16fa5 body=30 status=ok
// SIG undefined FUN_145c16fa5(void)

void FUN_145c16fa5(longlong param_1)

{
  FUN_145c16fc4(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145c16fc4 FUN_145c16fc4 body=101 status=ok
// SIG undefined FUN_145c16fc4(void)

void FUN_145c16fc4(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_145c1702a(param_1 + 0x68);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145c1702a FUN_145c1702a body=53 status=ok
// SIG undefined FUN_145c1702a(void)

void FUN_145c1702a(longlong *param_1)

{
  FUN_145c17060();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c17060 FUN_145c17060 body=90 status=ok
// SIG undefined FUN_145c17060(void)

void FUN_145c17060(longlong param_1)

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



// FUNCTION 145c170ba FUN_145c170ba body=40 status=ok
// SIG undefined FUN_145c170ba(void)

undefined8 FUN_145c170ba(undefined8 param_1,int param_2)

{
  FUN_145c170e2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c170e2 FUN_145c170e2 body=91 status=ok
// SIG undefined FUN_145c170e2(void)

void FUN_145c170e2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9c1960;
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  FUN_145c1713e(param_1 + 0x73);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145c1713e FUN_145c1713e body=53 status=ok
// SIG undefined FUN_145c1713e(void)

void FUN_145c1713e(longlong *param_1)

{
  FUN_145c17174();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c17174 FUN_145c17174 body=90 status=ok
// SIG undefined FUN_145c17174(void)

void FUN_145c17174(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145c171da FUN_145c171da body=233 status=ok
// SIG undefined FUN_145c171da(void)

undefined8 * FUN_145c171da(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1413f708e();
  *param_1 = &PTR_FUN_14abf5d50;
  param_1[5] = &PTR_LAB_14abf6070;
  FUN_145c172c4(param_1 + 0xe);
  FUN_1400b22c2(&local_48,"FinishWithResult");
  if (param_1 + 6 == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_48;
    local_48 = 0;
    *(undefined4 *)(param_1 + 7) = local_40;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_3c;
  }
  FUN_145c172c4(&local_48);
  FUN_146013502(param_1 + 0xe,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c172c4 FUN_145c172c4 body=154 status=ok
// SIG undefined FUN_145c172c4(void)

undefined8 * FUN_145c172c4(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  lVar1 = FUN_145c1735f();
  param_1[2] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
    lVar1 = param_1[2];
  }
  if (lVar1 == 0) {
    FUN_140056680(param_1 + 3,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x18);
    FUN_1400021e4();
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c1735f FUN_145c1735f body=57 status=ok
// SIG undefined FUN_145c1735f(void)

void FUN_145c1735f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ec20 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1ec20 = FUN_14171c317(FUN_146428d48,uVar1,L"EBTNodeResult");
  }
  return;
}



// FUNCTION 145c17398 FUN_145c17398 body=52 status=ok
// SIG undefined FUN_145c17398(void)

void FUN_145c17398(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x318);
  memset(_Dst,0,0x318);
  FUN_145c173cc(_Dst);
  return;
}



// FUNCTION 145c173cc FUN_145c173cc body=131 status=ok
// SIG undefined FUN_145c173cc(void)

undefined8 * FUN_145c173cc(undefined8 *param_1)

{
  FUN_140e8cfb8();
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *param_1 = &PTR_FUN_14b9d14a0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x5f] = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  return param_1;
}



// FUNCTION 145c17450 FUN_145c17450 body=40 status=ok
// SIG undefined FUN_145c17450(void)

undefined8 FUN_145c17450(undefined8 param_1,int param_2)

{
  FUN_145c17478();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c17478 FUN_145c17478 body=57 status=ok
// SIG undefined FUN_145c17478(void)

void FUN_145c17478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b241b10;
  FUN_145c174b1(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1457f7294(param_1);
  return;
}



// FUNCTION 145c174b1 FUN_145c174b1 body=38 status=ok
// SIG undefined FUN_145c174b1(void)

void FUN_145c174b1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145c174d8(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 145c174d8 FUN_145c174d8 body=71 status=ok
// SIG undefined FUN_145c174d8(void)

void FUN_145c174d8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2419a0;
  plVar3 = (longlong *)param_1[8];
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
  FUN_1457f72cc(param_1);
  return;
}



// FUNCTION 145c17520 FUN_145c17520 body=274 status=ok
// SIG undefined FUN_145c17520(void)

void FUN_145c17520(longlong param_1)

{
  FUN_145c17a80(param_1 + 0x198);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 400));
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  FUN_145c1776a(param_1 + 0x170);
  FUN_145c1769e(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  FUN_145c17632(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_145c17632(param_1 + 0xb8);
  FUN_145c1769e(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145c17668(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145c17668(param_1);
  return;
}



// FUNCTION 145c17632 FUN_145c17632 body=53 status=ok
// SIG undefined FUN_145c17632(void)

void FUN_145c17632(longlong *param_1)

{
  FUN_145c177ba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c17668 FUN_145c17668 body=53 status=ok
// SIG undefined FUN_145c17668(void)

void FUN_145c17668(longlong *param_1)

{
  FUN_145c17916();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c1769e FUN_145c1769e body=95 status=ok
// SIG undefined FUN_145c1769e(void)

void FUN_145c1769e(longlong *param_1)

{
  FUN_145c176fe(param_1,*(undefined4 *)((longlong)param_1 + 0xc),(int)param_1[2]);
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  FUN_1446f8d3c(param_1,0,0,0x10,8);
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 0;
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c176fe FUN_145c176fe body=107 status=ok
// SIG undefined FUN_145c176fe(void)

void FUN_145c176fe(longlong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = param_3 - param_2;
  if (uVar1 + 1 < uVar3 || uVar3 == 0) {
    return;
  }
  lVar2 = *param_1;
  param_2 = param_2 & uVar1;
  param_3 = param_3 & uVar1;
  if (param_2 < param_3) {
    lVar2 = lVar2 + (ulonglong)param_2 * 0x10;
    param_3 = uVar3;
  }
  else {
    FUN_146ffaefe((ulonglong)param_2 * 0x10 + lVar2,(uVar1 + 1) - param_2);
  }
  FUN_146ffaefe(lVar2,param_3);
  return;
}



// FUNCTION 145c1776a FUN_145c1776a body=80 status=ok
// SIG undefined FUN_145c1776a(void)

void FUN_145c1776a(longlong *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  FUN_1446f8d3c(param_1,0,0,8,4);
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 0;
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c177ba FUN_145c177ba body=346 status=ok
// SIG undefined FUN_145c177ba(void)

void FUN_145c177ba(longlong *param_1)

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
      FUN_146ff7a86(*local_68 + (longlong)iStack_4c * 0xf8 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14579fe3a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c17916 FUN_145c17916 body=361 status=ok
// SIG undefined FUN_145c17916(void)

void FUN_145c17916(longlong *param_1)

{
  longlong *plVar1;
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
      lVar2 = *(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (lVar2 != 0) {
        FUN_14128b0c2(lVar2);
        FUN_1400020a8(lVar2);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c17a80 FUN_145c17a80 body=135 status=ok
// SIG undefined FUN_145c17a80(void)

void FUN_145c17a80(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_145c17b08(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_145c17b3e(param_1 + 8);
  return;
}



// FUNCTION 145c17b08 FUN_145c17b08 body=54 status=ok
// SIG undefined FUN_145c17b08(void)

void FUN_145c17b08(longlong param_1)

{
  FUN_145c17b74();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c17b3e FUN_145c17b3e body=54 status=ok
// SIG undefined FUN_145c17b3e(void)

void FUN_145c17b3e(longlong param_1)

{
  FUN_145c17c12();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c17b74 FUN_145c17b74 body=83 status=ok
// SIG undefined FUN_145c17b74(void)

void FUN_145c17b74(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_145c17bc8(param_1);
  }
  *(undefined8 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(uint *)(param_1 + 0x34) < 0x21) {
    return;
  }
  *(undefined4 *)(param_1 + 0x34) = 0x20;
  FUN_14008f53c(param_1 + 0x20,0);
  return;
}



// FUNCTION 145c17bc8 FUN_145c17bc8 body=74 status=ok
// SIG undefined FUN_145c17bc8(void)

void FUN_145c17bc8(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x10),
              (longlong)*(int *)((longlong)param_1 + 0x18) << 4);
      FUN_1446efa72((longlong)param_1 + 0x10,0,0,0x10);
      return;
    }
  }
  return;
}



// FUNCTION 145c17c12 FUN_145c17c12 body=352 status=ok
// SIG undefined FUN_145c17c12(void)

void FUN_145c17c12(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x20;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = lVar1;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_144a81a4c(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < *(int *)(local_40 + 0x10)) {
    do {
      lVar2 = *(longlong *)(local_70 + 0x10);
      if (*(longlong *)(local_70 + 0x10) == 0) {
        lVar2 = local_70;
      }
      lVar2 = *(longlong *)(lVar2 + (longlong)iStack_54 * 0x10);
      if (lVar2 != 0) {
        FUN_145c17a80(lVar2);
        FUN_1400020a8(lVar2);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_144a81a4c(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_145c17d74(param_1);
  }
  *(undefined8 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0x20 < *(uint *)(param_1 + 0x34)) {
    *(undefined4 *)(param_1 + 0x34) = 0x20;
    FUN_14008f53c(lVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c17d74 FUN_145c17d74 body=74 status=ok
// SIG undefined FUN_145c17d74(void)

void FUN_145c17d74(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x10),
              (longlong)*(int *)((longlong)param_1 + 0x18) << 4);
      FUN_1446efa72((longlong)param_1 + 0x10,0,0,0x10);
      return;
    }
  }
  return;
}



// FUNCTION 145c17dbe FUN_145c17dbe body=144 status=ok
// SIG undefined FUN_145c17dbe(void)

code * FUN_145c17dbe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145c17e4e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ForwardDirLightCloudShadow";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLightCloudTransmittanceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xab000000077;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145de115c;
}



// FUNCTION 145c17e4e FUN_145c17e4e body=265 status=ok
// SIG undefined FUN_145c17e4e(void)

undefined * FUN_145c17e4e(void)

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
              0x110) < DAT_14c9c0ff8) {
    FUN_144b3d300(&DAT_14c9c0ff8);
    if (DAT_14c9c0ff8 == -1) {
      FUN_145c17f58(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLightCloudTransmittanceParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x46;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c0f78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8dfd3);
      _Init_thread_footer(&DAT_14c9c0ff8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0f78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c17f58 FUN_145c17f58 body=226 status=ok
// SIG undefined FUN_145c17f58(void)

longlong * FUN_145c17f58(longlong *param_1)

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
  pcVar13 = FUN_1462b70f0;
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



// FUNCTION 145c18040 FUN_145c18040 body=138 status=ok
// SIG undefined FUN_145c18040(void)

code * FUN_145c18040(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CloudShadowmapFarDepthKm";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462b7178;
}



// FUNCTION 145c180ca FUN_145c180ca body=138 status=ok
// SIG undefined FUN_145c180ca(void)

code * FUN_145c180ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CloudShadowmapTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c18040;
}



// FUNCTION 145c18154 FUN_145c18154 body=52 status=ok
// SIG undefined FUN_145c18154(void)

void FUN_145c18154(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_145c18188(param_1 + 0x40);
  return;
}



// FUNCTION 145c18188 FUN_145c18188 body=55 status=ok
// SIG undefined FUN_145c18188(void)

void FUN_145c18188(longlong *param_1)

{
  FUN_145c181c0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c181c0 FUN_145c181c0 body=121 status=ok
// SIG undefined FUN_145c181c0(void)

void FUN_145c181c0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
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



// FUNCTION 145c18246 FUN_145c18246 body=128 status=ok
// SIG undefined FUN_145c18246(void)

undefined8 * FUN_145c18246(undefined8 *param_1)

{
  FUN_145c182d8();
  *param_1 = &PTR_FUN_14ad098f0;
  param_1[5] = &PTR_LAB_14ad09bb0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_145c182c6(param_1 + 0x1b);
  param_1[0x1b] = 0x3ff0000000000000;
  param_1[0x1c] = 0x3ff0000000000000;
  param_1[0x1d] = 0;
  return param_1;
}



// FUNCTION 145c182c6 FUN_145c182c6 body=18 status=ok
// SIG undefined FUN_145c182c6(void)

undefined8 * FUN_145c182c6(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 145c182d8 FUN_145c182d8 body=118 status=ok
// SIG undefined FUN_145c182d8(void)

undefined8 * FUN_145c182d8(undefined8 *param_1)

{
  FUN_145be598e();
  *param_1 = &PTR_FUN_14ad07560;
  param_1[5] = &PTR_FUN_14ad07820;
  *(undefined2 *)(param_1 + 7) = 0x101;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x12) = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 145c1834e FUN_145c1834e body=40 status=ok
// SIG undefined FUN_145c1834e(void)

undefined8 FUN_145c1834e(undefined8 param_1,int param_2)

{
  FUN_145c18376();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c18376 FUN_145c18376 body=110 status=ok
// SIG undefined FUN_145c18376(void)

void FUN_145c18376(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b553580;
  param_1[6] = &PTR_FUN_14b553840;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145c183e4(param_1 + 7);
  FUN_140af926c(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c183e4 FUN_145c183e4 body=53 status=ok
// SIG undefined FUN_145c183e4(void)

void FUN_145c183e4(longlong *param_1)

{
  FUN_145c1841a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c1841a FUN_145c1841a body=346 status=ok
// SIG undefined FUN_145c1841a(void)

void FUN_145c1841a(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x28 + (longlong)iStack_4c * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c18576 FUN_145c18576 body=161 status=ok
// SIG undefined FUN_145c18576(void)

void FUN_145c18576(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c18618();
  local_28 = 0;
  local_38 = 0;
  local_30 = 1;
  local_48 = L"NumShotsToBreak";
  local_40 = &DAT_100000001;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"ClientRepairState";
  local_40 = &DAT_100000002;
  FUN_140c2c993(&local_48,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c18618 FUN_145c18618 body=112 status=ok
// SIG undefined FUN_145c18618(void)

void FUN_145c18618(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switchD_143c3d4dc::caseD_42();
  local_18 = 0;
  local_28 = 0;
  local_20 = 1;
  local_38 = L"ReloadTime";
  local_30 = 0x100000000;
  FUN_140c2c993(&local_38,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c1868a FUN_145c1868a body=49 status=ok
// SIG undefined FUN_145c1868a(void)

void FUN_145c1868a(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_145c186bc(param_1,0);
  }
  FUN_145c187a0(param_1,param_2);
  return;
}



// FUNCTION 145c186bc FUN_145c186bc body=226 status=ok
// SIG undefined FUN_145c186bc(void)

void FUN_145c186bc(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  undefined8 local_6c;
  uint local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_144928b90(local_50,4);
    local_60 = DAT_14cbc9620;
    local_58 = DAT_14cbc9628;
    FUN_144928d62(local_40,1);
    local_70[0] = 1;
    local_64 = (uint)param_2;
    puVar2 = &DAT_14cb7c580;
    if (param_2 != 0) {
      puVar2 = &DAT_14cb7c588;
    }
    local_6c = *puVar2;
    lVar1 = FUN_1414ef453(param_1,0);
    if (lVar1 != 0) {
      FUN_140bc53f1(local_50,local_70,lVar1,0);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c187a0 FUN_145c187a0 body=624 status=ok
// SIG undefined FUN_145c187a0(void)

void FUN_145c187a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar4 = (**(code **)(*param_1 + 0x38))();
  if (cVar4 == '\0') goto LAB_145c18977;
  lVar6 = FUN_14479d2ce(param_1 + 0xc);
  local_70 = *(undefined8 *)(lVar6 + 0xf0);
  local_68 = *(undefined4 *)(lVar6 + 0xf8);
  FUN_140e3418c(&local_70,&local_78,1);
  FUN_145c18ff8(param_2,local_78);
  FUN_1414ef458(param_1);
  if ((param_2 == 0) || (param_1[0x27] == 0)) {
    if (param_2 != 0) goto LAB_145c18850;
  }
  else {
    FUN_14107e992(param_1[0x27],&local_70);
    FUN_145c18a12(param_1[0x27],param_2);
LAB_145c18850:
    plVar7 = param_1 + 0x38;
    plVar1 = param_1 + 0x3a;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar8 = 0;
    local_58 = plVar1;
    if ((int)param_1[0x3d] != 0) {
      FUN_1449c0562(&local_60);
      iVar8 = (int)param_1[0x3d];
    }
    local_88 = local_50;
    uVar3 = local_88;
    local_80 = local_48;
    local_7c = local_44;
    local_98 = local_60;
    local_90 = local_58;
    local_88._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar5 = local_88._4_4_;
    local_a0 = plVar7;
    if ((local_88._4_4_ != iVar8) || (local_88 = uVar3, local_58 != plVar1)) {
      do {
        do {
          local_88 = uVar3;
          plVar2 = *(longlong **)(*local_a0 + 8 + (longlong)iVar5 * 0x18);
          (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
          local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
          FUN_1449c0562(&local_98);
          iVar5 = local_88._4_4_;
          uVar3 = local_88;
        } while (local_88._4_4_ != iVar8);
      } while ((local_90 != plVar1) || (local_a0 != plVar7));
    }
  }
  if (param_1[0x26] != 0) {
    FUN_145c18a14(param_1[0x26],param_2);
  }
  if ((param_2 != 0) && (param_1[0x28] != 0)) {
    FUN_1457ebeee(param_1[0x28],&local_70);
    (**(code **)(*(longlong *)param_1[0x28] + 200))((longlong *)param_1[0x28],param_2);
  }
  plVar7 = (longlong *)FUN_14479d2ce(param_1 + 0xc);
  if ((plVar7 != (longlong *)0x0) &&
     (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2b8))(plVar7), plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if ((param_2 != 0) && (param_1[0x29] != 0)) {
    FUN_1414ef808();
  }
  FUN_14107e8f0(param_1 + 7,param_2);
LAB_145c18977:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c18a12 FUN_145c18a12 body=1 status=ok
// SIG undefined FUN_145c18a12(void)

void FUN_145c18a12(void)

{
  return;
}



// FUNCTION 145c18a14 FUN_145c18a14 body=23 status=ok
// SIG undefined FUN_145c18a14(void)

void FUN_145c18a14(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [8];
  ulonglong uStack_30;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x152) == '\x05')) {
    return;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_2 != 0) &&
      ((bVar1 = *(byte *)(param_2 + 0x152), bVar1 == 1 ||
       ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) &&
     (cVar4 = FUN_1407579fa(param_2), cVar4 == '\0')) {
    cVar4 = FUN_144729dda(param_1 + 8);
    if (cVar4 != '\0') {
      lVar5 = FUN_14479d2ce(param_1 + 8);
      if (*(longlong *)(lVar5 + 0x30) == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x360);
      }
      if (lVar5 != param_2) goto LAB_145c18b24;
    }
    iVar2 = *(int *)(param_2 + 0x578);
    if ((longlong)iVar2 != 0) {
      lVar5 = *(longlong *)(param_2 + 0x570);
      lVar6 = 0;
      do {
        if (((*(int *)(lVar5 + 8 + lVar6) != 0) &&
            (plVar3 = *(longlong **)(lVar5 + lVar6), plVar3 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1), cVar4 != '\0'))
        goto LAB_145c18afb;
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar6);
    }
    FUN_145c18b64(param_2 + 0x570,auStack_38,param_1);
LAB_145c18afb:
    if (((*(longlong *)(param_2 + 0x30) != 0) &&
        (lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0), lVar5 != 0)) &&
       (*(longlong *)(lVar5 + 0x3f0) != 0)) {
      FUN_145c18c4a(param_1);
    }
  }
LAB_145c18b24:
  if ((uStack_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c18a2c FUN_145c18a2c body=310 status=ok
// SIG undefined FUN_145c18a2c(void)

void FUN_145c18a2c(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_2 != 0) &&
      ((bVar1 = *(byte *)(param_2 + 0x152), bVar1 == 1 ||
       ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) &&
     (cVar4 = FUN_1407579fa(param_2), cVar4 == '\0')) {
    cVar4 = FUN_144729dda(param_1 + 8);
    if (cVar4 != '\0') {
      lVar5 = FUN_14479d2ce(param_1 + 8);
      if (*(longlong *)(lVar5 + 0x30) == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x360);
      }
      if (lVar5 != param_2) goto LAB_145c18b24;
    }
    iVar2 = *(int *)(param_2 + 0x578);
    if ((longlong)iVar2 != 0) {
      lVar5 = *(longlong *)(param_2 + 0x570);
      lVar6 = 0;
      do {
        if (((*(int *)(lVar5 + 8 + lVar6) != 0) &&
            (plVar3 = *(longlong **)(lVar5 + lVar6), plVar3 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1), cVar4 != '\0'))
        goto LAB_145c18afb;
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar6);
    }
    FUN_145c18b64(param_2 + 0x570,local_38,param_1);
LAB_145c18afb:
    if (((*(longlong *)(param_2 + 0x30) != 0) &&
        (lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0), lVar5 != 0)) &&
       (*(longlong *)(lVar5 + 0x3f0) != 0)) {
      FUN_145c18c4a(param_1);
    }
  }
LAB_145c18b24:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c18b64 FUN_145c18b64 body=228 status=ok
// SIG undefined FUN_145c18b64(void)

undefined8 FUN_145c18b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14ab18ff0;
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
  *local_38 = &PTR_FUN_14b3fbbd0;
  local_38[3] = param_3;
  local_38[4] = FUN_145c18c4a;
  FUN_141332804(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c18c4a FUN_145c18c4a body=477 status=ok
// SIG undefined FUN_145c18c4a(void)

void FUN_145c18c4a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_2 + 0xd0);
  if (lVar2 != 0) {
    if (*(longlong *)(param_1 + 0x88) == 0) {
      FUN_145c18e28(lVar2 + 0xf0,&local_38,param_1,&LAB_148833508);
      *(undefined8 *)(param_1 + 0x88) = local_38;
    }
    if (*(longlong *)(param_1 + 0x90) == 0) {
      FUN_145c18e28(lVar2 + 0x38,&local_38,param_1,FUN_1457e2fe4);
      *(undefined8 *)(param_1 + 0x90) = local_38;
    }
    if (((*(longlong *)(param_1 + 0x68) == 0) || (*(longlong *)(param_1 + 0x70) == 0)) ||
       (*(int *)(*(longlong *)(param_1 + 0x70) + 8) < 1)) {
      uVar4 = FUN_1401cb356();
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,2,0x10);
      local_40 = 2;
      *local_48 = &PTR_LAB_149e02020;
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
      local_48[2] = lVar5;
      *local_48 = &PTR_FUN_14b3fbd20;
      local_48[3] = param_1;
      local_58 = 0;
      FUN_1405f67fc(uVar4,&local_38,&local_48,L"FDataLayerStateCache.OnWorldPartitionInitialized");
      if ((undefined8 *)(param_1 + 0x68) != &local_38) {
        *(undefined8 *)(param_1 + 0x68) = local_38;
        local_38 = 0;
        plVar3 = *(longlong **)(param_1 + 0x70);
        *(longlong **)(param_1 + 0x70) = local_30;
        local_30 = (longlong *)0x0;
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
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
      FUN_1449db362(&local_48);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c18e28 FUN_145c18e28 body=228 status=ok
// SIG undefined FUN_145c18e28(void)

undefined8
FUN_145c18e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14b3fbcb0;
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
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14b3fbc40;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_145c18f0e(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c18f0e FUN_145c18f0e body=216 status=ok
// SIG undefined FUN_145c18f0e(void)

undefined8 * FUN_145c18f0e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145c18ff8 FUN_145c18ff8 body=465 status=ok
// SIG undefined FUN_145c18ff8(void)

void FUN_145c18ff8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_1 == 0) || (plVar4 = *(longlong **)(param_1 + 0x38), plVar4 == (longlong *)0x0)) {
    plVar4 = (longlong *)0x0;
  }
  else if (*(code **)(*plVar4 + 0x3c0) == (code *)&LAB_1448ff5f6) {
    uVar3 = local_78;
    if (plVar4[0x1e] != 0) goto LAB_145c190b5;
  }
  else {
    cVar1 = (**(code **)(*plVar4 + 0x3c0))(plVar4);
    uVar3 = local_78;
    if (cVar1 == '\0') goto LAB_145c190b5;
  }
  local_68 = 0x100000000;
  local_60 = &DAT_14cb7c218;
  local_58 = 0xffffffff;
  local_50 = 0;
  iVar7 = 0;
  if (DAT_14cb7c230 != 0) {
    FUN_1449c0562(&local_68);
    iVar7 = DAT_14cb7c230;
  }
  local_78 = local_58;
  uVar3 = local_78;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = &DAT_14cb7c208;
  local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  if ((local_78._4_4_ != iVar7) || (local_60 != &DAT_14cb7c218)) {
    iVar2 = local_78._4_4_;
    local_78 = uVar3;
    do {
      lVar5 = (longlong)iVar2 * 0x20 + *local_90;
      cVar1 = FUN_1405f6df2(lVar5,plVar4);
      if ((cVar1 != '\0') && ((longlong)*(int *)(lVar5 + 0x10) != 0)) {
        lVar6 = *(longlong *)(lVar5 + 8);
        lVar5 = (longlong)*(int *)(lVar5 + 0x10) << 3;
        do {
          cVar1 = FUN_144729dda(lVar6);
          if (cVar1 != '\0') {
            uVar3 = FUN_14479d2ce(lVar6);
            FUN_146234baa(uVar3,param_2);
          }
          lVar6 = lVar6 + 8;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
      iVar2 = local_78._4_4_;
    } while (((local_78._4_4_ != iVar7) || (local_80 != &DAT_14cb7c218)) ||
            (uVar3 = local_78, local_90 != &DAT_14cb7c208));
  }
LAB_145c190b5:
  local_78 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c191ca FUN_145c191ca body=69 status=ok
// SIG undefined FUN_145c191ca(void)

void FUN_145c191ca(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1414efbdb(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_145c19210(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145c19210 FUN_145c19210 body=112 status=ok
// SIG undefined FUN_145c19210(void)

void FUN_145c19210(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 145c19280 FUN_145c19280 body=25 status=ok
// SIG undefined FUN_145c19280(void)

undefined8 FUN_145c19280(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145c1929a FUN_145c1929a body=123 status=ok
// SIG undefined FUN_145c1929a(void)

void FUN_145c1929a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xd0) != 0)) {
    FUN_145c193aa(local_28);
    FUN_14479d2ce(param_1 + 0x1d0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c193aa FUN_145c193aa body=185 status=ok
// SIG undefined FUN_145c193aa(void)

undefined8 * FUN_145c193aa(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc9938) {
    FUN_144b3d300(&DAT_14cbc9938);
    if (DAT_14cbc9938 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"Changed",8);
      builtin_wcsncpy(local_48 + 8,L"yerState",8);
      builtin_wcsncpy(local_48,L"OnDataLa",8);
      FUN_1446f470e(&DAT_14cbc9930,local_48,1);
      _Init_thread_footer(&DAT_14cbc9938);
    }
  }
  *param_1 = DAT_14cbc9930;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c19464 FUN_145c19464 body=26 status=ok
// SIG undefined FUN_145c19464(void)

void FUN_145c19464(undefined8 param_1)

{
  FUN_145c1947e();
  FUN_14598bc0e(param_1);
  return;
}



// FUNCTION 145c1947e FUN_145c1947e body=617 status=ok
// SIG undefined FUN_145c1947e(void)

void FUN_145c1947e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 == (longlong *)0x0) {
LAB_145c194a7:
    FUN_1458227f6(param_1);
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c194a7;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    FUN_1458227f6(param_1);
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    local_48 = uVar4;
    plStack_40 = plVar3;
  }
  plVar3 = plStack_40;
  FUN_145822660(param_1,&local_48);
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_40 + 0x10))();
    }
  }
  lVar7 = FUN_140d80c3e(param_1);
  if ((lVar7 != 0) && (iVar6 = FUN_14490d72a(lVar7), iVar6 == 3)) {
    if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xe8);
      lVar8 = (longlong)*(int *)(param_1 + 0xf0) * 0x68;
      do {
        FUN_1462127c2(param_1,lVar7);
        lVar7 = lVar7 + 0x68;
        lVar8 = lVar8 + -0x68;
      } while (lVar8 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x100) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xf8);
      lVar8 = (longlong)*(int *)(param_1 + 0x100) * 0x58;
      do {
        FUN_145bb46f2(param_1,lVar7);
        lVar7 = lVar7 + 0x58;
        lVar8 = lVar8 + -0x58;
      } while (lVar8 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x110) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x108);
      lVar8 = (longlong)*(int *)(param_1 + 0x110) * 0x48;
      do {
        FUN_14890cf38(param_1,lVar7);
        lVar7 = lVar7 + 0x48;
        lVar8 = lVar8 + -0x48;
      } while (lVar8 != 0);
    }
  }
  FUN_145a50286(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    FUN_148914ea4(param_1 + 0xe8);
  }
  FUN_145c196fc(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(int *)(param_1 + 0x104) != 0) {
    FUN_148915a5e(param_1 + 0xf8);
  }
  FUN_145c196fd(*(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110));
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) != 0) {
    FUN_148915a8e(param_1 + 0x108);
  }
  if (!bVar9) {
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c196fc FUN_145c196fc body=1 status=ok
// SIG undefined FUN_145c196fc(void)

void FUN_145c196fc(void)

{
  return;
}



// FUNCTION 145c196fd FUN_145c196fd body=1 status=ok
// SIG undefined FUN_145c196fd(void)

void FUN_145c196fd(void)

{
  return;
}



// FUNCTION 145c196fe FUN_145c196fe body=21 status=ok
// SIG undefined FUN_145c196fe(void)

undefined8 FUN_145c196fe(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145c19714 FUN_145c19714 body=76 status=ok
// SIG undefined FUN_145c19714(void)

void FUN_145c19714(void)

{
  FUN_145c19760(DAT_14c9495f8,DAT_14c949600);
  if (DAT_14c9495f8 != 0) {
    FUN_1400020a8();
  }
  DAT_14c9495f0 = 0;
  if (DAT_14c9495e8 != 0) {
    FUN_1400020a8();
  }
  FUN_145c1978a();
  return;
}



// FUNCTION 145c19760 FUN_145c19760 body=42 status=ok
// SIG undefined FUN_145c19760(void)

void FUN_145c19760(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_1407a3756(param_1);
      param_1 = param_1 + 0x60;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c1978a FUN_145c1978a body=54 status=ok
// SIG undefined FUN_145c1978a(void)

void FUN_145c1978a(void)

{
  FUN_145c197c0();
  if (DAT_14c9495c8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9495a8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c197c0 FUN_145c197c0 body=104 status=ok
// SIG undefined FUN_145c197c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c197c0(void)

{
  DAT_14c9495b0 = 0;
  if (DAT_14c9495b4 != 0) {
    FUN_144727cd0(&DAT_14c9495a8,0);
  }
  _DAT_14c9495d8 = 0xffffffff;
  DAT_14c9495d0 = 0;
  if (DAT_14c9495d4 < 0x81) {
    return;
  }
  DAT_14c9495d4 = 0x80;
  FUN_1446efbd8(&DAT_14c9495b8,0);
  return;
}



// FUNCTION 145c19834 FUN_145c19834 body=40 status=ok
// SIG undefined FUN_145c19834(void)

undefined8 FUN_145c19834(undefined8 param_1,int param_2)

{
  FUN_145c1985c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c1985c FUN_145c1985c body=144 status=ok
// SIG undefined FUN_145c1985c(void)

void FUN_145c1985c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4fd140;
  param_1[5] = &PTR_FUN_14a4fd470;
  plVar3 = (longlong *)param_1[0x4f];
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
  param_1[0x38] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x4c];
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
  FUN_140f861ce(param_1);
  return;
}



// FUNCTION 145c198ec FUN_145c198ec body=40 status=ok
// SIG undefined FUN_145c198ec(void)

undefined8 FUN_145c198ec(undefined8 param_1,int param_2)

{
  FUN_145c19914();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c19914 FUN_145c19914 body=144 status=ok
// SIG undefined FUN_145c19914(void)

void FUN_145c19914(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a503700;
  param_1[5] = &PTR_FUN_14a503a00;
  plVar3 = (longlong *)param_1[0x48];
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
  param_1[0x30] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x44];
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
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145c199a4 FUN_145c199a4 body=40 status=ok
// SIG undefined FUN_145c199a4(void)

undefined8 FUN_145c199a4(undefined8 param_1,int param_2)

{
  FUN_145c199cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c199cc FUN_145c199cc body=144 status=ok
// SIG undefined FUN_145c199cc(void)

void FUN_145c199cc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a531b80;
  param_1[5] = &PTR_FUN_14a531e80;
  plVar3 = (longlong *)param_1[0x45];
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
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x42];
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
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145c19a68 FUN_145c19a68 body=81 status=ok
// SIG undefined FUN_145c19a68(void)

undefined8 * FUN_145c19a68(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_145894f8e();
  *param_1 = &PTR_FUN_14a5a0880;
  param_1[10] = &PTR_FUN_14a5a0b60;
  lVar1 = FUN_14133ed3a();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0xb] = lVar1;
  return param_1;
}



// FUNCTION 145c19aba FUN_145c19aba body=103 status=ok
// SIG undefined FUN_145c19aba(void)

ulonglong FUN_145c19aba(longlong param_1)

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
LAB_145c19b04:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c19b04;
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



// FUNCTION 145c19b22 FUN_145c19b22 body=58 status=ok
// SIG undefined FUN_145c19b22(void)

void FUN_145c19b22(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_14479d2ce(param_1 + 8);
  if (lVar2 == 0) {
    bVar3 = false;
  }
  else {
    iVar1 = FUN_14490d72a(lVar2);
    bVar3 = iVar1 != 3;
  }
  *(bool *)(param_1 + 0x5cc) = bVar3;
  *(bool *)(param_1 + 0x1f0) = bVar3;
  return;
}



// FUNCTION 145c19b5c FUN_145c19b5c body=48 status=ok
// SIG undefined FUN_145c19b5c(void)

void FUN_145c19b5c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd0);
  FUN_145c19b8c(param_2);
  *param_2 = &PTR_FUN_14ac85040;
  return;
}



// FUNCTION 145c19b8c FUN_145c19b8c body=182 status=ok
// SIG undefined FUN_145c19b8c(void)

void FUN_145c19b8c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[7] = &PTR_FUN_14a1a0a00;
  *(undefined2 *)(param_1 + 10) = 1;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xb] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  *param_1 = &PTR_FUN_14ac7b4c0;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x15] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x18) = 0x447a0000;
  param_1[0x19] = 0;
  return;
}



// FUNCTION 145c19c4e FUN_145c19c4e body=81 status=ok
// SIG undefined FUN_145c19c4e(void)

undefined8 * FUN_145c19c4e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14afbb660;
  *(undefined4 *)(param_1 + 5) = 0x10101;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0x101;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)((longlong)param_1 + 0x59) = 0x801;
  *(undefined1 *)((longlong)param_1 + 0x5b) = 1;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  return param_1;
}



// FUNCTION 145c19ca8 FUN_145c19ca8 body=129 status=ok
// SIG undefined FUN_145c19ca8(void)

undefined8 FUN_145c19ca8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb72a88 == 0) {
    uVar1 = 0;
  }
  else {
    local_40 = param_1;
    FUN_1446dcdd4(local_38);
    if (DAT_14cb72a88 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_144837462(DAT_14cb72a88,local_38);
    }
    if (local_20 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c19d2a FUN_145c19d2a body=38 status=ok
// SIG undefined FUN_145c19d2a(void)

undefined8 FUN_145c19d2a(undefined8 param_1,int param_2)

{
  FUN_145c19d50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c19d50 FUN_145c19d50 body=100 status=ok
// SIG undefined FUN_145c19d50(void)

void FUN_145c19d50(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3ee630;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = &PTR_FUN_14a1b6cf0;
  FUN_1449db362(param_1 + 9);
  FUN_144760f98(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c19db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145c19db4 FUN_145c19db4 body=83 status=ok
// SIG undefined FUN_145c19db4(void)

void FUN_145c19db4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_145c19e08();
  iVar1 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if ((char)plVar3[0x49] != '\0') {
        *(undefined1 *)(plVar3 + 0x49) = 0;
        (**(code **)(*plVar3 + 8))();
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 145c19e08 FUN_145c19e08 body=9 status=ok
// SIG undefined FUN_145c19e08(void)

void FUN_145c19e08(longlong param_1)

{
  FUN_1461df6fc(param_1 + 0x58);
  return;
}



// FUNCTION 145c19e20 FUN_145c19e20 body=10 status=ok
// SIG undefined FUN_145c19e20(void)

void FUN_145c19e20(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145c19e23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))();
  return;
}



// FUNCTION 145c19e38 FUN_145c19e38 body=10 status=ok
// SIG undefined FUN_145c19e38(void)

void FUN_145c19e38(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145c19e3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))();
  return;
}



// FUNCTION 145c19e42 FUN_145c19e42 body=9 status=ok
// SIG undefined FUN_145c19e42(void)

void FUN_145c19e42(longlong param_1)

{
  FUN_145c19e4c(param_1 + 0x10);
  return;
}



// FUNCTION 145c19e4c FUN_145c19e4c body=129 status=ok
// SIG undefined FUN_145c19e4c(void)

void FUN_145c19e4c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4e0e00;
  param_1[4] = &PTR_FUN_14b4e0e28;
  FUN_1449db362(param_1 + 0xb);
  plVar3 = (longlong *)param_1[10];
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
  plVar3 = (longlong *)param_1[8];
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
  FUN_14591521a(param_1);
  return;
}



// FUNCTION 145c19edc FUN_145c19edc body=78 status=ok
// SIG undefined FUN_145c19edc(void)

undefined8 * FUN_145c19edc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6e2428;
  FUN_1458ce261(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145c19f32 FUN_145c19f32 body=84 status=ok
// SIG undefined FUN_145c19f32(void)

void FUN_145c19f32(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c19f86 FUN_145c19f86 body=83 status=ok
// SIG undefined FUN_145c19f86(void)

undefined8 * FUN_145c19f86(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b95e830;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c19fec FUN_145c19fec body=84 status=ok
// SIG undefined FUN_145c19fec(void)

undefined8 * FUN_145c19fec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bace660;
  if (DAT_14cc00020 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00020 = FUN_140002ddd(FUN_146680821,uVar1,L"RigVMDispatch_CastEnumToInt");
  }
  param_1[1] = DAT_14cc00020;
  return param_1;
}



// FUNCTION 145c1a048 FUN_145c1a048 body=84 status=ok
// SIG undefined FUN_145c1a048(void)

undefined8 * FUN_145c1a048(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bace830;
  if (DAT_14cc00038 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00038 = FUN_140002ddd(FUN_1466808e9,uVar1,L"RigVMDispatch_CastIntToEnum");
  }
  param_1[1] = DAT_14cc00038;
  return param_1;
}



// FUNCTION 145c1a0a4 FUN_145c1a0a4 body=84 status=ok
// SIG undefined FUN_145c1a0a4(void)

undefined8 * FUN_145c1a0a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bacea00;
  if (DAT_14cc00050 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00050 = FUN_140002ddd(FUN_1466809eb,uVar1,L"RigVMDispatch_CastObject");
  }
  param_1[1] = DAT_14cc00050;
  return param_1;
}



// FUNCTION 145c1a100 FUN_145c1a100 body=84 status=ok
// SIG undefined FUN_145c1a100(void)

undefined8 * FUN_145c1a100(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bb3c790;
  if (DAT_14cc04418 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04418 = FUN_140002ddd(FUN_1466b8acb,uVar1,L"RigVMDispatch_ArrayMake");
  }
  param_1[1] = DAT_14cc04418;
  return param_1;
}



// FUNCTION 145c1a15c FUN_145c1a15c body=84 status=ok
// SIG undefined FUN_145c1a15c(void)

undefined8 * FUN_145c1a15c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bb3cb50;
  if (DAT_14cc04448 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04448 = FUN_140002ddd(FUN_1466b8bf7,uVar1,L"RigVMDispatch_ArrayGetNum");
  }
  param_1[1] = DAT_14cc04448;
  return param_1;
}



// FUNCTION 145c1a1b8 FUN_145c1a1b8 body=84 status=ok
// SIG undefined FUN_145c1a1b8(void)

undefined8 * FUN_145c1a1b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bb3cd30;
  if (DAT_14cc04460 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04460 = FUN_140002ddd(FUN_1466b8c8d,uVar1,L"RigVMDispatch_ArraySetNum");
  }
  param_1[1] = DAT_14cc04460;
  return param_1;
}



// FUNCTION 145c1a214 FUN_145c1a214 body=84 status=ok
// SIG undefined FUN_145c1a214(void)

undefined8 * FUN_145c1a214(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bb3cf10;
  if (DAT_14cc04478 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04478 = FUN_140002ddd(FUN_1466b8d23,uVar1,L"RigVMDispatch_ArrayInit");
  }
  param_1[1] = DAT_14cc04478;
  return param_1;
}



// FUNCTION 145c1a270 FUN_145c1a270 body=84 status=ok
// SIG undefined FUN_145c1a270(void)

undefined8 * FUN_145c1a270(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bb3d0f0;
  if (DAT_14cc04490 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04490 = FUN_140002ddd(FUN_1466b8db9,uVar1,L"RigVMDispatch_ArrayGetAtIndex");
  }
  param_1[1] = DAT_14cc04490;
  return param_1;
}



// FUNCTION 145c1a2cc FUN_145c1a2cc body=84 status=ok
// SIG undefined FUN_145c1a2cc(void)

undefined8 * FUN_145c1a2cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_145934580();
  *param_1 = &PTR_FUN_14bb3d4b0;
  if (DAT_14cc044c0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc044c0 = FUN_140002ddd(FUN_1466b8ee5,uVar1,L"RigVMDispatch_ArrayAdd");
  }
  param_1[1] = DAT_14cc044c0;
  return param_1;
}



// FUNCTION 145c1a328 FUN_145c1a328 body=84 status=ok
// SIG undefined FUN_145c1a328(void)

undefined8 * FUN_145c1a328(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_145934580();
  *param_1 = &PTR_FUN_14bb3d690;
  if (DAT_14cc044d8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc044d8 = FUN_140002ddd(FUN_1466b8f7b,uVar1,L"RigVMDispatch_ArrayInsert");
  }
  param_1[1] = DAT_14cc044d8;
  return param_1;
}



// FUNCTION 145c1a384 FUN_145c1a384 body=84 status=ok
// SIG undefined FUN_145c1a384(void)

undefined8 * FUN_145c1a384(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bb3d870;
  if (DAT_14cc044f0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc044f0 = FUN_140002ddd(FUN_1466b9011,uVar1,L"RigVMDispatch_ArrayRemove");
  }
  param_1[1] = DAT_14cc044f0;
  return param_1;
}



// FUNCTION 145c1a3e0 FUN_145c1a3e0 body=84 status=ok
// SIG undefined FUN_145c1a3e0(void)

undefined8 * FUN_145c1a3e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1459df344();
  *param_1 = &PTR_FUN_14bb3da50;
  if (DAT_14cc04508 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04508 = FUN_140002ddd(FUN_1466b90a7,uVar1,L"RigVMDispatch_ArrayReverse");
  }
  param_1[1] = DAT_14cc04508;
  return param_1;
}



// FUNCTION 145c1a43c FUN_145c1a43c body=84 status=ok
// SIG undefined FUN_145c1a43c(void)

undefined8 * FUN_145c1a43c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bb3dc30;
  if (DAT_14cc04520 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04520 = FUN_140002ddd(FUN_1466b913d,uVar1,L"RigVMDispatch_ArrayFind");
  }
  param_1[1] = DAT_14cc04520;
  return param_1;
}



// FUNCTION 145c1a498 FUN_145c1a498 body=84 status=ok
// SIG undefined FUN_145c1a498(void)

undefined8 * FUN_145c1a498(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bb3dff0;
  if (DAT_14cc04550 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04550 = FUN_140002ddd(FUN_1466b9269,uVar1,L"RigVMDispatch_ArrayClone");
  }
  param_1[1] = DAT_14cc04550;
  return param_1;
}



// FUNCTION 145c1a4f4 FUN_145c1a4f4 body=84 status=ok
// SIG undefined FUN_145c1a4f4(void)

undefined8 * FUN_145c1a4f4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1459df3a0();
  *param_1 = &PTR_FUN_14bb3e1d0;
  if (DAT_14cc04568 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04568 = FUN_140002ddd(FUN_1466b92ff,uVar1,L"RigVMDispatch_ArrayUnion");
  }
  param_1[1] = DAT_14cc04568;
  return param_1;
}



// FUNCTION 145c1a550 FUN_145c1a550 body=84 status=ok
// SIG undefined FUN_145c1a550(void)

undefined8 * FUN_145c1a550(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1459df3fc();
  *param_1 = &PTR_FUN_14bb3e590;
  if (DAT_14cc04598 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04598 = FUN_140002ddd(FUN_1466b942b,uVar1,L"RigVMDispatch_ArrayIntersection");
  }
  param_1[1] = DAT_14cc04598;
  return param_1;
}



// FUNCTION 145c1a5ac FUN_145c1a5ac body=84 status=ok
// SIG undefined FUN_145c1a5ac(void)

undefined8 * FUN_145c1a5ac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bb3e770;
  if (DAT_14cc045b0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc045b0 = FUN_140002ddd(FUN_1466b94c1,uVar1,L"RigVMDispatch_ArrayIterator");
  }
  param_1[1] = DAT_14cc045b0;
  return param_1;
}



// FUNCTION 145c1a608 FUN_145c1a608 body=84 status=ok
// SIG undefined FUN_145c1a608(void)

undefined8 * FUN_145c1a608(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bb3ea80;
  if (DAT_14cc04ae0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04ae0 = FUN_140002ddd(FUN_1466b95b9,uVar1,L"RigVMDispatch_Constant");
  }
  param_1[1] = DAT_14cc04ae0;
  return param_1;
}



// FUNCTION 145c1a664 FUN_145c1a664 body=84 status=ok
// SIG undefined FUN_145c1a664(void)

undefined8 * FUN_145c1a664(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1459df458();
  *param_1 = &PTR_FUN_14bb3ef80;
  if (DAT_14cc04b58 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04b58 = FUN_140002ddd(FUN_1466b974d,uVar1,L"RigVMDispatch_CoreNotEquals");
  }
  param_1[1] = DAT_14cc04b58;
  return param_1;
}



// FUNCTION 145c1a6c0 FUN_145c1a6c0 body=84 status=ok
// SIG undefined FUN_145c1a6c0(void)

undefined8 * FUN_145c1a6c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bb3f150;
  if (DAT_14cc04c50 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04c50 = FUN_140002ddd(FUN_1466b996b,uVar1,L"RigVMDispatch_If");
  }
  param_1[1] = DAT_14cc04c50;
  return param_1;
}



// FUNCTION 145c1a71c FUN_145c1a71c body=84 status=ok
// SIG undefined FUN_145c1a71c(void)

undefined8 * FUN_145c1a71c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1459df4b4();
  *param_1 = &PTR_FUN_14bb3f4f0;
  if (DAT_14cc04d18 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04d18 = FUN_140002ddd(FUN_1466b9b5b,uVar1,L"RigVMDispatch_BreakStruct");
  }
  param_1[1] = DAT_14cc04d18;
  return param_1;
}



// FUNCTION 145c1a778 FUN_145c1a778 body=84 status=ok
// SIG undefined FUN_145c1a778(void)

undefined8 * FUN_145c1a778(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bb3f6c0;
  if (DAT_14cc04de0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04de0 = FUN_140002ddd(FUN_1466b9ddb,uVar1,L"RigVMDispatch_Print");
  }
  param_1[1] = DAT_14cc04de0;
  return param_1;
}



// FUNCTION 145c1a7d4 FUN_145c1a7d4 body=84 status=ok
// SIG undefined FUN_145c1a7d4(void)

undefined8 * FUN_145c1a7d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bb3f890;
  if (DAT_14cc04ec8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04ec8 = FUN_140002ddd(FUN_1466b9f97,uVar1,L"RigVMDispatch_SelectInt32");
  }
  param_1[1] = DAT_14cc04ec8;
  return param_1;
}



// FUNCTION 145c1a830 FUN_145c1a830 body=84 status=ok
// SIG undefined FUN_145c1a830(void)

undefined8 * FUN_145c1a830(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bb3fa60;
  if (DAT_14cc04f48 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04f48 = FUN_140002ddd(FUN_1466ba0f1,uVar1,L"RigVMDispatch_SwitchInt32");
  }
  param_1[1] = DAT_14cc04f48;
  return param_1;
}



// FUNCTION 145c1a88c FUN_145c1a88c body=84 status=ok
// SIG undefined FUN_145c1a88c(void)

undefined8 * FUN_145c1a88c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bbd60b0;
  if (DAT_14cc08608 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc08608 = FUN_140002ddd(FUN_1466d3a1b,uVar1,L"RigDispatch_GetUserData");
  }
  param_1[1] = DAT_14cc08608;
  return param_1;
}



// FUNCTION 145c1a8e0 FUN_145c1a8e0 body=53 status=ok
// SIG undefined FUN_145c1a8e0(void)

void FUN_145c1a8e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c1a916(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd20940;
  puVar1[7] = &PTR_LAB_14bd20bf0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 145c1a916 FUN_145c1a916 body=39 status=ok
// SIG undefined FUN_145c1a916(void)

undefined8 * FUN_145c1a916(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bcd7340;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 145c1a93d FUN_145c1a93d body=146 status=ok
// SIG undefined FUN_145c1a93d(void)

void FUN_145c1a93d(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14080c2b4();
  FUN_145c1aaf2(local_70);
  lVar1 = DAT_14cb02e08;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  DAT_14c761ae8 = *(undefined4 *)(lVar1 + uVar3 * 4);
  FUN_145c1a9d0(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c1a9d0 FUN_145c1a9d0 body=159 status=ok
// SIG undefined FUN_145c1a9d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c1a9d0(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cad0108 = _DAT_14cad0108 + -1;
  if (_DAT_14cad0108 == 0) {
    FUN_145c1aa70(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_1447ab16c(param_1,0);
    }
    FUN_1414efd58(local_68,param_1 + 0x10);
    FUN_1414effc2(local_68);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_141145f8e(param_1 + 0x10);
  FUN_145c1aab4(param_1);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c1aa70 FUN_145c1aa70 body=68 status=ok
// SIG undefined FUN_145c1aa70(void)

void FUN_145c1aa70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_14071963e(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 145c1aab4 FUN_145c1aab4 body=62 status=ok
// SIG undefined FUN_145c1aab4(void)

void FUN_145c1aab4(longlong *param_1)

{
  FUN_145c1aa70();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c1aaf2 FUN_145c1aaf2 body=442 status=ok
// SIG undefined FUN_145c1aaf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_145c1aaf2(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  void *local_98;
  int local_90;
  undefined4 local_8c;
  int local_88;
  void *local_80;
  int local_78;
  int local_70;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  _DAT_14cad0108 = _DAT_14cad0108 + 1;
  FUN_14080c2b4();
  FUN_1414efe6c();
  _Src = local_80;
  local_98 = (void *)0x0;
  lVar4 = (longlong)local_78;
  local_90 = local_78;
  if (lVar4 == 0) {
    local_8c = 0;
    iVar5 = 0;
  }
  else {
    FUN_14010590e(&local_98,local_78,0);
    memcpy(local_98,_Src,lVar4 << 3);
    iVar5 = local_78;
  }
  local_88 = local_70;
  do {
    if (local_88 == iVar5) {
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_80 != (void *)0x0) {
        FUN_1400020a8();
      }
      FUN_1414efd58(&local_80,param_1 + 2);
      FUN_1414effc2(&local_80);
      if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
    uVar2 = *(undefined8 *)((longlong)local_98 + (longlong)local_88 * 8);
    uVar3 = FUN_14001cc68(0x18,0x10);
    FUN_140719760(uVar3,uVar2,param_1 + 2);
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1456bd870(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar3;
    lVar4 = (longlong)local_88;
    do {
      lVar4 = lVar4 + 1;
      local_88 = (int)lVar4;
      if (local_90 <= lVar4) break;
    } while (*(longlong *)((longlong)local_98 + lVar4 * 8) == 0);
  } while( true );
}



// FUNCTION 145c1acae FUN_145c1acae body=38 status=ok
// SIG undefined FUN_145c1acae(void)

undefined8 FUN_145c1acae(undefined8 param_1,int param_2)

{
  FUN_145c1acd4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c1acd4 FUN_145c1acd4 body=479 status=ok
// SIG undefined FUN_145c1acd4(void)

void FUN_145c1acd4(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14b3f9b40;
  param_1[4] = &PTR_FUN_14b3f9b60;
  param_1[6] = &PTR_LAB_14b3f9b80;
  if (param_1[9] != 0) {
    *(undefined8 *)(param_1[9] + 0x28) = 0;
    uVar2 = *(uint *)(param_1[9] + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    FUN_14482b126(lVar4,0x40000000);
    param_1[9] = 0;
  }
  if (DAT_14cb78ff0 != 0) {
    FUN_140457ffc(DAT_14cb78ff0 + 0x28,param_1);
  }
  FUN_140457ffc(&DAT_14cb78c88,param_1);
  FUN_140457ffc(&DAT_14cb78ca0,param_1);
  FUN_140457ffc(&DAT_14c997c20,param_1);
  FUN_140457ffc(&DAT_14c997c38,param_1);
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_145c1aede(param_1 + 0x1c);
  FUN_145c1aeb3(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145c1af14(param_1 + 0xe);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 6);
  param_1[4] = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 0x29) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1 + 4);
    *(undefined1 *)((longlong)param_1 + 0x29) = 0;
  }
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c1aeaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145c1aeb3 FUN_145c1aeb3 body=43 status=ok
// SIG undefined FUN_145c1aeb3(void)

void FUN_145c1aeb3(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148837992(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 145c1aede FUN_145c1aede body=53 status=ok
// SIG undefined FUN_145c1aede(void)

void FUN_145c1aede(longlong *param_1)

{
  FUN_145c1af4a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c1af14 FUN_145c1af14 body=53 status=ok
// SIG undefined FUN_145c1af14(void)

void FUN_145c1af14(longlong *param_1)

{
  FUN_145c1b07c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c1af4a FUN_145c1af4a body=305 status=ok
// SIG undefined FUN_145c1af4a(void)

void FUN_145c1af4a(longlong *param_1)

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
      FUN_1412e9b6e((longlong)iStack_4c * 0x38 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 145c1b07c FUN_145c1b07c body=317 status=ok
// SIG undefined FUN_145c1b07c(void)

void FUN_145c1b07c(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c1b1ba FUN_145c1b1ba body=728 status=ok
// SIG undefined FUN_145c1b1ba(void)

undefined8 *
FUN_145c1b1ba(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    *param_2 = 0;
  }
  else {
    if (((int)param_4[1] == 0) || (plVar15 = (longlong *)*param_4, plVar15 == (longlong *)0x0)) {
      *param_2 = 0;
    }
    else {
      (**(code **)(*plVar15 + 0x38))(plVar15,param_2);
    }
    if ((longlong)*(int *)(param_3 + 1) != 0) {
      plVar15 = (longlong *)*param_3;
      lVar16 = (longlong)*(int *)(param_3 + 1) << 5;
      do {
        lVar14 = *plVar15;
        if (lVar14 != 0) {
          lVar1 = plVar15[1];
          uVar7 = (uint)((ulonglong)lVar1 >> 0x10);
          uVar13 = (uint)lVar1 & 0xffff;
          uVar4 = (uint)((ulonglong)lVar14 >> 0x10);
          uVar12 = (uint)lVar14 & 0xffff;
          uVar4 = ((uint)lVar14 << 0x10 | uVar12) + (int)((ulonglong)lVar14 >> 0x20) +
                  (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar12 >> 4);
          uVar5 = FUN_144a78877(0,(uVar13 >> 4) +
                                  (uint)lVar1 * 0x10000 + uVar13 + (int)((ulonglong)lVar1 >> 0x20) +
                                  (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 2) + uVar4 * 0x40 +
                                  0x9e3779b9 ^ uVar4);
          iVar8 = (int)plVar15[3];
          puVar11 = &DAT_149dfb77a;
          if (iVar8 != 0) {
            puVar11 = (undefined2 *)plVar15[2];
          }
          iVar2 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar2 = 0;
          }
          uVar6 = FUN_144a49b4a(iVar2,puVar11);
          uVar5 = FUN_144a78877(uVar5,uVar6);
          plVar9 = (longlong *)FUN_145c1b594(param_1 + 0x118,uVar5,plVar15);
          lVar14 = plVar9[1];
          uVar7 = (int)lVar14 + 1;
          *(uint *)(plVar9 + 1) = uVar7;
          if (*(uint *)((longlong)plVar9 + 0xc) < uVar7) {
            FUN_145c1b510(plVar9);
          }
          lVar1 = *plVar9;
          lVar14 = (longlong)(int)lVar14 * 0x10;
          *(undefined8 *)(lVar1 + lVar14) = 0;
          *(undefined4 *)(lVar1 + 8 + lVar14) = 0;
          FUN_145c1b492(lVar1 + lVar14,param_4);
          lVar14 = *plVar15;
          lVar1 = plVar15[1];
          uVar7 = (uint)((ulonglong)lVar1 >> 0x10);
          uVar13 = (uint)lVar1 & 0xffff;
          uVar4 = (uint)((ulonglong)lVar14 >> 0x10);
          uVar12 = (uint)lVar14 & 0xffff;
          uVar4 = ((uint)lVar14 << 0x10 | uVar12) + (int)((ulonglong)lVar14 >> 0x20) +
                  (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar12 >> 4);
          uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                                  ((uint)lVar1 << 0x10 | uVar13) + (int)((ulonglong)lVar1 >> 0x20) +
                                  (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar13 >> 4) + uVar4 * 0x40 +
                                  0x9e3779b9 ^ uVar4);
          iVar8 = (int)plVar15[3];
          puVar11 = &DAT_149dfb77a;
          if (iVar8 != 0) {
            puVar11 = (undefined2 *)plVar15[2];
          }
          iVar2 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar2 = 0;
          }
          uVar6 = FUN_144a49b4a(iVar2,puVar11);
          uVar5 = FUN_144a78877(uVar5,uVar6);
          iVar8 = FUN_140295e10((longlong *)(param_1 + 200),uVar5,plVar15);
          if (iVar8 != -1) {
            lVar14 = *(longlong *)(param_1 + 200);
            if ((lVar14 + (longlong)iVar8 * 0x50 != 0) && ((longlong)iVar8 * 0x50 + lVar14 != -0x20)
               ) {
              FUN_144a6c37a(param_1 + 0x1b0,plVar15);
              cVar3 = FUN_144729dda(param_1 + 8);
              if (cVar3 != '\0') {
                uVar10 = FUN_14479d2ce(param_1 + 8);
                FUN_1405f658a(uVar10);
              }
            }
          }
        }
        plVar15 = plVar15 + 4;
        lVar16 = lVar16 + -0x20;
      } while (lVar16 != 0);
    }
  }
  return param_2;
}



// FUNCTION 145c1b492 FUN_145c1b492 body=124 status=ok
// SIG undefined FUN_145c1b492(void)

void FUN_145c1b492(longlong *param_1,longlong *param_2)

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



// FUNCTION 145c1b510 FUN_145c1b510 body=132 status=ok
// SIG undefined FUN_145c1b510(void)

void FUN_145c1b510(longlong param_1,int param_2)

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



// FUNCTION 145c1b594 FUN_145c1b594 body=133 status=ok
// SIG undefined FUN_145c1b594(void)

longlong FUN_145c1b594(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140295d2c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x38;
    if (lVar3 + lVar2 != 0) goto LAB_145c1b5e1;
  }
  local_30 = param_3;
  FUN_145c1b61a(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x38;
LAB_145c1b5e1:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 0x20;
}



// FUNCTION 145c1b61a FUN_145c1b61a body=269 status=ok
// SIG undefined FUN_145c1b61a(void)

undefined4 * FUN_145c1b61a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c1b818(param_1,local_48);
  FUN_145c1b728(param_4,local_40);
  *(undefined4 *)(local_40 + 0x30) = 0xffffffff;
  cVar1 = FUN_145c1b79e(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x34) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x30) =
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
      FUN_145c1b8f8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c1b728 FUN_145c1b728 body=117 status=ok
// SIG undefined FUN_145c1b728(void)

undefined4 * FUN_145c1b728(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)*param_1;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *param_2 = *puVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  *(undefined8 *)(param_2 + 4) = 0;
  iVar1 = puVar2[6];
  _Src = *(void **)(puVar2 + 4);
  param_2[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_2[7] = 0;
  }
  else {
    FUN_1446dd670(param_2 + 4,iVar1,0);
    memcpy(*(void **)(param_2 + 4),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  FUN_145be86fb(0,0);
  return param_2;
}



// FUNCTION 145c1b79e FUN_145c1b79e body=121 status=ok
// SIG undefined FUN_145c1b79e(void)

undefined8 FUN_145c1b79e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_140295d2c(), iVar14 != -1)) {
    lVar2 = *param_1;
    lVar15 = (longlong)iVar14 * 0x38;
    FUN_145be86be(lVar2 + lVar15);
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar15);
    *puVar1 = param_3[8];
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar15);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar15);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_145be8724(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 145c1b818 FUN_145c1b818 body=223 status=ok
// SIG undefined FUN_145c1b818(void)

int * FUN_145c1b818(longlong *param_1,int *param_2)

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



// FUNCTION 145c1b8f8 FUN_145c1b8f8 body=638 status=ok
// SIG undefined FUN_145c1b8f8(void)

void FUN_145c1b8f8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
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
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar14 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(undefined4 *)((longlong)plVar12 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar14) * 4)
             = 0xffffffff;
        uVar14 = uVar14 + 1;
      } while (uVar2 != uVar14);
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
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    bVar6 = local_78._4_4_ < (int)local_60[3];
    iVar17 = local_78._4_4_;
    local_90 = param_1;
    local_78 = uVar4;
    if (bVar6) {
      do {
        lVar3 = *local_90;
        lVar18 = (longlong)iVar17 * 0x38;
        uVar4 = *(undefined8 *)(lVar3 + lVar18);
        uVar5 = *(undefined8 *)(lVar3 + 8 + lVar18);
        uVar2 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar16 = (uint)uVar5 & 0xffff;
        uVar14 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar15 = (uint)uVar4 & 0xffff;
        uVar14 = ((uint)uVar4 << 0x10 | uVar15) + (int)((ulonglong)uVar4 >> 0x20) +
                 (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar15 >> 4);
        uVar8 = FUN_144a78877(0,(uVar14 >> 2) +
                                ((uint)uVar5 << 0x10 | uVar16) + (int)((ulonglong)uVar5 >> 0x20) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar16 >> 4) + uVar14 * 0x40 +
                                0x9e3779b9 ^ uVar14);
        iVar10 = *(int *)(lVar3 + 0x18 + lVar18);
        puVar13 = &DAT_149dfb77a;
        if (iVar10 != 0) {
          puVar13 = *(undefined2 **)(lVar3 + 0x10 + lVar18);
        }
        iVar7 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar7 = 0;
        }
        uVar9 = FUN_144a49b4a(iVar7,puVar13);
        iVar10 = FUN_144a78877(uVar8,uVar9);
        uVar11 = (longlong)iVar10 & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar3 + 0x34 + lVar18) = iVar10;
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar18) =
             *(undefined4 *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(int *)((longlong)plVar12 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        bVar6 = local_78._4_4_ < (int)local_80[3];
        iVar17 = local_78._4_4_;
      } while (bVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c1bb78 FUN_145c1bb78 body=167 status=ok
// SIG undefined FUN_145c1bb78(void)

void FUN_145c1bb78(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_145c1bc20(&local_28,local_20);
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c1bc20 FUN_145c1bc20 body=155 status=ok
// SIG undefined FUN_145c1bc20(void)

ulonglong * FUN_145c1bc20(ulonglong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  *param_1 = (ulonglong)DAT_14c892e70;
  if (param_2 != 0) {
    lVar2 = FUN_140ed3994(param_2);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x448) != 0)) {
      lVar3 = FUN_140183ac4();
      lVar2 = *(longlong *)(lVar2 + 0x448);
      if (((lVar2 != 0) &&
          (((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        *param_1 = *(ulonglong *)(lVar2 + 0x3a30);
      }
    }
  }
  return param_1;
}



// FUNCTION 145c1bcbc FUN_145c1bcbc body=37 status=ok
// SIG undefined FUN_145c1bcbc(void)

void FUN_145c1bcbc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x168);
  FUN_145c1bce2(param_2);
  return;
}



// FUNCTION 145c1bce2 FUN_145c1bce2 body=240 status=ok
// SIG undefined FUN_145c1bce2(void)

undefined8 * FUN_145c1bce2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3d5940;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_144928b90(param_1 + 10,6);
  FUN_144928b90(param_1 + 0x11,6);
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 4;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1d) = 3;
  *(char *)(param_1 + 0x1e) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x23) = 4;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x24) = 3;
  *(char *)(param_1 + 0x25) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_1 + 0x26) = 1;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0xffffffffffffffff;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  return param_1;
}



// FUNCTION 145c1bdde FUN_145c1bdde body=190 status=ok
// SIG undefined FUN_145c1bdde(void)

undefined8 * FUN_145c1bdde(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x80;
  *param_1 = &PTR_FUN_14a6efd60;
  FUN_145c1be9c(param_1 + 6);
  memset(param_1 + 0x70,0,0x1dc);
  *(undefined4 *)((longlong)param_1 + 0x55c) = 0xbf800000;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x592) = 0;
  param_1[0xb4] = 0xbfe0000000000000;
  param_1[0xb5] = 0xbfe0000000000000;
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xfc;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(byte *)((longlong)param_1 + 0x5c4) = *(byte *)((longlong)param_1 + 0x5c4) & 0xfe;
  return param_1;
}



// FUNCTION 145c1be9c FUN_145c1be9c body=505 status=ok
// SIG undefined FUN_145c1be9c(void)

undefined8 * FUN_145c1be9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3ff00000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3ff00000;
  param_1[0x12] = 0x3ff0000000000000;
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
  *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) & 0xe0;
  FUN_145c1c096(param_1 + 0x20);
  FUN_145c1c096(param_1 + 0x24);
  FUN_145c1c096(param_1 + 0x28);
  FUN_145c1c096(param_1 + 0x2c);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fe) = 0;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x20c) = 0;
  *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) & 0xfc;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x48] = 0;
  *(undefined8 *)((longlong)param_1 + 0x22d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x235) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x4b] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x49] = DAT_14c8464e0;
  param_1[0x4a] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x4c] = DAT_14c8464e0;
  param_1[0x4d] = uVar1;
  param_1[0x4e] = DAT_14c8464f0;
  param_1[0x5a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x295) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2bd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c5) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x5d] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x5b] = DAT_14c8464e0;
  param_1[0x5c] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x5e] = DAT_14c8464e0;
  param_1[0x5f] = uVar1;
  param_1[0x60] = DAT_14c8464f0;
  *(undefined8 *)((longlong)param_1 + 0x325) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  return param_1;
}



// FUNCTION 145c1c096 FUN_145c1c096 body=83 status=ok
// SIG undefined FUN_145c1c096(void)

undefined8 * FUN_145c1c096(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1414f0ad3(0,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c1c0ea FUN_145c1c0ea body=134 status=ok
// SIG undefined FUN_145c1c0ea(void)

void FUN_145c1c0ea(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14009e818(param_1,iVar1);
    }
    FUN_1489bcb85((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_145c1c170(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1489bcba0(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145c1c170 FUN_145c1c170 body=97 status=ok
// SIG undefined FUN_145c1c170(void)

void FUN_145c1c170(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_144959b6a(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 145c1c1d2 FUN_145c1c1d2 body=532 status=ok
// SIG undefined FUN_145c1c1d2(void)

undefined8 * FUN_145c1c1d2(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  byte local_84;
  byte local_83;
  byte local_82;
  byte local_81;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145c1c3e8();
  *param_1 = &PTR_FUN_149ee97d0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_149eeb450;
  puVar4[2] = 0x3e6666663f3374bc;
  puVar4[3] = 0x3f8000003b449ba6;
  param_1[0x76] = puVar4 + 2;
  param_1[0x77] = puVar4;
  FUN_1400b22c2(local_98,"18A0FBFF");
  FUN_1415445ba(&local_84,local_98);
  uVar1 = (&DAT_14c758c60)[local_82];
  uVar2 = (&DAT_14c758c60)[local_83];
  uVar3 = (&DAT_14c758c60)[local_84];
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_149eeb450;
  *(undefined4 *)(puVar4 + 2) = uVar1;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar2;
  *(undefined4 *)(puVar4 + 3) = uVar3;
  *(float *)((longlong)puVar4 + 0x1c) = (float)local_81 * 0.003921569;
  param_1[0x78] = puVar4 + 2;
  param_1[0x79] = puVar4;
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_149eeb450;
  *(undefined4 *)(puVar4 + 2) = 0x3e800000;
  *(undefined4 *)((longlong)puVar4 + 0x14) = 0x3e800000;
  *(undefined4 *)(puVar4 + 3) = 0x3e800000;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 0x3f800000;
  param_1[0x7a] = puVar4 + 2;
  param_1[0x7b] = puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_149eeb450;
  puVar4[2] = 0x3e6666663f3374bc;
  puVar4[3] = 0x3f8000003b449ba6;
  param_1[0x7c] = puVar4 + 2;
  param_1[0x7d] = puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_149eeb450;
  *(undefined4 *)(puVar4 + 2) = 0x3d8b4396;
  *(undefined4 *)((longlong)puVar4 + 0x14) = 0x3d8b4396;
  *(undefined4 *)(puVar4 + 3) = 0x3d8b4396;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 0x3f800000;
  param_1[0x7e] = puVar4 + 2;
  param_1[0x7f] = puVar4;
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c1c3e8 FUN_145c1c3e8 body=842 status=ok
// SIG undefined FUN_145c1c3e8(void)

longlong * FUN_145c1c3e8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  longlong local_58 [2];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = (longlong)&PTR_FUN_149edc760;
  param_1[1] = *param_2;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  lVar1 = FUN_14001cc68(0xb0,0x10);
  local_48 = 0x4180000041800000;
  FUN_1414927bc(&local_68);
  FUN_1412cfe60(local_58,&local_68,(local_60 == 0) + '\x17');
  FUN_1401aebe8(local_58,L"Slate/Checkerboard.png",0x16);
  local_80 = 1;
  local_88 = 3;
  FUN_14140806a(lVar1,local_58,&local_48,&DAT_149e1e2f8);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  param_1[0x42] = lVar1;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  uVar2 = (**(code **)(*param_1 + 0x78))(param_1);
  FUN_1446f470e(&local_70,L"Default",1);
  FUN_1414f0b62(param_1,local_70,uVar2);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c1c734 FUN_145c1c734 body=40 status=ok
// SIG undefined FUN_145c1c734(void)

undefined8 FUN_145c1c734(undefined8 param_1,int param_2)

{
  FUN_1414f0bc2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c1c75c FUN_145c1c75c body=67 status=ok
// SIG undefined FUN_145c1c75c(void)

void FUN_145c1c75c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145c1c7a0(param_1);
    FUN_145887974(param_1,0);
    return;
  }
  FUN_145887974(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_145ace984(param_1);
  return;
}



// FUNCTION 145c1c7a0 FUN_145c1c7a0 body=325 status=ok
// SIG undefined FUN_145c1c7a0(void)

void FUN_145c1c7a0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 145c1c8e6 FUN_145c1c8e6 body=63 status=ok
// SIG undefined FUN_145c1c8e6(void)

void FUN_145c1c8e6(void)

{
  FUN_145c1c926(&DAT_14c948b60,0);
  if (DAT_14c948b80 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c948b60 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c1c926 FUN_145c1c926 body=121 status=ok
// SIG undefined FUN_145c1c926(void)

void FUN_145c1c926(longlong param_1,int param_2)

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



// FUNCTION 145c1c9a0 FUN_145c1c9a0 body=207 status=ok
// SIG undefined FUN_145c1c9a0(void)

void FUN_145c1c9a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  
  cVar3 = FUN_1414f0c6a(param_1,param_2,param_1 + 0x10,**(undefined4 **)(param_1 + 8),
                        (*(undefined4 **)(param_1 + 8))[2]);
  cVar4 = FUN_1414f0c6a(param_1,param_3,param_1 + 0x14,**(undefined4 **)(param_1 + 8),
                        (*(undefined4 **)(param_1 + 8))[2]);
  cVar5 = FUN_1414f0c6a(param_1,param_4,param_1 + 0x18,**(undefined4 **)(param_1 + 8),
                        (*(undefined4 **)(param_1 + 8))[2]);
  cVar6 = FUN_1414f0c6a(param_1,param_5,param_1 + 0x1c,
                        *(undefined4 *)(*(longlong *)(param_1 + 8) + 4),
                        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc));
  if ((((cVar3 != '\0') || (cVar4 != '\0')) || (cVar5 != '\0')) || (cVar6 != '\0')) {
    puVar2 = *(undefined4 **)(param_1 + 8);
    uVar1 = *puVar2;
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = *puVar2;
    *(undefined4 *)(param_1 + 0x1c) = puVar2[1];
    *(undefined8 *)(param_1 + 0x20) = DAT_14c872be0;
  }
  return;
}



// FUNCTION 145c1ca70 FUN_145c1ca70 body=40 status=ok
// SIG undefined FUN_145c1ca70(void)

undefined8 FUN_145c1ca70(undefined8 param_1,int param_2)

{
  FUN_145c1ca98();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c1ca98 FUN_145c1ca98 body=145 status=ok
// SIG undefined FUN_145c1ca98(void)

void FUN_145c1ca98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b35cce0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1 + 0x13);
  FUN_140d2ef74(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2ef74(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c1cb2a FUN_145c1cb2a body=179 status=ok
// SIG undefined FUN_145c1cb2a(void)

bool FUN_145c1cb2a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
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



// FUNCTION 145c1cbee FUN_145c1cbee body=174 status=ok
// SIG undefined FUN_145c1cbee(void)

undefined8 * FUN_145c1cbee(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[5] = &PTR_LAB_14b5f6600;
  FUN_1409e1656(param_1 + 6);
  *param_1 = &PTR_FUN_14b5f0670;
  param_1[5] = &PTR_FUN_14b5f0910;
  param_1[6] = &PTR_LAB_14b5f0930;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x200000000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 145c1cc9c FUN_145c1cc9c body=40 status=ok
// SIG undefined FUN_145c1cc9c(void)

undefined8 FUN_145c1cc9c(undefined8 param_1,int param_2)

{
  FUN_1414f0d0e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c1ccc4 FUN_145c1ccc4 body=40 status=ok
// SIG undefined FUN_145c1ccc4(void)

undefined8 FUN_145c1ccc4(undefined8 param_1,int param_2)

{
  FUN_145c1ccec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c1ccec FUN_145c1ccec body=101 status=ok
// SIG undefined FUN_145c1ccec(void)

void FUN_145c1ccec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba9cb20;
  param_1[5] = &PTR_FUN_14ba9cdc0;
  FUN_145c1cd51(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c1cd51 FUN_145c1cd51 body=44 status=ok
// SIG undefined FUN_145c1cd51(void)

void FUN_145c1cd51(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_14102a02c(param_1);
      param_1 = param_1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c1cd7e FUN_145c1cd7e body=141 status=ok
// SIG undefined FUN_145c1cd7e(void)

void FUN_145c1cd7e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446e0b6e();
  if ((longlong)*(int *)(param_1 + 0x170) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar2 = (longlong)*(int *)(param_1 + 0x170) << 4;
    do {
      FUN_145c1ce0c(param_1,lVar3);
      lVar3 = lVar3 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  local_38 = 0xe4b068ed;
  uStack_34 = 0xf49442e9;
  uStack_30 = 0xa231da0b;
  uStack_2c = 0x2e46bb41;
  iVar1 = FUN_1448a256a(param_1);
  if (iVar1 < 7) {
    *(undefined1 *)(param_1 + 0x18e5) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c1ce0c FUN_145c1ce0c body=257 status=ok
// SIG undefined FUN_145c1ce0c(void)

void FUN_145c1ce0c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar3 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(puVar3 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar3,iVar1,0);
    memcpy((void *)*puVar3,_Src,(longlong)iVar1 * 2);
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_FUN_149f0ebe0;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x1998);
  *(uint *)(param_1 + 0x1998) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x199c) < iVar1 + 1U) {
    FUN_145c1cf0e(param_1 + 0x1990,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x1990);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  if (*(longlong *)(param_1 + 0x19a0) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145c1cf06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x19a0) + 0x400) + 0x240))();
  return;
}



// FUNCTION 145c1cf0e FUN_145c1cf0e body=132 status=ok
// SIG undefined FUN_145c1cf0e(void)

void FUN_145c1cf0e(longlong param_1,int param_2)

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



// FUNCTION 145c1cf94 FUN_145c1cf94 body=154 status=ok
// SIG undefined FUN_145c1cf94(void)

void FUN_145c1cf94(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_144b49c10();
    if ((DAT_14cb0d2b0 != 0 && *(longlong *)(param_1 + 0x10) != 0) &&
       (*(longlong *)(DAT_14cb0d2b0 + 0xc20) != 0)) {
      FUN_14480f766(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0x2e8);
    }
  }
  plVar3 = DAT_14cb9e640;
  DAT_14cb9e638 = 0;
  if (DAT_14cb9e640 != (longlong *)0x0) {
    DAT_14cb9e640 = (longlong *)0x0;
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
                    /* WARNING: Could not recover jumptable at 0x000145c1d009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c1d02e FUN_145c1d02e body=25 status=ok
// SIG undefined FUN_145c1d02e(void)

void FUN_145c1d02e(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c1d043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 145c1d048 FUN_145c1d048 body=38 status=ok
// SIG undefined FUN_145c1d048(void)

undefined8 FUN_145c1d048(undefined8 param_1,int param_2)

{
  FUN_145c1d06e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c1d06e FUN_145c1d06e body=257 status=ok
// SIG undefined FUN_145c1d06e(void)

void FUN_145c1d06e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  *param_1 = (longlong)&PTR_FUN_14b5a80b0;
  FUN_141654242();
  (**(code **)(*param_1 + 0x40))(param_1);
  FUN_14080c2b4();
  plVar3 = param_1 + 10;
  FUN_145c1d16f(param_1[10],(int)param_1[0xb]);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_145c1d292(plVar3,0);
    uVar4 = (undefined4)param_1[0xb];
  }
  FUN_145c1d16f(*plVar3,uVar4);
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[9];
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
  plVar3 = (longlong *)param_1[7];
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
  FUN_1447a1747(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],(int)param_1[2]);
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145c1d16f FUN_145c1d16f body=75 status=ok
// SIG undefined FUN_145c1d16f(void)

void FUN_145c1d16f(longlong param_1,int param_2)

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



// FUNCTION 145c1d1ba FUN_145c1d1ba body=24 status=ok
// SIG undefined FUN_145c1d1ba(void)

void FUN_145c1d1ba(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c1d1ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145c1d1d2 FUN_145c1d1d2 body=25 status=ok
// SIG undefined FUN_145c1d1d2(void)

void FUN_145c1d1d2(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c1d1e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 145c1d1ec FUN_145c1d1ec body=89 status=ok
// SIG undefined FUN_145c1d1ec(void)

undefined8 * FUN_145c1d1ec(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b5a86c0;
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
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 145c1d246 FUN_145c1d246 body=75 status=ok
// SIG undefined FUN_145c1d246(void)

void FUN_145c1d246(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14080c2b4();
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar4);
      lVar2 = lVar1 + 0x20;
      if (lVar1 == 0) {
        lVar2 = 0;
      }
      FUN_140414380(lVar2,0);
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 < *(int *)(param_1 + 0x58));
  }
  return;
}



// FUNCTION 145c1d292 FUN_145c1d292 body=96 status=ok
// SIG undefined FUN_145c1d292(void)

void FUN_145c1d292(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 145c1d2f2 FUN_145c1d2f2 body=69 status=ok
// SIG undefined FUN_145c1d2f2(void)

void FUN_145c1d2f2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x180);
  FUN_145c1d338(param_2);
  *param_2 = &PTR_FUN_14b0a2660;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  return;
}



// FUNCTION 145c1d338 FUN_145c1d338 body=209 status=ok
// SIG undefined FUN_145c1d338(void)

void FUN_145c1d338(undefined8 *param_1)

{
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14a420e90;
  param_1[3] = 0;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x21) = 0;
  *(byte *)((longlong)param_1 + 0x22) = *(byte *)((longlong)param_1 + 0x22) & 0xfe;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
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
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}



// FUNCTION 145c1d40a FUN_145c1d40a body=38 status=ok
// SIG undefined FUN_145c1d40a(void)

void FUN_145c1d40a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140dbff46();
  FUN_145c1d430(uVar1,param_1 + 0x20,param_3);
  return;
}



// FUNCTION 145c1d430 FUN_145c1d430 body=100 status=ok
// SIG undefined FUN_145c1d430(void)

undefined8 FUN_145c1d430(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined ***local_28;
  undefined **local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &PTR_FUN_149fcf730;
  local_10 = param_3;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_28 = &local_18;
    uVar1 = FUN_1411bde97(*(undefined8 *)(param_1 + 0x10),param_1,0,param_2);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c1d496 FUN_145c1d496 body=40 status=ok
// SIG undefined FUN_145c1d496(void)

undefined8 FUN_145c1d496(undefined8 param_1,int param_2)

{
  FUN_145c1d4be();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c1d4be FUN_145c1d4be body=65 status=ok
// SIG undefined FUN_145c1d4be(void)

void FUN_145c1d4be(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc778a0;
  if (param_1[0x93] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x91] != 0) {
    FUN_1400020a8();
  }
  FUN_145c1d500(param_1);
  return;
}


