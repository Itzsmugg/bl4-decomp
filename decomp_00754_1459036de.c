// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1459036de FUN_1459036de body=90 status=ok
// SIG undefined FUN_1459036de(void)

void FUN_1459036de(longlong param_1)

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



// FUNCTION 145903738 FUN_145903738 body=160 status=ok
// SIG undefined FUN_145903738(void)

void FUN_145903738(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  local_20 = local_28;
  iVar2 = FUN_141340124((longlong *)(param_1 + 0x1e0),
                        (uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x1e0);
    if ((lVar1 + (longlong)iVar2 * 0x60 != 0) && (lVar1 + (longlong)iVar2 * 0x60 != -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145903832 FUN_145903832 body=325 status=ok
// SIG undefined FUN_145903832(void)

void FUN_145903832(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 145903978 FUN_145903978 body=144 status=ok
// SIG undefined FUN_145903978(void)

bool FUN_145903978(longlong param_1)

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



// FUNCTION 145903a0a FUN_145903a0a body=287 status=ok
// SIG undefined FUN_145903a0a(void)

void FUN_145903a0a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_a8 [32];
  code **local_88;
  undefined8 local_78;
  longlong *local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(longlong *)(param_1 + 0x1b8) == 0) || (*(longlong *)(param_1 + 0x1c0) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x1c0) + 8) < 1)) {
    uVar3 = FUN_1401cb356();
    local_88 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b4f6c50;
    local_68[0] = FUN_143f4d47e;
    local_40 = param_1;
    FUN_1401cbba4(uVar3,&local_78,L"UGbxVoice::OnAudioDevicesChanged",0x3f800000);
    *(undefined8 *)(param_1 + 0x1b8) = local_78;
    local_78 = 0;
    plVar2 = *(longlong **)(param_1 + 0x1c0);
    *(longlong **)(param_1 + 0x1c0) = local_70;
    local_70 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_70 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
    }
    if (local_68[0] != (code *)0x0) {
      pppuVar4 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar4 = &local_48;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145903b2a FUN_145903b2a body=317 status=ok
// SIG undefined FUN_145903b2a(void)

void FUN_145903b2a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1413401e6(local_18,local_20,local_21);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145903c68 FUN_145903c68 body=158 status=ok
// SIG undefined FUN_145903c68(void)

bool FUN_145903c68(longlong param_1,undefined8 param_2)

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



// FUNCTION 145903d08 FUN_145903d08 body=193 status=ok
// SIG undefined FUN_145903d08(void)

void FUN_145903d08(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  FUN_1413402a0();
  lVar1 = param_2 + 0x20;
  cVar2 = FUN_14021d296(lVar1,&DAT_14cbd9498);
  if (cVar2 == '\0') {
    cVar2 = FUN_14021d296(lVar1,&DAT_14cbd94a0);
    if (cVar2 == '\0') {
      cVar2 = FUN_14021d296(lVar1,&DAT_14cbd94a8);
      if (cVar2 == '\0') {
        cVar2 = FUN_14021d296(lVar1,&DAT_14cbd94b0);
        if (cVar2 == '\0') {
          return;
        }
        FUN_144259e6e(param_1);
        return;
      }
      puVar4 = &DAT_14cbcfbe8;
      uVar3 = DAT_14cbcfbe8;
    }
    else {
      puVar4 = &DAT_14cbcfbe0;
      uVar3 = DAT_14cbcfbe0;
    }
  }
  else {
    puVar4 = &DAT_14cbcfbd8;
    uVar3 = DAT_14cbcfbd8;
  }
  *(undefined8 *)(param_1 + 0x168) = uVar3;
  FUN_141340f90(param_1,puVar4,*(undefined1 *)(param_2 + 0x28));
  return;
}



// FUNCTION 145903dca FUN_145903dca body=161 status=ok
// SIG undefined FUN_145903dca(void)

void FUN_145903dca(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  code *local_40;
  undefined1 **local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_29 = param_5;
  *(undefined4 *)(param_4 + 8) = 0;
  if (*(int *)(param_4 + 0xc) != 0) {
    FUN_1488d20d8(param_4,0);
  }
  local_60 = &local_29;
  local_38 = &local_60;
  local_40 = FUN_143dbc544;
  local_58 = param_2;
  local_50 = param_3;
  local_48 = param_4;
  FUN_141340bd4(param_1,&local_40,0);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145903e6c FUN_145903e6c body=288 status=ok
// SIG undefined FUN_145903e6c(void)

undefined4 * FUN_145903e6c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  FUN_1459040ba(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_145903f8e(local_40 + 2,uVar1);
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_145904010(param_1,uVar5,local_40,&local_4c);
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
      local_40[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1459041aa(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145903f8e FUN_145903f8e body=77 status=ok
// SIG undefined FUN_145903f8e(void)

undefined8 * FUN_145903f8e(undefined8 *param_1,undefined8 *param_2)

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
    FUN_141340a86(param_1,iVar1,0);
    FUN_145903fdb(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 145903fdb FUN_145903fdb body=52 status=ok
// SIG undefined FUN_145903fdb(void)

void FUN_145903fdb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1447a97f4(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 145904010 FUN_145904010 body=170 status=ok
// SIG undefined FUN_145904010(void)

undefined8 FUN_145904010(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_1456d172d(*(undefined8 *)(piVar1 + 2),piVar1[4]);
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_148e3706a(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1459040ba FUN_1459040ba body=239 status=ok
// SIG undefined FUN_1459040ba(void)

int * FUN_1459040ba(longlong *param_1,int *param_2)

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



// FUNCTION 1459041aa FUN_1459041aa body=431 status=ok
// SIG undefined FUN_1459041aa(void)

void FUN_1459041aa(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 14590435a FUN_14590435a body=1094 status=ok
// SIG undefined FUN_14590435a(void)

void FUN_14590435a(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong *local_58 [2];
  undefined4 *local_48;
  longlong **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140002266(local_58,L"%.2f",(double)*(float *)(param_1 + 0xe0));
  local_5c = 0x26;
  local_48 = &local_5c;
  local_40 = local_58;
  FUN_1413464b2(param_2,local_34,&local_48,0);
  if (local_58[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(local_58,L"%.2f",(double)*(float *)(param_1 + 0xe4));
  local_5c = 0x27;
  local_48 = &local_5c;
  local_40 = local_58;
  FUN_1413464b2(param_2,local_34,&local_48,0);
  if (local_58[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(local_58,&DAT_149e063bc,*(undefined1 *)(param_1 + 0xbc));
  local_5c = 0x31;
  local_48 = &local_5c;
  local_40 = local_58;
  FUN_1413464b2(param_2,local_34,&local_48,0);
  if (local_58[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  fVar4 = 0.0;
  if (*(char *)(param_1 + 0xbc) == '\x01') {
    fVar4 = *(float *)(param_1 + 0xb8);
  }
  FUN_140002266(local_58,&DAT_149e063bc,(int)ROUND(fVar4 + fVar4 + 0.5) >> 1);
  local_5c = 0x32;
  local_48 = &local_5c;
  local_40 = local_58;
  FUN_1413464b2(param_2,local_34,&local_48,0);
  if (local_58[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(local_58,&DAT_149e063bc,
                (int)ROUND(*(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x15c) + 0.5) >> 1);
  local_5c = 0x34;
  local_48 = &local_5c;
  local_40 = local_58;
  FUN_1413464b2(param_2,local_34,&local_48,0);
  if (local_58[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(param_1 + 0x150,local_58);
  local_5c = 0x3f;
  local_48 = &local_5c;
  local_40 = local_58;
  FUN_1413464b2(param_2,local_34,&local_48,0);
  if (local_58[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined1 *)(param_1 + 0x16c);
  uVar2 = FUN_1459047a1();
  FUN_1406f1d90(uVar2,local_58,uVar1);
  local_40 = (longlong **)FUN_1447a1f4a(local_58);
  local_5c = 0x30;
  local_48 = &local_5c;
  FUN_145904814(param_2,local_34,&local_48,0);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  FUN_140002266(local_58,&DAT_149e063bc,*(undefined1 *)(param_1 + 0x164));
  local_5c = 0x3c;
  uVar3 = 0;
  local_48 = &local_5c;
  local_40 = local_58;
  FUN_1413464b2(param_2,local_34,&local_48,0);
  if (local_58[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x164) == '\x01') {
    uVar3 = *(undefined4 *)(param_1 + 0x168);
  }
  FUN_140002266(local_58,&DAT_149e063bc,uVar3);
  local_5c = 0x3d;
  local_48 = &local_5c;
  local_40 = local_58;
  FUN_1413464b2(param_2,local_34,&local_48,0);
  if (local_58[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined1 *)(param_1 + 0x1d8);
  uVar2 = FUN_1459047da();
  FUN_1406f1d90(uVar2,local_58,uVar1);
  local_40 = (longlong **)FUN_1447a1f4a(local_58);
  local_5c = 0x3e;
  local_48 = &local_5c;
  FUN_145904814(param_2,local_34,&local_48,0);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  FUN_140002266(local_58,L"%.2f",(double)*(float *)(param_1 + 0x160));
  local_5c = 0x4f;
  local_48 = &local_5c;
  local_40 = local_58;
  FUN_1413464b2(param_2,local_34,&local_48,0);
  if (local_58[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459047a1 FUN_1459047a1 body=57 status=ok
// SIG undefined FUN_1459047a1(void)

void FUN_1459047a1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f128 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f128 = FUN_14171c317(FUN_1464e4e56,uVar1,L"EShowFPSMode");
  }
  return;
}



// FUNCTION 1459047da FUN_1459047da body=57 status=ok
// SIG undefined FUN_1459047da(void)

void FUN_1459047da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f158 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f158 = FUN_14171c317(FUN_1464e4f1e,uVar1,L"EGbxNvidiaReflexMode");
  }
  return;
}



// FUNCTION 145904814 FUN_145904814 body=305 status=ok
// SIG undefined FUN_145904814(void)

undefined4 *
FUN_145904814(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_140fef636(param_1,local_50);
  FUN_145904946(param_3,local_48);
  local_48[6] = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = *local_48;
  local_68 = param_4;
  cVar1 = FUN_140fef4e4(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
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
      local_48[7] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[6] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_141346600(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145904946 FUN_145904946 body=105 status=ok
// SIG undefined FUN_145904946(void)

undefined4 * FUN_145904946(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  param_2[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_2[5] = 0;
  }
  else {
    FUN_1446dd670(param_2 + 2,iVar1,0);
    memcpy(*(void **)(param_2 + 2),_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1459049b0 FUN_1459049b0 body=80 status=ok
// SIG undefined FUN_1459049b0(void)

longlong * FUN_1459049b0(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_144a80dc3(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 145904a00 FUN_145904a00 body=830 status=ok
// SIG undefined FUN_145904a00(void)

undefined4 * FUN_145904a00(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  param_1[0x4c] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x25) = 0;
  *(undefined8 *)(param_1 + 0x27) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x33) = 0;
  *(undefined8 *)(param_1 + 0x35) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x4d) = 0xffffffff00000080;
  param_1[0x4f] = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x54] = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  param_1[0x60] = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x61) = 0xffffffff00000080;
  param_1[99] = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  param_1[0x68] = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  param_1[0x72] = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x7e) = 4;
  param_1[0x80] = 0;
  param_1[0x82] = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9a) = 0xa00000000;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa2) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x9e) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_145904d7e(param_1 + 0xa6,8,8,8,0x200,0x200,0x200,0,1,0);
  param_1[0xfe] = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x106) = 0x400000000;
  *(undefined8 *)(param_1 + 0xf2) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  param_1[0xf6] = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xfa) = 0;
  param_1[0xfc] = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x12e) = 0;
  param_1[0x130] = 0;
  *(undefined8 *)(param_1 + 0x10e) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  param_1[0x112] = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x116) = 0;
  param_1[0x118] = 0;
  *(undefined8 *)(param_1 + 0x126) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x122) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x11e) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x11a) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x131) = 0xffffffff00000080;
  param_1[0x133] = 0;
  *(undefined8 *)(param_1 + 0x136) = 0;
  param_1[0x138] = 0;
  *(undefined8 *)(param_1 + 0x142) = 0;
  param_1[0x144] = 0;
  *(undefined8 *)(param_1 + 0x13a) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x145) = 0xffffffff00000080;
  param_1[0x147] = 0;
  *(undefined8 *)(param_1 + 0x14a) = 0;
  param_1[0x14c] = 0;
  *(undefined8 *)(param_1 + 0x162) = 0;
  param_1[0x164] = 0;
  *(undefined8 *)(param_1 + 0x14e) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x152) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x156) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x15a) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x165) = 0xffffffff00000080;
  param_1[0x167] = 0;
  *(undefined8 *)(param_1 + 0x16a) = 0;
  param_1[0x16c] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x172) = 0;
  *(undefined8 *)(param_1 + 0x16e) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  uVar3 = FUN_145904d3e((ulonglong)param_2);
  *(undefined1 *)(param_1 + 0x174) = uVar3;
  *(bool *)((longlong)param_1 + 0x5d1) =
       *(longlong *)(&DAT_14ca814b0 + ((ulonglong)param_2 & 0xffff) * 0x3c) != DAT_14ca81490 &&
       *(longlong *)(&DAT_14ca814b0 + ((ulonglong)param_2 & 0xffff) * 0x3c) != DAT_14ca838f8;
  uVar1 = param_1[0x7e];
  iVar2 = param_1[0x7c];
  param_1[0x7c] = iVar2 + uVar1;
  if ((uint)(param_1[0x7d] - iVar2) < uVar1) {
    FUN_14134681c(param_1 + 0x7a);
  }
  memset((void *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x7a)),0,(longlong)(int)uVar1 << 3);
  return param_1;
}



// FUNCTION 145904d3e FUN_145904d3e body=64 status=ok
// SIG undefined FUN_145904d3e(void)

ulonglong FUN_145904d3e(ushort param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined4 extraout_var;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  
  if ((*(byte *)((longlong)&DAT_14ca814c8 + (ulonglong)param_1 * 0x3c + 1) & 2) == 0) {
    return 0;
  }
  puVar11 = &DAT_14ca96c28;
  if (DAT_14ca96c78 != (undefined4 *)0x0) {
    puVar11 = DAT_14ca96c78;
  }
  if (((uint)puVar11[param_1 >> 5] >> (param_1 & 0x1f) & 1) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb02ac0) && (FUN_144b3d300(&DAT_14cb02ac0), DAT_14cb02ac0 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.GenerateMeshDistanceFields",1);
      if (plVar8 == (longlong *)0x0) {
        DAT_14cb02ab8 = 0;
      }
      else {
        DAT_14cb02ab8 = (**(code **)(*plVar8 + 0x68))(plVar8);
      }
      _Init_thread_footer(&DAT_14cb02ac0);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb02ad0) && (FUN_144b3d300(&DAT_14cb02ad0), DAT_14cb02ad0 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.DistanceFields.SupportEvenIfHardwareRayTracingSupported"
                          ,1);
      if (plVar8 == (longlong *)0x0) {
        DAT_14cb02ac8 = 0;
      }
      else {
        DAT_14cb02ac8 = (**(code **)(*plVar8 + 0x68))(plVar8);
      }
      _Init_thread_footer(&DAT_14cb02ad0);
    }
    lVar4 = DAT_14cb02ab8;
    if ((*(byte *)((longlong)&DAT_14ca814c8 + (ulonglong)DAT_14ca85550 * 0x3c + 1) & 2) != 0) {
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar1 = *(int *)(lVar3 + 0xc60);
      if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
        uVar9 = 0;
      }
      else if (iVar1 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar6 != DVar7);
      }
      else {
        uVar9 = 1;
      }
      lVar5 = DAT_14cb02ac8;
      if (*(int *)(lVar4 + uVar9 * 4) != 0) {
        uVar2 = *(uint *)(lVar3 + 0xc60);
        uVar9 = (ulonglong)uVar2;
        if (((uVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar2 == 2)) {
          uVar10 = 0;
        }
        else if (uVar2 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          uVar9 = CONCAT44(extraout_var,DVar7);
          uVar10 = (ulonglong)(DVar6 != DVar7);
        }
        else {
          uVar10 = 1;
        }
        if (*(int *)(lVar5 + uVar10 * 4) != 0) {
          return CONCAT71((int7)(uVar9 >> 8),1);
        }
        uVar9 = FUN_144b1ce18();
        return uVar9 ^ 1;
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 145904d7e FUN_145904d7e body=294 status=ok
// SIG undefined FUN_145904d7e(void)

undefined4 *
FUN_145904d7e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10)

{
  undefined4 *puVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = param_4;
  *(undefined1 *)(param_1 + 6) = param_8;
  *(undefined1 *)((longlong)param_1 + 0x19) = param_9;
  *(undefined1 *)((longlong)param_1 + 0x1a) = param_10;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x2f] = 5;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x43) = 0xffffffff00000080;
  param_1[0x45] = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  param_1[0x4a] = 0;
  param_1[0x2e] = 1;
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 10) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x32) = param_5;
  *(undefined2 *)(param_1 + 0xd) = param_6;
  *(undefined2 *)((longlong)param_1 + 0x36) = param_7;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0x36] = 1;
  FUN_145904ea4(param_1 + 0x34,0);
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 1) = 0;
  *(undefined2 *)((longlong)puVar1 + 6) = param_5;
  *(undefined2 *)(puVar1 + 2) = param_6;
  *(undefined2 *)((longlong)puVar1 + 10) = param_7;
  puVar1[3] = 0;
  return param_1;
}



// FUNCTION 145904ea4 FUN_145904ea4 body=132 status=ok
// SIG undefined FUN_145904ea4(void)

void FUN_145904ea4(longlong param_1,int param_2)

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



// FUNCTION 145904f28 FUN_145904f28 body=40 status=ok
// SIG undefined FUN_145904f28(void)

undefined8 FUN_145904f28(undefined8 param_1,int param_2)

