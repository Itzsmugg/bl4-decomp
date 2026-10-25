// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1459ff440 FUN_1459ff440 body=93 status=ok
// SIG undefined FUN_1459ff440(void)

undefined8 * FUN_1459ff440(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140de863f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486eab00(param_1,iVar1);
      FUN_1486eab73(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1459ff49e FUN_1459ff49e body=379 status=ok
// SIG undefined FUN_1459ff49e(void)

void FUN_1459ff49e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  
  param_2 = (undefined8 *)*param_2;
  uVar15 = *(undefined4 *)*param_2;
  uVar1 = *(undefined4 *)param_2[4];
  uVar2 = *(undefined4 *)param_2[8];
  uVar7 = *(undefined1 *)param_2[0xc];
  puVar10 = (undefined8 *)param_2[0x10];
  puVar11 = (undefined8 *)param_2[0x14];
  uVar8 = *(undefined1 *)param_2[0x18];
  uVar3 = *(undefined4 *)param_2[0x1c];
  uVar4 = *(undefined4 *)param_2[0x20];
  uVar9 = *(undefined1 *)param_2[0x24];
  uVar5 = *(undefined4 *)param_2[0x28];
  uVar6 = *(undefined4 *)param_2[0x2c];
  puVar12 = (undefined4 *)param_2[0x30];
  lVar13 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  puVar14 = (undefined1 *)
            FUN_144828ac0(param_2 + 0x34,0,
                          *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar13 * 0x14) +
                          *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar13 * 0x14));
  lVar13 = *(longlong *)(param_1 + 0xc0);
  *puVar14 = uVar7;
  puVar14[1] = uVar8;
  puVar14[2] = uVar9;
  *(undefined8 *)(puVar14 + 4) = *puVar10;
  *(undefined8 *)(puVar14 + 0xc) = *puVar11;
  *(undefined4 *)(puVar14 + 0x1c) = uVar3;
  *(undefined4 *)(puVar14 + 0x20) = uVar4;
  *(undefined4 *)(puVar14 + 0x14) = uVar1;
  *(undefined4 *)(puVar14 + 0x18) = uVar2;
  *(undefined4 *)(puVar14 + 0x24) = uVar5;
  *(undefined4 *)(puVar14 + 0x28) = uVar6;
  uVar15 = FUN_144a85682(puVar14,uVar15,(float)*(double *)(lVar13 + 0x20));
  *puVar12 = uVar15;
  return;
}



// FUNCTION 1459ff61a FUN_1459ff61a body=32 status=ok
// SIG undefined FUN_1459ff61a(void)

void FUN_1459ff61a(undefined8 param_1,undefined4 param_2)

{
  FUN_1459ff63a();
  FUN_1448c4a0e(param_1,param_2);
  return;
}



// FUNCTION 1459ff63a FUN_1459ff63a body=132 status=ok
// SIG undefined FUN_1459ff63a(void)

void FUN_1459ff63a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
  lVar1 = FUN_1458e098c(lVar1);
  if (lVar1 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ff6d2 FUN_1459ff6d2 body=67 status=ok
// SIG undefined FUN_1459ff6d2(void)

void FUN_1459ff6d2(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1459ff792(param_1);
    FUN_1459ff716(param_1,0);
    return;
  }
  FUN_1459ff716(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_146228a02(param_1);
  return;
}



// FUNCTION 1459ff716 FUN_1459ff716 body=123 status=ok
// SIG undefined FUN_1459ff716(void)

void FUN_1459ff716(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
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



// FUNCTION 1459ff792 FUN_1459ff792 body=327 status=ok
// SIG undefined FUN_1459ff792(void)

void FUN_1459ff792(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1459ff8da FUN_1459ff8da body=56 status=ok
// SIG undefined FUN_1459ff8da(void)

void FUN_1459ff8da(longlong param_1)

{
  longlong lVar1;
  
  FUN_1449db8d8(param_1 + 0x38);
  lVar1 = param_1 + 0x30;
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(lVar1);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x38))(lVar1);
  FUN_1459ff912(lVar1);
  return;
}



// FUNCTION 1459ff912 FUN_1459ff912 body=62 status=ok
// SIG undefined FUN_1459ff912(void)

void FUN_1459ff912(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140495e96();
  if (lVar1 != 0) {
    lVar1 = FUN_1403ca91c(lVar1);
    if (lVar1 != 0) {
      FUN_140457ffc(lVar1 + 0x78,param_1 + -0x30);
      return;
    }
  }
  return;
}



// FUNCTION 1459ff950 FUN_1459ff950 body=62 status=ok
// SIG undefined FUN_1459ff950(void)

undefined1 FUN_1459ff950(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1459ff98e(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1459ff98e FUN_1459ff98e body=79 status=ok
// SIG undefined FUN_1459ff98e(void)

undefined8 * FUN_1459ff98e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1459ffa2e(param_1,iVar1);
      FUN_1459ff9dd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1459ff9dd FUN_1459ff9dd body=80 status=ok
// SIG undefined FUN_1459ff9dd(void)

void FUN_1459ff9dd(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1459ffa2e FUN_1459ffa2e body=98 status=ok
// SIG undefined FUN_1459ffa2e(void)

void FUN_1459ffa2e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1459ffa90 FUN_1459ffa90 body=247 status=ok
// SIG undefined FUN_1459ffa90(void)

void FUN_1459ffa90(undefined8 param_1,longlong param_2)

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
  FUN_141445016(param_1,iVar1 != 0,local_28 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ffb88 FUN_1459ffb88 body=605 status=ok
// SIG undefined FUN_1459ffb88(void)

void FUN_1459ffb88(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144729dda(param_1 + 0x54);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x54);
    if (*(longlong *)(lVar2 + 0x40) == 0) {
      plVar3 = (longlong *)(lVar2 + 0x28);
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x40) + 0x238) + 8);
    }
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*(longlong *)*plVar3 + 0x210))();
      if (plVar3 != (longlong *)0x0) {
        local_38 = FUN_1459ffde6(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"toggledata");
        *(undefined8 *)(param_1 + 0xd0) = local_28;
        local_38 = FUN_1459ffde6(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"sliderhandle");
        *(undefined8 *)(param_1 + 0xe8) = local_28;
        local_38 = FUN_1459ffde6(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"stepperdata");
        *(undefined8 *)(param_1 + 0x100) = local_28;
        local_38 = FUN_1459ffde6(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"bshowlogo");
        *(undefined8 *)(param_1 + 0x110) = local_28;
        local_38 = FUN_1459ffde6(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,&DAT_14b9ce7ed);
        *(undefined8 *)(param_1 + 0x128) = local_28;
        local_38 = FUN_1459ffde6(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"logoposition");
        *(undefined8 *)(param_1 + 0x140) = local_28;
        local_38 = FUN_1459ffde6(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"bshowletterbox");
        *(undefined8 *)(param_1 + 0x150) = local_28;
        local_38 = FUN_1459ffde6(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"letterboxcolor");
        *(undefined8 *)(param_1 + 0x168) = local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ffde6 FUN_1459ffde6 body=83 status=ok
// SIG undefined FUN_1459ffde6(void)

void FUN_1459ffde6(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x88))();
  (**(code **)(*param_1 + 0x80))(param_1,4);
  FUN_1459ffe39(param_1,param_2);
  (**(code **)(*param_1 + 0x80))(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001459ffe35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}



// FUNCTION 1459ffe39 FUN_1459ffe39 body=105 status=ok
// SIG undefined FUN_1459ffe39(void)

void FUN_1459ffe39(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x28))();
  if (param_2 == 0) {
    uVar1 = FUN_1459ffea2();
    FUN_1401e1be1(param_1,0,uVar1);
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1);
    uVar1 = FUN_1459ffea2();
    FUN_1401e1be1(param_1,param_2,uVar1);
    (**(code **)(*param_1 + 0x48))(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001459ffe8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return;
}



// FUNCTION 1459ffea2 FUN_1459ffea2 body=57 status=ok
// SIG undefined FUN_1459ffea2(void)

void FUN_1459ffea2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb178 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb178 = FUN_140002ddd(FUN_146608e4f,uVar1,L"OakWidgetData_PhotoMode");
  }
  return;
}



// FUNCTION 1459ffedc FUN_1459ffedc body=102 status=ok
// SIG undefined FUN_1459ffedc(void)

void FUN_1459ffedc(undefined8 *param_1)

{
  if (*(int *)(param_1 + 4) < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_147daff34(param_1,0);
    }
  }
  else {
    memset((void *)*param_1,0,(longlong)*(int *)(param_1 + 1) << 3);
  }
  if (-1 < *(int *)((longlong)param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 3) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_147db029a(param_1 + 2);
  return;
}



// FUNCTION 1459fff42 FUN_1459fff42 body=85 status=ok
// SIG undefined FUN_1459fff42(void)

