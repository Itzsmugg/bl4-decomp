// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14873ee54 FUN_14873ee54 body=54 status=ok
// SIG undefined FUN_14873ee54(void)

undefined1 FUN_14873ee54(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14873ef68(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 14873eeb2 FUN_14873eeb2 body=59 status=ok
// SIG undefined FUN_14873eeb2(void)

undefined8 FUN_14873eeb2(longlong *param_1)

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



// FUNCTION 14873eef8 FUN_14873eef8 body=34 status=ok
// SIG undefined FUN_14873eef8(void)

void FUN_14873eef8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_145c60142(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14873ef68 FUN_14873ef68 body=114 status=ok
// SIG undefined FUN_14873ef68(void)

longlong FUN_14873ef68(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  uVar7 = *(undefined4 *)(param_2 + 0x18);
  uVar8 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 0x18) = uVar7;
  *(undefined4 *)(param_1 + 0x1c) = uVar8;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar4 = *(longlong *)(param_2 + 0x38);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(longlong *)(param_1 + 0x38) = lVar4;
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



// FUNCTION 14873f060 FUN_14873f060 body=59 status=ok
// SIG undefined FUN_14873f060(void)

undefined8 FUN_14873f060(longlong *param_1)

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



// FUNCTION 14873f0ac FUN_14873f0ac body=38 status=ok
// SIG undefined FUN_14873f0ac(void)

void FUN_14873f0ac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_14873f120(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14873f120 FUN_14873f120 body=107 status=ok
// SIG undefined FUN_14873f120(void)

void FUN_14873f120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2a5c90;
  param_1[0xe] = 0;
  param_1[0xf] = 0xffffffffffffffff;
  if ((param_1[0xd] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xd] + 0x50));
  }
  if ((param_1[6] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[6] + 0x50));
    return;
  }
  return;
}



// FUNCTION 14873f1e4 FUN_14873f1e4 body=62 status=ok
// SIG undefined FUN_14873f1e4(void)

undefined1 FUN_14873f1e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141818ba6(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873f24a FUN_14873f24a body=59 status=ok
// SIG undefined FUN_14873f24a(void)

undefined8 FUN_14873f24a(longlong *param_1)

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



// FUNCTION 14873f2ea FUN_14873f2ea body=34 status=ok
// SIG undefined FUN_14873f2ea(void)

undefined8 FUN_14873f2ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14873f30c FUN_14873f30c body=55 status=ok
// SIG undefined FUN_14873f30c(void)

void FUN_14873f30c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67a58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67a58 = FUN_140002ddd(FUN_146517ccb,uVar1,L"GbxSymphonicAmbientAudioAction_SetSwitch");
  }
  return;
}



// FUNCTION 14873f344 FUN_14873f344 body=77 status=ok
// SIG undefined FUN_14873f344(void)

void FUN_14873f344(undefined8 param_1,undefined8 *param_2)

