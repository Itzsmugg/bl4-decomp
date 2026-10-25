// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146f1109e FUN_146f1109e body=402 status=ok
// SIG undefined FUN_146f1109e(void)

void FUN_146f1109e(longlong *param_1,uint param_2,undefined8 param_3)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 **local_68;
  uint *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)*param_1;
  lVar3 = param_1[1];
  uVar6 = (ulonglong)param_2;
  lVar7 = (ulonglong)*(uint *)(*plVar2 + uVar6 * 8) + lVar3;
  if ((*(undefined **)(plVar2[2] + uVar6 * 0x10) == &DAT_14c99bf88) &&
     ((lVar4 = plVar2[1], plVar2 == (longlong *)0x0 || lVar3 == 0 ||
      ((*(byte *)(plVar2 + 0x17) & 1) == 0)))) {
    cVar5 = FUN_146f11244(param_1,param_2);
    if ((cVar5 != '\0') && (1 < *(ushort *)(lVar4 + 2 + uVar6 * 4))) {
      local_58 = (uint *)(lVar3 + (ulonglong)*(uint *)(plVar2 + 0x11));
      local_50 = *(ushort *)((longlong)plVar2 + 0x86) + 0x1f >> 5;
      local_4c = (uint)*(ushort *)((longlong)plVar2 + 0x86);
      if (local_4c == 0) {
        local_58 = &local_4c;
      }
      local_68 = &local_58;
      cVar5 = FUN_146f0b2bc(plVar2,param_2,lVar7,param_3);
      if ((cVar5 == '\0') &&
         (uVar1 = *(ushort *)(lVar4 + uVar6 * 4), (local_58[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0)
         ) {
        FUN_146f112e6(param_1,param_2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
  }
  cVar5 = FUN_146f113c6(param_1,param_2);
  if (cVar5 == '\0') {
    cVar5 = FUN_146f11244(param_1,param_2);
    if (cVar5 != '\0') {
      cVar5 = FUN_146f0a38a(plVar2,param_2,param_3,lVar7);
      if (cVar5 == '\0') {
        FUN_146f1149e(param_1,param_2);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_146f0af3c(plVar2,param_2,lVar7,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f11244 FUN_146f11244 body=160 status=ok
// SIG undefined FUN_146f11244(void)

ulonglong FUN_146f11244(longlong *param_1,ulonglong param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [32];
  uint *local_18;
  uint local_10;
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *param_1;
  uVar3 = CONCAT71((int7)(local_8 >> 8),1);
  if ((*(byte *)(lVar2 + 0xb8) & 2) != 0) {
    if (*(short *)(*(longlong *)(lVar2 + 8) + 2 + (param_2 & 0xffffffff) * 4) != 0) {
      uVar1 = *(ushort *)(lVar2 + 0x86);
      local_18 = (uint *)((ulonglong)((uVar1 + 0x1f >> 3 & 0xfffffffc) + *(int *)(lVar2 + 0x88)) +
                         param_1[1]);
      local_10 = uVar1 + 0x1f >> 5;
      local_c = (uint)uVar1;
      if (uVar1 == 0) {
        local_18 = &local_c;
      }
      uVar1 = *(ushort *)(*(longlong *)(lVar2 + 8) + (param_2 & 0xffffffff) * 4);
      uVar3 = (ulonglong)
              CONCAT31((int3)(local_18[uVar1 >> 5] >> 8),
                       (local_18[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) != 0);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f112e6 FUN_146f112e6 body=223 status=ok
// SIG undefined FUN_146f112e6(void)

void FUN_146f112e6(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  undefined1 auStack_48 [44];
  undefined2 local_1c;
  undefined2 uStack_1a;
  uint *local_18;
  uint local_10;
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_1;
  lVar3 = param_1[1];
  if ((*(uint *)(lVar2 + 0xb8) >> 0xb & 1) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (ulonglong)*(uint *)(lVar2 + 0x88) - 4;
  }
  puVar5 = (uint *)(lVar4 + lVar3);
  if (((lVar2 == 0) || (lVar3 == 0)) || ((*(uint *)(lVar2 + 0xb8) & 1) == 0)) {
    local_18 = (uint *)(lVar3 + (ulonglong)*(uint *)(lVar2 + 0x88));
    local_10 = *(ushort *)(lVar2 + 0x86) + 0x1f >> 5;
    local_c = (uint)*(ushort *)(lVar2 + 0x86);
    if (local_c == 0) {
      local_18 = &local_c;
    }
    _local_1c = CONCAT22(1,(short)*(undefined4 *)(*(longlong *)(lVar2 + 8) + (ulonglong)param_2 * 4)
                        );
    FUN_146f11571(puVar5,&local_18);
  }
  else {
    uVar1 = *puVar5;
    if (((uVar1 >> 0x1e & 1) == 0) && (*puVar5 = uVar1 | 0x40000000, (uVar1 & 0x3fffffff) != 0)) {
      *puVar5 = uVar1 | 0xc0000000;
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f113c6 FUN_146f113c6 body=215 status=ok
// SIG undefined FUN_146f113c6(void)

ulonglong FUN_146f113c6(longlong *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_38 [32];
  uint *local_18;
  uint local_10;
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar4 = *param_1;
  lVar3 = param_1[1];
  if ((lVar4 == 0 || lVar3 == 0) || ((*(uint *)(lVar4 + 0xb8) & 1) == 0)) {
    uVar1 = *(ushort *)(lVar4 + 0x86);
    local_18 = (uint *)(lVar3 + (ulonglong)*(uint *)(lVar4 + 0x88));
    local_10 = uVar1 + 0x1f >> 5;
    local_c = (uint)uVar1;
    if (uVar1 == 0) {
      local_18 = &local_c;
    }
    uVar2 = *(ushort *)(*(longlong *)(lVar4 + 8) + (ulonglong)param_2 * 4);
    if (*(short *)(*(longlong *)(lVar4 + 8) + 2 + (ulonglong)param_2 * 4) == 1) {
      uVar5 = (ulonglong)
              CONCAT31((int3)(local_18[uVar2 >> 5] >> 8),
                       (local_18[uVar2 >> 5] >> (uVar2 & 0x1f) & 1) != 0);
    }
    else {
      uVar5 = FUN_146f0ff32(local_18,uVar1);
    }
  }
  else {
    if ((*(uint *)(lVar4 + 0xb8) >> 0xb & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulonglong)*(uint *)(lVar4 + 0x88) - 4;
    }
    uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar3 + 3 + lVar4)) &
            0xffffffffffffff40;
    uVar5 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 6);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1149e FUN_146f1149e body=210 status=ok
// SIG undefined FUN_146f1149e(void)

void FUN_146f1149e(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  undefined1 auStack_38 [32];
  uint *local_18;
  uint local_10;
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *param_1;
  lVar3 = param_1[1];
  if ((*(uint *)(lVar2 + 0xb8) >> 0xb & 1) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (ulonglong)*(uint *)(lVar2 + 0x88) - 4;
  }
  puVar5 = (uint *)(lVar4 + lVar3);
  if (((lVar2 == 0) || (lVar3 == 0)) || ((*(uint *)(lVar2 + 0xb8) & 1) == 0)) {
    local_18 = (uint *)(lVar3 + (ulonglong)*(uint *)(lVar2 + 0x88));
    local_10 = *(ushort *)(lVar2 + 0x86) + 0x1f >> 5;
    local_c = (uint)*(ushort *)(lVar2 + 0x86);
    if (local_c == 0) {
      local_18 = &local_c;
    }
    FUN_146f11571(puVar5,&local_18,(ulonglong)param_2 * 4 + *(longlong *)(lVar2 + 8));
  }
  else {
    uVar1 = *puVar5;
    if (((uVar1 >> 0x1e & 1) == 0) && (*puVar5 = uVar1 | 0x40000000, (uVar1 & 0x3fffffff) != 0)) {
      *puVar5 = uVar1 | 0xc0000000;
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f11571 FUN_146f11571 body=177 status=ok
// SIG undefined FUN_146f11571(void)

void FUN_146f11571(uint *param_1,longlong *param_2,ushort *param_3)

{
  uint *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *param_3;
  lVar7 = *param_2;
  if (((*param_1 & 0x3fffffff) != 0) &&
     ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)) {
    *param_1 = *param_1 | 0x80000000;
    uVar2 = *param_3;
    lVar7 = *param_2;
  }
  uVar4 = (ulonglong)*(uint *)((longlong)param_2 + 0xc) - 1;
  uVar5 = ((ulonglong)uVar2 + (ulonglong)param_3[1]) - 1;
  if (uVar5 < uVar4) {
    uVar4 = uVar5;
  }
  uVar5 = uVar4 >> 5 & 0x7ffffff;
  uVar8 = (uint)uVar5;
  if (uVar2 >> 5 <= uVar8) {
    uVar6 = -1 << ((byte)uVar2 & 0x1f);
    uVar3 = (ulonglong)(uint)(uVar2 >> 5);
    do {
      uVar9 = 0xffffffff;
      if (uVar5 == uVar3) {
        uVar9 = 0xffffffff >> (~(byte)uVar4 & 0x1f);
      }
      puVar1 = (uint *)(lVar7 + uVar3 * 4);
      *puVar1 = *puVar1 | uVar9 & uVar6;
      uVar3 = uVar3 + 1;
      uVar6 = 0xffffffff;
    } while (uVar8 + ((uint)(uVar2 >> 5) - (uint)(uVar2 >> 5)) + 1 != uVar3);
  }
  return;
}



// FUNCTION 146f11622 FUN_146f11622 body=59 status=ok
// SIG undefined FUN_146f11622(void)

void FUN_146f11622(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((*(byte *)(*param_1 + 0xb9) & 8) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (ulonglong)*(uint *)(*param_1 + 0x88) - 4;
  }
  if ((*(uint *)(param_1[1] + lVar5) & 0x3fffffff) == 0) {
    FUN_146f0a239(param_1[1],param_2[1]);
    return;
  }
  if (((param_1[1] != 0) &&
      (plVar2 = (longlong *)*param_1, param_1 != param_2 && plVar2 != (longlong *)0x0)) &&
     (uVar1 = *(ushort *)((longlong)plVar2 + 0x7c), (ulonglong)uVar1 != 0)) {
    lVar5 = *plVar2;
    lVar3 = param_2[1];
    uVar4 = 0;
    do {
      FUN_146f1109e(param_1,uVar4 & 0xffffffff,(ulonglong)*(uint *)(lVar5 + uVar4 * 8) + lVar3);
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  return;
}



// FUNCTION 146f1165e FUN_146f1165e body=200 status=ok
// SIG undefined FUN_146f1165e(void)

undefined8 FUN_146f1165e(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort *puVar7;
  
  lVar3 = param_1[1];
  if ((lVar3 == 0) || (lVar5 = *param_1, lVar5 == 0)) {
LAB_146f116fe:
    uVar4 = 0;
  }
  else {
    uVar1 = *(ushort *)(lVar5 + 0x7c);
    if ((ulonglong)uVar1 != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x18);
      lVar2 = *(longlong *)(lVar5 + 0x38);
      puVar7 = (ushort *)(*(longlong *)(lVar5 + 0x40) + 8);
      uVar6 = 0;
      do {
        if ((*(byte *)(lVar3 + uVar6 * 2) & 2) != 0) {
          lVar5 = *(longlong *)(lVar2 + uVar6 * 8);
          FUN_146f1109e(param_1,uVar6 & 0xffffffff,
                        (ulonglong)*puVar7 * (longlong)*(int *)(lVar5 + 0x34) +
                        *(int *)(lVar5 + 0x44) + param_2);
        }
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 8;
      } while (uVar1 != uVar6);
      lVar3 = param_1[1];
      if ((lVar3 == 0) || (lVar5 = *param_1, lVar5 == 0)) goto LAB_146f116fe;
    }
    if ((*(byte *)(lVar5 + 0xb9) & 8) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (ulonglong)*(uint *)(lVar5 + 0x88) - 4;
    }
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),0x3fffffff < *(uint *)(lVar3 + lVar5));
  }
  return uVar4;
}



// FUNCTION 146f11726 FUN_146f11726 body=486 status=ok
// SIG undefined FUN_146f11726(void)

undefined8 FUN_146f11726(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68 [2];
  undefined2 *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
    local_70 = plVar1[7];
    local_78 = (ulonglong)*(ushort *)((longlong)plVar1 + 0x7c);
    FUN_140212e80(param_2,L"FPropertyReplicationState %s\n",*(undefined8 *)plVar1[0xc]);
    bVar4 = 1;
    if (param_3 == '\0') {
      bVar4 = *(byte *)(plVar1 + 0x17) & 1;
    }
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    if (local_78 != 0) {
      uVar6 = 0;
      do {
        plVar2 = *(longlong **)(local_70 + uVar6 * 8);
        if ((bVar4 != 0) || (cVar3 = FUN_146f113c6(param_1,uVar6 & 0xffffffff), cVar3 != '\0')) {
          local_98 = (undefined2 *)((ulonglong)*(uint *)(*plVar1 + uVar6 * 8) + param_1[1]);
          local_80 = 0;
          local_90 = 0;
          local_88 = 0x8022000;
          (**(code **)(*plVar2 + 0xf0))(plVar2,&local_58,local_98,0);
          puVar5 = &DAT_149dfb77a;
          if ((int)uStack_50 != 0) {
            puVar5 = local_58;
          }
          if (plVar2 == (longlong *)0x0) {
            FUN_140056680(local_68,&DAT_149e01fe8);
          }
          else {
            FUN_1400021e4(plVar2 + 4,local_68);
          }
          local_98 = puVar5;
          FUN_140212e80(param_2,L"%u - %s : %s\n",uVar6 & 0xffffffff);
          if (local_68[0] != 0) {
            FUN_1400020a8();
          }
          bVar7 = (longlong)uStack_50 < 0;
          uStack_50 = uStack_50 & 0xffffffff00000000;
          if (bVar7) {
            FUN_1446f8c06(&local_58,0);
          }
          if (local_58 != (undefined2 *)0x0) {
            *local_58 = 0;
          }
        }
        uVar6 = uVar6 + 1;
      } while (local_78 != uVar6);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  *(undefined2 *)param_2[1] = 0;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1190e FUN_146f1190e body=17 status=ok
// SIG undefined FUN_146f1190e(void)

void FUN_146f1190e(longlong param_1)

{
  if ((*(byte *)(param_1 + 0xb8) & 8) != 0) {
    LOCK();
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 146f11920 FUN_146f11920 body=382 status=ok
// SIG undefined FUN_146f11920(void)

void FUN_146f11920(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined5 uStack_180;
  undefined3 uStack_17b;
  undefined5 uStack_178;
  undefined8 uStack_173;
  undefined8 local_168;
  byte local_160;
  undefined8 local_158 [26];
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((*(byte *)(param_1 + 0xb8) & 8) != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0xbc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      lVar6 = *(longlong *)(param_1 + 0xc0);
      if (lVar6 != 0) {
        if ((*(byte *)(param_1 + 0xb8) & 0x40) != 0) {
          local_158[0] = 0;
          local_158[1] = 0;
          lVar4 = 0x18;
          do {
            *(undefined8 *)((longlong)local_158 + lVar4) = 0;
            lVar4 = lVar4 + 0x18;
          } while (lVar4 != 0xd8);
          local_88 = 0;
          local_70 = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_60 = 0;
          uStack_58 = 0;
          local_50 = 0;
          uStack_48 = 0;
          local_40 = 0xffffffff00000000;
          local_38 = local_38 & 0xfc;
          puStack_68 = &local_188;
          local_168 = 0;
          local_188 = 0;
          uStack_180 = 0;
          uStack_17b = 0;
          uStack_178 = 0;
          uStack_173 = 0;
          local_160 = local_160 & 0xfc;
          FUN_146f3ac12(local_158,lVar6,param_1);
        }
        FUN_1400020a8(lVar6);
      }
      uVar3 = *(ushort *)(param_1 + 0x7c);
      if (uVar3 != 0) {
        lVar6 = 8;
        uVar5 = 0;
        do {
          puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + lVar6);
          if ((*(byte *)(puVar2 + 1) & 1) != 0) {
            (**(code **)*puVar2)(puVar2,0);
            uVar3 = *(ushort *)(param_1 + 0x7c);
          }
          uVar5 = uVar5 + 1;
          lVar6 = lVar6 + 0x10;
        } while (uVar5 < uVar3);
      }
      uVar3 = *(ushort *)(param_1 + 0x7e);
      if (uVar3 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x20);
        lVar4 = 0;
        do {
          FUN_146f11920(*(undefined8 *)(lVar6 + 8 + lVar4));
          lVar4 = lVar4 + 0x10;
        } while ((ulonglong)uVar3 * 0x10 != lVar4);
      }
      FUN_1400020a8(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f11aa0 FUN_146f11aa0 body=125 status=ok
// SIG undefined FUN_146f11aa0(void)

undefined8 FUN_146f11aa0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  int local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_14 = 0xffffffff;
  local_18 = (*(uint *)(param_2 + 4) >> 10 & 8) + (*(uint *)(param_2 + 4) >> 9 & 4) + 3;
  local_30 = param_3;
  FUN_142a6f4a0(param_1,*(undefined8 *)(*param_2 + 0x70),&local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f11b1e FUN_146f11b1e body=37 status=ok
// SIG undefined FUN_146f11b1e(void)

void FUN_146f11b1e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xffffffe0 | 7;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  return;
}



// FUNCTION 146f11b44 FUN_146f11b44 body=145 status=ok
// SIG undefined FUN_146f11b44(void)

undefined8 FUN_146f11b44(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0xffffffff00000007;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = param_3;
  FUN_146f11bd6(param_2,local_58);
  FUN_142a6ff0c(param_1,local_58,uVar1,local_58 + 2);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f11bd6 FUN_146f11bd6 body=572 status=ok
// SIG undefined FUN_146f11bd6(void)

void FUN_146f11bd6(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_288 [40];
  ulonglong local_260;
  int local_258;
  ulonglong local_250;
  ulonglong local_248 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  memset(local_248,0,0x200);
  uVar3 = FUN_144a797b2();
  uVar4 = FUN_1449e2fb2();
  local_260 = param_1;
  if (param_1 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_288);
  }
  lVar8 = 0x40;
  do {
    lVar5 = lVar8;
    if (lVar5 == 0) break;
    local_248[(int)lVar5 - 1] = local_260;
    if ((((local_260 & 1) != 0) && ((local_260 & 0xfffffffffffffffe) != 0)) &&
       (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c(local_260 & 0xfffffffffffffffe);
    }
    cVar2 = FUN_144affa3a(&local_260,uVar3);
    if (cVar2 != '\0') break;
    cVar2 = FUN_144affa3a(&local_260,uVar4);
    if (cVar2 != '\0') break;
    FUN_14689ae88(&local_260,&local_250);
    local_260 = local_250;
    if ((((local_250 & 1) != 0) && ((local_250 & 0xfffffffffffffffe) != 0)) &&
       (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c();
    }
    lVar8 = lVar5 + -1;
  } while (1 < local_260);
  FUN_14005eb28(param_2,0x200);
  lVar8 = lVar5 + -0x41 + (ulonglong)(lVar5 == 0);
  do {
    uVar1 = (&local_48)[lVar8];
    if ((uVar1 & 0xfffffffffffffffe) == 0 || (uVar1 & 1) == 0) {
      if (uVar1 != 0 && (uVar1 & 1) == 0) {
        FUN_1400021e4(uVar1 + 0x20,&local_260);
        iVar7 = local_258 + -1;
        if (local_258 == 0) {
          iVar7 = 0;
        }
        FUN_1400020e8(param_2,local_260,iVar7);
        puVar6 = &DAT_149dfb77a;
        if (lVar8 != -1) {
          puVar6 = (undefined2 *)&DAT_149e0635c;
        }
        FUN_1400020e8(param_2,puVar6,lVar8 != -1);
        goto LAB_146f11da1;
      }
    }
    else {
      local_250 = *(ulonglong *)((uVar1 & 0xfffffffffffffffe) + 0x18);
      FUN_1400021e4(&local_250,&local_260);
      iVar7 = local_258 + -1;
      if (local_258 == 0) {
        iVar7 = 0;
      }
      FUN_1400020e8(param_2,local_260,iVar7);
      FUN_140002184(param_2,0x2e);
LAB_146f11da1:
      if (local_260 != 0) {
        FUN_1400020a8();
      }
    }
    lVar8 = lVar8 + 1;
    if (lVar8 == 0) {
      if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 146f11e34 FUN_146f11e34 body=2386 status=ok
// SIG undefined FUN_146f11e34(void)

undefined8 *
FUN_146f11e34(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             longlong *param_5)

{
  uint uVar1;
  wchar_t *_Str;
  longlong *plVar2;
  size_t sVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  void *pvVar7;
  size_t sVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined2 uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  uint uVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  short sVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  uint local_1fc;
  undefined8 *local_1f8;
  undefined8 local_1f0;
  void *local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  size_t local_1d8 [6];
  longlong local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  ulonglong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  ulonglong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  longlong local_110;
  ulonglong local_108;
  longlong local_100;
  longlong local_f8 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  uint local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar17 = (longlong)*(int *)(param_1 + 0x18);
  iVar12 = *(int *)(param_1 + 0x28);
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 1;
  local_78 = 0;
  local_50 = '\x01';
  local_70 = (undefined4)*param_5;
  uStack_6c = *(undefined4 *)((longlong)param_5 + 4);
  uStack_68 = (undefined4)param_5[1];
  uStack_64 = *(undefined4 *)((longlong)param_5 + 0xc);
  local_60 = (undefined4)param_5[2];
  uStack_5c = *(undefined4 *)((longlong)param_5 + 0x14);
  iStack_58 = (int)param_5[3];
  uStack_54 = *(undefined4 *)((longlong)param_5 + 0x1c);
  local_208 = param_2;
  local_1f8 = param_3;
  FUN_146f127c6(param_1,&local_e8,param_4);
  FUN_146f12c6e(param_1,&local_d8,&local_e8);
  FUN_146f12b7c(param_1,&local_c0,&local_e8);
  FUN_146f12d86(param_1,&local_e8,param_4);
  uVar5 = FUN_146f140e0(param_1);
  memset(&local_1a8,0,0xc0);
  local_1d8[2] = 0;
  local_1d8[3] = 200;
  local_1d8[5] = lVar17 * 8;
  local_1d8[4] = 200;
  if (iStack_58 == 0) {
    local_1a8 = local_1d8[5] + 200;
    local_1a0 = lVar17 * 4;
    lVar15 = local_1a8 + lVar17 * 4;
  }
  else {
    lVar15 = local_1d8[5] + 200;
  }
  local_198 = lVar15 + 7U & 0xfffffffffffffff8;
  local_190 = lVar17 * 0x10;
  local_188 = local_198 + local_190;
  local_180 = lVar17 * 2;
  local_178 = local_188 + lVar17 * 2 + 7U & 0xfffffffffffffff8;
  local_170 = (ulonglong)local_b0 * 0x10;
  local_168 = local_170 + local_178;
  local_160 = (ulonglong)local_c8 * 0xc;
  local_158 = local_160 + local_168 + 4U & 0xfffffffffffffff8;
  local_150 = (longlong)iVar12 * 0x10;
  lVar14 = local_150 + local_158;
  lVar15 = lVar14;
  if (local_50 == '\x01') {
    local_138 = lVar14 + local_1d8[5];
    lVar15 = local_138 + local_190;
    local_148 = lVar14;
    local_140 = local_1d8[5];
    local_130 = local_190;
  }
  lVar14 = lVar15;
  if ((uVar5 & 2) != 0) {
    lVar14 = lVar15 + lVar17;
    local_128 = lVar15;
    local_120 = lVar17;
  }
  if (((iStack_58 == 3) || (iStack_58 == 0)) && (0 < (longlong)*(int *)(param_1 + 0x18))) {
    lVar17 = 0;
    uVar18 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar17) + 0x40);
      if ((ushort)uVar1 <= (ushort)uVar18) {
        uVar1 = uVar18;
      }
      uVar18 = uVar1;
      lVar17 = lVar17 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0x18) * 0x48 != lVar17);
    local_118 = lVar14 + 1U & 0xfffffffffffffffe;
    local_110 = (ulonglong)(uVar18 & 0xffff) * 2 + 2;
    lVar14 = local_118 + (ulonglong)(uVar18 & 0xffff) * 2 + 2;
  }
  local_108 = lVar14 + 7U & 0xfffffffffffffff8;
  local_1d8[0] = local_108 + local_1d8[5];
  local_1d8[1] = 8;
  local_100 = local_1d8[5];
  FUN_146f13bfe(local_1d8,local_f8,&local_e8);
  sVar3 = local_1d8[0];
  pvVar7 = (void *)FUN_14001cc68(local_1d8[0]);
  if (pvVar7 == (void *)0x0) {
    *local_208 = 0;
    puVar22 = local_208;
    goto LAB_146f1215e;
  }
  memset(pvVar7,0,sVar3);
  sVar3 = local_1d8[2];
  puVar23 = (undefined8 *)((longlong)pvVar7 + local_1d8[2]);
  *(undefined4 *)((longlong)pvVar7 + local_1d8[2] + 0xbc) = 0;
  _Str = (wchar_t *)*local_1f8;
  sVar8 = wcslen(_Str);
  uVar9 = FUN_146efdb37(_Str,sVar8 & 0xffffffff);
  *(undefined8 *)((longlong)pvVar7 + sVar3 + 0x60) = uVar9;
  *(uint *)((longlong)pvVar7 + sVar3 + 0xb8) = uVar5;
  if (iStack_58 == 0) {
    local_98 = (local_98 + 3U & 0xfffffffffffffffc) + 4;
    uVar13 = 4;
    if (4 < local_90) {
      uVar13 = local_90;
    }
    local_90 = uVar13;
    FUN_146f135dc(param_1,local_1a8 + (longlong)pvVar7,puVar23,&local_e8);
  }
  lVar17 = local_1d8[4] + (longlong)pvVar7;
  if (local_1d8[5] == 0) {
    lVar17 = 0;
  }
  if (iStack_58 - 1U < 2) {
    FUN_146f134d2();
  }
  else {
    FUN_146f13424(param_1,lVar17,puVar23,&local_e8);
  }
  if (local_190 != 0) {
    puVar22 = (undefined8 *)(local_198 + (longlong)pvVar7);
    iVar12 = *(int *)(param_1 + 0x18);
    local_1fc = uVar5;
    if ((longlong)iVar12 != 0) {
      lVar17 = *(longlong *)(param_1 + 0x10);
      lVar15 = 0;
      puVar16 = puVar22;
      do {
        uVar9 = (**(code **)(**(longlong **)(lVar17 + 0x10 + lVar15) + 0x10))();
        *puVar16 = uVar9;
        puVar16[1] = 0;
        puVar16 = puVar16 + 2;
        lVar15 = lVar15 + 0x48;
      } while ((longlong)iVar12 * 0x48 != lVar15);
    }
    puVar23[2] = puVar22;
    uVar5 = local_1fc;
  }
  if (local_180 != 0) {
    FUN_146f1382a(param_1);
  }
  if (local_170 != 0) {
    FUN_146f138a6(local_178 + (longlong)pvVar7);
  }
  if (local_160 != 0) {
    FUN_146f1395e(local_168 + (longlong)pvVar7);
  }
  if (local_150 != 0) {
    lVar17 = local_158 + (longlong)pvVar7;
    uVar11 = 0;
    if ((longlong)(int)uStack_a0 != 0) {
      lVar15 = 0;
      do {
        *(undefined8 *)(lVar17 + lVar15) = *(undefined8 *)(local_a8 + lVar15);
        lVar14 = *(longlong *)(local_a8 + 8 + lVar15);
        *(longlong *)(lVar17 + 8 + lVar15) = lVar14;
        if ((*(byte *)(lVar14 + 0xb8) & 8) != 0) {
          LOCK();
          *(int *)(lVar14 + 0xbc) = *(int *)(lVar14 + 0xbc) + 1;
          UNLOCK();
        }
        lVar14 = local_a8 + lVar15;
        lVar15 = lVar15 + 0x10;
      } while (lVar14 + 0x10 != (longlong)(int)uStack_a0 * 0x10 + local_a8);
      uVar11 = (undefined2)uStack_a0;
    }
    *(undefined2 *)((longlong)puVar23 + 0x7e) = uVar11;
    puVar23[4] = lVar17;
  }
  if (local_140 != 0) {
    iVar12 = *(int *)(param_1 + 0x18);
    if ((longlong)iVar12 != 0) {
      lVar17 = *(longlong *)(param_1 + 0x10);
      lVar15 = 0;
      puVar22 = (undefined8 *)(local_148 + (longlong)pvVar7);
      do {
        *puVar22 = *(undefined8 *)(lVar17 + lVar15);
        puVar22 = puVar22 + 1;
        lVar15 = lVar15 + 0x48;
      } while ((longlong)iVar12 * 0x48 != lVar15);
    }
    puVar23[7] = (undefined8 *)(local_148 + (longlong)pvVar7);
  }
  if (local_130 != 0) {
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      plVar10 = *(longlong **)(param_1 + 0x10);
      plVar2 = plVar10 + (longlong)*(int *)(param_1 + 0x18) * 9;
      sVar21 = 0;
      plVar19 = (longlong *)(local_138 + (longlong)pvVar7);
      lVar17 = 0;
      do {
        lVar15 = *plVar10;
        sVar21 = sVar21 + 1;
        if (lVar15 != lVar17) {
          sVar21 = 0;
        }
        if (lVar17 == 0) {
          sVar21 = 0;
        }
        *plVar19 = plVar10[1];
        *(short *)(plVar19 + 1) = sVar21;
        plVar19 = plVar19 + 2;
        plVar10 = plVar10 + 9;
        lVar17 = lVar15;
      } while (plVar10 != plVar2);
    }
    puVar23[8] = (longlong *)(local_138 + (longlong)pvVar7);
  }
  if (local_120 != 0) {
    iVar12 = *(int *)(param_1 + 0x18);
    if ((longlong)iVar12 != 0) {
      lVar17 = *(longlong *)(param_1 + 0x10);
      lVar15 = 0;
      puVar20 = (undefined1 *)(local_128 + (longlong)pvVar7);
      do {
        *puVar20 = *(undefined1 *)(lVar17 + 0x24 + lVar15);
        puVar20 = puVar20 + 1;
        lVar15 = lVar15 + 0x48;
      } while ((longlong)iVar12 * 0x48 != lVar15);
    }
    puVar23[9] = (undefined1 *)(local_128 + (longlong)pvVar7);
  }
  if (local_110 != 0) {
    FUN_146f13a62(param_1,local_118 + (longlong)pvVar7,puVar23);
  }
  if (0xffff < uVar5) {
    lVar17 = *(longlong *)(param_1 + 0x40);
    do {
      lVar17 = *(longlong *)(lVar17 + 0x40);
      if (lVar17 == 0) goto LAB_146f12535;
      lVar15 = FUN_146f0befe(*(undefined8 *)(lVar17 + 0x18));
    } while (lVar15 == 0);
    lVar15 = FUN_1446f4bba();
    if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(lVar15 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8
         ) != lVar15 + 0x30)) {
LAB_146f12535:
      lVar17 = 0;
    }
    puVar23[0xb] = lVar17;
  }
  if (local_100 != 0) {
    FUN_146f13b22(param_1,local_108 + (longlong)pvVar7,puVar23);
  }
  FUN_146f13c80(param_1,local_f8[0] + (longlong)pvVar7,puVar23,&local_e8);
  if (iStack_58 == 0) {
    FUN_146f13fce(puVar23);
  }
  uVar5 = *(uint *)(puVar23 + 0x17);
  if ((uVar5 >> 0xb & 1) != 0) {
    *(undefined4 *)*puVar23 = 0;
    uVar6 = FUN_146f14054(*(undefined8 *)puVar23[7]);
    *(undefined4 *)(puVar23 + 0x11) = uVar6;
    uVar5 = *(uint *)(puVar23 + 0x17);
  }
  *(short *)(puVar23 + 0xf) = (short)local_90;
  *(int *)(puVar23 + 0xe) = -(int)local_90 & (int)local_90 + -1 + (int)local_98;
  *(short *)((longlong)puVar23 + 0x7a) = (short)local_80;
  *(int *)((longlong)puVar23 + 0x74) = -(int)local_80 & (int)local_80 + -1 + (int)local_88;
  puVar23[0x14] = FUN_146f0a054;
  puVar23[0x15] = FUN_146f0a0dc;
  if ((uVar5 >> 10 & 1) == 0) {
    if ((*(short *)((longlong)puVar23 + 0x7c) == 1) &&
       (lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18), lVar17 != 0))
    goto LAB_146f12646;
  }
  else {
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
LAB_146f12646:
    puVar23[0x16] = lVar17;
  }
  plVar2 = (longlong *)*param_5;
  if (plVar2 == (longlong *)0x0) {
LAB_146f12672:
    uVar9 = 0;
  }
  else {
    iVar12 = (int)((ulonglong)(plVar2[1] - *plVar2) >> 1);
    if (iVar12 == 0) goto LAB_146f12672;
    uVar9 = FUN_1447addd0(*plVar2,iVar12 * 2);
  }
  local_1e8 = (void *)0x0;
  local_1e0 = *(int *)(local_1f8 + 1);
  lVar17 = (longlong)local_1e0;
  pvVar7 = (void *)*local_1f8;
  if (lVar17 == 0) {
    local_1dc = 0;
  }
  else {
    FUN_1446dd670(&local_1e8,local_1e0,0);
    memcpy(local_1e8,pvVar7,lVar17 * 2);
  }
  puVar22 = local_208;
  FUN_1427469b0(&local_1e8);
  uVar9 = FUN_144859ac6(local_1e8,local_1e0 * 2,uVar9);
  puVar23[0x12] = uVar9;
  if ((*(int *)((longlong)puVar23 + 0x74) != 0) && (param_5[1] != 0)) {
    FUN_146f12eea(param_5[1],puVar23,param_5[2],puVar23 + 0x18);
    local_1f0 = 0;
    cVar4 = FUN_146f130ca(puVar23,param_5[2]);
    if (cVar4 != '\0') {
      puVar23[0x13] = local_1f0;
    }
  }
  *puVar22 = puVar23;
  if ((puVar23 != (undefined8 *)0x0) && ((*(byte *)(puVar23 + 0x17) & 8) != 0)) {
    LOCK();
    *(int *)((longlong)puVar23 + 0xbc) = *(int *)((longlong)puVar23 + 0xbc) + 1;
    UNLOCK();
  }
  if (local_1e8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_146f1215e:
  FUN_146f14250(&local_e8);
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar22;
}



// FUNCTION 146f12788 FUN_146f12788 body=61 status=ok
// SIG undefined FUN_146f12788(void)

void FUN_146f12788(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f127c6 FUN_146f127c6 body=825 status=ok
// SIG undefined FUN_146f127c6(void)

void FUN_146f127c6(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  undefined *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 uVar24;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar21 = -(uint)(0 < *(int *)(param_1 + 0x18));
  local_60 = param_3;
  FUN_146f12b00(param_2);
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
    uVar20 = 0;
    uVar24 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x10);
    lVar8 = *param_2;
    lVar23 = lVar8 + 0x40;
    local_58 = (longlong)*(int *)(param_1 + 0x18) * 0x48;
    lVar22 = 0;
    uVar24 = 0;
    uVar20 = 0;
    local_68 = param_2;
    do {
      plVar1 = (longlong *)(lVar22 + lVar7);
      plVar9 = *(longlong **)(lVar7 + 0x10 + lVar22);
      puVar17 = (undefined *)(**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)(lVar7 + lVar22));
      *(undefined **)(lVar8 + lVar22) = puVar17;
      if (puVar17 == &DAT_14c99c038) {
        FUN_146f11aa0(&local_50,plVar1,local_60);
        lVar10 = *(longlong *)(lVar8 + 8 + lVar22);
        *(longlong *)(lVar8 + 8 + lVar22) = local_50;
        lVar18 = local_50;
        if (lVar10 != 0) {
          FUN_146f11920();
          lVar18 = *(longlong *)(lVar8 + 8 + lVar22);
        }
        if (DAT_14c9994c8 == '\x01') {
          FUN_142a6fe3a(plVar1,lVar18);
          lVar18 = *(longlong *)(lVar8 + 8 + lVar22);
        }
        uVar16 = *(uint *)(lVar18 + 0xb8);
        if ((uVar16 & 4) != 0) {
          pbVar4 = (byte *)(lVar7 + 0x20 + lVar22);
          *pbVar4 = *pbVar4 | 0x40;
          uVar16 = *(uint *)(lVar18 + 0xb8);
        }
        if ((uVar16 & 0x40) != 0) {
          pbVar4 = (byte *)(lVar7 + 0x20 + lVar22);
          *pbVar4 = *pbVar4 | 0x20;
          uVar16 = *(uint *)(lVar18 + 0xb8);
        }
        if ((uVar16 >> 0xc & 1) != 0) {
          pbVar4 = (byte *)(lVar7 + 0x22 + lVar22);
          *pbVar4 = *pbVar4 | 1;
          uVar16 = *(uint *)(lVar18 + 0xb8);
        }
        if ((short)uVar16 < 0) {
          pbVar4 = (byte *)(lVar7 + 0x22 + lVar22);
          *pbVar4 = *pbVar4 | 4;
          uVar16 = *(uint *)(lVar18 + 0xb8);
        }
        if ((uVar16 >> 9 & 1) == 0) {
          *(byte *)((longlong)local_68 + 0x94) = *(byte *)((longlong)local_68 + 0x94) & 0xfd;
        }
        iVar6 = *(int *)(*plVar1 + 0x34);
        iVar15 = (**(code **)(*(longlong *)*plVar1 + 0x178))();
        *(longlong *)(lVar8 + 0x10 + lVar22) = (longlong)iVar6;
        *(longlong *)(lVar8 + 0x18 + lVar22) = (longlong)iVar15;
        uVar5 = *(ushort *)(lVar18 + 0x7a);
        *(ulonglong *)(lVar8 + 0x20 + lVar22) = (ulonglong)*(uint *)(lVar18 + 0x74);
        *(ulonglong *)(lVar8 + 0x28 + lVar22) = (ulonglong)uVar5;
        *(byte *)(lVar23 + lVar22) = *(byte *)(lVar23 + lVar22) | 2;
LAB_146f128a7:
        uVar24 = 1;
      }
      else {
        if (puVar17 == &DAT_14c99bf88) {
          FUN_146f11b44(&local_50,*plVar1,local_60);
          lVar10 = *(longlong *)(lVar8 + 8 + lVar22);
          *(longlong *)(lVar8 + 8 + lVar22) = local_50;
          lVar18 = local_50;
          if (lVar10 != 0) {
            FUN_146f11920();
            lVar18 = *(longlong *)(lVar8 + 8 + lVar22);
          }
          uVar16 = *(uint *)(lVar18 + 0xb8);
          if ((uVar16 & 4) != 0) {
            pbVar4 = (byte *)(lVar7 + 0x20 + lVar22);
            *pbVar4 = *pbVar4 | 0x40;
            uVar16 = *(uint *)(lVar18 + 0xb8);
          }
          if ((short)uVar16 < 0) {
            pbVar4 = (byte *)(lVar7 + 0x22 + lVar22);
            *pbVar4 = *pbVar4 | 4;
            uVar16 = *(uint *)(lVar18 + 0xb8);
          }
          if ((uVar16 >> 9 & 1) == 0) {
            *(byte *)((longlong)local_68 + 0x94) = *(byte *)((longlong)local_68 + 0x94) & 0xfd;
          }
          iVar6 = *(int *)(*plVar1 + 0x34);
          iVar15 = (**(code **)(*(longlong *)*plVar1 + 0x178))();
          *(longlong *)(lVar8 + 0x10 + lVar22) = (longlong)iVar6;
          *(longlong *)(lVar8 + 0x18 + lVar22) = (longlong)iVar15;
          uVar19 = (ulonglong)DAT_14c99bffa;
          *(ulonglong *)(lVar8 + 0x20 + lVar22) = (ulonglong)DAT_14c99bff8;
          *(ulonglong *)(lVar8 + 0x28 + lVar22) = uVar19;
          *(byte *)(lVar23 + lVar22) = *(byte *)(lVar23 + lVar22) | 4;
          goto LAB_146f128a7;
        }
        plVar1 = (longlong *)*plVar1;
        if (plVar1 != (longlong *)0x0) {
          iVar6 = *(int *)((longlong)plVar1 + 0x34);
          iVar15 = (**(code **)(*plVar1 + 0x178))();
          *(longlong *)(lVar8 + 0x10 + lVar22) = (longlong)iVar6;
          *(longlong *)(lVar8 + 0x18 + lVar22) = (longlong)iVar15;
          uVar5 = *(ushort *)(puVar17 + 0x72);
          *(ulonglong *)(lVar8 + 0x20 + lVar22) = (ulonglong)*(ushort *)(puVar17 + 0x70);
          *(ulonglong *)(lVar8 + 0x28 + lVar22) = (ulonglong)uVar5;
          goto LAB_146f128a7;
        }
        puVar2 = (undefined4 *)(lVar7 + 0x38 + lVar22);
        uVar11 = puVar2[1];
        uVar12 = puVar2[2];
        uVar13 = puVar2[3];
        puVar3 = (undefined4 *)(lVar8 + 0x10 + lVar22);
        *puVar3 = *puVar2;
        puVar3[1] = uVar11;
        puVar3[2] = uVar12;
        puVar3[3] = uVar13;
        uVar5 = *(ushort *)(puVar17 + 0x72);
        *(ulonglong *)(lVar8 + 0x20 + lVar22) = (ulonglong)*(ushort *)(puVar17 + 0x70);
        *(ulonglong *)(lVar8 + 0x28 + lVar22) = (ulonglong)uVar5;
      }
      uVar5 = *(ushort *)(puVar17 + 0x76);
      *(ulonglong *)(lVar8 + 0x30 + lVar22) = (ulonglong)*(ushort *)(puVar17 + 0x74);
      *(ulonglong *)(lVar8 + 0x38 + lVar22) = (ulonglong)uVar5;
      plVar1 = *(longlong **)(lVar7 + 0x10 + lVar22);
      bVar14 = (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(lVar7 + lVar22));
      *(uint *)(lVar23 + lVar22) = *(uint *)(lVar23 + lVar22) & 0xfffffffe | (uint)bVar14;
      uVar16 = *(uint *)(lVar7 + 0x20 + lVar22);
      uVar20 = uVar20 | uVar16;
      uVar21 = uVar21 & uVar16;
      lVar22 = lVar22 + 0x48;
      param_2 = local_68;
    } while (local_58 != lVar22);
  }
  *(uint *)(param_2 + 0xe) = uVar20;
  *(uint *)((longlong)param_2 + 0x74) = uVar21;
  *(undefined1 *)(param_2 + 0x13) = uVar24;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f12b00 FUN_146f12b00 body=122 status=ok
// SIG undefined FUN_146f12b00(void)

void FUN_146f12b00(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f1bfee(param_1,iVar1);
    }
    FUN_146f1bfc3((longlong)iVar1 * 0x48 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146f1c082(param_1,param_2,iVar1 - param_2);
    FUN_146f1c0e4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f12b7c FUN_146f12b7c body=242 status=ok
// SIG undefined FUN_146f12b7c(void)

void FUN_146f12b7c(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((longlong)(int)param_3[1] != 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar8 = *param_3;
    lVar1 = lVar8 + (longlong)(int)param_3[1] * 0x48;
    uVar7 = 0;
    do {
      lVar5 = FUN_142a7044e(lVar8,lVar4 + (ulonglong)uVar7 * 0x48);
      if (lVar5 != 0) {
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_146f1c192(param_2,iVar3);
        }
        lVar6 = *param_2;
        lVar9 = (longlong)iVar3 * 0x10;
        *(longlong *)(lVar6 + lVar9) = lVar5;
        *(ushort *)(lVar6 + 8 + lVar9) = uVar7;
        *(undefined1 *)(lVar6 + 10 + lVar9) = 0;
      }
      if (((*(longlong *)(lVar8 + 8) != 0) && ((*(byte *)(lVar8 + 0x40) & 4) == 0)) &&
         (uVar2 = *(ushort *)(*(longlong *)(lVar8 + 8) + 0x80), uVar2 != 0)) {
        *(uint *)(param_2 + 2) = (int)param_2[2] + (uint)uVar2;
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_146f1c192(param_2,iVar3);
        }
        lVar5 = *param_2;
        lVar6 = (longlong)iVar3 * 0x10;
        *(undefined8 *)(lVar5 + lVar6) = 0;
        *(ushort *)(lVar5 + 8 + lVar6) = uVar7;
        *(undefined1 *)(lVar5 + 10 + lVar6) = 1;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x48;
    } while (lVar8 != lVar1);
  }
  return;
}



// FUNCTION 146f12c6e FUN_146f12c6e body=280 status=ok
// SIG undefined FUN_146f12c6e(void)

void FUN_146f12c6e(longlong param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint in_R10D;
  longlong lVar6;
  uint uVar7;
  uint unaff_R14D;
  uint uVar8;
  
  lVar3 = param_3[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar2 = *param_3;
    lVar6 = 0;
    uVar7 = 0;
    do {
      if ((*(byte *)(lVar1 + 0x20 + (ulonglong)uVar7 * 0x48) & 0x40) != 0) {
        uVar4 = *(uint *)(lVar2 + 0x40 + lVar6);
        if ((uVar4 & 2) == 0) {
          if (((uVar4 & 4) == 0) && ((*(byte *)(*(longlong *)(lVar2 + lVar6) + 4) & 8) == 0)) {
            *(int *)(param_2 + 2) = (int)param_2[2] + 1;
            param_4 = param_4 & 0xfffffffe;
            iVar5 = (int)param_2[1];
            uVar4 = iVar5 + 1;
            *(uint *)(param_2 + 1) = uVar4;
            uVar8 = param_4;
          }
          else {
            *(int *)(param_2 + 2) = (int)param_2[2] + 1;
            in_R10D = in_R10D | 1;
            iVar5 = (int)param_2[1];
            uVar4 = iVar5 + 1;
            *(uint *)(param_2 + 1) = uVar4;
            uVar8 = in_R10D;
          }
        }
        else {
          *(uint *)(param_2 + 2) =
               (int)param_2[2] + (uint)*(ushort *)(*(longlong *)(lVar2 + 8 + lVar6) + 0x82);
          uVar8 = unaff_R14D | 1;
          iVar5 = (int)param_2[1];
          uVar4 = iVar5 + 1;
          *(uint *)(param_2 + 1) = uVar4;
          unaff_R14D = uVar8;
        }
        if (*(uint *)((longlong)param_2 + 0xc) < uVar4) {
          FUN_146f1c218(param_2,iVar5);
        }
        *(ulonglong *)(*param_2 + (longlong)iVar5 * 8) = CONCAT44(uVar8,uVar7);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x48;
    } while ((longlong)(int)lVar3 * 0x48 != lVar6);
  }
  return;
}



// FUNCTION 146f12d86 FUN_146f12d86 body=233 status=ok
// SIG undefined FUN_146f12d86(void)

void FUN_146f12d86(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146f12e70((longlong *)(param_2 + 0x40),*(undefined4 *)(param_1 + 0x28));
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = *(longlong *)(param_2 + 0x40);
    lVar6 = 0;
    do {
      uVar4 = *(undefined8 *)(lVar2 + lVar6);
      *(undefined8 *)(lVar3 + lVar6 * 2) = uVar4;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = local_68 & 0xffffffe0 | 7;
      local_64 = 0xffffffff;
      local_80 = param_3;
      FUN_142a700e0(&local_88,uVar4,&local_80);
      lVar5 = *(longlong *)(lVar3 + 8 + lVar6 * 2);
      *(undefined8 *)(lVar3 + 8 + lVar6 * 2) = local_88;
      if (lVar5 != 0) {
        FUN_146f11920();
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f12e70 FUN_146f12e70 body=121 status=ok
// SIG undefined FUN_146f12e70(void)

void FUN_146f12e70(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f1c33c(param_1,iVar1);
    }
    FUN_146f1c29d((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146f1c3c2(param_1,param_2,iVar1 - param_2);
    FUN_146f1c41c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f12eea FUN_146f12eea body=479 status=ok
// SIG undefined FUN_146f12eea(void)

void FUN_146f12eea(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_208 [40];
  longlong *local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined5 uStack_1a0;
  undefined3 uStack_19b;
  undefined5 uStack_198;
  undefined8 uStack_193;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178 [26];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1e0 = param_4;
  lVar4 = FUN_14153c902(*(undefined4 *)((longlong)param_2 + 0x74),
                        *(undefined2 *)((longlong)param_2 + 0x7a));
  local_178[0] = 0;
  local_178[1] = 0;
  lVar5 = 0x18;
  do {
    *(undefined8 *)((longlong)local_178 + lVar5) = 0;
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0xd8);
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0xffffffff00000000;
  local_188 = 0;
  local_180 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  uStack_19b = 0;
  uStack_198 = 0;
  uStack_193 = 0;
  if (param_3 == 0) {
    local_188 = FUN_142a704f6();
  }
  else {
    FUN_146f589c2(&local_1a8,param_3);
  }
  puStack_88 = &local_1a8;
  local_58 = local_58 & 0xfffffffc | 2;
  uVar1 = *(ushort *)((longlong)param_2 + 0x7c);
  if (uVar1 != 0) {
    local_1d8 = *param_2;
    lVar5 = param_2[2];
    lVar2 = param_2[7];
    lVar3 = param_2[8];
    lVar6 = 0;
    do {
      local_1c0 = 0;
      local_1c8 = 0;
      local_1d0 = *(undefined8 *)(lVar5 + 8 + lVar6 * 2);
      local_1b8 = (ulonglong)*(ushort *)(lVar3 + 8 + lVar6 * 2) *
                  (longlong)*(int *)(*(longlong *)(lVar2 + lVar6) + 0x34) +
                  *(int *)(*(longlong *)(lVar2 + lVar6) + 0x44) + param_1;
      local_1b0 = (ulonglong)*(uint *)(local_1d8 + 4 + lVar6) + lVar4;
      (**(code **)(*(longlong *)(lVar5 + lVar6 * 2) + 0x28))(local_178,&local_1d0);
      lVar6 = lVar6 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar6);
  }
  *local_1e0 = lVar4;
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f130ca FUN_146f130ca body=718 status=ok
// SIG undefined FUN_146f130ca(void)

ulonglong FUN_146f130ca(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_5f8 [32];
  undefined8 local_5d8;
  undefined5 uStack_5d0;
  undefined3 uStack_5cb;
  undefined5 uStack_5c8;
  undefined8 uStack_5c3;
  undefined8 local_5b8;
  undefined4 local_5b0;
  undefined1 local_5a8 [12];
  int local_59c;
  int local_598;
  int local_590;
  longlong local_588 [26];
  undefined4 local_4b8;
  longlong local_4b0;
  undefined1 *local_4a8;
  undefined8 local_4a0;
  undefined8 *puStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  uint local_468;
  undefined1 local_458 [1024];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_5f8;
  plVar3 = (longlong *)FUN_145b2d918();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar4 = plVar3[0x22];
  }
  uVar1 = *(uint *)(lVar4 + 0x28);
  uVar2 = *(uint *)(lVar4 + 0x2c);
  local_58 = (undefined1 *)0x0;
  local_50 = 0x10000000000;
  FUN_146f1339a(local_458,0x100);
  FUN_146f5b27a(local_5a8);
  local_588[0] = 0;
  local_588[1] = 0;
  lVar4 = 0x18;
  do {
    *(undefined8 *)((longlong)local_588 + lVar4) = 0;
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0xd8);
  local_4b8 = 0;
  local_4b0 = 0;
  local_4a0 = 0;
  puStack_498 = (undefined8 *)0x0;
  local_490 = 0;
  uStack_488 = 0;
  local_480 = 0;
  uStack_478 = 0;
  local_470 = 0xffffffff00000000;
  local_5b8 = 0;
  local_5b0 = 0;
  local_5d8 = 0;
  uStack_5d0 = 0;
  uStack_5cb = 0;
  uStack_5c8 = 0;
  uStack_5c3 = 0;
  local_4a8 = local_5a8;
  if (param_2 == 0) {
    local_5b8 = FUN_142a704f6();
  }
  else {
    FUN_146f589c2(&local_5d8,param_2);
  }
  puStack_498 = &local_5d8;
  local_468 = local_468 & 0xfffffffc | 2;
  puVar6 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar6 = local_458;
  }
  FUN_146f5b2d8(local_5a8,puVar6,0x400);
  FUN_142a8e97e(local_588,*(undefined8 *)(param_1 + 0xc0),param_1);
  if (local_590 != 0) {
    uVar7 = (ulonglong)uVar2 * (ulonglong)uVar1;
    FUN_146f1339a(local_458,uVar7 >> 5 & 0xffffffff);
    puVar6 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar6 = local_458;
    }
    FUN_146f5b2d8(local_5a8,puVar6,uVar7 >> 3 & 0xffffffff);
    FUN_142a8e97e(local_588,*(undefined8 *)(param_1 + 0xc0),param_1);
  }
  if ((local_59c - local_598 & 7U) != 0) {
    FUN_146f5435e(local_5a8,0);
  }
  if (((local_588[1] == 0) && ((local_4b0 == 0 || (*(int *)(local_4b0 + 0x14) == 0)))) &&
     ((local_4a8 == (undefined1 *)0x0 || (*(int *)(local_4a8 + 0x18) == 0)))) {
    FUN_146f5b2b2(local_5a8);
    puVar6 = local_458;
    if (local_58 != (undefined1 *)0x0) {
      puVar6 = local_58;
    }
    uVar5 = FUN_1447addd0(puVar6,(local_598 - local_59c) + 7U >> 3);
    *param_3 = uVar5;
    uVar7 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  }
  else {
    uVar7 = 0;
  }
  FUN_146f5b28c(local_5a8);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_5f8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1339a FUN_146f1339a body=136 status=ok
// SIG undefined FUN_146f1339a(void)

void FUN_146f1339a(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x408);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x408) = param_2;
    if ((uint)(*(int *)(param_1 + 0x40c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14063e724(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 4),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x408) = param_2;
    FUN_146f1c4b8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f13424 FUN_146f13424 body=173 status=ok
// SIG undefined FUN_146f13424(void)

void FUN_146f13424(longlong param_1,undefined4 *param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  
  lVar4 = param_4[10];
  uVar5 = param_4[0xb];
  lVar6 = param_4[0xc];
  uVar3 = param_4[0xd];
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *param_4;
    lVar8 = 0;
    puVar9 = param_2;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0x18 + lVar8);
      if (uVar5 < uVar7) {
        uVar5 = uVar7;
      }
      uVar7 = -uVar7 & (lVar4 + uVar7) - 1;
      lVar4 = uVar7 + *(longlong *)(lVar2 + 0x10 + lVar8);
      *puVar9 = (int)uVar7;
      uVar7 = *(ulonglong *)(lVar2 + 0x28 + lVar8);
      if (uVar3 < uVar7) {
        uVar3 = uVar7;
      }
      uVar7 = -uVar7 & (lVar6 + uVar7) - 1;
      lVar6 = uVar7 + *(longlong *)(lVar2 + 0x20 + lVar8);
      puVar9[1] = (int)uVar7;
      puVar9 = puVar9 + 2;
      lVar8 = lVar8 + 0x48;
    } while ((longlong)iVar1 * 0x48 != lVar8);
  }
  *param_3 = param_2;
  *(undefined2 *)((longlong)param_3 + 0x7c) = *(undefined2 *)(param_1 + 0x18);
  param_4[0xb] = uVar5;
  param_4[10] = lVar4;
  param_4[0xd] = uVar3;
  param_4[0xc] = lVar6;
  return;
}



// FUNCTION 146f134d2 FUN_146f134d2 body=265 status=ok
// SIG undefined FUN_146f134d2(void)

void FUN_146f134d2(longlong param_1,int *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  uVar5 = param_4[0xb];
  if ((ulonglong)param_4[0xb] < *(ulonglong *)(param_1 + 0x38)) {
    uVar5 = *(ulonglong *)(param_1 + 0x38);
  }
  lVar8 = param_4[0xc];
  uVar7 = param_4[0xd];
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = *param_4;
    lVar13 = 0;
    uVar6 = 0;
    piVar9 = param_2;
    lVar10 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar13);
      uVar6 = uVar6 + 1;
      if (lVar4 != lVar10) {
        uVar6 = 0;
      }
      uVar12 = *(ulonglong *)(lVar3 + 0x18 + lVar13);
      if (uVar5 < uVar12) {
        uVar5 = uVar12;
      }
      iVar11 = 0;
      if (lVar4 != 0) {
        iVar11 = (uVar6 & 0xffff) * *(int *)(lVar4 + 0x34) + *(int *)(lVar4 + 0x44);
      }
      *piVar9 = iVar11;
      uVar12 = *(ulonglong *)(lVar3 + 0x28 + lVar13);
      if (uVar7 < uVar12) {
        uVar7 = uVar12;
      }
      uVar12 = -uVar12 & (lVar8 + uVar12) - 1;
      lVar8 = uVar12 + *(longlong *)(lVar3 + 0x20 + lVar13);
      piVar9[1] = (int)uVar12;
      piVar9 = piVar9 + 2;
      lVar13 = lVar13 + 0x48;
      lVar10 = lVar4;
    } while ((longlong)iVar1 * 0x48 != lVar13);
  }
  *param_3 = (longlong)param_2;
  *(undefined2 *)((longlong)param_3 + 0x7c) = *(undefined2 *)(param_1 + 0x18);
  uVar12 = param_4[0xb];
  if ((ulonglong)param_4[0xb] < uVar5) {
    uVar12 = uVar5;
  }
  param_4[0xb] = uVar12;
  param_4[10] = param_4[10] + *(longlong *)(param_1 + 0x30);
  param_4[0xd] = uVar7;
  param_4[0xc] = lVar8;
  return;
}



// FUNCTION 146f135dc FUN_146f135dc body=588 status=ok
// SIG undefined FUN_146f135dc(void)

void FUN_146f135dc(longlong param_1,undefined4 *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined2 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_168 [44];
  undefined4 local_13c;
  undefined4 *local_138;
  longlong local_130;
  longlong local_128;
  ulonglong local_120;
  longlong local_118 [24];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar1 = *(uint *)(param_4 + 0x94);
  local_58 = (longlong *)0x0;
  local_50 = 0x1000000000;
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
    uVar12 = 0;
  }
  else {
    lVar13 = *(longlong *)(param_1 + 0x10);
    lVar7 = (longlong)*(int *)(param_1 + 0x18) * 0x48 + lVar13;
    uVar12 = 0;
    puVar8 = param_2;
    local_138 = param_2;
    local_130 = param_3;
    local_128 = param_4;
    do {
      uVar3 = local_50;
      if ((uVar1 & 1) == 0) {
        uVar9 = *(ushort *)(lVar13 + 0x28);
      }
      else {
        uVar9 = 0;
      }
      lVar2 = *(longlong *)(lVar13 + 0x2c);
      if (lVar2 == 0) {
        uVar3 = 0;
        if ((uVar1 & 1) == 0) {
          uVar3 = uVar12;
        }
        *(ushort *)((longlong)puVar8 + 2) = uVar9;
        *(short *)puVar8 = (short)uVar3;
        uVar12 = (ulonglong)((int)uVar12 + (uint)uVar9);
      }
      else {
        plVar11 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar11 = local_118;
        }
        lVar14 = (longlong)(int)local_50;
        if (lVar14 != 0) {
          lVar6 = lVar14 * 0xc;
          do {
            if (*plVar11 == lVar2) {
              if (plVar11 != (longlong *)0x0) {
                *puVar8 = (int)plVar11[1];
                goto LAB_146f1372c;
              }
              break;
            }
            plVar11 = (longlong *)((longlong)plVar11 + 0xc);
            lVar6 = lVar6 + -0xc;
          } while (lVar6 != 0);
        }
        *(ushort *)((longlong)puVar8 + 2) = uVar9;
        uVar4 = 0;
        if ((uVar1 & 1) == 0) {
          uVar4 = (undefined2)uVar12;
        }
        *(undefined2 *)puVar8 = uVar4;
        uVar5 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar5);
        uVar10 = *puVar8;
        if (local_50._4_4_ < uVar5) {
          local_13c = *puVar8;
          local_120 = uVar12;
          FUN_142a77ede(local_118,uVar3 & 0xffffffff);
          uVar12 = local_120;
          uVar10 = local_13c;
        }
        uVar12 = (ulonglong)((int)uVar12 + (uint)uVar9);
        plVar11 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar11 = local_118;
        }
        *(longlong *)((longlong)plVar11 + lVar14 * 0xc) = lVar2;
        *(undefined4 *)((longlong)plVar11 + lVar14 * 0xc + 8) = uVar10;
      }
LAB_146f1372c:
      puVar8 = puVar8 + 1;
      lVar13 = lVar13 + 0x48;
      param_2 = local_138;
      param_3 = local_130;
      param_4 = local_128;
    } while (lVar13 != lVar7);
  }
  *(undefined4 **)(param_3 + 8) = param_2;
  uVar3 = (ulonglong)((int)uVar12 + 0x1fU >> 5);
  lVar13 = 0;
  if ((*(byte *)(param_3 + 0xb8) & 2) != 0) {
    lVar13 = uVar3 * 4;
  }
  *(short *)(param_3 + 0x86) = (short)uVar12;
  *(uint *)(param_3 + 0x88) = *(int *)(param_4 + 0x50) + 3U & 0xfffffffc;
  uVar12 = 4;
  if (4 < *(ulonglong *)(param_4 + 0x58)) {
    uVar12 = *(ulonglong *)(param_4 + 0x58);
  }
  *(ulonglong *)(param_4 + 0x58) = uVar12;
  *(ulonglong *)(param_4 + 0x50) = lVar13 + uVar3 * 4 + (ulonglong)*(uint *)(param_3 + 0x88);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f1382a FUN_146f1382a body=123 status=ok
// SIG undefined FUN_146f1382a(void)

void FUN_146f1382a(longlong param_1,ushort *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  ushort uVar5;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    puVar4 = param_2;
    do {
      uVar5 = *(ushort *)(lVar2 + 0x20 + lVar3) >> 5 & 1 | *puVar4;
      *puVar4 = uVar5;
      uVar5 = *(ushort *)(lVar2 + 0x20 + lVar3) >> 5 & 2 | uVar5;
      *puVar4 = uVar5;
      uVar5 = *(ushort *)(lVar2 + 0x20 + lVar3) & 8 | uVar5;
      *puVar4 = uVar5;
      *puVar4 = (ushort)(*(uint *)(lVar2 + 0x20 + lVar3) >> 0xe) & 0x10 | uVar5;
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + 0x48;
    } while ((longlong)iVar1 * 0x48 != lVar3);
  }
  *(ushort **)(param_3 + 0x18) = param_2;
  return;
}



// FUNCTION 146f138a6 FUN_146f138a6 body=183 status=ok
// SIG undefined FUN_146f138a6(void)

void FUN_146f138a6(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  if ((longlong)(int)param_3[6] != 0) {
    lVar1 = *param_3;
    puVar6 = (undefined8 *)param_3[5];
    puVar3 = puVar6 + (longlong)(int)param_3[6] * 2;
    puVar7 = param_1;
    do {
      if (*(char *)((longlong)puVar6 + 10) == '\x01') {
        lVar2 = *(longlong *)(lVar1 + 8 + (ulonglong)*(ushort *)(puVar6 + 1) * 0x48);
        uVar5 = (ulonglong)*(ushort *)(lVar2 + 0x80);
        if (uVar5 != 0) {
          lVar4 = 0;
          uVar8 = 0;
          do {
            *(undefined8 *)((longlong)puVar7 + lVar4) =
                 *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + lVar4);
            *(undefined2 *)((longlong)puVar7 + lVar4 + 8) = *(undefined2 *)(puVar6 + 1);
            *(short *)((longlong)puVar7 + lVar4 + 10) = (short)uVar8;
            uVar8 = uVar8 + 1;
            lVar4 = lVar4 + 0x10;
          } while (uVar5 != uVar8);
          puVar7 = (undefined8 *)((longlong)puVar7 + lVar4);
        }
      }
      else {
        *puVar7 = *puVar6;
        *(undefined2 *)(puVar7 + 1) = *(undefined2 *)(puVar6 + 1);
        *(undefined2 *)((longlong)puVar7 + 10) = 0xffff;
        puVar7 = puVar7 + 2;
      }
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar3);
  }
  *(undefined8 **)(param_2 + 0x28) = param_1;
  *(short *)(param_2 + 0x80) = (short)param_3[7];
  return;
}



// FUNCTION 146f1395e FUN_146f1395e body=259 status=ok
// SIG undefined FUN_146f1395e(void)

void FUN_146f1395e(undefined4 *param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((longlong)(int)param_3[3] != 0) {
    lVar4 = *param_3;
    puVar9 = (uint *)param_3[2];
    lVar5 = *param_2;
    puVar1 = puVar9 + (longlong)(int)param_3[3] * 2;
    puVar7 = param_1;
    do {
      uVar8 = 1;
      if ((puVar9[1] & 1) == 0) {
LAB_146f13992:
        *(undefined1 *)(puVar7 + 1) = uVar8;
        *puVar7 = *(undefined4 *)(lVar5 + 4 + (ulonglong)*puVar9 * 8);
        *(short *)((longlong)puVar7 + 6) = (short)*puVar9;
        *(undefined2 *)(puVar7 + 2) = 0xffff;
        puVar7 = puVar7 + 3;
      }
      else {
        plVar2 = (longlong *)(lVar4 + (ulonglong)*puVar9 * 0x48);
        if ((*(uint *)(plVar2 + 8) & 2) == 0) {
          if (((*(uint *)(plVar2 + 8) & 4) != 0) || ((*(byte *)(*plVar2 + 4) & 8) != 0)) {
            uVar8 = 0;
            goto LAB_146f13992;
          }
        }
        else {
          lVar6 = plVar2[1];
          uVar3 = *(ushort *)(lVar6 + 0x82);
          if ((ulonglong)uVar3 != 0) {
            lVar10 = 0;
            uVar11 = 0;
            do {
              *(undefined2 *)((longlong)puVar7 + lVar10 + 4) =
                   *(undefined2 *)(*(longlong *)(lVar6 + 0x30) + 4 + lVar10);
              *(int *)((longlong)puVar7 + lVar10) =
                   *(int *)(*(longlong *)(lVar6 + 0x30) + lVar10) +
                   *(int *)(lVar5 + 4 + (ulonglong)*puVar9 * 8);
              *(short *)((longlong)puVar7 + lVar10 + 6) = (short)*puVar9;
              *(short *)((longlong)puVar7 + lVar10 + 8) = (short)uVar11;
              uVar11 = uVar11 + 1;
              lVar10 = lVar10 + 0xc;
            } while (uVar3 != uVar11);
            puVar7 = (undefined4 *)((longlong)puVar7 + lVar10);
          }
        }
      }
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar1);
  }
  param_2[6] = (longlong)param_1;
  *(short *)((longlong)param_2 + 0x82) = (short)param_3[4];
  return;
}



// FUNCTION 146f13a62 FUN_146f13a62 body=192 status=ok
// SIG undefined FUN_146f13a62(void)

void FUN_146f13a62(longlong param_1,void *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
    iVar7 = 1;
    pvVar4 = param_2;
  }
  else {
    pvVar4 = (void *)0x0;
    uVar6 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)pvVar4) + 0x40);
      if ((ushort)uVar1 <= (ushort)uVar6) {
        uVar1 = uVar6;
      }
      uVar6 = uVar1;
      pvVar4 = (void *)((longlong)pvVar4 + 0x48);
    } while ((void *)((longlong)*(int *)(param_1 + 0x18) * 0x48) != pvVar4);
    iVar7 = (uVar6 & 0xffff) + 1;
  }
  memset(param_2,(int)CONCAT71((int7)((ulonglong)pvVar4 >> 8),0xff),(ulonglong)(uint)(iVar7 * 2));
  iVar2 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar5 = 0;
    do {
      *(short *)((longlong)param_2 + (ulonglong)*(ushort *)(*(longlong *)(lVar3 + lVar5) + 0x40) * 2
                ) = (short)((uint)(((int)lVar3 + (int)lVar5) - *(int *)(param_1 + 0x10)) >> 3) *
                    -0x71c7;
      lVar5 = lVar5 + 0x48;
    } while ((longlong)iVar2 * 0x48 != lVar5);
  }
  *(void **)(param_3 + 0x50) = param_2;
  *(short *)(param_3 + 0x84) = (short)iVar7;
  return;
}



// FUNCTION 146f13b22 FUN_146f13b22 body=219 status=ok
// SIG undefined FUN_146f13b22(void)

void FUN_146f13b22(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  size_t sVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_878 [32];
  undefined8 *local_858;
  undefined8 local_850;
  wchar_t local_848 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_878;
  iVar1 = *(int *)(param_1 + 0x18);
  local_858 = param_2;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 == 0) {
        uVar5 = *(undefined8 *)(param_3 + 0x60);
      }
      else {
        local_850 = *(undefined8 *)(lVar3 + 0x20);
        FUN_14026f16c(&local_850,local_848,0x400);
        sVar4 = wcslen(local_848);
        uVar5 = FUN_146efdb37(local_848,sVar4 & 0xffffffff);
      }
      *param_2 = uVar5;
      param_2 = param_2 + 1;
      lVar6 = lVar6 + 0x48;
    } while ((longlong)iVar1 * 0x48 != lVar6);
  }
  *(undefined8 **)(param_3 + 0x68) = local_858;
  if ((local_48 ^ (ulonglong)auStack_878) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f13bfe FUN_146f13bfe body=129 status=ok
// SIG undefined FUN_146f13bfe(void)

void FUN_146f13bfe(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar3 = param_3[1];
  uVar4 = *param_1;
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_3;
    uVar6 = param_1[1];
    uVar7 = 0xffffffffffffffff;
    lVar5 = 0;
    do {
      if ((*(byte *)(lVar1 + 0x40 + lVar5) & 1) == 0) {
        uVar2 = *(ulonglong *)(lVar1 + 0x38 + lVar5);
        uVar4 = -uVar2 & (uVar4 + uVar2) - 1;
        if (uVar7 == 0xffffffffffffffff) {
          uVar7 = uVar4;
        }
        uVar4 = uVar4 + *(longlong *)(lVar1 + 0x30 + lVar5);
        *param_1 = uVar4;
        if (uVar6 <= uVar2) {
          uVar6 = uVar2;
        }
        param_1[1] = uVar6;
      }
      lVar5 = lVar5 + 0x48;
    } while ((longlong)(int)lVar3 * 0x48 != lVar5);
    if (uVar7 != 0xffffffffffffffff) {
      uVar4 = uVar7;
    }
  }
  *param_2 = uVar4;
  param_2[1] = *param_1 - uVar4;
  return;
}



// FUNCTION 146f13c80 FUN_146f13c80 body=845 status=ok
// SIG undefined FUN_146f13c80(void)

void FUN_146f13c80(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    plVar12 = *(longlong **)(param_1 + 0x10);
    plVar9 = plVar12 + (longlong)*(int *)(param_1 + 0x18) * 9;
    lVar11 = *(longlong *)(param_3 + 0x10);
    plVar8 = (longlong *)*param_4;
    do {
      if ((*(byte *)(plVar8 + 8) & 1) == 0) {
        uVar10 = -plVar8[7] & (param_2 + plVar8[7]) - 1U;
        uVar4 = uVar10;
        if ((undefined *)*plVar8 == &DAT_14c99c038) {
          FUN_146f55f64(uVar10);
          lVar13 = plVar8[1];
          lVar6 = *(longlong *)(uVar10 + 0x10);
          if (lVar6 != lVar13) {
            *(longlong *)(uVar10 + 0x10) = lVar13;
LAB_146f13d3f:
            if ((lVar13 != 0) && ((*(byte *)(lVar13 + 0xb8) & 8) != 0)) {
              LOCK();
              *(int *)(lVar13 + 0xbc) = *(int *)(lVar13 + 0xbc) + 1;
              UNLOCK();
            }
            if (lVar6 != 0) {
              FUN_146f11920();
            }
          }
        }
        else if ((undefined *)*plVar8 == &DAT_14c99bf88) {
          FUN_146f58a7e(uVar10);
          *(undefined4 *)(uVar10 + 0x10) = 0x10ffff;
          lVar13 = *plVar12;
          if (lVar13 == 0) {
LAB_146f13e09:
            lVar13 = 0;
          }
          else {
            lVar6 = *(longlong *)(lVar13 + 8);
            lVar5 = FUN_1446e6bbc();
            if (*(ulonglong *)(lVar5 + 8) == 0) {
              bVar14 = lVar6 != 0;
              if (lVar6 != lVar5 && bVar14) {
                do {
                  lVar6 = *(longlong *)(lVar6 + 0x30);
                  bVar14 = lVar6 != 0;
                  if (lVar6 == lVar5) break;
                } while (lVar6 != 0);
              }
              if (!bVar14) goto LAB_146f13e09;
            }
            else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0)
            goto LAB_146f13e09;
            lVar6 = *(longlong *)(lVar13 + 8);
            lVar5 = FUN_1446e6bbc();
            if (*(ulonglong *)(lVar5 + 8) == 0) {
              bVar14 = lVar6 != 0;
              if (lVar6 != lVar5 && bVar14) {
                do {
                  lVar6 = *(longlong *)(lVar6 + 0x30);
                  bVar14 = lVar6 != 0;
                  if (lVar6 == lVar5) break;
                } while (lVar6 != 0);
              }
            }
            else {
              bVar14 = (*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0;
            }
            if (!bVar14) {
              lVar13 = 0;
            }
          }
          local_78 = (void *)0x0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          FUN_1449651a4(&local_88,lVar13);
          lVar13 = FUN_1446e6bbc();
          if (local_88 == 0) {
            if ((int)uStack_70 != 0) goto LAB_146f13e48;
LAB_146f13efe:
            lVar6 = 0;
            lVar5 = local_88;
          }
          else {
            cVar3 = FUN_144729dda(&uStack_80);
            lVar6 = local_88;
            lVar5 = local_88;
            if ((cVar3 != '\0') || ((int)uStack_70 == 0)) goto LAB_146f13f00;
LAB_146f13e48:
            lVar6 = FUN_14007daa4(&local_88,0,0);
            if (lVar6 == 0) {
LAB_146f13ef1:
              if (local_88 != 0) {
                local_88 = 0;
                uStack_80 = 0;
              }
              goto LAB_146f13efe;
            }
            lVar7 = *(longlong *)(lVar6 + 8);
            lVar5 = lVar6;
            if (*(ulonglong *)(lVar13 + 8) == 0) {
              bVar14 = lVar7 != 0;
              if (lVar7 != lVar13 && bVar14) {
                do {
                  lVar7 = *(longlong *)(lVar7 + 0x30);
                  bVar14 = lVar7 != 0;
                  if (lVar7 == lVar13) break;
                } while (lVar7 != 0);
              }
              if (!bVar14) goto LAB_146f13ef1;
            }
            else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar13 + 8)) == 0)
            goto LAB_146f13ef1;
          }
LAB_146f13f00:
          local_88 = lVar5;
          _Src = local_78;
          *(longlong *)(uVar10 + 0x18) = lVar6;
          *(undefined8 *)(uVar10 + 0x20) = uStack_80;
          ppvVar1 = (void **)(uVar10 + 0x28);
          if (ppvVar1 != &local_78) {
            iVar2 = (int)uStack_70;
            lVar13 = (longlong)(int)uStack_70;
            *(int *)(uVar10 + 0x30) = (int)uStack_70;
            if ((int)uStack_70 == 0 && *(int *)(uVar10 + 0x34) == 0) {
              *(undefined4 *)(uVar10 + 0x34) = 0;
            }
            else {
              FUN_1401b309e(ppvVar1,uStack_70 & 0xffffffff);
              if (iVar2 != 0) {
                memcpy(*ppvVar1,_Src,lVar13 << 3);
              }
            }
          }
          if (local_78 != (void *)0x0) {
            FUN_1400020a8();
          }
          lVar13 = plVar8[1];
          lVar6 = *(longlong *)(uVar10 + 0x38);
          if (lVar6 != lVar13) {
            *(longlong *)(uVar10 + 0x38) = lVar13;
            goto LAB_146f13d3f;
          }
        }
        else {
          uVar4 = (**(code **)(*(longlong *)plVar12[2] + 0x20))((longlong *)plVar12[2],uVar10);
        }
        *(ulonglong *)(lVar11 + 8) = uVar4;
        param_2 = uVar10 + plVar8[6];
      }
      else {
        *(undefined8 *)(lVar11 + 8) = *(undefined8 *)(*plVar8 + 0x68);
      }
      plVar8 = plVar8 + 9;
      lVar11 = lVar11 + 0x10;
      plVar12 = plVar12 + 9;
    } while (plVar12 != plVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f13fce FUN_146f13fce body=134 status=ok
// SIG undefined FUN_146f13fce(void)

void FUN_146f13fce(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  
  if (*(ushort *)((longlong)param_1 + 0x7c) != 0) {
    lVar1 = param_1[2];
    uVar8 = 0xffffffff;
    lVar6 = 0;
    lVar4 = 0;
    do {
      uVar3 = uVar8;
      if ((*(undefined **)(lVar1 + lVar4) == &DAT_14c99bf08) &&
         (uVar3 = (uint)lVar6, uVar8 != 0xffffffff)) {
        if ((uint)lVar6 == 0xffffffff) {
          return;
        }
        uVar7 = (ulonglong)uVar8;
        lVar2 = *param_1;
        iVar9 = *(int *)(lVar2 + 4 + lVar6 * 8) - *(int *)(lVar2 + 4 + uVar7 * 8);
        iVar5 = *(int *)(lVar2 + lVar6 * 8) - *(int *)(lVar2 + uVar7 * 8);
        lVar6 = *(longlong *)(lVar1 + 8 + uVar7 * 0x10);
        lVar1 = *(longlong *)(lVar1 + 8 + lVar4);
        *(int *)(lVar6 + 0x10) = iVar9;
        *(int *)(lVar6 + 0x14) = iVar5;
        *(int *)(lVar1 + 0x10) = -iVar9;
        *(int *)(lVar1 + 0x14) = -iVar5;
        return;
      }
      uVar8 = uVar3;
      lVar4 = lVar4 + 0x10;
      lVar6 = lVar6 + 1;
    } while ((ulonglong)*(ushort *)((longlong)param_1 + 0x7c) * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 146f14054 FUN_146f14054 body=139 status=ok
// SIG undefined FUN_146f14054(void)

longlong FUN_146f14054(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (!bVar3) {
        return 0;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
      return 0;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x70);
    if (lVar2 != 0) {
      do {
        if (*(longlong *)(lVar2 + 0x20) == DAT_14c999460) {
          return (longlong)*(int *)(lVar2 + 0x44);
        }
        lVar2 = *(longlong *)(lVar2 + 0x48);
      } while (lVar2 != 0);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146f140e0 FUN_146f140e0 body=367 status=ok
// SIG undefined FUN_146f140e0(void)

uint FUN_146f140e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar2 = *(uint *)(param_2 + 0x70);
  uVar3 = *(uint *)(param_2 + 0x74);
  uVar4 = *(uint *)(param_2 + 0x94);
  uVar6 = 1;
  if ((uVar4 & 1) == 0) {
    uVar6 = (uint)((uVar4 & 1) == 0) * 2 & uVar2;
  }
  uVar1 = (uVar2 & 0x10) * 2 + 0x10;
  if ((uVar2 & 0xc) == 0) {
    uVar1 = 0;
  }
  uVar6 = (uVar2 >> 4 & 0x1004) + (uVar2 & 0x20) * 2 | uVar2 >> 3 & 0x18000 | uVar3 >> 4 & 0x2000 |
          uVar1 | uVar6;
  if ((uVar4 & 2) == 0) goto LAB_146f141df;
  lVar7 = *(longlong *)(param_1 + 0x40);
  if (lVar7 == 0) {
LAB_146f141a3:
    if ((uVar3 >> 8 & 1) != 0) {
      lVar7 = 0;
LAB_146f141b6:
      uVar6 = uVar6 | 0x80;
      goto LAB_146f141bc;
    }
    if ((uVar3 >> 9 & 1) != 0) goto LAB_146f141d3;
  }
  else {
    lVar5 = FUN_1446f4bba();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_146f141a3;
    if (((uVar3 >> 8 & 1) != 0) && ((*(byte *)(lVar7 + 0xb1) & 0xa0) != 0)) goto LAB_146f141b6;
LAB_146f141bc:
    if (((uVar3 >> 9 & 1) != 0) && ((lVar7 == 0 || ((*(byte *)(lVar7 + 0xb1) & 0x60) != 0)))) {
LAB_146f141d3:
      uVar6 = uVar6 | 0x100;
    }
  }
  uVar6 = uVar6 | 0x200;
LAB_146f141df:
  if (((uVar3 >> 0xb & 1) != 0) && (*(int *)(param_1 + 0x18) == 1)) {
    uVar6 = uVar2 >> 1 & 0x800 | uVar6 | 0x400;
  }
  if ((((uVar4 & 1) == 0) && (*(int *)(param_2 + 0x90) != 2)) && (0 < *(int *)(param_1 + 0x18))) {
    uVar6 = uVar6 | 0x4000;
  }
  return uVar6 | 8;
}



// FUNCTION 146f14250 FUN_146f14250 body=98 status=ok
// SIG undefined FUN_146f14250(void)

void FUN_146f14250(longlong *param_1)

{
  FUN_146f1ab35(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_146f1ab68(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f142b2 FUN_146f142b2 body=444 status=ok
// SIG undefined FUN_146f142b2(void)

void FUN_146f142b2(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (param_3 == (longlong *)0x0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (ulonglong)((uint)*(ushort *)(param_2 + 0x40) * 0x18) + *param_3;
  }
  uVar9 = *(ulonglong *)(param_2 + 0x38);
  lVar4 = FUN_1446e6bbc();
  lVar5 = *(longlong *)(param_2 + 8);
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    uVar7 = (uint)(lVar5 != 0);
    if (lVar5 != lVar4 && lVar5 != 0) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        uVar7 = (uint)(lVar5 != 0);
        if (lVar5 == lVar4) break;
      } while (lVar5 != 0);
    }
  }
  else {
    uVar7 = (uint)((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0);
  }
  uVar7 = (uint)((uVar9 & 0x40000200) != 0) << 8 | (uint)((uVar9 & 0x1040000000) != 0) << 9 |
          uVar7 << 10;
  if (lVar11 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(uint *)(param_1 + 0x20) = uVar7;
    uVar6 = 0;
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(lVar11 + 4);
    uVar10 = 0;
    uVar9 = 0xd;
    do {
      lVar5 = (uVar9 >> 1) + uVar10;
      if (*(int *)(&DAT_149f97fd0 + lVar5 * 8) < iVar1) {
        uVar10 = lVar5 + (ulonglong)((uint)uVar9 & 1);
      }
      bVar2 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar2);
    uVar8 = 0;
    if (uVar10 < 0xd) {
      uVar8 = (uint)(*(int *)(&DAT_149f97fd0 + uVar10 * 8) <= iVar1) * 2;
    }
    uVar7 = (uint)*(byte *)(lVar11 + 0xc) << 0x11 | (iVar1 == 7 || iVar1 == 1) | uVar8 | uVar7;
    if (*(longlong *)(param_2 + 0x68) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_1400796d0(param_4,*(longlong *)(param_2 + 0x68),1);
      uVar7 = uVar7 | (uint)(*(int *)(lVar11 + 8) == 1) * 8 + (uint)(*(int *)(lVar11 + 8) == 0) * 4
                      | (uint)(*(char *)(lVar5 + 0xb4) != '\0') << 4;
    }
    uVar6 = *(undefined8 *)(lVar11 + 0x10);
    *(longlong *)(param_1 + 8) = lVar5;
    *(uint *)(param_1 + 0x20) = uVar7;
    uVar3 = *(undefined4 *)(lVar11 + 4);
  }
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  return;
}



// FUNCTION 146f1446e FUN_146f1446e body=163 status=ok
// SIG undefined FUN_146f1446e(void)

void FUN_146f1446e(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  
  puVar3 = (undefined *)(**(code **)(*param_3 + 0x10))(param_3);
  bVar1 = puVar3[4];
  bVar2 = FUN_146f58aea(puVar3);
  uVar4 = 0xc0;
  if ((bVar1 & 8) == 0) {
    uVar4 = (uint)bVar2 << 6;
  }
  uVar4 = uVar4 | *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = uVar4;
  uVar4 = (*(uint *)(puVar3 + 4) & 2) << 4 | uVar4;
  *(uint *)(param_1 + 0x20) = uVar4;
  uVar4 = (*(uint *)(puVar3 + 4) & 4) << 0xe | uVar4;
  *(uint *)(param_1 + 0x20) = uVar4;
  *(uint *)(param_1 + 0x20) = (*(uint *)(puVar3 + 4) & 0x10) << 0xe | uVar4;
  uVar4 = FUN_142a70550(puVar3,param_2,param_4);
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | uVar4;
  if (puVar3 == &DAT_14c99bf08) {
    *(undefined8 *)(param_1 + 0x2c) = DAT_14c999470;
  }
  return;
}



// FUNCTION 146f14512 FUN_146f14512 body=158 status=ok
// SIG undefined FUN_146f14512(void)

bool FUN_146f14512(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_146f0bd26(param_2);
  if (plVar1 != (longlong *)0x0) {
    *param_1 = param_2;
    param_1[2] = plVar1;
    *(undefined2 *)(param_1 + 5) = 1;
    param_1[7] = 0;
    param_1[8] = 0;
    FUN_146f142b2(param_1,param_2,*param_3,param_3[1]);
    FUN_146f1446e(param_1,param_2,plVar1,*(undefined1 *)(param_3 + 2));
    if (((*(uint *)(param_1 + 4) >> 0xb & 1) != 0) ||
       (((*(uint *)(param_1 + 4) >> 10 & 1) != 0 && (DAT_14c75f439 == '\x01')))) {
      *(undefined2 *)(param_1 + 5) = 0x40;
    }
    if (param_1[3] == 0) {
      uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      param_1[3] = uVar2;
    }
  }
  return plVar1 != (longlong *)0x0;
}



// FUNCTION 146f145b0 FUN_146f145b0 body=188 status=ok
// SIG undefined FUN_146f145b0(void)

undefined8 FUN_146f145b0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  plVar2 = (longlong *)FUN_146f0befe(*(undefined8 *)(param_2 + 0x18));
  lVar4 = param_2;
  if (plVar2 == (longlong *)0x0) {
    do {
      lVar4 = *(longlong *)(lVar4 + 0x40);
      if (lVar4 == 0) {
        return 0;
      }
      plVar2 = (longlong *)FUN_146f0befe(*(undefined8 *)(lVar4 + 0x18));
    } while (plVar2 == (longlong *)0x0);
    uVar5 = 2;
    uVar6 = 0x80000;
  }
  else {
    uVar5 = 1;
    uVar6 = 0;
  }
  *param_1 = 0;
  param_1[2] = plVar2;
  *(undefined2 *)(param_1 + 5) = 1;
  iVar1 = *(int *)(param_2 + 0x5c);
  param_1[7] = (longlong)(int)(-iVar1 & (*(int *)(param_2 + 0x58) + iVar1) - 1U);
  param_1[8] = (longlong)iVar1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  param_1[1] = 0;
  uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
  param_1[3] = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar6;
  FUN_146f1446e(param_1,0,plVar2,0);
  return uVar5;
}



// FUNCTION 146f1466c FUN_146f1466c body=111 status=ok
// SIG undefined FUN_146f1466c(void)

void FUN_146f1466c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (DAT_14c75f43b == '\x01') {
    plVar1 = (longlong *)FUN_145b0a780();
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
    }
    if ((longlong)*(int *)(lVar2 + 0x30) != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0x28) + lVar3) == param_1) {
          return;
        }
        bVar4 = (longlong)*(int *)(lVar2 + 0x30) * 0xc + -0xc != lVar3;
        lVar3 = lVar3 + 0xc;
      } while (bVar4);
    }
  }
  return;
}



// FUNCTION 146f146dc FUN_146f146dc body=156 status=ok
// SIG undefined FUN_146f146dc(void)

longlong * FUN_146f146dc(longlong *param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((int)((ulonglong)(param_1[1] - *param_1) >> 1) == 0) {
    FUN_144750bde(param_2,0,param_1);
    *(undefined2 *)param_1[1] = 0;
    puVar2 = (ushort *)*param_1;
    uVar1 = *puVar2;
    if ((uVar1 != 0) && (lVar3 = param_1[1], (lVar3 - (longlong)puVar2 & 0x1ffffffffU) >> 1 != 0)) {
      lVar4 = 1;
      do {
        puVar2[lVar4 + -1] = (uVar1 + (ushort)(0x19 < uVar1 - 0x61) * 0x20) - 0x20;
        uVar1 = puVar2[lVar4];
        if (uVar1 == 0) {
          return param_1;
        }
        bVar5 = (lVar3 - (longlong)puVar2) * 0x80000000 >> 0x20 != lVar4;
        lVar4 = lVar4 + 1;
      } while (bVar5);
    }
  }
  return param_1;
}



// FUNCTION 146f14778 FUN_146f14778 body=93 status=ok
// SIG undefined FUN_146f14778(void)

void FUN_146f14778(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + uVar1;
  if (*(int *)((longlong)param_1 + 0xc) - uVar2 < uVar1) {
    FUN_146f1c6aa(param_1,uVar2);
  }
  memmove((void *)((longlong)*param_1 + (longlong)(int)uVar1 * 8),(void *)*param_1,
          (ulonglong)uVar2 << 3);
  FUN_146f1c677(*param_1,*param_2,uVar1);
  return;
}



// FUNCTION 146f147d6 FUN_146f147d6 body=123 status=ok
// SIG undefined FUN_146f147d6(void)

void FUN_146f147d6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f1c730(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x18 + *param_1),0,(longlong)(param_2 - iVar1) * 0x18);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146f1c7c4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f14852 FUN_146f14852 body=123 status=ok
// SIG undefined FUN_146f14852(void)

void * FUN_146f14852(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x240);
    if (*(void **)((longlong)param_2 + 0x240) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x248);
    *(int *)((longlong)param_1 + 0x248) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x24c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24c) = 8;
    }
    else {
      FUN_146f1c9f6(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x240);
        if (*(void **)((longlong)param_1 + 0x240) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0x48);
      }
    }
  }
  return param_1;
}