void FUN_1459fff42(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,1);
    FUN_1459fff97(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001459fff8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1459fff97 FUN_1459fff97 body=116 status=ok
// SIG undefined FUN_1459fff97(void)

void FUN_1459fff97(longlong *param_1,undefined8 *param_2)

{
  (**(code **)(*param_1 + 0x170))(param_1,2);
  (**(code **)(*param_1 + 0xd8))(param_1,&DAT_149e4b0b8);
  (**(code **)(*param_1 + 0xe0))(param_1,*param_2);
  (**(code **)(*param_1 + 0xd8))(param_1,&DAT_149e4b0f8);
  (**(code **)(*param_1 + 0xe0))(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x000145a00004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1);
  return;
}



// FUNCTION 145a0000c FUN_145a0000c body=214 status=ok
// SIG undefined FUN_145a0000c(void)

void FUN_145a0000c(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar1);
  local_40 = local_28;
  (**(code **)(*param_1 + 0xf90))(param_1,&local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a000e4 FUN_145a000e4 body=109 status=ok
// SIG undefined FUN_145a000e4(void)

void FUN_145a000e4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_30 = FUN_14477b664(uVar1);
  local_28 = param_2[2];
  FUN_14144529e(&local_38,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a00152 FUN_145a00152 body=53 status=ok
// SIG undefined FUN_145a00152(void)

void FUN_145a00152(longlong *param_1)

{
  FUN_145a00188();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a00188 FUN_145a00188 body=89 status=ok
// SIG undefined FUN_145a00188(void)

void FUN_145a00188(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 145a001e2 FUN_145a001e2 body=40 status=ok
// SIG undefined FUN_145a001e2(void)

undefined8 FUN_145a001e2(undefined8 param_1,int param_2)

{
  FUN_145a0020a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a0020a FUN_145a0020a body=59 status=ok
// SIG undefined FUN_145a0020a(void)

void FUN_145a0020a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4af380;
  FUN_145a00245(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a00245 FUN_145a00245 body=43 status=ok
// SIG undefined FUN_145a00245(void)

void FUN_145a00245(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140bb7e7c(param_1);
    param_1 = param_1 + 0x110;
  }
  return;
}



// FUNCTION 145a00270 FUN_145a00270 body=333 status=ok
// SIG undefined FUN_145a00270(void)

void FUN_145a00270(longlong param_1,undefined8 param_2,longlong param_3)

{
  NVSDK_NGX_Parameter_SetI(param_2,"FreeMemOnReleaseFeature",*(undefined1 *)(param_3 + 0x1b3));
  NVSDK_NGX_Parameter_SetUI(param_2,"DLSS.Hint.Render.Preset.DLAA",*(undefined4 *)(param_3 + 0x19c))
  ;
  NVSDK_NGX_Parameter_SetUI
            (param_2,"DLSS.Hint.Render.Preset.UltraQuality",*(undefined4 *)(param_3 + 0x19c));
  NVSDK_NGX_Parameter_SetUI
            (param_2,"DLSS.Hint.Render.Preset.Quality",*(undefined4 *)(param_3 + 0x19c));
  NVSDK_NGX_Parameter_SetUI
            (param_2,"DLSS.Hint.Render.Preset.Balanced",*(undefined4 *)(param_3 + 0x19c));
  NVSDK_NGX_Parameter_SetUI
            (param_2,"DLSS.Hint.Render.Preset.Performance",*(undefined4 *)(param_3 + 0x19c));
  NVSDK_NGX_Parameter_SetUI
            (param_2,"DLSS.Hint.Render.Preset.UltraPerformance",*(undefined4 *)(param_3 + 0x19c));
  if ((*(char *)(param_1 + 0x19) == '\x01') && (*(int *)(param_3 + 0x1bc) == 1)) {
    NVSDK_NGX_Parameter_SetUI
              (param_2,"RayReconstruction.Hint.Render.Preset.DLAA",*(undefined4 *)(param_3 + 0x1a0))
    ;
    NVSDK_NGX_Parameter_SetUI
              (param_2,"RayReconstruction.Hint.Render.Preset.UltraQuality",
               *(undefined4 *)(param_3 + 0x1a0));
    NVSDK_NGX_Parameter_SetUI
              (param_2,"RayReconstruction.Hint.Render.Preset.Quality",
               *(undefined4 *)(param_3 + 0x1a0));
    NVSDK_NGX_Parameter_SetUI
              (param_2,"RayReconstruction.Hint.Render.Preset.Balanced",
               *(undefined4 *)(param_3 + 0x1a0));
    NVSDK_NGX_Parameter_SetUI
              (param_2,"RayReconstruction.Hint.Render.Preset.Performance",
               *(undefined4 *)(param_3 + 0x1a0));
    NVSDK_NGX_Parameter_SetUI
              (param_2,"RayReconstruction.Hint.Render.Preset.UltraPerformance",
               *(undefined4 *)(param_3 + 0x1a0));
    return;
  }
  return;
}



// FUNCTION 145a003be FUN_145a003be body=356 status=ok
// SIG undefined FUN_145a003be(void)

void FUN_145a003be(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_6c [8];
  undefined4 local_64;
  undefined1 *local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1407cbe30();
  FUN_145a00676(param_1 + 0x2b8,0);
  local_78 = param_1 + 0x160;
  uVar2 = FUN_144a7cdc2(local_78,&DAT_14cbdb920);
  cVar1 = FUN_144a8220c(uVar2);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_1407cbaec(uVar2);
    if ((longlong)(int)plVar3[2] != 0) {
      lVar5 = *plVar3;
      lVar4 = (longlong)(int)plVar3[2] << 4;
      do {
        local_64 = 0;
        uVar2 = FUN_140625082(lVar5,&DAT_14c9a12e0);
        FUN_1447325ac(uVar2,local_6c,1);
        local_60 = local_6c;
        local_58 = &local_64;
        FUN_145a00524(param_1 + 0x2b8,local_4c,&local_60);
        lVar5 = lVar5 + 0x10;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
    lVar5 = local_78;
    uVar2 = FUN_144a7cdc2(local_78,&DAT_14cbdb928);
    uVar6 = FUN_140b963dc(uVar2,0x40000000);
    *(undefined4 *)(param_1 + 0x2b0) = uVar6;
    uVar2 = FUN_144a7cdc2(lVar5,&DAT_14cbdb918);
    uVar2 = FUN_140625082(uVar2,&DAT_14c9a12e0);
    FUN_1447325ac(uVar2,&local_60,1);
    *(undefined1 **)(param_1 + 0x308) = local_60;
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a00524 FUN_145a00524 body=336 status=ok
// SIG undefined FUN_145a00524(void)

undefined4 * FUN_145a00524(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140283634(param_1,local_40);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_38 = uVar2;
  *(undefined4 *)(local_38 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_38 + 0xc) = 0xffffffff;
  local_44 = local_40[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = 0;
  cVar3 = FUN_140283598(param_1,uVar8,local_38);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
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
      *(uint *)(local_38 + 2) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_38 + 0xc) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140283902(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a00676 FUN_145a00676 body=107 status=ok
// SIG undefined FUN_145a00676(void)

void FUN_145a00676(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145a006c5:
      FUN_1410baf0e(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140283902(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145a006c5;
  FUN_145a006e2(param_1);
  FUN_1410baf0e(param_1,param_2);
  return;
}



// FUNCTION 145a006e2 FUN_145a006e2 body=335 status=ok
// SIG undefined FUN_145a006e2(void)

void FUN_145a006e2(longlong *param_1)

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



// FUNCTION 145a00832 FUN_145a00832 body=195 status=ok
// SIG undefined FUN_145a00832(void)

void FUN_145a00832(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x27a0) != 0) {
    FUN_14480f766(&DAT_14cb7d8b0);
    *(undefined8 *)(param_1 + 0x27a0) = 0;
  }
  if (*(longlong *)(param_1 + 0x27b0) != 0) {
    FUN_14480f766(&DAT_14cb7df68);
    *(undefined8 *)(param_1 + 0x27b0) = 0;
  }
  if (*(longlong *)(param_1 + 0x27b8) != 0) {
    FUN_14480f766(&DAT_14cb7df80);
    *(undefined8 *)(param_1 + 0x27b8) = 0;
  }
  if ((*(longlong *)(param_1 + 0x27c0) != 0) && (*(longlong *)(param_1 + 0x3208) != 0)) {
    FUN_14480f766(*(longlong *)(param_1 + 0x3208) + 0x1e0);
    *(undefined8 *)(param_1 + 0x27c0) = 0;
  }
  if (*(longlong *)(param_1 + 0x31b0) != 0) {
    FUN_145a0129a(*(longlong *)(param_1 + 0x31b0),param_1);
  }
  FUN_145a008f6(param_1);
  return;
}



// FUNCTION 145a008f6 FUN_145a008f6 body=312 status=ok
// SIG undefined FUN_145a008f6(void)

void FUN_145a008f6(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  short local_24 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448a8284(param_1 + 0xc10);
  uVar1 = FUN_1447210f0(param_1);
  lVar2 = FUN_140d5bae2(uVar1);
  if (lVar2 != 0) {
    FUN_14582b456(lVar2 + 8,param_1 + 0x960);
  }
  lVar2 = FUN_14497e828(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_144a79464();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar2 = FUN_1414cf3d2(lVar2);
      if (lVar2 != 0) {
        FUN_140d27df6(lVar2,local_24,param_1);
        if (-1 < local_24[0]) {
          if ((*(longlong *)(param_1 + 0x608) != 0) &&
             ((*(uint *)(*(longlong *)(param_1 + 0x608) + 8) >> 0x1e & 1) == 0)) {
            FUN_1461060c6(lVar2,local_24,0);
          }
          FUN_1414453c0(lVar2,local_24,param_1);
        }
      }
    }
  }
  FUN_145a00a30(param_1);
  if (((*(char *)(param_1 + 0x178) == '\x03') &&
      (lVar2 = *(longlong *)(param_1 + 0xa08), lVar2 != 0)) &&
     ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
    FUN_140aeefbc(lVar2,0,1);
    FUN_14583e6c2(param_1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a00a30 FUN_145a00a30 body=225 status=ok
// SIG undefined FUN_145a00a30(void)

void FUN_145a00a30(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[0x7a] != 0) {
    if ((param_1[0x86] == 0) && ((char)param_1[0x2f] == '\x03')) {
      (**(code **)(*param_1 + 0xde8))(param_1);
    }
    else {
      FUN_1413ef136(param_1);
    }
  }
  if (param_1[0xf4] != 0) {
    (**(code **)(*param_1 + 0xe88))(param_1);
  }
  if (param_1[0x88] != 0) {
    FUN_140aeefbc(param_1[0x88],0,1);
    param_1[0x88] = 0;
  }
  if (param_1[0x89] != 0) {
    FUN_140aeefbc(param_1[0x89],0,1);
    param_1[0x89] = 0;
  }
  lVar1 = FUN_1447210f0(param_1);
  if (*(longlong *)(lVar1 + 0x170) != 0) {
    FUN_145a01094(*(longlong *)(lVar1 + 0x170),param_1);
  }
  param_1[0xa1] = 0;
  param_1[0x9f] = 0;
  FUN_145a00b12(param_1);
  return;
}



// FUNCTION 145a00b12 FUN_145a00b12 body=111 status=ok
// SIG undefined FUN_145a00b12(void)

void FUN_145a00b12(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (((char)param_1[0x2f] == '\x03') && (param_1[0x73] != 0)) {
    lVar2 = FUN_1447210f0(param_1);
    plVar1 = *(longlong **)(lVar2 + 0x170);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x778))(plVar1,param_1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1);
  }
  FUN_1413ef136(param_1);
  uVar3 = FUN_1447210f0(param_1);
  FUN_145a00b82(uVar3,param_1);
  FUN_1407fb560(param_1);
  return;
}



// FUNCTION 145a00b82 FUN_145a00b82 body=201 status=ok
// SIG undefined FUN_145a00b82(void)

void FUN_145a00b82(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14485c47a(&local_38);
  local_30 = &local_38;
  iVar1 = FUN_145a00e0c(param_1 + 0x220);
  if ((param_2 != 0) && (0 < iVar1)) {
    lVar2 = FUN_144a75eb4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      local_38 = 0;
      FUN_14485c47a(&local_38,param_2);
      local_30 = &local_38;
      iVar1 = FUN_145a00f6c(param_1 + 0x230);
      if (0 < iVar1) {
        FUN_145a00c4c(param_2);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a00c4c FUN_145a00c4c body=61 status=ok
// SIG undefined FUN_145a00c4c(void)

void FUN_145a00c4c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar1 = FUN_14011c706(lVar1);
    if (lVar1 != 0) {
      FUN_145a00c8a(lVar1,param_1 + 0x428);
      return;
    }
  }
  return;
}



// FUNCTION 145a00c8a FUN_145a00c8a body=26 status=ok
// SIG undefined FUN_145a00c8a(void)

bool FUN_145a00c8a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145a00ca4(param_1 + 0xf8);
  return iVar1 != 0;
}



// FUNCTION 145a00ca4 FUN_145a00ca4 body=158 status=ok
// SIG undefined FUN_145a00ca4(void)

undefined8 FUN_145a00ca4(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_145a00d42(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 145a00d42 FUN_145a00d42 body=89 status=ok
// SIG undefined FUN_145a00d42(void)

void FUN_145a00d42(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_145a00d9c();
  return;
}



// FUNCTION 145a00d9c FUN_145a00d9c body=112 status=ok
// SIG undefined FUN_145a00d9c(void)

void FUN_145a00d9c(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145a00e0c FUN_145a00e0c body=296 status=ok
// SIG undefined FUN_145a00e0c(void)

int FUN_145a00e0c(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    lVar1 = *param_1;
    bVar4 = FUN_145a00f34(lVar1,*param_2);
    iVar10 = 0;
    iVar11 = 0;
    do {
      lVar9 = (longlong)iVar11;
      iVar2 = iVar11 + 1;
      if (iVar11 + 1 < iVar7) {
        iVar2 = iVar7;
      }
      lVar13 = lVar1 + 8 + lVar9 * 8;
      lVar6 = lVar9;
      iVar12 = iVar11;
      do {
        lVar6 = lVar6 + 1;
        iVar3 = iVar2;
        if (lVar8 <= lVar6) break;
        bVar5 = FUN_145a00f34(lVar13,*param_2);
        iVar12 = iVar12 + 1;
        lVar13 = lVar13 + 8;
        iVar3 = iVar12;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (iVar10 != iVar11) {
          memmove((void *)(lVar1 + (longlong)iVar10 * 8),(void *)(lVar1 + lVar9 * 8),
                  (longlong)(iVar3 - iVar11) << 3);
        }
        iVar10 = iVar10 + (iVar3 - iVar11);
      }
      iVar11 = iVar3;
      bVar4 = bVar4 ^ 1;
    } while (lVar6 < lVar8);
    *(int *)(param_1 + 1) = iVar10;
    iVar7 = iVar7 - iVar10;
  }
  return iVar7;
}



// FUNCTION 145a00f34 FUN_145a00f34 body=55 status=ok
// SIG undefined FUN_145a00f34(void)

ulonglong FUN_145a00f34(int *param_1,int *param_2)

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



// FUNCTION 145a00f6c FUN_145a00f6c body=296 status=ok
// SIG undefined FUN_145a00f6c(void)

int FUN_145a00f6c(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    lVar1 = *param_1;
    bVar4 = FUN_145882e3c(lVar1,*param_2);
    iVar10 = 0;
    iVar11 = 0;
    do {
      lVar9 = (longlong)iVar11;
      iVar2 = iVar11 + 1;
      if (iVar11 + 1 < iVar7) {
        iVar2 = iVar7;
      }
      lVar13 = lVar1 + 8 + lVar9 * 8;
      lVar6 = lVar9;
      iVar12 = iVar11;
      do {
        lVar6 = lVar6 + 1;
        iVar3 = iVar2;
        if (lVar8 <= lVar6) break;
        bVar5 = FUN_145882e3c(lVar13,*param_2);
        iVar12 = iVar12 + 1;
        lVar13 = lVar13 + 8;
        iVar3 = iVar12;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (iVar10 != iVar11) {
          memmove((void *)(lVar1 + (longlong)iVar10 * 8),(void *)(lVar1 + lVar9 * 8),
                  (longlong)(iVar3 - iVar11) << 3);
        }
        iVar10 = iVar10 + (iVar3 - iVar11);
      }
      iVar11 = iVar3;
      bVar4 = bVar4 ^ 1;
    } while (lVar6 < lVar8);
    *(int *)(param_1 + 1) = iVar10;
    iVar7 = iVar7 - iVar10;
  }
  return iVar7;
}



// FUNCTION 145a01094 FUN_145a01094 body=518 status=ok
// SIG undefined FUN_145a01094(void)

void FUN_145a01094(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (param_2 != 0) {
    uVar10 = (ulonglong)(int)param_1[0x84];
    if (0 < (longlong)uVar10) {
      bVar7 = false;
      do {
        lVar3 = uVar10 * 0x10 + -8;
        uVar11 = uVar10;
        while( true ) {
          lVar8 = param_1[0x83];
          if ((*(int *)(lVar8 + lVar3) == 0) ||
             (plVar4 = *(longlong **)(lVar8 + -8 + lVar3), plVar4 == (longlong *)0x0)) {
            lVar8 = 0;
          }
          else {
            lVar8 = (**(code **)(*plVar4 + 8))();
          }
          if (lVar8 == param_2) break;
          lVar3 = lVar3 + -0x10;
          bVar2 = uVar11 < 2;
          uVar11 = uVar11 - 1;
          if (bVar2) {
            if (bVar7) goto LAB_145a01289;
            goto LAB_145a010ba;
          }
        }
        uVar10 = uVar11 - 1;
        FUN_147ab26ee(param_1 + 0x83,uVar10 & 0xffffffff);
        bVar7 = true;
      } while (1 < uVar11);
LAB_145a01289:
      (**(code **)(*param_1 + 0x6e0))(param_1);
    }
LAB_145a010ba:
    lVar3 = FUN_144a75eb4();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) != lVar3 + 0x30)) {
      FUN_14093f908(param_1);
      return;
    }
    plVar4 = (longlong *)FUN_14093f908(param_1);
    if (((plVar4 != (longlong *)0x0) && (*(longlong *)(param_2 + 0x398) != 0)) &&
       (*(longlong *)(param_2 + 0x398) == plVar4[0xb1])) {
      lVar3 = FUN_1447210f0(param_1);
      if (0 < *(int *)(lVar3 + 0x238)) {
        lVar8 = 0;
        lVar9 = 0;
        do {
          lVar5 = FUN_14479d2ce(*(longlong *)(lVar3 + 0x230) + lVar8);
          if ((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x398), lVar6 != 0)) {
            lVar1 = *(longlong *)(param_2 + 0x398);
            if ((lVar1 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar1);
              lVar6 = *(longlong *)(lVar5 + 0x398);
            }
            if (((lVar6 != lVar1) && ((*(byte *)(lVar5 + 0x65) & 2) == 0)) &&
               (((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0 &&
                (((*(byte *)(lVar6 + 0x65) & 2) == 0 && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0))))
               )) {
              (**(code **)(*plVar4 + 0x690))(plVar4);
              break;
            }
          }
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 8;
        } while (lVar9 < *(int *)(lVar3 + 0x238));
      }
      if (*(longlong *)(param_2 + 0x398) == plVar4[0xb1]) {
                    /* WARNING: Could not recover jumptable at 0x000145a01267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x690))(plVar4,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145a0129a FUN_145a0129a body=98 status=ok
// SIG undefined FUN_145a0129a(void)

void FUN_145a0129a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_20 = 0;
    FUN_14485c47a(&local_20);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a01410 FUN_145a01410 body=152 status=ok
// SIG undefined FUN_145a01410(void)

void FUN_145a01410(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x30 + 0x28);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_145a014a8(param_1,param_2);
  return;
}



// FUNCTION 145a014a8 FUN_145a014a8 body=124 status=ok
// SIG undefined FUN_145a014a8(void)

void FUN_145a014a8(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145a01524 FUN_145a01524 body=624 status=ok
// SIG undefined FUN_145a01524(void)

undefined4 FUN_145a01524(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  float fVar1;
  longlong lVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar2 = param_1[0x341];
  if (lVar2 == 0) {
    uVar7 = 0;
    goto LAB_145a0162e;
  }
  local_68 = DAT_14c8464f0;
  local_78 = DAT_14c8464e0;
  uStack_70 = DAT_14c8464e8;
  local_88 = DAT_14c8464f0;
  local_98 = DAT_14c8464e0;
  uStack_90 = DAT_14c8464e8;
  if (*(char *)(lVar2 + 0x1a4) == '\x01') {
    fVar1 = *(float *)(lVar2 + 0x1a8);
    if (0.0 < fVar1) {
      (**(code **)(*param_1 + 0x328))(param_1,&local_b0);
      if ((double)((fVar1 * 100000.0) / 2236.942) <
          SQRT(local_a0 * local_a0 + local_b0 * local_b0 + local_a8 * local_a8)) goto LAB_145a015a9;
    }
    local_d8 = *(undefined8 *)(lVar2 + 0x1d8);
    local_d0 = *(undefined4 *)(lVar2 + 0x1e0);
    uStack_cc = *(undefined4 *)(lVar2 + 0x1e4);
    uStack_c8 = *(undefined4 *)(lVar2 + 0x1e8);
    uStack_c4 = *(undefined4 *)(lVar2 + 0x1ec);
    local_c0 = (void *)0x0;
    local_b8 = *(int *)(lVar2 + 0x1f8);
    lVar9 = (longlong)local_b8;
    pvVar3 = *(void **)(lVar2 + 0x1f0);
    if (lVar9 == 0) {
      local_b4 = 0;
    }
    else {
      FUN_1446dd670(&local_c0,local_b8,0);
      memcpy(local_c0,pvVar3,lVar9 * 2);
    }
    local_108 = 1;
    uVar7 = FUN_145a01796(param_1,param_2,&local_78,&local_d8);
  }
  else {
LAB_145a015a9:
    uVar7 = 0;
  }
  local_100 = *(undefined8 *)(lVar2 + 0x200);
  local_f8 = *(undefined4 *)(lVar2 + 0x208);
  uStack_f4 = *(undefined4 *)(lVar2 + 0x20c);
  uStack_f0 = *(undefined4 *)(lVar2 + 0x210);
  uStack_ec = *(undefined4 *)(lVar2 + 0x214);
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(lVar2 + 0x220);
  lVar9 = (longlong)local_e0;
  pvVar3 = *(void **)(lVar2 + 0x218);
  if (lVar9 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,pvVar3,lVar9 * 2);
  }
  local_108 = 0;
  FUN_145a01796(param_1,param_2,&local_98,&local_100);
  puVar8 = &local_78;
  if ((char)uVar7 == '\0') {
    puVar8 = &local_98;
  }
  uVar4 = *(undefined4 *)((longlong)puVar8 + 4);
  uVar5 = *(undefined4 *)(puVar8 + 1);
  uVar6 = *(undefined4 *)((longlong)puVar8 + 0xc);
  *param_3 = *(undefined4 *)puVar8;
  param_3[1] = uVar4;
  param_3[2] = uVar5;
  param_3[3] = uVar6;
  *(undefined8 *)(param_3 + 4) = puVar8[2];
LAB_145a0162e:
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a01796 FUN_145a01796 body=411 status=ok
// SIG undefined FUN_145a01796(void)

undefined4
FUN_145a01796(longlong param_1,double *param_2,double *param_3,undefined8 *param_4,char param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  void *_Src;
  undefined4 uVar6;
  undefined8 unaff_RBP;
  longlong lVar7;
  double dVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = *param_4;
  local_80 = *(undefined4 *)(param_4 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_4 + 0xc);
  uStack_78 = *(undefined4 *)(param_4 + 2);
  uStack_74 = *(undefined4 *)((longlong)param_4 + 0x14);
  local_70 = (void *)0x0;
  local_68 = *(int *)(param_4 + 4);
  lVar7 = (longlong)local_68;
  _Src = (void *)param_4[3];
  if (lVar7 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,_Src,lVar7 * 2);
  }
  FUN_145a01ca4(param_1,&local_60,&local_88);
  dVar1 = param_2[2];
  dVar2 = *param_2;
  dVar3 = param_2[1];
  *param_3 = dVar2 + local_60;
  param_3[1] = dVar3 + local_58;
  param_3[2] = dVar1 + local_50;
  if (param_5 != '\0') {
    lVar7 = *(longlong *)(param_1 + 0x1700);
    if (lVar7 != 0 && *(longlong *)(param_1 + 0x1a08) != 0) {
      dVar8 = (double)*(float *)(*(longlong *)(param_1 + 0x1a08) + 0x678);
      dVar4 = *(double *)(lVar7 + 0x870);
      dVar5 = *(double *)(lVar7 + 0x868);
      *param_3 = dVar2 + local_60 + dVar8 * *(double *)(lVar7 + 0x860);
      param_3[1] = dVar3 + local_58 + dVar5 * dVar8;
      param_3[2] = dVar1 + local_50 + dVar4 * dVar8;
    }
  }
  uVar6 = FUN_145a01932(param_1,param_2,param_3,
                        CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
  if (param_4[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a01932 FUN_145a01932 body=228 status=ok
// SIG undefined FUN_145a01932(void)

undefined8 FUN_145a01932(longlong param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  char local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x1a08) != 0 && param_4 == '\x01') {
    local_30 = *(undefined8 *)(param_2 + 0x10);
    local_58 = *param_3;
    local_50 = param_3[1];
    local_48 = (double)param_3[2] - (double)*(float *)(*(longlong *)(param_1 + 0x1a08) + 0x658);
    local_60 = 1;
    local_68 = '\x01';
    local_40 = local_58;
    local_38 = local_50;
    cVar1 = FUN_145a01a18(param_1,&local_40,&local_58,param_3);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_145a01987;
    }
  }
  local_60 = 0;
  local_68 = param_4;
  uVar2 = FUN_145a01a18(param_1,param_2,param_3,param_3);
LAB_145a01987:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a01a18 FUN_145a01a18 body=650 status=ok
// SIG undefined FUN_145a01a18(void)

ulonglong FUN_145a01a18(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       byte param_5,char param_6)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 unaff_RBP;
  longlong lVar6;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  undefined4 local_230;
  undefined4 *local_228;
  undefined8 *local_220;
  undefined1 *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  float local_1f4;
  float local_1f0;
  undefined1 local_1e8 [4];
  undefined4 local_1e4;
  undefined1 local_1d8 [148];
  undefined4 local_144;
  undefined4 local_118;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined2 local_cf;
  undefined1 local_cd;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  longlong local_90;
  undefined8 local_88;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (*(longlong *)(param_1 + 0x1710) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(&DAT_00006850 + *(longlong *)(param_1 + 0x1710));
  }
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6) & 0xffffffff;
  uVar5 = uVar4 ^ 1;
  lVar3 = FUN_1447210f0(param_1);
  if ((lVar6 != 0) && (lVar3 != 0)) {
    local_e4 = 0.0;
    local_e8 = 0.0;
    local_210 = param_4;
    local_208 = param_2;
    local_200 = param_3;
    (**(code **)(**(longlong **)(param_1 + 0x1710) + 0x528))();
    local_1f0 = 0.0;
    if (param_6 == '\0') {
      local_1f0 = (local_e8 - local_e4) * 0.100000024;
    }
    local_bc = 0;
    local_b8 = 0x101;
    local_90 = 0;
    local_88 = 0x800000000;
    local_70 = 0;
    local_68 = 0x400000000;
    local_d0 = 0;
    local_c4 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_cf = 1;
    local_cd = 0;
    local_c0 = 0;
    local_cc = 0x1000000;
    local_c8 = 1;
    FUN_144a85a22(&local_e0,*(undefined8 *)(param_1 + 0x1710));
    FUN_144a85a22(&local_e0);
    memset(local_1e8,0,0x100);
    local_118 = 0xffffffff;
    local_144 = 0xffffffff;
    local_1e4 = 0x3f800000;
    local_1f0 = local_e8 - local_1f0;
    local_1f8 = 3;
    local_1f4 = local_e4;
    local_230 = (**(code **)(**(longlong **)(lVar6 + 0x110) + 0x580))();
    local_218 = &DAT_14cad0f10;
    local_238 = &DAT_14c8463d0;
    local_228 = &local_1f8;
    local_220 = &local_e0;
    bVar1 = FUN_14021655c(lVar3,local_1e8,local_208,local_200);
    if ((param_5 & bVar1) == 1) {
      uVar2 = FUN_148cd6ee8(param_1,local_1d8,local_210);
      uVar5 = (ulonglong)uVar2;
    }
    else {
      uVar5 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar5 | bVar1);
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a01ca4 FUN_145a01ca4 body=1023 status=ok
// SIG undefined FUN_145a01ca4(void)

undefined1 (*) [16] FUN_145a01ca4(longlong param_1,undefined1 (*param_2) [16],longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  longlong local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_118;
  double dStack_110;
  double local_108;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *(undefined8 *)param_2[1] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  *(undefined8 *)*param_2 = DAT_14c8464e0;
  *(undefined8 *)(*param_2 + 8) = uVar5;
  lVar4 = FUN_140963a30(param_3);
  if ((lVar4 == 0) || (lVar4 = *(longlong *)(param_1 + 0x1710), lVar4 == 0)) goto LAB_145a02007;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  uVar5 = (**(code **)(*(longlong *)(lVar4 + 0x10e0) + 0x50))(lVar4 + 0x10e0);
  local_b8 = 0.0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  dStack_b0 = 2.71615461243555e-312;
  local_a8 = 2.12199579047121e-314;
  uVar6 = FUN_140963a30(param_3);
  local_160 = CONCAT71(local_160._1_7_,1);
  local_168 = &local_d8;
  FUN_14096dfee(uVar5,&local_f8,uVar6,1);
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_d8);
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 8))(local_f8,&local_e8,&DAT_14cb8d438);
    FUN_14103b6f6(local_f8,1);
    if (0 < (int)uStack_e0) {
      uVar9 = (**(code **)(*(longlong *)*local_e8 + 0x2b0))();
      lVar4 = *local_e8;
      if (lVar4 == 0) {
LAB_145a0205e:
        lVar4 = 0;
      }
      else {
        lVar7 = FUN_1402576f0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_145a0205e;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x1710) + 0x428) != 0) {
        lVar7 = FUN_144a7954a();
        if (lVar7 != 0) {
          lVar8 = FUN_144a85a6c();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
            local_168 = (undefined8 *)((ulonglong)local_168 & 0xffffffffffffff00);
            local_160 = lVar7;
            FUN_141445440(lVar4,&local_d8,uVar9,uVar9 ^ 0x8000000080000000);
            dVar13 = -local_b8;
            dVar14 = -dStack_b0;
            dVar15 = -local_a8;
            FUN_145a020a4(param_1,&local_158);
            dVar13 = dVar13 * local_118;
            dVar14 = dVar14 * dStack_110;
            dVar15 = dVar15 * local_108;
            dVar10 = dVar14 * local_158 - dVar13 * dStack_150;
            dVar11 = dVar15 * dStack_150 - dVar14 * local_148;
            dVar12 = dVar13 * local_148 - local_158 * dVar15;
            dVar11 = dVar11 + dVar11;
            dVar12 = dVar12 + dVar12;
            dVar10 = dVar10 + dVar10;
            dVar14 = (local_148 * dVar11 - local_158 * dVar10) + dStack_140 * dVar12 + dVar14;
            auVar3._8_4_ = SUB84(dVar14,0);
            auVar3._0_8_ = (dVar10 * dStack_150 - dVar12 * local_148) + dStack_140 * dVar11 + dVar13
            ;
            auVar3._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
            *param_2 = auVar3;
            *(double *)param_2[1] =
                 dVar10 * dStack_140 + dVar15 + (dVar12 * local_158 - dVar11 * dStack_150);
          }
        }
      }
    }
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar2 = (int *)((longlong)local_f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_f0 + 0x10))(local_f0);
      }
    }
  }
  if (local_e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_145a02007:
  if (*(longlong *)(param_3 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a020a4 FUN_145a020a4 body=1074 status=ok
// SIG undefined FUN_145a020a4(void)

undefined8 * FUN_145a020a4(double param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  double *pdVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  double dVar17;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  puVar15 = &DAT_14c846480;
  puVar16 = param_2;
  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  if ((*(longlong *)((longlong)param_1 + 0x1710) != 0) &&
     (lVar13 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x1710) + 0x1c8), lVar13 != 0)) {
    puVar15 = (undefined8 *)(lVar13 + 0x240);
    puVar16 = param_2;
    for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar16 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    }
    lVar13 = *(longlong *)((longlong)param_1 + 0x1700);
    if (lVar13 != 0) {
      dVar17 = *(double *)(lVar13 + 0x1ab8);
      dVar1 = *(double *)(lVar13 + 0x1ac0);
      dVar2 = *(double *)(lVar13 + 0x1ac8);
      lVar14 = *(longlong *)((longlong)param_1 + 0x1c8);
      if (lVar14 == 0) {
        local_128 = DAT_14c846508;
        local_138 = (undefined4)DAT_14c8464f8;
        uStack_134 = DAT_14c8464f8._4_4_;
        uStack_130 = (undefined4)DAT_14c846500;
        uStack_12c = DAT_14c846500._4_4_;
      }
      else {
        dVar5 = *(double *)(lVar14 + 0x240);
        dVar6 = *(double *)(lVar14 + 0x248);
        dVar7 = *(double *)(lVar14 + 0x250);
        dVar8 = *(double *)(lVar14 + 600);
        pdVar11 = *(double **)(lVar14 + 0x228);
        local_f8 = dVar5;
        uStack_f0 = dVar6;
        local_e8 = dVar7;
        uStack_e0 = dVar8;
        if (pdVar11 == (double *)0x0) {
          lVar13 = 0x40;
          pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
          dVar9 = DAT_14c8463d8;
          *pdVar11 = DAT_14c8463d0;
          pdVar11[1] = dVar9;
          dVar9 = DAT_14c8463e8;
          pdVar11[2] = DAT_14c8463e0;
          pdVar11[3] = dVar9;
          dVar9 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
          pdVar11[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
          pdVar11[5] = dVar9;
          param_1 = DAT_14c846508;
          pdVar11[6] = DAT_14c846508;
          *(double **)(lVar14 + 0x228) = pdVar11;
        }
        auVar3._8_4_ = (int)-(ulonglong)(dVar6 != pdVar11[1]);
        auVar3._0_8_ = -(ulonglong)(dVar5 != *pdVar11);
        auVar3._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar11[1]) >> 0x20);
        iVar10 = movmskpd(SUB84(param_1,0),auVar3);
        auVar4._8_4_ = (int)-(ulonglong)(dVar8 != pdVar11[3]);
        auVar4._0_8_ = -(ulonglong)(dVar7 != pdVar11[2]);
        auVar4._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar11[3]) >> 0x20);
        uVar12 = movmskpd((int)lVar13,auVar4);
        if ((uVar12 & 0x3fffffff) != 0 || iVar10 != 0) {
          *(undefined4 *)(pdVar11 + 2) = (undefined4)local_e8;
          *(undefined4 *)((longlong)pdVar11 + 0x14) = local_e8._4_4_;
          *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_e0;
          *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_e0._4_4_;
          *(undefined4 *)pdVar11 = (undefined4)local_f8;
          *(undefined4 *)((longlong)pdVar11 + 4) = local_f8._4_4_;
          *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_f0;
          *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_f0._4_4_;
          FUN_1448052ee(&local_f8,&local_138);
          pdVar11[6] = local_128;
          pdVar11[4] = (double)CONCAT44(uStack_134,local_138);
          pdVar11[5] = (double)CONCAT44(uStack_12c,uStack_130);
        }
        local_128 = pdVar11[6];
        local_138 = *(undefined4 *)(pdVar11 + 4);
        uStack_134 = *(undefined4 *)((longlong)pdVar11 + 0x24);
        uStack_130 = *(undefined4 *)(pdVar11 + 5);
        uStack_12c = *(undefined4 *)((longlong)pdVar11 + 0x2c);
      }
      FUN_144a76660(&local_138,&local_110);
      local_c8 = dVar17 * local_108 - local_110 * dVar1;
      local_d0 = dVar2 * local_110 - dVar17 * local_100;
      local_d8 = dVar1 * local_100 - local_108 * dVar2;
      dVar17 = local_c8 * local_c8 + local_d8 * local_d8 + local_d0 * local_d0;
      if ((dVar17 != 1.0) || (NAN(dVar17))) {
        if (dVar17 < 9.99999993922529e-09) {
          local_d0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_c8 = (double)CONCAT44(DAT_14c8464f0._4_4_,(undefined4)DAT_14c8464f0);
          local_d8 = DAT_14c8464e0;
        }
        else {
          dVar17 = 1.0 / SQRT(dVar17);
          local_c8 = local_c8 * dVar17;
          local_d0 = local_d0 * dVar17;
          local_d8 = local_d8 * dVar17;
        }
      }
      local_a8 = local_110 * local_d0 - local_d8 * local_108;
      local_b0 = local_100 * local_d8 - local_c8 * local_110;
      local_b8 = local_108 * local_c8 - local_d0 * local_100;
      dVar17 = local_a8 * local_a8 + local_b8 * local_b8 + local_b0 * local_b0;
      if ((dVar17 != 1.0) || (NAN(dVar17))) {
        if (dVar17 < 9.99999993922529e-09) {
          local_b0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_a8 = (double)CONCAT44(DAT_14c8464f0._4_4_,(undefined4)DAT_14c8464f0);
          local_b8 = DAT_14c8464e0;
        }
        else {
          dVar17 = 1.0 / SQRT(dVar17);
          local_a8 = local_a8 * dVar17;
          local_b0 = local_b0 * dVar17;
          local_b8 = local_b8 * dVar17;
        }
      }
      local_f8 = local_110;
      uStack_f0 = local_108;
      local_e8 = local_100;
      uStack_e0 = 0.0;
      local_c0 = 0;
      local_a0 = 0;
      local_98 = DAT_14c8464e0;
      local_90 = (undefined4)DAT_14c8464e8;
      uStack_8c = DAT_14c8464e8._4_4_;
      uStack_88 = (undefined4)DAT_14c8464f0;
      uStack_84 = DAT_14c8464f0._4_4_;
      local_80 = 0x3ff0000000000000;
      FUN_14481fd10(&local_138);
      *(undefined4 *)param_2 = local_138;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_134;
      *(undefined4 *)(param_2 + 1) = uStack_130;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_12c;
      *(undefined4 *)(param_2 + 2) = (undefined4)local_128;
      *(undefined4 *)((longlong)param_2 + 0x14) = local_128._4_4_;
      *(undefined4 *)(param_2 + 3) = uStack_120;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_11c;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a024d7 FUN_145a024d7 body=43 status=ok
// SIG undefined FUN_145a024d7(void)

void FUN_145a024d7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a02502(puVar1);
  *puVar1 = &PTR_FUN_14bd325b0;
  puVar1[0x16] = 0;
  return;
}



// FUNCTION 145a02502 FUN_145a02502 body=194 status=ok
// SIG undefined FUN_145a02502(void)

undefined8 * FUN_145a02502(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bc14b60;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f800000;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 **)((longlong)param_1 + 0x54) = &DAT_100000018;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = &DAT_100000018;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x1e;
  param_1[0xf] = 0;
  param_1[0x10] = 0xa00000000;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if ((*(uint *)(param_1 + 1) & 0x30) == 0) {
    lVar1 = FUN_145a570e6();
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      FUN_140aa6c08(lVar1);
      lVar2 = *(longlong *)(lVar1 + 0x110);
    }
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(lVar2 + 0x28);
  }
  return param_1;
}



// FUNCTION 145a025c4 FUN_145a025c4 body=449 status=ok
// SIG undefined FUN_145a025c4(void)

void FUN_145a025c4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14123bd7e();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0xb4) == '\0')) {
    if (param_2 != 0) {
      lVar2 = FUN_1407f4df8();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
        local_40 = (code *)&LAB_148ea75e0;
        local_38 = 0;
        local_48 = &local_40;
        FUN_1414454e0(param_1,param_2,&DAT_14cb92c88,param_1);
        local_40 = (code *)&LAB_148ea768e;
        local_38 = 0;
        local_48 = &local_40;
        FUN_1414454e0(param_1,param_2,&DAT_14cb92c90,param_1);
        local_40 = (code *)&LAB_148ea76e2;
        local_38 = 0;
        local_48 = &local_40;
        FUN_1414454e0(param_1,param_2,&DAT_14cb92c98,param_1);
        local_40 = (code *)&LAB_1461e13e4;
        local_38 = 0;
        local_48 = &local_40;
        FUN_1414454e0(param_1,param_2,&DAT_14cb92ca0,param_1);
        local_40 = FUN_148ea773a;
        local_38 = 0;
        local_48 = &local_40;
        FUN_1414454e0(param_1,param_2,&DAT_14cb92ca8,param_1);
        local_40 = FUN_148ea7898;
        local_38 = 0;
        local_48 = &local_40;
        FUN_1414454e0(param_1,param_2,&DAT_14cb92cb0,param_1);
        local_40 = (code *)&LAB_148ea7a0c;
        local_38 = 0;
        FUN_145a02798(param_1,param_2,param_1,&local_40);
      }
    }
    if (*(char *)(lVar1 + 0xb3) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a02798 FUN_145a02798 body=349 status=ok
// SIG undefined FUN_145a02798(void)

void FUN_145a02798(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  lVar1 = param_1 + 0x138;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_141445912(param_2,2);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_141445912(param_2,8,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar5 = FUN_141445912(param_2,0x10,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a028f6 FUN_145a028f6 body=1483 status=ok
// SIG undefined FUN_145a028f6(void)

/* WARNING: Removing unreachable block (ram,0x000145a02da1) */

void FUN_145a028f6(longlong param_1,longlong *param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  void *_Src;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  void **ppvVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_5b8 [36];
  int local_594;
  longlong local_590;
  int *local_588;
  longlong local_580;
  void *local_578;
  longlong local_570;
  longlong local_568;
  longlong *local_560;
  void *local_558;
  int local_550;
  undefined4 local_54c;
  void *local_548;
  int local_540;
  undefined4 local_53c;
  void *local_538;
  undefined8 local_530;
  undefined1 local_528 [220];
  undefined4 local_44c;
  char local_440;
  byte local_43f;
  char local_424;
  undefined1 local_410;
  char local_40f;
  longlong local_408;
  uint local_400;
  uint local_3fc;
  undefined1 local_3f8;
  undefined1 local_3f7;
  undefined4 local_3f4;
  longlong *local_3f0;
  undefined4 local_3e8;
  uint uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8 [440];
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  char local_c8;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  lVar2 = *(longlong *)(param_1 + 0x288);
  local_588 = param_4;
  uVar4 = local_3d8;
  if ((lVar2 != 0) &&
     ((cVar3 = (char)param_3, cVar3 == '\0' || (*(char *)(lVar2 + 0x338) == '\x02')))) {
    *(undefined1 *)(lVar2 + 0x380) = 0;
    *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 1;
    plVar13 = param_2 + 2;
    local_210 = 0x100000000;
    local_200 = 0xffffffff;
    uStack_1f8 = 0;
    uStack_208 = plVar13;
    if ((int)param_2[5] == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_210);
      iVar9 = (int)param_2[5];
    }
    uStack_3d0 = CONCAT44(uStack_1f4,uStack_1f8);
    local_3d8 = local_200;
    uVar4 = local_3d8;
    local_3e8 = (int)local_210;
    uStack_3e4 = local_210._4_4_;
    uStack_3e0 = (int)uStack_208;
    uStack_3dc = uStack_208._4_4_;
    local_3d8._4_4_ = (int)((ulonglong)local_200 >> 0x20);
    local_3f0 = param_2;
    if ((local_3d8._4_4_ != iVar9) || (uStack_208 != plVar13)) {
      local_568 = lVar2 + 0x358;
      local_570 = lVar2 + 0xb0;
      local_590 = lVar2 + 0x1d0;
      iVar6 = local_3d8._4_4_;
      local_594 = iVar9;
      local_560 = plVar13;
      local_3d8 = uVar4;
      do {
        puVar7 = (undefined8 *)(*local_3f0 + (longlong)iVar6 * 0x1d0);
        uStack_208 = (longlong *)CONCAT44(uStack_208._4_4_,*(undefined4 *)(puVar7 + 1));
        local_210 = *puVar7;
        FUN_141445df2(&local_200);
        if (((*(char *)(lVar2 + 0x338) == '\x01') == (bool)local_c8) &&
           (cVar5 = FUN_145a03054(&local_200,local_568,param_3), cVar5 != '\0')) {
          FUN_145a02f58(local_528);
          FUN_141445df2(local_3c8,&local_200);
          FUN_145a04086(local_528);
          local_40f = local_c8;
          local_410 = local_b0;
          local_3f8 = local_b8;
          local_3f4 = local_b4;
          lVar12 = (longlong)local_50;
          local_440 = cVar3;
          if (lVar12 != 0) {
            local_580 = local_58;
            lVar10 = 0;
            do {
              puVar7 = (undefined8 *)FUN_1447a1f4a(*(longlong *)(local_580 + lVar10) + 0x18);
              local_538 = (void *)0x0;
              uVar1 = *(uint *)(puVar7 + 1);
              local_578 = (void *)*puVar7;
              local_530 = CONCAT44(local_530._4_4_,uVar1);
              if ((longlong)(int)uVar1 == 0) {
                local_530 = (ulonglong)uVar1;
              }
              else {
                FUN_1446dd670(&local_538,uVar1,0);
                memcpy(local_538,local_578,(longlong)(int)uVar1 * 2);
              }
              lVar11 = (longlong)(int)local_400;
              local_400 = local_400 + 1;
              if (local_3fc < local_400) {
                FUN_148ebcfc4(&local_408);
              }
              lVar11 = lVar11 * 0x10;
              *(undefined8 *)(local_408 + lVar11) = 0;
              *(void **)(local_408 + lVar11) = local_538;
              local_538 = (void *)0x0;
              *(int *)(local_408 + 8 + lVar11) = (int)local_530;
              *(undefined4 *)(local_408 + 0xc + lVar11) = local_530._4_4_;
              local_530 = 0;
              lVar10 = lVar10 + 8;
            } while (lVar12 * 8 != lVar10);
          }
          FUN_145a0370c(&local_538,*(undefined4 *)(lVar2 + 0x354),local_528);
          _Src = local_538;
          if ((cVar3 == '\0') || (*(char *)(lVar2 + 0x338) != '\x02')) {
            local_558 = (void *)0x0;
            lVar12 = (longlong)(int)local_530;
            local_550 = (int)local_530;
            ppvVar8 = &local_558;
            if (lVar12 == 0) {
              local_54c = 0;
              lVar12 = local_570;
            }
            else {
              FUN_1446dd670(ppvVar8,local_530 & 0xffffffff,0);
              memcpy(local_558,_Src,lVar12 * 2);
              lVar12 = local_570;
            }
          }
          else {
            local_548 = (void *)0x0;
            lVar12 = (longlong)(int)local_530;
            local_540 = (int)local_530;
            if (lVar12 == 0) {
              local_53c = 0;
            }
            else {
              FUN_1446dd670(&local_548,local_530 & 0xffffffff,0);
              memcpy(local_548,_Src,lVar12 * 2);
            }
            ppvVar8 = &local_548;
            lVar12 = (ulonglong)((local_43f ^ 1) << 4) + lVar2 + 0xb0;
          }
          lVar12 = FUN_145a03470(lVar12,ppvVar8);
          if (*local_588 == 0) {
            if (local_424 == '\x01') {
              FUN_145a03150(local_590,local_528);
              local_44c = *(undefined4 *)(param_1 + 0x2c8);
LAB_145a02bb8:
              local_3f7 = 1;
              *(undefined1 *)(lVar2 + 0x380) = 1;
            }
          }
          else if (((int)local_210 == *local_588) && ((int)uStack_208 == local_588[2])) {
            FUN_145a03150(local_590,local_528);
            local_44c = *(undefined4 *)(param_1 + 0x2c8);
            goto LAB_145a02bb8;
          }
          iVar9 = *(int *)(lVar12 + 0x18);
          *(uint *)(lVar12 + 0x18) = iVar9 + 1U;
          if (*(uint *)(lVar12 + 0x1c) < iVar9 + 1U) {
            FUN_145a02ec2((longlong *)(lVar12 + 0x10),iVar9);
          }
          FUN_145a03b7c((longlong)iVar9 * 0x138 + *(longlong *)(lVar12 + 0x10),local_528);
          if (local_538 != (void *)0x0) {
            FUN_1400020a8();
          }
          FUN_1458d813a(local_528);
          plVar13 = local_560;
          iVar9 = local_594;
        }
        FUN_141445c56(&local_200);
        local_3d8 = CONCAT44(local_3d8._4_4_,(uint)local_3d8 & ~uStack_3e4);
        FUN_1449c0562(&local_3e8);
        iVar6 = local_3d8._4_4_;
      } while (((local_3d8._4_4_ != iVar9) ||
               ((longlong *)CONCAT44(uStack_3dc,uStack_3e0) != plVar13)) ||
              (uVar4 = local_3d8, local_3f0 != param_2));
    }
  }
  local_3d8 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_5b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a02ec2 FUN_145a02ec2 body=149 status=ok
// SIG undefined FUN_145a02ec2(void)

void FUN_145a02ec2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x138,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x138)) {
      uVar5 = uVar4 / 0x138 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x138,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145a02f58 FUN_145a02f58 body=251 status=ok
// SIG undefined FUN_145a02f58(void)

longlong FUN_145a02f58(longlong param_1)

{
  FUN_1400b22c2(param_1,&DAT_149e02088);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1400b22c2(param_1 + 0x30,&DAT_149e02088);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  FUN_144a5dc74(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xb0) = 8;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xf8 | 5;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 1;
  *(undefined2 *)(param_1 + 0xe8) = 0;
  FUN_1400b22c2(param_1 + 0xf0,&DAT_149e02088);
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined2 *)(param_1 + 0x118) = 1;
  *(undefined1 *)(param_1 + 0x11a) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0;
  return param_1;
}



// FUNCTION 145a03054 FUN_145a03054 body=251 status=ok
// SIG undefined FUN_145a03054(void)

byte FUN_145a03054(longlong param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  byte bVar7;
  bool bVar8;
  
  lVar1 = param_2[1];
  if ((longlong)(int)lVar1 == 0) {
    iVar3 = (int)param_2[3];
    if (iVar3 == 0) {
      bVar7 = (char)param_2[4] == '\0';
      goto LAB_145a03085;
    }
    bVar7 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x38) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)(param_1 + 0x30);
    }
    lVar5 = *param_2;
    lVar4 = 0;
    do {
      bVar7 = FUN_1402ca022(*(undefined8 *)(lVar5 + lVar4),puVar6);
      if (bVar7 != 0) break;
      bVar8 = (longlong)(int)lVar1 * 8 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar8);
    iVar3 = (int)param_2[3];
    if (iVar3 == 0) goto LAB_145a03085;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)(param_1 + 0x10);
  }
  lVar1 = param_2[2];
  lVar5 = 0;
  do {
    cVar2 = FUN_1402ca022(*(undefined8 *)(lVar1 + lVar5),puVar6);
    if (cVar2 != '\0') {
      bVar7 = 1;
      break;
    }
    lVar5 = lVar5 + 8;
  } while ((longlong)iVar3 * 8 != lVar5);
LAB_145a03085:
  if (*(byte *)(param_2 + 4) != 0) {
    bVar7 = (-(param_3 & 0xff) - 2 | (uint)*(byte *)(param_2 + 4)) == 0xffffffff | bVar7;
  }
  return bVar7 & 1;
}



// FUNCTION 145a03150 FUN_145a03150 body=305 status=ok
// SIG undefined FUN_145a03150(void)

longlong FUN_145a03150(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_145a03282(param_1 + 0x88,param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  FUN_145a0339c(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined2 *)(param_1 + 0xe8) = *(undefined2 *)(param_2 + 0xe8);
  FUN_144a787a6(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined1 *)(param_1 + 0x104) = *(undefined1 *)(param_2 + 0x104);
  FUN_145a032e0(param_1 + 0x108,param_2 + 0x108);
  *(undefined2 *)(param_1 + 0x118) = *(undefined2 *)(param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x11a) = *(undefined1 *)(param_2 + 0x11a);
  FUN_145a0333e(param_1 + 0x120,param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  return param_1;
}



// FUNCTION 145a03282 FUN_145a03282 body=93 status=ok
// SIG undefined FUN_145a03282(void)

undefined8 * FUN_145a03282(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458d8294(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c868b8(param_1,iVar1);
      FUN_148c8692e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145a032e0 FUN_145a032e0 body=93 status=ok
// SIG undefined FUN_145a032e0(void)

undefined8 * FUN_145a032e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d9f63b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c86f56(param_1,iVar1);
      FUN_148c86fc8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145a0333e FUN_145a0333e body=93 status=ok
// SIG undefined FUN_145a0333e(void)

undefined8 * FUN_145a0333e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458d8267(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c87438(param_1,iVar1);
      FUN_148c8749a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145a0339c FUN_145a0339c body=117 status=ok
// SIG undefined FUN_145a0339c(void)

longlong * FUN_145a0339c(longlong *param_1,longlong *param_2)

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
  *(int *)(param_1 + 2) = (int)param_2[2];
  FUN_145a03412(param_1 + 3,param_2 + 3);
  FUN_145a03412(param_1 + 5,param_2 + 5);
  param_1[7] = param_2[7];
  *(char *)(param_1 + 8) = (char)param_2[8];
  return param_1;
}



// FUNCTION 145a03412 FUN_145a03412 body=93 status=ok
// SIG undefined FUN_145a03412(void)

undefined8 * FUN_145a03412(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1407dde2a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14106b4ae(param_1,iVar1);
      FUN_14106b195(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145a03470 FUN_145a03470 body=382 status=ok
// SIG undefined FUN_145a03470(void)

longlong * FUN_145a03470(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)(int)param_1[1] < 1) {
LAB_145a034a5:
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    FUN_1400b22c2(&local_78,&DAT_149e02088);
    local_68 = 0;
    uStack_60 = 0;
    iVar2 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar2 = 0;
    }
    FUN_1402980a2(&local_78,*param_2,iVar2);
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_145a03688(param_1,iVar2);
    }
    FUN_145a035f0(*param_1 + (longlong)iVar2 * 0x20,&local_78);
    plVar4 = (longlong *)((longlong)iVar2 * 0x20 + *param_1);
    FUN_1458d80d6(&local_78);
LAB_145a0351b:
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return plVar4;
  }
  iVar2 = (int)param_2[1];
  lVar3 = 0;
LAB_145a03565:
  plVar4 = (longlong *)(*param_1 + lVar3 * 0x20);
  iVar1 = *(int *)(*param_1 + 8 + lVar3 * 0x20);
  if (iVar1 == iVar2) {
    if (1 < iVar2) {
      lVar9 = 0;
      do {
        uVar7 = *(ushort *)(*plVar4 + lVar9);
        uVar8 = (ulonglong)uVar7;
        uVar5 = *(ushort *)(*param_2 + lVar9);
        if (uVar7 == uVar5) {
          if (uVar7 == 0) break;
        }
        else {
          if (0x7f < (uVar5 | uVar7)) goto LAB_145a035e2;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar6 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar6]) goto LAB_145a035e2;
        }
        lVar9 = lVar9 + 2;
      } while( true );
    }
  }
  else if (iVar1 + iVar2 != 1) goto LAB_145a035d4;
  goto LAB_145a0351b;
LAB_145a035e2:
  if (uVar7 == uVar5) goto LAB_145a0351b;
LAB_145a035d4:
  lVar3 = lVar3 + 1;
  if (lVar3 == (int)param_1[1]) goto LAB_145a034a5;
  goto LAB_145a03565;
}



// FUNCTION 145a035f0 FUN_145a035f0 body=151 status=ok
// SIG undefined FUN_145a035f0(void)

undefined8 * FUN_145a035f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
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
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_148c87720(param_1 + 2,iVar1,0);
    FUN_148c87795(param_1[2],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 145a03688 FUN_145a03688 body=132 status=ok
// SIG undefined FUN_145a03688(void)

void FUN_145a03688(longlong param_1,int param_2)

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



// FUNCTION 145a0370c FUN_145a0370c body=1129 status=ok
// SIG undefined FUN_145a0370c(void)

undefined8 * FUN_145a0370c(undefined8 *param_1,int param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 1) {
    FUN_1400b22c2(&local_48,"main_mission");
    iVar5 = *(int *)(param_3 + 0x28);
    if (iVar5 == (int)uStack_40) {
      if (iVar5 < 2) {
        bVar10 = true;
      }
      else {
        lVar8 = 0;
        while( true ) {
          uVar1 = *(ushort *)(*(longlong *)(param_3 + 0x20) + lVar8);
          uVar4 = (uint)uVar1;
          uVar2 = *(ushort *)(local_48 + lVar8);
          uVar9 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_145a03844;
            }
            iVar5 = uVar4 - uVar9;
            goto LAB_145a0386f;
          }
          if (uVar1 == 0) break;
LAB_145a03844:
          lVar8 = lVar8 + 2;
        }
        iVar5 = 0;
LAB_145a0386f:
        bVar10 = iVar5 == 0;
      }
    }
    else {
      bVar10 = (int)uStack_40 + iVar5 == 1;
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (bVar10) {
      pcVar7 = "UIMissionType_MainMission";
    }
    else {
      FUN_1400b22c2(&local_48,"side_mission");
      iVar5 = *(int *)(param_3 + 0x28);
      if (iVar5 == (int)uStack_40) {
        bVar10 = true;
        if (1 < iVar5) {
          lVar8 = 0;
          while( true ) {
            uVar1 = *(ushort *)(*(longlong *)(param_3 + 0x20) + lVar8);
            uVar4 = (uint)uVar1;
            uVar2 = *(ushort *)(local_48 + lVar8);
            uVar9 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_145a03972;
              }
              iVar5 = uVar4 - uVar9;
              goto LAB_145a03b1b;
            }
            if (uVar1 == 0) break;
LAB_145a03972:
            lVar8 = lVar8 + 2;
          }
          iVar5 = 0;
LAB_145a03b1b:
          bVar10 = iVar5 == 0;
        }
      }
      else {
        bVar10 = (int)uStack_40 + iVar5 == 1;
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (bVar10) {
        pcVar7 = "UIMissionType_SideMission";
      }
      else {
        FUN_1400b22c2(&local_48,"faction_mission");
        iVar5 = *(int *)(param_3 + 0x28);
        if (iVar5 == (int)uStack_40) {
          bVar10 = true;
          if (1 < iVar5) {
            lVar8 = 0;
            while( true ) {
              uVar1 = *(ushort *)(*(longlong *)(param_3 + 0x20) + lVar8);
              uVar4 = (uint)uVar1;
              uVar2 = *(ushort *)(local_48 + lVar8);
              uVar9 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_145a03a37;
                }
                iVar5 = uVar4 - uVar9;
                goto LAB_145a03b68;
              }
              if (uVar1 == 0) break;
LAB_145a03a37:
              lVar8 = lVar8 + 2;
            }
            iVar5 = 0;
LAB_145a03b68:
            bVar10 = iVar5 == 0;
          }
        }
        else {
          bVar10 = (int)uStack_40 + iVar5 == 1;
        }
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        if (bVar10) {
          pcVar7 = "UIMissionLog_FactionMission";
        }
        else {
          FUN_1400b22c2(&local_48,"daily_mission");
          iVar5 = *(int *)(param_3 + 0x28);
          if (iVar5 == (int)uStack_40) {
            bVar10 = true;
            if (1 < iVar5) {
              lVar8 = 0;
              while( true ) {
                uVar1 = *(ushort *)(*(longlong *)(param_3 + 0x20) + lVar8);
                uVar4 = (uint)uVar1;
                uVar2 = *(ushort *)(local_48 + lVar8);
                uVar9 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_145a03af0;
                  }
                  iVar5 = uVar4 - uVar9;
                  goto LAB_145a03b74;
                }
                if (uVar1 == 0) break;
LAB_145a03af0:
                lVar8 = lVar8 + 2;
              }
              iVar5 = 0;
LAB_145a03b74:
              bVar10 = iVar5 == 0;
            }
          }
          else {
            bVar10 = (int)uStack_40 + iVar5 == 1;
          }
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          if (!bVar10) goto LAB_145a0373a;
          pcVar7 = "UIMissionLog_Contract";
        }
      }
    }
  }
  else {
    if (param_2 == 2) {
      *param_1 = 0;
      iVar5 = *(int *)(param_3 + 0x58);
      pvVar3 = *(void **)(param_3 + 0x50);
      *(int *)(param_1 + 1) = iVar5;
      if ((longlong)iVar5 != 0) {
        FUN_1446dd670(param_1,iVar5,0);
        memcpy((void *)*param_1,pvVar3,(longlong)iVar5 * 2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
      }
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      goto LAB_145a037d0;
    }
LAB_145a0373a:
    pcVar7 = "UIBigMap_AllMissions";
  }
  uStack_28 = 0;
  local_30 = 0;
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  FUN_1446ddda2(&local_48,pcVar7,0);
  FUN_1410d1eba(local_58,&local_48);
  puVar6 = (undefined8 *)FUN_1447a1f4a(local_58);
  *param_1 = 0;
  iVar5 = *(int *)(puVar6 + 1);
  pvVar3 = (void *)*puVar6;
  *(int *)(param_1 + 1) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar5,0);
    memcpy((void *)*param_1,pvVar3,(longlong)iVar5 * 2);
  }
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
LAB_145a037d0:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a03b7c FUN_145a03b7c body=1090 status=ok
// SIG undefined FUN_145a03b7c(void)