{
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b2a5fd0;
  FUN_144928b90(param_2 + 1,0);
  *(undefined1 *)(param_2 + 8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 14873f392 FUN_14873f392 body=54 status=ok
// SIG undefined FUN_14873f392(void)

void FUN_14873f392(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b2a5fd0;
  FUN_144928b90(param_2 + 1,0);
  *(undefined1 *)(param_2 + 8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 14873f3ec FUN_14873f3ec body=113 status=ok
// SIG undefined FUN_14873f3ec(void)

undefined8 FUN_14873f3ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      *(undefined4 *)(param_2 + 0x10 + lVar6) = *(undefined4 *)(param_3 + 0x10 + lVar6);
      *(undefined8 *)(param_2 + 8 + lVar6) = *(undefined8 *)(param_3 + 8 + lVar6);
      FUN_1447715ec(param_2 + 0x18 + lVar6,param_3 + 0x18 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x40 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x40 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873f486 FUN_14873f486 body=59 status=ok
// SIG undefined FUN_14873f486(void)

undefined8 FUN_14873f486(longlong *param_1)

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



// FUNCTION 14873f4cc FUN_14873f4cc body=43 status=ok
// SIG undefined FUN_14873f4cc(void)

void FUN_14873f4cc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b2a5fd0;
    FUN_144a73aae(param_2 + 3);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 14873f546 FUN_14873f546 body=57 status=ok
// SIG undefined FUN_14873f546(void)

undefined8 * FUN_14873f546(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2a5fd0;
  FUN_144a73aae(param_1 + 3);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14873f580 FUN_14873f580 body=55 status=ok
// SIG undefined FUN_14873f580(void)

void FUN_14873f580(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67a70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67a70 = FUN_140002ddd(FUN_146517d61,uVar1,L"GbxSymphonicAmbientAudioAction_SetFact");
  }
  return;
}



// FUNCTION 14873f64c FUN_14873f64c body=59 status=ok
// SIG undefined FUN_14873f64c(void)

undefined8 FUN_14873f64c(longlong *param_1)

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



// FUNCTION 14873f6ec FUN_14873f6ec body=34 status=ok
// SIG undefined FUN_14873f6ec(void)

undefined8 FUN_14873f6ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14873f70e FUN_14873f70e body=55 status=ok
// SIG undefined FUN_14873f70e(void)

void FUN_14873f70e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67a88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67a88 = FUN_140002ddd(FUN_146517df7,uVar1,L"GbxSymphonicAmbientAudioAction_Hold");
  }
  return;
}



// FUNCTION 14873f780 FUN_14873f780 body=95 status=ok
// SIG undefined FUN_14873f780(void)

void FUN_14873f780(undefined8 param_1,void *param_2)

{
  undefined1 auStack_138 [32];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  memcpy(local_118,param_2,0x100);
  FUN_1447cd2ec(param_1,local_118);
  if ((local_18 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873f802 FUN_14873f802 body=158 status=ok
// SIG undefined FUN_14873f802(void)

void FUN_14873f802(undefined8 param_1,longlong param_2)

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
  FUN_1488141ae(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873f8a2 FUN_14873f8a2 body=156 status=ok
// SIG undefined FUN_14873f8a2(void)

void FUN_14873f8a2(undefined8 param_1,longlong param_2)

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
  FUN_148814a4a(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873fa36 FUN_14873fa36 body=152 status=ok
// SIG undefined FUN_14873fa36(void)

void FUN_14873fa36(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x30))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873fad0 FUN_14873fad0 body=152 status=ok
// SIG undefined FUN_14873fad0(void)

void FUN_14873fad0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x48))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873fb6a FUN_14873fb6a body=157 status=ok
// SIG undefined FUN_14873fb6a(void)

void FUN_14873fb6a(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x40))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873fcec FUN_14873fcec body=75 status=ok
// SIG undefined FUN_14873fcec(void)

void FUN_14873fcec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1418b0d48(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873fd50 FUN_14873fd50 body=45 status=ok
// SIG undefined FUN_14873fd50(void)

longlong FUN_14873fd50(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d353da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14873fdaa FUN_14873fdaa body=41 status=ok
// SIG undefined FUN_14873fdaa(void)

void FUN_14873fdaa(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/StateMachine/GbxTrickAnimNotify_StateMachineAction.h"
                ,0x14,L"Pure virtual not implemented (%s)",
                L"UGbxTrickAnimNotify_StateMachineAction::OnNotify");
  return;
}



// FUNCTION 14873fe40 FUN_14873fe40 body=59 status=ok
// SIG undefined FUN_14873fe40(void)

undefined8 FUN_14873fe40(longlong *param_1)

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



// FUNCTION 14873fee0 FUN_14873fee0 body=29 status=ok
// SIG undefined FUN_14873fee0(void)

undefined8 FUN_14873fee0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14873fefe FUN_14873fefe body=55 status=ok
// SIG undefined FUN_14873fefe(void)

void FUN_14873fefe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67aa0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67aa0 = FUN_140002ddd(FUN_146518695,uVar1,L"GbxSymphonicAmbientAudioCondition");
  }
  return;
}



// FUNCTION 14873ff3a FUN_14873ff3a body=56 status=ok
// SIG undefined FUN_14873ff3a(void)

void FUN_14873ff3a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014873ff67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14873ffdc FUN_14873ffdc body=75 status=ok
// SIG undefined FUN_14873ffdc(void)

undefined1 FUN_14873ffdc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_1400fce78(param_2 + -0x10,param_3 + -0x10);
      FUN_1459855b4(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148740050 FUN_148740050 body=59 status=ok
// SIG undefined FUN_148740050(void)

undefined8 FUN_148740050(longlong *param_1)

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



// FUNCTION 148740096 FUN_148740096 body=34 status=ok
// SIG undefined FUN_148740096(void)

void FUN_148740096(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_148740164(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148740106 FUN_148740106 body=38 status=ok
// SIG undefined FUN_148740106(void)

undefined8 FUN_148740106(undefined8 param_1,int param_2)

{
  FUN_148740164();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14874012c FUN_14874012c body=55 status=ok
// SIG undefined FUN_14874012c(void)

void FUN_14874012c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67ab8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67ab8 =
         FUN_140002ddd(FUN_14651872d,uVar1,L"GbxSymphonicAmbientAudioCondition_FactExpression");
  }
  return;
}



// FUNCTION 148740164 FUN_148740164 body=65 status=ok
// SIG undefined FUN_148740164(void)

void FUN_148740164(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2b3d90;
  FUN_1407e878c(param_1 + 3);
  FUN_1447cd778(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14874020e FUN_14874020e body=59 status=ok
// SIG undefined FUN_14874020e(void)

undefined8 FUN_14874020e(longlong *param_1)

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



// FUNCTION 1487402ae FUN_1487402ae body=29 status=ok
// SIG undefined FUN_1487402ae(void)

undefined8 FUN_1487402ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487402cc FUN_1487402cc body=55 status=ok
// SIG undefined FUN_1487402cc(void)

void FUN_1487402cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67ad0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67ad0 =
         FUN_140002ddd(FUN_1465187c3,uVar1,L"GbxSymphonicAmbientAudioCondition_ChildrenCanPlay");
  }
  return;
}



// FUNCTION 14874038a FUN_14874038a body=54 status=ok
// SIG undefined FUN_14874038a(void)

undefined1 FUN_14874038a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487404d4(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1487403e8 FUN_1487403e8 body=59 status=ok
// SIG undefined FUN_1487403e8(void)

undefined8 FUN_1487403e8(longlong *param_1)

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



// FUNCTION 14874042e FUN_14874042e body=32 status=ok
// SIG undefined FUN_14874042e(void)

void FUN_14874042e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140ed3afa(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14874049c FUN_14874049c body=55 status=ok
// SIG undefined FUN_14874049c(void)

void FUN_14874049c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67af0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67af0 = FUN_140002ddd(FUN_146518859,uVar1,L"GbxSymphonicAmbientAudioSection");
  }
  return;
}



// FUNCTION 1487404d4 FUN_1487404d4 body=150 status=ok
// SIG undefined FUN_1487404d4(void)

longlong FUN_1487404d4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_14874056a(param_1 + 0x20,param_2 + 0x20);
  FUN_1487405c8(param_1 + 0x30,param_2 + 0x30);
  FUN_148740626(param_1 + 0x40,param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(longlong *)(param_2 + 0x60);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(longlong *)(param_1 + 0x60) = lVar4;
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
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 14874056a FUN_14874056a body=93 status=ok
// SIG undefined FUN_14874056a(void)

undefined8 * FUN_14874056a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ed3c43(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148740684(param_1,iVar1);
      FUN_1487406f7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487405c8 FUN_1487405c8 body=93 status=ok
// SIG undefined FUN_1487405c8(void)

undefined8 * FUN_1487405c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ed3bad(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140ba2320(param_1,iVar1);
      FUN_140ba219a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148740626 FUN_148740626 body=93 status=ok
// SIG undefined FUN_148740626(void)

undefined8 * FUN_148740626(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ed3bf6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148740744(param_1,iVar1);
      FUN_1487407b7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148740684 FUN_148740684 body=115 status=ok
// SIG undefined FUN_148740684(void)

void FUN_148740684(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487406f7 FUN_1487406f7 body=76 status=ok
// SIG undefined FUN_1487406f7(void)

void FUN_1487406f7(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1401f3db8(param_1,param_2);
    param_1 = param_1 + 3;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148740744 FUN_148740744 body=115 status=ok
// SIG undefined FUN_148740744(void)

void FUN_148740744(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487407b7 FUN_1487407b7 body=76 status=ok
// SIG undefined FUN_1487407b7(void)

void FUN_1487407b7(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1401f3db8(param_1,param_2);
    param_1 = param_1 + 3;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1487408e2 FUN_1487408e2 body=63 status=ok
// SIG undefined FUN_1487408e2(void)

undefined1 FUN_1487408e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148740a70(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 14874094a FUN_14874094a body=59 status=ok
// SIG undefined FUN_14874094a(void)

undefined8 FUN_14874094a(longlong *param_1)

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



// FUNCTION 1487409f0 FUN_1487409f0 body=71 status=ok
// SIG undefined FUN_1487409f0(void)

undefined8 * FUN_1487409f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2b4220;
  FUN_140ed3afa(param_1 + 6);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148740a38 FUN_148740a38 body=55 status=ok
// SIG undefined FUN_148740a38(void)

void FUN_148740a38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67b08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67b08 = FUN_140002ddd(FUN_1465188ba,uVar1,L"GbxSymphonicAmbientAudioDef");
  }
  return;
}



// FUNCTION 148740a70 FUN_148740a70 body=87 status=ok
// SIG undefined FUN_148740a70(void)

longlong FUN_148740a70(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  if ((*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) ||
     (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20))) {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_1487404d4(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 148740ac8 FUN_148740ac8 body=68 status=ok
// SIG undefined FUN_148740ac8(void)

void FUN_148740ac8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x01') {
    *param_1 = &PTR_FUN_14b2b4220;
    FUN_140ed3afa(param_1 + 6);
    *param_1 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_1 + 1);
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}



// FUNCTION 148740b1e FUN_148740b1e body=32 status=ok
// SIG undefined FUN_148740b1e(void)

void FUN_148740b1e(undefined8 param_1,undefined8 *param_2)

{
  FUN_14126c416(param_2);
  *param_2 = &PTR_FUN_14b2b43d0;
  return;
}



// FUNCTION 148740b62 FUN_148740b62 body=74 status=ok
// SIG undefined FUN_148740b62(void)

undefined1 FUN_148740b62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f74370(param_2,param_3);
    *(undefined1 *)(param_2 + 0x300) = *(undefined1 *)(param_3 + 0x300);
    param_2 = param_2 + 0x310;
    param_3 = param_3 + 0x310;
  }
  return 1;
}



// FUNCTION 148740bd4 FUN_148740bd4 body=59 status=ok
// SIG undefined FUN_148740bd4(void)

undefined8 FUN_148740bd4(longlong *param_1)

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



// FUNCTION 148740c20 FUN_148740c20 body=38 status=ok
// SIG undefined FUN_148740c20(void)

void FUN_148740c20(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x310) == '\x01') {
    FUN_14060fc84(param_2);
    *(undefined1 *)(param_2 + 0x310) = 0;
  }
  return;
}



// FUNCTION 148740c94 FUN_148740c94 body=57 status=ok
// SIG undefined FUN_148740c94(void)

void FUN_148740c94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67b38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67b38 = FUN_140002ddd(FUN_146518949,uVar1,L"GbxSymphonicAmbientAudioProvider");
  }
  return;
}



// FUNCTION 148740cce FUN_148740cce body=39 status=ok
// SIG undefined FUN_148740cce(void)

void FUN_148740cce(undefined8 param_1,undefined8 *param_2)

{
  FUN_141355748(param_2);
  *param_2 = &PTR_FUN_14b2b45a0;
  *(undefined1 *)(param_2 + 0x29) = 7;
  return;
}



// FUNCTION 148740d0c FUN_148740d0c body=74 status=ok
// SIG undefined FUN_148740d0c(void)

undefined1 FUN_148740d0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f75384(param_2,param_3);
    *(undefined1 *)(param_2 + 0x148) = *(undefined1 *)(param_3 + 0x148);
    param_2 = param_2 + 0x150;
    param_3 = param_3 + 0x150;
  }
  return 1;
}



// FUNCTION 148740d7e FUN_148740d7e body=59 status=ok
// SIG undefined FUN_148740d7e(void)

undefined8 FUN_148740d7e(longlong *param_1)

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



// FUNCTION 148740dca FUN_148740dca body=38 status=ok
// SIG undefined FUN_148740dca(void)

void FUN_148740dca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x150) == '\x01') {
    FUN_1407f61d0(param_2);
    *(undefined1 *)(param_2 + 0x150) = 0;
  }
  return;
}



// FUNCTION 148740e3e FUN_148740e3e body=57 status=ok
// SIG undefined FUN_148740e3e(void)

void FUN_148740e3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67b50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67b50 = FUN_140002ddd(FUN_1465189df,uVar1,L"SymphonicAmbientAudioProviderDef");
  }
  return;
}