// FUNCTION 146f148d8 FUN_146f148d8 body=47 status=ok
// SIG undefined FUN_146f148d8(void)

void FUN_146f148d8(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  return;
}



// FUNCTION 146f14908 FUN_146f14908 body=8 status=ok
// SIG undefined FUN_146f14908(void)

void FUN_146f14908(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x50) = *param_2;
  return;
}



// FUNCTION 146f14910 FUN_146f14910 body=93 status=ok
// SIG undefined FUN_146f14910(void)

ulonglong FUN_146f14910(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    for (uVar1 = *(ulonglong *)(uVar1 + 0x10); (uVar1 & 1) == 0;
        uVar1 = *(ulonglong *)(uVar1 + 0x10)) {
      if (uVar1 < 2) {
        return 0;
      }
    }
    if ((uVar1 & 0xfffffffffffffffe) == 0) {
      uVar1 = 0;
    }
    else if (DAT_14c950c29 != '\0') {
      FUN_1456cec3c();
    }
  }
  return uVar1 & 0xfffffffffffffffe;
}



// FUNCTION 146f1496e FUN_146f1496e body=95 status=ok
// SIG undefined FUN_146f1496e(void)

undefined8 * FUN_146f1496e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_146f1ad47(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146f1cc1c(param_1,iVar1);
      FUN_146f1c677(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146f149ce FUN_146f149ce body=196 status=ok
// SIG undefined FUN_146f149ce(void)

undefined8 * FUN_146f149ce(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = 0x20;
  do {
    *(undefined8 *)((longlong)param_1 + lVar1) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0xe0);
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0xffffffff00000000;
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0xfc;
  param_1[0x2a] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x145) = 0;
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xfc;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  FUN_146f1ad7a(param_1 + 0x31);
  return param_1;
}



// FUNCTION 146f14a92 FUN_146f14a92 body=83 status=ok
// SIG undefined FUN_146f14a92(void)

void FUN_146f14a92(longlong param_1)

{
  FUN_146f1ad7a(param_1 + 0x188);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f14ae6 FUN_146f14ae6 body=188 status=ok
// SIG undefined FUN_146f14ae6(void)

void FUN_146f14ae6(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)((longlong)param_2 + 0x1c);
  if (*(uint *)(param_2 + 2) < *(uint *)((longlong)param_2 + 0x1c)) {
    uVar1 = *(uint *)(param_2 + 2);
  }
  if (0xfffe < uVar1) {
    uVar1 = 0xffff;
  }
  *param_1 = param_2[1];
  FUN_146f14ba4(param_1 + 0x2c,uVar1 + 1);
  *(uint *)param_1[0x2c] = *(uint *)param_1[0x2c] | 1;
  FUN_146f14bfc(param_1 + 0x2f,*(undefined4 *)((longlong)param_2 + 0x14),1);
  FUN_146f589c2(&local_48,*param_2);
  *(undefined4 *)(param_1 + 0x26) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x134) = uStack_44;
  *(undefined4 *)(param_1 + 0x27) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x13c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x28) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x144) = uStack_34;
  *(undefined4 *)(param_1 + 0x29) = uStack_30;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x2a) = local_28;
  *(undefined4 *)((longlong)param_1 + 0x154) = uStack_24;
  *(undefined4 *)(param_1 + 0x2b) = uStack_20;
  *(undefined4 *)((longlong)param_1 + 0x15c) = uStack_1c;
  param_1[0x1f] = param_1 + 0x26;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f14ba4 FUN_146f14ba4 body=87 status=ok