undefined8 * FUN_145a03b7c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
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
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  pvVar2 = (void *)param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x12);
  uVar3 = param_2[0x11];
  *(int *)(param_1 + 0x12) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_148c868b8(param_1 + 0x11,iVar1,0);
    FUN_148c8692e(param_1[0x11],uVar3,iVar1);
  }
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  FUN_145a03fbe(param_1 + 0x14,param_2 + 0x14);
  *(undefined2 *)(param_1 + 0x1d) = *(undefined2 *)(param_2 + 0x1d);
  param_1[0x1e] = 0;
  iVar1 = *(int *)(param_2 + 0x1f);
  pvVar2 = (void *)param_2[0x1e];
  *(int *)(param_1 + 0x1f) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1e,iVar1,0);
    memcpy((void *)param_1[0x1e],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x104) = *(undefined1 *)((longlong)param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  param_1[0x21] = 0;
  iVar1 = *(int *)(param_2 + 0x22);
  uVar3 = param_2[0x21];
  *(int *)(param_1 + 0x22) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  else {
    FUN_148c86f56(param_1 + 0x21,iVar1,0);
    FUN_148c86fc8(param_1[0x21],uVar3,iVar1);
  }
  *(undefined1 *)((longlong)param_1 + 0x11a) = *(undefined1 *)((longlong)param_2 + 0x11a);
  *(undefined2 *)(param_1 + 0x23) = *(undefined2 *)(param_2 + 0x23);
  param_1[0x24] = 0;
  iVar1 = *(int *)(param_2 + 0x25);
  uVar3 = param_2[0x24];
  *(int *)(param_1 + 0x25) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 300) = 0;
  }
  else {
    FUN_148c87438(param_1 + 0x24,iVar1,0);
    FUN_148c8749a(param_1[0x24],uVar3,iVar1);
  }
  param_1[0x26] = param_2[0x26];
  return param_1;
}