{
  FUN_145904f50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145904f50 FUN_145904f50 body=121 status=ok
// SIG undefined FUN_145904f50(void)

void FUN_145904f50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abe6650;
  param_1[5] = &PTR_FUN_14abe6990;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145904fc9(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14abe9730;
  param_1[5] = &PTR_LAB_14abe9a20;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145904fc9 FUN_145904fc9 body=63 status=ok
// SIG undefined FUN_145904fc9(void)

void FUN_145904fc9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14590501e FUN_14590501e body=126 status=ok
// SIG undefined FUN_14590501e(void)

void FUN_14590501e(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x1151) & 1) == 0) {
    FUN_1446f470e(local_20,L"OnRep_GbxActorPartOwnerState",1);
    FUN_1459050a6(param_1,local_20);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1457dac2c(param_1 + 0x2b58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459050a6 FUN_1459050a6 body=12 status=ok
// SIG undefined FUN_1459050a6(void)

void FUN_1459050a6(longlong param_1)

{
  FUN_140721fbe(param_1 + 0x1328);
  return;
}



// FUNCTION 1459050b2 FUN_1459050b2 body=41 status=ok
// SIG undefined FUN_1459050b2(void)

void FUN_1459050b2(undefined8 param_1)

{
  FUN_1459050dc();
  FUN_1413d8c86(param_1);
  FUN_1413d8be4(&DAT_14cb89740,param_1);
  return;
}



// FUNCTION 1459050dc FUN_1459050dc body=1 status=ok
// SIG undefined FUN_1459050dc(void)

void FUN_1459050dc(void)

{
  return;
}



// FUNCTION 1459050de FUN_1459050de body=40 status=ok
// SIG undefined FUN_1459050de(void)

undefined8 FUN_1459050de(undefined8 param_1,int param_2)

{
  FUN_145905106();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145905106 FUN_145905106 body=72 status=ok
// SIG undefined FUN_145905106(void)

void FUN_145905106(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b57ceb0;
  FUN_1412dafa6(param_1 + 10);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14590514e FUN_14590514e body=162 status=ok
// SIG undefined FUN_14590514e(void)

undefined8 FUN_14590514e(longlong param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  local_20 = *(undefined8 *)(param_1 + -0x1520);
  FUN_1400021e4(&local_20,&local_30);
  if (&local_30 == param_2) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_30;
    *(undefined4 *)(param_2 + 1) = local_28;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459052de FUN_1459052de body=374 status=ok
// SIG undefined FUN_1459052de(void)

ulonglong FUN_1459052de(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong unaff_RBP;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = FUN_145905456();
  if ((cVar3 != '\0') && (iVar1 = *(int *)(param_1 + 0xe8), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    lVar9 = 0;
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
    do {
      local_80 = *(undefined8 *)(lVar2 + 8 + lVar9);
      local_78 = *(undefined4 *)(lVar2 + 0x10 + lVar9);
      FUN_1448075d0(local_70,&local_80);
      lVar4 = FUN_14060eaf6(local_70);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (lVar4 == 0) goto LAB_1459053cd;
      plVar5 = (longlong *)FUN_14050cbd4(lVar4);
      if (plVar5 == (longlong *)0x0) goto LAB_1459053cd;
      local_88 = param_1;
      lVar4 = (**(code **)(*plVar5 + 8))(plVar5);
      lVar6 = FUN_14050caa6();
      if ((((lVar6 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar6 + 0x38))) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
           lVar6 + 0x30)) || ((char)plVar5[0x1a] != '\x01')) goto LAB_1459053cd;
      uVar7 = FUN_141563480(plVar5 + 0x1b);
      uVar8 = FUN_140d80bda(local_88);
      cVar3 = FUN_1411d9864(uVar8,uVar7);
      if (cVar3 != '\0') goto LAB_1459053cd;
      lVar9 = lVar9 + 0x30;
      param_1 = local_88;
    } while ((longlong)iVar1 * 0x30 != lVar9);
  }
  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),0 < *(int *)(param_1 + 0x128));
LAB_1459053cd:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145905456 FUN_145905456 body=66 status=ok
// SIG undefined FUN_145905456(void)

undefined8 FUN_145905456(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = (longlong)*(int *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    lVar2 = lVar1 * 0x10;
    lVar4 = 0;
    do {
      uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      if (*(char *)(*(longlong *)(param_1 + 0xe0) + 0x19 + lVar4) != '\x01') {
        return uVar3;
      }
      if (*(char *)(*(longlong *)(param_1 + 0xe0) + 0x1a + lVar4) == '\x01') {
        return uVar3;
      }
      lVar4 = lVar4 + 0x30;
      lVar2 = 0;
    } while (lVar1 * 0x30 != lVar4);
  }
  return 0;
}



// FUNCTION 145905498 FUN_145905498 body=289 status=ok
// SIG undefined FUN_145905498(void)

void FUN_145905498(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x350);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x358);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x360);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x370);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x368);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x378);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x380);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x388);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x3a0);
  FUN_141346d9a(param_1,&local_20);
  FUN_141346e22(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459055ba FUN_1459055ba body=332 status=ok
// SIG undefined FUN_1459055ba(void)

void FUN_1459055ba(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  code *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + -0x30;
  FUN_140b7c6c8();
  lVar3 = *(longlong *)(param_1 + -0x10);
  if (lVar3 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (*(longlong *)(param_1 + 0x20) == 0) {
        local_48 = FUN_1412a7bee;
        local_40 = 0;
        FUN_145905792(lVar3 + 0x6170,&local_38,lVar1);
        *(undefined8 *)(param_1 + 0x20) = local_38;
      }
      FUN_145881e1a(&local_50);
      FUN_145905708(lVar3 + 0x3d4,lVar1,local_50);
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x3c20) + 0x18))(lVar3 + 0x3c20);
        if (lVar3 != 0) {
          local_48 = FUN_14601f6a0;
          local_40 = 0;
          FUN_145905892(lVar3,&local_38,lVar1);
          *(undefined8 *)(param_1 + 0x98) = local_38;
        }
      }
    }
  }
  lVar3 = FUN_14047210e(lVar1);
  if (lVar3 != 0) {
    FUN_1412a8e58(lVar1,lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145905708 FUN_145905708 body=137 status=ok
// SIG undefined FUN_145905708(void)

void FUN_145905708(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_1410d8386(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x3d4,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145905792 FUN_145905792 body=254 status=ok
// SIG undefined FUN_145905792(void)

undefined8
FUN_145905792(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_FUN_14b9b9f70;
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



// FUNCTION 145905892 FUN_145905892 body=254 status=ok
// SIG undefined FUN_145905892(void)

undefined8
FUN_145905892(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b95fed0;
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
  *local_48 = &PTR_FUN_14b9b9fe0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141346f50(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145905992 FUN_145905992 body=226 status=ok
// SIG undefined FUN_145905992(void)

void FUN_145905992(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  switchD_143c3d4dc::caseD_42();
  FUN_1446f470e(&local_58,L"UniqueRewards",1);
  uVar1 = FUN_145905a76();
  FUN_145905a76();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"Packages",1);
  uVar1 = FUN_145905a76();
  FUN_145905a76();
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



// FUNCTION 145905a76 FUN_145905a76 body=221 status=ok
// SIG undefined FUN_145905a76(void)

longlong FUN_145905a76(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb62968 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486e7dfd;
    local_40 = &LAB_145942ffe;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxRewardsManager",&DAT_14cb62968,FUN_1464f971a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb62968;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145905b54 FUN_145905b54 body=122 status=ok
// SIG undefined FUN_145905b54(void)

ulonglong FUN_145905b54(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_145905bd0();
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x38) == '\x01')) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_140aa7b7e(*(undefined8 *)(param_1 + 0x10),&local_28,0);
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),(int)uStack_20 == 0);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar2 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145905bd0 FUN_145905bd0 body=97 status=ok
// SIG undefined FUN_145905bd0(void)

longlong FUN_145905bd0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_145905c32();
  if (*(longlong *)(lVar2 + 0x110) != 0) {
    lVar3 = FUN_145905c32();
    lVar2 = *(longlong *)(lVar2 + 0x110);
    if (lVar2 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar1 = *(longlong *)(lVar2 + 0x10);
      if (lVar1 == 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30) {
          return 0;
        }
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 145905c32 FUN_145905c32 body=228 status=ok
// SIG undefined FUN_145905c32(void)

longlong FUN_145905c32(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9c428 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_148b4e839;
    local_40 = &LAB_145f9f7a4;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x318;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGConfig",&DAT_14cb9c428,&DAT_148b4e838);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9c428;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145905d18 FUN_145905d18 body=80 status=ok
// SIG undefined FUN_145905d18(void)

void FUN_145905d18(longlong *param_1,ushort *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & (uint)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ushort *)(*param_1 + (longlong)iVar1 * 0x18) == *param_2) {
          FUN_145905d68();
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 145905d68 FUN_145905d68 body=85 status=ok
// SIG undefined FUN_145905d68(void)

void FUN_145905d68(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_145905dbe();
  return;
}



// FUNCTION 145905dbe FUN_145905dbe body=116 status=ok
// SIG undefined FUN_145905dbe(void)

void FUN_145905dbe(longlong *param_1,int param_2)

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



// FUNCTION 145905e32 FUN_145905e32 body=128 status=ok
// SIG undefined FUN_145905e32(void)

void FUN_145905e32(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if ((longlong)(int)param_2[1] != 0) {
    plVar3 = (longlong *)*param_2;
    plVar4 = plVar3 + (longlong)(int)param_2[1] * 0xb;
    do {
      if ((longlong)*(int *)(param_1 + 0xa38) != 0) {
        plVar2 = *(longlong **)(param_1 + 0xa30);
        lVar1 = (longlong)*(int *)(param_1 + 0xa38) * 0x58;
        do {
          if (*plVar2 == *plVar3) {
            if (plVar2 != (longlong *)0x0) goto LAB_145905e8b;
            break;
          }
          plVar2 = plVar2 + 0xb;
          lVar1 = lVar1 + -0x58;
        } while (lVar1 != 0);
      }
      plVar2 = (longlong *)FUN_145905eb2(param_1 + 0xa30);
LAB_145905e8b:
      FUN_145905f92(plVar2,plVar3);
      plVar3 = plVar3 + 0xb;
    } while (plVar3 != plVar4);
  }
  return;
}



// FUNCTION 145905eb2 FUN_145905eb2 body=59 status=ok
// SIG undefined FUN_145905eb2(void)

longlong FUN_145905eb2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145906002(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x58 + *param_1;
  FUN_145905eed(lVar2);
  return lVar2;
}



// FUNCTION 145905eed FUN_145905eed body=37 status=ok
// SIG undefined FUN_145905eed(void)

void FUN_145905eed(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  return;
}



// FUNCTION 145905f12 FUN_145905f12 body=128 status=ok
// SIG undefined FUN_145905f12(void)

void FUN_145905f12(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if ((longlong)(int)param_2[1] != 0) {
    plVar3 = (longlong *)*param_2;
    plVar4 = plVar3 + (longlong)(int)param_2[1] * 0xb;
    do {
      if ((longlong)*(int *)(param_1 + 0xa48) != 0) {
        plVar1 = *(longlong **)(param_1 + 0xa40);
        lVar2 = (longlong)*(int *)(param_1 + 0xa48) * 0x58;
        do {
          if (*plVar1 == *plVar3) {
            if (plVar1 != (longlong *)0x0) goto LAB_145905f59;
            break;
          }
          plVar1 = plVar1 + 0xb;
          lVar2 = lVar2 + -0x58;
        } while (lVar2 != 0);
      }
      plVar1 = (longlong *)FUN_145905eb2(param_1 + 0xa40);
LAB_145905f59:
      FUN_145905f92(plVar1,plVar3);
      plVar3 = plVar3 + 0xb;
    } while (plVar3 != plVar4);
  }
  return;
}



// FUNCTION 145905f92 FUN_145905f92 body=111 status=ok
// SIG undefined FUN_145905f92(void)

void FUN_145905f92(undefined8 *param_1,undefined8 *param_2)

{
  if ((*(byte *)(param_1 + 10) < *(byte *)(param_2 + 10)) ||
     (*(char *)((longlong)param_1 + 0x51) == '\0')) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    param_1[4] = param_2[4];
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    FUN_144a7bb84(param_1 + 6,param_2 + 6);
    FUN_144a82394(param_1 + 9,param_2 + 9);
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  }
  return;
}



// FUNCTION 145906002 FUN_145906002 body=143 status=ok
// SIG undefined FUN_145906002(void)

void FUN_145906002(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145906092 FUN_145906092 body=120 status=ok
// SIG undefined FUN_145906092(void)

void FUN_145906092(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = param_1 + 0x38;
  cVar3 = FUN_144729dda(lVar1);
  if (cVar3 != '\0') {
    cVar3 = FUN_144729dda(param_1 + 0x30);
    if (cVar3 != '\0') {
      uVar2 = FUN_14479d2ce(lVar1);
      FUN_140545fa2(uVar2);
      lVar4 = FUN_14479d2ce(param_1 + 0x30);
      (**(code **)(*(longlong *)(lVar4 + 0x3b60) + 0x70))(lVar4 + 0x3b60,1,1);
      uVar2 = FUN_14479d2ce(lVar1);
      FUN_14590610a(uVar2,0);
      return;
    }
  }
  return;
}



// FUNCTION 14590610a FUN_14590610a body=175 status=ok
// SIG undefined FUN_14590610a(void)

void FUN_14590610a(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xf40) != 0) {
    cVar1 = FUN_1459061ba(param_1 + 0x3910,param_2);
    if (cVar1 != '\0') {
      FUN_141347200(*(longlong *)(param_1 + 0xf40) + 0x60e8,0xff,0,0);
      uVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xf40) + 0x3b38) + 0x18))
                        (*(longlong *)(param_1 + 0xf40) + 0x3b38);
      FUN_140cbde20(uVar2,0);
      FUN_141347152(*(undefined8 *)(param_1 + 0xf40),0);
    }
  }
  if (*(byte *)(param_1 + 0x178) < 3) {
    cVar1 = FUN_1459061ba(param_1 + 0x3910,param_2);
    if (cVar1 != '\0') {
      FUN_145906222(param_1,param_2);
    }
  }
  FUN_1459061ec(param_1 + 0x3910,param_2);
  return;
}



// FUNCTION 1459061ba FUN_1459061ba body=49 status=ok
// SIG undefined FUN_1459061ba(void)

ulonglong FUN_1459061ba(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_14590644c();
  uVar2 = FUN_141347176(param_1,uVar1);
  if ((char)uVar1 == '\0') {
    uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),*(undefined1 *)(param_1 + 0xa8)) ^ 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1459061ec FUN_1459061ec body=54 status=ok
// SIG undefined FUN_1459061ec(void)

void FUN_1459061ec(undefined8 param_1)

{
  char cVar1;
  
  FUN_1412e9410(param_1,1);
  cVar1 = FUN_1459061ba(param_1,0);
  if (cVar1 != '\0') {
    FUN_14590627e();
    return;
  }
  FUN_1412e9410(param_1,0);
  return;
}



// FUNCTION 145906222 FUN_145906222 body=91 status=ok
// SIG undefined FUN_145906222(void)

void FUN_145906222(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadc08);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590627e FUN_14590627e body=300 status=ok
// SIG undefined FUN_14590627e(void)

void FUN_14590627e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  
  if (*(char *)(param_1 + 0x84) != '\0') {
    *(undefined1 *)(param_1 + 0x84) = 0;
    FUN_1459063aa(param_1 + 0x28,0);
  }
  lVar3 = *(longlong *)(param_1 + 0x128);
  if ((((lVar3 == 0) || (*(char *)(lVar3 + 0x68) != '\x01')) || (*(char *)(lVar3 + 0x69) != '\x01'))
     || (*(char *)(lVar3 + 0x6a) == '\0')) {
    FUN_141347266(param_1);
    lVar3 = *(longlong *)(param_1 + 0x128);
    if (lVar3 == 0) {
      return;
    }
    if (*(char *)(lVar3 + 0x68) != '\x01') {
      return;
    }
    if (*(char *)(lVar3 + 0x69) != '\x01') {
      return;
    }
    if (*(char *)(lVar3 + 0x6a) != '\x01') {
      return;
    }
  }
  if ((*(longlong *)(param_1 + 0x88) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x88) + 8) >> 0x1e & 1) == 0)) {
    if ((*(longlong *)(param_1 + 0x90) == 0) ||
       ((*(char *)(*(longlong *)(param_1 + 0x90) + 0x178) != '\x03' ||
        (*(char *)(param_1 + 0x170) == '\0')))) {
      *(undefined8 *)(param_1 + 0x128) = 0;
      plVar4 = *(longlong **)(param_1 + 0x130);
      if (plVar4 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x130) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001459063a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar4 + 0x10))(plVar4);
            return;
          }
        }
      }
    }
    return;
  }
  if (((*(longlong *)(param_1 + 0x90) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x90) + 0x178) == '\x03')) &&
     ((*(char *)(param_1 + 0x86) != '\x01' || (cVar5 = FUN_1459061ba(param_1,0), cVar5 != '\0')))) {
    FUN_14134776c(param_1);
  }
  FUN_1412e9410(param_1,0);
  return;
}



// FUNCTION 1459063aa FUN_1459063aa body=162 status=ok
// SIG undefined FUN_1459063aa(void)

void FUN_1459063aa(longlong *param_1,undefined4 param_2)

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
        goto LAB_145906437;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145906437:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14590644c FUN_14590644c body=1553 status=ok
// SIG undefined FUN_14590644c(void)

ulonglong FUN_14590644c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined7 uVar14;
  ulonglong uVar12;
  uint *puVar13;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  int iStack_8c;
  longlong local_88;
  short local_34 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar13 = &local_98;
  FUN_140a9b590(param_1,puVar13,1);
  lVar10 = CONCAT44(iStack_8c,local_90);
  if (lVar10 == 0) {
    uVar9 = FUN_14037df6e();
    lVar10 = FUN_14477b664(uVar9);
    local_90 = (undefined4)lVar10;
    iStack_8c = (int)((ulonglong)lVar10 >> 0x20);
  }
  if (local_88 == 0) {
    if ((((CONCAT44(uStack_94,local_98) != 0) && (lVar10 != 0)) &&
        (puVar13 = *(uint **)(lVar10 + 0xb8), puVar13 != (uint *)0x0)) &&
       (cVar4 = (**(code **)(*(longlong *)puVar13 + 0x108))(puVar13), cVar4 != '\0')) {
      uVar9 = (**(code **)(*(longlong *)puVar13 + 0x110))(puVar13);
      lVar10 = FUN_144aff482(uVar9,&local_98);
      if (lVar10 != 0) goto LAB_145906498;
    }
    uVar12 = CONCAT71((int7)((ulonglong)puVar13 >> 8),1);
    goto LAB_14590688a;
  }
LAB_145906498:
  puVar13 = &local_98;
  FUN_1411cf6d8(param_1,puVar13,1);
  lVar10 = CONCAT44(iStack_8c,local_90);
  if (lVar10 == 0) {
    uVar9 = FUN_140aff5aa();
    lVar10 = FUN_14477b664(uVar9);
    local_90 = (undefined4)lVar10;
    iStack_8c = (int)((ulonglong)lVar10 >> 0x20);
  }
  if (local_88 == 0) {
    if (((CONCAT44(uStack_94,local_98) != 0) && (lVar10 != 0)) &&
       ((puVar13 = *(uint **)(lVar10 + 0xb8), puVar13 != (uint *)0x0 &&
        (cVar4 = (**(code **)(*(longlong *)puVar13 + 0x108))(puVar13), cVar4 != '\0')))) {
      uVar9 = (**(code **)(*(longlong *)puVar13 + 0x110))(puVar13);
      lVar10 = FUN_144aff482(uVar9,&local_98);
      if (lVar10 != 0) goto LAB_1459064c4;
    }
    uVar12 = CONCAT71((int7)((ulonglong)puVar13 >> 8),2);
    goto LAB_14590688a;
  }
LAB_1459064c4:
  lVar6 = FUN_140a9a328(param_1);
  lVar10 = *(longlong *)(param_1 + 0x90);
  if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x65) & 2) != 0)) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(longlong *)(lVar10 + 0xf48);
  }
  uVar14 = (undefined7)((ulonglong)lVar6 >> 8);
  if (lVar6 != 0) {
    if (*(longlong *)(lVar6 + 0x170) != 0) {
      lVar7 = FUN_140425b9a();
      lVar8 = *(longlong *)(lVar6 + 0x170);
      if ((((lVar8 != 0) && (lVar7 != 0)) && (lVar2 = *(longlong *)(lVar8 + 0x10), lVar2 != 0)) &&
         (((*(int *)(lVar7 + 0x38) <= *(int *)(lVar2 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30)) && (*(char *)(lVar8 + 0x733) != '\x01')))) {
        uVar12 = CONCAT71(uVar14,5);
        goto LAB_14590688a;
      }
    }
    if ((*(longlong *)(lVar6 + 0x30) != 0) &&
       (lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x2b0), lVar8 != 0)) {
      lVar7 = FUN_140a99ecc();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30 &&
          (*(char *)(lVar8 + 0x6a0) != '\x01')))) {
        uVar12 = CONCAT71(uVar14,6);
        goto LAB_14590688a;
      }
    }
    cVar4 = FUN_144a80e00(lVar6);
    if (cVar4 == '\0') {
      lVar8 = FUN_1411cfb7f();
      cVar4 = FUN_140114204(lVar8 + 0x80);
      if (cVar4 != '\0') {
        local_98 = local_98 & 0xffffff00;
        uStack_94 = 0;
        local_90 = 0;
        iStack_8c = 0;
        lVar7 = FUN_140149a73(lVar6,0);
        if (lVar7 != 0) {
          FUN_14039fc7b(lVar8 + 0x80,&local_98,lVar7,0);
        }
        if ((local_98 & 0xff) == 1) {
          if (iStack_8c == 0) {
LAB_145906914:
            uVar12 = CONCAT71(uVar14,7);
            goto LAB_14590688a;
          }
        }
        else if (((local_98 & 0xff) != 0) && (cVar4 = FUN_140321d1a(&local_98), cVar4 == '\0'))
        goto LAB_145906914;
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x88) != 0) &&
      ((*(uint *)(*(longlong *)(param_1 + 0x88) + 8) >> 0x1e & 1) == 0)) &&
     (cVar4 = FUN_1449ce97a(), cVar4 != '\0')) {
    uVar12 = CONCAT71(uVar14,8);
    goto LAB_14590688a;
  }
  lVar6 = FUN_1400f6e0c(lVar6);
  if (lVar6 == 0) {
    uVar12 = CONCAT71(uVar14,4);
    goto LAB_14590688a;
  }
  lVar6 = *(longlong *)(lVar6 + 0x68);
  uVar12 = CONCAT71(uVar14,4);
  if (((lVar6 == 0) || (FUN_140d27df6(lVar6,local_34), local_34[0] < 0)) ||
     (iVar5 = FUN_1402d8968(lVar6,local_34), iVar5 != 0xb)) goto LAB_14590688a;
  lVar6 = param_1 + 0xb0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar6 = *(longlong *)(param_1 + 0xc0);
  }
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    lVar8 = 0;
    do {
      uVar12 = CONCAT71((int7)(uVar12 >> 8),0xd);
      if (*(longlong *)(lVar6 + lVar8) == DAT_14cbe7020) goto LAB_14590688a;
      lVar8 = lVar8 + 8;
    } while ((longlong)*(int *)(param_1 + 200) * 8 != lVar8);
  }
  if (lVar10 != 0) {
    lVar6 = (**(code **)(*(longlong *)(lVar10 + 0x3c20) + 0x18))(lVar10 + 0x3c20);
    uVar14 = (undefined7)(uVar12 >> 8);
    if (((lVar6 != 0) && (*(char *)(lVar6 + 0x28) != '\0')) ||
       ((*(longlong *)(param_1 + 0x90) != 0 &&
        (*(char *)(*(longlong *)(param_1 + 0x90) + 0x39b8) != '\0')))) {
      uVar12 = CONCAT71(uVar14,0xc);
      goto LAB_14590688a;
    }
    plVar3 = *(longlong **)(&DAT_00006850 + lVar10);
    if (plVar3 != (longlong *)0x0) {
      cVar4 = FUN_144a80e0c(plVar3);
      uVar12 = CONCAT71(uVar14,10);
      if ((cVar4 != '\0') ||
         (((((char)plVar3[0x220] == '\n' && (plVar3[0x22] != 0)) ||
           (cVar4 = FUN_140ed89ca(plVar3), cVar4 != '\0')) ||
          ((cVar4 = (**(code **)(*(longlong *)(lVar10 + 0x3b28) + 0x40))(lVar10 + 0x3b28),
           cVar4 != '\0' || (cVar4 = (**(code **)(*plVar3 + 0xf38))(plVar3), cVar4 != '\0'))))))
      goto LAB_14590688a;
      uVar9 = (**(code **)(*(longlong *)(lVar10 + 0x3b38) + 0x18))(lVar10 + 0x3b38);
      cVar4 = FUN_140226b70(uVar9);
      if (cVar4 != '\0') goto LAB_14590688a;
      plVar1 = (longlong *)(lVar10 + 0x3b48);
      lVar6 = (**(code **)(*(longlong *)(lVar10 + 0x3b48) + 0x28))(plVar1);
      if ((((lVar6 != 0) &&
           (lVar6 = (**(code **)(*plVar1 + 0x28))(plVar1), *(char *)(lVar6 + 0x23) == '\x01')) &&
          (cVar4 = (**(code **)(*plVar1 + 0x60))(plVar1), cVar4 != '\0')) ||
         (((((char)plVar3[0x23e] != '\0' || ((char)plVar3[0x36e] != '\0')) ||
           (uVar12 = CONCAT71(uVar14,0xb), *(char *)(lVar10 + 0x73eb) == '\x01')) ||
          ((((&DAT_000073ed)[lVar10] == '\x01' || ((*(byte *)(lVar10 + 0x73e9) & 1) != 0)) ||
           (*(char *)(lVar10 + 0x5d30) != '\0')))))) goto LAB_14590688a;
    }
  }
  uVar14 = (undefined7)(uVar12 >> 8);
  if ((*(longlong *)(param_1 + 0x90) == 0) || (cVar4 = FUN_14134724a(), cVar4 == '\0')) {
    if (lVar10 == 0) {
      if (*(char *)(param_1 + 0x84) != '\0') {
LAB_145906a4e:
        uVar12 = CONCAT71(uVar14,3);
        goto LAB_14590688a;
      }
    }
    else {
      if (*(char *)(lVar10 + 0x1990) != '\0') goto LAB_14590692c;
      if (*(char *)(param_1 + 0x84) != '\0') goto LAB_145906a4e;
      puVar11 = &DAT_14c846480;
      if (*(longlong *)(lVar10 + 0x1c8) != 0) {
        puVar11 = (undefined8 *)(*(longlong *)(lVar10 + 0x1c8) + 0x240);
      }
      cVar4 = FUN_140a99fb2(param_1,puVar11);
      uVar12 = CONCAT71(uVar14,0xf);
      if (cVar4 != '\0') goto LAB_14590688a;
      lVar10 = *(longlong *)(param_1 + 0x128);
      if ((((lVar10 != 0) && (*(char *)(lVar10 + 0x68) == '\x01')) &&
          (*(char *)(lVar10 + 0x69) == '\x01')) && (*(char *)(lVar10 + 0x6a) == '\x01')) {
        FUN_140a9a478(param_1,&local_98);
        cVar4 = FUN_140a99fb2(param_1,&local_98);
        if (cVar4 != '\0') goto LAB_14590688a;
      }
    }
    uVar12 = 0;
  }
  else {
LAB_14590692c:
    uVar12 = CONCAT71(uVar14,0xe);
  }
LAB_14590688a:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 145906a5e FUN_145906a5e body=240 status=ok
// SIG undefined FUN_145906a5e(void)

void FUN_145906a5e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1401c3ca6();
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    FUN_145906d2c(&local_30);
    FUN_145906b50(lVar1 + 0x203,param_1,local_30);
    FUN_145906c74(&local_38);
    FUN_145906be2(lVar1 + 0x204,param_1,local_38);
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    FUN_140d0a558(lVar1,&local_48);
    lVar1 = (longlong)(int)uStack_40;
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        FUN_148d02d20(param_1);
        lVar2 = lVar2 + 8;
      } while (lVar1 * 8 != lVar2);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145906b50 FUN_145906b50 body=145 status=ok
// SIG undefined FUN_145906b50(void)