// SIG undefined FUN_146f14ba4(void)

void FUN_146f14ba4(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  *(int *)(param_1 + 2) = param_2;
  uVar2 = param_2 + 0x1fU >> 5;
  FUN_140250df4();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + uVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
    FUN_1447808da(param_1);
  }
  memset((void *)((longlong)iVar1 * 4 + *param_1),0,(ulonglong)(uVar2 << 2));
  return;
}



// FUNCTION 146f14bfc FUN_146f14bfc body=123 status=ok
// SIG undefined FUN_146f14bfc(void)

void FUN_146f14bfc(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14488eebe(param_1);
    }
    memset((void *)((longlong)iVar1 * 2 + *param_1),0,(longlong)(param_2 - iVar1) * 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_144715f92(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f14c78 FUN_146f14c78 body=1 status=ok
// SIG undefined FUN_146f14c78(void)

void FUN_146f14c78(void)

{
  return;
}



// FUNCTION 146f14c7a FUN_146f14c7a body=15 status=ok
// SIG undefined FUN_146f14c7a(void)

void FUN_146f14c7a(longlong param_1,undefined8 param_2)

{
  FUN_146f14bfc(param_1 + 0x178,param_2,1);
  return;
}



// FUNCTION 146f14c8a FUN_146f14c8a body=211 status=ok
// SIG undefined FUN_146f14c8a(void)

longlong FUN_146f14c8a(longlong *param_1,int param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar5 = param_1[0x2f];
  uVar1 = *(ushort *)(lVar5 + (longlong)param_2 * 2);
  if (uVar1 == 0) {
    uVar4 = FUN_146f14e6e(param_1);
    if ((short)uVar4 == 0) {
      lVar5 = 0;
    }
    else {
      *(short *)(lVar5 + (longlong)param_2 * 2) = (short)uVar4;
      lVar2 = *(longlong *)(param_1[0x31] + (ulonglong)((uVar4 & 0xffff) >> 8) * 8);
      uVar6 = (ulonglong)((uVar4 & 0xff) << 5);
      lVar5 = lVar2 + uVar6;
      lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x270) + (longlong)(param_2 / 100) * 8);
      lVar7 = (longlong)(param_2 % 100) * 0x38;
      *(undefined8 *)(lVar2 + uVar6) = *(undefined8 *)(lVar3 + 0x10 + lVar7);
      *(undefined8 *)(lVar2 + 8 + uVar6) =
           *(undefined8 *)
            (*(longlong *)(*(longlong *)(*param_1 + 0x290) + (longlong)(param_2 / 100) * 8) +
            (longlong)(param_2 % 100) * 8);
      *(undefined8 *)(lVar2 + 0x10 + uVar6) = *(undefined8 *)(lVar3 + 0x20 + lVar7);
    }
  }
  else {
    lVar5 = (ulonglong)((uVar1 & 0xff) << 5) +
            *(longlong *)(param_1[0x31] + (ulonglong)(uVar1 >> 8) * 8);
  }
  return lVar5;
}