// FUNCTION 145a03fbe FUN_145a03fbe body=199 status=ok
// SIG undefined FUN_145a03fbe(void)

longlong * FUN_145a03fbe(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  param_1[3] = 0;
  iVar1 = (int)param_2[4];
  lVar3 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_14106b4ae(param_1 + 3,iVar1,0);
    FUN_14106b195(param_1[3],lVar3,iVar1);
  }
  param_1[5] = 0;
  iVar1 = (int)param_2[6];
  lVar3 = param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_14106b4ae(param_1 + 5,iVar1,0);
    FUN_14106b195(param_1[5],lVar3,iVar1);
  }
  *(char *)(param_1 + 8) = (char)param_2[8];
  param_1[7] = param_2[7];
  return param_1;
}



// FUNCTION 145a04086 FUN_145a04086 body=4126 status=ok
// SIG undefined FUN_145a04086(void)

void FUN_145a04086(undefined ***param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  int iVar18;
  undefined **ppuVar19;
  longlong lVar20;
  undefined **ppuVar21;
  longlong lVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_4f8 [32];
  undefined **local_4d8;
  undefined **local_4d0;
  int local_4c4;
  undefined ***local_4c0;
  undefined **local_4b8;
  undefined **local_4b0;
  undefined8 local_4a8;
  longlong local_4a0;
  undefined8 local_498;
  longlong *local_490;
  longlong *local_488 [2];
  longlong *local_478 [2];
  undefined8 local_468;
  longlong *local_460;
  undefined ***local_458;
  undefined8 *local_450;
  undefined **local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 auStack_428 [18];
  longlong local_398 [2];
  undefined1 local_388;
  longlong *local_148;
  undefined8 local_140;
  undefined **local_138;
  uint local_130;
  int iStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  FUN_1408226d0((longlong)param_2 + 0x13c,&local_448,1);
  if (&local_448 == param_1) {
    if (local_448 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    *param_1 = local_448;
    local_448 = (undefined **)0x0;
    *(int *)(param_1 + 1) = (int)uStack_440;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_440._4_4_;
  }
  uVar7 = *(uint *)(param_2 + 1);
  if ((int)uVar7 < 2) {
    FUN_1400b22c2(&local_448,"Designer: Add Mission Title");
  }
  else {
    local_448 = (undefined **)0x0;
    pvVar3 = (void *)*param_2;
    uStack_440 = (undefined **)CONCAT44(uStack_440._4_4_,uVar7);
    FUN_1446dd670(&local_448,(ulonglong)uVar7,0);
    memcpy(local_448,pvVar3,(ulonglong)uVar7 * 2);
  }
  if (param_1 + 2 == &local_448) {
    if (local_448 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[2] != (undefined **)0x0) {
      FUN_1400020a8();
    }
    param_1[2] = local_448;
    *(int *)(param_1 + 3) = (int)uStack_440;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_440._4_4_;
  }
  local_448 = (undefined **)0x0;
  uStack_440 = (undefined **)0x0;
  local_438 = (longlong *)((ulonglong)local_438._4_4_ << 0x20);
  local_430 = 0;
  auStack_428[0] = 0;
  FUN_140ac6a88(&local_448,param_1 + 4);
  if (local_430 != 0) {
    FUN_1400020a8();
  }
  uVar7 = *(uint *)(param_2 + 3);
  if ((int)uVar7 < 2) {
    FUN_1400b22c2(&local_448,&DAT_149e02088);
  }
  else {
    local_448 = (undefined **)0x0;
    pvVar3 = (void *)param_2[2];
    uStack_440 = (undefined **)CONCAT44(uStack_440._4_4_,uVar7);
    FUN_1446dd670(&local_448,(ulonglong)uVar7,0);
    memcpy(local_448,pvVar3,(ulonglong)uVar7 * 2);
  }
  if (param_1 + 4 == &local_448) {
    if (local_448 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[4] != (undefined **)0x0) {
      FUN_1400020a8();
    }
    param_1[4] = local_448;
    local_448 = (undefined **)0x0;
    *(int *)(param_1 + 5) = (int)uStack_440;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_440._4_4_;
  }
  FUN_140390f7a(param_2 + 0xe,param_1 + 6);
  uVar7 = *(uint *)(param_2 + 0xb);
  if ((int)uVar7 < 2) {
    FUN_1400b22c2(&local_448,"Designer: Add Mission Description");
  }
  else {
    local_448 = (undefined **)0x0;
    pvVar3 = (void *)param_2[10];
    uStack_440 = (undefined **)CONCAT44(uStack_440._4_4_,uVar7);
    FUN_1446dd670(&local_448,(ulonglong)uVar7,0);
    memcpy(local_448,pvVar3,(ulonglong)uVar7 * 2);
  }
  if (param_1 + 8 == &local_448) {
    if (local_448 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[8] != (undefined **)0x0) {
      FUN_1400020a8();
    }
    param_1[8] = local_448;
    local_448 = (undefined **)0x0;
    *(int *)(param_1 + 9) = (int)uStack_440;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_440._4_4_;
  }
  iVar18 = *(int *)(param_2 + 7) + -1;
  if (*(int *)(param_2 + 7) == 0) {
    iVar18 = 0;
  }
  FUN_1402980a2(param_1 + 0xc,param_2[6],iVar18);
  iVar18 = *(int *)(param_2 + 9) + -1;
  if (*(int *)(param_2 + 9) == 0) {
    iVar18 = 0;
  }
  FUN_1402980a2(param_1 + 0xe,param_2[8],iVar18);
  *(bool *)(param_1 + 0x10) = 0 < *(int *)(param_2 + 0x14);
  *(bool *)(param_1 + 0x13) = 0 < *(int *)(param_2 + 0x16);
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x104) = *(undefined1 *)(param_2 + 0x26);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined1 *)((longlong)param_1 + 0xe9) = *(undefined1 *)((longlong)param_2 + 0x139);
  bVar23 = true;
  if ((*(int *)(param_2 + 0x1c) != 0) && (*(int *)((longlong)param_2 + 0xe4) != 0)) {
    bVar23 = *(int *)(param_2 + 0x1c) == DAT_14c948000;
  }
  *(byte *)((longlong)param_1 + 0x11a) = bVar23 ^ 1;
  FUN_144a5dc74(local_478);
  local_448 = (undefined **)0x0;
  uStack_440 = (undefined **)0x0;
  local_438 = (longlong *)((ulonglong)local_438 & 0xffffffff00000000);
  local_430 = 0;
  auStack_428[0] = 0;
  FUN_1446ddda2(&local_448,"UIMissionLog_Distance",0);
  FUN_140ac6c96(&local_448,local_478);
  if (local_430 != 0) {
    FUN_1400020a8();
  }
  iVar18 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar18 == -1) {
    FUN_1400b22c2(&local_448,&DAT_149e02088);
  }
  else {
    FUN_14023409e(&local_498,local_478,1);
    local_450 = auStack_428;
    local_448 = (undefined **)((ulonglong)local_448 & 0xffffffff00000000);
    local_438 = (longlong *)0x0;
    local_430 = local_430 & 0xffffffff00000000;
    local_458 = &local_448;
    uStack_440 = (undefined **)(longlong)iVar18;
    FUN_14010d304(&local_148);
    local_468 = local_498;
    local_460 = local_490;
    if (local_490 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_490 + 1) = (int)local_490[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_488,&local_468,&local_148);
    FUN_14007f2db(local_148,(ulonglong)local_140 & 0xffffffff);
    if (local_148 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_438 != (longlong *)0x0) {
      (**(code **)(*local_438 + 0x10))();
    }
    if (local_490 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_490 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_490)(local_490);
        LOCK();
        piVar1 = (int *)((longlong)local_490 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_490 + 0x10))(local_490);
        }
      }
    }
    puVar9 = (undefined8 *)FUN_1447a1f4a(local_488);
    local_448 = (undefined **)0x0;
    uVar7 = *(uint *)(puVar9 + 1);
    pvVar3 = (void *)*puVar9;
    uStack_440 = (undefined **)CONCAT44(uStack_440._4_4_,uVar7);
    if ((longlong)(int)uVar7 == 0) {
      uStack_440 = (undefined **)(ulonglong)uVar7;
    }
    else {
      FUN_1446dd670(&local_448,uVar7,0);
      memcpy(local_448,pvVar3,(longlong)(int)uVar7 * 2);
    }
  }
  iVar15 = (int)uStack_440 + -1;
  if ((int)uStack_440 == 0) {
    iVar15 = 0;
  }
  FUN_1402980a2(param_1 + 0x1e,local_448,iVar15);
  if (local_448 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((iVar18 != -1) && (local_488[0] != (longlong *)0x0)) {
    (**(code **)(*local_488[0] + 0x10))();
  }
  if (*(int *)(param_2 + 5) < 2) {
    FUN_144a5dc74(&local_148);
    local_448 = (undefined **)0x0;
    uStack_440 = (undefined **)0x0;
    local_438 = (longlong *)((ulonglong)local_438 & 0xffffffff00000000);
    local_430 = 0;
    auStack_428[0] = 0;
    FUN_1446ddda2(&local_448,"UIMissionLog_NoLocation",0);
    FUN_140ac6c96(&local_448,&local_148);
    if (local_430 != 0) {
      FUN_1400020a8();
    }
    uVar10 = FUN_1447a1f4a(&local_148);
    FUN_144a787a6(param_1 + 10,uVar10);
    if (local_148 != (longlong *)0x0) {
      (**(code **)(*local_148 + 0x10))();
    }
  }
  else {
    FUN_1402980a2(param_1 + 10,param_2[4],*(int *)(param_2 + 5) + -1);
  }
  plVar2 = param_2 + 0x2b;
  ppuVar21 = (undefined **)(param_2 + 0x2d);
  local_448 = (undefined **)0x100000000;
  local_438._0_4_ = 0xffffffff;
  local_438._4_4_ = 0;
  local_430 = local_430 & 0xffffffff00000000;
  iVar18 = 0;
  uStack_440 = ppuVar21;
  if (*(int *)(param_2 + 0x30) != 0) {
    FUN_1449c0562(&local_448);
    iVar18 = *(int *)(param_2 + 0x30);
  }
  local_130 = (uint)local_438;
  iStack_12c = local_438._4_4_;
  local_128 = (undefined4)local_430;
  local_124 = local_430._4_4_;
  local_140 = local_448;
  local_138 = uStack_440;
  local_148 = plVar2;
  if ((local_438._4_4_ != iVar18) || (uStack_440 != ppuVar21)) {
    do {
      local_4a8 = *(undefined8 *)(*local_148 + 0x10 + (longlong)iStack_12c * 0x28);
      local_4a0 = *(longlong *)(*local_148 + 0x18 + (longlong)iStack_12c * 0x28);
      if (local_4a0 != 0) {
        LOCK();
        *(int *)(local_4a0 + 8) = *(int *)(local_4a0 + 8) + 1;
        UNLOCK();
      }
      FUN_148e74f20(&local_448,&local_4a8);
      iVar15 = *(int *)(param_1 + 0x22);
      *(uint *)(param_1 + 0x22) = iVar15 + 1U;
      if (*(uint *)((longlong)param_1 + 0x114) < iVar15 + 1U) {
        FUN_1457a8ef2(param_1 + 0x21,iVar15);
      }
      FUN_148e79d94(param_1[0x21] + (longlong)iVar15 * 0x1d,&local_448);
      FUN_140d9f6ca(&local_448);
      local_130 = local_130 & ~local_140._4_4_;
      FUN_1449c0562(&local_140);
    } while (((iStack_12c != iVar18) || (local_138 != ppuVar21)) || (local_148 != plVar2));
  }
  iVar18 = *(int *)(param_1 + 0x22);
  if (1 < (longlong)iVar18) {
    ppuVar21 = param_1[0x21];
    memset(&local_438,0,0x2f0);
    uStack_440 = ppuVar21 + (longlong)iVar18 * 0x1d + -0x1d;
    local_448 = ppuVar21;
    fVar24 = logf((float)iVar18);
    local_438._0_4_ = (uint)(longlong)(fVar24 + fVar24);
    local_4c0 = &local_448;
    do {
      ppuVar21 = *local_4c0;
      local_4d8 = local_4c0[1];
      local_4c4 = *(int *)(local_4c0 + 2);
      iVar18 = (int)((ulonglong)((longlong)local_4d8 - (longlong)ppuVar21) >> 3) * 0x4f72c235;
      local_4d0 = (undefined **)(ulonglong)(iVar18 + 1);
      ppuVar16 = ppuVar21;
      ppuVar19 = local_4d8;
      if (local_4c4 != 0) {
LAB_145a04a48:
        local_4b0 = ppuVar19;
        local_4b8 = ppuVar16;
        ppuVar16 = ppuVar21;
        if (8 < (int)local_4d0) {
          uVar4 = (ulonglong)local_4d0 >> 1;
          memcpy(&local_148,ppuVar16 + uVar4 * 0x1d,0xe8);
          memcpy(ppuVar16 + uVar4 * 0x1d,ppuVar16,0xe8);
          memcpy(ppuVar16,&local_148,0xe8);
          ppuVar17 = local_4d8 + 0x1d;
          ppuVar21 = ppuVar16;
          do {
            ppuVar19 = ppuVar21 + 0x1d;
            ppuVar6 = ppuVar21 + 0x1d;
            do {
              ppuVar21 = ppuVar6;
              ppuVar11 = ppuVar19;
              if (local_4d8 < ppuVar21) break;
              ppuVar19 = ppuVar11 + 0x1d;
              ppuVar6 = ppuVar21 + 0x1d;
            } while (*(byte *)(ppuVar21 + 4) <= *(byte *)(ppuVar16 + 4));
            ppuVar6 = ppuVar17 + -0x3a;
            do {
              ppuVar5 = ppuVar17;
              ppuVar19 = ppuVar6;
              ppuVar17 = ppuVar5 + -0x1d;
              if (ppuVar17 <= ppuVar16) break;
              ppuVar6 = ppuVar19 + -0x1d;
            } while (*(byte *)(ppuVar16 + 4) <= *(byte *)(ppuVar5 + -0x19));
            if (ppuVar17 < ppuVar21) goto LAB_145a04b56;
            memcpy(&local_148,ppuVar21,0xe8);
            memcpy(ppuVar21,ppuVar17,0xe8);
            memcpy(ppuVar17,&local_148,0xe8);
          } while( true );
        }
        if (ppuVar16 < local_4d8) {
          local_4d0 = ppuVar16 + 0x1d;
          ppuVar21 = ppuVar16;
          ppuVar19 = local_4d0;
          do {
            for (; ppuVar17 = local_4d8, ppuVar19 <= local_4d8; ppuVar19 = ppuVar19 + 0x1d) {
              ppuVar17 = ppuVar19;
              if (*(byte *)(ppuVar19 + 4) <= *(byte *)(ppuVar21 + 4)) {
                ppuVar17 = ppuVar21;
              }
              ppuVar21 = ppuVar17;
            }
            ppuVar6 = local_4d8 + -0x1d;
            memcpy(&local_148,ppuVar21,0xe8);
            memcpy(ppuVar21,ppuVar17,0xe8);
            memcpy(ppuVar17,&local_148,0xe8);
            local_4d8 = ppuVar6;
            ppuVar21 = ppuVar16;
            ppuVar19 = local_4d0;
          } while (ppuVar16 < ppuVar6);
        }
        goto LAB_145a04f79;
      }
LAB_145a04c5f:
      if ((int)local_4d0 != 0) {
        uVar7 = (iVar18 - (iVar18 + -1 >> 0x1f)) + -1 >> 1;
        do {
          local_4d8 = (undefined **)(ulonglong)uVar7;
          uVar8 = uVar7 * 2 + 1;
          ppuVar16 = local_4d8;
          if ((int)uVar8 < (int)local_4d0) {
            do {
              uVar12 = uVar7 * 2 + 2;
              uVar7 = uVar8;
              if (((int)uVar12 < (int)local_4d0) &&
                 (*(byte *)(ppuVar21 + (longlong)(int)uVar8 * 0x1d + 4) <=
                  *(byte *)(ppuVar21 + (longlong)(int)uVar12 * 0x1d + 4))) {
                uVar7 = uVar12;
              }
              if (*(byte *)(ppuVar21 + (longlong)(int)uVar7 * 0x1d + 4) <=
                  *(byte *)(ppuVar21 + (longlong)(int)ppuVar16 * 0x1d + 4)) break;
              memcpy(&local_148,ppuVar21 + (longlong)(int)ppuVar16 * 0x1d,0xe8);
              memcpy(ppuVar21 + (longlong)(int)ppuVar16 * 0x1d,
                     ppuVar21 + (longlong)(int)uVar7 * 0x1d,0xe8);
              memcpy(ppuVar21 + (longlong)(int)uVar7 * 0x1d,&local_148,0xe8);
              uVar8 = uVar7 * 2 + 1;
              ppuVar16 = (undefined **)(ulonglong)uVar7;
            } while ((int)uVar8 < (int)local_4d0);
          }
          uVar7 = (int)local_4d8 - 1;
        } while ((int)local_4d8 != 0);
        iVar18 = (int)local_4d0;
        local_4d8 = (undefined **)&DAT_ffffffff;
        if (1 < (int)local_4d0) {
          local_4d8 = (undefined **)(((ulonglong)local_4d0 & 0xffffffff) - 1);
          lVar20 = (longlong)local_4d8 * 0x1d;
          memcpy(&local_148,ppuVar21,0xe8);
          memcpy(ppuVar21,ppuVar21 + lVar20,0xe8);
          memcpy(ppuVar21 + lVar20,&local_148,0xe8);
          if (iVar18 != 2) {
            do {
              iVar18 = 0;
              iVar14 = 1;
              iVar15 = 0;
              do {
                iVar18 = iVar18 + 2;
                iVar13 = iVar14;
                if (((longlong)iVar18 < (longlong)local_4d8) &&
                   (*(byte *)(ppuVar21 + (longlong)iVar14 * 0x1d + 4) <=
                    *(byte *)(ppuVar21 + (longlong)iVar18 * 0x1d + 4))) {
                  iVar13 = iVar18;
                }
                if (*(byte *)(ppuVar21 + (longlong)iVar13 * 0x1d + 4) <=
                    *(byte *)(ppuVar21 + (longlong)iVar15 * 0x1d + 4)) break;
                memcpy(&local_148,ppuVar21 + (longlong)iVar15 * 0x1d,0xe8);
                memcpy(ppuVar21 + (longlong)iVar15 * 0x1d,ppuVar21 + (longlong)iVar13 * 0x1d,0xe8);
                memcpy(ppuVar21 + (longlong)iVar13 * 0x1d,&local_148,0xe8);
                iVar18 = iVar13 * 2;
                iVar14 = iVar13 * 2 + 1;
                iVar15 = iVar13;
              } while ((longlong)iVar14 < (longlong)local_4d8);
              ppuVar19 = local_4d8;
              ppuVar16 = (undefined **)((longlong)local_4d8 + -1);
              memcpy(&local_148,ppuVar21,0xe8);
              memcpy(ppuVar21,ppuVar21 + (longlong)ppuVar16 * 0x1d,0xe8);
              memcpy(ppuVar21 + (longlong)ppuVar16 * 0x1d,&local_148,0xe8);
              local_4d8 = ppuVar16;
            } while ((undefined **)0x2 < ppuVar19);
          }
        }
      }
LAB_145a04f79:
      local_4c0 = local_4c0 + -3;
    } while (&local_448 <= local_4c0);
  }
  iVar18 = *(int *)(param_2 + 0x14);
  if ((longlong)iVar18 != 0) {
    lVar20 = param_2[0x13];
    lVar22 = 0;
    do {
      FUN_1408f3f9e(&local_448);
      local_448 = &PTR_FUN_14b8b8750;
      local_398[0] = 0;
      local_398[1] = 0;
      local_388 = 1;
      iVar15 = *(int *)(lVar20 + 8 + lVar22);
      iVar14 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar14 = 0;
      }
      FUN_1402980a2(local_398,*(undefined8 *)(lVar20 + lVar22),iVar14);
      local_388 = *(undefined1 *)(lVar20 + 0x10 + lVar22);
      iVar15 = *(int *)(param_1 + 0x12);
      *(uint *)(param_1 + 0x12) = iVar15 + 1U;
      if (*(uint *)((longlong)param_1 + 0x94) < iVar15 + 1U) {
        FUN_148ebb5ee(param_1 + 0x11,iVar15);
      }
      FUN_148c8696a(param_1[0x11] + (longlong)iVar15 * 0x19,&local_448);
      local_448 = &PTR_FUN_14b8b8750;
      if (local_398[0] != 0) {
        FUN_1400020a8();
      }
      FUN_140fe7f26(&local_448);
      lVar22 = lVar22 + 0x18;
    } while ((longlong)iVar18 * 0x18 != lVar22);
  }
  if (0 < *(int *)(param_2 + 0x16)) {
    lVar20 = 0;
    lVar22 = 0;
    do {
      if (((ulonglong)param_1[0x1b] & 2) != 0) break;
      FUN_145a050a6(param_1 + 0x14,param_2[0x15] + lVar20);
      lVar22 = lVar22 + 1;
      lVar20 = lVar20 + 0xd8;
    } while (lVar22 < *(int *)(param_2 + 0x16));
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if (local_478[0] != (longlong *)0x0) {
    (**(code **)(*local_478[0] + 0x10))();
  }
  FUN_141445c56(param_2);
  if ((local_60 ^ (ulonglong)auStack_4f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_145a04b56:
  memcpy(&local_148,ppuVar16,0xe8);
  memcpy(ppuVar16,ppuVar17,0xe8);
  memcpy(ppuVar17,&local_148,0xe8);
  local_4c4 = local_4c4 + -1;
  if ((longlong)ppuVar19 - (longlong)local_4b8 < (longlong)local_4b0 - (longlong)ppuVar11) {
    if (ppuVar21 < local_4d8) {
      *local_4c0 = ppuVar21;
      local_4c0[1] = local_4d8;
      *(int *)(local_4c0 + 2) = local_4c4;
      local_4c0 = local_4c0 + 3;
    }
    ppuVar21 = ppuVar16;
    ppuVar6 = ppuVar5 + -0x3a;
    if (ppuVar17 <= ppuVar16 + 0x1d) goto LAB_145a04f79;
  }
  else {
    if (ppuVar16 + 0x1d < ppuVar17) {
      *local_4c0 = ppuVar16;
      local_4c0[1] = ppuVar5 + -0x3a;
      *(int *)(local_4c0 + 2) = local_4c4;
      local_4c0 = local_4c0 + 3;
    }
    ppuVar16 = ppuVar11;
    ppuVar19 = local_4d8;
    ppuVar6 = local_4d8;
    if (local_4d8 <= ppuVar21) goto LAB_145a04f79;
  }
  local_4d8 = ppuVar6;
  iVar18 = (int)((ulonglong)((longlong)ppuVar19 - (longlong)ppuVar16) >> 3) * 0x4f72c235;
  local_4d0 = (undefined **)(ulonglong)(iVar18 + 1);
  local_4b8 = ppuVar16;
  local_4b0 = ppuVar19;
  if (local_4c4 == 0) goto LAB_145a04c5f;
  goto LAB_145a04a48;
}



// FUNCTION 145a050a6 FUN_145a050a6 body=143 status=ok
// SIG undefined FUN_145a050a6(void)

void FUN_145a050a6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (((*(byte *)(param_1 + 0x38) & 4) != 0) && (*(int *)(param_1 + 0x10) < iVar1)) {
    iVar1 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
      FUN_140c71e7a(param_1 + 0x28,iVar1);
    }
    FUN_14106b1d2((longlong)iVar1 * 0xd8 + *(longlong *)(param_1 + 0x28),param_2);
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 2;
    return;
  }
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_140c71e7a((longlong *)(param_1 + 0x18),iVar1);
  }
  FUN_14106b1d2((longlong)iVar1 * 0xd8 + *(longlong *)(param_1 + 0x18),param_2);
  return;
}



