// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148caae78 FUN_148caae78 body=63 status=ok
// SIG undefined FUN_148caae78(void)

undefined1 FUN_148caae78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148caaf82(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 148caaee0 FUN_148caaee0 body=59 status=ok
// SIG undefined FUN_148caaee0(void)

undefined8 FUN_148caaee0(longlong *param_1)

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



// FUNCTION 148caaf82 FUN_148caaf82 body=146 status=ok
// SIG undefined FUN_148caaf82(void)

longlong * FUN_148caaf82(longlong *param_1,longlong *param_2)

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
  plVar1 = (longlong *)param_2[2];
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  FUN_148caac8a(param_1 + 4,param_2 + 4);
  *(char *)(param_1 + 0x20) = (char)param_2[0x20];
  return param_1;
}



// FUNCTION 148cab016 FUN_148cab016 body=70 status=ok
// SIG undefined FUN_148cab016(void)

void FUN_148cab016(longlong *param_1)

{
  if ((char)param_1[0x21] == '\x01') {
    FUN_145c903c6(param_1 + 4);
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[2] + 0x10))();
    }
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  return;
}



// FUNCTION 148cab08a FUN_148cab08a body=63 status=ok
// SIG undefined FUN_148cab08a(void)

undefined1 FUN_148cab08a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cab3c2(param_2,param_3);
    param_3 = param_3 + 0x538;
    param_2 = param_2 + 0x538;
  }
  return 1;
}



// FUNCTION 148cab0f2 FUN_148cab0f2 body=59 status=ok
// SIG undefined FUN_148cab0f2(void)

undefined8 FUN_148cab0f2(longlong *param_1)

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



// FUNCTION 148cab13e FUN_148cab13e body=40 status=ok
// SIG undefined FUN_148cab13e(void)

void FUN_148cab13e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x538) == '\x01') {
    FUN_145c90250(param_2);
    *(undefined1 *)(param_2 + 0x538) = 0;
  }
  return;
}



// FUNCTION 148cab1b4 FUN_148cab1b4 body=57 status=ok
// SIG undefined FUN_148cab1b4(void)

void FUN_148cab1b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf100 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf100 = FUN_140002ddd(FUN_146610ccd,uVar1,L"OakWidgetData_RewardCenter");
  }
  return;
}



// FUNCTION 148cab1ee FUN_148cab1ee body=130 status=ok
// SIG undefined FUN_148cab1ee(void)

ulonglong FUN_148cab1ee(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  ulonglong uVar10;
  undefined7 uVar9;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar8 = CONCAT71(uVar9,1);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar10 = 0;
    do {
      pcVar3 = *(code **)(lVar2 + uVar10);
      if (pcVar3 != (code *)0x0) {
        plVar4 = *(longlong **)(lVar2 + 0x10 + uVar10);
        plVar7 = (longlong *)(lVar2 + 0x20 + uVar10);
        if (plVar4 != (longlong *)0x0) {
          plVar7 = plVar4;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        cVar5 = (*pcVar3)(uVar6,param_2);
        if (cVar5 == '\0') {
          uVar8 = CONCAT71(uVar9,(int)(~uVar10 >> 6) == 0);
          break;
        }
      }
      uVar10 = uVar10 + 0x40;
    } while ((longlong)iVar1 * 0x40 != uVar10);
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 148cab27a FUN_148cab27a body=106 status=ok
// SIG undefined FUN_148cab27a(void)

void FUN_148cab27a(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  FUN_148cab372(param_1 + 1,&local_28);
  FUN_145c9038a(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cab2e6 FUN_148cab2e6 body=69 status=ok
// SIG undefined FUN_148cab2e6(void)

undefined8 * FUN_148cab2e6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9062f0;
  FUN_145c9038a(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cab32c FUN_148cab32c body=69 status=ok
// SIG undefined FUN_148cab32c(void)

undefined8 * FUN_148cab32c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9062f0;
  FUN_145c9038a(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cab372 FUN_148cab372 body=80 status=ok
// SIG undefined FUN_148cab372(void)

longlong * FUN_148cab372(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_145c9038a(*param_1,(int)param_1[1]);
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



// FUNCTION 148cab3c2 FUN_148cab3c2 body=244 status=ok
// SIG undefined FUN_148cab3c2(void)

longlong FUN_148cab3c2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_148c6b034();
  uVar1 = *(undefined4 *)(param_2 + 0x3a4);
  uVar2 = *(undefined4 *)(param_2 + 0x3a8);
  uVar3 = *(undefined4 *)(param_2 + 0x3ac);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_2 + 0x3a0);
  *(undefined4 *)(param_1 + 0x3a4) = uVar1;
  *(undefined4 *)(param_1 + 0x3a8) = uVar2;
  *(undefined4 *)(param_1 + 0x3ac) = uVar3;
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_2 + 0x3b0);
  FUN_148caaf82(param_1 + 0x3b8,param_2 + 0x3b8);
  FUN_148cab4b6(param_1 + 0x4c0,param_2 + 0x4c0);
  FUN_148cab4b6(param_1 + 0x4d0,param_2 + 0x4d0);
  if (*(int *)(param_1 + 0x4f0) != *(int *)(param_2 + 0x4f0) || *(int *)(param_1 + 0x4f0) == 0) {
    *(int *)(param_1 + 0x4f0) = *(int *)(param_2 + 0x4f0);
    FUN_148cab796(param_1 + 0x4e0,param_2 + 0x4e0);
  }
  FUN_148cabac0(param_1 + 0x500,param_2 + 0x500);
  if (*(int *)(param_1 + 0x520) != *(int *)(param_2 + 0x520)) {
    FUN_144a787a6(param_1 + 0x510,param_2 + 0x510);
    *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_2 + 0x520);
  }
  *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_2 + 0x530);
  *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(param_2 + 0x528);
  return param_1;
}



// FUNCTION 148cab4b6 FUN_148cab4b6 body=95 status=ok
// SIG undefined FUN_148cab4b6(void)

undefined8 * FUN_148cab4b6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c9035f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148cab516(param_1,iVar1);
      FUN_148cab588(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148cab516 FUN_148cab516 body=114 status=ok
// SIG undefined FUN_148cab516(void)

void FUN_148cab516(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe0,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 5;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xe0,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148cab588 FUN_148cab588 body=60 status=ok
// SIG undefined FUN_148cab588(void)

void FUN_148cab588(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148cab5c4(param_1,param_2);
    param_1 = param_1 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return;
}



// FUNCTION 148cab5c4 FUN_148cab5c4 body=466 status=ok
// SIG undefined FUN_148cab5c4(void)

longlong FUN_148cab5c4(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  FUN_145a03fbe();
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xfe | *(byte *)(param_2 + 0x48) & 1;
  plVar2 = *(longlong **)(param_2 + 0x50);
  *(longlong **)(param_1 + 0x50) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  plVar2 = *(longlong **)(param_2 + 0x60);
  *(longlong **)(param_1 + 0x60) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  plVar2 = *(longlong **)(param_2 + 0x70);
  *(longlong **)(param_1 + 0x70) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  plVar2 = *(longlong **)(param_2 + 0x80);
  *(longlong **)(param_1 + 0x80) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = 0;
  iVar1 = *(int *)(param_2 + 0x98);
  pvVar3 = *(void **)(param_2 + 0x90);
  *(int *)(param_1 + 0x98) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x90),iVar1,0);
    memcpy(*(void **)(param_1 + 0x90),pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  iVar1 = *(int *)(param_2 + 0xa8);
  pvVar3 = *(void **)(param_2 + 0xa0);
  *(int *)(param_1 + 0xa8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0xa0),iVar1,0);
    memcpy(*(void **)(param_1 + 0xa0),pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  iVar1 = *(int *)(param_2 + 0xc0);
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  *(int *)(param_1 + 0xc0) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  else {
    FUN_148c6b3ea((undefined8 *)(param_1 + 0xb8),iVar1,0);
    FUN_148c6b45c(*(undefined8 *)(param_1 + 0xb8),uVar4,iVar1);
  }
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  uVar4 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  return param_1;
}



// FUNCTION 148cab796 FUN_148cab796 body=95 status=ok
// SIG undefined FUN_148cab796(void)

undefined8 * FUN_148cab796(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145878e5e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148cab7f6(param_1,iVar1);
      FUN_148cab868(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148cab7f6 FUN_148cab7f6 body=114 status=ok
// SIG undefined FUN_148cab7f6(void)

void FUN_148cab7f6(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe8,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xe8,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148cab868 FUN_148cab868 body=60 status=ok
// SIG undefined FUN_148cab868(void)

void FUN_148cab868(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148cab8a4(param_1,param_2);
    param_1 = param_1 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return;
}



// FUNCTION 148cab8a4 FUN_148cab8a4 body=540 status=ok
// SIG undefined FUN_148cab8a4(void)

longlong * FUN_148cab8a4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar2 = (longlong *)param_2[2];
  param_1[2] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  plVar2 = (longlong *)param_2[4];
  param_1[4] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  param_1[6] = 0;
  iVar1 = (int)param_2[7];
  pvVar3 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = (int)param_2[9];
  pvVar3 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar3,(longlong)iVar1 * 2);
  }
  *(int *)(param_1 + 10) = (int)param_2[10];
  FUN_145a03fbe(param_1 + 0xb,param_2 + 0xb);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xa4);
  lVar4 = param_2[0x15];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xac);
  *(int *)(param_1 + 0x14) = (int)param_2[0x14];
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar5;
  *(int *)(param_1 + 0x15) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar6;
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = 0;
  iVar1 = (int)param_2[0x18];
  lVar4 = param_2[0x17];
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  }
  else {
    FUN_145916a46(param_1 + 0x17,iVar1,0);
    FUN_1413502ea(param_1[0x17],lVar4,iVar1);
  }
  param_1[0x19] = 0;
  iVar1 = (int)param_2[0x1a];
  lVar4 = param_2[0x19];
  *(int *)(param_1 + 0x1a) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  }
  else {
    FUN_148c525fe(param_1 + 0x19,iVar1,0);
    FUN_148c52670(param_1[0x19],lVar4,iVar1);
  }
  param_1[0x1b] = 0;
  iVar1 = (int)param_2[0x1c];
  lVar4 = param_2[0x1b];
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x1b,iVar1,0);
    FUN_140b8566a(param_1[0x1b],lVar4,iVar1);
  }
  return param_1;
}