// FUNCTION 146f14d5e FUN_146f14d5e body=151 status=ok
// SIG undefined FUN_146f14d5e(void)

void FUN_146f14d5e(longlong param_1,int param_2,undefined8 param_3)

{
  uint *puVar1;
  ushort uVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = (longlong)param_2;
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x178) + lVar5 * 2);
  if ((uVar2 != 0) &&
     (plVar6 = (longlong *)
               ((ulonglong)(byte)uVar2 * 0x20 +
               *(longlong *)(*(longlong *)(param_1 + 0x188) + (ulonglong)(uVar2 >> 8) * 8)),
     plVar6 != (longlong *)0x0)) {
    if ((*(byte *)(*plVar6 + 0x3c) & 1) != 0) {
      FUN_146f3ba90(param_1 + 8,param_3);
    }
    FUN_1400020a8(param_3);
    plVar6 = plVar6 + 3;
    *(short *)plVar6 = (short)*plVar6 + -1;
    if ((short)*plVar6 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x178);
      uVar2 = *(ushort *)(lVar3 + lVar5 * 2);
      if (uVar2 != 0) {
        bVar4 = (byte)uVar2 & 0x1f;
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x160) + (ulonglong)(uVar2 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        *(undefined2 *)(lVar3 + lVar5 * 2) = 0;
      }
    }
  }
  return;
}



// FUNCTION 146f14df6 FUN_146f14df6 body=119 status=ok
// SIG undefined FUN_146f14df6(void)

void FUN_146f14df6(longlong param_1,int param_2,undefined8 param_3)

{
  short *psVar1;
  uint *puVar2;
  ushort uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_2;
  uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x178) + lVar6 * 2);
  if ((uVar3 != 0) &&
     (lVar5 = (ulonglong)(byte)uVar3 * 0x20 +
              *(longlong *)(*(longlong *)(param_1 + 0x188) + (ulonglong)(uVar3 >> 8) * 8),
     lVar5 != 0)) {
    FUN_1400020a8(param_3);
    psVar1 = (short *)(lVar5 + 0x18);
    *psVar1 = *psVar1 + -1;
    if (*psVar1 == 0) {
      lVar5 = *(longlong *)(param_1 + 0x178);
      uVar3 = *(ushort *)(lVar5 + lVar6 * 2);
      if (uVar3 != 0) {
        bVar4 = (byte)uVar3 & 0x1f;
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x160) + (ulonglong)(uVar3 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        *(undefined2 *)(lVar5 + lVar6 * 2) = 0;
      }
    }
  }
  return;
}



// FUNCTION 146f14e6e FUN_146f14e6e body=226 status=ok
// SIG undefined FUN_146f14e6e(void)

int FUN_146f14e6e(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((ulonglong)*(uint *)(param_1 + 0x168) != 0) {
    lVar4 = 0;
    puVar6 = *(uint **)(param_1 + 0x160);
    do {
      if (*puVar6 != 0xffffffff) {
        uVar7 = *puVar6 ^ 0xffffffff;
        if (uVar7 == 0) {
          uVar5 = 0x20;
        }
        else {
          uVar5 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
        }
        uVar7 = (uint)((ulonglong)uVar5 - lVar4);
        if (*(uint *)(param_1 + 0x170) <= uVar7) {
          return 0;
        }
        puVar6 = *(uint **)(param_1 + 0x160) + ((ulonglong)uVar5 - lVar4 >> 5 & 0x7ffffff);
        *puVar6 = *puVar6 | 1 << ((byte)uVar5 & 0x1f);
        if (*(uint *)(param_1 + 0x198) <= uVar7) {
          FUN_146f14f50((longlong *)(param_1 + 0x188));
        }
        uVar3 = uVar7 + 0xff;
        if (-1 < (int)uVar7) {
          uVar3 = uVar7;
        }
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x188) + (longlong)((int)uVar3 >> 8) * 8);
        lVar8 = (ulonglong)(uVar7 - (uVar3 & 0xffffff00)) * 0x20;
        puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar8);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar2 + lVar8);
        *puVar1 = 0;
        puVar1[1] = 0;
        return uVar5 - (int)lVar4;
      }
      lVar4 = lVar4 + -0x20;
      puVar6 = puVar6 + 1;
    } while ((ulonglong)*(uint *)(param_1 + 0x168) * 0x20 + lVar4 != 0);
  }
  return 0;
}



// FUNCTION 146f14f50 FUN_146f14f50 body=174 status=ok
// SIG undefined FUN_146f14f50(void)

void FUN_146f14f50(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar2 = (int)param_1[2];
  iVar3 = iVar2 + 0x2fe;
  if (-1 < iVar2 + 0x1ff) {
    iVar3 = iVar2 + 0x1ff;
  }
  iVar6 = (int)param_1[1];
  *(int *)(param_1 + 2) = iVar2 + 0x100;
  if (iVar6 < iVar3 >> 8) {
    do {
      lVar4 = FUN_14001cc68(0x2000,0x10);
      lVar5 = 0;
      do {
        *(undefined8 *)(lVar4 + lVar5) = 0;
        puVar1 = (undefined8 *)(lVar4 + 8 + lVar5);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined2 *)(lVar4 + 0x18 + lVar5) = 0;
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != 0x2000);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1456bd870(param_1,iVar2);
      }
      *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar4;
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar3 >> 8);
  }
  return;
}



// FUNCTION 146f14ffe FUN_146f14ffe body=56 status=ok
// SIG undefined FUN_146f14ffe(void)

void FUN_146f14ffe(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_146f15036(lVar1);
    thunk_FUN_1400020a8(lVar1,0x2128);
  }
  FUN_146f1506e(param_1 + 1);
  return;
}



// FUNCTION 146f15036 FUN_146f15036 body=56 status=ok
// SIG undefined FUN_146f15036(void)

void FUN_146f15036(longlong param_1)

{
  FUN_146f1d381(*(undefined8 *)(param_1 + 0x2110),*(undefined4 *)(param_1 + 0x2118));
  if (*(longlong *)(param_1 + 0x2110) != 0) {
    FUN_1400020a8();
  }
  FUN_146f25cde(param_1);
  return;
}



// FUNCTION 146f1506e FUN_146f1506e body=62 status=ok
// SIG undefined FUN_146f1506e(void)

void FUN_146f1506e(int *param_1)

{
  FUN_146f155b4(param_1,*param_1 - param_1[1]);
  param_1[6] = 0;
  FUN_146f1d381(*(undefined8 *)(param_1 + 4),0);
  if (*(longlong *)(param_1 + 4) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f150ac FUN_146f150ac body=172 status=ok
// SIG undefined FUN_146f150ac(void)

bool FUN_146f150ac(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x2120);
  uVar2 = *(uint *)(param_2 + 1);
  uVar7 = uVar2 + *(int *)(param_1 + 0x2118);
  if (uVar7 <= uVar1) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x2118) == 0) {
      if (uVar2 == 0) goto LAB_146f150e7;
      lVar6 = *param_2;
      lVar5 = (longlong)(int)uVar2 * 8;
      uVar4 = 0;
      do {
        lVar5 = lVar5 + -8;
        bVar3 = FUN_146f25dd8(param_1,lVar6);
        uVar4 = uVar4 + bVar3;
        if (bVar3 == 0) break;
        lVar6 = lVar6 + 8;
      } while (lVar5 != 0);
    }
    if (uVar2 != uVar4) {
      FUN_146f1adda(param_1 + 0x2110,(ulonglong)uVar4 * 8 + *param_2,uVar2 - uVar4);
    }
  }
LAB_146f150e7:
  return uVar7 <= uVar1;
}



// FUNCTION 146f15158 FUN_146f15158 body=78 status=ok
// SIG undefined FUN_146f15158(void)

void FUN_146f15158(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if ((ulonglong)(longlong)(int)param_1[6] <= (ulonglong)(uVar2 - param_1[1])) {
    FUN_146f1d3bc(param_1,(ulonglong)(uVar2 - param_1[1]) + 1);
    uVar2 = *param_1;
  }
  *param_1 = uVar2 + 1;
  lVar1 = *param_2;
  *(longlong *)(*(longlong *)(param_1 + 4) + (ulonglong)(uVar2 & param_1[2]) * 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 146f151a6 FUN_146f151a6 body=843 status=ok
// SIG undefined FUN_146f151a6(void)

int FUN_146f151a6(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_f8 [36];
  int local_d4;
  int local_d0;
  int local_cc;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  int *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  int local_80;
  undefined1 local_78 [16];
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar12 = *(longlong *)(param_2 + 0xe0);
  local_b0 = *(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 8);
  uVar8 = (ulonglong)(uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc));
  uVar11 = 0;
  iVar9 = 0;
  iVar7 = 0;
  local_c0 = uVar8;
  local_b8 = param_2;
  local_a8 = param_4;
  local_a0 = lVar12;
  local_98 = param_1;
  local_90 = param_3;
  do {
    if (uVar11 == uVar8) break;
    local_d0 = *(int *)(lVar12 + 0x10) - *(int *)(lVar12 + 0xc);
    lVar12 = *(longlong *)(param_2 + 0xf8);
    if (lVar12 == 0) {
      local_60 = 0;
      local_58 = 0;
      local_54 = 0;
    }
    else {
      local_60 = CONCAT44(*(undefined4 *)(*(longlong *)(lVar12 + 8) + 0x198),
                          *(undefined4 *)(*(longlong *)(lVar12 + 8) + 0x108));
      local_58 = *(undefined4 *)(*(longlong *)(lVar12 + 8) + 0x3a8);
      local_54 = *(undefined4 *)(*(longlong *)(lVar12 + 8) + 0x438);
    }
    lVar2 = *(longlong *)(local_98 + 0x18);
    uVar8 = (ulonglong)(*(int *)(local_98 + 0xc) + (int)uVar11 & *(uint *)(local_98 + 0x10));
    local_d4 = iVar9;
    local_cc = iVar7;
    local_c8 = uVar11;
    local_68 = param_2;
    if ((lVar12 != 0) &&
       (plVar3 = *(longlong **)(lVar2 + uVar8 * 8), (*(uint *)((longlong)plVar3 + 0xc) & 4) != 0)) {
      (**(code **)(*plVar3 + 0x28))(plVar3,local_78);
      FUN_142a7fe26(local_b0,local_b8,local_78);
      plVar3 = *(longlong **)(lVar2 + uVar8 * 8);
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
      lVar5 = local_88;
      lVar10 = (longlong)local_80;
      if (lVar10 != 0) {
        lVar6 = 0;
        do {
          local_4c = *(uint *)(lVar5 + lVar6);
          FUN_146f1aed8(*(longlong *)(lVar12 + 8) + 0x3b0,&local_4c);
          lVar6 = lVar6 + 4;
        } while (lVar10 * 4 != lVar6);
      }
    }
    param_2 = local_b8;
    FUN_146f233dc(local_b8,*(longlong *)(lVar2 + uVar8 * 8) + 8);
    lVar12 = local_a0;
    plVar3 = *(longlong **)(lVar2 + uVar8 * 8);
    puVar4 = (undefined8 *)*plVar3;
    if (local_90 == 0) {
      (*(code *)puVar4[2])();
    }
    else {
      (*(code *)*puVar4)(plVar3,param_2,local_90);
    }
    uVar8 = local_c0;
    iVar7 = *(int *)(lVar12 + 0xc);
    iVar9 = *(int *)(lVar12 + 0x10);
    uVar11 = local_c8 + 1;
    local_4c = CONCAT31(local_4c._1_3_,uVar11 != local_c0);
    FUN_146f5435e(lVar12,uVar11 != local_c0,1);
    iVar1 = *(int *)(lVar12 + 0x18);
    if (iVar1 == 0) {
      iVar9 = iVar9 - iVar7;
      iVar7 = local_cc + 1;
    }
    else {
      FUN_146f154f2(&local_68);
      FUN_146f5b2fa(lVar12,local_d0);
      iVar7 = local_cc;
      iVar9 = local_d4;
      if (local_cc == 0) {
        iVar7 = 0;
      }
      else {
        local_c8 = CONCAT44(local_c8._4_4_,*(int *)(lVar12 + 0x10) - *(int *)(lVar12 + 0xc));
        FUN_146f5b2fa(lVar12,local_d4);
        local_4c = local_4c & 0xffffff00;
        FUN_146f5435e(lVar12,0,1);
        FUN_146f5b2fa(lVar12,local_c8 & 0xffffffff);
      }
    }
    if (((*(longlong *)(local_68 + 8) != 0) ||
        ((*(longlong *)(local_68 + 0xd8) != 0 &&
         (*(int *)(*(longlong *)(local_68 + 0xd8) + 0x14) != 0)))) ||
       ((*(longlong *)(local_68 + 0xe0) != 0 &&
        (*(int *)(*(longlong *)(local_68 + 0xe0) + 0x18) != 0)))) {
      FUN_146f154f2(&local_68);
    }
    if (*(int *)(lVar12 + 0x18) != 0) {
      FUN_146f5b2fa(lVar12,local_d0);
    }
  } while (iVar1 == 0);
  *local_a8 = iVar7;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 146f154f2 FUN_146f154f2 body=112 status=ok
// SIG undefined FUN_146f154f2(void)

void FUN_146f154f2(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0xf8);
  if (lVar1 == 0) {
    return;
  }
  FUN_146f1b06e(*(undefined8 *)(lVar1 + 8),(int)param_1[1],1);
  FUN_146f1b0f6(*(longlong *)(lVar1 + 8) + 0x110,*(undefined4 *)((longlong)param_1 + 0xc),1);
  FUN_146f1b0f6(*(longlong *)(lVar1 + 8) + 0x3b0,*(undefined4 *)((longlong)param_1 + 0x14),1);
  FUN_146f1b17e(*(longlong *)(lVar1 + 8) + 0x1a0,(int)param_1[2],1);
  return;
}



// FUNCTION 146f15562 FUN_146f15562 body=81 status=ok
// SIG undefined FUN_146f15562(void)

void FUN_146f15562(undefined8 *param_1,ushort *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    FUN_146f155b4(param_1 + 1);
  }
  if (0x3ff < (ushort)(param_2[1] | *param_2 | param_2[2] | param_2[3])) {
    FUN_146f25d2e(*param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 146f155b4 FUN_146f155b4 body=103 status=ok
// SIG undefined FUN_146f155b4(void)

void FUN_146f155b4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 8) & *(uint *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 4) + (int)param_2 & *(uint *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (uVar2 < uVar3 || param_2 == 0) {
    FUN_146f1d64a(lVar1 + (ulonglong)uVar2 * 8,param_2);
  }
  else {
    FUN_146f1d64a(lVar1 + (ulonglong)uVar2 * 8,*(int *)(param_1 + 0x18) - uVar2);
    FUN_146f1d688(lVar1,uVar3);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + (int)param_2;
  return;
}



// FUNCTION 146f1561c FUN_146f1561c body=72 status=ok
// SIG undefined FUN_146f1561c(void)

void FUN_146f1561c(undefined8 param_1,char param_2,ushort *param_3)

{
  FUN_146f26006();
  if ((param_2 == '\0') && (0x3ff < (ushort)(param_3[1] | *param_3 | param_3[2] | param_3[3]))) {
    FUN_146f1b678(param_1);
    return;
  }
  return;
}



// FUNCTION 146f15664 FUN_146f15664 body=84 status=ok
// SIG undefined FUN_146f15664(void)

undefined8 FUN_146f15664(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *in_R9;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_142a72fc6();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_28 = *in_R9;
    uStack_24 = in_R9[1];
    uStack_20 = in_R9[2];
    uStack_1c = in_R9[3];
    uVar2 = FUN_142a72bd8(lVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f156ba FUN_146f156ba body=63 status=ok
// SIG undefined FUN_146f156ba(void)

bool FUN_146f156ba(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_146f156fa();
  if (plVar2 != (longlong *)0x0) {
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0xc)) {
      return true;
    }
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0x2118)) {
        return true;
      }
      return *(int *)(lVar1 + 0x2108) != 0;
    }
  }
  return false;
}



// FUNCTION 146f156fa FUN_146f156fa body=95 status=ok
// SIG undefined FUN_146f156fa(void)

longlong FUN_146f156fa(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 != 0) {
    return param_1[(ulonglong)param_2 + 10];
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar4 * 0x40;
        if (*(uint *)(*param_1 + (longlong)iVar4 * 0x40) == param_3) goto LAB_146f15710;
        iVar4 = *(int *)(lVar3 + 0x38);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_146f15710:
  lVar1 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 146f1575a FUN_146f1575a body=77 status=ok
// SIG undefined FUN_146f1575a(void)

bool FUN_146f1575a(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_146f156fa();
  if (plVar2 == (longlong *)0x0) {
    return true;
  }
  if ((int)plVar2[1] == *(int *)((longlong)plVar2 + 0xc)) {
    lVar1 = *plVar2;
    if (lVar1 == 0) {
      return true;
    }
    if ((*(int *)(lVar1 + 0x2118) == 0) && (*(int *)(lVar1 + 0x2100) == *(int *)(lVar1 + 0x2104))) {
      return *(int *)(lVar1 + 0x2108) == 0;
    }
  }
  return false;
}



// FUNCTION 146f157a8 FUN_146f157a8 body=369 status=ok
// SIG undefined FUN_146f157a8(void)

undefined8 FUN_146f157a8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar5 = (int)param_1[5];
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = param_1;
  if ((iStack_34 != iVar5) || (uStack_40 != plVar1)) {
    do {
      lVar3 = *(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x40);
      if ((lVar3 != 0) &&
         (((*(int *)(lVar3 + 0x2118) != 0 || (*(int *)(lVar3 + 0x2100) != *(int *)(lVar3 + 0x2104)))
          || (*(int *)(lVar3 + 0x2108) != 0)))) goto LAB_146f158f1;
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (((longlong *)CONCAT44(uStack_5c,uStack_60) != plVar1 || iStack_54 != iVar5) ||
             local_70 != param_1);
  }
  lVar3 = -0x18;
  do {
    plVar1 = *(longlong **)((longlong)param_1 + lVar3 + 0x68);
    if (((plVar1 != (longlong *)0x0) && (lVar2 = *plVar1, lVar2 != 0)) &&
       ((*(int *)(lVar2 + 0x2118) != 0 ||
        ((*(int *)(lVar2 + 0x2100) != *(int *)(lVar2 + 0x2104) || (*(int *)(lVar2 + 0x2108) != 0))))
       )) goto LAB_146f158f1;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0);
  uVar4 = 1;
LAB_146f158f3:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
LAB_146f158f1:
  uVar4 = 0;
  goto LAB_146f158f3;
}



// FUNCTION 146f1591a FUN_146f1591a body=52 status=ok
// SIG undefined FUN_146f1591a(void)

bool FUN_146f1591a(void)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  
  plVar2 = (longlong *)FUN_146f156fa();
  bVar3 = true;
  if ((plVar2 != (longlong *)0x0) && (lVar1 = *plVar2, lVar1 != 0)) {
    bVar3 = (uint)(*(int *)(lVar1 + 0x2104) - *(int *)(lVar1 + 0x2100)) < 0x400;
  }
  return bVar3;
}



// FUNCTION 146f1594e FUN_146f1594e body=95 status=ok
// SIG undefined FUN_146f1594e(void)

longlong FUN_146f1594e(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 != 0) {
    return param_1[(ulonglong)param_2 + 10];
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar4 * 0x40;
        if (*(uint *)(*param_1 + (longlong)iVar4 * 0x40) == param_3) goto LAB_146f15964;
        iVar4 = *(int *)(lVar3 + 0x38);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_146f15964:
  lVar1 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 146f159ae FUN_146f159ae body=96 status=ok
// SIG undefined FUN_146f159ae(void)

undefined8
FUN_146f159ae(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 *param_6,undefined1 *param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_146f1594e(param_1,param_3,param_4);
  if (lVar1 == 0) {
    *param_6 = 0;
    *(undefined4 *)(param_6 + 1) = 0;
    *param_7 = 0;
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_142a72ce0(lVar1,param_2,param_5,param_6,param_7);
  }
  return uVar2;
}



// FUNCTION 146f15a0e FUN_146f15a0e body=60 status=ok
// SIG undefined FUN_146f15a0e(void)

void FUN_146f15a0e(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146f1594e(param_1,param_3,param_4);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    FUN_146f1561c(*plVar1,param_2,param_5);
    return;
  }
  return;
}



// FUNCTION 146f15a4a FUN_146f15a4a body=112 status=ok
// SIG undefined FUN_146f15a4a(void)

void FUN_146f15a4a(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    FUN_146f25cde(lVar2);
    thunk_FUN_1400020a8(lVar2,0x2110);
  }
  lVar2 = 0;
  do {
    puVar1 = *(undefined8 **)((longlong)param_1 + lVar2 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_146f1506e(puVar1 + 2);
      FUN_146f1b720(puVar1[1]);
      FUN_146f1b720(*puVar1);
      thunk_FUN_1400020a8(puVar1,0x40);
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x10);
  return;
}



// FUNCTION 146f15aba FUN_146f15aba body=104 status=ok
// SIG undefined FUN_146f15aba(void)

ulonglong FUN_146f15aba(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)param_1[1];
  if (((plVar1 == (longlong *)0x0) ||
      ((((int)plVar1[2] == *(int *)((longlong)plVar1 + 0x14) && (*plVar1 == 0)) && (plVar1[1] == 0))
      )) && ((plVar1 = (longlong *)param_1[2], plVar1 == (longlong *)0x0 ||
             ((((int)plVar1[2] == *(int *)((longlong)plVar1 + 0x14) && (*plVar1 == 0)) &&
              (plVar1[1] == 0)))))) {
    lVar2 = *param_1;
    if (lVar2 != 0) {
      uVar3 = *(uint *)(lVar2 + 0x2100) & 0x3ff |
              *(uint *)(lVar2 + 0x2104) ^ *(uint *)(lVar2 + 0x2100);
      return (ulonglong)CONCAT31((int3)(uVar3 >> 8),uVar3 == 0);
    }
    uVar4 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 146f15b0a FUN_146f15b0a body=136 status=ok
// SIG undefined FUN_146f15b0a(void)

longlong FUN_146f15b0a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar4 = *(uint *)(param_1 + 0x14);
  iVar6 = *(int *)(param_1 + 0x10) - uVar4;
  if (iVar6 != 0) {
    uVar7 = (ulonglong)(iVar6 + (uint)(iVar6 == 0));
    uVar5 = uVar4;
    do {
      uVar8 = (ulonglong)(*(uint *)(param_1 + 0x18) & uVar5);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar8 * 8);
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) != 0) {
          return *(longlong *)(param_1 + 0x20) + uVar8 * 8;
        }
        uVar4 = *(uint *)(param_1 + 0x14);
        uVar5 = uVar4;
      }
      if (*(uint *)(param_1 + 0x10) != uVar5) {
        plVar3 = *(longlong **)
                  (*(longlong *)(param_1 + 0x20) +
                  (ulonglong)(uVar5 & *(uint *)(param_1 + 0x18)) * 8);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 4;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar3 + 0x20))(plVar3,1);
          }
          uVar4 = *(uint *)(param_1 + 0x14);
        }
        uVar4 = uVar4 + 1;
        *(uint *)(param_1 + 0x14) = uVar4;
        uVar5 = uVar4;
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return 0;
}



// FUNCTION 146f15b92 FUN_146f15b92 body=66 status=ok
// SIG undefined FUN_146f15b92(void)

void FUN_146f15b92(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar2 + 0x14);
  if (*(uint *)(lVar2 + 0x10) != uVar4) {
    plVar3 = *(longlong **)
              (*(longlong *)(lVar2 + 0x20) + (ulonglong)(*(uint *)(lVar2 + 0x18) & uVar4) * 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 4;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,1);
      }
      uVar4 = *(uint *)(lVar2 + 0x14);
    }
    *(uint *)(lVar2 + 0x14) = uVar4 + 1;
  }
  return;
}



// FUNCTION 146f15bd4 FUN_146f15bd4 body=66 status=ok
// SIG undefined FUN_146f15bd4(void)

void FUN_146f15bd4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar4 = *(uint *)(lVar2 + 0x14);
  if (*(uint *)(lVar2 + 0x10) != uVar4) {
    plVar3 = *(longlong **)
              (*(longlong *)(lVar2 + 0x20) + (ulonglong)(*(uint *)(lVar2 + 0x18) & uVar4) * 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 4;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,1);
      }
      uVar4 = *(uint *)(lVar2 + 0x14);
    }
    *(uint *)(lVar2 + 0x14) = uVar4 + 1;
  }
  return;
}



// FUNCTION 146f15c16 FUN_146f15c16 body=553 status=ok
// SIG undefined FUN_146f15c16(void)

void FUN_146f15c16(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _Dst = (void *)*param_1;
  if (_Dst == (void *)0x0) {
    _Dst = (void *)FUN_14001cc68(0x2110);
    memset(_Dst,0,0x210c);
    *param_1 = (longlong)_Dst;
    puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    param_1[2] = (longlong)puVar2;
    puVar2[6] = param_1[3];
  }
  if (param_3 == 0) {
    FUN_146f25dc4(_Dst,param_2);
  }
  else {
    thunk_FUN_142a7fe98(_Dst,param_2,param_3);
  }
  if (((*(longlong *)(param_2 + 8) == 0) &&
      ((*(longlong *)(param_2 + 0xd8) == 0 || (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) == 0))
      )) && ((*(longlong *)(param_2 + 0xe0) == 0 ||
             (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)))) {
    lVar4 = *param_1;
    lVar1 = param_1[2];
    while (plVar3 = (longlong *)FUN_146f25e54(lVar4), plVar3 != (longlong *)0x0) {
      if (*plVar3 == 0) {
        local_58 = false;
      }
      else {
        local_58 = *(int *)(*plVar3 + 8) == *(int *)((longlong)param_1 + 0x24);
      }
      FUN_142a73374(lVar1,param_2,param_3,plVar3);
      FUN_146f25ed8(*param_1);
      if (((*(longlong *)(param_2 + 8) != 0) ||
          ((*(longlong *)(param_2 + 0xd8) != 0 &&
           (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) != 0)))) ||
         ((*(longlong *)(param_2 + 0xe0) != 0 &&
          (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) != 0)))) goto LAB_146f15caf;
      lVar4 = *param_1;
    }
    local_48 = (longlong *)0x0;
    uStack_40 = 0;
    FUN_146f1d5ea(&local_48,0x10);
    FUN_146f25f36(*param_1,&local_48);
    uVar5 = 0;
    if ((longlong)(int)uStack_40 != 0) {
      plVar3 = local_48 + (int)uStack_40;
      plVar6 = local_48;
      do {
        if (*plVar6 == 0) {
          local_58 = false;
        }
        else {
          local_58 = *(int *)(*plVar6 + 8) == *(int *)((longlong)param_1 + 0x24);
        }
        FUN_142a73374(lVar1,param_2,param_3,plVar6);
      } while ((((*(longlong *)(param_2 + 8) == 0) &&
                ((*(longlong *)(param_2 + 0xd8) == 0 ||
                 (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) == 0)))) &&
               ((*(longlong *)(param_2 + 0xe0) == 0 ||
                (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)))) &&
              (plVar6 = plVar6 + 1, plVar6 != plVar3));
      uVar5 = uStack_40 & 0xffffffff;
    }
    FUN_146f1d381(local_48,uVar5);
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_146f15caf:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f15e40 FUN_146f15e40 body=51 status=ok
// SIG undefined FUN_146f15e40(void)

void FUN_146f15e40(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}



// FUNCTION 146f15e74 FUN_146f15e74 body=95 status=ok
// SIG undefined FUN_146f15e74(void)

void FUN_146f15e74(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x60;
  do {
    lVar1 = *(longlong *)(param_1 + lVar2);
    if (lVar1 != 0) {
      FUN_146f15a4a(lVar1);
      thunk_FUN_1400020a8(lVar1,0x28);
    }
    lVar2 = lVar2 + -8;
  } while (lVar2 != 0x48);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146f1b75e(param_1);
  return;
}



// FUNCTION 146f15ed4 FUN_146f15ed4 body=8 status=ok
// SIG undefined FUN_146f15ed4(void)

void FUN_146f15ed4(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x68) = *param_2;
  return;
}



// FUNCTION 146f15edc FUN_146f15edc body=64 status=ok
// SIG undefined FUN_146f15edc(void)

ulonglong FUN_146f15edc(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_146f15f1c();
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 8);
    if ((lVar1 != 0) &&
       (uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1),
       *(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 0x14))) goto LAB_146f15f15;
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if (lVar2 != 0) {
      uVar3 = (ulonglong)
              CONCAT31((int3)((uint)*(int *)(lVar2 + 0x10) >> 8),
                       *(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 0x14));
      goto LAB_146f15f15;
    }
  }
  uVar3 = 0;
LAB_146f15f15:
  return uVar3 & 0xffffffff;
}



// FUNCTION 146f15f1c FUN_146f15f1c body=95 status=ok
// SIG undefined FUN_146f15f1c(void)