// FUNCTION 145a05136 FUN_145a05136 body=382 status=ok
// SIG undefined FUN_145a05136(void)

void FUN_145a05136(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x230) = 0;
  plVar3 = *(longlong **)(param_1 + 0x238);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x238) = 0;
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
  *(undefined8 *)(param_1 + 0x240) = 0;
  plVar3 = *(longlong **)(param_1 + 0x248);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x248) = 0;
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
  *(undefined8 *)(param_1 + 0x250) = 0;
  plVar3 = *(longlong **)(param_1 + 600);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 600) = 0;
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
  FUN_144a81ee1(*(undefined8 *)(param_1 + 0x260),*(undefined4 *)(param_1 + 0x268));
  *(undefined4 *)(param_1 + 0x268) = 0;
  if (*(int *)(param_1 + 0x26c) != 0) {
    FUN_146a3754a(param_1 + 0x260,0);
  }
  if (*(int *)(param_1 + 0x19c) < 0) {
    *(undefined4 *)(param_1 + 0x198) = 0;
    FUN_148264d00(param_1 + 400);
  }
  else {
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  FUN_145a052b4(param_1 + 0x1a8,1);
  return;
}



// FUNCTION 145a052b4 FUN_145a052b4 body=93 status=ok
// SIG undefined FUN_145a052b4(void)

void FUN_145a052b4(longlong param_1,char param_2)

{
  FUN_145a05312(param_1 + 0x10,param_1);
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_147702ce4(param_1,0);
  }
  if ((param_2 != '\0') && (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c))) {
    FUN_147702d44(param_1 + 0x38);
    FUN_147702e88(param_1 + 0x38);
    return;
  }
  return;
}



// FUNCTION 145a05312 FUN_145a05312 body=94 status=ok
// SIG undefined FUN_145a05312(void)

void FUN_145a05312(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147702a74(param_1,iVar2);
  }
  FUN_1476df94a((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 145a05370 FUN_145a05370 body=40 status=ok
// SIG undefined FUN_145a05370(void)

undefined8 FUN_145a05370(undefined8 param_1,int param_2)

{
  FUN_145a05398();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a05398 FUN_145a05398 body=126 status=ok
// SIG undefined FUN_145a05398(void)

void FUN_145a05398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b829870;
  param_1[6] = &PTR_FUN_14b829b30;
  param_1[7] = &PTR_FUN_14b829bc0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140b3fd78(param_1);
  return;
}



// FUNCTION 145a0541e FUN_145a0541e body=482 status=ok
// SIG undefined FUN_145a0541e(void)

undefined8 * FUN_145a0541e(undefined8 *param_1)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145c7973c();
  *param_1 = &PTR_FUN_14b257370;
  param_1[0x30] = 0;
  local_28 = FUN_145a05602();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_1446ddc76(&local_30,"Register",1);
  FUN_141446502(param_1 + 5,local_30,&local_28);
  local_38 = FUN_145a05602();
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_38);
  }
  FUN_1446ddc76(&local_40,"Unregister",1);
  FUN_141446502(param_1 + 0xc,local_40,&local_38);
  local_48 = FUN_145a05602();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  FUN_1446ddc76(&local_50,"Destroy",1);
  FUN_141446502(param_1 + 0x13,local_50,&local_48);
  local_58 = FUN_145a05602();
  if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_58);
  }
  FUN_1446ddc76(&local_60,"ValueProp",1);
  FUN_141446502(param_1 + 0x21,local_60,&local_58);
  FUN_1446ddc76(&local_68,"GbxSkillManagedResourceType_Actor_Event__DelegateSignature",1);
  FUN_145a056e8(param_1 + 0x1a,local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a05602 FUN_145a05602 body=228 status=ok
// SIG undefined FUN_145a05602(void)

longlong FUN_145a05602(void)

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
  if (DAT_14cb651e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145909d42;
    local_38 = &LAB_148715b2e;
    local_40 = &LAB_145a05416;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x188;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillManagedResourceType_Actor",&DAT_14cb651e0,
                  FUN_1465087c8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb651e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a056e8 FUN_145a056e8 body=63 status=ok
// SIG undefined FUN_145a056e8(void)

void FUN_145a056e8(void)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  FUN_141446502();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a05734 FUN_145a05734 body=84 status=ok
// SIG undefined FUN_145a05734(void)

undefined8 * FUN_145a05734(undefined8 *param_1)

{
  FUN_140ea0e34();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_14a51dee0;
  param_1[5] = &PTR_FUN_14a51e200;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) | 1;
  FUN_140e2f50a(param_1,4);
  return param_1;
}



// FUNCTION 145a05788 FUN_145a05788 body=21 status=ok
// SIG undefined FUN_145a05788(void)

undefined8 FUN_145a05788(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145a057ce FUN_145a057ce body=25 status=ok
// SIG undefined FUN_145a057ce(void)

undefined8 FUN_145a057ce(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145a057e8 FUN_145a057e8 body=32 status=ok
// SIG undefined FUN_145a057e8(void)

void FUN_145a057e8(longlong param_1)

{
  FUN_145a05808();
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  FUN_1415a26e8(param_1);
  return;
}



// FUNCTION 145a05808 FUN_145a05808 body=78 status=ok
// SIG undefined FUN_145a05808(void)

void FUN_145a05808(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    plVar3 = *(longlong **)(param_1 + 0x58);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145a05852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145a05856 FUN_145a05856 body=101 status=ok
// SIG undefined FUN_145a05856(void)

void FUN_145a05856(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145a0590e();
  if (*(longlong *)(param_1 + 0x78) != 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    plVar3 = *(longlong **)(param_1 + 0x80);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x80) = 0;
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
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  FUN_1415a26e8(param_1);
  return;
}



// FUNCTION 145a058bc FUN_145a058bc body=9 status=ok
// SIG undefined FUN_145a058bc(void)

void FUN_145a058bc(longlong param_1)

{
  FUN_145a058c6(param_1 + 0x10);
  return;
}



// FUNCTION 145a058c6 FUN_145a058c6 body=72 status=ok
// SIG undefined FUN_145a058c6(void)

void FUN_145a058c6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14480f766(&DAT_14cb7df68);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14480f766(&DAT_14cb89710);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 145a0590e FUN_145a0590e body=79 status=ok
// SIG undefined FUN_145a0590e(void)

void FUN_145a0590e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    plVar3 = *(longlong **)(param_1 + 0x48);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145a05952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145a0595e FUN_145a0595e body=128 status=ok
// SIG undefined FUN_145a0595e(void)

void FUN_145a0595e(longlong *param_1,char param_2)

{
  undefined1 auStack_48 [44];
  undefined8 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != '\0') {
    if (param_1[10] != 0) {
      (**(code **)(*param_1 + 0x130))(param_1);
    }
    *(int *)(param_1 + 0x1b) = (int)param_1[0x1b] + 1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  FUN_145a05808(param_1);
  local_1c = 1;
  local_14 = 0xffffffff;
  FUN_145d53d3a(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a059ec FUN_145a059ec body=148 status=ok
// SIG undefined FUN_145a059ec(void)

bool FUN_145a059ec(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
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



// FUNCTION 145a05a82 FUN_145a05a82 body=41 status=ok
// SIG undefined FUN_145a05a82(void)

void FUN_145a05a82(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    FUN_1400d6ce6();
    return;
  }
  return;
}



// FUNCTION 145a05aac FUN_145a05aac body=723 status=ok
// SIG undefined FUN_145a05aac(void)

undefined8 *
FUN_145a05aac(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  byte bVar5;
  byte bVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_1[6] == *(int *)((longlong)param_1 + 0x5c)) {
LAB_145a05ae3:
    plVar7 = (longlong *)0x0;
  }
  else {
    uVar3 = (uint)((ulonglong)param_4 >> 0x10);
    uVar9 = (uint)param_4 & 0xffff;
    plVar7 = param_1 + 0xc;
    if ((longlong *)param_1[0xd] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[0xd];
    }
    iVar10 = *(int *)((longlong)plVar7 +
                     (ulonglong)
                     ((int)param_1[0xe] - 1U &
                     (int)((ulonglong)param_4 >> 0x20) + ((uint)param_4 << 0x10 | uVar9) +
                     (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar10 == -1) goto LAB_145a05ae3;
    do {
      plVar7 = (longlong *)(param_1[5] + (longlong)iVar10 * 0x18);
      if (*plVar7 == param_4) break;
      iVar10 = (int)plVar7[2];
      plVar7 = (longlong *)0x0;
    } while (iVar10 != -1);
  }
  plVar8 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  local_70 = param_4;
  bVar5 = (**(code **)(*param_1 + 0x2a0))(param_1,param_4);
  if (plVar8 == (longlong *)0x0) {
    bVar6 = 0;
  }
  else {
    bVar6 = (**(code **)(*param_1 + 0x2a0))(param_1,*plVar8);
  }
  if ((bVar5 | bVar6) == 1) {
    local_68 = &local_70;
    if (bVar6 != 0) {
      local_68 = plVar8;
    }
    local_68 = (longlong *)*local_68;
    plVar7 = (longlong *)FUN_1401e3228();
    if (plVar7 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
      plStack_50 = (longlong *)0x0;
LAB_145a05d1a:
      plVar7 = (longlong *)0x0;
      plVar8 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar7 + 0x80))(plVar7,&local_58);
      if (local_58 == (longlong *)0x0) goto LAB_145a05d1a;
      (**(code **)(*local_58 + 0x120))(local_58,&local_68,param_3);
      plVar7 = local_60;
      plVar8 = local_68;
    }
    plVar11 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_50 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    plVar11 = plVar7;
    if (plVar8 != (longlong *)0x0) goto LAB_145a05b97;
  }
  else {
    plVar7 = (longlong *)0x0;
  }
  plVar8 = (longlong *)FUN_141400982();
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar11 = plVar7;
  }
  else {
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_58,param_3,local_70);
    plVar11 = plStack_50;
    plVar8 = local_58;
    local_58 = (longlong *)0x0;
    plVar4 = plVar7;
    if (plStack_50 != plVar7) {
      plStack_50 = (longlong *)0x0;
      if (plVar7 == (longlong *)0x0) goto LAB_145a05b97;
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plVar4 = plVar11;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    plVar11 = plVar4;
    plVar7 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_50 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
LAB_145a05b97:
  *param_2 = &PTR_FUN_14a184370;
  *(undefined1 *)(param_2 + 3) = 0;
  param_2[1] = plVar8;
  param_2[2] = plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    *(undefined1 *)(param_2 + 3) = 0;
    LOCK();
    plVar7 = plVar11 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145a05d80 FUN_145a05d80 body=131 status=ok
// SIG undefined FUN_145a05d80(void)

void FUN_145a05d80(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_1446e0b6e();
  FUN_1414466de(param_1);
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x48) + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        FUN_144757f48(plVar1,1);
        *(undefined1 *)((longlong)plVar1 + 0xf6) = 0x10;
        FUN_1400337aa(plVar1);
        if (((char)plVar1[0x1e] == '\x04') && ((*(byte *)((longlong)plVar1 + 0xfe) & 1) == 0)) {
          *(undefined1 *)(plVar1 + 0x1e) = 9;
          (**(code **)(*plVar1 + 0x318))(plVar1);
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x50));
  }
  return;
}



// FUNCTION 145a05e1a FUN_145a05e1a body=416 status=ok
// SIG undefined FUN_145a05e1a(void)

void FUN_145a05e1a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *(longlong *)(param_1 + 0x2430);
  local_50 = *(int *)(param_1 + 0x2438);
  local_48 = 0;
  if ((local_58 != *(longlong *)(param_1 + 0x23c0)) || (local_50 != *(int *)(param_1 + 0x23c8))) {
    *(longlong *)(param_1 + 0x2430) = *(longlong *)(param_1 + 0x23c0);
    *(int *)(param_1 + 0x2438) = *(int *)(param_1 + 0x23c8);
    *(undefined8 *)(param_1 + 0x2440) = 0;
  }
  uVar5 = FUN_1447210f0(param_1);
  FUN_1410d53f0(&local_40,uVar5);
  plVar6 = (longlong *)CONCAT44(uStack_34,local_38);
  if (plVar6 != (longlong *)0x0) {
    iVar4 = (int)plVar6[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_34,local_38) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_34,local_38) + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_40 != 0) {
        if ((local_58 != 0) && (local_50 - 1U < 0xfffffffe)) {
          FUN_145a05fbc(local_40,param_1,&local_58,0);
        }
        if ((*(longlong *)(param_1 + 0x23c0) != 0) && (*(int *)(param_1 + 0x23c8) - 1U < 0xfffffffe)
           ) {
          FUN_145a05fbc(local_40,param_1,(longlong *)(param_1 + 0x23c0),1);
        }
      }
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
  }
  local_40 = *(longlong *)(param_1 + 0x23c0);
  local_38 = *(undefined4 *)(param_1 + 0x23c8);
  local_30 = 0;
  FUN_145a06040(param_1 + 0x2250);
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a05fbc FUN_145a05fbc body=110 status=ok
// SIG undefined FUN_145a05fbc(void)

void FUN_145a05fbc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_3;
  local_30 = 0x6000;
  local_28 = 0;
  lVar1 = FUN_141446784();
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a06040 FUN_145a06040 body=231 status=ok
// SIG undefined FUN_145a06040(void)

void FUN_145a06040(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar7 = uVar5 * 0x10 + -8;
      uVar8 = uVar5;
      while ((*(int *)(*param_1 + lVar7) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0))) {
        local_50 = *param_2;
        local_48 = *(undefined4 *)(param_2 + 1);
        local_40 = 0;
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_50);
        if (cVar4 == '\0') break;
        lVar7 = lVar7 + -0x10;
        bVar3 = uVar8 < 2;
        uVar8 = uVar8 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (!bVar6) goto LAB_145a060df;
          goto LAB_145a0611c;
        }
      }
      uVar5 = uVar8 - 1;
      bVar6 = true;
    } while (1 < uVar8);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145a0611c:
    FUN_14474d06a(param_1,0);
  }