// FUNCTION 148740f12 FUN_148740f12 body=59 status=ok
// SIG undefined FUN_148740f12(void)

undefined8 FUN_148740f12(longlong *param_1)

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



// FUNCTION 148741046 FUN_148741046 body=59 status=ok
// SIG undefined FUN_148741046(void)

undefined8 FUN_148741046(longlong *param_1)

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



// FUNCTION 1487410e8 FUN_1487410e8 body=156 status=ok
// SIG undefined FUN_1487410e8(void)

void FUN_1487410e8(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0xd0);
  *(undefined8 *)((longlong)param_2 + 0x18) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 8) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x10) = uVar1;
  *(undefined1 *)((longlong)param_2 + 0x31) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = DAT_14c846508;
  uVar1 = DAT_14c846500;
  *(undefined8 *)((longlong)param_2 + 0x38) = DAT_14c8464f8;
  *(undefined8 *)((longlong)param_2 + 0x40) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x78) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x68) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x70) = uVar1;
  uVar1 = DAT_14c846500;
  *(undefined8 *)((longlong)param_2 + 0x88) = DAT_14c8464f8;
  *(undefined8 *)((longlong)param_2 + 0x90) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x98) = DAT_14c846508;
  uVar1 = DAT_14c846500;
  *(undefined8 *)((longlong)param_2 + 0xa8) = DAT_14c8464f8;
  *(undefined8 *)((longlong)param_2 + 0xb0) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0xb8) = DAT_14c846508;
  return;
}



// FUNCTION 14874124c FUN_14874124c body=68 status=ok
// SIG undefined FUN_14874124c(void)

undefined8 FUN_14874124c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xd0);
      lVar1 = lVar1 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487412b8 FUN_1487412b8 body=59 status=ok
// SIG undefined FUN_1487412b8(void)

undefined8 FUN_1487412b8(longlong *param_1)

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



// FUNCTION 148741384 FUN_148741384 body=63 status=ok
// SIG undefined FUN_148741384(void)

undefined1 FUN_148741384(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487414ba(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 1487413ec FUN_1487413ec body=59 status=ok
// SIG undefined FUN_1487413ec(void)

undefined8 FUN_1487413ec(longlong *param_1)

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



// FUNCTION 148741438 FUN_148741438 body=51 status=ok
// SIG undefined FUN_148741438(void)

void FUN_148741438(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_144a2da94(param_2 + 0xa8);
    FUN_144a2da94(param_2 + 0x70);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1487414ba FUN_1487414ba body=175 status=ok
// SIG undefined FUN_1487414ba(void)

undefined8 * FUN_1487414ba(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  lVar2 = param_2[3];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[3];
    }
  }
  param_1[3] = lVar2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = param_2[5];
  FUN_140e78ece(param_1 + 6,param_2 + 6);
  FUN_140e78ece(param_1 + 10,param_2 + 10);
  FUN_144983130(param_1 + 0xe,param_2 + 0xe);
  FUN_144983130(param_1 + 0x15,param_2 + 0x15);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xe6);
  param_1[0x1c] = param_2[0x1c];
  *(undefined8 *)((longlong)param_1 + 0xe6) = uVar1;
  return param_1;
}



// FUNCTION 148741598 FUN_148741598 body=63 status=ok
// SIG undefined FUN_148741598(void)

undefined1 FUN_148741598(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141251a4c(param_2,param_3);
    param_3 = param_3 + 0x150;
    param_2 = param_2 + 0x150;
  }
  return 1;
}



// FUNCTION 148741600 FUN_148741600 body=59 status=ok
// SIG undefined FUN_148741600(void)

undefined8 FUN_148741600(longlong *param_1)

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



// FUNCTION 14874164c FUN_14874164c body=38 status=ok
// SIG undefined FUN_14874164c(void)

void FUN_14874164c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x150) == '\x01') {
    FUN_14079c464(param_2);
    *(undefined1 *)(param_2 + 0x150) = 0;
  }
  return;
}



// FUNCTION 1487416e8 FUN_1487416e8 body=63 status=ok
// SIG undefined FUN_1487416e8(void)

