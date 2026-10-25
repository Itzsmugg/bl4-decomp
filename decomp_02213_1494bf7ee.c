// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1494bf7ee FUN_1494bf7ee body=1243 status=ok
// SIG undefined FUN_1494bf7ee(void)

longlong * FUN_1494bf7ee(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  undefined1 auStack_168 [32];
  code **local_148;
  undefined8 local_140;
  undefined4 *local_138;
  longlong *local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined2 *local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  longlong *local_d0;
  code *local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar5 = (undefined2 *)FUN_14001cc68(0x28,0x10);
  FUN_1494c9b32(puVar5);
  lVar6 = FUN_145ba6f7a();
  local_d8 = *(undefined2 **)(lVar6 + 0x18);
  FUN_1400021e4(&local_d8,&local_f8);
  FUN_144a882a8(&local_d8,&local_f8,L"_Entry");
  puVar9 = local_d8;
  if ((int)local_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_e8,puVar9,1);
  FUN_149499cc8(&local_e0,param_1,local_e8);
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_130 = param_2;
  if (local_f8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar7 = FUN_14001cc68(0xa0,0x10);
  local_60 = *param_3;
  uStack_5c = param_3[1];
  uStack_58 = param_3[2];
  uStack_54 = param_3[3];
  local_78 = 0;
  local_68 = &PTR_LAB_14bd1e2a0;
  local_88[0] = &LAB_1445334e8;
  local_138 = param_3;
  uVar8 = FUN_145ba6f7a();
  plVar1 = (longlong *)(param_1 + 0x28);
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(plVar1,&local_d8);
  local_148 = (code **)local_88;
  local_140 = uVar7;
  FUN_149460a9c(uVar7,&local_d8,uVar8,local_e0);
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14945e160(puVar5,&local_d8,local_140);
  local_f8 = local_d8;
  local_f0 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_d0 + 0xc) = *(int *)((longlong)local_d0 + 0xc) + 1;
    UNLOCK();
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d0 + 0x10))();
      }
    }
  }
  lVar6 = FUN_145ba6f7a();
  local_d8 = *(undefined2 **)(lVar6 + 0x18);
  FUN_1400021e4(&local_d8,&local_118);
  FUN_144a882a8(&local_d8,&local_118,L"_Return");
  puVar9 = local_d8;
  if ((int)local_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_108,puVar9,1);
  FUN_149499cc8(&local_100,param_1,local_108);
  local_e0 = local_100;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_118 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar7 = FUN_14001cc68(0xa0,0x10);
  local_a0 = *local_138;
  uStack_9c = local_138[1];
  uStack_98 = local_138[2];
  uStack_94 = local_138[3];
  local_b8 = 0;
  local_a8 = &PTR_LAB_14bd1e2c0;
  local_c8[0] = FUN_144533548;
  uVar8 = FUN_145ba6f7a();
  (**(code **)(*plVar1 + 0x20))(plVar1,&local_d8);
  local_148 = local_c8;
  FUN_149460a9c(uVar7,&local_d8,uVar8,local_100);
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14945e160(puVar5,&local_d8,uVar7);
  local_118 = local_d8;
  local_110 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_d0 + 0xc) = *(int *)((longlong)local_d0 + 0xc) + 1;
    UNLOCK();
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d0 + 0x10))();
      }
    }
  }
  FUN_1494caffa(puVar5,local_128,&local_f8,&local_118);
  if (local_120 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_120 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_120 + 0x10))();
    }
  }
  uVar8 = FUN_1494c9ad6(param_1);
  local_d8 = puVar5;
  local_d0 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_d0[1] = (longlong)&DAT_100000001;
  *local_d0 = (longlong)&PTR_LAB_14bcfe3d0;
  local_d0[2] = (longlong)puVar5;
  cVar4 = FUN_1494a7e7c(uVar8,&local_d8);
  plVar1 = local_130;
  *local_130 = 0;
  local_130[1] = 0;
  if (cVar4 != '\0') {
    lVar6 = FUN_1494c9ad6(param_1);
    lVar6 = *(longlong *)(lVar6 + 0x20);
    if (lVar6 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_145a96b14();
      uVar8 = FUN_144718840(lVar6,uVar8);
    }
    uVar8 = FUN_149460d7e(local_140,uVar8);
    iVar3 = (int)plVar1[1];
    *(uint *)(plVar1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar1 + 0xc) < iVar3 + 1U) {
      FUN_1494db69c(plVar1,iVar3);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = uVar8;
    lVar6 = FUN_1494c9ad6(param_1);
    lVar6 = *(longlong *)(lVar6 + 0x20);
    if (lVar6 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_145a96b14();
      uVar8 = FUN_144718840(lVar6,uVar8);
    }
    uVar7 = FUN_149460d7e(uVar7,uVar8);
    iVar3 = (int)plVar1[1];
    *(uint *)(plVar1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar1 + 0xc) < iVar3 + 1U) {
      FUN_1494db69c(plVar1,iVar3);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = uVar7;
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_110 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_110 + 0x10))();
    }
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_f0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_f0 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 1494bfcca FUN_1494bfcca body=277 status=ok
// SIG undefined FUN_1494bfcca(void)