LAB_145a060df:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a06132 FUN_145a06132 body=59 status=ok
// SIG undefined FUN_145a06132(void)

void FUN_145a06132(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ba3bed0;
  FUN_141446eca();
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_145a0616e(param_1);
  return;
}



// FUNCTION 145a0616e FUN_145a0616e body=24 status=ok
// SIG undefined FUN_145a0616e(void)

void FUN_145a0616e(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_149f21780;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 145a06186 FUN_145a06186 body=291 status=ok
// SIG undefined FUN_145a06186(void)

void FUN_145a06186(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = param_1 + 0xb0;
  cVar1 = FUN_144729dda(lVar3);
  if (cVar1 != '\0') {
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar2 = FUN_14479d2ce(lVar3);
      local_48 = FUN_141252210;
      local_40 = 0;
      FUN_145a062aa(lVar2 + 0xb80,&local_38,param_1,&local_48);
      *(undefined8 *)(param_1 + 0x88) = local_38;
      lVar2 = FUN_14479d2ce(lVar3);
      local_48 = FUN_1412526d2;
      local_40 = 0;
      FUN_145a062aa(lVar2 + 0xb98,&local_38,param_1,&local_48);
      *(undefined8 *)(param_1 + 0x90) = local_38;
    }
    if (*(longlong *)(param_1 + 0x98) == 0) {
      lVar3 = FUN_14479d2ce(lVar3);
      local_48 = FUN_14125241e;
      local_40 = 0;
      FUN_145a062aa(lVar3 + 0xbb0,&local_38,param_1);
      *(undefined8 *)(param_1 + 0x98) = local_38;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a062aa FUN_145a062aa body=254 status=ok
// SIG undefined FUN_145a062aa(void)

undefined8
FUN_145a062aa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b9adea0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a063aa FUN_145a063aa body=142 status=ok
// SIG undefined FUN_145a063aa(void)

void FUN_145a063aa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c8307c();
  if (param_2 != 0) {
    lVar1 = FUN_140fb6d42();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_20 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      FUN_141446f44(param_1 + 0x3c8,&local_20);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a06442 FUN_145a06442 body=216 status=ok
// SIG undefined FUN_145a06442(void)

undefined8 * FUN_145a06442(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_141103bac();
  *param_1 = &PTR_FUN_14b92db10;
  param_1[5] = &PTR_FUN_14b92ddc0;
  param_1[10] = &PTR_FUN_14b92ddf0;
  param_1[0xb] = &PTR_FUN_14b92de20;
  FUN_145a0651a(param_1 + 0xd);
  puVar1 = (undefined8 *)param_1[0xd];
  *puVar1 = 0x4062c00000000000;
  puVar1[1] = 0x4069000000000000;
  puVar1[2] = 0x4059000000000000;
  lVar2 = param_1[0xd];
  *(undefined8 *)(lVar2 + 0x30) = 0x406f400000000000;
  *(undefined8 *)(lVar2 + 0x38) = 0x4052c00000000000;
  *(undefined8 *)(lVar2 + 0x40) = 0x4059000000000000;
  lVar2 = param_1[0xd];
  *(undefined8 *)(lVar2 + 0x60) = 0x406f400000000000;
  *(undefined8 *)(lVar2 + 0x68) = 0xc052c00000000000;
  *(undefined8 *)(lVar2 + 0x70) = 0x4059000000000000;
  lVar2 = param_1[0xd];
  *(undefined8 *)(lVar2 + 0x90) = 0x4062c00000000000;
  *(undefined8 *)(lVar2 + 0x98) = 0xc069000000000000;
  *(undefined8 *)(lVar2 + 0xa0) = 0x4059000000000000;
  return param_1;
}



// FUNCTION 145a0651a FUN_145a0651a body=109 status=ok
// SIG undefined FUN_145a0651a(void)

void FUN_145a0651a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 4) {
    *(undefined4 *)(param_1 + 1) = 4;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 4U - iVar1) {
      FUN_141103cdc(param_1,iVar1);
    }
    FUN_141103ca7((longlong)iVar1 * 0x30 + *param_1,4U - iVar1);
    return;
  }
  if (iVar1 == 4) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 4;
  FUN_148e200ee(param_1);
  return;
}



// FUNCTION 145a06588 FUN_145a06588 body=40 status=ok
// SIG undefined FUN_145a06588(void)

undefined8 FUN_145a06588(undefined8 param_1,int param_2)

{
  FUN_145a065b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a065b0 FUN_145a065b0 body=91 status=ok
// SIG undefined FUN_145a065b0(void)

void FUN_145a065b0(undefined8 *param_1)

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
  
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xc6) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xc4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xc2) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc2) = 0;
  }
  if (*(char *)(param_1 + 0x16) == '\x01') {
    *(undefined1 *)(param_1 + 0x16) = 0;
    FUN_144760e82();
    return;
  }
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



// FUNCTION 145a0660c FUN_145a0660c body=40 status=ok
// SIG undefined FUN_145a0660c(void)

undefined8 FUN_145a0660c(undefined8 param_1,int param_2)

{
  FUN_145a06634();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a06634 FUN_145a06634 body=568 status=ok
// SIG undefined FUN_145a06634(void)

void FUN_145a06634(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3229d0;
  param_1[5] = &PTR_FUN_14b322df0;
  FUN_1403e0ff1(param_1[299],*(undefined4 *)(param_1 + 300));
  if (param_1[299] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x129] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x107] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xdf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xdd] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xdc];
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
  if (param_1[0xd9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  param_1[0x59] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (*(int *)((longlong)param_1 + 0x2e4) != 0) {
    FUN_140115c12(param_1 + 0x5b,0);
  }
  param_1[0x5a] = 0;
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a06874 FUN_145a06874 body=40 status=ok
// SIG undefined FUN_145a06874(void)

undefined8 FUN_145a06874(undefined8 param_1,int param_2)

{
  FUN_145a0689c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a0689c FUN_145a0689c body=59 status=ok
// SIG undefined FUN_145a0689c(void)

void FUN_145a0689c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b239700;
  FUN_145a068d7(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a068d7 FUN_145a068d7 body=75 status=ok
// SIG undefined FUN_145a068d7(void)

void FUN_145a068d7(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145a0692c FUN_145a0692c body=170 status=ok
// SIG undefined FUN_145a0692c(void)

void FUN_145a0692c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b426e50;
  param_1[4] = &PTR_FUN_14b426e68;
  plVar3 = (longlong *)param_1[0xb];
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
  FUN_140d2f728(param_1 + 4);
  *param_1 = &PTR_LAB_14b242fd0;
  plVar3 = (longlong *)param_1[2];
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
  plVar3 = (longlong *)param_1[9];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145a069d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145a069d6 FUN_145a069d6 body=167 status=ok
// SIG undefined FUN_145a069d6(void)

void FUN_145a069d6(int param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14118da1c();
  cVar2 = FUN_14054d46e(uVar3,L"cookcommandlet");
  if (cVar2 == '\0') {
    uVar3 = FUN_14118da1c();
    cVar2 = FUN_14054d46e(uVar3,L"run=cook");
    if (cVar2 == '\0') {
      iVar1 = (param_1 + 0x14) / 0x15;
      DAT_14c7585a8 = 2;
      if (2 < iVar1) {
        DAT_14c7585a8 = iVar1;
      }
    }
  }
  uVar3 = FUN_14118da1c();
  FUN_141369f9a(uVar3,L"-foregroundworkers=",&DAT_14c7585a8);
  uVar3 = FUN_14001cc68(0x48,0x80);
  FUN_145a06a7e(uVar3,param_1);
  DAT_14c82b500 = uVar3;
  return;
}



// FUNCTION 145a06a7e FUN_145a06a7e body=350 status=ok
// SIG undefined FUN_145a06a7e(void)

undefined8 * FUN_145a06a7e(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  DWORD DVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  
  *param_1 = &PTR_FUN_149dffa40;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  cVar6 = FUN_144a53f06();
  if (cVar6 == '\0') {
    FUN_140f14872(&DAT_14c82ba00,1);
    uVar10 = 0;
    uVar9 = 2;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 < 4) {
      DAT_14c7585a8 = 1;
    }
    iVar4 = DAT_14c7585a8;
    if (iVar1 <= DAT_14c7585a8) {
      iVar4 = iVar1;
    }
    uVar10 = 1;
    iVar5 = iVar1 - iVar4;
    if (iVar1 - iVar4 < 2) {
      iVar5 = 1;
    }
    *(int *)((longlong)param_1 + 0x24) = iVar5;
    iVar4 = iVar1 - iVar5;
    if (iVar1 - iVar5 < 2) {
      iVar4 = 1;
    }
    *(int *)(param_1 + 5) = iVar4;
    FUN_145a06e4a(&DAT_14c82ba00,iVar4,iVar5,1,5,2,0,0);
    uVar9 = 3;
  }
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar9;
  DAT_14c7585d8 = uVar10;
  DAT_14c7585dc = uVar10;
  FUN_145a06d60(param_1 + 6);
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  DVar7 = TlsAlloc();
  *(DWORD *)(param_1 + 3) = DVar7;
  if (0 < *(int *)((longlong)param_1 + 0x1c)) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      uVar8 = FUN_141447c1b(0x340,0x40);
      FUN_145a06bdc(uVar8);
      *(undefined8 *)(param_1[6] + lVar11) = uVar8;
      lVar2 = param_1[6];
      lVar3 = *(longlong *)(lVar2 + lVar11);
      uVar9 = *(undefined4 *)(param_1 + 3);
      *(int *)(lVar3 + 0x10) = (int)lVar12;
      *(undefined4 *)(lVar3 + 0x14) = uVar9;
      *(longlong *)(lVar3 + 0x30) = lVar2 + lVar11;
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x18;
    } while (lVar12 < *(int *)((longlong)param_1 + 0x1c));
  }
  return param_1;
}



// FUNCTION 145a06bdc FUN_145a06bdc body=181 status=ok
// SIG undefined FUN_145a06bdc(void)

undefined8 * FUN_145a06bdc(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_149dffb50;
  param_1[1] = &PTR_LAB_149dffbb8;
  param_1[2] = 0xffffffff000000ff;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_145a06d00(param_1 + 4,0x80);
  *param_1 = &PTR_FUN_149dffad0;
  param_1[1] = &PTR_FUN_149dffb38;
  lVar2 = -0x300;
  do {
    FUN_145a06c92((longlong)param_1 + lVar2 + 0x340);
    *(undefined4 *)((longlong)param_1 + lVar2 + 0x480) = 0;
    *(undefined2 *)((longlong)param_1 + lVar2 + 0x484) = 0;
    uVar1 = FUN_1405d8a54(0);
    *(undefined8 *)((longlong)param_1 + lVar2 + 0x488) = uVar1;
    lVar2 = lVar2 + 0x180;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 145a06c92 FUN_145a06c92 body=109 status=ok
// SIG undefined FUN_145a06c92(void)

longlong FUN_145a06c92(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = 0x40;
  do {
    *(undefined8 *)(param_1 + -0x40 + lVar2) = 0;
    *(undefined8 *)(param_1 + lVar2) = 0;
    uVar1 = FUN_14493c560();
    *(ulonglong *)(param_1 + -0x40 + lVar2) =
         *(ulonglong *)(param_1 + -0x40 + lVar2) & 0xfffffffffc000000 | (ulonglong)uVar1;
    *(ulonglong *)(param_1 + lVar2) =
         *(ulonglong *)(param_1 + lVar2) & 0xfffffffffc000000 | (ulonglong)uVar1;
    lVar2 = lVar2 + 0x80;
  } while (lVar2 != 0x140);
  *(undefined8 *)(param_1 + 0x100) = 0;
  return param_1;
}



// FUNCTION 145a06d00 FUN_145a06d00 body=96 status=ok
// SIG undefined FUN_145a06d00(void)

void FUN_145a06d00(longlong param_1,int param_2)

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



// FUNCTION 145a06d60 FUN_145a06d60 body=85 status=ok
// SIG undefined FUN_145a06d60(void)

void FUN_145a06d60(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_145a06db6(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x18 + *param_1);
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    puVar2 = puVar2 + 3;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 145a06db6 FUN_145a06db6 body=147 status=ok
// SIG undefined FUN_145a06db6(void)

void FUN_145a06db6(longlong param_1,int param_2)

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



// FUNCTION 145a06e4a FUN_145a06e4a body=1378 status=ok
// SIG undefined FUN_145a06e4a(void)

ulonglong FUN_145a06e4a(longlong param_1,uint param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,longlong param_7,longlong param_8)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong extraout_RAX;
  longlong *plVar7;
  code *pcVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_1b8 [32];
  int local_198;
  int local_18c;
  code *local_188;
  ulonglong local_180;
  ulonglong local_178;
  undefined4 local_16c;
  LPCRITICAL_SECTION local_168;
  ulonglong local_160;
  ulonglong local_158;
  int local_14c;
  code *local_148 [2];
  undefined8 local_138 [6];
  code *local_108 [2];
  undefined8 local_f8 [6];
  code *local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  code *local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_188 = (code *)CONCAT44(local_188._4_4_,param_4);
  uVar14 = (ulonglong)param_3;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_14c = 0;
  uVar3 = FUN_14118da1c();
  cVar2 = FUN_141369f9a(uVar3,L"TaskGraphUseDynamicPrioritization=",&local_14c);
  if (cVar2 != '\0') {
    DAT_14c758590 = local_14c != 0;
  }
  uVar3 = FUN_14118da1c();
  cVar2 = FUN_141369f9a(uVar3,L"TaskGraphUseDynamicThreadCreation=",&local_14c);
  if (cVar2 != '\0') {
    DAT_14c758591 = local_14c != 0;
  }
  if (param_3 == 0 && param_2 == 0) {
    iVar11 = FUN_145afebe4();
    param_2 = (2 < iVar11) + 1;
    iVar11 = FUN_145afebe4();
    uVar14 = 1;
    if (1 < (int)(iVar11 - param_2)) {
      uVar14 = (ulonglong)(iVar11 - param_2);
    }
  }
  *(undefined4 *)(param_1 + 0x7bf8) = param_5;
  *(undefined4 *)(param_1 + 0x7bfc) = param_6;
  if (param_7 != 0) {
    *(longlong *)(param_1 + 0x7be8) = param_7;
  }
  if (param_8 != 0) {
    *(longlong *)(param_1 + 0x7bf0) = param_8;
  }
  uVar4 = FUN_144a53f06();
  if (((char)uVar4 != '\0') && (*(int *)(param_1 + 0x7bd8) == 0)) {
    uVar4 = 0;
    LOCK();
    uVar9 = *(uint *)(param_1 + 0x7bd8);
    if (uVar9 == 0) {
      *(uint *)(param_1 + 0x7bd8) = (int)uVar14 + param_2;
    }
    else {
      uVar4 = (ulonglong)uVar9;
    }
    UNLOCK();
    if (uVar9 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7b80));
      LOCK();
      *(undefined4 *)(param_1 + 0x7be0) = 0;
      UNLOCK();
      LOCK();
      *(undefined4 *)(param_1 + 0x7be4) = 0;
      UNLOCK();
      fVar15 = 1.0;
      if (1.0 <= DAT_14c758594) {
        fVar15 = DAT_14c758594;
      }
      fVar16 = (float)param_2 * fVar15;
      uVar13 = (int)ROUND(-0.5 - (fVar16 + fVar16)) >> 1;
      uVar9 = (int)ROUND(-0.5 - ((float)uVar14 * fVar15 + (float)uVar14 * fVar15)) >> 1;
      uVar1 = *(undefined4 *)(param_1 + 0x7bf8 + (ulonglong)(DAT_14c758590 ^ 1) * 4);
      FUN_145a07534(param_1 + 0x7bc8,-(uVar13 + uVar9));
      iVar11 = -(uVar13 + uVar9);
      if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar11);
      }
      local_16c = uVar1;
      if (*(int *)(param_1 + 0x7bc4) < iVar11) {
        FUN_145a07486(param_1 + 0x7bb8,iVar11);
      }
      iVar12 = -uVar13;
      local_180 = (ulonglong)uVar13;
      if (*(int *)(param_1 + 0x7bb4) < iVar11) {
        FUN_145a07426(param_1 + 0x7ba8,iVar11);
      }
      local_18c = -uVar9;
      local_88 = (code *)0x0;
      plVar5 = (longlong *)FUN_14001cc68(0x28,8);
      *plVar5 = (longlong)&PTR_FUN_149dfff30;
      plVar7 = plVar5 + 1;
      *plVar7 = param_1;
      plVar5[2] = param_1;
      *(undefined4 *)(plVar5 + 3) = local_188._0_4_;
      *(uint *)(plVar5 + 4) = param_2;
      *(int *)((longlong)plVar5 + 0x24) = iVar12;
      if (plVar7 == (longlong *)0x0) {
        pcVar8 = (code *)0x0;
      }
      else {
        pcVar8 = FUN_142743074;
        local_88 = FUN_142743074;
      }
      local_c8 = (code *)0x0;
      local_178 = (ulonglong)uVar9;
      local_168 = (LPCRITICAL_SECTION)(param_1 + 0x7b80);
      local_160 = uVar14;
      local_158 = (ulonglong)param_2;
      local_78 = plVar5;
      plVar6 = (longlong *)FUN_14001cc68(0x30,8);
      *plVar6 = (longlong)&PTR_FUN_149e00080;
      plVar10 = plVar6 + 1;
      *plVar10 = param_1;
      plVar6[2] = param_1;
      *(undefined4 *)(plVar6 + 3) = local_188._0_4_;
      *(int *)(plVar6 + 4) = (int)local_160;
      *(int *)((longlong)plVar6 + 0x24) = local_18c;
      *(undefined4 *)(plVar6 + 5) = local_16c;
      if (plVar10 == (longlong *)0x0) {
        local_188 = (code *)0x0;
      }
      else {
        local_188 = FUN_1427436b8;
        local_c8 = FUN_1427436b8;
      }
      iVar11 = 0;
      if (DAT_14c758591 == '\0') {
        iVar11 = iVar12;
      }
      local_f8[0] = 0;
      local_108[0] = pcVar8;
      local_b8 = plVar6;
      if (plVar7 != (longlong *)0x0) {
        plVar7 = local_68;
        if (plVar5 != (longlong *)0x0) {
          plVar7 = plVar5;
        }
        (**(code **)*plVar7)(plVar7,local_f8);
      }
      local_198 = iVar11;
      FUN_145a073ae(param_1,local_158,iVar12,local_108);
      iVar11 = 0;
      if (DAT_14c758591 == '\0') {
        iVar11 = local_18c;
      }
      local_148[0] = local_188;
      local_138[0] = 0;
      if (plVar10 != (longlong *)0x0) {
        plVar5 = local_a8;
        if (plVar6 != (longlong *)0x0) {
          plVar5 = plVar6;
        }
        (**(code **)*plVar5)(plVar5,local_138);
      }
      local_198 = iVar11;
      FUN_145a073ae(param_1 + 0x80,local_160,local_18c,local_148);
      lpCriticalSection = local_168;
      if (DAT_14c758591 == '\0') {
        if ((int)local_180 < 0) {
          do {
            pcVar8 = local_88;
            plVar5 = local_78;
            if (local_78 == (longlong *)0x0) {
              plVar5 = local_68;
            }
            uVar3 = (**(code **)(*plVar5 + 8))();
            (*pcVar8)(uVar3);
            uVar9 = (int)local_180 + 1;
            local_180 = (ulonglong)uVar9;
          } while (uVar9 != 0);
          local_180 = 0;
        }
        lpCriticalSection = local_168;
        if ((int)local_178 < 0) {
          do {
            pcVar8 = local_c8;
            plVar5 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar5 = local_a8;
            }
            uVar3 = (**(code **)(*plVar5 + 8))();
            (*pcVar8)(uVar3);
            uVar9 = (int)local_178 + 1;
            local_178 = (ulonglong)uVar9;
          } while (uVar9 != 0);
          local_178 = 0;
        }
      }
      else if ((*(byte *)(param_1 + 0x7c00) & 1) != 0) {
        FUN_140031ea8(param_1,1);
        FUN_140031ea8(param_1 + 0x80,1);
      }
      if (local_c8 != (code *)0x0) {
        plVar5 = local_b8;
        if (local_b8 == (longlong *)0x0) {
          plVar5 = local_a8;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if (local_88 != (code *)0x0) {
        plVar5 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar5 = local_68;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      LeaveCriticalSection(lpCriticalSection);
      uVar4 = extraout_RAX;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 145a073ae FUN_145a073ae body=119 status=ok
// SIG undefined FUN_145a073ae(void)

void FUN_145a073ae(undefined4 *param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
                  uint param_5)

{
  longlong *plVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_140759336(param_1 + 4,param_4);
  LOCK();
  param_1[0x14] = 0;
  UNLOCK();
  LOCK();
  *(undefined1 *)(param_1 + 0x1c) = 0;
  UNLOCK();
  LOCK();
  *(undefined8 *)(param_1 + 0x16) = 0x3fff;
  UNLOCK();
  LOCK();
  *(ulonglong *)(param_1 + 0x18) = (ulonglong)((param_5 & 0x3fff) << 0xe) | 0x3fff;
  UNLOCK();
  if (*param_4 != 0) {
    plVar1 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_4[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000145a07419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 145a07426 FUN_145a07426 body=95 status=ok
// SIG undefined FUN_145a07426(void)

void FUN_145a07426(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 145a07486 FUN_145a07486 body=97 status=ok
// SIG undefined FUN_145a07486(void)

void FUN_145a07486(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0xa0580,0x80);
    iVar1 = (int)(uVar2 / 0xa0580);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (iVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar3;
    FUN_145a074e8(param_1);
    return;
  }
  return;
}



// FUNCTION 145a074e8 FUN_145a074e8 body=75 status=ok
// SIG undefined FUN_145a074e8(void)

void FUN_145a074e8(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  if (param_2 != 0 || *param_1 != 0) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1467ac60e(param_2,0xa0580);
    }
    lVar1 = FUN_14001fdce(*param_1,(ulonglong)param_2 * 0xa0580,0x80);
    *param_1 = lVar1;
  }
  return;
}



// FUNCTION 145a07534 FUN_145a07534 body=121 status=ok
// SIG undefined FUN_145a07534(void)

void FUN_145a07534(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145a075ae(param_1,iVar1);
    }
    FUN_141447c28((longlong)iVar1 * 0x40 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1467ab2fc(param_1,param_2,iVar1 - param_2);
    FUN_1467ab356(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145a075ae FUN_145a075ae body=107 status=ok
// SIG undefined FUN_145a075ae(void)

void FUN_145a075ae(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar5 = (longlong)(int)uVar2;
    }
    else {
      lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar5 << 6,0x40);
    iVar3 = (int)(uVar4 >> 6);
    iVar6 = 0x7fffffff;
    if ((int)uVar1 <= iVar3) {
      iVar6 = iVar3;
    }
    *(int *)(param_1 + 0xc) = iVar6;
    FUN_145a0761a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145a0761a FUN_145a0761a body=72 status=ok
// SIG undefined FUN_145a0761a(void)

void FUN_145a0761a(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  if (param_2 != 0 || *param_1 != 0) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1467ac60e(param_2,0x40);
    }
    lVar1 = FUN_14001fdce(*param_1,(ulonglong)param_2 << 6,0x40);
    *param_1 = lVar1;
  }
  return;
}



// FUNCTION 145a0766e FUN_145a0766e body=228 status=ok
// SIG undefined FUN_145a0766e(void)

undefined8 * FUN_145a0766e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b79f420;
  param_1[5] = &PTR_FUN_14b79f6c0;
  FUN_1412df474(param_1 + 6);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  FUN_14485c47a(param_1 + 0x28,0);
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  return param_1;
}



// FUNCTION 145a07752 FUN_145a07752 body=250 status=ok
// SIG undefined FUN_145a07752(void)

undefined1 *
FUN_145a07752(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_145a0784c(param_4);
  if (lVar2 == 0) {
    lVar2 = FUN_140cd1640(param_4);
    if (lVar2 == 0) {
      lVar2 = FUN_1405b9d5a(param_4);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x398) != 0)) {
        lVar3 = FUN_140082f10();
        lVar2 = *(longlong *)(lVar2 + 0x398);
        goto LAB_145a0779d;
      }
    }
    else if (*(longlong *)(lVar2 + 0x3b0) != 0) {
      lVar3 = FUN_140082f10();
      lVar2 = *(longlong *)(lVar2 + 0x3b0);
LAB_145a0779d:
      if ((((lVar2 != 0) && (lVar3 != 0)) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
         ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)))) goto LAB_145a077d0;
    }
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  }
  else {
LAB_145a077d0:
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined1 **)(param_2 + 0x38) = &DAT_100000001;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    FUN_1456bb102(param_2,lVar2);
  }
  return param_2;
}