longlong FUN_146f15f1c(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 != 0) {
    return param_1[(ulonglong)param_2 + 10];
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar4 * 0x38;
        if (*(uint *)(*param_1 + (longlong)iVar4 * 0x38) == param_3) goto LAB_146f15f32;
        iVar4 = *(int *)(lVar3 + 0x30);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_146f15f32:
  lVar1 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 146f15f7c FUN_146f15f7c body=83 status=ok
// SIG undefined FUN_146f15f7c(void)

void FUN_146f15f7c(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142a7358a(param_1,param_3,param_4);
  uVar1 = DAT_14c999570;
  if (lVar2 != 0) {
    FUN_142a730e2(lVar2,param_2,param_5);
    return;
  }
  FUN_146f5b89e(param_2);
  if (*(longlong *)(param_2 + 8) == 0) {
    *(undefined8 *)(param_2 + 8) = uVar1;
  }
  return;
}



// FUNCTION 146f15fd0 FUN_146f15fd0 body=95 status=ok
// SIG undefined FUN_146f15fd0(void)

longlong FUN_146f15fd0(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 != 0) {
    return param_1[(ulonglong)param_2 + 10];
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar4 * 0x38;
        if (*(uint *)(*param_1 + (longlong)iVar4 * 0x38) == param_3) goto LAB_146f15fe6;
        iVar4 = *(int *)(lVar3 + 0x30);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_146f15fe6:
  lVar1 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 146f16030 FUN_146f16030 body=7 status=ok
// SIG undefined FUN_146f16030(void)

undefined8 * FUN_146f16030(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 146f16038 FUN_146f16038 body=85 status=ok
// SIG undefined FUN_146f16038(void)

ulonglong FUN_146f16038(undefined8 *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar2 = (ulonglong *)*param_1;
  lVar1 = (ulonglong)param_3 - 1;
  uVar4 = -(ulonglong)param_3;
  uVar3 = *puVar2 + lVar1 & uVar4;
  uVar5 = uVar3 + param_2;
  if (puVar2[1] < uVar5) {
    FUN_140023dd8(puVar2,param_3 + param_2);
    uVar3 = lVar1 + *puVar2 & uVar4;
    uVar5 = param_2 + uVar3;
  }
  *puVar2 = uVar5;
  return uVar3;
}



// FUNCTION 146f1608e FUN_146f1608e body=98 status=ok
// SIG undefined FUN_146f1608e(void)

void FUN_146f1608e(undefined8 *param_1)

{
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined2 *)(param_1 + 0x17) = 0xffff;
  return;
}



// FUNCTION 146f160f0 FUN_146f160f0 body=118 status=ok
// SIG undefined FUN_146f160f0(void)

void FUN_146f160f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[4];
  param_1[4] = param_2[3];
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0x2c);
  FUN_146f16166(param_1 + 5);
  FUN_146f161dc(param_1 + 7,*(int *)((longlong)param_1 + 0xb4) + 1);
  FUN_146f14ba4(param_1 + 0x13,*(undefined4 *)(param_2 + 5));
  return;
}



// FUNCTION 146f16166 FUN_146f16166 body=116 status=ok
// SIG undefined FUN_146f16166(void)

void FUN_146f16166(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f1e396(param_1);
    }
    memset((void *)((longlong)iVar1 * 2 + *param_1),0,(longlong)(param_2 - iVar1) * 2);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146f1e41a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f161dc FUN_146f161dc body=121 status=ok
// SIG undefined FUN_146f161dc(void)

void FUN_146f161dc(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f1e4c4(param_1,iVar1);
    }
    FUN_146f1e4b0((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146f1e54a(param_1,param_2,iVar1 - param_2);
    FUN_146f1e5a4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f16256 FUN_146f16256 body=99 status=ok
// SIG undefined FUN_146f16256(void)

void FUN_146f16256(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  FUN_146f16166(param_1 + 0x28);
  FUN_146efc8cc(param_1 + 0x98,param_2);
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar1 = (longlong)*(int *)(param_1 + 0x40) << 4;
    do {
      if (*(int *)(lVar2 + 8) != 0) {
        FUN_146f162ba(lVar2,param_2,1);
      }
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 146f162ba FUN_146f162ba body=122 status=ok
// SIG undefined FUN_146f162ba(void)

void FUN_146f162ba(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f1e66c(param_1);
    }
    memset((void *)((longlong)iVar1 * 2 + *param_1),0,(longlong)(param_2 - iVar1) * 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146f1e6f0(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f16336 FUN_146f16336 body=145 status=ok
// SIG undefined FUN_146f16336(void)

void FUN_146f16336(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(*param_1 + 0x290) + (longlong)(param_2 / 100) * 8) +
       (longlong)(param_2 % 100) * 8) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x270) + (longlong)(param_2 / 100) * 8);
    lVar4 = (longlong)(param_2 % 100) * 0x38;
    lVar1 = lVar2 + lVar4;
    if ((*(int *)(lVar1 + 8) != 0) || (*(int *)(lVar1 + 0xc) != 0)) {
      uVar3 = FUN_146f168de(param_1,*(undefined8 *)(lVar2 + 0x10 + lVar4));
      if ((short)uVar3 != -1) {
        FUN_142a7545c(param_1,param_2,uVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146f163c8 FUN_146f163c8 body=372 status=ok
// SIG undefined FUN_146f163c8(void)

void FUN_146f163c8(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 auStack_78 [32];
  int *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_1;
  if (((*(byte *)(*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar2 + 0x270) + (longlong)(param_2 / 100) * 8) +
                    0x10 + (longlong)(param_2 % 100) * 0x38) + 0x3c) & 2) != 0) &&
     (lVar3 = param_3[1], (longlong)(int)lVar3 != 0)) {
    lVar2 = *param_3;
    lVar4 = 0;
    do {
      FUN_146f16562(param_1[3],param_2,*(undefined4 *)(lVar2 + lVar4));
      lVar4 = lVar4 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar4);
    lVar2 = *param_1;
  }
  FUN_146f1b984(lVar2 + 0x300,&local_58,param_2);
  if ((longlong)local_50 != 0) {
    piVar5 = local_58;
    do {
      iVar1 = *piVar5;
      lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x270) + (longlong)(iVar1 / 100) * 8);
      lVar3 = (longlong)(iVar1 % 100) * 0x38;
      if ((((*(int *)(lVar2 + 0x28 + lVar3) != 0) &&
           (lVar2 = lVar2 + lVar3, (*(byte *)(lVar2 + 0x32) & 4) != 0)) &&
          ((*(byte *)(*(longlong *)(lVar2 + 0x10) + 0x3c) & 2) != 0)) &&
         (lVar2 = param_3[1], (longlong)(int)lVar2 != 0)) {
        lVar3 = *param_3;
        lVar4 = 0;
        do {
          FUN_146f16562(param_1[3],iVar1,*(undefined4 *)(lVar3 + lVar4));
          lVar4 = lVar4 + 4;
        } while ((longlong)(int)lVar2 * 4 != lVar4);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != local_58 + local_50);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1653e FUN_146f1653e body=35 status=ok
// SIG undefined FUN_146f1653e(void)

void FUN_146f1653e(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar2 = (longlong)param_2 * 0x10;
  *(undefined4 *)(lVar1 + 8 + lVar2) = 0;
  if (*(int *)(lVar1 + 0xc + lVar2) == 0) {
    return;
  }
  FUN_146f1e786(lVar1 + lVar2);
  return;
}



// FUNCTION 146f16562 FUN_146f16562 body=169 status=ok
// SIG undefined FUN_146f16562(void)

void FUN_146f16562(longlong *param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 1 << ((byte)param_2 & 0x1f);
  uVar1 = (ulonglong)(param_2 >> 5);
  uVar3 = *(uint *)(param_1[2] + uVar1 * 4);
  if (((uVar3 >> (param_2 & 0x1f) & 1) == 0) &&
     ((*(uint *)(*(longlong *)(param_1[5] + 0x38) + uVar1 * 4) & uVar2) != 0)) {
    if (param_3 == 0) {
      *(uint *)(param_1[2] + uVar1 * 4) = uVar3 | uVar2;
    }
    uVar3 = *(uint *)(param_1 + 1);
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    if (uVar2 == uVar3) {
      if ((int)(uVar2 + 0x100) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar2 + 0x100);
      }
      FUN_146f1f014(param_1);
      uVar3 = *(uint *)(param_1 + 1);
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = uVar3 + 1;
    if (uVar2 < uVar3 + 1) {
      FUN_146f1f074(param_1,uVar3);
    }
    *(ulonglong *)(*param_1 + (longlong)(int)uVar3 * 8) = CONCAT44(param_2,param_3);
  }
  return;
}



// FUNCTION 146f1660c FUN_146f1660c body=238 status=ok
// SIG undefined FUN_146f1660c(void)

int FUN_146f1660c(longlong param_1,uint param_2,ushort param_3)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x50) == *(int *)(param_1 + 0x7c)) {
    return 0xe;
  }
  lVar3 = param_1 + 0x80;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x88);
  }
  iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x90) - 1U & param_2) * 4);
  if (iVar2 == -1) {
    return 0xe;
  }
  while (lVar3 = *(longlong *)(param_1 + 0x48) + (longlong)iVar2 * 0x60,
        *(uint *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2 * 0x60) != param_2) {
    iVar2 = *(int *)(lVar3 + 0x58);
    if (iVar2 == -1) {
      return 0xe;
    }
  }
  if ((longlong *)(lVar3 + 8) == (longlong *)0x0 || lVar3 == 0) {
    return 0xe;
  }
  if (*(int *)(lVar3 + 0x10) == *(int *)(lVar3 + 0x3c)) {
    return 0xe;
  }
  lVar4 = lVar3 + 0x40;
  if (*(longlong *)(lVar3 + 0x48) != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x48);
  }
  iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar3 + 0x50) - 1U & (uint)param_3) * 4);
  if (iVar2 == -1) {
    return 0xe;
  }
  do {
    puVar1 = (ushort *)(*(longlong *)(lVar3 + 8) + (longlong)iVar2 * 0xc);
    if (*puVar1 == param_3) {
      if (puVar1 + 1 == (ushort *)0x0 || puVar1 == (ushort *)0x0) {
        return 0xe;
      }
      return (int)(short)puVar1[1];
    }
    iVar2 = *(int *)(puVar1 + 2);
  } while (iVar2 != -1);
  return 0xe;
}



// FUNCTION 146f166fa FUN_146f166fa body=42 status=ok
// SIG undefined FUN_146f166fa(void)

void FUN_146f166fa(undefined8 param_1)

{
  FUN_142a74742();
  if (DAT_14c75f450 == '\x01') {
    FUN_142a74a48(param_1);
    return;
  }
  return;
}



// FUNCTION 146f16724 FUN_146f16724 body=94 status=ok
// SIG undefined FUN_146f16724(void)

void FUN_146f16724(longlong param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  
  if (((param_3 != 0) && (-1 < (int)param_3)) && ((int)param_3 < *(int *)(param_1 + 0x30))) {
    lVar2 = param_1 + 0x18;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
    }
    if (((*(uint *)(lVar2 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) &&
       (lVar2 = (ulonglong)param_3 * 0x20 + *(longlong *)(param_1 + 8), lVar2 != 0)) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      *param_2 = *(int *)(param_1 + 0x70) << 0x18 | param_3 & 0xffffff;
      param_2[1] = uVar1;
      return;
    }
  }
  param_2[0] = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 146f16782 FUN_146f16782 body=116 status=ok
// SIG undefined FUN_146f16782(void)

void FUN_146f16782(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined1 local_32 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = local_48 & 0xffffffffffffff00;
  FUN_146f167f8(param_1,local_32,param_2,param_3);
  local_48 = param_4;
  FUN_142a74c64(param_1,param_2,local_32,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f167f8 FUN_146f167f8 body=229 status=ok
// SIG undefined FUN_146f167f8(void)

ushort * FUN_146f167f8(longlong param_1,ushort *param_2,uint param_3,uint param_4,byte param_5)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if ((*(byte *)(lVar2 + 0x2e0) & 8) == 0) {
    uVar4 = (uint)*(ushort *)(*(longlong *)(lVar2 + 0xc0) + (longlong)(int)param_4 * 2);
  }
  else {
    uVar4 = FUN_146f2180c(lVar2,(ulonglong)param_4);
  }
  bVar6 = uVar4 == param_3;
  uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_4 * 2);
  bVar7 = (uVar1 & 0x7fff) == param_3;
  bVar3 = !bVar7;
  bVar5 = bVar3 || (short)uVar1 < 0;
  *param_2 = ((ushort)bVar6 << 9 | (ushort)param_5 + (ushort)param_5 + (ushort)!bVar6 * 4) +
             (ushort)(param_5 | bVar6) * 0x80 + 4 | (ushort)bVar3 << 4 |
             (ushort)bVar3 << 0xb | (ushort)bVar7 << 5 | (ushort)bVar5 << 0xc | (ushort)bVar5 << 6 |
             0x6101;
  return param_2;
}



// FUNCTION 146f168de FUN_146f168de body=232 status=ok
// SIG undefined FUN_146f168de(void)

ulonglong FUN_146f168de(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  
  uVar7 = (ulonglong)*(ushort *)(param_1 + 0xb8);
  if (*(ushort *)(param_1 + 0xb8) == 0xffff) {
    uVar7 = 0xffff;
    if ((longlong)(int)param_2[1] != 0) {
      plVar10 = (longlong *)*param_2;
      plVar1 = plVar10 + (int)param_2[1];
      plVar8 = plVar1;
      do {
        lVar3 = *plVar10;
        uVar2 = *(ushort *)(lVar3 + 0x7c);
        if (uVar2 != 0) {
          lVar4 = *(longlong *)(lVar3 + 0x10);
          lVar9 = 0;
          do {
            if (*(undefined **)(lVar4 + lVar9) == &DAT_14c99bf08) {
              plVar8 = (longlong *)((lVar4 + lVar9) - *(longlong *)(lVar3 + 0x10) >> 1);
              lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + (longlong)plVar8);
              if (lVar5 != 0) {
                plVar6 = *(longlong **)(lVar5 + 0x20);
                if (DAT_14c87ead8 == '\0') {
                  FUN_140024d3a(&DAT_14c87eb00);
                  DAT_14c87ead8 = '\x01';
                }
                plVar8 = (longlong *)(ulonglong)DAT_14c892ea0;
                if (plVar6 == plVar8) {
                  uVar2 = *(ushort *)(lVar5 + 0x40);
                  *(ushort *)(param_1 + 0xb8) = uVar2;
                  return (ulonglong)uVar2;
                }
              }
            }
            lVar9 = lVar9 + 0x10;
          } while ((ulonglong)uVar2 * 0x10 != lVar9);
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar1);
      uVar7 = CONCAT62((int6)((ulonglong)plVar8 >> 0x10),0xffff);
    }
  }
  return uVar7;
}



// FUNCTION 146f169c6 FUN_146f169c6 body=29 status=ok
// SIG undefined FUN_146f169c6(void)

undefined8 * FUN_146f169c6(undefined8 *param_1)

{
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 146f169e4 FUN_146f169e4 body=47 status=ok
// SIG undefined FUN_146f169e4(void)

void FUN_146f169e4(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f16a14 FUN_146f16a14 body=19 status=ok
// SIG undefined FUN_146f16a14(void)

void FUN_146f16a14(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *param_2;
  FUN_146f14ba4(param_1 + 0x10,*(undefined4 *)(param_2 + 1));
  return;
}



// FUNCTION 146f16a28 FUN_146f16a28 body=9 status=ok
// SIG undefined FUN_146f16a28(void)

void FUN_146f16a28(longlong param_1)

{
  FUN_146efc8cc(param_1 + 0x10);
  return;
}



// FUNCTION 146f16a32 FUN_146f16a32 body=70 status=ok
// SIG undefined FUN_146f16a32(void)

void FUN_146f16a32(longlong param_1)

{
  if (0 < *(int *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_146f1f014(param_1);
    }
    memset(*(void **)(param_1 + 0x10),0,(longlong)*(int *)(param_1 + 0x18) << 2);
    return;
  }
  return;
}



// FUNCTION 146f16a78 FUN_146f16a78 body=133 status=ok
// SIG undefined FUN_146f16a78(void)

undefined8 * FUN_146f16a78(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_146f1ba6e(param_1 + 3);
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  return param_1;
}



// FUNCTION 146f16afe FUN_146f16afe body=128 status=ok
// SIG undefined FUN_146f16afe(void)

void FUN_146f16afe(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_146f16b7e(param_1);
  return;
}



// FUNCTION 146f16b7e FUN_146f16b7e body=56 status=ok
// SIG undefined FUN_146f16b7e(void)

void FUN_146f16b7e(longlong *param_1)

{
  FUN_146f1ba6e(param_1 + 3);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f16bb6 FUN_146f16bb6 body=231 status=ok
// SIG undefined FUN_146f16bb6(void)

void FUN_146f16bb6(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  param_1[0x14] = param_2[1];
  param_1[0x15] = param_2[2];
  param_1[0x17] = *param_2;
  param_1[0x16] = param_2[4];
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2[1] + 0x30);
  uVar2 = *(uint *)(param_2 + 6);
  if (*(uint *)(param_2 + 5) < *(uint *)(param_2 + 6)) {
    uVar2 = *(uint *)(param_2 + 5);
  }
  *(uint *)(param_1 + 0x19) = uVar2;
  FUN_146f14ba4(param_1 + 7,*(undefined4 *)((longlong)param_2 + 0x2c));
  FUN_146f14ba4(param_1 + 10,*(int *)(param_1 + 0x19) + 1);
  *(uint *)param_1[10] = *(uint *)param_1[10] | 1;
  FUN_146f14bfc(param_1 + 0xd,*(undefined4 *)((longlong)param_2 + 0x2c),1);
  *(uint *)((longlong)param_1 + 0xc4) =
       (*(int *)(param_1 + 0x18) + (uint)(*(int *)(param_1 + 0x18) == 0)) * 0x20 | 0x18;
  FUN_146f14bfc(param_1 + 0x11,*(int *)(param_1 + 0x19) + 1,1);
  uVar1 = param_2[3];
  FUN_146f14ba4(param_1,*(int *)(param_2 + 6) * *(int *)(param_1 + 0x18) * 2 + 1);
  *(uint *)*param_1 = *(uint *)*param_1 | 1;
  param_1[6] = uVar1;
  return;
}



// FUNCTION 146f16c9e FUN_146f16c9e body=26 status=ok
// SIG undefined FUN_146f16c9e(void)

void FUN_146f16c9e(undefined8 param_1)

{
  FUN_146f16cb8();
  FUN_146f179b2(param_1);
  return;
}



// FUNCTION 146f16cb8 FUN_146f16cb8 body=173 status=ok
// SIG undefined FUN_146f16cb8(void)

void FUN_146f16cb8(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  **(uint **)(param_1 + 0x50) = **(uint **)(param_1 + 0x50) & 0xfffffffe;
  uVar2 = *(uint *)(param_1 + 0x58);
  uVar5 = 0;
  cVar1 = *(char *)(param_1 + 0x60);
  if ((ulonglong)uVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    uVar7 = 0;
    do {
      uVar8 = 0xffffffff;
      if (uVar7 == uVar2 - 1) {
        uVar8 = 0xffffffff >> (-cVar1 & 0x1fU);
      }
      uVar8 = uVar8 & *(uint *)(lVar3 + uVar7 * 4);
      uVar6 = uVar5;
      if (uVar8 != 0) {
        do {
          if (((uVar8 & 1) != 0) &&
             (*(longlong *)
               (*(longlong *)(param_1 + 0x78) +
               (ulonglong)((uVar6 & 0xffff) * *(int *)(param_1 + 0xc4))) != 0)) {
            FUN_1400020a8();
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
          uVar6 = uVar6 + 1;
        } while (bVar4);
      }
      uVar7 = uVar7 + 1;
      uVar5 = uVar5 + 0x20;
    } while (uVar7 != uVar2);
  }
  return;
}



// FUNCTION 146f16d66 FUN_146f16d66 body=43 status=ok
// SIG undefined FUN_146f16d66(void)

void FUN_146f16d66(longlong param_1,undefined4 param_2)

{
  FUN_146efc8cc(param_1 + 0x38);
  FUN_146f14bfc(param_1 + 0x68,param_2,1);
  return;
}



// FUNCTION 146f16d92 FUN_146f16d92 body=333 status=ok
// SIG undefined FUN_146f16d92(void)

void FUN_146f16d92(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong local_b8 [7];
  undefined8 local_80;
  longlong local_78;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_80 = param_1;
  FUN_146f178b2();
  local_c0 = param_2;
  if ((int)param_2[5] != 0) {
    uVar1 = *(uint *)(param_2 + 1);
    iVar5 = 0;
    lVar4 = param_2[2];
    if ((ulonglong)uVar1 != 0) {
      lVar2 = *param_2;
      uVar7 = 0;
      do {
        uVar8 = 0xffffffff;
        if (uVar7 == uVar1 - 1) {
          uVar8 = 0xffffffff >> (-(char)lVar4 & 0x1fU);
        }
        uVar8 = uVar8 & *(uint *)(lVar2 + uVar7 * 4);
        iVar6 = iVar5;
        if (uVar8 != 0) {
          do {
            if ((uVar8 & 1) != 0) {
              FUN_146f17bc0(local_80,*(undefined4 *)(local_60 + (longlong)iVar6 * 4));
            }
            bVar3 = 1 < uVar8;
            uVar8 = uVar8 >> 1;
            iVar6 = iVar6 + 1;
          } while (bVar3);
        }
        uVar7 = uVar7 + 1;
        iVar5 = iVar5 + 0x20;
      } while (uVar7 != uVar1);
    }
  }
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  FUN_146f17960(local_c0,local_b8);
  if (local_b8[3] != 0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f16ee0 thunk_FUN_146f16ee6 body=5 status=ok
// SIG undefined thunk_FUN_146f16ee6(void)

void thunk_FUN_146f16ee6(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_c8 [44];
  uint uStack_9c;
  ulonglong uStack_98;
  ulonglong uStack_90;
  byte *pbStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  byte *pbStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint auStack_50 [2];
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pbStack_68 = (byte *)0x0;
  uStack_60 = *(uint *)(param_1 + 0x58);
  lVar9 = (longlong)(int)uStack_60;
  _Src = *(void **)(param_1 + 0x50);
  if (lVar9 == 0) {
    uStack_5c = 0;
  }
  else {
    FUN_1447bda9e(&pbStack_68,uStack_60,0);
    memcpy(pbStack_68,_Src,lVar9 << 2);
  }
  uStack_58 = *(undefined4 *)(param_1 + 0x60);
  *pbStack_68 = *pbStack_68 & 0xfe;
  uStack_9c = 0xffffffff >> (-(char)uStack_58 & 0x1fU);
  uVar6 = 0;
  if ((ulonglong)uStack_60 != 0) {
    uStack_98 = (ulonglong)(uStack_60 - 1);
    lStack_80 = (param_2 & 0xffffffff) << 5;
    uVar10 = 0;
    pbStack_88 = pbStack_68;
    uStack_90 = (ulonglong)uStack_60;
    do {
      uVar11 = 0xffffffff;
      if (uVar10 == uStack_98) {
        uVar11 = uStack_9c;
      }
      uVar11 = uVar11 & *(uint *)(pbStack_88 + uVar10 * 4);
      uVar7 = uVar6;
      uVar4 = uVar6;
      uStack_70 = uVar10;
      if (uVar11 != 0) {
        do {
          uStack_78 = uVar4;
          if ((uVar11 & 1) != 0) {
            lVar13 = (ulonglong)(((uint)uVar7 & 0xffff) * *(int *)(param_1 + 0xc4)) +
                     *(longlong *)(param_1 + 0x78);
            lVar9 = lStack_80 + lVar13;
            auStack_50[0] = 0;
            auStack_50[1] = 1;
            iVar14 = 0;
            lVar12 = 0;
            do {
              lVar8 = (ulonglong)*(uint *)((longlong)auStack_50 + lVar12) * 0x10;
              iVar2 = *(int *)(lVar9 + 0x20 + lVar8);
              if (iVar2 != 0) {
                iVar5 = iVar2 + 0xff;
                if (-1 < iVar2) {
                  iVar5 = iVar2;
                }
                piVar1 = (int *)(*(longlong *)
                                  (*(longlong *)(param_1 + 0x18) + (longlong)(iVar5 >> 8) * 8) + 0xc
                                + (ulonglong)(uint)(iVar2 % 0x100) * 0x10);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_146f17b62(param_1);
                }
                *(undefined4 *)(lVar9 + lVar8 + 0x20) = 0;
                iVar14 = iVar14 + -1;
              }
              lVar12 = lVar12 + 4;
            } while (lVar12 != 8);
            FUN_146f1785e(param_1,lVar13,uVar7,iVar14);
            uVar6 = uStack_78;
          }
          bVar3 = 1 < uVar11;
          uVar7 = (ulonglong)((uint)uVar7 + 1);
          uVar11 = uVar11 >> 1;
          uVar4 = uStack_78;
        } while (bVar3);
      }
      uVar10 = uStack_70 + 1;
      uVar6 = (ulonglong)((int)uVar6 + 0x20);
    } while (uVar10 != uStack_90);
  }
  if (pbStack_68 != (byte *)0x0) {
    FUN_1400020a8();
  }
  if ((uStack_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f16ee6 FUN_146f16ee6 body=547 status=ok
// SIG undefined FUN_146f16ee6(void)

void FUN_146f16ee6(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_c8 [44];
  uint local_9c;
  ulonglong local_98;
  ulonglong local_90;
  byte *local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  byte *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = (byte *)0x0;
  local_60 = *(uint *)(param_1 + 0x58);
  lVar9 = (longlong)(int)local_60;
  _Src = *(void **)(param_1 + 0x50);
  if (lVar9 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1447bda9e(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar9 << 2);
  }
  local_58 = *(undefined4 *)(param_1 + 0x60);
  *local_68 = *local_68 & 0xfe;
  local_9c = 0xffffffff >> (-(char)local_58 & 0x1fU);
  uVar6 = 0;
  if ((ulonglong)local_60 != 0) {
    local_98 = (ulonglong)(local_60 - 1);
    local_80 = (param_2 & 0xffffffff) << 5;
    uVar10 = 0;
    local_88 = local_68;
    local_90 = (ulonglong)local_60;
    do {
      uVar11 = 0xffffffff;
      if (uVar10 == local_98) {
        uVar11 = local_9c;
      }
      uVar11 = uVar11 & *(uint *)(local_88 + uVar10 * 4);
      uVar7 = uVar6;
      uVar4 = uVar6;
      local_70 = uVar10;
      if (uVar11 != 0) {
        do {
          local_78 = uVar4;
          if ((uVar11 & 1) != 0) {
            lVar13 = (ulonglong)(((uint)uVar7 & 0xffff) * *(int *)(param_1 + 0xc4)) +
                     *(longlong *)(param_1 + 0x78);
            lVar9 = local_80 + lVar13;
            local_50[0] = 0;
            local_50[1] = 1;
            iVar14 = 0;
            lVar12 = 0;
            do {
              lVar8 = (ulonglong)*(uint *)((longlong)local_50 + lVar12) * 0x10;
              iVar2 = *(int *)(lVar9 + 0x20 + lVar8);
              if (iVar2 != 0) {
                iVar5 = iVar2 + 0xff;
                if (-1 < iVar2) {
                  iVar5 = iVar2;
                }
                piVar1 = (int *)(*(longlong *)
                                  (*(longlong *)(param_1 + 0x18) + (longlong)(iVar5 >> 8) * 8) + 0xc
                                + (ulonglong)(uint)(iVar2 % 0x100) * 0x10);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_146f17b62(param_1);
                }
                *(undefined4 *)(lVar9 + lVar8 + 0x20) = 0;
                iVar14 = iVar14 + -1;
              }
              lVar12 = lVar12 + 4;
            } while (lVar12 != 8);
            FUN_146f1785e(param_1,lVar13,uVar7,iVar14);
            uVar6 = local_78;
          }
          bVar3 = 1 < uVar11;
          uVar7 = (ulonglong)((uint)uVar7 + 1);
          uVar11 = uVar11 >> 1;
          uVar4 = local_78;
        } while (bVar3);
      }
      uVar10 = local_70 + 1;
      uVar6 = (ulonglong)((int)uVar6 + 0x20);
    } while (uVar10 != local_90);
  }
  if (local_68 != (byte *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f1710a FUN_146f1710a body=150 status=ok
// SIG undefined FUN_146f1710a(void)

void FUN_146f1710a(longlong param_1,uint param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_3 == 1) && ((DAT_14c75f451 & 1) != 0)) {
    uVar1 = *(ushort *)
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x270) +
                 (longlong)((int)param_2 / 100) * 8) + 0x10 + (longlong)((int)param_2 % 100) * 0x38)
             + 0x3c);
    uVar2 = 1 << ((byte)param_2 & 0x1f);
    uVar3 = uVar1 & 0x20;
    if ((uVar1 & 0x20) != 0) {
      uVar3 = uVar2;
    }
  }
  else {
    uVar2 = 1 << ((byte)param_2 & 0x1f);
    uVar3 = 0;
  }
  *(uint *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(param_2 >> 5) * 4) =
       ~uVar2 & *(uint *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(param_2 >> 5) * 4) | uVar3;
  return;
}



// FUNCTION 146f171a0 FUN_146f171a0 body=55 status=ok
// SIG undefined FUN_146f171a0(void)

void FUN_146f171a0(longlong param_1,ushort param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0x78) + (ulonglong)((uint)param_2 * *(int *)(param_1 + 0xc4)));
  if (lVar2 == 0) {
    return;
  }
  if (lVar2 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar2);
    return;
  }
  return;
}



// FUNCTION 146f171d8 FUN_146f171d8 body=198 status=ok
// SIG undefined FUN_146f171d8(void)

void FUN_146f171d8(longlong param_1,uint param_2)

{
  longlong lVar1;
  ushort uVar2;
  void *_Dst;
  ulonglong uVar3;
  uint uVar4;
  ulonglong _Size;
  
  uVar2 = FUN_142a75e74();
  *(ushort *)(*(longlong *)(param_1 + 0x68) + (ulonglong)param_2 * 2) = uVar2;
  if (uVar2 != 0) {
    uVar3 = (ulonglong)((uint)uVar2 * *(int *)(param_1 + 0xc4));
    lVar1 = *(longlong *)(param_1 + 0x78);
    *(uint *)(lVar1 + 8 + uVar3) = param_2;
    uVar4 = *(int *)(*(longlong *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x270) +
                        (longlong)((int)param_2 / 100) * 8) + 0x10 +
                      (longlong)((int)param_2 % 100) * 0x38) + 0x24) + 0x1f;
    if (0x1f < uVar4) {
      uVar4 = uVar4 >> 5;
      _Size = (ulonglong)(*(int *)(param_1 + 0xc0) * uVar4 * 0xc);
      _Dst = (void *)FUN_14001cc68(_Size);
      memset(_Dst,0,_Size);
      *(short *)(lVar1 + 0x10 + uVar3) = (short)uVar4;
      *(void **)(lVar1 + uVar3) = _Dst;
    }
  }
  return;
}



// FUNCTION 146f1729e FUN_146f1729e body=700 status=ok
// SIG undefined FUN_146f1729e(void)

longlong *
FUN_146f1729e(longlong param_1,longlong *param_2,ulonglong param_3,uint param_4,uint param_5)