void FUN_1494bfcca(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40 [16];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  uVar2 = FUN_1494bfde0(param_1,&local_48,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bfde0 FUN_1494bfde0 body=118 status=ok
// SIG undefined FUN_1494bfde0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1494bfde0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  longlong local_60 [3];
  undefined8 local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60[1] = 0;
  local_48 = 0;
  local_60[0] = *param_2;
  if ((local_60[0] != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1494c9824(param_1,local_60,param_3,local_60 + 1);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bfe58 FUN_1494bfe58 body=244 status=ok
// SIG undefined FUN_1494bfe58(void)

void FUN_1494bfe58(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494bff4e(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bff4e FUN_1494bff4e body=147 status=ok
// SIG undefined FUN_1494bff4e(void)

void FUN_1494bff4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  code *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_38 = &PTR_LAB_14bd1e320;
  local_58[0] = FUN_144533814;
  local_30 = param_2;
  local_60 = FUN_145ba6cbc();
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_60);
  }
  FUN_1494c9824(param_1,&local_60,param_3,local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494bffe2 FUN_1494bffe2 body=244 status=ok
// SIG undefined FUN_1494bffe2(void)

void FUN_1494bffe2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494c00d8(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c00d8 FUN_1494c00d8 body=147 status=ok
// SIG undefined FUN_1494c00d8(void)

void FUN_1494c00d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  code *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_38 = &PTR_LAB_14bd1e300;
  local_58[0] = FUN_1445336fa;
  local_30 = param_2;
  local_60 = FUN_145ba7064();
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_60);
  }
  FUN_1494c9824(param_1,&local_60,param_3,local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c016c FUN_1494c016c body=244 status=ok
// SIG undefined FUN_1494c016c(void)

void FUN_1494c016c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494c0262(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c0262 FUN_1494c0262 body=147 status=ok
// SIG undefined FUN_1494c0262(void)

void FUN_1494c0262(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  code *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_38 = &PTR_LAB_14bd1e340;
  local_58[0] = FUN_14453392e;
  local_30 = param_2;
  local_60 = FUN_145ba714e();
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_60);
  }
  FUN_1494c9824(param_1,&local_60,param_3,local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c02f6 FUN_1494c02f6 body=404 status=ok
// SIG undefined FUN_1494c02f6(void)

void FUN_1494c02f6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  uStack_70 = 0;
  FUN_140e6511c(&local_68);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  _Src = local_48;
  puVar2 = local_88;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_68;
  uStack_b4 = uStack_64;
  uStack_b0 = uStack_60;
  uStack_ac = uStack_5c;
  local_a8 = local_58;
  uStack_a4 = uStack_54;
  uStack_a0 = uStack_50;
  uStack_9c = uStack_4c;
  local_98 = (void *)0x0;
  local_90 = local_40;
  if ((longlong)local_40 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_40,0);
    memcpy(local_98,_Src,(longlong)local_40 * 2);
  }
  uVar1 = FUN_1494c048c(param_1,&local_b8,puVar2);
  *param_3 = uVar1;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c048c FUN_1494c048c body=189 status=ok
// SIG undefined FUN_1494c048c(void)

undefined8 FUN_1494c048c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined1 local_98 [48];
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14945f130(local_98);
  uVar1 = FUN_144b00ba4(param_1);
  local_a0 = FUN_14949a7cc(uVar1,local_98);
  local_68[0] = 0;
  local_58 = 0;
  if ((local_a0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_a0);
  }
  uVar1 = FUN_1494c9824(param_1,&local_a0,param_3,local_68);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c054a FUN_1494c054a body=244 status=ok
// SIG undefined FUN_1494c054a(void)

void FUN_1494c054a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494c0640(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c0640 FUN_1494c0640 body=147 status=ok
// SIG undefined FUN_1494c0640(void)

void FUN_1494c0640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  code *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_38 = &PTR_LAB_14bd1e360;
  local_58[0] = FUN_144533a48;
  local_30 = param_2;
  local_60 = FUN_145ba6da6();
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_60);
  }
  FUN_1494c9824(param_1,&local_60,param_3,local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c06d4 FUN_1494c06d4 body=163 status=ok
// SIG undefined FUN_1494c06d4(void)

void FUN_1494c06d4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c0778 FUN_1494c0778 body=190 status=ok
// SIG undefined FUN_1494c0778(void)

void FUN_1494c0778(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494c0838(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c0838 FUN_1494c0838 body=8516 status=ok
// SIG undefined FUN_1494c0838(void)

/* WARNING: Removing unreachable block (ram,0x0001494c2208) */
/* WARNING: Removing unreachable block (ram,0x0001494c221a) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1494c0838(longlong param_1,longlong *param_2)

{
  code *****pppppcVar1;
  code *****pppppcVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  int iVar6;
  double dVar7;
  code ******ppppppcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  code ******ppppppcVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong *plVar20;
  code *******pppppppcVar21;
  undefined1 *puVar22;
  ulonglong *puVar23;
  code ****ppppcVar24;
  undefined2 *puVar25;
  code *******pppppppcVar26;
  longlong lVar27;
  ulonglong *puVar28;
  code ****ppppcVar29;
  undefined2 *puVar30;
  longlong lVar31;
  longlong lVar32;
  code ***pppcVar33;
  undefined8 *puVar34;
  longlong lVar35;
  bool bVar36;
  bool bVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  double dVar40;
  double dVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auStack_498 [32];
  code *******local_478;
  code **local_470;
  longlong local_460;
  ulonglong *local_458;
  code ******local_450;
  longlong *local_448;
  code *****local_440;
  undefined8 local_438;
  undefined2 *local_430;
  int local_428;
  undefined2 *local_420;
  int local_418;
  code ******local_410;
  code *******local_408;
  undefined8 uStack_400;
  code *******local_3f8;
  int iStack_3f0;
  undefined4 uStack_3ec;
  code *******local_3e8;
  int iStack_3e0;
  undefined4 uStack_3dc;
  code ****local_3d8;
  undefined8 uStack_3d0;
  code ******local_3c0;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  code ******local_388;
  code **ppcStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  int iStack_360;
  undefined4 uStack_35c;
  undefined8 *local_350;
  longlong local_348;
  undefined8 uStack_340;
  longlong local_338;
  undefined8 uStack_330;
  ulonglong *local_328;
  undefined8 uStack_320;
  ulonglong *local_318;
  undefined8 uStack_310;
  ulonglong *local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  ulonglong *local_2e8;
  undefined8 uStack_2e0;
  code ******local_2d8;
  undefined8 uStack_2d0;
  longlong local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2af;
  undefined3 uStack_2ab;
  code *local_2a8 [2];
  undefined8 *local_298;
  code *******local_268;
  undefined8 uStack_260;
  code ***local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  int iStack_238;
  undefined4 uStack_234;
  undefined4 local_230 [2];
  undefined1 local_228 [16];
  undefined4 local_218;
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined2 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  longlong local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  int local_164;
  undefined1 local_160 [8];
  undefined1 *local_158;
  int local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  int local_c4;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  local_2c8 = 0;
  uStack_2c0 = 0;
  lVar27 = param_2[1];
  if ((longlong)(int)lVar27 != 0) {
    lVar32 = *param_2;
    lVar35 = 0;
    do {
      lVar31 = *(longlong *)(lVar32 + lVar35);
      if (lVar31 == 0) {
LAB_1494c0adb:
        uVar16 = uStack_2c0;
        lVar15 = (longlong)(int)uStack_2c0;
        uVar11 = (int)uStack_2c0 + 1;
        uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar11);
        if (uStack_2c0._4_4_ < uVar11) {
          FUN_1494db69c(&local_2c8,uVar16 & 0xffffffff);
        }
        *(longlong *)(local_2c8 + lVar15 * 8) = lVar31;
      }
      else {
        uVar13 = FUN_14595eb00();
        lVar15 = FUN_144718840(lVar31,uVar13);
        if (lVar15 == 0) goto LAB_1494c0adb;
      }
      lVar35 = lVar35 + 8;
    } while ((longlong)(int)lVar27 * 8 != lVar35);
  }
  local_2d8 = (code ******)0x0;
  uStack_2d0 = 0;
  local_2e8 = (ulonglong *)0x0;
  uStack_2e0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  FUN_1494c9ba8(&local_2c8,&local_2d8);
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0;
  local_268 = (code *******)local_2d8;
  uStack_260 = (code ******)CONCAT44(uStack_260._4_4_,(int)uStack_2d0);
  FUN_1494e43da();
  local_308 = (ulonglong *)0x0;
  uStack_300 = 0;
  local_318 = (ulonglong *)0x0;
  uStack_310 = 0;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  local_328 = (ulonglong *)0x0;
  uStack_320 = 0;
  local_178 = 0;
  local_170 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1bc = 0xffffffff00000080;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  FUN_144a13f80(&local_1e8,&local_268,&DAT_14cc1d968,0);
  local_460 = param_1;
  local_350 = &local_1e8;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    puVar23 = *(ulonglong **)(param_1 + 0x48);
    puVar28 = puVar23 + *(int *)(param_1 + 0x50);
    do {
      local_3d8 = (code ****)*puVar23;
      uVar16 = FUN_1494e64f0(local_3d8[6]);
      bVar37 = true;
      if ((int)uStack_f0 != local_c4) {
        uVar11 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        puVar22 = local_b8;
        if (local_b8 == (undefined1 *)0x0) {
          puVar22 = local_c0;
        }
        for (iVar12 = *(int *)(puVar22 + (ulonglong)(local_b0 - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4)
            ; iVar12 != -1; iVar12 = *(int *)((longlong)iVar12 * 0x10 + local_f8 + 8)) {
          bVar36 = *(ulonglong *)(local_f8 + (longlong)iVar12 * 0x10) == uVar16;
          bVar37 = !bVar36;
          if (bVar36) break;
        }
      }
      uVar17 = FUN_1494e64f0(local_3d8[5]);
      uVar10 = uStack_300;
      uVar9 = uStack_310;
      uVar16 = uStack_320;
      if ((int)uStack_f0 != local_c4) {
        uVar11 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        puVar22 = local_b8;
        if (local_b8 == (undefined1 *)0x0) {
          puVar22 = local_c0;
        }
        for (iVar12 = *(int *)(puVar22 + (ulonglong)(local_b0 - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4)
            ; iVar12 != -1; iVar12 = *(int *)((longlong)iVar12 * 0x10 + local_f8 + 8)) {
          if (*(ulonglong *)(local_f8 + (longlong)iVar12 * 0x10) == uVar17) {
            if (!bVar37) {
              lVar27 = (longlong)(int)uStack_300;
              uVar11 = (int)uStack_300 + 1;
              uStack_300 = CONCAT44(uStack_300._4_4_,uVar11);
              if (uStack_300._4_4_ < uVar11) {
                FUN_1494e4bb6(&local_308,uVar10 & 0xffffffff);
              }
              local_308[lVar27] = (ulonglong)local_3d8;
              goto LAB_1494c0c3f;
            }
            lVar27 = (longlong)(int)uStack_320;
            uVar11 = (int)uStack_320 + 1;
            uStack_320 = CONCAT44(uStack_320._4_4_,uVar11);
            if (uStack_320._4_4_ < uVar11) {
              FUN_1494e4bb6(&local_328,uVar16 & 0xffffffff);
            }
            local_328[lVar27] = (ulonglong)local_3d8;
            pppcVar33 = local_3d8[5];
            local_268 = (code *******)0x0;
            local_388 = (code ******)0x0;
            ppcStack_380 = (code **)0x0;
            FUN_140e6511c(&uStack_260,&local_388);
            FUN_140e6507e(local_230);
            local_1f0 = 0;
            FUN_14452e6da(&local_350,&local_388,pppcVar33[3]);
            local_268 = (code *******)local_388;
            FUN_1494947ba(pppcVar33 + 0xe,local_3b8);
            FUN_140e6511c(&local_388,local_3b8);
            uStack_260 = local_388;
            local_258 = (code ***)ppcStack_380;
            local_250 = CONCAT44(uStack_374,local_378);
            uStack_248 = (undefined **)CONCAT44(uStack_36c,uStack_370);
            if (local_240 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            local_240 = (undefined1 *)CONCAT44(uStack_364,local_368);
            iStack_238 = iStack_360;
            uStack_234 = uStack_35c;
            local_230[0] = *(undefined4 *)(pppcVar33 + 6);
            FUN_1406fa324(local_228,pppcVar33 + 7);
            local_218 = *(undefined4 *)(pppcVar33 + 9);
            FUN_144a787a6(local_210,pppcVar33 + 10);
            FUN_1406fa324(local_200,pppcVar33 + 0xc);
            uVar16 = uStack_340;
            lVar27 = (longlong)(int)uStack_340;
            uVar11 = (int)uStack_340 + 1;
            uStack_340 = CONCAT44(uStack_340._4_4_,uVar11);
            if (uStack_340._4_4_ < uVar11) {
              FUN_1494d6e7c(&local_348,uVar16 & 0xffffffff);
            }
            puVar22 = local_240;
            lVar27 = lVar27 * 0x80;
            lVar32 = local_348 + lVar27;
            *(code ********)(local_348 + lVar27) = local_268;
            *(code *******)(local_348 + 8 + lVar27) = uStack_260;
            *(code ****)(local_348 + 0x10 + lVar27) = local_258;
            puVar5 = (undefined4 *)(local_348 + 0x18 + lVar27);
            *puVar5 = (undefined4)local_250;
            puVar5[1] = local_250._4_4_;
            puVar5[2] = (undefined4)uStack_248;
            puVar5[3] = uStack_248._4_4_;
            *(undefined8 *)(local_348 + 0x28 + lVar27) = 0;
            lVar35 = (longlong)iStack_238;
            *(int *)(local_348 + 0x30 + lVar27) = iStack_238;
            if (lVar35 == 0) {
              *(undefined4 *)(lVar32 + 0x34) = 0;
            }
            else {
              puVar34 = (undefined8 *)(lVar27 + local_348 + 0x28);
              FUN_1446dd670(puVar34,iStack_238,0);
              memcpy((void *)*puVar34,puVar22,lVar35 * 2);
            }
            FUN_149482cae(lVar32 + 0x38,local_230);
            *(undefined2 *)(lVar32 + 0x78) = local_1f0;
            local_388 = (code ******)local_268;
            FUN_144869592(&local_1e8,&local_3e8,&local_388,0);
            pppppppcVar26 = local_268;
            local_388 = (code ******)&local_3d8;
            FUN_1494e4c3c(&local_198,&local_3e8,&local_388);
            *(code ********)(local_198 + 8 + (longlong)(int)local_3e8 * 0x18) = pppppppcVar26;
            goto LAB_1494c0fd1;
          }
        }
      }
      if (!bVar37) {
        lVar27 = (longlong)(int)uStack_310;
        uVar11 = (int)uStack_310 + 1;
        uStack_310 = CONCAT44(uStack_310._4_4_,uVar11);
        if (uStack_310._4_4_ < uVar11) {
          FUN_1494e4bb6(&local_318,uVar9 & 0xffffffff);
        }
        local_318[lVar27] = (ulonglong)local_3d8;
        pppcVar33 = local_3d8[6];
        local_268 = (code *******)0x0;
        local_388 = (code ******)0x0;
        ppcStack_380 = (code **)0x0;
        FUN_140e6511c(&uStack_260,&local_388);
        FUN_140e6507e(local_230);
        local_1f0 = 0;
        FUN_14452e6da(&local_350,&local_388,pppcVar33[3]);
        local_268 = (code *******)local_388;
        if (*(char *)(pppcVar33 + 5) == '\0') {
          FUN_1494947ba(pppcVar33 + 0xe,local_398);
          FUN_140e6511c(&local_388,local_398);
          uStack_260 = local_388;
          local_258 = (code ***)ppcStack_380;
          local_250 = CONCAT44(uStack_374,local_378);
          uStack_248 = (undefined **)CONCAT44(uStack_36c,uStack_370);
          if (local_240 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          local_240 = (undefined1 *)CONCAT44(uStack_364,local_368);
        }
        else {
          FUN_1494947ba(local_3d8[5] + 0xe,local_3a8);
          FUN_140e6511c(&local_388,local_3a8);
          uStack_260 = local_388;
          local_258 = (code ***)ppcStack_380;
          local_250 = CONCAT44(uStack_374,local_378);
          uStack_248 = (undefined **)CONCAT44(uStack_36c,uStack_370);
          if (local_240 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          local_240 = (undefined1 *)CONCAT44(uStack_364,local_368);
          pppcVar33 = local_3d8[5];
        }
        local_230[0] = *(undefined4 *)(pppcVar33 + 6);
        iStack_238 = iStack_360;
        uStack_234 = uStack_35c;
        FUN_1406fa324(local_228,pppcVar33 + 7);
        local_218 = *(undefined4 *)(pppcVar33 + 9);
        FUN_144a787a6(local_210,pppcVar33 + 10);
        FUN_1406fa324(local_200,pppcVar33 + 0xc);
        uVar16 = uStack_330;
        lVar27 = (longlong)(int)uStack_330;
        uVar11 = (int)uStack_330 + 1;
        uStack_330 = CONCAT44(uStack_330._4_4_,uVar11);
        if (uStack_330._4_4_ < uVar11) {
          FUN_1494d6e7c(&local_338,uVar16 & 0xffffffff);
        }
        puVar22 = local_240;
        lVar27 = lVar27 * 0x80;
        lVar32 = local_338 + lVar27;
        *(code ********)(local_338 + lVar27) = local_268;
        *(code *******)(local_338 + 8 + lVar27) = uStack_260;
        *(code ****)(local_338 + 0x10 + lVar27) = local_258;
        puVar5 = (undefined4 *)(local_338 + 0x18 + lVar27);
        *puVar5 = (undefined4)local_250;
        puVar5[1] = local_250._4_4_;
        puVar5[2] = (undefined4)uStack_248;
        puVar5[3] = uStack_248._4_4_;
        *(undefined8 *)(local_338 + 0x28 + lVar27) = 0;
        lVar35 = (longlong)iStack_238;
        *(int *)(local_338 + 0x30 + lVar27) = iStack_238;
        if (lVar35 == 0) {
          *(undefined4 *)(lVar32 + 0x34) = 0;
        }
        else {
          puVar34 = (undefined8 *)(lVar27 + local_338 + 0x28);
          FUN_1446dd670(puVar34,iStack_238,0);
          memcpy((void *)*puVar34,puVar22,lVar35 * 2);
        }
        FUN_149482cae(lVar32 + 0x38,local_230);
        *(undefined2 *)(lVar32 + 0x78) = local_1f0;
        local_388 = (code ******)local_268;
        FUN_144869592(&local_1e8,&local_3e8,&local_388,0);
        pppppppcVar26 = local_268;
        local_388 = (code ******)&local_3d8;
        FUN_1494e4c3c(&local_148,&local_3e8,&local_388);
        *(code ********)(local_148 + 8 + (longlong)(int)local_3e8 * 0x18) = pppppppcVar26;
LAB_1494c0fd1:
        FUN_14121c54c(local_230);
        if (local_240 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_1494c0c3f:
      puVar23 = puVar23 + 1;
    } while (puVar23 != puVar28);
  }
  FUN_140056680(&local_268,L"Collapse Nodes to Sub-graph");
  lVar27 = local_460;
  uVar13 = FUN_1494c9ad6(local_460);
  FUN_1494a80f4(uVar13,&local_268);
  if (local_268 != (code *******)0x0) {
    FUN_1400020a8();
  }
  FUN_149499cc8(&local_268,lVar27,DAT_14cc1ce90);
  pppppppcVar26 = local_268;
  local_3c0 = (code ******)local_268;
  ppppppcVar14 = (code ******)FUN_14001cc68(0x90,0x10);
  uVar16 = uStack_330;
  lVar27 = local_338;
  local_268 = (code *******)0x0;
  uStack_260 = (code ******)CONCAT44(uStack_260._4_4_,(int)uStack_330);
  if ((int)uStack_330 == 0) {
    uStack_260 = (code ******)(uStack_330 & 0xffffffff);
  }
  else {
    FUN_149482bea(&local_268,uStack_330 & 0xffffffff,0);
    FUN_149482c4c(local_268,lVar27,uVar16 & 0xffffffff);
  }
  uVar16 = uStack_340;
  lVar27 = local_348;
  local_258 = (code ***)0x0;
  local_250 = CONCAT44(local_250._4_4_,(int)uStack_340);
  if ((int)uStack_340 == 0) {
    local_250 = uStack_340 & 0xffffffff;
  }
  else {
    FUN_149482bea(&local_258,uStack_340 & 0xffffffff,0);
    FUN_149482c4c(local_258,lVar27,uVar16 & 0xffffffff);
  }
  lVar27 = local_460;
  local_2a8[0] = (code *)0x0;
  local_298 = (undefined8 *)0x0;
  local_298 = (undefined8 *)FUN_14001cc68(0x28,8);
  pppcVar33 = local_258;
  pppppppcVar21 = local_268;
  *local_298 = &PTR_FUN_14bd1e420;
  local_268 = (code *******)0x0;
  uVar38 = (int)uStack_260;
  uVar39 = uStack_260._4_4_;
  uStack_260 = (code ******)0x0;
  local_258 = (code ***)0x0;
  uVar46 = (undefined4)local_250;
  uVar47 = local_250._4_4_;
  local_250 = 0;
  local_298[1] = pppppppcVar21;
  *(undefined4 *)(local_298 + 2) = uVar38;
  *(undefined4 *)((longlong)local_298 + 0x14) = uVar39;
  local_298[3] = pppcVar33;
  *(undefined4 *)(local_298 + 4) = uVar46;
  *(undefined4 *)((longlong)local_298 + 0x24) = uVar47;
  if (local_298 + 1 != (undefined8 *)0x0) {
    local_2a8[0] = FUN_144533e46;
  }
  local_448 = (longlong *)(lVar27 + 0x28);
  (**(code **)(*(longlong *)(lVar27 + 0x28) + 0x20))(local_448,&local_388);
  local_470 = local_2a8;
  local_478 = (code *******)CONCAT44(local_478._4_4_,0xffffffff);
  FUN_14945fe70(ppppppcVar14,&local_388,4,pppppppcVar26);
  if (local_388 != (code ******)0x0) {
    FUN_1400020a8();
  }
  FUN_14452e7ac(&local_268);
  uVar18 = FUN_1494c9ad6(lVar27);
  local_268 = (code *******)ppppppcVar14;
  uStack_260 = (code ******)FUN_14001cc68(0x18,0x10);
  uStack_260[1] = (code *****)&DAT_100000001;
  *uStack_260 = (code *****)&PTR_LAB_14bcfe3d0;
  uStack_260[2] = (code *****)ppppppcVar14;
  FUN_1494a7e7c(uVar18,&local_268);
  FUN_1400021e4(&local_3c0,&local_268);
  FUN_1494cbfc8(lVar27,&local_388,&local_268);
  if (local_268 != (code *******)0x0) {
    FUN_1400020a8();
  }
  uVar42 = SUB84(DAT_14c8463f0,0);
  uVar43 = (undefined4)((ulonglong)DAT_14c8463f0 >> 0x20);
  uVar38 = (undefined4)DAT_14c8463f8;
  uVar39 = (undefined4)((ulonglong)DAT_14c8463f8 >> 0x20);
  uVar46 = uVar42;
  uVar47 = uVar43;
  if ((longlong)(int)uStack_2d0 == 0) {
    bVar37 = false;
    uVar44 = uVar38;
    uVar45 = uVar39;
  }
  else {
    lVar32 = 0;
    bVar37 = false;
    dVar40 = DAT_14c8463f0;
    uVar48 = uVar38;
    uVar49 = uVar39;
    do {
      dVar41 = *(double *)(*(longlong *)((longlong)local_2d8 + lVar32) + 0x40);
      uVar42 = SUB84(dVar41,0);
      uVar43 = (undefined4)((ulonglong)dVar41 >> 0x20);
      dVar7 = *(double *)(*(longlong *)((longlong)local_2d8 + lVar32) + 0x48);
      uVar44 = SUB84(dVar7,0);
      uVar45 = (undefined4)((ulonglong)dVar7 >> 0x20);
      if (bVar37) {
        if (dVar41 <= (double)CONCAT44(uVar47,uVar46)) {
          uVar46 = uVar42;
          uVar47 = uVar43;
        }
        if (dVar7 <= (double)CONCAT44(uVar49,uVar48)) {
          uVar48 = uVar44;
          uVar49 = uVar45;
        }
        if (dVar40 <= dVar41) {
          dVar40 = dVar41;
        }
        if ((double)CONCAT44(uVar39,uVar38) <= dVar7) {
          uVar38 = uVar44;
          uVar39 = uVar45;
        }
        uVar42 = SUB84(dVar40,0);
        uVar43 = (undefined4)((ulonglong)dVar40 >> 0x20);
        dVar41 = dVar40;
        uVar44 = uVar48;
        uVar45 = uVar49;
      }
      else {
        bVar37 = true;
        uVar38 = uVar44;
        uVar39 = uVar45;
        uVar46 = uVar42;
        uVar47 = uVar43;
      }
      lVar32 = lVar32 + 8;
      dVar40 = dVar41;
      uVar48 = uVar44;
      uVar49 = uVar45;
    } while ((longlong)(int)uStack_2d0 * 8 != lVar32);
  }
  uVar18 = FUN_1494c9ad6(lVar27);
  uVar19 = FUN_145ba6e90();
  plVar20 = (longlong *)FUN_14001cc68(0xb0,0x10);
  plVar20[1] = (longlong)&DAT_100000001;
  *plVar20 = (longlong)&PTR_FUN_14bd1e1a0;
  local_268 = (code *******)0x0;
  local_258 = (code ***)0x0;
  local_258 = (code ***)FUN_14001cc68(0x30,8);
  *local_258 = (code **)&PTR_FUN_14bd1e440;
  local_258[1] = (code **)CONCAT44(uVar47,uVar46);
  local_258[2] = (code **)CONCAT44(uVar45,uVar44);
  local_258[3] = (code **)CONCAT44(uVar43,uVar42);
  local_258[4] = (code **)CONCAT44(uVar39,uVar38);
  *(bool *)(local_258 + 5) = bVar37;
  if (local_258 + 1 != (code ***)0x0) {
    local_268 = (code *******)FUN_144533fe6;
  }
  ppppppcVar14 = (code ******)(plVar20 + 2);
  local_478 = (code *******)&local_268;
  FUN_149460a9c(ppppppcVar14,&local_388,uVar19,DAT_14cc1c5a8);
  local_268 = (code *******)ppppppcVar14;
  uStack_260 = (code ******)plVar20;
  if (plVar20 == (longlong *)0x0) {
    FUN_1494a7e7c(uVar18,&local_268);
  }
  else {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
    FUN_1494a7e7c(uVar18,&local_268);
    LOCK();
    plVar4 = plVar20 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar3 = (int *)((longlong)plVar20 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  uVar18 = FUN_1494c9ad6(lVar27);
  uVar19 = FUN_145ba6e90();
  plVar20 = (longlong *)FUN_14001cc68(0xb0,0x10);
  plVar20[1] = (longlong)&DAT_100000001;
  *plVar20 = (longlong)&PTR_FUN_14bd1e1a0;
  local_268 = (code *******)0x0;
  local_258 = (code ***)0x0;
  local_258 = (code ***)FUN_14001cc68(0x30,8);
  *local_258 = (code **)&PTR_FUN_14bd1e460;
  local_258[1] = (code **)CONCAT44(uVar47,uVar46);
  local_258[2] = (code **)CONCAT44(uVar45,uVar44);
  local_258[3] = (code **)CONCAT44(uVar43,uVar42);
  local_258[4] = (code **)CONCAT44(uVar39,uVar38);
  *(bool *)(local_258 + 5) = bVar37;
  *(uint *)((longlong)local_258 + 0x2c) = CONCAT31(uStack_2ab,local_2af._3_1_);
  *(undefined4 *)((longlong)local_258 + 0x29) = local_2af;
  if (local_258 + 1 != (code ***)0x0) {
    local_268 = (code *******)FUN_144534114;
  }
  ppppppcVar14 = (code ******)(plVar20 + 2);
  local_478 = (code *******)&local_268;
  FUN_149460a9c(ppppppcVar14,&local_388,uVar19,DAT_14cc1c5b0);
  local_438 = uVar13;
  local_268 = (code *******)ppppppcVar14;
  uStack_260 = (code ******)plVar20;
  if (plVar20 == (longlong *)0x0) {
    FUN_1494a7e7c(uVar18,&local_268);
  }
  else {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
    FUN_1494a7e7c(uVar18,&local_268);
    LOCK();
    plVar4 = plVar20 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar3 = (int *)((longlong)plVar20 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  lVar32 = local_2f8;
  lVar35 = (longlong)(int)uStack_2f0;
  if (lVar35 != 0) {
    lVar31 = 0;
    do {
      lVar15 = *(longlong *)(lVar32 + lVar31);
      uVar13 = *(undefined8 *)(lVar15 + 0x18);
      uVar18 = FUN_1494c9ad6(lVar27);
      FUN_1494c9d96(uVar18,&local_388,lVar15,uVar13);
      lVar31 = lVar31 + 8;
    } while (lVar35 * 8 != lVar31);
  }
  local_458 = (ulonglong *)(longlong)(int)uStack_2d0;
  if (local_458 != (ulonglong *)0x0) {
    local_450 = local_2d8;
    local_458 = (ulonglong *)((longlong)local_458 << 3);
    puVar28 = (ulonglong *)0x0;
    do {
      lVar32 = *(longlong *)((longlong)local_450 + (longlong)puVar28);
      uVar18 = FUN_1494c9ad6(lVar27);
      uVar13 = *(undefined8 *)(lVar32 + 0x18);
      plVar20 = (longlong *)FUN_14001cc68(0xc0,0x10);
      plVar20[1] = (longlong)&DAT_100000001;
      *plVar20 = (longlong)&PTR_FUN_14bd1e200;
      ppppppcVar14 = (code ******)(plVar20 + 2);
      local_258 = (code ***)0x0;
      uStack_248 = &PTR_LAB_14bd1e220;
      local_240 = &LAB_144534244;
      local_268 = (code *******)&LAB_1494e3d56;
      local_478 = (code *******)&local_268;
      FUN_149461086(ppppppcVar14,&local_388,lVar32,uVar13);
      local_268 = (code *******)ppppppcVar14;
      uStack_260 = (code ******)plVar20;
      if (plVar20 == (longlong *)0x0) {
        FUN_1494a7e7c(uVar18,&local_268);
      }
      else {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        FUN_1494a7e7c(uVar18,&local_268);
        LOCK();
        plVar4 = plVar20 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar3 = (int *)((longlong)plVar20 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      puVar28 = puVar28 + 1;
      lVar27 = local_460;
    } while (local_458 != puVar28);
  }
  local_3d8 = (code ****)0x0;
  uStack_3d0 = 0;
  lVar32 = (longlong)(int)uStack_2e0;
  if (lVar32 != 0) {
    local_458 = local_2e8;
    lVar35 = 0;
    do {
      lVar27 = *(longlong *)(*(longlong *)((longlong)local_458 + lVar35) + 0x30);
      local_268 = (code *******)0x0;
      uStack_260 = (code ******)0x0;
      local_3e8 = *(code ********)
                   (*(longlong *)(*(longlong *)((longlong)local_458 + lVar35) + 0x28) + 0x18);
      FUN_1400021e4(&local_3e8,&local_3f8);
      FUN_1494bd7c2(&local_3e8,&local_388,&local_3f8,&local_268);
      if (local_3f8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      if (local_268 != (code *******)0x0) {
        FUN_1400020a8();
      }
      local_268 = (code *******)0x0;
      uStack_260 = (code ******)0x0;
      local_3f8 = *(code ********)(lVar27 + 0x18);
      FUN_1400021e4(&local_3f8,&local_408);
      FUN_1494bd7c2(&local_3f8,&local_388,&local_408,&local_268);
      if (local_408 != (code *******)0x0) {
        FUN_1400020a8();
      }
      if (local_268 != (code *******)0x0) {
        FUN_1400020a8();
      }
      FUN_149365e7c(&local_268,0,&local_3e8,&local_3f8);
      uVar16 = uStack_3d0;
      lVar27 = (longlong)(int)uStack_3d0;
      uVar11 = (int)uStack_3d0 + 1;
      uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uVar11);
      if (uStack_3d0._4_4_ < uVar11) {
        FUN_146272134(&local_3d8,uVar16 & 0xffffffff);
      }
      local_3d8[lVar27 * 4] = (code ***)0x0;
      local_3d8[lVar27 * 4] = (code ***)local_268;
      *(int *)(local_3d8 + lVar27 * 4 + 1) = (int)uStack_260;
      *(undefined4 *)((longlong)local_3d8 + lVar27 * 0x20 + 0xc) = uStack_260._4_4_;
      local_3d8[lVar27 * 4 + 2] = (code ***)0x0;
      local_3d8[lVar27 * 4 + 2] = local_258;
      *(undefined4 *)(local_3d8 + lVar27 * 4 + 3) = (undefined4)local_250;
      *(undefined4 *)((longlong)local_3d8 + lVar27 * 0x20 + 0x1c) = local_250._4_4_;
      local_250 = 0;
      local_258 = (code ***)0x0;
      uStack_260 = (code ******)0x0;
      local_268 = (code *******)0x0;
      if (local_3f8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      if (local_3e8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      lVar27 = local_460;
      lVar35 = lVar35 + 8;
    } while (lVar32 * 8 != lVar35);
    if ((longlong)(int)uStack_3d0 != 0) {
      ppppcVar24 = local_3d8 + (longlong)(int)uStack_3d0 * 4;
      ppppcVar29 = local_3d8;
      do {
        uVar13 = FUN_1494c9ad6(lVar27);
        FUN_1494cae26(uVar13,ppppcVar29,ppppcVar29 + 2);
        ppppcVar29 = ppppcVar29 + 4;
      } while (ppppcVar29 != ppppcVar24);
    }
  }
  FUN_149499cc8(&local_268,lVar27,DAT_14cc1ce98);
  pppppppcVar26 = local_268;
  local_410 = (code ******)local_268;
  pppppppcVar21 = (code *******)FUN_14001cc68(0x28,0x10);
  local_268 = (code *******)0x0;
  uStack_260 = (code ******)0x0;
  FUN_14945e0fa(pppppppcVar21,&local_268);
  ppppppcVar8 = local_3c0;
  *pppppppcVar21 = (code ******)&PTR_FUN_14bcfe1b0;
  pppppppcVar21[3] = (code ******)0x0;
  pppppppcVar21[4] = (code ******)0x0;
  uVar13 = FUN_145ba7238();
  (**(code **)(*(longlong *)(lVar27 + 0x28) + 0x20))(local_448,&local_3e8);
  local_450 = (code ******)FUN_14001cc68(0xb0,0x10);
  local_450[1] = (code *****)&DAT_100000001;
  *local_450 = (code *****)&PTR_FUN_14bd1e1a0;
  local_268 = (code *******)0x0;
  local_258 = (code ***)0x0;
  local_258 = (code ***)FUN_14001cc68(0x38,8);
  ppppppcVar14 = local_450;
  *local_258 = (code **)&PTR_FUN_14bd1e480;
  local_258[1] = (code **)CONCAT44(uVar47,uVar46);
  local_258[2] = (code **)CONCAT44(uVar45,uVar44);
  local_258[3] = (code **)CONCAT44(uVar43,uVar42);
  local_258[4] = (code **)CONCAT44(uVar39,uVar38);
  *(bool *)(local_258 + 5) = bVar37;
  *(undefined4 *)((longlong)local_258 + 0x29) = local_2af;
  *(uint *)((longlong)local_258 + 0x2c) = CONCAT31(uStack_2ab,local_2af._3_1_);
  local_258[6] = (code **)ppppppcVar8;
  if (local_258 + 1 != (code ***)0x0) {
    local_268 = (code *******)FUN_144534248;
  }
  pppppcVar1 = (code *****)(local_450 + 2);
  local_478 = (code *******)&local_268;
  FUN_149460a9c(pppppcVar1,&local_3e8,uVar13,pppppppcVar26);
  if (ppppppcVar14 != (code ******)0x0) {
    LOCK();
    *(int *)(ppppppcVar14 + 1) = *(int *)(ppppppcVar14 + 1) + 1;
    UNLOCK();
    LOCK();
    pppppcVar2 = (code *****)(ppppppcVar14 + 1);
    *(int *)pppppcVar2 = *(int *)pppppcVar2 + -1;
    UNLOCK();
    if (*(int *)pppppcVar2 == 0) {
      (*(code *)**ppppppcVar14)(ppppppcVar14);
      LOCK();
      piVar3 = (int *)((longlong)ppppppcVar14 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (*(code *)(*ppppppcVar14)[2])(ppppppcVar14);
      }
    }
    LOCK();
    *(int *)(ppppppcVar14 + 1) = *(int *)(ppppppcVar14 + 1) + 1;
    UNLOCK();
  }
  iVar12 = *(int *)(pppppppcVar21 + 4);
  *(uint *)(pppppppcVar21 + 4) = iVar12 + 1U;
  if (*(uint *)((longlong)pppppppcVar21 + 0x24) < iVar12 + 1U) {
    FUN_14947b622(pppppppcVar21 + 3,iVar12);
  }
  ppppppcVar8 = local_450;
  ppppppcVar14 = pppppppcVar21[3];
  ppppppcVar14[(longlong)iVar12 * 2] = pppppcVar1;
  ppppppcVar14[(longlong)iVar12 * 2 + 1] = (code *****)local_450;
  if (local_450 != (code ******)0x0) {
    LOCK();
    *(int *)((longlong)local_450 + 0xc) = *(int *)((longlong)local_450 + 0xc) + 1;
    UNLOCK();
    LOCK();
    pppppcVar2 = (code *****)(local_450 + 1);
    *(int *)pppppcVar2 = *(int *)pppppcVar2 + -1;
    UNLOCK();
    if (*(int *)pppppcVar2 == 0) {
      (*(code *)**local_450)(local_450);
      LOCK();
      piVar3 = (int *)((longlong)ppppppcVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (*(code *)(*ppppppcVar8)[2])(ppppppcVar8);
      }
    }
  }
  local_440 = pppppcVar1;
  if (local_3e8 != (code *******)0x0) {
    FUN_1400020a8();
  }
  uVar13 = FUN_1494c9ad6(lVar27);
  local_268 = pppppppcVar21;
  uStack_260 = (code ******)FUN_14001cc68(0x18,0x10);
  uStack_260[1] = (code *****)&DAT_100000001;
  *uStack_260 = (code *****)&PTR_LAB_14bcfe3d0;
  uStack_260[2] = (code *****)pppppppcVar21;
  FUN_1494a7e7c(uVar13,&local_268);
  FUN_1494cb0d0(lVar27,&local_2d8);
  lVar27 = (longlong)(int)uStack_300;
  if (lVar27 != 0) {
    local_458 = local_308;
    lVar32 = 0;
    do {
      lVar35 = *(longlong *)((longlong)local_458 + lVar32);
      FUN_1494e66cc(*(undefined8 *)(lVar35 + 0x28),&local_408);
      FUN_1400021e4(&local_408,&local_3e8);
      pppppppcVar26 = (code *******)&DAT_149dfb77a;
      if (iStack_3e0 != 0) {
        pppppppcVar26 = local_3e8;
      }
      lVar31 = FUN_1494e64f0(*(undefined8 *)(lVar35 + 0x28));
      local_268 = *(code ********)(lVar31 + 0x18);
      FUN_1400021e4(&local_268,&local_3f8);
      pppppppcVar21 = (code *******)&DAT_149dfb77a;
      if (iStack_3f0 != 0) {
        pppppppcVar21 = local_3f8;
      }
      ppppppcVar14 = (code ******)&DAT_149dfb77a;
      if ((int)ppcStack_380 != 0) {
        ppppppcVar14 = local_388;
      }
      local_478 = pppppppcVar26;
      FUN_140002266(&local_268,L"%s/%s.%s",ppppppcVar14,pppppppcVar21);
      if (local_3f8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      if (local_3e8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      FUN_1494e66cc(*(undefined8 *)(lVar35 + 0x30),&local_420);
      FUN_1400021e4(&local_420,&local_3f8);
      pppppppcVar26 = (code *******)&DAT_149dfb77a;
      if (iStack_3f0 != 0) {
        pppppppcVar26 = local_3f8;
      }
      lVar35 = FUN_1494e64f0(*(undefined8 *)(lVar35 + 0x30));
      local_3e8 = *(code ********)(lVar35 + 0x18);
      FUN_1400021e4(&local_3e8,&local_408);
      pppppppcVar21 = (code *******)&DAT_149dfb77a;
      if ((int)uStack_400 != 0) {
        pppppppcVar21 = local_408;
      }
      ppppppcVar14 = (code ******)&DAT_149dfb77a;
      if ((int)ppcStack_380 != 0) {
        ppppppcVar14 = local_388;
      }
      local_478 = pppppppcVar26;
      FUN_140002266(&local_3e8,L"%s/%s.%s",ppppppcVar14,pppppppcVar21);
      if (local_408 != (code *******)0x0) {
        FUN_1400020a8();
      }
      if (local_3f8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      uVar13 = FUN_1494c9ad6(local_460);
      FUN_1494cc034(uVar13,&local_268,&local_3e8);
      if (local_3e8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      if (local_268 != (code *******)0x0) {
        FUN_1400020a8();
      }
      lVar32 = lVar32 + 8;
    } while (lVar27 * 8 != lVar32);
  }
  if ((longlong)(int)uStack_310 != 0) {
    local_458 = local_318 + (int)uStack_310;
    puVar28 = local_318;
    do {
      uVar16 = *puVar28;
      if ((int)uStack_140 != local_114) {
        uVar11 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        puVar22 = local_108;
        if (local_108 == (undefined1 *)0x0) {
          puVar22 = local_110;
        }
        iVar12 = *(int *)(puVar22 + (ulonglong)(local_100 - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
        while (iVar12 != -1) {
          puVar23 = (ulonglong *)(local_148 + (longlong)iVar12 * 0x18);
          if (*puVar23 == uVar16) goto LAB_1494c233e;
          iVar12 = (int)puVar23[2];
        }
      }
      puVar23 = (ulonglong *)0x0;
LAB_1494c233e:
      FUN_1400021e4(puVar23 + 1,&local_268);
      FUN_1400021e4(&DAT_14cc1c5a8,&local_3f8);
      FUN_1494bd7c2(&local_3e8,&local_388,&local_3f8,&local_268);
      if (local_3f8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      FUN_1494e66cc(*(undefined8 *)(uVar16 + 0x30),&local_430);
      FUN_1400021e4(&local_430,&local_408);
      pppppppcVar26 = (code *******)&DAT_149dfb77a;
      if ((int)uStack_400 != 0) {
        pppppppcVar26 = local_408;
      }
      lVar27 = FUN_1494e64f0(*(undefined8 *)(uVar16 + 0x30));
      local_3f8 = *(code ********)(lVar27 + 0x18);
      FUN_1400021e4(&local_3f8,&local_420);
      puVar25 = &DAT_149dfb77a;
      if (local_418 != 0) {
        puVar25 = local_420;
      }
      ppppppcVar14 = (code ******)&DAT_149dfb77a;
      if ((int)ppcStack_380 != 0) {
        ppppppcVar14 = local_388;
      }
      local_478 = pppppppcVar26;
      FUN_140002266(&local_3f8,L"%s/%s.%s",ppppppcVar14,puVar25);
      if (local_420 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_408 != (code *******)0x0) {
        FUN_1400020a8();
      }
      uVar13 = FUN_1494c9ad6(local_460);
      FUN_1494cc034(uVar13,&local_3e8,&local_3f8);
      FUN_1494e67ec(*(undefined8 *)(uVar16 + 0x28),&local_408);
      if (local_3e8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      local_3e8 = local_408;
      iStack_3e0 = (int)uStack_400;
      uStack_3dc = uStack_400._4_4_;
      pppppppcVar26 = (code *******)&DAT_149dfb77a;
      if ((int)uStack_260 != 0) {
        pppppppcVar26 = local_268;
      }
      FUN_1400021e4(&local_410,&local_420);
      puVar25 = &DAT_149dfb77a;
      if (local_418 != 0) {
        puVar25 = local_420;
      }
      (**(code **)(*local_448 + 0x20))(local_448,&local_430);
      puVar30 = &DAT_149dfb77a;
      if (local_428 != 0) {
        puVar30 = local_430;
      }
      local_478 = pppppppcVar26;
      FUN_140002266(&local_408,L"%s/%s.%s",puVar30,puVar25);
      if (local_3f8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      local_3f8 = local_408;
      iStack_3f0 = (int)uStack_400;
      uStack_3ec = uStack_400._4_4_;
      local_408 = (code *******)0x0;
      uStack_400 = 0;
      if (local_430 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_420 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar13 = FUN_1494c9ad6(local_460);
      FUN_1494cc034(uVar13,&local_3e8,&local_3f8);
      if (local_3f8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      if (local_3e8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      if (local_268 != (code *******)0x0) {
        FUN_1400020a8();
      }
      puVar28 = puVar28 + 1;
    } while (puVar28 != local_458);
  }
  if ((longlong)(int)uStack_320 != 0) {
    local_458 = local_328 + (int)uStack_320;
    puVar28 = local_328;
    do {
      uVar16 = *puVar28;
      if ((int)uStack_190 != local_164) {
        uVar11 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        puVar22 = local_158;
        if (local_158 == (undefined1 *)0x0) {
          puVar22 = local_160;
        }
        iVar12 = *(int *)(puVar22 + (ulonglong)(local_150 - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
        while (iVar12 != -1) {
          puVar23 = (ulonglong *)(local_198 + (longlong)iVar12 * 0x18);
          if (*puVar23 == uVar16) goto LAB_1494c265b;
          iVar12 = (int)puVar23[2];
        }
      }
      puVar23 = (ulonglong *)0x0;
LAB_1494c265b:
      FUN_1400021e4(puVar23 + 1,&local_268);
      FUN_1494e66cc(*(undefined8 *)(uVar16 + 0x28),&local_420);
      FUN_1400021e4(&local_420,&local_3f8);
      pppppppcVar26 = (code *******)&DAT_149dfb77a;
      if (iStack_3f0 != 0) {
        pppppppcVar26 = local_3f8;
      }
      lVar27 = FUN_1494e64f0(*(undefined8 *)(uVar16 + 0x28));
      local_3e8 = *(code ********)(lVar27 + 0x18);
      FUN_1400021e4(&local_3e8,&local_408);
      pppppppcVar21 = (code *******)&DAT_149dfb77a;
      if ((int)uStack_400 != 0) {
        pppppppcVar21 = local_408;
      }
      ppppppcVar14 = (code ******)&DAT_149dfb77a;
      if ((int)ppcStack_380 != 0) {
        ppppppcVar14 = local_388;
      }
      local_478 = pppppppcVar26;
      FUN_140002266(&local_3e8,L"%s/%s.%s",ppppppcVar14,pppppppcVar21);
      if (local_408 != (code *******)0x0) {
        FUN_1400020a8();
      }
      if (local_3f8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      FUN_1400021e4(&DAT_14cc1c5b0,&local_408);
      FUN_1494bd7c2(&local_3f8,&local_388,&local_408,&local_268);
      if (local_408 != (code *******)0x0) {
        FUN_1400020a8();
      }
      uVar13 = FUN_1494c9ad6(local_460);
      FUN_1494cc034(uVar13,&local_3e8,&local_3f8);
      pppppppcVar26 = (code *******)&DAT_149dfb77a;
      if ((int)uStack_260 != 0) {
        pppppppcVar26 = local_268;
      }
      FUN_1400021e4(&local_410,&local_420);
      puVar25 = &DAT_149dfb77a;
      if (local_418 != 0) {
        puVar25 = local_420;
      }
      (**(code **)(*(longlong *)(local_460 + 0x28) + 0x20))(local_448,&local_430);
      puVar30 = &DAT_149dfb77a;
      if (local_428 != 0) {
        puVar30 = local_430;
      }
      local_478 = pppppppcVar26;
      FUN_140002266(&local_408,L"%s/%s.%s",puVar30,puVar25);
      if (local_3e8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      local_3e8 = local_408;
      iStack_3e0 = (int)uStack_400;
      uStack_3dc = uStack_400._4_4_;
      local_408 = (code *******)0x0;
      uStack_400 = 0;
      if (local_430 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_420 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1494e67ec(*(undefined8 *)(uVar16 + 0x30),&local_408);
      if (local_3f8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      local_3f8 = local_408;
      iStack_3f0 = (int)uStack_400;
      uStack_3ec = uStack_400._4_4_;
      uVar13 = FUN_1494c9ad6(local_460);
      FUN_1494cc034(uVar13,&local_3e8,&local_3f8);
      if (local_3f8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      if (local_3e8 != (code *******)0x0) {
        FUN_1400020a8();
      }
      if (local_268 != (code *******)0x0) {
        FUN_1400020a8();
      }
      puVar28 = puVar28 + 1;
    } while (puVar28 != local_458);
  }
  FUN_141535be2(local_3d8,uStack_3d0 & 0xffffffff);
  if (local_3d8 != (code ****)0x0) {
    FUN_1400020a8();
  }
  uVar13 = local_438;
  pppppcVar1 = local_440;
  ppppppcVar14 = local_450;
  lVar27 = local_460;
  if (local_388 != (code ******)0x0) {
    FUN_1400020a8();
  }
  FUN_1494a81c6(uVar13);
  if (ppppppcVar14 == (code ******)0x0) {
    uVar13 = 0;
  }
  else {
    if (*(int *)(ppppppcVar14 + 1) < 1) {
      uVar13 = 0;
    }
    else {
      uVar13 = FUN_1494c97e0(lVar27);
      iVar12 = *(int *)(ppppppcVar14 + 1);
      do {
        if (iVar12 == 0) {
          uVar13 = FUN_149460d7e(0,uVar13);
          goto LAB_1494c2959;
        }
        LOCK();
        iVar6 = *(int *)(ppppppcVar14 + 1);
        bVar37 = iVar12 == iVar6;
        if (bVar37) {
          *(int *)(ppppppcVar14 + 1) = iVar12 + 1;
          iVar6 = iVar12;
        }
        iVar12 = iVar6;
        UNLOCK();
      } while (!bVar37);
      uVar13 = FUN_149460d7e(pppppcVar1,uVar13);
      LOCK();
      pppppcVar1 = (code *****)(ppppppcVar14 + 1);
      *(int *)pppppcVar1 = *(int *)pppppcVar1 + -1;
      UNLOCK();
      if (*(int *)pppppcVar1 == 0) {
        (*(code *)**ppppppcVar14)(ppppppcVar14);
        LOCK();
        piVar3 = (int *)((longlong)ppppppcVar14 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (*(code *)(*ppppppcVar14)[2])(ppppppcVar14);
        }
      }
    }
LAB_1494c2959:
    LOCK();
    piVar3 = (int *)((longlong)ppppppcVar14 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (*(code *)(*ppppppcVar14)[2])(ppppppcVar14);
    }
  }
  local_1a0 = 0;
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_1e8);
  FUN_141239a12(local_348,uStack_340 & 0xffffffff);
  if (local_348 != 0) {
    FUN_1400020a8();
  }
  FUN_141239a12(local_338,uStack_330 & 0xffffffff);
  if (local_338 != 0) {
    FUN_1400020a8();
  }
  local_150 = 0;
  if (local_158 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1494d27de(&local_198);
  if (local_328 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1494d27de(&local_148);
  if (local_318 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if (local_308 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  local_b0 = 0;
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1494e4b28(&local_f8);
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  if (local_2e8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if (local_2d8 != (code ******)0x0) {
    FUN_1400020a8();
  }
  if (local_2c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_498) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c297e FUN_1494c297e body=164 status=ok
// SIG undefined FUN_1494c297e(void)

void FUN_1494c297e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_14452cdce(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c2a24 FUN_1494c2a24 body=164 status=ok
// SIG undefined FUN_1494c2a24(void)

void FUN_1494c2a24(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_14452d19c(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c2ad0 FUN_1494c2ad0 body=163 status=ok
// SIG undefined FUN_1494c2ad0(void)

void FUN_1494c2ad0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1494c2b74(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c2b74 FUN_1494c2b74 body=6292 status=ok
// SIG undefined FUN_1494c2b74(void)

/* WARNING: Removing unreachable block (ram,0x0001494c372c) */
/* WARNING: Removing unreachable block (ram,0x0001494c373e) */

undefined8 FUN_1494c2b74(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  void ****ppppvVar3;
  longlong ***ppplVar4;
  void *pvVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong ****pppplVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  void ***pppvVar24;
  longlong **pplVar25;
  undefined1 auStack_2d8 [32];
  void *****local_2b8;
  void *****local_2b0;
  ulonglong local_2a8;
  void ****local_2a0;
  longlong local_298;
  longlong local_290;
  longlong *local_288;
  longlong local_280;
  undefined8 local_278;
  longlong local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  int iStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  longlong local_238 [2];
  longlong local_228 [2];
  longlong local_218;
  undefined8 uStack_210;
  longlong local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  void ****local_1e8;
  undefined8 uStack_1e0;
  longlong *local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  longlong local_1c8 [2];
  longlong local_1b8 [2];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  void *local_160;
  int local_158;
  undefined4 local_154;
  void ***local_150;
  void ****local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  int local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  void ***local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  int local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  longlong ****local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if (param_2 != 0) {
    lVar11 = FUN_145ba7238();
    if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
      lVar11 = (**(code **)(*(longlong *)(param_2 + 0x118) + 0x10))(param_2 + 0x118);
      plVar12 = (longlong *)
                (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))((longlong *)(param_1 + 0x28));
      if ((plVar12 != (longlong *)0x0) &&
         (lVar13 = (**(code **)(*plVar12 + 8))(plVar12), lVar13 != 0)) {
        lVar14 = FUN_1458f36a4();
        if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) {
          local_290 = lVar11;
          local_288 = (longlong *)(param_1 + 0x28);
          local_278 = FUN_1494c97e0(param_1);
          FUN_1446f470e(&local_150,L"NewFunction",1);
          local_280 = lVar13;
          FUN_149499cc8(&local_f8,lVar13,local_150);
          local_150 = local_f8;
          FUN_1400021e4(&local_150,&local_f8);
          pppvVar24 = local_f8;
          local_160 = (void *)0x0;
          local_158 = (int)uStack_f0;
          if ((longlong)(int)uStack_f0 == 0) {
            local_154 = 0;
          }
          else {
            FUN_1446dd670(&local_160,(int)uStack_f0,0);
            memcpy(local_160,pppvVar24,(longlong)(int)uStack_f0 * 2);
          }
          if (local_f8 != (longlong ***)0x0) {
            FUN_1400020a8(local_f8);
          }
          lVar11 = local_290;
          lVar13 = FUN_1494e7b0c(local_290,1);
          local_298 = FUN_1494e7b0c(lVar11,2);
          local_178 = *(undefined8 *)(lVar13 + 0x40);
          uStack_170 = *(undefined8 *)(lVar13 + 0x48);
          local_188 = *(undefined1 **)(local_298 + 0x40);
          uStack_180 = *(undefined8 *)(local_298 + 0x48);
          local_198 = *(undefined4 *)(param_2 + 0x40);
          uStack_194 = *(undefined4 *)(param_2 + 0x44);
          uStack_190 = *(undefined4 *)(param_2 + 0x48);
          uStack_18c = *(undefined4 *)(param_2 + 0x4c);
          local_270 = lVar13;
          FUN_1446f470e(&local_1a8,L"FunctionReferenceNode",1);
          FUN_149499cc8(&local_1a0,param_1,local_1a8);
          FUN_1400021e4(&local_1a0,local_1b8);
          (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(local_288,local_1c8);
          local_d8 = 0;
          local_d0 = 0;
          local_f8 = (longlong ***)0x0;
          uStack_f0 = 0;
          local_cc = 0xffffffff00000080;
          local_c4 = 0;
          local_b8 = 0;
          local_b0 = 0;
          iVar20 = *(int *)(param_1 + 0x50);
          if ((longlong)iVar20 != 0) {
            local_2a8 = *(longlong *)(param_1 + 0x48);
            lVar11 = 0;
            do {
              lVar13 = *(longlong *)(local_2a8 + lVar11);
              lVar14 = FUN_1494e64f0(*(undefined8 *)(lVar13 + 0x30));
              if (lVar14 == param_2) {
                FUN_1494e66cc(*(undefined8 *)(lVar13 + 0x30),&local_268);
                FUN_1400021e4(&local_268,&local_a8);
                FUN_1494bd7c2(&local_148,local_1c8,local_1b8,&local_a8);
                if (local_a8 != (longlong ****)0x0) {
                  FUN_1400020a8();
                }
                FUN_1494e67ec(*(undefined8 *)(lVar13 + 0x28),&local_a8);
                pppplVar19 = (longlong ****)&DAT_149dfb77a;
                if ((int)uStack_a0 != 0) {
                  pppplVar19 = local_a8;
                }
                iVar23 = (int)uStack_a0 + -1;
                if ((int)uStack_a0 == 0) {
                  iVar23 = 0;
                }
                uVar9 = FUN_144a49b4a(iVar23,pppplVar19);
                plVar12 = (longlong *)FUN_140e10654(&local_f8,uVar9,&local_a8);
                iVar23 = (int)plVar12[1];
                *(uint *)(plVar12 + 1) = iVar23 + 1U;
                if (*(uint *)((longlong)plVar12 + 0xc) < iVar23 + 1U) {
                  FUN_1447a1bd6(plVar12,iVar23);
                }
                lVar13 = *plVar12;
                lVar14 = (longlong)iVar23 * 0x10;
                puVar17 = (undefined8 *)(lVar13 + lVar14);
                *(undefined8 *)(lVar13 + lVar14) = 0;
                local_2a0 = local_148;
                iVar23 = (int)uStack_140;
LAB_1494c2f40:
                *(int *)(lVar13 + 8 + lVar14) = iVar23;
                if ((longlong)iVar23 == 0) {
                  *(undefined4 *)((longlong)puVar17 + 0xc) = 0;
                }
                else {
                  FUN_1446dd670(puVar17,iVar23,0);
                  memcpy((void *)*puVar17,local_2a0,(longlong)iVar23 * 2);
                }
                if (local_a8 != (longlong ****)0x0) {
                  FUN_1400020a8();
                }
                if (local_148 != (longlong ****)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                lVar14 = FUN_1494e64f0();
                if (lVar14 == param_2) {
                  FUN_1494e66cc(*(undefined8 *)(lVar13 + 0x28),&local_268);
                  FUN_1400021e4(&local_268,&local_a8);
                  FUN_1494bd7c2(&local_148,local_1c8,local_1b8,&local_a8);
                  if (local_a8 != (longlong ****)0x0) {
                    FUN_1400020a8();
                  }
                  FUN_1494e67ec(*(undefined8 *)(lVar13 + 0x30),&local_a8);
                  pppplVar19 = (longlong ****)&DAT_149dfb77a;
                  if ((int)uStack_140 != 0) {
                    pppplVar19 = local_148;
                  }
                  iVar23 = (int)uStack_140 + -1;
                  if ((int)uStack_140 == 0) {
                    iVar23 = 0;
                  }
                  uVar9 = FUN_144a49b4a(iVar23,pppplVar19);
                  plVar12 = (longlong *)FUN_140e10654(&local_f8,uVar9,&local_148);
                  iVar23 = (int)plVar12[1];
                  *(uint *)(plVar12 + 1) = iVar23 + 1U;
                  if (*(uint *)((longlong)plVar12 + 0xc) < iVar23 + 1U) {
                    FUN_1447a1bd6(plVar12,iVar23);
                  }
                  lVar13 = *plVar12;
                  lVar14 = (longlong)iVar23 * 0x10;
                  puVar17 = (undefined8 *)(lVar13 + lVar14);
                  *(undefined8 *)(lVar13 + lVar14) = 0;
                  local_2a0 = local_a8;
                  iVar23 = (int)uStack_a0;
                  goto LAB_1494c2f40;
                }
              }
              lVar11 = lVar11 + 8;
            } while ((longlong)iVar20 * 8 != lVar11);
          }
          local_128 = 0;
          local_120 = 0;
          local_148 = (longlong ****)0x0;
          uStack_140 = 0;
          local_11c = 0xffffffff00000080;
          local_114 = 0;
          local_108 = 0;
          local_100 = 0;
          local_2a8 = (ulonglong)*(int *)(local_290 + 0x50);
          if (local_2a8 != 0) {
            local_2a0 = *(void *****)(local_290 + 0x48);
            local_2a8 = local_2a8 << 3;
            uVar18 = 0;
            do {
              lVar11 = *(longlong *)((longlong)local_2a0 + uVar18);
              lVar13 = FUN_1494e64f0(*(undefined8 *)(lVar11 + 0x30));
              if (lVar13 == local_298) {
                FUN_1494e66cc(*(undefined8 *)(lVar11 + 0x30),&local_1e8);
                FUN_1400021e4(&local_1e8,&local_268);
                FUN_1400021e4(&DAT_14cc1c5b0,&local_1d8);
                FUN_1494bd7c2(&local_a8,&local_160,&local_1d8,&local_268);
                if (local_1d8 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                if (local_268 != (longlong ****)0x0) {
                  FUN_1400020a8();
                }
                FUN_1494e66cc(*(undefined8 *)(lVar11 + 0x28),&local_1f8);
                FUN_1400021e4(&local_1f8,&local_1d8);
                lVar11 = FUN_1494e64f0(*(undefined8 *)(lVar11 + 0x28));
                local_268 = *(longlong *****)(lVar11 + 0x18);
                FUN_1400021e4(&local_268,&local_1e8);
                FUN_1494bd7c2(&local_268,&local_160,&local_1e8,&local_1d8);
                if (local_1e8 != (longlong ****)0x0) {
                  FUN_1400020a8();
                }
                if (local_1d8 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                pppplVar19 = (longlong ****)&DAT_149dfb77a;
                if ((int)uStack_260 != 0) {
                  pppplVar19 = local_268;
                }
                iVar20 = (int)uStack_260 + -1;
                if ((int)uStack_260 == 0) {
                  iVar20 = 0;
                }
                uVar9 = FUN_144a49b4a(iVar20,pppplVar19);
                plVar12 = (longlong *)FUN_140e10654(&local_148,uVar9,&local_268);
                iVar20 = (int)plVar12[1];
                *(uint *)(plVar12 + 1) = iVar20 + 1U;
                if (*(uint *)((longlong)plVar12 + 0xc) < iVar20 + 1U) {
                  FUN_1447a1bd6(plVar12,iVar20);
                }
                lVar11 = *plVar12;
                lVar13 = (longlong)iVar20 * 0x10;
                puVar17 = (undefined8 *)(lVar11 + lVar13);
                *(undefined8 *)(lVar11 + lVar13) = 0;
                pppplVar19 = local_a8;
                iVar20 = (int)uStack_a0;
              }
              else {
                lVar13 = FUN_1494e64f0(*(undefined8 *)(lVar11 + 0x28));
                if (lVar13 == local_270) {
                  FUN_1494e66cc(*(undefined8 *)(lVar11 + 0x28),&local_1e8);
                  FUN_1400021e4(&local_1e8,&local_268);
                  FUN_1400021e4(&DAT_14cc1c5a8,&local_1d8);
                }
                else {
                  FUN_1494e66cc(*(undefined8 *)(lVar11 + 0x28),&local_1e8);
                  FUN_1400021e4(&local_1e8,&local_268);
                  lVar13 = FUN_1494e64f0(*(undefined8 *)(lVar11 + 0x28));
                  local_a8 = *(longlong *****)(lVar13 + 0x18);
                  FUN_1400021e4(&local_a8,&local_1d8);
                }
                FUN_1494bd7c2(&local_a8,&local_160,&local_1d8,&local_268);
                if (local_1d8 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                if (local_268 != (longlong ****)0x0) {
                  FUN_1400020a8();
                }
                FUN_1494e66cc(*(undefined8 *)(lVar11 + 0x30),&local_1f8);
                FUN_1400021e4(&local_1f8,&local_1d8);
                lVar11 = FUN_1494e64f0(*(undefined8 *)(lVar11 + 0x30));
                local_268 = *(longlong *****)(lVar11 + 0x18);
                FUN_1400021e4(&local_268,&local_1e8);
                FUN_1494bd7c2(&local_268,&local_160,&local_1e8,&local_1d8);
                if (local_1e8 != (longlong ****)0x0) {
                  FUN_1400020a8();
                }
                if (local_1d8 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                pppplVar19 = (longlong ****)&DAT_149dfb77a;
                if ((int)uStack_a0 != 0) {
                  pppplVar19 = local_a8;
                }
                iVar20 = (int)uStack_a0 + -1;
                if ((int)uStack_a0 == 0) {
                  iVar20 = 0;
                }
                uVar9 = FUN_144a49b4a(iVar20,pppplVar19);
                plVar12 = (longlong *)FUN_140e10654(&local_148,uVar9,&local_a8);
                iVar20 = (int)plVar12[1];
                *(uint *)(plVar12 + 1) = iVar20 + 1U;
                if (*(uint *)((longlong)plVar12 + 0xc) < iVar20 + 1U) {
                  FUN_1447a1bd6(plVar12,iVar20);
                }
                lVar11 = *plVar12;
                lVar13 = (longlong)iVar20 * 0x10;
                puVar17 = (undefined8 *)(lVar11 + lVar13);
                *(undefined8 *)(lVar11 + lVar13) = 0;
                pppplVar19 = local_268;
                iVar20 = (int)uStack_260;
              }
              *(int *)(lVar11 + 8 + lVar13) = iVar20;
              if ((longlong)iVar20 == 0) {
                *(undefined4 *)((longlong)puVar17 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(puVar17,iVar20,0);
                memcpy((void *)*puVar17,pppplVar19,(longlong)iVar20 * 2);
              }
              if (local_268 != (longlong ****)0x0) {
                FUN_1400020a8();
              }
              if (local_a8 != (longlong ****)0x0) {
                FUN_1400020a8();
              }
              uVar18 = uVar18 + 8;
            } while (local_2a8 != uVar18);
          }
          local_1d8 = (longlong *)0x0;
          local_1d0 = *(uint *)(local_290 + 0x40);
          lVar11 = (longlong)(int)local_1d0;
          pvVar5 = *(void **)(local_290 + 0x38);
          if (lVar11 == 0) {
            local_1cc = 0;
            uVar21 = local_1d0;
          }
          else {
            FUN_1494e3a2c(&local_1d8,local_1d0,0);
            memcpy(local_1d8,pvVar5,lVar11 << 3);
            uVar10 = local_1d0;
            plVar12 = local_1d8;
            uVar18 = (ulonglong)(int)local_1d0;
            uVar21 = local_1d0;
            if (uVar18 != 0) {
              lVar11 = *local_1d8;
              if (lVar11 == 0) {
LAB_1494c3cfd:
                bVar8 = false;
              }
              else {
                lVar13 = FUN_145ba6e90();
                lVar11 = *(longlong *)(lVar11 + 0x10);
                if ((*(int *)(lVar11 + 0x38) < *(int *)(lVar13 + 0x38)) ||
                   (bVar8 = true,
                   *(longlong *)
                    (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
                   lVar13 + 0x30)) goto LAB_1494c3cfd;
              }
              uVar21 = 0;
              uVar22 = 0;
              do {
                local_2a0 = (void ****)CONCAT44(local_2a0._4_4_,uVar21);
                while( true ) {
                  local_2a8 = uVar22 & 0xffffffff;
                  iVar20 = (int)uVar22;
                  uVar21 = iVar20 + 1;
                  uVar22 = (ulonglong)uVar21;
                  local_298 = (longlong)iVar20;
                  if ((int)uVar10 <= (int)uVar21) break;
                  uVar22 = local_298 + 1;
                  bVar7 = true;
LAB_1494c3d2b:
                  while (lVar11 = plVar12[uVar22], lVar11 != 0) {
                    lVar13 = FUN_145ba6e90();
                    lVar11 = *(longlong *)(lVar11 + 0x10);
                    if ((*(int *)(lVar11 + 0x38) < *(int *)(lVar13 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
                        lVar13 + 0x30)) break;
                    if (!bVar8) goto LAB_1494c3d92;
                    uVar22 = uVar22 + 1;
                    bVar7 = (longlong)uVar22 < (longlong)uVar18;
                    if (uVar22 == uVar18) goto LAB_1494c43f7;
                  }
                  if (!bVar8) {
                    uVar22 = uVar22 + 1;
                    bVar7 = (longlong)uVar22 < (longlong)uVar18;
                    if (uVar22 == uVar18) {
                      uVar22 = (ulonglong)uVar10;
                      goto LAB_1494c3d92;
                    }
                    goto LAB_1494c3d2b;
                  }
                  bVar8 = false;
                  if (!bVar7) goto LAB_1494c43f7;
                }
                if (bVar8) {
LAB_1494c43f7:
                  uVar21 = (uint)local_2a0;
                  break;
                }
                bVar7 = false;
LAB_1494c3d92:
                iVar23 = (int)uVar22 - (int)local_2a8;
                iVar20 = (uint)local_2a0;
                if ((uint)local_2a0 != (int)local_2a8) {
                  memmove(plVar12 + (int)(uint)local_2a0,plVar12 + local_298,(longlong)iVar23 << 3);
                }
                uVar21 = iVar20 + iVar23;
                bVar8 = true;
              } while (bVar7);
            }
          }
          local_1d0 = uVar21;
          local_1e8 = (longlong ****)0x0;
          uStack_1e0 = 0;
          local_1f8 = 0;
          uStack_1f0 = 0;
          local_208 = 0;
          uStack_200 = 0;
          FUN_1494c9ba8(&local_1d8,&local_1e8,&local_1f8);
          local_218 = 0;
          uStack_210 = 0;
          local_2a8 = (ulonglong)(int)uStack_1f0;
          if (local_2a8 != 0) {
            local_298 = local_1f8;
            local_2a8 = local_2a8 << 3;
            lVar11 = 0;
            do {
              lVar13 = *(longlong *)(*(longlong *)(local_298 + lVar11) + 0x30);
              local_a8 = (longlong ****)0x0;
              uStack_a0 = (longlong ****)0x0;
              local_268 = *(longlong *****)
                           (*(longlong *)(*(longlong *)(local_298 + lVar11) + 0x28) + 0x18);
              FUN_1400021e4(&local_268,local_228);
              FUN_1494bd7c2(&local_268,&local_160,local_228,&local_a8);
              if (local_228[0] != 0) {
                FUN_1400020a8();
              }
              if (local_a8 != (longlong ****)0x0) {
                FUN_1400020a8();
              }
              local_a8 = (longlong ****)0x0;
              uStack_a0 = (longlong ****)0x0;
              local_228[0] = *(longlong *)(lVar13 + 0x18);
              FUN_1400021e4(local_228,local_238);
              FUN_1494bd7c2(local_228,&local_160,local_238,&local_a8);
              if (local_238[0] != 0) {
                FUN_1400020a8();
              }
              if (local_a8 != (longlong ****)0x0) {
                FUN_1400020a8();
              }
              FUN_149365e7c(&local_a8,0,&local_268,local_228);
              uVar18 = uStack_210;
              lVar13 = (longlong)(int)uStack_210;
              uVar10 = (int)uStack_210 + 1;
              uStack_210 = CONCAT44(uStack_210._4_4_,uVar10);
              if (uStack_210._4_4_ < uVar10) {
                FUN_146272134(&local_218,uVar18 & 0xffffffff);
              }
              lVar13 = lVar13 * 0x20;
              *(undefined8 *)(local_218 + lVar13) = 0;
              *(longlong *****)(local_218 + lVar13) = local_a8;
              *(int *)(local_218 + 8 + lVar13) = (int)uStack_a0;
              *(uint *)(local_218 + 0xc + lVar13) = uStack_a0._4_4_;
              *(undefined8 *)(local_218 + 0x10 + lVar13) = 0;
              *(undefined8 **)(local_218 + 0x10 + lVar13) = local_98;
              *(uint *)(local_218 + 0x18 + lVar13) = (uint)local_90;
              *(int *)(local_218 + 0x1c + lVar13) = local_90._4_4_;
              local_90 = 0;
              local_98 = (undefined8 *)0x0;
              uStack_a0 = (longlong ****)0x0;
              local_a8 = (longlong ****)0x0;
              if (local_228[0] != 0) {
                FUN_1400020a8();
              }
              if (local_268 != (longlong ****)0x0) {
                FUN_1400020a8();
              }
              lVar11 = lVar11 + 8;
            } while (local_2a8 != lVar11);
          }
          FUN_140056680(&local_a8,L"Convert To Function");
          uVar15 = FUN_1494c9ad6(param_1);
          FUN_1494a80f4(uVar15,&local_a8);
          FUN_1494a81c6(uVar15);
          if (local_a8 != (longlong ****)0x0) {
            FUN_1400020a8();
          }
          uVar15 = FUN_1494c9ad6(param_1);
          (**(code **)(*(longlong *)(local_280 + 0x38) + 0x20))(local_280 + 0x38,&local_268);
          plVar12 = (longlong *)FUN_14001cc68(0xa0,0x10);
          plVar12[1] = (longlong)&DAT_100000001;
          *plVar12 = (longlong)&PTR_FUN_14bd1e160;
          pppplVar19 = (longlong ****)(plVar12 + 2);
          local_98 = (undefined8 *)0x0;
          uStack_88 = &PTR_LAB_14bd1e4c0;
          local_80 = (undefined1 *)local_290;
          local_a8 = (longlong ****)FUN_144534598;
          local_2b0 = &local_a8;
          local_2b8 = (void *****)CONCAT44(local_2b8._4_4_,0xffffffff);
          FUN_14945fe70(pppplVar19,&local_268,3,local_150);
          local_a8 = pppplVar19;
          uStack_a0 = (longlong ****)plVar12;
          if (plVar12 == (longlong *)0x0) {
            FUN_1494a7e7c(uVar15,&local_a8);
          }
          else {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            FUN_1494a7e7c(uVar15,&local_a8);
            LOCK();
            plVar1 = plVar12 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          if (local_268 != (longlong ****)0x0) {
            FUN_1400020a8();
          }
          uVar15 = FUN_1494c9ad6(param_1);
          uVar16 = FUN_145ba6e90();
          plVar12 = (longlong *)FUN_14001cc68(0xb0,0x10);
          plVar12[1] = (longlong)&DAT_100000001;
          *plVar12 = (longlong)&PTR_FUN_14bd1e1a0;
          pppplVar19 = (longlong ****)(plVar12 + 2);
          local_98 = (undefined8 *)0x0;
          uStack_88 = &PTR_LAB_14bd1e4e0;
          local_80 = (undefined1 *)local_178;
          uStack_78 = (undefined4)uStack_170;
          uStack_74 = uStack_170._4_4_;
          local_a8 = (longlong ****)FUN_14453461a;
          local_2b8 = &local_a8;
          FUN_149460a9c(pppplVar19,&local_160,uVar16,DAT_14cc1c5a8);
          local_a8 = pppplVar19;
          uStack_a0 = (longlong ****)plVar12;
          if (plVar12 == (longlong *)0x0) {
            FUN_1494a7e7c(uVar15,&local_a8);
          }
          else {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            FUN_1494a7e7c(uVar15,&local_a8);
            LOCK();
            plVar1 = plVar12 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          uVar15 = FUN_1494c9ad6(param_1);
          uVar16 = FUN_145ba6e90();
          plVar12 = (longlong *)FUN_14001cc68(0xb0,0x10);
          plVar12[1] = (longlong)&DAT_100000001;
          *plVar12 = (longlong)&PTR_FUN_14bd1e1a0;
          pppplVar19 = (longlong ****)(plVar12 + 2);
          local_98 = (undefined8 *)0x0;
          uStack_88 = &PTR_LAB_14bd1e500;
          local_80 = local_188;
          uStack_78 = (undefined4)uStack_180;
          uStack_74 = uStack_180._4_4_;
          local_a8 = (longlong ****)FUN_1445346b0;
          local_2b8 = &local_a8;
          FUN_149460a9c(pppplVar19,&local_160,uVar16,DAT_14cc1c5b0);
          local_a8 = pppplVar19;
          uStack_a0 = (longlong ****)plVar12;
          if (plVar12 == (longlong *)0x0) {
            FUN_1494a7e7c(uVar15,&local_a8);
          }
          else {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            FUN_1494a7e7c(uVar15,&local_a8);
            LOCK();
            plVar1 = plVar12 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          lVar11 = local_208;
          lVar13 = (longlong)(int)uStack_200;
          if (lVar13 != 0) {
            lVar14 = 0;
            do {
              lVar6 = *(longlong *)(lVar11 + lVar14);
              uVar15 = *(undefined8 *)(lVar6 + 0x18);
              uVar16 = FUN_1494c9ad6(param_1);
              FUN_1494c9d96(uVar16,&local_160,lVar6,uVar15);
              lVar14 = lVar14 + 8;
            } while (lVar13 * 8 != lVar14);
          }
          local_298 = (longlong)(int)uStack_1e0;
          if (local_298 != 0) {
            local_2a0 = local_1e8;
            local_298 = local_298 << 3;
            lVar11 = 0;
            do {
              lVar13 = *(longlong *)((longlong)local_2a0 + lVar11);
              local_2a8 = FUN_1494c9ad6(param_1);
              uVar15 = *(undefined8 *)(lVar13 + 0x18);
              plVar12 = (longlong *)FUN_14001cc68(0xc0,0x10);
              plVar12[1] = (longlong)&DAT_100000001;
              *plVar12 = (longlong)&PTR_FUN_14bd1e200;
              pppplVar19 = (longlong ****)(plVar12 + 2);
              local_98 = (undefined8 *)0x0;
              uStack_88 = &PTR_LAB_14bd1e220;
              local_80 = &LAB_144534746;
              local_a8 = (longlong ****)&LAB_1494e3d56;
              local_2b8 = &local_a8;
              FUN_149461086(pppplVar19,&local_160,lVar13,uVar15);
              local_a8 = pppplVar19;
              uStack_a0 = (longlong ****)plVar12;
              if (plVar12 == (longlong *)0x0) {
                FUN_1494a7e7c(local_2a8,&local_a8);
              }
              else {
                LOCK();
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                UNLOCK();
                FUN_1494a7e7c(local_2a8,&local_a8);
                LOCK();
                plVar1 = plVar12 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar12)(plVar12);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar12 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar12 + 0x10))(plVar12);
                  }
                }
              }
              lVar11 = lVar11 + 8;
            } while (local_298 != lVar11);
          }
          if ((longlong)(int)uStack_210 != 0) {
            lVar13 = (longlong)(int)uStack_210 * 0x20 + local_218;
            lVar11 = local_218;
            do {
              uVar15 = FUN_1494c9ad6(param_1);
              FUN_1494cae26(uVar15,lVar11,lVar11 + 0x10);
              lVar11 = lVar11 + 0x20;
            } while (lVar11 != lVar13);
          }
          uStack_260 = local_138;
          local_268 = (longlong ****)0x100000000;
          local_258._0_4_ = 0xffffffff;
          local_258._4_4_ = 0;
          iStack_250 = 0;
          iVar20 = 0;
          if (local_120 != 0) {
            FUN_1449c0562(&local_268);
            iVar20 = local_120;
          }
          local_90._0_4_ = (uint)local_258;
          local_90._4_4_ = local_258._4_4_;
          uStack_88 = (undefined **)CONCAT44(uStack_24c,iStack_250);
          uStack_a0 = local_268;
          local_98 = (undefined8 *)uStack_260;
          local_a8 = (longlong ****)&local_148;
          if ((local_258._4_4_ != iVar20) || (uStack_260 != local_138)) {
            do {
              lVar11 = (longlong)*(int *)(*local_a8 + (longlong)local_90._4_4_ * 5 + 3);
              if (lVar11 != 0) {
                ppppvVar3 = (void ****)(*local_a8 + (longlong)local_90._4_4_ * 5);
                pppvVar24 = ppppvVar3[2];
                lVar11 = lVar11 << 4;
                do {
                  uVar15 = FUN_1494c9ad6(param_1);
                  FUN_1494caf0e(uVar15,ppppvVar3,pppvVar24);
                  pppvVar24 = pppvVar24 + 2;
                  lVar11 = lVar11 + -0x10;
                } while (lVar11 != 0);
              }
              local_90._0_4_ = (uint)local_90 & ~uStack_a0._4_4_;
              FUN_1449c0562(&uStack_a0);
            } while ((void *****)local_a8 != &local_148 ||
                     (local_98 != (undefined8 *)local_138 || local_90._4_4_ != iVar20));
          }
          local_2a8 = FUN_1494c9ad6(param_1);
          pvVar5 = local_160;
          local_268._0_4_ = local_198;
          local_268._4_4_ = uStack_194;
          uStack_260._0_4_ = uStack_190;
          uStack_260._4_4_ = uStack_18c;
          local_258 = (void *)0x0;
          lVar11 = (longlong)local_158;
          iStack_250 = local_158;
          if (lVar11 == 0) {
            uStack_24c = 0;
          }
          else {
            FUN_1446dd670(&local_258,local_158,0);
            memcpy(local_258,pvVar5,lVar11 * 2);
          }
          local_248 = local_278;
          local_298 = FUN_1459f781e();
          (**(code **)(*local_288 + 0x20))(local_288,local_228);
          plVar12 = (longlong *)FUN_14001cc68(0xb0,0x10);
          plVar12[1] = (longlong)&DAT_100000001;
          *plVar12 = (longlong)&PTR_FUN_14bd1e1a0;
          local_a8 = (longlong ****)0x0;
          local_98 = (undefined8 *)0x0;
          puVar17 = (undefined8 *)FUN_14001cc68(0x30,8);
          pvVar5 = local_258;
          *puVar17 = &PTR_FUN_14bd1e520;
          *(undefined4 *)(puVar17 + 1) = (undefined4)local_268;
          *(undefined4 *)((longlong)puVar17 + 0xc) = local_268._4_4_;
          *(int *)(puVar17 + 2) = (int)uStack_260;
          *(undefined4 *)((longlong)puVar17 + 0x14) = uStack_260._4_4_;
          puVar17[3] = 0;
          lVar11 = (longlong)iStack_250;
          *(int *)(puVar17 + 4) = iStack_250;
          local_98 = puVar17;
          if (lVar11 == 0) {
            *(undefined4 *)((longlong)puVar17 + 0x24) = 0;
          }
          else {
            FUN_1446dd670(puVar17 + 3,iStack_250,0);
            memcpy((void *)puVar17[3],pvVar5,lVar11 * 2);
          }
          puVar17[5] = local_248;
          if (puVar17 != (undefined8 *)&DAT_fffffffffffffff8) {
            local_a8 = (longlong ****)FUN_14453474a;
          }
          pppplVar19 = (longlong ****)(plVar12 + 2);
          local_2b8 = &local_a8;
          FUN_149460a9c(pppplVar19,local_228,local_298,local_1a0);
          local_a8 = pppplVar19;
          uStack_a0 = (longlong ****)plVar12;
          if (plVar12 == (longlong *)0x0) {
            FUN_1494a7e7c(local_2a8,&local_a8);
          }
          else {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            FUN_1494a7e7c(local_2a8,&local_a8);
            LOCK();
            plVar1 = plVar12 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          if (local_228[0] != 0) {
            FUN_1400020a8();
          }
          if (local_258 != (void *)0x0) {
            FUN_1400020a8();
          }
          FUN_1494ac476(param_1,param_2);
          local_268 = (longlong ****)&DAT_100000000;
          local_258 = (void *)0xffffffff;
          iStack_250 = 0;
          uStack_260 = local_e8;
          if (local_d0 == 0) {
            iVar20 = 0;
          }
          else {
            FUN_1449c0562(&local_268);
            iVar20 = local_d0;
          }
          local_90 = local_258;
          uVar15 = local_90;
          uStack_88 = (undefined **)CONCAT44(uStack_24c,iStack_250);
          uStack_a0 = local_268;
          local_98 = (undefined8 *)uStack_260;
          local_a8 = &local_f8;
          local_90._4_4_ = (int)((ulonglong)local_258 >> 0x20);
          if ((local_90._4_4_ != iVar20) || (uStack_260 != local_e8)) {
            iVar23 = local_90._4_4_;
            local_90 = uVar15;
            do {
              lVar11 = (longlong)*(int *)(*local_a8 + (longlong)iVar23 * 5 + 3);
              if (lVar11 != 0) {
                ppplVar4 = *local_a8 + (longlong)iVar23 * 5;
                pplVar25 = ppplVar4[2];
                lVar11 = lVar11 << 4;
                do {
                  uVar15 = FUN_1494c9ad6(param_1);
                  FUN_1494caf0e(uVar15,ppplVar4,pplVar25);
                  pplVar25 = pplVar25 + 2;
                  lVar11 = lVar11 + -0x10;
                } while (lVar11 != 0);
              }
              local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~uStack_a0._4_4_);
              FUN_1449c0562(&uStack_a0);
              iVar23 = local_90._4_4_;
              uVar15 = local_90;
            } while (local_a8 != &local_f8 ||
                     (local_98 != (undefined8 *)local_e8 || local_90._4_4_ != iVar20));
          }
          local_90 = uVar15;
          FUN_141535be2(local_218,uStack_210 & 0xffffffff);
          if (local_218 != 0) {
            FUN_1400020a8();
          }
          if (local_208 != 0) {
            FUN_1400020a8();
          }
          if (local_1f8 != 0) {
            FUN_1400020a8();
          }
          if (local_1e8 != (longlong ****)0x0) {
            FUN_1400020a8();
          }
          if (local_1d8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          local_100 = 0;
          if (local_108 != 0) {
            FUN_1400020a8();
          }
          FUN_140a49dbc(&local_148);
          local_b0 = 0;
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          FUN_140a49dbc(&local_f8);
          if (local_1c8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_1b8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_160 != (void *)0x0) {
            FUN_1400020a8();
          }
          uVar15 = 1;
          goto LAB_1494c2ba8;
        }
      }
    }
  }
  uVar15 = 0;
LAB_1494c2ba8:
  if ((local_60 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15;
}



// FUNCTION 1494c4410 FUN_1494c4410 body=163 status=ok
// SIG undefined FUN_1494c4410(void)

void FUN_1494c4410(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1494c44b4(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c44b4 FUN_1494c44b4 body=6048 status=ok
// SIG undefined FUN_1494c44b4(void)

/* WARNING: Removing unreachable block (ram,0x0001494c5050) */
/* WARNING: Removing unreachable block (ram,0x0001494c5065) */

undefined8 FUN_1494c44b4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  undefined2 **ppuVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  undefined1 auStack_2c8 [32];
  undefined2 ***local_2a8;
  undefined2 ***local_2a0;
  longlong local_290;
  ulonglong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  undefined2 *local_268;
  longlong local_260;
  longlong local_258 [2];
  longlong local_248 [2];
  longlong local_238;
  undefined8 uStack_230;
  longlong local_228;
  undefined8 uStack_220;
  ulonglong local_218;
  undefined8 uStack_210;
  longlong local_208;
  undefined8 uStack_200;
  longlong *local_1f0;
  uint local_1e8;
  undefined4 local_1e4;
  longlong local_1e0 [2];
  longlong local_1d0 [2];
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_180 [2];
  undefined2 *local_170;
  undefined2 **local_168;
  undefined1 *puStack_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined2 *local_148;
  ulonglong uStack_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  int local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  undefined2 *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  int local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined2 **local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined2 *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (param_2 != 0) {
    lVar8 = FUN_1459f781e();
    if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
       (lVar8 = (**(code **)(*(longlong *)(param_2 + 0x118) + 0x10))(param_2 + 0x118), lVar8 != 0))
    {
      lVar9 = FUN_14585e15a();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) == lVar9 + 0x30)) {
        local_280 = lVar8;
        FUN_1494c97e0(param_1);
        FUN_149499cc8(&local_f8,param_1,DAT_14cc1ce90);
        local_268 = local_f8;
        local_170 = local_f8;
        FUN_1400021e4(&local_170,&local_f8);
        FUN_1494cbfc8(param_1,local_180,&local_f8);
        if (local_f8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar8 = local_280;
        lVar9 = FUN_1494e7b0c(local_280,1);
        local_288 = FUN_1494e7b0c(lVar8,2);
        local_198 = *(undefined8 *)(lVar9 + 0x40);
        uStack_190 = *(undefined8 *)(lVar9 + 0x48);
        local_1a8 = *(undefined1 **)(local_288 + 0x40);
        uStack_1a0 = *(undefined8 *)(local_288 + 0x48);
        local_1b8 = *(undefined4 *)(param_2 + 0x40);
        uStack_1b4 = *(undefined4 *)(param_2 + 0x44);
        uStack_1b0 = *(undefined4 *)(param_2 + 0x48);
        uStack_1ac = *(undefined4 *)(param_2 + 0x4c);
        local_260 = lVar9;
        FUN_149499cc8(&local_1c0,param_1,DAT_14cc1ce98);
        FUN_1400021e4(&local_1c0,local_1d0);
        local_270 = param_1 + 0x28;
        (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(local_270,local_1e0);
        local_d8 = 0;
        local_d0 = 0;
        local_f8 = (undefined2 *)0x0;
        uStack_f0 = 0;
        local_cc = 0xffffffff00000080;
        local_c4 = 0;
        local_b8 = 0;
        local_b0 = 0;
        iVar21 = *(int *)(param_1 + 0x50);
        if ((longlong)iVar21 != 0) {
          local_290 = *(longlong *)(param_1 + 0x48);
          lVar8 = 0;
          do {
            lVar9 = *(longlong *)(local_290 + lVar8);
            lVar10 = FUN_1494e64f0(*(undefined8 *)(lVar9 + 0x30));
            if (lVar10 == param_2) {
              FUN_1494e66cc(*(undefined8 *)(lVar9 + 0x30),&local_168);
              FUN_1400021e4(&local_168,&local_a8);
              FUN_1494bd7c2(&local_148,local_1e0,local_1d0,&local_a8);
              if (local_a8 != (undefined2 **)0x0) {
                FUN_1400020a8();
              }
              FUN_1494e67ec(*(undefined8 *)(lVar9 + 0x28),&local_a8);
              ppuVar17 = (undefined2 **)&DAT_149dfb77a;
              if ((int)uStack_a0 != 0) {
                ppuVar17 = local_a8;
              }
              iVar7 = (int)uStack_a0 + -1;
              if ((int)uStack_a0 == 0) {
                iVar7 = 0;
              }
              uVar5 = FUN_144a49b4a(iVar7,ppuVar17);
              plVar11 = (longlong *)FUN_140e10654(&local_f8,uVar5,&local_a8);
              iVar7 = (int)plVar11[1];
              *(uint *)(plVar11 + 1) = iVar7 + 1U;
              if (*(uint *)((longlong)plVar11 + 0xc) < iVar7 + 1U) {
                FUN_1447a1bd6(plVar11,iVar7);
              }
              puVar16 = local_148;
              lVar9 = *plVar11;
              lVar10 = (longlong)iVar7 * 0x10;
              puVar19 = (undefined8 *)(lVar9 + lVar10);
              *(undefined8 *)(lVar9 + lVar10) = 0;
              lVar22 = (longlong)(int)uStack_140;
              *(int *)(lVar9 + 8 + lVar10) = (int)uStack_140;
              if (lVar22 == 0) {
                *(undefined4 *)((longlong)puVar19 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(puVar19,uStack_140 & 0xffffffff,0);
                memcpy((void *)*puVar19,puVar16,lVar22 * 2);
              }
              if (local_a8 != (undefined2 **)0x0) {
                FUN_1400020a8();
              }
              if (local_148 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              lVar10 = FUN_1494e64f0();
              if (lVar10 == param_2) {
                FUN_1494e66cc(*(undefined8 *)(lVar9 + 0x28),&local_168);
                FUN_1400021e4(&local_168,&local_a8);
                FUN_1494bd7c2(&local_148,local_1e0,local_1d0,&local_a8);
                if (local_a8 != (undefined2 **)0x0) {
                  FUN_1400020a8();
                }
                FUN_1494e67ec(*(undefined8 *)(lVar9 + 0x30),&local_a8);
                puVar16 = &DAT_149dfb77a;
                if ((int)uStack_140 != 0) {
                  puVar16 = local_148;
                }
                iVar7 = (int)uStack_140 + -1;
                if ((int)uStack_140 == 0) {
                  iVar7 = 0;
                }
                uVar5 = FUN_144a49b4a(iVar7,puVar16);
                plVar11 = (longlong *)FUN_140e10654(&local_f8,uVar5,&local_148);
                iVar7 = (int)plVar11[1];
                *(uint *)(plVar11 + 1) = iVar7 + 1U;
                if (*(uint *)((longlong)plVar11 + 0xc) < iVar7 + 1U) {
                  FUN_1447a1bd6(plVar11,iVar7);
                }
                ppuVar17 = local_a8;
                lVar9 = *plVar11;
                lVar10 = (longlong)iVar7 * 0x10;
                puVar19 = (undefined8 *)(lVar9 + lVar10);
                *(undefined8 *)(lVar9 + lVar10) = 0;
                lVar22 = (longlong)(int)uStack_a0;
                *(int *)(lVar9 + 8 + lVar10) = (int)uStack_a0;
                if (lVar22 == 0) {
                  *(undefined4 *)((longlong)puVar19 + 0xc) = 0;
                }
                else {
                  FUN_1446dd670(puVar19,(ulonglong)uStack_a0 & 0xffffffff,0);
                  memcpy((void *)*puVar19,ppuVar17,lVar22 * 2);
                }
                if (local_a8 != (undefined2 **)0x0) {
                  FUN_1400020a8();
                }
                if (local_148 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)iVar21 << 3 != lVar8);
        }
        local_128 = 0;
        local_120 = 0;
        local_148 = (undefined2 *)0x0;
        uStack_140 = 0;
        local_11c = 0xffffffff00000080;
        local_114 = 0;
        local_108 = 0;
        local_100 = 0;
        local_290 = (longlong)*(int *)(local_280 + 0x50);
        if (local_290 != 0) {
          local_278 = *(longlong *)(local_280 + 0x48);
          local_290 = local_290 << 3;
          lVar8 = 0;
          do {
            lVar9 = *(longlong *)(local_278 + lVar8);
            uVar12 = FUN_1494e64f0(*(undefined8 *)(lVar9 + 0x30));
            if (uVar12 == local_288) {
              FUN_1494e66cc(*(undefined8 *)(lVar9 + 0x30),&local_208);
              FUN_1400021e4(&local_208,&local_168);
              FUN_1400021e4(&DAT_14cc1c5b0,&local_1f0);
              FUN_1494bd7c2(&local_a8,local_180,&local_1f0,&local_168);
              if (local_1f0 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              if (local_168 != (undefined2 **)0x0) {
                FUN_1400020a8();
              }
              FUN_1494e66cc(*(undefined8 *)(lVar9 + 0x28),&local_218);
              FUN_1400021e4(&local_218,&local_1f0);
              lVar9 = FUN_1494e64f0(*(undefined8 *)(lVar9 + 0x28));
              local_168 = *(undefined2 ***)(lVar9 + 0x18);
              FUN_1400021e4(&local_168,&local_208);
              FUN_1494bd7c2(&local_168,local_180,&local_208,&local_1f0);
              if (local_208 != 0) {
                FUN_1400020a8();
              }
              if (local_1f0 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              ppuVar17 = (undefined2 **)&DAT_149dfb77a;
              if ((int)puStack_160 != 0) {
                ppuVar17 = local_168;
              }
              iVar21 = (int)puStack_160 + -1;
              if ((int)puStack_160 == 0) {
                iVar21 = 0;
              }
              uVar5 = FUN_144a49b4a(iVar21,ppuVar17);
              plVar11 = (longlong *)FUN_140e10654(&local_148,uVar5,&local_168);
              iVar21 = (int)plVar11[1];
              *(uint *)(plVar11 + 1) = iVar21 + 1U;
              if (*(uint *)((longlong)plVar11 + 0xc) < iVar21 + 1U) {
                FUN_1447a1bd6(plVar11,iVar21);
              }
              lVar9 = *plVar11;
              lVar10 = (longlong)iVar21 * 0x10;
              puVar19 = (undefined8 *)(lVar9 + lVar10);
              *(undefined8 *)(lVar9 + lVar10) = 0;
              ppuVar17 = local_a8;
              iVar21 = (int)uStack_a0;
            }
            else {
              lVar10 = FUN_1494e64f0(*(undefined8 *)(lVar9 + 0x28));
              if (lVar10 == local_260) {
                FUN_1494e66cc(*(undefined8 *)(lVar9 + 0x28),&local_208);
                FUN_1400021e4(&local_208,&local_168);
                FUN_1400021e4(&DAT_14cc1c5a8,&local_1f0);
              }
              else {
                FUN_1494e66cc(*(undefined8 *)(lVar9 + 0x28),&local_208);
                FUN_1400021e4(&local_208,&local_168);
                lVar10 = FUN_1494e64f0(*(undefined8 *)(lVar9 + 0x28));
                local_a8 = *(undefined2 ***)(lVar10 + 0x18);
                FUN_1400021e4(&local_a8,&local_1f0);
              }
              FUN_1494bd7c2(&local_a8,local_180,&local_1f0,&local_168);
              if (local_1f0 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              if (local_168 != (undefined2 **)0x0) {
                FUN_1400020a8();
              }
              FUN_1494e66cc(*(undefined8 *)(lVar9 + 0x30),&local_218);
              FUN_1400021e4(&local_218,&local_1f0);
              lVar9 = FUN_1494e64f0(*(undefined8 *)(lVar9 + 0x30));
              local_168 = *(undefined2 ***)(lVar9 + 0x18);
              FUN_1400021e4(&local_168,&local_208);
              FUN_1494bd7c2(&local_168,local_180,&local_208,&local_1f0);
              if (local_208 != 0) {
                FUN_1400020a8();
              }
              if (local_1f0 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              ppuVar17 = (undefined2 **)&DAT_149dfb77a;
              if ((int)uStack_a0 != 0) {
                ppuVar17 = local_a8;
              }
              iVar21 = (int)uStack_a0 + -1;
              if ((int)uStack_a0 == 0) {
                iVar21 = 0;
              }
              uVar5 = FUN_144a49b4a(iVar21,ppuVar17);
              plVar11 = (longlong *)FUN_140e10654(&local_148,uVar5,&local_a8);
              iVar21 = (int)plVar11[1];
              *(uint *)(plVar11 + 1) = iVar21 + 1U;
              if (*(uint *)((longlong)plVar11 + 0xc) < iVar21 + 1U) {
                FUN_1447a1bd6(plVar11,iVar21);
              }
              lVar9 = *plVar11;
              lVar10 = (longlong)iVar21 * 0x10;
              puVar19 = (undefined8 *)(lVar9 + lVar10);
              *(undefined8 *)(lVar9 + lVar10) = 0;
              ppuVar17 = local_168;
              iVar21 = (int)puStack_160;
            }
            *(int *)(lVar9 + 8 + lVar10) = iVar21;
            if ((longlong)iVar21 == 0) {
              *(undefined4 *)((longlong)puVar19 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar19,iVar21,0);
              memcpy((void *)*puVar19,ppuVar17,(longlong)iVar21 * 2);
            }
            if (local_168 != (undefined2 **)0x0) {
              FUN_1400020a8();
            }
            if (local_a8 != (undefined2 **)0x0) {
              FUN_1400020a8();
            }
            lVar8 = lVar8 + 8;
          } while (local_290 != lVar8);
        }
        local_1f0 = (longlong *)0x0;
        local_1e8 = *(uint *)(local_280 + 0x40);
        lVar8 = (longlong)(int)local_1e8;
        _Src = *(void **)(local_280 + 0x38);
        if (lVar8 == 0) {
          local_1e4 = 0;
          uVar23 = local_1e8;
        }
        else {
          FUN_1494e3a2c(&local_1f0,local_1e8,0);
          memcpy(local_1f0,_Src,lVar8 << 3);
          uVar6 = local_1e8;
          plVar11 = local_1f0;
          uVar12 = (ulonglong)(int)local_1e8;
          uVar23 = local_1e8;
          if (uVar12 != 0) {
            lVar8 = *local_1f0;
            if (lVar8 == 0) {
LAB_1494c591e:
              bVar4 = false;
            }
            else {
              lVar9 = FUN_145ba6e90();
              lVar8 = *(longlong *)(lVar8 + 0x10);
              if ((*(int *)(lVar8 + 0x38) < *(int *)(lVar9 + 0x38)) ||
                 (bVar4 = true,
                 *(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                 != lVar9 + 0x30)) goto LAB_1494c591e;
            }
            uVar23 = 0;
            uVar20 = 0;
            do {
              local_290 = CONCAT44(local_290._4_4_,uVar23);
              while( true ) {
                uVar15 = uVar20 & 0xffffffff;
                iVar21 = (int)uVar20;
                uVar18 = iVar21 + 1;
                uVar20 = (ulonglong)uVar18;
                local_278 = (longlong)iVar21;
                if ((int)uVar6 <= (int)uVar18) break;
                uVar20 = local_278 + 1;
                bVar3 = true;
                local_288 = uVar15;
LAB_1494c5950:
                while (lVar8 = plVar11[uVar20], lVar8 != 0) {
                  lVar9 = FUN_145ba6e90();
                  lVar8 = *(longlong *)(lVar8 + 0x10);
                  if ((*(int *)(lVar8 + 0x38) < *(int *)(lVar9 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
                      lVar9 + 0x30)) break;
                  if (!bVar4) goto LAB_1494c59c1;
                  uVar20 = uVar20 + 1;
                  bVar3 = (longlong)uVar20 < (longlong)uVar12;
                  if (uVar20 == uVar12) {
                    uVar23 = (uint)local_290;
                    goto LAB_1494c4e42;
                  }
                }
                if (!bVar4) {
                  uVar20 = uVar20 + 1;
                  bVar3 = (longlong)uVar20 < (longlong)uVar12;
                  if (uVar20 == uVar12) {
                    uVar20 = (ulonglong)uVar6;
LAB_1494c59c1:
                    uVar15 = local_288;
                    uVar23 = (uint)local_290;
                    goto LAB_1494c59cb;
                  }
                  goto LAB_1494c5950;
                }
                bVar4 = false;
                uVar23 = (uint)local_290;
                if (!bVar3) goto LAB_1494c4e42;
              }
              if (bVar4) break;
              bVar3 = false;
LAB_1494c59cb:
              iVar21 = (int)uVar20 - (uint)uVar15;
              if (uVar23 != (uint)uVar15) {
                memmove(plVar11 + (int)uVar23,plVar11 + local_278,(longlong)iVar21 << 3);
              }
              uVar23 = uVar23 + iVar21;
              bVar4 = true;
            } while (bVar3);
          }
        }
LAB_1494c4e42:
        local_1e8 = uVar23;
        local_208 = 0;
        uStack_200 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_228 = 0;
        uStack_220 = 0;
        FUN_1494c9ba8(&local_1f0,&local_208,&local_218);
        local_238 = 0;
        uStack_230 = 0;
        local_290 = (longlong)(int)uStack_210;
        if (local_290 != 0) {
          local_288 = local_218;
          local_290 = local_290 << 3;
          lVar8 = 0;
          do {
            lVar9 = *(longlong *)(*(longlong *)(local_288 + lVar8) + 0x30);
            local_a8 = (undefined2 **)0x0;
            uStack_a0 = (undefined2 **)0x0;
            local_168 = *(undefined2 ***)
                         (*(longlong *)(*(longlong *)(local_288 + lVar8) + 0x28) + 0x18);
            FUN_1400021e4(&local_168,local_248);
            FUN_1494bd7c2(&local_168,local_180,local_248,&local_a8);
            if (local_248[0] != 0) {
              FUN_1400020a8();
            }
            if (local_a8 != (undefined2 **)0x0) {
              FUN_1400020a8();
            }
            local_a8 = (undefined2 **)0x0;
            uStack_a0 = (undefined2 **)0x0;
            local_248[0] = *(longlong *)(lVar9 + 0x18);
            FUN_1400021e4(local_248,local_258);
            FUN_1494bd7c2(local_248,local_180,local_258,&local_a8);
            if (local_258[0] != 0) {
              FUN_1400020a8();
            }
            if (local_a8 != (undefined2 **)0x0) {
              FUN_1400020a8();
            }
            FUN_149365e7c(&local_a8,0,&local_168,local_248);
            uVar12 = uStack_230;
            lVar9 = (longlong)(int)uStack_230;
            uVar6 = (int)uStack_230 + 1;
            uStack_230 = CONCAT44(uStack_230._4_4_,uVar6);
            if (uStack_230._4_4_ < uVar6) {
              FUN_146272134(&local_238,uVar12 & 0xffffffff);
            }
            lVar9 = lVar9 * 0x20;
            *(undefined8 *)(local_238 + lVar9) = 0;
            *(undefined2 ***)(local_238 + lVar9) = local_a8;
            *(int *)(local_238 + 8 + lVar9) = (int)uStack_a0;
            *(uint *)(local_238 + 0xc + lVar9) = uStack_a0._4_4_;
            *(undefined8 *)(local_238 + 0x10 + lVar9) = 0;
            *(undefined1 **)(local_238 + 0x10 + lVar9) = local_98;
            *(uint *)(local_238 + 0x18 + lVar9) = (uint)local_90;
            *(int *)(local_238 + 0x1c + lVar9) = local_90._4_4_;
            local_90 = 0;
            local_98 = (undefined1 *)0x0;
            uStack_a0 = (undefined2 **)0x0;
            local_a8 = (undefined2 **)0x0;
            if (local_248[0] != 0) {
              FUN_1400020a8();
            }
            if (local_168 != (undefined2 **)0x0) {
              FUN_1400020a8();
            }
            lVar8 = lVar8 + 8;
          } while (local_290 != lVar8);
        }
        FUN_140056680(&local_a8,L"Convert To SubGraph");
        uVar13 = FUN_1494c9ad6(param_1);
        FUN_1494a80f4(uVar13,&local_a8);
        FUN_1494a81c6(uVar13);
        if (local_a8 != (undefined2 **)0x0) {
          FUN_1400020a8();
        }
        uVar13 = FUN_1494c9ad6(param_1);
        (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(local_270,&local_168);
        plVar11 = (longlong *)FUN_14001cc68(0xa0,0x10);
        plVar11[1] = (longlong)&DAT_100000001;
        *plVar11 = (longlong)&PTR_FUN_14bd1e160;
        ppuVar17 = (undefined2 **)(plVar11 + 2);
        local_98 = (undefined1 *)0x0;
        uStack_88 = &PTR_LAB_14bd1e540;
        local_80 = (undefined1 *)local_280;
        local_a8 = (undefined2 **)FUN_14453491a;
        local_2a0 = &local_a8;
        local_2a8 = (undefined2 ***)CONCAT44(local_2a8._4_4_,0xffffffff);
        FUN_14945fe70(ppuVar17,&local_168,4,local_268);
        local_a8 = ppuVar17;
        uStack_a0 = (undefined2 **)plVar11;
        if (plVar11 == (longlong *)0x0) {
          FUN_1494a7e7c(uVar13,&local_a8);
        }
        else {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          FUN_1494a7e7c(uVar13,&local_a8);
          LOCK();
          plVar1 = plVar11 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
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
        if (local_168 != (undefined2 **)0x0) {
          FUN_1400020a8();
        }
        uVar13 = FUN_1494c9ad6(param_1);
        uVar14 = FUN_145ba6e90();
        plVar11 = (longlong *)FUN_14001cc68(0xb0,0x10);
        plVar11[1] = (longlong)&DAT_100000001;
        *plVar11 = (longlong)&PTR_FUN_14bd1e1a0;
        ppuVar17 = (undefined2 **)(plVar11 + 2);
        local_98 = (undefined1 *)0x0;
        uStack_88 = &PTR_LAB_14bd1e560;
        local_80 = (undefined1 *)local_198;
        uStack_78 = (undefined4)uStack_190;
        uStack_74 = uStack_190._4_4_;
        local_a8 = (undefined2 **)FUN_14453499c;
        local_2a8 = &local_a8;
        FUN_149460a9c(ppuVar17,local_180,uVar14,DAT_14cc1c5a8);
        local_a8 = ppuVar17;
        uStack_a0 = (undefined2 **)plVar11;
        if (plVar11 == (longlong *)0x0) {
          FUN_1494a7e7c(uVar13,&local_a8);
        }
        else {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          FUN_1494a7e7c(uVar13,&local_a8);
          LOCK();
          plVar1 = plVar11 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
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
        uVar13 = FUN_1494c9ad6(param_1);
        uVar14 = FUN_145ba6e90();
        plVar11 = (longlong *)FUN_14001cc68(0xb0,0x10);
        plVar11[1] = (longlong)&DAT_100000001;
        *plVar11 = (longlong)&PTR_FUN_14bd1e1a0;
        ppuVar17 = (undefined2 **)(plVar11 + 2);
        local_98 = (undefined1 *)0x0;
        uStack_88 = &PTR_LAB_14bd1e580;
        local_80 = local_1a8;
        uStack_78 = (undefined4)uStack_1a0;
        uStack_74 = uStack_1a0._4_4_;
        local_a8 = (undefined2 **)FUN_144534a32;
        local_2a8 = &local_a8;
        FUN_149460a9c(ppuVar17,local_180,uVar14,DAT_14cc1c5b0);
        local_a8 = ppuVar17;
        uStack_a0 = (undefined2 **)plVar11;
        if (plVar11 == (longlong *)0x0) {
          FUN_1494a7e7c(uVar13,&local_a8);
        }
        else {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          FUN_1494a7e7c(uVar13,&local_a8);
          LOCK();
          plVar1 = plVar11 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
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
        lVar8 = local_228;
        lVar9 = (longlong)(int)uStack_220;
        if (lVar9 != 0) {
          lVar10 = 0;
          do {
            lVar22 = *(longlong *)(lVar8 + lVar10);
            uVar13 = *(undefined8 *)(lVar22 + 0x18);
            uVar14 = FUN_1494c9ad6(param_1);
            FUN_1494c9d96(uVar14,local_180,lVar22,uVar13);
            lVar10 = lVar10 + 8;
          } while (lVar9 * 8 != lVar10);
        }
        local_288 = (ulonglong)(int)uStack_200;
        if (local_288 != 0) {
          local_278 = local_208;
          local_288 = local_288 << 3;
          lVar8 = 0;
          do {
            lVar9 = *(longlong *)(local_278 + lVar8);
            local_290 = FUN_1494c9ad6(param_1);
            uVar13 = *(undefined8 *)(lVar9 + 0x18);
            plVar11 = (longlong *)FUN_14001cc68(0xc0,0x10);
            plVar11[1] = (longlong)&DAT_100000001;
            *plVar11 = (longlong)&PTR_FUN_14bd1e200;
            ppuVar17 = (undefined2 **)(plVar11 + 2);
            local_98 = (undefined1 *)0x0;
            uStack_88 = &PTR_LAB_14bd1e220;
            local_80 = &LAB_144534ac8;
            local_a8 = (undefined2 **)&LAB_1494e3d56;
            local_2a8 = &local_a8;
            FUN_149461086(ppuVar17,local_180,lVar9,uVar13);
            local_a8 = ppuVar17;
            uStack_a0 = (undefined2 **)plVar11;
            if (plVar11 == (longlong *)0x0) {
              FUN_1494a7e7c(local_290,&local_a8);
            }
            else {
              LOCK();
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              UNLOCK();
              FUN_1494a7e7c(local_290,&local_a8);
              LOCK();
              plVar1 = plVar11 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
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
            lVar8 = lVar8 + 8;
          } while (local_288 != lVar8);
        }
        if ((longlong)(int)uStack_230 != 0) {
          lVar9 = (longlong)(int)uStack_230 * 0x20 + local_238;
          lVar8 = local_238;
          do {
            uVar13 = FUN_1494c9ad6(param_1);
            FUN_1494cae26(uVar13,lVar8,lVar8 + 0x10);
            lVar8 = lVar8 + 0x20;
          } while (lVar8 != lVar9);
        }
        puStack_160 = local_138;
        local_168 = (undefined2 **)0x100000000;
        local_158._0_4_ = 0xffffffff;
        local_158._4_4_ = 0;
        uStack_150 = 0;
        iVar21 = 0;
        if (local_120 != 0) {
          FUN_1449c0562(&local_168);
          iVar21 = local_120;
        }
        local_90._0_4_ = (uint)local_158;
        local_90._4_4_ = local_158._4_4_;
        uStack_88 = (undefined **)CONCAT44(uStack_14c,uStack_150);
        uStack_a0 = local_168;
        local_98 = puStack_160;
        local_a8 = &local_148;
        if ((local_158._4_4_ != iVar21) || (puStack_160 != local_138)) {
          do {
            lVar8 = (longlong)*(int *)(*local_a8 + (longlong)local_90._4_4_ * 0x14 + 0xc);
            if (lVar8 != 0) {
              puVar16 = *local_a8 + (longlong)local_90._4_4_ * 0x14;
              lVar9 = *(longlong *)(puVar16 + 8);
              lVar8 = lVar8 << 4;
              do {
                uVar13 = FUN_1494c9ad6(param_1);
                FUN_1494caf0e(uVar13,puVar16,lVar9);
                lVar9 = lVar9 + 0x10;
                lVar8 = lVar8 + -0x10;
              } while (lVar8 != 0);
            }
            local_90._0_4_ = (uint)local_90 & ~uStack_a0._4_4_;
            FUN_1449c0562(&uStack_a0);
          } while (local_a8 != &local_148 || (local_98 != local_138 || local_90._4_4_ != iVar21));
        }
        uVar13 = FUN_1494c9ad6(param_1);
        puVar16 = local_170;
        uVar14 = FUN_145ba7238();
        (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(local_270,&local_168);
        plVar11 = (longlong *)FUN_14001cc68(0xb0,0x10);
        plVar11[1] = (longlong)&DAT_100000001;
        *plVar11 = (longlong)&PTR_FUN_14bd1e1a0;
        ppuVar17 = (undefined2 **)(plVar11 + 2);
        local_98 = (undefined1 *)0x0;
        uStack_88 = &PTR_LAB_14bd1e5a0;
        local_80 = (undefined1 *)CONCAT44(uStack_1b4,local_1b8);
        uStack_78 = uStack_1b0;
        uStack_74 = uStack_1ac;
        local_70 = puVar16;
        local_a8 = (undefined2 **)FUN_144534acc;
        local_2a8 = &local_a8;
        FUN_149460a9c(ppuVar17,&local_168,uVar14,local_1c0);
        local_a8 = ppuVar17;
        uStack_a0 = (undefined2 **)plVar11;
        if (plVar11 == (longlong *)0x0) {
          FUN_1494a7e7c(uVar13,&local_a8);
        }
        else {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          FUN_1494a7e7c(uVar13,&local_a8);
          LOCK();
          plVar1 = plVar11 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
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
        if (local_168 != (undefined2 **)0x0) {
          FUN_1400020a8();
        }
        FUN_1494ac476(param_1,param_2);
        local_168 = (undefined2 **)&DAT_100000000;
        local_158 = 0xffffffff;
        uStack_150 = 0;
        puStack_160 = local_e8;
        if (local_d0 == 0) {
          iVar21 = 0;
        }
        else {
          FUN_1449c0562(&local_168);
          iVar21 = local_d0;
        }
        local_90 = local_158;
        uVar13 = local_90;
        uStack_88 = (undefined **)CONCAT44(uStack_14c,uStack_150);
        uStack_a0 = local_168;
        local_98 = puStack_160;
        local_a8 = &local_f8;
        local_90._4_4_ = (int)((ulonglong)local_158 >> 0x20);
        if ((local_90._4_4_ != iVar21) || (puStack_160 != local_e8)) {
          iVar7 = local_90._4_4_;
          local_90 = uVar13;
          do {
            lVar8 = (longlong)*(int *)(*local_a8 + (longlong)iVar7 * 0x14 + 0xc);
            if (lVar8 != 0) {
              puVar16 = *local_a8 + (longlong)iVar7 * 0x14;
              lVar9 = *(longlong *)(puVar16 + 8);
              lVar8 = lVar8 << 4;
              do {
                uVar13 = FUN_1494c9ad6(param_1);
                FUN_1494caf0e(uVar13,puVar16,lVar9);
                lVar9 = lVar9 + 0x10;
                lVar8 = lVar8 + -0x10;
              } while (lVar8 != 0);
            }
            local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~uStack_a0._4_4_);
            FUN_1449c0562(&uStack_a0);
            iVar7 = local_90._4_4_;
            uVar13 = local_90;
          } while (local_a8 != &local_f8 || (local_98 != local_e8 || local_90._4_4_ != iVar21));
        }
        local_90 = uVar13;
        FUN_141535be2(local_238,uStack_230 & 0xffffffff);
        if (local_238 != 0) {
          FUN_1400020a8();
        }
        if (local_228 != 0) {
          FUN_1400020a8();
        }
        if (local_218 != 0) {
          FUN_1400020a8();
        }
        if (local_208 != 0) {
          FUN_1400020a8();
        }
        if (local_1f0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_100 = 0;
        if (local_108 != 0) {
          FUN_1400020a8();
        }
        FUN_140a49dbc(&local_148);
        local_b0 = 0;
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        FUN_140a49dbc(&local_f8);
        if (local_1e0[0] != 0) {
          FUN_1400020a8();
        }
        if (local_1d0[0] != 0) {
          FUN_1400020a8();
        }
        if (local_180[0] != 0) {
          FUN_1400020a8();
        }
        uVar13 = 1;
        goto LAB_1494c44e8;
      }
    }
  }
  uVar13 = 0;
LAB_1494c44e8:
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 1494c5c56 FUN_1494c5c56 body=244 status=ok
// SIG undefined FUN_1494c5c56(void)

void FUN_1494c5c56(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494c5d4c(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c5d4c FUN_1494c5d4c body=404 status=ok
// SIG undefined FUN_1494c5d4c(void)

undefined8 FUN_1494c5d4c(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 *local_80;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    lVar2 = FUN_145ba6f7a();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) != lVar2 + 0x30)) {
      FUN_149499cc8(&local_90,param_1,*(undefined8 *)(param_2 + 0x18));
      lVar2 = FUN_14001cc68(0xb0,0x10);
      local_50 = *param_3;
      uStack_4c = param_3[1];
      uStack_48 = param_3[2];
      uStack_44 = param_3[3];
      local_68 = 0;
      local_58 = &PTR_LAB_14bd1e3e0;
      local_78[0] = &LAB_144533bee;
      (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(param_1 + 0x28,&local_88);
      local_98 = local_78;
      FUN_149461086(lVar2,&local_88,param_2,local_90);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      uVar3 = FUN_1494c9ad6(param_1);
      local_88 = lVar2;
      local_80 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      local_80[1] = &DAT_100000001;
      *local_80 = &PTR_LAB_14bcfe3d0;
      local_80[2] = lVar2;
      cVar1 = FUN_1494a7e7c(uVar3,&local_88);
      if (cVar1 != '\0') {
        lVar4 = FUN_1494c9ad6(param_1);
        lVar4 = *(longlong *)(lVar4 + 0x20);
        if (lVar4 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_145a96b14();
          uVar3 = FUN_144718840(lVar4,uVar3);
        }
        uVar3 = FUN_1494612b0(lVar2,uVar3);
        goto LAB_1494c5d75;
      }
    }
  }
  uVar3 = 0;
LAB_1494c5d75:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c5ee8 FUN_1494c5ee8 body=282 status=ok
// SIG undefined FUN_1494c5ee8(void)

void FUN_1494c5ee8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  plVar3 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494c6004(param_1,plVar3,puVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c6004 FUN_1494c6004 body=119 status=ok
// SIG undefined FUN_1494c6004(void)

undefined4 FUN_1494c6004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_38,L"Duplicate");
  uVar1 = FUN_14452d592(param_1,param_2,param_3,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c607c FUN_1494c607c body=201 status=ok
// SIG undefined FUN_1494c607c(void)

void FUN_1494c607c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1494c6146(param_1,&local_38,local_28);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = local_38;
  *(undefined4 *)(param_3 + 1) = local_30;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c6146 FUN_1494c6146 body=8228 status=ok
// SIG undefined FUN_1494c6146(void)

/* WARNING: Removing unreachable block (ram,0x0001494c6ecc) */
/* WARNING: Removing unreachable block (ram,0x0001494c6b1b) */
/* WARNING: Removing unreachable block (ram,0x0001494c7220) */
/* WARNING: Removing unreachable block (ram,0x0001494c6ede) */
/* WARNING: Removing unreachable block (ram,0x0001494c6b2d) */
/* WARNING: Removing unreachable block (ram,0x0001494c7232) */

undefined8 * FUN_1494c6146(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  void *pvVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong uVar19;
  code **ppcVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  ulonglong *puVar25;
  code *pcVar26;
  int iVar27;
  int iVar28;
  ulonglong *puVar29;
  ulonglong *puVar30;
  ulonglong **ppuVar31;
  ulonglong **ppuVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auStack_468 [32];
  code **local_448;
  undefined8 local_440;
  ulonglong *local_438;
  longlong *local_430;
  longlong local_428;
  longlong local_420;
  longlong local_418;
  longlong *local_410;
  longlong *local_408;
  longlong *local_400;
  longlong local_3f8 [2];
  undefined1 local_3e8 [8];
  undefined1 local_3e0 [8];
  longlong local_3d8;
  undefined8 uStack_3d0;
  longlong local_3c8;
  undefined8 uStack_3c0;
  void *local_3b0;
  int local_3a8;
  longlong local_3a0;
  longlong local_398;
  undefined8 uStack_390;
  longlong *local_388;
  undefined8 uStack_380;
  longlong *local_378;
  undefined8 uStack_370;
  ulonglong *local_368;
  undefined8 uStack_360;
  longlong *local_358;
  uint local_350;
  undefined4 local_34c;
  longlong local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  longlong local_328;
  undefined8 uStack_320;
  longlong local_318 [2];
  ulonglong *local_308;
  undefined8 local_300;
  ulonglong *local_2f8;
  int local_2f0;
  ulonglong *local_2e8;
  int local_2e0;
  undefined4 local_2dc;
  ulonglong *local_2d8;
  int local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  longlong local_258;
  undefined4 local_250;
  code *local_248;
  void *local_240;
  int local_238;
  undefined4 local_234;
  longlong *local_230;
  longlong local_228;
  undefined8 uStack_220;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  int local_1f4;
  undefined1 local_1f0 [8];
  undefined1 *local_1e8;
  int local_1e0;
  code *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  int local_1a4;
  undefined1 local_1a0 [8];
  undefined1 *local_198;
  int local_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  int local_154;
  undefined1 local_150 [8];
  undefined1 *local_148;
  int local_140;
  code *local_138;
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_468;
  if (param_3 == 0) {
LAB_1494c61d9:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_468);
  }
  lVar15 = FUN_1459f781e();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar15 + 0x38)) ||
     (bVar8 = true,
     *(longlong *)
      (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8)
     != lVar15 + 0x30)) {
    bVar8 = false;
  }
  lVar15 = FUN_145ba7238();
  if (*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar15 + 0x38)) {
    if (!bVar8) goto LAB_1494c61d9;
  }
  else if (!bVar8 && *(longlong *)
                      (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
                      (longlong)*(int *)(lVar15 + 0x38) * 8) != lVar15 + 0x30) goto LAB_1494c61d9;
  local_328 = 0;
  uStack_320 = 0;
  local_428 = param_3;
  FUN_1494cd0aa(param_1,&local_2c8,param_3,0);
  ppcVar20 = local_2c8;
  lVar15 = (longlong)(int)uStack_2c0;
  if (lVar15 != 0) {
    lVar33 = 0;
    do {
      uVar23 = uStack_320;
      uVar16 = *(undefined8 *)
                (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)((longlong)ppcVar20 + lVar33) * 8
                );
      lVar35 = (longlong)(int)uStack_320;
      uVar13 = (int)uStack_320 + 1;
      uStack_320 = CONCAT44(uStack_320._4_4_,uVar13);
      if (uStack_320._4_4_ < uVar13) {
        FUN_1494e5134(&local_328,uVar23 & 0xffffffff);
      }
      *(undefined8 *)(local_328 + lVar35 * 8) = uVar16;
      lVar33 = lVar33 + 4;
    } while (lVar15 * 4 != lVar33);
  }
  lVar15 = local_428;
  if (local_2c8 != (code **)0x0) {
    FUN_1400020a8(local_2c8);
  }
  local_338 = *(undefined8 *)(lVar15 + 0x40);
  uStack_330 = *(undefined8 *)(lVar15 + 0x48);
  local_348 = 0;
  uStack_340 = 0;
  iVar27 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar27 != 0) {
    lVar33 = *(longlong *)(param_1 + 0x38);
    lVar35 = 0;
    do {
      uVar23 = uStack_340;
      lVar34 = *(longlong *)(lVar33 + lVar35);
      if (lVar34 != lVar15) {
        dVar2 = *(double *)(lVar34 + 0x48);
        dVar3 = *(double *)(lVar15 + 0x48);
        dVar4 = *(double *)(lVar34 + 0x40);
        dVar5 = *(double *)(lVar15 + 0x40);
        lVar15 = (longlong)(int)uStack_340;
        uVar13 = (int)uStack_340 + 1;
        uStack_340 = CONCAT44(uStack_340._4_4_,uVar13);
        if (uStack_340._4_4_ < uVar13) {
          FUN_1494e51ba(&local_348,uVar23 & 0xffffffff);
        }
        *(longlong *)(local_348 + lVar15 * 0x18) = lVar34;
        *(double *)(local_348 + 8 + lVar15 * 0x18) = dVar4 - dVar5;
        *(double *)(local_348 + 0x10 + lVar15 * 0x18) = dVar2 - dVar3;
        lVar15 = local_428;
      }
      lVar35 = lVar35 + 8;
    } while ((longlong)iVar27 * 8 != lVar35);
  }
  uVar16 = FUN_1459f7296();
  plVar17 = (longlong *)FUN_144718840(lVar15,uVar16);
  uVar16 = FUN_14599ba6c();
  plVar18 = (longlong *)FUN_144718840(lVar15,uVar16);
  if (plVar17 == (longlong *)0x0 || plVar18 == (longlong *)0x0) goto LAB_1494c644f;
  local_430 = plVar18;
  local_418 = (**(code **)(*plVar17 + 0x10))(plVar17);
  local_358 = (longlong *)0x0;
  local_350 = *(uint *)(local_418 + 0x40);
  lVar15 = (longlong)(int)local_350;
  pvVar6 = *(void **)(local_418 + 0x38);
  local_420 = param_1;
  local_410 = plVar17;
  if (lVar15 == 0) {
    local_34c = 0;
  }
  else {
    FUN_1494e3a2c(&local_358,local_350,0);
    memcpy(local_358,pvVar6,lVar15 << 3);
    uVar13 = local_350;
    plVar17 = local_358;
    uVar23 = (ulonglong)(int)local_350;
    if (uVar23 != 0) {
      lVar15 = *local_358;
      if (lVar15 == 0) {
LAB_1494c807a:
        bVar8 = true;
      }
      else {
        lVar33 = FUN_145ba6e90();
        lVar15 = *(longlong *)(lVar15 + 0x10);
        if ((*(int *)(lVar15 + 0x38) < *(int *)(lVar33 + 0x38)) ||
           (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar33 + 0x38) * 8) !=
            lVar33 + 0x30)) goto LAB_1494c807a;
        bVar8 = false;
      }
      local_440 = (ulonglong *)((ulonglong)local_440._4_4_ << 0x20);
      uVar22 = 0;
      do {
        iVar27 = (int)uVar22;
        uVar22 = (ulonglong)(iVar27 + 1U);
        local_438 = (ulonglong *)(longlong)iVar27;
        if ((int)(iVar27 + 1U) < (int)uVar13) {
          uVar22 = (longlong)local_438 + 1;
          bVar9 = true;
LAB_1494c80a7:
          do {
            lVar15 = plVar17[uVar22];
            if (lVar15 != 0) {
              lVar33 = FUN_145ba6e90();
              lVar15 = *(longlong *)(lVar15 + 0x10);
              if ((*(int *)(lVar33 + 0x38) <= *(int *)(lVar15 + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar33 + 0x38) * 8) ==
                  lVar33 + 0x30)) {
                if (bVar8) goto LAB_1494c8109;
                uVar22 = uVar22 + 1;
                bVar9 = (longlong)uVar22 < (longlong)uVar23;
                if (uVar22 == uVar23) goto LAB_1494c8156;
                goto LAB_1494c80a7;
              }
            }
            if (!bVar8) {
              bVar8 = true;
              goto joined_r0x0001494c8102;
            }
            uVar22 = uVar22 + 1;
            bVar9 = (longlong)uVar22 < (longlong)uVar23;
          } while (uVar22 != uVar23);
          uVar22 = (ulonglong)uVar13;
        }
        else {
          if (!bVar8) break;
          bVar9 = false;
        }
LAB_1494c8109:
        iVar28 = (int)uVar22 - iVar27;
        iVar10 = (uint)local_440;
        if ((uint)local_440 != iVar27) {
          memmove(plVar17 + (int)(uint)local_440,plVar17 + (longlong)local_438,(longlong)iVar28 << 3
                 );
        }
        local_440 = (ulonglong *)CONCAT44(local_440._4_4_,iVar10 + iVar28);
        bVar8 = false;
joined_r0x0001494c8102:
      } while (bVar9);
LAB_1494c8156:
      local_350 = (uint)local_440;
      param_1 = local_420;
    }
  }
  local_368 = (ulonglong *)0x0;
  uStack_360 = 0;
  local_378 = (longlong *)0x0;
  uStack_370 = 0;
  local_388 = (longlong *)0x0;
  uStack_380 = 0;
  FUN_1494c9ba8(&local_358,&local_368);
  puVar25 = local_368;
  local_398 = 0;
  uStack_390 = 0;
  local_168 = 0;
  local_160 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_15c = 0xffffffff00000080;
  local_154 = 0;
  local_148 = (undefined1 *)0x0;
  local_140 = 0;
  lVar15 = (longlong)(int)uStack_360;
  local_3a0 = param_1;
  if (lVar15 == 0) {
    uVar40 = 0xffffffff;
    uVar41 = 0x7fefffff;
    uVar36 = 0xffffffff;
    uVar37 = 0xffefffff;
    uVar38 = uVar36;
    uVar39 = uVar37;
    uVar43 = uVar40;
    uVar45 = uVar41;
  }
  else {
    uVar36 = 0xffffffff;
    uVar37 = 0xffefffff;
    uVar40 = 0xffffffff;
    uVar41 = 0x7fefffff;
    lVar33 = 0;
    uVar38 = uVar36;
    uVar39 = uVar37;
    uVar43 = uVar40;
    uVar45 = uVar41;
    do {
      local_248 = *(code **)((longlong)puVar25 + lVar33);
      dVar2 = *(double *)(local_248 + 0x40);
      dVar3 = *(double *)(local_248 + 0x48);
      uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (dVar3 <= (double)CONCAT44(uVar41,uVar40)) {
        uVar40 = SUB84(dVar3,0);
        uVar41 = uVar42;
      }
      uVar44 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if (dVar2 <= (double)CONCAT44(uVar45,uVar43)) {
        uVar43 = SUB84(dVar2,0);
        uVar45 = uVar44;
      }
      if ((double)CONCAT44(uVar37,uVar36) <= dVar3) {
        uVar36 = SUB84(dVar3,0);
        uVar37 = uVar42;
      }
      if ((double)CONCAT44(uVar39,uVar38) <= dVar2) {
        uVar38 = SUB84(dVar2,0);
        uVar39 = uVar44;
      }
      FUN_1494bcb44(&local_3a0,&local_1d8,*(longlong *)(local_248 + 0x18));
      local_2c8 = &local_248;
      uStack_2c0 = &local_1d8;
      FUN_1494e3ede(&local_188,&local_138,&local_2c8);
      lVar33 = lVar33 + 8;
    } while (lVar15 * 8 != lVar33);
  }
  local_408 = (longlong *)(local_420 + 0x28);
  (**(code **)(*(longlong *)(local_420 + 0x28) + 0x20))(local_408,&local_3b0);
  local_3c8 = 0;
  uStack_3c0 = 0;
  if ((longlong)(int)uStack_370 != 0) {
    plVar17 = local_378 + (int)uStack_370;
    plVar18 = local_378;
LAB_1494c6851:
    if ((int)uStack_180 != local_154) {
      uVar23 = *(ulonglong *)(*plVar18 + 0x28);
      uVar13 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      puVar24 = local_148;
      if (local_148 == (undefined1 *)0x0) {
        puVar24 = local_150;
      }
      uVar22 = (ulonglong)((uVar13 >> 0x10 ^ uVar13) & local_140 - 1U);
      iVar27 = *(int *)(puVar24 + uVar22 * 4);
      if (iVar27 != -1) {
        uVar19 = *(ulonglong *)(*plVar18 + 0x30);
        do {
          if (*(ulonglong *)(local_188 + (longlong)iVar27 * 0x18) == uVar23) {
            uVar13 = ((uint)(uVar19 >> 0x14) & 0xffff ^ (uint)(uVar19 >> 4)) * -0x7a143595;
            uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
            uVar13 = uVar13 >> 0x10 ^ uVar13;
            iVar27 = *(int *)(puVar24 + (ulonglong)(local_140 - 1U & uVar13) * 4);
            goto LAB_1494c692b;
          }
          iVar27 = *(int *)(local_188 + (longlong)iVar27 * 0x18 + 0x10);
        } while (iVar27 != -1);
      }
    }
    goto LAB_1494c6861;
  }
LAB_1494c6706:
  plVar17 = local_388;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1d8 = (code *)0x0;
  uStack_1d0 = 0;
  local_1ac = 0xffffffff00000080;
  local_1a4 = 0;
  local_198 = (undefined1 *)0x0;
  local_190 = 0;
  lVar15 = (longlong)(int)uStack_380;
  if (lVar15 != 0) {
    lVar33 = 0;
    do {
      lVar35 = *(longlong *)((longlong)plVar17 + lVar33);
      FUN_1494bcb44(&local_3a0,&local_248,*(undefined8 *)(lVar35 + 0x18));
      local_138 = *(code **)(lVar35 + 0x18);
      local_2c8 = &local_138;
      uStack_2c0 = &local_248;
      FUN_146873bc6(&local_1d8,&local_2d8,&local_2c8,0);
      lVar33 = lVar33 + 8;
    } while (lVar15 * 8 != lVar33);
  }
  pvVar6 = local_3b0;
  local_248 = (code *)&local_3d8;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_240 = (void *)0x0;
  local_238 = local_3a8;
  if ((longlong)local_3a8 == 0) {
    local_234 = 0;
  }
  else {
    FUN_1446dd670(&local_240,local_3a8,0);
    memcpy(local_240,pvVar6,(longlong)local_3a8 * 2);
  }
  local_230 = local_430;
  local_208 = 0;
  local_200 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_1fc = 0xffffffff00000080;
  local_1f4 = 0;
  local_1e8 = (undefined1 *)0x0;
  local_1e0 = 0;
  FUN_1494d286c(&local_228,&local_188);
  if ((longlong)*(int *)(local_428 + 0x58) != 0) {
    plVar17 = *(longlong **)(local_428 + 0x50);
    local_400 = plVar17 + *(int *)(local_428 + 0x58);
    do {
      lVar15 = *plVar17;
      local_118 = 0;
      local_110 = 0x400000000;
      (**(code **)(*local_230 + 0x10))(local_230,&local_2c8,lVar15,&local_138);
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      FUN_1494e7262(lVar15,&local_2d8);
      if ((longlong)local_2d0 != 0) {
        puVar25 = local_2d8 + local_2d0;
        puVar30 = local_2d8;
        local_440 = puVar25;
        local_430 = plVar17;
        do {
          uVar23 = *puVar30;
          FUN_1494e67ec(uVar23,&local_2e8);
          FUN_1494e7262(local_2c8,&local_2f8);
          if ((longlong)local_2f0 != 0) {
            local_438 = local_2f8 + local_2f0;
            puVar29 = local_2f8;
            do {
              uVar22 = *puVar29;
              uVar19 = FUN_1494e64f0(uVar22);
              FUN_1494e66cc(uVar22,local_3f8);
              FUN_1400021e4(local_3f8,&local_138);
              if ((int)uStack_220 != local_1f4) {
                uVar13 = ((uint)(uVar19 >> 0x14) & 0xffff ^ (uint)(uVar19 >> 4)) * -0x7a143595;
                uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
                puVar24 = local_1e8;
                if (local_1e8 == (undefined1 *)0x0) {
                  puVar24 = local_1f0;
                }
                iVar27 = *(int *)(puVar24 +
                                 (ulonglong)(local_1e0 - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
                while (iVar27 != -1) {
                  puVar25 = (ulonglong *)(local_228 + (longlong)iVar27 * 0x18);
                  if (*puVar25 == uVar19) goto LAB_1494c6da2;
                  iVar27 = (int)puVar25[2];
                }
              }
              puVar25 = (ulonglong *)0x0;
LAB_1494c6da2:
              FUN_1400021e4(puVar25 + 1,local_318);
              FUN_1494bd7c2(&local_308,&local_240,local_318,&local_138);
              if (local_318[0] != 0) {
                FUN_1400020a8();
              }
              if (local_138 != (code *)0x0) {
                FUN_1400020a8();
              }
              pcVar26 = local_248;
              if (*(char *)(uVar23 + 0x29) == '\x02') {
                ppuVar31 = &local_2e8;
                ppuVar32 = &local_308;
              }
              else {
                ppuVar31 = &local_308;
                ppuVar32 = &local_2e8;
              }
              FUN_149365e7c(&local_138,0,ppuVar31,ppuVar32);
              iVar27 = *(int *)(pcVar26 + 8);
              *(uint *)(pcVar26 + 8) = iVar27 + 1U;
              if (*(uint *)(pcVar26 + 0xc) < iVar27 + 1U) {
                FUN_146272134(pcVar26,iVar27);
              }
              lVar15 = *(longlong *)pcVar26;
              lVar33 = (longlong)iVar27 * 0x20;
              *(undefined8 *)(lVar15 + lVar33) = 0;
              *(code **)(lVar15 + lVar33) = local_138;
              *(undefined4 *)(lVar15 + 8 + lVar33) = (undefined4)local_130;
              *(undefined4 *)(lVar15 + 0xc + lVar33) = local_130._4_4_;
              *(undefined8 *)(lVar15 + 0x10 + lVar33) = 0;
              *(undefined8 **)(lVar15 + 0x10 + lVar33) = local_128;
              *(undefined4 *)(lVar15 + 0x18 + lVar33) = (undefined4)local_120;
              *(undefined4 *)(lVar15 + 0x1c + lVar33) = local_120._4_4_;
              local_120 = 0;
              local_128 = (undefined8 *)0x0;
              local_130 = (longlong *)0x0;
              local_138 = (code *)0x0;
              if (local_308 != (ulonglong *)0x0) {
                FUN_1400020a8();
              }
              puVar29 = puVar29 + 1;
              puVar25 = local_440;
            } while (puVar29 != local_438);
          }
          if (local_2f8 != (ulonglong *)0x0) {
            FUN_1400020a8(local_2f8);
          }
          if (local_2e8 != (ulonglong *)0x0) {
            FUN_1400020a8();
          }
          puVar30 = puVar30 + 1;
          plVar17 = local_430;
        } while (puVar30 != puVar25);
      }
      if (local_2d8 != (ulonglong *)0x0) {
        FUN_1400020a8(local_2d8);
      }
      if (CONCAT44(uStack_29c,uStack_2a0) != 0) {
        FUN_1400020a8();
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != local_400);
  }
  uVar16 = (**(code **)(*local_410 + 0x20))();
  FUN_1494e7262(uVar16,&local_2d8);
  if (0 < local_2d0) {
    FUN_1494e67ec(*local_2d8,&local_138);
    if ((longlong)*(int *)(local_418 + 0x40) != 0) {
      puVar30 = *(ulonglong **)(local_418 + 0x38);
      puVar25 = puVar30 + *(int *)(local_418 + 0x40);
      local_440 = puVar25;
      do {
        uVar23 = *puVar30;
        if (uVar23 != 0) {
          uVar16 = FUN_145ba398c();
          plVar17 = (longlong *)FUN_144718840(uVar23,uVar16);
          if (plVar17 != (longlong *)0x0) {
            (**(code **)(*plVar17 + 0x10))(plVar17,&local_2e8);
            if ((longlong)local_2e0 != 0) {
              local_438 = local_2e8 + local_2e0;
              uVar13 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
              uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
              puVar29 = local_2e8;
              do {
                FUN_1494e66cc(*puVar29,local_318);
                FUN_1400021e4(local_318,&local_2c8);
                if ((int)uStack_180 != local_154) {
                  puVar24 = local_148;
                  if (local_148 == (undefined1 *)0x0) {
                    puVar24 = local_150;
                  }
                  iVar27 = *(int *)(puVar24 +
                                   (ulonglong)(local_140 - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
                  while (iVar27 != -1) {
                    puVar25 = (ulonglong *)(local_188 + (longlong)iVar27 * 0x18);
                    if (*puVar25 == uVar23) goto LAB_1494c7108;
                    iVar27 = (int)puVar25[2];
                  }
                }
                puVar25 = (ulonglong *)0x0;
LAB_1494c7108:
                FUN_1400021e4(puVar25 + 1,&local_308);
                FUN_1494bd7c2(&local_2f8,&local_3b0,&local_308,&local_2c8);
                if (local_308 != (ulonglong *)0x0) {
                  FUN_1400020a8();
                }
                if (local_2c8 != (code **)0x0) {
                  FUN_1400020a8();
                }
                FUN_149365e7c(&local_2c8,0,&local_138,&local_2f8);
                uVar22 = uStack_3d0;
                lVar15 = (longlong)(int)uStack_3d0;
                uVar14 = (int)uStack_3d0 + 1;
                uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uVar14);
                if (uStack_3d0._4_4_ < uVar14) {
                  FUN_146272134(&local_3d8,uVar22 & 0xffffffff);
                }
                lVar15 = lVar15 * 0x20;
                *(undefined8 *)(local_3d8 + lVar15) = 0;
                *(code ***)(local_3d8 + lVar15) = local_2c8;
                *(int *)(local_3d8 + 8 + lVar15) = (int)uStack_2c0;
                *(undefined4 *)(local_3d8 + 0xc + lVar15) = uStack_2c0._4_4_;
                *(undefined8 *)(local_3d8 + 0x10 + lVar15) = 0;
                *(double *)(local_3d8 + 0x10 + lVar15) = local_2b8;
                *(undefined4 *)(local_3d8 + 0x18 + lVar15) = (undefined4)uStack_2b0;
                *(undefined4 *)(local_3d8 + 0x1c + lVar15) = uStack_2b0._4_4_;
                uStack_2b0 = 0.0;
                local_2b8 = 0.0;
                uStack_2c0 = (code **)0x0;
                local_2c8 = (code **)0x0;
                if (local_2f8 != (ulonglong *)0x0) {
                  FUN_1400020a8();
                }
                puVar29 = puVar29 + 1;
                puVar25 = local_440;
              } while (puVar29 != local_438);
            }
            if (local_2e8 != (ulonglong *)0x0) {
              FUN_1400020a8(local_2e8);
            }
          }
        }
        puVar30 = puVar30 + 1;
      } while (puVar30 != puVar25);
    }
    if (local_138 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  local_2e8 = (ulonglong *)0x0;
  local_2e0 = *(int *)(local_418 + 0x50);
  lVar15 = (longlong)local_2e0;
  pvVar6 = *(void **)(local_418 + 0x48);
  if (lVar15 == 0) {
    local_2dc = 0;
  }
  else {
    FUN_1494e524e(&local_2e8,local_2e0);
    memcpy(local_2e8,pvVar6,lVar15 << 3);
    local_438 = (ulonglong *)(longlong)local_2e0;
    if (local_438 != (ulonglong *)0x0) {
      local_440 = local_2e8;
      uVar23 = *local_2e8;
      lVar15 = FUN_1494e64f0(*(undefined8 *)(uVar23 + 0x30));
      if (lVar15 == 0) {
LAB_1494c77de:
        lVar15 = FUN_1494e64f0(*(undefined8 *)(uVar23 + 0x28));
        if (lVar15 != 0) {
          lVar33 = FUN_145ba6e90();
          if ((*(int *)(lVar33 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
             (bVar8 = true,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar33 + 0x38) * 8) == lVar33 + 0x30)) goto LAB_1494c7815;
        }
        bVar8 = false;
      }
      else {
        lVar33 = FUN_145ba6e90();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(lVar33 + 0x38)) ||
           (bVar8 = true,
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar33 + 0x38) * 8) != lVar33 + 0x30)) goto LAB_1494c77de;
      }
LAB_1494c7815:
      iVar27 = 0;
      puVar25 = (ulonglong *)0x0;
      do {
        iVar10 = (int)puVar25;
        local_430 = (longlong *)(longlong)iVar10;
        if ((int)(iVar10 + 1U) < (int)local_438) {
          puVar30 = (ulonglong *)((longlong)local_430 + 1);
          bVar9 = true;
          do {
            while( true ) {
              uVar23 = local_440[(longlong)puVar30];
              lVar15 = FUN_1494e64f0(*(undefined8 *)(uVar23 + 0x30));
              puVar25 = puVar30;
              if (lVar15 == 0) break;
              lVar33 = FUN_145ba6e90();
              if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(lVar33 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar33 + 0x38) * 8) != lVar33 + 0x30)) break;
LAB_1494c78a1:
              if (!bVar8) goto LAB_1494c78bf;
              puVar30 = (ulonglong *)((longlong)puVar30 + 1);
              bVar9 = (longlong)puVar30 < (longlong)local_438;
              if (puVar30 == local_438) goto LAB_1494c7d3b;
            }
            lVar15 = FUN_1494e64f0(*(undefined8 *)(uVar23 + 0x28));
            if (lVar15 != 0) {
              lVar33 = FUN_145ba6e90();
              if ((*(int *)(lVar33 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar33 + 0x38) * 8) == lVar33 + 0x30)) goto LAB_1494c78a1;
            }
            if (bVar8) {
              bVar8 = false;
              goto joined_r0x0001494c7939;
            }
            puVar30 = (ulonglong *)((longlong)puVar30 + 1);
            bVar9 = (longlong)puVar30 < (longlong)local_438;
            puVar25 = local_438;
          } while (puVar30 != local_438);
        }
        else {
          if (bVar8) break;
          bVar9 = false;
          puVar25 = (ulonglong *)(ulonglong)(iVar10 + 1U);
        }
LAB_1494c78bf:
        iVar28 = (int)puVar25 - iVar10;
        if (iVar27 != iVar10) {
          memmove(local_440 + iVar27,local_440 + (longlong)local_430,(longlong)iVar28 << 3);
        }
        iVar27 = iVar27 + iVar28;
        bVar8 = true;
joined_r0x0001494c7939:
      } while (bVar9);
LAB_1494c7d3b:
      local_2e0 = iVar27;
      if (iVar27 != 0) {
        local_440 = local_2e8 + iVar27;
        puVar25 = local_2e8;
        do {
          uVar23 = *puVar25;
          uVar16 = *(undefined8 *)(uVar23 + 0x28);
          uVar22 = FUN_1494e64f0(uVar16);
          uVar7 = *(undefined8 *)(uVar23 + 0x30);
          uVar23 = FUN_1494e64f0(uVar7);
          FUN_1494e66cc(uVar16,local_3e0);
          FUN_1400021e4(local_3e0,&local_138);
          if ((int)uStack_180 != local_154) {
            uVar13 = ((uint)(uVar22 >> 0x14) & 0xffff ^ (uint)(uVar22 >> 4)) * -0x7a143595;
            uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
            puVar24 = local_148;
            if (local_148 == (undefined1 *)0x0) {
              puVar24 = local_150;
            }
            iVar27 = *(int *)(puVar24 + (ulonglong)(local_140 - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4)
            ;
            while (iVar27 != -1) {
              puVar30 = (ulonglong *)(local_188 + (longlong)iVar27 * 0x18);
              if (*puVar30 == uVar22) goto LAB_1494c7e0d;
              iVar27 = (int)puVar30[2];
            }
          }
          puVar30 = (ulonglong *)0x0;
LAB_1494c7e0d:
          FUN_1400021e4(puVar30 + 1,&local_2f8);
          FUN_1494bd7c2(&local_2c8,&local_3b0,&local_2f8,&local_138);
          FUN_1494e66cc(uVar7,local_3e8);
          FUN_1400021e4(local_3e8,local_318);
          if ((int)uStack_180 != local_154) {
            uVar13 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
            uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
            puVar24 = local_148;
            if (local_148 == (undefined1 *)0x0) {
              puVar24 = local_150;
            }
            iVar27 = *(int *)(puVar24 + (ulonglong)(local_140 - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4)
            ;
            while (iVar27 != -1) {
              puVar30 = (ulonglong *)(local_188 + (longlong)iVar27 * 0x18);
              if (*puVar30 == uVar23) goto LAB_1494c7ecc;
              iVar27 = (int)puVar30[2];
            }
          }
          puVar30 = (ulonglong *)0x0;
LAB_1494c7ecc:
          local_438 = puVar25;
          FUN_1400021e4(puVar30 + 1,local_3f8);
          FUN_1494bd7c2(&local_308,&local_3b0,local_3f8,local_318);
          ppcVar20 = local_2c8;
          puVar25 = local_308;
          uVar23 = uStack_3d0;
          local_2c8 = (code **)0x0;
          uVar11 = (int)uStack_2c0;
          uVar12 = uStack_2c0._4_4_;
          uStack_2c0 = (code **)0x0;
          local_308 = (ulonglong *)0x0;
          uVar42 = (undefined4)local_300;
          uVar44 = local_300._4_4_;
          local_300 = 0;
          lVar15 = (longlong)(int)uStack_3d0;
          uVar13 = (int)uStack_3d0 + 1;
          uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uVar13);
          if (uStack_3d0._4_4_ < uVar13) {
            FUN_146272134(&local_3d8,uVar23 & 0xffffffff);
          }
          lVar15 = lVar15 * 0x20;
          *(code ***)(local_3d8 + lVar15) = ppcVar20;
          *(undefined4 *)(local_3d8 + 8 + lVar15) = uVar11;
          *(undefined4 *)(local_3d8 + 0xc + lVar15) = uVar12;
          *(ulonglong **)(local_3d8 + 0x10 + lVar15) = puVar25;
          *(undefined4 *)(local_3d8 + 0x18 + lVar15) = uVar42;
          *(undefined4 *)(local_3d8 + 0x1c + lVar15) = uVar44;
          if (local_308 != (ulonglong *)0x0) {
            FUN_1400020a8();
          }
          puVar25 = local_438;
          if (local_3f8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_318[0] != 0) {
            FUN_1400020a8();
          }
          if (local_2c8 != (code **)0x0) {
            FUN_1400020a8();
          }
          if (local_2f8 != (ulonglong *)0x0) {
            FUN_1400020a8();
          }
          if (local_138 != (code *)0x0) {
            FUN_1400020a8();
          }
          puVar25 = puVar25 + 1;
        } while (puVar25 != local_440);
      }
    }
  }
  FUN_140056680(&local_2c8,L"Expand Collapsed Nodes");
  lVar15 = local_420;
  local_440 = (ulonglong *)FUN_1494c9ad6(local_420);
  FUN_1494a80f4(local_440);
  if (local_2c8 != (code **)0x0) {
    FUN_1400020a8();
  }
  lVar33 = local_348;
  lVar35 = (longlong)(int)uStack_340;
  if (lVar35 != 0) {
    dVar2 = ((double)CONCAT44(uVar37,uVar36) - (double)CONCAT44(uVar41,uVar40)) * 0.5 + 100.0;
    dVar3 = ((double)CONCAT44(uVar39,uVar38) - (double)CONCAT44(uVar45,uVar43)) * 0.5 + 100.0;
    lVar34 = 0;
    do {
      local_2b8 = *(double *)(lVar33 + 0x10 + lVar34);
      puVar21 = (undefined8 *)(lVar33 + lVar34);
      local_2c8 = (code **)*puVar21;
      uStack_2c0 = (code **)puVar21[1];
      bVar8 = 0.0 <= local_2b8;
      bVar9 = 0.0 <= (double)uStack_2c0;
      uVar16 = FUN_1494c9ad6(lVar15);
      local_130 = (longlong *)
                  ((double)(~-(ulonglong)bVar8 & (ulonglong)-dVar2 |
                           -(ulonglong)bVar8 & (ulonglong)dVar2) + (double)local_2c8[9]);
      local_138 = (code *)((double)(~-(ulonglong)bVar9 & (ulonglong)-dVar3 |
                                   -(ulonglong)bVar9 & (ulonglong)dVar3) + (double)local_2c8[8]);
      FUN_1494cc120(uVar16,&local_2c8,&local_138);
      lVar34 = lVar34 + 0x18;
    } while (lVar35 * 0x18 != lVar34);
  }
  if ((longlong)(int)uStack_380 != 0) {
    plVar17 = local_388 + (int)uStack_380;
    plVar18 = local_388;
    do {
      lVar33 = *plVar18;
      if ((int)uStack_1d0 != local_1a4) {
        lVar35 = *(longlong *)(lVar33 + 0x18);
        uVar13 = (uint)((ulonglong)lVar35 >> 0x10);
        uVar14 = (uint)lVar35 & 0xffff;
        puVar24 = local_198;
        if (local_198 == (undefined1 *)0x0) {
          puVar24 = local_1a0;
        }
        iVar27 = *(int *)(puVar24 +
                         (ulonglong)
                         (local_190 - 1U &
                         (int)((ulonglong)lVar35 >> 0x20) + ((uint)lVar35 << 0x10 | uVar14) +
                         (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar14 >> 4)) * 4);
        while (iVar27 != -1) {
          pcVar26 = local_1d8 + (longlong)iVar27 * 0x18;
          if (*(longlong *)pcVar26 == lVar35) goto LAB_1494c79da;
          iVar27 = *(int *)(pcVar26 + 0x10);
        }
      }
      pcVar26 = (code *)0x0;
LAB_1494c79da:
      lVar35 = *(longlong *)(pcVar26 + 8);
      uVar16 = FUN_1494c9ad6(lVar15);
      FUN_1494c9d96(uVar16,&local_3b0,lVar33,lVar35);
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar17);
  }
  ppcVar20 = (code **)FUN_14001cc68(0x28,0x10);
  local_2c8 = (code **)0x0;
  uStack_2c0 = (code **)0x0;
  FUN_14945e0fa(ppcVar20);
  puVar25 = local_368;
  *ppcVar20 = (code *)&PTR_FUN_14bcfe1b0;
  ppcVar20[3] = (code *)0x0;
  ppcVar20[4] = (code *)0x0;
  lVar33 = (longlong)(int)uStack_360;
  if (lVar33 != 0) {
    lVar35 = 0;
    do {
      (**(code **)(**(longlong **)((longlong)puVar25 + lVar35) + 0x2e0))
                (*(longlong **)((longlong)puVar25 + lVar35),lVar15,ppcVar20);
      lVar35 = lVar35 + 8;
    } while (lVar33 * 8 != lVar35);
  }
  uVar16 = FUN_1494c9ad6(lVar15);
  local_2c8 = ppcVar20;
  uStack_2c0 = (code **)FUN_14001cc68(0x18,0x10);
  uStack_2c0[1] = (code *)&DAT_100000001;
  *uStack_2c0 = (code *)&PTR_LAB_14bcfe3d0;
  uStack_2c0[2] = (code *)ppcVar20;
  FUN_1494a7e7c(uVar16,&local_2c8);
  lVar33 = local_428;
  if ((longlong)(int)uStack_360 != 0) {
    local_438 = local_368 + (int)uStack_360;
    puVar25 = local_368;
    do {
      uVar23 = *puVar25;
      uVar16 = FUN_1494c9ad6(lVar15);
      local_2c8 = *(code ***)(uVar23 + 0x40);
      uStack_2c0 = *(code ***)(uVar23 + 0x48);
      local_2a8 = (undefined4)local_338;
      uStack_2a4 = local_338._4_4_;
      uStack_2a0 = (undefined4)uStack_330;
      uStack_29c = uStack_330._4_4_;
      local_278 = 0;
      local_270 = 0;
      local_298 = 0;
      uStack_290 = 0;
      local_26c = 0xffffffff00000080;
      local_264 = 0;
      local_258 = 0;
      local_250 = 0;
      local_2b8 = ((double)CONCAT44(uVar39,uVar38) + (double)CONCAT44(uVar45,uVar43)) * 0.5;
      uStack_2b0 = ((double)CONCAT44(uVar37,uVar36) + (double)CONCAT44(uVar41,uVar40)) * 0.5;
      FUN_141262aba(&local_298,&local_1d8);
      puVar30 = (ulonglong *)0x0;
      if ((int)uStack_180 != local_154) {
        uVar13 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        puVar24 = local_148;
        if (local_148 == (undefined1 *)0x0) {
          puVar24 = local_150;
        }
        iVar27 = *(int *)(puVar24 + (ulonglong)(local_140 - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
        while (iVar27 != -1) {
          puVar30 = (ulonglong *)(local_188 + (longlong)iVar27 * 0x18);
          if (*puVar30 == uVar23) goto LAB_1494c7b14;
          iVar27 = (int)puVar30[2];
        }
        puVar30 = (ulonglong *)0x0;
      }
LAB_1494c7b14:
      (**(code **)(*local_408 + 0x20))(local_408,&local_2f8);
      plVar17 = (longlong *)FUN_14001cc68(0xc0,0x10);
      plVar17[1] = (longlong)&DAT_100000001;
      *plVar17 = (longlong)&PTR_FUN_14bd1e200;
      local_138 = (code *)0x0;
      local_128 = (undefined8 *)0x0;
      puVar21 = (undefined8 *)FUN_14001cc68(0x88,8);
      *puVar21 = &PTR_FUN_14bd1e4a0;
      *(undefined4 *)(puVar21 + 5) = local_2a8;
      *(undefined4 *)((longlong)puVar21 + 0x2c) = uStack_2a4;
      *(undefined4 *)(puVar21 + 6) = uStack_2a0;
      *(undefined4 *)((longlong)puVar21 + 0x34) = uStack_29c;
      puVar21[3] = local_2b8;
      puVar21[4] = uStack_2b0;
      *(undefined4 *)(puVar21 + 1) = (undefined4)local_2c8;
      *(undefined4 *)((longlong)puVar21 + 0xc) = local_2c8._4_4_;
      *(int *)(puVar21 + 2) = (int)uStack_2c0;
      *(undefined4 *)((longlong)puVar21 + 0x14) = uStack_2c0._4_4_;
      local_128 = puVar21;
      FUN_14105a876(puVar21 + 7,&local_298);
      if (puVar21 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_138 = FUN_14453437c;
      }
      pcVar26 = (code *)(plVar17 + 2);
      local_448 = &local_138;
      FUN_149461086(pcVar26,&local_2f8,uVar23,puVar30[1]);
      local_138 = pcVar26;
      local_130 = plVar17;
      if (plVar17 == (longlong *)0x0) {
        FUN_1494a7e7c(uVar16,&local_138);
      }
      else {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        FUN_1494a7e7c(uVar16,&local_138);
        LOCK();
        plVar18 = plVar17 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
      lVar15 = local_420;
      if (local_2f8 != (ulonglong *)0x0) {
        FUN_1400020a8();
      }
      lVar33 = local_428;
      local_250 = 0;
      if (local_258 != 0) {
        FUN_1400020a8();
      }
      FUN_140105116(&local_298);
      puVar25 = puVar25 + 1;
    } while (puVar25 != local_438);
  }
  FUN_1494ac476(lVar15,lVar33);
  if ((longlong)(int)uStack_3c0 != 0) {
    lVar35 = (longlong)(int)uStack_3c0 * 0x20 + local_3c8;
    lVar33 = local_3c8;
    do {
      uVar16 = FUN_1494c9ad6(lVar15);
      FUN_1494cae26(uVar16,lVar33,lVar33 + 0x10);
      lVar33 = lVar33 + 0x20;
    } while (lVar33 != lVar35);
  }
  if ((longlong)(int)uStack_3d0 != 0) {
    lVar35 = (longlong)(int)uStack_3d0 * 0x20 + local_3d8;
    lVar33 = local_3d8;
    do {
      uVar16 = FUN_1494c9ad6(lVar15);
      FUN_1494caf0e(uVar16,lVar33,lVar33 + 0x10);
      lVar33 = lVar33 + 0x20;
    } while (lVar33 != lVar35);
  }
  FUN_1494a81c6(local_440);
  if (local_2e8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if (local_2d8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  local_1e0 = 0;
  if (local_1e8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1494d2726(&local_228);
  if (local_240 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_141535be2(local_3d8,uStack_3d0 & 0xffffffff);
  if (local_3d8 != 0) {
    FUN_1400020a8();
  }
  local_190 = 0;
  if (local_198 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140105116(&local_1d8);
  FUN_141535be2(local_3c8,uStack_3c0 & 0xffffffff);
  if (local_3c8 != 0) {
    FUN_1400020a8();
  }
  if (local_3b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_140 = 0;
  if (local_148 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1494d2726(&local_188);
  if (local_398 != 0) {
    FUN_1400020a8();
  }
  if (local_388 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_378 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_368 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if (local_358 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1494c644f:
  *param_2 = 0;
  param_2[1] = 0;
  if (local_348 != 0) {
    FUN_1400020a8();
  }
  if (local_328 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1494c692b:
  if (iVar27 == -1) goto LAB_1494c6861;
  if (*(ulonglong *)(local_188 + (longlong)iVar27 * 0x18) == uVar19) {
    local_2c8 = (code **)0x0;
    uStack_2c0 = (code **)0x0;
    iVar27 = *(int *)(puVar24 + uVar22 * 4);
    goto LAB_1494c6959;
  }
  iVar27 = *(int *)(local_188 + (longlong)iVar27 * 0x18 + 0x10);
  goto LAB_1494c692b;
LAB_1494c6959:
  if (iVar27 == -1) goto LAB_1494c6973;
  puVar25 = (ulonglong *)(local_188 + (longlong)iVar27 * 0x18);
  if (*puVar25 == uVar23) goto LAB_1494c6975;
  iVar27 = (int)puVar25[2];
  goto LAB_1494c6959;
LAB_1494c6973:
  puVar25 = (ulonglong *)0x0;
LAB_1494c6975:
  FUN_1400021e4(puVar25 + 1,&local_1d8);
  FUN_1494bd7c2(&local_248,&local_3b0,&local_1d8,&local_2c8);
  if (local_1d8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_2c8 != (code **)0x0) {
    FUN_1400020a8();
  }
  local_2c8 = (code **)0x0;
  uStack_2c0 = (code **)0x0;
  if ((int)uStack_180 != local_154) {
    puVar24 = local_148;
    if (local_148 == (undefined1 *)0x0) {
      puVar24 = local_150;
    }
    iVar27 = *(int *)(puVar24 + (ulonglong)(local_140 - 1U & uVar13) * 4);
    while (iVar27 != -1) {
      puVar25 = (ulonglong *)(local_188 + (longlong)iVar27 * 0x18);
      if (*puVar25 == uVar19) goto LAB_1494c6a08;
      iVar27 = (int)puVar25[2];
    }
  }
  puVar25 = (ulonglong *)0x0;
LAB_1494c6a08:
  FUN_1400021e4(puVar25 + 1,&local_138);
  FUN_1494bd7c2(&local_1d8,&local_3b0,&local_138,&local_2c8);
  if (local_138 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_2c8 != (code **)0x0) {
    FUN_1400020a8();
  }
  FUN_149365e7c(&local_2c8,0,&local_248,&local_1d8);
  uVar23 = uStack_3c0;
  lVar15 = (longlong)(int)uStack_3c0;
  uVar13 = (int)uStack_3c0 + 1;
  uStack_3c0 = CONCAT44(uStack_3c0._4_4_,uVar13);
  if (uStack_3c0._4_4_ < uVar13) {
    FUN_146272134(&local_3c8,uVar23 & 0xffffffff);
  }
  lVar15 = lVar15 * 0x20;
  *(undefined8 *)(local_3c8 + lVar15) = 0;
  *(code ***)(local_3c8 + lVar15) = local_2c8;
  local_2c8 = (code **)0x0;
  *(int *)(local_3c8 + 8 + lVar15) = (int)uStack_2c0;
  *(undefined4 *)(local_3c8 + 0xc + lVar15) = uStack_2c0._4_4_;
  uStack_2c0 = (code **)0x0;
  *(undefined8 *)(local_3c8 + 0x10 + lVar15) = 0;
  *(double *)(local_3c8 + 0x10 + lVar15) = local_2b8;
  local_2b8 = 0.0;
  *(undefined4 *)(local_3c8 + 0x18 + lVar15) = (undefined4)uStack_2b0;
  *(undefined4 *)(local_3c8 + 0x1c + lVar15) = uStack_2b0._4_4_;
  uStack_2b0 = 0.0;
  uStack_2b0 = 0.0;
  local_2b8 = 0.0;
  uStack_2c0 = (code **)0x0;
  local_2c8 = (code **)0x0;
  if (local_1d8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_248 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1494c6861:
  plVar18 = plVar18 + 1;
  if (plVar18 == plVar17) goto LAB_1494c6706;
  goto LAB_1494c6851;
}



// FUNCTION 1494c816c FUN_1494c816c body=101 status=ok
// SIG undefined FUN_1494c816c(void)

void FUN_1494c816c(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1 + 0x28);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x28))(plVar1);
  uVar2 = 0xffffffff;
  if ((longlong)(int)plVar1[1] != 0) {
    lVar3 = (longlong)(int)plVar1[1] << 3;
    lVar4 = 0;
    do {
      if (*(longlong *)(*plVar1 + lVar4 * 8) == param_1) {
        uVar2 = (undefined4)lVar4;
        break;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  *param_3 = uVar2;
  return;
}



// FUNCTION 1494c81d2 FUN_1494c81d2 body=51 status=ok
// SIG undefined FUN_1494c81d2(void)

void FUN_1494c81d2(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x28))(param_1 + 0x28);
  FUN_1494c8206(param_3,uVar1);
  return;
}



// FUNCTION 1494c8206 FUN_1494c8206 body=88 status=ok
// SIG undefined FUN_1494c8206(void)

undefined8 * FUN_1494c8206(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1494dc350(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1494c827c FUN_1494c827c body=193 status=ok
// SIG undefined FUN_1494c827c(void)

void FUN_1494c827c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 != 0) {
    lVar3 = FUN_145ba6bd2();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar2 = 1;
      goto LAB_1494c82d9;
    }
  }
  uVar2 = 0;
LAB_1494c82d9:
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c8380 FUN_1494c8380 body=193 status=ok
// SIG undefined FUN_1494c8380(void)

void FUN_1494c8380(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 != 0) {
    lVar3 = FUN_1459f781e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar2 = 1;
      goto LAB_1494c83dd;
    }
  }
  uVar2 = 0;
LAB_1494c83dd:
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c8448 FUN_1494c8448 body=193 status=ok
// SIG undefined FUN_1494c8448(void)

void FUN_1494c8448(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 != 0) {
    lVar3 = FUN_145ba6914();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar2 = 1;
      goto LAB_1494c84a5;
    }
  }
  uVar2 = 0;
LAB_1494c84a5:
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c8510 FUN_1494c8510 body=193 status=ok
// SIG undefined FUN_1494c8510(void)

void FUN_1494c8510(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 != 0) {
    lVar3 = FUN_145ba7238();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar2 = 1;
      goto LAB_1494c856d;
    }
  }
  uVar2 = 0;
LAB_1494c856d:
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c85d8 FUN_1494c85d8 body=250 status=ok
// SIG undefined FUN_1494c85d8(void)

void FUN_1494c85d8(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
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
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x50))(param_1 + 0x28,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c86da FUN_1494c86da body=163 status=ok
// SIG undefined FUN_1494c86da(void)

void FUN_1494c86da(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1494c877e(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c877e FUN_1494c877e body=384 status=ok
// SIG undefined FUN_1494c877e(void)

undefined4 FUN_1494c877e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_78;
  int local_70;
  undefined8 *local_68;
  undefined8 *puStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_1494cb946(param_1,&local_78,param_2);
    if (local_70 == 0) {
      uVar3 = 0;
    }
    else {
      puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      local_68 = (undefined8 *)0x0;
      puStack_60 = (undefined8 *)0x0;
      FUN_14945e0fa(puVar4);
      *puVar4 = &PTR_FUN_14bcfe1b0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      if (local_70 == 1) {
        FUN_1494617f0(puVar4,L"Remove Link");
      }
      else {
        local_68 = (undefined8 *)CONCAT44(local_68._4_4_,local_70);
        FUN_1494cbb84(puVar4);
      }
      lVar2 = local_78;
      if ((longlong)local_70 != 0) {
        lVar6 = 0;
        do {
          FUN_1494cb9ce(puVar4,local_88,
                        (longlong)*(int *)(lVar2 + lVar6) * 8 + *(longlong *)(param_1 + 0x48));
          if (local_80 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_80 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_80 + 0x10))();
            }
          }
          lVar6 = lVar6 + 4;
        } while ((longlong)local_70 * 4 != lVar6);
      }
      uVar5 = FUN_1494c9ad6(param_1);
      local_68 = puVar4;
      puStack_60 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      puStack_60[1] = &DAT_100000001;
      *puStack_60 = &PTR_LAB_14bcfe3d0;
      puStack_60[2] = puVar4;
      uVar3 = FUN_1494a7e7c(uVar5,&local_68);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c8906 FUN_1494c8906 body=239 status=ok
// SIG undefined FUN_1494c8906(void)

void FUN_1494c8906(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494c89f6(param_1,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c89f6 FUN_1494c89f6 body=158 status=ok
// SIG undefined FUN_1494c89f6(void)

undefined8 FUN_1494c89f6(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((param_3 != 0 && param_2 != 0) && (*(char *)(param_2 + 0x29) != *(char *)(param_3 + 0x29))) {
    lVar2 = param_2;
    if (*(char *)(param_2 + 0x29) == '\x01') {
      lVar2 = param_3;
      param_3 = param_2;
    }
    if ((longlong)*(int *)(param_1 + 0x50) != 0) {
      lVar3 = 0;
      do {
        local_10 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar3);
        if ((*(longlong *)(local_10 + 0x28) == lVar2) && (*(longlong *)(local_10 + 0x30) == param_3)
           ) {
          uVar1 = FUN_1494c9ad6();
          uVar1 = FUN_1494cbaba(uVar1,&local_10);
          goto LAB_1494c8a65;
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(param_1 + 0x50) * 8 != lVar3);
    }
  }
  uVar1 = 0;
LAB_1494c8a65:
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1494c8a9c FUN_1494c8a9c body=163 status=ok
// SIG undefined FUN_1494c8a9c(void)

void FUN_1494c8a9c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1494ac476(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c8b46 FUN_1494c8b46 body=192 status=ok
// SIG undefined FUN_1494c8b46(void)

void FUN_1494c8b46(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = FUN_1494cb0d0(param_1,plVar2);
  *(bool *)param_3 = 0 < iVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c8c0e FUN_1494c8c0e body=274 status=ok
// SIG undefined FUN_1494c8c0e(void)

void FUN_1494c8c0e(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x60))(param_1 + 0x28,local_38[2],local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c8d28 FUN_1494c8d28 body=274 status=ok
// SIG undefined FUN_1494c8d28(void)

void FUN_1494c8d28(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x58))(param_1 + 0x28,local_38[2],local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c8e3e FUN_1494c8e3e body=1630 status=ok
// SIG undefined FUN_1494c8e3e(void)

void FUN_1494c8e3e(longlong *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined **_Src;
  void *_Src_00;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  size_t sVar16;
  undefined1 auStack_428 [32];
  longlong *local_408;
  longlong local_400;
  undefined8 local_3f8;
  longlong *local_3f0;
  undefined *local_3e8;
  undefined **local_3e0 [17];
  undefined ***local_358;
  undefined ***local_350;
  undefined2 local_348;
  undefined **local_340;
  undefined ***local_338;
  undefined ***local_2b8;
  undefined8 local_2b0;
  void **local_2a8;
  undefined8 local_2a0;
  void *local_298;
  ulonglong uStack_290;
  undefined1 local_288 [48];
  longlong *local_258;
  undefined8 uStack_250;
  undefined1 local_23c [4];
  code *local_238 [2];
  undefined8 local_228;
  undefined **local_218;
  void *local_210;
  int local_208;
  undefined4 local_204;
  undefined **local_1f8;
  undefined ***pppuStack_1f0;
  undefined ***local_1e8;
  undefined ****local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  int local_1c4;
  undefined1 local_1c0 [8];
  undefined1 *local_1b8;
  int local_1b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_428;
  (**(code **)(*param_1 + 0xf8))(param_1,param_2 == 2);
  local_258 = (longlong *)0x0;
  uStack_250 = 0;
  lVar15 = param_1[8];
  if ((longlong)(int)lVar15 != 0) {
    lVar12 = param_1[7];
    lVar14 = 0;
    do {
      lVar13 = *(longlong *)(lVar12 + lVar14);
      if (lVar13 != 0) {
        lVar5 = FUN_145ba6ae8();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          lVar5 = FUN_144b00ba4();
          lVar6 = FUN_144b00ba4(param_1);
          uVar3 = uStack_250;
          if (lVar5 != lVar6) {
            lVar5 = (longlong)(int)uStack_250;
            uVar4 = (int)uStack_250 + 1;
            uStack_250 = CONCAT44(uStack_250._4_4_,uVar4);
            if (uStack_250._4_4_ < uVar4) {
              FUN_1494e383e(&local_258,uVar3 & 0xffffffff);
            }
            local_258[lVar5] = lVar13;
          }
        }
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)(int)lVar15 * 8 != lVar14);
    if ((longlong)(int)uStack_250 != 0) {
      local_408 = local_258 + (int)uStack_250;
      plVar8 = local_258;
      do {
        lVar15 = *plVar8;
        lVar12 = *(longlong *)(lVar15 + 0x10);
        local_3f0 = plVar8;
        if (lVar12 == 0) {
LAB_1494c8f7f:
          lVar12 = 0;
        }
        else {
          lVar14 = FUN_145ba69fe();
          if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)) goto LAB_1494c8f7f;
        }
        FUN_14945f130(local_288,lVar12 + 0x250);
        uVar7 = FUN_144b00ba4(param_1);
        local_3f8 = FUN_14949a7cc(uVar7);
        local_298 = (void *)0x0;
        uStack_290 = 0;
        memset(&local_340,0,0x90);
        FUN_144869430(&local_340);
        local_2b0 = 0;
        local_340 = &PTR_FUN_149e1e590;
        local_2a8 = &local_298;
        local_2a0 = 0;
        FUN_144a69558(&local_340,1);
        (*(code *)local_340[0x1e])(&local_340,0);
        local_340 = &PTR_FUN_149e1e330;
        FUN_1407134c4(local_3e0,&local_340);
        local_358 = local_2b8;
        local_3e0[0] = &PTR_FUN_149eae6c0;
        local_348 = 0;
        local_1f8 = &PTR_FUN_149e37810;
        local_1e8 = &local_1f8;
        local_1e0 = &local_1e8;
        local_350 = &local_340;
        local_2b8 = local_3e0;
        pppuStack_1f0 = local_3e0;
        FUN_144938ae6(lVar15);
        FUN_14041e0ea(local_3e0);
        FUN_144a7fc42(&local_340);
        lVar12 = *(longlong *)(lVar15 + 0x50);
        iVar1 = *(int *)(lVar15 + 0x58);
        local_1d8 = 0;
        local_1d0 = 0;
        local_1f8 = (undefined **)0x0;
        pppuStack_1f0 = (undefined ***)0x0;
        local_1cc = 0xffffffff00000080;
        local_1c4 = 0;
        local_1b8 = (undefined1 *)0x0;
        local_1b0 = 0;
        local_400 = lVar15;
        if ((longlong)iVar1 != 0) {
          lVar15 = 0;
          do {
            lVar14 = *(longlong *)(lVar12 + lVar15);
            FUN_1494e7262(lVar14,local_3e0);
            local_3e8 = *(undefined **)(lVar14 + 0x18);
            local_340 = &local_3e8;
            local_338 = local_3e0;
            FUN_1494e38c4(&local_1f8,local_23c,&local_340);
            if (local_3e0[0] != (undefined **)0x0) {
              FUN_1400020a8();
            }
            lVar15 = lVar15 + 8;
          } while ((longlong)iVar1 * 8 != lVar15);
        }
        uVar7 = *(undefined8 *)(local_400 + 0x18);
        FUN_1494c949e(param_1,local_400,0);
        _Src_00 = local_298;
        local_340 = (undefined **)0x0;
        sVar16 = (size_t)(int)uStack_290;
        local_338 = (undefined ***)CONCAT44(local_338._4_4_,(int)uStack_290);
        if (sVar16 == 0) {
          local_338 = (undefined ***)(uStack_290 & 0xffffffff);
          local_208 = 0;
LAB_1494c91fe:
          local_210 = (void *)0x0;
          local_218 = &PTR_FUN_14bd1e120;
          local_228 = 0;
          local_204 = 0;
        }
        else {
          FUN_1447a127e(&local_340,uStack_290 & 0xffffffff,0);
          memcpy(local_340,_Src_00,sVar16);
          _Src = local_340;
          local_208 = (int)local_338;
          sVar16 = (size_t)(int)local_338;
          local_238[0] = (code *)0x0;
          local_228 = 0;
          local_218 = &PTR_FUN_14bd1e120;
          local_210 = (void *)0x0;
          if (sVar16 == 0) goto LAB_1494c91fe;
          FUN_1447a127e(&local_210,(ulonglong)local_338 & 0xffffffff,0);
          memcpy(local_210,_Src,sVar16);
        }
        local_238[0] = FUN_144532e2c;
        lVar15 = FUN_1494c95c4(param_1,local_3f8,uVar7,local_238);
        if ((longlong)*(int *)(lVar15 + 0x58) != 0) {
          plVar11 = *(longlong **)(lVar15 + 0x50);
          plVar8 = plVar11 + *(int *)(lVar15 + 0x58);
          do {
            if ((int)pppuStack_1f0 != local_1c4) {
              lVar15 = *plVar11;
              puVar2 = *(undefined **)(lVar15 + 0x18);
              uVar4 = (uint)((ulonglong)puVar2 >> 0x10);
              uVar10 = (uint)puVar2 & 0xffff;
              puVar9 = local_1b8;
              if (local_1b8 == (undefined1 *)0x0) {
                puVar9 = local_1c0;
              }
              iVar1 = *(int *)(puVar9 + (ulonglong)
                                        (local_1b0 - 1U &
                                        (int)((ulonglong)puVar2 >> 0x20) +
                                        ((uint)puVar2 << 0x10 | uVar10) +
                                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4)) * 4);
              while (iVar1 != -1) {
                lVar12 = (longlong)iVar1;
                if (local_1f8[lVar12 * 4] == puVar2) {
                  if ((((ulonglong)(local_1f8 + lVar12 * 4 + 1) & 0xfffffffffffffff7) != 0) &&
                     (iVar1 = *(int *)(local_1f8 + lVar12 * 4 + 2), (longlong)iVar1 != 0)) {
                    puVar2 = local_1f8[lVar12 * 4 + 1];
                    lVar12 = 0;
                    do {
                      lVar14 = lVar15;
                      lVar13 = *(longlong *)(puVar2 + lVar12);
                      if ((*(char *)(lVar15 + 0x29) == '\x02') ||
                         (lVar14 = *(longlong *)(puVar2 + lVar12), lVar13 = lVar15,
                         *(char *)(lVar15 + 0x29) == '\x01')) {
                        FUN_1494c969c(param_1,lVar14,lVar13);
                      }
                      lVar12 = lVar12 + 8;
                    } while ((longlong)iVar1 * 8 != lVar12);
                  }
                  break;
                }
                iVar1 = *(int *)(local_1f8 + lVar12 * 4 + 3);
              }
            }
            plVar11 = plVar11 + 1;
          } while (plVar11 != plVar8);
        }
        if (local_340 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        local_1b0 = 0;
        if (local_1b8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1494ced2c(&local_1f8);
        if (local_298 != (void *)0x0) {
          FUN_1400020a8();
        }
        plVar8 = local_3f0 + 1;
      } while (plVar8 != local_408);
    }
    if (local_258 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c949e FUN_1494c949e body=293 status=ok
// SIG undefined FUN_1494c949e(void)

undefined8 FUN_1494c949e(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    iVar4 = 1;
    lVar3 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar3) == param_2) {
        if (iVar4 == 0) break;
        if (param_3 == '\0') {
          FUN_1494cc3ee(param_1,param_2);
        }
        else {
          FUN_1494cd0aa(param_1,&local_50,param_2,0);
          if (local_50 != 0) {
            FUN_1400020a8();
          }
          if (local_48 != 0) break;
        }
        iVar1 = *(int *)(param_1 + 0x40);
        if (iVar1 - iVar4 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 0x38) + (lVar5 >> 0x20) * 8),
                  (void *)(*(longlong *)(param_1 + 0x38) + (lVar5 >> 0x20) * 8 + 8),
                  (longlong)(iVar1 - iVar4) << 3);
          iVar1 = *(int *)(param_1 + 0x40);
        }
        *(int *)(param_1 + 0x40) = iVar1 + -1;
        FUN_1494e532e(param_1 + 0x38);
        FUN_1494bdf80(param_1,1,param_2);
        FUN_1494acfa0(param_2);
        uVar2 = 1;
        goto LAB_1494c9506;
      }
      lVar5 = lVar5 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x40) * 8 != lVar3);
  }
  uVar2 = 0;
LAB_1494c9506:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1494c95c4 FUN_1494c95c4 body=215 status=ok
// SIG undefined FUN_1494c95c4(void)

longlong FUN_1494c95c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_1494cc208();
  if (*param_4 != 0) {
    uVar1 = *(undefined1 *)(lVar4 + 0x28);
    *(undefined1 *)(lVar4 + 0x28) = 0;
    pcVar2 = (code *)*param_4;
    plVar6 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_4[2];
    }
    local_40 = lVar4;
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar3 = (*pcVar2)(uVar5,&local_40);
    if (cVar3 == '\0') {
      FUN_1494acfa0(lVar4);
      *(undefined1 *)(lVar4 + 0x28) = uVar1;
      lVar4 = 0;
      goto LAB_1494c9606;
    }
    *(undefined1 *)(lVar4 + 0x28) = uVar1;
  }
  FUN_1494bdf22(lVar4);
  FUN_1494cc2ce(param_1,lVar4);
LAB_1494c9606:
  if (*param_4 != 0) {
    plVar6 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c969c FUN_1494c969c body=323 status=ok
// SIG undefined FUN_1494c969c(void)

undefined8 FUN_1494c969c(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_3 != 0 && param_2 != 0) && (*(char *)(param_2 + 0x29) == '\x02')) {
    if (param_2 == param_3) {
      return 0;
    }
    if (*(char *)(param_3 + 0x29) != '\x01') {
      return 0;
    }
    lVar3 = FUN_1494e64f0(param_2);
    lVar4 = FUN_1494e64f0(param_3);
    if (lVar3 != lVar4) {
      if ((longlong)*(int *)(param_1 + 0x50) != 0) {
        lVar3 = 0;
        do {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar3);
          if ((*(longlong *)(lVar4 + 0x28) == param_2) && (*(longlong *)(lVar4 + 0x30) == param_3))
          {
            return 0;
          }
          lVar3 = lVar3 + 8;
        } while ((longlong)*(int *)(param_1 + 0x50) * 8 != lVar3);
      }
      lVar3 = FUN_1494cc744(param_1);
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      bVar2 = DAT_14c950c29;
      *(longlong *)(lVar3 + 0x28) = param_2;
      if ((bVar2 & 1) != 0) {
        FUN_1456cec3c(param_3);
        bVar2 = DAT_14c950c29;
      }
      *(longlong *)(lVar3 + 0x30) = param_3;
      if ((lVar3 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c(lVar3);
      }
      iVar1 = *(int *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x50) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
        FUN_1494e5450((longlong *)(param_1 + 0x48),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 8) = lVar3;
      if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar3);
      }
      FUN_1494bdf80(param_1,5,lVar3);
      FUN_14282b7b8(lVar3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1494c97e0 FUN_1494c97e0 body=67 status=ok
// SIG undefined FUN_1494c97e0(void)

undefined8 FUN_1494c97e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_145a96b14();
      uVar3 = FUN_144718840(lVar2,uVar3);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1494c9824 FUN_1494c9824 body=688 status=ok
// SIG undefined FUN_1494c9824(void)

undefined8 FUN_1494c9824(longlong param_1,longlong *param_2,undefined4 *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_108 [32];
  code **local_e8;
  longlong local_e0 [2];
  undefined8 local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  longlong *local_b8 [2];
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = *param_2;
  if (lVar3 == 0) {
LAB_1494c9880:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_140f7d9ac();
    if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) goto LAB_1494c9880;
    lVar3 = *param_2;
  }
  FUN_149499cc8(&local_d0,param_1,*(undefined8 *)(lVar3 + 0x18));
  lVar3 = FUN_14001cc68(0xa0,0x10);
  local_c8 = *param_4;
  local_b8[0] = (longlong *)0x0;
  if (local_c8 != 0) {
    plVar6 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_4[2];
    }
    (**(code **)*plVar6)(plVar6,local_b8);
  }
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  local_78[0] = (code *)0x0;
  local_68 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *local_68 = &PTR_FUN_14bd1e140;
  local_68[2] = local_c8;
  local_68[4] = local_b8[0];
  local_b8[0] = (longlong *)0x0;
  *(undefined4 *)(local_68 + 8) = local_98;
  *(undefined4 *)((longlong)local_68 + 0x44) = uStack_94;
  *(undefined4 *)(local_68 + 9) = uStack_90;
  *(undefined4 *)((longlong)local_68 + 0x4c) = uStack_8c;
  local_68[6] = local_a8;
  local_68[7] = uStack_a0;
  if (local_c8 != 0) {
    local_c8 = 0;
  }
  *(undefined4 *)(local_68 + 10) = local_88;
  *(undefined4 *)((longlong)local_68 + 0x54) = uStack_84;
  *(undefined4 *)(local_68 + 0xb) = uStack_80;
  *(undefined4 *)((longlong)local_68 + 0x5c) = uStack_7c;
  if (local_68 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_78[0] = FUN_144533042;
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar4 = FUN_140f7d9ac();
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1494c99a4;
    }
  }
  lVar2 = 0;
LAB_1494c99a4:
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(param_1 + 0x28,local_e0);
  local_e8 = local_78;
  FUN_149460a9c(lVar3,local_e0,lVar2,local_d0);
  if (local_e0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    plVar6 = local_b8[0];
    if (local_b8[0] == (longlong *)0x0) {
      plVar6 = &local_a8;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  uVar5 = FUN_1494c9ad6(param_1);
  local_c8 = lVar3;
  local_c0 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  local_c0[1] = &DAT_100000001;
  *local_c0 = &PTR_LAB_14bcfe3d0;
  local_c0[2] = lVar3;
  cVar1 = FUN_1494a7e7c(uVar5,&local_c8);
  if (cVar1 == '\0') {
    uVar5 = 0;
  }
  else {
    lVar2 = FUN_1494c9ad6(param_1);
    lVar2 = *(longlong *)(lVar2 + 0x20);
    if (lVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_145a96b14();
      uVar5 = FUN_144718840(lVar2,uVar5);
    }
    uVar5 = FUN_149460d7e(lVar3,uVar5);
  }
  if (*param_4 != 0) {
    plVar6 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c9ad6 FUN_1494c9ad6 body=91 status=ok
// SIG undefined FUN_1494c9ad6(void)

undefined8 FUN_1494c9ad6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    if (lVar2 != 0) {
      lVar3 = FUN_1458f36a4();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        uVar4 = FUN_1494ac0dc(lVar2);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 1494c9b32 FUN_1494c9b32 body=117 status=ok
// SIG undefined FUN_1494c9b32(void)

undefined8 * FUN_1494c9b32(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Add Loop Nodes");
  FUN_14945e0fa(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bcfe1b0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494c9ba8 FUN_1494c9ba8 body=405 status=ok
// SIG undefined FUN_1494c9ba8(void)

void FUN_1494c9ba8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_4;
  FUN_1494c9d3e(param_2,param_1);
  if ((longlong)(int)param_1[1] != 0) {
    plVar7 = (longlong *)*param_1;
    plVar8 = plVar7 + (int)param_1[1];
    do {
      lVar1 = *plVar7;
      if (lVar1 != 0) {
        uVar4 = FUN_145a96850();
        lVar5 = FUN_144718840(lVar1,uVar4);
        if (lVar5 != 0) {
          lVar5 = *(longlong *)(lVar1 + 0x20);
          if (lVar5 == 0) {
LAB_1494c9c77:
            lVar5 = 0;
          }
          else {
            lVar6 = FUN_141155906();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_1494c9c77;
          }
          if (0 < *(int *)(lVar5 + 0x60)) {
            lVar6 = 0;
            do {
              lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x58) + lVar6 * 8);
              cVar3 = FUN_1494e6366(lVar2,lVar1);
              if (cVar3 != '\0') {
                local_50 = lVar2;
                if (lVar2 != 0) {
                  local_58 = FUN_1494e6378(lVar2,lVar1);
                  FUN_1494e3a8e(param_2,&local_58);
                  FUN_1494e3afa(param_3,&local_50);
                }
                break;
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 < *(int *)(lVar5 + 0x60));
          }
        }
        lVar5 = FUN_145ba7238();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          local_50 = (**(code **)(*(longlong *)(lVar1 + 0x118) + 0x10))(lVar1 + 0x118);
          FUN_1494e3bec(local_60,&local_50);
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494c9d3e FUN_1494c9d3e body=88 status=ok
// SIG undefined FUN_1494c9d3e(void)

undefined8 * FUN_1494c9d3e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1494e3a2c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1494c9d96 FUN_1494c9d96 body=4050 status=ok
// SIG undefined FUN_1494c9d96(void)

/* WARNING: Removing unreachable block (ram,0x0001494ca4a3) */
/* WARNING: Removing unreachable block (ram,0x0001494ca4b5) */

void FUN_1494c9d96(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 uVar17;
  code *pcVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  undefined1 auStack_238 [32];
  code **local_218;
  code **local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8 [2];
  longlong local_1b8 [2];
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  longlong *local_168;
  uint local_160;
  undefined4 local_15c;
  undefined1 *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_130 [2];
  undefined8 local_120;
  code *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8 [2];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  int local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined **ppuStack_88;
  undefined1 *local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_200 = param_3;
  local_1f8 = param_1;
  local_1e8 = param_4;
  local_120 = param_4;
  FUN_1400021e4(&local_120,local_f8);
  local_1f0 = param_2;
  FUN_1494cad6a(local_130,param_2,local_f8);
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  lVar22 = local_200;
  lVar14 = FUN_1494e7b0c(local_200,1);
  local_1d0 = FUN_1494e7b0c(lVar22,2);
  local_148 = *(undefined8 *)(lVar14 + 0x40);
  uStack_140 = *(undefined8 *)(lVar14 + 0x48);
  local_158 = *(undefined1 **)(local_1d0 + 0x40);
  uStack_150 = *(undefined8 *)(local_1d0 + 0x48);
  local_d8 = 0;
  local_d0 = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_208 = (longlong)*(int *)(lVar22 + 0x50);
  local_1e0 = lVar14;
  if (local_208 != 0) {
    local_1d8 = *(longlong *)(local_200 + 0x48);
    local_208 = local_208 << 3;
    lVar22 = 0;
    do {
      lVar14 = *(longlong *)(local_1d8 + lVar22);
      lVar15 = FUN_1494e64f0(*(undefined8 *)(lVar14 + 0x30));
      if (lVar15 == local_1d0) {
        FUN_1494e66cc(*(undefined8 *)(lVar14 + 0x30),&local_178);
        FUN_1400021e4(&local_178,&local_118);
        FUN_1400021e4(&DAT_14cc1c5b0,&local_168);
        FUN_1494bd7c2(&local_a8,local_130,&local_168,&local_118);
        if (local_168 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_118 != (code *)0x0) {
          FUN_1400020a8();
        }
        FUN_1494e66cc(*(undefined8 *)(lVar14 + 0x28),&local_188);
        FUN_1400021e4(&local_188,&local_168);
        lVar14 = FUN_1494e64f0(*(undefined8 *)(lVar14 + 0x28));
        local_118 = *(code **)(lVar14 + 0x18);
        FUN_1400021e4(&local_118,&local_178);
        FUN_1494bd7c2(&local_118,local_130,&local_178,&local_168);
        if (local_178 != 0) {
          FUN_1400020a8();
        }
        if (local_168 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        pcVar18 = (code *)&DAT_149dfb77a;
        if ((int)uStack_110 != 0) {
          pcVar18 = local_118;
        }
        iVar19 = (int)uStack_110 + -1;
        if ((int)uStack_110 == 0) {
          iVar19 = 0;
        }
        uVar12 = FUN_144a49b4a(iVar19,pcVar18);
        plVar16 = (longlong *)FUN_140e10654(local_f8,uVar12,&local_118);
        iVar19 = (int)plVar16[1];
        *(uint *)(plVar16 + 1) = iVar19 + 1U;
        if (*(uint *)((longlong)plVar16 + 0xc) < iVar19 + 1U) {
          FUN_1447a1bd6(plVar16,iVar19);
        }
        lVar14 = *plVar16;
        lVar15 = (longlong)iVar19 * 0x10;
        puVar24 = (undefined8 *)(lVar14 + lVar15);
        *(undefined8 *)(lVar14 + lVar15) = 0;
        pcVar18 = local_a8;
        iVar19 = (int)uStack_a0;
      }
      else {
        lVar15 = FUN_1494e64f0(*(undefined8 *)(lVar14 + 0x28));
        if (lVar15 == local_1e0) {
          FUN_1494e66cc(*(undefined8 *)(lVar14 + 0x28),&local_178);
          FUN_1400021e4(&local_178,&local_118);
          FUN_1400021e4(&DAT_14cc1c5a8,&local_168);
        }
        else {
          FUN_1494e66cc(*(undefined8 *)(lVar14 + 0x28),&local_178);
          FUN_1400021e4(&local_178,&local_118);
          lVar15 = FUN_1494e64f0(*(undefined8 *)(lVar14 + 0x28));
          local_a8 = *(code **)(lVar15 + 0x18);
          FUN_1400021e4(&local_a8,&local_168);
        }
        FUN_1494bd7c2(&local_a8,local_130,&local_168,&local_118);
        if (local_168 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_118 != (code *)0x0) {
          FUN_1400020a8();
        }
        FUN_1494e66cc(*(undefined8 *)(lVar14 + 0x30),&local_188);
        FUN_1400021e4(&local_188,&local_168);
        lVar14 = FUN_1494e64f0(*(undefined8 *)(lVar14 + 0x30));
        local_118 = *(code **)(lVar14 + 0x18);
        FUN_1400021e4(&local_118,&local_178);
        FUN_1494bd7c2(&local_118,local_130,&local_178,&local_168);
        if (local_178 != 0) {
          FUN_1400020a8();
        }
        if (local_168 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        pcVar18 = (code *)&DAT_149dfb77a;
        if ((int)uStack_a0 != 0) {
          pcVar18 = local_a8;
        }
        iVar19 = (int)uStack_a0 + -1;
        if ((int)uStack_a0 == 0) {
          iVar19 = 0;
        }
        uVar12 = FUN_144a49b4a(iVar19,pcVar18);
        plVar16 = (longlong *)FUN_140e10654(local_f8,uVar12,&local_a8);
        iVar19 = (int)plVar16[1];
        *(uint *)(plVar16 + 1) = iVar19 + 1U;
        if (*(uint *)((longlong)plVar16 + 0xc) < iVar19 + 1U) {
          FUN_1447a1bd6(plVar16,iVar19);
        }
        lVar14 = *plVar16;
        lVar15 = (longlong)iVar19 * 0x10;
        puVar24 = (undefined8 *)(lVar14 + lVar15);
        *(undefined8 *)(lVar14 + lVar15) = 0;
        pcVar18 = local_118;
        iVar19 = (int)uStack_110;
      }
      *(int *)(lVar14 + 8 + lVar15) = iVar19;
      if ((longlong)iVar19 == 0) {
        *(undefined4 *)((longlong)puVar24 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar24,iVar19,0);
        memcpy((void *)*puVar24,pcVar18,(longlong)iVar19 * 2);
      }
      if (local_118 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 != (code *)0x0) {
        FUN_1400020a8();
      }
      lVar22 = lVar22 + 8;
    } while (local_208 != lVar22);
  }
  local_168 = (longlong *)0x0;
  local_160 = *(uint *)(local_200 + 0x40);
  lVar22 = (longlong)(int)local_160;
  _Src = *(void **)(local_200 + 0x38);
  if (lVar22 == 0) {
    local_15c = 0;
    uVar13 = local_160;
    goto LAB_1494ca2a4;
  }
  FUN_1494e3a2c(&local_168,local_160,0);
  memcpy(local_168,_Src,lVar22 << 3);
  uVar8 = local_160;
  plVar16 = local_168;
  uVar21 = (ulonglong)(int)local_160;
  uVar13 = local_160;
  if (uVar21 == 0) goto LAB_1494ca2a4;
  lVar22 = *local_168;
  if (lVar22 == 0) {
LAB_1494cabbd:
    bVar6 = false;
  }
  else {
    lVar14 = FUN_145ba6e90();
    lVar22 = *(longlong *)(lVar22 + 0x10);
    if ((*(int *)(lVar22 + 0x38) < *(int *)(lVar14 + 0x38)) ||
       (bVar6 = true,
       *(longlong *)(*(longlong *)(lVar22 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
       lVar14 + 0x30)) goto LAB_1494cabbd;
  }
  uVar13 = 0;
  uVar23 = 0;
  do {
    local_208 = CONCAT44(local_208._4_4_,uVar13);
    while( true ) {
      iVar19 = (int)uVar23;
      uVar23 = (ulonglong)(iVar19 + 1U);
      if ((int)uVar8 <= (int)(iVar19 + 1U)) break;
      uVar23 = (longlong)iVar19 + 1;
      bVar5 = true;
LAB_1494cabe2:
      while (lVar22 = plVar16[uVar23], lVar22 != 0) {
        lVar14 = FUN_145ba6e90();
        lVar22 = *(longlong *)(lVar22 + 0x10);
        if ((*(int *)(lVar22 + 0x38) < *(int *)(lVar14 + 0x38)) ||
           (*(longlong *)(*(longlong *)(lVar22 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
            lVar14 + 0x30)) break;
        if (!bVar6) goto LAB_1494cac49;
        uVar23 = uVar23 + 1;
        bVar5 = (longlong)uVar23 < (longlong)uVar21;
        if (uVar23 == uVar21) goto LAB_1494cad59;
      }
      if (!bVar6) {
        uVar23 = uVar23 + 1;
        bVar5 = (longlong)uVar23 < (longlong)uVar21;
        if (uVar23 == uVar21) {
          uVar23 = (ulonglong)uVar8;
          goto LAB_1494cac49;
        }
        goto LAB_1494cabe2;
      }
      bVar6 = false;
      if (!bVar5) goto LAB_1494cad59;
    }
    if (bVar6) {
LAB_1494cad59:
      uVar13 = (uint)local_208;
      break;
    }
    bVar5 = false;
LAB_1494cac49:
    iVar20 = (int)uVar23 - iVar19;
    iVar7 = (uint)local_208;
    if ((uint)local_208 != iVar19) {
      memmove(plVar16 + (int)(uint)local_208,plVar16 + iVar19,(longlong)iVar20 << 3);
    }
    uVar13 = iVar7 + iVar20;
    bVar6 = true;
  } while (bVar5);
LAB_1494ca2a4:
  local_160 = uVar13;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  FUN_1494c9ba8(&local_168,&local_178,&local_188);
  local_1a8 = 0;
  uStack_1a0 = 0;
  lVar22 = (longlong)(int)uStack_180;
  if (lVar22 != 0) {
    local_208 = local_188;
    lVar14 = 0;
    do {
      lVar15 = *(longlong *)(*(longlong *)(local_208 + lVar14) + 0x30);
      local_a8 = (code *)0x0;
      uStack_a0 = (code *)0x0;
      local_118 = *(code **)(*(longlong *)(*(longlong *)(local_208 + lVar14) + 0x28) + 0x18);
      FUN_1400021e4(&local_118,local_1b8);
      FUN_1494bd7c2(&local_118,local_130,local_1b8,&local_a8);
      if (local_1b8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_a8 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_a8 = (code *)0x0;
      uStack_a0 = (code *)0x0;
      local_1b8[0] = *(longlong *)(lVar15 + 0x18);
      FUN_1400021e4(local_1b8,local_1c8);
      FUN_1494bd7c2(local_1b8,local_130,local_1c8,&local_a8);
      if (local_1c8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_a8 != (code *)0x0) {
        FUN_1400020a8();
      }
      FUN_149365e7c(&local_a8,0,&local_118,local_1b8);
      uVar21 = uStack_1a0;
      lVar15 = (longlong)(int)uStack_1a0;
      uVar13 = (int)uStack_1a0 + 1;
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar13);
      if (uStack_1a0._4_4_ < uVar13) {
        FUN_146272134(&local_1a8,uVar21 & 0xffffffff);
      }
      lVar15 = lVar15 * 0x20;
      *(undefined8 *)(local_1a8 + lVar15) = 0;
      *(code **)(local_1a8 + lVar15) = local_a8;
      *(int *)(local_1a8 + 8 + lVar15) = (int)uStack_a0;
      *(uint *)(local_1a8 + 0xc + lVar15) = uStack_a0._4_4_;
      *(undefined8 *)(local_1a8 + 0x10 + lVar15) = 0;
      *(undefined8 **)(local_1a8 + 0x10 + lVar15) = local_98;
      *(uint *)(local_1a8 + 0x18 + lVar15) = (uint)local_90;
      *(int *)(local_1a8 + 0x1c + lVar15) = local_90._4_4_;
      local_90 = 0;
      local_98 = (undefined8 *)0x0;
      uStack_a0 = (code *)0x0;
      local_a8 = (code *)0x0;
      if (local_1b8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_118 != (code *)0x0) {
        FUN_1400020a8();
      }
      lVar14 = lVar14 + 8;
    } while (lVar22 * 8 != lVar14);
  }
  FUN_140056680(&local_a8,L"Duplicate SubGraph");
  uVar4 = local_1f8;
  FUN_1494a80f4(local_1f8,&local_a8);
  FUN_1494a81c6(uVar4);
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  lVar22 = local_200;
  FUN_1494cadd8(&local_118,local_200 + 0x98);
  FUN_1494cadd8(&local_108,lVar22 + 0xa8);
  plVar16 = (longlong *)FUN_14001cc68(0xa0,0x10);
  plVar16[1] = (longlong)&DAT_100000001;
  *plVar16 = (longlong)&PTR_FUN_14bd1e160;
  local_a8 = (code *)0x0;
  local_98 = (undefined8 *)0x0;
  local_98 = (undefined8 *)FUN_14001cc68(0x28,8);
  uVar17 = local_108;
  pcVar18 = local_118;
  local_118 = (code *)0x0;
  uVar12 = (int)uStack_110;
  uVar9 = uStack_110._4_4_;
  uStack_110 = (undefined1 *)0x0;
  local_108 = 0;
  uVar10 = (undefined4)uStack_100;
  uVar11 = uStack_100._4_4_;
  uStack_100 = 0;
  *local_98 = &PTR_FUN_14bd1e180;
  local_98[1] = pcVar18;
  *(undefined4 *)(local_98 + 2) = uVar12;
  *(undefined4 *)((longlong)local_98 + 0x14) = uVar9;
  local_98[3] = uVar17;
  *(undefined4 *)(local_98 + 4) = uVar10;
  *(undefined4 *)((longlong)local_98 + 0x24) = uVar11;
  if (local_98 + 1 != (undefined8 *)0x0) {
    local_a8 = FUN_14453319e;
  }
  pcVar18 = (code *)(plVar16 + 2);
  local_218 = (code **)CONCAT44(local_218._4_4_,0xffffffff);
  local_210 = &local_a8;
  FUN_14945fe70(pcVar18,local_1f0,4,local_1e8);
  local_a8 = pcVar18;
  uStack_a0 = (code *)plVar16;
  if (plVar16 == (longlong *)0x0) {
    FUN_1494a7e7c(uVar4,&local_a8);
  }
  else {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    FUN_1494a7e7c(uVar4,&local_a8);
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
  FUN_14452d54c(&local_118);
  uVar17 = FUN_145ba6e90();
  plVar16 = (longlong *)FUN_14001cc68(0xb0,0x10);
  plVar16[1] = (longlong)&DAT_100000001;
  *plVar16 = (longlong)&PTR_FUN_14bd1e1a0;
  pcVar18 = (code *)(plVar16 + 2);
  local_98 = (undefined8 *)0x0;
  ppuStack_88 = &PTR_LAB_14bd1e1c0;
  local_80 = (undefined1 *)local_148;
  uStack_78 = (undefined4)uStack_140;
  uStack_74 = uStack_140._4_4_;
  local_a8 = FUN_1445332b6;
  local_218 = &local_a8;
  FUN_149460a9c(pcVar18,local_130,uVar17,DAT_14cc1c5a8);
  local_a8 = pcVar18;
  uStack_a0 = (code *)plVar16;
  if (plVar16 == (longlong *)0x0) {
    FUN_1494a7e7c(uVar4,&local_a8);
  }
  else {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    FUN_1494a7e7c(uVar4,&local_a8);
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
  uVar17 = FUN_145ba6e90();
  plVar16 = (longlong *)FUN_14001cc68(0xb0,0x10);
  plVar16[1] = (longlong)&DAT_100000001;
  *plVar16 = (longlong)&PTR_FUN_14bd1e1a0;
  pcVar18 = (code *)(plVar16 + 2);
  local_98 = (undefined8 *)0x0;
  ppuStack_88 = &PTR_LAB_14bd1e1e0;
  local_80 = local_158;
  uStack_78 = (undefined4)uStack_150;
  uStack_74 = uStack_150._4_4_;
  local_a8 = FUN_14453334c;
  local_218 = &local_a8;
  FUN_149460a9c(pcVar18,local_130,uVar17,DAT_14cc1c5b0);
  local_a8 = pcVar18;
  uStack_a0 = (code *)plVar16;
  if (plVar16 == (longlong *)0x0) {
    FUN_1494a7e7c(uVar4,&local_a8);
  }
  else {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    FUN_1494a7e7c(uVar4,&local_a8);
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
  lVar22 = local_198;
  lVar14 = (longlong)(int)uStack_190;
  if (lVar14 != 0) {
    lVar15 = 0;
    do {
      FUN_1494c9d96(uVar4,local_130,*(longlong *)(lVar22 + lVar15),
                    *(undefined8 *)(*(longlong *)(lVar22 + lVar15) + 0x18));
      lVar15 = lVar15 + 8;
    } while (lVar14 * 8 != lVar15);
  }
  lVar22 = local_178;
  lVar14 = (longlong)(int)uStack_170;
  if (lVar14 != 0) {
    lVar15 = 0;
    do {
      lVar3 = *(longlong *)(lVar22 + lVar15);
      uVar4 = *(undefined8 *)(lVar3 + 0x18);
      plVar16 = (longlong *)FUN_14001cc68(0xc0,0x10);
      plVar16[1] = (longlong)&DAT_100000001;
      *plVar16 = (longlong)&PTR_FUN_14bd1e200;
      pcVar18 = (code *)(plVar16 + 2);
      local_98 = (undefined8 *)0x0;
      ppuStack_88 = &PTR_LAB_14bd1e220;
      local_80 = &LAB_1445333e2;
      local_a8 = (code *)&LAB_1494e3d56;
      local_218 = &local_a8;
      FUN_149461086(pcVar18,local_130,lVar3,uVar4);
      local_a8 = pcVar18;
      uStack_a0 = (code *)plVar16;
      if (plVar16 == (longlong *)0x0) {
        FUN_1494a7e7c(local_1f8,&local_a8);
      }
      else {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        FUN_1494a7e7c(local_1f8,&local_a8);
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
      lVar15 = lVar15 + 8;
    } while (lVar14 * 8 != lVar15);
  }
  uVar4 = local_1f8;
  if ((longlong)(int)uStack_1a0 != 0) {
    lVar14 = (longlong)(int)uStack_1a0 * 0x20 + local_1a8;
    lVar22 = local_1a8;
    do {
      FUN_1494cae26(uVar4,lVar22,lVar22 + 0x10);
      lVar22 = lVar22 + 0x20;
    } while (lVar22 != lVar14);
  }
  local_118 = (code *)0x100000000;
  local_108._0_4_ = 0xffffffff;
  local_108._4_4_ = 0;
  uStack_100 = uStack_100 & 0xffffffff00000000;
  uStack_110 = local_e8;
  if (local_d0 == 0) {
    iVar19 = 0;
  }
  else {
    FUN_1449c0562(&local_118);
    iVar19 = local_d0;
  }
  local_90._0_4_ = (uint)local_108;
  local_90._4_4_ = local_108._4_4_;
  ppuStack_88 = (undefined **)uStack_100;
  uStack_a0 = local_118;
  local_98 = (undefined8 *)uStack_110;
  local_a8 = (code *)local_f8;
  if ((local_108._4_4_ != iVar19) || (uStack_110 != local_e8)) {
    do {
      lVar22 = (longlong)*(int *)(*(longlong *)local_a8 + 0x18 + (longlong)local_90._4_4_ * 0x28);
      if (lVar22 != 0) {
        lVar14 = *(longlong *)local_a8 + (longlong)local_90._4_4_ * 0x28;
        lVar15 = *(longlong *)(lVar14 + 0x10);
        lVar22 = lVar22 << 4;
        do {
          FUN_1494caf0e(uVar4,lVar14,lVar15);
          lVar15 = lVar15 + 0x10;
          lVar22 = lVar22 + -0x10;
        } while (lVar22 != 0);
      }
      local_90._0_4_ = (uint)local_90 & ~uStack_a0._4_4_;
      FUN_1449c0562(&uStack_a0);
    } while (local_a8 != (code *)local_f8 ||
             (local_98 != (undefined8 *)local_e8 || local_90._4_4_ != iVar19));
  }
  FUN_141535be2(local_1a8,uStack_1a0 & 0xffffffff);
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (local_168 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_b0 = 0;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(local_f8);
  if (local_130[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494cad6a FUN_1494cad6a body=108 status=ok
// SIG undefined FUN_1494cad6a(void)

undefined8 FUN_1494cad6a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449b8608(local_30,param_2,&DAT_149e065c6);
  FUN_144a7dea0(param_1,local_30,param_3);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cadd8 FUN_1494cadd8 body=77 status=ok
// SIG undefined FUN_1494cadd8(void)

undefined8 * FUN_1494cadd8(undefined8 *param_1,undefined8 *param_2)

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
    FUN_149482bea(param_1,iVar1,0);
    FUN_149482c4c(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1494cae26 FUN_1494cae26 body=210 status=ok
// SIG undefined FUN_1494cae26(void)

void FUN_1494cae26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14bd1e240;
  puVar1 = puVar3 + 2;
  FUN_149461a1e(puVar1,param_2,param_3);
  local_40 = puVar1;
  local_38 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    FUN_1494a7e7c(param_1,&local_40);
  }
  else {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    FUN_1494a7e7c(param_1,&local_40);
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar2 = (int *)((longlong)puVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494caf0e FUN_1494caf0e body=213 status=ok
// SIG undefined FUN_1494caf0e(void)

void FUN_1494caf0e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14bd1e260;
  puVar1 = puVar3 + 2;
  FUN_1494623ae(puVar1,param_2,param_3,0);
  local_40 = puVar1;
  local_38 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    FUN_1494a7e7c(param_1,&local_40);
  }
  else {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    FUN_1494a7e7c(param_1,&local_40);
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar2 = (int *)((longlong)puVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494caffa FUN_1494caffa body=214 status=ok
// SIG undefined FUN_1494caffa(void)

longlong * FUN_1494caffa(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x68,0x10);
  FUN_1494e3df8(plVar5,param_3,param_4);
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
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
    FUN_14947b622((longlong *)(param_1 + 0x18),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  *param_2 = (longlong)(plVar5 + 2);
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
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
  return param_2;
}



// FUNCTION 1494cb0d0 FUN_1494cb0d0 body=1087 status=ok
// SIG undefined FUN_1494cb0d0(void)

ulonglong FUN_1494cb0d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_168 [40];
  longlong *local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar7 = 0;
  if (*(int *)(param_2 + 8) == 0) goto LAB_1494cb105;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1494c9ba8(param_2,&local_e8);
  lVar1 = local_e8;
  lVar10 = (longlong)(int)uStack_e0;
  if (lVar10 == 0) {
    iVar2 = 0;
  }
  else {
    uVar7 = 0;
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar8) == 0) goto LAB_1494cb463;
      lVar9 = *(longlong *)(*(longlong *)(lVar1 + lVar8) + 0x20);
      if (lVar9 == 0) {
LAB_1494cb1b8:
        lVar9 = 0;
      }
      else {
        lVar4 = FUN_141155906();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_1494cb1b8;
      }
      if (lVar9 != param_1) goto LAB_1494cb463;
      lVar8 = lVar8 + 8;
    } while (lVar10 * 8 != lVar8);
    iVar2 = (int)uStack_e0;
  }
  lVar1 = local_e8;
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if (iVar2 == 0) {
    uVar7 = 0;
LAB_1494cb22a:
    FUN_140002266(local_118,L"Remove %d Nodes",uVar7);
  }
  else {
    lVar10 = 0;
    do {
      FUN_1494cd0aa(param_1,&local_140,*(undefined8 *)(lVar1 + lVar10),0);
      FUN_14580f1b6(local_b8,&local_140);
      if (local_140 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar2 * 8 != lVar10);
    uVar7 = uStack_e0 & 0xffffffff;
    if ((int)uStack_e0 != 1) goto LAB_1494cb22a;
    FUN_140056680(local_118,L"Remove Node");
  }
  uVar5 = FUN_1494c9ad6(param_1);
  FUN_1494a80f4(uVar5,local_118);
  local_d8 = 0x100000000;
  local_c8 = 0xffffffff;
  local_c0 = 0;
  iVar2 = 0;
  local_d0 = local_a8;
  if (local_90 != 0) {
    FUN_1449c0562(&local_d8);
    iVar2 = local_90;
  }
  local_128 = local_c8;
  uVar6 = local_128;
  local_120 = local_c0;
  local_11c = local_bc;
  local_138 = local_d8;
  local_130 = local_d0;
  local_128._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
  local_140 = local_b8;
  if ((local_128._4_4_ != iVar2) || (local_d0 != local_a8)) {
    iVar3 = local_128._4_4_;
    local_128 = uVar6;
    do {
      iVar3 = *(int *)(*local_140 + (longlong)iVar3 * 0xc);
      uVar6 = FUN_1494c9ad6(param_1);
      FUN_1494cb510(uVar6,(longlong)iVar3 * 8 + *(longlong *)(param_1 + 0x48));
      local_128 = CONCAT44(local_128._4_4_,(uint)local_128 & ~local_138._4_4_);
      FUN_1449c0562(&local_138);
      iVar3 = local_128._4_4_;
      uVar6 = local_128;
    } while (local_140 != local_b8 || (local_130 != local_a8 || local_128._4_4_ != iVar2));
  }
  local_128 = uVar6;
  lVar1 = local_f8;
  lVar10 = (longlong)(int)uStack_f0;
  if (lVar10 != 0) {
    lVar8 = 0;
    do {
      local_140 = *(longlong **)(lVar1 + lVar8);
      uVar6 = FUN_1494c9ad6(param_1);
      FUN_1494cb5ec(uVar6,&local_140);
      lVar8 = lVar8 + 8;
    } while (lVar10 * 8 != lVar8);
  }
  lVar1 = local_e8;
  lVar10 = (longlong)(int)uStack_e0;
  if (lVar10 != 0) {
    lVar8 = 0;
    do {
      local_140 = *(longlong **)(lVar1 + lVar8);
      uVar6 = FUN_1494c9ad6(param_1);
      FUN_1494cb6c8(uVar6,&local_140);
      lVar8 = lVar8 + 8;
    } while (lVar10 * 8 != lVar8);
  }
  lVar1 = local_108;
  lVar10 = (longlong)(int)uStack_100;
  if (lVar10 != 0) {
    lVar8 = 0;
    do {
      FUN_1494cb7a4(param_1,*(undefined8 *)(lVar1 + lVar8));
      lVar8 = lVar8 + 8;
    } while (lVar10 * 8 != lVar8);
  }
  uVar7 = uStack_e0 & 0xffffffff;
  FUN_1494a81c6(uVar5);
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_b8);
LAB_1494cb463:
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
LAB_1494cb105:
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cb510 FUN_1494cb510 body=200 status=ok
// SIG undefined FUN_1494cb510(void)

void FUN_1494cb510(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14bd1dc50;
  puVar1 = puVar3 + 2;
  FUN_1494623de(puVar1,*param_2);
  local_38 = puVar1;
  local_30 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    FUN_1494a7e7c(param_1,&local_38);
  }
  else {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    FUN_1494a7e7c(param_1,&local_38);
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar2 = (int *)((longlong)puVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cb5ec FUN_1494cb5ec body=200 status=ok
// SIG undefined FUN_1494cb5ec(void)

void FUN_1494cb5ec(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14bd1e3a0;
  puVar1 = puVar3 + 2;
  FUN_149461f06(puVar1,*param_2);
  local_38 = puVar1;
  local_30 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    FUN_1494a7e7c(param_1,&local_38);
  }
  else {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    FUN_1494a7e7c(param_1,&local_38);
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar2 = (int *)((longlong)puVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cb6c8 FUN_1494cb6c8 body=200 status=ok
// SIG undefined FUN_1494cb6c8(void)

void FUN_1494cb6c8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14bd1e3c0;
  puVar1 = puVar3 + 2;
  FUN_149461654(puVar1,*param_2);
  local_38 = puVar1;
  local_30 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    FUN_1494a7e7c(param_1,&local_38);
  }
  else {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    FUN_1494a7e7c(param_1,&local_38);
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar2 = (int *)((longlong)puVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cb7a4 FUN_1494cb7a4 body=173 status=ok
// SIG undefined FUN_1494cb7a4(void)

void FUN_1494cb7a4(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_2;
  if (param_2 != 0) {
    FUN_140056680(local_40,L"Remove Graph");
    uVar1 = FUN_1494c9ad6(param_1);
    FUN_1494a80f4(uVar1,local_40);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1494cb0d0(param_2,param_2 + 0x38);
    uVar2 = FUN_1494c9ad6(param_1);
    FUN_1494ac504(uVar2,&local_30);
    FUN_1494a81c6(uVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cb852 FUN_1494cb852 body=220 status=ok
// SIG undefined FUN_1494cb852(void)

void FUN_1494cb852(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14bd1e260;
  puVar1 = puVar3 + 2;
  FUN_1494623ae(puVar1,param_2,param_3,*param_4);
  local_48 = puVar1;
  local_40 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    FUN_1494a7e7c(param_1,&local_48);
  }
  else {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    FUN_1494a7e7c(param_1,&local_48);
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar2 = (int *)((longlong)puVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cb946 FUN_1494cb946 body=135 status=ok
// SIG undefined FUN_1494cb946(void)

longlong * FUN_1494cb946(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_1 + 0x50);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar3 * 8);
      if (*(char *)(param_3 + 0x29) == '\x02') {
        lVar1 = *(longlong *)(lVar1 + 0x28);
joined_r0x0001494cb98c:
        if (lVar1 == param_3) {
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1446f48e2(param_2,iVar2);
          }
          *(int *)(*param_2 + (longlong)iVar2 * 4) = (int)lVar3;
          iVar2 = *(int *)(param_1 + 0x50);
        }
      }
      else if (*(char *)(param_3 + 0x29) == '\x01') {
        lVar1 = *(longlong *)(lVar1 + 0x30);
        goto joined_r0x0001494cb98c;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return param_2;
}



// FUNCTION 1494cb9ce FUN_1494cb9ce body=235 status=ok
// SIG undefined FUN_1494cb9ce(void)

longlong * FUN_1494cb9ce(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bd1dc50;
  plVar1 = plVar6 + 2;
  FUN_1494623de(plVar1,*param_3);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
    FUN_14947b622((longlong *)(param_1 + 0x18),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar1;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar6;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_2;
}



// FUNCTION 1494cbaba FUN_1494cbaba body=201 status=ok
// SIG undefined FUN_1494cbaba(void)

undefined4 FUN_1494cbaba(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14bd1dc50;
  plVar1 = plVar4 + 2;
  FUN_1494623de(plVar1,*param_2);
  local_38 = plVar1;
  local_30 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    uVar3 = FUN_1494a7e7c(param_1,&local_38);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    uVar3 = FUN_1494a7e7c(param_1,&local_38);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cbb84 FUN_1494cbb84 body=139 status=ok
// SIG undefined FUN_1494cbb84(void)

void FUN_1494cbb84(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,L"Remove %d Links",*param_2);
  if ((longlong *)(param_1 + 8) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 8) = local_28;
    *(undefined4 *)(param_1 + 0x10) = local_20;
    *(undefined4 *)(param_1 + 0x14) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cbc10 FUN_1494cbc10 body=235 status=ok
// SIG undefined FUN_1494cbc10(void)

longlong * FUN_1494cbc10(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bd1dc50;
  plVar1 = plVar6 + 2;
  FUN_1494623de(plVar1,*param_3);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
    FUN_14947b622((longlong *)(param_1 + 0x18),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar1;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar6;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_2;
}



// FUNCTION 1494cbcfc FUN_1494cbcfc body=235 status=ok
// SIG undefined FUN_1494cbcfc(void)

longlong * FUN_1494cbcfc(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bd1e3c0;
  plVar1 = plVar6 + 2;
  FUN_149461654(plVar1,*param_3);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
    FUN_14947b622((longlong *)(param_1 + 0x18),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar1;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar6;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_2;
}



// FUNCTION 1494cbde8 FUN_1494cbde8 body=244 status=ok
// SIG undefined FUN_1494cbde8(void)

longlong * FUN_1494cbde8(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bd1e260;
  plVar1 = plVar6 + 2;
  FUN_1494623ae(plVar1,param_3,param_4,0);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
    FUN_14947b622((longlong *)(param_1 + 0x18),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar1;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar6;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_2;
}



// FUNCTION 1494cbedc FUN_1494cbedc body=235 status=ok
// SIG undefined FUN_1494cbedc(void)

longlong * FUN_1494cbedc(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bd1e3c0;
  plVar1 = plVar6 + 2;
  FUN_149461654(plVar1,*param_3);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
    FUN_14947b622((longlong *)(param_1 + 0x18),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar1;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar6;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_2;
}



// FUNCTION 1494cbfc8 FUN_1494cbfc8 body=107 status=ok
// SIG undefined FUN_1494cbfc8(void)

undefined8 FUN_1494cbfc8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(param_1 + 0x28,local_30);
  FUN_1494cad6a(param_2,local_30,param_3);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cc034 FUN_1494cc034 body=213 status=ok
// SIG undefined FUN_1494cc034(void)

void FUN_1494cc034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14bd1e260;
  puVar1 = puVar3 + 2;
  FUN_1494623ae(puVar1,param_2,param_3,0);
  local_40 = puVar1;
  local_38 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    FUN_1494a7e7c(param_1,&local_40);
  }
  else {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    FUN_1494a7e7c(param_1,&local_40);
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar2 = (int *)((longlong)puVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cc120 FUN_1494cc120 body=210 status=ok
// SIG undefined FUN_1494cc120(void)

void FUN_1494cc120(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14bd1e0c0;
  puVar1 = puVar3 + 2;
  FUN_14945eb9a(puVar1,*param_2,param_3);
  local_40 = puVar1;
  local_38 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    FUN_1494a7e7c(param_1,&local_40);
  }
  else {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    FUN_1494a7e7c(param_1,&local_40);
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar2 = (int *)((longlong)puVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cc208 FUN_1494cc208 body=196 status=ok
// SIG undefined FUN_1494cc208(void)

undefined8 FUN_1494cc208(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cc2ce FUN_1494cc2ce body=286 status=ok
// SIG undefined FUN_1494cc2ce(void)

void FUN_1494cc2ce(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (longlong *)0x0) {
    lVar2 = param_2[4];
    if (lVar2 != param_1) {
      if (lVar2 != 0) {
        lVar3 = FUN_141155906();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          FUN_1494cd0aa(lVar2,&local_38,param_2,0);
          if (local_38 != 0) {
            FUN_1400020a8();
          }
          if (local_30 != 0) goto LAB_1494cc2eb;
        }
      }
      (**(code **)(*param_2 + 0x170))(param_2,0,param_1,0x34);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
      FUN_1494e52a8((longlong *)(param_1 + 0x38),iVar1);
    }
    *(longlong **)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    FUN_1494bdf80(param_1,0,param_2);
    FUN_14282b7b8(param_2);
  }
LAB_1494cc2eb:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cc3ee FUN_1494cc3ee body=132 status=ok
// SIG undefined FUN_1494cc3ee(void)

void FUN_1494cc3ee(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    FUN_1494cd0aa(param_1,&local_28,param_2,0);
    if (0 < (longlong)local_20) {
      uVar1 = (longlong)local_20 + 1;
      do {
        FUN_1494cc836(param_1,*(undefined4 *)(local_28 + -8 + uVar1 * 4));
        uVar1 = uVar1 - 1;
      } while (1 < uVar1);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cc474 FUN_1494cc474 body=334 status=ok
// SIG undefined FUN_1494cc474(void)

undefined8 FUN_1494cc474(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (param_2 != 0) {
    uVar3 = FUN_145a96850();
    lVar4 = FUN_144718840(param_2,uVar3);
    if (param_3 == 0) {
      return 0;
    }
    if (lVar4 == 0) {
      return 0;
    }
    uVar3 = FUN_145a96850();
    lVar4 = FUN_144718840(param_3,uVar3);
    if (lVar4 != 0) {
      lVar4 = FUN_1494cc5c2(param_1);
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      bVar2 = DAT_14c950c29;
      *(longlong *)(lVar4 + 0x28) = param_2;
      if ((bVar2 & 1) != 0) {
        FUN_1456cec3c(param_3);
        bVar2 = DAT_14c950c29;
      }
      *(longlong *)(lVar4 + 0x30) = param_3;
      if ((lVar4 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c(lVar4);
      }
      iVar1 = *(int *)(param_1 + 0x60);
      *(uint *)(param_1 + 0x60) = iVar1 + 1U;
      if (*(uint *)(param_1 + 100) < iVar1 + 1U) {
        FUN_1494e53ca((longlong *)(param_1 + 0x58),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = lVar4;
      if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar4);
      }
      uVar3 = FUN_145a96850();
      plVar5 = (longlong *)FUN_144718840(param_2,uVar3);
      uVar3 = FUN_145a96850();
      plVar6 = (longlong *)FUN_144718840(param_3,uVar3);
      (**(code **)(*plVar5 + 0x10))(plVar5,plVar6);
      (**(code **)(*plVar6 + 0x10))(plVar6,plVar5);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1494cc5c2 FUN_1494cc5c2 body=148 status=ok
// SIG undefined FUN_1494cc5c2(void)

undefined8 FUN_1494cc5c2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459d97e6();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cc658 FUN_1494cc658 body=146 status=ok
// SIG undefined FUN_1494cc658(void)

undefined8 FUN_1494cc658(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    uVar2 = FUN_145a96850();
    lVar3 = FUN_144718840(param_2,uVar2);
    if (param_3 == 0) {
      return 0;
    }
    if (lVar3 == 0) {
      return 0;
    }
    uVar2 = FUN_145a96850();
    lVar3 = FUN_144718840(param_3,uVar2);
    if ((lVar3 != 0) && (0 < *(int *)(param_1 + 0x60))) {
      uVar4 = 0;
      do {
        cVar1 = FUN_1494e6342(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + uVar4 * 8),param_2,
                              param_3);
        if (cVar1 != '\0') {
          FUN_1494cc6ea(param_1,uVar4 & 0xffffffff);
          return 1;
        }
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x60));
    }
  }
  return 0;
}



// FUNCTION 1494cc6ea FUN_1494cc6ea body=90 status=ok
// SIG undefined FUN_1494cc6ea(void)

void FUN_1494cc6ea(longlong param_1,uint param_2)

{
  void *_Dst;
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)(int)param_2 * 8);
  iVar2 = *(int *)(param_1 + 0x60);
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x58) + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar2) << 3);
    iVar2 = *(int *)(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x60) = iVar2 + -1;
  FUN_1494e59e2(param_1 + 0x58);
  FUN_1494acfa0(uVar1);
  return;
}



// FUNCTION 1494cc744 FUN_1494cc744 body=148 status=ok
// SIG undefined FUN_1494cc744(void)

undefined8 FUN_1494cc744(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459d9702();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cc7da FUN_1494cc7da body=92 status=ok
// SIG undefined FUN_1494cc7da(void)

undefined8 FUN_1494cc7da(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((((param_3 != 0 && param_2 != 0) && (*(char *)(param_2 + 0x29) == '\x02')) &&
      (*(char *)(param_3 + 0x29) == '\x01')) && (0 < (longlong)*(int *)(param_1 + 0x50))) {
    uVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + uVar2 * 8);
      if ((*(longlong *)(lVar1 + 0x28) == param_2) && (*(longlong *)(lVar1 + 0x30) == param_3)) {
        FUN_1494cc836(param_1,uVar2 & 0xffffffff);
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while ((longlong)*(int *)(param_1 + 0x50) != uVar2);
  }
  return 0;
}



// FUNCTION 1494cc836 FUN_1494cc836 body=106 status=ok
// SIG undefined FUN_1494cc836(void)

void FUN_1494cc836(longlong param_1,uint param_2)

{
  void *_Dst;
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)param_2 * 8);
  iVar2 = *(int *)(param_1 + 0x50);
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar2) << 3);
    iVar2 = *(int *)(param_1 + 0x50);
  }
  *(int *)(param_1 + 0x50) = iVar2 + -1;
  FUN_1494e5a7e(param_1 + 0x48);
  FUN_1494bdf80(param_1,6,uVar1);
  FUN_1494acfa0(uVar1);
  return;
}



// FUNCTION 1494cc8a0 FUN_1494cc8a0 body=707 status=ok
// SIG undefined FUN_1494cc8a0(void)

longlong * FUN_1494cc8a0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  int local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *local_c8 = 0;
  local_c8[1] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0x400000000;
  local_c0 = local_c8;
  local_80 = param_3;
  FUN_149499536(local_78,param_4);
  FUN_1494ccb64(&local_c8,&local_80);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  local_80 = 0;
  local_58 = (undefined8 *)0x0;
  local_50 = 0x400000000;
  cVar5 = FUN_1494ccbe4(&local_c8);
  if (cVar5 != '\0') {
    do {
      FUN_1494e7262(local_80,&local_d8);
      lVar4 = local_d8;
      lVar12 = (longlong)local_d0;
      if (lVar12 != 0) {
        lVar11 = 0;
        do {
          lVar2 = *(longlong *)(lVar4 + lVar11);
          if (lVar2 != 0) {
            lVar6 = FUN_1494e64f0(lVar2);
            if (lVar6 == 0) {
LAB_1494cca14:
              local_b8 = lVar2;
              FUN_149499536(&local_b0,local_78);
              iVar1 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar1 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
                FUN_1494e54d6(param_2,iVar1);
              }
              lVar6 = *param_2;
              lVar10 = (longlong)iVar1 * 0x38;
              lVar2 = lVar6 + lVar10;
              *(longlong *)(lVar6 + lVar10) = local_b8;
              *(undefined8 *)(lVar6 + 0x28 + lVar10) = 0;
              if (local_90 == 0) {
                *(undefined8 *)(lVar2 + 0x18) = local_a0;
                *(undefined8 *)(lVar2 + 0x20) = uStack_98;
                *(undefined4 *)(lVar2 + 8) = local_b0;
                *(undefined4 *)(lVar2 + 0xc) = uStack_ac;
                *(undefined4 *)(lVar2 + 0x10) = uStack_a8;
                *(undefined4 *)(lVar2 + 0x14) = uStack_a4;
              }
              *(longlong *)(lVar2 + 0x28) = local_90;
              local_90 = 0;
              *(undefined4 *)(lVar2 + 0x30) = (undefined4)local_88;
              *(undefined4 *)(lVar2 + 0x34) = local_88._4_4_;
              local_88 = 0x400000000;
            }
            else {
              uVar7 = FUN_14599ba6c();
              plVar8 = (longlong *)FUN_144718840(lVar6,uVar7);
              if (plVar8 == (longlong *)0x0) goto LAB_1494cca14;
              (**(code **)(*plVar8 + 0x10))(plVar8,&local_b8,lVar2,local_78);
              if (local_b8 != 0) {
                FUN_1494ccc82(&local_c8,&local_b8);
              }
            }
            if (local_90 != 0) {
              FUN_1400020a8();
            }
          }
          lVar11 = lVar11 + 8;
        } while (lVar12 * 8 != lVar11);
      }
      if (local_d8 != 0) {
        FUN_1400020a8(local_d8);
      }
      cVar5 = FUN_1494ccbe4(&local_c8,&local_80);
    } while (cVar5 != '\0');
  }
  puVar9 = local_58;
  if (local_58 == (undefined8 *)0x0) goto LAB_1494ccb0e;
  while( true ) {
    FUN_1400020a8(puVar9);
LAB_1494ccb0e:
    puVar9 = local_c0;
    if (local_c0 == (undefined8 *)0x0) break;
    puVar3 = (undefined8 *)*local_c0;
    plVar8 = local_c0 + 6;
    local_c0 = puVar3;
    if (*plVar8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494ccb64 FUN_1494ccb64 body=128 status=ok
// SIG undefined FUN_1494ccb64(void)

void FUN_1494ccb64(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar6 = 0;
  puVar6[1] = *param_2;
  lVar1 = param_2[5];
  if (lVar1 == 0) {
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[4];
    puVar6[4] = param_2[3];
    puVar6[5] = uVar5;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
  }
  puVar6[6] = lVar1;
  param_2[5] = 0;
  *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)puVar6 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[6] = 0x400000000;
  if (puVar6 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    *param_1 = puVar6;
    *puVar2 = puVar6;
  }
  return;
}



// FUNCTION 1494ccbe4 FUN_1494ccbe4 body=157 status=ok
// SIG undefined FUN_1494ccbe4(void)

bool FUN_1494ccbe4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    *param_2 = *(undefined8 *)(lVar1 + 8);
    FUN_1494d2960(param_2 + 1,lVar1 + 0x10);
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    if (*(longlong *)(lVar1 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0x400000000;
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x30) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar2);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 1494ccc82 FUN_1494ccc82 body=86 status=ok
// SIG undefined FUN_1494ccc82(void)

void FUN_1494ccc82(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar2 = 0;
  puVar2[1] = *param_2;
  FUN_149499536(puVar2 + 2,param_2 + 1);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    *param_1 = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 1494cccd8 FUN_1494cccd8 body=392 status=ok
// SIG undefined FUN_1494cccd8(void)

undefined8 * FUN_1494cccd8(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90 [8];
  longlong local_70;
  longlong local_60;
  undefined1 local_58 [32];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = FUN_1494e64f0(param_2);
  if (*(char *)(param_2 + 0x29) == '\x02') {
    if (lVar1 != 0) {
      uVar2 = FUN_14599ba6c();
      plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
      if (plVar3 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,&local_98,param_2,param_3);
        local_38 = local_70;
        goto joined_r0x0001494cce3b;
      }
    }
    local_60 = param_2;
    FUN_149499536(local_58,param_3);
    local_a8 = &local_60;
    local_a0 = &local_28;
    FUN_1494cce62(param_1);
  }
  else {
    local_98 = param_2;
    uVar4 = FUN_149499536(local_90,param_3);
    local_38 = local_70;
joined_r0x0001494cce3b:
    if (local_38 == 0) {
      uVar4 = local_90[0];
    }
    local_60 = local_98;
    if (local_98 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      FUN_1494cc8a0(uVar4,param_1,local_98,local_58);
    }
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1494cce62 FUN_1494cce62 body=88 status=ok
// SIG undefined FUN_1494cce62(void)

undefined8 * FUN_1494cce62(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  iVar2 = (int)((ulonglong)(param_2[1] - lVar1) >> 3) * -0x49249249;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1494e5566(param_1,iVar2);
    FUN_1494e55c8(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 1494cceba FUN_1494cceba body=128 status=ok
// SIG undefined FUN_1494cceba(void)

void FUN_1494cceba(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar6 = 0;
  puVar6[1] = *param_2;
  lVar1 = param_2[5];
  if (lVar1 == 0) {
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[4];
    puVar6[4] = param_2[3];
    puVar6[5] = uVar5;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
  }
  puVar6[6] = lVar1;
  param_2[5] = 0;
  *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)puVar6 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[6] = 0x400000000;
  if (puVar6 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    *param_1 = puVar6;
    *puVar2 = puVar6;
  }
  return;
}



// FUNCTION 1494ccf3a FUN_1494ccf3a body=157 status=ok
// SIG undefined FUN_1494ccf3a(void)

bool FUN_1494ccf3a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    *param_2 = *(undefined8 *)(lVar1 + 8);
    FUN_1494d2960(param_2 + 1,lVar1 + 0x10);
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    if (*(longlong *)(lVar1 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0x400000000;
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x30) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar2);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 1494ccfd8 FUN_1494ccfd8 body=86 status=ok
// SIG undefined FUN_1494ccfd8(void)

void FUN_1494ccfd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar2 = 0;
  puVar2[1] = *param_2;
  FUN_149499536(puVar2 + 2,param_2 + 1);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    *param_1 = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 1494cd02e FUN_1494cd02e body=123 status=ok
// SIG undefined FUN_1494cd02e(void)

undefined8 * FUN_1494cd02e(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1494e5950();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1494cd0aa FUN_1494cd0aa body=165 status=ok
// SIG undefined FUN_1494cd0aa(void)

longlong * FUN_1494cd0aa(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar4 * 8);
      if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x28) != 0)) &&
         (((lVar2 = FUN_1494e64f0(), param_4 != '\x01' && (lVar2 == param_3)) ||
          ((lVar3 = FUN_1494e64f0(*(undefined8 *)(lVar3 + 0x30)), param_4 != '\x02' &&
           (lVar3 == param_3)))))) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_2,iVar1);
        }
        *(int *)(*param_2 + (longlong)iVar1 * 4) = (int)lVar4;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x50));
  }
  return param_2;
}



// FUNCTION 1494cd150 FUN_1494cd150 body=105 status=ok
// SIG undefined FUN_1494cd150(void)

void FUN_1494cd150(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    if (lVar2 != 0) {
      lVar3 = FUN_1458f36a4();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_1494ac882(lVar2,param_2,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1494cd1ba FUN_1494cd1ba body=43 status=ok
// SIG undefined FUN_1494cd1ba(void)

undefined8 FUN_1494cd1ba(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + -8);
  if (lVar1 != 0) {
    uVar2 = FUN_1459f70be();
    uVar2 = FUN_144718840(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1494cd1e6 FUN_1494cd1e6 body=51 status=ok
// SIG undefined FUN_1494cd1e6(void)

undefined8 FUN_1494cd1e6(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001494cd20d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1494cd21a FUN_1494cd21a body=254 status=ok
// SIG undefined FUN_1494cd21a(void)

undefined8 FUN_1494cd21a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_40);
    if (1 < local_38) {
      local_60[0] = param_1[-2];
      FUN_1400021e4(local_60,local_50);
      FUN_1449b8608(local_60,&local_40,&DAT_149e065c6);
      FUN_1401c7f3e(param_2,local_60,local_50);
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (1 < local_38) goto LAB_1494cd28f;
  }
  local_40 = param_1[-2];
  FUN_1400021e4(&local_40,param_2);
LAB_1494cd28f:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cd31a FUN_1494cd31a body=60 status=ok
// SIG undefined FUN_1494cd31a(void)

longlong FUN_1494cd31a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x28))();
  if ((longlong)(int)plVar1[1] != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(*plVar1 + lVar2) + 0x18) == param_2) {
        return *(longlong *)(*plVar1 + lVar2);
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)(int)plVar1[1] * 8 != lVar2);
  }
  return 0;
}



// FUNCTION 1494cd356 FUN_1494cd356 body=196 status=ok
// SIG undefined FUN_1494cd356(void)

undefined8 FUN_1494cd356(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cd41c FUN_1494cd41c body=161 status=ok
// SIG undefined FUN_1494cd41c(void)

undefined8 FUN_1494cd41c(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x30) != 4)) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x48);
    if (param_3 != -1) {
      if (param_3 < iVar2) {
        iVar2 = param_3;
      }
      if (iVar2 < 1) {
        iVar2 = 0;
      }
    }
    local_30 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    FUN_1494b2106(param_1 + 0x40,&local_30,iVar2);
    FUN_1494cd150(param_1 + -0x28,0,param_2);
    uVar1 = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cd4be FUN_1494cd4be body=202 status=ok
// SIG undefined FUN_1494cd4be(void)

ulonglong FUN_1494cd4be(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    iVar3 = 1;
    lVar6 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == param_2) {
        if ((iVar3 != 0) && (*(int *)(param_2 + 0x30) != 1)) {
          if (iVar2 - iVar3 != 0) {
            memmove((void *)(lVar1 + (lVar5 >> 0x20) * 8),(void *)(lVar1 + (lVar5 >> 0x20) * 8 + 8),
                    (longlong)(iVar2 - iVar3) << 3);
            iVar2 = *(int *)(param_1 + 0x48);
          }
          *(int *)(param_1 + 0x48) = iVar2 + -1;
          FUN_1494de2dc(param_1 + 0x40);
          FUN_1494cd150(param_1 + -0x28,1,param_2);
          uVar4 = CONCAT71((int7)((ulonglong)(param_1 + -0x28) >> 8),1);
          if (param_3 != '\0') {
            FUN_1494acfa0(param_2);
          }
          goto LAB_1494cd519;
        }
        break;
      }
      lVar5 = lVar5 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  uVar4 = 0;
LAB_1494cd519:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1494cd58c FUN_1494cd58c body=251 status=ok
// SIG undefined FUN_1494cd58c(void)

undefined4 FUN_1494cd58c(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  
  if (*(int *)(param_3 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_3;
  }
  uVar3 = (**(code **)(*param_2 + 0x170))(param_2,puVar7,0,0x34);
  if ((char)uVar3 != '\0') {
    if (((int)param_2[6] == 4) && (iVar1 = *(int *)(param_1 + 0x18), (longlong)iVar1 != 0)) {
      lVar6 = *(longlong *)(param_1 + 0x10);
      lVar8 = 0;
      do {
        lVar2 = *(longlong *)(lVar6 + lVar8);
        if (lVar2 != 0) {
          lVar4 = FUN_145ba7238();
          if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
             (plVar5 = (longlong *)(**(code **)(*(longlong *)(lVar2 + 0x118) + 0x10))(lVar2 + 0x118)
             , plVar5 == param_2)) {
            lVar6 = FUN_14479d2ce(lVar2 + 0x130);
            *(undefined8 *)(lVar2 + 0x120) = *(undefined8 *)(lVar6 + 0x18);
            FUN_1494bdf80(param_1 + -0x28,2,lVar2);
            break;
          }
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
    }
    FUN_1494cd150(param_1 + -0x28,3,param_2);
  }
  return uVar3;
}



// FUNCTION 1494cd688 FUN_1494cd688 body=192 status=ok
// SIG undefined FUN_1494cd688(void)

undefined8 FUN_1494cd688(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar3) == param_2) {
        if (((int)(~uVar3 >> 3) != 0) && (cVar1 = FUN_1494ac222(param_3), cVar1 != '\0')) {
          uVar2 = FUN_1494c9ad6(param_1 + -0x28);
          if (*(int *)(param_3 + 1) == 0) {
            puVar4 = &DAT_149dfb77a;
          }
          else {
            puVar4 = (undefined2 *)*param_3;
          }
          FUN_1446f470e(local_28,puVar4,1);
          uVar2 = FUN_1494b262c(uVar2,&local_20,local_28);
          goto LAB_1494cd6dd;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x48) * 8 != uVar3);
  }
  uVar2 = 0;
LAB_1494cd6dd:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1494cd756 FUN_1494cd756 body=32 status=ok
// SIG undefined FUN_1494cd756(void)

undefined8 FUN_1494cd756(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"LoopTerminal");
  return param_2;
}



// FUNCTION 1494cd77a FUN_1494cd77a body=29 status=ok
// SIG undefined FUN_1494cd77a(void)

undefined8 FUN_1494cd77a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cd7a0 FUN_1494cd7a0 body=29 status=ok
// SIG undefined FUN_1494cd7a0(void)

undefined8 FUN_1494cd7a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cd7be FUN_1494cd7be body=54 status=ok
// SIG undefined FUN_1494cd7be(void)

undefined8 * FUN_1494cd7be(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusComputeDataInterface.h"
                ,0x97,L"Pure virtual not implemented (%s)",
                L"UOptimusComputeDataInterface::GetDisplayName");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1494cd820 FUN_1494cd820 body=45 status=ok
// SIG undefined FUN_1494cd820(void)

longlong FUN_1494cd820(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x80;
  FUN_145d31adc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cd854 FUN_1494cd854 body=124 status=ok
// SIG undefined FUN_1494cd854(void)

void FUN_1494cd854(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(longlong *)(param_1 + 0x20) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001494cd8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1494cd8d0 FUN_1494cd8d0 body=45 status=ok
// SIG undefined FUN_1494cd8d0(void)

longlong FUN_1494cd8d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x80;
  FUN_145d31b72(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cd904 FUN_1494cd904 body=124 status=ok
// SIG undefined FUN_1494cd904(void)

void FUN_1494cd904(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(longlong *)(param_1 + 0x18) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001494cd974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1494cd980 FUN_1494cd980 body=57 status=ok
// SIG undefined FUN_1494cd980(void)

undefined8 * FUN_1494cd980(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd02040;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cd9ba FUN_1494cd9ba body=38 status=ok
// SIG undefined FUN_1494cd9ba(void)

undefined8 FUN_1494cd9ba(undefined8 param_1,int param_2)

{
  FUN_1494e61da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cd9e0 FUN_1494cd9e0 body=38 status=ok
// SIG undefined FUN_1494cd9e0(void)

undefined8 FUN_1494cd9e0(undefined8 param_1,int param_2)

{
  FUN_1494e6230();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cda12 FUN_1494cda12 body=29 status=ok
// SIG undefined FUN_1494cda12(void)

undefined8 FUN_1494cda12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cda38 FUN_1494cda38 body=29 status=ok
// SIG undefined FUN_1494cda38(void)

undefined8 FUN_1494cda38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cda62 FUN_1494cda62 body=29 status=ok
// SIG undefined FUN_1494cda62(void)

undefined8 FUN_1494cda62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cda94 FUN_1494cda94 body=45 status=ok
// SIG undefined FUN_1494cda94(void)

longlong FUN_1494cda94(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cdac8 FUN_1494cdac8 body=29 status=ok
// SIG undefined FUN_1494cdac8(void)

undefined8 FUN_1494cdac8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cdaf2 FUN_1494cdaf2 body=45 status=ok
// SIG undefined FUN_1494cdaf2(void)

longlong FUN_1494cdaf2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cdb26 FUN_1494cdb26 body=29 status=ok
// SIG undefined FUN_1494cdb26(void)

undefined8 FUN_1494cdb26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cdb44 FUN_1494cdb44 body=29 status=ok
// SIG undefined FUN_1494cdb44(void)

undefined8 FUN_1494cdb44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cdb6e FUN_1494cdb6e body=45 status=ok
// SIG undefined FUN_1494cdb6e(void)

longlong FUN_1494cdb6e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cdba2 FUN_1494cdba2 body=29 status=ok
// SIG undefined FUN_1494cdba2(void)

undefined8 FUN_1494cdba2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cdbd4 FUN_1494cdbd4 body=48 status=ok
// SIG undefined FUN_1494cdbd4(void)

longlong FUN_1494cdbd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cdc0c FUN_1494cdc0c body=48 status=ok
// SIG undefined FUN_1494cdc0c(void)

longlong FUN_1494cdc0c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cdc44 FUN_1494cdc44 body=48 status=ok
// SIG undefined FUN_1494cdc44(void)

longlong FUN_1494cdc44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cdc7c FUN_1494cdc7c body=48 status=ok
// SIG undefined FUN_1494cdc7c(void)

longlong FUN_1494cdc7c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x120;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cdcca FUN_1494cdcca body=48 status=ok
// SIG undefined FUN_1494cdcca(void)

longlong FUN_1494cdcca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cdd08 FUN_1494cdd08 body=48 status=ok
// SIG undefined FUN_1494cdd08(void)

longlong FUN_1494cdd08(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cdd40 FUN_1494cdd40 body=55 status=ok
// SIG undefined FUN_1494cdd40(void)

undefined8 * FUN_1494cdd40(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusNode.h",
                0x36,L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1494cdd78 FUN_1494cdd78 body=54 status=ok
// SIG undefined FUN_1494cdd78(void)

undefined8 * FUN_1494cdd78(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\../Plugins/Animation/DeformerGraph/Source/OptimusCore/Private/Nodes\\OptimusNode_ComputeKernelBase.h"
                ,0x1b,L"Pure virtual not implemented (%s)",
                L"UOptimusNode_ComputeKernelBase::GetKernelHlslName");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1494cddae FUN_1494cddae body=62 status=ok
// SIG undefined FUN_1494cddae(void)

undefined8 * FUN_1494cddae(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\../Plugins/Animation/DeformerGraph/Source/OptimusCore/Private/Nodes\\OptimusNode_ComputeKernelBase.h"
                ,0x1e,L"Pure virtual not implemented (%s)",
                L"UOptimusNode_ComputeKernelBase::GetGroupSize");
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1494cddec FUN_1494cddec body=54 status=ok
// SIG undefined FUN_1494cddec(void)

undefined8 * FUN_1494cddec(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\../Plugins/Animation/DeformerGraph/Source/OptimusCore/Private/Nodes\\OptimusNode_ComputeKernelBase.h"
                ,0x21,L"Pure virtual not implemented (%s)",
                L"UOptimusNode_ComputeKernelBase::GetKernelSourceText");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1494cde2c FUN_1494cde2c body=48 status=ok
// SIG undefined FUN_1494cde2c(void)

longlong FUN_1494cde2c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cde64 FUN_1494cde64 body=58 status=ok
// SIG undefined FUN_1494cde64(void)

undefined8 * FUN_1494cde64(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\../Plugins/Animation/DeformerGraph/Source/OptimusCore/Private/Nodes\\OptimusNode_ComputeKernelBase.h"
                ,0x31,L"Pure virtual not implemented (%s)",
                L"UOptimusNode_ComputeKernelBase::GetExecutionDomain");
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1494cde9e FUN_1494cde9e body=42 status=ok
// SIG undefined FUN_1494cde9e(void)

undefined8 FUN_1494cde9e(void)

{
  FUN_140033559(".\\../Plugins/Animation/DeformerGraph/Source/OptimusCore/Private/Nodes\\OptimusNode_ComputeKernelBase.h"
                ,0x32,L"Pure virtual not implemented (%s)",
                L"UOptimusNode_ComputeKernelBase::GetPrimaryGroupPin");
  return 0;
}



// FUNCTION 1494cdec8 FUN_1494cdec8 body=42 status=ok
// SIG undefined FUN_1494cdec8(void)

undefined8 FUN_1494cdec8(void)

{
  FUN_140033559(".\\../Plugins/Animation/DeformerGraph/Source/OptimusCore/Private/Nodes\\OptimusNode_ComputeKernelBase.h"
                ,0x33,L"Pure virtual not implemented (%s)",
                L"UOptimusNode_ComputeKernelBase::MakeKernelDataInterface");
  return 0;
}



// FUNCTION 1494cdef2 FUN_1494cdef2 body=42 status=ok
// SIG undefined FUN_1494cdef2(void)

undefined8 FUN_1494cdef2(void)

{
  FUN_140033559(".\\../Plugins/Animation/DeformerGraph/Source/OptimusCore/Private/Nodes\\OptimusNode_ComputeKernelBase.h"
                ,0x34,L"Pure virtual not implemented (%s)",
                L"UOptimusNode_ComputeKernelBase::DoesOutputPinSupportAtomic");
  return 0;
}



// FUNCTION 1494cdf1c FUN_1494cdf1c body=42 status=ok
// SIG undefined FUN_1494cdf1c(void)

undefined8 FUN_1494cdf1c(void)

{
  FUN_140033559(".\\../Plugins/Animation/DeformerGraph/Source/OptimusCore/Private/Nodes\\OptimusNode_ComputeKernelBase.h"
                ,0x35,L"Pure virtual not implemented (%s)",
                L"UOptimusNode_ComputeKernelBase::DoesOutputPinSupportRead");
  return 0;
}



// FUNCTION 1494cdf46 FUN_1494cdf46 body=48 status=ok
// SIG undefined FUN_1494cdf46(void)

longlong FUN_1494cdf46(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cdf94 FUN_1494cdf94 body=48 status=ok
// SIG undefined FUN_1494cdf94(void)

longlong FUN_1494cdf94(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cdfcc FUN_1494cdfcc body=48 status=ok
// SIG undefined FUN_1494cdfcc(void)

longlong FUN_1494cdfcc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce004 FUN_1494ce004 body=48 status=ok
// SIG undefined FUN_1494ce004(void)

longlong FUN_1494ce004(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce068 FUN_1494ce068 body=81 status=ok
// SIG undefined FUN_1494ce068(void)

undefined8 * FUN_1494ce068(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x1d8);
  uVar2 = *(undefined8 *)(param_1 + 0x1d0);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1494e6294(param_2,iVar1);
    FUN_1494e62ed(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 1494ce0ba FUN_1494ce0ba body=48 status=ok
// SIG undefined FUN_1494ce0ba(void)

longlong FUN_1494ce0ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_14584ff8c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce0f2 FUN_1494ce0f2 body=48 status=ok
// SIG undefined FUN_1494ce0f2(void)

longlong FUN_1494ce0f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_14584ff8c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce12a FUN_1494ce12a body=48 status=ok
// SIG undefined FUN_1494ce12a(void)

longlong FUN_1494ce12a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_14584ff8c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce162 FUN_1494ce162 body=48 status=ok
// SIG undefined FUN_1494ce162(void)

longlong FUN_1494ce162(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x120;
  FUN_14584ff8c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce19a FUN_1494ce19a body=48 status=ok
// SIG undefined FUN_1494ce19a(void)

longlong FUN_1494ce19a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x128;
  FUN_14584ff8c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce1d2 FUN_1494ce1d2 body=48 status=ok
// SIG undefined FUN_1494ce1d2(void)

longlong FUN_1494ce1d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce202 FUN_1494ce202 body=48 status=ok
// SIG undefined FUN_1494ce202(void)

longlong FUN_1494ce202(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce232 FUN_1494ce232 body=48 status=ok
// SIG undefined FUN_1494ce232(void)

longlong FUN_1494ce232(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce262 FUN_1494ce262 body=48 status=ok
// SIG undefined FUN_1494ce262(void)

longlong FUN_1494ce262(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x120;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce2dc FUN_1494ce2dc body=48 status=ok
// SIG undefined FUN_1494ce2dc(void)

longlong FUN_1494ce2dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_145844e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce314 FUN_1494ce314 body=48 status=ok
// SIG undefined FUN_1494ce314(void)

longlong FUN_1494ce314(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_145844e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce34c FUN_1494ce34c body=48 status=ok
// SIG undefined FUN_1494ce34c(void)

longlong FUN_1494ce34c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_145844e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce38a FUN_1494ce38a body=48 status=ok
// SIG undefined FUN_1494ce38a(void)

longlong FUN_1494ce38a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x120;
  FUN_145844e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce3d0 FUN_1494ce3d0 body=48 status=ok
// SIG undefined FUN_1494ce3d0(void)

longlong FUN_1494ce3d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_145d398aa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce408 FUN_1494ce408 body=48 status=ok
// SIG undefined FUN_1494ce408(void)

longlong FUN_1494ce408(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_145d398aa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce446 FUN_1494ce446 body=48 status=ok
// SIG undefined FUN_1494ce446(void)

longlong FUN_1494ce446(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_145d398aa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce48e FUN_1494ce48e body=48 status=ok
// SIG undefined FUN_1494ce48e(void)

longlong FUN_1494ce48e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce4c6 FUN_1494ce4c6 body=48 status=ok
// SIG undefined FUN_1494ce4c6(void)

longlong FUN_1494ce4c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce4fe FUN_1494ce4fe body=48 status=ok
// SIG undefined FUN_1494ce4fe(void)

longlong FUN_1494ce4fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce536 FUN_1494ce536 body=48 status=ok
// SIG undefined FUN_1494ce536(void)

longlong FUN_1494ce536(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x120;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce57a FUN_1494ce57a body=48 status=ok
// SIG undefined FUN_1494ce57a(void)

longlong FUN_1494ce57a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_145d02d5e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce5b2 FUN_1494ce5b2 body=48 status=ok
// SIG undefined FUN_1494ce5b2(void)

longlong FUN_1494ce5b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_145d02d5e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce5ea FUN_1494ce5ea body=48 status=ok
// SIG undefined FUN_1494ce5ea(void)

longlong FUN_1494ce5ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_145d02d5e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce622 FUN_1494ce622 body=48 status=ok
// SIG undefined FUN_1494ce622(void)

longlong FUN_1494ce622(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x120;
  FUN_145d02d5e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce65a FUN_1494ce65a body=48 status=ok
// SIG undefined FUN_1494ce65a(void)

longlong FUN_1494ce65a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x128;
  FUN_145d02d5e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce692 FUN_1494ce692 body=48 status=ok
// SIG undefined FUN_1494ce692(void)

longlong FUN_1494ce692(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_145844e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce6c2 FUN_1494ce6c2 body=48 status=ok
// SIG undefined FUN_1494ce6c2(void)

longlong FUN_1494ce6c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_145844e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce6f2 FUN_1494ce6f2 body=48 status=ok
// SIG undefined FUN_1494ce6f2(void)

longlong FUN_1494ce6f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_145844e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce722 FUN_1494ce722 body=48 status=ok
// SIG undefined FUN_1494ce722(void)

longlong FUN_1494ce722(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x120;
  FUN_145844e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce752 FUN_1494ce752 body=48 status=ok
// SIG undefined FUN_1494ce752(void)

longlong FUN_1494ce752(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_145844e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce788 FUN_1494ce788 body=48 status=ok
// SIG undefined FUN_1494ce788(void)

longlong FUN_1494ce788(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_145844e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce7b8 FUN_1494ce7b8 body=48 status=ok
// SIG undefined FUN_1494ce7b8(void)

longlong FUN_1494ce7b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_145844e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce7e8 FUN_1494ce7e8 body=48 status=ok
// SIG undefined FUN_1494ce7e8(void)

longlong FUN_1494ce7e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x120;
  FUN_145844e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce818 FUN_1494ce818 body=48 status=ok
// SIG undefined FUN_1494ce818(void)

longlong FUN_1494ce818(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_145844e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce848 FUN_1494ce848 body=48 status=ok
// SIG undefined FUN_1494ce848(void)

longlong FUN_1494ce848(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_145844e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce878 FUN_1494ce878 body=48 status=ok
// SIG undefined FUN_1494ce878(void)

longlong FUN_1494ce878(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_145844e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce8a8 FUN_1494ce8a8 body=48 status=ok
// SIG undefined FUN_1494ce8a8(void)

longlong FUN_1494ce8a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x120;
  FUN_145844e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce8e4 FUN_1494ce8e4 body=48 status=ok
// SIG undefined FUN_1494ce8e4(void)

longlong FUN_1494ce8e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce91c FUN_1494ce91c body=48 status=ok
// SIG undefined FUN_1494ce91c(void)

longlong FUN_1494ce91c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce954 FUN_1494ce954 body=48 status=ok
// SIG undefined FUN_1494ce954(void)

longlong FUN_1494ce954(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_141136054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ce98c FUN_1494ce98c body=56 status=ok
// SIG undefined FUN_1494ce98c(void)

undefined8 FUN_1494ce98c(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("..\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusComponentSource.h"
                ,0x19,L"Pure virtual not implemented (%s)",
                L"UOptimusComponentSource::GetDisplayName");
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 1494ce9c4 FUN_1494ce9c4 body=55 status=ok
// SIG undefined FUN_1494ce9c4(void)

undefined8 * FUN_1494ce9c4(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusComponentSource.h"
                ,0x1d,L"Pure virtual not implemented (%s)",
                L"UOptimusComponentSource::GetSuggestedBindingName");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1494ce9fc FUN_1494ce9fc body=55 status=ok
// SIG undefined FUN_1494ce9fc(void)

undefined8 * FUN_1494ce9fc(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusComponentSource.h"
                ,0x21,L"Pure virtual not implemented (%s)",
                L"UOptimusComponentSource::GetComponentClass");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1494cea34 FUN_1494cea34 body=54 status=ok
// SIG undefined FUN_1494cea34(void)

undefined8 * FUN_1494cea34(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusComponentSource.h"
                ,0x26,L"Pure virtual not implemented (%s)",
                L"UOptimusComponentSource::GetExecutionContexts");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1494cea6a FUN_1494cea6a body=54 status=ok
// SIG undefined FUN_1494cea6a(void)

undefined8 * FUN_1494cea6a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusComputeDataInterface.h"
                ,0x9d,L"Pure virtual not implemented (%s)",
                L"UOptimusComputeDataInterface::GetPinDefinitions");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1494ceaa0 FUN_1494ceaa0 body=55 status=ok
// SIG undefined FUN_1494ceaa0(void)

undefined8 * FUN_1494ceaa0(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusComputeDataInterface.h"
                ,0xb1,L"Pure virtual not implemented (%s)",
                L"UOptimusComputeDataInterface::GetRequiredComponent");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1494cead8 FUN_1494cead8 body=38 status=ok
// SIG undefined FUN_1494cead8(void)

undefined8 FUN_1494cead8(undefined8 param_1,int param_2)

{
  FUN_146739d20();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ceafe FUN_1494ceafe body=32 status=ok
// SIG undefined FUN_1494ceafe(void)

undefined8 FUN_1494ceafe(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FOptimusDataTypeRegistry");
  return param_2;
}



// FUNCTION 1494ceb1e FUN_1494ceb1e body=45 status=ok
// SIG undefined FUN_1494ceb1e(void)

longlong FUN_1494ceb1e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145975bd6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ceb52 FUN_1494ceb52 body=45 status=ok
// SIG undefined FUN_1494ceb52(void)

longlong FUN_1494ceb52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145975bd6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ceb86 FUN_1494ceb86 body=45 status=ok
// SIG undefined FUN_1494ceb86(void)

longlong FUN_1494ceb86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145975bd6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cebd4 FUN_1494cebd4 body=45 status=ok
// SIG undefined FUN_1494cebd4(void)

longlong FUN_1494cebd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_145975bd6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cec0c FUN_1494cec0c body=45 status=ok
// SIG undefined FUN_1494cec0c(void)

longlong FUN_1494cec0c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145b08fde(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cec46 FUN_1494cec46 body=48 status=ok
// SIG undefined FUN_1494cec46(void)

longlong FUN_1494cec46(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x90;
  FUN_145b08fde(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cec7e FUN_1494cec7e body=45 status=ok
// SIG undefined FUN_1494cec7e(void)

longlong FUN_1494cec7e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14585c5fc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cecb2 FUN_1494cecb2 body=38 status=ok
// SIG undefined FUN_1494cecb2(void)

undefined8 FUN_1494cecb2(undefined8 param_1,int param_2)

{
  FUN_1494cecd8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494cecd8 FUN_1494cecd8 body=84 status=ok
// SIG undefined FUN_1494cecd8(void)

void FUN_1494cecd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd1adb0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_145c9df52(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494ced2c FUN_1494ced2c body=52 status=ok
// SIG undefined FUN_1494ced2c(void)

void FUN_1494ced2c(longlong *param_1)

{
  FUN_1494ced60();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494ced60 FUN_1494ced60 body=313 status=ok
// SIG undefined FUN_1494ced60(void)

void FUN_1494ced60(longlong *param_1)

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



// FUNCTION 1494ceec2 FUN_1494ceec2 body=101 status=ok
// SIG undefined FUN_1494ceec2(void)

undefined1 FUN_1494ceec2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1494cef50 FUN_1494cef50 body=59 status=ok
// SIG undefined FUN_1494cef50(void)

undefined8 FUN_1494cef50(longlong *param_1)

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



// FUNCTION 1494ceff2 FUN_1494ceff2 body=90 status=ok
// SIG undefined FUN_1494ceff2(void)

void FUN_1494ceff2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 5) {
    iVar3 = 4;
  }
  else {
    iVar2 = 0;
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    iVar3 = (int)(uVar1 >> 3);
    if (iVar3 < (int)param_2) {
      iVar3 = 0x7fffffff;
    }
    else if (iVar3 < 1) goto LAB_1494cf023;
  }
  iVar2 = iVar3;
  FUN_1494cf04c(param_1,0,iVar2);
LAB_1494cf023:
  *(int *)(param_1 + 0x2c) = iVar2;
  return;
}



// FUNCTION 1494cf04c FUN_1494cf04c body=132 status=ok
// SIG undefined FUN_1494cf04c(void)

void FUN_1494cf04c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 1494cf0d0 FUN_1494cf0d0 body=122 status=ok
// SIG undefined FUN_1494cf0d0(void)

longlong FUN_1494cf0d0(longlong param_1,longlong param_2)

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
    FUN_1494cf2de(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1494cf14a FUN_1494cf14a body=402 status=ok
// SIG undefined FUN_1494cf14a(void)

ulonglong FUN_1494cf14a(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
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
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) <
      (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
LAB_1494cf175:
    uVar6 = 0;
    uVar2 = local_58;
  }
  else {
    local_40 = param_2 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar2 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    local_70 = param_2;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar3 = local_58._4_4_;
      local_58 = uVar2;
      do {
        if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_1494cf175;
        uVar1 = *(ulonglong *)(*local_70 + (longlong)iVar3 * 0x10);
        uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = param_1 + 7;
        }
        iVar3 = *(int *)((longlong)plVar5 +
                        (ulonglong)((int)param_1[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
        if (iVar3 == -1) goto LAB_1494cf175;
        while (*(ulonglong *)(*param_1 + (longlong)iVar3 * 0x10) != uVar1) {
          iVar3 = *(int *)((longlong)iVar3 * 0x10 + *param_1 + 8);
          if (iVar3 == -1) goto LAB_1494cf175;
        }
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar3 = local_58._4_4_;
        uVar2 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1494cf2de FUN_1494cf2de body=117 status=ok
// SIG undefined FUN_1494cf2de(void)

undefined8 * FUN_1494cf2de(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1494cf354(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 1494cf354 FUN_1494cf354 body=128 status=ok
// SIG undefined FUN_1494cf354(void)

void FUN_1494cf354(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1494cf3f6 FUN_1494cf3f6 body=46 status=ok
// SIG undefined FUN_1494cf3f6(void)

void FUN_1494cf3f6(undefined8 param_1,longlong param_2)

{
  FUN_141239a12(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494cf43a FUN_1494cf43a body=75 status=ok
// SIG undefined FUN_1494cf43a(void)

undefined8 FUN_1494cf43a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_145ebd534();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1494cf4ae FUN_1494cf4ae body=59 status=ok
// SIG undefined FUN_1494cf4ae(void)

undefined8 FUN_1494cf4ae(longlong *param_1)

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



// FUNCTION 1494cf54c FUN_1494cf54c body=50 status=ok
// SIG undefined FUN_1494cf54c(void)

void FUN_1494cf54c(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_141239a12(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1494cf57e FUN_1494cf57e body=125 status=ok
// SIG undefined FUN_1494cf57e(void)

int FUN_1494cf57e(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
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
        if (*(int *)(lVar4 + 8 + lVar5 * 0x18) == *(int *)(param_3 + 1)) {
          cVar2 = FUN_14000b9e1(*(undefined8 *)(lVar4 + lVar5 * 0x18),*param_3);
          if (cVar2 != '\0') {
            return iVar1;
          }
          lVar4 = *param_1;
        }
        iVar1 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1494cf5fc FUN_1494cf5fc body=52 status=ok
// SIG undefined FUN_1494cf5fc(void)

void FUN_1494cf5fc(longlong *param_1)

{
  FUN_1494cf630();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494cf630 FUN_1494cf630 body=312 status=ok
// SIG undefined FUN_1494cf630(void)

void FUN_1494cf630(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
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



// FUNCTION 1494cf76a FUN_1494cf76a body=108 status=ok
// SIG undefined FUN_1494cf76a(void)

void FUN_1494cf76a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(param_2 + 1);
  param_2[7] = 0;
  param_2[8] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cf7d8 FUN_1494cf7d8 body=92 status=ok
// SIG undefined FUN_1494cf7d8(void)

void FUN_1494cf7d8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(param_2 + 1);
  param_2[7] = 0;
  param_2[8] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cf836 FUN_1494cf836 body=48 status=ok
// SIG undefined FUN_1494cf836(void)

void FUN_1494cf836(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494cf87c FUN_1494cf87c body=117 status=ok
// SIG undefined FUN_1494cf87c(void)

undefined8 FUN_1494cf87c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar2 = param_2 + 0x28 + lVar6;
      *(undefined8 *)(lVar2 + -0x28) = *puVar1;
      *(undefined8 *)(lVar2 + -0x20) = puVar1[1];
      *(undefined8 *)(lVar2 + -0x18) = puVar1[2];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      uVar4 = *(undefined4 *)(puVar1 + 4);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x24);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 3);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      FUN_144a787a6(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      lVar6 = lVar6 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1494cf91a FUN_1494cf91a body=59 status=ok
// SIG undefined FUN_1494cf91a(void)

undefined8 FUN_1494cf91a(longlong *param_1)

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



// FUNCTION 1494cf9b8 FUN_1494cf9b8 body=52 status=ok
// SIG undefined FUN_1494cf9b8(void)

void FUN_1494cf9b8(longlong param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1494cfa04 FUN_1494cfa04 body=47 status=ok
// SIG undefined FUN_1494cfa04(void)

void FUN_1494cfa04(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494cfa4a FUN_1494cfa4a body=67 status=ok
// SIG undefined FUN_1494cfa4a(void)

undefined1 FUN_1494cfa4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    FUN_1406fa324(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1494cfab6 FUN_1494cfab6 body=59 status=ok
// SIG undefined FUN_1494cfab6(void)

undefined8 FUN_1494cfab6(longlong *param_1)

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



// FUNCTION 1494cfb54 FUN_1494cfb54 body=51 status=ok
// SIG undefined FUN_1494cfb54(void)

void FUN_1494cfb54(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 1494cfba6 FUN_1494cfba6 body=46 status=ok
// SIG undefined FUN_1494cfba6(void)

void FUN_1494cfba6(undefined8 param_1,longlong param_2)

{
  FUN_141239a12(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494cfbea FUN_1494cfbea body=73 status=ok
// SIG undefined FUN_1494cfbea(void)

undefined8 FUN_1494cfbea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_145ebd534();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1494cfc5c FUN_1494cfc5c body=59 status=ok
// SIG undefined FUN_1494cfc5c(void)

undefined8 FUN_1494cfc5c(longlong *param_1)

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



// FUNCTION 1494cfcfa FUN_1494cfcfa body=50 status=ok
// SIG undefined FUN_1494cfcfa(void)

void FUN_1494cfcfa(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_141239a12(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1494cfd2c FUN_1494cfd2c body=117 status=ok
// SIG undefined FUN_1494cfd2c(void)

void FUN_1494cfd2c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6511c(param_2 + 1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140e6507e(param_2 + 7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cfda2 FUN_1494cfda2 body=89 status=ok
// SIG undefined FUN_1494cfda2(void)

void FUN_1494cfda2(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6511c(param_2 + 1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140e6507e(param_2 + 7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494cfdfc FUN_1494cfdfc body=43 status=ok
// SIG undefined FUN_1494cfdfc(void)

void FUN_1494cfdfc(undefined8 param_1,longlong param_2)

{
  FUN_14121c54c(param_2 + 0x38);
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494cfe3e FUN_1494cfe3e body=54 status=ok
// SIG undefined FUN_1494cfe3e(void)

undefined1 FUN_1494cfe3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1494cff60(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 1494cfe9c FUN_1494cfe9c body=59 status=ok
// SIG undefined FUN_1494cfe9c(void)

undefined8 FUN_1494cfe9c(longlong *param_1)

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



// FUNCTION 1494cfee2 FUN_1494cfee2 body=47 status=ok
// SIG undefined FUN_1494cfee2(void)

void FUN_1494cfee2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_14121c54c(param_2 + 0x38);
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1494cff60 FUN_1494cff60 body=119 status=ok
// SIG undefined FUN_1494cff60(void)

undefined8 * FUN_1494cff60(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  FUN_144a787a6(param_1 + 5,param_2 + 5);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  FUN_1406fa324(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  FUN_144a787a6(param_1 + 0xb,param_2 + 0xb);
  FUN_1406fa324(param_1 + 0xd,param_2 + 0xd);
  return param_1;
}



// FUNCTION 1494cffd8 FUN_1494cffd8 body=54 status=ok
// SIG undefined FUN_1494cffd8(void)

void FUN_1494cffd8(longlong *param_1)

{
  FUN_1494d000e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494d000e FUN_1494d000e body=346 status=ok
// SIG undefined FUN_1494d000e(void)

void FUN_1494d000e(longlong *param_1,int param_2)

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
      FUN_1494d016a((longlong)iStack_54 * 0x78 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1410fd13e(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
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
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1494d016a FUN_1494d016a body=70 status=ok
// SIG undefined FUN_1494d016a(void)

void FUN_1494d016a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1494d01b0(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494d01b0 FUN_1494d01b0 body=54 status=ok
// SIG undefined FUN_1494d01b0(void)

void FUN_1494d01b0(longlong *param_1)

{
  FUN_1494d01e6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494d01e6 FUN_1494d01e6 body=360 status=ok
// SIG undefined FUN_1494d01e6(void)

void FUN_1494d01e6(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x18 + (longlong)iStack_54 * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14494313c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
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
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}