// FUNCTION 145a0784c FUN_145a0784c body=61 status=ok
// SIG undefined FUN_145a0784c(void)

longlong FUN_145a0784c(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_140082f10();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 145a0788a FUN_145a0788a body=38 status=ok
// SIG undefined FUN_145a0788a(void)

undefined8 FUN_145a0788a(undefined8 param_1,int param_2)

{
  FUN_141447c74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a078b0 FUN_145a078b0 body=53 status=ok
// SIG undefined FUN_145a078b0(void)

void FUN_145a078b0(longlong *param_1)

{
  FUN_145a078e6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a078e6 FUN_145a078e6 body=88 status=ok
// SIG undefined FUN_145a078e6(void)

void FUN_145a078e6(longlong param_1)

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



// FUNCTION 145a0793e FUN_145a0793e body=53 status=ok
// SIG undefined FUN_145a0793e(void)

void FUN_145a0793e(longlong *param_1)

{
  FUN_145a07974();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a07974 FUN_145a07974 body=88 status=ok
// SIG undefined FUN_145a07974(void)

void FUN_145a07974(longlong param_1)

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



// FUNCTION 145a079cc FUN_145a079cc body=53 status=ok
// SIG undefined FUN_145a079cc(void)

void FUN_145a079cc(longlong *param_1)

{
  FUN_145a07a02();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a07a02 FUN_145a07a02 body=88 status=ok
// SIG undefined FUN_145a07a02(void)

void FUN_145a07a02(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
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



// FUNCTION 145a07a5a FUN_145a07a5a body=53 status=ok
// SIG undefined FUN_145a07a5a(void)

void FUN_145a07a5a(longlong *param_1)

{
  FUN_145a07cac();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a07a90 FUN_145a07a90 body=53 status=ok
// SIG undefined FUN_145a07a90(void)

void FUN_145a07a90(longlong *param_1)

{
  FUN_145a07e1e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a07ac6 FUN_145a07ac6 body=63 status=ok
// SIG undefined FUN_145a07ac6(void)

void FUN_145a07ac6(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145a07a02(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_141448a96(param_1);
    return;
  }
  FUN_147444014(param_1);
  FUN_145a07a02(param_1);
  return;
}



// FUNCTION 145a07b06 FUN_145a07b06 body=63 status=ok
// SIG undefined FUN_145a07b06(void)

void FUN_145a07b06(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145a07974(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140e7f20a(param_1);
    return;
  }
  FUN_14744415c(param_1);
  FUN_145a07974(param_1);
  return;
}



// FUNCTION 145a07b46 FUN_145a07b46 body=63 status=ok
// SIG undefined FUN_145a07b46(void)

void FUN_145a07b46(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145a078e6(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_141448852(param_1);
    return;
  }
  FUN_1474442a0(param_1);
  FUN_145a078e6(param_1);
  return;
}



// FUNCTION 145a07b86 FUN_145a07b86 body=94 status=ok
// SIG undefined FUN_145a07b86(void)

void FUN_145a07b86(longlong param_1)

{
  longlong lVar1;
  
  FUN_145a081f4();
  if ((longlong)DAT_14ca9f2c8 != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(DAT_14ca9f2c0 + 8 + lVar1) != 0) && (*(longlong *)(DAT_14ca9f2c0 + lVar1) != 0))
      {
        FUN_147444934(param_1,*(undefined2 *)(param_1 + 0x14));
        break;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)DAT_14ca9f2c8 * 0x10 != lVar1);
  }
  *(undefined1 *)(param_1 + 0xf9) = 0;
  FUN_1414485fe();
  return;
}



// FUNCTION 145a07be4 FUN_145a07be4 body=198 status=ok
// SIG undefined FUN_145a07be4(void)

void FUN_145a07be4(void)

{
  char cVar1;
  longlong lVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14ca9f278 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14ca9f278 + 0x148);
    EnterCriticalSection(lpCriticalSection);
    cVar1 = FUN_1403963d0();
    if (cVar1 != '\0') {
      FUN_1432371a4(1);
    }
    cVar1 = FUN_140396325();
    if (cVar1 != '\0') {
      FUN_1432371a4(0);
    }
    lVar2 = FUN_14144846e();
    if (lVar2 != 0) {
      FUN_145a07b86(lVar2);
      local_18 = &DAT_14ca9f280;
      FUN_140c8411c(DAT_14ca9f278 + 0x120);
      FUN_147443e68(DAT_14ca9f278 + 0xd0);
    }
    FUN_1414485fe();
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a07cac FUN_145a07cac body=306 status=ok
// SIG undefined FUN_145a07cac(void)

void FUN_145a07cac(longlong *param_1)

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
      FUN_145a07de0((longlong)iStack_4c * 0x20 + *local_68);
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



// FUNCTION 145a07de0 FUN_145a07de0 body=61 status=ok
// SIG undefined FUN_145a07de0(void)

void FUN_145a07de0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_145c86ae6(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145a07e1e FUN_145a07e1e body=378 status=ok
// SIG undefined FUN_145a07e1e(void)

void FUN_145a07e1e(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x70;
      *(undefined4 *)(lVar2 + 0x60 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x58 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_147442c62(lVar2 + lVar3 + 0x18);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140875b54(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a07f9a FUN_145a07f9a body=488 status=ok
// SIG undefined FUN_145a07f9a(void)

void FUN_145a07f9a(undefined4 *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)(int)param_1[4] != 0) {
    lVar7 = *(longlong *)(param_1 + 2);
    lVar9 = (longlong)(int)param_1[4] * 0x208 + lVar7;
    do {
      lVar1 = *(longlong *)(lVar7 + 0x1f8);
      if (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x98) != 0) {
          uVar8 = 0;
          do {
            local_48 = 0;
            puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x90) + (longlong)(int)uVar8 * 0x40);
            pcVar2 = (code *)*puVar4;
            plVar6 = (longlong *)puVar4[2];
            if ((longlong *)puVar4[2] == (longlong *)0x0) {
              plVar6 = puVar4 + 4;
            }
            uVar5 = (**(code **)(*plVar6 + 8))();
            (*pcVar2)(uVar5,&local_48);
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(lVar1 + 0x98));
        }
        FUN_1407e8aa4(lVar7);
        lVar1 = *(longlong *)(lVar7 + 0x1f8);
        if (lVar1 != 0) {
          FUN_1404d52d8(lVar1);
          FUN_1400020a8(lVar1);
        }
        *(undefined8 *)(lVar7 + 0x1f8) = 0;
      }
      lVar7 = lVar7 + 0x208;
    } while (lVar7 != lVar9);
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    FUN_147442e42(param_1 + 2);
  }
  plVar6 = (longlong *)(param_1 + 8);
  plVar10 = *(longlong **)(param_1 + 8);
  if (plVar10 != (longlong *)0x0) {
    do {
      lVar7 = *plVar10;
      plVar3 = *(longlong **)(lVar7 + 0x30);
      if ((plVar3 != (longlong *)0x0) && (*(char *)((longlong)plVar3 + 0x51) == '\0')) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
      if (lVar7 != 0) {
        FUN_1404d5224(lVar7);
        FUN_1400020a8(lVar7);
      }
      plVar10 = (longlong *)plVar10[1];
    } while (plVar10 != (longlong *)0x0);
    lVar7 = *plVar6;
    while (lVar7 != 0) {
      lVar7 = *(longlong *)(lVar7 + 8);
      FUN_1400020a8();
      *plVar6 = lVar7;
    }
  }
  *plVar6 = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  (**(code **)(*(longlong *)(param_1 + 6) + 8))(param_1 + 6,0);
  LOCK();
  *param_1 = 0;
  lVar7 = DAT_14ca9f270;
  UNLOCK();
  DAT_14ca9f270 = 0;
  if (lVar7 != 0) {
    FUN_145a08184(lVar7);
    FUN_1400020a8(lVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a08184 FUN_145a08184 body=112 status=ok
// SIG undefined FUN_145a08184(void)

void FUN_145a08184(longlong param_1)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = &PTR_FUN_14a399cd0;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_14a399cd0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    do {
      lVar2 = *(longlong *)(lVar2 + 8);
      FUN_1400020a8();
      *(longlong *)(param_1 + 0x20) = lVar2;
    } while (lVar2 != 0);
    ppuVar1 = *(undefined ***)(param_1 + 0x18);
  }
  *(longlong *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  (*(code *)ppuVar1[1])((undefined8 *)(param_1 + 0x18),0);
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a081f4 FUN_145a081f4 body=568 status=ok
// SIG undefined FUN_145a081f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145a081f4(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  
  FUN_1415146de(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_147443fe4(param_1 + 0x38);
  }
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x60);
  if (DAT_14ca9f270 == (int *)0x0) {
    DAT_14ca9f270 = (int *)FUN_14001cc68(0x38,0x10);
    DAT_14ca9f270[4] = 0;
    DAT_14ca9f270[5] = 0;
    DAT_14ca9f270[6] = 0;
    DAT_14ca9f270[7] = 0;
    DAT_14ca9f270[0] = 0;
    DAT_14ca9f270[1] = 0;
    DAT_14ca9f270[2] = 0;
    DAT_14ca9f270[3] = 0;
    DAT_14ca9f270[8] = 0;
    DAT_14ca9f270[9] = 0;
    DAT_14ca9f270[10] = 0;
    DAT_14ca9f270[0xb] = 0;
    DAT_14ca9f270[0xc] = 0;
    DAT_14ca9f270[0xd] = 0;
    *(undefined ***)(DAT_14ca9f270 + 6) = &PTR_FUN_14a399cd0;
    DAT_14ca9f270[0xc] = 0;
  }
  piVar7 = DAT_14ca9f270;
  LOCK();
  *DAT_14ca9f270 = *DAT_14ca9f270 + iVar2;
  UNLOCK();
  FUN_145a0842c(piVar7 + 2,param_1 + 0x18);
  if (DAT_14ca9f270 == (int *)0x0) {
    DAT_14ca9f270 = (int *)FUN_14001cc68(0x38,0x10);
    DAT_14ca9f270[4] = 0;
    DAT_14ca9f270[5] = 0;
    DAT_14ca9f270[6] = 0;
    DAT_14ca9f270[7] = 0;
    DAT_14ca9f270[0] = 0;
    DAT_14ca9f270[1] = 0;
    DAT_14ca9f270[2] = 0;
    DAT_14ca9f270[3] = 0;
    DAT_14ca9f270[8] = 0;
    DAT_14ca9f270[9] = 0;
    DAT_14ca9f270[10] = 0;
    DAT_14ca9f270[0xb] = 0;
    DAT_14ca9f270[0xc] = 0;
    DAT_14ca9f270[0xd] = 0;
    *(undefined ***)(DAT_14ca9f270 + 6) = &PTR_FUN_14a399cd0;
    DAT_14ca9f270[0xc] = 0;
  }
  piVar7 = DAT_14ca9f270;
  plVar1 = (longlong *)(param_1 + 0x48);
  LOCK();
  *DAT_14ca9f270 = *DAT_14ca9f270 + *(int *)(param_1 + 0x30);
  UNLOCK();
  FUN_145a0842c(piVar7 + 2,param_1 + 0x28);
  if (DAT_14ca9f270 == (int *)0x0) {
    DAT_14ca9f270 = (int *)FUN_14001cc68(0x38,0x10);
    DAT_14ca9f270[4] = 0;
    DAT_14ca9f270[5] = 0;
    DAT_14ca9f270[6] = 0;
    DAT_14ca9f270[7] = 0;
    DAT_14ca9f270[0] = 0;
    DAT_14ca9f270[1] = 0;
    DAT_14ca9f270[2] = 0;
    DAT_14ca9f270[3] = 0;
    DAT_14ca9f270[8] = 0;
    DAT_14ca9f270[9] = 0;
    DAT_14ca9f270[10] = 0;
    DAT_14ca9f270[0xb] = 0;
    DAT_14ca9f270[0xc] = 0;
    DAT_14ca9f270[0xd] = 0;
    *(undefined ***)(DAT_14ca9f270 + 6) = &PTR_FUN_14a399cd0;
    DAT_14ca9f270[0xc] = 0;
  }
  FUN_145a08498(DAT_14ca9f270,plVar1);
  LOCK();
  DAT_14ca9f248 = DAT_14ca9f248 - ((longlong)iVar3 + (longlong)iVar2 + (longlong)iVar4);
  UNLOCK();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_147442e42(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_147442e42(param_1 + 0x28);
  }
  lVar5 = *(longlong *)(param_1 + 0x50);
  while (lVar5 != 0) {
    lVar5 = *(longlong *)(lVar5 + 8);
    FUN_1400020a8();
    *(longlong *)(param_1 + 0x50) = lVar5;
  }
  *(longlong *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  (**(code **)(*plVar1 + 8))(plVar1,0);
  uVar6 = DAT_14ca9f258;
  LOCK();
  DAT_14ca9f250 = 0;
  UNLOCK();
  _DAT_14ca9f240 = 0;
  LOCK();
  DAT_14ca9f258 = 0;
  UNLOCK();
  LOCK();
  DAT_14ca9f260 = 0;
  UNLOCK();
  return uVar6;
}



// FUNCTION 145a0842c FUN_145a0842c body=107 status=ok
// SIG undefined FUN_145a0842c(void)

void FUN_145a0842c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_141790e16(param_1,iVar2);
    }
    memmove((void *)((longlong)iVar2 * 0x208 + *param_1),(void *)*param_2,
            (longlong)(int)uVar1 * 0x208);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 145a08498 FUN_145a08498 body=148 status=ok
// SIG undefined FUN_145a08498(void)

void FUN_145a08498(int *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    do {
      local_38 = *plVar2;
      plVar1 = *(longlong **)(local_38 + 0x30);
      if (*(char *)((longlong)plVar1 + 0x53) == '\0') {
        *(undefined1 *)((longlong)plVar1 + 0x53) = 1;
        *(undefined1 *)(plVar1 + 10) = 1;
        if (*(char *)((longlong)plVar1 + 0x51) == '\0') {
          (**(code **)(*plVar1 + 0x18))();
        }
      }
      FUN_140282036(param_1 + 6,&local_38);
      LOCK();
      *param_1 = *param_1 + 1;
      UNLOCK();
      plVar2 = (longlong *)plVar2[1];
    } while (plVar2 != (longlong *)0x0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a0852e FUN_145a0852e body=40 status=ok
// SIG undefined FUN_145a0852e(void)

undefined8 FUN_145a0852e(undefined8 param_1,int param_2)

{
  FUN_145a08556();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a08556 FUN_145a08556 body=105 status=ok
// SIG undefined FUN_145a08556(void)

void FUN_145a08556(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a81bae0;
  FUN_1447a1747(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145a085c0(param_1);
  return;
}



// FUNCTION 145a085c0 FUN_145a085c0 body=209 status=ok
// SIG undefined FUN_145a085c0(void)

void FUN_145a085c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a81b770;
  FUN_145a08691(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
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



// FUNCTION 145a08691 FUN_145a08691 body=77 status=ok
// SIG undefined FUN_145a08691(void)

void FUN_145a08691(longlong param_1,int param_2)

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



// FUNCTION 145a086de FUN_145a086de body=40 status=ok
// SIG undefined FUN_145a086de(void)

undefined8 FUN_145a086de(undefined8 param_1,int param_2)

{
  FUN_145a08706();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a08706 FUN_145a08706 body=483 status=ok
// SIG undefined FUN_145a08706(void)

void FUN_145a08706(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aedcf70;
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x58] != 0) {
    plVar1 = param_1 + 0x5c;
    if ((longlong *)param_1[0x5a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x5a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x50] != 0) {
    plVar1 = param_1 + 0x54;
    if ((longlong *)param_1[0x52] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x52];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x48] != 0) {
    plVar1 = param_1 + 0x4c;
    if ((longlong *)param_1[0x4a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x4a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x40] != 0) {
    plVar1 = param_1 + 0x44;
    if ((longlong *)param_1[0x42] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x42];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x38] != 0) {
    plVar1 = param_1 + 0x3c;
    if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x3a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x30] != 0) {
    plVar1 = param_1 + 0x34;
    if ((longlong *)param_1[0x32] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x32];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x28] != 0) {
    plVar1 = param_1 + 0x2c;
    if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x2a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x20] != 0) {
    plVar1 = param_1 + 0x24;
    if ((longlong *)param_1[0x22] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x22];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x18] != 0) {
    plVar1 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x10] != 0) {
    plVar1 = param_1 + 0x14;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x12];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a08956 FUN_145a08956 body=31 status=ok
// SIG undefined FUN_145a08956(void)

undefined8 FUN_145a08956(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a08976 FUN_145a08976 body=31 status=ok
// SIG undefined FUN_145a08976(void)

undefined8 FUN_145a08976(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a08996 FUN_145a08996 body=31 status=ok
// SIG undefined FUN_145a08996(void)

undefined8 FUN_145a08996(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a089b6 FUN_145a089b6 body=31 status=ok
// SIG undefined FUN_145a089b6(void)

undefined8 FUN_145a089b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a089d6 FUN_145a089d6 body=31 status=ok
// SIG undefined FUN_145a089d6(void)

undefined8 FUN_145a089d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a089f6 FUN_145a089f6 body=31 status=ok
// SIG undefined FUN_145a089f6(void)

undefined8 FUN_145a089f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a08a16 FUN_145a08a16 body=31 status=ok
// SIG undefined FUN_145a08a16(void)

undefined8 FUN_145a08a16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a08a36 FUN_145a08a36 body=31 status=ok
// SIG undefined FUN_145a08a36(void)

undefined8 FUN_145a08a36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a08a56 FUN_145a08a56 body=31 status=ok
// SIG undefined FUN_145a08a56(void)

undefined8 FUN_145a08a56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a08a75 FUN_145a08a75 body=30 status=ok
// SIG undefined FUN_145a08a75(void)

void FUN_145a08a75(longlong param_1)

{
  FUN_145a08a94(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145a08a94 FUN_145a08a94 body=445 status=ok
// SIG undefined FUN_145a08a94(void)

void FUN_145a08a94(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_145a08c52(param_1,1,0);
  plVar2 = param_1 + 7;
  cVar4 = FUN_144729dda(plVar2);
  if (cVar4 != '\0') {
    uVar5 = FUN_14479d2ce(plVar2);
    lVar6 = FUN_140d27a2a(uVar5);
    if (param_1[10] != 0) {
      FUN_14480f766(lVar6);
      param_1[10] = 0;
    }
    if (param_1[0xb] != 0) {
      FUN_14480f766(lVar6 + 0x18);
      param_1[0xb] = 0;
    }
    lVar6 = FUN_14479d2ce(plVar2);
    if (((*(longlong *)(lVar6 + 0x30) != 0) &&
        (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x360), lVar6 != 0)) &&
       (*(longlong *)(lVar6 + 0x178) != 0)) {
      lVar7 = FUN_14030d660();
      lVar6 = *(longlong *)(lVar6 + 0x178);
      if (((lVar6 != 0) && (lVar7 != 0)) &&
         ((lVar3 = *(longlong *)(lVar6 + 0x10), lVar3 != 0 &&
          ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar3 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30)))))) {
        FUN_140457ffc(lVar6 + 0x608,param_1);
      }
    }
  }
  plVar2 = (longlong *)param_1[0x11];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0xf];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(char *)((longlong)param_1 + 0x46) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x46) = 0;
  }
  FUN_144760e21(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a08c52 FUN_145a08c52 body=525 status=ok
// SIG undefined FUN_145a08c52(void)

void FUN_145a08c52(longlong param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = *(char *)(param_1 + 0x43);
  FUN_145a08e78(param_1,0,param_2);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (cVar2 == '\x01') {
    FUN_140898514(param_1 + 0x18,0);
  }
  if (param_3 == '\0') {
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  if (*(char *)(param_1 + 0x46) == '\x01') {
    *(undefined1 *)(param_1 + 0x46) = 0;
  }
  if (((*(longlong *)(param_1 + 0x60) != 0) && (*(longlong *)(param_1 + 0x68) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x68) + 8))) {
    FUN_1401cb356();
    local_50 = *(undefined8 *)(param_1 + 0x60);
    local_48 = *(longlong *)(param_1 + 0x68);
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_50);
    plVar3 = *(longlong **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
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
  if (((*(longlong *)(param_1 + 0x70) != 0) && (*(longlong *)(param_1 + 0x78) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x78) + 8))) {
    FUN_1401cb356();
    local_60 = *(undefined8 *)(param_1 + 0x70);
    local_58 = *(longlong *)(param_1 + 0x78);
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 0xc) = *(int *)(local_58 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_60);
    plVar3 = *(longlong **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
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
  if (((*(longlong *)(param_1 + 0x80) != 0) && (*(longlong *)(param_1 + 0x88) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x88) + 8))) {
    FUN_1401cb356();
    local_70 = *(undefined8 *)(param_1 + 0x80);
    local_68 = *(longlong *)(param_1 + 0x88);
    if (local_68 != 0) {
      LOCK();
      *(int *)(local_68 + 0xc) = *(int *)(local_68 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_70);
    plVar3 = *(longlong **)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
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
  if ((char)param_2 != '\0') {
    if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 145a08e78 FUN_145a08e78 body=120 status=ok
// SIG undefined FUN_145a08e78(void)

void FUN_145a08e78(longlong param_1,undefined4 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(char *)(param_1 + 0xb4) = (char)param_2;
  if ((param_3 == '\0') &&
     (lVar1 = *(longlong *)(param_1 + 0x30), *(longlong *)(lVar1 + 0x398) != 0)) {
    lVar3 = FUN_144a7b4ca();
    lVar1 = *(longlong *)(lVar1 + 0x398);
    if (((lVar1 != 0) &&
        (((lVar3 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      FUN_145a08ef0(lVar1,param_2);
    }
  }
  FUN_145a08f22(param_1,*(undefined1 *)(param_1 + 0xb4));
  return;
}



// FUNCTION 145a08ef0 FUN_145a08ef0 body=50 status=ok
// SIG undefined FUN_145a08ef0(void)

void FUN_145a08ef0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xf18) = param_2;
  if (*(char *)(param_1 + 0x178) != '\x03') {
    FUN_145a09084(param_1);
    param_2 = *(undefined1 *)(param_1 + 0xf18);
  }
  FUN_145a08fc4(param_1,param_2);
  return;
}



// FUNCTION 145a08f22 FUN_145a08f22 body=162 status=ok
// SIG undefined FUN_145a08f22(void)

void FUN_145a08f22(longlong *param_1,undefined4 param_2)

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
        goto LAB_145a08faf;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145a08faf:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145a08fc4 FUN_145a08fc4 body=192 status=ok
// SIG undefined FUN_145a08fc4(void)

void FUN_145a08fc4(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cbd0b68;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cbd0b74 = DAT_14cbd0b74 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cbd0b60 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cbd0b60 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cbd0b74 = DAT_14cbd0b74 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_145a0906b;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cbd0b74 = DAT_14cbd0b74 + -1;
LAB_145a0906b:
  FUN_14474d06a(&DAT_14cbd0b60,0);
  return;
}



// FUNCTION 145a09084 FUN_145a09084 body=91 status=ok
// SIG undefined FUN_145a09084(void)

void FUN_145a09084(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbae370);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a090e8 FUN_145a090e8 body=225 status=ok
// SIG undefined FUN_145a090e8(void)

undefined8 * FUN_145a090e8(undefined8 *param_1)

{
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong *local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14a175710;
  FUN_1458e88de(param_1 + 3);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_140056680(local_50,L"ElementA");
  local_40 = local_50;
  local_38 = param_1 + 3;
  FUN_145a091ca(param_1 + 0xd,local_2c);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a091ca FUN_145a091ca body=385 status=ok
// SIG undefined FUN_145a091ca(void)

undefined4 * FUN_145a091ca(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145a093b6(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  uVar2 = param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[6] = 0;
  *(undefined4 *)(local_40 + 7) = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined8 *)((longlong)local_40 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)local_40 + 0x44) = 0;
  local_40[10] = 0;
  *(undefined4 *)(local_40 + 0xb) = 0;
  FUN_14058acb2(local_40 + 2,uVar2);
  *(undefined4 *)(local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar5 = FUN_144a49b4a(iVar8,puVar9);
  cVar4 = FUN_145a0934c(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 100) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xc) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_145a0949a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145a0934c FUN_145a0934c body=105 status=ok
// SIG undefined FUN_145a0934c(void)

undefined8 FUN_145a0934c(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1470aa4de(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x68 + *param_1);
    FUN_145883df2(_Dst);
    memmove(_Dst,param_3,0x60);
    FUN_1470aa5aa(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 145a093b6 FUN_145a093b6 body=227 status=ok
// SIG undefined FUN_145a093b6(void)

int * FUN_145a093b6(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x68) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 145a0949a FUN_145a0949a body=485 status=ok
// SIG undefined FUN_145a0949a(void)

void FUN_145a0949a(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x68;
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
        *(int *)(lVar3 + 100 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar11) =
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



// FUNCTION 145a09680 FUN_145a09680 body=318 status=ok
// SIG undefined FUN_145a09680(void)

undefined4 * FUN_145a09680(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145a09852(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = ((undefined8 *)*param_3)[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = uVar2;
  local_40[2] = *puVar1;
  local_40[3] = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_1448eb174(local_40,0x10,0);
  cVar4 = FUN_145a097c0(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x24) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_145a0993a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a097c0 FUN_145a097c0 body=145 status=ok
// SIG undefined FUN_145a097c0(void)

undefined8 FUN_145a097c0(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar12 = FUN_1470738a8(), iVar12 != -1)) {
    puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
    plVar4 = *(longlong **)(puVar3 + 6);
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
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar9 = param_3[5];
    uVar10 = param_3[6];
    uVar11 = param_3[7];
    puVar3[4] = param_3[4];
    puVar3[5] = uVar9;
    puVar3[6] = uVar10;
    puVar3[7] = uVar11;
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    FUN_14707391c(param_1,*param_4);
    *param_4 = iVar12;
    return 1;
  }
  return 0;
}



// FUNCTION 145a09852 FUN_145a09852 body=231 status=ok
// SIG undefined FUN_145a09852(void)

int * FUN_145a09852(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 145a0993a FUN_145a0993a body=455 status=ok
// SIG undefined FUN_145a0993a(void)

void FUN_145a0993a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1448eb174(lVar2,0x10,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a09b02 FUN_145a09b02 body=114 status=ok
// SIG undefined FUN_145a09b02(void)

void FUN_145a09b02(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
    FUN_14587c8aa(param_1 + 0xe0);
    FUN_145da4014(param_1 + 0xe0);
  }
  FUN_1406dd7f4(param_1);
  *(undefined1 *)(param_1 + 0x130) = 0;
  lVar1 = *(longlong *)(param_1 + 0x138);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x138) = 0;
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  FUN_140e82a34(param_1);
  return;
}



// FUNCTION 145a09b74 FUN_145a09b74 body=30 status=ok
// SIG undefined FUN_145a09b74(void)

void FUN_145a09b74(longlong param_1)

{
  FUN_145a09b92(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145a09b92 FUN_145a09b92 body=87 status=ok
// SIG undefined FUN_145a09b92(void)

void FUN_145a09b92(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1);
  return;
}



// FUNCTION 145a09bf6 FUN_145a09bf6 body=36 status=ok
// SIG undefined FUN_145a09bf6(void)

undefined8 FUN_145a09bf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a09c26 FUN_145a09c26 body=36 status=ok
// SIG undefined FUN_145a09c26(void)

undefined8 FUN_145a09c26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a09c56 FUN_145a09c56 body=36 status=ok
// SIG undefined FUN_145a09c56(void)

undefined8 FUN_145a09c56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a09c86 FUN_145a09c86 body=36 status=ok
// SIG undefined FUN_145a09c86(void)

undefined8 FUN_145a09c86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a09cb6 FUN_145a09cb6 body=36 status=ok
// SIG undefined FUN_145a09cb6(void)

undefined8 FUN_145a09cb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a09ce6 FUN_145a09ce6 body=36 status=ok
// SIG undefined FUN_145a09ce6(void)

undefined8 FUN_145a09ce6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a09d16 FUN_145a09d16 body=36 status=ok
// SIG undefined FUN_145a09d16(void)

undefined8 FUN_145a09d16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a09d46 FUN_145a09d46 body=36 status=ok
// SIG undefined FUN_145a09d46(void)

undefined8 FUN_145a09d46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a09d76 FUN_145a09d76 body=36 status=ok
// SIG undefined FUN_145a09d76(void)

undefined8 FUN_145a09d76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a09da6 FUN_145a09da6 body=36 status=ok
// SIG undefined FUN_145a09da6(void)

undefined8 FUN_145a09da6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a09dd6 FUN_145a09dd6 body=36 status=ok
// SIG undefined FUN_145a09dd6(void)

undefined8 FUN_145a09dd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a09e06 FUN_145a09e06 body=36 status=ok
// SIG undefined FUN_145a09e06(void)

undefined8 FUN_145a09e06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a09e36 FUN_145a09e36 body=36 status=ok
// SIG undefined FUN_145a09e36(void)

undefined8 FUN_145a09e36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a09e66 FUN_145a09e66 body=37 status=ok
// SIG undefined FUN_145a09e66(void)

void FUN_145a09e66(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  *puVar1 = &PTR_FUN_149fc1ca0;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a09e98 FUN_145a09e98 body=37 status=ok
// SIG undefined FUN_145a09e98(void)

void FUN_145a09e98(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  *puVar1 = &PTR_FUN_14a57db30;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a09eca FUN_145a09eca body=37 status=ok
// SIG undefined FUN_145a09eca(void)

void FUN_145a09eca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  *puVar1 = &PTR_FUN_14a57dd30;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a09efc FUN_145a09efc body=37 status=ok
// SIG undefined FUN_145a09efc(void)

void FUN_145a09efc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  *puVar1 = &PTR_FUN_14a57e310;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a09f22 FUN_145a09f22 body=40 status=ok
// SIG undefined FUN_145a09f22(void)

undefined8 FUN_145a09f22(undefined8 param_1,int param_2)

{
  FUN_145a09f4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a09f4a FUN_145a09f4a body=64 status=ok
// SIG undefined FUN_145a09f4a(void)

void FUN_145a09f4a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abc02b0;
  FUN_145a09f8b(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a09f8b FUN_145a09f8b body=40 status=ok
// SIG undefined FUN_145a09f8b(void)

void FUN_145a09f8b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147e95186(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 145a09fc0 FUN_145a09fc0 body=36 status=ok
// SIG undefined FUN_145a09fc0(void)

undefined8 FUN_145a09fc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a09fea FUN_145a09fea body=55 status=ok
// SIG undefined FUN_145a09fea(void)

void FUN_145a09fea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21168 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21168 = FUN_140002ddd(FUN_1464322b2,uVar1,L"GbxBrainAspect_AttachTerritory");
  }
  return;
}



// FUNCTION 145a0a028 FUN_145a0a028 body=55 status=ok
// SIG undefined FUN_145a0a028(void)

void FUN_145a0a028(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21760 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21760 = FUN_140002ddd(FUN_146433fff,uVar1,L"GbxBrainAspect_NavLink");
  }
  return;
}



// FUNCTION 145a0a066 FUN_145a0a066 body=55 status=ok
// SIG undefined FUN_145a0a066(void)

void FUN_145a0a066(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22d70 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22d70 = FUN_140002ddd(FUN_14643b7da,uVar1,L"GpsModifier_Transform");
  }
  return;
}



// FUNCTION 145a0a0a4 FUN_145a0a0a4 body=55 status=ok
// SIG undefined FUN_145a0a0a4(void)

void FUN_145a0a0a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb235f0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb235f0 = FUN_140002ddd(FUN_14643e315,uVar1,L"GpsTest_NodeChain");
  }
  return;
}



// FUNCTION 145a0a0e2 FUN_145a0a0e2 body=55 status=ok
// SIG undefined FUN_145a0a0e2(void)

void FUN_145a0a0e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25178 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25178 = FUN_140002ddd(FUN_146445d84,uVar1,L"GbxAudioGraphState_Start");
  }
  return;
}



// FUNCTION 145a0a124 FUN_145a0a124 body=72 status=ok
// SIG undefined FUN_145a0a124(void)

undefined8 * FUN_145a0a124(undefined8 *param_1)

{
  FUN_14108ad62();
  *param_1 = &PTR_FUN_14ad2ed80;
  param_1[5] = &PTR_FUN_14ad2f040;
  FUN_145a0a16c(param_1 + 7);
  memset(param_1 + 0x24,0,0xe8);
  return param_1;
}



// FUNCTION 145a0a16c FUN_145a0a16c body=13 status=ok
// SIG undefined FUN_145a0a16c(void)

void FUN_145a0a16c(void *param_1)

{
  memset(param_1,0,0xe8);
  return;
}



// FUNCTION 145a0a179 FUN_145a0a179 body=53 status=ok
// SIG undefined FUN_145a0a179(void)

void FUN_145a0a179(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a0a1ae(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad34820;
  puVar1[5] = &PTR_FUN_14ad34ad0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 145a0a1ae FUN_145a0a1ae body=43 status=ok
// SIG undefined FUN_145a0a1ae(void)

undefined8 * FUN_145a0a1ae(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ad13f10;
  param_1[5] = &PTR_FUN_14ad141c0;
  return param_1;
}



// FUNCTION 145a0a2de FUN_145a0a2de body=55 status=ok
// SIG undefined FUN_145a0a2de(void)

void FUN_145a0a2de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e2e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e2e8 = FUN_140002ddd(FUN_1464e05c6,uVar1,L"GbxAudioGraphState_If");
  }
  return;
}



// FUNCTION 145a0a31c FUN_145a0a31c body=55 status=ok
// SIG undefined FUN_145a0a31c(void)

void FUN_145a0a31c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e348 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e348 = FUN_140002ddd(FUN_1464e07e8,uVar1,L"GbxAudioGraphState_FactChange");
  }
  return;
}



// FUNCTION 145a0a35a FUN_145a0a35a body=55 status=ok
// SIG undefined FUN_145a0a35a(void)

void FUN_145a0a35a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aca0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aca0 = FUN_140002ddd(FUN_1464ccafb,uVar1,L"GbxBrainAspect_Lead");
  }
  return;
}



// FUNCTION 145a0a398 FUN_145a0a398 body=55 status=ok
// SIG undefined FUN_145a0a398(void)

void FUN_145a0a398(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb691a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb691a8 = FUN_140002ddd(FUN_14651f3a2,uVar1,L"GpsGenerator_MissionActors");
  }
  return;
}



// FUNCTION 145a0a3d0 FUN_145a0a3d0 body=142 status=ok
// SIG undefined FUN_145a0a3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145a0a3d0(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,"player_transactions",1);
  FUN_14147d486(&DAT_14cb83388,local_18,6);
  _DAT_14cb83388 = &PTR_FUN_14b412490;
  FUN_145a0a460(&DAT_14cb83388);
  FUN_140834d1a(&DAT_14cb83388,L"Player currency/loot statistics.");
  _DAT_14cb833e8 = 0;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a0a460 FUN_145a0a460 body=1 status=ok
// SIG undefined FUN_145a0a460(void)

void FUN_145a0a460(void)

{
  return;
}



// FUNCTION 145a0a462 FUN_145a0a462 body=21 status=ok
// SIG undefined FUN_145a0a462(void)

undefined8 FUN_145a0a462(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145a0a48e FUN_145a0a48e body=55 status=ok
// SIG undefined FUN_145a0a48e(void)

void FUN_145a0a48e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb933a8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb933a8 = FUN_140002ddd(FUN_146570ce0,uVar1,L"GbxBrainAspect_ReloadWeapon");
  }
  return;
}



// FUNCTION 145a0a4c6 FUN_145a0a4c6 body=39 status=ok
// SIG undefined FUN_145a0a4c6(void)

void FUN_145a0a4c6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414490be();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145a0a4ee FUN_145a0a4ee body=39 status=ok
// SIG undefined FUN_145a0a4ee(void)

void FUN_145a0a4ee(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414490c8();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145a0a516 FUN_145a0a516 body=39 status=ok
// SIG undefined FUN_145a0a516(void)

void FUN_145a0a516(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414490d2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145a0a53e FUN_145a0a53e body=39 status=ok
// SIG undefined FUN_145a0a53e(void)

void FUN_145a0a53e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414490dc();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145a0a56c FUN_145a0a56c body=55 status=ok
// SIG undefined FUN_145a0a56c(void)

void FUN_145a0a56c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1028 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1028 = FUN_140002ddd(FUN_1465adbb1,uVar1,L"GbxBrainTask_UseGadget");
  }
  return;
}



// FUNCTION 145a0a5aa FUN_145a0a5aa body=55 status=ok
// SIG undefined FUN_145a0a5aa(void)

void FUN_145a0a5aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3e40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3e40 = FUN_140002ddd(FUN_1465bb7fa,uVar1,L"GpsGenerator_LootableObjects");
  }
  return;
}



// FUNCTION 145a0a5ee FUN_145a0a5ee body=37 status=ok
// SIG undefined FUN_145a0a5ee(void)

void FUN_145a0a5ee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14ba65f40;
  return;
}



// FUNCTION 145a0a614 FUN_145a0a614 body=11 status=ok
// SIG undefined FUN_145a0a614(void)

void FUN_145a0a614(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145a0a61b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 145a0a620 FUN_145a0a620 body=37 status=ok
// SIG undefined FUN_145a0a620(void)

void FUN_145a0a620(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  *puVar1 = FUnrealUSDWrapperModule::vftable;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a0a652 FUN_145a0a652 body=36 status=ok
// SIG undefined FUN_145a0a652(void)

undefined8 FUN_145a0a652(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a682 FUN_145a0a682 body=36 status=ok
// SIG undefined FUN_145a0a682(void)

undefined8 FUN_145a0a682(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a6b2 FUN_145a0a6b2 body=36 status=ok
// SIG undefined FUN_145a0a6b2(void)

undefined8 FUN_145a0a6b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a6e2 FUN_145a0a6e2 body=36 status=ok
// SIG undefined FUN_145a0a6e2(void)

undefined8 FUN_145a0a6e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a712 FUN_145a0a712 body=36 status=ok
// SIG undefined FUN_145a0a712(void)

undefined8 FUN_145a0a712(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a742 FUN_145a0a742 body=36 status=ok
// SIG undefined FUN_145a0a742(void)

undefined8 FUN_145a0a742(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a772 FUN_145a0a772 body=36 status=ok
// SIG undefined FUN_145a0a772(void)

undefined8 FUN_145a0a772(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a7a2 FUN_145a0a7a2 body=36 status=ok
// SIG undefined FUN_145a0a7a2(void)

undefined8 FUN_145a0a7a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a7d2 FUN_145a0a7d2 body=36 status=ok
// SIG undefined FUN_145a0a7d2(void)

undefined8 FUN_145a0a7d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a0a802 FUN_145a0a802 body=36 status=ok
// SIG undefined FUN_145a0a802(void)

undefined8 FUN_145a0a802(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}