// FUNCTION 148cabac0 FUN_148cabac0 body=95 status=ok
// SIG undefined FUN_148cabac0(void)

undefined8 * FUN_148cabac0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c9038a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148cabb20(param_1,iVar1);
      FUN_148cabb82(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148cabb20 FUN_148cabb20 body=98 status=ok
// SIG undefined FUN_148cabb20(void)

void FUN_148cabb20(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148cabb82 FUN_148cabb82 body=88 status=ok
// SIG undefined FUN_148cabb82(void)

void FUN_148cabb82(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x10);
    puVar4 = (undefined8 *)(param_2 + 0x20);
    do {
      lVar1 = puVar4[-4];
      puVar3[-2] = lVar1;
      *puVar3 = 0;
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)puVar4[-2];
        if ((undefined8 *)puVar4[-2] == (undefined8 *)0x0) {
          puVar2 = puVar4;
        }
        (**(code **)*puVar2)(puVar2,puVar3);
      }
      puVar3 = puVar3 + 8;
      puVar4 = puVar4 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148cabbdc FUN_148cabbdc body=37 status=ok
// SIG undefined FUN_148cabbdc(void)

void FUN_148cabbdc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb90);
  FUN_145dddd64(param_2);
  return;
}



// FUNCTION 148cabc2e FUN_148cabc2e body=63 status=ok
// SIG undefined FUN_148cabc2e(void)

undefined1 FUN_148cabc2e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cabd92(param_2,param_3);
    param_3 = param_3 + 0xb90;
    param_2 = param_2 + 0xb90;
  }
  return 1;
}



// FUNCTION 148cabc96 FUN_148cabc96 body=59 status=ok
// SIG undefined FUN_148cabc96(void)

undefined8 FUN_148cabc96(longlong *param_1)

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



// FUNCTION 148cabce2 FUN_148cabce2 body=40 status=ok
// SIG undefined FUN_148cabce2(void)

void FUN_148cabce2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb90) == '\x01') {
    FUN_145cad836(param_2);
    *(undefined1 *)(param_2 + 0xb90) = 0;
  }
  return;
}



// FUNCTION 148cabd58 FUN_148cabd58 body=57 status=ok
// SIG undefined FUN_148cabd58(void)

void FUN_148cabd58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf118 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf118 = FUN_140002ddd(FUN_146610d5f,uVar1,L"OakWidgetData_ClaimedRewards");
  }
  return;
}



// FUNCTION 148cabd92 FUN_148cabd92 body=104 status=ok
// SIG undefined FUN_148cabd92(void)

longlong FUN_148cabd92(longlong param_1,longlong param_2)

{
  FUN_148c6ad5e();
  FUN_144a787a6(param_1 + 0xb50,param_2 + 0xb50);
  FUN_144a787a6(param_1 + 0xb60,param_2 + 0xb60);
  FUN_144a787a6(param_1 + 0xb70,param_2 + 0xb70);
  *(undefined8 *)(param_1 + 0xb80) = *(undefined8 *)(param_2 + 0xb80);
  *(undefined4 *)(param_1 + 0xb88) = *(undefined4 *)(param_2 + 0xb88);
  return param_1;
}



// FUNCTION 148cabe48 FUN_148cabe48 body=122 status=ok
// SIG undefined FUN_148cabe48(void)

undefined8 FUN_148cabe48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    FUN_144a787a6(param_2 + 0x20,param_3 + 0x20);
    FUN_144a787a6(param_2 + 0x30,param_3 + 0x30);
    FUN_144a787a6(param_2 + 0x40,param_3 + 0x40);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_3 + 0x68);
    param_2 = param_2 + 0x70;
    param_3 = param_3 + 0x70;
  }
  return 1;
}



// FUNCTION 148cabeea FUN_148cabeea body=59 status=ok
// SIG undefined FUN_148cabeea(void)

undefined8 FUN_148cabeea(longlong *param_1)

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



// FUNCTION 148cabf30 FUN_148cabf30 body=32 status=ok
// SIG undefined FUN_148cabf30(void)

void FUN_148cabf30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_141321572(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148cac04c FUN_148cac04c body=59 status=ok
// SIG undefined FUN_148cac04c(void)

undefined8 FUN_148cac04c(longlong *param_1)

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



// FUNCTION 148cac0e8 FUN_148cac0e8 body=55 status=ok
// SIG undefined FUN_148cac0e8(void)

void FUN_148cac0e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf178 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf178 = FUN_140002ddd(FUN_146610eb3,uVar1,L"OakWorldInfamyValueResolver");
  }
  return;
}



// FUNCTION 148cac198 FUN_148cac198 body=113 status=ok
// SIG undefined FUN_148cac198(void)

undefined8 FUN_148cac198(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 8 + lVar6;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      FUN_1487404d4(lVar2,puVar1 + 1);
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x7c);
      uVar4 = *(undefined4 *)(puVar1 + 0x10);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x84);
      *(undefined4 *)(lVar2 + 0x70) = *(undefined4 *)(puVar1 + 0xf);
      *(undefined4 *)(lVar2 + 0x74) = uVar3;
      *(undefined4 *)(lVar2 + 0x78) = uVar4;
      *(undefined4 *)(lVar2 + 0x7c) = uVar5;
      *(undefined4 *)(lVar2 + 0x80) = *(undefined4 *)(puVar1 + 0x11);
      lVar6 = lVar6 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cac232 FUN_148cac232 body=59 status=ok
// SIG undefined FUN_148cac232(void)

undefined8 FUN_148cac232(longlong *param_1)

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