undefined1 FUN_1487416e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_143c7424e(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148741750 FUN_148741750 body=59 status=ok
// SIG undefined FUN_148741750(void)

undefined8 FUN_148741750(longlong *param_1)

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



// FUNCTION 148741860 FUN_148741860 body=59 status=ok
// SIG undefined FUN_148741860(void)

undefined8 FUN_148741860(longlong *param_1)

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



// FUNCTION 148741902 FUN_148741902 body=124 status=ok
// SIG undefined FUN_148741902(void)

void FUN_148741902(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148741984 FUN_148741984 body=164 status=ok
// SIG undefined FUN_148741984(void)

void FUN_148741984(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_1489a646a(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148741a30 FUN_148741a30 body=165 status=ok
// SIG undefined FUN_148741a30(void)

void FUN_148741a30(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_1489a64b8(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148741ad6 FUN_148741ad6 body=163 status=ok
// SIG undefined FUN_148741ad6(void)

void FUN_148741ad6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_1489a6508(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148741b7a FUN_148741b7a body=175 status=ok
// SIG undefined FUN_148741b7a(void)

void FUN_148741b7a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1489a6556(param_1,&local_30,local_28);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148741c2a FUN_148741c2a body=175 status=ok
// SIG undefined FUN_148741c2a(void)

void FUN_148741c2a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1489a65b4(param_1,&local_30,local_28);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148741cda FUN_148741cda body=164 status=ok
// SIG undefined FUN_148741cda(void)

void FUN_148741cda(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_1489a6612(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148741d80 FUN_148741d80 body=183 status=ok
// SIG undefined FUN_148741d80(void)

void FUN_148741d80(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
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
  FUN_1489a6660(param_1,&local_40,local_28);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148741e38 FUN_148741e38 body=229 status=ok
// SIG undefined FUN_148741e38(void)

void FUN_148741e38(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1489a66f2(param_1,&local_38,local_28);
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



// FUNCTION 148741f1e FUN_148741f1e body=186 status=ok
// SIG undefined FUN_148741f1e(void)

void FUN_148741f1e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70 [9];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  FUN_1489a68d4(param_1,local_70,local_28);
  puVar2 = local_70;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148741fda FUN_148741fda body=183 status=ok
// SIG undefined FUN_148741fda(void)

void FUN_148741fda(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
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
  FUN_1489a6842(param_1,&local_40,local_28);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14874209e FUN_14874209e body=238 status=ok
// SIG undefined FUN_14874209e(void)

void FUN_14874209e(undefined8 param_1,longlong param_2)

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
  FUN_1489a5bc6(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148742194 FUN_148742194 body=241 status=ok
// SIG undefined FUN_148742194(void)

void FUN_148742194(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  FUN_1489a5c88(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148742286 FUN_148742286 body=238 status=ok
// SIG undefined FUN_148742286(void)

void FUN_148742286(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  FUN_1489a5d44(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148742376 FUN_148742376 body=237 status=ok
// SIG undefined FUN_148742376(void)

void FUN_148742376(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  FUN_1489a5dfe(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148742464 FUN_148742464 body=238 status=ok
// SIG undefined FUN_148742464(void)

void FUN_148742464(undefined8 param_1,longlong param_2)

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
  FUN_1489a5eb8(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148742554 FUN_148742554 body=238 status=ok
// SIG undefined FUN_148742554(void)

void FUN_148742554(undefined8 param_1,longlong param_2)

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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489a5f72(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148742644 FUN_148742644 body=238 status=ok
// SIG undefined FUN_148742644(void)

void FUN_148742644(undefined8 param_1,longlong param_2)

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
  FUN_1489a602c(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148742734 FUN_148742734 body=255 status=ok
// SIG undefined FUN_148742734(void)

void FUN_148742734(undefined8 param_1,longlong param_2)

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
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
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
  FUN_1489a60ee(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148742834 FUN_148742834 body=346 status=ok
// SIG undefined FUN_148742834(void)

void FUN_148742834(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_50 = (int)uStack_40;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,uStack_40 & 0xffffffff,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  FUN_1489a61b4(param_1,local_30,&local_58);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148742990 FUN_148742990 body=347 status=ok
// SIG undefined FUN_148742990(void)

void FUN_148742990(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8 [9];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_70._0_4_ = 0;
  local_70._4_1_ = 0;
  local_68 = 0xbf80000000000000;
  local_60 = 0xc4750000;
  local_5c = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = &local_70;
  puVar3 = local_b8;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1489a6390(param_1,local_28);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148742aec FUN_148742aec body=255 status=ok
// SIG undefined FUN_148742aec(void)

void FUN_148742aec(undefined8 param_1,longlong param_2)

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
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
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
  FUN_1489a62ca(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148742bf0 FUN_148742bf0 body=172 status=ok
// SIG undefined FUN_148742bf0(void)

void FUN_148742bf0(undefined8 param_1,longlong param_2)

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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489a73d4(plVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148742c9e FUN_148742c9e body=172 status=ok
// SIG undefined FUN_148742c9e(void)

void FUN_148742c9e(undefined8 param_1,longlong param_2)

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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489a7312(plVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148742d4c FUN_148742d4c body=402 status=ok
// SIG undefined FUN_148742d4c(void)

void FUN_148742d4c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489a7046(&local_40,local_20,local_28,local_30);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148742eec FUN_148742eec body=232 status=ok
// SIG undefined FUN_148742eec(void)

void FUN_148742eec(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1489a6fa6(local_20,local_21);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148742fd6 FUN_148742fd6 body=219 status=ok
// SIG undefined FUN_148742fd6(void)

void FUN_148742fd6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
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
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489a6f3c(local_18,local_19);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487430b2 FUN_1487430b2 body=230 status=ok
// SIG undefined FUN_1487430b2(void)

void FUN_1487430b2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  FUN_1489a6ed0(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487431a0 FUN_1487431a0 body=324 status=ok
// SIG undefined FUN_1487431a0(void)

void FUN_1487431a0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  FUN_1489a69e0(local_18,local_20,local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487432ec FUN_1487432ec body=319 status=ok
// SIG undefined FUN_1487432ec(void)

void FUN_1487432ec(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined1 local_19;
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
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
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
  FUN_1489a6b1c(local_18,local_19,local_20 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148743432 FUN_148743432 body=324 status=ok
// SIG undefined FUN_148743432(void)

void FUN_148743432(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  FUN_1489a6c58(local_18,local_20,local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14874357e FUN_14874357e body=319 status=ok
// SIG undefined FUN_14874357e(void)

void FUN_14874357e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined1 local_19;
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
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
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
  FUN_1489a6d94(local_18,local_19,local_20 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14874372a FUN_14874372a body=45 status=ok
// SIG undefined FUN_14874372a(void)

longlong FUN_14874372a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1408ee338(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148743762 FUN_148743762 body=45 status=ok
// SIG undefined FUN_148743762(void)

longlong FUN_148743762(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140bcae00(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148743790 FUN_148743790 body=45 status=ok
// SIG undefined FUN_148743790(void)

longlong FUN_148743790(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140f7164e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487437be FUN_1487437be body=45 status=ok
// SIG undefined FUN_1487437be(void)

longlong FUN_1487437be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1408ee338(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487437fa FUN_1487437fa body=45 status=ok
// SIG undefined FUN_1487437fa(void)

longlong FUN_1487437fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14117f406(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14874385a FUN_14874385a body=110 status=ok
// SIG undefined FUN_14874385a(void)

undefined1 FUN_14874385a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(param_3 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar3;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar4);
      *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(param_3 + 0x10 + lVar4);
      lVar4 = lVar4 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487438f4 FUN_1487438f4 body=59 status=ok
// SIG undefined FUN_1487438f4(void)

undefined8 FUN_1487438f4(longlong *param_1)

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



// FUNCTION 1487439d2 FUN_1487439d2 body=54 status=ok
// SIG undefined FUN_1487439d2(void)

undefined1 FUN_1487439d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148743ad0(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 148743a30 FUN_148743a30 body=59 status=ok
// SIG undefined FUN_148743a30(void)

undefined8 FUN_148743a30(longlong *param_1)

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



// FUNCTION 148743ad0 FUN_148743ad0 body=140 status=ok
// SIG undefined FUN_148743ad0(void)

undefined1 * FUN_148743ad0(undefined1 *param_1,undefined1 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  lVar2 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 8);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 8) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x10);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x10);
      bVar1 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x18);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x18);
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar2;
  param_1[0x20] = param_2[0x20];
  return param_1;
}



// FUNCTION 148743b5e FUN_148743b5e body=91 status=ok
// SIG undefined FUN_148743b5e(void)

void FUN_148743b5e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb0);
  *(undefined4 *)((longlong)param_2 + 0xb0) = 2;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_2 + 0xec) = 0;
  return;
}



// FUNCTION 148743c4e FUN_148743c4e body=63 status=ok
// SIG undefined FUN_148743c4e(void)

undefined1 FUN_148743c4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148743d76(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148743cb6 FUN_148743cb6 body=59 status=ok
// SIG undefined FUN_148743cb6(void)

undefined8 FUN_148743cb6(longlong *param_1)

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



// FUNCTION 148743d02 FUN_148743d02 body=38 status=ok
// SIG undefined FUN_148743d02(void)

void FUN_148743d02(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_14063ab46(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148743d76 FUN_148743d76 body=273 status=ok
// SIG undefined FUN_148743d76(void)

longlong * FUN_148743d76(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  FUN_148743e88(param_1 + 3,param_2 + 3);
  FUN_148743ed8(param_1 + 5,param_2 + 5);
  *(short *)(param_1 + 7) = (short)param_2[7];
  *(undefined1 *)((longlong)param_1 + 0x3a) = *(undefined1 *)((longlong)param_2 + 0x3a);
  FUN_148743f28(param_1 + 8,param_2 + 8);
  FUN_148743f28(param_1 + 10,param_2 + 10);
  FUN_148743f86(param_1 + 0xc,param_2 + 0xc);
  FUN_1447a122a(param_1 + 0x12,param_2 + 0x12);
  if (param_2 != param_1) {
    FUN_148744214(param_1 + 0x14,param_2 + 0x14);
    FUN_148744346(param_1 + 0x17,param_2 + 0x17);
  }
  FUN_140c19cf6(param_1 + 0x1a,param_2 + 0x1a);
  FUN_140c19cf6(param_1 + 0x1c,param_2 + 0x1c);
  return param_1;
}



// FUNCTION 148743e88 FUN_148743e88 body=79 status=ok
// SIG undefined FUN_148743e88(void)

undefined8 * FUN_148743e88(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148743fde(param_1,iVar1);
      FUN_148744040(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148743ed8 FUN_148743ed8 body=79 status=ok
// SIG undefined FUN_148743ed8(void)

undefined8 * FUN_148743ed8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148744092(param_1,iVar1);
      FUN_1487440f4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148743f28 FUN_148743f28 body=93 status=ok
// SIG undefined FUN_148743f28(void)

undefined8 * FUN_148743f28(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_144a07593(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148744150(param_1,iVar1);
      FUN_1448d5e0f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148743f86 FUN_148743f86 body=88 status=ok
// SIG undefined FUN_148743f86(void)

undefined8 * FUN_148743f86(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1487441b2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148743fde FUN_148743fde body=98 status=ok
// SIG undefined FUN_148743fde(void)

void FUN_148743fde(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148744040 FUN_148744040 body=82 status=ok
// SIG undefined FUN_148744040(void)

void FUN_148744040(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148744092 FUN_148744092 body=98 status=ok
// SIG undefined FUN_148744092(void)

void FUN_148744092(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1487440f4 FUN_1487440f4 body=92 status=ok
// SIG undefined FUN_1487440f4(void)

void FUN_1487440f4(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      lVar1 = *(longlong *)(param_2 + 8 + lVar3);
      *(longlong *)(param_1 + 8 + lVar3) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148744150 FUN_148744150 body=98 status=ok
// SIG undefined FUN_148744150(void)

void FUN_148744150(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1487441b2 FUN_1487441b2 body=98 status=ok
// SIG undefined FUN_1487441b2(void)

void FUN_1487441b2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148744214 FUN_148744214 body=304 status=ok
// SIG undefined FUN_148744214(void)

void FUN_148744214(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148744346 FUN_148744346 body=304 status=ok
// SIG undefined FUN_148744346(void)

void FUN_148744346(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148744478 FUN_148744478 body=72 status=ok
// SIG undefined FUN_148744478(void)

void FUN_148744478(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined2 *)(param_2 + 4) = 4;
  *(undefined4 *)(param_2 + 1) = 0x3f800000;
  *(undefined1 *)(param_2 + 5) = 3;
  *(char *)(param_2 + 6) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  FUN_1406d2124(param_2 + 7);
  param_2[0x31] = 0;
  return;
}



// FUNCTION 1487444c0 FUN_1487444c0 body=30 status=ok
// SIG undefined FUN_1487444c0(void)

void FUN_1487444c0(undefined8 param_1,longlong param_2)

{
  FUN_14079c464(param_2 + 0x38);
  FUN_144a2da94(param_2);
  return;
}



// FUNCTION 1487444f4 FUN_1487444f4 body=63 status=ok
// SIG undefined FUN_1487444f4(void)

undefined1 FUN_1487444f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148744626(param_2,param_3);
    param_3 = param_3 + 400;
    param_2 = param_2 + 400;
  }
  return 1;
}



// FUNCTION 14874455c FUN_14874455c body=59 status=ok
// SIG undefined FUN_14874455c(void)

undefined8 FUN_14874455c(longlong *param_1)

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



// FUNCTION 1487445a8 FUN_1487445a8 body=47 status=ok
// SIG undefined FUN_1487445a8(void)

void FUN_1487445a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 400) == '\x01') {
    FUN_14079c464(param_2 + 0x38);
    FUN_144a2da94(param_2);
    *(undefined1 *)(param_2 + 400) = 0;
  }
  return;
}



// FUNCTION 148744626 FUN_148744626 body=84 status=ok
// SIG undefined FUN_148744626(void)

longlong FUN_148744626(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_144983130();
  FUN_141251a4c(param_1 + 0x38,param_2 + 0x38);
  lVar1 = *(longlong *)(param_2 + 0x188);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x188);
    }
  }
  *(longlong *)(param_1 + 0x188) = lVar1;
  return param_1;
}



// FUNCTION 1487446b2 FUN_1487446b2 body=95 status=ok
// SIG undefined FUN_1487446b2(void)

undefined1 FUN_1487446b2(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    do {
      lVar1 = *(longlong *)(param_3 + -8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_3 + -8);
        }
      }
      *param_2 = lVar1;
      FUN_144983130(param_2 + 1,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14874473a FUN_14874473a body=59 status=ok
// SIG undefined FUN_14874473a(void)

undefined8 FUN_14874473a(longlong *param_1)

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



// FUNCTION 148744780 FUN_148744780 body=33 status=ok
// SIG undefined FUN_148744780(void)

void FUN_148744780(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_144a2da94(param_2 + 8);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148744832 FUN_148744832 body=119 status=ok
// SIG undefined FUN_148744832(void)

undefined1 FUN_148744832(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + 0x10 + lVar8) = *(undefined4 *)(param_3 + 0x10 + lVar8);
      puVar2 = (undefined4 *)(param_3 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar1 = (undefined4 *)(param_2 + lVar8);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      lVar7 = *(longlong *)(param_3 + 0x18 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + 0x18 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8 + 0x18) = lVar7;
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487448d2 FUN_1487448d2 body=59 status=ok
// SIG undefined FUN_1487448d2(void)

undefined8 FUN_1487448d2(longlong *param_1)

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



// FUNCTION 148744a04 FUN_148744a04 body=109 status=ok
// SIG undefined FUN_148744a04(void)

void FUN_148744a04(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[4] = 0xbf80000000000000;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x5f) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  return;
}



// FUNCTION 148744a72 FUN_148744a72 body=130 status=ok
// SIG undefined FUN_148744a72(void)

void FUN_148744a72(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148744b3d FUN_148744b3d body=106 status=ok
// SIG undefined FUN_148744b3d(void)

void FUN_148744b3d(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_28 = param_3;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148744bae FUN_148744bae body=256 status=ok
// SIG undefined FUN_148744bae(void)

void FUN_148744bae(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6158c();
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
  local_40 = (undefined4)local_28;
  uStack_3c = local_28._4_4_;
  uStack_38 = (undefined4)uStack_20;
  uStack_34 = uStack_20._4_4_;
  FUN_1489a8bec(param_1,&local_40,local_2c != 0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148744cda FUN_148744cda body=45 status=ok
// SIG undefined FUN_148744cda(void)

longlong FUN_148744cda(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1408ee338(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148744d08 FUN_148744d08 body=45 status=ok
// SIG undefined FUN_148744d08(void)

longlong FUN_148744d08(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1410a2eac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148744d3c FUN_148744d3c body=45 status=ok
// SIG undefined FUN_148744d3c(void)

longlong FUN_148744d3c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140f000e4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148744d6a FUN_148744d6a body=45 status=ok
// SIG undefined FUN_148744d6a(void)

longlong FUN_148744d6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1457ca320(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148744d98 FUN_148744d98 body=45 status=ok
// SIG undefined FUN_148744d98(void)

longlong FUN_148744d98(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1457ca320(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148744dc6 FUN_148744dc6 body=45 status=ok
// SIG undefined FUN_148744dc6(void)

longlong FUN_148744dc6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140fd5e60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148744df4 FUN_148744df4 body=65 status=ok
// SIG undefined FUN_148744df4(void)

void FUN_148744df4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = 0xb8;
  do {
    FUN_1489a50d2(param_1 + lVar1,param_2,param_3);
    lVar1 = lVar1 + 0x150;
  } while (lVar1 != 0x5f8);
  return;
}



// FUNCTION 148744e36 FUN_148744e36 body=86 status=ok
// SIG undefined FUN_148744e36(void)

void FUN_148744e36(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1418b0ad8(param_4,param_3);
  lVar2 = 0xb8;
  do {
    FUN_141022b78(param_1 + lVar2,param_2,param_3,uVar1);
    lVar2 = lVar2 + 0x150;
  } while (lVar2 != 0x5f8);
  return;
}



// FUNCTION 148744ea0 FUN_148744ea0 body=45 status=ok
// SIG undefined FUN_148744ea0(void)

longlong FUN_148744ea0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1408ee338(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148744ece FUN_148744ece body=45 status=ok
// SIG undefined FUN_148744ece(void)

longlong FUN_148744ece(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140f000e4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148744efc FUN_148744efc body=45 status=ok
// SIG undefined FUN_148744efc(void)

longlong FUN_148744efc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1408ee338(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148744f3a FUN_148744f3a body=48 status=ok
// SIG undefined FUN_148744f3a(void)

longlong FUN_148744f3a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148744f76 FUN_148744f76 body=48 status=ok
// SIG undefined FUN_148744f76(void)

longlong FUN_148744f76(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148744fa6 FUN_148744fa6 body=48 status=ok
// SIG undefined FUN_148744fa6(void)

longlong FUN_148744fa6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148744fd6 FUN_148744fd6 body=48 status=ok
// SIG undefined FUN_148744fd6(void)

longlong FUN_148744fd6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148745006 FUN_148745006 body=48 status=ok
// SIG undefined FUN_148745006(void)

longlong FUN_148745006(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148745036 FUN_148745036 body=48 status=ok
// SIG undefined FUN_148745036(void)

longlong FUN_148745036(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148745066 FUN_148745066 body=45 status=ok
// SIG undefined FUN_148745066(void)

longlong FUN_148745066(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140e465a6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148745094 FUN_148745094 body=48 status=ok
// SIG undefined FUN_148745094(void)

longlong FUN_148745094(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140e465a6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487450c4 FUN_1487450c4 body=48 status=ok
// SIG undefined FUN_1487450c4(void)

longlong FUN_1487450c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140e465a6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487450f4 FUN_1487450f4 body=48 status=ok
// SIG undefined FUN_1487450f4(void)

longlong FUN_1487450f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140e465a6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148745124 FUN_148745124 body=48 status=ok
// SIG undefined FUN_148745124(void)

longlong FUN_148745124(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148745154 FUN_148745154 body=48 status=ok
// SIG undefined FUN_148745154(void)

longlong FUN_148745154(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148745194 FUN_148745194 body=48 status=ok
// SIG undefined FUN_148745194(void)

longlong FUN_148745194(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_140ce0512(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487451d0 FUN_1487451d0 body=48 status=ok
// SIG undefined FUN_1487451d0(void)

longlong FUN_1487451d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_140ce0512(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14874523c FUN_14874523c body=30 status=ok
// SIG undefined FUN_14874523c(void)

void FUN_14874523c(undefined8 param_1,longlong param_2)

{
  FUN_14079c464(param_2 + 0x38);
  FUN_144a2da94(param_2);
  return;
}



// FUNCTION 148745270 FUN_148745270 body=75 status=ok
// SIG undefined FUN_148745270(void)

undefined1 FUN_148745270(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144983130(param_2,param_3);
    FUN_141251a4c(param_2 + 0x38,param_3 + 0x38);
    param_2 = param_2 + 0x188;
    param_3 = param_3 + 0x188;
  }
  return 1;
}



// FUNCTION 1487452e4 FUN_1487452e4 body=59 status=ok
// SIG undefined FUN_1487452e4(void)

undefined8 FUN_1487452e4(longlong *param_1)

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



// FUNCTION 148745330 FUN_148745330 body=47 status=ok
// SIG undefined FUN_148745330(void)

void FUN_148745330(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x188) == '\x01') {
    FUN_14079c464(param_2 + 0x38);
    FUN_144a2da94(param_2);
    *(undefined1 *)(param_2 + 0x188) = 0;
  }
  return;
}



// FUNCTION 1487453e4 FUN_1487453e4 body=30 status=ok
// SIG undefined FUN_1487453e4(void)

void FUN_1487453e4(undefined8 param_1,longlong param_2)

{
  FUN_14079c464(param_2 + 0x38);
  FUN_144a2da94(param_2);
  return;
}



// FUNCTION 148745418 FUN_148745418 body=75 status=ok
// SIG undefined FUN_148745418(void)

undefined1 FUN_148745418(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144983130(param_2,param_3);
    FUN_141251a4c(param_2 + 0x38,param_3 + 0x38);
    param_2 = param_2 + 0x188;
    param_3 = param_3 + 0x188;
  }
  return 1;
}



// FUNCTION 14874548c FUN_14874548c body=59 status=ok
// SIG undefined FUN_14874548c(void)

undefined8 FUN_14874548c(longlong *param_1)

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



// FUNCTION 1487454d8 FUN_1487454d8 body=47 status=ok
// SIG undefined FUN_1487454d8(void)

void FUN_1487454d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x188) == '\x01') {
    FUN_14079c464(param_2 + 0x38);
    FUN_144a2da94(param_2);
    *(undefined1 *)(param_2 + 0x188) = 0;
  }
  return;
}



// FUNCTION 148745580 FUN_148745580 body=104 status=ok
// SIG undefined FUN_148745580(void)

undefined1 FUN_148745580(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148745610 FUN_148745610 body=59 status=ok
// SIG undefined FUN_148745610(void)

undefined8 FUN_148745610(longlong *param_1)

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



// FUNCTION 1487456b2 FUN_1487456b2 body=64 status=ok
// SIG undefined FUN_1487456b2(void)

undefined8 * FUN_1487456b2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b2c6a40;
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



// FUNCTION 14874575e FUN_14874575e body=103 status=ok
// SIG undefined FUN_14874575e(void)

undefined8 FUN_14874575e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      FUN_14862318e(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined8 *)(param_2 + 0x25 + lVar6) = *(undefined8 *)(param_3 + 0x25 + lVar6);
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487457ee FUN_1487457ee body=59 status=ok
// SIG undefined FUN_1487457ee(void)

undefined8 FUN_1487457ee(longlong *param_1)

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



// FUNCTION 148745834 FUN_148745834 body=32 status=ok
// SIG undefined FUN_148745834(void)

void FUN_148745834(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1487458a4 FUN_1487458a4 body=37 status=ok
// SIG undefined FUN_1487458a4(void)

void FUN_1487458a4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb8);
  FUN_148744a04(param_2);
  return;
}



// FUNCTION 1487458f0 FUN_1487458f0 body=63 status=ok
// SIG undefined FUN_1487458f0(void)

undefined1 FUN_1487458f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148745a18(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 148745958 FUN_148745958 body=59 status=ok
// SIG undefined FUN_148745958(void)

undefined8 FUN_148745958(longlong *param_1)

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



// FUNCTION 1487459a4 FUN_1487459a4 body=38 status=ok
// SIG undefined FUN_1487459a4(void)

void FUN_1487459a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_148744a72(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148745a18 FUN_148745a18 body=156 status=ok
// SIG undefined FUN_148745a18(void)

undefined4 * FUN_148745a18(undefined4 *param_1,undefined4 *param_2)

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
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x1d);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x21);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x19) = *(undefined4 *)((longlong)param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0x1d) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x21) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x25) = uVar11;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  if (param_2 != param_1) {
    FUN_148745b64(param_1 + 0xc,param_2 + 0xc);
    FUN_148745b64(param_1 + 0x12,param_2 + 0x12);
  }
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x62) = *(undefined1 *)((longlong)param_2 + 0x62);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  FUN_140b177d4(param_1 + 0x1c,param_2 + 0x1c);
  FUN_148745ab4(param_1 + 0x24,param_2 + 0x24);
  FUN_148745b0c(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  return param_1;
}



// FUNCTION 148745ab4 FUN_148745ab4 body=88 status=ok
// SIG undefined FUN_148745ab4(void)

undefined8 * FUN_148745ab4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148745c96(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148745b0c FUN_148745b0c body=88 status=ok
// SIG undefined FUN_148745b0c(void)

undefined8 * FUN_148745b0c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_145835afc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148745b64 FUN_148745b64 body=304 status=ok
// SIG undefined FUN_148745b64(void)

void FUN_148745b64(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148745c96 FUN_148745c96 body=98 status=ok
// SIG undefined FUN_148745c96(void)

void FUN_148745c96(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148745d48 FUN_148745d48 body=62 status=ok
// SIG undefined FUN_148745d48(void)

undefined1 FUN_148745d48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141289ada(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148745dae FUN_148745dae body=59 status=ok
// SIG undefined FUN_148745dae(void)

undefined8 FUN_148745dae(longlong *param_1)

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



// FUNCTION 148745df4 FUN_148745df4 body=43 status=ok
// SIG undefined FUN_148745df4(void)

void FUN_148745df4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148745e66 FUN_148745e66 body=52 status=ok
// SIG undefined FUN_148745e66(void)

undefined8 * FUN_148745e66(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148745e9a FUN_148745e9a body=55 status=ok
// SIG undefined FUN_148745e9a(void)

void FUN_148745e9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68770 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68770 = FUN_140002ddd(FUN_14651bb88,uVar1,L"GbxUIDisplayDataBaseDef");
  }
  return;
}



// FUNCTION 148745efc FUN_148745efc body=63 status=ok
// SIG undefined FUN_148745efc(void)

undefined1 FUN_148745efc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487460c6(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}



// FUNCTION 148745f64 FUN_148745f64 body=59 status=ok
// SIG undefined FUN_148745f64(void)

undefined8 FUN_148745f64(longlong *param_1)

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



// FUNCTION 148745fb0 FUN_148745fb0 body=38 status=ok
// SIG undefined FUN_148745fb0(void)

void FUN_148745fb0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_1410b30a8(param_2);
    *(undefined1 *)(param_2 + 0x140) = 0;
  }
  return;
}



// FUNCTION 148746010 FUN_148746010 body=181 status=ok
// SIG undefined FUN_148746010(void)

void FUN_148746010(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b2cc480;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
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
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  return;
}



// FUNCTION 1487460c6 FUN_1487460c6 body=128 status=ok
// SIG undefined FUN_1487460c6(void)

longlong FUN_1487460c6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  FUN_148746146(param_1 + 0x50,param_2 + 0x50);
  FUN_148746306(param_1 + 0xa0,param_2 + 0xa0);
  FUN_140d188f2(param_1 + 0xf0,param_2 + 0xf0);
  return param_1;
}



// FUNCTION 148746146 FUN_148746146 body=122 status=ok
// SIG undefined FUN_148746146(void)

longlong FUN_148746146(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1487461c0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1487461c0 FUN_1487461c0 body=211 status=ok
// SIG undefined FUN_1487461c0(void)

undefined8 * FUN_1487461c0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1410b3240(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_148746294(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar4 + 0xc);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xe;
        puVar6 = puVar6 + 0xe;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148746294 FUN_148746294 body=114 status=ok
// SIG undefined FUN_148746294(void)

undefined8 * FUN_148746294(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148746306 FUN_148746306 body=122 status=ok
// SIG undefined FUN_148746306(void)

longlong FUN_148746306(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_148746380(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148746380 FUN_148746380 body=270 status=ok
// SIG undefined FUN_148746380(void)

longlong * FUN_148746380(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1410b33ca(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140d69980(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar3 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          FUN_14185083e(lVar5 + lVar3 + 8,lVar2 + 8 + lVar5);
          *(undefined8 *)(lVar3 + 0xb8 + lVar5) = *(undefined8 *)(lVar2 + 0xb8 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0xc0;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 148746490 FUN_148746490 body=28 status=ok
// SIG undefined FUN_148746490(void)

undefined8 FUN_148746490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14874650c FUN_14874650c body=85 status=ok
// SIG undefined FUN_14874650c(void)

undefined8 FUN_14874650c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x18 + lVar1) = *(undefined4 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14874658a FUN_14874658a body=59 status=ok
// SIG undefined FUN_14874658a(void)

undefined8 FUN_14874658a(longlong *param_1)

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



// FUNCTION 1487465d0 FUN_1487465d0 body=43 status=ok
// SIG undefined FUN_1487465d0(void)

void FUN_1487465d0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 148746674 FUN_148746674 body=54 status=ok
// SIG undefined FUN_148746674(void)

undefined1 FUN_148746674(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14874681c(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1487466d2 FUN_1487466d2 body=59 status=ok
// SIG undefined FUN_1487466d2(void)

undefined8 FUN_1487466d2(longlong *param_1)

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



// FUNCTION 148746718 FUN_148746718 body=32 status=ok
// SIG undefined FUN_148746718(void)

void FUN_148746718(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1487467d0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148746772 FUN_148746772 body=94 status=ok
// SIG undefined FUN_148746772(void)

undefined8 * FUN_148746772(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b2c7340;
  param_1[3] = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[4] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 5) = (int)plVar2[1];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 1487467d0 FUN_1487467d0 body=76 status=ok
// SIG undefined FUN_1487467d0(void)

void FUN_1487467d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2c7340;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14874681c FUN_14874681c body=138 status=ok
// SIG undefined FUN_14874681c(void)

longlong FUN_14874681c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  plVar1 = *(longlong **)(param_2 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x20) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  uVar4 = *(undefined4 *)(param_2 + 0x40);
  uVar5 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  FUN_14124fed2(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 1487468b0 FUN_1487468b0 body=28 status=ok
// SIG undefined FUN_1487468b0(void)

undefined8 FUN_1487468b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148746910 FUN_148746910 body=85 status=ok
// SIG undefined FUN_148746910(void)

undefined1 FUN_148746910(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined1 *)(param_2 + 0x18 + lVar1) = *(undefined1 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14874698e FUN_14874698e body=59 status=ok
// SIG undefined FUN_14874698e(void)

undefined8 FUN_14874698e(longlong *param_1)

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



// FUNCTION 1487469d4 FUN_1487469d4 body=43 status=ok
// SIG undefined FUN_1487469d4(void)

void FUN_1487469d4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 148746a48 FUN_148746a48 body=28 status=ok
// SIG undefined FUN_148746a48(void)

undefined8 FUN_148746a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148746a94 FUN_148746a94 body=63 status=ok
// SIG undefined FUN_148746a94(void)

undefined1 FUN_148746a94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148746c42(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 148746afc FUN_148746afc body=59 status=ok
// SIG undefined FUN_148746afc(void)

undefined8 FUN_148746afc(longlong *param_1)

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



// FUNCTION 148746b48 FUN_148746b48 body=38 status=ok
// SIG undefined FUN_148746b48(void)

void FUN_148746b48(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_14081925c(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 148746c42 FUN_148746c42 body=280 status=ok
// SIG undefined FUN_148746c42(void)

longlong FUN_148746c42(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_148746d5a(param_1 + 0x18,param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38)) ||
     (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x55) = *(undefined8 *)(param_2 + 0x55);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  if ((*(longlong *)(param_1 + 0x68) != *(longlong *)(param_2 + 0x68)) ||
     (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70))) {
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  uVar2 = *(undefined4 *)(param_2 + 0x9c);
  uVar3 = *(undefined4 *)(param_2 + 0xa0);
  uVar4 = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  *(undefined4 *)(param_1 + 0xa0) = uVar3;
  *(undefined4 *)(param_1 + 0xa4) = uVar4;
  FUN_144a787a6(param_1 + 0xa8,param_2 + 0xa8);
  FUN_1401f3db8(param_1 + 0xb8,param_2 + 0xb8);
  FUN_1401f3db8(param_1 + 0xd0,param_2 + 0xd0);
  FUN_1401f3db8(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
  return param_1;
}



// FUNCTION 148746d5a FUN_148746d5a body=84 status=ok
// SIG undefined FUN_148746d5a(void)

longlong * FUN_148746d5a(longlong *param_1,longlong *param_2)

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



// FUNCTION 148746db0 FUN_148746db0 body=28 status=ok
// SIG undefined FUN_148746db0(void)

undefined8 FUN_148746db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148746e34 FUN_148746e34 body=63 status=ok
// SIG undefined FUN_148746e34(void)

undefined1 FUN_148746e34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148746f5c(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148746e9c FUN_148746e9c body=59 status=ok
// SIG undefined FUN_148746e9c(void)

undefined8 FUN_148746e9c(longlong *param_1)

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



// FUNCTION 148746ee8 FUN_148746ee8 body=38 status=ok
// SIG undefined FUN_148746ee8(void)

void FUN_148746ee8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_140e96536(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148746f5c FUN_148746f5c body=170 status=ok
// SIG undefined FUN_148746f5c(void)

longlong FUN_148746f5c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_2 != param_1) {
    FUN_140fce150(param_1,param_2);
    FUN_140fce150(param_1 + 0x18,param_2 + 0x18);
    FUN_140fce150(param_1 + 0x30,param_2 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar6 = *(undefined4 *)(param_2 + 0x4c);
  uVar7 = *(undefined4 *)(param_2 + 0x50);
  uVar8 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  *(undefined4 *)(param_1 + 0x50) = uVar7;
  *(undefined4 *)(param_1 + 0x54) = uVar8;
  FUN_148747006(param_1 + 0x60,param_2 + 0x60);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  lVar4 = *(longlong *)(param_2 + 0x78);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(longlong *)(param_1 + 0x78) = lVar4;
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
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  return param_1;
}



// FUNCTION 148747006 FUN_148747006 body=88 status=ok
// SIG undefined FUN_148747006(void)

undefined8 * FUN_148747006(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140fce2d2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1487470fe FUN_1487470fe body=63 status=ok
// SIG undefined FUN_1487470fe(void)

undefined1 FUN_1487470fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14874721a(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}


