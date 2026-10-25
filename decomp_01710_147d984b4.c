// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147d984b4 FUN_147d984b4 body=511 status=ok
// SIG undefined FUN_147d984b4(void)

void FUN_147d984b4(undefined8 *param_1,float param_2,float param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 param_6,char param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_108 [32];
  double local_e8;
  double dStack_e0;
  undefined2 *local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined2 *local_c0;
  int local_b8;
  longlong local_b0 [2];
  longlong *local_a0 [2];
  undefined1 local_90 [48];
  undefined1 local_60 [8];
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_7 != '\0') {
    FUN_14276766e(local_90,&param_6);
    local_e8 = (double)param_4[2];
    dStack_e0 = (double)param_4[3];
    FUN_140002266(&local_c0,L"X=%.9f Y=%.9f Z=%.9f W=%.9f",*param_4,param_4[1]);
    puVar3 = &DAT_149dfb77a;
    local_d8 = &DAT_149dfb77a;
    if (local_b8 != 0) {
      local_d8 = local_c0;
    }
    local_e8 = (double)param_1[2];
    FUN_140002266(&local_d0,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_1,param_1[1]);
    puVar4 = &DAT_149dfb77a;
    if (local_c8 != 0) {
      puVar4 = local_d0;
    }
    if ((int)param_5[1] != 0) {
      puVar3 = (undefined2 *)*param_5;
    }
    dStack_e0 = (double)param_3;
    local_e8 = (double)param_2;
    FUN_140002266(local_b0,
                  L"LogCapsule: \'%s\' - Base: (%s) | HalfHeight: %f | Radius: %f | Rotation: (%s)",
                  puVar3,puVar4);
    FUN_140233b1a(local_a0,local_b0);
    FUN_142767a34(local_90,local_60,local_a0);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
    if (local_a0[0] != (longlong *)0x0) {
      (**(code **)(*local_a0[0] + 0x10))();
    }
    if (local_b0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_d0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_c0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1427678c0(local_90);
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d986ba FUN_147d986ba body=956 status=ok
// SIG undefined FUN_147d986ba(void)

void FUN_147d986ba(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  int local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [16];
  void *local_88;
  ulonglong uStack_80;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_88 = (void *)0x0;
  uStack_80 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  local_a8 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_ac = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  _Src = local_88;
  uVar2 = local_a8;
  iVar1 = local_ac;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c0 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_80;
  local_b8 = (int)uStack_80;
  if (lVar3 == 0) {
    local_b4 = 0;
  }
  else {
    FUN_1446dd670(&local_c0,uStack_80 & 0xffffffff,0);
    memcpy(local_c0,_Src,lVar3 * 2);
  }
  local_d8 = local_68;
  uStack_d0 = uStack_60;
  local_c8 = local_58;
  local_f8 = local_50;
  uStack_f4 = uStack_4c;
  uStack_f0 = uStack_48;
  uStack_ec = uStack_44;
  local_e8 = local_40;
  local_100 = iVar1 != 0;
  local_108 = uVar2;
  FUN_147d98a78(&local_f8,&local_d8,local_6c,&local_c0);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d98a78 FUN_147d98a78 body=479 status=ok
// SIG undefined FUN_147d98a78(void)

void FUN_147d98a78(undefined8 *param_1,undefined8 *param_2,float param_3,longlong *param_4,
                  undefined8 param_5,char param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  double local_d0;
  undefined2 *local_c0;
  int local_b8;
  undefined2 *local_b0;
  int local_a8;
  longlong local_a0 [2];
  longlong *local_90 [2];
  undefined1 local_80 [48];
  undefined1 local_50 [8];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_6 != '\0') {
    FUN_14276766e(local_80,&param_5);
    local_d8 = (undefined2 *)param_2[2];
    FUN_140002266(&local_b0,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_2,param_2[1]);
    puVar3 = &DAT_149dfb77a;
    puVar5 = &DAT_149dfb77a;
    if (local_a8 != 0) {
      puVar5 = local_b0;
    }
    local_d8 = (undefined2 *)param_1[2];
    FUN_140002266(&local_c0,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_1,param_1[1]);
    puVar4 = &DAT_149dfb77a;
    if (local_b8 != 0) {
      puVar4 = local_c0;
    }
    if ((int)param_4[1] != 0) {
      puVar3 = (undefined2 *)*param_4;
    }
    local_d0 = (double)param_3;
    local_d8 = puVar5;
    FUN_140002266(local_a0,L"LogCircle: \'%s\' - Center: (%s) | UpAxis: (%s) | Radius: %f",puVar3,
                  puVar4);
    FUN_140233b1a(local_90,local_a0);
    FUN_142767a34(local_80,local_50,local_90);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_c0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1427678c0(local_80);
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d98c64 FUN_147d98c64 body=1076 status=ok
// SIG undefined FUN_147d98c64(void)

void FUN_147d98c64(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_138 [32];
  void **local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined1 local_98 [16];
  void *local_88;
  ulonglong uStack_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_70 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_88 = (void *)0x0;
  uStack_80 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_a0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  iVar1 = local_a4;
  local_a8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  _Src = local_88;
  uVar2 = local_a0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_80;
  local_b0 = (int)uStack_80;
  if (lVar3 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,uStack_80 & 0xffffffff,0);
    memcpy(local_b8,_Src,lVar3 * 2);
  }
  local_d8 = local_68;
  uStack_d0 = uStack_60;
  local_c8 = local_58;
  local_f8 = local_50;
  uStack_f4 = uStack_4c;
  uStack_f0 = uStack_48;
  uStack_ec = uStack_44;
  local_e8 = local_40;
  local_108 = iVar1 != 0;
  local_110 = uVar2;
  local_118 = &local_b8;
  FUN_147d9909a(&local_f8,&local_d8,local_6c,local_70);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9909a FUN_147d9909a body=514 status=ok
// SIG undefined FUN_147d9909a(void)

void FUN_147d9909a(undefined8 *param_1,undefined8 *param_2,float param_3,float param_4,
                  longlong *param_5,undefined8 param_6,char param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  double local_e0;
  double local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined2 *local_c0;
  int local_b8;
  longlong local_b0 [2];
  longlong *local_a0 [2];
  undefined1 local_90 [48];
  undefined1 local_60 [8];
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_7 != '\0') {
    FUN_14276766e(local_90,&param_6);
    local_e8 = (undefined2 *)param_2[2];
    FUN_140002266(&local_c0,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_2,param_2[1]);
    puVar3 = &DAT_149dfb77a;
    puVar5 = &DAT_149dfb77a;
    if (local_b8 != 0) {
      puVar5 = local_c0;
    }
    local_e8 = (undefined2 *)param_1[2];
    FUN_140002266(&local_d0,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_1,param_1[1]);
    puVar4 = &DAT_149dfb77a;
    if (local_c8 != 0) {
      puVar4 = local_d0;
    }
    if ((int)param_5[1] != 0) {
      puVar3 = (undefined2 *)*param_5;
    }
    local_d8 = (double)param_4;
    local_e0 = (double)param_3;
    local_e8 = puVar5;
    FUN_140002266(local_b0,
                  L"LogCone: \'%s\' - Origin: (%s) | Direction: (%s) | Length: %f | Angle: %f",
                  puVar3,puVar4);
    FUN_140233b1a(local_a0,local_b0);
    FUN_142767a34(local_90,local_60,local_a0);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
    if (local_a0[0] != (longlong *)0x0) {
      (**(code **)(*local_a0[0] + 0x10))();
    }
    if (local_b0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_d0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_c0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1427678c0(local_90);
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d992aa FUN_147d992aa body=968 status=ok
// SIG undefined FUN_147d992aa(void)

void FUN_147d992aa(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined1 local_98 [16];
  void *local_88;
  ulonglong uStack_80;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_88 = (void *)0x0;
  uStack_80 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_a0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  iVar1 = local_a4;
  local_a8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  _Src = local_88;
  uVar2 = local_a0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_80;
  local_b0 = (int)uStack_80;
  if (lVar3 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,uStack_80 & 0xffffffff,0);
    memcpy(local_b8,_Src,lVar3 * 2);
  }
  local_d8 = local_68;
  uStack_d0 = uStack_60;
  local_c8 = local_58;
  local_f8 = local_50;
  uStack_f4 = uStack_4c;
  uStack_f0 = uStack_48;
  uStack_ec = uStack_44;
  local_e8 = local_40;
  local_100 = iVar1 != 0;
  local_108 = uVar2;
  FUN_147d99674(&local_f8,&local_d8,local_6c,&local_b8);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d99674 FUN_147d99674 body=479 status=ok
// SIG undefined FUN_147d99674(void)

void FUN_147d99674(undefined8 *param_1,undefined8 *param_2,float param_3,longlong *param_4,
                  undefined8 param_5,char param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  double local_d0;
  undefined2 *local_c0;
  int local_b8;
  undefined2 *local_b0;
  int local_a8;
  longlong local_a0 [2];
  longlong *local_90 [2];
  undefined1 local_80 [48];
  undefined1 local_50 [8];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_6 != '\0') {
    FUN_14276766e(local_80,&param_5);
    local_d8 = (undefined2 *)param_2[2];
    FUN_140002266(&local_b0,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_2,param_2[1]);
    puVar3 = &DAT_149dfb77a;
    puVar5 = &DAT_149dfb77a;
    if (local_a8 != 0) {
      puVar5 = local_b0;
    }
    local_d8 = (undefined2 *)param_1[2];
    FUN_140002266(&local_c0,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_1,param_1[1]);
    puVar4 = &DAT_149dfb77a;
    if (local_b8 != 0) {
      puVar4 = local_c0;
    }
    if ((int)param_4[1] != 0) {
      puVar3 = (undefined2 *)*param_4;
    }
    local_d0 = (double)param_3;
    local_d8 = puVar5;
    FUN_140002266(local_a0,L"LogCylinder: \'%s\' - Start: (%s) | End: (%s) | Radius: %f",puVar3,
                  puVar4);
    FUN_140233b1a(local_90,local_a0);
    FUN_142767a34(local_80,local_50,local_90);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_c0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1427678c0(local_80);
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9985a FUN_147d9985a body=724 status=ok
// SIG undefined FUN_147d9985a(void)

void FUN_147d9985a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  int local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [16];
  void *local_68;
  ulonglong uStack_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_68 = (void *)0x0;
  uStack_60 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_88 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_8c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  _Src = local_68;
  uVar2 = local_88;
  iVar1 = local_8c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a0 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_60;
  local_98 = (int)uStack_60;
  if (lVar3 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1446dd670(&local_a0,uStack_60 & 0xffffffff,0);
    memcpy(local_a0,_Src,lVar3 * 2);
  }
  local_a8 = local_40;
  local_b8 = local_50;
  uStack_b4 = uStack_4c;
  uStack_b0 = uStack_48;
  uStack_ac = uStack_44;
  FUN_147d99b30(&local_b8,&local_a0,uVar2,iVar1 != 0);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d99b30 FUN_147d99b30 body=352 status=ok
// SIG undefined FUN_147d99b30(void)

void FUN_147d99b30(undefined8 *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined2 *local_98;
  int local_90;
  longlong local_88 [2];
  longlong *local_78 [2];
  undefined1 local_68 [48];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_28 = param_3;
  if (param_4 != '\0') {
    FUN_14276766e(local_68,&local_28);
    local_a8 = param_1[2];
    FUN_140002266(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_1,param_1[1]);
    puVar3 = &DAT_149dfb77a;
    puVar4 = &DAT_149dfb77a;
    if (local_90 != 0) {
      puVar4 = local_98;
    }
    if ((int)param_2[1] != 0) {
      puVar3 = (undefined2 *)*param_2;
    }
    FUN_140002266(local_88,L"LogLocation: \'%s\' - Location: (%s)",puVar3,puVar4);
    FUN_140233b1a(local_78,local_88);
    FUN_142767a34(local_68,local_38,local_78);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    if (local_78[0] != (longlong *)0x0) {
      (**(code **)(*local_78[0] + 0x10))();
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1427678c0(local_68);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d99ca2 FUN_147d99ca2 body=997 status=ok
// SIG undefined FUN_147d99ca2(void)

void FUN_147d99ca2(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_178 [12];
  void *local_118;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  undefined8 local_100;
  undefined1 local_f8 [16];
  void *local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0x3ff00000;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0x3ff00000;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0x3ff0000000000000;
  uStack_80 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  local_e8 = (void *)0x0;
  uStack_e0 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  local_100 = 0;
  FUN_144a63fc8();
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  _Src = local_e8;
  uVar2 = local_100;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_118 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_e0;
  local_110 = (int)uStack_e0;
  if (lVar3 == 0) {
    local_10c = 0;
  }
  else {
    FUN_1446dd670(&local_118,uStack_e0 & 0xffffffff,0);
    memcpy(local_118,_Src,lVar3 * 2);
  }
  puVar4 = local_d8;
  puVar5 = local_178;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_188 = CONCAT71(uStack_3f,local_40);
  local_198 = local_50;
  uStack_194 = uStack_4c;
  uStack_190 = uStack_48;
  uStack_18c = uStack_44;
  local_1a8 = local_60;
  uStack_1a4 = uStack_5c;
  uStack_1a0 = uStack_58;
  uStack_19c = uStack_54;
  local_1b8 = local_70;
  uStack_1b4 = uStack_6c;
  uStack_1b0 = uStack_68;
  uStack_1ac = uStack_64;
  local_1c8 = iVar1 != 0;
  FUN_147d9a088(&local_1b8,local_178,&local_118,uVar2);
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9a088 FUN_147d9a088 body=521 status=ok
// SIG undefined FUN_147d9a088(void)

void FUN_147d9a088(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  char param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined2 *local_e0;
  undefined2 *local_d0;
  int local_c8;
  undefined2 *local_c0;
  int local_b8;
  undefined2 *local_b0;
  int local_a8;
  longlong local_a0 [2];
  longlong *local_90 [2];
  undefined1 local_80 [48];
  undefined1 local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_40 = param_4;
  if (param_5 != '\0') {
    FUN_14276766e(local_80,&local_40);
    FUN_1467f64aa(param_2,&local_b0);
    puVar3 = &DAT_149dfb77a;
    puVar5 = &DAT_149dfb77a;
    if (local_a8 != 0) {
      puVar5 = local_b0;
    }
    local_e8 = (undefined2 *)param_1[5];
    FUN_140002266(&local_c0,L"X=%3.3f Y=%3.3f Z=%3.3f",param_1[3],param_1[4]);
    puVar6 = &DAT_149dfb77a;
    if (local_b8 != 0) {
      puVar6 = local_c0;
    }
    local_e8 = (undefined2 *)param_1[2];
    FUN_140002266(&local_d0,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_1,param_1[1]);
    puVar4 = &DAT_149dfb77a;
    if (local_c8 != 0) {
      puVar4 = local_d0;
    }
    if ((int)param_3[1] != 0) {
      puVar3 = (undefined2 *)*param_3;
    }
    local_e8 = puVar6;
    local_e0 = puVar5;
    FUN_140002266(local_a0,L"LogOrientedBox: \'%s\' - BoxMin: (%s) | BoxMax: (%s) | Transform: (%s)"
                  ,puVar3,puVar4);
    FUN_140233b1a(local_90,local_a0);
    FUN_142767a34(local_80,local_50,local_90);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    if (local_90[0] != (longlong *)0x0) {
      (**(code **)(*local_90[0] + 0x10))();
    }
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_d0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_c0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1427678c0(local_80);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9a298 FUN_147d9a298 body=792 status=ok
// SIG undefined FUN_147d9a298(void)

void FUN_147d9a298(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  int local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [16];
  void *local_78;
  ulonglong uStack_70;
  undefined1 local_68 [24];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_78 = (void *)0x0;
  uStack_70 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_98 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  _Src = local_78;
  uVar2 = local_98;
  iVar1 = local_9c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b0 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_70;
  local_a8 = (int)uStack_70;
  if (lVar3 == 0) {
    local_a4 = 0;
  }
  else {
    FUN_1446dd670(&local_b0,uStack_70 & 0xffffffff,0);
    memcpy(local_b0,_Src,lVar3 * 2);
  }
  local_b8 = local_40;
  local_c8 = local_50;
  uStack_c4 = uStack_4c;
  uStack_c0 = uStack_48;
  uStack_bc = uStack_44;
  FUN_147d9a5b2(&local_c8,&local_b0,uVar2,iVar1 != 0);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9a5b2 FUN_147d9a5b2 body=446 status=ok
// SIG undefined FUN_147d9a5b2(void)

void FUN_147d9a5b2(undefined8 *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  int local_a0;
  longlong local_98 [2];
  longlong *local_88 [2];
  undefined1 local_78 [48];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_38 = param_3;
  if (param_4 != '\0') {
    FUN_14276766e(local_78,&local_38);
    local_c8 = (undefined2 *)param_1[2];
    FUN_140002266(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_1,param_1[1]);
    puVar3 = &DAT_149dfb77a;
    puVar5 = &DAT_149dfb77a;
    if (local_a0 != 0) {
      puVar5 = local_a8;
    }
    local_c8 = (undefined2 *)param_1[2];
    FUN_140002266(&local_b8,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_1,param_1[1]);
    puVar4 = &DAT_149dfb77a;
    if (local_b0 != 0) {
      puVar4 = local_b8;
    }
    if ((int)param_2[1] != 0) {
      puVar3 = (undefined2 *)*param_2;
    }
    local_c8 = puVar5;
    FUN_140002266(local_98,L"LogSegment: \'%s\' - SegmentStart: (%s) | SegmentEnd: (%s)",puVar3,
                  puVar4);
    FUN_140233b1a(local_88,local_98);
    FUN_142767a34(local_78,local_48,local_88);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x10))();
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1427678c0(local_78);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9a77e FUN_147d9a77e body=831 status=ok
// SIG undefined FUN_147d9a77e(void)

void FUN_147d9a77e(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined8 local_80;
  undefined1 local_78 [16];
  void *local_68;
  ulonglong uStack_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_68 = (void *)0x0;
  uStack_60 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_80 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  iVar1 = local_84;
  local_88 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  _Src = local_68;
  uVar2 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_60;
  local_90 = (int)uStack_60;
  if (lVar3 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,uStack_60 & 0xffffffff,0);
    memcpy(local_98,_Src,lVar3 * 2);
  }
  local_b8 = local_50;
  uStack_b4 = uStack_4c;
  uStack_b0 = uStack_48;
  uStack_ac = uStack_44;
  local_a8 = local_40;
  local_c8 = iVar1 != 0;
  FUN_147d9aabe(&local_b8,local_54,&local_98,uVar2);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9aabe FUN_147d9aabe body=390 status=ok
// SIG undefined FUN_147d9aabe(void)

void FUN_147d9aabe(undefined8 *param_1,float param_2,longlong *param_3,undefined8 param_4,
                  char param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_d8 [32];
  double local_b8;
  undefined2 *local_a8;
  int local_a0;
  longlong local_98 [2];
  longlong *local_88 [2];
  undefined1 local_78 [48];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_38 = param_4;
  if (param_5 != '\0') {
    FUN_14276766e(local_78,&local_38);
    local_b8 = (double)param_1[2];
    FUN_140002266(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_1,param_1[1]);
    puVar3 = &DAT_149dfb77a;
    puVar4 = &DAT_149dfb77a;
    if (local_a0 != 0) {
      puVar4 = local_a8;
    }
    if ((int)param_3[1] != 0) {
      puVar3 = (undefined2 *)*param_3;
    }
    local_b8 = (double)param_2;
    FUN_140002266(local_98,L"LogSphere: \'%s\' - Center: (%s) | Radius: %f",puVar3,puVar4);
    FUN_140233b1a(local_88,local_98);
    FUN_142767a34(local_78,local_48,local_88);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x10))();
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1427678c0(local_78);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9ac4c FUN_147d9ac4c body=475 status=ok
// SIG undefined FUN_147d9ac4c(void)

void FUN_147d9ac4c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  int local_54;
  undefined8 local_50;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  local_50 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  _Src = local_48;
  uVar2 = local_50;
  iVar1 = local_54;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_40;
  local_60 = (int)uStack_40;
  if (lVar3 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,uStack_40 & 0xffffffff,0);
    memcpy(local_68,_Src,lVar3 * 2);
  }
  FUN_147d9ae28(&local_68,uVar2,iVar1 != 0);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9ae28 FUN_147d9ae28 body=276 status=ok
// SIG undefined FUN_147d9ae28(void)

void FUN_147d9ae28(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  longlong *local_78 [2];
  undefined1 local_68 [48];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = param_2;
  if (param_3 != '\0') {
    FUN_14276766e(local_68,&local_28);
    if ((int)param_1[1] == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_1;
    }
    FUN_140002266(local_88,L"LogText: \'%s\'",puVar3);
    FUN_140233b1a(local_78,local_88);
    FUN_142767a34(local_68,local_38,local_78);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    if (local_78[0] != (longlong *)0x0) {
      (**(code **)(*local_78[0] + 0x10))();
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1427678c0(local_68);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9af3e FUN_147d9af3e body=209 status=ok
// SIG undefined FUN_147d9af3e(void)

void FUN_147d9af3e(undefined8 param_1,longlong param_2)

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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9b014 FUN_147d9b014 body=73 status=ok
// SIG undefined FUN_147d9b014(void)

undefined8 * FUN_147d9b014(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aae7870;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_147d9b188(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9b062 FUN_147d9b062 body=29 status=ok
// SIG undefined FUN_147d9b062(void)

undefined8 FUN_147d9b062(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9b082 FUN_147d9b082 body=38 status=ok
// SIG undefined FUN_147d9b082(void)

undefined8 FUN_147d9b082(undefined8 param_1,int param_2)

{
  FUN_140b2399e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9b0a8 FUN_147d9b0a8 body=76 status=ok
// SIG undefined FUN_147d9b0a8(void)

undefined8 * FUN_147d9b0a8(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14aaeb840;
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9b0f4 FUN_147d9b0f4 body=51 status=ok
// SIG undefined FUN_147d9b0f4(void)

undefined8 FUN_147d9b0f4(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_3 + 0x10);
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
  return 0;
}



// FUNCTION 147d9b130 FUN_147d9b130 body=45 status=ok
// SIG undefined FUN_147d9b130(void)

longlong FUN_147d9b130(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145aa663c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9b15e FUN_147d9b15e body=38 status=ok
// SIG undefined FUN_147d9b15e(void)

undefined8 FUN_147d9b15e(undefined8 param_1,int param_2)

{
  FUN_1458544ce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9b188 FUN_147d9b188 body=52 status=ok
// SIG undefined FUN_147d9b188(void)

void FUN_147d9b188(longlong *param_1)

{
  FUN_147d9b1bc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d9b1bc FUN_147d9b1bc body=313 status=ok
// SIG undefined FUN_147d9b1bc(void)

void FUN_147d9b1bc(longlong *param_1)

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



// FUNCTION 147d9b2f6 FUN_147d9b2f6 body=58 status=ok
// SIG undefined FUN_147d9b2f6(void)

longlong FUN_147d9b2f6(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9b330 FUN_147d9b330 body=107 status=ok
// SIG undefined FUN_147d9b330(void)

undefined8 FUN_147d9b330(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_1 + 0xa0,local_28);
  FUN_140ba7826(param_2,L"FBufferArchive64 ",local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9b39c FUN_147d9b39c body=251 status=ok
// SIG undefined FUN_147d9b39c(void)

longlong FUN_147d9b39c(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"SrcPitch",1);
  FUN_1474409b8(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"SrcDepthPitch",1);
  FUN_147440a6c(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"SrcBuffer",1);
  FUN_1474409b8(param_1 + 0xf0,*(undefined8 *)(param_2 + 0x28),L"DestPos",1);
  FUN_1474409b8(param_1 + 0xf6,*(undefined8 *)(param_2 + 0x28),L"DestSize",1);
  FUN_147440a6c(param_1 + 0xfc,*(undefined8 *)(param_2 + 0x28),L"DestTexture3D",1);
  return param_1;
}



// FUNCTION 147d9b526 FUN_147d9b526 body=59 status=ok
// SIG undefined FUN_147d9b526(void)

undefined8 FUN_147d9b526(longlong *param_1)

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



// FUNCTION 147d9b600 FUN_147d9b600 body=103 status=ok
// SIG undefined FUN_147d9b600(void)

undefined1 FUN_147d9b600(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
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
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar8);
      *plVar1 = lVar7;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
      *(undefined4 *)(plVar1 + 2) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar5;
      lVar8 = lVar8 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d9b690 FUN_147d9b690 body=59 status=ok
// SIG undefined FUN_147d9b690(void)

undefined8 FUN_147d9b690(longlong *param_1)

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



// FUNCTION 147d9b742 FUN_147d9b742 body=83 status=ok
// SIG undefined FUN_147d9b742(void)

undefined8 * FUN_147d9b742(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aaf7480;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9b79a FUN_147d9b79a body=309 status=ok
// SIG undefined FUN_147d9b79a(void)

undefined8 * FUN_147d9b79a(undefined8 *param_1,undefined4 param_2,undefined8 param_3,void *param_4)

{
  *param_1 = param_3;
  memcpy(param_1 + 2,param_4,0x90);
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xae) = 0;
  param_1[0x16] = 0;
  param_1[0x14] = &PTR_FUN_14a9e5330;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  FUN_1415eaa34(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x164) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x166) = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = &PTR_FUN_14aa50910;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x32) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1a4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x1a6) = 0;
  param_1[0x35] = 0;
  param_1[0x33] = &PTR_FUN_14aa61a50;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  FUN_147d75146(param_1 + 0x3b,param_1 + 0x1a,param_2);
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  return param_1;
}



// FUNCTION 147d9b8d0 FUN_147d9b8d0 body=9 status=ok
// SIG undefined FUN_147d9b8d0(void)

void FUN_147d9b8d0(longlong param_1)

{
  FUN_147d75474(param_1 + 0x10);
  return;
}



// FUNCTION 147d9b8da FUN_147d9b8da body=29 status=ok
// SIG undefined FUN_147d9b8da(void)

undefined8 FUN_147d9b8da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9b8f8 FUN_147d9b8f8 body=146 status=ok
// SIG undefined FUN_147d9b8f8(void)

void FUN_147d9b8f8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x98,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d9b98c FUN_147d9b98c body=102 status=ok
// SIG undefined FUN_147d9b98c(void)

undefined8 * FUN_147d9b98c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14aaf76e0;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    plVar3 = (longlong *)param_1[0x3b];
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
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9b9f2 FUN_147d9b9f2 body=73 status=ok
// SIG undefined FUN_147d9b9f2(void)

undefined8 * FUN_147d9b9f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9ba3c FUN_147d9ba3c body=32 status=ok
// SIG undefined FUN_147d9ba3c(void)

undefined8 FUN_147d9ba3c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FObjectFinder");
  return param_2;
}



// FUNCTION 147d9ba5c FUN_147d9ba5c body=73 status=ok
// SIG undefined FUN_147d9ba5c(void)

undefined8 * FUN_147d9ba5c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9baa6 FUN_147d9baa6 body=32 status=ok
// SIG undefined FUN_147d9baa6(void)

undefined8 FUN_147d9baa6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FObjectFinder");
  return param_2;
}



// FUNCTION 147d9bace FUN_147d9bace body=29 status=ok
// SIG undefined FUN_147d9bace(void)

undefined8 FUN_147d9bace(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9baec FUN_147d9baec body=274 status=ok
// SIG undefined FUN_147d9baec(void)

undefined8 * FUN_147d9baec(undefined8 *param_1,longlong param_2)

{
  char cVar1;
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
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  
  *param_1 = &PTR_LAB_14a8bd0e0;
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  uVar16 = *(undefined8 *)(param_2 + 0x28);
  uVar17 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = uVar13;
  param_1[3] = uVar14;
  param_1[4] = uVar15;
  param_1[5] = uVar16;
  param_1[6] = uVar17;
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  *param_1 = &PTR_LAB_14aaeb7a0;
  memcpy(param_1 + 8,(void *)(param_2 + 0x40),0xa0);
  param_1[0x1c] = &PTR_LAB_14a8bd0e0;
  uVar2 = *(undefined4 *)(param_2 + 0xec);
  uVar3 = *(undefined4 *)(param_2 + 0xf0);
  uVar4 = *(undefined4 *)(param_2 + 0xf4);
  uVar5 = *(undefined4 *)(param_2 + 0xf8);
  uVar6 = *(undefined4 *)(param_2 + 0xfc);
  uVar7 = *(undefined4 *)(param_2 + 0x100);
  uVar8 = *(undefined4 *)(param_2 + 0x104);
  uVar9 = *(undefined4 *)(param_2 + 0x108);
  uVar10 = *(undefined4 *)(param_2 + 0x10c);
  uVar11 = *(undefined4 *)(param_2 + 0x110);
  uVar12 = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  *(undefined4 *)(param_1 + 0x1e) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar4;
  *(undefined4 *)(param_1 + 0x1f) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar8;
  *(undefined4 *)(param_1 + 0x21) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar10;
  *(undefined4 *)(param_1 + 0x22) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar12;
  param_1[0x23] = *(undefined8 *)(param_2 + 0x118);
  param_1[0x1c] = &PTR_FUN_14aaeb770;
  puVar19 = (undefined8 *)(param_2 + 0x120);
  puVar20 = param_1 + 0x24;
  for (lVar18 = 0xe; lVar18 != 0; lVar18 = lVar18 + -1) {
    *puVar20 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar20 = puVar20 + 1;
  }
  param_1[0x32] = *(undefined8 *)(param_2 + 400);
  *param_1 = &PTR_LAB_14aaf76e0;
  param_1[0x33] = *(undefined8 *)(param_2 + 0x198);
  cVar1 = *(char *)(param_2 + 0x200);
  *(char *)(param_1 + 0x40) = cVar1;
  if (cVar1 == '\x01') {
    FUN_144a87366(param_1 + 0x34,param_2 + 0x1a0);
  }
  return param_1;
}



// FUNCTION 147d9bc00 FUN_147d9bc00 body=111 status=ok
// SIG undefined FUN_147d9bc00(void)

void FUN_147d9bc00(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x98,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x98)) {
      uVar2 = uVar1 / 0x98 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x98,8);
  }
  return;
}



// FUNCTION 147d9bc70 FUN_147d9bc70 body=89 status=ok
// SIG undefined FUN_147d9bc70(void)

undefined8 * FUN_147d9bc70(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147d9bcca(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x90);
      }
    }
  }
  return param_1;
}



// FUNCTION 147d9bcca FUN_147d9bcca body=115 status=ok
// SIG undefined FUN_147d9bcca(void)

void FUN_147d9bcca(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147d9bd80 FUN_147d9bd80 body=81 status=ok
// SIG undefined FUN_147d9bd80(void)

undefined8 FUN_147d9bd80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      FUN_14054c6c4(param_2 + -0x10,param_3 + -0x10);
      FUN_147d9beae(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d9bdfa FUN_147d9bdfa body=59 status=ok
// SIG undefined FUN_147d9bdfa(void)

undefined8 FUN_147d9bdfa(longlong *param_1)

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



// FUNCTION 147d9be40 FUN_147d9be40 body=32 status=ok
// SIG undefined FUN_147d9be40(void)

void FUN_147d9be40(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_140095656(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147d9beae FUN_147d9beae body=88 status=ok
// SIG undefined FUN_147d9beae(void)

undefined8 * FUN_147d9beae(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147d9bf06(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147d9bf06 FUN_147d9bf06 body=98 status=ok
// SIG undefined FUN_147d9bf06(void)

void FUN_147d9bf06(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147d9bf6a FUN_147d9bf6a body=38 status=ok
// SIG undefined FUN_147d9bf6a(void)

undefined8 FUN_147d9bf6a(undefined8 param_1,int param_2)

{
  FUN_145de21d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9bfa2 FUN_147d9bfa2 body=114 status=ok
// SIG undefined FUN_147d9bfa2(void)

undefined8
FUN_147d9bfa2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
      (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x20) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x18);
    }
    uVar2 = (**(code **)(*plVar3 + 0x58))
                      (plVar3,*(undefined8 *)(param_1 + 0x28),param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147d9c014 FUN_147d9c014 body=38 status=ok
// SIG undefined FUN_147d9c014(void)

undefined8 FUN_147d9c014(undefined8 param_1,int param_2)

{
  FUN_145de2242();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9c0e4 FUN_147d9c0e4 body=170 status=ok
// SIG undefined FUN_147d9c0e4(void)

void FUN_147d9c0e4(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  FUN_144a78877(((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
                (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4),
                ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
                (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9c250 FUN_147d9c250 body=59 status=ok
// SIG undefined FUN_147d9c250(void)

undefined8 FUN_147d9c250(longlong *param_1)

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



// FUNCTION 147d9c296 FUN_147d9c296 body=32 status=ok
// SIG undefined FUN_147d9c296(void)

void FUN_147d9c296(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_147d9c304(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147d9c304 FUN_147d9c304 body=72 status=ok
// SIG undefined FUN_147d9c304(void)

void FUN_147d9c304(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x000147d9c348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d9c3de FUN_147d9c3de body=59 status=ok
// SIG undefined FUN_147d9c3de(void)

undefined8 FUN_147d9c3de(longlong *param_1)

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



// FUNCTION 147d9c508 FUN_147d9c508 body=59 status=ok
// SIG undefined FUN_147d9c508(void)

undefined8 FUN_147d9c508(longlong *param_1)

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



// FUNCTION 147d9c5aa FUN_147d9c5aa body=109 status=ok
// SIG undefined FUN_147d9c5aa(void)

void FUN_147d9c5aa(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14c966e90;
  uVar4 = DAT_14c966e88;
  uVar3 = DAT_14c966e80;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xf0;
  *param_2 = 0;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  param_2[4] = plVar5;
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
                    /* WARNING: Could not recover jumptable at 0x000147d9c60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d9c618 FUN_147d9c618 body=109 status=ok
// SIG undefined FUN_147d9c618(void)

void FUN_147d9c618(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14c966e90;
  uVar4 = DAT_14c966e88;
  uVar3 = DAT_14c966e80;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xf0;
  *param_2 = 0;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  param_2[4] = plVar5;
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
                    /* WARNING: Could not recover jumptable at 0x000147d9c67a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d9c686 FUN_147d9c686 body=56 status=ok
// SIG undefined FUN_147d9c686(void)

void FUN_147d9c686(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000147d9c6b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d9c6d4 FUN_147d9c6d4 body=78 status=ok
// SIG undefined FUN_147d9c6d4(void)

undefined8 FUN_147d9c6d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined1 *)(lVar1 + -8) = *(undefined1 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1413a517a();
      lVar2 = lVar2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d9c74a FUN_147d9c74a body=59 status=ok
// SIG undefined FUN_147d9c74a(void)

undefined8 FUN_147d9c74a(longlong *param_1)

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



// FUNCTION 147d9c790 FUN_147d9c790 body=64 status=ok
// SIG undefined FUN_147d9c790(void)

void FUN_147d9c790(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x20);
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



// FUNCTION 147d9c820 FUN_147d9c820 body=131 status=ok
// SIG undefined FUN_147d9c820(void)

void FUN_147d9c820(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14c966e90;
  uVar4 = DAT_14c966e88;
  uVar3 = DAT_14c966e80;
  if (DAT_14c966e90 == (longlong *)0x0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0x3f800000;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    param_2[4] = 0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0x3f800000;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    param_2[4] = plVar5;
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
                    /* WARNING: Could not recover jumptable at 0x000147d9c880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d9c8a4 FUN_147d9c8a4 body=131 status=ok
// SIG undefined FUN_147d9c8a4(void)

void FUN_147d9c8a4(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14c966e90;
  uVar4 = DAT_14c966e88;
  uVar3 = DAT_14c966e80;
  if (DAT_14c966e90 == (longlong *)0x0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0x3f800000;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    param_2[4] = 0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0x3f800000;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    param_2[4] = plVar5;
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
                    /* WARNING: Could not recover jumptable at 0x000147d9c904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d9c928 FUN_147d9c928 body=56 status=ok
// SIG undefined FUN_147d9c928(void)

void FUN_147d9c928(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000147d9c955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d9c976 FUN_147d9c976 body=78 status=ok
// SIG undefined FUN_147d9c976(void)

undefined8 FUN_147d9c976(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1413a517a();
      lVar2 = lVar2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d9c9ec FUN_147d9c9ec body=59 status=ok
// SIG undefined FUN_147d9c9ec(void)

undefined8 FUN_147d9c9ec(longlong *param_1)

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



// FUNCTION 147d9ca32 FUN_147d9ca32 body=64 status=ok
// SIG undefined FUN_147d9ca32(void)

void FUN_147d9ca32(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x20);
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



// FUNCTION 147d9cb2e FUN_147d9cb2e body=59 status=ok
// SIG undefined FUN_147d9cb2e(void)

undefined8 FUN_147d9cb2e(longlong *param_1)

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



// FUNCTION 147d9cbd0 FUN_147d9cbd0 body=128 status=ok
// SIG undefined FUN_147d9cbd0(void)

void FUN_147d9cbd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = 0;
  do {
    if (*(longlong *)(param_1 + 0xe0 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != -0x50);
  lVar4 = 0x90;
  do {
    if (*(longlong *)(param_1 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x40);
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
                    /* WARNING: Could not recover jumptable at 0x000147d9cc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d9cc50 FUN_147d9cc50 body=85 status=ok
// SIG undefined FUN_147d9cc50(void)

void FUN_147d9cc50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[4];
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
  FUN_1457e92cc(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d9cca6 FUN_147d9cca6 body=181 status=ok
// SIG undefined FUN_147d9cca6(void)

longlong FUN_147d9cca6(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x40;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x40) == *param_3) {
          if (lVar3 != 0) goto LAB_147d9cd3e;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x38);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147d9cd5c(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x40 + *param_1;
LAB_147d9cd3e:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147d9cd5c FUN_147d9cd5c body=272 status=ok
// SIG undefined FUN_147d9cd5c(void)

undefined4 * FUN_147d9cd5c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_147d9ce6e(param_1,local_48);
  FUN_147d9d002(param_4,local_40);
  *(undefined4 *)(local_40 + 0x38) = 0xffffffff;
  cVar1 = FUN_147d9cf54(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x3c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x38) =
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
      FUN_147d9d12a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9ce6e FUN_147d9ce6e body=229 status=ok
// SIG undefined FUN_147d9ce6e(void)

int * FUN_147d9ce6e(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 147d9cf54 FUN_147d9cf54 body=174 status=ok
// SIG undefined FUN_147d9cf54(void)

undefined8 FUN_147d9cf54(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(longlong *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          FUN_147d9cc50(puVar1 + 2);
          lVar8 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar10 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar11 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar12 = param_3[4];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar13 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          *(longlong *)(puVar1 + 0xc) = param_3[6];
          puVar1[8] = (int)lVar12;
          puVar1[9] = uVar6;
          puVar1[10] = (int)lVar13;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)lVar10;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar11;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar8;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar9;
          puVar1[3] = uVar3;
          FUN_147d9d0b8(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = puVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d9d002 FUN_147d9d002 body=180 status=ok
// SIG undefined FUN_147d9d002(void)

undefined8 * FUN_147d9d002(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_146075062(&local_58);
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = local_68;
  local_68 = 0;
  *(undefined4 *)(param_2 + 2) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_60._4_4_;
  uStack_60 = 0;
  param_2[3] = local_58;
  param_2[4] = uStack_50;
  param_2[5] = local_48;
  uStack_50 = 0;
  local_48 = 0;
  *(undefined1 *)(param_2 + 6) = (undefined1)uStack_40;
  FUN_147d9cc50(&local_68);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9d0b8 FUN_147d9d0b8 body=114 status=ok
// SIG undefined FUN_147d9d0b8(void)

void FUN_147d9d0b8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 147d9d12a FUN_147d9d12a body=476 status=ok
// SIG undefined FUN_147d9d12a(void)

void FUN_147d9d12a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x40;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
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



// FUNCTION 147d9d308 FUN_147d9d308 body=180 status=ok
// SIG undefined FUN_147d9d308(void)

longlong * FUN_147d9d308(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_147d9d39f;
          break;
        }
        iVar1 = (int)plVar2[4];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147d9d3be(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x28);
LAB_147d9d39f:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 147d9d3be FUN_147d9d3be body=290 status=ok
// SIG undefined FUN_147d9d3be(void)

undefined4 * FUN_147d9d3be(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_147d9d4e2(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(byte *)(local_40 + 3) = *(byte *)(local_40 + 3) & 0xfe;
  FUN_1457e927f(0,0);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar1 = FUN_147d9d5c8(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
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
      FUN_147d9d6e8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9d4e2 FUN_147d9d4e2 body=230 status=ok
// SIG undefined FUN_147d9d4e2(void)

int * FUN_147d9d4e2(longlong *param_1,int *param_2)

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



// FUNCTION 147d9d5c8 FUN_147d9d5c8 body=174 status=ok
// SIG undefined FUN_147d9d5c8(void)

undefined8 FUN_147d9d5c8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
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
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          FUN_1457e927f(plVar8[1],(int)plVar8[2]);
          if (plVar8[1] != 0) {
            FUN_1400020a8();
          }
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_147d9d676(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d9d676 FUN_147d9d676 body=114 status=ok
// SIG undefined FUN_147d9d676(void)

void FUN_147d9d676(longlong *param_1,int param_2)

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



// FUNCTION 147d9d6e8 FUN_147d9d6e8 body=473 status=ok
// SIG undefined FUN_147d9d6e8(void)

void FUN_147d9d6e8(longlong *param_1)

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



// FUNCTION 147d9d8c2 FUN_147d9d8c2 body=134 status=ok
// SIG undefined FUN_147d9d8c2(void)

void FUN_147d9d8c2(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  local_18 = param_2[2];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_1479dfc72(param_1,&local_28);
  plVar3 = (longlong *)param_2[2];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9d94a FUN_147d9d94a body=29 status=ok
// SIG undefined FUN_147d9d94a(void)

undefined8 FUN_147d9d94a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9d974 FUN_147d9d974 body=66 status=ok
// SIG undefined FUN_147d9d974(void)

longlong FUN_147d9d974(longlong param_1,int param_2)

{
  FUN_144725486(param_1 + 0x2a0);
  FUN_1447259a8(param_1 + 0x2a0);
  FUN_140064e2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9d9be FUN_147d9d9be body=56 status=ok
// SIG undefined FUN_147d9d9be(void)

undefined8 * FUN_147d9d9be(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  bVar1 = FUN_14480c900(0,param_3);
  *(uint *)(param_2 + 2) = (uint)bVar1 * 4 + 0x82;
  *(undefined1 *)((longlong)param_2 + 4) = 2;
  return param_2;
}



// FUNCTION 147d9da10 FUN_147d9da10 body=38 status=ok
// SIG undefined FUN_147d9da10(void)

undefined8 FUN_147d9da10(undefined8 param_1,int param_2)

{
  FUN_1447259a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9da36 FUN_147d9da36 body=66 status=ok
// SIG undefined FUN_147d9da36(void)

longlong FUN_147d9da36(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14aaf8c80;
  FUN_144725486(param_1 + 0x18);
  FUN_1447259a8(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9da78 FUN_147d9da78 body=65 status=ok
// SIG undefined FUN_147d9da78(void)

undefined8 * FUN_147d9da78(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aaf8c80;
  FUN_144725486(param_1 + 1);
  FUN_1447259a8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9daba FUN_147d9daba body=138 status=ok
// SIG undefined FUN_147d9daba(void)

code * FUN_147d9daba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NoiseMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x34000003b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d9db44;
}



// FUNCTION 147d9db44 FUN_147d9db44 body=138 status=ok
// SIG undefined FUN_147d9db44(void)

code * FUN_147d9db44(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NoiseScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000003b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e396e6;
}



// FUNCTION 147d9dbce FUN_147d9dbce body=138 status=ok
// SIG undefined FUN_147d9dbce(void)

code * FUN_147d9dbce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FrameB";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e39662;
}



// FUNCTION 147d9dc58 FUN_147d9dc58 body=237 status=ok
// SIG undefined FUN_147d9dc58(void)

longlong FUN_147d9dc58(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"AtlasTexture",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"AtlasTextureSampler",0);
  FUN_147440a6c(param_1 + 0xe8,*(undefined8 *)(param_2 + 0x28),L"NoiseVolumeTexture",0);
  FUN_147440a6c(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"NoiseVolumeTextureSampler",0);
  FUN_147440a6c(param_1 + 0xf0,*(undefined8 *)(param_2 + 0x28),L"OutVolumeTexture",0);
  FUN_147440a6c(param_1 + 0xf4,*(undefined8 *)(param_2 + 0x28),L"OutVolumeTextureSampler",0);
  return param_1;
}



// FUNCTION 147d9dd46 FUN_147d9dd46 body=38 status=ok
// SIG undefined FUN_147d9dd46(void)

undefined8 FUN_147d9dd46(undefined8 param_1,int param_2)

{
  FUN_147d9dddc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9dd6c FUN_147d9dd6c body=104 status=ok
// SIG undefined FUN_147d9dd6c(void)

void FUN_147d9dd6c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x68);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147d9dddc FUN_147d9dddc body=65 status=ok
// SIG undefined FUN_147d9dddc(void)

void FUN_147d9dddc(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aaf8db0;
  if (param_1[0xd] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xd] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1458544ce(param_1);
  return;
}



// FUNCTION 147d9de1d FUN_147d9de1d body=311 status=ok
// SIG undefined FUN_147d9de1d(void)

void FUN_147d9de1d(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

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
  
  lVar11 = FUN_144821ef4();
  FUN_147d9df54(*param_2,lVar11,param_4,*param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fa8;
    puVar12[2] = param_3;
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
  return;
}



// FUNCTION 147d9df54 FUN_147d9df54 body=462 status=ok
// SIG undefined FUN_147d9df54(void)

void FUN_147d9df54(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  short *psVar5;
  undefined1 auStack_78 [32];
  short *local_58;
  short local_4a;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145e39462();
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  uVar3 = param_1 + 0xa0 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar3 = uVar1;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar4 = 0;
    do {
      if (*(longlong *)(uVar3 + lVar4 * 4) == DAT_14cb0e608) {
        uVar1 = *(ulonglong *)(param_1 + 0xb0);
        uVar3 = param_1 + 0xb0 + ((longlong)uVar1 >> 0x18);
        if ((uVar1 & 1) == 0) {
          uVar3 = uVar1;
        }
        psVar5 = (short *)(uVar3 + lVar4);
        goto LAB_147d9dff7;
      }
      lVar4 = lVar4 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar4);
  }
  psVar5 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147d9dff7:
  if (*psVar5 != -1) {
    local_48 = *param_3;
    local_58 = &local_4a;
    local_4a = *psVar5;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  uVar2 = DAT_14c9c0de0;
  FUN_144a86a8e(param_2,param_1 + 0xf0,param_4);
  FUN_144775fd8(param_2,param_1 + 0xe0,param_5);
  FUN_144775e63(param_2,param_1 + 0xe4,uVar2);
  FUN_144775fd8(param_2,param_1 + 0xe8,param_6);
  FUN_144775e63(param_2,param_1 + 0xec,uVar2);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9e124 FUN_147d9e124 body=138 status=ok
// SIG undefined FUN_147d9e124(void)

code * FUN_147d9e124(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VoxelSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9d7a0;
}



// FUNCTION 147d9e1b2 FUN_147d9e1b2 body=53 status=ok
// SIG undefined FUN_147d9e1b2(void)

ulonglong FUN_147d9e1b2(int *param_1,int *param_2)

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



// FUNCTION 147d9e1e8 FUN_147d9e1e8 body=128 status=ok
// SIG undefined FUN_147d9e1e8(void)

void FUN_147d9e1e8(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb0d2d8;
  if (DAT_14cb0d30c != 0) {
    *(int *)(DAT_14cb0d2d8 + (longlong)DAT_14cb0d308 * 0x10) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x10) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb0d30c) {
    iVar4 = DAT_14cb0d308;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x10) = iVar4;
  DAT_14cb0d30c = DAT_14cb0d30c + 1;
  puVar3 = &DAT_14cb0d2e8;
  if (DAT_14cb0d2f8 != (undefined *)0x0) {
    puVar3 = DAT_14cb0d2f8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb0d308 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147d9e268 FUN_147d9e268 body=96 status=ok
// SIG undefined FUN_147d9e268(void)

void FUN_147d9e268(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  
  puVar3 = &DAT_14cb0d310;
  if (DAT_14cb0d318 != (undefined *)0x0) {
    puVar3 = DAT_14cb0d318;
  }
  lVar4 = (longlong)*(int *)(DAT_14cb0d2d8 + 0xc + (longlong)param_1 * 0x10);
  iVar2 = *(int *)(puVar3 + lVar4 * 4);
  if (iVar2 == param_1) {
    puVar1 = (undefined4 *)(puVar3 + lVar4 * 4);
  }
  else {
    do {
      lVar4 = (longlong)iVar2;
      iVar2 = *(int *)(DAT_14cb0d2d8 + 8 + lVar4 * 0x10);
    } while (iVar2 != param_1);
    puVar1 = (undefined4 *)(DAT_14cb0d2d8 + lVar4 * 0x10 + 8);
  }
  *puVar1 = *(undefined4 *)(DAT_14cb0d2d8 + (longlong)param_1 * 0x10 + 8);
  FUN_147d9e1e8();
  return;
}



// FUNCTION 147d9e2c8 FUN_147d9e2c8 body=326 status=ok
// SIG undefined FUN_147d9e2c8(void)

undefined4 * FUN_147d9e2c8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147d9e410(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147d9e4f6(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147d9e5e8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9e410 FUN_147d9e410 body=230 status=ok
// SIG undefined FUN_147d9e410(void)

int * FUN_147d9e410(longlong *param_1,int *param_2)

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



// FUNCTION 147d9e4f6 FUN_147d9e4f6 body=128 status=ok
// SIG undefined FUN_147d9e4f6(void)

undefined8 FUN_147d9e4f6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147d9e576((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d9e576 FUN_147d9e576 body=114 status=ok
// SIG undefined FUN_147d9e576(void)

void FUN_147d9e576(longlong *param_1,int param_2)

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



// FUNCTION 147d9e5e8 FUN_147d9e5e8 body=474 status=ok
// SIG undefined FUN_147d9e5e8(void)

void FUN_147d9e5e8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d9e7c4 FUN_147d9e7c4 body=32 status=ok
// SIG undefined FUN_147d9e7c4(void)

undefined8 FUN_147d9e7c4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TGCObjectScopeGuard");
  return param_2;
}



// FUNCTION 147d9e7e4 FUN_147d9e7e4 body=24 status=ok
// SIG undefined FUN_147d9e7e4(void)

void FUN_147d9e7e4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d9e7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147d9e7fc FUN_147d9e7fc body=29 status=ok
// SIG undefined FUN_147d9e7fc(void)

undefined8 FUN_147d9e7fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9e81a FUN_147d9e81a body=24 status=ok
// SIG undefined FUN_147d9e81a(void)

void FUN_147d9e81a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d9e82e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147d9e832 FUN_147d9e832 body=29 status=ok
// SIG undefined FUN_147d9e832(void)

undefined8 FUN_147d9e832(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9e850 FUN_147d9e850 body=350 status=ok
// SIG undefined FUN_147d9e850(void)

undefined4 * FUN_147d9e850(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147d9e9b0(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(int *)(local_40 + 2) = (int)puVar1[1];
  *(undefined4 *)((longlong)local_40 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147d9ea96(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147d9ebaa(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9e9b0 FUN_147d9e9b0 body=229 status=ok
// SIG undefined FUN_147d9e9b0(void)

int * FUN_147d9e9b0(longlong *param_1,int *param_2)

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



// FUNCTION 147d9ea96 FUN_147d9ea96 body=161 status=ok
// SIG undefined FUN_147d9ea96(void)

undefined8 FUN_147d9ea96(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147d9eb38(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d9eb38 FUN_147d9eb38 body=114 status=ok
// SIG undefined FUN_147d9eb38(void)

void FUN_147d9eb38(longlong *param_1,int param_2)

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



// FUNCTION 147d9ebaa FUN_147d9ebaa body=477 status=ok
// SIG undefined FUN_147d9ebaa(void)

void FUN_147d9ebaa(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d9ed88 FUN_147d9ed88 body=182 status=ok
// SIG undefined FUN_147d9ed88(void)

longlong FUN_147d9ed88(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"TSrcPosPitch",1);
  FUN_147440a6c(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"TSrcBuffer",1);
  FUN_1474409b8(param_1 + 0xea,*(undefined8 *)(param_2 + 0x28),L"TDestPosSize",1);
  FUN_147440a6c(param_1 + 0xf0,*(undefined8 *)(param_2 + 0x28),L"TDestTexture",1);
  return param_1;
}



// FUNCTION 147d9ee3e FUN_147d9ee3e body=101 status=ok
// SIG undefined FUN_147d9ee3e(void)

longlong FUN_147d9ee3e(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"SrcCopyBuffer",1);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"DestBuffer",1);
  return param_1;
}



// FUNCTION 147d9eea4 FUN_147d9eea4 body=101 status=ok
// SIG undefined FUN_147d9eea4(void)

longlong FUN_147d9eea4(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"SrcCopyBuffer",1);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"DestBuffer",1);
  return param_1;
}



// FUNCTION 147d9ef0a FUN_147d9ef0a body=190 status=ok
// SIG undefined FUN_147d9ef0a(void)

void FUN_147d9ef0a(void)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cb0f0f0;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14cb0f0fc = DAT_14cb0f0fc + 1;
  do {
    lVar5 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cb0f0e8 + lVar5) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb0f0e8 + -8 + lVar5), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,&DAT_14cb0f100), cVar3 != '\0'))) {
      lVar5 = lVar5 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cb0f0fc = DAT_14cb0f0fc + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147d9efa1;
      }
    }
    uVar4 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  DAT_14cb0f0fc = DAT_14cb0f0fc + -1;
LAB_147d9efa1:
  FUN_14474d06a(&DAT_14cb0f0e8,0);
  return;
}



// FUNCTION 147d9efc8 FUN_147d9efc8 body=277 status=ok
// SIG undefined FUN_147d9efc8(void)

undefined4 * FUN_147d9efc8(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147d9f0de(param_1,local_48);
  FUN_147d9f278(param_3,local_40);
  local_40[0x28] = 0xff;
  local_40[0x29] = 0xff;
  local_40[0x2a] = 0xff;
  local_40[0x2b] = 0xff;
  local_4c = local_48[0];
  bVar1 = *local_40;
  cVar3 = FUN_147d9f1cc(param_1,bVar1,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_40 + 0x2c) = uVar5;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x28) =
           *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147d9f364(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9f0de FUN_147d9f0de body=238 status=ok
// SIG undefined FUN_147d9f0de(void)

int * FUN_147d9f0de(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 147d9f1cc FUN_147d9f1cc body=172 status=ok
// SIG undefined FUN_147d9f1cc(void)

undefined8 FUN_147d9f1cc(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(char *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          if (*(longlong *)(puVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          uVar6 = *(undefined4 *)(param_3 + 0x10);
          uVar7 = *(undefined4 *)(param_3 + 0x14);
          uVar8 = *(undefined4 *)(param_3 + 0x18);
          uVar9 = *(undefined4 *)(param_3 + 0x1c);
          *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_3 + 0x20);
          puVar1[4] = uVar6;
          puVar1[5] = uVar7;
          puVar1[6] = uVar8;
          puVar1[7] = uVar9;
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_147d9f2ea(param_1,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = puVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d9f278 FUN_147d9f278 body=113 status=ok
// SIG undefined FUN_147d9f278(void)

undefined1 * FUN_147d9f278(undefined8 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)param_1[1];
  *param_2 = *(undefined1 *)*param_1;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)(param_2 + 8) = *puVar2;
  *(undefined4 *)(param_2 + 0xc) = uVar3;
  *(undefined4 *)(param_2 + 0x10) = uVar4;
  *(undefined4 *)(param_2 + 0x14) = uVar5;
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar1 = puVar2[6];
  _Src = *(void **)(puVar2 + 4);
  *(int *)(param_2 + 0x20) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 0x18,iVar1,0);
    memcpy(*(void **)(param_2 + 0x18),_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 147d9f2ea FUN_147d9f2ea body=122 status=ok
// SIG undefined FUN_147d9f2ea(void)

void FUN_147d9f2ea(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 147d9f364 FUN_147d9f364 body=414 status=ok
// SIG undefined FUN_147d9f364(void)

void FUN_147d9f364(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x30;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x2c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x28 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d9f504 FUN_147d9f504 body=62 status=ok
// SIG undefined FUN_147d9f504(void)

void FUN_147d9f504(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d9f542(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x90,8);
  }
  return;
}



// FUNCTION 147d9f542 FUN_147d9f542 body=112 status=ok
// SIG undefined FUN_147d9f542(void)

ulonglong FUN_147d9f542(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x90) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147d9f57c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x90,8);
      param_2 = param_2 / 0x90;
    }
  }
LAB_147d9f57c:
  return param_2 & 0xffffffff;
}



// FUNCTION 147d9f5b2 FUN_147d9f5b2 body=132 status=ok
// SIG undefined FUN_147d9f5b2(void)

void FUN_147d9f5b2(longlong param_1,int param_2)

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



// FUNCTION 147d9f638 FUN_147d9f638 body=42 status=ok
// SIG undefined FUN_147d9f638(void)

longlong FUN_147d9f638(longlong param_1,int param_2)

{
  FUN_145de9554(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9f662 FUN_147d9f662 body=38 status=ok
// SIG undefined FUN_147d9f662(void)

undefined8 FUN_147d9f662(undefined8 param_1,int param_2)

{
  FUN_145de9554();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9f68e FUN_147d9f68e body=107 status=ok
// SIG undefined FUN_147d9f68e(void)

undefined8 * FUN_147d9f68e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0f070) {
    FUN_144b3d300(&DAT_14cb0f070);
    if (DAT_14cb0f070 == -1) {
      DAT_14cb0f068 = 0;
      atexit(FUN_14377af17);
      _Init_thread_footer(&DAT_14cb0f070);
    }
  }
  return &DAT_14cb0f068;
}



// FUNCTION 147d9f70c FUN_147d9f70c body=42 status=ok
// SIG undefined FUN_147d9f70c(void)

longlong FUN_147d9f70c(longlong param_1,int param_2)

{
  FUN_14010ad76(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9f74e FUN_147d9f74e body=41 status=ok
// SIG undefined FUN_147d9f74e(void)

void FUN_147d9f74e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_147d9f796(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 147d9f778 FUN_147d9f778 body=29 status=ok
// SIG undefined FUN_147d9f778(void)

undefined8 FUN_147d9f778(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9f796 FUN_147d9f796 body=100 status=ok
// SIG undefined FUN_147d9f796(void)

void FUN_147d9f796(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147d9f7ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d9f7fa FUN_147d9f7fa body=31 status=ok
// SIG undefined FUN_147d9f7fa(void)

undefined8 FUN_147d9f7fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9f834 FUN_147d9f834 body=93 status=ok
// SIG undefined FUN_147d9f834(void)

void FUN_147d9f834(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aaf9310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147d9f892 FUN_147d9f892 body=93 status=ok
// SIG undefined FUN_147d9f892(void)

void FUN_147d9f892(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aaf9310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147d9f8f0 FUN_147d9f8f0 body=126 status=ok
// SIG undefined FUN_147d9f8f0(void)

void FUN_147d9f8f0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aaf9310;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d9f95f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d9f96e FUN_147d9f96e body=35 status=ok
// SIG undefined FUN_147d9f96e(void)

void FUN_147d9f96e(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147d9f98d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 147d9f992 FUN_147d9f992 body=31 status=ok
// SIG undefined FUN_147d9f992(void)

undefined8 FUN_147d9f992(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d9f9cc FUN_147d9f9cc body=101 status=ok
// SIG undefined FUN_147d9f9cc(void)

void FUN_147d9f9cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aaf9380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d9fa32 FUN_147d9fa32 body=101 status=ok
// SIG undefined FUN_147d9fa32(void)

void FUN_147d9fa32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aaf9380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d9fa98 FUN_147d9fa98 body=134 status=ok
// SIG undefined FUN_147d9fa98(void)

void FUN_147d9fa98(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aaf9380;
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
                    /* WARNING: Could not recover jumptable at 0x000147d9fb0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d9fb1e FUN_147d9fb1e body=39 status=ok
// SIG undefined FUN_147d9fb1e(void)

void FUN_147d9fb1e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147d9fb41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147d9fb46 FUN_147d9fb46 body=134 status=ok
// SIG undefined FUN_147d9fb46(void)

bool FUN_147d9fb46(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9fbcd FUN_147d9fbcd body=1236 status=ok
// SIG undefined FUN_147d9fbcd(void)

void FUN_147d9fbcd(longlong param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined2 *puVar21;
  int iVar22;
  longlong lVar23;
  undefined2 *puVar24;
  float fVar25;
  undefined1 auStack_3a8 [40];
  longlong *local_380;
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (1 < (int)param_2) {
    memset(local_368,0,0x2f0);
    local_370 = param_1 + (ulonglong)param_2 * 0x28 + -0x28;
    local_378 = param_1;
    fVar25 = logf((float)(int)param_2);
    local_368[0] = (int)(longlong)(fVar25 + fVar25);
    plVar16 = &local_378;
    do {
      puVar14 = (undefined8 *)*plVar16;
      puVar20 = (undefined8 *)plVar16[1];
      iVar19 = (int)plVar16[2];
      iVar22 = (int)((ulonglong)((longlong)puVar20 - (longlong)puVar14) >> 3);
      local_380 = plVar16;
      if (iVar19 != 0) {
LAB_147d9fc84:
        uVar15 = iVar22 * -0x33333333 + 1;
        if (8 < (int)uVar15) {
          uVar17 = (ulonglong)(uVar15 >> 1);
          uVar3 = puVar14[uVar17 * 5 + 4];
          uVar4 = puVar14[uVar17 * 5];
          uVar5 = (puVar14 + uVar17 * 5)[1];
          uVar6 = puVar14[uVar17 * 5 + 2];
          uVar7 = (puVar14 + uVar17 * 5 + 2)[1];
          puVar14[uVar17 * 5 + 4] = puVar14[4];
          uVar8 = *puVar14;
          uVar9 = puVar14[1];
          uVar10 = puVar14[3];
          puVar14[uVar17 * 5 + 2] = puVar14[2];
          (puVar14 + uVar17 * 5 + 2)[1] = uVar10;
          puVar14[uVar17 * 5] = uVar8;
          (puVar14 + uVar17 * 5)[1] = uVar9;
          puVar14[4] = uVar3;
          puVar14[2] = uVar6;
          puVar14[3] = uVar7;
          *puVar14 = uVar4;
          puVar14[1] = uVar5;
          puVar18 = puVar20 + 5;
          puVar13 = puVar14;
LAB_147d9fd04:
          puVar12 = puVar13;
          puVar13 = puVar12 + 5;
          if (puVar13 <= puVar20) {
            puVar21 = &DAT_149dfb77a;
            if (*(int *)(puVar12 + 6) != 0) {
              puVar21 = (undefined2 *)puVar12[5];
            }
            puVar24 = &DAT_149dfb77a;
            if (*(int *)(puVar14 + 1) != 0) {
              puVar24 = (undefined2 *)*puVar14;
            }
            lVar23 = 0;
            do {
              uVar1 = *(ushort *)((longlong)puVar24 + lVar23);
              uVar2 = *(ushort *)((longlong)puVar21 + lVar23);
              if (uVar1 == uVar2) {
                if (uVar1 == 0) goto LAB_147d9fd6b;
              }
              else {
                if (0x7f < (uVar2 | uVar1)) {
                  iVar22 = (uint)uVar1 - (uint)uVar2;
                  goto LAB_147d9fd6e;
                }
                if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
                  iVar22 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
                  goto LAB_147d9fd6e;
                }
              }
              lVar23 = lVar23 + 2;
            } while( true );
          }
          goto LAB_147d9fd73;
        }
        for (; puVar18 = puVar14, puVar13 = puVar14, puVar14 < puVar20; puVar20 = puVar20 + -5) {
joined_r0x000147d9ff5f:
          puVar12 = puVar13 + 5;
          if (puVar12 <= puVar20) {
            puVar21 = &DAT_149dfb77a;
            if (*(int *)(puVar13 + 6) != 0) {
              puVar21 = (undefined2 *)puVar13[5];
            }
            puVar24 = &DAT_149dfb77a;
            if (*(int *)(puVar18 + 1) != 0) {
              puVar24 = (undefined2 *)*puVar18;
            }
            lVar23 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar24 + lVar23);
              uVar2 = *(ushort *)((longlong)puVar21 + lVar23);
              puVar13 = puVar12;
              if (uVar1 != uVar2) break;
              if (uVar1 == 0) goto joined_r0x000147d9ff5f;
LAB_147d9ff9f:
              lVar23 = lVar23 + 2;
            }
            if ((uVar2 | uVar1) < 0x80) {
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[(uint)uVar2]) goto LAB_147d9ff9f;
              iVar19 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                       (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
            }
            else {
              iVar19 = (uint)uVar1 - (uint)uVar2;
            }
            if (iVar19 < 0) {
              puVar18 = puVar12;
            }
            goto joined_r0x000147d9ff5f;
          }
          local_58 = puVar18[4];
          local_78 = *puVar18;
          uStack_70 = puVar18[1];
          local_68 = puVar18[2];
          uStack_60 = puVar18[3];
          uVar6 = local_78;
          uVar7 = uStack_70;
          puVar18[4] = puVar20[4];
          uVar3 = *puVar20;
          uVar4 = puVar20[1];
          uVar5 = puVar20[3];
          puVar18[2] = puVar20[2];
          puVar18[3] = uVar5;
          *puVar18 = uVar3;
          puVar18[1] = uVar4;
          puVar20[4] = local_58;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          puVar20[2] = local_68;
          puVar20[3] = uStack_60;
          *(undefined4 *)puVar20 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar20 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_70._4_4_;
          local_78 = uVar6;
          uStack_70 = uVar7;
        }
        goto LAB_147da0045;
      }
LAB_147d9ff42:
      FUN_147da00a2(puVar14);
LAB_147da0045:
      plVar16 = local_380 + -3;
    } while (&local_378 <= plVar16);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147d9fd6b:
  iVar22 = 0;
LAB_147d9fd6e:
  if (iVar22 < 0) {
LAB_147d9fd73:
    puVar11 = puVar18;
    puVar18 = puVar11 + -5;
    if (puVar14 < puVar18) {
      puVar21 = &DAT_149dfb77a;
      if (*(int *)(puVar14 + 1) != 0) {
        puVar21 = (undefined2 *)*puVar14;
      }
      puVar24 = &DAT_149dfb77a;
      if (*(int *)(puVar11 + -4) != 0) {
        puVar24 = (undefined2 *)puVar11[-5];
      }
      lVar23 = 0;
      do {
        uVar1 = *(ushort *)((longlong)puVar24 + lVar23);
        uVar2 = *(ushort *)((longlong)puVar21 + lVar23);
        if (uVar1 == uVar2) {
          if (uVar1 == 0) goto LAB_147d9fddd;
        }
        else {
          if (0x7f < (uVar2 | uVar1)) {
            iVar22 = (uint)uVar1 - (uint)uVar2;
            goto LAB_147d9fde0;
          }
          if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
            iVar22 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2]
            ;
            goto LAB_147d9fde0;
          }
        }
        lVar23 = lVar23 + 2;
      } while( true );
    }
    goto LAB_147d9fde5;
  }
  goto LAB_147d9fd04;
LAB_147d9fddd:
  iVar22 = 0;
LAB_147d9fde0:
  if (iVar22 < 0) goto LAB_147d9fde5;
  goto LAB_147d9fd73;
LAB_147d9fde5:
  if (puVar13 <= puVar18) {
    uVar3 = puVar12[9];
    uVar4 = *puVar13;
    uVar5 = puVar12[6];
    uVar6 = puVar12[7];
    uVar7 = puVar12[8];
    puVar12[9] = puVar11[-1];
    uVar8 = *puVar18;
    uVar9 = puVar11[-4];
    uVar10 = puVar11[-2];
    puVar12[7] = puVar11[-3];
    puVar12[8] = uVar10;
    *puVar13 = uVar8;
    puVar12[6] = uVar9;
    puVar11[-1] = uVar3;
    puVar11[-3] = uVar6;
    puVar11[-2] = uVar7;
    *puVar18 = uVar4;
    puVar11[-4] = uVar5;
    goto LAB_147d9fd04;
  }
  local_58 = puVar14[4];
  local_78 = *puVar14;
  uStack_70 = puVar14[1];
  local_68 = puVar14[2];
  uStack_60 = puVar14[3];
  uVar6 = local_78;
  uVar7 = uStack_70;
  puVar14[4] = puVar11[-1];
  uVar3 = *puVar18;
  uVar4 = puVar11[-4];
  uVar5 = puVar11[-2];
  puVar14[2] = puVar11[-3];
  puVar14[3] = uVar5;
  *puVar14 = uVar3;
  puVar14[1] = uVar4;
  puVar11[-1] = local_58;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  puVar11[-3] = local_68;
  puVar11[-2] = uStack_60;
  *(undefined4 *)puVar18 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar11 + -0x24) = local_78._4_4_;
  *(undefined4 *)(puVar11 + -4) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar11 + -0x1c) = uStack_70._4_4_;
  iVar19 = iVar19 + -1;
  puVar11 = puVar11 + -10;
  local_78 = uVar6;
  uStack_70 = uVar7;
  if ((longlong)puVar11 - (longlong)puVar14 < (longlong)puVar20 - (longlong)puVar13) {
    if (puVar13 < puVar20) {
      *local_380 = (longlong)puVar13;
      local_380[1] = (longlong)puVar20;
      *(int *)(local_380 + 2) = iVar19;
      local_380 = local_380 + 3;
    }
    if (puVar18 <= puVar14 + 5) goto LAB_147da0045;
  }
  else {
    if (puVar14 + 5 < puVar18) {
      *local_380 = (longlong)puVar14;
      local_380[1] = (longlong)puVar11;
      *(int *)(local_380 + 2) = iVar19;
      local_380 = local_380 + 3;
    }
    puVar11 = puVar20;
    puVar14 = puVar13;
    if (puVar20 <= puVar13) goto LAB_147da0045;
  }
  iVar22 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar14) >> 3);
  puVar20 = puVar11;
  if (iVar19 == 0) goto LAB_147d9ff42;
  goto LAB_147d9fc84;
}



// FUNCTION 147da00a2 FUN_147da00a2 body=1102 status=ok
// SIG undefined FUN_147da00a2(void)

void FUN_147da00a2(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined2 *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined2 *puVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    iVar19 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      iVar17 = iVar19 * 2 + 1;
      iVar23 = iVar19;
      if (iVar17 < (int)param_2) {
LAB_147da00fd:
        iVar21 = iVar23 * 2 + 2;
        iVar22 = iVar17;
        if (iVar21 < (int)param_2) {
          puVar18 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar17 * 5 + 1) != 0) {
            puVar18 = (undefined2 *)param_1[(longlong)iVar17 * 5];
          }
          puVar14 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar21 * 5 + 1) != 0) {
            puVar14 = (undefined2 *)param_1[(longlong)iVar21 * 5];
          }
          lVar25 = 0;
          while( true ) {
            uVar4 = *(ushort *)((longlong)puVar14 + lVar25);
            uVar16 = (uint)uVar4;
            uVar5 = *(ushort *)((longlong)puVar18 + lVar25);
            uVar15 = (uint)uVar5;
            iVar22 = iVar21;
            if (uVar4 != uVar5) break;
            if (uVar4 == 0) goto LAB_147da017c;
LAB_147da014c:
            lVar25 = lVar25 + 2;
          }
          if ((uVar5 | uVar4) < 0x80) {
            uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_147da014c;
          }
          if ((int)(uVar16 - uVar15) < 0) {
            iVar22 = iVar17;
          }
        }
LAB_147da017c:
        lVar25 = (longlong)iVar22;
        puVar18 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar25 * 5 + 1) != 0) {
          puVar18 = (undefined2 *)param_1[lVar25 * 5];
        }
        lVar24 = (longlong)iVar23;
        puVar14 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar24 * 5 + 1) != 0) {
          puVar14 = (undefined2 *)param_1[lVar24 * 5];
        }
        puVar2 = param_1 + lVar24 * 5;
        puVar3 = param_1 + lVar25 * 5;
        lVar25 = 0;
        do {
          uVar4 = *(ushort *)((longlong)puVar14 + lVar25);
          uVar16 = (uint)uVar4;
          uVar5 = *(ushort *)((longlong)puVar18 + lVar25);
          uVar15 = (uint)uVar5;
          if (uVar4 == uVar5) {
            if (uVar4 == 0) break;
          }
          else {
            if (0x7f < (uVar5 | uVar4)) goto LAB_147da01f0;
            uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[uVar5]) goto LAB_147da01f0;
          }
          lVar25 = lVar25 + 2;
        } while( true );
      }
LAB_147da025d:
      bVar26 = iVar19 != 0;
      iVar19 = iVar19 + -1;
    } while (bVar26);
    if (1 < (int)param_2) {
      uVar20 = (ulonglong)param_2 - 1;
      local_48 = param_1[4];
      uVar6 = *param_1;
      uVar7 = param_1[1];
      uVar8 = param_1[2];
      uVar9 = param_1[3];
      param_1[4] = param_1[uVar20 * 5 + 4];
      uVar10 = param_1[uVar20 * 5];
      uVar11 = (param_1 + uVar20 * 5)[1];
      uVar12 = (param_1 + uVar20 * 5 + 2)[1];
      param_1[2] = param_1[uVar20 * 5 + 2];
      param_1[3] = uVar12;
      *param_1 = uVar10;
      param_1[1] = uVar11;
      param_1[uVar20 * 5 + 4] = local_48;
      local_68._0_4_ = (undefined4)uVar6;
      local_68._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar7;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_58._0_4_ = (undefined4)uVar8;
      local_58._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar9;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      puVar2 = param_1 + uVar20 * 5 + 2;
      *(undefined4 *)puVar2 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar2 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_50._4_4_;
      puVar2 = param_1 + uVar20 * 5;
      *(undefined4 *)puVar2 = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
      local_68 = uVar6;
      uStack_60 = uVar7;
      local_58 = uVar8;
      uStack_50 = uVar9;
      if (param_2 != 2) {
LAB_147da030d:
        iVar19 = 1;
        iVar17 = 0;
        iVar23 = 0;
LAB_147da0318:
        iVar17 = iVar17 + 2;
        lVar25 = (longlong)iVar17;
        iVar22 = iVar19;
        if (lVar25 < (longlong)uVar20) {
          puVar18 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar19 * 5 + 1) != 0) {
            puVar18 = (undefined2 *)param_1[(longlong)iVar19 * 5];
          }
          puVar14 = &DAT_149dfb77a;
          if (*(int *)(param_1 + lVar25 * 5 + 1) != 0) {
            puVar14 = (undefined2 *)param_1[lVar25 * 5];
          }
          lVar25 = 0;
          while( true ) {
            uVar4 = *(ushort *)((longlong)puVar14 + lVar25);
            uVar15 = (uint)uVar4;
            uVar5 = *(ushort *)((longlong)puVar18 + lVar25);
            uVar16 = (uint)uVar5;
            iVar22 = iVar17;
            if (uVar4 != uVar5) break;
            if (uVar4 == 0) goto LAB_147da0393;
LAB_147da0364:
            lVar25 = lVar25 + 2;
          }
          if ((uVar5 | uVar4) < 0x80) {
            uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_147da0364;
          }
          if ((int)(uVar15 - uVar16) < 0) {
            iVar22 = iVar19;
          }
        }
LAB_147da0393:
        lVar25 = (longlong)iVar22;
        puVar18 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar25 * 5 + 1) != 0) {
          puVar18 = (undefined2 *)param_1[lVar25 * 5];
        }
        lVar24 = (longlong)iVar23;
        puVar14 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar24 * 5 + 1) != 0) {
          puVar14 = (undefined2 *)param_1[lVar24 * 5];
        }
        puVar2 = param_1 + lVar24 * 5;
        puVar3 = param_1 + lVar25 * 5;
        lVar25 = 0;
        do {
          uVar4 = *(ushort *)((longlong)puVar14 + lVar25);
          uVar15 = (uint)uVar4;
          uVar5 = *(ushort *)((longlong)puVar18 + lVar25);
          uVar16 = (uint)uVar5;
          if (uVar4 == uVar5) {
            if (uVar4 == 0) goto LAB_147da0476;
          }
          else {
            if (0x7f < (uVar5 | uVar4)) goto LAB_147da0403;
            uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[uVar5]) goto LAB_147da0403;
          }
          lVar25 = lVar25 + 2;
        } while( true );
      }
    }
  }
LAB_147da02e0:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147da01f0:
  if (-1 < (int)(uVar16 - uVar15)) goto LAB_147da025d;
  local_48 = puVar2[4];
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar2[4] = puVar3[4];
  uVar10 = *puVar3;
  uVar11 = puVar3[1];
  uVar12 = puVar3[3];
  puVar2[2] = puVar3[2];
  puVar2[3] = uVar12;
  *puVar2 = uVar10;
  puVar2[1] = uVar11;
  puVar3[4] = local_48;
  local_68._0_4_ = (undefined4)uVar6;
  local_68._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar7;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_58._0_4_ = (undefined4)uVar8;
  local_58._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar9;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(puVar3 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar3 + 0x14) = local_58._4_4_;
  *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_50._4_4_;
  *(undefined4 *)puVar3 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
  *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
  iVar17 = iVar22 * 2 + 1;
  local_68 = uVar6;
  uStack_60 = uVar7;
  local_58 = uVar8;
  uStack_50 = uVar9;
  iVar23 = iVar22;
  if ((int)param_2 <= iVar17) goto LAB_147da025d;
  goto LAB_147da00fd;
LAB_147da0403:
  if (-1 < (int)(uVar15 - uVar16)) goto LAB_147da0476;
  uVar6 = puVar2[4];
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  puVar2[4] = puVar3[4];
  uVar11 = *puVar3;
  uVar12 = puVar3[1];
  uVar13 = puVar3[3];
  puVar2[2] = puVar3[2];
  puVar2[3] = uVar13;
  *puVar2 = uVar11;
  puVar2[1] = uVar12;
  puVar3[4] = uVar6;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  *puVar3 = uVar7;
  puVar3[1] = uVar8;
  iVar17 = iVar22 * 2;
  iVar19 = iVar22 * 2 + 1;
  iVar23 = iVar22;
  if ((longlong)uVar20 <= (longlong)iVar19) goto LAB_147da0476;
  goto LAB_147da0318;
LAB_147da0476:
  uVar1 = uVar20 - 1;
  local_48 = param_1[4];
  uVar6 = *param_1;
  uVar7 = param_1[1];
  uVar8 = param_1[2];
  uVar9 = param_1[3];
  param_1[4] = param_1[uVar1 * 5 + 4];
  uVar10 = param_1[uVar1 * 5];
  uVar11 = (param_1 + uVar1 * 5)[1];
  uVar12 = (param_1 + uVar1 * 5 + 2)[1];
  param_1[2] = param_1[uVar1 * 5 + 2];
  param_1[3] = uVar12;
  *param_1 = uVar10;
  param_1[1] = uVar11;
  param_1[uVar1 * 5 + 4] = local_48;
  local_68._0_4_ = (undefined4)uVar6;
  local_68._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar7;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_58._0_4_ = (undefined4)uVar8;
  local_58._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar9;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  puVar2 = param_1 + uVar1 * 5 + 2;
  *(undefined4 *)puVar2 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar2 + 4) = local_58._4_4_;
  *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_50._4_4_;
  puVar2 = param_1 + uVar1 * 5;
  *(undefined4 *)puVar2 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
  *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
  bVar26 = uVar20 < 3;
  uVar20 = uVar1;
  local_68 = uVar6;
  uStack_60 = uVar7;
  local_58 = uVar8;
  uStack_50 = uVar9;
  if (bVar26) goto LAB_147da02e0;
  goto LAB_147da030d;
}



// FUNCTION 147da04f2 FUN_147da04f2 body=31 status=ok
// SIG undefined FUN_147da04f2(void)

undefined8 FUN_147da04f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147da0534 FUN_147da0534 body=93 status=ok
// SIG undefined FUN_147da0534(void)

void FUN_147da0534(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aaf9460;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aaf93f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147da0592 FUN_147da0592 body=126 status=ok
// SIG undefined FUN_147da0592(void)

void FUN_147da0592(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aaf9460;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aaf93f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147da0601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147da0610 FUN_147da0610 body=23 status=ok
// SIG undefined FUN_147da0610(void)

undefined8 FUN_147da0610(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 147da062a FUN_147da062a body=132 status=ok
// SIG undefined FUN_147da062a(void)

void FUN_147da062a(longlong param_1,int param_2)

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



// FUNCTION 147da06b0 FUN_147da06b0 body=62 status=ok
// SIG undefined FUN_147da06b0(void)

void FUN_147da06b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147da06ee(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,4);
  }
  return;
}



// FUNCTION 147da06ee FUN_147da06ee body=112 status=ok
// SIG undefined FUN_147da06ee(void)

ulonglong FUN_147da06ee(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147da0728;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,4);
      param_2 = param_2 / 0x18;
    }
  }
LAB_147da0728:
  return param_2 & 0xffffffff;
}



// FUNCTION 147da075e FUN_147da075e body=1018 status=ok
// SIG undefined FUN_147da075e(void)

void FUN_147da075e(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined1 auStack_3a8 [32];
  longlong *local_388;
  int local_37c;
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (1 < (int)param_2) {
    memset(local_368,0,0x2f0);
    local_370 = param_1 + (ulonglong)param_2 * 0x28 + -0x28;
    local_378 = param_1;
    fVar21 = logf((float)(int)param_2);
    local_368[0] = (int)(longlong)(fVar21 + fVar21);
    plVar12 = &local_378;
    do {
      puVar15 = (undefined8 *)*plVar12;
      puVar14 = (undefined8 *)plVar12[1];
      local_37c = (int)plVar12[2];
      iVar8 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar15) >> 3);
      puVar17 = puVar14;
      puVar20 = puVar15;
      local_388 = plVar12;
      if (local_37c != 0) {
LAB_147da0831:
        uVar9 = iVar8 * -0x33333333 + 1;
        plVar12 = local_388;
        if (8 < (int)uVar9) {
          uVar10 = (ulonglong)(uVar9 >> 1);
          local_58 = puVar15[uVar10 * 5 + 4];
          uVar1 = puVar15[uVar10 * 5];
          uVar2 = (puVar15 + uVar10 * 5)[1];
          local_68 = puVar15[uVar10 * 5 + 2];
          uStack_60 = (puVar15 + uVar10 * 5 + 2)[1];
          puVar15[uVar10 * 5 + 4] = puVar15[4];
          uVar3 = *puVar15;
          uVar4 = puVar15[1];
          uVar5 = puVar15[3];
          puVar15[uVar10 * 5 + 2] = puVar15[2];
          (puVar15 + uVar10 * 5 + 2)[1] = uVar5;
          puVar15[uVar10 * 5] = uVar3;
          (puVar15 + uVar10 * 5)[1] = uVar4;
          puVar15[4] = local_58;
          local_78._0_4_ = (undefined4)uVar1;
          local_78._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
          uStack_70._0_4_ = (undefined4)uVar2;
          uStack_70._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          puVar15[2] = local_68;
          puVar15[3] = uStack_60;
          *(undefined4 *)puVar15 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar15 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_70._4_4_;
          puVar13 = puVar17 + 5;
          puVar16 = puVar15;
          local_78 = uVar1;
          uStack_70 = uVar2;
          do {
            puVar6 = puVar16 + 5;
            puVar18 = puVar16 + 5;
            do {
              puVar16 = puVar18;
              puVar19 = puVar6;
              if (puVar17 < puVar16) break;
              cVar7 = FUN_147da0e20(puVar15,puVar16);
              puVar6 = puVar19 + 5;
              puVar18 = puVar16 + 5;
            } while (cVar7 == '\0');
            puVar6 = puVar13 + -10;
            do {
              puVar18 = puVar13;
              puVar11 = puVar6;
              puVar13 = puVar18 + -5;
              if (puVar13 <= puVar15) break;
              cVar7 = FUN_147da0e20(puVar13,puVar15);
              puVar6 = puVar11 + -5;
            } while (cVar7 == '\0');
            if (puVar13 < puVar16) goto LAB_147da0969;
            local_58 = puVar16[4];
            uVar1 = *puVar16;
            uVar2 = puVar16[1];
            local_68 = puVar16[2];
            uStack_60 = puVar16[3];
            puVar16[4] = puVar18[-1];
            uVar3 = *puVar13;
            uVar4 = puVar18[-4];
            uVar5 = puVar18[-2];
            puVar16[2] = puVar18[-3];
            puVar16[3] = uVar5;
            *puVar16 = uVar3;
            puVar16[1] = uVar4;
            puVar18[-1] = local_58;
            local_78._0_4_ = (undefined4)uVar1;
            local_78._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_70._0_4_ = (undefined4)uVar2;
            uStack_70._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            puVar18[-3] = local_68;
            puVar18[-2] = uStack_60;
            *(undefined4 *)puVar13 = (undefined4)local_78;
            *(undefined4 *)((longlong)puVar18 + -0x24) = local_78._4_4_;
            *(undefined4 *)(puVar18 + -4) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)puVar18 + -0x1c) = uStack_70._4_4_;
            local_78 = uVar1;
            uStack_70 = uVar2;
          } while( true );
        }
        for (; local_388 = plVar12, puVar20 = puVar15, puVar14 = puVar15, puVar15 < puVar17;
            puVar17 = puVar17 + -5) {
          while (puVar13 = puVar20, puVar14 = puVar14 + 5, puVar14 <= puVar17) {
            cVar7 = FUN_147da0e20(puVar13,puVar14);
            puVar20 = puVar14;
            if (cVar7 == '\0') {
              puVar20 = puVar13;
            }
          }
          local_58 = puVar13[4];
          local_78 = *puVar13;
          uStack_70 = puVar13[1];
          local_68 = puVar13[2];
          uStack_60 = puVar13[3];
          uVar4 = local_78;
          uVar5 = uStack_70;
          puVar13[4] = puVar17[4];
          uVar1 = *puVar17;
          uVar2 = puVar17[1];
          uVar3 = puVar17[3];
          puVar13[2] = puVar17[2];
          puVar13[3] = uVar3;
          *puVar13 = uVar1;
          puVar13[1] = uVar2;
          puVar17[4] = local_58;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          puVar17[2] = local_68;
          puVar17[3] = uStack_60;
          *(undefined4 *)puVar17 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar17 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_70._4_4_;
          plVar12 = local_388;
          local_78 = uVar4;
          uStack_70 = uVar5;
        }
        goto LAB_147da0b2f;
      }
LAB_147da0b49:
      FUN_147da0b59(puVar15);
      plVar12 = local_388;
LAB_147da0b2f:
      plVar12 = plVar12 + -3;
    } while (&local_378 <= plVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147da0969:
  local_58 = puVar15[4];
  local_78 = *puVar15;
  uStack_70 = puVar15[1];
  local_68 = puVar15[2];
  uStack_60 = puVar15[3];
  uVar4 = local_78;
  uVar5 = uStack_70;
  puVar15[4] = puVar18[-1];
  uVar1 = *puVar13;
  uVar2 = puVar18[-4];
  uVar3 = puVar18[-2];
  puVar15[2] = puVar18[-3];
  puVar15[3] = uVar3;
  *puVar15 = uVar1;
  puVar15[1] = uVar2;
  puVar18[-1] = local_58;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  puVar18[-3] = local_68;
  puVar18[-2] = uStack_60;
  *(undefined4 *)puVar13 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar18 + -0x24) = local_78._4_4_;
  *(undefined4 *)(puVar18 + -4) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar18 + -0x1c) = uStack_70._4_4_;
  local_37c = local_37c + -1;
  puVar18 = puVar18 + -10;
  local_78 = uVar4;
  uStack_70 = uVar5;
  if ((longlong)puVar11 - (longlong)puVar20 < (longlong)puVar14 - (longlong)puVar19) {
    plVar12 = local_388;
    if (puVar16 < puVar17) {
      *local_388 = (longlong)puVar16;
      local_388[1] = (longlong)puVar17;
      *(int *)(local_388 + 2) = local_37c;
      plVar12 = local_388 + 3;
    }
    puVar14 = puVar11;
    puVar19 = puVar15;
    if (puVar13 <= puVar15 + 5) goto LAB_147da0b2f;
  }
  else {
    if (puVar15 + 5 < puVar13) {
      *local_388 = (longlong)puVar15;
      local_388[1] = (longlong)puVar18;
      *(int *)(local_388 + 2) = local_37c;
      local_388 = local_388 + 3;
    }
    plVar12 = local_388;
    puVar15 = puVar16;
    puVar18 = puVar17;
    puVar14 = puVar17;
    if (puVar17 <= puVar16) goto LAB_147da0b2f;
  }
  local_388 = plVar12;
  iVar8 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar19) >> 3);
  puVar17 = puVar18;
  puVar20 = puVar19;
  if (local_37c == 0) goto LAB_147da0b49;
  goto LAB_147da0831;
}



// FUNCTION 147da0b59 FUN_147da0b59 body=710 status=ok
// SIG undefined FUN_147da0b59(void)

void FUN_147da0b59(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    iVar16 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar14 = iVar16;
joined_r0x000147da0b9e:
    do {
      iVar12 = iVar16 * 2 + 1;
      if (iVar12 < (int)param_2) {
        iVar13 = iVar16 * 2 + 2;
        if ((iVar13 < (int)param_2) &&
           (cVar11 = FUN_147da0e20(param_1 + (longlong)iVar13 * 5,param_1 + (longlong)iVar12 * 5),
           cVar11 == '\0')) {
          iVar12 = iVar13;
        }
        puVar2 = param_1 + (longlong)iVar16 * 5;
        puVar3 = param_1 + (longlong)iVar12 * 5;
        cVar11 = FUN_147da0e20(puVar2,puVar3);
        if (cVar11 != '\0') {
          local_48 = puVar2[4];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          local_58 = puVar2[2];
          uStack_50 = puVar2[3];
          puVar2[4] = puVar3[4];
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          uVar8 = puVar3[3];
          puVar2[2] = puVar3[2];
          puVar2[3] = uVar8;
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar3[4] = local_48;
          local_68._0_4_ = (undefined4)uVar4;
          local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar5;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar3[2] = local_58;
          puVar3[3] = uStack_50;
          *(undefined4 *)puVar3 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
          iVar16 = iVar12;
          local_68 = uVar4;
          uStack_60 = uVar5;
          goto joined_r0x000147da0b9e;
        }
      }
      bVar17 = iVar14 != 0;
      iVar16 = iVar14 + -1;
      iVar14 = iVar16;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar15 = (ulonglong)param_2 - 1;
      local_48 = param_1[4];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      param_1[4] = param_1[uVar15 * 5 + 4];
      uVar8 = param_1[uVar15 * 5];
      uVar9 = (param_1 + uVar15 * 5)[1];
      uVar10 = (param_1 + uVar15 * 5 + 2)[1];
      param_1[2] = param_1[uVar15 * 5 + 2];
      param_1[3] = uVar10;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1[uVar15 * 5 + 4] = local_48;
      local_68._0_4_ = (undefined4)uVar4;
      local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar5;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_58._0_4_ = (undefined4)uVar6;
      local_58._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar7;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = param_1 + uVar15 * 5 + 2;
      *(undefined4 *)puVar2 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar2 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_50._4_4_;
      puVar2 = param_1 + uVar15 * 5;
      *(undefined4 *)puVar2 = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
      local_68 = uVar4;
      uStack_60 = uVar5;
      local_58 = uVar6;
      uStack_50 = uVar7;
      if (param_2 != 2) {
        do {
          iVar16 = 0;
          iVar12 = 1;
          iVar14 = 0;
          do {
            iVar16 = iVar16 + 2;
            iVar13 = iVar12;
            if (((longlong)iVar16 < (longlong)uVar15) &&
               (cVar11 = FUN_147da0e20(param_1 + (longlong)iVar16 * 5,param_1 + (longlong)iVar12 * 5
                                      ), cVar11 == '\0')) {
              iVar13 = iVar16;
            }
            puVar2 = param_1 + (longlong)iVar14 * 5;
            puVar3 = param_1 + (longlong)iVar13 * 5;
            cVar11 = FUN_147da0e20(puVar2,puVar3);
            if (cVar11 == '\0') break;
            local_48 = puVar2[4];
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            puVar2[4] = puVar3[4];
            uVar8 = *puVar3;
            uVar9 = puVar3[1];
            uVar10 = puVar3[3];
            puVar2[2] = puVar3[2];
            puVar2[3] = uVar10;
            *puVar2 = uVar8;
            puVar2[1] = uVar9;
            puVar3[4] = local_48;
            local_68._0_4_ = (undefined4)uVar4;
            local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar5;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            local_58._0_4_ = (undefined4)uVar6;
            local_58._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar7;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
            *(undefined4 *)(puVar3 + 2) = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar3 + 0x14) = local_58._4_4_;
            *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_50._4_4_;
            *(undefined4 *)puVar3 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
            *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
            iVar16 = iVar13 * 2;
            iVar12 = iVar13 * 2 + 1;
            local_68 = uVar4;
            uStack_60 = uVar5;
            local_58 = uVar6;
            uStack_50 = uVar7;
            iVar14 = iVar13;
          } while ((longlong)iVar12 < (longlong)uVar15);
          uVar1 = uVar15 - 1;
          local_48 = param_1[4];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          param_1[4] = param_1[uVar1 * 5 + 4];
          uVar8 = param_1[uVar1 * 5];
          uVar9 = (param_1 + uVar1 * 5)[1];
          uVar10 = (param_1 + uVar1 * 5 + 2)[1];
          param_1[2] = param_1[uVar1 * 5 + 2];
          param_1[3] = uVar10;
          *param_1 = uVar8;
          param_1[1] = uVar9;
          param_1[uVar1 * 5 + 4] = local_48;
          local_68._0_4_ = (undefined4)uVar4;
          local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar5;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_58._0_4_ = (undefined4)uVar6;
          local_58._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar7;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar2 = param_1 + uVar1 * 5 + 2;
          *(undefined4 *)puVar2 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar2 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_50._4_4_;
          puVar2 = param_1 + uVar1 * 5;
          *(undefined4 *)puVar2 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
          bVar17 = 2 < uVar15;
          uVar15 = uVar1;
          local_68 = uVar4;
          uStack_60 = uVar5;
          local_58 = uVar6;
          uStack_50 = uVar7;
        } while (bVar17);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147da0e20 FUN_147da0e20 body=66 status=ok
// SIG undefined FUN_147da0e20(void)

uint FUN_147da0e20(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_144a78538();
  if (iVar1 < 0) {
    uVar2 = 1;
  }
  else if (*param_1 == *param_2) {
    uVar2 = FUN_144a78538(param_1 + 2,param_2 + 2);
    uVar2 = uVar2 >> 0x1f;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147da0e62 FUN_147da0e62 body=1018 status=ok
// SIG undefined FUN_147da0e62(void)

void FUN_147da0e62(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined1 auStack_3a8 [32];
  longlong *local_388;
  int local_37c;
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (1 < (int)param_2) {
    memset(local_368,0,0x2f0);
    local_370 = param_1 + (ulonglong)param_2 * 0x28 + -0x28;
    local_378 = param_1;
    fVar21 = logf((float)(int)param_2);
    local_368[0] = (int)(longlong)(fVar21 + fVar21);
    plVar12 = &local_378;
    do {
      puVar15 = (undefined8 *)*plVar12;
      puVar14 = (undefined8 *)plVar12[1];
      local_37c = (int)plVar12[2];
      iVar8 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar15) >> 3);
      puVar17 = puVar14;
      puVar20 = puVar15;
      local_388 = plVar12;
      if (local_37c != 0) {
LAB_147da0f35:
        uVar9 = iVar8 * -0x33333333 + 1;
        plVar12 = local_388;
        if (8 < (int)uVar9) {
          uVar10 = (ulonglong)(uVar9 >> 1);
          local_58 = puVar15[uVar10 * 5 + 4];
          uVar1 = puVar15[uVar10 * 5];
          uVar2 = (puVar15 + uVar10 * 5)[1];
          local_68 = puVar15[uVar10 * 5 + 2];
          uStack_60 = (puVar15 + uVar10 * 5 + 2)[1];
          puVar15[uVar10 * 5 + 4] = puVar15[4];
          uVar3 = *puVar15;
          uVar4 = puVar15[1];
          uVar5 = puVar15[3];
          puVar15[uVar10 * 5 + 2] = puVar15[2];
          (puVar15 + uVar10 * 5 + 2)[1] = uVar5;
          puVar15[uVar10 * 5] = uVar3;
          (puVar15 + uVar10 * 5)[1] = uVar4;
          puVar15[4] = local_58;
          local_78._0_4_ = (undefined4)uVar1;
          local_78._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
          uStack_70._0_4_ = (undefined4)uVar2;
          uStack_70._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          puVar15[2] = local_68;
          puVar15[3] = uStack_60;
          *(undefined4 *)puVar15 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar15 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_70._4_4_;
          puVar13 = puVar17 + 5;
          puVar16 = puVar15;
          local_78 = uVar1;
          uStack_70 = uVar2;
          do {
            puVar6 = puVar16 + 5;
            puVar18 = puVar16 + 5;
            do {
              puVar16 = puVar18;
              puVar19 = puVar6;
              if (puVar17 < puVar16) break;
              cVar7 = FUN_147da1524(puVar15,puVar16);
              puVar6 = puVar19 + 5;
              puVar18 = puVar16 + 5;
            } while (cVar7 == '\0');
            puVar6 = puVar13 + -10;
            do {
              puVar18 = puVar13;
              puVar11 = puVar6;
              puVar13 = puVar18 + -5;
              if (puVar13 <= puVar15) break;
              cVar7 = FUN_147da1524(puVar13,puVar15);
              puVar6 = puVar11 + -5;
            } while (cVar7 == '\0');
            if (puVar13 < puVar16) goto LAB_147da106d;
            local_58 = puVar16[4];
            uVar1 = *puVar16;
            uVar2 = puVar16[1];
            local_68 = puVar16[2];
            uStack_60 = puVar16[3];
            puVar16[4] = puVar18[-1];
            uVar3 = *puVar13;
            uVar4 = puVar18[-4];
            uVar5 = puVar18[-2];
            puVar16[2] = puVar18[-3];
            puVar16[3] = uVar5;
            *puVar16 = uVar3;
            puVar16[1] = uVar4;
            puVar18[-1] = local_58;
            local_78._0_4_ = (undefined4)uVar1;
            local_78._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_70._0_4_ = (undefined4)uVar2;
            uStack_70._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            puVar18[-3] = local_68;
            puVar18[-2] = uStack_60;
            *(undefined4 *)puVar13 = (undefined4)local_78;
            *(undefined4 *)((longlong)puVar18 + -0x24) = local_78._4_4_;
            *(undefined4 *)(puVar18 + -4) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)puVar18 + -0x1c) = uStack_70._4_4_;
            local_78 = uVar1;
            uStack_70 = uVar2;
          } while( true );
        }
        for (; local_388 = plVar12, puVar20 = puVar15, puVar14 = puVar15, puVar15 < puVar17;
            puVar17 = puVar17 + -5) {
          while (puVar13 = puVar20, puVar14 = puVar14 + 5, puVar14 <= puVar17) {
            cVar7 = FUN_147da1524(puVar13,puVar14);
            puVar20 = puVar14;
            if (cVar7 == '\0') {
              puVar20 = puVar13;
            }
          }
          local_58 = puVar13[4];
          local_78 = *puVar13;
          uStack_70 = puVar13[1];
          local_68 = puVar13[2];
          uStack_60 = puVar13[3];
          uVar4 = local_78;
          uVar5 = uStack_70;
          puVar13[4] = puVar17[4];
          uVar1 = *puVar17;
          uVar2 = puVar17[1];
          uVar3 = puVar17[3];
          puVar13[2] = puVar17[2];
          puVar13[3] = uVar3;
          *puVar13 = uVar1;
          puVar13[1] = uVar2;
          puVar17[4] = local_58;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          puVar17[2] = local_68;
          puVar17[3] = uStack_60;
          *(undefined4 *)puVar17 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar17 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_70._4_4_;
          plVar12 = local_388;
          local_78 = uVar4;
          uStack_70 = uVar5;
        }
        goto LAB_147da1233;
      }
LAB_147da124d:
      FUN_147da125d(puVar15);
      plVar12 = local_388;
LAB_147da1233:
      plVar12 = plVar12 + -3;
    } while (&local_378 <= plVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147da106d:
  local_58 = puVar15[4];
  local_78 = *puVar15;
  uStack_70 = puVar15[1];
  local_68 = puVar15[2];
  uStack_60 = puVar15[3];
  uVar4 = local_78;
  uVar5 = uStack_70;
  puVar15[4] = puVar18[-1];
  uVar1 = *puVar13;
  uVar2 = puVar18[-4];
  uVar3 = puVar18[-2];
  puVar15[2] = puVar18[-3];
  puVar15[3] = uVar3;
  *puVar15 = uVar1;
  puVar15[1] = uVar2;
  puVar18[-1] = local_58;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  puVar18[-3] = local_68;
  puVar18[-2] = uStack_60;
  *(undefined4 *)puVar13 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar18 + -0x24) = local_78._4_4_;
  *(undefined4 *)(puVar18 + -4) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar18 + -0x1c) = uStack_70._4_4_;
  local_37c = local_37c + -1;
  puVar18 = puVar18 + -10;
  local_78 = uVar4;
  uStack_70 = uVar5;
  if ((longlong)puVar11 - (longlong)puVar20 < (longlong)puVar14 - (longlong)puVar19) {
    plVar12 = local_388;
    if (puVar16 < puVar17) {
      *local_388 = (longlong)puVar16;
      local_388[1] = (longlong)puVar17;
      *(int *)(local_388 + 2) = local_37c;
      plVar12 = local_388 + 3;
    }
    puVar14 = puVar11;
    puVar19 = puVar15;
    if (puVar13 <= puVar15 + 5) goto LAB_147da1233;
  }
  else {
    if (puVar15 + 5 < puVar13) {
      *local_388 = (longlong)puVar15;
      local_388[1] = (longlong)puVar18;
      *(int *)(local_388 + 2) = local_37c;
      local_388 = local_388 + 3;
    }
    plVar12 = local_388;
    puVar15 = puVar16;
    puVar18 = puVar17;
    puVar14 = puVar17;
    if (puVar17 <= puVar16) goto LAB_147da1233;
  }
  local_388 = plVar12;
  iVar8 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar19) >> 3);
  puVar17 = puVar18;
  puVar20 = puVar19;
  if (local_37c == 0) goto LAB_147da124d;
  goto LAB_147da0f35;
}



// FUNCTION 147da125d FUN_147da125d body=710 status=ok
// SIG undefined FUN_147da125d(void)

void FUN_147da125d(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    iVar16 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar14 = iVar16;
joined_r0x000147da12a2:
    do {
      iVar12 = iVar16 * 2 + 1;
      if (iVar12 < (int)param_2) {
        iVar13 = iVar16 * 2 + 2;
        if ((iVar13 < (int)param_2) &&
           (cVar11 = FUN_147da1524(param_1 + (longlong)iVar13 * 5,param_1 + (longlong)iVar12 * 5),
           cVar11 == '\0')) {
          iVar12 = iVar13;
        }
        puVar2 = param_1 + (longlong)iVar16 * 5;
        puVar3 = param_1 + (longlong)iVar12 * 5;
        cVar11 = FUN_147da1524(puVar2,puVar3);
        if (cVar11 != '\0') {
          local_48 = puVar2[4];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          local_58 = puVar2[2];
          uStack_50 = puVar2[3];
          puVar2[4] = puVar3[4];
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          uVar8 = puVar3[3];
          puVar2[2] = puVar3[2];
          puVar2[3] = uVar8;
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar3[4] = local_48;
          local_68._0_4_ = (undefined4)uVar4;
          local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar5;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar3[2] = local_58;
          puVar3[3] = uStack_50;
          *(undefined4 *)puVar3 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
          iVar16 = iVar12;
          local_68 = uVar4;
          uStack_60 = uVar5;
          goto joined_r0x000147da12a2;
        }
      }
      bVar17 = iVar14 != 0;
      iVar16 = iVar14 + -1;
      iVar14 = iVar16;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar15 = (ulonglong)param_2 - 1;
      local_48 = param_1[4];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      param_1[4] = param_1[uVar15 * 5 + 4];
      uVar8 = param_1[uVar15 * 5];
      uVar9 = (param_1 + uVar15 * 5)[1];
      uVar10 = (param_1 + uVar15 * 5 + 2)[1];
      param_1[2] = param_1[uVar15 * 5 + 2];
      param_1[3] = uVar10;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1[uVar15 * 5 + 4] = local_48;
      local_68._0_4_ = (undefined4)uVar4;
      local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar5;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_58._0_4_ = (undefined4)uVar6;
      local_58._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar7;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = param_1 + uVar15 * 5 + 2;
      *(undefined4 *)puVar2 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar2 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_50._4_4_;
      puVar2 = param_1 + uVar15 * 5;
      *(undefined4 *)puVar2 = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
      local_68 = uVar4;
      uStack_60 = uVar5;
      local_58 = uVar6;
      uStack_50 = uVar7;
      if (param_2 != 2) {
        do {
          iVar16 = 0;
          iVar12 = 1;
          iVar14 = 0;
          do {
            iVar16 = iVar16 + 2;
            iVar13 = iVar12;
            if (((longlong)iVar16 < (longlong)uVar15) &&
               (cVar11 = FUN_147da1524(param_1 + (longlong)iVar16 * 5,param_1 + (longlong)iVar12 * 5
                                      ), cVar11 == '\0')) {
              iVar13 = iVar16;
            }
            puVar2 = param_1 + (longlong)iVar14 * 5;
            puVar3 = param_1 + (longlong)iVar13 * 5;
            cVar11 = FUN_147da1524(puVar2,puVar3);
            if (cVar11 == '\0') break;
            local_48 = puVar2[4];
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            puVar2[4] = puVar3[4];
            uVar8 = *puVar3;
            uVar9 = puVar3[1];
            uVar10 = puVar3[3];
            puVar2[2] = puVar3[2];
            puVar2[3] = uVar10;
            *puVar2 = uVar8;
            puVar2[1] = uVar9;
            puVar3[4] = local_48;
            local_68._0_4_ = (undefined4)uVar4;
            local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar5;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            local_58._0_4_ = (undefined4)uVar6;
            local_58._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar7;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
            *(undefined4 *)(puVar3 + 2) = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar3 + 0x14) = local_58._4_4_;
            *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_50._4_4_;
            *(undefined4 *)puVar3 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
            *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
            iVar16 = iVar13 * 2;
            iVar12 = iVar13 * 2 + 1;
            local_68 = uVar4;
            uStack_60 = uVar5;
            local_58 = uVar6;
            uStack_50 = uVar7;
            iVar14 = iVar13;
          } while ((longlong)iVar12 < (longlong)uVar15);
          uVar1 = uVar15 - 1;
          local_48 = param_1[4];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          param_1[4] = param_1[uVar1 * 5 + 4];
          uVar8 = param_1[uVar1 * 5];
          uVar9 = (param_1 + uVar1 * 5)[1];
          uVar10 = (param_1 + uVar1 * 5 + 2)[1];
          param_1[2] = param_1[uVar1 * 5 + 2];
          param_1[3] = uVar10;
          *param_1 = uVar8;
          param_1[1] = uVar9;
          param_1[uVar1 * 5 + 4] = local_48;
          local_68._0_4_ = (undefined4)uVar4;
          local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar5;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_58._0_4_ = (undefined4)uVar6;
          local_58._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar7;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar2 = param_1 + uVar1 * 5 + 2;
          *(undefined4 *)puVar2 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar2 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_50._4_4_;
          puVar2 = param_1 + uVar1 * 5;
          *(undefined4 *)puVar2 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
          bVar17 = 2 < uVar15;
          uVar15 = uVar1;
          local_68 = uVar4;
          uStack_60 = uVar5;
          local_58 = uVar6;
          uStack_50 = uVar7;
        } while (bVar17);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147da1524 FUN_147da1524 body=99 status=ok
// SIG undefined FUN_147da1524(void)

ulonglong FUN_147da1524(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined7 uVar3;
  
  iVar1 = FUN_144a78538();
  uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (iVar1 < 0) goto LAB_147da1579;
  if (*param_1 == *param_2) {
    iVar1 = FUN_144a78538(param_1 + 2,param_2 + 2);
    if (iVar1 < 0) goto LAB_147da1579;
    if (param_1[2] == param_2[2]) {
      uVar2 = CONCAT71(uVar3,*(float *)(param_1 + 1) <= *(float *)(param_2 + 1) &&
                             *(float *)(param_2 + 1) != *(float *)(param_1 + 1));
      goto LAB_147da1579;
    }
  }
  uVar2 = 0;
LAB_147da1579:
  return uVar2 & 0xffffffff;
}



// FUNCTION 147da1587 FUN_147da1587 body=728 status=ok
// SIG undefined FUN_147da1587(void)

void FUN_147da1587(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  float fVar18;
  undefined1 auStack_388 [32];
  longlong *local_368;
  int local_35c;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar18 + fVar18);
    plVar9 = &local_358;
    do {
      puVar12 = (undefined8 *)*plVar9;
      puVar11 = (undefined8 *)plVar9[1];
      local_35c = (int)plVar9[2];
      iVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar12) >> 4);
      puVar14 = puVar11;
      puVar17 = puVar12;
      local_368 = plVar9;
      if (local_35c != 0) {
LAB_147da1653:
        plVar9 = local_368;
        if (8 < (int)(iVar6 + 1U)) {
          uVar7 = (ulonglong)(iVar6 + 1U >> 1);
          uVar1 = puVar12[uVar7 * 2];
          uVar2 = (puVar12 + uVar7 * 2)[1];
          uVar3 = puVar12[1];
          puVar12[uVar7 * 2] = *puVar12;
          (puVar12 + uVar7 * 2)[1] = uVar3;
          local_58._0_4_ = (undefined4)uVar1;
          local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar2;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          *(undefined4 *)puVar12 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar12 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_50._4_4_;
          puVar10 = puVar14 + 2;
          puVar13 = puVar12;
          local_58 = uVar1;
          uStack_50 = uVar2;
          do {
            puVar4 = puVar13 + 2;
            puVar15 = puVar13 + 2;
            do {
              puVar13 = puVar15;
              puVar16 = puVar4;
              if (puVar14 < puVar13) break;
              cVar5 = FUN_147da1a40(puVar12,puVar13);
              puVar4 = puVar16 + 2;
              puVar15 = puVar13 + 2;
            } while (cVar5 == '\0');
            puVar4 = puVar10 + -4;
            do {
              puVar15 = puVar10;
              puVar8 = puVar4;
              puVar10 = puVar15 + -2;
              if (puVar10 <= puVar12) break;
              cVar5 = FUN_147da1a40(puVar10,puVar12);
              puVar4 = puVar8 + -2;
            } while (cVar5 == '\0');
            if (puVar10 < puVar13) goto LAB_147da1704;
            uVar1 = *puVar13;
            uVar2 = puVar13[1];
            uVar3 = puVar15[-1];
            *puVar13 = *puVar10;
            puVar13[1] = uVar3;
            local_58._0_4_ = (undefined4)uVar1;
            local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar2;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            *(undefined4 *)puVar10 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar15 + -0xc) = local_58._4_4_;
            *(undefined4 *)(puVar15 + -1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar15 + -4) = uStack_50._4_4_;
            local_58 = uVar1;
            uStack_50 = uVar2;
          } while( true );
        }
        for (; local_368 = plVar9, puVar17 = puVar12, puVar11 = puVar12, puVar12 < puVar14;
            puVar14 = puVar14 + -2) {
          while (puVar10 = puVar17, puVar11 = puVar11 + 2, puVar11 <= puVar14) {
            cVar5 = FUN_147da1a40(puVar10,puVar11);
            puVar17 = puVar11;
            if (cVar5 == '\0') {
              puVar17 = puVar10;
            }
          }
          local_58 = *puVar10;
          uStack_50 = puVar10[1];
          uVar2 = local_58;
          uVar3 = uStack_50;
          uVar1 = puVar14[1];
          *puVar10 = *puVar14;
          puVar10[1] = uVar1;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar14 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
          plVar9 = local_368;
          local_58 = uVar2;
          uStack_50 = uVar3;
        }
        goto LAB_147da1836;
      }
LAB_147da1850:
      FUN_147da1860(puVar12);
      plVar9 = local_368;
LAB_147da1836:
      plVar9 = plVar9 + -3;
    } while (&local_358 <= plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147da1704:
  local_58 = *puVar12;
  uStack_50 = puVar12[1];
  uVar2 = local_58;
  uVar3 = uStack_50;
  uVar1 = puVar15[-1];
  *puVar12 = *puVar10;
  puVar12[1] = uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar10 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar15 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar15 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar15 + -4) = uStack_50._4_4_;
  local_35c = local_35c + -1;
  puVar15 = puVar15 + -4;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)puVar8 - (longlong)puVar17 < (longlong)puVar11 - (longlong)puVar16) {
    plVar9 = local_368;
    if (puVar13 < puVar14) {
      *local_368 = (longlong)puVar13;
      local_368[1] = (longlong)puVar14;
      *(int *)(local_368 + 2) = local_35c;
      plVar9 = local_368 + 3;
    }
    puVar11 = puVar8;
    puVar16 = puVar12;
    if (puVar10 <= puVar12 + 2) goto LAB_147da1836;
  }
  else {
    if (puVar12 + 2 < puVar10) {
      *local_368 = (longlong)puVar12;
      local_368[1] = (longlong)puVar15;
      *(int *)(local_368 + 2) = local_35c;
      local_368 = local_368 + 3;
    }
    plVar9 = local_368;
    puVar12 = puVar13;
    puVar15 = puVar14;
    puVar11 = puVar14;
    if (puVar14 <= puVar13) goto LAB_147da1836;
  }
  local_368 = plVar9;
  iVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar16) >> 4);
  puVar14 = puVar15;
  puVar17 = puVar16;
  if (local_35c == 0) goto LAB_147da1850;
  goto LAB_147da1653;
}



// FUNCTION 147da1860 FUN_147da1860 body=478 status=ok
// SIG undefined FUN_147da1860(void)

void FUN_147da1860(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar12 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar9 = iVar12;
joined_r0x000147da18a5:
    do {
      iVar6 = iVar12 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar8 = iVar12 * 2 + 2;
        if ((iVar8 < (int)param_2) &&
           (cVar5 = FUN_147da1a40(param_1 + (longlong)iVar8 * 2,param_1 + (longlong)iVar6 * 2),
           cVar5 == '\0')) {
          iVar6 = iVar8;
        }
        puVar7 = param_1 + (longlong)iVar12 * 2;
        puVar10 = param_1 + (longlong)iVar6 * 2;
        cVar5 = FUN_147da1a40(puVar7,puVar10);
        if (cVar5 != '\0') {
          uVar2 = *puVar7;
          uVar3 = puVar7[1];
          uVar4 = puVar10[1];
          *puVar7 = *puVar10;
          puVar7[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)puVar10 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar10 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_50._4_4_;
          iVar12 = iVar6;
          local_58 = uVar2;
          uStack_50 = uVar3;
          goto joined_r0x000147da18a5;
        }
      }
      bVar13 = iVar9 != 0;
      iVar12 = iVar9 + -1;
      iVar9 = iVar12;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar11 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = (param_1 + uVar11 * 2)[1];
      *param_1 = param_1[uVar11 * 2];
      param_1[1] = uVar4;
      local_58._0_4_ = (undefined4)uVar2;
      local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar3;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar7 = param_1 + uVar11 * 2;
      *(undefined4 *)puVar7 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar7 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar7 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar7 + 0xc) = uStack_50._4_4_;
      local_58 = uVar2;
      uStack_50 = uVar3;
      if (param_2 != 2) {
        do {
          iVar12 = 0;
          iVar6 = 1;
          iVar9 = 0;
          do {
            iVar12 = iVar12 + 2;
            iVar8 = iVar6;
            if (((longlong)iVar12 < (longlong)uVar11) &&
               (cVar5 = FUN_147da1a40(param_1 + (longlong)iVar12 * 2,param_1 + (longlong)iVar6 * 2),
               cVar5 == '\0')) {
              iVar8 = iVar12;
            }
            puVar10 = param_1 + (longlong)iVar9 * 2;
            puVar7 = param_1 + (longlong)iVar8 * 2;
            cVar5 = FUN_147da1a40(puVar10,puVar7);
            if (cVar5 == '\0') break;
            uVar2 = *puVar10;
            uVar3 = puVar10[1];
            uVar4 = puVar7[1];
            *puVar10 = *puVar7;
            puVar10[1] = uVar4;
            local_58._0_4_ = (undefined4)uVar2;
            local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar3;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            *(undefined4 *)puVar7 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar7 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar7 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar7 + 0xc) = uStack_50._4_4_;
            iVar12 = iVar8 * 2;
            iVar6 = iVar8 * 2 + 1;
            local_58 = uVar2;
            uStack_50 = uVar3;
            iVar9 = iVar8;
          } while ((longlong)iVar6 < (longlong)uVar11);
          uVar1 = uVar11 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar7 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar7 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar7 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar7 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar7 + 0xc) = uStack_50._4_4_;
          bVar13 = 2 < uVar11;
          uVar11 = uVar1;
          local_58 = uVar2;
          uStack_50 = uVar3;
        } while (bVar13);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147da1a40 FUN_147da1a40 body=66 status=ok
// SIG undefined FUN_147da1a40(void)

uint FUN_147da1a40(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_144a78538();
  if (iVar1 < 0) {
    uVar2 = 1;
  }
  else if (*param_1 == *param_2) {
    uVar2 = FUN_144a78538(param_1 + 1,param_2 + 1);
    uVar2 = uVar2 >> 0x1f;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147da1a82 FUN_147da1a82 body=193 status=ok
// SIG undefined FUN_147da1a82(void)

int FUN_147da1a82(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar4 = *param_1;
  iVar1 = (int)param_1[1];
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
      if (((*(longlong *)(lVar4 + uVar5) == *param_2) &&
          (*(longlong *)(lVar4 + 0x10 + uVar5) == param_2[2])) &&
         (((*(byte *)(lVar4 + 8 + uVar5) ^ *(byte *)(param_2 + 1)) & 0xf) == 0)) {
        iVar3 = (int)(uVar5 >> 3) * -0x33333333;
        if (iVar3 != -1) {
          return iVar3;
        }
        break;
      }
      uVar5 = uVar5 + 0x28;
    } while (lVar6 * 0x28 != uVar5);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147da1b44(param_1,iVar1);
    lVar4 = *param_1;
  }
  *(char *)(lVar4 + 8 + lVar6 * 0x28) = (char)param_2[1];
  *(longlong *)(lVar4 + lVar6 * 0x28) = *param_2;
  *(longlong *)(lVar4 + 0x10 + lVar6 * 0x28) = param_2[2];
  *(longlong *)(lVar4 + 0x18 + lVar6 * 0x28) = param_2[3];
  lVar2 = param_2[4];
  *(longlong *)(lVar4 + 0x20 + lVar6 * 0x28) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return iVar1;
}



// FUNCTION 147da1b44 FUN_147da1b44 body=147 status=ok
// SIG undefined FUN_147da1b44(void)

void FUN_147da1b44(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147da1bd8 FUN_147da1bd8 body=118 status=ok
// SIG undefined FUN_147da1bd8(void)

void FUN_147da1bd8(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x20 + (longlong)(int)param_2 * 0x28);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x28);
    memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar5) * 0x28);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 147da1c4e FUN_147da1c4e body=62 status=ok
// SIG undefined FUN_147da1c4e(void)

void FUN_147da1c4e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147da1c8c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 147da1c8c FUN_147da1c8c body=112 status=ok
// SIG undefined FUN_147da1c8c(void)

ulonglong FUN_147da1c8c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147da1cc6;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_147da1cc6:
  return param_2 & 0xffffffff;
}



// FUNCTION 147da1cfc FUN_147da1cfc body=191 status=ok
// SIG undefined FUN_147da1cfc(void)

void FUN_147da1cfc(longlong *param_1,longlong *param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar4 = *param_1;
  iVar2 = (int)param_1[1];
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
      if ((*(longlong *)(lVar4 + uVar5) == *param_2) &&
         (*(longlong *)(lVar4 + 0x10 + uVar5) == param_2[2])) {
        fVar1 = *(float *)(lVar4 + 8 + uVar5);
        if ((fVar1 == *(float *)(param_2 + 1)) && (!NAN(fVar1) && !NAN(*(float *)(param_2 + 1)))) {
          if ((int)(uVar5 >> 3) * -0x33333333 != -1) {
            return;
          }
          break;
        }
      }
      uVar5 = uVar5 + 0x28;
    } while (lVar6 * 0x28 != uVar5);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_147da1dbc(param_1,iVar2);
    lVar4 = *param_1;
  }
  *(int *)(lVar4 + 8 + lVar6 * 0x28) = (int)param_2[1];
  *(longlong *)(lVar4 + lVar6 * 0x28) = *param_2;
  *(longlong *)(lVar4 + 0x10 + lVar6 * 0x28) = param_2[2];
  *(longlong *)(lVar4 + 0x18 + lVar6 * 0x28) = param_2[3];
  lVar3 = param_2[4];
  *(longlong *)(lVar4 + 0x20 + lVar6 * 0x28) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147da1dbc FUN_147da1dbc body=147 status=ok
// SIG undefined FUN_147da1dbc(void)

void FUN_147da1dbc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147da1e50 FUN_147da1e50 body=118 status=ok
// SIG undefined FUN_147da1e50(void)

void FUN_147da1e50(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x20 + (longlong)(int)param_2 * 0x28);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x28);
    memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar5) * 0x28);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 147da1ec6 FUN_147da1ec6 body=62 status=ok
// SIG undefined FUN_147da1ec6(void)

void FUN_147da1ec6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147da1f04(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 147da1f04 FUN_147da1f04 body=112 status=ok
// SIG undefined FUN_147da1f04(void)

ulonglong FUN_147da1f04(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147da1f3e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_147da1f3e:
  return param_2 & 0xffffffff;
}



// FUNCTION 147da1f74 FUN_147da1f74 body=79 status=ok
// SIG undefined FUN_147da1f74(void)

undefined8 FUN_147da1f74(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < param_2) {
    uVar3 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) &&
     ((param_3 != '\x01' || (*(int *)(param_1 + 0x48) <= iVar4)))) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x48) = iVar4;
    FUN_1403e9a80(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 147da1fc4 FUN_147da1fc4 body=151 status=ok
// SIG undefined FUN_147da1fc4(void)

void FUN_147da1fc4(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x110 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x110) = param_2;
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
      puVar7 = puVar7 + 0x44;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147da205c FUN_147da205c body=295 status=ok
// SIG undefined FUN_147da205c(void)

undefined4 * FUN_147da205c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147da2184(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar7 = *(uint *)*param_3;
  *local_40 = uVar7;
  uVar6 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  local_40[2] = *puVar1;
  local_40[3] = uVar6;
  local_40[4] = uVar2;
  local_40[5] = uVar3;
  *(undefined8 *)(local_40 + 6) = *(undefined8 *)(puVar1 + 4);
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  cVar5 = FUN_147da226a(param_1,uVar7,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
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
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[9] = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[8] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_147da2366(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da2184 FUN_147da2184 body=230 status=ok
// SIG undefined FUN_147da2184(void)

int * FUN_147da2184(longlong *param_1,int *param_2)

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



// FUNCTION 147da226a FUN_147da226a body=138 status=ok
// SIG undefined FUN_147da226a(void)

undefined8 FUN_147da226a(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*piVar1 == *param_3) {
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
          FUN_147da22f4(iVar2,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = piVar1[8];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 147da22f4 FUN_147da22f4 body=114 status=ok
// SIG undefined FUN_147da22f4(void)

void FUN_147da22f4(longlong *param_1,int param_2)

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



// FUNCTION 147da2366 FUN_147da2366 body=419 status=ok
// SIG undefined FUN_147da2366(void)

void FUN_147da2366(longlong *param_1)

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



// FUNCTION 147da250a FUN_147da250a body=322 status=ok
// SIG undefined FUN_147da250a(void)

void FUN_147da250a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 147da264e FUN_147da264e body=282 status=ok
// SIG undefined FUN_147da264e(void)

void FUN_147da264e(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_147d9cc50(*local_60 + (longlong)iStack_44 * 0x40 + 8);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da276a FUN_147da276a body=322 status=ok
// SIG undefined FUN_147da276a(void)

void FUN_147da276a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 147da28ae FUN_147da28ae body=306 status=ok
// SIG undefined FUN_147da28ae(void)

void FUN_147da28ae(longlong *param_1)

{
  longlong lVar1;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
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
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54;
      FUN_1457e927f(*(undefined8 *)(lVar1 + 8 + lVar2 * 0x28),
                    *(undefined4 *)(lVar1 + 0x10 + lVar2 * 0x28));
      if (*(longlong *)(lVar1 + 8 + lVar2 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da29e2 FUN_147da29e2 body=115 status=ok
// SIG undefined FUN_147da29e2(void)

void FUN_147da29e2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147da2a55 FUN_147da2a55 body=75 status=ok
// SIG undefined FUN_147da2a55(void)

void FUN_147da2a55(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined4 *)(param_1 + 8 + lVar2) = *(undefined4 *)(param_2 + 8 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      *(undefined8 *)(param_1 + 0x18 + lVar2) = *(undefined8 *)(param_2 + 0x18 + lVar2);
      lVar1 = *(longlong *)(param_2 + 0x20 + lVar2);
      *(longlong *)(param_1 + 0x20 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147da2aa0 FUN_147da2aa0 body=115 status=ok
// SIG undefined FUN_147da2aa0(void)

void FUN_147da2aa0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147da2b13 FUN_147da2b13 body=75 status=ok
// SIG undefined FUN_147da2b13(void)

void FUN_147da2b13(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined1 *)(param_1 + 8 + lVar2) = *(undefined1 *)(param_2 + 8 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      *(undefined8 *)(param_1 + 0x18 + lVar2) = *(undefined8 *)(param_2 + 0x18 + lVar2);
      lVar1 = *(longlong *)(param_2 + 0x20 + lVar2);
      *(longlong *)(param_1 + 0x20 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147da2b5e FUN_147da2b5e body=109 status=ok
// SIG undefined FUN_147da2b5e(void)

void FUN_147da2b5e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14c966e90;
  uVar4 = DAT_14c966e88;
  uVar3 = DAT_14c966e80;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xf0;
  *param_1 = 0;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = plVar5;
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
                    /* WARNING: Could not recover jumptable at 0x000147da2bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147da2bcc FUN_147da2bcc body=114 status=ok
// SIG undefined FUN_147da2bcc(void)

void FUN_147da2bcc(uint param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = DAT_14cb0e588;
  _Dst = (void *)((longlong)(int)param_1 * 0xd8 + DAT_14cb0e588);
  FUN_147d94cdc(_Dst);
  iVar3 = ~param_1 + DAT_14cb0e590;
  if (iVar3 != 0) {
    iVar2 = 1;
    if (iVar3 < 1) {
      iVar2 = iVar3;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(DAT_14cb0e590 - iVar2) * 0xd8),(longlong)iVar2 * 0xd8);
  }
  DAT_14cb0e590 = DAT_14cb0e590 + -1;
  return;
}



// FUNCTION 147da2c3e FUN_147da2c3e body=274 status=ok
// SIG undefined FUN_147da2c3e(void)

undefined8 * FUN_147da2c3e(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  FUN_147b48eca(param_1 + 1,param_2 + 1);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  lVar1 = param_2[0xb];
  param_1[0xb] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  lVar1 = param_2[0xf];
  param_1[0xf] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x10] = param_2[0x10];
  lVar1 = param_2[0x11];
  param_1[0x11] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  uVar2 = param_2[0x12];
  uVar3 = param_2[0x13];
  uVar4 = *(undefined8 *)((longlong)param_2 + 0xa4);
  *(undefined8 *)((longlong)param_1 + 0x9c) = *(undefined8 *)((longlong)param_2 + 0x9c);
  *(undefined8 *)((longlong)param_1 + 0xa4) = uVar4;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  param_1[0x16] = param_2[0x16];
  lVar1 = param_2[0x17];
  param_1[0x17] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x18] = param_2[0x18];
  lVar1 = param_2[0x19];
  param_1[0x19] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  return param_1;
}



// FUNCTION 147da2d50 FUN_147da2d50 body=146 status=ok
// SIG undefined FUN_147da2d50(void)

void FUN_147da2d50(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xd8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xd8)) {
      uVar5 = uVar4 / 0xd8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147da2de4 FUN_147da2de4 body=296 status=ok
// SIG undefined FUN_147da2de4(void)

void FUN_147da2de4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_2[3] = 0;
  param_2[4] = 0;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  uVar1 = param_2[0x12];
  uVar2 = param_2[0x13];
  uVar3 = *(undefined8 *)((longlong)param_2 + 0xa4);
  *(undefined8 *)((longlong)param_1 + 0x9c) = *(undefined8 *)((longlong)param_2 + 0x9c);
  *(undefined8 *)((longlong)param_1 + 0xa4) = uVar3;
  param_1[0x12] = uVar1;
  param_1[0x13] = uVar2;
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  return;
}



// FUNCTION 147da2f0c FUN_147da2f0c body=322 status=ok
// SIG undefined FUN_147da2f0c(void)

void FUN_147da2f0c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 147da3050 FUN_147da3050 body=96 status=ok
// SIG undefined FUN_147da3050(void)

void FUN_147da3050(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 147da30b0 FUN_147da30b0 body=48 status=ok
// SIG undefined FUN_147da30b0(void)

void FUN_147da30b0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xd8,8);
  }
  return;
}



// FUNCTION 147da30e0 FUN_147da30e0 body=122 status=ok
// SIG undefined FUN_147da30e0(void)

void FUN_147da30e0(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 147da315a FUN_147da315a body=216 status=ok
// SIG undefined FUN_147da315a(void)

longlong FUN_147da315a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a5071c();
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_28,"TableView.Header",1);
  uVar2 = FUN_147da3de6(lVar1,local_28,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1bc) = 0;
  *(undefined8 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 2;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1ec) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1fc) = 0;
  *(undefined8 *)(param_1 + 0x204) = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da3234 FUN_147da3234 body=104 status=ok
// SIG undefined FUN_147da3234(void)

longlong FUN_147da3234(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14001cc68(400,0x10);
  FUN_146af0552(uVar2,param_2);
  iVar1 = *(int *)(param_1 + 0x1b8);
  *(uint *)(param_1 + 0x1b8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1bc) < iVar1 + 1U) {
    FUN_147da3e56(param_1 + 0x1b0,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar1 * 8) = uVar2;
  return param_1;
}



// FUNCTION 147da329c FUN_147da329c body=86 status=ok
// SIG undefined FUN_147da329c(void)

longlong FUN_147da329c(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x1b0);
  *(char *)(param_1 + 0x1c0) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x1c8,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 147da32f2 FUN_147da32f2 body=115 status=ok
// SIG undefined FUN_147da32f2(void)

longlong * FUN_147da32f2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146aedb06(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 147da3366 FUN_147da3366 body=333 status=ok
// SIG undefined FUN_147da3366(void)

void FUN_147da3366(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x330);
  FUN_1449db362(param_1 + 0x318);
  FUN_1449db362(param_1 + 0x308);
  FUN_1449db362(param_1 + 0x2f0);
  FUN_1449db362(param_1 + 0x2d8);
  FUN_1449db362(param_1 + 0x2b8);
  plVar3 = *(longlong **)(param_1 + 0x2b0);
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
  if (*(char *)(param_1 + 0x2a0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2a0) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x280);
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
  FUN_1449db362(param_1 + 0x268);
  if (*(char *)(param_1 + 0x264) == '\x01') {
    *(undefined1 *)(param_1 + 0x264) = 0;
  }
  FUN_1449db362(param_1 + 0x250);
  if (*(char *)(param_1 + 0x244) == '\x01') {
    *(undefined1 *)(param_1 + 0x244) = 0;
  }
  FUN_1449db362(param_1 + 0x230);
  FUN_14576702a(param_1 + 0x200);
  FUN_1449db362(param_1 + 0x1f0);
  if (*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x1c8);
  if (*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x10))();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 147da34b4 FUN_147da34b4 body=107 status=ok
// SIG undefined FUN_147da34b4(void)

void FUN_147da34b4(longlong param_1)

{
  FUN_1449db362(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1e8) == '\x01') {
    *(undefined1 *)(param_1 + 0x1e8) = 0;
  }
  FUN_1449db362(param_1 + 0x1d0);
  FUN_1449db362(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 147da3520 FUN_147da3520 body=54 status=ok
// SIG undefined FUN_147da3520(void)

void FUN_147da3520(longlong *param_1)

{
  FUN_147da3556(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147da3556 FUN_147da3556 body=386 status=ok
// SIG undefined FUN_147da3556(void)

void FUN_147da3556(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
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
      plVar4 = *(longlong **)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar6 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
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



// FUNCTION 147da36e8 FUN_147da36e8 body=370 status=ok
// SIG undefined FUN_147da36e8(void)

undefined4 *
FUN_147da36e8(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147da385c(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar8 = *(undefined8 *)*param_3;
  *local_38 = uVar8;
  local_38[1] = *puVar1;
  lVar6 = puVar1[1];
  local_38[2] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    uVar8 = *local_38;
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar7 = (uint)((ulonglong)uVar8 >> 0x10);
  uVar4 = (uint)uVar8 & 0xffff;
  uVar7 = ((uint)uVar8 << 0x10 | uVar4) + (int)((ulonglong)uVar8 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_147da3942(param_1,uVar7,local_38);
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
      *(uint *)((longlong)local_38 + 0x1c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
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
      FUN_147da3aaa(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da385c FUN_147da385c body=229 status=ok
// SIG undefined FUN_147da385c(void)

int * FUN_147da385c(longlong *param_1,int *param_2)

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



// FUNCTION 147da3942 FUN_147da3942 body=221 status=ok
// SIG undefined FUN_147da3942(void)

void FUN_147da3942(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x20) == *param_3) {
          plVar9 = *(longlong **)(puVar3 + 4);
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_147da3a20(param_1,*param_4,1);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_147da39b8;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_147da39b8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 147da3a20 FUN_147da3a20 body=138 status=ok
// SIG undefined FUN_147da3a20(void)

void FUN_147da3a20(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147da3aaa FUN_147da3aaa body=476 status=ok
// SIG undefined FUN_147da3aaa(void)

void FUN_147da3aaa(longlong *param_1)

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



// FUNCTION 147da3c88 FUN_147da3c88 body=122 status=ok
// SIG undefined FUN_147da3c88(void)

longlong FUN_147da3c88(longlong param_1,longlong param_2)

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
    FUN_147da3d02(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147da3d02 FUN_147da3d02 body=228 status=ok
// SIG undefined FUN_147da3d02(void)

longlong * FUN_147da3d02(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147da3556(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          *(undefined8 *)(lVar4 + 8 + lVar5) = *(undefined8 *)(lVar2 + 8 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 0x10 + lVar5);
          *(longlong *)(lVar4 + 0x10 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x18 + lVar5) = *(undefined8 *)(lVar2 + 0x18 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 147da3de6 FUN_147da3de6 body=111 status=ok
// SIG undefined FUN_147da3de6(void)

void FUN_147da3de6(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  lVar1 = (**(code **)(*param_1 + 0x98))(param_1,DAT_14c979cb0,local_28,param_4);
  if (lVar1 == 0) {
    FUN_146963194();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da3e56 FUN_147da3e56 body=132 status=ok
// SIG undefined FUN_147da3e56(void)

void FUN_147da3e56(longlong param_1,int param_2)

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



// FUNCTION 147da3edc FUN_147da3edc body=407 status=ok
// SIG undefined FUN_147da3edc(void)

longlong FUN_147da3edc(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  FUN_144a5dc74(param_1 + 0x1b0);
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  FUN_144a5dc74(param_1 + 0x1d8);
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x22c) = 1;
  *(undefined1 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined1 *)(param_1 + 0x24c) = 0;
  *(undefined1 *)(param_1 + 0x264) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  uVar3 = DAT_14c98dec8;
  *(undefined8 *)(param_1 + 0x278) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x280) = DAT_14c98ded0;
  lVar4 = 0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar3 = DAT_14c98dec8;
    lVar4 = DAT_14c98ded0;
  }
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 2;
  *(undefined8 *)(param_1 + 0x2a8) = uVar3;
  *(longlong *)(param_1 + 0x2b0) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 1;
  *(undefined1 *)(param_1 + 0x2d4) = 1;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined1 *)(param_1 + 0x2ec) = 1;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x2fd) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined2 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined1 *)(param_1 + 0x340) = 0;
  return param_1;
}



// FUNCTION 147da4074 FUN_147da4074 body=340 status=ok
// SIG undefined FUN_147da4074(void)

longlong *
FUN_147da4074(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar3 = (longlong *)FUN_14001cc68(0x340,0x10);
  FUN_147da41ca(plVar3);
  local_48 = plVar3 + 2;
  local_40 = plVar3;
  FUN_147da4390(&local_48);
  plVar3 = local_40;
  if (local_40 == (longlong *)0x0) {
    *param_1 = (longlong)local_48;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_147da415e;
    param_1[1] = 0;
LAB_147da4121:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147da415e;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_48;
    plVar4 = (longlong *)param_1[1];
    if (local_40 != plVar4) {
      param_1[1] = (longlong)local_40;
      if (plVar4 == (longlong *)0x0) goto LAB_147da415e;
      goto LAB_147da4121;
    }
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147da415e;
    (**(code **)*local_40)(local_40);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_147da415e:
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_58 = 0x330;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da41ca FUN_147da41ca body=163 status=ok
// SIG undefined FUN_147da41ca(void)

undefined8 * FUN_147da41ca(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14aaf9550;
  memset(param_1 + 2,0,0x330);
  FUN_140a55e66(param_1 + 2);
  param_1[2] = &PTR_FUN_14aaf9570;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined2 *)(param_1 + 0x5b) = 0x19;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 2;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  return param_1;
}



// FUNCTION 147da4278 FUN_147da4278 body=29 status=ok
// SIG undefined FUN_147da4278(void)

undefined8 FUN_147da4278(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147da4296 FUN_147da4296 body=38 status=ok
// SIG undefined FUN_147da4296(void)

undefined8 FUN_147da4296(undefined8 param_1,int param_2)

{
  FUN_147da42bc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147da42bc FUN_147da42bc body=149 status=ok
// SIG undefined FUN_147da42bc(void)

void FUN_147da42bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaf9570;
  FUN_1449db362(param_1 + 99);
  FUN_1449db362(param_1 + 0x61);
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x5a);
  FUN_146afd134(param_1[0x56],*(undefined4 *)(param_1 + 0x57));
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_147da4352(param_1 + 0x54);
  FUN_141722928(param_1);
  return;
}



// FUNCTION 147da4352 FUN_147da4352 body=61 status=ok
// SIG undefined FUN_147da4352(void)

void FUN_147da4352(longlong *param_1)

{
  FUN_146afd0ee();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147da4390 FUN_147da4390 body=167 status=ok
// SIG undefined FUN_147da4390(void)

void FUN_147da4390(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147da440b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147da440b;
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
LAB_147da440b:
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
                    /* WARNING: Could not recover jumptable at 0x000147da442b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147da4438 FUN_147da4438 body=56 status=ok
// SIG undefined FUN_147da4438(void)

undefined8 * FUN_147da4438(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aaf9930;
  FUN_144725486();
  FUN_14640c654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147da449e FUN_147da449e body=38 status=ok
// SIG undefined FUN_147da449e(void)

undefined8 FUN_147da449e(undefined8 param_1,int param_2)

{
  FUN_14640c654();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147da44c4 FUN_147da44c4 body=56 status=ok
// SIG undefined FUN_147da44c4(void)

undefined8 * FUN_147da44c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aaf9990;
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147da44fc FUN_147da44fc body=632 status=ok
// SIG undefined FUN_147da44fc(void)

void FUN_147da44fc(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FDummyVertexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84 = 0x20;
  local_7c = 0x4001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_1446f970a(param_2,1);
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
    FUN_1446f970a(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
  }
  plVar6 = (longlong *)(param_1 + 0x10);
  if (plVar6 != &local_90) {
    lVar4 = *plVar6;
    *plVar6 = local_90;
    local_90 = 0;
    if (lVar4 == 0) goto LAB_147da45ee;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_147da45ee:
  lVar4 = *plVar6;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_1446f970a(param_2,1);
  }
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,1);
  local_a8 = 0x20;
  puVar5 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar4,0);
  if (cVar3 == '\0') {
    FUN_1446f970a(param_2,0);
  }
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)(puVar5 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)puVar5 + 0x14) = 0x3f800000;
  *(undefined4 *)(puVar5 + 3) = 0x3f800000;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = 0x3f800000;
  lVar4 = *plVar6;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_1446f970a(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
    FUN_1446f970a(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da4776 FUN_147da4776 body=100 status=ok
// SIG undefined FUN_147da4776(void)

undefined8 * FUN_147da4776(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xc,0x10);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  FUN_147440a6c((longlong)puVar1 + 4,param_1,L"VectorFieldTexture",0);
  FUN_147440a6c(puVar1 + 1,param_1,L"VectorFieldTextureSampler",0);
  return puVar1;
}



// FUNCTION 147da47da FUN_147da47da body=42 status=ok
// SIG undefined FUN_147da47da(void)

longlong FUN_147da47da(longlong param_1,int param_2)

{
  FUN_147da4804(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147da4804 FUN_147da4804 body=98 status=ok
// SIG undefined FUN_147da4804(void)

void FUN_147da4804(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aaf99f0;
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
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147da4866 FUN_147da4866 body=38 status=ok
// SIG undefined FUN_147da4866(void)

undefined8 FUN_147da4866(undefined8 param_1,int param_2)

{
  FUN_147da4804();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147da488c FUN_147da488c body=122 status=ok
// SIG undefined FUN_147da488c(void)

void FUN_147da488c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 147da490a FUN_147da490a body=144 status=ok
// SIG undefined FUN_147da490a(void)

void FUN_147da490a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14477b072(param_1,DAT_14cb0f280);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_28 = param_2;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147da499b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x480))(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da49a4 FUN_147da49a4 body=160 status=ok
// SIG undefined FUN_147da49a4(void)

void FUN_147da49a4(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x480))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da4a46 FUN_147da4a46 body=85 status=ok
// SIG undefined FUN_147da4a46(void)

void FUN_147da4a46(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb0f290);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147da4a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147da4a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x478))(param_1);
  return;
}



// FUNCTION 147da4ab6 FUN_147da4ab6 body=156 status=ok
// SIG undefined FUN_147da4ab6(void)

void FUN_147da4ab6(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_147da4b54(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da4b54 FUN_147da4b54 body=52 status=ok
// SIG undefined FUN_147da4b54(void)

longlong FUN_147da4b54(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_147da520b(DAT_14c951640);
  if (lVar1 != 0) {
    FUN_147da4c44(lVar1,param_1);
  }
  return lVar1;
}



// FUNCTION 147da4ba6 FUN_147da4ba6 body=156 status=ok
// SIG undefined FUN_147da4ba6(void)

void FUN_147da4ba6(undefined8 param_1,longlong param_2)

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
  FUN_147da4c44(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da4c44 FUN_147da4c44 body=290 status=ok
// SIG undefined FUN_147da4c44(void)

void FUN_147da4c44(longlong param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1 + 0x14c) & 1) != 0) {
    FUN_147daf370(param_1 + 0x128);
    *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) & 0xfe;
  }
  puVar1 = (uint *)(param_2 + 0x3a8);
  if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 0x3b8)] == '\x01') {
    if ((*(longlong **)puVar1 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(**(longlong **)puVar1 + 0x28))(), cVar7 == '\0')) goto LAB_147da4ca2;
  }
  else if ((*puVar1 & 0xffffff) == 0) goto LAB_147da4ca2;
  FUN_147da4f7e(param_2 + 0x3a0,param_1);
  if (param_2 + 0x3a0 != param_1 + 0x128) {
    local_58 = CONCAT71(local_58._1_7_,*(byte *)(param_2 + 0x3b8));
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[*(byte *)(param_2 + 0x3b8)])
              (&local_68,puVar1);
    local_38 = local_58;
    local_48 = local_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uVar2 = *(ulonglong *)(param_1 + 0x140);
    uVar3 = *(undefined4 *)(param_1 + 0x130);
    uVar4 = *(undefined4 *)(param_1 + 0x134);
    uVar5 = *(undefined4 *)(param_1 + 0x138);
    uVar6 = *(undefined4 *)(param_1 + 0x13c);
    *(undefined4 *)(param_1 + 0x130) = local_68;
    *(undefined4 *)(param_1 + 0x134) = uStack_64;
    *(undefined4 *)(param_1 + 0x138) = uStack_60;
    *(undefined4 *)(param_1 + 0x13c) = uStack_5c;
    *(ulonglong *)(param_1 + 0x140) = local_58;
    local_68 = uVar3;
    uStack_64 = uVar4;
    uStack_60 = uVar5;
    uStack_5c = uVar6;
    local_58 = uVar2;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar2 & 0xff])(&local_68);
  }
  *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) | 1;
LAB_147da4ca2:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147da4d6a FUN_147da4d6a body=148 status=ok
// SIG undefined FUN_147da4d6a(void)

void FUN_147da4d6a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147da4e00(local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