{
  short *psVar1;
  uint *puVar2;
  int *piVar3;
  ushort uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 in_R11;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined1 auStack_88 [36];
  uint local_64;
  ulonglong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  if (((*(uint *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(param_4 >> 5) * 4) >> (param_4 & 0x1f)
       & 1) == 0) ||
     (uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)param_4 * 2), uVar4 == 0))
  goto LAB_146f173d0;
  plVar13 = (longlong *)
            ((ulonglong)(*(int *)(param_1 + 0xc4) * (uint)uVar4) + *(longlong *)(param_1 + 0x78));
  uVar10 = param_3 & 0xffffffff;
  uVar7 = (ulonglong)param_5;
  plVar15 = plVar13 + uVar10 * 4 + uVar7 * 2 + 3;
  iVar8 = (int)plVar13[uVar10 * 4 + uVar7 * 2 + 4];
  if (iVar8 == 0) {
    uVar9 = 0;
  }
  else {
    iVar6 = iVar8 + 0xff;
    if (-1 < iVar8) {
      iVar6 = iVar8;
    }
    piVar3 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar6 >> 8) * 8) + 0xc
                    + (ulonglong)(uint)(iVar8 % 0x100) * 0x10);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      FUN_146f17b62(param_1);
    }
    *(undefined4 *)(plVar13 + uVar10 * 4 + uVar7 * 2 + 4) = 0;
    uVar9 = CONCAT62((int6)((ulonglong)in_R11 >> 0x10),0xffff);
  }
  uVar14 = (ulonglong)uVar4;
  uVar12 = (uint)uVar9;
  if ((*(uint *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1)
      == 0) {
    if ((*(short *)(*(longlong *)(param_1 + 0x88) + uVar14 * 2) == 0) ||
       ((-1 < (int)DAT_14c75f454 &&
        (DAT_14c75f454 <= (uint)(*(int *)(param_1 + 0xcc) - *(int *)((longlong)plVar13 + 0xc)))))) {
      local_64 = uVar12;
      local_60 = param_3;
      FUN_146f1760a(param_1,&local_58,param_4);
      if (local_58 != 0) {
        *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
        puVar2 = (uint *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)(uVar4 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar4 & 0x1f);
        *(int *)(*(longlong *)(param_1 + 0xe8) + uVar14 * 4) = local_50;
        uVar12 = local_64;
        goto LAB_146f17453;
      }
      uVar9 = (ulonglong)local_64;
    }
  }
  else {
    uVar9 = uVar9 & 0xffffffff;
    local_60 = param_3;
    FUN_146f1755c(param_1,&local_58,*(undefined4 *)(*(longlong *)(param_1 + 0xe8) + uVar14 * 4));
    if (local_58 != 0) {
LAB_146f17453:
      *(undefined4 *)((longlong)plVar13 + 0xc) = *(undefined4 *)(param_1 + 0xcc);
      iVar8 = local_50 + 0xff;
      if (-1 < local_50) {
        iVar8 = local_50;
      }
      piVar3 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar8 >> 8) * 8) +
                       0xc + (ulonglong)(uint)(local_50 % 0x100) * 0x10);
      *piVar3 = *piVar3 + 1;
      uVar9 = (ulonglong)((int)(short)uVar12 + 1);
      *(int *)(plVar13 + uVar10 * 4 + uVar7 * 2 + 4) = local_50;
      uVar4 = *(ushort *)(plVar13 + 2);
      lVar5 = *plVar13;
      lVar11 = lVar5 + (ulonglong)
                       ((param_5 + (int)local_60 * 2 + *(int *)(param_1 + 0xc0)) * (uint)uVar4) * 4;
      *plVar15 = lVar11;
      if (uVar4 != 0) {
        lVar5 = lVar5 + (ulonglong)((int)local_60 * (uint)uVar4) * 4;
        uVar10 = 0;
        do {
          *(undefined4 *)(*plVar15 + uVar10 * 4) = *(undefined4 *)(lVar5 + uVar10 * 4);
          *(undefined4 *)(lVar5 + uVar10 * 4) = 0;
          uVar10 = uVar10 + 1;
        } while (uVar4 != uVar10);
        lVar11 = *plVar15;
      }
      *param_2 = lVar11;
      param_2[1] = local_58;
    }
  }
  psVar1 = (short *)(*(longlong *)(param_1 + 0x88) + uVar14 * 2);
  *psVar1 = *psVar1 + (short)uVar9;
LAB_146f173d0:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f1755c FUN_146f1755c body=174 status=ok
// SIG undefined FUN_146f1755c(void)

void FUN_146f1755c(longlong param_1,undefined8 *param_2,int param_3)

{
  ushort uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  iVar3 = param_3 + 0xff;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  plVar2 = *(longlong **)(param_1 + 0x30);
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar3 >> 8) * 8) + 8 +
                  (ulonglong)(uint)(param_3 % 0x100) * 0x10);
  uVar1 = *(ushort *)(plVar2[0x2f] + (longlong)iVar3 * 2);
  if ((uVar1 == 0) ||
     (lVar4 = (ulonglong)((uVar1 & 0xff) << 5) +
              *(longlong *)(plVar2[0x31] + (ulonglong)(uVar1 >> 8) * 8), lVar4 == 0)) {
    puVar5 = (undefined8 *)
             ((longlong)(iVar3 % 100) * 8 +
             *(longlong *)(*(longlong *)(*plVar2 + 0x290) + (longlong)(iVar3 / 100) * 8));
  }
  else {
    puVar5 = (undefined8 *)(lVar4 + 8);
  }
  *param_2 = *puVar5;
  *(int *)(param_2 + 1) = param_3;
  return;
}



// FUNCTION 146f1760a FUN_146f1760a body=206 status=ok
// SIG undefined FUN_146f1760a(void)

undefined8 * FUN_146f1760a(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  iVar2 = FUN_146f17a9c();
  if (iVar2 != 0) {
    FUN_142a72a2a(*(undefined8 *)(param_1 + 0x30),&local_40,param_3);
    if (local_40 == 0) {
      FUN_146f17b62(param_1,iVar2);
    }
    else {
      iVar3 = iVar2 + 0xff;
      if (-1 < iVar2) {
        iVar3 = iVar2;
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar3 >> 8) * 8);
      lVar4 = (ulonglong)(uint)(iVar2 % 0x100) * 0x10;
      *(longlong *)(lVar1 + lVar4) = local_40;
      *(undefined4 *)(lVar1 + 8 + lVar4) = param_3;
      *param_2 = local_38;
      *(int *)(param_2 + 1) = iVar2;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f176da FUN_146f176da body=238 status=ok
// SIG undefined FUN_146f176da(void)

void FUN_146f176da(longlong param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if ((param_4 != 2) &&
     (uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x68) + (longlong)param_3 * 2), uVar3 != 0)) {
    plVar10 = (longlong *)
              ((ulonglong)(*(int *)(param_1 + 0xc4) * (uint)uVar3) + *(longlong *)(param_1 + 0x78));
    if (plVar10 != (longlong *)0x0) {
      uVar11 = (ulonglong)param_4;
      iVar7 = (int)plVar10[(ulonglong)param_2 * 4 + uVar11 * 2 + 4];
      if (iVar7 != 0) {
        uVar9 = (ulonglong)param_2;
        if (param_5 == 1) {
          uVar4 = *(ushort *)(plVar10 + 2);
          if (uVar4 != 0) {
            lVar5 = *plVar10;
            lVar6 = plVar10[uVar9 * 4 + uVar11 * 2 + 3];
            uVar12 = 0;
            do {
              puVar1 = (uint *)((ulonglong)(param_2 * uVar4) * 4 + lVar5 + uVar12 * 4);
              *puVar1 = *puVar1 | *(uint *)(lVar6 + uVar12 * 4);
              uVar12 = uVar12 + 1;
            } while (uVar4 != uVar12);
            iVar7 = (int)plVar10[uVar9 * 4 + uVar11 * 2 + 4];
          }
        }
        iVar8 = iVar7 + 0xff;
        if (-1 < iVar7) {
          iVar8 = iVar7;
        }
        piVar2 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar8 >> 8) * 8) +
                         0xc + (ulonglong)(uint)(iVar7 % 0x100) * 0x10);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_146f17b62(param_1,iVar7);
        }
        *(undefined4 *)(plVar10 + uVar9 * 4 + uVar11 * 2 + 4) = 0;
        FUN_146f1785e(param_1,plVar10,(uint)uVar3,0xffff);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146f177c8 FUN_146f177c8 body=150 status=ok
// SIG undefined FUN_146f177c8(void)

void FUN_146f177c8(longlong param_1,undefined8 *param_2,uint param_3,int param_4,uint param_5)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (((param_5 != 2) &&
      (uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x68) + (longlong)param_4 * 2), uVar1 != 0)) &&
     (lVar5 = (ulonglong)((uint)uVar1 * *(int *)(param_1 + 0xc4)) + *(longlong *)(param_1 + 0x78),
     lVar5 != 0)) {
    lVar5 = lVar5 + (ulonglong)param_3 * 0x20;
    iVar2 = *(int *)((ulonglong)param_5 * 0x10 + 0x20 + lVar5);
    if (iVar2 != 0) {
      iVar4 = iVar2 + 0xff;
      if (-1 < iVar2) {
        iVar4 = iVar2;
      }
      uVar3 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar4 >> 8) * 8) +
               (longlong)(iVar2 % 0x100) * 0x10);
      *param_2 = *(undefined8 *)((ulonglong)param_5 * 0x10 + lVar5 + 0x18);
      param_2[1] = uVar3;
    }
  }
  return;
}



// FUNCTION 146f1785e FUN_146f1785e body=84 status=ok
// SIG undefined FUN_146f1785e(void)

void FUN_146f1785e(longlong param_1,longlong param_2,uint param_3,short param_4)

{
  short *psVar1;
  uint uVar2;
  
  if (param_4 != 0) {
    psVar1 = (short *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_3 & 0xffff) * 2);
    *psVar1 = *psVar1 + param_4;
    if (*psVar1 == 0) {
      uVar2 = *(uint *)(param_2 + 8);
      if ((*(uint *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f)
          & 1) == 0) {
        FUN_146f171a0(param_1,param_3);
        *(undefined2 *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar2 * 2) = 0;
      }
    }
  }
  return;
}



// FUNCTION 146f178b2 FUN_146f178b2 body=174 status=ok
// SIG undefined FUN_146f178b2(void)

undefined8 * FUN_146f178b2(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1447bda9e(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1447bda9e(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 146f17960 FUN_146f17960 body=82 status=ok
// SIG undefined FUN_146f17960(void)

longlong FUN_146f17960(longlong param_1,longlong param_2)

{
  FUN_146f1ba24();
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 146f179b2 FUN_146f179b2 body=234 status=ok
// SIG undefined FUN_146f179b2(void)

void FUN_146f179b2(longlong *param_1)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong _Size;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
  lVar3 = param_1[2];
  uVar1 = *(uint *)(param_1 + 1);
  _Size = 0;
  _Dst = (void *)*param_1;
  if ((ulonglong)uVar1 != 0) {
    uVar7 = 0;
    do {
      uVar8 = 0xffffffff;
      if (uVar7 == uVar1 - 1) {
        uVar8 = 0xffffffff >> (-(char)lVar3 & 0x1fU);
      }
      uVar8 = uVar8 & *(uint *)((longlong)_Dst + uVar7 * 4);
      iVar5 = (int)_Size;
      if (uVar8 != 0) {
        do {
          uVar6 = (uint)_Size;
          if ((uVar8 & 1) != 0) {
            uVar4 = uVar6 + 0xff;
            if (-1 < (int)uVar6) {
              uVar4 = uVar6;
            }
            if (*(longlong *)
                 (*(longlong *)(param_1[3] + (longlong)((int)uVar4 >> 8) * 8) +
                 (ulonglong)(uVar6 - (uVar4 & 0xffffff00)) * 0x10) != 0) {
              FUN_146f14d5e(param_1[6]);
            }
          }
          _Size = (ulonglong)(uVar6 + 1);
          bVar2 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar2);
      }
      uVar7 = uVar7 + 1;
      _Size = (ulonglong)(iVar5 + 0x20);
    } while (uVar7 != uVar1);
    _Dst = (void *)*param_1;
    _Size = (longlong)(int)param_1[1] << 2;
  }
  memset(_Dst,0,_Size);
  return;
}



// FUNCTION 146f17a9c FUN_146f17a9c body=197 status=ok
// SIG undefined FUN_146f17a9c(void)

ulonglong FUN_146f17a9c(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  
  if ((ulonglong)*(uint *)(param_1 + 1) == 0) {
LAB_146f17ad3:
    uVar5 = 0;
LAB_146f17ad5:
    return uVar5 & 0xffffffff;
  }
  puVar6 = (uint *)*param_1;
  lVar2 = 0;
LAB_146f17aba:
  if (*puVar6 == 0xffffffff) goto code_r0x000146f17ac3;
  uVar7 = *puVar6 ^ 0xffffffff;
  if (uVar7 == 0) {
    uVar4 = 0x20;
  }
  else {
    uVar1 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    uVar4 = (ulonglong)uVar1;
  }
  uVar5 = uVar4 - lVar2;
  uVar7 = (uint)uVar5;
  if (uVar7 < *(uint *)(param_1 + 2)) {
    if (*(uint *)(param_1 + 5) <= uVar7) {
      FUN_146f17ca6(param_1 + 3);
    }
    uVar1 = uVar7 + 0xff;
    if (-1 < (int)uVar7) {
      uVar1 = uVar7;
    }
    lVar2 = *(longlong *)(param_1[3] + (longlong)((int)uVar1 >> 8) * 8);
    lVar3 = (ulonglong)(uVar7 - (uVar1 & 0xffffff00)) * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined8 *)(lVar2 + 8 + lVar3) = 0x100000000;
    puVar6 = (uint *)(*param_1 + (uVar5 >> 5 & 0x7ffffff) * 4);
    *puVar6 = *puVar6 | 1 << ((byte)uVar4 & 0x1f);
    goto LAB_146f17ad5;
  }
  goto LAB_146f17ad3;
code_r0x000146f17ac3:
  lVar2 = lVar2 + -0x20;
  puVar6 = puVar6 + 1;
  if ((ulonglong)*(uint *)(param_1 + 1) * 0x20 + lVar2 == 0) goto LAB_146f17ad3;
  goto LAB_146f17aba;
}



// FUNCTION 146f17b62 FUN_146f17b62 body=94 status=ok
// SIG undefined FUN_146f17b62(void)

void FUN_146f17b62(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(*param_1 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  uVar4 = param_2 + 0xff;
  if (-1 < (int)param_2) {
    uVar4 = param_2;
  }
  lVar2 = *(longlong *)(param_1[3] + (longlong)((int)uVar4 >> 8) * 8);
  lVar5 = (ulonglong)(uint)((int)param_2 % 0x100) * 0x10;
  if (*(longlong *)(lVar2 + lVar5) == 0) {
    return;
  }
  FUN_146f14d5e(param_1[6],*(undefined4 *)(lVar2 + lVar5 + 8));
  return;
}



// FUNCTION 146f17bc0 FUN_146f17bc0 body=229 status=ok
// SIG undefined FUN_146f17bc0(void)

void FUN_146f17bc0(longlong param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  void *_Src;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  iVar6 = param_2 + 0xff;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar6 >> 8) * 8);
  lVar5 = (ulonglong)(uint)(param_2 % 0x100) * 0x10;
  piVar1 = (int *)(lVar3 + 0xc + lVar5);
  *piVar1 = *piVar1 + -1;
  lVar4 = *(longlong *)(param_1 + 0x30);
  _Dst = *(void **)(lVar3 + lVar5);
  lVar8 = (longlong)*(int *)(lVar3 + 8 + lVar5);
  if (*piVar1 != 0) {
    uVar2 = *(ushort *)(*(longlong *)(lVar4 + 0x178) + lVar8 * 2);
    if ((uVar2 != 0) &&
       (plVar7 = (longlong *)
                 ((ulonglong)(byte)uVar2 * 0x20 +
                 *(longlong *)(*(longlong *)(lVar4 + 0x188) + (ulonglong)(uVar2 >> 8) * 8)),
       plVar7 != (longlong *)0x0)) {
      lVar3 = *plVar7;
      _Src = (void *)plVar7[1];
      memcpy(_Dst,_Src,(ulonglong)*(uint *)(lVar3 + 0xc));
      if ((*(byte *)(lVar3 + 0x3c) & 1) != 0) {
        FUN_146f3ba08(lVar4 + 8,_Dst,_Src,lVar3);
        return;
      }
    }
    return;
  }
  FUN_146f14df6(lVar4,lVar8,_Dst);
  *(undefined8 *)(lVar3 + lVar5) = 0;
  FUN_146f17b62(param_1,param_2);
  return;
}



// FUNCTION 146f17ca6 FUN_146f17ca6 body=172 status=ok
// SIG undefined FUN_146f17ca6(void)

void FUN_146f17ca6(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar1 = (int)param_1[2];
  iVar2 = iVar1 + 0x2fe;
  if (-1 < iVar1 + 0x1ff) {
    iVar2 = iVar1 + 0x1ff;
  }
  iVar5 = (int)param_1[1];
  *(int *)(param_1 + 2) = iVar1 + 0x100;
  if (iVar5 < iVar2 >> 8) {
    do {
      lVar3 = FUN_14001cc68(0x1000,0x10);
      lVar4 = 0xc;
      do {
        *(undefined8 *)(lVar3 + -0xc + lVar4) = 0;
        *(undefined8 *)(lVar3 + -4 + lVar4) = 0x100000000;
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != 0x100c);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1456bd870(param_1,iVar1);
      }
      *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar3;
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar2 >> 8);
  }
  return;
}



// FUNCTION 146f17d52 FUN_146f17d52 body=73 status=ok
// SIG undefined FUN_146f17d52(void)

void FUN_146f17d52(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = param_1[3], (longlong)(int)lVar2 != 0)) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      if ((*(byte *)(lVar1 + 0x20 + lVar3) & 0x10) == 0) {
        (**(code **)(*(longlong *)(lVar1 + 0x10 + lVar3) + 0xa8))(*(undefined8 *)(lVar1 + lVar3));
      }
      lVar3 = lVar3 + 0x28;
    } while ((longlong)(int)lVar2 * 0x28 != lVar3);
  }
  return;
}



// FUNCTION 146f17d9c FUN_146f17d9c body=52 status=ok
// SIG undefined FUN_146f17d9c(void)

void FUN_146f17d9c(undefined8 *param_1)

{
  param_1[9] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  return;
}



// FUNCTION 146f17dd0 FUN_146f17dd0 body=83 status=ok
// SIG undefined FUN_146f17dd0(void)

void FUN_146f17dd0(longlong *param_1)

{
  if ((int)param_1[10] != -1) {
    FUN_146efc97c();
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f17e24 FUN_146f17e24 body=174 status=ok
// SIG undefined FUN_146f17e24(void)

undefined8 FUN_146f17e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x28,&local_40);
  *puVar1 = &PTR_LAB_149e41aa0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149f995f0;
  puVar1[3] = param_3;
  puVar1[4] = FUN_146f17ed4;
  FUN_145ff191a(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f17ed4 FUN_146f17ed4 body=48 status=ok
// SIG undefined FUN_146f17ed4(void)

void FUN_146f17ed4(longlong param_1,undefined4 param_2)

{
  FUN_146efc8cc();
  FUN_146efc8cc(param_1 + 0x18,param_2);
  FUN_146efc8cc(param_1 + 0x30,param_2);
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



// FUNCTION 146f17f04 FUN_146f17f04 body=57 status=ok
// SIG undefined FUN_146f17f04(void)

void FUN_146f17f04(longlong param_1)

{
  FUN_140457ffc(*(longlong *)(param_1 + 0x48) + 0x400,param_1);
  if (*(int *)(param_1 + 0x50) != -1) {
    FUN_146efc97c();
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x5c) = 0;
  return;
}



// FUNCTION 146f17f3e FUN_146f17f3e body=331 status=ok
// SIG undefined FUN_146f17f3e(void)

void FUN_146f17f3e(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = (longlong *)FUN_146efca4c(param_1 + 0x50);
  plVar1 = plVar4 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)plVar4[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = (int)plVar4[5];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar4;
  if ((iStack_4c != iVar5) || (uStack_58 != plVar1)) {
    do {
      local_90 = *(undefined8 *)(*local_88 + (longlong)iStack_6c * 0x10);
      uVar3 = FUN_146f1808a(*(undefined8 *)(param_1 + 0x48));
      if (uVar3 != 0) {
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar3 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar4 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar5));
  }
  FUN_146efcb16(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x5c) = 1;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1808a FUN_146f1808a body=148 status=ok
// SIG undefined FUN_146f1808a(void)

int FUN_146f1808a(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = FUN_144a78877(*param_2,*param_2 >> 0x20);
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    lVar4 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xa8);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xb0) - 1U & uVar2) * 4);
    if (iVar3 != -1) {
      do {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar3 * 0x14);
        if (*piVar1 == (int)*param_2) {
          if (piVar1 + 2 == (int *)0x0 || piVar1 == (int *)0x0) {
            return 0;
          }
          return piVar1[2];
        }
        iVar3 = piVar1[3];
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f1811e FUN_146f1811e body=40 status=ok
// SIG undefined FUN_146f1811e(void)

void FUN_146f1811e(longlong param_1)

{
  if (*(int *)(param_1 + 0x50) != -1) {
    FUN_142a768ce();
    FUN_146efcaa0(param_1 + 0x50);
    return;
  }
  return;
}



// FUNCTION 146f18146 FUN_146f18146 body=159 status=ok
// SIG undefined FUN_146f18146(void)

void FUN_146f18146(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(char *)((longlong)param_1 + 0x5c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
    FUN_146efcaba(param_1 + 10);
  }
  if (((int)param_1[5] != 0) && (uVar4 = (int)param_1[5] + 0x1f, 0x1f < uVar4)) {
    lVar2 = param_1[3];
    lVar3 = *param_2;
    uVar5 = 0;
    do {
      puVar1 = (uint *)(lVar2 + uVar5 * 4);
      *puVar1 = *puVar1 & ~*(uint *)(lVar3 + uVar5 * 4);
      uVar5 = uVar5 + 1;
    } while (uVar4 >> 5 != uVar5);
  }
  if (((int)param_1[2] != 0) && (uVar4 = (int)param_1[2] + 0x1f, 0x1f < uVar4)) {
    lVar2 = *param_1;
    lVar3 = *param_2;
    uVar5 = 0;
    do {
      puVar1 = (uint *)(lVar2 + uVar5 * 4);
      *puVar1 = *puVar1 & ~*(uint *)(lVar3 + uVar5 * 4);
      uVar5 = uVar5 + 1;
    } while (uVar4 >> 5 != uVar5);
  }
  memset((void *)param_1[6],0,(longlong)(int)param_1[7] << 2);
  LOCK();
  UNLOCK();
  return;
}



// FUNCTION 146f181e6 FUN_146f181e6 body=17 status=ok
// SIG undefined FUN_146f181e6(void)

undefined8 FUN_146f181e6(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 8) + 0x10);
}



// FUNCTION 146f181f8 FUN_146f181f8 body=364 status=ok
// SIG undefined FUN_146f181f8(void)

undefined8 * FUN_146f181f8(undefined8 *param_1,uint param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  *(uint *)(param_1 + 1) = param_2;
  *param_1 = &PTR_LAB_149f99190;
  param_1[2] = param_4;
  uVar4 = param_2;
  if ((param_4 != 0) && ((*(byte *)(param_4 + 0xb8) & 8) != 0)) {
    LOCK();
    *(int *)(param_4 + 0xbc) = *(int *)(param_4 + 0xbc) + 1;
    UNLOCK();
    uVar4 = *(uint *)(param_1 + 1);
  }
  param_1[3] = 0;
  param_1[4] = param_3;
  uVar4 = uVar4 | 0x10;
  *(uint *)(param_1 + 1) = uVar4;
  if ((param_2 & 0x20) != 0) {
    uVar6 = FUN_14001cc68(0x18,0x10);
    FUN_146f10f20(uVar6,param_4);
    uVar3 = param_1[3];
    param_1[3] = uVar6;
    FUN_146f1f2ac(uVar3);
    FUN_146f1f2ac(0);
    uVar4 = *(uint *)(param_1 + 1);
  }
  if ((param_2 & 0x40) != 0) {
    uVar4 = uVar4 | *(uint *)(param_4 + 0xb8) >> 3 & 2 | 0x100;
    *(uint *)(param_1 + 1) = uVar4;
  }
  if ((param_2 & 0x20) != 0) {
    uVar4 = uVar4 | 0x80;
    *(uint *)(param_1 + 1) = uVar4;
  }
  uVar4 = (*(uint *)(param_4 + 0xb8) & 4) << 0xb | uVar4 | 0x5000;
  *(uint *)(param_1 + 1) = uVar4;
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1[2] + 0x10) + 8) + 0x10);
  uVar7 = 0;
  do {
    uVar8 = (ulonglong)uVar7;
    uVar7 = uVar7 + 1;
  } while (*(undefined **)(plVar2[2] + uVar8 * 0x10) != &DAT_14c99bf88);
  param_1[5] = (ulonglong)*(uint *)(*plVar2 + uVar8 * 8);
  if ((*(byte *)(param_4 + 0xb9) & 0x20) != 0) {
    lVar5 = (longlong)*(int *)(**(longlong **)(param_4 + 0x38) + 0x44);
    if ((*(longlong *)(param_3 + 0xf8 + lVar5) == 0) && (*(int *)(param_3 + 0x100 + lVar5) == -1)) {
      uVar1 = *(ushort *)(**(longlong **)(param_4 + 0x38) + 0x40);
      *(longlong *)(param_3 + 0xf8 + lVar5) = param_3;
      *(uint *)(param_3 + 0x100 + lVar5) = (uint)uVar1;
      uVar4 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar4 | 0x800;
  }
  return param_1;
}



// FUNCTION 146f18364 FUN_146f18364 body=66 status=ok
// SIG undefined FUN_146f18364(void)

undefined8 FUN_146f18364(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 8) + 0x10) + 0x10)
  ;
  uVar2 = 0;
  do {
    uVar3 = (ulonglong)uVar2;
    uVar2 = uVar2 + 1;
  } while (*(undefined **)(lVar1 + uVar3 * 0x10) != &DAT_14c99bf88);
  return *(undefined8 *)
          (*(longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 8 + uVar3 * 0x10) + 0x38) + 0x10) + 8
            ) + 0x10);
}



// FUNCTION 146f183a6 FUN_146f183a6 body=123 status=ok
// SIG undefined FUN_146f183a6(void)

void FUN_146f183a6(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | param_3;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  iVar1 = *(int *)(param_2 + 0x308);
  lVar4 = (longlong)iVar1;
  *(uint *)(param_2 + 0x308) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x30c) < iVar1 + 1U) {
    FUN_146f1bace(param_2,iVar1);
  }
  lVar3 = *(longlong *)(param_2 + 0x300);
  if (*(longlong *)(param_2 + 0x300) == 0) {
    lVar3 = param_2;
  }
  *(undefined8 *)(lVar3 + lVar4 * 0x18) = uVar2;
  *(undefined8 *)(lVar3 + 8 + lVar4 * 0x18) = uVar5;
  *(longlong *)(lVar3 + 0x10 + lVar4 * 0x18) = param_1;
  return;
}



// FUNCTION 146f18422 FUN_146f18422 body=146 status=ok
// SIG undefined FUN_146f18422(void)