// FUNCTION 148cac27e FUN_148cac27e body=39 status=ok
// SIG undefined FUN_148cac27e(void)

void FUN_148cac27e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_140ed3afa(param_2 + 8);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148cac328 FUN_148cac328 body=82 status=ok
// SIG undefined FUN_148cac328(void)

undefined8 FUN_148cac328(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cac442(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x1c);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    uVar3 = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    *(undefined4 *)(param_2 + 0x24) = uVar3;
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 148cac3a2 FUN_148cac3a2 body=59 status=ok
// SIG undefined FUN_148cac3a2(void)

undefined8 FUN_148cac3a2(longlong *param_1)

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



// FUNCTION 148cac442 FUN_148cac442 body=84 status=ok
// SIG undefined FUN_148cac442(void)

longlong * FUN_148cac442(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148cac538 FUN_148cac538 body=59 status=ok
// SIG undefined FUN_148cac538(void)

undefined8 FUN_148cac538(longlong *param_1)

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



// FUNCTION 148cac5f8 FUN_148cac5f8 body=124 status=ok
// SIG undefined FUN_148cac5f8(void)

undefined8 FUN_148cac5f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined8 uVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar11);
      lVar2 = param_2 + 0x28 + lVar11;
      *(undefined8 *)(lVar2 + -0xb) = *(undefined8 *)((longlong)puVar1 + 0x1d);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      *(undefined4 *)(lVar2 + -0x18) = puVar1[4];
      *(undefined4 *)(lVar2 + -0x14) = uVar7;
      *(undefined4 *)(lVar2 + -0x10) = uVar8;
      *(undefined4 *)(lVar2 + -0xc) = uVar9;
      *(undefined4 *)(lVar2 + -0x28) = uVar3;
      *(undefined4 *)(lVar2 + -0x24) = uVar4;
      *(undefined4 *)(lVar2 + -0x20) = uVar5;
      *(undefined4 *)(lVar2 + -0x1c) = uVar6;
      FUN_144983130(lVar2,puVar1 + 10);
      uVar10 = *(undefined8 *)(puVar1 + 0x1a);
      *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(puVar1 + 0x18);
      *(undefined8 *)(lVar2 + 0x40) = uVar10;
      *(undefined4 *)(lVar2 + 0x48) = puVar1[0x1c];
      lVar11 = lVar11 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cac69c FUN_148cac69c body=59 status=ok
// SIG undefined FUN_148cac69c(void)

undefined8 FUN_148cac69c(longlong *param_1)

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



// FUNCTION 148cac6e2 FUN_148cac6e2 body=33 status=ok
// SIG undefined FUN_148cac6e2(void)

void FUN_148cac6e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_144a2da94(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148cac754 FUN_148cac754 body=70 status=ok
// SIG undefined FUN_148cac754(void)

void FUN_148cac754(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  *(undefined8 *)((longlong)param_2 + 0x34) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined4 *)((longlong)param_2 + 0x70) = 0xff000000;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  return;
}



// FUNCTION 148cac7da FUN_148cac7da body=46 status=ok
// SIG undefined FUN_148cac7da(void)

void FUN_148cac7da(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14588b30a(param_2 + 8);
  return;
}



// FUNCTION 148cac81e FUN_148cac81e body=131 status=ok
// SIG undefined FUN_148cac81e(void)

undefined8 FUN_148cac81e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      *(undefined8 *)(param_2 + lVar6) = *(undefined8 *)(param_3 + lVar6);
      FUN_14864b91c();
      lVar1 = param_3 + lVar6;
      lVar2 = param_2 + lVar6;
      FUN_141818ba6(lVar2 + 0x58,lVar1 + 0x58);
      uVar3 = *(undefined4 *)(lVar1 + 0x74);
      uVar4 = *(undefined4 *)(lVar1 + 0x78);
      uVar5 = *(undefined4 *)(lVar1 + 0x7c);
      *(undefined4 *)(lVar2 + 0x70) = *(undefined4 *)(lVar1 + 0x70);
      *(undefined4 *)(lVar2 + 0x74) = uVar3;
      *(undefined4 *)(lVar2 + 0x78) = uVar4;
      *(undefined4 *)(lVar2 + 0x7c) = uVar5;
      *(undefined4 *)(lVar2 + 0x80) = *(undefined4 *)(lVar1 + 0x80);
      lVar6 = lVar6 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cac8ca FUN_148cac8ca body=59 status=ok
// SIG undefined FUN_148cac8ca(void)

undefined8 FUN_148cac8ca(longlong *param_1)

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



// FUNCTION 148cac916 FUN_148cac916 body=62 status=ok
// SIG undefined FUN_148cac916(void)

void FUN_148cac916(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    *(undefined4 *)(param_2 + 0x50) = 0;
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FUN_1400020a8();
    }
    FUN_14588b30a(param_2 + 8);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148caca00 FUN_148caca00 body=107 status=ok
// SIG undefined FUN_148caca00(void)

undefined8 FUN_148caca00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(puVar1 + 4);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_141026712(lVar2,puVar1 + 6);
      *(undefined4 *)(lVar2 + 0x68) = puVar1[0x20];
      lVar6 = lVar6 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148caca94 FUN_148caca94 body=59 status=ok
// SIG undefined FUN_148caca94(void)

undefined8 FUN_148caca94(longlong *param_1)

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



// FUNCTION 148cacae0 FUN_148cacae0 body=39 status=ok
// SIG undefined FUN_148cacae0(void)

void FUN_148cacae0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_140beec42(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148cacba4 FUN_148cacba4 body=104 status=ok
// SIG undefined FUN_148cacba4(void)

undefined8 FUN_148cacba4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(puVar1 + 4);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_141471d82(lVar2,puVar1 + 6);
      *(undefined4 *)(lVar2 + 0x18) = puVar1[0xc];
      lVar6 = lVar6 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cacc34 FUN_148cacc34 body=59 status=ok
// SIG undefined FUN_148cacc34(void)

undefined8 FUN_148cacc34(longlong *param_1)

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



// FUNCTION 148cacd0e FUN_148cacd0e body=61 status=ok
// SIG undefined FUN_148cacd0e(void)

void FUN_148cacd0e(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cacd6c FUN_148cacd6c body=710 status=ok
// SIG undefined FUN_148cacd6c(void)

void FUN_148cacd6c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined1 local_160;
  undefined1 *local_158;
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined4 local_a4;
  undefined4 local_78;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar1 = local_48;
  memset(local_148,0,0x100);
  local_78 = 0xffffffff;
  local_144 = 0x3f800000;
  local_a4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_148);
  }
  local_158 = local_148;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_158 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_160 = iVar1 != 0;
  local_168 = local_44;
  FUN_148e14726(param_1,local_30,local_38,local_40);
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cad034 FUN_148cad034 body=414 status=ok
// SIG undefined FUN_148cad034(void)

void FUN_148cad034(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_34;
  FUN_148e14804(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cad222 FUN_148cad222 body=155 status=ok
// SIG undefined FUN_148cad222(void)

void FUN_148cad222(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_148dabd10(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cad2be FUN_148cad2be body=148 status=ok
// SIG undefined FUN_148cad2be(void)

void FUN_148cad2be(undefined8 param_1,longlong param_2)

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
  FUN_148dabc12(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cad354 FUN_148cad354 body=148 status=ok
// SIG undefined FUN_148cad354(void)

void FUN_148cad354(undefined8 param_1,longlong param_2)

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
  FUN_148dabc92(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cad428 FUN_148cad428 body=68 status=ok
// SIG undefined FUN_148cad428(void)

undefined8 FUN_148cad428(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140862116(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x1c);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    uVar3 = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    *(undefined4 *)(param_2 + 0x24) = uVar3;
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148cad494 FUN_148cad494 body=59 status=ok
// SIG undefined FUN_148cad494(void)

undefined8 FUN_148cad494(longlong *param_1)

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



// FUNCTION 148cad582 FUN_148cad582 body=68 status=ok
// SIG undefined FUN_148cad582(void)

undefined8 FUN_148cad582(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141818ba6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x1c);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    uVar3 = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    *(undefined4 *)(param_2 + 0x24) = uVar3;
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148cad5ee FUN_148cad5ee body=59 status=ok
// SIG undefined FUN_148cad5ee(void)

undefined8 FUN_148cad5ee(longlong *param_1)

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



// FUNCTION 148cad6b8 FUN_148cad6b8 body=90 status=ok
// SIG undefined FUN_148cad6b8(void)

undefined1 FUN_148cad6b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 148cad73a FUN_148cad73a body=59 status=ok
// SIG undefined FUN_148cad73a(void)

undefined8 FUN_148cad73a(longlong *param_1)

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



// FUNCTION 148cad86a FUN_148cad86a body=59 status=ok
// SIG undefined FUN_148cad86a(void)

undefined8 FUN_148cad86a(longlong *param_1)

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



// FUNCTION 148cad8b6 FUN_148cad8b6 body=38 status=ok
// SIG undefined FUN_148cad8b6(void)

void FUN_148cad8b6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148cad9ba FUN_148cad9ba body=59 status=ok
// SIG undefined FUN_148cad9ba(void)

undefined8 FUN_148cad9ba(longlong *param_1)

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



// FUNCTION 148cada06 FUN_148cada06 body=38 status=ok
// SIG undefined FUN_148cada06(void)

void FUN_148cada06(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_148cada6a(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148cada6a FUN_148cada6a body=76 status=ok
// SIG undefined FUN_148cada6a(void)

void FUN_148cada6a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b90e990;
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
  FUN_1401bee6a(param_1);
  return;
}



// FUNCTION 148cadae4 FUN_148cadae4 body=56 status=ok
// SIG undefined FUN_148cadae4(void)

void FUN_148cadae4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000148cadb11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148cadb32 FUN_148cadb32 body=76 status=ok
// SIG undefined FUN_148cadb32(void)

undefined8 FUN_148cadb32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cadba6 FUN_148cadba6 body=59 status=ok
// SIG undefined FUN_148cadba6(void)

undefined8 FUN_148cadba6(longlong *param_1)

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



// FUNCTION 148cadbec FUN_148cadbec body=64 status=ok
// SIG undefined FUN_148cadbec(void)

void FUN_148cadbec(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x18);
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
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148cadc7c FUN_148cadc7c body=37 status=ok
// SIG undefined FUN_148cadc7c(void)

void FUN_148cadc7c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd0);
  FUN_148caddc6(param_2);
  return;
}



// FUNCTION 148cadcfa FUN_148cadcfa body=59 status=ok
// SIG undefined FUN_148cadcfa(void)

undefined8 FUN_148cadcfa(longlong *param_1)

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



// FUNCTION 148cadd46 FUN_148cadd46 body=40 status=ok
// SIG undefined FUN_148cadd46(void)

void FUN_148cadd46(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_148cadea6(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148caddc6 FUN_148caddc6 body=130 status=ok
// SIG undefined FUN_148caddc6(void)

void FUN_148caddc6(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3a) = 0x101;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x600000000000;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_14b90ecb0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xf00000d0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}



// FUNCTION 148cade48 FUN_148cade48 body=38 status=ok
// SIG undefined FUN_148cade48(void)

undefined8 FUN_148cade48(undefined8 param_1,int param_2)

{
  FUN_148cadea6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cade6e FUN_148cade6e body=55 status=ok
// SIG undefined FUN_148cade6e(void)

void FUN_148cade6e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf4f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf4f8 = FUN_140002ddd(FUN_14661217b,uVar1,L"ObjectiveTypeSettings_MultiEchoPanelHack");
  }
  return;
}



// FUNCTION 148cadea6 FUN_148cadea6 body=109 status=ok
// SIG undefined FUN_148cadea6(void)

void FUN_148cadea6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b90ecb0;
  FUN_148cadf13(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
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
  FUN_1401bee6a(param_1);
  return;
}



// FUNCTION 148cadf13 FUN_148cadf13 body=73 status=ok
// SIG undefined FUN_148cadf13(void)

void FUN_148cadf13(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
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
      plVar4 = plVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148cadfb2 FUN_148cadfb2 body=85 status=ok
// SIG undefined FUN_148cadfb2(void)

undefined1 FUN_148cadfb2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_14862318e(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined1 *)(param_2 + 0x18 + lVar1) = *(undefined1 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cae030 FUN_148cae030 body=59 status=ok
// SIG undefined FUN_148cae030(void)

undefined8 FUN_148cae030(longlong *param_1)

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



// FUNCTION 148cae076 FUN_148cae076 body=32 status=ok
// SIG undefined FUN_148cae076(void)

void FUN_148cae076(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148cae0e4 FUN_148cae0e4 body=38 status=ok
// SIG undefined FUN_148cae0e4(void)

undefined8 FUN_148cae0e4(undefined8 param_1,int param_2)

{
  FUN_140f4e84a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cae10a FUN_148cae10a body=57 status=ok
// SIG undefined FUN_148cae10a(void)

void FUN_148cae10a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf510 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf510 = FUN_140002ddd(FUN_1466121da,uVar1,L"BinderBehaviorMod_BossObjective");
  }
  return;
}



// FUNCTION 148cae1dc FUN_148cae1dc body=59 status=ok
// SIG undefined FUN_148cae1dc(void)

undefined8 FUN_148cae1dc(longlong *param_1)

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



// FUNCTION 148cae228 FUN_148cae228 body=38 status=ok
// SIG undefined FUN_148cae228(void)

void FUN_148cae228(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148cae332 FUN_148cae332 body=59 status=ok
// SIG undefined FUN_148cae332(void)

undefined8 FUN_148cae332(longlong *param_1)

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



// FUNCTION 148cae37e FUN_148cae37e body=38 status=ok
// SIG undefined FUN_148cae37e(void)

void FUN_148cae37e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_14185eff6(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148cae42c FUN_148cae42c body=62 status=ok
// SIG undefined FUN_148cae42c(void)

undefined1 FUN_148cae42c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14862318e(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cae492 FUN_148cae492 body=59 status=ok
// SIG undefined FUN_148cae492(void)

undefined8 FUN_148cae492(longlong *param_1)

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



// FUNCTION 148cae4d8 FUN_148cae4d8 body=32 status=ok
// SIG undefined FUN_148cae4d8(void)

void FUN_148cae4d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148cae546 FUN_148cae546 body=38 status=ok
// SIG undefined FUN_148cae546(void)

undefined8 FUN_148cae546(undefined8 param_1,int param_2)

{
  FUN_140f4e84a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cae56c FUN_148cae56c body=55 status=ok
// SIG undefined FUN_148cae56c(void)

void FUN_148cae56c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf558 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf558 = FUN_140002ddd(FUN_146612367,uVar1,L"OakDownStateObjectiveListener");
  }
  return;
}



// FUNCTION 148cae634 FUN_148cae634 body=59 status=ok
// SIG undefined FUN_148cae634(void)

undefined8 FUN_148cae634(longlong *param_1)

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



// FUNCTION 148cae680 FUN_148cae680 body=38 status=ok
// SIG undefined FUN_148cae680(void)

void FUN_148cae680(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148cae790 FUN_148cae790 body=59 status=ok
// SIG undefined FUN_148cae790(void)

undefined8 FUN_148cae790(longlong *param_1)

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



// FUNCTION 148cae7dc FUN_148cae7dc body=38 status=ok
// SIG undefined FUN_148cae7dc(void)

void FUN_148cae7dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148cae88c FUN_148cae88c body=59 status=ok
// SIG undefined FUN_148cae88c(void)

undefined8 FUN_148cae88c(longlong *param_1)

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



// FUNCTION 148cae8d8 FUN_148cae8d8 body=60 status=ok
// SIG undefined FUN_148cae8d8(void)

void FUN_148cae8d8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x74) == '\x01') {
    *param_2 = &PTR_FUN_14b90f830;
    FUN_140d97376(param_2 + 0x12);
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0x74) = 0;
  }
  return;
}



// FUNCTION 148cae952 FUN_148cae952 body=105 status=ok
// SIG undefined FUN_148cae952(void)

undefined8 * FUN_148cae952(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3a) = 0x101;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x600000000000;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_14b90f830;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_144007dae(param_1 + 0x12);
  return param_1;
}



// FUNCTION 148caea60 FUN_148caea60 body=59 status=ok
// SIG undefined FUN_148caea60(void)

undefined8 FUN_148caea60(longlong *param_1)

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



// FUNCTION 148caeaac FUN_148caeaac body=38 status=ok
// SIG undefined FUN_148caeaac(void)

void FUN_148caeaac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148caeb5a FUN_148caeb5a body=62 status=ok
// SIG undefined FUN_148caeb5a(void)

undefined1 FUN_148caeb5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14862318e(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148caebc0 FUN_148caebc0 body=59 status=ok
// SIG undefined FUN_148caebc0(void)

undefined8 FUN_148caebc0(longlong *param_1)

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



// FUNCTION 148caec06 FUN_148caec06 body=32 status=ok
// SIG undefined FUN_148caec06(void)

void FUN_148caec06(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148caec74 FUN_148caec74 body=38 status=ok
// SIG undefined FUN_148caec74(void)

undefined8 FUN_148caec74(undefined8 param_1,int param_2)

{
  FUN_140f4e84a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148caec9a FUN_148caec9a body=55 status=ok
// SIG undefined FUN_148caec9a(void)

void FUN_148caec9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf5d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf5d0 = FUN_140002ddd(FUN_1466125e9,uVar1,L"OakKillObjectiveDeathListener");
  }
  return;
}



// FUNCTION 148caecd2 FUN_148caecd2 body=32 status=ok
// SIG undefined FUN_148caecd2(void)

void FUN_148caecd2(undefined8 param_1,undefined8 *param_2)

{
  FUN_14185f0aa(param_2);
  *param_2 = &PTR_FUN_14b90fcb0;
  return;
}



// FUNCTION 148caed34 FUN_148caed34 body=59 status=ok
// SIG undefined FUN_148caed34(void)

undefined8 FUN_148caed34(longlong *param_1)

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



// FUNCTION 148caed80 FUN_148caed80 body=38 status=ok
// SIG undefined FUN_148caed80(void)

void FUN_148caed80(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x540) == '\x01') {
    FUN_140a49674(param_2);
    *(undefined1 *)(param_2 + 0x540) = 0;
  }
  return;
}



// FUNCTION 148caee7c FUN_148caee7c body=59 status=ok
// SIG undefined FUN_148caee7c(void)

undefined8 FUN_148caee7c(longlong *param_1)

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



// FUNCTION 148caeec8 FUN_148caeec8 body=65 status=ok
// SIG undefined FUN_148caeec8(void)

void FUN_148caeec8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *param_2 = &PTR_FUN_14b90ffb0;
    if (param_2[0x11] != 0) {
      FUN_1400020a8();
    }
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 148caf000 FUN_148caf000 body=59 status=ok
// SIG undefined FUN_148caf000(void)

undefined8 FUN_148caf000(longlong *param_1)

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



// FUNCTION 148caf04c FUN_148caf04c body=38 status=ok
// SIG undefined FUN_148caf04c(void)

void FUN_148caf04c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 148caf0f2 FUN_148caf0f2 body=70 status=ok
// SIG undefined FUN_148caf0f2(void)

undefined8 FUN_148caf0f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_145a39a7c(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148caf160 FUN_148caf160 body=59 status=ok
// SIG undefined FUN_148caf160(void)

undefined8 FUN_148caf160(longlong *param_1)

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



// FUNCTION 148caf1fe FUN_148caf1fe body=57 status=ok
// SIG undefined FUN_148caf1fe(void)

void FUN_148caf1fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf720 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf720 = FUN_140002ddd(FUN_146612832,uVar1,L"GbxPickupObjectiveSpawnStrategy_IODrop");
  }
  return;
}



// FUNCTION 148caf2bc FUN_148caf2bc body=59 status=ok
// SIG undefined FUN_148caf2bc(void)

undefined8 FUN_148caf2bc(longlong *param_1)

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



// FUNCTION 148caf34e FUN_148caf34e body=57 status=ok
// SIG undefined FUN_148caf34e(void)

void FUN_148caf34e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf738 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf738 =
         FUN_140002ddd(FUN_146612892,uVar1,L"GbxPickupObjectiveSpawnStrategy_EnemyDropOnDeath");
  }
  return;
}



// FUNCTION 148caf44a FUN_148caf44a body=59 status=ok
// SIG undefined FUN_148caf44a(void)

undefined8 FUN_148caf44a(longlong *param_1)

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



// FUNCTION 148caf496 FUN_148caf496 body=38 status=ok
// SIG undefined FUN_148caf496(void)

void FUN_148caf496(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_14185f200(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148caf546 FUN_148caf546 body=59 status=ok
// SIG undefined FUN_148caf546(void)

undefined8 FUN_148caf546(longlong *param_1)

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



// FUNCTION 148caf592 FUN_148caf592 body=38 status=ok
// SIG undefined FUN_148caf592(void)

void FUN_148caf592(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148caf692 FUN_148caf692 body=32 status=ok
// SIG undefined FUN_148caf692(void)

void FUN_148caf692(undefined8 param_1,undefined8 *param_2)

{
  FUN_143c86d70(param_2);
  *param_2 = &PTR_FUN_14b910a00;
  return;
}



// FUNCTION 148caf6f4 FUN_148caf6f4 body=59 status=ok
// SIG undefined FUN_148caf6f4(void)

undefined8 FUN_148caf6f4(longlong *param_1)

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



// FUNCTION 148caf740 FUN_148caf740 body=38 status=ok
// SIG undefined FUN_148caf740(void)

void FUN_148caf740(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148caf80e FUN_148caf80e body=59 status=ok
// SIG undefined FUN_148caf80e(void)

undefined8 FUN_148caf80e(longlong *param_1)

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



// FUNCTION 148caf8ae FUN_148caf8ae body=29 status=ok
// SIG undefined FUN_148caf8ae(void)

undefined8 FUN_148caf8ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148caf8cc FUN_148caf8cc body=55 status=ok
// SIG undefined FUN_148caf8cc(void)

void FUN_148caf8cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf798 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf798 = FUN_140002ddd(FUN_146612ab5,uVar1,L"PlaceCarryableObjective_CarryableSpawnData")
    ;
  }
  return;
}



// FUNCTION 148caf99c FUN_148caf99c body=59 status=ok
// SIG undefined FUN_148caf99c(void)

undefined8 FUN_148caf99c(longlong *param_1)

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



// FUNCTION 148cafa30 FUN_148cafa30 body=55 status=ok
// SIG undefined FUN_148cafa30(void)

void FUN_148cafa30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf7b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf7b0 =
         FUN_140002ddd(FUN_146612b4d,uVar1,
                       L"PlaceCarryableObjective_CarryableSpawnData_BasicDispenser");
  }
  return;
}



// FUNCTION 148cafafa FUN_148cafafa body=59 status=ok
// SIG undefined FUN_148cafafa(void)

undefined8 FUN_148cafafa(longlong *param_1)

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



// FUNCTION 148cafb9a FUN_148cafb9a body=55 status=ok
// SIG undefined FUN_148cafb9a(void)

void FUN_148cafb9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf7c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf7c8 =
         FUN_140002ddd(FUN_146612be3,uVar1,L"PlaceCarryableObjective_CarryableSpawnData_EnemyDrop");
  }
  return;
}



// FUNCTION 148cafc82 FUN_148cafc82 body=59 status=ok
// SIG undefined FUN_148cafc82(void)

undefined8 FUN_148cafc82(longlong *param_1)

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



// FUNCTION 148cafcce FUN_148cafcce body=38 status=ok
// SIG undefined FUN_148cafcce(void)

void FUN_148cafcce(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_148cafd32(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148cafd32 FUN_148cafd32 body=76 status=ok
// SIG undefined FUN_148cafd32(void)

void FUN_148cafd32(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b911080;
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
  FUN_1401bee6a(param_1);
  return;
}



// FUNCTION 148cafde6 FUN_148cafde6 body=75 status=ok
// SIG undefined FUN_148cafde6(void)

undefined1 FUN_148cafde6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140d02432(param_2,param_3);
    FUN_140d02432(param_2 + 0x50,param_3 + 0x50);
    param_2 = param_2 + 0xa0;
    param_3 = param_3 + 0xa0;
  }
  return 1;
}



// FUNCTION 148cafe5a FUN_148cafe5a body=59 status=ok
// SIG undefined FUN_148cafe5a(void)

undefined8 FUN_148cafe5a(longlong *param_1)

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



// FUNCTION 148caff96 FUN_148caff96 body=81 status=ok
// SIG undefined FUN_148caff96(void)

undefined1 FUN_148caff96(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
    do {
      *(undefined1 *)(param_2 + -0x58) = *(undefined1 *)(param_3 + -0x58);
      FUN_140d02432(param_2 + -0x50,param_3 + -0x50);
      FUN_148cb00e2(param_2,param_3);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cb0010 FUN_148cb0010 body=59 status=ok
// SIG undefined FUN_148cb0010(void)

undefined8 FUN_148cb0010(longlong *param_1)

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



// FUNCTION 148cb0056 FUN_148cb0056 body=48 status=ok
// SIG undefined FUN_148cb0056(void)

void FUN_148cb0056(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b9113b0;
    if (param_2[0xc] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 148cb00e2 FUN_148cb00e2 body=79 status=ok
// SIG undefined FUN_148cb00e2(void)

undefined8 * FUN_148cb00e2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148cb0132(param_1,iVar1);
      FUN_148cb01a5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148cb0132 FUN_148cb0132 body=115 status=ok
// SIG undefined FUN_148cb0132(void)

void FUN_148cb0132(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148cb01a5 FUN_148cb01a5 body=60 status=ok
// SIG undefined FUN_148cb01a5(void)

void FUN_148cb01a5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148cb01e2(param_1,param_2);
    param_1 = param_1 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return;
}



// FUNCTION 148cb01e2 FUN_148cb01e2 body=163 status=ok
// SIG undefined FUN_148cb01e2(void)

undefined4 * FUN_148cb01e2(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  FUN_144a7f96e(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  FUN_144a7f96e(param_1 + 0x16,param_2 + 0x16);
  uVar1 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x22] = param_2[0x22];
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = param_2[0x26];
  return param_1;
}



// FUNCTION 148cb02cc FUN_148cb02cc body=59 status=ok
// SIG undefined FUN_148cb02cc(void)

undefined8 FUN_148cb02cc(longlong *param_1)

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



// FUNCTION 148cb0318 FUN_148cb0318 body=38 status=ok
// SIG undefined FUN_148cb0318(void)

void FUN_148cb0318(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_1461e9818(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 148cb03b4 FUN_148cb03b4 body=75 status=ok
// SIG undefined FUN_148cb03b4(void)

void FUN_148cb03b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1442077f0(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb042f FUN_148cb042f body=66 status=ok
// SIG undefined FUN_148cb042f(void)

void FUN_148cb042f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
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



// FUNCTION 148cb0472 FUN_148cb0472 body=96 status=ok
// SIG undefined FUN_148cb0472(void)

void FUN_148cb0472(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbbfd30);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb04d4 FUN_148cb04d4 body=242 status=ok
// SIG undefined FUN_148cb04d4(void)

void FUN_148cb04d4(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x6c8))(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb05c8 FUN_148cb05c8 body=238 status=ok
// SIG undefined FUN_148cb05c8(void)

void FUN_148cb05c8(undefined8 param_1,longlong param_2)

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
  FUN_148d642ea(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb06c8 FUN_148cb06c8 body=45 status=ok
// SIG undefined FUN_148cb06c8(void)

longlong FUN_148cb06c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb06f6 FUN_148cb06f6 body=45 status=ok
// SIG undefined FUN_148cb06f6(void)

longlong FUN_148cb06f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0724 FUN_148cb0724 body=45 status=ok
// SIG undefined FUN_148cb0724(void)

longlong FUN_148cb0724(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0752 FUN_148cb0752 body=45 status=ok
// SIG undefined FUN_148cb0752(void)

longlong FUN_148cb0752(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0780 FUN_148cb0780 body=48 status=ok
// SIG undefined FUN_148cb0780(void)

longlong FUN_148cb0780(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb07b0 FUN_148cb07b0 body=48 status=ok
// SIG undefined FUN_148cb07b0(void)

longlong FUN_148cb07b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb07e0 FUN_148cb07e0 body=48 status=ok
// SIG undefined FUN_148cb07e0(void)

longlong FUN_148cb07e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0810 FUN_148cb0810 body=48 status=ok
// SIG undefined FUN_148cb0810(void)

longlong FUN_148cb0810(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0840 FUN_148cb0840 body=48 status=ok
// SIG undefined FUN_148cb0840(void)

longlong FUN_148cb0840(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0870 FUN_148cb0870 body=48 status=ok
// SIG undefined FUN_148cb0870(void)

longlong FUN_148cb0870(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb08a0 FUN_148cb08a0 body=48 status=ok
// SIG undefined FUN_148cb08a0(void)

longlong FUN_148cb08a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb08d0 FUN_148cb08d0 body=48 status=ok
// SIG undefined FUN_148cb08d0(void)

longlong FUN_148cb08d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0900 FUN_148cb0900 body=48 status=ok
// SIG undefined FUN_148cb0900(void)

longlong FUN_148cb0900(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0930 FUN_148cb0930 body=48 status=ok
// SIG undefined FUN_148cb0930(void)

longlong FUN_148cb0930(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0960 FUN_148cb0960 body=48 status=ok
// SIG undefined FUN_148cb0960(void)

longlong FUN_148cb0960(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0990 FUN_148cb0990 body=48 status=ok
// SIG undefined FUN_148cb0990(void)

longlong FUN_148cb0990(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb09c0 FUN_148cb09c0 body=48 status=ok
// SIG undefined FUN_148cb09c0(void)

longlong FUN_148cb09c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb09f0 FUN_148cb09f0 body=48 status=ok
// SIG undefined FUN_148cb09f0(void)

longlong FUN_148cb09f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0a20 FUN_148cb0a20 body=48 status=ok
// SIG undefined FUN_148cb0a20(void)

longlong FUN_148cb0a20(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0a50 FUN_148cb0a50 body=48 status=ok
// SIG undefined FUN_148cb0a50(void)

longlong FUN_148cb0a50(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0a80 FUN_148cb0a80 body=48 status=ok
// SIG undefined FUN_148cb0a80(void)

longlong FUN_148cb0a80(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0ab0 FUN_148cb0ab0 body=48 status=ok
// SIG undefined FUN_148cb0ab0(void)

longlong FUN_148cb0ab0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0ae0 FUN_148cb0ae0 body=48 status=ok
// SIG undefined FUN_148cb0ae0(void)

longlong FUN_148cb0ae0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0b10 FUN_148cb0b10 body=48 status=ok
// SIG undefined FUN_148cb0b10(void)

longlong FUN_148cb0b10(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0b40 FUN_148cb0b40 body=48 status=ok
// SIG undefined FUN_148cb0b40(void)

longlong FUN_148cb0b40(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0b70 FUN_148cb0b70 body=48 status=ok
// SIG undefined FUN_148cb0b70(void)

longlong FUN_148cb0b70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0ba0 FUN_148cb0ba0 body=48 status=ok
// SIG undefined FUN_148cb0ba0(void)

longlong FUN_148cb0ba0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0bd0 FUN_148cb0bd0 body=48 status=ok
// SIG undefined FUN_148cb0bd0(void)

longlong FUN_148cb0bd0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0c00 FUN_148cb0c00 body=48 status=ok
// SIG undefined FUN_148cb0c00(void)

longlong FUN_148cb0c00(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0c30 FUN_148cb0c30 body=48 status=ok
// SIG undefined FUN_148cb0c30(void)

longlong FUN_148cb0c30(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0c60 FUN_148cb0c60 body=48 status=ok
// SIG undefined FUN_148cb0c60(void)

longlong FUN_148cb0c60(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0c90 FUN_148cb0c90 body=48 status=ok
// SIG undefined FUN_148cb0c90(void)

longlong FUN_148cb0c90(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0cc0 FUN_148cb0cc0 body=48 status=ok
// SIG undefined FUN_148cb0cc0(void)

longlong FUN_148cb0cc0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0cf0 FUN_148cb0cf0 body=45 status=ok
// SIG undefined FUN_148cb0cf0(void)

longlong FUN_148cb0cf0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c2c43c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0d1e FUN_148cb0d1e body=57 status=ok
// SIG undefined FUN_148cb0d1e(void)

void FUN_148cb0d1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfcd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfcd8 = FUN_140002ddd(FUN_146614521,uVar1,L"RepairKitClassData");
  }
  return;
}



// FUNCTION 148cb0d68 FUN_148cb0d68 body=48 status=ok
// SIG undefined FUN_148cb0d68(void)

longlong FUN_148cb0d68(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_145d73182(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0da0 FUN_148cb0da0 body=48 status=ok
// SIG undefined FUN_148cb0da0(void)

longlong FUN_148cb0da0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_145d73182(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0dd8 FUN_148cb0dd8 body=48 status=ok
// SIG undefined FUN_148cb0dd8(void)

longlong FUN_148cb0dd8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_145d73182(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0e20 FUN_148cb0e20 body=48 status=ok
// SIG undefined FUN_148cb0e20(void)

longlong FUN_148cb0e20(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x530;
  FUN_145d73182(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0e58 FUN_148cb0e58 body=48 status=ok
// SIG undefined FUN_148cb0e58(void)

longlong FUN_148cb0e58(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x538;
  FUN_145d73182(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0e90 FUN_148cb0e90 body=48 status=ok
// SIG undefined FUN_148cb0e90(void)

longlong FUN_148cb0e90(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x540;
  FUN_145d73182(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0ec8 FUN_148cb0ec8 body=48 status=ok
// SIG undefined FUN_148cb0ec8(void)

longlong FUN_148cb0ec8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c0;
  FUN_145d73182(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0f08 FUN_148cb0f08 body=48 status=ok
// SIG undefined FUN_148cb0f08(void)

longlong FUN_148cb0f08(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c8;
  FUN_145d73182(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0f40 FUN_148cb0f40 body=48 status=ok
// SIG undefined FUN_148cb0f40(void)

longlong FUN_148cb0f40(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d0;
  FUN_145d73182(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0f88 FUN_148cb0f88 body=48 status=ok
// SIG undefined FUN_148cb0f88(void)

longlong FUN_148cb0f88(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d8;
  FUN_145d73182(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb0ff6 FUN_148cb0ff6 body=48 status=ok
// SIG undefined FUN_148cb0ff6(void)

longlong FUN_148cb0ff6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8e0;
  FUN_145d73182(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb1074 FUN_148cb1074 body=63 status=ok
// SIG undefined FUN_148cb1074(void)

undefined1 FUN_148cb1074(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f10e(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 148cb10dc FUN_148cb10dc body=59 status=ok
// SIG undefined FUN_148cb10dc(void)

undefined8 FUN_148cb10dc(longlong *param_1)

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



// FUNCTION 148cb1128 FUN_148cb1128 body=38 status=ok
// SIG undefined FUN_148cb1128(void)

void FUN_148cb1128(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 148cb11a6 FUN_148cb11a6 body=48 status=ok
// SIG undefined FUN_148cb11a6(void)

void FUN_148cb11a6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b918ba0;
  return;
}



// FUNCTION 148cb11d6 FUN_148cb11d6 body=32 status=ok
// SIG undefined FUN_148cb11d6(void)

void FUN_148cb11d6(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b918ba0;
  return;
}



// FUNCTION 148cb1250 FUN_148cb1250 body=59 status=ok
// SIG undefined FUN_148cb1250(void)

undefined8 FUN_148cb1250(longlong *param_1)

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



// FUNCTION 148cb129c FUN_148cb129c body=63 status=ok
// SIG undefined FUN_148cb129c(void)

void FUN_148cb129c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14b918ba0;
    if (param_2[8] != 0) {
      FUN_140872868(param_2);
    }
    FUN_140639928(param_2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 148cb132a FUN_148cb132a body=66 status=ok
// SIG undefined FUN_148cb132a(void)

undefined8 * FUN_148cb132a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b918ba0;
  if (param_1[8] != 0) {
    FUN_140872868(param_1);
  }
  FUN_140639928(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb136c FUN_148cb136c body=55 status=ok
// SIG undefined FUN_148cb136c(void)

void FUN_148cb136c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf938 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf938 = FUN_140002ddd(FUN_146613641,uVar1,L"PhysicsObjectBodyState");
  }
  return;
}



// FUNCTION 148cb13a4 FUN_148cb13a4 body=55 status=ok
// SIG undefined FUN_148cb13a4(void)

void FUN_148cb13a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf908 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf908 = FUN_140002ddd(FUN_146613537,uVar1,L"PhysicsObjectBodySettings");
  }
  return;
}



// FUNCTION 148cb1408 FUN_148cb1408 body=63 status=ok
// SIG undefined FUN_148cb1408(void)

undefined1 FUN_148cb1408(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    param_3 = param_3 + 0x458;
    param_2 = param_2 + 0x458;
  }
  return 1;
}



// FUNCTION 148cb1470 FUN_148cb1470 body=59 status=ok
// SIG undefined FUN_148cb1470(void)

undefined8 FUN_148cb1470(longlong *param_1)

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



// FUNCTION 148cb14bc FUN_148cb14bc body=38 status=ok
// SIG undefined FUN_148cb14bc(void)

void FUN_148cb14bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x458) == '\x01') {
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x458) = 0;
  }
  return;
}



// FUNCTION 148cb154e FUN_148cb154e body=63 status=ok
// SIG undefined FUN_148cb154e(void)

undefined1 FUN_148cb154e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cb165c(param_2,param_3);
    param_3 = param_3 + 0x4f8;
    param_2 = param_2 + 0x4f8;
  }
  return 1;
}



// FUNCTION 148cb15b6 FUN_148cb15b6 body=59 status=ok
// SIG undefined FUN_148cb15b6(void)

undefined8 FUN_148cb15b6(longlong *param_1)

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



// FUNCTION 148cb1602 FUN_148cb1602 body=38 status=ok
// SIG undefined FUN_148cb1602(void)

void FUN_148cb1602(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4f8) == '\x01') {
    FUN_148cb1756(param_2);
    *(undefined1 *)(param_2 + 0x4f8) = 0;
  }
  return;
}



// FUNCTION 148cb165c FUN_148cb165c body=248 status=ok
// SIG undefined FUN_148cb165c(void)

longlong FUN_148cb165c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_148b897b2();
  *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(param_2 + 0x458);
  *(undefined1 *)(param_1 + 0x460) = *(undefined1 *)(param_2 + 0x460);
  *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(param_2 + 0x468);
  uVar1 = *(undefined4 *)(param_2 + 0x474);
  uVar2 = *(undefined4 *)(param_2 + 0x478);
  uVar3 = *(undefined4 *)(param_2 + 0x47c);
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x470);
  *(undefined4 *)(param_1 + 0x474) = uVar1;
  *(undefined4 *)(param_1 + 0x478) = uVar2;
  *(undefined4 *)(param_1 + 0x47c) = uVar3;
  FUN_144a787a6(param_1 + 0x480,param_2 + 0x480);
  FUN_144a7bb84(param_1 + 0x490,param_2 + 0x490);
  *(undefined8 *)(param_1 + 0x4a8) = *(undefined8 *)(param_2 + 0x4a8);
  *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(param_2 + 0x4b0);
  uVar1 = *(undefined4 *)(param_2 + 0x4bc);
  uVar2 = *(undefined4 *)(param_2 + 0x4c0);
  uVar3 = *(undefined4 *)(param_2 + 0x4c4);
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_2 + 0x4b8);
  *(undefined4 *)(param_1 + 0x4bc) = uVar1;
  *(undefined4 *)(param_1 + 0x4c0) = uVar2;
  *(undefined4 *)(param_1 + 0x4c4) = uVar3;
  FUN_144a787a6(param_1 + 0x4c8,param_2 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_2 + 0x4d8);
  if ((*(longlong *)(param_1 + 0x4e0) != *(longlong *)(param_2 + 0x4e0)) ||
     (*(int *)(param_1 + 0x4e8) != *(int *)(param_2 + 0x4e8))) {
    *(longlong *)(param_1 + 0x4e0) = *(longlong *)(param_2 + 0x4e0);
    *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
    *(undefined8 *)(param_1 + 0x4f0) = 0;
  }
  return param_1;
}



// FUNCTION 148cb1756 FUN_148cb1756 body=144 status=ok
// SIG undefined FUN_148cb1756(void)

void FUN_148cb1756(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b91ce20;
  if (param_1[0x99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b5dfa60;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_14075386c(param_1 + 0x81);
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  return;
}



// FUNCTION 148cb1876 FUN_148cb1876 body=59 status=ok
// SIG undefined FUN_148cb1876(void)

undefined8 FUN_148cb1876(longlong *param_1)

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



// FUNCTION 148cb1916 FUN_148cb1916 body=29 status=ok
// SIG undefined FUN_148cb1916(void)

undefined8 FUN_148cb1916(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb1934 FUN_148cb1934 body=55 status=ok
// SIG undefined FUN_148cb1934(void)

void FUN_148cb1934(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf9e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf9e0 = FUN_140002ddd(FUN_146613873,uVar1,L"GbxContextParam_PlayerLuck_LevelOverride");
  }
  return;
}



// FUNCTION 148cb198a FUN_148cb198a body=110 status=ok
// SIG undefined FUN_148cb198a(void)

undefined8 FUN_148cb198a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
    do {
      FUN_140d02432(param_2 + -0xa0,param_3 + -0xa0);
      FUN_140d02432(param_2 + -0x50,param_3 + -0x50);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0xf8;
      param_2 = param_2 + 0xf8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cb1a20 FUN_148cb1a20 body=59 status=ok
// SIG undefined FUN_148cb1a20(void)

undefined8 FUN_148cb1a20(longlong *param_1)

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



// FUNCTION 148cb1b1e FUN_148cb1b1e body=62 status=ok
// SIG undefined FUN_148cb1b1e(void)

undefined1 FUN_148cb1b1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1465a9244(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cb1b84 FUN_148cb1b84 body=59 status=ok
// SIG undefined FUN_148cb1b84(void)

undefined8 FUN_148cb1b84(longlong *param_1)

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



// FUNCTION 148cb1c24 FUN_148cb1c24 body=55 status=ok
// SIG undefined FUN_148cb1c24(void)

void FUN_148cb1c24(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfa68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfa68 = FUN_140002ddd(FUN_14661399f,uVar1,L"PlayerCountValueResolver");
  }
  return;
}



// FUNCTION 148cb1d00 FUN_148cb1d00 body=59 status=ok
// SIG undefined FUN_148cb1d00(void)

undefined8 FUN_148cb1d00(longlong *param_1)

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



// FUNCTION 148cb1e00 FUN_148cb1e00 body=59 status=ok
// SIG undefined FUN_148cb1e00(void)

undefined8 FUN_148cb1e00(longlong *param_1)

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



// FUNCTION 148cb1e46 FUN_148cb1e46 body=48 status=ok
// SIG undefined FUN_148cb1e46(void)

void FUN_148cb1e46(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14b919840;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148cb1eb8 FUN_148cb1eb8 body=55 status=ok
// SIG undefined FUN_148cb1eb8(void)

void FUN_148cb1eb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfa98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfa98 = FUN_140002ddd(FUN_146613acb,uVar1,L"PlayersInVolumeValueResolver");
  }
  return;
}



// FUNCTION 148cb1f68 FUN_148cb1f68 body=59 status=ok
// SIG undefined FUN_148cb1f68(void)

undefined8 FUN_148cb1f68(longlong *param_1)

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



// FUNCTION 148cb20f8 FUN_148cb20f8 body=59 status=ok
// SIG undefined FUN_148cb20f8(void)

undefined8 FUN_148cb20f8(longlong *param_1)

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



// FUNCTION 148cb2208 FUN_148cb2208 body=59 status=ok
// SIG undefined FUN_148cb2208(void)

undefined8 FUN_148cb2208(longlong *param_1)

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



// FUNCTION 148cb22e4 FUN_148cb22e4 body=76 status=ok
// SIG undefined FUN_148cb22e4(void)

undefined8 FUN_148cb22e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined4 *)(param_2 + -9) = *(undefined4 *)(param_3 + -9);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_148cb240e(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cb2358 FUN_148cb2358 body=59 status=ok
// SIG undefined FUN_148cb2358(void)

undefined8 FUN_148cb2358(longlong *param_1)

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



// FUNCTION 148cb239e FUN_148cb239e body=38 status=ok
// SIG undefined FUN_148cb239e(void)

void FUN_148cb239e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148cb240e FUN_148cb240e body=79 status=ok
// SIG undefined FUN_148cb240e(void)

undefined8 * FUN_148cb240e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148cb245e(param_1,iVar1);
      FUN_148cb24d1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148cb245e FUN_148cb245e body=115 status=ok
// SIG undefined FUN_148cb245e(void)

void FUN_148cb245e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148cb24d1 FUN_148cb24d1 body=84 status=ok
// SIG undefined FUN_148cb24d1(void)

void FUN_148cb24d1(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = 0;
    do {
      *(undefined8 *)(param_1 + lVar8) = *(undefined8 *)(param_2 + lVar8);
      *(undefined4 *)(param_1 + 8 + lVar8) = *(undefined4 *)(param_2 + 8 + lVar8);
      *(undefined8 *)(param_1 + 0x10 + lVar8) = 0;
      puVar1 = (undefined8 *)(param_2 + 0x18 + lVar8);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x28 + lVar8);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(param_2 + 0x38 + lVar8);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + 0x18 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(param_1 + 0x28 + lVar8);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)(param_1 + 0x38 + lVar8);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(undefined8 *)(param_1 + 0x48 + lVar8) = *(undefined8 *)(param_2 + 0x48 + lVar8);
      lVar8 = lVar8 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148cb259c FUN_148cb259c body=59 status=ok
// SIG undefined FUN_148cb259c(void)

undefined8 FUN_148cb259c(longlong *param_1)

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



// FUNCTION 148cb2666 FUN_148cb2666 body=54 status=ok
// SIG undefined FUN_148cb2666(void)

undefined1 FUN_148cb2666(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cb277a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148cb26c4 FUN_148cb26c4 body=59 status=ok
// SIG undefined FUN_148cb26c4(void)

undefined8 FUN_148cb26c4(longlong *param_1)

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



// FUNCTION 148cb270a FUN_148cb270a body=37 status=ok
// SIG undefined FUN_148cb270a(void)

void FUN_148cb270a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148cb277a FUN_148cb277a body=89 status=ok
// SIG undefined FUN_148cb277a(void)

undefined8 * FUN_148cb277a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148cb27d4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 148cb27d4 FUN_148cb27d4 body=115 status=ok
// SIG undefined FUN_148cb27d4(void)

void FUN_148cb27d4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148cb2866 FUN_148cb2866 body=63 status=ok
// SIG undefined FUN_148cb2866(void)

undefined1 FUN_148cb2866(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cb2ace(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}