void FUN_145906b50(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_140649f3e(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x203,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145906be2 FUN_145906be2 body=145 status=ok
// SIG undefined FUN_145906be2(void)

void FUN_145906be2(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_140e36bbc(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x204,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145906c74 FUN_145906c74 body=183 status=ok
// SIG undefined FUN_145906c74(void)

undefined8 * FUN_145906c74(undefined8 *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68 [8];
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc6c38) {
    FUN_144b3d300(&DAT_14cbc6c38);
    if (DAT_14cbc6c38 == -1) {
      pwVar2 = L"OnActorExitedGlideModifierVolume";
      puVar3 = local_68;
      for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      local_28 = 0;
      FUN_1446f470e(&DAT_14cbc6c30,local_68,1);
      _Init_thread_footer(&DAT_14cbc6c38);
    }
  }
  *param_1 = DAT_14cbc6c30;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145906d2c FUN_145906d2c body=184 status=ok
// SIG undefined FUN_145906d2c(void)

undefined8 * FUN_145906d2c(undefined8 *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68 [8];
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc6c28) {
    FUN_144b3d300(&DAT_14cbc6c28);
    if (DAT_14cbc6c28 == -1) {
      pwVar2 = L"OnActorEnteredGlideModifierVolume";
      puVar3 = local_68;
      for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      local_28 = 0x65;
      FUN_1446f470e(&DAT_14cbc6c20,local_68,1);
      _Init_thread_footer(&DAT_14cbc6c28);
    }
  }
  *param_1 = DAT_14cbc6c20;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145906df4 FUN_145906df4 body=40 status=ok
// SIG undefined FUN_145906df4(void)

undefined8 FUN_145906df4(undefined8 param_1,int param_2)

{
  FUN_145906e1c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145906e1c FUN_145906e1c body=73 status=ok
// SIG undefined FUN_145906e1c(void)

void FUN_145906e1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0abd00;
  param_1[9] = 0;
  param_1[10] = 0xffffffffffffffff;
  FUN_141347b7f(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145906e66 FUN_145906e66 body=53 status=ok
// SIG undefined FUN_145906e66(void)

void FUN_145906e66(longlong *param_1)

{
  FUN_145906e9c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145906e9c FUN_145906e9c body=88 status=ok
// SIG undefined FUN_145906e9c(void)

void FUN_145906e9c(longlong param_1)

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



// FUNCTION 145906ef4 FUN_145906ef4 body=53 status=ok
// SIG undefined FUN_145906ef4(void)

void FUN_145906ef4(longlong *param_1)

{
  FUN_145906f2a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145906f2a FUN_145906f2a body=88 status=ok
// SIG undefined FUN_145906f2a(void)

void FUN_145906f2a(longlong param_1)

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



// FUNCTION 145906f82 FUN_145906f82 body=35 status=ok
// SIG undefined FUN_145906f82(void)

void FUN_145906f82(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  if (param_4 == '\0') {
    FUN_145906fa6();
    return;
  }
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    lVar1 = 0;
  }
  FUN_146ef195c(lVar1);
  return;
}



// FUNCTION 145906fa6 FUN_145906fa6 body=122 status=ok
// SIG undefined FUN_145906fa6(void)

void FUN_145906fa6(longlong param_1,double *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x40);
  local_20 = 0.0;
  if ((lVar1 != 0) && (1 < *(byte *)(lVar1 + 0x90))) {
    local_20 = *(double *)(lVar1 + 0x148);
  }
  local_10 = param_2[2] * local_20;
  local_18 = param_2[1] * local_20;
  local_20 = local_20 * *param_2;
  FUN_145907022();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145907022 FUN_145907022 body=217 status=ok
// SIG undefined FUN_145907022(void)

void FUN_145907022(undefined8 param_1,double *param_2,double *param_3)

{
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14133d41e(&local_58,param_1);
  local_60 = (*param_3 - local_58) * param_2[1] - *param_2 * (param_3[1] - local_50);
  local_68 = (param_3[2] - local_48) * *param_2 - param_2[2] * (*param_3 - local_58);
  local_70 = (param_3[1] - local_50) * param_2[2] - (param_3[2] - local_48) * param_2[1];
  FUN_140e0d8e0(param_1,param_2);
  FUN_141347b9c(param_1,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459070fc FUN_1459070fc body=112 status=ok
// SIG undefined FUN_1459070fc(void)

void FUN_1459070fc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_141348142();
  if (param_2 != 0) {
    lVar1 = FUN_140d53794();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      *(longlong *)(param_1 + 0x1ec0) = param_2;
      FUN_14590716c(param_2,param_1 + 0x1c60);
      return;
    }
  }
  return;
}



// FUNCTION 14590716c FUN_14590716c body=100 status=ok
// SIG undefined FUN_14590716c(void)

void FUN_14590716c(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1407abeca(&local_28);
  *(undefined4 *)(param_1 + 0x178) = local_28;
  *(undefined4 *)(param_1 + 0x17c) = uStack_24;
  *(undefined4 *)(param_1 + 0x180) = uStack_20;
  *(undefined4 *)(param_1 + 0x184) = uStack_1c;
  if (*(char *)(param_1 + 0x189) != *(char *)(param_1 + 0x188)) {
    FUN_140cc5d3a(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459071d2 FUN_1459071d2 body=40 status=ok
// SIG undefined FUN_1459071d2(void)

undefined8 FUN_1459071d2(undefined8 param_1,int param_2)

{
  FUN_1459071fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459071fa FUN_1459071fa body=73 status=ok
// SIG undefined FUN_1459071fa(void)

void FUN_1459071fa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd39620;
  plVar3 = (longlong *)param_1[0xb];
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
  FUN_145907244(param_1);
  return;
}



// FUNCTION 145907244 FUN_145907244 body=101 status=ok
// SIG undefined FUN_145907244(void)

void FUN_145907244(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd39270;
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
  FUN_1459072a9(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459072a9 FUN_1459072a9 body=40 status=ok
// SIG undefined FUN_1459072a9(void)

void FUN_1459072a9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14953e150(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 1459072da FUN_1459072da body=108 status=ok
// SIG undefined FUN_1459072da(void)

void FUN_1459072da(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145907348();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = FUN_14134816c(param_1,&local_18);
  if (lVar1 != 0) {
    FUN_145907348();
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145907348 FUN_145907348 body=228 status=ok
// SIG undefined FUN_145907348(void)

longlong FUN_145907348(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa90b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_147494582;
    local_40 = &LAB_1458f98d5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/GeometryCollectionEngine",L"GeometryCollectionISMPoolSubSystem",
                  &DAT_14caa90b8,FUN_14632c888);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa90b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590743c FUN_14590743c body=40 status=ok
// SIG undefined FUN_14590743c(void)

undefined8 FUN_14590743c(undefined8 param_1,int param_2)

{
  FUN_145907464();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145907464 FUN_145907464 body=59 status=ok
// SIG undefined FUN_145907464(void)

void FUN_145907464(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbd5090;
  FUN_1457f2ec5(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1410a12b0(param_1);
  return;
}



// FUNCTION 1459074a0 FUN_1459074a0 body=343 status=ok
// SIG undefined FUN_1459074a0(void)

void FUN_1459074a0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1459075f8(param_1,iVar2 != 0,iVar1 != 0,local_34 != 0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459075f8 FUN_1459075f8 body=80 status=ok
// SIG undefined FUN_1459075f8(void)

void FUN_1459075f8(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_3 == '\0') && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_140281b1c(param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 145907648 FUN_145907648 body=168 status=ok
// SIG undefined FUN_145907648(void)

void FUN_145907648(longlong *param_1,ulonglong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((char)param_1[0x2f] == '\x03') {
    uVar4 = (int)(param_2 & 0xff) << 6;
    FUN_1459076f0((longlong)param_1 + (ulonglong)uVar4 + 0x25d0,param_3);
    if (param_1[0x73] != 0) {
      lVar5 = FUN_144a7b4ca();
      lVar1 = param_1[0x73];
      if ((((lVar1 != 0) && (lVar5 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)))) {
        FUN_140a43188(lVar1,param_2 & 0xffffffff);
      }
    }
    cVar3 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar3 == '\0') {
      *(undefined2 *)(param_1 + (param_2 & 0xff) + 0x4ea) =
           *(undefined2 *)((longlong)param_1 + (ulonglong)uVar4 + 0x2600);
    }
  }
  return;
}



// FUNCTION 1459076f0 FUN_1459076f0 body=44 status=ok
// SIG undefined FUN_1459076f0(void)

void FUN_1459076f0(longlong param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = (int)((float)iVar1 * param_2) + *(int *)(param_1 + 0x30);
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)(param_1 + 0x30) = iVar1;
  FUN_1401861f4();
  return;
}



// FUNCTION 145907728 FUN_145907728 body=215 status=ok
// SIG undefined FUN_145907728(void)

undefined8 * FUN_145907728(undefined8 *param_1)

{
  FUN_145907800();
  *param_1 = &PTR_FUN_14b5b49f0;
  param_1[5] = &PTR_LAB_14b5b5400;
  param_1[6] = &PTR_LAB_14b5b5440;
  param_1[0x55] = &PTR_LAB_14b5b5490;
  param_1[0x56] = &PTR_LAB_14b5b5510;
  param_1[0x57] = &PTR_LAB_14b5b5520;
  param_1[0xce] = &PTR_FUN_14a8bd110;
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  param_1[0xd1] = 0;
  *(undefined4 *)(param_1 + 0xd2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x694) = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  FUN_140056680(param_1 + 0xd5,&DAT_149e063b2);
  *(undefined4 *)(param_1 + 0xd7) = 0x44bb8000;
  param_1[0xce] = &PTR_FUN_14b5b68a0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  return param_1;
}



// FUNCTION 145907800 FUN_145907800 body=184 status=ok
// SIG undefined FUN_145907800(void)

undefined8 * FUN_145907800(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14a8ae410;
  param_1[5] = &PTR_LAB_14a8aee20;
  param_1[6] = &PTR_LAB_14a8aee60;
  param_1[0x55] = &PTR_LAB_14a8aeeb0;
  param_1[0x56] = &PTR_LAB_14a8aef30;
  param_1[0x57] = &PTR_LAB_14a8aef40;
  param_1[0xc4] = &PTR_FUN_14a8bd110;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined1 *)((longlong)param_1 + 0x644) = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  FUN_140056680(param_1 + 0xcb,&DAT_149e063b2);
  *(undefined4 *)(param_1 + 0xcd) = 0x44bb8000;
  return param_1;
}



// FUNCTION 1459078b8 FUN_1459078b8 body=396 status=ok
// SIG undefined FUN_1459078b8(void)

void FUN_1459078b8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,600);
  *param_2 = &PTR_FUN_14b937870;
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
  *(undefined4 *)(param_2 + 0xb) = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0xf00000d0;
  param_2[0x13] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined8 *)((longlong)param_2 + 0xac) = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x10c) = 0;
  *(undefined1 *)(param_2 + 0x1b) = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined1 *)(param_2 + 0x21) = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x27] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  *(undefined4 *)(param_2 + 0x28) = 0x34001;
  param_2[0x29] = 0;
  *(undefined4 *)(param_2 + 0x2a) = 0x3f800000;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  *(undefined4 *)(param_2 + 0x31) = 0xf00000d0;
  param_2[0x32] = 0;
  *(undefined4 *)(param_2 + 0x33) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x35) = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0xf00000d0;
  param_2[0x3d] = 0;
  *(undefined4 *)(param_2 + 0x3e) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x47) = 0xf00000d0;
  param_2[0x48] = 0;
  *(undefined4 *)(param_2 + 0x49) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x4a) = 0;
  return;
}



// FUNCTION 145907a46 FUN_145907a46 body=179 status=ok
// SIG undefined FUN_145907a46(void)

bool FUN_145907a46(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 145907b06 FUN_145907b06 body=199 status=ok
// SIG undefined FUN_145907b06(void)

void FUN_145907b06(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_140793434();
  if (lVar1 != 0) {
    lVar1 = FUN_140f7f142(param_1);
    if (lVar1 != 0) {
      FUN_140457ffc(lVar1 + 0x800,param_1);
      if (*(longlong *)(lVar1 + 0x178) != 0) {
        lVar2 = FUN_14041aabe();
        if ((((*(longlong *)(lVar1 + 0x178) != 0) && (lVar2 != 0)) &&
            (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x178) + 0x10), lVar1 != 0)) &&
           ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
             lVar2 + 0x30)))) {
          FUN_140457ffc(&DAT_14cb7df38,param_1);
        }
      }
    }
    local_28 = 0;
    uStack_20 = 0;
    FUN_141348248(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145907bce FUN_145907bce body=423 status=ok
// SIG undefined FUN_145907bce(void)

longlong * FUN_145907bce(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_145907ca5:
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b97d330;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = &LAB_1408624a6;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_145907ca5;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b97d330;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_1408624a6;
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
  return param_1;
}



// FUNCTION 145907d76 FUN_145907d76 body=179 status=ok
// SIG undefined FUN_145907d76(void)

void FUN_145907d76(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x288) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x280);
    lVar4 = (longlong)*(int *)(param_1 + 0x288) << 3;
    do {
      cVar2 = FUN_144729dda(lVar3);
      if (cVar2 != '\0') {
        uVar1 = FUN_14479d2ce(lVar3);
        FUN_148cfdfb0(uVar1,param_1);
      }
      lVar3 = lVar3 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x288) = 0;
  if (*(int *)(param_1 + 0x28c) < 0) {
    FUN_148d0a5f4(param_1 + 0x280);
  }
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (lVar3 != 0) {
    FUN_145907e2a(lVar3 + 0x204,param_1);
    FUN_140c2cbec(lVar3 + 0x203,param_1);
  }
  FUN_1401c3216(param_1,param_2);
  return;
}



// FUNCTION 145907e2a FUN_145907e2a body=96 status=ok
// SIG undefined FUN_145907e2a(void)

void FUN_145907e2a(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 == '\x01') {
    FUN_140e36bbc(param_1,&local_28);
    cVar1 = FUN_140819828(param_1 + -0x204,local_28,param_2);
    *param_1 = cVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145907e9a FUN_145907e9a body=40 status=ok
// SIG undefined FUN_145907e9a(void)

undefined8 FUN_145907e9a(undefined8 param_1,int param_2)

{
  FUN_145907ec2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145907ec2 FUN_145907ec2 body=234 status=ok
// SIG undefined FUN_145907ec2(void)

void FUN_145907ec2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a16f910;
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  FUN_145907fd6(param_1 + 0x4d);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14590800e(param_1 + 0x43);
  FUN_145907fac(param_1[0x41],*(undefined4 *)(param_1 + 0x42));
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x3f];
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
  FUN_141054840(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145907fac FUN_145907fac body=41 status=ok
// SIG undefined FUN_145907fac(void)

void FUN_145907fac(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_141054840(param_1);
    param_1 = param_1 + 0x1d8;
  }
  return;
}



// FUNCTION 145907fd6 FUN_145907fd6 body=55 status=ok
// SIG undefined FUN_145907fd6(void)

void FUN_145907fd6(longlong *param_1)

{
  FUN_145908046(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14590800e FUN_14590800e body=55 status=ok
// SIG undefined FUN_14590800e(void)

void FUN_14590800e(longlong *param_1)

{
  FUN_145908212(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145908046 FUN_145908046 body=345 status=ok
// SIG undefined FUN_145908046(void)

void FUN_145908046(longlong *param_1,int param_2)

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
      FUN_141054840((longlong)iStack_54 * 0x1e0 + *local_70);
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
    FUN_1459081a2(param_1,param_2);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459081a2 FUN_1459081a2 body=112 status=ok
// SIG undefined FUN_1459081a2(void)

void FUN_1459081a2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1e0,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x1e0)) {
      uVar2 = uVar1 / 0x1e0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x1e0,8);
  }
  return;
}



// FUNCTION 145908212 FUN_145908212 body=374 status=ok
// SIG undefined FUN_145908212(void)

void FUN_145908212(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
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
      plVar2 = (longlong *)(*local_78 + (longlong)iStack_5c * 0x1f0);
      FUN_141054840(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1403c4d14(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14590838a FUN_14590838a body=492 status=ok
// SIG undefined FUN_14590838a(void)

longlong * FUN_14590838a(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined1 local_79;
  longlong *local_78;
  longlong *local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_2;
  lVar5 = (**(code **)(*(longlong *)*param_3 + 8))();
  if (lVar5 != 0) {
    lVar5 = FUN_14497e828(lVar5);
    if (lVar5 != 0) {
      lVar5 = FUN_14021f720(lVar5);
      if (lVar5 != 0) {
        iVar3 = *(int *)(lVar5 + 0xec);
        plVar6 = (longlong *)FUN_14001cc68(0x48,0x10);
        plVar6[1] = (longlong)&DAT_100000001;
        *plVar6 = (longlong)&PTR_FUN_14b99f000;
        plVar1 = plVar6 + 2;
        plVar6[3] = 0;
        plVar6[4] = 0;
        *(undefined8 *)((longlong)plVar6 + 0x24) = 0;
        *(undefined8 *)((longlong)plVar6 + 0x2c) = 0;
        *(char *)(plVar6 + 7) = (iVar3 != 0) * '\x02';
        plVar6[2] = (longlong)&PTR_FUN_14b99f020;
        *(undefined1 *)(plVar6 + 8) = 0;
        local_78 = plVar1;
        local_70 = plVar6;
        FUN_14590857a(&local_78,plVar1);
        local_79 = 1;
        local_68 = &LAB_145acaa68;
        local_60 = 0;
        FUN_141348568(local_58,&local_78,&local_68,&local_79);
        FUN_1448b6402(lVar5 + 0x40,&local_68,local_58);
        FUN_1449db362(local_58);
        local_79 = 0;
        local_68 = &LAB_145acaa68;
        local_60 = 0;
        FUN_141348568(local_58,&local_78,&local_68,&local_79);
        FUN_1448b6402(lVar5 + 0x58,&local_68,local_58);
        FUN_1449db362(local_58);
        plVar4 = local_70;
        *local_88 = (longlong)plVar1;
        local_88[1] = (longlong)plVar6;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_70 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_70)(local_70);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
      }
    }
  }
  *local_88 = 0;
  local_88[1] = 0;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return local_88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590857a FUN_14590857a body=162 status=ok
// SIG undefined FUN_14590857a(void)

void FUN_14590857a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1459085b9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1459085b9;
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
LAB_1459085b9:
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
                    /* WARNING: Could not recover jumptable at 0x000145908618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14590861c FUN_14590861c body=176 status=ok
// SIG undefined FUN_14590861c(void)

longlong FUN_14590861c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1d8 [2];
  undefined1 local_1c8 [416];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar1 = FUN_1459086ce(param_2,param_3);
  if (lVar1 == 0) {
    FUN_140056680(local_1d8,param_3);
    local_1e8 = param_1;
    FUN_140d6a722(local_1c8,0,1,local_1d8);
    if (local_1d8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_141628e80(local_1c8,param_2);
    FUN_140d6b5be(local_1c8);
    lVar1 = param_1;
  }
  if ((local_28 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459086ce FUN_1459086ce body=258 status=ok
// SIG undefined FUN_1459086ce(void)

undefined8 FUN_1459086ce(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_158 [32];
  longlong local_138 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_2 == 0) {
LAB_145908767:
    lVar3 = DAT_14c872ce0;
    if (DAT_14c872ce0 != 0) {
      FUN_140056680(local_138,param_1);
      uVar4 = FUN_141348652(lVar3,local_138);
      if (local_138[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_14590879e;
    }
  }
  else {
    FUN_144a81018(local_138,"Windows");
    lVar3 = 0;
    while( true ) {
      uVar1 = *(ushort *)(param_2 + lVar3);
      uVar5 = (uint)uVar1;
      uVar2 = *(ushort *)(local_30 + lVar3);
      uVar7 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14590872c;
        }
        iVar6 = uVar5 - uVar7;
        goto LAB_145908756;
      }
      if (uVar1 == 0) break;
LAB_14590872c:
      lVar3 = lVar3 + 2;
    }
    iVar6 = 0;
LAB_145908756:
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (iVar6 == 0) goto LAB_145908767;
  }
  uVar4 = 0;
LAB_14590879e:
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459087d2 FUN_1459087d2 body=132 status=ok
// SIG undefined FUN_1459087d2(void)

void FUN_1459087d2(longlong param_1,int param_2)

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



// FUNCTION 145908860 FUN_145908860 body=116 status=ok
// SIG undefined FUN_145908860(void)

undefined8 * FUN_145908860(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a7ceec0;
  param_1[5] = &PTR_LAB_14a7cf170;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    lVar2 = FUN_140f5e1c2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1459088d4(param_1,lVar1);
    }
  }
  return param_1;
}



// FUNCTION 1459088d4 FUN_1459088d4 body=344 status=ok
// SIG undefined FUN_1459088d4(void)

void FUN_1459088d4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = param_2;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x38);
    lVar5 = (longlong)*(int *)(param_1 + 0x40) * 0x14;
    do {
      if ((*(longlong *)(param_1 + 0x30) == 0) || (*plVar7 == 0)) {
        *(uint *)(plVar7 + 1) = *(uint *)(plVar7 + 1) | 0x7fffffff;
      }
      else {
        uVar4 = FUN_144a750a0(*(longlong *)(param_1 + 0x30) + 0x50,plVar7);
        *(uint *)(plVar7 + 1) = uVar4 | 0x80000000;
      }
      *(undefined4 *)((longlong)plVar7 + 0xc) = 0xffffffff;
      plVar7 = (longlong *)((longlong)plVar7 + 0x14);
      lVar5 = lVar5 + -0x14;
    } while (lVar5 != 0);
    iVar1 = *(int *)(param_1 + 0x40);
    lVar5 = (longlong)iVar1;
    if (lVar5 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x38);
      iVar14 = 0;
      bVar6 = (~*(uint *)(lVar2 + 8) & 0x7fffffff) == 0;
      iVar11 = 0;
      do {
        lVar9 = (longlong)iVar11;
        iVar3 = iVar11 + 1;
        if (iVar11 + 1 < iVar1) {
          iVar3 = iVar1;
        }
        puVar8 = (uint *)(lVar2 + 0x1c + lVar9 * 0x14);
        iVar12 = iVar11;
        lVar10 = lVar9;
        do {
          lVar10 = lVar10 + 1;
          iVar13 = iVar3;
          if (lVar5 <= lVar10) break;
          uVar4 = *puVar8;
          iVar12 = iVar12 + 1;
          puVar8 = puVar8 + 5;
          iVar13 = iVar12;
        } while (bVar6 == ((~uVar4 & 0x7fffffff) == 0));
        if (bVar6 == false) {
          if (iVar14 != iVar11) {
            memmove((void *)(lVar2 + (longlong)iVar14 * 0x14),(void *)(lVar2 + lVar9 * 0x14),
                    (longlong)(iVar13 - iVar11) * 0x14);
          }
          iVar14 = iVar14 + (iVar13 - iVar11);
        }
        bVar6 = (bool)(bVar6 ^ 1);
        iVar11 = iVar13;
      } while (lVar10 < lVar5);
      *(int *)(param_1 + 0x40) = iVar14;
    }
  }
  return;
}



// FUNCTION 145908a2c FUN_145908a2c body=104 status=ok
// SIG undefined FUN_145908a2c(void)

void FUN_145908a2c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (2 < *(byte *)(param_1 + 0x178)) {
    lVar2 = FUN_1447210f0(param_1);
    if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x178), plVar1 != (longlong *)0x0)) {
      lVar2 = FUN_140cbc144();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        (**(code **)(*plVar1 + 0x738))(plVar1,param_1);
      }
    }
  }
  FUN_145908a94(param_1);
  return;
}



// FUNCTION 145908a94 FUN_145908a94 body=276 status=ok
// SIG undefined FUN_145908a94(void)

void FUN_145908a94(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  float fVar6;
  
  FUN_141348dd0();
  lVar3 = FUN_1447210f0(param_1);
  plVar1 = *(longlong **)(lVar3 + 0x178);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x688))(plVar1,param_1);
  }
  *(undefined4 *)(param_1 + 0x448) = 4;
  uVar2 = FUN_141348de4();
  FUN_141348e90(param_1,uVar2);
  if (*(byte *)(param_1 + 0x178) < 3) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x168);
  if (lVar3 != 0) {
    lVar4 = FUN_14490fee6();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = FUN_144a75eb4();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) != lVar4 + 0x30)) {
        bVar5 = 8;
      }
      else {
        bVar5 = 0;
      }
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x10);
      *(byte *)(param_1 + 0x39a) = *(byte *)(param_1 + 0x39a) & 0xf7 | bVar5;
      goto LAB_145908b66;
    }
  }
  lVar3 = 0;
LAB_145908b66:
  if (plVar1 != (longlong *)0x0) {
    fVar6 = (float)(**(code **)(*plVar1 + 0x660))(plVar1,lVar3);
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x13);
    *(int *)(param_1 + 0x39c) = (int)fVar6;
  }
  return;
}



// FUNCTION 145908ba8 FUN_145908ba8 body=9 status=ok
// SIG undefined FUN_145908ba8(void)

void FUN_145908ba8(longlong param_1)

{
  FUN_145908bb2(param_1 + 0x10);
  return;
}



// FUNCTION 145908bb2 FUN_145908bb2 body=91 status=ok
// SIG undefined FUN_145908bb2(void)

void FUN_145908bb2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4e0b70;
  param_1[4] = &PTR_FUN_14b4e0b98;
  FUN_1449db362(param_1 + 10);
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



// FUNCTION 145908c0e FUN_145908c0e body=56 status=ok
// SIG undefined FUN_145908c0e(void)

void FUN_145908c0e(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b4e4a10;
  FUN_144760e21(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145908c4c FUN_145908c4c body=228 status=ok
// SIG undefined FUN_145908c4c(void)

longlong FUN_145908c4c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba47a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140940982;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1465be858;
    local_38 = &LAB_148bc9ec3;
    local_40 = &LAB_145d0c075;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x10d0;
    FUN_14081cfa3(L"/Script/OakGame",L"HeavyWeaponGadget",&DAT_14cba47a8,&DAT_148bc9ec2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba47a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145908d38 FUN_145908d38 body=228 status=ok
// SIG undefined FUN_145908d38(void)

longlong FUN_145908d38(void)

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
  if (DAT_14cbb3a50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14656c1e0;
    local_38 = &LAB_148c5d3dd;
    local_40 = FUN_1458f78ac;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x1f0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIEnhancedInputComponent",&DAT_14cbb3a50,&DAT_148c5d3dc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb3a50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145908e24 FUN_145908e24 body=221 status=ok
// SIG undefined FUN_145908e24(void)

longlong FUN_145908e24(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9649c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14690ca37;
    local_40 = FUN_146277299;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/AnimationCore",L"AnimationDataSourceRegistry",&DAT_14c9649c0,
                  &DAT_14690ca36);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9649c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145908f08 FUN_145908f08 body=221 status=ok
// SIG undefined FUN_145908f08(void)

longlong FUN_145908f08(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99d338 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146fdd891;
    local_40 = FUN_146293858;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/ClothingSystemRuntimeInterface",L"ClothingInteractor",&DAT_14c99d338,
                  &DAT_146fdd890);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99d338;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145908fec FUN_145908fec body=221 status=ok
// SIG undefined FUN_145908fec(void)

longlong FUN_145908fec(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a5938 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470d1d7b;
    local_40 = FUN_1462aeff7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxScript",&DAT_14c9a5938,&DAT_1470d1d7a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5938;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459090d0 FUN_1459090d0 body=221 status=ok
// SIG undefined FUN_1459090d0(void)

longlong FUN_1459090d0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9ab4b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470f4c47;
    local_40 = &LAB_1459a564f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxPhysics",L"DBehaviorManager",&DAT_14c9ab4b8,&DAT_1470f4c46);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ab4b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459091b4 FUN_1459091b4 body=221 status=ok
// SIG undefined FUN_1459091b4(void)

longlong FUN_1459091b4(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa1628 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14744b0d7;
    local_40 = FUN_14632205b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/Foliage",L"ProceduralFoliageSpawner",&DAT_14caa1628,FUN_146322034);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1628;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145909298 FUN_145909298 body=221 status=ok
// SIG undefined FUN_145909298(void)

longlong FUN_145909298(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab1ce8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147520268;
    local_40 = FUN_14633929e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneCustomBinding",&DAT_14cab1ce8,FUN_14633927c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab1ce8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590937c FUN_14590937c body=221 status=ok
// SIG undefined FUN_14590937c(void)

longlong FUN_14590937c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab6c50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1476ca373;
    local_40 = FUN_14634f75f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/UMG",L"WidgetAnimationPlayCallbackProxy",&DAT_14cab6c50,FUN_14634f738);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6c50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145909460 FUN_145909460 body=221 status=ok
// SIG undefined FUN_145909460(void)

longlong FUN_145909460(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac4aa0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147882935;
    local_40 = FUN_146386d1a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"MeshDeformerInstanceSettings",&DAT_14cac4aa0,&DAT_147882934);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac4aa0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145909544 FUN_145909544 body=221 status=ok
// SIG undefined FUN_145909544(void)

longlong FUN_145909544(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac4d10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147884c97;
    local_40 = &LAB_145804073;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"NavAreaBase",&DAT_14cac4d10,&DAT_147884c96);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac4d10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145909628 FUN_145909628 body=221 status=ok
// SIG undefined FUN_145909628(void)

longlong FUN_145909628(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caca490 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478cacd7;
    local_40 = FUN_14639ffba;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"NavigationDataChunk",&DAT_14caca490,&DAT_1478cacd6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caca490;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590970c FUN_14590970c body=221 status=ok
// SIG undefined FUN_14590970c(void)

longlong FUN_14590970c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1dff8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147e9a768;
    local_40 = &LAB_146091dab;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/AIModule",L"AIAsyncTaskBlueprintProxy",&DAT_14cb1dff8,FUN_146425bd4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1dff8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459097f0 FUN_1459097f0 body=221 status=ok
// SIG undefined FUN_1459097f0(void)

longlong FUN_1459097f0(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb27f58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fa4bc9;
    local_40 = FUN_1464506b4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/StateTreeModule",L"StateTreeNodeBlueprintBase",&DAT_14cb27f58,
                  FUN_146450692);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb27f58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459098d4 FUN_1459098d4 body=221 status=ok
// SIG undefined FUN_1459098d4(void)

longlong FUN_1459098d4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb28ad8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fc0a97;
    local_40 = &LAB_145978954;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x330;
    FUN_14081cfa3(L"/Script/TemplateSequence",L"CameraAnimationSequencePlayer",&DAT_14cb28ad8,
                  &DAT_147fc0a96);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb28ad8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459099b8 FUN_1459099b8 body=221 status=ok
// SIG undefined FUN_1459099b8(void)

longlong FUN_1459099b8(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb44810 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14821643b;
    local_40 = FUN_14647d97c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/CommonInput",L"CommonUIInputData",&DAT_14cb44810,&DAT_14821643a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb44810;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145909a9c FUN_145909a9c body=221 status=ok
// SIG undefined FUN_145909a9c(void)

longlong FUN_145909a9c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb46d00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1483e17b9;
    local_40 = FUN_14648611c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Water",L"GerstnerWaterWaveGeneratorBase",&DAT_14cb46d00,FUN_1464860fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb46d00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145909b80 FUN_145909b80 body=221 status=ok
// SIG undefined FUN_145909b80(void)

longlong FUN_145909b80(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4b190 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14843628b;
    local_40 = FUN_14648da1a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoBaseFloatParameterSource",
                  &DAT_14cb4b190,&DAT_14843628a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b190;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145909c64 FUN_145909c64 body=221 status=ok
// SIG undefined FUN_145909c64(void)

longlong FUN_145909c64(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5a220 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486658ef;
    local_40 = FUN_1464c89fe;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 0x10;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxAudioVolumeShapeBase",&DAT_14cb5a220,&DAT_1486658ee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5a220;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145909d48 FUN_145909d48 body=221 status=ok
// SIG undefined FUN_145909d48(void)

longlong FUN_145909d48(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb651a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1487158cf;
    local_40 = &LAB_145c79734;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x180;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillManagedResourceType",&DAT_14cb651a8,&DAT_1487158ce);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb651a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145909e2c FUN_145909e2c body=221 status=ok
// SIG undefined FUN_145909e2c(void)

longlong FUN_145909e2c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb91a28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489f311b;
    local_40 = &LAB_14656ab52;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x140;
    FUN_14081cfa3(L"/Script/GbxUICore",L"GbxUIStateManager",&DAT_14cb91a28,&DAT_1489f311a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb91a28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145909f10 FUN_145909f10 body=221 status=ok
// SIG undefined FUN_145909f10(void)

longlong FUN_145909f10(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb98148 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148ab743b;
    local_40 = FUN_14658880c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GbxNetGame",L"GbxGameLiftServer",&DAT_14cb98148,&DAT_148ab743a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb98148;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145909ff4 FUN_145909ff4 body=221 status=ok
// SIG undefined FUN_145909ff4(void)

longlong FUN_145909ff4(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ca00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b50f81;
    local_40 = FUN_14659b7c8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGMenuManagerFlowCondition",&DAT_14cb9ca00,
                  &DAT_148b50f80);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ca00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590a0d8 FUN_14590a0d8 body=221 status=ok
// SIG undefined FUN_14590a0d8(void)

longlong FUN_14590a0d8(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ca60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b50fa3;
    local_40 = FUN_14659b8eb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGMenuManagerFlowStep",&DAT_14cb9ca60,&DAT_148b50fa2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ca60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590a1bc FUN_14590a1bc body=221 status=ok
// SIG undefined FUN_14590a1bc(void)

longlong FUN_14590a1bc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9e530 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b7238f;
    local_40 = &LAB_145f8bbe2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/BinkMediaPlayer",L"BinkMediaPlayer",&DAT_14cb9e530,FUN_14659ff4c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9e530;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590a2a0 FUN_14590a2a0 body=221 status=ok
// SIG undefined FUN_14590a2a0(void)

longlong FUN_14590a2a0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba79a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148bf6fa9;
    local_40 = &LAB_1461e362f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x7e0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakChallengeManager",&DAT_14cba79a8,&DAT_148bf6fa8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba79a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590a384 FUN_14590a384 body=221 status=ok
// SIG undefined FUN_14590a384(void)

longlong FUN_14590a384(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbfe328 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1490c1b84;
    local_40 = &LAB_146086731;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1a0;
    FUN_14081cfa3(L"/Script/USDClasses",L"UsdAssetCache2",&DAT_14cbfe328,FUN_14667ef44);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbfe328;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590a468 FUN_14590a468 body=221 status=ok
// SIG undefined FUN_14590a468(void)

longlong FUN_14590a468(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbfe3e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1490c2b95;
    local_40 = &LAB_1461494ad;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x290;
    FUN_14081cfa3(L"/Script/USDClasses",L"UsdAssetCache3",&DAT_14cbfe3e0,FUN_14667f318);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbfe3e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590a54c FUN_14590a54c body=221 status=ok
// SIG undefined FUN_14590a54c(void)

longlong FUN_14590a54c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0b2e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492db4f1;
    local_40 = FUN_1467199ab;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/LiveLinkInterface",L"LiveLinkFrameInterpolationProcessor",&DAT_14cc0b2e8
                  ,&DAT_1492db4f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0b2e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590a630 FUN_14590a630 body=221 status=ok
// SIG undefined FUN_14590a630(void)

longlong FUN_14590a630(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0b300 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492db4f5;
    local_40 = FUN_146719a02;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/LiveLinkInterface",L"LiveLinkFramePreProcessor",&DAT_14cc0b300,
                  &DAT_1492db4f4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0b300;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590a714 FUN_14590a714 body=221 status=ok
// SIG undefined FUN_14590a714(void)

longlong FUN_14590a714(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0b5c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492dc56f;
    local_40 = &LAB_14671a73d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/LiveLinkInterface",L"LiveLinkSourceSettings",&DAT_14cc0b5c8,
                  &DAT_1492dc56e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0b5c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590a7f8 FUN_14590a7f8 body=221 status=ok
// SIG undefined FUN_14590a7f8(void)

longlong FUN_14590a7f8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0b9b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492e82fd;
    local_40 = &LAB_14671bf99;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/LiveLinkComponents",L"LiveLinkControllerBase",&DAT_14cc0b9b8,
                  &DAT_1492e82fc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0b9b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590a8dc FUN_14590a8dc body=221 status=ok
// SIG undefined FUN_14590a8dc(void)

longlong FUN_14590a8dc(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0bcc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492ec549;
    local_40 = FUN_14671c929;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/InterchangeCore",L"InterchangeResult",&DAT_14cc0bcc8,&DAT_1492ec548);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0bcc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590a9c0 FUN_14590a9c0 body=221 status=ok
// SIG undefined FUN_14590a9c0(void)

longlong FUN_14590a9c0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc17448 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149457039;
    local_40 = &LAB_146730fb8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xe0;
    FUN_14081cfa3(L"/Script/ComputeFramework",L"ComputeGraph",&DAT_14cc17448,&DAT_149457038);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc17448;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590aaa4 FUN_14590aaa4 body=221 status=ok
// SIG undefined FUN_14590aaa4(void)

longlong FUN_14590aaa4(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc1c690 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1494a83c9;
    local_40 = FUN_1467398f9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusComponentSource",&DAT_14cc1c690,&DAT_1494a83c8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1c690;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590ab88 FUN_14590ab88 body=221 status=ok
// SIG undefined FUN_14590ab88(void)

longlong FUN_14590ab88(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc1e768 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14953f0a1;
    local_40 = FUN_14673f58a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSubSection",&DAT_14cc1e768,
                  &DAT_14953f0a0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1e768;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590ac66 FUN_14590ac66 body=240 status=ok
// SIG undefined FUN_14590ac66(void)

void FUN_14590ac66(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  uVar1 = FUN_14590ad58();
  uVar2 = FUN_144a810c6();
  local_760 = 2;
  local_768 = 1;
  FUN_140021b28(local_750,uVar2,uVar1,param_2);
  while (0 < (int)local_48) {
    puVar3 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar3 = local_750;
    }
    puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar4 = puVar3 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined8 *)
                        (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_48 * 0xe0 + -8) *
                                  0x18 + 8),0,0);
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590ad58 FUN_14590ad58 body=57 status=ok
// SIG undefined FUN_14590ad58(void)

void FUN_14590ad58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab4678 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab4678 = FUN_140002ddd(FUN_14634506f,uVar1,L"MovieScenePreAnimatedMaterialParameters");
  }
  return;
}



// FUNCTION 14590ad92 FUN_14590ad92 body=517 status=ok
// SIG undefined FUN_14590ad92(void)

void FUN_14590ad92(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined **local_b8;
  longlong *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar6 = FUN_14479d2ce(param_1 + 0x28);
  FUN_1402b6034(&local_b8,uVar6);
  if (local_b0 != (longlong *)0x0) {
    iVar5 = (int)local_b0[1];
    do {
      if (iVar5 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_b0[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(local_b0 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar9 = local_b0;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
    if (plVar9 != (longlong *)0x0) {
      if ((local_b8 != (undefined **)0x0) && (*(longlong *)(param_1 + 0x3c0) != 0)) {
        FUN_14480f766(local_b8 + 6);
      }
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  iVar5 = *(int *)(param_1 + 0x118);
  if ((longlong)iVar5 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x110);
    lVar7 = lVar3 + 8;
    do {
      *(undefined8 *)(lVar7 + -8) = 0;
      FUN_140a26446(lVar7);
      uStack_67 = 0;
      local_b0 = (longlong *)0x0;
      uStack_a8 = 0;
      local_b8 = &PTR_FUN_14b1d7d10;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      uStack_77 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_60 = 0;
      uStack_58 = 0;
      FUN_14590af98(lVar7,&local_b8);
      FUN_140beec42(&local_b8);
      lVar8 = lVar7 + 0x68;
      lVar7 = lVar7 + 0x70;
    } while (lVar8 != (longlong)iVar5 * 0x70 + lVar3);
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  FUN_140a26446(param_1 + 0x128);
  uStack_67 = 0;
  local_b0 = (longlong *)0x0;
  uStack_a8 = 0;
  local_b8 = &PTR_FUN_14b1d7d10;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_14590af98(param_1 + 0x128,&local_b8);
  FUN_140beec42(&local_b8);
  FUN_1413491c8(param_1);
  FUN_141349216(param_1);
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14590af98 FUN_14590af98 body=159 status=ok
// SIG undefined FUN_14590af98(void)

longlong FUN_14590af98(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_14590b086(param_1 + 0x20,param_2 + 0x20);
  FUN_14590b038(param_1 + 0x30,param_2 + 0x30);
  FUN_14590b0d6(param_1 + 0x40,param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x58) = 0;
    plVar2 = *(longlong **)(param_2 + 0x60);
    plVar3 = *(longlong **)(param_1 + 0x60);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0x60) = 0;
      *(longlong **)(param_1 + 0x60) = plVar2;
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



// FUNCTION 14590b038 FUN_14590b038 body=78 status=ok
// SIG undefined FUN_14590b038(void)

longlong * FUN_14590b038(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140beecf9(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14590b086 FUN_14590b086 body=80 status=ok
// SIG undefined FUN_14590b086(void)

longlong * FUN_14590b086(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140beed8d(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14590b0d6 FUN_14590b0d6 body=80 status=ok
// SIG undefined FUN_14590b0d6(void)

longlong * FUN_14590b0d6(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140beed42(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14590b126 FUN_14590b126 body=38 status=ok
// SIG undefined FUN_14590b126(void)

undefined8 FUN_14590b126(undefined8 param_1,int param_2)

{
  FUN_14590b14c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14590b14c FUN_14590b14c body=104 status=ok
// SIG undefined FUN_14590b14c(void)

void FUN_14590b14c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x300) = 0;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FUN_1400020a8();
  }
  FUN_1410baed6(param_1 + 0x2b8);
  FUN_140989cc7(*(undefined8 *)(param_1 + 0x2a0),*(undefined4 *)(param_1 + 0x2a8));
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 14590b1bc FUN_14590b1bc body=92 status=ok
// SIG undefined FUN_14590b1bc(void)

undefined8 * FUN_14590b1bc(undefined8 *param_1)

{
  FUN_140e3eac6();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_14ad6fe70;
  *(uint *)(param_1 + 6) = (*(uint *)(param_1 + 6) & 0xfffffff0) + 1;
  FUN_14590b218(param_1 + 7);
  FUN_14590b218(param_1 + 0x20);
  FUN_14590b218(param_1 + 0x39);
  FUN_14590b218(param_1 + 0x52);
  return param_1;
}



// FUNCTION 14590b218 FUN_14590b218 body=339 status=ok
// SIG undefined FUN_14590b218(void)

byte * FUN_14590b218(byte *param_1)

{
  undefined4 uVar1;
  
  *param_1 = *param_1 | 0xf;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14ad6aa90;
  param_1[0x10] = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar1 = FUN_144830b78(param_1 + 0x1c,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14ad6b340;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0x80;
  param_1[0x37] = 0x3f;
  FUN_1413492ec(param_1 + 8,0);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_14ad6aa90;
  param_1[0x40] = 1;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  uVar1 = FUN_144830b78(param_1 + 0x4c,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_14ad6b340;
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
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0x80;
  param_1[0x67] = 0x3f;
  FUN_1413492ec(param_1 + 0x38,0);
  *(undefined ***)(param_1 + 0x68) = &PTR_FUN_14ad6aa90;
  param_1[0x70] = 1;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  uVar1 = FUN_144830b78(param_1 + 0x7c,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined ***)(param_1 + 0x68) = &PTR_FUN_14ad6b340;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0x80;
  param_1[0x97] = 0x3f;
  FUN_1413492ec(param_1 + 0x68,0);
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_14ad6aa90;
  param_1[0xa0] = 1;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  uVar1 = FUN_144830b78(param_1 + 0xac,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_14ad6b340;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0x80;
  param_1[199] = 0x3f;
  FUN_1413492ec(param_1 + 0x98,0);
  return param_1;
}



// FUNCTION 14590b36c FUN_14590b36c body=177 status=ok
// SIG undefined FUN_14590b36c(void)

undefined8 * FUN_14590b36c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xe0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b291080;
  plVar1 = plVar3 + 2;
  memset(plVar1,0,0xd0);
  FUN_1413493a6(plVar1);
  plVar3[2] = (longlong)&PTR_FUN_14b28ff30;
  plVar3[0x17] = 0;
  plVar3[0x18] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1b] = 0;
  *param_2 = plVar1;
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
      }
    }
  }
  return param_2;
}



// FUNCTION 14590b41e FUN_14590b41e body=495 status=ok
// SIG undefined FUN_14590b41e(void)

longlong * FUN_14590b41e(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined1 local_79;
  longlong *local_78;
  longlong *local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_2;
  lVar5 = (**(code **)(*(longlong *)*param_3 + 8))();
  if (lVar5 != 0) {
    lVar6 = FUN_144a2f878();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      cVar3 = *(char *)(lVar5 + 0x1990);
      plVar7 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14b99fc80;
      plVar1 = plVar7 + 2;
      plVar7[3] = 0;
      plVar7[4] = 0;
      *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
      *(undefined8 *)((longlong)plVar7 + 0x2c) = 0;
      *(char *)(plVar7 + 7) = cVar3 * '\x02';
      plVar7[2] = (longlong)&PTR_FUN_14b99fca0;
      local_78 = plVar1;
      local_70 = plVar7;
      FUN_14590b612(&local_78,plVar1);
      local_79 = 1;
      local_68 = &LAB_140eaa378;
      local_60 = 0;
      FUN_1413494d8(local_58,&local_78,&local_68,&local_79);
      FUN_1448b6402(lVar5 + 0x9948,&local_68,local_58);
      FUN_1449db362(local_58);
      local_79 = 0;
      local_68 = &LAB_140eaa378;
      local_60 = 0;
      FUN_1413494d8(local_58,&local_78,&local_68,&local_79);
      FUN_1448b6402(lVar5 + 0x9960,&local_68,local_58);
      FUN_1449db362(local_58);
      plVar4 = local_70;
      *local_88 = (longlong)plVar1;
      local_88[1] = (longlong)plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_70)(local_70);
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
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
    }
  }
  *local_88 = 0;
  local_88[1] = 0;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return local_88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590b612 FUN_14590b612 body=162 status=ok
// SIG undefined FUN_14590b612(void)

void FUN_14590b612(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14590b651;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14590b651;
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
LAB_14590b651:
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
                    /* WARNING: Could not recover jumptable at 0x00014590b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14590b6b4 FUN_14590b6b4 body=24 status=ok
// SIG undefined FUN_14590b6b4(void)

void FUN_14590b6b4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014590b6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14590b6cc FUN_14590b6cc body=38 status=ok
// SIG undefined FUN_14590b6cc(void)

undefined8 FUN_14590b6cc(undefined8 param_1,int param_2)

{
  FUN_14590b6f2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14590b6f2 FUN_14590b6f2 body=339 status=ok
// SIG undefined FUN_14590b6f2(void)

void FUN_14590b6f2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_14b3ebce0;
  uVar3 = FUN_14479d2ce(param_1 + 1);
  FUN_141245fae(param_1,uVar3,0);
  uVar3 = FUN_140c61bfa();
  FUN_140457ffc(uVar3,param_1);
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x48] = &PTR_FUN_14a1b6cf0;
  FUN_1449db362(param_1 + 0x4d);
  FUN_144760f98(param_1 + 0x48);
  param_1[0x41] = &PTR_FUN_14a1b6cf0;
  FUN_1449db362(param_1 + 0x46);
  FUN_144760f98(param_1 + 0x41);
  param_1[0x3a] = &PTR_FUN_14a1b6cf0;
  FUN_1449db362(param_1 + 0x3f);
  FUN_144760f98(param_1 + 0x3a);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  FUN_14590b846(param_1 + 0x14);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f8ae8(param_1 + 8);
  FUN_1413495c2(param_1 + 6);
  FUN_1413495c2(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014590b841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14590b846 FUN_14590b846 body=490 status=ok
// SIG undefined FUN_14590b846(void)

void FUN_14590b846(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
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
  if (param_1[0x16] != 0) {
    plVar6 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar7 = 0;
    local_60 = plVar6;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
      iVar7 = (int)param_1[5];
    }
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if ((local_78._4_4_ != iVar7) || (local_60 != plVar6)) {
      iVar3 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar1 = *local_90;
        pcVar2 = (code *)param_1[0x16];
        plVar5 = (longlong *)param_1[0x18];
        if ((longlong *)param_1[0x18] == (longlong *)0x0) {
          plVar5 = param_1 + 0x1a;
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        (*pcVar2)(uVar4,lVar1 + (longlong)iVar3 * 0x230,lVar1 + (longlong)iVar3 * 0x230 + 8);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar3 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_90 != param_1 || (local_80 != plVar6 || local_78._4_4_ != iVar7));
    }
    local_78 = uVar4;
    if (param_1[0x16] != 0) {
      plVar6 = param_1 + 0x1a;
      if ((longlong *)param_1[0x18] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[0x18];
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (param_1[0xe] != 0) {
    plVar6 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14590ba5e(param_1);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590ba3e FUN_14590ba3e body=31 status=ok
// SIG undefined FUN_14590ba3e(void)

undefined8 FUN_14590ba3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14590ba5e FUN_14590ba5e body=53 status=ok
// SIG undefined FUN_14590ba5e(void)

void FUN_14590ba5e(longlong *param_1)

{
  FUN_14134961a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14590ba94 FUN_14590ba94 body=63 status=ok
// SIG undefined FUN_14590ba94(void)

undefined1 FUN_14590ba94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14590bad4(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 14590bad4 FUN_14590bad4 body=100 status=ok
// SIG undefined FUN_14590bad4(void)

longlong FUN_14590bad4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14590bb38(param_1 + 0x118);
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
    lVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x108 + lVar3) != -1) {
        *(undefined8 *)(lVar2 + 0x100 + lVar3) = *(undefined8 *)(param_1 + 0x110);
      }
      lVar3 = lVar3 + 0x150;
    } while ((longlong)iVar1 * 0x150 - lVar3 != 0);
  }
  return param_1;
}



// FUNCTION 14590bb38 FUN_14590bb38 body=93 status=ok
// SIG undefined FUN_14590bb38(void)

undefined8 * FUN_14590bb38(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14106822e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1488c98da(param_1,iVar1);
      FUN_1488c994c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14590bb96 FUN_14590bb96 body=327 status=ok
// SIG undefined FUN_14590bb96(void)

void FUN_14590bb96(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  
  FUN_14590bcde();
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0x395b) != '\x01') {
    return;
  }
  lVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar2 != 0) {
    uVar3 = FUN_140df74c8();
    lVar2 = FUN_144718840(lVar2,uVar3);
    if (lVar2 != 0) goto LAB_14590bc44;
  }
  lVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar2 == 0) {
    return;
  }
  lVar4 = FUN_14490fee6();
  if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) {
    return;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30) {
    return;
  }
  lVar2 = *(longlong *)(lVar2 + 0x3d0);
  if (lVar2 == 0) {
    return;
  }
  uVar3 = FUN_140df74c8();
  lVar2 = FUN_144718840(lVar2,uVar3);
  if (lVar2 == 0) {
    return;
  }
LAB_14590bc44:
  lVar4 = param_1 + 0x3718;
  uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  lVar5 = FUN_14492b4b4(uVar3);
  if (lVar5 == 0) {
    FUN_141349942(lVar4,lVar2,0);
    return;
  }
  uVar1 = FUN_140df75ae(lVar5,param_1 + -0x31f8);
  bVar7 = *(char *)(param_1 + 0x3958) < '\0';
  bVar6 = uVar1 == 2;
  if (uVar1 < 2 || bVar7 && bVar6) {
    FUN_141349942(lVar4,lVar2);
  }
  if (bVar6 == (bVar7 && bVar6)) {
    return;
  }
  FUN_1440fa71e(lVar4,lVar2);
  return;
}



// FUNCTION 14590bcde FUN_14590bcde body=102 status=ok
// SIG undefined FUN_14590bcde(void)

void FUN_14590bcde(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x18))(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_144a6c4d8();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_14590bd21;
    }
  }
  lVar1 = 0;
LAB_14590bd21:
  lVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  FUN_14590bd44(lVar2 + 0x28,lVar1,param_3);
  return;
}



// FUNCTION 14590bd44 FUN_14590bd44 body=66 status=ok
// SIG undefined FUN_14590bd44(void)

void FUN_14590bd44(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590bd88 FUN_14590bd88 body=233 status=ok
// SIG undefined FUN_14590bd88(void)

void FUN_14590bd88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14590be72();
  local_38 = 0;
  uStack_40 = uStack_40 & 0xffffffffffffff00;
  local_48 = 1;
  FUN_1446f470e(&local_50,L"ReplicatedSettings",1);
  uVar1 = FUN_141349952();
  FUN_141349952();
  uVar1 = FUN_140f1fabf(uVar1,local_50);
  FUN_140f1fa23(uVar1,param_2,&local_48);
  FUN_1446f470e(&local_48,L"ReplicatedTransientBindings",1);
  uVar1 = FUN_141349952();
  FUN_141349952();
  uVar1 = FUN_140f1fabf(uVar1,local_48);
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590be72 FUN_14590be72 body=226 status=ok
// SIG undefined FUN_14590be72(void)

void FUN_14590be72(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_58,L"SequencePlayer",1);
  uVar1 = FUN_1403c9430();
  FUN_1403c9430();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"LevelSequenceAsset",1);
  uVar1 = FUN_1403c9430();
  FUN_1403c9430();
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



// FUNCTION 14590bf56 FUN_14590bf56 body=19468 status=ok
// SIG undefined FUN_14590bf56(void)

void FUN_14590bf56(longlong *param_1,ulonglong param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 unaff_RBP;
  int iVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  ushort uVar17;
  ushort uVar18;
  uint uVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_3e8 [40];
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  longlong local_320;
  longlong local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 *local_80;
  int local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  param_2 = param_2 & 0xffffffff;
  lVar20 = param_2 * 0x3c;
  uVar3 = *(undefined8 *)(&DAT_14ca814b0 + lVar20);
  FUN_1446ddc76(&local_60,"Language",1);
  FUN_141349ff3(&local_58,param_1,local_60,uVar3);
  *(undefined2 **)(&DAT_14ca814b0 + lVar20) = local_58;
  uVar3 = *(undefined8 *)(&DAT_14ca814bc + lVar20);
  FUN_1446ddc76(&local_68,"ShaderFormat",1);
  FUN_141349ff3(&local_58,param_1,local_68,uVar3);
  *(undefined2 **)(&DAT_14ca814bc + lVar20) = local_58;
  FUN_1446ddc76(&local_70,"MaxFeatureLevel",1);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = (uint)((ulonglong)local_70 >> 0x10);
    uVar9 = (uint)local_70 & 0xffff;
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar13 = *(int *)((longlong)plVar8 +
                     (ulonglong)
                     ((int)param_1[9] - 1U &
                     (int)((ulonglong)local_70 >> 0x20) + ((uint)local_70 << 0x10 | uVar9) +
                     (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar13 != -1) {
      do {
        lVar16 = *param_1 + (longlong)iVar13 * 0x40;
        if (*(longlong *)(*param_1 + (longlong)iVar13 * 0x40) == local_70) {
          if (lVar16 + 8 != 0 && lVar16 != 0) {
            FUN_14134a331(lVar16 + 8 + (ulonglong)(*(int *)(lVar16 + 0x28) - 2U < 0x7fffffff) * 0x10
                          + 8,&DAT_14ca814b8 + param_2 * 0xf);
          }
          break;
        }
        iVar13 = *(int *)(lVar16 + 0x38);
      } while (iVar13 != -1);
    }
  }
  *(undefined4 *)(&DAT_14ca814c4 + lVar20) = 0;
  FUN_14029eeae(&DAT_14ca814a0 + lVar20,&local_80);
  puVar1 = &DAT_14ca814c8 + param_2 * 0xf;
  uVar2 = *(undefined1 *)(&DAT_14ca814c8 + param_2 * 0xf);
  FUN_1446ddc76(&local_88,"bIsMobile",1);
  bVar5 = FUN_141349e57(param_1,local_88,
                        CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar2) & 0xffffff01);
  (&DAT_14ca814c8)[param_2 * 0xf] = (&DAT_14ca814c8)[param_2 * 0xf] & 0xfffffffe | (uint)bVar5;
  FUN_1400020e8(&local_80,L"bIsMobile",9);
  FUN_140002266(&local_58,&DAT_149e3beb8,(&DAT_14ca814c8)[param_2 * 0xf] & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_90,"bIsMetalMRT",1);
  bVar5 = FUN_141349e57(param_1,local_90,(uVar6 & 2) >> 1);
  *puVar1 = (*puVar1 & 0xfffffffd) + (uint)bVar5 * 2;
  FUN_1400020e8(&local_80,L"bIsMetalMRT",0xb);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 1 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_98,"bIsPC",1);
  bVar5 = FUN_141349e57(param_1,local_98,(uVar6 & 4) >> 2);
  *puVar1 = (*puVar1 & 0xfffffffb) + (uint)bVar5 * 4;
  FUN_1400020e8(&local_80,L"bIsPC",5);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 2 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_a0,"bIsConsole",1);
  bVar5 = FUN_141349e57(param_1,local_a0,(uVar6 & 8) >> 3);
  *puVar1 = (*puVar1 & 0xfffffff7) + (uint)bVar5 * 8;
  FUN_1400020e8(&local_80,L"bIsConsole",10);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 3 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_a8,"bIsAndroidOpenGLES",1);
  bVar5 = FUN_141349e57(param_1,local_a8,(uVar6 & 0x20) >> 5);
  *puVar1 = *puVar1 & 0xffffffdf | (uint)bVar5 << 5;
  FUN_1400020e8(&local_80,L"bIsAndroidOpenGLES",0x12);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 5 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_b0,"bSupportsDebugViewShaders",1);
  bVar5 = FUN_141349e57(param_1,local_b0,(uVar6 & 0x40) >> 6);
  *puVar1 = *puVar1 & 0xffffffbf | (uint)bVar5 << 6;
  FUN_1400020e8(&local_80,L"bSupportsDebugViewShaders",0x19);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 6 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_b8,"bSupportsMobileMultiView",1);
  bVar5 = FUN_141349e57(param_1,local_b8,
                        CONCAT71((int7)((ulonglong)&local_80 >> 8),(byte)uVar6 >> 7) & 0xffffffff);
  *puVar1 = *puVar1 & 0xffffff7f | (uint)bVar5 << 7;
  FUN_1400020e8(&local_80,L"bSupportsMobileMultiView",0x18);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 7 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_c0,"bSupportsArrayTextureCompression",1);
  bVar5 = FUN_141349e57(param_1,local_c0,uVar6 >> 8 & 1);
  *puVar1 = *puVar1 & 0xfffffeff | (uint)bVar5 << 8;
  FUN_1400020e8(&local_80,L"bSupportsArrayTextureCompression",0x20);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 8 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_c8,"bSupportsDistanceFields",1);
  bVar5 = FUN_141349e57(param_1,local_c8,uVar6 >> 9 & 1);
  *puVar1 = *puVar1 & 0xfffffdff | (uint)bVar5 << 9;
  FUN_1400020e8(&local_80,L"bSupportsDistanceFields",0x17);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 9 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_d0,"bSupportsDiaphragmDOF",1);
  bVar5 = FUN_141349e57(param_1,local_d0,uVar6 >> 10 & 1);
  *puVar1 = *puVar1 & 0xfffffbff | (uint)bVar5 << 10;
  FUN_1400020e8(&local_80,L"bSupportsDiaphragmDOF",0x15);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 10 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_d8,"bSupportsRGBColorBuffer",1);
  bVar5 = FUN_141349e57(param_1,local_d8,uVar6 >> 0xb & 1);
  *puVar1 = *puVar1 & 0xfffff7ff | (uint)bVar5 << 0xb;
  FUN_1400020e8(&local_80,L"bSupportsRGBColorBuffer",0x17);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0xb & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_e0,"bSupportsPercentageCloserShadows",1);
  bVar5 = FUN_141349e57(param_1,local_e0,uVar6 >> 0xc & 1);
  *puVar1 = *puVar1 & 0xffffefff | (uint)bVar5 << 0xc;
  FUN_1400020e8(&local_80,L"bSupportsPercentageCloserShadows",0x20);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0xc & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_e8,"bSupportsIndexBufferUAVs",1);
  bVar5 = FUN_141349e57(param_1,local_e8,uVar6 >> 0xd & 1);
  *puVar1 = *puVar1 & 0xffffdfff | (uint)bVar5 << 0xd;
  FUN_1400020e8(&local_80,L"bSupportsIndexBufferUAVs",0x18);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0xd & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_f0,"bSupportsInstancedStereo",1);
  bVar5 = FUN_141349e57(param_1,local_f0,uVar6 >> 0xe & 1);
  *puVar1 = *puVar1 & 0xffffbfff | (uint)bVar5 << 0xe;
  FUN_1400020e8(&local_80,L"bSupportsInstancedStereo",0x18);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0xe & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_f8,"SupportsMultiViewport",1);
  uVar6 = FUN_14134a0d4(param_1,local_f8,uVar6 >> 0xf & 3);
  *puVar1 = *puVar1 & 0xfffe7fff | (uVar6 & 3) << 0xf;
  FUN_1400020e8(&local_80,L"SupportsMultiViewport",0x15);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0xf & 3);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_100,"bSupportsMSAA",1);
  bVar5 = FUN_141349e57(param_1,local_100,uVar6 >> 0x11 & 1);
  *puVar1 = *puVar1 & 0xfffdffff | (uint)bVar5 << 0x11;
  FUN_1400020e8(&local_80,L"bSupportsMSAA",0xd);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0x11 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_108,"bSupports4ComponentUAVReadWrite",1);
  bVar5 = FUN_141349e57(param_1,local_108,uVar6 >> 0x12 & 1);
  *puVar1 = *puVar1 & 0xfffbffff | (uint)bVar5 << 0x12;
  FUN_1400020e8(&local_80,L"bSupports4ComponentUAVReadWrite",0x1f);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0x12 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_110,"bSupportsShaderRootConstants",1);
  bVar5 = FUN_141349e57(param_1,local_110,uVar6 >> 0x13 & 1);
  *puVar1 = *puVar1 & 0xfff7ffff | (uint)bVar5 << 0x13;
  FUN_1400020e8(&local_80,L"bSupportsShaderRootConstants",0x1c);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0x13 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_118,"bSupportsShaderBundleDispatch",1);
  bVar5 = FUN_141349e57(param_1,local_118,uVar6 >> 0x14 & 1);
  *puVar1 = *puVar1 & 0xffefffff | (uint)bVar5 << 0x14;
  FUN_1400020e8(&local_80,L"bSupportsShaderBundleDispatch",0x1d);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0x14 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_120,"bSupportsRenderTargetWriteMask",1);
  bVar5 = FUN_141349e57(param_1,local_120,uVar6 >> 0x15 & 1);
  *puVar1 = *puVar1 & 0xffdfffff | (uint)bVar5 << 0x15;
  FUN_1400020e8(&local_80,L"bSupportsRenderTargetWriteMask",0x1e);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0x15 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_128,"bSupportsRayTracing",1);
  bVar5 = FUN_141349e57(param_1,local_128,uVar6 >> 0x16 & 1);
  *puVar1 = *puVar1 & 0xffbfffff | (uint)bVar5 << 0x16;
  FUN_1400020e8(&local_80,L"bSupportsRayTracing",0x13);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0x16 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_130,"bSupportsRayTracingShaders",1);
  bVar5 = FUN_141349e57(param_1,local_130,uVar6 >> 0x19 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xfdffffff | (uint)bVar5 << 0x19;
  FUN_1400020e8(&local_80,L"bSupportsRayTracingShaders",0x1a);
  FUN_140002266(&local_58,&DAT_149e3beb8,
                *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0x19 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_138,"bSupportsInlineRayTracing",1);
  bVar5 = FUN_141349e57(param_1,local_138,uVar6 >> 0x18 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xfeffffff | (uint)bVar5 << 0x18;
  FUN_1400020e8(&local_80,L"bSupportsInlineRayTracing",0x19);
  FUN_140002266(&local_58,&DAT_149e3beb8,
                *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0x18 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_140,"bSupportsRayTracingCallableShaders",1);
  bVar5 = FUN_141349e57(param_1,local_140,uVar6 >> 0x17 & 1);
  *puVar1 = *puVar1 & 0xff7fffff | (uint)bVar5 << 0x17;
  FUN_1400020e8(&local_80,L"bSupportsRayTracingCallableShaders",0x22);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0x17 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_148,"bSupportsRayTracingProceduralPrimitive",1);
  bVar5 = FUN_141349e57(param_1,local_148,uVar6 >> 0x18 & 1);
  *puVar1 = *puVar1 & 0xfeffffff | (uint)bVar5 << 0x18;
  FUN_1400020e8(&local_80,L"bSupportsRayTracingProceduralPrimitive",0x26);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0x18 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_150,"bSupportsRayTracingTraversalStatistics",1);
  bVar5 = FUN_141349e57(param_1,local_150,uVar6 >> 0x19 & 1);
  *puVar1 = *puVar1 & 0xfdffffff | (uint)bVar5 << 0x19;
  FUN_1400020e8(&local_80,L"bSupportsRayTracingTraversalStatistics",0x26);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0x19 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_158,"bSupportsRayTracingIndirectInstanceData",1);
  bVar5 = FUN_141349e57(param_1,local_158,uVar6 >> 0x1a & 1);
  *puVar1 = *puVar1 & 0xfbffffff | (uint)bVar5 << 0x1a;
  FUN_1400020e8(&local_80,L"bSupportsRayTracingIndirectInstanceData",0x27);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0x1a & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_160,"bSupportsPathTracing",1);
  bVar5 = FUN_141349e57(param_1,local_160,uVar6 >> 0x1c & 1);
  *puVar1 = *puVar1 & 0xefffffff | (uint)bVar5 << 0x1c;
  FUN_1400020e8(&local_80,L"bSupportsPathTracing",0x14);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0x1c & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_168,"bSupportsHighEndRayTracingEffects",1);
  bVar5 = FUN_141349e57(param_1,local_168,uVar6 >> 0x1b & 1);
  *puVar1 = *puVar1 & 0xf7ffffff | (uint)bVar5 << 0x1b;
  FUN_1400020e8(&local_80,L"bSupportsHighEndRayTracingEffects",0x21);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0x1b & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_170,"bSupportsUnrestrictedHalfFloatBuffers",1);
  bVar5 = FUN_141349e57(param_1,local_170,uVar6 >> 0x1e & 1);
  *puVar1 = *puVar1 & 0xbfffffff | (uint)bVar5 << 0x1e;
  FUN_1400020e8(&local_80,L"bSupportsUnrestrictedHalfFloatBuffers",0x25);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0x1e & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_178,"bSupportsByteBufferComputeShaders",1);
  bVar5 = FUN_141349e57(param_1,local_178,uVar6 >> 0x1f);
  *puVar1 = *puVar1 & 0x7fffffff | (uint)bVar5 << 0x1f;
  FUN_1400020e8(&local_80,L"bSupportsByteBufferComputeShaders",0x21);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0x1f);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_180,"bSupportsGPUScene",1);
  bVar5 = FUN_141349e57(param_1,local_180,uVar6 >> 0x1d & 1);
  *puVar1 = *puVar1 & 0xdfffffff | (uint)bVar5 << 0x1d;
  FUN_1400020e8(&local_80,L"bSupportsGPUScene",0x11);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 0x1d & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = (&DAT_14ca814cc)[lVar20];
  FUN_1446ddc76(&local_188,"bSupportsPrimitiveShaders",1);
  bVar5 = FUN_141349e57(param_1,local_188,
                        (uint)CONCAT71((int7)((ulonglong)&local_80 >> 8),uVar2) & 0xffffff01);
  *(uint *)(&DAT_14ca814cc + lVar20) = *(uint *)(&DAT_14ca814cc + lVar20) & 0xfffffffe | (uint)bVar5
  ;
  FUN_1400020e8(&local_80,L"bSupportsPrimitiveShaders",0x19);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(&DAT_14ca814cc + lVar20);
  FUN_1446ddc76(&local_190,"bSupportsUInt64ImageAtomics",1);
  bVar5 = FUN_141349e57(param_1,local_190,(uVar6 & 2) >> 1);
  *(uint *)(&DAT_14ca814cc + lVar20) =
       (*(uint *)(&DAT_14ca814cc + lVar20) & 0xfffffffd) + (uint)bVar5 * 2;
  FUN_1400020e8(&local_80,L"bSupportsUInt64ImageAtomics",0x1b);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) >> 1 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(&DAT_14ca814cc + lVar20);
  FUN_1446ddc76(&local_198,"bRequiresVendorExtensionsForAtomics",1);
  bVar5 = FUN_141349e57(param_1,local_198,(uVar6 & 4) >> 2);
  *(uint *)(&DAT_14ca814cc + lVar20) =
       (*(uint *)(&DAT_14ca814cc + lVar20) & 0xfffffffb) + (uint)bVar5 * 4;
  FUN_1400020e8(&local_80,L"bRequiresVendorExtensionsForAtomics",0x23);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) >> 2 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(&DAT_14ca814cc + lVar20);
  FUN_1446ddc76(&local_1a0,"bSupportsNanite",1);
  bVar5 = FUN_141349e57(param_1,local_1a0,(uVar6 & 8) >> 3);
  *(uint *)(&DAT_14ca814cc + lVar20) =
       (*(uint *)(&DAT_14ca814cc + lVar20) & 0xfffffff7) + (uint)bVar5 * 8;
  FUN_1400020e8(&local_80,L"bSupportsNanite",0xf);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) >> 3 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(&DAT_14ca814cc + lVar20);
  FUN_1446ddc76(&local_1a8,"bSupportsLumenGI",1);
  bVar5 = FUN_141349e57(param_1,local_1a8,(uVar6 & 0x10) >> 4);
  *(uint *)(&DAT_14ca814cc + lVar20) =
       *(uint *)(&DAT_14ca814cc + lVar20) & 0xffffffef | (uint)bVar5 << 4;
  FUN_1400020e8(&local_80,L"bSupportsLumenGI",0x10);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) >> 4 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(&DAT_14ca814cc + lVar20);
  FUN_1446ddc76(&local_1b0,"bSupportsSSDIndirect",1);
  bVar5 = FUN_141349e57(param_1,local_1b0,(uVar6 & 0x20) >> 5);
  *(uint *)(&DAT_14ca814cc + lVar20) =
       *(uint *)(&DAT_14ca814cc + lVar20) & 0xffffffdf | (uint)bVar5 << 5;
  FUN_1400020e8(&local_80,L"bSupportsSSDIndirect",0x14);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) >> 5 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(&DAT_14ca814cc + lVar20);
  FUN_1446ddc76(&local_1b8,"bSupportsTemporalHistoryUpscale",1);
  bVar5 = FUN_141349e57(param_1,local_1b8,(uVar6 & 0x40) >> 6);
  *(uint *)(&DAT_14ca814cc + lVar20) =
       *(uint *)(&DAT_14ca814cc + lVar20) & 0xffffffbf | (uint)bVar5 << 6;
  FUN_1400020e8(&local_80,L"bSupportsTemporalHistoryUpscale",0x1f);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) >> 6 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  bVar5 = (&DAT_14ca814cc)[lVar20];
  FUN_1446ddc76(&local_1c0,"bSupportsRTIndexFromVS",1);
  bVar5 = FUN_141349e57(param_1,local_1c0,
                        CONCAT71((int7)((ulonglong)&local_80 >> 8),bVar5 >> 7) & 0xffffffff);
  *(uint *)(&DAT_14ca814cc + lVar20) =
       *(uint *)(&DAT_14ca814cc + lVar20) & 0xffffff7f | (uint)bVar5 << 7;
  FUN_1400020e8(&local_80,L"bSupportsRTIndexFromVS",0x16);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) >> 7 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(&DAT_14ca814cc + lVar20);
  FUN_1446ddc76(&local_1c8,"bSupportsIntrinsicWaveOnce",1);
  bVar5 = FUN_141349e57(param_1,local_1c8,uVar6 >> 0x1b & 1);
  *(uint *)(&DAT_14ca814cc + lVar20) =
       *(uint *)(&DAT_14ca814cc + lVar20) & 0xf7ffffff | (uint)bVar5 << 0x1b;
  FUN_1400020e8(&local_80,L"bSupportsIntrinsicWaveOnce",0x1a);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) >> 0x1b & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(&DAT_14ca814cc + lVar20);
  FUN_1446ddc76(&local_1d0,"bSupportsConservativeRasterization",1);
  bVar5 = FUN_141349e57(param_1,local_1d0,uVar6 >> 0x1c & 1);
  *(uint *)(&DAT_14ca814cc + lVar20) =
       *(uint *)(&DAT_14ca814cc + lVar20) & 0xefffffff | (uint)bVar5 << 0x1c;
  FUN_1400020e8(&local_80,L"bSupportsConservativeRasterization",0x22);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) >> 0x1c & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(&DAT_14ca814cc + lVar20);
  FUN_1446ddc76(&local_1d8,"bSupportsWaveOperations",1);
  uVar6 = FUN_14134a0d4(param_1,local_1d8,uVar6 >> 8 & 3);
  *(uint *)(&DAT_14ca814cc + lVar20) =
       *(uint *)(&DAT_14ca814cc + lVar20) & 0xfffffcff | (uVar6 & 3) << 8;
  FUN_1400020e8(&local_80,L"bSupportsWaveOperations",0x17);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) >> 8 & 3);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(&DAT_14ca814cc + lVar20);
  FUN_1446ddc76(&local_1e0,"bSupportsWavePermute",1);
  bVar5 = FUN_141349e57(param_1,local_1e0,uVar6 >> 10 & 1);
  *(uint *)(&DAT_14ca814cc + lVar20) =
       *(uint *)(&DAT_14ca814cc + lVar20) & 0xfffffbff | (uint)bVar5 << 10;
  FUN_1400020e8(&local_80,L"bSupportsWavePermute",0x14);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) >> 10 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(&DAT_14ca814cc + lVar20);
  FUN_1446ddc76(&local_1e8,"MinimumWaveSize",1);
  uVar6 = FUN_141349f23(param_1,local_1e8,uVar6 >> 0xb & 0xff);
  *(uint *)(&DAT_14ca814cc + lVar20) =
       *(uint *)(&DAT_14ca814cc + lVar20) & 0xfff807ff | (uVar6 & 0xff) << 0xb;
  FUN_1400020e8(&local_80,L"MinimumWaveSize",0xf);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) >> 0xb & 0xff);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(&DAT_14ca814cc + lVar20);
  FUN_1446ddc76(&local_1f0,"MaximumWaveSize",1);
  uVar6 = FUN_141349f23(param_1,local_1f0,uVar6 >> 0x13 & 0xff);
  *(uint *)(&DAT_14ca814cc + lVar20) =
       *(uint *)(&DAT_14ca814cc + lVar20) & 0xf807ffff | (uVar6 & 0xff) << 0x13;
  FUN_1400020e8(&local_80,L"MaximumWaveSize",0xf);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) >> 0x13 & 0xff);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(&DAT_14ca814cc + lVar20);
  FUN_1446ddc76(&local_1f8,"bRequiresExplicit128bitRT",1);
  bVar5 = FUN_141349e57(param_1,local_1f8,uVar6 >> 0x1d & 1);
  *(uint *)(&DAT_14ca814cc + lVar20) =
       *(uint *)(&DAT_14ca814cc + lVar20) & 0xdfffffff | (uint)bVar5 << 0x1d;
  FUN_1400020e8(&local_80,L"bRequiresExplicit128bitRT",0x19);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) >> 0x1d & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(&DAT_14ca814cc + lVar20);
  FUN_1446ddc76(&local_200,"bSupportsGen5TemporalAA",1);
  bVar5 = FUN_141349e57(param_1,local_200,uVar6 >> 0x1e & 1);
  *(uint *)(&DAT_14ca814cc + lVar20) =
       *(uint *)(&DAT_14ca814cc + lVar20) & 0xbfffffff | (uint)bVar5 << 0x1e;
  FUN_1400020e8(&local_80,L"bSupportsGen5TemporalAA",0x17);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) >> 0x1e & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(&DAT_14ca814cc + lVar20);
  FUN_1446ddc76(&local_208,"bTargetsTiledGPU",1);
  bVar5 = FUN_141349e57(param_1,local_208,uVar6 >> 0x1f);
  *(uint *)(&DAT_14ca814cc + lVar20) =
       *(uint *)(&DAT_14ca814cc + lVar20) & 0x7fffffff | (uint)bVar5 << 0x1f;
  FUN_1400020e8(&local_80,L"bTargetsTiledGPU",0x10);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)(&DAT_14ca814cc + lVar20) >> 0x1f);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined1 *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_210,"bNeedsOfflineCompiler",1);
  bVar5 = FUN_141349e57(param_1,local_210,
                        (uint)CONCAT71((int7)((ulonglong)&local_80 >> 8),uVar2) & 0xffffff01);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xfffffffe | (uint)bVar5;
  FUN_1400020e8(&local_80,L"bNeedsOfflineCompiler",0x15);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_218,"bSupportsComputeFramework",1);
  bVar5 = FUN_141349e57(param_1,local_218,(uVar6 & 2) >> 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       (*(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xfffffffd) + (uint)bVar5 * 2;
  FUN_1400020e8(&local_80,L"bSupportsComputeFramework",0x19);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 1 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_220,"bSupportsAnisotropicMaterials",1);
  bVar5 = FUN_141349e57(param_1,local_220,(uVar6 & 4) >> 2);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       (*(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xfffffffb) + (uint)bVar5 * 4;
  FUN_1400020e8(&local_80,L"bSupportsAnisotropicMaterials",0x1d);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 2 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_228,"bSupportsDualSourceBlending",1);
  bVar5 = FUN_141349e57(param_1,local_228,(uVar6 & 8) >> 3);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       (*(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xfffffff7) + (uint)bVar5 * 8;
  FUN_1400020e8(&local_80,L"bSupportsDualSourceBlending",0x1b);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 3 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_230,"bRequiresGeneratePrevTransformBuffer",1);
  bVar5 = FUN_141349e57(param_1,local_230,(uVar6 & 0x10) >> 4);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xffffffef | (uint)bVar5 << 4;
  FUN_1400020e8(&local_80,L"bRequiresGeneratePrevTransformBuffer",0x24);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 4 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_238,"bRequiresRenderTargetDuringRaster",1);
  bVar5 = FUN_141349e57(param_1,local_238,(uVar6 & 0x20) >> 5);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xffffffdf | (uint)bVar5 << 5;
  FUN_1400020e8(&local_80,L"bRequiresRenderTargetDuringRaster",0x21);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 5 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_240,"bRequiresDisableForwardLocalLights",1);
  bVar5 = FUN_141349e57(param_1,local_240,(uVar6 & 0x40) >> 6);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xffffffbf | (uint)bVar5 << 6;
  FUN_1400020e8(&local_80,L"bRequiresDisableForwardLocalLights",0x22);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 6 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  bVar5 = *(byte *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_248,"bCompileSignalProcessingPipeline",1);
  bVar5 = FUN_141349e57(param_1,local_248,
                        CONCAT71((int7)((ulonglong)&local_80 >> 8),bVar5 >> 7) & 0xffffffff);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xffffff7f | (uint)bVar5 << 7;
  FUN_1400020e8(&local_80,L"bCompileSignalProcessingPipeline",0x20);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 7 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_250,"bSupportsMeshShadersTier0",1);
  bVar5 = FUN_141349e57(param_1,local_250,uVar6 >> 8 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xfffffeff | (uint)bVar5 << 8;
  FUN_1400020e8(&local_80,L"bSupportsMeshShadersTier0",0x19);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 8 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_258,"bSupportsMeshShadersTier1",1);
  bVar5 = FUN_141349e57(param_1,local_258,uVar6 >> 9 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xfffffdff | (uint)bVar5 << 9;
  FUN_1400020e8(&local_80,L"bSupportsMeshShadersTier1",0x19);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 9 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_260,"bSupportsMeshShadersWithClipDistance",1);
  bVar5 = FUN_141349e57(param_1,local_260,uVar6 >> 10 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xfffffbff | (uint)bVar5 << 10;
  FUN_1400020e8(&local_80,L"bSupportsMeshShadersWithClipDistance",0x24);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 10 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_268,"MaxMeshShaderThreadGroupSize",1);
  uVar6 = FUN_141349f23(param_1,local_268,uVar6 >> 0xb & 0x3ff);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xffe007ff | (uVar6 & 0x3ff) << 0xb;
  FUN_1400020e8(&local_80,L"MaxMeshShaderThreadGroupSize",0x1c);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 0xb & 0x3ff
               );
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_270,"bRequiresUnwrappedMeshShaderArgs",1);
  bVar5 = FUN_141349e57(param_1,local_270,uVar6 >> 0x15 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xffdfffff | (uint)bVar5 << 0x15;
  FUN_1400020e8(&local_80,L"bRequiresUnwrappedMeshShaderArgs",0x20);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 0x15 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_278,"bSupportsPerPixelDBufferMask",1);
  bVar5 = FUN_141349e57(param_1,local_278,uVar6 >> 0x16 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xffbfffff | (uint)bVar5 << 0x16;
  FUN_1400020e8(&local_80,L"bSupportsPerPixelDBufferMask",0x1c);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 0x16 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_280,"bIsHlslcc",1);
  bVar5 = FUN_141349e57(param_1,local_280,uVar6 >> 0x17 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xff7fffff | (uint)bVar5 << 0x17;
  FUN_1400020e8(&local_80,L"bIsHlslcc",9);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 0x17 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_288,"bSupportsDxc",1);
  bVar5 = FUN_141349e57(param_1,local_288,uVar6 >> 0x18 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xfeffffff | (uint)bVar5 << 0x18;
  FUN_1400020e8(&local_80,L"bSupportsDxc",0xc);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 0x18 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_290,"bSupportsVariableRateShading",1);
  bVar5 = FUN_141349e57(param_1,local_290,uVar6 >> 0x1a & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xfbffffff | (uint)bVar5 << 0x1a;
  FUN_1400020e8(&local_80,L"bSupportsVariableRateShading",0x1c);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 0x1a & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20);
  FUN_1446ddc76(&local_298,"bIsSPIRV",1);
  bVar5 = FUN_141349e57(param_1,local_298,uVar6 >> 0x19 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20) & 0xfdffffff | (uint)bVar5 << 0x19;
  FUN_1400020e8(&local_80,L"bIsSPIRV",8);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20) >> 0x19 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_2a0,"NumberOfComputeThreads",1);
  uVar6 = FUN_141349f23(param_1,local_2a0,uVar6 & 0x3ff);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xfffffc00 | uVar6 & 0x3ff;
  FUN_1400020e8(&local_80,L"NumberOfComputeThreads",0x16);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0x3ff);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_2a8,"bWaterUsesSimpleForwardShading",1);
  bVar5 = FUN_141349e57(param_1,local_2a8,uVar6 >> 10 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xfffffbff | (uint)bVar5 << 10;
  FUN_1400020e8(&local_80,L"bWaterUsesSimpleForwardShading",0x1e);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 10 & 1)
  ;
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_2b0,"bSupportsHairStrandGeometry",1);
  bVar5 = FUN_141349e57(param_1,local_2b0,uVar6 >> 0xb & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xfffff7ff | (uint)bVar5 << 0xb;
  FUN_1400020e8(&local_80,L"bSupportsHairStrandGeometry",0x1b);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0xb & 1
               );
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_2b8,"bSupportsDOFHybridScattering",1);
  bVar5 = FUN_141349e57(param_1,local_2b8,uVar6 >> 0xc & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xffffefff | (uint)bVar5 << 0xc;
  FUN_1400020e8(&local_80,L"bSupportsDOFHybridScattering",0x1c);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0xc & 1
               );
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_2c0,"bNeedsExtraMobileFrames",1);
  bVar5 = FUN_141349e57(param_1,local_2c0,uVar6 >> 0xd & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xffffdfff | (uint)bVar5 << 0xd;
  FUN_1400020e8(&local_80,L"bNeedsExtraMobileFrames",0x17);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0xd & 1
               );
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_2c8,"bSupportsHZBOcclusion",1);
  bVar5 = FUN_141349e57(param_1,local_2c8,uVar6 >> 0xe & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xffffbfff | (uint)bVar5 << 0xe;
  FUN_1400020e8(&local_80,L"bSupportsHZBOcclusion",0x15);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0xe & 1
               );
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar17 = *(ushort *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_2d0,"bSupportsWaterIndirectDraw",1);
  bVar5 = FUN_141349e57(param_1,local_2d0,uVar17 >> 0xf);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xffff7fff | (uint)bVar5 << 0xf;
  FUN_1400020e8(&local_80,L"bSupportsWaterIndirectDraw",0x1a);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0xf & 1
               );
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_2d8,"bSupportsAsyncPipelineCompilation",1);
  bVar5 = FUN_141349e57(param_1,local_2d8,uVar6 >> 0x10 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xfffeffff | (uint)bVar5 << 0x10;
  FUN_1400020e8(&local_80,L"bSupportsAsyncPipelineCompilation",0x21);
  FUN_140002266(&local_58,&DAT_149e3beb8,
                *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0x10 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_2e0,"bSupportsVertexShaderSRVs",1);
  bVar5 = FUN_141349e57(param_1,local_2e0,uVar6 >> 0x11 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xfffdffff | (uint)bVar5 << 0x11;
  FUN_1400020e8(&local_80,L"bSupportsVertexShaderSRVs",0x19);
  FUN_140002266(&local_58,&DAT_149e3beb8,
                *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0x11 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_2e8,"bSupportsVertexShaderUAVs",1);
  uVar6 = FUN_14134a0d4(param_1,local_2e8,uVar6 >> 0x12 & 3);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xfff3ffff | (uVar6 & 3) << 0x12;
  FUN_1400020e8(&local_80,L"bSupportsVertexShaderUAVs",0x19);
  FUN_140002266(&local_58,&DAT_149e3beb8,
                *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0x12 & 3);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_2f0,"bSupportsManualVertexFetch",1);
  bVar5 = FUN_141349e57(param_1,local_2f0,uVar6 >> 0x14 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xffefffff | (uint)bVar5 << 0x14;
  FUN_1400020e8(&local_80,L"bSupportsManualVertexFetch",0x1a);
  FUN_140002266(&local_58,&DAT_149e3beb8,
                *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0x14 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_2f8,"bRequiresReverseCullingOnMobile",1);
  bVar5 = FUN_141349e57(param_1,local_2f8,uVar6 >> 0x15 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xffdfffff | (uint)bVar5 << 0x15;
  FUN_1400020e8(&local_80,L"bRequiresReverseCullingOnMobile",0x1f);
  FUN_140002266(&local_58,&DAT_149e3beb8,
                *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0x15 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_300,"bOverrideFMaterial_NeedsGBufferEnabled",1);
  bVar5 = FUN_141349e57(param_1,local_300,uVar6 >> 0x16 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xffbfffff | (uint)bVar5 << 0x16;
  FUN_1400020e8(&local_80,L"bOverrideFMaterial_NeedsGBufferEnabled",0x26);
  FUN_140002266(&local_58,&DAT_149e3beb8,
                *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0x16 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_308,"bSupportsFFTBloom",1);
  bVar5 = FUN_141349e57(param_1,local_308,uVar6 >> 0x17 & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xff7fffff | (uint)bVar5 << 0x17;
  FUN_1400020e8(&local_80,L"bSupportsFFTBloom",0x11);
  FUN_140002266(&local_58,&DAT_149e3beb8,
                *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0x17 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_310,"bSupportsVertexShaderLayer",1);
  bVar5 = FUN_141349e57(param_1,local_310,uVar6 >> 0x1a & 1);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xfbffffff | (uint)bVar5 << 0x1a;
  FUN_1400020e8(&local_80,L"bSupportsVertexShaderLayer",0x1a);
  FUN_140002266(&local_58,&DAT_149e3beb8,
                *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0x1a & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_318,"BindlessSupport",1);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar9 = (uint)((ulonglong)local_318 >> 0x10);
    uVar19 = (uint)local_318 & 0xffff;
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar13 = *(int *)((longlong)plVar8 +
                     (ulonglong)
                     ((int)param_1[9] - 1U &
                     (int)((ulonglong)local_318 >> 0x20) + ((uint)local_318 << 0x10 | uVar19) +
                     (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar19 >> 4)) * 4);
    if (iVar13 != -1) {
      do {
        lVar16 = *param_1 + (longlong)iVar13 * 0x40;
        if (*(longlong *)(*param_1 + (longlong)iVar13 * 0x40) == local_318) {
          if ((lVar16 + 8U & 0xfffffffffffffff7) != 0) {
            lVar10 = (ulonglong)(*(int *)(lVar16 + 0x28) - 2U < 0x7fffffff) * 0x10;
            local_58 = (undefined2 *)0x0;
            local_50 = *(int *)(lVar16 + 0x18 + lVar10);
            lVar12 = (longlong)local_50;
            pvVar4 = *(void **)(lVar16 + 0x10 + lVar10);
            if (lVar12 == 0) {
              local_4c = 0;
              puVar14 = &DAT_149dfb77a;
              iVar13 = 0;
            }
            else {
              FUN_1446dd670(&local_58,local_50,0);
              memcpy(local_58,pvVar4,lVar12 * 2);
              puVar14 = &DAT_149dfb77a;
              iVar13 = local_50;
              if (local_50 != 0) {
                puVar14 = local_58;
              }
            }
            lVar16 = 0;
            goto LAB_145910851;
          }
          break;
        }
        iVar13 = *(int *)(lVar16 + 0x38);
      } while (iVar13 != -1);
    }
  }
  goto LAB_14590f89f;
LAB_145910851:
  uVar17 = *(ushort *)((longlong)puVar14 + lVar16);
  uVar15 = (ulonglong)uVar17;
  uVar18 = *(ushort *)((longlong)L"Unsupported" + lVar16);
  if (uVar17 == uVar18) {
    if (uVar17 == 0) goto LAB_145910945;
LAB_14591086a:
    lVar16 = lVar16 + 2;
    goto LAB_145910851;
  }
  if ((uVar18 | uVar17) < 0x80) {
    uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    uVar11 = (ulonglong)uVar18;
    uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar11]) goto LAB_14591086a;
  }
  if (uVar17 != uVar18) {
    puVar14 = &DAT_149dfb77a;
    if (iVar13 != 0) {
      puVar14 = local_58;
    }
    lVar16 = 0;
    goto LAB_1459108af;
  }
LAB_145910945:
  uVar9 = 0;
  goto LAB_145910947;
LAB_1459108af:
  uVar17 = *(ushort *)((longlong)puVar14 + lVar16);
  uVar15 = (ulonglong)uVar17;
  uVar18 = *(ushort *)((longlong)L"RayTracingOnly" + lVar16);
  if (uVar17 == uVar18) {
    if (uVar17 == 0) goto LAB_145910ab4;
LAB_1459108c8:
    lVar16 = lVar16 + 2;
    goto LAB_1459108af;
  }
  if ((uVar18 | uVar17) < 0x80) {
    uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    uVar11 = (ulonglong)uVar18;
    uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar11]) goto LAB_1459108c8;
  }
  if (uVar17 != uVar18) {
    lVar16 = 0;
    goto LAB_145910901;
  }
LAB_145910ab4:
  uVar9 = 0x8000000;
LAB_145910947:
  bVar21 = false;
LAB_14591094a:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (bVar21) {
LAB_14590f89f:
    uVar9 = uVar6;
  }
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0xe7ffffff | uVar9 & 0x18000000;
  FUN_1400020e8(&local_80,L"BindlessSupport",0xf);
  FUN_140002266(&local_58,&DAT_149e3beb8,
                *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0x1b & 3);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_320,"StaticShaderBindingLayoutSupport",1);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar9 = (uint)((ulonglong)local_320 >> 0x10);
    uVar19 = (uint)local_320 & 0xffff;
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar13 = *(int *)((longlong)plVar8 +
                     (ulonglong)
                     ((int)param_1[9] - 1U &
                     (int)((ulonglong)local_320 >> 0x20) + ((uint)local_320 << 0x10 | uVar19) +
                     (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar19 >> 4)) * 4);
    if (iVar13 != -1) {
      do {
        lVar16 = *param_1 + (longlong)iVar13 * 0x40;
        if (*(longlong *)(*param_1 + (longlong)iVar13 * 0x40) == local_320) {
          if ((lVar16 + 8U & 0xfffffffffffffff7) != 0) {
            lVar10 = (ulonglong)(*(int *)(lVar16 + 0x28) - 2U < 0x7fffffff) * 0x10;
            local_58 = (undefined2 *)0x0;
            local_50 = *(int *)(lVar16 + 0x18 + lVar10);
            lVar12 = (longlong)local_50;
            pvVar4 = *(void **)(lVar16 + 0x10 + lVar10);
            if (lVar12 == 0) {
              local_4c = 0;
              puVar14 = &DAT_149dfb77a;
              iVar13 = 0;
            }
            else {
              FUN_1446dd670(&local_58,local_50,0);
              memcpy(local_58,pvVar4,lVar12 * 2);
              puVar14 = &DAT_149dfb77a;
              iVar13 = local_50;
              if (local_50 != 0) {
                puVar14 = local_58;
              }
            }
            lVar16 = 0;
            goto LAB_1459109f6;
          }
          break;
        }
        iVar13 = *(int *)(lVar16 + 0x38);
      } while (iVar13 != -1);
    }
  }
  goto LAB_14590f9b2;
LAB_145910901:
  uVar17 = *(ushort *)((longlong)puVar14 + lVar16);
  uVar9 = (uint)uVar17;
  uVar18 = *(ushort *)((longlong)L"AllShaderTypes" + lVar16);
  uVar19 = (uint)uVar18;
  if (uVar17 != uVar18) {
    if ((uVar18 | uVar17) < 0x80) {
      uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar17];
      uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar18];
      if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar18]) goto LAB_14591091a;
    }
    iVar13 = uVar9 - uVar19;
    goto LAB_145910ac1;
  }
  if (uVar17 == 0) goto LAB_145910abe;
LAB_14591091a:
  lVar16 = lVar16 + 2;
  goto LAB_145910901;
LAB_145910abe:
  iVar13 = 0;
LAB_145910ac1:
  bVar21 = iVar13 != 0;
  uVar9 = 0x10000000;
  goto LAB_14591094a;
LAB_1459109f6:
  uVar17 = *(ushort *)((longlong)puVar14 + lVar16);
  uVar15 = (ulonglong)uVar17;
  uVar18 = *(ushort *)((longlong)L"Unsupported" + lVar16);
  if (uVar17 == uVar18) {
    if (uVar17 == 0) goto LAB_145910a97;
LAB_145910a0f:
    lVar16 = lVar16 + 2;
    goto LAB_1459109f6;
  }
  if ((uVar18 | uVar17) < 0x80) {
    uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    uVar11 = (ulonglong)uVar18;
    uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar11]) goto LAB_145910a0f;
  }
  if (uVar17 != uVar18) {
    puVar14 = &DAT_149dfb77a;
    if (iVar13 != 0) {
      puVar14 = local_58;
    }
    lVar16 = 0;
    goto LAB_145910a50;
  }
LAB_145910a97:
  uVar9 = 0;
  goto LAB_145910a99;
LAB_145910b12:
  uVar17 = *(ushort *)((longlong)puVar14 + lVar16);
  uVar9 = (uint)uVar17;
  uVar18 = *(ushort *)((longlong)L"AllShaderTypes" + lVar16);
  uVar19 = (uint)uVar18;
  if (uVar17 != uVar18) {
    if ((uVar18 | uVar17) < 0x80) {
      uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar17];
      uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar18];
      if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar18]) goto LAB_145910b27;
    }
    iVar13 = uVar9 - uVar19;
    goto LAB_145910b52;
  }
  if (uVar17 == 0) goto LAB_145910b4f;
LAB_145910b27:
  lVar16 = lVar16 + 2;
  goto LAB_145910b12;
LAB_145910b4f:
  iVar13 = 0;
LAB_145910b52:
  bVar21 = iVar13 != 0;
  uVar9 = 0x40000000;
  goto LAB_145910a9c;
LAB_145910a50:
  uVar17 = *(ushort *)((longlong)puVar14 + lVar16);
  uVar15 = (ulonglong)uVar17;
  uVar18 = *(ushort *)((longlong)L"RayTracingOnly" + lVar16);
  if (uVar17 == uVar18) {
    if (uVar17 == 0) goto LAB_145910a90;
LAB_145910a65:
    lVar16 = lVar16 + 2;
    goto LAB_145910a50;
  }
  if ((uVar18 | uVar17) < 0x80) {
    uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    uVar11 = (ulonglong)uVar18;
    uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar11]) goto LAB_145910a65;
  }
  if (uVar17 != uVar18) {
    lVar16 = 0;
    goto LAB_145910b12;
  }
LAB_145910a90:
  uVar9 = 0x20000000;
LAB_145910a99:
  bVar21 = false;
LAB_145910a9c:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (bVar21) {
LAB_14590f9b2:
    uVar9 = uVar6;
  }
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0x9fffffff | uVar9 & 0x60000000;
  FUN_1400020e8(&local_80,L"StaticShaderBindingLayoutSupport",0x20);
  FUN_140002266(&local_58,&DAT_149e3beb8,
                *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0x1d & 3);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4);
  FUN_1446ddc76(&local_328,"bSupportsVolumeTextureAtomics",1);
  bVar5 = FUN_141349e57(param_1,local_328,uVar6 >> 0x1f);
  *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) =
       *(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) & 0x7fffffff | (uint)bVar5 << 0x1f;
  FUN_1400020e8(&local_80,L"bSupportsVolumeTextureAtomics",0x1d);
  FUN_140002266(&local_58,&DAT_149e3beb8,*(uint *)((longlong)&DAT_14ca814d0 + lVar20 + 4) >> 0x1f);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined1 *)(&DAT_14ca814d8 + param_2 * 0xf);
  FUN_1446ddc76(&local_330,"bSupportsROV",1);
  bVar5 = FUN_141349e57(param_1,local_330,
                        (uint)CONCAT71((int7)((ulonglong)&local_80 >> 8),uVar2) & 0xffffff01);
  (&DAT_14ca814d8)[param_2 * 0xf] = (&DAT_14ca814d8)[param_2 * 0xf] & 0xfffffffe | (uint)bVar5;
  FUN_1400020e8(&local_80,L"bSupportsROV",0xc);
  FUN_140002266(&local_58,&DAT_149e3beb8,(&DAT_14ca814d8)[param_2 * 0xf] & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_338,"bSupportsOIT",1);
  bVar5 = FUN_141349e57(param_1,local_338,(uVar6 & 2) >> 1);
  (&DAT_14ca814d8)[param_2 * 0xf] = ((&DAT_14ca814d8)[param_2 * 0xf] & 0xfffffffd) + (uint)bVar5 * 2
  ;
  FUN_1400020e8(&local_80,L"bSupportsOIT",0xc);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 1 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_340,"bSupportsRealTypes",1);
  uVar6 = FUN_14134a0d4(param_1,local_340,uVar6 >> 2 & 3);
  (&DAT_14ca814d8)[param_2 * 0xf] = ((&DAT_14ca814d8)[param_2 * 0xf] & 0xfffffff3) + (uVar6 & 3) * 4
  ;
  FUN_1400020e8(&local_80,L"bSupportsRealTypes",0x12);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 2 & 3);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_348,"EnablesHLSL2021ByDefault",1);
  uVar6 = FUN_141349f23(param_1,local_348,uVar6 >> 4 & 3);
  (&DAT_14ca814d8)[param_2 * 0xf] = (&DAT_14ca814d8)[param_2 * 0xf] & 0xffffffcf | (uVar6 & 3) << 4;
  FUN_1400020e8(&local_80,L"EnablesHLSL2021ByDefault",0x18);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 4 & 3);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_350,"bSupportsSceneDataCompressedTransforms",1);
  bVar5 = FUN_141349e57(param_1,local_350,(uVar6 & 0x40) >> 6);
  (&DAT_14ca814d8)[param_2 * 0xf] = (&DAT_14ca814d8)[param_2 * 0xf] & 0xffffffbf | (uint)bVar5 << 6;
  FUN_1400020e8(&local_80,L"bSupportsSceneDataCompressedTransforms",0x26);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 6 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_358,"bSupportsSwapchainUAVs",1);
  bVar5 = FUN_141349e57(param_1,local_358,uVar6 >> 8 & 1);
  (&DAT_14ca814d8)[param_2 * 0xf] = (&DAT_14ca814d8)[param_2 * 0xf] & 0xfffffeff | (uint)bVar5 << 8;
  FUN_1400020e8(&local_80,L"bSupportsSwapchainUAVs",0x16);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 8 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_360,"bSupportsClipDistance",1);
  bVar5 = FUN_141349e57(param_1,local_360,uVar6 >> 9 & 1);
  (&DAT_14ca814d8)[param_2 * 0xf] = (&DAT_14ca814d8)[param_2 * 0xf] & 0xfffffdff | (uint)bVar5 << 9;
  FUN_1400020e8(&local_80,L"bSupportsClipDistance",0x15);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 9 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_368,"bSupportsNNEShaders",1);
  bVar5 = FUN_141349e57(param_1,local_368,uVar6 >> 10 & 1);
  (&DAT_14ca814d8)[param_2 * 0xf] = (&DAT_14ca814d8)[param_2 * 0xf] & 0xfffffbff | (uint)bVar5 << 10
  ;
  FUN_1400020e8(&local_80,L"bSupportsNNEShaders",0x13);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 10 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_370,"bSupportsShaderPipelines",1);
  bVar5 = FUN_141349e57(param_1,local_370,uVar6 >> 0xb & 1);
  (&DAT_14ca814d8)[param_2 * 0xf] =
       (&DAT_14ca814d8)[param_2 * 0xf] & 0xfffff7ff | (uint)bVar5 << 0xb;
  FUN_1400020e8(&local_80,L"bSupportsShaderPipelines",0x18);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 0xb & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_378,"bSupportsUniformBufferObjects",1);
  bVar5 = FUN_141349e57(param_1,local_378,uVar6 >> 0xc & 1);
  (&DAT_14ca814d8)[param_2 * 0xf] =
       (&DAT_14ca814d8)[param_2 * 0xf] & 0xffffefff | (uint)bVar5 << 0xc;
  FUN_1400020e8(&local_80,L"bSupportsUniformBufferObjects",0x1d);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 0xc & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_380,"bRequiresBindfulUtilityShaders",1);
  bVar5 = FUN_141349e57(param_1,local_380,uVar6 >> 0xd & 1);
  (&DAT_14ca814d8)[param_2 * 0xf] =
       (&DAT_14ca814d8)[param_2 * 0xf] & 0xffffdfff | (uint)bVar5 << 0xd;
  FUN_1400020e8(&local_80,L"bRequiresBindfulUtilityShaders",0x1e);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 0xd & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_388,"MaxSamplers",1);
  uVar6 = FUN_141349f23(param_1,local_388,uVar6 >> 0xe & 0xff);
  (&DAT_14ca814d8)[param_2 * 0xf] =
       (&DAT_14ca814d8)[param_2 * 0xf] & 0xffc03fff | (uVar6 & 0xff) << 0xe;
  FUN_1400020e8(&local_80,L"MaxSamplers",0xb);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 0xe & 0xff);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_390,"SupportsBarycentricsIntrinsics",1);
  bVar5 = FUN_141349e57(param_1,local_390,uVar6 >> 0x16 & 1);
  (&DAT_14ca814d8)[param_2 * 0xf] =
       (&DAT_14ca814d8)[param_2 * 0xf] & 0xffbfffff | (uint)bVar5 << 0x16;
  FUN_1400020e8(&local_80,L"SupportsBarycentricsIntrinsics",0x1e);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 0x16 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_398,"SupportsBarycentricsSemantic",1);
  uVar6 = FUN_14134a0d4(param_1,local_398,uVar6 >> 0x17 & 3);
  (&DAT_14ca814d8)[param_2 * 0xf] =
       (&DAT_14ca814d8)[param_2 * 0xf] & 0xfe7fffff | (uVar6 & 3) << 0x17;
  FUN_1400020e8(&local_80,L"SupportsBarycentricsSemantic",0x1c);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 0x17 & 3);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_3a0,"bSupportsWave64",1);
  bVar5 = FUN_141349e57(param_1,local_3a0,uVar6 >> 0x19 & 1);
  (&DAT_14ca814d8)[param_2 * 0xf] =
       (&DAT_14ca814d8)[param_2 * 0xf] & 0xfdffffff | (uint)bVar5 << 0x19;
  FUN_1400020e8(&local_80,L"bSupportsWave64",0xf);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 0x19 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_3a8,"bSupportsIndependentSamplers",1);
  bVar5 = FUN_141349e57(param_1,local_3a8,uVar6 >> 0x1a & 1);
  (&DAT_14ca814d8)[param_2 * 0xf] =
       (&DAT_14ca814d8)[param_2 * 0xf] & 0xfbffffff | (uint)bVar5 << 0x1a;
  FUN_1400020e8(&local_80,L"bSupportsIndependentSamplers",0x1c);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 0x1a & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_3b0,"bSupportsWorkGraphs",1);
  bVar5 = FUN_141349e57(param_1,local_3b0,uVar6 >> 0x1b & 1);
  (&DAT_14ca814d8)[param_2 * 0xf] =
       (&DAT_14ca814d8)[param_2 * 0xf] & 0xf7ffffff | (uint)bVar5 << 0x1b;
  FUN_1400020e8(&local_80,L"bSupportsWorkGraphs",0x13);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 0x1b & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *puVar1;
  FUN_1446ddc76(&local_3b8,"bSupportsAcorn",1);
  bVar5 = FUN_141349e57(param_1,local_3b8,(uVar6 & 0x10) >> 4);
  *puVar1 = *puVar1 & 0xffffffef | (uint)bVar5 << 4;
  FUN_1400020e8(&local_80,L"bSupportsAcorn",0xe);
  FUN_140002266(&local_58,&DAT_149e3beb8,*puVar1 >> 4 & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = (&DAT_14ca814d8)[param_2 * 0xf];
  FUN_1446ddc76(&local_3c0,"bSupportsDLSSShaders",1);
  bVar5 = FUN_141349e57(param_1,local_3c0,uVar6 >> 0x1d & 1);
  (&DAT_14ca814d8)[param_2 * 0xf] =
       (&DAT_14ca814d8)[param_2 * 0xf] & 0xdfffffff | (uint)bVar5 << 0x1d;
  FUN_1400020e8(&local_80,L"bSupportsDLSSShaders",0x14);
  FUN_140002266(&local_58,&DAT_149e3beb8,(uint)(&DAT_14ca814d8)[param_2 * 0xf] >> 0x1d & 1);
  iVar13 = local_50 + -1;
  if (local_50 == 0) {
    iVar13 = 0;
  }
  FUN_1400020e8(&local_80,local_58,iVar13);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar14 = local_80;
  if (local_78 == 0) {
    puVar14 = &DAT_149dfb77a;
  }
  iVar13 = local_78 + -1;
  if (local_78 == 0) {
    iVar13 = 0;
  }
  uVar7 = FUN_144a49b4a(iVar13,puVar14);
  *(undefined4 *)(&DAT_14ca814c4 + lVar20) = uVar7;
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145910b64 FUN_145910b64 body=38 status=ok
// SIG undefined FUN_145910b64(void)

undefined8 FUN_145910b64(undefined8 param_1,int param_2)

{
  FUN_145910b8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145910b8a FUN_145910b8a body=361 status=ok
// SIG undefined FUN_145910b8a(void)

void FUN_145910b8a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f537f0;
  FUN_140143f97(param_1[0xd3],*(undefined4 *)(param_1 + 0xd4));
  if (param_1[0xd3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd0] != 0) {
    FUN_1400020a8();
  }
  FUN_14015304d(param_1[0xcd],*(undefined4 *)(param_1 + 0xce));
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xca] != 0) {
    FUN_1400020a8();
  }
  if (param_1[199] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  FUN_14014a6c2(param_1[0xc1],*(undefined4 *)(param_1 + 0xc2));
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  FUN_1401606fd(param_1[0xbe],*(undefined4 *)(param_1 + 0xbf));
  if (param_1[0xbe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb5] != 0) {
    FUN_1400020a8();
  }
  FUN_141123eb2(param_1);
  return;
}



// FUNCTION 145910d04 FUN_145910d04 body=41 status=ok
// SIG undefined FUN_145910d04(void)

void FUN_145910d04(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 145910d3e FUN_145910d3e body=41 status=ok
// SIG undefined FUN_145910d3e(void)

void FUN_145910d3e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 145910d78 FUN_145910d78 body=41 status=ok
// SIG undefined FUN_145910d78(void)

void FUN_145910d78(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 145910db0 FUN_145910db0 body=40 status=ok
// SIG undefined FUN_145910db0(void)

undefined8 FUN_145910db0(undefined8 param_1,int param_2)

{
  FUN_145910dd8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145910dd8 FUN_145910dd8 body=117 status=ok
// SIG undefined FUN_145910dd8(void)

void FUN_145910dd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7e1190;
  FUN_144a2da94(param_1 + 0x19);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_144a2da94(param_1 + 0xd);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145910e4e FUN_145910e4e body=43 status=ok
// SIG undefined FUN_145910e4e(void)

undefined8 FUN_145910e4e(undefined8 param_1,int param_2)

{
  FUN_145910e7a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x5b0);
  }
  return param_1;
}



// FUNCTION 145910e7a FUN_145910e7a body=120 status=ok
// SIG undefined FUN_145910e7a(void)

void FUN_145910e7a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8ae230;
  FUN_140fe7ede(param_1 + 0xa8);
  FUN_14134a3b4(param_1 + 0x9b);
  FUN_14121ab90(param_1 + 0x3a);
  FUN_145910ef2(param_1[0x38],*(undefined4 *)(param_1 + 0x39));
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x36] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x36] + 0x10))();
  }
  FUN_1457debcc(param_1);
  return;
}



// FUNCTION 145910ef2 FUN_145910ef2 body=61 status=ok
// SIG undefined FUN_145910ef2(void)

void FUN_145910ef2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145910f40 FUN_145910f40 body=41 status=ok
// SIG undefined FUN_145910f40(void)

void FUN_145910f40(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 145910f7a FUN_145910f7a body=41 status=ok
// SIG undefined FUN_145910f7a(void)

void FUN_145910f7a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 145910fb4 FUN_145910fb4 body=41 status=ok
// SIG undefined FUN_145910fb4(void)

void FUN_145910fb4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,1);
  return;
}



// FUNCTION 145910fde FUN_145910fde body=226 status=ok
// SIG undefined FUN_145910fde(void)

void FUN_145910fde(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  switchD_143c3d4dc::caseD_42();
  FUN_1446f470e(&local_58,L"VaultCards",1);
  uVar1 = FUN_1459110c2();
  FUN_1459110c2();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ActivatedVaultCardDef",1);
  uVar1 = FUN_1459110c2();
  FUN_1459110c2();
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



// FUNCTION 1459110c2 FUN_1459110c2 body=228 status=ok
// SIG undefined FUN_1459110c2(void)

longlong FUN_1459110c2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc08e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148cbabe0;
    local_40 = &LAB_1460176ba;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/OakGame",L"VaultCardsManager",&DAT_14cbc08e0,FUN_146617ba6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc08e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459111a8 FUN_1459111a8 body=43 status=ok
// SIG undefined FUN_1459111a8(void)

undefined8 FUN_1459111a8(undefined8 param_1,int param_2)

{
  FUN_1459111d4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 1459111d4 FUN_1459111d4 body=299 status=ok
// SIG undefined FUN_1459111d4(void)

void FUN_1459111d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8aeee0;
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f98(param_1 + 0x55);
  if ((longlong *)param_1[0x50] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x50] + 0x10))();
  }
  FUN_14109e9d6(param_1[0x4e],*(undefined4 *)(param_1 + 0x4f));
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_14109ec9a(param_1 + 0x22);
  FUN_1459112ff(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_145911365(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_14109ec71(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 1459112ff FUN_1459112ff body=38 status=ok
// SIG undefined FUN_1459112ff(void)

void FUN_1459112ff(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145911326(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 145911326 FUN_145911326 body=63 status=ok
// SIG undefined FUN_145911326(void)

void FUN_145911326(longlong *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014591135a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 145911365 FUN_145911365 body=38 status=ok
// SIG undefined FUN_145911365(void)

void FUN_145911365(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14591138c(param_1);
    param_1 = param_1 + 0x78;
  }
  return;
}



// FUNCTION 14591138c FUN_14591138c body=104 status=ok
// SIG undefined FUN_14591138c(void)

void FUN_14591138c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_14109ec71(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145911400 FUN_145911400 body=42 status=ok
// SIG undefined FUN_145911400(void)

undefined8 * FUN_145911400(undefined8 *param_1)

{
  FUN_14591142a();
  *param_1 = &PTR_FUN_14b6e89d0;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  return param_1;
}



// FUNCTION 14591142a FUN_14591142a body=204 status=ok
// SIG undefined FUN_14591142a(void)

undefined8 * FUN_14591142a(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b015a40;
  *(undefined4 *)(param_1 + 9) = 0x428c0000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x24) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x124) = uVar1;
  *(undefined4 *)(param_1 + 0x25) = uVar2;
  *(undefined4 *)((longlong)param_1 + 300) = uVar3;
  param_1[0x26] = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xbf800000bf800000;
  *(undefined1 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  FUN_144894d4c(param_1 + 0x30);
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  return param_1;
}



// FUNCTION 145911512 FUN_145911512 body=526 status=ok
// SIG undefined FUN_145911512(void)

void FUN_145911512(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  longlong lVar12;
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong local_108;
  ulonglong uStack_100;
  undefined1 *local_f8 [2];
  undefined ***local_e8;
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *local_b8;
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  longlong local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_108 = 0;
  uStack_100 = 0;
  uVar8 = FUN_14060e84c();
  plVar9 = (longlong *)FUN_14041a931(uVar8);
  if (plVar9 != (longlong *)0x0) {
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9);
    uStack_100 = uStack_100 & 0xffffffff00000000;
    iVar2 = (int)plVar9[1];
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2);
    }
    if (iVar2 != 0) {
      FUN_1488366ac(&local_108);
      lVar7 = plVar9[1];
      if ((longlong)(int)lVar7 != 0) {
        lVar3 = *plVar9;
        lVar12 = 0;
        do {
          if ((*(char *)(lVar3 + 8 + lVar12) == '\x01') &&
             (*(longlong *)(lVar3 + 0x10 + lVar12) == *(longlong *)(param_1 + 0x28))) {
            puVar10 = (undefined8 *)FUN_1488348fc(&local_108);
            *puVar10 = *(undefined8 *)(lVar3 + lVar12);
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(lVar3 + 0xc + lVar12);
            *(undefined8 *)((longlong)puVar10 + 0xc) = *(undefined8 *)(lVar3 + 0x10 + lVar12);
            puVar10[5] = *(undefined8 *)(lVar3 + 0x28 + lVar12);
            puVar1 = (undefined4 *)(lVar3 + 0x18 + lVar12);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(undefined4 *)(puVar10 + 3) = *puVar1;
            *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar4;
            *(undefined4 *)(puVar10 + 4) = uVar5;
            *(undefined4 *)((longlong)puVar10 + 0x24) = uVar6;
          }
          lVar12 = lVar12 + 0x78;
        } while ((longlong)(int)lVar7 * 0x78 - lVar12 != 0);
      }
    }
  }
  local_118 = local_78;
  local_78[0] = 0;
  local_68 = (longlong *)0x0;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14b3fb1d0;
  local_b8 = &LAB_143d20bfa;
  local_e8 = (undefined ***)0x0;
  local_d8 = &PTR_LAB_14b3fb1b0;
  local_d0 = &LAB_143d20be8;
  local_f8[0] = &LAB_1488367f4;
  local_90 = param_1;
  FUN_14591174e(param_1,&local_108,local_f8);
  if (local_f8[0] != (undefined1 *)0x0) {
    pppuVar11 = local_e8;
    if (local_e8 == (undefined ***)0x0) {
      pppuVar11 = &local_d8;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  if (local_b8 != (undefined1 *)0x0) {
    pppuVar11 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar11 = &local_98;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  if (local_78[0] != 0) {
    plVar9 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar9 = local_58;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145911722 FUN_145911722 body=12 status=ok
// SIG undefined FUN_145911722(void)

void FUN_145911722(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014591172b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14591172e FUN_14591172e body=31 status=ok
// SIG undefined FUN_14591172e(void)

undefined8 FUN_14591172e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14591174e FUN_14591174e body=711 status=ok
// SIG undefined FUN_14591174e(void)

void FUN_14591174e(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar2 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x38);
    lVar6 = 0;
    do {
      *(undefined2 *)(lVar9 + 0x10 + lVar6) = 0x100;
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar6);
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  if ((longlong)(int)param_2[1] != 0) {
    lVar9 = *param_2;
    local_68 = (longlong)(int)param_2[1] * 0x30 + lVar9;
    local_70 = param_4 + 4;
    do {
      iVar2 = *(int *)(param_1 + 0x40);
      local_58 = lVar9;
      local_50 = param_3;
      if ((longlong)iVar2 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x38);
        lVar8 = 0;
        do {
          cVar3 = FUN_148836714(&local_58,lVar8 + lVar6);
          if (cVar3 != '\0') {
            uVar7 = (int)(lVar8 >> 3) * -0x55555555;
            if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x40))) {
              *(undefined1 *)(*plVar1 + 0x11 + (ulonglong)(uVar7 & 0x7fffffff) * 0x18) = 0;
              if ((*param_5 == 0) ||
                 (lVar6 = *(longlong *)(*plVar1 + (ulonglong)(uVar7 & 0x7fffffff) * 0x18),
                 lVar6 == 0)) goto LAB_1459118b7;
              lVar8 = FUN_14116e48a();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_1459118b7;
              pcVar10 = (code *)*param_5;
              plVar5 = param_5 + 4;
              if ((longlong *)param_5[2] != (longlong *)0x0) {
                plVar5 = (longlong *)param_5[2];
              }
              goto LAB_145911957;
            }
            break;
          }
          lVar8 = lVar8 + 0x18;
        } while ((longlong)iVar2 * 0x18 != lVar8);
      }
      plVar5 = (longlong *)FUN_1404e9402(plVar1);
      *(undefined2 *)(plVar5 + 2) = 1;
      uVar4 = FUN_14116e48a();
      FUN_1404e95e0(param_1,&local_60,uVar4);
      if ((*plVar5 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      lVar6 = local_60;
      *plVar5 = local_60;
      if (local_60 != 0) {
        lVar8 = FUN_14116e48a();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
           (pcVar10 = (code *)*param_4, pcVar10 != (code *)0x0)) {
          plVar5 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar5 = local_70;
          }
LAB_145911957:
          uVar4 = (**(code **)(*plVar5 + 8))();
          (*pcVar10)(uVar4,lVar6,lVar9);
        }
      }
LAB_1459118b7:
      lVar9 = lVar9 + 0x30;
    } while (lVar9 != local_68);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar9 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    do {
      if ((char)plVar5[1] == '\x01') {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar6 = 0;
        }
        else {
          FUN_140a97e96(*(longlong *)(param_1 + 0x30),&local_60,plVar5[-1]);
          lVar6 = local_60;
        }
        *plVar5 = lVar6;
      }
      else if (*(char *)((longlong)plVar5 + 9) == '\x01') {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          FUN_140993b54(*(longlong *)(param_1 + 0x30),plVar5);
        }
        FUN_1404e9462(param_1,plVar5 + -1);
      }
      plVar5 = plVar5 + 3;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != 0);
  }
  FUN_145911a16(plVar1);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145911a16 FUN_145911a16 body=106 status=ok
// SIG undefined FUN_145911a16(void)

void FUN_145911a16(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    return;
  }
  uVar4 = 0;
  bVar1 = false;
  do {
    uVar4 = (ulonglong)(int)uVar4;
    lVar3 = uVar4 * 0x18 + 0x11;
    while (*(char *)(*param_1 + lVar3) == '\0') {
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
      if ((longlong)iVar2 <= (longlong)uVar4) {
        if (!bVar1) {
          return;
        }
        goto LAB_145911a72;
      }
    }
    FUN_1404ec6d4(param_1,uVar4 & 0xffffffff);
    iVar2 = (int)param_1[1];
    bVar1 = true;
  } while ((int)uVar4 < iVar2);
LAB_145911a72:
  FUN_141089ae6(param_1);
  return;
}



// FUNCTION 145911a80 FUN_145911a80 body=5519 status=ok
// SIG undefined FUN_145911a80(void)

void FUN_145911a80(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = FUN_1459132fc(DAT_14c951640);
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar1);
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x288) = lVar1;
  if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2f50,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2f58,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2f60,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2f68,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2f70,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2f78,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2f80,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2f88,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2f90,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2f98,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2fa0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2fa8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2fb0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2fb8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2fc0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2fc8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2fd0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2fd8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2fe0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2fe8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2ff0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2ff8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3000,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3008,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3010,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3018,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3020,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3028,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134b1fc(lVar1,DAT_14caf3030,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3038,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3040,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3048,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134b1fc(lVar1,DAT_14caf3050,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134b1fc(lVar1,DAT_14caf3058,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134b1fc(lVar1,DAT_14caf3060,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134b1fc(lVar1,DAT_14caf3068,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134b1fc(lVar1,DAT_14caf3070,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134b1fc(lVar1,DAT_14caf3078,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134b1fc(lVar1,DAT_14caf3080,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134b1fc(lVar1,DAT_14caf3088,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3090,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3098,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134b1fc(lVar1,DAT_14caf30a0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf30a8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf30b0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf30b8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf30c0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf30c8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf30d0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf30d8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf30e0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf30e8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf30f0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134b1fc(lVar1,DAT_14caf30f8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3100,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3108,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3110,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3118,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3120,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3128,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3130,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3138,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3140,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3148,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3150,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3158,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3160,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3168,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3170,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3178,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3180,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3188,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3190,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3198,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2f48,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf31a0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf31a8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf31b0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf31b8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf31c0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf31c8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf31d0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf31d8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf31e0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf31e8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf31f0,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf31f8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3200,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3208,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3210,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3218,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2f38,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf2f40,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_14134abec(lVar1,DAT_14caf3220,0);
  return;
}



// FUNCTION 145913010 FUN_145913010 body=340 status=ok
// SIG undefined FUN_145913010(void)

undefined4 * FUN_145913010(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1459131f8(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0x14) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_145913166(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_40 + 3) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0x14) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14134b7b2(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145913166 FUN_145913166 body=145 status=ok
// SIG undefined FUN_145913166(void)

undefined8 FUN_145913166(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x1c);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x1c) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          puVar1[4] = (int)param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_147bee560((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[5];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1459131f8 FUN_1459131f8 body=260 status=ok
// SIG undefined FUN_1459131f8(void)

int * FUN_1459131f8(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 1459132fc FUN_1459132fc body=177 status=ok
// SIG undefined FUN_1459132fc(void)

undefined8 FUN_1459132fc(undefined8 param_1)

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
  local_b8 = FUN_145970a54();
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



// FUNCTION 1459133ae FUN_1459133ae body=53 status=ok
// SIG undefined FUN_1459133ae(void)

void FUN_1459133ae(longlong *param_1)

{
  FUN_1459133e4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459133e4 FUN_1459133e4 body=90 status=ok
// SIG undefined FUN_1459133e4(void)

void FUN_1459133e4(longlong param_1)

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



// FUNCTION 14591343e FUN_14591343e body=5585 status=ok
// SIG undefined FUN_14591343e(void)

void FUN_14591343e(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  undefined8 local_228;
  undefined8 *local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 *local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 *local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 *local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 *local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 *local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined8 *local_80;
  ulonglong uStack_78;
  undefined1 local_70 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_88[0] = 1;
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_1446f470e(&local_90,L"BoundText",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_90,0x1e0);
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  FUN_1446efa72(&local_a0,0,2,0x10);
  local_98 = 2;
  *local_a0 = &PTR_LAB_149ef0aa0;
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
  local_a0[2] = lVar2;
  *local_a0 = &PTR_FUN_149f1eb50;
  local_a0[3] = &LAB_14290836e;
  FUN_14134bb3c(local_70,&local_a0);
  FUN_1449db362(&local_80);
  local_88[0] = 1;
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_1446f470e(&local_a8,L"Font",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_a8,0x4e0);
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  FUN_1446efa72(&local_b8,0,2,0x10);
  local_b0 = 2;
  *local_b8 = &PTR_LAB_149ef0aa0;
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
  local_b8[2] = lVar2;
  *local_b8 = &PTR_FUN_149f1eb50;
  local_b8[3] = &LAB_142908376;
  FUN_14134bb3c(local_70,&local_b8);
  FUN_1449db362(&local_80);
  local_88[0] = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78 = uStack_78 & 0xffffffff00000000;
  FUN_1446efa72(&local_80,0,2,0x10);
  uStack_78._0_4_ = 2;
  *local_80 = &PTR_LAB_149f1ec30;
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
  local_80[2] = lVar2;
  *local_80 = &PTR_FUN_149f1ebc0;
  local_80[3] = &LAB_14290837e;
  FUN_1446f470e(&local_c0,L"StrikeBrush",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_c0,0x540);
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_1446efa72(&local_d0,0,2,0x10);
  local_c8 = 2;
  *local_d0 = &PTR_LAB_149ef0aa0;
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
  local_d0[2] = lVar2;
  *local_d0 = &PTR_FUN_149f1eb50;
  local_d0[3] = &LAB_142908376;
  FUN_14134bb3c(local_70,&local_d0);
  FUN_1449db362(&local_80);
  local_88[0] = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78._0_4_ = 0;
  FUN_1446efa72(&local_80,0,2,0x10);
  uStack_78 = CONCAT44(uStack_78._4_4_,2);
  *local_80 = &PTR_LAB_149f1ec30;
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
  local_80[2] = lVar2;
  *local_80 = &PTR_FUN_149f1ebc0;
  local_80[3] = &LAB_142908388;
  FUN_1446f470e(&local_d8,L"ColorAndOpacity",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_d8,0x548);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,2,0x10);
  local_e0 = 2;
  *local_e8 = &PTR_LAB_149ef0aa0;
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
  local_e8[2] = lVar2;
  *local_e8 = &PTR_FUN_149f1eb50;
  local_e8[3] = &LAB_142908376;
  FUN_14134bb3c(local_70,&local_e8);
  FUN_1449db362(&local_80);
  local_88[0] = 1;
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_1446f470e(&local_f0,L"ShadowOffset",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_f0,0x560);
  local_100 = (undefined8 *)0x0;
  local_f8 = 0;
  FUN_1446efa72(&local_100,0,2,0x10);
  local_f8 = 2;
  *local_100 = &PTR_LAB_149ef0aa0;
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
  local_100[2] = lVar2;
  *local_100 = &PTR_FUN_149f1eb50;
  local_100[3] = &LAB_142908376;
  FUN_14134bb3c(local_70,&local_100);
  FUN_1449db362(&local_80);
  local_88[0] = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78 = uStack_78 & 0xffffffff00000000;
  FUN_1446efa72(&local_80,0,2,0x10);
  uStack_78._0_4_ = 2;
  *local_80 = &PTR_LAB_149f1ec30;
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
  local_80[2] = lVar2;
  *local_80 = &PTR_FUN_149f1ebc0;
  local_80[3] = &LAB_142908388;
  FUN_1446f470e(&local_108,L"ShadowColorAndOpacity",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_108,0x570);
  local_118 = (undefined8 *)0x0;
  local_110 = 0;
  FUN_1446efa72(&local_118,0,2,0x10);
  local_110 = 2;
  *local_118 = &PTR_LAB_149ef0aa0;
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
  local_118[2] = lVar2;
  *local_118 = &PTR_FUN_149f1eb50;
  local_118[3] = &LAB_142908376;
  FUN_14134bb3c(local_70,&local_118);
  FUN_1449db362(&local_80);
  local_88[0] = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78._0_4_ = 0;
  FUN_1446efa72(&local_80,0,2,0x10);
  uStack_78._0_4_ = 2;
  *local_80 = &PTR_LAB_149f1ec30;
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
  local_80[2] = lVar2;
  *local_80 = &PTR_FUN_149f1ebc0;
  local_80[3] = &LAB_14290837e;
  FUN_1446f470e(&local_120,L"HighlightColor",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_120,0x580);
  local_130 = (undefined8 *)0x0;
  local_128 = 0;
  FUN_1446efa72(&local_130,0,2,0x10);
  local_128 = 2;
  *local_130 = &PTR_LAB_149ef0aa0;
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
  local_130[2] = lVar2;
  *local_130 = &PTR_FUN_149f1eb50;
  local_130[3] = &LAB_142908376;
  FUN_14134bb3c(local_70,&local_130);
  FUN_1449db362(&local_80);
  local_88[0] = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78._0_4_ = 0;
  FUN_1446efa72(&local_80,0,2,0x10);
  uStack_78._0_4_ = 2;
  *local_80 = &PTR_LAB_149f1ec30;
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
  local_80[2] = lVar2;
  *local_80 = &PTR_FUN_149f1ebc0;
  local_80[3] = &LAB_14290837e;
  FUN_1446f470e(&local_138,L"HighlightShape",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_138,0x590);
  local_148 = (undefined8 *)0x0;
  local_140 = 0;
  FUN_1446efa72(&local_148,0,2,0x10);
  local_140 = 2;
  *local_148 = &PTR_LAB_149ef0aa0;
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
  local_148[2] = lVar2;
  *local_148 = &PTR_FUN_149f1eb50;
  local_148[3] = &LAB_142908376;
  FUN_14134bb3c(local_70,&local_148);
  FUN_1449db362(&local_80);
  local_88[0] = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78._0_4_ = 0;
  FUN_1446efa72(&local_80,0,2,0x10);
  uStack_78._0_4_ = 2;
  *local_80 = &PTR_LAB_149f1ec30;
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
  local_80[2] = lVar2;
  *local_80 = &PTR_FUN_149f1ebc0;
  local_80[3] = &LAB_14290837e;
  FUN_1446f470e(&local_150,L"HighlightText",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_150,0x598);
  local_160 = (undefined8 *)0x0;
  local_158 = 0;
  FUN_1446efa72(&local_160,0,2,0x10);
  local_158 = 2;
  *local_160 = &PTR_LAB_149ef0aa0;
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
  local_160[2] = lVar2;
  *local_160 = &PTR_FUN_149f1eb50;
  local_160[3] = &LAB_14290836e;
  FUN_14134bb3c(local_70,&local_160);
  FUN_1449db362(&local_80);
  local_88[0] = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78._0_4_ = 0;
  FUN_1446efa72(&local_80,0,2,0x10);
  uStack_78._0_4_ = 2;
  *local_80 = &PTR_LAB_149f1ec30;
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
  local_80[2] = lVar2;
  *local_80 = &PTR_FUN_149f1ebc0;
  local_80[3] = &LAB_14290837e;
  FUN_1446f470e(&local_168,L"WrapTextAt",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_168,0x5a8);
  local_178 = (undefined8 *)0x0;
  local_170 = 0;
  FUN_1446efa72(&local_178,0,2,0x10);
  local_170 = 2;
  *local_178 = &PTR_LAB_149ef0aa0;
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
  local_178[2] = lVar2;
  *local_178 = &PTR_FUN_149f1eb50;
  local_178[3] = &LAB_14290836e;
  FUN_14134bb3c(local_70,&local_178);
  FUN_1449db362(&local_80);
  local_88[0] = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78._0_4_ = 0;
  FUN_1446efa72(&local_80,0,2,0x10);
  uStack_78._0_4_ = 2;
  *local_80 = &PTR_LAB_149f1ec30;
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
  local_80[2] = lVar2;
  *local_80 = &PTR_FUN_149f1ebc0;
  local_80[3] = &LAB_14290837e;
  FUN_1446f470e(&local_180,L"AutoWrapText",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_180,0x5ac);
  local_190 = (undefined8 *)0x0;
  local_188 = 0;
  FUN_1446efa72(&local_190,0,2,0x10);
  local_188 = 2;
  *local_190 = &PTR_LAB_149ef0aa0;
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
  local_190[2] = lVar2;
  *local_190 = &PTR_FUN_149f1eb50;
  local_190[3] = &LAB_14290836e;
  FUN_14134bb3c(local_70,&local_190);
  FUN_1449db362(&local_80);
  local_88[0] = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78._0_4_ = 0;
  FUN_1446efa72(&local_80,0,2,0x10);
  uStack_78._0_4_ = 2;
  *local_80 = &PTR_LAB_149f1ec30;
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
  local_80[2] = lVar2;
  *local_80 = &PTR_FUN_149f1ebc0;
  local_80[3] = &LAB_14290837e;
  FUN_1446f470e(&local_198,L"WrappingPolicy",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_198,0x5ad);
  local_1a8 = (undefined8 *)0x0;
  local_1a0 = 0;
  FUN_1446efa72(&local_1a8,0,2,0x10);
  local_1a0 = 2;
  *local_1a8 = &PTR_LAB_149ef0aa0;
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
  local_1a8[2] = lVar2;
  *local_1a8 = &PTR_FUN_149f1eb50;
  local_1a8[3] = &LAB_14290836e;
  FUN_14134bb3c(local_70,&local_1a8);
  FUN_1449db362(&local_80);
  local_88[0] = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78._0_4_ = 0;
  FUN_1446efa72(&local_80,0,2,0x10);
  uStack_78._0_4_ = 2;
  *local_80 = &PTR_LAB_149f1ec30;
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
  local_80[2] = lVar2;
  *local_80 = &PTR_FUN_149f1ebc0;
  local_80[3] = &LAB_14290837e;
  FUN_1446f470e(&local_1b0,L"TransformPolicy",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_1b0,0x5ae);
  local_1c0 = (undefined8 *)0x0;
  local_1b8 = 0;
  FUN_1446efa72(&local_1c0,0,2,0x10);
  local_1b8 = 2;
  *local_1c0 = &PTR_LAB_149ef0aa0;
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
  local_1c0[2] = lVar2;
  *local_1c0 = &PTR_FUN_149f1eb50;
  local_1c0[3] = &LAB_14290836e;
  FUN_14134bb3c(local_70,&local_1c0);
  FUN_1449db362(&local_80);
  local_88[0] = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78._0_4_ = 0;
  FUN_1446efa72(&local_80,0,2,0x10);
  uStack_78._0_4_ = 2;
  *local_80 = &PTR_LAB_149f1ec30;
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
  local_80[2] = lVar2;
  *local_80 = &PTR_FUN_149f1ebc0;
  local_80[3] = &LAB_14290837e;
  FUN_1446f470e(&local_1c8,L"Margin",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_1c8,0x5b0);
  local_1d8 = (undefined8 *)0x0;
  local_1d0 = 0;
  FUN_1446efa72(&local_1d8,0,2,0x10);
  local_1d0 = 2;
  *local_1d8 = &PTR_LAB_149ef0aa0;
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
  local_1d8[2] = lVar2;
  *local_1d8 = &PTR_FUN_149f1eb50;
  local_1d8[3] = &LAB_14290836e;
  FUN_14134bb3c(local_70,&local_1d8);
  FUN_1449db362(&local_80);
  local_88[0] = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78._0_4_ = 0;
  FUN_1446efa72(&local_80,0,2,0x10);
  uStack_78._0_4_ = 2;
  *local_80 = &PTR_LAB_149f1ec30;
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
  local_80[2] = lVar2;
  *local_80 = &PTR_FUN_149f1ebc0;
  local_80[3] = &LAB_14290837e;
  FUN_1446f470e(&local_1e0,L"Justification",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_1e0,0x5c0);
  local_1f0 = (undefined8 *)0x0;
  local_1e8 = 0;
  FUN_1446efa72(&local_1f0,0,2,0x10);
  local_1e8 = 2;
  *local_1f0 = &PTR_LAB_149ef0aa0;
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
  local_1f0[2] = lVar2;
  *local_1f0 = &PTR_FUN_149f1eb50;
  local_1f0[3] = &LAB_14290836e;
  FUN_14134bb3c(local_70,&local_1f0);
  FUN_1449db362(&local_80);
  local_88[0] = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78._0_4_ = 0;
  FUN_1446efa72(&local_80,0,2,0x10);
  uStack_78._0_4_ = 2;
  *local_80 = &PTR_LAB_149f1ec30;
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
  local_80[2] = lVar2;
  *local_80 = &PTR_FUN_149f1ebc0;
  local_80[3] = &LAB_14290837e;
  FUN_1446f470e(&local_1f8,L"LineHeightPercentage",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_1f8,0x5c4);
  local_208 = (undefined8 *)0x0;
  local_200 = 0;
  FUN_1446efa72(&local_208,0,2,0x10);
  local_200 = 2;
  *local_208 = &PTR_LAB_149ef0aa0;
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
  local_208[2] = lVar2;
  *local_208 = &PTR_FUN_149f1eb50;
  local_208[3] = &LAB_14290836e;
  FUN_14134bb3c(local_70,&local_208);
  FUN_1449db362(&local_80);
  local_88[0] = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78._0_4_ = 0;
  FUN_1446efa72(&local_80,0,2,0x10);
  uStack_78 = CONCAT44(uStack_78._4_4_,2);
  *local_80 = &PTR_LAB_149f1ec30;
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
  local_80[2] = lVar2;
  *local_80 = &PTR_FUN_149f1ebc0;
  local_80[3] = &LAB_14290837e;
  FUN_1446f470e(&local_210,L"ApplyLineHeightToBottomLine",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_210,0x5c8);
  local_220 = (undefined8 *)0x0;
  local_218 = 0;
  FUN_1446efa72(&local_220,0,2,0x10);
  local_218 = 2;
  *local_220 = &PTR_LAB_149ef0aa0;
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
  local_220[2] = lVar2;
  *local_220 = &PTR_FUN_149f1eb50;
  local_220[3] = &LAB_14290836e;
  FUN_14134bb3c(local_70,&local_220);
  FUN_1449db362(&local_80);
  local_88[0] = 1;
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_1446f470e(&local_228,L"MinDesiredWidth",1);
  local_238 = local_88;
  FUN_14134b99c(param_1,local_70,local_228,0x5cc);
  FUN_1449db362(&local_80);
  if ((local_60 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145914a10 FUN_145914a10 body=136 status=ok
// SIG undefined FUN_145914a10(void)

undefined8 FUN_145914a10(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = *(int *)(param_1 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x18);
  pcVar5 = *(code **)(param_1 + 0x20);
  local_20 = *param_2;
  local_18 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(iVar3 + lVar4);
  plVar6 = (longlong *)param_2[1];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145914aa4 FUN_145914aa4 body=261 status=ok
// SIG undefined FUN_145914aa4(void)

void FUN_145914aa4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x28);
    lVar7 = (longlong)iVar3;
    if (lVar7 != 0) {
      lVar8 = 0;
      do {
        if (*(longlong *)(lVar5 + lVar8) == *param_2) goto LAB_145914b61;
        lVar8 = lVar8 + 0x10;
      } while (lVar7 << 4 != lVar8);
    }
    *(uint *)(param_1 + 0x28) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar3 + 1U) {
      FUN_145914c98((longlong *)(param_1 + 0x20),iVar3);
      lVar5 = *(longlong *)(param_1 + 0x20);
    }
    *(longlong *)(lVar5 + lVar7 * 0x10) = *param_2;
    lVar8 = param_2[1];
    *(longlong *)(lVar5 + 8 + lVar7 * 0x10) = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    uVar6 = (**(code **)(*(longlong *)*param_2 + 0x58))();
    local_40 = FUN_14583d36c;
    local_38 = 0x10;
    FUN_145914baa(uVar6,local_30,param_1 + -0x10);
  }
LAB_145914b61:
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145914baa FUN_145914baa body=237 status=ok
// SIG undefined FUN_145914baa(void)

undefined8
FUN_145914baa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_149e063e0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14a5a9d50;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_14134bd86(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145914c98 FUN_145914c98 body=132 status=ok
// SIG undefined FUN_145914c98(void)

void FUN_145914c98(longlong param_1,int param_2)

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



// FUNCTION 145914d1c FUN_145914d1c body=121 status=ok
// SIG undefined FUN_145914d1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145914d1c(void)

{
  FUN_145914d96();
  _DAT_14ca91378 = L"DstOffsetParam";
  DAT_14ca913a2 = FUN_140850cc5();
  _DAT_14ca91380 = FUN_140ec6960();
  _DAT_14ca91390 = &LAB_14682652b;
  _DAT_14ca91398 = 0x1000000e0;
  _DAT_14ca913a0 = 0;
  _DAT_14ca91388 = DAT_14ca89a20;
  DAT_14ca89a20 = &DAT_14ca91378;
  return;
}



// FUNCTION 145914d96 FUN_145914d96 body=121 status=ok
// SIG undefined FUN_145914d96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145914d96(void)

{
  FUN_145914e10();
  _DAT_14ca913a8 = L"SrcOffsetParam";
  DAT_14ca913d2 = FUN_140850cc5();
  _DAT_14ca913b0 = FUN_140ec6960();
  _DAT_14ca913c0 = &LAB_14682652b;
  _DAT_14ca913c8 = 0x1000000e6;
  _DAT_14ca913d0 = 0;
  _DAT_14ca913b8 = DAT_14ca89a20;
  DAT_14ca89a20 = &DAT_14ca913a8;
  return;
}



// FUNCTION 145914e10 FUN_145914e10 body=121 status=ok
// SIG undefined FUN_145914e10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145914e10(void)

{
  FUN_145914f10();
  _DAT_14ca913d8 = L"DimensionsParam";
  DAT_14ca91402 = FUN_140850cc5();
  _DAT_14ca913e0 = FUN_140ec6960();
  _DAT_14ca913f0 = &LAB_14682652b;
  _DAT_14ca913f8 = 0x1000000ec;
  _DAT_14ca91400 = 0;
  _DAT_14ca913e8 = DAT_14ca89a20;
  DAT_14ca89a20 = &DAT_14ca913d8;
  return;
}



// FUNCTION 145914e8a FUN_145914e8a body=133 status=ok
// SIG undefined FUN_145914e8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145914e8a(void)

{
  _DAT_14ca93d70 = L"BASE";
  DAT_14ca93d9a = 4;
  FUN_140b35ae4();
  _DAT_14ca93d80 = DAT_14ca89a20;
  _DAT_14ca93d78 = &DAT_14ca8c6c8;
  _DAT_14ca93d88 = &LAB_14682652b;
  DAT_14ca89a20 = &DAT_14ca93d70;
  DAT_14ca89a75 = DAT_14ca89a75 + '\x01';
  _DAT_14ca93d90 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca89a76 = DAT_14ca89a76 + '\x01';
  }
  return;
}



// FUNCTION 145914f10 FUN_145914f10 body=216 status=ok
// SIG undefined FUN_145914f10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145914f10(void)

{
  _DAT_14ca91438 = L"DstResourceParam";
  DAT_14ca91462 = FUN_140850cc5();
  _DAT_14ca91440 = FUN_140fb78d0();
  _DAT_14ca91450 = &LAB_14682652b;
  _DAT_14ca91458 = 0x1000000f6;
  _DAT_14ca91460 = 0;
  _DAT_14ca91448 = DAT_14ca89a20;
  DAT_14ca89a20 = &DAT_14ca91438;
  _DAT_14ca91408 = L"SrcResourceParam";
  DAT_14ca91432 = FUN_140850cc5();
  _DAT_14ca91410 = FUN_140fb78d0();
  _DAT_14ca91420 = &LAB_14682652b;
  _DAT_14ca91428 = 0x1000000f2;
  _DAT_14ca91430 = 0;
  _DAT_14ca91418 = DAT_14ca89a20;
  DAT_14ca89a20 = &DAT_14ca91408;
  return;
}



// FUNCTION 145914fe8 FUN_145914fe8 body=49 status=ok
// SIG undefined FUN_145914fe8(void)

void FUN_145914fe8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145915036(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145914ffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_14134bfd4(&DAT_14c9a2150);
  FUN_145a090e8(uVar2);
  return;
}



// FUNCTION 14591501a FUN_14591501a body=28 status=ok
// SIG undefined FUN_14591501a(void)

void FUN_14591501a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14134bfd4(&DAT_14c9a2150);
  FUN_145a090e8(uVar1);
  return;
}



// FUNCTION 145915036 FUN_145915036 body=191 status=ok
// SIG undefined FUN_145915036(void)

longlong FUN_145915036(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_1459150f6();
  lVar3 = *param_1;
  if (DAT_14c9a2170 != DAT_14c9a219c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14c9a21a0;
    if (DAT_14c9a21a8 != (undefined *)0x0) {
      puVar7 = DAT_14c9a21a8;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14c9a21b0 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14c9a2168 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14c9a2160;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 1459150f6 FUN_1459150f6 body=152 status=ok
// SIG undefined FUN_1459150f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459150f6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a21b8) {
    FUN_144b3d300(&DAT_14c9a21b8);
    if (DAT_14c9a21b8 == -1) {
      DAT_14c9a2188 = 0;
      DAT_14c9a2190 = 0;
      DAT_14c9a2168 = 0;
      _DAT_14c9a2170 = 0;
      _DAT_14c9a2194 = 0xffffffff00000080;
      DAT_14c9a219c = 0;
      DAT_14c9a21a8 = 0;
      DAT_14c9a21b0 = 0;
      atexit(FUN_142b2afa6);
      _Init_thread_footer(&DAT_14c9a21b8);
      return;
    }
  }
  return;
}



// FUNCTION 14591518e FUN_14591518e body=50 status=ok
// SIG undefined FUN_14591518e(void)

void FUN_14591518e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459151c0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4a26f0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x7a) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x82) = 0;
  return;
}



// FUNCTION 1459151c0 FUN_1459151c0 body=36 status=ok
// SIG undefined FUN_1459151c0(void)

undefined8 * FUN_1459151c0(undefined8 *param_1)

{
  FUN_1406ed660();
  *param_1 = &PTR_FUN_14a45c330;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 1459151e4 FUN_1459151e4 body=53 status=ok
// SIG undefined FUN_1459151e4(void)

void FUN_1459151e4(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4e09d0;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4e09f8;
  FUN_1449db362(param_1 + 0x48);
  FUN_14591521a(param_1 + 0x10);
  return;
}



// FUNCTION 14591521a FUN_14591521a body=76 status=ok
// SIG undefined FUN_14591521a(void)

void FUN_14591521a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_14b4e00d0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1411ebbe4();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145915262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145915266 FUN_145915266 body=124 status=ok
// SIG undefined FUN_145915266(void)

longlong * FUN_145915266(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b69fbe0;
  FUN_1459152e2(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
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
  return param_2;
}



// FUNCTION 1459152e2 FUN_1459152e2 body=91 status=ok
// SIG undefined FUN_1459152e2(void)

undefined8 * FUN_1459152e2(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_14099530a(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_14099530a();
  }
  FUN_141067fd6(param_1,param_2);
  *param_1 = &PTR_FUN_14b9a18a0;
  return param_1;
}



// FUNCTION 14591534a FUN_14591534a body=31 status=ok
// SIG undefined FUN_14591534a(void)

undefined8 FUN_14591534a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145915369 FUN_145915369 body=54 status=ok
// SIG undefined FUN_145915369(void)

void FUN_145915369(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459153a0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd27490;
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 1459153a0 FUN_1459153a0 body=32 status=ok
// SIG undefined FUN_1459153a0(void)

undefined8 * FUN_1459153a0(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bc0ffb0;
  return param_1;
}



// FUNCTION 1459153c0 FUN_1459153c0 body=138 status=ok
// SIG undefined FUN_1459153c0(void)

void FUN_1459153c0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400bc8c2(*(longlong *)(param_1 + 0xa0) + 0x11f0,&DAT_14cb712a8);
    FUN_1400bc8c2(*(longlong *)(param_1 + 0xa0) + 0x1218,&DAT_14cb712a8);
    FUN_1409df526(*(undefined8 *)(param_1 + 0xa0),&DAT_14cb712a8);
  }
  lVar1 = FUN_144a782da(param_1 + 0x6c0,&DAT_14cb72618);
  if (lVar1 != 0) {
    FUN_14134c034(lVar1,&DAT_14cb712a8);
  }
  FUN_1447f69b6(param_1 + 0x2310);
  return;
}



// FUNCTION 14591544a FUN_14591544a body=661 status=ok
// SIG undefined FUN_14591544a(void)

void FUN_14591544a(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  short sVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  
  FUN_14134c582();
  *(undefined1 *)(param_1 + 0x1a2) = DAT_14c761824;
  *(undefined1 *)(param_1 + 0x1a3) = DAT_14caf7c7a;
  *(undefined1 *)(param_1 + 0x1a4) = DAT_14caf7c7c;
  if ((*(longlong *)(param_1 + 0xa8) == 0) || (lVar3 = FUN_145915730(), lVar3 == 0)) {
    lVar3 = 0;
  }
  else {
    sVar7 = DAT_14caf7c70;
    if ((*(byte *)(lVar3 + 0x218) & 1) != 0) {
      sVar7 = *(short *)(lVar3 + 0x21c);
    }
    sVar2 = sVar7 + 1 + (ushort)(sVar7 == -1);
    *(short *)(param_1 + 0x188) = sVar2;
    sVar7 = DAT_14caf7c74;
    if ((*(byte *)(lVar3 + 0x220) & 1) != 0) {
      sVar7 = *(short *)(lVar3 + 0x224);
    }
    *(ushort *)(param_1 + 0x18a) = sVar7 + 1 + (ushort)(sVar7 == -1);
    puVar9 = &DAT_14c761824;
    if ((*(byte *)(lVar3 + 0x238) & 1) != 0) {
      puVar9 = (undefined1 *)(lVar3 + 0x23c);
    }
    *(undefined1 *)(param_1 + 0x1a2) = *puVar9;
    puVar9 = &DAT_14caf7c7a;
    if ((*(byte *)(lVar3 + 0x240) & 1) != 0) {
      puVar9 = (undefined1 *)(lVar3 + 0x244);
    }
    *(undefined1 *)(param_1 + 0x1a3) = *puVar9;
    puVar9 = &DAT_14caf7c7c;
    if ((*(byte *)(lVar3 + 600) & 1) != 0) {
      puVar9 = (undefined1 *)(lVar3 + 0x25c);
    }
    *(undefined1 *)(param_1 + 0x1a4) = *puVar9;
    plVar1 = *(longlong **)(param_1 + 0x130);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xf8))(plVar1,sVar2,1);
    }
    plVar1 = *(longlong **)(param_1 + 0x140);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xf8))(plVar1,*(undefined2 *)(param_1 + 0x18a),1);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0xb0);
  if ((((lVar6 != 0) || (lVar6 = FUN_1448abda6(param_1), lVar6 != 0)) &&
      (*(longlong *)(lVar6 + 0x260) != 0)) &&
     (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x260) + 0x38), lVar6 != 0)) {
    lVar4 = FUN_1459156e0();
    *(longlong *)(param_1 + 0x150) = lVar4;
    if (lVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar3 + 0x260);
    }
    *(undefined8 *)(lVar4 + 0xe0) = uVar8;
    *(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0xf0) = *(undefined8 *)(param_1 + 0x198);
    *(undefined2 *)(*(longlong *)(param_1 + 0x150) + 0x130) = *(undefined2 *)(param_1 + 0x188);
    *(undefined2 *)(*(longlong *)(param_1 + 0x150) + 0x132) = *(undefined2 *)(param_1 + 0x18a);
    FUN_140d08e64(param_1);
    FUN_140a83748(param_1,1);
    uVar8 = *(undefined8 *)(param_1 + 0x150);
    puVar5 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined2 *)(puVar5 + 8) = 1;
    *puVar5 = &PTR_FUN_149f45dc0;
    puVar5[10] = FUN_14363fbde;
    puVar5[0xc] = 0;
    puVar5[0xe] = &PTR_LAB_14aa2adb0;
    puVar5[0xf] = uVar8;
    puVar5[0x12] = 0;
    puVar5[0x14] = 0;
    *(undefined1 *)(puVar5 + 0x1a) = 0;
    FUN_1406e6496(lVar6 + 0x70,puVar5);
    return;
  }
  return;
}



// FUNCTION 1459156e0 FUN_1459156e0 body=79 status=ok
// SIG undefined FUN_1459156e0(void)

longlong FUN_1459156e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x160,0x10);
  FUN_14591587e(lVar1);
  if ((*(byte *)(lVar1 + 0x41) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1e8) = 1;
  }
  *(longlong *)(lVar1 + 0x18) = param_1;
  FUN_141300b68(param_1 + 0x70,lVar1);
  return lVar1;
}



// FUNCTION 145915730 FUN_145915730 body=102 status=ok
// SIG undefined FUN_145915730(void)

void FUN_145915730(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145915798();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145915798 FUN_145915798 body=228 status=ok
// SIG undefined FUN_145915798(void)

longlong FUN_145915798(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac5038 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_14788532f;
    local_40 = &LAB_146160bb8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x268;
    FUN_14081cfa3(L"/Script/Engine",L"NetworkPhysicsSettingsComponent",&DAT_14cac5038,&DAT_14788532e
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac5038;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591587e FUN_14591587e body=167 status=ok
// SIG undefined FUN_14591587e(void)

undefined8 * FUN_14591587e(undefined8 *param_1)

{
  FUN_145915926();
  *param_1 = &PTR_FUN_14aa261a0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x300000000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1b) = 0x7fffffff;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0x10003;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  return param_1;
}



// FUNCTION 145915926 FUN_145915926 body=166 status=ok
// SIG undefined FUN_145915926(void)

undefined8 * FUN_145915926(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 8) = 0x400;
  *param_1 = &PTR_FUN_14aa2adf0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xb] = puVar1;
  param_1[10] = puVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xf] = puVar1;
  param_1[0xe] = puVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0x13] = puVar1;
  param_1[0x12] = puVar1;
  param_1[0x14] = 0;
  return param_1;
}