void FUN_146f18422(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = 0;
  do {
    uVar2 = (ulonglong)uVar1;
    uVar1 = uVar1 + 1;
  } while (*(undefined **)(param_4[2] + uVar2 * 0x10) != &DAT_14c99bf88);
  local_30 = 0;
  local_38 = 0;
  local_40 = *(undefined8 *)(param_4[2] + uVar2 * 0x10 + 8);
  local_20 = param_2 + (ulonglong)*(uint *)(*param_4 + uVar2 * 8);
  local_28 = param_3 + (ulonglong)*(uint *)(*param_4 + 4 + uVar2 * 8);
  (*DAT_14c99bfb8)(param_1,&local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f184b6 FUN_146f184b6 body=224 status=ok
// SIG undefined FUN_146f184b6(void)

void FUN_146f184b6(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  ushort *puVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  longlong local_40;
  longlong local_38;
  uint *local_30;
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_4;
  uVar4 = 0;
  do {
    uVar6 = (ulonglong)uVar4;
    uVar4 = uVar4 + 1;
  } while (*(undefined **)(param_4[2] + uVar6 * 0x10) != &DAT_14c99bf88);
  plVar5 = (longlong *)(param_4[2] + uVar6 * 0x10);
  puVar3 = *(ushort **)(*param_1 + 8);
  uVar1 = *(ushort *)(*param_1 + 0x86);
  local_28 = uVar1 + 0x1f >> 5;
  local_30 = (uint *)param_1[2];
  local_24 = (uint)uVar1;
  if (local_24 == 0) {
    local_30 = &local_24;
  }
  *(uint ***)(param_1[1] + 0x108) = &local_30;
  local_48 = 0;
  local_58 = plVar5[1];
  local_38 = param_2 + (ulonglong)*(uint *)(lVar2 + uVar6 * 8);
  local_40 = param_3 + (ulonglong)*(uint *)(lVar2 + 4 + uVar6 * 8);
  local_4c = (uint)puVar3[1];
  local_50 = (uint)*puVar3;
  (**(code **)(*plVar5 + 0x30))(param_1[1],&local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f18598 FUN_146f18598 body=225 status=ok
// SIG undefined FUN_146f18598(void)

void FUN_146f18598(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = param_4[2];
  uVar5 = 0xffffffff;
  do {
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
  } while (*(undefined **)(lVar2 + uVar5 * 0x10) != &DAT_14c99bf88);
  uVar1 = *(ushort *)((longlong)param_4 + 0x7c);
  local_78 = param_3;
  if (uVar1 != 0) {
    lVar3 = *param_4;
    lVar6 = 0;
    do {
      if ((ulonglong)uVar4 << 3 != lVar6) {
        local_60 = 0;
        local_68 = 0;
        local_70 = *(undefined8 *)(lVar2 + 8 + lVar6 * 2);
        local_50 = (ulonglong)*(uint *)(lVar3 + lVar6) + param_2;
        local_58 = (ulonglong)*(uint *)(lVar3 + 4 + lVar6) + local_78;
        (**(code **)(*(longlong *)(lVar2 + lVar6 * 2) + 0x30))(param_1,&local_70);
      }
      lVar6 = lVar6 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f186a0 FUN_146f186a0 body=398 status=ok
// SIG undefined FUN_146f186a0(void)

void FUN_146f186a0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  bool bVar6;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  longlong local_90;
  longlong local_88 [2];
  undefined2 *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = param_3[7];
  uVar1 = *(ushort *)((longlong)param_3 + 0x7c);
  local_90 = param_2;
  FUN_140212e80(param_1,L"FFastArrayReplicationState %s\n",*(undefined8 *)param_3[0xc]);
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  if ((ulonglong)uVar1 != 0) {
    uVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + uVar4 * 8);
      local_b8 = (undefined2 *)0x0;
      uStack_b0 = 0;
      local_a0 = 0;
      local_a8 = 0x2000;
      (**(code **)(*plVar3 + 0xf0))
                (plVar3,&local_78,(ulonglong)*(uint *)(*param_3 + uVar4 * 8) + local_90,0);
      puVar5 = &DAT_149dfb77a;
      if ((int)uStack_70 != 0) {
        puVar5 = local_78;
      }
      if (plVar3 == (longlong *)0x0) {
        FUN_140056680(local_88,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(plVar3 + 4,local_88);
      }
      local_b8 = puVar5;
      FUN_140212e80(param_1,L"%u - %s : %s\n",uVar4 & 0xffffffff);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      bVar6 = (longlong)uStack_70 < 0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      if (bVar6) {
        FUN_1446f8c06(&local_78,0);
      }
      if (local_78 != (undefined2 *)0x0) {
        *local_78 = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1884a FUN_146f1884a body=129 status=ok
// SIG undefined FUN_146f1884a(void)

void FUN_146f1884a(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146f14ba4(param_1 + 5,*(undefined4 *)((longlong)param_2 + 0x14));
  FUN_146f22a36(&local_21,&local_38,*param_2);
  *(undefined4 *)(param_1 + 10) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_34;
  *(undefined4 *)(param_1 + 0xb) = uStack_30;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_2c;
  param_1[8] = *(longlong *)(*param_2 + 0x28) + 0x160;
  (**(code **)(*param_1 + 0x2e8))(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f188cc FUN_146f188cc body=40 status=ok
// SIG undefined FUN_146f188cc(void)

void FUN_146f188cc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x2f0))();
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[8] = 0;
  return;
}



// FUNCTION 146f18900 FUN_146f18900 body=139 status=ok
// SIG undefined FUN_146f18900(void)

undefined4 FUN_146f18900(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar3 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x58);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)param_2 + ((uint)(param_2 >> 0x20) & 0xfffffff) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x18);
        if (((*puVar1 ^ param_2) & 0xfffffffffffffff) == 0) {
          if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
            return 0;
          }
          return (int)puVar1[1];
        }
        iVar2 = (int)puVar1[2];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f1898c FUN_146f1898c body=17 status=ok
// SIG undefined FUN_146f1898c(void)

void FUN_146f1898c(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x30);
  return;
}



// FUNCTION 146f1899e FUN_146f1899e body=113 status=ok
// SIG undefined FUN_146f1899e(void)

void FUN_146f1899e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 1;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    FUN_1401924dc(lVar1);
  }
  if ((*(longlong *)(param_1 + 0x60) != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  *(longlong *)(param_1 + 0x60) = lVar1;
  FUN_146f14ba4(param_1 + 0x90,*(undefined4 *)((longlong)param_2 + 0x14));
  FUN_146f18a10(param_1 + 0x68,*(int *)(param_2 + 3) + 1);
  uVar2 = FUN_146f4633e(*param_2);
  *(undefined8 *)(param_1 + 0x150) = uVar2;
  return;
}



// FUNCTION 146f18a10 FUN_146f18a10 body=121 status=ok
// SIG undefined FUN_146f18a10(void)

void FUN_146f18a10(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f1f336(param_1,iVar1);
    }
    FUN_146f1f2e5((longlong)iVar1 * 0x1e0 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146f1f3ca(param_1,param_2,iVar1 - param_2);
    FUN_146f1f42c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f18a8a FUN_146f18a8a body=151 status=ok
// SIG undefined FUN_146f18a8a(void)

void FUN_146f18a8a(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x60) != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  FUN_145c28a3b(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_146f1f4d8(param_1 + 0x68);
  }
  FUN_14592016a(param_1 + 0x78,0);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_14480809c(param_1 + 0x90,0);
  }
  FUN_146f1f508(param_1 + 0xa8);
  return;
}



// FUNCTION 146f18b2e FUN_146f18b2e body=290 status=ok
// SIG undefined FUN_146f18b2e(void)

void FUN_146f18b2e(longlong param_1,int param_2)

{
  undefined1 *_Dst;
  undefined1 auStack_228 [40];
  undefined1 local_200 [384];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_80 = 0;
  local_78 = 0x2000000000;
  local_50 = 0;
  uStack_38 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_48 = 0x8000000000;
  local_40 = 0xffffffff;
  _Dst = (undefined1 *)((longlong)param_2 * 0x1e0 + *(longlong *)(param_1 + 0x68));
  if (_Dst != local_200) {
    memmove(_Dst,local_200,0x180);
    if (*(longlong *)(_Dst + 0x180) == 0) {
      local_78._0_4_ = 0;
      local_78._4_4_ = 0x20;
      local_80 = 0;
    }
    else {
      FUN_1400020a8();
    }
    *(undefined8 *)(_Dst + 0x180) = local_80;
    *(undefined4 *)(_Dst + 0x188) = (undefined4)local_78;
    *(undefined4 *)(_Dst + 0x18c) = local_78._4_4_;
  }
  local_78 = 0x2000000000;
  local_80 = 0;
  FUN_146f1bbf4(_Dst + 400,&local_70);
  FUN_146f07854(local_200);
  if ((local_20 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f18c52 FUN_146f18c52 body=290 status=ok
// SIG undefined FUN_146f18c52(void)

void FUN_146f18c52(longlong param_1,int param_2)

{
  undefined1 *_Dst;
  undefined1 auStack_228 [40];
  undefined1 local_200 [384];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_80 = 0;
  local_78 = 0x2000000000;
  local_50 = 0;
  uStack_38 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_48 = 0x8000000000;
  local_40 = 0xffffffff;
  _Dst = (undefined1 *)((longlong)param_2 * 0x1e0 + *(longlong *)(param_1 + 0x68));
  if (_Dst != local_200) {
    memmove(_Dst,local_200,0x180);
    if (*(longlong *)(_Dst + 0x180) == 0) {
      local_78._0_4_ = 0;
      local_78._4_4_ = 0x20;
      local_80 = 0;
    }
    else {
      FUN_1400020a8();
    }
    *(undefined8 *)(_Dst + 0x180) = local_80;
    *(undefined4 *)(_Dst + 0x188) = (undefined4)local_78;
    *(undefined4 *)(_Dst + 0x18c) = local_78._4_4_;
  }
  local_78 = 0x2000000000;
  local_80 = 0;
  FUN_146f1bbf4(_Dst + 400,&local_70);
  FUN_146f07854(local_200);
  if ((local_20 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f18d76 FUN_146f18d76 body=151 status=ok
// SIG undefined FUN_146f18d76(void)

void FUN_146f18d76(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar4 = 0xffffffff;
  if ((ulonglong)*(uint *)(param_1 + 0x98) == 0) {
LAB_146f18db8:
    FUN_146f19204(param_1 + 0x78);
    lVar3 = *(longlong *)(param_1 + 0x90);
    uVar7 = uVar4;
LAB_146f18deb:
    puVar1 = (uint *)(lVar3 + (ulonglong)(uVar7 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar7 & 0x1f);
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x90);
  iVar5 = 0;
  uVar6 = 0;
LAB_146f18da2:
  uVar7 = *(uint *)(lVar3 + uVar6 * 4);
  if (uVar7 == 0xffffffff) goto code_r0x000146f18dac;
  uVar7 = uVar7 ^ 0xffffffff;
  if (uVar7 == 0) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
  }
  uVar7 = iVar2 - iVar5;
  uVar4 = 0xffffffff;
  if (uVar7 < *(uint *)(param_1 + 0xa0)) {
    uVar4 = uVar7;
  }
  if (uVar4 < *(uint *)(param_1 + 0x88)) goto LAB_146f18deb;
  goto LAB_146f18db8;
code_r0x000146f18dac:
  uVar6 = uVar6 + 1;
  iVar5 = iVar5 + -0x20;
  if (*(uint *)(param_1 + 0x98) == uVar6) goto LAB_146f18db8;
  goto LAB_146f18da2;
}



// FUNCTION 146f18e0e FUN_146f18e0e body=345 status=ok
// SIG undefined FUN_146f18e0e(void)

void FUN_146f18e0e(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [44];
  undefined1 local_6c [4];
  int local_68;
  int iStack_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)
           (*(longlong *)(param_1 + 0x78) + (longlong)(*(int *)(param_2 + 4) / 0x492) * 8);
  lVar9 = (ulonglong)(uint)(*(int *)(param_2 + 4) % 0x492) * 0x38;
  fVar2 = *(float *)(*(longlong *)(param_1 + 0x60) + 0x3c);
  *(float *)(lVar3 + 0x30 + lVar9) = fVar2;
  *(float *)(lVar3 + 0x34 + lVar9) = fVar2 * fVar2;
  FUN_146f192e4(param_1,param_2,lVar3 + lVar9,param_3);
  local_58 = 0;
  uStack_50 = 0;
  FUN_146f1937e(param_1,lVar3 + lVar9,&local_58);
  iVar4 = local_58._4_4_;
  piVar1 = (int *)(lVar3 + 0x18 + lVar9);
  *piVar1 = (int)local_58;
  piVar1[1] = local_58._4_4_;
  piVar1[2] = (int)uStack_50;
  piVar1[3] = uStack_50._4_4_;
  local_5c = *(undefined4 *)(lVar3 + 0x28 + lVar9);
  if ((int)local_58 <= local_58._4_4_) {
    iVar8 = (int)local_58;
    do {
      local_68 = iVar8;
      if ((int)uStack_50 <= uStack_50._4_4_) {
        iVar7 = uStack_50._4_4_ + 1;
        iVar6 = (int)uStack_50;
        do {
          iStack_64 = iVar6;
          uVar5 = FUN_146f20116(param_1 + 0xa8,local_68 * 0x17 + iVar6,&local_68);
          FUN_144980568(uVar5,local_6c,&local_5c,0);
          iVar6 = iVar6 + 1;
        } while (iVar7 != iVar6);
      }
      bVar10 = iVar8 != iVar4;
      iVar8 = iVar8 + 1;
    } while (bVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f18f68 FUN_146f18f68 body=229 status=ok
// SIG undefined FUN_146f18f68(void)

void FUN_146f18f68(longlong *param_1,undefined4 param_2,longlong param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((longlong)(int)param_1[0xe] != 0) {
    lVar8 = (longlong)(int)param_1[0xe] * 0x1e0;
    lVar7 = param_1[0xd] + 400;
    do {
      FUN_146f1f856(lVar7,param_2);
      lVar7 = lVar7 + 0x1e0;
      lVar8 = lVar8 + -0x1e0;
    } while (lVar8 != 0);
  }
  FUN_146f1904e(param_1,param_3);
  (**(code **)(*param_1 + 0x310))(param_1,param_2);
  uVar4 = *(uint *)(param_3 + 4);
  bVar3 = (byte)*(undefined2 *)(param_3 + 4) & 0x1f;
  puVar1 = (uint *)(param_1[0x12] + (ulonglong)(uVar4 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  uVar6 = DAT_14c8464e8;
  uVar5 = DAT_14c8464e0;
  lVar7 = *(longlong *)(param_1[0xf] + (longlong)((int)uVar4 / 0x492) * 8);
  lVar8 = (ulonglong)(uint)((int)uVar4 % 0x492) * 0x38;
  *(undefined8 *)(lVar7 + 0x10 + lVar8) = DAT_14c8464f0;
  *(undefined8 *)(lVar7 + lVar8) = uVar5;
  ((undefined8 *)(lVar7 + lVar8))[1] = uVar6;
  puVar2 = (undefined8 *)(lVar7 + 0x18 + lVar8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar7 + 0x28 + lVar8);
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}



// FUNCTION 146f1904e FUN_146f1904e body=305 status=ok
// SIG undefined FUN_146f1904e(void)

void FUN_146f1904e(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  
  lVar8 = *(longlong *)
           (*(longlong *)(param_1 + 0x78) + (longlong)(*(int *)(param_2 + 4) / 0x492) * 8);
  lVar7 = (ulonglong)(uint)(*(int *)(param_2 + 4) % 0x492) * 0x38;
  iVar9 = *(int *)(lVar8 + 0x18 + lVar7);
  iVar1 = *(int *)(lVar8 + 0x1c + lVar7);
  if (iVar9 <= iVar1) {
    iVar2 = *(int *)(lVar8 + 0x20 + lVar7);
    uVar3 = *(undefined4 *)(lVar8 + 0x28 + lVar7);
    iVar4 = *(int *)(lVar8 + lVar7 + 0x24);
    do {
      if (iVar2 <= iVar4) {
        iVar5 = iVar2;
        do {
          if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
            lVar8 = *(longlong *)(param_1 + 0xe8);
            if (*(longlong *)(param_1 + 0xe8) == 0) {
              lVar8 = param_1 + 0xe0;
            }
            iVar6 = *(int *)(lVar8 + (ulonglong)
                                     (*(int *)(param_1 + 0xf0) - 1U & iVar9 * 0x17 + iVar5) * 4);
            if (iVar6 != -1) {
              do {
                lVar8 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar6 * 0x60;
                if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar6 * 0x60) ==
                    CONCAT44(iVar5,iVar9)) goto LAB_146f1910d;
                iVar6 = *(int *)(lVar8 + 0x58);
              } while (iVar6 != -1);
            }
          }
          lVar8 = 0;
LAB_146f1910d:
          lVar7 = lVar8 + 8;
          if (lVar8 == 0) {
            lVar7 = 0;
          }
          FUN_144b016d0(lVar7,uVar3);
          bVar10 = iVar5 != iVar4;
          iVar5 = iVar5 + 1;
        } while (bVar10);
      }
      bVar10 = iVar9 != iVar1;
      iVar9 = iVar9 + 1;
    } while (bVar10);
  }
  return;
}



// FUNCTION 146f19188 FUN_146f19188 body=123 status=ok
// SIG undefined FUN_146f19188(void)

void * FUN_146f19188(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x180);
    if (*(void **)((longlong)param_2 + 0x180) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x188);
    *(int *)((longlong)param_1 + 0x188) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x18c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x18c) = 0x20;
    }
    else {
      FUN_146f1f974(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x180);
        if (*(void **)((longlong)param_1 + 0x180) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 146f19204 FUN_146f19204 body=223 status=ok
// SIG undefined FUN_146f19204(void)

void FUN_146f19204(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = (int)param_1[1];
  iVar3 = (int)param_1[2];
  iVar10 = (int)((ulonglong)((longlong)(iVar3 + 0x923) * -0x1ff1ff1f) >> 0x20) + iVar3 + 0x923;
  iVar10 = (iVar10 >> 10) - (iVar10 >> 0x1f);
  *(int *)(param_1 + 2) = iVar3 + 0x492;
  if (iVar9 < iVar10) {
    do {
      lVar7 = FUN_14001cc68(0xfff0,0x10);
      lVar8 = 0x34;
      do {
        *(undefined8 *)(lVar7 + -0x24 + lVar8) = DAT_14c8464f0;
        uVar6 = DAT_14c8464e8._4_4_;
        uVar5 = (undefined4)DAT_14c8464e8;
        uVar4 = DAT_14c8464e0._4_4_;
        puVar1 = (undefined4 *)(lVar7 + -0x34 + lVar8);
        *puVar1 = (undefined4)DAT_14c8464e0;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        *(undefined8 *)(lVar7 + -4 + lVar8) = 0;
        puVar2 = (undefined8 *)(lVar7 + -0x1c + lVar8);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(lVar7 + -0xe + lVar8) = 0;
        lVar8 = lVar8 + 0x38;
      } while (lVar8 != 0x10024);
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1456bd870(param_1,iVar3);
      }
      *(longlong *)(*param_1 + (longlong)iVar3 * 8) = lVar7;
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar10);
  }
  return;
}



// FUNCTION 146f192e4 FUN_146f192e4 body=154 status=ok
// SIG undefined FUN_146f192e4(void)

void FUN_146f192e4(longlong *param_1,undefined8 param_2,longlong param_3)

{
  float _X;
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  (**(code **)(*param_1 + 0x300))(param_1,param_3,param_2);
  uVar1 = *(uint *)(param_3 + 0x28);
  if ((*(uint *)(*(longlong *)param_1[0x2a] + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) !=
      0) {
    uVar2 = uVar1 + 0x3ff;
    if (-1 < (int)uVar1) {
      uVar2 = uVar1;
    }
    _X = *(float *)(*(longlong *)(((longlong *)param_1[0x2a])[3] + (longlong)((int)uVar2 >> 10) * 8)
                   + (longlong)((int)uVar1 % 0x400) * 4);
    if (_X < 0.0) {
      fVar3 = sqrtf(_X);
    }
    else {
      fVar3 = SQRT(_X);
    }
    *(float *)(param_3 + 0x30) = fVar3;
    *(float *)(param_3 + 0x34) = _X;
  }
  return;
}



// FUNCTION 146f1937e FUN_146f1937e body=253 status=ok
// SIG undefined FUN_146f1937e(void)

void FUN_146f1937e(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  dVar1 = (double)(float)param_2[0xc];
  local_38 = *(undefined8 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_144afe924(&local_48);
  dVar5 = (double)*(float *)(*(longlong *)(param_1 + 0x60) + 0x30);
  dVar3 = ((double)CONCAT44(uStack_44,local_48) - dVar1) / dVar5;
  dVar4 = (double)*(float *)(*(longlong *)(param_1 + 0x60) + 0x34);
  dVar2 = ((double)CONCAT44(uStack_3c,uStack_40) - dVar1) / dVar4;
  dVar5 = ((double)CONCAT44(uStack_44,local_48) + dVar1) / dVar5;
  dVar4 = ((double)CONCAT44(uStack_3c,uStack_40) + dVar1) / dVar4;
  *param_3 = (int)((ulonglong)(longlong)ROUND(dVar3 + dVar3 + -0.5) >> 1);
  param_3[1] = (int)((ulonglong)(longlong)ROUND(dVar5 + dVar5 + -0.5) >> 1);
  param_3[2] = (int)((ulonglong)(longlong)ROUND(dVar2 + dVar2 + -0.5) >> 1);
  param_3[3] = (int)((ulonglong)(longlong)ROUND(dVar4 + dVar4 + -0.5) >> 1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1947c FUN_146f1947c body=1476 status=ok
// SIG undefined FUN_146f1947c(void)

void FUN_146f1947c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 *local_90;
  longlong local_88;
  ulonglong *local_80;
  ulonglong local_78;
  undefined1 local_6c [4];
  uint local_68;
  int iStack_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar10 = *(longlong *)
            (*(longlong *)(param_1 + 0x78) + (longlong)(*(int *)(param_2 + 4) / 0x492) * 8);
  lVar15 = (ulonglong)(uint)(*(int *)(param_2 + 4) % 0x492) * 0x38;
  puVar1 = (undefined8 *)(lVar10 + lVar15);
  FUN_146f192e4(param_1,param_2,puVar1,0);
  uVar7 = *(uint *)(lVar10 + 0x18 + lVar15);
  uVar13 = *(uint *)(lVar10 + 0x1c + lVar15);
  local_b0 = *(uint *)(lVar10 + 0x20 + lVar15);
  uVar2 = *(uint *)(lVar10 + 0x24 + lVar15);
  local_58 = 0;
  uStack_50 = 0;
  local_90 = puVar1;
  FUN_146f1937e(param_1,puVar1,&local_58);
  local_a0 = local_58 & 0xffffffff;
  local_ac = local_58._4_4_;
  uVar11 = uStack_50._4_4_;
  local_b8 = uVar7;
  local_b4 = uVar13;
  if (uStack_50._4_4_ != uVar2 ||
      (local_58._4_4_ != uVar13 || ((uint)uStack_50 != local_b0 || (uint)local_58 != uVar7))) {
    lVar10 = lVar10 + lVar15;
    uVar3 = *(undefined4 *)(local_90 + 5);
    *(uint *)(lVar10 + 0x18) = (uint)local_58;
    *(uint *)(lVar10 + 0x1c) = local_58._4_4_;
    *(uint *)(lVar10 + 0x20) = (uint)uStack_50;
    *(uint *)(lVar10 + 0x24) = uStack_50._4_4_;
    local_5c = uVar3;
    if (((((int)uStack_50._4_4_ < (int)local_b0) || ((int)uVar2 < (int)(uint)uStack_50)) ||
        ((int)uVar13 < (int)(uint)local_58)) || ((int)local_58._4_4_ < (int)uVar7)) {
      if ((int)uVar7 <= (int)uVar13) {
        do {
          if ((int)local_b0 <= (int)uVar2) {
            uVar13 = local_b0;
            do {
              if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
                lVar10 = *(longlong *)(param_1 + 0xe8);
                if (*(longlong *)(param_1 + 0xe8) == 0) {
                  lVar10 = param_1 + 0xe0;
                }
                iVar12 = *(int *)(lVar10 + (ulonglong)
                                           (*(int *)(param_1 + 0xf0) - 1U & uVar13 + uVar7 * 0x17) *
                                           4);
                if (iVar12 != -1) {
                  do {
                    lVar10 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar12 * 0x60;
                    if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar12 * 0x60) ==
                        CONCAT44(uVar13,uVar7)) goto LAB_146f199cd;
                    iVar12 = *(int *)(lVar10 + 0x58);
                  } while (iVar12 != -1);
                }
              }
              lVar10 = 0;
LAB_146f199cd:
              lVar15 = lVar10 + 8;
              if (lVar10 == 0) {
                lVar15 = 0;
              }
              FUN_144b016d0(lVar15,uVar3);
              bVar17 = uVar13 != uVar2;
              uVar13 = uVar13 + 1;
            } while (bVar17);
          }
          bVar17 = uVar7 != local_b4;
          uVar7 = uVar7 + 1;
        } while (bVar17);
      }
      if ((int)local_a0 <= (int)local_ac) {
        uVar9 = local_a0;
        do {
          uVar7 = (uint)uVar9;
          local_68 = uVar7;
          if ((int)(uint)uStack_50 <= (int)uStack_50._4_4_) {
            iVar14 = uStack_50._4_4_ + 1;
            iVar12 = (uint)uStack_50;
            do {
              *(ulonglong *)(param_1 + 0x100) = CONCAT44(iVar12,local_68);
              *(ulonglong *)(param_1 + 0x108) = local_58;
              *(ulonglong *)(param_1 + 0x110) = uStack_50;
              *(uint *)(param_1 + 0x118) = local_b8;
              *(uint *)(param_1 + 0x11c) = local_b4;
              *(uint *)(param_1 + 0x120) = local_b0;
              *(uint *)(param_1 + 0x124) = uVar2;
              *(longlong *)(param_1 + 0x128) =
                   (longlong)*(int *)(param_1 + 0xb0) - (longlong)*(int *)(param_1 + 0xdc);
              *(undefined8 *)(param_1 + 0x140) = local_90[2];
              uVar8 = local_90[1];
              *(undefined8 *)(param_1 + 0x130) = *local_90;
              *(undefined8 *)(param_1 + 0x138) = uVar8;
              *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(local_90 + 6);
              iStack_64 = iVar12;
              uVar8 = FUN_146f20116(param_1 + 0xa8,local_68 * 0x17 + iVar12,&local_68);
              FUN_144980568(uVar8,local_6c,&local_5c,0);
              iVar12 = iVar12 + 1;
            } while (iVar14 != iVar12);
          }
          uVar9 = (ulonglong)(uVar7 + 1);
        } while (uVar7 != local_ac);
      }
    }
    else {
      local_a4 = (uint)local_58;
      if ((int)(uint)local_58 < (int)uVar7) {
        local_a4 = uVar7;
      }
      local_a8 = uVar13;
      if ((int)local_58._4_4_ < (int)uVar13) {
        local_a8 = local_58._4_4_;
      }
      uVar5 = (uint)uStack_50;
      if ((int)(uint)uStack_50 < (int)local_b0) {
        uVar5 = local_b0;
      }
      uVar6 = uVar2;
      if ((int)uStack_50._4_4_ < (int)uVar2) {
        uVar6 = uStack_50._4_4_;
      }
      if ((int)uVar7 <= (int)uVar13) {
        local_88 = param_1 + 0xe0;
        local_98 = (ulonglong)uVar7;
        do {
          if ((int)local_b0 <= (int)uVar2) {
            iVar12 = (int)local_98;
            bVar17 = iVar12 < (int)local_a4;
            bVar4 = (int)local_a8 < iVar12;
            local_78 = local_98;
            local_80 = (ulonglong *)(ulonglong)(uint)(iVar12 * 0x17);
            uVar7 = local_b0;
            do {
              if (((int)uVar11 < (int)uVar7) || ((int)uVar7 < (int)uVar5 || (bVar4 || bVar17))) {
                if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
                  lVar10 = *(longlong *)(param_1 + 0xe8);
                  if (*(longlong *)(param_1 + 0xe8) == 0) {
                    lVar10 = local_88;
                  }
                  iVar12 = *(int *)(lVar10 + (ulonglong)
                                             (*(int *)(param_1 + 0xf0) - 1U & (int)local_80 + uVar7)
                                             * 4);
                  if (iVar12 != -1) {
                    do {
                      lVar10 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar12 * 0x60;
                      if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar12 * 0x60) ==
                          ((ulonglong)uVar7 << 0x20) + local_78) goto LAB_146f19903;
                      iVar12 = *(int *)(lVar10 + 0x58);
                    } while (iVar12 != -1);
                  }
                }
                lVar10 = 0;
LAB_146f19903:
                lVar15 = lVar10 + 8;
                if (lVar10 == 0) {
                  lVar15 = 0;
                }
                FUN_144b016d0(lVar15,uVar3);
              }
              bVar16 = uVar7 != uVar2;
              uVar7 = uVar7 + 1;
            } while (bVar16);
          }
          uVar7 = (uint)local_98;
          local_98 = (ulonglong)(uVar7 + 1);
        } while (uVar7 != local_b4);
      }
      if ((int)local_a0 <= (int)local_ac) {
        local_80 = (ulonglong *)(param_1 + 0x108);
        local_88 = param_1 + 0xa8;
        uVar9 = local_a0;
        uVar7 = local_a4;
        uVar13 = local_a8;
        do {
          uVar11 = (uint)uVar9;
          local_68 = uVar11;
          if ((int)(uint)uStack_50 <= (int)uStack_50._4_4_) {
            iVar14 = uStack_50._4_4_ + 1;
            iVar12 = (uint)uStack_50;
            do {
              iStack_64 = iVar12;
              if ((((int)uVar6 < iVar12) || (iVar12 < (int)uVar5)) ||
                 (((int)local_68 < (int)uVar7 || ((int)uVar13 < (int)local_68)))) {
                *(ulonglong *)(param_1 + 0x100) = CONCAT44(iVar12,local_68);
                *local_80 = local_58;
                local_80[1] = uStack_50;
                *(uint *)(param_1 + 0x118) = local_b8;
                *(uint *)(param_1 + 0x11c) = local_b4;
                *(uint *)(param_1 + 0x120) = local_b0;
                *(uint *)(param_1 + 0x124) = uVar2;
                *(longlong *)(param_1 + 0x128) =
                     (longlong)*(int *)(param_1 + 0xb0) - (longlong)*(int *)(param_1 + 0xdc);
                *(undefined8 *)(param_1 + 0x140) = local_90[2];
                uVar8 = local_90[1];
                *(undefined8 *)(param_1 + 0x130) = *local_90;
                *(undefined8 *)(param_1 + 0x138) = uVar8;
                *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(local_90 + 6);
                uVar8 = FUN_146f20116(local_88,local_68 * 0x17 + iVar12,&local_68);
                FUN_144980568(uVar8,local_6c,&local_5c,0);
                uVar7 = local_a4;
                uVar13 = local_a8;
              }
              iVar12 = iVar12 + 1;
            } while (iVar14 != iVar12);
          }
          uVar9 = (ulonglong)(uVar11 + 1);
        } while (uVar11 != local_ac);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f19a42 FUN_146f19a42 body=628 status=ok
// SIG undefined FUN_146f19a42(void)

undefined8 FUN_146f19a42(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  double *pdVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_98 [32];
  uint local_78;
  double local_70;
  undefined2 *local_68;
  undefined2 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(*(longlong *)(param_3 + 8) + 4 + (longlong)(int)param_4 * 8);
  if (iVar1 == 0) {
    FUN_140056680(param_2,L"NoGridFilter Info");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
  }
  iVar5 = iVar1 / 0x492 - iVar1 / -0x6dc00000;
  iVar4 = *(int *)(param_3 + 0x18);
  uVar7 = 0;
  uVar8 = 0;
  if ((((-1 < (longlong)iVar4) && (uVar8 = 0, iVar4 < *(int *)(param_1 + 0x70))) &&
      (lVar10 = (longlong)iVar4 * 0x1e0 + *(longlong *)(param_1 + 0x68), uVar8 = uVar7, lVar10 != 0)
      ) && (*(int *)(lVar10 + 0x198) != *(int *)(lVar10 + 0x1c4))) {
    lVar6 = lVar10 + 0x1c8;
    if (*(longlong *)(lVar10 + 0x1d0) != 0) {
      lVar6 = *(longlong *)(lVar10 + 0x1d0);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar10 + 0x1d8) - 1U & param_4) * 4);
    if (iVar4 != -1) {
      do {
        lVar6 = *(longlong *)(lVar10 + 400) + (longlong)iVar4 * 0x10;
        if (*(uint *)(*(longlong *)(lVar10 + 400) + (longlong)iVar4 * 0x10) == param_4) {
          if ((ushort *)(lVar6 + 4) != (ushort *)0x0 && lVar6 != 0) {
            uVar8 = (uint)*(ushort *)(lVar6 + 4);
          }
          break;
        }
        iVar4 = *(int *)(lVar6 + 8);
      } while (iVar4 != -1);
    }
  }
  pdVar9 = (double *)
           ((longlong)(iVar1 + iVar5 * -0x492) * 0x38 +
           *(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar5 * 8));
  lVar10 = param_3 + 0x20;
  if (*(longlong *)(param_3 + 0x140) != 0) {
    lVar10 = *(longlong *)(param_3 + 0x140);
  }
  if ((longlong)*(int *)(param_3 + 0x148) == 0) {
    dVar12 = 3.4e+38;
    dVar11 = 3.4e+38;
  }
  else {
    dVar11 = 3.4e+38;
    lVar6 = 0;
    dVar12 = 3.4e+38;
    do {
      dVar2 = *(double *)(lVar10 + 0x10 + lVar6) - *pdVar9;
      dVar3 = *(double *)(lVar10 + 0x18 + lVar6) - pdVar9[1];
      dVar2 = SQRT(dVar3 * dVar3 + dVar2 * dVar2);
      if (dVar11 <= dVar2) {
        dVar2 = dVar11;
      }
      dVar11 = dVar2;
      dVar2 = ABS(pdVar9[2] - *(double *)(lVar10 + 0x20 + lVar6));
      if (dVar12 <= dVar2) {
        dVar2 = dVar12;
      }
      dVar12 = dVar2;
      lVar6 = lVar6 + 0x48;
    } while ((longlong)*(int *)(param_3 + 0x148) * 0x48 != lVar6);
  }
  FUN_141706e52(pdVar9,&local_60);
  local_68 = local_60;
  if (local_58 == 0) {
    local_68 = &DAT_149dfb77a;
  }
  local_78 = uVar8;
  local_70 = dVar12;
  FUN_140002266(param_2,
                L"[GridFilter] Dist2D: %.2f, CullDistance: %.2f, CulledFrameCount: %u, DistZ: %.2f, Pos: %s"
                ,dVar11,(double)*(float *)(pdVar9 + 6));
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f19cb8 FUN_146f19cb8 body=39 status=ok
// SIG undefined FUN_146f19cb8(void)

void FUN_146f19cb8(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_146f1899e();
  uVar1 = FUN_146f46348(*param_2);
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  return;
}



// FUNCTION 146f19cf0 FUN_146f19cf0 body=285 status=ok
// SIG undefined FUN_146f19cf0(void)

void FUN_146f19cf0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_98 [40];
  int *local_70;
  longlong local_68;
  longlong local_60;
  int *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
  local_4c = *(int *)(*(longlong *)(param_1 + 0x158) + 0x28);
  local_58 = *(int **)(*(longlong *)(param_1 + 0x158) + 0x18);
  local_50 = local_4c + 0x1fU >> 5;
  if (local_4c == 0) {
    local_58 = &local_4c;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  local_70 = local_58;
  local_60 = param_2;
  if (iVar1 != 0) {
    if (0x1f < iVar1 + 0x1fU) {
      local_68 = *(longlong *)(param_1 + 0x28);
      uVar3 = iVar1 + 0x1fU >> 5;
      uVar6 = 0;
      iVar7 = 0;
      do {
        uVar4 = 0xffffffff;
        if (uVar6 == uVar3 - 1) {
          uVar4 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
        }
        uVar4 = uVar4 & *(uint *)(local_68 + uVar6 * 4) & local_70[uVar6];
        iVar5 = iVar7;
        if (uVar4 != 0) {
          do {
            if ((uVar4 & 1) != 0) {
              FUN_146f1947c(param_1,(longlong)iVar5 * 8 + *(longlong *)(local_60 + 0x10));
            }
            bVar2 = 1 < uVar4;
            uVar4 = uVar4 >> 1;
            iVar5 = iVar5 + 1;
          } while (bVar2);
        }
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + 0x20;
      } while (uVar6 != uVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f19e0e FUN_146f19e0e body=62 status=ok
// SIG undefined FUN_146f19e0e(void)

void FUN_146f19e0e(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)
           FUN_146f19e4c(*(undefined8 *)(param_1 + 0x158),*(undefined4 *)(param_2 + 5));
  uVar2 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  param_2[2] = puVar3[2];
  fVar1 = *(float *)(puVar3 + 3);
  *(float *)(param_2 + 6) = fVar1;
  *(float *)((longlong)param_2 + 0x34) = fVar1 * fVar1;
  return;
}



// FUNCTION 146f19e4c FUN_146f19e4c body=169 status=ok
// SIG undefined FUN_146f19e4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146f19e4c(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  
  if ((*(uint *)(*param_1 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) == 0) {
    puVar2 = &DAT_14c9995d0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9995f0) {
      FUN_144b3d300(&DAT_14c9995f0);
      if (DAT_14c9995f0 == -1) {
        uRam000000014c9995e0 = 0;
        uRam000000014c9995e4 = 0;
        _DAT_14c9995d0 = 0;
        uRam000000014c9995d8 = 0;
        _DAT_14c9995dc = 0;
        _Init_thread_footer(&DAT_14c9995f0);
      }
    }
  }
  else {
    uVar1 = param_2 + 0x7ff;
    if (-1 < (int)param_2) {
      uVar1 = param_2;
    }
    puVar2 = (undefined *)
             ((longlong)((int)param_2 % 0x800) * 0x20 +
             *(longlong *)(param_1[9] + (longlong)((int)uVar1 >> 0xb) * 8));
  }
  return puVar2;
}



// FUNCTION 146f19f02 FUN_146f19f02 body=65 status=ok
// SIG undefined FUN_146f19f02(void)

void FUN_146f19f02(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_146f206d5(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146f19f44(param_1 + 8);
  return;
}



// FUNCTION 146f19f44 FUN_146f19f44 body=52 status=ok
// SIG undefined FUN_146f19f44(void)

void FUN_146f19f44(longlong *param_1)

{
  FUN_146f2059c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f19f78 FUN_146f19f78 body=119 status=ok
// SIG undefined FUN_146f19f78(void)

undefined8 FUN_146f19f78(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      if (*(uint *)(lVar3 + lVar5) == (param_2 & 0xffffff)) {
        return 0;
      }
      lVar5 = lVar5 + 4;
    } while (lVar4 * 4 - lVar5 != 0);
  }
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_146f1bce4(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(uint *)(param_1 + lVar4 * 4) = param_2 & 0xffffff;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 146f19ff0 FUN_146f19ff0 body=138 status=ok
// SIG undefined FUN_146f19ff0(void)

void FUN_146f19ff0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = *param_2;
  uVar1 = 0x1000000;
  if (*(uint *)((longlong)param_2 + 0xc) < 0x1000000) {
    uVar1 = *(uint *)((longlong)param_2 + 0xc);
  }
  *(uint *)(param_1 + 10) = uVar1;
  FUN_146f20704(param_1 + 1,local_30);
  local_28[2] = 0;
  local_28[3] = 0;
  *local_28 = 0;
  local_28[1] = 0;
  FUN_146f1a07c(param_1 + 8,*(undefined4 *)(param_2 + 1));
  FUN_146f14ba4(param_1 + 0xb,*(undefined4 *)(param_2 + 1));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1a07c FUN_146f1a07c body=122 status=ok
// SIG undefined FUN_146f1a07c(void)

void FUN_146f1a07c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f20810(param_1,iVar1);
    }
    FUN_146f207e9((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146f208a4(param_1,param_2,iVar1 - param_2);
    FUN_146f20906(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f1a0f8 FUN_146f1a0f8 body=40 status=ok
// SIG undefined FUN_146f1a0f8(void)

void FUN_146f1a0f8(longlong param_1,undefined4 param_2)

{
  FUN_146f1a07c(param_1 + 0x40);
  FUN_146efc8cc(param_1 + 0x58,param_2);
  return;
}



// FUNCTION 146f1a120 FUN_146f1a120 body=329 status=ok
// SIG undefined FUN_146f1a120(void)

uint * FUN_146f1a120(longlong param_1,uint *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 8);
  lVar4 = param_1 + 0x18;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar4;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x30);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar4)) {
    do {
      if (*(longlong *)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20) == param_3) {
        lVar4 = *local_88 + (longlong)iStack_6c * 0x20;
        uVar3 = (uint)((ulonglong)(lVar4 - *plVar1) >> 5);
        if (uVar3 != 0) {
          uVar2 = *(uint *)(lVar4 + 0x18);
          *param_2 = *(int *)(param_1 + 0x70) << 0x18 | uVar3 & 0xffffff;
          param_2[1] = uVar2;
          goto LAB_146f1a1ba;
        }
        break;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while ((CONCAT44(uStack_74,uStack_78) != lVar4 || iStack_6c != iVar5) || local_88 != plVar1);
  }
  param_2[0] = 0;
  param_2[1] = 0;
LAB_146f1a1ba:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f1a26a FUN_146f1a26a body=86 status=ok
// SIG undefined FUN_146f1a26a(void)

undefined8 FUN_146f1a26a(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (((param_2 != 0) &&
      (uVar1 = (uint)param_2,
      ((uint)((ulonglong)param_2 >> 0x18) & 0xff) == *(uint *)(param_1 + 0x70))) &&
     ((int)(uVar1 & 0xffffff) < *(int *)(param_1 + 0x30))) {
    lVar2 = param_1 + 0x18;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
    }
    if ((*(uint *)(lVar2 + (ulonglong)((uVar1 & 0xffffff) >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
      return CONCAT71((uint7)((ulonglong)param_2 >> 0x28),
                      *(int *)(*(longlong *)(param_1 + 8) + 0x18 +
                              (ulonglong)((uVar1 & 0xffffff) << 5)) ==
                      (int)((ulonglong)param_2 >> 0x20));
    }
  }
  return 0;
}



// FUNCTION 146f1a2c0 FUN_146f1a2c0 body=200 status=ok
// SIG undefined FUN_146f1a2c0(void)

void FUN_146f1a2c0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_146f1a26a();
  if (cVar3 != '\0') {
    lVar1 = *(longlong *)(param_1 + 8);
    uVar4 = (ulonglong)((param_2 & 0xffffff) << 5);
    lVar6 = (longlong)*(int *)(lVar1 + 8 + uVar4);
    if (lVar6 != 0) {
      lVar2 = *(longlong *)(lVar1 + uVar4);
      lVar5 = 0;
      do {
        local_44 = param_2 & 0xffffff;
        FUN_146f1bd68((longlong)*(int *)(lVar2 + lVar5) * 0x18 + *(longlong *)(param_1 + 0x40),
                      &local_44);
        lVar5 = lVar5 + 4;
      } while (lVar6 * 4 != lVar5);
    }
    *(undefined4 *)(lVar1 + uVar4 + 8) = 0;
    if (*(int *)(lVar1 + uVar4 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1a3a2 FUN_146f1a3a2 body=50 status=ok
// SIG undefined FUN_146f1a3a2(void)

void FUN_146f1a3a2(longlong *param_1,uint param_2)

{
  if (*(longlong *)(*param_1 + (ulonglong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_146f209b4(param_1,param_2);
  return;
}



// FUNCTION 146f1a3d4 FUN_146f1a3d4 body=56 status=ok
// SIG undefined FUN_146f1a3d4(void)

longlong FUN_146f1a3d4(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (((param_2 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(param_1 + 0x30))) {
    lVar1 = param_1 + 0x18;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x28);
    }
    if ((*(uint *)(lVar1 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      return (ulonglong)param_2 * 0x20 + *(longlong *)(param_1 + 8);
    }
  }
  return 0;
}



// FUNCTION 146f1a40c FUN_146f1a40c body=133 status=ok
// SIG undefined FUN_146f1a40c(void)

longlong FUN_146f1a40c(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  cVar2 = FUN_146f1a26a();
  if (cVar2 != '\0') {
    if (param_3 == 0) {
      return 0;
    }
    if ((ulonglong)((param_2 & 0xffffff) << 5) + *(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x40) + (longlong)param_3 * 0x18;
    lVar4 = *(longlong *)(lVar3 + 8);
    if (*(longlong *)(lVar3 + 8) == 0) {
      lVar4 = lVar3;
    }
    lVar3 = (longlong)*(int *)(lVar3 + 0x10);
    if (lVar3 != 0) {
      lVar1 = lVar3 * 4;
      lVar5 = 0;
      do {
        bVar6 = *(uint *)(lVar4 + lVar5) == (param_2 & 0xffffff);
        lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar6);
        if (bVar6) {
          return lVar3;
        }
        bVar6 = lVar1 + -4 != lVar5;
        lVar5 = lVar5 + 4;
      } while (bVar6);
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 146f1a492 FUN_146f1a492 body=108 status=ok
// SIG undefined FUN_146f1a492(void)

undefined8 FUN_146f1a492(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_2 + 8);
  if (*(longlong *)(param_2 + 8) == 0) {
    lVar3 = param_2;
  }
  if ((longlong)*(int *)(param_2 + 0x10) != 0) {
    lVar2 = (longlong)*(int *)(param_2 + 0x10) * 4;
    lVar4 = 0;
    do {
      uVar1 = *(uint *)(lVar3 + lVar4);
      if ((0 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x30))) {
        lVar5 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar5 = param_1 + 0x18;
        }
        if ((((*(uint *)(lVar5 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) &&
            (lVar5 = (ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 8), lVar5 != 0)) &&
           ((*(byte *)(lVar5 + 0x1c) & 3) != 0)) {
          return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
        }
      }
      lVar4 = lVar4 + 4;
    } while (lVar2 != lVar4);
  }
  return 0;
}



// FUNCTION 146f1a4fe FUN_146f1a4fe body=47 status=ok
// SIG undefined FUN_146f1a4fe(void)

void FUN_146f1a4fe(longlong param_1,uint param_2)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_146f1a26a();
  if ((cVar2 != '\0') &&
     (lVar3 = (ulonglong)((param_2 & 0xffffff) << 5) + *(longlong *)(param_1 + 8), lVar3 != 0)) {
    pbVar1 = (byte *)(lVar3 + 0x1c);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return;
}



// FUNCTION 146f1a52e FUN_146f1a52e body=54 status=ok
// SIG undefined FUN_146f1a52e(void)

bool FUN_146f1a52e(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  cVar1 = FUN_146f1a26a();
  if ((cVar1 == '\0') ||
     (lVar2 = (ulonglong)((param_2 & 0xffffff) << 5) + *(longlong *)(param_1 + 8), lVar2 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = (*(byte *)(lVar2 + 0x1c) & 3) != 0;
  }
  return bVar3;
}



// FUNCTION 146f1a564 FUN_146f1a564 body=240 status=ok
// SIG undefined FUN_146f1a564(void)

void FUN_146f1a564(longlong param_1,uint param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x48))) {
    lVar5 = *(longlong *)(param_1 + 0x40) + (ulonglong)param_2 * 0x18;
    uVar1 = *(uint *)(lVar5 + 0x10);
    uVar3 = (ulonglong)uVar1;
    lVar4 = *(longlong *)(lVar5 + 8);
    if (*(longlong *)(lVar5 + 8) == 0) {
      lVar4 = lVar5;
    }
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    if (*(int *)((longlong)param_3 + 0xc) < (int)uVar1) {
      FUN_146f20a1c(param_3,uVar1);
    }
    if (uVar3 != 0) {
      lVar5 = 0;
      do {
        FUN_146f16724(param_1,&local_48,*(undefined4 *)(lVar4 + lVar5));
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_146f20a7c(param_3,iVar2);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) = local_48;
        lVar5 = lVar5 + 4;
      } while (uVar3 << 2 != lVar5);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f1a65e FUN_146f1a65e body=63 status=ok
// SIG undefined FUN_146f1a65e(void)

void FUN_146f1a65e(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  
  memset((void *)*param_2,(int)CONCAT71((int7)((ulonglong)param_2 >> 8),0xff),
         (ulonglong)*(uint *)(param_2 + 1) << 2);
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    uVar2 = (ulonglong)((int)param_2[1] - 1);
    bVar1 = -(char)*(int *)((longlong)param_2 + 0xc);
    *(uint *)(*param_2 + uVar2 * 4) =
         (uint)(*(int *)(*param_2 + uVar2 * 4) << (bVar1 & 0x1f)) >> (bVar1 & 0x1f);
  }
  return;
}



// FUNCTION 146f1a69e FUN_146f1a69e body=145 status=ok
// SIG undefined FUN_146f1a69e(void)

void FUN_146f1a69e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1448759c8(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_14480809c(param_1 + 0x10,0);
  }
  FUN_1400800e2(param_1 + 0x20,0);
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_14480809c(param_1 + 0x70,0);
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_14480809c(param_1 + 0x88,0);
    return;
  }
  return;
}



// FUNCTION 146f1a730 FUN_146f1a730 body=12 status=ok
// SIG undefined FUN_146f1a730(void)

void FUN_146f1a730(longlong param_1)

{
  FUN_146efc8cc(param_1 + 0x88);
  return;
}



// FUNCTION 146f1a73c FUN_146f1a73c body=526 status=ok
// SIG undefined FUN_146f1a73c(void)

uint FUN_146f1a73c(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_88 [40];
  uint local_60;
  uint local_5c;
  uint *local_58;
  uint *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5c = param_2;
  if ((int)param_1[5] != *(int *)((longlong)param_1 + 0x54)) {
    plVar5 = param_1 + 0xb;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0xc];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0xd] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar4 = param_1[4];
      do {
        lVar2 = lVar4 + (longlong)iVar6 * 0x10;
        if (*(uint *)(lVar4 + (longlong)iVar6 * 0x10) == param_2) {
          if ((uint *)(lVar2 + 4) != (uint *)0x0 && lVar2 != 0) {
            uVar3 = *(uint *)(lVar2 + 4);
            goto LAB_146f1a8ad;
          }
          break;
        }
        iVar6 = *(int *)(lVar2 + 8);
      } while (iVar6 != -1);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((ulonglong)*(uint *)(param_1 + 0xf) == 0) {
LAB_146f1a7a3:
    local_60 = uVar3;
    FUN_146efc8cc(param_1 + 0xe);
    iVar6 = (int)param_1[3];
    *(int *)(param_1 + 3) = iVar6 + 0x100;
    if ((uint)(*(int *)((longlong)param_1 + 0x1c) - iVar6) < 0x100) {
      FUN_1447808da(param_1 + 2);
    }
    memset((void *)((longlong)iVar6 * 4 + param_1[2]),0,0x400);
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 0x100;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar6) < 0x100) {
      FUN_14488eebe(param_1);
    }
    memset((void *)((longlong)iVar6 * 2 + *param_1),0,0x200);
    lVar4 = param_1[0xe];
    uVar9 = uVar3;
LAB_146f1a852:
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar9 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
    *(uint *)(param_1[2] + (longlong)(int)uVar9 * 4) = param_2;
    local_58 = &local_5c;
    local_50 = &local_60;
    FUN_14499e2d8(param_1 + 4,local_44,&local_58,0);
    puVar1 = (uint *)(param_1[0x11] + (ulonglong)(local_5c >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)local_5c & 0x1f);
    uVar3 = local_60;
LAB_146f1a8ad:
    if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar3;
  }
  lVar4 = param_1[0xe];
  iVar6 = 0;
  uVar8 = 0;
LAB_146f1a78a:
  uVar9 = *(uint *)(lVar4 + uVar8 * 4);
  if (uVar9 == 0xffffffff) goto code_r0x000146f1a798;
  uVar9 = uVar9 ^ 0xffffffff;
  if (uVar9 == 0) {
    iVar7 = 0x20;
  }
  else {
    iVar7 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
      }
    }
  }
  uVar9 = iVar7 - iVar6;
  local_60 = uVar9;
  if (uVar9 < uVar3) goto LAB_146f1a852;
  goto LAB_146f1a7a3;
code_r0x000146f1a798:
  uVar8 = uVar8 + 1;
  iVar6 = iVar6 + -0x20;
  if (*(uint *)(param_1 + 0xf) == uVar8) goto LAB_146f1a7a3;
  goto LAB_146f1a78a;
}



// FUNCTION 146f1a94c FUN_146f1a94c body=182 status=ok
// SIG undefined FUN_146f1a94c(void)

void FUN_146f1a94c(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar5 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x60);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      do {
        lVar1 = lVar5 + (longlong)iVar6 * 0x10;
        if (*(uint *)(lVar5 + (longlong)iVar6 * 0x10) == param_2) {
          if ((uint *)(lVar1 + 4) == (uint *)0x0 || lVar1 == 0) {
            return;
          }
          uVar3 = *(uint *)(lVar1 + 4);
          bVar4 = (byte)uVar3 & 0x1f;
          puVar2 = (uint *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar3 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
          uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)uVar3 * 4);
          FUN_1409a11ae((longlong *)(param_1 + 0x20),uVar3);
          bVar4 = (byte)uVar3 & 0x1f;
          puVar2 = (uint *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar3 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
          return;
        }
        iVar6 = *(int *)(lVar1 + 8);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 146f1aa0c FUN_146f1aa0c body=147 status=ok
// SIG undefined FUN_146f1aa0c(void)

void FUN_146f1aa0c(longlong param_1,int param_2)

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



// FUNCTION 146f1aaa0 FUN_146f1aaa0 body=148 status=ok
// SIG undefined FUN_146f1aaa0(void)

undefined8 FUN_146f1aaa0(undefined8 param_1)

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
  uVar1 = FUN_1459e2920();
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



// FUNCTION 146f1ab35 FUN_146f1ab35 body=51 status=ok
// SIG undefined FUN_146f1ab35(void)

void FUN_146f1ab35(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_146f11920();
      }
      plVar1 = plVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146f1ab68 FUN_146f1ab68 body=51 status=ok
// SIG undefined FUN_146f1ab68(void)

void FUN_146f1ab68(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_146f11920();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146f1ab9c FUN_146f1ab9c body=132 status=ok
// SIG undefined FUN_146f1ab9c(void)

void FUN_146f1ab9c(longlong param_1,int param_2)

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



// FUNCTION 146f1aca6 FUN_146f1aca6 body=59 status=ok
// SIG undefined FUN_146f1aca6(void)

undefined8 FUN_146f1aca6(longlong *param_1)

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



// FUNCTION 146f1ad47 FUN_146f1ad47 body=51 status=ok
// SIG undefined FUN_146f1ad47(void)

void FUN_146f1ad47(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_146f11920();
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 146f1ad7a FUN_146f1ad7a body=96 status=ok
// SIG undefined FUN_146f1ad7a(void)

void FUN_146f1ad7a(longlong *param_1)

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
        thunk_FUN_1400020a8(lVar2,0x2000);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 146f1adda FUN_146f1adda body=81 status=ok
// SIG undefined FUN_146f1adda(void)

void FUN_146f1adda(longlong *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_3) {
    FUN_146f1ae52(param_1,iVar1);
  }
  FUN_146f1ae2b((longlong)iVar1 * 8 + *param_1,param_2,param_3);
  return;
}



// FUNCTION 146f1ae2b FUN_146f1ae2b body=38 status=ok
// SIG undefined FUN_146f1ae2b(void)

void FUN_146f1ae2b(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + lVar2 * 8);
      *(longlong *)(param_1 + lVar2 * 8) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 1;
    } while (param_3 != (int)lVar2);
  }
  return;
}



// FUNCTION 146f1ae52 FUN_146f1ae52 body=132 status=ok
// SIG undefined FUN_146f1ae52(void)

void FUN_146f1ae52(longlong param_1,int param_2)

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



// FUNCTION 146f1aed8 FUN_146f1aed8 body=137 status=ok
// SIG undefined FUN_146f1aed8(void)

ulonglong FUN_146f1aed8(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x88);
  uVar5 = (ulonglong)iVar1;
  if (uVar5 != 0) {
    lVar6 = uVar5 * 4;
    uVar4 = 0;
    do {
      if (*(int *)(lVar3 + uVar4 * 4) == *param_2) {
        if ((int)uVar4 != -1) {
          uVar5 = uVar4 & 0xffffffff;
          goto LAB_146f1af3b;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + -4;
    } while (lVar6 != 0);
  }
  *(uint *)(param_1 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar1 + 1U) {
    FUN_146f1af62(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 0x80);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(int *)(param_1 + uVar5 * 4) = *param_2;
LAB_146f1af3b:
  return uVar5 & 0xffffffff;
}



// FUNCTION 146f1af62 FUN_146f1af62 body=125 status=ok
// SIG undefined FUN_146f1af62(void)

void FUN_146f1af62(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x20;
    if (0x20 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_146f1afe0(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f1afe0 FUN_146f1afe0 body=142 status=ok
// SIG undefined FUN_146f1afe0(void)

void FUN_146f1afe0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f1b06e FUN_146f1b06e body=135 status=ok
// SIG undefined FUN_146f1b06e(void)

void FUN_146f1b06e(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x108) = param_2;
    if ((uint)(*(int *)(param_1 + 0x10c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f1b220(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar2 = param_1;
    }
    FUN_146f1b20c(lVar2 + (longlong)iVar1 * 8,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x108) = param_2, param_3 == '\x01')) {
      FUN_146f1b32c(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f1b0f6 FUN_146f1b0f6 body=135 status=ok
// SIG undefined FUN_146f1b0f6(void)

void FUN_146f1b0f6(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x88) = param_2;
    if ((uint)(*(int *)(param_1 + 0x8c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f1af62(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar2 = param_1;
    }
    FUN_146f1b3df(lVar2 + (longlong)iVar1 * 4,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x88) = param_2, param_3 == '\x01')) {
      FUN_146f1b3f2(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f1b17e FUN_146f1b17e body=141 status=ok
// SIG undefined FUN_146f1b17e(void)

void FUN_146f1b17e(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x208);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x208) = param_2;
    if ((uint)(*(int *)(param_1 + 0x20c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f1b4b8(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar2 = param_1;
    }
    FUN_146f1b4a5((longlong)iVar1 * 0x10 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x208) = param_2, param_3 == '\x01')) {
      FUN_146f1b5c4(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f1b20c FUN_146f1b20c body=19 status=ok
// SIG undefined FUN_146f1b20c(void)

void FUN_146f1b20c(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 146f1b220 FUN_146f1b220 body=125 status=ok
// SIG undefined FUN_146f1b220(void)

void FUN_146f1b220(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x20;
    if (0x20 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x10c) = (int)uVar4;
    FUN_146f1b29e(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f1b29e FUN_146f1b29e body=142 status=ok
// SIG undefined FUN_146f1b29e(void)

void FUN_146f1b29e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f1b32c FUN_146f1b32c body=74 status=ok
// SIG undefined FUN_146f1b32c(void)

void FUN_146f1b32c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f1b376(param_1,*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c));
  if (iVar1 == *(int *)(param_1 + 0x10c)) {
    return;
  }
  *(int *)(param_1 + 0x10c) = iVar1;
  FUN_146f1b29e(param_1,*(undefined4 *)(param_1 + 0x108),iVar1,8);
  return;
}



// FUNCTION 146f1b376 FUN_146f1b376 body=105 status=ok
// SIG undefined FUN_146f1b376(void)

ulonglong FUN_146f1b376(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x20;
  if (0x20 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146f1b3df FUN_146f1b3df body=19 status=ok
// SIG undefined FUN_146f1b3df(void)

void FUN_146f1b3df(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 146f1b3f2 FUN_146f1b3f2 body=74 status=ok
// SIG undefined FUN_146f1b3f2(void)

void FUN_146f1b3f2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f1b43c(param_1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_146f1afe0(param_1,*(undefined4 *)(param_1 + 0x88),iVar1,4);
  return;
}



// FUNCTION 146f1b43c FUN_146f1b43c body=105 status=ok
// SIG undefined FUN_146f1b43c(void)

ulonglong FUN_146f1b43c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x20;
  if (0x20 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146f1b4a5 FUN_146f1b4a5 body=19 status=ok
// SIG undefined FUN_146f1b4a5(void)

void FUN_146f1b4a5(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 146f1b4b8 FUN_146f1b4b8 body=125 status=ok
// SIG undefined FUN_146f1b4b8(void)

void FUN_146f1b4b8(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x20;
    if (0x20 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x20c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x20c) = (int)uVar4;
    FUN_146f1b536(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f1b536 FUN_146f1b536 body=142 status=ok
// SIG undefined FUN_146f1b536(void)

void FUN_146f1b536(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f1b5c4 FUN_146f1b5c4 body=74 status=ok
// SIG undefined FUN_146f1b5c4(void)

void FUN_146f1b5c4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f1b60e(param_1,*(undefined4 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x20c));
  if (iVar1 == *(int *)(param_1 + 0x20c)) {
    return;
  }
  *(int *)(param_1 + 0x20c) = iVar1;
  FUN_146f1b536(param_1,*(undefined4 *)(param_1 + 0x208),iVar1,0x10);
  return;
}



// FUNCTION 146f1b60e FUN_146f1b60e body=105 status=ok
// SIG undefined FUN_146f1b60e(void)

ulonglong FUN_146f1b60e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x20;
  if (0x20 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146f1b678 FUN_146f1b678 body=168 status=ok
// SIG undefined FUN_146f1b678(void)

void FUN_146f1b678(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 0x2118);
  if ((longlong)(int)uVar2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x2110);
    lVar3 = *plVar1;
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x2118) = 0;
    uVar5 = 0;
    lVar6 = 0;
    do {
      bVar4 = FUN_146f25dd8(param_1,lVar3 + lVar6);
      uVar5 = uVar5 + bVar4;
      if (bVar4 == 0) break;
      bVar7 = (longlong)(int)uVar2 * 8 + -8 != lVar6;
      lVar6 = lVar6 + 8;
    } while (bVar7);
    if (uVar2 != uVar5) {
      FUN_146f1adda(plVar1,lVar3 + (ulonglong)uVar5 * 8,uVar2 - uVar5);
    }
    FUN_146f1d381(lVar3,uVar2);
    if (lVar3 != 0) {
      FUN_1400020a8(lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 146f1b720 FUN_146f1b720 body=61 status=ok
// SIG undefined FUN_146f1b720(void)

void FUN_146f1b720(longlong param_1)

{
  if (param_1 != 0) {
    FUN_146f5b28c(param_1 + 0x18);
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    thunk_FUN_1400020a8(param_1,0x60);
    return;
  }
  return;
}



// FUNCTION 146f1b75e FUN_146f1b75e body=52 status=ok
// SIG undefined FUN_146f1b75e(void)

void FUN_146f1b75e(longlong *param_1)

{
  FUN_146f1b792();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f1b792 FUN_146f1b792 body=310 status=ok
// SIG undefined FUN_146f1b792(void)

void FUN_146f1b792(longlong *param_1)

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
      FUN_146f15a4a(*local_68 + (longlong)iStack_4c * 0x38 + 8);
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



// FUNCTION 146f1b8ca FUN_146f1b8ca body=186 status=ok
// SIG undefined FUN_146f1b8ca(void)

undefined8 FUN_146f1b8ca(longlong *param_1,uint param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        lVar6 = *param_1 + (longlong)iVar7 * 0x20;
        if (*(uint *)(*param_1 + (longlong)iVar7 * 0x20) == param_2) {
          if (lVar6 == 0) {
            return 0;
          }
          if ((longlong)*(int *)(lVar6 + 8) == -1) {
            return 0;
          }
          lVar4 = (longlong)*(int *)(lVar6 + 8) * 0x30;
          lVar2 = *(longlong *)(param_1[10] + 0x20 + lVar4);
          lVar5 = param_1[10] + lVar4;
          if (lVar2 != 0) {
            lVar5 = lVar2;
          }
          *param_3 = lVar5;
          if ((longlong)*(int *)(lVar6 + 0x10) == -1) {
            lVar6 = 0;
          }
          else {
            lVar2 = param_1[0x11] + (longlong)*(int *)(lVar6 + 0x10) * 0x18;
            lVar6 = *(longlong *)(lVar2 + 8);
            if (lVar6 == 0) {
              lVar6 = lVar2;
            }
          }
          param_3[1] = lVar6;
          uVar1 = *(undefined4 *)(param_1[10] + 0x28 + lVar4);
          *(undefined4 *)(param_3 + 2) = uVar1;
          return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
        }
        iVar7 = *(int *)(lVar6 + 0x18);
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f1b984 FUN_146f1b984 body=159 status=ok
// SIG undefined FUN_146f1b984(void)

void FUN_146f1b984(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar7 != -1) {
      do {
        lVar5 = *param_1 + (longlong)iVar7 * 0x20;
        if (*(uint *)(*param_1 + (longlong)iVar7 * 0x20) == param_3) {
          if (((int *)(lVar5 + 4) != (int *)0x0 && lVar5 != 0) &&
             (lVar5 = (longlong)*(int *)(lVar5 + 4), lVar5 != -1)) {
            lVar1 = param_1[10];
            lVar5 = lVar5 * 0x30;
            lVar2 = *(longlong *)(lVar1 + 0x20 + lVar5);
            lVar6 = lVar1 + lVar5;
            if (lVar2 != 0) {
              lVar6 = lVar2;
            }
            *param_2 = lVar6;
            uVar3 = *(undefined4 *)(lVar1 + 0x28 + lVar5);
            goto LAB_146f1b998;
          }
          break;
        }
        iVar7 = *(int *)(lVar5 + 0x18);
      } while (iVar7 != -1);
    }
  }
  *param_2 = 0;
  uVar3 = 0;
LAB_146f1b998:
  *(undefined4 *)(param_2 + 1) = uVar3;
  return;
}



// FUNCTION 146f1ba24 FUN_146f1ba24 body=73 status=ok
// SIG undefined FUN_146f1ba24(void)

longlong * FUN_146f1ba24(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}



// FUNCTION 146f1ba6e FUN_146f1ba6e body=96 status=ok
// SIG undefined FUN_146f1ba6e(void)

void FUN_146f1ba6e(longlong *param_1)

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
        thunk_FUN_1400020a8(lVar2,0x1000);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 146f1bace FUN_146f1bace body=142 status=ok
// SIG undefined FUN_146f1bace(void)

void FUN_146f1bace(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x308);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x20;
    if (0x20 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x30c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x18)) {
        uVar4 = uVar3 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x30c) = (int)uVar4;
    FUN_146f1bb5e(param_1,param_2,uVar4,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f1bb5e FUN_146f1bb5e body=150 status=ok
// SIG undefined FUN_146f1bb5e(void)

void FUN_146f1bb5e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x300);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x300,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x300),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x300,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f1bbf4 FUN_146f1bbf4 body=93 status=ok
// SIG undefined FUN_146f1bbf4(void)

longlong FUN_146f1bbf4(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_146f1bc52(param_1);
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



// FUNCTION 146f1bc52 FUN_146f1bc52 body=146 status=ok
// SIG undefined FUN_146f1bc52(void)

longlong * FUN_146f1bc52(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  return param_1;
}


